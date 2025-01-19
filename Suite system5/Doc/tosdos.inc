;
; Code equates
;
L0001       = $0001
L0002       = $0002
L006C       = $006C
L0075       = $0075
L00AD       = $00AD
L00AE       = $00AE
L00B5       = $00B5
L00B6       = $00B6
L00B7       = $00B7
L00B8       = $00B8
L00B9       = $00B9
L00BA       = $00BA
L00BB       = $00BB
L00BF       = $00BF
L00C0       = $00C0
L00C1       = $00C1
L00C2       = $00C2
L00C3       = $00C3
L00C4       = $00C4
L00C5       = $00C5
L00C6       = $00C6
L00C7       = $00C7
L00C8       = $00C8
L00C9       = $00C9
L00CA       = $00CA
L00CB       = $00CB
L00CC       = $00CC
L00CD       = $00CD
L00CE       = $00CE
L00CF       = $00CF
L00D0       = $00D0
L00D1       = $00D1
L00D2       = $00D2
L00D3       = $00D3
L00D4       = $00D4
L00D5       = $00D5
L00D6       = $00D6
L00D7       = $00D7
L00D8       = $00D8
L00D9       = $00D9
L00DA       = $00DA
L00DB       = $00DB
L00DC       = $00DC
L00DD       = $00DD
L00DE       = $00DE
L00DF       = $00DF
L00E0       = $00E0
L00E1       = $00E1
L00E2       = $00E2
L00E3       = $00E3
L00E4       = $00E4
L00E5       = $00E5
L00E6       = $00E6
L00E7       = $00E7
L00E8       = $00E8
L00EF       = $00EF
L00F0       = $00F0
L00F1       = $00F1
L00F2       = $00F2
L00F3       = $00F3
L00F6       = $00F6
L00F7       = $00F7
L00F8       = $00F8
L00FE       = $00FE
L00FF       = $00FF
L0100       = $0100
L0140       = $0140
L0200       = $0200
L0202       = $0202
L0204       = $0204
L0206       = $0206
L0207       = $0207
L0208       = $0208
L020A       = $020A
L020C       = $020C
L020E       = $020E
L0210       = $0210
L0212       = $0212
L0214       = $0214
L0216       = $0216
L0218       = $0218
L021A       = $021A
L0400       = $0400
L0500       = $0500
L0600       = $0600
L0700       = $0700
L0800       = $0800
L0801       = $0801
L0A00       = $0A00
L0A01       = $0A01
L0A04       = $0A04
L0C01       = $0C01
L0C03       = $0C03
L0C0C       = $0C0C
L0E21       = $0E21
L1FFF       = $1FFF
L2000       = $2000
L2007       = $2007
L2008       = $2008
L200E       = $200E
L200F       = $200F
L2010       = $2010
L20F8       = $20F8
L2101       = $2101
L2102       = $2102
L2103       = $2103
L2104       = $2104
L2105       = $2105
L2106       = $2106
L2107       = $2107
L2108       = $2108
L210C       = $210C
L210D       = $210D
L210E       = $210E
L210F       = $210F
L2110       = $2110
L2200       = $2200
L2209       = $2209
L220B       = $220B
L220C       = $220C
L220D       = $220D
L220E       = $220E
L220F       = $220F
L2210       = $2210
L2211       = $2211
L2212       = $2212
L2213       = $2213
L2214       = $2214
L2215       = $2215
L2216       = $2216
L2217       = $2217
L2219       = $2219
L221A       = $221A
L221B       = $221B
L221C       = $221C
L221D       = $221D
L221F       = $221F
LF981       = $F981
LF9B2       = $F9B2
LFB5B       = $FB5B
LFB7C       = $FB7C
LFBB1       = $FBB1
LFC46       = $FC46
LFC9D       = $FC9D
LFD3D       = $FD3D
;
; Start of code
;
            *= $F000
;
LF000:      jsr LF009
            .byte "Disk "
            nop
LF009:      pla
            sta L00D8
            pla
            sta L00D9
            ldy #$00
LF011:      inc L00D8
            bne LF017
            inc L00D9
LF017:      lda (L00D8),Y
            bmi LF023
            beq LF023
            jsr LFFF4
            jmp LF011
LF023:      jmp (L00D8)
LF026:      jsr LFFED
LF029:      jsr LF009
            .byte "*"
LF02D:      ldx #$FF
LF02F:      inx
            cpx #$40
            bcc LF037
LF034:      dex
            bmi LF02D
LF037:      jsr LFFE6
            cmp #$18
            beq LF026
            cmp #$7F
            beq LF034
            sta L0100,X
            cmp #$0D
            bne LF02F
            rts
LF04A:      pha
            jsr LF130
            jsr LF052
            pla
LF052:      and #$0F
            cmp #$0A
            bcc LF05A
            adc #$06
LF05A:      adc #$30
            jmp LFFF4
LF05F:      sty L00D7
            jsr LF06D
            jsr LF62C
            ldy L00D7
            ldx #$00
            beq LF06F
LF06D:      ldx #$40
LF06F:      jsr LF0E1
            stx L00DD
            cmp #$22
            beq LF0BB
LF078:      cmp #$0D
            beq LF088
            sta L0100,X
            inx
            iny
            lda L0100,Y
            cmp #$20
            bne LF078
LF088:      lda #$0D
            sta L0100,X
            lda #$01
            sta L00DE
            ldx #$DD
LF093:      rts
LF094:      ldy #$00
LF096:      lda $00,X
            sta L00DD,Y
            inx
            iny
            cpy #$0A
            bcc LF096
LF0A1:      lda #$20
            ldy #$06
LF0A5:      sta L00E8,Y
            dey
            bpl LF0A5
