ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x005227A0
; VA: 0x005227A0  size: 0x1200
; ============================================================
0x005227A0  83ec3c                sub    esp, 0x3c
0x005227A3  a1e49dba00            mov    eax, dword ptr [0xba9de4]
0x005227A8  53                    push   ebx
0x005227A9  56                    push   esi
0x005227AA  57                    push   edi
0x005227AB  8bf9                  mov    edi, ecx
0x005227AD  648b0d2c000000        mov    ecx, dword ptr fs:[0x2c]
0x005227B4  8b0481                mov    eax, dword ptr [ecx + eax*4]
0x005227B7  8a9085010000          mov    dl, byte ptr [eax + 0x185]
0x005227BD  33db                  xor    ebx, ebx
0x005227BF  385c245c              cmp    byte ptr [esp + 0x5c], bl
0x005227C3  89442444              mov    dword ptr [esp + 0x44], eax
0x005227C7  8854240f              mov    byte ptr [esp + 0xf], dl
0x005227CB  7506                  jne    0x5227d3  ; -> sub_5227D3
0x005227CD  889885010000          mov    byte ptr [eax + 0x185], bl
0x005227D3  55                    push   ebp
0x005227D4  8b6c2450              mov    ebp, dword ptr [esp + 0x50]
0x005227D8  8b4500                mov    eax, dword ptr [ebp]
0x005227DB  8b9090010000          mov    edx, dword ptr [eax + 0x190]
0x005227E1  8bcd                  mov    ecx, ebp
0x005227E3  ffd2                  call   edx
0x005227E5  84c0                  test   al, al
0x005227E7  741c                  je     0x522805  ; -> sub_522805
0x005227E9  8b4d58                mov    ecx, dword ptr [ebp + 0x58]
0x005227EC  3bcb                  cmp    ecx, ebx
0x005227EE  7415                  je     0x522805  ; -> sub_522805
0x005227F0  8b01                  mov    eax, dword ptr [ecx]
0x005227F2  8b9038010000          mov    edx, dword ptr [eax + 0x138]
0x005227F8  ffd2                  call   edx
0x005227FA  84c0                  test   al, al
0x005227FC  7407                  je     0x522805  ; -> sub_522805
0x005227FE  8bcd                  mov    ecx, ebp
0x00522800  e8ab9dfbff            call   0x4dc5b0  ; -> sub_4DC5B0
0x00522805  3bfb                  cmp    edi, ebx
0x00522807  7405                  je     0x52280e  ; -> sub_52280E
0x00522809  8d4744                lea    eax, [edi + 0x44]
0x0052280C  eb02                  jmp    0x522810  ; -> sub_522810
0x0052280E  33c0                  xor    eax, eax
0x00522810  50                    push   eax
0x00522811  55                    push   ebp
0x00522812  e8e935f6ff            call   0x485e00  ; -> sub_485E00
0x00522817  83c408                add    esp, 8
0x0052281A  8bf0                  mov    esi, eax
0x0052281C  6a01                  push   1
0x0052281E  8bce                  mov    ecx, esi
0x00522820  e80b38f6ff            call   0x486030  ; -> sub_486030
0x00522825  53                    push   ebx
0x00522826  687030b000            push   0xb03070  ; -> sub_B03070
0x0052282B  685430b000            push   0xb03054  ; -> sub_B03054
0x00522830  53                    push   ebx
0x00522831  55                    push   ebp
0x00522832  e8af0a4600            call   0x9832e6  ; -> sub_9832E6
0x00522837  83c414                add    esp, 0x14
0x0052283A  3bc3                  cmp    eax, ebx
0x0052283C  89442438              mov    dword ptr [esp + 0x38], eax
0x00522840  7449                  je     0x52288b  ; -> sub_52288B
0x00522842  8b4858                mov    ecx, dword ptr [eax + 0x58]
0x00522845  3bcb                  cmp    ecx, ebx
0x00522847  7442                  je     0x52288b  ; -> sub_52288B
0x00522849  8b11                  mov    edx, dword ptr [ecx]
0x0052284B  8b820c010000          mov    eax, dword ptr [edx + 0x10c]
0x00522851  53                    push   ebx
0x00522852  ffd0                  call   eax
0x00522854  8b4c2438              mov    ecx, dword ptr [esp + 0x38]
0x00522858  8b4958                mov    ecx, dword ptr [ecx + 0x58]
0x0052285B  8b11                  mov    edx, dword ptr [ecx]
0x0052285D  8b8210010000          mov    eax, dword ptr [edx + 0x110]
0x00522863  53                    push   ebx
0x00522864  ffd0                  call   eax
0x00522866  8b4c2438              mov    ecx, dword ptr [esp + 0x38]
0x0052286A  8b4958                mov    ecx, dword ptr [ecx + 0x58]
0x0052286D  8b11                  mov    edx, dword ptr [ecx]
0x0052286F  8b8208010000          mov    eax, dword ptr [edx + 0x108]
0x00522875  53                    push   ebx
0x00522876  ffd0                  call   eax
0x00522878  8b4c2438              mov    ecx, dword ptr [esp + 0x38]
0x0052287C  8b4958                mov    ecx, dword ptr [ecx + 0x58]
0x0052287F  8b11                  mov    edx, dword ptr [ecx]
0x00522881  8b8204010000          mov    eax, dword ptr [edx + 0x104]
0x00522887  53                    push   ebx
0x00522888  53                    push   ebx
0x00522889  ffd0                  call   eax
0x0052288B  385c2454              cmp    byte ptr [esp + 0x54], bl
0x0052288F  895c2460              mov    dword ptr [esp + 0x60], ebx
0x00522893  895c2450              mov    dword ptr [esp + 0x50], ebx
0x00522897  895c2424              mov    dword ptr [esp + 0x24], ebx
0x0052289B  895c2430              mov    dword ptr [esp + 0x30], ebx
0x0052289F  895c242c              mov    dword ptr [esp + 0x2c], ebx
0x005228A3  895c2428              mov    dword ptr [esp + 0x28], ebx
0x005228A7  895c2434              mov    dword ptr [esp + 0x34], ebx
0x005228AB  895c2420              mov    dword ptr [esp + 0x20], ebx
0x005228AF  895c243c              mov    dword ptr [esp + 0x3c], ebx
0x005228B3  895c2418              mov    dword ptr [esp + 0x18], ebx
0x005228B7  895c2414              mov    dword ptr [esp + 0x14], ebx
0x005228BB  895c241c              mov    dword ptr [esp + 0x1c], ebx
0x005228BF  750a                  jne    0x5228cb  ; -> sub_5228CB
0x005228C1  385c245c              cmp    byte ptr [esp + 0x5c], bl
0x005228C5  0f84a5000000          je     0x522970  ; -> sub_522970
0x005228CB  6a01                  push   1
0x005228CD  6a02                  push   2
0x005228CF  57                    push   edi
0x005228D0  8bce                  mov    ecx, esi
0x005228D2  e8999ff6ff            call   0x48c870  ; -> sub_48C870
0x005228D7  6a01                  push   1
0x005228D9  6a03                  push   3
0x005228DB  57                    push   edi
0x005228DC  8bce                  mov    ecx, esi
0x005228DE  8944246c              mov    dword ptr [esp + 0x6c], eax
0x005228E2  e8899ff6ff            call   0x48c870  ; -> sub_48C870
0x005228E7  6a01                  push   1
0x005228E9  6a05                  push   5
0x005228EB  57                    push   edi
0x005228EC  8bce                  mov    ecx, esi
0x005228EE  8944245c              mov    dword ptr [esp + 0x5c], eax
0x005228F2  e8799ff6ff            call   0x48c870  ; -> sub_48C870
0x005228F7  6a01                  push   1
0x005228F9  6a04                  push   4
0x005228FB  57                    push   edi
0x005228FC  8bce                  mov    ecx, esi
0x005228FE  89442430              mov    dword ptr [esp + 0x30], eax
0x00522902  e8699ff6ff            call   0x48c870  ; -> sub_48C870
0x00522907  385c245c              cmp    byte ptr [esp + 0x5c], bl
0x0052290B  89442428              mov    dword ptr [esp + 0x28], eax
0x0052290F  752f                  jne    0x522940  ; -> sub_522940
0x00522911  6a01                  push   1
0x00522913  6a01                  push   1
0x00522915  57                    push   edi
0x00522916  8bce                  mov    ecx, esi
0x00522918  e8539ff6ff            call   0x48c870  ; -> sub_48C870
0x0052291D  6a01                  push   1
0x0052291F  53                    push   ebx
0x00522920  57                    push   edi
0x00522921  8bce                  mov    ecx, esi
0x00522923  89442438              mov    dword ptr [esp + 0x38], eax
0x00522927  e8449ff6ff            call   0x48c870  ; -> sub_48C870
0x0052292C  6a01                  push   1
0x0052292E  6a0d                  push   0xd
0x00522930  57                    push   edi
0x00522931  8bce                  mov    ecx, esi
0x00522933  8944243c              mov    dword ptr [esp + 0x3c], eax
0x00522937  e8349ff6ff            call   0x48c870  ; -> sub_48C870
0x0052293C  89442434              mov    dword ptr [esp + 0x34], eax
0x00522940  6a01                  push   1
0x00522942  6a06                  push   6
0x00522944  57                    push   edi
0x00522945  8bce                  mov    ecx, esi
0x00522947  e8249ff6ff            call   0x48c870  ; -> sub_48C870
0x0052294C  6a01                  push   1
0x0052294E  6a07                  push   7
0x00522950  57                    push   edi
0x00522951  8bce                  mov    ecx, esi
0x00522953  89442424              mov    dword ptr [esp + 0x24], eax
0x00522957  e8149ff6ff            call   0x48c870  ; -> sub_48C870
0x0052295C  6a01                  push   1
0x0052295E  6a08                  push   8
0x00522960  57                    push   edi
0x00522961  8bce                  mov    ecx, esi
0x00522963  89442420              mov    dword ptr [esp + 0x20], eax
0x00522967  e8049ff6ff            call   0x48c870  ; -> sub_48C870
0x0052296C  8944241c              mov    dword ptr [esp + 0x1c], eax
0x00522970  385c2458              cmp    byte ptr [esp + 0x58], bl
0x00522974  d9ee                  fldz   
0x00522976  d95c2444              fstp   dword ptr [esp + 0x44]
0x0052297A  7415                  je     0x522991  ; -> sub_522991
0x0052297C  6a01                  push   1
0x0052297E  6aff                  push   -1
0x00522980  8d4c244c              lea    ecx, [esp + 0x4c]
0x00522984  51                    push   ecx
0x00522985  57                    push   edi
0x00522986  8bce                  mov    ecx, esi
0x00522988  e81394f6ff            call   0x48bda0  ; -> sub_48BDA0
0x0052298D  89442420              mov    dword ptr [esp + 0x20], eax
0x00522991  6a01                  push   1
0x00522993  57                    push   edi
0x00522994  8bce                  mov    ecx, esi
0x00522996  e8c58cf6ff            call   0x48b660  ; -> sub_48B660
0x0052299B  395c2420              cmp    dword ptr [esp + 0x20], ebx
0x0052299F  89442440              mov    dword ptr [esp + 0x40], eax
0x005229A3  743b                  je     0x5229e0  ; -> sub_5229E0
0x005229A5  8b542420              mov    edx, dword ptr [esp + 0x20]
0x005229A9  8b4208                mov    eax, dword ptr [edx + 8]
0x005229AC  3bc3                  cmp    eax, ebx
0x005229AE  7430                  je     0x5229e0  ; -> sub_5229E0
0x005229B0  53                    push   ebx
0x005229B1  68fc36b000            push   0xb036fc  ; -> sub_B036FC
0x005229B6  684832b000            push   0xb03248  ; -> sub_B03248
0x005229BB  53                    push   ebx
0x005229BC  50                    push   eax
0x005229BD  e824094600            call   0x9832e6  ; -> sub_9832E6
0x005229C2  83c414                add    esp, 0x14
0x005229C5  3bc3                  cmp    eax, ebx
0x005229C7  7417                  je     0x5229e0  ; -> sub_5229E0
0x005229C9  80b89000000005        cmp    byte ptr [eax + 0x90], 5
0x005229D0  750e                  jne    0x5229e0  ; -> sub_5229E0
0x005229D2  6a01                  push   1
0x005229D4  57                    push   edi
0x005229D5  8bce                  mov    ecx, esi
0x005229D7  e8e48ff6ff            call   0x48b9c0  ; -> sub_48B9C0
0x005229DC  8944243c              mov    dword ptr [esp + 0x3c], eax
0x005229E0  395c2460              cmp    dword ptr [esp + 0x60], ebx
0x005229E4  7406                  je     0x5229ec  ; -> sub_5229EC
0x005229E6  385c245c              cmp    byte ptr [esp + 0x5c], bl
0x005229EA  7452                  je     0x522a3e  ; -> sub_522A3E
0x005229EC  385c245c              cmp    byte ptr [esp + 0x5c], bl
0x005229F0  895c2454              mov    dword ptr [esp + 0x54], ebx
0x005229F4  7408                  je     0x5229fe  ; -> sub_5229FE
0x005229F6  8b442460              mov    eax, dword ptr [esp + 0x60]
0x005229FA  89442454              mov    dword ptr [esp + 0x54], eax
0x005229FE  6a01                  push   1
0x00522A00  6a02                  push   2
0x00522A02  57                    push   edi
0x00522A03  8bce                  mov    ecx, esi
0x00522A05  e806a7f6ff            call   0x48d110  ; -> sub_48D110
0x00522A0A  3bc3                  cmp    eax, ebx
0x00522A0C  89442460              mov    dword ptr [esp + 0x60], eax
0x00522A10  7510                  jne    0x522a22  ; -> sub_522A22
0x00522A12  385c245c              cmp    byte ptr [esp + 0x5c], bl
0x00522A16  740a                  je     0x522a22  ; -> sub_522A22
0x00522A18  8b4c2454              mov    ecx, dword ptr [esp + 0x54]
0x00522A1C  894c2460              mov    dword ptr [esp + 0x60], ecx
0x00522A20  eb1c                  jmp    0x522a3e  ; -> sub_522A3E
0x00522A22  395c2454              cmp    dword ptr [esp + 0x54], ebx
0x00522A26  7416                  je     0x522a3e  ; -> sub_522A3E
0x00522A28  8b4c2454              mov    ecx, dword ptr [esp + 0x54]
0x00522A2C  e83f1af6ff            call   0x484470  ; -> sub_484470
0x00522A31  8b542454              mov    edx, dword ptr [esp + 0x54]
0x00522A35  52                    push   edx
0x00522A36  e8e5f4edff            call   0x401f20  ; -> sub_401F20
0x00522A3B  83c404                add    esp, 4
0x00522A3E  395c2450              cmp    dword ptr [esp + 0x50], ebx
0x00522A42  7406                  je     0x522a4a  ; -> sub_522A4A
0x00522A44  385c245c              cmp    byte ptr [esp + 0x5c], bl
0x00522A48  7440                  je     0x522a8a  ; -> sub_522A8A
0x00522A4A  33db                  xor    ebx, ebx
0x00522A4C  385c245c              cmp    byte ptr [esp + 0x5c], bl
0x00522A50  7404                  je     0x522a56  ; -> sub_522A56
0x00522A52  8b5c2450              mov    ebx, dword ptr [esp + 0x50]
0x00522A56  6a01                  push   1
0x00522A58  6a03                  push   3
0x00522A5A  57                    push   edi
0x00522A5B  8bce                  mov    ecx, esi
0x00522A5D  e8aea6f6ff            call   0x48d110  ; -> sub_48D110
0x00522A62  85c0                  test   eax, eax
0x00522A64  89442450              mov    dword ptr [esp + 0x50], eax
0x00522A68  750c                  jne    0x522a76  ; -> sub_522A76
0x00522A6A  3844245c              cmp    byte ptr [esp + 0x5c], al
0x00522A6E  7406                  je     0x522a76  ; -> sub_522A76
0x00522A70  895c2450              mov    dword ptr [esp + 0x50], ebx
0x00522A74  eb14                  jmp    0x522a8a  ; -> sub_522A8A
0x00522A76  85db                  test   ebx, ebx
0x00522A78  7410                  je     0x522a8a  ; -> sub_522A8A
0x00522A7A  8bcb                  mov    ecx, ebx
0x00522A7C  e8ef19f6ff            call   0x484470  ; -> sub_484470
0x00522A81  53                    push   ebx
0x00522A82  e899f4edff            call   0x401f20  ; -> sub_401F20
0x00522A87  83c404                add    esp, 4
0x00522A8A  837c242400            cmp    dword ptr [esp + 0x24], 0
0x00522A8F  7510                  jne    0x522aa1  ; -> sub_522AA1
0x00522A91  6a01                  push   1
0x00522A93  6a05                  push   5
0x00522A95  57                    push   edi
0x00522A96  8bce                  mov    ecx, esi
0x00522A98  e873a6f6ff            call   0x48d110  ; -> sub_48D110
0x00522A9D  89442424              mov    dword ptr [esp + 0x24], eax
0x00522AA1  837c242800            cmp    dword ptr [esp + 0x28], 0
0x00522AA6  7510                  jne    0x522ab8  ; -> sub_522AB8
0x00522AA8  6a01                  push   1
0x00522AAA  6a04                  push   4
0x00522AAC  57                    push   edi
0x00522AAD  8bce                  mov    ecx, esi
0x00522AAF  e85ca6f6ff            call   0x48d110  ; -> sub_48D110
0x00522AB4  89442428              mov    dword ptr [esp + 0x28], eax
0x00522AB8  837c242c00            cmp    dword ptr [esp + 0x2c], 0
0x00522ABD  7510                  jne    0x522acf  ; -> sub_522ACF
0x00522ABF  6a01                  push   1
0x00522AC1  6a01                  push   1
0x00522AC3  57                    push   edi
0x00522AC4  8bce                  mov    ecx, esi
0x00522AC6  e845a6f6ff            call   0x48d110  ; -> sub_48D110
0x00522ACB  8944242c              mov    dword ptr [esp + 0x2c], eax
0x00522ACF  837c243000            cmp    dword ptr [esp + 0x30], 0
0x00522AD4  7510                  jne    0x522ae6  ; -> sub_522AE6
0x00522AD6  6a01                  push   1
0x00522AD8  6a00                  push   0
0x00522ADA  57                    push   edi
0x00522ADB  8bce                  mov    ecx, esi
0x00522ADD  e82ea6f6ff            call   0x48d110  ; -> sub_48D110
0x00522AE2  89442430              mov    dword ptr [esp + 0x30], eax
0x00522AE6  837c243400            cmp    dword ptr [esp + 0x34], 0
0x00522AEB  7510                  jne    0x522afd  ; -> sub_522AFD
0x00522AED  6a01                  push   1
0x00522AEF  6a0d                  push   0xd
0x00522AF1  57                    push   edi
0x00522AF2  8bce                  mov    ecx, esi
0x00522AF4  e817a6f6ff            call   0x48d110  ; -> sub_48D110
0x00522AF9  89442434              mov    dword ptr [esp + 0x34], eax
0x00522AFD  837c241c00            cmp    dword ptr [esp + 0x1c], 0
0x00522B02  7510                  jne    0x522b14  ; -> sub_522B14
0x00522B04  6a01                  push   1
0x00522B06  6a08                  push   8
0x00522B08  57                    push   edi
0x00522B09  8bce                  mov    ecx, esi
0x00522B0B  e800a6f6ff            call   0x48d110  ; -> sub_48D110
0x00522B10  8944241c              mov    dword ptr [esp + 0x1c], eax
0x00522B14  837c241800            cmp    dword ptr [esp + 0x18], 0
0x00522B19  7510                  jne    0x522b2b  ; -> sub_522B2B
0x00522B1B  6a01                  push   1
0x00522B1D  6a06                  push   6
0x00522B1F  57                    push   edi
0x00522B20  8bce                  mov    ecx, esi
0x00522B22  e8e9a5f6ff            call   0x48d110  ; -> sub_48D110
0x00522B27  89442418              mov    dword ptr [esp + 0x18], eax
0x00522B2B  837c241400            cmp    dword ptr [esp + 0x14], 0
0x00522B30  7510                  jne    0x522b42  ; -> sub_522B42
0x00522B32  6a01                  push   1
0x00522B34  6a07                  push   7
0x00522B36  57                    push   edi
0x00522B37  8bce                  mov    ecx, esi
0x00522B39  e8d2a5f6ff            call   0x48d110  ; -> sub_48D110
0x00522B3E  89442414              mov    dword ptr [esp + 0x14], eax
0x00522B42  837c241c00            cmp    dword ptr [esp + 0x1c], 0
0x00522B47  7436                  je     0x522b7f  ; -> sub_522B7F
0x00522B49  8b44241c              mov    eax, dword ptr [esp + 0x1c]
0x00522B4D  50                    push   eax
0x00522B4E  8bcd                  mov    ecx, ebp
0x00522B50  e82b5dfbff            call   0x4d8880  ; -> sub_4D8880
0x00522B55  84c0                  test   al, al
0x00522B57  7526                  jne    0x522b7f  ; -> sub_522B7F
0x00522B59  8b4c241c              mov    ecx, dword ptr [esp + 0x1c]
0x00522B5D  8b01                  mov    eax, dword ptr [ecx]
0x00522B5F  85c0                  test   eax, eax
0x00522B61  7404                  je     0x522b67  ; -> sub_522B67
0x00522B63  8b00                  mov    eax, dword ptr [eax]
0x00522B65  eb02                  jmp    0x522b69  ; -> sub_522B69
0x00522B67  33c0                  xor    eax, eax
0x00522B69  8b5500                mov    edx, dword ptr [ebp]
0x00522B6C  8b9208010000          mov    edx, dword ptr [edx + 0x108]
0x00522B72  6a00                  push   0
0x00522B74  50                    push   eax
0x00522B75  8b4108                mov    eax, dword ptr [ecx + 8]
0x00522B78  6a01                  push   1
0x00522B7A  50                    push   eax
0x00522B7B  8bcd                  mov    ecx, ebp
0x00522B7D  ffd2                  call   edx
0x00522B7F  837c241400            cmp    dword ptr [esp + 0x14], 0
0x00522B84  7436                  je     0x522bbc  ; -> sub_522BBC
0x00522B86  8b442414              mov    eax, dword ptr [esp + 0x14]
0x00522B8A  50                    push   eax
0x00522B8B  8bcd                  mov    ecx, ebp
0x00522B8D  e8ee5cfbff            call   0x4d8880  ; -> sub_4D8880
0x00522B92  84c0                  test   al, al
0x00522B94  7526                  jne    0x522bbc  ; -> sub_522BBC
0x00522B96  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x00522B9A  8b01                  mov    eax, dword ptr [ecx]
0x00522B9C  85c0                  test   eax, eax
0x00522B9E  7404                  je     0x522ba4  ; -> sub_522BA4
0x00522BA0  8b00                  mov    eax, dword ptr [eax]
0x00522BA2  eb02                  jmp    0x522ba6  ; -> sub_522BA6
0x00522BA4  33c0                  xor    eax, eax
0x00522BA6  8b5500                mov    edx, dword ptr [ebp]
0x00522BA9  8b9208010000          mov    edx, dword ptr [edx + 0x108]
0x00522BAF  6a00                  push   0
0x00522BB1  50                    push   eax
0x00522BB2  8b4108                mov    eax, dword ptr [ecx + 8]
0x00522BB5  6a01                  push   1
0x00522BB7  50                    push   eax
0x00522BB8  8bcd                  mov    ecx, ebp
0x00522BBA  ffd2                  call   edx
0x00522BBC  837c241800            cmp    dword ptr [esp + 0x18], 0
0x00522BC1  7436                  je     0x522bf9  ; -> sub_522BF9
0x00522BC3  8b442418              mov    eax, dword ptr [esp + 0x18]
0x00522BC7  50                    push   eax
0x00522BC8  8bcd                  mov    ecx, ebp
0x00522BCA  e8b15cfbff            call   0x4d8880  ; -> sub_4D8880
0x00522BCF  84c0                  test   al, al
0x00522BD1  7526                  jne    0x522bf9  ; -> sub_522BF9
0x00522BD3  8b4c2418              mov    ecx, dword ptr [esp + 0x18]
0x00522BD7  8b01                  mov    eax, dword ptr [ecx]
0x00522BD9  85c0                  test   eax, eax
0x00522BDB  7404                  je     0x522be1  ; -> sub_522BE1
0x00522BDD  8b00                  mov    eax, dword ptr [eax]
0x00522BDF  eb02                  jmp    0x522be3  ; -> sub_522BE3
0x00522BE1  33c0                  xor    eax, eax
0x00522BE3  8b5500                mov    edx, dword ptr [ebp]
0x00522BE6  8b9208010000          mov    edx, dword ptr [edx + 0x108]
0x00522BEC  6a00                  push   0
0x00522BEE  50                    push   eax
0x00522BEF  8b4108                mov    eax, dword ptr [ecx + 8]
0x00522BF2  6a01                  push   1
0x00522BF4  50                    push   eax
0x00522BF5  8bcd                  mov    ecx, ebp
0x00522BF7  ffd2                  call   edx
0x00522BF9  33ff                  xor    edi, edi
0x00522BFB  33db                  xor    ebx, ebx
0x00522BFD  397c2460              cmp    dword ptr [esp + 0x60], edi
0x00522C01  897c245c              mov    dword ptr [esp + 0x5c], edi
0x00522C05  897c2454              mov    dword ptr [esp + 0x54], edi
0x00522C09  897c2458              mov    dword ptr [esp + 0x58], edi
0x00522C0D  7461                  je     0x522c70  ; -> sub_522C70
0x00522C0F  8b742460              mov    esi, dword ptr [esp + 0x60]
0x00522C13  56                    push   esi
0x00522C14  8bcd                  mov    ecx, ebp
0x00522C16  e8655cfbff            call   0x4d8880  ; -> sub_4D8880
0x00522C1B  84c0                  test   al, al
0x00522C1D  7551                  jne    0x522c70  ; -> sub_522C70
0x00522C1F  8b06                  mov    eax, dword ptr [esi]
0x00522C21  85c0                  test   eax, eax
0x00522C23  7404                  je     0x522c29  ; -> sub_522C29
0x00522C25  8b00                  mov    eax, dword ptr [eax]
0x00522C27  eb02                  jmp    0x522c2b  ; -> sub_522C2B
0x00522C29  33c0                  xor    eax, eax
0x00522C2B  8b5500                mov    edx, dword ptr [ebp]
0x00522C2E  8b9208010000          mov    edx, dword ptr [edx + 0x108]
0x00522C34  6a00                  push   0
0x00522C36  50                    push   eax
0x00522C37  8b4608                mov    eax, dword ptr [esi + 8]
0x00522C3A  6a01                  push   1
0x00522C3C  50                    push   eax
0x00522C3D  8bcd                  mov    ecx, ebp
0x00522C3F  ffd2                  call   edx
0x00522C41  8b4608                mov    eax, dword ptr [esi + 8]
0x00522C44  6a00                  push   0
0x00522C46  68dc36b000            push   0xb036dc  ; -> sub_B036DC
0x00522C4B  684832b000            push   0xb03248  ; -> sub_B03248
0x00522C50  6a00                  push   0
0x00522C52  50                    push   eax
0x00522C53  e88e064600            call   0x9832e6  ; -> sub_9832E6
0x00522C58  8bf8                  mov    edi, eax
0x00522C5A  83c414                add    esp, 0x14
0x00522C5D  85ff                  test   edi, edi
0x00522C5F  740f                  je     0x522c70  ; -> sub_522C70
0x00522C61  6a00                  push   0
0x00522C63  6a03                  push   3
0x00522C65  8bcf                  mov    ecx, edi
0x00522C67  e88463f4ff            call   0x468ff0  ; -> sub_468FF0
0x00522C6C  84c0                  test   al, al
0x00522C6E  7552                  jne    0x522cc2  ; -> sub_522CC2
0x00522C70  8b742450              mov    esi, dword ptr [esp + 0x50]
0x00522C74  85f6                  test   esi, esi
0x00522C76  744a                  je     0x522cc2  ; -> sub_522CC2
0x00522C78  56                    push   esi
0x00522C79  8bcd                  mov    ecx, ebp
0x00522C7B  e8005cfbff            call   0x4d8880  ; -> sub_4D8880
0x00522C80  84c0                  test   al, al
0x00522C82  753e                  jne    0x522cc2  ; -> sub_522CC2
0x00522C84  8b06                  mov    eax, dword ptr [esi]
0x00522C86  85c0                  test   eax, eax
0x00522C88  7404                  je     0x522c8e  ; -> sub_522C8E
0x00522C8A  8b00                  mov    eax, dword ptr [eax]
0x00522C8C  eb02                  jmp    0x522c90  ; -> sub_522C90
0x00522C8E  33c0                  xor    eax, eax
0x00522C90  8b5500                mov    edx, dword ptr [ebp]
0x00522C93  8b9208010000          mov    edx, dword ptr [edx + 0x108]
0x00522C99  6a00                  push   0
0x00522C9B  50                    push   eax
0x00522C9C  8b4608                mov    eax, dword ptr [esi + 8]
0x00522C9F  6a01                  push   1
0x00522CA1  50                    push   eax
0x00522CA2  8bcd                  mov    ecx, ebp
0x00522CA4  ffd2                  call   edx
0x00522CA6  8b4608                mov    eax, dword ptr [esi + 8]
0x00522CA9  6a00                  push   0
0x00522CAB  68dc36b000            push   0xb036dc  ; -> sub_B036DC
0x00522CB0  684832b000            push   0xb03248  ; -> sub_B03248
0x00522CB5  6a00                  push   0
0x00522CB7  50                    push   eax
0x00522CB8  e829064600            call   0x9832e6  ; -> sub_9832E6
0x00522CBD  83c414                add    esp, 0x14
0x00522CC0  8bd8                  mov    ebx, eax
0x00522CC2  85ff                  test   edi, edi
0x00522CC4  740f                  je     0x522cd5  ; -> sub_522CD5
0x00522CC6  6a00                  push   0
0x00522CC8  6a04                  push   4
0x00522CCA  8bcf                  mov    ecx, edi
0x00522CCC  e81f63f4ff            call   0x468ff0  ; -> sub_468FF0
0x00522CD1  84c0                  test   al, al
0x00522CD3  7567                  jne    0x522d3c  ; -> sub_522D3C
0x00522CD5  85db                  test   ebx, ebx
0x00522CD7  740f                  je     0x522ce8  ; -> sub_522CE8
0x00522CD9  6a00                  push   0
0x00522CDB  6a04                  push   4
0x00522CDD  8bcb                  mov    ecx, ebx
0x00522CDF  e80c63f4ff            call   0x468ff0  ; -> sub_468FF0
0x00522CE4  84c0                  test   al, al
0x00522CE6  7554                  jne    0x522d3c  ; -> sub_522D3C
0x00522CE8  8b742428              mov    esi, dword ptr [esp + 0x28]
0x00522CEC  85f6                  test   esi, esi
0x00522CEE  744c                  je     0x522d3c  ; -> sub_522D3C
0x00522CF0  56                    push   esi
0x00522CF1  8bcd                  mov    ecx, ebp
0x00522CF3  e8885bfbff            call   0x4d8880  ; -> sub_4D8880
0x00522CF8  84c0                  test   al, al
0x00522CFA  7540                  jne    0x522d3c  ; -> sub_522D3C
0x00522CFC  8b06                  mov    eax, dword ptr [esi]
0x00522CFE  85c0                  test   eax, eax
0x00522D00  7404                  je     0x522d06  ; -> sub_522D06
0x00522D02  8b00                  mov    eax, dword ptr [eax]
0x00522D04  eb02                  jmp    0x522d08  ; -> sub_522D08
0x00522D06  33c0                  xor    eax, eax
0x00522D08  8b5500                mov    edx, dword ptr [ebp]
0x00522D0B  8b9208010000          mov    edx, dword ptr [edx + 0x108]
0x00522D11  6a00                  push   0
0x00522D13  50                    push   eax
0x00522D14  8b4608                mov    eax, dword ptr [esi + 8]
0x00522D17  6a01                  push   1
0x00522D19  50                    push   eax
0x00522D1A  8bcd                  mov    ecx, ebp
0x00522D1C  ffd2                  call   edx
0x00522D1E  8b4608                mov    eax, dword ptr [esi + 8]
0x00522D21  6a00                  push   0
0x00522D23  68dc36b000            push   0xb036dc  ; -> sub_B036DC
0x00522D28  684832b000            push   0xb03248  ; -> sub_B03248
0x00522D2D  6a00                  push   0
0x00522D2F  50                    push   eax
0x00522D30  e8b1054600            call   0x9832e6  ; -> sub_9832E6
0x00522D35  83c414                add    esp, 0x14
0x00522D38  8944245c              mov    dword ptr [esp + 0x5c], eax
0x00522D3C  85ff                  test   edi, edi
0x00522D3E  740f                  je     0x522d4f  ; -> sub_522D4F
0x00522D40  6a00                  push   0
0x00522D42  6a05                  push   5
0x00522D44  8bcf                  mov    ecx, edi
0x00522D46  e8a562f4ff            call   0x468ff0  ; -> sub_468FF0
0x00522D4B  84c0                  test   al, al
0x00522D4D  757c                  jne    0x522dcb  ; -> sub_522DCB
0x00522D4F  85db                  test   ebx, ebx
0x00522D51  740f                  je     0x522d62  ; -> sub_522D62
0x00522D53  6a00                  push   0
0x00522D55  6a05                  push   5
0x00522D57  8bcb                  mov    ecx, ebx
0x00522D59  e89262f4ff            call   0x468ff0  ; -> sub_468FF0
0x00522D5E  84c0                  test   al, al
0x00522D60  7569                  jne    0x522dcb  ; -> sub_522DCB
0x00522D62  8b4c245c              mov    ecx, dword ptr [esp + 0x5c]
0x00522D66  85c9                  test   ecx, ecx
0x00522D68  740d                  je     0x522d77  ; -> sub_522D77
0x00522D6A  6a00                  push   0
0x00522D6C  6a05                  push   5
0x00522D6E  e87d62f4ff            call   0x468ff0  ; -> sub_468FF0
0x00522D73  84c0                  test   al, al
0x00522D75  7554                  jne    0x522dcb  ; -> sub_522DCB
0x00522D77  8b742424              mov    esi, dword ptr [esp + 0x24]
0x00522D7B  85f6                  test   esi, esi
0x00522D7D  744c                  je     0x522dcb  ; -> sub_522DCB
0x00522D7F  56                    push   esi
0x00522D80  8bcd                  mov    ecx, ebp
0x00522D82  e8f95afbff            call   0x4d8880  ; -> sub_4D8880
0x00522D87  84c0                  test   al, al
0x00522D89  7540                  jne    0x522dcb  ; -> sub_522DCB
0x00522D8B  8b06                  mov    eax, dword ptr [esi]
0x00522D8D  85c0                  test   eax, eax
0x00522D8F  7404                  je     0x522d95  ; -> sub_522D95
0x00522D91  8b00                  mov    eax, dword ptr [eax]
0x00522D93  eb02                  jmp    0x522d97  ; -> sub_522D97
0x00522D95  33c0                  xor    eax, eax
0x00522D97  8b5500                mov    edx, dword ptr [ebp]
0x00522D9A  8b9208010000          mov    edx, dword ptr [edx + 0x108]
0x00522DA0  6a00                  push   0
0x00522DA2  50                    push   eax
0x00522DA3  8b4608                mov    eax, dword ptr [esi + 8]
0x00522DA6  6a01                  push   1
0x00522DA8  50                    push   eax
0x00522DA9  8bcd                  mov    ecx, ebp
0x00522DAB  ffd2                  call   edx
0x00522DAD  8b4608                mov    eax, dword ptr [esi + 8]
0x00522DB0  6a00                  push   0
0x00522DB2  68dc36b000            push   0xb036dc  ; -> sub_B036DC
0x00522DB7  684832b000            push   0xb03248  ; -> sub_B03248
0x00522DBC  6a00                  push   0
0x00522DBE  50                    push   eax
0x00522DBF  e822054600            call   0x9832e6  ; -> sub_9832E6
0x00522DC4  83c414                add    esp, 0x14
0x00522DC7  89442454              mov    dword ptr [esp + 0x54], eax
0x00522DCB  85ff                  test   edi, edi
0x00522DCD  7413                  je     0x522de2  ; -> sub_522DE2
0x00522DCF  6a00                  push   0
0x00522DD1  6a01                  push   1
0x00522DD3  8bcf                  mov    ecx, edi
0x00522DD5  e81662f4ff            call   0x468ff0  ; -> sub_468FF0
0x00522DDA  84c0                  test   al, al
0x00522DDC  0f8591000000          jne    0x522e73  ; -> sub_522E73
0x00522DE2  85db                  test   ebx, ebx
0x00522DE4  740f                  je     0x522df5  ; -> sub_522DF5
0x00522DE6  6a00                  push   0
0x00522DE8  6a01                  push   1
0x00522DEA  8bcb                  mov    ecx, ebx
0x00522DEC  e8ff61f4ff            call   0x468ff0  ; -> sub_468FF0
0x00522DF1  84c0                  test   al, al
0x00522DF3  757e                  jne    0x522e73  ; -> sub_522E73
0x00522DF5  8b4c245c              mov    ecx, dword ptr [esp + 0x5c]
0x00522DF9  85c9                  test   ecx, ecx
0x00522DFB  740d                  je     0x522e0a  ; -> sub_522E0A
0x00522DFD  6a00                  push   0
0x00522DFF  6a01                  push   1
0x00522E01  e8ea61f4ff            call   0x468ff0  ; -> sub_468FF0
0x00522E06  84c0                  test   al, al
0x00522E08  7569                  jne    0x522e73  ; -> sub_522E73
0x00522E0A  8b4c2454              mov    ecx, dword ptr [esp + 0x54]
0x00522E0E  85c9                  test   ecx, ecx
0x00522E10  740d                  je     0x522e1f  ; -> sub_522E1F
0x00522E12  6a00                  push   0
0x00522E14  6a01                  push   1
0x00522E16  e8d561f4ff            call   0x468ff0  ; -> sub_468FF0
0x00522E1B  84c0                  test   al, al
0x00522E1D  7554                  jne    0x522e73  ; -> sub_522E73
0x00522E1F  8b74242c              mov    esi, dword ptr [esp + 0x2c]
0x00522E23  85f6                  test   esi, esi
0x00522E25  744c                  je     0x522e73  ; -> sub_522E73
0x00522E27  56                    push   esi
0x00522E28  8bcd                  mov    ecx, ebp
0x00522E2A  e8515afbff            call   0x4d8880  ; -> sub_4D8880
0x00522E2F  84c0                  test   al, al
0x00522E31  7540                  jne    0x522e73  ; -> sub_522E73
0x00522E33  8b06                  mov    eax, dword ptr [esi]
0x00522E35  85c0                  test   eax, eax
0x00522E37  7404                  je     0x522e3d  ; -> sub_522E3D
0x00522E39  8b00                  mov    eax, dword ptr [eax]
0x00522E3B  eb02                  jmp    0x522e3f  ; -> sub_522E3F
0x00522E3D  33c0                  xor    eax, eax
0x00522E3F  8b5500                mov    edx, dword ptr [ebp]
0x00522E42  8b9208010000          mov    edx, dword ptr [edx + 0x108]
0x00522E48  6a00                  push   0
0x00522E4A  50                    push   eax
0x00522E4B  8b4608                mov    eax, dword ptr [esi + 8]
0x00522E4E  6a01                  push   1
0x00522E50  50                    push   eax
0x00522E51  8bcd                  mov    ecx, ebp
0x00522E53  ffd2                  call   edx
0x00522E55  8b4608                mov    eax, dword ptr [esi + 8]
0x00522E58  6a00                  push   0
0x00522E5A  68dc36b000            push   0xb036dc  ; -> sub_B036DC
0x00522E5F  684832b000            push   0xb03248  ; -> sub_B03248
0x00522E64  6a00                  push   0
0x00522E66  50                    push   eax
0x00522E67  e87a044600            call   0x9832e6  ; -> sub_9832E6
0x00522E6C  83c414                add    esp, 0x14
0x00522E6F  89442458              mov    dword ptr [esp + 0x58], eax
0x00522E73  85ff                  test   edi, edi
0x00522E75  7413                  je     0x522e8a  ; -> sub_522E8A
0x00522E77  6a00                  push   0
0x00522E79  6a00                  push   0
0x00522E7B  8bcf                  mov    ecx, edi
0x00522E7D  e86e61f4ff            call   0x468ff0  ; -> sub_468FF0
0x00522E82  84c0                  test   al, al
0x00522E84  0f8588000000          jne    0x522f12  ; -> sub_522F12
0x00522E8A  85db                  test   ebx, ebx
0x00522E8C  740f                  je     0x522e9d  ; -> sub_522E9D
0x00522E8E  6a00                  push   0
0x00522E90  6a00                  push   0
0x00522E92  8bcb                  mov    ecx, ebx
0x00522E94  e85761f4ff            call   0x468ff0  ; -> sub_468FF0
0x00522E99  84c0                  test   al, al
0x00522E9B  7575                  jne    0x522f12  ; -> sub_522F12
0x00522E9D  8b4c245c              mov    ecx, dword ptr [esp + 0x5c]
0x00522EA1  85c9                  test   ecx, ecx
0x00522EA3  740d                  je     0x522eb2  ; -> sub_522EB2
0x00522EA5  6a00                  push   0
0x00522EA7  6a00                  push   0
0x00522EA9  e84261f4ff            call   0x468ff0  ; -> sub_468FF0
0x00522EAE  84c0                  test   al, al
0x00522EB0  7560                  jne    0x522f12  ; -> sub_522F12
0x00522EB2  8b4c2458              mov    ecx, dword ptr [esp + 0x58]
0x00522EB6  85c9                  test   ecx, ecx
0x00522EB8  740d                  je     0x522ec7  ; -> sub_522EC7
0x00522EBA  6a00                  push   0
0x00522EBC  6a00                  push   0
0x00522EBE  e82d61f4ff            call   0x468ff0  ; -> sub_468FF0
0x00522EC3  84c0                  test   al, al
0x00522EC5  754b                  jne    0x522f12  ; -> sub_522F12
0x00522EC7  8b4c2454              mov    ecx, dword ptr [esp + 0x54]
0x00522ECB  85c9                  test   ecx, ecx
0x00522ECD  740d                  je     0x522edc  ; -> sub_522EDC
0x00522ECF  6a00                  push   0
0x00522ED1  6a00                  push   0
0x00522ED3  e81861f4ff            call   0x468ff0  ; -> sub_468FF0
0x00522ED8  84c0                  test   al, al
0x00522EDA  7536                  jne    0x522f12  ; -> sub_522F12
0x00522EDC  8b742430              mov    esi, dword ptr [esp + 0x30]
0x00522EE0  85f6                  test   esi, esi
0x00522EE2  742e                  je     0x522f12  ; -> sub_522F12
0x00522EE4  56                    push   esi
0x00522EE5  8bcd                  mov    ecx, ebp
0x00522EE7  e89459fbff            call   0x4d8880  ; -> sub_4D8880
0x00522EEC  84c0                  test   al, al
0x00522EEE  7522                  jne    0x522f12  ; -> sub_522F12
0x00522EF0  8b06                  mov    eax, dword ptr [esi]
0x00522EF2  85c0                  test   eax, eax
0x00522EF4  7404                  je     0x522efa  ; -> sub_522EFA
0x00522EF6  8b00                  mov    eax, dword ptr [eax]
0x00522EF8  eb02                  jmp    0x522efc  ; -> sub_522EFC
0x00522EFA  33c0                  xor    eax, eax
0x00522EFC  8b5500                mov    edx, dword ptr [ebp]
0x00522EFF  8b9208010000          mov    edx, dword ptr [edx + 0x108]
0x00522F05  6a00                  push   0
0x00522F07  50                    push   eax
0x00522F08  8b4608                mov    eax, dword ptr [esi + 8]
0x00522F0B  6a01                  push   1
0x00522F0D  50                    push   eax
0x00522F0E  8bcd                  mov    ecx, ebp
0x00522F10  ffd2                  call   edx
0x00522F12  3b2dc433b300          cmp    ebp, dword ptr [0xb333c4]
0x00522F18  7439                  je     0x522f53  ; -> sub_522F53
0x00522F1A  8b742440              mov    esi, dword ptr [esp + 0x40]
0x00522F1E  85f6                  test   esi, esi
0x00522F20  7431                  je     0x522f53  ; -> sub_522F53
0x00522F22  8b4608                mov    eax, dword ptr [esi + 8]
0x00522F25  50                    push   eax
0x00522F26  8bcd                  mov    ecx, ebp
0x00522F28  e85359fbff            call   0x4d8880  ; -> sub_4D8880
0x00522F2D  84c0                  test   al, al
0x00522F2F  7522                  jne    0x522f53  ; -> sub_522F53
0x00522F31  8b06                  mov    eax, dword ptr [esi]
0x00522F33  85c0                  test   eax, eax
0x00522F35  7404                  je     0x522f3b  ; -> sub_522F3B
0x00522F37  8b00                  mov    eax, dword ptr [eax]
0x00522F39  eb02                  jmp    0x522f3d  ; -> sub_522F3D
0x00522F3B  33c0                  xor    eax, eax
0x00522F3D  8b5500                mov    edx, dword ptr [ebp]
0x00522F40  8b9208010000          mov    edx, dword ptr [edx + 0x108]
0x00522F46  6a00                  push   0
0x00522F48  50                    push   eax
0x00522F49  8b4608                mov    eax, dword ptr [esi + 8]
0x00522F4C  6a01                  push   1
0x00522F4E  50                    push   eax
0x00522F4F  8bcd                  mov    ecx, ebp
0x00522F51  ffd2                  call   edx
0x00522F53  8b742434              mov    esi, dword ptr [esp + 0x34]
0x00522F57  85f6                  test   esi, esi
0x00522F59  742e                  je     0x522f89  ; -> sub_522F89
0x00522F5B  56                    push   esi
0x00522F5C  8bcd                  mov    ecx, ebp
0x00522F5E  e81d59fbff            call   0x4d8880  ; -> sub_4D8880
0x00522F63  84c0                  test   al, al
0x00522F65  7522                  jne    0x522f89  ; -> sub_522F89
0x00522F67  8b06                  mov    eax, dword ptr [esi]
0x00522F69  85c0                  test   eax, eax
0x00522F6B  7404                  je     0x522f71  ; -> sub_522F71
0x00522F6D  8b00                  mov    eax, dword ptr [eax]
0x00522F6F  eb02                  jmp    0x522f73  ; -> sub_522F73
0x00522F71  33c0                  xor    eax, eax
0x00522F73  8b5500                mov    edx, dword ptr [ebp]
0x00522F76  8b9208010000          mov    edx, dword ptr [edx + 0x108]
0x00522F7C  6a00                  push   0
0x00522F7E  50                    push   eax
0x00522F7F  8b4608                mov    eax, dword ptr [esi + 8]
0x00522F82  6a01                  push   1
0x00522F84  50                    push   eax
0x00522F85  8bcd                  mov    ecx, ebp
0x00522F87  ffd2                  call   edx
0x00522F89  8b742420              mov    esi, dword ptr [esp + 0x20]
0x00522F8D  85f6                  test   esi, esi
0x00522F8F  747a                  je     0x52300b  ; -> sub_52300B
0x00522F91  8b4608                mov    eax, dword ptr [esi + 8]
0x00522F94  50                    push   eax
0x00522F95  8bcd                  mov    ecx, ebp
0x00522F97  e8e458fbff            call   0x4d8880  ; -> sub_4D8880
0x00522F9C  84c0                  test   al, al
0x00522F9E  756b                  jne    0x52300b  ; -> sub_52300B
0x00522FA0  8b06                  mov    eax, dword ptr [esi]
0x00522FA2  85c0                  test   eax, eax
0x00522FA4  7404                  je     0x522faa  ; -> sub_522FAA
0x00522FA6  8b00                  mov    eax, dword ptr [eax]
0x00522FA8  eb02                  jmp    0x522fac  ; -> sub_522FAC
0x00522FAA  33c0                  xor    eax, eax
0x00522FAC  8b4c2420              mov    ecx, dword ptr [esp + 0x20]
0x00522FB0  8b7108                mov    esi, dword ptr [ecx + 8]
0x00522FB3  8b7d00                mov    edi, dword ptr [ebp]
0x00522FB6  6a00                  push   0
0x00522FB8  50                    push   eax
0x00522FB9  e8a2f4f8ff            call   0x4b2460  ; -> sub_4B2460
0x00522FBE  50                    push   eax
0x00522FBF  8b8708010000          mov    eax, dword ptr [edi + 0x108]
0x00522FC5  56                    push   esi
0x00522FC6  8bcd                  mov    ecx, ebp
0x00522FC8  ffd0                  call   eax
0x00522FCA  8b5c243c              mov    ebx, dword ptr [esp + 0x3c]
0x00522FCE  85db                  test   ebx, ebx
0x00522FD0  743d                  je     0x52300f  ; -> sub_52300F
0x00522FD2  8b4308                mov    eax, dword ptr [ebx + 8]
0x00522FD5  50                    push   eax
0x00522FD6  8bcd                  mov    ecx, ebp
0x00522FD8  e8a358fbff            call   0x4d8880  ; -> sub_4D8880
0x00522FDD  84c0                  test   al, al
0x00522FDF  752e                  jne    0x52300f  ; -> sub_52300F
0x00522FE1  8b03                  mov    eax, dword ptr [ebx]
0x00522FE3  85c0                  test   eax, eax
0x00522FE5  7404                  je     0x522feb  ; -> sub_522FEB
0x00522FE7  8b00                  mov    eax, dword ptr [eax]
0x00522FE9  eb02                  jmp    0x522fed  ; -> sub_522FED
0x00522FEB  33c0                  xor    eax, eax
0x00522FED  8b7308                mov    esi, dword ptr [ebx + 8]
0x00522FF0  8b7d00                mov    edi, dword ptr [ebp]
0x00522FF3  6a00                  push   0
0x00522FF5  50                    push   eax
0x00522FF6  8bcb                  mov    ecx, ebx
0x00522FF8  e863f4f8ff            call   0x4b2460  ; -> sub_4B2460
0x00522FFD  8b9708010000          mov    edx, dword ptr [edi + 0x108]
0x00523003  50                    push   eax
0x00523004  56                    push   esi
0x00523005  8bcd                  mov    ecx, ebp
0x00523007  ffd2                  call   edx
0x00523009  eb04                  jmp    0x52300f  ; -> sub_52300F
0x0052300B  8b5c243c              mov    ebx, dword ptr [esp + 0x3c]
0x0052300F  8b742460              mov    esi, dword ptr [esp + 0x60]
0x00523013  85f6                  test   esi, esi
0x00523015  5d                    pop    ebp
0x00523016  7410                  je     0x523028  ; -> sub_523028
0x00523018  8bce                  mov    ecx, esi
0x0052301A  e85114f6ff            call   0x484470  ; -> sub_484470
0x0052301F  56                    push   esi
0x00523020  e8fbeeedff            call   0x401f20  ; -> sub_401F20
0x00523025  83c404                add    esp, 4
0x00523028  8b74244c              mov    esi, dword ptr [esp + 0x4c]
0x0052302C  85f6                  test   esi, esi
0x0052302E  7410                  je     0x523040  ; -> sub_523040
0x00523030  8bce                  mov    ecx, esi
0x00523032  e83914f6ff            call   0x484470  ; -> sub_484470
0x00523037  56                    push   esi
0x00523038  e8e3eeedff            call   0x401f20  ; -> sub_401F20
0x0052303D  83c404                add    esp, 4
0x00523040  8b742420              mov    esi, dword ptr [esp + 0x20]
0x00523044  85f6                  test   esi, esi
0x00523046  7410                  je     0x523058  ; -> sub_523058
0x00523048  8bce                  mov    ecx, esi
0x0052304A  e82114f6ff            call   0x484470  ; -> sub_484470
0x0052304F  56                    push   esi
0x00523050  e8cbeeedff            call   0x401f20  ; -> sub_401F20
0x00523055  83c404                add    esp, 4
0x00523058  8b742424              mov    esi, dword ptr [esp + 0x24]
0x0052305C  85f6                  test   esi, esi
0x0052305E  7410                  je     0x523070  ; -> sub_523070
0x00523060  8bce                  mov    ecx, esi
0x00523062  e80914f6ff            call   0x484470  ; -> sub_484470
0x00523067  56                    push   esi
0x00523068  e8b3eeedff            call   0x401f20  ; -> sub_401F20
0x0052306D  83c404                add    esp, 4
0x00523070  8b742428              mov    esi, dword ptr [esp + 0x28]
0x00523074  85f6                  test   esi, esi
0x00523076  7410                  je     0x523088  ; -> sub_523088
0x00523078  8bce                  mov    ecx, esi
0x0052307A  e8f113f6ff            call   0x484470  ; -> sub_484470
0x0052307F  56                    push   esi
0x00523080  e89beeedff            call   0x401f20  ; -> sub_401F20
0x00523085  83c404                add    esp, 4
0x00523088  8b74242c              mov    esi, dword ptr [esp + 0x2c]
0x0052308C  85f6                  test   esi, esi
0x0052308E  7410                  je     0x5230a0  ; -> sub_5230A0
0x00523090  8bce                  mov    ecx, esi
0x00523092  e8d913f6ff            call   0x484470  ; -> sub_484470
0x00523097  56                    push   esi
0x00523098  e883eeedff            call   0x401f20  ; -> sub_401F20
0x0052309D  83c404                add    esp, 4
0x005230A0  8b742430              mov    esi, dword ptr [esp + 0x30]
0x005230A4  85f6                  test   esi, esi
0x005230A6  7410                  je     0x5230b8  ; -> sub_5230B8
0x005230A8  8bce                  mov    ecx, esi
0x005230AA  e8c113f6ff            call   0x484470  ; -> sub_484470
0x005230AF  56                    push   esi
0x005230B0  e86beeedff            call   0x401f20  ; -> sub_401F20
0x005230B5  83c404                add    esp, 4
0x005230B8  8b74241c              mov    esi, dword ptr [esp + 0x1c]
0x005230BC  85f6                  test   esi, esi
0x005230BE  7410                  je     0x5230d0  ; -> sub_5230D0
0x005230C0  8bce                  mov    ecx, esi
0x005230C2  e8a913f6ff            call   0x484470  ; -> sub_484470
0x005230C7  56                    push   esi
0x005230C8  e853eeedff            call   0x401f20  ; -> sub_401F20
0x005230CD  83c404                add    esp, 4
0x005230D0  85db                  test   ebx, ebx
0x005230D2  7410                  je     0x5230e4  ; -> sub_5230E4
0x005230D4  8bcb                  mov    ecx, ebx
0x005230D6  e89513f6ff            call   0x484470  ; -> sub_484470
0x005230DB  53                    push   ebx
0x005230DC  e83feeedff            call   0x401f20  ; -> sub_401F20
0x005230E1  83c404                add    esp, 4
0x005230E4  8b74243c              mov    esi, dword ptr [esp + 0x3c]
0x005230E8  85f6                  test   esi, esi
0x005230EA  7410                  je     0x5230fc  ; -> sub_5230FC
0x005230EC  8bce                  mov    ecx, esi
0x005230EE  e87d13f6ff            call   0x484470  ; -> sub_484470
0x005230F3  56                    push   esi
0x005230F4  e827eeedff            call   0x401f20  ; -> sub_401F20
0x005230F9  83c404                add    esp, 4
0x005230FC  8b742410              mov    esi, dword ptr [esp + 0x10]
0x00523100  85f6                  test   esi, esi
0x00523102  7410                  je     0x523114  ; -> sub_523114
0x00523104  8bce                  mov    ecx, esi
0x00523106  e86513f6ff            call   0x484470  ; -> sub_484470
0x0052310B  56                    push   esi
0x0052310C  e80feeedff            call   0x401f20  ; -> sub_401F20
0x00523111  83c404                add    esp, 4
0x00523114  8b742414              mov    esi, dword ptr [esp + 0x14]
0x00523118  85f6                  test   esi, esi
0x0052311A  7410                  je     0x52312c  ; -> sub_52312C
0x0052311C  8bce                  mov    ecx, esi
0x0052311E  e84d13f6ff            call   0x484470  ; -> sub_484470
0x00523123  56                    push   esi
0x00523124  e8f7ededff            call   0x401f20  ; -> sub_401F20
0x00523129  83c404                add    esp, 4
0x0052312C  8b742418              mov    esi, dword ptr [esp + 0x18]
0x00523130  85f6                  test   esi, esi
0x00523132  7410                  je     0x523144  ; -> sub_523144
0x00523134  8bce                  mov    ecx, esi
0x00523136  e83513f6ff            call   0x484470  ; -> sub_484470
0x0052313B  56                    push   esi
0x0052313C  e8dfededff            call   0x401f20  ; -> sub_401F20
0x00523141  83c404                add    esp, 4
0x00523144  8a4c240f              mov    cl, byte ptr [esp + 0xf]
0x00523148  8b442444              mov    eax, dword ptr [esp + 0x44]
0x0052314C  5f                    pop    edi
0x0052314D  888885010000          mov    byte ptr [eax + 0x185], cl
0x00523153  8b4c2430              mov    ecx, dword ptr [esp + 0x30]
0x00523157  85c9                  test   ecx, ecx
0x00523159  5e                    pop    esi
0x0052315A  5b                    pop    ebx
0x0052315B  740d                  je     0x52316a  ; -> sub_52316A
0x0052315D  83795800              cmp    dword ptr [ecx + 0x58], 0
0x00523161  7407                  je     0x52316a  ; -> sub_52316A
0x00523163  6a01                  push   1
0x00523165  e8b6a80c00            call   0x5eda20  ; -> sub_5EDA20
0x0052316A  83c43c                add    esp, 0x3c
0x0052316D  c21400                ret    0x14
0x00523170  6aff                  push   -1
0x00523172  689b829c00            push   0x9c829b  ; -> sub_9C829B
0x00523177  64a100000000          mov    eax, dword ptr fs:[0]
0x0052317D  50                    push   eax
0x0052317E  53                    push   ebx
0x0052317F  56                    push   esi
0x00523180  57                    push   edi
0x00523181  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00523186  33c4                  xor    eax, esp
0x00523188  50                    push   eax
0x00523189  8d442410              lea    eax, [esp + 0x10]
0x0052318D  64a300000000          mov    dword ptr fs:[0], eax
0x00523193  8bd9                  mov    ebx, ecx
0x00523195  8b742420              mov    esi, dword ptr [esp + 0x20]
0x00523199  8b06                  mov    eax, dword ptr [esi]
0x0052319B  8b9068010000          mov    edx, dword ptr [eax + 0x168]
0x005231A1  8bce                  mov    ecx, esi
0x005231A3  ffd2                  call   edx
0x005231A5  8bf8                  mov    edi, eax
0x005231A7  85ff                  test   edi, edi
0x005231A9  741c                  je     0x5231c7  ; -> sub_5231C7
0x005231AB  8b03                  mov    eax, dword ptr [ebx]
0x005231AD  8b90d4000000          mov    edx, dword ptr [eax + 0xd4]
0x005231B3  8bcb                  mov    ecx, ebx
0x005231B5  ffd2                  call   edx
0x005231B7  50                    push   eax
0x005231B8  686839a500            push   0xa53968  ; -> sub_A53968
0x005231BD  e89e48f8ff            call   0x4a7a60  ; -> sub_4A7A60
0x005231C2  83c408                add    esp, 8
0x005231C5  eb42                  jmp    0x523209  ; -> sub_523209
0x005231C7  6854010000            push   0x154
0x005231CC  e82fededff            call   0x401f00  ; -> sub_401F00
0x005231D1  83c404                add    esp, 4
0x005231D4  89442420              mov    dword ptr [esp + 0x20], eax
0x005231D8  85c0                  test   eax, eax
0x005231DA  c744241800000000      mov    dword ptr [esp + 0x18], 0
0x005231E2  740e                  je     0x5231f2  ; -> sub_5231F2
0x005231E4  6a00                  push   0
0x005231E6  56                    push   esi
0x005231E7  8bc8                  mov    ecx, eax
0x005231E9  e84255f5ff            call   0x478730  ; -> sub_478730
0x005231EE  8bf8                  mov    edi, eax
0x005231F0  eb02                  jmp    0x5231f4  ; -> sub_5231F4
0x005231F2  33ff                  xor    edi, edi
0x005231F4  8b06                  mov    eax, dword ptr [esi]
0x005231F6  8b906c010000          mov    edx, dword ptr [eax + 0x16c]
0x005231FC  57                    push   edi
0x005231FD  8bce                  mov    ecx, esi
0x005231FF  c744241cffffffff      mov    dword ptr [esp + 0x1c], 0xffffffff
0x00523207  ffd2                  call   edx
0x00523209  8bc7                  mov    eax, edi
0x0052320B  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x0052320F  64890d00000000        mov    dword ptr fs:[0], ecx
0x00523216  59                    pop    ecx
0x00523217  5f                    pop    edi
0x00523218  5e                    pop    esi
0x00523219  5b                    pop    ebx
0x0052321A  83c40c                add    esp, 0xc
0x0052321D  c20400                ret    4
0x00523220  53                    push   ebx
0x00523221  8b1d7c80a200          mov    ebx, dword ptr [0xa2807c]
0x00523227  56                    push   esi
0x00523228  8bf1                  mov    esi, ecx
0x0052322A  57                    push   edi
0x0052322B  8bbed4010000          mov    edi, dword ptr [esi + 0x1d4]
0x00523231  85ff                  test   edi, edi
0x00523233  7422                  je     0x523257  ; -> sub_523257
0x00523235  8d4704                lea    eax, [edi + 4]
0x00523238  50                    push   eax
0x00523239  ffd3                  call   ebx
0x0052323B  85c0                  test   eax, eax
0x0052323D  750e                  jne    0x52324d  ; -> sub_52324D
0x0052323F  85ff                  test   edi, edi
0x00523241  740a                  je     0x52324d  ; -> sub_52324D
0x00523243  8b17                  mov    edx, dword ptr [edi]
0x00523245  8b02                  mov    eax, dword ptr [edx]
0x00523247  6a01                  push   1
0x00523249  8bcf                  mov    ecx, edi
0x0052324B  ffd0                  call   eax
0x0052324D  c786d401000000000000  mov    dword ptr [esi + 0x1d4], 0
0x00523257  8bbed8010000          mov    edi, dword ptr [esi + 0x1d8]
0x0052325D  85ff                  test   edi, edi
0x0052325F  7422                  je     0x523283  ; -> sub_523283
0x00523261  8d4f04                lea    ecx, [edi + 4]
0x00523264  51                    push   ecx
0x00523265  ffd3                  call   ebx
0x00523267  85c0                  test   eax, eax
0x00523269  750e                  jne    0x523279  ; -> sub_523279
0x0052326B  85ff                  test   edi, edi
0x0052326D  740a                  je     0x523279  ; -> sub_523279
0x0052326F  8b17                  mov    edx, dword ptr [edi]
0x00523271  8b02                  mov    eax, dword ptr [edx]
0x00523273  6a01                  push   1
0x00523275  8bcf                  mov    ecx, edi
0x00523277  ffd0                  call   eax
0x00523279  c786d801000000000000  mov    dword ptr [esi + 0x1d8], 0
0x00523283  83bed401000000        cmp    dword ptr [esi + 0x1d4], 0
0x0052328A  753b                  jne    0x5232c7  ; -> sub_5232C7
0x0052328C  83bed801000000        cmp    dword ptr [esi + 0x1d8], 0
0x00523293  7532                  jne    0x5232c7  ; -> sub_5232C7
0x00523295  8b8ee8000000          mov    ecx, dword ptr [esi + 0xe8]
0x0052329B  85c9                  test   ecx, ecx
0x0052329D  7428                  je     0x5232c7  ; -> sub_5232C7
0x0052329F  8b542414              mov    edx, dword ptr [esp + 0x14]
0x005232A3  8b442410              mov    eax, dword ptr [esp + 0x10]
0x005232A7  6a00                  push   0
0x005232A9  6a01                  push   1
0x005232AB  56                    push   esi
0x005232AC  52                    push   edx
0x005232AD  50                    push   eax
0x005232AE  e81dac0000            call   0x52ded0  ; -> sub_52DED0
0x005232B3  8b8ee8000000          mov    ecx, dword ptr [esi + 0xe8]
0x005232B9  668b91fc020000        mov    dx, word ptr [ecx + 0x2fc]
0x005232C0  668996e0010000        mov    word ptr [esi + 0x1e0], dx
0x005232C7  5f                    pop    edi
0x005232C8  5e                    pop    esi
0x005232C9  5b                    pop    ebx
0x005232CA  c20800                ret    8
0x005232CD  cc                    int3   
0x005232CE  cc                    int3   
0x005232CF  cc                    int3   
0x005232D0  56                    push   esi
0x005232D1  8bf1                  mov    esi, ecx
0x005232D3  8b4c2408              mov    ecx, dword ptr [esp + 8]
0x005232D7  8d51f4                lea    edx, [ecx - 0xc]
0x005232DA  33c0                  xor    eax, eax
0x005232DC  83fa14                cmp    edx, 0x14
0x005232DF  771a                  ja     0x5232fb  ; -> sub_5232FB
0x005232E1  51                    push   ecx
0x005232E2  6a02                  push   2
0x005232E4  e867290400            call   0x565c50  ; -> sub_565C50
0x005232E9  0fbec0                movsx  eax, al
0x005232EC  0fb68430ec000000      movzx  eax, byte ptr [eax + esi + 0xec]
0x005232F4  83c408                add    esp, 8
0x005232F7  5e                    pop    esi
0x005232F8  c20400                ret    4
0x005232FB  8d51db                lea    edx, [ecx - 0x25]
0x005232FE  83fa02                cmp    edx, 2
0x00523301  7608                  jbe    0x52330b  ; -> sub_52330B
0x00523303  51                    push   ecx
0x00523304  8bce                  mov    ecx, esi
0x00523306  e8856affff            call   0x519d90  ; -> sub_519D90
0x0052330B  5e                    pop    esi
0x0052330C  c20400                ret    4
0x0052330F  cc                    int3   
0x00523310  8b442404              mov    eax, dword ptr [esp + 4]
0x00523314  56                    push   esi
0x00523315  8bf1                  mov    esi, ecx
0x00523317  8d48f4                lea    ecx, [eax - 0xc]
0x0052331A  83f914                cmp    ecx, 0x14
0x0052331D  7729                  ja     0x523348  ; -> sub_523348
0x0052331F  50                    push   eax
0x00523320  6a02                  push   2
0x00523322  e829290400            call   0x565c50  ; -> sub_565C50
0x00523327  0fbed0                movsx  edx, al
0x0052332A  8a442414              mov    al, byte ptr [esp + 0x14]
0x0052332E  83c408                add    esp, 8
0x00523331  6800020000            push   0x200
0x00523336  8bce                  mov    ecx, esi
0x00523338  888432ec000000        mov    byte ptr [edx + esi + 0xec], al
0x0052333F  e8ac78f4ff            call   0x46abf0  ; -> sub_46ABF0
0x00523344  5e                    pop    esi
0x00523345  c20800                ret    8
0x00523348  8d48db                lea    ecx, [eax - 0x25]
0x0052334B  83f902                cmp    ecx, 2
0x0052334E  760d                  jbe    0x52335d  ; -> sub_52335D
0x00523350  8b54240c              mov    edx, dword ptr [esp + 0xc]
0x00523354  52                    push   edx
0x00523355  50                    push   eax
0x00523356  8bce                  mov    ecx, esi
0x00523358  e8f36bffff            call   0x519f50  ; -> sub_519F50
0x0052335D  5e                    pop    esi
0x0052335E  c20800                ret    8
0x00523361  cc                    int3   
0x00523362  cc                    int3   
0x00523363  cc                    int3   
0x00523364  cc                    int3   
0x00523365  cc                    int3   
0x00523366  cc                    int3   
0x00523367  cc                    int3   
0x00523368  cc                    int3   
0x00523369  cc                    int3   
0x0052336A  cc                    int3   
0x0052336B  cc                    int3   
0x0052336C  cc                    int3   
0x0052336D  cc                    int3   
0x0052336E  cc                    int3   
0x0052336F  cc                    int3   
0x00523370  56                    push   esi
0x00523371  57                    push   edi
0x00523372  8b7c240c              mov    edi, dword ptr [esp + 0xc]
0x00523376  57                    push   edi
0x00523377  8bf1                  mov    esi, ecx
0x00523379  e8a271ffff            call   0x51a520  ; -> sub_51A520
0x0052337E  f7c700020000          test   edi, 0x200
0x00523384  7410                  je     0x523396  ; -> sub_523396
0x00523386  6a15                  push   0x15
0x00523388  8d86ec000000          lea    eax, [esi + 0xec]
0x0052338E  50                    push   eax
0x0052338F  8bce                  mov    ecx, esi
0x00523391  e8da78f4ff            call   0x46ac70  ; -> sub_46AC70
0x00523396  f7c700040000          test   edi, 0x400
0x0052339C  7427                  je     0x5233c5  ; -> sub_5233C5
0x0052339E  8b86e4010000          mov    eax, dword ptr [esi + 0x1e4]
0x005233A4  85c0                  test   eax, eax
0x005233A6  c744240c00000000      mov    dword ptr [esp + 0xc], 0
0x005233AE  7407                  je     0x5233b7  ; -> sub_5233B7
0x005233B0  8b480c                mov    ecx, dword ptr [eax + 0xc]
0x005233B3  894c240c              mov    dword ptr [esp + 0xc], ecx
0x005233B7  6a04                  push   4
0x005233B9  8d542410              lea    edx, [esp + 0x10]
0x005233BD  52                    push   edx
0x005233BE  8bce                  mov    ecx, esi
0x005233C0  e8cb78f4ff            call   0x46ac90  ; -> sub_46AC90
0x005233C5  5f                    pop    edi
0x005233C6  5e                    pop    esi
0x005233C7  c20400                ret    4
0x005233CA  cc                    int3   
0x005233CB  cc                    int3   
0x005233CC  cc                    int3   
0x005233CD  cc                    int3   
0x005233CE  cc                    int3   
0x005233CF  cc                    int3   
0x005233D0  56                    push   esi
0x005233D1  8b742408              mov    esi, dword ptr [esp + 8]
0x005233D5  85f6                  test   esi, esi
0x005233D7  57                    push   edi
0x005233D8  8bf9                  mov    edi, ecx
0x005233DA  744e                  je     0x52342a  ; -> sub_52342A
0x005233DC  83bfec01000000        cmp    dword ptr [edi + 0x1ec], 0
0x005233E3  7445                  je     0x52342a  ; -> sub_52342A
0x005233E5  6a00                  push   0
0x005233E7  6a00                  push   0
0x005233E9  8bce                  mov    ecx, esi
0x005233EB  e850e6f2ff            call   0x451a40  ; -> sub_451A40
0x005233F0  84c0                  test   al, al
0x005233F2  7436                  je     0x52342a  ; -> sub_52342A
0x005233F4  8b87ec010000          mov    eax, dword ptr [edi + 0x1ec]
0x005233FA  50                    push   eax
0x005233FB  8bce                  mov    ecx, esi
0x005233FD  e85ee0f2ff            call   0x451460  ; -> sub_451460
0x00523402  84c0                  test   al, al
0x00523404  7424                  je     0x52342a  ; -> sub_52342A
0x00523406  8bce                  mov    ecx, esi
0x00523408  e8b3ddf2ff            call   0x4511c0  ; -> sub_4511C0
0x0052340D  0fb60da45fb000        movzx  ecx, byte ptr [0xb05fa4]
0x00523414  3bc1                  cmp    eax, ecx
0x00523416  7512                  jne    0x52342a  ; -> sub_52342A
0x00523418  8b9648020000          mov    edx, dword ptr [esi + 0x248]
0x0052341E  3b570c                cmp    edx, dword ptr [edi + 0xc]
0x00523421  7507                  jne    0x52342a  ; -> sub_52342A
0x00523423  5f                    pop    edi
0x00523424  b001                  mov    al, 1
0x00523426  5e                    pop    esi
0x00523427  c20400                ret    4
0x0052342A  5f                    pop    edi
0x0052342B  32c0                  xor    al, al
0x0052342D  5e                    pop    esi
0x0052342E  c20400                ret    4
0x00523431  cc                    int3   
0x00523432  cc                    int3   
0x00523433  cc                    int3   
0x00523434  cc                    int3   
0x00523435  cc                    int3   
0x00523436  cc                    int3   
0x00523437  cc                    int3   
0x00523438  cc                    int3   
0x00523439  cc                    int3   
0x0052343A  cc                    int3   
0x0052343B  cc                    int3   
0x0052343C  cc                    int3   
0x0052343D  cc                    int3   
0x0052343E  cc                    int3   
0x0052343F  cc                    int3   
0x00523440  51                    push   ecx
0x00523441  c7042400000000        mov    dword ptr [esp], 0
0x00523448  668b1424              mov    dx, word ptr [esp]
0x0052344C  56                    push   esi
0x0052344D  8d8124010000          lea    eax, [ecx + 0x124]
0x00523453  b902000000            mov    ecx, 2
0x00523458  57                    push   edi
0x00523459  8da42400000000        lea    esp, [esp]
0x00523460  668b70e4              mov    si, word ptr [eax - 0x1c]
0x00523464  660faf70e8            imul   si, word ptr [eax - 0x18]
0x00523469  668b78fc              mov    di, word ptr [eax - 4]
0x0052346D  660faf38              imul   di, word ptr [eax]
0x00523471  6603f7                add    si, di
0x00523474  6603f6                add    si, si
0x00523477  6603f6                add    si, si
0x0052347A  6603d6                add    dx, si
0x0052347D  83c030                add    eax, 0x30
0x00523480  83e901                sub    ecx, 1
0x00523483  75db                  jne    0x523460  ; -> sub_523460
0x00523485  6689542408            mov    word ptr [esp + 8], dx
0x0052348A  8b442408              mov    eax, dword ptr [esp + 8]
0x0052348E  5f                    pop    edi
0x0052348F  83c015                add    eax, 0x15
0x00523492  5e                    pop    esi
0x00523493  59                    pop    ecx
0x00523494  c20400                ret    4
0x00523497  cc                    int3   
0x00523498  cc                    int3   
0x00523499  cc                    int3   
0x0052349A  cc                    int3   
0x0052349B  cc                    int3   
0x0052349C  cc                    int3   
0x0052349D  cc                    int3   
0x0052349E  cc                    int3   
0x0052349F  cc                    int3   
0x005234A0  51                    push   ecx
0x005234A1  d9e8                  fld1   
0x005234A3  56                    push   esi
0x005234A4  8d713c                lea    esi, [ecx + 0x3c]
0x005234A7  d95c2404              fstp   dword ptr [esp + 4]
0x005234AB  85f6                  test   esi, esi
0x005234AD  7430                  je     0x5234df  ; -> sub_5234DF
0x005234AF  57                    push   edi
0x005234B0  8b06                  mov    eax, dword ptr [esi]
0x005234B2  85c0                  test   eax, eax
0x005234B4  7428                  je     0x5234de  ; -> sub_5234DE
0x005234B6  8b38                  mov    edi, dword ptr [eax]
0x005234B8  8bcf                  mov    ecx, edi
0x005234BA  e8e1bbffff            call   0x51f0a0  ; -> sub_51F0A0
0x005234BF  d9442408              fld    dword ptr [esp + 8]
0x005234C3  ded9                  fcompp 
0x005234C5  dfe0                  fnstsw ax
0x005234C7  f6c405                test   ah, 5
0x005234CA  7a0b                  jp     0x5234d7  ; -> sub_5234D7
0x005234CC  8bcf                  mov    ecx, edi
0x005234CE  e8cdbbffff            call   0x51f0a0  ; -> sub_51F0A0
0x005234D3  d95c2408              fstp   dword ptr [esp + 8]
0x005234D7  8b7604                mov    esi, dword ptr [esi + 4]
0x005234DA  85f6                  test   esi, esi
0x005234DC  75d2                  jne    0x5234b0  ; -> sub_5234B0
0x005234DE  5f                    pop    edi
0x005234DF  d9442404              fld    dword ptr [esp + 4]
0x005234E3  5e                    pop    esi
0x005234E4  59                    pop    ecx
0x005234E5  c3                    ret    
0x005234E6  cc                    int3   
0x005234E7  cc                    int3   
0x005234E8  cc                    int3   
0x005234E9  cc                    int3   
0x005234EA  cc                    int3   
0x005234EB  cc                    int3   
0x005234EC  cc                    int3   
0x005234ED  cc                    int3   
0x005234EE  cc                    int3   
0x005234EF  cc                    int3   
0x005234F0  83ec3c                sub    esp, 0x3c
0x005234F3  53                    push   ebx
0x005234F4  55                    push   ebp
0x005234F5  56                    push   esi
0x005234F6  57                    push   edi
0x005234F7  6a08                  push   8
0x005234F9  8bf9                  mov    edi, ecx
0x005234FB  e800eaedff            call   0x401f00  ; -> sub_401F00
0x00523500  33db                  xor    ebx, ebx
0x00523502  83c404                add    esp, 4
0x00523505  3bc3                  cmp    eax, ebx
0x00523507  740b                  je     0x523514  ; -> sub_523514
0x00523509  8918                  mov    dword ptr [eax], ebx
0x0052350B  895804                mov    dword ptr [eax + 4], ebx
0x0052350E  89442410              mov    dword ptr [esp + 0x10], eax
0x00523512  eb04                  jmp    0x523518  ; -> sub_523518
0x00523514  895c2410              mov    dword ptr [esp + 0x10], ebx
0x00523518  8bcf                  mov    ecx, edi
0x0052351A  e80168ffff            call   0x519d20  ; -> sub_519D20
0x0052351F  3bfb                  cmp    edi, ebx
0x00523521  89442414              mov    dword ptr [esp + 0x14], eax
0x00523525  7405                  je     0x52352c  ; -> sub_52352C
0x00523527  8d7744                lea    esi, [edi + 0x44]
0x0052352A  eb02                  jmp    0x52352e  ; -> sub_52352E
0x0052352C  33f6                  xor    esi, esi
0x0052352E  33c0                  xor    eax, eax
0x00523530  33ed                  xor    ebp, ebp
0x00523532  38442450              cmp    byte ptr [esp + 0x50], al
0x00523536  895c2418              mov    dword ptr [esp + 0x18], ebx
0x0052353A  895c2420              mov    dword ptr [esp + 0x20], ebx
0x0052353E  89442424              mov    dword ptr [esp + 0x24], eax
0x00523542  8944241c              mov    dword ptr [esp + 0x1c], eax
0x00523546  89442428              mov    dword ptr [esp + 0x28], eax
0x0052354A  89442434              mov    dword ptr [esp + 0x34], eax
0x0052354E  745d                  je     0x5235ad  ; -> sub_5235AD
0x00523550  6a02                  push   2
0x00523552  57                    push   edi
0x00523553  8bce                  mov    ecx, esi
0x00523555  e8d665f4ff            call   0x469b30  ; -> sub_469B30
0x0052355A  6a03                  push   3
0x0052355C  57                    push   edi
0x0052355D  8bce                  mov    ecx, esi
0x0052355F  8bd8                  mov    ebx, eax
0x00523561  e8ca65f4ff            call   0x469b30  ; -> sub_469B30
0x00523566  6a05                  push   5
0x00523568  57                    push   edi
0x00523569  8bce                  mov    ecx, esi
0x0052356B  89442420              mov    dword ptr [esp + 0x20], eax
0x0052356F  e8bc65f4ff            call   0x469b30  ; -> sub_469B30
0x00523574  6a04                  push   4
0x00523576  57                    push   edi
0x00523577  8bce                  mov    ecx, esi
0x00523579  89442428              mov    dword ptr [esp + 0x28], eax
0x0052357D  e8ae65f4ff            call   0x469b30  ; -> sub_469B30
0x00523582  6a01                  push   1
0x00523584  57                    push   edi
0x00523585  8bce                  mov    ecx, esi
0x00523587  89442424              mov    dword ptr [esp + 0x24], eax
0x0052358B  e8a065f4ff            call   0x469b30  ; -> sub_469B30
0x00523590  55                    push   ebp
0x00523591  57                    push   edi
0x00523592  8bce                  mov    ecx, esi
0x00523594  8944242c              mov    dword ptr [esp + 0x2c], eax
0x00523598  e89365f4ff            call   0x469b30  ; -> sub_469B30
0x0052359D  6a0d                  push   0xd
0x0052359F  57                    push   edi
0x005235A0  8bce                  mov    ecx, esi
0x005235A2  8be8                  mov    ebp, eax
0x005235A4  e88765f4ff            call   0x469b30  ; -> sub_469B30
0x005235A9  89442428              mov    dword ptr [esp + 0x28], eax
0x005235AD  807c245400            cmp    byte ptr [esp + 0x54], 0
0x005235B2  740c                  je     0x5235c0  ; -> sub_5235C0
0x005235B4  57                    push   edi
0x005235B5  8bce                  mov    ecx, esi
0x005235B7  e8f464f4ff            call   0x469ab0  ; -> sub_469AB0
0x005235BC  89442434              mov    dword ptr [esp + 0x34], eax
0x005235C0  85db                  test   ebx, ebx
0x005235C2  750c                  jne    0x5235d0  ; -> sub_5235D0
0x005235C4  6a02                  push   2
0x005235C6  57                    push   edi
0x005235C7  8bce                  mov    ecx, esi
0x005235C9  e80266f4ff            call   0x469bd0  ; -> sub_469BD0
0x005235CE  8bd8                  mov    ebx, eax
0x005235D0  837c241800            cmp    dword ptr [esp + 0x18], 0
0x005235D5  750e                  jne    0x5235e5  ; -> sub_5235E5
0x005235D7  6a03                  push   3
0x005235D9  57                    push   edi
0x005235DA  8bce                  mov    ecx, esi
0x005235DC  e8ef65f4ff            call   0x469bd0  ; -> sub_469BD0
0x005235E1  89442418              mov    dword ptr [esp + 0x18], eax
0x005235E5  837c242000            cmp    dword ptr [esp + 0x20], 0
0x005235EA  750e                  jne    0x5235fa  ; -> sub_5235FA
0x005235EC  6a05                  push   5
0x005235EE  57                    push   edi
0x005235EF  8bce                  mov    ecx, esi
0x005235F1  e8da65f4ff            call   0x469bd0  ; -> sub_469BD0
0x005235F6  89442420              mov    dword ptr [esp + 0x20], eax
0x005235FA  837c241c00            cmp    dword ptr [esp + 0x1c], 0
0x005235FF  750e                  jne    0x52360f  ; -> sub_52360F
0x00523601  6a04                  push   4
0x00523603  57                    push   edi
0x00523604  8bce                  mov    ecx, esi
0x00523606  e8c565f4ff            call   0x469bd0  ; -> sub_469BD0
0x0052360B  8944241c              mov    dword ptr [esp + 0x1c], eax
0x0052360F  837c242400            cmp    dword ptr [esp + 0x24], 0
0x00523614  750e                  jne    0x523624  ; -> sub_523624
0x00523616  6a01                  push   1
0x00523618  57                    push   edi
0x00523619  8bce                  mov    ecx, esi
0x0052361B  e8b065f4ff            call   0x469bd0  ; -> sub_469BD0
0x00523620  89442424              mov    dword ptr [esp + 0x24], eax
0x00523624  85ed                  test   ebp, ebp
0x00523626  7509                  jne    0x523631  ; -> sub_523631
0x00523628  55                    push   ebp
0x00523629  57                    push   edi
0x0052362A  8bce                  mov    ecx, esi
0x0052362C  e89f65f4ff            call   0x469bd0  ; -> sub_469BD0
0x00523631  837c242800            cmp    dword ptr [esp + 0x28], 0
0x00523636  750e                  jne    0x523646  ; -> sub_523646
0x00523638  6a0d                  push   0xd
0x0052363A  57                    push   edi
0x0052363B  8bce                  mov    ecx, esi
0x0052363D  e88e65f4ff            call   0x469bd0  ; -> sub_469BD0
0x00523642  89442428              mov    dword ptr [esp + 0x28], eax
0x00523646  33f6                  xor    esi, esi
0x00523648  33ed                  xor    ebp, ebp
0x0052364A  3bde                  cmp    ebx, esi
0x0052364C  89742450              mov    dword ptr [esp + 0x50], esi
0x00523650  89742454              mov    dword ptr [esp + 0x54], esi
0x00523654  8974242c              mov    dword ptr [esp + 0x2c], esi
0x00523658  89742430              mov    dword ptr [esp + 0x30], esi
0x0052365C  7448                  je     0x5236a6  ; -> sub_5236A6
0x0052365E  56                    push   esi
0x0052365F  68dc36b000            push   0xb036dc  ; -> sub_B036DC
0x00523664  684832b000            push   0xb03248  ; -> sub_B03248
0x00523669  56                    push   esi
0x0052366A  53                    push   ebx
0x0052366B  e876fc4500            call   0x9832e6  ; -> sub_9832E6
0x00523670  8be8                  mov    ebp, eax
0x00523672  83c414                add    esp, 0x14
0x00523675  85ed                  test   ebp, ebp
0x00523677  742d                  je     0x5236a6  ; -> sub_5236A6
0x00523679  8b442414              mov    eax, dword ptr [esp + 0x14]
0x0052367D  50                    push   eax
0x0052367E  8bcd                  mov    ecx, ebp
0x00523680  e8ab5cf4ff            call   0x469330  ; -> sub_469330
0x00523685  85c0                  test   eax, eax
0x00523687  8b5c2410              mov    ebx, dword ptr [esp + 0x10]
0x0052368B  7408                  je     0x523695  ; -> sub_523695
0x0052368D  50                    push   eax
0x0052368E  8bcb                  mov    ecx, ebx
0x00523690  e81b36f2ff            call   0x446cb0  ; -> sub_446CB0
0x00523695  6a00                  push   0
0x00523697  6a03                  push   3
0x00523699  8bcd                  mov    ecx, ebp
0x0052369B  e85059f4ff            call   0x468ff0  ; -> sub_468FF0
0x005236A0  84c0                  test   al, al
0x005236A2  7549                  jne    0x5236ed  ; -> sub_5236ED
0x005236A4  eb04                  jmp    0x5236aa  ; -> sub_5236AA
0x005236A6  8b5c2410              mov    ebx, dword ptr [esp + 0x10]
0x005236AA  8b442418              mov    eax, dword ptr [esp + 0x18]
0x005236AE  85c0                  test   eax, eax
0x005236B0  743b                  je     0x5236ed  ; -> sub_5236ED
0x005236B2  6a00                  push   0
0x005236B4  68dc36b000            push   0xb036dc  ; -> sub_B036DC
0x005236B9  684832b000            push   0xb03248  ; -> sub_B03248
0x005236BE  6a00                  push   0
0x005236C0  50                    push   eax
0x005236C1  e820fc4500            call   0x9832e6  ; -> sub_9832E6
0x005236C6  83c414                add    esp, 0x14
0x005236C9  85c0                  test   eax, eax
0x005236CB  89442450              mov    dword ptr [esp + 0x50], eax
0x005236CF  7418                  je     0x5236e9  ; -> sub_5236E9
0x005236D1  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x005236D5  51                    push   ecx
0x005236D6  8bc8                  mov    ecx, eax
0x005236D8  e8535cf4ff            call   0x469330  ; -> sub_469330
0x005236DD  85c0                  test   eax, eax
0x005236DF  7408                  je     0x5236e9  ; -> sub_5236E9
0x005236E1  50                    push   eax
0x005236E2  8bcb                  mov    ecx, ebx
0x005236E4  e8c735f2ff            call   0x446cb0  ; -> sub_446CB0
0x005236E9  8b742450              mov    esi, dword ptr [esp + 0x50]
0x005236ED  85ed                  test   ebp, ebp
0x005236EF  740f                  je     0x523700  ; -> sub_523700
0x005236F1  6a00                  push   0
0x005236F3  6a04                  push   4
0x005236F5  8bcd                  mov    ecx, ebp
0x005236F7  e8f458f4ff            call   0x468ff0  ; -> sub_468FF0
0x005236FC  84c0                  test   al, al
0x005236FE  7552                  jne    0x523752  ; -> sub_523752
0x00523700  85f6                  test   esi, esi
0x00523702  740f                  je     0x523713  ; -> sub_523713
0x00523704  6a00                  push   0
0x00523706  6a04                  push   4
0x00523708  8bce                  mov    ecx, esi
0x0052370A  e8e158f4ff            call   0x468ff0  ; -> sub_468FF0
0x0052370F  84c0                  test   al, al
0x00523711  753f                  jne    0x523752  ; -> sub_523752
0x00523713  8b44241c              mov    eax, dword ptr [esp + 0x1c]
0x00523717  85c0                  test   eax, eax
0x00523719  7437                  je     0x523752  ; -> sub_523752
0x0052371B  6a00                  push   0
0x0052371D  68dc36b000            push   0xb036dc  ; -> sub_B036DC
0x00523722  684832b000            push   0xb03248  ; -> sub_B03248
0x00523727  6a00                  push   0
0x00523729  50                    push   eax
0x0052372A  e8b7fb4500            call   0x9832e6  ; -> sub_9832E6
0x0052372F  83c414                add    esp, 0x14
0x00523732  85c0                  test   eax, eax
0x00523734  89442454              mov    dword ptr [esp + 0x54], eax
0x00523738  7418                  je     0x523752  ; -> sub_523752
0x0052373A  8b542414              mov    edx, dword ptr [esp + 0x14]
0x0052373E  52                    push   edx
0x0052373F  8bc8                  mov    ecx, eax
0x00523741  e8ea5bf4ff            call   0x469330  ; -> sub_469330
0x00523746  85c0                  test   eax, eax
0x00523748  7408                  je     0x523752  ; -> sub_523752
0x0052374A  50                    push   eax
0x0052374B  8bcb                  mov    ecx, ebx
0x0052374D  e85e35f2ff            call   0x446cb0  ; -> sub_446CB0
0x00523752  85ed                  test   ebp, ebp
0x00523754  740f                  je     0x523765  ; -> sub_523765
0x00523756  6a00                  push   0
0x00523758  6a05                  push   5
0x0052375A  8bcd                  mov    ecx, ebp
0x0052375C  e88f58f4ff            call   0x468ff0  ; -> sub_468FF0
0x00523761  84c0                  test   al, al
0x00523763  7569                  jne    0x5237ce  ; -> sub_5237CE
0x00523765  85f6                  test   esi, esi
0x00523767  740f                  je     0x523778  ; -> sub_523778
0x00523769  6a00                  push   0
0x0052376B  6a05                  push   5
0x0052376D  8bce                  mov    ecx, esi
0x0052376F  e87c58f4ff            call   0x468ff0  ; -> sub_468FF0
0x00523774  84c0                  test   al, al
0x00523776  7556                  jne    0x5237ce  ; -> sub_5237CE
0x00523778  8b4c2454              mov    ecx, dword ptr [esp + 0x54]
0x0052377C  85c9                  test   ecx, ecx
0x0052377E  740d                  je     0x52378d  ; -> sub_52378D
0x00523780  6a00                  push   0
0x00523782  6a05                  push   5
0x00523784  e86758f4ff            call   0x468ff0  ; -> sub_468FF0
0x00523789  84c0                  test   al, al
0x0052378B  7541                  jne    0x5237ce  ; -> sub_5237CE
0x0052378D  8b442420              mov    eax, dword ptr [esp + 0x20]
0x00523791  85c0                  test   eax, eax
0x00523793  7439                  je     0x5237ce  ; -> sub_5237CE
0x00523795  6a00                  push   0
0x00523797  68dc36b000            push   0xb036dc  ; -> sub_B036DC
0x0052379C  684832b000            push   0xb03248  ; -> sub_B03248
0x005237A1  6a00                  push   0
0x005237A3  50                    push   eax
0x005237A4  e83dfb4500            call   0x9832e6  ; -> sub_9832E6
0x005237A9  83c414                add    esp, 0x14
0x005237AC  85c0                  test   eax, eax
0x005237AE  8944242c              mov    dword ptr [esp + 0x2c], eax
0x005237B2  741a                  je     0x5237ce  ; -> sub_5237CE
0x005237B4  8b442414              mov    eax, dword ptr [esp + 0x14]
0x005237B8  8b4c242c              mov    ecx, dword ptr [esp + 0x2c]
0x005237BC  50                    push   eax
0x005237BD  e86e5bf4ff            call   0x469330  ; -> sub_469330
0x005237C2  85c0                  test   eax, eax
0x005237C4  7408                  je     0x5237ce  ; -> sub_5237CE
0x005237C6  50                    push   eax
0x005237C7  8bcb                  mov    ecx, ebx
0x005237C9  e8e234f2ff            call   0x446cb0  ; -> sub_446CB0
0x005237CE  85ed                  test   ebp, ebp
0x005237D0  740f                  je     0x5237e1  ; -> sub_5237E1
0x005237D2  6a00                  push   0
0x005237D4  6a01                  push   1
0x005237D6  8bcd                  mov    ecx, ebp
0x005237D8  e81358f4ff            call   0x468ff0  ; -> sub_468FF0
0x005237DD  84c0                  test   al, al
0x005237DF  757c                  jne    0x52385d  ; -> sub_52385D
0x005237E1  85f6                  test   esi, esi
0x005237E3  740f                  je     0x5237f4  ; -> sub_5237F4
0x005237E5  6a00                  push   0
0x005237E7  6a01                  push   1
0x005237E9  8bce                  mov    ecx, esi
0x005237EB  e80058f4ff            call   0x468ff0  ; -> sub_468FF0
0x005237F0  84c0                  test   al, al
0x005237F2  7569                  jne    0x52385d  ; -> sub_52385D
0x005237F4  8b4c2454              mov    ecx, dword ptr [esp + 0x54]
0x005237F8  85c9                  test   ecx, ecx
0x005237FA  740d                  je     0x523809  ; -> sub_523809
0x005237FC  6a00                  push   0
0x005237FE  6a01                  push   1
0x00523800  e8eb57f4ff            call   0x468ff0  ; -> sub_468FF0
0x00523805  84c0                  test   al, al
0x00523807  7554                  jne    0x52385d  ; -> sub_52385D
0x00523809  8b4c242c              mov    ecx, dword ptr [esp + 0x2c]
0x0052380D  85c9                  test   ecx, ecx
0x0052380F  740d                  je     0x52381e  ; -> sub_52381E
0x00523811  6a00                  push   0
0x00523813  6a01                  push   1
0x00523815  e8d657f4ff            call   0x468ff0  ; -> sub_468FF0
0x0052381A  84c0                  test   al, al
0x0052381C  753f                  jne    0x52385d  ; -> sub_52385D
0x0052381E  8b442424              mov    eax, dword ptr [esp + 0x24]
0x00523822  85c0                  test   eax, eax
0x00523824  7437                  je     0x52385d  ; -> sub_52385D
0x00523826  6a00                  push   0
0x00523828  68dc36b000            push   0xb036dc  ; -> sub_B036DC
0x0052382D  684832b000            push   0xb03248  ; -> sub_B03248
0x00523832  6a00                  push   0
0x00523834  50                    push   eax
0x00523835  e8acfa4500            call   0x9832e6  ; -> sub_9832E6
0x0052383A  83c414                add    esp, 0x14
0x0052383D  85c0                  test   eax, eax
0x0052383F  89442430              mov    dword ptr [esp + 0x30], eax
0x00523843  7418                  je     0x52385d  ; -> sub_52385D
0x00523845  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x00523849  51                    push   ecx
0x0052384A  8bc8                  mov    ecx, eax
0x0052384C  e8df5af4ff            call   0x469330  ; -> sub_469330
0x00523851  85c0                  test   eax, eax
0x00523853  7408                  je     0x52385d  ; -> sub_52385D
0x00523855  50                    push   eax
0x00523856  8bcb                  mov    ecx, ebx
0x00523858  e85334f2ff            call   0x446cb0  ; -> sub_446CB0
0x0052385D  8b442428              mov    eax, dword ptr [esp + 0x28]
0x00523861  85c0                  test   eax, eax
0x00523863  7433                  je     0x523898  ; -> sub_523898
0x00523865  6a00                  push   0
0x00523867  68dc36b000            push   0xb036dc  ; -> sub_B036DC
0x0052386C  684832b000            push   0xb03248  ; -> sub_B03248
0x00523871  6a00                  push   0
0x00523873  50                    push   eax
0x00523874  e86dfa4500            call   0x9832e6  ; -> sub_9832E6
0x00523879  83c414                add    esp, 0x14
0x0052387C  85c0                  test   eax, eax
0x0052387E  7418                  je     0x523898  ; -> sub_523898
0x00523880  8b542414              mov    edx, dword ptr [esp + 0x14]
0x00523884  52                    push   edx
0x00523885  8bc8                  mov    ecx, eax
0x00523887  e8a45af4ff            call   0x469330  ; -> sub_469330
0x0052388C  85c0                  test   eax, eax
0x0052388E  7408                  je     0x523898  ; -> sub_523898
0x00523890  50                    push   eax
0x00523891  8bcb                  mov    ecx, ebx
0x00523893  e81834f2ff            call   0x446cb0  ; -> sub_446CB0
0x00523898  c744243802000000      mov    dword ptr [esp + 0x38], 2
0x005238A0  c744243c03000000      mov    dword ptr [esp + 0x3c], 3
0x005238A8  c744244004000000      mov    dword ptr [esp + 0x40], 4
0x005238B0  c744244405000000      mov    dword ptr [esp + 0x44], 5
0x005238B8  c74424480f000000      mov    dword ptr [esp + 0x48], 0xf
0x005238C0  33db                  xor    ebx, ebx
0x005238C2  85ed                  test   ebp, ebp
0x005238C4  8b749c38              mov    esi, dword ptr [esp + ebx*4 + 0x38]
0x005238C8  740e                  je     0x5238d8  ; -> sub_5238D8
0x005238CA  6a00                  push   0
0x005238CC  56                    push   esi
0x005238CD  8bcd                  mov    ecx, ebp
0x005238CF  e81c57f4ff            call   0x468ff0  ; -> sub_468FF0
0x005238D4  84c0                  test   al, al
0x005238D6  757c                  jne    0x523954  ; -> sub_523954
0x005238D8  8b4c2450              mov    ecx, dword ptr [esp + 0x50]
0x005238DC  85c9                  test   ecx, ecx
0x005238DE  740c                  je     0x5238ec  ; -> sub_5238EC
0x005238E0  6a00                  push   0
0x005238E2  56                    push   esi
0x005238E3  e80857f4ff            call   0x468ff0  ; -> sub_468FF0
0x005238E8  84c0                  test   al, al
0x005238EA  7568                  jne    0x523954  ; -> sub_523954
0x005238EC  8b4c2454              mov    ecx, dword ptr [esp + 0x54]
0x005238F0  85c9                  test   ecx, ecx
0x005238F2  740c                  je     0x523900  ; -> sub_523900
0x005238F4  6a00                  push   0
0x005238F6  56                    push   esi
0x005238F7  e8f456f4ff            call   0x468ff0  ; -> sub_468FF0
0x005238FC  84c0                  test   al, al
0x005238FE  7554                  jne    0x523954  ; -> sub_523954
0x00523900  8b4c242c              mov    ecx, dword ptr [esp + 0x2c]
0x00523904  85c9                  test   ecx, ecx
0x00523906  740c                  je     0x523914  ; -> sub_523914
0x00523908  6a00                  push   0
0x0052390A  56                    push   esi
0x0052390B  e8e056f4ff            call   0x468ff0  ; -> sub_468FF0
0x00523910  84c0                  test   al, al
0x00523912  7540                  jne    0x523954  ; -> sub_523954
0x00523914  8b4c2430              mov    ecx, dword ptr [esp + 0x30]
0x00523918  85c9                  test   ecx, ecx
0x0052391A  740c                  je     0x523928  ; -> sub_523928
0x0052391C  6a00                  push   0
0x0052391E  56                    push   esi
0x0052391F  e8cc56f4ff            call   0x468ff0  ; -> sub_468FF0
0x00523924  84c0                  test   al, al
0x00523926  752c                  jne    0x523954  ; -> sub_523954
0x00523928  8b442414              mov    eax, dword ptr [esp + 0x14]
0x0052392C  8b8fe8000000          mov    ecx, dword ptr [edi + 0xe8]
0x00523932  56                    push   esi
0x00523933  50                    push   eax
0x00523934  e847850000            call   0x52be80  ; -> sub_52BE80
0x00523939  85c0                  test   eax, eax
0x0052393B  7417                  je     0x523954  ; -> sub_523954
0x0052393D  8b10                  mov    edx, dword ptr [eax]
0x0052393F  8bc8                  mov    ecx, eax
0x00523941  8b4214                mov    eax, dword ptr [edx + 0x14]
0x00523944  ffd0                  call   eax
0x00523946  85c0                  test   eax, eax
0x00523948  740a                  je     0x523954  ; -> sub_523954
0x0052394A  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x0052394E  50                    push   eax
0x0052394F  e85c33f2ff            call   0x446cb0  ; -> sub_446CB0
0x00523954  83c301                add    ebx, 1
0x00523957  83fb05                cmp    ebx, 5
0x0052395A  0f8262ffffff          jb     0x5238c2  ; -> sub_5238C2
0x00523960  8b442434              mov    eax, dword ptr [esp + 0x34]
0x00523964  85c0                  test   eax, eax
0x00523966  7440                  je     0x5239a8  ; -> sub_5239A8
0x00523968  6a00                  push   0
0x0052396A  680433b000            push   0xb03304  ; -> sub_B03304
0x0052396F  684832b000            push   0xb03248  ; -> sub_B03248
0x00523974  6a00                  push   0
0x00523976  50                    push   eax
0x00523977  e86af94500            call   0x9832e6  ; -> sub_9832E6
0x0052397C  83c414                add    esp, 0x14
0x0052397F  85c0                  test   eax, eax
0x00523981  7425                  je     0x5239a8  ; -> sub_5239A8
0x00523983  8b10                  mov    edx, dword ptr [eax]
0x00523985  8bc8                  mov    ecx, eax
0x00523987  8b4214                mov    eax, dword ptr [edx + 0x14]
0x0052398A  ffd0                  call   eax
0x0052398C  85c0                  test   eax, eax
0x0052398E  7418                  je     0x5239a8  ; -> sub_5239A8
0x00523990  8b742410              mov    esi, dword ptr [esp + 0x10]
0x00523994  50                    push   eax
0x00523995  8bce                  mov    ecx, esi
0x00523997  e81433f2ff            call   0x446cb0  ; -> sub_446CB0
0x0052399C  5f                    pop    edi
0x0052399D  8bc6                  mov    eax, esi
0x0052399F  5e                    pop    esi

