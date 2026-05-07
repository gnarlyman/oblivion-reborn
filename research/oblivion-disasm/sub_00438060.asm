; ============================================================
; ModelLoader::QueueReference
; VA: 0x00438060  size: 0x300
; ============================================================
0x00438060  6aff                  push   -1
0x00438062  6818c69a00            push   0x9ac618  ; -> sub_9AC618
0x00438067  64a100000000          mov    eax, dword ptr fs:[0]
0x0043806D  50                    push   eax
0x0043806E  51                    push   ecx
0x0043806F  56                    push   esi
0x00438070  57                    push   edi
0x00438071  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00438076  33c4                  xor    eax, esp
0x00438078  50                    push   eax
0x00438079  8d442410              lea    eax, [esp + 0x10]
0x0043807D  64a300000000          mov    dword ptr fs:[0], eax
0x00438083  8bf9                  mov    edi, ecx
0x00438085  8b0d003bb300          mov    ecx, dword ptr [0xb33b00]
0x0043808B  e870240200            call   0x45a500  ; -> sub_45A500
0x00438090  84c0                  test   al, al
0x00438092  7413                  je     0x4380a7  ; ModelLoader::QueueReference+0x47
0x00438094  a1003bb300            mov    eax, dword ptr [0xb33b00]
0x00438099  8b4818                mov    ecx, dword ptr [eax + 0x18]
0x0043809C  d1e9                  shr    ecx, 1
0x0043809E  f6c101                test   cl, 1
0x004380A1  0f8444020000          je     0x4382eb  ; -> sub_4382EB
0x004380A7  8b742420              mov    esi, dword ptr [esp + 0x20]
0x004380AB  8b4e1c                mov    ecx, dword ptr [esi + 0x1c]
0x004380AE  85c9                  test   ecx, ecx
0x004380B0  7424                  je     0x4380d6  ; ModelLoader::QueueReference+0x76
0x004380B2  8b11                  mov    edx, dword ptr [ecx]
0x004380B4  8b82f4000000          mov    eax, dword ptr [edx + 0xf4]
0x004380BA  ffd0                  call   eax
0x004380BC  84c0                  test   al, al
0x004380BE  7416                  je     0x4380d6  ; ModelLoader::QueueReference+0x76
0x004380C0  8b16                  mov    edx, dword ptr [esi]
0x004380C2  8b8270010000          mov    eax, dword ptr [edx + 0x170]
0x004380C8  8bce                  mov    ecx, esi
0x004380CA  ffd0                  call   eax
0x004380CC  8078041a              cmp    byte ptr [eax + 4], 0x1a
0x004380D0  0f8515020000          jne    0x4382eb  ; -> sub_4382EB
0x004380D6  8b16                  mov    edx, dword ptr [esi]
0x004380D8  8b8270010000          mov    eax, dword ptr [edx + 0x170]
0x004380DE  8bce                  mov    ecx, esi
0x004380E0  ffd0                  call   eax
0x004380E2  8078040a              cmp    byte ptr [eax + 4], 0xa
0x004380E6  0f84ff010000          je     0x4382eb  ; -> sub_4382EB
0x004380EC  8b16                  mov    edx, dword ptr [esi]
0x004380EE  8b8290010000          mov    eax, dword ptr [edx + 0x190]
0x004380F4  8bce                  mov    ecx, esi
0x004380F6  ffd0                  call   eax
0x004380F8  84c0                  test   al, al
0x004380FA  7425                  je     0x438121  ; -> sub_438121
0x004380FC  8b16                  mov    edx, dword ptr [esi]
0x004380FE  8b8230030000          mov    eax, dword ptr [edx + 0x330]
0x00438104  8bce                  mov    ecx, esi
0x00438106  ffd0                  call   eax
0x00438108  85c0                  test   eax, eax
0x0043810A  7415                  je     0x438121  ; -> sub_438121
0x0043810C  8b16                  mov    edx, dword ptr [esi]
0x0043810E  8b8230030000          mov    eax, dword ptr [edx + 0x330]
0x00438114  6a0d                  push   0xd
0x00438116  8bce                  mov    ecx, esi
0x00438118  ffd0                  call   eax
0x0043811A  8bc8                  mov    ecx, eax
0x0043811C  e8bfac1d00            call   0x612de0  ; -> sub_612DE0
0x00438121  c744240c00000000      mov    dword ptr [esp + 0xc], 0
0x00438129  8b4f08                mov    ecx, dword ptr [edi + 8]
0x0043812C  8b11                  mov    edx, dword ptr [ecx]
0x0043812E  8b5204                mov    edx, dword ptr [edx + 4]
0x00438131  8d44240c              lea    eax, [esp + 0xc]
0x00438135  50                    push   eax
0x00438136  56                    push   esi
0x00438137  c744242000000000      mov    dword ptr [esp + 0x20], 0
0x0043813F  ffd2                  call   edx
0x00438141  84c0                  test   al, al
0x00438143  7449                  je     0x43818e  ; -> sub_43818E
0x00438145  8b74240c              mov    esi, dword ptr [esp + 0xc]
0x00438149  8b4610                mov    eax, dword ptr [esi + 0x10]
0x0043814C  8b5614                mov    edx, dword ptr [esi + 0x14]
0x0043814F  b110                  mov    cl, 0x10
0x00438151  e83ac95400            call   0x984a90  ; -> sub_984A90
0x00438156  8b4c2424              mov    ecx, dword ptr [esp + 0x24]
0x0043815A  0fb6c0                movzx  eax, al
0x0043815D  3bc1                  cmp    eax, ecx
0x0043815F  740e                  je     0x43816f  ; -> sub_43816F
0x00438161  8b06                  mov    eax, dword ptr [esi]
0x00438163  8b501c                mov    edx, dword ptr [eax + 0x1c]
0x00438166  51                    push   ecx
0x00438167  8bce                  mov    ecx, esi
0x00438169  ffd2                  call   edx
0x0043816B  8b74240c              mov    esi, dword ptr [esp + 0xc]
0x0043816F  85f6                  test   esi, esi
0x00438171  c7442418ffffffff      mov    dword ptr [esp + 0x18], 0xffffffff
0x00438179  0f846c010000          je     0x4382eb  ; -> sub_4382EB
0x0043817F  8d4608                lea    eax, [esi + 8]
0x00438182  50                    push   eax
0x00438183  ff157c80a200          call   dword ptr [0xa2807c]
0x00438189  e94b010000            jmp    0x4382d9  ; -> sub_4382D9
0x0043818E  3b35c433b300          cmp    esi, dword ptr [0xb333c4]
0x00438194  7523                  jne    0x4381b9  ; -> sub_4381B9
0x00438196  6a40                  push   0x40
0x00438198  e8639dfcff            call   0x401f00  ; -> sub_401F00
0x0043819D  83c404                add    esp, 4
0x004381A0  85c0                  test   eax, eax
0x004381A2  0f84a2000000          je     0x43824a  ; -> sub_43824A
0x004381A8  8b4c2424              mov    ecx, dword ptr [esp + 0x24]
0x004381AC  51                    push   ecx
0x004381AD  8bc8                  mov    ecx, eax
0x004381AF  e86cfeffff            call   0x438020  ; -> sub_438020
0x004381B4  e993000000            jmp    0x43824c  ; -> sub_43824C
0x004381B9  8b16                  mov    edx, dword ptr [esi]
0x004381BB  8b8270010000          mov    eax, dword ptr [edx + 0x170]
0x004381C1  8bce                  mov    ecx, esi
0x004381C3  ffd0                  call   eax
0x004381C5  0fb64004              movzx  eax, byte ptr [eax + 4]
0x004381C9  83e81e                sub    eax, 0x1e
0x004381CC  745f                  je     0x43822d  ; -> sub_43822D
0x004381CE  83e805                sub    eax, 5
0x004381D1  743d                  je     0x438210  ; -> sub_438210
0x004381D3  83e801                sub    eax, 1
0x004381D6  6a38                  push   0x38
0x004381D8  741b                  je     0x4381f5  ; -> sub_4381F5
0x004381DA  e8219dfcff            call   0x401f00  ; -> sub_401F00
0x004381DF  83c404                add    esp, 4
0x004381E2  85c0                  test   eax, eax
0x004381E4  7464                  je     0x43824a  ; -> sub_43824A
0x004381E6  8b4c2424              mov    ecx, dword ptr [esp + 0x24]
0x004381EA  51                    push   ecx
0x004381EB  56                    push   esi
0x004381EC  8bc8                  mov    ecx, eax
0x004381EE  e83dfaffff            call   0x437c30  ; -> sub_437C30
0x004381F3  eb57                  jmp    0x43824c  ; -> sub_43824C
0x004381F5  e8069dfcff            call   0x401f00  ; -> sub_401F00
0x004381FA  83c404                add    esp, 4
0x004381FD  85c0                  test   eax, eax
0x004381FF  7449                  je     0x43824a  ; -> sub_43824A
0x00438201  8b542424              mov    edx, dword ptr [esp + 0x24]
0x00438205  52                    push   edx
0x00438206  56                    push   esi
0x00438207  8bc8                  mov    ecx, eax
0x00438209  e8d2fdffff            call   0x437fe0  ; -> sub_437FE0
0x0043820E  eb3c                  jmp    0x43824c  ; -> sub_43824C
0x00438210  6a40                  push   0x40
0x00438212  e8e99cfcff            call   0x401f00  ; -> sub_401F00
0x00438217  83c404                add    esp, 4
0x0043821A  85c0                  test   eax, eax
0x0043821C  742c                  je     0x43824a  ; -> sub_43824A
0x0043821E  8b4c2424              mov    ecx, dword ptr [esp + 0x24]
0x00438222  51                    push   ecx
0x00438223  56                    push   esi
0x00438224  8bc8                  mov    ecx, eax
0x00438226  e8d5fcffff            call   0x437f00  ; -> sub_437F00
0x0043822B  eb1f                  jmp    0x43824c  ; -> sub_43824C
0x0043822D  6a38                  push   0x38
0x0043822F  e8cc9cfcff            call   0x401f00  ; -> sub_401F00
0x00438234  83c404                add    esp, 4
0x00438237  85c0                  test   eax, eax
0x00438239  740f                  je     0x43824a  ; -> sub_43824A
0x0043823B  8b542424              mov    edx, dword ptr [esp + 0x24]
0x0043823F  52                    push   edx
0x00438240  56                    push   esi
0x00438241  8bc8                  mov    ecx, eax
0x00438243  e8d8fbffff            call   0x437e20  ; -> sub_437E20
0x00438248  eb02                  jmp    0x43824c  ; -> sub_43824C
0x0043824A  33c0                  xor    eax, eax
0x0043824C  50                    push   eax
0x0043824D  8d4c2410              lea    ecx, [esp + 0x10]
0x00438251  e81a490800            call   0x4bcb70  ; -> sub_4BCB70
0x00438256  6a00                  push   0
0x00438258  51                    push   ecx
0x00438259  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x0043825D  8bc4                  mov    eax, esp
0x0043825F  8908                  mov    dword ptr [eax], ecx
0x00438261  8b442414              mov    eax, dword ptr [esp + 0x14]
0x00438265  85c0                  test   eax, eax
0x00438267  8964242c              mov    dword ptr [esp + 0x2c], esp
0x0043826B  740a                  je     0x438277  ; -> sub_438277
0x0043826D  83c008                add    eax, 8
0x00438270  50                    push   eax
0x00438271  ff157880a200          call   dword ptr [0xa28078]
0x00438277  8b4f08                mov    ecx, dword ptr [edi + 8]
0x0043827A  8b11                  mov    edx, dword ptr [ecx]
0x0043827C  8b420c                mov    eax, dword ptr [edx + 0xc]
0x0043827F  56                    push   esi
0x00438280  ffd0                  call   eax
0x00438282  84c0                  test   al, al
0x00438284  8b3d7c80a200          mov    edi, dword ptr [0xa2807c]
0x0043828A  7411                  je     0x43829d  ; -> sub_43829D
0x0043828C  8b4c240c              mov    ecx, dword ptr [esp + 0xc]
0x00438290  8b11                  mov    edx, dword ptr [ecx]
0x00438292  8b4220                mov    eax, dword ptr [edx + 0x20]
0x00438295  ffd0                  call   eax
0x00438297  8b44240c              mov    eax, dword ptr [esp + 0xc]
0x0043829B  eb28                  jmp    0x4382c5  ; -> sub_4382C5
0x0043829D  8b44240c              mov    eax, dword ptr [esp + 0xc]
0x004382A1  85c0                  test   eax, eax
0x004382A3  7420                  je     0x4382c5  ; -> sub_4382C5
0x004382A5  8bf0                  mov    esi, eax
0x004382A7  83c008                add    eax, 8
0x004382AA  50                    push   eax
0x004382AB  ffd7                  call   edi
0x004382AD  85c0                  test   eax, eax
0x004382AF  750e                  jne    0x4382bf  ; -> sub_4382BF
0x004382B1  85f6                  test   esi, esi
0x004382B3  740a                  je     0x4382bf  ; -> sub_4382BF
0x004382B5  8b16                  mov    edx, dword ptr [esi]
0x004382B7  8b02                  mov    eax, dword ptr [edx]
0x004382B9  6a01                  push   1
0x004382BB  8bce                  mov    ecx, esi
0x004382BD  ffd0                  call   eax
0x004382BF  33c0                  xor    eax, eax
0x004382C1  8944240c              mov    dword ptr [esp + 0xc], eax
0x004382C5  85c0                  test   eax, eax
0x004382C7  c7442418ffffffff      mov    dword ptr [esp + 0x18], 0xffffffff
0x004382CF  741a                  je     0x4382eb  ; -> sub_4382EB
0x004382D1  8bf0                  mov    esi, eax
0x004382D3  83c008                add    eax, 8
0x004382D6  50                    push   eax
0x004382D7  ffd7                  call   edi
0x004382D9  85c0                  test   eax, eax
0x004382DB  750e                  jne    0x4382eb  ; -> sub_4382EB
0x004382DD  85f6                  test   esi, esi
0x004382DF  740a                  je     0x4382eb  ; -> sub_4382EB
0x004382E1  8b16                  mov    edx, dword ptr [esi]
0x004382E3  8b02                  mov    eax, dword ptr [edx]
0x004382E5  6a01                  push   1
0x004382E7  8bce                  mov    ecx, esi
0x004382E9  ffd0                  call   eax
0x004382EB  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x004382EF  64890d00000000        mov    dword ptr fs:[0], ecx
0x004382F6  59                    pop    ecx
0x004382F7  5f                    pop    edi
0x004382F8  5e                    pop    esi
0x004382F9  83c410                add    esp, 0x10
0x004382FC  c20800                ret    8
0x004382FF  cc                    int3   
0x00438300  6aff                  push   -1
0x00438302  6868c99a00            push   0x9ac968  ; -> sub_9AC968
0x00438307  64a100000000          mov    eax, dword ptr fs:[0]
0x0043830D  50                    push   eax
0x0043830E  56                    push   esi
0x0043830F  57                    push   edi
0x00438310  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00438315  33c4                  xor    eax, esp
0x00438317  50                    push   eax
0x00438318  8d44240c              lea    eax, [esp + 0xc]
0x0043831C  64a300000000          mov    dword ptr fs:[0], eax
0x00438322  8b7c241c              mov    edi, dword ptr [esp + 0x1c]
0x00438326  85ff                  test   edi, edi
0x00438328  746d                  je     0x438397  ; -> sub_438397
0x0043832A  8b742420              mov    esi, dword ptr [esp + 0x20]
0x0043832E  85f6                  test   esi, esi
0x00438330  7465                  je     0x438397  ; -> sub_438397
0x00438332  6a28                  push   0x28
0x00438334  e8c79bfcff            call   0x401f00  ; -> sub_401F00
0x00438339  83c404                add    esp, 4
0x0043833C  85c0                  test   eax, eax
0x0043833E  7412                  je     0x438352  ; -> sub_438352
0x00438340  8b4c2424              mov    ecx, dword ptr [esp + 0x24]
0x00438344  51                    push   ecx
0x00438345  56                    push   esi
0x00438346  57                    push   edi
0x00438347  8bc8                  mov    ecx, eax
0x00438349  e812f4ffff            call   0x437760  ; -> sub_437760
0x0043834E  8bf0                  mov    esi, eax
0x00438350  eb02                  jmp    0x438354  ; -> sub_438354
0x00438352  33f6                  xor    esi, esi
0x00438354  85f6                  test   esi, esi
0x00438356  8974241c              mov    dword ptr [esp + 0x1c], esi
0x0043835A  740a                  je     0x438366  ; -> sub_438366
0x0043835C  8d5608                lea    edx, [esi + 8]
0x0043835F  52                    push   edx
