
void FUN_00491690(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int local_4;
  
  *(undefined4 *)(in_ECX + 8) = 0xbf800000;
  local_4 = 0;
  for (; 0 < param_3; param_3 = param_3 - iVar1) {
    uVar2 = FUN_00486240(param_1,&local_4);
    if (param_3 < local_4) {
      local_4 = param_3;
    }
    iVar1 = local_4;
    FUN_0048fbc0(0,uVar2,param_2,local_4,0,0,0,0,0,1,0);
  }
  return;
}



void FUN_00491700(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  
  if (in_ECX[1] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004d6d40();
  }
  piVar3 = (int *)(iVar2 + 8);
  while( true ) {
    if ((piVar3 == (int *)0x0) || ((piVar3[1] == 0 && (*piVar3 == 0)))) {
      piVar3 = (int *)*in_ECX;
      if (piVar3 != (int *)0x0) {
        while( true ) {
          if ((piVar3[1] == 0) && (*piVar3 == 0)) {
            return;
          }
          iVar2 = *(int *)(*piVar3 + 8);
          if ((iVar2 != 0) && (cVar1 = FUN_00469980(iVar2), cVar1 != '\0')) break;
          piVar3 = (int *)piVar3[1];
          if (piVar3 == (int *)0x0) {
            return;
          }
        }
        FUN_0048fbc0(param_1,iVar2,0,param_2,0,0,param_3,0,0,1,0);
      }
      return;
    }
    iVar2 = *(int *)(*piVar3 + 4);
    if ((iVar2 != 0) && (cVar1 = FUN_00469980(iVar2), cVar1 != '\0')) break;
    piVar3 = (int *)piVar3[1];
  }
  FUN_0048fbc0(param_1,iVar2,0,param_2,0,0,param_3,0,0,1,0);
  return;
}



void FUN_004917e0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *in_ECX;
  uint uVar10;
  int iVar11;
  int *local_10;
  int *local_c;
  
  piVar9 = (int *)*in_ECX;
  do {
    while( true ) {
      do {
        local_10 = piVar9;
        if ((local_10 == (int *)0x0) ||
           ((piVar9 = (int *)local_10[1], piVar9 == (int *)0x0 && (*local_10 == 0)))) {
          return;
        }
        piVar1 = (int *)*local_10;
        bVar4 = false;
      } while ((piVar1 == (int *)0x0) || (piVar1[1] < 1));
      local_c = (int *)*piVar1;
      iVar2 = piVar1[2];
      if ((local_c != (int *)0x0) && (*local_c != 0)) break;
      FUN_0048fbc0(param_1,iVar2,0,piVar1[1],0,0,param_2,0,0,1,0);
      piVar9 = (int *)*in_ECX;
    }
LAB_00491848:
    do {
      iVar11 = *local_c;
      piVar9 = local_10;
      if (iVar11 == 0) break;
      bVar3 = false;
      iVar7 = FUN_0041e7b0();
      if (iVar7 == 0) {
LAB_00491927:
        piVar9 = (int *)*piVar1;
        uVar10 = 0;
        if (piVar9 == (int *)0x0) {
LAB_00491944:
          bVar4 = true;
        }
        else {
          do {
            if (*piVar9 != 0) {
              uVar10 = uVar10 + 1;
            }
            piVar9 = (int *)piVar9[1];
          } while (piVar9 != (int *)0x0);
          if (uVar10 < 2) goto LAB_00491944;
          bVar3 = true;
        }
        sVar6 = FUN_0041e860(iVar11,0,param_2,0,0,1,0);
        FUN_0048fbc0(param_1,iVar2,0,(int)sVar6);
        if (bVar4) {
          piVar9 = (int *)*in_ECX;
          break;
        }
        if (!bVar3) goto LAB_004918e4;
        local_c = (int *)*piVar1;
      }
      else {
        iVar7 = (**(code **)(*param_2 + 0x170))();
        iVar8 = FUN_0041e7b0();
        if (iVar8 == iVar7) goto LAB_00491927;
        iVar11 = 0;
        for (piVar9 = (int *)*piVar1; (piVar9 != (int *)0x0 && (*piVar9 != 0));
            piVar9 = (int *)piVar9[1]) {
          cVar5 = FUN_0041fd70(0);
          if (cVar5 != '\0') {
            iVar11 = iVar11 + 1;
          }
        }
        iVar7 = FUN_00484660();
        if (0 < iVar7 + iVar11) {
          FUN_0048fbc0(param_1,iVar2,0,piVar1[1] - (iVar7 + iVar11),0,0,param_2,0,0,1,0);
        }
LAB_004918e4:
        local_c = (int *)local_c[1];
        if (local_c != (int *)0x0) goto LAB_00491848;
        local_10 = (int *)local_10[1];
      }
      piVar9 = local_10;
    } while (local_c != (int *)0x0);
  } while( true );
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004919e0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *in_ECX;
  uint uVar12;
  undefined4 *puVar13;
  int *unaff_FS_OFFSET;
  undefined1 auStack_13c [2];
  char local_13a;
  char cStack_139;
  int *piStack_138;
  undefined4 *local_134;
  undefined4 uStack_130;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  int *local_128;
  int local_124;
  int *local_120;
  undefined4 local_11c;
  int *piStack_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009aff8b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_13c;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xfffffeb4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar9 = (int *)*in_ECX;
  local_134 = in_ECX;
  local_124 = param_1;
  local_11c = param_2;
joined_r0x00491a3b:
  do {
    while( true ) {
      while( true ) {
        if ((piVar9 == (int *)0x0) ||
           ((piVar1 = (int *)piVar9[1], piVar1 == (int *)0x0 && (*piVar9 == 0)))) {
          *unaff_FS_OFFSET = local_c;
          return;
        }
        piVar2 = (int *)*piVar9;
        local_13a = '\0';
        if (((piVar2 != (int *)0x0) && (0 < piVar2[1])) &&
           (local_128 = piVar2, local_120 = piVar1,
           cVar5 = (**(code **)(*(int *)piVar2[2] + 0x78))(uVar7), cVar5 == '\0')) break;
        piVar2 = piVar9 + 1;
        piVar9 = piVar1;
        if (piVar1 != (int *)*piVar2) {
          piVar9 = (int *)*local_134;
        }
      }
      piStack_138 = (int *)*piVar2;
      iVar3 = piVar2[2];
      if ((piStack_138 != (int *)0x0) && (*piStack_138 != 0)) break;
      piVar2 = piVar9 + 1;
      piVar9 = piVar1;
      if (piVar1 != (int *)*piVar2) {
        piVar9 = (int *)*local_134;
      }
    }
LAB_00491aa0:
    do {
      iVar4 = *piStack_138;
      if (iVar4 == 0) goto joined_r0x00491a3b;
      piStack_118 = (int *)piStack_138[1];
      cStack_139 = '\0';
      if (((param_3 == 0) || (iVar8 = FUN_0041e7b0(), puVar13 = local_134, param_3 == iVar8)) &&
         ((iVar8 = FUN_0041e7b0(), puVar13 = local_134, iVar8 != 0 &&
          (iVar8 = FUN_0041e7b0(), puVar13 = local_134, iVar8 != local_124)))) {
        piVar9 = (int *)*local_128;
        uVar12 = 0;
        if (piVar9 == (int *)0x0) {
LAB_00491b13:
          local_13a = '\x01';
        }
        else {
          do {
            if (*piVar9 != 0) {
              uVar12 = uVar12 + 1;
            }
            piVar9 = (int *)piVar9[1];
          } while (piVar9 != (int *)0x0);
          if (uVar12 < 2) goto LAB_00491b13;
          cStack_139 = '\x01';
        }
        if (param_3 != 0) {
          uStack_130 = 0;
          uStack_12c = 0;
          uStack_12a = 0;
          uStack_4 = 0;
          sVar6 = FUN_0041e860();
          if (sVar6 < 2) {
            uVar10 = FUN_00469cd0(iVar3,DAT_00b382b0);
            FUN_00402e30(&uStack_130,"%s %s",uVar10);
          }
          else {
            uVar10 = FUN_00469cd0(iVar3,DAT_00b38298);
            FUN_00402e30(&uStack_130,"%i %s%s %s",(int)sVar6,uVar10);
          }
          uVar10 = FUN_004702d0(iVar3,DAT_00b333c4);
          _sprintf(acStack_114,"%s\\%s","Icons",uVar10);
          uVar11 = FUN_005e96e0(iVar3,0,0);
          uVar10 = uStack_130;
          FUN_0057add0(uStack_130,0x40000000,acStack_114,uVar11);
          uStack_4 = 0xffffffff;
          FUN_00401f20(uVar10);
          uStack_130 = 0;
          uStack_12a = 0;
          uStack_12c = 0;
        }
        sVar6 = FUN_0041e860(iVar4,0,local_11c,0,0,1,0);
        puVar13 = local_134;
        FUN_0048fbc0(local_124,iVar3,0,(int)sVar6);
        piVar9 = (int *)*puVar13;
        if (local_13a != '\0') goto joined_r0x00491a3b;
        if (cStack_139 != '\0') {
          piStack_138 = (int *)*local_128;
          if (piStack_138 == (int *)0x0) goto joined_r0x00491a3b;
          goto LAB_00491aa0;
        }
      }
      if (piStack_118 == (int *)piStack_138[1]) {
        piStack_138 = piStack_118;
      }
      else {
        piStack_138 = (int *)*local_128;
      }
    } while (piStack_138 != (int *)0x0);
    piVar1 = piVar9 + 1;
    piVar9 = local_120;
    if (local_120 != (int *)*piVar1) {
      piVar9 = (int *)*puVar13;
    }
  } while( true );
}



void FUN_00491ce0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int *piVar21;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int iStack_3c;
  int local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_009b002e;
  local_14 = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffa8;
  *unaff_FS_OFFSET = (int)&local_14;
  if (in_ECX[1] == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_004d6d40(uVar6);
  }
  for (piVar8 = (int *)(iVar7 + 8); (piVar8 != (int *)0x0 && ((piVar8[1] != 0 || (*piVar8 != 0))));
      piVar8 = (int *)piVar8[1]) {
    iVar7 = *(int *)(*piVar8 + 4);
    iVar9 = FUN_009832e6(iVar7,0,&PTR_PTR_00b03248,&PTR_PTR_00b05da4,0);
    iVar10 = FUN_004691b0(iVar7);
    if ((iVar7 != 0) && ((iVar9 == 0 && ((iVar10 == 0 || (cVar4 = FUN_00469080(), cVar4 != '\0')))))
       ) {
      piVar11 = (int *)FUN_00485e80(iVar7,1,0);
      if (piVar11 != (int *)0x0) {
        piVar12 = (int *)FUN_009832e6(piVar11[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b05cf4,0);
        if (piVar12 != (int *)0x0) {
          piVar21 = (int *)*piVar11;
          while ((piVar21 != (int *)0x0 &&
                 (puVar1 = (undefined4 *)*piVar21, puVar1 != (undefined4 *)0x0))) {
            fVar22 = (float10)FUN_0041e810();
            if ((float10)-1.0 < fVar22) {
              fVar22 = (float10)FUN_0041e810();
              iVar9 = (**(code **)(*piVar12 + 0x10))();
              fVar3 = (float)iVar9;
              if (iVar9 < 0) {
                fVar3 = fVar3 + 4.2949673e+09;
              }
              if (fVar3 != (float)fVar22) goto LAB_00491e70;
              FUN_0041f610();
              sVar5 = FUN_0041e860();
              FUN_0041f620();
              if (puVar1[1] != 0) {
                FUN_004238a0((int)sVar5);
                goto LAB_00491e70;
              }
              FUN_0065c620(puVar1);
              (**(code **)*puVar1)(1);
              piVar21 = (int *)*piVar11;
            }
            else {
LAB_00491e70:
              piVar21 = (int *)piVar21[1];
            }
          }
        }
        cVar4 = FUN_00469980(iVar7);
        if (((cVar4 != '\0') && (in_ECX[1] == DAT_00b333c4)) &&
           (piVar12 = (int *)*piVar11, piVar12 != (int *)0x0)) {
          while (puVar1 = (undefined4 *)*piVar12, puVar1 != (undefined4 *)0x0) {
            piVar21 = (int *)piVar12[1];
            if (piVar21 == (int *)0x0) {
              *piVar12 = 0;
            }
            else {
              piVar12[1] = piVar21[1];
              *piVar12 = *piVar21;
              FUN_00401f20(piVar21);
            }
            if (puVar1 != (undefined4 *)0x0) {
              (**(code **)*puVar1)(1);
            }
          }
        }
        iVar9 = FUN_00484f20();
        if (iVar9 != 0) {
          for (piVar12 = (int *)*piVar11; (piVar12 != (int *)0x0 && (iVar9 = *piVar12, iVar9 != 0));
              piVar12 = (int *)piVar12[1]) {
            iVar10 = FUN_0041e900();
            if (iVar10 != 0) {
              piVar21 = (int *)piVar12[1];
              while ((piVar21 != (int *)0x0 && (*piVar21 != 0))) {
                if (iVar9 == *piVar21) {
                  piVar19 = (int *)piVar21[1];
                  if (piVar19 == (int *)0x0) {
                    *piVar21 = 0;
                  }
                  else {
                    piVar21[1] = piVar19[1];
                    *piVar21 = *piVar19;
                    FUN_00401f20(piVar19);
                  }
                  iVar10 = FUN_00401f00(0x14);
                  uStack_c = 0;
                  if (iVar10 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = FUN_00422ee0();
                  }
                  uStack_c = 0xffffffff;
                  uVar14 = FUN_0041e900();
                  FUN_0041f090(uVar14);
                  FUN_0041e900();
                  uVar14 = FUN_004fbdc0();
                  FUN_0041f130(uVar14);
                  iVar10 = FUN_00401f00(0x58);
                  uStack_c = 1;
                  if (iVar10 == 0) {
                    uVar14 = 0;
                  }
                  else {
                    uVar14 = FUN_004d9a70();
                  }
                  uStack_c = 0xffffffff;
                  FUN_0046b590();
                  uVar24 = 0;
                  uVar23 = 0;
                  uVar15 = FUN_0041e920(0,0);
                  FUN_0041e900(uVar14,uVar15);
                  FUN_004fbe00(uVar14,uVar15,uVar23,uVar24);
                  FUN_0067b1e0(uVar13);
                  piVar21 = (int *)piVar12[1];
                }
                else {
                  piVar21 = (int *)piVar21[1];
                }
              }
            }
          }
        }
      }
      iVar9 = FUN_009832e6(iVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0);
      if (iVar9 == 0) {
        iStack_3c = 0;
      }
      else {
        iStack_3c = *(int *)(iVar9 + 4);
      }
      if (piVar11 == (int *)0x0) {
        if (iStack_3c != 0) {
          FUN_0048e060();
        }
      }
      else {
        iVar9 = piVar11[1];
        if ((-1 < iVar9) && (iStack_3c != 0)) {
          piVar12 = (int *)*piVar11;
          if ((piVar12 == (int *)0x0) || (cVar4 = FUN_0046cb60(), cVar4 != '\0')) {
            FUN_0048e060();
          }
          else {
            iVar10 = FUN_0052b4a0();
            iVar9 = iVar9 - iVar10;
            do {
              if (*piVar12 == 0) break;
              iVar10 = FUN_0041e900();
              if (iVar10 == 0) {
                FUN_0041f090(iStack_3c);
                FUN_0041e900();
                uVar13 = FUN_004fbdc0();
                FUN_0041f130(uVar13);
                iVar10 = FUN_00401f00(0x58);
                uStack_c = 2;
                if (iVar10 == 0) {
                  piVar21 = (int *)0x0;
                }
                else {
                  piVar21 = (int *)FUN_004d9a70();
                }
                uStack_c = 0xffffffff;
                FUN_0046b590();
                uVar15 = 0;
                uVar14 = 0;
                uVar13 = FUN_0041e920(0,0);
                piVar19 = piVar21;
                FUN_00484f20(piVar21,uVar13);
                FUN_004fbe00(piVar19,uVar13,uVar14,uVar15);
                if (piVar21 != (int *)0x0) {
                  (**(code **)(*piVar21 + 0x10))(1);
                }
              }
              piVar12 = (int *)piVar12[1];
            } while (piVar12 != (int *)0x0);
            if (0 < iVar9) {
              do {
                iVar10 = FUN_00401f00(0x14);
                uStack_c = 3;
                if (iVar10 == 0) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = FUN_00422ee0();
                }
                uStack_c = 0xffffffff;
                uVar14 = FUN_00484f20();
                FUN_0041f090(uVar14);
                FUN_0041e900();
                uVar14 = FUN_004fbdc0();
                FUN_0041f130(uVar14);
                iVar10 = FUN_00401f00(0x58);
                uStack_c = 4;
                if (iVar10 == 0) {
                  piVar12 = (int *)0x0;
                }
                else {
                  piVar12 = (int *)FUN_004d9a70();
                }
                uStack_c = 0xffffffff;
                FUN_0046b590();
                uVar23 = 0;
                uVar15 = 0;
                uVar14 = FUN_0041e920(0,0);
                FUN_004fbe00(piVar12,uVar14,uVar15,uVar23);
                if (piVar12 != (int *)0x0) {
                  (**(code **)(*piVar12 + 0x10))(1);
                }
                FUN_00446cb0(uVar13);
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
        }
        if (*(char *)(iVar7 + 4) == '\"') {
          iVar7 = 0;
          if (in_ECX[1] == DAT_00b333c4) {
            piVar12 = (int *)*piVar11;
            while ((piVar12 != (int *)0x0 && (iVar9 = *piVar12, iVar9 != 0))) {
              piVar12 = (int *)piVar12[1];
              FUN_0041f600();
              iVar7 = iVar9;
            }
          }
          cVar4 = FUN_00484e80(0);
          if ((cVar4 == '\0') || (cVar4 = FUN_004846d0(), cVar4 != '\0')) {
            cVar4 = FUN_00484e80(0);
            if ((cVar4 == '\0') || (cVar4 = FUN_004846d0(), cVar4 == '\0')) {
              cVar4 = FUN_00484e80(0);
              if (cVar4 != '\0') {
                iVar7 = FUN_004845d0();
                if (piVar11[1] < iVar7) {
                  iVar7 = FUN_004845d0();
                  piVar11[1] = iVar7;
                }
                else {
                  iVar7 = FUN_004845d0();
                  if (iVar7 < piVar11[1]) {
                    piVar12 = (int *)*piVar11;
                    while ((piVar12 != (int *)0x0 && (*piVar12 != 0))) {
                      piVar12 = (int *)piVar12[1];
                      cVar4 = FUN_0041df10(0);
                      if (cVar4 != '\0') {
                        FUN_004238a0((short)piVar11[1]);
                      }
                    }
                  }
                }
              }
            }
            else {
              if (piVar11[1] < 0) {
                FUN_004853b0(0,0,1);
              }
              iVar9 = FUN_00484660();
              if (1 < iVar9) {
                piVar12 = (int *)*piVar11;
                while ((iVar9 = iVar7, piVar12 != (int *)0x0 && (iVar10 = *piVar12, iVar10 != 0))) {
                  piVar12 = (int *)piVar12[1];
                  cVar4 = FUN_0041df10(0);
                  iVar7 = iVar9;
                  if (cVar4 != '\0') {
                    iVar7 = iVar10;
                  }
                  if (iVar9 != 0) {
                    FUN_0041dff0(1);
                    FUN_00428a60(iVar10);
                    FUN_0041f200(1,0);
                    FUN_004526e0();
                    FUN_00446cb0(iVar9);
                    iVar7 = iVar9;
                  }
                }
              }
              iVar7 = FUN_004845d0();
              if (piVar11[1] < iVar7) {
                iVar7 = FUN_004845d0();
                piVar11[1] = iVar7;
              }
            }
          }
          else if ((0 < piVar11[1]) && (*(int *)*piVar8 <= piVar11[1])) {
            piVar11[1] = 0;
          }
        }
      }
      uVar16 = *(uint *)*piVar8;
      if ((int)uVar16 < 0) {
        uVar16 = -uVar16;
      }
      if (piVar11 != (int *)0x0) {
        uVar16 = piVar11[1] + uVar16;
      }
      if ((((0 < (int)uVar16) && (piVar11 != (int *)0x0)) &&
          (piVar12 = (int *)*piVar11, piVar12 != (int *)0x0)) &&
         (iVar7 = FUN_0052b4a0(), iVar7 != 0)) {
        uVar17 = FUN_0052b4a0();
        while (uVar16 < uVar17) {
          piVar21 = (int *)piVar12[1];
          puVar1 = (undefined4 *)*piVar12;
          if (piVar21 == (int *)0x0) {
            *piVar12 = 0;
          }
          else {
            piVar12[1] = piVar21[1];
            *piVar12 = *piVar21;
            FUN_00401f20(piVar21);
          }
          if (puVar1 != (undefined4 *)0x0) {
            if (*piVar12 != 0) {
              iVar7 = puVar1[1];
              while (iVar7 != 0) {
                iVar9 = FUN_0041e210(*(undefined1 *)(iVar7 + 4));
                if (iVar9 == 0) {
                  FUN_00422e20(iVar7,0);
                  FUN_0041e0a0(iVar7);
                }
                else {
                  FUN_00422e20(iVar7,1);
                }
                iVar7 = puVar1[1];
              }
            }
            (**(code **)*puVar1)(1);
          }
          uVar17 = FUN_0052b4a0();
        }
        cVar4 = FUN_0046cb60();
        if (cVar4 == '\0') {
          piVar12 = (int *)*piVar11;
        }
        else {
          FUN_00401f20(*piVar11);
          *piVar11 = 0;
        }
        if (piVar12 != (int *)0x0) {
          piVar21 = (int *)*piVar12;
          do {
            while( true ) {
              piVar19 = piVar12;
              if ((piVar21 == (int *)0x0) || (*piVar19 == 0)) goto LAB_0049254d;
              iVar7 = FUN_0041e060();
              if (iVar7 == 0) break;
              piVar21 = (int *)piVar19[1];
              piVar12 = piVar21;
            }
            FUN_0067f100();
            piVar21 = (int *)*piVar11;
            cVar4 = FUN_0046cb60();
            piVar12 = piVar21;
          } while (cVar4 == '\0');
          FUN_004526e0();
          FUN_00401f20(piVar19);
          *piVar11 = 0;
        }
      }
    }
LAB_0049254d:
  }
  piVar8 = (int *)*in_ECX;
  do {
    if ((piVar8 == (int *)0x0) || ((piVar8[1] == 0 && (*piVar8 == 0)))) {
      *unaff_FS_OFFSET = local_14;
      return;
    }
    piVar11 = (int *)*piVar8;
    iVar7 = 0;
    if (((in_ECX[1] != 0) && (iVar9 = FUN_004d6d40(uVar6), iVar9 != 0)) && (piVar11 != (int *)0x0))
    {
      if (in_ECX[1] != 0) {
        FUN_004d6d40();
      }
      iVar7 = FUN_00469ca0(piVar11[2]);
    }
    uVar16 = piVar11[1] + iVar7;
    piVar12 = (int *)FUN_009832e6(piVar11[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b05cf4,0);
    if (piVar12 != (int *)0x0) {
      piVar21 = (int *)*piVar11;
joined_r0x004925f6:
      do {
        if ((piVar21 == (int *)0x0) ||
           (puVar1 = (undefined4 *)*piVar21, puVar1 == (undefined4 *)0x0)) break;
        fVar22 = (float10)FUN_0041e810();
        if ((float10)-1.0 < fVar22) {
          fVar22 = (float10)FUN_0041e810();
          iVar7 = (**(code **)(*piVar12 + 0x10))();
          fVar3 = (float)iVar7;
          if (iVar7 < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
          }
          if (fVar3 == (float)fVar22) {
            FUN_0041f610();
            sVar5 = FUN_0041e860();
            FUN_0041f620();
            if (puVar1[1] == 0) {
              FUN_0065c620(puVar1);
              (**(code **)*puVar1)(1);
              piVar21 = (int *)*piVar11;
              goto joined_r0x004925f6;
            }
            FUN_004238a0((int)sVar5);
          }
        }
        piVar21 = (int *)piVar21[1];
      } while( true );
    }
    iVar9 = FUN_004845d0();
    piVar12 = (int *)*piVar11;
    iVar7 = piVar11[2];
    while( true ) {
      if ((piVar12 == (int *)0x0) || (*piVar12 == 0)) goto LAB_00492890;
      iVar10 = FUN_0041e900();
      if (iVar10 != 0) break;
      piVar12 = (int *)piVar12[1];
    }
    iVar10 = FUN_0041e900();
    if (iVar10 != 0) {
      for (piVar12 = (int *)*piVar11; (piVar12 != (int *)0x0 && (iVar10 = *piVar12, iVar10 != 0));
          piVar12 = (int *)piVar12[1]) {
        if ((iVar10 != 0) && (iVar20 = FUN_0041e900(), iVar20 != 0)) {
          piVar21 = (int *)piVar12[1];
          while ((piVar21 != (int *)0x0 && (*piVar21 != 0))) {
            if (iVar10 == *piVar21) {
              piVar2 = (int *)piVar21[1];
              piVar19 = piVar21 + 1;
              if (piVar2 == (int *)0x0) {
                *piVar21 = 0;
              }
              else {
                *piVar19 = piVar2[1];
                *piVar21 = *piVar2;
                FUN_00401f20(piVar2);
              }
              iVar20 = FUN_00401f00(0x14);
              uStack_c = 5;
              if (iVar20 == 0) {
                iVar20 = 0;
              }
              else {
                iVar20 = FUN_00422ee0();
              }
              uStack_c = 0xffffffff;
              uVar13 = FUN_0041e900();
              FUN_0041f090(uVar13);
              FUN_0041e900();
              uVar13 = FUN_004fbdc0();
              FUN_0041f130(uVar13);
              iVar18 = FUN_00401f00(0x58);
              uStack_c = 6;
              if (iVar18 == 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = FUN_004d9a70();
              }
              uStack_c = 0xffffffff;
              FUN_0046b590();
              uVar23 = 0;
              uVar15 = 0;
              uVar14 = FUN_0041e920(0,0);
              FUN_0041e900(uVar13,uVar14);
              FUN_004fbe00(uVar13,uVar14,uVar15,uVar23);
              if (iVar20 == 0) {
LAB_00492869:
                piVar21 = (int *)piVar12[1];
              }
              else {
                iVar18 = *piVar19;
                while (iVar18 != 0) {
                  piVar21 = (int *)*piVar19;
                  piVar19 = piVar21 + 1;
                  iVar18 = piVar21[1];
                }
                if (*piVar21 == 0) {
                  *piVar21 = iVar20;
                  goto LAB_00492869;
                }
                piVar19 = (int *)FUN_00401f00(8);
                if (piVar19 == (int *)0x0) {
                  piVar21[1] = 0;
                  piVar21 = (int *)piVar12[1];
                }
                else {
                  *piVar19 = iVar20;
                  piVar19[1] = 0;
                  piVar21[1] = (int)piVar19;
                  piVar21 = (int *)piVar12[1];
                }
              }
            }
            else {
              piVar21 = (int *)piVar21[1];
            }
          }
        }
      }
    }
LAB_00492890:
    if (-1 < piVar11[1]) {
      iVar10 = FUN_009832e6(piVar11[2],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0);
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(iVar10 + 4);
      }
      if (iVar10 != 0) {
        piVar12 = (int *)*piVar11;
        if ((piVar12 == (int *)0x0) || ((piVar12[1] == 0 && (*piVar12 == 0)))) {
          FUN_0048e060();
        }
        else {
          iStack_3c = 0;
          piVar21 = piVar12;
          do {
            if (*piVar21 != 0) {
              iStack_3c = iStack_3c + 1;
            }
            piVar21 = (int *)piVar21[1];
          } while (piVar21 != (int *)0x0);
          iStack_3c = piVar11[1] - iStack_3c;
          do {
            if (*piVar12 == 0) break;
            iVar20 = FUN_0041e900();
            if (iVar20 == 0) {
              FUN_0041f090(iVar10);
              FUN_0041e900();
              uVar13 = FUN_004fbdc0();
              FUN_0041f130(uVar13);
              iVar20 = FUN_00401f00(0x58);
              uStack_c = 7;
              if (iVar20 == 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = FUN_004d9a70();
              }
              uStack_c = 0xffffffff;
              FUN_0046b590();
              piVar21 = (int *)*piVar11;
              while( true ) {
                if ((piVar21 == (int *)0x0) || (*piVar21 == 0)) goto LAB_0049299a;
                iVar20 = FUN_0041e900();
                if (iVar20 != 0) break;
                piVar21 = (int *)piVar21[1];
              }
              FUN_0041e900();
LAB_0049299a:
              uVar23 = 0;
              uVar15 = 0;
              uVar14 = FUN_0041e920(0,0);
              FUN_004fbe00(uVar13,uVar14,uVar15,uVar23);
            }
            piVar12 = (int *)piVar12[1];
          } while (piVar12 != (int *)0x0);
          piVar12 = (int *)*piVar11;
          if (0 < iStack_3c) {
            do {
              iVar10 = FUN_00401f00(0x14);
              uStack_c = 8;
              if (iVar10 == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = FUN_00422ee0();
              }
              piVar21 = (int *)*piVar11;
              uStack_c = 0xffffffff;
              for (; (piVar21 != (int *)0x0 && (*piVar21 != 0)); piVar21 = (int *)piVar21[1]) {
                iVar20 = FUN_0041e900();
                if (iVar20 != 0) {
                  uVar13 = FUN_0041e900();
                  goto LAB_00492a3a;
                }
              }
              uVar13 = 0;
LAB_00492a3a:
              FUN_0041f090(uVar13);
              FUN_0041e900();
              uVar13 = FUN_004fbdc0();
              FUN_0041f130(uVar13);
              iVar20 = FUN_00401f00(0x58);
              uStack_c = 9;
              if (iVar20 == 0) {
                piVar21 = (int *)0x0;
              }
              else {
                piVar21 = (int *)FUN_004d9a70();
              }
              uStack_c = 0xffffffff;
              FUN_0046b590();
              uVar15 = 0;
              uVar14 = 0;
              uVar13 = FUN_0041e920(0,0);
              FUN_004fbe00(piVar21,uVar13,uVar14,uVar15);
              if (piVar21 != (int *)0x0) {
                (**(code **)(*piVar21 + 0x10))(1);
              }
              if (iVar10 != 0) {
                if (*piVar12 != 0) {
                  piVar21 = (int *)FUN_00401f00(8);
                  if (piVar21 == (int *)0x0) {
                    piVar21 = (int *)0x0;
                  }
                  else {
                    *piVar21 = *piVar12;
                    piVar21[1] = 0;
                  }
                  piVar21[1] = piVar12[1];
                  piVar12[1] = (int)piVar21;
                }
                *piVar12 = iVar10;
              }
              iStack_3c = iStack_3c + -1;
            } while (iStack_3c != 0);
          }
        }
      }
    }
    if (*(char *)(iVar7 + 4) == '\"') {
      iVar10 = 0;
      if ((in_ECX[1] != 0) && (iVar20 = FUN_004d6d40(), iVar20 != 0)) {
        if (in_ECX[1] != 0) {
          FUN_004d6d40();
        }
        iVar10 = FUN_00469ca0(piVar11[2]);
      }
      if (in_ECX[1] == DAT_00b333c4) {
        piVar12 = (int *)*piVar11;
        while ((piVar12 != (int *)0x0 && (*piVar12 != 0))) {
          piVar12 = (int *)piVar12[1];
          FUN_0041f600();
        }
      }
      piVar12 = (int *)*piVar11;
      if (piVar12 != (int *)0x0) {
LAB_00492b80:
        if (*piVar12 != 0) {
          cVar4 = FUN_0041df10(0);
          if (cVar4 == '\0') break;
          iVar20 = 0;
          for (piVar12 = (int *)*piVar11; (piVar12 != (int *)0x0 && (*piVar12 != 0));
              piVar12 = (int *)piVar12[1]) {
            sVar5 = FUN_0041e860();
            iVar20 = iVar20 + sVar5;
          }
          iVar18 = piVar11[1] + iVar10;
          if (iVar18 < iVar20) {
            piVar11[1] = (iVar20 - piVar11[1]) - iVar10;
          }
          else if (iVar20 < iVar18) {
            piVar12 = (int *)*piVar11;
            while ((piVar12 != (int *)0x0 && (*piVar12 != 0))) {
              piVar12 = (int *)piVar12[1];
              cVar4 = FUN_0041df10(0);
              if (cVar4 != '\0') {
                FUN_004238a0((short)piVar11[1]);
              }
            }
          }
        }
      }
    }
LAB_00492c0a:
    for (piVar12 = (int *)*piVar11; (piVar12 != (int *)0x0 && (*piVar12 != 0));
        piVar12 = (int *)piVar12[1]) {
      iVar10 = FUN_0041e900();
      if (iVar10 != 0) {
        FUN_0041f620();
      }
    }
    cVar4 = FUN_00469980(iVar7);
    if (((cVar4 != '\0') && (in_ECX[1] == DAT_00b333c4)) &&
       (piVar12 = (int *)*piVar11, piVar12 != (int *)0x0)) {
      while (puVar1 = (undefined4 *)*piVar12, puVar1 != (undefined4 *)0x0) {
        piVar21 = (int *)piVar12[1];
        if (piVar21 == (int *)0x0) {
          *piVar12 = 0;
        }
        else {
          piVar12[1] = piVar21[1];
          *piVar12 = *piVar21;
          FUN_00401f20(piVar21);
        }
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
      }
    }
    if (((-1 < (int)uVar16) && ((int)uVar16 < iVar9)) &&
       (piVar12 = (int *)*piVar11, piVar12 != (int *)0x0)) {
      iVar7 = 0;
      do {
        if (*piVar12 == 0) break;
        sVar5 = FUN_0041e860();
        piVar12 = (int *)piVar12[1];
        iVar7 = iVar7 + sVar5;
      } while (piVar12 != (int *)0x0);
      piVar11[1] = iVar7;
    }
    if (((0 < (int)uVar16) && (piVar12 = (int *)*piVar11, piVar12 != (int *)0x0)) && (*piVar12 != 0)
       ) {
      uVar17 = FUN_0052b4a0();
      while (uVar16 < uVar17) {
        piVar21 = (int *)piVar12[1];
        puVar1 = (undefined4 *)*piVar12;
        if (piVar21 == (int *)0x0) {
          *piVar12 = 0;
        }
        else {
          piVar12[1] = piVar21[1];
          *piVar12 = *piVar21;
          FUN_00401f20(piVar21);
        }
        if (puVar1 != (undefined4 *)0x0) {
          if (*piVar12 != 0) {
            iVar7 = puVar1[1];
            while (iVar7 != 0) {
              iVar9 = FUN_0041e210(*(undefined1 *)(iVar7 + 4));
              if (iVar9 == 0) {
                FUN_00422e20(iVar7,0);
                FUN_0041e0a0(iVar7);
              }
              else {
                FUN_00422e20(iVar7,1);
              }
              iVar7 = puVar1[1];
            }
          }
          (**(code **)*puVar1)(1);
        }
        uVar17 = FUN_0052b4a0();
      }
      if ((piVar12[1] == 0) && (*piVar12 == 0)) {
        FUN_00401f20(*piVar11);
        *piVar11 = 0;
      }
      else {
        piVar12 = (int *)*piVar11;
      }
      do {
        while( true ) {
          piVar21 = piVar12;
          if ((piVar21 == (int *)0x0) || (*piVar21 == 0)) goto LAB_00492e3f;
          iVar7 = FUN_0041e060();
          if (iVar7 == 0) break;
          piVar12 = (int *)piVar21[1];
        }
        piVar12 = (int *)piVar21[1];
        if (piVar12 == (int *)0x0) {
          *piVar21 = 0;
        }
        else {
          piVar21[1] = piVar12[1];
          *piVar21 = *piVar12;
          FUN_00401f20(piVar12);
        }
        piVar12 = (int *)*piVar11;
      } while ((piVar12[1] != 0) || (*piVar12 != 0));
      iVar7 = piVar21[1];
      while (iVar7 != 0) {
        iVar7 = *(int *)(piVar21[1] + 4);
        FUN_00401f20(piVar21[1]);
        piVar21[1] = iVar7;
      }
      *piVar21 = 0;
      FUN_00401f20(piVar21);
      *piVar11 = 0;
    }
LAB_00492e3f:
    piVar8 = (int *)piVar8[1];
  } while( true );
  piVar12 = (int *)piVar12[1];
  if (piVar12 == (int *)0x0) goto LAB_00492c0a;
  goto LAB_00492b80;
}



float10 FUN_00492e70(int *param_1,undefined4 param_2,undefined4 param_3,char param_4,char param_5)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 *in_ECX;
  int *piVar16;
  int *unaff_FS_OFFSET;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  char cStack_26;
  char local_25;
  int *local_24;
  undefined4 *local_20;
  int *piStack_1c;
  float local_18;
  int *local_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b0066;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_18 = 0.0;
  local_25 = '\0';
  local_20 = in_ECX;
  if ((param_1 == DAT_00b333c4) && (cVar3 = FUN_0065da50(uVar6), cVar3 != '\0')) {
    local_25 = '\x01';
  }
  if (in_ECX[1] == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_004d6d40();
  }
  for (local_14 = (int *)(iVar7 + 8);
      (local_14 != (int *)0x0 && ((local_14[1] != 0 || (*local_14 != 0))));
      local_14 = (int *)local_14[1]) {
    piVar16 = *(int **)(*local_14 + 4);
    local_24 = piVar16;
    iVar7 = FUN_009832e6(piVar16,0,&PTR_PTR_00b03248,&PTR_PTR_00b05da4,0);
    iVar8 = FUN_004691b0(piVar16);
    cVar3 = (**(code **)(*piVar16 + 0x78))();
    if ((cVar3 == '\0') || (param_1 != DAT_00b333c4)) {
      if ((iVar7 == 0) && ((iVar8 == 0 || (cVar3 = FUN_00469080(), cVar3 != '\0')))) {
        piStack_1c = (int *)*local_20;
        bVar2 = true;
        while (piStack_1c != (int *)0x0) {
          if (!bVar2) {
            if (piStack_1c != (int *)0x0) {
              piStack_1c = (int *)*piStack_1c;
              if (piStack_1c == (int *)0x0) goto LAB_00493046;
              piVar16 = (int *)*piStack_1c;
              goto joined_r0x00493026;
            }
            break;
          }
          if ((*piStack_1c == 0) || (*(int **)(*piStack_1c + 8) != local_24)) {
            piStack_1c = (int *)piStack_1c[1];
          }
          else {
            bVar2 = false;
          }
        }
        piStack_1c = (int *)0x0;
LAB_00493046:
        iVar7 = *(int *)*local_14;
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        if (piStack_1c != (int *)0x0) {
          iVar7 = piStack_1c[1] + iVar7;
        }
        if (0 < iVar7) {
          iStack_10 = FUN_00470520(local_24);
          iStack_10 = iStack_10 * iVar7;
          local_18 = (float)iStack_10 + local_18;
          if (((piStack_1c != (int *)0x0) && (piVar16 = (int *)*piStack_1c, piVar16 != (int *)0x0))
             && (iVar8 = 0, piVar9 = piVar16, piVar16 != (int *)0x0)) {
            do {
              if (*piVar9 != 0) {
                iVar8 = iVar8 + 1;
              }
              piVar9 = (int *)piVar9[1];
            } while (piVar9 != (int *)0x0);
            if (((iVar8 != 0) && (piVar16 != (int *)0x0)) && (*piVar16 != 0)) {
              bVar2 = false;
              do {
                iVar8 = *piVar16;
                if (iVar8 == 0) break;
                iVar13 = FUN_0041e060();
                if (iVar13 == 0) {
                  FUN_0067f100();
                  if ((piVar16[1] == 0) && (*piVar16 == 0)) {
                    FUN_004526e0();
                    FUN_00401f20(piVar16);
                    *piStack_1c = 0;
                    break;
                  }
                  piVar16 = (int *)*piStack_1c;
                }
                else {
                  cStack_26 = '\0';
                  uVar6 = FUN_0052b4a0();
                  if (uVar6 < 2) {
                    bVar2 = true;
                  }
                  else {
                    cStack_26 = '\x01';
                  }
                  cVar3 = (**(code **)(*param_1 + 400))();
                  if (cVar3 == '\0') {
                    uVar12 = FUN_004db6b0();
                  }
                  else {
                    uVar12 = (**(code **)(*param_1 + 0x170))();
                  }
                  if ((((char)param_3 == '\0') && (param_4 == '\0')) ||
                     ((cVar3 = FUN_00469980(local_24), cVar3 != '\0' ||
                      ((cVar3 = FUN_004de880(uVar12), cVar3 != '\0' || ((char)local_24[1] == '\"')))
                      ))) {
                    if (param_5 != '\0') {
                      iVar13 = FUN_0041e060();
                      iVar10 = FUN_0041e7b0();
                      if ((iVar10 == 0) ||
                         (((sVar5 = FUN_0041e860(), sVar5 < 2 || (2 < iVar13)) && (1 < iVar13)))) {
                        FUN_0041f600();
                      }
                      else {
                        FUN_0041f600();
                        iVar8 = 0;
                      }
                    }
                  }
                  else {
                    iVar13 = FUN_0041e7b0();
                    if (iVar13 == 0) {
                      FUN_00423660(uVar12);
                    }
                  }
                  sVar5 = FUN_0041e860();
                  iVar7 = iVar7 - sVar5;
                  sVar5 = FUN_0041e860(iVar8,0,param_2,0,0,1,0);
                  FUN_0048fbc0(param_1,local_24,param_3,(int)sVar5);
                  if (bVar2) break;
                  if (cStack_26 == '\0') {
                    piVar16 = (int *)piVar16[1];
                  }
                  else {
                    piVar16 = (int *)*piStack_1c;
                  }
                }
              } while (piVar16 != (int *)0x0);
            }
          }
          if (0 < iVar7) {
            uVar12 = param_2;
            if (((char)param_3 == '\0') && (param_4 == '\0')) {
              uVar22 = 0;
              uVar21 = 1;
              uVar20 = 0;
              uVar19 = 0;
              uVar18 = 0;
              uVar15 = 0;
              uVar17 = 0;
            }
            else {
              iStack_10 = FUN_00401f00(0xc);
              uStack_4 = 0;
              if (iStack_10 == 0) {
                puVar11 = (undefined4 *)0x0;
              }
              else {
                puVar11 = (undefined4 *)FUN_00484420(local_24,iVar7);
              }
              uStack_4 = 0xffffffff;
              FUN_00484a40(param_1);
              uVar15 = *(undefined4 *)*puVar11;
              FUN_004238a0(iVar7);
              uVar22 = 0;
              uVar21 = 1;
              uVar20 = 0;
              uVar19 = 0;
              uVar18 = 0;
              sVar5 = FUN_0041e860(uVar15,0,param_2,0,0,1,0);
              iVar7 = (int)sVar5;
              uVar17 = param_3;
            }
            FUN_0048fbc0(param_1,local_24,uVar17,iVar7,uVar15,uVar18,uVar12,uVar19,uVar20,uVar21,
                         uVar22);
          }
        }
      }
    }
    else {
      piVar9 = (int *)*in_ECX;
      bVar2 = true;
      while (piVar9 != (int *)0x0) {
        if (!bVar2) {
          if (((piVar9 != (int *)0x0) && (iVar7 = *piVar9, iVar7 != 0)) &&
             (cVar3 = FUN_00484e80(0), cVar3 != '\0')) {
            FUN_0048a540(&cStack_26,local_24,*(int *)*local_14 + *(int *)(iVar7 + 4),param_1,0,0,0);
          }
          break;
        }
        if ((*piVar9 == 0) || (*(int **)(*piVar9 + 8) != piVar16)) {
          piVar9 = (int *)piVar9[1];
        }
        else {
          bVar2 = false;
        }
      }
    }
LAB_00493321:
    in_ECX = local_20;
  }
  piVar16 = (int *)*local_20;
  puVar11 = local_20;
joined_r0x0049333d:
  do {
    while( true ) {
      do {
        piVar9 = piVar16;
        if ((piVar9 == (int *)0x0) || (((int *)piVar9[1] == (int *)0x0 && (*piVar9 == 0)))) {
          *unaff_FS_OFFSET = local_c;
          return (float10)local_18;
        }
        puVar14 = (undefined4 *)*piVar9;
        piVar16 = (int *)piVar9[1];
      } while (puVar14 == (undefined4 *)0x0);
      iVar7 = FUN_004691b0(puVar14[2]);
      if ((iVar7 == 0) || (cVar3 = FUN_00469080(), cVar3 != '\0')) break;
LAB_004933c5:
      piVar16 = (int *)piVar9[1];
    }
    for (piVar16 = (int *)*puVar14; (piVar16 != (int *)0x0 && (*piVar16 != 0));
        piVar16 = (int *)piVar16[1]) {
      cVar3 = FUN_0041def0();
      if (cVar3 != '\0') goto LAB_004933cd;
    }
    if ((puVar11[1] != 0) && (iVar7 = FUN_004d6d40(), iVar7 != 0)) {
      if (puVar11[1] != 0) {
        FUN_004d6d40();
      }
      cVar3 = FUN_00469920(puVar14[2]);
      if (cVar3 != '\0') goto LAB_004933c5;
    }
LAB_004933cd:
    cVar3 = (**(code **)(*(int *)puVar14[2] + 0x78))();
    if ((cVar3 == '\0') || (param_1 != DAT_00b333c4)) {
      if ((0 < (int)puVar14[1]) &&
         ((local_25 == '\0' || (cVar3 = (**(code **)(*(int *)puVar14[2] + 0x78))(), cVar3 == '\0')))
         ) {
        local_24 = (int *)puVar14[2];
        iVar7 = puVar14[1];
        iVar8 = FUN_00470520(local_24);
        local_14 = (int *)(iVar8 * iVar7);
        iVar7 = 0;
        cStack_26 = '\0';
        local_18 = (float)(int)local_14 + local_18;
        if ((puVar11[1] != 0) && (iVar8 = FUN_004d6d40(), iVar8 != 0)) {
          if (puVar11[1] != 0) {
            FUN_004d6d40();
          }
          iVar7 = FUN_00469ca0(puVar14[2]);
        }
        local_14 = (int *)(puVar14[1] + iVar7);
        piVar16 = (int *)*puVar14;
        if ((piVar16 == (int *)0x0) || (*piVar16 == 0)) {
          uVar12 = 0;
          cVar3 = (**(code **)(*param_1 + 400))();
          if (cVar3 == '\0') {
            uVar15 = FUN_004db6b0();
          }
          else {
            uVar15 = (**(code **)(*param_1 + 0x170))();
          }
          if (((((char)param_3 != '\0') || (param_4 != '\0')) &&
              (cVar3 = FUN_00469980(local_24), cVar3 == '\0')) &&
             ((cVar3 = FUN_004de880(uVar15), cVar3 == '\0' && ((char)local_24[1] != '\"')))) {
            local_14 = (int *)FUN_00401f00(0x14);
            uStack_4 = 1;
            if (local_14 == (int *)0x0) {
              uVar12 = 0;
            }
            else {
              uVar12 = FUN_00422ee0();
            }
            uStack_4 = 0xffffffff;
            FUN_00423660(uVar15);
          }
LAB_00493789:
          puVar11 = local_20;
          FUN_0048fbc0(param_1,local_24,param_3,puVar14[1],uVar12,0,param_2,0,0,1,0);
          piVar16 = (int *)*puVar11;
        }
        else {
          do {
            while( true ) {
              iVar7 = *piVar16;
              if ((iVar7 == 0) || (cStack_26 != '\0')) goto LAB_00493555;
              sVar5 = FUN_0041e860();
              if (0 < sVar5) break;
              piVar16 = (int *)piVar16[1];
              if (piVar16 == (int *)0x0) {
                uVar12 = 0;
                goto LAB_00493789;
              }
            }
            iVar8 = FUN_0041e060();
            if (iVar8 == 0) {
              piVar1 = (int *)piVar16[1];
              if (piVar1 == (int *)0x0) {
                *piVar16 = 0;
              }
              else {
                piVar16[1] = piVar1[1];
                *piVar16 = *piVar1;
                FUN_00401f20(piVar1);
              }
              if ((piVar16[1] == 0) && (*piVar16 == 0)) {
                FUN_004526e0();
                FUN_00401f20(piVar16);
                *puVar14 = 0;
                break;
              }
            }
            else {
              uVar6 = 0;
              do {
                if (*piVar16 != 0) {
                  uVar6 = uVar6 + 1;
                }
                piVar16 = (int *)piVar16[1];
              } while (piVar16 != (int *)0x0);
              if (uVar6 < 2) {
                cStack_26 = '\x01';
              }
              cVar3 = (**(code **)(*param_1 + 400))();
              if (cVar3 == '\0') {
                uVar12 = FUN_004db6b0();
              }
              else {
                uVar12 = (**(code **)(*param_1 + 0x170))();
              }
              piVar16 = local_24;
              if (((((char)param_3 == '\0') && (param_4 == '\0')) ||
                  (cVar3 = FUN_00469980(local_24), cVar3 != '\0')) ||
                 ((cVar3 = FUN_004de880(uVar12), cVar3 != '\0' || ((char)piVar16[1] == '\"')))) {
                if (param_5 == '\0') goto LAB_0049366e;
                iVar8 = FUN_0041e060();
                iVar13 = FUN_0041e7b0();
                if ((iVar13 == 0) ||
                   (((sVar5 = FUN_0041e860(), sVar5 < 2 || (2 < iVar8)) && (1 < iVar8)))) {
                  FUN_0041f600();
                  goto LAB_0049366e;
                }
                FUN_0041f600();
              }
              else {
                iVar8 = FUN_0041e7b0();
                if (iVar8 == 0) {
                  FUN_00423660(uVar12);
                }
LAB_0049366e:
                if (iVar7 != 0) {
                  sVar5 = FUN_0041e860();
                  local_14 = (int *)((int)local_14 - (int)sVar5);
                  sVar5 = FUN_0041e860(iVar7,0,param_2,0,0,1,0);
                  FUN_0048fbc0(param_1,piVar16,param_3,(int)sVar5);
                }
              }
              piVar9 = (int *)*local_20;
              puVar14 = (undefined4 *)FUN_00485e80(local_24,1,0);
              if (puVar14 == (undefined4 *)0x0) break;
            }
            piVar16 = (int *)*puVar14;
          } while (piVar16 != (int *)0x0);
LAB_00493555:
          puVar11 = local_20;
          piVar16 = piVar9;
          if (0 < (int)local_14) {
            FUN_0048fbc0(param_1,local_24,param_3,local_14,0,0,param_2,0,0,1,0);
            piVar16 = (int *)*puVar11;
          }
        }
        goto joined_r0x0049333d;
      }
    }
    else {
      cVar3 = FUN_00484e80(0);
      if (cVar3 != '\0') {
        uVar12 = puVar14[1];
        uVar4 = FUN_00484e80(1);
        iStack_10 = CONCAT31(iStack_10._1_3_,uVar4);
        FUN_0048a540(&cStack_26,puVar14[2],uVar12,param_1,0,iStack_10,0);
      }
    }
    piVar16 = (int *)piVar9[1];
  } while( true );
joined_r0x00493026:
  if ((piVar16 == (int *)0x0) || (*piVar16 == 0)) goto LAB_00493046;
  cVar3 = FUN_0041def0();
  if (cVar3 != '\0') goto LAB_00493321;
  piVar16 = (int *)piVar16[1];
  goto joined_r0x00493026;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004937e0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *in_ECX;
  int iVar9;
  ushort local_18 [2];
  uint local_14;
  int local_10;
  int iStack_c;
  int local_8;
  undefined4 *local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_4 = in_ECX;
  cVar4 = FUN_0045a170();
  iVar9 = 0;
  if (cVar4 != '\0') {
    FUN_004534d0(&local_8,4);
    if (local_8 != 0x4b4f4c42) {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\InventoryChanges.cpp",0x2154,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar5 = (int *)FUN_0046b250(*puVar1);
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\InventoryChanges.cpp",0x2154,*puVar1,uVar6);
      }
    }
    local_10 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_14,2);
    iVar9 = local_10;
  }
  FUN_004534d0(local_18,2);
  iStack_c = 0;
  if (local_18[0] != 0) {
    do {
      piVar5 = (int *)FUN_00401f00(0xc);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5[2] = 0;
        *piVar5 = 0;
        piVar5[1] = 0;
      }
      FUN_004858d0();
      if (piVar5[2] == 0) {
        piVar2 = (int *)*piVar5;
        while ((piVar2 != (int *)0x0 &&
               (puVar1 = (undefined4 *)*piVar2, puVar1 != (undefined4 *)0x0))) {
          piVar2 = (int *)piVar2[1];
          FUN_0041dff0(1);
          if (puVar1 != (undefined4 *)0x0) {
            (**(code **)*puVar1)(1);
          }
        }
        if (*piVar5 != 0) {
          FUN_004526e0();
        }
        FUN_00401f20(*piVar5);
        *piVar5 = 0;
        FUN_00401f20(piVar5);
        in_ECX = local_4;
      }
      else {
        piVar2 = (int *)*in_ECX;
        if (*piVar2 != 0) {
          piVar7 = (int *)FUN_00401f00(8);
          if (piVar7 != (int *)0x0) {
            *piVar7 = *piVar2;
            piVar7[1] = 0;
            piVar7[1] = piVar2[1];
            piVar2[1] = (int)piVar7;
            *piVar2 = (int)piVar5;
            goto LAB_0049397b;
          }
          _DAT_00000004 = piVar2[1];
          piVar2[1] = 0;
        }
        *piVar2 = (int)piVar5;
      }
LAB_0049397b:
      iStack_c = iStack_c + 1;
      iVar9 = local_10;
    } while (iStack_c < (int)(uint)local_18[0]);
  }
  FUN_00491ce0();
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar3 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar8 = local_14 & 0xffff;
      if (uVar8 + iVar9 < uVar3) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar3 - uVar8) - iVar9,"..\\TES Shared\\InventoryChanges.cpp",0x2167,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar3 < uVar8 + iVar9) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar8 - uVar3) + iVar9,"..\\TES Shared\\InventoryChanges.cpp",0x2167,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar5 = (int *)FUN_0046b250(*puVar1);
      uVar8 = (local_14 & 0xffff) + iVar9;
      if (uVar8 < uVar3) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar3 - (local_14 & 0xffff)) - iVar9,"..\\TES Shared\\InventoryChanges.cpp",
                     0x2167,*puVar1,uVar6);
        return;
      }
      if (uVar3 < uVar8) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_14 & 0xffff) - uVar3) + iVar9,"..\\TES Shared\\InventoryChanges.cpp",
                     0x2167,*puVar1,uVar6);
        return;
      }
    }
  }
  return;
}



