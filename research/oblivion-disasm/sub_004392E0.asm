; ============================================================
; sub_4392E0  (Crash 5: +0x2F)
; VA: 0x004392E0  size: 0x180
; ============================================================
0x004392E0  56                    push   esi
0x004392E1  57                    push   edi
0x004392E2  8bf9                  mov    edi, ecx
0x004392E4  8b471c                mov    eax, dword ptr [edi + 0x1c]
0x004392E7  85c0                  test   eax, eax
0x004392E9  742c                  je     0x439317  ; -> sub_439317
0x004392EB  53                    push   ebx
0x004392EC  0fb7580a              movzx  ebx, word ptr [eax + 0xa]
0x004392F0  33f6                  xor    esi, esi
0x004392F2  85db                  test   ebx, ebx
0x004392F4  7620                  jbe    0x439316  ; -> sub_439316
0x004392F6  8b471c                mov    eax, dword ptr [edi + 0x1c]
0x004392F9  8b4804                mov    ecx, dword ptr [eax + 4]
0x004392FC  8b04b1                mov    eax, dword ptr [ecx + esi*4]
0x004392FF  85c0                  test   eax, eax
0x00439301  740c                  je     0x43930f  ; -> sub_43930F
0x00439303  8b0d103ab300          mov    ecx, dword ptr [0xb33a10]  ; g_ioManager (IOManager**)
0x00439309  50                    push   eax
0x0043930A  e8218effff            call   0x432130  ; -> sub_432130
0x0043930F  83c601                add    esi, 1
0x00439312  3bf3                  cmp    esi, ebx
0x00439314  72e0                  jb     0x4392f6  ; -> sub_4392F6
0x00439316  5b                    pop    ebx
0x00439317  8b7718                mov    esi, dword ptr [edi + 0x18]
0x0043931A  85f6                  test   esi, esi
0x0043931C  7423                  je     0x439341  ; -> sub_439341
0x0043931E  8d5608                lea    edx, [esi + 8]
0x00439321  52                    push   edx
0x00439322  ff157c80a200          call   dword ptr [0xa2807c]
0x00439328  85c0                  test   eax, eax
0x0043932A  750e                  jne    0x43933a  ; -> sub_43933A
0x0043932C  85f6                  test   esi, esi
0x0043932E  740a                  je     0x43933a  ; -> sub_43933A
0x00439330  8b06                  mov    eax, dword ptr [esi]
0x00439332  8b10                  mov    edx, dword ptr [eax]
0x00439334  6a01                  push   1
0x00439336  8bce                  mov    ecx, esi
0x00439338  ffd2                  call   edx
0x0043933A  c7471800000000        mov    dword ptr [edi + 0x18], 0
0x00439341  5f                    pop    edi
0x00439342  5e                    pop    esi
0x00439343  c20400                ret    4
0x00439346  cc                    int3   
0x00439347  cc                    int3   
0x00439348  cc                    int3   
0x00439349  cc                    int3   
0x0043934A  cc                    int3   
0x0043934B  cc                    int3   
0x0043934C  cc                    int3   
0x0043934D  cc                    int3   
0x0043934E  cc                    int3   
0x0043934F  cc                    int3   
0x00439350  56                    push   esi
0x00439351  8bf1                  mov    esi, ecx
0x00439353  8b4620                mov    eax, dword ptr [esi + 0x20]
0x00439356  50                    push   eax
0x00439357  c706046ba300          mov    dword ptr [esi], 0xa36b04  ; -> sub_A36B04
0x0043935D  e8be8bfcff            call   0x401f20  ; -> sub_401F20
0x00439362  83c404                add    esp, 4
0x00439365  8bce                  mov    ecx, esi
0x00439367  e824dbffff            call   0x436e90  ; -> sub_436E90
0x0043936C  f644240801            test   byte ptr [esp + 8], 1
0x00439371  7409                  je     0x43937c  ; -> sub_43937C
0x00439373  56                    push   esi
0x00439374  e8a78bfcff            call   0x401f20  ; -> sub_401F20
0x00439379  83c404                add    esp, 4
0x0043937C  8bc6                  mov    eax, esi
0x0043937E  5e                    pop    esi
0x0043937F  c20400                ret    4
0x00439382  cc                    int3   
0x00439383  cc                    int3   
0x00439384  cc                    int3   
0x00439385  cc                    int3   
0x00439386  cc                    int3   
0x00439387  cc                    int3   
0x00439388  cc                    int3   
0x00439389  cc                    int3   
0x0043938A  cc                    int3   
0x0043938B  cc                    int3   
0x0043938C  cc                    int3   
0x0043938D  cc                    int3   
0x0043938E  cc                    int3   
0x0043938F  cc                    int3   
0x00439390  56                    push   esi
0x00439391  8bf1                  mov    esi, ecx
0x00439393  e878ddffff            call   0x437110  ; -> sub_437110
0x00439398  f644240801            test   byte ptr [esp + 8], 1
0x0043939D  7409                  je     0x4393a8  ; -> sub_4393A8
0x0043939F  56                    push   esi
0x004393A0  e87b8bfcff            call   0x401f20  ; -> sub_401F20
0x004393A5  83c404                add    esp, 4
0x004393A8  8bc6                  mov    eax, esi
0x004393AA  5e                    pop    esi
0x004393AB  c20400                ret    4
0x004393AE  cc                    int3   
0x004393AF  cc                    int3   
0x004393B0  56                    push   esi
0x004393B1  8bf1                  mov    esi, ecx
0x004393B3  8b4628                mov    eax, dword ptr [esi + 0x28]
0x004393B6  85c0                  test   eax, eax
0x004393B8  740a                  je     0x4393c4  ; -> sub_4393C4
0x004393BA  83c004                add    eax, 4
0x004393BD  50                    push   eax
0x004393BE  ff157c80a200          call   dword ptr [0xa2807c]
0x004393C4  8b4620                mov    eax, dword ptr [esi + 0x20]
0x004393C7  50                    push   eax
0x004393C8  c706046ba300          mov    dword ptr [esi], 0xa36b04  ; -> sub_A36B04
0x004393CE  e84d8bfcff            call   0x401f20  ; -> sub_401F20
0x004393D3  83c404                add    esp, 4
0x004393D6  8bce                  mov    ecx, esi
0x004393D8  e8b3daffff            call   0x436e90  ; -> sub_436E90
0x004393DD  f644240801            test   byte ptr [esp + 8], 1
0x004393E2  7409                  je     0x4393ed  ; -> sub_4393ED
0x004393E4  56                    push   esi
0x004393E5  e8368bfcff            call   0x401f20  ; -> sub_401F20
0x004393EA  83c404                add    esp, 4
0x004393ED  8bc6                  mov    eax, esi
0x004393EF  5e                    pop    esi
0x004393F0  c20400                ret    4
0x004393F3  cc                    int3   
0x004393F4  cc                    int3   
0x004393F5  cc                    int3   
0x004393F6  cc                    int3   
0x004393F7  cc                    int3   
0x004393F8  cc                    int3   
0x004393F9  cc                    int3   
0x004393FA  cc                    int3   
0x004393FB  cc                    int3   
0x004393FC  cc                    int3   
0x004393FD  cc                    int3   
0x004393FE  cc                    int3   
0x004393FF  cc                    int3   
0x00439400  6aff                  push   -1
0x00439402  68b9c79a00            push   0x9ac7b9  ; -> sub_9AC7B9
0x00439407  64a100000000          mov    eax, dword ptr fs:[0]
0x0043940D  50                    push   eax
0x0043940E  81eca4050000          sub    esp, 0x5a4
0x00439414  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00439419  33c4                  xor    eax, esp
0x0043941B  898424a0050000        mov    dword ptr [esp + 0x5a0], eax
0x00439422  53                    push   ebx
0x00439423  55                    push   ebp
0x00439424  56                    push   esi
0x00439425  57                    push   edi
0x00439426  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0043942B  33c4                  xor    eax, esp
0x0043942D  50                    push   eax
0x0043942E  8d8424b8050000        lea    eax, [esp + 0x5b8]
0x00439435  64a300000000          mov    dword ptr fs:[0], eax
0x0043943B  8bf1                  mov    esi, ecx
0x0043943D  8b0d1c3ab300          mov    ecx, dword ptr [0xb33a1c]  ; g_modelLoader (ModelLoader**)
0x00439443  8b4620                mov    eax, dword ptr [esi + 0x20]
0x00439446  8b09                  mov    ecx, dword ptr [ecx]
0x00439448  33db                  xor    ebx, ebx
0x0043944A  8d7c2414              lea    edi, [esp + 0x14]
0x0043944E  895c2414              mov    dword ptr [esp + 0x14], ebx
0x00439452  8b11                  mov    edx, dword ptr [ecx]
0x00439454  57                    push   edi
0x00439455  50                    push   eax
0x00439456  8b4204                mov    eax, dword ptr [edx + 4]
0x00439459  ffd0                  call   eax
