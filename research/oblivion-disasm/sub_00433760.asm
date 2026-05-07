ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x00433760
; VA: 0x00433760  size: 0x200
; ============================================================
0x00433760  55                    push   ebp
0x00433761  56                    push   esi
0x00433762  8b74240c              mov    esi, dword ptr [esp + 0xc]
0x00433766  f6461802              test   byte ptr [esi + 0x18], 2
0x0043376A  8be9                  mov    ebp, ecx
0x0043376C  7407                  je     0x433775  ; -> sub_433775
0x0043376E  5e                    pop    esi
0x0043376F  32c0                  xor    al, al
0x00433771  5d                    pop    ebp
0x00433772  c21000                ret    0x10
0x00433775  53                    push   ebx
0x00433776  8b1d5081a200          mov    ebx, dword ptr [0xa28150]
0x0043377C  57                    push   edi
0x0043377D  8d4900                lea    ecx, [ecx]
0x00433780  f6461801              test   byte ptr [esi + 0x18], 1
0x00433784  8b7d14                mov    edi, dword ptr [ebp + 0x14]
0x00433787  752c                  jne    0x4337b5  ; -> sub_4337B5
0x00433789  8b4704                mov    eax, dword ptr [edi + 4]
0x0043378C  50                    push   eax
0x0043378D  ffd3                  call   ebx
0x0043378F  85c0                  test   eax, eax
0x00433791  7508                  jne    0x43379b  ; -> sub_43379B
0x00433793  55                    push   ebp
0x00433794  8bcf                  mov    ecx, edi
0x00433796  e8c5e5ffff            call   0x431d60  ; ThreadSpecificInterfaceManager::AddInterface
0x0043379B  8b4c241c              mov    ecx, dword ptr [esp + 0x1c]
0x0043379F  51                    push   ecx
0x004337A0  8b4e08                mov    ecx, dword ptr [esi + 8]
0x004337A3  8d5610                lea    edx, [esi + 0x10]
0x004337A6  52                    push   edx
0x004337A7  51                    push   ecx
0x004337A8  8bc8                  mov    ecx, eax
0x004337AA  e861e6ffff            call   0x431e10  ; -> sub_431E10
0x004337AF  804e1801              or     byte ptr [esi + 0x18], 1
0x004337B3  eb26                  jmp    0x4337db  ; -> sub_4337DB
0x004337B5  8b5704                mov    edx, dword ptr [edi + 4]
0x004337B8  52                    push   edx
0x004337B9  ffd3                  call   ebx
0x004337BB  85c0                  test   eax, eax
0x004337BD  7508                  jne    0x4337c7  ; -> sub_4337C7
0x004337BF  55                    push   ebp
0x004337C0  8bcf                  mov    ecx, edi
0x004337C2  e899e5ffff            call   0x431d60  ; ThreadSpecificInterfaceManager::AddInterface
0x004337C7  8b4c241c              mov    ecx, dword ptr [esp + 0x1c]
0x004337CB  51                    push   ecx
0x004337CC  8b4e08                mov    ecx, dword ptr [esi + 8]
0x004337CF  8d5610                lea    edx, [esi + 0x10]
0x004337D2  52                    push   edx
0x004337D3  51                    push   ecx
0x004337D4  8bc8                  mov    ecx, eax
0x004337D6  e8f5f6ffff            call   0x432ed0  ; -> sub_432ED0
0x004337DB  84c0                  test   al, al
0x004337DD  7523                  jne    0x433802  ; -> sub_433802
0x004337DF  83460801              add    dword ptr [esi + 8], 1
0x004337E3  8b4e08                mov    ecx, dword ptr [esi + 8]
0x004337E6  3b4d08                cmp    ecx, dword ptr [ebp + 8]
0x004337E9  730c                  jae    0x4337f7  ; -> sub_4337F7
0x004337EB  38442420              cmp    byte ptr [esp + 0x20], al
0x004337EF  7420                  je     0x433811  ; -> sub_433811
0x004337F1  806618fe              and    byte ptr [esi + 0x18], 0xfe
0x004337F5  eb89                  jmp    0x433780  ; -> sub_433780
0x004337F7  804e1802              or     byte ptr [esi + 0x18], 2
0x004337FB  5f                    pop    edi
0x004337FC  5b                    pop    ebx
0x004337FD  5e                    pop    esi
0x004337FE  5d                    pop    ebp
0x004337FF  c21000                ret    0x10
0x00433802  8b5610                mov    edx, dword ptr [esi + 0x10]
0x00433805  8b4c2418              mov    ecx, dword ptr [esp + 0x18]
0x00433809  8911                  mov    dword ptr [ecx], edx
0x0043380B  8b5614                mov    edx, dword ptr [esi + 0x14]
0x0043380E  895104                mov    dword ptr [ecx + 4], edx
0x00433811  5f                    pop    edi
0x00433812  5b                    pop    ebx
0x00433813  5e                    pop    esi
0x00433814  5d                    pop    ebp
0x00433815  c21000                ret    0x10
0x00433818  cc                    int3   
0x00433819  cc                    int3   
0x0043381A  cc                    int3   
0x0043381B  cc                    int3   
0x0043381C  cc                    int3   
0x0043381D  cc                    int3   
0x0043381E  cc                    int3   
0x0043381F  cc                    int3   
0x00433820  6aff                  push   -1
0x00433822  68b8bf9a00            push   0x9abfb8  ; -> sub_9ABFB8
0x00433827  64a100000000          mov    eax, dword ptr fs:[0]
0x0043382D  50                    push   eax
0x0043382E  53                    push   ebx
0x0043382F  56                    push   esi
0x00433830  57                    push   edi
0x00433831  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00433836  33c4                  xor    eax, esp
0x00433838  50                    push   eax
0x00433839  8d442410              lea    eax, [esp + 0x10]
0x0043383D  64a300000000          mov    dword ptr fs:[0], eax
0x00433843  8bf1                  mov    esi, ecx
0x00433845  8b7e14                mov    edi, dword ptr [esi + 0x14]
0x00433848  8b4704                mov    eax, dword ptr [edi + 4]
0x0043384B  50                    push   eax
0x0043384C  c744241c00000000      mov    dword ptr [esp + 0x1c], 0
0x00433854  ff155081a200          call   dword ptr [0xa28150]
0x0043385A  85c0                  test   eax, eax
0x0043385C  7508                  jne    0x433866  ; -> sub_433866
0x0043385E  56                    push   esi
0x0043385F  8bcf                  mov    ecx, edi
0x00433861  e8fae4ffff            call   0x431d60  ; ThreadSpecificInterfaceManager::AddInterface
0x00433866  8b542420              mov    edx, dword ptr [esp + 0x20]
0x0043386A  8d4c2424              lea    ecx, [esp + 0x24]
0x0043386E  51                    push   ecx
0x0043386F  52                    push   edx
0x00433870  8bc8                  mov    ecx, eax
0x00433872  e839fcffff            call   0x4334b0  ; -> sub_4334B0
0x00433877  8b742424              mov    esi, dword ptr [esp + 0x24]
0x0043387B  85f6                  test   esi, esi
0x0043387D  8ad8                  mov    bl, al
0x0043387F  c7442418ffffffff      mov    dword ptr [esp + 0x18], 0xffffffff
0x00433887  7418                  je     0x4338a1  ; -> sub_4338A1
0x00433889  8d4608                lea    eax, [esi + 8]
0x0043388C  50                    push   eax
0x0043388D  ff157c80a200          call   dword ptr [0xa2807c]
0x00433893  85c0                  test   eax, eax
0x00433895  750a                  jne    0x4338a1  ; -> sub_4338A1
0x00433897  8b16                  mov    edx, dword ptr [esi]
0x00433899  8b02                  mov    eax, dword ptr [edx]
0x0043389B  6a01                  push   1
0x0043389D  8bce                  mov    ecx, esi
0x0043389F  ffd0                  call   eax
0x004338A1  8ac3                  mov    al, bl
0x004338A3  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x004338A7  64890d00000000        mov    dword ptr fs:[0], ecx
0x004338AE  59                    pop    ecx
0x004338AF  5f                    pop    edi
0x004338B0  5e                    pop    esi
0x004338B1  5b                    pop    ebx
0x004338B2  83c40c                add    esp, 0xc
0x004338B5  c20800                ret    8
0x004338B8  cc                    int3   
0x004338B9  cc                    int3   
0x004338BA  cc                    int3   
0x004338BB  cc                    int3   
0x004338BC  cc                    int3   
0x004338BD  cc                    int3   
0x004338BE  cc                    int3   
0x004338BF  cc                    int3   
0x004338C0  6aff                  push   -1
0x004338C2  68e8bf9a00            push   0x9abfe8  ; -> sub_9ABFE8
0x004338C7  64a100000000          mov    eax, dword ptr fs:[0]
0x004338CD  50                    push   eax
0x004338CE  53                    push   ebx
0x004338CF  56                    push   esi
0x004338D0  57                    push   edi
0x004338D1  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x004338D6  33c4                  xor    eax, esp
0x004338D8  50                    push   eax
0x004338D9  8d442410              lea    eax, [esp + 0x10]
0x004338DD  64a300000000          mov    dword ptr fs:[0], eax
0x004338E3  8bf1                  mov    esi, ecx
0x004338E5  8b7e14                mov    edi, dword ptr [esi + 0x14]
0x004338E8  8b4704                mov    eax, dword ptr [edi + 4]
0x004338EB  50                    push   eax
0x004338EC  c744241c00000000      mov    dword ptr [esp + 0x1c], 0
0x004338F4  ff155081a200          call   dword ptr [0xa28150]
0x004338FA  85c0                  test   eax, eax
0x004338FC  7508                  jne    0x433906  ; -> sub_433906
0x004338FE  56                    push   esi
0x004338FF  8bcf                  mov    ecx, edi
0x00433901  e85ae4ffff            call   0x431d60  ; ThreadSpecificInterfaceManager::AddInterface
0x00433906  8b4c2430              mov    ecx, dword ptr [esp + 0x30]
0x0043390A  51                    push   ecx
0x0043390B  8b4c242c              mov    ecx, dword ptr [esp + 0x2c]
0x0043390F  8d542430              lea    edx, [esp + 0x30]
0x00433913  52                    push   edx
0x00433914  8b54242c              mov    edx, dword ptr [esp + 0x2c]
0x00433918  51                    push   ecx
0x00433919  8b4c242c              mov    ecx, dword ptr [esp + 0x2c]
0x0043391D  52                    push   edx
0x0043391E  51                    push   ecx
0x0043391F  8bc8                  mov    ecx, eax
0x00433921  e8caf8ffff            call   0x4331f0  ; -> sub_4331F0
0x00433926  8b74242c              mov    esi, dword ptr [esp + 0x2c]
0x0043392A  85f6                  test   esi, esi
0x0043392C  8ad8                  mov    bl, al
0x0043392E  c7442418ffffffff      mov    dword ptr [esp + 0x18], 0xffffffff
0x00433936  7418                  je     0x433950  ; -> sub_433950
0x00433938  8d5608                lea    edx, [esi + 8]
0x0043393B  52                    push   edx
0x0043393C  ff157c80a200          call   dword ptr [0xa2807c]
0x00433942  85c0                  test   eax, eax
0x00433944  750a                  jne    0x433950  ; -> sub_433950
0x00433946  8b06                  mov    eax, dword ptr [esi]
0x00433948  8b10                  mov    edx, dword ptr [eax]
0x0043394A  6a01                  push   1
0x0043394C  8bce                  mov    ecx, esi
0x0043394E  ffd2                  call   edx
0x00433950  8ac3                  mov    al, bl
0x00433952  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x00433956  64890d00000000        mov    dword ptr fs:[0], ecx
0x0043395D  59                    pop    ecx
0x0043395E  5f                    pop    edi
0x0043395F  5e                    pop    esi

