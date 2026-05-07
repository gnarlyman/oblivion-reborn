ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x005538D0
; VA: 0x005538D0  size: 0x300
; ============================================================
0x005538D0  a1809bb300            mov    eax, dword ptr [0xb39b80]
0x005538D5  85c0                  test   eax, eax
0x005538D7  750a                  jne    0x5538e3  ; -> sub_5538E3
0x005538D9  e872fcffff            call   0x553550  ; -> sub_553550
0x005538DE  a1809bb300            mov    eax, dword ptr [0xb39b80]
0x005538E3  83c008                add    eax, 8
0x005538E6  c3                    ret    
0x005538E7  cc                    int3   
0x005538E8  cc                    int3   
0x005538E9  cc                    int3   
0x005538EA  cc                    int3   
0x005538EB  cc                    int3   
0x005538EC  cc                    int3   
0x005538ED  cc                    int3   
0x005538EE  cc                    int3   
0x005538EF  cc                    int3   
0x005538F0  83ec1c                sub    esp, 0x1c
0x005538F3  837c242000            cmp    dword ptr [esp + 0x20], 0
0x005538F8  d9ee                  fldz   
0x005538FA  d91c24                fstp   dword ptr [esp]
0x005538FD  0f84cb000000          je     0x5539ce  ; -> sub_5539CE
0x00553903  57                    push   edi
0x00553904  8b3d809bb300          mov    edi, dword ptr [0xb39b80]
0x0055390A  85ff                  test   edi, edi
0x0055390C  750b                  jne    0x553919  ; -> sub_553919
0x0055390E  e83dfcffff            call   0x553550  ; -> sub_553550
0x00553913  8b3d809bb300          mov    edi, dword ptr [0xb39b80]
0x00553919  8b44242c              mov    eax, dword ptr [esp + 0x2c]
0x0055391D  8b4c2428              mov    ecx, dword ptr [esp + 0x28]
0x00553921  53                    push   ebx
0x00553922  8d1c48                lea    ebx, [eax + ecx*2]
0x00553925  56                    push   esi
0x00553926  8bf3                  mov    esi, ebx
0x00553928  c1e604                shl    esi, 4
0x0055392B  8b843e8c000000        mov    eax, dword ptr [esi + edi + 0x8c]
0x00553932  85c0                  test   eax, eax
0x00553934  0f849b000000          je     0x5539d5  ; -> sub_5539D5
0x0055393A  8b8c3e90000000        mov    ecx, dword ptr [esi + edi + 0x90]
0x00553941  2bc8                  sub    ecx, eax
0x00553943  b84fecc44e            mov    eax, 0x4ec4ec4f
0x00553948  f7e9                  imul   ecx
0x0055394A  c1fa04                sar    edx, 4
0x0055394D  8bc2                  mov    eax, edx
0x0055394F  c1e81f                shr    eax, 0x1f
0x00553952  55                    push   ebp
0x00553953  8b6c243c              mov    ebp, dword ptr [esp + 0x3c]
0x00553957  03c2                  add    eax, edx
0x00553959  3be8                  cmp    ebp, eax
0x0055395B  7365                  jae    0x5539c2  ; -> sub_5539C2
0x0055395D  85ff                  test   edi, edi
0x0055395F  750b                  jne    0x55396c  ; -> sub_55396C
0x00553961  e8eafbffff            call   0x553550  ; -> sub_553550
0x00553966  8b3d809bb300          mov    edi, dword ptr [0xb39b80]
0x0055396C  8b442430              mov    eax, dword ptr [esp + 0x30]
0x00553970  8d145b                lea    edx, [ebx + ebx*2]
0x00553973  8d0cd0                lea    ecx, [eax + edx*8]
0x00553976  51                    push   ecx
0x00553977  8d542418              lea    edx, [esp + 0x18]
0x0055397B  52                    push   edx
0x0055397C  55                    push   ebp
0x0055397D  8d8c3e88000000        lea    ecx, [esi + edi + 0x88]
0x00553984  e837bdffff            call   0x54f6c0  ; -> sub_54F6C0
0x00553989  8bc8                  mov    ecx, eax
0x0055398B  e830eaffff            call   0x5523c0  ; -> sub_5523C0
0x00553990  8bf0                  mov    esi, eax
0x00553992  8b460c                mov    eax, dword ptr [esi + 0xc]
0x00553995  85c0                  test   eax, eax
0x00553997  740a                  je     0x5539a3  ; -> sub_5539A3
0x00553999  8b4e10                mov    ecx, dword ptr [esi + 0x10]
0x0055399C  2bc8                  sub    ecx, eax
0x0055399E  c1f902                sar    ecx, 2
0x005539A1  7505                  jne    0x5539a8  ; -> sub_5539A8
0x005539A3  e8b6134300            call   0x984d5e  ; -> sub_984D5E
0x005539A8  8b560c                mov    edx, dword ptr [esi + 0xc]
0x005539AB  8b442420              mov    eax, dword ptr [esp + 0x20]
0x005539AF  d902                  fld    dword ptr [edx]
0x005539B1  85c0                  test   eax, eax
0x005539B3  d95c2410              fstp   dword ptr [esp + 0x10]
0x005539B7  7409                  je     0x5539c2  ; -> sub_5539C2
0x005539B9  50                    push   eax
0x005539BA  e861e5eaff            call   0x401f20  ; -> sub_401F20
0x005539BF  83c404                add    esp, 4
0x005539C2  d9442410              fld    dword ptr [esp + 0x10]
0x005539C6  5d                    pop    ebp
0x005539C7  5e                    pop    esi
0x005539C8  5b                    pop    ebx
0x005539C9  5f                    pop    edi
0x005539CA  83c41c                add    esp, 0x1c
0x005539CD  c3                    ret    
0x005539CE  d90424                fld    dword ptr [esp]
0x005539D1  83c41c                add    esp, 0x1c
0x005539D4  c3                    ret    
0x005539D5  d944240c              fld    dword ptr [esp + 0xc]
0x005539D9  5e                    pop    esi
0x005539DA  5b                    pop    ebx
0x005539DB  5f                    pop    edi
0x005539DC  83c41c                add    esp, 0x1c
0x005539DF  c3                    ret    
0x005539E0  6aff                  push   -1
0x005539E2  6810c09b00            push   0x9bc010  ; -> sub_9BC010
0x005539E7  64a100000000          mov    eax, dword ptr fs:[0]
0x005539ED  50                    push   eax
0x005539EE  83ec30                sub    esp, 0x30
0x005539F1  53                    push   ebx
0x005539F2  55                    push   ebp
0x005539F3  56                    push   esi
0x005539F4  57                    push   edi
0x005539F5  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x005539FA  33c4                  xor    eax, esp
0x005539FC  50                    push   eax
0x005539FD  8d442444              lea    eax, [esp + 0x44]
0x00553A01  64a300000000          mov    dword ptr fs:[0], eax
0x00553A07  837c245400            cmp    dword ptr [esp + 0x54], 0
0x00553A0C  0f8405010000          je     0x553b17  ; -> sub_553B17
0x00553A12  8b0d809bb300          mov    ecx, dword ptr [0xb39b80]
0x00553A18  85c9                  test   ecx, ecx
0x00553A1A  750b                  jne    0x553a27  ; -> sub_553A27
0x00553A1C  e82ffbffff            call   0x553550  ; -> sub_553550
0x00553A21  8b0d809bb300          mov    ecx, dword ptr [0xb39b80]
0x00553A27  8b442458              mov    eax, dword ptr [esp + 0x58]
0x00553A2B  8b6c245c              mov    ebp, dword ptr [esp + 0x5c]
0x00553A2F  8d7c4500              lea    edi, [ebp + eax*2]
0x00553A33  8bf7                  mov    esi, edi
0x00553A35  c1e604                shl    esi, 4
0x00553A38  8b840e8c000000        mov    eax, dword ptr [esi + ecx + 0x8c]
0x00553A3F  85c0                  test   eax, eax
0x00553A41  0f84d0000000          je     0x553b17  ; -> sub_553B17
0x00553A47  8b8c0e90000000        mov    ecx, dword ptr [esi + ecx + 0x90]
0x00553A4E  8b5c2460              mov    ebx, dword ptr [esp + 0x60]
0x00553A52  2bc8                  sub    ecx, eax
0x00553A54  b84fecc44e            mov    eax, 0x4ec4ec4f
0x00553A59  f7e9                  imul   ecx
0x00553A5B  c1fa04                sar    edx, 4
0x00553A5E  8bc2                  mov    eax, edx
0x00553A60  c1e81f                shr    eax, 0x1f
0x00553A63  03c2                  add    eax, edx
0x00553A65  3bd8                  cmp    ebx, eax
0x00553A67  0f83aa000000          jae    0x553b17  ; -> sub_553B17
0x00553A6D  8b4c2458              mov    ecx, dword ptr [esp + 0x58]
0x00553A71  53                    push   ebx
0x00553A72  55                    push   ebp
0x00553A73  8b6c245c              mov    ebp, dword ptr [esp + 0x5c]
0x00553A77  51                    push   ecx
0x00553A78  55                    push   ebp
0x00553A79  e872feffff            call   0x5538f0  ; -> sub_5538F0
0x00553A7E  d95c2464              fstp   dword ptr [esp + 0x64]
0x00553A82  d9442474              fld    dword ptr [esp + 0x74]
0x00553A86  83c410                add    esp, 0x10
0x00553A89  833d809bb30000        cmp    dword ptr [0xb39b80], 0
0x00553A90  d8642454              fsub   dword ptr [esp + 0x54]
0x00553A94  d95c2454              fstp   dword ptr [esp + 0x54]
0x00553A98  7505                  jne    0x553a9f  ; -> sub_553A9F
0x00553A9A  e8b1faffff            call   0x553550  ; -> sub_553550
0x00553A9F  a1809bb300            mov    eax, dword ptr [0xb39b80]
0x00553AA4  8d54242c              lea    edx, [esp + 0x2c]
0x00553AA8  52                    push   edx
0x00553AA9  53                    push   ebx
0x00553AAA  8d8c0688000000        lea    ecx, [esi + eax + 0x88]
0x00553AB1  e80abcffff            call   0x54f6c0  ; -> sub_54F6C0
0x00553AB6  8bc8                  mov    ecx, eax
0x00553AB8  e873ecffff            call   0x552730  ; -> sub_552730
0x00553ABD  d9442454              fld    dword ptr [esp + 0x54]
0x00553AC1  51                    push   ecx
0x00553AC2  8d4c2418              lea    ecx, [esp + 0x18]
0x00553AC6  d91c24                fstp   dword ptr [esp]
0x00553AC9  51                    push   ecx
0x00553ACA  33f6                  xor    esi, esi
0x00553ACC  8bc8                  mov    ecx, eax
0x00553ACE  89742454              mov    dword ptr [esp + 0x54], esi
0x00553AD2  e839e8ffff            call   0x552310  ; -> sub_552310
0x00553AD7  8d147f                lea    edx, [edi + edi*2]
0x00553ADA  50                    push   eax
0x00553ADB  8d4cd500              lea    ecx, [ebp + edx*8]
0x00553ADF  c644245001            mov    byte ptr [esp + 0x50], 1
0x00553AE4  e8b7e2ffff            call   0x551da0  ; -> sub_551DA0
0x00553AE9  8b442420              mov    eax, dword ptr [esp + 0x20]
0x00553AED  3bc6                  cmp    eax, esi
0x00553AEF  7409                  je     0x553afa  ; -> sub_553AFA
0x00553AF1  50                    push   eax
0x00553AF2  e829e4eaff            call   0x401f20  ; -> sub_401F20
0x00553AF7  83c404                add    esp, 4
0x00553AFA  8b442438              mov    eax, dword ptr [esp + 0x38]
0x00553AFE  3bc6                  cmp    eax, esi
0x00553B00  89742420              mov    dword ptr [esp + 0x20], esi
0x00553B04  89742424              mov    dword ptr [esp + 0x24], esi
0x00553B08  89742428              mov    dword ptr [esp + 0x28], esi
0x00553B0C  7409                  je     0x553b17  ; -> sub_553B17
0x00553B0E  50                    push   eax
0x00553B0F  e80ce4eaff            call   0x401f20  ; -> sub_401F20
0x00553B14  83c404                add    esp, 4
0x00553B17  8b4c2444              mov    ecx, dword ptr [esp + 0x44]
0x00553B1B  64890d00000000        mov    dword ptr fs:[0], ecx
0x00553B22  59                    pop    ecx
0x00553B23  5f                    pop    edi
0x00553B24  5e                    pop    esi
0x00553B25  5d                    pop    ebp
0x00553B26  5b                    pop    ebx
0x00553B27  83c43c                add    esp, 0x3c
0x00553B2A  c3                    ret    
0x00553B2B  cc                    int3   
0x00553B2C  cc                    int3   
0x00553B2D  cc                    int3   
0x00553B2E  cc                    int3   
0x00553B2F  cc                    int3   
0x00553B30  833d809bb30000        cmp    dword ptr [0xb39b80], 0
0x00553B37  7505                  jne    0x553b3e  ; -> sub_553B3E
0x00553B39  e812faffff            call   0x553550  ; -> sub_553550
0x00553B3E  8b442404              mov    eax, dword ptr [esp + 4]
0x00553B42  8b4c240c              mov    ecx, dword ptr [esp + 0xc]
0x00553B46  8b542408              mov    edx, dword ptr [esp + 8]
0x00553B4A  50                    push   eax
0x00553B4B  51                    push   ecx
0x00553B4C  8b0d809bb300          mov    ecx, dword ptr [0xb39b80]
0x00553B52  52                    push   edx
0x00553B53  6a00                  push   0
0x00553B55  81c1c8000000          add    ecx, 0xc8
0x00553B5B  e8d0a11900            call   0x6edd30  ; -> sub_6EDD30
0x00553B60  c3                    ret    
0x00553B61  cc                    int3   
0x00553B62  cc                    int3   
0x00553B63  cc                    int3   
0x00553B64  cc                    int3   
0x00553B65  cc                    int3   
0x00553B66  cc                    int3   
0x00553B67  cc                    int3   
0x00553B68  cc                    int3   
0x00553B69  cc                    int3   
0x00553B6A  cc                    int3   
0x00553B6B  cc                    int3   
0x00553B6C  cc                    int3   
0x00553B6D  cc                    int3   
0x00553B6E  cc                    int3   
0x00553B6F  cc                    int3   
0x00553B70  57                    push   edi
0x00553B71  8b7c2410              mov    edi, dword ptr [esp + 0x10]
0x00553B75  85ff                  test   edi, edi
0x00553B77  7433                  je     0x553bac  ; -> sub_553BAC
0x00553B79  56                    push   esi
0x00553B7A  8b742410              mov    esi, dword ptr [esp + 0x10]
0x00553B7E  85f6                  test   esi, esi
0x00553B80  7429                  je     0x553bab  ; -> sub_553BAB
0x00553B82  833d809bb30000        cmp    dword ptr [0xb39b80], 0
0x00553B89  7505                  jne    0x553b90  ; -> sub_553B90
0x00553B8B  e8c0f9ffff            call   0x553550  ; -> sub_553550
0x00553B90  d944240c              fld    dword ptr [esp + 0xc]
0x00553B94  57                    push   edi
0x00553B95  56                    push   esi
0x00553B96  51                    push   ecx
0x00553B97  8b0d809bb300          mov    ecx, dword ptr [0xb39b80]
0x00553B9D  d91c24                fstp   dword ptr [esp]
0x00553BA0  81c1c8000000          add    ecx, 0xc8
0x00553BA6  e865a41900            call   0x6ee010  ; -> sub_6EE010
0x00553BAB  5e                    pop    esi
0x00553BAC  5f                    pop    edi
0x00553BAD  c3                    ret    
0x00553BAE  cc                    int3   
0x00553BAF  cc                    int3   
0x00553BB0  6aff                  push   -1
0x00553BB2  68a3c09b00            push   0x9bc0a3  ; -> sub_9BC0A3
0x00553BB7  64a100000000          mov    eax, dword ptr fs:[0]
0x00553BBD  50                    push   eax
0x00553BBE  81ecd0000000          sub    esp, 0xd0
0x00553BC4  53                    push   ebx
0x00553BC5  55                    push   ebp
0x00553BC6  56                    push   esi
0x00553BC7  57                    push   edi
0x00553BC8  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00553BCD  33c4                  xor    eax, esp
0x00553BCF  50                    push   eax