void FUN_00493ad0(uint param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  void *_Dst;
  uint *in_ECX;
  
  in_ECX[1] = param_2;
  *in_ECX = param_1;
  uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = uVar2;
  uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)*in_ECX * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)*in_ECX * 4));
  in_ECX[3] = uVar2;
  lVar1 = (ulonglong)(*in_ECX * 0x110) * 4;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  _memset(_Dst,0,*in_ECX * 0x440);
  uVar2 = 0;
  if (*in_ECX != 0) {
    do {
      *(void **)(in_ECX[2] + uVar2 * 4) = _Dst;
      *(int *)(in_ECX[3] + uVar2 * 4) = (int)_Dst + 0x40;
      uVar2 = uVar2 + 1;
      _Dst = (void *)((int)_Dst + 0x84);
    } while (uVar2 < *in_ECX);
  }
  return;
}



void FUN_00493b70(void)

{
  int in_ECX;
  
  FUN_00401f20(**(undefined4 **)(in_ECX + 8));
  FUN_00401f20(*(undefined4 *)(in_ECX + 8));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0xc));
  return;
}



float10 FUN_00493ba0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) < 0) {
    return (float10)((float)-*(int *)(in_ECX + 4) * 0.033333335);
  }
  return (float10)0.0;
}



int FUN_00493bd0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 uVar7;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b520b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((((param_1 != (uint *)0x0) && (param_2 != 0)) && (3 < param_2)) &&
     ((uVar1 = *param_1, uVar1 < 0xf4241 && (7 < param_2)))) {
    uVar4 = param_1[1];
    iVar6 = 8;
    iVar3 = FUN_00401f00(0x10,uVar2);
    local_4 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00493ad0(uVar1,uVar4);
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        uVar4 = 0;
        puVar5 = (undefined4 *)(iVar6 + (int)param_1);
        do {
          if (param_2 < (uint)((4 - (int)param_1) + (int)puVar5)) {
            if (iVar3 == 0) goto LAB_00493d1e;
            FUN_00401f20(**(undefined4 **)(iVar3 + 8));
            FUN_00401f20(*(undefined4 *)(iVar3 + 8));
            uVar7 = *(undefined4 *)(iVar3 + 0xc);
            goto LAB_00493d10;
          }
          *(undefined4 *)(uVar4 + *(int *)(*(int *)(iVar3 + 8) + uVar2 * 4)) = *puVar5;
          uVar4 = uVar4 + 4;
          iVar6 = iVar6 + 4;
          puVar5 = puVar5 + 1;
        } while (uVar4 < 0x40);
        uVar4 = 0;
        puVar5 = (undefined4 *)((int)param_1 + iVar6);
        do {
          if (param_2 < (uint)((4 - (int)param_1) + (int)puVar5)) {
            FUN_00401f20(**(undefined4 **)(iVar3 + 8));
            FUN_00401f20(*(undefined4 *)(iVar3 + 8));
            uVar7 = *(undefined4 *)(iVar3 + 0xc);
LAB_00493d10:
            FUN_00401f20(uVar7);
            FUN_00401f20(iVar3);
            goto LAB_00493d1e;
          }
          *(undefined4 *)(uVar4 + *(int *)(*(int *)(iVar3 + 0xc) + uVar2 * 4)) = *puVar5;
          uVar4 = uVar4 + 4;
          iVar6 = iVar6 + 4;
          puVar5 = puVar5 + 1;
        } while (uVar4 < 0x44);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    *unaff_FS_OFFSET = local_c;
    return iVar3;
  }
LAB_00493d1e:
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00493d50(int *param_1,float param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piStack_ac;
  undefined1 auStack_70 [8];
  undefined4 auStack_68 [25];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar4 = in_ECX[1];
  fVar3 = 0.0;
  fVar2 = fVar3;
  if (iVar4 < 0) {
    fVar2 = (float)-iVar4 * 0.033333335;
  }
  if (fVar2 <= 0.2) {
    if (iVar4 < 0) {
      fVar3 = (float)-iVar4 * 0.033333335;
    }
  }
  else {
    fVar3 = 0.2;
  }
  piStack_ac = (int *)0x0;
  (**(code **)(*param_1 + 0x7c))(fVar3,0,1,1,1);
  uVar7 = 0;
  if (*in_ECX != 0) {
    do {
      puVar5 = *(undefined4 **)(in_ECX[2] + uVar7 * 4);
      puVar6 = (undefined4 *)&stack0xffffff58;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      pcVar1 = *(code **)(*param_1 + 0xa0);
      puVar5 = *(undefined4 **)(iRam0000000c + uVar7 * 4);
      puVar6 = auStack_68;
      for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      (*pcVar1)(&stack0xffffff58,0x3d088889);
      (**(code **)(*param_1 + 0xa4))(auStack_70,0x3d088889);
      uVar7 = uVar7 + 1;
      in_ECX = piStack_ac;
    } while (uVar7 < _DAT_00000000);
  }
  if (param_2 <= 0.0) {
    return 1;
  }
  (**(code **)(*param_1 + 0xa8))(0,param_2,1);
  (**(code **)(*param_1 + 0xa8))(2,param_2,1);
  return 1;
}



undefined4 FUN_00493ed0(int param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ushort auStack_8 [2];
  undefined4 local_4;
  
  iVar2 = param_3;
  if (param_3 == 0) {
    return 1;
  }
  do {
    local_4 = 1;
    (**(code **)(param_1 + 4))(param_1,&param_3,1,&local_4,1);
    if ((char)param_3 == '\0') {
      local_4 = 1;
      (**(code **)(param_1 + 4))(param_1,auStack_8,2,&local_4,1);
      _memset(param_2,0,(uint)auStack_8[0]);
      param_2 = param_2 + auStack_8[0];
      iVar1 = -3;
    }
    else {
      *param_2 = (char)param_3;
      param_2 = param_2 + 1;
      iVar1 = -1;
    }
    iVar2 = iVar2 + iVar1;
  } while (iVar2 != 0);
  return 1;
}



undefined4 FUN_00493f60(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int unaff_EBX;
  int unaff_ESI;
  uint auStack_c [2];
  undefined4 uStack_4;
  
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x18))(1,0);
    if (cVar1 != '\0') {
      iVar2 = (*(code *)((undefined4 *)*param_1)[7])();
      uStack_4 = 1;
      (*(code *)param_1[1])(param_1,&stack0xffffffec,0xc,&uStack_4,1);
      if (unaff_ESI == 1) {
        iVar2 = iVar2 + -0xc;
      }
      else {
        iVar2 = iVar2 + -1;
        (**(code **)(*param_1 + 0xc))(1,0);
        pcVar3 = (char *)FUN_00401f00(iVar2);
        auStack_c[0] = 1;
        (*(code *)param_1[1])(param_1,pcVar3,iVar2,auStack_c,1);
        pcVar4 = pcVar3;
        while (pcVar4 < pcVar3 + iVar2) {
          if (*pcVar4 == '\0') {
            pcVar4 = pcVar4 + 3;
          }
          else {
            pcVar4 = pcVar4 + 1;
          }
        }
        (**(code **)(*param_1 + 0xc))(1,0);
        FUN_00401f20(pcVar3);
      }
      uVar5 = FUN_00401f00(unaff_EBX + 0x10);
      if ((auStack_c[0] & 1) == 0) {
        uStack_4 = 1;
        (*(code *)param_1[1])(param_1,uVar5,unaff_EBX,&uStack_4,1);
      }
      else {
        FUN_00493ed0(param_1,uVar5,iVar2,unaff_EBX);
      }
      uVar6 = FUN_00493bd0(uVar5,unaff_EBX);
      (**(code **)*param_1)(1);
      FUN_00401f20(uVar5);
      return uVar6;
    }
    (**(code **)*param_1)(1);
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004940c0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  pcVar3 = (char *)*param_1;
  iVar2 = -(int)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)(local_108 + iVar2)] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = _strrchr(local_108,0x2e);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  *pcVar3 = '\0';
  FUN_00402e30(param_1,"%s.lip",local_108);
  return 1;
}



undefined4 FUN_00494150(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (DAT_00b33a04 != (int *)0x0)) {
    iVar2 = (**(code **)(*DAT_00b33a04 + 4))(iVar1,0,0,0xffffffff);
    if (iVar2 != 0) {
      uVar3 = FUN_00431130(iVar1,0,0x2800,0x10);
      uVar3 = FUN_00493f60(uVar3);
      return uVar3;
    }
  }
  return 0;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004941a0(undefined4 param_1,char *param_2,va_list param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  char local_32cc [13000];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_32cc;
  uVar5 = 0;
  if (DAT_00b34d90 == (int *)0x0) {
    return 0;
  }
  iVar2 = _vsprintf(local_32cc,param_2,param_3);
  if (iVar2 < 0) {
    return 0;
  }
  if ((local_32cc[iVar2 + -2] != '\r') || (local_32cc[iVar2 + -1] != '\n')) {
    puVar1 = (undefined2 *)&stack0xffffcd33;
    do {
      puVar3 = puVar1;
      puVar1 = (undefined2 *)((int)puVar3 + 1);
    } while (*(char *)((int)puVar3 + 1) != '\0');
    *(undefined2 *)((int)puVar3 + 1) = 0xa0d;
    *(undefined1 *)((int)puVar3 + 3) = 0;
  }
  switch(param_1) {
  case 0:
    (**(code **)*DAT_00b34d90)(local_32cc);
    return 0;
  default:
    pcVar4 = *(code **)(*DAT_00b34d90 + 4);
    break;
  case 2:
    (**(code **)(*DAT_00b34d90 + 8))(local_32cc);
    return 0;
  case 3:
    (**(code **)(*DAT_00b34d90 + 0xc))(local_32cc);
    return 0;
  case 4:
    (**(code **)(*DAT_00b34d90 + 0x10))(local_32cc);
    return 0;
  case 5:
    pcVar4 = *(code **)(*DAT_00b34d90 + 0x20);
    break;
  case 6:
    uVar5 = (**(code **)(*DAT_00b34d90 + 0x1c))(local_32cc);
    return uVar5;
  case 7:
    pcVar4 = *(code **)(*DAT_00b34d90 + 0x18);
    break;
  case 8:
    goto switchD_00494231_caseD_8;
  case 9:
    (**(code **)(*DAT_00b34d90 + 0x14))(local_32cc);
    return 0;
  }
  uVar5 = (*pcVar4)(local_32cc);
switchD_00494231_caseD_8:
  return uVar5;
}



void FUN_00494410(int *param_1)

