;
; Code equates
;
L0001       = $0001
L0002       = $0002
L0003       = $0003
L0004       = $0004
L0005       = $0005
L0006       = $0006
L0007       = $0007
L0008       = $0008
L0009       = $0009
L000A       = $000A
L000B       = $000B
L000C       = $000C
L000D       = $000D
L000E       = $000E
L000F       = $000F
L0010       = $0010
L0011       = $0011
L0012       = $0012
L0013       = $0013
L0014       = $0014
L0015       = $0015
L0016       = $0016
L0017       = $0017
L0018       = $0018
L0019       = $0019
L001A       = $001A
L001B       = $001B
L001C       = $001C
L001D       = $001D
L001E       = $001E
L001F       = $001F
L0020       = $0020
L0021       = $0021
L0022       = $0022
L0023       = $0023
L0024       = $0024
L0025       = $0025
L0026       = $0026
L0027       = $0027
L0028       = $0028
L0029       = $0029
L002A       = $002A
L002B       = $002B
L002C       = $002C
L002D       = $002D
L002E       = $002E
L002F       = $002F
L0030       = $0030
L0031       = $0031
L0032       = $0032
L0033       = $0033
L0034       = $0034
L0035       = $0035
L0036       = $0036
L0037       = $0037
L0038       = $0038
L0039       = $0039
L003A       = $003A
L003B       = $003B
L003C       = $003C
L003D       = $003D
L003E       = $003E
L003F       = $003F
L0040       = $0040
L0041       = $0041
L0042       = $0042
L0043       = $0043
L0044       = $0044
L0045       = $0045
L0046       = $0046
L0048       = $0048
L0049       = $0049
L004A       = $004A
L004B       = $004B
L004C       = $004C
L004D       = $004D
L004E       = $004E
L004F       = $004F
L0050       = $0050
L0061       = $0061
L0064       = $0064
L006E       = $006E
L0084       = $0084
L00C6       = $00C6
L00E0       = $00E0
L00E3       = $00E3
L0100       = $0100
L0106       = $0106
L01FF       = $01FF
L0202       = $0202
L0203       = $0203
L0208       = $0208
L0E21       = $0E21
L2800       = $2800
L2801       = $2801
L2802       = $2802
L2803       = $2803
L2804       = $2804
L280C       = $280C
L283C       = $283C
L283D       = $283D
L2840       = $2840
L2841       = $2841
L2860       = $2860
L2864       = $2864
L286C       = $286C
L287F       = $287F
L28F1       = $28F1
L28F2       = $28F2
L28F3       = $28F3
L28F4       = $28F4
L28F5       = $28F5
L28F6       = $28F6
L28F7       = $28F7
L28F9       = $28F9
L28FA       = $28FA
L28FB       = $28FB
L28FC       = $28FC
L28FE       = $28FE
L28FF       = $28FF
L2900       = $2900
L2901       = $2901
L2902       = $2902
L2903       = $2903
L2904       = $2904
L2905       = $2905
L2906       = $2906
L2908       = $2908
L2909       = $2909
L290A       = $290A
L290B       = $290B
L290D       = $290D
L290E       = $290E
L29A3       = $29A3
L29A4       = $29A4
L29B7       = $29B7
L29B8       = $29B8
L29CB       = $29CB
L29CC       = $29CC
L29E5       = $29E5
L29E6       = $29E6
L29FF       = $29FF
L2A00       = $2A00
L2AFF       = $2AFF
L6F4E       = $6F4E
L7461       = $7461
LFFCB       = $FFCB
LFFCE       = $FFCE
LFFD1       = $FFD1
LFFD4       = $FFD4
LFFD7       = $FFD7
LFFDA       = $FFDA
LFFDD       = $FFDD
LFFE0       = $FFE0
LFFE3       = $FFE3
LFFE9       = $FFE9
LFFED       = $FFED
LFFF4       = $FFF4
LFFF7       = $FFF7
;
; Start of code
;
            *= $A000
;
            .byte $20,$D2,$DF
            .byte "BBC BASIC II"
            .byte $0D
            .byte "(C)1982 Acorn"
            .byte $0D,$0D
            ldx #$00
            ldy #$A0
            stx L0006
            sty L0007
            ldy #$30
            sty L0018
            ldx #$00
            stx L001F
            stx L2802
            stx L2803
            dex
            stx L0023
            ldx #$0A
            stx L2800
            dex
            stx L2801
            lda #$01
            and L0011
            ora L000D
            ora L000E
            ora L000F
            ora L0010
            bne LA05B
            lda #$41
            sta L000D
            lda #$52
            sta L000E
            lda #$57
            sta L000F
LA05B:      lda #$F4
            sta L0202
            lda #$D3
            sta L0203
            cli
            jmp LAAD5
            .byte "ANDÄ"
            .byte $00
            .byte "ABSî"
            .byte $00
            .byte "ACSï"
            .byte $00
            .byte "ADVALñ"
            .byte $00
            .byte "ASCó"
            .byte $00
            .byte "ASNò"
            .byte $00
            .byte "ATNô"
            .byte $00
            .byte "AUTO∆BGETöBPUT’CO"
            .byte "LOUR˚CALL÷CHAIN◊C"
            .byte "HR$Ω"
            .byte $00
            .byte "CLEARÿCLOSEŸCLG⁄C"
            .byte "LS€COS"
            .byte $9B,$00
            .byte "COUNTúDATA‹ DEGù"
            .byte $00
            .byte "DEF›"
            .byte $00
            .byte "DELETE«DIVÅ"
            .byte $00
            .byte "DIMﬁDRAWﬂENDPROC·"
            .byte "END‡ENVELOPE‚ELSEã"
            .byte "EVAL†"
            .byte $00
            .byte "ERLûERRORÖEOF≈EOR"
            .byte "Ç"
            .byte $00
            .byte "ERRüEXP°"
            .byte $00
            .byte "EXT¢FOR„FALSE£FN§"
            .byte "GOTOÂGET$æ"
            .byte $00
            .byte "GET•"
            .byte $00
            .byte "GOSUB‰GCOLÊHIMEMìC"
            .byte "INPUTËIFÁINKEY$ø"
            .byte $00
            .byte "INKEY¶"
            .byte $00
            .byte "INT®"
            .byte $00
            .byte "INSTR(ß"
            .byte $00
            .byte "LIST…LINEÜ"
            .byte $00
            .byte "LOAD»LOMEMíCLOCALÍ"
            .byte "LEFT$(¿"
            .byte $00
            .byte "LEN©"
            .byte $00
            .byte "LETÈLOG´"
            .byte $00
            .byte "LN™"
            .byte $00
            .byte "MID$(¡"
            .byte $00
            .byte "MODEÎMODÉ"
            .byte $00
            .byte "MOVEÏNEXTÌNEW NOT"
            .byte "¨"
            .byte $00
            .byte "OLDÀONÓOFFá"
            .byte $00
            .byte "ORÑ"
LA220:      .byte $00
            .byte "OPENINé"
            .byte $00
            .byte "OPENOUTÆ"
            .byte $00
            .byte "OPENUP≠"
            .byte $00
            .byte "OSCLIˇPRINTÒPAGEêC"
            .byte "PTRèCPIØPLOTPOINT"
            .byte "(∞"
            .byte $00
            .byte "PROCÚ
POS±RETURN¯R"
            .byte "EPEATı"
            .byte $00
            .byte "REPORTˆREADÛREMÙ R"
            .byte "UN˘RAD≤"
            .byte $00
            .byte "RESTORE˜RIGHT$(¬"
            .byte $00
            .byte "RND≥RENUMBERÃSTEPà"
            .byte $00
            .byte "SAVEÕSGN¥"
            .byte $00
            .byte "SINµ"
            .byte $00
            .byte "SQR"
LA2D7:      .byte "∂"
            .byte $00
            .byte "SPCâ"
            .byte $00
            .byte "STR$√"
            .byte $00
            .byte "STRING$(ƒ"
            .byte $00
            .byte "SOUND‘STOP˙TAN∑"
            .byte $00
            .byte "THENåTO∏"
            .byte $00
            .byte "TAB(ä"
            .byte $00
            .byte "TRACE¸TIMEëCTRUEπU"
            .byte "NTIL˝USR∫"
            .byte $00
            .byte "VDUÔVALª"
            .byte $00
            .byte "VPOSºWIDTH˛PAG"
LA349:      .byte "E–"
            .byte $00
            .byte "PTRœ"
            .byte $00
            .byte "TIME—"
            .byte $00
            .byte "LOMEM“"
            .byte $00
            .byte "HIMEM”"
            .byte $00,$82,$52,$91,$88,$CD,$D4,$3E
            .byte $AE,$0D,$75,$B4,$E1,$79,$67,$C8
            .byte $99,$70,$77,$C0,$6B,$51,$9B,$87
            .byte $AB,$84,$B6,$4F,$A2,$D8,$7F,$A5
            .byte $88,$85,$A2,$18,$44,$88,$1A,$5F
            .byte $72,$8E,$98,$AD,$98,$A9,$06,$4D
            .byte $AF,$B1,$18,$BE,$2B,$E0,$86,$B4
            .byte $8F,$B5,$3A,$31,$7D,$D2,$AE,$AC
            .byte $0B,$F4,$3D,$8C,$D2,$78,$66,$5B
            .byte $62,$DB,$37,$96,$9E,$C6,$CD,$75
            .byte $75,$38,$B2,$C0,$54,$6C,$A5,$69
            .byte $AD,$78,$9C,$25,$DC,$21,$98,$AE
            .byte $76,$F6,$F9,$BB,$92,$02,$00,$75
            .byte $C5,$E7,$C7,$97,$1A,$C8,$8C,$9E
            .byte $92,$81,$CC,$DF,$DF,$CE,$CE,$CE
            .byte $CE,$CD,$C8,$CB,$CC,$C8,$C8,$DF
            .byte $C9,$CE,$CB,$CF,$CF,$CB,$CA,$DF
            .byte $CE,$D1,$CF,$CC,$CC,$CC,$CE,$C7
            .byte $CB,$CC,$DF,$DF,$CB,$CB,$CB,$CB
            .byte $CF,$CB,$C9,$C7,$C6,$CE,$CC,$CB
            .byte $CC,$CB,$D3,$CF,$D0,$CF,$D0,$CF
            .byte $D0,$D0,$CC,$B0,$AF,$DF,$D5,$AA
            .byte $AA,$AF,$DF,$B7,$DF,$B2,$B2,$B2
            .byte $B2,$D4,$DF,$AE,$DF,$B2,$DF,$AE
            .byte $AE,$AB,$AB,$B1,$B3,$AA,$B3,$D4
            .byte $D7,$D8,$D8,$B3,$B8,$DA,$AB,$B3
            .byte $B3,$B3,$D6,$D8,$B3,$B3,$AD,$B3
            .byte $DB,$AB,$DB,$DF,$DA,$D8,$DD,$AA
            .byte $B3,$B2,$DB,$D4
LA448:      .byte $DE,$4B,$83,$84,$89,$96,$B8,$B9
            .byte $D8,$D9,$F0,$01,$10,$81,$90,$89
            .byte $93,$A3,$A4,$A9,$38,$39,$78,$01
            .byte $13,$21,$63,$73,$B1,$A9,$C5,$0C
            .byte $C3,$D3,$C4,$F2,$41,$83,$B0,$81
            .byte $43,$6C,$72,$EC,$F2,$A3,$C3,$18
            .byte $19,$34,$B0,$72,$98,$99,$81,$98
            .byte $99,$14
LA482:      .byte $35,$0A,$0D,$0D,$0D,$0D,$10,$10
            .byte $25,$25,$39,$41,$41,$41,$41,$4A
            .byte $4A,$4C,$4C,$4C,$50,$50,$52,$53
            .byte $53,$53,$08,$08,$08,$09,$09,$0A
            .byte $0A,$0A,$05,$15,$3E,$04,$0D,$30
            .byte $4C,$06,$32,$49,$49,$10,$25,$0E
            .byte $0E,$09,$29,$2A,$30,$30,$4E,$4E
            .byte $4E,$3E
LA4BC:      .byte $16,$00,$18,$D8,$58,$B8,$CA,$88
            .byte $E8,$C8,$EA,$48,$08,$68,$28,$40
            .byte $60,$38,$F8,$78,$AA,$A8,$BA,$8A
            .byte $9A,$98,$90,$B0,$F0,$30,$D0,$10
            .byte $50,$70,$21,$41,$01,$61,$C1,$A1
            .byte $E1,$06,$46,$26
            ror L00C6
            inc L00E0
            cpy #$20
            jmp LA220
            ldy #$81
            stx L0084
LA4F5:      lda #$FF
            sta L0028
            jmp LAB9B
LA4FC:      lda #$03
            sta L0028
LA500:      jsr LAA8F
            cmp #$5D
            beq LA4F5
            jsr LB83D
            dec L000A
            jsr LA5B2
            dec L000A
            lda L0028
            lsr A
            bcc LA576
            lda L001E
            adc #$04
            sta L003F
            lda L0038
            jsr LD526
            lda L0037
            jsr LD543
            ldx #$FC
            ldy L0039
            bpl LA52E
            ldy L0036
LA52E:      sty L0038
            beq LA54E
            ldy #$00
LA534:      inx
            bne LA544
            jsr LDC2E
            ldx L003F
LA53C:      jsr LD546
            dex
            bne LA53C
            ldx #$FD
LA544:      lda (L003A),Y
            jsr LD543
            iny
            dec L0038
            bne LA534
LA54E:      inx
            bpl LA55D
            jsr LD546
            jsr LD539
            jsr LD539
            jmp LA54E
LA55D:      ldy #$00
LA55F:      lda (L000B),Y
            cmp #$3A
            beq LA56F
            cmp #$0D
            beq LA573
LA569:      jsr LD4EF
            iny
            bne LA55F
LA56F:      cpy L000A
            bcc LA569
LA573:      jsr LDC2E
LA576:      ldy L000A
            dey
LA579:      iny
            lda (L000B),Y
            cmp #$3A
            beq LA584
            cmp #$0D
            bne LA579
LA584:      jsr LB829
            dey
            lda (L000B),Y
            cmp #$3A
            beq LA59A
            lda L000C
            cmp #$2B
            bne LA597
            jmp LAAEE
LA597:      jsr LB86A
LA59A:      jmp LA500
LA59D:      jsr LB54C
            beq LA5FC
            bcs LA5FC
            jsr LDD9D
            jsr LCE0E
            sta L0027
            jsr LD495
            jsr LA81F
LA5B2:      ldx #$03
            jsr LAA8F
            ldy #$00
            sty L003D
            cmp #$3A
            beq LA623
            cmp #$0D
            beq LA623
            cmp #$5C
            beq LA623
            cmp #$2E
            beq LA59D
            dec L000A
LA5CD:      ldy L000A
            inc L000A
            lda (L000B),Y
            bmi LA5FF
            cmp #$20
            beq LA5E9
            ldy #$05
            asl A
            asl A
            asl A
LA5DE:      asl A
            rol L003D
            rol L003E
            dey
            bne LA5DE
            dex
            bne LA5CD
LA5E9:      ldx #$3A
            lda L003D
LA5ED:      cmp LA448,X
            bne LA5F9
            ldy LA482,X
            cpy L003E
            beq LA618
LA5F9:      dex
            bne LA5ED
LA5FC:      jmp LB7F4
LA5FF:      ldx #$22
            cmp #$80
            beq LA618
            inx
            cmp #$82
            beq LA618
            inx
            cmp #$84
            bne LA5FC
            inc L000A
            iny
            lda (L000B),Y
            cmp #$41
            bne LA5FC
LA618:      lda LA4BC,X
            sta L0029
            ldy #$01
            cpx #$1A
            bcs LA66B
LA623:      lda L2840
            sta L0037
            sty L0039
            ldx L0028
            cpx #$04
            ldx L2841
            stx L0038
            bcc LA63B
            lda L283C
            ldx L283D
LA63B:      sta L003A
            stx L003B
            tya
            beq LA66A
            bpl LA648
            ldy L0036
            beq LA66A
LA648:      dey
            lda L0029,Y
            bit L0039
            bpl LA653
            lda L2A00,Y
LA653:      sta (L003A),Y
            inc L2840
            bne LA65D
            inc L2841
LA65D:      bcc LA667
            inc L283C
            bne LA667
            inc L283D
LA667:      tya
            bne LA648
LA66A:      rts
LA66B:      cpx #$22
            bcs LA6AF
            jsr LA819
            clc
            lda L002A
            sbc L2840
            tay
            lda L002B
            sbc L2841
            cpy #$01
            dey
            sbc #$00
            beq LA6AA
            cmp #$FF
            beq LA6A5
LA689:      lda L0028
            lsr A
            beq LA69D
            .byte $00,$01
            .byte "Out of range"
            .byte $00
LA69D:      tay
LA69E:      sty L002A
LA6A0:      ldy #$02
            jmp LA623
LA6A5:      tya
            bmi LA69E
            bpl LA689
LA6AA:      tya
            bpl LA69E
            bmi LA689
LA6AF:      cpx #$29
            bcs LA6CB
            jsr LAA8F
            cmp #$23
            bne LA6D2
            jsr LA827
LA6BD:      jsr LA819
LA6C0:      lda L002B
            beq LA6A0
LA6C4:      .byte $00,$02
            .byte "Byte"
            .byte $00
LA6CB:      cpx #$36
            bne LA737
            jsr LAA8F
LA6D2:      cmp #$28
            bne LA70D
            jsr LA819
            jsr LAA8F
            cmp #$29
            bne LA6F3
            jsr LAA8F
            cmp #$2C
            bne LA705
            jsr LA824
            jsr LAA8F
            cmp #$59
            bne LA705
            beq LA6C0
LA6F3:      cmp #$2C
            bne LA705
            jsr LAA8F
            cmp #$58
            bne LA705
            jsr LAA8F
            cmp #$29
            beq LA6C0
LA705:      .byte $00,$03
            .byte "Index"
            .byte $00
LA70D:      dec L000A
            jsr LA819
            jsr LAA8F
            cmp #$2C
            bne LA72D
            jsr LA824
            jsr LAA8F
            cmp #$58
            beq LA72D
            cmp #$59
            bne LA705
LA727:      jsr LA827
            jmp LA792
LA72D:      jsr LA82A
LA730:      lda L002B
            bne LA727
            jmp LA6A0
LA737:      cpx #$2F
            bcs LA766
            cpx #$2D
            bcs LA748
            jsr LAA8F
            cmp #$41
            beq LA75F
            dec L000A
LA748:      jsr LA819
            jsr LAA8F
            cmp #$2C
            bne LA730
            jsr LA824
            jsr LAA8F
            cmp #$58
            beq LA730
            jmp LA705
LA75F:      jsr LA82A
            ldy #$01
            bne LA794
LA766:      cpx #$32
            bcs LA780
            cpx #$31
            beq LA77A
            jsr LAA8F
            cmp #$23
            bne LA778
            jmp LA6BD
LA778:      dec L000A
LA77A:      jsr LA819
            jmp LA72D
LA780:      cpx #$33
            beq LA78F
            bcs LA7AA
            jsr LAA8F
            cmp #$28
            beq LA797
            dec L000A
LA78F:      jsr LA819
LA792:      ldy #$03
LA794:      jmp LA623
LA797:      jsr LA824
            jsr LA824
            jsr LA819
            jsr LAA8F
            cmp #$29
            beq LA792
            jmp LA705
LA7AA:      cpx #$39
            bcs LA80B
            lda L003D
            eor #$01
            and #$1F
            pha
            cpx #$37
            bcs LA7E8
            jsr LAA8F
            cmp #$23
            bne LA7C4
            pla
            jmp LA6BD
LA7C4:      dec L000A
            jsr LA819
            pla
            sta L0037
            jsr LAA8F
            cmp #$2C
            beq LA7D6
            jmp LA72D
LA7D6:      jsr LAA8F
            and #$1F
            cmp L0037
            bne LA7E5
            jsr LA824
            jmp LA72D
LA7E5:      jmp LA705
LA7E8:      jsr LA819
            pla
            sta L0037
            jsr LAA8F
            cmp #$2C
            bne LA808
            jsr LAA8F
            and #$1F
            cmp L0037
            bne LA7E5
            jsr LA824
            lda L002B
            beq LA808
            jmp LA6C4
LA808:      jmp LA730
LA80B:      bne LA832
            jsr LA819
            lda L002A
            sta L0028
            ldy #$00
            jmp LA623
