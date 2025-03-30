;----------------------------------------------------------------------
; System 5 depending variables and routines
;----------------------------------------------------------------------

; Flags

	real		= 0		; 0=emulator, 1=real system5

; Global variables

	t_red		= 1		; Text colour definition filters
	t_green		= 2
	t_yellow	= 3
	t_blue		= 4
	t_magenta	= 5
	t_cyan		= 6
	t_white		= 7

	g_red		= 17		; Graphics colour definition filters
	g_green		= 18
	g_yellow	= 19
	g_blue		= 20
	g_magenta	= 21
	g_cyan		= 22
	g_white		= 23

	ScrWidth	= 40
	ScrHeight	= 25

.if real=1
	IRQtime		= 20000		; 50Hz at 1Mhz clock
.else
	IRQtime		= 40000		; 50Hz at 2Mhz clock
.endif

; System constants

	IRQVEC		= $0204		; Interrupt vector
	ScreenAddr	= $0400		; Startaddress video RAM

	MC6845_Reg	= $0800		; MC6845 CRT controller register ptr
	MC6845_Dat	= $0801		; MC6845 CRT controller data

	VIA1		= $0e20
	PORT_A		= VIA1+$1	; Keyboard 
	DIR_A		= VIA1+$3	; Datadirection register
	Timer1_Low  	= VIA1+$4	; Timer 1 low byte
	Timer1_High 	= VIA1+$5	; Timer 1 high byte
	Timer2_Low	= VIA1+$8	; Timer 2 low byte
	Timer2_High	= VIA1+$9	; Timer 2 high byte
	ACR		= VIA1+$b	; Auxiliary Control Register
	PCR		= VIA1+$c	; Peripheral Control Register
	IFR		= VIA1+$d 	; Interrupt Flag Register
	IER		= VIA1+$e	; Interupt Enable Register

	MAP 		= $D800		; properties map buffer (4x256 bytes)
	SCADTB_lb 	= $DC00		; screen address table lo-byte (256 bytes)
	SCADTB_hb 	= $DD00		; screen address table hi-byte (256 bytes)
	SHRAPN 		= $DE00		; shrapnel table (55x6 bytes)
	V_SPR_PTR	= $DF4A		; Vertical spriteframe pointer (75 bytes)

; System calls

	OS_CLI   = $FFF7
	OSBYTE   = $FFF4
	OSWORD   = $FFF1
	OSWRCH   = $FFEE
	OSWRCR   = $FFEC
	OSNEWL   = $FFE7
	OSASCI   = $FFE3
	OSRDCH   = $FFE0
	OSFILE   = $FFDD
	OSARGS   = $FFDA
	OSBGET   = $FFD7
	OSBPUT   = $FFD4
	OSGBPB   = $FFD1
	OSFIND   = $FFCE

; To be removed

	SCRSYNC	= $fff4

;======================================================================
; System depending routines
;======================================================================

;----------------------------------------------------------------------
; Init hardware
;----------------------------------------------------------------------

init:

; Set up screen address table.

setsat:
	lda #<ScreenAddr	; start of screen.
	sta scraddr
	lda #>ScreenAddr
	sta scraddr+1

	ldx #0
	ldy #0			; vertical lines on screen.
setsa0:
	lda scraddr
	sta SCADTB_lb,y		; write low byte.
	lda scraddr+1
	cpy #ScrHeight*3		; vertical lines on screen.
	bcc :+
	ora #$F0		; plot sprites in rom if of screen
:
	sta SCADTB_hb,y		; write high byte.
	inx
	cpx #3
	bne :+
	jsr nline		; next line down.
	ldx #0
:
	iny			; next position in table.
	bne setsa0

; Set up vertical sprite pointer table

	ldy #0
	lda #0
vspriteloop:
	sta V_SPR_PTR,y
	clc
	adc #20
	cmp #60
	bne :+
	lda #0
:
	iny
	cpy #75
	bne vspriteloop	

;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
; Hack for MAME to use VDU40x25
;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

; Init VDU40x25

	ldy #$f
loops:
	sty MC6845_Reg
	lda CRTTAB,y
	sta MC6845_Dat
	dey
	bpl loops

;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

; Disable cursor

	lda #$0a
	sta MC6845_Reg
	lda #$20
	sta MC6845_Dat

	jsr cls

