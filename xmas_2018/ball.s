;=====================================
; XMAS2018 -- Ball Part
;=====================================


ball:

	;===================
	; init screen

	;===================
	; init vars
	lda	#15
	sta	XPOS
	lda	#38
	sta	YPOS

	lda	#0
	sta	FRAME
	sta	FRAMEH

	;=============================
	;  ball graphic already loaded to $4000 (HGR page1)

	;=============================
	; set up scrolling

	lda	#0
	sta	OFFSET

	;=============================
	; decompress scroll image to $800

	lda	#>a2_scroll
	sta	INH
	lda	#<a2_scroll
	sta	INL

	jsr	decompress_scroll


	;==============================
	; setup graphics for vapor lock
	;==============================

	jsr	vapor_lock						; 6

	; vapor lock returns with us at beginning of hsync in line
	; 114 (7410 cycles), so with 5070 lines to go

	; so we have 5070 + 4550 = 9620 to kill

	; FIXME: clear page0/page1 screens

;	jsr	gr_copy_to_current		; 6+ 9292

	; now we have 322 left

	; GR part
	bit	HIRES							; 4
	bit	SET_GR							; 4
	bit	FULLGR							; 4
	bit	PAGE1							; 4

	; 9620
	;  -16 mode set
	;  - 3 for jmp
	;=======
	; 9601

	; Try X=18 Y=100 cycles=9601

	ldy	#100							; 2
baloopA:ldx	#18							; 2
baloopB:dex								; 2
	bne	baloopB							; 2nt/3
	dey								; 2
	bne	baloopA							; 2nt/3

	jmp	ball_begin_loop
.align  $100


	;================================================
	; Ball Loop
	;================================================
	; each scan line 65 cycles
	;       1 cycle each byte (40cycles) + 25 for horizontal
	;       Total of 12480 cycles to draw screen
	; Vertical blank = 4550 cycles (70 scan lines)
	; Total of 17030 cycles to get back to where was

ball_begin_loop:

ball_display_loop:

	; draw 160 lines of hires PAGE1
	bit	HIRES							; 4
	bit	PAGE1							; 4

	; (160*65)-8 = 10392

	; Try X=43 Y=47 cycles=10388 R4

	nop
	nop

	ldy	#47							; 2
baloopC:ldx	#43							; 2
baloopD:dex								; 2
	bne	baloopD							; 2nt/3
	dey								; 2
	bne	baloopC							; 2nt/3


	; draw 32 (4) lines of lores PAGE0
	bit	LORES							; 4
	bit	PAGE0							; 4

	; (32*65)-8 = 2072

	; Try X=1 Y=188 cycles=2069

	lda	$0

	ldy	#188							; 2
baloopE:ldx	#1							; 2
baloopF:dex								; 2
	bne	baloopF							; 2nt/3
	dey								; 2
	bne	baloopE							; 2nt/3



;======================================================
; We have 4550 cycles in the vblank, use them wisely
;======================================================

	; do_nothing should be      4550
	;                          -1023 music
	;                          -1841 scroll
	;			     -10 keypress
	;			===========
	;			    1676


	jsr	play_music		; 6+1017

	jsr	scroll_loop		; 6+1835

	; Try X=1 Y=152 cycles=1673 R3

	lda	$0	; nop

	ldy	#152							; 2
baloop1:ldx	#1							; 2
baloop2:dex								; 2
	bne	baloop2							; 2nt/3
	dey								; 2
	bne	baloop1							; 2nt/3

	; keypress = 10

	lda	KEYPRESS				; 4
	bpl	ba_no_keypress				; 3
							; -1
	jmp	ba_handle_keypress			; 3
ba_no_keypress:
	jmp	ball_display_loop			; 3

ba_handle_keypress:
	bit	KEYRESET	; clear keypress	; 4
	rts						; 6


.include "gr_scroll.s"
.include "greets.inc"
