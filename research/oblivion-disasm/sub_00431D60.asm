; ============================================================
; ThreadSpecificInterfaceManager::AddInterface
; VA: 0x00431D60  size: 0x180
; ============================================================
0x00431D60  81ec08010000          sub    esp, 0x108
0x00431D66  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00431D6B  33c4                  xor    eax, esp
0x00431D6D  89842404010000        mov    dword ptr [esp + 0x104], eax
0x00431D74  53                    push   ebx
0x00431D75  8b9c2410010000        mov    ebx, dword ptr [esp + 0x110]
0x00431D7C  55                    push   ebp
0x00431D7D  56                    push   esi
0x00431D7E  57                    push   edi
0x00431D7F  8bf9                  mov    edi, ecx
0x00431D81  8d470c                lea    eax, [edi + 0xc]
0x00431D84  50                    push   eax
0x00431D85  33ed                  xor    ebp, ebp
0x00431D87  ff157880a200          call   dword ptr [0xa28078]
0x00431D8D  8bf0                  mov    esi, eax
0x00431D8F  8b07                  mov    eax, dword ptr [edi]
0x00431D91  83ee01                sub    esi, 1
0x00431D94  3bf0                  cmp    esi, eax
0x00431D96  732d                  jae    0x431dc5  ; ThreadSpecificInterfaceManager::AddInterface+0x65
0x00431D98  8b13                  mov    edx, dword ptr [ebx]
0x00431D9A  8b02                  mov    eax, dword ptr [edx]
0x00431D9C  56                    push   esi
0x00431D9D  8bcb                  mov    ecx, ebx
0x00431D9F  ffd0                  call   eax
0x00431DA1  8b4f08                mov    ecx, dword ptr [edi + 8]
0x00431DA4  8bd8                  mov    ebx, eax
0x00431DA6  895cf104              mov    dword ptr [ecx + esi*8 + 4], ebx
0x00431DAA  ff158c80a200          call   dword ptr [0xa2808c]
0x00431DB0  8b5708                mov    edx, dword ptr [edi + 8]
0x00431DB3  8904f2                mov    dword ptr [edx + esi*8], eax
0x00431DB6  8b4704                mov    eax, dword ptr [edi + 4]
0x00431DB9  53                    push   ebx
0x00431DBA  50                    push   eax
0x00431DBB  ff154881a200          call   dword ptr [0xa28148]
0x00431DC1  8bc3                  mov    eax, ebx
0x00431DC3  eb2d                  jmp    0x431df2  ; -> sub_431DF2
0x00431DC5  50                    push   eax
0x00431DC6  ff158c80a200          call   dword ptr [0xa2808c]
0x00431DCC  50                    push   eax
0x00431DCD  8d4c2418              lea    ecx, [esp + 0x18]
0x00431DD1  688064a300            push   0xa36480  ; -> sub_A36480
0x00431DD6  51                    push   ecx
0x00431DD7  e8af025500            call   0x98208b  ; -> sub_98208B
0x00431DDC  83c410                add    esp, 0x10
0x00431DDF  8d542410              lea    edx, [esp + 0x10]
0x00431DE3  52                    push   edx
0x00431DE4  ff154481a200          call   dword ptr [0xa28144]
0x00431DEA  ff154081a200          call   dword ptr [0xa28140]
0x00431DF0  8bc5                  mov    eax, ebp
0x00431DF2  8b8c2414010000        mov    ecx, dword ptr [esp + 0x114]
0x00431DF9  5f                    pop    edi
0x00431DFA  5e                    pop    esi
0x00431DFB  5d                    pop    ebp
0x00431DFC  5b                    pop    ebx
0x00431DFD  33cc                  xor    ecx, esp
0x00431DFF  e8def35400            call   0x9811e2  ; -> sub_9811E2
0x00431E04  81c408010000          add    esp, 0x108
0x00431E0A  c20400                ret    4
0x00431E0D  cc                    int3   
0x00431E0E  cc                    int3   
0x00431E0F  cc                    int3   
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
