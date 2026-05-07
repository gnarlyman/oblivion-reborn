; ============================================================
; sub_432C30  (Crash 6: +0x44)
; VA: 0x00432C30  size: 0x180
; ============================================================
0x00432C30  6aff                  push   -1
0x00432C32  6828cc9a00            push   0x9acc28  ; -> sub_9ACC28
0x00432C37  64a100000000          mov    eax, dword ptr fs:[0]
0x00432C3D  50                    push   eax
0x00432C3E  83ec10                sub    esp, 0x10
0x00432C41  53                    push   ebx
0x00432C42  55                    push   ebp
0x00432C43  56                    push   esi
0x00432C44  57                    push   edi
0x00432C45  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x00432C4A  33c4                  xor    eax, esp
0x00432C4C  50                    push   eax
0x00432C4D  8d442424              lea    eax, [esp + 0x24]
0x00432C51  64a300000000          mov    dword ptr fs:[0], eax
0x00432C57  8bf1                  mov    esi, ecx
0x00432C59  8b06                  mov    eax, dword ptr [esi]
0x00432C5B  8b480c                mov    ecx, dword ptr [eax + 0xc]
0x00432C5E  8b542434              mov    edx, dword ptr [esp + 0x34]
0x00432C62  8d0491                lea    eax, [ecx + edx*4]
0x00432C65  89442420              mov    dword ptr [esp + 0x20], eax
0x00432C69  33db                  xor    ebx, ebx
0x00432C6B  8b4c2420              mov    ecx, dword ptr [esp + 0x20]
0x00432C6F  894e10                mov    dword ptr [esi + 0x10], ecx
0x00432C72  8bd1                  mov    edx, ecx
0x00432C74  8b02                  mov    eax, dword ptr [edx]
0x00432C76  894614                mov    dword ptr [esi + 0x14], eax
0x00432C79  8b4e14                mov    ecx, dword ptr [esi + 0x14]
0x00432C7C  8b5608                mov    edx, dword ptr [esi + 8]
0x00432C7F  83e1fe                and    ecx, 0xfffffffe
0x00432C82  890a                  mov    dword ptr [edx], ecx
0x00432C84  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00432C87  83e0fe                and    eax, 0xfffffffe
0x00432C8A  89442418              mov    dword ptr [esp + 0x18], eax
0x00432C8E  8b442418              mov    eax, dword ptr [esp + 0x18]
0x00432C92  83e0fe                and    eax, 0xfffffffe
0x00432C95  89442418              mov    dword ptr [esp + 0x18], eax
0x00432C99  8b4610                mov    eax, dword ptr [esi + 0x10]
0x00432C9C  8b00                  mov    eax, dword ptr [eax]
0x00432C9E  8b4c2418              mov    ecx, dword ptr [esp + 0x18]
0x00432CA2  3bc1                  cmp    eax, ecx
0x00432CA4  75c5                  jne    0x432c6b  ; -> sub_432C6B
0x00432CA6  8b5614                mov    edx, dword ptr [esi + 0x14]
0x00432CA9  f7c2feffffff          test   edx, 0xfffffffe
0x00432CAF  0f84d1010000          je     0x432e86  ; -> sub_432E86
0x00432CB5  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00432CB8  83e0fe                and    eax, 0xfffffffe
0x00432CBB  8b480c                mov    ecx, dword ptr [eax + 0xc]
0x00432CBE  894e18                mov    dword ptr [esi + 0x18], ecx
0x00432CC1  8b5618                mov    edx, dword ptr [esi + 0x18]
0x00432CC4  8b4604                mov    eax, dword ptr [esi + 4]
0x00432CC7  83e2fe                and    edx, 0xfffffffe
0x00432CCA  8910                  mov    dword ptr [eax], edx
0x00432CCC  8b4e18                mov    ecx, dword ptr [esi + 0x18]
0x00432CCF  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00432CD2  83e0fe                and    eax, 0xfffffffe
0x00432CD5  8b500c                mov    edx, dword ptr [eax + 0xc]
0x00432CD8  3bca                  cmp    ecx, edx
0x00432CDA  758f                  jne    0x432c6b  ; -> sub_432C6B
0x00432CDC  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00432CDF  83e0fe                and    eax, 0xfffffffe
0x00432CE2  8b4008                mov    eax, dword ptr [eax + 8]
0x00432CE5  3bc3                  cmp    eax, ebx
0x00432CE7  89442414              mov    dword ptr [esp + 0x14], eax
0x00432CEB  740a                  je     0x432cf7  ; -> sub_432CF7
0x00432CED  83c008                add    eax, 8
0x00432CF0  50                    push   eax
0x00432CF1  ff157880a200          call   dword ptr [0xa28078]
0x00432CF7  8b4614                mov    eax, dword ptr [esi + 0x14]
0x00432CFA  83e0fe                and    eax, 0xfffffffe
0x00432CFD  89442434              mov    dword ptr [esp + 0x34], eax
0x00432D01  8b442434              mov    eax, dword ptr [esp + 0x34]
0x00432D05  83e0fe                and    eax, 0xfffffffe
0x00432D08  89442434              mov    dword ptr [esp + 0x34], eax
0x00432D0C  8b4610                mov    eax, dword ptr [esi + 0x10]
0x00432D0F  8b00                  mov    eax, dword ptr [eax]
0x00432D11  8b4c2434              mov    ecx, dword ptr [esp + 0x34]
0x00432D15  3bc1                  cmp    eax, ecx
0x00432D17  895c242c              mov    dword ptr [esp + 0x2c], ebx
0x00432D1B  0f85fb000000          jne    0x432e1c  ; -> sub_432E1C
0x00432D21  8b5618                mov    edx, dword ptr [esi + 0x18]
0x00432D24  f6c201                test   dl, 1
0x00432D27  752c                  jne    0x432d55  ; -> sub_432D55
0x00432D29  8b7c2414              mov    edi, dword ptr [esp + 0x14]
0x00432D2D  8b442438              mov    eax, dword ptr [esp + 0x38]
0x00432D31  3b38                  cmp    edi, dword ptr [eax]
0x00432D33  0f8451010000          je     0x432e8a  ; -> sub_432E8A
0x00432D39  8b4e14                mov    ecx, dword ptr [esi + 0x14]
0x00432D3C  83e1fe                and    ecx, 0xfffffffe
0x00432D3F  83c10c                add    ecx, 0xc
0x00432D42  894e10                mov    dword ptr [esi + 0x10], ecx
0x00432D45  8b5614                mov    edx, dword ptr [esi + 0x14]
0x00432D48  8b460c                mov    eax, dword ptr [esi + 0xc]
0x00432D4B  83e2fe                and    edx, 0xfffffffe
0x00432D4E  8910                  mov    dword ptr [eax], edx
0x00432D50  e981000000            jmp    0x432dd6  ; -> sub_432DD6
0x00432D55  8b4618                mov    eax, dword ptr [esi + 0x18]
0x00432D58  83e0fe                and    eax, 0xfffffffe
0x00432D5B  8944241c              mov    dword ptr [esp + 0x1c], eax
0x00432D5F  8b4c241c              mov    ecx, dword ptr [esp + 0x1c]
0x00432D63  8b7c2434              mov    edi, dword ptr [esp + 0x34]
0x00432D67  83e1fe                and    ecx, 0xfffffffe
0x00432D6A  894c241c              mov    dword ptr [esp + 0x1c], ecx
0x00432D6E  8b44241c              mov    eax, dword ptr [esp + 0x1c]
0x00432D72  8b4e10                mov    ecx, dword ptr [esi + 0x10]
0x00432D75  57                    push   edi
0x00432D76  50                    push   eax
0x00432D77  51                    push   ecx
0x00432D78  ff153c81a200          call   dword ptr [0xa2813c]
0x00432D7E  3bc7                  cmp    eax, edi
0x00432D80  0f94c0                sete   al
0x00432D83  3ac3                  cmp    al, bl
0x00432D85  0f84c6000000          je     0x432e51  ; -> sub_432E51
0x00432D8B  8b7e14                mov    edi, dword ptr [esi + 0x14]
0x00432D8E  83e7fe                and    edi, 0xfffffffe
0x00432D91  8b6f08                mov    ebp, dword ptr [edi + 8]
0x00432D94  3beb                  cmp    ebp, ebx
0x00432D96  7420                  je     0x432db8  ; -> sub_432DB8
0x00432D98  8d5508                lea    edx, [ebp + 8]
0x00432D9B  52                    push   edx
0x00432D9C  ff157c80a200          call   dword ptr [0xa2807c]
0x00432DA2  85c0                  test   eax, eax
0x00432DA4  750f                  jne    0x432db5  ; -> sub_432DB5
0x00432DA6  3beb                  cmp    ebp, ebx
0x00432DA8  740b                  je     0x432db5  ; -> sub_432DB5
0x00432DAA  8b4500                mov    eax, dword ptr [ebp]
0x00432DAD  8b10                  mov    edx, dword ptr [eax]
