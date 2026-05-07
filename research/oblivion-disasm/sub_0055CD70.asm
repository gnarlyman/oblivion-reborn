ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x0055CD70
; VA: 0x0055CD70  size: 0x600
; ============================================================
0x0055CD70  6aff                  push   -1
0x0055CD72  68e6ca9b00            push   0x9bcae6  ; -> sub_9BCAE6
0x0055CD77  64a100000000          mov    eax, dword ptr fs:[0]
0x0055CD7D  50                    push   eax
0x0055CD7E  51                    push   ecx
0x0055CD7F  53                    push   ebx
0x0055CD80  55                    push   ebp
0x0055CD81  56                    push   esi
0x0055CD82  57                    push   edi
0x0055CD83  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0055CD88  33c4                  xor    eax, esp
0x0055CD8A  50                    push   eax
0x0055CD8B  8d442418              lea    eax, [esp + 0x18]
0x0055CD8F  64a300000000          mov    dword ptr fs:[0], eax
0x0055CD95  8be9                  mov    ebp, ecx
0x0055CD97  896c2414              mov    dword ptr [esp + 0x14], ebp
0x0055CD9B  33db                  xor    ebx, ebx
0x0055CD9D  53                    push   ebx
0x0055CD9E  e8dde91a00            call   0x70b780  ; -> sub_70B780
0x0055CDA3  c745005c4fa600        mov    dword ptr [ebp], 0xa64f5c  ; -> sub_A64F5C
0x0055CDAA  895c2420              mov    dword ptr [esp + 0x20], ebx
0x0055CDAE  899ddc000000          mov    dword ptr [ebp + 0xdc], ebx
0x0055CDB4  d9053406a300          fld    dword ptr [0xa30634]
0x0055CDBA  d99d0c010000          fstp   dword ptr [ebp + 0x10c]
0x0055CDC0  889d05010000          mov    byte ptr [ebp + 0x105], bl
0x0055CDC6  889d04010000          mov    byte ptr [ebp + 0x104], bl
0x0055CDCC  c6850601000001        mov    byte ptr [ebp + 0x106], 1
0x0055CDD3  c6850701000001        mov    byte ptr [ebp + 0x107], 1
0x0055CDDA  889d08010000          mov    byte ptr [ebp + 0x108], bl
0x0055CDE0  889d10010000          mov    byte ptr [ebp + 0x110], bl
0x0055CDE6  889d11010000          mov    byte ptr [ebp + 0x111], bl
0x0055CDEC  8bb5dc000000          mov    esi, dword ptr [ebp + 0xdc]
0x0055CDF2  3bf3                  cmp    esi, ebx
0x0055CDF4  c644242001            mov    byte ptr [esp + 0x20], 1
0x0055CDF9  7422                  je     0x55ce1d  ; -> sub_55CE1D
0x0055CDFB  8d4604                lea    eax, [esi + 4]
0x0055CDFE  50                    push   eax
0x0055CDFF  ff157c80a200          call   dword ptr [0xa2807c]
0x0055CE05  85c0                  test   eax, eax
0x0055CE07  750e                  jne    0x55ce17  ; -> sub_55CE17
0x0055CE09  3bf3                  cmp    esi, ebx
0x0055CE0B  740a                  je     0x55ce17  ; -> sub_55CE17
0x0055CE0D  8b16                  mov    edx, dword ptr [esi]
0x0055CE0F  8b02                  mov    eax, dword ptr [edx]
0x0055CE11  6a01                  push   1
0x0055CE13  8bce                  mov    ecx, esi
0x0055CE15  ffd0                  call   eax
0x0055CE17  899ddc000000          mov    dword ptr [ebp + 0xdc], ebx
0x0055CE1D  8dbde0000000          lea    edi, [ebp + 0xe0]
0x0055CE23  b909000000            mov    ecx, 9
0x0055CE28  bec46db200            mov    esi, 0xb26dc4  ; -> sub_B26DC4
0x0055CE2D  f3a5                  rep movsd dword ptr es:[edi], dword ptr [esi]
0x0055CE2F  889d12010000          mov    byte ptr [ebp + 0x112], bl
0x0055CE35  899d14010000          mov    dword ptr [ebp + 0x114], ebx
0x0055CE3B  8bc5                  mov    eax, ebp
0x0055CE3D  8b4c2418              mov    ecx, dword ptr [esp + 0x18]
0x0055CE41  64890d00000000        mov    dword ptr fs:[0], ecx
0x0055CE48  59                    pop    ecx
0x0055CE49  5f                    pop    edi
0x0055CE4A  5e                    pop    esi
0x0055CE4B  5d                    pop    ebp
0x0055CE4C  5b                    pop    ebx
0x0055CE4D  83c410                add    esp, 0x10
0x0055CE50  c3                    ret    
0x0055CE51  cc                    int3   
0x0055CE52  cc                    int3   
0x0055CE53  cc                    int3   
0x0055CE54  cc                    int3   
0x0055CE55  cc                    int3   
0x0055CE56  cc                    int3   
0x0055CE57  cc                    int3   
0x0055CE58  cc                    int3   
0x0055CE59  cc                    int3   
0x0055CE5A  cc                    int3   
0x0055CE5B  cc                    int3   
0x0055CE5C  cc                    int3   
0x0055CE5D  cc                    int3   
0x0055CE5E  cc                    int3   
0x0055CE5F  cc                    int3   
0x0055CE60  b8b89db300            mov    eax, 0xb39db8  ; -> sub_B39DB8
0x0055CE65  c3                    ret    
0x0055CE66  cc                    int3   
0x0055CE67  cc                    int3   
0x0055CE68  cc                    int3   
0x0055CE69  cc                    int3   
0x0055CE6A  cc                    int3   
0x0055CE6B  cc                    int3   
0x0055CE6C  cc                    int3   
0x0055CE6D  cc                    int3   
0x0055CE6E  cc                    int3   
0x0055CE6F  cc                    int3   
0x0055CE70  8b442404              mov    eax, dword ptr [esp + 4]
0x0055CE74  56                    push   esi
0x0055CE75  57                    push   edi
0x0055CE76  8db1e0000000          lea    esi, [ecx + 0xe0]
0x0055CE7C  b909000000            mov    ecx, 9
0x0055CE81  8bf8                  mov    edi, eax
0x0055CE83  f3a5                  rep movsd dword ptr es:[edi], dword ptr [esi]
0x0055CE85  5f                    pop    edi
0x0055CE86  5e                    pop    esi
0x0055CE87  c20400                ret    4
0x0055CE8A  cc                    int3   
0x0055CE8B  cc                    int3   
0x0055CE8C  cc                    int3   
0x0055CE8D  cc                    int3   
0x0055CE8E  cc                    int3   
0x0055CE8F  cc                    int3   
0x0055CE90  8a8106010000          mov    al, byte ptr [ecx + 0x106]
0x0055CE96  c3                    ret    
0x0055CE97  cc                    int3   
0x0055CE98  cc                    int3   
0x0055CE99  cc                    int3   
0x0055CE9A  cc                    int3   
0x0055CE9B  cc                    int3   
0x0055CE9C  cc                    int3   
0x0055CE9D  cc                    int3   
0x0055CE9E  cc                    int3   
0x0055CE9F  cc                    int3   
0x0055CEA0  8a442404              mov    al, byte ptr [esp + 4]
0x0055CEA4  888106010000          mov    byte ptr [ecx + 0x106], al
0x0055CEAA  c20400                ret    4
0x0055CEAD  cc                    int3   
0x0055CEAE  cc                    int3   
0x0055CEAF  cc                    int3   
0x0055CEB0  8a8108010000          mov    al, byte ptr [ecx + 0x108]
0x0055CEB6  c3                    ret    
0x0055CEB7  cc                    int3   
0x0055CEB8  cc                    int3   
0x0055CEB9  cc                    int3   
0x0055CEBA  cc                    int3   
0x0055CEBB  cc                    int3   
0x0055CEBC  cc                    int3   
0x0055CEBD  cc                    int3   
0x0055CEBE  cc                    int3   
0x0055CEBF  cc                    int3   
0x0055CEC0  8a442404              mov    al, byte ptr [esp + 4]
0x0055CEC4  888108010000          mov    byte ptr [ecx + 0x108], al
0x0055CECA  c20400                ret    4
0x0055CECD  cc                    int3   
0x0055CECE  cc                    int3   
0x0055CECF  cc                    int3   
0x0055CED0  8a8105010000          mov    al, byte ptr [ecx + 0x105]
0x0055CED6  c3                    ret    
0x0055CED7  cc                    int3   
0x0055CED8  cc                    int3   
0x0055CED9  cc                    int3   
0x0055CEDA  cc                    int3   
0x0055CEDB  cc                    int3   
0x0055CEDC  cc                    int3   
0x0055CEDD  cc                    int3   
0x0055CEDE  cc                    int3   
0x0055CEDF  cc                    int3   
0x0055CEE0  8a442404              mov    al, byte ptr [esp + 4]
0x0055CEE4  888105010000          mov    byte ptr [ecx + 0x105], al
0x0055CEEA  c20400                ret    4
0x0055CEED  cc                    int3   
0x0055CEEE  cc                    int3   
0x0055CEEF  cc                    int3   
0x0055CEF0  8b81dc000000          mov    eax, dword ptr [ecx + 0xdc]
0x0055CEF6  c3                    ret    
0x0055CEF7  cc                    int3   
0x0055CEF8  cc                    int3   
0x0055CEF9  cc                    int3   
0x0055CEFA  cc                    int3   
0x0055CEFB  cc                    int3   
0x0055CEFC  cc                    int3   
0x0055CEFD  cc                    int3   
0x0055CEFE  cc                    int3   
0x0055CEFF  cc                    int3   
0x0055CF00  53                    push   ebx
0x0055CF01  56                    push   esi
0x0055CF02  8bd9                  mov    ebx, ecx
0x0055CF04  8bb3dc000000          mov    esi, dword ptr [ebx + 0xdc]
0x0055CF0A  57                    push   edi
0x0055CF0B  8b7c2410              mov    edi, dword ptr [esp + 0x10]
0x0055CF0F  3bf7                  cmp    esi, edi
0x0055CF11  7434                  je     0x55cf47  ; -> sub_55CF47
0x0055CF13  85f6                  test   esi, esi
0x0055CF15  741c                  je     0x55cf33  ; -> sub_55CF33
0x0055CF17  8d4604                lea    eax, [esi + 4]
0x0055CF1A  50                    push   eax
0x0055CF1B  ff157c80a200          call   dword ptr [0xa2807c]
0x0055CF21  85c0                  test   eax, eax
0x0055CF23  750e                  jne    0x55cf33  ; -> sub_55CF33
0x0055CF25  85f6                  test   esi, esi
0x0055CF27  740a                  je     0x55cf33  ; -> sub_55CF33
0x0055CF29  8b16                  mov    edx, dword ptr [esi]
0x0055CF2B  8b02                  mov    eax, dword ptr [edx]
0x0055CF2D  6a01                  push   1
0x0055CF2F  8bce                  mov    ecx, esi
0x0055CF31  ffd0                  call   eax
0x0055CF33  85ff                  test   edi, edi
0x0055CF35  89bbdc000000          mov    dword ptr [ebx + 0xdc], edi
0x0055CF3B  740a                  je     0x55cf47  ; -> sub_55CF47
0x0055CF3D  83c704                add    edi, 4
0x0055CF40  57                    push   edi
0x0055CF41  ff157880a200          call   dword ptr [0xa28078]
0x0055CF47  5f                    pop    edi
0x0055CF48  5e                    pop    esi
0x0055CF49  5b                    pop    ebx
0x0055CF4A  c20400                ret    4
0x0055CF4D  cc                    int3   
0x0055CF4E  cc                    int3   
0x0055CF4F  cc                    int3   
0x0055CF50  6aff                  push   -1
0x0055CF52  6818cb9b00            push   0x9bcb18  ; -> sub_9BCB18
0x0055CF57  64a100000000          mov    eax, dword ptr fs:[0]
0x0055CF5D  50                    push   eax
0x0055CF5E  51                    push   ecx
0x0055CF5F  56                    push   esi
0x0055CF60  57                    push   edi
0x0055CF61  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0055CF66  33c4                  xor    eax, esp
0x0055CF68  50                    push   eax
0x0055CF69  8d442410              lea    eax, [esp + 0x10]
0x0055CF6D  64a300000000          mov    dword ptr fs:[0], eax
0x0055CF73  8bf1                  mov    esi, ecx
0x0055CF75  8974240c              mov    dword ptr [esp + 0xc], esi
0x0055CF79  c7065c4fa600          mov    dword ptr [esi], 0xa64f5c  ; -> sub_A64F5C
0x0055CF7F  c7861401000000000000  mov    dword ptr [esi + 0x114], 0
0x0055CF89  8bbedc000000          mov    edi, dword ptr [esi + 0xdc]
0x0055CF8F  85ff                  test   edi, edi
0x0055CF91  c744241800000000      mov    dword ptr [esp + 0x18], 0
0x0055CF99  741c                  je     0x55cfb7  ; -> sub_55CFB7
0x0055CF9B  8d4704                lea    eax, [edi + 4]
0x0055CF9E  50                    push   eax
0x0055CF9F  ff157c80a200          call   dword ptr [0xa2807c]
0x0055CFA5  85c0                  test   eax, eax
0x0055CFA7  750e                  jne    0x55cfb7  ; -> sub_55CFB7
0x0055CFA9  85ff                  test   edi, edi
0x0055CFAB  740a                  je     0x55cfb7  ; -> sub_55CFB7
0x0055CFAD  8b17                  mov    edx, dword ptr [edi]
0x0055CFAF  8b02                  mov    eax, dword ptr [edx]
0x0055CFB1  6a01                  push   1
0x0055CFB3  8bcf                  mov    ecx, edi
0x0055CFB5  ffd0                  call   eax
0x0055CFB7  8bce                  mov    ecx, esi
0x0055CFB9  c7442418ffffffff      mov    dword ptr [esp + 0x18], 0xffffffff
0x0055CFC1  e84ae81a00            call   0x70b810  ; -> sub_70B810
0x0055CFC6  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x0055CFCA  64890d00000000        mov    dword ptr fs:[0], ecx
0x0055CFD1  59                    pop    ecx
0x0055CFD2  5f                    pop    edi
0x0055CFD3  5e                    pop    esi
0x0055CFD4  83c410                add    esp, 0x10
0x0055CFD7  c3                    ret    
0x0055CFD8  cc                    int3   
0x0055CFD9  cc                    int3   
0x0055CFDA  cc                    int3   
0x0055CFDB  cc                    int3   
0x0055CFDC  cc                    int3   
0x0055CFDD  cc                    int3   
0x0055CFDE  cc                    int3   
0x0055CFDF  cc                    int3   
0x0055CFE0  53                    push   ebx
0x0055CFE1  55                    push   ebp
0x0055CFE2  8b6c240c              mov    ebp, dword ptr [esp + 0xc]
0x0055CFE6  85ed                  test   ebp, ebp
0x0055CFE8  8bd9                  mov    ebx, ecx
0x0055CFEA  0f848e000000          je     0x55d07e  ; -> sub_55D07E
0x0055CFF0  8b442410              mov    eax, dword ptr [esp + 0x10]
0x0055CFF4  56                    push   esi
0x0055CFF5  57                    push   edi
0x0055CFF6  50                    push   eax
0x0055CFF7  55                    push   ebp
0x0055CFF8  e863dc1a00            call   0x70ac60  ; -> sub_70AC60
0x0055CFFD  8d8bdc000000          lea    ecx, [ebx + 0xdc]
0x0055D003  51                    push   ecx
0x0055D004  8d8ddc000000          lea    ecx, [ebp + 0xdc]
0x0055D00A  e891120000            call   0x55e2a0  ; -> sub_55E2A0
0x0055D00F  8db3e0000000          lea    esi, [ebx + 0xe0]
0x0055D015  8dbde0000000          lea    edi, [ebp + 0xe0]
0x0055D01B  b909000000            mov    ecx, 9
0x0055D020  f3a5                  rep movsd dword ptr es:[edi], dword ptr [esi]
0x0055D022  0fb69304010000        movzx  edx, byte ptr [ebx + 0x104]
0x0055D029  889504010000          mov    byte ptr [ebp + 0x104], dl
0x0055D02F  0fb68305010000        movzx  eax, byte ptr [ebx + 0x105]
0x0055D036  888505010000          mov    byte ptr [ebp + 0x105], al
0x0055D03C  0fb68b06010000        movzx  ecx, byte ptr [ebx + 0x106]
0x0055D043  888d06010000          mov    byte ptr [ebp + 0x106], cl
0x0055D049  0fb69307010000        movzx  edx, byte ptr [ebx + 0x107]
0x0055D050  889507010000          mov    byte ptr [ebp + 0x107], dl
0x0055D056  5f                    pop    edi
0x0055D057  d9830c010000          fld    dword ptr [ebx + 0x10c]
0x0055D05D  5e                    pop    esi
0x0055D05E  d99d0c010000          fstp   dword ptr [ebp + 0x10c]
0x0055D064  0fb68310010000        movzx  eax, byte ptr [ebx + 0x110]
0x0055D06B  888510010000          mov    byte ptr [ebp + 0x110], al
0x0055D071  0fb68b11010000        movzx  ecx, byte ptr [ebx + 0x111]
0x0055D078  888d11010000          mov    byte ptr [ebp + 0x111], cl
0x0055D07E  5d                    pop    ebp
0x0055D07F  5b                    pop    ebx
0x0055D080  c20800                ret    8
0x0055D083  cc                    int3   
0x0055D084  cc                    int3   
0x0055D085  cc                    int3   
0x0055D086  cc                    int3   
0x0055D087  cc                    int3   
0x0055D088  cc                    int3   
0x0055D089  cc                    int3   
0x0055D08A  cc                    int3   
0x0055D08B  cc                    int3   
0x0055D08C  cc                    int3   
0x0055D08D  cc                    int3   
0x0055D08E  cc                    int3   
0x0055D08F  cc                    int3   
0x0055D090  83ec0c                sub    esp, 0xc
0x0055D093  837c241000            cmp    dword ptr [esp + 0x10], 0
0x0055D098  57                    push   edi
0x0055D099  8bf9                  mov    edi, ecx
0x0055D09B  897c2404              mov    dword ptr [esp + 4], edi
0x0055D09F  0f84d7000000          je     0x55d17c  ; -> sub_55D17C
0x0055D0A5  0fb787b6000000        movzx  eax, word ptr [edi + 0xb6]
0x0055D0AC  56                    push   esi
0x0055D0AD  33f6                  xor    esi, esi
0x0055D0AF  85c0                  test   eax, eax
0x0055D0B1  89442410              mov    dword ptr [esp + 0x10], eax
0x0055D0B5  8974240c              mov    dword ptr [esp + 0xc], esi
0x0055D0B9  0f86bc000000          jbe    0x55d17b  ; -> sub_55D17B
0x0055D0BF  53                    push   ebx
0x0055D0C0  55                    push   ebp
0x0055D0C1  0fb787b6000000        movzx  eax, word ptr [edi + 0xb6]
0x0055D0C8  3bc6                  cmp    eax, esi
0x0055D0CA  0f8698000000          jbe    0x55d168  ; -> sub_55D168
0x0055D0D0  8b8fb0000000          mov    ecx, dword ptr [edi + 0xb0]
0x0055D0D6  8b0cb1                mov    ecx, dword ptr [ecx + esi*4]
0x0055D0D9  85c9                  test   ecx, ecx
0x0055D0DB  0f8487000000          je     0x55d168  ; -> sub_55D168
0x0055D0E1  8b11                  mov    edx, dword ptr [ecx]
0x0055D0E3  8b4210                mov    eax, dword ptr [edx + 0x10]
0x0055D0E6  ffd0                  call   eax
0x0055D0E8  85c0                  test   eax, eax
0x0055D0EA  0f8478000000          je     0x55d168  ; -> sub_55D168
0x0055D0F0  8ba8b8000000          mov    ebp, dword ptr [eax + 0xb8]
0x0055D0F6  85ed                  test   ebp, ebp
0x0055D0F8  746e                  je     0x55d168  ; -> sub_55D168
0x0055D0FA  8b4508                mov    eax, dword ptr [ebp + 8]
0x0055D0FD  85c0                  test   eax, eax
0x0055D0FF  7467                  je     0x55d168  ; -> sub_55D168
0x0055D101  8b7d14                mov    edi, dword ptr [ebp + 0x14]
0x0055D104  85ff                  test   edi, edi
0x0055D106  8b5840                mov    ebx, dword ptr [eax + 0x40]
0x0055D109  7459                  je     0x55d164  ; -> sub_55D164
0x0055D10B  85db                  test   ebx, ebx
0x0055D10D  7455                  je     0x55d164  ; -> sub_55D164
0x0055D10F  33f6                  xor    esi, esi
0x0055D111  85db                  test   ebx, ebx
0x0055D113  7640                  jbe    0x55d155  ; -> sub_55D155
0x0055D115  8b0cb7                mov    ecx, dword ptr [edi + esi*4]
0x0055D118  8b4108                mov    eax, dword ptr [ecx + 8]
0x0055D11B  8b4c2420              mov    ecx, dword ptr [esp + 0x20]
0x0055D11F  8b11                  mov    edx, dword ptr [ecx]
0x0055D121  50                    push   eax
0x0055D122  8b4258                mov    eax, dword ptr [edx + 0x58]
0x0055D125  ffd0                  call   eax
0x0055D127  85c0                  test   eax, eax
0x0055D129  7408                  je     0x55d133  ; -> sub_55D133
0x0055D12B  8b4d14                mov    ecx, dword ptr [ebp + 0x14]
0x0055D12E  8904b1                mov    dword ptr [ecx + esi*4], eax
0x0055D131  eb1b                  jmp    0x55d14e  ; -> sub_55D14E
0x0055D133  807c242400            cmp    byte ptr [esp + 0x24], 0
0x0055D138  7414                  je     0x55d14e  ; -> sub_55D14E
0x0055D13A  8b14b7                mov    edx, dword ptr [edi + esi*4]
0x0055D13D  8b4208                mov    eax, dword ptr [edx + 8]
0x0055D140  50                    push   eax
0x0055D141  682450a600            push   0xa65024  ; -> sub_A65024
0x0055D146  e815a9f4ff            call   0x4a7a60  ; -> sub_4A7A60
0x0055D14B  83c408                add    esp, 8
0x0055D14E  83c601                add    esi, 1
0x0055D151  3bf3                  cmp    esi, ebx
0x0055D153  72c0                  jb     0x55d115  ; -> sub_55D115
0x0055D155  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x0055D159  8b742414              mov    esi, dword ptr [esp + 0x14]
0x0055D15D  894d10                mov    dword ptr [ebp + 0x10], ecx
0x0055D160  8bf9                  mov    edi, ecx
0x0055D162  eb04                  jmp    0x55d168  ; -> sub_55D168
0x0055D164  8b7c2410              mov    edi, dword ptr [esp + 0x10]
0x0055D168  83c601                add    esi, 1
0x0055D16B  3b742418              cmp    esi, dword ptr [esp + 0x18]
0x0055D16F  89742414              mov    dword ptr [esp + 0x14], esi
0x0055D173  0f8248ffffff          jb     0x55d0c1  ; -> sub_55D0C1
0x0055D179  5d                    pop    ebp
0x0055D17A  5b                    pop    ebx
0x0055D17B  5e                    pop    esi
0x0055D17C  5f                    pop    edi
0x0055D17D  83c40c                add    esp, 0xc
0x0055D180  c20800                ret    8
0x0055D183  cc                    int3   
0x0055D184  cc                    int3   
0x0055D185  cc                    int3   
0x0055D186  cc                    int3   
0x0055D187  cc                    int3   
0x0055D188  cc                    int3   
0x0055D189  cc                    int3   
0x0055D18A  cc                    int3   
0x0055D18B  cc                    int3   
0x0055D18C  cc                    int3   
0x0055D18D  cc                    int3   
0x0055D18E  cc                    int3   
0x0055D18F  cc                    int3   
0x0055D190  56                    push   esi
0x0055D191  8bf1                  mov    esi, ecx
0x0055D193  e8b8fdffff            call   0x55cf50  ; -> sub_55CF50
0x0055D198  f644240801            test   byte ptr [esp + 8], 1
0x0055D19D  7409                  je     0x55d1a8  ; -> sub_55D1A8
0x0055D19F  56                    push   esi
0x0055D1A0  e87b4deaff            call   0x401f20  ; -> sub_401F20
0x0055D1A5  83c404                add    esp, 4
0x0055D1A8  8bc6                  mov    eax, esi
0x0055D1AA  5e                    pop    esi
0x0055D1AB  c20400                ret    4
0x0055D1AE  cc                    int3   
0x0055D1AF  cc                    int3   
0x0055D1B0  83ec4c                sub    esp, 0x4c
0x0055D1B3  53                    push   ebx
0x0055D1B4  55                    push   ebp
0x0055D1B5  56                    push   esi
0x0055D1B6  8bf1                  mov    esi, ecx
0x0055D1B8  0fb79eb6000000        movzx  ebx, word ptr [esi + 0xb6]
0x0055D1BF  33ed                  xor    ebp, ebp
0x0055D1C1  85db                  test   ebx, ebx
0x0055D1C3  c744243c00000000      mov    dword ptr [esp + 0x3c], 0
0x0055D1CB  c744244000000000      mov    dword ptr [esp + 0x40], 0
0x0055D1D3  c644244400            mov    byte ptr [esp + 0x44], 0
0x0055D1D8  895c241c              mov    dword ptr [esp + 0x1c], ebx
0x0055D1DC  0f86cc020000          jbe    0x55d4ae  ; -> sub_55D4AE
0x0055D1E2  0fb786b6000000        movzx  eax, word ptr [esi + 0xb6]
0x0055D1E9  3bc5                  cmp    eax, ebp
0x0055D1EB  c644245400            mov    byte ptr [esp + 0x54], 0
0x0055D1F0  0f86ad020000          jbe    0x55d4a3  ; -> sub_55D4A3
0x0055D1F6  8b8eb0000000          mov    ecx, dword ptr [esi + 0xb0]
0x0055D1FC  8b0ca9                mov    ecx, dword ptr [ecx + ebp*4]
0x0055D1FF  85c9                  test   ecx, ecx
0x0055D201  0f849c020000          je     0x55d4a3  ; -> sub_55D4A3
0x0055D207  8b11                  mov    edx, dword ptr [ecx]
0x0055D209  8b4210                mov    eax, dword ptr [edx + 0x10]
0x0055D20C  ffd0                  call   eax
0x0055D20E  85c0                  test   eax, eax
0x0055D210  89442438              mov    dword ptr [esp + 0x38], eax
0x0055D214  0f8489020000          je     0x55d4a3  ; -> sub_55D4A3
0x0055D21A  83b8b400000000        cmp    dword ptr [eax + 0xb4], 0
0x0055D221  0f847c020000          je     0x55d4a3  ; -> sub_55D4A3
0x0055D227  50                    push   eax
0x0055D228  e8d335ffff            call   0x550800  ; -> sub_550800
0x0055D22D  83c404                add    esp, 4
0x0055D230  85c0                  test   eax, eax
0x0055D232  89442448              mov    dword ptr [esp + 0x48], eax
0x0055D236  0f8467020000          je     0x55d4a3  ; -> sub_55D4A3
0x0055D23C  8b4c2438              mov    ecx, dword ptr [esp + 0x38]
0x0055D240  51                    push   ecx
0x0055D241  e85a36ffff            call   0x5508a0  ; -> sub_5508A0
0x0055D246  83c404                add    esp, 4
0x0055D249  85c0                  test   eax, eax
0x0055D24B  8944244c              mov    dword ptr [esp + 0x4c], eax
0x0055D24F  0f844e020000          je     0x55d4a3  ; -> sub_55D4A3
0x0055D255  8b542438              mov    edx, dword ptr [esp + 0x38]
0x0055D259  8b8ab4000000          mov    ecx, dword ptr [edx + 0xb4]
0x0055D25F  6a01                  push   1
0x0055D261  e84ab81c00            call   0x728ab0  ; -> sub_728AB0
0x0055D266  84c0                  test   al, al
0x0055D268  0f8435020000          je     0x55d4a3  ; -> sub_55D4A3
0x0055D26E  8b4c2438              mov    ecx, dword ptr [esp + 0x38]
0x0055D272  8b89b4000000          mov    ecx, dword ptr [ecx + 0xb4]
0x0055D278  8d44243c              lea    eax, [esp + 0x3c]
0x0055D27C  50                    push   eax
0x0055D27D  e8deb81c00            call   0x728b60  ; -> sub_728B60
0x0055D282  807c245c00            cmp    byte ptr [esp + 0x5c], 0
0x0055D287  8b442438              mov    eax, dword ptr [esp + 0x38]
0x0055D28B  8b90b4000000          mov    edx, dword ptr [eax + 0xb4]
0x0055D291  0fb74a08              movzx  ecx, word ptr [edx + 8]
0x0055D295  894c2450              mov    dword ptr [esp + 0x50], ecx
0x0055D299  7509                  jne    0x55d2a4  ; -> sub_55D2A4
0x0055D29B  80be0401000000        cmp    byte ptr [esi + 0x104], 0
0x0055D2A2  741a                  je     0x55d2be  ; -> sub_55D2BE
0x0055D2A4  8d54243c              lea    edx, [esp + 0x3c]
0x0055D2A8  52                    push   edx
0x0055D2A9  50                    push   eax
0x0055D2AA  e84136ffff            call   0x5508f0  ; -> sub_5508F0
0x0055D2AF  83c408                add    esp, 8
0x0055D2B2  c644245401            mov    byte ptr [esp + 0x54], 1
0x0055D2B7  c6860401000000        mov    byte ptr [esi + 0x104], 0
0x0055D2BE  c644240f00            mov    byte ptr [esp + 0xf], 0
0x0055D2C3  32db                  xor    bl, bl
0x0055D2C5  e826f9ffff            call   0x55cbf0  ; -> sub_55CBF0
0x0055D2CA  8b08                  mov    ecx, dword ptr [eax]
0x0055D2CC  8b5004                mov    edx, dword ptr [eax + 4]
0x0055D2CF  8b4008                mov    eax, dword ptr [eax + 8]
0x0055D2D2  894c2420              mov    dword ptr [esp + 0x20], ecx
0x0055D2D6  d9442420              fld    dword ptr [esp + 0x20]
0x0055D2DA  d8a688000000          fsub   dword ptr [esi + 0x88]
0x0055D2E0  89542424              mov    dword ptr [esp + 0x24], edx
0x0055D2E4  89442428              mov    dword ptr [esp + 0x28], eax
0x0055D2E8  8d4c242c              lea    ecx, [esp + 0x2c]
0x0055D2EC  d95c242c              fstp   dword ptr [esp + 0x2c]
0x0055D2F0  d9442424              fld    dword ptr [esp + 0x24]
0x0055D2F4  d8a68c000000          fsub   dword ptr [esi + 0x8c]
0x0055D2FA  d95c2430              fstp   dword ptr [esp + 0x30]
0x0055D2FE  d9442428              fld    dword ptr [esp + 0x28]
0x0055D302  d8a690000000          fsub   dword ptr [esi + 0x90]
0x0055D308  d95c2434              fstp   dword ptr [esp + 0x34]
0x0055D30C  e87f79eaff            call   0x404c90  ; -> sub_404C90
0x0055D311  381db833b300          cmp    byte ptr [0xb333b8], bl
0x0055D317  d95c2418              fstp   dword ptr [esp + 0x18]
0x0055D31B  d905cc20b100          fld    dword ptr [0xb120cc]
0x0055D321  d95c2414              fstp   dword ptr [esp + 0x14]
0x0055D325  d905d420b100          fld    dword ptr [0xb120d4]
0x0055D32B  d95c2410              fstp   dword ptr [esp + 0x10]
0x0055D32F  741a                  je     0x55d34b  ; -> sub_55D34B
0x0055D331  d9442414              fld    dword ptr [esp + 0x14]
0x0055D335  dd0570c7a300          fld    qword ptr [0xa3c770]
0x0055D33B  dcc9                  fmul   st(1), st(0)
0x0055D33D  d9c9                  fxch   st(1)
0x0055D33F  d95c2414              fstp   dword ptr [esp + 0x14]
0x0055D343  d84c2410              fmul   dword ptr [esp + 0x10]
0x0055D347  d95c2410              fstp   dword ptr [esp + 0x10]
0x0055D34B  d9442418              fld    dword ptr [esp + 0x18]
0x0055D34F  c644240e00            mov    byte ptr [esp + 0xe], 0
0x0055D354  d9442410              fld    dword ptr [esp + 0x10]
0x0055D358  dc05e8f3a300          fadd   qword ptr [0xa3f3e8]
0x0055D35E  ded9                  fcompp 
0x0055D360  dfe0                  fnstsw ax
0x0055D362  f6c401                test   ah, 1
0x0055D365  7412                  je     0x55d379  ; -> sub_55D379
0x0055D367  80be1201000000        cmp    byte ptr [esi + 0x112], 0
0x0055D36E  7509                  jne    0x55d379  ; -> sub_55D379

