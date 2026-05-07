ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x00519D20
; VA: 0x00519D20  size: 0x200
; ============================================================
0x00519D20  80790423              cmp    byte ptr [ecx + 4], 0x23
0x00519D24  7508                  jne    0x519d2e  ; -> sub_519D2E
0x00519D26  0fb64128              movzx  eax, byte ptr [ecx + 0x28]
0x00519D2A  83e001                and    eax, 1
0x00519D2D  c3                    ret    
0x00519D2E  83c8ff                or     eax, 0xffffffff
0x00519D31  c3                    ret    
0x00519D32  cc                    int3   
0x00519D33  cc                    int3   
0x00519D34  cc                    int3   
0x00519D35  cc                    int3   
0x00519D36  cc                    int3   
0x00519D37  cc                    int3   
0x00519D38  cc                    int3   
0x00519D39  cc                    int3   
0x00519D3A  cc                    int3   
0x00519D3B  cc                    int3   
0x00519D3C  cc                    int3   
0x00519D3D  cc                    int3   
0x00519D3E  cc                    int3   
0x00519D3F  cc                    int3   
0x00519D40  80790423              cmp    byte ptr [ecx + 4], 0x23
0x00519D44  7509                  jne    0x519d4f  ; -> sub_519D4F
0x00519D46  8b4128                mov    eax, dword ptr [ecx + 0x28]
0x00519D49  c1e804                shr    eax, 4
0x00519D4C  2401                  and    al, 1
0x00519D4E  c3                    ret    
0x00519D4F  32c0                  xor    al, al
0x00519D51  c3                    ret    
0x00519D52  cc                    int3   
0x00519D53  cc                    int3   
0x00519D54  cc                    int3   
0x00519D55  cc                    int3   
0x00519D56  cc                    int3   
0x00519D57  cc                    int3   
0x00519D58  cc                    int3   
0x00519D59  cc                    int3   
0x00519D5A  cc                    int3   
0x00519D5B  cc                    int3   
0x00519D5C  cc                    int3   
0x00519D5D  cc                    int3   
0x00519D5E  cc                    int3   
0x00519D5F  cc                    int3   
0x00519D60  80790423              cmp    byte ptr [ecx + 4], 0x23
0x00519D64  7523                  jne    0x519d89  ; -> sub_519D89
0x00519D66  83c124                add    ecx, 0x24
0x00519D69  807c240400            cmp    byte ptr [esp + 4], 0
0x00519D6E  7406                  je     0x519d76  ; -> sub_519D76
0x00519D70  83490410              or     dword ptr [ecx + 4], 0x10
0x00519D74  eb04                  jmp    0x519d7a  ; -> sub_519D7A
0x00519D76  836104ef              and    dword ptr [ecx + 4], 0xffffffef
0x00519D7A  8b01                  mov    eax, dword ptr [ecx]
0x00519D7C  8b5050                mov    edx, dword ptr [eax + 0x50]
0x00519D7F  c744240410000000      mov    dword ptr [esp + 4], 0x10
0x00519D87  ffe2                  jmp    edx
0x00519D89  c20400                ret    4
0x00519D8C  cc                    int3   
0x00519D8D  cc                    int3   
0x00519D8E  cc                    int3   
0x00519D8F  cc                    int3   
0x00519D90  8b542404              mov    edx, dword ptr [esp + 4]
0x00519D94  33c0                  xor    eax, eax
0x00519D96  83fa27                cmp    edx, 0x27
0x00519D99  56                    push   esi
0x00519D9A  0f8728010000          ja     0x519ec8  ; -> sub_519EC8
0x00519DA0  0fb6b2249f5100        movzx  esi, byte ptr [edx + 0x519f24]
0x00519DA7  ff24b5e09e5100        jmp    dword ptr [esi*4 + 0x519ee0]
0x00519DAE  6a03                  push   3
0x00519DB0  81c188000000          add    ecx, 0x88
0x00519DB6  e815edf4ff            call   0x468ad0  ; -> sub_468AD0
0x00519DBB  0fb6c0                movzx  eax, al
0x00519DBE  5e                    pop    esi
0x00519DBF  c20400                ret    4
0x00519DC2  6a05                  push   5
0x00519DC4  81c188000000          add    ecx, 0x88
0x00519DCA  e801edf4ff            call   0x468ad0  ; -> sub_468AD0
0x00519DCF  0fb6c0                movzx  eax, al
0x00519DD2  5e                    pop    esi
0x00519DD3  c20400                ret    4
0x00519DD6  6a01                  push   1
0x00519DD8  81c188000000          add    ecx, 0x88
0x00519DDE  e8edecf4ff            call   0x468ad0  ; -> sub_468AD0
0x00519DE3  0fb6c0                movzx  eax, al
0x00519DE6  5e                    pop    esi
0x00519DE7  c20400                ret    4
0x00519DEA  6a07                  push   7
0x00519DEC  81c188000000          add    ecx, 0x88
0x00519DF2  e8d9ecf4ff            call   0x468ad0  ; -> sub_468AD0
0x00519DF7  0fb6c0                movzx  eax, al
0x00519DFA  5e                    pop    esi
0x00519DFB  c20400                ret    4
0x00519DFE  6a06                  push   6
0x00519E00  81c188000000          add    ecx, 0x88
0x00519E06  e8c5ecf4ff            call   0x468ad0  ; -> sub_468AD0
0x00519E0B  0fb6c0                movzx  eax, al
0x00519E0E  5e                    pop    esi
0x00519E0F  c20400                ret    4
0x00519E12  6a04                  push   4
0x00519E14  81c188000000          add    ecx, 0x88
0x00519E1A  e8b1ecf4ff            call   0x468ad0  ; -> sub_468AD0
0x00519E1F  0fb6c0                movzx  eax, al
0x00519E22  5e                    pop    esi
0x00519E23  c20400                ret    4
0x00519E26  6a00                  push   0
0x00519E28  81c188000000          add    ecx, 0x88
0x00519E2E  e89decf4ff            call   0x468ad0  ; -> sub_468AD0
0x00519E33  0fb6c0                movzx  eax, al
0x00519E36  5e                    pop    esi
0x00519E37  c20400                ret    4
0x00519E3A  6a02                  push   2
0x00519E3C  81c188000000          add    ecx, 0x88
0x00519E42  e889ecf4ff            call   0x468ad0  ; -> sub_468AD0
0x00519E47  0fb6c0                movzx  eax, al
0x00519E4A  5e                    pop    esi
0x00519E4B  c20400                ret    4
0x00519E4E  e8bdfdffff            call   0x519c10  ; -> sub_519C10
0x00519E53  5e                    pop    esi
0x00519E54  c20400                ret    4
0x00519E57  8b4124                mov    eax, dword ptr [ecx + 0x24]
0x00519E5A  8b504c                mov    edx, dword ptr [eax + 0x4c]
0x00519E5D  83c124                add    ecx, 0x24
0x00519E60  ffd2                  call   edx
0x00519E62  0fb7c0                movzx  eax, ax
0x00519E65  5e                    pop    esi
0x00519E66  c20400                ret    4
0x00519E69  8b4124                mov    eax, dword ptr [ecx + 0x24]
0x00519E6C  8b5048                mov    edx, dword ptr [eax + 0x48]
0x00519E6F  83c124                add    ecx, 0x24
0x00519E72  ffd2                  call   edx
0x00519E74  0fb7c0                movzx  eax, ax
0x00519E77  5e                    pop    esi
0x00519E78  c20400                ret    4
0x00519E7B  83c144                add    ecx, 0x44
0x00519E7E  e82dfaf4ff            call   0x4698b0  ; -> sub_4698B0
0x00519E83  e8388a4600            call   0x9828c0  ; -> sub_9828C0
0x00519E88  5e                    pop    esi
0x00519E89  c20400                ret    4
0x00519E8C  83c168                add    ecx, 0x68
0x00519E8F  e87cea0100            call   0x538910  ; -> sub_538910
0x00519E94  0fb6c0                movzx  eax, al
0x00519E97  5e                    pop    esi
0x00519E98  c20400                ret    4
0x00519E9B  83c168                add    ecx, 0x68
0x00519E9E  e8fde2f4ff            call   0x4681a0  ; -> sub_4681A0
0x00519EA3  0fb6c0                movzx  eax, al
0x00519EA6  5e                    pop    esi
0x00519EA7  c20400                ret    4
0x00519EAA  83c168                add    ecx, 0x68
0x00519EAD  e81ee3f4ff            call   0x4681d0  ; -> sub_4681D0
0x00519EB2  0fb6c0                movzx  eax, al
0x00519EB5  5e                    pop    esi
0x00519EB6  c20400                ret    4
0x00519EB9  83c168                add    ecx, 0x68
0x00519EBC  e83fe3f4ff            call   0x468200  ; -> sub_468200
0x00519EC1  0fb6c0                movzx  eax, al
0x00519EC4  5e                    pop    esi
0x00519EC5  c20400                ret    4
0x00519EC8  52                    push   edx
0x00519EC9  81c1d0000000          add    ecx, 0xd0
0x00519ECF  e8ac2c1400            call   0x65cb80  ; -> sub_65CB80
0x00519ED4  e8e7894600            call   0x9828c0  ; -> sub_9828C0
0x00519ED9  5e                    pop    esi
0x00519EDA  c20400                ret    4
0x00519EDD  8d4900                lea    ecx, [ecx]
0x00519EE0  269e                  sahf   
0x00519EE2  51                    push   ecx
0x00519EE3  00d6                  add    dh, dl
0x00519EE5  9d                    popfd  
0x00519EE6  51                    push   ecx
0x00519EE7  003a                  add    byte ptr [edx], bh
0x00519EE9  9e                    sahf   
0x00519EEA  51                    push   ecx
0x00519EEB  00ae9d510012          add    byte ptr [esi + 0x1200519d], ch
0x00519EF1  9e                    sahf   
0x00519EF2  51                    push   ecx
0x00519EF3  00c2                  add    dl, al
0x00519EF5  9d                    popfd  
0x00519EF6  51                    push   ecx
0x00519EF7  00fe                  add    dh, bh
0x00519EF9  9d                    popfd  
0x00519EFA  51                    push   ecx
0x00519EFB  00ea                  add    dl, ch
0x00519EFD  9d                    popfd  
0x00519EFE  51                    push   ecx
0x00519EFF  004e9e                add    byte ptr [esi - 0x62], cl
0x00519F02  51                    push   ecx
0x00519F03  00699e                add    byte ptr [ecx - 0x62], ch
0x00519F06  51                    push   ecx
0x00519F07  00579e                add    byte ptr [edi - 0x62], dl
0x00519F0A  51                    push   ecx
0x00519F0B  007b9e                add    byte ptr [ebx - 0x62], bh
0x00519F0E  51                    push   ecx
0x00519F0F  00d9                  add    cl, bl
0x00519F11  9e                    sahf   
0x00519F12  51                    push   ecx
0x00519F13  008c9e51009b9e        add    byte ptr [esi + ebx*4 - 0x6164ffaf], cl
0x00519F1A  51                    push   ecx