LF0AB:      iny
            lda (L00DD),Y
            cmp #$0D
            beq LF093
            cpy #$07
            bcs LF0D7
            sta L00E8,Y
            bne LF0AB
LF0BB:      iny
            lda L0100,Y
            cmp #$0D
            beq LF0D7
            sta L0100,X
            inx
            cmp #$22
            bne LF0BB
            dex
            iny
            lda L0100,Y
            cmp #$22
            bne LF088
            inx
            bcs LF0BB
LF0D7:      jsr LF009
            .byte "Name?"
            .byte $00
LF0E0:      iny
LF0E1:      lda L0100,Y
            cmp #$20
            beq LF0E0
            rts
LF0E9:      ldx #$DF
LF0EB:      lda #$00
            sta $00,X
            sta L0001,X
            sta L0002,X
            jsr LF0E1
LF0F6:      lda L0100,Y
            cmp #$30
            bcc LF11E
            cmp #$3A
            bcc LF109
            sbc #$07
            bcc LF11E
            cmp #$40
            bcs LF11E
LF109:      asl A
            asl A
            asl A
            asl A
            sty L0002,X
            ldy #$04
LF111:      asl A
            rol $00,X
            rol L0001,X
            dey
            bne LF111
            ldy L0002,X
            iny
            bne LF0F6
LF11E:      lda L0002,X
            rts
LF121:      lda #$20
            jmp LFFF4
LF126:      ldy #$06
LF128:      jsr LF121
            dey
            bne LF128
            rts
LF12F:      lsr A
LF130:      lsr A
            lsr A
            lsr A
            lsr A
            rts
LF135:      iny
LF136:      iny
            iny
            iny
LF139:      iny
            iny
            iny
            iny
            rts
LF13E:      dey
            dey
            dey
            dey
            dey
            dey
            dey
            dey
            rts
LF147:      lda L00DF
            sec
            sbc #$01
            sta L00C9
            lda L00E0
            sbc #$00
            sta L00CA
            lda #$FF
            sta L00DA
            clc
            adc L00E3
            lda L00E4
            adc #$00
            sta L00CB
            lda L00E5
            jsr LF130
            sta L00CC
            lda L00E5
            and #$0F
            tax
            lda L00E6
LF16F:      sec
LF170:      inc L00DA
            sbc #$0A
            bcs LF170
            dex
            bpl LF16F
            adc #$0A
            sta L00DB
LF17D:      rts
LF17E:      jsr LF62C
LF181:      jsr LF094
            jsr LF192
            bcs LF17D
LF189:      jsr LF009
            .byte "File?"
            .byte $00
LF192:      jsr LF258
            ldy #$F8
LF197:      jsr LF135
            cpy L2105
            bcs LF1BF
            lda L200F,Y
            and #$7F
            cmp L00EF
            bne LF197
            jsr LF136
            ldx #$06
LF1AD:      lda L2007,Y
            cmp L00E8,X
            bne LF1B9
            dey
            dex
            bpl LF1AD
            rts
LF1B9:      dey
            dex
            bpl LF1B9
            bmi LF197
LF1BF:      clc
            rts
LF1C1:      lda L200F,Y
            bmi LF1DF
LF1C6:      lda L2010,Y
            sta L2008,Y
            lda L2110,Y
            sta L2108,Y
            iny
            cpy L2105
            bcc LF1C6
            tya
            sbc #$08
            sta L2105
            rts
LF1DF:      jsr LF009
            .byte "Prot"
            .byte $00
            jsr LF17E
            jsr LF1F4
            jmp LF4A9
LF1F0:      lda L00F0
            bne LF265
LF1F4:      lda L200F,Y
            and #$7F
            jsr LFFF4
            jsr LF121
            ldx L200F,Y
            bpl LF206
            lda #$23
LF206:      jsr LFFF4
            ldx #$07
LF20B:      lda L2008,Y
            jsr LFFF4
            iny
            dex
            bne LF20B
LF215:      jsr LF121
            lda L2102,Y
            jsr LF04A
            lda L2101,Y
            jsr LF04A
            iny
            inx
            iny
            cpx #$02
            bcc LF215
            jsr LF121
            jsr LF121
            lda L2103,Y
            jsr LF130
            jsr LF052
            lda L2102,Y
            jsr LF04A
            lda L2101,Y
            jsr LF04A
            jsr LF121
            lda L2103,Y
            jsr LF052
            lda L2104,Y
            jsr LF04A
            jsr LFFED
LF258:      jsr LF74D
LF25B:      bit L0A00
            bmi LF25B
            bit L0A00
            bmi LF25B
LF265:      rts
LF266:      jsr LF473
            jmp LF258
            jsr LF266
            ldx #$00
            stx L00B6
LF273:      lda L2000,X
            cpx #$08
            bcc LF27D
            lda L20F8,X
LF27D:      jsr LFFF4
            inx
            cpx #$0D
            bne LF273
            jsr LF009
            .byte " drive "
            lda L00DC
            jsr LF052
            jsr LF009
            .byte " qual "
            lda L00EF
            jsr LFFF4
            jsr LF009
            .byte " opt "
            lda L2106
            jsr LF130
            jsr LF052
LF2B3:      ldy #$00
            jsr LF2CE
            bcc LF304
LF2BA:      jsr LF13E
            lda L2008,Y
            and #$7F
            sta L2008,Y
            tya
            bne LF2BA
            jmp LFFED
LF2CB:      jsr LF135
LF2CE:      cpy L2105
            bcs LF2D8
            lda L2008,Y
            bmi LF2CB
LF2D8:      rts
LF2D9:      ldy L00B8
            beq LF2E2
            jsr LFFED
            ldy #$FF
