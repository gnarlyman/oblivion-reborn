ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x0052BC50
; VA: 0x0052BC50  size: 0x300
; ============================================================
0x0052BC50  57                    push   edi
0x0052BC51  8b7c2408              mov    edi, dword ptr [esp + 8]
0x0052BC55  83ff08                cmp    edi, 8
0x0052BC58  0f8790000000          ja     0x52bcee  ; -> sub_52BCEE
0x0052BC5E  83ff01                cmp    edi, 1
0x0052BC61  56                    push   esi
0x0052BC62  753b                  jne    0x52bc9f  ; -> sub_52BC9F
0x0052BC64  0fb78100010000        movzx  eax, word ptr [ecx + 0x100]
0x0052BC6B  663dffff              cmp    ax, 0xffff
0x0052BC6F  751c                  jne    0x52bc8d  ; -> sub_52BC8D
0x0052BC71  8b81fc000000          mov    eax, dword ptr [ecx + 0xfc]
0x0052BC77  8d7001                lea    esi, [eax + 1]
0x0052BC7A  8d9b00000000          lea    ebx, [ebx]
0x0052BC80  8a10                  mov    dl, byte ptr [eax]
0x0052BC82  83c001                add    eax, 1
0x0052BC85  84d2                  test   dl, dl
0x0052BC87  75f7                  jne    0x52bc80  ; -> sub_52BC80
0x0052BC89  2bc6                  sub    eax, esi
0x0052BC8B  eb03                  jmp    0x52bc90  ; -> sub_52BC90
0x0052BC8D  0fb7c0                movzx  eax, ax
0x0052BC90  85c0                  test   eax, eax
0x0052BC92  754b                  jne    0x52bcdf  ; -> sub_52BCDF
0x0052BC94  5e                    pop    esi
0x0052BC95  8d8110010000          lea    eax, [ecx + 0x110]
0x0052BC9B  5f                    pop    edi
0x0052BC9C  c20400                ret    4
0x0052BC9F  83ff02                cmp    edi, 2
0x0052BCA2  753b                  jne    0x52bcdf  ; -> sub_52BCDF
0x0052BCA4  0fb78118010000        movzx  eax, word ptr [ecx + 0x118]
0x0052BCAB  663dffff              cmp    ax, 0xffff
0x0052BCAF  751c                  jne    0x52bccd  ; -> sub_52BCCD
0x0052BCB1  8b8114010000          mov    eax, dword ptr [ecx + 0x114]
0x0052BCB7  8d7001                lea    esi, [eax + 1]
0x0052BCBA  8d9b00000000          lea    ebx, [ebx]
0x0052BCC0  8a10                  mov    dl, byte ptr [eax]
0x0052BCC2  83c001                add    eax, 1
0x0052BCC5  84d2                  test   dl, dl
0x0052BCC7  75f7                  jne    0x52bcc0  ; -> sub_52BCC0
0x0052BCC9  2bc6                  sub    eax, esi
0x0052BCCB  eb03                  jmp    0x52bcd0  ; -> sub_52BCD0
0x0052BCCD  0fb7c0                movzx  eax, ax
0x0052BCD0  85c0                  test   eax, eax
0x0052BCD2  750b                  jne    0x52bcdf  ; -> sub_52BCDF
0x0052BCD4  5e                    pop    esi
0x0052BCD5  8d81f8000000          lea    eax, [ecx + 0xf8]
0x0052BCDB  5f                    pop    edi
0x0052BCDC  c20400                ret    4
0x0052BCDF  8d047f                lea    eax, [edi + edi*2]
0x0052BCE2  5e                    pop    esi
0x0052BCE3  8d84c1e0000000        lea    eax, [ecx + eax*8 + 0xe0]
0x0052BCEA  5f                    pop    edi
0x0052BCEB  c20400                ret    4
0x0052BCEE  33c0                  xor    eax, eax
0x0052BCF0  5f                    pop    edi
0x0052BCF1  c20400                ret    4
0x0052BCF4  cc                    int3   
0x0052BCF5  cc                    int3   
0x0052BCF6  cc                    int3   
0x0052BCF7  cc                    int3   
0x0052BCF8  cc                    int3   
0x0052BCF9  cc                    int3   
0x0052BCFA  cc                    int3   
0x0052BCFB  cc                    int3   
0x0052BCFC  cc                    int3   
0x0052BCFD  cc                    int3   
0x0052BCFE  cc                    int3   
0x0052BCFF  cc                    int3   
0x0052BD00  57                    push   edi
0x0052BD01  8b7c2408              mov    edi, dword ptr [esp + 8]
0x0052BD05  83ff08                cmp    edi, 8
0x0052BD08  0f8790000000          ja     0x52bd9e  ; -> sub_52BD9E
0x0052BD0E  83ff01                cmp    edi, 1
0x0052BD11  56                    push   esi
0x0052BD12  753b                  jne    0x52bd4f  ; -> sub_52BD4F
0x0052BD14  0fb781cc010000        movzx  eax, word ptr [ecx + 0x1cc]
0x0052BD1B  663dffff              cmp    ax, 0xffff
0x0052BD1F  751c                  jne    0x52bd3d  ; -> sub_52BD3D
0x0052BD21  8b81c8010000          mov    eax, dword ptr [ecx + 0x1c8]
0x0052BD27  8d7001                lea    esi, [eax + 1]
0x0052BD2A  8d9b00000000          lea    ebx, [ebx]
0x0052BD30  8a10                  mov    dl, byte ptr [eax]
0x0052BD32  83c001                add    eax, 1
0x0052BD35  84d2                  test   dl, dl
0x0052BD37  75f7                  jne    0x52bd30  ; -> sub_52BD30
0x0052BD39  2bc6                  sub    eax, esi
0x0052BD3B  eb03                  jmp    0x52bd40  ; -> sub_52BD40
0x0052BD3D  0fb7c0                movzx  eax, ax
0x0052BD40  85c0                  test   eax, eax
0x0052BD42  754b                  jne    0x52bd8f  ; -> sub_52BD8F
0x0052BD44  5e                    pop    esi
0x0052BD45  8d81d0010000          lea    eax, [ecx + 0x1d0]
0x0052BD4B  5f                    pop    edi
0x0052BD4C  c20400                ret    4
0x0052BD4F  83ff02                cmp    edi, 2
0x0052BD52  753b                  jne    0x52bd8f  ; -> sub_52BD8F
0x0052BD54  0fb781d8010000        movzx  eax, word ptr [ecx + 0x1d8]
0x0052BD5B  663dffff              cmp    ax, 0xffff
0x0052BD5F  751c                  jne    0x52bd7d  ; -> sub_52BD7D
0x0052BD61  8b81d4010000          mov    eax, dword ptr [ecx + 0x1d4]
0x0052BD67  8d7001                lea    esi, [eax + 1]
0x0052BD6A  8d9b00000000          lea    ebx, [ebx]
0x0052BD70  8a10                  mov    dl, byte ptr [eax]
0x0052BD72  83c001                add    eax, 1
0x0052BD75  84d2                  test   dl, dl
0x0052BD77  75f7                  jne    0x52bd70  ; -> sub_52BD70
0x0052BD79  2bc6                  sub    eax, esi
0x0052BD7B  eb03                  jmp    0x52bd80  ; -> sub_52BD80
0x0052BD7D  0fb7c0                movzx  eax, ax
0x0052BD80  85c0                  test   eax, eax
0x0052BD82  750b                  jne    0x52bd8f  ; -> sub_52BD8F
0x0052BD84  5e                    pop    esi
0x0052BD85  8d81c4010000          lea    eax, [ecx + 0x1c4]
0x0052BD8B  5f                    pop    edi
0x0052BD8C  c20400                ret    4
0x0052BD8F  8d047f                lea    eax, [edi + edi*2]
0x0052BD92  5e                    pop    esi
0x0052BD93  8d8481b8010000        lea    eax, [ecx + eax*4 + 0x1b8]
0x0052BD9A  5f                    pop    edi
0x0052BD9B  c20400                ret    4
0x0052BD9E  33c0                  xor    eax, eax
0x0052BDA0  5f                    pop    edi
0x0052BDA1  c20400                ret    4
0x0052BDA4  cc                    int3   
0x0052BDA5  cc                    int3   
0x0052BDA6  cc                    int3   
0x0052BDA7  cc                    int3   
0x0052BDA8  cc                    int3   
0x0052BDA9  cc                    int3   
0x0052BDAA  cc                    int3   
0x0052BDAB  cc                    int3   
0x0052BDAC  cc                    int3   
0x0052BDAD  cc                    int3   
0x0052BDAE  cc                    int3   
0x0052BDAF  cc                    int3   
0x0052BDB0  8b442404              mov    eax, dword ptr [esp + 4]
0x0052BDB4  85c0                  test   eax, eax
0x0052BDB6  740a                  je     0x52bdc2  ; -> sub_52BDC2
0x0052BDB8  83f801                cmp    eax, 1
0x0052BDBB  7405                  je     0x52bdc2  ; -> sub_52BDC2
0x0052BDBD  33c0                  xor    eax, eax
0x0052BDBF  c20400                ret    4
0x0052BDC2  8d0440                lea    eax, [eax + eax*2]
0x0052BDC5  56                    push   esi
0x0052BDC6  8d34c1                lea    esi, [ecx + eax*8]
0x0052BDC9  0fb786b8000000        movzx  eax, word ptr [esi + 0xb8]
0x0052BDD0  663dffff              cmp    ax, 0xffff
0x0052BDD4  7518                  jne    0x52bdee  ; -> sub_52BDEE
0x0052BDD6  8b86b4000000          mov    eax, dword ptr [esi + 0xb4]
0x0052BDDC  57                    push   edi
0x0052BDDD  8d7801                lea    edi, [eax + 1]
0x0052BDE0  8a10                  mov    dl, byte ptr [eax]
0x0052BDE2  83c001                add    eax, 1
0x0052BDE5  84d2                  test   dl, dl
0x0052BDE7  75f7                  jne    0x52bde0  ; -> sub_52BDE0
0x0052BDE9  2bc7                  sub    eax, edi
0x0052BDEB  5f                    pop    edi
0x0052BDEC  eb03                  jmp    0x52bdf1  ; -> sub_52BDF1
0x0052BDEE  0fb7c0                movzx  eax, ax
0x0052BDF1  85c0                  test   eax, eax
0x0052BDF3  740a                  je     0x52bdff  ; -> sub_52BDFF
0x0052BDF5  8d86b0000000          lea    eax, [esi + 0xb0]
0x0052BDFB  5e                    pop    esi
0x0052BDFC  c20400                ret    4
0x0052BDFF  0fb781b8000000        movzx  eax, word ptr [ecx + 0xb8]
0x0052BE06  663dffff              cmp    ax, 0xffff
0x0052BE0A  7516                  jne    0x52be22  ; -> sub_52BE22
0x0052BE0C  8b81b4000000          mov    eax, dword ptr [ecx + 0xb4]
0x0052BE12  8d7001                lea    esi, [eax + 1]
0x0052BE15  8a10                  mov    dl, byte ptr [eax]
0x0052BE17  83c001                add    eax, 1
0x0052BE1A  84d2                  test   dl, dl
0x0052BE1C  75f7                  jne    0x52be15  ; -> sub_52BE15
0x0052BE1E  2bc6                  sub    eax, esi
0x0052BE20  eb03                  jmp    0x52be25  ; -> sub_52BE25
0x0052BE22  0fb7c0                movzx  eax, ax
0x0052BE25  85c0                  test   eax, eax
0x0052BE27  740a                  je     0x52be33  ; -> sub_52BE33
0x0052BE29  8d81b0000000          lea    eax, [ecx + 0xb0]
0x0052BE2F  5e                    pop    esi
0x0052BE30  c20400                ret    4
0x0052BE33  0fb781d0000000        movzx  eax, word ptr [ecx + 0xd0]
0x0052BE3A  663dffff              cmp    ax, 0xffff
0x0052BE3E  751d                  jne    0x52be5d  ; -> sub_52BE5D
0x0052BE40  8b81cc000000          mov    eax, dword ptr [ecx + 0xcc]
0x0052BE46  8d7001                lea    esi, [eax + 1]
0x0052BE49  8da42400000000        lea    esp, [esp]
0x0052BE50  8a10                  mov    dl, byte ptr [eax]
0x0052BE52  83c001                add    eax, 1
0x0052BE55  84d2                  test   dl, dl
0x0052BE57  75f7                  jne    0x52be50  ; -> sub_52BE50
0x0052BE59  2bc6                  sub    eax, esi
0x0052BE5B  eb03                  jmp    0x52be60  ; -> sub_52BE60
0x0052BE5D  0fb7c0                movzx  eax, ax
0x0052BE60  85c0                  test   eax, eax
0x0052BE62  740a                  je     0x52be6e  ; -> sub_52BE6E
0x0052BE64  8d81c8000000          lea    eax, [ecx + 0xc8]
0x0052BE6A  5e                    pop    esi
0x0052BE6B  c20400                ret    4
0x0052BE6E  33c0                  xor    eax, eax
0x0052BE70  5e                    pop    esi
0x0052BE71  c20400                ret    4
0x0052BE74  cc                    int3   
0x0052BE75  cc                    int3   
0x0052BE76  cc                    int3   
0x0052BE77  cc                    int3   
0x0052BE78  cc                    int3   
0x0052BE79  cc                    int3   
0x0052BE7A  cc                    int3   
0x0052BE7B  cc                    int3   
0x0052BE7C  cc                    int3   
0x0052BE7D  cc                    int3   
0x0052BE7E  cc                    int3   
0x0052BE7F  cc                    int3   
0x0052BE80  8b442408              mov    eax, dword ptr [esp + 8]
0x0052BE84  83f80f                cmp    eax, 0xf
0x0052BE87  0f8480000000          je     0x52bf0d  ; -> sub_52BF0D
0x0052BE8D  56                    push   esi
0x0052BE8E  8d70fe                lea    esi, [eax - 2]
0x0052BE91  83fe04                cmp    esi, 4
0x0052BE94  7603                  jbe    0x52be99  ; -> sub_52BE99
0x0052BE96  83ceff                or     esi, 0xffffffff
0x0052BE99  57                    push   edi
0x0052BE9A  8b7c240c              mov    edi, dword ptr [esp + 0xc]
0x0052BE9E  83ff01                cmp    edi, 1
0x0052BEA1  7763                  ja     0x52bf06  ; -> sub_52BF06
0x0052BEA3  83fe04                cmp    esi, 4
0x0052BEA6  775e                  ja     0x52bf06  ; -> sub_52BF06
0x0052BEA8  8d04be                lea    eax, [esi + edi*4]
0x0052BEAB  03c7                  add    eax, edi
0x0052BEAD  8d0440                lea    eax, [eax + eax*2]
0x0052BEB0  53                    push   ebx
0x0052BEB1  8d1cc58063b300        lea    ebx, [eax*8 + 0xb36380]
0x0052BEB8  8bcb                  mov    ecx, ebx
0x0052BEBA  e8d1d2f1ff            call   0x449190  ; -> sub_449190
0x0052BEBF  85c0                  test   eax, eax
0x0052BEC1  7408                  je     0x52becb  ; -> sub_52BECB
0x0052BEC3  8bc3                  mov    eax, ebx
0x0052BEC5  5b                    pop    ebx
0x0052BEC6  5f                    pop    edi
0x0052BEC7  5e                    pop    esi
0x0052BEC8  c20800                ret    8
0x0052BECB  83ef00                sub    edi, 0
0x0052BECE  7411                  je     0x52bee1  ; -> sub_52BEE1
0x0052BED0  83ef01                sub    edi, 1
0x0052BED3  7529                  jne    0x52befe  ; -> sub_52BEFE
0x0052BED5  8d0476                lea    eax, [esi + esi*2]
0x0052BED8  8d34c58063b300        lea    esi, [eax*8 + 0xb36380]
0x0052BEDF  eb0a                  jmp    0x52beeb  ; -> sub_52BEEB
0x0052BEE1  8d0476                lea    eax, [esi + esi*2]
0x0052BEE4  8d34c5f863b300        lea    esi, [eax*8 + 0xb363f8]
0x0052BEEB  8bce                  mov    ecx, esi
0x0052BEED  e89ed2f1ff            call   0x449190  ; -> sub_449190
0x0052BEF2  85c0                  test   eax, eax
0x0052BEF4  7408                  je     0x52befe  ; -> sub_52BEFE
0x0052BEF6  5b                    pop    ebx
0x0052BEF7  5f                    pop    edi
0x0052BEF8  8bc6                  mov    eax, esi
0x0052BEFA  5e                    pop    esi
0x0052BEFB  c20800                ret    8
0x0052BEFE  5b                    pop    ebx
0x0052BEFF  5f                    pop    edi
0x0052BF00  33c0                  xor    eax, eax
0x0052BF02  5e                    pop    esi
0x0052BF03  c20800                ret    8
0x0052BF06  5f                    pop    edi
0x0052BF07  33c0                  xor    eax, eax
0x0052BF09  5e                    pop    esi
0x0052BF0A  c20800                ret    8
0x0052BF0D  8b442404              mov    eax, dword ptr [esp + 4]
0x0052BF11  50                    push   eax
0x0052BF12  e899feffff            call   0x52bdb0  ; -> sub_52BDB0
0x0052BF17  c20800                ret    8
0x0052BF1A  cc                    int3   
0x0052BF1B  cc                    int3   
0x0052BF1C  cc                    int3   
0x0052BF1D  cc                    int3   
0x0052BF1E  cc                    int3   
0x0052BF1F  cc                    int3   
0x0052BF20  55                    push   ebp
0x0052BF21  8bec                  mov    ebp, esp
0x0052BF23  83ec14                sub    esp, 0x14
0x0052BF26  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0052BF2B  33c5                  xor    eax, ebp
0x0052BF2D  8945fc                mov    dword ptr [ebp - 4], eax
0x0052BF30  53                    push   ebx
0x0052BF31  56                    push   esi
0x0052BF32  57                    push   edi
0x0052BF33  8bf1                  mov    esi, ecx
0x0052BF35  e856faf3ff            call   0x46b990  ; -> sub_46B990
0x0052BF3A  8d4e18                lea    ecx, [esi + 0x18]
0x0052BF3D  e8ee07f4ff            call   0x46c730  ; -> sub_46C730
0x0052BF42  8d4e24                lea    ecx, [esi + 0x24]
0x0052BF45  e8b6e7f3ff            call   0x46a700  ; -> sub_46A700
0x0052BF4A  8d4e2c                lea    ecx, [esi + 0x2c]

