; ============================================================
; sub_439DC0  (Crash 5: +0x58)
; VA: 0x00439DC0  size: 0x180
; ============================================================
0x00439DC0  6aff                  push   -1
0x00439DC2  68e0c89a00            push   0x9ac8e0  ; -> sub_9AC8E0
0x00439DC7  64a100000000          mov    eax, dword ptr fs:[0]
0x00439DCD  50                    push   eax
0x00439DCE  51                    push   ecx
0x00439DCF  53                    push   ebx
0x00439DD0  56                    push   esi
0x00439DD1  57                    push   edi
0x00439DD2  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00439DD7  33c4                  xor    eax, esp
0x00439DD9  50                    push   eax
0x00439DDA  8d442414              lea    eax, [esp + 0x14]
0x00439DDE  64a300000000          mov    dword ptr fs:[0], eax
0x00439DE4  8bf1                  mov    esi, ecx
0x00439DE6  33db                  xor    ebx, ebx
0x00439DE8  895c2410              mov    dword ptr [esp + 0x10], ebx
0x00439DEC  8b4e08                mov    ecx, dword ptr [esi + 8]
0x00439DEF  8b01                  mov    eax, dword ptr [ecx]
0x00439DF1  8b7c2424              mov    edi, dword ptr [esp + 0x24]
0x00439DF5  8b4004                mov    eax, dword ptr [eax + 4]
0x00439DF8  8d542410              lea    edx, [esp + 0x10]
0x00439DFC  52                    push   edx
0x00439DFD  57                    push   edi
0x00439DFE  895c2424              mov    dword ptr [esp + 0x24], ebx
0x00439E02  ffd0                  call   eax
0x00439E04  84c0                  test   al, al
0x00439E06  7410                  je     0x439e18  ; -> sub_439E18
0x00439E08  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x00439E0C  51                    push   ecx
0x00439E0D  8b0d103ab300          mov    ecx, dword ptr [0xb33a10]  ; g_ioManager (IOManager**)
0x00439E13  e81883ffff            call   0x432130  ; -> sub_432130
0x00439E18  895c2424              mov    dword ptr [esp + 0x24], ebx
0x00439E1C  8b4e10                mov    ecx, dword ptr [esi + 0x10]
0x00439E1F  8b11                  mov    edx, dword ptr [ecx]
0x00439E21  8b5204                mov    edx, dword ptr [edx + 4]
0x00439E24  8d442424              lea    eax, [esp + 0x24]
0x00439E28  50                    push   eax
0x00439E29  57                    push   edi
0x00439E2A  c644242401            mov    byte ptr [esp + 0x24], 1
0x00439E2F  ffd2                  call   edx
0x00439E31  84c0                  test   al, al
0x00439E33  7410                  je     0x439e45  ; -> sub_439E45
0x00439E35  8b442424              mov    eax, dword ptr [esp + 0x24]
0x00439E39  8b0d103ab300          mov    ecx, dword ptr [0xb33a10]  ; g_ioManager (IOManager**)
0x00439E3F  50                    push   eax
0x00439E40  e8eb82ffff            call   0x432130  ; -> sub_432130
0x00439E45  8b742424              mov    esi, dword ptr [esp + 0x24]
0x00439E49  3bf3                  cmp    esi, ebx
0x00439E4B  8b3d7c80a200          mov    edi, dword ptr [0xa2807c]
0x00439E51  885c241c              mov    byte ptr [esp + 0x1c], bl
0x00439E55  7418                  je     0x439e6f  ; -> sub_439E6F
0x00439E57  8d4e08                lea    ecx, [esi + 8]
0x00439E5A  51                    push   ecx
0x00439E5B  ffd7                  call   edi
0x00439E5D  85c0                  test   eax, eax
0x00439E5F  750e                  jne    0x439e6f  ; -> sub_439E6F
0x00439E61  3bf3                  cmp    esi, ebx
0x00439E63  740a                  je     0x439e6f  ; -> sub_439E6F
0x00439E65  8b16                  mov    edx, dword ptr [esi]
0x00439E67  8b02                  mov    eax, dword ptr [edx]
0x00439E69  6a01                  push   1
0x00439E6B  8bce                  mov    ecx, esi
0x00439E6D  ffd0                  call   eax
0x00439E6F  8b742410              mov    esi, dword ptr [esp + 0x10]
0x00439E73  3bf3                  cmp    esi, ebx
0x00439E75  c744241cffffffff      mov    dword ptr [esp + 0x1c], 0xffffffff
0x00439E7D  7418                  je     0x439e97  ; -> sub_439E97
0x00439E7F  8d4e08                lea    ecx, [esi + 8]
0x00439E82  51                    push   ecx
0x00439E83  ffd7                  call   edi
0x00439E85  85c0                  test   eax, eax
0x00439E87  750e                  jne    0x439e97  ; -> sub_439E97
0x00439E89  3bf3                  cmp    esi, ebx
0x00439E8B  740a                  je     0x439e97  ; -> sub_439E97
0x00439E8D  8b16                  mov    edx, dword ptr [esi]
0x00439E8F  8b02                  mov    eax, dword ptr [edx]
0x00439E91  6a01                  push   1
0x00439E93  8bce                  mov    ecx, esi
0x00439E95  ffd0                  call   eax
0x00439E97  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x00439E9B  64890d00000000        mov    dword ptr fs:[0], ecx
0x00439EA2  59                    pop    ecx
0x00439EA3  5f                    pop    edi
0x00439EA4  5e                    pop    esi
0x00439EA5  5b                    pop    ebx
0x00439EA6  83c410                add    esp, 0x10
0x00439EA9  c20400                ret    4
0x00439EAC  cc                    int3   
0x00439EAD  cc                    int3   
0x00439EAE  cc                    int3   
0x00439EAF  cc                    int3   
0x00439EB0  6aff                  push   -1
0x00439EB2  6808c99a00            push   0x9ac908  ; -> sub_9AC908
0x00439EB7  64a100000000          mov    eax, dword ptr fs:[0]
0x00439EBD  50                    push   eax
0x00439EBE  83ec3c                sub    esp, 0x3c
0x00439EC1  53                    push   ebx
0x00439EC2  56                    push   esi
0x00439EC3  57                    push   edi
0x00439EC4  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00439EC9  33c4                  xor    eax, esp
0x00439ECB  50                    push   eax
0x00439ECC  8d44244c              lea    eax, [esp + 0x4c]
0x00439ED0  64a300000000          mov    dword ptr fs:[0], eax
0x00439ED6  8b09                  mov    ecx, dword ptr [ecx]
0x00439ED8  8b74245c              mov    esi, dword ptr [esp + 0x5c]
0x00439EDC  8d542410              lea    edx, [esp + 0x10]
0x00439EE0  c744241000000000      mov    dword ptr [esp + 0x10], 0
0x00439EE8  8b01                  mov    eax, dword ptr [ecx]
0x00439EEA  8b4004                mov    eax, dword ptr [eax + 4]
0x00439EED  52                    push   edx
0x00439EEE  56                    push   esi
0x00439EEF  ffd0                  call   eax
0x00439EF1  84c0                  test   al, al
0x00439EF3  0f85a9000000          jne    0x439fa2  ; -> sub_439FA2
0x00439EF9  8b3d103ab300          mov    edi, dword ptr [0xb33a10]  ; g_ioManager (IOManager**)
0x00439EFF  ff158c80a200          call   dword ptr [0xa2808c]
0x00439F05  3b4730                cmp    eax, dword ptr [edi + 0x30]
0x00439F08  740b                  je     0x439f15  ; -> sub_439F15
0x00439F0A  8bcf                  mov    ecx, edi
0x00439F0C  e84f89ffff            call   0x432860  ; IOManager::sub_432820 (Unk_07 callback)+0x40
0x00439F11  b301                  mov    bl, 1
0x00439F13  eb02                  jmp    0x439f17  ; -> sub_439F17
0x00439F15  32db                  xor    bl, bl
0x00439F17  807c246000            cmp    byte ptr [esp + 0x60], 0
0x00439F1C  8b4c2468              mov    ecx, dword ptr [esp + 0x68]
0x00439F20  8b442464              mov    eax, dword ptr [esp + 0x64]
0x00439F24  6a00                  push   0
0x00439F26  0f94c2                sete   dl
0x00439F29  51                    push   ecx
0x00439F2A  8d4c241c              lea    ecx, [esp + 0x1c]
0x00439F2E  52                    push   edx
0x00439F2F  50                    push   eax
0x00439F30  6a00                  push   0
0x00439F32  56                    push   esi
0x00439F33  e818d3ffff            call   0x437250  ; -> sub_437250
0x00439F38  804c244820            or     byte ptr [esp + 0x48], 0x20