LF2E2:      iny
            sty L00B8
            jsr LF126
LF2E8:      lda #$23
            ldy L00B7
            ldx L200F,Y
            bmi LF2F3
            lda #$20
LF2F3:      jsr LFFF4
            ldx #$00
LF2F8:      lda L00AE,X
            jsr LFFF4
            inx
            cpx #$07
            bne LF2F8
            beq LF2B3
LF304:      sty L00B7
            ldx #$00
LF308:      lda L2008,Y
            and #$7F
            sta L00AE,X
            iny
            inx
            cpx #$08
            bne LF308
LF315:      jsr LF2CE
            bcs LF337
            ldx #$06
            sec
LF31D:      lda L200E,Y
            sbc L00AE,X
            dey
            dex
            bpl LF31D
            jsr LF136
            lda L200F,Y
            and #$7F
            sbc L00B5
            bcc LF304
            jsr LF135
            bcs LF315
LF337:      ldy L00B7
            lda L2008,Y
            ora #$80
            sta L2008,Y
            lda L00B5
            cmp L00B6
            beq LF2D9
            sta L00B6
            jsr LFFED
            lda L00B5
            jsr LFFF4
            lda #$3A
            jsr LFFF4
            ldy #$04
            jsr LF128
            sty L00B8
            beq LF2E8
LF35F:      lda L210E,Y
            jsr LF130
            sta L00E5
            clc
            lda #$FF
            adc L210C,Y
            lda L210F,Y
            adc L210D,Y
            sta L00E6
            lda L210E,Y
            and #$0F
            adc L00E5
            sta L00E5
LF37E:      sec
            lda L2107,Y
            sbc L00E6
            pha
            lda L2106,Y
            and #$0F
            sbc L00E5
            tax
            lda #$00
            cmp L00E3
            pla
            sbc L00E4
            txa
            sbc #$00
            rts
LF398:      ldx #$02
            bne LF39E
LF39C:      ldx #$00
LF39E:      sty L00BF
LF3A0:      ldy L0208,X
            lda L00BB,X
            sty L00BB,X
            sta L0208,X
            inx
            txa
            lsr A
            bcs LF3A0
            ldy L00BF
            rts
LF3B2:      .byte "C"
LF3B3:      .byte "ATÚlDIRÚfINFOÒÁLOADÙ"
            .byte "ÆSAVEˆIDELETEÙcGOıÆR"
            .byte "UNıSLOCKı‚UNLOCKı„MO"
            .byte "NÙ§NOMONÙ¢SETıªDRIVE"
            .byte "ÙsTITLEı¡USE"
            .byte $F5,$F8
            .byte "OPTIONˆEXECıbSHUT"
            .byte $F8,$C3
            .byte "SPOOL"
            .word $90F5,$0EF5
            ldx #$FF
            cld
LF431:      ldy #$00
            jsr LF0E1
            dey
LF437:      iny
            inx
LF439:      lda LF3B2,X
            bmi LF456
            cmp L0100,Y
            beq LF437
            dex
LF444:      inx
            lda LF3B2,X
            bpl LF444
            inx
            lda L0100,Y
            cmp #$2E
            bne LF431
            iny
            dex
            bcs LF439
LF456:      sta L00DE
            lda LF3B3,X
            sta L00DD
            clc
            ldx #$00
            jmp (L00DD)
            jsr LF17E
            sty L00DD
            jsr LF1F0
            ldy L00DD
            jsr LF1C1
            jmp LF5F2
LF473:      jsr LF0E1
            cmp #$0D
            beq LF497
            iny
            pha
            jsr LF62F
            pla
            cmp #$30
            bcc LF498
            cmp #$34
            bcs LF498
LF488:      and #$03
            eor L00DC
            jsr LF25B
            cmp #$80
            beq LF497
            eor L00DC
            sta L00DC
LF497:      rts
LF498:      jsr LF009
            .byte "Drive?"
            .byte $00
            ldx #$FF
            jsr LF62F
            stx L00F0
LF4A9:      lda L00CD
            sta L00EF
            rts
LF4AE:      jsr LF06D
            jsr LF0E9
            beq LF4BA
            lda #$FF
LF4B8:      sta L00E1
LF4BA:      ldx #$DD
            clc
            jmp (L020C)
            php
            jsr LF4CD
LF4C4:      plp
            bcc LF4CA
            jsr LF25B
LF4CA:      jmp LF4A9
LF4CD:      jsr LF181
LF4D0:      sty L00DD
            ldx #$00
            lda L00E1
            bpl LF4DC
            ldx #$02
            iny
            iny
LF4DC:      lda L2108,Y
            sta L00DF,X
            iny
            inx
            cpx #$08
            bne LF4DC
            ldy L00DD
            jsr LF1F0
LF4EC:      jsr LF7AE
            lda #$53
LF4F1:      sta L00AD
            jsr LF147
LF4F6:      jsr LF832
            beq LF50D
LF4FB:      jsr LF862
            lda L00AD
            jsr LF809
            jsr LF7C0
            bne LF4FB
            jsr LF855
            bne LF4F6
LF50D:      rts
            jsr LF05F
            lda L00DC
            sta L00C7
            lda L00EF
            sta L00C8
            lda #$20
            sta L00EF
            lda #$00
            sta L00E1
            jsr LF488
            ldx #$DD
            jsr LF094
            jsr LF192
            bcs LF53D
            jsr LF549
            jsr LF009
            .byte "Command?"
            .byte $00
LF53D:      jsr LF4D0
            jsr LF25B
            jsr LF549
            jmp (L00E1)
LF549:      lda L00C7
            jsr LF488
            lda L00C8
            sta L00EF
            rts
