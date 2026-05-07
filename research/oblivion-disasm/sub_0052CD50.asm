ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x0052CD50
; VA: 0x0052CD50  size: 0x400
; ============================================================
0x0052CD50  6aff                  push   -1
0x0052CD52  68086b9d00            push   0x9d6b08  ; -> sub_9D6B08
0x0052CD57  64a100000000          mov    eax, dword ptr fs:[0]
0x0052CD5D  50                    push   eax
0x0052CD5E  83ec0c                sub    esp, 0xc
0x0052CD61  53                    push   ebx
0x0052CD62  55                    push   ebp
0x0052CD63  56                    push   esi
0x0052CD64  57                    push   edi
0x0052CD65  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0052CD6A  33c4                  xor    eax, esp
0x0052CD6C  50                    push   eax
0x0052CD6D  8d442420              lea    eax, [esp + 0x20]
0x0052CD71  64a300000000          mov    dword ptr fs:[0], eax
0x0052CD77  8bf9                  mov    edi, ecx
0x0052CD79  897c2418              mov    dword ptr [esp + 0x18], edi
0x0052CD7D  8b742430              mov    esi, dword ptr [esp + 0x30]
0x0052CD81  85f6                  test   esi, esi
0x0052CD83  7452                  je     0x52cdd7  ; -> sub_52CDD7
0x0052CD85  8b6c2434              mov    ebp, dword ptr [esp + 0x34]
0x0052CD89  55                    push   ebp
0x0052CD8A  8bce                  mov    ecx, esi
0x0052CD8C  e82f54ffff            call   0x5221c0  ; -> sub_5221C0
0x0052CD91  8b86c8010000          mov    eax, dword ptr [esi + 0x1c8]
0x0052CD97  894560                mov    dword ptr [ebp + 0x60], eax
0x0052CD9A  d986cc010000          fld    dword ptr [esi + 0x1cc]
0x0052CDA0  d95c2414              fstp   dword ptr [esp + 0x14]
0x0052CDA4  8bce                  mov    ecx, esi
0x0052CDA6  d9442414              fld    dword ptr [esp + 0x14]
0x0052CDAA  d95d68                fstp   dword ptr [ebp + 0x68]
0x0052CDAD  8b86e8010000          mov    eax, dword ptr [esi + 0x1e8]
0x0052CDB3  894564                mov    dword ptr [ebp + 0x64], eax
0x0052CDB6  8b86d0010000          mov    eax, dword ptr [esi + 0x1d0]
0x0052CDBC  89456c                mov    dword ptr [ebp + 0x6c], eax
0x0052CDBF  e85ccffeff            call   0x519d20  ; -> sub_519D20
0x0052CDC4  894570                mov    dword ptr [ebp + 0x70], eax
0x0052CDC7  c744241400000000      mov    dword ptr [esp + 0x14], 0
0x0052CDCF  8d9d84000000          lea    ebx, [ebp + 0x84]
0x0052CDD5  eb41                  jmp    0x52ce18  ; -> sub_52CE18
0x0052CDD7  8d879c020000          lea    eax, [edi + 0x29c]
0x0052CDDD  85c0                  test   eax, eax
0x0052CDDF  7505                  jne    0x52cde6  ; -> sub_52CDE6
0x0052CDE1  e8ea6a0200            call   0x5538d0  ; -> sub_5538D0
0x0052CDE6  8b4c2434              mov    ecx, dword ptr [esp + 0x34]
0x0052CDEA  51                    push   ecx
0x0052CDEB  50                    push   eax
0x0052CDEC  e8ff5a0200            call   0x5528f0  ; -> sub_5528F0
0x0052CDF1  8b6c243c              mov    ebp, dword ptr [esp + 0x3c]
0x0052CDF5  83c408                add    esp, 8
0x0052CDF8  c744241400000000      mov    dword ptr [esp + 0x14], 0
0x0052CE00  8d9d84000000          lea    ebx, [ebp + 0x84]
0x0052CE06  eb10                  jmp    0x52ce18  ; -> sub_52CE18
0x0052CE08  eb06                  jmp    0x52ce10  ; -> sub_52CE10
0x0052CE0A  8d9b00000000          lea    ebx, [ebx]
0x0052CE10  8b6c2434              mov    ebp, dword ptr [esp + 0x34]
0x0052CE14  8b7c2418              mov    edi, dword ptr [esp + 0x18]
0x0052CE18  8b542414              mov    edx, dword ptr [esp + 0x14]
0x0052CE1C  52                    push   edx
0x0052CE1D  8bcf                  mov    ecx, edi
0x0052CE1F  e82ceeffff            call   0x52bc50  ; -> sub_52BC50
0x0052CE24  0fb7757e              movzx  esi, word ptr [ebp + 0x7e]
0x0052CE28  83c574                add    ebp, 0x74
0x0052CE2B  8bf8                  mov    edi, eax
0x0052CE2D  0fb74508              movzx  eax, word ptr [ebp + 8]
0x0052CE31  3bf0                  cmp    esi, eax
0x0052CE33  720e                  jb     0x52ce43  ; -> sub_52CE43
0x0052CE35  0fb74d0e              movzx  ecx, word ptr [ebp + 0xe]
0x0052CE39  03ce                  add    ecx, esi
0x0052CE3B  51                    push   ecx
0x0052CE3C  8bcd                  mov    ecx, ebp
0x0052CE3E  e8cd7bfbff            call   0x4e4a10  ; -> sub_4E4A10
0x0052CE43  0fb7550a              movzx  edx, word ptr [ebp + 0xa]
0x0052CE47  3bf2                  cmp    esi, edx
0x0052CE49  7212                  jb     0x52ce5d  ; -> sub_52CE5D
0x0052CE4B  85ff                  test   edi, edi
0x0052CE4D  8d4601                lea    eax, [esi + 1]
0x0052CE50  6689450a              mov    word ptr [ebp + 0xa], ax
0x0052CE54  742a                  je     0x52ce80  ; -> sub_52CE80
0x0052CE56  6683450c01            add    word ptr [ebp + 0xc], 1
0x0052CE5B  eb23                  jmp    0x52ce80  ; -> sub_52CE80
0x0052CE5D  85ff                  test   edi, edi
0x0052CE5F  7410                  je     0x52ce71  ; -> sub_52CE71
0x0052CE61  8b4d04                mov    ecx, dword ptr [ebp + 4]
0x0052CE64  833cb100              cmp    dword ptr [ecx + esi*4], 0
0x0052CE68  7516                  jne    0x52ce80  ; -> sub_52CE80
0x0052CE6A  6683450c01            add    word ptr [ebp + 0xc], 1
0x0052CE6F  eb0f                  jmp    0x52ce80  ; -> sub_52CE80
0x0052CE71  8b5504                mov    edx, dword ptr [ebp + 4]
0x0052CE74  833cb200              cmp    dword ptr [edx + esi*4], 0
0x0052CE78  7406                  je     0x52ce80  ; -> sub_52CE80
0x0052CE7A  6681450cffff          add    word ptr [ebp + 0xc], 0xffff
0x0052CE80  8b4504                mov    eax, dword ptr [ebp + 4]
0x0052CE83  8b6c2414              mov    ebp, dword ptr [esp + 0x14]
0x0052CE87  8b4c2418              mov    ecx, dword ptr [esp + 0x18]
0x0052CE8B  55                    push   ebp
0x0052CE8C  893cb0                mov    dword ptr [eax + esi*4], edi
0x0052CE8F  e86ceeffff            call   0x52bd00  ; -> sub_52BD00
0x0052CE94  0fb7730a              movzx  esi, word ptr [ebx + 0xa]
0x0052CE98  0fb74b08              movzx  ecx, word ptr [ebx + 8]
0x0052CE9C  3bf1                  cmp    esi, ecx
0x0052CE9E  8bf8                  mov    edi, eax
0x0052CEA0  720e                  jb     0x52ceb0  ; -> sub_52CEB0
0x0052CEA2  0fb7530e              movzx  edx, word ptr [ebx + 0xe]
0x0052CEA6  03d6                  add    edx, esi
0x0052CEA8  52                    push   edx
0x0052CEA9  8bcb                  mov    ecx, ebx
0x0052CEAB  e8607bfbff            call   0x4e4a10  ; -> sub_4E4A10
0x0052CEB0  0fb7430a              movzx  eax, word ptr [ebx + 0xa]
0x0052CEB4  3bf0                  cmp    esi, eax
0x0052CEB6  7212                  jb     0x52ceca  ; -> sub_52CECA
0x0052CEB8  85ff                  test   edi, edi
0x0052CEBA  8d4e01                lea    ecx, [esi + 1]
0x0052CEBD  66894b0a              mov    word ptr [ebx + 0xa], cx
0x0052CEC1  742a                  je     0x52ceed  ; -> sub_52CEED
0x0052CEC3  6683430c01            add    word ptr [ebx + 0xc], 1
0x0052CEC8  eb23                  jmp    0x52ceed  ; -> sub_52CEED
0x0052CECA  85ff                  test   edi, edi
0x0052CECC  7410                  je     0x52cede  ; -> sub_52CEDE
0x0052CECE  8b5304                mov    edx, dword ptr [ebx + 4]
0x0052CED1  833cb200              cmp    dword ptr [edx + esi*4], 0
0x0052CED5  7516                  jne    0x52ceed  ; -> sub_52CEED
0x0052CED7  6683430c01            add    word ptr [ebx + 0xc], 1
0x0052CEDC  eb0f                  jmp    0x52ceed  ; -> sub_52CEED
0x0052CEDE  8b4304                mov    eax, dword ptr [ebx + 4]
0x0052CEE1  833cb000              cmp    dword ptr [eax + esi*4], 0
0x0052CEE5  7406                  je     0x52ceed  ; -> sub_52CEED
0x0052CEE7  6681430cffff          add    word ptr [ebx + 0xc], 0xffff
0x0052CEED  8b4b04                mov    ecx, dword ptr [ebx + 4]
0x0052CEF0  893cb1                mov    dword ptr [ecx + esi*4], edi
0x0052CEF3  8b7c2434              mov    edi, dword ptr [esp + 0x34]
0x0052CEF7  0fb7b79e000000        movzx  esi, word ptr [edi + 0x9e]
0x0052CEFE  0fb7979c000000        movzx  edx, word ptr [edi + 0x9c]
0x0052CF05  8b2cada80cb100        mov    ebp, dword ptr [ebp*4 + 0xb10ca8]
0x0052CF0C  81c794000000          add    edi, 0x94
0x0052CF12  3bf2                  cmp    esi, edx
0x0052CF14  720e                  jb     0x52cf24  ; -> sub_52CF24
0x0052CF16  0fb7470e              movzx  eax, word ptr [edi + 0xe]
0x0052CF1A  03c6                  add    eax, esi
0x0052CF1C  50                    push   eax
0x0052CF1D  8bcf                  mov    ecx, edi
0x0052CF1F  e8ec7afbff            call   0x4e4a10  ; -> sub_4E4A10
0x0052CF24  0fb74f0a              movzx  ecx, word ptr [edi + 0xa]
0x0052CF28  3bf1                  cmp    esi, ecx
0x0052CF2A  7212                  jb     0x52cf3e  ; -> sub_52CF3E
0x0052CF2C  85ed                  test   ebp, ebp
0x0052CF2E  8d5601                lea    edx, [esi + 1]
0x0052CF31  6689570a              mov    word ptr [edi + 0xa], dx
0x0052CF35  742a                  je     0x52cf61  ; -> sub_52CF61
0x0052CF37  6683470c01            add    word ptr [edi + 0xc], 1
0x0052CF3C  eb23                  jmp    0x52cf61  ; -> sub_52CF61
0x0052CF3E  85ed                  test   ebp, ebp
0x0052CF40  7410                  je     0x52cf52  ; -> sub_52CF52
0x0052CF42  8b4704                mov    eax, dword ptr [edi + 4]
0x0052CF45  833cb000              cmp    dword ptr [eax + esi*4], 0
0x0052CF49  7516                  jne    0x52cf61  ; -> sub_52CF61
0x0052CF4B  6683470c01            add    word ptr [edi + 0xc], 1
0x0052CF50  eb0f                  jmp    0x52cf61  ; -> sub_52CF61
0x0052CF52  8b4f04                mov    ecx, dword ptr [edi + 4]
0x0052CF55  833cb100              cmp    dword ptr [ecx + esi*4], 0
0x0052CF59  7406                  je     0x52cf61  ; -> sub_52CF61
0x0052CF5B  6681470cffff          add    word ptr [edi + 0xc], 0xffff
0x0052CF61  8b4c2430              mov    ecx, dword ptr [esp + 0x30]
0x0052CF65  85c9                  test   ecx, ecx
0x0052CF67  8b5704                mov    edx, dword ptr [edi + 4]
0x0052CF6A  892cb2                mov    dword ptr [edx + esi*4], ebp
0x0052CF6D  0f8483000000          je     0x52cff6  ; -> sub_52CFF6
0x0052CF73  803d3c0db10000        cmp    byte ptr [0xb10d3c], 0
0x0052CF7A  747a                  je     0x52cff6  ; -> sub_52CFF6
0x0052CF7C  8b442414              mov    eax, dword ptr [esp + 0x14]
0x0052CF80  50                    push   eax
0x0052CF81  8d542420              lea    edx, [esp + 0x20]
0x0052CF85  52                    push   edx
0x0052CF86  e87571ffff            call   0x524100  ; -> sub_524100
0x0052CF8B  8be8                  mov    ebp, eax
0x0052CF8D  8b742434              mov    esi, dword ptr [esp + 0x34]
0x0052CF91  0fb7beae000000        movzx  edi, word ptr [esi + 0xae]
0x0052CF98  0fb786ac000000        movzx  eax, word ptr [esi + 0xac]
0x0052CF9F  81c6a4000000          add    esi, 0xa4
0x0052CFA5  3bf8                  cmp    edi, eax
0x0052CFA7  c744242800000000      mov    dword ptr [esp + 0x28], 0
0x0052CFAF  720e                  jb     0x52cfbf  ; -> sub_52CFBF
0x0052CFB1  0fb74e0e              movzx  ecx, word ptr [esi + 0xe]
0x0052CFB5  03cf                  add    ecx, edi
0x0052CFB7  51                    push   ecx
0x0052CFB8  8bce                  mov    ecx, esi
0x0052CFBA  e8516bffff            call   0x523b10  ; -> sub_523B10
0x0052CFBF  55                    push   ebp
0x0052CFC0  57                    push   edi
0x0052CFC1  8bce                  mov    ecx, esi
0x0052CFC3  e80885ffff            call   0x5254d0  ; -> sub_5254D0
0x0052CFC8  8b44241c              mov    eax, dword ptr [esp + 0x1c]
0x0052CFCC  85c0                  test   eax, eax
0x0052CFCE  c7442428ffffffff      mov    dword ptr [esp + 0x28], 0xffffffff
0x0052CFD6  741e                  je     0x52cff6  ; -> sub_52CFF6
0x0052CFD8  8bf0                  mov    esi, eax
0x0052CFDA  83c004                add    eax, 4
0x0052CFDD  50                    push   eax
0x0052CFDE  ff157c80a200          call   dword ptr [0xa2807c]
0x0052CFE4  85c0                  test   eax, eax
0x0052CFE6  750e                  jne    0x52cff6  ; -> sub_52CFF6
0x0052CFE8  85f6                  test   esi, esi
0x0052CFEA  740a                  je     0x52cff6  ; -> sub_52CFF6
0x0052CFEC  8b16                  mov    edx, dword ptr [esi]
0x0052CFEE  8b02                  mov    eax, dword ptr [edx]
0x0052CFF0  6a01                  push   1
0x0052CFF2  8bce                  mov    ecx, esi
0x0052CFF4  ffd0                  call   eax
0x0052CFF6  8b442414              mov    eax, dword ptr [esp + 0x14]
0x0052CFFA  83c001                add    eax, 1
0x0052CFFD  83f809                cmp    eax, 9
0x0052D000  89442414              mov    dword ptr [esp + 0x14], eax
0x0052D004  0f8c06feffff          jl     0x52ce10  ; -> sub_52CE10
0x0052D00A  8b5c2434              mov    ebx, dword ptr [esp + 0x34]
0x0052D00E  837b6000              cmp    dword ptr [ebx + 0x60], 0
0x0052D012  8a0d3c0db100          mov    cl, byte ptr [0xb10d3c]
0x0052D018  888bb4000000          mov    byte ptr [ebx + 0xb4], cl
0x0052D01E  8b15b020b100          mov    edx, dword ptr [0xb120b0]
0x0052D024  8b4c2418              mov    ecx, dword ptr [esp + 0x18]
0x0052D028  8993c0000000          mov    dword ptr [ebx + 0xc0], edx
0x0052D02E  8d8188010000          lea    eax, [ecx + 0x188]
0x0052D034  8d91a0010000          lea    edx, [ecx + 0x1a0]
0x0052D03A  8983b8000000          mov    dword ptr [ebx + 0xb8], eax
0x0052D040  8993bc000000          mov    dword ptr [ebx + 0xbc], edx
0x0052D046  751a                  jne    0x52d062  ; -> sub_52D062
0x0052D048  8d818c000000          lea    eax, [ecx + 0x8c]
0x0052D04E  85c0                  test   eax, eax
0x0052D050  7410                  je     0x52d062  ; -> sub_52D062
0x0052D052  83780400              cmp    dword ptr [eax + 4], 0
0x0052D056  7505                  jne    0x52d05d  ; -> sub_52D05D
0x0052D058  833800                cmp    dword ptr [eax], 0
0x0052D05B  7405                  je     0x52d062  ; -> sub_52D062
0x0052D05D  8b00                  mov    eax, dword ptr [eax]
0x0052D05F  894360                mov    dword ptr [ebx + 0x60], eax
0x0052D062  837b6c00              cmp    dword ptr [ebx + 0x6c], 0
0x0052D066  7558                  jne    0x52d0c0  ; -> sub_52D0C0
0x0052D068  8d81a8000000          lea    eax, [ecx + 0xa8]
0x0052D06E  85c0                  test   eax, eax
0x0052D070  7412                  je     0x52d084  ; -> sub_52D084
0x0052D072  83780400              cmp    dword ptr [eax + 4], 0
0x0052D076  7505                  jne    0x52d07d  ; -> sub_52D07D
0x0052D078  833800                cmp    dword ptr [eax], 0
0x0052D07B  7407                  je     0x52d084  ; -> sub_52D084
0x0052D07D  8b08                  mov    ecx, dword ptr [eax]
0x0052D07F  894b6c                mov    dword ptr [ebx + 0x6c], ecx
0x0052D082  eb3c                  jmp    0x52d0c0  ; -> sub_52D0C0
0x0052D084  8b35983ab300          mov    esi, dword ptr [0xb33a98]  ; g_modelLoader (ModelLoader**)+0x7c
0x0052D08A  83c63c                add    esi, 0x3c
0x0052D08D  7431                  je     0x52d0c0  ; -> sub_52D0C0
0x0052D08F  90                    nop    
0x0052D090  8b3e                  mov    edi, dword ptr [esi]
0x0052D092  85ff                  test   edi, edi
0x0052D094  741e                  je     0x52d0b4  ; -> sub_52D0B4
0x0052D096  8b4728                mov    eax, dword ptr [edi + 0x28]
0x0052D099  85c0                  test   eax, eax
0x0052D09B  7505                  jne    0x52d0a2  ; -> sub_52D0A2
0x0052D09D  b8ecf7a200            mov    eax, 0xa2f7ec  ; -> sub_A2F7EC
0x0052D0A2  68d849a500            push   0xa549d8  ; -> sub_A549D8
0x0052D0A7  50                    push   eax
0x0052D0A8  e880554500            call   0x98262d  ; -> sub_98262D
0x0052D0AD  83c408                add    esp, 8
0x0052D0B0  85c0                  test   eax, eax
0x0052D0B2  7409                  je     0x52d0bd  ; -> sub_52D0BD
0x0052D0B4  8b7604                mov    esi, dword ptr [esi + 4]
0x0052D0B7  85f6                  test   esi, esi
0x0052D0B9  75d5                  jne    0x52d090  ; -> sub_52D090
0x0052D0BB  eb03                  jmp    0x52d0c0  ; -> sub_52D0C0
0x0052D0BD  897b6c                mov    dword ptr [ebx + 0x6c], edi
0x0052D0C0  8b4c2420              mov    ecx, dword ptr [esp + 0x20]
0x0052D0C4  64890d00000000        mov    dword ptr fs:[0], ecx
0x0052D0CB  59                    pop    ecx
0x0052D0CC  5f                    pop    edi
0x0052D0CD  5e                    pop    esi
0x0052D0CE  5d                    pop    ebp
0x0052D0CF  5b                    pop    ebx
0x0052D0D0  83c418                add    esp, 0x18
0x0052D0D3  c20800                ret    8
0x0052D0D6  cc                    int3   
0x0052D0D7  cc                    int3   
0x0052D0D8  cc                    int3   
0x0052D0D9  cc                    int3   
0x0052D0DA  cc                    int3   
0x0052D0DB  cc                    int3   
0x0052D0DC  cc                    int3   
0x0052D0DD  cc                    int3   
0x0052D0DE  cc                    int3   
0x0052D0DF  cc                    int3   
0x0052D0E0  56                    push   esi
0x0052D0E1  8bf1                  mov    esi, ecx
0x0052D0E3  e8f8faffff            call   0x52cbe0  ; -> sub_52CBE0
0x0052D0E8  f644240801            test   byte ptr [esp + 8], 1
0x0052D0ED  7409                  je     0x52d0f8  ; -> sub_52D0F8
0x0052D0EF  56                    push   esi
0x0052D0F0  e82b4eedff            call   0x401f20  ; -> sub_401F20
0x0052D0F5  83c404                add    esp, 4
0x0052D0F8  8bc6                  mov    eax, esi
0x0052D0FA  5e                    pop    esi
0x0052D0FB  c20400                ret    4
0x0052D0FE  cc                    int3   
0x0052D0FF  cc                    int3   
0x0052D100  6aff                  push   -1
0x0052D102  68e8879b00            push   0x9b87e8  ; -> sub_9B87E8
0x0052D107  64a100000000          mov    eax, dword ptr fs:[0]
0x0052D10D  50                    push   eax
0x0052D10E  51                    push   ecx
0x0052D10F  53                    push   ebx
0x0052D110  55                    push   ebp
0x0052D111  56                    push   esi
0x0052D112  57                    push   edi
0x0052D113  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0052D118  33c4                  xor    eax, esp
0x0052D11A  50                    push   eax
0x0052D11B  8d442418              lea    eax, [esp + 0x18]
0x0052D11F  64a300000000          mov    dword ptr fs:[0], eax
0x0052D125  8bf1                  mov    esi, ecx
0x0052D127  89742414              mov    dword ptr [esp + 0x14], esi
0x0052D12B  e830f3f3ff            call   0x46c460  ; -> sub_46C460
0x0052D130  33ff                  xor    edi, edi
0x0052D132  c74618a022a300        mov    dword ptr [esi + 0x18], 0xa322a0  ; -> sub_A322A0
0x0052D139  897c2420              mov    dword ptr [esp + 0x20], edi
0x0052D13D  897e1c                mov    dword ptr [esi + 0x1c], edi
0x0052D140  66897e20              mov    word ptr [esi + 0x20], di
0x0052D144  66897e22              mov    word ptr [esi + 0x22], di
0x0052D148  8d6e24                lea    ebp, [esi + 0x24]
0x0052D14B  8bcd                  mov    ecx, ebp