LA819:      jsr LBAF7
            jsr LB2EE
LA81F:      ldy L001B
            sty L000A
            rts
LA824:      jsr LA827
LA827:      jsr LA82A
LA82A:      lda L0029
            clc
            adc #$04
            sta L0029
            rts
LA832:      ldx #$01
            ldy L000A
            inc L000A
            lda (L000B),Y
            cmp #$42
            beq LA850
            inx
            cmp #$57
            beq LA850
            ldx #$04
            cmp #$44
            beq LA850
            cmp #$53
            beq LA862
            jmp LB7F4
LA850:      txa
            pha
            jsr LA819
            ldx #$29
            jsr LDE4D
            pla
            tay
LA85C:      jmp LA623
LA85F:      jmp LAC06
LA862:      lda L0028
            pha
            jsr LBAF7
            bne LA85F
            pla
            sta L0028
            jsr LA81F
            ldy #$FF
            bne LA85C
LA874:      pha
            clc
            tya
            adc L0037
            sta L0039
            ldy #$00
            tya
            adc L0038
            sta L003A
            pla
            sta (L0037),Y
LA885:      iny
            lda (L0039),Y
            sta (L0037),Y
            cmp #$0D
            bne LA885
            rts
LA88F:      and #$0F
            sta L003D
            sty L003E
LA895:      iny
            lda (L0037),Y
            cmp #$3A
            bcs LA8D2
            cmp #$30
            bcc LA8D2
            and #$0F
            pha
            ldx L003E
            lda L003D
            asl A
            rol L003E
            bmi LA8CD
            asl A
            rol L003E
            bmi LA8CD
            adc L003D
            sta L003D
            txa
            adc L003E
            asl L003D
            rol A
            bmi LA8CD
            bcs LA8CD
            sta L003E
            pla
            adc L003D
            sta L003D
            bcc LA895
            inc L003E
            bpl LA895
            pha
LA8CD:      pla
            ldy #$00
            sec
            rts
LA8D2:      dey
            lda #$8D
            jsr LA874
            lda L0037
            adc #$02
            sta L0039
            lda L0038
            adc #$00
            sta L003A
LA8E4:      lda (L0037),Y
            sta (L0039),Y
            dey
            bne LA8E4
            ldy #$03
LA8ED:      lda L003E
            ora #$40
            sta (L0037),Y
            dey
            lda L003D
            and #$3F
            ora #$40
            sta (L0037),Y
            dey
            lda L003D
            and #$C0
            sta L003D
            lda L003E
            and #$C0
            lsr A
            lsr A
            ora L003D
            lsr A
            lsr A
            eor #$54
            sta (L0037),Y
            jsr LA93C
            jsr LA93C
            jsr LA93C
            ldy #$00
LA91C:      clc
            rts
LA91E:      cmp #$7B
            bcs LA91C
            cmp #$5F
            bcs LA934
            cmp #$5B
            bcs LA91C
            cmp #$41
            bcs LA934
LA92E:      cmp #$3A
            bcs LA91C
            cmp #$30
LA934:      rts
LA935:      cmp #$2E
            bne LA92E
            rts
LA93A:      lda (L0037),Y
LA93C:      inc L0037
            bne LA942
            inc L0038
LA942:      rts
LA943:      jsr LA93C
            lda (L0037),Y
            rts
LA949:      ldy #$00
            sty L003B
LA94D:      sty L003C
LA94F:      lda (L0037),Y
            cmp #$0D
            beq LA942
            cmp #$20
            bne LA95E
LA959:      jsr LA93C
            bne LA94F
LA95E:      cmp #$26
            bne LA974
LA962:      jsr LA943
            jsr LA92E
            bcs LA962
            cmp #$41
            bcc LA94F
            cmp #$47
            bcc LA962
            bcs LA94F
LA974:      cmp #$22
            bne LA984
LA978:      jsr LA943
            cmp #$22
            beq LA959
            cmp #$0D
            bne LA978
            rts
LA984:      cmp #$3A
            bne LA98E
            sty L003B
            sty L003C
            beq LA959
LA98E:      cmp #$2C
            beq LA959
            cmp #$2A
            bne LA99B
            lda L003B
            bne LA9DB
            rts
LA99B:      cmp #$2E
            beq LA9AD
            jsr LA92E
            bcc LA9D7
            ldx L003C
            beq LA9AD
            jsr LA88F
            bcc LA9E1
LA9AD:      lda (L0037),Y
            jsr LA935
            bcc LA9BA
            jsr LA93C
            jmp LA9AD
LA9BA:      ldx #$FF
            stx L003B
            sty L003C
            jmp LA94F
LA9C3:      jsr LA91E
            bcc LA9DB
LA9C8:      ldy #$00
LA9CA:      lda (L0037),Y
            jsr LA91E
            bcc LA9BA
            jsr LA93C
            jmp LA9CA
LA9D7:      cmp #$41
            bcs LA9E4
LA9DB:      ldx #$FF
            stx L003B
            sty L003C
LA9E1:      jmp LA959
LA9E4:      cmp #$58
            bcs LA9C3
            ldx #$69
            stx L0039
            ldx #$A0
            stx L003A
LA9F0:      cmp (L0039),Y
            bcc LA9CA
            bne LAA05
LA9F6:      iny
            lda (L0039),Y
            bmi LAA2F
            cmp (L0037),Y
            beq LA9F6
            lda (L0037),Y
            cmp #$2E
            beq LAA10
LAA05:      iny
            lda (L0039),Y
            bpl LAA05
            cmp #$FE
            bne LAA1D
            bcs LA9C8
LAA10:      iny
LAA11:      lda (L0039),Y
            bmi LAA2F
            inc L0039
            bne LAA11
            inc L003A
            bne LAA11
LAA1D:      sec
            iny
            tya
            adc L0039
            sta L0039
            bcc LAA28
            inc L003A
LAA28:      ldy #$00
            lda (L0037),Y
            jmp LA9F0
LAA2F:      tax
            iny
            lda (L0039),Y
            sta L003D
            dey
            lsr A
            bcc LAA40
            lda (L0037),Y
            jsr LA91E
            bcs LA9C8
LAA40:      txa
            bit L003D
            bvc LAA4C
            ldx L003B
            bne LAA4C
            clc
            adc #$40
LAA4C:      dey
            jsr LA874
            ldy #$00
            ldx #$FF
            lda L003D
            lsr A
            lsr A
            bcc LAA5E
            stx L003B
            sty L003C
LAA5E:      lsr A
            bcc LAA65
            sty L003B
            sty L003C
LAA65:      lsr A
            bcc LAA79
            pha
            iny
LAA6A:      lda (L0037),Y
            jsr LA91E
            bcc LAA77
            jsr LA93C
            jmp LAA6A
LAA77:      dey
            pla
LAA79:      lsr A
            bcc LAA7E
            stx L003C
LAA7E:      lsr A
            bcs LAA8E
            jmp LA959
LAA84:      ldy L001B
            inc L001B
            lda (L0019),Y
            cmp #$20
            beq LAA84
LAA8E:      rts
LAA8F:      ldy L000A
            inc L000A
            lda (L000B),Y
            cmp #$20
            beq LAA8F
            rts
LAA9A:      .byte $00,$05
            .byte "Missing ,"
            .byte $00
LAAA6:      jsr LAA84
            cmp #$2C
            bne LAA9A
            rts
            jsr LB827
            lda L0018
            sta L0038
            lda #$00
            sta L0037
            sta (L0037),Y
            jsr LDE79
            bne LAAEB
            jsr LB827
            jsr LDE79
            bne LAAEE
            jsr LB827
            .byte $00,$00
            .byte "STOP"
            .byte $00
            jsr LB827
LAAD5:      lda #$0D
            ldy L0018
            sty L0013
            ldy #$00
            sty L0012
            sty L0020
            sta (L0012),Y
            lda #$FF
            iny
            sta (L0012),Y
            iny
            sty L0012
LAAEB:      jsr LDD29
LAAEE:      ldy #$2B
            sty L000C
            ldy #$00
            sty L000B
            lda #$42
            sta L0016
            lda #$D4
            sta L0017
            lda #$3E
            jsr LDBE3
LAB03:      lda #$42
            sta L0016
            lda #$D4
            sta L0017
            ldx #$FF
            stx L0028
            stx L003C
            txs
            jsr LDD43
            tay
            lda L000B
            sta L0037
            lda L000C
            sta L0038
            sty L003B
            sty L000A
            jsr LA94F
            jsr LB7A9
            bcc LAB30
            jsr LDC96
            jmp LAAEB
LAB30:      jsr LAA8F
            cmp #$C6
            bcs LABA9
            bcc LABB7
LAB39:      jmp LAAEE
LAB3C:      jmp LA4FC
LAB3F:      tsx
            cpx #$FC
            bcs LAB51
            lda L01FF
            cmp #$A4
            bne LAB51
            jsr LBAF7
            jmp LB81C
LAB51:      .byte $00,$07
            .byte "No "
            ldy $00
LAB58:      ldy L000A
            dey
            lda (L000B),Y
            cmp #$3D
            beq LAB3F
            cmp #$2A
            beq LAB6B
            cmp #$5B
            beq LAB3C
            bne LAB8E
LAB6B:      jsr LB83D
            ldx L000B
            ldy L000C
            jsr LDED5
LAB75:      lda #$0D
            ldy L000A
            dey
LAB7A:      iny
            cmp (L000B),Y
            bne LAB7A
LAB7F:      cmp #$8B
            beq LAB75
            lda L000C
            cmp #$2B
            beq LAB39
            jsr LB86A
            bne LAB9B
LAB8E:      dec L000A
LAB90:      jsr LB827
LAB93:      ldy #$00
            lda (L000B),Y
            cmp #$3A
            bne LAB7F
LAB9B:      ldy L000A
            inc L000A
            lda (L000B),Y
            cmp #$20
            beq LAB9B
            cmp #$CF
            bcc LABB7
LABA9:      tax
            lda LA2D7,X
            sta L0037
            lda LA349,X
            sta L0038
            jmp (L0037)
LABB7:      ldx L000B
            stx L0019
            ldx L000C
            stx L001A
            sty L001B
            jsr LB5A7
            bne LABE1
            bcs LAB58
            stx L001B
            jsr LB811
            jsr LB4C6
            ldx #$05
            cpx L002C
            bne LABD7
            inx
LABD7:      jsr LB4FB
            dec L000A
            jsr LB54C
            beq LAC03
LABE1:      bcc LABF3
            jsr LDD9D
            jsr LB7DD
            lda L0027
            bne LAC06
            jsr LAC16
            jmp LAB93
LABF3:      jsr LDD9D
            jsr LB7DD
            lda L0027
            beq LAC06
            jsr LD495
            jmp LAB93
LAC03:      jmp LB7F4
LAC06:      .byte $00,$06
            .byte "Type mismatch"
            .byte $00
LAC16:      jsr LDDF3
LAC19:      lda L002C
            cmp #$80
            beq LAC9A
            ldy #$02
            lda (L002A),Y
            cmp L0036
            bcs LAC7C
            lda L0002
            sta L002C
            lda L0003
            sta L002D
            lda L0036
            cmp #$08
            bcc LAC3B
            adc #$07
            bcc LAC3B
            lda #$FF
LAC3B:      clc
            pha
            tax
            lda (L002A),Y
            ldy #$00
            adc (L002A),Y
            eor L0002
            bne LAC57
            iny
            adc (L002A),Y
            eor L0003
            bne LAC57
            sta L002D
            txa
            iny
            sec
            sbc (L002A),Y
            tax
LAC57:      txa
            clc
            adc L0002
            tay
            lda L0003
            adc #$00
            cpy L0004
            tax
            sbc L0005
            bcs LACAF
            sty L0002
            stx L0003
            pla
            ldy #$02
            sta (L002A),Y
            dey
            lda L002D
            beq LAC7C
            sta (L002A),Y
            dey
            lda L002C
            sta (L002A),Y
LAC7C:      ldy #$03
            lda L0036
            sta (L002A),Y
            beq LAC99
            dey
            dey
            lda (L002A),Y
            sta L002D
            dey
            lda (L002A),Y
            sta L002C
LAC8F:      lda L2A00,Y
            sta (L002C),Y
            iny
            cpy L0036
            bne LAC8F
LAC99:      rts
LAC9A:      jsr LDEC4
            cpy #$00
            beq LACAC
LACA1:      lda L2A00,Y
            sta (L002A),Y
            dey
            bne LACA1
            lda L2A00
LACAC:      sta (L002A),Y
            rts
LACAF:      .byte $00,$00
            .byte "No room"
            .byte $00
LACB9:      lda L0039
            cmp #$80
            beq LACE6
            bcc LACFB
            ldy #$00
            lda (L0004),Y
            tax
            beq LACDD
            lda (L0037),Y
            sbc #$01
            sta L0039
            iny
            lda (L0037),Y
            sbc #$00
            sta L003A
LACD5:      lda (L0004),Y
            sta (L0039),Y
            iny
            dex
            bne LACD5
LACDD:      lda (L0004,X)
            ldy #$03
LACE1:      sta (L0037),Y
            jmp LDDE5
LACE6:      ldy #$00
            lda (L0004),Y
            tax
            beq LACF7
LACED:      iny
            lda (L0004),Y
            dey
            sta (L0037),Y
            iny
            dex
            bne LACED
LACF7:      lda #$0D
            bne LACE1
LACFB:      ldy #$00
            lda (L0004),Y
            sta (L0037),Y
            iny
            cpy L0039
            bcs LAD1E
            lda (L0004),Y
            sta (L0037),Y
            iny
            lda (L0004),Y
            sta (L0037),Y
            iny
            lda (L0004),Y
            sta (L0037),Y
            iny
            cpy L0039
            bcs LAD1E
            lda (L0004),Y
            sta (L0037),Y
            iny
LAD1E:      tya
            clc
            jmp LDDEA
LAD23:      dec L000A
            jsr LDFAC
LAD28:      tya
            pha
            jsr LAA84
            cmp #$2C
            bne LAD6F
            jsr LBB03
            jsr LC35F
            pla
            tay
            lda L0027
            jsr LFFD1
            tax
            beq LAD5C
            bmi LAD4F
            ldx #$03
LAD45:      lda L002A,X
            jsr LFFD1
            dex
            bpl LAD45
            bmi LAD28
LAD4F:      ldx #$04
LAD51:      lda L286C,X
            jsr LFFD1
            dex
            bpl LAD51
            bmi LAD28
LAD5C:      lda L0036
            jsr LFFD1
            tax
            beq LAD28
LAD64:      lda L29FF,X
            jsr LFFD1
            dex
            bne LAD64
            beq LAD28
LAD6F:      pla
            sty L000A
            jmp LAB90
LAD75:      jsr LDC2E
LAD78:      jmp LAB8E
LAD7B:      lda #$00
            sta L0014
            sta L0015
            jsr LAA8F
            cmp #$3A
            beq LAD78
            cmp #$0D
            beq LAD78
            cmp #$8B
            beq LAD78
            bne LADCA
            jsr LAA8F
            cmp #$23
            beq LAD23
            dec L000A
            jmp LADB3
LAD9E:      lda L2800
            beq LADB3
            lda L001E
LADA5:      beq LADB3
            sbc L2800
            bcs LADA5
            tay
LADAD:      jsr LD546
            iny
            bne LADAD
LADB3:      clc
            lda L2800
            sta L0014
LADB9:      ror L0015
LADBB:      jsr LAA8F
            cmp #$3A
            beq LAD75
            cmp #$0D
            beq LAD75
            cmp #$8B
            beq LAD75
LADCA:      cmp #$7E
            beq LADB9
            cmp #$2C
            beq LAD9E
            cmp #$3B
            beq LAD7B
            jsr LAE79
            bcc LADBB
            lda L0014
            pha
            lda L0015
            pha
            dec L001B
            jsr LBB03
            pla
            sta L0015
            pla
            sta L0014
            lda L001B
            sta L000A
            tya
            beq LAE06
            jsr LBEB9
            lda L0014
            sec
            sbc L0036
            bcc LAE06
            beq LAE06
            tay
LAE00:      jsr LD546
            dey
            bne LAE00
LAE06:      lda L0036
            beq LADBB
            ldy #$00
LAE0C:      lda L2A00,Y
            jsr LD539
            iny
            cpy L0036
            bne LAE0C
            beq LADBB
LAE19:      jmp LAA9A
LAE1C:      cmp #$2C
            bne LAE19
            lda L002A
            pha
            jsr LCE2A
            jsr LB2EE
            lda #$1E
            jsr LFFF4
            ldy L002A
            beq LAE3A
            lda #$0A
LAE34:      jsr LFFF4
            dey
            bne LAE34
LAE3A:      pla
            beq LAE46
            tay
            lda #$09
LAE40:      jsr LFFF4
            dey
            bne LAE40
LAE46:      jmp LAE73
LAE49:      jsr LB2DB
            jsr LAA84
            cmp #$29
            bne LAE1C
            lda L002A
            sbc L001E
            beq LAE73
            tay
            bcs LAE68
            jsr LDC2E
            beq LAE64
LAE61:      jsr LB2E1
LAE64:      ldy L002A
            beq LAE73
LAE68:      jsr LD546
            dey
            bne LAE68
            beq LAE73
LAE70:      jsr LDC2E
LAE73:      clc
            ldy L001B
            sty L000A
            rts
LAE79:      ldx L000B
            stx L0019
            ldx L000C
            stx L001A
            ldx L000A
            stx L001B
            cmp #$27
            beq LAE70
            cmp #$8A
            beq LAE49
            cmp #$89
            beq LAE61
            sec
LAE92:      rts
LAE93:      jsr LAA8F
            jsr LAE79
            bcc LAE92
            cmp #$22
            beq LAEB0
            sec
            rts
LAEA1:      .byte $00,$09
            .byte "Missing "
            .byte $22,$00
LAEAD:      jsr LD539
LAEB0:      iny
            lda (L0019),Y
            cmp #$0D
            beq LAEA1
            cmp #$22
            bne LAEAD
            iny
            sty L001B
            lda (L0019),Y
            cmp #$22
            bne LAE73
            beq LAEAD
            jsr LB827
            lda #$10
            bne LAED5
            jsr LB827
            jsr LDC31
            lda #$0C
LAED5:      jsr LFFF4
            jmp LAB93
            jsr LBAF7
            jsr LB2EC
            jsr LDD9D
            ldy #$00
            sty L2A00
LAEE9:      sty L2AFF
            jsr LAA84
            cmp #$2C
            bne LAF15
            ldy L001B
            jsr LB59F
            beq LAF24
            ldy L2AFF
            iny
            lda L002A
            sta L2A00,Y
            iny
            lda L002B
            sta L2A00,Y
            iny
            lda L002C
            sta L2A00,Y
            inc L2A00
            jmp LAEE9
LAF15:      dec L001B
            jsr LB822
            jsr LDDF3
            jsr LAF27
            cld
            jmp LAB93
LAF24:      jmp LCE17
LAF27:      lda L280C
            lsr A
            lda L2804
            ldx L2860
            ldy L2864
            jmp (L002A)
LAF37:      jmp LB7F4
            jsr LB7A9
            bcc LAF37
            jsr LDD9D
            jsr LAA8F
            cmp #$2C
            bne LAF37
            jsr LB7A9
            bcc LAF37
            jsr LB827
            lda L002A
            sta L0039
            lda L002B
            sta L003A
            jsr LDDF3
LAF5C:      jsr LDC36
            jsr LB84B
            jsr LB22B
            lda L0039
            cmp L002A
            lda L003A
            sbc L002B
            bcs LAF5C
            jmp LAAEB
LAF72:      lda #$0A
            jsr LCEA9
            jsr LB7A9
            jsr LDD9D
            lda #$0A
            jsr LCEA9
            jsr LAA8F
            cmp #$2C
            bne LAF96
            jsr LB7A9
            lda L002B
            bne LAFE8
            lda L002A
            beq LAFE8
            inc L000A
LAF96:      dec L000A
            jmp LB827
LAF9B:      lda L0012
            sta L003B
            lda L0013
            sta L003C
LAFA3:      lda L0018
            sta L0038
            lda #$01
            sta L0037
            rts
            jsr LAF72
            ldx #$39
            jsr LDE16
            jsr LDE79
            jsr LAF9B