LF553:      jsr LF05F
            jsr LF4B8
LF559:      jsr LF25B
            jmp (L00E1)
LF55F:      jmp LF189
LF562:      jsr LF62C
            jsr LFFCE
            tay
            beq LF55F
            sta L00B9
            jsr LF398
            lda #$7C
            ldy #$F5
LF574:      sta L0206,X
            tya
            sta L0207,X
            rts
            sty L00D7
            ldy L00B9
            jsr LFFD4
            bcc LF58D
            jsr LFFCB
            ldy L00D7
            jmp (L020A)
LF58D:      ldy L00D7
            rts
            jsr LF62C
            clc
            jsr LFFCE
            sta L00BA
            jsr LF39C
            lda #$A2
            ldy #$F5
            bne LF574
            sty L00D7
            ldy L00BA
            jsr LFFD1
            ldy L00D7
            jmp (L00BB)
            jsr LF0E9
            php
            jsr LF62F
            plp
            beq LF559
            jmp (L00DF)
            jsr LF5FC
            sta L00CD
            rts
            jsr LF06D
            jsr LF266
            ldx #$0C
            lda #$20
LF5CB:      jsr LF620
            dex
            bpl LF5CB
LF5D1:      inx
            lda L0140,X
            cmp #$0D
            beq LF5F2
            jsr LF620
            cpx #$0C
            bcc LF5D1
            bcs LF5F2
            sec
            php
            jsr LF17E
            lda L00EF
            rol A
            plp
            ror A
            sta L200F,Y
            jsr LF1F0
LF5F2:      jsr LF766
            jmp LF4A9
            lda L00EF
            sta L00CD
LF5FC:      iny
            jsr LF62F
            lda L00FF,Y
            sta L00EF
            rts
            jsr LF0E9
            jsr LF266
            lda L00DF
            asl A
            asl A
            asl A
            asl A
            eor L2106
            and #$30
            eor L2106
            sta L2106
            jmp LF766
LF620:      cpx #$08
            bcc LF628
            sta L20F8,X
            rts
LF628:      sta L2000,X
LF62B:      rts
LF62C:      jsr LF06D
LF62F:      jsr LF0E1
            cmp #$0D
            beq LF62B
LF636:      jsr LF009
            .byte "Syntax?"
            .byte $00
LF641:      jsr LF009
            lsr L0075
            jmp (L006C)
            jsr LF06D
            jsr LF0E9
            beq LF636
            ldx #$E5
            jsr LF0EB
            beq LF636
            ldx #$E1
            jsr LF0EB
            php
            lda L00DF
            ldx L00E0
            plp
            bne LF669
            sta L00E1
            stx L00E2
LF669:      sta L00E3
            stx L00E4
            jsr LF62F
            ldx #$DD
            clc
            jmp LFFDD
            php
            jsr LF710
            jmp LF4C4
LF67D:      jsr LF094
            jsr LF192
            bcc LF688
            jsr LF1C1
LF688:      lda L00E3
            pha
            lda L00E4
            pha
            sec
            lda L00E5
            sbc L00E3
            sta L00E3
            lda L00E6
            sbc L00E4
            sta L00E4
            lda #$00
            sta L00E5
            lda #$02
            sta L00E6
            ldy L2105
            beq LF6E2
            cpy #$F8
            bcs LF641
            jsr LF37E
            jmp LF6B8
LF6B2:      jsr LF13E
            jsr LF35F
LF6B8:      tya
            beq LF6BD
            bcc LF6B2
LF6BD:      bcs LF6CA
            jsr LF009
            .byte "No room"
            .byte $00
LF6CA:      sty L00D8
            ldy L2105
LF6CF:      cpy L00D8
            beq LF6E2
            lda L2007,Y
            sta L200F,Y
            lda L2107,Y
            sta L210F,Y
            dey
            bcs LF6CF
LF6E2:      ldx #$00
LF6E4:      lda L00E8,X
            sta L2008,Y
            iny
            inx
            cpx #$08
            bne LF6E4
LF6EF:      lda L00DE,X
            dey
            sta L2108,Y
            dex
            bne LF6EF
            jsr LF1F0
            pla
            sta L00E0
            pla
            sta L00DF
            ldy L2105
            jsr LF135
            sty L2105
            jsr LF766
            jmp LF25B
LF710:      jsr LF67D
LF713:      jsr LF7B2
            lda #$4B
            jmp LF4F1
LF71B:      lda #$00
            sta L00DA
            sta L00DB
            lda #$02
            sta L00F2
            ldy #$16
            lda #$45
            sta L00D5
            lda #$F7
            sta L00D6
LF72F:      lda LF87E,Y
            jsr LF7EE
LF735:      iny
            lda LF87E,Y
            cmp #$EA
            beq LF743
            jsr LF825
            jmp LF735
LF743:      iny
            rts
            jsr LF800
            lda #$0A
            sta L00F1
            rts
LF74D:      jsr LF796
            bne LF765
            jsr LF777
            jsr LF71B
LF758:      jsr LF7AE
            lda #$53
            jsr LF809
            jsr LF7C0
            bne LF758
LF765:      rts
LF766:      jsr LF71B
LF769:      jsr LF7B2
            lda #$4B
            jsr LF809
            jsr LF7C0
            bne LF769
            rts
LF777:      lda L00DC
            and #$03
            tay
            ora #$80
            sta L00DC
            lda #$3A
            jsr LF7F7
            lda #$23
            jsr LF825
            lda LF7AA,Y
            jsr LF825
LF790:      jsr LF796
            beq LF790
            rts
LF796:      lda L00DC
            bpl LF7A7
            lda #$6C
            jsr LF7EE
            jsr LF800
            bcc LF7A7
            jsr LF130
