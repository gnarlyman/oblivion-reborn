ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x0052DED0
; VA: 0x0052DED0  size: 0x800
; ============================================================
0x0052DED0  6aff                  push   -1
0x0052DED2  68d5889b00            push   0x9b88d5  ; -> sub_9B88D5
0x0052DED7  64a100000000          mov    eax, dword ptr fs:[0]
0x0052DEDD  50                    push   eax
0x0052DEDE  81eccc000000          sub    esp, 0xcc
0x0052DEE4  53                    push   ebx
0x0052DEE5  55                    push   ebp
0x0052DEE6  56                    push   esi
0x0052DEE7  57                    push   edi
0x0052DEE8  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0052DEED  33c4                  xor    eax, esp
0x0052DEEF  50                    push   eax
0x0052DEF0  8d8424e0000000        lea    eax, [esp + 0xe0]
0x0052DEF7  64a300000000          mov    dword ptr fs:[0], eax
0x0052DEFD  894c2418              mov    dword ptr [esp + 0x18], ecx
0x0052DF01  8bb424f0000000        mov    esi, dword ptr [esp + 0xf0]
0x0052DF08  8bbc24f4000000        mov    edi, dword ptr [esp + 0xf4]
0x0052DF0F  33ed                  xor    ebp, ebp
0x0052DF11  892e                  mov    dword ptr [esi], ebp
0x0052DF13  68e0010000            push   0x1e0
0x0052DF18  892f                  mov    dword ptr [edi], ebp
0x0052DF1A  e8e13fedff            call   0x401f00  ; -> sub_401F00
0x0052DF1F  83c404                add    esp, 4
0x0052DF22  89442414              mov    dword ptr [esp + 0x14], eax
0x0052DF26  3bc5                  cmp    eax, ebp
0x0052DF28  89ac24e8000000        mov    dword ptr [esp + 0xe8], ebp
0x0052DF2F  7409                  je     0x52df3a  ; -> sub_52DF3A
0x0052DF31  8bc8                  mov    ecx, eax
0x0052DF33  e8b8eb0100            call   0x54caf0  ; -> sub_54CAF0
0x0052DF38  8be8                  mov    ebp, eax
0x0052DF3A  83cbff                or     ebx, 0xffffffff
0x0052DF3D  6818010000            push   0x118
0x0052DF42  899c24ec000000        mov    dword ptr [esp + 0xec], ebx
0x0052DF49  e8b23fedff            call   0x401f00  ; -> sub_401F00
0x0052DF4E  83c404                add    esp, 4
0x0052DF51  89442414              mov    dword ptr [esp + 0x14], eax
0x0052DF55  85c0                  test   eax, eax
0x0052DF57  c78424e800000001000000  mov    dword ptr [esp + 0xe8], 1
0x0052DF62  7409                  je     0x52df6d  ; -> sub_52DF6D
0x0052DF64  8bc8                  mov    ecx, eax
0x0052DF66  e805ee0200            call   0x55cd70  ; -> sub_55CD70
0x0052DF6B  eb02                  jmp    0x52df6f  ; -> sub_52DF6F
0x0052DF6D  33c0                  xor    eax, eax
0x0052DF6F  68c06ea400            push   0xa46ec0  ; -> sub_A46EC0
0x0052DF74  8bc8                  mov    ecx, eax
0x0052DF76  899c24ec000000        mov    dword ptr [esp + 0xec], ebx
0x0052DF7D  8906                  mov    dword ptr [esi], eax
0x0052DF7F  e89c141d00            call   0x6ff420  ; -> sub_6FF420
0x0052DF84  8b0e                  mov    ecx, dword ptr [esi]
0x0052DF86  8b01                  mov    eax, dword ptr [ecx]
0x0052DF88  8b90a0000000          mov    edx, dword ptr [eax + 0xa0]
0x0052DF8E  55                    push   ebp
0x0052DF8F  ffd2                  call   edx
0x0052DF91  8b0e                  mov    ecx, dword ptr [esi]
0x0052DF93  8b01                  mov    eax, dword ptr [ecx]
0x0052DF95  8b90b0000000          mov    edx, dword ptr [eax + 0xb0]
0x0052DF9B  6a01                  push   1
0x0052DF9D  ffd2                  call   edx
0x0052DF9F  8b0e                  mov    ecx, dword ptr [esi]
0x0052DFA1  8b01                  mov    eax, dword ptr [ecx]
0x0052DFA3  8b90b8000000          mov    edx, dword ptr [eax + 0xb8]
0x0052DFA9  6a01                  push   1
0x0052DFAB  ffd2                  call   edx
0x0052DFAD  6818010000            push   0x118
0x0052DFB2  e8493fedff            call   0x401f00  ; -> sub_401F00
0x0052DFB7  83c404                add    esp, 4
0x0052DFBA  89442414              mov    dword ptr [esp + 0x14], eax
0x0052DFBE  85c0                  test   eax, eax
0x0052DFC0  c78424e800000002000000  mov    dword ptr [esp + 0xe8], 2
0x0052DFCB  7409                  je     0x52dfd6  ; -> sub_52DFD6
0x0052DFCD  8bc8                  mov    ecx, eax
0x0052DFCF  e89ced0200            call   0x55cd70  ; -> sub_55CD70
0x0052DFD4  eb02                  jmp    0x52dfd8  ; -> sub_52DFD8
0x0052DFD6  33c0                  xor    eax, eax
0x0052DFD8  68d86ea400            push   0xa46ed8  ; -> sub_A46ED8
0x0052DFDD  8bc8                  mov    ecx, eax
0x0052DFDF  899c24ec000000        mov    dword ptr [esp + 0xec], ebx
0x0052DFE6  8907                  mov    dword ptr [edi], eax
0x0052DFE8  e833141d00            call   0x6ff420  ; -> sub_6FF420
0x0052DFED  8b0f                  mov    ecx, dword ptr [edi]
0x0052DFEF  8b01                  mov    eax, dword ptr [ecx]
0x0052DFF1  8b90a0000000          mov    edx, dword ptr [eax + 0xa0]
0x0052DFF7  55                    push   ebp
0x0052DFF8  ffd2                  call   edx
0x0052DFFA  8b0f                  mov    ecx, dword ptr [edi]
0x0052DFFC  8b01                  mov    eax, dword ptr [ecx]
0x0052DFFE  8b90b0000000          mov    edx, dword ptr [eax + 0xb0]
0x0052E004  6a00                  push   0
0x0052E006  ffd2                  call   edx
0x0052E008  8b0f                  mov    ecx, dword ptr [edi]
0x0052E00A  8b01                  mov    eax, dword ptr [ecx]
0x0052E00C  8b90b8000000          mov    edx, dword ptr [eax + 0xb8]
0x0052E012  6a00                  push   0
0x0052E014  ffd2                  call   edx
0x0052E016  8d4c241c              lea    ecx, [esp + 0x1c]
0x0052E01A  e8719cffff            call   0x527c90  ; -> sub_527C90
0x0052E01F  8bac24f8000000        mov    ebp, dword ptr [esp + 0xf8]
0x0052E026  8b4c2418              mov    ecx, dword ptr [esp + 0x18]
0x0052E02A  8d44241c              lea    eax, [esp + 0x1c]
0x0052E02E  50                    push   eax
0x0052E02F  55                    push   ebp
0x0052E030  c78424f000000003000000  mov    dword ptr [esp + 0xf0], 3
0x0052E03B  e810edffff            call   0x52cd50  ; -> sub_52CD50
0x0052E040  8b8c2400010000        mov    ecx, dword ptr [esp + 0x100]
0x0052E047  51                    push   ecx
0x0052E048  8d542420              lea    edx, [esp + 0x20]
0x0052E04C  52                    push   edx
0x0052E04D  57                    push   edi
0x0052E04E  56                    push   esi
0x0052E04F  e82c7a0200            call   0x555a80  ; -> sub_555A80
0x0052E054  83c410                add    esp, 0x10
0x0052E057  80bc24fc00000000      cmp    byte ptr [esp + 0xfc], 0
0x0052E05F  741d                  je     0x52e07e  ; -> sub_52E07E
0x0052E061  8b0e                  mov    ecx, dword ptr [esi]
0x0052E063  8d44241c              lea    eax, [esp + 0x1c]
0x0052E067  50                    push   eax
0x0052E068  51                    push   ecx
0x0052E069  e852710200            call   0x5551c0  ; -> sub_5551C0
0x0052E06E  8b07                  mov    eax, dword ptr [edi]
0x0052E070  8d542424              lea    edx, [esp + 0x24]
0x0052E074  52                    push   edx
0x0052E075  50                    push   eax
0x0052E076  e845710200            call   0x5551c0  ; -> sub_5551C0
0x0052E07B  83c410                add    esp, 0x10
0x0052E07E  85ed                  test   ebp, ebp
0x0052E080  7418                  je     0x52e09a  ; -> sub_52E09A
0x0052E082  837d0c07              cmp    dword ptr [ebp + 0xc], 7
0x0052E086  7512                  jne    0x52e09a  ; -> sub_52E09A
0x0052E088  8b36                  mov    esi, dword ptr [esi]
0x0052E08A  c6861101000001        mov    byte ptr [esi + 0x111], 1
0x0052E091  8b3f                  mov    edi, dword ptr [edi]
0x0052E093  c6871101000001        mov    byte ptr [edi + 0x111], 1
0x0052E09A  8d4c241c              lea    ecx, [esp + 0x1c]
0x0052E09E  899c24e8000000        mov    dword ptr [esp + 0xe8], ebx
0x0052E0A5  e8368cffff            call   0x526ce0  ; -> sub_526CE0
0x0052E0AA  b001                  mov    al, 1
0x0052E0AC  8b8c24e0000000        mov    ecx, dword ptr [esp + 0xe0]
0x0052E0B3  64890d00000000        mov    dword ptr fs:[0], ecx
0x0052E0BA  59                    pop    ecx
0x0052E0BB  5f                    pop    edi
0x0052E0BC  5e                    pop    esi
0x0052E0BD  5d                    pop    ebp
0x0052E0BE  5b                    pop    ebx
0x0052E0BF  81c4d8000000          add    esp, 0xd8
0x0052E0C5  c21400                ret    0x14
0x0052E0C8  cc                    int3   
0x0052E0C9  cc                    int3   
0x0052E0CA  cc                    int3   
0x0052E0CB  cc                    int3   
0x0052E0CC  cc                    int3   
0x0052E0CD  cc                    int3   
0x0052E0CE  cc                    int3   
0x0052E0CF  cc                    int3   
0x0052E0D0  56                    push   esi
0x0052E0D1  8b742408              mov    esi, dword ptr [esp + 8]
0x0052E0D5  85f6                  test   esi, esi
0x0052E0D7  57                    push   edi
0x0052E0D8  8bf9                  mov    edi, ecx
0x0052E0DA  7418                  je     0x52e0f4  ; -> sub_52E0F4
0x0052E0DC  8bce                  mov    ecx, esi
0x0052E0DE  e8cd2ff2ff            call   0x4510b0  ; -> sub_4510B0
0x0052E0E3  3d54524454            cmp    eax, 0x54445254
0x0052E0E8  750a                  jne    0x52e0f4  ; -> sub_52E0F4
0x0052E0EA  6a10                  push   0x10
0x0052E0EC  57                    push   edi
0x0052E0ED  8bce                  mov    ecx, esi
0x0052E0EF  e82c2bf2ff            call   0x450c20  ; -> sub_450C20
0x0052E0F4  5f                    pop    edi
0x0052E0F5  5e                    pop    esi
0x0052E0F6  c20400                ret    4
0x0052E0F9  cc                    int3   
0x0052E0FA  cc                    int3   
0x0052E0FB  cc                    int3   
0x0052E0FC  cc                    int3   
0x0052E0FD  cc                    int3   
0x0052E0FE  cc                    int3   
0x0052E0FF  cc                    int3   
0x0052E100  8b4110                mov    eax, dword ptr [ecx + 0x10]
0x0052E103  85c0                  test   eax, eax
0x0052E105  7505                  jne    0x52e10c  ; -> sub_52E10C
0x0052E107  b8ecf7a200            mov    eax, 0xa2f7ec  ; -> sub_A2F7EC
0x0052E10C  c3                    ret    
0x0052E10D  cc                    int3   
0x0052E10E  cc                    int3   
0x0052E10F  cc                    int3   
0x0052E110  8b442404              mov    eax, dword ptr [esp + 4]
0x0052E114  8b10                  mov    edx, dword ptr [eax]
0x0052E116  8911                  mov    dword ptr [ecx], edx
0x0052E118  8b5004                mov    edx, dword ptr [eax + 4]
0x0052E11B  895104                mov    dword ptr [ecx + 4], edx
0x0052E11E  8b5008                mov    edx, dword ptr [eax + 8]
0x0052E121  895108                mov    dword ptr [ecx + 8], edx
0x0052E124  8b500c                mov    edx, dword ptr [eax + 0xc]
0x0052E127  89510c                mov    dword ptr [ecx + 0xc], edx
0x0052E12A  8b4010                mov    eax, dword ptr [eax + 0x10]
0x0052E12D  85c0                  test   eax, eax
0x0052E12F  7505                  jne    0x52e136  ; -> sub_52E136
0x0052E131  b8ecf7a200            mov    eax, 0xa2f7ec  ; -> sub_A2F7EC
0x0052E136  6a00                  push   0
0x0052E138  50                    push   eax
0x0052E139  83c110                add    ecx, 0x10
0x0052E13C  e88f47edff            call   0x4028d0  ; -> sub_4028D0
0x0052E141  c20400                ret    4
0x0052E144  cc                    int3   
0x0052E145  cc                    int3   
0x0052E146  cc                    int3   
0x0052E147  cc                    int3   
0x0052E148  cc                    int3   
0x0052E149  cc                    int3   
0x0052E14A  cc                    int3   
0x0052E14B  cc                    int3   
0x0052E14C  cc                    int3   
0x0052E14D  cc                    int3   
0x0052E14E  cc                    int3   
0x0052E14F  cc                    int3   
0x0052E150  6aff                  push   -1
0x0052E152  683b899b00            push   0x9b893b  ; -> sub_9B893B
0x0052E157  64a100000000          mov    eax, dword ptr fs:[0]
0x0052E15D  50                    push   eax
0x0052E15E  51                    push   ecx
0x0052E15F  53                    push   ebx
0x0052E160  56                    push   esi
0x0052E161  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0052E166  33c4                  xor    eax, esp
0x0052E168  50                    push   eax
0x0052E169  8d442410              lea    eax, [esp + 0x10]
0x0052E16D  64a300000000          mov    dword ptr fs:[0], eax
0x0052E173  8bf1                  mov    esi, ecx
0x0052E175  33db                  xor    ebx, ebx
0x0052E177  891e                  mov    dword ptr [esi], ebx
0x0052E179  c7460432000000        mov    dword ptr [esi + 4], 0x32
0x0052E180  895e08                mov    dword ptr [esi + 8], ebx
0x0052E183  885e0c                mov    byte ptr [esi + 0xc], bl
0x0052E186  895e10                mov    dword ptr [esi + 0x10], ebx
0x0052E189  66895e14              mov    word ptr [esi + 0x14], bx
0x0052E18D  66895e16              mov    word ptr [esi + 0x16], bx
0x0052E191  8bc3                  mov    eax, ebx
0x0052E193  50                    push   eax
0x0052E194  e8873dedff            call   0x401f20  ; -> sub_401F20
0x0052E199  83c404                add    esp, 4
0x0052E19C  895e10                mov    dword ptr [esi + 0x10], ebx
0x0052E19F  66895e16              mov    word ptr [esi + 0x16], bx
0x0052E1A3  66895e14              mov    word ptr [esi + 0x14], bx
0x0052E1A7  8bc6                  mov    eax, esi
0x0052E1A9  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x0052E1AD  64890d00000000        mov    dword ptr fs:[0], ecx
0x0052E1B4  59                    pop    ecx
0x0052E1B5  5e                    pop    esi
0x0052E1B6  5b                    pop    ebx
0x0052E1B7  83c410                add    esp, 0x10
0x0052E1BA  c3                    ret    
0x0052E1BB  cc                    int3   
0x0052E1BC  cc                    int3   
0x0052E1BD  cc                    int3   
0x0052E1BE  cc                    int3   
0x0052E1BF  cc                    int3   
0x0052E1C0  56                    push   esi
0x0052E1C1  8bf1                  mov    esi, ecx
0x0052E1C3  8b4610                mov    eax, dword ptr [esi + 0x10]
0x0052E1C6  50                    push   eax
0x0052E1C7  e8543dedff            call   0x401f20  ; -> sub_401F20
0x0052E1CC  33c0                  xor    eax, eax
0x0052E1CE  83c404                add    esp, 4
0x0052E1D1  894610                mov    dword ptr [esi + 0x10], eax
0x0052E1D4  66894616              mov    word ptr [esi + 0x16], ax
0x0052E1D8  66894614              mov    word ptr [esi + 0x14], ax
0x0052E1DC  5e                    pop    esi
0x0052E1DD  c3                    ret    
0x0052E1DE  cc                    int3   
0x0052E1DF  cc                    int3   
0x0052E1E0  81ec08010000          sub    esp, 0x108
0x0052E1E6  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0052E1EB  33c4                  xor    eax, esp
0x0052E1ED  89842404010000        mov    dword ptr [esp + 0x104], eax
0x0052E1F4  8b942410010000        mov    edx, dword ptr [esp + 0x110]
0x0052E1FB  8a0a                  mov    cl, byte ptr [edx]
0x0052E1FD  84c9                  test   cl, cl
0x0052E1FF  56                    push   esi
0x0052E200  57                    push   edi
0x0052E201  8bbc2414010000        mov    edi, dword ptr [esp + 0x114]
0x0052E208  8d442408              lea    eax, [esp + 8]
0x0052E20C  7410                  je     0x52e21e  ; -> sub_52E21E
0x0052E20E  8bff                  mov    edi, edi
0x0052E210  83c201                add    edx, 1
0x0052E213  8808                  mov    byte ptr [eax], cl
0x0052E215  8a0a                  mov    cl, byte ptr [edx]
0x0052E217  83c001                add    eax, 1
0x0052E21A  84c9                  test   cl, cl
0x0052E21C  75f2                  jne    0x52e210  ; -> sub_52E210
0x0052E21E  8b94241c010000        mov    edx, dword ptr [esp + 0x11c]
0x0052E225  8a0a                  mov    cl, byte ptr [edx]
0x0052E227  c6005c                mov    byte ptr [eax], 0x5c
0x0052E22A  83c001                add    eax, 1
0x0052E22D  84c9                  test   cl, cl
0x0052E22F  740e                  je     0x52e23f  ; -> sub_52E23F
0x0052E231  83c201                add    edx, 1
0x0052E234  8808                  mov    byte ptr [eax], cl
0x0052E236  8a0a                  mov    cl, byte ptr [edx]
0x0052E238  83c001                add    eax, 1
0x0052E23B  84c9                  test   cl, cl
0x0052E23D  75f2                  jne    0x52e231  ; -> sub_52E231
0x0052E23F  8b942420010000        mov    edx, dword ptr [esp + 0x120]
0x0052E246  8a0a                  mov    cl, byte ptr [edx]
0x0052E248  c6005c                mov    byte ptr [eax], 0x5c
0x0052E24B  83c001                add    eax, 1
0x0052E24E  84c9                  test   cl, cl
0x0052E250  740e                  je     0x52e260  ; -> sub_52E260
0x0052E252  83c201                add    edx, 1
0x0052E255  8808                  mov    byte ptr [eax], cl
0x0052E257  8a0a                  mov    cl, byte ptr [edx]
0x0052E259  83c001                add    eax, 1
0x0052E25C  84c9                  test   cl, cl
0x0052E25E  75f2                  jne    0x52e252  ; -> sub_52E252
0x0052E260  8b942424010000        mov    edx, dword ptr [esp + 0x124]
0x0052E267  8a0a                  mov    cl, byte ptr [edx]
0x0052E269  c6005c                mov    byte ptr [eax], 0x5c
0x0052E26C  83c001                add    eax, 1
0x0052E26F  84c9                  test   cl, cl
0x0052E271  7414                  je     0x52e287  ; -> sub_52E287
0x0052E273  83c201                add    edx, 1
0x0052E276  8808                  mov    byte ptr [eax], cl
0x0052E278  8a0a                  mov    cl, byte ptr [edx]
0x0052E27A  83c001                add    eax, 1
0x0052E27D  84c9                  test   cl, cl
0x0052E27F  75f2                  jne    0x52e273  ; -> sub_52E273
0x0052E281  c6005c                mov    byte ptr [eax], 0x5c
0x0052E284  83c001                add    eax, 1
0x0052E287  8b942428010000        mov    edx, dword ptr [esp + 0x128]
0x0052E28E  8a0a                  mov    cl, byte ptr [edx]
0x0052E290  84c9                  test   cl, cl
0x0052E292  740e                  je     0x52e2a2  ; -> sub_52E2A2
0x0052E294  83c201                add    edx, 1
0x0052E297  8808                  mov    byte ptr [eax], cl
0x0052E299  8a0a                  mov    cl, byte ptr [edx]
0x0052E29B  83c001                add    eax, 1
0x0052E29E  84c9                  test   cl, cl
0x0052E2A0  75f2                  jne    0x52e294  ; -> sub_52E294
0x0052E2A2  8b94242c010000        mov    edx, dword ptr [esp + 0x12c]
0x0052E2A9  8a0a                  mov    cl, byte ptr [edx]
0x0052E2AB  c6002e                mov    byte ptr [eax], 0x2e
0x0052E2AE  83c001                add    eax, 1
0x0052E2B1  84c9                  test   cl, cl
0x0052E2B3  740e                  je     0x52e2c3  ; -> sub_52E2C3
0x0052E2B5  83c201                add    edx, 1
0x0052E2B8  8808                  mov    byte ptr [eax], cl
0x0052E2BA  8a0a                  mov    cl, byte ptr [edx]
0x0052E2BC  83c001                add    eax, 1
0x0052E2BF  84c9                  test   cl, cl
0x0052E2C1  75f2                  jne    0x52e2b5  ; -> sub_52E2B5
0x0052E2C3  8b0d043ab300          mov    ecx, dword ptr [0xb33a04]
0x0052E2C9  85c9                  test   ecx, ecx
0x0052E2CB  c60000                mov    byte ptr [eax], 0
0x0052E2CE  7416                  je     0x52e2e6  ; -> sub_52E2E6
0x0052E2D0  8b01                  mov    eax, dword ptr [ecx]
0x0052E2D2  8b4004                mov    eax, dword ptr [eax + 4]
0x0052E2D5  6aff                  push   -1
0x0052E2D7  6a00                  push   0
0x0052E2D9  6a00                  push   0
0x0052E2DB  8d542414              lea    edx, [esp + 0x14]
0x0052E2DF  52                    push   edx
0x0052E2E0  ffd0                  call   eax
0x0052E2E2  8bf0                  mov    esi, eax
0x0052E2E4  eb02                  jmp    0x52e2e8  ; -> sub_52E2E8
0x0052E2E6  33f6                  xor    esi, esi
0x0052E2E8  6a00                  push   0
0x0052E2EA  8d4c240c              lea    ecx, [esp + 0xc]
0x0052E2EE  51                    push   ecx
0x0052E2EF  8bcf                  mov    ecx, edi
0x0052E2F1  e8da45edff            call   0x4028d0  ; -> sub_4028D0
0x0052E2F6  8b8c240c010000        mov    ecx, dword ptr [esp + 0x10c]
0x0052E2FD  85f6                  test   esi, esi
0x0052E2FF  5f                    pop    edi
0x0052E300  0f95c0                setne  al
0x0052E303  5e                    pop    esi
0x0052E304  33cc                  xor    ecx, esp
0x0052E306  e8d72e4500            call   0x9811e2  ; -> sub_9811E2
0x0052E30B  81c408010000          add    esp, 0x108
0x0052E311  c21c00                ret    0x1c
0x0052E314  cc                    int3   
0x0052E315  cc                    int3   
0x0052E316  cc                    int3   
0x0052E317  cc                    int3   
0x0052E318  cc                    int3   
0x0052E319  cc                    int3   
0x0052E31A  cc                    int3   
0x0052E31B  cc                    int3   
0x0052E31C  cc                    int3   
0x0052E31D  cc                    int3   
0x0052E31E  cc                    int3   
0x0052E31F  cc                    int3   
0x0052E320  6aff                  push   -1
0x0052E322  68d85b9b00            push   0x9b5bd8  ; -> sub_9B5BD8
0x0052E327  64a100000000          mov    eax, dword ptr fs:[0]
0x0052E32D  50                    push   eax
0x0052E32E  83ec08                sub    esp, 8
0x0052E331  53                    push   ebx
0x0052E332  55                    push   ebp
0x0052E333  56                    push   esi
0x0052E334  57                    push   edi
0x0052E335  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0052E33A  33c4                  xor    eax, esp
0x0052E33C  50                    push   eax
0x0052E33D  8d44241c              lea    eax, [esp + 0x1c]
0x0052E341  64a300000000          mov    dword ptr fs:[0], eax
0x0052E347  33ff                  xor    edi, edi
0x0052E349  397c242c              cmp    dword ptr [esp + 0x2c], edi
0x0052E34D  0f84a3000000          je     0x52e3f6  ; -> sub_52E3F6
0x0052E353  8b6c2430              mov    ebp, dword ptr [esp + 0x30]
0x0052E357  3bef                  cmp    ebp, edi
0x0052E359  0f8497000000          je     0x52e3f6  ; -> sub_52E3F6
0x0052E35F  8b442434              mov    eax, dword ptr [esp + 0x34]
0x0052E363  3bc7                  cmp    eax, edi
0x0052E365  0f848b000000          je     0x52e3f6  ; -> sub_52E3F6
0x0052E36B  0fb6590c              movzx  ebx, byte ptr [ecx + 0xc]
0x0052E36F  3bdf                  cmp    ebx, edi
0x0052E371  7674                  jbe    0x52e3e7  ; -> sub_52E3E7
0x0052E373  8b74243c              mov    esi, dword ptr [esp + 0x3c]
0x0052E377  3bf7                  cmp    esi, edi
0x0052E379  7408                  je     0x52e383  ; -> sub_52E383
0x0052E37B  81e6ffffff00          and    esi, 0xffffff  ; -> sub_FFFFFF
0x0052E381  eb0a                  jmp    0x52e38d  ; -> sub_52E38D
0x0052E383  8b400c                mov    eax, dword ptr [eax + 0xc]
0x0052E386  25ffffff00            and    eax, 0xffffff  ; -> sub_FFFFFF
0x0052E38B  8bf0                  mov    esi, eax
0x0052E38D  57                    push   edi
0x0052E38E  68304ea500            push   0xa54e30  ; -> sub_A54E30
0x0052E393  8d4c241c              lea    ecx, [esp + 0x1c]
0x0052E397  897c241c              mov    dword ptr [esp + 0x1c], edi
0x0052E39B  66897c2420            mov    word ptr [esp + 0x20], di
0x0052E3A0  66897c2422            mov    word ptr [esp + 0x22], di
0x0052E3A5  e82645edff            call   0x4028d0  ; -> sub_4028D0
0x0052E3AA  8b4500                mov    eax, dword ptr [ebp]
0x0052E3AD  8b90d4000000          mov    edx, dword ptr [eax + 0xd4]
0x0052E3B3  53                    push   ebx
0x0052E3B4  56                    push   esi
0x0052E3B5  8bcd                  mov    ecx, ebp
0x0052E3B7  897c242c              mov    dword ptr [esp + 0x2c], edi
0x0052E3BB  ffd2                  call   edx
0x0052E3BD  8b4c2434              mov    ecx, dword ptr [esp + 0x34]
0x0052E3C1  50                    push   eax
0x0052E3C2  8b01                  mov    eax, dword ptr [ecx]
0x0052E3C4  8b90d4000000          mov    edx, dword ptr [eax + 0xd4]
0x0052E3CA  ffd2                  call   edx
0x0052E3CC  8b742420              mov    esi, dword ptr [esp + 0x20]
0x0052E3D0  50                    push   eax
0x0052E3D1  8b442448              mov    eax, dword ptr [esp + 0x48]
0x0052E3D5  56                    push   esi
0x0052E3D6  50                    push   eax
0x0052E3D7  e8544aedff            call   0x402e30  ; -> sub_402E30
0x0052E3DC  56                    push   esi
0x0052E3DD  e83e3bedff            call   0x401f20  ; -> sub_401F20
0x0052E3E2  83c41c                add    esp, 0x1c
0x0052E3E5  eb0f                  jmp    0x52e3f6  ; -> sub_52E3F6
0x0052E3E7  8b4c2438              mov    ecx, dword ptr [esp + 0x38]
0x0052E3EB  57                    push   edi
0x0052E3EC  68204ea500            push   0xa54e20  ; -> sub_A54E20
0x0052E3F1  e8da44edff            call   0x4028d0  ; -> sub_4028D0
0x0052E3F6  8b4c241c              mov    ecx, dword ptr [esp + 0x1c]
0x0052E3FA  64890d00000000        mov    dword ptr fs:[0], ecx
0x0052E401  59                    pop    ecx
0x0052E402  5f                    pop    edi
0x0052E403  5e                    pop    esi
0x0052E404  5d                    pop    ebp
0x0052E405  5b                    pop    ebx
0x0052E406  83c414                add    esp, 0x14
0x0052E409  c21400                ret    0x14
0x0052E40C  cc                    int3   
0x0052E40D  cc                    int3   
0x0052E40E  cc                    int3   
0x0052E40F  cc                    int3   
0x0052E410  6aff                  push   -1
0x0052E412  6870899b00            push   0x9b8970  ; -> sub_9B8970
0x0052E417  64a100000000          mov    eax, dword ptr fs:[0]
0x0052E41D  50                    push   eax
0x0052E41E  83ec14                sub    esp, 0x14
0x0052E421  53                    push   ebx
0x0052E422  55                    push   ebp
0x0052E423  56                    push   esi
0x0052E424  57                    push   edi
0x0052E425  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0052E42A  33c4                  xor    eax, esp
0x0052E42C  50                    push   eax
0x0052E42D  8d442428              lea    eax, [esp + 0x28]
0x0052E431  64a300000000          mov    dword ptr fs:[0], eax
0x0052E437  894c2414              mov    dword ptr [esp + 0x14], ecx
0x0052E43B  33db                  xor    ebx, ebx
0x0052E43D  895c2420              mov    dword ptr [esp + 0x20], ebx
0x0052E441  66895c2424            mov    word ptr [esp + 0x24], bx
0x0052E446  66895c2426            mov    word ptr [esp + 0x26], bx
0x0052E44B  895c2430              mov    dword ptr [esp + 0x30], ebx
0x0052E44F  895c2418              mov    dword ptr [esp + 0x18], ebx
0x0052E453  66895c241c            mov    word ptr [esp + 0x1c], bx
0x0052E458  66895c241e            mov    word ptr [esp + 0x1e], bx
0x0052E45D  8b742444              mov    esi, dword ptr [esp + 0x44]
0x0052E461  8b542440              mov    edx, dword ptr [esp + 0x40]
0x0052E465  53                    push   ebx
0x0052E466  8d44241c              lea    eax, [esp + 0x1c]
0x0052E46A  50                    push   eax
0x0052E46B  8b442444              mov    eax, dword ptr [esp + 0x44]
0x0052E46F  56                    push   esi
0x0052E470  52                    push   edx
0x0052E471  50                    push   eax
0x0052E472  c644244401            mov    byte ptr [esp + 0x44], 1
0x0052E477  e8a4feffff            call   0x52e320  ; -> sub_52E320
0x0052E47C  8b4c2438              mov    ecx, dword ptr [esp + 0x38]
0x0052E480  53                    push   ebx
0x0052E481  687030b000            push   0xb03070  ; -> sub_B03070
0x0052E486  685430b000            push   0xb03054  ; -> sub_B03054
0x0052E48B  53                    push   ebx
0x0052E48C  51                    push   ecx
0x0052E48D  e8544e4500            call   0x9832e6  ; -> sub_9832E6
0x0052E492  8bf8                  mov    edi, eax
0x0052E494  83c414                add    esp, 0x14
0x0052E497  3bfb                  cmp    edi, ebx
0x0052E499  7518                  jne    0x52e4b3  ; -> sub_52E4B3
0x0052E49B  8b542418              mov    edx, dword ptr [esp + 0x18]
0x0052E49F  52                    push   edx
0x0052E4A0  e87b3aedff            call   0x401f20  ; -> sub_401F20
0x0052E4A5  53                    push   ebx
0x0052E4A6  e8753aedff            call   0x401f20  ; -> sub_401F20
0x0052E4AB  83c408                add    esp, 8
0x0052E4AE  e986010000            jmp    0x52e639  ; -> sub_52E639
0x0052E4B3  6aff                  push   -1
0x0052E4B5  8bce                  mov    ecx, esi
0x0052E4B7  e8c4d1f3ff            call   0x46b680  ; -> sub_46B680
0x0052E4BC  8be8                  mov    ebp, eax
0x0052E4BE  53                    push   ebx
0x0052E4BF  8bce                  mov    ecx, esi
0x0052E4C1  896c2448              mov    dword ptr [esp + 0x48], ebp
0x0052E4C5  e8b6d1f3ff            call   0x46b680  ; -> sub_46B680
0x0052E4CA  3beb                  cmp    ebp, ebx
0x0052E4CC  89442438              mov    dword ptr [esp + 0x38], eax
0x0052E4D0  7522                  jne    0x52e4f4  ; -> sub_52E4F4
0x0052E4D2  3bc3                  cmp    eax, ebx
0x0052E4D4  89442444              mov    dword ptr [esp + 0x44], eax
0x0052E4D8  7518                  jne    0x52e4f2  ; -> sub_52E4F2
0x0052E4DA  8b442418              mov    eax, dword ptr [esp + 0x18]
0x0052E4DE  50                    push   eax
0x0052E4DF  e83c3aedff            call   0x401f20  ; -> sub_401F20
0x0052E4E4  53                    push   ebx
0x0052E4E5  e8363aedff            call   0x401f20  ; -> sub_401F20
0x0052E4EA  83c408                add    esp, 8
0x0052E4ED  e947010000            jmp    0x52e639  ; -> sub_52E639
0x0052E4F2  8be8                  mov    ebp, eax
0x0052E4F4  8bcf                  mov    ecx, edi
0x0052E4F6  895c243c              mov    dword ptr [esp + 0x3c], ebx
0x0052E4FA  e8f1380b00            call   0x5e1df0  ; -> sub_5E1DF0
0x0052E4FF  8bcf                  mov    ecx, edi
0x0052E501  8bf0                  mov    esi, eax
0x0052E503  e8e84d0b00            call   0x5e32f0  ; -> sub_5E32F0
0x0052E508  3bc3                  cmp    eax, ebx
0x0052E50A  7518                  jne    0x52e524  ; -> sub_52E524
0x0052E50C  8b4c2418              mov    ecx, dword ptr [esp + 0x18]
0x0052E510  51                    push   ecx
0x0052E511  e80a3aedff            call   0x401f20  ; -> sub_401F20
0x0052E516  53                    push   ebx
0x0052E517  e8043aedff            call   0x401f20  ; -> sub_401F20
0x0052E51C  83c408                add    esp, 8
0x0052E51F  e915010000            jmp    0x52e639  ; -> sub_52E639
0x0052E524  56                    push   esi
0x0052E525  8bc8                  mov    ecx, eax
0x0052E527  e844cfffff            call   0x52b470  ; -> sub_52B470
0x0052E52C  3bc3                  cmp    eax, ebx
0x0052E52E  0f8467ffffff          je     0x52e49b  ; -> sub_52E49B
0x0052E534  8b401c                mov    eax, dword ptr [eax + 0x1c]
0x0052E537  3bc3                  cmp    eax, ebx
0x0052E539  89442440              mov    dword ptr [esp + 0x40], eax
0x0052E53D  7508                  jne    0x52e547  ; -> sub_52E547
0x0052E53F  c7442440ecf7a200      mov    dword ptr [esp + 0x40], 0xa2f7ec  ; -> sub_A2F7EC
0x0052E547  395c2440              cmp    dword ptr [esp + 0x40], ebx
0x0052E54B  0f84ca000000          je     0x52e61b  ; -> sub_52E61B
0x0052E551  3beb                  cmp    ebp, ebx
0x0052E553  7422                  je     0x52e577  ; -> sub_52E577
0x0052E555  8d451c                lea    eax, [ebp + 0x1c]
0x0052E558  3bc3                  cmp    eax, ebx
0x0052E55A  8944243c              mov    dword ptr [esp + 0x3c], eax
0x0052E55E  7517                  jne    0x52e577  ; -> sub_52E577
0x0052E560  8b442438              mov    eax, dword ptr [esp + 0x38]
0x0052E564  89442444              mov    dword ptr [esp + 0x44], eax
0x0052E568  83c01c                add    eax, 0x1c
0x0052E56B  3bc3                  cmp    eax, ebx
0x0052E56D  8944243c              mov    dword ptr [esp + 0x3c], eax
0x0052E571  0f84a4000000          je     0x52e61b  ; -> sub_52E61B
0x0052E577  8bcf                  mov    ecx, edi
0x0052E579  e872380b00            call   0x5e1df0  ; -> sub_5E1DF0
0x0052E57E  2bc3                  sub    eax, ebx
0x0052E580  7413                  je     0x52e595  ; -> sub_52E595
0x0052E582  83e801                sub    eax, 1
0x0052E585  7407                  je     0x52e58e  ; -> sub_52E58E
0x0052E587  bfecf7a200            mov    edi, 0xa2f7ec  ; -> sub_A2F7EC
0x0052E58C  eb0c                  jmp    0x52e59a  ; -> sub_52E59A
0x0052E58E  bf584ea500            mov    edi, 0xa54e58  ; -> sub_A54E58
0x0052E593  eb05                  jmp    0x52e59a  ; -> sub_52E59A
0x0052E595  bf544ea500            mov    edi, 0xa54e54  ; -> sub_A54E54
0x0052E59A  8b35600db100          mov    esi, dword ptr [0xb10d60]
0x0052E5A0  8b6c2418              mov    ebp, dword ptr [esp + 0x18]
0x0052E5A4  8b442440              mov    eax, dword ptr [esp + 0x40]
0x0052E5A8  8b4c243c              mov    ecx, dword ptr [esp + 0x3c]
0x0052E5AC  8b542448              mov    edx, dword ptr [esp + 0x48]
0x0052E5B0  56                    push   esi
0x0052E5B1  55                    push   ebp
0x0052E5B2  57                    push   edi
0x0052E5B3  50                    push   eax
0x0052E5B4  51                    push   ecx
0x0052E5B5  8b4c2428              mov    ecx, dword ptr [esp + 0x28]
0x0052E5B9  68404ea500            push   0xa54e40  ; -> sub_A54E40
0x0052E5BE  52                    push   edx
0x0052E5BF  e81cfcffff            call   0x52e1e0  ; -> sub_52E1E0
0x0052E5C4  3ac3                  cmp    al, bl
0x0052E5C6  7422                  je     0x52e5ea  ; -> sub_52E5EA
0x0052E5C8  8d4c2418              lea    ecx, [esp + 0x18]
0x0052E5CC  885c2430              mov    byte ptr [esp + 0x30], bl
0x0052E5D0  e8cb47edff            call   0x402da0  ; -> sub_402DA0
0x0052E5D5  8d4c2420              lea    ecx, [esp + 0x20]
0x0052E5D9  c7442430ffffffff      mov    dword ptr [esp + 0x30], 0xffffffff
0x0052E5E1  e8ba47edff            call   0x402da0  ; -> sub_402DA0
0x0052E5E6  b001                  mov    al, 1
0x0052E5E8  eb51                  jmp    0x52e63b  ; -> sub_52E63B
0x0052E5EA  8b442438              mov    eax, dword ptr [esp + 0x38]
0x0052E5EE  39442444              cmp    dword ptr [esp + 0x44], eax
0x0052E5F2  7427                  je     0x52e61b  ; -> sub_52E61B
0x0052E5F4  83c01c                add    eax, 0x1c
0x0052E5F7  3bc3                  cmp    eax, ebx
0x0052E5F9  7420                  je     0x52e61b  ; -> sub_52E61B
0x0052E5FB  8b4c2440              mov    ecx, dword ptr [esp + 0x40]
0x0052E5FF  8b542448              mov    edx, dword ptr [esp + 0x48]
0x0052E603  56                    push   esi
0x0052E604  55                    push   ebp
0x0052E605  57                    push   edi
0x0052E606  51                    push   ecx
0x0052E607  8b4c2424              mov    ecx, dword ptr [esp + 0x24]
0x0052E60B  50                    push   eax
0x0052E60C  68404ea500            push   0xa54e40  ; -> sub_A54E40
0x0052E611  52                    push   edx
0x0052E612  e8c9fbffff            call   0x52e1e0  ; -> sub_52E1E0
0x0052E617  3ac3                  cmp    al, bl
0x0052E619  75ad                  jne    0x52e5c8  ; -> sub_52E5C8
0x0052E61B  8d4c2418              lea    ecx, [esp + 0x18]
0x0052E61F  885c2430              mov    byte ptr [esp + 0x30], bl
0x0052E623  e87847edff            call   0x402da0  ; -> sub_402DA0
0x0052E628  8d4c2420              lea    ecx, [esp + 0x20]
0x0052E62C  c7442430ffffffff      mov    dword ptr [esp + 0x30], 0xffffffff
0x0052E634  e86747edff            call   0x402da0  ; -> sub_402DA0
0x0052E639  32c0                  xor    al, al
0x0052E63B  8b4c2428              mov    ecx, dword ptr [esp + 0x28]
0x0052E63F  64890d00000000        mov    dword ptr fs:[0], ecx
0x0052E646  59                    pop    ecx
0x0052E647  5f                    pop    edi
0x0052E648  5e                    pop    esi
0x0052E649  5d                    pop    ebp
0x0052E64A  5b                    pop    ebx
0x0052E64B  83c420                add    esp, 0x20
0x0052E64E  c21400                ret    0x14
0x0052E651  cc                    int3   
0x0052E652  cc                    int3   
0x0052E653  cc                    int3   
0x0052E654  cc                    int3   
0x0052E655  cc                    int3   
0x0052E656  cc                    int3   
0x0052E657  cc                    int3   
0x0052E658  cc                    int3   
0x0052E659  cc                    int3   
0x0052E65A  cc                    int3   
0x0052E65B  cc                    int3   
0x0052E65C  cc                    int3   
0x0052E65D  cc                    int3   
0x0052E65E  cc                    int3   
0x0052E65F  cc                    int3   
0x0052E660  6aff                  push   -1
0x0052E662  687f8a9b00            push   0x9b8a7f  ; -> sub_9B8A7F
0x0052E667  64a100000000          mov    eax, dword ptr fs:[0]
0x0052E66D  50                    push   eax
0x0052E66E  83ec08                sub    esp, 8
0x0052E671  56                    push   esi
0x0052E672  57                    push   edi
0x0052E673  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0052E678  33c4                  xor    eax, esp
0x0052E67A  50                    push   eax
0x0052E67B  8d442414              lea    eax, [esp + 0x14]
0x0052E67F  64a300000000          mov    dword ptr fs:[0], eax
0x0052E685  8bf1                  mov    esi, ecx
0x0052E687  89742410              mov    dword ptr [esp + 0x10], esi
0x0052E68B  8d7e20                lea    edi, [esi + 0x20]
0x0052E68E  c706fc4ea500          mov    dword ptr [esi], 0xa54efc  ; -> sub_A54EFC
0x0052E694  c74618e04ea500        mov    dword ptr [esi + 0x18], 0xa54ee0  ; -> sub_A54EE0
0x0052E69B  c707c44ea500          mov    dword ptr [edi], 0xa54ec4  ; -> sub_A54EC4
0x0052E6A1  c744241c01000000      mov    dword ptr [esp + 0x1c], 1
0x0052E6A9  e842dcf3ff            call   0x46c2f0  ; -> sub_46C2F0
0x0052E6AE  8bcf                  mov    ecx, edi
0x0052E6B0  c644241c00            mov    byte ptr [esp + 0x1c], 0
0x0052E6B5  e88619f4ff            call   0x470040  ; -> sub_470040
0x0052E6BA  8bce                  mov    ecx, esi
0x0052E6BC  c744241cffffffff      mov    dword ptr [esp + 0x1c], 0xffffffff
0x0052E6C4  e8b7dbf3ff            call   0x46c280  ; -> sub_46C280
0x0052E6C9  8b4c2414              mov    ecx, dword ptr [esp + 0x14]