LAFBA:      ldy #$00
            lda (L0037),Y
            bmi LAFF0
            sta (L003B),Y
            iny
            lda (L0037),Y
            sta (L003B),Y
            sec
            tya
            adc L003B
            sta L003B
            tax
            lda L003C
            adc #$00
            sta L003C
            cpx L0006
            sbc L0007
            bcs LAFDF
            jsr LB0A8
            bcc LAFBA
LAFDF:      .byte $00,$00,$CC
            .byte " space"
LAFE8:      .byte $00,$00
            .byte "Silly"
            .byte $00
LAFF0:      jsr LAFA3
LAFF3:      ldy #$00
            lda (L0037),Y
            bmi LB016
            lda L003A
            sta (L0037),Y
            lda L0039
            iny
            sta (L0037),Y
            clc
            lda L002A
            adc L0039
            sta L0039
            lda #$00
            adc L003A
            and #$7F
            sta L003A
            jsr LB0A8
            bcc LAFF3
LB016:      lda L0018
            sta L000C
            ldy #$00
            sty L000B
            iny
            lda (L000B),Y
            bmi LB043
LB023:      ldy #$04
LB025:      lda (L000B),Y
            cmp #$8D
            beq LB046
            iny
            cmp #$0D
            bne LB025
            lda (L000B),Y
            bmi LB043
            ldy #$03
            lda (L000B),Y
            clc
            adc L000B
            sta L000B
            bcc LB023
            inc L000C
            bcs LB023
LB043:      jmp LAAEB
LB046:      jsr LB7B5
            jsr LAF9B
LB04C:      ldy #$00
            lda (L0037),Y
            bmi LB089
            lda (L003B),Y
            iny
            cmp L002B
            bne LB07A
            lda (L003B),Y
            cmp L002A
            bne LB07A
            lda (L0037),Y
            sta L003D
            dey
            lda (L0037),Y
            sta L003E
            ldy L000A
            dey
            lda L000B
            sta L0037
            lda L000C
            sta L0038
            jsr LA8ED
LB076:      ldy L000A
            bne LB025
LB07A:      jsr LB0A8
            lda L003B
            adc #$02
            sta L003B
            bcc LB04C
            inc L003C
            bcs LB04C
LB089:      jsr LDFD2
            lsr L0061
            adc #$6C
            adc L0064
            jsr L7461
            jsr LB1C8
            .byte $0B
            sta L002B
            iny
            lda (L000B),Y
            sta L002A
            jsr LB8F9
            jsr LDC2E
            beq LB076
LB0A8:      iny
            lda (L0037),Y
            adc L0037
            sta L0037
            bcc LB0B4
            inc L0038
            clc
LB0B4:      rts
            jsr LAF72
            lda L002A
            pha
            jsr LDDF3
LB0BE:      jsr LDD9D
            jsr LB8FD
            lda #$20
            jsr LDBE3
            jsr LDDF3
            jsr LA949
            jsr LDC96
            jsr LDD29
            pla
            pha
            clc
            adc L002A
            sta L002A
            bcc LB0BE
            inc L002B
            bpl LB0BE
            jmp LAAEB
LB0E5:      jmp LB221
LB0E8:      dec L000A
            jsr LB54C
            beq LB130
            bcs LB130
            jsr LDD9D
            jsr LB2DB
            jsr LB22B
            lda L002D
            ora L002C
            bne LB130
            clc
            lda L002A
            adc L0002
            tay
            lda L002B
            adc L0003
            tax
            cpy L0004
            sbc L0005
            bcs LB0E5
            lda L0002
            sta L002A
            lda L0003
            sta L002B
            sty L0002
            stx L0003
            lda #$00
            sta L002C
            sta L002D
            lda #$40
            sta L0027
            jsr LD495
            jsr LA81F
            jmp LB214
LB130:      .byte $00,$0A
            .byte "Bad "
            .byte $DE,$00
LB138:      jsr LAA8F
            tya
            clc
            adc L000B
            ldx L000C
            bcc LB145
            inx
            clc
LB145:      sbc #$00
            sta L0037
            txa
            sbc #$00
            sta L0038
            ldx #$05
            stx L003F
            ldx L000A
            jsr LB523
            cpy #$01
            beq LB130
            cmp #$28
            beq LB174
            cmp #$24
            beq LB167
            cmp #$25
            bne LB171
LB167:      dec L003F
            iny
            inx
            lda (L0037),Y
            cmp #$28
            beq LB174
LB171:      jmp LB0E8
LB174:      sty L0039
            stx L000A
            jsr LB433
            bne LB130
            jsr LB4C6
            ldx #$01
            jsr LB4FB
            lda L003F
            pha
            lda #$01
            pha
            jsr LCEA9
LB18E:      jsr LDD9D
            jsr LA819
            lda L002B
            and #$C0
            ora L002C
            ora L002D
            bne LB130
            jsr LB22B
            pla
            tay
            lda L002A
            sta (L0002),Y
            iny
            lda L002B
            sta (L0002),Y
            iny
            tya
            pha
            jsr LB23A
            jsr LAA8F
            cmp #$2C
            beq LB18E
            cmp #$29
            beq LB1C0
            jmp LB130
LB1C0:      pla
            sta L0015
            pla
            sta L003F
            lda #$00
LB1C8:      sta L0040
            jsr LB23F
            ldy #$00
            lda L0015
            sta (L0002),Y
            adc L002A
            sta L002A
            bcc LB1DB
            inc L002B
LB1DB:      lda L0003
            sta L0038
            lda L0002
            sta L0037
            clc
            adc L002A
            tay
            lda L002B
            adc L0003
            bcs LB221
            tax
            cpy L0004
            sbc L0005
            bcs LB221
            sty L0002
            stx L0003
            lda L0037
            adc L0015
            tay
            lda #$00
            sta L0037
            bcc LB205
            inc L0038
LB205:      sta (L0037),Y
            iny
            bne LB20C
            inc L0038
LB20C:      cpy L0002
            bne LB205
            cpx L0038
            bne LB205
LB214:      jsr LAA8F
            cmp #$2C
            beq LB21E
            jmp LAB8E
LB21E:      jmp LB138
LB221:      .byte $00,$0B,$DE
            .byte " space"
            .byte $00
LB22B:      inc L002A
            bne LB239
            inc L002B
            bne LB239
            inc L002C
            bne LB239
            inc L002D
LB239:      rts
LB23A:      ldx #$3F
            jsr LDE16
LB23F:      ldx #$00
            ldy #$00
LB243:      lsr L0040
            ror L003F
            bcc LB254
            clc
            tya
            adc L002A
            tay
            txa
            adc L002B
            tax
            bcs LB263
LB254:      asl L002A
            rol L002B
            lda L003F
            ora L0040
            bne LB243
            sty L002A
            stx L002B
            rts
LB263:      jmp LB130
            jsr LB2E9
            lda L002A
            sta L0006
            sta L0004
            lda L002B
            sta L0007
            sta L0005
            jmp LAB93
            jsr LB2E9
            lda L002A
            sta $00
            sta L0002
            lda L002B
            sta L0001
            sta L0003
            jsr LDD38
            beq LB293
            jsr LB2E9
            lda L002B
            sta L0018
LB293:      jmp LAB93
            jsr LB827
            jsr LDD29
            beq LB293
            jsr LB7A9
            bcs LB2AE
            cmp #$EE
            beq LB2C0
            cmp #$87
            beq LB2C9
            jsr LA819
LB2AE:      jsr LB827
            lda L002A
            sta L0021
            lda L002B
LB2B7:      sta L0022
            lda #$FF
LB2BB:      sta L0020
            jmp LAB93
LB2C0:      inc L000A
            jsr LB827
            lda #$FF
            bne LB2B7
LB2C9:      inc L000A
            jsr LB827
            lda #$00
            beq LB2BB
            jsr LB2E9
            jmp LAB93
LB2D8:      jsr LAAA6
LB2DB:      jsr LBB03
            jmp LB2EE
LB2E1:      jsr LCDC0
            beq LB2F5
            bmi LB2F2
LB2E8:      rts
LB2E9:      jsr LB7D1
LB2EC:      lda L0027
LB2EE:      beq LB2F5
            bpl LB2E8
LB2F2:      jmp LC3BE
LB2F5:      jmp LAC06
LB2F8:      jsr LCDC0
LB2FB:      beq LB2F5
            bmi LB2E8
            jmp LC298
            lda L000B
            sta L0019
            lda L000C
            sta L001A
            lda L000A
            sta L001B
            lda #$F2
            jsr LD189
            jsr LB822
            jmp LAB93
LB319:      ldy #$03
            lda #$00
            sta (L002A),Y
            beq LB33F
LB321:      tsx
            cpx #$FC
            bcs LB369
            jsr LB54C
            beq LB351
            jsr LD2FF
            ldy L002C
            bmi LB319
            jsr LDD9D
            lda #$00
            jsr LCEA9
            sta L0027
            jsr LD495
LB33F:      tsx
            inc L0106,X
            ldy L001B
            sty L000A
            jsr LAA8F
            cmp #$2C
            beq LB321
            jmp LAB8E
LB351:      jmp LAB90
            tsx
            cpx #$FC
            bcs LB363
            lda L01FF
            cmp #$F2
            bne LB363
            jmp LB827
LB363:      .byte $00,$0D
            .byte "No "
            .byte $F2
LB369:      .byte $00,$0C
            .byte "Not "
            .byte $EA,$00,$19
            .byte "Bad "
            .byte $EB,$00
            jsr LA819
            lda L002A
            pha
            jsr LB2D8
            jsr LB822
            lda #$12
            jsr LFFF4
            jmp LB3A4
            lda #$11
            pha
            jsr LA819
            jsr LB827
            jmp LB3A4
            lda #$16
            pha
            jsr LA819
            jsr LB827
            jsr LDC31
LB3A4:      pla
            jsr LFFF4
            jsr LB420
            jmp LAB93
            lda #$04
            bne LB3B4
            lda #$05
LB3B4:      pha
            jsr LBAF7
            jmp LB3C7
            jsr LA819
            lda L002A
            pha
            jsr LAAA6
            jsr LBB03
LB3C7:      jsr LB2EC
            jsr LDD9D
            jsr LB2D8
            jsr LB822
            lda #$19
            jsr LFFF4
            pla
            jsr LFFF4
            jsr LDE14
            lda L0037
            jsr LFFF4
            lda L0038
            jsr LFFF4
            jsr LB420
            lda L002B
            jsr LFFF4
            jmp LAB93
LB3F4:      lda L002B
            jsr LFFF4
LB3F9:      jsr LAA8F
LB3FC:      cmp #$3A
            beq LB41D
            cmp #$0D
            beq LB41D
            cmp #$8B
            beq LB41D
            dec L000A
            jsr LA819
            jsr LB420
            jsr LAA8F
            cmp #$2C
            beq LB3F9
            cmp #$3B
            bne LB3FC
            beq LB3F4
LB41D:      jmp LAB8E
LB420:      lda L002A
            jmp (L0208)
LB425:      ldy #$01
            lda (L0037),Y
            ldy #$F6
            cmp #$F2
            beq LB439
            ldy #$F8
            bne LB439
LB433:      ldy #$01
            lda (L0037),Y
            asl A
            tay
LB439:      lda L2800,Y
            sta L003A
            lda L2801,Y
            sta L003B
LB443:      lda L003B
            beq LB47C
            ldy #$00
            lda (L003A),Y
            sta L003C
            iny
            lda (L003A),Y
            sta L003D
            iny
            lda (L003A),Y
            bne LB464
            dey
            cpy L0039
            bne LB47D
            iny
            bcs LB471
LB45F:      iny
            lda (L003A),Y
            beq LB47D
LB464:      cmp (L0037),Y
            bne LB47D
            cpy L0039
            bne LB45F
            iny
            lda (L003A),Y
            bne LB47D
LB471:      tya
            adc L003A
            sta L002A
            lda L003B
            adc #$00
            sta L002B
LB47C:      rts
LB47D:      lda L003D
            beq LB47C
            ldy #$00
            lda (L003C),Y
            sta L003A
            iny
            lda (L003C),Y
            sta L003B
            iny
            lda (L003C),Y
            bne LB49E
            dey
            cpy L0039
            bne LB443
            iny
            bcs LB4AB
LB499:      iny
            lda (L003C),Y
            beq LB443
LB49E:      cmp (L0037),Y
            bne LB443
            cpy L0039
            bne LB499
            iny
            lda (L003C),Y
            bne LB443
LB4AB:      tya
            adc L003C
            sta L002A
            lda L003D
            adc #$00
            sta L002B
            rts
LB4B7:      ldy #$01
            lda (L0037),Y
            tax
            lda #$F6
            cpx #$F2
            beq LB4CB
            lda #$F8
            bne LB4CB
LB4C6:      ldy #$01
            lda (L0037),Y
            asl A
LB4CB:      sta L003A
            lda #$28
            sta L003B
LB4D1:      lda (L003A),Y
            beq LB4E0
            tax
            dey
            lda (L003A),Y
            sta L003A
            stx L003B
            iny
            bpl LB4D1
LB4E0:      lda L0003
            sta (L003A),Y
            lda L0002
            dey
            sta (L003A),Y
            tya
            iny
            sta (L0002),Y
            cpy L0039
            beq LB522
LB4F1:      iny
            lda (L0037),Y
            sta (L0002),Y
            cpy L0039
            bne LB4F1
            rts
LB4FB:      lda #$00
LB4FD:      iny
            sta (L0002),Y
            dex
            bne LB4FD
LB503:      sec
            tya
            adc L0002
            bcc LB50B
            inc L0003
LB50B:      ldy L0003
            cpy L0005
            bcc LB520
            bne LB517
            cmp L0004
            bcc LB520
LB517:      lda #$00
            ldy #$01
            sta (L003A),Y
            jmp LACAF
LB520:      sta L0002
LB522:      rts
LB523:      ldy #$01
LB525:      lda (L0037),Y
            cmp #$30
            bcc LB543
            cmp #$40
            bcs LB53B
            cmp #$3A
            bcs LB543
            cpy #$01
            beq LB543
LB537:      inx
            iny
            bne LB525
LB53B:      cmp #$5F
            bcs LB544
            cmp #$5B
            bcc LB537
LB543:      rts
LB544:      cmp #$7B
            bcc LB537
            rts
LB549:      jsr LB4FB
LB54C:      jsr LB593
            bne LB56E
            bcs LB56E
            jsr LB4C6
            ldx #$05
            cpx L002C
            bne LB549
            inx
            bne LB549
LB55F:      cmp #$21
            beq LB56F
            cmp #$24
            beq LB57A
            eor #$3F
            beq LB571
            lda #$00
            sec
LB56E:      rts
LB56F:      lda #$04
LB571:      pha
            inc L001B
            jsr LB2E1
            jmp LB669
LB57A:      inc L001B
            jsr LB2E1
            lda L002B
            beq LB589
            lda #$80
            sta L002C
            sec
            rts
LB589:      .byte $00
            php
            bit L0020
            .byte $72
            adc (L006E,X)
            .byte $67
            adc $00
LB593:      lda L000B
            sta L0019
            lda L000C
            sta L001A
            ldy L000A
            dey
LB59E:      iny
LB59F:      sty L001B
            lda (L0019),Y
            cmp #$20
            beq LB59E
LB5A7:      cmp #$40
            bcc LB55F
            cmp #$5B
            bcs LB5C9
            asl A
            asl A
            sta L002A
            lda #$28
            sta L002B
            iny
            lda (L0019),Y
            iny
            cmp #$25
            bne LB5C9
            ldx #$04
            stx L002C
            lda (L0019),Y
            cmp #$28
            bne LB62F
LB5C9:      ldx #$05
            stx L002C
            lda L001B
            clc
            adc L0019
            ldx L001A
            bcc LB5D8
            inx
            clc
LB5D8:      sbc #$00
            sta L0037
            bcs LB5DF
            dex
LB5DF:      stx L0038
            ldx L001B
            ldy #$01
LB5E5:      lda (L0037),Y
            cmp #$41
            bcs LB5F7
            cmp #$30
            bcc LB60B
            cmp #$3A
            bcs LB60B
            inx
            iny
            bne LB5E5
LB5F7:      cmp #$5B
            bcs LB5FF
            inx
            iny
            bne LB5E5
LB5FF:      cmp #$5F
            bcc LB60B
            cmp #$7B
            bcs LB60B
            inx
            iny
            bne LB5E5
LB60B:      dey
            beq LB63D
            cmp #$24
            beq LB679
            cmp #$25
            bne LB61E
            dec L002C
            iny
            inx
            iny
            lda (L0037),Y
            dey
LB61E:      sty L0039
            cmp #$28
            beq LB670
            jsr LB433
            beq LB641
            stx L001B
LB62B:      ldy L001B
            lda (L0019),Y
LB62F:      cmp #$21
            beq LB649
            cmp #$3F
            beq LB645
            clc
            sty L001B
            lda #$FF
            rts
LB63D:      lda #$00
            sec
            rts
LB641:      lda #$00
            clc
            rts
LB645:      lda #$00
            beq LB64B
LB649:      lda #$04
LB64B:      pha
            iny
            sty L001B
            jsr LD31E
            jsr LB2EE
            lda L002B
            pha
            lda L002A
            pha
            jsr LB2E1
            clc
            pla
            adc L002A
            sta L002A
            pla
            adc L002B
            sta L002B
LB669:      pla
            sta L002C
            clc
            lda #$FF
            rts
LB670:      inx
            inc L0039
            jsr LB6A9
            jmp LB62B
LB679:      inx
            iny
            sty L0039
            iny
            dec L002C
            lda (L0037),Y
            cmp #$28
            beq LB693
            jsr LB433
            beq LB641
            stx L001B
            lda #$81
            sta L002C
            sec
            rts
LB693:      inx
            sty L0039
            dec L002C
            jsr LB6A9
            lda #$81
            sta L002C
            sec
            rts
LB6A1:      .byte $00,$0E
            .byte "Array"
            .byte $00
LB6A9:      jsr LB433
            beq LB6A1
            stx L001B
            lda L002C
            pha
            lda L002A
            pha
            lda L002B
            pha
            ldy #$00
            lda (L002A),Y
            cmp #$04
            bcc LB736
            tya
            jsr LCEA9
            lda #$01
            sta L002D
LB6C9:      jsr LDD9D
            jsr LB2DB
            inc L001B
            cpx #$2C
            bne LB6A1
            ldx #$39
            jsr LDE16
            ldy L003C
            pla
            sta L0038
            pla
            sta L0037
            pha
            lda L0038
            pha
            jsr LB784
            sty L002D
            lda (L0037),Y
            sta L003F
            iny
            lda (L0037),Y
            sta L0040
            lda L002A
            adc L0039
            sta L002A
            lda L002B
            adc L003A
            sta L002B
            jsr LB23F
            ldy #$00
            sec
            lda (L0037),Y
            sbc L002D
            cmp #$03
            bcs LB6C9
            jsr LDD9D
            jsr LCE2A
            jsr LB2EE
            pla
            sta L0038
            pla
            sta L0037
            ldx #$39
            jsr LDE16
            ldy L003C
            jsr LB784
            clc
            lda L0039
            adc L002A
            sta L002A
            lda L003A
            adc L002B
            sta L002B
            bcc LB747
LB736:      jsr LCE2A
            jsr LB2EE
            pla
            sta L0038
            pla
            sta L0037
            ldy #$01
            jsr LB784
LB747:      pla
            sta L002C
            cmp #$05
            bne LB765
            ldx L002B
            lda L002A
            asl L002A
            rol L002B
            asl L002A
            rol L002B
            adc L002A
            sta L002A
            txa
            adc L002B
            sta L002B
            bcc LB76D
LB765:      asl L002A
            rol L002B
            asl L002A
            rol L002B
LB76D:      tya
            adc L002A
            sta L002A
            bcc LB777
            inc L002B
            clc
LB777:      lda L0037
            adc L002A
            sta L002A
            lda L0038
            adc L002B
            sta L002B
            rts
LB784:      lda L002B
            and #$C0
            ora L002C
            ora L002D
            bne LB79B
            lda L002A
            cmp (L0037),Y
            iny
            lda L002B
            sbc (L0037),Y
            bcs LB79B
            iny
            rts
LB79B:      .byte $00,$0F
            .byte "Subscript"
            .byte $00
LB7A7:      inc L000A
LB7A9:      ldy L000A
            lda (L000B),Y
            cmp #$20
            beq LB7A7
            cmp #$8D
            bne LB7CF
