ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x00432ED0
; VA: 0x00432ED0  size: 0x200
; ============================================================
0x00432ED0  53                    push   ebx
0x00432ED1  8b5c240c              mov    ebx, dword ptr [esp + 0xc]
0x00432ED5  55                    push   ebp
0x00432ED6  56                    push   esi
0x00432ED7  57                    push   edi
0x00432ED8  8bf1                  mov    esi, ecx
0x00432EDA  8d9b00000000          lea    ebx, [ebx]
0x00432EE0  8b4304                mov    eax, dword ptr [ebx + 4]
0x00432EE3  8b0b                  mov    ecx, dword ptr [ebx]
0x00432EE5  8b542414              mov    edx, dword ptr [esp + 0x14]
0x00432EE9  50                    push   eax
0x00432EEA  51                    push   ecx
0x00432EEB  52                    push   edx
0x00432EEC  8bce                  mov    ecx, esi
0x00432EEE  e86dfbffff            call   0x432a60  ; -> sub_432A60
0x00432EF3  84c0                  test   al, al
0x00432EF5  0f8499000000          je     0x432f94  ; -> sub_432F94
0x00432EFB  8b4618                mov    eax, dword ptr [esi + 0x18]
0x00432EFE  a9feffffff            test   eax, 0xfffffffe
0x00432F03  0f8468010000          je     0x433071  ; -> sub_433071
0x00432F09  8b4618                mov    eax, dword ptr [esi + 0x18]
0x00432F0C  83e0fe                and    eax, 0xfffffffe
0x00432F0F  8b480c                mov    ecx, dword ptr [eax + 0xc]
0x00432F12  f6c101                test   cl, 1
0x00432F15  75c9                  jne    0x432ee0  ; -> sub_432EE0
0x00432F17  8b4304                mov    eax, dword ptr [ebx + 4]
0x00432F1A  8b0e                  mov    ecx, dword ptr [esi]
0x00432F1C  8b11                  mov    edx, dword ptr [ecx]
0x00432F1E  8b5220                mov    edx, dword ptr [edx + 0x20]
0x00432F21  50                    push   eax
0x00432F22  8b03                  mov    eax, dword ptr [ebx]
0x00432F24  50                    push   eax
0x00432F25  ffd2                  call   edx
0x00432F27  8b4618                mov    eax, dword ptr [esi + 0x18]
0x00432F2A  8b0e                  mov    ecx, dword ptr [esi]
0x00432F2C  8b11                  mov    edx, dword ptr [ecx]
0x00432F2E  8b5224                mov    edx, dword ptr [edx + 0x24]
0x00432F31  83e0fe                and    eax, 0xfffffffe
0x00432F34  8b7804                mov    edi, dword ptr [eax + 4]
0x00432F37  8b00                  mov    eax, dword ptr [eax]
0x00432F39  57                    push   edi
0x00432F3A  50                    push   eax
0x00432F3B  ffd2                  call   edx
0x00432F3D  8903                  mov    dword ptr [ebx], eax
0x00432F3F  8b44241c              mov    eax, dword ptr [esp + 0x1c]
0x00432F43  895304                mov    dword ptr [ebx + 4], edx
0x00432F46  8b7e18                mov    edi, dword ptr [esi + 0x18]
0x00432F49  8b28                  mov    ebp, dword ptr [eax]
0x00432F4B  83e7fe                and    edi, 0xfffffffe
0x00432F4E  83c708                add    edi, 8
0x00432F51  3b2f                  cmp    ebp, dword ptr [edi]
0x00432F53  7437                  je     0x432f8c  ; -> sub_432F8C
0x00432F55  85ed                  test   ebp, ebp
0x00432F57  741d                  je     0x432f76  ; -> sub_432F76
0x00432F59  8d4d08                lea    ecx, [ebp + 8]
0x00432F5C  51                    push   ecx
0x00432F5D  ff157c80a200          call   dword ptr [0xa2807c]
0x00432F63  85c0                  test   eax, eax
0x00432F65  750f                  jne    0x432f76  ; -> sub_432F76
0x00432F67  85ed                  test   ebp, ebp
0x00432F69  740b                  je     0x432f76  ; -> sub_432F76
0x00432F6B  8b5500                mov    edx, dword ptr [ebp]
0x00432F6E  8b02                  mov    eax, dword ptr [edx]
0x00432F70  6a01                  push   1
0x00432F72  8bcd                  mov    ecx, ebp
0x00432F74  ffd0                  call   eax
0x00432F76  8b3f                  mov    edi, dword ptr [edi]
0x00432F78  85ff                  test   edi, edi
0x00432F7A  8b4c241c              mov    ecx, dword ptr [esp + 0x1c]
0x00432F7E  8939                  mov    dword ptr [ecx], edi
0x00432F80  740a                  je     0x432f8c  ; -> sub_432F8C
0x00432F82  83c708                add    edi, 8
0x00432F85  57                    push   edi
0x00432F86  ff157880a200          call   dword ptr [0xa28078]
0x00432F8C  8b4e18                mov    ecx, dword ptr [esi + 0x18]
0x00432F8F  e998000000            jmp    0x43302c  ; -> sub_43302C
0x00432F94  8b5614                mov    edx, dword ptr [esi + 0x14]
0x00432F97  f7c2feffffff          test   edx, 0xfffffffe
0x00432F9D  0f84ce000000          je     0x433071  ; -> sub_433071
0x00432FA3  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00432FA6  83e0fe                and    eax, 0xfffffffe
0x00432FA9  8b400c                mov    eax, dword ptr [eax + 0xc]
0x00432FAC  a801                  test   al, 1
0x00432FAE  0f852cffffff          jne    0x432ee0  ; -> sub_432EE0
0x00432FB4  8b4304                mov    eax, dword ptr [ebx + 4]
0x00432FB7  8b0e                  mov    ecx, dword ptr [esi]
0x00432FB9  8b11                  mov    edx, dword ptr [ecx]
0x00432FBB  8b5220                mov    edx, dword ptr [edx + 0x20]
0x00432FBE  50                    push   eax
0x00432FBF  8b03                  mov    eax, dword ptr [ebx]
0x00432FC1  50                    push   eax
0x00432FC2  ffd2                  call   edx
0x00432FC4  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00432FC7  8b0e                  mov    ecx, dword ptr [esi]
0x00432FC9  8b11                  mov    edx, dword ptr [ecx]
0x00432FCB  8b5224                mov    edx, dword ptr [edx + 0x24]
0x00432FCE  83e0fe                and    eax, 0xfffffffe
0x00432FD1  8b7804                mov    edi, dword ptr [eax + 4]
0x00432FD4  8b00                  mov    eax, dword ptr [eax]
0x00432FD6  57                    push   edi
0x00432FD7  50                    push   eax
0x00432FD8  ffd2                  call   edx
0x00432FDA  8903                  mov    dword ptr [ebx], eax
0x00432FDC  8b44241c              mov    eax, dword ptr [esp + 0x1c]
0x00432FE0  895304                mov    dword ptr [ebx + 4], edx
0x00432FE3  8b7e14                mov    edi, dword ptr [esi + 0x14]
0x00432FE6  8b28                  mov    ebp, dword ptr [eax]
0x00432FE8  83e7fe                and    edi, 0xfffffffe
0x00432FEB  83c708                add    edi, 8
0x00432FEE  3b2f                  cmp    ebp, dword ptr [edi]
0x00432FF0  7437                  je     0x433029  ; -> sub_433029
0x00432FF2  85ed                  test   ebp, ebp
0x00432FF4  741d                  je     0x433013  ; -> sub_433013
0x00432FF6  8d4d08                lea    ecx, [ebp + 8]
0x00432FF9  51                    push   ecx
0x00432FFA  ff157c80a200          call   dword ptr [0xa2807c]
0x00433000  85c0                  test   eax, eax
0x00433002  750f                  jne    0x433013  ; -> sub_433013
0x00433004  85ed                  test   ebp, ebp
0x00433006  740b                  je     0x433013  ; -> sub_433013
0x00433008  8b5500                mov    edx, dword ptr [ebp]
0x0043300B  8b02                  mov    eax, dword ptr [edx]
0x0043300D  6a01                  push   1
0x0043300F  8bcd                  mov    ecx, ebp
0x00433011  ffd0                  call   eax
0x00433013  8b3f                  mov    edi, dword ptr [edi]
0x00433015  85ff                  test   edi, edi
0x00433017  8b4c241c              mov    ecx, dword ptr [esp + 0x1c]
0x0043301B  8939                  mov    dword ptr [ecx], edi
0x0043301D  740a                  je     0x433029  ; -> sub_433029
0x0043301F  83c708                add    edi, 8
0x00433022  57                    push   edi
0x00433023  ff157880a200          call   dword ptr [0xa28078]
0x00433029  8b4e14                mov    ecx, dword ptr [esi + 0x14]
0x0043302C  83e1fe                and    ecx, 0xfffffffe
0x0043302F  8b510c                mov    edx, dword ptr [ecx + 0xc]
0x00433032  b001                  mov    al, 1
0x00433034  84d0                  test   al, dl
0x00433036  743b                  je     0x433073  ; -> sub_433073
0x00433038  8b44241c              mov    eax, dword ptr [esp + 0x1c]
0x0043303C  8b38                  mov    edi, dword ptr [eax]
0x0043303E  85ff                  test   edi, edi
0x00433040  0f849afeffff          je     0x432ee0  ; -> sub_432EE0
0x00433046  8d4f08                lea    ecx, [edi + 8]
0x00433049  51                    push   ecx
0x0043304A  ff157c80a200          call   dword ptr [0xa2807c]
0x00433050  85c0                  test   eax, eax
0x00433052  750e                  jne    0x433062  ; -> sub_433062
0x00433054  85ff                  test   edi, edi
0x00433056  740a                  je     0x433062  ; -> sub_433062
0x00433058  8b17                  mov    edx, dword ptr [edi]
0x0043305A  8b02                  mov    eax, dword ptr [edx]
0x0043305C  6a01                  push   1
0x0043305E  8bcf                  mov    ecx, edi
0x00433060  ffd0                  call   eax
0x00433062  8b4c241c              mov    ecx, dword ptr [esp + 0x1c]
0x00433066  c70100000000          mov    dword ptr [ecx], 0
0x0043306C  e96ffeffff            jmp    0x432ee0  ; -> sub_432EE0
0x00433071  32c0                  xor    al, al
0x00433073  8b5604                mov    edx, dword ptr [esi + 4]
0x00433076  c70200000000          mov    dword ptr [edx], 0
0x0043307C  8b4e08                mov    ecx, dword ptr [esi + 8]
0x0043307F  5f                    pop    edi
0x00433080  c70100000000          mov    dword ptr [ecx], 0
0x00433086  8b560c                mov    edx, dword ptr [esi + 0xc]
0x00433089  5e                    pop    esi
0x0043308A  5d                    pop    ebp
0x0043308B  c70200000000          mov    dword ptr [edx], 0
0x00433091  5b                    pop    ebx
0x00433092  c20c00                ret    0xc
0x00433095  cc                    int3   
0x00433096  cc                    int3   
0x00433097  cc                    int3   
0x00433098  cc                    int3   
0x00433099  cc                    int3   
0x0043309A  cc                    int3   
0x0043309B  cc                    int3   
0x0043309C  cc                    int3   
0x0043309D  cc                    int3   
0x0043309E  cc                    int3   
0x0043309F  cc                    int3   
0x004330A0  51                    push   ecx
0x004330A1  53                    push   ebx
0x004330A2  57                    push   edi
0x004330A3  8bd9                  mov    ebx, ecx
0x004330A5  33ff                  xor    edi, edi
0x004330A7  393b                  cmp    dword ptr [ebx], edi
0x004330A9  7648                  jbe    0x4330f3  ; -> sub_4330F3
0x004330AB  56                    push   esi
0x004330AC  8d642400              lea    esp, [esp]
0x004330B0  8b4308                mov    eax, dword ptr [ebx + 8]
0x004330B3  8b4cf804              mov    ecx, dword ptr [eax + edi*8 + 4]
0x004330B7  894c240c              mov    dword ptr [esp + 0xc], ecx
0x004330BB  8b54240c              mov    edx, dword ptr [esp + 0xc]
0x004330BF  8954240c              mov    dword ptr [esp + 0xc], edx
0x004330C3  8b44240c              mov    eax, dword ptr [esp + 0xc]
0x004330C7  85c0                  test   eax, eax
0x004330C9  7420                  je     0x4330eb  ; -> sub_4330EB
0x004330CB  8b74240c              mov    esi, dword ptr [esp + 0xc]

