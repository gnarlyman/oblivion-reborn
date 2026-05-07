; ============================================================
; sub_433FD0  (Crash 5: +0x3D)
; VA: 0x00433FD0  size: 0x180
; ============================================================
0x00433FD0  53                    push   ebx
0x00433FD1  56                    push   esi
0x00433FD2  57                    push   edi
0x00433FD3  8bf9                  mov    edi, ecx
0x00433FD5  8b5f14                mov    ebx, dword ptr [edi + 0x14]
0x00433FD8  8b4304                mov    eax, dword ptr [ebx + 4]
0x00433FDB  50                    push   eax
0x00433FDC  ff155081a200          call   dword ptr [0xa28150]
0x00433FE2  85c0                  test   eax, eax
0x00433FE4  7508                  jne    0x433fee  ; -> sub_433FEE
0x00433FE6  57                    push   edi
0x00433FE7  8bcb                  mov    ecx, ebx
0x00433FE9  e872ddffff            call   0x431d60  ; ThreadSpecificInterfaceManager::AddInterface
0x00433FEE  8b542410              mov    edx, dword ptr [esp + 0x10]
0x00433FF2  8bf0                  mov    esi, eax
0x00433FF4  8b442414              mov    eax, dword ptr [esp + 0x14]
0x00433FF8  8b0e                  mov    ecx, dword ptr [esi]
0x00433FFA  8b39                  mov    edi, dword ptr [ecx]
0x00433FFC  50                    push   eax
0x00433FFD  52                    push   edx
0x00433FFE  50                    push   eax
0x00433FFF  52                    push   edx
0x00434000  8b571c                mov    edx, dword ptr [edi + 0x1c]
0x00434003  ffd2                  call   edx
0x00434005  50                    push   eax
0x00434006  8bce                  mov    ecx, esi
0x00434008  e873f3ffff            call   0x433380  ; -> sub_433380
0x0043400D  5f                    pop    edi
0x0043400E  5e                    pop    esi
0x0043400F  5b                    pop    ebx
0x00434010  c20800                ret    8
0x00434013  cc                    int3   
0x00434014  cc                    int3   
0x00434015  cc                    int3   
0x00434016  cc                    int3   
0x00434017  cc                    int3   
0x00434018  cc                    int3   
0x00434019  cc                    int3   
0x0043401A  cc                    int3   
0x0043401B  cc                    int3   
0x0043401C  cc                    int3   
0x0043401D  cc                    int3   
0x0043401E  cc                    int3   
0x0043401F  cc                    int3   
0x00434020  83ec0c                sub    esp, 0xc
0x00434023  56                    push   esi
0x00434024  8bf1                  mov    esi, ecx
0x00434026  8b06                  mov    eax, dword ptr [esi]
0x00434028  8b5038                mov    edx, dword ptr [eax + 0x38]
0x0043402B  57                    push   edi
0x0043402C  ffd2                  call   edx
0x0043402E  85c0                  test   eax, eax
0x00434030  752b                  jne    0x43405d  ; -> sub_43405D
0x00434032  8b4e34                mov    ecx, dword ptr [esi + 0x34]
0x00434035  8b01                  mov    eax, dword ptr [ecx]
0x00434037  8b500c                mov    edx, dword ptr [eax + 0xc]
0x0043403A  ffd2                  call   edx
0x0043403C  85c0                  test   eax, eax
0x0043403E  751d                  jne    0x43405d  ; -> sub_43405D
0x00434040  a11c3ab300            mov    eax, dword ptr [0xb33a1c]  ; g_modelLoader (ModelLoader**)
0x00434045  8b7818                mov    edi, dword ptr [eax + 0x18]
0x00434048  8b4f28                mov    ecx, dword ptr [edi + 0x28]
0x0043404B  8b11                  mov    edx, dword ptr [ecx]
0x0043404D  8b420c                mov    eax, dword ptr [edx + 0xc]
0x00434050  ffd0                  call   eax
0x00434052  8b4f24                mov    ecx, dword ptr [edi + 0x24]
0x00434055  03c1                  add    eax, ecx
0x00434057  0f8459010000          je     0x4341b6  ; -> sub_4341B6
0x0043405D  8b7c2418              mov    edi, dword ptr [esp + 0x18]
0x00434061  53                    push   ebx
0x00434062  55                    push   ebp
0x00434063  6a00                  push   0
0x00434065  57                    push   edi
0x00434066  8bce                  mov    ecx, esi
0x00434068  897e38                mov    dword ptr [esi + 0x38], edi
0x0043406B  e8d0f9ffff            call   0x433a40  ; -> sub_433A40
0x00434070  8d7c7f02              lea    edi, [edi + edi*2 + 2]
0x00434074  33db                  xor    ebx, ebx
0x00434076  33c0                  xor    eax, eax
0x00434078  897c2418              mov    dword ptr [esp + 0x18], edi
0x0043407C  8d642400              lea    esp, [esp]
0x00434080  8b562c                mov    edx, dword ptr [esi + 0x2c]
0x00434083  8b0c82                mov    ecx, dword ptr [edx + eax*4]
0x00434086  83c001                add    eax, 1
0x00434089  03d9                  add    ebx, ecx
0x0043408B  3bc7                  cmp    eax, edi
0x0043408D  76f1                  jbe    0x434080  ; -> sub_434080
0x0043408F  8b4e34                mov    ecx, dword ptr [esi + 0x34]
0x00434092  8b11                  mov    edx, dword ptr [ecx]
0x00434094  8b420c                mov    eax, dword ptr [edx + 0xc]
0x00434097  ffd0                  call   eax
0x00434099  8b0d1c3ab300          mov    ecx, dword ptr [0xb33a1c]  ; g_modelLoader (ModelLoader**)
0x0043409F  8b7918                mov    edi, dword ptr [ecx + 0x18]
0x004340A2  8b4f28                mov    ecx, dword ptr [edi + 0x28]
0x004340A5  8b11                  mov    edx, dword ptr [ecx]
0x004340A7  8be8                  mov    ebp, eax
0x004340A9  8b420c                mov    eax, dword ptr [edx + 0xc]
0x004340AC  ffd0                  call   eax
0x004340AE  8b4f24                mov    ecx, dword ptr [edi + 0x24]
0x004340B1  03c3                  add    eax, ebx
0x004340B3  03c8                  add    ecx, eax
0x004340B5  03cd                  add    ecx, ebp
0x004340B7  894c2410              mov    dword ptr [esp + 0x10], ecx
0x004340BB  8bc1                  mov    eax, ecx
0x004340BD  0f84f1000000          je     0x4341b4  ; -> sub_4341B4
0x004340C3  8bd1                  mov    edx, ecx
0x004340C5  85d2                  test   edx, edx
0x004340C7  89542420              mov    dword ptr [esp + 0x20], edx
0x004340CB  db442420              fild   dword ptr [esp + 0x20]
0x004340CF  7d06                  jge    0x4340d7  ; -> sub_4340D7
0x004340D1  d80578fca200          fadd   dword ptr [0xa2fc78]
0x004340D7  d95c2414              fstp   dword ptr [esp + 0x14]
0x004340DB  eb07                  jmp    0x4340e4  ; -> sub_4340E4
0x004340DD  8d4900                lea    ecx, [ecx]
0x004340E0  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x004340E4  2bc8                  sub    ecx, eax
0x004340E6  85c9                  test   ecx, ecx
0x004340E8  894c2420              mov    dword ptr [esp + 0x20], ecx
0x004340EC  db442420              fild   dword ptr [esp + 0x20]
0x004340F0  7d06                  jge    0x4340f8  ; -> sub_4340F8
0x004340F2  d80578fca200          fadd   dword ptr [0xa2fc78]
0x004340F8  d8742414              fdiv   dword ptr [esp + 0x14]
0x004340FC  8b0d003bb300          mov    ecx, dword ptr [0xb33b00]
0x00434102  dc0df009a300          fmul   qword ptr [0xa309f0]
0x00434108  d95c2420              fstp   dword ptr [esp + 0x20]
0x0043410C  e8ef630200            call   0x45a500  ; -> sub_45A500
0x00434111  84c0                  test   al, al
0x00434113  7421                  je     0x434136  ; -> sub_434136
0x00434115  8b0d003bb300          mov    ecx, dword ptr [0xb33b00]
0x0043411B  8b4118                mov    eax, dword ptr [ecx + 0x18]
0x0043411E  c1e80b                shr    eax, 0xb
0x00434121  a801                  test   al, 1
0x00434123  7411                  je     0x434136  ; -> sub_434136
0x00434125  d9442420              fld    dword ptr [esp + 0x20]
0x00434129  51                    push   ecx
0x0043412A  d91c24                fstp   dword ptr [esp]
0x0043412D  6a02                  push   2
0x0043412F  e86ce20100            call   0x4523a0  ; -> sub_4523A0
0x00434134  eb12                  jmp    0x434148  ; -> sub_434148
0x00434136  d9442420              fld    dword ptr [esp + 0x20]
0x0043413A  51                    push   ecx
0x0043413B  d91c24                fstp   dword ptr [esp]
0x0043413E  6a02                  push   2
0x00434140  e80b781400            call   0x57b950  ; -> sub_57B950
0x00434145  83c408                add    esp, 8
0x00434148  8b16                  mov    edx, dword ptr [esi]
0x0043414A  8b4238                mov    eax, dword ptr [edx + 0x38]
0x0043414D  8bce                  mov    ecx, esi
