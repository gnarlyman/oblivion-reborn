
void FUN_005f01b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = (**(code **)(*in_ECX + 0x18c))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*in_ECX + 0x164))();
    if (iVar1 != 0) {
      FUN_00470fc0(5,0);
      uVar4 = 0xffffffff;
      uVar3 = 0;
      uVar2 = FUN_005e5690(0,0,0);
      FUN_00477b60(uVar2,uVar3,uVar4);
      FUN_005effd0(0xffffffff,0);
    }
    if ((in_ECX == DAT_00b333c4) && (iVar1 = FUN_0065d750((char)DAT_00b333c4[0x162]), iVar1 != 0)) {
      uVar4 = 0xffffffff;
      uVar3 = 0;
      uVar2 = FUN_005e5690(0,0,0);
      FUN_00477b60(uVar2,uVar3,uVar4);
      FUN_00470fc0(5,0);
    }
  }
  return;
}



undefined4 FUN_005f0270(void)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  float unaff_retaddr;
  undefined1 auStack_10 [8];
  float fStack_8;
  
  iVar2 = FUN_0065a2c0();
  if ((iVar2 != 0) && (*(int **)(in_ECX + 0x3c) != (int *)0x0)) {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x58))("Bip01 NonAccum");
    if (iVar2 != 0) {
      fVar1 = *(float *)(iVar2 + 0x90);
      FUN_005e1500(auStack_10);
      if (fVar1 - fStack_8 <= unaff_retaddr) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_005f0310(byte param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x3c) == 0) {
    return 0;
  }
  if ((param_1 & 0x40) != 0) {
    puVar3 = *(undefined1 **)(in_ECX + 0xb0);
    if (puVar3 == (undefined1 *)0x1) {
      return 1;
    }
    if (puVar3 == &DAT_00000002) {
      return 1;
    }
    if (puVar3 == &DAT_00000006) {
      return 1;
    }
    if (puVar3 == &DAT_00000004) {
      for (piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x68) + 8))();
          (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1])
      {
        iVar2 = FUN_009832e6(*piVar1,0,&PTR_PTR_00b14914,&PTR_PTR_00b14930,0);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x3c) < 0x1e)) {
          return 1;
        }
      }
    }
  }
  if ((*(int **)(in_ECX + 0x58) != (int *)0x0) &&
     ((((iVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2e4))(), iVar2 == 1 ||
        (iVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2e4))(), iVar2 == 3)) ||
       (puVar3 = (undefined1 *)(**(code **)(**(int **)(in_ECX + 0x58) + 0x2e4))(),
       puVar3 == &DAT_00000002)) ||
      ((puVar3 = (undefined1 *)(**(code **)(**(int **)(in_ECX + 0x58) + 0x2e4))(),
       puVar3 == &DAT_00000004 ||
       (iVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2e4))(), iVar2 == 5)))))) {
    return 1;
  }
  return 0;
}



void FUN_005f0410(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *in_ECX;
  int unaff_EBX;
  int unaff_ESI;
  
  iVar3 = (**(code **)(*in_ECX + 0x380))();
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*in_ECX + 0x388))();
    if (iVar3 == 0) {
      return;
    }
    iVar3 = (**(code **)(*in_ECX + 0x170))();
    piVar4 = (int *)0x0;
    if (*(char *)(iVar3 + 4) == '$') {
      piVar4 = in_ECX;
    }
    piVar5 = (int *)(**(code **)(*in_ECX + 0x388))();
  }
  else {
    piVar4 = (int *)(**(code **)(*in_ECX + 0x380))();
    piVar5 = in_ECX;
  }
  if ((piVar4 != (int *)0x0) && (piVar5 != (int *)0x0)) {
    piVar1 = (int *)piVar4[0x16];
    (**(code **)(*piVar4 + 0x164))();
    (**(code **)(*piVar5 + 0x164))();
    if (in_ECX == DAT_00b333c4) {
      FUN_0065d750(0);
    }
    (**(code **)(*piVar4 + 0x38c))(0);
    if (piVar4[0x16] != 0) {
      *(undefined4 *)(piVar4[0x16] + 8) = 0;
    }
    if (piVar4[0x16] != 0) {
      (**(code **)(*(int *)piVar4[0x16] + 0x2c4))(0xf,0);
    }
    (**(code **)(*piVar5 + 900))(0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x370))(piVar4,0,0,0x7f);
    }
    if ((int *)piVar5[0x16] != (int *)0x0) {
      (**(code **)(*(int *)piVar5[0x16] + 0x370))(piVar5,0,0,0x7f);
    }
    if (unaff_ESI != 0) {
      *(undefined4 *)(unaff_ESI + 0xc) = DAT_00b3f9a8;
      *(undefined4 *)(unaff_ESI + 0x10) = DAT_00b3f9ac;
      *(undefined4 *)(unaff_ESI + 0x14) = DAT_00b3f9b0;
    }
    if (unaff_EBX != 0) {
      *(undefined4 *)(unaff_EBX + 0xc) = DAT_00b3f9a8;
      *(undefined4 *)(unaff_EBX + 0x10) = DAT_00b3f9ac;
      *(undefined4 *)(unaff_EBX + 0x14) = DAT_00b3f9b0;
    }
    FUN_005e13d0(0);
    if (piVar5 == DAT_00b333c4) {
      DAT_00b333c4[0x187] = 0;
      iVar3 = piVar4[0xf];
    }
    else {
      iVar3 = piVar5[0xf];
    }
    iVar6 = FUN_0065a2c0();
    DAT_00b2eb3c = DAT_00b2eb3c + 1 & 0xffff;
    if (DAT_00b2eb3c == 0) {
      DAT_00b2eb3c = 10;
    }
    uVar2 = DAT_00b2eb3c;
    if (iVar6 != 0) {
      FUN_005ea350(DAT_00b2eb3c);
    }
    FUN_0088d0e0(iVar3,uVar2,1,0);
    FUN_0065ac20(0);
  }
  return;
}



void FUN_005f05f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5,
                 int param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  int iStack_c;
  undefined4 local_8;
  int local_4;
  
  if (((param_5 == 0) && (param_4 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*param_4 + 0x154))(), iVar2 != 0)) {
    uVar3 = (**(code **)(*param_4 + 0x154))();
    iVar2 = FUN_00480340(uVar3);
    if (iVar2 != 0) {
      param_5 = *(int *)(iVar2 + 0x10);
      iVar2 = FUN_00494f10();
      param_6 = *(int *)(iVar2 + 0x10);
    }
  }
  local_14 = 0x3f000000;
  local_20 = param_2;
  local_18 = 0x42c80000;
  iStack_c = param_5 + in_ECX;
  local_8 = 0;
  local_10 = 0x1f;
  local_f = (undefined1)param_6;
  local_24 = param_1;
  uStack_1c = param_3;
  local_4 = param_5;
  if (*(int **)(in_ECX + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x58) + 0xec))(1);
  }
  if ((param_4 != (int *)0x0) && (cVar1 = (**(code **)(*param_4 + 400))(), cVar1 != '\0')) {
    FUN_006af880();
    return;
  }
  if (param_6 != 6) {
    FUN_006af880();
  }
  FUN_006b0c70(&local_24);
  return;
}



undefined1 FUN_005f0750(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  undefined1 local_1;
  
  local_1 = 0;
  if ((*(int **)(in_ECX + 0x58) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x3d0))(), iVar1 != 0)) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x3d0))();
    for (piVar2 = (int *)(**(code **)(*(int *)(iVar1 + 0x68) + 8))();
        (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0)))); piVar2 = (int *)piVar2[1]) {
      iVar1 = *piVar2;
      if ((iVar1 != 0) &&
         ((*(uint *)(*(int *)(*(int *)(iVar1 + 0xc) + 0x1c) + 0x58) >> 0x12 & 1) != 0)) {
        iVar1 = FUN_009832e6(iVar1,0,&PTR_PTR_00b14914,&PTR_PTR_00b14950,0);
        if (iVar1 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar1 + 0x3c);
        }
        if (iVar3 == in_ECX) {
          *(undefined4 *)(iVar1 + 0x3c) = 0;
          FUN_0068ea10(1);
          local_1 = 1;
        }
      }
    }
    return local_1;
  }
  return 0;
}



void FUN_005f0810(int *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar11;
  code *pcVar12;
  int *piVar13;
  int *piStack_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c3d88;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar3 = false;
  local_2c = 0;
  piStack_30 = (int *)(**(code **)(*in_ECX + 0x380))(uVar5);
  if (piStack_30 == (int *)0x0) {
    if (((DAT_00b333c4[0x78] != 0) && (iVar6 = FUN_004db6b0(), iVar6 != 0)) &&
       (cVar4 = FUN_004de770(DAT_00b333c4,1), cVar4 == '\0')) {
      DAT_00b333c4[0x78] = 0;
    }
LAB_005f08fa:
    if (in_ECX != DAT_00b333c4) goto LAB_005f0941;
    if ((DAT_00b333c4[0x78] != 0) &&
       (cVar4 = (**(code **)(*(int *)DAT_00b333c4[0x78] + 0x198))(0), cVar4 != '\0')) {
      DAT_00b333c4[0x78] = 0;
    }
    if (piStack_30 == (int *)0x0) {
      piStack_30 = (int *)DAT_00b333c4[0x78];
      goto LAB_005f0941;
    }
LAB_005f0945:
    local_2c = FUN_004d6670();
  }
  else {
    bVar3 = true;
    if (in_ECX == DAT_00b333c4) {
      iVar6 = FUN_004db6b0();
      if ((iVar6 == 0) || (cVar4 = FUN_004de770(DAT_00b333c4,1), cVar4 != '\0')) {
        iVar6 = (**(code **)(*in_ECX + 0x380))();
        DAT_00b333c4[0x78] = iVar6;
        goto LAB_005f08fa;
      }
      if (DAT_00b333c4 == in_ECX) {
        FUN_005f0410();
        goto LAB_005f0d46;
      }
    }
LAB_005f0941:
    if (piStack_30 != (int *)0x0) goto LAB_005f0945;
  }
  iStack_28 = 0;
  iStack_24 = 0;
  FUN_0068a9f0();
  uStack_4 = 0;
  uVar7 = FUN_004d6670();
  uVar8 = FUN_006ecc80(uVar7);
  uVar9 = (**(code **)(*param_1 + 0x174))(uVar8);
  FUN_0068b030(DAT_00b333c4,uVar9,uVar8,uVar7);
  FUN_00689bb0(&iStack_28);
  (**(code **)(*in_ECX + 0x174))();
  FUN_004d8af0();
  if ((iStack_24 == 0) && (iStack_28 == 0)) {
LAB_005f0ca1:
    if (bVar3) {
      FUN_005f0410();
      iVar6 = FUN_006ecc80();
      uVar7 = FUN_004d6670();
      puVar10 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
      FUN_004d8a30(*puVar10,puVar10[1],puVar10[2]);
      if ((iVar6 == 0) || (cVar4 = FUN_0043f8c0(iVar6,0), cVar4 == '\0')) {
        uVar8 = 0x7f7fffff;
      }
      else {
        FUN_004d8a10(param_1[10]);
        uVar8 = 0;
      }
      FUN_004d89d0(uVar8);
      FUN_004dd4b0(piStack_30,iVar6,uVar7);
    }
  }
  else {
    if (((char)DAT_00b333c4[0x45] == '\0') && (in_ECX == DAT_00b333c4)) {
      *(undefined1 *)(DAT_00b333c4 + 0x45) = 1;
    }
    if ((iStack_24 == 0) && (iStack_28 == 0)) goto LAB_005f0ca1;
    bVar2 = false;
    param_1 = &iStack_28;
    if (bVar3) {
      FUN_005f0410();
    }
    do {
      if ((param_1[1] == 0) && (*param_1 == 0)) break;
      piVar1 = (int *)*param_1;
      FUN_004d7630();
      FUN_0042b410();
      FUN_004d8af0();
      FUN_006899c0();
      if (bVar2) {
        iVar6 = FUN_004d6670();
        if (iVar6 != 0) {
          pcVar12 = FUN_005e1260;
          uVar11 = 0x460ca000;
          piVar13 = in_ECX;
          uVar7 = (**(code **)(*piVar1 + 0x174))(0x460ca000,FUN_005e1260);
          uVar9 = 0x460ca000;
          uVar8 = (**(code **)(*piVar1 + 0x174))(0x460ca000,uVar7);
          FUN_004f0750(uVar8,uVar9,uVar7,uVar11,pcVar12,piVar13);
        }
        if (DAT_00b3b778 == (int *)0x0) {
          DAT_00b3b778 = piVar1;
          FUN_004d7630();
          DAT_00b3b778 = (int *)FUN_0042b410();
          FUN_004d7630();
          iVar6 = FUN_0042b460();
          uVar7 = FUN_0042b470();
        }
        else {
          iVar6 = FUN_006ecc80();
          uVar7 = FUN_004d6670();
        }
        if (DAT_00b333c4 == in_ECX) {
          if (DAT_00b333c4[0x78] != 0) {
            puVar10 = (undefined4 *)(**(code **)(*DAT_00b3b778 + 0x174))();
            FUN_004d8a30(*puVar10,puVar10[1],puVar10[2]);
            if ((iVar6 == 0) || (cVar4 = FUN_0043f8c0(iVar6,0), cVar4 == '\0')) {
              FUN_004d89d0(0x7f7fffff);
            }
            else {
              FUN_004d8a10(DAT_00b3b778[10]);
            }
            FUN_004dd4b0(DAT_00b333c4[0x78],iVar6,uVar7);
            cVar4 = FUN_0043f8c0(iVar6,1);
            if (cVar4 != '\0') {
              (**(code **)(*(int *)DAT_00b333c4[0x78] + 0x178))(0);
            }
            break;
          }
        }
        else if (piStack_30 != (int *)0x0) {
          puVar10 = (undefined4 *)(**(code **)(*DAT_00b3b778 + 0x174))();
          FUN_004d8a30(*puVar10,puVar10[1],puVar10[2]);
          if ((iVar6 == 0) || (cVar4 = FUN_0043f8c0(iVar6,0), cVar4 == '\0')) {
            FUN_004d89d0(0x7f7fffff);
          }
          else {
            FUN_004d8a10(DAT_00b3b778[10]);
          }
          FUN_004dd4b0(piStack_30,iVar6,uVar7);
          cVar4 = FUN_0043f8c0(iVar6,1);
          if (cVar4 != '\0') {
            (**(code **)(*piStack_30 + 0x178))(0);
          }
          break;
        }
        bVar2 = false;
      }
      else if ((piStack_30 == (int *)0x0) || (iVar6 = FUN_004d8af0(), local_2c != iVar6)) {
        param_1 = (int *)param_1[1];
      }
      else {
        bVar2 = true;
      }
    } while (param_1 != (int *)0x0);
  }
  uStack_4 = 0xffffffff;
  FUN_0068aa10();
LAB_005f0d46:
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_005f0d60(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined1 uVar5;
  float10 fVar6;
  int iStack_18;
  undefined8 uStack_14;
  
  uVar5 = 0;
  if (in_ECX == DAT_00b333c4) {
    return 0;
  }
  if (DAT_00b14e90 != '\0') {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if (iVar2 != 0) {
      (**(code **)(*in_ECX + 400))();
    }
    fVar6 = (float10)FUN_004d7570();
    uStack_14 = (double)fVar6;
    iStack_18 = FUN_00519c10();
    if ((double)iStack_18 < uStack_14 == ((double)iStack_18 == uStack_14)) {
      cVar1 = (**(code **)(*in_ECX + 0x198))(0);
      if (((cVar1 == '\0') && (in_ECX[0x16] != 0)) &&
         (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar2 == 0)) {
        uVar4 = *(undefined4 *)(DAT_00b333cc + 0xdc);
        uVar3 = (**(code **)(*in_ECX + 0x154))();
        uVar3 = FUN_00560920(&DAT_00b3fab0,uVar3);
        cVar1 = FUN_0047f7b0(uVar3,uVar4);
        if (cVar1 != '\0') {
          fVar6 = (float10)FUN_004d7e90(DAT_00b333c4,0);
          if (fVar6 < (float10)700.0 != (fVar6 == (float10)700.0)) {
            uVar4 = (**(code **)(*DAT_00b333c4 + 0x174))();
            iVar2 = (int)&uStack_14 + 4;
            (**(code **)(*in_ECX + 0x174))(iVar2,uVar4);
            FUN_004121a0(iVar2,uVar4);
            fVar6 = (float10)FUN_00683cb0((int)&uStack_14 + 4);
            fVar6 = (float10)FUN_00683d80(DAT_00b333c4,(float)fVar6,&iStack_18);
            if ((float)ABS(fVar6) < 1.5707964) {
              uVar5 = 1;
            }
          }
        }
      }
      return uVar5;
    }
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005f0ee0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  int *in_ECX;
  float10 fVar6;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [12];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&fStack_64;
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x170))();
    if ((*(char *)(iVar2 + 4) == '$') && (cVar1 = (**(code **)(*param_1 + 0x278))(), cVar1 == '\0'))
    {
      return;
    }
    iVar2 = param_1[0xf];
    if (iVar2 != 0) {
      iVar3 = (**(code **)(*in_ECX + 0x154))();
      fStack_58 = DAT_00b3f9a8;
      fStack_54 = DAT_00b3f9ac;
      fStack_50 = DAT_00b3f9b0;
      fStack_64 = DAT_00b3f9a8;
      fStack_60 = DAT_00b3f9ac;
      fStack_5c = DAT_00b3f9b0;
      if (iVar3 != 0) {
        uVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x310))();
        pfVar5 = (float *)FUN_0053d4b0(&fStack_4c,uVar4);
        fStack_58 = *pfVar5;
        fStack_54 = pfVar5[1];
        fStack_50 = pfVar5[2];
        uVar4 = FUN_005e6a40(&fStack_4c);
        pfVar5 = (float *)FUN_0053d4b0(auStack_3c,uVar4);
        fStack_64 = *pfVar5;
        fStack_60 = pfVar5[1];
        fStack_5c = pfVar5[2];
      }
      fStack_64 = fStack_58 - fStack_64;
      fStack_60 = fStack_54 - fStack_60;
      fStack_5c = fStack_50 - fStack_5c;
      fStack_4c = fStack_64;
      fStack_48 = fStack_60;
      fStack_44 = fStack_5c;
      FUN_0043f350();
      fStack_64 = fStack_58 + fStack_64 * 2048.0;
      fStack_60 = fStack_60 * 2048.0 + fStack_54;
      fStack_5c = fStack_5c * 2048.0 + fStack_50;
      fVar6 = (float10)FUN_00547770(param_2);
      fStack_40 = (float)fVar6;
      FUN_008b8700(iVar2);
      FUN_0088d070(iVar2,1,1,0);
      FUN_00707370(0,0);
      fStack_30 = fStack_64 * 0.14287673;
      fStack_2c = fStack_60 * 0.14287673;
      fStack_28 = fStack_5c * 0.14287673;
      FUN_005364b0(iVar2,&fStack_30,fStack_40);
    }
  }
  return;
}



undefined4 * FUN_005f10e0(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  float10 fVar5;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    uVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c0))();
    if ((uVar2 & 0x800) != 0) {
      DAT_00b3b7c4 = DAT_00b3b7c4 + 1;
      if (4 < DAT_00b3b7c4) {
        DAT_00b3b7c4 = 0;
      }
      iVar3 = DAT_00b3b7c4;
      (&DAT_00b3b788)[DAT_00b3b7c4 * 3] = *(undefined4 *)(in_ECX + 0x2c);
      (&DAT_00b3b78c)[iVar3 * 3] = *(undefined4 *)(in_ECX + 0x30);
      (&DAT_00b3b790)[iVar3 * 3] = *(undefined4 *)(in_ECX + 0x34);
      iVar3 = FUN_006ecc80();
      if (iVar3 != 0) {
        iVar3 = FUN_006ecc80();
        if ((*(byte *)(iVar3 + 0x24) >> 1 & 1) != 0) {
          FUN_006ecc80();
          fVar4 = (float10)FUN_004cace0();
          fVar5 = (float10)FUN_005e0660();
          iVar3 = DAT_00b3b7c4;
          fVar1 = (float)(fVar5 * (float10)0.75) + (float)(&DAT_00b3b790)[DAT_00b3b7c4 * 3];
          if (fVar1 < (float)(fVar4 - (float10)5.0)) {
            (&DAT_00b3b790)[DAT_00b3b7c4 * 3] = fVar1;
            return &DAT_00b3b788 + iVar3 * 3;
          }
          (&DAT_00b3b790)[DAT_00b3b7c4 * 3] = (float)(fVar4 - (float10)5.0);
          return &DAT_00b3b788 + iVar3 * 3;
        }
      }
      return &DAT_00b3b788 + DAT_00b3b7c4 * 3;
    }
  }
  return (undefined4 *)(in_ECX + 0x2c);
}



void FUN_005f11f0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 auStack_6c [4];
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined1 auStack_48 [36];
  undefined1 auStack_24 [36];
  
  iVar2 = DAT_00b3bb0c;
  if ((in_ECX == DAT_00b333c4) && (DAT_00b3bb0c != 0)) {
    *param_1 = *(int *)(DAT_00b3bb0c + 0x88);
    param_1[1] = *(int *)(iVar2 + 0x8c);
    param_1[2] = *(int *)(iVar2 + 0x90);
  }
  else {
    *param_1 = in_ECX[0xb];
    param_1[1] = in_ECX[0xc];
    param_1[2] = in_ECX[0xd];
    fVar4 = (float10)FUN_005e40c0();
    param_1[2] = (int)(float)(fVar4 + (float10)(float)param_1[2]);
  }
  fVar4 = (float10)(**(code **)(*in_ECX + 0x1e0))();
  FUN_0070fdd0((float)fVar4);
  if (in_ECX == DAT_00b333c4) {
    fVar4 = (float10)FUN_004a9720();
    FUN_0070fd30((float)fVar4);
    puVar1 = (undefined4 *)FUN_007100a0(auStack_24,auStack_48);
    puVar3 = auStack_6c;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *param_2 = auStack_6c[1];
  param_2[1] = uStack_5c;
  param_2[2] = uStack_50;
  FUN_0043f350();
  return;
}



void FUN_005f12d0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  iVar2 = FUN_0065a2c0();
  if (iVar2 == 0) {
    return;
  }
  cVar1 = (**(code **)(*in_ECX + 0x334))(1);
  if ((cVar1 == '\0') && (iVar3 = (**(code **)(*in_ECX + 0x284))(4), iVar3 != 0)) {
    *(uint *)(iVar2 + 500) = *(uint *)(iVar2 + 500) & 0xffffbfff;
    return;
  }
  *(uint *)(iVar2 + 500) = *(uint *)(iVar2 + 500) | 0x4000;
  return;
}



undefined4 FUN_005f1330(void)

{
  char cVar1;
  int *piVar2;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x78))();
  if (cVar1 == '\0') {
    piVar2 = (int *)in_ECX[0x16];
    if ((piVar2[2] != 0) &&
       ((cVar1 = *(char *)(piVar2[2] + 0x20), cVar1 != '\x05' || (piVar2[1] == 0)))) {
      if (cVar1 != '\x06') {
        return 0;
      }
      if (piVar2[1] == 0) {
        return 0;
      }
    }
    cVar1 = (**(code **)(*piVar2 + 0x478))();
    if (cVar1 == '\0') {
      piVar2 = (int *)(**(code **)(*in_ECX + 0x154))();
      if (((piVar2 != (int *)0x0) && (cVar1 = (**(code **)(*piVar2 + 0x98))(), cVar1 != '\0')) &&
         (cVar1 = FUN_004a0300(*(undefined4 *)(DAT_00b333cc + 0xdc),0x3f4ccccd), cVar1 == '\0')) {
        return 1;
      }
    }
    else {
      (**(code **)(*(int *)in_ECX[0x16] + 0x474))(0);
    }
  }
  return 0;
}



void FUN_005f13d0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c2834;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6e074;
  in_ECX[6] = &PTR_FUN_00a6e06c;
  in_ECX[0x17] = &PTR_LAB_00a6e024;
  in_ECX[0x1a] = &PTR_LAB_00a6dff4;
  local_4 = 3;
  if (((uint)in_ECX[2] >> 0xe & 1) == 0) {
    FUN_0065def0(in_ECX);
    if (((int *)in_ECX[0x16] != (int *)0x0) &&
       (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x1b8))(), iVar3 != 0)) {
      *(undefined1 *)(iVar3 + 0x10) = 1;
    }
    for (piVar1 = in_ECX + 0x29; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]
        ) {
      FUN_00401f20(*piVar1);
    }
    FUN_004526e0();
    FUN_00642b40(in_ECX);
    FUN_005eae70();
    if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
      if (DAT_00b3bf80 != 0) {
        FUN_006826d0(in_ECX);
      }
      FUN_0065a050(1);
      FUN_00679c10(in_ECX);
      FUN_0067bf00(in_ECX);
      FUN_00676f90(in_ECX);
      if ((int *)in_ECX[0x16] != (int *)0x0) {
        iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
        if ((iVar3 == 1) || (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar3 == 0)) {
          iVar3 = FUN_007b7650();
          if (iVar3 != 0) {
            FUN_007ad1e0(in_ECX[3]);
          }
          FUN_005e4fc0();
        }
        FUN_005f0750();
      }
    }
    FUN_00674e10(in_ECX);
    FUN_005e7b90();
    FUN_0065c6a0();
    TESObjectREFR_Set3D(0);
  }
  local_4._0_1_ = 2;
  FUN_0065ccc0(uVar2);
  local_4._0_1_ = 1;
  FUN_006a1d60();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00699160();
  local_4 = 0xffffffff;
  FUN_00659f90();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005f1590(int *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (in_ECX[0x16] != 0) {
    iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))();
    if (((iVar2 != 0) && (*(char *)(iVar2 + 0x20) == '\x12')) &&
       (*(int **)(in_ECX[0x16] + 8) != param_1)) {
      FUN_005eae70();
    }
    if (in_ECX[0x16] != 0) {
      (**(code **)(*(int *)in_ECX[0x16] + 0x194))();
      iVar2 = (**(code **)(*in_ECX + 0x380))();
      if (((iVar2 == 0) && ((char)param_1[8] != '\x18')) &&
         (((char)param_1[8] != '\x15' && (iVar2 = (**(code **)(*in_ECX + 0x18c))(), iVar2 != 0)))) {
        if ((((char)param_1[8] != '\x0f') && ((char)param_1[8] != '\x12')) ||
           (iVar2 = (**(code **)(*in_ECX + 0x18c))(), iVar2 != 4)) {
          (**(code **)(*in_ECX + 800))();
        }
        if ((char)param_1 != '\0') {
          if (param_2 == '\0') {
            return;
          }
          cVar1 = (char)param_1[8];
          if (cVar1 == '\x13') {
            return;
          }
          if (cVar1 == '\x12') {
            return;
          }
          if (cVar1 == '\x11') {
            return;
          }
          piVar3 = (int *)FUN_0041fb20();
          if (param_1 == piVar3) {
            return;
          }
          (**(code **)(*param_1 + 0x10))(1);
          return;
        }
      }
      if ((param_1 != (int *)0x0) && (param_2 != '\0')) {
        FUN_00566830(1);
      }
      if ((char)param_1 == '\0') {
        fVar5 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x15c))();
        if ((float10)0.0 < fVar5) {
          iVar2 = *(int *)in_ECX[0x16];
          fVar5 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x15c))();
          (**(code **)(iVar2 + 0x160))((float)(fVar5 * (float10)-1.0));
          (**(code **)(*(int *)in_ECX[0x16] + 0x194))();
        }
        iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x174))();
        if (iVar2 != 0) {
          iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x174))();
          if ((*(char *)(iVar2 + 0x20) < '\x15') || ('\x17' < *(char *)(iVar2 + 0x20))) {
            cVar1 = FUN_005e1030();
            if (cVar1 != '\0') {
              piVar3 = (int *)(**(code **)(*in_ECX + 0x380))();
              (**(code **)(*piVar3 + 0x38c))(0);
              (**(code **)(*in_ECX + 900))(0);
            }
            (**(code **)(*(int *)in_ECX[0x16] + 0x178))(0);
          }
        }
        if (((*(int *)(in_ECX[0x16] + 8) != 0) &&
            (((char)param_1[8] == '\x01' || (*(char *)(*(int *)(in_ECX[0x16] + 8) + 0x20) != '\x01')
             ))) && (cVar1 = FUN_005660a0(), cVar1 != '\0')) {
          if ((char)param_1[8] == '\x01') {
            piVar3 = *(int **)(in_ECX[0x16] + 8);
            piVar4 = (int *)FUN_0041fb20();
            if (piVar3 == piVar4) {
              (**(code **)(*param_1 + 0x10))(1);
              param_1 = *(int **)(in_ECX[0x16] + 8);
            }
            else if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x10))(1);
            }
          }
          else {
            piVar3 = *(int **)(in_ECX[0x16] + 8);
            piVar4 = (int *)FUN_0041fb20();
            if ((piVar3 != piVar4) && (piVar3 != (int *)0x0)) {
              (**(code **)(*piVar3 + 0x10))(1);
            }
          }
        }
        *(int **)(in_ECX[0x16] + 8) = param_1;
        *(undefined4 *)(in_ECX[0x16] + 4) = 0;
        FUN_005e8de0(param_1);
        iVar2 = (**(code **)(*in_ECX + 0x164))();
        if ((iVar2 != 0) &&
           (((iVar2 = (**(code **)(*in_ECX + 0x18c))(), iVar2 == 0 ||
             (iVar2 = (**(code **)(*in_ECX + 0x18c))(), iVar2 == 9)) ||
            (iVar2 = (**(code **)(*in_ECX + 0x18c))(), iVar2 == 4)))) {
          uVar7 = 0;
          uVar6 = 1;
          (**(code **)(*in_ECX + 0x164))(1,0);
          FUN_00475440(uVar6,uVar7);
        }
      }
      else {
        iVar2 = (**(code **)(*in_ECX + 0x380))();
        if ((((iVar2 != 0) && (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))(), iVar2 != 4))
            && ((char)param_1[8] != '\x16')) && ((char)param_1[8] != '\x17')) {
          piVar3 = (int *)(**(code **)(*in_ECX + 0x380))();
          (**(code **)(*piVar3 + 0x38c))(0);
          (**(code **)(*in_ECX + 900))(0);
        }
        (**(code **)(*(int *)in_ECX[0x16] + 0x178))(param_1);
        (**(code **)(*(int *)in_ECX[0x16] + 0x17c))(0);
        (**(code **)(*in_ECX + 0x40))(0x80000);
      }
      (**(code **)(*(int *)in_ECX[0x16] + 0xd0))(0);
      FUN_005e7be0();
    }
  }
  return;
}



void FUN_005f1910(undefined4 param_1)

{
  FUN_005ead00(param_1);
  FUN_009828c0();
  FUN_009828c0();
  return;
}



void FUN_005f1970(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  
  piVar1 = (int *)in_ECX[0x16];
  if (piVar1 == (int *)0x0) {
    FUN_005f1910(param_1);
    return;
  }
  if (param_1 == 9) {
    (**(code **)(*in_ECX + 0x288))(0x28);
    piVar1 = (int *)in_ECX[0x16];
    iVar3 = (**(code **)(*in_ECX + 0x170))();
    iVar4 = 0;
    if ((iVar3 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
      iVar4 = iVar3;
    }
    (**(code **)(*piVar1 + 0x268))(iVar4,9);
    FUN_009828c0();
    return;
  }
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  iVar4 = 0;
  if ((iVar3 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
    iVar4 = iVar3;
  }
  (**(code **)(*piVar1 + 0x268))(iVar4,param_1);
  return;
}



float10 FUN_005f1a60(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  float unaff_EBX;
  float10 fVar5;
  
  piVar1 = (int *)in_ECX[0x16];
  if (piVar1 == (int *)0x0) {
    iVar4 = FUN_005f1910(param_1);
    return (float10)iVar4;
  }
  if (param_1 == 9) {
    (**(code **)(*in_ECX + 0x288))(0x28);
    piVar1 = (int *)in_ECX[0x16];
    iVar3 = (**(code **)(*in_ECX + 0x170))();
    iVar4 = 0;
    if ((iVar3 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
      iVar4 = iVar3;
    }
    fVar5 = (float10)(**(code **)(*piVar1 + 0x26c))(iVar4,9);
    return (float10)(float)(fVar5 * (float10)unaff_EBX);
  }
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  iVar4 = 0;
  if ((iVar3 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
    iVar4 = iVar3;
  }
  fVar5 = (float10)(**(code **)(*piVar1 + 0x26c))(iVar4,param_1);
  return fVar5;
}



undefined4 FUN_005f1b50(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *in_ECX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  code *pcVar14;
  undefined4 uVar15;
  float fVar16;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c285b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00674850(in_ECX);
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 8))(uVar3);
    if (iVar4 == 1) goto LAB_005f2395;
  }
  if ((((int *)in_ECX[0x16] != (int *)0x0) &&
      (iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar4 == 0)) &&
     (iVar4 = FUN_007b7650(), iVar4 != 0)) {
    FUN_007ad1e0(in_ECX[3]);
  }
  piVar7 = (int *)in_ECX[0x16];
  if (((piVar7 != (int *)0x0) && (iVar4 = piVar7[2], iVar4 != 0)) &&
     (((iVar6 = *(int *)(iVar4 + 0x18), iVar5 = (**(code **)(*piVar7 + 0x180))(),
       *(int *)((&PTR_DAT_00b152b0)[iVar6] + iVar5 * 4) == 0x2b &&
       (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0xcc))(), iVar6 == DAT_00b333c4)) ||
      ((*(char *)(iVar4 + 0x20) == '\x12' &&
       (iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0xcc))(), iVar4 != DAT_00b333c4)))))) {
    FUN_005eae70();
  }
  if (((((int *)in_ECX[0x16] != (int *)0x0) &&
       (iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))(), iVar4 != 0)) &&
      (*(char *)(iVar4 + 0x20) == '\x12')) &&
     (cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x1cc))(), cVar1 != '\0')) {
    FUN_005eae70();
  }
  iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x174))();
  if (((((iVar4 != 0) && (cVar1 = FUN_005660a0(), cVar1 != '\0')) &&
       ((iVar4 = *(int *)(in_ECX[0x16] + 8), iVar4 != 0 &&
        ((*(char *)(iVar4 + 0x20) != '\x0f' && ((*(uint *)(iVar4 + 0x1c) >> 9 & 1) != 0)))))) &&
      ((*(byte *)(iVar4 + 0x1c) & 1) != 0)) && (iVar4 = FUN_006ecc80(), iVar4 != 0)) {
    piVar7 = in_ECX;
    FUN_006ecc80();
    cVar1 = FUN_004caac0(piVar7);
    if (cVar1 != '\0') {
      FUN_005eae70();
    }
  }
  iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
  cVar1 = (**(code **)(*in_ECX + 0x1f8))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*in_ECX + 0x198))(0);
    if ((cVar1 != '\0') && (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar6 == 0)) {
      (**(code **)(*in_ECX + 0x9c))(1);
    }
  }
  else {
    FUN_005e9e70();
    (**(code **)(*(int *)in_ECX[0x16] + 0x23c))();
    FUN_004d7190();
  }
  iVar6 = (**(code **)(*in_ECX + 0x380))();
  while ((((iVar6 == 0 && (iVar6 = (**(code **)(*in_ECX + 0x18c))(), iVar6 != 0)) &&
          (iVar6 = (**(code **)(*in_ECX + 0x18c))(), iVar6 != 4)) &&
         ((iVar6 = (**(code **)(*in_ECX + 0x18c))(), iVar6 != 9 &&
          (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x378))(), iVar6 != 0))))) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x1b0))();
    iVar6 = (**(code **)(*in_ECX + 0x380))();
  }
  iVar6 = (**(code **)(*in_ECX + 0x380))();
  if (((iVar6 == 0) && (iVar6 = (**(code **)(*in_ECX + 0x18c))(), iVar6 != 0)) &&
     ((iVar6 = (**(code **)(*in_ECX + 0x18c))(), iVar6 != 4 &&
      ((iVar6 = (**(code **)(*in_ECX + 0x18c))(), iVar6 != 9 &&
       (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x378))(), iVar6 == 0)))))) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x370))();
  }
  if ((*(char *)(DAT_00b33a98 + 0xcd4) == '\0') && (cVar1 = FUN_0045a500(), cVar1 == '\0')) {
    FUN_006765a0(in_ECX);
  }
  FUN_00674550(in_ECX,iVar4);
  if (in_ECX[0x2c] == 6) {
    FUN_005e6680(0);
    (**(code **)(*(int *)in_ECX[0x16] + 0xa0))(0);
  }
  if ((int *)in_ECX[0x16] == (int *)0x0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x388))();
  }
  iVar6 = FUN_00401f00(0x18c);
  puStack_8 = (undefined1 *)0x0;
  if (iVar6 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_0064b400();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar7 + 4))(in_ECX[0x16]);
  if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x16])(1);
  }
  in_ECX[0x16] = (int)piVar7;
  cVar2 = (**(code **)(*piVar7 + 0x210))();
  if ((cVar2 != '\0') && ((int *)in_ECX[0x16] != (int *)0x0)) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x300))(1);
  }
  iVar6 = (**(code **)(*in_ECX + 0x154))();
  if ((((iVar6 != 0) && (iVar4 == 1)) &&
      (iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))(), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*in_ECX + 0x380))(), iVar5 == 0)) {
    FUN_0088ce30(iVar6,0,1,0);
  }
  FUN_00673a90(in_ECX,1,1,0,0);
  iVar6 = FUN_0041e6f0();
  if ((iVar6 != 0) && (iVar4 != 0)) {
    iVar4 = *(int *)in_ECX[0x16];
    uVar15 = 0;
    uVar8 = FUN_00486790(9,0);
    (**(code **)(iVar4 + 0x104))(uVar8,uVar15);
    iVar4 = *(int *)in_ECX[0x16];
    uVar8 = FUN_00486790(0xc,0);
    (**(code **)(iVar4 + 0x10c))(uVar8);
    iVar4 = *(int *)in_ECX[0x16];
    uVar8 = FUN_00486790(0xd,0);
    (**(code **)(iVar4 + 0x110))(uVar8);
    iVar4 = *(int *)in_ECX[0x16];
    uVar8 = FUN_00486790(0xe,0);
    (**(code **)(iVar4 + 0x108))(uVar8);
    iVar6 = FUN_00486790(9,0);
    fVar10 = (float10)FUN_00612a90();
    (**(code **)(*(int *)in_ECX[0x16] + 0x328))((float)fVar10);
    iVar4 = unaff_EBP;
    if (iVar6 != 0) {
      FUN_00484470();
      FUN_00401f20(iVar6);
    }
  }
  if ((DAT_00b33a98 != 0) && (*(char *)(DAT_00b33a98 + 0xcd4) == '\0')) {
    if (cVar1 != '\0') {
      (**(code **)(*(int *)in_ECX[0x16] + 0x18))();
    }
    cVar1 = (**(code **)(*in_ECX + 0x334))(1);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*in_ECX + 0x78))();
      if (((cVar1 != '\0') && (*(char *)((int)in_ECX + 0xca) != '\0')) ||
         (((cVar1 = FUN_005e3220(), cVar1 != '\0' || (cVar1 = FUN_005e30a0(), cVar1 != '\0')) &&
          (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0xcc))(), iVar6 == DAT_00b333c4)))) {
        iVar6 = *(int *)in_ECX[0x16];
        fVar10 = (float10)FUN_00402bd0();
        (**(code **)(iVar6 + 0x1c))((float)(fVar10 - (float10)3.0));
        FUN_00674550(in_ECX,1);
        uVar12 = 0;
        uVar9 = 0;
        uVar15 = 0;
        uVar8 = FUN_00659a00(0,0,0);
        FUN_00673a90(in_ECX,uVar8,uVar15,uVar9,uVar12);
      }
    }
    else {
      iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x3d0))();
      if (iVar6 == DAT_00b333c4) {
        iVar6 = *(int *)in_ECX[0x16];
        fVar10 = (float10)FUN_00402bd0();
        (**(code **)(iVar6 + 0x1c))((float)(fVar10 - (float10)0.5));
      }
      else {
        cVar1 = FUN_005e6cd0(0);
        if (((cVar1 == '\0') && (cVar1 = (**(code **)(*in_ECX + 0x350))(), cVar1 == '\0')) &&
           (iVar6 = (**(code **)(*in_ECX + 0x338))(), iVar6 != 0)) {
          iVar6 = (**(code **)(*in_ECX + 0x338))();
          if (*(int *)(iVar6 + 0x58) != 0) {
            (**(code **)(*in_ECX + 0x338))();
            iVar6 = FUN_00659a00();
            if (iVar6 == 0) {
              iVar6 = (**(code **)(*in_ECX + 0x338))();
              if (((iVar6 == DAT_00b333c4) && (*(int *)(DAT_00b333c4 + 0x110) < DAT_00b37d18)) &&
                 (cVar1 = FUN_00680ee0(), cVar1 != '\0')) {
                (**(code **)(*(int *)in_ECX[0x16] + 0x194))();
                iVar6 = *(int *)in_ECX[0x16];
                fVar10 = (float10)FUN_00402bd0();
                (**(code **)(iVar6 + 0x1c))((float)(fVar10 - (float10)0.30000001192092896));
                *(int *)(DAT_00b333c4 + 0x110) = *(int *)(DAT_00b333c4 + 0x110) + 1;
                fVar16 = 3.0;
                if (*(int *)(DAT_00b333c4 + 0x570) != 0) {
                  uVar8 = (**(code **)(**(int **)(DAT_00b333c4 + 0x570) + 0x174))();
                  puVar11 = &stack0xffffffd4;
                  (**(code **)(*in_ECX + 0x174))(puVar11,uVar8);
                  FUN_004121a0(puVar11,uVar8);
                  fVar10 = (float10)FUN_00404c90();
                  fVar16 = (float)(fVar10 / (float10)300.0);
                }
                (**(code **)(*(int *)in_ECX[0x16] + 0x164))(fVar16);
              }
              else {
                (**(code **)(*in_ECX + 0x340))(0);
                FUN_005eae70();
              }
              goto LAB_005f22d4;
            }
          }
          iVar6 = (**(code **)(*in_ECX + 0x330))();
          if (iVar6 != 0) {
            iVar6 = DAT_00b333c4;
            (**(code **)(*in_ECX + 0x330))(DAT_00b333c4);
            FUN_006162d0(iVar6);
          }
        }
      }
    }
LAB_005f22d4:
    pcVar14 = *(code **)(*in_ECX + 0x35c);
    *(undefined1 *)((int)in_ECX + 0xca) = 1;
    cVar1 = (*pcVar14)();
    if (((cVar1 != '\0') &&
        (piVar7 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0xcc))(), piVar7 != (int *)0x0)) &&
       ((cVar1 = (**(code **)(*piVar7 + 400))(), cVar1 != '\0' &&
        (cVar1 = (**(code **)(*piVar7 + 0x354))(), cVar1 == '\0')))) {
      FUN_005eae70();
      pcVar14 = FUN_00645a30;
      uVar13 = 0x459c4000;
      piVar7 = in_ECX;
      uVar8 = (**(code **)(*in_ECX + 0x174))(0x459c4000,FUN_00645a30);
      uVar12 = 0x459c4000;
      uVar15 = (**(code **)(*in_ECX + 0x174))(0x459c4000,uVar8);
      uVar9 = FUN_006ecc80(uVar15);
      FUN_00446b90(uVar9,uVar15,uVar12,uVar8,uVar13,pcVar14,piVar7);
    }
  }
  cVar1 = (**(code **)(*in_ECX + 0x198))(0);
  if ((cVar1 == '\0') && ((iVar4 == 3 || (iVar4 == 2)))) {
    FUN_005eda20(0);
  }
LAB_005f2395:
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined4 FUN_005f23b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 - 0xcU < 0x15) {
    uVar1 = FUN_005f1910(param_1);
    uVar1 = FUN_0056a300(uVar1);
  }
  return uVar1;
}



undefined4 FUN_005f23e0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  if (in_ECX[0x16] == 0) {
    return 0;
  }
  iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
  iVar3 = FUN_0065ad00();
  if (iVar2 == iVar3) {
    return 1;
  }
  if ((iVar2 == 0) && (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x47c))(), iVar2 != 0)) {
    iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x47c))();
    if (iVar2 == 6) goto LAB_005f250c;
    iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x47c))();
    if (iVar2 == 5) {
      FUN_004e4690();
      return 0;
    }
  }
  switch(iVar3) {
  case 0:
    (**(code **)(*in_ECX + 0x1a4))();
    return 1;
  case 1:
    (**(code **)(*in_ECX + 0x1b0))();
    return 1;
  case 2:
    cVar1 = FUN_005f0750();
    iVar2 = *in_ECX;
    if (cVar1 == '\0') {
      (**(code **)(iVar2 + 0x1ac))();
      return 1;
    }
    break;
  case 3:
    cVar1 = FUN_004db4a0();
    if (cVar1 == '\0') {
      cVar1 = FUN_005f0750();
      if ((cVar1 == '\0') && (iVar2 = FUN_006ecc80(), iVar2 != 0)) {
        FUN_005e4b00();
        FUN_006a2160();
        FUN_005eda20(0);
        FUN_00463a90(in_ECX);
      }
LAB_005f250c:
      (**(code **)(*in_ECX + 0x10))(1);
      return 0;
    }
    cVar1 = FUN_005f0750();
    iVar2 = *in_ECX;
    if (cVar1 == '\0') {
      (**(code **)(iVar2 + 0x1a8))();
      return 1;
    }
    break;
  default:
    return 1;
  }
  (**(code **)(iVar2 + 0x10))(1);
  return 0;
}



void FUN_005f2530(void)

{
  float fVar1;
  int *in_ECX;
  undefined4 unaff_ESI;
  float10 fVar2;
  float local_c;
  
  local_c = 0.0;
  if (in_ECX == DAT_00b333c4) {
    fVar2 = (float10)FUN_0065d270(0,8);
  }
  else {
    if ((int *)in_ECX[0x16] == (int *)0x0) goto LAB_005f2568;
    fVar2 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x468))(8);
  }
  local_c = (float)fVar2;
LAB_005f2568:
  FUN_005f1910(8);
  fVar2 = (float10)(**(code **)(*in_ECX + 0x288))(8);
  if (fVar2 < (float10)local_c) {
    local_c = SUB84((double)local_c,0);
    fVar2 = (float10)(**(code **)(*in_ECX + 0x288))(8);
    fVar1 = (float)((float10)(double)CONCAT44(local_c,unaff_ESI) - fVar2);
    if (0.0 < fVar1) {
      (**(code **)(*in_ECX + 0x2a4))(8,fVar1,0);
      return;
    }
  }
  return;
}



void FUN_005f25f0(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  float unaff_ESI;
  float10 extraout_ST0;
  float10 fVar3;
  
  iVar1 = (**(code **)(in_ECX[0x17] + 0x30))();
  if ((iVar1 == 0) || (param_2 == '\0')) {
    if (in_ECX == DAT_00b333c4) {
      FUN_0065d270(0,9);
    }
    else if ((int *)in_ECX[0x16] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x16] + 0x468))(9);
    }
    FUN_005f1910(9);
    (**(code **)(*in_ECX + 0x288))(9);
    iVar1 = FUN_009828c0();
    fVar3 = (float10)iVar1;
    if (extraout_ST0 - fVar3 < (float10)0.0) {
      fVar3 = fVar3 - (float10)1.0;
    }
    if ((float)fVar3 < unaff_ESI) {
      uVar2 = (**(code **)(*in_ECX + 0x284))(0x39,unaff_ESI);
      uVar2 = (**(code **)(*in_ECX + 0x284))(2,uVar2);
      fVar3 = (float10)FUN_00548d60(uVar2);
      if (0.0 < (float)(fVar3 * (float10)unaff_ESI)) {
        (**(code **)(*in_ECX + 0x2a4))(9,(float)(fVar3 * (float10)unaff_ESI),0);
        return;
      }
    }
  }
  return;
}



void FUN_005f2720(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  float unaff_ESI;
  float10 extraout_ST0;
  float10 fVar3;
  float fStack_4;
  
  if (in_ECX == DAT_00b333c4) {
    FUN_0065d270(0,10);
  }
  else if ((int *)in_ECX[0x16] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x468))(10);
  }
  (**(code **)(*in_ECX + 0x288))(10);
  iVar1 = FUN_009828c0();
  fVar3 = (float10)iVar1;
  if (extraout_ST0 - fVar3 < (float10)0.0) {
    fVar3 = fVar3 - (float10)1.0;
  }
  iVar1 = FUN_005f1910(10);
  if ((float)fVar3 < (float)iVar1 + unaff_ESI) {
    uVar2 = (**(code **)(*in_ECX + 0x284))(5);
    fVar3 = (float10)FUN_00547f20(uVar2);
    if (0.0 < (float)(fVar3 * (float10)fStack_4)) {
      (**(code **)(*in_ECX + 0x2a4))(10,(float)(fVar3 * (float10)fStack_4),0);
      return;
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_005f2820(char param_1,int *param_2,char param_3,float *param_4,char param_5)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int *in_ECX;
  int *piVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  undefined4 uVar12;
  undefined1 auStack_1b4 [11];
  undefined1 local_1a9;
  int *piStack_1a8;
  int *piStack_1a4;
  float *local_1a0;
  int *local_19c;
  int *local_198;
  int iStack_194;
  int iStack_190;
  float fStack_18c;
  int iStack_188;
  int iStack_184;
  float fStack_180;
  undefined8 uStack_17c;
  undefined4 uStack_174;
  float fStack_170;
  float afStack_16c [6];
  int iStack_154;
  int iStack_150;
  float fStack_14c;
  int iStack_148;
  int iStack_144;
  float fStack_140;
  int iStack_13c;
  int iStack_138;
  float fStack_134;
  undefined1 auStack_12c [12];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined1 auStack_100 [36];
  uint uStack_dc;
  int iStack_98;
  undefined1 *puStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_80 [92];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009c2888;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_1b4;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffe40;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_198 = param_2;
  local_1a0 = param_4;
  local_1a9 = 0;
  local_19c = (int *)0x0;
  if (((param_2 != (int *)0x0) && (iVar4 = (**(code **)(*param_2 + 0x154))(uVar3), iVar4 != 0)) &&
     ((cVar2 = (**(code **)(*param_2 + 0x198))(0), cVar2 == '\0' ||
      (cVar2 = (**(code **)(*in_ECX + 0x334))(1), cVar2 == '\0')))) {
    piStack_1a8 = (int *)_DAT_00b33e9c;
    iVar4 = DAT_00b14904 + -5;
    *(float *)(in_ECX[0x16] + 0x10) = _DAT_00b33e9c + *(float *)(in_ECX[0x16] + 0x10);
    iVar5 = FUN_009828c0();
    if (iVar5 < 0x14) {
      iVar4 = DAT_00b148fc;
    }
    if (iVar4 < DAT_00b333bc) {
      if (((in_ECX == DAT_00b333c4) || (cVar2 = (**(code **)(*in_ECX + 0x334))(1), cVar2 != '\0'))
         && (DAT_00b148e4 < DAT_00b3b914)) {
        if (local_1a0 != (float *)0x0) {
          *local_1a0 = 1.4013e-45;
        }
        local_1a9 = 1;
        goto LAB_005f2e4a;
      }
    }
    else {
      cVar2 = (**(code **)(*param_2 + 400))();
      if (cVar2 != '\0') {
        local_19c = param_2;
      }
      if (param_1 == '\0') {
        local_1a9 = (**(code **)(*(int *)in_ECX[0x16] + 0x1c4))();
        goto LAB_005f2e4a;
      }
      if (local_1a0 != (float *)0x0) {
        *local_1a0 = 4.2039e-45;
      }
      FUN_004121a0(auStack_12c,in_ECX + 0xb);
      fVar11 = (float10)FUN_00683cb0(auStack_12c);
      piStack_1a8 = (int *)(float)fVar11;
      fVar11 = (float10)FUN_00683d80();
      piStack_1a8 = (int *)ABS((float)fVar11);
      if ((1.6580628 <= (float)piStack_1a8) && (param_5 == '\0')) goto LAB_005f2e4a;
      if (DAT_00b3b77c != '\0') {
        if (local_1a0 != (float *)0x0) {
          *local_1a0 = 2.8026e-45;
        }
        local_1a9 = 1;
        goto LAB_005f2e4a;
      }
      piStack_1a4 = (int *)FUN_006ecc80();
      if (piStack_1a4 != (int *)0x0) {
        iStack_190 = in_ECX[0xc];
        iStack_194 = in_ECX[0xb];
        fStack_18c = (float)in_ECX[0xd];
        if (param_3 == '\0') {
          fVar11 = (float10)FUN_005e0660();
          fVar11 = fVar11 * (float10)0.75;
        }
        else {
          fVar11 = (float10)FUN_005e40c0();
        }
        fStack_18c = (float)(fVar11 + (float10)fStack_18c);
        cVar2 = FUN_004c97f0();
        piVar7 = piStack_1a4;
        if (cVar2 == '\0') {
          uVar12 = 0;
          uVar6 = FUN_004c9cf0(0);
          piVar7 = (int *)FUN_0044a270(iStack_194,iStack_190,uVar6,uVar12);
        }
        cVar2 = FUN_0043f8c0(piVar7,1);
        if (cVar2 != '\0') {
          FUN_004f5ea0();
          piStack_1a8 = (int *)0x0;
          cVar2 = (**(code **)(*param_2 + 0x188))();
          piVar7 = param_2;
          if (cVar2 == '\0') {
            piVar7 = piStack_1a8;
          }
          FUN_00535a00(0x1a,piVar7);
          iVar4 = param_2[0xb];
          iStack_184 = param_2[0xc];
          fVar1 = (float)param_2[0xd];
          uStack_14 = 0;
          puStack_8c = auStack_80;
          uStack_88 = 0;
          iStack_188 = iVar4;
          fStack_180 = fVar1;
          FUN_004f8840(&iStack_194);
          FUN_0065abe0(&uStack_17c);
          uStack_dc = (uint)uStack_17c & 0xffff001a | 0x1a;
          iVar5 = (**(code **)(*local_198 + 0x15c))(afStack_16c);
          uStack_17c = (double)*(float *)(iVar5 + 8);
          iVar5 = (**(code **)(*local_19c + 0x158))(afStack_16c + 2);
          piStack_1a8 = (int *)((float)(double)CONCAT44(uStack_174,uStack_17c._4_4_) -
                               *(float *)(iVar5 + 8));
          afStack_16c[0] = 1.4013e-45;
          afStack_16c[1] = 2.8026e-45;
          afStack_16c[2] = 0.0;
          afStack_16c[3] = 0.5;
          afStack_16c[4] = 0.75;
          afStack_16c[5] = 0.25;
          iVar5 = FUN_006ecc80();
          if (iVar5 != 0) {
            piStack_1a4 = (int *)FUN_004440c0();
            fStack_134 = (float)piStack_1a8 * 0.5 + fStack_180;
            iStack_154 = iStack_194;
            iStack_144 = iStack_184;
            iStack_138 = iStack_184;
            iStack_150 = iStack_190;
            fStack_14c = fStack_18c;
            iStack_148 = iVar4;
            fStack_140 = fVar1;
            iStack_13c = iVar4;
            FUN_008b8800(&iStack_154,3,0xc,&fStack_120);
            piVar7 = piStack_1a4;
            fStack_120 = fStack_120 * 0.14287673;
            fStack_11c = fStack_11c * 0.14287673;
            fStack_118 = fStack_118 * 0.14287673;
            fStack_114 = fStack_114 * 0.14287673;
            fStack_110 = fStack_110 * 0.14287673;
            fStack_10c = fStack_10c * 0.14287673;
            fStack_108 = fStack_108 * 0.14287673;
            fStack_104 = fStack_104 * 0.14287673;
            if (piStack_1a4 == (int *)0x0) {
              iVar4 = 0;
            }
            else {
              (**(code **)(*piStack_1a4 + 0x58))();
              iVar4 = (**(code **)(*piVar7 + 0x58))();
            }
            iVar4 = (**(code **)(**(int **)(iVar4 + 100) + 0x3c))();
            uStack_17c._4_4_ = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
            piVar9 = *(int **)(uStack_17c._4_4_ + 0x19c);
            if (*(int **)(uStack_17c._4_4_ + 0x19c) == (int *)0x0) {
              piVar9 = DAT_00ba7d9c;
            }
            iVar5 = piVar9[8];
            uVar8 = iVar4 + 0x10U & 0xfffffff0;
            uVar3 = iVar5 + uVar8;
            if ((uint)piVar9[0xb] < uVar3) {
              iVar5 = (**(code **)(*piVar9 + 0xc))(uVar8);
            }
            else {
              piVar9[8] = uVar3;
            }
            piStack_1a4 = (int *)iVar5;
            if (piVar7 == (int *)0x0) {
              iVar4 = 0;
            }
            else {
              iVar4 = (**(code **)(*piVar7 + 0x58))();
            }
            (**(code **)(**(int **)(iVar4 + 100) + 0x40))(&fStack_120,iVar5);
            if (piVar7 != (int *)0x0) {
              (**(code **)(*piVar7 + 0x58))();
            }
            uStack_17c._4_4_ = iStack_188;
            iVar10 = 1;
            iStack_98 = iVar5;
            iVar4 = (**(code **)(*in_ECX + 0x330))();
            piVar7 = local_19c;
            if ((((local_19c == DAT_00b333c4) || (in_ECX == DAT_00b333c4)) ||
                ((iVar4 != 0 && (cVar2 = FUN_00612690(*(undefined4 *)(iVar4 + 0x70)), cVar2 != '\0')
                 ))) || (((piVar7 != (int *)0x0 &&
                          (iVar4 = (**(code **)(*piVar7 + 0x330))(), iVar4 != 0)) &&
                         (cVar2 = FUN_00612690(*(undefined4 *)(iVar4 + 0x70)), cVar2 != '\0')))) {
              iVar10 = 3;
            }
            iVar4 = 0;
            if (iVar10 != 0) {
              do {
                fStack_180 = afStack_16c[iVar4 + 3] * (float)piStack_1a8 + fStack_170;
                FUN_004f90c0(&iStack_188);
                DAT_00b333bc = DAT_00b333bc + 1;
                iVar5 = FUN_00446a10(auStack_100);
                if ((iVar5 == 0) || (piVar7 = (int *)FUN_004dc270(iVar5), piVar7 == local_198)) {
                  local_1a9 = 1;
                  if (local_1a0 != (float *)0x0) {
                    *local_1a0 = afStack_16c[iVar4];
                  }
                  break;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar10);
            }
            piVar7 = *(int **)(uStack_17c._4_4_ + 0x19c);
            if (*(int **)(uStack_17c._4_4_ + 0x19c) == (int *)0x0) {
              piVar7 = DAT_00ba7d9c;
            }
            piVar7[8] = (int)piStack_1a4;
            if (piStack_1a4 == (int *)piVar7[10]) {
              (**(code **)(*piVar7 + 0x10))(piStack_1a4);
            }
          }
        }
        goto LAB_005f2e4a;
      }
    }
  }
  local_1a9 = 0;
LAB_005f2e4a:
  *unaff_FS_OFFSET = local_1c;
  return local_1a9;
}



undefined1
FUN_005f2e70(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            char param_6)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  bool bVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  iVar1 = param_3;
  uVar3 = 0;
  if (((param_3 != 0) && (cVar2 = FUN_0041df40(), cVar2 != '\0')) &&
     (cVar2 = (**(code **)(*in_ECX + 0x198))(0), cVar2 == '\0')) {
    if (in_ECX == DAT_00b333c4) {
      FUN_0057acc0(DAT_00b38a40,0,1,0xbf800000);
    }
    return 0;
  }
  bVar6 = param_3 != 0;
  param_3 = 0;
  if ((bVar6) && (cVar2 = FUN_0041df10(1), cVar2 != '\0')) {
    param_3 = 1;
  }
  if (param_1 == 0) {
    return 0;
  }
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0x14:
    (**(code **)(*in_ECX + 0x2c0))();
  case 0x16:
    FUN_006a2110(param_1,1);
    if (in_ECX == DAT_00b333c4) {
      cVar2 = FUN_00578f60();
      if ((cVar2 != '\0') && (cVar2 = FUN_0065d550(), cVar2 == '\0')) {
        FUN_006a2280(0);
      }
      FUN_00662c70(param_1,iVar1);
      FUN_005e99c0(param_1,0,0);
    }
    uVar3 = FUN_005e4260(param_1,param_2,iVar1,param_3,param_5);
    break;
  default:
    break;
  case 0x1a:
    iVar4 = *(int *)(param_1 + 0x70);
    if ((iVar1 != 0) && (fVar7 = (float10)FUN_0041e880(), (float10)iVar4 == fVar7)) {
      FUN_0041f630();
    }
    iVar4 = FUN_00447490("ITMTorchHeldUnequip");
    if (iVar4 != 0) {
      if ((in_ECX == DAT_00b333c4) && (cVar2 = FUN_00578f60(), cVar2 != '\0')) {
        iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 0xf0))(0);
        if (iVar5 == 0) goto switchD_005f2f0d_caseD_22;
        uVar8 = 0x101;
      }
      else {
        uVar8 = 0x102;
      }
      iVar4 = FUN_0065ac50(*(undefined4 *)(iVar4 + 0xc),0,uVar8,1);
      if (iVar4 != 0) {
        FUN_006b73e0();
        FUN_00401f20(iVar4);
      }
    }
  case 0x22:
switchD_005f2f0d_caseD_22:
    uVar3 = FUN_005e4260(param_1,param_2,iVar1,param_3,param_5);
LAB_005f30de:
    if (in_ECX == DAT_00b333c4) {
      FUN_005e99c0(param_1,0,0);
    }
    break;
  case 0x21:
    iVar4 = (**(code **)(*in_ECX + 0x380))();
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*in_ECX + 0x18c))(), iVar4 != 0)) {
      if (in_ECX != DAT_00b333c4) {
        return 0;
      }
      FUN_0057acc0(DAT_00b38a40,0,1,0xbf800000);
      return 0;
    }
    FUN_005ef9b0(0);
    uVar3 = FUN_005e4260(param_1,param_2,iVar1,param_3,param_5);
    if (in_ECX[0x16] != 0) {
      (**(code **)(*(int *)in_ECX[0x16] + 0x308))(0);
    }
    goto LAB_005f30de;
  }
  if (param_6 == '\0') {
    FUN_005e7230(0,0);
  }
  return uVar3;
}



undefined4 FUN_005f3140(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *in_ECX;
  undefined4 uVar11;
  int *unaff_FS_OFFSET;
  bool bVar12;
  int iStack_18;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c28d6;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (in_ECX == DAT_00b333c4) {
    iVar5 = FUN_006600d0(0);
  }
  else {
    iVar5 = (**(code **)(*in_ECX + 0x168))(uVar4);
  }
  iVar6 = FUN_004691b0(param_1);
  iVar7 = (**(code **)(*in_ECX + 0x170))();
  if (iVar7 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  FUN_00485e00();
  bVar12 = false;
  bVar1 = false;
  if (iVar6 != 0) {
    cVar2 = FUN_00468ff0(7,0);
    if ((cVar2 != '\0') || (cVar2 = FUN_00468ff0(6,0), cVar2 != '\0')) {
      cVar2 = FUN_00468ff0(7,0);
      bVar12 = cVar2 != '\0';
      iVar6 = FUN_00485f10(0);
      iVar7 = FUN_00485f10(1);
      if ((iVar6 == 0) || (iVar7 == 0)) {
        if ((!bVar12) || (iVar7 == 0)) {
          if ((iVar6 != 0) && (!bVar12)) {
            bVar12 = true;
          }
        }
        else {
          bVar12 = false;
        }
      }
      else if (iVar5 != 0) {
        if (bVar12) {
          piVar8 = (int *)FUN_00486790(7,0);
          iVar5 = *(int *)(iVar5 + 0xbc);
        }
        else {
          piVar8 = (int *)FUN_00486790(6,0);
          iVar5 = *(int *)(iVar5 + 0xac);
        }
        uVar11 = 0;
        if ((piVar8 != (int *)0x0) && ((undefined4 *)*piVar8 != (undefined4 *)0x0)) {
          uVar11 = *(undefined4 *)*piVar8;
        }
        if (iVar5 != 0) {
          FUN_005f2e70(iVar5,1,uVar11,bVar12,0,1);
        }
      }
      goto LAB_005f33fd;
    }
    if (iVar5 == 0) goto LAB_005f33fd;
    iStack_18 = 0;
    do {
      cVar2 = FUN_00468ff0(iStack_18,0);
      if (cVar2 != '\0') {
        piVar8 = (int *)(iVar5 + 0x4c);
        iStack_10 = 0x10;
        do {
          iVar6 = *piVar8;
          iVar7 = FUN_009832e6(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0);
          if (((iVar7 != 0) && (cVar2 = FUN_00468ff0(iStack_18,0), cVar2 != '\0')) &&
             (*(char *)(iVar6 + 4) != '\t')) {
            uVar11 = 0;
            iVar7 = iStack_18;
            FUN_0041e6f0(iStack_18,0);
            piVar9 = (int *)FUN_00486790(iVar7,uVar11);
            uVar11 = 0;
            if (((piVar9 != (int *)0x0) && ((int *)*piVar9 != (int *)0x0)) && (*(int *)*piVar9 != 0)
               ) {
              cVar2 = FUN_0041df40();
              if (cVar2 != '\0') {
                bVar1 = true;
              }
              uVar11 = *(undefined4 *)*piVar9;
            }
            if (!bVar1) {
              FUN_005f2e70(iVar6,1,uVar11,0,0,1);
            }
            if (piVar9 != (int *)0x0) {
              FUN_00484470();
              FUN_00401f20(piVar9);
            }
          }
          piVar8 = piVar8 + 4;
          iStack_10 = iStack_10 + -1;
        } while (iStack_10 != 0);
      }
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < 0x10);
    if ((!bVar1) || (cVar2 = FUN_0045a500(), cVar2 != '\0')) goto LAB_005f33fd;
LAB_005f3706:
    uVar11 = 0;
    goto LAB_005f382c;
  }
LAB_005f33fd:
  if (in_ECX[0x16] == 0) goto switchD_005f3422_caseD_15;
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0x14:
    cVar2 = FUN_00468ff0(0xd,0);
    if ((cVar2 != '\0') &&
       (piVar8 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0xf8))(0), piVar8 != (int *)0x0)) {
      bVar1 = false;
      if (((piVar8[2] != param_1) && (((int *)*piVar8 != (int *)0x0 && (*(int *)*piVar8 != 0)))) &&
         (cVar2 = FUN_0041df40(), cVar2 != '\0')) {
        bVar1 = true;
      }
      FUN_005f2e70(piVar8[2],1,*(undefined4 *)*piVar8,0,0,1);
      if ((bVar1) && (cVar2 = FUN_0045a500(), cVar2 == '\0')) goto LAB_005f3706;
    }
    break;
  case 0x1a:
    puVar10 = (undefined4 *)(**(code **)(*(int *)in_ECX[0x16] + 0xf0))(0);
    if (puVar10 != (undefined4 *)0x0) {
      FUN_005f2e70(puVar10[2],1,*(undefined4 *)*puVar10,0,0,1);
    }
    if (in_ECX == DAT_00b333c4) {
      if (((param_3 != 0) && (iVar5 = FUN_0041e210(0x2d), iVar5 != 0)) ||
         (*(int *)(param_1 + 0x70) < 0)) goto LAB_005f3659;
      FUN_0041e6f0();
      if (param_3 == 0) {
        iVar5 = FUN_00401f00(0x14);
        uStack_4 = 0;
        if (iVar5 == 0) {
          iStack_18 = 0;
        }
        else {
          iStack_18 = FUN_00422ee0();
        }
        param_3 = iStack_18;
        uStack_4 = 0xffffffff;
        piVar8 = (int *)FUN_00485e80(param_1,1,0);
        bVar1 = false;
        if (piVar8 == (int *)0x0) {
          iVar5 = FUN_00401f00(0xc);
          uStack_4 = 1;
          if (iVar5 == 0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = (int *)FUN_00484420(param_1,1);
          }
          uStack_4 = 0xffffffff;
          bVar1 = true;
        }
        if (*piVar8 == 0) {
          puVar10 = (undefined4 *)FUN_00401f00(8);
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            *puVar10 = 0;
            puVar10[1] = 0;
          }
          *piVar8 = (int)puVar10;
        }
        FUN_00446cb0(iStack_18);
        if (bVar1) {
          FUN_0048ae30(piVar8,1);
        }
      }
      FUN_0041edf0((float)*(int *)(param_1 + 0x70));
    }
    break;
  case 0x21:
    piVar8 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0xec))(0);
    if (piVar8 != (int *)0x0) {
      cVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x138))();
      bVar1 = false;
      if ((((piVar8[2] != param_1) && ((int *)*piVar8 != (int *)0x0)) && (*(int *)*piVar8 != 0)) &&
         (cVar3 = FUN_0041df40(), cVar3 != '\0')) {
        bVar1 = true;
      }
      FUN_005f2e70(piVar8[2],1,*(undefined4 *)*piVar8,0,0,1);
      if ((bVar1) && (cVar3 = FUN_0045a500(), cVar3 == '\0')) goto LAB_005f3706;
      if (cVar2 != '\0') {
        FUN_005e13d0(0);
      }
    }
    iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 0xf0))(1);
    if (((iVar5 == 0) || (cVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))(), cVar2 == '\0')) ||
       ((*(char *)(param_1 + 0x90) != '\x05' &&
        (iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 0xf8))(0), iVar5 == 0)))) break;
    FUN_004dcab0();
    goto LAB_005f3659;
  case 0x22:
    puVar10 = (undefined4 *)(**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1);
    if ((puVar10 != (undefined4 *)0x0) && (puVar10[2] != param_1)) {
      FUN_005f2e70(puVar10[2],1,*(undefined4 *)*puVar10,0,0,1);
      goto LAB_005f3659;
    }
  }
switchD_005f3422_caseD_15:
LAB_005f3659:
  iVar5 = (**(code **)(*in_ECX + 0x170))();
  if (iVar5 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  FUN_00485e00();
  FUN_00489c30(param_1,param_2,in_ECX,param_3,bVar12,param_4);
  cVar2 = *(char *)(param_1 + 4);
  if (cVar2 == '\x14') {
    cVar2 = FUN_00468ff0(0xd,0);
    if (cVar2 != '\0') goto LAB_005f3797;
  }
  else if ((cVar2 == '\x1a') || (cVar2 == '!')) {
LAB_005f3797:
    FUN_005e7230(param_1,0);
  }
  iVar5 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03718,0);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 4);
  }
  if ((iVar5 != 0) && (FUN_0041a610(0), in_ECX == DAT_00b333c4)) {
    FUN_00662da0();
  }
  if ((((DAT_00b42f3e != '\0') && (DAT_00b42e84 != '\0')) && (1 < DAT_00b42f48)) &&
     ((in_ECX != (int *)0xffffffbc && (iVar5 = FUN_00420fc0(), iVar5 != 0)))) {
    iVar5 = *in_ECX;
    iVar6 = FUN_00420fc0();
    (**(code **)(iVar5 + 0x270))(1,*(undefined4 *)(iVar6 + 0xc));
  }
  uVar11 = 1;
LAB_005f382c:
  *unaff_FS_OFFSET = local_c;
  return uVar11;
}



undefined4 FUN_005f3870(undefined4 *param_1,float param_2,char param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *in_ECX;
  code *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  float10 fVar10;
  undefined8 uVar11;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puVar1 = param_1;
  if ((param_1 == (undefined4 *)0x0) || (param_2 <= 0.0)) {
    return 0;
  }
  iVar3 = param_1[2];
  param_1 = (undefined4 *)param_2;
  iVar9 = 0;
  if (((iVar3 == 0) || (*(char *)(iVar3 + 4) != '\x14')) || (iVar9 = iVar3, param_3 != '\0'))
  goto LAB_005f392f;
  cVar2 = FUN_004b4c70();
  if (cVar2 == '\x01') {
    iVar3 = FUN_005f23b0(0x12);
    if (iVar3 < 2) {
      iVar3 = FUN_005f23b0(0x12);
joined_r0x005f3919:
      if (iVar3 != 0) goto LAB_005f392f;
    }
  }
  else {
    cVar2 = FUN_004b4c70();
    if (cVar2 != '\0') goto LAB_005f392f;
    iVar3 = FUN_005f23b0(0x1b);
    if (iVar3 < 2) {
      iVar3 = FUN_005f23b0(0x1b);
      goto joined_r0x005f3919;
    }
  }
  pfVar4 = (float *)FUN_00403c00();
  param_1 = (undefined4 *)(*pfVar4 * param_2);
LAB_005f392f:
  fVar10 = (float10)FUN_00484850(0);
  _param_3 = (float)(fVar10 - (float10)(float)param_1);
  if (_param_3 < 1.0) {
    _param_3 = 0.0;
  }
  if ((DAT_00b3b908 != '\0') && (iVar9 != 0)) {
    puVar8 = *(undefined1 **)(iVar9 + 0x28);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_00a2f7ec;
    }
    fVar10 = (float10)FUN_00484850();
    uVar5 = FUN_004da2a0(puVar8,(double)(float)param_1,(double)_param_3,(double)fVar10);
    FUN_00579b60("%.20s\'s %s takes %.2f points of damage (%.2f/%.2f)!",uVar5);
  }
  uVar11 = CONCAT44(1,*(undefined4 *)*puVar1);
  uVar5 = FUN_0041e6f0(*(undefined4 *)*puVar1,1);
  FUN_00488830(_param_3,uVar5,uVar11);
  if (iVar9 != 0) {
    (**(code **)(*in_ECX + 0x2c0))();
  }
  if (0.0 < _param_3) {
    return 0;
  }
  if ((((puVar1[2] != 0) && (*(char *)(puVar1[2] + 4) == '!')) &&
      ((in_ECX[0x16] != 0 && (cVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))(), cVar2 != '\0'))
      )) || (((iVar9 != 0 && (cVar2 = FUN_00468ff0(0xd,0), cVar2 != '\0')) &&
             (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0xf8))(), iVar3 != 0)))) {
    if ((in_ECX != DAT_00b333c4) &&
       (cVar2 = (**(code **)(*(int *)puVar1[2] + 0x78))(), cVar2 == '\0')) {
      if (iVar9 == 0) {
        iVar3 = *(int *)in_ECX[0x16];
        (**(code **)(*in_ECX + 0x168))();
        pcVar7 = *(code **)(iVar3 + 0x118);
      }
      else {
        iVar3 = *(int *)in_ECX[0x16];
        (**(code **)(*in_ECX + 0x168))();
        pcVar7 = *(code **)(iVar3 + 0x120);
      }
      iVar3 = (*pcVar7)();
      if (iVar3 == 0) {
        puVar6 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
      }
      else {
        puVar6 = (undefined4 *)(iVar3 + 0x88);
      }
      uStack_10 = *puVar6;
      uStack_c = puVar6[1];
      uStack_8 = puVar6[2];
      FUN_00711440(auStack_14,&stack0xffffffe4,auStack_18);
      (**(code **)(*in_ECX + 0x2c8))(puVar1[2],*(undefined4 *)*puVar1,1,&uStack_10,&stack0xffffffe4)
      ;
      FUN_004dc000();
      return 1;
    }
    FUN_005f2e70(puVar1[2],1,*(undefined4 *)*puVar1,0,1,0);
  }
  return 1;
}



undefined4 FUN_005f3b50(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (DAT_00b333b8 != '\0') {
    return 5;
  }
  if (in_ECX[0x16] != 0) {
    uVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c0))();
    if ((uVar1 & 0x400) != 0) {
      uVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c0))();
      if ((uVar1 & 0x800) == 0) {
        uVar2 = FUN_005f1910(0x1f);
        iVar3 = FUN_0056a300(uVar2);
        if (1 < iVar3) {
          return 0;
        }
      }
    }
  }
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar3 + 4) == '$') {
    iVar3 = (**(code **)(*in_ECX + 0x170))();
    if (iVar3 != 0) {
      uVar4 = FUN_009828c0();
      return uVar4;
    }
  }
  else {
    iVar3 = FUN_0041e6f0();
    if (iVar3 != 0) {
      iVar3 = FUN_00486790(5,0);
      if (iVar3 != 0) {
        if (*(int *)(iVar3 + 8) != 0) {
          uVar4 = FUN_009828c0();
        }
        FUN_00484470();
        FUN_00401f20(iVar3);
      }
    }
  }
  return uVar4;
}



uint FUN_005f3c30(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xec))(1);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xf8))(1);
    if (iVar1 == 0) {
      uVar2 = FUN_005f1910(0x11);
      uVar3 = FUN_0056a300(uVar2);
      if (2 < (int)uVar3) goto LAB_005f3c9e;
      goto LAB_005f3c70;
    }
  }
  uVar2 = FUN_005f1910(0xf);
  uVar3 = FUN_0056a300(uVar2);
  if (2 < (int)uVar3) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xf8))(1);
    uVar3 = 0;
    if (iVar1 != 0) {
LAB_005f3c9e:
      iVar1 = FUN_0047df80(0);
      return CONCAT31((int3)((uint)(iVar1 / 100) >> 8),iVar1 % 100 <= DAT_00b37238);
    }
  }
LAB_005f3c70:
  return uVar3 & 0xffffff00;
}



undefined1 FUN_005f3cc0(int param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  undefined1 uVar3;
  int *piVar4;
  
  uVar3 = 0;
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  if (iVar2 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  cVar1 = FUN_0046f5f0(param_1);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if (iVar2 != 0) {
      (**(code **)(*in_ECX + 400))();
    }
    FUN_0046fef0(param_1);
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if (iVar2 != 0) {
      (**(code **)(*in_ECX + 400))();
    }
    FUN_0046abf0(0x20);
    uVar3 = 1;
  }
  piVar4 = (int *)(param_1 + 0x18);
  iVar2 = (**(code **)(*(int *)(param_1 + 0x18) + 0x18))();
  if (((iVar2 == 4) || (iVar2 = (**(code **)(*piVar4 + 0x18))(), iVar2 == 1)) &&
     (cVar1 = FUN_006a1df0(piVar4), cVar1 != '\0')) {
    FUN_006a1f70(piVar4,0,0);
    uVar3 = 1;
  }
  iVar2 = (**(code **)(*piVar4 + 0x18))();
  if (iVar2 == 2) {
    iVar2 = FUN_005e7b50(param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_005e7b50(param_1);
      if (iVar2 != 0) {
        FUN_0065c620(iVar2);
        FUN_00401f20(iVar2);
      }
      return 1;
    }
  }
  return uVar3;
}



void FUN_005f3e00(void)

{
  int *piVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *in_ECX;
  int unaff_EBX;
  int *unaff_EBP;
  undefined4 unaff_ESI;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined1 local_18 [4];
  int *local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c08a8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = in_ECX + -0x17;
  local_14 = piVar1;
  if (piVar1 == DAT_00b333c4) {
    iVar5 = FUN_0065d750(0);
  }
  else {
    iVar5 = (**(code **)(in_ECX[-0x17] + 0x164))(uVar4);
  }
  iVar8 = *in_ECX;
  uVar6 = (**(code **)(iVar8 + 0x30))(0,local_18,0);
  cVar2 = (**(code **)(iVar8 + 0x1c))(uVar6);
  if (cVar2 == '\0') {
    if (piVar1 == DAT_00b333c4) {
      (**(code **)(*in_ECX + 0x30))();
      uVar6 = FUN_00415360();
      uVar6 = FUN_0041b7c0(uVar6);
      FUN_006635e0(uVar6);
      puVar10 = &stack0xffffffdc;
      (**(code **)(*in_ECX + 0x30))(puVar10,unaff_ESI);
      puVar7 = (undefined4 *)FUN_0041a4b0(puVar10,unaff_ESI);
      local_14 = (int *)0x0;
      FUN_0057acc0(*puVar7,0,1,0xbf800000);
      FUN_00401f20(unaff_EBP);
      *unaff_FS_OFFSET = iVar5;
      return;
    }
    goto LAB_005f4176;
  }
  piVar1 = in_ECX + -0x17;
  if ((int *)in_ECX[-1] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[-1] + 700))(1);
  }
  if (unaff_EDI == 0) goto LAB_005f4176;
  iVar8 = (**(code **)(*in_ECX + 0x30))();
  if (iVar8 == 0) goto LAB_005f4176;
  (**(code **)(*in_ECX + 0x30))();
  cVar2 = FUN_00414fe0();
  if (cVar2 == '\0') {
    (**(code **)(*in_ECX + 0x30))();
    cVar2 = FUN_00415030();
    iVar8 = (cVar2 != '\0') + 0x22;
  }
  else {
    iVar8 = 0x24;
  }
  iVar9 = (**(code **)(*(int *)in_ECX[-1] + 0xf8))(1);
  if (iVar9 == 0) {
    iVar9 = (**(code **)(*(int *)in_ECX[-1] + 0xf0))(1);
    if (iVar9 != 0) goto LAB_005f3fb4;
    cVar2 = (**(code **)(*(int *)in_ECX[-1] + 0x138))();
    if (cVar2 != '\0') {
      cVar2 = FUN_005e0da0();
      if (cVar2 != '\0') goto LAB_005f3fb4;
    }
  }
  else {
LAB_005f3fb4:
    iVar8 = iVar8 + 3;
  }
  uVar3 = FUN_005e5690(iVar8,0,0);
  iVar9 = FUN_0051aa00(uVar3);
  if (iVar9 != iVar8) {
    uVar6 = FUN_004da2a0();
    FUN_004a7a60("%s doesn\'t have a casting animation.",uVar6);
    iVar8 = 0x14;
    uVar3 = FUN_005e5690(0x14,0,0);
  }
  iVar9 = FUN_0051aa00(uVar3);
  if (iVar9 != iVar8) {
    uVar6 = FUN_004da2a0();
    FUN_004a7a60("%s doesn\'t have a LEFT attack animation to use for casting.",uVar6);
    iVar8 = 0x16;
    uVar3 = FUN_005e5690(0x16,0,0);
  }
  iVar9 = FUN_0051aa00(uVar3);
  if (iVar9 != iVar8) {
    uVar6 = FUN_004da2a0();
    FUN_004a7a60("%s doesn\'t have a NORMAL power attack animation to use for casting.",uVar6);
    *unaff_FS_OFFSET = unaff_EBX;
    return;
  }
  FUN_00477b60(uVar3,1,0xffffffff);
  (**(code **)(*piVar1 + 0x3a4))(uVar3,1);
  iVar8 = FUN_004706e0(*(undefined4 *)(&DAT_00b102e8 + iVar8 * 0x24));
  if (iVar8 != 0) {
    FUN_005effd0(2,iVar8);
    uVar6 = 0;
    (**(code **)(*in_ECX + 0x30))(0);
    iVar8 = FUN_00419b30(uVar6);
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0x80) != 0)) {
      iVar9 = (**(code **)(*piVar1 + 0x330))();
      if (iVar9 != 0) {
        uVar6 = *(undefined4 *)(*(int *)(iVar8 + 0x80) + 0xc);
        uVar11 = 0;
        (**(code **)(*piVar1 + 0x330))(uVar6,0);
        FUN_00619fa0(uVar6,uVar11);
        *unaff_FS_OFFSET = iVar5;
        return;
      }
      if (unaff_EBP == DAT_00b333c4) {
        FUN_00663520(*(undefined4 *)(*(int *)(iVar8 + 0x80) + 0xc));
        *unaff_FS_OFFSET = iVar5;
        return;
      }
      iVar8 = FUN_0065ac50(*(undefined4 *)(*(int *)(iVar8 + 0x80) + 0xc),0,0x102,1);
      if (iVar8 != 0) {
        FUN_006b73e0();
        FUN_00401f20(iVar8);
      }
    }
  }
LAB_005f4176:
  *unaff_FS_OFFSET = iVar5;
  return;
}



void FUN_005f4190(void)

{
  bool bVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  LONG LVar8;
  int *in_ECX;
  uint uVar9;
  bool bVar10;
  int *local_8;
  undefined4 *puStack_4;
  
  local_8 = in_ECX;
  piVar4 = (int *)(**(code **)(in_ECX[0x17] + 0x24))();
  if (piVar4 == (int *)0x0) {
    if ((int *)in_ECX[0x16] == (int *)0x0) {
      return;
    }
    (**(code **)(*(int *)in_ECX[0x16] + 700))(0);
    return;
  }
  iVar5 = (**(code **)(in_ECX[0x17] + 0x30))();
  bVar1 = false;
  iVar6 = (**(code **)(*in_ECX + 0x164))();
  if (iVar6 != 0) {
    if (iVar5 == 0) {
      iVar5 = FUN_004706e0(1);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x44) == 1)) {
        bVar1 = true;
      }
      goto LAB_005f42da;
    }
    bVar10 = false;
    iVar6 = (**(code **)(*(int *)local_8[0x16] + 0xec))();
    if ((iVar6 != 0) && (cVar3 = (**(code **)(*(int *)local_8[0x16] + 0x13c))(), cVar3 != '\0')) {
      iVar6 = (**(code **)(*(int *)local_8[0x16] + 0xec))(1);
      iVar6 = FUN_009832e6(*(undefined4 *)(iVar6 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar6 + 4);
      }
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar6 + 0x18;
      }
      bVar10 = iVar6 == iVar5;
    }
    iVar6 = FUN_004706e0(bVar10 * '\x02' + '\x01');
    in_ECX = local_8;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x44) == 1)) {
      bVar1 = true;
    }
  }
  if (iVar5 != 0) {
    if ((short)piVar4[0x2e] != 0) {
      return;
    }
    if (!bVar1) {
      return;
    }
    FUN_005edce0(iVar5);
    return;
  }
LAB_005f42da:
  bVar10 = (short)piVar4[0x2e] == 0;
  if (!bVar10) {
    if (!bVar1) {
      FUN_00477ef0();
    }
    uVar9 = 0;
    if (*(short *)((int)piVar4 + 0xb6) != 0) {
      if (*(short *)((int)piVar4 + 0xb6) == 0) goto LAB_005f4351;
      do {
        iVar5 = *(int *)(piVar4[0x2c] + uVar9 * 4);
        if (((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0xc), iVar5 == 0)) ||
           (iVar5 = FUN_00560920(&DAT_00b3cac0,iVar5), iVar5 == 0)) {
LAB_005f4351:
          uVar7 = 0;
        }
        else {
          cVar3 = FUN_0055e000("SpecialIdle_Cast",&local_8);
          uVar7 = -(uint)(cVar3 != '\0') & (uint)local_8;
        }
        if (((uVar7 != 0) && (*(float *)(uVar7 + 0x30) < *(float *)(uVar7 + 0x34))) &&
           (((**(code **)(*piVar4 + 0x8c))(&puStack_4,uVar9), puVar2 = puStack_4,
            puStack_4 != (undefined4 *)0x0 &&
            ((LVar8 = InterlockedDecrement(puStack_4 + 1), LVar8 == 0 &&
             (puVar2 != (undefined4 *)0x0)))))) {
          (**(code **)*puVar2)(1);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ushort *)((int)piVar4 + 0xb6));
    }
    bVar10 = (short)piVar4[0x2e] == 0;
  }
  if ((bVar10) && ((int *)in_ECX[0x16] != (int *)0x0)) {
    (**(code **)(*(int *)in_ECX[0x16] + 700))(0);
  }
  return;
}



void FUN_005f43e0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar2 = (**(code **)(*(int *)(in_ECX + 0x5c) + 0x30))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2d4))();
    if (iVar2 != 0) {
      uVar3 = FUN_0051ac70();
      switch(uVar3) {
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
        goto switchD_005f441d_caseD_14;
      }
    }
    (**(code **)(*(int *)(in_ECX + 0x5c) + 0x34))(0);
  }
switchD_005f441d_caseD_14:
  if ((*(int **)(in_ECX + 0x58) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2b8))(), cVar1 != '\0')) {
    FUN_005f4190();
  }
  if (*(int *)(in_ECX + 0x60) != 0) {
    FUN_00699c10(param_1);
  }
  FUN_00699080(param_1);
  FUN_006a2280(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x005f471d) */
/* WARNING: Removing unreachable block (ram,0x005f470e) */

undefined4 FUN_005f44a0(int *param_1,float *param_2,undefined4 *param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *in_ECX;
  int *piVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == (int *)0x0) {
    iVar4 = (**(code **)(*in_ECX + 0x30))();
    if (iVar4 == 0) {
      return 0;
    }
    param_1 = (int *)(**(code **)(*in_ECX + 0x30))();
  }
  bVar2 = true;
  bVar1 = true;
  if ((in_ECX + -0x17 != DAT_00b333c4) || (cVar3 = FUN_0065d820(), cVar3 == '\0')) {
    (**(code **)(in_ECX[-0x17] + 0x284))(0x31);
    if ((in_ECX[-1] != 0) &&
       ((uVar5 = (**(code **)(*(int *)in_ECX[-1] + 0x2c0))(), (uVar5 & 0x800) != 0 &&
        (param_1 != (int *)0x0)))) {
      FUN_00414fe0();
    }
    fVar10 = (float10)(**(code **)param_1[3])(in_ECX + -0x17);
    if (param_4 == '\0') {
      iVar4 = (**(code **)(in_ECX[-0x17] + 0x284))(9);
    }
    else {
      iVar4 = FUN_005f1910(9);
    }
    bVar2 = (float)fVar10 < (float)iVar4 != ((float)fVar10 == (float)iVar4);
    if (((in_ECX + -0x17 == DAT_00b333c4) && (iVar4 = (**(code **)(*param_1 + 0x18))(), iVar4 != 2))
       && (iVar4 = (**(code **)(*param_1 + 0x18))(), iVar4 != 3)) {
      uVar6 = FUN_00415360();
      iVar4 = FUN_005f23b0(uVar6);
      iVar7 = (**(code **)(param_1[3] + 8))();
      bVar1 = iVar7 <= iVar4;
    }
  }
  FUN_009832e6(param_1,0,&PTR_PTR_00b03280,&PTR_PTR_00b03800,0);
  cVar3 = '\0';
  iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03280,&PTR_PTR_00b033c8,0);
  if (((iVar4 == 0) || (*(int *)(iVar4 + 0x34) != 3)) &&
     ((param_1 != (int *)0x0 && (piVar9 = param_1 + 3, piVar9 != (int *)0x0)))) {
    while (((piVar9[2] != 0 || (piVar9[1] != 0)) && (cVar3 == '\0'))) {
      iVar4 = piVar9[1];
      if ((iVar4 != 0) && ((*(uint *)(*(int *)(iVar4 + 0x1c) + 0x58) & 0x30000) != 0)) {
        piVar8 = (int *)(**(code **)(in_ECX[3] + 8))();
        while ((piVar8 != (int *)0x0 && (((piVar8[1] != 0 || (*piVar8 != 0)) && (cVar3 == '\0')))))
        {
          if ((*piVar8 != 0) &&
             (iVar7 = *(int *)(*piVar8 + 0xc),
             (*(uint *)(*(int *)(iVar7 + 0x1c) + 0x58) & 0x30000) != 0)) {
            cVar3 = FUN_0041cac0(iVar4,iVar7);
          }
          piVar8 = (int *)piVar8[1];
        }
      }
      if ((piVar9[2] == 0) || (piVar9 = (int *)(piVar9[2] + -4), piVar9 == (int *)0x0)) break;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    if (bVar2) {
      if (bVar1) {
        if (cVar3 != '\0') {
          *param_3 = 5;
        }
      }
      else {
        *param_3 = 3;
      }
    }
    else {
      *param_3 = 1;
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x18))();
  switch(uVar6) {
  case 0:
  case 5:
    if (!bVar2) {
      return 0;
    }
    break;
  default:
    return 1;
  case 2:
    uVar6 = FUN_009832e6(param_1,0,&PTR_PTR_00b03280,&PTR_PTR_00b03800,0);
    iVar4 = FUN_005e7b50(uVar6);
    if (iVar4 != 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 4;
      }
      return 0;
    }
  case 3:
    bVar1 = bVar2;
    break;
  case 6:
    goto switchD_005f475f_caseD_6;
  case 8:
    iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03280,&PTR_PTR_00b0373c,0);
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x7c) & 2) != 0)) {
      *param_2 = 0.0;
      return 1;
    }
    FUN_005e0430(0x13);
    if (param_2 == (float *)0x0) {
      return 1;
    }
    FUN_00548ea0((float)extraout_ST0);
    *param_2 = (float)extraout_ST0_00;
    return 1;
  }
  if (bVar1) {
switchD_005f475f_caseD_6:
    if (cVar3 == '\0') {
      return 1;
    }
  }
  return 0;
}



float10 FUN_005f4880(void)

{
  int iVar1;
  int *in_ECX;
  float unaff_ESI;
  float10 fVar2;
  
  iVar1 = FUN_005f1910(10);
  if ((float)iVar1 != 0.0) {
    fVar2 = (float10)(**(code **)(*in_ECX + 0x288))(10);
    return (float10)(float)(fVar2 / (float10)unaff_ESI);
  }
  return (float10)1.0;
}



undefined4 FUN_005f48d0(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *in_ECX;
  int unaff_ESI;
  
  uVar5 = FUN_005f1910(0x1a);
  iVar6 = FUN_0056a300(uVar5);
  if ((((iVar6 == 0) && (cVar3 = FUN_005ec180(), cVar3 != '\0')) || (in_ECX[0x16] == 0)) ||
     (cVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))(), cVar3 == '\0')) {
    return 0;
  }
  piVar7 = (int *)FUN_0067cf50(0xc,in_ECX);
  piVar2 = piVar7;
  while ((piVar2 != (int *)0x0 &&
         ((piVar1 = (int *)piVar2[1], piVar1 != (int *)0x0 || (*piVar2 != 0))))) {
    *(int **)(*piVar2 + 4) = in_ECX;
    piVar2 = piVar1;
  }
  FUN_004526e0();
  FUN_00401f20(piVar7);
  cVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x2dc))();
  if (cVar3 != '\0') {
    if (((in_ECX[0x16] != 0) && (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))(), iVar6 == 5))
       && (iVar6 = (**(code **)(*in_ECX + 0x164))(), iVar6 != 0)) {
      uVar5 = 3;
      (**(code **)(*in_ECX + 0x164))(3);
      iVar6 = FUN_00470750(uVar5);
      if (iVar6 < 4) {
        return 0;
      }
    }
    cVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x138))();
    if ((cVar3 != '\0') && (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1), iVar6 == 0)) {
      return 0;
    }
    iVar6 = (**(code **)(*in_ECX + 0x164))();
    if (iVar6 != 0) {
      iVar6 = (**(code **)(*in_ECX + 0x284))(0x2f);
      if (0 < iVar6) {
        FUN_006a24b0(0x49564e49,0);
      }
      iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0xf0))(1);
      if (((iVar6 != 0) && (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1), iVar6 == 0)) &&
         (unaff_ESI == 0x14)) {
        unaff_ESI = 0x15;
      }
      cVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x13c))();
      if (cVar3 != '\0') {
        unaff_ESI = 0x15;
        uVar5 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
        FUN_005ed5a0(uVar5);
      }
      uVar4 = FUN_005e5690(unaff_ESI,0,0);
      cVar3 = FUN_0051ac80(uVar4);
      if (cVar3 != '\0') {
        FUN_00477b60(uVar4,1,0xffffffff);
        piVar2 = (int *)in_ECX[0x16];
        uVar5 = FUN_004706e0(3);
        cVar3 = (**(code **)(*piVar2 + 0x138))(uVar5);
        FUN_005effd0((-(cVar3 != '\0') & 2U) + 2,uVar5);
        (**(code **)(*in_ECX + 0x3a4))(uVar4,1);
        return 1;
      }
    }
    return 0;
  }
  return 0;
}



undefined4 FUN_005f4ae0(char param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float *pfVar10;
  int *in_ECX;
  undefined1 unaff_BL;
  
  if (((param_1 != '\0') && (iVar7 = (**(code **)(*(int *)in_ECX[0x16] + 0xf8))(1), iVar7 == 0)) &&
     (cVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))(), cVar2 == '\0')) {
    iVar7 = (**(code **)(*in_ECX + 0x330))();
    if (iVar7 != 0) {
      uVar3 = FUN_005e5670();
      iVar7 = (**(code **)(*in_ECX + 0x330))();
      *(undefined1 *)(iVar7 + 0x49) = uVar3;
    }
    return 0;
  }
  iVar7 = (**(code **)(*in_ECX + 0x164))();
  if (iVar7 == 0) {
    iVar7 = (**(code **)(*in_ECX + 0x330))();
    if (iVar7 != 0) {
      if ((in_ECX[0x16] == 0) || (iVar7 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))(), iVar7 != 6)
         ) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      iVar7 = (**(code **)(*in_ECX + 0x330))();
      *(undefined1 *)(iVar7 + 0x49) = uVar3;
      return 0;
    }
    return 0;
  }
  iVar7 = FUN_004706e0(1);
  if ((iVar7 != 0) && (*(int *)(iVar7 + 0x44) != 1)) {
    iVar7 = (**(code **)(*in_ECX + 0x330))();
    if (iVar7 == 0) {
      return 0;
    }
    uVar3 = FUN_005e5670();
    iVar7 = (**(code **)(*in_ECX + 0x330))();
    *(undefined1 *)(iVar7 + 0x49) = uVar3;
    return 0;
  }
  if ((in_ECX[0x16] == 0) || (iVar8 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))(), iVar8 == -1)) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = param_1;
    if (iVar8 == 3) {
      uVar9 = FUN_00470720(3);
      cVar4 = FUN_0051ac80(uVar9);
      if (cVar4 == '\0') {
        uVar9 = FUN_00470720(1);
        cVar4 = FUN_0051acc0(uVar9);
        if (cVar4 != '\0') {
          cVar2 = '\0';
        }
      }
      else {
        uVar9 = FUN_00470720(3);
        cVar4 = FUN_0051acc0(uVar9);
        if (cVar4 == '\0') {
          iVar8 = FUN_00470750(3);
          if (iVar8 < 2) {
            cVar2 = '\0';
          }
        }
        else {
          cVar2 = '\0';
        }
      }
    }
  }
  if (((in_ECX[0x16] == 0) || (iVar8 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))(), iVar8 == -1))
     || (iVar8 == 3)) {
    if ((param_1 != '\0') && (cVar2 != '\0')) {
      sVar5 = FUN_005e5690(0x1b,0,0);
      sVar6 = FUN_00470720(1);
      if (sVar6 == sVar5) {
        uVar9 = FUN_004706e0(1);
        FUN_005effd0(6,uVar9);
        iVar7 = (**(code **)(*in_ECX + 0x330))();
        if (iVar7 != 0) {
          iVar7 = (**(code **)(*in_ECX + 0x330))();
          *(char *)(iVar7 + 0x49) = param_1;
          return 1;
        }
      }
      else {
        FUN_00477b60(sVar5,1,0xffffffff);
        uVar9 = FUN_004706e0(1);
        FUN_005effd0(6,uVar9);
        (**(code **)(*in_ECX + 0x3a4))(sVar5,1);
        iVar7 = (**(code **)(*in_ECX + 0x330))();
        if (iVar7 != 0) {
          iVar7 = (**(code **)(*in_ECX + 0x330))();
          *(undefined1 *)(iVar7 + 0x49) = unaff_BL;
        }
      }
      return 1;
    }
    return 0;
  }
  if (iVar8 != 6) {
    return 0;
  }
  if (param_1 != '\0') {
    return 0;
  }
  sVar5 = FUN_00470720(1);
  if (sVar5 == 0) {
    return 0;
  }
  pfVar10 = (float *)FUN_00403c00();
  _param_1 = *pfVar10;
  if ((iVar7 != 0) && (bVar1 = *(byte *)(*(int *)(iVar7 + 0x68) + 0x21), bVar1 != 0)) {
    _param_1 = (float)bVar1 / 30.0;
  }
  FUN_00470fc0(1,_param_1);
  if (in_ECX == DAT_00b333c4) {
    uVar9 = 1;
    FUN_0065d750(1);
    FUN_00470fc0(uVar9,_param_1);
  }
  FUN_005effd0(0xffffffff,0);
  iVar7 = (**(code **)(*in_ECX + 0x330))();
  if (iVar7 != 0) {
    iVar7 = (**(code **)(*in_ECX + 0x330))();
    *(undefined1 *)(iVar7 + 0x49) = 0;
  }
  return 1;
}



void FUN_005f4e10(char param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 uVar5;
  
  if ((((in_ECX[0x16] == 0) || (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))(), iVar2 != 8))
      && (iVar2 = FUN_004d8370(), iVar2 != 0)) &&
     ((in_ECX[0x16] != 0 && (iVar2 = (**(code **)(*in_ECX + 0x18c))(), iVar2 == 0)))) {
    iVar2 = (param_1 != '\0') + 0x1c;
    uVar1 = FUN_005e5690(iVar2,0,0);
    iVar3 = FUN_0051aa00(uVar1);
    if ((iVar3 != iVar2) && (iVar3 = FUN_0051aa00(uVar1), iVar3 == 0x1c)) {
      iVar2 = 0x1c;
    }
    iVar3 = FUN_0051aa00(uVar1);
    if (iVar3 == iVar2) {
      FUN_00477b60(uVar1,1,0xffffffff);
      if (iVar2 == 0x1d) {
        uVar4 = FUN_004706e0(DAT_00b106fc);
        uVar5 = 2;
      }
      else {
        uVar4 = FUN_004706e0(*(undefined4 *)(&DAT_00b102e8 + iVar2 * 0x24));
        uVar5 = 6;
      }
      FUN_005effd0(uVar5,uVar4);
      (**(code **)(*in_ECX + 0x3a4))(uVar1,1);
    }
  }
  return;
}



void FUN_005f4f00(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  if ((((in_ECX[0x16] == 0) || (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))(), iVar2 != 8))
      && (iVar2 = FUN_004d8370(), iVar2 != 0)) &&
     ((in_ECX[0x16] != 0 && (iVar2 = (**(code **)(*in_ECX + 0x18c))(), iVar2 == 0)))) {
    uVar1 = FUN_005e5690(0x1e,0,0);
    iVar2 = FUN_0051aa00(uVar1);
    if (iVar2 == 0x1e) {
      FUN_00477b60(uVar1,1,0xffffffff);
      uVar3 = FUN_004706e0(3);
      FUN_005effd0(7,uVar3);
      (**(code **)(*in_ECX + 0x3a4))(uVar1,1);
      return;
    }
    FUN_00470fc0(3,0);
    if (in_ECX == DAT_00b333c4) {
      FUN_0065d750(1);
      FUN_00470fc0(3,0);
    }
  }
  return;
}



void FUN_005f4fd0(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  iVar2 = FUN_004d8370();
  if (((iVar2 != 0) && (in_ECX[0x16] != 0)) &&
     (iVar2 = (**(code **)(*in_ECX + 0x18c))(), iVar2 == 0)) {
    uVar1 = FUN_005e5690(0x1f,0,0);
    iVar2 = FUN_0051aa00(uVar1);
    if (iVar2 == 0x1f) {
      FUN_00477b60(uVar1,1,0xffffffff);
      uVar3 = FUN_004706e0(0);
      FUN_005effd0(8,uVar3);
      (**(code **)(*in_ECX + 0x3a4))(uVar1,1);
    }
  }
  return;
}



undefined4 FUN_005f5050(byte param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  float fStack_4;
  
  iVar2 = FUN_004d8370();
  if ((iVar2 == 0) || (in_ECX[0x16] == 0)) {
    return 0xff;
  }
  uVar5 = 0xff;
  if ((param_1 & 1) == 0) {
    if ((param_1 & 2) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 8) != 0) {
          uVar5 = 0xe;
        }
      }
      else {
        uVar5 = 0xd;
      }
    }
    else {
      uVar5 = 0xc;
    }
  }
  else {
    uVar5 = 0xb;
  }
  uVar3 = FUN_005e5690(uVar5,0,0);
  uVar6 = uVar3 & 0xffff;
  if (uVar6 - 0xb < 4) {
    FUN_00477b60(uVar6,1,0xffffffff);
    uVar4 = FUN_004706e0(0);
    FUN_005effd0(9,uVar4);
    (**(code **)(*in_ECX + 0x3a4))(uVar6,1);
    fStack_4 = 1.0;
    uVar3 = uVar3 & 0xff03 | 3;
    fVar7 = (float10)FUN_005e3590();
    sVar1 = FUN_00472330(uVar3);
    if (sVar1 != 0) {
      sVar1 = FUN_00472330(uVar3);
      fStack_4 = (float)fVar7 / (float)(int)sVar1;
    }
    *(float *)(iVar2 + 0xbc) = fStack_4;
    return uVar5;
  }
  return 0xff;
}



void FUN_005f5170(char param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ad061;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(0x3c,uVar2);
  iVar7 = 0;
  local_4 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00568e10();
  }
  local_4 = 0xffffffff;
  FUN_005661e0(0);
  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffff9;
  iVar4 = FUN_00401f00(0xc,uVar2);
  local_4 = 1;
  if (iVar4 != 0) {
    iVar7 = FUN_005696b0();
  }
  local_4 = 0xffffffff;
  FUN_00569750(0);
  FUN_005697f0(in_ECX);
  FUN_00565e00(iVar7);
  if (iVar7 != 0) {
    FUN_00569730();
    FUN_00401f20(iVar7);
  }
  iVar7 = FUN_00401f00(0xc);
  local_4 = 2;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00569e40();
  }
  local_4 = 0xffffffff;
  FUN_00565ec0(iVar7);
  *(undefined4 *)(iVar3 + 0x18) = 3;
  FUN_00569e90(2);
  FUN_00468230(param_2);
  if (iVar7 != 0) {
    FUN_0060d0a0();
    FUN_00401f20(iVar7);
  }
  if (param_1 == '\0') {
    uVar8 = 0xd;
  }
  else {
    uVar8 = 0xe;
  }
  FUN_00569ee0(uVar8);
  (**(code **)(**(int **)(in_ECX + 0x58) + 0x20))();
  piVar1 = *(int **)(in_ECX + 0x58);
  if (piVar1[2] != 0) {
    uVar8 = (**(code **)(*piVar1 + 0x390))();
    uVar5 = (**(code **)(*piVar1 + 0xc0))(uVar8);
    uVar6 = (**(code **)(*piVar1 + 0xcc))(uVar5);
    FUN_004268b0(piVar1[2],piVar1[1],uVar6,uVar5,uVar8);
  }
  FUN_005f1590(iVar3,1,1);
  (**(code **)(**(int **)(in_ECX + 0x58) + 0xa4))();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005f5320(undefined4 param_1,uint param_2,undefined1 param_3,int param_4,int param_5)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar13;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [12];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2916;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = (**(code **)(*in_ECX + 0x170))(uVar5);
  if (*(char *)(iVar6 + 4) == '$') {
    iVar6 = (**(code **)(*in_ECX + 0x170))();
    if ((iVar6 != 0) && (*(char *)(iVar6 + 0x104) == '\x04')) {
      iVar6 = (**(code **)(*in_ECX + 0x388))();
      if (iVar6 != 0) goto LAB_005f5717;
    }
  }
  if (in_ECX[0x16] != 0) {
    iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))();
    if ((iVar6 != 0) && (*(char *)(iVar6 + 0x20) == '\x10')) {
      FUN_00626c90(param_1);
      goto LAB_005f5717;
    }
  }
  iVar6 = FUN_00401f00(0x68);
  uStack_4 = 0;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00627490(param_1,0,0);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
  if (*(int *)(in_ECX[0x16] + 8) != 0) {
    cVar4 = FUN_005660a0();
    if (cVar4 == '\0') {
      piVar1 = (int *)in_ECX[0x16];
      uVar7 = (**(code **)(*piVar1 + 0x390))();
      uVar8 = (**(code **)(*piVar1 + 0xc0))(uVar7);
      uVar9 = (**(code **)(*piVar1 + 0xcc))(uVar8);
      FUN_004268b0(piVar1[2],piVar1[1],uVar9,uVar8,uVar7);
    }
  }
  (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
  iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0x50))();
  if (iVar10 == 0) {
    FUN_005e91e0(0x1d,0x49564e49,1);
    iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0x50))();
    if (iVar10 == 0) {
      FUN_005e91e0(0x1d,0x4c4d4843,1);
    }
    iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0x50))();
    if (iVar10 != 0) {
      uVar7 = 0;
      (**(code **)(*(int *)in_ECX[0x16] + 0x50))(0);
      FUN_0041a610(uVar7);
    }
  }
  iVar10 = FUN_00401f00(0xc);
  uStack_4 = 1;
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = FUN_005696b0();
  }
  uStack_4 = 0xffffffff;
  FUN_006ecc80();
  FUN_004d6670();
  if (param_5 == 0) {
    if (param_4 == 0) {
      bVar3 = false;
      iVar11 = FUN_006ecc80();
      if (iVar11 != 0) {
        FUN_006ecc80();
        cVar4 = FUN_004c97f0();
        if (cVar4 != '\0') {
          bVar3 = true;
        }
      }
      fVar13 = (float10)(**(code **)(*in_ECX + 0x250))();
      if (fVar13 == (float10)0.0) {
        FUN_00627ff0(in_ECX);
      }
      if (*(int **)(iVar6 + 0x60) == (int *)0x0) {
        fVar13 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x9c))();
        bVar2 = fVar13 < (float10)0.0 != (fVar13 == (float10)0.0);
        if (bVar2) {
          (**(code **)(*(int *)in_ECX[0x16] + 0xa0))(0x41a00000);
        }
        if (bVar3) {
          FUN_00627680(&uStack_24,in_ECX,param_1,bVar2);
        }
        else {
          FUN_006279a0(auStack_18,in_ECX,param_1,bVar2);
        }
        uStack_24 = *(undefined4 *)(iVar6 + 0x40);
        uStack_20 = *(undefined4 *)(iVar6 + 0x44);
        uStack_1c = *(undefined4 *)(iVar6 + 0x48);
      }
      else {
        puVar12 = (undefined4 *)(**(code **)(**(int **)(iVar6 + 0x60) + 0x174))();
        uStack_24 = *puVar12;
        uStack_20 = puVar12[1];
        uStack_1c = puVar12[2];
        FUN_006ecc80();
        FUN_004d6670();
      }
    }
    else {
      FUN_00569750(1);
      FUN_00569810(param_4);
      *(undefined1 *)(iVar6 + 0x3c) = 0;
      FUN_00565e00(iVar10);
    }
  }
  else {
    FUN_00569750(0);
    FUN_005697f0(param_5);
    *(undefined1 *)(iVar6 + 0x3c) = 0;
    FUN_00565e00(iVar10);
  }
  if (iVar10 != 0) {
    FUN_00569730();
    FUN_00401f20(iVar10);
  }
  piVar1 = (int *)in_ECX[0x16];
  if (piVar1[2] != 0) {
    uVar7 = (**(code **)(*piVar1 + 0x390))();
    uVar8 = (**(code **)(*piVar1 + 0xc0))(uVar7);
    uVar9 = (**(code **)(*piVar1 + 0xcc))(uVar8);
    FUN_004268b0(piVar1[2],piVar1[1],uVar9,uVar8,uVar7);
  }
  iVar10 = (**(code **)(*in_ECX + 0x18c))();
  if (iVar10 != 0) {
    param_2 = param_2 & 0xffffff00;
  }
  FUN_005f1590(iVar6,param_2,1);
  *(undefined1 *)(iVar6 + 100) = param_3;
  *(undefined4 *)(iVar6 + 0x18) = 0x13;
  cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x3dc))();
  if (cVar4 != '\0') {
    *(undefined1 *)(iVar6 + 0x50) = 0;
    *(float *)(iVar6 + 0x4c) = *(float *)(iVar6 + 0x4c) - *(float *)(iVar6 + 0x4c);
  }
LAB_005f5717:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005f5730(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*in_ECX + 0x170))(uVar1);
  if (*(char *)(iVar2 + 4) == '$') {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x104) == '\x04')) {
      iVar2 = (**(code **)(*in_ECX + 0x388))();
      if (iVar2 != 0) goto LAB_005f5854;
    }
  }
  if (in_ECX != DAT_00b333c4) {
    iVar2 = FUN_00401f00(0x3c);
    iVar4 = 0;
    uStack_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00568e10();
    }
    uStack_4 = 0xffffffff;
    FUN_005661e0(0x1c);
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 6;
    iVar3 = FUN_00401f00(0xc);
    uStack_4 = 1;
    if (iVar3 != 0) {
      iVar4 = FUN_005696b0();
    }
    uStack_4 = 0xffffffff;
    FUN_00569750(0);
    FUN_005697f0(in_ECX);
    FUN_00565e00(iVar4);
    if (iVar4 != 0) {
      FUN_00569730();
      FUN_00401f20(iVar4);
    }
    FUN_005672a0();
    FUN_005e91e0(0x1d,0x52424157,1);
    FUN_005f1590(iVar2,1,1);
  }
LAB_005f5854:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005f5870(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c2961;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = 0;
  uVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b03280,&PTR_PTR_00b036c0,0,uVar1);
  iVar3 = FUN_00401f00(0x3c);
  local_4 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00568e10();
  }
  local_4 = 0xffffffff;
  FUN_005661e0(0x1a);
  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 6;
  iVar4 = FUN_00401f00(0xc);
  local_4 = 1;
  if (iVar4 != 0) {
    iVar5 = FUN_005696b0();
  }
  local_4 = 0xffffffff;
  FUN_00569750(0);
  FUN_005697c0(0);
  FUN_005697f0(param_2);
  FUN_00565e00(iVar5);
  if (iVar5 != 0) {
    FUN_00569730();
    FUN_00401f20(iVar5);
  }
  iVar5 = FUN_00401f00(0xc);
  local_4 = 2;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00569e40();
  }
  local_4 = 0xffffffff;
  FUN_00565ec0(iVar5);
  if (iVar5 != 0) {
    FUN_0060d0a0();
    FUN_00401f20(iVar5);
  }
  FUN_005672a0();
  FUN_00569e90(1);
  FUN_00569ed0(uVar2);
  FUN_005f1590(iVar3,1,1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005f59e0(undefined4 param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c2961;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = 0;
  uVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b03280,&PTR_PTR_00b036c0,0,uVar1);
  iVar3 = FUN_00401f00(0x3c);
  local_4 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00568e10();
  }
  local_4 = 0xffffffff;
  FUN_005661e0(0x19);
  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffd | 4;
  iVar4 = FUN_00401f00(0xc);
  local_4 = 1;
  if (iVar4 != 0) {
    iVar5 = FUN_005696b0();
  }
  local_4 = 0xffffffff;
  FUN_00569750(0);
  FUN_005697f0(param_2);
  FUN_005697c0(0x78);
  FUN_00565e00(iVar5);
  if (iVar5 != 0) {
    FUN_00569730();
    FUN_00401f20(iVar5);
  }
  iVar5 = FUN_00401f00(0xc);
  local_4 = 2;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00569e40();
  }
  local_4 = 0xffffffff;
  FUN_00565ec0(iVar5);
  if (iVar5 != 0) {
    FUN_0060d0a0();
    FUN_00401f20(iVar5);
  }
  FUN_005672a0();
  FUN_00569e90(1);
  FUN_00569ed0(uVar2);
  FUN_005f1590(iVar3,1,1);
  if (param_3 != '\0') {
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x188))();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f5b70(float param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  float10 fVar7;
  float unaff_retaddr;
  
  iVar2 = (**(code **)(*(int *)param_3[0x16] + 0xf8))(1);
  iVar3 = iVar2;
  if (iVar2 == 0) {
    iVar3 = (**(code **)(*(int *)param_3[0x16] + 0xec))(1);
  }
  if (DAT_00b3b908 != '\0') {
    uVar4 = FUN_004da2a0();
    uVar4 = FUN_004da2a0((double)(param_1 * 100.0),uVar4);
    FUN_00579b60("%.20s blocks %.0f%% of %.20s\'s blow!",uVar4);
  }
  if ((0.0 < param_1) || (iVar3 == 0)) {
    (**(code **)(*param_3 + 0x39c))(0xf,0,0);
  }
  uVar4 = FUN_005f1910(0xf);
  iVar5 = FUN_0056a300(uVar4);
  if (iVar5 == 0) {
    uVar4 = (**(code **)(*param_3 + 0x284))(0xf,unaff_retaddr,param_1);
    fVar7 = (float10)FUN_00547590(uVar4);
    FUN_005e07d0(-(float)fVar7);
  }
  else if (1 < iVar5) goto LAB_005f5cd6;
  if (((iVar3 != 0) &&
      (cVar1 = (**(code **)(*param_3 + 0x2c4))(iVar3,unaff_retaddr * param_1,0), cVar1 != '\0')) &&
     (FUN_005f4ae0(0), DAT_00b3b908 != '\0')) {
    pcVar6 = "shield";
    if (iVar2 == 0) {
      pcVar6 = "weapon";
    }
    uVar4 = FUN_004da2a0();
    uVar4 = FUN_004da2a0(pcVar6,(double)(param_1 * 100.0),uVar4);
    FUN_00579b60("%.20s\'s %s shatters under the blow and is now useless!",uVar4);
  }
LAB_005f5cd6:
  if ((param_3 != (int *)0x0) && (_DAT_00b37060 < param_1 != (_DAT_00b37060 == param_1))) {
    FUN_00608da0(&DAT_00b3f9a8,&DAT_00b3f9a8);
  }
  return;
}



void FUN_005f5d10(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *in_ECX;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0xf8))(1);
  if ((iVar3 != 0) && (cVar2 = FUN_0041df40(), cVar2 == '\0')) {
    iVar5 = *(int *)in_ECX[0x16];
    uVar4 = (**(code **)(*in_ECX + 0x168))();
    iVar5 = (**(code **)(iVar5 + 0x120))(uVar4);
    uStack_14 = *(undefined4 *)(iVar5 + 0x88);
    uStack_10 = *(undefined4 *)(iVar5 + 0x8c);
    uStack_c = *(undefined4 *)(iVar5 + 0x90);
    FUN_00711300(&stack0xffffffe0,&stack0xffffffe4,auStack_18);
    FUN_0041e6f0();
    puVar6 = (undefined4 *)FUN_00486790(0xd,0);
    (**(code **)(*in_ECX + 0x2c8))
              (*(undefined4 *)(iVar3 + 8),*(undefined4 *)*puVar6,1,&uStack_14,&stack0xffffffe0);
    FUN_004dc000();
    FUN_00484470();
    FUN_00401f20(puVar6);
  }
  bVar1 = false;
  iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0xf0))(1);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0xf0))(0);
    bVar1 = true;
    if (iVar3 == 0) goto LAB_005f5ed4;
  }
  FUN_0041e6f0();
  puVar6 = (undefined4 *)FUN_00486790(0xe,0);
  if (bVar1) {
    FUN_005f2e70(puVar6[2],1,0,0,0,0);
  }
  else {
    iVar5 = *(int *)in_ECX[0x16];
    uVar4 = (**(code **)(*in_ECX + 0x168))();
    (**(code **)(iVar5 + 0x11c))(uVar4);
    FUN_00711300(auStack_18,&uStack_14,&uStack_10);
    (**(code **)(*in_ECX + 0x2c8))
              (*(undefined4 *)(iVar3 + 8),*(undefined4 *)*puVar6,1,&stack0xffffffdc,auStack_18);
    FUN_004dc000();
  }
  FUN_00484470();
  FUN_00401f20(puVar6);
LAB_005f5ed4:
  puVar6 = (undefined4 *)(**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
  iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x3d8))();
  if ((((puVar6 != (undefined4 *)0x0) && (in_ECX[0x16] != 0)) &&
      (cVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))(), cVar2 != '\0')) &&
     ((cVar2 = FUN_0041df40(), cVar2 == '\0' && (puVar6[2] != iVar3)))) {
    iVar3 = FUN_004695a0(puVar6[2]);
    if (*(char *)(puVar6[2] + 0x90) == '\x05') {
      iVar5 = *(int *)in_ECX[0x16];
      uVar4 = (**(code **)(*in_ECX + 0x168))();
      iVar5 = (**(code **)(iVar5 + 0x11c))(uVar4);
    }
    else {
      iVar5 = *(int *)in_ECX[0x16];
      uVar4 = (**(code **)(*in_ECX + 0x168))();
      iVar5 = (**(code **)(iVar5 + 0x118))(uVar4);
    }
    if (iVar5 != 0) {
      FUN_00711300(&stack0xffffffe4,auStack_18,&uStack_14);
      (**(code **)(*in_ECX + 0x2c8))
                (puVar6[2],*(undefined4 *)*puVar6,1,&stack0xffffffd8,&stack0xffffffe4);
      FUN_004dc000();
      if (iVar3 != 0) {
        (**(code **)(*(int *)in_ECX[0x16] + 0x42c))();
      }
    }
  }
  return;
}



void FUN_005f6020(char param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  char unaff_retaddr;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  int local_c;
  undefined1 *puStack_8;
  float fStack_4;
  
  fStack_4 = -NAN;
  puStack_8 = &LAB_009c298b;
  local_c = *unaff_FS_OFFSET;
  uStack_18 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  uStack_1c = 0;
  uStack_20 = 0x5f6050;
  (**(code **)(*in_ECX + 0x8c))();
  uStack_20 = 0x5f6058;
  FUN_004212e0();
  *(undefined1 *)(in_ECX + 0x3f) = 0;
  if (param_2 != '\0') {
    uStack_20 = 0x5f6076;
    iVar2 = (**(code **)(*in_ECX + 0x154))();
    if (iVar2 != 0) {
      uStack_20 = 0x5f6085;
      iVar2 = FUN_006ecc80();
      if (iVar2 != 0) {
        uStack_20 = 1;
        piStack_24 = (int *)0x5f6096;
        piStack_24 = (int *)FUN_006ecc80();
        fStack_28 = 8.759037e-39;
        cVar1 = FUN_0043f8c0();
        if (cVar1 != '\0') {
          uStack_20 = 0;
          piStack_24 = (int *)0x5f60b3;
          FUN_005e6680();
          uStack_20 = 8;
          piStack_24 = (int *)0x5f60c1;
          fVar5 = (float10)(**(code **)(*in_ECX + 0x288))();
          fStack_4 = (float)fVar5;
          piStack_24 = (int *)0x8;
          fStack_28 = 8.759099e-39;
          iVar2 = FUN_005f1910();
          fStack_28 = (float)iVar2 - fStack_4;
          piStack_24 = (int *)0x0;
          uStack_2c = 8;
          uStack_30 = 0x5f60f6;
          (**(code **)(*in_ECX + 0x2a4))();
          uStack_30 = 0x5f6102;
          uStack_30 = (**(code **)(*in_ECX + 0x174))();
          FUN_0065a2c0();
          FUN_00452a10();
          uStack_30 = 0;
          puStack_8 = (undefined1 *)&uStack_30;
          (**(code **)(*(int *)in_ECX[0x16] + 400))();
          (**(code **)(*in_ECX + 0x148))();
          if ((int *)in_ECX[0x16] != (int *)0x0) {
            (**(code **)(*(int *)in_ECX[0x16] + 0x2e8))(3);
          }
          iVar2 = (**(code **)(*in_ECX + 0x164))();
          if (iVar2 != 0) {
            uStack_20 = 0x5f6165;
            FUN_004728c0();
            *unaff_FS_OFFSET = unaff_ESI;
            return;
          }
          goto switchD_005f628c_default;
        }
      }
    }
  }
  uStack_20 = 0x5f6184;
  FUN_0065c6a0();
  uStack_20 = 0;
  piStack_24 = (int *)0x5f618d;
  FUN_005e6680();
  *(undefined1 *)(in_ECX + 0x30) = 0;
  if (in_ECX != DAT_00b333c4) {
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      uStack_20 = 0x5f61aa;
      uStack_20 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
      fStack_28 = 8.759424e-39;
      FUN_00674550();
    }
    if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
      uStack_20 = 1;
      piStack_24 = (int *)0x5f61c5;
      (*(code *)**(undefined4 **)in_ECX[0x16])();
    }
    uStack_20 = 0x90;
    piStack_24 = (int *)0x5f61cf;
    iVar2 = FUN_00401f00();
    puStack_8 = (undefined1 *)0x0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uStack_20 = 0x5f61e9;
      iVar2 = FUN_006438f0();
    }
    puStack_8 = (undefined1 *)0xffffffff;
    in_ECX[0x16] = iVar2;
  }
  if (unaff_retaddr != '\0') {
    uStack_20 = 0;
    piStack_24 = (int *)0x5f620d;
    (**(code **)(*in_ECX + 0x184))();
  }
  if (in_ECX != DAT_00b333c4) {
    uStack_20 = 0x5f6220;
    piVar3 = (int *)FUN_006ecc80();
    if (piVar3 != (int *)0x0) {
      uStack_20 = 0;
      fStack_28 = 8.759601e-39;
      piStack_24 = piVar3;
      cVar1 = FUN_0043f8c0();
      if ((cVar1 != '\0') && (param_1 != '\0')) {
        uStack_20 = 0;
        fStack_28 = 8.759636e-39;
        piStack_24 = piVar3;
        uStack_20 = FUN_00440c80();
        fStack_28 = 8.759654e-39;
        piStack_24 = in_ECX;
        ModelLoader_QueueReference();
        iVar2 = *in_ECX;
        if (*(char *)((int)piVar3 + 0x26) == '\x06') {
          uStack_20 = 0x5f626c;
          (**(code **)(iVar2 + 0x1a4))();
          *unaff_FS_OFFSET = unaff_ESI;
          return;
        }
        goto LAB_005f62b7;
      }
    }
    uStack_20 = 0x5f6287;
    uVar4 = FUN_0065ad00();
    switch(uVar4) {
    case 0:
      uStack_20 = 0x5f629f;
      (**(code **)(*in_ECX + 0x1a4))();
      *unaff_FS_OFFSET = unaff_ESI;
      return;
    case 1:
      iVar2 = *in_ECX;
LAB_005f62b7:
      uStack_20 = 0x5f62bf;
      (**(code **)(iVar2 + 0x1b0))();
      *unaff_FS_OFFSET = unaff_ESI;
      return;
    case 2:
      uStack_20 = 0x5f62df;
      (**(code **)(*in_ECX + 0x1ac))();
      *unaff_FS_OFFSET = unaff_ESI;
      return;
    case 3:
      uStack_20 = 0;
      piStack_24 = (int *)0x0;
      fStack_28 = 0.0;
      uStack_2c = 3;
      FUN_00673a90();
    }
  }
switchD_005f628c_default:
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_005f6330(int param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *in_ECX;
  int *piVar7;
  undefined4 unaff_retaddr;
  int *piVar8;
  
  cVar2 = FUN_005e6c60();
  if ((((cVar2 != '\0') && (*(char *)(DAT_00b333c4 + 0x738) != '\0')) &&
      (cVar2 = (**(code **)(*in_ECX + 0x334))(1), cVar2 != '\0')) &&
     (iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0xcc))(), iVar4 == DAT_00b333c4)) {
    (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0x448))(0xffffffff);
  }
  if ((param_1 == 0) || (param_1 == DAT_00b333c4)) {
    FUN_0065def0(in_ECX);
  }
  FUN_005f4ae0(0);
  (**(code **)(*in_ECX + 0x394))(0);
  piVar5 = (int *)FUN_0067c880(in_ECX,4);
  piVar7 = piVar5;
  if (piVar5 != (int *)0x0) {
    do {
      piVar1 = (int *)*piVar7;
      piVar7 = (int *)piVar7[1];
      if (((piVar1 != (int *)0x0) && ((int *)*piVar1 != (int *)0x0)) &&
         (iVar4 = (**(code **)(*(int *)*piVar1 + 0x330))(), iVar4 != 0)) {
        piVar8 = in_ECX;
        (**(code **)(*(int *)*piVar1 + 0x330))();
        FUN_00615010(piVar8);
      }
    } while (piVar7 != (int *)0x0);
    FUN_004526e0();
    FUN_00401f20(piVar5);
  }
  piVar5 = (int *)FUN_0067cf50(0xc,in_ECX);
  piVar7 = piVar5;
  while ((piVar7 != (int *)0x0 && (*piVar7 != 0))) {
    piVar7 = (int *)piVar7[1];
    FUN_0067b670(in_ECX);
  }
  iVar4 = piVar5[1];
  while (iVar4 != 0) {
    iVar4 = *(int *)(piVar5[1] + 4);
    FUN_00401f20(piVar5[1]);
    piVar5[1] = iVar4;
  }
  *piVar5 = 0;
  FUN_00401f20(piVar5);
  if (((int *)in_ECX[0x16] != (int *)0x0) &&
     (iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x174))(), iVar4 != 0)) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x178))(0);
  }
  if (in_ECX[0x16] != 0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x2c8))(0);
  }
  iVar4 = (**(code **)(*in_ECX + 0x330))();
  if (iVar4 != 0) {
    (**(code **)(*in_ECX + 0x330))(unaff_retaddr);
    cVar2 = FUN_0061db00(unaff_retaddr);
    cVar3 = (**(code **)(*in_ECX + 0x198))(0);
    if ((cVar3 == '\0') && (cVar2 != '\0')) {
      if (DAT_00b3b908 != '\0') {
        uVar6 = FUN_004da2a0();
        FUN_00579b60("%.20s stops combat.",uVar6);
      }
      FUN_005eae70();
    }
  }
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x14c))(0);
    (**(code **)(*(int *)in_ECX[0x16] + 0x4a4))();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005f6540(char param_1,int *param_2,undefined1 *param_3,undefined4 param_4,undefined4 param_5
                )

{
  float fVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *in_ECX;
  int iVar9;
  float10 fVar10;
  undefined4 uVar11;
  char *pcVar12;
  int iStack_108;
  uint uStack_104;
  int local_100;
  int *piStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  char acStack_cc [200];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&iStack_108;
  if (in_ECX[0x16] == 0) {
    return 0;
  }
  *param_3 = 0;
  local_100 = 0x7fffffff;
  iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x3b0))();
  if (iVar4 != 0) {
    uStack_104 = *(uint *)(iVar4 + 0xc);
    *param_3 = *(undefined1 *)(iVar4 + 8);
  }
  iVar4 = (**(code **)(*param_2 + 0x154))();
  if (iVar4 == 0) {
    return -1;
  }
  if ((param_1 == '\0') && (local_100 != 0x7fffffff)) {
    return local_100;
  }
  fVar10 = (float10)FUN_004d7e90(param_2,0);
  fStack_e4 = (float)fVar10;
  _DAT_00b333c0 = _DAT_00b333c0 + 1;
  (**(code **)(*(int *)param_2[0x16] + 0x3ac))(param_2);
  piStack_fc = (int *)FUN_009828c0();
  fVar10 = (float10)(**(code **)(*in_ECX + 0x288))(0x29);
  if (((float10)0.0 < fVar10) && (local_100 = FUN_009828c0(), 100 < local_100)) {
    local_100 = 100;
  }
  uStack_104 = 3;
  uVar2 = FUN_005f2820(1,param_2,1,&uStack_104,0);
  uStack_f8 = CONCAT31(uStack_f8._1_3_,uVar2);
  iVar4 = (**(code **)(*in_ECX + 0x330))();
  if (iVar4 != 0) {
    (**(code **)(*in_ECX + 0x330))();
    piVar5 = (int *)FUN_006135f0();
    if (piVar5 == param_2) {
      uVar7 = uStack_104;
      (**(code **)(*in_ECX + 0x330))(uStack_104);
      FUN_00612810(uVar7);
    }
  }
  *param_3 = (char)uStack_f8;
  uStack_ec = FUN_005f3b50();
  cVar3 = FUN_005e0550();
  if (cVar3 != '\0') {
    uVar6 = FUN_005f1910(0x1f);
    iVar4 = FUN_0056a300(uVar6);
    if (1 < iVar4) {
      uStack_ec = 0;
    }
  }
  if (param_2[0x16] != 0) {
    uVar7 = (**(code **)(*(int *)param_2[0x16] + 0x2c0))();
    uStack_f4 = CONCAT31(uStack_f4._1_3_,1);
    if ((uVar7 & 0xf) != 0) goto LAB_005f66eb;
  }
  uStack_f4 = uStack_f4 & 0xffffff00;
LAB_005f66eb:
  piStack_fc = (int *)((uint)piStack_fc & 0xffffff00);
  uVar7 = (**(code **)(*(int *)param_2[0x16] + 0x2c0))();
  if ((uVar7 & 0x200) != 0) {
    piStack_fc = (int *)CONCAT31(piStack_fc._1_3_,1);
  }
  cVar3 = FUN_005e0550();
  if (cVar3 != '\0') {
    uVar6 = FUN_005f1910(0x1f);
    iVar4 = FUN_0056a300(uVar6);
    if (2 < iVar4) {
      uStack_f4 = uStack_f4 & 0xffffff00;
      piStack_fc = (int *)((uint)piStack_fc & 0xffffff00);
    }
  }
  uVar2 = FUN_005e0550();
  uVar11 = 0x3f600000;
  uStack_e8 = CONCAT31(uStack_e8._1_3_,uVar2);
  uVar6 = FUN_006ecc80(0x3f600000);
  uVar8 = (**(code **)(*in_ECX + 0x174))(uVar6);
  uVar2 = FUN_005e06c0(uVar8,uVar6,uVar11);
  uStack_e0 = CONCAT31(uStack_e0._1_3_,uVar2);
  if (in_ECX[0x16] == 0) {
    uStack_104 = uStack_104 & 0xffffff00;
  }
  else {
    iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))();
    uStack_104 = CONCAT31(uStack_104._1_3_,iVar4 == 9);
  }
  iStack_108._0_1_ = 1;
  if (param_1 != '\0') {
    uStack_e8 = uStack_e8 & 0xffffff00;
  }
  iVar4 = FUN_006ecc80();
  if (iVar4 != 0) {
    FUN_006ecc80();
    cVar3 = FUN_004c97f0();
    iStack_108._0_1_ = cVar3 == '\0';
  }
  (**(code **)(*in_ECX + 0x288))(7);
  uVar6 = FUN_009828c0();
  (**(code **)(*in_ECX + 0x288))(0x1f,uVar6);
  uVar6 = FUN_009828c0();
  FUN_00547b90(uVar6);
  uVar7 = FUN_009828c0();
  uStack_ec = uVar7;
  (**(code **)(*param_2 + 0x288))(7);
  uVar6 = FUN_009828c0();
  (**(code **)(*param_2 + 0x288))(0x1f,uVar6);
  uVar6 = FUN_009828c0();
  FUN_00547b90(uVar6);
  uVar6 = FUN_009828c0();
  iVar4 = (**(code **)(*param_2 + 0x284))(0x2f);
  if (iVar4 < 1) {
    iStack_d0 = (**(code **)(*param_2 + 0x284))();
    if (iStack_d0 < 100) {
      uVar8 = (**(code **)(*in_ECX + 0x284))
                        (0x2d,uStack_f4,iStack_d0,uStack_e0,uStack_e8,uStack_dc,param_5,param_4,
                         uStack_f0,uStack_d4,uStack_f8);
      local_100 = FUN_005463f0(uVar7,uVar6,uStack_ec & 0xff,fStack_e4,uVar8);
    }
    else {
      local_100 = -100;
    }
  }
  else {
    iStack_d0 = 100;
    local_100 = -100;
  }
  if (fStack_e4 < 900.0 != (fStack_e4 == 900.0)) {
    (**(code **)(*(int *)param_2[0x16] + 0x35c))();
    local_100 = FUN_009828c0();
  }
  if ((param_1 == '\0') || ((char)param_5 != '\0')) {
    uVar6 = 0;
    if (0 < local_100) {
      uVar6 = 3;
    }
    if (in_ECX != DAT_00b333c4) {
      (**(code **)(*(int *)in_ECX[0x16] + 0xa8))(param_2,uVar6,uStack_ec);
    }
  }
  if ((DAT_00b3bd9a != '\0') &&
     (((DAT_00b3bd9c == (int *)0x0 && (param_2 == DAT_00b333c4)) || (DAT_00b3bd9c == param_2)))) {
    piStack_fc = (int *)0x0;
    if ((DAT_00b333b4 != (int *)0x0) &&
       (cVar3 = (**(code **)(*DAT_00b333b4 + 400))(), cVar3 != '\0')) {
      piStack_fc = DAT_00b333b4;
    }
    FUN_00576a30();
    FUN_00404fb0();
    iVar4 = FUN_009828c0();
    if (piStack_fc == in_ECX) {
      iStack_108 = 0x500 - DAT_00b02e24;
      uVar6 = FUN_004da2a0((float)iStack_108,(float)(iVar4 + 10),3);
      FUN_0057b8e0(uVar6);
      iVar9 = iVar4 + 10 + iVar4;
      iStack_108 = iVar9;
      FUN_004da2a0();
      __snprintf(acStack_cc,200,"Running Detection Against %s");
      fVar1 = (float)iStack_108;
      iStack_108 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)iStack_108,fVar1,3,0xffffffff);
      iVar9 = iVar9 + iVar4;
      iStack_108 = iVar9;
      uVar6 = FUN_004da2a0();
      __snprintf(acStack_cc,200,"%s sneak value %i",uVar6);
      iStack_d8 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)iStack_d8,(float)iStack_108,3,0xffffffff);
      iVar9 = iVar9 + iVar4;
      iStack_108 = iVar9;
      uVar6 = FUN_004da2a0();
      __snprintf(acStack_cc,200,"%s sneak value %i",uVar6);
      uStack_104 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)(int)uStack_104,(float)iStack_108,3,0xffffffff);
      iVar9 = iVar9 + iVar4;
      iStack_108 = iVar9;
      __snprintf(acStack_cc,200,"Line of sight %i",uStack_ec & 0xff);
      uStack_104 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)(int)uStack_104,(float)iStack_108,3,0xffffffff);
      iVar9 = iVar9 + iVar4;
      iStack_108 = iVar9;
      __snprintf(acStack_cc,200,"Distance between %.0f",(double)fStack_e4);
      uStack_104 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)(int)uStack_104,(float)iStack_108,3);
      iVar9 = iVar9 + iVar4;
      iStack_108 = iVar9;
      (**(code **)(*in_ECX + 0x284))();
      uVar6 = FUN_004da2a0();
      __snprintf(acStack_cc,200,"%s blindess value %i",uVar6);
      uStack_104 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)(int)uStack_104,(float)iStack_108,3);
      iVar9 = iVar9 + iVar4;
      iStack_108 = iVar9;
      uVar6 = FUN_004da2a0();
      __snprintf(acStack_cc,200,"Light level on %s is  %i",uVar6);
      uStack_104 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)(int)uStack_104,(float)iStack_108,3);
      iVar9 = iVar9 + iVar4;
      iStack_108 = iVar9;
      uVar6 = FUN_004da2a0();
      __snprintf(acStack_cc,200,"Invisiblity level %s is  %i",uVar6);
      uStack_104 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)(int)uStack_104,(float)iStack_108,3);
      iVar9 = iVar9 + iVar4;
      iStack_108 = iVar9;
      uVar6 = FUN_004da2a0();
      __snprintf(acStack_cc,200,"%s boot weight is  %i",uVar6);
      uStack_104 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)(int)uStack_104,(float)iStack_108,3);
      iVar9 = iVar9 + iVar4;
      iStack_108 = iVar9;
      FUN_004da2a0();
      if ((char)uStack_e8 == '\0') {
        pcVar12 = "%s is not moving";
      }
      else {
        pcVar12 = "%s is moving";
      }
      __snprintf(acStack_cc,200,pcVar12);
      uStack_104 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)(int)uStack_104,(float)iStack_108,3);
      iVar9 = iVar9 + iVar4;
      iStack_108 = iVar9;
      FUN_004da2a0();
      if ((char)uStack_dc == '\0') {
        pcVar12 = "%s is not sneaking";
      }
      else {
        pcVar12 = "%s is sneaking";
      }
      __snprintf(acStack_cc,200,pcVar12);
      uStack_104 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)(int)uStack_104,(float)iStack_108,3);
      iVar9 = iVar9 + iVar4;
      iStack_108 = iVar9;
      FUN_004da2a0();
      uVar6 = FUN_004da2a0();
      if ((char)param_5 == '\0') {
        pcVar12 = "%s did not attack %s ";
      }
      else {
        pcVar12 = "%s attaked %s";
      }
      __snprintf(acStack_cc,200,pcVar12,uVar6);
      uStack_104 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)(int)uStack_104,(float)iStack_108,3);
      iVar9 = iVar9 + iVar4;
      iStack_108 = iVar9;
      FUN_004da2a0();
      if ((char)param_4 == '\0') {
        pcVar12 = "%s is not in combat ";
      }
      else {
        pcVar12 = "%s is in combat";
      }
      __snprintf(acStack_cc,200,pcVar12);
      uStack_104 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)(int)uStack_104,(float)iStack_108,3);
      iVar9 = iVar9 + iVar4;
      iStack_108 = iVar9;
      FUN_004da2a0();
      if ((char)uStack_f0 == '\0') {
        pcVar12 = "%s is not running";
      }
      else {
        pcVar12 = "%s is running";
      }
      __snprintf(acStack_cc,200,pcVar12);
      uStack_104 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)(int)uStack_104,(float)iStack_108,3);
      iVar9 = iVar9 + iVar4;
      iStack_108 = iVar9;
      FUN_004da2a0();
      if ((char)uStack_d4 == '\0') {
        pcVar12 = "%s is not underwater";
      }
      else {
        pcVar12 = "%s is underwater";
      }
      __snprintf(acStack_cc,200,pcVar12);
      uStack_104 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)(int)uStack_104,(float)iStack_108,3);
      iVar9 = iVar9 + iVar4;
      iStack_108 = iVar9;
      FUN_004da2a0();
      if ((char)uStack_f8 == '\0') {
        pcVar12 = "%s is not sleeping";
      }
      else {
        pcVar12 = "%s is sleeping";
      }
      __snprintf(acStack_cc,200,pcVar12);
      uStack_104 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)(int)uStack_104,(float)iStack_108,3,0xffffffff);
      uVar6 = FUN_004da2a0();
      uVar6 = FUN_004da2a0(uVar6);
      __snprintf(acStack_cc,200,"%s detection level to %s is  %i",uVar6);
      uStack_104 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)(int)uStack_104,(float)(iVar9 + iVar4),3,0xffffffff);
    }
  }
  return local_100;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005f7310(int param_1,int *param_2,int param_3,int param_4,int param_5,char param_6,
                    char param_7,char param_8,char param_9)

{
  float fVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  ulonglong *puVar10;
  float *pfVar11;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined2 in_FPUControlWord;
  float10 fVar12;
  undefined4 uVar13;
  undefined1 uStack_230;
  char cStack_22f;
  undefined2 uStack_22e;
  int *piStack_22c;
  float local_228;
  undefined8 uStack_224;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined2 local_214;
  undefined2 local_212;
  char acStack_210 [512];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c29c9;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&uStack_230;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffdc0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_228 = 0.0;
  local_218 = 0;
  local_214 = 0;
  local_212 = 0;
  FUN_004028d0(param_1,0);
  local_4 = 0;
  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x260))(uVar4);
  piStack_22c = piVar5;
  if (param_1 == 0) {
LAB_005f78c0:
    FUN_00401f20(local_218);
  }
  else {
    pcVar6 = acStack_210;
    param_1 = param_1 - (int)pcVar6;
    do {
      cVar2 = pcVar6[param_1];
      *pcVar6 = cVar2;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    iVar7 = (**(code **)(*in_ECX + 0x154))();
    if (iVar7 == 0) goto LAB_005f78c0;
    FUN_005ef930();
    uStack_224 = (ulonglong)uStack_224._4_4_ << 0x20;
    uStack_22e = CONCAT11(uStack_22e._1_1_,in_ECX == DAT_00b333c4);
    if (in_ECX == DAT_00b333c4) {
      cStack_22f = '\x01';
    }
    else {
      cStack_22f = param_7;
    }
    fVar12 = (float10)FUN_004d7e90(DAT_00b333c4,0);
    if (((float10)DAT_00b36798 <= fVar12) ||
       ((((char)uStack_22e != '\0' && ((char)DAT_00b333c4[0x162] == '\0')) ||
        (piVar8 = (int *)FUN_005e12b0(), piVar8 == (int *)0x0)))) {
LAB_005f7669:
      if (*(int *)(DAT_00b33398 + 0x24) != 0) {
        if (cStack_22f == '\0') {
          uVar13 = 6;
        }
        else {
          uVar13 = 5;
        }
        iVar7 = FUN_006ae370(acStack_210,uVar13,0,(int)uStack_224);
        *param_2 = iVar7;
        if (iVar7 == 0) {
          iVar7 = FUN_00401f00(4);
          uStack_224 = CONCAT44(uStack_224._4_4_,iVar7);
          local_4._0_1_ = 1;
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = FUN_006b7180(0xffffff9c);
          }
          local_4 = (uint)local_4._1_3_ << 8;
          *param_2 = iVar7;
          pfVar11 = (float *)FUN_00403c00();
          local_228 = (float)param_5 * *pfVar11;
        }
        else {
          if (cStack_22f == '\0') {
            puVar10 = (ulonglong *)(**(code **)(*in_ECX + 0x174))();
            uStack_224 = *puVar10;
            uStack_21c = (undefined4)puVar10[1];
            FUN_006acc50(*(undefined4 *)*param_2,_DAT_00b161c8,_DAT_00b161d0);
            FUN_006b7360((int)uStack_224,uStack_224._4_4_,uStack_21c);
            FUN_006ac3e0(*(undefined4 *)*param_2,in_ECX);
          }
          else {
            pfVar11 = (float *)FUN_00403c00();
            uStack_224 = CONCAT44((int)(uStack_224 >> 0x20),(int)ROUND(*pfVar11 * 100.0));
            uStack_22e = in_FPUControlWord;
            FUN_006b72b0((int)ROUND(*pfVar11 * 100.0) & 0xffff);
          }
          if (piVar5 == (int *)0x0) {
            FUN_006b71f0(1,0);
            pfVar11 = (float *)FUN_00403c00();
            local_228 = (float)param_5 * *pfVar11;
          }
          else {
            fVar12 = (float10)FUN_00493ba0();
            uStack_224 = (ulonglong)
                         ROUND((float)((fVar12 + (float10)_DAT_00b39ac8) * (float10)1000.0));
            uStack_22e = in_FPUControlWord;
            FUN_006b71f0((int)uStack_224,0);
            fVar12 = (float10)FUN_00493ba0();
            local_228 = (float)(fVar12 + (float10)_DAT_00b39ac8);
            sVar3 = FUN_006b7340();
            if (sVar3 == 0) {
              local_228 = local_228 + 2.0;
            }
            else {
              uVar13 = FUN_006b7340();
              uStack_224 = CONCAT44(uStack_224._4_4_,uVar13) & 0xffffffff0000ffff;
              local_228 = (float)(int)uStack_224 / 1000.0 + local_228;
            }
          }
          (**(code **)(*(int *)in_ECX[0x16] + 0x340))(0,*param_2);
        }
      }
      if (piVar5 != (int *)0x0) {
        FUN_00493b70();
        FUN_00401f20(piVar5);
        (**(code **)(*(int *)in_ECX[0x16] + 0x264))(0);
        (**(code **)(*(int *)in_ECX[0x16] + 0x254))(0);
      }
      FUN_00401f20(local_218);
      fVar12 = (float10)local_228;
      goto LAB_005f78ca;
    }
    if (piVar5 != (int *)0x0) {
LAB_005f74fa:
      fVar1 = (float)*piVar5;
      if (*piVar5 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      uStack_224 = CONCAT44(uStack_224._4_4_,fVar1 / 30.0);
      FUN_00493d50(piVar8,0x3e4ccccd);
LAB_005f7526:
      if (DAT_00b1206c == '\0') {
        (**(code **)(*piVar8 + 0x78))(0,1,0,0,0,0);
      }
      else if (param_3 == 0) {
        if ((in_ECX[0x16] == 0) || (cVar2 = FUN_005e6c10(), cVar2 == '\0')) {
          iVar7 = *piVar8;
          fVar12 = (float10)FUN_005e0dd0(1);
          (**(code **)(iVar7 + 0xd0))((float)fVar12);
          piVar5 = piStack_22c;
        }
        else {
          iVar7 = *piVar8;
          fVar12 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x1d8))();
          (**(code **)(iVar7 + 0xd0))((float)fVar12);
          piVar5 = piStack_22c;
        }
      }
      else {
        uVar13 = FUN_0054f590(param_3);
        fVar1 = (float)param_4;
        if (param_4 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        piStack_22c = (int *)(fVar1 / 100.0);
        (**(code **)(*piVar8 + 200))(uVar13,piStack_22c);
      }
      if ((param_6 != '\0') && ((int *)in_ECX[0x16] != (int *)0x0)) {
        (**(code **)(*(int *)in_ECX[0x16] + 0x1e0))(param_3);
      }
      goto LAB_005f7669;
    }
    if ((param_9 == '\0') || (cVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x25c))(), cVar2 != '\0'))
    {
      piVar9 = (int *)FUN_005e12b0();
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0xd8))("BigAah 0.9 0.2 0.1 0.2");
      }
      cVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x25c))();
      if (cVar2 != '\0') {
        (**(code **)(*(int *)in_ECX[0x16] + 600))(0);
      }
      goto LAB_005f7526;
    }
    cVar2 = FUN_004940c0(&local_218);
    if (cVar2 == '\0') goto LAB_005f7526;
    if ((param_8 == '\0') || (DAT_00b1490c == '\0')) {
      piVar5 = (int *)FUN_00494150(&local_218);
      piStack_22c = piVar5;
      (**(code **)(*(int *)in_ECX[0x16] + 0x254))(0);
      if (piVar5 != (int *)0x0) goto LAB_005f74fa;
      goto LAB_005f7526;
    }
    (**(code **)(*(int *)in_ECX[0x16] + 0x254))(1);
    FUN_00642a70(in_ECX,local_218);
    local_4 = 0xffffffff;
    FUN_00402da0();
  }
  fVar12 = (float10)0;
LAB_005f78ca:
  *unaff_FS_OFFSET = local_c;
  return fVar12;
}



undefined4 FUN_005f7900(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *in_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (in_ECX == DAT_00b333c4) {
    return 0;
  }
  if (param_1 == (int *)0x0) {
    param_1 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x4cc))();
  }
  iVar2 = (**(code **)(*in_ECX + 0x18c))();
  if (((iVar2 == 0) && (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x4cc))(), iVar2 != 0)) &&
     (piVar3 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x4cc))(), piVar3 != in_ECX)) {
    (**(code **)(*in_ECX + 0x164))();
    cVar1 = FUN_00472ea0();
    if (((cVar1 == '\0') && (cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 200))(), cVar1 != '\0')) &&
       (cVar1 = (**(code **)(*in_ECX + 0x334))(1), cVar1 == '\0')) {
      uVar6 = 3;
      (**(code **)(*in_ECX + 0x164))(3);
      uVar6 = FUN_00470720(uVar6);
      cVar1 = FUN_0051ac80(uVar6);
      if (cVar1 == '\0') {
        cVar1 = FUN_005e0550();
        if ((cVar1 != '\0') && (param_1 == DAT_00b333c4)) {
          uVar7 = 0;
          uVar5 = 0;
          uVar6 = FUN_006605a0(0);
          iVar2 = FUN_005f6540(0,DAT_00b333c4,&stack0x00000000,uVar6,uVar5,uVar7);
          if (iVar2 < 1) {
            return 0;
          }
        }
        piVar3 = (int *)in_ECX[0x16];
        if (piVar3[2] == 0) {
switchD_005f7a2f_caseD_3:
          return 1;
        }
        switch(*(undefined1 *)(piVar3[2] + 0x20)) {
        case 2:
        case 6:
          if (piVar3 == (int *)0x0) {
            return 1;
          }
          uVar4 = (**(code **)(*piVar3 + 0x2c0))();
          if ((uVar4 & 0xf) == 0) {
            return 1;
          }
          break;
        default:
          goto switchD_005f7a2f_caseD_3;
        case 8:
        case 0x12:
          break;
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_005f7a80(int *param_1,char param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  int *in_ECX;
  float10 fVar9;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar3 = param_1;
  if (((((in_ECX != param_1) && (((uint)param_1[2] >> 0xb & 1) == 0)) &&
       (iVar6 = (**(code **)(*param_1 + 0x154))(), iVar6 != 0)) &&
      (cVar4 = (**(code **)(*param_1 + 0xe8))(), cVar4 == '\0')) &&
     (((cVar4 = (**(code **)(*param_1 + 400))(), cVar4 == '\0' ||
       (cVar4 = FUN_005e1030(), cVar4 == '\0')) ||
      (piVar7 = (int *)(**(code **)(*in_ECX + 0x380))(), piVar7 != param_1)))) {
    fStack_c = (float)param_1[0xb] - (float)in_ECX[0xb];
    fStack_8 = (float)param_1[0xc] - (float)in_ECX[0xc];
    fStack_4 = (float)param_1[0xd] - (float)in_ECX[0xd];
    fVar9 = (float10)FUN_0043f350();
    piVar7 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x4cc))();
    if (param_1 == piVar7) {
      pfVar8 = (float *)FUN_00403c00();
      fVar1 = *pfVar8 * 1.25;
    }
    else {
      pfVar8 = (float *)FUN_00403c00();
      fVar1 = *pfVar8 * 0.75;
    }
    if (((float)fVar9 <= fVar1) &&
       (((100.0 <= (float)fVar9 || (param_1 == DAT_00b333c4)) ||
        (piVar7 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x4e0))(), param_1 == piVar7)))) {
      fVar9 = (float10)FUN_00683cb0(&fStack_c);
      param_1 = (int *)((float)fVar9 - (float)in_ECX[10]);
      if (3.1415927 < (float)param_1) {
        param_1 = (int *)((float)param_1 - 6.2831855);
      }
      if ((float)param_1 < -3.1415927) {
        param_1 = (int *)((float)param_1 + 6.2831855);
      }
      piVar7 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x4cc))();
      if (piVar3 == piVar7) {
        fVar1 = 2.1991148;
      }
      else {
        fVar1 = 1.5707964;
      }
      fVar2 = ABS((float)param_1);
      if (fVar2 <= fVar1) {
        cVar4 = (**(code **)(*piVar3 + 400))();
        if (cVar4 != '\0') {
          if ((((in_ECX != DAT_00b333c4) && (piVar3 != DAT_00b333c4)) &&
              (iVar6 = (**(code **)(*in_ECX + 0x18c))(), iVar6 != 0)) &&
             (iVar6 = (**(code **)(*piVar3 + 0x18c))(), iVar6 != 0)) {
            return 0;
          }
          if (param_2 != '\0') {
            param_2 = '\x01';
            if (piVar3 == DAT_00b333c4) {
              uVar5 = FUN_006605a0(0);
            }
            else {
              uVar5 = (**(code **)(*piVar3 + 0x334))(1);
            }
            param_1 = (int *)CONCAT31((int3)((uint)fVar2 >> 8),uVar5);
            iVar6 = FUN_005f6540(0,piVar3,&param_2,param_1,0,0);
            if (iVar6 < 1) {
              return 0;
            }
            if ((piVar3 == DAT_00b333c4) && (param_2 == '\0')) {
              return 0;
            }
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



void FUN_005f7cf0(char param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *in_ECX;
  int unaff_EBX;
  int iVar9;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2a21;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar2 = (**(code **)(*in_ECX + 0x334))(1,uVar3);
  if (cVar2 == '\0') {
    if (param_1 == '\0') {
      if (unaff_retaddr == 0) {
        in_ECX[0x33] = (int)in_ECX;
      }
      else {
        in_ECX[0x33] = unaff_retaddr;
      }
    }
    else {
      iVar9 = 0;
      in_ECX[0x33] = 0;
      iVar4 = FUN_00401f00(0x3c);
      puStack_8 = (undefined1 *)0x0;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_00568e10();
      }
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_005661e0(0x20);
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffd | 4;
      iVar5 = FUN_00401f00(0xc);
      puStack_8 = (undefined1 *)0x1;
      if (iVar5 != 0) {
        iVar9 = FUN_005696b0();
      }
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_00569750(0);
      FUN_005697f0(in_ECX);
      FUN_00565e00(iVar9);
      if (iVar9 != 0) {
        FUN_00569730();
        FUN_00401f20(iVar9);
      }
      if (unaff_retaddr != 0) {
        iVar9 = FUN_00401f00(0xc);
        puStack_8 = (undefined1 *)0x2;
        if (iVar9 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_00569e40();
        }
        puStack_8 = (undefined1 *)0xffffffff;
        FUN_00565ec0(iVar9);
        FUN_00569e90(0);
        FUN_00569ec0(unaff_retaddr);
        if (iVar9 != 0) {
          FUN_0060d0a0();
          FUN_00401f20(iVar9);
        }
      }
      FUN_005672a0();
      piVar1 = (int *)in_ECX[0x16];
      if (piVar1[2] != 0) {
        uVar6 = (**(code **)(*piVar1 + 0x390))();
        uVar7 = (**(code **)(*piVar1 + 0xc0))(uVar6);
        uVar8 = (**(code **)(*piVar1 + 0xcc))(uVar7);
        FUN_004268b0(piVar1[2],piVar1[1],uVar8,uVar7,uVar6);
      }
      FUN_005f1590(iVar4,0,1);
    }
  }
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_005f7ec0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))(uVar1);
  iVar3 = (**(code **)(*in_ECX + 0x380))();
  if ((((iVar3 == 0) && (in_ECX[0x2c] != 5)) && (in_ECX[0x2c] != 3)) &&
     ((iVar3 = 0, iVar2 == 0 || (*(char *)(iVar2 + 0x20) != '\x15')))) {
    iVar2 = FUN_00401f00(0x3c);
    uStack_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00568e10();
    }
    uStack_4 = 0xffffffff;
    FUN_005661e0(0x15);
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 4;
    iVar4 = FUN_00401f00(0xc);
    uStack_4 = 1;
    if (iVar4 != 0) {
      iVar3 = FUN_005696b0();
    }
    uStack_4 = 0xffffffff;
    FUN_00569750(0);
    FUN_005697f0(in_ECX);
    FUN_00565e00(iVar3);
    if (iVar3 != 0) {
      FUN_00569730();
      FUN_00401f20(iVar3);
    }
    *(undefined4 *)(iVar2 + 0x18) = 0x15;
    (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
    FUN_005f1590(iVar2,1,1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005f8000(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 8))(uVar1);
  if (iVar2 < 2) {
    iVar2 = FUN_00401f00(0x3c);
    uStack_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00568e10();
    }
    uStack_4 = 0xffffffff;
    FUN_005661e0(0x18);
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 4;
    FUN_005672a0();
    FUN_005f1590(iVar2,1,1);
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if (*(char *)(iVar2 + 4) == '$') {
      iVar2 = (**(code **)(*in_ECX + 0x170))();
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0x104) == '\x04')) {
        FUN_0041f6e0();
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005f80d0(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 8))(uVar1);
  if (iVar2 < 2) {
    iVar2 = FUN_00401f00(0x3c);
    iVar3 = 0;
    uStack_4 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00568e10();
    }
    uStack_4 = 0xffffffff;
    FUN_005661e0(0x1e);
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 4;
    FUN_005672a0();
    FUN_005f1590(iVar3,1,1);
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x314))();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005f8170(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c57b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x58) + 8))(uVar2);
  if (iVar3 < 2) {
    iVar3 = FUN_00401f00(0x3c);
    uStack_4 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00568e10();
    }
    uStack_4 = 0xffffffff;
    FUN_005661e0(0x1f);
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 4;
    FUN_005672a0();
    iVar4 = FUN_00401f00(0xc);
    uStack_4 = 1;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00569e40();
    }
    uStack_4 = 0xffffffff;
    FUN_00565ec0(uVar5);
    FUN_00569e90(0);
    FUN_00569ec0(param_1);
    FUN_00468230(500);
    piVar1 = *(int **)(in_ECX + 0x58);
    if (piVar1[2] != 0) {
      uVar5 = (**(code **)(*piVar1 + 0x390))();
      uVar6 = (**(code **)(*piVar1 + 0xc0))(uVar5);
      uVar7 = (**(code **)(*piVar1 + 0xcc))(uVar6);
      FUN_004268b0(piVar1[2],piVar1[1],uVar7,uVar6,uVar5);
    }
    FUN_005f1590(iVar3,0,1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005f82b0(int param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_005e7b50(param_1);
    if (iVar1 == 0) {
      piVar2 = (int *)FUN_00401f00(8);
      *piVar2 = param_1;
      fVar3 = (float10)FUN_004029d0();
      piVar2[1] = (int)(float)(((float10)3600.0 / fVar3) * (float10)24.0);
      FUN_0067b1e0(piVar2);
    }
  }
  return;
}



void FUN_005f8300(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int iStack_18;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2a48;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x58) != 0) {
    iVar3 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xf4))(1,uVar2);
    if (iVar3 != 0) {
      uVar1 = *(undefined4 *)(iVar3 + 8);
      iStack_18 = 0;
      iVar3 = FUN_004d6d40();
      if (iVar3 != 0) {
        iVar3 = FUN_00485e00();
        if (iVar3 != 0) {
          iStack_18 = FUN_004869c0(uVar1);
        }
      }
      iVar3 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x128))(param_1);
      if (iVar3 != 0) {
        if (param_2 == (int *)0x0) {
          param_2 = (int *)(**(code **)(**(int **)(in_ECX + 0x58) + 0x128))(param_1);
        }
        iVar3 = (**(code **)(*param_2 + 0x58))("Arrow:0");
        if (iVar3 != 0) {
          *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xfffe;
        }
        for (iVar3 = 1; iVar3 < DAT_00b35588; iVar3 = iVar3 + 1) {
          uStack_14 = 0;
          uStack_10 = 0;
          uStack_e = 0;
          uStack_4 = 0;
          FUN_00402e30(&uStack_14,"Arrow%d",iVar3);
          uVar1 = uStack_14;
          iVar4 = (**(code **)(*param_2 + 0x58))(uStack_14);
          if (iVar4 != 0) {
            if (iVar3 < iStack_18) {
              *(ushort *)(iVar4 + 0x18) = *(ushort *)(iVar4 + 0x18) & 0xfffe;
            }
            else {
              *(ushort *)(iVar4 + 0x18) = *(ushort *)(iVar4 + 0x18) | 1;
            }
          }
          uStack_4 = 0xffffffff;
          FUN_00401f20(uVar1);
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005f8460(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((in_ECX[0x16] != 0) && (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))(), iVar2 - 2U < 4)
     ) {
    uVar5 = 0;
    uVar4 = 3;
    if (in_ECX == DAT_00b333c4) {
      FUN_0065d750(1);
      FUN_00470fc0(uVar4,uVar5);
      uVar5 = 0;
      uVar4 = 3;
      FUN_0065d750(0);
      FUN_00470fc0(uVar4,uVar5);
      uVar5 = 0;
      uVar4 = 1;
      FUN_0065d750(1);
      FUN_00470fc0(uVar4,uVar5);
      uVar5 = 0;
      uVar4 = 1;
      FUN_0065d750(0);
    }
    else {
      (**(code **)(*in_ECX + 0x164))(3,0);
      FUN_00470fc0(uVar4,uVar5);
      uVar5 = 0;
      uVar4 = 1;
      (**(code **)(*in_ECX + 0x164))(1,0);
    }
    FUN_00470fc0(uVar4,uVar5);
    (**(code **)(*(int *)in_ECX[0x16] + 0x2d8))(0xffffffff,0);
    cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x138))();
    if (cVar1 != '\0') {
      if (in_ECX == DAT_00b333c4) {
        uVar4 = FUN_006600d0(0);
      }
      else {
        uVar4 = (**(code **)(*in_ECX + 0x168))();
      }
      iVar2 = 1;
      if (in_ECX != DAT_00b333c4) goto LAB_005f8591;
      iVar2 = 2;
      do {
        if ((in_ECX == DAT_00b333c4) && (iVar2 == 1)) {
          uVar4 = FUN_006600d0(1);
        }
LAB_005f8591:
        iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 300))(uVar4);
        if (iVar3 != 0) {
          FUN_00477ef0();
        }
        if ((in_ECX != DAT_00b333c4) || (iVar2 == 2)) {
          FUN_005f8300(uVar4,0);
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}



void FUN_005f85e0(uint param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  
  if ((*(int *)(DAT_00b33b00 + 0x44) == 0x1ffff000) || (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)
     ) {
    FUN_005f0410();
  }
  if ((*(int *)(DAT_00b33b00 + 0x44) == 0x1ffff000) || (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)
     ) {
    if (in_ECX == DAT_00b333c4) {
      iVar3 = FUN_0065d750(1);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x98) != 0)) {
        piVar4 = (int *)(**(code **)(**(int **)(*(int *)(iVar3 + 0x98) + 0x7c) + 0x4c))("magicNode")
        ;
        if (piVar4 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar4 + 8))();
          if (iVar3 != 0) {
            FUN_00477ef0();
          }
        }
      }
      iVar3 = FUN_0065d750(0);
    }
    else {
      iVar3 = (**(code **)(*in_ECX + 0x164))();
    }
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x98) != 0)) {
      piVar4 = (int *)(**(code **)(**(int **)(*(int *)(iVar3 + 0x98) + 0x7c) + 0x4c))("magicNode");
      if (piVar4 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar4 + 8))();
        if (iVar3 != 0) {
          FUN_00477ef0();
        }
      }
    }
    iVar3 = in_ECX[0x18];
    if (iVar3 != 0) {
      FUN_0069e0b0();
      FUN_00401f20(iVar3);
    }
    in_ECX[0x18] = 0;
  }
  FUN_0065a7f0(param_1);
  if (((param_1 & 0x8000) != 0) && (piVar4 = in_ECX + 0x29, piVar4 != (int *)0x0)) {
    while( true ) {
      cVar2 = FUN_0046cb60();
      if (cVar2 != '\0') break;
      FUN_00401f20(*piVar4);
      piVar1 = (int *)in_ECX[0x2a];
      if (piVar1 == (int *)0x0) {
        *piVar4 = 0;
      }
      else {
        in_ECX[0x2a] = piVar1[1];
        *piVar4 = *piVar1;
        FUN_00401f20(piVar1);
      }
    }
  }
  if ((param_1 & 0x200000) != 0) {
    FUN_0065cc90();
  }
  if ((*(int *)(DAT_00b33b00 + 0x44) == 0x1ffff000) || (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)
     ) {
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0xe8))();
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x78))(0x3f400000,0,1,1,1,0);
      }
    }
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0xe8))();
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x9c))(0,1);
      }
    }
    FUN_005e7b90();
    *(undefined1 *)(in_ECX + 0x20) = 0;
    in_ECX[0x33] = 0;
    in_ECX[0x31] = 0;
    *(undefined1 *)(in_ECX + 0x38) = 1;
    *(undefined1 *)(in_ECX + 0x3f) = 0;
    *(undefined1 *)(in_ECX + 0x36) = 0;
    *(undefined1 *)(in_ECX + 0x30) = 0;
  }
  return;
}



void FUN_005f87f0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x3c) != 0) {
    FUN_008ab8a0(*(int *)(in_ECX + 0x3c),0x3f800000);
    if ((*(int *)(in_ECX + 0x58) != 0) &&
       (piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x58) + 0xe8))(), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x9c))(0,0);
    }
    FUN_005e13d0(1);
    iVar3 = FUN_0065a2c0();
    if ((iVar3 != 0) && (iVar3 = FUN_006ecc80(), iVar3 != 0)) {
      FUN_006ecc80();
      cVar1 = FUN_004c97f0();
      if (cVar1 != '\0') {
        uVar4 = FUN_00424180();
        FUN_00895060(uVar4);
        return;
      }
      FUN_00895060(DAT_00b35c24);
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_005f8890(int *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  float fVar8;
  int *piVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  undefined1 auStack_174 [16];
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  int *local_14c;
  int local_148;
  float local_144;
  float local_140;
  int *local_13c;
  int *local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  char acStack_11c [4];
  undefined4 uStack_118;
  char acStack_114 [208];
  uint local_44;
  
  local_44 = DAT_00b30aac ^ (uint)auStack_174;
  local_144 = (float)DAT_00b02e24;
  local_140 = (float)(0x500 - DAT_00b02e24);
  iVar7 = *param_3;
  local_13c = param_4;
  local_148 = *param_4;
  local_138 = param_3;
  local_14c = (int *)((local_140 - local_144) * 0.5 + local_144);
  local_158 = (float)iVar7;
  if ((param_1 == (int *)0x0) || (cVar1 = (**(code **)(*param_1 + 400))(), cVar1 == '\0')) {
    FUN_0057b8e0("ACTOR INFO: Current ref is not an actor.",local_144,(float)(int)local_158,1,
                 0xffffffff);
    local_158 = (float)(iVar7 + param_2);
  }
  else {
    uVar2 = FUN_004da2a0();
    _sprintf(acStack_114 + 4,"ACTOR INFO: %s",uVar2);
    FUN_0057b8e0(acStack_114 + 4,local_144,(float)(int)local_158,1,0xffffffff);
    iVar7 = iVar7 + param_2;
    builtin_strncpy(acStack_11c,"%s: ",4);
    uStack_118._0_1_ = '%';
    uStack_118._1_1_ = '.';
    uStack_118._2_1_ = '1';
    uStack_118._3_1_ = 'f';
    builtin_strncpy(acStack_114,"/%d",4);
    local_158 = (float)iVar7;
    fStack_150 = (float)iVar7;
    FUN_0057b8e0("ATTRIBUTES",local_144,(float)iVar7,1,0xffffffff);
    fStack_15c = (float)(iVar7 + param_2);
    iVar7 = 0;
    local_158 = fStack_15c;
    do {
      if (iVar7 == 0xb) {
        fVar10 = (float10)(**(code **)(*param_1 + 0x288))(0);
        fVar10 = (float10)FUN_00547ed0((float)fVar10);
        local_158 = (float)fVar10;
        uVar2 = FUN_009828c0();
        fVar10 = (float10)(**(code **)(*param_1 + 0x288))(0xb,uVar2);
        uVar2 = FUN_00565cc0(0xb,(double)fVar10);
      }
      else {
        fVar10 = (float10)FUN_005ead00(iVar7);
        fStack_154 = (float)fVar10;
        iVar3 = FUN_009828c0();
        fVar10 = (float10)iVar3;
        if (extraout_ST0 - fVar10 < (float10)0.0) {
          fVar10 = fVar10 - (float10)1.0;
        }
        fStack_154 = (float)fVar10;
        uVar2 = FUN_009828c0();
        fVar10 = (float10)(**(code **)(*param_1 + 0x288))(iVar7,uVar2);
        uVar2 = FUN_00565cc0(iVar7,(double)fVar10);
      }
      _sprintf(acStack_114 + 4,acStack_11c,uVar2);
      FUN_0057b8e0(acStack_114 + 4,local_144,(float)(int)local_158,1,0xffffffff);
      local_158 = (float)((int)local_158 + param_2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0xc);
    iVar7 = 0x21;
    do {
      fVar10 = (float10)FUN_005ead00(iVar7);
      fStack_154 = (float)fVar10;
      iVar3 = FUN_009828c0();
      fVar10 = (float10)iVar3;
      if (extraout_ST0_00 - fVar10 < (float10)0.0) {
        fVar10 = fVar10 - (float10)1.0;
      }
      fStack_154 = (float)fVar10;
      uVar2 = FUN_009828c0();
      fVar10 = (float10)(**(code **)(*param_1 + 0x288))(iVar7,uVar2);
      uVar2 = FUN_00565cc0(iVar7,(double)fVar10);
      _sprintf(acStack_114 + 4,acStack_11c,uVar2);
      FUN_0057b8e0(acStack_114 + 4,local_144,(float)(int)local_158,1,0xffffffff);
      local_158 = (float)((int)local_158 + param_2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x28);
    FUN_0057b8e0("SKILLS",local_14c,(float)(int)fStack_150,2,0xffffffff);
    fVar8 = fStack_15c;
    fStack_150 = fStack_15c;
    iVar7 = (**(code **)(*param_1 + 0x170))();
    if (*(char *)(iVar7 + 4) == '$') {
      fVar10 = (float10)FUN_005ead00(0xc);
      fStack_15c = (float)fVar10;
      iVar7 = FUN_009828c0();
      fVar10 = (float10)iVar7;
      if (extraout_ST0_01 - fVar10 < (float10)0.0) {
        fVar10 = fVar10 - (float10)1.0;
      }
      fStack_15c = (float)fVar10;
      uVar2 = FUN_009828c0();
      fVar10 = (float10)(**(code **)(*param_1 + 0x288))(0xc,uVar2);
      _sprintf(acStack_114,(char *)&fStack_120,"COMBAT",SUB84((double)fVar10,0),
               (int)((ulonglong)(double)fVar10 >> 0x20));
      FUN_0057b8e0(acStack_114,fStack_150,(float)(int)fStack_154,2,0xffffffff);
      fStack_154 = (float)((int)fVar8 + param_2);
      fVar10 = (float10)FUN_005ead00(0x13);
      fStack_160 = (float)fVar10;
      iVar7 = FUN_009828c0();
      fVar10 = (float10)iVar7;
      if (extraout_ST0_02 - fVar10 < (float10)0.0) {
        fVar10 = fVar10 - (float10)1.0;
      }
      fStack_160 = (float)fVar10;
      uVar2 = FUN_009828c0();
      fVar10 = (float10)(**(code **)(*param_1 + 0x288))(0x13,uVar2);
      _sprintf((char *)&uStack_118,(char *)&fStack_124,"MAGIC",SUB84((double)fVar10,0),
               (int)((ulonglong)(double)fVar10 >> 0x20));
      FUN_0057b8e0(&uStack_118,fStack_154,(float)(int)local_158,2,0xffffffff);
      fVar8 = (float)((int)fVar8 + param_2 + param_2);
      local_158 = fVar8;
      fVar10 = (float10)FUN_005ead00(0x1a);
      fStack_164 = (float)fVar10;
      iVar7 = FUN_009828c0();
      fVar10 = (float10)iVar7;
      if (extraout_ST0_03 - fVar10 < (float10)0.0) {
        fVar10 = fVar10 - (float10)1.0;
      }
      fStack_164 = (float)fVar10;
      uVar2 = FUN_009828c0();
      fVar10 = (float10)(**(code **)(*param_1 + 0x288))(0x1a,uVar2);
      _sprintf(acStack_114 + 4,acStack_11c,"STEALTH",SUB84((double)fVar10,0),
               (int)((ulonglong)(double)fVar10 >> 0x20));
      FUN_0057b8e0(acStack_114 + 4,local_14c,(float)(int)fStack_150,2,0xffffffff);
      fVar8 = (float)((int)fVar8 + param_2);
    }
    else {
      iVar7 = 0xc;
      do {
        fVar10 = (float10)FUN_005ead00(iVar7);
        fStack_15c = (float)fVar10;
        iVar3 = FUN_009828c0();
        fVar10 = (float10)iVar3;
        if (extraout_ST0_04 - fVar10 < (float10)0.0) {
          fVar10 = fVar10 - (float10)1.0;
        }
        fStack_15c = (float)fVar10;
        uVar2 = FUN_009828c0();
        fVar10 = (float10)(**(code **)(*param_1 + 0x288))(iVar7,uVar2);
        uVar2 = FUN_00565cc0(iVar7,(double)fVar10);
        _sprintf(acStack_114 + 4,acStack_11c,uVar2);
        FUN_0057b8e0(acStack_114 + 4,local_14c,(float)(int)fStack_150,2,0xffffffff);
        fVar8 = (float)((int)fStack_150 + param_2);
        iVar7 = iVar7 + 1;
        fStack_150 = fVar8;
      } while (iVar7 < 0x21);
    }
    if ((int)local_158 < (int)fVar8) {
      local_158 = fVar8;
    }
    local_158 = (float)((int)local_158 + param_2);
    FUN_0057b8e0("ACTOR VALUES",local_14c,(float)(int)local_158,2,0xffffffff);
    fStack_128 = local_144;
    local_158 = (float)((int)local_158 + param_2);
    fStack_124 = (float)local_14c;
    iVar7 = 0x28;
    fStack_120 = local_140;
    uStack_134 = 0x3f800000;
    uStack_130 = 0x40000000;
    uStack_12c = 0x40400000;
    do {
      fVar10 = (float10)FUN_005ead00(iVar7);
      fStack_15c = (float)fVar10;
      iVar3 = FUN_009828c0();
      fVar10 = (float10)iVar3;
      if (extraout_ST0_05 - fVar10 < (float10)0.0) {
        fVar10 = fVar10 - (float10)1.0;
      }
      fStack_15c = (float)fVar10;
      uVar2 = FUN_009828c0();
      fVar10 = (float10)(**(code **)(*param_1 + 0x288))(iVar7,uVar2);
      uVar2 = FUN_00565cc0(iVar7,(double)fVar10);
      _sprintf(acStack_114 + 4,acStack_11c,uVar2);
      uVar2 = FUN_009828c0(0xffffffff);
      FUN_0057b8e0(acStack_114 + 4,(&fStack_128)[iVar7 % 3],(float)(int)local_158,uVar2);
      if (iVar7 % 3 == 2) {
        local_158 = (float)((int)local_158 + param_2);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x48);
    FUN_0057b8e0("INVENTORY",local_140,(float)local_148,3,0xffffffff);
    local_148 = local_148 + param_2;
    puVar4 = (undefined4 *)FUN_0041e6f0();
    param_3 = local_138;
    if (puVar4 != (undefined4 *)0x0) {
      for (piVar9 = (int *)*puVar4; (piVar9 != (int *)0x0 && ((piVar9[1] != 0 || (*piVar9 != 0))));
          piVar9 = (int *)piVar9[1]) {
        if (*piVar9 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*piVar9 + 8);
        }
        local_138 = param_3;
        if ((iVar7 != 0) && (local_14c = piVar9, cVar1 = FUN_00484e80(0), cVar1 != '\0')) {
          if (*(char *)(iVar7 + 4) == '\x14') {
            iVar7 = FUN_009832e6(iVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0);
            if (iVar7 == 0) {
              puVar6 = &DAT_00a2f7ec;
            }
            else {
              puVar6 = *(undefined1 **)(iVar7 + 4);
              if (puVar6 == (undefined1 *)0x0) {
                puVar6 = &DAT_00a2f7ec;
              }
            }
            fVar10 = (float10)FUN_00484850(1);
            _sprintf(acStack_114 + 4,"%.20s: %.1f%%",puVar6,SUB84((double)fVar10,0),
                     (int)((ulonglong)(double)fVar10 >> 0x20));
            FUN_0057b8e0(acStack_114 + 4,local_140,(float)local_148,3,0xffffffff);
          }
          else {
            if (*(char *)(iVar7 + 4) != '!') goto LAB_005f91a1;
            uVar5 = (**(code **)(*(int *)(iVar7 + 0x88) + 0x10))();
            iVar7 = FUN_009832e6(iVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0);
            if (iVar7 == 0) {
              puVar6 = &DAT_00a2f7ec;
            }
            else {
              puVar6 = *(undefined1 **)(iVar7 + 4);
              if (puVar6 == (undefined1 *)0x0) {
                puVar6 = &DAT_00a2f7ec;
              }
            }
            fVar10 = (float10)FUN_00484850(1);
            _sprintf(acStack_114 + 4,"%.20s: %ddmg %.1f%%",puVar6,uVar5 & 0xffff,
                     SUB84((double)fVar10,0),(int)((ulonglong)(double)fVar10 >> 0x20));
            FUN_0057b8e0(acStack_114 + 4,local_140,(float)local_148,3,0xffffffff);
            piVar9 = local_14c;
          }
          local_148 = local_148 + param_2;
        }
LAB_005f91a1:
        param_3 = local_138;
      }
    }
  }
  *param_3 = (int)local_158;
  if (local_148 < (int)local_158) {
    *local_13c = (int)local_158;
    return;
  }
  *local_13c = local_148;
  return;
}



void FUN_005f9200(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *in_ECX;
  float10 fVar11;
  undefined4 *local_14;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar4 = param_1;
  local_14 = (undefined4 *)0x0;
  piVar2 = in_ECX;
  while( true ) {
    while( true ) {
      if (piVar2 == (int *)0x0) {
        return;
      }
      cVar5 = (**(code **)(*piVar2 + 0x198))(0);
      if ((cVar5 == '\0') &&
         ((cVar5 = FUN_00680ee0(piVar2), cVar5 != '\0' || (*(char *)(DAT_00b333c4 + 0x114) == '\0'))
         )) {
        FUN_005f0810(piVar4,&param_1,fStack_c,uStack_8,uStack_4);
        iVar6 = (**(code **)(*(int *)piVar2[0x16] + 0x36c))();
        if ((iVar6 != 0) && (iVar6 = (**(code **)(*piVar2 + 0x380))(), iVar6 == 0)) {
          piVar1 = (int *)piVar2[0x16];
          uVar7 = (**(code **)(*piVar1 + 0x374))(0);
          (**(code **)(*piVar1 + 0x378))(uVar7);
          FUN_004d7300(uVar7,iVar6);
          iVar6 = (**(code **)(*piVar2 + 0x164))();
          *(undefined1 *)(iVar6 + 0xc4) = 1;
          iVar6 = *(int *)piVar2[0x16];
          uVar7 = (**(code **)(iVar6 + 0x378))(0x7f);
          (**(code **)(iVar6 + 0x370))(piVar2,0,uVar7);
          piVar1 = (int *)piVar2[0x16];
          piVar8 = (int *)(**(code **)(*piVar1 + 0x378))();
          iVar6 = (**(code **)(*piVar1 + 0x380))();
          uVar9 = (uint)*(byte *)(iVar6 + 0xe);
          (**(code **)(*piVar8 + 0x170))(uVar9);
          fVar11 = (float10)FUN_004aebe0(uVar9);
          FUN_00659b90((float)-fVar11);
          iVar6 = *piVar2;
          fVar11 = (float10)(**(code **)(iVar6 + 0x1e0))();
          fStack_c = (float)(fVar11 + (float10)3.1415927410125732);
          (**(code **)(iVar6 + 0x1e8))(fStack_c);
          uVar7 = 0;
          (**(code **)(*(int *)piVar2[0x16] + 0x380))(0);
          FUN_006faee0(uVar7);
          iVar6 = (**(code **)(*(int *)piVar2[0x16] + 0x380))();
          *(undefined1 *)(iVar6 + 0xe) = 0;
          puVar10 = (undefined4 *)(**(code **)(*(int *)piVar2[0x16] + 0x380))();
          *puVar10 = DAT_00b3f9a8;
          puVar10[1] = DAT_00b3f9ac;
          puVar10[2] = DAT_00b3f9b0;
          iVar6 = *(int *)piVar2[0x16];
          uVar7 = (**(code **)(iVar6 + 0x380))();
          (**(code **)(iVar6 + 1000))(0,0x7f,uVar7);
          FUN_0065ac20(0);
        }
        iVar6 = FUN_006ecc80();
        uVar7 = FUN_004d6670();
        puVar10 = (undefined4 *)(**(code **)(*piVar4 + 0x174))();
        FUN_004d8a30(*puVar10,puVar10[1],puVar10[2]);
        if ((iVar6 == 0) || (cVar5 = FUN_0043f8c0(iVar6,0), cVar5 == '\0')) {
          uVar3 = 0x7f7fffff;
        }
        else {
          FUN_004d8a10(piVar4[10]);
          uVar3 = 0;
        }
        FUN_004d89d0(uVar3);
        FUN_004dd4b0(piVar2,iVar6,uVar7);
      }
      if (piVar2 == in_ECX) break;
      if (local_14 == (undefined4 *)0x0) {
        return;
      }
      piVar2 = (int *)*local_14;
      local_14 = (undefined4 *)local_14[1];
    }
    iVar6 = FUN_00420ef0();
    if (iVar6 == 0) break;
    piVar2 = (int *)**(undefined4 **)(iVar6 + 0xc);
    local_14 = (undefined4 *)(*(undefined4 **)(iVar6 + 0xc))[1];
  }
  return;
}



void FUN_005f94b0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c2a91;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x3c,uVar1);
  iVar5 = 0;
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00568e10();
  }
  local_4 = 0xffffffff;
  FUN_005661e0(0x1d);
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffff9;
  iVar3 = FUN_00401f00(0xc,uVar1);
  local_4 = 1;
  if (iVar3 != 0) {
    iVar5 = FUN_005696b0();
  }
  local_4 = 0xffffffff;
  FUN_00569750(0);
  FUN_005697f0(in_ECX);
  FUN_00565e00(iVar5);
  if (iVar5 != 0) {
    FUN_00569730();
    FUN_00401f20(iVar5);
  }
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x2000;
  iVar5 = FUN_00401f00(0xc);
  local_4 = 2;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00569e40();
  }
  local_4 = 0xffffffff;
  FUN_00565ec0(uVar4);
  *(undefined4 *)(iVar2 + 0x18) = 0x24;
  FUN_00569e90(0);
  FUN_00569ec0(param_1);
  uVar4 = FUN_009828c0();
  FUN_00468230(uVar4);
  (**(code **)(**(int **)(in_ECX + 0x58) + 0xa4))();
  (**(code **)(**(int **)(in_ECX + 0x58) + 0x20))();
  (**(code **)(**(int **)(in_ECX + 0x58) + 0x94))();
  FUN_005f1590(iVar2,1,1);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_005f9620(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_c4 [11];
  char local_b9;
  float fStack_b8;
  int *piStack_b4;
  float fStack_b0;
  int *local_ac;
  float local_a8;
  int *piStack_a4;
  int *piStack_a0;
  float fStack_9c;
  float fStack_98;
  int *piStack_94;
  int local_90;
  float fStack_8c;
  float fStack_88;
  int *piStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [28];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009c2abe;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_c4;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff30;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_b9 = 0;
  iVar3 = FUN_006ecc80(uVar2);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    cVar1 = FUN_004c97f0();
    piVar4 = DAT_00b35c24;
    if (cVar1 != '\0') {
      piVar4 = (int *)FUN_00424180();
    }
  }
  iVar3 = DAT_00b333c4[0x7d];
  local_ac = piVar4;
  local_90 = iVar3;
  if ((((int *)in_ECX[0x16] == (int *)0x0) ||
      (iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1), iVar5 == 0)) ||
     (local_a8 = _DAT_00b37d38, *(int *)(iVar5 + 8) == 0)) {
    local_a8 = (float)DAT_00b37d30;
  }
  if (((piVar4 == (int *)0x0) || (iVar3 == 0)) || (iVar5 = FUN_00535510(), iVar5 != 0))
  goto LAB_005f9e7a;
  FUN_005f11f0(auStack_64,auStack_70);
  FUN_005354c0(piVar4);
  iVar5 = FUN_0065abe0(&piStack_b4);
  if (*(uint *)(iVar3 + 0x1a8) != (uint)*(ushort *)(iVar5 + 2)) {
    FUN_00535460((uint)*(ushort *)(iVar5 + 2));
  }
  cVar1 = FUN_00535540(auStack_64,auStack_70,local_a8);
  if (cVar1 != '\0') {
    iVar5 = FUN_004806e0(*(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x28));
    if (iVar5 == 0) {
      piStack_a4 = (int *)0x0;
    }
    else {
      piStack_a4 = (int *)FUN_004dc270(iVar5);
    }
    piVar4 = piStack_a4;
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x28);
    if ((*(char *)(iVar3 + 0x18) == '\x01') && (iVar5 = *(int *)(iVar3 + 0x10) + iVar3, iVar5 != 0))
    {
      local_a8 = *(float *)(iVar5 + 0xc);
      local_b9 = '\x01';
      iVar3 = (**(code **)(*in_ECX + 0x154))();
      if (iVar3 != 0) {
        uVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x310))();
        pfVar7 = (float *)FUN_0053d4b0(&fStack_9c,uVar6);
        fStack_8c = *pfVar7;
        fStack_88 = pfVar7[1];
        piStack_84 = (int *)pfVar7[2];
        uVar6 = FUN_005e6a40(auStack_4c);
        pfVar7 = (float *)FUN_0053d4b0(auStack_58,uVar6);
        fStack_9c = *pfVar7;
        fStack_98 = pfVar7[1];
        piStack_94 = (int *)pfVar7[2];
      }
      fStack_b8 = fStack_9c - fStack_8c;
      fStack_b0 = fStack_98 - fStack_88;
      piStack_a0 = (int *)((float)piStack_94 - (float)piStack_84);
      fStack_8c = fStack_b8;
      fStack_88 = fStack_b0;
      piStack_84 = piStack_a0;
      FUN_0043f350();
      FUN_0043f3e0(&uStack_7c,*(undefined4 *)(local_90 + 0x10));
      if (((int *)in_ECX[0x16] == (int *)0x0) ||
         (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 8);
      }
      if (iVar3 == 0) {
        iVar3 = FUN_005e4330(4);
        if (iVar3 == 0) {
          fStack_b0 = 0.0;
          local_b9 = '\0';
        }
        else {
          fStack_b0 = *(float *)(*(int *)(iVar3 + 8) + 0x58);
        }
      }
      else {
        fStack_b0 = *(float *)(iVar3 + 0x7c);
      }
      fStack_b0 = fStack_b0 + 3.0;
      iVar3 = *(int *)(*(int *)(local_90 + 0x10) + 0x2c);
      fStack_b8 = 0.0;
      puVar8 = (undefined4 *)FUN_00497340(&piStack_b4);
      if (((byte)*puVar8 & 0x3f) == 0x11) {
        fStack_b8 = (float)FUN_00440ac0(&uStack_7c);
      }
      else {
        piVar4 = (int *)FUN_00494f10();
        if (((piVar4 != (int *)0x0) && (fStack_b8 = (float)piVar4[4], iVar3 != -1)) &&
           (piVar4 = (int *)(**(code **)(*piVar4 + 0x88))(), piVar4 != (int *)0x0)) {
          fStack_b8 = (float)(**(code **)(*piVar4 + 0x9c))(iVar3);
        }
      }
      puVar8 = (undefined4 *)FUN_00403c00();
      fVar9 = (float10)FUN_004ac760(fStack_b0,*puVar8);
      fStack_b0 = (float)fVar9;
      pfVar7 = (float *)FUN_00403c00();
      fVar11 = *pfVar7;
      piStack_a0 = (int *)(fStack_b0 * fVar11 * fStack_8c);
      fStack_98 = fStack_88 * fVar11 * fStack_b0;
      piStack_b4 = (int *)(fStack_b0 * fVar11 * (float)piStack_84);
      fStack_9c = (float)piStack_a0;
      piStack_94 = piStack_b4;
      fStack_80 = fStack_98;
      fVar9 = (float10)FUN_0089da90();
      fStack_b0 = (float)fVar9;
      pfVar7 = (float *)FUN_00403c00();
      if (fStack_b0 < *pfVar7) {
        pfVar7 = (float *)FUN_00403c00();
        piStack_b4 = (int *)(fStack_b0 / *pfVar7);
        FUN_0069dd70(piStack_b4);
      }
      puVar8 = (undefined4 *)FUN_00497340(&piStack_b4);
      if (((byte)*puVar8 & 0x3f) == 8) {
        puVar8 = (undefined4 *)FUN_00403c00();
        FUN_0069dd70(*puVar8);
      }
      FUN_004529e0(auStack_40,&fStack_9c);
      (**(code **)(*local_ac + 0x58))();
      uVar6 = *(undefined4 *)(local_90 + 0x10);
      FUN_008a6410();
      (**(code **)(**(int **)(iVar5 + 0x50) + 0x60))(auStack_40,uVar6);
      (**(code **)(*piStack_b4 + 0x58))();
      FUN_005f05f0(uStack_7c,uStack_78,uStack_74,piStack_a4,local_a8,fStack_b8);
      if (local_b9 != '\0') {
        fStack_9c = fStack_8c;
        puVar15 = auStack_70;
        fStack_98 = fStack_88;
        piStack_94 = piStack_84;
        fVar9 = (float10)FUN_0047d9e0(puVar15);
        uVar6 = FUN_0047da10(auStack_58,(float)fVar9,puVar15);
        FUN_0043f320(uVar6);
        FUN_0043f350();
        puVar8 = (undefined4 *)FUN_00497340(&piStack_b4);
        if (((byte)*puVar8 & 0x3f) == 8) {
          if ((piStack_a4 == (int *)0x0) ||
             (cVar1 = (**(code **)(*piStack_a4 + 400))(), cVar1 == '\0')) {
            local_ac = DAT_00b371b0;
          }
          else {
            local_ac = (int *)FUN_005e1bf0();
          }
        }
        else {
          local_ac = (int *)FUN_005361b0(fStack_b8);
        }
        if (local_ac != (int *)0x0) {
          FUN_006ecc80();
          uVar6 = FUN_004c9be0();
          uVar16 = 3;
          FUN_006ecc80(uVar6,3);
          uVar6 = FUN_00441800(uVar6,uVar16);
          piStack_b4 = (int *)FUN_00401f00(0x20);
          uVar16 = 0;
          uStack_14 = 0;
          if (piStack_b4 != (int *)0x0) {
            uVar17 = 1;
            uVar14 = 0x3f800000;
            uVar10 = 0x40a00000;
            piVar4 = local_ac;
            fVar11 = fStack_9c;
            fVar12 = fStack_98;
            piVar13 = piStack_94;
            uVar16 = FUN_006ecc80(0x40a00000,uVar6,local_ac,fStack_9c,fStack_98,piStack_94,uStack_7c
                                  ,uStack_78,uStack_74,0x3f800000,1);
            uVar16 = FUN_005713f0(uVar16,uVar10,uVar6,piVar4,fVar11,fVar12,piVar13,uStack_7c,
                                  uStack_78,uStack_74,uVar14,uVar17);
          }
          uStack_14 = 0xffffffff;
          FUN_00678d30(uVar16);
        }
      }
LAB_005f9dfe:
      local_b9 = 1;
      piVar4 = piStack_a4;
LAB_005f9e07:
      if (in_ECX != DAT_00b333c4) goto LAB_005f9e6f;
    }
    else if (in_ECX != DAT_00b333c4) {
      iVar3 = FUN_0047dde0(iVar3);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 0xc);
      }
      if ((((piVar4 != (int *)0x0) && (cVar1 = (**(code **)(*piVar4 + 400))(), cVar1 != '\0')) &&
          (cVar1 = (**(code **)(*piVar4 + 0x198))(0), cVar1 == '\0')) &&
         ((iVar3 != 0 &&
          (puVar8 = (undefined4 *)FUN_00497340(&piStack_b4), ((byte)*puVar8 & 0x3f) == 0x14)))) {
        if ((int *)in_ECX[0x16] == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
        }
        fStack_b8 = 0.0;
        if (iVar3 == 0) {
          cVar1 = FUN_005e3270();
          if (cVar1 == '\0') {
            uVar6 = (**(code **)(*piVar4 + 0x19c))(&fStack_b8,&local_ac);
            fVar9 = (float10)FUN_005f4880(uVar6);
            uVar6 = (**(code **)(*in_ECX + 0x284))(0,(float)fVar9);
            uVar6 = (**(code **)(*in_ECX + 0x284))(7,uVar6);
            uVar6 = (**(code **)(*in_ECX + 0x284))(0x11,uVar6);
            FUN_00547280(uVar6);
          }
          else {
            piStack_b4 = (int *)(**(code **)(*in_ECX + 0x34c))();
            fStack_b8 = (float)(int)piStack_b4;
          }
        }
        else {
          fVar9 = (float10)FUN_00484f80(in_ECX,0x3f800000);
          fStack_b8 = (float)fVar9;
        }
        cVar1 = FUN_005e3270();
        if ((cVar1 == '\0') && (iVar3 = FUN_005e5a00(), iVar3 != 0)) {
          FUN_004b4c70(0xffffffff,1,0);
          FUN_006af880();
          FUN_00484470();
          FUN_00401f20(iVar3);
        }
        else {
          FUN_006af880();
        }
        goto LAB_005f9dfe;
      }
      goto LAB_005f9e07;
    }
    if (((piVar4 == (int *)0x0) || (iVar3 = FUN_006ecc80(), iVar3 == 0)) ||
       (iVar3 = FUN_004440c0(), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x24);
    }
    if ((((iVar3 != 0) && (iVar3 = FUN_00582160(0,1), piVar4 == *(int **)(iVar3 + 200))) &&
        (cVar1 = FUN_00536ae0(piVar4), cVar1 != '\0')) && (piVar4 + 0x11 != (int *)0x0)) {
      FUN_004fbf90(piVar4,piVar4 + 0x11,0x10000000);
      local_b9 = 1;
    }
  }
LAB_005f9e6f:
  FUN_005354c0(0);
LAB_005f9e7a:
  *unaff_FS_OFFSET = local_1c;
  return local_b9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f9eb0(int *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_ECX;
  int iVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ad061;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar9 = 0;
  if (param_1 != (int *)0x0) {
    cVar2 = (**(code **)(*param_1 + 0x198))(0,uVar3);
    if (cVar2 != '\0') {
      iVar4 = FUN_00401f00(0x3c);
      uStack_4 = 0;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_00568e10();
      }
      uStack_4 = 0xffffffff;
      FUN_005661e0(0x14);
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400006;
      iVar5 = FUN_00401f00(0xc);
      uStack_4 = 1;
      if (iVar5 != 0) {
        iVar9 = FUN_005696b0();
      }
      uStack_4 = 0xffffffff;
      FUN_00569750(0);
      FUN_005697f0(param_1);
      FUN_00565e00(iVar9);
      if (iVar9 != 0) {
        FUN_00569730();
        FUN_00401f20(iVar9);
      }
      iVar9 = FUN_00401f00(0xc);
      uStack_4 = 2;
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = FUN_00569e40();
      }
      uStack_4 = 0xffffffff;
      FUN_00565ec0(iVar9);
      if (iVar9 != 0) {
        FUN_0060d0a0();
        FUN_00401f20(iVar9);
      }
      *(undefined4 *)(iVar4 + 0x18) = 0x11;
      FUN_00569e90(0);
      FUN_00569ec0(param_1);
      FUN_00468230(100);
      FUN_00566830(1);
      (**(code **)(**(int **)(in_ECX + 0x58) + 0x20))();
      piVar1 = *(int **)(in_ECX + 0x58);
      if (piVar1[2] != 0) {
        uVar6 = (**(code **)(*piVar1 + 0x390))();
        uVar7 = (**(code **)(*piVar1 + 0xc0))(uVar6);
        uVar8 = (**(code **)(*piVar1 + 0xcc))(uVar7);
        FUN_004268b0(piVar1[2],piVar1[1],uVar8,uVar7,uVar6);
      }
      FUN_005f1590(iVar4,1,1);
      if ((int *)param_1[0x16] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x16] + 0x204))(1);
      }
      param_1[0x21] = _DAT_00b36cc0;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005fa0a0(float *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined1 auStack_e4 [12];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined1 local_b4 [4];
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_e4;
  local_bc = param_1[1];
  local_c0 = *param_1;
  local_b8 = param_1[2];
  local_cc = *param_1;
  local_c8 = param_1[1];
  local_c4 = param_1[2];
  local_d8 = *param_1;
  local_d4 = param_1[1];
  local_d0 = param_1[2];
  fVar6 = (float10)FUN_005e0660();
  fVar7 = (float10)32.0;
  if (fVar6 * (float10)0.25 < fVar7) {
    fVar7 = (float10)FUN_005e0660();
    fVar7 = fVar7 * (float10)0.25;
  }
  local_c4 = (float)(fVar7 + (float10)local_c4);
  local_d0 = local_d0 - _DAT_00b37328;
  local_80 = 0;
  local_7c = 0;
  local_50 = 0;
  local_30 = 0;
  local_2c = 0;
  local_5c = 0x3f800000;
  local_28 = 0;
  local_40 = DAT_00ba7a40;
  uStack_3c = DAT_00ba7a44;
  uStack_38 = DAT_00ba7a48;
  uStack_34 = uRam00ba7a4c;
  puVar2 = (undefined4 *)FUN_0065abe0(local_b4);
  local_7c = *puVar2;
  local_a0 = local_cc * 0.14287673;
  fStack_9c = local_c8 * 0.14287673;
  fStack_98 = local_c4 * 0.14287673;
  uStack_94 = uStack_a4;
  local_b0 = local_d8 * 0.14287673;
  local_40 = DAT_00ba7a40;
  uStack_3c = DAT_00ba7a44;
  uStack_38 = DAT_00ba7a48;
  uStack_34 = uRam00ba7a4c;
  fStack_ac = local_d4 * 0.14287673;
  fStack_a8 = local_d0 * 0.14287673;
  uStack_84 = uStack_a4;
  local_90 = local_b0;
  fStack_8c = fStack_ac;
  fStack_88 = fStack_a8;
  iVar3 = FUN_006ecc80();
  if (iVar3 != 0) {
    cVar1 = FUN_004c97f0();
    piVar4 = DAT_00b35c24;
    if (cVar1 != '\0') {
      piVar4 = (int *)FUN_00424180();
    }
    uVar5 = 0;
    if (piVar4 == (int *)0x0) goto LAB_005fa250;
    cVar1 = FUN_004c97f0();
    piVar4 = DAT_00b35c24;
    if (cVar1 != '\0') {
      piVar4 = (int *)FUN_00424180();
    }
    uVar5 = (**(code **)(*piVar4 + 0x88))(&local_a0);
    if ((char)uVar5 == '\0') goto LAB_005fa250;
  }
  FUN_005ea270(&local_c0);
  if ((((iVar3 == 0) || (piVar4 = (int *)FUN_004cafc0(), piVar4 == (int *)0x0)) ||
      (cVar1 = (**(code **)(*piVar4 + 0x88))(), cVar1 == '\0')) ||
     (uVar5 = FUN_005e06c0(&local_c0,iVar3,0x3c23d70a), (char)uVar5 == '\0')) {
    iVar3 = FUN_0065a2c0();
    if (iVar3 == 0) {
      return 1;
    }
    uVar5 = FUN_008949c0(&local_c0,1,1,1);
    return uVar5;
  }
LAB_005fa250:
  return uVar5 & 0xffffff00;
}



void FUN_005fa300(byte param_1)

{
  FUN_005f13d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_005fa320(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *in_ECX;
  undefined3 unaff_EBX;
  int unaff_EBP;
  int iVar11;
  int *piVar12;
  int *unaff_FS_OFFSET;
  float10 fVar13;
  undefined4 uVar14;
  float fVar15;
  int iStack_90;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [96];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2afe;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff5c;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar12 = (int *)0x0;
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 8))(uVar4);
    if (iVar5 == 0) goto LAB_005faa4c;
  }
  if (in_ECX[0x16] != 0) {
    cVar2 = FUN_0045a500();
    if (cVar2 == '\0') {
      (**(code **)(*(int *)in_ECX[0x16] + 0x18))();
    }
  }
  uVar3 = (**(code **)(*in_ECX + 0x334))(1);
  iVar5 = CONCAT13(uVar3,unaff_EBX);
  if (((in_ECX[0x16] != 0) && (iVar11 = *(int *)(in_ECX[0x16] + 8), iVar11 != 0)) &&
     (*(int *)(iVar11 + 0x28) != 0)) {
    FUN_00569e60();
  }
  uStack_8c = uStack_8c & 0xffffff00;
  cVar2 = FUN_005e6cd0(0);
  if (cVar2 != '\0') {
    uStack_8c = CONCAT31(uStack_8c._1_3_,1);
  }
  iVar11 = 3;
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    iVar11 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
    FUN_00674550(in_ECX,iVar11);
  }
  if ((float)in_ECX[8] == 3.4028235e+38) {
    FUN_004d89d0(0);
LAB_005fa469:
    cVar2 = FUN_005eb400();
    if (cVar2 == '\0') goto LAB_005fa474;
  }
  else {
    if (((DAT_00b3f9a8 == (float)in_ECX[0xb]) && (DAT_00b3f9ac == (float)in_ECX[0xc])) &&
       (DAT_00b3f9b0 == (float)in_ECX[0xd])) goto LAB_005fa469;
    cVar2 = FUN_0045a500();
    if (((cVar2 == '\0') && (1 < iVar11)) && (iVar11 < 4)) goto LAB_005fa469;
LAB_005fa474:
    FUN_005eb370();
  }
  iStack_90 = FUN_00401f00(0x2ec);
  puStack_8 = (undefined1 *)0x0;
  if (iStack_90 != 0) {
    piVar12 = (int *)FUN_00628ee0();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar12 + 4))(in_ECX[0x16]);
  if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x16])(1);
  }
  in_ECX[0x16] = (int)piVar12;
  cVar2 = (**(code **)(*piVar12 + 0x210))();
  if ((cVar2 != '\0') && ((int *)in_ECX[0x16] != (int *)0x0)) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x300))(1);
  }
  FUN_00673a90(in_ECX,0,0,0,0);
  FUN_00634cb0(in_ECX);
  (**(code **)(*piVar12 + 0x5c))();
  iVar6 = FUN_0041e6f0();
  if ((iVar6 != 0) && (iVar11 != 1)) {
    iVar11 = *(int *)in_ECX[0x16];
    uVar14 = 0;
    uVar7 = FUN_00486790(9,0);
    (**(code **)(iVar11 + 0x104))(uVar7,uVar14);
    iVar11 = *(int *)in_ECX[0x16];
    uVar7 = FUN_00486790(0xc,0);
    (**(code **)(iVar11 + 0x10c))(uVar7);
    iVar11 = *(int *)in_ECX[0x16];
    uVar7 = FUN_00486790(0xd,0);
    (**(code **)(iVar11 + 0x110))(uVar7);
    iVar11 = *(int *)in_ECX[0x16];
    uVar7 = FUN_00486790(0xe,0);
    (**(code **)(iVar11 + 0x108))(uVar7);
    iVar11 = FUN_00486790(9,0);
    fVar13 = (float10)FUN_00612a90();
    fVar15 = (float)fVar13;
    if (iVar11 != 0) {
      FUN_00484470();
      FUN_00401f20(iVar11);
    }
    (**(code **)(*(int *)in_ECX[0x16] + 0x328))(fVar15);
    (**(code **)(*(int *)in_ECX[0x16] + 0xf0))(1);
    iVar11 = iVar5;
  }
  (**(code **)(*(int *)in_ECX[0x16] + 0x4c))();
  FUN_005e6e00();
  if ((char)((uint)unaff_EBP >> 0x18) != '\0') {
    iVar6 = (**(code **)(*in_ECX + 0x330))();
    if (iVar6 == 0) {
      FUN_005eae70();
      piVar12 = (int *)in_ECX[0x16];
      iVar11 = *piVar12;
      uVar7 = (**(code **)(iVar11 + 0x148))(1,1);
      (**(code **)(*piVar12 + 0x148))(0,uVar7);
      (**(code **)(iVar11 + 0x228))();
      iVar11 = iVar5;
    }
  }
  iVar6 = in_ECX[0xf];
  bVar1 = true;
  iVar8 = (**(code **)(*in_ECX + 0x170))();
  if ((*(char *)(iVar8 + 4) == '$') && (iVar6 != 0)) {
    cVar2 = (**(code **)(*in_ECX + 0x278))();
    if (cVar2 == '\0') {
      bVar1 = false;
    }
  }
  if ((char)in_ECX[0x30] == '\0') {
    cVar2 = (**(code **)(*in_ECX + 0x198))(0);
    if ((cVar2 != '\0') && (bVar1)) {
      iVar8 = FUN_0041ffa0();
      if (iVar8 == 0) {
        iVar8 = FUN_004212c0();
        if (iVar8 == 0) goto LAB_005fa6cc;
      }
    }
  }
  else {
LAB_005fa6cc:
    FUN_005e6680(0);
    *(undefined1 *)(in_ECX + 0x30) = 1;
  }
  (**(code **)(*in_ECX + 0x178))(0);
  if ((iVar6 != 0) && (iVar11 == 1)) {
    iVar8 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))();
    if (iVar8 != 0) {
      iVar8 = (**(code **)(*in_ECX + 0x380))();
      if (iVar8 == 0) {
        FUN_0088ce30(iVar6,1,1,0);
      }
    }
  }
  if ((char)in_ECX[0x30] == '\0') {
LAB_005fa930:
    if (iVar6 != 0) {
      FUN_005ee1b0();
    }
  }
  else if (iVar6 != 0) {
    (**(code **)(*in_ECX + 0x1c8))();
    iVar8 = (**(code **)(*in_ECX + 0x164))();
    if (iVar8 == 0) {
LAB_005fa8a2:
      if ((char)in_ECX[0x30] != '\0') {
        FUN_005e6680(1);
        fVar13 = (float10)(**(code **)(*in_ECX + 0x1e0))();
        FUN_0070fdd0((float)fVar13);
        uStack_84 = 0;
        uStack_80 = 0x3f800000;
        uStack_7c = 0;
        puVar9 = (undefined4 *)FUN_007101f0(auStack_78,&uStack_84);
        uStack_84 = *puVar9;
        uStack_80 = puVar9[1];
        uStack_7c = puVar9[2];
        FUN_008ab440(iVar6,&uStack_84,1,0,1);
      }
    }
    else {
      uVar7 = 0x20;
      (**(code **)(*in_ECX + 0x164))(0x20);
      cVar2 = FUN_00470d00(uVar7);
      if (cVar2 == '\0') goto LAB_005fa8a2;
      (**(code **)(*in_ECX + 0x164))();
      FUN_00470fc0(5,0);
      FUN_00474ab0(0,0x20,0xffffffff,0,0xffffffff);
      iVar8 = FUN_004706e0(0);
      FUN_005e6680(2);
      iVar11 = unaff_EBP;
      iVar6 = iVar5;
      if (iVar8 == 0) {
LAB_005fa891:
        FUN_005f5d10();
      }
      else {
        cVar2 = (**(code **)(*in_ECX + 0x278))();
        if (cVar2 != '\0') {
          fVar13 = (float10)FUN_0051ae20(1);
          FUN_00476d10(in_ECX,0,(float)fVar13);
          FUN_00474510(in_ECX);
          FUN_0070fdd0(in_ECX[10]);
          iStack_90 = 0;
          uStack_8c = 0x3f800000;
          iStack_88 = 0;
          piVar12 = (int *)FUN_007101f0(auStack_6c,&iStack_90);
          iStack_90 = *piVar12;
          uStack_8c = piVar12[1];
          iStack_88 = piVar12[2];
          FUN_008ab440(in_ECX[0xf],&iStack_90,1,0,0);
          goto LAB_005fa891;
        }
        *(undefined4 *)(iVar8 + 0x48) = *(undefined4 *)(iVar8 + 0x30);
        FUN_00476d10(in_ECX,0,*(undefined4 *)(iVar8 + 0x30));
        FUN_00474510(in_ECX);
        FUN_005f5d10();
      }
    }
    (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
    *(undefined1 *)(in_ECX + 0x30) = 0;
    goto LAB_005fa930;
  }
  FUN_005e7230(0,0);
  piVar12 = (int *)in_ECX[0x16];
  if (piVar12 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar12 + 0x184))();
    if ((iVar5 != 0) && (*(char *)(iVar5 + 0x20) == '\x06')) {
      (**(code **)(*piVar12 + 0x17c))(0);
    }
  }
  cVar2 = (**(code **)(*in_ECX + 0x198))(0);
  if ((cVar2 == '\0') && ((iVar11 == 3 || (iVar11 == 2)))) {
    FUN_005eda20(0);
  }
  if (piVar12 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar12 + 0x248))();
    if (cVar2 != '\0') {
      iVar5 = (**(code **)(*piVar12 + 0xcc))();
      if (iVar5 != 0) {
        piVar10 = (int *)(**(code **)(*piVar12 + 0xcc))();
        cVar2 = (**(code **)(*piVar10 + 400))();
        if (cVar2 != '\0') {
          iVar5 = (**(code **)(*piVar12 + 0xcc))();
          if (iVar5 != 0) {
            iVar5 = FUN_00659a00();
            if (iVar5 != 0) {
              (**(code **)(*piVar12 + 0x24c))(0);
              FUN_00674550(in_ECX,0);
              (**(code **)(*piVar12 + 0x24c))(1);
            }
          }
        }
      }
    }
  }
  iVar5 = (**(code **)(*in_ECX + 0x154))();
  if (iVar5 != 0) {
    uVar7 = (**(code **)(*in_ECX + 0x154))();
    FUN_007b4280(0,uVar7);
    FUN_007c6c30(uVar7);
  }
LAB_005faa4c:
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005faa70(void)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  iVar4 = 0;
  if (iVar3 != 0) {
    cVar2 = (**(code **)(*in_ECX + 400))();
    if (cVar2 != '\0') {
      iVar4 = iVar3;
    }
  }
  uVar1 = *(ushort *)(iVar4 + 0x30);
  iVar4 = FUN_0041e980();
  iVar4 = iVar4 + (uint)uVar1;
  uVar5 = FUN_005f1910(0x1d);
  iVar3 = FUN_0056a300(uVar5);
  if (iVar3 == 4) {
    iVar4 = iVar4 + _DAT_00b375e8;
  }
  return iVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005faae0(float param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float *pfVar6;
  int *in_ECX;
  float unaff_ESI;
  float10 fVar7;
  float10 extraout_ST0;
  float fVar8;
  float fStack_c;
  float local_8;
  int iStack_4;
  
  local_8 = param_1 - (float)in_ECX[0x2f];
  if ((param_1 < (float)in_ECX[0x2f]) || ((float)in_ECX[0x2f] < 0.0)) {
    in_ECX[0x2f] = (int)param_1;
    local_8 = 0.0;
    if ((0.0 < param_1) && (param_1 < 0.3)) {
      in_ECX[0x2f] = 0;
      local_8 = param_1;
    }
  }
  (**(code **)(*in_ECX + 0x2e4))(local_8);
  cVar2 = (**(code **)(*in_ECX + 0x198))(0);
  if (cVar2 != '\0') goto LAB_005fae7f;
  iVar3 = (**(code **)(*in_ECX + 0x330))();
  if ((iVar3 != 0) &&
     ((*(char *)((int)DAT_00b333c4 + 0x6e5) == '\0' || (cVar2 = FUN_0065d550(), cVar2 == '\0')))) {
    (**(code **)(*in_ECX + 0x33c))(unaff_ESI);
    FUN_00420e90(in_ECX);
  }
  uVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c0))();
  if ((((uVar4 & 0x200) != 0) && ((int *)in_ECX[0x16] != (int *)0x0)) &&
     (uVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c0))(), (uVar4 & 0xf) != 0)) {
    fVar7 = (float10)(**(code **)(*in_ECX + 0x288))(0);
    fVar7 = (float10)FUN_00547ed0((float)fVar7);
    unaff_ESI = (float)fVar7;
    iVar3 = (**(code **)(*in_ECX + 0x284))(0xb);
    fVar7 = (float10)FUN_00547f40((float)iVar3 / fStack_c);
    fVar8 = (float)(fVar7 * (float10)unaff_ESI);
    uVar5 = FUN_005f1910(0xd);
    uVar5 = FUN_0056a300(uVar5);
    fVar1 = _DAT_00b375f0;
    switch(uVar5) {
    case 1:
      pfVar6 = (float *)FUN_00403c00();
      fVar1 = *pfVar6;
      break;
    case 2:
      pfVar6 = (float *)FUN_00403c00();
      fVar1 = *pfVar6;
      break;
    case 3:
      pfVar6 = (float *)FUN_00403c00();
      fVar1 = *pfVar6;
      break;
    case 4:
      pfVar6 = (float *)FUN_00403c00();
      fVar1 = *pfVar6;
    }
    if (0.0 < fVar1 * fVar8) {
      FUN_005e07d0(-(fVar1 * fVar8));
    }
  }
  if (((in_ECX == DAT_00b333c4) && ((int *)in_ECX[0x16] != (int *)0x0)) &&
     (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))(), iVar3 == 5)) {
    uVar5 = FUN_005f1910(0x1c);
    iVar3 = FUN_0056a300(uVar5);
    if (iVar3 == 0) {
      FUN_005e07d0(-(_DAT_00b37010 * unaff_ESI));
    }
  }
  FUN_005f2720(unaff_ESI);
  iVar3 = (**(code **)(in_ECX[0x17] + 0x30))();
  if (iVar3 == 0) {
    fVar8 = 0.0;
    if (in_ECX == DAT_00b333c4) {
      fVar7 = (float10)FUN_0065d270(0,9);
LAB_005fad6a:
      fVar8 = (float)fVar7;
    }
    else if ((int *)in_ECX[0x16] != (int *)0x0) {
      fVar7 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x468))(9);
      goto LAB_005fad6a;
    }
    iVar3 = FUN_005f1910(9);
    fVar8 = (float)iVar3 + fVar8;
    (**(code **)(*in_ECX + 0x288))(9);
    iVar3 = FUN_009828c0();
    fVar7 = (float10)iVar3;
    if (extraout_ST0 - fVar7 < (float10)0.0) {
      fVar7 = fVar7 - (float10)1.0;
    }
    if ((float)fVar7 < fVar8) {
      uVar5 = (**(code **)(*in_ECX + 0x284))(0x39,fVar8);
      uVar5 = (**(code **)(*in_ECX + 0x284))(2,uVar5);
      fVar7 = (float10)FUN_00548d60(uVar5);
      if (0.0 < (float)(fVar7 * (float10)unaff_ESI)) {
        (**(code **)(*in_ECX + 0x2a4))(9,(float)(fVar7 * (float10)unaff_ESI),0);
      }
    }
  }
  FUN_005e7a60(unaff_ESI);
  if ((char)DAT_00b333c4[0x165] != '\0') {
    FUN_005f2530(unaff_ESI);
  }
  (**(code **)(*in_ECX + 0x2d8))(unaff_ESI);
LAB_005fae7f:
  in_ECX[0x2f] = iStack_4;
  return;
}



void FUN_005faea0(int *param_1,int param_2,int param_3,char param_4,undefined4 param_5)

{
  float fVar1;
  uint3 uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  float10 fVar12;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar2 = (uint3)uStack_18;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2b2b;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  uStack_18 = (uint)(uint3)uStack_18;
  if ((char)param_1[1] == '\"') {
    cVar3 = (**(code **)(*param_1 + 0x78))(uVar5);
    if (cVar3 != '\0') {
      FUN_004fbf90();
      FUN_004fbf90(param_1,in_ECX + 0x11,2);
      if (in_ECX == DAT_00b333c4) {
        FUN_0057acc0(DAT_00b38570,0,1,0xbf800000);
      }
      goto LAB_005fb98e;
    }
    if ((in_ECX[0x16] != 0) && (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))(), iVar6 == 5))
    {
      if (in_ECX == DAT_00b333c4) {
        FUN_0057acc0(DAT_00b38a30,0,1,0xbf800000);
      }
      goto LAB_005fb98e;
    }
  }
  if (((param_3 != 0) && (cVar3 = FUN_0041df40(), cVar3 != '\0')) && ((char)param_5 == '\0')) {
LAB_005faf90:
    if (in_ECX == DAT_00b333c4) {
      FUN_0057acc0(DAT_00b38a30,0,1,0xbf800000);
    }
    goto LAB_005fb98e;
  }
  iVar6 = (**(code **)(*in_ECX + 0x170))();
  if (iVar6 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  FUN_00485e00();
  iVar6 = FUN_004869c0(param_1);
  FUN_004691b0(param_1);
  if (iVar6 < 1) goto LAB_005fb98e;
  if ((param_2 < 1) &&
     ((((char)param_1[1] == '\"' || (param_1 == DAT_00b35ed0)) || ((char)param_1[1] == '&')))) {
    param_2 = iVar6;
  }
  if ((param_3 == 0) || (iVar6 = FUN_0041e210(0x2b), iVar6 == 0)) {
    iVar6 = FUN_0046ca20(param_1);
    fVar1 = (float)iVar6;
    if (iVar6 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
  }
  else {
    fVar1 = *(float *)(iVar6 + 0xc);
  }
  uStack_14 = 0;
  switch((char)param_1[1]) {
  case '\x13':
    if (in_ECX == DAT_00b333c4) {
      cVar3 = FUN_006605a0(0);
      if ((cVar3 != '\0') && (DAT_00b38a98 == 0)) {
        FUN_0057acc0(DAT_00b38a60,0,1,0xbf800000);
        goto LAB_005fb98e;
      }
      iVar6 = FUN_0041e6f0();
      if (iVar6 != 0) {
        iVar6 = FUN_00486330(0);
        iVar7 = FUN_00486330(1);
        iVar8 = FUN_00486330(2);
        iVar9 = FUN_00486330(3);
        if (iVar6 != 0) {
          FUN_0057cc00();
          FUN_00593810(iVar6,iVar7,iVar8,iVar9);
          break;
        }
        if (iVar7 != 0) {
          FUN_00484470();
          FUN_00401f20(iVar7);
        }
        if (iVar8 != 0) {
          FUN_00484470();
          FUN_00401f20(iVar8);
        }
        if (iVar9 != 0) {
          FUN_00484470();
          FUN_00401f20(iVar9);
        }
      }
      FUN_00579c10(DAT_00b388d8,0,1,DAT_00b38cf0,0);
      goto LAB_005fb98e;
    }
    break;
  case '\x14':
    cVar3 = FUN_00468ff0(0xd,0);
    if ((cVar3 != '\0') && (fVar1 <= 0.0)) {
      if ((in_ECX == DAT_00b333c4) && (cVar3 = FUN_00578f60(), cVar3 != '\0')) {
        FUN_0057acc0(DAT_00b38558,0,1,0xbf800000);
      }
      goto LAB_005fb98e;
    }
    (**(code **)(*in_ECX + 0x2c0))();
  case '\x1a':
    if (((char)param_1[1] == '\x1a') && (iVar6 = FUN_00447490("ITMTorchHeldEquip"), iVar6 != 0)) {
      if ((in_ECX == DAT_00b333c4) && (cVar3 = FUN_00578f60(), cVar3 != '\0')) {
        uVar10 = 0x121;
      }
      else {
        uVar10 = 0x102;
      }
      iVar6 = FUN_0065ac50(*(undefined4 *)(iVar6 + 0xc),0,uVar10,1);
      if (iVar6 != 0) {
        FUN_006b73e0();
        FUN_00401f20(iVar6);
      }
    }
switchD_005fb082_caseD_16:
    cVar3 = FUN_005e3de0(param_1,param_3);
    if (cVar3 == '\0') {
      if (in_ECX == DAT_00b333c4) {
        FUN_0057acc0(DAT_00b38a80,0,1,0xbf800000);
        goto LAB_005fb98e;
      }
    }
    else {
      if (1 < param_2) {
        param_2 = 1;
      }
      cVar3 = FUN_005f3140(param_1,param_2,param_3,param_5);
      if (cVar3 != '\0') {
        if ((in_ECX == DAT_00b333c4) && (param_4 == '\0')) {
          FUN_00662c10(param_1,param_3);
        }
        else {
          FUN_005e48d0(param_1,param_3);
        }
      }
    }
    break;
  case '\x15':
    if (in_ECX == DAT_00b333c4) {
      cVar3 = FUN_006605a0(0);
      if ((cVar3 != '\0') && (cVar3 = FUN_00578f60(), cVar3 == '\0')) {
        FUN_0057acc0(DAT_00b38a68,0,1,0xbf800000);
        goto LAB_005fb98e;
      }
      (**(code **)(*param_1 + 0xcc))(0);
    }
    break;
  case '\x16':
    goto switchD_005fb082_caseD_16;
  default:
    uStack_18 = CONCAT13(1,uVar2);
    break;
  case '\x19':
    FUN_004fbf90();
    cVar3 = (**(code **)(*param_1 + 0x78))();
    if (cVar3 == '\0') {
      FUN_005e44c0(param_1,param_3,in_ECX != DAT_00b333c4);
      FUN_005e99c0(param_1,1,1);
    }
    else if (in_ECX == DAT_00b333c4) {
      FUN_0057acc0(DAT_00b394c0,0,1,0xbf800000);
    }
    goto LAB_005fb98e;
  case '!':
    iVar6 = (**(code **)(*in_ECX + 0x380))();
    if ((iVar6 != 0) && (iVar6 = (**(code **)(*in_ECX + 0x18c))(), iVar6 != 0)) goto LAB_005faf90;
    if (1 < param_2) {
      param_2 = 1;
    }
    if (fVar1 <= 0.0) {
      if ((in_ECX == DAT_00b333c4) && (cVar3 = FUN_00578f60(), cVar3 != '\0')) {
        FUN_0057acc0(DAT_00b38558,0,1,0xbf800000);
      }
    }
    else {
      FUN_005f3140(param_1,param_2,param_3,param_5);
    }
    FUN_0065dd20();
    (**(code **)(*in_ECX + 0x2c0))();
    break;
  case '\"':
    FUN_005f3140(param_1,param_2,param_3,param_5);
    if (0 < DAT_00b3b7d0) {
      FUN_00607f90(param_1,param_2);
    }
    break;
  case '&':
    if (in_ECX != DAT_00b333c4) break;
    cVar3 = FUN_006605a0(0);
    if ((cVar3 == '\0') || (DAT_00b38a88 != 0)) {
      if (((char)param_1[0x1c] == '\0') && ((param_3 == 0 || (iVar6 = FUN_0041e8c0(), iVar6 == 0))))
      {
        FUN_0057acc0(DAT_00b38870,0,1,0xbf800000);
        goto LAB_005fb98e;
      }
      FUN_0057cc00();
      iVar6 = FUN_00401f00(0xc);
      uStack_4 = 0;
      if (iVar6 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_00484420(param_1,0);
      }
      uStack_4 = 0xffffffff;
      FUN_00446cb0(param_3);
      iVar6 = param_2;
      if (param_3 != 0) {
        sVar4 = FUN_0041e860();
        iVar6 = (int)sVar4;
      }
      FUN_0060d020(iVar6);
      FUN_005cfb50(uVar10);
      break;
    }
    goto LAB_005fb5bb;
  case '(':
    uStack_14 = 1;
    cVar3 = FUN_00414eb0();
    if (cVar3 == '\0') {
      FUN_004fbf90();
      cVar3 = FUN_005e08c0(param_1,param_3,in_ECX != DAT_00b333c4);
      if (cVar3 != '\0') {
        FUN_005e99c0(param_1,1,1);
      }
      goto LAB_005fb98e;
    }
    if (in_ECX == DAT_00b333c4) {
      FUN_0066a490(param_1);
      goto LAB_005fb98e;
    }
    break;
  case '*':
    if (in_ECX == DAT_00b333c4) {
      cVar3 = FUN_006605a0(0);
      if ((cVar3 != '\0') && (cVar3 = FUN_00578f60(), cVar3 == '\0')) {
        FUN_0057acc0(DAT_00b38a68,0,1,0xbf800000);
        goto LAB_005fb98e;
      }
      iVar6 = (**(code **)(*DAT_00b333c4 + 0x380))();
      if ((iVar6 != 0) && (iVar6 = (**(code **)(*in_ECX + 0x18c))(), iVar6 != 0)) {
        FUN_0057acc0(DAT_00b38a40,0,1,0xbf800000);
        goto LAB_005fb98e;
      }
      FUN_0057cc00();
      FUN_005d5200(param_1);
    }
  }
  if ((param_1 == DAT_00b35ed0) && (in_ECX == DAT_00b333c4)) {
    cVar3 = FUN_006605a0(0);
    if ((cVar3 != '\0') && (DAT_00b38a90 == 0)) {
      FUN_0057acc0(DAT_00b38a78,0,1,0xbf800000);
      goto LAB_005fb98e;
    }
    uStack_18 = uStack_18 & 0xffffff;
    FUN_0057cc00();
    FUN_005d2070(1,param_2,0,0);
  }
  if ((param_1 == DAT_00b35edc) && (in_ECX == DAT_00b333c4)) {
    cVar3 = FUN_006605a0(0);
    if ((cVar3 != '\0') && (DAT_00b38a88 == 0)) {
LAB_005fb5bb:
      FUN_0057acc0(DAT_00b38a70,0,1,0xbf800000);
      goto LAB_005fb98e;
    }
    uStack_18 = uStack_18 & 0xffffff;
    cVar3 = FUN_005e0860();
    if (cVar3 == '\0') {
      FUN_0057add0(DAT_00b38878,0xbf800000,0,0);
    }
    else {
      (**(code **)(*in_ECX + 0x100))(param_1,param_3,1,0,0,0,0,0,1);
      FUN_0057add0(DAT_00b38890,0x40000000,0,0);
      iVar6 = FUN_00447490("ITMWelkyndStoneUse");
      if ((iVar6 != 0) && (iVar6 = FUN_0065ac50(*(undefined4 *)(iVar6 + 0xc),0,1,1), iVar6 != 0)) {
        FUN_006b73e0();
        FUN_00401f20(iVar6);
      }
    }
  }
  if ((param_1 == DAT_00b35ed8) && (in_ECX == DAT_00b333c4)) {
    fVar11 = (float10)FUN_0065d270(0,9);
    fVar12 = (float10)(**(code **)(*in_ECX + 0x288))(9);
    iVar6 = FUN_005f1910(9);
    if ((float)iVar6 + (float)fVar11 <= (float)fVar12) {
      FUN_0057acc0(DAT_00b38e98,0,1,0xbf800000);
    }
    else {
      iVar6 = FUN_005f1910(9);
      uStack_14 = SUB84((double)((float)iVar6 + (float)fVar11),0);
      fVar11 = (float10)(**(code **)(*in_ECX + 0x288))(9);
      (**(code **)(*in_ECX + 0x2a4))
                (9,(float)((float10)(double)CONCAT44(uStack_14,uStack_18) - fVar11),0);
      if (DAT_00b333c4 == in_ECX) {
        FUN_0057add0(DAT_00b38888,0xbf800000,0,0);
      }
      iVar6 = FUN_00447490("ITMWelkyndStoneUse");
      if ((iVar6 != 0) && (iVar6 = FUN_0065ac50(*(undefined4 *)(iVar6 + 0xc),0,1,1), iVar6 != 0)) {
        FUN_006b73e0();
        FUN_00401f20(iVar6);
      }
      uVar10 = uStack_4;
      FUN_004fbf90();
      (**(code **)(*in_ECX + 0x100))(param_1,uVar10,1,0,0,0,0,0,1,0);
      FUN_005c1900();
    }
    goto LAB_005fb98e;
  }
  if (uStack_18._3_1_ == '\0') {
LAB_005fb94c:
    if (in_ECX == DAT_00b333c4) {
      FUN_005e99c0(param_1,1,uStack_14);
    }
  }
  else if (in_ECX == DAT_00b333c4) {
    FUN_0057acc0(DAT_00b38a30,0,1,0xbf800000);
    goto LAB_005fb94c;
  }
  cVar3 = FUN_0045a500();
  if (cVar3 == '\0') {
    FUN_004fbf90();
    FUN_004fbf90(param_1,in_ECX + 0x11,2);
  }
LAB_005fb98e:
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_005fb9f0(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_8;
  int iStack_4;
  
  iVar5 = 0;
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  if (iVar3 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  cVar2 = FUN_00519d00();
  if (cVar2 != '\0') {
    iStack_4 = FUN_0041e6f0();
    uStack_8 = 0;
    if (iStack_4 != 0) {
      iVar5 = (**(code **)(*in_ECX + 0x170))();
      iVar3 = 0;
      if ((iVar5 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
        iVar3 = iVar5;
      }
      iVar5 = FUN_0048bda0(iVar3,&uStack_8,param_1,0);
    }
    (**(code **)(*(int *)in_ECX[0x16] + 0x328))(uStack_8);
    if ((((iVar5 != 0) && (in_ECX != DAT_00b333c4)) && (iVar3 = *(int *)(iVar5 + 8), iVar3 != 0)) &&
       (((*(char *)(iVar3 + 4) == '!' && (*(char *)(iVar3 + 0x90) == '\x05')) &&
        ((iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1), iVar3 == 0 &&
         (iVar3 = (**(code **)(*in_ECX + 700))(), iVar3 != 0)))))) {
      uVar1 = *(undefined4 *)(iVar3 + 8);
      uVar8 = 0;
      uVar7 = 1;
      uVar6 = 0;
      uVar4 = FUN_004b2460(0,1,0);
      FUN_005faea0(uVar1,uVar4,uVar6,uVar7,uVar8);
    }
  }
  return iVar5;
}



void FUN_005fbb10(int *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *in_ECX;
  undefined4 unaff_EBP;
  undefined4 uVar13;
  int iStack_4;
  
  piVar1 = param_1;
  (**(code **)(*param_1 + 0x44))(0x20000);
  uVar6 = (**(code **)(*param_1 + 0x154))(1,1,0);
  FUN_0088cf90(uVar6);
  iVar7 = (**(code **)(*param_1 + 0x170))();
  piVar8 = (int *)FUN_00674e40(param_1[3],in_ECX);
  FUN_005e99c0(iVar7,1,0);
  piVar12 = piVar8;
  if (piVar8 != (int *)0x0) {
    do {
      iVar10 = *piVar12;
      if (iVar10 == 0) break;
      piVar9 = (int *)0x0;
      if (((*(int *)(iVar10 + 0x58) != 0) &&
          (iVar11 = *(int *)(*(int *)(iVar10 + 0x58) + 8), iVar11 != 0)) &&
         (*(int *)(iVar11 + 0x28) != 0)) {
        piVar9 = (int *)FUN_00569e60();
      }
      if (piVar9 == param_1) {
        iVar11 = *(int *)(iVar10 + 0x58);
      }
      else {
        iVar11 = *(int *)(iVar10 + 0x58);
      }
      if (iVar11 != 0) {
        (**(code **)(**(int **)(iVar10 + 0x58) + 0xd0))();
      }
      piVar12 = (int *)piVar12[1];
    } while (piVar12 != (int *)0x0);
    FUN_004526e0();
    FUN_00401f20(piVar8);
  }
  iVar10 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar10 + 4) == '#') {
    iVar10 = FUN_004db6b0();
    if (((iVar10 == 0) || (cVar3 = FUN_004de770(in_ECX,1), cVar3 != '\0')) ||
       (iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar10 != 0)) {
      FUN_0041f600();
    }
    else {
      iVar10 = *in_ECX;
      uVar6 = FUN_004db6b0();
      (**(code **)(iVar10 + 0x238))(param_1,iVar7,param_1,0,uVar6);
      cVar3 = (**(code **)(*in_ECX + 0x334))(1);
      if ((cVar3 == '\0') || (in_ECX == DAT_00b333c4)) {
        uVar6 = (**(code **)(*param_1 + 0x170))();
        FUN_00423660(uVar6);
      }
      else {
        FUN_0041f600();
      }
    }
  }
  bVar2 = false;
  iVar11 = (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1);
  iVar10 = iVar7;
  if ((iVar11 != 0) &&
     (iVar11 = (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1), iVar7 == *(int *)(iVar11 + 8))) {
    sVar5 = FUN_0041e860();
    uVar6 = 1;
    (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1);
    iVar10 = FUN_004b2460();
    (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1,sVar5 + iVar10);
    FUN_0060d020(uVar6);
    bVar2 = true;
    unaff_EBP = 1;
    iVar10 = iStack_4;
  }
  if (*(char *)(iVar10 + 4) == '\"') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
  }
  if ((((*(byte *)(piVar1 + 2) & 1) == 0) && (iVar10 = FUN_0046b680(0xffffffff), iVar10 == 0)) &&
     (cVar3 = FUN_004db4a0(), cVar3 == '\0')) {
    cVar3 = FUN_004d8260(2);
    if (cVar3 == '\0') {
      FUN_004ddc40(piVar1,iVar7,0,unaff_EBP);
      (**(code **)(*piVar1 + 0x10))(1);
      goto LAB_005fbd9d;
    }
    param_1 = (int *)0x0;
  }
  FUN_004ddc40(piVar1,iVar7,param_1,unaff_EBP);
  FUN_004d7d80();
LAB_005fbd9d:
  if (bVar2) {
    uVar13 = 0;
    uVar6 = (**(code **)(*in_ECX + 0x168))(0);
    FUN_005f8300(uVar6,uVar13);
  }
  if (((uint)piVar8 & 0xffffff00) == 0x21) {
    iVar7 = (**(code **)(*in_ECX + 0x170))();
    if (iVar7 != 0) {
      (**(code **)(*in_ECX + 400))();
    }
    cVar3 = FUN_00519d00();
    if ((cVar3 != '\0') &&
       (piVar12 = (int *)(**(code **)(*in_ECX + 0x2b8))(0xffffffff), piVar12 != (int *)0x0)) {
      uVar6 = 0;
      if ((undefined4 *)*piVar12 != (undefined4 *)0x0) {
        uVar6 = *(undefined4 *)*piVar12;
      }
      FUN_005faea0(piVar12[2],1,uVar6,1,0);
      cVar3 = (**(code **)(*in_ECX + 0x334))(1);
      if (cVar3 != '\0') {
        (**(code **)(*(int *)in_ECX[0x16] + 0x308))(1);
        (**(code **)(*(int *)in_ECX[0x16] + 0x300))(1);
        piVar1 = (int *)in_ECX[0x16];
        if (piVar1 == (int *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*piVar1 + 0x304))();
        }
        iVar7 = *piVar1;
        uVar6 = FUN_004d8370();
        uVar6 = (**(code **)(*in_ECX + 0x168))(uVar6);
        (**(code **)(iVar7 + 0x150))(uVar4,uVar6);
      }
      FUN_00484470();
      FUN_00401f20(piVar12);
    }
  }
  return;
}



undefined4 FUN_005fc090(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 unaff_retaddr;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 local_1c [4];
  undefined1 auStack_18 [4];
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar3 + 4) == '$') {
    return 0;
  }
  iVar3 = (**(code **)(*in_ECX + 0x164))();
  if (iVar3 == 0) {
    return 0;
  }
  uVar7 = 3;
  (**(code **)(*in_ECX + 0x164))(3);
  uVar7 = FUN_00470720(uVar7);
  iVar3 = FUN_0051aa00(uVar7);
  if ((iVar3 != 0x19) && (iVar3 != 0x1a)) {
    return 0;
  }
  puVar4 = (undefined4 *)FUN_005e4a80();
  if ((puVar4 != (undefined4 *)0x0) && (param_2 - 0xcU < 0x15)) {
    uVar7 = FUN_005f1910(param_2);
    iVar3 = FUN_0056a300(uVar7);
    if (iVar3 < 2) {
      return 0;
    }
    iVar3 = FUN_0047df80(0);
    if (DAT_00b37228 < iVar3 % 100) {
      return 0;
    }
    piVar1 = (int *)puVar4[2];
    if ((piVar1 != (int *)0x0) && ((char)piVar1[1] == '!')) {
      cVar2 = (**(code **)(*piVar1 + 0x78))();
      if (cVar2 != '\0') {
        return 0;
      }
      cVar2 = FUN_005e0da0();
      if (cVar2 == '\0') {
        return 0;
      }
    }
    if ((int *)param_1[0x16] != (int *)0x0) {
      iVar3 = *(int *)param_1[0x16];
      if (*(char *)(puVar4[2] + 0x90) == '\x05') {
        uVar7 = (**(code **)(*param_1 + 0x168))();
        iVar3 = (**(code **)(iVar3 + 0x11c))(uVar7);
      }
      else {
        uVar7 = (**(code **)(*param_1 + 0x168))();
        iVar3 = (**(code **)(iVar3 + 0x118))(uVar7);
      }
      if (iVar3 == 0) {
        puVar6 = (undefined1 *)0x0;
        puVar5 = (undefined4 *)0x0;
      }
      else {
        uStack_10 = *(undefined4 *)(iVar3 + 0x88);
        uStack_c = *(undefined4 *)(iVar3 + 0x8c);
        uStack_8 = *(undefined4 *)(iVar3 + 0x90);
        FUN_00711300(local_1c,auStack_18,&iStack_14);
        puVar6 = local_1c;
        puVar5 = &uStack_10;
      }
      uVar7 = (**(code **)(*param_1 + 0x2c8))(unaff_retaddr,*(undefined4 *)*puVar4,1,puVar5,puVar6);
      FUN_004dc000(param_1,uVar7);
      iVar3 = FUN_005e0ee0();
      if ((-1 < iVar3) &&
         ((iVar3 < 6 ||
          ((((iVar3 == 6 && (iStack_14 != 0)) &&
            (iVar3 = (**(code **)(*(int *)param_1[0x16] + 0xf8))(1), iVar3 == 0)) &&
           (cVar2 = FUN_005f4ae0(0), cVar2 == '\0')))))) {
        FUN_005effd0(0xffffffff,0);
      }
      iVar3 = (**(code **)(*param_1 + 0x330))();
      if (iVar3 != 0) {
        (**(code **)(*param_1 + 0x330))(puVar5);
        FUN_0061dd10(puVar5);
      }
      return 1;
    }
    return 0;
  }
  return 0;
}



undefined4 FUN_005fc2b0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *piVar6;
  
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar3 + 4) == '$') {
    return 0;
  }
  puVar4 = (undefined4 *)FUN_005e4a80();
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  if (((int *)in_ECX[0x16] == (int *)0x0) ||
     ((iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1), iVar3 == 0 &&
      (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0xf8))(1), iVar3 == 0)))) {
    uVar5 = FUN_005f1910(0x11);
    iVar3 = FUN_0056a300(uVar5);
    if (iVar3 < 4) {
      return 0;
    }
  }
  else {
    uVar5 = FUN_005f1910(0xf);
    iVar3 = FUN_0056a300(uVar5);
    if (iVar3 < 4) {
      return 0;
    }
    if ((int *)in_ECX[0x16] == (int *)0x0) {
      return 0;
    }
    iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0xf8))(1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar3 = FUN_0047df80(0);
  if (DAT_00b37230 < iVar3 % 100) {
    return 0;
  }
  piVar1 = (int *)puVar4[2];
  piVar6 = (int *)0x0;
  if ((piVar1 != (int *)0x0) && ((char)piVar1[1] == '!')) {
    cVar2 = (**(code **)(*piVar1 + 0x78))();
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = FUN_005e0da0();
    piVar6 = piVar1;
    if (cVar2 == '\0') {
      return 0;
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x2c8))(piVar6,*(undefined4 *)*puVar4,1,0,0);
  FUN_004dc000(param_1,uVar5);
  iVar3 = FUN_005e0ee0();
  if ((-1 < iVar3) &&
     ((iVar3 < 6 ||
      ((((iVar3 == 6 && (piVar6 != (int *)0x0)) &&
        (iVar3 = (**(code **)(*(int *)param_1[0x16] + 0xf8))(1), iVar3 == 0)) &&
       (cVar2 = FUN_005f4ae0(0), cVar2 == '\0')))))) {
    FUN_005effd0(0xffffffff,0);
  }
  iVar3 = (**(code **)(*param_1 + 0x330))();
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x330))();
    FUN_0061dd10(in_ECX);
  }
  return 1;
}



uint FUN_005fc6d0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int *in_ECX;
  int iVar7;
  float10 fVar8;
  
  piVar3 = (int *)FUN_0041e6f0();
  if (param_4 == 0) {
    param_4 = 1;
  }
  if (piVar3 != (int *)0x0) {
    while ((param_4 != 0 && (piVar4 = (int *)FUN_00487c30(param_1,param_5), piVar4 != (int *)0x0)))
    {
      iVar7 = 0;
      if (((int *)*piVar4 != (int *)0x0) &&
         ((iVar7 = *(int *)*piVar4, iVar7 != 0 &&
          (piVar4 = (int *)FUN_0041fb00(), piVar4 != (int *)0x0)))) {
        FUN_0041fa40(param_3);
        (**(code **)(*piVar4 + 0x40))(0x20);
      }
      (**(code **)(*in_ECX + 0x100))(param_1,iVar7,param_4,0,0,param_3,0,0,1,0);
      param_4 = param_4 + -1;
    }
    if ((((int *)*piVar3)[1] == 0) && (*(int *)*piVar3 == 0)) {
      FUN_0041f5f0();
    }
  }
  if (in_ECX == DAT_00b333c4) {
    uVar5 = FUN_0057a3b0(0);
  }
  else {
    piVar3 = (int *)(**(code **)(*in_ECX + 0x2b8))(0xffffffff);
    uVar5 = 0;
    if ((piVar3 != (int *)0x0) && (uVar5 = FUN_00484e80(0), (char)uVar5 == '\0')) {
      uVar6 = 0;
      if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
        uVar6 = *(undefined4 *)*piVar3;
      }
      FUN_005faea0(piVar3[2],1,uVar6,1,0);
      FUN_00484470();
      uVar5 = FUN_00401f20(piVar3);
    }
  }
  if (in_ECX != DAT_00b333c4) {
    uVar6 = (**(code **)(*param_3 + 0x170))();
    FUN_00520f00(uVar6);
    FUN_00520f40(1);
    fVar8 = (float10)FUN_005e40c0();
    iVar7 = (**(code **)(*param_3 + 0x174))();
    fVar1 = *(float *)(iVar7 + 8);
    uVar6 = 0;
    cVar2 = FUN_004d7f80();
    if ((cVar2 != '\0') || (50.0 < fVar1 - (float)fVar8)) {
      uVar6 = 1;
    }
    FUN_00520f20(uVar6);
    (**(code **)(*(int *)in_ECX[0x16] + 0x48))();
    FUN_00520f00(0);
    FUN_00520f40(0);
    uVar5 = FUN_00520f20(0xffffffff);
  }
  return uVar5 & 0xffffff00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005fcab0(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  undefined2 uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float fVar12;
  undefined4 uVar13;
  code *pcVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  undefined4 *puVar20;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar21;
  float10 fVar22;
  float unaff_retaddr;
  char *pcVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iStack_60;
  int iStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  undefined4 uStack_34;
  float fStack_30;
  int iStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2b63;
  local_c = *unaff_FS_OFFSET;
  uVar8 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar1 = (**(code **)(*in_ECX + 0x198))(0,uVar8);
  if ((cVar1 != '\0') || ((in_ECX == DAT_00b333c4 && ((char)DAT_00b333c4[0x162] == '\0'))))
  goto LAB_005fe2cc;
  iVar9 = (**(code **)(*in_ECX + 0x164))();
  iStack_2c = FUN_0065a2c0();
  if ((iVar9 == 0) || ((in_ECX[0x16] == 0 || (iStack_2c == 0)))) goto LAB_005fe2cc;
  iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
  if (iVar10 == 0) {
    FUN_00633460();
  }
  piVar11 = (int *)(**(code **)(*in_ECX + 0x388))();
  if (piVar11 == DAT_00b333c4) {
    param_1 = _DAT_00b14e5c;
    unaff_retaddr = _DAT_00b14e58;
  }
  fStack_54 = 1.0;
  iStack_60 = 0;
  fStack_58 = 0.0;
  uStack_50 = 0;
  uStack_48 = 0;
  iStack_5c = -1;
  fStack_40 = (float)FUN_004706e0(0);
  fVar12 = (float)(**(code **)(*in_ECX + 0x168))();
  iVar10 = FUN_005e0ee0();
  if (iVar10 == -1) goto switchD_005fcbfe_caseD_3;
  iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d4))();
  if ((iVar10 == 0) ||
     (iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d4))(), *(int *)(iVar10 + 0x44) == 0)) {
    iVar10 = FUN_005e0ee0();
    if (iVar10 == 6) {
      uVar13 = FUN_00470720(1);
      iVar10 = FUN_0051aa00(uVar13);
      if (iVar10 != 0x1b) goto LAB_005fd7d3;
      iStack_5c = 6;
      uVar13 = FUN_004706e0(1);
      uVar25 = 6;
    }
    else {
LAB_005fd7d3:
      uVar13 = 0;
      uVar25 = 0xffffffff;
    }
LAB_005fd7d7:
    FUN_005effd0(uVar25,uVar13);
  }
  else {
    uVar13 = FUN_005e0ee0();
    fStack_44 = fVar12;
    switch(uVar13) {
    case 0:
    case 1:
      cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))();
      iVar10 = FUN_005e0ee0();
      if (((bool)cVar1 != (iVar10 == 0)) && (iVar10 = FUN_00470750(3), 0 < iVar10)) {
        iVar10 = 1;
        if (in_ECX == DAT_00b333c4) {
          iVar10 = 2;
        }
        iVar17 = *(int *)in_ECX[0x16];
        fStack_30 = fVar12;
        iVar19 = FUN_005e0ee0();
        (**(code **)(iVar17 + 0x308))(iVar19 == 0);
        iVar17 = iVar9;
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          if ((in_ECX == DAT_00b333c4) && (iVar10 == 1)) {
            iVar17 = FUN_0065d750(1);
            uStack_34 = FUN_006600d0(1);
          }
          iVar19 = *(int *)in_ECX[0x16];
          iVar16 = FUN_005e0ee0(uStack_34,iVar17);
          (**(code **)(iVar19 + 0x150))(iVar16 == 0);
        }
        (**(code **)(*(int *)in_ECX[0x16] + 0x42c))();
        cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))();
        if ((cVar1 != '\0') && (iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0x41c))(), iVar10 != 0)
           ) {
          uVar13 = (**(code **)(*(int *)in_ECX[0x16] + 0x41c))();
          iVar10 = FUN_00679240(in_ECX,uVar13);
          if (iVar10 != 0) {
            FUN_006a0350();
          }
          iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
          if (iVar10 != 0) {
            iVar10 = 0;
            iVar17 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
            if ((*(int *)(iVar17 + 8) != 0) &&
               (iVar17 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1),
               *(char *)(*(int *)(iVar17 + 8) + 4) == '!')) {
              iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
              iVar10 = *(int *)(iVar10 + 8);
            }
            iVar17 = FUN_004695a0(iVar10);
            if ((iVar17 == 0) || (iVar17 == -0x18)) {
              (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
              iVar17 = FUN_00484df0();
              if ((iVar17 == 0) || (iVar17 == -0x24)) goto switchD_005fd71d_default;
            }
            switch(*(undefined1 *)(iVar10 + 0x90)) {
            case 0:
              pcVar23 = "WPNBlade1HandEquipEnchanted";
              break;
            case 1:
              pcVar23 = "WPNBlade2HandEquipEnchanted";
              break;
            case 2:
              pcVar23 = "WPNBlunt1HandEquipEnchanted";
              break;
            case 3:
              pcVar23 = "WPNBlunt2HandEquipEnchanted";
              break;
            default:
              goto switchD_005fd71d_default;
            }
            iVar10 = FUN_0065a970(pcVar23,0,0x102,1);
            if (iVar10 != 0) {
              FUN_006b73e0();
              FUN_00401f20(iVar10);
            }
          }
        }
switchD_005fd71d_default:
        FUN_005e7230(0,0);
      }
      break;
    case 2:
      (**(code **)(*(int *)in_ECX[0x16] + 0x2d4))();
      iVar10 = FUN_0051ac70();
      if (*(int *)(&DAT_00b102e8 + iVar10 * 0x24) == 1) {
        iVar10 = FUN_00470750(1);
        if (iVar10 == 1) {
          uVar13 = FUN_00470720(1);
          iVar10 = FUN_0051aa00(uVar13);
          if ((&DAT_00b102ec)[iVar10 * 9] - 4 < 2) {
            iVar10 = (**(code **)(in_ECX[0x17] + 0x30))();
            if (iVar10 != 0) {
              uVar24 = 0x3f600000;
              uVar13 = FUN_006ecc80(0x3f600000);
              uVar25 = (**(code **)(*in_ECX + 0x174))(uVar13);
              cVar1 = FUN_005e06c0(uVar25,uVar13,uVar24);
              cVar2 = FUN_005e0530();
              if ((cVar2 != '\0') || (cVar1 != '\0')) {
                (**(code **)(in_ECX[0x17] + 0x30))();
                cVar1 = FUN_00414cd0();
                if (cVar1 != '\0') {
                  if (in_ECX == DAT_00b333c4) {
                    FUN_0057acc0(DAT_00b38de8,0,1,0xbf800000);
                  }
                  goto LAB_005fcdc9;
                }
              }
              FUN_0069bec0(0);
            }
            goto LAB_005fcdc9;
          }
        }
      }
      else {
        if ((*(int *)(&DAT_00b102e8 + iVar10 * 0x24) != 3) ||
           (iVar10 = FUN_00470750(3), iVar10 != 1)) break;
        uVar13 = FUN_00470720(3);
        iVar10 = FUN_0051aa00(uVar13);
        iVar10 = (&DAT_00b102ec)[iVar10 * 9];
        if (iVar10 == 4) {
          cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x13c))();
          if (cVar1 == '\0') {
            iVar10 = (**(code **)(in_ECX[0x17] + 0x30))();
            if (iVar10 == 0) {
              if ((in_ECX == DAT_00b333c4) ||
                 (cVar1 = (**(code **)(*in_ECX + 0x334))(1), cVar1 != '\0')) {
                (**(code **)(*in_ECX + 0x3ac))(0,0,0);
                bVar21 = false;
              }
              else {
                iVar10 = ((int *)in_ECX[0x16])[2];
                if (((iVar10 == 0) || (*(char *)(iVar10 + 0x20) != '\b')) ||
                   (cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x138))(), cVar1 != '\0')) {
                  (**(code **)(*in_ECX + 0x3b0))(0,0,0);
                  bVar21 = false;
                }
                else {
                  FUN_005f9620();
                  bVar21 = false;
                }
              }
              goto LAB_005fcdb3;
            }
            FUN_0069bec0(0);
          }
          else {
            uVar13 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
            FUN_005e4920(uVar13);
          }
        }
        else {
          if (iVar10 != 5) {
            if (iVar10 == 6) {
              fVar22 = (float10)(**(code **)(*in_ECX + 0xec))();
              uStack_28 = (double)fVar22;
              pfVar18 = (float *)FUN_00403c00();
              fStack_30 = *pfVar18 * (float)uStack_28;
              iVar10 = FUN_006156c0();
              if (iVar10 != 0) {
                FUN_005fc2b0(iVar10);
                FUN_005f4fd0();
                iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0xf8))(1);
                if (iVar10 != 0) {
                  (**(code **)(*(int *)in_ECX[0x16] + 0xf8))(1);
                  FUN_004b4c70(0,0);
                  FUN_006af880();
                }
              }
              cVar1 = FUN_005e5640();
              if (cVar1 != '\0') {
                uVar13 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d4))();
                uVar25 = 6;
                goto LAB_005fd7d7;
              }
            }
            break;
          }
          if ((in_ECX == DAT_00b333c4) || (cVar1 = (**(code **)(*in_ECX + 0x334))(1), cVar1 != '\0')
             ) {
            pcVar14 = *(code **)(*in_ECX + 0x3ac);
LAB_005fcd9c:
            (*pcVar14)(1,0,0);
          }
          else {
            iVar10 = ((int *)in_ECX[0x16])[2];
            if (((iVar10 == 0) || (*(char *)(iVar10 + 0x20) != '\b')) ||
               (cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x138))(), cVar1 != '\0')) {
              pcVar14 = *(code **)(*in_ECX + 0x3b0);
              goto LAB_005fcd9c;
            }
            FUN_005f9620();
          }
          cVar1 = FUN_005e3270();
          bVar21 = cVar1 == '\0';
LAB_005fcdb3:
          FUN_005e4010(bVar21);
        }
        cVar1 = FUN_005e5640();
        if (cVar1 != '\0') {
LAB_005fcdc9:
          uVar13 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d4))();
          uVar25 = 3;
          goto LAB_005fd7d7;
        }
      }
      break;
    case 4:
      iVar10 = FUN_00470750(3);
      if (iVar10 == 1) {
        iStack_4c = 1;
        if (in_ECX != DAT_00b333c4) goto LAB_005fcfd4;
        iStack_4c = 2;
        do {
          if ((in_ECX == DAT_00b333c4) && (iStack_4c == 1)) {
            fStack_44 = (float)FUN_006600d0(1);
          }
LAB_005fcfd4:
          piVar11 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x128))(fStack_44);
          piVar15 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 300))(fStack_44);
          if ((piVar11 != (int *)0x0) && (piVar15 != (int *)0x0)) {
            iVar10 = (**(code **)(*piVar11 + 0x58))("Arrow:0");
            if (iVar10 == 0) {
              FUN_004a7a60("Could not find Arrow:0 on Quiver");
            }
            else {
              uVar13 = FUN_00700900();
              (**(code **)(*piVar15 + 0x84))(uVar13,1);
              if ((in_ECX == DAT_00b333c4) && (cVar1 = FUN_0065d820(), cVar1 == '\0')) {
                iVar17 = (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1);
                iVar17 = FUN_005e0f00(*(undefined4 *)(iVar17 + 8));
                if (iVar17 != 1) {
                  if (DAT_00b35588 < iVar17) goto LAB_005fd0db;
                  uStack_28 = 0.0;
                  puStack_8 = (undefined1 *)0x0;
                  FUN_00402e30(&uStack_28,"Arrow%d",iVar17 + -1);
                  iVar10 = (**(code **)(*piVar11 + 0x58))((float)uStack_28);
                  puStack_8 = (undefined1 *)0xffffffff;
                  FUN_00402da0();
                }
                if (iVar10 != 0) {
                  *(ushort *)(iVar10 + 0x18) = *(ushort *)(iVar10 + 0x18) | 1;
                }
              }
            }
          }
LAB_005fd0db:
          iStack_4c = iStack_4c + -1;
        } while (iStack_4c != 0);
        uVar13 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d4))();
        FUN_005effd0(5,uVar13);
      }
      break;
    case 5:
      iVar10 = FUN_00470750(3);
      if (iVar10 == 3) {
        iStack_18 = DAT_00b3f9ac;
        iStack_4c = 1;
        iStack_1c = DAT_00b3f9a8;
        iStack_14 = DAT_00b3f9b0;
        if (in_ECX == DAT_00b333c4) {
          iStack_4c = 2;
        }
        do {
          if ((in_ECX == DAT_00b333c4) && (iStack_4c == 1)) {
            fVar12 = (float)FUN_006600d0(1);
            fStack_44 = fVar12;
          }
          iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 300))(fVar12);
          if (iVar10 != 0) {
            uVar13 = (**(code **)(*(int *)in_ECX[0x16] + 300))(fVar12);
            piVar11 = (int *)FUN_00405790(0);
            if (piVar11 != (int *)0x0) {
              (**(code **)(*piVar11 + 0x74))();
              if (in_ECX == DAT_00b333c4) {
                bVar21 = false;
                iVar10 = FUN_00660110(1);
                if ((iVar10 != 0) && (iVar10 = FUN_00660110(1), (*(byte *)(iVar10 + 0x18) & 1) != 0)
                   ) {
                  bVar21 = true;
                }
                if (iStack_4c == 1) {
                  if (!bVar21) goto LAB_005fd204;
                }
                else if ((iStack_4c == 2) && (bVar21)) goto LAB_005fd204;
              }
              else {
LAB_005fd204:
                iStack_1c = piVar11[0x22];
                iStack_18 = piVar11[0x23];
                iStack_14 = piVar11[0x24];
              }
              FUN_007b4280(0);
              FUN_007c5e70(uVar13);
              FUN_00477ef0();
              fVar12 = fStack_44;
            }
          }
          iStack_4c = iStack_4c + -1;
        } while (iStack_4c != 0);
        (**(code **)(*in_ECX + 0x1e0))();
        FUN_004a9720();
        if (in_ECX == DAT_00b333c4) {
          fStack_30 = (float)DAT_00b333c4[400];
          pfVar18 = (float *)FUN_00403c00();
          uStack_28 = (double)(fStack_30 * *pfVar18);
          pfVar18 = (float *)FUN_00403c00();
          fStack_30 = *pfVar18 + (float)uStack_28;
          FUN_004ac760(0x3f800000,fStack_30);
        }
        iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1);
        iVar17 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
        if (((iVar10 != 0) && (iVar17 != 0)) &&
           (cVar1 = (**(code **)(**(int **)(iVar10 + 8) + 0x78))(), cVar1 == '\0')) {
          iVar19 = *(int *)(iVar10 + 8);
          iStack_4c = 0;
          if ((iVar19 != 0) && (*(char *)(iVar19 + 4) == '\"')) {
            iStack_4c = iVar19;
          }
          if (in_ECX != DAT_00b333c4) {
            iVar19 = (**(code **)(*in_ECX + 0x330))();
            if (iVar19 == 0) {
              iVar16 = 0;
            }
            else {
              iVar16 = FUN_006135f0();
            }
            if (iStack_4c == 0) {
              fVar12 = 1.0;
            }
            else {
              fVar12 = *(float *)(iStack_4c + 0x7c);
            }
            pfVar18 = (float *)FUN_00403c00();
            fStack_30 = fVar12 * *pfVar18;
            fVar22 = (float10)FUN_00608280();
            if (iVar16 != 0) {
              FUN_006159c0(&fStack_30,uStack_28._4_4_,uStack_20,iStack_1c,iVar16,fStack_30,
                           (float)fVar22,*(undefined4 *)(iVar19 + 0x180));
              fStack_40 = fStack_30;
              iStack_3c = (int)(float)uStack_28;
            }
          }
          cVar1 = FUN_005e0530();
          if (cVar1 != '\0') {
            fStack_54 = 0.1;
          }
          if ((in_ECX != DAT_00b333c4) || ((char)DAT_00b333c4[0x170] == '\0')) {
            fStack_30 = (float)FUN_00401f00(0x9c);
            iStack_10 = 1;
            if (fStack_30 == 0.0) {
              iVar10 = 0;
            }
            else {
              iVar10 = FUN_0060c940(in_ECX,uStack_28._4_4_,uStack_20,iStack_1c,iStack_3c,fStack_40,
                                    fStack_54,iVar10,iVar17);
            }
            iStack_10 = -1;
            if (iVar10 != 0) {
              FUN_00673a90(iVar10,0,0,0,0);
            }
            (**(code **)(*in_ECX + 0x2e8))();
            iVar10 = FUN_005f23b0(0x1c);
            if (iVar10 == 0) {
              pfVar18 = (float *)FUN_00403c00();
              FUN_005e07d0(-*pfVar18);
            }
            iVar10 = (**(code **)(*in_ECX + 0x284))(0x2f);
            if (0 < iVar10) {
              FUN_006a24b0(0x49564e49,0);
            }
            uVar3 = (**(code **)(*(int *)(iStack_3c + 0x88) + 0x10))();
            fVar22 = (float10)FUN_00547240((float)uVar3);
            (**(code **)(*in_ECX + 0x2c4))(iVar17,(float)fVar22,0);
          }
        }
        uVar13 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d4))();
        FUN_005effd0(3,uVar13);
      }
      break;
    case 9:
      fVar22 = (float10)FUN_005e3590();
      fStack_58 = (float)fVar22;
      break;
    case 10:
      iVar10 = (**(code **)(*in_ECX + 0x18c))();
      if (iVar10 == 0) {
        iVar10 = FUN_0088d370();
        if (iVar10 == 0) {
          iVar10 = (**(code **)(*in_ECX + 0x27c))();
          if ((iVar10 != 0) &&
             (uVar8 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c0))(), (uVar8 & 0xf) != 0)) {
            if (fStack_40 != 0.0) {
              iVar10 = FUN_0051ac70();
              bVar21 = iVar10 == 0x2a;
              goto LAB_005fd7d1;
            }
            goto LAB_005fd7d3;
          }
        }
        else {
          if (iVar10 == 1) goto LAB_005fd7d3;
          if ((iVar10 == 2) && (fStack_40 != 0.0)) {
            iVar10 = FUN_0051ac70();
            bVar21 = iVar10 == 0x29;
LAB_005fd7d1:
            if (bVar21) goto LAB_005fd7d3;
          }
        }
      }
    }
  }
switchD_005fcbfe_caseD_3:
  iVar10 = (**(code **)(*in_ECX + 0x214))();
  if (iVar10 == 0) {
    if (iStack_5c == -1) goto LAB_005fd904;
  }
  else if (iStack_5c == -1) {
    iVar17 = FUN_005e0ee0();
    if ((iVar17 < 2) || (5 < iVar17)) {
      do {
        iVar17 = (**(code **)(*in_ECX + 0x21c))();
        if (iVar17 != 0x48) {
          iVar17 = *in_ECX;
          uVar13 = (**(code **)(iVar17 + 0x21c))(0,0);
          (**(code **)(iVar17 + 0x39c))(uVar13);
        }
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      (**(code **)(*in_ECX + 0x210))(0);
    }
LAB_005fd904:
    iVar10 = (**(code **)(*in_ECX + 0x18c))();
    if (iVar10 == 0) {
      iVar17 = FUN_005e0ee0();
      iVar10 = iStack_2c;
      if ((iVar17 == -1) || (iVar17 - 2U < 4)) {
        iVar17 = FUN_0088d370();
        if (iVar17 == 0) {
          if ((fStack_40 != 0.0) &&
             ((iVar10 = FUN_0051ac70(), iVar10 == 0x29 || (iVar10 = FUN_0051ac70(), iVar10 == 0x28))
             )) {
            iVar10 = (**(code **)(*in_ECX + 0x27c))();
            if ((iVar10 == 0) ||
               (uVar8 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c0))(), (uVar8 & 0xf) == 0)) {
              iVar10 = FUN_005e0ee0();
              if (iVar10 == -1) {
                iStack_5c = 10;
              }
              iStack_60 = 0x2a;
              *(undefined1 *)(iVar9 + 0xc4) = 1;
            }
            FUN_006b1900();
          }
        }
        else if (iVar17 == 1) {
LAB_005fd99e:
          iStack_60 = 0x29;
        }
        else if (iVar17 == 2) {
          uStack_28 = (double)CONCAT44(uStack_28._4_4_,*(undefined4 *)(iVar10 + 0x324));
          pfVar18 = (float *)FUN_00403c00();
          if (((*pfVar18 < (float)uStack_28) &&
              (iVar10 = (**(code **)(*in_ECX + 0x380))(), iVar10 == 0)) ||
             ((fStack_40 != 0.0 && (iVar10 = FUN_0051ac70(), iVar10 == 0x29)))) goto LAB_005fd99e;
        }
      }
      cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x2fc))();
      if ((((cVar1 != '\0') &&
           (cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))(), cVar1 == '\0')) &&
          (iVar10 = FUN_005e0ee0(), iVar10 == -1)) && (cVar1 = FUN_005e3350(), cVar1 != '\0')) {
        cVar1 = FUN_00472ea0();
        if (cVar1 == '\0') {
          FUN_00475440(1,0);
        }
        iStack_60 = 0x11;
        iStack_5c = 0;
        iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0xf0))(1);
        if ((iVar10 != 0) && (cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x138))(), cVar1 != '\0'))
        {
          FUN_004dcab0();
        }
      }
    }
    cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x2fc))();
    if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))(), cVar1 != '\0'))
        && ((iVar10 = FUN_005e0ee0(), iVar10 == -1 &&
            (((cVar1 = (**(code **)(*in_ECX + 0x1a0))(), cVar1 == '\0' &&
              (cVar1 = (**(code **)(*in_ECX + 0x198))(0), cVar1 == '\0')) &&
             (cVar1 = (**(code **)(*in_ECX + 0x19c))(), cVar1 == '\0')))))) &&
       ((in_ECX[0x2c] != 5 && (in_ECX[0x2c] != 3)))) {
      iStack_60 = 0x12;
      iStack_5c = 1;
    }
  }
  iVar10 = (**(code **)(*in_ECX + 0x27c))();
  if ((((iVar10 == 0) && (cVar1 = (**(code **)(*in_ECX + 0x334))(1), cVar1 != '\0')) ||
      ((iVar10 = (**(code **)(*in_ECX + 0x27c))(), iVar10 != 0 &&
       (cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))(), cVar1 != '\0')))) ||
     ((iStack_5c == 0 || (iStack_5c == 1)))) {
    iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
    if (iVar10 == 0) {
      uStack_48 = 1;
    }
    else {
      iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
      uStack_48 = *(undefined4 *)(&DAT_00b086b8 + *(char *)(*(int *)(iVar10 + 8) + 0x90) * 4);
    }
  }
  iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))();
  if ((iVar10 == 6) && (uVar8 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c0))(), (uVar8 & 0x200) != 0)
     ) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x2c4))(0x200,0);
    (**(code **)(*(int *)in_ECX[0x16] + 0x2c4))(0x100,1);
  }
  uVar8 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c0))();
  if ((uVar8 & 0x800) == 0) {
    if ((uVar8 & 0x2000) == 0) {
      if ((uVar8 & 0x400) != 0) {
        uStack_50 = 1;
      }
    }
    else {
      uStack_50 = 3;
    }
  }
  else {
    uStack_50 = 2;
  }
  if (iStack_60 == 0) {
    iVar10 = (**(code **)(*in_ECX + 0x380))();
    if (iVar10 == 0) {
      uVar13 = (**(code **)(*in_ECX + 0x18c))();
      switch(uVar13) {
      case 3:
      case 8:
        cVar1 = FUN_00471210();
        if ((cVar1 != '\0') || (cVar1 = FUN_00472ea0(), cVar1 != '\0'))
        goto switchD_005fdc81_caseD_4;
        break;
      case 4:
      case 5:
      case 9:
      case 10:
switchD_005fdc81_caseD_4:
        iStack_60 = 1;
      }
      if (in_ECX == DAT_00b333c4) {
        uVar13 = 0x40c;
        FUN_00582160(0,1,0x40c);
        cVar1 = FUN_0057cfb0(uVar13);
        if (cVar1 != '\0') {
          iStack_60 = 1;
        }
      }
    }
    fStack_54 = unaff_retaddr;
    if ((uVar8 & 0xf) == 0) {
      if ((uVar8 & 0x10) == 0) {
        if ((uVar8 & 0x20) != 0) {
          iStack_60 = 0x10;
        }
      }
      else {
        iStack_60 = 0xf;
      }
    }
    else if ((uVar8 & 0x200) == 0) {
      if ((uVar8 & 0xff00) != 0) {
        if ((uVar8 & 1) == 0) {
          if ((uVar8 & 2) == 0) {
            if ((uVar8 & 4) == 0) {
              if ((uVar8 & 8) != 0) {
                iStack_60 = 6;
              }
              fVar22 = (float10)FUN_005e3590();
              fStack_58 = (float)fVar22;
            }
            else {
              iStack_60 = 5;
              fVar22 = (float10)FUN_005e3590();
              fStack_58 = (float)fVar22;
            }
          }
          else {
            iStack_60 = 4;
            fVar22 = (float10)FUN_005e3590();
            fStack_58 = (float)fVar22;
          }
        }
        else {
          iStack_60 = 3;
          fVar22 = (float10)FUN_005e3590();
          fStack_58 = (float)fVar22;
        }
      }
    }
    else {
      if ((uVar8 & 1) == 0) {
        if ((uVar8 & 2) == 0) {
          if ((uVar8 & 4) == 0) {
            if ((uVar8 & 8) != 0) {
              iStack_60 = 10;
            }
          }
          else {
            iStack_60 = 9;
          }
        }
        else {
          iStack_60 = 8;
        }
      }
      else {
        iStack_60 = 7;
      }
      iVar10 = (**(code **)(*in_ECX + 0x27c))();
      if (iVar10 == 0) {
        fVar22 = (float10)FUN_005e3590();
        fStack_58 = (float)fVar22;
      }
      else {
        fVar22 = (float10)FUN_005e3750();
        fStack_58 = (float)fVar22;
      }
    }
  }
  if ((iStack_5c != -1) && (iVar10 = FUN_005e0ee0(), iVar10 != -1)) goto LAB_005fe2cc;
  if ((fStack_58 < 1.0) && (((iStack_60 - 3U < 0xe && (iStack_60 != 0xf)) && (iStack_60 != 0x10))))
  {
    if (in_ECX == DAT_00b333c4) {
      (**(code **)(*DAT_00b333c4 + 0x25c))();
    }
    iStack_60 = 0;
  }
  uVar25 = 0;
  uVar13 = FUN_0051a9b0(uStack_50,uStack_48,iStack_60,0);
  uVar3 = FUN_00470d20(uVar13,uVar25);
  iVar10 = FUN_0051aa00(uVar3);
  if ((iStack_5c != -1) && (iStack_60 != iVar10)) {
    iStack_5c = -1;
  }
  iVar17 = FUN_005e0ee0();
  if ((iVar17 == -1) || (iVar17 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d4))(), iVar17 == 0)) {
LAB_005fdfb3:
    if (uVar3 != 0xff) {
      if ((iVar10 == 0xf) || (iVar10 == 0x10)) {
        *(undefined4 *)(iVar9 + 0xbc) = param_1;
      }
      else if ((iVar10 < 3) || (0x10 < iVar10)) {
        if ((0x10 < iVar10) && (iVar10 < 0x1b)) {
          iVar17 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
          if (iVar17 == 0) {
            *(undefined4 *)(iVar9 + 0xc0) = 0x3f800000;
          }
          else {
            *(undefined4 *)(iVar9 + 0xc0) = *(undefined4 *)(*(int *)(iVar17 + 8) + 0x94);
          }
        }
      }
      else {
        iVar17 = (**(code **)(*in_ECX + 0x27c))();
        if (iVar17 == 0) {
switchD_005fe00d_caseD_4:
          uVar5 = uVar3 & 0xff03 | 3;
        }
        else {
          uVar13 = FUN_0051aa00(uVar3);
          uVar5 = uVar3;
          switch(uVar13) {
          case 4:
          case 5:
          case 6:
          case 0xb:
          case 0xc:
          case 0xd:
          case 0xe:
            goto switchD_005fe00d_caseD_4;
          case 8:
          case 9:
          case 10:
            uVar5 = uVar3 & 0xff07 | 7;
          }
        }
        sVar4 = FUN_00472330(uVar5);
        if (sVar4 != 0) {
          uStack_28 = (double)fStack_58;
          sVar4 = FUN_00472330(uVar5);
          fStack_54 = ((float)uStack_28 / (float)(int)sVar4) * fStack_54;
        }
        *(float *)(iVar9 + 0xbc) = fStack_54;
      }
    }
    uVar5 = FUN_00470720(*(undefined4 *)(&DAT_00b102e8 + iVar10 * 0x24));
    if ((uVar5 != uVar3) && (cVar1 = FUN_00470d00(uVar3), cVar1 != '\0')) {
      FUN_00477b60(uVar3,1,0xffffffff);
      if ((iStack_5c != -1) && (cVar1 = FUN_0051aae0(uVar3), cVar1 == '\0')) {
        uVar13 = FUN_004706e0(*(undefined4 *)(&DAT_00b102e8 + iVar10 * 0x24));
        FUN_005effd0(iStack_5c,uVar13);
      }
      (**(code **)(*in_ECX + 0x3a4))(uVar3,1);
      if (iVar10 == 0x28) {
        uVar25 = 0;
        uVar13 = FUN_0051a9b0(uStack_50,uStack_48,0x29,0);
        uVar6 = FUN_00470d20(uVar13,uVar25);
        FUN_00477b60(uVar6,0,0xffffffff);
        (**(code **)(*in_ECX + 0x3a4))(uVar6,0);
      }
    }
    iVar9 = FUN_004706e0(2);
    iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0xf0))(1);
    if ((iVar10 == 0) || ((in_ECX == DAT_00b333c4 && (cVar1 = FUN_005e6c10(), cVar1 != '\0')))) {
      iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0xf0))(1);
      if ((iVar10 == 0) &&
         (((iVar9 != 0 && (iVar9 = FUN_0051ac70(), iVar9 == 0x21)) &&
          (FUN_00470fc0(2,0), in_ECX == DAT_00b333c4)))) {
        uVar25 = 0;
        uVar13 = 2;
        FUN_0065d750(1);
        FUN_00470fc0(uVar13,uVar25);
      }
    }
    else {
      uVar25 = 0;
      uVar13 = FUN_0051a9b0(uStack_50,uStack_48,0x21,0);
      sVar4 = FUN_00470d20(uVar13,uVar25);
      iVar9 = FUN_0051aa00(sVar4);
      sVar7 = FUN_00470720(*(undefined4 *)(&DAT_00b102e8 + iVar9 * 0x24));
      if ((sVar7 != sVar4) && (cVar1 = FUN_00470d00(sVar4), cVar1 != '\0')) {
        FUN_00477b60(sVar4,1,0xffffffff);
        (**(code **)(*in_ECX + 0x3a4))(sVar4,1);
      }
    }
    iVar9 = FUN_004706e0(3);
    if (iVar9 != 0) {
      uVar13 = FUN_00470720(3);
      cVar1 = FUN_0051ac80(uVar13);
      if (cVar1 != '\0') {
        iVar9 = *(int *)in_ECX[0x16];
        puVar20 = (undefined4 *)FUN_005e6a40(&iStack_1c);
        (**(code **)(iVar9 + 0x30c))(*puVar20,puVar20[1],puVar20[2]);
      }
    }
    goto LAB_005fe2cc;
  }
  iVar17 = FUN_004706e0(*(undefined4 *)(&DAT_00b102e8 + iVar10 * 0x24));
  iVar19 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d4))();
  if (iVar17 != iVar19) goto LAB_005fdfb3;
  iVar10 = FUN_005e0ee0();
  if (iVar10 != 0xc) goto LAB_005fe2cc;
  uVar3 = FUN_00470720(0);
  iVar10 = (**(code **)(*in_ECX + 0x27c))();
  if (iVar10 == 0) {
switchD_005fdf13_caseD_4:
    uVar3 = uVar3 & 0xff03 | 3;
  }
  else {
    uVar13 = FUN_0051aa00(uVar3);
    switch(uVar13) {
    case 4:
    case 5:
    case 6:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      goto switchD_005fdf13_caseD_4;
    case 8:
    case 9:
    case 10:
      uVar3 = uVar3 & 0xff07 | 7;
    }
  }
  uVar13 = FUN_0051aa00(uVar3);
  switch(uVar13) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    fVar22 = (float10)FUN_005e3590();
    break;
  case 7:
  case 8:
  case 9:
  case 10:
    fVar22 = (float10)FUN_005e3750();
    break;
  case 0xf:
  case 0x10:
    *(undefined4 *)(iVar9 + 0xbc) = param_1;
    goto LAB_005fe2cc;
  default:
    goto switchD_005fdf46_default;
  }
  fStack_58 = (float)fVar22;
switchD_005fdf46_default:
  sVar4 = FUN_00472330(uVar3);
  if (sVar4 != 0) {
    uStack_28 = (double)fStack_58;
    sVar4 = FUN_00472330(uVar3);
    fStack_54 = ((float)uStack_28 / (float)(int)sVar4) * fStack_54;
  }
  *(float *)(iVar9 + 0xbc) = fStack_54;
LAB_005fe2cc:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005febf0(undefined4 param_1,int *param_2,int *param_3)

{
  uint3 uVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float fVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  int *in_ECX;
  byte bVar17;
  int *unaff_EBX;
  undefined4 unaff_ESI;
  int *unaff_FS_OFFSET;
  bool bVar18;
  float10 fVar19;
  undefined8 uVar20;
  float fVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  undefined1 auStack_1e0 [2];
  char cStack_1de;
  char cStack_1dd;
  float fVar25;
  undefined1 uVar26;
  undefined4 uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  int *local_1bc;
  undefined4 uStack_1b8;
  undefined8 uStack_1b4;
  float fStack_1ac;
  undefined4 uStack_1a8;
  undefined8 uStack_1a4;
  float fStack_19c;
  float fStack_198;
  uint uStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  char cStack_180;
  undefined1 auStack_17c [4];
  float fStack_178;
  float fStack_174;
  float fStack_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  float local_15c;
  float local_158;
  float local_154;
  undefined4 local_150;
  undefined4 local_14c;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2b9c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&uStack_1cc;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffe24;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1bc = param_2;
  if ((param_3 == (int *)0x0) || (cVar2 = FUN_0041df00(), cVar2 == '\0')) {
    uStack_194 = uStack_194 & 0xffffff;
    if ((1 < DAT_00b148cc) && (param_2 == (int *)0x0)) {
      if (in_ECX == DAT_00b333c4) {
        local_168 = 0;
        local_158 = 0.0;
        local_160 = 0x3f800000;
        local_150 = 0x3f800000;
      }
      else {
        local_168 = 0x3f800000;
        local_158 = 1.0;
        local_160 = 0;
        local_150 = 0;
      }
      local_14c = 0x3f800000;
      local_154 = 0.0;
      local_15c = 1.0;
      local_164 = 0;
      iVar6 = (**(code **)(*in_ECX + 0x154))();
      if (iVar6 != 0) {
        uVar7 = (**(code **)(*(int *)in_ECX[0x16] + 0x310))();
        pfVar8 = (float *)FUN_0053d4b0((int)&uStack_1a4 + 4,uVar7);
        fStack_178 = *pfVar8;
        fStack_174 = pfVar8[1];
        fStack_170 = pfVar8[2];
        uVar7 = FUN_005e6a40(&fStack_190);
        puVar9 = (undefined4 *)FUN_0053d4b0(&local_168,uVar7);
        fStack_19c = (float)puVar9[1];
        uStack_1a4 = (double)CONCAT44(*puVar9,(int)uStack_1a4);
        fStack_198 = (float)puVar9[2];
      }
      fStack_190 = uStack_1a4._4_4_ - fStack_178;
      fStack_1c0 = fStack_19c - fStack_174;
      fStack_188 = fStack_198 - fStack_170;
      fStack_18c = fStack_1c0;
      fStack_184 = fStack_188;
      fStack_178 = fStack_190;
      fStack_174 = fStack_1c0;
      fStack_170 = fStack_188;
      FUN_0043f350();
      fStack_190 = fStack_178 * 800.0 * 0.1;
      fStack_1c0 = fStack_174 * 800.0 * 0.1;
      fStack_184 = fStack_170 * 800.0 * 0.1;
      fStack_178 = fStack_190;
      fStack_174 = fStack_1c0;
      fStack_170 = fStack_184;
      iVar6 = FUN_006fcdc0(&fStack_178,&local_158);
      *(float *)(iVar6 + 0x54) = uStack_1a4._4_4_;
      *(float *)(iVar6 + 0x58) = fStack_19c;
      *(float *)(iVar6 + 0x5c) = fStack_198;
      puVar9 = (undefined4 *)FUN_00401f00(0x1c);
      uStack_1a4 = (double)CONCAT44(puVar9,(int)uStack_1a4);
      uStack_4 = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        FUN_006ffd30();
        *puVar9 = &PTR_FUN_00a2fd04;
        *(undefined2 *)(puVar9 + 6) = 8;
      }
      uStack_4 = 0xffffffff;
      *(ushort *)(puVar9 + 6) = *(ushort *)(puVar9 + 6) & 0xffd7 | 0x10;
      FUN_00405680(puVar9);
      puVar9 = (undefined4 *)FUN_00401f00(0x1c);
      uStack_1a4 = (double)CONCAT44(puVar9,(int)uStack_1a4);
      uStack_4 = 1;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        FUN_006ffd30();
        *puVar9 = &PTR_FUN_00a2fdb4;
        *(undefined2 *)(puVar9 + 6) = 0xf;
      }
      uStack_4 = 0xffffffff;
      *(ushort *)(puVar9 + 6) = *(ushort *)(puVar9 + 6) & 0xfffe | 2;
      FUN_00405680(puVar9);
      FUN_00440e60(iVar6,_DAT_00b148d4);
      param_2 = local_1bc;
    }
    iVar6 = 0;
    if ((int *)in_ECX[0x16] == (int *)0x0) {
      uStack_1b4._4_4_ = 0.0;
    }
    else {
      uStack_1b4._4_4_ = (float)(**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
      if (uStack_1b4._4_4_ != 0.0) {
        iVar6 = *(int *)((int)uStack_1b4._4_4_ + 8);
      }
    }
    uStack_1b4 = (double)CONCAT44(uStack_1b4._4_4_,iVar6);
    if (iVar6 == 0) {
      fVar19 = (float10)(**(code **)(*in_ECX + 0x26c))();
    }
    else {
      fStack_190 = *(float *)(iVar6 + 0x98);
      fVar19 = (float10)FUN_00547540(fStack_190);
    }
    uStack_1a8 = (float)fVar19;
    fVar19 = (float10)(**(code **)(*in_ECX + 0xec))();
    uStack_1a8 = (float)(fVar19 * (float10)uStack_1a8);
    if (param_2 != (int *)0x0) {
      uStack_1b4 = (double)((ulonglong)uStack_1b4 & 0xffffffff);
    }
    if (param_3 == (int *)0x0) {
      param_3 = (int *)FUN_006156c0();
    }
    if (param_3 == (int *)0x0) {
      if (((in_ECX == DAT_00b333c4) && (cVar2 = FUN_005f9620(), cVar2 != '\0')) ||
         (local_1bc != (int *)0x0)) goto LAB_006005c0;
    }
    else {
      cVar2 = FUN_0041df00();
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*param_3 + 0x198))(0);
        if (cVar2 != '\0') goto LAB_006005c0;
        if ((local_1bc == (int *)0x0) && (iVar6 = (**(code **)(*in_ECX + 0x330))(), iVar6 != 0)) {
          piVar24 = param_3;
          (**(code **)(*in_ECX + 0x330))(param_3);
          FUN_006171f0(piVar24);
        }
        piVar24 = local_1bc;
        fVar21 = (float)((int)&uStack_1b8 + 3);
        uStack_1b8 = (float)((uint)uStack_1b8 & 0xffffff);
        piVar23 = param_3;
        cVar2 = (**(code **)(*in_ECX + 0x2d4))(uStack_1b4._4_4_,param_3,local_1bc);
        bVar18 = cVar2 == '\0';
        fStack_190 = (float)CONCAT31(fStack_190._1_3_,cVar2);
        uStack_1b4._0_5_ = CONCAT14(bVar18,(float)uStack_1b4);
        if (bVar18) {
          if (piVar24 != (int *)0x0) {
            iVar6 = (**(code **)(*piVar24 + 0x170))();
            bVar17 = 1;
            if ((*(char *)(iVar6 + 4) == '\"') &&
               (iVar6 = (**(code **)(*piVar24 + 0x170))(), iVar6 != 0)) {
              bVar17 = ~*(byte *)(iVar6 + 0x80) & 1;
            }
            bVar18 = false;
            if (bVar17 != 0) {
              bVar18 = *(char *)((int)piVar24 + 0x96) == '\0';
            }
            goto LAB_005ff152;
          }
          if (fStack_1c4 != 0.0) {
            bVar18 = (bool)(~*(byte *)((int)fStack_1c4 + 0x9c) & 1);
            goto LAB_005ff152;
          }
LAB_005ff15d:
          iVar6 = FUN_005f23b0(0x11);
          bVar18 = iVar6 < 2;
        }
        else {
LAB_005ff152:
          if ((fStack_1c4 == 0.0) && (piVar24 == (int *)0x0)) goto LAB_005ff15d;
        }
        fVar10 = (float)(**(code **)(*param_3 + 0x284))(0x41);
        if ((bVar18 == false) || ((int)fVar10 < 100)) {
          if ((uStack_1cc._3_1_ != '\0') && (in_ECX == DAT_00b333c4)) {
            FUN_00663e80();
          }
          local_1bc = (int *)0x3f800000;
          uVar26 = (undefined1)((uint)unaff_ESI >> 0x18);
          piVar24 = (int *)CONCAT13(uVar26,(uint3)(ushort)unaff_ESI);
          iVar6 = (**(code **)(*in_ECX + 0x170))();
          if ((*(char *)(iVar6 + 4) != '$') && (cVar2 = FUN_005e0550(), cVar2 != '\0')) {
            iVar6 = (**(code **)(*(int *)param_3[0x16] + 0x1c8))();
            iVar11 = (**(code **)(*param_3 + 0x330))();
            if (iVar11 == 0) {
LAB_005ff276:
              if (iVar6 < 1) {
                if (fStack_1c8 == 0.0) {
                  iVar11 = -1;
                }
                else {
                  iVar11 = (int)*(char *)((int)fStack_1c8 + 0x90);
                }
                uVar7 = FUN_005f23b0(0x1f);
                fVar19 = (float10)FUN_005477f0(uVar7,iVar11);
                local_1bc = (int *)(float)fVar19;
                if ((1.0 < (float)local_1bc) && (iVar11 = FUN_005f23b0(0x1f), iVar11 == 4)) {
                  piVar24 = (int *)CONCAT13(uVar26,CONCAT12(1,(ushort)unaff_ESI));
                }
                if (in_ECX == DAT_00b333c4) {
                  uVar7 = FUN_009828c0(DAT_00b38f10);
                  _sprintf((char *)&local_150,"%s%d%s",DAT_00b38f08,uVar7);
                  FUN_0057acc0();
                }
              }
            }
            else {
              piVar22 = in_ECX;
              (**(code **)(*param_3 + 0x330))();
              cVar2 = FUN_00613670(piVar22);
              if ((cVar2 == '\0') || (iVar6 <= DAT_00b372f0)) goto LAB_005ff276;
              iVar6 = 1;
            }
            if (DAT_00b3b908 != '\0') {
              pcVar12 = "SUCCESS";
              if (0 < iVar6) {
                pcVar12 = "FAILURE";
              }
              uVar7 = FUN_004da2a0(iVar6,pcVar12);
              uVar7 = FUN_004da2a0(uVar7);
              FUN_00579b60("%.20s attempts a Sneak Attack on %.20s. Detection: %d, %s",uVar7);
            }
          }
          fVar25 = 0.0;
          uStack_1b8 = 0.0;
          uVar7 = 3;
          fStack_1c0 = 1.0;
          fStack_190 = 1.00893e-43;
          (**(code **)(*in_ECX + 0x164))(3);
          uVar4 = FUN_00470720(uVar7);
          iVar6 = FUN_0051aa00(uVar4);
          uStack_1a4._0_4_ = iVar6;
          if (fStack_1c4 == 0.0) {
            if (unaff_EBX != (int *)0x0) {
LAB_005ff48e:
              fStack_190 = 3.92364e-44;
              goto LAB_005ff4a8;
            }
            cVar2 = FUN_004d7f80();
            if (cVar2 == '\0') {
              uStack_1a4._0_4_ = (**(code **)(*in_ECX + 0x34c))();
              fVar19 = (float10)(int)uStack_1a4;
              goto LAB_005ff515;
            }
            uVar7 = (**(code **)(*param_3 + 0x19c))(&stack0xfffffe24,&uStack_1b8);
            fVar19 = (float10)FUN_005f4880(uVar7);
            uVar7 = (**(code **)(*in_ECX + 0x284))(0,(float)fVar19);
            uVar7 = (**(code **)(*in_ECX + 0x284))(7,uVar7);
            uVar7 = (**(code **)(*in_ECX + 0x284))(0x11,uVar7);
            FUN_00547280(uVar7);
            fStack_190 = 2.38221e-44;
            cVar2 = FUN_005e3270();
            if (cVar2 == '\0') {
              if ((char)local_10 == '\0') {
                fVar19 = (float10)1;
              }
              else {
                uVar7 = (**(code **)(*in_ECX + 0x284))(0x11,iVar6);
                fVar19 = (float10)FUN_00546ba0(uVar7);
              }
              fStack_1c0 = (float)fVar19;
            }
            cVar2 = FUN_005e0550();
            if (cVar2 == '\0') {
              fVar25 = fStack_1c0 * 0.0;
              uStack_1b8 = fStack_1c0 * uStack_1b8;
            }
          }
          else {
            if (unaff_EBX != (int *)0x0) goto LAB_005ff48e;
            fStack_190 = (float)FUN_004bb060();
LAB_005ff4a8:
            fVar25 = fStack_190;
            iVar6 = (**(code **)(*in_ECX + 0x170))();
            if ((*(char *)(iVar6 + 4) != '$') && (cVar2 = FUN_005e0550(), cVar2 == '\0')) {
              if ((char)local_10 == '\0') {
                fVar19 = (float10)1;
              }
              else {
                uVar7 = (**(code **)(*in_ECX + 0x284))(fVar25,(int)uStack_1a4);
                fVar19 = (float10)FUN_00546ba0(uVar7);
              }
              fStack_1c0 = (float)fVar19;
            }
            if (unaff_EBX == (int *)0x0) {
              fVar19 = (float10)FUN_00484f80(in_ECX,fStack_1c0);
            }
            else {
              fVar19 = (float10)FUN_004b9f60();
            }
LAB_005ff515:
            fVar25 = (float)fVar19;
          }
          iVar6 = *in_ECX;
          fVar25 = (float)local_1bc * fVar25;
          uStack_1b8 = (float)local_1bc * uStack_1b8;
          iVar11 = (**(code **)(iVar6 + 0x214))();
          (**(code **)(iVar6 + 0x210))(iVar11 + 1);
          (**(code **)(*in_ECX + 0x218))(uStack_194);
          if (((bVar18 != false) && ((int)fVar25 - 1U < 99)) &&
             ((uStack_1cc != 0.0 || (piVar24 != (int *)0x0)))) {
            fVar21 = (1.0 - (float)(int)fVar25 / 100.0) * fVar21;
          }
          uStack_1a4 = (double)CONCAT44(fVar21,(int)uStack_1a4);
          if (uStack_1cc == 0.0) {
            if (piVar24 != (int *)0x0) goto LAB_005ff6ed;
          }
          else if (piVar24 == (int *)0x0) {
            uVar13 = (**(code **)(unaff_EBX[0x22] + 0x10))();
            fStack_1ac = (float)(uVar13 & 0xffff);
            fVar19 = (float10)FUN_00547240((float)(int)fStack_1ac);
            fStack_1ac = (float)fVar19;
            (**(code **)(*in_ECX + 0x2c4))(uStack_1cc,fStack_1ac,0);
            FUN_004fbf90(unaff_EBX,param_3 + 0x11,0x100);
            FUN_004fbf90(*(undefined4 *)((int)uStack_1cc + 8),param_3 + 0x11,0x100);
          }
          else {
LAB_005ff6ed:
            uVar14 = 0x100;
            piVar22 = param_3 + 0x11;
            uVar7 = (**(code **)(*piVar24 + 0x170))();
            FUN_004fbf90(uVar7,piVar22,uVar14);
          }
          FUN_004fbf90();
          if ((piVar24 == (int *)0x0) && (iVar6 = (**(code **)(*param_3 + 0x284))(0x3b), 0 < iVar6))
          {
            fVar19 = (float10)(**(code **)(*param_3 + 0x288))(0x3b);
            fStack_1ac = (float)(fVar19 / (float10)100.0);
            if ((0.0 < fStack_1ac * fVar21) &&
               ((**(code **)(*in_ECX + 0x220))(fStack_1ac * fVar21,0,param_3), DAT_00b3b908 != '\0')
               ) {
              uVar7 = FUN_004da2a0();
              uVar14 = FUN_00565cc0();
              uVar15 = FUN_004da2a0();
              FUN_00579b60("%.20s reflected %.1f points of %s damage to %.20s!",uVar15,uVar14,uVar7)
              ;
            }
          }
          cStack_1de = (char)(uVar5 >> 0x10);
          if (cStack_1de == '\0') {
            fVar19 = (float10)(**(code **)(*param_3 + 0x348))();
            if ((float10)100.0 <= fVar19) {
              fVar19 = (float10)100.0;
            }
            else {
              fVar19 = (float10)(**(code **)(*param_3 + 0x348))();
            }
            fStack_1c4 = (float)fVar19 / 100.0;
          }
          else {
            fStack_1c4 = 0.0;
          }
          if (_DAT_00b36ea0 < fStack_1c4) {
            fStack_1c4 = _DAT_00b36ea0;
          }
          fVar19 = (float10)0;
          if ((float10)fStack_1c0 <= fVar19) {
            fVar19 = (float10)FUN_00547260();
          }
          fStack_1c8 = (float)fVar19;
          uStack_1cc = 0.0;
          piVar22 = piVar24;
          if (piVar24 == (int *)0x0) {
            piVar22 = in_ECX;
          }
          cVar2 = (**(code **)(*param_3 + 0x1a0))();
          cStack_1dd = (char)(uVar5 >> 0x18);
          auStack_1e0 = SUB42(uVar5,0);
          if ((cVar2 == '\0') && (cStack_1de == '\0')) {
            cVar2 = FUN_005e5670();
            _auStack_1e0 = CONCAT12(cVar2,auStack_1e0);
            uVar1 = _auStack_1e0;
          }
          else {
            _auStack_1e0 = (uint3)(ushort)auStack_1e0;
            uVar1 = _auStack_1e0;
            cStack_1de = '\0';
            cVar2 = cStack_1de;
          }
          _auStack_1e0 = CONCAT13(cStack_1dd,uVar1);
          iVar6 = (**(code **)(*(int *)param_3[0x16] + 0xf8))(1);
          if ((iVar6 == 0) && (iVar6 = (**(code **)(*(int *)param_3[0x16] + 0xec))(), iVar6 == 0)) {
            fStack_18c = (float)CONCAT31(fStack_18c._1_3_,1);
            if (cVar2 == '\0') goto LAB_005ff824;
          }
          else {
LAB_005ff824:
            fStack_18c = (float)((uint)fStack_18c & 0xffffff00);
          }
          uVar5 = (uint)piVar23 & 0xffffff;
          if ((cVar2 != '\0') && (cVar2 = FUN_006131d0(param_3,_auStack_1e0,0), cVar2 != '\0')) {
            iVar6 = (**(code **)(*(int *)param_3[0x16] + 0xf8))();
            if (iVar6 == 0) {
              iVar6 = (**(code **)(*(int *)param_3[0x16] + 0xec))(1);
              uVar7 = 1;
              if (iVar6 == 0) goto LAB_005ff879;
            }
            else {
LAB_005ff879:
              uVar7 = 0;
            }
            if ((fStack_190._0_1_ == '\0') || (piVar24 == (int *)0x0)) {
              fVar19 = (float10)FUN_005f4880(uVar7,fStack_190);
              uVar7 = (**(code **)(*param_3 + 0x284))(7,(float)fVar19);
              uVar7 = (**(code **)(*param_3 + 0x284))(0xf,uVar7);
              fVar19 = (float10)FUN_005474a0(uVar7);
            }
            else {
              fVar19 = (float10)0;
            }
            fVar10 = (float)fVar19;
            (**(code **)(*in_ECX + 0x3b4))(uVar5,fVar10,param_3,piVar24);
            if (fVar10 == 0.0) {
              iVar6 = -1;
            }
            else {
              iVar6 = (int)*(char *)((int)fVar10 + 0x90);
            }
            auStack_1e0[0] = (char)uVar1;
            uStack_1b4 = (double)CONCAT44(iVar6,(float)uStack_1b4);
            if (auStack_1e0[0] == '\0') {
              if ((fStack_18c._0_1_ == '\0') || (iVar6 = FUN_005f23b0(), iVar6 < 2)) {
                if ((param_3[0x16] != 0) &&
                   ((iVar6 = (**(code **)(*(int *)param_3[0x16] + 0xf8))(), iVar6 != 0 &&
                    (iVar6 = (**(code **)(*(int *)param_3[0x16] + 0xf8))(), *(int *)(iVar6 + 8) != 0
                    )))) {
                  (**(code **)(*(int *)param_3[0x16] + 0xf8))();
                  FUN_004b4c70(0,(int)((ulonglong)uStack_1a4 >> 0x20));
                  FUN_006af880();
                }
              }
              else {
                if ((param_3[0x16] == 0) ||
                   (iVar6 = (**(code **)(*(int *)param_3[0x16] + 0xec))(), iVar6 == 0)) {
                  puVar9 = (undefined4 *)(**(code **)(*param_3 + 0x174))();
                  puVar16 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
                  uVar7 = *puVar9;
                  uVar14 = puVar9[1];
                  uVar15 = puVar9[2];
                  iVar6 = -1;
                }
                else {
                  iVar6 = (**(code **)(*(int *)param_3[0x16] + 0xec))();
                  iVar6 = (int)*(char *)(*(int *)(iVar6 + 8) + 0x90);
                  puVar9 = (undefined4 *)(**(code **)(*param_3 + 0x174))();
                  puVar16 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
                  uVar7 = *puVar9;
                  uVar14 = puVar9[1];
                  uVar15 = puVar9[2];
                }
                FUN_006afff0(0xffffffff,iVar6,*puVar16,puVar16[1],puVar16[2],uVar7,uVar14,uVar15);
              }
            }
            else if ((param_3[0x16] == 0) ||
                    (iVar11 = (**(code **)(*(int *)param_3[0x16] + 0xec))(), iVar11 == 0)) {
              puVar9 = (undefined4 *)(**(code **)(*param_3 + 0x174))();
              puVar16 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
              FUN_006afff0(iVar6,0xffffffff,*puVar16,puVar16[1],puVar16[2],*puVar9,puVar9[1],
                           puVar9[2],fStack_1c0);
            }
            else {
              iVar6 = (**(code **)(*(int *)param_3[0x16] + 0xec))();
              cVar2 = *(char *)(*(int *)(iVar6 + 8) + 0x90);
              puVar9 = (undefined4 *)(**(code **)(*param_3 + 0x174))();
              puVar16 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
              FUN_006afff0(uStack_1b4._4_4_,(int)cVar2,*puVar16,puVar16[1],puVar16[2],*puVar9,
                           puVar9[1],puVar9[2],(int)((ulonglong)uStack_1a4 >> 0x20));
            }
            if (fStack_18c._0_1_ == '\0') {
              fStack_1c0 = (1.0 - (float)unaff_EBX) * uStack_1cc;
              uStack_1cc = uStack_1cc - fStack_1c0;
              if (uStack_1cc < 0.0) {
                uStack_1cc = 0.0;
              }
              if (!NAN((float)unaff_EBX) && 1.0 < (float)unaff_EBX != ((float)unaff_EBX == 1.0)) {
                uStack_1cc = 0.0;
              }
            }
          }
          iVar6 = (**(code **)(*param_3 + 0x170))();
          if ((((*(char *)(iVar6 + 4) == '$') || ((float)local_1bc == 0.0)) || (fStack_1c0 <= 0.0))
             || (iVar6 = FUN_005e5a00(), iVar6 == 0)) {
            if (cStack_1dd == '\0') {
              FUN_006af880();
            }
          }
          else {
            cVar2 = FUN_00468ff0(0xd,0);
            if ((cVar2 == '\0') ||
               ((cVar2 = FUN_005e5670(), cVar2 != '\0' && (iVar11 = FUN_005f23b0(0xf), iVar11 < 2)))
               ) {
              (**(code **)(*param_3 + 0x2c4))(iVar6,fStack_1c0,0);
            }
            if (cStack_1dd == '\0') {
              if ((*(int *)(iVar6 + 8) != 0) && (*(char *)(*(int *)(iVar6 + 8) + 4) == '\x14')) {
                cVar2 = FUN_004b4c70();
                if (cVar2 == '\0') {
                  uVar7 = 0x1b;
                }
                else {
                  uVar7 = 0x12;
                }
                (**(code **)(*param_3 + 0x39c))(uVar7,0,0);
              }
              FUN_004b4c70(0xffffffff,0,uStack_194);
              FUN_006af880();
            }
            FUN_00484470();
            FUN_00401f20(iVar6);
          }
          if ((int *)in_ECX[0x16] == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
          }
          if ((fStack_1c8 == 0.0) || (iVar6 == 0)) {
            if (unaff_EBX != (int *)0x0) {
              iVar6 = FUN_004ef1a0();
              goto LAB_005ffdb3;
            }
          }
          else {
            if (unaff_EBX == (int *)0x0) {
              iVar6 = *(int *)((int)fStack_1c8 + 100);
            }
            else {
              iVar6 = FUN_004ef1a0();
            }
LAB_005ffdb3:
            if ((iVar6 == 0) || (iVar6 = iVar6 + 0x18, iVar6 == 0)) {
              if (unaff_EBX == (int *)0x0) {
                iVar6 = FUN_00484df0();
              }
              else {
                iVar6 = FUN_00607400();
                if ((iVar6 != 0) && (iVar6 = iVar6 + 0x18, iVar6 != 0)) goto LAB_005ffdfb;
                iVar6 = FUN_00607410();
              }
              if ((iVar6 == 0) || (iVar6 = iVar6 + 0x24, iVar6 == 0)) goto LAB_005ffeb5;
            }
LAB_005ffdfb:
            if ((char)uStack_194 == '\0') {
              if (in_ECX == DAT_00b333c4) {
                uVar7 = FUN_00415360();
                uVar7 = FUN_0041b7c0(uVar7);
                FUN_006635e0(uVar7);
              }
              else {
                iVar6 = (**(code **)(*in_ECX + 0x330))();
                if (iVar6 != 0) {
                  uVar7 = FUN_00415360();
                  uVar7 = FUN_0041b7c0(uVar7);
                  iVar6 = FUN_0041b820(uVar7);
                  if (iVar6 != 0) {
                    uVar7 = *(undefined4 *)(iVar6 + 0xc);
                    uVar14 = 0;
                    (**(code **)(*in_ECX + 0x330))(uVar7,0);
                    FUN_00619fa0(uVar7,uVar14);
                  }
                }
              }
            }
            else if (unaff_EBX == (int *)0x0) {
              fVar19 = (float10)FUN_004849c0();
              uStack_1b4 = (double)fVar19;
              fVar19 = (float10)(*(code *)**(undefined4 **)(iVar6 + 0xc))();
              if ((float10)uStack_1b4 < fVar19) {
                (**(code **)(*(int *)in_ECX[0x16] + 0x42c))();
              }
            }
          }
LAB_005ffeb5:
          if (0.0 < (float)piVar22) {
            if (0.0 < uStack_1b8) goto LAB_006000cc;
LAB_006000e2:
            if (DAT_00b3b908 != '\0') {
              if (0.0 < (float)piVar22) {
                uVar7 = FUN_00565cc0(8);
                fVar19 = (float10)(**(code **)(*param_3 + 0x288))(8,uVar7);
                uVar7 = FUN_004da2a0((double)(float)piVar22,(double)fVar19);
                uVar7 = FUN_004da2a0(uVar7);
                FUN_00579b60("%.20s hits %.20s for %.1f/%.1f %s damage!",uVar7);
              }
              if (0.0 < uStack_1b8) {
                uVar7 = FUN_00565cc0(10);
                fVar19 = (float10)(**(code **)(*param_3 + 0x288))(10,uVar7);
                uVar7 = FUN_004da2a0((double)uStack_1b8,(double)fVar19);
                uVar7 = FUN_004da2a0(uVar7);
                FUN_00579b60("%.20s hits %.20s for %.1f/%.1f %s damage!",uVar7);
              }
            }
            if ((in_ECX == DAT_00b333c4) && (unaff_EBX != (int *)0x0)) {
              FUN_005a89a0(param_3);
            }
            cVar2 = (**(code **)(*param_3 + 0x198))(0);
            cVar3 = (**(code **)(*param_3 + 0x220))();
            if (cVar2 == '\0') {
              if (cVar3 != '\0') {
                if ((unaff_EBX == (int *)0x0) && (iVar6 = FUN_005f1910(4), 0 < iVar6)) {
                  FUN_005f0ee0(param_3,piVar22);
                }
                goto LAB_0060020d;
              }
            }
            else {
LAB_0060020d:
              piVar23 = (int *)CONCAT13(cVar3,(int3)piVar24);
              if (cVar3 != '\0') goto LAB_005ffedf;
            }
            if (uStack_1b8 <= 0.0) {
LAB_0060024f:
              uVar7 = FUN_009828c0();
              fVar19 = (float10)FUN_005f4880(uVar7);
              uVar7 = (**(code **)(*param_3 + 0x284))(7,(float)fVar19);
              (**(code **)(*param_3 + 0x284))(3,uVar7);
              cVar2 = FUN_005475d0();
            }
            else {
              iVar6 = (**(code **)(*param_3 + 0x284))(10);
              uStack_1b4 = (double)CONCAT44(uStack_1b4._4_4_,iVar6);
              if ((float)iVar6 < 0.0 == ((float)iVar6 == 0.0)) goto LAB_0060024f;
              cVar2 = '\x01';
            }
            iVar6 = (**(code **)(*in_ECX + 0x164))();
            if (iVar6 == 0) {
              iVar6 = 0xff;
            }
            else {
              uVar7 = 3;
              (**(code **)(*in_ECX + 0x164))(3);
              uVar7 = FUN_00470720(uVar7);
              iVar6 = FUN_0051aa00(uVar7);
            }
            if ((unaff_EBX == (int *)0x0) && (iVar6 != 0x18)) {
              piVar23 = (int *)((uint)piVar24 & 0xffffff);
LAB_006002df:
              if (iVar6 == 0x17) goto LAB_006002e8;
              bVar18 = false;
            }
            else {
              piVar23 = (int *)CONCAT13(1,(int3)piVar24);
              if (unaff_EBX == (int *)0x0) goto LAB_006002df;
LAB_006002e8:
              bVar18 = true;
            }
            iVar6 = FUN_005f23b0(fStack_190);
            if ((2 < iVar6) && (iVar6 = FUN_005f1910(4), 0 < iVar6)) {
              iVar6 = FUN_0047df80(0);
              cVar3 = (char)((uint)piVar23 >> 0x18);
              if ((cVar3 != '\0') && (iVar6 % 100 < DAT_00b37240)) {
                cVar2 = '\x01';
              }
              if (((bVar18) && (iVar11 = FUN_005f23b0(fStack_190), iVar11 == 4)) &&
                 (iVar6 % 100 < DAT_00b37248)) {
                cVar2 = '\0';
                iVar6 = FUN_0041b880();
                if (iVar6 != 0) {
                  uVar7 = (**(code **)(param_3[0x17] + 0x30))();
                  uStack_1b4 = (double)CONCAT44(uStack_1b4._4_4_,uVar7);
                  (**(code **)(param_3[0x17] + 0x34))(iVar6 + 0x18);
                  FUN_0069af30();
                  (**(code **)(param_3[0x17] + 0x34))(uStack_1b8);
                }
              }
              if ((cVar3 != '\0') && (cVar2 != '\0')) {
                fVar19 = (float10)FUN_00547770(0x42480000);
                uStack_1b4 = (double)CONCAT44(uStack_1b4._4_4_,(float)fVar19);
                if (unaff_EBX == (int *)0x0) {
                  iVar6 = *in_ECX;
                }
                else {
                  iVar6 = *unaff_EBX;
                }
                puVar9 = (undefined4 *)(**(code **)(iVar6 + 0x174))();
                (**(code **)(*(int *)param_3[0x16] + 0x2f0))
                          (param_3,*puVar9,puVar9[1],puVar9[2],(float)uStack_1b4);
                cVar2 = '\0';
              }
            }
            uStack_1a4 = (double)(float)piVar22;
            iVar6 = (**(code **)(*param_3 + 0x284))(8);
            uStack_1b4 = (double)CONCAT44(uStack_1b4._4_4_,(float)uStack_1a4 / (float)iVar6);
            cVar3 = FUN_005fc090(param_3,fStack_190);
            if (cVar2 == '\0') {
              pfVar8 = (float *)FUN_00403c00();
              if (*pfVar8 < (float)uStack_1b4) goto LAB_00600498;
              iVar6 = FUN_0047df80(0);
              uStack_1b4 = (double)iVar6 / 32767.0;
              pfVar8 = (float *)FUN_00403c00();
              if ((float)uStack_1b4 <= *pfVar8) goto LAB_00600498;
            }
            else {
LAB_00600498:
              if (param_3 == DAT_00b333c4) {
                iVar6 = *DAT_00b333c4;
              }
              else {
                iVar6 = *param_3;
              }
              (**(code **)(iVar6 + 0x308))();
              if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_3 + 0x19c))(), cVar2 == '\0')) {
                cVar2 = FUN_006131d0(param_3);
                if (cVar2 != '\0') {
                  cVar3 = '\x01';
                  uStack_1a8 = (float)CONCAT13(1,(undefined3)uStack_1a8);
                }
                if (DAT_00b3b908 != '\0') {
                  uVar7 = FUN_004da2a0((double)fStack_198);
                  uVar7 = FUN_004da2a0(uVar7);
                  FUN_00579b60("%.20s is staggered down by %.20s\'s %.1f total point blow!",uVar7);
                }
              }
            }
            if (cVar3 != '\0') {
              FUN_005f4fd0();
            }
          }
          else {
            piVar23 = piVar24;
            if (0.0 < uStack_1b8) {
LAB_006000cc:
              uStack_1b4 = (double)CONCAT44(uStack_1b4._4_4_,(float)piVar22 / fStack_198);
              uStack_1b8 = uStack_1b8 * ((float)piVar22 / fStack_198);
              goto LAB_006000e2;
            }
          }
LAB_005ffedf:
          if ((0.0 < fStack_1c4) ||
             ((cStack_180 != '\0' && (iVar6 = FUN_005f23b0(0x11), 1 < iVar6)))) {
            if (unaff_EBX == (int *)0x0) {
              cVar2 = FUN_005f3c30();
            }
            else {
              cVar2 = '\0';
            }
            uStack_1a4 = (double)CONCAT71(uStack_1a4._1_7_,cVar2);
            FUN_005f4e10((int)uStack_1a4);
            if ((cVar2 == '\0') &&
               ((cVar2 = FUN_005fc2b0(in_ECX), unaff_EBX == (int *)0x0 || (cVar2 != '\0')))) {
              FUN_005f4f00();
            }
            if (param_3 == DAT_00b333c4) {
              uVar7 = 1;
              goto LAB_00600574;
            }
          }
          else {
            if ((((unaff_EBX == (int *)0x0) && ((char)((uint)piVar23 >> 0x10) != '\0')) &&
                (cStack_180 != '\0')) &&
               (((fStack_1c8 != 0.0 && (iVar6 = FUN_005f23b0(0xf), 1 < iVar6)) &&
                (iVar6 = FUN_0047df80(0), iVar6 % 100 <= DAT_00b37250)))) {
              FUN_005f4f00();
            }
            if (uStack_1a8._3_1_ == '\0') {
              iVar6 = *param_3;
              piVar24 = (int *)in_ECX[0x16];
              uVar7 = FUN_005e6a40(auStack_17c);
              uVar7 = (**(code **)(*piVar24 + 0x310))(uVar7);
              uVar20 = CONCAT44(piVar22,in_ECX);
              fVar21 = fStack_1c4;
              (**(code **)(iVar6 + 0x398))();
              iVar6 = (**(code **)(*param_3 + 0x284))(4,uVar20,fVar21,uVar7);
              if (0 < iVar6) {
                uVar7 = FUN_009828c0();
                fVar19 = (float10)FUN_005f4880(uVar7);
                fVar21 = (float)fVar19;
                uVar14 = (**(code **)(*param_3 + 0x284))(7,fVar21);
                uVar14 = (**(code **)(*param_3 + 0x284))(3,uVar14);
                FUN_00547690(uVar14);
                (**(code **)(*in_ECX + 0x174))();
                (**(code **)(*param_3 + 0x174))();
                FUN_004121a0(fVar21,uVar7);
                pfVar8 = (float *)FUN_00403c00();
                if (*pfVar8 < fVar10) {
                  pfVar8 = (float *)FUN_00403c00();
                  fVar10 = *pfVar8;
                }
                FUN_0043f350();
                fStack_18c = fVar10 * (float)uStack_1b4;
                fStack_188 = fVar10 * uStack_1b4._4_4_;
                fStack_184 = fVar10 * fStack_1ac;
                local_15c = fStack_18c;
                local_158 = fStack_188;
                local_154 = fStack_184;
                iVar6 = FUN_0065a2c0();
                if (iVar6 != 0) {
                  puVar9 = (undefined4 *)FUN_00403c00();
                  FUN_008907a0(&local_15c,*puVar9);
                }
              }
            }
            if (param_3 == DAT_00b333c4) {
              uVar7 = 0;
LAB_00600574:
              FUN_007eb010(uVar7);
            }
          }
          if ((int *)param_3[0x16] != (int *)0x0) {
            iVar6 = *(int *)param_3[0x16];
            uVar7 = (**(code **)(param_3[0x1a] + 8))(8);
            cVar2 = (**(code **)(iVar6 + 0x44c))(uVar7);
            if (cVar2 != '\0') {
              FUN_00679340(param_3,8);
            }
          }
        }
        else {
          if (in_ECX == DAT_00b333c4) {
            FUN_0057acc0();
            if (uStack_1cc._3_1_ != '\0') {
              uStack_1cc = (float)((uint)uStack_1cc & 0xffffff);
            }
          }
          if (DAT_00b3b908 != '\0') {
            uVar7 = FUN_004da2a0();
            uVar7 = FUN_004da2a0(uVar7);
            FUN_00579b60("%.20s\'s normal weapons have no effect on %.20s!",uVar7);
          }
        }
        (**(code **)(*param_3 + 0x3a8))();
        goto LAB_006005c0;
      }
      if ((int *)in_ECX[0x16] != (int *)0x0) {
        (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
      }
    }
  }
  else if ((int *)in_ECX[0x16] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
  }
  FUN_006af880();
LAB_006005c0:
  *unaff_FS_OFFSET = local_c;
  return;
}


