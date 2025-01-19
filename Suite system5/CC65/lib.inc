;----------------------------------------------------------------------
; System 5 depending variables and routines
;----------------------------------------------------------------------

; Global variables

	t_red		= 1	; Text colour definition filters
	t_green		= 2
	t_yellow	= 3
	t_blue		= 4
	t_magenta	= 5
	t_cyan		= 6
	t_white		= 7

	g_red		= 17	; Graphics colour definition filters
	g_green		= 18
	g_yellow	= 19
	g_blue		= 20
	g_magenta	= 21
	g_cyan		= 22
	g_white		= 23

	ScrWidth	= 40
	ScrHeight	= 25

; System constants

	IRQVEC		= $0204		; Interrupt vector
	ScreenAddr	= $0400		; Startaddress video RAM

	MC6845_Reg	= $0800		; MC6845 CRT controller register ptr
	MC6845_Dat	= $0801		; MC6845 CRT controller data

	VIA1		= $0e20
	PORT_A		= VIA1+$1	; Keyboard 
	Timer1_Low  	= VIA1+$4	; Timer 1 low byte
	Timer1_High 	= VIA1+$5	; Timer 1 high byte
	Timer2_Low	= VIA1+$8	; Timer 2 low byte
	Timer2_High	= VIA1+$9	; Timer 2 high byte
	ACR		= VIA1+$b	; Auxiliary Control Register
	IFR		= VIA1+$d 	; Interrupt Flag Register
	IER		= VIA1+$e	; Interupt Enable Register

	MAP 		= $D800		; properties map buffer (4x256 bytes)
	SCADTB_lb 	= $DC00		; screen address table lo-byte (256 bytes)
	SCADTB_hb 	= $DD00		; screen address table hi-byte (256 bytes)
	SHRAPN 		= $DE00		; shrapnel table (55x6 bytes)
	V_SPR_PTR	= $DF4A		; Vertical spriteframe pointer (75 bytes)
	V_SPR_OFF	= $DF95		; Vertical blockcheck pointer (75 bytes)

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

	lda #<30000		; Interrupt at 50Hz
	sta Timer1_Low
	lda #>30000
	sta Timer1_High
	lda #%01000000
	sta ACR
	lda #%11000000
	sta IER
	cli

; Set up vertical sprite pointer table

	ldx #0
	stx tmp
	ldy #0
	lda #0
vspriteloop:
	lda tmp
	sta V_SPR_PTR,y
	txa
	sta V_SPR_OFF,y
	clc
	lda tmp
	adc #20
	sta tmp
	cmp #60
	bne :+
	lda #0
	sta tmp
:
	inx
	cpx #3
	bne :+
	ldx #0
:
	iny
	cpy #75
	bne vspriteloop	

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
; Screen synchronisation.
;
;  - read joystick/keyboard
;  - handle sound
;  - sync framerate with clock
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
	lda frames_passed	; Wait if not at 25Hz
	cmp #2
	bcc vsync1

	lda #0			; sync framerate 25 Hz
	sta frames_passed


	lda clock
	and #1
	bne:+
	jsr proshr		; handle shrapnel every even frame
:
;	lda sndtyp
;	beq sndskip
;sndloop:
;	lda SpeakerBit		; handle sound
;	ldy sndtyp
;sndwait:
;	dey
;	bne sndwait
;	eor #4
;	sta SpeakerBit
;	dec sndtyp
;	bne sndloop
;sndskip: 

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
	lda PORT_A
;	bit PORT_A
	bmi not_pressed	; BUG MAME, bit 7 not set ....
	lda PORT_A
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