LB7B5:      iny
            lda (L000B),Y
            asl A
            asl A
            tax
            and #$C0
            iny
            eor (L000B),Y
            sta L002A
            txa
            asl A
            asl A
            iny
            eor (L000B),Y
            sta L002B
            iny
            sty L000A
            sec
            rts
LB7CF:      clc
            rts
LB7D1:      lda L000B
            sta L0019
            lda L000C
            sta L001A
            lda L000A
            sta L001B
LB7DD:      ldy L001B
            inc L001B
            lda (L0019),Y
            cmp #$20
            beq LB7DD
            cmp #$3D
            beq LB819
LB7EB:      .byte $00,$04
            .byte "Mistake"
LB7F4:      .byte $00,$10
            .byte "Syntax error"
            .byte $00
LB803:      .byte $CD,$21,$0E,$F0,$FB,$00,$11
            .byte "Escape"
            .byte $00
LB811:      jsr LAA84
            cmp #$3D
            bne LB7EB
            rts
LB819:      jsr LBB03
LB81C:      txa
            ldy L001B
            jmp LB831
LB822:      ldy L001B
            jmp LB829
LB827:      ldy L000A
LB829:      dey
LB82A:      iny
            lda (L000B),Y
            cmp #$20
            beq LB82A
LB831:      cmp #$3A
            beq LB83D
            cmp #$0D
            beq LB83D
            cmp #$8B
            bne LB7F4
LB83D:      clc
            tya
            adc L000B
            sta L000B
            bcc LB847
            inc L000C
LB847:      ldy #$01
            sty L000A
LB84B:      bit L0E21
            bmi LB859
            pha
            lda L0E21
            cmp #$1B
            beq LB803
            pla
LB859:      rts
LB85A:      jsr LB827
            dey
            lda (L000B),Y
            cmp #$3A
            beq LB859
            lda L000C
            cmp #$2B
            beq LB896
LB86A:      iny
            lda (L000B),Y
            bmi LB896
            lda L0020
            beq LB886
            tya
            pha
            iny
            lda (L000B),Y
            pha
            dey
            lda (L000B),Y
            tay
            pla
            jsr LCEBB
            jsr LB8DF
            pla
            tay
LB886:      iny
            sec
            tya
            adc L000B
            sta L000B
            bcc LB891
            inc L000C
LB891:      ldy #$01
            sty L000A
LB895:      rts
LB896:      jmp LAAEE
LB899:      jmp LAC06
            jsr LBAF7
            beq LB899
            bpl LB8A6
            jsr LC3BE
LB8A6:      ldy L001B
            sty L000A
            lda L002A
            ora L002B
            ora L002C
            ora L002D
            beq LB8CB
            cpx #$8C
            beq LB8BB
LB8B8:      jmp LAB9B
LB8BB:      inc L000A
LB8BD:      jsr LB7A9
            bcc LB8B8
            jsr LD990
            jsr LB847
            jmp LD8B3
LB8CB:      ldy L000A
LB8CD:      lda (L000B),Y
            cmp #$0D
            beq LB8DC
            iny
            cmp #$8B
            bne LB8CD
            sty L000A
            beq LB8BD
LB8DC:      jmp LAB7F
LB8DF:      lda L002A
            cmp L0021
            lda L002B
            sbc L0022
            bcs LB895
            lda #$5B
            jsr LD539
            jsr LB8F9
            lda #$5D
            jsr LD539
            jmp LD546
LB8F9:      lda #$00
            beq LB8FF
LB8FD:      lda #$05
LB8FF:      sta L0014
            ldx #$04
LB903:      lda #$00
            sta L003F,X
            sec
LB908:      lda L002A
            sbc LB945,X
            tay
            lda L002B
            sbc LB993,X
            bcc LB91D
            sta L002B
            sty L002A
            inc L003F,X
            bne LB908
LB91D:      dex
            bpl LB903
            ldx #$05
LB922:      dex
            beq LB929
            lda L003F,X
            beq LB922
LB929:      stx L0037
            lda L0014
            beq LB93A
            sbc L0037
            beq LB93A
            tay
LB934:      jsr LD546
            dey
            bne LB934
LB93A:      lda L003F,X
            ora #$30
            jsr LD539
            dex
            bpl LB93A
            rts
LB945:      .byte $01,$0A,$64,$E8,$10
LB94A:      ldy #$00
            sty L003D
            lda L0018
            sta L003E
LB952:      ldy #$01
            lda (L003D),Y
            cmp L002B
            bcs LB968
LB95A:      ldy #$03
            lda (L003D),Y
            adc L003D
            sta L003D
            bcc LB952
            inc L003E
            bcs LB952
LB968:      bne LB97E
            ldy #$02
            lda (L003D),Y
            cmp L002A
            bcc LB95A
            bne LB97E
            tya
            adc L003D
            sta L003D
            bcc LB97E
            inc L003E
            clc
LB97E:      ldy #$02
            rts
LB981:      .byte $00,$12
            .byte "Division by zero"
LB993:      .byte $00,$00,$00,$03,$27
LB998:      tay
            jsr LB2EE
            lda L002D
            pha
            jsr LCD45
            jsr LBDF7
            stx L0027
            tay
            jsr LB2EE
            pla
            sta L0038
            eor L002D
            sta L0037
            jsr LCD45
            ldx #$39
            jsr LDE16
            sty L003D
            sty L003E
            sty L003F
            sty L0040
            lda L002D
            ora L002A
            ora L002B
            ora L002C
            beq LB981
            ldy #$20
LB9CE:      dey
            beq LBA12
            asl L0039
            rol L003A
            rol L003B
            rol L003C
            bpl LB9CE
LB9DB:      rol L0039
            rol L003A
            rol L003B
            rol L003C
            rol L003D
            rol L003E
            rol L003F
            rol L0040
            sec
            lda L003D
            sbc L002A
            pha
            lda L003E
            sbc L002B
            pha
            lda L003F
            sbc L002C
            tax
            lda L0040
            sbc L002D
            bcc LBA0D
            sta L0040
            stx L003F
            pla
            sta L003E
            pla
            sta L003D
            bcs LBA0F
LBA0D:      pla
            pla
LBA0F:      dey
            bne LB9DB
LBA12:      rts
LBA13:      stx L0027
            jsr LDDF3
            jsr LDD5A
            jsr LC298
            jsr LC1F8
            jsr LDD87
            jsr LC38F
            jmp LBA3C
LBA2A:      jsr LDD5A
            jsr LBC1C
            stx L0027
            tay
            jsr LB2FB
            jsr LDD87
LBA39:      jsr LC328
LBA3C:      ldx L0027
            ldy #$00
            lda L003B
            and #$80
            sta L003B
            lda L002E
            and #$80
            cmp L003B
            bne LBA6C
            lda L003D
            cmp L0030
            bne LBA6D
            lda L003E
            cmp L0031
            bne LBA6D
            lda L003F
            cmp L0032
            bne LBA6D
            lda L0040
            cmp L0033
            bne LBA6D
            lda L0041
            cmp L0034
            bne LBA6D
LBA6C:      rts
LBA6D:      ror A
            eor L003B
            rol A
            lda #$01
            rts
LBA74:      jmp LAC06
LBA77:      txa
LBA78:      beq LBAC1
            bmi LBA2A
            jsr LDD9D
            jsr LBC1C
            tay
            beq LBA74
            bmi LBA13
            lda L002D
            eor #$80
            sta L002D
            sec
            ldy #$00
            lda (L0004),Y
            sbc L002A
            sta L002A
            iny
            lda (L0004),Y
            sbc L002B
            sta L002B
            iny
            lda (L0004),Y
            sbc L002C
            sta L002C
            iny
            lda (L0004),Y
            ldy #$00
            eor #$80
            sbc L002D
            ora L002A
            ora L002B
            ora L002C
            php
            clc
            lda #$04
            adc L0004
            sta L0004
            bcc LBABF
            inc L0005
LBABF:      plp
            rts
LBAC1:      jsr LDDBB
            jsr LBC1C
            tay
            bne LBA74
            stx L0037
            ldx L0036
            ldy #$00
            lda (L0004),Y
            sta L0039
            cmp L0036
            bcs LBAD9
            tax
LBAD9:      stx L003A
            ldy #$00
LBADD:      cpy L003A
            beq LBAEB
            iny
            lda (L0004),Y
            cmp L29FF,Y
            beq LBADD
            bne LBAEF
LBAEB:      lda L0039
            cmp L0036
LBAEF:      php
            jsr LDDE5
            ldx L0037
            plp
            rts
LBAF7:      lda L000B
            sta L0019
            lda L000C
            sta L001A
            lda L000A
            sta L001B
LBB03:      jsr LBB4C
LBB06:      cpx #$84
            beq LBB14
            cpx #$82
            beq LBB2F
            dec L001B
            tay
            sta L0027
            rts
LBB14:      jsr LBB45
            tay
            jsr LB2EE
            ldy #$03
LBB1D:      lda (L0004),Y
            ora L002A,Y
            sta L002A,Y
            dey
            bpl LBB1D
LBB28:      jsr LDE08
            lda #$40
            bne LBB06
LBB2F:      jsr LBB45
            tay
            jsr LB2EE
            ldy #$03
LBB38:      lda (L0004),Y
            eor L002A,Y
            sta L002A,Y
            dey
            bpl LBB38
            bmi LBB28
LBB45:      tay
            jsr LB2EE
            jsr LDD9D
LBB4C:      jsr LBB76
LBB4F:      cpx #$80
            beq LBB54
            rts
LBB54:      tay
            jsr LB2EE
            jsr LDD9D
            jsr LBB76
            tay
            jsr LB2EE
            ldy #$03
LBB64:      lda (L0004),Y
            and L002A,Y
            sta L002A,Y
            dey
            bpl LBB64
            jsr LDE08
            lda #$40
            bne LBB4F
LBB76:      jsr LBC1C
            cpx #$3F
            bcs LBB81
            cpx #$3C
            bcs LBB82
LBB81:      rts
LBB82:      beq LBB9A
            cpx #$3E
            beq LBBC2
            tax
            jsr LBA78
            bne LBB8F
LBB8E:      dey
LBB8F:      sty L002A
            sty L002B
            sty L002C
            sty L002D
            lda #$40
            rts
LBB9A:      tax
            ldy L001B
            lda (L0019),Y
            cmp #$3D
            beq LBBAE
            cmp #$3E
            beq LBBB9
            jsr LBA77
            bcc LBB8E
            bcs LBB8F
LBBAE:      inc L001B
            jsr LBA77
            beq LBB8E
            bcc LBB8E
            bcs LBB8F
LBBB9:      inc L001B
            jsr LBA77
            bne LBB8E
            beq LBB8F
LBBC2:      tax
            ldy L001B
            lda (L0019),Y
            cmp #$3D
            beq LBBD4
            jsr LBA77
            beq LBB8F
            bcs LBB8E
            bcc LBB8F
LBBD4:      inc L001B
            jsr LBA77
            bcs LBB8E
            bcc LBB8F
LBBDD:      .byte $00,$13
            .byte "String too long"
            .byte $00
LBBEF:      jsr LDDBB
            jsr LBDFA
            tay
            bne LBC62
            clc
            stx L0037
            ldy #$00
            lda (L0004),Y
            adc L0036
            bcs LBBDD
            tax
            pha
            ldy L0036
LBC07:      lda L29FF,Y
            sta L29FF,X
            dex
            dey
            bne LBC07
            jsr LDDD4
            pla
            sta L0036
            ldx L0037
            tya
            beq LBC1F
LBC1C:      jsr LBDAB
LBC1F:      cpx #$2B
            beq LBC28
            cpx #$2D
            beq LBC8F
            rts
LBC28:      tay
            beq LBBEF
            bmi LBC65
            jsr LBDA8
            tay
            beq LBC62
            bmi LBC81
            ldy #$00
            clc
            lda (L0004),Y
            adc L002A
            sta L002A
            iny
            lda (L0004),Y
            adc L002B
            sta L002B
            iny
            lda (L0004),Y
            adc L002C
            sta L002C
            iny
            lda (L0004),Y
            adc L002D
LBC51:      sta L002D
            clc
            lda L0004
            adc #$04
            sta L0004
            lda #$40
            bcc LBC1F
            inc L0005
            bcs LBC1F
LBC62:      jmp LAC06
LBC65:      jsr LDD5A
            jsr LBDAB
            tay
            beq LBC62
            stx L0027
            bmi LBC75
            jsr LC298
LBC75:      jsr LDD87
            jsr LC4DA
LBC7B:      ldx L0027
            lda #$FF
            bne LBC1F
LBC81:      stx L0027
            jsr LDDF3
            jsr LDD5A
            jsr LC298
            jmp LBC75
LBC8F:      tay
            beq LBC62
            bmi LBCBB
            jsr LBDA8
            tay
            beq LBC62
            bmi LBCD4
            sec
            ldy #$00
            lda (L0004),Y
            sbc L002A
            sta L002A
            iny
            lda (L0004),Y
            sbc L002B
            sta L002B
            iny
            lda (L0004),Y
            sbc L002C
            sta L002C
            iny
            lda (L0004),Y
            sbc L002D
            jmp LBC51
LBCBB:      jsr LDD5A
            jsr LBDAB
            tay
            beq LBC62
            stx L0027
            bmi LBCCB
            jsr LC298
LBCCB:      jsr LDD87
            jsr LC4D7
            jmp LBC7B
LBCD4:      stx L0027
            jsr LDDF3
            jsr LDD5A
            jsr LC298
            jsr LDD87
            jsr LC4AA
            jmp LBC7B
LBCE8:      jsr LC298
LBCEB:      jsr LDDF3
            jsr LDD5A
            jsr LC298
            jmp LBD06
LBCF7:      jsr LC298
LBCFA:      jsr LDD5A
            jsr LBDFA
            stx L0027
            tay
            jsr LB2FB
LBD06:      jsr LDD87
            jsr LC630
            lda #$FF
            ldx L0027
            jmp LBDAE
LBD13:      jmp LAC06
LBD16:      tay
            beq LBD13
            bmi LBCFA
            lda L002D
            cmp L002C
            bne LBCF7
            tay
            beq LBD28
            cmp #$FF
            bne LBCF7
LBD28:      eor L002B
            bmi LBCF7
            jsr LBDF7
            stx L0027
            tay
            beq LBD13
            bmi LBCEB
            lda L002D
            cmp L002C
            bne LBCE8
            tay
            beq LBD43
            cmp #$FF
            bne LBCE8
LBD43:      eor L002B
            bmi LBCE8
            lda L002D
            pha
            jsr LCD45
            ldx #$39
            jsr LDE4D
            jsr LDDF3
            pla
            eor L002D
            sta L0037
            jsr LCD45
            ldy #$00
            ldx #$00
            sty L003F
            sty L0040
LBD65:      lsr L003A
            ror L0039
            bcc LBD80
            clc
            tya
            adc L002A
            tay
            txa
            adc L002B
            tax
            lda L003F
            adc L002C
            sta L003F
            lda L0040
            adc L002D
            sta L0040
LBD80:      asl L002A
            rol L002B
            rol L002C
            rol L002D
            lda L0039
            ora L003A
            bne LBD65
            sty L003D
            stx L003E
            lda L0037
            php
LBD95:      ldx #$3D
LBD97:      jsr LCF27
            plp
            bpl LBDA0
            jsr LCD67
LBDA0:      ldx L0027
            jmp LBDAE
LBDA5:      jmp LBD16
LBDA8:      jsr LDD9D
LBDAB:      jsr LBDFA
LBDAE:      cpx #$2A
            beq LBDA5
            cpx #$2F
            beq LBDBF
            cpx #$83
            beq LBDDB
            cpx #$81
            beq LBDE4
            rts
LBDBF:      tay
            jsr LB2FB
            jsr LDD5A
            jsr LBDFA
            stx L0027
            tay
            jsr LB2FB
            jsr LDD87
            jsr LC687
            ldx L0027
            lda #$FF
            bne LBDAE
LBDDB:      jsr LB998
            lda L0038
            php
            jmp LBD95
LBDE4:      jsr LB998
            rol L0039
            rol L003A
            rol L003B
            rol L003C
            bit L0037
            php
            ldx #$39
            jmp LBD97
LBDF7:      jsr LDD9D
LBDFA:      jsr LCDC0
LBDFD:      pha
LBDFE:      ldy L001B
            inc L001B
            lda (L0019),Y
            cmp #$20
            beq LBDFE
            tax
            pla
            cpx #$5E
            beq LBE0F
            rts
LBE0F:      tay
            jsr LB2FB
            jsr LDD5A
            jsr LB2F8
            lda L0030
            cmp #$87
            bcs LBE62
            jsr LC460
            bne LBE33
            jsr LDD87
            jsr LC38F
            lda L004A
            jsr LCAEC
            lda #$FF
            bne LBDFD
LBE33:      jsr LC35B
            lda L0004
            sta L004B
            lda L0005
            sta L004C
            jsr LC38F
            lda L004A
            jsr LCAEC
LBE46:      jsr LC357
            jsr LDD87
            jsr LC38F
            jsr LC7DB
            jsr LCAAB
            jsr LCA6E
            jsr LC7C7
            jsr LC630
            lda #$FF
            bne LBDFD
LBE62:      jsr LC35B
            jsr LC673
            bne LBE46
LBE6A:      tya
            bpl LBE70
            jsr LC3BE
LBE70:      ldx #$00
            ldy #$00
LBE74:      lda L002A,Y
            pha
            and #$0F
            sta L003F,X
            pla
            lsr A
            lsr A
            lsr A
            lsr A
            inx
            sta L003F,X
            inx
            iny
            cpy #$04
            bne LBE74
LBE8A:      dex
            beq LBE91
            lda L003F,X
            beq LBE8A
LBE91:      lda L003F,X
            cmp #$0A
            bcc LBE99
            adc #$06
LBE99:      adc #$30
            jsr LC040
            dex
            bpl LBE91
            rts
LBEA2:      bpl LBEAB
            lda #$2D
            sta L002E
            jsr LC040
LBEAB:      lda L0030
            cmp #$81
            bcs LBEFF
            jsr LC1CE
            dec L0049
            jmp LBEAB
LBEB9:      ldx L2802
            cpx #$03
            bcc LBEC2
            ldx #$00
LBEC2:      stx L0037
            lda L2801
            beq LBECF
            cmp #$0A
            bcs LBED3
            bcc LBED5
LBECF:      cpx #$02
            beq LBED5
LBED3:      lda #$0A
LBED5:      sta L0038
            sta L004E
            lda #$00
            sta L0036
            sta L0049
            bit L0015
            bmi LBE6A
            tya
            bmi LBEE9
            jsr LC298
LBEE9:      jsr LC1B4
            bne LBEA2
            lda L0037
            bne LBEF7
            lda #$30
            jmp LC040
LBEF7:      jmp LBF76
LBEFA:      jsr LC673
            bne LBF0E
LBEFF:      cmp #$84
            bcc LBF13
            bne LBF0B
            lda L0031
            cmp #$A0
            bcc LBF13
LBF0B:      jsr LC227
LBF0E:      inc L0049
            jmp LBEAB
LBF13:      lda L0035
            sta L0027
            jsr LC35F
            lda L004E
            sta L0038
            ldx L0037
            cpx #$02
            bne LBF36
            adc L0049
            bmi LBF7A
            sta L0038
            cmp #$0B
            bcc LBF36
            lda #$0A
            sta L0038
            lda #$00
            sta L0037
LBF36:      jsr LC660
            lda #$A0
            sta L0031
            lda #$83
            sta L0030
            ldx L0038
            beq LBF4B
LBF45:      jsr LC227
            dex
            bne LBF45
LBF4B:      jsr LC7CF
            jsr LC328
            lda L0027
            sta L0042
            jsr LC4E5
LBF58:      lda L0030
            cmp #$84
            bcs LBF6C
            ror L0031
            ror L0032
            ror L0033
            ror L0034
            ror L0035
            inc L0030
            bne LBF58
LBF6C:      lda L0031
            cmp #$A0
            bcs LBEFA
            lda L0038
            bne LBF87
LBF76:      cmp #$01
            beq LBFC0
LBF7A:      jsr LC660
            lda #$00
            sta L0049
            lda L004E
            sta L0038
            inc L0038
