; ============================================================
; sub_433380  (Crash 5: +0xDC)
; VA: 0x00433380  size: 0x200
; ============================================================
0x00433380  83ec0c                sub    esp, 0xc
0x00433383  55                    push   ebp
0x00433384  8b2d3c81a200          mov    ebp, dword ptr [0xa2813c]
0x0043338A  56                    push   esi
0x0043338B  57                    push   edi
0x0043338C  8bf1                  mov    esi, ecx
0x0043338E  8bff                  mov    edi, edi
0x00433390  8b442424              mov    eax, dword ptr [esp + 0x24]
0x00433394  8b4c2420              mov    ecx, dword ptr [esp + 0x20]
0x00433398  8b54241c              mov    edx, dword ptr [esp + 0x1c]
0x0043339C  50                    push   eax
0x0043339D  51                    push   ecx
0x0043339E  52                    push   edx
0x0043339F  8bce                  mov    ecx, esi
0x004333A1  e8baf6ffff            call   0x432a60  ; -> sub_432A60
0x004333A6  84c0                  test   al, al
0x004333A8  0f84b0000000          je     0x43345e  ; -> sub_43345E
0x004333AE  8b4618                mov    eax, dword ptr [esi + 0x18]
0x004333B1  83e0fe                and    eax, 0xfffffffe
0x004333B4  8944240c              mov    dword ptr [esp + 0xc], eax
0x004333B8  8b44240c              mov    eax, dword ptr [esp + 0xc]
0x004333BC  83e0fe                and    eax, 0xfffffffe
0x004333BF  8944240c              mov    dword ptr [esp + 0xc], eax
0x004333C3  8b4618                mov    eax, dword ptr [esi + 0x18]
0x004333C6  83e0fe                and    eax, 0xfffffffe
0x004333C9  89442410              mov    dword ptr [esp + 0x10], eax
0x004333CD  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x004333D1  8b7c240c              mov    edi, dword ptr [esp + 0xc]
0x004333D5  83c901                or     ecx, 1
0x004333D8  894c2410              mov    dword ptr [esp + 0x10], ecx
0x004333DC  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x004333E0  8b4614                mov    eax, dword ptr [esi + 0x14]
0x004333E3  57                    push   edi
0x004333E4  83e0fe                and    eax, 0xfffffffe
0x004333E7  51                    push   ecx
0x004333E8  83c00c                add    eax, 0xc
0x004333EB  50                    push   eax
0x004333EC  ffd5                  call   ebp
0x004333EE  3bc7                  cmp    eax, edi
0x004333F0  759e                  jne    0x433390  ; -> sub_433390
0x004333F2  8b7e14                mov    edi, dword ptr [esi + 0x14]
0x004333F5  83e7fe                and    edi, 0xfffffffe
0x004333F8  83c708                add    edi, 8
0x004333FB  53                    push   ebx
0x004333FC  8b1f                  mov    ebx, dword ptr [edi]
0x004333FE  85db                  test   ebx, ebx
0x00433400  7422                  je     0x433424  ; -> sub_433424
0x00433402  8d5308                lea    edx, [ebx + 8]
0x00433405  52                    push   edx
0x00433406  ff157c80a200          call   dword ptr [0xa2807c]
0x0043340C  85c0                  test   eax, eax
0x0043340E  750e                  jne    0x43341e  ; -> sub_43341E
0x00433410  85db                  test   ebx, ebx
0x00433412  740a                  je     0x43341e  ; -> sub_43341E
0x00433414  8b03                  mov    eax, dword ptr [ebx]
0x00433416  8b10                  mov    edx, dword ptr [eax]
0x00433418  6a01                  push   1
0x0043341A  8bcb                  mov    ecx, ebx
0x0043341C  ffd2                  call   edx
0x0043341E  c70700000000          mov    dword ptr [edi], 0
0x00433424  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00433427  83e0fe                and    eax, 0xfffffffe
0x0043342A  89442418              mov    dword ptr [esp + 0x18], eax
0x0043342E  8b442418              mov    eax, dword ptr [esp + 0x18]
0x00433432  83e0fe                and    eax, 0xfffffffe
0x00433435  89442418              mov    dword ptr [esp + 0x18], eax
0x00433439  8b7c2418              mov    edi, dword ptr [esp + 0x18]
0x0043343D  8b442410              mov    eax, dword ptr [esp + 0x10]
0x00433441  8b4e10                mov    ecx, dword ptr [esi + 0x10]
0x00433444  57                    push   edi
0x00433445  50                    push   eax
0x00433446  51                    push   ecx
0x00433447  ffd5                  call   ebp
0x00433449  3bc7                  cmp    eax, edi
0x0043344B  5b                    pop    ebx
0x0043344C  7514                  jne    0x433462  ; -> sub_433462
0x0043344E  8b4e14                mov    ecx, dword ptr [esi + 0x14]
0x00433451  83e1fe                and    ecx, 0xfffffffe
0x00433454  51                    push   ecx
0x00433455  8bce                  mov    ecx, esi
0x00433457  e8a4f5ffff            call   0x432a00  ; -> sub_432A00
0x0043345C  eb1a                  jmp    0x433478  ; -> sub_433478
0x0043345E  32c0                  xor    al, al
0x00433460  eb21                  jmp    0x433483  ; -> sub_433483
0x00433462  8b542424              mov    edx, dword ptr [esp + 0x24]
0x00433466  8b442420              mov    eax, dword ptr [esp + 0x20]
0x0043346A  8b4c241c              mov    ecx, dword ptr [esp + 0x1c]
0x0043346E  52                    push   edx
0x0043346F  50                    push   eax
0x00433470  51                    push   ecx
0x00433471  8bce                  mov    ecx, esi
0x00433473  e8e8f5ffff            call   0x432a60  ; -> sub_432A60
0x00433478  8b0e                  mov    ecx, dword ptr [esi]
0x0043347A  8b11                  mov    edx, dword ptr [ecx]
0x0043347C  8b4234                mov    eax, dword ptr [edx + 0x34]
0x0043347F  ffd0                  call   eax
0x00433481  b001                  mov    al, 1
0x00433483  8b4e04                mov    ecx, dword ptr [esi + 4]
0x00433486  c70100000000          mov    dword ptr [ecx], 0
0x0043348C  8b5608                mov    edx, dword ptr [esi + 8]
0x0043348F  c70200000000          mov    dword ptr [edx], 0
0x00433495  8b4e0c                mov    ecx, dword ptr [esi + 0xc]
0x00433498  5f                    pop    edi
0x00433499  5e                    pop    esi
0x0043349A  c70100000000          mov    dword ptr [ecx], 0
0x004334A0  5d                    pop    ebp
0x004334A1  83c40c                add    esp, 0xc
0x004334A4  c20c00                ret    0xc
0x004334A7  cc                    int3   
0x004334A8  cc                    int3   
0x004334A9  cc                    int3   
0x004334AA  cc                    int3   
0x004334AB  cc                    int3   
0x004334AC  cc                    int3   
0x004334AD  cc                    int3   
0x004334AE  cc                    int3   
0x004334AF  cc                    int3   
0x004334B0  83ec08                sub    esp, 8
0x004334B3  53                    push   ebx
0x004334B4  8b1d3c81a200          mov    ebx, dword ptr [0xa2813c]
0x004334BA  55                    push   ebp
0x004334BB  8b6c2418              mov    ebp, dword ptr [esp + 0x18]
0x004334BF  56                    push   esi
0x004334C0  57                    push   edi
0x004334C1  8bf1                  mov    esi, ecx
0x004334C3  8b44241c              mov    eax, dword ptr [esp + 0x1c]
0x004334C7  55                    push   ebp
0x004334C8  50                    push   eax
0x004334C9  8bce                  mov    ecx, esi
0x004334CB  e860f7ffff            call   0x432c30  ; -> sub_432C30
0x004334D0  84c0                  test   al, al
0x004334D2  747d                  je     0x433551  ; -> sub_433551
0x004334D4  8b4618                mov    eax, dword ptr [esi + 0x18]
0x004334D7  83e0fe                and    eax, 0xfffffffe
0x004334DA  89442420              mov    dword ptr [esp + 0x20], eax
0x004334DE  8b4c2420              mov    ecx, dword ptr [esp + 0x20]
0x004334E2  8b4618                mov    eax, dword ptr [esi + 0x18]
0x004334E5  83e0fe                and    eax, 0xfffffffe
0x004334E8  83e1fe                and    ecx, 0xfffffffe
0x004334EB  894c2420              mov    dword ptr [esp + 0x20], ecx
0x004334EF  89442410              mov    dword ptr [esp + 0x10], eax
0x004334F3  8b542410              mov    edx, dword ptr [esp + 0x10]
0x004334F7  8b7c2420              mov    edi, dword ptr [esp + 0x20]
0x004334FB  83ca01                or     edx, 1
0x004334FE  89542410              mov    dword ptr [esp + 0x10], edx
0x00433502  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x00433506  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00433509  57                    push   edi
0x0043350A  83e0fe                and    eax, 0xfffffffe
0x0043350D  51                    push   ecx
0x0043350E  83c00c                add    eax, 0xc
0x00433511  50                    push   eax
0x00433512  ffd3                  call   ebx
0x00433514  3bc7                  cmp    eax, edi
0x00433516  75ab                  jne    0x4334c3  ; -> sub_4334C3
0x00433518  8b4614                mov    eax, dword ptr [esi + 0x14]
0x0043351B  83e0fe                and    eax, 0xfffffffe
0x0043351E  89442414              mov    dword ptr [esp + 0x14], eax
0x00433522  8b442414              mov    eax, dword ptr [esp + 0x14]
0x00433526  83e0fe                and    eax, 0xfffffffe
0x00433529  89442414              mov    dword ptr [esp + 0x14], eax
0x0043352D  8b7c2414              mov    edi, dword ptr [esp + 0x14]
0x00433531  8b442420              mov    eax, dword ptr [esp + 0x20]
0x00433535  8b4e10                mov    ecx, dword ptr [esi + 0x10]
0x00433538  57                    push   edi
0x00433539  50                    push   eax
0x0043353A  51                    push   ecx
0x0043353B  ffd3                  call   ebx
0x0043353D  3bc7                  cmp    eax, edi
0x0043353F  7514                  jne    0x433555  ; -> sub_433555
0x00433541  8b4e14                mov    ecx, dword ptr [esi + 0x14]
0x00433544  83e1fe                and    ecx, 0xfffffffe
0x00433547  51                    push   ecx
0x00433548  8bce                  mov    ecx, esi
0x0043354A  e8b1f4ffff            call   0x432a00  ; -> sub_432A00
0x0043354F  eb11                  jmp    0x433562  ; -> sub_433562
0x00433551  32c0                  xor    al, al
0x00433553  eb0f                  jmp    0x433564  ; -> sub_433564
0x00433555  8b54241c              mov    edx, dword ptr [esp + 0x1c]
0x00433559  55                    push   ebp
0x0043355A  52                    push   edx
0x0043355B  8bce                  mov    ecx, esi
0x0043355D  e8cef6ffff            call   0x432c30  ; -> sub_432C30
0x00433562  b001                  mov    al, 1
0x00433564  8b4e04                mov    ecx, dword ptr [esi + 4]
0x00433567  c70100000000          mov    dword ptr [ecx], 0
0x0043356D  8b5608                mov    edx, dword ptr [esi + 8]
0x00433570  5f                    pop    edi
0x00433571  c70200000000          mov    dword ptr [edx], 0
0x00433577  8b4e0c                mov    ecx, dword ptr [esi + 0xc]
0x0043357A  5e                    pop    esi
0x0043357B  5d                    pop    ebp