; Set new interrupt routine to sync at 25Hz

	lda #<irq_handler	; New interrupt handler	
	sta IRQVEC
	lda #>irq_handler
	sta IRQVEC+1

	lda #<IRQtime		; Interrupt at 25Hz
	sta Timer1_Low
	lda #>IRQtime
	sta Timer1_High
	lda #%01000000
	sta ACR
	lda #%11000000
	sta IER
	cli

	rts

irq_handler:
	lda Timer1_Low		; Reset irqflag

	txa			; Save x,y
	pha
	tya
	pha

	inc frames_passed	; Nr of frames past

	pla			; Restore x,y,a
	tay
	pla
	tax
	pla
	rti

frames_passed:	.byte 0

	rts

CRTTAB:	.byte $3f,$28,$33,$44
	.byte $1e,$02,$19,$1b
	.byte $03,$12,$72,$13
	.byte $04,$00,$07,$ff

;======================================================================
; Screen routines
;======================================================================

;----------------------------------------------------------------------
; Clear screen routine.
;
; Fill screenmem $0400-$07ff with ScrFillByte
; Set semigraphics at 1st column every line
;----------------------------------------------------------------------

cls:

; Fill screen with 0

	lda #0
	ldy #0
clsloop:
	sta ScreenAddr,y
	sta ScreenAddr+256,y
	sta ScreenAddr+512,y
	sta ScreenAddr+768,y
	iny
	bne clsloop

; Init every row as graphics

	ldy #0
	ldx #ScrHeight
	lda SCADTB_lb
	sta scraddr
	lda SCADTB_hb
	sta scraddr+1
	lda bcolour
colloop:
	sta (scraddr),y
	pha
	lda scraddr
	clc
	adc #ScrWidth
	sta scraddr
	bcc :+
	inc scraddr+1
:	
	pla
	dex
	bne colloop

	rts

;-------------------------------------------------------------
; Colour background line
;-------------------------------------------------------------

linecol:
	sta dispy
	lda #0
	sta dispx
	jsr gprad

;	tay
;	lda SCADTB_lb,y
;	sta scraddr
;	lda SCADTB_hb,y
;	sta scraddr+1
	ldy #0
	lda bcolour		; set background colour
	sta (scraddr),y
	iny
	lda #$1d		; set new background colour
	sta (scraddr),y
	rts


;-------------------------------------------------------------
; Screen synchronisation.
;
;  - read joystick/keyboard
;  - handle sound
;  - sync framerate at 25Hz
;  - handle shrapnel every even frame
;-------------------------------------------------------------

vsync:
	pha
	tya
	pha
	txa
	pha
	jsr joykey		; read joystick/keyboard.

; Sync framerate to 25 Hz

vsync1:
	lda frames_passed	; Wait 2 frames at 50Hz
	cmp #2
	bcc vsync1

	lda #0			; sync framerate 25 Hz
	sta frames_passed


	lda clock
	and #1
	bne:+
	jsr proshr		; handle shrapnel every even frame
:

; Beepersound

	lda sndtyp
	beq sndskip

	lda PCR			; Switch to speaker, CA2=0
	and #%11110001
	ora #%00001100
	sta PCR

	lda #%00100000		; Set bit5=output speaker
	sta DIR_A

sndloop:
	lda PORT_A		; handle sound
	ldy sndtyp
sndwait:
	dey
	bne sndwait
	eor #%00100000		; Toggle speakerbit
	sta PORT_A		
	dec sndtyp
	bne sndloop

	lda #%00000000		; Set PORT_A input
	sta DIR_A

	lda PCR			; Switch to keyboard, CA2=1
	and #%11110001
	ora #%00001110
	sta PCR

sndskip: 

	pla
	tax
	pla
	tay
	pla
	rts

sndtyp:	.byte 0

;======================================================================
; Joystick routines
;======================================================================

joyinit:
	rts

joy1:
	lda PCR			; Switch to joystick, CA2=0
	and #%11110001
	ora #%00001100
	sta PCR

	lda PORT_A		; Read FUDLR joystick
	and #$7f
	sta joyval

	lda PCR			; Switch to keyboard, CA2=1
	and #%11110001
	ora #%00001110
	sta PCR

	lda keys+5		; Check FIRE2
	jsr ktest
	bcs :+
	lda joyval
	and #%11011111
	sta joyval