LF7A7:      and #$04
            rts
LF7AA:      pha
            dey
            pla
            tay
LF7AE:      ldy #$0A
            bne LF7B4
LF7B2:      ldy #$12
LF7B4:      ldx #$0B
LF7B6:      lda LF86B,Y
            sta L00F2,X
            dey
            dex
            bne LF7B6
LF7BF:      rts
LF7C0:      jsr LF800
            beq LF7BF
            cmp #$12
            bne LF7D1
            jsr LF000
            .byte "prot"
            .byte $00
LF7D1:      cmp #$16
            bne LF7DA
            jsr LF000
            .byte "?"
            .byte $00
LF7DA:      dec L00F1
            bne LF7BF
            pha
            jsr LF000
            .byte "error "
            nop
            pla
            jsr LF04A
            .byte $00
LF7EE:      pha
            lda L00DC
            ror A
            pla
            bcc LF7F7
            eor #$C0
LF7F7:      bit L0A00
            bmi LF7F7
            sta L0A00
            rts
LF800:      lda L0A00
            bmi LF800
            lda L0A01
            rts
LF809:      jsr LF7EE
            clc
            pla
            adc #$01
            sta L00D5
            pla
            adc #$00
            sta L00D6
            lda L00DA
            jsr LF825
            lda L00DB
            jsr LF825
            lda L00F2
            ora #$20
LF825:      pha
LF826:      lda L0A00
            and #$20
            bne LF826
            pla
            sta L0A01
            rts
LF832:      lda #$0A
            sta L00F1
            sec
            lda #$0A
            sbc L00DB
            ldy L00CC
            bne LF845
            cmp L00CB
            bcc LF845
            lda L00CB
LF845:      sta L00F2
            sec
            lda L00CB
            sbc L00F2
            sta L00CB
            bcs LF852
            dec L00CC
LF852:      lda L00F2
            rts
LF855:      sta L00DB
            lda L00F7
            sta L00C9
            lda L00F8
            sta L00CA
            inc L00DA
            rts
LF862:      lda L00C9
            sta L00F7
            lda L00CA
            sta L00F8
            rts
LF86B:      lda L0A04
            sta L1FFF
            pla
            rti
            jmp L00F6
            lda L1FFF
            sta L0A04
            pla
            rti
LF87E:      .byte $35,$0D,$0D,$08,$C5,$EA,$35,$10
            .byte $FF,$FF,$00,$EA,$35,$18,$FF,$FF
            .byte $00,$EA,$3A,$17,$C1,$EA,$69,$00
            .byte $EA
            pha
            lda L0A00
            and #$04
            beq LF8A8
            inc L00F7
            bne LF8A5
            inc L00F8
LF8A5:      jmp L00F3
LF8A8:      lda L0A00
            and #$08
            bne LF8B2
            jmp (L0200)
LF8B2:      txa
            pha
            tya
            pha
            cld
            jsr LF8C0
            pla
            tay
            pla
            tax
            pla
            rti
LF8C0:      jmp (L00D5)
            ldy #$00
LF8C5:      pha
            cld
            tya
            bne LF8D9
LF8CA:      clc
            adc #$20
            beq LF8D7
            tay
            jsr LF8C5
            bne LF8CA
LF8D5:      ldx L00C6
LF8D7:      pla
            rts
LF8D9:      jsr LFAA3
            bcs LF8D5
            cpy L00B9
            bne LF8E8
            jsr LF398
            lsr A
            sta L00B9
LF8E8:      cpy L00BA
            bne LF8F1
            jsr LF39C
            sta L00BA
LF8F1:      lda L2217,Y
            and #$60
            beq LF92D
            jsr LF939
            lda L2217,Y
            and #$20
            beq LF927
            ldx L00C4
            lda L2214,Y
            sta L210C,X
            lda L2215,Y
            sta L210D,X
            lda L2216,Y
            asl A
            asl A
            asl A
            asl A
            eor L210E,X
            and #$F0
            eor L210E,X
            sta L210E,X
            jsr LF766
            ldy L00C2
LF927:      jsr LFB9D
            jsr LF549
LF92D:      lda L221B,Y
            eor #$FF
            and L00C0
            sta L00C0
            jmp LF8D5
LF939:      jsr LF965
LF93C:      ldx #$07
LF93E:      lda L220C,Y
            sta L00E7,X
            dey
            dey
            dex
            bne LF93E
            jsr LF192
            bcc LF981
            sty L00C4
            lda L210E,Y
            ldx L210F,Y
            ldy L00C2
            eor L220D,Y
            and #$0F
            bne LF981
            txa
            cmp L220F,Y
            bne LF981
            rts
LF965:      lda L00DC
            sta L00C7
            lda L00EF
            sta L00C8
            lda L220E,Y
            and #$7F
            sta L00EF
            lda L2217,Y
            jmp LF488
            cld
            tya
            pha
            stx L00C6
LF97F:      php
            lda $00,X
            sta L00DD
            lda L0001,X
            sta L00DE
            jsr LF0A1
            jsr LF192
            bcs LF9AF
            plp
            bcc LF998
            ldy #$00
            jmp LFA78
LF998:      lda #$00
            ldx #$08
LF99C:      sta L00DE,X
            dex
            bne LF99C
            lda #$40
            sta L00E6
            ldx #$DD
            jsr LF67D
            ldx L00C6
            clc
            bcc LF97F
LF9AF:      sty L00C3
            lda #$00
            sta L00C2
            ldy #$A0
            lda #$08
LF9B9:      bit L00C0
            beq LF9E5
            pha
            sty L00C4
            ldx L00C3
            lda #$08
            sta L00C5