{
  char cVar1;
  undefined2 *puVar2;
  int in_ECX;
  undefined2 *puVar3;
  char *pcVar4;
  
  if (*param_1 == 0) {
    *(undefined1 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  else if (*param_1 == 1) {
    puVar2 = (undefined2 *)(*(int *)(in_ECX + 8) + in_ECX + 0xf);
    do {
      puVar3 = puVar2;
      puVar2 = (undefined2 *)((int)puVar3 + 1);
    } while (*(char *)((int)puVar3 + 1) != '\0');
    *(undefined2 *)((int)puVar3 + 1) = 0xa0d;
    *(undefined1 *)((int)puVar3 + 3) = 0;
    pcVar4 = (char *)(in_ECX + 0x10);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *(int *)(in_ECX + 8) = (int)pcVar4 - (in_ECX + 0x11);
    return;
  }
  return;
}



undefined4 * FUN_00494480(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = 0;
  do {
    pcVar1 = &DAT_00b3f280 + iVar2;
    *(char *)((int)&DAT_00b34c80 + iVar2) = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  pcVar1 = (char *)0xb34c7f;
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (pcVar3[1] != '\0');
  builtin_strncpy(pcVar3 + 1,"Warnings.txt",0xd);
  return &DAT_00b34c80;
}



undefined4 * FUN_004944f0(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = 0;
  do {
    pcVar1 = &DAT_00b3f280 + iVar2;
    *(char *)((int)&DAT_00b34c80 + iVar2) = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  pcVar1 = (char *)0xb34c7f;
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (pcVar3[1] != '\0');
  builtin_strncpy(pcVar3 + 1,"ProgramFlow.txt",0x10);
  return &DAT_00b34c80;
}



undefined4 * FUN_00494560(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = 0;
  do {
    pcVar1 = &DAT_00b3f280 + iVar2;
    *(char *)((int)&DAT_00b34c80 + iVar2) = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  pcVar1 = (char *)0xb34c7f;
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (pcVar3[1] != '\0');
  builtin_strncpy(pcVar3 + 1,"ProgrammerOutput.txt",0x15);
  return &DAT_00b34c80;
}



undefined4 * FUN_004945e0(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = 0;
  do {
    pcVar1 = &DAT_00b3f280 + iVar2;
    *(char *)((int)&DAT_00b34c80 + iVar2) = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  pcVar1 = (char *)0xb34c7f;
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (pcVar3[1] != '\0');
  builtin_strncpy(pcVar3 + 1,"StackTrace.txt",0xf);
  return &DAT_00b34c80;
}



void FUN_00494650(undefined1 param_1)

{
  LPCSTR pCVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3da08;
  *(undefined1 *)(in_ECX + 1) = param_1;
  pCVar1 = (LPCSTR)FUN_00494480();
  DeleteFileA(pCVar1);
  pCVar1 = (LPCSTR)FUN_004944f0();
  DeleteFileA(pCVar1);
  pCVar1 = (LPCSTR)FUN_00494560();
  DeleteFileA(pCVar1);
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  DAT_00b34d90 = in_ECX;
  PTR_FUN_00b27e60 = FUN_006f7070;
  DAT_00b40608 = FUN_0060d0a0;
  return;
}



void FUN_004946b0(void)

{
  LPCSTR pCVar1;
  undefined4 *in_ECX;
  DWORD DVar2;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  HANDLE pvVar3;
  
  pvVar3 = (HANDLE)0x0;
  dwFlagsAndAttributes = 0x80;
  dwCreationDisposition = 3;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  dwShareMode = 1;
  DVar2 = 0x80000000;
  *in_ECX = &PTR_LAB_00a3da08;
  pCVar1 = (LPCSTR)FUN_00494480();
  pvVar3 = CreateFileA(pCVar1,DVar2,dwShareMode,lpSecurityAttributes,dwCreationDisposition,
                       dwFlagsAndAttributes,pvVar3);
  if ((pvVar3 != (HANDLE)0x0) && (pvVar3 != (HANDLE)0xffffffff)) {
    DVar2 = GetLastError();
    if (DVar2 == 0) {
      DVar2 = GetFileSize(pvVar3,(LPDWORD)0x0);
      CloseHandle(pvVar3);
      if (DVar2 == 0x46) {
        pCVar1 = (LPCSTR)FUN_00494480();
        DeleteFileA(pCVar1);
      }
    }
  }
  if (DAT_00b34d90 == in_ECX) {
    DAT_00b34d90 = (undefined4 *)0x0;
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00494890(undefined4 param_1)

{
  int iVar1;
  clock_t cVar2;
  undefined4 uVar3;
  int *in_ECX;
  char local_4e24 [20000];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_4e24;
  if (DAT_00b06b30 == '\0') {
    cVar2 = _clock();
    _sprintf(local_4e24,"%02d%02d%02d: %s",((cVar2 / 1000) / 0x3c) % 0x3c,(cVar2 / 1000) % 0x3c,
             (cVar2 / 500) % 100,param_1);
    iVar1 = *in_ECX;
    uVar3 = FUN_004944f0(local_4e24,1);
    (**(code **)(iVar1 + 0x28))(uVar3);
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00494950(char *param_1)

{
  char cVar1;
  int iVar2;
  LPCSTR lpFileName;
  undefined4 uVar3;
  int *in_ECX;
  char local_4e24 [20000];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_4e24;
  if (DAT_00b06b15 != '\0') {
    lpFileName = (LPCSTR)FUN_004945e0();
    DeleteFileA(lpFileName);
    DAT_00b06b15 = '\0';
  }
  iVar2 = -(int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)(local_4e24 + iVar2)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  iVar2 = *in_ECX;
  uVar3 = FUN_004945e0(local_4e24,1);
  (**(code **)(iVar2 + 0x28))(uVar3);
  return;
}



int FUN_004949e0(LPCSTR param_1,LPCSTR param_2,uint param_3)

{
  DWORD DVar1;
  HWND pHVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  DWORD DVar6;
  undefined4 uVar7;
  int iVar8;
  HWND pHVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte bVar14;
  int local_24;
  tagMSG tStack_1c;
  
  local_24 = 6;
  if (DAT_00b06b38 != '\0') {
    cVar4 = '\x06';
    if ((param_3 & 0xf) == 2) {
      cVar4 = '\x05';
    }
    return (int)cVar4;
  }
  FUN_0047d120();
  bVar14 = (byte)param_3 & 0xf;
  if ((((DAT_00b06b16 == '\0') || (DAT_00b33398 == 0)) || (*(int *)(DAT_00b33398 + 0x20) == 0)) ||
     (DVar1 = *(DWORD *)(DAT_00b33398 + 0x10), DVar6 = GetCurrentThreadId(), DVar6 != DVar1)) {
    if ((DAT_00b06c74 == '\0') || (DAT_00b34fa8 == 0)) {
      local_24 = MessageBoxA((HWND)0x0,param_1,param_2,param_3);
      goto LAB_00494e4a;
    }
    if (bVar14 != 2) {
      if ((2 < bVar14) && (bVar14 < 5)) {
        local_24 = 6;
      }
      goto LAB_00494e59;
    }
  }
  else {
    uVar11 = 0;
    uVar12 = 0;
    DAT_00b06b16 = 0;
    param_3._0_1_ = -1;
    cVar4 = '\0';
    if (bVar14 == 2) {
      cVar4 = '\x03';
      uVar7 = DAT_00b34db4;
      uVar11 = DAT_00b34dbc;
      uVar12 = DAT_00b34dc4;
    }
    else {
      uVar13 = DAT_00b34dac;
      if ((bVar14 == 3) || (uVar7 = DAT_00b34dcc, uVar13 = uVar12, bVar14 == 4)) {
        uVar7 = DAT_00b34d9c;
        uVar11 = DAT_00b34da4;
        uVar12 = uVar13;
      }
    }
    cVar5 = FUN_00579c10(param_1,0,cVar4,uVar7,uVar11,uVar12,0);
    if (cVar5 != '\0') {
      cVar5 = FUN_00572df0(2);
      FUN_00579930();
      FUN_00572ec0(2,1);
      do {
        tStack_1c.hwnd = (HWND)0x0;
        tStack_1c.message = 0;
        tStack_1c.wParam = 0;
        tStack_1c.lParam = 0;
        tStack_1c.time = 0;
        tStack_1c.pt.x = 0;
        tStack_1c.pt.y = 0;
        iVar8 = PeekMessageA(&tStack_1c,(HWND)0x0,0,0,1);
        while (iVar8 != 0) {
          TranslateMessage(&tStack_1c);
          DispatchMessageA(&tStack_1c);
          iVar8 = PeekMessageA(&tStack_1c,(HWND)0x0,0,0,1);
        }
        pHVar2 = *(HWND *)(DAT_00b33398 + 8);
        pHVar9 = GetActiveWindow();
        if (pHVar9 == pHVar2) {
          FUN_004046a0();
          if (bVar14 == 2) {
            iVar8 = FUN_004032d0(0x1e,1);
            cVar3 = cVar4;
            if ((iVar8 == 0) && (iVar8 = FUN_004032d0(0x1e,0), iVar8 == 0)) {
              iVar8 = FUN_004032d0(0x13,1);
              if ((iVar8 == 0) && (iVar8 = FUN_004032d0(0x13,0), iVar8 == 0)) {
                iVar8 = FUN_004032d0(0x17,1);
                if ((iVar8 != 0) ||
                   (iVar8 = FUN_004032d0(0x17,0), cVar3 = (byte)param_3, iVar8 != 0)) {
                  cVar3 = cVar4 + '\x02';
                }
              }
              else {
                cVar3 = cVar4 + '\x01';
              }
            }
          }
          else {
            if (bVar14 == 3) {
              iVar8 = FUN_004032d0(1,1);
              if ((iVar8 != 0) || (iVar8 = FUN_004032d0(1,0), iVar8 != 0)) {
                param_3._0_1_ = '\x02';
              }
LAB_00494c0e:
              iVar8 = FUN_004032d0(0x1c,1);
              if (((((iVar8 == 0) && (iVar8 = FUN_004032d0(0x1c,0), iVar8 == 0)) &&
                   (iVar8 = FUN_004032d0(0x15,1), iVar8 == 0)) &&
                  ((iVar8 = FUN_004032d0(0x15,0), iVar8 == 0 &&
                   (iVar8 = FUN_004032d0(0x9c,1), iVar8 == 0)))) &&
                 (iVar8 = FUN_004032d0(0x9c,0), iVar8 == 0)) {
                iVar8 = FUN_004032d0(0x31,1);
                if ((iVar8 != 0) ||
                   (iVar8 = FUN_004032d0(0x31,0), cVar3 = (byte)param_3, iVar8 != 0)) {
                  param_3._0_1_ = '\x01';
                  cVar3 = (byte)param_3;
                }
                goto LAB_00494d0a;
              }
            }
            else {
              if (bVar14 == 4) goto LAB_00494c0e;
              iVar8 = FUN_004032d0(0x1c,1);
              if ((((iVar8 == 0) && (iVar8 = FUN_004032d0(0x1c,0), iVar8 == 0)) &&
                  (iVar8 = FUN_004032d0(0x9c,1), iVar8 == 0)) &&
                 (iVar8 = FUN_004032d0(0x9c,0), cVar3 = (byte)param_3, iVar8 == 0))
              goto LAB_00494d0a;
            }
            param_3._0_1_ = '\0';
            cVar3 = (byte)param_3;
          }
LAB_00494d0a:
          param_3._0_1_ = cVar3;
          FUN_005791a0();
          if ((byte)param_3 == -1) {
            FUN_00579970();
            param_3._0_1_ = FUN_00578d70();
          }
          else if (((byte)param_3 != '\x02') ||
                  (iVar8 = FUN_00582160(0,1), *(int *)(iVar8 + 0x60) == 0)) {
            puVar10 = (undefined4 *)FUN_00589b70(0x3e9);
            if (puVar10 != (undefined4 *)0x0) {
              (**(code **)*puVar10)(1);
            }
            FUN_00403160();
          }
          FUN_00579220();
        }
        FUN_00579260(0);
        FUN_005792b0();
      } while ((byte)param_3 == -1);
      switch((byte)param_3) {
      case 0:
        local_24 = 6;
        break;
      case 1:
        local_24 = 7;
        break;
      case 2:
        local_24 = 2;
        break;
      case 3:
        local_24 = 3;
        break;
      case 4:
        local_24 = 4;
        break;
      case 5:
        local_24 = 5;
      }
      FUN_00578da0();
      FUN_00579260(0);
      FUN_005792b0();
      if (cVar5 != '\0') {
        puVar10 = (undefined4 *)FUN_00403c00();
        FUN_005732d0(2,*puVar10);
      }
    }
    DAT_00b06b16 = '\x01';
LAB_00494e4a:
    if (local_24 != 4) goto LAB_00494e59;
  }
  local_24 = 5;
LAB_00494e59:
  FUN_0047d0f0();
  return local_24;
}



uint FUN_00494e90(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  uint uVar4;
  
  uVar2 = 0xffffffff;
  uVar4 = uVar2;
  if (((param_1 != 0) && (uVar1 = *(uint *)(in_ECX + 0xc), uVar1 != 0)) && (uVar1 != 0)) {
    piVar3 = *(int **)(in_ECX + 4);
    uVar4 = 0;
    while (*piVar3 != param_1) {
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
      if (uVar1 <= uVar4) {
        return uVar2;
      }
    }
  }
  return uVar4;
}



undefined4 FUN_00494ed0(uint param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if (param_1 < *(uint *)(in_ECX + 0xc)) {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 4) + param_1 * 4);
  }
  return uVar1;
}



int FUN_00494ef0(void)

{
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    return *(int *)(in_ECX + 8) + 0x14;
  }
  return 0;
}



undefined4 FUN_00494f10(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  if ((((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) &&
      (piVar2 = (int *)(*(int *)(in_ECX + 8) + 0x14), piVar2 != (int *)0x0)) &&
     (iVar1 = *piVar2, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}



void FUN_00494f30(void)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x1c));
  SendMessageA(*(HWND *)(in_ECX + 0xc),0x1101,0,-0x10000);
  ImageList_Destroy(*(HIMAGELIST *)(in_ECX + 0x14));
  DestroyWindow(*(HWND *)(in_ECX + 0xc));
  DestroyWindow(*(HWND *)(in_ECX + 8));
  DAT_00b3cc34 = 0;
  DAT_00b3cc30 = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00494f90(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *unaff_FS_OFFSET;
  undefined1 local_59c [1159];
  char cStack_115;
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b018b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_59c;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffa5c;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar6 = 0;
  if ((param_2 != 0) && (param_2 != 1)) {
    if ((param_2 != 3) || (param_1 == 0)) goto LAB_00495001;
    if (param_3 == 0x70) {
      *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 1;
    }
    else if (param_3 == 0x71) {
      *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xfffe;
    }
    else {
      if (param_3 != 0x72) {
        if (param_3 == 0x7a) {
          FUN_00713a30(uVar2);
          local_4 = 0;
          FUN_00713e50(param_1);
          pcVar3 = *(char **)(param_1 + 8);
          if (pcVar3 == (char *)0x0) {
            pcVar3 = "NullObject";
          }
          builtin_strncpy(local_114,"c:\\",4);
          pcVar4 = pcVar3;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          pcVar7 = &cStack_115;
          do {
            pcVar5 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar5 != '\0');
          pcVar5 = pcVar3;
          for (uVar2 = (uint)((int)pcVar4 - (int)pcVar3) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar2 = (int)pcVar4 - (int)pcVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *pcVar7 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar7 = pcVar7 + 1;
          }
          pcVar3 = &cStack_115;
          do {
            pcVar4 = pcVar3;
            pcVar3 = pcVar4 + 1;
          } while (pcVar4[1] != '\0');
          builtin_strncpy(pcVar4 + 1,".nif",5);
          FUN_00712140(local_114);
          uVar6 = 1;
          local_4 = 0xffffffff;
          FUN_00713c60();
        }
        goto LAB_00495001;
      }
      FUN_00707610();
      FUN_00707980();
      FUN_00707370(0,0);
    }
  }
  uVar6 = 1;
LAB_00495001:
  *unaff_FS_OFFSET = local_c;
  return uVar6;
}



void FUN_00495120(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_EBX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b01cb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffac;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  if (param_2 != (int *)0x0) {
    puVar3 = (undefined4 *)FUN_00401f00(0x10,uVar2);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *(undefined2 *)(puVar3 + 2) = 0x80;
      *(undefined2 *)((int)puVar3 + 0xe) = 0x80;
      *puVar3 = &PTR__scalar_deleting_destructor__00a38fb4;
      *(undefined2 *)((int)puVar3 + 10) = 0;
      *(undefined2 *)(puVar3 + 3) = 0;
      uVar4 = FUN_00401f00(0x200,uVar2);
      puVar3[1] = uVar4;
    }
    local_40 = param_1;
    local_4 = 0xffffffff;
    local_3c = 0xffff0002;
    local_38 = 0x27;
    local_14 = param_2;
    (**(code **)(*param_2 + 0x30))(puVar3);
    if (*(short *)((int)puVar3 + 10) != 0) {
      do {
        uStack_2c = *(undefined4 *)(puVar3[1] + uVar5 * 4);
        uStack_24 = 6;
        uStack_20 = 6;
        SendMessageA(*(HWND *)(unaff_EBX + 0xc),0x1100,0,(LPARAM)local_44);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)((int)puVar3 + 10));
    }
    uVar1 = 0;
    if (*(short *)((int)puVar3 + 10) != 0) {
      do {
        uVar2 = (uint)uVar1;
        uVar1 = uVar1 + 1;
        *(undefined4 *)(puVar3[1] + uVar2 * 4) = 0;
      } while (uVar1 < *(ushort *)((int)puVar3 + 10));
    }
    *(undefined2 *)((int)puVar3 + 10) = 0;
    *(undefined2 *)(puVar3 + 3) = 0;
    (**(code **)*puVar3)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00495270(LRESULT param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  char *pcVar5;
  int *unaff_FS_OFFSET;
  undefined4 *local_148;
  LRESULT local_144 [5];
  undefined4 uStack_130;
  char *local_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 local_120;
  int *local_118;
  char local_110 [256];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b01fe;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_148;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffea8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 != (int *)0x0) {
    puVar3 = (undefined4 *)FUN_00401f00(0x10,uVar2);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *(undefined2 *)(puVar3 + 2) = 0x80;
      *(undefined2 *)((int)puVar3 + 0xe) = 0x80;
      *(undefined2 *)((int)puVar3 + 10) = 0;
      *(undefined2 *)(puVar3 + 3) = 0;
      *puVar3 = &PTR__scalar_deleting_destructor__00a38fb4;
      local_148 = puVar3;
      uVar4 = FUN_00401f00(0x200,uVar2);
      puVar3[1] = uVar4;
    }
    pcVar5 = (char *)0x0;
    local_4 = 0xffffffff;
    local_144[1] = 0xffff0002;
    local_144[2] = 0x27;
    local_118 = param_2;
    switch(param_2[0x11]) {
    case 0:
      pcVar5 = "INACTIVE";
      break;
    case 1:
      pcVar5 = "ANIMATING";
      break;
    case 2:
      pcVar5 = "EASEIN";
      break;
    case 3:
      pcVar5 = "EASEOUT";
      break;
    case 4:
      pcVar5 = "TRANSSOURCE";
      break;
    case 5:
      pcVar5 = "TRANSDEST";
      break;
    case 6:
      pcVar5 = "MORPHSOURCE";
    }
    local_148 = (undefined4 *)param_2[0x12];
    if ((float)local_148 < 0.0) {
      local_148 = (undefined4 *)0x0;
    }
    _sprintf(local_110,"%s: %s, Offset: %.2f, Count: %d",param_2[2],pcVar5,(double)(float)local_148,
             param_2[3]);
    local_12c = local_110;
    local_144[0] = param_1;
    local_124 = 5;
    local_120 = 5;
    local_144[0] = SendMessageA(*(HWND *)(in_ECX + 0xc),0x1100,0,(LPARAM)local_144);
    (**(code **)(*param_2 + 0x30))(puVar3);
    uVar2 = 0;
    if (*(short *)((int)puVar3 + 10) != 0) {
      do {
        uStack_130 = *(undefined4 *)(puVar3[1] + uVar2 * 4);
        uStack_128 = 6;
        local_124 = 6;
        SendMessageA(*(HWND *)(in_ECX + 0xc),0x1100,0,(LPARAM)&local_148);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)((int)puVar3 + 10));
    }
    uVar1 = 0;
    if (*(short *)((int)puVar3 + 10) != 0) {
      do {
        uVar2 = (uint)uVar1;
        uVar1 = uVar1 + 1;
        *(undefined4 *)(puVar3[1] + uVar2 * 4) = 0;
      } while (uVar1 < *(ushort *)((int)puVar3 + 10));
    }
    *(undefined2 *)((int)puVar3 + 10) = 0;
    *(undefined2 *)(puVar3 + 3) = 0;
    (**(code **)*puVar3)();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004954b0(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_ECX;
  bool bVar4;
  
  if (*(uint *)(in_ECX + 0xd0) <= param_1) {
    return 0;
  }
  puVar2 = *(undefined4 **)(in_ECX + 200);
  uVar3 = 0;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    bVar4 = uVar3 != param_1;
    uVar3 = uVar3 + 1;
  } while (bVar4);
  return *puVar1;
}



void FUN_004954f0(HWND param_1,LPARAM param_2,WPARAM param_3)

{
  LRESULT LVar1;
  int iVar2;
  undefined4 local_2c;
  int local_28;
  undefined *local_1c;
  undefined4 local_18;
  int *local_8;
  
  _memset(&local_2c,0,0x2c);
  local_2c = 0xd;
  local_1c = &DAT_00b34e98;
  local_18 = 0x104;
  for (local_28 = SendMessageA(param_1,0x110a,4,param_2); local_28 != 0;
      local_28 = SendMessageA(param_1,0x110a,1,local_28)) {
    LVar1 = SendMessageA(param_1,0x110c,0,(LPARAM)&local_2c);
    if ((((LVar1 != 0) && (local_8 != (int *)0x0)) &&
        (iVar2 = (**(code **)(*local_8 + 8))(), iVar2 != 0)) && (*(short *)(iVar2 + 0xb8) != 0)) {
      SendMessageA(param_1,0x1102,param_3,local_28);
      FUN_004954f0(param_1,local_28,param_3);
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00495840(uint param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  bool bVar9;
  uint local_94;
  int local_90;
  uint uStack_8c;
  undefined4 *puStack_88;
  uint auStack_84 [6];
  char *pcStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *piStack_58;
  char acStack_50 [63];
  undefined1 uStack_11;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b023e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_94;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff5c;
  *unaff_FS_OFFSET = (int)&local_c;
  local_94 = param_1;
  if (param_2 != (int *)0x0) {
    for (puVar6 = (undefined4 *)(**(code **)(*param_2 + 4))(uVar5); puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)puVar6[1]) {
      if (puVar6 == &DAT_00b40864) {
        bVar2 = 1;
        goto LAB_004958b6;
      }
    }
    bVar2 = 0;
LAB_004958b6:
    uVar5 = -(uint)bVar2 & (uint)param_2;
    if (uVar5 != 0) {
      uStack_8c = uVar5;
      puVar6 = (undefined4 *)FUN_00401f00(0x10);
      uStack_4 = 0;
      puStack_88 = puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *(undefined2 *)((int)puVar6 + 10) = 0;
        *(undefined2 *)(puVar6 + 3) = 0;
        *puVar6 = &PTR__scalar_deleting_destructor__00a38fb4;
        *(undefined2 *)(puVar6 + 2) = 0x80;
        *(undefined2 *)((int)puVar6 + 0xe) = 0x80;
        uVar7 = FUN_00401f00(0x200);
        puVar6[1] = uVar7;
      }
      uStack_64 = 5;
      uStack_60 = 5;
      auStack_84[0] = local_94;
      uStack_4 = 0xffffffff;
      auStack_84[1] = 0xffff0002;
      auStack_84[2] = 0x27;
      piStack_58 = param_2;
      pcStack_6c = "Modifiers";
      puStack_88 = (undefined4 *)SendMessageA(*(HWND *)(local_90 + 0xc),0x1100,0,(LPARAM)auStack_84)
      ;
      local_94 = 0;
      if (*(int *)(uVar5 + 0xd0) != 0) {
        if (*(int *)(uVar5 + 0xd0) == 0) goto LAB_00495a9e;
        do {
          puVar8 = *(undefined4 **)(uVar5 + 200);
          uVar3 = 0;
          do {
            if (puVar8 == (undefined4 *)0x0) goto LAB_00495a9e;
            piVar1 = (int *)puVar8[2];
            puVar8 = (undefined4 *)*puVar8;
            bVar9 = uVar3 != local_94;
            uVar3 = uVar3 + 1;
          } while (bVar9);
          uVar5 = uStack_8c;
          if (piVar1 != (int *)0x0) {
            puVar8 = (undefined4 *)(**(code **)(*piVar1 + 4))();
            _strncpy(acStack_50,(char *)*puVar8,0x3f);
            pcStack_6c = acStack_50;
            auStack_84[0] = (uint)puStack_88;
            uStack_11 = 0;
            uStack_64 = 0;
            uStack_60 = 0;
            auStack_84[0] = SendMessageA(*(HWND *)(local_90 + 0xc),0x1100,0,(LPARAM)auStack_84);
            (**(code **)(*piVar1 + 0x30))(puVar6);
            uVar5 = 0;
            if (*(short *)((int)puVar6 + 10) != 0) {
              do {
                pcStack_6c = *(char **)(puVar6[1] + uVar5 * 4);
                uStack_64 = 6;
                uStack_60 = 6;
                SendMessageA(*(HWND *)(local_90 + 0xc),0x1100,0,(LPARAM)auStack_84);
                uVar5 = uVar5 + 1;
              } while (uVar5 < *(ushort *)((int)puVar6 + 10));
            }
            uVar4 = 0;
            if (*(short *)((int)puVar6 + 10) != 0) {
              do {
                uVar5 = (uint)uVar4;
                uVar4 = uVar4 + 1;
                *(undefined4 *)(puVar6[1] + uVar5 * 4) = 0;
              } while (uVar4 < *(ushort *)((int)puVar6 + 10));
            }
            *(undefined2 *)((int)puVar6 + 10) = 0;
            *(undefined2 *)(puVar6 + 3) = 0;
            uVar5 = uStack_8c;
          }
LAB_00495a9e:
          local_94 = local_94 + 1;
        } while (local_94 < *(uint *)(uVar5 + 0xd0));
      }
      if (puVar6 != (undefined4 *)0x0) {
        (**(code **)*puVar6)(1);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00495af0(undefined4 param_1,int param_2)

{
  int iVar1;
  LRESULT LVar2;
  int in_ECX;
  uint uVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char *local_1c;
  undefined4 local_14;
  undefined4 local_10;
  int local_8;
  
  if (param_2 != 0) {
    local_30 = 0xffff0002;
    local_2c = 0x27;
    local_8 = param_2;
    if (*(int *)(param_2 + 0x7c) != 0) {
      local_1c = "Object Palette";
      local_14 = 5;
      local_10 = 5;
      local_34 = param_1;
      LVar2 = SendMessageA(*(HWND *)(in_ECX + 0xc),0x1100,0,(LPARAM)&local_34);
      FUN_00495120(LVar2,*(undefined4 *)(param_2 + 0x7c));
    }
    local_1c = "Active Sequences";
    local_14 = 5;
    local_10 = 5;
    local_34 = param_1;
    LVar2 = SendMessageA(*(HWND *)(in_ECX + 0xc),0x1100,0,(LPARAM)&local_34);
    uVar3 = 0;
    if (*(short *)(param_2 + 0x46) != 0) {
      do {
        iVar1 = *(int *)(*(int *)(param_2 + 0x40) + uVar3 * 4);
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x44) != 0)) {
          FUN_00495270(LVar2,iVar1);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(param_2 + 0x46));
    }
    local_1c = "Inactive Sequences";
    LVar2 = SendMessageA(*(HWND *)(in_ECX + 0xc),0x1100,0,(LPARAM)&local_34);
    uVar3 = 0;
    if (*(short *)(param_2 + 0x46) != 0) {
      do {
        iVar1 = *(int *)(*(int *)(param_2 + 0x40) + uVar3 * 4);
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x44) == 0)) {
          FUN_00495270(LVar2,iVar1);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(param_2 + 0x46));
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00495c10(LRESULT param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  LRESULT LVar3;
  int in_ECX;
  ushort uVar4;
  int iVar5;
  LRESULT local_138 [6];
  char *local_120;
  undefined4 local_118;
  undefined4 local_114;
  int local_10c;
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_138;
  if (param_2 != 0) {
    local_138[0] = param_1;
    local_118 = 5;
    local_114 = 5;
    local_138[1] = 0xffff0002;
    local_138[2] = 0x27;
    local_10c = param_2;
    local_120 = "NiBlendTransformInterps";
    local_138[0] = SendMessageA(*(HWND *)(in_ECX + 0xc),0x1100,0,(LPARAM)local_138);
    uVar4 = 0;
    if (*(short *)(param_2 + 0x44) != 0) {
      do {
        uVar2 = (uint)uVar4;
        iVar1 = *(int *)(*(int *)(param_2 + 0x40) + uVar2 * 4);
        if ((iVar1 != 0) && (iVar5 = uVar2 * 0x30 + *(int *)(param_2 + 0x3c), iVar5 != 0)) {
          local_10c = iVar5;
          _sprintf(local_104,"Interp: %d, Target:%s",uVar2,*(undefined4 *)(iVar1 + 8));
          local_120 = local_104;
          LVar3 = SendMessageA(*(HWND *)(in_ECX + 0xc),0x1100,0,(LPARAM)local_138);
          FUN_00495120(LVar3,iVar5);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)(param_2 + 0x44));
    }
  }
  return;
}



void FUN_00495d10(int param_1,int param_2,int param_3,int param_4)

{
  HWND pHVar1;
  undefined4 *in_ECX;
  INITCOMMONCONTROLSEX local_40;
  tagRECT local_38;
  WNDCLASSA local_28;
  
  local_40.dwSize = 8;
  local_40.dwICC = 2;
  InitCommonControlsEx(&local_40);
  local_28.hInstance = (HINSTANCE)*in_ECX;
  local_28.style = 3;
  local_28.lpfnWndProc = (WNDPROC)&LAB_004955b0;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 0;
  local_28.hIcon = LoadIconA((HINSTANCE)0x0,&DAT_00007f00);
  local_28.hCursor = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  local_28.hbrBackground = GetStockObject(0);
  local_28.lpszClassName = s_NiTreeCtrl_00b06b80;
  local_28.lpszMenuName = (LPCSTR)0x0;
  RegisterClassA(&local_28);
  pHVar1 = CreateWindowExA(0,s_NiTreeCtrl_00b06b80,(LPCSTR)in_ECX[7],0xce0200,param_1,param_2,
                           param_3,param_4,(HWND)0x0,(HMENU)0x0,(HINSTANCE)*in_ECX,(LPVOID)0x0);
  in_ECX[2] = pHVar1;
  GetClientRect(pHVar1,&local_38);
  pHVar1 = CreateWindowExA(0,"SysTreeView32","",0x50010007,0,0,(local_38.right - local_38.left) + 1,
                           (local_38.bottom - local_38.top) + 1,(HWND)in_ECX[2],(HMENU)0x0,
                           (HINSTANCE)*in_ECX,(LPVOID)0x0);
  in_ECX[3] = pHVar1;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00495e30(uint param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  LONG LVar10;
  int unaff_EBX;
  uint uVar11;
  int *unaff_FS_OFFSET;
  undefined4 *local_9c;
  undefined4 *local_98;
  uint uStack_94;
  undefined4 *local_90;
  undefined4 *local_8c;
  undefined1 auStack_88 [4];
  uint auStack_84 [5];
  undefined4 uStack_70;
  char *pcStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *local_58;
  char acStack_50 [63];
  undefined1 uStack_11;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b0289;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_9c;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff54;
  *unaff_FS_OFFSET = (int)&local_c;
  local_90 = (undefined4 *)0x0;
  if (param_2 == (int *)0x0) goto LAB_0049626a;
  local_98 = (undefined4 *)FUN_00401f00(0x10,uVar5);
  local_4 = 0;
  local_8c = local_98;
  if (local_98 == (undefined4 *)0x0) {
    local_98 = (undefined4 *)0x0;
  }
  else {
    *(undefined2 *)(local_98 + 2) = 0x80;
    *(undefined2 *)((int)local_98 + 0xe) = 0x80;
    *local_98 = &PTR__scalar_deleting_destructor__00a38fb4;
    *(undefined2 *)((int)local_98 + 10) = 0;
    *(undefined2 *)(local_98 + 3) = 0;
    uVar6 = FUN_00401f00(0x200,uVar5);
    local_98[1] = uVar6;
  }
  local_4 = 0xffffffff;
  auStack_84[1] = 0xffff0002;
  auStack_84[2] = 0x27;
  local_58 = param_2;
  puVar7 = (undefined4 *)(**(code **)(*param_2 + 4))();
  _strncpy(acStack_50,(char *)*puVar7,0x3f);
  pcStack_6c = acStack_50;
  auStack_84[0] = param_1;
  uStack_11 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_94 = SendMessageA((HWND)local_9c[3],0x1100,0,(LPARAM)auStack_84);
  auStack_84[0] = uStack_94;
  (**(code **)(*param_2 + 0x30))(local_98);
  uVar5 = 0;
  if (*(short *)((int)local_9c + 10) != 0) {
    do {
      uStack_70 = *(undefined4 *)(local_9c[1] + uVar5 * 4);
      uStack_68 = 6;
      uStack_64 = 6;
      SendMessageA(*(HWND *)(unaff_EBX + 0xc),0x1100,0,(LPARAM)auStack_88);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)((int)local_9c + 10));
  }
  uVar4 = 0;
  if (*(short *)((int)local_9c + 10) != 0) {
    do {
      uVar5 = (uint)uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(local_9c[1] + uVar5 * 4) = 0;
    } while (uVar4 < *(ushort *)((int)local_9c + 10));
  }
  *(undefined2 *)((int)local_9c + 10) = 0;
  *(undefined2 *)(local_9c + 3) = 0;
  for (puVar7 = (undefined4 *)(**(code **)(*param_2 + 4))(); puVar7 != (undefined4 *)0x0;
      puVar7 = (undefined4 *)puVar7[1]) {
    if (puVar7 == &DAT_00ba7d38) {
      bVar2 = 1;
      goto LAB_00496000;
    }
  }
  bVar2 = 0;
LAB_00496000:
  if ((-(uint)bVar2 & (uint)param_2) == 0) {
    for (puVar7 = (undefined4 *)(**(code **)(*param_2 + 4))(); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[1]) {
      if (puVar7 == &DAT_00ba7d78) {
        bVar2 = 1;
        goto LAB_00496153;
      }
    }
    bVar2 = 0;
LAB_00496153:
    uVar5 = -(uint)bVar2 & (uint)param_2;
    if (uVar5 == 0) {
      iVar9 = FUN_00560920(&DAT_00ba7d44,param_2);
      if (iVar9 == 0) {
        piVar8 = (int *)FUN_00560920(&DAT_00ba7d50,param_2);
        if (piVar8 == (int *)0x0) goto LAB_0049625e;
        iVar9 = (**(code **)(*piVar8 + 0x8c))();
        if (iVar9 == 0) goto LAB_0049624d;
        uVar6 = *(undefined4 *)(iVar9 + 0xc);
      }
      else {
        uVar6 = FUN_0089fe90(0x42);
      }
    }
    else {
      iVar9 = FUN_00560920(&DAT_00ba7d68,uVar5);
      if (iVar9 == 0) {
        iVar9 = FUN_00560920(&DAT_00ba7d5c,uVar5);
        if ((((iVar9 != 0) && (*(int **)(iVar9 + 8) != (int *)0x0)) &&
            (uVar5 = (**(code **)(**(int **)(iVar9 + 8) + 0x1c))(), uVar5 != 0)) &&
           (uVar11 = 0, uVar5 != 0)) {
          do {
            if ((*(int *)(iVar9 + 8) == 0) ||
               (iVar1 = *(int *)(*(int *)(*(int *)(iVar9 + 8) + 0x10) + uVar11 * 8), iVar1 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(undefined4 *)(iVar1 + 8);
            }
            FUN_00495e30(local_98,uVar6);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar5);
        }
        goto LAB_0049625e;
      }
      if ((*(int *)(iVar9 + 8) == 0) || (iVar9 = *(int *)(*(int *)(iVar9 + 8) + 0xc), iVar9 == 0)) {
LAB_0049624d:
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(iVar9 + 8);
      }
    }
    FUN_00495e30(local_98,uVar6);
  }
  else {
    iVar9 = *(int *)((-(uint)bVar2 & (uint)param_2) + 8);
    if (((iVar9 == 0) || (piVar8 = (int *)(iVar9 + 0x14), piVar8 == (int *)0x0)) ||
       (iVar9 = *piVar8, iVar9 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(iVar9 + 8);
    }
    FUN_00495e30(local_98,uVar6);
    for (puVar7 = (undefined4 *)(**(code **)(*param_2 + 4))(); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[1]) {
      if (puVar7 == &DAT_00ba7d84) {
        bVar2 = 1;
        goto LAB_00496057;
      }
    }
    bVar2 = 0;
LAB_00496057:
    if (((-(uint)bVar2 & (uint)param_2) != 0) && (iVar9 = FUN_008a4740(), iVar9 != 0)) {
      iVar9 = (-(uint)bVar2 & (uint)param_2) + 0x10;
      do {
        if (iVar9 == 0) {
LAB_004960a1:
          bVar3 = false;
        }
        else {
          piVar8 = (int *)FUN_00677c70(&local_8c);
          uStack_94 = uStack_94 | 1;
          if (*piVar8 == 0) goto LAB_004960a1;
          bVar3 = true;
        }
        puVar7 = local_8c;
        if ((((uStack_94 & 1) != 0) &&
            (uStack_94 = uStack_94 & 0xfffffffe, local_8c != (undefined4 *)0x0)) &&
           ((LVar10 = InterlockedDecrement(local_8c + 1), LVar10 == 0 &&
            (puVar7 != (undefined4 *)0x0)))) {
          (**(code **)*puVar7)(1);
        }
        if (!bVar3) break;
        puVar7 = (undefined4 *)FUN_00677c70(&local_90);
        puStack_8 = (undefined1 *)0x1;
        FUN_00495e30(local_98,*puVar7);
        puVar7 = local_90;
        puStack_8 = (undefined1 *)0xffffffff;
        if (((local_90 != (undefined4 *)0x0) &&
            (LVar10 = InterlockedDecrement(local_90 + 1), LVar10 == 0)) &&
           (puVar7 != (undefined4 *)0x0)) {
          (**(code **)*puVar7)(1);
        }
        iVar9 = *(int *)(iVar9 + 4);
      } while( true );
    }
  }
LAB_0049625e:
  (**(code **)*local_9c)(1);
LAB_0049626a:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004962a0(LRESULT param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  undefined4 unaff_EBX;
  int *unaff_FS_OFFSET;
  LRESULT local_90;
  int *piStack_8c;
  LRESULT aLStack_88 [5];
  undefined4 uStack_74;
  char *pcStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int *piStack_5c;
  undefined4 *puStack_54;
  char acStack_50 [63];
  undefined1 uStack_11;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b02cb;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_90;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff60;
  *unaff_FS_OFFSET = (int)&local_c;
  local_90 = param_1;
  if (param_2 != (int *)0x0) {
    for (puVar4 = (undefined4 *)(**(code **)(*param_2 + 4))(uVar3); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00ba7b80) {
        bVar1 = 1;
        goto LAB_00496314;
      }
    }
    bVar1 = 0;
LAB_00496314:
    piStack_8c = (int *)(-(uint)bVar1 & (uint)param_2);
    if (piStack_8c != (int *)0x0) {
      puVar4 = (undefined4 *)FUN_00401f00(0x10);
      uStack_4 = 0;
      puStack_54 = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *(undefined2 *)((int)puVar4 + 10) = 0;
        *(undefined2 *)(puVar4 + 3) = 0;
        *puVar4 = &PTR__scalar_deleting_destructor__00a38fb4;
        *(undefined2 *)(puVar4 + 2) = 0x80;
        *(undefined2 *)((int)puVar4 + 0xe) = 0x80;
        uVar5 = FUN_00401f00(0x200);
        puVar4[1] = uVar5;
      }
      uStack_68 = 5;
      uStack_64 = 5;
      uStack_4 = 0xffffffff;
      aLStack_88[1] = 0xffff0002;
      aLStack_88[2] = 0x27;
      piStack_5c = param_2;
      pcStack_70 = "Havok";
      aLStack_88[0] = local_90;
      local_90 = SendMessageA(*(HWND *)(in_ECX + 0xc),0x1100,0,(LPARAM)aLStack_88);
      puVar6 = (undefined4 *)(**(code **)(*piStack_8c + 4))();
      _strncpy(acStack_50,(char *)*puVar6,0x3f);
      pcStack_70 = acStack_50;
      uStack_68 = 0;
      uStack_64 = 0;
      uStack_11 = 0;
      aLStack_88[0] = local_90;
      local_90 = SendMessageA(*(HWND *)(in_ECX + 0xc),0x1100,0,(LPARAM)aLStack_88);
      aLStack_88[0] = local_90;
      (**(code **)(*param_2 + 0x30))(puVar4);
      uVar3 = 0;
      if (*(short *)((int)puVar4 + 10) != 0) {
        do {
          uStack_74 = *(undefined4 *)(puVar4[1] + uVar3 * 4);
          uStack_6c = 6;
          uStack_68 = 6;
          SendMessageA(*(HWND *)(in_ECX + 0xc),0x1100,0,(LPARAM)&piStack_8c);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)((int)puVar4 + 10));
      }
      uVar2 = 0;
      if (*(short *)((int)puVar4 + 10) != 0) {
        do {
          uVar3 = (uint)uVar2;
          uVar2 = uVar2 + 1;
          *(undefined4 *)(puVar4[1] + uVar3 * 4) = 0;
        } while (uVar2 < *(ushort *)((int)puVar4 + 10));
      }
      *(undefined2 *)((int)puVar4 + 10) = 0;
      *(undefined2 *)(puVar4 + 3) = 0;
      FUN_00495e30(unaff_EBX,*(undefined4 *)(local_90 + 0x10));
      (**(code **)*puVar4)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004964f0(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined *puVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  int unaff_EBX;
  int unaff_EBP;
  int *piVar14;
  char *pcVar15;
  int *unaff_FS_OFFSET;
  int *local_2e0;
  int *piStack_2dc;
  int *local_2d8;
  int *piStack_2d4;
  int *local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c0;
  char *pcStack_2bc;
  char *pcStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  int *local_2a4;
  int *piStack_2a0;
  char acStack_29c [63];
  undefined1 uStack_25d;
  char acStack_25c [63];
  undefined1 uStack_21d;
  char cStack_219;
  char acStack_218 [260];
  char acStack_114 [256];
  int iStack_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b030e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_2e0;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffd10;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar7 = param_2[2];
  local_2d0 = param_1;
  local_2d8 = param_2;
  local_2cc = 0xffff0002;
  local_2c8 = 0x27;
  local_2a4 = param_2;
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 4))(uVar4);
  _sprintf(acStack_218,"%s \"%s\" (%.0f,%.0f,%.0f)",*puVar5,iVar7,(double)(float)param_2[0x15],
           (double)(float)param_2[0x16],(double)(float)param_2[0x17]);
  piStack_2dc = (int *)param_2[0x18];
  if ((float)piStack_2dc != 1.0) {
    piStack_2dc = (int *)param_2[0x18];
    _sprintf(acStack_114," Scale %.1f",(double)(float)piStack_2dc);
    pcVar6 = acStack_114;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar4 = (int)pcVar6 - (int)acStack_114;
    pcVar6 = &cStack_219;
    do {
      pcVar15 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar15 != '\0');
    pcVar15 = acStack_114;
    for (uVar13 = uVar4 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  if ((*(byte *)(param_2 + 6) & 1) != 0) {
    pcVar6 = &cStack_219;
    do {
      pcVar15 = pcVar6;
      pcVar6 = pcVar15 + 1;
    } while (pcVar15[1] != '\0');
    builtin_strncpy(pcVar15 + 1," Culled",8);
  }
  pcStack_2b8 = acStack_218;
  iVar7 = (**(code **)(*param_2 + 8))();
  if (iVar7 == 0) {
    for (puVar5 = (undefined4 *)(**(code **)(*param_2 + 4))(); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      if (puVar5 == &DAT_00b3facc) {
        uStack_2b0 = 1;
        goto LAB_004966a7;
      }
    }
    for (puVar5 = (undefined4 *)(**(code **)(*param_2 + 4))(); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      if (puVar5 == &DAT_00b3fd14) {
        uStack_2b0 = 2;
        goto LAB_004966a7;
      }
    }
    uStack_2b0 = 4;
  }
  else {
    uStack_2b0 = 3;
  }
LAB_004966a7:
  piVar14 = local_2e0;
  uStack_2ac = uStack_2b0;
  piStack_2dc = (int *)SendMessageA((HWND)local_2e0[3],0x1100,0,(LPARAM)&local_2d0);
  local_2a4 = (int *)0x0;
  pcStack_2b8 = "Attributes";
  uStack_2b0 = 5;
  uStack_2ac = 5;
  local_2d0 = piStack_2dc;
  local_2d0 = (int *)SendMessageA((HWND)piVar14[3],0x1100,0,(LPARAM)&local_2d0);
  piVar8 = (int *)FUN_00401f00();
  uStack_4 = 0;
  piStack_2d4 = piVar8;
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    *(undefined2 *)((int)piVar8 + 10) = 0;
    *(undefined2 *)(piVar8 + 3) = 0;
    *piVar8 = (int)&PTR__scalar_deleting_destructor__00a38fb4;
    *(undefined2 *)(piVar8 + 2) = 0x80;
    *(undefined2 *)((int)piVar8 + 0xe) = 0x80;
    iVar7 = FUN_00401f00();
    piVar8[1] = iVar7;
    param_2 = local_2d8;
    piVar14 = local_2e0;
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*param_2 + 0x30))();
  uVar4 = 0;
  if (*(short *)((int)piVar8 + 10) != 0) {
    do {
      pcStack_2bc = *(char **)(piVar8[1] + uVar4 * 4);
      uStack_2b4 = 6;
      uStack_2b0 = 6;
      SendMessageA((HWND)piVar14[3],0x1100,0,(LPARAM)&piStack_2d4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)((int)piVar8 + 10));
  }
  uVar3 = 0;
  if (*(short *)((int)piVar8 + 10) != 0) {
    do {
      uVar4 = (uint)uVar3;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(piVar8[1] + uVar4 * 4) = 0;
    } while (uVar3 < *(ushort *)((int)piVar8 + 10));
  }
  *(undefined2 *)((int)piVar8 + 10) = 0;
  *(undefined2 *)(piVar8 + 3) = 0;
  piVar14 = (int *)piStack_2dc[3];
  if (piVar14 != (int *)0x0) {
    uStack_2b4 = 5;
    uStack_2b0 = 5;
    piStack_2d4 = local_2e0;
    pcStack_2bc = "Controllers";
    piStack_2a0 = (int *)SendMessageA(*(HWND *)(unaff_EBX + 0xc),0x1100,0,(LPARAM)&piStack_2d4);
    do {
      puVar5 = (undefined4 *)(**(code **)(*piVar14 + 4))();
      _strncpy(acStack_29c,(char *)*puVar5,0x3f);
      pcStack_2bc = acStack_29c;
      uStack_2b4 = 6;
      uStack_2b0 = 6;
      piStack_2d4 = piStack_2a0;
      uStack_25d = 0;
      piStack_2d4 = (int *)SendMessageA(*(HWND *)(unaff_EBX + 0xc),0x1100,0,(LPARAM)&piStack_2d4);
      (**(code **)(*piVar14 + 0x30))(piVar8);
      uVar4 = 0;
      if (*(short *)((int)piVar8 + 10) != 0) {
        do {
          uStack_2c0 = *(undefined4 *)(piVar8[1] + uVar4 * 4);
          pcStack_2b8 = (char *)0x6;
          uStack_2b4 = 6;
          SendMessageA(*(HWND *)(unaff_EBP + 0xc),0x1100,0,(LPARAM)&local_2d8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(ushort *)((int)piVar8 + 10));
      }
      uVar3 = 0;
      if (*(short *)((int)piVar8 + 10) != 0) {
        do {
          uVar4 = (uint)uVar3;
          uVar3 = uVar3 + 1;
          *(undefined4 *)(piVar8[1] + uVar4 * 4) = 0;
        } while (uVar3 < *(ushort *)((int)piVar8 + 10));
      }
      *(undefined2 *)((int)piVar8 + 10) = 0;
      *(undefined2 *)(piVar8 + 3) = 0;
      for (puVar9 = (undefined *)(**(code **)(*piVar14 + 4))(); puVar9 != (undefined *)0x0;
          puVar9 = *(undefined **)(puVar9 + 4)) {
        if (puVar9 == &DAT_00b3cac0) {
          bVar1 = 1;
          goto LAB_00496930;
        }
      }
      bVar1 = 0;
LAB_00496930:
      local_2d8 = (int *)(-(uint)bVar1 & (uint)piVar14);
      if (local_2d8 == (int *)0x0) {
        for (puVar5 = (undefined4 *)(**(code **)(*piVar14 + 4))(); puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)puVar5[1]) {
          if (puVar5 == &DAT_00b3cd7c) {
            bVar1 = 1;
            goto LAB_004969f4;
          }
        }
        bVar1 = 0;
LAB_004969f4:
        if ((-(uint)bVar1 & (uint)piVar14) != 0) {
          FUN_00495c10();
        }
      }
      else {
        piVar11 = DAT_00b3cc30;
        if ((((DAT_00b3cc30 == (int *)0x0) &&
             (piVar10 = (int *)FUN_004dc270(piStack_2dc), piVar11 = DAT_00b3cc30,
             piVar10 != (int *)0x0)) &&
            (cVar2 = (**(code **)(*piVar10 + 400))(), piVar11 = DAT_00b3cc30, cVar2 != '\0')) &&
           (iVar7 = (**(code **)(*piVar10 + 0x380))(), piVar11 = DAT_00b3cc30, iVar7 != 0)) {
          piVar11 = (int *)(**(code **)(*piVar10 + 0x380))();
          iVar7 = (**(code **)(*piVar11 + 0x164))();
          piVar11 = DAT_00b3cc30;
          if (iVar7 != 0) {
            piVar11 = *(int **)(iVar7 + 0x98);
          }
        }
        DAT_00b3cc30 = local_2d8;
        DAT_00b3cc34 = piVar11;
        FUN_00495af0();
      }
      piVar14 = (int *)piVar14[0xd];
    } while (piVar14 != (int *)0x0);
  }
  piVar14 = piStack_2dc;
  FUN_00495840();
  if (piVar14[0x29] != 0) {
    uStack_2b4 = 5;
    uStack_2b0 = 5;
    piStack_2d4 = local_2e0;
    pcStack_2bc = "Properties";
    local_2d8 = (int *)SendMessageA(*(HWND *)(unaff_EBX + 0xc),0x1100,0,(LPARAM)&piStack_2d4);
    puVar5 = (undefined4 *)piVar14[0x27];
    while (puVar5 != (undefined4 *)0x0) {
      piVar14 = (int *)puVar5[2];
      puVar5 = (undefined4 *)*puVar5;
      puVar12 = (undefined4 *)(**(code **)(*piVar14 + 4))();
      _strncpy(acStack_25c,(char *)*puVar12,0x3f);
      pcStack_2bc = acStack_25c;
      uStack_2b4 = 6;
      uStack_2b0 = 6;
      piStack_2d4 = local_2d8;
      uStack_21d = 0;
      piStack_2d4 = (int *)SendMessageA(*(HWND *)(unaff_EBX + 0xc),0x1100,0,(LPARAM)&piStack_2d4);
      (**(code **)(*piVar14 + 0x30))(piVar8);
      uVar4 = 0;
      if (*(short *)((int)piVar8 + 10) != 0) {
        do {
          pcStack_2bc = *(char **)(piVar8[1] + uVar4 * 4);
          uStack_2b4 = 6;
          uStack_2b0 = 6;
          SendMessageA(*(HWND *)(unaff_EBX + 0xc),0x1100,0,(LPARAM)&piStack_2d4);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(ushort *)((int)piVar8 + 10));
      }
      uVar3 = 0;
      if (*(short *)((int)piVar8 + 10) != 0) {
        do {
          uVar4 = (uint)uVar3;
          uVar3 = uVar3 + 1;
          *(undefined4 *)(piVar8[1] + uVar4 * 4) = 0;
        } while (uVar3 < *(ushort *)((int)piVar8 + 10));
      }
      *(undefined2 *)((int)piVar8 + 10) = 0;
      *(undefined2 *)(piVar8 + 3) = 0;
    }
  }
  piVar14 = piStack_2dc;
  if (piStack_2dc[0x2a] != 0) {
    FUN_004962a0();
  }
  (**(code **)*piVar8)(1);
  iVar7 = (**(code **)(*piVar14 + 8))();
  if (iVar7 != 0) {
    uVar4 = 0;
    if (*(short *)((int)piVar14 + 0xb6) != 0) {
      if (*(short *)((int)piVar14 + 0xb6) == 0) goto LAB_00496bc1;
      do {
        iVar7 = *(int *)(piVar14[0x2c] + uVar4 * 4);
        if (iVar7 != 0) {
          FUN_004964f0(local_2e0,iVar7);
        }
LAB_00496bc1:
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)((int)piVar14 + 0xb6));
    }
  }
  *unaff_FS_OFFSET = iStack_14;
  return;
}



void FUN_00496c00(undefined4 param_1,int param_2)

{
  LRESULT LVar1;
  int in_ECX;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  SendMessageA(*(HWND *)(in_ECX + 0xc),0x1109,0,*(LPARAM *)(in_ECX + 0x14));
  local_30 = 0xffff0002;
  local_2c = 0x27;
  local_34 = 0xffff0000;
  if (param_2 == 0) {
    local_1c = *(int *)(in_ECX + 0x1c);
  }
  else {
    local_1c = param_2;
  }
  local_14 = 0;
  local_10 = 0;
  local_8 = param_1;
  LVar1 = SendMessageA(*(HWND *)(in_ECX + 0xc),0x1100,0,(LPARAM)&local_34);
  *(LRESULT *)(in_ECX + 0x10) = LVar1;
  FUN_004964f0(LVar1,param_1);
  ShowWindow(*(HWND *)(in_ECX + 8),10);
  UpdateWindow(*(HWND *)(in_ECX + 8));
  return;
}



void FUN_00496cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  char *pcVar2;
  HIMAGELIST p_Var3;
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[6] = param_3;
  pcVar2 = param_4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_00401f00(pcVar2 + (1 - (int)(param_4 + 1)));
  in_ECX[7] = pcVar2;
  do {
    cVar1 = *param_4;
    *pcVar2 = cVar1;
    param_4 = param_4 + 1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00495d10(param_5,param_6,param_7,param_8);
  p_Var3 = ImageList_LoadImageA((HINSTANCE)*in_ECX,&DAT_000000b4,0x10,1,0xff000000,0,0);
  in_ECX[5] = p_Var3;
  FUN_00496c00(param_3,0);
  return;
}



void FUN_00496d50(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  undefined4 unaff_retaddr;
  
  iVar2 = (**(code **)(*in_ECX + 4))(param_1);
  puVar3 = *(undefined4 **)(in_ECX[2] + iVar2 * 4);
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x14))();
      (**(code **)(*in_ECX + 0xc))(puVar3,param_1,param_1,param_2);
      *puVar3 = *(undefined4 *)(in_ECX[2] + iVar2 * 4);
      *(undefined4 **)(in_ECX[2] + iVar2 * 4) = puVar3;
      in_ECX[3] = in_ECX[3] + 1;
      return;
    }
    cVar1 = (**(code **)(*in_ECX + 8))(param_1,puVar3[1]);
    if (cVar1 != '\0') break;
    puVar3 = (undefined4 *)*puVar3;
  }
  (**(code **)(*in_ECX + 0x10))(puVar3);
  (**(code **)(*in_ECX + 0xc))(puVar3,param_1,unaff_retaddr,param_1);
  return;
}



undefined4 FUN_00496df0(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  
  iVar3 = (**(code **)(*in_ECX + 4))(param_1);
  puVar1 = *(undefined4 **)(in_ECX[2] + iVar3 * 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    cVar2 = (**(code **)(*in_ECX + 8))(param_1,puVar1[1]);
    if (cVar2 != '\0') break;
    puVar1 = (undefined4 *)*puVar1;
  }
  *param_1 = puVar1[2];
  param_1[1] = puVar1[3];
  return 1;
}



void FUN_00496e50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3dcc0;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00496e70(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3dcc0;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00496ea0(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  int in_ECX;
  int iVar4;
  DWORD DStack_8;
  int iStack_4;
  
  bVar1 = true;
  do {
    FUN_00401020(&DAT_00a2f830);
    DStack_8 = 0;
    iStack_4 = 0;
    cVar2 = FUN_00496df0(param_1,&DStack_8);
    if (cVar2 == '\0') {
      DVar3 = GetCurrentThreadId();
      iVar4 = 1;
LAB_00496f0d:
      FUN_00496d50(param_1,DVar3,iVar4);
      bVar1 = false;
    }
    else {
      DVar3 = GetCurrentThreadId();
      if (DStack_8 == DVar3) {
        iVar4 = iStack_4 + 1;
        DVar3 = DStack_8;
        goto LAB_00496f0d;
      }
    }
    FUN_00401040();
    if (!bVar1) {
      return;
    }
    FUN_00498ee0(*(undefined4 *)(in_ECX + 0x100),1);
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x00496f92) */

void FUN_00496f50(void)

{
  char cVar1;
  undefined4 unaff_retaddr;
  
  FUN_00401020(&DAT_00a2f830);
  cVar1 = FUN_00496df0(unaff_retaddr,&stack0xfffffff4);
  if (cVar1 != '\0') {
    FUN_00496d50(unaff_retaddr,0,0xffffffff);
  }
  FUN_00401040();
  return;
}



undefined4 FUN_00496fd0(void)

{
  undefined4 unaff_retaddr;
  
  FUN_00401020(&DAT_00a2f830);
  FUN_00496df0(unaff_retaddr,&stack0xfffffff4);
  FUN_00401040();
  return 0;
}



void FUN_00497040(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b0348;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3dce0;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a3dcc0;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004970b0(byte param_1)

{
  FUN_00497040();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004970d0(void)

{
  uint uVar1;
  void *_Dst;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b0378;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = 0x25;
  *in_ECX = &PTR_FUN_00a3dcc0;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(0x94,uVar1);
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a3dce0;
  local_4 = 0;
  FUN_00401000();
  in_ECX[0x40] = 10;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00497170(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b03b6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  FUN_007c2a40(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_00401010();
  local_4 = 0xffffffff;
  FUN_00497040();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00497210(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}



void FUN_00497220(void)

{
  undefined1 *in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}



void FUN_00497240(void)

{
  byte *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_0046ae40(0x44475258,*(undefined4 *)(in_ECX + 4),(uint)*in_ECX * 0x1c);
  }
  return;
}



undefined4 * FUN_00497340(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  
  if (((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) && (iVar1 != -0x14)) {
    *param_1 = *(undefined4 *)(iVar1 + 0x30);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



void FUN_00497370(byte *param_1)

{
  byte bVar1;
  void *_Dst;
  byte *in_ECX;
  
  if (param_1 != (byte *)0x0) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 4));
    bVar1 = *param_1;
    *in_ECX = bVar1;
    _Dst = (void *)FUN_00401f00((uint)bVar1 * 0x1c);
    *(void **)(in_ECX + 4) = _Dst;
    _memcpy(_Dst,*(void **)(param_1 + 4),(uint)*in_ECX * 0x1c);
  }
  return;
}



void FUN_004973d0(void)

{
  undefined4 uVar1;
  byte *in_ECX;
  
  FUN_004534d0(in_ECX,1);
  uVar1 = FUN_00401f00((uint)*in_ECX * 0x1c);
  *(undefined4 *)(in_ECX + 4) = uVar1;
  FUN_004534d0(uVar1,(uint)*in_ECX * 0x1c);
  return;
}



int * FUN_00497420(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)FUN_0047fac0(param_1);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 4))();
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    if (puVar2 == &DAT_00ba7a20) break;
    puVar2 = (undefined4 *)puVar2[1];
  }
  return piVar1;
}



undefined4 FUN_00497470(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *in_ECX;
  uint uVar4;
  
  iVar2 = FUN_004510b0();
  if (iVar2 != 0x44475258) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x254);
  uVar4 = uVar1 / 0x1c & 0xff;
  *in_ECX = (char)(uVar1 / 0x1c);
  if (uVar1 % uVar4 == 0) {
    uVar3 = FUN_00401f00(uVar4 * 0x1c);
    *(undefined4 *)(in_ECX + 4) = uVar3;
    FUN_00450c20(uVar3,uVar1);
    return 1;
  }
  *in_ECX = 0;
  return 0;
}



undefined1 FUN_00497500(uint param_1,uint *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *in_ECX;
  uint uVar7;
  undefined1 local_1;
  
  puVar3 = param_2;
  iVar2 = param_1;
  local_1 = 1;
  if ((param_1 != 0) && (*param_2 < (uint)*in_ECX)) {
    iVar5 = FUN_00497420(param_1);
    if (iVar5 != 0) {
      puVar6 = (undefined4 *)FUN_00497340(&param_1);
      if ((char)param_3 == '\0') {
        if (*(byte *)(*(int *)(in_ECX + 4) + *puVar3 * 0x1c) != ((byte)((uint)*puVar6 >> 8) & 0x1f))
        {
          return 0;
        }
      }
      else {
        *(byte *)(*(int *)(in_ECX + 4) + *puVar3 * 0x1c) = (byte)((uint)*puVar6 >> 8) & 0x1f;
      }
      puVar6 = (undefined4 *)(*(int *)(in_ECX + 4) + 4 + *puVar3 * 0x1c);
      *puVar6 = *(undefined4 *)(iVar2 + 0x54);
      puVar6[1] = *(undefined4 *)(iVar2 + 0x58);
      puVar6[2] = *(undefined4 *)(iVar2 + 0x5c);
      iVar5 = *(int *)(in_ECX + 4) + *puVar3 * 0x1c;
      FUN_00711300(iVar5 + 0x10,iVar5 + 0x14,iVar5 + 0x18);
      *puVar3 = *puVar3 + 1;
    }
    param_1 = (uint)*(ushort *)(iVar2 + 0xb6);
    uVar7 = 0;
    if (param_1 != 0) {
      do {
        if ((((uVar7 < *(ushort *)(iVar2 + 0xb6)) &&
             (piVar1 = *(int **)(*(int *)(iVar2 + 0xb0) + uVar7 * 4), piVar1 != (int *)0x0)) &&
            (iVar5 = (**(code **)(*piVar1 + 8))(), iVar5 != 0)) &&
           (cVar4 = FUN_00497500(iVar5,puVar3,param_3), cVar4 == '\0')) {
          local_1 = 0;
        }
      } while ((*puVar3 < (uint)*in_ECX) && (uVar7 = uVar7 + 1, uVar7 < param_1));
    }
  }
  return local_1;
}



undefined1 FUN_00497640(int *param_1,uint *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  code *pcVar3;
  char cVar4;
  int *piVar5;
  byte bVar7;
  byte *in_ECX;
  int iVar6;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  undefined1 local_29;
  int local_24 [9];
  
  local_29 = 1;
  if ((param_1 != (int *)0x0) && (*param_2 < (uint)*in_ECX)) {
    piVar5 = (int *)FUN_00497420(param_1);
    if (piVar5 != (int *)0x0) {
      if (((piVar5[4] == 0) || (iVar6 = *(int *)(piVar5[4] + 8), iVar6 == 0)) || (iVar6 == -0x14)) {
        bVar7 = 0;
      }
      else {
        bVar7 = (byte)((uint)*(undefined4 *)(iVar6 + 0x30) >> 8);
      }
      pbVar1 = (byte *)(*(int *)(in_ECX + 4) + *param_2 * 0x1c);
      if (*pbVar1 != (bVar7 & 0x1f)) {
        return 0;
      }
      param_1[0x15] = *(int *)(pbVar1 + 4);
      param_1[0x16] = *(int *)(pbVar1 + 8);
      param_1[0x17] = *(int *)(pbVar1 + 0xc);
      iVar6 = *(int *)(in_ECX + 4) + *param_2 * 0x1c;
      FUN_00711580(*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0x14),
                   *(undefined4 *)(*(int *)(in_ECX + 4) + 0x18 + *param_2 * 0x1c));
      piVar8 = local_24;
      piVar10 = param_1 + 0xc;
      for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar10 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar10 = piVar10 + 1;
      }
      pcVar3 = *(code **)(*piVar5 + 0x70);
      *(ushort *)(piVar5 + 3) = *(ushort *)(piVar5 + 3) | 0x40;
      (*pcVar3)(1,0);
      *param_2 = *param_2 + 1;
    }
    (**(code **)(*param_1 + 0x74))();
    uVar2 = *(ushort *)((int)param_1 + 0xb6);
    uVar9 = 0;
    if (uVar2 != 0) {
      do {
        if (((uVar9 < *(ushort *)((int)param_1 + 0xb6)) &&
            (piVar5 = *(int **)(param_1[0x2c] + uVar9 * 4), piVar5 != (int *)0x0)) &&
           ((iVar6 = (**(code **)(*piVar5 + 8))(), iVar6 != 0 &&
            (cVar4 = FUN_00497640(iVar6,param_2), cVar4 == '\0')))) {
          local_29 = 0;
        }
      } while ((*param_2 < (uint)*in_ECX) && (uVar9 = uVar9 + 1, uVar9 < uVar2));
    }
  }
  return local_29;
}



char FUN_004977b0(int param_1)

{
  ushort uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  
  if (param_1 != 0) {
    iVar4 = FUN_00497420(param_1);
    cVar6 = iVar4 != 0;
    uVar1 = *(ushort *)(param_1 + 0xb6);
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        if (((uVar5 < *(ushort *)(param_1 + 0xb6)) &&
            (piVar2 = *(int **)(*(int *)(param_1 + 0xb0) + uVar5 * 4), piVar2 != (int *)0x0)) &&
           (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 != 0)) {
          cVar3 = FUN_004977b0(iVar4);
          cVar6 = cVar6 + cVar3;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
    }
    return cVar6;
  }
  return '\0';
}



undefined4 FUN_00497830(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  byte *in_ECX;
  uint local_4;
  
  local_4 = 0;
  cVar1 = '\x01';
  if (((param_1 != 0) && (*(int **)(param_1 + 0x3c) != (int *)0x0)) && (*in_ECX != 0)) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 8))();
    cVar1 = FUN_00497640(uVar2,&local_4);
    if (cVar1 == '\0') {
      FUN_0088d070(uVar2,1,1,0);
    }
  }
  if ((local_4 == *in_ECX) && (cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



void FUN_004978a0(int *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *in_ECX;
  
  *in_ECX = 0;
  FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  piVar4 = param_1;
  if (param_1 != (int *)0x0) {
    iVar3 = (**(code **)(*param_1 + 0x154))();
    if (iVar3 != 0) {
      piVar4 = (int *)(**(code **)(*piVar4 + 0x154))();
      if (piVar4 == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*piVar4 + 8))();
      }
      bVar1 = FUN_004977b0(uVar5);
      *in_ECX = bVar1;
      if (bVar1 != 0) {
        uVar6 = FUN_00401f00((uint)bVar1 * 0x1c);
        *(undefined4 *)(in_ECX + 4) = uVar6;
        param_1 = (int *)0x0;
        cVar2 = FUN_00497500(uVar5,&param_1,1);
        if (cVar2 == '\0') {
          FUN_004a7a60("Failed to initialize RagDollData.");
        }
      }
    }
  }
  return;
}



undefined4 FUN_00497950(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  byte *in_ECX;
  undefined4 uVar4;
  uint local_4;
  
  uVar4 = 0;
  local_4 = 0;
  cVar1 = '\x01';
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x154))();
    if (iVar2 != 0) {
      piVar3 = (int *)(**(code **)(*param_1 + 0x154))();
      if (piVar3 != (int *)0x0) {
        uVar4 = (**(code **)(*piVar3 + 8))();
      }
      if (*in_ECX == 0) {
        FUN_004978a0(param_1);
        if (*in_ECX == 0) goto LAB_004979b5;
      }
      cVar1 = FUN_00497500(uVar4,&local_4,0);
    }
  }
LAB_004979b5:
  if ((local_4 == *in_ECX) && (cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



undefined4 FUN_004979e0(undefined4 param_1)

{
  switch(param_1) {
  default:
    return 0;
  case 1:
    return 0x14;
  case 2:
    return 0x15;
  case 3:
    return 0x16;
  case 4:
    return 0x17;
  case 5:
    return 0x18;
  case 6:
    return 0x19;
  case 7:
    return 0x1a;
  case 8:
    return 0x1b;
  case 9:
    return 0x1c;
  case 10:
    return 0x1d;
  case 0xb:
    return 0x1e;
  case 0xc:
    return 0x6f;
  case 0xd:
    return 0x70;
  case 0xe:
    return 0x71;
  case 0xf:
    return 0x72;
  case 0x10:
    return 0x73;
  case 0x11:
    return 0x74;
  }
}



void FUN_00497ab0(uint param_1)

{
  DAT_00b430b0 = (DAT_00b42f48 < 5) - 1 & 2;
  if (param_1 <= DAT_00b430b0) {
    DAT_00b430b0 = param_1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00497ae0(float param_1)

{
  if ((param_1 != _DAT_00b06c2c) && (0.0 < param_1)) {
    _DAT_00b06c2c = param_1;
    DAT_00b34fa4 = 1;
    return;
  }
  return;
}



void FUN_00497b20(char *param_1)

{
  char cVar1;
  int iVar2;
  
  DAT_00b34fc8 = 0;
  if (param_1 != (char *)0x0) {
    iVar2 = (int)&DAT_00b34fc8 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar2] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  return;
}



void FUN_00497bf0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_00b06c74 == '\0') {
    DAT_00b06c7c = param_1;
    DAT_00b06c84 = param_2;
  }
  return;
}



void FUN_00497c10(undefined4 param_1,undefined4 param_2)

{
  DAT_00b06c5c = param_1;
  DAT_00b06c64 = param_2;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00497c30(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 in_FPUControlWord;
  float10 fVar3;
  undefined4 local_610;
  int local_60c;
  int local_608;
  undefined2 local_604 [256];
  undefined2 local_404 [256];
  undefined2 local_204 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_610;
  _DAT_00b06f64 = _DAT_00b06c2c;
  DAT_00b34fa4 = 0;
  local_60c = 0;
  iVar2 = 0x100;
  puVar1 = local_404;
  do {
    local_610 = (float)local_60c / 255.0;
    fVar3 = (float10)FUN_00985b70();
    local_60c = local_60c + 1;
    local_610 = (float)CONCAT22((short)((uint)(float)fVar3 >> 0x10),in_FPUControlWord);
    iVar2 = iVar2 + -1;
    local_608 = (int)ROUND((float)fVar3 * 65535.0 + 0.5);
    puVar1[-0x100] = (undefined2)local_608;
    *puVar1 = (undefined2)local_608;
    puVar1[0x100] = (undefined2)local_608;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  (**(code **)(**(int **)(DAT_00b350d8 + 0x280) + 0x54))
            (*(int **)(DAT_00b350d8 + 0x280),0,1,local_604);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00497d20(float param_1)

{
  _DAT_00b06ecc = param_1;
  _DAT_00b4308c = param_1;
  _DAT_00b06ed4 = param_1 + 300.0;
  _DAT_00b43090 = param_1 + 300.0;
  return;
}



undefined4 FUN_00497d50(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = DAT_00b42154;
  if ((DAT_00b350d8 != 0) && (DAT_00b06de4 == '\0')) {
    iVar4 = *DAT_00b42154;
    uVar1 = *(undefined4 *)(DAT_00b350d8 + 0x5c0);
    uVar3 = FUN_004979e0(DAT_00b06c34,DAT_00b06c74 == '\0',param_1,0);
    iVar4 = (**(code **)(iVar4 + 0x2c))(piVar2,DAT_00b06c54,uVar1,uVar3);
    if (-1 < iVar4) {
      return 1;
    }
  }
  return 0;
}



void FUN_00497dc0(undefined4 param_1)

{
  DAT_00b06d0c = param_1;
  return;
}



int * FUN_00497dd0(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar1 = (**(code **)(*param_2 + 0x10))();
  while( true ) {
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    if (iVar1 == param_1) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return param_2;
}



int * FUN_00497e10(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int in_ECX;
  
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x880) + 0x70))(0);
  piVar1 = *(int **)(iVar2 + 0x10);
  if (piVar1 == (int *)0x0) {
    return (int *)0x14;
  }
  puVar3 = (undefined *)(**(code **)(*piVar1 + 0x10))();
  while( true ) {
    if (puVar3 == (undefined *)0x0) {
      return (int *)0x14;
    }
    if (puVar3 == &DAT_00b4265c) break;
    puVar3 = *(undefined **)(puVar3 + 4);
  }
  return piVar1 + 5;
}



void FUN_00497e70(void)

{
  undefined4 *puVar1;
  HWND hWnd;
  uint uVar2;
  LONG LVar3;
  int iVar4;
  DWORD bMenu;
  DWORD dwStyle;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  tagRECT tStack_1c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b03eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((DAT_00b350d8 != 0) && (DAT_00b350cc != 0)) && (DAT_00b350d0 != 0)) {
    FUN_007b7650(uVar2);
    FUN_007a9cf0();
    DAT_00b06c5c = DAT_00b350cc;
    DAT_00b06c64 = DAT_00b350d0;
    DAT_00b350d7 = (double)DAT_00b350d0 / (double)DAT_00b350cc != 0.75;
    FUN_00410b00();
    FUN_00578ef0();
    FUN_00405b00();
    FUN_00405b40();
    puVar1 = *(undefined4 **)(DAT_00b350d8 + 8);
    puVar6 = (undefined4 *)(DAT_00b350d8 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *puVar6 = 0;
    }
    iVar4 = FUN_0076b090(DAT_00b350cc,DAT_00b350d0);
    if (iVar4 == 0) {
      FUN_00497b20("Failed to Recreate Gamebryo Render in desired dimensions.");
    }
    else {
      hWnd = *(HWND *)(DAT_00b33398 + 8);
      tStack_1c.left = 0;
      tStack_1c.top = 0;
      tStack_1c.right = DAT_00b06c5c;
      tStack_1c.bottom = DAT_00b06c64;
      bMenu = GetClassLongA(DAT_00b34fa8,-8);
      dwStyle = GetWindowLongA(hWnd,-0x10);
      AdjustWindowRect(&tStack_1c,dwStyle,bMenu);
      SetWindowPos(hWnd,(HWND)0x0,DAT_00b06c7c,DAT_00b06c84,tStack_1c.right - tStack_1c.left,
                   tStack_1c.bottom - tStack_1c.top,0x40);
    }
    FUN_007ba2f0();
    iVar4 = FUN_00401f00(0x38);
    uStack_4 = 0;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_0071a8e0();
    }
    uStack_4 = 0xffffffff;
    FUN_00405710(uVar5);
    FUN_004112e0();
    FUN_00405b80();
    FUN_00405c30();
    FUN_00578cc0(0);
    FUN_00578cd0();
    FUN_005b6040();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00498060(undefined4 *param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  DAT_00b350dc = *param_1;
  DAT_00b350e0 = param_1[1];
  DAT_00b350e4 = param_1[2];
  if (DAT_00b350d8 != (int *)0x0) {
    local_4 = 0;
    local_10 = DAT_00b350dc;
    local_c = DAT_00b350e0;
    local_8 = DAT_00b350e4;
    (**(code **)(*DAT_00b350d8 + 0x60))(&local_10);
    return 1;
  }
  return 0;
}



undefined1 FUN_004980d0(char param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int local_4;
  
  if ((DAT_00b34fc4 == (uint *)0x0) &&
     (DAT_00b34fc4 = (uint *)FUN_00763de0(), DAT_00b34fc4 == (uint *)0x0)) {
    DAT_00b34fc8 = 0;
    iVar6 = 0;
    DAT_00b34fc4 = (uint *)0x0;
    do {
      cVar1 = "No D3D Device description found."[iVar6];
      (&DAT_00b34fc8)[iVar6] = cVar1;
      iVar6 = iVar6 + 1;
    } while (cVar1 != '\0');
    return 0;
  }
  uVar7 = DAT_00b06c54;
  if ((((DAT_00b34fc4 == (uint *)0x0) &&
       (DAT_00b34fc4 = (uint *)FUN_00763de0(), DAT_00b34fc4 == (uint *)0x0)) ||
      (*DAT_00b34fc4 <= uVar7)) || (*(ushort *)((int)DAT_00b34fc4 + 0xe) <= uVar7)) {
    local_4 = 0;
  }
  else {
    local_4 = *(int *)(DAT_00b34fc4[2] + uVar7 * 4);
  }
  if (local_4 == 0) {
    DAT_00b34fc8 = 0;
    iVar6 = 0;
    do {
      cVar1 = "Bad Adapter Number or Adapter not found."[iVar6];
      (&DAT_00b34fc8)[iVar6] = cVar1;
      iVar6 = iVar6 + 1;
    } while (cVar1 != '\0');
    return 0;
  }
  if (DAT_00b06c74 == '\0') {
    iVar6 = *(int *)(local_4 + 0x460);
    if ((*(int *)(iVar6 + 4) == 0) || (iVar6 == 0)) {
      FUN_00497b20("Windowed mode not supported on this Adapter.");
      return 0;
    }
    if (*(char *)(iVar6 + 0x144) == '\0') {
      FUN_00497b20("Windowed mode not supported on this Adapter.");
      return 0;
    }
  }
  uVar7 = (uint)*(ushort *)(local_4 + 0x45a);
  if (uVar7 != 0) {
    iVar6 = *(int *)(local_4 + 0x454) + uVar7 * 4;
    do {
      piVar2 = *(int **)(iVar6 + -4);
      iVar6 = iVar6 + -4;
      uVar7 = uVar7 - 1;
      bVar3 = false;
      if (piVar2 != (int *)0x0) {
        if ((((param_1 == '\0') || (DAT_00b06c74 == '\0')) ||
            ((DAT_00b06c4c == *piVar2 && (DAT_00b06c50 == piVar2[1])))) &&
           ((0x1f < (uint)piVar2[2] && (iVar4 = FUN_004979e0(DAT_00b06c34), piVar2[3] == iVar4)))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      if (bVar3) {
        iVar6 = *(int *)(local_4 + 0x460);
        if ((((*(int *)(iVar6 + 4) == 0) || (iVar6 == 0)) || (iVar6 == -4)) ||
           (DAT_00b06ca4 == '\0')) {
          DAT_00b06c48 = 0;
          DAT_00b06c44 = 0;
          FUN_007b45f0(0,0,DAT_00b06db4,0,0,0);
          if (DAT_00b06ca4 != '\0') {
            return 0;
          }
          return 1;
        }
        if ((*(byte *)(iVar6 + 0x22) & 1) == 0) {
          pcVar8 = "Hardware T&L required but not supported by Adapter.";
        }
        else {
          uVar7 = *(uint *)(iVar6 + 200) & 0xffff;
          if ((DAT_00b06c48 <= uVar7) && (DAT_00b06c44 <= *(ushort *)(iVar6 + 0xd0))) {
            DAT_00b06c44 = (uint)*(ushort *)(iVar6 + 0xd0);
            uVar5 = 1;
            DAT_00b06c48 = uVar7;
            goto LAB_0049828a;
          }
          pcVar8 = 
          "Pixel and Vertex Shader versions incorrect.  Requires a Geforce4 4400 or Radeon 8500 or better."
          ;
        }
        uVar5 = 0;
        FUN_00497b20(pcVar8);
LAB_0049828a:
        DAT_00b34fa6 = 1 < DAT_00b06c8c & *(byte *)(iVar6 + 0x23);
        return uVar5;
      }
    } while (uVar7 != 0);
  }
  FUN_00497b20("Desired render mode not found on Adapter.");
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00498340(HWND param_1,HINSTANCE param_2)

{
  char *_Str1;
  ushort uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  DWORD bMenu;
  DWORD dwStyle;
  int *piVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  HMODULE pHVar10;
  FARPROC pFVar11;
  FILE *_File;
  undefined **ppuVar12;
  int *piVar13;
  int *unaff_FS_OFFSET;
  undefined1 auStack_138 [3];
  char cStack_135;
  uint uStack_134;
  uint uStack_130;
  int iStack_12c;
  tagRECT local_128;
  int iStack_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b042c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_138;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffeb8;
  *unaff_FS_OFFSET = (int)&local_c;
  DAT_00b34fac = param_1;
  DAT_00b34fb0 = param_2;
  DAT_00b34fa0 = DAT_00b06f6c;
  DAT_00b06c4c = DAT_00b06c5c;
  DAT_00b06c50 = DAT_00b06c64;
  cVar3 = FUN_004980d0(1,uVar4);
  if (cVar3 == '\0') {
LAB_0049856b:
    if (DAT_00b350d8 == (int *)0x0) goto LAB_004985f9;
    FUN_0068f970(0);
    (**(code **)(*DAT_00b350d8 + 100))(&DAT_00b350dc);
    uStack_134 = FUN_00401f00(0x38);
    uStack_4 = 0;
    if (uStack_134 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_0071a8e0();
    }
    uStack_4 = 0xffffffff;
    FUN_00405710(uVar7);
    if ((DAT_00b34fa6 != '\0') && (piVar13 = (int *)DAT_00b350d8[0xa0], piVar13 != (int *)0x0)) {
      (**(code **)(*piVar13 + 0x13c))(piVar13,(float)DAT_00b06c8c);
    }
  }
  else {
    if (DAT_00b06c74 == '\0') {
      DAT_00b34fa8 = CreateWindowExA(0,PTR_s_Oblivion_00b02c80,(LPCSTR)0x0,0x50000000,0,0,
                                     DAT_00b06c4c,DAT_00b06c50,DAT_00b34fac,(HMENU)0x0,DAT_00b34fb0,
                                     (LPVOID)0x0);
      local_128.left = 0;
      local_128.top = 0;
      local_128.right = DAT_00b06c4c;
      local_128.bottom = DAT_00b06c50;
      bMenu = GetClassLongA(DAT_00b34fa8,-8);
      dwStyle = GetWindowLongA(DAT_00b34fac,-0x10);
      AdjustWindowRect(&local_128,dwStyle,bMenu);
      SetWindowPos(DAT_00b34fac,(HWND)0x0,DAT_00b06c7c,DAT_00b06c84,local_128.right - local_128.left
                   ,local_128.bottom - local_128.top,0x40);
    }
    else {
      DAT_00b06c30 = DAT_00b06c30 | 4;
      DAT_00b34fa8 = DAT_00b34fac;
    }
    if (DAT_00b06de4 == '\0') {
      DAT_00b34fc0 = DAT_00b06d0c & ((int)DAT_00b06d0c < 2) - 1;
    }
    else {
      DAT_00b34fc0 = 0;
    }
    if ((DAT_00b06d14 != '\0') && (DAT_00b34fc0 == 0)) {
      DAT_00b34fc0 = 1;
    }
    piVar5 = (int *)FUN_0076bd40(DAT_00b06c4c,DAT_00b06c50,DAT_00b06c30,DAT_00b34fa8,DAT_00b34fa8,
                                 DAT_00b06c54,DAT_00b34fb8,DAT_00b06c34,DAT_00b06c38,DAT_00b34fa0,
                                 DAT_00b34fbc,DAT_00b34fc0,DAT_00b06c40,DAT_00b34fb4);
    piVar13 = DAT_00b350d8;
    if (DAT_00b350d8 == piVar5) goto LAB_0049856b;
    if (((DAT_00b350d8 != (int *)0x0) &&
        (LVar6 = InterlockedDecrement(DAT_00b350d8 + 1), LVar6 == 0)) && (piVar13 != (int *)0x0)) {
      (**(code **)*piVar13)(1);
    }
    DAT_00b350d8 = piVar5;
    if (piVar5 != (int *)0x0) {
      InterlockedIncrement(piVar5 + 1);
      goto LAB_0049856b;
    }
LAB_004985f9:
    DAT_00b34fc8 = 0;
    iVar8 = 0;
    do {
      cVar3 = "Unknown error creating the Gamebryo Renderer."[iVar8];
      (&DAT_00b34fc8)[iVar8] = cVar3;
      iVar8 = iVar8 + 1;
    } while (cVar3 != '\0');
  }
  uStack_134 = FUN_00401f00(0x900);
  uStack_4 = 1;
  if (uStack_134 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_0071f860();
  }
  uStack_4 = 0xffffffff;
  FUN_0071b290(uVar7);
  uVar4 = DAT_00b06c54;
  DAT_00b256cc = 1;
  DAT_00b3f708 = 0;
  if (((DAT_00b34fc4 == (uint *)0x0) &&
      (DAT_00b34fc4 = (uint *)FUN_00763de0(), DAT_00b34fc4 == (uint *)0x0)) ||
     ((*DAT_00b34fc4 <= uVar4 || (*(ushort *)((int)DAT_00b34fc4 + 0xe) <= uVar4)))) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(DAT_00b34fc4[2] + uVar4 * 4);
  }
  if (iVar8 == 0) {
    DAT_00b34fc8 = 0;
    iVar8 = 0;
    do {
      cVar3 = "GetAdapterDesc() failed."[iVar8];
      (&DAT_00b34fc8)[iVar8] = cVar3;
      iVar8 = iVar8 + 1;
    } while (cVar3 != '\0');
    piVar13 = (int *)0x0;
    goto LAB_00498e82;
  }
  iVar2 = *(int *)(iVar8 + 0x460);
  if (((*(int *)(iVar2 + 4) == 0) || (iVar2 == 0)) || (iVar2 == -4)) {
    DAT_00b34fc8 = 0;
    iVar8 = 0;
    do {
      cVar3 = "NiXAdapaterDesc::GetDeviceCaps() failed."[iVar8];
      (&DAT_00b34fc8)[iVar8] = cVar3;
      iVar8 = iVar8 + 1;
    } while (cVar3 != '\0');
    piVar13 = (int *)0x0;
    goto LAB_00498e82;
  }
  if (DAT_00b06c74 == '\0') {
    DAT_00b34fa5 = 0;
  }
  else {
    DAT_00b34fa5 = (byte)(*(uint *)(iVar2 + 0x10) >> 0x11) & 1;
  }
  uVar1 = *(ushort *)(iVar2 + 0x11c);
  uVar4 = (uint)uVar1;
  _Str1 = (char *)(iVar8 + 4);
  DAT_00b42f32 = DAT_00b06da4;
  iStack_118 = iVar8 + 0x204;
  iVar9 = (**(code **)(*DAT_00b42154 + 0x28))(DAT_00b42154,0,1,0x16,0x80000,3,0x71);
  DAT_00b350d6 = -1 < iVar9;
  iVar9 = (**(code **)(*DAT_00b42154 + 0x28))(DAT_00b42154,0,1,0x16,0x20000,3,0x71);
  DAT_00b43071 = -1 < iVar9;
  DAT_00b43072 = (byte)(*(uint *)(iVar2 + 0x44) >> 10) & 1;
  if (((*(uint *)(iVar2 + 0x40) & 2) == 0) ||
     (cStack_135 = '\0', (*(uint *)(iVar2 + 0x40) & 0x100) != 0)) {
    cStack_135 = '\x01';
  }
  if (((DAT_00b06de4 == '\0') || (DAT_00b06cc4 == '\0')) || (DAT_00b350d6 == '\0')) {
    DAT_00b43070 = '\0';
    if ((DAT_00b06cc4 == '\0') || (DAT_00b43073 = '\x01', DAT_00b06d34 == '\0')) goto LAB_004987ed;
  }
  else {
    DAT_00b43070 = '\x01';
LAB_004987ed:
    DAT_00b43073 = '\0';
  }
  if ((cStack_135 == '\0') || (DAT_00b42e96 = 1, DAT_00b06dbc != '\0')) {
    DAT_00b42e96 = 0;
  }
  DAT_00b4205c = DAT_00b06d24;
  DAT_00b42060 = DAT_00b06d2c;
  if ((0x60 < uVar1) && (*(int *)(iVar2 + 0x114) < 0x20)) {
    uVar4 = 0x60;
  }
  uStack_134 = uVar4;
  FUN_007b45f0(DAT_00b06c44,DAT_00b06c48,DAT_00b06db4,iVar8 + 0x204,_Str1,uVar4);
  if (DAT_00b42f48 < 5) {
    DAT_00b06f14 = 0;
  }
  DAT_00b2c67c = DAT_00b06f1c;
  iVar8 = __strnicmp(_Str1,"ati",3);
  if (iVar8 == 0) {
    pHVar10 = LoadLibraryA("ATIMGPUD.dll");
    if (pHVar10 != (HMODULE)0x0) {
      pFVar11 = GetProcAddress(pHVar10,"AtiQueryMgpuCount");
      if ((pFVar11 != (FARPROC)0x0) && (iVar8 = (*pFVar11)(), 0 < iVar8)) {
        DAT_00b43075 = '\x01';
        DAT_00b42e97 = 0;
      }
      FreeLibrary(pHVar10);
    }
    if ((int)DAT_00b34fc0 < 2) goto LAB_0049896a;
LAB_0049897a:
    DAT_00b42e84 = '\0';
  }
  else {
    iVar8 = __strnicmp(_Str1,"nv",2);
    if (iVar8 == 0) {
      pHVar10 = LoadLibraryA("NVCPL.dll");
      if (pHVar10 != (HMODULE)0x0) {
        pFVar11 = GetProcAddress(pHVar10,"NvCplGetDataInt");
        if (pFVar11 != (FARPROC)0x0) {
          iStack_12c = 0;
          uStack_130 = 0;
          (*pFVar11)(8,&iStack_12c);
          (*pFVar11)(9,&uStack_130);
          if ((0 < iStack_12c) && ((uStack_130 & 0x10000000) != 0)) {
            DAT_00b43075 = '\x01';
            DAT_00b42e97 = 0;
          }
        }
        FreeLibrary(pHVar10);
      }
    }
    else if (1 < (int)DAT_00b34fc0) goto LAB_0049897a;
LAB_0049896a:
    DAT_00b42e84 = '\x01';
    if (DAT_00b06cac == '\0') goto LAB_0049897a;
  }
  DAT_00b350d7 = (double)DAT_00b06c50 / (double)DAT_00b06c4c != 0.75;
  iVar8 = 0;
  do {
    switch(iVar8) {
    case 0:
      uVar7 = 0x17;
      break;
    case 1:
      uVar7 = 0x18;
      break;
    case 2:
      uVar7 = 0x19;
      break;
    case 3:
      uVar7 = 0x1a;
      break;
    case 4:
      uVar7 = 0x51;
      break;
    case 5:
      uVar7 = 0x14;
      break;
    case 6:
      uVar7 = 0x15;
      break;
    case 7:
      uVar7 = 0x16;
      break;
    case 8:
      uVar7 = 0x72;
      break;
    case 9:
      uVar7 = 0x71;
      break;
    case 10:
      uVar7 = 0x24;
      break;
    case 0xb:
      uVar7 = 0x74;
      break;
    case 0xc:
      uVar7 = 0x32;
      break;
    default:
      uVar7 = 0;
    }
    iVar9 = (**(code **)(*DAT_00b42154 + 0x28))(DAT_00b42154,0,1,0x16,0,3,uVar7);
    (&DAT_00b42e98)[iVar8] = -1 < iVar9;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0xd);
  if ((_DAT_00b06f64 != _DAT_00b06c2c) && (0.0 < _DAT_00b06f64)) {
    _DAT_00b06c2c = _DAT_00b06f64;
    DAT_00b34fa4 = 1;
  }
  uVar7 = FUN_007b7070();
  _sprintf(acStack_114,"%sRendererInfo.txt",&DAT_00b3f280);
  _File = _fopen(acStack_114,"w");
  if (_File != (FILE *)0x0) {
    _fprintf(_File,"Renderer Device Information:\n\t%s\n\t%s\n",iStack_118,_Str1);
    _fprintf(_File,"\tRenderPath         \t\t: %s\n",uVar7);
    _fprintf(_File,"\tPSversion          \t\t: %X\n",(uint)*(ushort *)(iVar2 + 0xd0));
    _fprintf(_File,"\tVSversion          \t\t: %X\n",(uint)*(ushort *)(iVar2 + 200));
    uVar7 = FUN_007b47e0();
    _fprintf(_File,"\tVStarget           \t\t: %s\n",uVar7);
    uVar7 = FUN_007b4780(0);
    _fprintf(_File,"\tPStarget           \t\t: %s\n",uVar7);
    uVar7 = FUN_007b4780(1);
    _fprintf(_File,"\tPS2xtarget         \t\t: %s\n",uVar7);
    _fprintf(_File,"\tmaxPS20inst        \t\t: %i\n",uStack_134);
    ppuVar12 = &PTR_DAT_00a3e128;
    if (DAT_00b42ea5 == '\0') {
      ppuVar12 = (undefined **)&DAT_00a3e124;
    }
    _fprintf(_File,"\t3.0 Shaders        \t\t: %s\n",ppuVar12);
    ppuVar12 = &PTR_DAT_00a3e128;
    if (DAT_00b06cc4 == '\0') {
      ppuVar12 = (undefined **)&DAT_00a3e124;
    }
    _fprintf(_File,"\tImage space effects\t\t: %s\n",ppuVar12);
    ppuVar12 = &PTR_DAT_00a3e128;
    if (cStack_135 == '\0') {
      ppuVar12 = (undefined **)&DAT_00a3e124;
    }
    _fprintf(_File,"\tNonpowerof2textures\t\t: %s\n",ppuVar12);
    ppuVar12 = &PTR_DAT_00a3e128;
    if (DAT_00b350d6 == '\0') {
      ppuVar12 = (undefined **)&DAT_00a3e124;
    }
    _fprintf(_File,"\tFP16ARGB blending  \t\t: %s\n",ppuVar12);
    ppuVar12 = &PTR_DAT_00a3e128;
    if (DAT_00b43071 == '\0') {
      ppuVar12 = (undefined **)&DAT_00a3e124;
    }
    _fprintf(_File,"\tFP16ARGB filtering \t\t: %s\n",ppuVar12);
    ppuVar12 = &PTR_DAT_00a3e128;
    if (DAT_00b43070 == '\0') {
      ppuVar12 = (undefined **)&DAT_00a3e124;
    }
    _fprintf(_File,"\tHigh dynamic range \t\t: %s\n",ppuVar12);
    ppuVar12 = &PTR_DAT_00a3e128;
    if (DAT_00b43073 == '\0') {
      ppuVar12 = (undefined **)&DAT_00a3e124;
    }
    _fprintf(_File,"\tBloom lighting     \t\t: %s\n",ppuVar12);
    ppuVar12 = &PTR_DAT_00a3e128;
    if (DAT_00b42e84 == '\0') {
      ppuVar12 = (undefined **)&DAT_00a3e124;
    }
    _fprintf(_File,"\tRefraction         \t\t: %s\n",ppuVar12);
    ppuVar12 = &PTR_DAT_00a3e128;
    if (DAT_00b42f32 == '\0') {
      ppuVar12 = (undefined **)&DAT_00a3e124;
    }
    _fprintf(_File,"\t2.0 hair           \t\t: %s\n",ppuVar12);
    ppuVar12 = &PTR_DAT_00a3e128;
    if (DAT_00b43075 == '\0') {
      ppuVar12 = (undefined **)&DAT_00a3e124;
    }
    _fprintf(_File,"\tSLI mode           \t\t: %s\n",ppuVar12);
    ppuVar12 = &PTR_DAT_00a3e128;
    if (DAT_00b07050 == '\0') {
      ppuVar12 = (undefined **)&DAT_00a3e124;
    }
    _fprintf(_File,"\tWater shader       \t\t: %s\n",ppuVar12);
    ppuVar12 = &PTR_DAT_00a3e128;
    if (DAT_00b07060 == '\0') {
      ppuVar12 = (undefined **)&DAT_00a3e124;
    }
    _fprintf(_File,"\tWater reflections  \t\t: %s\n",ppuVar12);
    ppuVar12 = &PTR_DAT_00a3e128;
    if (DAT_00b07090 == '\0') {
      ppuVar12 = (undefined **)&DAT_00a3e124;
    }
    _fprintf(_File,"\tWater displacement \t\t: %s\n",ppuVar12);
    ppuVar12 = &PTR_DAT_00a3e128;
    if (DAT_00b07058 == '\0') {
      ppuVar12 = (undefined **)&DAT_00a3e124;
    }
    _fprintf(_File,"\tWater high res     \t\t: %s\n",ppuVar12);
    iVar8 = FUN_00497e10();
    _fprintf(_File,"\tMultisample Type   \t\t: %d\n",*(undefined4 *)(iVar8 + 0x10));
    uVar7 = FUN_007dab80();
    _fprintf(_File,"\tShader Package     \t\t: %d\n",uVar7);
    _fclose(_File);
  }
  _DAT_00b42f4c = _DAT_00b06ddc;
  if (DAT_00b06de4 != '\0') {
    _DAT_00b42f4c = _DAT_00b06e34;
  }
  DAT_00b430ac = DAT_00b06f74;
  DAT_00b430ad = DAT_00b06f84;
  _DAT_00b42ea8 = _DAT_00b06e4c;
  _DAT_00b42f44 = _DAT_00b06e54;
  DAT_00b42e86 = DAT_00b06f94;
  _DAT_00b4307c = _DAT_00b06eac;
  _DAT_00b43080 = _DAT_00b06eb4;
  _DAT_00b43084 = _DAT_00b06ebc;
  _DAT_00b43088 = _DAT_00b06ec4;
  DAT_00b2c67e = DAT_00b06f9c;
  _DAT_00b4308c = _DAT_00b06ecc;
  _DAT_00b43090 = _DAT_00b06ed4;
  _DAT_00b43094 = _DAT_00b06edc;
  DAT_00b2c674 = DAT_00b06f8c;
  _DAT_00b43098 = _DAT_00b06ee4;
  _DAT_00b2c684 = DAT_00b06a2c;
  _DAT_00b4309c = _DAT_00b06eec;
  _DAT_00b430a0 = _DAT_00b06ef4;
  DAT_00b430b0 = (DAT_00b42f48 < 5) - 1 & 2;
  _DAT_00b2c680 = _DAT_00b06f7c;
  piVar13 = DAT_00b350d8;
  if (DAT_00b06f2c <= DAT_00b430b0) {
    DAT_00b430b0 = DAT_00b06f2c;
  }
LAB_00498e82:
  *unaff_FS_OFFSET = local_c;
  return piVar13;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00498ee0(DWORD param_1,char param_2)

{
  if (param_2 != '\0') {
    Sleep(param_1);
    return;
  }
  _DAT_00b350e8 = _DAT_00b350e8 + param_1;
  return;
}



void FUN_00498f30(void)

{
  DAT_00b0703c = 1;
  DAT_00b3521d = 1;
  return;
}



void FUN_00498f40(void)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  
  iVar1 = FUN_0065e5e0(0x45800000);
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_004cace0();
    *(float *)(in_ECX + 0x44) = (float)fVar2;
    return;
  }
  *(undefined4 *)(in_ECX + 0x44) = 0;
  return;
}



/* Library Function - Multiple Matches With Different Base Names
    public: virtual class COleControlContainer * __thiscall COccManager::CreateContainer(class CWnd
   *)
    public: virtual class COleControlSite * __thiscall COleControlSiteFactory::CreateSite(class
   COleControlContainer *,class CControlCreationInfo const &)
   
   Library: Visual Studio 2005 Release */

undefined4 FID_conflict_CreateContainer(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c74db;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_10;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = FUN_00401f00(0xc0,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_00717570(param_1);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_00498fe0(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = param_2[2] * in_ECX[1] - param_2[1] * in_ECX[2];
  param_1[1] = in_ECX[2] * *param_2 - *in_ECX * param_2[2];
  param_1[2] = param_2[1] * *in_ECX - *param_2 * in_ECX[1];
  return;
}



float10 FUN_00499020(void)

{
  float *in_ECX;
  float10 fVar1;
  
  fVar1 = (float10)FUN_00982c30();
  fVar1 = (float10)(float)fVar1;
  if ((float10)1e-06 < fVar1) {
    *in_ECX = (float)((float10)1 / fVar1) * *in_ECX;
    in_ECX[1] = (float)((float10)1 / fVar1) * in_ECX[1];
    return fVar1;
  }
  *in_ECX = 0.0;
  in_ECX[1] = 0.0;
  return (float10)0.0;
}



void FUN_004990a0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b1848;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070df30(param_1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a3f380;
  FUN_00716db0(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



float10 FUN_00499100(int param_1,float param_2,float param_3)

{
  int in_ECX;
  
  return (float10)(param_3 +
                  (float)*(byte *)(param_1 + 0x48 + in_ECX) * 0.003921569 * (param_2 - param_3));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00499140(void)

{
  int in_ECX;
  
  if (((*(uint *)(in_ECX + 0xfc) & 0x100) != 0) && (*(int *)(in_ECX + 0xc) != 0)) {
    _DAT_00b35238 = (float)*(byte *)(*(int *)(in_ECX + 0xc) + 0x50) / 6.0;
    *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xfffffeff;
  }
  return (float10)_DAT_00b35238;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00499180(void)

{
  int in_ECX;
  
  if (((*(uint *)(in_ECX + 0xfc) & 0x200) != 0) && (*(int *)(in_ECX + 0xc) != 0)) {
    _DAT_00b3523c = (float)*(byte *)(*(int *)(in_ECX + 0xc) + 0x51) / 6.0;
    *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xfffffdff;
  }
  return (float10)_DAT_00b3523c;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004991c0(void)

{
  int in_ECX;
  
  if (((*(uint *)(in_ECX + 0xfc) & 0x400) != 0) && (*(int *)(in_ECX + 0xc) != 0)) {
    _DAT_00b35240 = (float)*(byte *)(*(int *)(in_ECX + 0xc) + 0x52) / 6.0;
    *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xfffffbff;
  }
  return (float10)_DAT_00b35240;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00499200(void)

{
  int in_ECX;
  
  if (((*(uint *)(in_ECX + 0xfc) & 0x800) != 0) && (*(int *)(in_ECX + 0xc) != 0)) {
    _DAT_00b35244 = (float)*(byte *)(*(int *)(in_ECX + 0xc) + 0x53) / 6.0;
    *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xfffff7ff;
  }
  return (float10)_DAT_00b35244;
}



void FUN_00499270(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x108);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x108) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_004992c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x104);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x104) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_00499310(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x114);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x114) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_00499360(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x110);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x110) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_004993b0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  LONG LVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b1886;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  if ((((char)in_ECX[4] == '\0') && (*in_ECX != 0)) &&
     (piVar1 = *(int **)(*in_ECX + 0x58), piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))(uVar3);
    if (iVar4 == 0) {
      *(undefined4 *)(*(int *)(*in_ECX + 0x58) + 0x288) = 0;
    }
  }
  in_ECX[1] = 0;
  puVar2 = (undefined4 *)in_ECX[2];
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[2] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[3];
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[3] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[3];
  local_4 = local_4 & 0xffffff00;
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[2];
  local_4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_004994c0(void)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (((DAT_00b3521c != '\0') && (*(int *)(DAT_00b35220 + 0xa8) != 0)) &&
     (*(int *)(DAT_00b35220 + 0xa8) != 0)) {
    return *(int *)(DAT_00b35220 + 0xa8);
  }
  if (DAT_00b35220 == 0) {
    return 0;
  }
  fVar2 = (float10)FUN_00402bd0();
  FUN_00542ea0();
  fVar3 = (float10)FUN_00499200();
  if (fVar3 < (float10)(double)fVar2 == (fVar3 == (float10)(double)fVar2)) {
    fVar2 = (float10)FUN_00402bd0();
    FUN_00542ea0();
    fVar3 = (float10)FUN_00499140();
    if (fVar3 <= (float10)(double)fVar2) {
      if (DAT_00b35220 == 0) {
        return 0;
      }
      if (*(int *)(DAT_00b35220 + 0xa0) == 0) {
        return DAT_00b35220;
      }
      iVar1 = *(int *)(DAT_00b35220 + 0xa0);
      goto LAB_0049955c;
    }
  }
  if (*(int *)(DAT_00b35220 + 0xa4) == 0) {
    return DAT_00b35220;
  }
  iVar1 = *(int *)(DAT_00b35220 + 0xa4);
LAB_0049955c:
  if (iVar1 != 0) {
    return iVar1;
  }
  return DAT_00b35220;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00499570(int param_1,float param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int in_ECX;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  if (DAT_00b07050 == '\0') {
    return;
  }
  if (DAT_00b42f3e == '\0') {
    return;
  }
  iVar7 = FUN_004994c0();
  if (DAT_00b07060 == '\0') {
    DAT_00b45dc0 = true;
  }
  else {
    cVar6 = FUN_004ed650();
    DAT_00b45dc0 = cVar6 == '\0';
  }
  if (DAT_00b3522b != '\0') {
    return;
  }
  if (((param_3 == '\0') && (param_1 == 0)) && (*(int *)(in_ECX + 0x20) == iVar7)) {
    return;
  }
  if ((DAT_00b3522c != '\0') || ((param_1 == 0 && (iVar7 != *(int *)(in_ECX + 0x20))))) {
    *(int *)(in_ECX + 0x20) = iVar7;
    DAT_00b3522c = '\0';
  }
  if ((DAT_00b45fe0 != 0) || (FUN_007b4290(0x13), DAT_00b45fe0 != 0)) {
    bVar3 = *(float *)(DAT_00b35220 + 0x3c) != _DAT_00b45fc4;
    if (bVar3) {
      _DAT_00b45fc4 = *(float *)(DAT_00b35220 + 0x3c);
    }
    bVar4 = *(float *)(DAT_00b35220 + 0x40) != _DAT_00b45fc0;
    if (bVar4) {
      _DAT_00b45fc0 = *(float *)(DAT_00b35220 + 0x40);
    }
    bVar5 = *(float *)(DAT_00b35220 + 0x44) != _DAT_00b45fd8;
    if (bVar5) {
      _DAT_00b45fd8 = *(float *)(DAT_00b35220 + 0x44);
    }
    if (*(float *)(DAT_00b35220 + 0x48) == _DAT_00b45fd4) {
      if ((!bVar5 && (!bVar4 && !bVar3)) && (*(char *)(DAT_00b45fe0 + 0x108) != '\0'))
      goto LAB_004996b3;
    }
    else {
      _DAT_00b45fd4 = *(float *)(DAT_00b35220 + 0x48);
    }
    FUN_007e1710();
  }
LAB_004996b3:
  if (((param_1 == 0) || (param_3 != '\0')) || (*(int *)(in_ECX + 0x20) == 0)) {
    uVar1 = *(uint *)(iVar7 + 0x68);
    _DAT_00b45e14 = (float)(uVar1 & 0xff) / 255.0;
    _DAT_00b45e18 = (float)(uVar1 >> 8 & 0xff) / 255.0;
    _DAT_00b45e1c = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
    _DAT_00b45e20 = 0x3f800000;
    uVar1 = *(uint *)(iVar7 + 0x6c);
    _DAT_00b45e24 = (float)(uVar1 & 0xff) / 255.0;
    _DAT_00b45e28 = (float)(uVar1 >> 8 & 0xff) / 255.0;
    _DAT_00b45e2c = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
    _DAT_00b45e30 = 0x3f800000;
    uVar1 = *(uint *)(iVar7 + 0x70);
    _DAT_00b45e34 = (float)(uVar1 & 0xff) / 255.0;
    _DAT_00b45e38 = (float)(uVar1 >> 8 & 0xff) / 255.0;
    _DAT_00b45e3c = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
    _DAT_00b45e40 = 0x3f800000;
    _DAT_00b45e44 = *(float *)(iVar7 + 0x4c);
    _DAT_00b45e48 = *(float *)(iVar7 + 0x50);
    fVar8 = (float10)FUN_004ed660();
    _DAT_00b45e4c = (float)fVar8;
    fVar8 = (float10)FUN_004ed680();
    _DAT_00b45e50 = (float)fVar8;
    _DAT_00b45e54 = *(float *)(iVar7 + 0x58);
    _DAT_00b45e58 = *(float *)(iVar7 + 0x5c);
    fVar8 = (float10)*(float *)(iVar7 + 0x54);
  }
  else {
    uVar1 = *(uint *)(*(int *)(in_ECX + 0x20) + 0x68);
    uVar2 = *(uint *)(param_1 + 0x68);
    fVar8 = (float10)FUN_00410eb0((float)(uVar1 & 0xff) / 255.0,(float)(uVar2 & 0xff) / 255.0,0,
                                  0x3f800000,*(undefined4 *)(in_ECX + 0x2c));
    fVar9 = (float10)FUN_00410eb0((float)(uVar1 >> 8 & 0xff) / 255.0,
                                  (float)(uVar2 >> 8 & 0xff) / 255.0,0,0x3f800000,
                                  *(undefined4 *)(in_ECX + 0x2c));
    fVar10 = (float10)FUN_00410eb0((float)(uVar1 >> 0x10 & 0xff) / 255.0,
                                   (float)(uVar2 >> 0x10 & 0xff) / 255.0,0,0x3f800000,
                                   *(undefined4 *)(in_ECX + 0x2c));
    _DAT_00b45e1c = (float)fVar10;
    _DAT_00b45e20 = 0x3f800000;
    uVar1 = *(uint *)(param_1 + 0x6c);
    uVar2 = *(uint *)(*(int *)(in_ECX + 0x20) + 0x6c);
    _DAT_00b45e14 = (float)fVar8;
    _DAT_00b45e18 = (float)fVar9;
    fVar8 = (float10)FUN_00410eb0((float)(uVar2 & 0xff) / 255.0,(float)(uVar1 & 0xff) / 255.0,0,
                                  0x3f800000,*(undefined4 *)(in_ECX + 0x2c));
    fVar9 = (float10)FUN_00410eb0((float)(uVar2 >> 8 & 0xff) / 255.0,
                                  (float)(uVar1 >> 8 & 0xff) / 255.0,0,0x3f800000,
                                  *(undefined4 *)(in_ECX + 0x2c));
    fVar10 = (float10)FUN_00410eb0((float)(uVar2 >> 0x10 & 0xff) / 255.0,
                                   (float)(uVar1 >> 0x10 & 0xff) / 255.0,0,0x3f800000,
                                   *(undefined4 *)(in_ECX + 0x2c));
    _DAT_00b45e2c = (float)fVar10;
    _DAT_00b45e30 = 0x3f800000;
    uVar1 = *(uint *)(param_1 + 0x70);
    uVar2 = *(uint *)(*(int *)(in_ECX + 0x20) + 0x70);
    _DAT_00b45e24 = (float)fVar8;
    _DAT_00b45e28 = (float)fVar9;
    fVar8 = (float10)FUN_00410eb0((float)(uVar2 & 0xff) / 255.0,(float)(uVar1 & 0xff) / 255.0,0,
                                  0x3f800000,*(undefined4 *)(in_ECX + 0x2c));
    fVar9 = (float10)FUN_00410eb0((float)(uVar2 >> 8 & 0xff) / 255.0,
                                  (float)(uVar1 >> 8 & 0xff) / 255.0,0,0x3f800000,
                                  *(undefined4 *)(in_ECX + 0x2c));
    fVar10 = (float10)FUN_00410eb0((float)(uVar2 >> 0x10 & 0xff) / 255.0,
                                   (float)(uVar1 >> 0x10 & 0xff) / 255.0,0,0x3f800000,
                                   *(undefined4 *)(in_ECX + 0x2c));
    _DAT_00b45e3c = (float)fVar10;
    _DAT_00b45e40 = 0x3f800000;
    _DAT_00b45e34 = (float)fVar8;
    _DAT_00b45e38 = (float)fVar9;
    fVar8 = (float10)FUN_00410eb0(*(undefined4 *)(*(int *)(in_ECX + 0x20) + 0x4c),
                                  *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x4c),0,0x3f800000,
                                  *(undefined4 *)(in_ECX + 0x2c));
    _DAT_00b45e44 = (float)fVar8;
    fVar8 = (float10)FUN_00410eb0(*(undefined4 *)(*(int *)(in_ECX + 0x20) + 0x50),
                                  *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x50),0,0x3f800000,
                                  *(undefined4 *)(in_ECX + 0x2c));
    _DAT_00b45e48 = (float)fVar8;
    fVar8 = (float10)FUN_004ed660(0,0x3f800000,*(undefined4 *)(in_ECX + 0x2c));
    fVar8 = (float10)FUN_004ed660((float)fVar8);
    fVar8 = (float10)FUN_00410eb0((float)fVar8);
    _DAT_00b45e4c = (float)fVar8;
    fVar8 = (float10)FUN_004ed680(0,0x3f800000,*(undefined4 *)(in_ECX + 0x2c));
    fVar8 = (float10)FUN_004ed680((float)fVar8);
    fVar8 = (float10)FUN_00410eb0((float)fVar8);
    _DAT_00b45e50 = (float)fVar8;
    fVar8 = (float10)FUN_00410eb0(*(undefined4 *)(*(int *)(in_ECX + 0x20) + 0x58),
                                  *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x58),0,0x3f800000,
                                  *(undefined4 *)(in_ECX + 0x2c));
    _DAT_00b45e54 = (float)fVar8;
    fVar8 = (float10)FUN_00410eb0(*(undefined4 *)(*(int *)(in_ECX + 0x20) + 0x5c),
                                  *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x5c),0,0x3f800000,
                                  *(undefined4 *)(in_ECX + 0x2c));
    _DAT_00b45e58 = (float)fVar8;
    fVar8 = (float10)FUN_00410eb0(*(undefined4 *)(*(int *)(in_ECX + 0x20) + 0x54),
                                  *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x54),0,0x3f800000,
                                  *(undefined4 *)(in_ECX + 0x2c));
  }
  _DAT_00b45dc4 = (float)fVar8;
  _DAT_00b45f58 = *(undefined4 *)(DAT_00b35220 + 0x78);
  _DAT_00b45f5c = *(undefined4 *)(DAT_00b35220 + 0x7c);
  _DAT_00b45f60 = *(undefined4 *)(DAT_00b35220 + 0x80);
  _DAT_00b45f64 = *(undefined4 *)(DAT_00b35220 + 0x88);
  _DAT_00b45f68 = *(undefined4 *)(DAT_00b35220 + 0x8c);
  _DAT_00b45f6c = *(undefined4 *)(DAT_00b35220 + 0x90);
  _DAT_00b45f70 = *(undefined4 *)(DAT_00b35220 + 0x94);
  _DAT_00b45f74 = *(undefined4 *)(DAT_00b35220 + 0x9c);
  if (param_1 == 0) {
    *(int *)(in_ECX + 0x20) = iVar7;
  }
  else if (param_2 == 1.0) {
    *(int *)(in_ECX + 0x20) = param_1;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
    *(undefined4 *)(in_ECX + 0x24) = 0;
  }
  if (*(char *)(in_ECX + 0x29) != '\0') {
    *(undefined1 *)(in_ECX + 0x29) = 0;
  }
  return;
}



void FUN_00499e20(void)

{
  DAT_00b35229 = 0;
  if (DAT_00b35234 != 0) {
    *(ushort *)(DAT_00b35234 + 0x18) = *(ushort *)(DAT_00b35234 + 0x18) | 1;
  }
  return;
}



void FUN_00499e40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00440560();
  if ((iVar1 != 0) && (DAT_00b35234 != 0)) {
    FUN_00440560();
    iVar2 = FUN_004c9a80();
    iVar3 = FUN_004c9aa0();
    iVar1 = DAT_00b35234;
    *(float *)(DAT_00b35234 + 0x54) = (float)(iVar2 * 0x1000 + 0x800);
    *(float *)(iVar1 + 0x58) = (float)(iVar3 * 0x1000 + 0x800);
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    FUN_00707370(0,1);
    FUN_00707980();
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00499ef0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  DAT_00b45fd0 = DAT_00b07058;
  if (DAT_00b07058 == '\0') {
    DAT_00b45fc8 = 0x80;
    DAT_00b45fcc = 7;
  }
  else {
    DAT_00b45fc8 = 0x100;
    DAT_00b45fcc = 8;
  }
  _DAT_00b45fe4 = 1.0 / (float)DAT_00b45fc8;
  _DAT_00b45fe8 = _DAT_00b45fe4;
  _DAT_00b45fec = _DAT_00b45fe4;
  _DAT_00b45ff0 = _DAT_00b45fe4;
  if (DAT_00b45fe0 != 0) {
    FUN_007e0cb0();
    FUN_007e1710();
  }
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_007c1ee0(*(int *)(in_ECX + 8));
  }
  if (*(int *)(in_ECX + 0x10) != 0) {
    FUN_007c1ee0(*(int *)(in_ECX + 0x10));
  }
  puVar1 = *(undefined4 **)(in_ECX + 8);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  return;
}



void FUN_00499ff0(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0;
  *(ushort *)(*(int *)(in_ECX + 4) + 0x18) = *(ushort *)(*(int *)(in_ECX + 4) + 0x18) | 1;
  return;
}



void FUN_0049a000(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *in_ECX;
  float10 fVar4;
  
  if (param_1 != *(int *)(in_ECX + 0x14)) {
    if ((param_1 != 0) && (*(int *)(in_ECX + 8) != 0)) {
      FUN_004cafc0();
      iVar2 = FUN_004c9a80();
      iVar3 = FUN_004c9aa0();
      if ((*(byte *)(param_1 + 0x24) >> 1 & 1) == 0) {
        fVar4 = (float10)0;
      }
      else {
        fVar4 = (float10)FUN_004cace0();
      }
      iVar1 = *(int *)(in_ECX + 4);
      *(float *)(iVar1 + 0x54) = (float)(iVar2 * 0x1000 + 0x800);
      *(float *)(iVar1 + 0x58) = (float)(iVar3 * 0x1000 + 0x800);
      *(float *)(iVar1 + 0x5c) = (float)fVar4;
      FUN_00707370(0,1);
    }
    *(int *)(in_ECX + 0x14) = param_1;
  }
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x24) >> 1 & 1) == 0)) {
    *in_ECX = 0;
    *(ushort *)(*(int *)(in_ECX + 4) + 0x18) = *(ushort *)(*(int *)(in_ECX + 4) + 0x18) | 1;
  }
  else {
    *in_ECX = 1;
    *(ushort *)(*(int *)(in_ECX + 4) + 0x18) = *(ushort *)(*(int *)(in_ECX + 4) + 0x18) & 0xfffe;
  }
  iVar2 = FUN_006ecc80();
  if (((iVar2 == param_1) && (param_1 != 0)) && ((*(byte *)(param_1 + 0x24) >> 1 & 1) != 0)) {
    DAT_00b3521d = 1;
  }
  return;
}