:
	lda keys+6		; Check FIRE3
	jsr ktest
	bcs :+
	lda joyval
	and #%10111111
	sta joyval
:
	rts

joy2:
	rts

;======================================================================
; Keyboard routines
;======================================================================

;----------------------------------------------------------------------
; KTEST
; Check if key in A is pressed
; 	return clc if pressed
; 	return sec if not pressed
;----------------------------------------------------------------------

ktest:
	sta tmp
	bit PORT_A
;.if real=1
;	bpl not_pressed
;.else
	bmi not_pressed	; BUG MAME, bit 7 not set ....
;.endif
	lda PORT_A
	sta varopt
	cmp tmp
	beq pressed
not_pressed:
	sec
	rts
pressed:
	clc
	rts

;======================================================================
; PRSKEY
; Wait for keypress and release
;======================================================================

prskey:
	bit PORT_A
	bpl prskey
relkey:
	bit PORT_A
	bmi relkey
	rts

;======================================================================
; Sprite routines
;======================================================================

;-----------------------------------------------------------------
; These are the sprite routines.
; sspria = single sprite, old (ix).
; ssprib = single sprite, new (ix+5).
; sspric = both sprites, old (ix) and new (ix+5).
;-----------------------------------------------------------------

sspria:
	jsr gsprad		; get old sprite address.
sspri2:
	lda z80_e
	sta dline1+1		; Set spritedata address
	lda z80_d
	sta dline1+2

	stx xtmp
	ldx #0			; vertical lines.
sspri0:
	jsr dline		; draw a line.

;.if bflag
;	cpx #16			; Detect end of line 3
;.else
	cpx #20			; Detect end of line 2
;.endif

	bne sspri0		; no, repeat
	ldx xtmp
	rts

;-----------------------------------------------------------------
; ssprib = single sprite, new (ix).
;-----------------------------------------------------------------

ssprib:
	jsr gspran 		; get new sprite address.
				; z80_de = new sprite address
	jmp sspri2
	
;-----------------------------------------------------------------
; sspric = erase old sprite and plot new sprite line by line
;-----------------------------------------------------------------

sspric:
	jsr gsprad 		; get old sprite address.
				; z80_de = old sprite address
	lda z80_e
	sta ddline1+1		; Set spritedata address
	lda z80_d
	sta ddline1+2
	jsr exx  		; store addresses.

	jsr gspran 		; get new sprite addresses.
				; z80_de = old sprite address
	lda z80_e
	sta dline1+1		; Set spritedata address
	lda z80_d
	sta dline1+2

	stx xtmp
	ldx #0			; vertical lines.
lloop:
	jsr dline 		; draw a line.
	dex
	dex
	dex
	dex
	dex
	jsr ddline 		; delete a line.

;.if bflag
;	cpx #16			; Detect end of line 3
;.else
	cpx #20			; Detect end of line 2
;.endif
	bne lloop		; no, repeat
	ldx xtmp
	rts

;-----------------------------------------------------------------
; Erase sprite line
;-----------------------------------------------------------------

dline:
	ldy sprline,x		; point to screenleft

	lda #5
	sta rrow
dline1:
	lda objdta,x		; fetch spriteleft byte
	beq :+
	eor (scraddr),y		; merge with screenleft
	ora #$20		; Set bit 5
	sta (scraddr),y		; write screenleft
:
	inx			; next spritebyte
	iny			; point to screenmiddle

	dec rrow
	bne dline1
	rts

;-----------------------------------------------------------------
; Draw sprite line
;-----------------------------------------------------------------

ddline:
	ldy sprline,x		; point to screenleft

	lda #5
	sta rrow
ddline1:
	lda objdta,x		; fetch spriteleft byte
	beq :+
	eor (z80_hlp),y		; merge with screenleft
	ora #$20		; Set bit 5
	sta (z80_hlp),y		; write spritedata0
:
	inx			; next spritebyte
	iny			; point to screenmiddle

	dec rrow
	bne ddline1
	rts

;-----------------------------------------------------------------
; Spritebyte location on screen
;-----------------------------------------------------------------

sprline:
	.byte $00,$01,$02,$03,$04
	.byte $28,$29,$2a,$2b,$2c
	.byte $50,$51,$52,$53,$54
	.byte $78,$79,$7a,$7b,$7c