LBF87:      lda #$01
            cmp L0037
            beq LBFC0
            ldy L0049
            bmi LBF9D
            cpy L0038
            bcs LBFC0
            lda #$00
            sta L0049
            iny
            tya
            bne LBFC0
LBF9D:      lda L0037
            cmp #$02
            beq LBFA9
            lda #$01
            cpy #$FF
            bne LBFC0
LBFA9:      lda #$30
            jsr LC040
            lda #$2E
            jsr LC040
            lda #$30
LBFB5:      inc L0049
            beq LBFBE
            jsr LC040
            bne LBFB5
LBFBE:      lda #$80
LBFC0:      sta L004E
LBFC2:      jsr LC01A
            dec L004E
            bne LBFCE
            lda #$2E
            jsr LC040
LBFCE:      dec L0038
            bne LBFC2
            ldy L0037
            dey
            beq LBFEF
            dey
            beq LBFEB
            ldy L0036
LBFDC:      dey
            lda L2A00,Y
            cmp #$30
            beq LBFDC
            cmp #$2E
            beq LBFE9
            iny
LBFE9:      sty L0036
LBFEB:      lda L0049
            beq LC019
LBFEF:      lda #$45
            jsr LC040
            lda L0049
            bpl LC002
            lda #$2D
            jsr LC040
            sec
            lda #$00
            sbc L0049
LC002:      jsr LC02C
            lda L0037
            beq LC019
            lda #$20
            ldy L0049
            bmi LC012
            jsr LC040
LC012:      cpx #$00
            bne LC019
            jmp LC040
LC019:      rts
LC01A:      lda L0031
            lsr A
            lsr A
            lsr A
            lsr A
            jsr LC03E
            lda L0031
            and #$0F
            sta L0031
            jmp LC171
LC02C:      ldx #$FF
            sec
LC02F:      inx
            sbc #$0A
            bcs LC02F
            adc #$0A
            pha
            txa
            beq LC03D
            jsr LC03E
LC03D:      pla
LC03E:      ora #$30
LC040:      stx L003B
            ldx L0036
            sta L2A00,X
            ldx L003B
            inc L0036
            rts
LC04C:      clc
            stx L0035
            jsr LC1B4
            lda #$FF
            rts
LC055:      ldx #$00
            stx L0031
            stx L0032
            stx L0033
            stx L0034
            stx L0035
            stx L0048
            stx L0049
            cmp #$2E
            beq LC07A
            cmp #$3A
            bcs LC04C
            sbc #$2F
            bmi LC04C
            sta L0035
LC073:      iny
            lda (L0019),Y
            cmp #$2E
            bne LC082
LC07A:      lda L0048
            bne LC0C2
            inc L0048
            bne LC073
LC082:      cmp #$45
            beq LC0BB
            cmp #$3A
            bcs LC0C2
            sbc #$2F
            bcc LC0C2
            ldx L0031
            cpx #$18
            bcc LC09C
            ldx L0048
            bne LC073
            inc L0049
            bcs LC073
LC09C:      ldx L0048
            beq LC0A2
            dec L0049
LC0A2:      jsr LC171
            adc L0035
            sta L0035
            bcc LC073
            inc L0034
            bne LC073
            inc L0033
            bne LC073
            inc L0032
            bne LC073
            inc L0031
            bne LC073
LC0BB:      jsr LC11A
            adc L0049
            sta L0049
LC0C2:      sty L001B
            lda L0049
            ora L0048
            beq LC0F9
            jsr LC1B4
            beq LC0F5
LC0CF:      lda #$A8
            sta L0030
            lda #$00
            sta L002F
            sta L002E
            jsr LC2DD
            lda L0049
            bmi LC0EB
            beq LC0F2
LC0E2:      jsr LC1CE
            dec L0049
            bne LC0E2
            beq LC0F2
LC0EB:      jsr LC227
            inc L0049
            bne LC0EB
LC0F2:      jsr LC636
LC0F5:      sec
            lda #$FF
            rts
LC0F9:      lda L0032
            sta L002D
            and #$80
            ora L0031
            bne LC0CF
            lda L0035
            sta L002A
            lda L0034
            sta L002B
            lda L0033
            sta L002C
            lda #$40
            sec
            rts
LC113:      jsr LC125
            eor #$FF
            sec
            rts
LC11A:      iny
            lda (L0019),Y
            cmp #$2D
            beq LC113
            cmp #$2B
            bne LC128
LC125:      iny
            lda (L0019),Y
LC128:      cmp #$3A
            bcs LC14E
            sbc #$2F
            bcc LC14E
            sta L004A
            iny
            lda (L0019),Y
            cmp #$3A
            bcs LC14A
            sbc #$2F
            bcc LC14A
            iny
            sta L0043
            lda L004A
            asl A
            asl A
            adc L004A
            asl A
            adc L0043
            rts
LC14A:      lda L004A
            clc
            rts
LC14E:      lda #$00
            clc
            rts
LC152:      lda L0035
            adc L0042
            sta L0035
            lda L0034
            adc L0041
            sta L0034
            lda L0033
            adc L0040
            sta L0033
            lda L0032
            adc L003F
            sta L0032
            lda L0031
            adc L003E
            sta L0031
            rts
LC171:      pha
            ldx L0034
            lda L0031
            pha
            lda L0032
            pha
            lda L0033
            pha
            lda L0035
            asl A
            rol L0034
            rol L0033
            rol L0032
            rol L0031
            asl A
            rol L0034
            rol L0033
            rol L0032
            rol L0031
            adc L0035
            sta L0035
            txa
            adc L0034
            sta L0034
            pla
            adc L0033
            sta L0033
            pla
            adc L0032
            sta L0032
            pla
            adc L0031
            asl L0035
            rol L0034
            rol L0033
            rol L0032
            rol A
            sta L0031
            pla
            rts
LC1B4:      lda L0031
            ora L0032
            ora L0033
            ora L0034
            ora L0035
            beq LC1C7
            lda L002E
            bne LC1CD
            lda #$01
            rts
LC1C7:      sta L002E
            sta L0030
            sta L002F
LC1CD:      rts
LC1CE:      clc
            lda L0030
            adc #$03
            sta L0030
            bcc LC1D9
            inc L002F
LC1D9:      jsr LC1F8
            jsr LC21C
            jsr LC21C
LC1E2:      jsr LC152
LC1E5:      bcc LC1F7
            ror L0031
            ror L0032
            ror L0033
            ror L0034
            ror L0035
            inc L0030
            bne LC1F7
            inc L002F
LC1F7:      rts
LC1F8:      lda L002E
            sta L003B
            lda L002F
            sta L003C
            lda L0030
            sta L003D
            lda L0031
            sta L003E
            lda L0032
            sta L003F
            lda L0033
            sta L0040
            lda L0034
            sta L0041
            lda L0035
            sta L0042
            rts
LC219:      jsr LC1F8
LC21C:      lsr L003E
            ror L003F
            ror L0040
            ror L0041
            ror L0042
            rts
LC227:      sec
            lda L0030
            sbc #$04
            sta L0030
            bcs LC232
            dec L002F
LC232:      jsr LC219
            jsr LC1E2
            jsr LC219
            jsr LC21C
            jsr LC21C
            jsr LC21C
            jsr LC1E2
            lda #$00
            sta L003E
            lda L0031
            sta L003F
            lda L0032
            sta L0040
            lda L0033
            sta L0041
            lda L0034
            sta L0042
            lda L0035
            rol A
            jsr LC1E2
            lda #$00
            sta L003E
            sta L003F
            lda L0031
            sta L0040
            lda L0032
            sta L0041
            lda L0033
            sta L0042
            lda L0034
            rol A
            jsr LC1E2
            lda L0032
            rol A
            lda L0031
LC27E:      adc L0035
            sta L0035
            bcc LC297
            inc L0034
            bne LC297
            inc L0033
            bne LC297
            inc L0032
            bne LC297
            inc L0031
            bne LC297
            jmp LC1E5
LC297:      rts
LC298:      ldx #$00
            stx L0035
            stx L002F
            lda L002D
            bpl LC2A7
            jsr LCD67
            ldx #$FF
LC2A7:      stx L002E
            lda L002A
            sta L0034
            lda L002B
            sta L0033
            lda L002C
            sta L0032
            lda L002D
            sta L0031
            lda #$A0
            sta L0030
            jmp LC2DD
LC2C0:      sta L002E
            sta L0030
            sta L002F
LC2C6:      rts
LC2C7:      pha
            jsr LC660
            pla
            beq LC2C6
            bpl LC2D7
            sta L002E
            lda #$00
            sec
            sbc L002E
LC2D7:      sta L0031
            lda #$88
            sta L0030
LC2DD:      lda L0031
            bmi LC2C6
            ora L0032
            ora L0033
            ora L0034
            ora L0035
            beq LC2C0
            lda L0030
LC2ED:      ldy L0031
            bmi LC2C6
            bne LC314
            ldx L0032
            stx L0031
            ldx L0033
            stx L0032
            ldx L0034
            stx L0033
            ldx L0035
            stx L0034
            sty L0035
            sec
            sbc #$08
            sta L0030
            bcs LC2ED
            dec L002F
            bcc LC2ED
LC310:      ldy L0031
            bmi LC2C6
LC314:      asl L0035
            rol L0034
            rol L0033
            rol L0032
            rol L0031
            sbc #$00
            sta L0030
            bcs LC310
            dec L002F
            bcc LC310
LC328:      ldy #$04
            lda (L004B),Y
            sta L0041
            dey
            lda (L004B),Y
            sta L0040
            dey
            lda (L004B),Y
            sta L003F
            dey
            lda (L004B),Y
            sta L003B
            dey
            sty L0042
            sty L003C
            lda (L004B),Y
            sta L003D
            ora L003B
            ora L003F
            ora L0040
            ora L0041
            beq LC354
            lda L003B
            ora #$80
LC354:      sta L003E
            rts
LC357:      lda #$71
            bne LC361
LC35B:      lda #$76
            bne LC361
LC35F:      lda #$6C
LC361:      sta L004B
            lda #$28
            sta L004C
LC367:      ldy #$00
            lda L0030
            sta (L004B),Y
            iny
            lda L002E
            and #$80
            sta L002E
            lda L0031
            and #$7F
            ora L002E
            sta (L004B),Y
            lda L0032
            iny
            sta (L004B),Y
            lda L0033
            iny
            sta (L004B),Y
            lda L0034
            iny
            sta (L004B),Y
            rts
LC38C:      jsr LC7CF
LC38F:      ldy #$04
            lda (L004B),Y
            sta L0034
            dey
            lda (L004B),Y
            sta L0033
            dey
            lda (L004B),Y
            sta L0032
            dey
            lda (L004B),Y
            sta L002E
            dey
            lda (L004B),Y
            sta L0030
            sty L0035
            sty L002F
            ora L002E
            ora L0032
            ora L0033
            ora L0034
            beq LC3BB
            lda L002E
            ora #$80
LC3BB:      sta L0031
            rts
LC3BE:      jsr LC3D8
LC3C1:      lda L0031
            sta L002D
            lda L0032
            sta L002C
            lda L0033
            sta L002B
            lda L0034
            sta L002A
            rts
LC3D2:      jsr LC1F8
            jmp LC660
LC3D8:      lda L0030
            bpl LC3D2
            jsr LC42D
            jsr LC1B4
            bne LC416
            beq LC442
LC3E6:      lda L0030
            cmp #$A0
            bcs LC440
            cmp #$99
            bcs LC416
            adc #$08
            sta L0030
            lda L0040
            sta L0041
            lda L003F
            sta L0040
            lda L003E
            sta L003F
            lda L0034
            sta L003E
            lda L0033
            sta L0034
            lda L0032
            sta L0033
            lda L0031
            sta L0032
            lda #$00
            sta L0031
            beq LC3E6
LC416:      lsr L0031
            ror L0032
            ror L0033
            ror L0034
            ror L003E
            ror L003F
            ror L0040
            ror L0041
            inc L0030
            bne LC3E6
LC42A:      jmp LC646
LC42D:      lda #$00
            sta L003B
            sta L003C
            sta L003D
            sta L003E
            sta L003F
            sta L0040
            sta L0041
            sta L0042
            rts
LC440:      bne LC42A
LC442:      lda L002E
            bpl LC45F
LC446:      sec
            lda #$00
            sbc L0034
            sta L0034
            lda #$00
            sbc L0033
            sta L0033
            lda #$00
            sbc L0032
            sta L0032
            lda #$00
            sbc L0031
            sta L0031
LC45F:      rts
LC460:      lda L0030
            bmi LC46B
            lda #$00
            sta L004A
            jmp LC1B4
LC46B:      jsr LC3D8
            lda L0034
            sta L004A
            jsr LC4C2
            lda #$80
            sta L0030
            ldx L0031
            bpl LC48D
            eor L002E
            sta L002E
            bpl LC488
            inc L004A
            jmp LC48A
LC488:      dec L004A
LC48A:      jsr LC446
LC48D:      jmp LC2DD
LC490:      inc L0034
            bne LC4A0
            inc L0033
            bne LC4A0
            inc L0032
            bne LC4A0
            inc L0031
            beq LC42A
LC4A0:      rts
LC4A1:      jsr LC446
            jsr LC490
            jmp LC446
LC4AA:      jsr LC4D7
            jmp LCD52
LC4B0:      jsr LC328
            jsr LC367
LC4B6:      lda L003B
            sta L002E
            lda L003C
            sta L002F
            lda L003D
            sta L0030
LC4C2:      lda L003E
            sta L0031
            lda L003F
            sta L0032
            lda L0040
            sta L0033
            lda L0041
            sta L0034
            lda L0042
            sta L0035
LC4D6:      rts
LC4D7:      jsr LCD52
LC4DA:      jsr LC328
            beq LC4D6
LC4DF:      jsr LC4E5
            jmp LC636
LC4E5:      jsr LC1B4
            beq LC4B6
            ldy #$00
            sec
            lda L0030
            sbc L003D
            beq LC56A
            bcc LC52C
            cmp #$25
            bcs LC4D6
            pha
            and #$38
            beq LC517
            lsr A
            lsr A
            lsr A
            tax
LC502:      lda L0041
            sta L0042
            lda L0040
            sta L0041
            lda L003F
            sta L0040
            lda L003E
            sta L003F
            sty L003E
            dex
            bne LC502
LC517:      pla
            and #$07
            beq LC56A
            tax
LC51D:      lsr L003E
            ror L003F
            ror L0040
            ror L0041
            ror L0042
            dex
            bne LC51D
            beq LC56A
LC52C:      sec
            lda L003D
            sbc L0030
            cmp #$25
            bcs LC4B6
            pha
            and #$38
            beq LC553
            lsr A
            lsr A
            lsr A
            tax
LC53E:      lda L0034
            sta L0035
            lda L0033
            sta L0034
            lda L0032
            sta L0033
            lda L0031
            sta L0032
            sty L0031
            dex
            bne LC53E
LC553:      pla
            and #$07
            beq LC566
            tax
LC559:      lsr L0031
            ror L0032
            ror L0033
            ror L0034
            ror L0035
            dex
            bne LC559
LC566:      lda L003D
            sta L0030
LC56A:      lda L002E
            eor L003B
            bpl LC5B9
            lda L0031
            cmp L003E
            bne LC591
            lda L0032
            cmp L003F
            bne LC591
            lda L0033
            cmp L0040
            bne LC591
            lda L0034
            cmp L0041
            bne LC591
            lda L0035
            cmp L0042
            bne LC591
            jmp LC660
LC591:      bcs LC5BD
            sec
            lda L0042
            sbc L0035
            sta L0035
            lda L0041
            sbc L0034
            sta L0034
            lda L0040
            sbc L0033
            sta L0033
            lda L003F
            sbc L0032
            sta L0032
            lda L003E
            sbc L0031
            sta L0031
            lda L003B
            sta L002E
            jmp LC2DD
LC5B9:      clc
            jmp LC1E2
LC5BD:      sec
            lda L0035
            sbc L0042
            sta L0035
            lda L0034
            sbc L0041
            sta L0034
            lda L0033
            sbc L0040
            sta L0033
            lda L0032
            sbc L003F
            sta L0032
            lda L0031
            sbc L003E
            sta L0031
            jmp LC2DD
LC5DF:      rts
LC5E0:      jsr LC1B4
            beq LC5DF
            jsr LC328
            bne LC5ED
            jmp LC660
LC5ED:      clc
            lda L0030
            adc L003D
            bcc LC5F7
            inc L002F
            clc
LC5F7:      sbc #$7F
            sta L0030
            bcs LC5FF
            dec L002F
LC5FF:      ldx #$05
            ldy #$00
LC603:      lda L0030,X
            sta L0042,X
            sty L0030,X
            dex
            bne LC603
            lda L002E
            eor L003B
            sta L002E
            ldy #$20
LC614:      lsr L003E
            ror L003F
            ror L0040
            ror L0041
            ror L0042
            asl L0046
            rol L0045
            rol L0044
            rol L0043
            bcc LC62C
            clc
            jsr LC152
LC62C:      dey
            bne LC614
            rts
LC630:      jsr LC5E0
LC633:      jsr LC2DD
LC636:      lda L0035
            cmp #$80
            bcc LC656
            beq LC650
            lda #$FF
            jsr LC27E
            jmp LC656
LC646:      .byte $00,$14
            .byte "Too big"
            .byte $00
LC650:      lda L0034
            ora #$01
            sta L0034
LC656:      lda #$00
            sta L0035
            lda L002F
            beq LC672
            bpl LC646
LC660:      lda #$00
            sta L002E
            sta L002F
            sta L0030
            sta L0031
            sta L0032
            sta L0033
            sta L0034
            sta L0035
LC672:      rts
LC673:      jsr LC660
            ldy #$80
            sty L0031
            iny
            sty L0030
            tya
            rts
LC67F:      jsr LC35F
            jsr LC673
            bne LC6C1
LC687:      jsr LC1B4
            beq LC695
            jsr LC1F8
            jsr LC38F
            bne LC6CB
            rts
LC695:      jmp LB981
            jsr LB2F8
            jsr LC9AD
            lda L004A
            pha
            jsr LC7C3
            jsr LC367
            inc L004A
            jsr LC978
            jsr LC7C3
            jsr LC4B0
            pla
            sta L004A
            jsr LC978
            jsr LC7C3
            jsr LC6C1
            lda #$FF
            rts
LC6C1:      jsr LC1B4
            beq LC672
            jsr LC328
            beq LC695
LC6CB:      lda L002E
            eor L003B
            sta L002E
            sec
            lda L0030
            sbc L003D
            bcs LC6DB
            dec L002F
            sec
LC6DB:      adc #$80
            sta L0030
            bcc LC6E4
            inc L002F
            clc
LC6E4:      ldx #$20
LC6E6:      bcs LC700
            lda L0031
            cmp L003E
            bne LC6FE
            lda L0032
            cmp L003F
            bne LC6FE
            lda L0033
            cmp L0040
            bne LC6FE
            lda L0034
            cmp L0041
LC6FE:      bcc LC719
LC700:      lda L0034
            sbc L0041
            sta L0034
            lda L0033
            sbc L0040
            sta L0033
            lda L0032
            sbc L003F
            sta L0032
            lda L0031
            sbc L003E
            sta L0031
            sec
LC719:      rol L0046
            rol L0045
            rol L0044
            rol L0043
            asl L0034
            rol L0033
            rol L0032
            rol L0031
            dex
            bne LC6E6
            ldx #$07
LC72E:      bcs LC748
            lda L0031
            cmp L003E
            bne LC746
            lda L0032
            cmp L003F
            bne LC746
            lda L0033
            cmp L0040
            bne LC746
            lda L0034
            cmp L0041
LC746:      bcc LC761
LC748:      lda L0034
            sbc L0041
            sta L0034
            lda L0033
            sbc L0040
            sta L0033
            lda L0032
            sbc L003F
            sta L0032
            lda L0031
            sbc L003E
            sta L0031
            sec
LC761:      rol L0035
            asl L0034
            rol L0033
            rol L0032
            rol L0031
            dex
            bne LC72E
            asl L0035
            lda L0046
            sta L0034
            lda L0045
            sta L0033
            lda L0044
            sta L0032
            lda L0043
            sta L0031
            jmp LC633
LC783:      .byte $00,$15
            .byte "-ve root"
            .byte $00
            jsr LB2F8
LC791:      jsr LC1B4
            beq LC7C0
            bmi LC783
            jsr LC35F
            lda L0030
            lsr A
            adc #$40
            sta L0030
            lda #$05
            sta L004A
            jsr LC7C7
