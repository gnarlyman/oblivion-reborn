; ============================================================
; TESObjectREFR::Set3D  (Crash 5: +0x48)
; VA: 0x004E0F80  size: 0x180
; ============================================================
0x004E0F80  6aff                  push   -1
0x004E0F82  68635b9b00            push   0x9b5b63  ; -> sub_9B5B63
0x004E0F87  64a100000000          mov    eax, dword ptr fs:[0]
0x004E0F8D  50                    push   eax
0x004E0F8E  83ec44                sub    esp, 0x44
0x004E0F91  53                    push   ebx
0x004E0F92  55                    push   ebp
0x004E0F93  56                    push   esi
0x004E0F94  57                    push   edi
0x004E0F95  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x004E0F9A  33c4                  xor    eax, esp
0x004E0F9C  50                    push   eax
0x004E0F9D  8d442458              lea    eax, [esp + 0x58]
0x004E0FA1  64a300000000          mov    dword ptr fs:[0], eax
0x004E0FA7  8be9                  mov    ebp, ecx
0x004E0FA9  8b453c                mov    eax, dword ptr [ebp + 0x3c]
0x004E0FAC  8b7c2468              mov    edi, dword ptr [esp + 0x68]
0x004E0FB0  3bc7                  cmp    eax, edi
0x004E0FB2  7519                  jne    0x4e0fcd  ; TESObjectREFR::Set3D+0x4d
0x004E0FB4  85ff                  test   edi, edi
0x004E0FB6  0f85a0050000          jne    0x4e155c  ; -> sub_4E155C
0x004E0FBC  8b0d1c3ab300          mov    ecx, dword ptr [0xb33a1c]  ; g_modelLoader (ModelLoader**)
0x004E0FC2  55                    push   ebp
0x004E0FC3  e8f88df5ff            call   0x439dc0  ; -> sub_439DC0
0x004E0FC8  e98f050000            jmp    0x4e155c  ; -> sub_4E155C
0x004E0FCD  8b4d30                mov    ecx, dword ptr [ebp + 0x30]
0x004E0FD0  8b452c                mov    eax, dword ptr [ebp + 0x2c]
0x004E0FD3  8b5534                mov    edx, dword ptr [ebp + 0x34]
0x004E0FD6  894c242c              mov    dword ptr [esp + 0x2c], ecx
0x004E0FDA  8bcd                  mov    ecx, ebp
0x004E0FDC  89442428              mov    dword ptr [esp + 0x28], eax
0x004E0FE0  89542430              mov    dword ptr [esp + 0x30], edx
0x004E0FE4  e87762ffff            call   0x4d7260  ; -> sub_4D7260
0x004E0FE9  d95c241c              fstp   dword ptr [esp + 0x1c]
0x004E0FED  8b4500                mov    eax, dword ptr [ebp]
0x004E0FF0  8b9090010000          mov    edx, dword ptr [eax + 0x190]
0x004E0FF6  33f6                  xor    esi, esi
0x004E0FF8  8bcd                  mov    ecx, ebp
0x004E0FFA  c744241800000000      mov    dword ptr [esp + 0x18], 0
0x004E1002  89742414              mov    dword ptr [esp + 0x14], esi
0x004E1006  ffd2                  call   edx
0x004E1008  84c0                  test   al, al
0x004E100A  7406                  je     0x4e1012  ; -> sub_4E1012
0x004E100C  8bf5                  mov    esi, ebp
0x004E100E  896c2414              mov    dword ptr [esp + 0x14], ebp
0x004E1012  8b453c                mov    eax, dword ptr [ebp + 0x3c]
0x004E1015  85c0                  test   eax, eax
0x004E1017  7415                  je     0x4e102e  ; -> sub_4E102E
0x004E1019  85ff                  test   edi, edi
0x004E101B  7411                  je     0x4e102e  ; -> sub_4E102E
0x004E101D  8b451c                mov    eax, dword ptr [ebp + 0x1c]
0x004E1020  85c0                  test   eax, eax
0x004E1022  740a                  je     0x4e102e  ; -> sub_4E102E
0x004E1024  8078041e              cmp    byte ptr [eax + 4], 0x1e
0x004E1028  0f842e050000          je     0x4e155c  ; -> sub_4E155C
0x004E102E  a1983ab300            mov    eax, dword ptr [0xb33a98]  ; g_modelLoader (ModelLoader**)+0x7c
0x004E1033  80b8d40c000000        cmp    byte ptr [eax + 0xcd4], 0
0x004E103A  752c                  jne    0x4e1068  ; -> sub_4E1068
0x004E103C  85f6                  test   esi, esi
0x004E103E  7428                  je     0x4e1068  ; -> sub_4E1068
0x004E1040  8b16                  mov    edx, dword ptr [esi]
0x004E1042  8b8280030000          mov    eax, dword ptr [edx + 0x380]
0x004E1048  8bce                  mov    ecx, esi
0x004E104A  ffd0                  call   eax
0x004E104C  85c0                  test   eax, eax
0x004E104E  7418                  je     0x4e1068  ; -> sub_4E1068
0x004E1050  8b16                  mov    edx, dword ptr [esi]
0x004E1052  8b8280030000          mov    eax, dword ptr [edx + 0x380]
0x004E1058  8bce                  mov    ecx, esi
0x004E105A  ffd0                  call   eax
0x004E105C  8b10                  mov    edx, dword ptr [eax]
0x004E105E  8bc8                  mov    ecx, eax
0x004E1060  8b8264010000          mov    eax, dword ptr [edx + 0x164]
0x004E1066  ffd0                  call   eax
0x004E1068  8b5d3c                mov    ebx, dword ptr [ebp + 0x3c]
0x004E106B  85db                  test   ebx, ebx
0x004E106D  895c2424              mov    dword ptr [esp + 0x24], ebx
0x004E1071  740a                  je     0x4e107d  ; -> sub_4E107D
0x004E1073  8d4b04                lea    ecx, [ebx + 4]
0x004E1076  51                    push   ecx
0x004E1077  ff157880a200          call   dword ptr [0xa28078]
0x004E107D  85db                  test   ebx, ebx
0x004E107F  c744246000000000      mov    dword ptr [esp + 0x60], 0
0x004E1087  0f842e030000          je     0x4e13bb  ; -> sub_4E13BB
0x004E108D  8b4b1c                mov    ecx, dword ptr [ebx + 0x1c]
0x004E1090  85c9                  test   ecx, ecx
0x004E1092  894c2418              mov    dword ptr [esp + 0x18], ecx
0x004E1096  0f8480000000          je     0x4e111c  ; -> sub_4E111C
0x004E109C  8b5508                mov    edx, dword ptr [ebp + 8]
0x004E109F  c1ea0e                shr    edx, 0xe
0x004E10A2  f6c201                test   dl, 1
0x004E10A5  740d                  je     0x4e10b4  ; -> sub_4E10B4
0x004E10A7  8b451c                mov    eax, dword ptr [ebp + 0x1c]
0x004E10AA  85c0                  test   eax, eax
0x004E10AC  7406                  je     0x4e10b4  ; -> sub_4E10B4
0x004E10AE  8078041e              cmp    byte ptr [eax + 4], 0x1e
0x004E10B2  7436                  je     0x4e10ea  ; -> sub_4E10EA
0x004E10B4  8b01                  mov    eax, dword ptr [ecx]
0x004E10B6  8b8088000000          mov    eax, dword ptr [eax + 0x88]
0x004E10BC  53                    push   ebx
0x004E10BD  8d542424              lea    edx, [esp + 0x24]
0x004E10C1  52                    push   edx
0x004E10C2  ffd0                  call   eax
0x004E10C4  8b442420              mov    eax, dword ptr [esp + 0x20]
0x004E10C8  85c0                  test   eax, eax
0x004E10CA  741e                  je     0x4e10ea  ; -> sub_4E10EA
0x004E10CC  8bf0                  mov    esi, eax
0x004E10CE  83c004                add    eax, 4
0x004E10D1  50                    push   eax
0x004E10D2  ff157c80a200          call   dword ptr [0xa2807c]
0x004E10D8  85c0                  test   eax, eax
0x004E10DA  750e                  jne    0x4e10ea  ; -> sub_4E10EA
0x004E10DC  85f6                  test   esi, esi
0x004E10DE  740a                  je     0x4e10ea  ; -> sub_4E10EA
0x004E10E0  8b16                  mov    edx, dword ptr [esi]
0x004E10E2  8b02                  mov    eax, dword ptr [edx]
0x004E10E4  6a01                  push   1
0x004E10E6  8bce                  mov    ecx, esi
0x004E10E8  ffd0                  call   eax
0x004E10EA  8b4b54                mov    ecx, dword ptr [ebx + 0x54]
0x004E10ED  d94360                fld    dword ptr [ebx + 0x60]
0x004E10F0  8b5358                mov    edx, dword ptr [ebx + 0x58]
0x004E10F3  d95c241c              fstp   dword ptr [esp + 0x1c]
0x004E10F7  8b435c                mov    eax, dword ptr [ebx + 0x5c]
0x004E10FA  894c2428              mov    dword ptr [esp + 0x28], ecx
