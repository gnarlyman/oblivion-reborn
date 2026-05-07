ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x005528F0
; VA: 0x005528F0  size: 0x600
; ============================================================
0x005528F0  51                    push   ecx
0x005528F1  57                    push   edi
0x005528F2  8b7c240c              mov    edi, dword ptr [esp + 0xc]
0x005528F6  85ff                  test   edi, edi
0x005528F8  0f848b000000          je     0x552989  ; -> sub_552989
0x005528FE  8b442410              mov    eax, dword ptr [esp + 0x10]
0x00552902  85c0                  test   eax, eax
0x00552904  0f847f000000          je     0x552989  ; -> sub_552989
0x0055290A  53                    push   ebx
0x0055290B  8bdf                  mov    ebx, edi
0x0055290D  55                    push   ebp
0x0055290E  2bd8                  sub    ebx, eax
0x00552910  56                    push   esi
0x00552911  895c2410              mov    dword ptr [esp + 0x10], ebx
0x00552915  8d7004                lea    esi, [eax + 4]
0x00552918  c744241802000000      mov    dword ptr [esp + 0x18], 2
0x00552920  bd02000000            mov    ebp, 2
0x00552925  8b07                  mov    eax, dword ptr [edi]
0x00552927  d9ee                  fldz   
0x00552929  85c0                  test   eax, eax
0x0055292B  742c                  je     0x552959  ; -> sub_552959
0x0055292D  8b0c33                mov    ecx, dword ptr [ebx + esi]
0x00552930  85c9                  test   ecx, ecx
0x00552932  7425                  je     0x552959  ; -> sub_552959
0x00552934  8d5efc                lea    ebx, [esi - 4]
0x00552937  8903                  mov    dword ptr [ebx], eax
0x00552939  0fafc1                imul   eax, ecx
0x0055293C  51                    push   ecx
0x0055293D  890e                  mov    dword ptr [esi], ecx
0x0055293F  8d4e04                lea    ecx, [esi + 4]
0x00552942  d91c24                fstp   dword ptr [esp]
0x00552945  50                    push   eax
0x00552946  e81548fdff            call   0x527160  ; -> sub_527160
0x0055294B  57                    push   edi
0x0055294C  8bcb                  mov    ecx, ebx
0x0055294E  e88df7ffff            call   0x5520e0  ; -> sub_5520E0
0x00552953  8b5c2410              mov    ebx, dword ptr [esp + 0x10]
0x00552957  eb1b                  jmp    0x552974  ; -> sub_552974
0x00552959  51                    push   ecx
0x0055295A  d91c24                fstp   dword ptr [esp]
0x0055295D  6a00                  push   0
0x0055295F  8d4e04                lea    ecx, [esi + 4]
0x00552962  c746fc00000000        mov    dword ptr [esi - 4], 0
0x00552969  c70600000000          mov    dword ptr [esi], 0
0x0055296F  e8ec47fdff            call   0x527160  ; -> sub_527160
0x00552974  83c718                add    edi, 0x18
0x00552977  83c618                add    esi, 0x18
0x0055297A  83ed01                sub    ebp, 1
0x0055297D  75a6                  jne    0x552925  ; -> sub_552925
0x0055297F  836c241801            sub    dword ptr [esp + 0x18], 1
0x00552984  759a                  jne    0x552920  ; -> sub_552920
0x00552986  5e                    pop    esi
0x00552987  5d                    pop    ebp
0x00552988  5b                    pop    ebx
0x00552989  5f                    pop    edi
0x0055298A  59                    pop    ecx
0x0055298B  c3                    ret    
0x0055298C  cc                    int3   
0x0055298D  cc                    int3   
0x0055298E  cc                    int3   
0x0055298F  cc                    int3   
0x00552990  6aff                  push   -1
0x00552992  6868bd9b00            push   0x9bbd68  ; -> sub_9BBD68
0x00552997  64a100000000          mov    eax, dword ptr fs:[0]
0x0055299D  50                    push   eax
0x0055299E  83ec28                sub    esp, 0x28
0x005529A1  53                    push   ebx
0x005529A2  55                    push   ebp
0x005529A3  56                    push   esi
0x005529A4  57                    push   edi
0x005529A5  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x005529AA  33c4                  xor    eax, esp
0x005529AC  50                    push   eax
0x005529AD  8d44243c              lea    eax, [esp + 0x3c]
0x005529B1  64a300000000          mov    dword ptr fs:[0], eax
0x005529B7  8b542454              mov    edx, dword ptr [esp + 0x54]
0x005529BB  85d2                  test   edx, edx
0x005529BD  0f842f020000          je     0x552bf2  ; -> sub_552BF2
0x005529C3  8b44244c              mov    eax, dword ptr [esp + 0x4c]
0x005529C7  85c0                  test   eax, eax
0x005529C9  752a                  jne    0x5529f5  ; -> sub_5529F5
0x005529CB  8b442450              mov    eax, dword ptr [esp + 0x50]
0x005529CF  85c0                  test   eax, eax
0x005529D1  0f841b020000          je     0x552bf2  ; -> sub_552BF2
0x005529D7  52                    push   edx
0x005529D8  50                    push   eax
0x005529D9  e812ffffff            call   0x5528f0  ; -> sub_5528F0
0x005529DE  83c408                add    esp, 8
0x005529E1  8b4c243c              mov    ecx, dword ptr [esp + 0x3c]
0x005529E5  64890d00000000        mov    dword ptr fs:[0], ecx
0x005529EC  59                    pop    ecx
0x005529ED  5f                    pop    edi
0x005529EE  5e                    pop    esi
0x005529EF  5d                    pop    ebp
0x005529F0  5b                    pop    ebx
0x005529F1  83c434                add    esp, 0x34
0x005529F4  c3                    ret    
0x005529F5  8b4c2450              mov    ecx, dword ptr [esp + 0x50]
0x005529F9  85c9                  test   ecx, ecx
0x005529FB  74da                  je     0x5529d7  ; -> sub_5529D7
0x005529FD  2bc8                  sub    ecx, eax
0x005529FF  894c2420              mov    dword ptr [esp + 0x20], ecx
0x00552A03  8bc8                  mov    ecx, eax
0x00552A05  33db                  xor    ebx, ebx
0x00552A07  2bca                  sub    ecx, edx
0x00552A09  894c2414              mov    dword ptr [esp + 0x14], ecx
0x00552A0D  eb09                  jmp    0x552a18  ; -> sub_552A18
0x00552A0F  90                    nop    
0x00552A10  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x00552A14  8b542454              mov    edx, dword ptr [esp + 0x54]
0x00552A18  8d345b                lea    esi, [ebx + ebx*2]
0x00552A1B  c1e604                shl    esi, 4
0x00552A1E  03f2                  add    esi, edx
0x00552A20  8d6a30                lea    ebp, [edx + 0x30]
0x00552A23  c744241802000000      mov    dword ptr [esp + 0x18], 2
0x00552A2B  eb07                  jmp    0x552a34  ; -> sub_552A34
0x00552A2D  8d4900                lea    ecx, [ecx]
0x00552A30  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x00552A34  8b0431                mov    eax, dword ptr [ecx + esi]
0x00552A37  d9ee                  fldz   
0x00552A39  85c0                  test   eax, eax
0x00552A3B  8d3c31                lea    edi, [ecx + esi]
0x00552A3E  0f8470010000          je     0x552bb4  ; -> sub_552BB4
0x00552A44  8b4c3104              mov    ecx, dword ptr [ecx + esi + 4]
0x00552A48  85c9                  test   ecx, ecx
0x00552A4A  0f8464010000          je     0x552bb4  ; -> sub_552BB4
0x00552A50  8906                  mov    dword ptr [esi], eax
0x00552A52  0fafc1                imul   eax, ecx
0x00552A55  51                    push   ecx
0x00552A56  894e04                mov    dword ptr [esi + 4], ecx
0x00552A59  8d4e08                lea    ecx, [esi + 8]
0x00552A5C  d91c24                fstp   dword ptr [esp]
0x00552A5F  50                    push   eax
0x00552A60  e8fb46fdff            call   0x527160  ; -> sub_527160
0x00552A65  83fb01                cmp    ebx, 1
0x00552A68  0f8590000000          jne    0x552afe  ; -> sub_552AFE
0x00552A6E  807c245800            cmp    byte ptr [esp + 0x58], 0
0x00552A73  0f8485000000          je     0x552afe  ; -> sub_552AFE
0x00552A79  8b442414              mov    eax, dword ptr [esp + 0x14]
0x00552A7D  03c5                  add    eax, ebp
0x00552A7F  50                    push   eax
0x00552A80  8bcd                  mov    ecx, ebp
0x00552A82  e859f6ffff            call   0x5520e0  ; -> sub_5520E0
0x00552A87  d9ee                  fldz   
0x00552A89  d85c245c              fcomp  dword ptr [esp + 0x5c]
0x00552A8D  dfe0                  fnstsw ax
0x00552A8F  f6c405                test   ah, 5
0x00552A92  0f8a3d010000          jp     0x552bd5  ; -> sub_552BD5
0x00552A98  8b7d00                mov    edi, dword ptr [ebp]
0x00552A9B  8bcd                  mov    ecx, ebp
0x00552A9D  e82ee7ffff            call   0x5511d0  ; -> sub_5511D0
0x00552AA2  85ff                  test   edi, edi
0x00552AA4  897c241c              mov    dword ptr [esp + 0x1c], edi
0x00552AA8  db44241c              fild   dword ptr [esp + 0x1c]
0x00552AAC  7d06                  jge    0x552ab4  ; -> sub_552AB4
0x00552AAE  d80578fca200          fadd   dword ptr [0xa2fc78]
0x00552AB4  def9                  fdivp  st(1)
0x00552AB6  d95c241c              fstp   dword ptr [esp + 0x1c]
0x00552ABA  d944241c              fld    dword ptr [esp + 0x1c]
0x00552ABE  e86d014300            call   0x982c30  ; -> sub_982C30
0x00552AC3  d95c241c              fstp   dword ptr [esp + 0x1c]
0x00552AC7  d944241c              fld    dword ptr [esp + 0x1c]
0x00552ACB  d95c241c              fstp   dword ptr [esp + 0x1c]
0x00552ACF  d944241c              fld    dword ptr [esp + 0x1c]
0x00552AD3  d944245c              fld    dword ptr [esp + 0x5c]
0x00552AD7  d8d1                  fcom   st(1)
0x00552AD9  dfe0                  fnstsw ax
0x00552ADB  f6c405                test   ah, 5
0x00552ADE  0f8aed000000          jp     0x552bd1  ; -> sub_552BD1
0x00552AE4  def1                  fdivrp st(1)
0x00552AE6  51                    push   ecx
0x00552AE7  8bcd                  mov    ecx, ebp
0x00552AE9  d95c2420              fstp   dword ptr [esp + 0x20]
0x00552AED  d9442420              fld    dword ptr [esp + 0x20]
0x00552AF1  d91c24                fstp   dword ptr [esp]
0x00552AF4  e847f2ffff            call   0x551d40  ; -> sub_551D40
0x00552AF9  e9d7000000            jmp    0x552bd5  ; -> sub_552BD5
0x00552AFE  8b4c2420              mov    ecx, dword ptr [esp + 0x20]
0x00552B02  8d140f                lea    edx, [edi + ecx]
0x00552B05  52                    push   edx
0x00552B06  8d442428              lea    eax, [esp + 0x28]
0x00552B0A  50                    push   eax
0x00552B0B  8bcf                  mov    ecx, edi
0x00552B0D  e81efaffff            call   0x552530  ; -> sub_552530
0x00552B12  33ff                  xor    edi, edi
0x00552B14  50                    push   eax
0x00552B15  8bce                  mov    ecx, esi
0x00552B17  897c2448              mov    dword ptr [esp + 0x48], edi
0x00552B1B  e8c0f5ffff            call   0x5520e0  ; -> sub_5520E0
0x00552B20  8b442430              mov    eax, dword ptr [esp + 0x30]
0x00552B24  3bc7                  cmp    eax, edi
0x00552B26  c7442444ffffffff      mov    dword ptr [esp + 0x44], 0xffffffff
0x00552B2E  7409                  je     0x552b39  ; -> sub_552B39
0x00552B30  50                    push   eax
0x00552B31  e8eaf3eaff            call   0x401f20  ; -> sub_401F20
0x00552B36  83c404                add    esp, 4
0x00552B39  d9ee                  fldz   
0x00552B3B  897c2430              mov    dword ptr [esp + 0x30], edi
0x00552B3F  d85c245c              fcomp  dword ptr [esp + 0x5c]
0x00552B43  897c2434              mov    dword ptr [esp + 0x34], edi
0x00552B47  897c2438              mov    dword ptr [esp + 0x38], edi
0x00552B4B  dfe0                  fnstsw ax
0x00552B4D  f6c405                test   ah, 5
0x00552B50  0f8a7f000000          jp     0x552bd5  ; -> sub_552BD5
0x00552B56  8b3e                  mov    edi, dword ptr [esi]
0x00552B58  8bce                  mov    ecx, esi
0x00552B5A  e871e6ffff            call   0x5511d0  ; -> sub_5511D0
0x00552B5F  85ff                  test   edi, edi
0x00552B61  897c241c              mov    dword ptr [esp + 0x1c], edi
0x00552B65  db44241c              fild   dword ptr [esp + 0x1c]
0x00552B69  7d06                  jge    0x552b71  ; -> sub_552B71
0x00552B6B  d80578fca200          fadd   dword ptr [0xa2fc78]
0x00552B71  def9                  fdivp  st(1)
0x00552B73  d95c241c              fstp   dword ptr [esp + 0x1c]
0x00552B77  d944241c              fld    dword ptr [esp + 0x1c]
0x00552B7B  e8b0004300            call   0x982c30  ; -> sub_982C30
0x00552B80  d95c241c              fstp   dword ptr [esp + 0x1c]
0x00552B84  d944241c              fld    dword ptr [esp + 0x1c]
0x00552B88  d95c241c              fstp   dword ptr [esp + 0x1c]
0x00552B8C  d944241c              fld    dword ptr [esp + 0x1c]
0x00552B90  d944245c              fld    dword ptr [esp + 0x5c]
0x00552B94  d8d1                  fcom   st(1)
0x00552B96  dfe0                  fnstsw ax
0x00552B98  f6c405                test   ah, 5
0x00552B9B  7a34                  jp     0x552bd1  ; -> sub_552BD1
0x00552B9D  def1                  fdivrp st(1)
0x00552B9F  51                    push   ecx
0x00552BA0  8bce                  mov    ecx, esi
0x00552BA2  d95c2420              fstp   dword ptr [esp + 0x20]
0x00552BA6  d9442420              fld    dword ptr [esp + 0x20]
0x00552BAA  d91c24                fstp   dword ptr [esp]
0x00552BAD  e88ef1ffff            call   0x551d40  ; -> sub_551D40
0x00552BB2  eb21                  jmp    0x552bd5  ; -> sub_552BD5
0x00552BB4  51                    push   ecx
0x00552BB5  d91c24                fstp   dword ptr [esp]
0x00552BB8  6a00                  push   0
0x00552BBA  8d4e08                lea    ecx, [esi + 8]
0x00552BBD  c70600000000          mov    dword ptr [esi], 0
0x00552BC3  c7460400000000        mov    dword ptr [esi + 4], 0
0x00552BCA  e89145fdff            call   0x527160  ; -> sub_527160
0x00552BCF  eb04                  jmp    0x552bd5  ; -> sub_552BD5
0x00552BD1  ddd8                  fstp   st(0)
0x00552BD3  ddd8                  fstp   st(0)
0x00552BD5  83c518                add    ebp, 0x18
0x00552BD8  83c618                add    esi, 0x18
0x00552BDB  836c241801            sub    dword ptr [esp + 0x18], 1
0x00552BE0  0f854afeffff          jne    0x552a30  ; -> sub_552A30
0x00552BE6  83c301                add    ebx, 1
0x00552BE9  83fb02                cmp    ebx, 2
0x00552BEC  0f8c1efeffff          jl     0x552a10  ; -> sub_552A10
0x00552BF2  8b4c243c              mov    ecx, dword ptr [esp + 0x3c]
0x00552BF6  64890d00000000        mov    dword ptr fs:[0], ecx
0x00552BFD  59                    pop    ecx
0x00552BFE  5f                    pop    edi
0x00552BFF  5e                    pop    esi
0x00552C00  5d                    pop    ebp
0x00552C01  5b                    pop    ebx
0x00552C02  83c434                add    esp, 0x34
0x00552C05  c3                    ret    
0x00552C06  cc                    int3   
0x00552C07  cc                    int3   
0x00552C08  cc                    int3   
0x00552C09  cc                    int3   
0x00552C0A  cc                    int3   
0x00552C0B  cc                    int3   
0x00552C0C  cc                    int3   
0x00552C0D  cc                    int3   
0x00552C0E  cc                    int3   
0x00552C0F  cc                    int3   
0x00552C10  6aff                  push   -1
0x00552C12  6898bd9b00            push   0x9bbd98  ; -> sub_9BBD98
0x00552C17  64a100000000          mov    eax, dword ptr fs:[0]
0x00552C1D  50                    push   eax
0x00552C1E  83ec20                sub    esp, 0x20
0x00552C21  53                    push   ebx
0x00552C22  55                    push   ebp
0x00552C23  56                    push   esi
0x00552C24  57                    push   edi
0x00552C25  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00552C2A  33c4                  xor    eax, esp
0x00552C2C  50                    push   eax
0x00552C2D  8d442434              lea    eax, [esp + 0x34]
0x00552C31  64a300000000          mov    dword ptr fs:[0], eax
0x00552C37  8b7c2444              mov    edi, dword ptr [esp + 0x44]
0x00552C3B  85ff                  test   edi, edi
0x00552C3D  0f84dd000000          je     0x552d20  ; -> sub_552D20
0x00552C43  8b6c2448              mov    ebp, dword ptr [esp + 0x48]
0x00552C47  85ed                  test   ebp, ebp
0x00552C49  0f84d1000000          je     0x552d20  ; -> sub_552D20
0x00552C4F  8b44244c              mov    eax, dword ptr [esp + 0x4c]
0x00552C53  85c0                  test   eax, eax
0x00552C55  0f84c5000000          je     0x552d20  ; -> sub_552D20
0x00552C5B  8bdf                  mov    ebx, edi
0x00552C5D  2bd8                  sub    ebx, eax
0x00552C5F  895c2418              mov    dword ptr [esp + 0x18], ebx
0x00552C63  2bef                  sub    ebp, edi
0x00552C65  8d7004                lea    esi, [eax + 4]
0x00552C68  c744241402000000      mov    dword ptr [esp + 0x14], 2
0x00552C70  c744244402000000      mov    dword ptr [esp + 0x44], 2
0x00552C78  8b07                  mov    eax, dword ptr [edi]
0x00552C7A  d9ee                  fldz   
0x00552C7C  85c0                  test   eax, eax
0x00552C7E  7469                  je     0x552ce9  ; -> sub_552CE9
0x00552C80  8b0c33                mov    ecx, dword ptr [ebx + esi]
0x00552C83  85c9                  test   ecx, ecx
0x00552C85  7462                  je     0x552ce9  ; -> sub_552CE9
0x00552C87  8d5efc                lea    ebx, [esi - 4]
0x00552C8A  8903                  mov    dword ptr [ebx], eax
0x00552C8C  0fafc1                imul   eax, ecx
0x00552C8F  51                    push   ecx
0x00552C90  890e                  mov    dword ptr [esi], ecx
0x00552C92  8d4e04                lea    ecx, [esi + 4]
0x00552C95  d91c24                fstp   dword ptr [esp]
0x00552C98  50                    push   eax
0x00552C99  e8c244fdff            call   0x527160  ; -> sub_527160
0x00552C9E  57                    push   edi
0x00552C9F  8d442420              lea    eax, [esp + 0x20]
0x00552CA3  50                    push   eax
0x00552CA4  8d0c2f                lea    ecx, [edi + ebp]
0x00552CA7  e884f9ffff            call   0x552630  ; -> sub_552630
0x00552CAC  50                    push   eax
0x00552CAD  8bcb                  mov    ecx, ebx
0x00552CAF  c744244000000000      mov    dword ptr [esp + 0x40], 0
0x00552CB7  e824f4ffff            call   0x5520e0  ; -> sub_5520E0
0x00552CBC  8b442428              mov    eax, dword ptr [esp + 0x28]
0x00552CC0  33db                  xor    ebx, ebx
0x00552CC2  3bc3                  cmp    eax, ebx
0x00552CC4  c744243cffffffff      mov    dword ptr [esp + 0x3c], 0xffffffff
0x00552CCC  7409                  je     0x552cd7  ; -> sub_552CD7
0x00552CCE  50                    push   eax
0x00552CCF  e84cf2eaff            call   0x401f20  ; -> sub_401F20
0x00552CD4  83c404                add    esp, 4
0x00552CD7  895c2428              mov    dword ptr [esp + 0x28], ebx
0x00552CDB  895c242c              mov    dword ptr [esp + 0x2c], ebx
0x00552CDF  895c2430              mov    dword ptr [esp + 0x30], ebx
0x00552CE3  8b5c2418              mov    ebx, dword ptr [esp + 0x18]
0x00552CE7  eb1b                  jmp    0x552d04  ; -> sub_552D04
0x00552CE9  51                    push   ecx
0x00552CEA  d91c24                fstp   dword ptr [esp]
0x00552CED  6a00                  push   0
0x00552CEF  8d4e04                lea    ecx, [esi + 4]
0x00552CF2  c746fc00000000        mov    dword ptr [esi - 4], 0
0x00552CF9  c70600000000          mov    dword ptr [esi], 0
0x00552CFF  e85c44fdff            call   0x527160  ; -> sub_527160
0x00552D04  83c718                add    edi, 0x18
0x00552D07  83c618                add    esi, 0x18
0x00552D0A  836c244401            sub    dword ptr [esp + 0x44], 1
0x00552D0F  0f8563ffffff          jne    0x552c78  ; -> sub_552C78
0x00552D15  836c241401            sub    dword ptr [esp + 0x14], 1
0x00552D1A  0f8550ffffff          jne    0x552c70  ; -> sub_552C70
0x00552D20  8b4c2434              mov    ecx, dword ptr [esp + 0x34]
0x00552D24  64890d00000000        mov    dword ptr fs:[0], ecx
0x00552D2B  59                    pop    ecx
0x00552D2C  5f                    pop    edi
0x00552D2D  5e                    pop    esi
0x00552D2E  5d                    pop    ebp
0x00552D2F  5b                    pop    ebx
0x00552D30  83c42c                add    esp, 0x2c
0x00552D33  c3                    ret    
0x00552D34  cc                    int3   
0x00552D35  cc                    int3   
0x00552D36  cc                    int3   
0x00552D37  cc                    int3   
0x00552D38  cc                    int3   
0x00552D39  cc                    int3   
0x00552D3A  cc                    int3   
0x00552D3B  cc                    int3   
0x00552D3C  cc                    int3   
0x00552D3D  cc                    int3   
0x00552D3E  cc                    int3   
0x00552D3F  cc                    int3   
0x00552D40  8b442408              mov    eax, dword ptr [esp + 8]
0x00552D44  8b542404              mov    edx, dword ptr [esp + 4]
0x00552D48  50                    push   eax
0x00552D49  51                    push   ecx
0x00552D4A  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x00552D4E  51                    push   ecx
0x00552D4F  52                    push   edx
0x00552D50  e85bf5ffff            call   0x5522b0  ; -> sub_5522B0
0x00552D55  83c410                add    esp, 0x10
0x00552D58  c20800                ret    8
0x00552D5B  cc                    int3   
0x00552D5C  cc                    int3   
0x00552D5D  cc                    int3   
0x00552D5E  cc                    int3   
0x00552D5F  cc                    int3   
0x00552D60  56                    push   esi
0x00552D61  8b742408              mov    esi, dword ptr [esp + 8]
0x00552D65  57                    push   edi
0x00552D66  8b7c2410              mov    edi, dword ptr [esp + 0x10]
0x00552D6A  3bf7                  cmp    esi, edi
0x00552D6C  741b                  je     0x552d89  ; -> sub_552D89
0x00552D6E  8bff                  mov    edi, edi
0x00552D70  68e0ac4300            push   0x43ace0  ; -> sub_43ACE0
0x00552D75  6a04                  push   4
0x00552D77  6a18                  push   0x18
0x00552D79  8d4608                lea    eax, [esi + 8]
0x00552D7C  50                    push   eax
0x00552D7D  e8cde44200            call   0x98124f  ; -> sub_98124F
0x00552D82  83c668                add    esi, 0x68
0x00552D85  3bf7                  cmp    esi, edi
0x00552D87  75e7                  jne    0x552d70  ; -> sub_552D70
0x00552D89  5f                    pop    edi
0x00552D8A  5e                    pop    esi
0x00552D8B  c20800                ret    8
0x00552D8E  cc                    int3   
0x00552D8F  cc                    int3   
0x00552D90  6aff                  push   -1
0x00552D92  6806be9b00            push   0x9bbe06  ; -> sub_9BBE06
0x00552D97  64a100000000          mov    eax, dword ptr fs:[0]
0x00552D9D  50                    push   eax
0x00552D9E  51                    push   ecx
0x00552D9F  56                    push   esi
0x00552DA0  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00552DA5  33c4                  xor    eax, esp
0x00552DA7  50                    push   eax
0x00552DA8  8d44240c              lea    eax, [esp + 0xc]
0x00552DAC  64a300000000          mov    dword ptr fs:[0], eax
0x00552DB2  8bf1                  mov    esi, ecx
0x00552DB4  89742408              mov    dword ptr [esp + 8], esi
0x00552DB8  68401f5500            push   0x551f40  ; -> sub_551F40
0x00552DBD  68d0275500            push   0x5527d0  ; -> sub_5527D0
0x00552DC2  6a05                  push   5
0x00552DC4  6a78                  push   0x78
0x00552DC6  8d4604                lea    eax, [esi + 4]
0x00552DC9  50                    push   eax
0x00552DCA  c60600                mov    byte ptr [esi], 0
0x00552DCD  e8fd1d4300            call   0x984bcf  ; -> sub_984BCF
0x00552DD2  68e0ac4300            push   0x43ace0  ; -> sub_43ACE0
0x00552DD7  6850285500            push   0x552850  ; -> sub_552850
0x00552DDC  6a14                  push   0x14
0x00552DDE  6a20                  push   0x20
0x00552DE0  8d8e5c020000          lea    ecx, [esi + 0x25c]
0x00552DE6  51                    push   ecx
0x00552DE7  c744242800000000      mov    dword ptr [esp + 0x28], 0
0x00552DEF  e8db1d4300            call   0x984bcf  ; -> sub_984BCF
0x00552DF4  68d01f5500            push   0x551fd0  ; -> sub_551FD0
0x00552DF9  6860285500            push   0x552860  ; -> sub_552860
0x00552DFE  6a19                  push   0x19
0x00552E00  6a38                  push   0x38
0x00552E02  8d96dc040000          lea    edx, [esi + 0x4dc]
0x00552E08  52                    push   edx
0x00552E09  c644242801            mov    byte ptr [esp + 0x28], 1
0x00552E0E  e8bc1d4300            call   0x984bcf  ; -> sub_984BCF
0x00552E13  68e0ac4300            push   0x43ace0  ; -> sub_43ACE0
0x00552E18  6830eb4300            push   0x43eb30  ; -> sub_43EB30
0x00552E1D  6a14                  push   0x14
0x00552E1F  6a18                  push   0x18
0x00552E21  8d86540a0000          lea    eax, [esi + 0xa54]
0x00552E27  50                    push   eax
0x00552E28  c644242802            mov    byte ptr [esp + 0x28], 2
0x00552E2D  e89d1d4300            call   0x984bcf  ; -> sub_984BCF
0x00552E32  8bc6                  mov    eax, esi
0x00552E34  8b4c240c              mov    ecx, dword ptr [esp + 0xc]
0x00552E38  64890d00000000        mov    dword ptr fs:[0], ecx
0x00552E3F  59                    pop    ecx
0x00552E40  5e                    pop    esi
0x00552E41  83c410                add    esp, 0x10
0x00552E44  c3                    ret    
0x00552E45  cc                    int3   
0x00552E46  cc                    int3   
0x00552E47  cc                    int3   
0x00552E48  cc                    int3   
0x00552E49  cc                    int3   
0x00552E4A  cc                    int3   
0x00552E4B  cc                    int3   
0x00552E4C  cc                    int3   
0x00552E4D  cc                    int3   
0x00552E4E  cc                    int3   
0x00552E4F  cc                    int3   
0x00552E50  51                    push   ecx
0x00552E51  56                    push   esi
0x00552E52  8bf1                  mov    esi, ecx
0x00552E54  8b4604                mov    eax, dword ptr [esi + 4]
0x00552E57  85c0                  test   eax, eax
0x00552E59  741c                  je     0x552e77  ; -> sub_552E77
0x00552E5B  8b4c2404              mov    ecx, dword ptr [esp + 4]
0x00552E5F  8b5608                mov    edx, dword ptr [esi + 8]
0x00552E62  51                    push   ecx
0x00552E63  56                    push   esi
0x00552E64  52                    push   edx
0x00552E65  50                    push   eax
0x00552E66  e845f4ffff            call   0x5522b0  ; -> sub_5522B0
0x00552E6B  8b4604                mov    eax, dword ptr [esi + 4]
0x00552E6E  50                    push   eax
0x00552E6F  e8acf0eaff            call   0x401f20  ; -> sub_401F20
0x00552E74  83c414                add    esp, 0x14
0x00552E77  c7460400000000        mov    dword ptr [esi + 4], 0
0x00552E7E  c7460800000000        mov    dword ptr [esi + 8], 0
0x00552E85  c7460c00000000        mov    dword ptr [esi + 0xc], 0
0x00552E8C  5e                    pop    esi
0x00552E8D  59                    pop    ecx
0x00552E8E  c3                    ret    
0x00552E8F  cc                    int3   
0x00552E90  56                    push   esi
0x00552E91  8bf1                  mov    esi, ecx
0x00552E93  8b4604                mov    eax, dword ptr [esi + 4]
0x00552E96  85c0                  test   eax, eax
0x00552E98  7418                  je     0x552eb2  ; -> sub_552EB2
0x00552E9A  8b4e08                mov    ecx, dword ptr [esi + 8]
0x00552E9D  51                    push   ecx
0x00552E9E  50                    push   eax
0x00552E9F  8bce                  mov    ecx, esi
0x00552EA1  e8bafeffff            call   0x552d60  ; -> sub_552D60
0x00552EA6  8b5604                mov    edx, dword ptr [esi + 4]
0x00552EA9  52                    push   edx
0x00552EAA  e871f0eaff            call   0x401f20  ; -> sub_401F20
0x00552EAF  83c404                add    esp, 4
0x00552EB2  c7460400000000        mov    dword ptr [esi + 4], 0
0x00552EB9  c7460800000000        mov    dword ptr [esi + 8], 0
0x00552EC0  c7460c00000000        mov    dword ptr [esi + 0xc], 0
0x00552EC7  5e                    pop    esi
0x00552EC8  c3                    ret    
0x00552EC9  cc                    int3   
0x00552ECA  cc                    int3   
0x00552ECB  cc                    int3   
0x00552ECC  cc                    int3   
0x00552ECD  cc                    int3   
0x00552ECE  cc                    int3   
0x00552ECF  cc                    int3   
0x00552ED0  6aff                  push   -1
0x00552ED2  6851be9b00            push   0x9bbe51  ; -> sub_9BBE51
0x00552ED7  64a100000000          mov    eax, dword ptr fs:[0]
0x00552EDD  50                    push   eax
0x00552EDE  51                    push   ecx
0x00552EDF  56                    push   esi
0x00552EE0  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00552EE5  33c4                  xor    eax, esp
0x00552EE7  50                    push   eax
0x00552EE8  8d44240c              lea    eax, [esp + 0xc]