LC7A9:      jsr LC367
            lda #$6C
            sta L004B
            jsr LC687
            lda #$71
            sta L004B
            jsr LC4DA
            dec L0030
            dec L004A
            bne LC7A9
LC7C0:      lda #$FF
            rts
LC7C3:      lda #$7B
            bne LC7D1
LC7C7:      lda #$71
            bne LC7D1
LC7CB:      lda #$76
            bne LC7D1
LC7CF:      lda #$6C
LC7D1:      sta L004B
            lda #$28
            sta L004C
            rts
LC7D8:      jsr LB2F8
LC7DB:      jsr LC1B4
            beq LC7E2
            bpl LC7EE
LC7E2:      .byte $00,$16
            .byte "Log range"
            .byte $00
LC7EE:      jsr LC42D
            ldy #$80
            sty L003B
            sty L003E
            iny
            sty L003D
            ldx L0030
            beq LC804
            lda L0031
            cmp #$B5
            bcc LC806
LC804:      inx
            dey
LC806:      txa
            pha
            sty L0030
            jsr LC4DF
            lda #$7B
            jsr LC361
            lda #$4D
            ldy #$C8
            jsr LC871
            jsr LC7C3
            jsr LC630
            jsr LC630
            jsr LC4DA
            jsr LC35F
            pla
            sec
            sbc #$81
            jsr LC2C7
            lda #$48
            sta L004B
            lda #$C8
            sta L004C
            jsr LC630
            jsr LC7CF
            jsr LC4DA
            lda #$FF
            rts
            .byte $7F,$5E,$5B,$D8,$AA,$80,$31,$72
            .byte $17,$F8,$06,$7A,$12,$38,$A5,$0B
            .byte $88,$79,$0E,$9F,$F3,$7C,$2A,$AC
            .byte $3F,$B5,$86,$34,$01,$A2,$7A,$7F
            .byte $63,$8E,$37,$EC,$82,$3F,$FF,$FF
            .byte $C1,$7F,$FF,$FF,$FF,$FF
LC871:      sta L004D
            sty L004E
            jsr LC35F
            ldy #$00
            lda (L004D),Y
            sta L0048
            inc L004D
            bne LC884
            inc L004E
LC884:      lda L004D
            sta L004B
            lda L004E
            sta L004C
            jsr LC38F
LC88F:      jsr LC7CF
            jsr LC687
            clc
            lda L004D
            adc #$05
            sta L004D
            sta L004B
            lda L004E
            adc #$00
            sta L004E
            sta L004C
            jsr LC4DA
            dec L0048
            bne LC88F
            rts
            jsr LC8B4
            jmp LC901
LC8B4:      jsr LB2F8
            jsr LC1B4
            bpl LC8C4
            lsr L002E
            jsr LC8C4
            jmp LC8F0
LC8C4:      jsr LC35B
            jsr LC98B
            jsr LC1B4
            beq LC8D8
            jsr LC7CB
            jsr LC687
            jmp LC8E4
LC8D8:      jsr LCA2F
            jsr LC38F
LC8DE:      lda #$FF
            rts
            jsr LB2F8
LC8E4:      jsr LC1B4
            beq LC8DE
            bpl LC8F5
            lsr L002E
            jsr LC8F5
LC8F0:      lda #$80
            sta L002E
            rts
LC8F5:      lda L0030
            cmp #$81
            bcc LC910
            jsr LC67F
            jsr LC910
LC901:      jsr LCA22
            jsr LC4DA
            jsr LCA26
            jsr LC4DA
            jmp LCD52
LC910:      lda L0030
            cmp #$73
            bcc LC8DE
            jsr LC35B
            jsr LC42D
            lda #$80
            sta L003D
            sta L003E
            sta L003B
            jsr LC4DF
            lda #$34
            ldy #$C9
            jsr LC871
            jsr LCAAB
            lda #$FF
            rts
            .byte $09,$85,$A3,$59,$E8,$67,$80,$1C
            .byte $9D,$07,$36,$80,$57,$BB,$78,$DF
            .byte $80,$CA,$9A,$0E,$83,$84,$8C,$BB
            .byte $CA,$6E,$81,$95,$96,$06,$DE,$81
            .byte $0A,$C7,$6C,$52,$7F,$7D,$AD,$90
            .byte $A1,$82,$FB,$62,$57,$2F,$80,$6D
            .byte $63,$38,$2C,$20,$F8,$B2
            jsr LC9AD
            inc L004A
            jmp LC978
            jsr LB2F8
            jsr LC9AD
LC978:      lda L004A
            and #$02
            beq LC984
            jsr LC984
            jmp LCD52
LC984:      lsr L004A
            bcc LC99D
            jsr LC99D
LC98B:      jsr LC35F
            jsr LC630
            jsr LC367
            jsr LC673
            jsr LC4AA
            jmp LC791
LC99D:      jsr LC35B
            jsr LC630
            lda #$4C
            ldy #$CA
            jsr LC871
            jmp LCAAB
LC9AD:      lda L0030
            cmp #$98
            bcs LCA12
            jsr LC35F
            jsr LCA2F
            jsr LC328
            lda L002E
            sta L003B
            dec L003D
            jsr LC4DF
            jsr LC6C1
            jsr LC3D8
            lda L0034
            sta L004A
            ora L0033
            ora L0032
            ora L0031
            beq LCA0F
            lda #$A0
            sta L0030
            ldy #$00
            sty L0035
            lda L0031
            sta L002E
            bpl LC9E8
            jsr LC446
LC9E8:      jsr LC2DD
            jsr LC357
            jsr LCA22
            jsr LC630
            jsr LC7CF
            jsr LC4DA
            jsr LC367
            jsr LC7C7
            jsr LC38F
            jsr LCA26
            jsr LC630
            jsr LC7CF
            jmp LC4DA
LCA0F:      jmp LC38C
LCA12:      .byte $00,$17
            .byte "Accuracy lost"
            .byte $00
LCA22:      lda #$33
            bne LCA28
LCA26:      lda #$38
LCA28:      sta L004B
            lda #$CA
            sta L004C
            rts
LCA2F:      lda #$3D
            bne LCA28
            .byte $81,$C9,$10,$00,$00,$6F,$15,$77
            .byte $7A,$61,$81,$49,$0F,$DA,$A2,$7B
            .byte $0E,$FA,$35,$12,$86,$65,$2E,$E0
            .byte $D3,$05,$84,$8A,$EA,$0C,$1B,$84
            .byte $1A,$BE,$BB,$2B,$84,$37,$45,$55
            .byte $AB,$82,$D5,$55,$57,$7C,$83,$C0
            .byte $00,$00,$05,$81,$00,$00,$00,$00
            jsr LB2F8
LCA6E:      lda L0030
            cmp #$87
            bcc LCA92
            bne LCA7C
            ldy L0031
            cpy #$B3
            bcc LCA92
LCA7C:      lda L002E
            bpl LCA86
            jsr LC660
            lda #$FF
            rts
LCA86:      .byte $00,$18
            .byte "Exp range"
            .byte $00
LCA92:      jsr LC460
            jsr LCAB4
            jsr LC35B
            lda #$BE
            sta L004B
            lda #$CA
            sta L004C
            jsr LC38F
            lda L004A
            jsr LCAEC
LCAAB:      jsr LC7CB
            jsr LC630
            lda #$FF
            rts
LCAB4:      lda #$C3
            ldy #$CA
            jsr LC871
            lda #$FF
            rts
            .byte $82,$2D,$F8,$54,$58,$07,$83,$E0
            .byte $20,$86,$5B,$82,$80,$53,$93,$B8
            .byte $83,$20,$00,$2A,$A1,$82,$00,$00
            .byte $21,$63,$82,$C0,$00,$00,$02,$82
            .byte $80,$00,$00,$0C,$81,$00,$00,$00
            .byte $00,$81,$00,$00,$00,$00
LCAEC:      tax
            bpl LCAF8
            dex
            txa
            eor #$FF
            pha
            jsr LC67F
            pla
LCAF8:      pha
            jsr LC35F
            jsr LC673
LCAFF:      pla
            beq LCB0C
            sec
            sbc #$01
            pha
            jsr LC630
            jmp LCAFF
LCB0C:      rts
            jsr LB2E1
            ldx L002A
            lda #$80
            txa
            jmp LCEBB
            jsr LB2DB
            jsr LDD9D
            jsr LAAA6
            jsr LCE2A
            jsr LB2EE
            lda L002A
            pha
            lda L002B
            pha
            jsr LDDF3
            pla
            sta L002D
            pla
            sta L002C
            ldx #$2A
            lda #$09
            jsr LDFC5
            lda L002E
            bmi LCB74
            jmp LCEA9
            lda #$86
            jsr LDFC5
            txa
            jmp LCEA9
            lda #$86
            jsr LDFC5
            tya
            jmp LCEA9
LCB56:      jsr LC1B4
            beq LCB79
            bpl LCB77
            bmi LCB74
            jsr LCDC0
            beq LCBBD
            bmi LCB56
            lda L002D
            ora L002C
            ora L002B
            ora L002A
            beq LCB7C
            lda L002D
            bpl LCB77
LCB74:      jmp LCC98
LCB77:      lda #$01
LCB79:      jmp LCEA9
LCB7C:      lda #$40
            rts
            jsr LC7D8
            ldy #$43
            lda #$C8
            bne LCB8F
            jsr LB2F8
            ldy #$42
            lda #$CA
LCB8F:      sty L004B
            sta L004C
            jsr LC630
            lda #$FF
            rts
            jsr LB2F8
            ldy #$47
            lda #$CA
            bne LCB8F
            jsr LC8D8
            inc L0030
            tay
            rts
            jsr LB2E1
            jsr LAF27
            sta L002A
            stx L002B
            sty L002C
            php
            pla
            sta L002D
            cld
            lda #$40
            rts
LCBBD:      jmp LAC06
            jsr LCDC0
            bne LCBBD
            inc L0036
            ldy L0036
            lda #$0D
            sta L29FF,Y
            jsr LDDBB
            lda L0019
            pha
            lda L001A
            pha
            lda L001B
            pha
            ldy L0004
            ldx L0005
            iny
            sty L0019
            sty L0037
            bne LCBE6
            inx
LCBE6:      stx L001A
            stx L0038
            ldy #$FF
            sty L003B
            iny
            sty L001B
            jsr LA94D
            jsr LBB03
            jsr LDDE5
LCBFA:      pla
            sta L001B
            pla
            sta L001A
            pla
            sta L0019
            lda L0027
            rts
            jsr LCDC0
            bne LCC72
LCC0B:      ldy L0036
            lda #$00
            sta L2A00,Y
            lda L0019
            pha
            lda L001A
            pha
            lda L001B
            pha
            lda #$00
            sta L001B
            lda #$00
            sta L0019
            lda #$2A
            sta L001A
            jsr LAA84
            cmp #$2D
            beq LCC3D
            cmp #$2B
            bne LCC35
            jsr LAA84
LCC35:      dec L001B
            jsr LC055
            jmp LCC4A
LCC3D:      jsr LAA84
            dec L001B
            jsr LC055
            bcc LCC4A
            jsr LCD63
LCC4A:      sta L0027
            jmp LCBFA
            jsr LCDC0
            beq LCC72
            bpl LCC71
            lda L002E
            php
            jsr LC3D8
            plp
            bpl LCC6C
            lda L003E
            ora L003F
            ora L0040
            ora L0041
            beq LCC6C
            jsr LC4A1
LCC6C:      jsr LC3C1
LCC6F:      lda #$40
LCC71:      rts
LCC72:      jmp LAC06
            jsr LCDC0
            bne LCC72
            lda L0036
            beq LCC98
            lda L2A00
LCC81:      jmp LCEA9
            jsr LCF7E
            cpy #$00
            bne LCC98
            txa
            jmp LCEBB
            jsr LDFB8
            tax
            lda #$7F
            txa
            beq LCC81
LCC98:      lda #$FF
            sta L002A
            sta L002B
            sta L002C
            sta L002D
            lda #$40
            rts
            jsr LB2E1
            ldx #$03
LCCAA:      lda L002A,X
            eor #$FF
            sta L002A,X
            dex
            bpl LCCAA
            lda #$40
            rts
            jsr LBB03
            bne LCC6F
            cpx #$2C
            bne LCCD7
            inc L001B
            jsr LDDBB
            jsr LBB03
            bne LCC6F
            lda #$01
            sta L002A
            inc L001B
            cpx #$29
            beq LCCE6
            cpx #$2C
            beq LCCDA
LCCD7:      jmp LAA9A
LCCDA:      jsr LDDBB
            jsr LCE2A
            jsr LB2EE
            jsr LDDD4
LCCE6:      ldy #$00
            ldx L002A
            bne LCCEE
            ldx #$01
LCCEE:      stx L002A
            txa
            dex
            stx L002D
            clc
            adc L0004
            sta L0037
            tya
            adc L0005
            sta L0038
            lda (L0004),Y
            sec
            sbc L002D
            bcc LCD26
            sbc L0036
            bcc LCD26
            adc #$00
            sta L002B
            jsr LDDE5
LCD10:      ldy #$00
            ldx L0036
            beq LCD21
LCD16:      lda (L0037),Y
            cmp L2A00,Y
            bne LCD2D
            iny
            dex
            bne LCD16
LCD21:      lda L002A
LCD23:      jmp LCEA9
LCD26:      jsr LDDE5
LCD29:      lda #$00
            beq LCD23
LCD2D:      inc L002A
            dec L002B
            beq LCD29
            inc L0037
            bne LCD10
            inc L0038
            bne LCD10
LCD3B:      jmp LAC06
            jsr LCDC0
            beq LCD3B
            bmi LCD4B
LCD45:      bit L002D
            bmi LCD67
            bpl LCD7E
LCD4B:      jsr LC1B4
            bpl LCD5D
            bmi LCD57
LCD52:      jsr LC1B4
            beq LCD5D
LCD57:      lda L002E
            eor #$80
            sta L002E
LCD5D:      lda #$FF
            rts
LCD60:      jsr LCDD6
LCD63:      beq LCD3B
            bmi LCD52
LCD67:      sec
            lda #$00
            tay
            sbc L002A
            sta L002A
            tya
            sbc L002B
            sta L002B
            tya
            sbc L002C
            sta L002C
            tya
            sbc L002D
            sta L002D
LCD7E:      lda #$40
            rts
LCD81:      jsr LAA84
            cmp #$22
            beq LCD9D
            ldx #$00
LCD8A:      lda (L0019),Y
            sta L2A00,X
            iny
            inx
            cmp #$0D
            beq LCD99
            cmp #$2C
            bne LCD8A
LCD99:      dey
            jmp LCDB5
LCD9D:      ldx #$00
LCD9F:      iny
LCDA0:      lda (L0019),Y
            cmp #$0D
            beq LCDBD
            iny
            sta L2A00,X
            inx
            cmp #$22
            bne LCDA0
            lda (L0019),Y
            cmp #$22
            beq LCD9F
LCDB5:      dex
            stx L0036
            sty L001B
            lda #$00
            rts
LCDBD:      jmp LAEA1
LCDC0:      ldy L001B
            inc L001B
            lda (L0019),Y
            cmp #$20
            beq LCDC0
            cmp #$2D
            beq LCD60
            cmp #$22
            beq LCD9D
            cmp #$2B
            bne LCDD9
LCDD6:      jsr LAA84
LCDD9:      cmp #$8E
            bcc LCDE4
            cmp #$C6
            bcs LCE17
            jmp LABA9
LCDE4:      cmp #$3F
            bcs LCDF4
            cmp #$2E
            bcs LCDFE
            cmp #$26
            beq LCE41
            cmp #$28
            beq LCE2A
LCDF4:      dec L001B
            jsr LB5A7
            beq LCE04
            jmp LD31E
LCDFE:      jsr LC055
            bcc LCE17
            rts
LCE04:      lda L0028
            and #$02
            bne LCE17
            bcs LCE17
            stx L001B
LCE0E:      lda L2840
            ldy L2841
            jmp LCEBB
LCE17:      .byte $00,$1A
            .byte "No such variable"
            .byte $00
LCE2A:      jsr LBB03
            inc L001B
            cpx #$29
            bne LCE35
            tay
            rts
LCE35:      .byte $00,$1B
            .byte "Missing )"
            .byte $00
LCE41:      ldx #$00
            stx L002A
            stx L002B
            stx L002C
            stx L002D
            ldy L001B
LCE4D:      lda (L0019),Y
            cmp #$30
            bcc LCE76
            cmp #$3A
            bcc LCE61
            sbc #$37
            cmp #$0A
            bcc LCE76
            cmp #$10
            bcs LCE76
LCE61:      asl A
            asl A
            asl A
            asl A
            ldx #$03
LCE67:      asl A
            rol L002A
            rol L002B
            rol L002C
            rol L002D
            dex
            bpl LCE67
            iny
            bne LCE4D
LCE76:      txa
            bpl LCE7E
            sty L001B
            lda #$40
            rts
LCE7E:      .byte $00,$1C
            .byte "Bad HEX"
            .byte $00
            ldx #$2A
            ldy #$00
            lda #$01
            lda #$40
            rts
            lda #$00
            ldy L0018
            jmp LCEBB
LCE98:      jmp LCE17
            lda #$00
            beq LCEA9
LCE9F:      jmp LAC06
            jsr LCDC0
            bne LCE9F
            lda L0036
LCEA9:      ldy #$00
            beq LCEBB
            ldy L001B
            lda (L0019),Y
            cmp #$50
            bne LCE98
            inc L001B
            lda L0012
            ldy L0013
LCEBB:      sta L002A
            sty L002B
            lda #$00
            sta L002C
            sta L002D
            lda #$40
            rts
            lda L001E
            jmp LCEA9
            lda $00
            ldy L0001
            jmp LCEBB
            lda L0006
            ldy L0007
            jmp LCEBB
LCEDB:      inc L001B
            jsr LCE2A
            jsr LB2EE
            lda L002D
            bmi LCF10
            ora L002C
            ora L002B
            bne LCEF5
            lda L002A
            beq LCF3D
            cmp #$01
            beq LCF3A
LCEF5:      jsr LC298
            jsr LDD5A
            jsr LCF3A
            jsr LDD87
            jsr LC5E0
            jsr LC2DD
            jsr LC3BE
            jsr LB22B
            lda #$40
            rts
LCF10:      ldx #$0D
            jsr LDE4D
            lda #$40
            sta L0011
            rts
            ldy L001B
            lda (L0019),Y
            cmp #$28
            beq LCEDB
            jsr LCF58
            ldx #$0D
LCF27:      lda $00,X
            sta L002A
            lda L0001,X
            sta L002B
            lda L0002,X
            sta L002C
            lda L0003,X
            sta L002D
            lda #$40
            rts
LCF3A:      jsr LCF58
LCF3D:      ldx #$00
            stx L002E
            stx L002F
            stx L0035
            lda #$80
            sta L0030
LCF49:      lda L000D,X
            sta L0031,X
            inx
            cpx #$04
            bne LCF49
            jsr LC633
            lda #$FF
            rts
LCF58:      ldy #$20
LCF5A:      lda L000F
            lsr A
            lsr A
            lsr A
            eor L0011
            ror A
            rol L000D
            rol L000E
            rol L000F
            rol L0010
            rol L0011
            dey
            bne LCF5A
            rts
            ldy L0009
            lda L0008
            jmp LCEBB
            ldy #$00
            lda (L004F),Y
            jmp LCEBB
LCF7E:      jsr LB2E1
LCF81:      lda L0E21
            bpl LCF9F
            lda L002A
            ora L002D
            beq LCFA8
            ldy #$08
LCF8E:      dex
            bne LCF8E
            dey
            bne LCF8E
            lda L002A
            bne LCF9A
            dec L002D
LCF9A:      dec L002A
            jmp LCF81
LCF9F:      ldy L0E21
            bpl LCF9F
            ldy #$00
            tax
            rts
LCFA8:      ldy #$FF
            rts
            jsr LFFE3
            jmp LCEA9
            jsr LFFE3
LCFB4:      sta L2A00
            lda #$01
            sta L0036
            lda #$00
            rts
            jsr LBB03
            bne LD025
            cpx #$2C
            bne LD028
            inc L001B
            jsr LDDBB
            jsr LCE2A
            jsr LB2EE
            jsr LDDD4
            lda L002A
            cmp L0036
            bcs LCFDD
            sta L0036
