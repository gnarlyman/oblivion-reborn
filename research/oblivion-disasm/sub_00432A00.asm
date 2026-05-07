; ============================================================
; sub_432A00  (Crash 5: +0x51)
; VA: 0x00432A00  size: 0x180
; ============================================================
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
0x00432A2C  c7430800000000        mov    dword ptr [ebx + 8], 0
0x00432A33  8b4e1c                mov    ecx, dword ptr [esi + 0x1c]
0x00432A36  894b08                mov    dword ptr [ebx + 8], ecx
0x00432A39  83462001              add    dword ptr [esi + 0x20], 1
0x00432A3D  8b4620                mov    eax, dword ptr [esi + 0x20]
0x00432A40  8b16                  mov    edx, dword ptr [esi]
0x00432A42  895e1c                mov    dword ptr [esi + 0x1c], ebx
0x00432A45  3b4210                cmp    eax, dword ptr [edx + 0x10]
0x00432A48  7507                  jne    0x432a51  ; -> sub_432A51
0x00432A4A  8bce                  mov    ecx, esi
0x00432A4C  e85ffeffff            call   0x4328b0  ; -> sub_4328B0
0x00432A51  5f                    pop    edi
0x00432A52  5e                    pop    esi
0x00432A53  5b                    pop    ebx
0x00432A54  c20400                ret    4
0x00432A57  cc                    int3   
0x00432A58  cc                    int3   
0x00432A59  cc                    int3   
0x00432A5A  cc                    int3   
0x00432A5B  cc                    int3   
0x00432A5C  cc                    int3   
0x00432A5D  cc                    int3   
0x00432A5E  cc                    int3   
0x00432A5F  cc                    int3   
0x00432A60  83ec0c                sub    esp, 0xc
0x00432A63  8b542410              mov    edx, dword ptr [esp + 0x10]
0x00432A67  53                    push   ebx
0x00432A68  8b5c241c              mov    ebx, dword ptr [esp + 0x1c]
0x00432A6C  55                    push   ebp
0x00432A6D  56                    push   esi
0x00432A6E  8bf1                  mov    esi, ecx
0x00432A70  8b06                  mov    eax, dword ptr [esi]
0x00432A72  8b480c                mov    ecx, dword ptr [eax + 0xc]
0x00432A75  8d0491                lea    eax, [ecx + edx*4]
0x00432A78  57                    push   edi
0x00432A79  89442418              mov    dword ptr [esp + 0x18], eax
0x00432A7D  8d4900                lea    ecx, [ecx]
0x00432A80  8b4c2418              mov    ecx, dword ptr [esp + 0x18]
0x00432A84  894e10                mov    dword ptr [esi + 0x10], ecx
0x00432A87  8bd1                  mov    edx, ecx
0x00432A89  8b02                  mov    eax, dword ptr [edx]
0x00432A8B  894614                mov    dword ptr [esi + 0x14], eax
0x00432A8E  8b4e14                mov    ecx, dword ptr [esi + 0x14]
0x00432A91  8b5608                mov    edx, dword ptr [esi + 8]
0x00432A94  83e1fe                and    ecx, 0xfffffffe
0x00432A97  890a                  mov    dword ptr [edx], ecx
0x00432A99  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00432A9C  83e0fe                and    eax, 0xfffffffe
0x00432A9F  89442410              mov    dword ptr [esp + 0x10], eax
0x00432AA3  8b442410              mov    eax, dword ptr [esp + 0x10]
0x00432AA7  83e0fe                and    eax, 0xfffffffe
0x00432AAA  89442410              mov    dword ptr [esp + 0x10], eax
0x00432AAE  8b4610                mov    eax, dword ptr [esi + 0x10]
0x00432AB1  8b00                  mov    eax, dword ptr [eax]
0x00432AB3  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x00432AB7  3bc1                  cmp    eax, ecx
0x00432AB9  75c5                  jne    0x432a80  ; -> sub_432A80
0x00432ABB  eb03                  jmp    0x432ac0  ; -> sub_432AC0
0x00432ABD  8d4900                lea    ecx, [ecx]
0x00432AC0  8b5614                mov    edx, dword ptr [esi + 0x14]
0x00432AC3  f7c2feffffff          test   edx, 0xfffffffe
0x00432AC9  0f842b010000          je     0x432bfa  ; -> sub_432BFA
0x00432ACF  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00432AD2  83e0fe                and    eax, 0xfffffffe
0x00432AD5  8b480c                mov    ecx, dword ptr [eax + 0xc]
0x00432AD8  894e18                mov    dword ptr [esi + 0x18], ecx
0x00432ADB  8b5618                mov    edx, dword ptr [esi + 0x18]
0x00432ADE  8b4604                mov    eax, dword ptr [esi + 4]
0x00432AE1  83e2fe                and    edx, 0xfffffffe
0x00432AE4  8910                  mov    dword ptr [eax], edx
0x00432AE6  8b4e18                mov    ecx, dword ptr [esi + 0x18]
0x00432AE9  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00432AEC  83e0fe                and    eax, 0xfffffffe
0x00432AEF  8b500c                mov    edx, dword ptr [eax + 0xc]
0x00432AF2  3bca                  cmp    ecx, edx
0x00432AF4  758a                  jne    0x432a80  ; -> sub_432A80
0x00432AF6  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00432AF9  83e0fe                and    eax, 0xfffffffe
0x00432AFC  8b38                  mov    edi, dword ptr [eax]
0x00432AFE  8b6804                mov    ebp, dword ptr [eax + 4]
0x00432B01  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00432B04  83e0fe                and    eax, 0xfffffffe
0x00432B07  89442420              mov    dword ptr [esp + 0x20], eax
0x00432B0B  8b442420              mov    eax, dword ptr [esp + 0x20]
0x00432B0F  83e0fe                and    eax, 0xfffffffe
0x00432B12  89442420              mov    dword ptr [esp + 0x20], eax
0x00432B16  8b4610                mov    eax, dword ptr [esi + 0x10]
0x00432B19  8b00                  mov    eax, dword ptr [eax]
0x00432B1B  8b4c2420              mov    ecx, dword ptr [esp + 0x20]
0x00432B1F  3bc1                  cmp    eax, ecx
0x00432B21  0f8559ffffff          jne    0x432a80  ; -> sub_432A80
0x00432B27  8b5618                mov    edx, dword ptr [esi + 0x18]
0x00432B2A  f6c201                test   dl, 1
0x00432B2D  7535                  jne    0x432b64  ; -> sub_432B64
0x00432B2F  8b542424              mov    edx, dword ptr [esp + 0x24]
0x00432B33  8b0e                  mov    ecx, dword ptr [esi]
0x00432B35  8b01                  mov    eax, dword ptr [ecx]
0x00432B37  8b4028                mov    eax, dword ptr [eax + 0x28]
0x00432B3A  53                    push   ebx
0x00432B3B  52                    push   edx
0x00432B3C  55                    push   ebp
0x00432B3D  57                    push   edi
0x00432B3E  ffd0                  call   eax
0x00432B40  84c0                  test   al, al
0x00432B42  0f85be000000          jne    0x432c06  ; -> sub_432C06
0x00432B48  8b4e14                mov    ecx, dword ptr [esi + 0x14]
0x00432B4B  83e1fe                and    ecx, 0xfffffffe
0x00432B4E  83c10c                add    ecx, 0xc
0x00432B51  894e10                mov    dword ptr [esi + 0x10], ecx
0x00432B54  8b5614                mov    edx, dword ptr [esi + 0x14]
0x00432B57  8b460c                mov    eax, dword ptr [esi + 0xc]
0x00432B5A  83e2fe                and    edx, 0xfffffffe
0x00432B5D  8910                  mov    dword ptr [eax], edx
0x00432B5F  e980000000            jmp    0x432be4  ; -> sub_432BE4
0x00432B64  8b4618                mov    eax, dword ptr [esi + 0x18]
0x00432B67  83e0fe                and    eax, 0xfffffffe
0x00432B6A  89442414              mov    dword ptr [esp + 0x14], eax
0x00432B6E  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x00432B72  8b7c2420              mov    edi, dword ptr [esp + 0x20]
0x00432B76  83e1fe                and    ecx, 0xfffffffe
0x00432B79  894c2414              mov    dword ptr [esp + 0x14], ecx
