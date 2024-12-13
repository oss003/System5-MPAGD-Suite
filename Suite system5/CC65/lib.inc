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

	ScreenAddr	= $0400	; Startaddress video RAM
	MAP 		= $D800	; properties map buffer (4x256 bytes)
	SCADTB_lb 	= $DC00	; screen address table lo-byte (256 bytes)
	SCADTB_hb 	= $DD00	; screen address table hi-byte (256 bytes)
	SHRAPN 		= $DE00	; shrapnel table (55x6 bytes)
	PORT_A		= $0E21	; Keyboard 

	ScrSelAddr	= $b000	; Screen selection address
	KeyRowAddr	= $b000	; PIA key matrix row
	KeyColAddr	= $b001	; PIA key matrix column
	SpeakerBit	= $b002	; Speaker bit
	CmdReg		= $b400	; Command register AtoMMC
	DatReg		= $b401	; Data register AtoMMC 
	Timer2_Low	= $b808	; Timer 2 low byte
	Timer2_High	= $b809	; Timer 2 high byte

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
	READKEY	= $fff4
	red    = 1
	blue   = 2
	yellow = 3
	green  = 4
keymask:
	.byte 0

;======================================================================
; System depending routines
;======================================================================

;----------------------------------------------------------------------
; Init hardware
;----------------------------------------------------------------------

init:
	jsr cls
	rts

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
	lda #0
	ldy #0
clsloop:
	sta ScreenAddr,y
	sta ScreenAddr+256,y
	sta ScreenAddr+512,y
	sta ScreenAddr+768,y
	iny
	bne clsloop

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
	bit PORT_A
	bmi not_pressed
	lda PORT_A
	cmp tmp
	bne not_pressed
pressed:
	clc
	rts
not_pressed:
	sec
	rts

;======================================================================
; PRSKEY
; Wait for keypress and release
;======================================================================

prskey:
	bit PORT_A
	bmi prskey
relkey:
	bit PORT_A
	bpl relkey
	rts
