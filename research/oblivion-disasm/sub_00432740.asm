ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x00432740
; VA: 0x00432740  size: 0x200
; ============================================================
0x00432740  83ec0c                sub    esp, 0xc
0x00432743  53                    push   ebx
0x00432744  55                    push   ebp
0x00432745  57                    push   edi
0x00432746  8bf9                  mov    edi, ecx
0x00432748  8b07                  mov    eax, dword ptr [edi]
0x0043274A  8b4814                mov    ecx, dword ptr [eax + 0x14]
0x0043274D  8b29                  mov    ebp, dword ptr [ecx]
0x0043274F  03ed                  add    ebp, ebp
0x00432751  33c9                  xor    ecx, ecx
0x00432753  8bc5                  mov    eax, ebp
0x00432755  ba04000000            mov    edx, 4
0x0043275A  f7e2                  mul    edx
0x0043275C  0f90c1                seto   cl
0x0043275F  f7d9                  neg    ecx
0x00432761  0bc8                  or     ecx, eax
0x00432763  51                    push   ecx
0x00432764  e897f7fcff            call   0x401f00  ; -> sub_401F00
0x00432769  8b0f                  mov    ecx, dword ptr [edi]
0x0043276B  8b5110                mov    edx, dword ptr [ecx + 0x10]
0x0043276E  8bd8                  mov    ebx, eax
0x00432770  8d04ad00000000        lea    eax, [ebp*4]
0x00432777  50                    push   eax
0x00432778  52                    push   edx
0x00432779  53                    push   ebx
0x0043277A  895c2424              mov    dword ptr [esp + 0x24], ebx
0x0043277E  e83deb5400            call   0x9812c0  ; -> sub_9812C0
0x00432783  33c9                  xor    ecx, ecx
0x00432785  83c410                add    esp, 0x10
0x00432788  394f10                cmp    dword ptr [edi + 0x10], ecx
0x0043278B  894c240c              mov    dword ptr [esp + 0xc], ecx
0x0043278F  894c2410              mov    dword ptr [esp + 0x10], ecx
0x00432793  7456                  je     0x4327eb  ; -> sub_4327EB
0x00432795  56                    push   esi
0x00432796  8b7710                mov    esi, dword ptr [edi + 0x10]
0x00432799  8b4604                mov    eax, dword ptr [esi + 4]
0x0043279C  894710                mov    dword ptr [edi + 0x10], eax
0x0043279F  33c0                  xor    eax, eax
0x004327A1  3be9                  cmp    ebp, ecx
0x004327A3  760c                  jbe    0x4327b1  ; -> sub_4327B1
0x004327A5  3b3483                cmp    esi, dword ptr [ebx + eax*4]
0x004327A8  745f                  je     0x432809  ; -> sub_432809
0x004327AA  83c001                add    eax, 1
0x004327AD  3bc5                  cmp    eax, ebp
0x004327AF  72f4                  jb     0x4327a5  ; -> sub_4327A5
0x004327B1  8bd9                  mov    ebx, ecx
0x004327B3  3bd9                  cmp    ebx, ecx
0x004327B5  894e04                mov    dword ptr [esi + 4], ecx
0x004327B8  741c                  je     0x4327d6  ; -> sub_4327D6
0x004327BA  8d4308                lea    eax, [ebx + 8]
0x004327BD  50                    push   eax
0x004327BE  ff157c80a200          call   dword ptr [0xa2807c]
0x004327C4  85c0                  test   eax, eax
0x004327C6  750e                  jne    0x4327d6  ; -> sub_4327D6
0x004327C8  85db                  test   ebx, ebx
0x004327CA  740a                  je     0x4327d6  ; -> sub_4327D6
0x004327CC  8b13                  mov    edx, dword ptr [ebx]
0x004327CE  8b02                  mov    eax, dword ptr [edx]
0x004327D0  6a01                  push   1
0x004327D2  8bcb                  mov    ecx, ebx
0x004327D4  ffd0                  call   eax
0x004327D6  56                    push   esi
0x004327D7  e844f7fcff            call   0x401f20  ; -> sub_401F20
0x004327DC  8b5c241c              mov    ebx, dword ptr [esp + 0x1c]
0x004327E0  83c404                add    esp, 4
0x004327E3  33c9                  xor    ecx, ecx
0x004327E5  394f10                cmp    dword ptr [edi + 0x10], ecx
0x004327E8  75ac                  jne    0x432796  ; -> sub_432796
0x004327EA  5e                    pop    esi
0x004327EB  53                    push   ebx
0x004327EC  e82ff7fcff            call   0x401f20  ; -> sub_401F20
0x004327F1  8b4c2410              mov    ecx, dword ptr [esp + 0x10]
0x004327F5  8b542414              mov    edx, dword ptr [esp + 0x14]
0x004327F9  83c404                add    esp, 4
0x004327FC  894f10                mov    dword ptr [edi + 0x10], ecx
0x004327FF  89570c                mov    dword ptr [edi + 0xc], edx
0x00432802  5f                    pop    edi
0x00432803  5d                    pop    ebp
0x00432804  5b                    pop    ebx
0x00432805  83c40c                add    esp, 0xc
0x00432808  c3                    ret    
0x00432809  8b542410              mov    edx, dword ptr [esp + 0x10]
0x0043280D  8344241401            add    dword ptr [esp + 0x14], 1
0x00432812  895604                mov    dword ptr [esi + 4], edx
0x00432815  89742410              mov    dword ptr [esp + 0x10], esi
0x00432819  ebca                  jmp    0x4327e5  ; -> sub_4327E5
0x0043281B  cc                    int3   
0x0043281C  cc                    int3   
0x0043281D  cc                    int3   
0x0043281E  cc                    int3   
0x0043281F  cc                    int3   
0x00432820  8b442408              mov    eax, dword ptr [esp + 8]
0x00432824  53                    push   ebx
0x00432825  8b5c2408              mov    ebx, dword ptr [esp + 8]
0x00432829  55                    push   ebp
0x0043282A  56                    push   esi
0x0043282B  8b7310                mov    esi, dword ptr [ebx + 0x10]
0x0043282E  57                    push   edi
0x0043282F  8b7b14                mov    edi, dword ptr [ebx + 0x14]
0x00432832  6a00                  push   0
0x00432834  99                    cdq    
0x00432835  6800000100            push   0x10000
0x0043283A  52                    push   edx
0x0043283B  50                    push   eax
0x0043283C  8be9                  mov    ebp, ecx
0x0043283E  81e6ffff00ff          and    esi, 0xff00ffff
0x00432844  e817145500            call   0x983c60  ; -> sub_983C60
0x00432849  03f0                  add    esi, eax
0x0043284B  13fa                  adc    edi, edx
0x0043284D  57                    push   edi
0x0043284E  56                    push   esi
0x0043284F  53                    push   ebx
0x00432850  8bcd                  mov    ecx, ebp
0x00432852  e8c9f9ffff            call   0x432220  ; -> sub_432220
0x00432857  5f                    pop    edi
0x00432858  5e                    pop    esi
0x00432859  5d                    pop    ebp
0x0043285A  5b                    pop    ebx
0x0043285B  c20800                ret    8
0x0043285E  cc                    int3   
0x0043285F  cc                    int3   
0x00432860  e84bfaffff            call   0x4322b0  ; -> sub_4322B0
0x00432865  84c0                  test   al, al
0x00432867  7421                  je     0x43288a  ; IOManager::sub_432820 (Unk_07 callback)+0x6a
0x00432869  a11c3ab300            mov    eax, dword ptr [0xb33a1c]  ; g_modelLoader (ModelLoader**)
0x0043286E  56                    push   esi
0x0043286F  8b7018                mov    esi, dword ptr [eax + 0x18]
0x00432872  57                    push   edi
0x00432873  8b7e08                mov    edi, dword ptr [esi + 8]
0x00432876  ff158c80a200          call   dword ptr [0xa2808c]
0x0043287C  3bf8                  cmp    edi, eax
0x0043287E  5f                    pop    edi
0x0043287F  7408                  je     0x432889  ; IOManager::sub_432820 (Unk_07 callback)+0x69
0x00432881  8bce                  mov    ecx, esi
0x00432883  5e                    pop    esi
0x00432884  e9c7f6ffff            jmp    0x431f50  ; -> sub_431F50
0x00432889  5e                    pop    esi
0x0043288A  c3                    ret    
0x0043288B  cc                    int3   
0x0043288C  cc                    int3   
0x0043288D  cc                    int3   
0x0043288E  cc                    int3   
0x0043288F  cc                    int3   
0x00432890  e8bbfaffff            call   0x432350  ; -> sub_432350
0x00432895  84c0                  test   al, al
0x00432897  740d                  je     0x4328a6  ; -> sub_4328A6
0x00432899  a11c3ab300            mov    eax, dword ptr [0xb33a1c]  ; g_modelLoader (ModelLoader**)
0x0043289E  8b4818                mov    ecx, dword ptr [eax + 0x18]
0x004328A1  e9faf6ffff            jmp    0x431fa0  ; -> sub_431FA0
0x004328A6  c3                    ret    
0x004328A7  cc                    int3   
0x004328A8  cc                    int3   
0x004328A9  cc                    int3   
0x004328AA  cc                    int3   
0x004328AB  cc                    int3   
0x004328AC  cc                    int3   
0x004328AD  cc                    int3   
0x004328AE  cc                    int3   
0x004328AF  cc                    int3   
0x004328B0  83ec0c                sub    esp, 0xc
0x004328B3  53                    push   ebx
0x004328B4  55                    push   ebp
0x004328B5  57                    push   edi
0x004328B6  8bf9                  mov    edi, ecx
0x004328B8  8b07                  mov    eax, dword ptr [edi]
0x004328BA  8b4814                mov    ecx, dword ptr [eax + 0x14]
0x004328BD  8b01                  mov    eax, dword ptr [ecx]
0x004328BF  8d2c40                lea    ebp, [eax + eax*2]
0x004328C2  33c9                  xor    ecx, ecx
0x004328C4  8bc5                  mov    eax, ebp
0x004328C6  ba04000000            mov    edx, 4
0x004328CB  f7e2                  mul    edx
0x004328CD  0f90c1                seto   cl
0x004328D0  f7d9                  neg    ecx
0x004328D2  0bc8                  or     ecx, eax
0x004328D4  51                    push   ecx
0x004328D5  e826f6fcff            call   0x401f00  ; -> sub_401F00
0x004328DA  8b0f                  mov    ecx, dword ptr [edi]
0x004328DC  8b5104                mov    edx, dword ptr [ecx + 4]
0x004328DF  8bd8                  mov    ebx, eax
0x004328E1  8d04ad00000000        lea    eax, [ebp*4]
0x004328E8  50                    push   eax
0x004328E9  52                    push   edx
0x004328EA  53                    push   ebx
0x004328EB  895c2424              mov    dword ptr [esp + 0x24], ebx
0x004328EF  e8cce95400            call   0x9812c0  ; -> sub_9812C0
0x004328F4  33c9                  xor    ecx, ecx
0x004328F6  83c410                add    esp, 0x10
0x004328F9  394f1c                cmp    dword ptr [edi + 0x1c], ecx
0x004328FC  894c240c              mov    dword ptr [esp + 0xc], ecx
0x00432900  894c2410              mov    dword ptr [esp + 0x10], ecx
0x00432904  7467                  je     0x43296d  ; -> sub_43296D
0x00432906  56                    push   esi
0x00432907  8b771c                mov    esi, dword ptr [edi + 0x1c]
0x0043290A  8b4608                mov    eax, dword ptr [esi + 8]
0x0043290D  89471c                mov    dword ptr [edi + 0x1c], eax
0x00432910  33c0                  xor    eax, eax
0x00432912  3be9                  cmp    ebp, ecx
0x00432914  760c                  jbe    0x432922  ; -> sub_432922
0x00432916  3b3483                cmp    esi, dword ptr [ebx + eax*4]
0x00432919  7470                  je     0x43298b  ; -> sub_43298B
0x0043291B  83c001                add    eax, 1
0x0043291E  3bc5                  cmp    eax, ebp
0x00432920  72f4                  jb     0x432916  ; -> sub_432916
0x00432922  8b5604                mov    edx, dword ptr [esi + 4]
0x00432925  894e08                mov    dword ptr [esi + 8], ecx
0x00432928  8b0f                  mov    ecx, dword ptr [edi]
0x0043292A  8b01                  mov    eax, dword ptr [ecx]
0x0043292C  8b4020                mov    eax, dword ptr [eax + 0x20]
0x0043292F  52                    push   edx
0x00432930  8b16                  mov    edx, dword ptr [esi]
0x00432932  52                    push   edx
0x00432933  ffd0                  call   eax
0x00432935  8b5e08                mov    ebx, dword ptr [esi + 8]
0x00432938  85db                  test   ebx, ebx
0x0043293A  741c                  je     0x432958  ; -> sub_432958
0x0043293C  8d4b08                lea    ecx, [ebx + 8]
0x0043293F  51                    push   ecx