LCFDD:      lda #$00
            rts
            jsr LBB03
            bne LD025
            cpx #$2C
            bne LD028
            inc L001B
            jsr LDDBB
            jsr LCE2A
            jsr LB2EE
            jsr LDDD4
            lda L0036
            sec
            sbc L002A
            bcc LD015
            beq LD017
            tax
            lda L002A
            sta L0036
            beq LD017
            ldy #$00
LD009:      lda L2A00,X
            sta L2A00,Y
            inx
            iny
            dec L002A
            bne LD009
LD015:      lda #$00
LD017:      rts
            jsr LCF7E
            txa
            cpy #$00
            beq LCFB4
LD020:      lda #$00
            sta L0036
            rts
LD025:      jmp LAC06
LD028:      jmp LAA9A
            jsr LBB03
            bne LD025
            cpx #$2C
            bne LD028
            jsr LDDBB
            inc L001B
            jsr LB2DB
            lda L002A
            pha
            lda #$FF
            sta L002A
            inc L001B
            cpx #$29
            beq LD053
            cpx #$2C
            bne LD028
            jsr LCE2A
            jsr LB2EE
LD053:      jsr LDDD4
            pla
            tay
            clc
            beq LD061
            sbc L0036
            bcs LD020
            dey
            tya
LD061:      sta L002C
            tax
            ldy #$00
            lda L0036
            sec
            sbc L002C
            cmp L002A
            bcs LD071
            sta L002A
LD071:      lda L002A
            beq LD020
LD075:      lda L2A00,X
            sta L2A00,Y
            iny
            inx
            cpy L002A
            bne LD075
            sty L0036
            lda #$00
            rts
            jsr LAA84
            ldy #$FF
            cmp #$7E
            beq LD093
            ldy #$00
            dec L001B
LD093:      tya
            pha
            jsr LCDC0
            beq LD0B1
            tay
            pla
            sta L0015
            lda L2803
            bne LD0AB
            sta L0037
            jsr LBED3
            lda #$00
            rts
LD0AB:      jsr LBEB9
            lda #$00
            rts
LD0B1:      jmp LAC06
            jsr LB2DB
            jsr LDD9D
            jsr LAAA6
            jsr LCE2A
            bne LD0B1
            jsr LDDF3
            ldy L0036
            beq LD0E7
            lda L002A
            beq LD0EA
            dec L002A
            beq LD0E7
LD0D1:      ldx #$00
LD0D3:      lda L2A00,X
            sta L2A00,Y
            inx
            iny
            beq LD0ED
            cpx L0036
            bcc LD0D3
            dec L002A
            bne LD0D1
            sty L0036
LD0E7:      lda #$00
            rts
LD0EA:      sta L0036
            rts
LD0ED:      jmp LBBDD
LD0F0:      pla
            sta L000C
            pla
            sta L000B
            .byte $00,$1D
            .byte "No such "
            ldy L002F
            .byte $F2,$00
LD104:      lda L0018
            sta L000C
            lda #$00
            sta L000B
LD10C:      ldy #$01
            lda (L000B),Y
            bmi LD0F0
            ldy #$03
LD114:      iny
            lda (L000B),Y
            cmp #$20
            beq LD114
            cmp #$DD
            beq LD12E
LD11F:      ldy #$03
            lda (L000B),Y
            clc
            adc L000B
            sta L000B
            bcc LD10C
            inc L000C
            bcs LD10C
LD12E:      iny
            sty L000A
            jsr LAA8F
            tya
            tax
            clc
            adc L000B
            ldy L000C
            bcc LD13F
            iny
            clc
LD13F:      sbc #$00
            sta L003C
            tya
            sbc #$00
            sta L003D
            ldy #$00
LD14A:      iny
            inx
            lda (L003C),Y
            cmp (L0037),Y
            bne LD11F
            cpy L0039
            bne LD14A
            iny
            lda (L003C),Y
            jsr LA91E
            bcs LD11F
            txa
            tay
            jsr LB83D
            jsr LB4B7
            ldx #$01
            jsr LB4FB
            ldy #$00
            lda L000B
            sta (L0002),Y
            iny
            lda L000C
            sta (L0002),Y
            jsr LB503
            jmp LD1E6
LD17C:      .byte $00,$1E
            .byte "Bad call"
            .byte $00
            lda #$A4
LD189:      sta L0027
            tsx
            txa
            clc
            adc L0004
            jsr LDE37
            ldy #$00
            txa
            sta (L0004),Y
LD198:      inx
            iny
            lda L0100,X
            sta (L0004),Y
            cpx #$FF
            bne LD198
            txs
            lda L0027
            pha
            lda L000A
            pha
            lda L000B
            pha
            lda L000C
            pha
            lda L001B
            tax
            clc
            adc L0019
            ldy L001A
            bcc LD1BC
            iny
            clc
LD1BC:      sbc #$01
            sta L0037
            tya
            sbc #$00
            sta L0038
            ldy #$02
            jsr LB525
            cpy #$02
            beq LD17C
            stx L001B
            dey
            sty L0039
            jsr LB425
            bne LD1DB
            jmp LD104
LD1DB:      ldy #$00
            lda (L002A),Y
            sta L000B
            iny
            lda (L002A),Y
            sta L000C
LD1E6:      lda #$00
            pha
            sta L000A
            jsr LAA8F
            cmp #$28
            beq LD23F
            dec L000A
LD1F4:      lda L001B
            pha
            lda L0019
            pha
            lda L001A
            pha
            jsr LAB9B
            pla
            sta L001A
            pla
            sta L0019
            pla
            sta L001B
            pla
            beq LD218
            sta L003F
LD20E:      jsr LDE14
            jsr LACB9
            dec L003F
            bne LD20E
LD218:      pla
            sta L000C
            pla
            sta L000B
            pla
            sta L000A
            pla
            ldy #$00
            lda (L0004),Y
            tax
            txs
LD228:      iny
            inx
            lda (L0004),Y
            sta L0100,X
            cpx #$FF
            bne LD228
            tya
            adc L0004
            sta L0004
            bcc LD23C
            inc L0005
LD23C:      lda L0027
            rts
LD23F:      lda L001B
            pha
            lda L0019
            pha
            lda L001A
            pha
            jsr LB54C
            beq LD2A7
            lda L001B
            sta L000A
            pla
            sta L001A
            pla
            sta L0019
            pla
            sta L001B
            pla
            tax
            lda L002C
            pha
            lda L002B
            pha
            lda L002A
            pha
            inx
            txa
            pha
            jsr LD2FF
            jsr LAA8F
            cmp #$2C
            beq LD23F
            cmp #$29
            bne LD2A7
            lda #$00
            pha
            jsr LAA84
            cmp #$28
            bne LD2A7
LD280:      jsr LBB03
            jsr LDD99
            lda L0027
            sta L002D
            jsr LDD9D
            pla
            tax
            inx
            txa
            pha
            jsr LAA84
            cmp #$2C
            beq LD280
            cmp #$29
            bne LD2A7
            pla
            pla
            sta L004D
            sta L004E
            cpx L004D
            beq LD2BC
LD2A7:      ldx #$FB
            txs
            pla
            sta L000C
            pla
            sta L000B
            .byte $00,$1F
            .byte "Arguments"
            .byte $00
LD2BC:      jsr LDDF3
            pla
            sta L002A
            pla
            sta L002B
            pla
            sta L002C
            bmi LD2EB
            lda L002D
            beq LD2A7
            sta L0027
            ldx #$37
            jsr LDE4D
            lda L0027
            bpl LD2E2
            jsr LDD87
            jsr LC38F
            jmp LD2E5
LD2E2:      jsr LDDF3
LD2E5:      jsr LD498
            jmp LD2F5
LD2EB:      lda L002D
            bne LD2A7
            jsr LDDD4
            jsr LAC19
LD2F5:      dec L004D
            bne LD2BC
            lda L004E
            pha
            jmp LD1F4
LD2FF:      ldy L002C
            cpy #$04
            bne LD30A
            ldx #$37
            jsr LDE4D
LD30A:      jsr LD31E
            php
            jsr LDD99
            plp
            beq LD31B
            bmi LD31B
            ldx #$37
            jsr LCF27
LD31B:      jmp LDD9D
LD31E:      ldy L002C
            bmi LD376
            beq LD341
            cpy #$05
            beq LD346
            ldy #$03
            lda (L002A),Y
            sta L002D
            dey
            lda (L002A),Y
            sta L002C
            dey
            lda (L002A),Y
            tax
            dey
            lda (L002A),Y
            sta L002A
            stx L002B
            lda #$40
            rts
LD341:      lda (L002A),Y
            jmp LCEBB
LD346:      dey
            lda (L002A),Y
            sta L0034
            dey
            lda (L002A),Y
            sta L0033
            dey
            lda (L002A),Y
            sta L0032
            dey
            lda (L002A),Y
            sta L002E
            dey
            lda (L002A),Y
            sta L0030
            sty L0035
            sty L002F
            ora L002E
            ora L0032
            ora L0033
            ora L0034
            beq LD371
            lda L002E
            ora #$80
LD371:      sta L0031
            lda #$FF
            rts
LD376:      cpy #$80
            beq LD399
            ldy #$03
            lda (L002A),Y
            sta L0036
            beq LD398
            ldy #$01
            lda (L002A),Y
            sta L0038
            dey
            lda (L002A),Y
            sta L0037
            ldy L0036
LD38F:      dey
            lda (L0037),Y
            sta L2A00,Y
            tya
            bne LD38F
LD398:      rts
LD399:      lda L002B
            beq LD3B2
            ldy #$00
LD39F:      lda (L002A),Y
            sta L2A00,Y
            eor #$0D
            beq LD3AC
            iny
            bne LD39F
            tya
LD3AC:      sty L0036
            rts
            jsr LB2E1
LD3B2:      lda L002A
            jmp LCFB4
LD3B7:      ldy #$00
            sty L0008
            sty L0009
            ldx L0018
            stx L0038
            sty L0037
            ldx L000C
            cpx #$2B
            beq LD3F3
            ldx L000B
LD3CB:      jsr LA93A
            cmp #$0D
            bne LD3EB
            cpx L0037
            lda L000C
            sbc L0038
            bcc LD3F3
            jsr LA93A
            ora #$00
            bmi LD3F3
            sta L0009
            jsr LA93A
            sta L0008
            jsr LA93A
LD3EB:      cpx L0037
            lda L000C
            sbc L0038
            bcs LD3CB
LD3F3:      rts
            pla
            cld
            cli
            pla
            sec
            sbc #$01
            sta L004F
            pla
            sbc #$00
            sta L0050
            cmp #$A0
            bcc LD431
            cmp #$DF
            bcs LD431
            jsr LD3B7
            sty L0020
            lda (L004F),Y
            bne LD41B
            lda #$42
            sta L0016
            lda #$D4
            sta L0017
LD41B:      lda L0016
            sta L000B
            lda L0017
            sta L000C
            jsr LDD43
            tax
            stx L000A
            ldx #$FF
            stx L0028
            txs
            jmp LAB9B
LD431:      .byte $00,$FF
            .byte "External Error"
            .byte $00
            inc L003A,X
            .byte $E7,$9E,$F1,$22
            .byte " at line "
            .byte $22
            .byte ";"
            .byte $9E,$3A
            cpx #$8B
            sbc (L003A),Y
            cpx #$0D
            jsr LA819
            ldx #$03
LD460:      txa
            pha
            jsr LB2D8
            pla
            tax
            dex
            bne LD460
            beq LD47B
            jsr LA819
            ldx #$0D
LD471:      txa
            pha
            jsr LB2D8
            pla
            tax
            dex
            bne LD471
LD47B:      jsr LB822
            jmp LAB93
            jsr LA819
            jsr LB822
            ldy L002A
            dey
            sty L0023
            jmp LAB93
LD48F:      jmp LAC06
LD492:      jsr LBB03
LD495:      jsr LDE14
LD498:      lda L0039
            cmp #$05
            beq LD4C1
            lda L0027
            beq LD48F
            bpl LD4A7
            jsr LC3BE
LD4A7:      ldy #$00
            lda L002A
            sta (L0037),Y
            lda L0039
            beq LD4C0
            lda L002B
            iny
            sta (L0037),Y
            lda L002C
            iny
            sta (L0037),Y
            lda L002D
            iny
            sta (L0037),Y
LD4C0:      rts
LD4C1:      lda L0027
            beq LD48F
            bmi LD4CA
            jsr LC298
LD4CA:      ldy #$00
            lda L0030
            sta (L0037),Y
            iny
            lda L002E
            and #$80
            sta L002E
            lda L0031
            and #$7F
            ora L002E
            sta (L0037),Y
            iny
            lda L0032
            sta (L0037),Y
            iny
            lda L0033
            sta (L0037),Y
            iny
            lda L0034
            sta (L0037),Y
            rts
LD4EF:      sta L0037
            cmp #$80
            bcc LD539
            lda #$69
            sta L0038
            lda #$A0
            sta L0039
            sty L003A
LD4FF:      ldy #$00
LD501:      iny
            lda (L0038),Y
            bpl LD501
            cmp L0037
            beq LD517
            iny
            tya
            sec
            adc L0038
            sta L0038
            bcc LD4FF
            inc L0039
            bcs LD4FF
LD517:      ldy #$00
LD519:      lda (L0038),Y
            bmi LD523
            jsr LD539
            iny
            bne LD519
LD523:      ldy L003A
            rts
LD526:      pha
            lsr A
            lsr A
            lsr A
            lsr A
            jsr LD531
            pla
            and #$0F
LD531:      cmp #$0A
            bcc LD537
            adc #$06
LD537:      adc #$30
LD539:      cmp #$0D
            bne LD548
            jsr LFFF4
            jmp LDC31
LD543:      jsr LD526
LD546:      lda #$20
LD548:      pha
            lda L0023
            cmp L001E
            bcs LD552
            jsr LDC2E
LD552:      pla
            inc L001E
            jmp (L0208)
LD558:      and L001F
            beq LD56A
            txa
            beq LD56A
            bmi LD546
LD561:      jsr LD546
            jsr LD539
            dex
            bne LD561
LD56A:      rts
LD56B:      inc L000A
            jsr LBAF7
            jsr LB81C
            jsr LB2EC
            lda L002A
            sta L001F
            jmp LAAEE
            iny
            lda (L000B),Y
            cmp #$4F
            beq LD56B
            lda #$00
            sta L003B
            sta L003C
            jsr LCEA9
            jsr LB7A9
            php
            jsr LDD9D
            lda #$FF
            sta L002A
            lda #$7F
            sta L002B
            plp
            bcc LD5B0
            jsr LAA8F
            cmp #$2C
            beq LD5B9
            jsr LDDF3
            jsr LDD9D
            dec L000A
            bpl LD5BC
LD5B0:      jsr LAA8F
            cmp #$2C
            beq LD5B9
            dec L000A
LD5B9:      jsr LB7A9
LD5BC:      lda L002A
            sta L0031
            lda L002B
            sta L0032
            jsr LB827
            jsr LDE79
            jsr LDDF3
            jsr LB94A
            lda L003D
            sta L000B
            lda L003E
            sta L000C
            bcc LD5F0
            dey
            bcs LD5E3
LD5DD:      jsr LDC2E
            jsr LB83D
LD5E3:      lda (L000B),Y
            sta L002B
            iny
            lda (L000B),Y
            sta L002A
            iny
            iny
            sty L000A
LD5F0:      lda L002A
            clc
            sbc L0031
            lda L002B
            sbc L0032
            bcc LD5FE
            jmp LAAEE
LD5FE:      jsr LB8FD
            ldx #$FF
            stx L004D
            lda #$01
            jsr LD558
            ldx L003B
            lda #$02
            jsr LD558
            ldx L003C
            lda #$04
            jsr LD558
LD618:      ldy L000A
LD61A:      lda (L000B),Y
            cmp #$0D
            beq LD5DD
            cmp #$22
            bne LD632
            lda #$FF
            eor L004D
            sta L004D
            lda #$22
LD62C:      jsr LD539
            iny
            bne LD61A
LD632:      bit L004D
            bpl LD62C
            cmp #$8D
            bne LD649
            jsr LB7B5
            sty L000A
            lda #$00
            sta L0014
            jsr LB8F9
            jmp LD618
LD649:      cmp #$E3
            bne LD64F
            inc L003B
LD64F:      cmp #$ED
            bne LD659
            ldx L003B
            beq LD659
            dec L003B
LD659:      cmp #$F5
            bne LD65F
            inc L003C
LD65F:      cmp #$FD
            bne LD669
            ldx L003C
            beq LD669
            dec L003C
LD669:      jsr LD4EF
            iny
            bne LD61A
LD66F:      .byte $00
            jsr L6F4E
            jsr L00E3
LD676:      jsr LB593
            bne LD684
            ldx L0026
            beq LD66F
            bcs LD6B8
LD681:      jmp LB7F4
LD684:      bcs LD681
            ldx L0026
            beq LD66F
LD68A:      lda L002A
            cmp L28F1,X
            bne LD69F
            lda L002B
            cmp L28F2,X
            bne LD69F
            lda L002C
            cmp L28F3,X
            beq LD6B8
LD69F:      txa
            sec
            sbc #$0F
            tax
            stx L0026
            bne LD68A
            .byte $00,$21
            .byte "Can't match "
            .byte $E3,$00
LD6B8:      lda L28F1,X
            sta L002A
            lda L28F2,X
            sta L002B
            ldy L28F3,X
            cpy #$05
            beq LD747
            ldy #$00
            lda (L002A),Y
            adc L28F4,X
            sta (L002A),Y
            sta L0037
            iny
            lda (L002A),Y
            adc L28F5,X
            sta (L002A),Y
            sta L0038
            iny
            lda (L002A),Y
            adc L28F6,X
            sta (L002A),Y
            sta L0039
            iny
            lda (L002A),Y
            adc L28F7,X
            sta (L002A),Y
            tay
            lda L0037
            sec
            sbc L28F9,X
            sta L0037
            lda L0038
            sbc L28FA,X
            sta L0038
            lda L0039
            sbc L28FB,X
            sta L0039
            tya
            sbc L28FC,X
            ora L0037
            ora L0038
            ora L0039
            beq LD722
            tya
            eor L28F7,X
            eor L28FC,X
            bpl LD720
            bcs LD722
            bcc LD732
LD720:      bcs LD732
LD722:      ldy L28FE,X
            lda L28FF,X
            sty L000B
            sta L000C
            jsr LB847
            jmp LAB9B
LD732:      lda L0026
            sec
            sbc #$0F
            sta L0026
            ldy L001B
            sty L000A
            jsr LAA8F
            cmp #$2C
            bne LD782
            jmp LD676
LD747:      jsr LD346
            lda L0026
            clc
            adc #$F4
            sta L004B
            lda #$29
            sta L004C
            jsr LC4DA
            lda L002A
            sta L0037
            lda L002B
            sta L0038
            jsr LD4CA
            lda L0026
            sta L0027
            clc
            adc #$F9
            sta L004B
            lda #$29
            sta L004C
            jsr LBA39
            beq LD722
            lda L28F5,X
            bmi LD77E
            bcs LD722
            bcc LD732
LD77E:      bcc LD722
            bcs LD732
LD782:      jmp LAB8E
LD785:      .byte $00,$22,$E3
            .byte " variable"
LD791:      .byte $00,$23
            .byte "Too many "
            .byte $E3
            .byte "s"
LD79E:      .byte $00
            .byte "$No "
            clv
            .byte $00
            jsr LB54C
            beq LD785
            bcs LD785
            jsr LDD9D
            jsr LB811
            jsr LD492
            ldy L0026
            cpy #$96
            bcs LD791
            lda L0037
            sta L2900,Y
            lda L0038
            sta L2901,Y
            lda L0039
            sta L2902,Y
            tax
            jsr LAA84
            cmp #$B8
            bne LD79E
            cpx #$05
            beq LD830
            jsr LB2DB
            ldy L0026
            lda L002A
            sta L2908,Y
            lda L002B
            sta L2909,Y
            lda L002C
            sta L290A,Y
            lda L002D
            sta L290B,Y
            lda #$01
            jsr LCEA9
            jsr LAA84
            cmp #$88
            bne LD800
            jsr LB2DB
            ldy L001B
