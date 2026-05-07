ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x00555A80
; VA: 0x00555A80  size: 0x1200
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
0x0055607D  e89e931a00            call   0x6ff420  ; -> sub_6FF420
0x00556082  eb4d                  jmp    0x5560d1  ; -> sub_5560D1
0x00556084  6a5c                  push   0x5c
0x00556086  e875beeaff            call   0x401f00  ; -> sub_401F00
0x0055608B  83c404                add    esp, 4
0x0055608E  89442438              mov    dword ptr [esp + 0x38], eax
0x00556092  3bc3                  cmp    eax, ebx
0x00556094  c68424980000000d      mov    byte ptr [esp + 0x98], 0xd
0x0055609C  740b                  je     0x5560a9  ; -> sub_5560A9
0x0055609E  8bc8                  mov    ecx, eax
0x005560A0  e8fb341b00            call   0x7095a0  ; -> sub_7095A0
0x005560A5  8bf0                  mov    esi, eax
0x005560A7  eb02                  jmp    0x5560ab  ; -> sub_5560AB
0x005560A9  33f6                  xor    esi, esi
0x005560AB  685ccfa300            push   0xa3cf5c  ; -> sub_A3CF5C
0x005560B0  8bce                  mov    ecx, esi
0x005560B2  c684249c00000007      mov    byte ptr [esp + 0x9c], 7
0x005560BA  e861931a00            call   0x6ff420  ; -> sub_6FF420
0x005560BF  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x005560C3  56                    push   esi
0x005560C4  e8b7f5eaff            call   0x405680  ; -> sub_405680
0x005560C9  8b74243c              mov    esi, dword ptr [esp + 0x3c]
0x005560CD  8b6c2418              mov    ebp, dword ptr [esp + 0x18]
0x005560D1  8b442414              mov    eax, dword ptr [esp + 0x14]
0x005560D5  3998b8000000          cmp    dword ptr [eax + 0xb8], ebx
0x005560DB  53                    push   ebx
0x005560DC  7475                  je     0x556153  ; -> sub_556153
0x005560DE  389c24b0000000        cmp    byte ptr [esp + 0xb0], bl
0x005560E5  7456                  je     0x55613d  ; -> sub_55613D
0x005560E7  8bc8                  mov    ecx, eax
0x005560E9  e86222f2ff            call   0x478350  ; -> sub_478350
0x005560EE  8b442414              mov    eax, dword ptr [esp + 0x14]
0x005560F2  8b0da8f9b300          mov    ecx, dword ptr [0xb3f9a8]
0x005560F8  894854                mov    dword ptr [eax + 0x54], ecx
0x005560FB  8b15acf9b300          mov    edx, dword ptr [0xb3f9ac]
0x00556101  83c054                add    eax, 0x54
0x00556104  895004                mov    dword ptr [eax + 4], edx
0x00556107  8b0db0f9b300          mov    ecx, dword ptr [0xb3f9b0]
0x0055610D  8b9424a0000000        mov    edx, dword ptr [esp + 0xa0]
0x00556114  894808                mov    dword ptr [eax + 8], ecx
0x00556117  8b7c2414              mov    edi, dword ptr [esp + 0x14]
0x0055611B  83c730                add    edi, 0x30
0x0055611E  b909000000            mov    ecx, 9
0x00556123  8d74246c              lea    esi, [esp + 0x6c]
0x00556127  f3a5                  rep movsd dword ptr es:[edi], dword ptr [esi]
0x00556129  8b0a                  mov    ecx, dword ptr [edx]
0x0055612B  8b01                  mov    eax, dword ptr [ecx]
0x0055612D  8b542414              mov    edx, dword ptr [esp + 0x14]
0x00556131  8b8084000000          mov    eax, dword ptr [eax + 0x84]
0x00556137  53                    push   ebx
0x00556138  52                    push   edx
0x00556139  ffd0                  call   eax
0x0055613B  eb3c                  jmp    0x556179  ; -> sub_556179
0x0055613D  8b8c24a8000000        mov    ecx, dword ptr [esp + 0xa8]
0x00556144  8b09                  mov    ecx, dword ptr [ecx]
0x00556146  8b11                  mov    edx, dword ptr [ecx]
0x00556148  50                    push   eax
0x00556149  8b8284000000          mov    eax, dword ptr [edx + 0x84]
0x0055614F  ffd0                  call   eax
0x00556151  eb2e                  jmp    0x556181  ; -> sub_556181
0x00556153  8d7830                lea    edi, [eax + 0x30]
0x00556156  b909000000            mov    ecx, 9
0x0055615B  8d742470              lea    esi, [esp + 0x70]
0x0055615F  f3a5                  rep movsd dword ptr es:[edi], dword ptr [esi]
0x00556161  8b8c24a4000000        mov    ecx, dword ptr [esp + 0xa4]
0x00556168  8b09                  mov    ecx, dword ptr [ecx]
0x0055616A  8b11                  mov    edx, dword ptr [ecx]
0x0055616C  8b442418              mov    eax, dword ptr [esp + 0x18]
0x00556170  8b9284000000          mov    edx, dword ptr [edx + 0x84]
0x00556176  50                    push   eax
0x00556177  ffd2                  call   edx
0x00556179  8b74243c              mov    esi, dword ptr [esp + 0x3c]
0x0055617D  8b6c2418              mov    ebp, dword ptr [esp + 0x18]
0x00556181  53                    push   ebx
0x00556182  8d4c2424              lea    ecx, [esp + 0x24]
0x00556186  895c2420              mov    dword ptr [esp + 0x20], ebx
0x0055618A  e801992000            call   0x75fa90  ; -> sub_75FA90
0x0055618F  53                    push   ebx
0x00556190  8d4c2418              lea    ecx, [esp + 0x18]
0x00556194  e8f7982000            call   0x75fa90  ; -> sub_75FA90
0x00556199  83c501                add    ebp, 1
0x0055619C  83fd09                cmp    ebp, 9
0x0055619F  896c2418              mov    dword ptr [esp + 0x18], ebp
0x005561A3  0f8297f9ffff          jb     0x555b40  ; -> sub_555B40
0x005561A9  381dbc20b100          cmp    byte ptr [0xb120bc], bl
0x005561AF  7426                  je     0x5561d7  ; -> sub_5561D7
0x005561B1  8b4c2424              mov    ecx, dword ptr [esp + 0x24]
0x005561B5  3bcb                  cmp    ecx, ebx
0x005561B7  741e                  je     0x5561d7  ; -> sub_5561D7
0x005561B9  8b442428              mov    eax, dword ptr [esp + 0x28]
0x005561BD  3bc3                  cmp    eax, ebx
0x005561BF  7416                  je     0x5561d7  ; -> sub_5561D7
0x005561C1  d905acfaa200          fld    dword ptr [0xa2faac]
0x005561C7  53                    push   ebx
0x005561C8  53                    push   ebx
0x005561C9  51                    push   ecx
0x005561CA  d91c24                fstp   dword ptr [esp]
0x005561CD  50                    push   eax
0x005561CE  51                    push   ecx
0x005561CF  e84cb7f2ff            call   0x481920  ; -> sub_481920
0x005561D4  83c414                add    esp, 0x14
0x005561D7  8bbc24a8000000        mov    edi, dword ptr [esp + 0xa8]
0x005561DE  395f60                cmp    dword ptr [edi + 0x60], ebx
0x005561E1  7421                  je     0x556204  ; -> sub_556204
0x005561E3  8b8424ac000000        mov    eax, dword ptr [esp + 0xac]
0x005561EA  8b8c24a4000000        mov    ecx, dword ptr [esp + 0xa4]
0x005561F1  8b9424a0000000        mov    edx, dword ptr [esp + 0xa0]
0x005561F8  50                    push   eax
0x005561F9  57                    push   edi
0x005561FA  51                    push   ecx
0x005561FB  52                    push   edx
0x005561FC  e85fe0ffff            call   0x554260  ; -> sub_554260
0x00556201  83c410                add    esp, 0x10
0x00556204  399fb8000000          cmp    dword ptr [edi + 0xb8], ebx
0x0055620A  7429                  je     0x556235  ; -> sub_556235
0x0055620C  399fbc000000          cmp    dword ptr [edi + 0xbc], ebx
0x00556212  7421                  je     0x556235  ; -> sub_556235
0x00556214  8b8424ac000000        mov    eax, dword ptr [esp + 0xac]
0x0055621B  8b8c24a4000000        mov    ecx, dword ptr [esp + 0xa4]
0x00556222  8b9424a0000000        mov    edx, dword ptr [esp + 0xa0]
0x00556229  50                    push   eax
0x0055622A  57                    push   edi
0x0055622B  51                    push   ecx
0x0055622C  52                    push   edx
0x0055622D  e8bee5ffff            call   0x5547f0  ; -> sub_5547F0
0x00556232  83c410                add    esp, 0x10
0x00556235  8b442454              mov    eax, dword ptr [esp + 0x54]
0x00556239  50                    push   eax
0x0055623A  e8e1bceaff            call   0x401f20  ; -> sub_401F20
0x0055623F  53                    push   ebx
0x00556240  e8dbbceaff            call   0x401f20  ; -> sub_401F20
0x00556245  8b4c2464              mov    ecx, dword ptr [esp + 0x64]
0x00556249  51                    push   ecx
0x0055624A  e8d1bceaff            call   0x401f20  ; -> sub_401F20
0x0055624F  8b542450              mov    edx, dword ptr [esp + 0x50]
0x00556253  52                    push   edx
0x00556254  e8c7bceaff            call   0x401f20  ; -> sub_401F20
0x00556259  8b44245c              mov    eax, dword ptr [esp + 0x5c]
0x0055625D  50                    push   eax
0x0055625E  e8bdbceaff            call   0x401f20  ; -> sub_401F20
0x00556263  56                    push   esi
0x00556264  e8b7bceaff            call   0x401f20  ; -> sub_401F20
0x00556269  8b44242c              mov    eax, dword ptr [esp + 0x2c]
0x0055626D  83c418                add    esp, 0x18
0x00556270  3bc3                  cmp    eax, ebx
0x00556272  889c2498000000        mov    byte ptr [esp + 0x98], bl
0x00556279  741e                  je     0x556299  ; -> sub_556299
0x0055627B  8bf0                  mov    esi, eax
0x0055627D  83c004                add    eax, 4
0x00556280  50                    push   eax
0x00556281  ff157c80a200          call   dword ptr [0xa2807c]
0x00556287  85c0                  test   eax, eax
0x00556289  750e                  jne    0x556299  ; -> sub_556299
0x0055628B  3bf3                  cmp    esi, ebx
0x0055628D  740a                  je     0x556299  ; -> sub_556299
0x0055628F  8b16                  mov    edx, dword ptr [esi]
0x00556291  8b02                  mov    eax, dword ptr [edx]
0x00556293  6a01                  push   1
0x00556295  8bce                  mov    ecx, esi
0x00556297  ffd0                  call   eax
0x00556299  8b742420              mov    esi, dword ptr [esp + 0x20]
0x0055629D  3bf3                  cmp    esi, ebx
0x0055629F  c7842498000000ffffffff  mov    dword ptr [esp + 0x98], 0xffffffff
0x005562AA  7418                  je     0x5562c4  ; -> sub_5562C4
0x005562AC  8d4e04                lea    ecx, [esi + 4]
0x005562AF  51                    push   ecx
0x005562B0  ff157c80a200          call   dword ptr [0xa2807c]
0x005562B6  85c0                  test   eax, eax
0x005562B8  750a                  jne    0x5562c4  ; -> sub_5562C4
0x005562BA  8b16                  mov    edx, dword ptr [esi]
0x005562BC  8b02                  mov    eax, dword ptr [edx]
0x005562BE  6a01                  push   1
0x005562C0  8bce                  mov    ecx, esi
0x005562C2  ffd0                  call   eax
0x005562C4  b001                  mov    al, 1
0x005562C6  8b8c2490000000        mov    ecx, dword ptr [esp + 0x90]
0x005562CD  64890d00000000        mov    dword ptr fs:[0], ecx
0x005562D4  59                    pop    ecx
0x005562D5  5f                    pop    edi
0x005562D6  5e                    pop    esi
0x005562D7  5d                    pop    ebp
0x005562D8  5b                    pop    ebx
0x005562D9  81c488000000          add    esp, 0x88
0x005562DF  c3                    ret    
0x005562E0  805c550080            sbb    byte ptr [ebp + edx*2], 0x80
0x005562E5  5c                    pop    esp
0x005562E6  55                    push   ebp
0x005562E7  00805c5500c2          add    byte ptr [eax - 0x3dffaaa4], al
0x005562ED  5c                    pop    esp
0x005562EE  55                    push   ebp
0x005562EF  00c2                  add    dl, al
0x005562F1  5c                    pop    esp
0x005562F2  55                    push   ebp
0x005562F3  00c2                  add    dl, al
0x005562F5  5c                    pop    esp
0x005562F6  55                    push   ebp
0x005562F7  00c2                  add    dl, al
0x005562F9  5c                    pop    esp
0x005562FA  55                    push   ebp
0x005562FB  00cc                  add    ah, cl
0x005562FD  cc                    int3   
0x005562FE  cc                    int3   
0x005562FF  cc                    int3   
0x00556300  8b5104                mov    edx, dword ptr [ecx + 4]
0x00556303  85d2                  test   edx, edx
0x00556305  7503                  jne    0x55630a  ; -> sub_55630A
0x00556307  33c0                  xor    eax, eax
0x00556309  c3                    ret    
0x0055630A  8b4108                mov    eax, dword ptr [ecx + 8]
0x0055630D  2bc2                  sub    eax, edx
0x0055630F  c1f806                sar    eax, 6
0x00556312  c3                    ret    
0x00556313  cc                    int3   
0x00556314  cc                    int3   
0x00556315  cc                    int3   
0x00556316  cc                    int3   
0x00556317  cc                    int3   
0x00556318  cc                    int3   
0x00556319  cc                    int3   
0x0055631A  cc                    int3   
0x0055631B  cc                    int3   
0x0055631C  cc                    int3   
0x0055631D  cc                    int3   
0x0055631E  cc                    int3   
0x0055631F  cc                    int3   
0x00556320  56                    push   esi
0x00556321  8bf1                  mov    esi, ecx
0x00556323  8b4e04                mov    ecx, dword ptr [esi + 4]
0x00556326  85c9                  test   ecx, ecx
0x00556328  57                    push   edi
0x00556329  8b7c240c              mov    edi, dword ptr [esp + 0xc]
0x0055632D  740c                  je     0x55633b  ; -> sub_55633B
0x0055632F  8b4608                mov    eax, dword ptr [esi + 8]
0x00556332  2bc1                  sub    eax, ecx
0x00556334  c1f806                sar    eax, 6
0x00556337  3bf8                  cmp    edi, eax
0x00556339  7205                  jb     0x556340  ; -> sub_556340
0x0055633B  e81eea4200            call   0x984d5e  ; -> sub_984D5E
0x00556340  8bc7                  mov    eax, edi
0x00556342  c1e006                shl    eax, 6
0x00556345  034604                add    eax, dword ptr [esi + 4]
0x00556348  5f                    pop    edi
0x00556349  5e                    pop    esi
0x0055634A  c20400                ret    4
0x0055634D  cc                    int3   
0x0055634E  cc                    int3   
0x0055634F  cc                    int3   
0x00556350  8b4c2404              mov    ecx, dword ptr [esp + 4]
0x00556354  83ec0c                sub    esp, 0xc
0x00556357  85c9                  test   ecx, ecx
0x00556359  7712                  ja     0x55636d  ; -> sub_55636D
0x0055635B  33c9                  xor    ecx, ecx
0x0055635D  c1e106                shl    ecx, 6
0x00556360  51                    push   ecx
0x00556361  e89abbeaff            call   0x401f00  ; -> sub_401F00
0x00556366  83c404                add    esp, 4
0x00556369  83c40c                add    esp, 0xc
0x0055636C  c3                    ret    
0x0055636D  83c8ff                or     eax, 0xffffffff
0x00556370  33d2                  xor    edx, edx
0x00556372  f7f1                  div    ecx
0x00556374  83f840                cmp    eax, 0x40
0x00556377  73e4                  jae    0x55635d  ; -> sub_55635D
0x00556379  8d442410              lea    eax, [esp + 0x10]
0x0055637D  50                    push   eax
0x0055637E  8d4c2404              lea    ecx, [esp + 4]
0x00556382  c744241400000000      mov    dword ptr [esp + 0x14], 0
0x0055638A  e816d94200            call   0x983ca5  ; -> sub_983CA5
0x0055638F  68347fad00            push   0xad7f34  ; -> sub_AD7F34
0x00556394  8d4c2404              lea    ecx, [esp + 4]
0x00556398  51                    push   ecx
0x00556399  c74424088824a300      mov    dword ptr [esp + 8], 0xa32488  ; -> sub_A32488
0x005563A1  e8a6db4200            call   0x983f4c  ; -> sub_983F4C
0x005563A6  cc                    int3   
0x005563A7  cc                    int3   
0x005563A8  cc                    int3   
0x005563A9  cc                    int3   
0x005563AA  cc                    int3   
0x005563AB  cc                    int3   
0x005563AC  cc                    int3   
0x005563AD  cc                    int3   
0x005563AE  cc                    int3   
0x005563AF  cc                    int3   
0x005563B0  80790400              cmp    byte ptr [ecx + 4], 0
0x005563B4  740d                  je     0x5563c3  ; -> sub_5563C3
0x005563B6  8b01                  mov    eax, dword ptr [ecx]
0x005563B8  6a01                  push   1
0x005563BA  6a00                  push   0
0x005563BC  50                    push   eax
0x005563BD  ff153c81a200          call   dword ptr [0xa2813c]
0x005563C3  c3                    ret    
0x005563C4  cc                    int3   
0x005563C5  cc                    int3   
0x005563C6  cc                    int3   
0x005563C7  cc                    int3   
0x005563C8  cc                    int3   
0x005563C9  cc                    int3   
0x005563CA  cc                    int3   
0x005563CB  cc                    int3   
0x005563CC  cc                    int3   
0x005563CD  cc                    int3   
0x005563CE  cc                    int3   
0x005563CF  cc                    int3   
0x005563D0  b8889db300            mov    eax, 0xb39d88  ; -> sub_B39D88
0x005563D5  c3                    ret    
0x005563D6  cc                    int3   
0x005563D7  cc                    int3   
0x005563D8  cc                    int3   
0x005563D9  cc                    int3   
0x005563DA  cc                    int3   
0x005563DB  cc                    int3   
0x005563DC  cc                    int3   
0x005563DD  cc                    int3   
0x005563DE  cc                    int3   
0x005563DF  cc                    int3   
0x005563E0  8b4c2404              mov    ecx, dword ptr [esp + 4]
0x005563E4  83ec0c                sub    esp, 0xc
0x005563E7  85c9                  test   ecx, ecx
0x005563E9  7712                  ja     0x5563fd  ; -> sub_5563FD
0x005563EB  33c9                  xor    ecx, ecx
0x005563ED  c1e105                shl    ecx, 5
0x005563F0  51                    push   ecx
0x005563F1  e80abbeaff            call   0x401f00  ; -> sub_401F00
0x005563F6  83c404                add    esp, 4
0x005563F9  83c40c                add    esp, 0xc
0x005563FC  c3                    ret    
0x005563FD  83c8ff                or     eax, 0xffffffff
0x00556400  33d2                  xor    edx, edx
0x00556402  f7f1                  div    ecx
0x00556404  83f820                cmp    eax, 0x20
0x00556407  73e4                  jae    0x5563ed  ; -> sub_5563ED
0x00556409  8d442410              lea    eax, [esp + 0x10]
0x0055640D  50                    push   eax
0x0055640E  8d4c2404              lea    ecx, [esp + 4]
0x00556412  c744241400000000      mov    dword ptr [esp + 0x14], 0
0x0055641A  e886d84200            call   0x983ca5  ; -> sub_983CA5
0x0055641F  68347fad00            push   0xad7f34  ; -> sub_AD7F34
0x00556424  8d4c2404              lea    ecx, [esp + 4]
0x00556428  51                    push   ecx
0x00556429  c74424088824a300      mov    dword ptr [esp + 8], 0xa32488  ; -> sub_A32488
0x00556431  e816db4200            call   0x983f4c  ; -> sub_983F4C
0x00556436  cc                    int3   
0x00556437  cc                    int3   
0x00556438  cc                    int3   
0x00556439  cc                    int3   
0x0055643A  cc                    int3   
0x0055643B  cc                    int3   
0x0055643C  cc                    int3   
0x0055643D  cc                    int3   
0x0055643E  cc                    int3   
0x0055643F  cc                    int3   
0x00556440  8b4c2404              mov    ecx, dword ptr [esp + 4]
0x00556444  83ec0c                sub    esp, 0xc
0x00556447  85c9                  test   ecx, ecx
0x00556449  7712                  ja     0x55645d  ; -> sub_55645D
0x0055644B  33c9                  xor    ecx, ecx
0x0055644D  6bc92c                imul   ecx, ecx, 0x2c
0x00556450  51                    push   ecx
0x00556451  e8aabaeaff            call   0x401f00  ; -> sub_401F00
0x00556456  83c404                add    esp, 4
0x00556459  83c40c                add    esp, 0xc
0x0055645C  c3                    ret    
0x0055645D  83c8ff                or     eax, 0xffffffff
0x00556460  33d2                  xor    edx, edx
0x00556462  f7f1                  div    ecx
0x00556464  83f82c                cmp    eax, 0x2c
0x00556467  73e4                  jae    0x55644d  ; -> sub_55644D
0x00556469  8d442410              lea    eax, [esp + 0x10]
0x0055646D  50                    push   eax
0x0055646E  8d4c2404              lea    ecx, [esp + 4]
0x00556472  c744241400000000      mov    dword ptr [esp + 0x14], 0
0x0055647A  e826d84200            call   0x983ca5  ; -> sub_983CA5
0x0055647F  68347fad00            push   0xad7f34  ; -> sub_AD7F34
0x00556484  8d4c2404              lea    ecx, [esp + 4]
0x00556488  51                    push   ecx
0x00556489  c74424088824a300      mov    dword ptr [esp + 8], 0xa32488  ; -> sub_A32488
0x00556491  e8b6da4200            call   0x983f4c  ; -> sub_983F4C
0x00556496  cc                    int3   
0x00556497  cc                    int3   
0x00556498  cc                    int3   
0x00556499  cc                    int3   
0x0055649A  cc                    int3   
0x0055649B  cc                    int3   
0x0055649C  cc                    int3   
0x0055649D  cc                    int3   
0x0055649E  cc                    int3   
0x0055649F  cc                    int3   
0x005564A0  56                    push   esi
0x005564A1  57                    push   edi
0x005564A2  8bf1                  mov    esi, ecx
0x005564A4  33ff                  xor    edi, edi
0x005564A6  6864fdb300            push   0xb3fd64  ; -> sub_B3FD64
0x005564AB  c706f8fca300          mov    dword ptr [esi], 0xa3fcf8  ; -> sub_A3FCF8
0x005564B1  897e04                mov    dword ptr [esi + 4], edi
0x005564B4  ff157880a200          call   dword ptr [0xa28078]
0x005564BA  897e14                mov    dword ptr [esi + 0x14], edi
0x005564BD  897e18                mov    dword ptr [esi + 0x18], edi
0x005564C0  897e08                mov    dword ptr [esi + 8], edi
0x005564C3  897e0c                mov    dword ptr [esi + 0xc], edi
0x005564C6  897e10                mov    dword ptr [esi + 0x10], edi
0x005564C9  5f                    pop    edi
0x005564CA  c706984aa600          mov    dword ptr [esi], 0xa64a98  ; -> sub_A64A98
0x005564D0  8bc6                  mov    eax, esi
0x005564D2  5e                    pop    esi
0x005564D3  c3                    ret    
0x005564D4  cc                    int3   
0x005564D5  cc                    int3   
0x005564D6  cc                    int3   
0x005564D7  cc                    int3   
0x005564D8  cc                    int3   
0x005564D9  cc                    int3   
0x005564DA  cc                    int3   
0x005564DB  cc                    int3   
0x005564DC  cc                    int3   
0x005564DD  cc                    int3   
0x005564DE  cc                    int3   
0x005564DF  cc                    int3   
0x005564E0  83ec08                sub    esp, 8
0x005564E3  894c2404              mov    dword ptr [esp + 4], ecx
0x005564E7  8b4908                mov    ecx, dword ptr [ecx + 8]
0x005564EA  33c0                  xor    eax, eax
0x005564EC  85c9                  test   ecx, ecx
0x005564EE  0f84f8000000          je     0x5565ec  ; -> sub_5565EC
0x005564F4  56                    push   esi
0x005564F5  8b7108                mov    esi, dword ptr [ecx + 8]
0x005564F8  85f6                  test   esi, esi
0x005564FA  0f84eb000000          je     0x5565eb  ; -> sub_5565EB
0x00556500  53                    push   ebx
0x00556501  55                    push   ebp
0x00556502  57                    push   edi
0x00556503  c744241024000000      mov    dword ptr [esp + 0x10], 0x24
0x0055650B  33ff                  xor    edi, edi
0x0055650D  8d4900                lea    ecx, [ecx]
0x00556510  8b443708              mov    eax, dword ptr [edi + esi + 8]
0x00556514  85c0                  test   eax, eax
0x00556516  7417                  je     0x55652f  ; -> sub_55652F
0x00556518  8b74370c              mov    esi, dword ptr [edi + esi + 0xc]
0x0055651C  2bf0                  sub    esi, eax
0x0055651E  b867666666            mov    eax, 0x66666667
0x00556523  f7ee                  imul   esi
0x00556525  c1fa03                sar    edx, 3
0x00556528  8bc2                  mov    eax, edx
0x0055652A  c1e81f                shr    eax, 0x1f
0x0055652D  03c2                  add    eax, edx
0x0055652F  c1e004                shl    eax, 4
0x00556532  01442410              add    dword ptr [esp + 0x10], eax
0x00556536  33db                  xor    ebx, ebx
0x00556538  33ed                  xor    ebp, ebp
0x0055653A  8d9b00000000          lea    ebx, [ebx]
0x00556540  8b442414              mov    eax, dword ptr [esp + 0x14]
0x00556544  8b4808                mov    ecx, dword ptr [eax + 8]
0x00556547  8b7108                mov    esi, dword ptr [ecx + 8]
0x0055654A  8b443708              mov    eax, dword ptr [edi + esi + 8]
0x0055654E  85c0                  test   eax, eax
0x00556550  0f8482000000          je     0x5565d8  ; -> sub_5565D8
0x00556556  8b4c370c              mov    ecx, dword ptr [edi + esi + 0xc]
0x0055655A  2bc8                  sub    ecx, eax
0x0055655C  b867666666            mov    eax, 0x66666667
0x00556561  f7e9                  imul   ecx
0x00556563  c1fa03                sar    edx, 3
0x00556566  8bc2                  mov    eax, edx
0x00556568  c1e81f                shr    eax, 0x1f
0x0055656B  03c2                  add    eax, edx
0x0055656D  3bd8                  cmp    ebx, eax
0x0055656F  7367                  jae    0x5565d8  ; -> sub_5565D8
0x00556571  8b443708              mov    eax, dword ptr [edi + esi + 8]
0x00556575  85c0                  test   eax, eax
0x00556577  741b                  je     0x556594  ; -> sub_556594
0x00556579  8b4c370c              mov    ecx, dword ptr [edi + esi + 0xc]
0x0055657D  2bc8                  sub    ecx, eax
0x0055657F  b867666666            mov    eax, 0x66666667
0x00556584  f7e9                  imul   ecx
0x00556586  c1fa03                sar    edx, 3
0x00556589  8bc2                  mov    eax, edx
0x0055658B  c1e81f                shr    eax, 0x1f
0x0055658E  03c2                  add    eax, edx
0x00556590  3bd8                  cmp    ebx, eax
0x00556592  7205                  jb     0x556599  ; -> sub_556599
0x00556594  e8c5e74200            call   0x984d5e  ; -> sub_984D5E
0x00556599  8b543708              mov    edx, dword ptr [edi + esi + 8]
0x0055659D  8d442a04              lea    eax, [edx + ebp + 4]
0x005565A1  8b5004                mov    edx, dword ptr [eax + 4]
0x005565A4  85d2                  test   edx, edx
0x005565A6  7504                  jne    0x5565ac  ; -> sub_5565AC
0x005565A8  33c0                  xor    eax, eax
0x005565AA  eb13                  jmp    0x5565bf  ; -> sub_5565BF
0x005565AC  8b4808                mov    ecx, dword ptr [eax + 8]
0x005565AF  2bca                  sub    ecx, edx
0x005565B1  b8abaaaa2a            mov    eax, 0x2aaaaaab
0x005565B6  f7e9                  imul   ecx
0x005565B8  8bc2                  mov    eax, edx
0x005565BA  c1e81f                shr    eax, 0x1f
0x005565BD  03c2                  add    eax, edx
0x005565BF  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x005565C3  8d0440                lea    eax, [eax + eax*2]
0x005565C6  8d1441                lea    edx, [ecx + eax*2]
0x005565C9  83c301                add    ebx, 1
0x005565CC  89542410              mov    dword ptr [esp + 0x10], edx
0x005565D0  83c514                add    ebp, 0x14
0x005565D3  e968ffffff            jmp    0x556540  ; -> sub_556540
0x005565D8  83c710                add    edi, 0x10
0x005565DB  83ff20                cmp    edi, 0x20
0x005565DE  0f822cffffff          jb     0x556510  ; -> sub_556510
0x005565E4  8b442410              mov    eax, dword ptr [esp + 0x10]
0x005565E8  5f                    pop    edi
0x005565E9  5d                    pop    ebp
0x005565EA  5b                    pop    ebx
0x005565EB  5e                    pop    esi
0x005565EC  83c408                add    esp, 8
0x005565EF  c3                    ret    
0x005565F0  8b5108                mov    edx, dword ptr [ecx + 8]
0x005565F3  83ec24                sub    esp, 0x24
0x005565F6  57                    push   edi
0x005565F7  33ff                  xor    edi, edi
0x005565F9  85d2                  test   edx, edx
0x005565FB  7440                  je     0x55663d  ; -> sub_55663D
0x005565FD  0fb74204              movzx  eax, word ptr [edx + 4]
0x00556601  663dffff              cmp    ax, 0xffff
0x00556605  7517                  jne    0x55661e  ; -> sub_55661E
0x00556607  8b02                  mov    eax, dword ptr [edx]
0x00556609  56                    push   esi
0x0055660A  8d7001                lea    esi, [eax + 1]
0x0055660D  8d4900                lea    ecx, [ecx]
0x00556610  8a08                  mov    cl, byte ptr [eax]
0x00556612  83c001                add    eax, 1
0x00556615  84c9                  test   cl, cl
0x00556617  75f7                  jne    0x556610  ; -> sub_556610
0x00556619  2bc6                  sub    eax, esi
0x0055661B  5e                    pop    esi
0x0055661C  eb03                  jmp    0x556621  ; -> sub_556621
0x0055661E  0fb7c0                movzx  eax, ax
0x00556621  85c0                  test   eax, eax
0x00556623  7418                  je     0x55663d  ; -> sub_55663D
0x00556625  8b12                  mov    edx, dword ptr [edx]
0x00556627  8d442404              lea    eax, [esp + 4]
0x0055662B  50                    push   eax
0x0055662C  6a00                  push   0
0x0055662E  52                    push   edx
0x0055662F  ff157c81a200          call   dword ptr [0xa2817c]
0x00556635  85c0                  test   eax, eax
0x00556637  8b442424              mov    eax, dword ptr [esp + 0x24]
0x0055663B  7502                  jne    0x55663f  ; -> sub_55663F
0x0055663D  8bc7                  mov    eax, edi
0x0055663F  5f                    pop    edi
0x00556640  83c424                add    esp, 0x24
0x00556643  c3                    ret    
0x00556644  cc                    int3   
0x00556645  cc                    int3   
0x00556646  cc                    int3   
0x00556647  cc                    int3   
0x00556648  cc                    int3   
0x00556649  cc                    int3   
0x0055664A  cc                    int3   
0x0055664B  cc                    int3   
0x0055664C  cc                    int3   
0x0055664D  cc                    int3   
0x0055664E  cc                    int3   
0x0055664F  cc                    int3   
0x00556650  83ec08                sub    esp, 8
0x00556653  8bd1                  mov    edx, ecx
0x00556655  8b4a0c                mov    ecx, dword ptr [edx + 0xc]
0x00556658  33c0                  xor    eax, eax
0x0055665A  85c9                  test   ecx, ecx
0x0055665C  89542404              mov    dword ptr [esp + 4], edx
0x00556660  0f84b0000000          je     0x556716  ; -> sub_556716
0x00556666  56                    push   esi
0x00556667  8b7108                mov    esi, dword ptr [ecx + 8]
0x0055666A  85f6                  test   esi, esi
0x0055666C  0f84a3000000          je     0x556715  ; -> sub_556715
0x00556672  53                    push   ebx
0x00556673  55                    push   ebp
0x00556674  57                    push   edi
0x00556675  c744241024000000      mov    dword ptr [esp + 0x10], 0x24
0x0055667D  33ff                  xor    edi, edi
0x0055667F  90                    nop    
0x00556680  8b443708              mov    eax, dword ptr [edi + esi + 8]
0x00556684  85c0                  test   eax, eax
0x00556686  7504                  jne    0x55668c  ; -> sub_55668C
0x00556688  33f6                  xor    esi, esi
0x0055668A  eb09                  jmp    0x556695  ; -> sub_556695
0x0055668C  8b74370c              mov    esi, dword ptr [edi + esi + 0xc]
0x00556690  2bf0                  sub    esi, eax
0x00556692  c1fe06                sar    esi, 6
0x00556695  c1e606                shl    esi, 6
0x00556698  01742410              add    dword ptr [esp + 0x10], esi
0x0055669C  33db                  xor    ebx, ebx
0x0055669E  33ed                  xor    ebp, ebp
0x005566A0  8b420c                mov    eax, dword ptr [edx + 0xc]
0x005566A3  8b7008                mov    esi, dword ptr [eax + 8]
0x005566A6  8b4c3708              mov    ecx, dword ptr [edi + esi + 8]
0x005566AA  85c9                  test   ecx, ecx
0x005566AC  7454                  je     0x556702  ; -> sub_556702
0x005566AE  8b44370c              mov    eax, dword ptr [edi + esi + 0xc]
0x005566B2  2bc1                  sub    eax, ecx
0x005566B4  c1f806                sar    eax, 6
0x005566B7  3bd8                  cmp    ebx, eax
0x005566B9  7347                  jae    0x556702  ; -> sub_556702
0x005566BB  85c9                  test   ecx, ecx
0x005566BD  740d                  je     0x5566cc  ; -> sub_5566CC
0x005566BF  8b44370c              mov    eax, dword ptr [edi + esi + 0xc]
0x005566C3  2bc1                  sub    eax, ecx
0x005566C5  c1f806                sar    eax, 6
0x005566C8  3bd8                  cmp    ebx, eax
0x005566CA  7209                  jb     0x5566d5  ; -> sub_5566D5
0x005566CC  e88de64200            call   0x984d5e  ; -> sub_984D5E
0x005566D1  8b542414              mov    edx, dword ptr [esp + 0x14]
0x005566D5  8b4c3708              mov    ecx, dword ptr [edi + esi + 8]
0x005566D9  8d442910              lea    eax, [ecx + ebp + 0x10]
0x005566DD  8b4804                mov    ecx, dword ptr [eax + 4]
0x005566E0  85c9                  test   ecx, ecx
0x005566E2  7504                  jne    0x5566e8  ; -> sub_5566E8
0x005566E4  33c0                  xor    eax, eax
0x005566E6  eb05                  jmp    0x5566ed  ; -> sub_5566ED
0x005566E8  8b4008                mov    eax, dword ptr [eax + 8]
0x005566EB  2bc1                  sub    eax, ecx
0x005566ED  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x005566F1  03c8                  add    ecx, eax
0x005566F3  8d0441                lea    eax, [ecx + eax*2]
0x005566F6  83c301                add    ebx, 1
0x005566F9  89442410              mov    dword ptr [esp + 0x10], eax
0x005566FD  83c540                add    ebp, 0x40
0x00556700  eb9e                  jmp    0x5566a0  ; -> sub_5566A0
0x00556702  83c710                add    edi, 0x10
0x00556705  83ff20                cmp    edi, 0x20
0x00556708  0f8272ffffff          jb     0x556680  ; -> sub_556680
0x0055670E  8b442410              mov    eax, dword ptr [esp + 0x10]
0x00556712  5f                    pop    edi
0x00556713  5d                    pop    ebp
0x00556714  5b                    pop    ebx
0x00556715  5e                    pop    esi
0x00556716  83c408                add    esp, 8
0x00556719  c3                    ret    
0x0055671A  cc                    int3   
0x0055671B  cc                    int3   
0x0055671C  cc                    int3   
0x0055671D  cc                    int3   
0x0055671E  cc                    int3   
0x0055671F  cc                    int3   
0x00556720  8b510c                mov    edx, dword ptr [ecx + 0xc]
0x00556723  83ec24                sub    esp, 0x24
0x00556726  57                    push   edi
0x00556727  33ff                  xor    edi, edi
0x00556729  85d2                  test   edx, edx
0x0055672B  7440                  je     0x55676d  ; -> sub_55676D
0x0055672D  0fb74204              movzx  eax, word ptr [edx + 4]
0x00556731  663dffff              cmp    ax, 0xffff
0x00556735  7517                  jne    0x55674e  ; -> sub_55674E
0x00556737  8b02                  mov    eax, dword ptr [edx]
0x00556739  56                    push   esi
0x0055673A  8d7001                lea    esi, [eax + 1]
0x0055673D  8d4900                lea    ecx, [ecx]
0x00556740  8a08                  mov    cl, byte ptr [eax]
0x00556742  83c001                add    eax, 1
0x00556745  84c9                  test   cl, cl
0x00556747  75f7                  jne    0x556740  ; -> sub_556740
0x00556749  2bc6                  sub    eax, esi
0x0055674B  5e                    pop    esi
0x0055674C  eb03                  jmp    0x556751  ; -> sub_556751
0x0055674E  0fb7c0                movzx  eax, ax
0x00556751  85c0                  test   eax, eax
0x00556753  7418                  je     0x55676d  ; -> sub_55676D
0x00556755  8b12                  mov    edx, dword ptr [edx]
0x00556757  8d442404              lea    eax, [esp + 4]
0x0055675B  50                    push   eax
0x0055675C  6a00                  push   0
0x0055675E  52                    push   edx
0x0055675F  ff157c81a200          call   dword ptr [0xa2817c]
0x00556765  85c0                  test   eax, eax
0x00556767  8b442424              mov    eax, dword ptr [esp + 0x24]
0x0055676B  7502                  jne    0x55676f  ; -> sub_55676F
0x0055676D  8bc7                  mov    eax, edi
0x0055676F  5f                    pop    edi
0x00556770  83c424                add    esp, 0x24
0x00556773  c3                    ret    
0x00556774  cc                    int3   
0x00556775  cc                    int3   
0x00556776  cc                    int3   
0x00556777  cc                    int3   
0x00556778  cc                    int3   
0x00556779  cc                    int3   
0x0055677A  cc                    int3   
0x0055677B  cc                    int3   
0x0055677C  cc                    int3   
0x0055677D  cc                    int3   
0x0055677E  cc                    int3   
0x0055677F  cc                    int3   
0x00556780  8b4c2404              mov    ecx, dword ptr [esp + 4]
0x00556784  56                    push   esi
0x00556785  8b74240c              mov    esi, dword ptr [esp + 0xc]
0x00556789  8bd6                  mov    edx, esi
0x0055678B  2bd1                  sub    edx, ecx
0x0055678D  b8abaaaa2a            mov    eax, 0x2aaaaaab
0x00556792  f7ea                  imul   edx
0x00556794  8bc2                  mov    eax, edx
0x00556796  c1e81f                shr    eax, 0x1f
0x00556799  03c2                  add    eax, edx
0x0055679B  3bce                  cmp    ecx, esi
0x0055679D  8b542410              mov    edx, dword ptr [esp + 0x10]
0x005567A1  8d0440                lea    eax, [eax + eax*2]
0x005567A4  8d0442                lea    eax, [edx + eax*2]
0x005567A7  741d                  je     0x5567c6  ; -> sub_5567C6
0x005567A9  2bd1                  sub    edx, ecx
0x005567AB  57                    push   edi
0x005567AC  8d642400              lea    esp, [esp]
0x005567B0  8b39                  mov    edi, dword ptr [ecx]
0x005567B2  893c0a                mov    dword ptr [edx + ecx], edi
0x005567B5  668b7904              mov    di, word ptr [ecx + 4]
0x005567B9  66897c0a04            mov    word ptr [edx + ecx + 4], di
0x005567BE  83c106                add    ecx, 6
0x005567C1  3bce                  cmp    ecx, esi
0x005567C3  75eb                  jne    0x5567b0  ; -> sub_5567B0
0x005567C5  5f                    pop    edi
0x005567C6  5e                    pop    esi
0x005567C7  c3                    ret    
0x005567C8  cc                    int3   
0x005567C9  cc                    int3   
0x005567CA  cc                    int3   
0x005567CB  cc                    int3   
0x005567CC  cc                    int3   
0x005567CD  cc                    int3   
0x005567CE  cc                    int3   
0x005567CF  cc                    int3   
0x005567D0  8b4c2404              mov    ecx, dword ptr [esp + 4]
0x005567D4  8b542408              mov    edx, dword ptr [esp + 8]
0x005567D8  3bca                  cmp    ecx, edx
0x005567DA  8b44240c              mov    eax, dword ptr [esp + 0xc]
0x005567DE  741c                  je     0x5567fc  ; -> sub_5567FC
0x005567E0  56                    push   esi
0x005567E1  85c0                  test   eax, eax
0x005567E3  740c                  je     0x5567f1  ; -> sub_5567F1
0x005567E5  8b31                  mov    esi, dword ptr [ecx]
0x005567E7  8930                  mov    dword ptr [eax], esi
0x005567E9  668b7104              mov    si, word ptr [ecx + 4]
0x005567ED  66897004              mov    word ptr [eax + 4], si
0x005567F1  83c106                add    ecx, 6
0x005567F4  83c006                add    eax, 6
0x005567F7  3bca                  cmp    ecx, edx
0x005567F9  75e6                  jne    0x5567e1  ; -> sub_5567E1
0x005567FB  5e                    pop    esi
0x005567FC  c3                    ret    
0x005567FD  cc                    int3   
0x005567FE  cc                    int3   
0x005567FF  cc                    int3   
0x00556800  53                    push   ebx
0x00556801  55                    push   ebp
0x00556802  56                    push   esi
0x00556803  8bf1                  mov    esi, ecx
0x00556805  8b4604                mov    eax, dword ptr [esi + 4]
0x00556808  85c0                  test   eax, eax
0x0055680A  57                    push   edi
0x0055680B  7504                  jne    0x556811  ; -> sub_556811
0x0055680D  33db                  xor    ebx, ebx
0x0055680F  eb15                  jmp    0x556826  ; -> sub_556826
0x00556811  8b4e08                mov    ecx, dword ptr [esi + 8]
0x00556814  2bc8                  sub    ecx, eax
0x00556816  b8abaaaa2a            mov    eax, 0x2aaaaaab
0x0055681B  f7e9                  imul   ecx
0x0055681D  d1fa                  sar    edx, 1
0x0055681F  8bda                  mov    ebx, edx
0x00556821  c1eb1f                shr    ebx, 0x1f
0x00556824  03da                  add    ebx, edx
0x00556826  33ff                  xor    edi, edi
0x00556828  33ed                  xor    ebp, ebp
0x0055682A  8d9b00000000          lea    ebx, [ebx]
0x00556830  8b8694000000          mov    eax, dword ptr [esi + 0x94]
0x00556836  85c0                  test   eax, eax
0x00556838  0f8490000000          je     0x5568ce  ; -> sub_5568CE
0x0055683E  8b8e98000000          mov    ecx, dword ptr [esi + 0x98]
0x00556844  2bc8                  sub    ecx, eax
0x00556846  b8abaaaa2a            mov    eax, 0x2aaaaaab
0x0055684B  f7e9                  imul   ecx
0x0055684D  c1fa03                sar    edx, 3
0x00556850  8bc2                  mov    eax, edx
0x00556852  c1e81f                shr    eax, 0x1f
0x00556855  03c2                  add    eax, edx
0x00556857  3bf8                  cmp    edi, eax
0x00556859  7373                  jae    0x5568ce  ; -> sub_5568CE
0x0055685B  8b8694000000          mov    eax, dword ptr [esi + 0x94]
0x00556861  85c0                  test   eax, eax
0x00556863  741d                  je     0x556882  ; -> sub_556882
0x00556865  8b8e98000000          mov    ecx, dword ptr [esi + 0x98]
0x0055686B  2bc8                  sub    ecx, eax
0x0055686D  b8abaaaa2a            mov    eax, 0x2aaaaaab
0x00556872  f7e9                  imul   ecx
0x00556874  c1fa03                sar    edx, 3
0x00556877  8bc2                  mov    eax, edx
0x00556879  c1e81f                shr    eax, 0x1f
0x0055687C  03c2                  add    eax, edx
0x0055687E  3bf8                  cmp    edi, eax
0x00556880  7205                  jb     0x556887  ; -> sub_556887
0x00556882  e8d7e44200            call   0x984d5e  ; -> sub_984D5E
0x00556887  8b8694000000          mov    eax, dword ptr [esi + 0x94]
0x0055688D  395c281c              cmp    dword ptr [eax + ebp + 0x1c], ebx
0x00556891  7330                  jae    0x5568c3  ; -> sub_5568C3
0x00556893  85c0                  test   eax, eax
0x00556895  741d                  je     0x5568b4  ; -> sub_5568B4
0x00556897  8b8e98000000          mov    ecx, dword ptr [esi + 0x98]
0x0055689D  2bc8                  sub    ecx, eax
0x0055689F  b8abaaaa2a            mov    eax, 0x2aaaaaab
0x005568A4  f7e9                  imul   ecx
0x005568A6  c1fa03                sar    edx, 3
0x005568A9  8bc2                  mov    eax, edx
0x005568AB  c1e81f                shr    eax, 0x1f
0x005568AE  03c2                  add    eax, edx
0x005568B0  3bf8                  cmp    edi, eax
0x005568B2  7205                  jb     0x5568b9  ; -> sub_5568B9
0x005568B4  e8a5e44200            call   0x984d5e  ; -> sub_984D5E
0x005568B9  8b8e94000000          mov    ecx, dword ptr [esi + 0x94]
0x005568BF  8b5c291c              mov    ebx, dword ptr [ecx + ebp + 0x1c]
0x005568C3  83c701                add    edi, 1
0x005568C6  83c530                add    ebp, 0x30
0x005568C9  e962ffffff            jmp    0x556830  ; -> sub_556830
0x005568CE  5f                    pop    edi
0x005568CF  5e                    pop    esi
0x005568D0  5d                    pop    ebp
0x005568D1  8bc3                  mov    eax, ebx
0x005568D3  5b                    pop    ebx
0x005568D4  c3                    ret    
0x005568D5  cc                    int3   
0x005568D6  cc                    int3   
0x005568D7  cc                    int3   
0x005568D8  cc                    int3   
0x005568D9  cc                    int3   
0x005568DA  cc                    int3   
0x005568DB  cc                    int3   
0x005568DC  cc                    int3   
0x005568DD  cc                    int3   
0x005568DE  cc                    int3   
0x005568DF  cc                    int3   
0x005568E0  56                    push   esi
0x005568E1  8bf1                  mov    esi, ecx
0x005568E3  e828ab1c00            call   0x721410  ; -> sub_721410
0x005568E8  f644240801            test   byte ptr [esp + 8], 1
0x005568ED  7409                  je     0x5568f8  ; -> sub_5568F8
0x005568EF  56                    push   esi
0x005568F0  e82bb6eaff            call   0x401f20  ; -> sub_401F20
0x005568F5  83c404                add    esp, 4
0x005568F8  8bc6                  mov    eax, esi
0x005568FA  5e                    pop    esi
0x005568FB  c20400                ret    4
0x005568FE  cc                    int3   
0x005568FF  cc                    int3   
0x00556900  6aff                  push   -1
0x00556902  68a4c99b00            push   0x9bc9a4  ; -> sub_9BC9A4
0x00556907  64a100000000          mov    eax, dword ptr fs:[0]
0x0055690D  50                    push   eax
0x0055690E  51                    push   ecx
0x0055690F  53                    push   ebx
0x00556910  55                    push   ebp
0x00556911  56                    push   esi
0x00556912  57                    push   edi
0x00556913  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00556918  33c4                  xor    eax, esp
0x0055691A  50                    push   eax
0x0055691B  8d442418              lea    eax, [esp + 0x18]
0x0055691F  64a300000000          mov    dword ptr fs:[0], eax
0x00556925  8bf1                  mov    esi, ecx
0x00556927  89742414              mov    dword ptr [esp + 0x14], esi
0x0055692B  33db                  xor    ebx, ebx
0x0055692D  891e                  mov    dword ptr [esi], ebx
0x0055692F  66895e04              mov    word ptr [esi + 4], bx
0x00556933  66895e06              mov    word ptr [esi + 6], bx
0x00556937  895c2420              mov    dword ptr [esp + 0x20], ebx
0x0055693B  895e0c                mov    dword ptr [esi + 0xc], ebx
0x0055693E  895e10                mov    dword ptr [esi + 0x10], ebx
0x00556941  895e1c                mov    dword ptr [esi + 0x1c], ebx
0x00556944  895e20                mov    dword ptr [esi + 0x20], ebx
0x00556947  8b2d7c80a200          mov    ebp, dword ptr [0xa2807c]
0x0055694D  895e08                mov    dword ptr [esi + 8], ebx
0x00556950  8b7e10                mov    edi, dword ptr [esi + 0x10]
0x00556953  3bfb                  cmp    edi, ebx
0x00556955  c644242004            mov    byte ptr [esp + 0x20], 4
0x0055695A  741b                  je     0x556977  ; -> sub_556977
0x0055695C  8d4704                lea    eax, [edi + 4]
0x0055695F  50                    push   eax
0x00556960  ffd5                  call   ebp
0x00556962  85c0                  test   eax, eax
0x00556964  750e                  jne    0x556974  ; -> sub_556974
0x00556966  3bfb                  cmp    edi, ebx
0x00556968  740a                  je     0x556974  ; -> sub_556974
0x0055696A  8b17                  mov    edx, dword ptr [edi]
0x0055696C  8b02                  mov    eax, dword ptr [edx]
0x0055696E  6a01                  push   1
0x00556970  8bcf                  mov    ecx, edi
0x00556972  ffd0                  call   eax
0x00556974  895e10                mov    dword ptr [esi + 0x10], ebx
0x00556977  8b7e0c                mov    edi, dword ptr [esi + 0xc]
0x0055697A  3bfb                  cmp    edi, ebx
0x0055697C  741b                  je     0x556999  ; -> sub_556999
0x0055697E  8d4f04                lea    ecx, [edi + 4]
0x00556981  51                    push   ecx
0x00556982  ffd5                  call   ebp
0x00556984  85c0                  test   eax, eax
0x00556986  750e                  jne    0x556996  ; -> sub_556996
0x00556988  3bfb                  cmp    edi, ebx
0x0055698A  740a                  je     0x556996  ; -> sub_556996
0x0055698C  8b17                  mov    edx, dword ptr [edi]
0x0055698E  8b02                  mov    eax, dword ptr [edx]
0x00556990  6a01                  push   1
0x00556992  8bcf                  mov    ecx, edi
0x00556994  ffd0                  call   eax
0x00556996  895e0c                mov    dword ptr [esi + 0xc], ebx
0x00556999  8b7e1c                mov    edi, dword ptr [esi + 0x1c]
0x0055699C  3bfb                  cmp    edi, ebx
0x0055699E  741b                  je     0x5569bb  ; -> sub_5569BB
0x005569A0  8d4f04                lea    ecx, [edi + 4]
0x005569A3  51                    push   ecx
0x005569A4  ffd5                  call   ebp
0x005569A6  85c0                  test   eax, eax
0x005569A8  750e                  jne    0x5569b8  ; -> sub_5569B8
0x005569AA  3bfb                  cmp    edi, ebx
0x005569AC  740a                  je     0x5569b8  ; -> sub_5569B8
0x005569AE  8b17                  mov    edx, dword ptr [edi]
0x005569B0  8b02                  mov    eax, dword ptr [edx]
0x005569B2  6a01                  push   1
0x005569B4  8bcf                  mov    ecx, edi
0x005569B6  ffd0                  call   eax
0x005569B8  895e1c                mov    dword ptr [esi + 0x1c], ebx
0x005569BB  8b7e20                mov    edi, dword ptr [esi + 0x20]
0x005569BE  3bfb                  cmp    edi, ebx
0x005569C0  741b                  je     0x5569dd  ; -> sub_5569DD
0x005569C2  8d4f04                lea    ecx, [edi + 4]
0x005569C5  51                    push   ecx
0x005569C6  ffd5                  call   ebp
0x005569C8  85c0                  test   eax, eax
0x005569CA  750e                  jne    0x5569da  ; -> sub_5569DA
0x005569CC  3bfb                  cmp    edi, ebx
0x005569CE  740a                  je     0x5569da  ; -> sub_5569DA
0x005569D0  8b17                  mov    edx, dword ptr [edi]
0x005569D2  8b02                  mov    eax, dword ptr [edx]
0x005569D4  6a01                  push   1
0x005569D6  8bcf                  mov    ecx, edi
0x005569D8  ffd0                  call   eax
0x005569DA  895e20                mov    dword ptr [esi + 0x20], ebx
0x005569DD  895e14                mov    dword ptr [esi + 0x14], ebx
0x005569E0  895e18                mov    dword ptr [esi + 0x18], ebx
0x005569E3  8bc6                  mov    eax, esi
0x005569E5  8b4c2418              mov    ecx, dword ptr [esp + 0x18]
0x005569E9  64890d00000000        mov    dword ptr fs:[0], ecx
0x005569F0  59                    pop    ecx
0x005569F1  5f                    pop    edi
0x005569F2  5e                    pop    esi
0x005569F3  5d                    pop    ebp
0x005569F4  5b                    pop    ebx
0x005569F5  83c410                add    esp, 0x10
0x005569F8  c3                    ret    
0x005569F9  cc                    int3   
0x005569FA  cc                    int3   
0x005569FB  cc                    int3   
0x005569FC  cc                    int3   
0x005569FD  cc                    int3   
0x005569FE  cc                    int3   
0x005569FF  cc                    int3   
0x00556A00  53                    push   ebx
0x00556A01  57                    push   edi
0x00556A02  8bf9                  mov    edi, ecx
0x00556A04  837f0c00              cmp    dword ptr [edi + 0xc], 0
0x00556A08  7551                  jne    0x556a5b  ; -> sub_556A5B
0x00556A0A  8b5c240c              mov    ebx, dword ptr [esp + 0xc]
0x00556A0E  85db                  test   ebx, ebx
0x00556A10  7449                  je     0x556a5b  ; -> sub_556A5B
0x00556A12  6a0c                  push   0xc
0x00556A14  e8e7b4eaff            call   0x401f00  ; -> sub_401F00
0x00556A19  83c404                add    esp, 4
0x00556A1C  85c0                  test   eax, eax
0x00556A1E  742d                  je     0x556a4d  ; -> sub_556A4D
0x00556A20  6a00                  push   0
0x00556A22  c70000000000          mov    dword ptr [eax], 0
0x00556A28  66c740040000          mov    word ptr [eax + 4], 0
0x00556A2E  66c740060000          mov    word ptr [eax + 6], 0
0x00556A34  c7400800000000        mov    dword ptr [eax + 8], 0
0x00556A3B  53                    push   ebx
0x00556A3C  8bc8                  mov    ecx, eax
0x00556A3E  89470c                mov    dword ptr [edi + 0xc], eax
0x00556A41  e88abeeaff            call   0x4028d0  ; -> sub_4028D0
0x00556A46  5f                    pop    edi
0x00556A47  b001                  mov    al, 1
0x00556A49  5b                    pop    ebx
0x00556A4A  c20400                ret    4
0x00556A4D  33c0                  xor    eax, eax
0x00556A4F  50                    push   eax
0x00556A50  53                    push   ebx
0x00556A51  8bc8                  mov    ecx, eax
0x00556A53  89470c                mov    dword ptr [edi + 0xc], eax
0x00556A56  e875beeaff            call   0x4028d0  ; -> sub_4028D0
0x00556A5B  5f                    pop    edi
0x00556A5C  b001                  mov    al, 1
0x00556A5E  5b                    pop    ebx
0x00556A5F  c20400                ret    4
0x00556A62  cc                    int3   
0x00556A63  cc                    int3   
0x00556A64  cc                    int3   
0x00556A65  cc                    int3   
0x00556A66  cc                    int3   
0x00556A67  cc                    int3   
0x00556A68  cc                    int3   
0x00556A69  cc                    int3   
0x00556A6A  cc                    int3   
0x00556A6B  cc                    int3   
0x00556A6C  cc                    int3   
0x00556A6D  cc                    int3   
0x00556A6E  cc                    int3   
0x00556A6F  cc                    int3   
0x00556A70  6aff                  push   -1
0x00556A72  68dbc59b00            push   0x9bc5db  ; -> sub_9BC5DB
0x00556A77  64a100000000          mov    eax, dword ptr fs:[0]
0x00556A7D  50                    push   eax
0x00556A7E  83ec0c                sub    esp, 0xc
0x00556A81  53                    push   ebx
0x00556A82  55                    push   ebp
0x00556A83  56                    push   esi
0x00556A84  57                    push   edi
0x00556A85  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00556A8A  33c4                  xor    eax, esp
0x00556A8C  50                    push   eax
0x00556A8D  8d442420              lea    eax, [esp + 0x20]
0x00556A91  64a300000000          mov    dword ptr fs:[0], eax
0x00556A97  8be9                  mov    ebp, ecx
0x00556A99  33db                  xor    ebx, ebx
0x00556A9B  895c2418              mov    dword ptr [esp + 0x18], ebx
0x00556A9F  895c2428              mov    dword ptr [esp + 0x28], ebx
0x00556AA3  895c2414              mov    dword ptr [esp + 0x14], ebx
0x00556AA7  8b742430              mov    esi, dword ptr [esp + 0x30]
0x00556AAB  8b3e                  mov    edi, dword ptr [esi]
0x00556AAD  3bfb                  cmp    edi, ebx
0x00556AAF  c644242801            mov    byte ptr [esp + 0x28], 1
0x00556AB4  741e                  je     0x556ad4  ; -> sub_556AD4
0x00556AB6  8d4704                lea    eax, [edi + 4]
0x00556AB9  50                    push   eax
0x00556ABA  ff157c80a200          call   dword ptr [0xa2807c]
0x00556AC0  85c0                  test   eax, eax
0x00556AC2  750e                  jne    0x556ad2  ; -> sub_556AD2
0x00556AC4  3bfb                  cmp    edi, ebx
0x00556AC6  740a                  je     0x556ad2  ; -> sub_556AD2
0x00556AC8  8b17                  mov    edx, dword ptr [edi]
0x00556ACA  8b02                  mov    eax, dword ptr [edx]
0x00556ACC  6a01                  push   1
0x00556ACE  8bcf                  mov    ecx, edi
0x00556AD0  ffd0                  call   eax
0x00556AD2  891e                  mov    dword ptr [esi], ebx
0x00556AD4  8b4508                mov    eax, dword ptr [ebp + 8]
0x00556AD7  3bc3                  cmp    eax, ebx
0x00556AD9  0f8471010000          je     0x556c50  ; -> sub_556C50
0x00556ADF  8b4810                mov    ecx, dword ptr [eax + 0x10]
0x00556AE2  3bcb                  cmp    ecx, ebx
0x00556AE4  0f8466010000          je     0x556c50  ; -> sub_556C50
0x00556AEA  3999b4000000          cmp    dword ptr [ecx + 0xb4], ebx
0x00556AF0  0f845a010000          je     0x556c50  ; -> sub_556C50
0x00556AF6  e8059e1a00            call   0x700900  ; -> sub_700900
0x00556AFB  50                    push   eax
0x00556AFC  8bce                  mov    ecx, esi
0x00556AFE  e88d8f2000            call   0x75fa90  ; -> sub_75FA90
0x00556B03  8b4d08                mov    ecx, dword ptr [ebp + 8]
0x00556B06  8b4110                mov    eax, dword ptr [ecx + 0x10]
0x00556B09  8b80b4000000          mov    eax, dword ptr [eax + 0xb4]
0x00556B0F  8d542430              lea    edx, [esp + 0x30]
0x00556B13  52                    push   edx
0x00556B14  8bc8                  mov    ecx, eax
0x00556B16  e8759c1a00            call   0x700790  ; -> sub_700790
0x00556B1B  8b00                  mov    eax, dword ptr [eax]
0x00556B1D  50                    push   eax
0x00556B1E  8d4c241c              lea    ecx, [esp + 0x1c]
0x00556B22  c644242c02            mov    byte ptr [esp + 0x2c], 2
0x00556B27  e8648f2000            call   0x75fa90  ; -> sub_75FA90
0x00556B2C  8b442430              mov    eax, dword ptr [esp + 0x30]
0x00556B30  3bc3                  cmp    eax, ebx
0x00556B32  c644242801            mov    byte ptr [esp + 0x28], 1
0x00556B37  741e                  je     0x556b57  ; -> sub_556B57
0x00556B39  8bf8                  mov    edi, eax
0x00556B3B  83c004                add    eax, 4
0x00556B3E  50                    push   eax
0x00556B3F  ff157c80a200          call   dword ptr [0xa2807c]
0x00556B45  85c0                  test   eax, eax
0x00556B47  750e                  jne    0x556b57  ; -> sub_556B57
0x00556B49  3bfb                  cmp    edi, ebx
0x00556B4B  740a                  je     0x556b57  ; -> sub_556B57
0x00556B4D  8b07                  mov    eax, dword ptr [edi]
0x00556B4F  8b10                  mov    edx, dword ptr [eax]
0x00556B51  6a01                  push   1
0x00556B53  8bcf                  mov    ecx, edi
0x00556B55  ffd2                  call   edx
0x00556B57  8b0e                  mov    ecx, dword ptr [esi]
0x00556B59  8b01                  mov    eax, dword ptr [ecx]
0x00556B5B  8b5c2418              mov    ebx, dword ptr [esp + 0x18]
0x00556B5F  8b908c000000          mov    edx, dword ptr [eax + 0x8c]
0x00556B65  53                    push   ebx
0x00556B66  ffd2                  call   edx
0x00556B68  8b06                  mov    eax, dword ptr [esi]
0x00556B6A  8bb8b8000000          mov    edi, dword ptr [eax + 0xb8]
0x00556B70  85ff                  test   edi, edi
0x00556B72  743c                  je     0x556bb0  ; -> sub_556BB0
0x00556B74  8b4f0c                mov    ecx, dword ptr [edi + 0xc]
0x00556B77  85c9                  test   ecx, ecx
0x00556B79  7435                  je     0x556bb0  ; -> sub_556BB0
0x00556B7B  8d442430              lea    eax, [esp + 0x30]
0x00556B7F  50                    push   eax
0x00556B80  e80b9c1a00            call   0x700790  ; -> sub_700790
0x00556B85  8b00                  mov    eax, dword ptr [eax]
0x00556B87  50                    push   eax
0x00556B88  8d4c2418              lea    ecx, [esp + 0x18]
0x00556B8C  c644242c03            mov    byte ptr [esp + 0x2c], 3
0x00556B91  e8fa8e2000            call   0x75fa90  ; -> sub_75FA90
0x00556B96  8d4c2430              lea    ecx, [esp + 0x30]
0x00556B9A  c644242801            mov    byte ptr [esp + 0x28], 1
0x00556B9F  e8fcaa1a00            call   0x7016a0  ; -> sub_7016A0
0x00556BA4  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x00556BA8  51                    push   ecx
0x00556BA9  8bcf                  mov    ecx, edi
0x00556BAB  e85017f2ff            call   0x478300  ; -> sub_478300
0x00556BB0  6a18                  push   0x18
0x00556BB2  e849b3eaff            call   0x401f00  ; -> sub_401F00
0x00556BB7  83c404                add    esp, 4
0x00556BBA  8944241c              mov    dword ptr [esp + 0x1c], eax
0x00556BBE  85c0                  test   eax, eax
0x00556BC0  c644242804            mov    byte ptr [esp + 0x28], 4
0x00556BC5  7417                  je     0x556bde  ; -> sub_556BDE
0x00556BC7  8b5508                mov    edx, dword ptr [ebp + 8]
0x00556BCA  8b4a18                mov    ecx, dword ptr [edx + 0x18]
0x00556BCD  8b5214                mov    edx, dword ptr [edx + 0x14]
0x00556BD0  8b3e                  mov    edi, dword ptr [esi]
0x00556BD2  51                    push   ecx
0x00556BD3  52                    push   edx
0x00556BD4  57                    push   edi
0x00556BD5  8bc8                  mov    ecx, eax
0x00556BD7  e8045b0000            call   0x55c6e0  ; -> sub_55C6E0
0x00556BDC  eb02                  jmp    0x556be0  ; -> sub_556BE0
0x00556BDE  33c0                  xor    eax, eax
0x00556BE0  85c0                  test   eax, eax
0x00556BE2  c644242801            mov    byte ptr [esp + 0x28], 1
0x00556BE7  7408                  je     0x556bf1  ; -> sub_556BF1
0x00556BE9  8b0e                  mov    ecx, dword ptr [esi]
0x00556BEB  50                    push   eax
0x00556BEC  e8af8c1a00            call   0x6ff8a0  ; -> sub_6FF8A0
0x00556BF1  8b4508                mov    eax, dword ptr [ebp + 8]
0x00556BF4  8b4020                mov    eax, dword ptr [eax + 0x20]
0x00556BF7  85c0                  test   eax, eax
0x00556BF9  7408                  je     0x556c03  ; -> sub_556C03
0x00556BFB  8b0e                  mov    ecx, dword ptr [esi]
0x00556BFD  50                    push   eax
0x00556BFE  e89d8c1a00            call   0x6ff8a0  ; -> sub_6FF8A0
0x00556C03  8b742414              mov    esi, dword ptr [esp + 0x14]
0x00556C07  85f6                  test   esi, esi
0x00556C09  c644242800            mov    byte ptr [esp + 0x28], 0
0x00556C0E  7418                  je     0x556c28  ; -> sub_556C28
0x00556C10  8d4e04                lea    ecx, [esi + 4]
0x00556C13  51                    push   ecx
0x00556C14  ff157c80a200          call   dword ptr [0xa2807c]
0x00556C1A  85c0                  test   eax, eax
0x00556C1C  750a                  jne    0x556c28  ; -> sub_556C28
0x00556C1E  8b16                  mov    edx, dword ptr [esi]
0x00556C20  8b02                  mov    eax, dword ptr [edx]
0x00556C22  6a01                  push   1
0x00556C24  8bce                  mov    ecx, esi
0x00556C26  ffd0                  call   eax
0x00556C28  85db                  test   ebx, ebx
0x00556C2A  c7442428ffffffff      mov    dword ptr [esp + 0x28], 0xffffffff
0x00556C32  7418                  je     0x556c4c  ; -> sub_556C4C
0x00556C34  8d4b04                lea    ecx, [ebx + 4]
0x00556C37  51                    push   ecx
0x00556C38  ff157c80a200          call   dword ptr [0xa2807c]
0x00556C3E  85c0                  test   eax, eax
0x00556C40  750a                  jne    0x556c4c  ; -> sub_556C4C
0x00556C42  8b13                  mov    edx, dword ptr [ebx]
0x00556C44  8b02                  mov    eax, dword ptr [edx]
0x00556C46  6a01                  push   1
0x00556C48  8bcb                  mov    ecx, ebx
0x00556C4A  ffd0                  call   eax
0x00556C4C  b001                  mov    al, 1
0x00556C4E  eb02                  jmp    0x556c52  ; -> sub_556C52
0x00556C50  32c0                  xor    al, al
0x00556C52  8b4c2420              mov    ecx, dword ptr [esp + 0x20]
0x00556C56  64890d00000000        mov    dword ptr fs:[0], ecx
0x00556C5D  59                    pop    ecx
0x00556C5E  5f                    pop    edi
0x00556C5F  5e                    pop    esi
0x00556C60  5d                    pop    ebp
0x00556C61  5b                    pop    ebx
0x00556C62  83c418                add    esp, 0x18
0x00556C65  c20400                ret    4
0x00556C68  cc                    int3   
0x00556C69  cc                    int3   
0x00556C6A  cc                    int3   
0x00556C6B  cc                    int3   
0x00556C6C  cc                    int3   
0x00556C6D  cc                    int3   
0x00556C6E  cc                    int3   
0x00556C6F  cc                    int3   
0x00556C70  51                    push   ecx
0x00556C71  8b4c240c              mov    ecx, dword ptr [esp + 0xc]
0x00556C75  8b54240c              mov    edx, dword ptr [esp + 0xc]
0x00556C79  c6042400              mov    byte ptr [esp], 0
0x00556C7D  8b0424                mov    eax, dword ptr [esp]