void FUN_0049a100(void)

{
  float fVar1;
  int in_ECX;
  
  if (((DAT_00b07050 == '\0') || (DAT_00b42f3e == '\0')) && (*(int **)(in_ECX + 0x1c) != (int *)0x0)
     ) {
    fVar1 = (float)DAT_00b33ea0;
    if (DAT_00b33ea0 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x54))(fVar1);
  }
  return;
}



undefined4 FUN_0049a140(void)

{
  return DAT_00b35230;
}



void FUN_0049a150(byte param_1)

{
  FUN_0070dfa0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0049a170(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b18b8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3f3ac;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a3f370;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0049a1e0(byte param_1)

{
  FUN_0049a170();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049a200(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  LONG LVar5;
  int *piVar6;
  undefined4 **ppuVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  undefined4 *local_114;
  float local_110;
  uint local_10c;
  uint local_108;
  undefined4 local_104;
  undefined4 *local_100;
  uint local_fc;
  int *local_f8;
  int iStack_f4;
  int local_f0;
  float local_ec;
  undefined4 *local_e8;
  undefined4 local_e4;
  float local_e0;
  undefined4 *local_dc;
  undefined4 *local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 *local_c4;
  undefined4 local_c0 [8];
  undefined1 auStack_a0 [16];
  undefined4 *local_90;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b1904;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffedc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_fc = 0;
  if ((((DAT_00b07050 != '\0') && (DAT_00b42f3e != '\0')) && (DAT_00b070a0 != '\0')) &&
     (*(int *)(DAT_00b333a0 + 0x34) == 0)) {
    local_f8 = (int *)((uint)DAT_00b06a2c / DAT_00b070e0);
    local_104 = 0;
    local_108 = 0;
    local_114 = (undefined4 *)(float)(int)local_f8;
    if ((int)local_f8 < 0) {
      local_114 = (undefined4 *)((float)local_114 + 4.2949673e+09);
    }
    fVar11 = (float10)FUN_00985a00((double)(float)local_114,uVar1);
    local_114 = (undefined4 *)(float)fVar11;
    iVar2 = FUN_009828c0();
    local_f0 = iVar2;
    for (puVar8 = (undefined4 *)0x0; puVar9 = (undefined4 *)0x0, puVar8 < DAT_00b06a2c;
        puVar8 = (undefined4 *)((int)puVar8 + 1)) {
      while ((puVar9 < DAT_00b06a2c &&
             (((((piVar3 = (int *)FUN_00482150(puVar8,puVar9), (int)puVar8 < iVar2 ||
                 ((int)puVar9 < iVar2)) ||
                (((undefined4 *)((int)DAT_00b06a2c - iVar2) <= puVar8 ||
                 (((undefined4 *)((int)DAT_00b06a2c - iVar2) <= puVar9 || (piVar3 == (int *)0x0)))))
                ) || (*piVar3 == 0)) ||
              ((iVar4 = FUN_004ce3c0(), iVar4 == 0 || ((*(byte *)(*piVar3 + 0x24) >> 1 & 1) == 0))))
             ))) {
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    local_f8 = (int *)((int)local_110 + 0x48);
    if (*local_f8 == 0) {
      FUN_007c23c0(DAT_00b43104,0xd);
      FUN_0075fa90();
    }
    local_10c = (uint)DAT_00b42eac;
    FUN_007b4890();
    local_114 = (undefined4 *)FUN_00401f00(0x124);
    local_4 = 0;
    if (local_114 == (undefined4 *)0x0) {
      local_100 = (undefined4 *)0x0;
    }
    else {
      local_100 = (undefined4 *)FUN_0070d590();
    }
    puVar8 = local_100;
    local_c4 = local_100;
    if (local_100 != (undefined4 *)0x0) {
      InterlockedIncrement(local_100 + 1);
    }
    local_4 = 1;
    FUN_00711580(0xbfc90fdb,0xbfc90fdb,0x3fc90fdb);
    FUN_0070de60();
    local_d0 = 0x3dcccccd;
    local_e0 = (float)(int)(DAT_00b070e0 * -0x800);
    local_c8 = 1;
    local_114 = (undefined4 *)(float)(int)(DAT_00b070e0 << 0xb);
    local_cc = 0x48435000;
    local_dc = local_114;
    local_d8 = local_114;
    local_d4 = local_e0;
    iVar2 = FUN_00440560();
    if (iVar2 != 0) {
      FUN_00440560();
      iVar2 = FUN_004c9a80();
      local_114 = (undefined4 *)(iVar2 * 0x1000 + 0x800);
      local_110 = (float)(int)local_114;
      iVar2 = FUN_004c9aa0();
      local_114 = (undefined4 *)(float)(iVar2 * 0x1000 + 0x800);
      local_ec = local_110;
      puVar8[0x15] = local_110;
      local_e8 = local_114;
      puVar8[0x16] = local_114;
      local_e4 = 0x47c35000;
      puVar8[0x17] = 0x47c35000;
    }
    puVar9 = local_c0;
    puVar10 = puVar8 + 0xc;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    FUN_0070c190();
    FUN_0070df30();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_0070c190();
    FUN_00707370(0,1);
    local_90 = puVar8;
    FUN_0070e040();
    FUN_00977c50();
    _DAT_00b44ee4 = (float)_DAT_00b070e8;
    FUN_007d6fe0();
    FUN_007d7280(7);
    FUN_00701970();
    iVar2 = DAT_00b3f928;
    puVar9 = (undefined4 *)FUN_007b7650();
    puVar8 = *(undefined4 **)(iVar2 + 8);
    if (puVar8 != puVar9) {
      if (((puVar8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0))
         && (puVar8 != (undefined4 *)0x0)) {
        (**(code **)*puVar8)();
      }
      *(undefined4 **)(iVar2 + 8) = puVar9;
      if (puVar9 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar9 + 1);
      }
    }
    piVar3 = (int *)FUN_007b7650();
    (**(code **)(*piVar3 + 0x4c))();
    iVar2 = FUN_007b7650();
    *(undefined1 *)(iVar2 + 0x21e0) = 1;
    puVar8 = DAT_00b06a2c;
    for (puVar9 = (undefined4 *)0x0; puVar9 < puVar8; puVar9 = (undefined4 *)((int)puVar9 + 1)) {
      puVar10 = (undefined4 *)0x0;
      while (local_114 = puVar10, puVar10 < puVar8) {
        piVar6 = (int *)FUN_00482150(puVar9,puVar10);
        piVar3 = (int *)FUN_00707530(4);
        local_f8 = piVar3;
        if (((((int)puVar9 < iStack_f4) || ((int)puVar10 < iStack_f4)) ||
            (((undefined4 *)((int)DAT_00b06a2c - iStack_f4) <= puVar9 ||
             (((undefined4 *)((int)DAT_00b06a2c - iStack_f4) <= puVar10 || (*piVar6 == 0)))))) ||
           (iVar2 = FUN_004ce3c0(), iVar2 == 0)) {
          *(undefined1 *)((int)piVar3 + 0x72) = 0;
LAB_0049a71d:
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar8 = DAT_00b06a2c;
        }
        else {
          if ((*(byte *)(*piVar6 + 0x24) >> 1 & 1) == 0) {
            *(undefined1 *)((int)piVar3 + 0x72) = 0;
            local_114 = puVar10;
          }
          else {
            *(undefined1 *)((int)piVar3 + 0x72) = 1;
            iVar2 = 0;
            do {
              iVar4 = FUN_00441800(iVar2,0);
              if ((((*(short *)(iVar4 + 0xb6) != 0) && (**(int **)(iVar4 + 0xb0) != 0)) &&
                  (piVar6 = (int *)FUN_00707530(4), piVar3 = local_f8, piVar6 != (int *)0x0)) &&
                 ((iVar4 = (**(code **)(*piVar6 + 0x54))(), piVar3 = local_f8, 4 < iVar4 &&
                  (iVar4 = (**(code **)(*piVar6 + 0x54))(), piVar3 = local_f8, iVar4 < 0xb)))) {
                fVar11 = (float10)FUN_004cace0();
                piVar6[0x28] = (int)(float)((float10)100000.0 - (fVar11 + (float10)50.0));
                piVar3 = local_f8;
              }
              FUN_007073d0(auStack_a0);
              iVar2 = iVar2 + 1;
            } while (iVar2 < 4);
          }
          piVar3[0x1d] = local_108;
          piVar3[0x1e] = local_10c;
          local_108 = local_108 + 1;
          puVar10 = local_114;
          if (local_108 <= DAT_00b070e0 - 1) goto LAB_0049a71d;
          local_10c = local_10c + 1;
          local_108 = 0;
          puVar10 = (undefined4 *)((int)local_114 + 1);
          puVar8 = DAT_00b06a2c;
        }
      }
    }
    iVar2 = FUN_007b7650();
    *(undefined1 *)(iVar2 + 0x21e1) = 1;
    piVar3 = (int *)FUN_007b7650();
    (**(code **)(*piVar3 + 0x50))();
    FUN_007d72d0();
    FUN_007b4890();
    _DAT_00b44ee4 = 0.0;
    FUN_00977c50(2);
    FUN_00482150(1,1);
    iVar2 = FUN_004c9a80();
    local_10c = iVar2 << 0xc;
    _DAT_00b45eec = (float)(int)local_10c;
    iVar2 = FUN_004c9aa0();
    local_10c = iVar2 << 0xc;
    _DAT_00b45ef0 = (float)(iVar2 << 0xc);
    if (DAT_00b45dcc != 0) {
      if (*local_f8 == 0) {
        local_114 = (undefined4 *)0x0;
        ppuVar7 = &local_114;
        local_fc = 1;
      }
      else {
        ppuVar7 = (undefined4 **)(*local_f8 + 0x20);
      }
      puVar9 = local_114;
      puVar8 = *ppuVar7;
      if ((((local_fc & 1) != 0) && (local_114 != (undefined4 *)0x0)) &&
         (LVar5 = InterlockedDecrement(local_114 + 1), LVar5 == 0)) {
        (**(code **)*puVar9)();
      }
      puVar9 = *(undefined4 **)(DAT_00b45dcc + 0x10c);
      piVar3 = (int *)(DAT_00b45dcc + 0x10c);
      if (puVar9 != puVar8) {
        if (((puVar9 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar9 + 1), LVar5 == 0)
            ) && (puVar9 != (undefined4 *)0x0)) {
          (**(code **)*puVar9)();
        }
        *piVar3 = (int)puVar8;
        if (puVar8 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar8 + 1);
        }
      }
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_0070dfa0();
    puVar8 = local_100;
    local_4 = 0xffffffff;
    LVar5 = InterlockedDecrement(local_100 + 1);
    if (LVar5 == 0) {
      (**(code **)*puVar8)();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0049a8b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  LONG LVar5;
  int *in_ECX;
  int *piStack_4;
  
  DAT_00b0703c = 0;
  if ((char)param_1 != '\0') {
    piStack_4 = in_ECX;
    FUN_00977c50(3);
    if (in_ECX[1] != 0) {
      FUN_007c1ee0(in_ECX[1]);
    }
    if (in_ECX[2] != 0) {
      FUN_007c1ee0(in_ECX[2]);
    }
    if (in_ECX[4] != 0) {
      FUN_007c1ee0(in_ECX[4]);
    }
    if (in_ECX[5] != 0) {
      FUN_007c1ee0(in_ECX[5]);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      in_ECX[1] = 0;
    }
    puVar1 = (undefined4 *)in_ECX[2];
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      in_ECX[2] = 0;
    }
    puVar1 = (undefined4 *)in_ECX[4];
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      in_ECX[4] = 0;
    }
    puVar1 = (undefined4 *)in_ECX[5];
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      in_ECX[5] = 0;
    }
    if (DAT_00b45dcc != 0) {
      puVar2 = *(undefined4 **)(DAT_00b45dcc + 0x104);
      puVar1 = (undefined4 *)(DAT_00b45dcc + 0x104);
      if (puVar2 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puVar2 + 1);
        if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        *puVar1 = 0;
      }
      puVar2 = *(undefined4 **)(DAT_00b45dcc + 0x108);
      puVar1 = (undefined4 *)(DAT_00b45dcc + 0x108);
      if (puVar2 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puVar2 + 1);
        if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        *puVar1 = 0;
      }
      puVar2 = *(undefined4 **)(DAT_00b45dcc + 0x114);
      puVar1 = (undefined4 *)(DAT_00b45dcc + 0x114);
      if (puVar2 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puVar2 + 1);
        if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        *puVar1 = 0;
      }
    }
    if (DAT_00b45fe0 != 0) {
      FUN_007e0cb0();
    }
    if (DAT_00b45f54 != 0) {
      FUN_007de0b0();
    }
    param_1 = (undefined4 *)in_ECX[0xd];
    while (param_1 != (undefined4 *)0x0) {
      if (param_1 == (undefined4 *)0x0) {
        param_1 = (undefined4 *)0x0;
      }
      else {
        iVar3 = param_1[2];
        puVar1 = (undefined4 *)*param_1;
        if (*(int *)(iVar3 + 8) != 0) {
          FUN_007c1ee0(*(int *)(iVar3 + 8));
        }
        if (*(int *)(iVar3 + 0xc) != 0) {
          FUN_007c1ee0(*(int *)(iVar3 + 0xc));
        }
        puVar2 = *(undefined4 **)(iVar3 + 8);
        if (puVar2 != (undefined4 *)0x0) {
          LVar5 = InterlockedDecrement(puVar2 + 1);
          if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          *(undefined4 *)(iVar3 + 8) = 0;
        }
        puVar2 = *(undefined4 **)(iVar3 + 0xc);
        if (puVar2 != (undefined4 *)0x0) {
          LVar5 = InterlockedDecrement(puVar2 + 1);
          if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          *(undefined4 *)(iVar3 + 0xc) = 0;
        }
        FUN_007aa860(&param_1);
        (**(code **)(*DAT_00b35230 + 0x88))(&piStack_4,*(undefined4 *)(iVar3 + 4));
        piVar4 = piStack_4;
        if (((piStack_4 != (int *)0x0) && (LVar5 = InterlockedDecrement(piStack_4 + 1), LVar5 == 0))
           && (piVar4 != (int *)0x0)) {
          (**(code **)*piVar4)(1);
        }
        FUN_004993b0();
        FUN_00401f20(iVar3);
        param_1 = puVar1;
      }
    }
    if (in_ECX[0x10] != 0) {
      FUN_006b73c0();
      iVar3 = in_ECX[0x10];
      if (iVar3 != 0) {
        FUN_006b73e0();
        FUN_00401f20(iVar3);
      }
      in_ECX[0x10] = 0;
    }
    puVar1 = (undefined4 *)*in_ECX;
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *in_ECX = 0;
    }
    if (in_ECX[0x12] != 0) {
      FUN_007c1ee0(in_ECX[0x12]);
      puVar1 = (undefined4 *)in_ECX[0x12];
      if (puVar1 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puVar1 + 1);
        if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        in_ECX[0x12] = 0;
      }
      if (DAT_00b45dcc != 0) {
        puVar2 = *(undefined4 **)(DAT_00b45dcc + 0x10c);
        puVar1 = (undefined4 *)(DAT_00b45dcc + 0x10c);
        if (puVar2 != (undefined4 *)0x0) {
          LVar5 = InterlockedDecrement(puVar2 + 1);
          if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          *puVar1 = 0;
        }
      }
    }
    FUN_00977c50(2);
  }
  return 1;
}



