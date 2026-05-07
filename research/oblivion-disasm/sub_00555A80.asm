ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x00555A80
; VA: 0x00555A80  size: 0x600
; ============================================================
0x00555A80  6aff                  push   -1
0x00555A82  684fc39b00            push   0x9bc34f  ; -> sub_9BC34F
0x00555A87  64a100000000          mov    eax, dword ptr fs:[0]
0x00555A8D  50                    push   eax
0x00555A8E  83ec7c                sub    esp, 0x7c
0x00555A91  53                    push   ebx
0x00555A92  55                    push   ebp
0x00555A93  56                    push   esi
0x00555A94  57                    push   edi
0x00555A95  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00555A9A  33c4                  xor    eax, esp
0x00555A9C  50                    push   eax
0x00555A9D  8d842490000000        lea    eax, [esp + 0x90]
0x00555AA4  64a300000000          mov    dword ptr fs:[0], eax
0x00555AAA  33db                  xor    ebx, ebx
0x00555AAC  895c241c              mov    dword ptr [esp + 0x1c], ebx
0x00555AB0  895c2420              mov    dword ptr [esp + 0x20], ebx
0x00555AB4  899c2498000000        mov    dword ptr [esp + 0x98], ebx
0x00555ABB  895c2414              mov    dword ptr [esp + 0x14], ebx
0x00555ABF  33f6                  xor    esi, esi
0x00555AC1  895c2424              mov    dword ptr [esp + 0x24], ebx
0x00555AC5  895c2428              mov    dword ptr [esp + 0x28], ebx
0x00555AC9  8974243c              mov    dword ptr [esp + 0x3c], esi
0x00555ACD  66895c2440            mov    word ptr [esp + 0x40], bx
0x00555AD2  66895c2442            mov    word ptr [esp + 0x42], bx
0x00555AD7  895c244c              mov    dword ptr [esp + 0x4c], ebx
0x00555ADB  66895c2450            mov    word ptr [esp + 0x50], bx
0x00555AE0  66895c2452            mov    word ptr [esp + 0x52], bx
0x00555AE5  895c2444              mov    dword ptr [esp + 0x44], ebx
0x00555AE9  66895c2448            mov    word ptr [esp + 0x48], bx
0x00555AEE  66895c244a            mov    word ptr [esp + 0x4a], bx
0x00555AF3  895c245c              mov    dword ptr [esp + 0x5c], ebx
0x00555AF7  66895c2460            mov    word ptr [esp + 0x60], bx
0x00555AFC  66895c2462            mov    word ptr [esp + 0x62], bx
0x00555B01  895c2464              mov    dword ptr [esp + 0x64], ebx
0x00555B05  66895c2468            mov    word ptr [esp + 0x68], bx
0x00555B0A  66895c246a            mov    word ptr [esp + 0x6a], bx
0x00555B0F  895c2454              mov    dword ptr [esp + 0x54], ebx
0x00555B13  66895c2458            mov    word ptr [esp + 0x58], bx
0x00555B18  66895c245a            mov    word ptr [esp + 0x5a], bx
0x00555B1D  d9051c72a300          fld    dword ptr [0xa3721c]
0x00555B23  51                    push   ecx
0x00555B24  8d4c2470              lea    ecx, [esp + 0x70]
0x00555B28  d91c24                fstp   dword ptr [esp]
0x00555B2B  c684249c00000007      mov    byte ptr [esp + 0x9c], 7
0x00555B33  e848a21b00            call   0x70fd80  ; -> sub_70FD80
0x00555B38  33ed                  xor    ebp, ebp
0x00555B3A  896c2418              mov    dword ptr [esp + 0x18], ebp
0x00555B3E  8bff                  mov    edi, edi
0x00555B40  83fd02                cmp    ebp, 2
0x00555B43  750c                  jne    0x555b51  ; -> sub_555B51
0x00555B45  8b8424a8000000        mov    eax, dword ptr [esp + 0xa8]
0x00555B4C  395870                cmp    dword ptr [eax + 0x70], ebx
0x00555B4F  eb0f                  jmp    0x555b60  ; -> sub_555B60
0x00555B51  83fd01                cmp    ebp, 1
0x00555B54  7510                  jne    0x555b66  ; -> sub_555B66
0x00555B56  8b8c24a8000000        mov    ecx, dword ptr [esp + 0xa8]
0x00555B5D  396970                cmp    dword ptr [ecx + 0x70], ebp
0x00555B60  0f8433060000          je     0x556199  ; -> sub_556199
0x00555B66  8b9424a8000000        mov    edx, dword ptr [esp + 0xa8]
0x00555B6D  66395a7e              cmp    word ptr [edx + 0x7e], bx
0x00555B71  0f8422060000          je     0x556199  ; -> sub_556199
0x00555B77  8bc2                  mov    eax, edx
0x00555B79  8b4878                mov    ecx, dword ptr [eax + 0x78]
0x00555B7C  391ca9                cmp    dword ptr [ecx + ebp*4], ebx
0x00555B7F  8d04a9                lea    eax, [ecx + ebp*4]
0x00555B82  0f8411060000          je     0x556199  ; -> sub_556199
0x00555B88  8b08                  mov    ecx, dword ptr [eax]
0x00555B8A  0fb74108              movzx  eax, word ptr [ecx + 8]
0x00555B8E  663dffff              cmp    ax, 0xffff
0x00555B92  7519                  jne    0x555bad  ; -> sub_555BAD
0x00555B94  8b4104                mov    eax, dword ptr [ecx + 4]
0x00555B97  8d7801                lea    edi, [eax + 1]
0x00555B9A  8d9b00000000          lea    ebx, [ebx]
0x00555BA0  8a10                  mov    dl, byte ptr [eax]
0x00555BA2  83c001                add    eax, 1
0x00555BA5  3ad3                  cmp    dl, bl
0x00555BA7  75f7                  jne    0x555ba0  ; -> sub_555BA0
0x00555BA9  2bc7                  sub    eax, edi
0x00555BAB  eb03                  jmp    0x555bb0  ; -> sub_555BB0
0x00555BAD  0fb7c0                movzx  eax, ax
0x00555BB0  3bc3                  cmp    eax, ebx
0x00555BB2  0f84e1050000          je     0x556199  ; -> sub_556199
0x00555BB8  8b9424a8000000        mov    edx, dword ptr [esp + 0xa8]
0x00555BBF  66399a8e000000        cmp    word ptr [edx + 0x8e], bx
0x00555BC6  0f84cd050000          je     0x556199  ; -> sub_556199
0x00555BCC  8bc2                  mov    eax, edx
0x00555BCE  8b9088000000          mov    edx, dword ptr [eax + 0x88]
0x00555BD4  391caa                cmp    dword ptr [edx + ebp*4], ebx
0x00555BD7  8d04aa                lea    eax, [edx + ebp*4]
0x00555BDA  0f84b9050000          je     0x556199  ; -> sub_556199
0x00555BE0  8b00                  mov    eax, dword ptr [eax]
0x00555BE2  0fb75008              movzx  edx, word ptr [eax + 8]
0x00555BE6  6681faffff            cmp    dx, 0xffff
0x00555BEB  7513                  jne    0x555c00  ; -> sub_555C00
0x00555BED  8b4004                mov    eax, dword ptr [eax + 4]
0x00555BF0  8d7801                lea    edi, [eax + 1]
0x00555BF3  8a10                  mov    dl, byte ptr [eax]
0x00555BF5  83c001                add    eax, 1
0x00555BF8  3ad3                  cmp    dl, bl
0x00555BFA  75f7                  jne    0x555bf3  ; -> sub_555BF3
0x00555BFC  2bc7                  sub    eax, edi
0x00555BFE  eb03                  jmp    0x555c03  ; -> sub_555C03
0x00555C00  0fb7c2                movzx  eax, dx
0x00555C03  3bc3                  cmp    eax, ebx
0x00555C05  0f848e050000          je     0x556199  ; -> sub_556199
0x00555C0B  8b01                  mov    eax, dword ptr [ecx]
0x00555C0D  8b5014                mov    edx, dword ptr [eax + 0x14]
0x00555C10  ffd2                  call   edx
0x00555C12  50                    push   eax
0x00555C13  8d442440              lea    eax, [esp + 0x40]
0x00555C17  68ac86a300            push   0xa386ac  ; -> sub_A386AC
0x00555C1C  50                    push   eax
0x00555C1D  e80ed2eaff            call   0x402e30  ; -> sub_402E30
0x00555C22  8bbc24b4000000        mov    edi, dword ptr [esp + 0xb4]
0x00555C29  83c40c                add    esp, 0xc
0x00555C2C  399fc0000000          cmp    dword ptr [edi + 0xc0], ebx
0x00555C32  7538                  jne    0x555c6c  ; -> sub_555C6C
0x00555C34  3beb                  cmp    ebp, ebx
0x00555C36  7534                  jne    0x555c6c  ; -> sub_555C6C
0x00555C38  8b74243c              mov    esi, dword ptr [esp + 0x3c]
0x00555C3C  8d4c2454              lea    ecx, [esp + 0x54]
0x00555C40  56                    push   esi
0x00555C41  51                    push   ecx
0x00555C42  e8f9beffff            call   0x551b40  ; -> sub_551B40
0x00555C47  8b54245c              mov    edx, dword ptr [esp + 0x5c]
0x00555C4B  6aff                  push   -1
0x00555C4D  53                    push   ebx
0x00555C4E  53                    push   ebx
0x00555C4F  52                    push   edx
0x00555C50  e88b61edff            call   0x42bde0  ; -> sub_42BDE0
0x00555C55  83c418                add    esp, 0x18
0x00555C58  85c0                  test   eax, eax
0x00555C5A  741d                  je     0x555c79  ; -> sub_555C79
0x00555C5C  8d44243c              lea    eax, [esp + 0x3c]
0x00555C60  56                    push   esi
0x00555C61  50                    push   eax
0x00555C62  e8d9beffff            call   0x551b40  ; -> sub_551B40
0x00555C67  83c408                add    esp, 8
0x00555C6A  eb09                  jmp    0x555c75  ; -> sub_555C75
0x00555C6C  83fd06                cmp    ebp, 6
0x00555C6F  0f8762020000          ja     0x555ed7  ; -> sub_555ED7
0x00555C75  8b74243c              mov    esi, dword ptr [esp + 0x3c]
0x00555C79  ff24ade0625500        jmp    dword ptr [ebp*4 + 0x5562e0]
0x00555C80  53                    push   ebx
0x00555C81  6a01                  push   1
0x00555C83  8d4c2464              lea    ecx, [esp + 0x64]
0x00555C87  56                    push   esi
0x00555C88  51                    push   ecx
0x00555C89  e832a4ffff            call   0x5500c0  ; -> sub_5500C0
0x00555C8E  83c408                add    esp, 8
0x00555C91  50                    push   eax
0x00555C92  8d542450              lea    edx, [esp + 0x50]
0x00555C96  56                    push   esi
0x00555C97  52                    push   edx
0x00555C98  e873a3ffff            call   0x550010  ; -> sub_550010
0x00555C9D  83c408                add    esp, 8
0x00555CA0  50                    push   eax
0x00555CA1  56                    push   esi
0x00555CA2  8d442460              lea    eax, [esp + 0x60]
0x00555CA6  56                    push   esi
0x00555CA7  50                    push   eax
0x00555CA8  e803a2ffff            call   0x54feb0  ; -> sub_54FEB0
0x00555CAD  83c408                add    esp, 8
0x00555CB0  50                    push   eax
0x00555CB1  e86ad9ffff            call   0x553620  ; -> sub_553620
0x00555CB6  83c418                add    esp, 0x18
0x00555CB9  8944241c              mov    dword ptr [esp + 0x1c], eax
0x00555CBD  e919020000            jmp    0x555edb  ; -> sub_555EDB
0x00555CC2  8d4c2444              lea    ecx, [esp + 0x44]
0x00555CC6  56                    push   esi
0x00555CC7  51                    push   ecx
0x00555CC8  e843a3ffff            call   0x550010  ; -> sub_550010
0x00555CCD  8d542454              lea    edx, [esp + 0x54]
0x00555CD1  56                    push   esi
0x00555CD2  52                    push   edx
0x00555CD3  8be8                  mov    ebp, eax
0x00555CD5  e8d6a1ffff            call   0x54feb0  ; -> sub_54FEB0
0x00555CDA  83c410                add    esp, 0x10
0x00555CDD  8bf8                  mov    edi, eax
0x00555CDF  895c241c              mov    dword ptr [esp + 0x1c], ebx
0x00555CE3  3bfb                  cmp    edi, ebx
0x00555CE5  c684249800000008      mov    byte ptr [esp + 0x98], 8
0x00555CED  7515                  jne    0x555d04  ; -> sub_555D04
0x00555CEF  8b6c2418              mov    ebp, dword ptr [esp + 0x18]
0x00555CF3  c684249800000007      mov    byte ptr [esp + 0x98], 7
0x00555CFB  895c241c              mov    dword ptr [esp + 0x1c], ebx
0x00555CFF  e995040000            jmp    0x556199  ; -> sub_556199
0x00555D04  391d809bb300          cmp    dword ptr [0xb39b80], ebx
0x00555D0A  7505                  jne    0x555d11  ; -> sub_555D11
0x00555D0C  e83fd8ffff            call   0x553550  ; -> sub_553550
0x00555D11  a1809bb300            mov    eax, dword ptr [0xb39b80]
0x00555D16  3998ac0d0000          cmp    dword ptr [eax + 0xdac], ebx
0x00555D1C  0f858a000000          jne    0x555dac  ; -> sub_555DAC
0x00555D22  6a20                  push   0x20
0x00555D24  e8d7c1eaff            call   0x401f00  ; -> sub_401F00
0x00555D29  83c404                add    esp, 4
0x00555D2C  89442438              mov    dword ptr [esp + 0x38], eax
0x00555D30  3bc3                  cmp    eax, ebx
0x00555D32  c684249800000009      mov    byte ptr [esp + 0x98], 9
0x00555D3A  740b                  je     0x555d47  ; -> sub_555D47
0x00555D3C  8bc8                  mov    ecx, eax
0x00555D3E  e83dc1ffff            call   0x551e80  ; -> sub_551E80
0x00555D43  8bf0                  mov    esi, eax
0x00555D45  eb02                  jmp    0x555d49  ; -> sub_555D49
0x00555D47  33f6                  xor    esi, esi
0x00555D49  391d809bb300          cmp    dword ptr [0xb39b80], ebx
0x00555D4F  c684249800000008      mov    byte ptr [esp + 0x98], 8
0x00555D57  7505                  jne    0x555d5e  ; -> sub_555D5E
0x00555D59  e8f2d7ffff            call   0x553550  ; -> sub_553550
0x00555D5E  8b0d809bb300          mov    ecx, dword ptr [0xb39b80]
0x00555D64  89b1ac0d0000          mov    dword ptr [ecx + 0xdac], esi
0x00555D6A  8b15809bb300          mov    edx, dword ptr [0xb39b80]
0x00555D70  8b8aac0d0000          mov    ecx, dword ptr [edx + 0xdac]
0x00555D76  a1ec20b100            mov    eax, dword ptr [0xb120ec]
0x00555D7B  53                    push   ebx
0x00555D7C  894118                mov    dword ptr [ecx + 0x18], eax
0x00555D7F  e82ca9ffff            call   0x5506b0  ; -> sub_5506B0
0x00555D84  391d809bb300          cmp    dword ptr [0xb39b80], ebx
0x00555D8A  8b35f420b100          mov    esi, dword ptr [0xb120f4]
0x00555D90  7505                  jne    0x555d97  ; -> sub_555D97
0x00555D92  e8b9d7ffff            call   0x553550  ; -> sub_553550
0x00555D97  8b0d809bb300          mov    ecx, dword ptr [0xb39b80]
0x00555D9D  8b89ac0d0000          mov    ecx, dword ptr [ecx + 0xdac]
0x00555DA3  53                    push   ebx
0x00555DA4  89711c                mov    dword ptr [ecx + 0x1c], esi
0x00555DA7  e804a9ffff            call   0x5506b0  ; -> sub_5506B0
0x00555DAC  391d809bb300          cmp    dword ptr [0xb39b80], ebx
0x00555DB2  7505                  jne    0x555db9  ; -> sub_555DB9
0x00555DB4  e897d7ffff            call   0x553550  ; -> sub_553550
0x00555DB9  a1809bb300            mov    eax, dword ptr [0xb39b80]
0x00555DBE  8b88ac0d0000          mov    ecx, dword ptr [eax + 0xdac]
0x00555DC4  8d54241c              lea    edx, [esp + 0x1c]
0x00555DC8  52                    push   edx
0x00555DC9  57                    push   edi
0x00555DCA  e8e1b7ffff            call   0x5515b0  ; -> sub_5515B0
0x00555DCF  84c0                  test   al, al
0x00555DD1  7442                  je     0x555e15  ; -> sub_555E15
0x00555DD3  8b74241c              mov    esi, dword ptr [esp + 0x1c]
0x00555DD7  395e08                cmp    dword ptr [esi + 8], ebx
0x00555DDA  7510                  jne    0x555dec  ; -> sub_555DEC
0x00555DDC  8b4c243c              mov    ecx, dword ptr [esp + 0x3c]
0x00555DE0  53                    push   ebx
0x00555DE1  53                    push   ebx
0x00555DE2  55                    push   ebp
0x00555DE3  51                    push   ecx
0x00555DE4  57                    push   edi
0x00555DE5  8bce                  mov    ecx, esi
0x00555DE7  e8643d0000            call   0x559b50  ; -> sub_559B50
0x00555DEC  8d5604                lea    edx, [esi + 4]
0x00555DEF  52                    push   edx
0x00555DF0  c684249c00000007      mov    byte ptr [esp + 0x9c], 7
0x00555DF8  ff157c80a200          call   dword ptr [0xa2807c]
0x00555DFE  85c0                  test   eax, eax
0x00555E00  0f85c2000000          jne    0x555ec8  ; -> sub_555EC8
0x00555E06  8b06                  mov    eax, dword ptr [esi]
0x00555E08  8b10                  mov    edx, dword ptr [eax]
0x00555E0A  6a01                  push   1
0x00555E0C  8bce                  mov    ecx, esi
0x00555E0E  ffd2                  call   edx
0x00555E10  e9b3000000            jmp    0x555ec8  ; -> sub_555EC8
0x00555E15  6a1c                  push   0x1c
0x00555E17  e8e4c0eaff            call   0x401f00  ; -> sub_401F00
0x00555E1C  83c404                add    esp, 4
0x00555E1F  89442438              mov    dword ptr [esp + 0x38], eax
0x00555E23  3bc3                  cmp    eax, ebx
0x00555E25  c68424980000000a      mov    byte ptr [esp + 0x98], 0xa
0x00555E2D  7409                  je     0x555e38  ; -> sub_555E38
0x00555E2F  8bc8                  mov    ecx, eax
0x00555E31  e86a060000            call   0x5564a0  ; -> sub_5564A0
0x00555E36  eb02                  jmp    0x555e3a  ; -> sub_555E3A
0x00555E38  33c0                  xor    eax, eax
0x00555E3A  50                    push   eax
0x00555E3B  8d4c2420              lea    ecx, [esp + 0x20]
0x00555E3F  c684249c00000008      mov    byte ptr [esp + 0x9c], 8
0x00555E47  e8449c2000            call   0x75fa90  ; -> sub_75FA90
0x00555E4C  8b44243c              mov    eax, dword ptr [esp + 0x3c]
0x00555E50  8b74241c              mov    esi, dword ptr [esp + 0x1c]
0x00555E54  53                    push   ebx
0x00555E55  53                    push   ebx
0x00555E56  55                    push   ebp
0x00555E57  50                    push   eax
0x00555E58  57                    push   edi
0x00555E59  8bce                  mov    ecx, esi
0x00555E5B  e8f03c0000            call   0x559b50  ; -> sub_559B50
0x00555E60  84c0                  test   al, al
0x00555E62  7422                  je     0x555e86  ; -> sub_555E86
0x00555E64  391d809bb300          cmp    dword ptr [0xb39b80], ebx
0x00555E6A  7505                  jne    0x555e71  ; -> sub_555E71
0x00555E6C  e8dfd6ffff            call   0x553550  ; -> sub_553550
0x00555E71  8b0d809bb300          mov    ecx, dword ptr [0xb39b80]
0x00555E77  8b89ac0d0000          mov    ecx, dword ptr [ecx + 0xdac]
0x00555E7D  56                    push   esi
0x00555E7E  57                    push   edi
0x00555E7F  e8ccb5ffff            call   0x551450  ; -> sub_551450
0x00555E84  eb1e                  jmp    0x555ea4  ; -> sub_555EA4
0x00555E86  3bf3                  cmp    esi, ebx
0x00555E88  741a                  je     0x555ea4  ; -> sub_555EA4
0x00555E8A  8d5604                lea    edx, [esi + 4]
0x00555E8D  52                    push   edx
0x00555E8E  ff157c80a200          call   dword ptr [0xa2807c]
0x00555E94  85c0                  test   eax, eax
0x00555E96  750a                  jne    0x555ea2  ; -> sub_555EA2
0x00555E98  8b06                  mov    eax, dword ptr [esi]
0x00555E9A  8b10                  mov    edx, dword ptr [eax]
0x00555E9C  6a01                  push   1
0x00555E9E  8bce                  mov    ecx, esi
0x00555EA0  ffd2                  call   edx
0x00555EA2  33f6                  xor    esi, esi
0x00555EA4  3bf3                  cmp    esi, ebx
0x00555EA6  c684249800000007      mov    byte ptr [esp + 0x98], 7
0x00555EAE  7418                  je     0x555ec8  ; -> sub_555EC8
0x00555EB0  8d4604                lea    eax, [esi + 4]
0x00555EB3  50                    push   eax
0x00555EB4  ff157c80a200          call   dword ptr [0xa2807c]
0x00555EBA  85c0                  test   eax, eax
0x00555EBC  750a                  jne    0x555ec8  ; -> sub_555EC8
0x00555EBE  8b16                  mov    edx, dword ptr [esi]
0x00555EC0  8b02                  mov    eax, dword ptr [edx]
0x00555EC2  6a01                  push   1
0x00555EC4  8bce                  mov    ecx, esi
0x00555EC6  ffd0                  call   eax
0x00555EC8  8bbc24a8000000        mov    edi, dword ptr [esp + 0xa8]
0x00555ECF  8b6c2418              mov    ebp, dword ptr [esp + 0x18]
0x00555ED3  8974241c              mov    dword ptr [esp + 0x1c], esi
0x00555ED7  8b74243c              mov    esi, dword ptr [esp + 0x3c]
0x00555EDB  8b4c241c              mov    ecx, dword ptr [esp + 0x1c]
0x00555EDF  3bcb                  cmp    ecx, ebx
0x00555EE1  0f84b2020000          je     0x556199  ; -> sub_556199
0x00555EE7  8d542414              lea    edx, [esp + 0x14]
0x00555EEB  52                    push   edx
0x00555EEC  57                    push   edi
0x00555EED  e87e390000            call   0x559870  ; -> sub_559870
0x00555EF2  84c0                  test   al, al
0x00555EF4  0f849f020000          je     0x556199  ; -> sub_556199
0x00555EFA  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x00555EFE  3bcb                  cmp    ecx, ebx
0x00555F00  0f8493020000          je     0x556199  ; -> sub_556199
0x00555F06  8b8798000000          mov    eax, dword ptr [edi + 0x98]
0x00555F0C  8b14a8                mov    edx, dword ptr [eax + ebp*4]
0x00555F0F  52                    push   edx
0x00555F10  e80b951a00            call   0x6ff420  ; -> sub_6FF420
0x00555F15  3beb                  cmp    ebp, ebx
0x00555F17  750a                  jne    0x555f23  ; -> sub_555F23
0x00555F19  8b442414              mov    eax, dword ptr [esp + 0x14]
0x00555F1D  89442424              mov    dword ptr [esp + 0x24], eax
0x00555F21  eb12                  jmp    0x555f35  ; -> sub_555F35
0x00555F23  83fd01                cmp    ebp, 1
0x00555F26  7405                  je     0x555f2d  ; -> sub_555F2D
0x00555F28  83fd02                cmp    ebp, 2
0x00555F2B  7508                  jne    0x555f35  ; -> sub_555F35
0x00555F2D  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x00555F31  894c2428              mov    dword ptr [esp + 0x28], ecx
0x00555F35  8b9788000000          mov    edx, dword ptr [edi + 0x88]
0x00555F3B  8b04aa                mov    eax, dword ptr [edx + ebp*4]
0x00555F3E  8b4004                mov    eax, dword ptr [eax + 4]
0x00555F41  3bc3                  cmp    eax, ebx
0x00555F43  7505                  jne    0x555f4a  ; -> sub_555F4A
0x00555F45  b8ecf7a200            mov    eax, 0xa2f7ec  ; -> sub_A2F7EC
0x00555F4A  50                    push   eax
0x00555F4B  8d442440              lea    eax, [esp + 0x40]
0x00555F4F  68344aa500            push   0xa54a34  ; -> sub_A54A34
0x00555F54  50                    push   eax
0x00555F55  e8d6ceeaff            call   0x402e30  ; -> sub_402E30
0x00555F5A  8b742448              mov    esi, dword ptr [esp + 0x48]
0x00555F5E  83c40c                add    esp, 0xc
0x00555F61  53                    push   ebx
0x00555F62  53                    push   ebx
0x00555F63  56                    push   esi
0x00555F64  8d4c2438              lea    ecx, [esp + 0x38]
0x00555F68  51                    push   ecx
0x00555F69  8b0da033b300          mov    ecx, dword ptr [0xb333a0]
0x00555F6F  e81cc9eeff            call   0x442890  ; -> sub_442890
0x00555F74  50                    push   eax
0x00555F75  8d4c2424              lea    ecx, [esp + 0x24]
0x00555F79  c684249c0000000b      mov    byte ptr [esp + 0x9c], 0xb
0x00555F81  e81a830000            call   0x55e2a0  ; -> sub_55E2A0
0x00555F86  8d4c242c              lea    ecx, [esp + 0x2c]
0x00555F8A  c684249800000007      mov    byte ptr [esp + 0x98], 7
0x00555F92  e809b71a00            call   0x7016a0  ; -> sub_7016A0
0x00555F97  8b7c2420              mov    edi, dword ptr [esp + 0x20]
0x00555F9B  3bfb                  cmp    edi, ebx
0x00555F9D  7471                  je     0x556010  ; -> sub_556010
0x00555F9F  6a30                  push   0x30
0x00555FA1  e85abfeaff            call   0x401f00  ; -> sub_401F00
0x00555FA6  83c404                add    esp, 4
0x00555FA9  89442438              mov    dword ptr [esp + 0x38], eax
0x00555FAD  3bc3                  cmp    eax, ebx
0x00555FAF  c68424980000000c      mov    byte ptr [esp + 0x98], 0xc
0x00555FB7  740b                  je     0x555fc4  ; -> sub_555FC4
0x00555FB9  8bc8                  mov    ecx, eax
0x00555FBB  e8f0e31a00            call   0x7043b0  ; -> sub_7043B0
0x00555FC0  8bf0                  mov    esi, eax
0x00555FC2  eb02                  jmp    0x555fc6  ; -> sub_555FC6
0x00555FC4  33f6                  xor    esi, esi
0x00555FC6  57                    push   edi
0x00555FC7  8bce                  mov    ecx, esi
0x00555FC9  c684249c00000007      mov    byte ptr [esp + 0x9c], 7
0x00555FD1  e8daf7eaff            call   0x4057b0  ; -> sub_4057B0
0x00555FD6  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x00555FDA  6a06                  push   6
0x00555FDC  e84f151b00            call   0x707530  ; -> sub_707530
0x00555FE1  85c0                  test   eax, eax
0x00555FE3  7419                  je     0x555ffe  ; -> sub_555FFE
0x00555FE5  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x00555FE9  6a06                  push   6
0x00555FEB  8d542434              lea    edx, [esp + 0x34]
0x00555FEF  52                    push   edx
0x00555FF0  e86b251b00            call   0x708560  ; -> sub_708560
0x00555FF5  8d4c2430              lea    ecx, [esp + 0x30]
0x00555FF9  e8a2b61a00            call   0x7016a0  ; -> sub_7016A0
0x00555FFE  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x00556002  56                    push   esi
0x00556003  e878f6eaff            call   0x405680  ; -> sub_405680
0x00556008  8b74243c              mov    esi, dword ptr [esp + 0x3c]
0x0055600C  8b6c2418              mov    ebp, dword ptr [esp + 0x18]
0x00556010  83fd05                cmp    ebp, 5
0x00556013  7405                  je     0x55601a  ; -> sub_55601A
0x00556015  83fd04                cmp    ebp, 4
0x00556018  753f                  jne    0x556059  ; -> sub_556059
0x0055601A  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x0055601E  53                    push   ebx
0x0055601F  e80c151b00            call   0x707530  ; -> sub_707530
0x00556024  85c0                  test   eax, eax
0x00556026  7418                  je     0x556040  ; -> sub_556040
0x00556028  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x0055602C  53                    push   ebx
0x0055602D  8d442438              lea    eax, [esp + 0x38]
0x00556031  50                    push   eax
0x00556032  e829251b00            call   0x708560  ; -> sub_708560
0x00556037  8d4c2434              lea    ecx, [esp + 0x34]
0x0055603B  e860b61a00            call   0x7016a0  ; -> sub_7016A0
0x00556040  8b742414              mov    esi, dword ptr [esp + 0x14]
0x00556044  e807a5ffff            call   0x550550  ; -> sub_550550
0x00556049  50                    push   eax
0x0055604A  8bce                  mov    ecx, esi
0x0055604C  e82ff6eaff            call   0x405680  ; -> sub_405680
0x00556051  8b74243c              mov    esi, dword ptr [esp + 0x3c]
0x00556055  8b6c2418              mov    ebp, dword ptr [esp + 0x18]
0x00556059  3beb                  cmp    ebp, ebx
0x0055605B  740a                  je     0x556067  ; -> sub_556067
0x0055605D  83fd01                cmp    ebp, 1
0x00556060  7405                  je     0x556067  ; -> sub_556067
0x00556062  83fd02                cmp    ebp, 2
0x00556065  756a                  jne    0x5560d1  ; -> sub_5560D1
0x00556067  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x0055606B  6a02                  push   2
0x0055606D  e8be141b00            call   0x707530  ; -> sub_707530
0x00556072  3bc3                  cmp    eax, ebx
0x00556074  740e                  je     0x556084  ; -> sub_556084
0x00556076  685ccfa300            push   0xa3cf5c  ; -> sub_A3CF5C
0x0055607B  8bc8                  mov    ecx, eax

