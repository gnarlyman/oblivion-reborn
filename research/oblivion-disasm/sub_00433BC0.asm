; ============================================================
; sub_433BC0  (Crash 3: +0x191)
; VA: 0x00433BC0  size: 0x280
; ============================================================
0x00433BC0  6aff                  push   -1
0x00433BC2  6850c09a00            push   0x9ac050  ; -> sub_9AC050
0x00433BC7  64a100000000          mov    eax, dword ptr fs:[0]
0x00433BCD  50                    push   eax
0x00433BCE  83ec30                sub    esp, 0x30
0x00433BD1  53                    push   ebx
0x00433BD2  55                    push   ebp
0x00433BD3  56                    push   esi
0x00433BD4  57                    push   edi
0x00433BD5  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00433BDA  33c4                  xor    eax, esp
0x00433BDC  50                    push   eax
0x00433BDD  8d442444              lea    eax, [esp + 0x44]
0x00433BE1  64a300000000          mov    dword ptr fs:[0], eax
0x00433BE7  8be9                  mov    ebp, ecx
0x00433BE9  8d7d18                lea    edi, [ebp + 0x18]
0x00433BEC  33db                  xor    ebx, ebx
0x00433BEE  8bff                  mov    edi, edi
0x00433BF0  8b4514                mov    eax, dword ptr [ebp + 0x14]
0x00433BF3  8b35cc80a200          mov    esi, dword ptr [0xa280cc]
0x00433BF9  6aff                  push   -1
0x00433BFB  50                    push   eax
0x00433BFC  ffd6                  call   esi
0x00433BFE  3d02010000            cmp    eax, 0x102
0x00433C03  740a                  je     0x433c0f  ; -> sub_433C0F
0x00433C05  8d450c                lea    eax, [ebp + 0xc]
0x00433C08  50                    push   eax
0x00433C09  ff157c80a200          call   dword ptr [0xa2807c]
0x00433C0F  895c242c              mov    dword ptr [esp + 0x2c], ebx
0x00433C13  895c2434              mov    dword ptr [esp + 0x34], ebx
0x00433C17  895c2438              mov    dword ptr [esp + 0x38], ebx
0x00433C1B  885c243c              mov    byte ptr [esp + 0x3c], bl
0x00433C1F  c7442424f864a300      mov    dword ptr [esp + 0x24], 0xa364f8  ; -> sub_A364F8
0x00433C27  895c244c              mov    dword ptr [esp + 0x4c], ebx
0x00433C2B  885c2417              mov    byte ptr [esp + 0x17], bl
0x00433C2F  eb06                  jmp    0x433c37  ; -> sub_433C37
0x00433C31  8b35cc80a200          mov    esi, dword ptr [0xa280cc]
0x00433C37  8b4d20                mov    ecx, dword ptr [ebp + 0x20]
0x00433C3A  53                    push   ebx
0x00433C3B  51                    push   ecx
0x00433C3C  ffd6                  call   esi
0x00433C3E  3d02010000            cmp    eax, 0x102
0x00433C43  753d                  jne    0x433c82  ; -> sub_433C82
0x00433C45  8b5708                mov    edx, dword ptr [edi + 8]
0x00433C48  6aff                  push   -1
0x00433C4A  52                    push   edx
0x00433C4B  ffd6                  call   esi
0x00433C4D  3d02010000            cmp    eax, 0x102
0x00433C52  7407                  je     0x433c5b  ; -> sub_433C5B
0x00433C54  57                    push   edi
0x00433C55  ff157c80a200          call   dword ptr [0xa2807c]
0x00433C5B  8b442438              mov    eax, dword ptr [esp + 0x38]
0x00433C5F  8b4c2434              mov    ecx, dword ptr [esp + 0x34]
0x00433C63  8b542424              mov    edx, dword ptr [esp + 0x24]
0x00433C67  50                    push   eax
0x00433C68  8b02                  mov    eax, dword ptr [edx]
0x00433C6A  51                    push   ecx
0x00433C6B  8d4c242c              lea    ecx, [esp + 0x2c]
0x00433C6F  ffd0                  call   eax
0x00433C71  8064243cfc            and    byte ptr [esp + 0x3c], 0xfc
0x00433C76  895c2434              mov    dword ptr [esp + 0x34], ebx
0x00433C7A  895c2438              mov    dword ptr [esp + 0x38], ebx
0x00433C7E  895c242c              mov    dword ptr [esp + 0x2c], ebx
0x00433C82  895c2418              mov    dword ptr [esp + 0x18], ebx
0x00433C86  385c2417              cmp    byte ptr [esp + 0x17], bl
0x00433C8A  8d542418              lea    edx, [esp + 0x18]
0x00433C8E  0f94c1                sete   cl
0x00433C91  8d44241c              lea    eax, [esp + 0x1c]
0x00433C95  c644244c01            mov    byte ptr [esp + 0x4c], 1
0x00433C9A  51                    push   ecx
0x00433C9B  52                    push   edx
0x00433C9C  50                    push   eax
0x00433C9D  8d4c2430              lea    ecx, [esp + 0x30]
0x00433CA1  51                    push   ecx
0x00433CA2  8b4d24                mov    ecx, dword ptr [ebp + 0x24]
0x00433CA5  e8b6faffff            call   0x433760  ; -> sub_433760
0x00433CAA  84c0                  test   al, al
0x00433CAC  743f                  je     0x433ced  ; -> sub_433CED
0x00433CAE  8b742418              mov    esi, dword ptr [esp + 0x18]
0x00433CB2  837e0c01              cmp    dword ptr [esi + 0xc], 1
0x00433CB6  8d460c                lea    eax, [esi + 0xc]
0x00433CB9  7564                  jne    0x433d1f  ; -> sub_433D1F
0x00433CBB  6a01                  push   1
0x00433CBD  6a03                  push   3
0x00433CBF  50                    push   eax
0x00433CC0  ff153c81a200          call   dword ptr [0xa2813c]
0x00433CC6  83f801                cmp    eax, 1
0x00433CC9  0f94c0                sete   al
0x00433CCC  3ac3                  cmp    al, bl
0x00433CCE  744f                  je     0x433d1f  ; -> sub_433D1F
0x00433CD0  8b4d24                mov    ecx, dword ptr [ebp + 0x24]
0x00433CD3  8b11                  mov    edx, dword ptr [ecx]
0x00433CD5  8b4240                mov    eax, dword ptr [edx + 0x40]
0x00433CD8  56                    push   esi
0x00433CD9  c644241b01            mov    byte ptr [esp + 0x1b], 1
0x00433CDE  ffd0                  call   eax
0x00433CE0  8b4d24                mov    ecx, dword ptr [ebp + 0x24]
0x00433CE3  8b11                  mov    edx, dword ptr [ecx]
0x00433CE5  8b4244                mov    eax, dword ptr [edx + 0x44]
0x00433CE8  56                    push   esi
0x00433CE9  ffd0                  call   eax
0x00433CEB  eb32                  jmp    0x433d1f  ; -> sub_433D1F
0x00433CED  f644243c02            test   byte ptr [esp + 0x3c], 2
0x00433CF2  752b                  jne    0x433d1f  ; -> sub_433D1F
0x00433CF4  8b4c2438              mov    ecx, dword ptr [esp + 0x38]
0x00433CF8  8b542434              mov    edx, dword ptr [esp + 0x34]
0x00433CFC  8b442424              mov    eax, dword ptr [esp + 0x24]
0x00433D00  51                    push   ecx
0x00433D01  52                    push   edx
0x00433D02  8b10                  mov    edx, dword ptr [eax]
0x00433D04  8d4c242c              lea    ecx, [esp + 0x2c]
0x00433D08  ffd2                  call   edx
0x00433D0A  8064243cfc            and    byte ptr [esp + 0x3c], 0xfc
0x00433D0F  895c2434              mov    dword ptr [esp + 0x34], ebx
0x00433D13  895c2438              mov    dword ptr [esp + 0x38], ebx
0x00433D17  895c242c              mov    dword ptr [esp + 0x2c], ebx
0x00433D1B  885c2417              mov    byte ptr [esp + 0x17], bl
0x00433D1F  57                    push   edi
0x00433D20  ff157880a200          call   dword ptr [0xa28078]
0x00433D26  8b4708                mov    eax, dword ptr [edi + 8]
0x00433D29  53                    push   ebx
0x00433D2A  6a01                  push   1
0x00433D2C  50                    push   eax
0x00433D2D  ff15c880a200          call   dword ptr [0xa280c8]
0x00433D33  8b0f                  mov    ecx, dword ptr [edi]
0x00433D35  8b742418              mov    esi, dword ptr [esp + 0x18]
0x00433D39  3bf3                  cmp    esi, ebx
0x00433D3B  885c244c              mov    byte ptr [esp + 0x4c], bl
0x00433D3F  7418                  je     0x433d59  ; -> sub_433D59
0x00433D41  8d5608                lea    edx, [esi + 8]
0x00433D44  52                    push   edx
0x00433D45  ff157c80a200          call   dword ptr [0xa2807c]
0x00433D4B  85c0                  test   eax, eax
0x00433D4D  750a                  jne    0x433d59  ; -> sub_433D59
0x00433D4F  8b06                  mov    eax, dword ptr [esi]
0x00433D51  8b10                  mov    edx, dword ptr [eax]
0x00433D53  6a01                  push   1
0x00433D55  8bce                  mov    ecx, esi
0x00433D57  ffd2                  call   edx
0x00433D59  f644243c02            test   byte ptr [esp + 0x3c], 2
0x00433D5E  0f84cdfeffff          je     0x433c31  ; -> sub_433C31
0x00433D64  e987feffff            jmp    0x433bf0  ; -> sub_433BF0
0x00433D69  cc                    int3   
0x00433D6A  cc                    int3   
0x00433D6B  cc                    int3   
0x00433D6C  cc                    int3   
0x00433D6D  cc                    int3   
0x00433D6E  cc                    int3   
0x00433D6F  cc                    int3   
0x00433D70  6aff                  push   -1
0x00433D72  682b399c00            push   0x9c392b  ; -> sub_9C392B
0x00433D77  64a100000000          mov    eax, dword ptr fs:[0]
0x00433D7D  50                    push   eax
0x00433D7E  83ec08                sub    esp, 8
0x00433D81  53                    push   ebx
0x00433D82  55                    push   ebp
0x00433D83  56                    push   esi
0x00433D84  57                    push   edi
0x00433D85  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00433D8A  33c4                  xor    eax, esp
0x00433D8C  50                    push   eax
0x00433D8D  8d44241c              lea    eax, [esp + 0x1c]
0x00433D91  64a300000000          mov    dword ptr fs:[0], eax
0x00433D97  8bd9                  mov    ebx, ecx
0x00433D99  8b7314                mov    esi, dword ptr [ebx + 0x14]
0x00433D9C  33ff                  xor    edi, edi
0x00433D9E  3bf7                  cmp    esi, edi
0x00433DA0  0f840d010000          je     0x433eb3  ; -> sub_433EB3
0x00433DA6  8b06                  mov    eax, dword ptr [esi]
0x00433DA8  8bce                  mov    ecx, esi
0x00433DAA  89442418              mov    dword ptr [esp + 0x18], eax
0x00433DAE  e85df3ffff            call   0x433110  ; -> sub_433110
0x00433DB3  56                    push   esi
0x00433DB4  e867e1fcff            call   0x401f20  ; -> sub_401F20
0x00433DB9  33d2                  xor    edx, edx
0x00433DBB  83c404                add    esp, 4
0x00433DBE  397b08                cmp    dword ptr [ebx + 8], edi
0x00433DC1  897b14                mov    dword ptr [ebx + 0x14], edi
0x00433DC4  897b18                mov    dword ptr [ebx + 0x18], edi
0x00433DC7  89542414              mov    dword ptr [esp + 0x14], edx
0x00433DCB  0f86ae000000          jbe    0x433e7f  ; -> sub_433E7F
0x00433DD1  8b430c                mov    eax, dword ptr [ebx + 0xc]
0x00433DD4  8d0c9500000000        lea    ecx, [edx*4]
0x00433DDB  8b3408                mov    esi, dword ptr [eax + ecx]
0x00433DDE  03c1                  add    eax, ecx
0x00433DE0  8b430c                mov    eax, dword ptr [ebx + 0xc]
0x00433DE3  83e6fe                and    esi, 0xfffffffe
0x00433DE6  03c1                  add    eax, ecx
0x00433DE8  85f6                  test   esi, esi
0x00433DEA  c70000000000          mov    dword ptr [eax], 0
0x00433DF0  747d                  je     0x433e6f  ; -> sub_433E6F
0x00433DF2  8b6e0c                mov    ebp, dword ptr [esi + 0xc]
0x00433DF5  c7460c00000000        mov    dword ptr [esi + 0xc], 0
0x00433DFC  8b7e08                mov    edi, dword ptr [esi + 8]
0x00433DFF  83e5fe                and    ebp, 0xfffffffe
0x00433E02  85ff                  test   edi, edi
0x00433E04  7423                  je     0x433e29  ; -> sub_433E29
0x00433E06  8d4f08                lea    ecx, [edi + 8]
0x00433E09  51                    push   ecx
0x00433E0A  ff157c80a200          call   dword ptr [0xa2807c]
0x00433E10  85c0                  test   eax, eax
0x00433E12  750e                  jne    0x433e22  ; -> sub_433E22
0x00433E14  85ff                  test   edi, edi
0x00433E16  740a                  je     0x433e22  ; -> sub_433E22
0x00433E18  8b17                  mov    edx, dword ptr [edi]
0x00433E1A  8b02                  mov    eax, dword ptr [edx]
0x00433E1C  6a01                  push   1
0x00433E1E  8bcf                  mov    ecx, edi
0x00433E20  ffd0                  call   eax
0x00433E22  c7460800000000        mov    dword ptr [esi + 8], 0
0x00433E29  8b4604                mov    eax, dword ptr [esi + 4]
0x00433E2C  8b0e                  mov    ecx, dword ptr [esi]
0x00433E2E  8b13                  mov    edx, dword ptr [ebx]
0x00433E30  8b5220                mov    edx, dword ptr [edx + 0x20]
0x00433E33  50                    push   eax
0x00433E34  51                    push   ecx
0x00433E35  8bcb                  mov    ecx, ebx
0x00433E37  ffd2                  call   edx
0x00433E39  8b7e08                mov    edi, dword ptr [esi + 8]
0x00433E3C  85ff                  test   edi, edi
0x00433E3E  741c                  je     0x433e5c  ; -> sub_433E5C
