ImageBase: 0x00400000
; ============================================================
; adhoc dump of 0x0054CAF0
; VA: 0x0054CAF0  size: 0x600
; ============================================================
0x0054CAF0  6aff                  push   -1
0x0054CAF2  68e2b89b00            push   0x9bb8e2  ; -> sub_9BB8E2
0x0054CAF7  64a100000000          mov    eax, dword ptr fs:[0]
0x0054CAFD  50                    push   eax
0x0054CAFE  51                    push   ecx
0x0054CAFF  53                    push   ebx
0x0054CB00  56                    push   esi
0x0054CB01  57                    push   edi
0x0054CB02  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0054CB07  33c4                  xor    eax, esp
0x0054CB09  50                    push   eax
0x0054CB0A  8d442414              lea    eax, [esp + 0x14]
0x0054CB0E  64a300000000          mov    dword ptr fs:[0], eax
0x0054CB14  8bf1                  mov    esi, ecx
0x0054CB16  89742410              mov    dword ptr [esp + 0x10], esi
0x0054CB1A  e831481d00            call   0x721350  ; -> sub_721350
0x0054CB1F  6a0d                  push   0xd
0x0054CB21  33db                  xor    ebx, ebx
0x0054CB23  6a01                  push   1
0x0054CB25  8d4e10                lea    ecx, [esi + 0x10]
0x0054CB28  895c2424              mov    dword ptr [esp + 0x24], ebx
0x0054CB2C  c7064c42a600          mov    dword ptr [esi], 0xa6424c  ; -> sub_A6424C
0x0054CB32  e8c91e0000            call   0x54ea00  ; -> sub_54EA00
0x0054CB37  bf3c42a600            mov    edi, 0xa6423c  ; -> sub_A6423C
0x0054CB3C  895e30                mov    dword ptr [esi + 0x30], ebx
0x0054CB3F  895e28                mov    dword ptr [esi + 0x28], ebx
0x0054CB42  895e2c                mov    dword ptr [esi + 0x2c], ebx
0x0054CB45  897e24                mov    dword ptr [esi + 0x24], edi
0x0054CB48  6a0d                  push   0xd
0x0054CB4A  6a01                  push   1
0x0054CB4C  8d4e34                lea    ecx, [esi + 0x34]
0x0054CB4F  c644242402            mov    byte ptr [esp + 0x24], 2
0x0054CB54  e8a71e0000            call   0x54ea00  ; -> sub_54EA00
0x0054CB59  6a0d                  push   0xd
0x0054CB5B  6a01                  push   1
0x0054CB5D  8d4e48                lea    ecx, [esi + 0x48]
0x0054CB60  c644242403            mov    byte ptr [esp + 0x24], 3
0x0054CB65  e8961e0000            call   0x54ea00  ; -> sub_54EA00
0x0054CB6A  895e68                mov    dword ptr [esi + 0x68], ebx
0x0054CB6D  895e60                mov    dword ptr [esi + 0x60], ebx
0x0054CB70  895e64                mov    dword ptr [esi + 0x64], ebx
0x0054CB73  897e5c                mov    dword ptr [esi + 0x5c], edi
0x0054CB76  6a11                  push   0x11
0x0054CB78  6a02                  push   2
0x0054CB7A  8d4e6c                lea    ecx, [esi + 0x6c]
0x0054CB7D  c644242405            mov    byte ptr [esp + 0x24], 5
0x0054CB82  e8791e0000            call   0x54ea00  ; -> sub_54EA00
0x0054CB87  899e8c000000          mov    dword ptr [esi + 0x8c], ebx
0x0054CB8D  899e84000000          mov    dword ptr [esi + 0x84], ebx
0x0054CB93  899e88000000          mov    dword ptr [esi + 0x88], ebx
0x0054CB99  89be80000000          mov    dword ptr [esi + 0x80], edi
0x0054CB9F  6a11                  push   0x11
0x0054CBA1  6a02                  push   2
0x0054CBA3  8d8e90000000          lea    ecx, [esi + 0x90]
0x0054CBA9  c644242407            mov    byte ptr [esp + 0x24], 7
0x0054CBAE  e84d1e0000            call   0x54ea00  ; -> sub_54EA00
0x0054CBB3  6a11                  push   0x11
0x0054CBB5  6a02                  push   2
0x0054CBB7  8d8ea4000000          lea    ecx, [esi + 0xa4]
0x0054CBBD  c644242408            mov    byte ptr [esp + 0x24], 8
0x0054CBC2  e8391e0000            call   0x54ea00  ; -> sub_54EA00
0x0054CBC7  899ec4000000          mov    dword ptr [esi + 0xc4], ebx
0x0054CBCD  899ebc000000          mov    dword ptr [esi + 0xbc], ebx
0x0054CBD3  899ec0000000          mov    dword ptr [esi + 0xc0], ebx
0x0054CBD9  89beb8000000          mov    dword ptr [esi + 0xb8], edi
0x0054CBDF  6a10                  push   0x10
0x0054CBE1  53                    push   ebx
0x0054CBE2  8d8ec8000000          lea    ecx, [esi + 0xc8]
0x0054CBE8  c64424240a            mov    byte ptr [esp + 0x24], 0xa
0x0054CBED  e80e1e0000            call   0x54ea00  ; -> sub_54EA00
0x0054CBF2  899ee8000000          mov    dword ptr [esi + 0xe8], ebx
0x0054CBF8  899ee0000000          mov    dword ptr [esi + 0xe0], ebx
0x0054CBFE  899ee4000000          mov    dword ptr [esi + 0xe4], ebx
0x0054CC04  89bedc000000          mov    dword ptr [esi + 0xdc], edi
0x0054CC0A  6a10                  push   0x10
0x0054CC0C  53                    push   ebx
0x0054CC0D  8d8eec000000          lea    ecx, [esi + 0xec]
0x0054CC13  c64424240c            mov    byte ptr [esp + 0x24], 0xc
0x0054CC18  e8e31d0000            call   0x54ea00  ; -> sub_54EA00
0x0054CC1D  6a10                  push   0x10
0x0054CC1F  c64424200d            mov    byte ptr [esp + 0x20], 0xd
0x0054CC24  53                    push   ebx
0x0054CC25  8d8e00010000          lea    ecx, [esi + 0x100]
0x0054CC2B  e8d01d0000            call   0x54ea00  ; -> sub_54EA00
0x0054CC30  899e20010000          mov    dword ptr [esi + 0x120], ebx
0x0054CC36  899e18010000          mov    dword ptr [esi + 0x118], ebx
0x0054CC3C  899e1c010000          mov    dword ptr [esi + 0x11c], ebx
0x0054CC42  89be14010000          mov    dword ptr [esi + 0x114], edi
0x0054CC48  6a01                  push   1
0x0054CC4A  6a03                  push   3
0x0054CC4C  8d8e24010000          lea    ecx, [esi + 0x124]
0x0054CC52  c64424240f            mov    byte ptr [esp + 0x24], 0xf
0x0054CC57  e8a41d0000            call   0x54ea00  ; -> sub_54EA00
0x0054CC5C  899e44010000          mov    dword ptr [esi + 0x144], ebx
0x0054CC62  899e3c010000          mov    dword ptr [esi + 0x13c], ebx
0x0054CC68  899e40010000          mov    dword ptr [esi + 0x140], ebx
0x0054CC6E  89be38010000          mov    dword ptr [esi + 0x138], edi
0x0054CC74  6a01                  push   1
0x0054CC76  6a03                  push   3
0x0054CC78  8d8e48010000          lea    ecx, [esi + 0x148]
0x0054CC7E  c644242411            mov    byte ptr [esp + 0x24], 0x11
0x0054CC83  e8781d0000            call   0x54ea00  ; -> sub_54EA00
0x0054CC88  6a01                  push   1
0x0054CC8A  6a03                  push   3
0x0054CC8C  8d8e5c010000          lea    ecx, [esi + 0x15c]
0x0054CC92  c644242412            mov    byte ptr [esp + 0x24], 0x12
0x0054CC97  e8641d0000            call   0x54ea00  ; -> sub_54EA00
0x0054CC9C  d9ee                  fldz   
0x0054CC9E  895e0c                mov    dword ptr [esi + 0xc], ebx
0x0054CCA1  a1a8f9b300            mov    eax, dword ptr [0xb3f9a8]
0x0054CCA6  898670010000          mov    dword ptr [esi + 0x170], eax
0x0054CCAC  8b0dacf9b300          mov    ecx, dword ptr [0xb3f9ac]
0x0054CCB2  898e74010000          mov    dword ptr [esi + 0x174], ecx
0x0054CCB8  8b15b0f9b300          mov    edx, dword ptr [0xb3f9b0]
0x0054CCBE  d996dc010000          fst    dword ptr [esi + 0x1dc]
0x0054CCC4  d996c4010000          fst    dword ptr [esi + 0x1c4]
0x0054CCCA  899678010000          mov    dword ptr [esi + 0x178], edx
0x0054CCD0  d996c8010000          fst    dword ptr [esi + 0x1c8]
0x0054CCD6  889ed7010000          mov    byte ptr [esi + 0x1d7], bl
0x0054CCDC  d9968c010000          fst    dword ptr [esi + 0x18c]
0x0054CCE2  889ed4010000          mov    byte ptr [esi + 0x1d4], bl
0x0054CCE8  d99690010000          fst    dword ptr [esi + 0x190]
0x0054CCEE  889ed8010000          mov    byte ptr [esi + 0x1d8], bl
0x0054CCF4  d99684010000          fst    dword ptr [esi + 0x184]
0x0054CCFA  889eda010000          mov    byte ptr [esi + 0x1da], bl
0x0054CD00  d99688010000          fst    dword ptr [esi + 0x188]
0x0054CD06  889edb010000          mov    byte ptr [esi + 0x1db], bl
0x0054CD0C  d9967c010000          fst    dword ptr [esi + 0x17c]
0x0054CD12  899ec0010000          mov    dword ptr [esi + 0x1c0], ebx
0x0054CD18  d99680010000          fst    dword ptr [esi + 0x180]
0x0054CD1E  899e94010000          mov    dword ptr [esi + 0x194], ebx
0x0054CD24  d9969c010000          fst    dword ptr [esi + 0x19c]
0x0054CD2A  c6869801000001        mov    byte ptr [esi + 0x198], 1
0x0054CD31  d996a0010000          fst    dword ptr [esi + 0x1a0]
0x0054CD37  c686d501000001        mov    byte ptr [esi + 0x1d5], 1
0x0054CD3E  d996a4010000          fst    dword ptr [esi + 0x1a4]
0x0054CD44  889ed9010000          mov    byte ptr [esi + 0x1d9], bl
0x0054CD4A  d996a8010000          fst    dword ptr [esi + 0x1a8]
0x0054CD50  d996ac010000          fst    dword ptr [esi + 0x1ac]
0x0054CD56  d996b0010000          fst    dword ptr [esi + 0x1b0]
0x0054CD5C  d996b4010000          fst    dword ptr [esi + 0x1b4]
0x0054CD62  d996b8010000          fst    dword ptr [esi + 0x1b8]
0x0054CD68  d99ebc010000          fstp   dword ptr [esi + 0x1bc]
0x0054CD6E  a1a8f9b300            mov    eax, dword ptr [0xb3f9a8]
0x0054CD73  898670010000          mov    dword ptr [esi + 0x170], eax
0x0054CD79  8b0dacf9b300          mov    ecx, dword ptr [0xb3f9ac]
0x0054CD7F  898e74010000          mov    dword ptr [esi + 0x174], ecx
0x0054CD85  8b15b0f9b300          mov    edx, dword ptr [0xb3f9b0]
0x0054CD8B  899678010000          mov    dword ptr [esi + 0x178], edx
0x0054CD91  8bc6                  mov    eax, esi
0x0054CD93  8b4c2414              mov    ecx, dword ptr [esp + 0x14]
0x0054CD97  64890d00000000        mov    dword ptr fs:[0], ecx
0x0054CD9E  59                    pop    ecx
0x0054CD9F  5f                    pop    edi
0x0054CDA0  5e                    pop    esi
0x0054CDA1  5b                    pop    ebx
0x0054CDA2  83c410                add    esp, 0x10
0x0054CDA5  c3                    ret    
0x0054CDA6  cc                    int3   
0x0054CDA7  cc                    int3   
0x0054CDA8  cc                    int3   
0x0054CDA9  cc                    int3   
0x0054CDAA  cc                    int3   
0x0054CDAB  cc                    int3   
0x0054CDAC  cc                    int3   
0x0054CDAD  cc                    int3   
0x0054CDAE  cc                    int3   
0x0054CDAF  cc                    int3   
0x0054CDB0  56                    push   esi
0x0054CDB1  8bf1                  mov    esi, ecx
0x0054CDB3  e828efffff            call   0x54bce0  ; -> sub_54BCE0
0x0054CDB8  f644240801            test   byte ptr [esp + 8], 1
0x0054CDBD  7409                  je     0x54cdc8  ; -> sub_54CDC8
0x0054CDBF  56                    push   esi
0x0054CDC0  e85b51ebff            call   0x401f20  ; -> sub_401F20
0x0054CDC5  83c404                add    esp, 4
0x0054CDC8  8bc6                  mov    eax, esi
0x0054CDCA  5e                    pop    esi
0x0054CDCB  c20400                ret    4
0x0054CDCE  cc                    int3   
0x0054CDCF  cc                    int3   
0x0054CDD0  6aff                  push   -1
0x0054CDD2  680bb99b00            push   0x9bb90b  ; -> sub_9BB90B
0x0054CDD7  64a100000000          mov    eax, dword ptr fs:[0]
0x0054CDDD  50                    push   eax
0x0054CDDE  81ec3c010000          sub    esp, 0x13c
0x0054CDE4  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0054CDE9  33c4                  xor    eax, esp
0x0054CDEB  89842438010000        mov    dword ptr [esp + 0x138], eax
0x0054CDF2  53                    push   ebx
0x0054CDF3  55                    push   ebp
0x0054CDF4  56                    push   esi
0x0054CDF5  57                    push   edi
0x0054CDF6  a1ac0ab300            mov    eax, dword ptr [0xb30aac]
0x0054CDFB  33c4                  xor    eax, esp
0x0054CDFD  50                    push   eax
0x0054CDFE  8d842450010000        lea    eax, [esp + 0x150]
0x0054CE05  64a300000000          mov    dword ptr fs:[0], eax
0x0054CE0B  6a00                  push   0
0x0054CE0D  8bf1                  mov    esi, ecx
0x0054CE0F  83cbff                or     ebx, 0xffffffff
0x0054CE12  53                    push   ebx
0x0054CE13  8d4c2428              lea    ecx, [esp + 0x28]
0x0054CE17  e8e41b0000            call   0x54ea00  ; -> sub_54EA00
0x0054CE1C  8b842460010000        mov    eax, dword ptr [esp + 0x160]
0x0054CE23  85c0                  test   eax, eax
0x0054CE25  c784245801000000000000  mov    dword ptr [esp + 0x158], 0
0x0054CE30  0f8413010000          je     0x54cf49  ; -> sub_54CF49
0x0054CE36  8d542448              lea    edx, [esp + 0x48]
0x0054CE3A  2bd0                  sub    edx, eax
0x0054CE3C  8d642400              lea    esp, [esp]
0x0054CE40  8a08                  mov    cl, byte ptr [eax]
0x0054CE42  880c02                mov    byte ptr [edx + eax], cl
0x0054CE45  83c001                add    eax, 1
0x0054CE48  84c9                  test   cl, cl
0x0054CE4A  75f4                  jne    0x54ce40  ; -> sub_54CE40
0x0054CE4C  807c244820            cmp    byte ptr [esp + 0x48], 0x20
0x0054CE51  8d7c2448              lea    edi, [esp + 0x48]
0x0054CE55  7508                  jne    0x54ce5f  ; -> sub_54CE5F
0x0054CE57  83c701                add    edi, 1
0x0054CE5A  803f20                cmp    byte ptr [edi], 0x20
0x0054CE5D  74f8                  je     0x54ce57  ; -> sub_54CE57
0x0054CE5F  6a20                  push   0x20
0x0054CE61  57                    push   edi
0x0054CE62  e859604300            call   0x982ec0  ; -> sub_982EC0
0x0054CE67  8be8                  mov    ebp, eax
0x0054CE69  83c408                add    esp, 8
0x0054CE6C  85ed                  test   ebp, ebp
0x0054CE6E  0f84d5000000          je     0x54cf49  ; -> sub_54CF49
0x0054CE74  682c43a600            push   0xa6432c  ; -> sub_A6432C
0x0054CE79  57                    push   edi
0x0054CE7A  c6450000              mov    byte ptr [ebp], 0
0x0054CE7E  e8aa574300            call   0x98262d  ; -> sub_98262D
0x0054CE83  83c408                add    esp, 8
0x0054CE86  85c0                  test   eax, eax
0x0054CE88  0f851d010000          jne    0x54cfab  ; -> sub_54CFAB
0x0054CE8E  807d0120              cmp    byte ptr [ebp + 1], 0x20
0x0054CE92  8d7d01                lea    edi, [ebp + 1]
0x0054CE95  7508                  jne    0x54ce9f  ; -> sub_54CE9F
0x0054CE97  83c701                add    edi, 1
0x0054CE9A  803f20                cmp    byte ptr [edi], 0x20
0x0054CE9D  74f8                  je     0x54ce97  ; -> sub_54CE97
0x0054CE9F  6a20                  push   0x20
0x0054CEA1  57                    push   edi
0x0054CEA2  e819604300            call   0x982ec0  ; -> sub_982EC0
0x0054CEA7  8be8                  mov    ebp, eax
0x0054CEA9  83c408                add    esp, 8
0x0054CEAC  85ed                  test   ebp, ebp
0x0054CEAE  0f8495000000          je     0x54cf49  ; -> sub_54CF49
0x0054CEB4  57                    push   edi
0x0054CEB5  c6450000              mov    byte ptr [ebp], 0
0x0054CEB9  e882250000            call   0x54f440  ; -> sub_54F440
0x0054CEBE  8d7d01                lea    edi, [ebp + 1]
0x0054CEC1  83c404                add    esp, 4
0x0054CEC4  89442438              mov    dword ptr [esp + 0x38], eax
0x0054CEC8  803f20                cmp    byte ptr [edi], 0x20
0x0054CECB  750b                  jne    0x54ced8  ; -> sub_54CED8
0x0054CECD  8d4900                lea    ecx, [ecx]
0x0054CED0  83c701                add    edi, 1
0x0054CED3  803f20                cmp    byte ptr [edi], 0x20
0x0054CED6  74f8                  je     0x54ced0  ; -> sub_54CED0
0x0054CED8  6a20                  push   0x20
0x0054CEDA  57                    push   edi
0x0054CEDB  e8e05f4300            call   0x982ec0  ; -> sub_982EC0
0x0054CEE0  83c408                add    esp, 8
0x0054CEE3  85c0                  test   eax, eax
0x0054CEE5  7428                  je     0x54cf0f  ; -> sub_54CF0F
0x0054CEE7  57                    push   edi
0x0054CEE8  e8c5904300            call   0x985fb2  ; -> sub_985FB2
0x0054CEED  d95c2418              fstp   dword ptr [esp + 0x18]
0x0054CEF1  d9ee                  fldz   
0x0054CEF3  83c404                add    esp, 4
0x0054CEF6  d9442414              fld    dword ptr [esp + 0x14]
0x0054CEFA  d8d1                  fcom   st(1)
0x0054CEFC  dfe0                  fnstsw ax
0x0054CEFE  f6c405                test   ah, 5
0x0054CF01  7a1c                  jp     0x54cf1f  ; -> sub_54CF1F
0x0054CF03  ddd8                  fstp   st(0)
0x0054CF05  d95c2414              fstp   dword ptr [esp + 0x14]
0x0054CF09  d9442414              fld    dword ptr [esp + 0x14]
0x0054CF0D  eb12                  jmp    0x54cf21  ; -> sub_54CF21
0x0054CF0F  d9055cd6a300          fld    dword ptr [0xa3d65c]
0x0054CF15  d95c2414              fstp   dword ptr [esp + 0x14]
0x0054CF19  d9442414              fld    dword ptr [esp + 0x14]
0x0054CF1D  eb02                  jmp    0x54cf21  ; -> sub_54CF21
0x0054CF1F  ddd9                  fstp   st(1)
0x0054CF21  8b442438              mov    eax, dword ptr [esp + 0x38]
0x0054CF25  83f803                cmp    eax, 3
0x0054CF28  777d                  ja     0x54cfa7  ; -> sub_54CFA7
0x0054CF2A  ff24859cd25400        jmp    dword ptr [eax*4 + 0x54d29c]
0x0054CF31  8b06                  mov    eax, dword ptr [esi]
0x0054CF33  6a00                  push   0
0x0054CF35  6a00                  push   0
0x0054CF37  6a00                  push   0
0x0054CF39  6a01                  push   1
0x0054CF3B  8b9080000000          mov    edx, dword ptr [eax + 0x80]
0x0054CF41  51                    push   ecx
0x0054CF42  8bce                  mov    ecx, esi
0x0054CF44  d91c24                fstp   dword ptr [esp]
0x0054CF47  ffd2                  call   edx
0x0054CF49  899c2458010000        mov    dword ptr [esp + 0x158], ebx
0x0054CF50  8d4c2420              lea    ecx, [esp + 0x20]
0x0054CF54  e8471c0000            call   0x54eba0  ; -> sub_54EBA0
0x0054CF59  8b8c2450010000        mov    ecx, dword ptr [esp + 0x150]
0x0054CF60  64890d00000000        mov    dword ptr fs:[0], ecx
0x0054CF67  59                    pop    ecx
0x0054CF68  5f                    pop    edi
0x0054CF69  5e                    pop    esi
0x0054CF6A  5d                    pop    ebp
0x0054CF6B  5b                    pop    ebx
0x0054CF6C  8b8c2438010000        mov    ecx, dword ptr [esp + 0x138]
0x0054CF73  33cc                  xor    ecx, esp
0x0054CF75  e868424300            call   0x9811e2  ; -> sub_9811E2
0x0054CF7A  81c448010000          add    esp, 0x148
0x0054CF80  c20400                ret    4
0x0054CF83  8b06                  mov    eax, dword ptr [esi]
0x0054CF85  6a00                  push   0
0x0054CF87  6a00                  push   0
0x0054CF89  6a01                  push   1
0x0054CF8B  6a00                  push   0
0x0054CF8D  ebac                  jmp    0x54cf3b  ; -> sub_54CF3B
0x0054CF8F  8b06                  mov    eax, dword ptr [esi]
0x0054CF91  6a00                  push   0
0x0054CF93  6a01                  push   1
0x0054CF95  6a00                  push   0
0x0054CF97  6a00                  push   0
0x0054CF99  eba0                  jmp    0x54cf3b  ; -> sub_54CF3B
0x0054CF9B  8b06                  mov    eax, dword ptr [esi]
0x0054CF9D  6a01                  push   1
0x0054CF9F  6a00                  push   0
0x0054CFA1  6a00                  push   0
0x0054CFA3  6a00                  push   0
0x0054CFA5  eb94                  jmp    0x54cf3b  ; -> sub_54CF3B
0x0054CFA7  ddd8                  fstp   st(0)
0x0054CFA9  eb9e                  jmp    0x54cf49  ; -> sub_54CF49
0x0054CFAB  8d442438              lea    eax, [esp + 0x38]
0x0054CFAF  50                    push   eax
0x0054CFB0  57                    push   edi
0x0054CFB1  e8da240000            call   0x54f490  ; -> sub_54F490
0x0054CFB6  83c408                add    esp, 8
0x0054CFB9  85c0                  test   eax, eax
0x0054CFBB  89442444              mov    dword ptr [esp + 0x44], eax
0x0054CFBF  7c88                  jl     0x54cf49  ; -> sub_54CF49
0x0054CFC1  8b442438              mov    eax, dword ptr [esp + 0x38]
0x0054CFC5  83f803                cmp    eax, 3
0x0054CFC8  0f877bffffff          ja     0x54cf49  ; -> sub_54CF49
0x0054CFCE  ff2485acd25400        jmp    dword ptr [eax*4 + 0x54d2ac]
0x0054CFD5  8d4e24                lea    ecx, [esi + 0x24]
0x0054CFD8  83c634                add    esi, 0x34
0x0054CFDB  bb0d000000            mov    ebx, 0xd
0x0054CFE0  eb3f                  jmp    0x54d021  ; -> sub_54D021
0x0054CFE2  8d9680000000          lea    edx, [esi + 0x80]
0x0054CFE8  89542418              mov    dword ptr [esp + 0x18], edx
0x0054CFEC  81c690000000          add    esi, 0x90
0x0054CFF2  bb11000000            mov    ebx, 0x11
0x0054CFF7  eb2c                  jmp    0x54d025  ; -> sub_54D025
0x0054CFF9  8d86dc000000          lea    eax, [esi + 0xdc]
0x0054CFFF  89442418              mov    dword ptr [esp + 0x18], eax
0x0054D003  81c6ec000000          add    esi, 0xec
0x0054D009  bb10000000            mov    ebx, 0x10
0x0054D00E  eb15                  jmp    0x54d025  ; -> sub_54D025
0x0054D010  8d8e38010000          lea    ecx, [esi + 0x138]
0x0054D016  81c648010000          add    esi, 0x148
0x0054D01C  bb01000000            mov    ebx, 1
0x0054D021  894c2418              mov    dword ptr [esp + 0x18], ecx
0x0054D025  837c241800            cmp    dword ptr [esp + 0x18], 0
0x0054D02A  8974241c              mov    dword ptr [esp + 0x1c], esi
0x0054D02E  744e                  je     0x54d07e  ; -> sub_54D07E
0x0054D030  85f6                  test   esi, esi
0x0054D032  744a                  je     0x54d07e  ; -> sub_54D07E
0x0054D034  807d0120              cmp    byte ptr [ebp + 1], 0x20
0x0054D038  8d7501                lea    esi, [ebp + 1]
0x0054D03B  750b                  jne    0x54d048  ; -> sub_54D048
0x0054D03D  8d4900                lea    ecx, [ecx]
0x0054D040  83c601                add    esi, 1
0x0054D043  803e20                cmp    byte ptr [esi], 0x20
0x0054D046  74f8                  je     0x54d040  ; -> sub_54D040
0x0054D048  6a20                  push   0x20
0x0054D04A  56                    push   esi
0x0054D04B  e8705e4300            call   0x982ec0  ; -> sub_982EC0
0x0054D050  8bf8                  mov    edi, eax
0x0054D052  33ed                  xor    ebp, ebp
0x0054D054  83c408                add    esp, 8
0x0054D057  3bfd                  cmp    edi, ebp
0x0054D059  7423                  je     0x54d07e  ; -> sub_54D07E
0x0054D05B  56                    push   esi
0x0054D05C  c60700                mov    byte ptr [edi], 0
0x0054D05F  e84e8f4300            call   0x985fb2  ; -> sub_985FB2
0x0054D064  d95c2438              fstp   dword ptr [esp + 0x38]
0x0054D068  d9ee                  fldz   
0x0054D06A  83c404                add    esp, 4
0x0054D06D  d9442434              fld    dword ptr [esp + 0x34]
0x0054D071  d8d1                  fcom   st(1)
0x0054D073  dfe0                  fnstsw ax
0x0054D075  ddd9                  fstp   st(1)
0x0054D077  f6c405                test   ah, 5
0x0054D07A  7a12                  jp     0x54d08e  ; -> sub_54D08E
0x0054D07C  ddd8                  fstp   st(0)
0x0054D07E  c7842458010000ffffffff  mov    dword ptr [esp + 0x158], 0xffffffff
0x0054D089  e9c2feffff            jmp    0x54cf50  ; -> sub_54CF50
0x0054D08E  d9e8                  fld1   
0x0054D090  d8d1                  fcom   st(1)
0x0054D092  dfe0                  fnstsw ax
0x0054D094  ddd9                  fstp   st(1)
0x0054D096  f6c405                test   ah, 5
0x0054D099  7a06                  jp     0x54d0a1  ; -> sub_54D0A1
0x0054D09B  d95c2434              fstp   dword ptr [esp + 0x34]
0x0054D09F  eb02                  jmp    0x54d0a3  ; -> sub_54D0A3
0x0054D0A1  ddd8                  fstp   st(0)
0x0054D0A3  807f0120              cmp    byte ptr [edi + 1], 0x20
0x0054D0A7  8d7701                lea    esi, [edi + 1]
0x0054D0AA  750c                  jne    0x54d0b8  ; -> sub_54D0B8
0x0054D0AC  8d642400              lea    esp, [esp]
0x0054D0B0  83c601                add    esi, 1
0x0054D0B3  803e20                cmp    byte ptr [esi], 0x20
0x0054D0B6  74f8                  je     0x54d0b0  ; -> sub_54D0B0
0x0054D0B8  6a20                  push   0x20
0x0054D0BA  56                    push   esi
0x0054D0BB  e8005e4300            call   0x982ec0  ; -> sub_982EC0
0x0054D0C0  8bf8                  mov    edi, eax
0x0054D0C2  83c408                add    esp, 8
0x0054D0C5  3bfd                  cmp    edi, ebp
0x0054D0C7  74b5                  je     0x54d07e  ; -> sub_54D07E
0x0054D0C9  56                    push   esi
0x0054D0CA  c60700                mov    byte ptr [edi], 0
0x0054D0CD  e8e08e4300            call   0x985fb2  ; -> sub_985FB2
0x0054D0D2  d95c2444              fstp   dword ptr [esp + 0x44]
0x0054D0D6  d9ee                  fldz   
0x0054D0D8  83c404                add    esp, 4
0x0054D0DB  d85c2440              fcomp  dword ptr [esp + 0x40]
0x0054D0DF  dfe0                  fnstsw ax
0x0054D0E1  f6c441                test   ah, 0x41
0x0054D0E4  7498                  je     0x54d07e  ; -> sub_54D07E
0x0054D0E6  83c701                add    edi, 1
0x0054D0E9  6a20                  push   0x20
0x0054D0EB  57                    push   edi