LF9C6:      lda L2200,Y
            cmp L2008,X
            bne LF9EC
            iny
            lda L2200,Y
            cmp L2108,X
            bne LF9EC
            iny
            inx
            dec L00C5
            bne LF9C6
            ldy L00C4
            ldx L00C6
            jsr LF8C5
            pla
LF9E5:      sty L00C2
            sta L00C1
            jmp LF9EF
LF9EC:      ldy L00C4
            pla
LF9EF:      pha
            tya
            sec
            sbc #$20
            tay
            pla
            asl A
            bne LF9B9
            ldy L00C2
            beq LF9B2
            ldx L00C3
            lda #$08
            sta L00C5
LFA03:      lda L2008,X
            sta L2200,Y
            iny
            lda L2108,X
            sta L2200,Y
            iny
            inx
            dec L00C5
            bne LFA03
            ldx #$10
            lda #$00
LFA1A:      sta L2200,Y
            iny
            dex
            bne LFA1A
            lda L00C2
            tay
            jsr LF12F
            adc #$22
            sta L2213,Y
            lda L00C1
            sta L221B,Y
            ora L00C0
            sta L00C0
            lda L2209,Y
            adc #$FF
            lda L220B,Y
            adc #$00
            sta L2219,Y
            lda L220D,Y
            ora #$0F
            adc #$00
            jsr LF130
            sta L221A,Y
            plp
            bcc LFA81
            lda L2209,Y
            sta L2214,Y
            lda L220B,Y
            sta L2215,Y
            lda L220D,Y
            jsr LF130
            sta L2216,Y
LFA67:      lda L00DC
            and #$0F
            ora L2217,Y
            sta L2217,Y
            jsr LFAF8
            lda L00CD
            sta L00EF
LFA78:      sty L00C3
            ldx L00C6
            pla
            tay
            lda L00C3
            rts
LFA81:      lda #$20
            sta L2217,Y
            bne LFA67
            pha
            sty L00C2
            asl A
            asl A
            adc L00C2
            tay
            lda L2210,Y
            sta $00,X
            lda L2211,Y
            sta L0001,X
            lda L2212,Y
            sta L0002,X
            ldy L00C2
            pla
            rts
LFAA3:      pha
            stx L00C6
            tya
            and #$E0
            sta L00C2
            beq LFABE
            jsr LF12F
            tay
            lda #$00
            sec
LFAB4:      ror A
            dey
            bne LFAB4
            ldy L00C2
            bit L00C0
            bne LFAC1
LFABE:      pla
            sec
            rts
LFAC1:      pla
            clc
LFAC3:      rts
LFAC4:      ldx #$20
            txa
            clc
LFAC8:      adc L2200,Y
            iny
            dex
            bne LFAC8
            adc #$00
            ldy L00C2
            rts
LFAD4:      jsr LFAC4
            cmp #$FF
            beq LFAC3
            .byte $00
LFADC:      clc
            lda L220F,Y
            adc L2211,Y
            sta L00E6
            sta L221C,Y
            lda L220D,Y
            and #$0F
            adc L2212,Y
            sta L00E5
            sta L221D,Y
            jsr LFB8C
LFAF8:      lda #$FF
            sta L221F,Y
            jsr LFAC4
            eor #$FF
LFB02:      sta L221F,Y
            rts
LFB06:      clc
            adc L221F,Y
            adc #$00
            bne LFB02
LFB0E:      jsr LFFE6
            cmp #$04
            beq LFB37
            clc
            rts
            cld
            tya
            beq LFB0E
            jsr LFAA3
            bcs LFB5B
            tya
            jsr LFD21
            bne LFB3B
            lda L2217,Y
            and #$10
            bne LFB7C
            lda #$10
            jsr LFB8E
            jsr LFAF8
            ldx L00C6
LFB37:      lda #$FF
            sec
            rts
LFB3B:      lda L2217,Y
            bmi LFB50
            jsr LFAD4
            jsr LF965
            jsr LFB9D
            sec
            jsr LFBA5
            jsr LF549
LFB50:      lda L2210,Y
            sta L00DD
            lda L2213,Y
            sta L00DE
            ldy #$00
            lda (L00DD),Y
            pha
            ldy L00C2
            lda #$FE
            jsr LFB06
            ldx L00DD
            inx
            txa
            sta L2210,Y
            bne LFB88
            clc
            lda L2211,Y
            adc #$01
            sta L2211,Y
            lda L2212,Y
            adc #$00
            sta L2212,Y
            jsr LFB93
            lda #$80
            jsr LFB06
LFB88:      clc
            jmp LF8D5
LFB8C:      lda #$80
LFB8E:      ora L2217,Y
            bne LFB98
LFB93:      lda #$7F
LFB95:      and L2217,Y
LFB98:      sta L2217,Y
            clc
            rts
LFB9D:      lda L2217,Y
            and #$40
            beq LFBDE
            clc
LFBA5:      php
            jsr LF777
            ldy L00C2
            lda L2213,Y
            sta L00E0
            lda #$00
            sta L00DF
            sta L00E3
            lda #$01
            sta L00E4
            plp
            bcs LFBD3
            lda L221C,Y
            sta L00E6
            lda L221D,Y
            sta L00E5
            jsr LF713
            ldy L00C2
            lda #$BF
            jsr LFB95
            bcc LFBD9
LFBD3:      jsr LFADC
            jsr LF4EC
LFBD9:      jsr LF25B
            ldy L00C2
LFBDE:      rts
LFBDF:      pla
            jmp LFFE9
