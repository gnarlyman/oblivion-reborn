ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x00435200
; VA: 0x00435200  size: 0x300
; ============================================================
0x00435200  00518b                add    byte ptr [ecx - 0x75], dl
0x00435203  4e                    dec    esi
0x00435204  3cd9                  cmp    al, 0xd9
0x00435206  1c24                  sbb    al, 0x24
0x00435208  e863212d00            call   0x707370  ; -> sub_707370
0x0043520D  8b4e3c                mov    ecx, dword ptr [esi + 0x3c]
0x00435210  5e                    pop    esi
0x00435211  e9fa232d00            jmp    0x707610  ; -> sub_707610
0x00435216  5e                    pop    esi
0x00435217  c3                    ret    
0x00435218  cc                    int3   
0x00435219  cc                    int3   
0x0043521A  cc                    int3   
0x0043521B  cc                    int3   
0x0043521C  cc                    int3   
0x0043521D  cc                    int3   
0x0043521E  cc                    int3   
0x0043521F  cc                    int3   
0x00435220  8b442404              mov    eax, dword ptr [esp + 4]
0x00435224  682068a300            push   0xa36820  ; -> sub_A36820
0x00435229  50                    push   eax
0x0043522A  e811fbffff            call   0x434d40  ; -> sub_434D40
0x0043522F  c20400                ret    4
0x00435232  cc                    int3   
0x00435233  cc                    int3   
0x00435234  cc                    int3   
0x00435235  cc                    int3   
0x00435236  cc                    int3   
0x00435237  cc                    int3   
0x00435238  cc                    int3   
0x00435239  cc                    int3   
0x0043523A  cc                    int3   
0x0043523B  cc                    int3   
0x0043523C  cc                    int3   
0x0043523D  cc                    int3   
0x0043523E  cc                    int3   
0x0043523F  cc                    int3   
0x00435240  8b442404              mov    eax, dword ptr [esp + 4]
0x00435244  682c68a300            push   0xa3682c  ; -> sub_A3682C
0x00435249  50                    push   eax
0x0043524A  e8f1faffff            call   0x434d40  ; -> sub_434D40
0x0043524F  c20400                ret    4
0x00435252  cc                    int3   
0x00435253  cc                    int3   
0x00435254  cc                    int3   
0x00435255  cc                    int3   
0x00435256  cc                    int3   
0x00435257  cc                    int3   
0x00435258  cc                    int3   
0x00435259  cc                    int3   
0x0043525A  cc                    int3   
0x0043525B  cc                    int3   
0x0043525C  cc                    int3   
0x0043525D  cc                    int3   
0x0043525E  cc                    int3   
0x0043525F  cc                    int3   
0x00435260  8b01                  mov    eax, dword ptr [ecx]
0x00435262  8b5028                mov    edx, dword ptr [eax + 0x28]
0x00435265  ffe2                  jmp    edx
0x00435267  cc                    int3   
0x00435268  cc                    int3   
0x00435269  cc                    int3   
0x0043526A  cc                    int3   
0x0043526B  cc                    int3   
0x0043526C  cc                    int3   
0x0043526D  cc                    int3   
0x0043526E  cc                    int3   
0x0043526F  cc                    int3   
0x00435270  8b442404              mov    eax, dword ptr [esp + 4]
0x00435274  683c68a300            push   0xa3683c  ; -> sub_A3683C
0x00435279  50                    push   eax
0x0043527A  e8c1faffff            call   0x434d40  ; -> sub_434D40
0x0043527F  c20400                ret    4
0x00435282  cc                    int3   
0x00435283  cc                    int3   
0x00435284  cc                    int3   
0x00435285  cc                    int3   
0x00435286  cc                    int3   
0x00435287  cc                    int3   
0x00435288  cc                    int3   
0x00435289  cc                    int3   
0x0043528A  cc                    int3   
0x0043528B  cc                    int3   
0x0043528C  cc                    int3   
0x0043528D  cc                    int3   
0x0043528E  cc                    int3   
0x0043528F  cc                    int3   
0x00435290  8b442404              mov    eax, dword ptr [esp + 4]
0x00435294  684868a300            push   0xa36848  ; -> sub_A36848
0x00435299  50                    push   eax
0x0043529A  e8a1faffff            call   0x434d40  ; -> sub_434D40
0x0043529F  c20400                ret    4
0x004352A2  cc                    int3   
0x004352A3  cc                    int3   
0x004352A4  cc                    int3   
0x004352A5  cc                    int3   
0x004352A6  cc                    int3   
0x004352A7  cc                    int3   
0x004352A8  cc                    int3   
0x004352A9  cc                    int3   
0x004352AA  cc                    int3   
0x004352AB  cc                    int3   
0x004352AC  cc                    int3   
0x004352AD  cc                    int3   
0x004352AE  cc                    int3   
0x004352AF  cc                    int3   
0x004352B0  56                    push   esi
0x004352B1  8bf1                  mov    esi, ecx
0x004352B3  8b4628                mov    eax, dword ptr [esi + 0x28]
0x004352B6  85c0                  test   eax, eax
0x004352B8  740f                  je     0x4352c9  ; -> sub_4352C9
0x004352BA  837e0c06              cmp    dword ptr [esi + 0xc], 6
0x004352BE  7409                  je     0x4352c9  ; -> sub_4352C9
0x004352C0  8b4e34                mov    ecx, dword ptr [esi + 0x34]
0x004352C3  50                    push   eax
0x004352C4  e877290400            call   0x477c40  ; -> sub_477C40
0x004352C9  a11c3ab300            mov    eax, dword ptr [0xb33a1c]  ; g_modelLoader (ModelLoader**)
0x004352CE  8b480c                mov    ecx, dword ptr [eax + 0xc]
0x004352D1  8b11                  mov    edx, dword ptr [ecx]
0x004352D3  8b4634                mov    eax, dword ptr [esi + 0x34]
0x004352D6  8b5210                mov    edx, dword ptr [edx + 0x10]
0x004352D9  50                    push   eax
0x004352DA  ffd2                  call   edx
0x004352DC  5e                    pop    esi
0x004352DD  c3                    ret    
0x004352DE  cc                    int3   
0x004352DF  cc                    int3   
0x004352E0  8b442404              mov    eax, dword ptr [esp + 4]
0x004352E4  684c68a300            push   0xa3684c  ; -> sub_A3684C
0x004352E9  50                    push   eax
0x004352EA  e851faffff            call   0x434d40  ; -> sub_434D40
0x004352EF  c20400                ret    4
0x004352F2  cc                    int3   
0x004352F3  cc                    int3   
0x004352F4  cc                    int3   
0x004352F5  cc                    int3   
0x004352F6  cc                    int3   
0x004352F7  cc                    int3   
0x004352F8  cc                    int3   
0x004352F9  cc                    int3   
0x004352FA  cc                    int3   
0x004352FB  cc                    int3   
0x004352FC  cc                    int3   
0x004352FD  cc                    int3   
0x004352FE  cc                    int3   
0x004352FF  cc                    int3   
0x00435300  83ec08                sub    esp, 8
0x00435303  53                    push   ebx
0x00435304  56                    push   esi
0x00435305  57                    push   edi
0x00435306  8bf1                  mov    esi, ecx
0x00435308  685868a300            push   0xa36858  ; -> sub_A36858
0x0043530D  b9809cb300            mov    ecx, 0xb39c80  ; -> sub_B39C80
0x00435312  e809bdfcff            call   0x401020  ; -> sub_401020
0x00435317  8d442410              lea    eax, [esp + 0x10]
0x0043531B  50                    push   eax
0x0043531C  8d4c2410              lea    ecx, [esp + 0x10]
0x00435320  51                    push   ecx
0x00435321  8b4e20                mov    ecx, dword ptr [esi + 0x20]
0x00435324  c744241400000000      mov    dword ptr [esp + 0x14], 0
0x0043532C  c744241800000000      mov    dword ptr [esp + 0x18], 0
0x00435334  e8e7de0e00            call   0x523220  ; -> sub_523220
0x00435339  8b44240c              mov    eax, dword ptr [esp + 0xc]
0x0043533D  8b7e24                mov    edi, dword ptr [esi + 0x24]
0x00435340  3bf8                  cmp    edi, eax
0x00435342  8bd8                  mov    ebx, eax
0x00435344  7431                  je     0x435377  ; -> sub_435377
0x00435346  85ff                  test   edi, edi
0x00435348  741c                  je     0x435366  ; -> sub_435366
0x0043534A  8d5704                lea    edx, [edi + 4]
0x0043534D  52                    push   edx
0x0043534E  ff157c80a200          call   dword ptr [0xa2807c]
0x00435354  85c0                  test   eax, eax
0x00435356  750e                  jne    0x435366  ; -> sub_435366
0x00435358  85ff                  test   edi, edi
0x0043535A  740a                  je     0x435366  ; -> sub_435366
0x0043535C  8b07                  mov    eax, dword ptr [edi]
0x0043535E  8b10                  mov    edx, dword ptr [eax]
0x00435360  6a01                  push   1
0x00435362  8bcf                  mov    ecx, edi
0x00435364  ffd2                  call   edx
0x00435366  85db                  test   ebx, ebx
0x00435368  895e24                mov    dword ptr [esi + 0x24], ebx
0x0043536B  740a                  je     0x435377  ; -> sub_435377
0x0043536D  83c304                add    ebx, 4
0x00435370  53                    push   ebx
0x00435371  ff157880a200          call   dword ptr [0xa28078]
0x00435377  8b442410              mov    eax, dword ptr [esp + 0x10]
0x0043537B  8b7e28                mov    edi, dword ptr [esi + 0x28]
0x0043537E  3bf8                  cmp    edi, eax
0x00435380  8bd8                  mov    ebx, eax
0x00435382  7431                  je     0x4353b5  ; -> sub_4353B5
0x00435384  85ff                  test   edi, edi
0x00435386  741c                  je     0x4353a4  ; -> sub_4353A4
0x00435388  8d4704                lea    eax, [edi + 4]
0x0043538B  50                    push   eax
0x0043538C  ff157c80a200          call   dword ptr [0xa2807c]
0x00435392  85c0                  test   eax, eax
0x00435394  750e                  jne    0x4353a4  ; -> sub_4353A4
0x00435396  85ff                  test   edi, edi
0x00435398  740a                  je     0x4353a4  ; -> sub_4353A4
0x0043539A  8b17                  mov    edx, dword ptr [edi]
0x0043539C  8b02                  mov    eax, dword ptr [edx]
0x0043539E  6a01                  push   1
0x004353A0  8bcf                  mov    ecx, edi
0x004353A2  ffd0                  call   eax
0x004353A4  85db                  test   ebx, ebx
0x004353A6  895e28                mov    dword ptr [esi + 0x28], ebx
0x004353A9  740a                  je     0x4353b5  ; -> sub_4353B5
0x004353AB  83c304                add    ebx, 4
0x004353AE  53                    push   ebx
0x004353AF  ff157880a200          call   dword ptr [0xa28078]
0x004353B5  b9809cb300            mov    ecx, 0xb39c80  ; -> sub_B39C80
0x004353BA  e881bcfcff            call   0x401040  ; -> sub_401040
0x004353BF  5f                    pop    edi
0x004353C0  5e                    pop    esi
0x004353C1  5b                    pop    ebx
0x004353C2  83c408                add    esp, 8
0x004353C5  c3                    ret    
0x004353C6  cc                    int3   
0x004353C7  cc                    int3   
0x004353C8  cc                    int3   
0x004353C9  cc                    int3   
0x004353CA  cc                    int3   
0x004353CB  cc                    int3   
0x004353CC  cc                    int3   
0x004353CD  cc                    int3   
0x004353CE  cc                    int3   
0x004353CF  cc                    int3   
0x004353D0  53                    push   ebx
0x004353D1  8b5c2408              mov    ebx, dword ptr [esp + 8]
0x004353D5  8b03                  mov    eax, dword ptr [ebx]
0x004353D7  8b9070010000          mov    edx, dword ptr [eax + 0x170]
0x004353DD  56                    push   esi
0x004353DE  57                    push   edi
0x004353DF  8bf9                  mov    edi, ecx
0x004353E1  8bcb                  mov    ecx, ebx
0x004353E3  ffd2                  call   edx
0x004353E5  8b4f24                mov    ecx, dword ptr [edi + 0x24]
0x004353E8  8b542414              mov    edx, dword ptr [esp + 0x14]
0x004353EC  8bf0                  mov    esi, eax
0x004353EE  8b4728                mov    eax, dword ptr [edi + 0x28]
0x004353F1  50                    push   eax
0x004353F2  51                    push   ecx
0x004353F3  52                    push   edx
0x004353F4  53                    push   ebx
0x004353F5  8bce                  mov    ecx, esi
0x004353F7  e814360f00            call   0x528a10  ; -> sub_528A10
0x004353FC  8b06                  mov    eax, dword ptr [esi]
0x004353FE  8b9028010000          mov    edx, dword ptr [eax + 0x128]
0x00435404  6a45                  push   0x45
0x00435406  8bce                  mov    ecx, esi
0x00435408  ffd2                  call   edx
0x0043540A  85c0                  test   eax, eax
0x0043540C  7434                  je     0x435442  ; -> sub_435442
0x0043540E  8b06                  mov    eax, dword ptr [esi]
0x00435410  8b9028010000          mov    edx, dword ptr [eax + 0x128]
0x00435416  6a45                  push   0x45
0x00435418  8bce                  mov    ecx, esi
0x0043541A  ffd2                  call   edx
0x0043541C  89442410              mov    dword ptr [esp + 0x10], eax
0x00435420  db442410              fild   dword ptr [esp + 0x10]
0x00435424  51                    push   ecx
0x00435425  8bce                  mov    ecx, esi
0x00435427  d91c24                fstp   dword ptr [esp]
0x0043542A  e801410f00            call   0x529530  ; -> sub_529530
0x0043542F  8b4b58                mov    ecx, dword ptr [ebx + 0x58]
0x00435432  85c9                  test   ecx, ecx
0x00435434  740c                  je     0x435442  ; -> sub_435442
0x00435436  8b01                  mov    eax, dword ptr [ecx]
0x00435438  8b901c030000          mov    edx, dword ptr [eax + 0x31c]
0x0043543E  6a01                  push   1
0x00435440  ffd2                  call   edx
0x00435442  3b1dc433b300          cmp    ebx, dword ptr [0xb333c4]
0x00435448  7424                  je     0x43546e  ; -> sub_43546E
0x0043544A  8b430c                mov    eax, dword ptr [ebx + 0xc]
0x0043544D  8b4f24                mov    ecx, dword ptr [edi + 0x24]
0x00435450  50                    push   eax
0x00435451  51                    push   ecx
0x00435452  e8b9bf0400            call   0x481410  ; -> sub_481410
0x00435457  8b4728                mov    eax, dword ptr [edi + 0x28]
0x0043545A  83c408                add    esp, 8
0x0043545D  85c0                  test   eax, eax
0x0043545F  740d                  je     0x43546e  ; -> sub_43546E
0x00435461  8b530c                mov    edx, dword ptr [ebx + 0xc]
0x00435464  52                    push   edx
0x00435465  50                    push   eax
0x00435466  e8a5bf0400            call   0x481410  ; -> sub_481410
0x0043546B  83c408                add    esp, 8
0x0043546E  8b4f28                mov    ecx, dword ptr [edi + 0x28]
0x00435471  85c9                  test   ecx, ecx
0x00435473  7407                  je     0x43547c  ; -> sub_43547C
0x00435475  8b01                  mov    eax, dword ptr [ecx]
0x00435477  8b5050                mov    edx, dword ptr [eax + 0x50]
0x0043547A  ffd2                  call   edx
0x0043547C  8b4728                mov    eax, dword ptr [edi + 0x28]
0x0043547F  85c0                  test   eax, eax
0x00435481  7406                  je     0x435489  ; -> sub_435489
0x00435483  899814010000          mov    dword ptr [eax + 0x114], ebx
0x00435489  8b7f24                mov    edi, dword ptr [edi + 0x24]
0x0043548C  85ff                  test   edi, edi
0x0043548E  7406                  je     0x435496  ; -> sub_435496
0x00435490  899f14010000          mov    dword ptr [edi + 0x114], ebx
0x00435496  5f                    pop    edi
0x00435497  5e                    pop    esi
0x00435498  5b                    pop    ebx
0x00435499  c20800                ret    8
0x0043549C  cc                    int3   
0x0043549D  cc                    int3   
0x0043549E  cc                    int3   
0x0043549F  cc                    int3   
0x004354A0  56                    push   esi
0x004354A1  8bf1                  mov    esi, ecx
0x004354A3  8b4e20                mov    ecx, dword ptr [esi + 0x20]
0x004354A6  85c9                  test   ecx, ecx
0x004354A8  742c                  je     0x4354d6  ; -> sub_4354D6
0x004354AA  e8211b0a00            call   0x4d6fd0  ; -> sub_4D6FD0
0x004354AF  84c0                  test   al, al
0x004354B1  7423                  je     0x4354d6  ; -> sub_4354D6
0x004354B3  8b4e20                mov    ecx, dword ptr [esi + 0x20]
0x004354B6  8b01                  mov    eax, dword ptr [ecx]
0x004354B8  8b9054010000          mov    edx, dword ptr [eax + 0x154]
0x004354BE  ffd2                  call   edx
0x004354C0  85c0                  test   eax, eax
0x004354C2  7512                  jne    0x4354d6  ; -> sub_4354D6
0x004354C4  e8f7651400            call   0x57bac0  ; -> sub_57BAC0
0x004354C9  84c0                  test   al, al
0x004354CB  7509                  jne    0x4354d6  ; -> sub_4354D6
0x004354CD  8b06                  mov    eax, dword ptr [esi]
0x004354CF  8b5030                mov    edx, dword ptr [eax + 0x30]
0x004354D2  8bce                  mov    ecx, esi
0x004354D4  ffd2                  call   edx
0x004354D6  8b06                  mov    eax, dword ptr [esi]
0x004354D8  8b502c                mov    edx, dword ptr [eax + 0x2c]
0x004354DB  8bce                  mov    ecx, esi
0x004354DD  ffd2                  call   edx
0x004354DF  8b06                  mov    eax, dword ptr [esi]
0x004354E1  8b5028                mov    edx, dword ptr [eax + 0x28]
0x004354E4  c7460c05000000        mov    dword ptr [esi + 0xc], 5
0x004354EB  8bce                  mov    ecx, esi
0x004354ED  5e                    pop    esi
0x004354EE  ffe2                  jmp    edx
0x004354F0  6aff                  push   -1
0x004354F2  6818c69a00            push   0x9ac618  ; -> sub_9AC618
0x004354F7  64a100000000          mov    eax, dword ptr fs:[0]
0x004354FD  50                    push   eax
0x004354FE  51                    push   ecx
0x004354FF  53                    push   ebx