void FUN_0049ac60(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined1 *in_ECX;
  
  if (in_ECX[0x34] == '\0') {
    in_ECX[0x34] = 1;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    *in_ECX = 1;
    *(undefined4 *)(in_ECX + 0x14) = 0;
    puVar1 = *(undefined4 **)(in_ECX + 0x10);
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 0x10) = 0;
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x20) = 0;
  }
  *(undefined4 *)(in_ECX + 0x28) = 0x7f7fffff;
  *(undefined4 *)(in_ECX + 0x2c) = 0x7f7fffff;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049ad00(void)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float *pfVar13;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float local_74;
  double local_70;
  float fStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  double local_20;
  double local_18;
  double local_10;
  
  local_94 = in_ECX;
  if (DAT_00b333c4 == (int *)0x0) {
    iVar3 = FUN_00440560();
  }
  else {
    fVar1 = (float)DAT_00b070b0;
    if (DAT_00b070b0 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    iVar3 = FUN_0065e5e0(fVar1);
  }
  if (*(int *)(DAT_00b33398 + 0x24) == 0) {
    return;
  }
  if ((iVar3 == 0) || ((*(byte *)(iVar3 + 0x24) >> 1 & 1) == 0)) {
    if (DAT_00b35248 == '\0') {
      DAT_00b3522a = 0;
      return;
    }
    if (*(int *)(in_ECX + 0x40) == 0) {
      DAT_00b3522a = 0;
      return;
    }
    DAT_00b35248 = 0;
    FUN_006b7240();
    DAT_00b3522a = 0;
    return;
  }
  fVar10 = (float10)FUN_004cace0();
  local_c0 = (float)fVar10;
  local_b8 = DAT_00b3fc84;
  local_bc = DAT_00b3fc80;
  cVar2 = FUN_004c97f0();
  piVar9 = DAT_00b333c4;
  if (cVar2 == '\0') {
    local_a4 = (float)DAT_00b070b8;
    if (DAT_00b070b8 < 0) {
      local_a4 = local_a4 + 4.2949673e+09;
    }
    fVar1 = (float)DAT_00b070b0;
    if (DAT_00b070b0 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    local_18 = (double)_DAT_00b070d8;
    local_a8 = DAT_00b3f9b0;
    fVar11 = (float10)fVar1;
    local_b0 = DAT_00b3f9a8;
    local_70 = (double)fVar1;
    local_ac = DAT_00b3f9ac;
    local_30 = (float)DAT_00b333c4[0xd];
    local_38 = DAT_00b333c4[0xb];
    fVar12 = (float10)local_a4;
    local_34 = DAT_00b333c4[0xc];
    iVar3 = 0;
    iVar8 = 0;
    local_90 = 0;
    local_9c = (float)((fVar11 + fVar11) / (fVar12 - (float10)1.0));
    fVar10 = (float10)0;
    fVar1 = _DAT_00b070d8;
    if (fVar10 < fVar12) {
LAB_0049aef0:
      local_98 = 0;
      if ((float10)0 < fVar12) {
        fVar11 = fVar11 * (float10)-1.0;
        local_10 = (double)fVar11;
        local_20 = (double)((float10)local_9c * fVar10 + fVar11);
        local_b4 = 0.0;
        fVar10 = (float10)0.0;
        do {
          local_a8 = (float)piVar9[0xd];
          local_c4 = 0.0;
          local_b0 = (float)piVar9[0xb] + (float)local_20;
          local_ac = (float)((float10)(float)piVar9[0xc] + (float10)local_9c * fVar10 + fVar11);
          if (iVar3 == 0) {
LAB_0049afb8:
            local_44 = local_b0;
            pfVar13 = &local_44;
            local_40 = local_ac;
            local_3c = 0;
            FUN_0043f270(pfVar13);
            iVar3 = FUN_004f1a80(pfVar13);
          }
          else {
            local_24 = 0;
            local_2c = local_b0;
            local_28 = local_ac;
            cVar2 = FUN_004cc540(&local_2c);
            if (cVar2 == '\0') goto LAB_0049afb8;
          }
          if (iVar3 == 0) {
            fVar10 = (float10)-3.4028235e+38;
          }
          else {
            fVar10 = (float10)FUN_004cace0();
          }
          local_b4 = (float)fVar10;
          cVar2 = FUN_00440590(&local_b0,&local_c4);
          if ((cVar2 == '\0') || (local_b4 <= local_c4)) {
            if (DAT_00b3522a != '\0') {
              local_8c = 0;
              local_88 = 0;
              local_84 = 0x3f800000;
              local_80 = 0;
              iVar4 = FUN_0047fd30(0x41200000,&local_8c);
              uVar6 = FUN_004e70b0();
              FUN_00405680(uVar6);
              fVar10 = (float10)FUN_004cace0();
              fVar12 = (float10)local_c4;
              if (fVar12 < fVar10) {
                fVar12 = (float10)FUN_004cace0();
              }
              local_b4 = (float)fVar12;
              local_7c = local_b0;
              *(float *)(iVar4 + 0x54) = local_b0;
              local_78 = local_ac;
              *(float *)(iVar4 + 0x58) = local_ac;
              local_74 = local_b4 + 10.0;
              *(float *)(iVar4 + 0x5c) = local_74;
              goto LAB_0049b1af;
            }
          }
          else {
            iVar8 = iVar8 + 1;
            local_bc = local_bc + local_b0;
            local_b8 = local_b8 + local_ac;
            if (DAT_00b3522a != '\0') {
              local_60 = 0;
              local_5c = 0x3f800000;
              local_58 = 0;
              local_54 = 0;
              iVar4 = FUN_0047fd30(0x41200000,&local_60);
              uVar6 = FUN_004e70b0();
              FUN_00405680(uVar6);
              fVar10 = (float10)FUN_004cace0();
              fVar12 = (float10)local_c4;
              if (fVar12 < fVar10) {
                fVar12 = (float10)FUN_004cace0();
              }
              local_b4 = (float)fVar12;
              local_50 = local_b0;
              *(float *)(iVar4 + 0x54) = local_b0;
              local_4c = local_ac;
              *(float *)(iVar4 + 0x58) = local_ac;
              local_48 = local_b4 + 10.0;
              *(float *)(iVar4 + 0x5c) = local_48;
LAB_0049b1af:
              FUN_00440e60(iVar4,0x41200000);
            }
          }
          local_98 = local_98 + 1;
          local_b4 = (float)local_98;
          fVar10 = (float10)local_98;
          fVar12 = (float10)local_a4;
          piVar9 = DAT_00b333c4;
          if (fVar12 <= fVar10) goto code_r0x0049b1ed;
          fVar11 = (float10)local_10;
        } while( true );
      }
      goto LAB_0049b204;
    }
LAB_0049b21c:
    local_a4 = (float)iVar8;
    if (iVar8 < 0) {
      local_a4 = local_a4 + 4.2949673e+09;
    }
    local_bc = local_bc / local_a4 - (float)piVar9[0xb];
    local_b8 = local_b8 / local_a4 - (float)piVar9[0xc];
    in_ECX = local_94;
    if (DAT_00b3521c != '\0') {
      local_c4 = 0.0;
      goto LAB_0049b2df;
    }
    local_c0 = ABS(local_c0 - local_30);
    if (fVar1 <= local_c0) {
      local_c4 = 0.0;
      goto LAB_0049b2df;
    }
    local_c0 = (fVar1 - local_c0) / fVar1;
    local_c4 = local_c0 * (float)(((float10)local_a4 + (float10)local_a4) / (fVar12 * fVar12));
  }
  else {
    local_7c = (float)DAT_00b333c4[0xb];
    local_78 = (float)DAT_00b333c4[0xc];
    local_74 = (float)DAT_00b333c4[0xd];
    if (DAT_00b3521c != '\0') {
      local_c4 = 0.0;
      goto LAB_0049b2df;
    }
    local_c0 = ABS(local_c0 - local_74);
    if (_DAT_00b070d0 <= local_c0) {
      local_c4 = 0.0;
      goto LAB_0049b2df;
    }
    local_c4 = (_DAT_00b070d0 - local_c0) / _DAT_00b070d0;
  }
  if (1.0 < local_c4) {
    local_c4 = 1.0;
  }
LAB_0049b2df:
  FUN_00499020();
  local_c0 = (float)DAT_00b070b0;
  if (DAT_00b070b0 < 0) {
    local_c0 = local_c0 + 4.2949673e+09;
  }
  local_c0 = local_c0 * (1.0 - local_c4);
  local_a4 = local_c0 * local_bc;
  local_a0 = local_c0 * local_b8;
  local_bc = local_a4 + (float)piVar9[0xb];
  local_b8 = (float)piVar9[0xc] + local_a0;
  if ((*(int *)(in_ECX + 0x40) != 0) &&
     (cVar2 = FUN_006b73a0(), piVar9 = DAT_00b333c4, cVar2 == '\0')) {
    iVar3 = *(int *)(in_ECX + 0x40);
    if (iVar3 != 0) {
      FUN_006b73e0();
      FUN_00401f20(iVar3);
    }
    *(undefined4 *)(in_ECX + 0x40) = 0;
    piVar9 = DAT_00b333c4;
  }
  if (*(int *)(in_ECX + 0x40) == 0) {
    if (((0.0 < local_c4) && (DAT_00b35220 != 0)) && (*(int *)(DAT_00b35220 + 0x38) != 0)) {
      uVar6 = FUN_006ae0a0(*(undefined4 *)(*(int *)(DAT_00b35220 + 0x38) + 0xc),0x12,0);
      *(undefined4 *)(in_ECX + 0x40) = uVar6;
      DAT_00b3522a = 0;
      return;
    }
  }
  else {
    if (DAT_00b3522a != '\0') {
      pdVar5 = (double *)(**(code **)(*piVar9 + 0x174))();
      local_70 = *pdVar5;
      local_a8 = *(float *)(pdVar5 + 1) + 10.0;
      local_b0 = local_bc;
      local_ac = local_b8;
      local_8c = 0x3f800000;
      local_88 = 0;
      local_84 = 0;
      local_80 = 0;
      fStack_68 = local_a8;
      iVar3 = FUN_0047fd30(0x41200000,&local_8c);
      uVar6 = FUN_004e70b0();
      FUN_00405680(uVar6);
      *(float *)(iVar3 + 0x54) = local_b0;
      *(float *)(iVar3 + 0x58) = local_ac;
      *(float *)(iVar3 + 0x5c) = local_a8;
      FUN_00440e60(iVar3,0x41200000);
      local_8c = 0x3f800000;
      local_88 = 0x3f800000;
      local_84 = 0;
      local_80 = 0;
      local_58 = 0;
      local_54 = 0;
      local_60 = 0x3f800000;
      local_5c = 0x3f800000;
      uVar6 = FUN_0047f070(&local_70,&local_60,&local_b0,&local_8c);
      uVar7 = FUN_004e70b0();
      FUN_00405680(uVar7);
      FUN_00440e60(uVar6,0x41200000);
    }
    fVar10 = (float10)FUN_004cace0();
    FUN_006b7360(local_bc,local_b8,(float)fVar10);
    cVar2 = FUN_006b7260();
    if ((cVar2 != '\0') && (local_c4 <= 0.0)) {
      DAT_00b35248 = 0;
      FUN_006b7240();
      FUN_006b73c0();
      iVar3 = *(int *)(in_ECX + 0x40);
      if (iVar3 != 0) {
        FUN_006b73e0();
        FUN_00401f20(iVar3);
      }
      *(undefined4 *)(in_ECX + 0x40) = 0;
      DAT_00b3522a = 0;
      return;
    }
    cVar2 = FUN_006b7260();
    if ((cVar2 == '\0') && (0.0 < local_c4)) {
      DAT_00b35248 = 1;
      FUN_006b7190(1);
      DAT_00b3522a = 0;
      return;
    }
  }
  DAT_00b3522a = 0;
  return;
code_r0x0049b1ed:
  fVar1 = (float)local_18;
  fVar11 = (float10)local_70;
LAB_0049b204:
  local_90 = local_90 + 1;
  fVar10 = (float10)local_90;
  if (fVar12 <= fVar10) goto LAB_0049b21c;
  goto LAB_0049aef0;
}



void FUN_0049b5f0(int param_1,int param_2)

{
  int iVar1;
  undefined1 *in_ECX;
  float10 fVar2;
  float local_4;
  
  iVar1 = *(int *)(DAT_00b333a0 + 0x34);
  local_4 = -1.0;
  if (iVar1 == 0) {
    iVar1 = FUN_0043fa40(param_1,param_2);
  }
  else if ((*(byte *)(iVar1 + 0x24) >> 1 & 1) == 0) {
    *in_ECX = 0;
    *(ushort *)(*(int *)(in_ECX + 4) + 0x18) = *(ushort *)(*(int *)(in_ECX + 4) + 0x18) | 1;
    return;
  }
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_004cace0();
    local_4 = (float)fVar2;
    FUN_0049a000(iVar1);
  }
  *in_ECX = 1;
  *(ushort *)(*(int *)(in_ECX + 4) + 0x18) = *(ushort *)(*(int *)(in_ECX + 4) + 0x18) & 0xfffe;
  iVar1 = *(int *)(in_ECX + 4);
  *(float *)(iVar1 + 0x54) = (float)(param_1 << 0xc) + 2048.0;
  *(float *)(iVar1 + 0x58) = (float)(param_2 << 0xc) + 2048.0;
  *(float *)(iVar1 + 0x5c) = local_4;
  FUN_00707370(0,0);
  return;
}



