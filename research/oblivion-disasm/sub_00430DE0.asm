; ============================================================
; BSTaskThread::Runnable
; VA: 0x00430DE0  size: 0x180
; ============================================================
0x00430DE0  8b4c2404              mov    ecx, dword ptr [esp + 4]
0x00430DE4  8b01                  mov    eax, dword ptr [ecx]
0x00430DE6  8b5004                mov    edx, dword ptr [eax + 4]
0x00430DE9  ffd2                  call   edx
0x00430DEB  33c0                  xor    eax, eax
0x00430DED  c20400                ret    4
0x00430DF0  8b4104                mov    eax, dword ptr [ecx + 4]
0x00430DF3  50                    push   eax
0x00430DF4  ff15f080a200          call   dword ptr [0xa280f0]
0x00430DFA  c3                    ret    
0x00430DFB  cc                    int3   
0x00430DFC  cc                    int3   
0x00430DFD  cc                    int3   
0x00430DFE  cc                    int3   
0x00430DFF  cc                    int3   
0x00430E00  56                    push   esi
0x00430E01  57                    push   edi
0x00430E02  8b3d3081a200          mov    edi, dword ptr [0xa28130]
0x00430E08  8bf1                  mov    esi, ecx
0x00430E0A  c706fc63a300          mov    dword ptr [esi], 0xa363fc  ; -> sub_A363FC
0x00430E10  6a00                  push   0
0x00430E12  c7460c00000000        mov    dword ptr [esi + 0xc], 0
0x00430E19  8b460c                mov    eax, dword ptr [esi + 0xc]
0x00430E1C  6a01                  push   1
0x00430E1E  50                    push   eax
0x00430E1F  6a00                  push   0
0x00430E21  c7461001000000        mov    dword ptr [esi + 0x10], 1
0x00430E28  ffd7                  call   edi
0x00430E2A  894614                mov    dword ptr [esi + 0x14], eax
0x00430E2D  6a00                  push   0
0x00430E2F  c7461801000000        mov    dword ptr [esi + 0x18], 1
0x00430E36  8b4e18                mov    ecx, dword ptr [esi + 0x18]
0x00430E39  6a01                  push   1
0x00430E3B  51                    push   ecx
0x00430E3C  6a00                  push   0
0x00430E3E  c7461c01000000        mov    dword ptr [esi + 0x1c], 1
0x00430E45  ffd7                  call   edi
0x00430E47  8d5608                lea    edx, [esi + 8]
0x00430E4A  52                    push   edx
0x00430E4B  6a04                  push   4
0x00430E4D  56                    push   esi
0x00430E4E  68e00d4300            push   0x430de0  ; BSTaskThread::Runnable
0x00430E53  6a00                  push   0
0x00430E55  6a00                  push   0
0x00430E57  894620                mov    dword ptr [esi + 0x20], eax
0x00430E5A  ff15f880a200          call   dword ptr [0xa280f8]
0x00430E60  894604                mov    dword ptr [esi + 4], eax
0x00430E63  5f                    pop    edi
0x00430E64  8bc6                  mov    eax, esi
0x00430E66  5e                    pop    esi
0x00430E67  c20800                ret    8
0x00430E6A  cc                    int3   
0x00430E6B  cc                    int3   
0x00430E6C  cc                    int3   
0x00430E6D  cc                    int3   
0x00430E6E  cc                    int3   
0x00430E6F  cc                    int3   
0x00430E70  56                    push   esi
0x00430E71  8bf1                  mov    esi, ecx
0x00430E73  8b4604                mov    eax, dword ptr [esi + 4]
0x00430E76  57                    push   edi
0x00430E77  50                    push   eax
0x00430E78  c706fc63a300          mov    dword ptr [esi], 0xa363fc  ; -> sub_A363FC
0x00430E7E  ff15f480a200          call   dword ptr [0xa280f4]
0x00430E84  8b4e04                mov    ecx, dword ptr [esi + 4]
0x00430E87  8b3d9480a200          mov    edi, dword ptr [0xa28094]
0x00430E8D  51                    push   ecx
0x00430E8E  ffd7                  call   edi
0x00430E90  8b5620                mov    edx, dword ptr [esi + 0x20]
0x00430E93  52                    push   edx
0x00430E94  ffd7                  call   edi
0x00430E96  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00430E99  50                    push   eax
0x00430E9A  ffd7                  call   edi
0x00430E9C  5f                    pop    edi
0x00430E9D  5e                    pop    esi
0x00430E9E  c3                    ret    
0x00430E9F  cc                    int3   
0x00430EA0  56                    push   esi
0x00430EA1  8bf1                  mov    esi, ecx
0x00430EA3  8b4604                mov    eax, dword ptr [esi + 4]
0x00430EA6  57                    push   edi
0x00430EA7  50                    push   eax
0x00430EA8  c706fc63a300          mov    dword ptr [esi], 0xa363fc  ; -> sub_A363FC
0x00430EAE  ff15f480a200          call   dword ptr [0xa280f4]
0x00430EB4  8b4e04                mov    ecx, dword ptr [esi + 4]
0x00430EB7  8b3d9480a200          mov    edi, dword ptr [0xa28094]
0x00430EBD  51                    push   ecx
0x00430EBE  ffd7                  call   edi
0x00430EC0  8b5620                mov    edx, dword ptr [esi + 0x20]
0x00430EC3  52                    push   edx
0x00430EC4  ffd7                  call   edi
0x00430EC6  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00430EC9  50                    push   eax
0x00430ECA  ffd7                  call   edi
0x00430ECC  f644240c01            test   byte ptr [esp + 0xc], 1
0x00430ED1  7409                  je     0x430edc  ; -> sub_430EDC
0x00430ED3  56                    push   esi
0x00430ED4  e84710fdff            call   0x401f20  ; -> sub_401F20
0x00430ED9  83c404                add    esp, 4
0x00430EDC  5f                    pop    edi
0x00430EDD  8bc6                  mov    eax, esi
0x00430EDF  5e                    pop    esi
0x00430EE0  c20400                ret    4
0x00430EE3  cc                    int3   
0x00430EE4  cc                    int3   
0x00430EE5  cc                    int3   
0x00430EE6  cc                    int3   
0x00430EE7  cc                    int3   
0x00430EE8  cc                    int3   
0x00430EE9  cc                    int3   
0x00430EEA  cc                    int3   
0x00430EEB  cc                    int3   
0x00430EEC  cc                    int3   
0x00430EED  cc                    int3   
0x00430EEE  cc                    int3   
0x00430EEF  cc                    int3   
0x00430EF0  6aff                  push   -1
0x00430EF2  688cbe9a00            push   0x9abe8c  ; -> sub_9ABE8C
0x00430EF7  64a100000000          mov    eax, dword ptr fs:[0]
0x00430EFD  50                    push   eax
0x00430EFE  81ec14030000          sub    esp, 0x314
0x00430F04  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00430F09  33c4                  xor    eax, esp
0x00430F0B  89842410030000        mov    dword ptr [esp + 0x310], eax
0x00430F12  53                    push   ebx
0x00430F13  56                    push   esi
0x00430F14  57                    push   edi
0x00430F15  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00430F1A  33c4                  xor    eax, esp
0x00430F1C  50                    push   eax
0x00430F1D  8d842424030000        lea    eax, [esp + 0x324]
0x00430F24  64a300000000          mov    dword ptr fs:[0], eax
0x00430F2A  8b0d043ab300          mov    ecx, dword ptr [0xb33a04]
0x00430F30  8bb42434030000        mov    esi, dword ptr [esp + 0x334]
0x00430F37  33ff                  xor    edi, edi
0x00430F39  3bcf                  cmp    ecx, edi
0x00430F3B  0f84b0000000          je     0x430ff1  ; -> sub_430FF1
0x00430F41  8b9c2438030000        mov    ebx, dword ptr [esp + 0x338]
0x00430F48  83fb01                cmp    ebx, 1
0x00430F4B  7534                  jne    0x430f81  ; -> sub_430F81
0x00430F4D  6854010000            push   0x154
0x00430F52  e8a90ffdff            call   0x401f00  ; -> sub_401F00
0x00430F57  83c404                add    esp, 4
0x00430F5A  89442410              mov    dword ptr [esp + 0x10], eax
0x00430F5E  3bc7                  cmp    eax, edi
