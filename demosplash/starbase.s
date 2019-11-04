; starbase

starbase:

	; Initialize some variables

	;=======================
	; Run the "intro"
	;=======================
	; just us falling?

	jsr	starbase_init

	;=========================
	; starbase_new_room
	;=========================
	; enter new room on starbase

starbase_new_room:
	lda	#0
	sta	GAME_OVER

	jsr	starbase_setup_room

c4_check_done:
	lda	GAME_OVER
	cmp	#$ff
	beq	quit_starbase

	;====================
	; go to next level
l4_defeated:
	lda	WHICH_ROOM
	cmp	#5
	bne	starbase_new_room

	lda	#5
	sta	WHICH_LOAD
	rts


;===========================
; quit_starbase
;===========================

quit_starbase:

wait_loop:
	lda	KEYPRESS
	bpl	wait_loop

	lda	KEYRESET		; clear strobe

	lda	#0
	sta	GAME_OVER

	rts

.include "starbase_action.s"
.include "gr_hlin.s"
.include "gr_putsprite.s"
.include "gr_putsprite_crop.s"
.include "keyboard.s"

.include "starbase_astronaut.s"
.include "starbase_alien.s"

.include "starbase_doors.s"
.include "starbase_charger.s"
.include "starbase_gun.s"
.include "starbase_laser.s"
.include "starbase_shield.s"
.include "starbase_blast.s"
.include "starbase_collision.s"
.include "starbase_friend.s"
.include "starbase_alien_laser.s"

; room backgrounds
.include "graphics/starbase/starbase.inc"
; sprites
.include "graphics/sprites/astronaut.inc"
.include "graphics/sprites/alien.inc"