void FUN_0049b6c0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  FUN_00477ef0();
  puVar1 = DAT_00b35230;
  if (DAT_00b35230 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b35230 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b35230 = (undefined4 *)0x0;
  }
  return;
}



void FUN_0049b710(char *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b1967;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 4) == 0) {
    iVar2 = FUN_00401f00(0xdc,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0070b780(0);
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar3);
    puVar4 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
    local_4 = 1;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *puVar4 = &PTR_FUN_00a3d604;
      *(undefined2 *)(puVar4 + 6) = 0xec;
      *(undefined1 *)((int)puVar4 + 0x1a) = 0;
    }
    *(ushort *)(puVar4 + 6) = *(ushort *)(puVar4 + 6) & 0xdced | 0xed;
    local_4 = 0xffffffff;
    FUN_00405680(puVar4);
    FUN_0075fa90(puVar4);
    iVar2 = FUN_00401f00(0x5c);
    local_4 = 2;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_007095a0();
    }
    *(int *)(iVar2 + 0x54) = *(int *)(iVar2 + 0x54) + 2;
    *(undefined4 *)(iVar2 + 0x1c) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x20) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x28) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x24) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x2c) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x30) = 0x3f800000;
    local_4 = 0xffffffff;
    FUN_00405680(iVar2);
    puVar4 = (undefined4 *)FUN_00401f00(0x1c);
    local_4 = 3;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *puVar4 = &PTR_FUN_00a2fdb4;
      *(undefined2 *)(puVar4 + 6) = 0xf;
    }
    *(ushort *)(puVar4 + 6) = *(ushort *)(puVar4 + 6) & 0xfffd | 1;
    local_4 = 0xffffffff;
    FUN_00405680(puVar4);
    puVar4 = (undefined4 *)FUN_00401f00(0x24);
    local_4 = 4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *puVar4 = &PTR_FUN_00a3d744;
      puVar4[7] = 0;
      puVar4[8] = 0xffffffff;
      *(undefined2 *)(puVar4 + 6) = 0x4180;
    }
    *(ushort *)(puVar4 + 6) = *(ushort *)(puVar4 + 6) | 0xc00;
    local_4 = 0xffffffff;
    FUN_00405680(puVar4);
    if (param_1 == (char *)0x0) {
      param_1 = "Water Node";
    }
    FUN_006ff420(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049b930(int *param_1,char param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  float fVar6;
  bool bVar7;
  int *piVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  float *pfVar12;
  LONG LVar13;
  int in_ECX;
  float10 fVar14;
  undefined4 uVar15;
  float fStack_40;
  int *piStack_3c;
  float fStack_38;
  float fStack_34;
  
  iVar10 = FUN_006ecc80();
  if (iVar10 == 0) {
    return;
  }
  iVar10 = (**(code **)(*(int *)*param_1 + 0x154))();
  if (iVar10 == 0) {
    return;
  }
  FUN_006ecc80();
  fVar14 = (float10)FUN_004cace0();
  iVar10 = (**(code **)(*(int *)*param_1 + 0x174))();
  bVar5 = *(float *)(iVar10 + 8) < (float)fVar14;
  iVar10 = *param_1;
  uVar15 = 0x3f800000;
  uVar11 = FUN_006ecc80(0x3f800000);
  cVar9 = FUN_005e06c0(iVar10 + 0x2c,uVar11,uVar15);
  pfVar12 = (float *)(**(code **)(*(int *)*param_1 + 0x174))();
  fVar1 = *pfVar12;
  fVar2 = pfVar12[1];
  fStack_38 = *(float *)(param_1[1] + 0x54);
  fStack_34 = *(float *)(param_1[1] + 0x58);
  fVar14 = (float10)FUN_00982c30();
  if (180.0 < (float)fVar14) {
    fVar6 = 180.0 / ((float)fVar14 - 0.0);
    fStack_38 = (fStack_38 - fVar1) * fVar6 + fVar1;
    fStack_34 = fVar2 + (fStack_34 - fVar2) * fVar6;
  }
  fVar6 = ((fVar1 - fVar1) - -1024.0) * 0.00048828125;
  DAT_00b45fb8 = (fVar6 + fVar6) - 1.0;
  DAT_00b45fbc = ((fVar2 - fVar2) - -1024.0) * 0.00048828125 * -2.0 + 1.0;
  _DAT_00b45fac = ((fStack_38 - fVar1) - -1024.0) * 0.00048828125 * -2.0 + 1.0;
  _DAT_00b45fb0 = ((fStack_34 - fVar2) - -1024.0) * 0.00048828125 * -2.0 + 1.0;
  _DAT_00b45f98 = param_1[7];
  _DAT_00b45f9c = param_1[8];
  iVar10 = FUN_006ecc80();
  if ((*(byte *)(iVar10 + 0x24) >> 1 & 1) == 0) {
    *(ushort *)(param_1[1] + 0x18) = *(ushort *)(param_1[1] + 0x18) | 1;
  }
  else {
    FUN_006ecc80();
    fVar14 = (float10)FUN_004cace0();
    iVar10 = param_1[1];
    *(float *)(iVar10 + 0x54) = fVar1;
    *(float *)(iVar10 + 0x58) = fVar2;
    *(float *)(iVar10 + 0x5c) = (float)(fVar14 + (float10)0.10000000149011612);
    *(ushort *)(param_1[1] + 0x18) = *(ushort *)(param_1[1] + 0x18) & 0xfffe;
    FUN_00707370(0,1);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x34);
  fStack_40 = 3.4028235e+38;
  bVar7 = false;
  piVar8 = (int *)0x0;
  while (puVar3 != (undefined4 *)0x0) {
    piVar4 = (int *)puVar3[2];
    puVar3 = (undefined4 *)*puVar3;
    piStack_3c = piVar8;
    if (bVar7) {
      fVar14 = (float10)FUN_00982c30();
      if ((float)fVar14 < fStack_40) {
        fStack_40 = (float)fVar14;
        piStack_3c = piVar4;
      }
    }
    piVar8 = piStack_3c;
    if (piVar4 == param_1) {
      bVar7 = true;
    }
  }
  if (fStack_40 != 3.4028235e+38) {
    fVar1 = ((fStack_40 - 0.0) / 1024.0) * 1.0 + 0.0;
    piStack_3c = (int *)fVar1;
    if (fVar1 < 0.0) {
      piStack_3c = (int *)0x0;
    }
    if ((float)piStack_3c <= 1.0) {
      if (fVar1 < 0.0) {
        fVar1 = 0.0;
      }
    }
    else {
      fVar1 = 1.0;
    }
    if (fVar1 < (float)param_1[6]) {
      param_1[6] = (int)fVar1;
    }
    if (fVar1 < (float)piVar8[6]) {
      piVar8[6] = (int)fVar1;
    }
  }
  iVar10 = FUN_00707530(4);
  *(int *)(iVar10 + 0x7c) = param_1[6];
  if ((param_2 != '\0') || (((bVar5 && (cVar9 == '\0')) && (cVar9 = FUN_005e05b0(), cVar9 != '\0')))
     ) {
    DAT_00b45f4d = 1;
  }
  else {
    DAT_00b45f4d = 0;
  }
  *(undefined1 *)(iVar10 + 0x84) = DAT_00b45f4d;
  *(bool *)(iVar10 + 0x85) = bVar5;
  if (DAT_00b42d78 == (code *)0x0) {
    fVar14 = (float10)0;
  }
  else {
    fVar14 = (float10)(*DAT_00b42d78)(1,1);
  }
  if (*(char *)(iVar10 + 0x85) == '\0') {
LAB_0049bdd6:
    fVar1 = *(float *)(iVar10 + 0x80) - (float)fVar14 / 5.0;
    if (0.0 <= fVar1) {
LAB_0049bdf7:
      fVar2 = fVar1;
    }
    else {
      fVar2 = 0.0;
    }
  }
  else {
    if ((*(char *)(iVar10 + 0x84) == '\0') || (1.0 < *(float *)(iVar10 + 0x80))) {
      if (*(float *)(iVar10 + 0x80) <= 0.0) goto LAB_0049bdff;
      goto LAB_0049bdd6;
    }
    fVar1 = *(float *)(iVar10 + 0x80) + (float)fVar14;
    fVar2 = 1.0;
    if (fVar1 <= 1.0) goto LAB_0049bdf7;
  }
  *(float *)(iVar10 + 0x80) = fVar2;
LAB_0049bdff:
  if (1 < DAT_00b42f48) {
    iVar10 = FUN_007b4290(0x14);
    if (iVar10 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(iVar10 + 4);
    }
    DAT_00b45f4c = 1;
    FUN_0055e2a0(param_1 + 3);
    if (DAT_00b3522b == '\0') {
      if (DAT_00b35220 == 0) {
        _DAT_00b45f40 = 0x41200000;
      }
      else {
        _DAT_00b45f40 = *(undefined4 *)(DAT_00b35220 + 0x98);
      }
    }
    FUN_00977c50(3);
    FUN_007b4900(uVar11,DAT_00b43104,param_1[2],param_1[2]);
    FUN_00977c50(2);
    FUN_0055e2a0(&DAT_00b45fa8);
    puVar3 = DAT_00b45fb4;
    if (DAT_00b45fb4 != (undefined4 *)0x0) {
      LVar13 = InterlockedDecrement(DAT_00b45fb4 + 1);
      if ((LVar13 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      DAT_00b45fb4 = (undefined4 *)0x0;
    }
    DAT_00b45f4c = 0;
    param_1[7] = (int)DAT_00b45fb8;
    param_1[8] = (int)DAT_00b45fbc;
  }
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0049bef0(int param_1)

{
  int *piVar1;
  float fVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  LONG LVar10;
  int *piVar11;
  int **ppiVar12;
  byte bVar13;
  int *in_ECX;
  float unaff_EBX;
  int *piVar14;
  undefined4 *puVar15;
  float *pfVar16;
  undefined4 *puVar17;
  uint uVar18;
  float *pfVar19;
  undefined4 *puVar20;
  int *unaff_FS_OFFSET;
  float10 fVar21;
  uint local_2dc;
  byte bStack_2d6;
  byte bStack_2d5;
  int *local_2d0;
  int *piStack_2cc;
  byte bStack_2c6;
  byte bStack_2c5;
  float local_2c4;
  uint uStack_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  float local_2b4;
  int local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  float local_288;
  float local_284;
  float local_280;
  undefined4 local_27c;
  int local_278;
  float local_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  int iStack_268;
  float fStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  float local_258;
  float local_254;
  float local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  float afStack_224 [4];
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1dc [8];
  undefined1 auStack_1d4 [16];
  undefined1 auStack_1c4 [12];
  undefined1 local_1b8 [12];
  undefined1 auStack_1ac [28];
  undefined1 auStack_190 [44];
  undefined4 local_164 [8];
  undefined1 auStack_144 [16];
  int iStack_134;
  undefined4 auStack_a4 [10];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [84];
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009b19bf;
  local_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffd10;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_270 = 0;
  if (((DAT_00b07050 != '\0') && (DAT_00b42f3e != '\0')) && (param_1 != 0)) {
    local_2d0 = in_ECX;
    if (*in_ECX == 0) {
      local_2b0 = FUN_00401f00();
      local_14 = 0;
      if (local_2b0 != 0) {
        FUN_0070d590();
      }
      local_14 = 0xffffffff;
      FUN_0075fa90();
      if (in_ECX[1] == 0) {
        FUN_007c2420(DAT_00b43104,0x100,0,0,0);
        FUN_0075fa90();
      }
    }
    local_2c4 = (float)in_ECX[0x11];
    iVar5 = FUN_0065e5e0();
    if (iVar5 != 0) {
      fVar21 = (float10)FUN_004cace0(uVar4);
      local_2c4 = (float)fVar21;
      in_ECX[0x11] = (int)local_2c4;
    }
    local_2bc = 0;
    local_2b8 = 0;
    local_2b4 = local_2c4;
    local_294 = 0;
    local_290 = 0;
    local_28c = 0x3f800000;
    FUN_00716e00(&local_294,&local_2bc);
    local_24c = *(undefined4 *)(param_1 + 100);
    local_27c = *(undefined4 *)(param_1 + 0x88);
    local_248 = *(undefined4 *)(param_1 + 0x70);
    local_278 = *(int *)(param_1 + 0x8c);
    local_274 = *(float *)(param_1 + 0x90);
    local_244 = *(undefined4 *)(param_1 + 0x7c);
    local_294 = 0;
    local_290 = 0;
    local_28c = 0xbf800000;
    local_2bc = 0;
    local_2b8 = 0x3f800000;
    local_2a0 = 1.0;
    local_2b4 = 0.0;
    local_29c = 0.0;
    local_298 = 0.0;
    FUN_0070fcc0(&local_2a0,&local_2bc,&local_294);
    local_274 = local_274 - local_2c4;
    FUN_00710250(&local_258,&local_24c,local_1dc);
    local_288 = *(float *)(param_1 + 0x6c);
    local_284 = *(float *)(param_1 + 0x78);
    local_280 = -*(float *)(param_1 + 0x84);
    local_2a0 = -(local_280 * local_254 - local_284 * local_250);
    local_29c = -(local_288 * local_250 - local_258 * local_280);
    local_298 = -(local_258 * local_284 - local_288 * local_254);
    FUN_0070fcc0(&local_258,&local_2a0,&local_288);
    FUN_00710250(&local_2ac,&local_27c,local_1dc);
    local_2a4 = local_2a4 + local_2c4;
    iVar5 = *in_ECX;
    *(undefined4 *)(iVar5 + 0x54) = local_2ac;
    *(undefined4 *)(iVar5 + 0x58) = local_2a8;
    *(float *)(iVar5 + 0x5c) = local_2a4;
    puVar15 = local_164;
    puVar17 = (undefined4 *)(*in_ECX + 0x30);
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar17 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar17 = puVar17 + 1;
    }
    *(float *)(*local_2d0 + 0x60) = ABS(*(float *)(param_1 + 0x94));
    uVar6 = FUN_007d6fe0();
    FUN_007d7280(7,uVar6);
    if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
       ((char)DAT_00b3f928[0x83] == '\x01')) {
      (**(code **)(*DAT_00b3f928 + 0x144))();
    }
    FUN_0070c190();
    FUN_00707370(0,1);
    bStack_2c5 = *(byte *)(DAT_00b35230 + 0x18);
    *(ushort *)(DAT_00b35230 + 0x18) = *(ushort *)(DAT_00b35230 + 0x18) | 1;
    bStack_2c5 = bStack_2c5 & 1;
    bStack_2d5 = 0;
    if (DAT_00b35234 != 0) {
      bStack_2d5 = *(byte *)(DAT_00b35234 + 0x18) & 1;
      *(ushort *)(DAT_00b35234 + 0x18) = *(ushort *)(DAT_00b35234 + 0x18) | 1;
    }
    uVar3 = FUN_007b2130();
    uStack_26c = CONCAT31(uStack_26c._1_3_,uVar3);
    iVar5 = FUN_00660110();
    bStack_2c6 = *(byte *)(iVar5 + 0x18) & 1;
    iVar5 = FUN_00660110();
    *(ushort *)(iVar5 + 0x18) = *(ushort *)(iVar5 + 0x18) | 1;
    iVar5 = *(int *)(*(int *)(DAT_00b333a0 + 0x5c) + 4);
    local_2bc = *(undefined4 *)(iVar5 + 0x54);
    local_2b8 = *(undefined4 *)(iVar5 + 0x58);
    local_2b4 = *(float *)(iVar5 + 0x5c);
    *(undefined4 *)(iVar5 + 0x54) = local_2ac;
    *(undefined4 *)(iVar5 + 0x58) = local_2a8;
    *(float *)(iVar5 + 0x5c) = local_2a4;
    FUN_00707370(0,1);
    bStack_2d6 = 0;
    local_2b0 = DAT_00b36094;
    if (DAT_00b36094 != 0) {
      bStack_2d6 = *(byte *)(DAT_00b36094 + 0x18) & 1;
      *(ushort *)(DAT_00b36094 + 0x18) = *(ushort *)(DAT_00b36094 + 0x18) | 1;
    }
    uVar4 = DAT_00b06a2c;
    uStack_2c0 = DAT_00b06a2c / DAT_00b070e0;
    fVar2 = (float)(int)uStack_2c0;
    if ((int)uStack_2c0 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    FUN_00985a00((double)fVar2);
    iVar7 = FUN_009828c0();
    for (uVar18 = 0; uVar18 < uVar4; uVar18 = uVar18 + 1) {
      for (local_2dc = 0; local_2dc < uVar4; local_2dc = local_2dc + 1) {
        piVar8 = (int *)FUN_00482150(uVar18,local_2dc);
        if (((((int)uVar18 < iVar7) || ((int)local_2dc < iVar7)) ||
            ((DAT_00b06a2c - iVar7 <= uVar18 || (DAT_00b06a2c - iVar7 <= local_2dc)))) &&
           (((piVar8 != (int *)0x0 && (*piVar8 != 0)) && (iVar9 = FUN_004ca790(), iVar9 != 0)))) {
          iVar9 = FUN_004ca790();
          *(ushort *)(iVar9 + 0x18) = *(ushort *)(iVar9 + 0x18) | 1;
        }
        uVar4 = DAT_00b06a2c;
      }
    }
    FUN_004990a0();
    iStack_134 = *local_2d0;
    local_14 = 1;
    piVar8 = (int *)FUN_007b7650();
    if (piVar8 != (int *)0x0) {
      InterlockedIncrement(piVar8 + 1);
    }
    puVar15 = (undefined4 *)DAT_00b3f928[2];
    if (puVar15 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar15 + 1);
    }
    piVar11 = (int *)DAT_00b3f928[2];
    piStack_2cc = DAT_00b3f928 + 2;
    local_14 = CONCAT31(local_14._1_3_,3);
    if (piVar11 != piVar8) {
      if (((piVar11 != (int *)0x0) && (LVar10 = InterlockedDecrement(piVar11 + 1), LVar10 == 0)) &&
         (piVar11 != (int *)0x0)) {
        (**(code **)*piVar11)();
      }
      *piStack_2cc = (int)piVar8;
      if (piVar8 != (int *)0x0) {
        InterlockedIncrement(piVar8 + 1);
      }
    }
    DAT_00b42ce8 = 1;
    piVar11 = (int *)*local_2d0;
    (**(code **)(*piVar8 + 0x4c))();
    *(undefined1 *)(piVar8 + 0x878) = 1;
    FUN_00701970(*local_2d0);
    FUN_0070e040(*local_2d0 + 0xec);
    FUN_007073d0(auStack_144);
    local_2c4 = *(float *)(DAT_00b43104 + 0x280);
    FUN_00701970(*local_2d0);
    FUN_0070e040(*local_2d0 + 0xec);
    pfVar16 = (float *)(DAT_00b43104 + 0x980);
    pfVar19 = afStack_224;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar19 = *pfVar16;
      pfVar16 = pfVar16 + 1;
      pfVar19 = pfVar19 + 1;
    }
    fStack_1f4 = -(DAT_00b3f930 * fStack_214 + DAT_00b3f92c * afStack_224[0] +
                  DAT_00b3f934 * fStack_204);
    fStack_1f0 = -(fStack_200 * DAT_00b3f934 +
                  fStack_210 * DAT_00b3f930 + afStack_224[1] * DAT_00b3f92c);
    local_2d0 = (int *)(DAT_00b3f934 * fStack_1fc +
                       fStack_20c * DAT_00b3f930 + afStack_224[2] * DAT_00b3f92c);
    fStack_1ec = -(float)local_2d0;
    puVar17 = (undefined4 *)(DAT_00b43104 + 0x9c0);
    puVar20 = auStack_a4;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar20 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar20 = puVar20 + 1;
    }
    D3DXMatrixMultiply(auStack_1ac,afStack_224);
    D3DXMatrixInverse(auStack_70,0,local_1b8);
    D3DXMatrixTranspose(auStack_1c4,auStack_7c);
    local_28c = 0;
    local_288 = 0.0;
    local_284 = 1.0;
    local_280 = -unaff_EBX;
    D3DXPlaneNormalize(&local_28c,&local_28c);
    D3DXPlaneTransform(&uStack_26c,&local_294,auStack_1d4);
    iStack_268 = local_278;
    fStack_264 = local_274;
    uStack_260 = local_270;
    uStack_25c = uStack_26c;
    (**(code **)(*piVar11 + 0xdc))(piVar11,0);
    (**(code **)(**(int **)(DAT_00b43104 + 0x8ac) + 100))(0x98,1,0);
    *(ushort *)(iVar5 + 0x18) = *(ushort *)(iVar5 + 0x18) | 1;
    FUN_004ea010(0,0x3f19999a);
    FUN_00483cd0(0);
    FUN_007073d0(auStack_190);
    (**(code **)(iStack_268 + 0x50))();
    (**(code **)(**(int **)(DAT_00b43104 + 0x8ac) + 100))(0x98,0,0);
    FUN_004ea010(uStack_2c0);
    FUN_00483cd0();
    *(ushort *)(iVar5 + 0x18) = *(ushort *)(iVar5 + 0x18) & 0xfffe;
    puVar17 = (undefined4 *)DAT_00b3f928[2];
    piVar11 = DAT_00b3f928 + 2;
    if (puVar17 != puVar15) {
      if (((puVar17 != (undefined4 *)0x0) &&
          (LVar10 = InterlockedDecrement(puVar17 + 1), LVar10 == 0)) &&
         (puVar17 != (undefined4 *)0x0)) {
        (**(code **)*puVar17)();
      }
      *piVar11 = (int)puVar15;
      if (puVar15 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar15 + 1);
      }
    }
    DAT_00b42ce8 = 0;
    iStack_134 = 0;
    FUN_007d72d0();
    if (bStack_2c5 == 0) {
      *(ushort *)(DAT_00b35230 + 0x18) = *(ushort *)(DAT_00b35230 + 0x18) & 0xfffe;
    }
    else {
      *(ushort *)(DAT_00b35230 + 0x18) = *(ushort *)(DAT_00b35230 + 0x18) | 1;
    }
    if (DAT_00b35234 != 0) {
      if (bStack_2d5 == 0) {
        *(ushort *)(DAT_00b35234 + 0x18) = *(ushort *)(DAT_00b35234 + 0x18) & 0xfffe;
      }
      else {
        *(ushort *)(DAT_00b35234 + 0x18) = *(ushort *)(DAT_00b35234 + 0x18) | 1;
      }
    }
    FUN_007b2130();
    *(undefined4 *)(iVar5 + 0x54) = local_2bc;
    *(undefined4 *)(iVar5 + 0x58) = local_2b8;
    *(float *)(iVar5 + 0x5c) = local_2b4;
    FUN_00707370(0,1);
    iVar5 = FUN_00660110();
    if (bStack_2c6 == 0) {
      *(ushort *)(iVar5 + 0x18) = *(ushort *)(iVar5 + 0x18) & 0xfffe;
    }
    else {
      *(ushort *)(iVar5 + 0x18) = *(ushort *)(iVar5 + 0x18) | 1;
    }
    if (local_2b0 != 0) {
      if (bStack_2d6 == 0) {
        *(ushort *)(local_2b0 + 0x18) = *(ushort *)(local_2b0 + 0x18) & 0xfffe;
      }
      else {
        *(ushort *)(local_2b0 + 0x18) = *(ushort *)(local_2b0 + 0x18) | 1;
      }
    }
    for (uVar4 = 0; uVar4 < DAT_00b06a2c; uVar4 = uVar4 + 1) {
      for (uVar18 = 0; uVar18 < DAT_00b06a2c; uVar18 = uVar18 + 1) {
        piVar11 = (int *)FUN_00482150(uVar4,uVar18);
        if (((((((int)uVar4 < iVar7) || ((int)uVar18 < iVar7)) || (DAT_00b06a2c - iVar7 <= uVar4))
             || (DAT_00b06a2c - iVar7 <= uVar18)) && ((piVar11 != (int *)0x0 && (*piVar11 != 0))))
           && (iVar5 = FUN_004ca790(), iVar5 != 0)) {
          iVar5 = FUN_004ca790();
          *(ushort *)(iVar5 + 0x18) = *(ushort *)(iVar5 + 0x18) & 0xfffe;
        }
      }
    }
    if (DAT_00b45dcc != 0) {
      if (local_2d0[1] == 0) {
        local_2d0 = (int *)0x0;
        ppiVar12 = &local_2d0;
        bVar13 = 1;
      }
      else {
        ppiVar12 = (int **)(local_2d0[1] + 0x20);
        bVar13 = (byte)local_270;
      }
      piVar1 = local_2d0;
      piVar11 = *ppiVar12;
      if ((((bVar13 & 1) != 0) && (local_2d0 != (int *)0x0)) &&
         (LVar10 = InterlockedDecrement(local_2d0 + 1), LVar10 == 0)) {
        (**(code **)*piVar1)();
      }
      piVar1 = *(int **)(DAT_00b45dcc + 0x108);
      piVar14 = (int *)(DAT_00b45dcc + 0x108);
      if (piVar1 != piVar11) {
        if (((piVar1 != (int *)0x0) && (LVar10 = InterlockedDecrement(piVar1 + 1), LVar10 == 0)) &&
           (piVar1 != (int *)0x0)) {
          (**(code **)*piVar1)();
        }
        *piVar14 = (int)piVar11;
        if (piVar11 != (int *)0x0) {
          InterlockedIncrement(piVar11 + 1);
        }
      }
    }
    local_14._0_1_ = 2;
    if ((puVar15 != (undefined4 *)0x0) && (LVar10 = InterlockedDecrement(puVar15 + 1), LVar10 == 0))
    {
      (**(code **)*puVar15)();
    }
    local_14 = CONCAT31(local_14._1_3_,1);
    LVar10 = InterlockedDecrement(piVar8 + 1);
    if (LVar10 == 0) {
      (**(code **)*piVar8)();
    }
    local_14 = 0xffffffff;
    FUN_0070dfa0();
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_0049ca50(void)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  LONG LVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *local_4;
  
  if (*(int *)(in_ECX + 8) != 0) {
    uVar5 = *(int *)(in_ECX + 0x18) * *(int *)(in_ECX + 0x18);
    uVar6 = 0;
    if (uVar5 != 0) {
      do {
        iVar1 = *(int *)(uVar6 * 4 + *(int *)(in_ECX + 8));
        if (iVar1 != 0) {
          if ((((*(int **)(iVar1 + 0x1c) != (int *)0x0) &&
               ((**(code **)(**(int **)(iVar1 + 0x1c) + 0x88))(&local_4,iVar1), puVar2 = local_4,
               local_4 != (undefined4 *)0x0)) &&
              (LVar4 = InterlockedDecrement(local_4 + 1), LVar4 == 0)) &&
             (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          piVar7 = (int *)(*(int *)(in_ECX + 8) + uVar6 * 4);
          puVar2 = (undefined4 *)*piVar7;
          if (puVar2 != (undefined4 *)0x0) {
            LVar4 = InterlockedDecrement(puVar2 + 1);
            if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            *piVar7 = 0;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
    pvVar3 = *(void **)(in_ECX + 8);
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar3,4,*(int *)((int)pvVar3 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar3 + -4);
    }
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  return;
}



undefined4 FUN_0049cb40(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puStack_28 = (undefined4 *)0x3;
  FUN_00977c50();
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  puStack_28 = (undefined4 *)0x7;
  local_14 = 0;
  uVar1 = FUN_007c23c0(DAT_00b43104);
  puStack_28 = &local_20;
  (**(code **)(*DAT_00b43104 + 0x68))();
  local_14 = 0x3f000000;
  uStack_10 = 0x3f000000;
  uStack_c = 0x3f000000;
  uStack_8 = 0x3f800000;
  (**(code **)(*DAT_00b43104 + 0x60))(&local_14);
  uVar2 = FUN_007d6fe0();
  FUN_007d7280(7,uVar2);
  FUN_007d72d0();
  (**(code **)(*DAT_00b43104 + 0x60))(&puStack_28);
  FUN_00977c50(2);
  return uVar1;
}



void FUN_0049cbf0(int param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  
  uVar5 = (uint)*(ushort *)(param_1 + 0x14);
  do {
    do {
      if (uVar5 == 0) goto switchD_0049cc69_caseD_1a;
      uVar5 = uVar5 - 1;
      piVar1 = *(int **)(*(int *)(param_1 + 0x10) + (uVar5 & 0xffff) * 4);
    } while (piVar1 == (int *)0x0);
    for (puVar3 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      if (puVar3 == &DAT_00b35acc) {
        bVar2 = 1;
        goto LAB_0049cc33;
      }
    }
    bVar2 = 0;
LAB_0049cc33:
  } while ((-(uint)bVar2 & (uint)piVar1) == 0);
  piVar1 = *(int **)((-(uint)bVar2 & (uint)piVar1) + 0xc);
  if (piVar1 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar1 + 0x170))();
    switch(*(undefined1 *)(iVar4 + 4)) {
    case 0x12:
    case 0x17:
    case 0x18:
    case 0x1c:
      if (DAT_00b07078 == '\0') {
        return;
      }
      break;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x19:
    case 0x1b:
    case 0x21:
    case 0x22:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x2a:
      if (DAT_00b07080 == '\0') {
        return;
      }
      break;
    case 0x1e:
    case 0x1f:
      if (DAT_00b07070 == '\0') {
        return;
      }
      break;
    case 0x23:
    case 0x24:
      if (DAT_00b07068 == '\0') {
        return;
      }
    }
  }
switchD_0049cc69_caseD_1a:
  if ((DAT_00b3521c != '\0') || (iVar4 = FUN_0047da70(in_ECX + 0x90), iVar4 != 2)) {
    FUN_0070dfb0(param_1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049cd10(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 extraout_ST0;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b1a40;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xc] = (int)&PTR_FUN_00a3f3bc;
  in_ECX[0x12] = 0;
  puVar5 = (undefined4 *)*in_ECX;
  in_ECX[6] = 0;
  local_4 = 7;
  if (puVar5 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar5 + 1);
    if ((LVar3 == 0) && (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *in_ECX = 0;
  }
  in_ECX[0x10] = 0;
  DAT_00b45db9 = DAT_00b070a0;
  if (DAT_00b070a0 != '\0') {
    _DAT_00b45dbc = DAT_00b070e0 << 5;
  }
  puVar5 = (undefined4 *)in_ECX[0x12];
  if (puVar5 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar5 + 1);
    if ((LVar3 == 0) && (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    in_ECX[0x12] = 0;
  }
  DAT_00b3521d = 1;
  if (DAT_00b35230 == (undefined4 *)0x0) {
    iVar4 = FUN_00401f00(0xdc,uVar2);
    local_4._0_1_ = 8;
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_0070b780(0);
    }
    puVar1 = DAT_00b35230;
    local_4 = CONCAT31(local_4._1_3_,7);
    if (DAT_00b35230 != puVar5) {
      if (DAT_00b35230 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(DAT_00b35230 + 1);
        if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
      }
      DAT_00b35230 = puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar5 + 1);
      }
    }
    FUN_006ff420("WaterRoot");
    (**(code **)(**(int **)(DAT_00b333a0 + 0xc) + 0x84))(DAT_00b35230,0);
  }
  _DAT_00b45e14 = 0;
  _DAT_00b45e18 = 0x3f000000;
  _DAT_00b45e1c = 0x3f000000;
  _DAT_00b45e20 = 0x3f800000;
  _DAT_00b45e24 = 0;
  _DAT_00b45e28 = 0;
  _DAT_00b45e2c = 0x3dcccccd;
  _DAT_00b45e30 = 0x3f800000;
  _DAT_00b45e34 = 0x3f800000;
  _DAT_00b45e38 = 0x3f800000;
  _DAT_00b45e3c = 0x3f800000;
  _DAT_00b45e40 = 0x3f800000;
  iVar4 = FUN_009828c0();
  _DAT_00b45ea4 = (float)iVar4;
  DAT_00b45fd0 = DAT_00b07058;
  DAT_00b35220 = 0;
  in_ECX[8] = 0;
  in_ECX[0xb] = (int)(float)extraout_ST0;
  in_ECX[9] = 0;
  in_ECX[0x11] = (int)(float)extraout_ST0;
  *(undefined1 *)(in_ECX + 10) = 0;
  *(undefined1 *)((int)in_ECX + 0x29) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0049cfb0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b1ab5;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 7;
  FUN_0049a8b0(1);
  puVar1 = DAT_00b35234;
  if (DAT_00b35234 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(DAT_00b35234 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    DAT_00b35234 = (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)in_ECX[0x12];
  local_4._0_1_ = 6;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4._0_1_ = 5;
  FUN_0049a170();
  puVar1 = (undefined4 *)in_ECX[5];
  local_4._0_1_ = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[4];
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[3];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[2];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)*in_ECX;
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0049d140(void)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b1b07;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  local_4 = 4;
  *(undefined1 *)(in_ECX + 0x34) = 0;
  FUN_0049ac60(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0049d1a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  undefined4 *local_4;
  
  if (*(char *)(in_ECX + 0xd) != '\0') {
    *(undefined1 *)(in_ECX + 0xd) = 0;
    local_4 = in_ECX;
    FUN_00401f20(in_ECX[3]);
    FUN_0049ca50();
    iVar1 = in_ECX[1];
    if (iVar1 != 0) {
      if ((((*(int **)(iVar1 + 0x1c) != (int *)0x0) &&
           ((**(code **)(**(int **)(iVar1 + 0x1c) + 0x88))(&local_4,iVar1),
           local_4 != (undefined4 *)0x0)) && (LVar3 = InterlockedDecrement(local_4 + 1), LVar3 == 0)
          ) && (local_4 != (undefined4 *)0x0)) {
        (**(code **)*local_4)(1);
      }
      puVar2 = (undefined4 *)in_ECX[1];
      if (puVar2 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(puVar2 + 1);
        if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        in_ECX[1] = 0;
      }
    }
    puVar2 = (undefined4 *)in_ECX[4];
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      in_ECX[4] = 0;
    }
    puVar2 = (undefined4 *)in_ECX[7];
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      in_ECX[7] = 0;
    }
    puVar2 = (undefined4 *)in_ECX[9];
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      in_ECX[9] = 0;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0049d2a0(undefined4 *param_1,float param_2,undefined4 param_3,int param_4,char param_5,
                char param_6)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  undefined2 *puVar6;
  float *pfVar7;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b1b54;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  pfVar3 = (float *)FUN_00401f00(0x30,uVar2);
  if (pfVar3 != (float *)0x0) {
    uVar1 = _DAT_00b35260 & 1;
    *pfVar3 = (float)param_1 * 0.5;
    pfVar3[1] = param_2 * 0.5;
    pfVar3[2] = 0.0;
    pfVar3[3] = -(float)param_1 * 0.5;
    pfVar3[4] = param_2 * 0.5;
    pfVar3[5] = 0.0;
    pfVar3[6] = -(float)param_1 * 0.5;
    pfVar3[7] = -param_2 * 0.5;
    pfVar3[8] = 0.0;
    pfVar3[9] = (float)param_1 * 0.5;
    pfVar3[10] = -param_2 * 0.5;
    pfVar3[0xb] = 0.0;
    if (uVar1 == 0) {
      _DAT_00b35260 = _DAT_00b35260 | 1;
      DAT_00b35254 = 0;
      DAT_00b35258 = 0;
      DAT_00b3525c = 0x3f800000;
    }
    pfVar4 = (float *)FUN_00401f00(0x20,uVar2);
    if (pfVar4 != (float *)0x0) {
      puVar6 = (undefined2 *)FUN_00401f00(0xc,uVar2);
      if (puVar6 == (undefined2 *)0x0) {
        FUN_00401f20(pfVar3);
        FUN_00401f20(pfVar4);
        iVar5 = 0;
      }
      else {
        *puVar6 = 0;
        puVar6[1] = 1;
        puVar6[2] = 2;
        puVar6[3] = 0;
        puVar6[4] = 2;
        puVar6[5] = 3;
        param_1 = (undefined4 *)0x0;
        if ((param_5 != '\0') &&
           (param_1 = (undefined4 *)FUN_00401f00(0x30,uVar2), param_1 != (undefined4 *)0x0)) {
          *param_1 = DAT_00b35254;
          param_1[1] = DAT_00b35258;
          param_1[2] = DAT_00b3525c;
          param_1[3] = DAT_00b35254;
          param_1[4] = DAT_00b35258;
          param_1[5] = DAT_00b3525c;
          param_1[6] = DAT_00b35254;
          param_1[7] = DAT_00b35258;
          param_1[8] = DAT_00b3525c;
          param_1[9] = DAT_00b35254;
          param_1[10] = DAT_00b35258;
          param_1[0xb] = DAT_00b3525c;
        }
        _param_5 = (undefined4 *)0x0;
        if (param_6 != '\0') {
          _param_5 = (undefined4 *)FUN_00401f00(0x40,uVar2);
          local_4 = 0;
          if (_param_5 == (undefined4 *)0x0) {
            _param_5 = (undefined4 *)0x0;
          }
          else {
            _vector_constructor_iterator_(_param_5,0x10,4,FUN_0047ea50);
          }
          local_4 = 0xffffffff;
          if (_param_5 != (undefined4 *)0x0) {
            if ((_DAT_00b35260 & 2) == 0) {
              _DAT_00b35260 = _DAT_00b35260 | 2;
              local_4 = 1;
              FUN_00404850("fAlpha:Water",0x3f000000);
              _atexit(FUN_00a1a630);
            }
            local_4 = 0xffffffff;
            pfVar7 = (float *)FUN_00403c00();
            if (*pfVar7 <= 1.0) {
              pfVar7 = (float *)FUN_00403c00();
              if (*pfVar7 < 0.0) {
                _DAT_00b3524c = 0;
              }
            }
            else {
              _DAT_00b3524c = 0x3f800000;
            }
            fVar8 = (float10)FUN_00404e30();
            *_param_5 = 0x3f800000;
            _param_5[1] = 0x3f800000;
            _param_5[2] = 0x3f800000;
            _param_5[3] = (float)fVar8;
            fVar8 = (float10)FUN_00404e30();
            _param_5[4] = 0x3f800000;
            _param_5[5] = 0x3f800000;
            _param_5[6] = 0x3f800000;
            _param_5[7] = (float)fVar8;
            fVar8 = (float10)FUN_00404e30();
            _param_5[8] = 0x3f800000;
            _param_5[9] = 0x3f800000;
            _param_5[10] = 0x3f800000;
            _param_5[0xb] = (float)fVar8;
            fVar8 = (float10)FUN_00404e30();
            _param_5[0xc] = 0x3f800000;
            _param_5[0xd] = 0x3f800000;
            _param_5[0xe] = 0x3f800000;
            _param_5[0xf] = (float)fVar8;
          }
        }
        _param_6 = 1.0;
        if ((param_4 != 1) && (_param_6 = (float)param_4, param_4 < 0)) {
          _param_6 = _param_6 + 4.2949673e+09;
        }
        *pfVar4 = _param_6;
        pfVar4[1] = _param_6;
        pfVar4[2] = 0.0;
        pfVar4[3] = _param_6;
        pfVar4[4] = 0.0;
        pfVar4[5] = 0.0;
        pfVar4[6] = _param_6;
        pfVar4[7] = 0.0;
        iVar5 = FUN_00401f00(0x58);
        local_4 = 2;
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_0071fb40(4,pfVar3,param_1,_param_5,pfVar4,1,0,2,puVar6);
          if (iVar5 != 0) goto LAB_0049d78f;
        }
        FUN_00401f20(pfVar3);
        FUN_00401f20(param_1);
        FUN_00401f20(pfVar4);
        FUN_00401f20(puVar6);
        FUN_00401f20(_param_5);
      }
      goto LAB_0049d78f;
    }
    FUN_00401f20(pfVar3);
  }
  iVar5 = 0;
LAB_0049d78f:
  *unaff_FS_OFFSET = local_c;
  return iVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d7b0(void)

{
  float fVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  LONG LVar9;
  int in_ECX;
  undefined4 uVar10;
  float10 fVar11;
  
  if (DAT_00b07050 == '\0') {
    return;
  }
  if (DAT_00b42f3e == '\0') {
    return;
  }
  iVar4 = FUN_00542ea0();
  iVar4 = *(int *)(iVar4 + 0x10);
  iVar5 = FUN_00542ea0();
  fVar1 = *(float *)(iVar5 + 0xd8);
  bVar3 = false;
  iVar5 = FUN_00542ea0();
  if ((*(int *)(iVar5 + 0x38) != 0) &&
     (iVar5 = FUN_00542ea0(), 0.0 < *(float *)(*(int *)(iVar5 + 0x38) + 0x10))) {
    bVar3 = true;
  }
  fVar11 = (float10)0;
  if (iVar4 == 0) goto LAB_0049d908;
  if ((((*(byte *)(iVar4 + 0x53) & 4) == 0) || (*(int *)(DAT_00b333a0 + 0x34) != 0)) || (!bVar3)) {
    if ((fVar1 <= 0.999 - (float)*(byte *)(iVar4 + 0x4f) * 0.003921569 * 0.998) &&
       (0x31 < DAT_00b45f48)) goto LAB_0049d908;
    if (fVar11 < (float10)*(float *)(in_ECX + 0x18)) {
      fVar1 = *(float *)(in_ECX + 0x18);
      fVar11 = (float10)FUN_0043f490(1,1);
      *(float *)(in_ECX + 0x18) = (float)((float10)fVar1 - fVar11 * (float10)100.0);
      goto LAB_0049d908;
    }
  }
  else {
    fVar11 = (float10)FUN_00499100(6,0x3f7fbe77,0x3a83126f);
    if ((float10)fVar1 <= fVar11) goto LAB_0049d908;
    if (500.0 <= *(float *)(in_ECX + 0x18)) {
      *(undefined4 *)(in_ECX + 0x18) = 0x43fa0000;
      goto LAB_0049d908;
    }
    fVar11 = (float10)FUN_0043f490(1,1);
    fVar11 = fVar11 * (float10)100.0 + (float10)*(float *)(in_ECX + 0x18);
  }
  *(float *)(in_ECX + 0x18) = (float)fVar11;
LAB_0049d908:
  _DAT_00b45f44 = ((*(float *)(in_ECX + 0x18) - 0.0) / 500.0) * 1.0 + 0.0;
  if ((_DAT_00b45f44 < 0.0) || (_DAT_00b45f44 < 1.0)) {
    if (_DAT_00b45f44 < 0.0) {
      _DAT_00b45f44 = 0.0;
    }
  }
  else {
    _DAT_00b45f44 = 1.0;
  }
  piVar8 = (int *)(in_ECX + 8);
  uVar10 = 0;
  if (*piVar8 == 0) {
    if (DAT_00b45fe0 == 0) {
      FUN_007b4290(0x13);
    }
    if (DAT_00b42d7c != 0) {
      if (DAT_00b07058 == '\0') {
        uVar6 = FUN_007c2420(DAT_00b43104,0x80,6,0x72,0);
        FUN_0075fa90(uVar6);
        uVar6 = 0x80;
      }
      else {
        uVar6 = FUN_007c2420(DAT_00b43104,0x100,6,0x72,0);
        FUN_0075fa90(uVar6);
        uVar6 = 0x100;
      }
      uVar6 = FUN_007c2420(DAT_00b43104,uVar6,6,0,0);
      FUN_0075fa90(uVar6);
    }
  }
  if (1 < DAT_00b42f48) {
    if (_DAT_00b45f44 == 1.0) {
      if (*(int *)(in_ECX + 0xc) != 0) {
        FUN_007c1ee0(*(int *)(in_ECX + 0xc));
      }
      puVar2 = *(undefined4 **)(in_ECX + 0xc);
      if (puVar2 != (undefined4 *)0x0) {
        LVar9 = InterlockedDecrement(puVar2 + 1);
        if ((LVar9 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 *)(in_ECX + 0xc) = 0;
      }
    }
    else {
      DAT_00b45fd1 = _DAT_00b45f44 <= 0.0;
      if (_DAT_00b45f44 == 0.0) {
        piVar7 = (int *)FUN_00405a30();
        iVar4 = (**(code **)(*piVar7 + 0x4c))();
        if (iVar4 != DAT_00b45fc8) {
          FUN_007c1ee0(*(undefined4 *)(in_ECX + 0x10));
          uVar6 = FUN_007c2420(DAT_00b43104,DAT_00b45fc8,6,0,0);
          FUN_0075fa90(uVar6);
        }
      }
      iVar4 = FUN_007b4290(0x13);
      if (iVar4 != 0) {
        uVar10 = *(undefined4 *)(iVar4 + 4);
      }
      if (DAT_00b45fd1 == '\0') {
        if (*(int *)(in_ECX + 0xc) == 0) {
          uVar6 = FUN_007c23c0(DAT_00b43104,8);
          FUN_0075fa90(uVar6);
        }
        FUN_007b4900(uVar10,DAT_00b43104,*piVar8,*(undefined4 *)(in_ECX + 0xc));
      }
      else {
        FUN_007b4900(uVar10,DAT_00b43104,*piVar8,*(undefined4 *)(in_ECX + 0x10));
      }
    }
    iVar4 = FUN_007b4290(0x14);
    if (iVar4 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)(iVar4 + 4);
    }
    if (0.0 < _DAT_00b45f44) {
      piVar8 = (int *)FUN_00405a30();
      iVar4 = (**(code **)(*piVar8 + 0x4c))();
      fVar1 = (float)iVar4;
      if (iVar4 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      if (fVar1 != 256.0) {
        FUN_007c1ee0(*(undefined4 *)(in_ECX + 0x10));
        uVar6 = FUN_007c2420(DAT_00b43104,0x100,6,0,0);
        FUN_0075fa90(uVar6);
      }
      FUN_0055e2a0((undefined4 *)(in_ECX + 0x10));
      if (DAT_00b3522b == '\0') {
        if (DAT_00b35220 == 0) {
          _DAT_00b45f40 = 0x40000000;
        }
        else {
          _DAT_00b45f40 = *(undefined4 *)(DAT_00b35220 + 0x84);
        }
      }
      iVar4 = FUN_00542ea0();
      if (*(int *)(iVar4 + 0x38) != 0) {
        FUN_00542ea0();
      }
      DAT_00b45f48 = FUN_009828c0();
      if (*(int *)(in_ECX + 0x14) == 0) {
        uVar6 = FUN_0049cb40();
        FUN_0075fa90(uVar6);
      }
      FUN_007b4900(uVar10,DAT_00b43104,*(int *)(in_ECX + 0x14),*(undefined4 *)(in_ECX + 0xc));
      FUN_0055e2a0(&DAT_00b45fa8);
      puVar2 = DAT_00b45fb4;
      if (DAT_00b45fb4 != (undefined4 *)0x0) {
        LVar9 = InterlockedDecrement(DAT_00b45fb4 + 1);
        if ((LVar9 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        DAT_00b45fb4 = (undefined4 *)0x0;
      }
    }
  }
  if (DAT_00b45dcc != 0) {
    uVar10 = FUN_00405a30();
    FUN_004992c0(uVar10);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049dd00(int *param_1,float param_2)

{
  ushort *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  undefined4 uVar10;
  int iVar11;
  int in_ECX;
  uint uVar12;
  uint *puVar13;
  int *unaff_FS_OFFSET;
  undefined2 in_FPUControlWord;
  float10 extraout_ST0;
  undefined1 auStack_14c [3];
  char local_149;
  undefined4 *local_148;
  uint uStack_144;
  float local_140;
  uint *local_13c;
  float fStack_138;
  float fStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  float local_128;
  undefined4 *puStack_124;
  longlong lStack_120;
  int *local_118;
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b1bcc;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_14c;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xfffffea4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_118 = param_1;
  if ((_DAT_00b3526c & 1) == 0) {
    _DAT_00b3526c = _DAT_00b3526c | 1;
    local_4 = 0;
    FUN_00444060("uSurfaceTextureSize:Water",0x80);
    _atexit(FUN_00a1a660);
  }
  local_4 = 0xffffffff;
  local_149 = '\0';
  FUN_0049ca50(uVar7);
  uVar7 = *(int *)(in_ECX + 0x18) * *(int *)(in_ECX + 0x18);
  if (uVar7 != 0) {
    uVar12 = -(uint)((int)((ulonglong)uVar7 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar7 * 4);
    local_13c = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar12) | uVar12 + 4);
    local_4 = 1;
    if (local_13c == (uint *)0x0) {
      puVar13 = (uint *)0x0;
    }
    else {
      puVar13 = local_13c + 1;
      *local_13c = uVar7;
      _eh_vector_constructor_iterator_(puVar13,4,uVar7,FUN_007c88a0,FUN_007016a0);
    }
    local_4 = 0xffffffff;
    *(uint **)(in_ECX + 8) = puVar13;
  }
  if (*(int *)(in_ECX + 8) != 0) {
    local_140 = _DAT_00b07040;
    local_128 = _DAT_00b07040 - param_2;
    if ((DAT_00b07050 == '\0') || (DAT_00b42f3e == '\0')) {
      _sprintf(local_114,"%s00.DDS",*(undefined4 *)(in_ECX + 0xc));
      if (DAT_00b33a04 != (int *)0x0) {
        (**(code **)(*DAT_00b33a04 + 4))(local_114,local_114,0,0xffffffff);
      }
      if (*(int *)(in_ECX + 0x10) == 0) {
        puVar8 = (undefined4 *)FUN_00442890(&local_148,local_114,1,0);
        local_4 = 2;
        FUN_0075fa90(*puVar8);
        local_4 = 0xffffffff;
        if (local_148 != (undefined4 *)0x0) {
          LVar9 = InterlockedDecrement(local_148 + 1);
          if ((LVar9 == 0) && (local_148 != (undefined4 *)0x0)) {
            (**(code **)*local_148)(1);
          }
        }
      }
      if (*(int *)(in_ECX + 0x1c) == 0) {
        local_13c = (uint *)FUN_00401f00(0x5c);
        local_4 = 3;
        if (local_13c == (uint *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_006d20c0();
        }
        local_4 = 0xffffffff;
        FUN_0075fa90(uVar10);
        FUN_006d1bc0(*(undefined4 *)(in_ECX + 0x10),0);
        uVar7 = 1;
        uStack_144 = 1;
        while( true ) {
          if (DAT_00b07088 <= uStack_144) break;
          _sprintf(local_114,"%s%02d.DDS",*(undefined4 *)(in_ECX + 0xc),uStack_144);
          FUN_00442890(&puStack_124,local_114,1,0);
          local_4 = 4;
          if (puStack_124 != (undefined4 *)0x0) {
            FUN_006d1bc0(puStack_124,uVar7);
            uVar7 = uVar7 + 1;
          }
          puVar8 = puStack_124;
          local_4 = 0xffffffff;
          if (puStack_124 != (undefined4 *)0x0) {
            LVar9 = InterlockedDecrement(puStack_124 + 1);
            if ((LVar9 == 0) && (puVar8 != (undefined4 *)0x0)) {
              (**(code **)*puVar8)(1);
            }
          }
          uStack_144 = uStack_144 + 1;
        }
        iVar11 = *(int *)(in_ECX + 0x1c);
        local_149 = uVar7 < DAT_00b07088;
        DAT_00b07088 = uVar7;
        *(ushort *)(iVar11 + 8) = *(ushort *)(iVar11 + 8) & 0xfff7 | 1;
        puVar1 = (ushort *)(*(int *)(in_ECX + 0x1c) + 8);
        *puVar1 = *puVar1 & 0xfff9;
      }
    }
    iVar11 = FUN_009828c0();
    local_13c = (uint *)DAT_00b35264;
    fVar5 = (float)DAT_00b35264;
    if (DAT_00b35264 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    uStack_144 = CONCAT22(uStack_144._2_2_,in_FPUControlWord);
    lVar2 = (longlong)ROUND((float)iVar11 / (fVar5 * _DAT_00b07048));
    lStack_120._0_4_ = (int)lVar2;
    if ((int)lStack_120 == 0) {
      lStack_120._0_4_ = 1;
    }
    local_148 = (undefined4 *)(float)(extraout_ST0 + extraout_ST0);
    iVar11 = (int)lStack_120;
    lStack_120 = lVar2;
    local_13c = (uint *)FUN_0049d2a0(local_148,local_148,DAT_00b35264,iVar11,1,1);
    fStack_134 = local_128;
    uStack_130 = 0;
    uStack_144 = 0;
    local_148 = (undefined4 *)0x0;
    local_140 = local_140 + local_140;
    if (*(int *)(in_ECX + 0x18) != 0) {
      do {
        fStack_138 = local_128;
        uStack_12c = 0;
        if (*(int *)(in_ECX + 0x18) != 0) {
          do {
            iVar11 = FUN_00401f00(0xc0);
            lStack_120 = CONCAT44(lStack_120._4_4_,iVar11);
            local_4 = 5;
            if (iVar11 == 0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              puVar8 = (undefined4 *)FUN_00717570(local_13c);
            }
            local_4 = 0xffffffff;
            if (puVar8 != (undefined4 *)0x0) {
              iVar3 = *(int *)(in_ECX + 8);
              puVar4 = *(undefined4 **)(iVar3 + uStack_144 * 4);
              iVar11 = uStack_144 * 4;
              if (puVar4 != puVar8) {
                if (puVar4 != (undefined4 *)0x0) {
                  LVar9 = InterlockedDecrement(puVar4 + 1);
                  if ((LVar9 == 0) && (puVar4 != (undefined4 *)0x0)) {
                    (**(code **)*puVar4)(1);
                  }
                }
                *(undefined4 **)(iVar3 + iVar11) = puVar8;
                InterlockedIncrement(puVar8 + 1);
              }
              puVar8[0x15] = fStack_138;
              puVar8[0x16] = fStack_134;
              puVar8[0x17] = uStack_130;
              cVar6 = FUN_0043f4d0();
              if (cVar6 == '\0') {
                iVar11 = FUN_00401f00(0x30);
                lStack_120 = CONCAT44(lStack_120._4_4_,iVar11);
                local_4 = 6;
                if (iVar11 == 0) {
                  iVar11 = 0;
                }
                else {
                  iVar11 = FUN_007043b0();
                }
                local_4 = 0xffffffff;
                FUN_004057b0(*(undefined4 *)(in_ECX + 0x10));
                FUN_00405900(2);
                *(ushort *)(iVar11 + 0x18) = *(ushort *)(iVar11 + 0x18) & 0xfff5 | 4;
                (**(code **)(**(int **)(in_ECX + 0x1c) + 0x58))(iVar11);
                puVar1 = (ushort *)(*(int *)(in_ECX + 0x1c) + 8);
                *puVar1 = *puVar1 | 8;
                FUN_00405680(iVar11);
              }
              (**(code **)(*local_118 + 0x84))(puVar8,1);
              fStack_138 = fStack_138 + local_140;
              uStack_144 = uStack_144 + 1;
            }
            uStack_12c = uStack_12c + 1;
          } while (uStack_12c < *(uint *)(in_ECX + 0x18));
        }
        fStack_134 = fStack_134 + local_140;
        local_148 = (undefined4 *)((int)local_148 + 1);
      } while (local_148 < *(undefined4 **)(in_ECX + 0x18));
    }
    if (local_149 != '\0') {
      FUN_004a7a60("Water art assets don\'t match .ini settings.\r\n");
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0049e280(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b1c0b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = 0;
  DAT_00b35229 = 1;
  if (DAT_00b35234 == (int *)0x0) {
    if (*(int *)(DAT_00b333a0 + 0x34) != 0) goto LAB_0049e4d6;
    iVar2 = FUN_00401f00(0xdc,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0070b780(0);
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar3);
    FUN_006ff420("LODWaterRoot");
    (**(code **)(*DAT_00b333a8 + 0x84))(DAT_00b35234,0);
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    local_1c = 0;
    do {
      uVar3 = 0xc7b40000;
      switch(iVar4) {
      case 0:
        uStack_24 = 0x48200000;
        uStack_28 = 0x48b40000;
        uStack_20 = 0x47b40000;
        local_1c = 0;
        break;
      case 1:
        uStack_24 = 0x48200000;
        uStack_28 = 0x48b40000;
        uStack_20 = 0xc7b40000;
        local_1c = 0;
        break;
      case 2:
        uVar3 = 0x47b40000;
        goto LAB_0049e3de;
      case 3:
LAB_0049e3de:
        uStack_24 = 0x47200000;
        uStack_28 = 0x48200000;
        uStack_20 = 0;
        local_1c = uVar3;
      }
      uVar3 = FUN_0049d2a0(uStack_24,uStack_28,0x100,1,1,1);
      iVar2 = FID_conflict_CreateContainer(uVar3);
      *(undefined4 *)(iVar2 + 0x54) = uStack_20;
      *(undefined4 *)(iVar2 + 0x58) = local_1c;
      *(undefined4 *)(iVar2 + 0x5c) = 0;
      (**(code **)(*DAT_00b35234 + 0x84))(iVar2,1);
      FUN_007b8940(iVar2,0x11,0,1);
      iVar2 = FUN_00707530(4);
      iVar4 = iVar4 + 1;
      *(undefined1 *)(iVar2 + 0x71) = 1;
    } while (iVar4 < 4);
    if (((DAT_00b07050 != '\0') && (DAT_00b42f3e != '\0')) && (1 < DAT_00b42f48)) {
      FUN_007b8940(DAT_00b35234,0x11,0,1);
    }
    FUN_00499e40();
    if (DAT_00b35234 == (int *)0x0) goto LAB_0049e4d6;
  }
  *(ushort *)(DAT_00b35234 + 6) = *(ushort *)(DAT_00b35234 + 6) & 0xfffe;
LAB_0049e4d6:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0049e500(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b1c67;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 4;
  FUN_0049d1a0(uVar2);
  puVar1 = *(undefined4 **)(in_ECX + 0x24);
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x20);
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 4);
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e610(float param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int in_ECX;
  undefined1 auStack_114 [4];
  longlong local_110;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_114;
  local_110 = (longlong)ROUND(param_1 / _DAT_00b07040);
  *(int *)(in_ECX + 0x18) = (int)local_110;
  if ((int)local_110 == 0) {
    *(undefined4 *)(in_ECX + 0x18) = 1;
  }
  if (_DAT_00b07048 <= 0.0) {
    _DAT_00b07048 = 1.0;
  }
  _sprintf(local_108,"%s\\water\\%s","Textures",PTR_s_water_00b070f0);
  pcVar2 = local_108;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar3 = (char *)FUN_00401f00(pcVar2 + (1 - (int)(local_108 + 1)));
  *(char **)(in_ECX + 0xc) = pcVar3;
  pcVar2 = local_108;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_0049b710(param_2);
  FUN_0049dd00(*(undefined4 *)(in_ECX + 4),param_1);
  (**(code **)(*DAT_00b35230 + 0x84))(*(undefined4 *)(in_ECX + 4),1);
  if (*(int *)(DAT_00b333a0 + 0x18) != 0) {
    FUN_00708e40(*(undefined4 *)(in_ECX + 4));
  }
  FUN_00707980();
  FUN_00707370(0,0);
  return;
}



int FUN_0049e750(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_0049d2a0(param_2,param_2,0x400,1,1,1);
  iVar3 = FID_conflict_CreateContainer(uVar2);
  iVar1 = DAT_00b333c4;
  if (DAT_00b333c4 == 0) {
    uVar2 = 0;
    *(undefined4 *)(iVar3 + 0x54) = 0;
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(DAT_00b333c4 + 0x2c);
    *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(iVar1 + 0x30);
    uVar2 = *(undefined4 *)(iVar1 + 0x34);
  }
  *(undefined4 *)(iVar3 + 0x5c) = uVar2;
  (**(code **)(*DAT_00b35230 + 0x84))(iVar3,1);
  FUN_00707980();
  FUN_007b8940(iVar3,0x11,0,1);
  return iVar3;
}



void FUN_0049e7f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((DAT_00b35230 != 0) && (DAT_00b07090 != '\0')) {
    uVar1 = FUN_0049cb40();
    FUN_0075fa90(uVar1);
    uVar1 = FUN_007c2420(DAT_00b43104,0x100,6,0,0);
    FUN_0075fa90(uVar1);
    uVar1 = FUN_0049e750(DAT_00b35230,0x44800000);
    *(undefined4 *)(param_1 + 4) = uVar1;
    iVar2 = FUN_00707530(4);
    *(undefined1 *)(iVar2 + 0x70) = 1;
    uVar1 = FUN_00405a30();
    *(undefined4 *)(iVar2 + 0x6c) = uVar1;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e880(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  float *pfVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  LONG LVar9;
  undefined4 uVar10;
  char *_Str2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  float local_230;
  float *local_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  float *local_21c;
  char local_218 [260];
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b1c9b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_230;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xfffffdc0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b35228 != '\0') {
    DAT_00b35228 = '\0';
    goto LAB_0049f41c;
  }
  iVar8 = FUN_00585c10(1,uVar7);
  if ('\0' < *(char *)(iVar8 + 0x31)) goto LAB_0049f41c;
  if (DAT_00b333c4 == 0) {
    local_230 = (float)FUN_00440560();
  }
  else {
    fVar3 = (float)DAT_00b070b0;
    if (DAT_00b070b0 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    local_230 = (float)FUN_0065e5e0(fVar3);
  }
  if (local_230 == 0.0) {
    if (DAT_00b35224 == 0.0) {
      local_230 = (float)FUN_00440560();
      goto LAB_0049e953;
    }
  }
  else if (local_230 != DAT_00b35224) {
LAB_0049e953:
    DAT_00b3521d = '\x01';
    DAT_00b35224 = local_230;
  }
  if (DAT_00b07060 == '\0') {
    DAT_00b45db8 = 0;
    if (DAT_00b45dcc != 0) {
      FUN_00499360(0);
      FUN_00499270(0);
    }
    if (*(int *)(in_ECX + 4) != 0) {
      FUN_007c1ee0(*(int *)(in_ECX + 4));
      puVar2 = *(undefined4 **)(in_ECX + 4);
      if (puVar2 != (undefined4 *)0x0) {
        LVar9 = InterlockedDecrement(puVar2 + 1);
        if ((LVar9 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 *)(in_ECX + 4) = 0;
      }
    }
  }
  else {
    if ((DAT_00b0703c == '\0') && (DAT_00b35229 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((((*(int *)(DAT_00b333a0 + 0x34) == 0) && (DAT_00b35220 != 0)) &&
        (cVar6 = FUN_004ed650(), cVar6 != '\0')) && (bVar5)) {
      DAT_00b45db8 = 0;
      if (DAT_00b333b8 == '\0') {
        FUN_0049bef0(param_1,param_2);
      }
    }
    else if (((DAT_00b0703c != '\0') && (DAT_00b45db8 = 1, DAT_00b45dcc != 0)) &&
            (*(int *)(DAT_00b45dcc + 0x110) == 0)) {
      _sprintf(local_218,"Data\\Textures\\Effects\\interior_refl.dds");
      uVar10 = FUN_00720f80(local_218,local_218,local_218,local_218,local_218,local_218,DAT_00b43104
                            ,&DAT_00b256d0);
      FUN_00499360(uVar10);
    }
  }
  if (DAT_00b3521d != '\0') {
    iVar8 = FUN_00440560();
    if (((iVar8 != 0) && (cVar6 = FUN_0043f4d0(), cVar6 != '\0')) &&
       ((DAT_00b07098 != '\0' && ((DAT_00b43077 != '\0' && (*(int *)(DAT_00b333a0 + 0x34) == 0))))))
    {
      FUN_0043f270();
      cVar6 = FUN_004ef190();
      if ((cVar6 == '\0') && ((DAT_00b35229 == '\0' && (cVar6 = FUN_004e9f40(), cVar6 != '\0')))) {
        FUN_0049e280();
        goto LAB_0049eb2a;
      }
    }
    FUN_0043f270();
    cVar6 = FUN_004ef190();
    if ((cVar6 != '\0') && (DAT_00b35229 != '\0')) {
      FUN_00499e20();
    }
  }
LAB_0049eb2a:
  if ((DAT_00b0703c == '\0') && (DAT_00b35229 == '\0')) goto LAB_0049f41c;
  if ((DAT_00b333c4 == 0) || (iVar8 = FUN_006ecc80(), iVar8 == 0)) {
    DAT_00b42ce1 = 0;
  }
  else {
    iVar8 = FUN_005645b0();
    local_228 = (double)*(float *)(iVar8 + 0x90);
    FUN_006ecc80();
    fVar11 = (float10)FUN_004cace0();
    if (fVar11 <= (float10)local_228) {
      DAT_00b3521c = '\0';
      DAT_00b42ce2 = 0;
      DAT_00b43164 = 0;
    }
    else {
      DAT_00b3521c = '\x01';
      DAT_00b42ce2 = 1;
      DAT_00b43164 = 1;
      iVar8 = FUN_005645b0();
      _DAT_00b4314c = *(undefined4 *)(iVar8 + 0x90);
    }
    FUN_006ecc80();
    FUN_004cace0();
    _DAT_00b42ce4 = FUN_009828c0();
    DAT_00b42ce1 = 1;
  }
  if (((DAT_00b07050 != '\0') && (DAT_00b42f3e != '\0')) && (1 < DAT_00b42f48)) {
    FUN_0049d7b0(param_1);
    puVar2 = *(undefined4 **)(in_ECX + 0x34);
    while (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      *(undefined4 *)(*piVar1 + 0x18) = 0x3f800000;
    }
    pfVar4 = *(float **)(in_ECX + 0x34);
    while (local_22c = pfVar4, local_22c != (float *)0x0) {
      fVar3 = local_22c[2];
      pfVar4 = (float *)*local_22c;
      local_21c = pfVar4;
      if (*(char *)((int)fVar3 + 0x10) == '\0') {
        if (DAT_00b07090 != '\0') {
          FUN_0049b930(fVar3,0);
        }
      }
      else {
        if (*(int *)((int)fVar3 + 8) != 0) {
          FUN_007c1ee0(*(int *)((int)fVar3 + 8));
        }
        if (*(int *)((int)fVar3 + 0xc) != 0) {
          FUN_007c1ee0(*(int *)((int)fVar3 + 0xc));
        }
        puVar2 = *(undefined4 **)((int)fVar3 + 8);
        if (puVar2 != (undefined4 *)0x0) {
          LVar9 = InterlockedDecrement(puVar2 + 1);
          if ((LVar9 == 0) && (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          *(undefined4 *)((int)fVar3 + 8) = 0;
        }
        puVar2 = *(undefined4 **)((int)fVar3 + 0xc);
        if (puVar2 != (undefined4 *)0x0) {
          LVar9 = InterlockedDecrement(puVar2 + 1);
          if ((LVar9 == 0) && (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          *(undefined4 *)((int)fVar3 + 0xc) = 0;
        }
        FUN_007aa860(&local_22c);
        (**(code **)(*DAT_00b35230 + 0x88))(&local_228,*(undefined4 *)((int)fVar3 + 4));
        puVar2 = (undefined4 *)local_228;
        if ((((undefined4 *)local_228 != (undefined4 *)0x0) &&
            (LVar9 = InterlockedDecrement((undefined4 *)local_228 + 1), LVar9 == 0)) &&
           (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        FUN_004993b0();
        FUN_00401f20(fVar3);
        pfVar4 = local_21c;
      }
    }
  }
  fVar3 = local_230;
  if (DAT_00b3521d != '\0') {
    DAT_00b3521d = '\0';
    if (((local_230 == 0.0) || (iVar8 = FUN_004cafc0(), iVar8 == 0)) &&
       ((DAT_00b35220 != 0 || (DAT_00b35224 == 0.0)))) {
      FUN_006ecc80();
    }
    DAT_00b35220 = FUN_004cafc0();
    if ((*(int *)(in_ECX + 0x40) != 0) && (cVar6 = FUN_006b7260(), cVar6 != '\0')) {
      FUN_006b7240();
      FUN_006b73c0();
      iVar8 = *(int *)(in_ECX + 0x40);
      if (iVar8 != 0) {
        FUN_006b73e0();
        FUN_00401f20(iVar8);
      }
      *(undefined4 *)(in_ECX + 0x40) = 0;
    }
    if ((DAT_00b35220 != 0) && (*(int *)(DAT_00b35220 + 0x38) != 0)) {
      uVar10 = FUN_006ae0a0(*(undefined4 *)(*(int *)(DAT_00b35220 + 0x38) + 0xc),0x12,0);
      *(undefined4 *)(in_ECX + 0x40) = uVar10;
    }
    if ((DAT_00b07050 != '\0') && (DAT_00b42f3e != '\0')) {
      if (((*(int *)(DAT_00b333a0 + 0x34) != 0) ||
          ((fVar3 != 0.0 && (iVar8 = FUN_0043fab0(fVar3), iVar8 != 0)))) &&
         (iVar8 = FUN_00707530(4), iVar8 != 0)) {
        _Str2 = *(char **)(DAT_00b35220 + 0x30);
        if (_Str2 == (char *)0x0) {
          _Str2 = "";
        }
        iVar8 = __stricmp("lava",_Str2);
        DAT_00b45dba = iVar8 == 0;
      }
      if ((DAT_00b35220 != 0) && (iVar8 = FUN_004edd90(), iVar8 != 0)) {
        uVar10 = FUN_004edd90();
        _sprintf(acStack_114,"%s\\%s","Textures",uVar10);
        FUN_00442890(&local_21c,acStack_114,1,0);
        uStack_4 = 0;
        FUN_00499310(local_21c);
        uStack_4 = 0xffffffff;
        FUN_007016a0();
      }
    }
  }
  iVar8 = FUN_00542ea0();
  iVar8 = *(int *)(*(int *)(*(int *)(iVar8 + 0x28) + 8) + 0x1c);
  local_228._0_4_ = *(undefined4 **)(iVar8 + 0x54);
  local_228._4_4_ = *(undefined4 *)(iVar8 + 0x58);
  uStack_220 = *(undefined4 *)(iVar8 + 0x5c);
  FUN_0043f350();
  _DAT_00b45df4 = (undefined4 *)local_228;
  _DAT_00b45df8 = local_228._4_4_;
  _DAT_00b45dfc = uStack_220;
  FUN_00542ea0();
  fVar11 = (float10)FUN_00544b00();
  _DAT_00b45e00 = (float)(fVar11 * (float10)100.0);
  iVar8 = FUN_00542ea0();
  DAT_00b45e04 = *(undefined4 *)(iVar8 + 0x6c);
  DAT_00b45e08 = *(undefined4 *)(iVar8 + 0x70);
  local_228 = *(double *)(iVar8 + 0x6c);
  DAT_00b45e0c = *(undefined4 *)(iVar8 + 0x74);
  fVar11 = (float10)0;
  uStack_220 = DAT_00b45e0c;
  if (fVar11 != (float10)_DAT_00b45e00) {
    FUN_00542ea0();
    fVar11 = (float10)FUN_00544b00();
  }
  DAT_00b45e10 = (float)fVar11;
  if (DAT_00b3521c != '\0') {
    DAT_00b45e10 = 0.0;
  }
  DAT_00b45dbb = DAT_00b3521c;
  if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
    fVar11 = (float10)FUN_00402bd0();
    local_228 = (double)fVar11;
    FUN_00542ea0();
    fVar11 = (float10)FUN_004991c0();
    if ((float10)local_228 <= fVar11) {
LAB_0049f1fc:
      fVar11 = (float10)FUN_00402bd0();
      local_228 = (double)fVar11;
      FUN_00542ea0();
      fVar11 = (float10)FUN_00499140();
      if (fVar11 < (float10)local_228) {
        fVar11 = (float10)FUN_00402bd0();
        local_228 = (double)fVar11;
        FUN_00542ea0();
        fVar11 = (float10)FUN_00499180();
        if ((float10)local_228 <= fVar11) {
          fVar11 = (float10)FUN_00402bd0();
          FUN_00542ea0((float)fVar11);
          fVar11 = (float10)FUN_00499180();
          FUN_00542ea0((float)fVar11);
          fVar11 = (float10)FUN_00499140();
          fVar11 = (float10)FUN_00410eb0(0,0x3f800000,(float)fVar11);
          if ((float10)0.0 <= fVar11) {
            fVar11 = (float10)FUN_00402bd0();
            FUN_00542ea0((float)fVar11);
            fVar11 = (float10)FUN_00499180();
            FUN_00542ea0((float)fVar11);
            fVar11 = (float10)FUN_00499140();
            fVar11 = (float10)FUN_00410eb0(0,0x3f800000,(float)fVar11);
          }
          else {
            fVar11 = (float10)0;
          }
          local_22c = (float *)(float)fVar11;
          if ((float)local_22c <= 1.0) {
            fVar11 = (float10)FUN_00402bd0();
            FUN_00542ea0((float)fVar11);
            fVar11 = (float10)FUN_00499180();
            FUN_00542ea0((float)fVar11);
            fVar11 = (float10)FUN_00499140();
            fVar11 = (float10)FUN_00410eb0(0,0x3f800000,(float)fVar11);
            if ((float10)0.0 <= fVar11) {
              fVar11 = (float10)FUN_00402bd0();
              FUN_00542ea0((float)fVar11);
              fVar11 = (float10)FUN_00499180();
              FUN_00542ea0((float)fVar11);
              fVar11 = (float10)FUN_00499140();
              fVar11 = (float10)FUN_00410eb0(0,0x3f800000,(float)fVar11);
            }
            else {
              fVar11 = (float10)0;
            }
          }
          else {
            fVar11 = (float10)1;
          }
          local_230 = (float)fVar11;
          *(undefined1 *)(in_ECX + 0x28) = 1;
          *(float *)(in_ECX + 0x2c) = local_230;
          *(int *)(in_ECX + 0x24) = DAT_00b35220;
          goto LAB_0049f3cb;
        }
      }
      if (*(int *)(in_ECX + 0x24) != 0) {
        *(undefined1 *)(in_ECX + 0x29) = 1;
        *(undefined4 *)(in_ECX + 0x2c) = 0;
        *(undefined1 *)(in_ECX + 0x28) = 0;
        goto LAB_0049f3c8;
      }
    }
    else {
      fVar11 = (float10)FUN_00402bd0();
      local_228 = (double)fVar11;
      FUN_00542ea0();
      fVar11 = (float10)FUN_00499200();
      if (fVar11 < (float10)local_228) goto LAB_0049f1fc;
      if ((*(int *)(DAT_00b35220 + 0xa4) == 0) || (*(int *)(DAT_00b35220 + 0xa4) == 0)) {
        *(undefined1 *)(in_ECX + 0x28) = 0;
        *(undefined4 *)(in_ECX + 0x2c) = 0;
      }
      else {
        *(int *)(in_ECX + 0x24) = *(int *)(DAT_00b35220 + 0xa4);
        fVar11 = (float10)FUN_00402bd0();
        FUN_00542ea0((float)fVar11);
        fVar11 = (float10)FUN_00499200();
        FUN_00542ea0((float)fVar11);
        fVar11 = (float10)FUN_004991c0();
        fVar11 = (float10)FUN_00410eb0(0,0x3f800000,(float)fVar11);
        if ((float10)0.0 <= fVar11) {
          fVar11 = (float10)FUN_00402bd0();
          FUN_00542ea0((float)fVar11);
          fVar11 = (float10)FUN_00499200();
          FUN_00542ea0((float)fVar11);
          fVar11 = (float10)FUN_004991c0();
          fVar11 = (float10)FUN_00410eb0(0,0x3f800000,(float)fVar11);
        }
        else {
          fVar11 = (float10)0;
        }
        local_22c = (float *)(float)fVar11;
        if ((float)local_22c <= 1.0) {
          fVar11 = (float10)FUN_00402bd0();
          FUN_00542ea0((float)fVar11);
          fVar11 = (float10)FUN_00499200();
          FUN_00542ea0((float)fVar11);
          fVar11 = (float10)FUN_004991c0();
          fVar11 = (float10)FUN_00410eb0(0,0x3f800000,(float)fVar11);
          if ((float10)0.0 <= fVar11) {
            fVar11 = (float10)FUN_00402bd0();
            FUN_00542ea0((float)fVar11);
            fVar11 = (float10)FUN_00499200();
            FUN_00542ea0((float)fVar11);
            fVar11 = (float10)FUN_004991c0();
            fVar11 = (float10)FUN_00410eb0(0,0x3f800000,(float)fVar11);
            local_230 = (float)fVar11;
            *(float *)(in_ECX + 0x2c) = local_230;
            *(undefined1 *)(in_ECX + 0x28) = 1;
          }
          else {
            *(undefined1 *)(in_ECX + 0x28) = 1;
            local_230 = 0.0;
            *(undefined4 *)(in_ECX + 0x2c) = 0;
          }
        }
        else {
          *(undefined1 *)(in_ECX + 0x28) = 1;
          local_230 = 1.0;
          *(undefined4 *)(in_ECX + 0x2c) = 0x3f800000;
        }
      }
    }
  }
  else {
LAB_0049f3c8:
    *(undefined4 *)(in_ECX + 0x24) = 0;
  }
LAB_0049f3cb:
  if ((*(float *)(in_ECX + 0x2c) <= 0.0) || (*(char *)(in_ECX + 0x28) == '\0')) {
    FUN_00499570(0,0,*(undefined1 *)(in_ECX + 0x29));
  }
  else {
    FUN_00499570(*(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 0x2c),0);
    if (*(float *)(in_ECX + 0x2c) == 1.0) {
      *(undefined1 *)(in_ECX + 0x28) = 0;
    }
  }
  FUN_0049ad00();
LAB_0049f41c:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0049f450(void)

{
  FUN_00401000();
  return;
}



void thunk_FUN_00401010(void)

{
  FUN_00401010();
  return;
}



void FUN_0049f470(void)

{
  FUN_00401020(&DAT_00a2f830);
  return;
}



void FUN_0049f480(void)

{
  LPCRITICAL_SECTION in_ECX;
  
  LeaveCriticalSection(in_ECX);
  return;
}



float10 FUN_0049f4a0(float param_1)

{
  int in_ECX;
  float10 fVar1;
  
  if (*(int *)(in_ECX + 0x44) - 1U < 3) {
    fVar1 = (float10)FUN_006c5fc0(*(float *)(in_ECX + 0x48) + param_1,1);
    return fVar1;
  }
  return (float10)0;
}



void FUN_0049f4d0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *_Dst;
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x5c));
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    _Dst = (char *)FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
    *(char **)(in_ECX + 0x5c) = _Dst;
    _strcpy_s(_Dst,(rsize_t)(pcVar2 + (1 - (int)(param_1 + 1))),param_1);
  }
  return;
}



void FUN_0049f520(void)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    iVar2 = 0;
    do {
      *(undefined4 *)(*(int *)(in_ECX + 0x14) + 8 + iVar2) = 0;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar1 < *(uint *)(in_ECX + 0xc));
  }
  return;
}



int FUN_0049f550(void)

{
  int iVar1;
  
  iVar1 = 8;
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x71) {
    iVar1 = 0xc;
  }
  return iVar1 + 0xc;
}



void FUN_0049f570(float param_1)

{
  int in_ECX;
  
  param_1 = *(float *)(in_ECX + 0x48) + param_1;
  FUN_0045b9a0(&param_1,4);
  FUN_0045b9a0(in_ECX + 0x44,4);
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x71) {
    FUN_0045b9a0(&param_1,4);
  }
  FUN_0045b9a0(in_ECX + 0x34,4);
  FUN_0045b9a0(in_ECX + 0x38,4);
  FUN_0045b9a0(in_ECX + 0x54,4);
  return;
}



void FUN_0049f5f0(float param_1)

{
  float in_ECX;
  float local_4;
  
  local_4 = in_ECX;
  FUN_004534d0(&local_4,4);
  FUN_004534d0((int *)((int)in_ECX + 0x44),4);
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x71) {
    FUN_004534d0(&local_4,4);
  }
  *(float *)((int)in_ECX + 0x48) = local_4 - param_1;
  FUN_004534d0((int)in_ECX + 0x34,4);
  FUN_004534d0((int)in_ECX + 0x38,4);
  FUN_004534d0((int)in_ECX + 0x54,4);
  *(undefined4 *)((int)in_ECX + 0x4c) = 0xff7fffff;
  *(undefined4 *)((int)in_ECX + 0x50) = 0xff7fffff;
  if (*(int *)((int)in_ECX + 0x44) - 1U < 3) {
    FUN_006c5fc0(*(float *)((int)in_ECX + 0x48) + param_1,1);
  }
  return;
}



void FUN_0049f6c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b2128;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3f7d4;
  puVar1 = (undefined4 *)in_ECX[0x1a];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_006ca7c0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0049f750(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  LONG LVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint local_8;
  
  iVar7 = 0;
  if (*(int *)(in_ECX + 0x40) != 0) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x40) + 0x7c);
    if (*(int *)(in_ECX + 0x5c) != 0) {
      uVar3 = (**(code **)(*piVar1 + 0x4c))(*(int *)(in_ECX + 0x5c));
      *(undefined4 *)(in_ECX + 0x60) = uVar3;
    }
    local_8 = 0;
    if (*(int *)(in_ECX + 0xc) != 0) {
      do {
        piVar8 = (int *)(*(int *)(in_ECX + 0x18) + iVar7);
        piVar4 = (int *)(**(code **)(*piVar1 + 0x58))();
        if (*(ushort *)(piVar8 + 1) == 0xffff) {
          iVar6 = 0;
        }
        else {
          iVar6 = (uint)*(ushort *)(piVar8 + 1) + *(int *)(*piVar8 + 8);
        }
        iVar6 = (**(code **)(*piVar4 + 0x58))(iVar6);
        if (iVar6 == 0) {
          if (*(ushort *)(piVar8 + 1) == 0xffff) {
            iVar6 = 0;
          }
          else {
            iVar6 = (uint)*(ushort *)(piVar8 + 1) + *(int *)(*piVar8 + 8);
          }
          (**(code **)(*piVar1 + 0x50))(iVar6,0);
          iVar6 = *(int *)(in_ECX + 0x14);
          puVar2 = *(undefined4 **)(iVar6 + 4 + iVar7);
          if (puVar2 != (undefined4 *)0x0) {
            LVar5 = InterlockedDecrement(puVar2 + 1);
            if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            *(undefined4 *)(iVar6 + 4 + iVar7) = 0;
          }
          *(undefined4 *)(*(int *)(in_ECX + 0x14) + 8 + iVar7) = 0;
          *(undefined1 *)(*(int *)(in_ECX + 0x14) + 0xc + iVar7) = 0xff;
        }
        local_8 = local_8 + 1;
        iVar7 = iVar7 + 0x10;
      } while (local_8 < *(uint *)(in_ECX + 0xc));
    }
  }
  return;
}



void FUN_0049f860(undefined4 param_1)

{
  int in_ECX;
  
  FUN_006c8220(param_1,*(undefined4 *)(*(int *)(in_ECX + 0x40) + 0x7c));
  return;
}



void FUN_0049f880(void)

{
  ushort uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  LONG LVar6;
  int in_ECX;
  int iVar7;
  uint local_8;
  
  piVar2 = *(int **)(*(int *)(in_ECX + 0x40) + 0x7c);
  iVar7 = 0;
  if (*(int *)(in_ECX + 0x5c) != 0) {
    uVar4 = (**(code **)(*piVar2 + 0x4c))(*(int *)(in_ECX + 0x5c));
    *(undefined4 *)(in_ECX + 0x60) = uVar4;
  }
  local_8 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    do {
      uVar1 = *(ushort *)(*(int *)(in_ECX + 0x18) + 4 + iVar7);
      if (uVar1 == 0xffff) {
        iVar5 = 0;
      }
      else {
        iVar5 = (uint)uVar1 + *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + iVar7) + 8);
      }
      iVar5 = (**(code **)(*piVar2 + 0x4c))(iVar5);
      if (iVar5 == 0) {
        iVar5 = *(int *)(in_ECX + 0x14);
        puVar3 = *(undefined4 **)(iVar5 + 4 + iVar7);
        if (puVar3 != (undefined4 *)0x0) {
          LVar6 = InterlockedDecrement(puVar3 + 1);
          if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          *(undefined4 *)(iVar5 + 4 + iVar7) = 0;
        }
        *(undefined4 *)(*(int *)(in_ECX + 0x14) + 8 + iVar7) = 0;
        *(undefined1 *)(*(int *)(in_ECX + 0x14) + 0xc + iVar7) = 0xff;
      }
      local_8 = local_8 + 1;
      iVar7 = iVar7 + 0x10;
    } while (local_8 < *(uint *)(in_ECX + 0xc));
  }
  return;
}



uint FUN_0049f950(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char *_Str2;
  float fVar4;
  uint in_EAX;
  uint uVar5;
  undefined2 uVar10;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar11;
  double dVar12;
  undefined4 uVar13;
  float local_40;
  uint local_3c;
  int *local_30;
  uint local_28;
  
  uVar5 = in_EAX & 0xffffff00;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x44) == 1)) {
    fVar1 = *(float *)(param_1 + 0x4c);
    fVar2 = *(float *)(param_1 + 0x3c);
    uVar10 = (undefined2)(in_EAX >> 0x10);
    piVar7 = (int *)CONCAT22(uVar10,(ushort)(-3.4028235e+38 < fVar1) << 8 | (ushort)NAN(fVar1) << 10
                                    | (ushort)(fVar1 == -3.4028235e+38) << 0xe);
    if ((fVar1 != -3.4028235e+38) &&
       ((piVar7 = (int *)CONCAT22(uVar10,(ushort)(fVar2 < -3.4028235e+38) << 8 |
                                         (ushort)NAN(fVar2) << 10 |
                                         (ushort)(fVar2 == -3.4028235e+38) << 0xe),
        fVar2 != -3.4028235e+38 &&
        (piVar7 = (int *)CONCAT22(uVar10,(ushort)(fVar2 < fVar1) << 8 |
                                         (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                         (ushort)(fVar2 == fVar1) << 0xe), fVar2 != fVar1)))) {
      piVar7 = *(int **)(param_1 + 0x20);
      local_3c = 0;
      local_30 = (int *)0x0;
      if (piVar7 != (int *)0x0) {
        local_3c = piVar7[3];
        local_30 = (int *)piVar7[4];
      }
      local_40 = 0.0;
      if (local_3c != 0) {
        do {
          fVar4 = local_40;
          _Str2 = (char *)local_30[(int)local_40 * 2 + 1];
          piVar7 = local_30;
          if (_Str2 != (char *)0x0) {
            fVar3 = (float)local_30[(int)local_40 * 2];
            if ((fVar1 <= fVar2) ||
               ((fVar3 <= fVar1 &&
                (piVar7 = (int *)((uint)local_30 & 0xffff0000), fVar3 < fVar2 == (fVar3 == fVar2))))
               ) {
              uVar10 = (undefined2)((uint)piVar7 >> 0x10);
              piVar7 = (int *)CONCAT22(uVar10,(ushort)(fVar3 < fVar1) << 8 |
                                              (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                                              (ushort)(fVar3 == fVar1) << 0xe);
              if ((fVar3 < fVar1) ||
                 (piVar7 = (int *)CONCAT22(uVar10,(ushort)(fVar2 < fVar3) << 8 |
                                                  (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
                                                  (ushort)(fVar2 == fVar3) << 0xe),
                 fVar2 < fVar3 || (fVar2 == fVar3) != 0)) goto LAB_0049fcc1;
            }
            iVar6 = __strnicmp("Sound: ",_Str2,7);
            if (iVar6 == 0) {
              pcVar8 = _strchr(_Str2,0xd);
              if (pcVar8 != (char *)0x0) {
                *pcVar8 = '\0';
              }
              piVar7 = (int *)FUN_00447490(_Str2 + 7);
              if (pcVar8 != (char *)0x0) {
                *pcVar8 = '\r';
              }
              if ((piVar7 != (int *)0x0) && (*(int *)(DAT_00b33398 + 0x24) != 0)) {
                uVar5 = piVar7[0xf];
                local_28 = CONCAT31(local_28._1_3_,(char)(uVar5 >> 4)) & 0xffffff01;
                piVar11 = (int *)0x0;
                if (param_2 == (int *)0x0) {
                  iVar6 = piVar7[3];
                  uVar13 = 0x121;
LAB_0049fbe6:
                  piVar7 = (int *)FUN_006ae0a0(iVar6,uVar13,1);
                  piVar9 = piVar7;
                }
                else {
                  iVar6 = piVar7[3];
                  if ((piVar7[0xf] & 0x40U) != 0) {
                    uVar13 = 0x101;
                    goto LAB_0049fbe6;
                  }
                  piVar9 = (int *)FUN_006ae0a0(iVar6,0x102,1);
                  iVar6 = (**(code **)(*param_2 + 0x154))();
                  piVar7 = (int *)0x0;
                  if ((iVar6 != 0) &&
                     (piVar7 = (int *)(**(code **)(*param_2 + 0x154))(), piVar11 = piVar7,
                     (uVar5 >> 4 & 1) == 0)) {
                    piVar7 = (int *)(**(code **)(*piVar7 + 0x58))("AttachSound");
                    piVar11 = piVar7;
                  }
                }
                if (piVar9 != (int *)0x0) {
                  if (piVar11 == (int *)0x0) {
                    if (param_2 != (int *)0x0) {
                      iVar6 = (**(code **)(*param_2 + 0x154))();
                      FUN_006b7360(*(undefined4 *)(iVar6 + 0x88),*(undefined4 *)(iVar6 + 0x8c),
                                   *(undefined4 *)(iVar6 + 0x90));
                    }
                  }
                  else {
                    FUN_006b7360(piVar11[0x22],piVar11[0x23],piVar11[0x24]);
                    FUN_006aa980(*piVar9,piVar11);
                  }
                  FUN_006b7190(local_28);
                  FUN_006b73e0();
                  piVar7 = (int *)FUN_00401f20(piVar9);
                }
              }
            }
            else {
              iVar6 = __strnicmp("Enum: StopSounds ",_Str2,0x11);
              if (iVar6 == 0) {
                dVar12 = _atof(_Str2 + 0x11);
                local_40 = (float)dVar12;
                if (local_40 < 1.0) {
                  local_40 = 1.0;
                }
                piVar7 = (int *)FUN_006ac420(param_2,local_40);
              }
              else {
                piVar7 = (int *)__strnicmp("Enum: HitShader",_Str2,0xf);
                if (piVar7 == (int *)0x0) {
                  piVar7 = (int *)FUN_0065dc50(param_2);
                }
              }
            }
          }
LAB_0049fcc1:
          local_40 = (float)((int)fVar4 + 1);
        } while ((uint)local_40 < local_3c);
      }
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      fVar1 = *(float *)(param_1 + 0x48);
      uVar10 = (undefined2)((uint)piVar7 >> 0x10);
      piVar7 = (int *)CONCAT22(uVar10,(ushort)(-3.4028235e+38 < fVar1) << 8 |
                                      (ushort)NAN(fVar1) << 10 |
                                      (ushort)(fVar1 == -3.4028235e+38) << 0xe);
      if (fVar1 != -3.4028235e+38) {
        fVar1 = *(float *)(param_1 + 0x3c);
        fVar2 = *(float *)(param_1 + 0x30);
        piVar7 = (int *)CONCAT22(uVar10,(ushort)(fVar2 < fVar1) << 8 |
                                        (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                        (ushort)(fVar2 == fVar1) << 0xe);
        if (fVar2 < fVar1 || (fVar2 == fVar1) != 0) {
          return CONCAT31((int3)((uint)piVar7 >> 8),1);
        }
      }
    }
    uVar5 = (uint)piVar7 & 0xffffff00;
  }
  return uVar5;
}



uint FUN_0049fd20(char *param_1)

{
  ushort uVar1;
  uint in_EAX;
  char *_Str1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    iVar2 = 0;
    do {
      uVar1 = *(ushort *)(*(int *)(in_ECX + 0x18) + 4 + iVar2);
      if (uVar1 == 0xffff) {
        _Str1 = (char *)0x0;
      }
      else {
        _Str1 = (char *)((uint)uVar1 + *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + iVar2) + 8));
      }
      in_EAX = __stricmp(_Str1,param_1);
      if (in_EAX == 0) {
        return CONCAT31((int3)((uint)*(int *)(in_ECX + 0x14) >> 8),
                        *(undefined1 *)(uVar3 * 0x10 + 0xd + *(int *)(in_ECX + 0x14)));
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar3 < *(uint *)(in_ECX + 0xc));
  }
  return in_EAX & 0xffffff00;
}



/* WARNING: Removing unreachable block (ram,0x0049fdee) */
/* WARNING: Removing unreachable block (ram,0x0049fdfc) */
/* WARNING: Removing unreachable block (ram,0x0049fe00) */

void FUN_0049fd90(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *_Src;
  uint uVar4;
  LONG LVar5;
  char *pcVar6;
  char *_Dst;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b216b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006c7fb0(*(undefined4 *)(param_2 + 8),0,1,0);
  *in_ECX = &PTR_FUN_00a3f7d4;
  in_ECX[0x1a] = 0;
  local_4 = 1;
  if ((param_1 != 0) && (in_ECX[0x1a] = param_1, param_1 != 0)) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  puVar2 = *(undefined4 **)(param_2 + 0x20);
  puVar3 = (undefined4 *)in_ECX[8];
  if (puVar3 != puVar2) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar3 + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1,uVar4);
    }
    in_ECX[8] = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  in_ECX[0x18] = *(undefined4 *)(param_2 + 0x60);
  _Src = *(char **)(param_2 + 0x5c);
  FUN_00401f20(in_ECX[0x17]);
  in_ECX[0x17] = 0;
  if (_Src != (char *)0x0) {
    pcVar6 = _Src;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _Dst = (char *)FUN_00401f00(pcVar6 + (1 - (int)(_Src + 1)));
    in_ECX[0x17] = _Dst;
    _strcpy_s(_Dst,(rsize_t)(pcVar6 + (1 - (int)(_Src + 1))),_Src);
  }
  FUN_00478b90();
  local_4._0_1_ = 2;
  FUN_006c9420(in_ECX,&puStack_1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (puStack_1c != (undefined4 *)0x0) {
    (**(code **)*puStack_1c)(1);
  }
  if (puStack_18 != (undefined4 *)0x0) {
    (**(code **)*puStack_18)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0049ff00(byte param_1)

{
  FUN_0049f6c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_0049ffc0(void)

{
  int in_ECX;
  
  if (*(float *)(in_ECX + 0x2c) != 0.0) {
    return 1;
  }
  return 0;
}



void FUN_0049ffe0(void)

{
  undefined4 *in_ECX;
  
  FUN_0070b780(0);
  in_ECX[0x39] = 0x42c80000;
  *in_ECX = &PTR_LAB_00a3f894;
  *(undefined1 *)((int)in_ECX + 0xdd) = 0;
  in_ECX[0x38] = 0x488a9800;
  *(undefined1 *)(in_ECX + 0x37) = 0;
  return;
}


