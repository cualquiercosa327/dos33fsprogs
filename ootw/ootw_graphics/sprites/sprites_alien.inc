; note, for some reason these are all facing left

;=====================
;=====================
; STANDING
;=====================
;=====================

	;====================
	; Going Left

alien_stand:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$aa,$00,$77,$aa
	.byte $aa,$aa,$10,$77,$aa
	.byte $aa,$aa,$07,$00,$aa
	.byte $aa,$aa,$77,$a5,$5a
	.byte $aa,$aa,$07,$aa,$05
	.byte $aa,$0a,$00,$0a,$00



;=====================
;=====================
; WALKING
;=====================
;=====================

alien_walk_progression:
	.word	alien_walk_left1
	.word	alien_walk_left2
	.word	alien_walk_left3
	.word	alien_walk_left4
	.word	alien_walk_left5
	.word	alien_walk_left6
	.word	alien_walk_left7
	.word	alien_walk_left8




alien_walk_left1:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$5a,$00,$77,$aa
	.byte $aa,$55,$10,$77,$aa
	.byte $aa,$aa,$00,$07,$aa
	.byte $aa,$aa,$77,$a5,$5a
	.byte $aa,$aa,$07,$aa,$05
	.byte $aa,$a0,$00,$0a,$00

alien_walk_left2:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$aa,$00,$77,$aa
	.byte $aa,$5a,$77,$17,$aa
	.byte $aa,$aa,$07,$00,$aa
	.byte $aa,$aa,$77,$55,$aa
	.byte $aa,$aa,$07,$aa,$05
	.byte $aa,$0a,$00,$00,$a0

alien_walk_left3:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$aa,$00,$77,$aa
	.byte $aa,$aa,$77,$10,$aa
	.byte $aa,$aa,$07,$00,$aa
	.byte $aa,$aa,$77,$55,$aa
	.byte $aa,$aa,$07,$00,$0a
	.byte $aa,$0a,$00,$aa,$a0

alien_walk_left4:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$aa,$00,$77,$aa
	.byte $aa,$aa,$77,$10,$aa
	.byte $aa,$a7,$00,$00,$aa
	.byte $aa,$aa,$77,$55,$aa
	.byte $aa,$aa,$07,$05,$aa
	.byte $aa,$0a,$00,$00,$aa

alien_walk_left5:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$aa,$00,$77,$aa
	.byte $aa,$aa,$77,$10,$aa
	.byte $aa,$a7,$00,$00,$aa
	.byte $aa,$5a,$55,$77,$aa
	.byte $aa,$00,$a7,$07,$aa
	.byte $a0,$a0,$0a,$00,$aa

alien_walk_left6:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$aa,$00,$77,$aa
	.byte $aa,$aa,$77,$17,$5a
	.byte $aa,$aa,$07,$00,$a5
	.byte $aa,$5a,$55,$77,$7a
	.byte $aa,$05,$aa,$aa,$07
	.byte $a0,$a0,$aa,$0a,$00

alien_walk_left7:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$aa,$00,$77,$aa
	.byte $aa,$aa,$10,$77,$aa
	.byte $aa,$aa,$00,$07,$aa
	.byte $aa,$aa,$57,$77,$aa
	.byte $aa,$aa,$05,$a7,$07
	.byte $aa,$0a,$00,$00,$a0

alien_walk_left8:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$aa,$00,$77,$aa
	.byte $aa,$5a,$10,$77,$7a
	.byte $aa,$a5,$00,$00,$a7
	.byte $aa,$aa,$55,$77,$aa
	.byte $aa,$aa,$a5,$07,$aa
	.byte $aa,$aa,$00,$00,$aa


;=====================
;=====================
; WALKING with gun
;=====================
;=====================

alien_walk_gun_progression:
	.word	alien_walk_gun_left1
	.word	alien_walk_gun_left2
	.word	alien_walk_gun_left3
	.word	alien_walk_gun_left4
	.word	alien_walk_gun_left5
	.word	alien_walk_gun_left6
	.word	alien_walk_gun_left7
	.word	alien_walk_gun_left8


alien_walk_gun_left1:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $a0,$5a,$00,$77,$aa
	.byte $aa,$aa,$10,$77,$aa
	.byte $aa,$aa,$00,$07,$aa
	.byte $aa,$aa,$77,$a5,$5a
	.byte $aa,$aa,$07,$aa,$05
	.byte $aa,$a0,$00,$0a,$00