LFBE3:      cld
            pha
            tya
            beq LFBDF
            jsr LFAA3
            bcs LFC46
            jsr LFAD4
            lda L220E,Y
            bmi LFBB1
            jsr LF965
            tya
            clc
            adc #$04
            jsr LFD21
            bne LFC52
            jsr LF93C
            ldx L00C4
            sec
            lda L2107,X
            sbc L210F,X
            pha
            lda L2106,X
            sbc L210E,X
            and #$0F
            sta L00C3
            asl A
            asl A
            asl A
            asl A
            eor L210E,X
            and #$F0
            eor L210E,X
            cmp L210E,X
            sta L210E,X
            bne LFC39
            pla
            cmp L210D,X
            bne LFC3A
            jsr LF549
            jsr LF8C5
            .byte $00
LFC39:      pla
LFC3A:      sta L210D,X
            sta L2219,Y
            lda L00C3
            sta L221A,Y
            lda #$00
            sta L210C,X
            jsr LF766
            jsr LF25B
            ldy L00C2
LFC52:      lda L2217,Y
            bmi LFC6E
            jsr LFB9D
            lda L2214,Y
            bne LFC6A
            tya
            jsr LFD21
            bne LFC6A
            jsr LFADC
            bne LFC6E
LFC6A:      sec
            jsr LFBA5
LFC6E:      lda L2210,Y
            sta L00DD
            lda L2213,Y
            sta L00DE
            pla
            ldy #$00
            sta (L00DD),Y
            pha
            ldy L00C2
            lda #$40
            jsr LFB8E
            inc L00DD
            lda L00DD
            sta L2210,Y
            bne LFCA1
            jsr LFB93
            lda L2211,Y
            adc #$01
            sta L2211,Y
            lda L2212,Y
            adc #$00
            sta L2212,Y
LFCA1:      tya
            jsr LFD21
            bcc LFCBE
            lda #$20
            jsr LFB8E
            lda L2210,Y
            sta L2214,Y
            lda L2211,Y
            sta L2215,Y
            lda L2212,Y
            sta L2216,Y
LFCBE:      jsr LFAF8
            jsr LF549
            jmp LFB88
            pha
            jsr LFAA3
            bcs LFC9D
            jsr LFAD4
            ldx L00C6
            jsr LF139
            jsr LFD39
            bcc LFD3D
            ldy L00C2
LFCDC:      jsr LFD39
            bcs LFCE8
            lda #$FF
            jsr LFBE3
            bne LFCDC
LFCE8:      lda $00,X
            sta L2210,Y
            lda L0001,X
            sta L2211,Y
            lda L0002,X
            sta L2212,Y
            lda #$6F
            jsr LFB95
            lda L220F,Y
            adc L2211,Y
            sta L00C5
            lda L220D,Y
            and #$0F
            adc L2212,Y
            cmp L221D,Y
            bne LFD1B
            lda L00C5
            cmp L221C,Y
            bne LFD1B
            jsr LFB8C
LFD1B:      jsr LFAF8
            jmp LFB88
LFD21:      tax
            lda L2212,Y
            cmp L2216,X
            bne LFD38
            lda L2211,Y
            cmp L2215,X
            bne LFD38
            lda L2210,Y
            cmp L2214,X
LFD38:      rts
LFD39:      lda L2214,Y
            cmp $00,X
            lda L2215,Y
            sbc L0001,X
            lda L2216,Y
            sbc L0002,X
            rts
            pha
LFD4A:      ora #$08
            and #$0A
            asl A
LFD4F:      lsr A
            jsr LFD7E
LFD53:      bit L0E21
            bpl LFD53
LFD58:      lda L0E21
            bmi LFD58
            cmp #$11
            beq LFD72
            cmp #$17
            beq LFD4F
            cmp #$01
            beq LFD4A
            cmp #$13
            beq LFD4F
            cmp #$1A
            beq LFD4A
            rts
LFD72:      sty L00D7
            ldy #$00
            lda (L00D2),Y
            ldy L00D7
            rts
            jsr LFD8B
LFD7E:      php
            pha
            cld
            sty L00D7
            jsr LFE4A
            pla
            ldy L00D7
            plp
            rts
LFD8B:      pha
            cmp #$02
            beq LFDB7
            cmp #$03
            beq LFDC8
            cmp L00FE
            beq LFDC6
            lda L0C0C
            and #$0E
            beq LFDC6
            pla
LFDA0:      bit L0C01
            bmi LFDA0
            sta L0C01
            pha
            lda L0C0C
            and #$F0
            ora #$0C
            sta L0C0C
            ora #$02
            bne LFDC3
LFDB7:      lda #$7F
            sta L0C03
            lda L0C0C
            and #$F0
            ora #$0E
LFDC3:      sta L0C0C
LFDC6:      pla
            rts
LFDC8:      lda L0C0C
            and #$F0
            bcs LFDC3
LFDCF:      pla
            pla
            rts
LFDD2:      dey
            bpl LFDE9
            ldy #$27
LFDD7:      lda L00CE
            cmp #$18
            bcs LFDCF
            inc L00CE
LFDDF:      lda L00CF
            sbc #$27
            sta L00CF
            bcs LFDE9
            dec L00D0
LFDE9:      rts
LFDEA:      dec L00CE
            rts
LFDED:      ldy #$28
            jsr LFE21
            lda L00D2
            sta L00CF
            lda L00D4
            sta L00D0
            lda L00CE
            bne LFDEA

            ldy #$0D
            sty L0800	; Cursor end
            lda L00CF
            sec
            sbc #$C0
            sta L0801	; Data

            dey
            sty L0800	; Cursor start
            lda L00D0
            sbc #$03
            sta L0801	; Data

            ldy #$27
            lda #$20
LFE1A:      jsr LFE36
            dey
            bpl LFE1A
            rts