LD800:      sty L000A
            ldy L0026
            lda L002A
            sta L2903,Y
            lda L002B
            sta L2904,Y
            lda L002C
            sta L2905,Y
            lda L002D
            sta L2906,Y
LD818:      jsr LB85A
            ldy L0026
            lda L000B
            sta L290D,Y
            lda L000C
            sta L290E,Y
            clc
            tya
            adc #$0F
            sta L0026
            jmp LAB9B
LD830:      jsr LBB03
            jsr LB2FB
            lda L0026
            clc
            adc #$08
            sta L004B
            lda #$29
            sta L004C
            jsr LC367
            jsr LC673
            jsr LAA84
            cmp #$88
            bne LD856
            jsr LBB03
            jsr LB2FB
            ldy L001B
LD856:      sty L000A
            lda L0026
            clc
            adc #$03
            sta L004B
            lda #$29
            sta L004C
            jsr LC367
            jmp LD818
            jsr LD97B
LD86C:      jsr LB827
            ldy L0025
            cpy #$1A
            bcs LD883
            lda L000B
            sta L29CC,Y
            lda L000C
            sta L29E6,Y
            inc L0025
            bcc LD8B3
LD883:      .byte $00,$25
            .byte "Too many "
            .byte $E4
            .byte "s"
LD890:      .byte $00,$26
            .byte "No "
            cpx $00
            jsr LB827
            ldx L0025
            beq LD890
            dec L0025
            ldy L29CB,X
            lda L29E5,X
            sty L000B
            sta L000C
            jmp LAB93
            jsr LD97B
            jsr LB827
LD8B3:      lda L0020
            beq LD8BA
            jsr LB8DF
LD8BA:      ldy L003D
            lda L003E
LD8BE:      sty L000B
            sta L000C
            jmp LAB9B
LD8C5:      jsr LB827
            lda #$42
            sta L0016
            lda #$D4
            sta L0017
            jmp LAB93
LD8D3:      jsr LAA8F
            cmp #$87
            beq LD8C5
            ldy L000A
            dey
            jsr LB83D
            lda L000B
            sta L0016
            lda L000C
            sta L0017
            jmp LAB75
LD8EB:      .byte $00,$27,$EE
            .byte " syntax"
            .byte $00
            jsr LAA8F
            cmp #$85
            beq LD8D3
            dec L000A
            jsr LBAF7
            jsr LB2EE
            ldy L001B
            iny
            sty L000A
            cpx #$E5
            beq LD912
            cpx #$E4
            bne LD8EB
LD912:      txa
            pha
            lda L002B
            ora L002C
            ora L002D
            bne LD95E
            ldx L002A
            beq LD95E
            dex
            beq LD93D
            ldy L000A
LD925:      lda (L000B),Y
            iny
            cmp #$0D
            beq LD95E
            cmp #$3A
            beq LD95E
            cmp #$8B
            beq LD95E
            cmp #$2C
            bne LD925
            dex
            bne LD925
            sty L000A
LD93D:      jsr LD97B
            pla
            cmp #$E4
            beq LD94B
            jsr LB847
            jmp LD8B3
LD94B:      ldy L000A
LD94D:      lda (L000B),Y
            iny
            cmp #$0D
            beq LD958
            cmp #$3A
            bne LD94D
LD958:      dey
            sty L000A
            jmp LD86C
LD95E:      ldy L000A
            pla
LD961:      lda (L000B),Y
            iny
            cmp #$8B
            beq LD976
            cmp #$0D
            bne LD961
            .byte $00,$28,$EE
            .byte " range"
            .byte $00
LD976:      sty L000A
            jmp LB8BD
LD97B:      jsr LB7A9
            bcs LD990
            jsr LBAF7
            jsr LB2EE
            lda L001B
            sta L000A
            lda L002B
            and #$7F
            sta L002B
LD990:      jsr LB94A
            bcs LD996
            rts
LD996:      .byte $00,$29
            .byte "No such line"
            .byte $00
LD9A5:      jmp LAC06
LD9A8:      jmp LB7F4
LD9AB:      sty L000A
            jmp LAB90
LD9B0:      dec L000A
            jsr LDFAC
            lda L001B
            sta L000A
            sty L004D
LD9BB:      jsr LAA8F
            cmp #$2C
            bne LD9AB
            lda L004D
            pha
            jsr LB54C
            beq LD9A8
            lda L001B
            sta L000A
            pla
            sta L004D
            php
            jsr LDD9D
            ldy L004D
            jsr LFFD4
            sta L0027
            plp
            bcc LD9FA
            lda L0027
            bne LD9A5
            jsr LFFD4
            sta L0036
            tax
            beq LD9F4
LD9EB:      jsr LFFD4
            sta L29FF,X
            dex
            bne LD9EB
LD9F4:      jsr LAC16
            jmp LD9BB
LD9FA:      lda L0027
            beq LD9A5
            bmi LDA0C
            ldx #$03
LDA02:      jsr LFFD4
            sta L002A,X
            dex
            bpl LDA02
            bmi LDA1A
LDA0C:      ldx #$04
LDA0E:      jsr LFFD4
            sta L286C,X
            dex
            bpl LDA0E
            jsr LC38C
LDA1A:      jsr LD495
            jmp LD9BB
LDA20:      pla
            pla
            jmp LAB90
            jsr LAA8F
            cmp #$23
            beq LD9B0
            cmp #$86
            beq LDA33
            dec L000A
            clc
LDA33:      ror L004D
            lsr L004D
            lda #$FF
            sta L004E
LDA3B:      jsr LAE93
            bcs LDA4A
LDA40:      jsr LAE93
            bcc LDA40
            ldx #$FF
            stx L004E
            clc
LDA4A:      php
            asl L004D
            plp
            ror L004D
            cmp #$2C
            beq LDA3B
            cmp #$3B
            beq LDA3B
            dec L000A
            lda L004D
            pha
            lda L004E
            pha
            jsr LB54C
            beq LDA20
            pla
            sta L004E
            pla
            sta L004D
            lda L001B
            sta L000A
            php
            bit L004D
            bvs LDA7A
            lda L004E
            cmp #$FF
            bne LDA91
LDA7A:      bit L004D
            bpl LDA83
            lda #$3F
            jsr LD539
LDA83:      jsr LDBDD
            sty L0036
            asl L004D
            clc
            ror L004D
            bit L004D
            bvs LDAAE
LDA91:      sta L001B
            lda #$00
            sta L0019
            lda #$2A
            sta L001A
            jsr LCD81
LDA9E:      jsr LAA84
            cmp #$2C
            beq LDAAB
            cmp #$0D
            bne LDA9E
            ldy #$FE
LDAAB:      iny
            sty L004E
LDAAE:      plp
            bcs LDABD
            jsr LDD9D
            jsr LCC0B
            jsr LD495
            jmp LDA3B
LDABD:      lda #$00
            sta L0027
            jsr LAC19
            jmp LDA3B
            ldy #$00
            sty L003D
            ldy L0018
            sty L003E
            jsr LAA8F
            dec L000A
            cmp #$3A
            beq LDAE8
            cmp #$0D
            beq LDAE8
            cmp #$8B
            beq LDAE8
            jsr LD97B
            ldy #$01
            jsr LDE5E
LDAE8:      jsr LB827
            lda L003D
            sta L001C
            lda L003E
            sta L001D
            jmp LAB93
LDAF6:      jsr LAA8F
            cmp #$2C
            beq LDB00
            jmp LAB8E
LDB00:      jsr LB54C
            beq LDAF6
            bcs LDB13
            jsr LDB31
            jsr LDD9D
            jsr LD492
            jmp LDB21
LDB13:      jsr LDB31
            jsr LDD9D
            jsr LCD81
            sta L0027
            jsr LAC16
LDB21:      clc
            lda L001B
            adc L0019
            sta L001C
            lda L001A
            adc #$00
            sta L001D
            jmp LDAF6
LDB31:      lda L001B
            sta L000A
            lda L001C
            sta L0019
            lda L001D
            sta L001A
            ldy #$00
            sty L001B
            jsr LAA84
            cmp #$2C
            beq LDB91
            cmp #$DC
            beq LDB91
            cmp #$0D
            beq LDB5B
LDB50:      jsr LAA84
            cmp #$2C
            beq LDB91
            cmp #$0D
            bne LDB50
LDB5B:      ldy L001B
            lda (L0019),Y
            bmi LDB7D
            iny
            iny
            lda (L0019),Y
            tax
LDB66:      iny
            lda (L0019),Y
            cmp #$20
            beq LDB66
            cmp #$DC
            beq LDB8E
            txa
            clc
            adc L0019
            sta L0019
            bcc LDB5B
            inc L001A
            bcs LDB5B
LDB7D:      .byte $00,$2A
            .byte "Out of "
            .byte $DC
LDB87:      .byte $00,$2B
            .byte "No "
            .byte $F5,$00
LDB8E:      iny
            sty L001B
LDB91:      rts
            jsr LBAF7
            jsr LB81C
            jsr LB2EC
            ldx L0024
            beq LDB87
            lda L002A
            ora L002B
            ora L002C
            ora L002D
            beq LDBAE
            dec L0024
            jmp LAB93
LDBAE:      ldy L29A3,X
            lda L29B7,X
            jmp LD8BE
LDBB7:      .byte $00,$2C
            .byte "Too many "
            .byte $F5,$73,$00
            ldx L0024
            cpx #$14
            bcs LDBB7
            jsr LB83D
            lda L000B
            sta L29A4,X
            lda L000C
            sta L29B8,X
            inc L0024
            jmp LAB9B
LDBDD:      ldy #$00
            lda #$2A
            bne LDBEA
LDBE3:      jsr LD539
            ldy #$00
            lda #$2B
LDBEA:      sty L0037
            sta L0038
LDBEE:      jsr LFFE3
            cmp #$1B
            beq LDC2B
            cmp #$7F
            bne LDC04
            cpy #$00
            beq LDBEE
            jsr LFFF4
            dey
            jmp LDBEE
LDC04:      cmp #$15
            bne LDC15
            tya
            beq LDBEE
            lda #$7F
LDC0D:      jsr LFFF4
            dey
            bne LDC0D
            beq LDBEE
LDC15:      sta (L0037),Y
            cmp #$0D
            beq LDC2E
            cpy #$EE
            bcs LDC28
            cmp #$20
            bcs LDC24
            dey
LDC24:      iny
            jsr LFFF4
LDC28:      jmp LDBEE
LDC2B:      jmp LB803
LDC2E:      jsr LFFED
LDC31:      lda #$00
            sta L001E
            rts
LDC36:      jsr LB94A
            bcs LDC89
            lda L003D
            sbc #$02
            sta L0037
            sta L003D
            sta L0012
            lda L003E
            sbc #$00
            sta L0038
            sta L0013
            sta L003E
            ldy #$03
            lda (L0037),Y
            clc
            adc L0037
            sta L0037
            bcc LDC5C
            inc L0038
LDC5C:      ldy #$00
LDC5E:      lda (L0037),Y
            sta (L0012),Y
            cmp #$0D
            beq LDC6F
LDC66:      iny
            bne LDC5E
            inc L0038
            inc L0013
            bne LDC5E
LDC6F:      iny
            bne LDC76
            inc L0038
            inc L0013
LDC76:      lda (L0037),Y
            sta (L0012),Y
            bmi LDC85
            jsr LDC8A
            jsr LDC8A
            jmp LDC66
LDC85:      jsr LDE9C
            clc
LDC89:      rts
LDC8A:      iny
            bne LDC91
            inc L0013
            inc L0038
LDC91:      lda (L0037),Y
            sta (L0012),Y
            rts
LDC96:      sty L003B
            jsr LDC36
            ldy #$2B
            sty L003C
            ldy #$00
            lda #$0D
            cmp (L003B),Y
            beq LDD19
LDCA7:      iny
            cmp (L003B),Y
            bne LDCA7
            iny
            iny
            iny
            sty L003F
            inc L003F
            lda L0012
            sta L0039
            lda L0013
            sta L003A
            jsr LDE9C
            sta L0037
            lda L0013
            sta L0038
            dey
            lda L0006
            cmp L0012
            lda L0007
            sbc L0013
            bcs LDCDF
            jsr LDE79
            jsr LDD29
            .byte $00,$00,$86
            .byte " space"
            .byte $00
LDCDF:      lda (L0039),Y
            sta (L0037),Y
            tya
            bne LDCEA
            dec L003A
            dec L0038
LDCEA:      dey
            tya
            adc L0039
            ldx L003A
            bcc LDCF3
            inx
LDCF3:      cmp L003D
            txa
            sbc L003E
            bcs LDCDF
            sec
            ldy #$01
            lda L002B
            sta (L003D),Y
            iny
            lda L002A
            sta (L003D),Y
            iny
            lda L003F
            sta (L003D),Y
            jsr LDE5F
            ldy #$FF
LDD10:      iny
            lda (L003B),Y
            sta (L003D),Y
            cmp #$0D
            bne LDD10
LDD19:      rts
            jsr LB827
LDD1D:      jsr LDD29
            lda L0018
            sta L000C
            stx L000B
            jmp LAB03
LDD29:      lda L0012
            sta $00
            sta L0002
            lda L0013
            sta L0001
            sta L0003
            jsr LDD43
LDD38:      ldx #$80
            lda #$00
LDD3C:      sta L287F,X
            dex
            bne LDD3C
            rts
LDD43:      lda L0018
            sta L001D
            lda L0006
            sta L0004
            lda L0007
            sta L0005
            lda #$00
            sta L0024
            sta L0026
            sta L0025
            sta L001C
            rts
LDD5A:      lda L0004
            sec
            sbc #$05
            jsr LDE37
            ldy #$00
            lda L0030
            sta (L0004),Y
            iny
            lda L002E
            and #$80
            sta L002E
            lda L0031
            and #$7F
            ora L002E
            sta (L0004),Y
            iny
            lda L0032
            sta (L0004),Y
            iny
            lda L0033
            sta (L0004),Y
            iny
            lda L0034
            sta (L0004),Y
            rts
LDD87:      lda L0004
            clc
            sta L004B
            adc #$05
            sta L0004
            lda L0005
            sta L004C
            adc #$00
            sta L0005
            rts
LDD99:      beq LDDBB
            bmi LDD5A
LDD9D:      lda L0004
            sec
            sbc #$04
            jsr LDE37
            ldy #$03
            lda L002D
            sta (L0004),Y
            dey
            lda L002C
            sta (L0004),Y
            dey
            lda L002B
            sta (L0004),Y
            dey
            lda L002A
            sta (L0004),Y
            rts
LDDBB:      clc
            lda L0004
            sbc L0036
            jsr LDE37
            ldy L0036
            beq LDDCF
LDDC7:      lda L29FF,Y
            sta (L0004),Y
            dey
            bne LDDC7
LDDCF:      lda L0036
            sta (L0004),Y
            rts
LDDD4:      ldy #$00
            lda (L0004),Y
            sta L0036
            beq LDDE5
            tay
LDDDD:      lda (L0004),Y
            sta L29FF,Y
            dey
            bne LDDDD
LDDE5:      ldy #$00
            lda (L0004),Y
            sec
LDDEA:      adc L0004
            sta L0004
            bcc LDE13
            inc L0005
            rts
LDDF3:      ldy #$03
            lda (L0004),Y
            sta L002D
            dey
            lda (L0004),Y
            sta L002C
            dey
            lda (L0004),Y
            sta L002B
            dey
            lda (L0004),Y
            sta L002A
LDE08:      clc
            lda L0004
            adc #$04
            sta L0004
            bcc LDE13
            inc L0005
LDE13:      rts
LDE14:      ldx #$37
LDE16:      ldy #$03
            lda (L0004),Y
            sta L0003,X
            dey
            lda (L0004),Y
            sta L0002,X
            dey
            lda (L0004),Y
            sta L0001,X
            dey
            lda (L0004),Y
            sta $00,X
            clc
            lda L0004
            adc #$04
            sta L0004
            bcc LDE13
            inc L0005
            rts
LDE37:      sta L0004
            bcs LDE3D
            dec L0005
LDE3D:      ldy L0005
            cpy L0003
            bcc LDE4A
            bne LDE49
            cmp L0002
            bcc LDE4A
LDE49:      rts
LDE4A:      jmp LACAF
LDE4D:      lda L002A
            sta $00,X
            lda L002B
            sta L0001,X
            lda L002C
            sta L0002,X
            lda L002D
            sta L0003,X
            rts
LDE5E:      clc
LDE5F:      tya
            adc L003D
            sta L003D
            bcc LDE68
            inc L003E
LDE68:      ldy #$01
            rts
LDE6B:      jsr LDF00
            tay
            lda #$FF
            sta L003B
            ldx #$37
            sec
            jsr LFFE0
LDE79:      lda L0018
            sta L0013
            ldy #$00
            sty L0012
            iny
LDE82:      dey
            lda (L0012),Y
            cmp #$0D
            bne LDEA8
            iny
            lda (L0012),Y
            bmi LDE9A
            ldy #$03
            lda (L0012),Y
            beq LDEA8
            clc
            jsr LDE9D
            bne LDE82
LDE9A:      iny
            clc
LDE9C:      tya
LDE9D:      adc L0012
            sta L0012
            bcc LDEA5
            inc L0013
LDEA5:      ldy #$01
            rts
LDEA8:      jsr LDFD2
            .byte $0D
            .byte "Bad program"
            .byte $0D
            nop
            jmp LAAEE
LDEBC:      lda #$00
            sta L0037
            lda #$2A
            sta L0038
LDEC4:      ldy L0036
            lda #$0D
            sta L2A00,Y
            rts
            jsr LDEF5
            jsr LDED9
            jmp LAB93
LDED5:      stx L0037
            sty L0038
LDED9:      ldy #$FF
LDEDB:      iny
            lda (L0037),Y
            cmp #$2A
            beq LDEDB
            ldx #$00
LDEE4:      lda (L0037),Y
            sta L0100,X
            iny
            inx
            cmp #$0D
            bne LDEE4
            jmp LFFF7
LDEF2:      jmp LAC06
LDEF5:      jsr LBAF7
            bne LDEF2
            jsr LDEBC
            jmp LB81C
LDF00:      jsr LDEF5
            dey
            sty L0039
            lda L0018
            sta L003A
            rts
            jsr LDE79
            lda L0012
            sta L003F
            lda L0013
            sta L0040
            lda #$1F
            sta L003B
            lda #$A0
            sta L003C
            lda L0018
            sta L003E
            jsr LDF00
            sty L003D
            tay
            ldx #$37
            sec
            jsr LFFDD
            jmp LAB93
            jsr LDE6B
            jmp LAAEB
            jsr LDE6B
            jmp LDD1D
            jsr LDFAC
            pha
            jsr LB7DD
            jsr LB2EC
            pla
            tay
            ldx #$2A
            jsr LFFD7
            jmp LAB93
            sec
            lda #$00
            rol A
            pha
            jsr LDFB8
            ldx #$2A
            pla
            jsr LFFDA
            lda #$40
            rts
            jsr LDFAC
            pha
            jsr LAAA6
            jsr LB819
            jsr LB2EC
            pla
            tay
            lda L002A
            jsr LFFD1
            jmp LAB93
            jsr LDFB8
            jsr LFFD4
            jmp LCEA9
            sec
            bcs LDF89
            clc
            bcc LDF89
            sec
LDF89:      php
            jsr LCDC0
            bne LDF9B
            jsr LDEBC
            ldx #$37
            plp
            jsr LFFCE
            jmp LCEA9
LDF9B:      jmp LAC06
            jsr LDFAC
            jsr LB822
            ldy L002A
            jsr LFFCB
            jmp LAB93
LDFAC:      lda L000A
            sta L001B
            lda L000B
            sta L0019
            lda L000C
            sta L001A
LDFB8:      jsr LAA84
            cmp #$23
            bne LDFC6
            jsr LB2E1
            ldy L002A
            tya
LDFC5:      rts
LDFC6:      .byte $00,$2D
            .byte "Missing #"
            .byte $00
LDFD2:      pla
            sta L0037
            pla
            sta L0038
            ldy #$00
            beq LDFDF
LDFDC:      jsr LFFE9
LDFDF:      jsr LA943
            bpl LDFDC
            jmp (L0037)
            jsr LB827
            jsr LDC2E
            ldy #$01
LDFEF:      lda (L004F),Y
            beq LDFF9
            jsr LD4EF
            iny
            bne LDFEF
LDFF9:      jmp LAB93
            .byte "2.00"