alien_walk_gun_left2:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $0a,$aa,$00,$77,$aa
	.byte $aa,$5a,$77,$17,$aa
	.byte $aa,$aa,$07,$00,$aa
	.byte $aa,$aa,$77,$55,$aa
	.byte $aa,$aa,$07,$aa,$05
	.byte $aa,$0a,$00,$00,$a0

alien_walk_gun_left3:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $0a,$aa,$00,$77,$aa
	.byte $aa,$aa,$77,$10,$aa
	.byte $aa,$a5,$07,$00,$aa
	.byte $aa,$aa,$77,$55,$aa
	.byte $aa,$aa,$07,$00,$0a
	.byte $aa,$0a,$00,$aa,$a0

alien_walk_gun_left4:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $0a,$aa,$00,$77,$aa
	.byte $aa,$a5,$77,$10,$aa
	.byte $aa,$a7,$00,$00,$aa
	.byte $aa,$aa,$77,$55,$aa
	.byte $aa,$aa,$07,$05,$aa
	.byte $aa,$0a,$00,$00,$aa

alien_walk_gun_left5:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $a0,$5a,$00,$77,$aa
	.byte $aa,$aa,$77,$10,$aa
	.byte $aa,$a7,$00,$00,$aa
	.byte $aa,$5a,$55,$77,$aa
	.byte $aa,$00,$a7,$07,$aa
	.byte $a0,$a0,$0a,$00,$aa

alien_walk_gun_left6:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $a0,$5a,$00,$77,$aa
	.byte $aa,$aa,$77,$17,$aa
	.byte $aa,$aa,$07,$00,$aa
	.byte $aa,$5a,$55,$77,$7a
	.byte $aa,$05,$aa,$aa,$07
	.byte $a0,$a0,$aa,$0a,$00

alien_walk_gun_left7:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $0a,$aa,$00,$77,$aa
	.byte $aa,$a5,$10,$77,$aa
	.byte $aa,$aa,$00,$07,$aa
	.byte $aa,$aa,$57,$77,$aa
	.byte $aa,$aa,$05,$a7,$07
	.byte $aa,$0a,$00,$00,$a0

alien_walk_gun_left8:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $0a,$aa,$00,$77,$aa
	.byte $aa,$a5,$10,$77,$7a
	.byte $aa,$aa,$00,$00,$a7
	.byte $aa,$aa,$55,$77,$aa
	.byte $aa,$aa,$a5,$07,$aa
	.byte $aa,$aa,$00,$00,$aa


;=====================
;=====================
; RUNNING
;=====================
;=====================

alien_run_progression:
	.word	alien_run_left1
	.word	alien_run_left2
	.word	alien_run_left3
	.word	alien_run_left4
	.word	alien_run_left5
	.word	alien_run_left6
	.word	alien_run_left7
	.word	alien_run_left8

alien_run_left1:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$5a,$00,$77,$aa
	.byte $aa,$55,$10,$77,$aa
	.byte $aa,$aa,$00,$07,$aa
	.byte $aa,$aa,$77,$a5,$5a
	.byte $aa,$aa,$07,$aa,$05
	.byte $aa,$a0,$00,$0a,$00

alien_run_left2:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$aa,$00,$77,$aa
	.byte $aa,$5a,$77,$17,$aa
	.byte $aa,$aa,$07,$00,$aa
	.byte $aa,$aa,$77,$55,$aa
	.byte $aa,$aa,$07,$aa,$05
	.byte $aa,$0a,$00,$00,$a0

alien_run_left3:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$aa,$00,$77,$aa
	.byte $aa,$aa,$77,$10,$aa
	.byte $aa,$aa,$07,$00,$aa
	.byte $aa,$aa,$77,$55,$aa
	.byte $aa,$aa,$07,$00,$0a
	.byte $aa,$0a,$00,$aa,$a0

alien_run_left4:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$aa,$00,$77,$aa
	.byte $aa,$aa,$77,$10,$aa
	.byte $aa,$a7,$00,$00,$aa
	.byte $aa,$aa,$77,$55,$aa
	.byte $aa,$aa,$07,$05,$aa
	.byte $aa,$0a,$00,$00,$aa

alien_run_left5:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$aa,$00,$77,$aa
	.byte $aa,$aa,$77,$10,$aa
	.byte $aa,$a7,$00,$00,$aa
	.byte $aa,$5a,$55,$77,$aa
	.byte $aa,$00,$a7,$07,$aa
	.byte $a0,$a0,$0a,$00,$aa

