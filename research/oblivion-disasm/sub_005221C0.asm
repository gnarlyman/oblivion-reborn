ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x005221C0
; VA: 0x005221C0  size: 0x800
; ============================================================
0x005221C0  56                    push   esi
0x005221C1  57                    push   edi
0x005221C2  8b7c240c              mov    edi, dword ptr [esp + 0xc]
0x005221C6  57                    push   edi
0x005221C7  8bf1                  mov    esi, ecx
0x005221C9  e8b2060300            call   0x552880  ; -> sub_552880
0x005221CE  83c404                add    esp, 4
0x005221D1  83bee800000000        cmp    dword ptr [esi + 0xe8], 0
0x005221D8  7514                  jne    0x5221ee  ; -> sub_5221EE
0x005221DA  57                    push   edi
0x005221DB  e8f0160300            call   0x5538d0  ; -> sub_5538D0
0x005221E0  50                    push   eax
0x005221E1  e80a070300            call   0x5528f0  ; -> sub_5528F0
0x005221E6  83c408                add    esp, 8
0x005221E9  5f                    pop    edi
0x005221EA  5e                    pop    esi
0x005221EB  c20400                ret    4
0x005221EE  8b06                  mov    eax, dword ptr [esi]
0x005221F0  8b9028010000          mov    edx, dword ptr [eax + 0x128]
0x005221F6  6a45                  push   0x45
0x005221F8  8bce                  mov    ecx, esi
0x005221FA  ffd2                  call   edx
0x005221FC  85c0                  test   eax, eax
0x005221FE  8d8668010000          lea    eax, [esi + 0x168]
0x00522204  7506                  jne    0x52220c  ; -> sub_52220C
0x00522206  8d8608010000          lea    eax, [esi + 0x108]
0x0052220C  d9ee                  fldz   
0x0052220E  51                    push   ecx
0x0052220F  d91c24                fstp   dword ptr [esp]
0x00522212  6a00                  push   0
0x00522214  57                    push   edi
0x00522215  50                    push   eax
0x00522216  8b86e8000000          mov    eax, dword ptr [esi + 0xe8]
0x0052221C  059c020000            add    eax, 0x29c
0x00522221  50                    push   eax
0x00522222  e869070300            call   0x552990  ; -> sub_552990
0x00522227  83c414                add    esp, 0x14
0x0052222A  5f                    pop    edi
0x0052222B  5e                    pop    esi
0x0052222C  c20400                ret    4
0x0052222F  cc                    int3   
0x00522230  51                    push   ecx
0x00522231  e8ea7affff            call   0x519d20  ; -> sub_519D20
0x00522236  85c0                  test   eax, eax
0x00522238  750e                  jne    0x522248  ; -> sub_522248
0x0052223A  d9055439a500          fld    dword ptr [0xa53954]
0x00522240  d91c24                fstp   dword ptr [esp]
0x00522243  d90424                fld    dword ptr [esp]
0x00522246  59                    pop    ecx
0x00522247  c3                    ret    
0x00522248  d905b479a300          fld    dword ptr [0xa379b4]
0x0052224E  d91c24                fstp   dword ptr [esp]
0x00522251  d90424                fld    dword ptr [esp]
0x00522254  59                    pop    ecx
0x00522255  c3                    ret    
0x00522256  cc                    int3   
0x00522257  cc                    int3   
0x00522258  cc                    int3   
0x00522259  cc                    int3   
0x0052225A  cc                    int3   
0x0052225B  cc                    int3   
0x0052225C  cc                    int3   
0x0052225D  cc                    int3   
0x0052225E  cc                    int3   
0x0052225F  cc                    int3   
0x00522260  53                    push   ebx
0x00522261  8b1d7c80a200          mov    ebx, dword ptr [0xa2807c]
0x00522267  56                    push   esi
0x00522268  57                    push   edi
0x00522269  8bf9                  mov    edi, ecx
0x0052226B  8bb7d4010000          mov    esi, dword ptr [edi + 0x1d4]
0x00522271  85f6                  test   esi, esi
0x00522273  7422                  je     0x522297  ; -> sub_522297
0x00522275  8d4604                lea    eax, [esi + 4]
0x00522278  50                    push   eax
0x00522279  ffd3                  call   ebx
0x0052227B  85c0                  test   eax, eax
0x0052227D  750e                  jne    0x52228d  ; -> sub_52228D
0x0052227F  85f6                  test   esi, esi
0x00522281  740a                  je     0x52228d  ; -> sub_52228D
0x00522283  8b16                  mov    edx, dword ptr [esi]
0x00522285  8b02                  mov    eax, dword ptr [edx]
0x00522287  6a01                  push   1
0x00522289  8bce                  mov    ecx, esi
0x0052228B  ffd0                  call   eax
0x0052228D  c787d401000000000000  mov    dword ptr [edi + 0x1d4], 0
0x00522297  8bb7d8010000          mov    esi, dword ptr [edi + 0x1d8]
0x0052229D  85f6                  test   esi, esi
0x0052229F  7422                  je     0x5222c3  ; -> sub_5222C3
0x005222A1  8d4e04                lea    ecx, [esi + 4]
0x005222A4  51                    push   ecx
0x005222A5  ffd3                  call   ebx
0x005222A7  85c0                  test   eax, eax
0x005222A9  750e                  jne    0x5222b9  ; -> sub_5222B9
0x005222AB  85f6                  test   esi, esi
0x005222AD  740a                  je     0x5222b9  ; -> sub_5222B9
0x005222AF  8b16                  mov    edx, dword ptr [esi]
0x005222B1  8b02                  mov    eax, dword ptr [edx]
0x005222B3  6a01                  push   1
0x005222B5  8bce                  mov    ecx, esi
0x005222B7  ffd0                  call   eax
0x005222B9  c787d801000000000000  mov    dword ptr [edi + 0x1d8], 0
0x005222C3  5f                    pop    edi
0x005222C4  5e                    pop    esi
0x005222C5  5b                    pop    ebx
0x005222C6  c3                    ret    
0x005222C7  cc                    int3   
0x005222C8  cc                    int3   
0x005222C9  cc                    int3   
0x005222CA  cc                    int3   
0x005222CB  cc                    int3   
0x005222CC  cc                    int3   
0x005222CD  cc                    int3   
0x005222CE  cc                    int3   
0x005222CF  cc                    int3   
0x005222D0  83ec1c                sub    esp, 0x1c
0x005222D3  57                    push   edi
0x005222D4  8bf9                  mov    edi, ecx
0x005222D6  8d4f24                lea    ecx, [edi + 0x24]
0x005222D9  e81255f4ff            call   0x4677f0  ; -> sub_4677F0
0x005222DE  0fbfc0                movsx  eax, ax
0x005222E1  83e801                sub    eax, 1
0x005222E4  83bfe800000000        cmp    dword ptr [edi + 0xe8], 0
0x005222EB  8944240c              mov    dword ptr [esp + 0xc], eax
0x005222EF  0f8464040000          je     0x522759  ; -> sub_522759
0x005222F5  8b8704010000          mov    eax, dword ptr [edi + 0x104]
0x005222FB  85c0                  test   eax, eax
0x005222FD  0f8456040000          je     0x522759  ; -> sub_522759
0x00522303  837f0c07              cmp    dword ptr [edi + 0xc], 7
0x00522307  c644240700            mov    byte ptr [esp + 7], 0
0x0052230C  7505                  jne    0x522313  ; -> sub_522313
0x0052230E  c644240701            mov    byte ptr [esp + 7], 1
0x00522313  807c240700            cmp    byte ptr [esp + 7], 0
0x00522318  c644240601            mov    byte ptr [esp + 6], 1
0x0052231D  7410                  je     0x52232f  ; -> sub_52232F
0x0052231F  8b0d007db300          mov    ecx, dword ptr [0xb37d00]
0x00522325  3b480c                cmp    ecx, dword ptr [eax + 0xc]
0x00522328  7505                  jne    0x52232f  ; -> sub_52232F
0x0052232A  c644240600            mov    byte ptr [esp + 6], 0
0x0052232F  56                    push   esi
0x00522330  33f6                  xor    esi, esi
0x00522332  53                    push   ebx
0x00522333  89742424              mov    dword ptr [esp + 0x24], esi
0x00522337  55                    push   ebp
0x00522338  56                    push   esi
0x00522339  6a00                  push   0
0x0052233B  e8a0380400            call   0x565be0  ; -> sub_565BE0
0x00522340  8bd8                  mov    ebx, eax
0x00522342  83c408                add    esp, 8
0x00522345  83fb06                cmp    ebx, 6
0x00522348  750b                  jne    0x522355  ; -> sub_522355
0x0052234A  807c241300            cmp    byte ptr [esp + 0x13], 0
0x0052234F  0f844d010000          je     0x5224a2  ; -> sub_5224A2
0x00522355  f6472801              test   byte ptr [edi + 0x28], 1
0x00522359  8b87e8000000          mov    eax, dword ptr [edi + 0xe8]
0x0052235F  53                    push   ebx
0x00522360  7418                  je     0x52237a  ; -> sub_52237A
0x00522362  8d8880000000          lea    ecx, [eax + 0x80]
0x00522368  e86367f4ff            call   0x468ad0  ; -> sub_468AD0
0x0052236D  0fb6d0                movzx  edx, al
0x00522370  89542420              mov    dword ptr [esp + 0x20], edx
0x00522374  db442420              fild   dword ptr [esp + 0x20]
0x00522378  eb13                  jmp    0x52238d  ; -> sub_52238D
0x0052237A  8d4874                lea    ecx, [eax + 0x74]
0x0052237D  e84e67f4ff            call   0x468ad0  ; -> sub_468AD0
0x00522382  0fb6c0                movzx  eax, al
0x00522385  89442420              mov    dword ptr [esp + 0x20], eax
0x00522389  db442420              fild   dword ptr [esp + 0x20]
0x0052238D  807c241200            cmp    byte ptr [esp + 0x12], 0
0x00522392  d95c2414              fstp   dword ptr [esp + 0x14]
0x00522396  0f84d2000000          je     0x52246e  ; -> sub_52246E
0x0052239C  8b8f04010000          mov    ecx, dword ptr [edi + 0x104]
0x005223A2  e8c9eb2500            call   0x780f70  ; -> sub_780F70
0x005223A7  3bd8                  cmp    ebx, eax
0x005223A9  7508                  jne    0x5223b3  ; -> sub_5223B3
0x005223AB  d905e462b300          fld    dword ptr [0xb362e4]
0x005223B1  eb15                  jmp    0x5223c8  ; -> sub_5223C8
0x005223B3  8b8f04010000          mov    ecx, dword ptr [edi + 0x104]
0x005223B9  e8220af0ff            call   0x422de0  ; -> sub_422DE0
0x005223BE  3bd8                  cmp    ebx, eax
0x005223C0  750e                  jne    0x5223d0  ; -> sub_5223D0
0x005223C2  d905ec62b300          fld    dword ptr [0xb362ec]
0x005223C8  d8442414              fadd   dword ptr [esp + 0x14]
0x005223CC  d95c2414              fstp   dword ptr [esp + 0x14]
0x005223D0  c644241c00            mov    byte ptr [esp + 0x1c], 0
0x005223D5  8b74241c              mov    esi, dword ptr [esp + 0x1c]
0x005223D9  8b0d983ab300          mov    ecx, dword ptr [0xb33a98]  ; g_modelLoader (ModelLoader**)+0x7c
0x005223DF  56                    push   esi
0x005223E0  e80b47f2ff            call   0x446af0  ; -> sub_446AF0
0x005223E5  395830                cmp    dword ptr [eax + 0x30], ebx
0x005223E8  756e                  jne    0x522458  ; -> sub_522458
0x005223EA  56                    push   esi
0x005223EB  6a02                  push   2
0x005223ED  e8ee370400            call   0x565be0  ; -> sub_565BE0
0x005223F2  83c408                add    esp, 8
0x005223F5  8be8                  mov    ebp, eax
0x005223F7  c7442420ffffffff      mov    dword ptr [esp + 0x20], 0xffffffff
0x005223FF  33f6                  xor    esi, esi
0x00522401  8b8f04010000          mov    ecx, dword ptr [edi + 0x104]
0x00522407  56                    push   esi
0x00522408  e8f39affff            call   0x51bf00  ; -> sub_51BF00
0x0052240D  3bc5                  cmp    eax, ebp
0x0052240F  7524                  jne    0x522435  ; -> sub_522435
0x00522411  50                    push   eax
0x00522412  6a02                  push   2
0x00522414  e837380400            call   0x565c50  ; -> sub_565C50
0x00522419  8b0d983ab300          mov    ecx, dword ptr [0xb33a98]  ; g_modelLoader (ModelLoader**)+0x7c
0x0052241F  83c408                add    esp, 8
0x00522422  50                    push   eax
0x00522423  e8c846f2ff            call   0x446af0  ; -> sub_446AF0
0x00522428  395830                cmp    dword ptr [eax + 0x30], ebx
0x0052242B  7508                  jne    0x522435  ; -> sub_522435
0x0052242D  c744242001000000      mov    dword ptr [esp + 0x20], 1
0x00522435  83c601                add    esi, 1
0x00522438  83fe07                cmp    esi, 7
0x0052243B  7cc4                  jl     0x522401  ; -> sub_522401
0x0052243D  8b442420              mov    eax, dword ptr [esp + 0x20]
0x00522441  db442418              fild   dword ptr [esp + 0x18]
0x00522445  83e801                sub    eax, 1
0x00522448  7406                  je     0x522450  ; -> sub_522450
0x0052244A  dc0d3885a300          fmul   qword ptr [0xa38538]
0x00522450  d8442414              fadd   dword ptr [esp + 0x14]
0x00522454  d95c2414              fstp   dword ptr [esp + 0x14]
0x00522458  8a44241c              mov    al, byte ptr [esp + 0x1c]
0x0052245C  0401                  add    al, 1
0x0052245E  3c15                  cmp    al, 0x15
0x00522460  8844241c              mov    byte ptr [esp + 0x1c], al
0x00522464  0f8c6bffffff          jl     0x5223d5  ; -> sub_5223D5
0x0052246A  8b742428              mov    esi, dword ptr [esp + 0x28]
0x0052246E  d9442414              fld    dword ptr [esp + 0x14]
0x00522472  dc1df009a300          fcomp  qword ptr [0xa309f0]
0x00522478  dfe0                  fnstsw ax
0x0052247A  f6c441                test   ah, 0x41
0x0052247D  750a                  jne    0x522489  ; -> sub_522489
0x0052247F  d9057cfea200          fld    dword ptr [0xa2fe7c]
0x00522485  d95c2414              fstp   dword ptr [esp + 0x14]
0x00522489  d9442414              fld    dword ptr [esp + 0x14]
0x0052248D  db5c2424              fistp  dword ptr [esp + 0x24]
0x00522491  8b4c2424              mov    ecx, dword ptr [esp + 0x24]
0x00522495  51                    push   ecx
0x00522496  53                    push   ebx
0x00522497  8d8f88000000          lea    ecx, [edi + 0x88]
0x0052249D  e84e66f4ff            call   0x468af0  ; -> sub_468AF0
0x005224A2  83c601                add    esi, 1
0x005224A5  83fe08                cmp    esi, 8
0x005224A8  89742428              mov    dword ptr [esp + 0x28], esi
0x005224AC  0f8c86feffff          jl     0x522338  ; -> sub_522338
0x005224B2  db442418              fild   dword ptr [esp + 0x18]
0x005224B6  33db                  xor    ebx, ebx
0x005224B8  d95c241c              fstp   dword ptr [esp + 0x1c]
0x005224BC  8d642400              lea    esp, [esp]
0x005224C0  53                    push   ebx
0x005224C1  6a02                  push   2
0x005224C3  e818370400            call   0x565be0  ; -> sub_565BE0
0x005224C8  83c408                add    esp, 8
0x005224CB  83cdff                or     ebp, 0xffffffff
0x005224CE  807c241200            cmp    byte ptr [esp + 0x12], 0
0x005224D3  89442428              mov    dword ptr [esp + 0x28], eax
0x005224D7  7426                  je     0x5224ff  ; -> sub_5224FF
0x005224D9  33f6                  xor    esi, esi
0x005224DB  eb03                  jmp    0x5224e0  ; -> sub_5224E0
0x005224DD  8d4900                lea    ecx, [ecx]
0x005224E0  8b8f04010000          mov    ecx, dword ptr [edi + 0x104]
0x005224E6  56                    push   esi
0x005224E7  e8149affff            call   0x51bf00  ; -> sub_51BF00
0x005224EC  3b442428              cmp    eax, dword ptr [esp + 0x28]
0x005224F0  7505                  jne    0x5224f7  ; -> sub_5224F7
0x005224F2  bd01000000            mov    ebp, 1
0x005224F7  83c601                add    esi, 1
0x005224FA  83fe07                cmp    esi, 7
0x005224FD  7ce1                  jl     0x5224e0  ; -> sub_5224E0
0x005224FF  d944241c              fld    dword ptr [esp + 0x1c]
0x00522503  8bc5                  mov    eax, ebp
0x00522505  83e801                sub    eax, 1
0x00522508  740e                  je     0x522518  ; -> sub_522518
0x0052250A  dc0d80fca200          fmul   qword ptr [0xa2fc80]
0x00522510  dc05f0f3a300          fadd   qword ptr [0xa3f3f0]
0x00522516  eb06                  jmp    0x52251e  ; -> sub_52251E
0x00522518  dc05b092a400          fadd   qword ptr [0xa492b0]
0x0052251E  807c241200            cmp    byte ptr [esp + 0x12], 0
0x00522523  d95c2414              fstp   dword ptr [esp + 0x14]
0x00522527  7442                  je     0x52256b  ; -> sub_52256B
0x00522529  8b0d983ab300          mov    ecx, dword ptr [0xb33a98]  ; g_modelLoader (ModelLoader**)+0x7c
0x0052252F  8bb704010000          mov    esi, dword ptr [edi + 0x104]
0x00522535  53                    push   ebx
0x00522536  e8b545f2ff            call   0x446af0  ; -> sub_446AF0
0x0052253B  8b6834                mov    ebp, dword ptr [eax + 0x34]
0x0052253E  8bce                  mov    ecx, esi
0x00522540  e83ba71c00            call   0x6ecc80  ; -> sub_6ECC80
0x00522545  3bc5                  cmp    eax, ebp
0x00522547  7522                  jne    0x52256b  ; -> sub_52256B
0x00522549  d9442414              fld    dword ptr [esp + 0x14]
0x0052254D  dc05f0f3a300          fadd   qword ptr [0xa3f3f0]
0x00522553  d95c2420              fstp   dword ptr [esp + 0x20]
0x00522557  d9442420              fld    dword ptr [esp + 0x20]
0x0052255B  d944241c              fld    dword ptr [esp + 0x1c]
0x0052255F  dc0da0faa200          fmul   qword ptr [0xa2faa0]
0x00522565  dec1                  faddp  st(1)
0x00522567  d95c2414              fstp   dword ptr [esp + 0x14]
0x0052256B  8b87e8000000          mov    eax, dword ptr [edi + 0xe8]
0x00522571  8b542428              mov    edx, dword ptr [esp + 0x28]
0x00522575  83c050                add    eax, 0x50
0x00522578  b907000000            mov    ecx, 7
0x0052257D  8d4900                lea    ecx, [ecx]
0x00522580  0fbe30                movsx  esi, byte ptr [eax]
0x00522583  3bf2                  cmp    esi, edx
0x00522585  7514                  jne    0x52259b  ; -> sub_52259B
0x00522587  0fbe7001              movsx  esi, byte ptr [eax + 1]
0x0052258B  89742428              mov    dword ptr [esp + 0x28], esi
0x0052258F  db442428              fild   dword ptr [esp + 0x28]
0x00522593  d8442414              fadd   dword ptr [esp + 0x14]
0x00522597  d95c2414              fstp   dword ptr [esp + 0x14]
0x0052259B  83c002                add    eax, 2
0x0052259E  83e901                sub    ecx, 1
0x005225A1  75dd                  jne    0x522580  ; -> sub_522580
0x005225A3  d9442414              fld    dword ptr [esp + 0x14]
0x005225A7  dc1df009a300          fcomp  qword ptr [0xa309f0]
0x005225AD  dfe0                  fnstsw ax
0x005225AF  f6c441                test   ah, 0x41
0x005225B2  750a                  jne    0x5225be  ; -> sub_5225BE
0x005225B4  d9057cfea200          fld    dword ptr [0xa2fe7c]
0x005225BA  d95c2414              fstp   dword ptr [esp + 0x14]
0x005225BE  d9442414              fld    dword ptr [esp + 0x14]
0x005225C2  db5c2424              fistp  dword ptr [esp + 0x24]
0x005225C6  8a542424              mov    dl, byte ptr [esp + 0x24]
0x005225CA  88941fec000000        mov    byte ptr [edi + ebx + 0xec], dl
0x005225D1  83c301                add    ebx, 1
0x005225D4  83fb15                cmp    ebx, 0x15
0x005225D7  0f8ce3feffff          jl     0x5224c0  ; -> sub_5224C0
0x005225DD  6800020000            push   0x200
0x005225E2  8bcf                  mov    ecx, edi
0x005225E4  e80786f4ff            call   0x46abf0  ; -> sub_46ABF0
0x005225E9  8b8f04010000          mov    ecx, dword ptr [edi + 0x104]
0x005225EF  c644242800            mov    byte ptr [esp + 0x28], 0
0x005225F4  e877e92500            call   0x780f70  ; -> sub_780F70
0x005225F9  83f805                cmp    eax, 5
0x005225FC  7410                  je     0x52260e  ; -> sub_52260E
0x005225FE  8b8f04010000          mov    ecx, dword ptr [edi + 0x104]
0x00522604  e8d707f0ff            call   0x422de0  ; -> sub_422DE0
0x00522609  83f805                cmp    eax, 5
0x0052260C  7505                  jne    0x522613  ; -> sub_522613
0x0052260E  c644242801            mov    byte ptr [esp + 0x28], 1
0x00522613  807c241300            cmp    byte ptr [esp + 0x13], 0
0x00522618  8db788000000          lea    esi, [edi + 0x88]
0x0052261E  6a05                  push   5
0x00522620  8bce                  mov    ecx, esi
0x00522622  7422                  je     0x522646  ; -> sub_522646
0x00522624  e8a764f4ff            call   0x468ad0  ; -> sub_468AD0
0x00522629  6a00                  push   0
0x0052262B  8bce                  mov    ecx, esi
0x0052262D  8ad8                  mov    bl, al
0x0052262F  e89c64f4ff            call   0x468ad0  ; -> sub_468AD0
0x00522634  0fb6cb                movzx  ecx, bl
0x00522637  0fb6d0                movzx  edx, al
0x0052263A  51                    push   ecx
0x0052263B  52                    push   edx
0x0052263C  e8df590200            call   0x548020  ; -> sub_548020
0x00522641  83c408                add    esp, 8
0x00522644  eb3e                  jmp    0x522684  ; -> sub_522684
0x00522646  8baf04010000          mov    ebp, dword ptr [edi + 0x104]
0x0052264C  e87f64f4ff            call   0x468ad0  ; -> sub_468AD0
0x00522651  6a00                  push   0
0x00522653  8bce                  mov    ecx, esi
0x00522655  8ad8                  mov    bl, al
0x00522657  e87464f4ff            call   0x468ad0  ; -> sub_468AD0
0x0052265C  8bcd                  mov    ecx, ebp
0x0052265E  88442413              mov    byte ptr [esp + 0x13], al
0x00522662  e819a61c00            call   0x6ecc80  ; -> sub_6ECC80
0x00522667  8b4c2418              mov    ecx, dword ptr [esp + 0x18]
0x0052266B  50                    push   eax
0x0052266C  8b44242c              mov    eax, dword ptr [esp + 0x2c]
0x00522670  50                    push   eax
0x00522671  0fb644241b            movzx  eax, byte ptr [esp + 0x1b]
0x00522676  0fb6d3                movzx  edx, bl
0x00522679  51                    push   ecx
0x0052267A  52                    push   edx
0x0052267B  50                    push   eax
0x0052267C  e8ff580200            call   0x547f80  ; -> sub_547F80
0x00522681  83c414                add    esp, 0x14
0x00522684  807c243000            cmp    byte ptr [esp + 0x30], 0
0x00522689  757b                  jne    0x522706  ; -> sub_522706
0x0052268B  50                    push   eax
0x0052268C  8bcf                  mov    ecx, edi
0x0052268E  e8bd75ffff            call   0x519c50  ; -> sub_519C50
0x00522693  6a01                  push   1
0x00522695  8bce                  mov    ecx, esi
0x00522697  e83464f4ff            call   0x468ad0  ; -> sub_468AD0
0x0052269C  0fb6c8                movzx  ecx, al
0x0052269F  6a00                  push   0
0x005226A1  51                    push   ecx
0x005226A2  e8095c0200            call   0x5482b0  ; -> sub_5482B0
0x005226A7  83c408                add    esp, 8
0x005226AA  50                    push   eax
0x005226AB  8d4f24                lea    ecx, [edi + 0x24]
0x005226AE  e8dd4bf4ff            call   0x467290  ; -> sub_467290
0x005226B3  6a02                  push   2
0x005226B5  8bce                  mov    ecx, esi
0x005226B7  e81464f4ff            call   0x468ad0  ; -> sub_468AD0
0x005226BC  6a03                  push   3
0x005226BE  8bce                  mov    ecx, esi
0x005226C0  8ad8                  mov    bl, al
0x005226C2  e80964f4ff            call   0x468ad0  ; -> sub_468AD0
0x005226C7  6a05                  push   5
0x005226C9  8bce                  mov    ecx, esi
0x005226CB  88442434              mov    byte ptr [esp + 0x34], al
0x005226CF  e8fc63f4ff            call   0x468ad0  ; -> sub_468AD0
0x005226D4  6a00                  push   0
0x005226D6  8bce                  mov    ecx, esi
0x005226D8  88442417              mov    byte ptr [esp + 0x17], al
0x005226DC  e8ef63f4ff            call   0x468ad0  ; -> sub_468AD0
0x005226E1  0fb64c2430            movzx  ecx, byte ptr [esp + 0x30]
0x005226E6  0fb6d3                movzx  edx, bl
0x005226E9  52                    push   edx
0x005226EA  0fb6542417            movzx  edx, byte ptr [esp + 0x17]
0x005226EF  51                    push   ecx
0x005226F0  0fb6c0                movzx  eax, al
0x005226F3  52                    push   edx
0x005226F4  50                    push   eax
0x005226F5  e8d6520200            call   0x5479d0  ; -> sub_5479D0
0x005226FA  83c410                add    esp, 0x10
0x005226FD  50                    push   eax
0x005226FE  8d4f24                lea    ecx, [edi + 0x24]
0x00522701  e8aa4bf4ff            call   0x4672b0  ; -> sub_4672B0
0x00522706  8b8704010000          mov    eax, dword ptr [edi + 0x104]
0x0052270C  85c0                  test   eax, eax
0x0052270E  5d                    pop    ebp
0x0052270F  5b                    pop    ebx
0x00522710  743c                  je     0x52274e  ; -> sub_52274E
0x00522712  8b4864                mov    ecx, dword ptr [eax + 0x64]
0x00522715  8d7768                lea    esi, [edi + 0x68]
0x00522718  51                    push   ecx
0x00522719  8bce                  mov    ecx, esi
0x0052271B  e8105bf4ff            call   0x468230  ; -> sub_468230
0x00522720  8b8f04010000          mov    ecx, dword ptr [edi + 0x104]
0x00522726  e88597ffff            call   0x51beb0  ; -> sub_51BEB0
0x0052272B  50                    push   eax
0x0052272C  8bce                  mov    ecx, esi
0x0052272E  e88d5df4ff            call   0x4684c0  ; -> sub_4684C0
0x00522733  8b8f04010000          mov    ecx, dword ptr [edi + 0x104]
0x00522739  e8c26ff8ff            call   0x4a9700  ; -> sub_4A9700
0x0052273E  8bce                  mov    ecx, esi
0x00522740  50                    push   eax
0x00522741  e82a5bf4ff            call   0x468270  ; -> sub_468270
0x00522746  5e                    pop    esi
0x00522747  5f                    pop    edi
0x00522748  83c41c                add    esp, 0x1c
0x0052274B  c20400                ret    4
0x0052274E  6a00                  push   0
0x00522750  8d4f68                lea    ecx, [edi + 0x68]
0x00522753  e8d85af4ff            call   0x468230  ; -> sub_468230
0x00522758  5e                    pop    esi
0x00522759  5f                    pop    edi
0x0052275A  83c41c                add    esp, 0x1c
0x0052275D  c20400                ret    4
0x00522760  56                    push   esi
0x00522761  8bf1                  mov    esi, ecx
0x00522763  e8b875ffff            call   0x519d20  ; -> sub_519D20
0x00522768  83f801                cmp    eax, 1
0x0052276B  8b86e8000000          mov    eax, dword ptr [esi + 0xe8]
0x00522771  6a06                  push   6
0x00522773  8d8880000000          lea    ecx, [eax + 0x80]
0x00522779  7403                  je     0x52277e  ; -> sub_52277E
0x0052277B  8d4874                lea    ecx, [eax + 0x74]
0x0052277E  e84d63f4ff            call   0x468ad0  ; -> sub_468AD0
0x00522783  0fb6c0                movzx  eax, al
0x00522786  50                    push   eax
0x00522787  6a06                  push   6
0x00522789  8d8e88000000          lea    ecx, [esi + 0x88]
0x0052278F  e85c63f4ff            call   0x468af0  ; -> sub_468AF0
0x00522794  5e                    pop    esi
0x00522795  c3                    ret    
0x00522796  cc                    int3   
0x00522797  cc                    int3   
0x00522798  cc                    int3   
0x00522799  cc                    int3   
0x0052279A  cc                    int3   
0x0052279B  cc                    int3   
0x0052279C  cc                    int3   
0x0052279D  cc                    int3   
0x0052279E  cc                    int3   
0x0052279F  cc                    int3   
0x005227A0  83ec3c                sub    esp, 0x3c
0x005227A3  a1e49dba00            mov    eax, dword ptr [0xba9de4]
0x005227A8  53                    push   ebx
0x005227A9  56                    push   esi
0x005227AA  57                    push   edi
0x005227AB  8bf9                  mov    edi, ecx
0x005227AD  648b0d2c000000        mov    ecx, dword ptr fs:[0x2c]
0x005227B4  8b0481                mov    eax, dword ptr [ecx + eax*4]
0x005227B7  8a9085010000          mov    dl, byte ptr [eax + 0x185]
0x005227BD  33db                  xor    ebx, ebx
0x005227BF  385c245c              cmp    byte ptr [esp + 0x5c], bl
0x005227C3  89442444              mov    dword ptr [esp + 0x44], eax
0x005227C7  8854240f              mov    byte ptr [esp + 0xf], dl
0x005227CB  7506                  jne    0x5227d3  ; -> sub_5227D3
0x005227CD  889885010000          mov    byte ptr [eax + 0x185], bl
0x005227D3  55                    push   ebp
0x005227D4  8b6c2450              mov    ebp, dword ptr [esp + 0x50]
0x005227D8  8b4500                mov    eax, dword ptr [ebp]
0x005227DB  8b9090010000          mov    edx, dword ptr [eax + 0x190]
0x005227E1  8bcd                  mov    ecx, ebp
0x005227E3  ffd2                  call   edx
0x005227E5  84c0                  test   al, al
0x005227E7  741c                  je     0x522805  ; -> sub_522805
0x005227E9  8b4d58                mov    ecx, dword ptr [ebp + 0x58]
0x005227EC  3bcb                  cmp    ecx, ebx
0x005227EE  7415                  je     0x522805  ; -> sub_522805
0x005227F0  8b01                  mov    eax, dword ptr [ecx]
0x005227F2  8b9038010000          mov    edx, dword ptr [eax + 0x138]
0x005227F8  ffd2                  call   edx
0x005227FA  84c0                  test   al, al
0x005227FC  7407                  je     0x522805  ; -> sub_522805
0x005227FE  8bcd                  mov    ecx, ebp
0x00522800  e8ab9dfbff            call   0x4dc5b0  ; -> sub_4DC5B0
0x00522805  3bfb                  cmp    edi, ebx
0x00522807  7405                  je     0x52280e  ; -> sub_52280E
0x00522809  8d4744                lea    eax, [edi + 0x44]
0x0052280C  eb02                  jmp    0x522810  ; -> sub_522810
0x0052280E  33c0                  xor    eax, eax
0x00522810  50                    push   eax
0x00522811  55                    push   ebp
0x00522812  e8e935f6ff            call   0x485e00  ; -> sub_485E00
0x00522817  83c408                add    esp, 8
0x0052281A  8bf0                  mov    esi, eax
0x0052281C  6a01                  push   1
0x0052281E  8bce                  mov    ecx, esi
0x00522820  e80b38f6ff            call   0x486030  ; -> sub_486030
0x00522825  53                    push   ebx
0x00522826  687030b000            push   0xb03070  ; -> sub_B03070
0x0052282B  685430b000            push   0xb03054  ; -> sub_B03054
0x00522830  53                    push   ebx
0x00522831  55                    push   ebp
0x00522832  e8af0a4600            call   0x9832e6  ; -> sub_9832E6
0x00522837  83c414                add    esp, 0x14
0x0052283A  3bc3                  cmp    eax, ebx
0x0052283C  89442438              mov    dword ptr [esp + 0x38], eax
0x00522840  7449                  je     0x52288b  ; -> sub_52288B
0x00522842  8b4858                mov    ecx, dword ptr [eax + 0x58]
0x00522845  3bcb                  cmp    ecx, ebx
0x00522847  7442                  je     0x52288b  ; -> sub_52288B
0x00522849  8b11                  mov    edx, dword ptr [ecx]
0x0052284B  8b820c010000          mov    eax, dword ptr [edx + 0x10c]
0x00522851  53                    push   ebx
0x00522852  ffd0                  call   eax
0x00522854  8b4c2438              mov    ecx, dword ptr [esp + 0x38]
0x00522858  8b4958                mov    ecx, dword ptr [ecx + 0x58]
0x0052285B  8b11                  mov    edx, dword ptr [ecx]
0x0052285D  8b8210010000          mov    eax, dword ptr [edx + 0x110]
0x00522863  53                    push   ebx
0x00522864  ffd0                  call   eax
0x00522866  8b4c2438              mov    ecx, dword ptr [esp + 0x38]
0x0052286A  8b4958                mov    ecx, dword ptr [ecx + 0x58]
0x0052286D  8b11                  mov    edx, dword ptr [ecx]
0x0052286F  8b8208010000          mov    eax, dword ptr [edx + 0x108]
0x00522875  53                    push   ebx
0x00522876  ffd0                  call   eax
0x00522878  8b4c2438              mov    ecx, dword ptr [esp + 0x38]
0x0052287C  8b4958                mov    ecx, dword ptr [ecx + 0x58]
0x0052287F  8b11                  mov    edx, dword ptr [ecx]
0x00522881  8b8204010000          mov    eax, dword ptr [edx + 0x104]
0x00522887  53                    push   ebx
0x00522888  53                    push   ebx
0x00522889  ffd0                  call   eax
0x0052288B  385c2454              cmp    byte ptr [esp + 0x54], bl
0x0052288F  895c2460              mov    dword ptr [esp + 0x60], ebx
0x00522893  895c2450              mov    dword ptr [esp + 0x50], ebx
0x00522897  895c2424              mov    dword ptr [esp + 0x24], ebx
0x0052289B  895c2430              mov    dword ptr [esp + 0x30], ebx
0x0052289F  895c242c              mov    dword ptr [esp + 0x2c], ebx
0x005228A3  895c2428              mov    dword ptr [esp + 0x28], ebx
0x005228A7  895c2434              mov    dword ptr [esp + 0x34], ebx
0x005228AB  895c2420              mov    dword ptr [esp + 0x20], ebx
0x005228AF  895c243c              mov    dword ptr [esp + 0x3c], ebx
0x005228B3  895c2418              mov    dword ptr [esp + 0x18], ebx
0x005228B7  895c2414              mov    dword ptr [esp + 0x14], ebx
0x005228BB  895c241c              mov    dword ptr [esp + 0x1c], ebx
0x005228BF  750a                  jne    0x5228cb  ; -> sub_5228CB
0x005228C1  385c245c              cmp    byte ptr [esp + 0x5c], bl
0x005228C5  0f84a5000000          je     0x522970  ; -> sub_522970
0x005228CB  6a01                  push   1
0x005228CD  6a02                  push   2
0x005228CF  57                    push   edi
0x005228D0  8bce                  mov    ecx, esi
0x005228D2  e8999ff6ff            call   0x48c870  ; -> sub_48C870
0x005228D7  6a01                  push   1
0x005228D9  6a03                  push   3
0x005228DB  57                    push   edi
0x005228DC  8bce                  mov    ecx, esi
0x005228DE  8944246c              mov    dword ptr [esp + 0x6c], eax
0x005228E2  e8899ff6ff            call   0x48c870  ; -> sub_48C870
0x005228E7  6a01                  push   1
0x005228E9  6a05                  push   5
0x005228EB  57                    push   edi
0x005228EC  8bce                  mov    ecx, esi
0x005228EE  8944245c              mov    dword ptr [esp + 0x5c], eax
0x005228F2  e8799ff6ff            call   0x48c870  ; -> sub_48C870
0x005228F7  6a01                  push   1
0x005228F9  6a04                  push   4
0x005228FB  57                    push   edi
0x005228FC  8bce                  mov    ecx, esi
0x005228FE  89442430              mov    dword ptr [esp + 0x30], eax
0x00522902  e8699ff6ff            call   0x48c870  ; -> sub_48C870
0x00522907  385c245c              cmp    byte ptr [esp + 0x5c], bl
0x0052290B  89442428              mov    dword ptr [esp + 0x28], eax
0x0052290F  752f                  jne    0x522940  ; -> sub_522940
0x00522911  6a01                  push   1
0x00522913  6a01                  push   1
0x00522915  57                    push   edi
0x00522916  8bce                  mov    ecx, esi
0x00522918  e8539ff6ff            call   0x48c870  ; -> sub_48C870
0x0052291D  6a01                  push   1
0x0052291F  53                    push   ebx
0x00522920  57                    push   edi
0x00522921  8bce                  mov    ecx, esi
0x00522923  89442438              mov    dword ptr [esp + 0x38], eax
0x00522927  e8449ff6ff            call   0x48c870  ; -> sub_48C870
0x0052292C  6a01                  push   1
0x0052292E  6a0d                  push   0xd
0x00522930  57                    push   edi
0x00522931  8bce                  mov    ecx, esi
0x00522933  8944243c              mov    dword ptr [esp + 0x3c], eax
0x00522937  e8349ff6ff            call   0x48c870  ; -> sub_48C870
0x0052293C  89442434              mov    dword ptr [esp + 0x34], eax
0x00522940  6a01                  push   1
0x00522942  6a06                  push   6
0x00522944  57                    push   edi
0x00522945  8bce                  mov    ecx, esi
0x00522947  e8249ff6ff            call   0x48c870  ; -> sub_48C870
0x0052294C  6a01                  push   1
0x0052294E  6a07                  push   7
0x00522950  57                    push   edi
0x00522951  8bce                  mov    ecx, esi
0x00522953  89442424              mov    dword ptr [esp + 0x24], eax
0x00522957  e8149ff6ff            call   0x48c870  ; -> sub_48C870
0x0052295C  6a01                  push   1
0x0052295E  6a08                  push   8
0x00522960  57                    push   edi
0x00522961  8bce                  mov    ecx, esi
0x00522963  89442420              mov    dword ptr [esp + 0x20], eax
0x00522967  e8049ff6ff            call   0x48c870  ; -> sub_48C870
0x0052296C  8944241c              mov    dword ptr [esp + 0x1c], eax
0x00522970  385c2458              cmp    byte ptr [esp + 0x58], bl
0x00522974  d9ee                  fldz   
0x00522976  d95c2444              fstp   dword ptr [esp + 0x44]
0x0052297A  7415                  je     0x522991  ; -> sub_522991
0x0052297C  6a01                  push   1
0x0052297E  6aff                  push   -1
0x00522980  8d4c244c              lea    ecx, [esp + 0x4c]
0x00522984  51                    push   ecx
0x00522985  57                    push   edi
0x00522986  8bce                  mov    ecx, esi
0x00522988  e81394f6ff            call   0x48bda0  ; -> sub_48BDA0
0x0052298D  89442420              mov    dword ptr [esp + 0x20], eax
0x00522991  6a01                  push   1
0x00522993  57                    push   edi
0x00522994  8bce                  mov    ecx, esi
0x00522996  e8c58cf6ff            call   0x48b660  ; -> sub_48B660
0x0052299B  395c2420              cmp    dword ptr [esp + 0x20], ebx
0x0052299F  89442440              mov    dword ptr [esp + 0x40], eax
0x005229A3  743b                  je     0x5229e0  ; -> sub_5229E0
0x005229A5  8b542420              mov    edx, dword ptr [esp + 0x20]
0x005229A9  8b4208                mov    eax, dword ptr [edx + 8]
0x005229AC  3bc3                  cmp    eax, ebx
0x005229AE  7430                  je     0x5229e0  ; -> sub_5229E0
0x005229B0  53                    push   ebx
0x005229B1  68fc36b000            push   0xb036fc  ; -> sub_B036FC
0x005229B6  684832b000            push   0xb03248  ; -> sub_B03248
0x005229BB  53                    push   ebx
0x005229BC  50                    push   eax

