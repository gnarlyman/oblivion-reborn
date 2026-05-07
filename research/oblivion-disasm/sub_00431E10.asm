; ============================================================
; sub_431E10  (Crash 4: +0xC7)
; VA: 0x00431E10  size: 0x200
; ============================================================
0x00431E10  51                    push   ecx
0x00431E11  8b442408              mov    eax, dword ptr [esp + 8]
0x00431E15  53                    push   ebx
0x00431E16  55                    push   ebp
0x00431E17  8b6c2414              mov    ebp, dword ptr [esp + 0x14]
0x00431E1B  56                    push   esi
0x00431E1C  8bf1                  mov    esi, ecx
0x00431E1E  8d0c8500000000        lea    ecx, [eax*4]
0x00431E25  57                    push   edi
0x00431E26  894c2410              mov    dword ptr [esp + 0x10], ecx
0x00431E2A  8d9b00000000          lea    ebx, [ebx]
0x00431E30  8b16                  mov    edx, dword ptr [esi]
0x00431E32  8b420c                mov    eax, dword ptr [edx + 0xc]
0x00431E35  03442410              add    eax, dword ptr [esp + 0x10]
0x00431E39  894610                mov    dword ptr [esi + 0x10], eax
0x00431E3C  8bc8                  mov    ecx, eax
0x00431E3E  8b11                  mov    edx, dword ptr [ecx]
0x00431E40  895614                mov    dword ptr [esi + 0x14], edx
0x00431E43  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00431E46  8b4e08                mov    ecx, dword ptr [esi + 8]
0x00431E49  83e0fe                and    eax, 0xfffffffe
0x00431E4C  8901                  mov    dword ptr [ecx], eax
0x00431E4E  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00431E51  83e0fe                and    eax, 0xfffffffe
0x00431E54  89442418              mov    dword ptr [esp + 0x18], eax
0x00431E58  8b542418              mov    edx, dword ptr [esp + 0x18]
0x00431E5C  8b4610                mov    eax, dword ptr [esi + 0x10]
0x00431E5F  8b00                  mov    eax, dword ptr [eax]
0x00431E61  83e2fe                and    edx, 0xfffffffe
0x00431E64  89542418              mov    dword ptr [esp + 0x18], edx
0x00431E68  8b4c2418              mov    ecx, dword ptr [esp + 0x18]
0x00431E6C  3bc1                  cmp    eax, ecx
0x00431E6E  75c0                  jne    0x431e30  ; -> sub_431E30
0x00431E70  8b5614                mov    edx, dword ptr [esi + 0x14]
0x00431E73  f7c2feffffff          test   edx, 0xfffffffe
0x00431E79  0f848b000000          je     0x431f0a  ; -> sub_431F0A
0x00431E7F  8b5504                mov    edx, dword ptr [ebp + 4]
0x00431E82  8b0e                  mov    ecx, dword ptr [esi]
0x00431E84  8b01                  mov    eax, dword ptr [ecx]
0x00431E86  8b4020                mov    eax, dword ptr [eax + 0x20]
0x00431E89  52                    push   edx
0x00431E8A  8b5500                mov    edx, dword ptr [ebp]
0x00431E8D  52                    push   edx
0x00431E8E  ffd0                  call   eax
0x00431E90  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00431E93  8b0e                  mov    ecx, dword ptr [esi]
0x00431E95  8b11                  mov    edx, dword ptr [ecx]
0x00431E97  8b5224                mov    edx, dword ptr [edx + 0x24]
0x00431E9A  83e0fe                and    eax, 0xfffffffe
0x00431E9D  8b7804                mov    edi, dword ptr [eax + 4]
0x00431EA0  8b00                  mov    eax, dword ptr [eax]
0x00431EA2  57                    push   edi
0x00431EA3  50                    push   eax
0x00431EA4  ffd2                  call   edx
0x00431EA6  894500                mov    dword ptr [ebp], eax
0x00431EA9  8b442420              mov    eax, dword ptr [esp + 0x20]
0x00431EAD  895504                mov    dword ptr [ebp + 4], edx
0x00431EB0  8b7e14                mov    edi, dword ptr [esi + 0x14]
0x00431EB3  8b18                  mov    ebx, dword ptr [eax]
0x00431EB5  83e7fe                and    edi, 0xfffffffe
0x00431EB8  83c708                add    edi, 8
0x00431EBB  3b1f                  cmp    ebx, dword ptr [edi]
0x00431EBD  7436                  je     0x431ef5  ; -> sub_431EF5
0x00431EBF  85db                  test   ebx, ebx
0x00431EC1  741c                  je     0x431edf  ; -> sub_431EDF
0x00431EC3  8d4b08                lea    ecx, [ebx + 8]
0x00431EC6  51                    push   ecx
0x00431EC7  ff157c80a200          call   dword ptr [0xa2807c]
0x00431ECD  85c0                  test   eax, eax
0x00431ECF  750e                  jne    0x431edf  ; -> sub_431EDF
0x00431ED1  85db                  test   ebx, ebx
0x00431ED3  740a                  je     0x431edf  ; -> sub_431EDF
0x00431ED5  8b13                  mov    edx, dword ptr [ebx]
0x00431ED7  8b02                  mov    eax, dword ptr [edx]
0x00431ED9  6a01                  push   1
0x00431EDB  8bcb                  mov    ecx, ebx
0x00431EDD  ffd0                  call   eax
0x00431EDF  8b3f                  mov    edi, dword ptr [edi]
0x00431EE1  85ff                  test   edi, edi
0x00431EE3  8b4c2420              mov    ecx, dword ptr [esp + 0x20]
0x00431EE7  8939                  mov    dword ptr [ecx], edi
0x00431EE9  740a                  je     0x431ef5  ; -> sub_431EF5
0x00431EEB  83c708                add    edi, 8
0x00431EEE  57                    push   edi
0x00431EEF  ff157880a200          call   dword ptr [0xa28078]
0x00431EF5  8b4e14                mov    ecx, dword ptr [esi + 0x14]
0x00431EF8  83e1fe                and    ecx, 0xfffffffe
0x00431EFB  8b510c                mov    edx, dword ptr [ecx + 0xc]
0x00431EFE  b001                  mov    al, 1
0x00431F00  84d0                  test   al, dl
0x00431F02  0f8528ffffff          jne    0x431e30  ; -> sub_431E30
0x00431F08  eb02                  jmp    0x431f0c  ; -> sub_431F0C
0x00431F0A  32c0                  xor    al, al
0x00431F0C  8b4e04                mov    ecx, dword ptr [esi + 4]
0x00431F0F  c70100000000          mov    dword ptr [ecx], 0
0x00431F15  8b5608                mov    edx, dword ptr [esi + 8]
0x00431F18  5f                    pop    edi
0x00431F19  c70200000000          mov    dword ptr [edx], 0
0x00431F1F  8b4e0c                mov    ecx, dword ptr [esi + 0xc]
0x00431F22  5e                    pop    esi
0x00431F23  5d                    pop    ebp
0x00431F24  c70100000000          mov    dword ptr [ecx], 0
0x00431F2A  5b                    pop    ebx
0x00431F2B  59                    pop    ecx
0x00431F2C  c20c00                ret    0xc
0x00431F2F  cc                    int3   
0x00431F30  56                    push   esi
0x00431F31  8bf1                  mov    esi, ecx
0x00431F33  e838efffff            call   0x430e70  ; -> sub_430E70
0x00431F38  f644240801            test   byte ptr [esp + 8], 1
0x00431F3D  7409                  je     0x431f48  ; -> sub_431F48
0x00431F3F  56                    push   esi
0x00431F40  e8dbfffcff            call   0x401f20  ; -> sub_401F20
0x00431F45  83c404                add    esp, 4
0x00431F48  8bc6                  mov    eax, esi
0x00431F4A  5e                    pop    esi
0x00431F4B  c20400                ret    4
0x00431F4E  cc                    int3   
0x00431F4F  cc                    int3   
0x00431F50  56                    push   esi
0x00431F51  57                    push   edi
0x00431F52  8bf9                  mov    edi, ecx
0x00431F54  8b470c                mov    eax, dword ptr [edi + 0xc]
0x00431F57  85c0                  test   eax, eax
0x00431F59  8d770c                lea    esi, [edi + 0xc]
0x00431F5C  7517                  jne    0x431f75  ; -> sub_431F75
0x00431F5E  56                    push   esi
0x00431F5F  ff157880a200          call   dword ptr [0xa28078]
0x00431F65  8b4e08                mov    ecx, dword ptr [esi + 8]
0x00431F68  6a00                  push   0
0x00431F6A  6a01                  push   1
0x00431F6C  51                    push   ecx
0x00431F6D  ff15c880a200          call   dword ptr [0xa280c8]
0x00431F73  8b16                  mov    edx, dword ptr [esi]
0x00431F75  8b4720                mov    eax, dword ptr [edi + 0x20]
0x00431F78  8d7718                lea    esi, [edi + 0x18]
0x00431F7B  6aff                  push   -1
0x00431F7D  50                    push   eax
0x00431F7E  ff15cc80a200          call   dword ptr [0xa280cc]
0x00431F84  3d02010000            cmp    eax, 0x102
0x00431F89  7407                  je     0x431f92  ; -> sub_431F92
0x00431F8B  56                    push   esi
0x00431F8C  ff157c80a200          call   dword ptr [0xa2807c]
0x00431F92  5f                    pop    edi
0x00431F93  5e                    pop    esi
0x00431F94  c3                    ret    
0x00431F95  cc                    int3   
0x00431F96  cc                    int3   
0x00431F97  cc                    int3   
0x00431F98  cc                    int3   
0x00431F99  cc                    int3   
0x00431F9A  cc                    int3   
0x00431F9B  cc                    int3   
0x00431F9C  cc                    int3   
0x00431F9D  cc                    int3   
0x00431F9E  cc                    int3   
0x00431F9F  cc                    int3   
0x00431FA0  56                    push   esi
0x00431FA1  57                    push   edi
0x00431FA2  8bf9                  mov    edi, ecx
0x00431FA4  8b7708                mov    esi, dword ptr [edi + 8]
0x00431FA7  ff158c80a200          call   dword ptr [0xa2808c]
0x00431FAD  3bf0                  cmp    esi, eax
0x00431FAF  743b                  je     0x431fec  ; -> sub_431FEC
0x00431FB1  8b470c                mov    eax, dword ptr [edi + 0xc]
0x00431FB4  85c0                  test   eax, eax
0x00431FB6  8d770c                lea    esi, [edi + 0xc]
0x00431FB9  53                    push   ebx
0x00431FBA  8b1dc880a200          mov    ebx, dword ptr [0xa280c8]
0x00431FC0  55                    push   ebp
0x00431FC1  8b2d7880a200          mov    ebp, dword ptr [0xa28078]
0x00431FC7  750f                  jne    0x431fd8  ; -> sub_431FD8
0x00431FC9  56                    push   esi
0x00431FCA  ffd5                  call   ebp
0x00431FCC  8b4e08                mov    ecx, dword ptr [esi + 8]
0x00431FCF  6a00                  push   0
0x00431FD1  6a01                  push   1
0x00431FD3  51                    push   ecx
0x00431FD4  ffd3                  call   ebx
0x00431FD6  8b16                  mov    edx, dword ptr [esi]
0x00431FD8  8d7718                lea    esi, [edi + 0x18]
0x00431FDB  56                    push   esi
0x00431FDC  ffd5                  call   ebp
0x00431FDE  8b4608                mov    eax, dword ptr [esi + 8]
0x00431FE1  6a00                  push   0
0x00431FE3  6a01                  push   1
0x00431FE5  50                    push   eax
0x00431FE6  ffd3                  call   ebx
0x00431FE8  8b0e                  mov    ecx, dword ptr [esi]
0x00431FEA  5d                    pop    ebp
0x00431FEB  5b                    pop    ebx
0x00431FEC  5f                    pop    edi
0x00431FED  5e                    pop    esi
0x00431FEE  c3                    ret    
0x00431FEF  cc                    int3   
0x00431FF0  53                    push   ebx
0x00431FF1  8b1d7880a200          mov    ebx, dword ptr [0xa28078]
0x00431FF7  56                    push   esi
0x00431FF8  57                    push   edi
0x00431FF9  8b7c2410              mov    edi, dword ptr [esp + 0x10]
0x00431FFD  6a00                  push   0
0x00431FFF  51                    push   ecx
0x00432000  8bc4                  mov    eax, esp
0x00432002  c7470c01000000        mov    dword ptr [edi + 0xc], 1
0x00432009  8938                  mov    dword ptr [eax], edi
0x0043200B  8d4708                lea    eax, [edi + 8]
