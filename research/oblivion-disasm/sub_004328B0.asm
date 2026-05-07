; ============================================================
; sub_4328B0  Set3D-chain bottom (Crash 5: +0x5A)
; VA: 0x004328B0  size: 0x180
; ============================================================
0x004328B0  83ec0c                sub    esp, 0xc
0x004328B3  53                    push   ebx
0x004328B4  55                    push   ebp
0x004328B5  57                    push   edi
0x004328B6  8bf9                  mov    edi, ecx
0x004328B8  8b07                  mov    eax, dword ptr [edi]
0x004328BA  8b4814                mov    ecx, dword ptr [eax + 0x14]
0x004328BD  8b01                  mov    eax, dword ptr [ecx]
0x004328BF  8d2c40                lea    ebp, [eax + eax*2]
0x004328C2  33c9                  xor    ecx, ecx
0x004328C4  8bc5                  mov    eax, ebp
0x004328C6  ba04000000            mov    edx, 4
0x004328CB  f7e2                  mul    edx
0x004328CD  0f90c1                seto   cl
0x004328D0  f7d9                  neg    ecx
0x004328D2  0bc8                  or     ecx, eax
0x004328D4  51                    push   ecx
0x004328D5  e826f6fcff            call   0x401f00  ; -> sub_401F00
0x004328DA  8b0f                  mov    ecx, dword ptr [edi]
0x004328DC  8b5104                mov    edx, dword ptr [ecx + 4]
0x004328DF  8bd8                  mov    ebx, eax
0x004328E1  8d04ad00000000        lea    eax, [ebp*4]
0x004328E8  50                    push   eax
0x004328E9  52                    push   edx
0x004328EA  53                    push   ebx
0x004328EB  895c2424              mov    dword ptr [esp + 0x24], ebx
0x004328EF  e8cce95400            call   0x9812c0  ; -> sub_9812C0
0x004328F4  33c9                  xor    ecx, ecx
0x004328F6  83c410                add    esp, 0x10
0x004328F9  394f1c                cmp    dword ptr [edi + 0x1c], ecx
0x004328FC  894c240c              mov    dword ptr [esp + 0xc], ecx
0x00432900  894c2410              mov    dword ptr [esp + 0x10], ecx
0x00432904  7467                  je     0x43296d  ; -> sub_43296D
0x00432906  56                    push   esi
0x00432907  8b771c                mov    esi, dword ptr [edi + 0x1c]
0x0043290A  8b4608                mov    eax, dword ptr [esi + 8]
0x0043290D  89471c                mov    dword ptr [edi + 0x1c], eax
0x00432910  33c0                  xor    eax, eax
0x00432912  3be9                  cmp    ebp, ecx
0x00432914  760c                  jbe    0x432922  ; -> sub_432922
0x00432916  3b3483                cmp    esi, dword ptr [ebx + eax*4]
0x00432919  7470                  je     0x43298b  ; -> sub_43298B
0x0043291B  83c001                add    eax, 1
0x0043291E  3bc5                  cmp    eax, ebp
0x00432920  72f4                  jb     0x432916  ; -> sub_432916
0x00432922  8b5604                mov    edx, dword ptr [esi + 4]
0x00432925  894e08                mov    dword ptr [esi + 8], ecx
0x00432928  8b0f                  mov    ecx, dword ptr [edi]
0x0043292A  8b01                  mov    eax, dword ptr [ecx]
0x0043292C  8b4020                mov    eax, dword ptr [eax + 0x20]
0x0043292F  52                    push   edx
0x00432930  8b16                  mov    edx, dword ptr [esi]
0x00432932  52                    push   edx
0x00432933  ffd0                  call   eax
0x00432935  8b5e08                mov    ebx, dword ptr [esi + 8]
0x00432938  85db                  test   ebx, ebx
0x0043293A  741c                  je     0x432958  ; -> sub_432958
0x0043293C  8d4b08                lea    ecx, [ebx + 8]
0x0043293F  51                    push   ecx
0x00432940  ff157c80a200          call   dword ptr [0xa2807c]
0x00432946  85c0                  test   eax, eax
0x00432948  750e                  jne    0x432958  ; -> sub_432958
0x0043294A  85db                  test   ebx, ebx
0x0043294C  740a                  je     0x432958  ; -> sub_432958
0x0043294E  8b13                  mov    edx, dword ptr [ebx]
0x00432950  8b02                  mov    eax, dword ptr [edx]
0x00432952  6a01                  push   1
0x00432954  8bcb                  mov    ecx, ebx
0x00432956  ffd0                  call   eax
0x00432958  56                    push   esi
0x00432959  e8c2f5fcff            call   0x401f20  ; -> sub_401F20
0x0043295E  8b5c241c              mov    ebx, dword ptr [esp + 0x1c]
0x00432962  83c404                add    esp, 4
0x00432965  33c9                  xor    ecx, ecx
0x00432967  394f1c                cmp    dword ptr [edi + 0x1c], ecx
0x0043296A  759b                  jne    0x432907  ; -> sub_432907
0x0043296C  5e                    pop    esi
0x0043296D  53                    push   ebx
0x0043296E  e8adf5fcff            call   0x401f20  ; -> sub_401F20
0x00432973  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x00432977  8b542414              mov    edx, dword ptr [esp + 0x14]
0x0043297B  83c404                add    esp, 4
0x0043297E  894f1c                mov    dword ptr [edi + 0x1c], ecx
0x00432981  895720                mov    dword ptr [edi + 0x20], edx
0x00432984  5f                    pop    edi
0x00432985  5d                    pop    ebp
0x00432986  5b                    pop    ebx
0x00432987  83c40c                add    esp, 0xc
0x0043298A  c3                    ret    
0x0043298B  8b542410              mov    edx, dword ptr [esp + 0x10]
0x0043298F  8344241401            add    dword ptr [esp + 0x14], 1
0x00432994  895608                mov    dword ptr [esi + 8], edx
0x00432997  89742410              mov    dword ptr [esp + 0x10], esi
0x0043299B  ebca                  jmp    0x432967  ; -> sub_432967
0x0043299D  cc                    int3   
0x0043299E  cc                    int3   
0x0043299F  cc                    int3   
0x004329A0  53                    push   ebx
0x004329A1  8b5c2408              mov    ebx, dword ptr [esp + 8]
0x004329A5  56                    push   esi
0x004329A6  57                    push   edi
0x004329A7  8b7b04                mov    edi, dword ptr [ebx + 4]
0x004329AA  85ff                  test   edi, edi
0x004329AC  8bf1                  mov    esi, ecx
0x004329AE  7423                  je     0x4329d3  ; -> sub_4329D3
0x004329B0  8d4708                lea    eax, [edi + 8]
0x004329B3  50                    push   eax
0x004329B4  ff157c80a200          call   dword ptr [0xa2807c]
0x004329BA  85c0                  test   eax, eax
0x004329BC  750e                  jne    0x4329cc  ; -> sub_4329CC
0x004329BE  85ff                  test   edi, edi
0x004329C0  740a                  je     0x4329cc  ; -> sub_4329CC
0x004329C2  8b17                  mov    edx, dword ptr [edi]
0x004329C4  8b02                  mov    eax, dword ptr [edx]
0x004329C6  6a01                  push   1
0x004329C8  8bcf                  mov    ecx, edi
0x004329CA  ffd0                  call   eax
0x004329CC  c7430400000000        mov    dword ptr [ebx + 4], 0
0x004329D3  8b4e10                mov    ecx, dword ptr [esi + 0x10]
0x004329D6  894b04                mov    dword ptr [ebx + 4], ecx
0x004329D9  83460c01              add    dword ptr [esi + 0xc], 1
0x004329DD  8b460c                mov    eax, dword ptr [esi + 0xc]
0x004329E0  8b16                  mov    edx, dword ptr [esi]
0x004329E2  895e10                mov    dword ptr [esi + 0x10], ebx
0x004329E5  3b420c                cmp    eax, dword ptr [edx + 0xc]
0x004329E8  7507                  jne    0x4329f1  ; -> sub_4329F1
0x004329EA  8bce                  mov    ecx, esi
0x004329EC  e84ffdffff            call   0x432740  ; -> sub_432740
0x004329F1  5f                    pop    edi
0x004329F2  5e                    pop    esi
0x004329F3  5b                    pop    ebx
0x004329F4  c20400                ret    4
0x004329F7  cc                    int3   
0x004329F8  cc                    int3   
0x004329F9  cc                    int3   
0x004329FA  cc                    int3   
0x004329FB  cc                    int3   
0x004329FC  cc                    int3   
0x004329FD  cc                    int3   
0x004329FE  cc                    int3   
0x004329FF  cc                    int3   
0x00432A00  53                    push   ebx
0x00432A01  8b5c2408              mov    ebx, dword ptr [esp + 8]
0x00432A05  56                    push   esi
0x00432A06  57                    push   edi
0x00432A07  8b7b08                mov    edi, dword ptr [ebx + 8]
0x00432A0A  85ff                  test   edi, edi
0x00432A0C  8bf1                  mov    esi, ecx
0x00432A0E  7423                  je     0x432a33  ; -> sub_432A33
0x00432A10  8d4708                lea    eax, [edi + 8]
0x00432A13  50                    push   eax
0x00432A14  ff157c80a200          call   dword ptr [0xa2807c]
0x00432A1A  85c0                  test   eax, eax
0x00432A1C  750e                  jne    0x432a2c  ; -> sub_432A2C
0x00432A1E  85ff                  test   edi, edi
0x00432A20  740a                  je     0x432a2c  ; -> sub_432A2C
0x00432A22  8b17                  mov    edx, dword ptr [edi]
0x00432A24  8b02                  mov    eax, dword ptr [edx]
0x00432A26  6a01                  push   1
0x00432A28  8bcf                  mov    ecx, edi
0x00432A2A  ffd0                  call   eax
