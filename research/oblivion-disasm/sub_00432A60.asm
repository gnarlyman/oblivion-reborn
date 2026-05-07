ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x00432A60
; VA: 0x00432A60  size: 0x200
; ============================================================
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
0x00432B7D  8b442414              mov    eax, dword ptr [esp + 0x14]
0x00432B81  8b4e10                mov    ecx, dword ptr [esi + 0x10]
0x00432B84  57                    push   edi
0x00432B85  50                    push   eax
0x00432B86  51                    push   ecx
0x00432B87  ff153c81a200          call   dword ptr [0xa2813c]
0x00432B8D  3bc7                  cmp    eax, edi
0x00432B8F  0f85ebfeffff          jne    0x432a80  ; -> sub_432A80
0x00432B95  8b7e14                mov    edi, dword ptr [esi + 0x14]
0x00432B98  83e7fe                and    edi, 0xfffffffe
0x00432B9B  8b6f08                mov    ebp, dword ptr [edi + 8]
0x00432B9E  85ed                  test   ebp, ebp
0x00432BA0  7424                  je     0x432bc6  ; -> sub_432BC6
0x00432BA2  8d5508                lea    edx, [ebp + 8]
0x00432BA5  52                    push   edx
0x00432BA6  ff157c80a200          call   dword ptr [0xa2807c]
0x00432BAC  85c0                  test   eax, eax
0x00432BAE  750f                  jne    0x432bbf  ; -> sub_432BBF
0x00432BB0  85ed                  test   ebp, ebp
0x00432BB2  740b                  je     0x432bbf  ; -> sub_432BBF
0x00432BB4  8b4500                mov    eax, dword ptr [ebp]
0x00432BB7  8b10                  mov    edx, dword ptr [eax]
0x00432BB9  6a01                  push   1
0x00432BBB  8bcd                  mov    ecx, ebp
0x00432BBD  ffd2                  call   edx
0x00432BBF  c7470800000000        mov    dword ptr [edi + 8], 0
0x00432BC6  8b461c                mov    eax, dword ptr [esi + 0x1c]
0x00432BC9  894708                mov    dword ptr [edi + 8], eax
0x00432BCC  83462001              add    dword ptr [esi + 0x20], 1
0x00432BD0  8b4620                mov    eax, dword ptr [esi + 0x20]
0x00432BD3  8b0e                  mov    ecx, dword ptr [esi]
0x00432BD5  897e1c                mov    dword ptr [esi + 0x1c], edi
0x00432BD8  3b4110                cmp    eax, dword ptr [ecx + 0x10]
0x00432BDB  7507                  jne    0x432be4  ; -> sub_432BE4
0x00432BDD  8bce                  mov    ecx, esi
0x00432BDF  e8ccfcffff            call   0x4328b0  ; -> sub_4328B0
0x00432BE4  8b5618                mov    edx, dword ptr [esi + 0x18]
0x00432BE7  895614                mov    dword ptr [esi + 0x14], edx
0x00432BEA  8b4618                mov    eax, dword ptr [esi + 0x18]
0x00432BED  8b4e08                mov    ecx, dword ptr [esi + 8]
0x00432BF0  83e0fe                and    eax, 0xfffffffe
0x00432BF3  8901                  mov    dword ptr [ecx], eax
0x00432BF5  e9c6feffff            jmp    0x432ac0  ; -> sub_432AC0
0x00432BFA  5f                    pop    edi
0x00432BFB  5e                    pop    esi
0x00432BFC  5d                    pop    ebp
0x00432BFD  32c0                  xor    al, al
0x00432BFF  5b                    pop    ebx
0x00432C00  83c40c                add    esp, 0xc
0x00432C03  c20c00                ret    0xc
0x00432C06  8b442424              mov    eax, dword ptr [esp + 0x24]
0x00432C0A  8b0e                  mov    ecx, dword ptr [esi]
0x00432C0C  8b11                  mov    edx, dword ptr [ecx]
0x00432C0E  8b522c                mov    edx, dword ptr [edx + 0x2c]
0x00432C11  53                    push   ebx
0x00432C12  50                    push   eax
0x00432C13  55                    push   ebp
0x00432C14  57                    push   edi
0x00432C15  ffd2                  call   edx
0x00432C17  5f                    pop    edi
0x00432C18  5e                    pop    esi
0x00432C19  5d                    pop    ebp
0x00432C1A  5b                    pop    ebx
0x00432C1B  83c40c                add    esp, 0xc
0x00432C1E  c20c00                ret    0xc
0x00432C21  cc                    int3   
0x00432C22  cc                    int3   
0x00432C23  cc                    int3   
0x00432C24  cc                    int3   
0x00432C25  cc                    int3   
0x00432C26  cc                    int3   
0x00432C27  cc                    int3   
0x00432C28  cc                    int3   
0x00432C29  cc                    int3   
0x00432C2A  cc                    int3   
0x00432C2B  cc                    int3   
0x00432C2C  cc                    int3   
0x00432C2D  cc                    int3   
0x00432C2E  cc                    int3   
0x00432C2F  cc                    int3   
0x00432C30  6aff                  push   -1
0x00432C32  6828cc9a00            push   0x9acc28  ; -> sub_9ACC28
0x00432C37  64a100000000          mov    eax, dword ptr fs:[0]
0x00432C3D  50                    push   eax
0x00432C3E  83ec10                sub    esp, 0x10
0x00432C41  53                    push   ebx
0x00432C42  55                    push   ebp
0x00432C43  56                    push   esi
0x00432C44  57                    push   edi
0x00432C45  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00432C4A  33c4                  xor    eax, esp
0x00432C4C  50                    push   eax
0x00432C4D  8d442424              lea    eax, [esp + 0x24]
0x00432C51  64a300000000          mov    dword ptr fs:[0], eax
0x00432C57  8bf1                  mov    esi, ecx
0x00432C59  8b06                  mov    eax, dword ptr [esi]
0x00432C5B  8b480c                mov    ecx, dword ptr [eax + 0xc]

