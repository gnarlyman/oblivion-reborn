; ============================================================
; sub_432130  (Crash 5: +0x72)
; VA: 0x00432130  size: 0x180
; ============================================================
0x00432130  51                    push   ecx
0x00432131  56                    push   esi
0x00432132  57                    push   edi
0x00432133  8b7c2410              mov    edi, dword ptr [esp + 0x10]
0x00432137  8b770c                mov    esi, dword ptr [edi + 0xc]
0x0043213A  83c70c                add    edi, 0xc
0x0043213D  83fe05                cmp    esi, 5
0x00432140  894c2408              mov    dword ptr [esp + 8], ecx
0x00432144  775e                  ja     0x4321a4  ; -> sub_4321A4
0x00432146  53                    push   ebx
0x00432147  8b1ddc80a200          mov    ebx, dword ptr [0xa280dc]
0x0043214D  55                    push   ebp
0x0043214E  8b2d3c81a200          mov    ebp, dword ptr [0xa2813c]
0x00432154  ff24b504224300        jmp    dword ptr [esi*4 + 0x432204]
0x0043215B  56                    push   esi
0x0043215C  6a06                  push   6
0x0043215E  57                    push   edi
0x0043215F  ffd5                  call   ebp
0x00432161  3bc6                  cmp    eax, esi
0x00432163  7570                  jne    0x4321d5  ; -> sub_4321D5
0x00432165  8b4c2418              mov    ecx, dword ptr [esp + 0x18]
0x00432169  8b01                  mov    eax, dword ptr [ecx]
0x0043216B  5d                    pop    ebp
0x0043216C  5b                    pop    ebx
0x0043216D  5f                    pop    edi
0x0043216E  5e                    pop    esi
0x0043216F  83c404                add    esp, 4
0x00432172  c744240400000000      mov    dword ptr [esp + 4], 0
0x0043217A  8b500c                mov    edx, dword ptr [eax + 0xc]
0x0043217D  ffe2                  jmp    edx
0x0043217F  56                    push   esi
0x00432180  6a06                  push   6
0x00432182  57                    push   edi
0x00432183  ffd5                  call   ebp
0x00432185  3bc6                  cmp    eax, esi
0x00432187  754c                  jne    0x4321d5  ; -> sub_4321D5
0x00432189  8b742418              mov    esi, dword ptr [esp + 0x18]
0x0043218D  8b06                  mov    eax, dword ptr [esi]
0x0043218F  8b500c                mov    edx, dword ptr [eax + 0xc]
0x00432192  6a00                  push   0
0x00432194  8bce                  mov    ecx, esi
0x00432196  ffd2                  call   edx
0x00432198  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x0043219C  56                    push   esi
0x0043219D  e86efbffff            call   0x431d10  ; -> sub_431D10
0x004321A2  5d                    pop    ebp
0x004321A3  5b                    pop    ebx
0x004321A4  5f                    pop    edi
0x004321A5  5e                    pop    esi
0x004321A6  59                    pop    ecx
0x004321A7  c20400                ret    4
0x004321AA  83fe03                cmp    esi, 3
0x004321AD  7526                  jne    0x4321d5  ; -> sub_4321D5
0x004321AF  90                    nop    
0x004321B0  6a01                  push   1
0x004321B2  ffd3                  call   ebx
0x004321B4  833f03                cmp    dword ptr [edi], 3
0x004321B7  74f7                  je     0x4321b0  ; -> sub_4321B0
0x004321B9  eb1a                  jmp    0x4321d5  ; -> sub_4321D5
0x004321BB  83fe04                cmp    esi, 4
0x004321BE  7515                  jne    0x4321d5  ; -> sub_4321D5
0x004321C0  6a01                  push   1
0x004321C2  ffd3                  call   ebx
0x004321C4  833f04                cmp    dword ptr [edi], 4
0x004321C7  74f7                  je     0x4321c0  ; -> sub_4321C0
0x004321C9  eb0a                  jmp    0x4321d5  ; -> sub_4321D5
0x004321CB  56                    push   esi
0x004321CC  6a06                  push   6
0x004321CE  57                    push   edi
0x004321CF  ffd5                  call   ebp
0x004321D1  3bc6                  cmp    eax, esi
0x004321D3  7413                  je     0x4321e8  ; -> sub_4321E8
0x004321D5  8b37                  mov    esi, dword ptr [edi]
0x004321D7  83fe05                cmp    esi, 5
0x004321DA  0f8674ffffff          jbe    0x432154  ; -> sub_432154
0x004321E0  5d                    pop    ebp
0x004321E1  5b                    pop    ebx
0x004321E2  5f                    pop    edi
0x004321E3  5e                    pop    esi
0x004321E4  59                    pop    ecx
0x004321E5  c20400                ret    4
0x004321E8  8b4c2418              mov    ecx, dword ptr [esp + 0x18]
0x004321EC  8b01                  mov    eax, dword ptr [ecx]
0x004321EE  5d                    pop    ebp
0x004321EF  5b                    pop    ebx
0x004321F0  5f                    pop    edi
0x004321F1  5e                    pop    esi
0x004321F2  83c404                add    esp, 4
0x004321F5  c744240401000000      mov    dword ptr [esp + 4], 1
0x004321FD  8b500c                mov    edx, dword ptr [eax + 0xc]
0x00432200  ffe2                  jmp    edx
0x00432202  8bff                  mov    edi, edi
0x00432204  5b                    pop    ebx
0x00432205  214300                and    dword ptr [ebx], eax
0x00432208  7f21                  jg     0x43222b  ; -> sub_43222B
0x0043220A  43                    inc    ebx
0x0043220B  007f21                add    byte ptr [edi + 0x21], bh
0x0043220E  43                    inc    ebx
0x0043220F  00aa214300bb          add    byte ptr [edx - 0x44ffbcdf], ch
0x00432215  214300                and    dword ptr [ebx], eax
0x00432218  cb                    retf   
0x00432219  214300                and    dword ptr [ebx], eax
0x0043221C  cc                    int3   
0x0043221D  cc                    int3   
0x0043221E  cc                    int3   
0x0043221F  cc                    int3   
0x00432220  53                    push   ebx
0x00432221  55                    push   ebp
0x00432222  56                    push   esi
0x00432223  8b742410              mov    esi, dword ptr [esp + 0x10]
0x00432227  8b5e0c                mov    ebx, dword ptr [esi + 0xc]
0x0043222A  85db                  test   ebx, ebx
0x0043222C  57                    push   edi
0x0043222D  8d7e0c                lea    edi, [esi + 0xc]
0x00432230  8be9                  mov    ebp, ecx
0x00432232  7517                  jne    0x43224b  ; -> sub_43224B
0x00432234  8b442418              mov    eax, dword ptr [esp + 0x18]
0x00432238  8b4c241c              mov    ecx, dword ptr [esp + 0x1c]
0x0043223C  5f                    pop    edi
0x0043223D  894610                mov    dword ptr [esi + 0x10], eax
0x00432240  894e14                mov    dword ptr [esi + 0x14], ecx
0x00432243  5e                    pop    esi
0x00432244  5d                    pop    ebp
0x00432245  b001                  mov    al, 1
0x00432247  5b                    pop    ebx
0x00432248  c20c00                ret    0xc
0x0043224B  83fb03                cmp    ebx, 3
0x0043224E  7d48                  jge    0x432298  ; -> sub_432298
0x00432250  53                    push   ebx
0x00432251  6a02                  push   2
0x00432253  57                    push   edi
0x00432254  ff153c81a200          call   dword ptr [0xa2813c]
0x0043225A  3bc3                  cmp    eax, ebx
0x0043225C  753a                  jne    0x432298  ; -> sub_432298
0x0043225E  56                    push   esi
0x0043225F  8bcd                  mov    ecx, ebp
0x00432261  e8aafaffff            call   0x431d10  ; -> sub_431D10
0x00432266  8b542418              mov    edx, dword ptr [esp + 0x18]
0x0043226A  8b44241c              mov    eax, dword ptr [esp + 0x1c]
0x0043226E  6a02                  push   2
0x00432270  6a00                  push   0
0x00432272  57                    push   edi
0x00432273  895610                mov    dword ptr [esi + 0x10], edx
0x00432276  894614                mov    dword ptr [esi + 0x14], eax
0x00432279  ff153c81a200          call   dword ptr [0xa2813c]
0x0043227F  83f802                cmp    eax, 2
0x00432282  750b                  jne    0x43228f  ; -> sub_43228F
0x00432284  8b5500                mov    edx, dword ptr [ebp]
0x00432287  8b423c                mov    eax, dword ptr [edx + 0x3c]
0x0043228A  56                    push   esi
0x0043228B  8bcd                  mov    ecx, ebp
0x0043228D  ffd0                  call   eax
0x0043228F  5f                    pop    edi
0x00432290  5e                    pop    esi
0x00432291  5d                    pop    ebp
0x00432292  b001                  mov    al, 1
0x00432294  5b                    pop    ebx
0x00432295  c20c00                ret    0xc
0x00432298  5f                    pop    edi
0x00432299  5e                    pop    esi
0x0043229A  5d                    pop    ebp
0x0043229B  32c0                  xor    al, al
0x0043229D  5b                    pop    ebx
0x0043229E  c20c00                ret    0xc
0x004322A1  cc                    int3   
0x004322A2  cc                    int3   
0x004322A3  cc                    int3   
0x004322A4  cc                    int3   
0x004322A5  cc                    int3   
0x004322A6  cc                    int3   
0x004322A7  cc                    int3   
0x004322A8  cc                    int3   
0x004322A9  cc                    int3   
0x004322AA  cc                    int3   
0x004322AB  cc                    int3   
0x004322AC  cc                    int3   
0x004322AD  cc                    int3   
0x004322AE  cc                    int3   
0x004322AF  cc                    int3   