alien_run_left6:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$aa,$00,$77,$aa
	.byte $aa,$aa,$77,$17,$5a
	.byte $aa,$aa,$07,$00,$a5
	.byte $aa,$5a,$55,$77,$7a
	.byte $aa,$05,$aa,$aa,$07
	.byte $a0,$a0,$aa,$0a,$00

alien_run_left7:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$aa,$00,$77,$aa
	.byte $aa,$aa,$10,$77,$aa
	.byte $aa,$aa,$00,$07,$aa
	.byte $aa,$aa,$57,$77,$aa
	.byte $aa,$aa,$05,$a7,$07
	.byte $aa,$0a,$00,$00,$a0

alien_run_left8:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $aa,$77,$07,$00,$aa
	.byte $aa,$aa,$00,$77,$aa
	.byte $aa,$5a,$10,$77,$7a
	.byte $aa,$a5,$00,$00,$a7
	.byte $aa,$aa,$55,$77,$aa
	.byte $aa,$aa,$a5,$07,$aa
	.byte $aa,$aa,$00,$00,$aa

;=====================
;=====================
; JUMPING
;=====================
;=====================

;=====================
;=====================
; CROUCHING
;=====================
;=====================

alien_crouch_progression:
	.word	alien_crouch1
	.word	alien_crouch2

alien_crouch1:
	.byte $3,$8
	.byte $aa,$aa,$aa
	.byte $9a,$9a,$aa
	.byte $bb,$99,$aa
	.byte $aa,$0b,$aa
	.byte $aa,$bb,$aa
	.byte $aa,$bb,$aa
	.byte $44,$44,$aa
	.byte $5a,$fc,$f4

alien_crouch2:
	.byte $3,$8
	.byte $aa,$aa,$aa
	.byte $aa,$aa,$aa
	.byte $9a,$9a,$aa
	.byte $bb,$99,$aa
	.byte $aa,$0b,$0a
	.byte $aa,$bb,$00
	.byte $ba,$4b,$aa
	.byte $54,$f4,$f4



;=====================
;=====================
; TURNING
;=====================
;=====================
alien_turning_sprite:
	.byte $5,$8
	.byte $aa,$57,$77,$aa,$aa
	.byte $0a,$05,$00,$0a,$aa
	.byte $77,$00,$00,$55,$aa
	.byte $77,$00,$00,$55,$aa
	.byte $aa,$00,$00,$a5,$aa
	.byte $aa,$77,$55,$aa,$aa
	.byte $07,$aa,$05,$aa,$aa
	.byte $00,$aa,$00,$aa,$aa


;=====================
;=====================
; YELLING
;=====================
;=====================

alien_yell_progression:
	.word	alien_yelling_1
	.word	alien_yelling_2

alien_yelling_1:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $0a,$a7,$07,$00,$aa
	.byte $00,$aa,$00,$77,$aa
	.byte $aa,$55,$10,$77,$7a
	.byte $aa,$aa,$00,$00,$a7
	.byte $aa,$aa,$55,$77,$aa
	.byte $aa,$aa,$a5,$07,$aa
	.byte $aa,$0a,$00,$00,$aa

alien_yelling_2:
	.byte $5,$8
	.byte $aa,$7a,$f7,$7f,$aa
	.byte $00,$77,$07,$00,$aa
	.byte $0a,$5a,$00,$77,$aa
	.byte $aa,$a5,$10,$77,$7a
	.byte $aa,$aa,$00,$00,$a7
	.byte $aa,$aa,$55,$77,$aa
	.byte $aa,$aa,$a5,$07,$aa
	.byte $aa,$0a,$00,$00,$aa


;=====================
;=====================
; SHOOTING UPWARD
;=====================
;=====================

alien_shoot_up_progression:
	.word alien_shooting_up_sprite
	.word alien_shooting_up_sprite
	.word alien_yelling_1
	.word alien_yelling_2

alien_shooting_up_sprite:
	.byte $5,$8
	.byte $00,$7a,$f7,$7f,$aa
	.byte $00,$77,$07,$00,$aa
	.byte $55,$aa,$00,$77,$aa
	.byte $aa,$55,$10,$77,$7a
	.byte $aa,$aa,$00,$00,$a7
	.byte $aa,$aa,$55,$77,$aa
	.byte $aa,$aa,$a5,$07,$aa
	.byte $aa,$0a,$00,$00,$aa