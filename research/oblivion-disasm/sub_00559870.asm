ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x00559870
; VA: 0x00559870  size: 0x200
; ============================================================
0x00559870  53                    push   ebx
0x00559871  8b5c2408              mov    ebx, dword ptr [esp + 8]
0x00559875  85db                  test   ebx, ebx
0x00559877  56                    push   esi
0x00559878  8bf1                  mov    esi, ecx
0x0055987A  7507                  jne    0x559883  ; -> sub_559883
0x0055987C  5e                    pop    esi
0x0055987D  32c0                  xor    al, al
0x0055987F  5b                    pop    ebx
0x00559880  c20800                ret    8
0x00559883  57                    push   edi
0x00559884  8b7c2414              mov    edi, dword ptr [esp + 0x14]
0x00559888  57                    push   edi
0x00559889  e8e2d1ffff            call   0x556a70  ; -> sub_556A70
0x0055988E  84c0                  test   al, al
0x00559890  743f                  je     0x5598d1  ; -> sub_5598D1
0x00559892  d9e8                  fld1   
0x00559894  8b07                  mov    eax, dword ptr [edi]
0x00559896  6a00                  push   0
0x00559898  51                    push   ecx
0x00559899  d91c24                fstp   dword ptr [esp]
0x0055989C  50                    push   eax
0x0055989D  53                    push   ebx
0x0055989E  8bce                  mov    ecx, esi
0x005598A0  e89befffff            call   0x558840  ; -> sub_558840
0x005598A5  84c0                  test   al, al
0x005598A7  7530                  jne    0x5598d9  ; -> sub_5598D9
0x005598A9  8b37                  mov    esi, dword ptr [edi]
0x005598AB  85f6                  test   esi, esi
0x005598AD  7422                  je     0x5598d1  ; -> sub_5598D1
0x005598AF  8d4604                lea    eax, [esi + 4]
0x005598B2  50                    push   eax
0x005598B3  ff157c80a200          call   dword ptr [0xa2807c]
0x005598B9  85c0                  test   eax, eax
0x005598BB  750e                  jne    0x5598cb  ; -> sub_5598CB
0x005598BD  85f6                  test   esi, esi
0x005598BF  740a                  je     0x5598cb  ; -> sub_5598CB
0x005598C1  8b16                  mov    edx, dword ptr [esi]
0x005598C3  8b02                  mov    eax, dword ptr [edx]
0x005598C5  6a01                  push   1
0x005598C7  8bce                  mov    ecx, esi
0x005598C9  ffd0                  call   eax
0x005598CB  c70700000000          mov    dword ptr [edi], 0
0x005598D1  5f                    pop    edi
0x005598D2  5e                    pop    esi
0x005598D3  32c0                  xor    al, al
0x005598D5  5b                    pop    ebx
0x005598D6  c20800                ret    8
0x005598D9  5f                    pop    edi
0x005598DA  5e                    pop    esi
0x005598DB  b001                  mov    al, 1
0x005598DD  5b                    pop    ebx
0x005598DE  c20800                ret    8
0x005598E1  cc                    int3   
0x005598E2  cc                    int3   
0x005598E3  cc                    int3   
0x005598E4  cc                    int3   
0x005598E5  cc                    int3   
0x005598E6  cc                    int3   
0x005598E7  cc                    int3   
0x005598E8  cc                    int3   
0x005598E9  cc                    int3   
0x005598EA  cc                    int3   
0x005598EB  cc                    int3   
0x005598EC  cc                    int3   
0x005598ED  cc                    int3   
0x005598EE  cc                    int3   
0x005598EF  cc                    int3   
0x005598F0  83ec08                sub    esp, 8
0x005598F3  53                    push   ebx
0x005598F4  56                    push   esi
0x005598F5  8bf1                  mov    esi, ecx
0x005598F7  8b5e08                mov    ebx, dword ptr [esi + 8]
0x005598FA  395e04                cmp    dword ptr [esi + 4], ebx
0x005598FD  57                    push   edi
0x005598FE  7605                  jbe    0x559905  ; -> sub_559905
0x00559900  e859b44200            call   0x984d5e  ; -> sub_984D5E
0x00559905  8b7e04                mov    edi, dword ptr [esi + 4]
0x00559908  3b7e08                cmp    edi, dword ptr [esi + 8]
0x0055990B  7605                  jbe    0x559912  ; -> sub_559912
0x0055990D  e84cb44200            call   0x984d5e  ; -> sub_984D5E
0x00559912  53                    push   ebx
0x00559913  56                    push   esi
0x00559914  57                    push   edi
0x00559915  56                    push   esi
0x00559916  8d44241c              lea    eax, [esp + 0x1c]
0x0055991A  50                    push   eax
0x0055991B  8bce                  mov    ecx, esi
0x0055991D  e81ef9ffff            call   0x559240  ; -> sub_559240
0x00559922  5f                    pop    edi
0x00559923  5e                    pop    esi
0x00559924  5b                    pop    ebx
0x00559925  83c408                add    esp, 8
0x00559928  c3                    ret    
0x00559929  cc                    int3   
0x0055992A  cc                    int3   
0x0055992B  cc                    int3   
0x0055992C  cc                    int3   
0x0055992D  cc                    int3   
0x0055992E  cc                    int3   
0x0055992F  cc                    int3   
0x00559930  53                    push   ebx
0x00559931  56                    push   esi
0x00559932  8bf1                  mov    esi, ecx
0x00559934  8b5e08                mov    ebx, dword ptr [esi + 8]
0x00559937  395e04                cmp    dword ptr [esi + 4], ebx
0x0055993A  57                    push   edi
0x0055993B  7605                  jbe    0x559942  ; -> sub_559942
0x0055993D  e81cb44200            call   0x984d5e  ; -> sub_984D5E
0x00559942  8b7e04                mov    edi, dword ptr [esi + 4]
0x00559945  3b7e08                cmp    edi, dword ptr [esi + 8]
0x00559948  7605                  jbe    0x55994f  ; -> sub_55994F
0x0055994A  e80fb44200            call   0x984d5e  ; -> sub_984D5E
0x0055994F  3bfb                  cmp    edi, ebx
0x00559951  741f                  je     0x559972  ; -> sub_559972
0x00559953  8b4608                mov    eax, dword ptr [esi + 8]
0x00559956  57                    push   edi
0x00559957  50                    push   eax
0x00559958  53                    push   ebx
0x00559959  e8b2ecffff            call   0x558610  ; -> sub_558610
0x0055995E  8b4e08                mov    ecx, dword ptr [esi + 8]
0x00559961  83c40c                add    esp, 0xc
0x00559964  51                    push   ecx
0x00559965  8bf8                  mov    edi, eax
0x00559967  57                    push   edi
0x00559968  8bce                  mov    ecx, esi
0x0055996A  e8d1ddffff            call   0x557740  ; -> sub_557740
0x0055996F  897e08                mov    dword ptr [esi + 8], edi
0x00559972  5f                    pop    edi
0x00559973  5e                    pop    esi
0x00559974  5b                    pop    ebx
0x00559975  c3                    ret    
0x00559976  cc                    int3   
0x00559977  cc                    int3   
0x00559978  cc                    int3   
0x00559979  cc                    int3   
0x0055997A  cc                    int3   
0x0055997B  cc                    int3   
0x0055997C  cc                    int3   
0x0055997D  cc                    int3   
0x0055997E  cc                    int3   
0x0055997F  cc                    int3   
0x00559980  51                    push   ecx
0x00559981  8b542410              mov    edx, dword ptr [esp + 0x10]
0x00559985  c6042400              mov    byte ptr [esp], 0
0x00559989  8b0424                mov    eax, dword ptr [esp]
0x0055998C  50                    push   eax
0x0055998D  8b442414              mov    eax, dword ptr [esp + 0x14]
0x00559991  52                    push   edx
0x00559992  8b542410              mov    edx, dword ptr [esp + 0x10]
0x00559996  51                    push   ecx
0x00559997  8b4c2418              mov    ecx, dword ptr [esp + 0x18]
0x0055999B  50                    push   eax
0x0055999C  51                    push   ecx
0x0055999D  52                    push   edx
0x0055999E  e86de0ffff            call   0x557a10  ; -> sub_557A10
0x005599A3  83c41c                add    esp, 0x1c
0x005599A6  c20c00                ret    0xc
0x005599A9  cc                    int3   
0x005599AA  cc                    int3   
0x005599AB  cc                    int3   
0x005599AC  cc                    int3   
0x005599AD  cc                    int3   
0x005599AE  cc                    int3   
0x005599AF  cc                    int3   
0x005599B0  6aff                  push   -1
0x005599B2  68d6c89b00            push   0x9bc8d6  ; -> sub_9BC8D6
0x005599B7  64a100000000          mov    eax, dword ptr fs:[0]
0x005599BD  50                    push   eax
0x005599BE  83ec0c                sub    esp, 0xc
0x005599C1  53                    push   ebx
0x005599C2  55                    push   ebp
0x005599C3  56                    push   esi
0x005599C4  57                    push   edi
0x005599C5  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x005599CA  33c4                  xor    eax, esp
0x005599CC  50                    push   eax
0x005599CD  8d442420              lea    eax, [esp + 0x20]
0x005599D1  64a300000000          mov    dword ptr fs:[0], eax
0x005599D7  8bf1                  mov    esi, ecx
0x005599D9  89742414              mov    dword ptr [esp + 0x14], esi
0x005599DD  8b5e0c                mov    ebx, dword ptr [esi + 0xc]
0x005599E0  395e08                cmp    dword ptr [esi + 8], ebx
0x005599E3  8d7e04                lea    edi, [esi + 4]
0x005599E6  c744242800000000      mov    dword ptr [esp + 0x28], 0
0x005599EE  7605                  jbe    0x5599f5  ; -> sub_5599F5
0x005599F0  e869b34200            call   0x984d5e  ; -> sub_984D5E
0x005599F5  8b6f04                mov    ebp, dword ptr [edi + 4]
0x005599F8  3b6f08                cmp    ebp, dword ptr [edi + 8]
0x005599FB  7605                  jbe    0x559a02  ; -> sub_559A02
0x005599FD  e85cb34200            call   0x984d5e  ; -> sub_984D5E
0x00559A02  53                    push   ebx
0x00559A03  57                    push   edi
0x00559A04  55                    push   ebp
0x00559A05  57                    push   edi
0x00559A06  8d442428              lea    eax, [esp + 0x28]
0x00559A0A  50                    push   eax
0x00559A0B  8bcf                  mov    ecx, edi
0x00559A0D  e82ef8ffff            call   0x559240  ; -> sub_559240
0x00559A12  8b5e1c                mov    ebx, dword ptr [esi + 0x1c]
0x00559A15  83c614                add    esi, 0x14
0x00559A18  395e04                cmp    dword ptr [esi + 4], ebx
0x00559A1B  7605                  jbe    0x559a22  ; -> sub_559A22
0x00559A1D  e83cb34200            call   0x984d5e  ; -> sub_984D5E
0x00559A22  8b6e04                mov    ebp, dword ptr [esi + 4]
0x00559A25  3b6e08                cmp    ebp, dword ptr [esi + 8]
0x00559A28  7605                  jbe    0x559a2f  ; -> sub_559A2F
0x00559A2A  e82fb34200            call   0x984d5e  ; -> sub_984D5E
0x00559A2F  53                    push   ebx
0x00559A30  56                    push   esi
0x00559A31  55                    push   ebp
0x00559A32  56                    push   esi
0x00559A33  8d4c2428              lea    ecx, [esp + 0x28]
0x00559A37  51                    push   ecx
0x00559A38  8bce                  mov    ecx, esi
0x00559A3A  e801f8ffff            call   0x559240  ; -> sub_559240
0x00559A3F  6870855500            push   0x558570  ; -> sub_558570
0x00559A44  6a02                  push   2
0x00559A46  6a10                  push   0x10
0x00559A48  57                    push   edi
0x00559A49  c7442438ffffffff      mov    dword ptr [esp + 0x38], 0xffffffff
0x00559A51  e8f9774200            call   0x98124f  ; -> sub_98124F
0x00559A56  8b4c2420              mov    ecx, dword ptr [esp + 0x20]
0x00559A5A  64890d00000000        mov    dword ptr fs:[0], ecx
0x00559A61  59                    pop    ecx
0x00559A62  5f                    pop    edi
0x00559A63  5e                    pop    esi
0x00559A64  5d                    pop    ebp
0x00559A65  5b                    pop    ebx
0x00559A66  83c418                add    esp, 0x18
0x00559A69  c3                    ret    
0x00559A6A  cc                    int3   
0x00559A6B  cc                    int3   
0x00559A6C  cc                    int3   
0x00559A6D  cc                    int3   
0x00559A6E  cc                    int3   
0x00559A6F  cc                    int3   

