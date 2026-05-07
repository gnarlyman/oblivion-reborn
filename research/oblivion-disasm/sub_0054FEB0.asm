ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x0054FEB0
; VA: 0x0054FEB0  size: 0x300
; ============================================================
0x0054FEB0  81ec0c020000          sub    esp, 0x20c
0x0054FEB6  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0054FEBB  33c4                  xor    eax, esp
0x0054FEBD  89842408020000        mov    dword ptr [esp + 0x208], eax
0x0054FEC4  8b842414020000        mov    eax, dword ptr [esp + 0x214]
0x0054FECB  85c0                  test   eax, eax
0x0054FECD  56                    push   esi
0x0054FECE  8bb42414020000        mov    esi, dword ptr [esp + 0x214]
0x0054FED5  7518                  jne    0x54feef  ; -> sub_54FEEF
0x0054FED7  33c0                  xor    eax, eax
0x0054FED9  5e                    pop    esi
0x0054FEDA  8b8c2408020000        mov    ecx, dword ptr [esp + 0x208]
0x0054FEE1  33cc                  xor    ecx, esp
0x0054FEE3  e8fa124300            call   0x9811e2  ; -> sub_9811E2
0x0054FEE8  81c40c020000          add    esp, 0x20c
0x0054FEEE  c3                    ret    
0x0054FEEF  8d542404              lea    edx, [esp + 4]
0x0054FEF3  2bd0                  sub    edx, eax
0x0054FEF5  8a08                  mov    cl, byte ptr [eax]
0x0054FEF7  880c02                mov    byte ptr [edx + eax], cl
0x0054FEFA  83c001                add    eax, 1
0x0054FEFD  84c9                  test   cl, cl
0x0054FEFF  75f4                  jne    0x54fef5  ; -> sub_54FEF5
0x0054FF01  8d442404              lea    eax, [esp + 4]
0x0054FF05  6a2e                  push   0x2e
0x0054FF07  50                    push   eax
0x0054FF08  e8c3404300            call   0x983fd0  ; -> sub_983FD0
0x0054FF0D  83c408                add    esp, 8
0x0054FF10  85c0                  test   eax, eax
0x0054FF12  74c3                  je     0x54fed7  ; -> sub_54FED7
0x0054FF14  8d4c2404              lea    ecx, [esp + 4]
0x0054FF18  51                    push   ecx
0x0054FF19  8d94240c010000        lea    edx, [esp + 0x10c]
0x0054FF20  686447a600            push   0xa64764  ; -> sub_A64764
0x0054FF25  52                    push   edx
0x0054FF26  c60000                mov    byte ptr [eax], 0
0x0054FF29  e85d214300            call   0x98208b  ; -> sub_98208B
0x0054FF2E  83c40c                add    esp, 0xc
0x0054FF31  6a00                  push   0
0x0054FF33  8d84240c010000        lea    eax, [esp + 0x10c]
0x0054FF3A  50                    push   eax
0x0054FF3B  8bce                  mov    ecx, esi
0x0054FF3D  e88e29ebff            call   0x4028d0  ; -> sub_4028D0
0x0054FF42  8b06                  mov    eax, dword ptr [esi]
0x0054FF44  8b8c240c020000        mov    ecx, dword ptr [esp + 0x20c]
0x0054FF4B  5e                    pop    esi
0x0054FF4C  33cc                  xor    ecx, esp
0x0054FF4E  e88f124300            call   0x9811e2  ; -> sub_9811E2
0x0054FF53  81c40c020000          add    esp, 0x20c
0x0054FF59  c3                    ret    
0x0054FF5A  cc                    int3   
0x0054FF5B  cc                    int3   
0x0054FF5C  cc                    int3   
0x0054FF5D  cc                    int3   
0x0054FF5E  cc                    int3   
0x0054FF5F  cc                    int3   
0x0054FF60  81ec0c020000          sub    esp, 0x20c
0x0054FF66  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0054FF6B  33c4                  xor    eax, esp
0x0054FF6D  89842408020000        mov    dword ptr [esp + 0x208], eax
0x0054FF74  8b842414020000        mov    eax, dword ptr [esp + 0x214]
0x0054FF7B  85c0                  test   eax, eax
0x0054FF7D  56                    push   esi
0x0054FF7E  8bb42414020000        mov    esi, dword ptr [esp + 0x214]
0x0054FF85  7518                  jne    0x54ff9f  ; -> sub_54FF9F
0x0054FF87  33c0                  xor    eax, eax
0x0054FF89  5e                    pop    esi
0x0054FF8A  8b8c2408020000        mov    ecx, dword ptr [esp + 0x208]
0x0054FF91  33cc                  xor    ecx, esp
0x0054FF93  e84a124300            call   0x9811e2  ; -> sub_9811E2
0x0054FF98  81c40c020000          add    esp, 0x20c
0x0054FF9E  c3                    ret    
0x0054FF9F  8d542404              lea    edx, [esp + 4]
0x0054FFA3  2bd0                  sub    edx, eax
0x0054FFA5  8a08                  mov    cl, byte ptr [eax]
0x0054FFA7  880c02                mov    byte ptr [edx + eax], cl
0x0054FFAA  83c001                add    eax, 1
0x0054FFAD  84c9                  test   cl, cl
0x0054FFAF  75f4                  jne    0x54ffa5  ; -> sub_54FFA5
0x0054FFB1  8d442404              lea    eax, [esp + 4]
0x0054FFB5  6a2e                  push   0x2e
0x0054FFB7  50                    push   eax
0x0054FFB8  e813404300            call   0x983fd0  ; -> sub_983FD0
0x0054FFBD  83c408                add    esp, 8
0x0054FFC0  85c0                  test   eax, eax
0x0054FFC2  74c3                  je     0x54ff87  ; -> sub_54FF87
0x0054FFC4  8d4c2404              lea    ecx, [esp + 4]
0x0054FFC8  51                    push   ecx
0x0054FFC9  8d94240c010000        lea    edx, [esp + 0x10c]
0x0054FFD0  686c47a600            push   0xa6476c  ; -> sub_A6476C
0x0054FFD5  52                    push   edx
0x0054FFD6  c60000                mov    byte ptr [eax], 0
0x0054FFD9  e8ad204300            call   0x98208b  ; -> sub_98208B
0x0054FFDE  83c40c                add    esp, 0xc
0x0054FFE1  6a00                  push   0
0x0054FFE3  8d84240c010000        lea    eax, [esp + 0x10c]
0x0054FFEA  50                    push   eax
0x0054FFEB  8bce                  mov    ecx, esi
0x0054FFED  e8de28ebff            call   0x4028d0  ; -> sub_4028D0
0x0054FFF2  8b06                  mov    eax, dword ptr [esi]
0x0054FFF4  8b8c240c020000        mov    ecx, dword ptr [esp + 0x20c]
0x0054FFFB  5e                    pop    esi
0x0054FFFC  33cc                  xor    ecx, esp
0x0054FFFE  e8df114300            call   0x9811e2  ; -> sub_9811E2
0x00550003  81c40c020000          add    esp, 0x20c
0x00550009  c3                    ret    
0x0055000A  cc                    int3   
0x0055000B  cc                    int3   
0x0055000C  cc                    int3   
0x0055000D  cc                    int3   
0x0055000E  cc                    int3   
0x0055000F  cc                    int3   
0x00550010  81ec0c020000          sub    esp, 0x20c
0x00550016  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0055001B  33c4                  xor    eax, esp
0x0055001D  89842408020000        mov    dword ptr [esp + 0x208], eax
0x00550024  8b842414020000        mov    eax, dword ptr [esp + 0x214]
0x0055002B  85c0                  test   eax, eax
0x0055002D  56                    push   esi
0x0055002E  8bb42414020000        mov    esi, dword ptr [esp + 0x214]
0x00550035  7518                  jne    0x55004f  ; -> sub_55004F
0x00550037  33c0                  xor    eax, eax
0x00550039  5e                    pop    esi
0x0055003A  8b8c2408020000        mov    ecx, dword ptr [esp + 0x208]
0x00550041  33cc                  xor    ecx, esp
0x00550043  e89a114300            call   0x9811e2  ; -> sub_9811E2
0x00550048  81c40c020000          add    esp, 0x20c
0x0055004E  c3                    ret    
0x0055004F  8d542404              lea    edx, [esp + 4]
0x00550053  2bd0                  sub    edx, eax
0x00550055  8a08                  mov    cl, byte ptr [eax]
0x00550057  880c02                mov    byte ptr [edx + eax], cl
0x0055005A  83c001                add    eax, 1
0x0055005D  84c9                  test   cl, cl
0x0055005F  75f4                  jne    0x550055  ; -> sub_550055
0x00550061  8d442404              lea    eax, [esp + 4]
0x00550065  6a2e                  push   0x2e
0x00550067  50                    push   eax
0x00550068  e8633f4300            call   0x983fd0  ; -> sub_983FD0
0x0055006D  83c408                add    esp, 8
0x00550070  85c0                  test   eax, eax
0x00550072  74c3                  je     0x550037  ; -> sub_550037
0x00550074  8d4c2404              lea    ecx, [esp + 4]
0x00550078  51                    push   ecx
0x00550079  8d94240c010000        lea    edx, [esp + 0x10c]
0x00550080  687447a600            push   0xa64774  ; -> sub_A64774
0x00550085  52                    push   edx
0x00550086  c60000                mov    byte ptr [eax], 0
0x00550089  e8fd1f4300            call   0x98208b  ; -> sub_98208B
0x0055008E  83c40c                add    esp, 0xc
0x00550091  6a00                  push   0
0x00550093  8d84240c010000        lea    eax, [esp + 0x10c]
0x0055009A  50                    push   eax
0x0055009B  8bce                  mov    ecx, esi
0x0055009D  e82e28ebff            call   0x4028d0  ; -> sub_4028D0
0x005500A2  8b06                  mov    eax, dword ptr [esi]
0x005500A4  8b8c240c020000        mov    ecx, dword ptr [esp + 0x20c]
0x005500AB  5e                    pop    esi
0x005500AC  33cc                  xor    ecx, esp
0x005500AE  e82f114300            call   0x9811e2  ; -> sub_9811E2
0x005500B3  81c40c020000          add    esp, 0x20c
0x005500B9  c3                    ret    
0x005500BA  cc                    int3   
0x005500BB  cc                    int3   
0x005500BC  cc                    int3   
0x005500BD  cc                    int3   
0x005500BE  cc                    int3   
0x005500BF  cc                    int3   
0x005500C0  81ec0c020000          sub    esp, 0x20c
0x005500C6  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x005500CB  33c4                  xor    eax, esp
0x005500CD  89842408020000        mov    dword ptr [esp + 0x208], eax
0x005500D4  8b842414020000        mov    eax, dword ptr [esp + 0x214]
0x005500DB  85c0                  test   eax, eax
0x005500DD  56                    push   esi
0x005500DE  8bb42414020000        mov    esi, dword ptr [esp + 0x214]
0x005500E5  7518                  jne    0x5500ff  ; -> sub_5500FF
0x005500E7  33c0                  xor    eax, eax
0x005500E9  5e                    pop    esi
0x005500EA  8b8c2408020000        mov    ecx, dword ptr [esp + 0x208]
0x005500F1  33cc                  xor    ecx, esp
0x005500F3  e8ea104300            call   0x9811e2  ; -> sub_9811E2
0x005500F8  81c40c020000          add    esp, 0x20c
0x005500FE  c3                    ret    
0x005500FF  8d542404              lea    edx, [esp + 4]
0x00550103  2bd0                  sub    edx, eax
0x00550105  8a08                  mov    cl, byte ptr [eax]
0x00550107  880c02                mov    byte ptr [edx + eax], cl
0x0055010A  83c001                add    eax, 1
0x0055010D  84c9                  test   cl, cl
0x0055010F  75f4                  jne    0x550105  ; -> sub_550105
0x00550111  8d442404              lea    eax, [esp + 4]
0x00550115  6a2e                  push   0x2e
0x00550117  50                    push   eax
0x00550118  e8b33e4300            call   0x983fd0  ; -> sub_983FD0
0x0055011D  83c408                add    esp, 8
0x00550120  85c0                  test   eax, eax
0x00550122  74c3                  je     0x5500e7  ; -> sub_5500E7
0x00550124  8d4c2404              lea    ecx, [esp + 4]
0x00550128  51                    push   ecx
0x00550129  8d94240c010000        lea    edx, [esp + 0x10c]
0x00550130  687c47a600            push   0xa6477c  ; -> sub_A6477C
0x00550135  52                    push   edx
0x00550136  c60000                mov    byte ptr [eax], 0
0x00550139  e84d1f4300            call   0x98208b  ; -> sub_98208B
0x0055013E  83c40c                add    esp, 0xc
0x00550141  6a00                  push   0
0x00550143  8d84240c010000        lea    eax, [esp + 0x10c]
0x0055014A  50                    push   eax
0x0055014B  8bce                  mov    ecx, esi
0x0055014D  e87e27ebff            call   0x4028d0  ; -> sub_4028D0
0x00550152  8b06                  mov    eax, dword ptr [esi]
0x00550154  8b8c240c020000        mov    ecx, dword ptr [esp + 0x20c]
0x0055015B  5e                    pop    esi
0x0055015C  33cc                  xor    ecx, esp
0x0055015E  e87f104300            call   0x9811e2  ; -> sub_9811E2
0x00550163  81c40c020000          add    esp, 0x20c
0x00550169  c3                    ret    
0x0055016A  cc                    int3   
0x0055016B  cc                    int3   
0x0055016C  cc                    int3   
0x0055016D  cc                    int3   
0x0055016E  cc                    int3   
0x0055016F  cc                    int3   
0x00550170  81ec0c020000          sub    esp, 0x20c
0x00550176  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0055017B  33c4                  xor    eax, esp
0x0055017D  89842408020000        mov    dword ptr [esp + 0x208], eax
0x00550184  56                    push   esi
0x00550185  8bb42418020000        mov    esi, dword ptr [esp + 0x218]
0x0055018C  85f6                  test   esi, esi
0x0055018E  57                    push   edi
0x0055018F  8bbc2418020000        mov    edi, dword ptr [esp + 0x218]
0x00550196  7519                  jne    0x5501b1  ; -> sub_5501B1
0x00550198  5f                    pop    edi
0x00550199  33c0                  xor    eax, eax
0x0055019B  5e                    pop    esi
0x0055019C  8b8c2408020000        mov    ecx, dword ptr [esp + 0x208]
0x005501A3  33cc                  xor    ecx, esp
0x005501A5  e838104300            call   0x9811e2  ; -> sub_9811E2
0x005501AA  81c40c020000          add    esp, 0x20c

