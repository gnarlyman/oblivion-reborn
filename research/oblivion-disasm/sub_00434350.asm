ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x00434350
; VA: 0x00434350  size: 0x300
; ============================================================
0x00434350  8b4c2404              mov    ecx, dword ptr [esp + 4]
0x00434354  8b01                  mov    eax, dword ptr [ecx]
0x00434356  8b5004                mov    edx, dword ptr [eax + 4]
0x00434359  ffd2                  call   edx
0x0043435B  c20400                ret    4
0x0043435E  cc                    int3   
0x0043435F  cc                    int3   
0x00434360  56                    push   esi
0x00434361  8b742408              mov    esi, dword ptr [esp + 8]
0x00434365  8b06                  mov    eax, dword ptr [esi]
0x00434367  8b5008                mov    edx, dword ptr [eax + 8]
0x0043436A  57                    push   edi
0x0043436B  8bf9                  mov    edi, ecx
0x0043436D  8bce                  mov    ecx, esi
0x0043436F  c7460c04000000        mov    dword ptr [esi + 0xc], 4
0x00434376  ffd2                  call   edx
0x00434378  8b4e14                mov    ecx, dword ptr [esi + 0x14]
0x0043437B  8b4610                mov    eax, dword ptr [esi + 0x10]
0x0043437E  51                    push   ecx
0x0043437F  c7460c05000000        mov    dword ptr [esi + 0xc], 5
0x00434386  8b17                  mov    edx, dword ptr [edi]
0x00434388  50                    push   eax
0x00434389  8b4210                mov    eax, dword ptr [edx + 0x10]
0x0043438C  8bcf                  mov    ecx, edi
0x0043438E  ffd0                  call   eax
0x00434390  84c0                  test   al, al
0x00434392  7423                  je     0x4343b7  ; -> sub_4343B7
0x00434394  8b4610                mov    eax, dword ptr [esi + 0x10]
0x00434397  8b7614                mov    esi, dword ptr [esi + 0x14]
0x0043439A  8b17                  mov    edx, dword ptr [edi]
0x0043439C  56                    push   esi
0x0043439D  50                    push   eax
0x0043439E  8b421c                mov    eax, dword ptr [edx + 0x1c]
0x004343A1  8bcf                  mov    ecx, edi
0x004343A3  ffd0                  call   eax
0x004343A5  8b4f2c                mov    ecx, dword ptr [edi + 0x2c]
0x004343A8  5f                    pop    edi
0x004343A9  8d1481                lea    edx, [ecx + eax*4]
0x004343AC  5e                    pop    esi
0x004343AD  89542404              mov    dword ptr [esp + 4], edx
0x004343B1  ff257c80a200          jmp    dword ptr [0xa2807c]
0x004343B7  5f                    pop    edi
0x004343B8  5e                    pop    esi
0x004343B9  c20400                ret    4
0x004343BC  cc                    int3   
0x004343BD  cc                    int3   
0x004343BE  cc                    int3   
0x004343BF  cc                    int3   
0x004343C0  6aff                  push   -1
0x004343C2  68a8c09a00            push   0x9ac0a8  ; -> sub_9AC0A8
0x004343C7  64a100000000          mov    eax, dword ptr fs:[0]
0x004343CD  50                    push   eax
0x004343CE  51                    push   ecx
0x004343CF  56                    push   esi
0x004343D0  57                    push   edi
0x004343D1  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x004343D6  33c4                  xor    eax, esp
0x004343D8  50                    push   eax
0x004343D9  8d442410              lea    eax, [esp + 0x10]
0x004343DD  64a300000000          mov    dword ptr fs:[0], eax
0x004343E3  8bf1                  mov    esi, ecx
0x004343E5  8974240c              mov    dword ptr [esp + 0xc], esi
0x004343E9  c7065465a300          mov    dword ptr [esi], 0xa36554  ; -> sub_A36554
0x004343EF  33ff                  xor    edi, edi
0x004343F1  397e24                cmp    dword ptr [esi + 0x24], edi
0x004343F4  c744241800000000      mov    dword ptr [esp + 0x18], 0
0x004343FC  761c                  jbe    0x43441a  ; -> sub_43441A
0x004343FE  8bff                  mov    edi, edi
0x00434400  8b4628                mov    eax, dword ptr [esi + 0x28]
0x00434403  8b0cb8                mov    ecx, dword ptr [eax + edi*4]
0x00434406  85c9                  test   ecx, ecx
0x00434408  7408                  je     0x434412  ; -> sub_434412
0x0043440A  8b11                  mov    edx, dword ptr [ecx]
0x0043440C  8b02                  mov    eax, dword ptr [edx]
0x0043440E  6a01                  push   1
0x00434410  ffd0                  call   eax
0x00434412  83c701                add    edi, 1
0x00434415  3b7e24                cmp    edi, dword ptr [esi + 0x24]
0x00434418  72e6                  jb     0x434400  ; -> sub_434400
0x0043441A  8b4628                mov    eax, dword ptr [esi + 0x28]
0x0043441D  50                    push   eax
0x0043441E  e8fddafcff            call   0x401f20  ; -> sub_401F20
0x00434423  8b462c                mov    eax, dword ptr [esi + 0x2c]
0x00434426  50                    push   eax
0x00434427  e8f4dafcff            call   0x401f20  ; -> sub_401F20
0x0043442C  83c408                add    esp, 8
0x0043442F  6a01                  push   1
0x00434431  8bce                  mov    ecx, esi
0x00434433  c744241cffffffff      mov    dword ptr [esp + 0x1c], 0xffffffff
0x0043443B  c7061465a300          mov    dword ptr [esi], 0xa36514  ; -> sub_A36514
0x00434441  e82af9ffff            call   0x433d70  ; -> sub_433D70
0x00434446  8b4e0c                mov    ecx, dword ptr [esi + 0xc]
0x00434449  51                    push   ecx
0x0043444A  e8d1dafcff            call   0x401f20  ; -> sub_401F20
0x0043444F  8b5604                mov    edx, dword ptr [esi + 4]
0x00434452  89542410              mov    dword ptr [esp + 0x10], edx
0x00434456  8b442410              mov    eax, dword ptr [esp + 0x10]
0x0043445A  50                    push   eax
0x0043445B  e8c0dafcff            call   0x401f20  ; -> sub_401F20
0x00434460  83c408                add    esp, 8
0x00434463  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x00434467  64890d00000000        mov    dword ptr fs:[0], ecx
0x0043446E  59                    pop    ecx
0x0043446F  5f                    pop    edi
0x00434470  5e                    pop    esi
0x00434471  83c410                add    esp, 0x10
0x00434474  c3                    ret    
0x00434475  cc                    int3   
0x00434476  cc                    int3   
0x00434477  cc                    int3   
0x00434478  cc                    int3   
0x00434479  cc                    int3   
0x0043447A  cc                    int3   
0x0043447B  cc                    int3   
0x0043447C  cc                    int3   
0x0043447D  cc                    int3   
0x0043447E  cc                    int3   
0x0043447F  cc                    int3   
0x00434480  6aff                  push   -1
0x00434482  68e3c09a00            push   0x9ac0e3  ; -> sub_9AC0E3
0x00434487  64a100000000          mov    eax, dword ptr fs:[0]
0x0043448D  50                    push   eax
0x0043448E  83ec08                sub    esp, 8
0x00434491  56                    push   esi
0x00434492  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00434497  33c4                  xor    eax, esp
0x00434499  50                    push   eax
0x0043449A  8d442410              lea    eax, [esp + 0x10]
0x0043449E  64a300000000          mov    dword ptr fs:[0], eax
0x004344A4  8bf1                  mov    esi, ecx
0x004344A6  89742408              mov    dword ptr [esp + 8], esi
0x004344AA  6a12                  push   0x12
0x004344AC  6a01                  push   1
0x004344AE  6a02                  push   2
0x004344B0  e87bfdffff            call   0x434230  ; -> sub_434230
0x004344B5  6a1c                  push   0x1c
0x004344B7  c744241c00000000      mov    dword ptr [esp + 0x1c], 0
0x004344BF  c706ac65a300          mov    dword ptr [esi], 0xa365ac  ; -> sub_A365AC
0x004344C5  c7463806000000        mov    dword ptr [esi + 0x38], 6
0x004344CC  e82fdafcff            call   0x401f00  ; -> sub_401F00
0x004344D1  83c404                add    esp, 4
0x004344D4  8944240c              mov    dword ptr [esp + 0xc], eax
0x004344D8  85c0                  test   eax, eax
0x004344DA  c644241801            mov    byte ptr [esp + 0x18], 1
0x004344DF  740d                  je     0x4344ee  ; -> sub_4344EE
0x004344E1  6a08                  push   8
0x004344E3  6a03                  push   3
0x004344E5  8bc8                  mov    ecx, eax
0x004344E7  e814dfffff            call   0x432400  ; -> sub_432400
0x004344EC  eb02                  jmp    0x4344f0  ; -> sub_4344F0
0x004344EE  33c0                  xor    eax, eax
0x004344F0  68083ab300            push   0xb33a08  ; -> sub_B33A08
0x004344F5  894634                mov    dword ptr [esi + 0x34], eax
0x004344F8  ff155c81a200          call   dword ptr [0xa2815c]
0x004344FE  8b4628                mov    eax, dword ptr [esi + 0x28]
0x00434501  8b08                  mov    ecx, dword ptr [eax]
0x00434503  8b5108                mov    edx, dword ptr [ecx + 8]
0x00434506  895630                mov    dword ptr [esi + 0x30], edx
0x00434509  8bc6                  mov    eax, esi
0x0043450B  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x0043450F  64890d00000000        mov    dword ptr fs:[0], ecx
0x00434516  59                    pop    ecx
0x00434517  5e                    pop    esi
0x00434518  83c414                add    esp, 0x14
0x0043451B  c3                    ret    
0x0043451C  cc                    int3   
0x0043451D  cc                    int3   
0x0043451E  cc                    int3   
0x0043451F  cc                    int3   
0x00434520  8b442404              mov    eax, dword ptr [esp + 4]
0x00434524  56                    push   esi
0x00434525  8b74240c              mov    esi, dword ptr [esp + 0xc]
0x00434529  8bd6                  mov    edx, esi
0x0043452B  b110                  mov    cl, 0x10
0x0043452D  e85e055500            call   0x984a90  ; -> sub_984A90
0x00434532  8bce                  mov    ecx, esi
0x00434534  0fb6c0                movzx  eax, al
0x00434537  c1f918                sar    ecx, 0x18
0x0043453A  0fb6d1                movzx  edx, cl
0x0043453D  8d0440                lea    eax, [eax + eax*2]
0x00434540  c1fe1f                sar    esi, 0x1f
0x00434543  03c2                  add    eax, edx
0x00434545  5e                    pop    esi
0x00434546  c20800                ret    8
0x00434549  cc                    int3   
0x0043454A  cc                    int3   
0x0043454B  cc                    int3   
0x0043454C  cc                    int3   
0x0043454D  cc                    int3   
0x0043454E  cc                    int3   
0x0043454F  cc                    int3   
0x00434550  6aff                  push   -1
0x00434552  6808c19a00            push   0x9ac108  ; -> sub_9AC108
0x00434557  64a100000000          mov    eax, dword ptr fs:[0]
0x0043455D  50                    push   eax
0x0043455E  51                    push   ecx
0x0043455F  56                    push   esi
0x00434560  57                    push   edi
0x00434561  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00434566  33c4                  xor    eax, esp
0x00434568  50                    push   eax
0x00434569  8d442410              lea    eax, [esp + 0x10]
0x0043456D  64a300000000          mov    dword ptr fs:[0], eax
0x00434573  8bf9                  mov    edi, ecx
0x00434575  897c240c              mov    dword ptr [esp + 0xc], edi
0x00434579  c707ac65a300          mov    dword ptr [edi], 0xa365ac  ; -> sub_A365AC
0x0043457F  8b7734                mov    esi, dword ptr [edi + 0x34]
0x00434582  85f6                  test   esi, esi
0x00434584  c744241800000000      mov    dword ptr [esp + 0x18], 0
0x0043458C  7429                  je     0x4345b7  ; -> sub_4345B7
0x0043458E  6a01                  push   1
0x00434590  8bce                  mov    ecx, esi
0x00434592  c7060065a300          mov    dword ptr [esi], 0xa36500  ; -> sub_A36500
0x00434598  e8738f0000            call   0x43d510  ; -> sub_43D510
0x0043459D  8b4610                mov    eax, dword ptr [esi + 0x10]
0x004345A0  8944240c              mov    dword ptr [esp + 0xc], eax
0x004345A4  8b4c240c              mov    ecx, dword ptr [esp + 0xc]
0x004345A8  51                    push   ecx
0x004345A9  e872d9fcff            call   0x401f20  ; -> sub_401F20
0x004345AE  56                    push   esi
0x004345AF  e86cd9fcff            call   0x401f20  ; -> sub_401F20
0x004345B4  83c408                add    esp, 8
0x004345B7  8bcf                  mov    ecx, edi
0x004345B9  c7442418ffffffff      mov    dword ptr [esp + 0x18], 0xffffffff
0x004345C1  e8fafdffff            call   0x4343c0  ; -> sub_4343C0
0x004345C6  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x004345CA  64890d00000000        mov    dword ptr fs:[0], ecx
0x004345D1  59                    pop    ecx
0x004345D2  5f                    pop    edi
0x004345D3  5e                    pop    esi
0x004345D4  83c410                add    esp, 0x10
0x004345D7  c3                    ret    
0x004345D8  cc                    int3   
0x004345D9  cc                    int3   
0x004345DA  cc                    int3   
0x004345DB  cc                    int3   
0x004345DC  cc                    int3   
0x004345DD  cc                    int3   
0x004345DE  cc                    int3   
0x004345DF  cc                    int3   
0x004345E0  56                    push   esi
0x004345E1  8bf1                  mov    esi, ecx
0x004345E3  e868ffffff            call   0x434550  ; -> sub_434550
0x004345E8  f644240801            test   byte ptr [esp + 8], 1
0x004345ED  7409                  je     0x4345f8  ; -> sub_4345F8
0x004345EF  56                    push   esi
0x004345F0  e82bd9fcff            call   0x401f20  ; -> sub_401F20
0x004345F5  83c404                add    esp, 4
0x004345F8  8bc6                  mov    eax, esi
0x004345FA  5e                    pop    esi
0x004345FB  c20400                ret    4
0x004345FE  cc                    int3   
0x004345FF  cc                    int3   
0x00434600  56                    push   esi
0x00434601  8b742408              mov    esi, dword ptr [esp + 8]
0x00434605  85f6                  test   esi, esi
0x00434607  57                    push   edi
0x00434608  8bf9                  mov    edi, ecx
0x0043460A  7432                  je     0x43463e  ; -> sub_43463E
0x0043460C  8bc6                  mov    eax, esi
0x0043460E  8d5001                lea    edx, [eax + 1]
0x00434611  8a08                  mov    cl, byte ptr [eax]
0x00434613  83c001                add    eax, 1
0x00434616  84c9                  test   cl, cl
0x00434618  75f7                  jne    0x434611  ; -> sub_434611
0x0043461A  2bc2                  sub    eax, edx
0x0043461C  83c001                add    eax, 1
0x0043461F  50                    push   eax
0x00434620  e8dbd8fcff            call   0x401f00  ; -> sub_401F00
0x00434625  83c404                add    esp, 4
0x00434628  894720                mov    dword ptr [edi + 0x20], eax
0x0043462B  8bce                  mov    ecx, esi
0x0043462D  8bd0                  mov    edx, eax
0x0043462F  90                    nop    
0x00434630  8a01                  mov    al, byte ptr [ecx]
0x00434632  8802                  mov    byte ptr [edx], al
0x00434634  83c101                add    ecx, 1
0x00434637  83c201                add    edx, 1
0x0043463A  84c0                  test   al, al
0x0043463C  75f2                  jne    0x434630  ; -> sub_434630
0x0043463E  5f                    pop    edi
0x0043463F  5e                    pop    esi
0x00434640  c20400                ret    4
0x00434643  cc                    int3   
0x00434644  cc                    int3   
0x00434645  cc                    int3   
0x00434646  cc                    int3   
0x00434647  cc                    int3   
0x00434648  cc                    int3   
0x00434649  cc                    int3   
0x0043464A  cc                    int3   
0x0043464B  cc                    int3   
0x0043464C  cc                    int3   
0x0043464D  cc                    int3   
0x0043464E  cc                    int3   
0x0043464F  cc                    int3   

