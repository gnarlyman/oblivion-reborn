; ============================================================
; sub_439B90  (Crash 5: +0x1B)
; VA: 0x00439B90  size: 0x180
; ============================================================
0x00439B90  56                    push   esi
0x00439B91  8bf1                  mov    esi, ecx
0x00439B93  8b4630                mov    eax, dword ptr [esi + 0x30]
0x00439B96  85c0                  test   eax, eax
0x00439B98  7407                  je     0x439ba1  ; -> sub_439BA1
0x00439B9A  c7400c06000000        mov    dword ptr [eax + 0xc], 6
0x00439BA1  8b442408              mov    eax, dword ptr [esp + 8]
0x00439BA5  50                    push   eax
0x00439BA6  e835f7ffff            call   0x4392e0  ; -> sub_4392E0
0x00439BAB  8b0d1c3ab300          mov    ecx, dword ptr [0xb33a1c]  ; g_modelLoader (ModelLoader**)
0x00439BB1  8b4908                mov    ecx, dword ptr [ecx + 8]
0x00439BB4  8b4620                mov    eax, dword ptr [esi + 0x20]
0x00439BB7  8b11                  mov    edx, dword ptr [ecx]
0x00439BB9  5e                    pop    esi
0x00439BBA  89442404              mov    dword ptr [esp + 4], eax
0x00439BBE  8b5210                mov    edx, dword ptr [edx + 0x10]
0x00439BC1  ffe2                  jmp    edx
0x00439BC3  cc                    int3   
0x00439BC4  cc                    int3   
0x00439BC5  cc                    int3   
0x00439BC6  cc                    int3   
0x00439BC7  cc                    int3   
0x00439BC8  cc                    int3   
0x00439BC9  cc                    int3   
0x00439BCA  cc                    int3   
0x00439BCB  cc                    int3   
0x00439BCC  cc                    int3   
0x00439BCD  cc                    int3   
0x00439BCE  cc                    int3   
0x00439BCF  cc                    int3   
0x00439BD0  56                    push   esi
0x00439BD1  8bf1                  mov    esi, ecx
0x00439BD3  e868e3ffff            call   0x437f40  ; -> sub_437F40
0x00439BD8  f644240801            test   byte ptr [esp + 8], 1
0x00439BDD  7409                  je     0x439be8  ; -> sub_439BE8
0x00439BDF  56                    push   esi
0x00439BE0  e83b83fcff            call   0x401f20  ; -> sub_401F20
0x00439BE5  83c404                add    esp, 4
0x00439BE8  8bc6                  mov    eax, esi
0x00439BEA  5e                    pop    esi
0x00439BEB  c20400                ret    4
0x00439BEE  cc                    int3   
0x00439BEF  cc                    int3   
0x00439BF0  56                    push   esi
0x00439BF1  8bf1                  mov    esi, ecx
0x00439BF3  e878e0ffff            call   0x437c70  ; -> sub_437C70
0x00439BF8  f644240801            test   byte ptr [esp + 8], 1
0x00439BFD  7409                  je     0x439c08  ; -> sub_439C08
0x00439BFF  56                    push   esi
0x00439C00  e81b83fcff            call   0x401f20  ; -> sub_401F20
0x00439C05  83c404                add    esp, 4
0x00439C08  8bc6                  mov    eax, esi
0x00439C0A  5e                    pop    esi
0x00439C0B  c20400                ret    4
0x00439C0E  cc                    int3   
0x00439C0F  cc                    int3   
0x00439C10  6aff                  push   -1
0x00439C12  6883c89a00            push   0x9ac883  ; -> sub_9AC883
0x00439C17  64a100000000          mov    eax, dword ptr fs:[0]
0x00439C1D  50                    push   eax
0x00439C1E  83ec08                sub    esp, 8
0x00439C21  56                    push   esi
0x00439C22  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00439C27  33c4                  xor    eax, esp
0x00439C29  50                    push   eax
0x00439C2A  8d442410              lea    eax, [esp + 0x10]
0x00439C2E  64a300000000          mov    dword ptr fs:[0], eax
0x00439C34  8bf1                  mov    esi, ecx
0x00439C36  89742408              mov    dword ptr [esp + 8], esi
0x00439C3A  689070a300            push   0xa37090  ; -> sub_A37090
0x00439C3F  6a03                  push   3
0x00439C41  e8ba71ffff            call   0x430e00  ; BSTaskThread::Runnable+0x20
0x00439C46  c7068870a300          mov    dword ptr [esi], 0xa37088  ; -> sub_A37088
0x00439C4C  6a1c                  push   0x1c
0x00439C4E  c744241c00000000      mov    dword ptr [esp + 0x1c], 0
0x00439C56  c7462400000000        mov    dword ptr [esi + 0x24], 0
0x00439C5D  e89e82fcff            call   0x401f00  ; -> sub_401F00
0x00439C62  83c404                add    esp, 4
0x00439C65  8944240c              mov    dword ptr [esp + 0xc], eax
0x00439C69  85c0                  test   eax, eax
0x00439C6B  c644241801            mov    byte ptr [esp + 0x18], 1
0x00439C70  7410                  je     0x439c82  ; -> sub_439C82
0x00439C72  8b4c2420              mov    ecx, dword ptr [esp + 0x20]
0x00439C76  6a08                  push   8
0x00439C78  51                    push   ecx
0x00439C79  8bc8                  mov    ecx, eax
0x00439C7B  e8f0ebffff            call   0x438870  ; -> sub_438870
0x00439C80  eb02                  jmp    0x439c84  ; -> sub_439C84
0x00439C82  33c0                  xor    eax, eax
0x00439C84  894628                mov    dword ptr [esi + 0x28], eax
0x00439C87  8bc6                  mov    eax, esi
0x00439C89  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x00439C8D  64890d00000000        mov    dword ptr fs:[0], ecx
0x00439C94  59                    pop    ecx
0x00439C95  5e                    pop    esi
0x00439C96  83c414                add    esp, 0x14
0x00439C99  c20400                ret    4
0x00439C9C  cc                    int3   
0x00439C9D  cc                    int3   
0x00439C9E  cc                    int3   
0x00439C9F  cc                    int3   
0x00439CA0  56                    push   esi
0x00439CA1  8bf1                  mov    esi, ecx
0x00439CA3  8b4608                mov    eax, dword ptr [esi + 8]
0x00439CA6  50                    push   eax
0x00439CA7  c7069c6ea300          mov    dword ptr [esi], 0xa36e9c  ; -> sub_A36E9C
0x00439CAD  e86e82fcff            call   0x401f20  ; -> sub_401F20
0x00439CB2  83c404                add    esp, 4
0x00439CB5  f644240801            test   byte ptr [esp + 8], 1
0x00439CBA  c7460800000000        mov    dword ptr [esi + 8], 0
0x00439CC1  c706e866a300          mov    dword ptr [esi], 0xa366e8  ; -> sub_A366E8
0x00439CC7  7409                  je     0x439cd2  ; -> sub_439CD2
0x00439CC9  56                    push   esi
0x00439CCA  e85182fcff            call   0x401f20  ; -> sub_401F20
0x00439CCF  83c404                add    esp, 4
0x00439CD2  8bc6                  mov    eax, esi
0x00439CD4  5e                    pop    esi
0x00439CD5  c20400                ret    4
0x00439CD8  cc                    int3   
0x00439CD9  cc                    int3   
0x00439CDA  cc                    int3   
0x00439CDB  cc                    int3   
0x00439CDC  cc                    int3   
0x00439CDD  cc                    int3   
0x00439CDE  cc                    int3   
0x00439CDF  cc                    int3   
0x00439CE0  56                    push   esi
0x00439CE1  8bf1                  mov    esi, ecx
0x00439CE3  8b4608                mov    eax, dword ptr [esi + 8]
0x00439CE6  50                    push   eax
0x00439CE7  c706a86ea300          mov    dword ptr [esi], 0xa36ea8  ; -> sub_A36EA8
0x00439CED  e82e82fcff            call   0x401f20  ; -> sub_401F20
0x00439CF2  83c404                add    esp, 4
0x00439CF5  f644240801            test   byte ptr [esp + 8], 1
0x00439CFA  c7460800000000        mov    dword ptr [esi + 8], 0
0x00439D01  c706f066a300          mov    dword ptr [esi], 0xa366f0  ; -> sub_A366F0
0x00439D07  7409                  je     0x439d12  ; -> sub_439D12
0x00439D09  56                    push   esi
0x00439D0A  e81182fcff            call   0x401f20  ; -> sub_401F20