LFE21:      pha
            clc
            tya
            adc L00CF
            sta L00D2
            lda L00D0
            adc #$00
            sta L00D4
            and #$07
            ora #$04
            sta L00D3
            pla
            rts
LFE36:      jsr LFE21
            sty L00D4
            ldy #$00
            sta (L00D2),Y
            ldy L00D4
            rts
LFE42:      clc
LFE43:      php
            asl L00D1
            plp
            ror L00D1
            rts
LFE4A:      cmp #$06
            beq LFE42
            cmp #$15
            beq LFE43
            ldy L00D1
            bmi LFE83
            cmp #$20
            bcc LFE8E
            cmp #$7F
            beq LFE84
LFE5E:      jsr LFE36
LFE61:      iny
            cpy #$28
            bcc LFE6B
            jsr LFDED
LFE69:      ldy #$00
LFE6B:      jsr LFE21
            sty L00D1

            ldy #$0F
            sty L0800	; Cursor (L)
            lda L00D2	; $00
            sta L0801	; Data

            dey
            sty L0800	; Cursor (H)
            ldy L00D4	; $00
            sty L0801	; Data

LFE83:      rts
LFE84:      jsr LFDD2
            lda #$20
            jsr LFE36
            bpl LFE6B
LFE8E:      cmp #$0D
            beq LFE69
            cmp #$0A
            beq LFEB2
            cmp #$0C
            beq LFED1
            cmp #$08
            beq LFEAC
            cmp #$1E
            beq LFEBA
            cmp #$0B
            beq LFECB
            cmp #$09
            bne LFE5E
            bcs LFE61
LFEAC:      jsr LFDD2
            jmp LFE6B
LFEB2:      jsr LFDED
            ldy L00D1
            jmp LFE6B
LFEBA:      lda #$18
            ldy L00CE
            sta L00CE
LFEC0:      cpy #$18
            bcs LFE69
            iny
            jsr LFDDF
            jmp LFEC0
LFECB:      jsr LFDD7
            jmp LFE6B

LFED1:      lda #$20
            ldy #$00
LFED5:      sta L0400,Y
            sta L0500,Y
            sta L0600,Y
            sta L0700,Y
            iny
            bne LFED5
            sty L00CF
            sty L00CF
            sty L00CF
            sty L00CF
            sty L00CF
            sty L00CF
            sty L00CF
            sty L00D1

; Set 6845 registers

            ldy #$0D
LFEF6:      sty L0800
            lda LFF8E,Y
            sta L0801
            dey
            bpl LFEF6

            lda #$18
            sta L00CE
            lda #$04
            sta L00D0
            jmp LFE69

LFF0D:      ldx #$19
LFF0F:      lda LFF9C,X
            sta L0202,X
            dex
            bpl LFF0F
            txs
            cld
            lda #$20
            sta L00CD
            sta L00EF
            lda #$0A
            sta L00FE
            ldy #$00
            sty L00DC
            sty L00C0
            sty L00B9
            sty L00BA
            ldx #$04
LFF30:      jsr LF72F
            dex
            bne LFF30
            jsr LFED1
            bit L0E21
            bvs LFF6D
            ldx #$04
LFF40:      lda LFF89,X
            sta L0100,X
            dex
            bpl LFF40
            jsr LF258
            ldy #$00
            ldx #$00
            lda L2106
            jsr LF130
            beq LFF6D
            jsr LFF5E
            jmp LFF6D
LFF5E:      cmp #$02
            bcc LFF6A
            beq LFF67
            jmp LF562
LFF67:      jmp LF553
LFF6A:      jmp LF4AE
LFF6D:      jsr LF009
            .byte "Acorn Dos"
            .byte $0A
            ldx #$FF
            txs
            jsr LFFED
LFF80:      jsr LF029
            jsr LFFF7
            jmp LFF80

LFF89:      .byte "BOOT"
            .byte $0D

LFF8E:      .byte $3F	; R13 = Start address (L)
	    .byte $28	; R12 = Start address (H)
            .byte $33	; R11 = Cursor end
            .byte $44	; R10 = Cursor start
            .byte $1E	; R 9 = Max scan line address
	    .byte $02	; R 8 = Interlace mode
	    .byte $19	; R 7 = V.sync pos
	    .byte $1B	; R 6 = Vert.displayed
	    .byte $03	; R 5 = V.total adjust
	    .byte $12	; R 4 = Vert.total
	    .byte $72	; R 3 = H.Sync width
	    .byte $13	; R 2 = H.Sync pos
            .byte $04	; R 1 = Hor.displayed
	    .byte $00	; R 0 = Hor.total

LFF9C:      .byte $7A,$FF,$31,$F5,$2E,$F4,$7B,$FD
            .byte $53,$FD,$C0,$F4,$76,$F6,$88,$FA
            .byte $C7,$FC,$17,$FB,$E3,$FB,$7A,$F9
            .byte $C5,$F8

LFFB6:      sta L00FF
            pla
            pha
            and #$10
            bne LFFC4
            lda L00FF
            pha
            jmp (L0204)

LFFC4:      lda L00FF
            plp
            php
            jmp (L0202)

LFFCB:      jmp (L021A)
LFFCE:      jmp (L0218)
LFFD1:      jmp (L0216)
LFFD4:      jmp (L0214)
            jmp (L0212)
            jmp (L0210)
LFFDD:      jmp (L020E)
            jmp (L020C)
LFFE3:      jmp (L020A)
LFFE6:      jsr LFFE3
LFFE9:      cmp #$0D
            bne LFFF4
LFFED:      lda #$0A
            jsr LFFF4
            lda #$0D
LFFF4:      jmp (L0208)
LFFF7:      jmp (L0206)
            .byte $97,$F8,$0D,$FF,$B6,$FF
