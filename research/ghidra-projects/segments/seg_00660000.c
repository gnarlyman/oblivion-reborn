
undefined4 FUN_006600d0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    return *(undefined4 *)(in_ECX + 0x5c8);
  }
  return *(undefined4 *)(in_ECX + 0x104);
}



undefined4 FUN_00660110(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 != '\0') {
    return *(undefined4 *)(in_ECX + 0x5d0);
  }
  uVar1 = FUN_00612220();
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00660130(void)

{
  float fVar1;
  float fVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int *in_ECX;
  undefined4 *puVar9;
  float10 fVar10;
  float local_e0;
  float local_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 auStack_c0 [9];
  undefined4 auStack_9c [9];
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [36];
  undefined1 auStack_48 [36];
  undefined1 auStack_24 [36];
  
  local_dc = _DAT_00b36bc0;
  FUN_004d8370();
  uVar3 = FUN_00470720(3);
  iVar4 = FUN_0051aa00(uVar3);
  uVar3 = FUN_00470720(1);
  iVar5 = FUN_0051aa00(uVar3);
  iVar6 = FUN_005e0ee0();
  if (((iVar6 != 3) && (iVar4 - 0x11U < 10)) ||
     ((iVar4 = FUN_005e0ee0(), iVar4 != 3 && (iVar5 - 0x22U < 6)))) {
    local_dc = 1.0;
  }
  fVar2 = local_dc;
  if (local_dc != _DAT_00b14fb4) {
    local_e0 = _DAT_00b36bc8;
    if (local_dc == 1.0) {
      local_e0 = 0.1;
    }
    fVar1 = (_DAT_00b33e9c / local_e0) * (local_dc - _DAT_00b14fb4);
    _DAT_00b14fb4 = fVar1 + _DAT_00b14fb4;
    if ((0.0 <= fVar1) || (local_dc <= _DAT_00b14fb4)) {
      fVar2 = _DAT_00b14fb4;
      if ((0.0 < fVar1) && (fVar2 = _DAT_00b14fb4, local_dc < _DAT_00b14fb4)) {
        _DAT_00b14fb4 = local_dc;
        fVar2 = local_dc;
      }
    }
    else {
      _DAT_00b14fb4 = local_dc;
    }
  }
  local_dc = fVar2;
  fVar10 = (float10)(**(code **)(*in_ECX + 0x1e0))();
  local_e0 = (float)fVar10;
  iVar4 = (**(code **)(*in_ECX + 0x380))();
  if ((iVar4 != 0) && (iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))(), iVar4 == 4)) {
    local_e0 = (float)in_ECX[0x187];
  }
  FUN_0070fdd0(local_e0);
  fVar10 = (float10)FUN_004a9720();
  FUN_0070fd30((float)fVar10);
  puVar7 = (undefined4 *)FUN_007100a0(auStack_24,auStack_48);
  puVar9 = auStack_c0;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  fStack_d8 = 0.0;
  fStack_d4 = 1.0;
  fStack_d0 = 0.0;
  pfVar8 = (float *)FUN_007101f0(auStack_78,&fStack_d8);
  fStack_d8 = *pfVar8;
  fStack_d4 = pfVar8[1];
  fStack_d0 = pfVar8[2];
  fStack_cc = *pfVar8;
  fStack_c8 = pfVar8[1];
  fStack_c4 = pfVar8[2];
  fVar10 = (float10)FUN_00986130();
  local_e0 = (1.0 - local_dc) * (float)fVar10;
  if (fStack_d0 < 0.0) {
    local_e0 = local_e0 * -1.0;
  }
  FUN_0070fd30(local_e0);
  puVar7 = auStack_c0;
  puVar9 = auStack_9c;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar7 = (undefined4 *)FUN_007100a0(auStack_24,auStack_6c);
  puVar9 = auStack_9c;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar7 = auStack_9c;
  puVar9 = (undefined4 *)(in_ECX[0x174] + 0x30);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  return;
}



void FUN_00660450(int param_1)

{
  char cVar1;
  int in_ECX;
  
  if (param_1 == *(int *)(in_ECX + 0x5f4)) {
    if (*(int *)(in_ECX + 0x5f4) != 0) {
      cVar1 = FUN_005299b0(in_ECX + 0x5f8);
      if (cVar1 == '\0') {
        FUN_00529a20(in_ECX + 0x5f8);
      }
    }
    return;
  }
  *(int *)(in_ECX + 0x5f4) = param_1;
  if (param_1 == 0) {
    FUN_004526e0();
    return;
  }
  FUN_00529a20(in_ECX + 0x5f8);
  return;
}



undefined4 * FUN_006604c0(undefined4 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x588) == '\0') && (DAT_00b3bb0c != 0)) {
    uVar1 = *(undefined4 *)(DAT_00b3bb0c + 0x8c);
    fVar2 = *(float *)(DAT_00b3bb0c + 0x90);
    *param_1 = *(undefined4 *)(DAT_00b3bb0c + 0x88);
    param_1[1] = uVar1;
    param_1[2] = fVar2 - 6.0;
    return param_1;
  }
  FUN_005ee660(param_1);
  return param_1;
}



int FUN_00660530(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  piVar1 = *(int **)(in_ECX + 0x5ac);
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    do {
      if (*piVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
      piVar1 = (int *)piVar1[1];
    } while (piVar1 != (int *)0x0);
    *(int *)(in_ECX + 0x7a0) = iVar2;
    return iVar2;
  }
  piVar1 = (int *)FUN_006758e0(in_ECX,0xc,0);
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    do {
      if (*piVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
      piVar1 = (int *)piVar1[1];
    } while (piVar1 != (int *)0x0);
    *(int *)(in_ECX + 0x7a0) = iVar2;
    return iVar2;
  }
  *(undefined4 *)(in_ECX + 0x7a0) = 0;
  return *(int *)(in_ECX + 0x7a0);
}



int FUN_006605a0(char param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint3 uVar4;
  int in_ECX;
  int *piVar5;
  float10 fVar6;
  
  if ((*(int **)(in_ECX + 0x5ac) == (int *)0x0) ||
     (piVar5 = (int *)**(int **)(in_ECX + 0x5ac), piVar5 == (int *)0x0)) {
    return 0;
  }
  cVar3 = (**(code **)(*piVar5 + 400))();
  if (cVar3 != '\0') {
    while ((cVar3 = (**(code **)(*piVar5 + 0x334))(0), cVar3 == '\0' &&
           (((cVar3 = FUN_005e6cd0(0), cVar3 == '\0' ||
             (fVar6 = (float10)FUN_004d7e90(DAT_00b333c4,0), (float10)1500.0 < fVar6)) ||
            ((param_1 != '\0' && (cVar3 = FUN_005e6cd0(0), cVar3 != '\0'))))))) {
      puVar1 = *(undefined4 **)(in_ECX + 0x5ac);
      puVar2 = (undefined4 *)puVar1[1];
      if (puVar2 == (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      else {
        puVar1[1] = puVar2[1];
        *puVar1 = *puVar2;
        FUN_00401f20(puVar2);
      }
      piVar5 = (int *)**(undefined4 **)(in_ECX + 0x5ac);
      if ((piVar5 == (int *)0x0) || (cVar3 = (**(code **)(*piVar5 + 400))(), cVar3 == '\0')) break;
    }
  }
  piVar5 = *(int **)(in_ECX + 0x5ac);
  uVar4 = (uint3)((uint)piVar5 >> 8);
  if ((piVar5[1] == 0) && (*piVar5 == 0)) {
    return (uint)uVar4 << 8;
  }
  return CONCAT31(uVar4,1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006606f0(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x600) != '\0') {
    *(float *)(in_ECX + 0x604) = _DAT_00b33e9c + *(float *)(in_ECX + 0x604);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00660710(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (0 < param_1) {
    *(int *)(in_ECX + 0x6fc) = *(int *)(in_ECX + 0x6fc) + param_1;
  }
  if (_DAT_00b36a68 < (float)*(int *)(in_ECX + 0x6fc) !=
      (_DAT_00b36a68 == (float)*(int *)(in_ECX + 0x6fc))) {
    uVar1 = FUN_009828c0();
    *(int *)(in_ECX + 0x6f8) = *(int *)(in_ECX + 0x6f8) + 1;
    *(undefined4 *)(in_ECX + 0x6fc) = uVar1;
    return;
  }
  return;
}



void FUN_00660760(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  pcVar1 = *(code **)(*in_ECX + 0x1bc);
  iVar5 = 0;
  *(undefined1 *)(in_ECX + 0x1c7) = 1;
  (*pcVar1)(0,uVar2);
  iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))();
  if (iVar3 == 6) {
    FUN_005f4ae0(0);
  }
  iVar3 = FUN_00401f00(0x3c);
  puStack_8 = (undefined1 *)0x0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00568e10();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_005661e0(6);
  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffd | 4;
  iVar4 = FUN_00401f00(0xc);
  puStack_8 = (undefined1 *)0x1;
  if (iVar4 != 0) {
    iVar5 = FUN_005696b0();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00569750(0);
  FUN_005697f0(unaff_retaddr);
  FUN_00565e00(iVar5);
  if (iVar5 != 0) {
    FUN_00569730();
    FUN_00401f20(iVar5);
  }
  *(undefined4 *)(iVar3 + 0x18) = 0;
  FUN_005f1590(iVar3,0,1);
  *unaff_FS_OFFSET = (int)in_ECX;
  return;
}



void FUN_00660880(void)

{
  code *pcVar1;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0x1bc);
  *(undefined1 *)((int)in_ECX + 0x71d) = 1;
  (*pcVar1)(0);
  FUN_005f7ec0();
  return;
}



void FUN_006608f0(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x611) = 1;
  *(int *)(in_ECX + 0x6d8) = *(int *)(in_ECX + 0x6d8) + 1;
  return;
}



void FUN_00660910(int *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *in_ECX;
  int *piVar11;
  int unaff_retaddr;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  
  uVar13 = 0;
  uVar12 = 1;
  uVar5 = (**(code **)(*param_1 + 0x170))(1,0);
  FUN_005e99c0(uVar5,uVar12,uVar13);
  uVar5 = (**(code **)(*param_1 + 0x154))(1,1,0);
  FUN_0088cf90(uVar5);
  piVar6 = (int *)FUN_00674e40(param_1[3],in_ECX);
  piVar11 = piVar6;
  if (piVar6 != (int *)0x0) {
    do {
      if (*piVar11 == 0) break;
      piVar7 = (int *)FUN_005e2e00();
      piVar14 = in_ECX;
      if (piVar7 != param_1) {
        piVar14 = (int *)0x0;
      }
      FUN_005e03c0(piVar14);
      piVar14 = piVar11 + 1;
      piVar11 = (int *)*piVar14;
    } while ((int *)*piVar14 != (int *)0x0);
    FUN_004526e0();
    FUN_00401f20(piVar6);
  }
  iVar8 = FUN_0046b680(0xffffffff);
  iVar9 = FUN_00589b70(0x3f1);
  if ((iVar9 == 0) && (*(char *)(DAT_00b333c4 + 0x124) == '\0')) {
    iVar9 = FUN_004db6b0();
    iVar10 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b05ad0,0);
    if ((iVar9 != 0) &&
       (((cVar2 = FUN_004de770(in_ECX,1), cVar2 == '\0' && (iVar10 == 0)) &&
        (iVar10 = (**(code **)(*param_1 + 0x170))(), *(int *)(iVar10 + 0xc) != 0xf)))) {
      DAT_00b3baf0 = (int *)FUN_00676480(param_1);
      if ((((*(byte *)(param_1 + 2) & 1) == 0) && (iVar8 == 0)) &&
         (cVar2 = FUN_004d8260(2), cVar2 == '\0')) {
        if (DAT_00b3baf0 != (int *)0x0) {
          iVar10 = *in_ECX;
          uVar5 = (**(code **)(*param_1 + 0x170))(param_2,0,iVar9);
          piVar11 = DAT_00b3baf0;
          goto LAB_00660aae;
        }
      }
      else {
        iVar10 = *in_ECX;
        uVar5 = (**(code **)(*param_1 + 0x170))(param_2,0,iVar9);
        piVar11 = param_1;
LAB_00660aae:
        (**(code **)(iVar10 + 0x238))(piVar11,uVar5);
      }
      cVar2 = FUN_004de880(0);
      if (cVar2 == '\0') {
        FUN_00423660(iVar9);
        goto LAB_00660ad4;
      }
    }
    FUN_0041f600();
  }
LAB_00660ad4:
  bVar1 = false;
  iVar9 = (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1);
  if (iVar9 != 0) {
    iVar9 = (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1);
    iVar9 = *(int *)(iVar9 + 8);
    iVar10 = (**(code **)(*param_1 + 0x170))();
    if (iVar10 == iVar9) {
      (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1);
      cVar2 = FUN_004847c0();
      if ((cVar2 == '\0') || (iVar9 = FUN_0041e7b0(), iVar9 != 0)) {
        sVar3 = FUN_0041e860();
        (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1);
        iVar9 = FUN_004b2460();
        uVar5 = 1;
        (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1,sVar3 + iVar9);
        FUN_0060d020(uVar5);
        iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1);
        uVar5 = *(undefined4 *)(iVar10 + 8);
        sVar4 = FUN_0041e860();
        iVar10 = (int)sVar4;
        FUN_0041e6f0(uVar5,iVar10);
        FUN_00487350(uVar5,iVar10);
        (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1);
        FUN_004238a0(sVar3 + iVar9);
        bVar1 = true;
      }
    }
  }
  if (((*(byte *)(param_1 + 2) & 1) == 0) && (unaff_retaddr == 0)) {
    cVar2 = FUN_004d8260(2);
    if (cVar2 == '\0') {
      if (!bVar1) {
        FUN_004ddc40(param_1,iVar8,0,0);
      }
      (**(code **)(*param_1 + 0x10))(1);
      if (!bVar1) goto LAB_00660c6d;
    }
    else {
      FUN_004d7d80();
      if (!bVar1) {
        FUN_004ddc40(param_1,iVar8,0,0);
        FUN_0057a3b0(0);
        return;
      }
    }
  }
  else {
    FUN_004d7d80();
    if (!bVar1) {
      FUN_004ddc40(param_1,iVar8,param_2,0);
      FUN_0057a3b0(0);
      return;
    }
  }
  FUN_005f8300(in_ECX[0x41],0);
  FUN_005f8300(in_ECX[0x172],0);
LAB_00660c6d:
  FUN_0057a3b0(0);
  return;
}



int * FUN_00660cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  int *in_ECX;
  
  iVar5 = FUN_006ecc80();
  cVar4 = FUN_004c9f60();
  if ((cVar4 != '\0') && (iVar5 != 0)) {
    iVar5 = FUN_004cc910();
    if (iVar5 == 0) {
      iVar5 = FUN_004d4790(in_ECX);
      if (iVar5 == 0) goto LAB_00660d26;
    }
    (**(code **)(*in_ECX + 0x100))(param_1,param_2,param_3,0,0,iVar5,0,0,1,0);
    return (int *)0x0;
  }
LAB_00660d26:
  piVar6 = (int *)(**(code **)(*in_ECX + 0x100))(param_1,param_2,param_3,0,1,0,param_4,param_5,1,0);
  if (piVar6 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar6 + 0x154))();
    if (iVar5 != 0) {
      FUN_0088ceb0(iVar5,0,1,1);
      FUN_00707370(0,0);
      FUN_0088ceb0(iVar5,1,1,1);
      pfVar7 = (float *)(**(code **)(*piVar6 + 0x174))();
      fVar1 = pfVar7[1];
      fVar2 = pfVar7[2];
      fVar3 = (*pfVar7 - *(float *)(iVar5 + 0x20)) + *pfVar7;
      *(float *)(iVar5 + 0x54) = fVar3;
      fVar1 = fVar1 + (fVar1 - *(float *)(iVar5 + 0x24));
      *(float *)(iVar5 + 0x58) = fVar1;
      fVar2 = fVar2 + (fVar2 - *(float *)(iVar5 + 0x28));
      *(float *)(iVar5 + 0x5c) = fVar2;
      FUN_004d8a30(fVar3,fVar1,fVar2);
      FUN_00897a20(iVar5,1);
      FUN_0088cf90(iVar5,1,1,0);
      FUN_005c1900();
      return piVar6;
    }
    FUN_00446cb0(piVar6);
    piVar6[2] = piVar6[2] | 0x400000;
    FUN_004d6f40(1);
  }
  FUN_005c1900();
  return piVar6;
}



undefined1 FUN_00660e90(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  cVar1 = (**(code **)(*param_1 + 0x198))(0);
  if ((cVar1 == '\0') && (((uint)param_1[2] >> 0xb & 1) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0x1a0))();
    if (cVar1 == '\0') {
      iVar2 = FUN_005e0dc0();
      if (iVar2 != 5) {
        iVar2 = FUN_005e03a0();
        if (iVar2 != 0) {
          if ((*(char *)(iVar2 + 0x20) == '\x01') || (*(char *)(iVar2 + 0x20) == '\a')) {
            iVar2 = (**(code **)(*(int *)param_1[0x16] + 0xcc))();
            if (iVar2 == DAT_00b333c4) {
              cVar1 = FUN_005e6bc0();
              if (cVar1 == '\0') {
                uVar3 = 1;
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}



bool FUN_00660f10(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char unaff_DI;
  
  cVar1 = (**(code **)(*param_1 + 0x198))(0);
  if ((((cVar1 != '\0') || (((uint)param_1[2] >> 0xb & 1) != 0)) ||
      (cVar1 = (**(code **)(*param_1 + 0x1a0))(), cVar1 != '\0')) ||
     (iVar2 = FUN_005e0dc0(), iVar2 == 5)) {
    return false;
  }
  (**(code **)(*(int *)param_1[0x16] + 0x18))(param_1,1);
  iVar2 = FUN_005e03a0();
  if (unaff_DI == '\0') {
    if (iVar2 == 0) {
      return false;
    }
    if ((*(char *)(iVar2 + 0x20) != '\x01') && (*(char *)(iVar2 + 0x20) != '\a')) {
      return false;
    }
    if (*(int *)(iVar2 + 0x28) == 0) {
      return false;
    }
    piVar6 = (int *)FUN_00569e60();
    if ((((piVar6 != (int *)0x0) || (iVar2 = FUN_00569e70(), iVar2 == 0)) ||
        (iVar3 = (**(code **)(*DAT_00b333c4 + 0x170))(), iVar2 != iVar3)) &&
       (piVar6 != DAT_00b333c4)) {
      return false;
    }
    goto LAB_00661054;
  }
  piVar6 = (int *)0x0;
  if (iVar2 == 0) {
LAB_00660fdb:
    if (((piVar6 != DAT_00b333c4) &&
        (piVar5 = (int *)(**(code **)(*(int *)param_1[0x16] + 0xcc))(), piVar5 != DAT_00b333c4)) ||
       (*(char *)(iVar2 + 0x20) == '\t')) {
      return false;
    }
  }
  else {
    if ((((*(int *)(iVar2 + 0x28) != 0) && (piVar6 = (int *)FUN_00569e60(), piVar6 == (int *)0x0))
        && (iVar3 = FUN_00569e70(), iVar3 != 0)) &&
       (iVar4 = (**(code **)(*DAT_00b333c4 + 0x170))(), iVar3 == iVar4)) {
      piVar6 = DAT_00b333c4;
    }
    piVar5 = (int *)FUN_00566d00(param_1);
    if (piVar5 != DAT_00b333c4) goto LAB_00660fdb;
  }
  if (piVar6 != DAT_00b333c4) {
    return true;
  }
LAB_00661054:
  cVar1 = FUN_005e6bc0();
  return cVar1 == '\0';
}



undefined4 FUN_00661080(void)

{
  char cVar1;
  int *in_ECX;
  float10 fVar2;
  float10 fVar3;
  
  if (DAT_00b3bb06 == '\0') {
    fVar2 = (float10)(**(code **)(*in_ECX + 0x288))(0xb);
    fVar3 = (float10)FUN_005e0d20();
    if (fVar3 < (float10)(double)fVar2) {
      cVar1 = FUN_005e1030();
      if (cVar1 == '\0') {
        FUN_0057acc0(DAT_00b38a48,0,1,0x40400000);
      }
      return 1;
    }
  }
  return 0;
}



void FUN_00661540(uint param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int *in_ECX;
  short *psVar12;
  short *local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 *puStack_18;
  undefined4 uStack_14;
  int local_10;
  short *local_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  local_10 = 0;
  iVar6 = *(int *)(DAT_00b33b00 + 0x14);
  psVar12 = (short *)0x0;
  local_44 = (short *)0x0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    local_c = (short *)0x4b4f4c42;
    FUN_0045b9a0(&local_c,4);
    psVar12 = *(short **)(DAT_00b33b00 + 0x14);
    local_44 = psVar12;
    FUN_0045b9a0(&local_10,2);
  }
  FUN_0046ac70(in_ECX + 0x81,0x120);
  FUN_0046ac70(in_ECX + 0xc9,0x120);
  if (0x30 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x114,0x120);
  }
  FUN_0046ac70(in_ECX + 0x111,4);
  FUN_0046ac70(in_ECX + 0x112,4);
  FUN_0046ac70(in_ECX + 0x113,4);
  if (DAT_00b05bac != '\0') {
    puVar8 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar9 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar8 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar9 - iVar6,0x234d,
                   ".\\AI\\PlayerCharacter.cpp");
      psVar12 = local_44;
    }
    else {
      piVar4 = (int *)FUN_0046b250(*puVar8);
      uVar5 = (**(code **)(*piVar4 + 0xd4))
                        (*(undefined4 *)((int)puVar8 + 5),0x234d,".\\AI\\PlayerCharacter.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar9 - iVar6,*puVar8,uVar5);
      psVar12 = local_44;
    }
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    uVar7 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)psVar12 + 0xffffU < uVar7) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\AI\\PlayerCharacter.cpp",0x234d);
    }
    *psVar12 = (short)uVar7 - (short)psVar12;
  }
  uVar7 = param_1;
  thunk_FUN_005e7ef0(param_1);
  uStack_8 = 0;
  iStack_40 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    param_1 = 0x4b4f4c42;
    FUN_0045b9a0(&param_1,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&uStack_8,2);
  }
  if ((uVar7 & 0x2000000) != 0) {
    FUN_00473c40();
  }
  FUN_0046ac70(in_ECX + 0x162,1);
  FUN_0046ac70((int)in_ECX + 0x589,1);
  FUN_0046ac70((int)in_ECX + 0x58b,1);
  FUN_0046ac70(in_ECX + 0x163,1);
  FUN_0046ac70(in_ECX + 0x164,4);
  FUN_0046ac70(in_ECX + 0x167,4);
  FUN_0046ac70(in_ECX + 0x168,4);
  FUN_0046ac70(in_ECX + 0x169,4);
  FUN_0046ac70(in_ECX + 0x16a,1);
  FUN_0046ac70(in_ECX + 0x180,1);
  FUN_0046ac70(in_ECX + 0x181,4);
  FUN_0046ac70(in_ECX + 0x182,4);
  FUN_0046ac70(in_ECX + 0x183,4);
  FUN_0046ac70(in_ECX + 0x184,1);
  FUN_0046ac70((int)in_ECX + 0x611,1);
  FUN_0046ac70(in_ECX + 0x185,4);
  FUN_0046ac70(in_ECX + 0x188,1);
  FUN_0046ac70(in_ECX + 0x187,4);
  FUN_0046ac70(in_ECX + 0x18b,0xc);
  FUN_0046ac70(in_ECX + 0x175,4);
  FUN_0046ac70(in_ECX + 400,4);
  FUN_0046ac70(in_ECX + 0x16f,4);
  FUN_0046ac70(in_ECX + 0x192,4);
  FUN_0045b9a0(in_ECX + 0x193,4);
  FUN_0046ac70(in_ECX + 0x165,1);
  FUN_0046ac70(in_ECX + 0x166,4);
  FUN_0046ac70(in_ECX + 0x1b9,1);
  FUN_0046ac70((int)in_ECX + 0x6e5,1);
  FUN_0046ac70((int)in_ECX + 0x6e6,1);
  FUN_0046ac70(in_ECX + 0x1bd,4);
  FUN_0046ac70(in_ECX + 0x1be,4);
  FUN_0046ac70(in_ECX + 0x1bf,4);
  FUN_0046ac70(in_ECX + 0x1c5,4);
  FUN_0046ac70(in_ECX + 0x170,1);
  if ((0x27 < *(byte *)(DAT_00b33b00 + 0x7c)) && (*(byte *)(DAT_00b33b00 + 0x7c) < 0x2d)) {
    FUN_0046ac70(in_ECX + 0x1c8,0xc);
    FUN_0046ac70(in_ECX + 0x1c8,0xc);
  }
  if (0x38 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x196,0x70);
    FUN_0046ac70(in_ECX + 0x1b2,0x18);
  }
  if (0x3e < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x1ce,1);
  }
  if (0x3f < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x15f,4);
    FUN_0046ac70(in_ECX + 0x160,4);
    FUN_0046ac70(in_ECX + 0x161,4);
  }
  if (0x48 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x44,4);
    FUN_0046ac70(in_ECX + 0x80,1);
  }
  uVar7 = param_1;
  if (0x62 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_1 = param_1 & 0xffffff00;
    if (in_ECX[0x16c] != 0) {
      param_1._1_3_ = SUB43(uVar7,1);
      param_1 = CONCAT31(param_1._1_3_,0x15);
    }
    FUN_0046ac70(&param_1,1);
    if ((char)param_1 != '\0') {
      FUN_0046ac70(in_ECX[0x16c],(param_1 & 0xff) * 4);
    }
  }
  if (0x70 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70((int)in_ECX + 0x58a,1);
    FUN_0046ac70((int)in_ECX + 0x5a9,1);
    FUN_0046ac70(in_ECX + 0x1c6,4);
    FUN_0046ac90(in_ECX + 0x1d8,4);
  }
  if (0x77 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(&DAT_00b3baea,1);
    FUN_0046ac70(&DAT_00b3bafc,4);
  }
  if (0x79 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(&DAT_00b3bb24,4);
  }
  local_44 = (short *)0x0;
  if (in_ECX[0x46] != 0) {
    local_44 = *(short **)(in_ECX[0x46] + 0xc);
  }
  FUN_0046ac90(&local_44,4);
  uStack_3c = 0;
  if (in_ECX[0x191] != 0) {
    uStack_3c = *(undefined4 *)(in_ECX[0x191] + 0xc);
  }
  FUN_0046ac90(&uStack_3c,4);
  uStack_38 = 0;
  if (DAT_00b3bad0 != 0) {
    uStack_38 = *(undefined4 *)(DAT_00b3bad0 + 0xc);
  }
  FUN_0046ac90(&uStack_38,4);
  uStack_34 = 0;
  if ((in_ECX[0x189] != 0) &&
     (iVar6 = FUN_009832e6(in_ECX[0x189],0,&PTR_PTR_00b03280,&PTR_PTR_00b03800,0), iVar6 != 0)) {
    uStack_34 = *(undefined4 *)(iVar6 + 0xc);
  }
  FUN_0046ac90(&uStack_34,4);
  uStack_30 = 0;
  if (in_ECX[0x7a] != 0) {
    uStack_30 = FUN_00419a20();
  }
  FUN_0046ac90(&uStack_30,4);
  uStack_2c = 0;
  if (in_ECX[0x7b] != 0) {
    uStack_2c = FUN_006a2250();
  }
  FUN_0046ac90(&uStack_2c,4);
  uStack_28 = 0;
  if (in_ECX[0x78] != 0) {
    uStack_28 = *(undefined4 *)(in_ECX[0x78] + 0xc);
  }
  FUN_0046ac90(&uStack_28,4);
  uStack_24 = 0;
  if (in_ECX[0x1ba] != 0) {
    uStack_24 = *(undefined4 *)(in_ECX[0x1ba] + 0xc);
  }
  FUN_0046ac90(&uStack_24,4);
  uStack_20 = 0;
  if (in_ECX[0x18a] != 0) {
    uStack_20 = *(undefined4 *)(in_ECX[0x18a] + 0xc);
  }
  FUN_0046ac90(&uStack_20,4);
  uStack_1c = 0;
  if (in_ECX[0x194] != 0) {
    uStack_1c = *(undefined4 *)(in_ECX[0x194] + 0xc);
  }
  FUN_0046ac90(&uStack_1c,4);
  puStack_18 = (undefined2 *)0x0;
  if (in_ECX[0x1b8] != 0) {
    puStack_18 = *(undefined2 **)(in_ECX[0x1b8] + 0xc);
  }
  FUN_0046ac90(&puStack_18,4);
  if ((0x27 < *(byte *)(DAT_00b33b00 + 0x7c)) && (*(byte *)(DAT_00b33b00 + 0x7c) < 0x2d)) {
    param_1 = 0;
    if (in_ECX[0x1cb] != 0) {
      param_1 = *(uint *)(in_ECX[0x1cb] + 0xc);
    }
    FUN_0046ac90(&param_1,4);
  }
  if (0x3f < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_1 = 0;
    if (in_ECX[0x15e] != 0) {
      param_1 = *(uint *)(in_ECX[0x15e] + 0xc);
    }
    FUN_0046ac90(&param_1,4);
  }
  if (0x41 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_1 = 0;
    if (DAT_00b3bad4 != 0) {
      param_1 = *(uint *)(DAT_00b3bad4 + 0xc);
    }
    FUN_0046ac90(&param_1,4);
  }
  if (0x56 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_1 = 0;
    if (in_ECX[0x15c] != 0) {
      param_1 = *(uint *)(in_ECX[0x15c] + 0xc);
    }
    FUN_0046ac90(&param_1,4);
  }
  if (0x5f < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_1 = 0;
    if (in_ECX[0x18e] != 0) {
      param_1 = *(uint *)(in_ECX[0x18e] + 0xc);
    }
    FUN_0046ac90(&param_1,4);
  }
  if (0x62 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_1 = 0;
    puVar2 = *(undefined2 **)(DAT_00b33b00 + 0x14);
    FUN_0046ac70(&param_1,2);
    for (piVar4 = (int *)in_ECX[0x16b];
        (piVar4 != (int *)0x0 && ((piVar4[1] != 0 || (*piVar4 != 0)))); piVar4 = (int *)piVar4[1]) {
      uStack_14 = 0;
      if (*piVar4 != 0) {
        uStack_14 = *(undefined4 *)(*piVar4 + 0xc);
      }
      FUN_0046ac90(&uStack_14,4);
      param_1 = param_1 + 1;
    }
    *puVar2 = (undefined2)param_1;
  }
  if (0x6b < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_1 = 0;
    if ((in_ECX[0x1ba] != 0) && (iVar6 = *(int *)(in_ECX[0x1ba] + 0x24), iVar6 != 0)) {
      param_1 = *(uint *)(iVar6 + 0xc);
    }
    FUN_0046ac90(&param_1,4);
  }
  if (0x6e < *(byte *)(DAT_00b33b00 + 0x7c)) {
    puStack_4 = (undefined1 *)(uint)*(ushort *)(in_ECX + 0x1e5);
    FUN_0046ac70(&puStack_4,2);
    uVar7 = 0;
    if (in_ECX[0x1e3] != 0) {
      piVar4 = (int *)in_ECX[0x1e4];
      do {
        if (*piVar4 != 0) {
          local_10 = ((int *)in_ECX[0x1e4])[uVar7];
          goto joined_r0x00661e9d;
        }
        uVar7 = uVar7 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar7 < (uint)in_ECX[0x1e3]);
    }
    local_10 = 0;
joined_r0x00661e9d:
    while (local_10 != 0) {
      uStack_14 = 0;
      param_1 = param_1 & 0xffffff00;
      FUN_0065ddc0(&local_10,&uStack_14,&param_1);
      FUN_0046ac90(&uStack_14,4);
      FUN_0046ac70(&param_1,1);
    }
    local_10 = 0;
  }
  if (0x72 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_1 = 0;
    puVar2 = *(undefined2 **)(DAT_00b33b00 + 0x14);
    FUN_0046ac70(&param_1,2);
    piVar4 = &DAT_00b3bb44;
    do {
      if ((piVar4[1] == 0) && (*piVar4 == 0)) break;
      local_10 = 0;
      if (*piVar4 != 0) {
        local_10 = *(int *)(*piVar4 + 0xc);
      }
      FUN_0046ac90(&local_10,4);
      param_1 = param_1 + 1;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
    *puVar2 = (undefined2)param_1;
  }
  FUN_0068deb0(in_ECX[0x79]);
  FUN_0046ac70(in_ECX + 0x4c,0x54);
  if (0x57 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    piVar4 = (int *)in_ECX[0x16d];
    if (piVar4 == (int *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = 0;
      do {
        if (*piVar4 != 0) {
          param_1 = param_1 + 1;
        }
        piVar4 = (int *)piVar4[1];
      } while (piVar4 != (int *)0x0);
    }
    FUN_0046ac70(&param_1,4);
    if (0 < (int)param_1) {
      for (piVar4 = (int *)in_ECX[0x16d]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
        iVar6 = *piVar4;
        if (piVar4[1] == 0) {
          if (iVar6 == 0) break;
LAB_00661fd1:
          FUN_0046ac70(iVar6,8);
        }
        else if (iVar6 != 0) goto LAB_00661fd1;
      }
    }
  }
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x58) {
    if ((undefined4 *)in_ECX[0x16d] == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)FUN_00401f00(8);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = 0;
        puVar8[1] = 0;
      }
    }
    else {
      puVar8 = *(undefined4 **)in_ECX[0x16d];
    }
    FUN_0046ac70(puVar8,8);
    if (in_ECX[0x16d] == 0) {
      FUN_00401f20(puVar8);
    }
  }
  FUN_0046ac70(in_ECX + 0x16e,3);
  FUN_0046ac70(in_ECX + 0x62,0x54);
  FUN_0046ac70(in_ECX + 0x61,4);
  FUN_0046ac70(in_ECX + 0x77,1);
  param_1 = 0;
  if (in_ECX[0x17d] != 0) {
    param_1 = *(undefined4 *)(in_ECX[0x17d] + 0xc);
  }
  FUN_0046ac90(&param_1,4);
  param_1 = 0;
  puVar2 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0046ac70(&param_1,2);
  for (piVar4 = in_ECX + 0x179; (piVar4 != (int *)0x0 && ((piVar4[1] != 0 || (*piVar4 != 0))));
      piVar4 = (int *)piVar4[1]) {
    puStack_4 = *(undefined1 **)(*piVar4 + 0xc);
    FUN_0046ac90(&puStack_4,4);
    param_1 = param_1 + 1;
  }
  *puVar2 = (undefined2)param_1;
  local_44 = (short *)0x0;
  puStack_18 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0046ac70(&local_44,2);
  piVar4 = in_ECX + 0x17b;
  do {
    if ((piVar4 == (int *)0x0) || ((piVar4[1] == 0 && (*piVar4 == 0)))) {
      *puStack_18 = local_44._0_2_;
      FUN_00416ba0();
      (**(code **)(*in_ECX + 0x170))();
      FUN_00526230(in_ECX);
      pcVar10 = (char *)FUN_004da2a0();
      pcVar11 = pcVar10;
      do {
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      param_1 = CONCAT31(param_1._1_3_,((char)pcVar11 - ((char)pcVar10 + '\x01')) + '\x01');
      FUN_0046ac70(&param_1,1);
      FUN_0046ac70(pcVar10,param_1 & 0xff);
      if (0x2b < *(byte *)(DAT_00b33b00 + 0x7c)) {
        iVar6 = FUN_005e02e0(0);
        iVar6 = *(int *)(iVar6 + 0x104);
        iVar9 = FUN_004473a0(DAT_00b37c88);
        param_1 = 0;
        if (iVar6 != 0) {
          param_1 = *(uint *)(iVar6 + 0xc);
        }
        FUN_0046ac90(&param_1,4);
        if ((iVar6 != 0) && (iVar6 == iVar9)) {
          FUN_0051c3b0();
        }
      }
      if (0x44 < *(byte *)(DAT_00b33b00 + 0x7c)) {
        param_1 = 0;
        if (in_ECX[0x195] != 0) {
          param_1 = *(uint *)(in_ECX[0x195] + 0xc);
        }
        FUN_0046ac90(&param_1,4);
      }
      if (0x7d < *(byte *)(DAT_00b33b00 + 0x7c)) {
        FUN_0046ac70((int)in_ECX + 0x116,1);
        FUN_0046ac70(in_ECX + 0x1c0,4);
      }
      if (DAT_00b05bac != '\0') {
        puVar8 = *(undefined4 **)(DAT_00b33b00 + 0x84);
        iVar6 = *(int *)(DAT_00b33b00 + 0x14);
        if (puVar8 == (undefined4 *)0x0) {
          FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar6 - iStack_40,0x251a,
                       ".\\AI\\PlayerCharacter.cpp");
        }
        else {
          piVar4 = (int *)FUN_0046b250(*puVar8);
          uVar5 = (**(code **)(*piVar4 + 0xd4))
                            (*(undefined4 *)((int)puVar8 + 5),0x251a,".\\AI\\PlayerCharacter.cpp");
          FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                       ,iVar6 - iStack_40,*puVar8,uVar5);
        }
      }
      cVar3 = FUN_0045a170();
      psVar12 = local_c;
      if (cVar3 != '\0') {
        uVar7 = *(uint *)(DAT_00b33b00 + 0x14);
        if ((int)local_c + 0xffffU < uVar7) {
          FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                       ".\\AI\\PlayerCharacter.cpp",0x251a);
        }
        *psVar12 = (short)uVar7 - (short)psVar12;
      }
      return;
    }
    iVar6 = *piVar4;
    uStack_14 = *(undefined4 *)(*(int *)(iVar6 + 0x68) + 0xc);
    param_1 = param_1 & 0xffffff00;
    piVar1 = (int *)(*(int *)(iVar6 + 0x68) + 0x40);
    uVar7 = (uint)local_10 >> 8;
    local_10 = CONCAT31((int3)uVar7,*(undefined1 *)(iVar6 + 0x60));
    while( true ) {
      if ((piVar1 == (int *)0x0) || ((piVar1[1] == 0 && (*piVar1 == 0)))) goto LAB_00662182;
      puStack_4 = (undefined1 *)*piVar1;
      iVar9 = FUN_0052ac30(local_10);
      if (iVar6 == iVar9) break;
      piVar1 = (int *)piVar1[1];
    }
    param_1 = CONCAT31(param_1._1_3_,*puStack_4);
LAB_00662182:
    FUN_0046ac90(&uStack_14,4);
    FUN_0046ac70(&param_1,1);
    FUN_0046ac70(&local_10,1);
    local_44 = (short *)((int)local_44 + 1);
    piVar4 = (int *)piVar4[1];
  } while( true );
}



void FUN_006623a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x1f8);
  iVar2 = puVar1[1];
  while (iVar2 != 0) {
    iVar2 = *(int *)(puVar1[1] + 4);
    FUN_00401f20(puVar1[1]);
    puVar1[1] = iVar2;
  }
  *puVar1 = 0;
  return;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

int FUN_006623d0(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *in_ECX;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uStack_38;
  uint uStack_34;
  int local_14;
  int local_c;
  
  local_c = 0;
  uStack_34 = 0x13;
  uStack_38 = 0x6623f9;
  uStack_38 = (**(code **)(*in_ECX + 0x284))();
  uVar3 = FUN_00548fd0();
  for (piVar5 = (int *)in_ECX[0x7e]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    piVar11 = (int *)*piVar5;
    if (piVar5[1] == 0) {
      if (piVar11 == (int *)0x0) break;
LAB_00662423:
      uStack_38 = 0x66242a;
      iVar4 = (**(code **)(*piVar11 + 0x18))();
      if (iVar4 == 7) {
        local_c = local_c + 1;
      }
    }
    else if (piVar11 != (int *)0x0) goto LAB_00662423;
  }
  uStack_38 = 0x66244a;
  (&uStack_38)[-uVar3] = 0x662456;
  if (((undefined1 *)((int)&uStack_34 + uVar3 * -4) != (undefined1 *)0x0) &&
     ((undefined1 *)((int)&uStack_34 + uVar3 * -8) != (undefined1 *)0x0)) {
    if (0 < (int)uVar3) {
      puVar12 = (undefined4 *)((int)&uStack_34 + uVar3 * -8);
      for (uVar7 = uVar3 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      puVar12 = (undefined4 *)((int)&uStack_34 + uVar3 * -4);
      for (uVar7 = uVar3 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
    }
    pcVar1 = *(code **)(in_ECX[0x1a] + 8);
    puVar9 = &uStack_38 + uVar3 * -2;
    (&uStack_38)[uVar3 * -2] = 0x662498;
    for (piVar5 = (int *)(*pcVar1)(); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
      iVar4 = *piVar5;
      if (piVar5[1] == 0) {
        if (iVar4 == 0) {
          return local_c;
        }
        piVar11 = *(int **)(iVar4 + 8);
      }
      else if (iVar4 == 0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = *(int **)(iVar4 + 8);
      }
      if (piVar11 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar11 + 0x18);
        puVar10 = (undefined4 *)((int)puVar9 + -4);
        puVar9 = (uint *)((int)puVar9 + -4);
        *puVar10 = 0x6624db;
        iVar4 = (*pcVar1)();
        if (iVar4 == 7) {
          for (puVar12 = (undefined4 *)in_ECX[0x7e]; puVar12 != (undefined4 *)0x0;
              puVar12 = (undefined4 *)puVar12[1]) {
            if ((int *)*puVar12 == piVar11) goto LAB_00662568;
          }
          bVar2 = false;
          local_14 = 0;
          puVar8 = (uint *)((int)&uStack_34 + uVar3 * -8);
          if (0 < (int)uVar3) {
            do {
              if (bVar2) break;
              piVar6 = (int *)puVar8[uVar3];
              if (piVar6 == (int *)0x0) {
                local_c = local_c + 1;
                puVar8[uVar3] = (uint)piVar11;
                *puVar8 = 1;
LAB_00662552:
                bVar2 = true;
              }
              else if (piVar6 == piVar11) {
                uVar7 = 0;
                piVar6 = piVar6 + 4;
                if (piVar6 != (int *)0x0) {
                  do {
                    if (*piVar6 != 0) {
                      uVar7 = uVar7 + 1;
                    }
                    piVar6 = (int *)piVar6[1];
                  } while (piVar6 != (int *)0x0);
                  if (*puVar8 < uVar7) {
                    *puVar8 = *puVar8 + 1;
                    goto LAB_00662552;
                  }
                }
              }
              local_14 = local_14 + 1;
              puVar8 = puVar8 + 1;
            } while (local_14 < (int)uVar3);
          }
        }
      }
LAB_00662568:
    }
  }
  return local_c;
}



void FUN_006626e0(void)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  
  iVar1 = FUN_005e32f0();
  for (piVar2 = (int *)(iVar1 + 0x30); (piVar2 != (int *)0x0 && (*piVar2 != 0));
      piVar2 = (int *)piVar2[1]) {
    (**(code **)(*in_ECX + 0x2dc))(*piVar2);
  }
  return;
}



void FUN_00662710(void)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  
  iVar1 = FUN_005e32f0();
  if (iVar1 != 0) {
    iVar1 = FUN_005e32f0();
    for (piVar2 = (int *)(iVar1 + 0x30); (piVar2 != (int *)0x0 && (*piVar2 != 0));
        piVar2 = (int *)piVar2[1]) {
      (**(code **)(*in_ECX + 0x2e0))(*piVar2);
    }
  }
  return;
}



undefined4 FUN_00662750(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 uVar5;
  
  iVar1 = FUN_005e3320();
  if (DAT_00b37d00 != *(int *)(iVar1 + 0xc)) goto LAB_00662a61;
  iVar1 = 0;
  do {
    FUN_00446af0(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x15);
  FUN_009828c0();
  iVar1 = FUN_009828c0();
  FUN_009828c0();
  iVar2 = FUN_009828c0();
  FUN_009828c0();
  iVar3 = FUN_009828c0();
  uVar4 = DAT_00b37c98;
  if ((6 < iVar1) || (uVar4 = DAT_00b37c78, 6 < iVar2)) goto LAB_00662a2d;
  uVar5 = DAT_00b37cc8;
  if (6 < iVar3) goto LAB_00662a2c;
  switch(iVar1) {
  case 3:
    if ((iVar2 == 2) && (uVar5 = DAT_00b37cc0, iVar3 == 2)) {
LAB_00662963:
      uVar4 = uVar5;
      break;
    }
    goto switchD_00662919_default;
  case 4:
    uVar4 = DAT_00b37cb8;
    if (iVar3 == 2) {
      uVar4 = DAT_00b37cb0;
    }
    break;
  case 5:
    uVar5 = DAT_00b37c68;
    uVar4 = DAT_00b37ca8;
    if (iVar2 != 2) goto LAB_00662963;
    break;
  case 6:
    uVar4 = DAT_00b37ca0;
    break;
  default:
    goto switchD_00662919_default;
  }
  uVar4 = FUN_004473a0(uVar4);
  *(undefined4 *)(in_ECX + 0x650) = uVar4;
switchD_00662919_default:
  switch(iVar2) {
  case 3:
    if ((iVar1 == 2) && (uVar5 = DAT_00b37cf8, iVar3 == 2)) {
LAB_006629c7:
      uVar4 = uVar5;
      break;
    }
    goto switchD_0066297d_default;
  case 4:
    uVar4 = DAT_00b37cf0;
    if (iVar3 == 2) {
      uVar4 = DAT_00b37ce8;
    }
    break;
  case 5:
    uVar5 = DAT_00b37ce0;
    uVar4 = DAT_00b37c70;
    if (iVar3 != 2) goto LAB_006629c7;
    break;
  case 6:
    uVar4 = DAT_00b37cd8;
    break;
  default:
    goto switchD_0066297d_default;
  }
  uVar4 = FUN_004473a0(uVar4);
  *(undefined4 *)(in_ECX + 0x650) = uVar4;
switchD_0066297d_default:
  switch(iVar3) {
  case 3:
    if ((iVar1 < 4) && (uVar5 = DAT_00b37c80, iVar2 < 4)) {
LAB_00662a2c:
      uVar4 = uVar5;
      break;
    }
    goto switchD_006629e1_default;
  case 4:
    uVar4 = DAT_00b37c60;
    if (iVar1 == 2) {
      uVar4 = DAT_00b37cd0;
    }
    break;
  case 5:
    uVar5 = DAT_00b37c48;
    uVar4 = DAT_00b37c58;
    if (iVar1 != 1) goto LAB_00662a2c;
    break;
  case 6:
    uVar4 = DAT_00b37c50;
    break;
  default:
    goto switchD_006629e1_default;
  }
LAB_00662a2d:
  uVar4 = FUN_004473a0(uVar4);
  *(undefined4 *)(in_ECX + 0x650) = uVar4;
switchD_006629e1_default:
  if (*(int *)(in_ECX + 0x650) == 0) {
    uVar4 = FUN_004473a0(DAT_00b37c48);
    *(undefined4 *)(in_ECX + 0x650) = uVar4;
  }
LAB_00662a61:
  return *(undefined4 *)(in_ECX + 0x650);
}



uint FUN_00662aa0(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  undefined3 uVar6;
  float *pfVar7;
  float unaff_EBX;
  uint uVar8;
  float10 fVar9;
  
  pfVar3 = (float *)FUN_009832e6(param_1,0,&PTR_PTR_00b03280,&PTR_PTR_00b033c8,0);
  pfVar5 = pfVar3;
  if ((pfVar3 != (float *)0x0) && (pfVar3[0xd] == 4.2039e-45)) {
    FUN_005e02e0(0);
    FUN_00485e00();
    uVar8 = 0;
    do {
      iVar4 = FUN_00486790(*(undefined4 *)((int)&DAT_00b14e60 + uVar8),0);
      pfVar5 = (float *)0x0;
      if (iVar4 != 0) {
        iVar4 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
        if (iVar4 == 0) {
          pfVar5 = (float *)0x0;
        }
        else {
          pfVar5 = *(float **)(iVar4 + 4);
        }
        if (pfVar5 == pfVar3) {
          (**(code **)pfVar5[9])(0);
          FUN_004849c0();
          pfVar7 = (float *)(uint)*(ushort *)(iVar4 + 8);
          fVar1 = (float)(int)pfVar7;
          fVar9 = (float10)(**(code **)pfVar5[9])(unaff_EBX);
          fVar9 = (float10)FUN_00548fb0((float)fVar9);
          fVar2 = (float)fVar9;
          if ((float)fVar9 == 0.0) {
            fVar2 = unaff_EBX;
          }
          *pfVar3 = unaff_EBX / fVar2;
          uVar6 = (undefined3)
                  (CONCAT22((short)((uint)pfVar3 >> 0x10),
                            (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                            (ushort)(fVar1 == 0.0) << 0xe) >> 8);
          if (fVar1 < 0.0 == 0) {
            *pfVar7 = fVar1 / fVar2;
            return CONCAT31(uVar6,1);
          }
          *pfVar7 = unaff_EBX / fVar2;
          return CONCAT31(uVar6,1);
        }
      }
      uVar8 = uVar8 + 4;
    } while (uVar8 < 0x28);
  }
  return (uint)pfVar5 & 0xffffff00;
}



void FUN_00662c10(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((*(char *)(param_1 + 4) == '\x14') || (*(char *)(param_1 + 4) == '\x16')) {
    iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
    if (iVar1 != 0) {
      (**(code **)(*(int *)(in_ECX + 0x5c) + 8))(iVar1 + 0x18,param_1,0);
      FUN_006a23b0(iVar1 + 0x18);
    }
  }
  return;
}



void FUN_00662c70(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  
  if (((*(char *)(param_1 + 4) == '\x14') || (*(char *)(param_1 + 4) == '\x16')) &&
     (*(int *)(in_ECX + 0x1fc) != 0)) {
    iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 4);
    }
    if (iVar3 != 0) {
      cVar2 = FUN_006a1df0(iVar3 + 0x18);
      if (cVar2 != '\0') {
        FUN_006a2110(param_1,0);
      }
      FUN_0065c620(param_1);
      piVar1 = *(int **)(in_ECX + 0x1fc);
      if ((piVar1[1] == 0) && (*piVar1 == 0)) {
        FUN_00401f20(piVar1);
        *(undefined4 *)(in_ECX + 0x1fc) = 0;
      }
    }
  }
  return;
}



void FUN_00662d10(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = *(int **)(in_ECX + 0x1fc);
  if (piVar2 != (int *)0x0) {
    do {
      iVar1 = *piVar2;
      if (piVar2[1] == 0) {
        if (iVar1 == 0) break;
LAB_00662d32:
        iVar1 = FUN_009832e6(iVar1,0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar1 + 4);
        }
        if (iVar1 != 0) {
          (**(code **)(*(int *)(in_ECX + 0x5c) + 8))(iVar1 + 0x18,*piVar2,0);
        }
      }
      else if (iVar1 != 0) goto LAB_00662d32;
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
    FUN_004526e0();
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x1fc));
    *(undefined4 *)(in_ECX + 0x1fc) = 0;
  }
  return;
}



void FUN_00662da0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  
  iVar2 = in_ECX[0x189];
  iVar6 = 0;
  iVar5 = 0;
  if (((iVar2 != 0) || ((iVar2 = FUN_0041b870(), iVar2 != 0 && (iVar2 = iVar2 + 0x18, iVar2 != 0))))
     && (iVar2 = iVar2 + 0xc, iVar2 != 0)) {
    while ((*(int *)(iVar2 + 8) != 0 || (*(int *)(iVar2 + 4) != 0))) {
      if (*(int *)(*(int *)(*(int *)(iVar2 + 4) + 0x1c) + 0x98) == 0x454c4554) {
        iVar3 = FUN_00413320();
        iVar6 = iVar6 + iVar3;
      }
      if ((*(int *)(iVar2 + 8) == 0) || (iVar2 = *(int *)(iVar2 + 8) + -4, iVar2 == 0)) break;
    }
  }
  cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x13c))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
    if (((iVar2 == 0) ||
        (iVar2 = FUN_009832e6(*(undefined4 *)(iVar2 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0),
        iVar2 == 0)) || (iVar2 == -0x60)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 100);
    }
    if ((iVar2 != 0) && (iVar2 = iVar2 + 0x24, iVar2 != 0)) {
      while ((*(int *)(iVar2 + 8) != 0 || (*(int *)(iVar2 + 4) != 0))) {
        if (*(int *)(*(int *)(*(int *)(iVar2 + 4) + 0x1c) + 0x98) == 0x454c4554) {
          iVar3 = FUN_00413320();
          iVar5 = iVar5 + iVar3;
        }
        if ((*(int *)(iVar2 + 8) == 0) || (iVar2 = *(int *)(iVar2 + 8) + -4, iVar2 == 0)) break;
      }
    }
  }
  if (iVar5 < iVar6) {
    iVar5 = iVar6;
  }
  iVar2 = *in_ECX;
  *(bool *)((int)in_ECX + 0x6e6) = 0 < iVar5;
  uVar4 = FUN_009828c0();
  (**(code **)(iVar2 + 0x290))(0x3c,uVar4);
  return;
}



void FUN_00662f60(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  LONG LVar6;
  int *in_ECX;
  undefined4 unaff_retaddr;
  undefined4 uVar7;
  
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  if (*(int *)(iVar3 + 0xe8) != 0) {
    iVar4 = FUN_0052bdb0(0);
    if (iVar4 != 0) {
      (**(code **)(*(int *)(iVar3 + 0xac) + 0x18))(DAT_00b38b68);
      goto LAB_00662fb6;
    }
  }
  (**(code **)(*(int *)(iVar3 + 0xac) + 0x18))(DAT_00b38b70);
LAB_00662fb6:
  uVar5 = FUN_00435830(DAT_00b36bb8,1);
  puVar1 = param_1;
  FUN_0043bda0(uVar5,unaff_retaddr,param_1,0);
  FUN_00401f20(uVar5);
  FUN_0043b420(&param_1,DAT_00b36bb8,unaff_retaddr,puVar1,0,0,1,0);
  puVar2 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(param_1 + 2);
    if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  uVar7 = 1;
  uVar5 = FUN_0046d3f0(iVar3,1);
  uVar5 = FUN_00435830(uVar5,uVar7);
  FUN_0043bda0(uVar5,unaff_retaddr,puVar1,0);
  FUN_00401f20(uVar5);
  return;
}



void FUN_00663070(char param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_00589b70(0x3ed);
  iVar4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b14048,0);
    iVar4 = FUN_009832e6(uVar3);
  }
  iVar2 = FUN_00589b70(0x3ec);
  iVar5 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b0a064,0);
    iVar5 = FUN_009832e6(uVar3);
  }
  *(char *)(in_ECX + 0x5c0) = param_1;
  if (param_1 != '\0') {
    if (((iVar4 != 0) && (*(int *)(iVar4 + 0x24) != 4)) && (*(int *)(iVar4 + 0x24) != 2)) {
      FUN_00584740();
    }
    if (((iVar5 != 0) && (*(int *)(iVar5 + 0x24) != 4)) && (*(int *)(iVar5 + 0x24) != 2)) {
      FUN_00584740();
    }
    FUN_00578cf0(0);
    FUN_005732d0(0,0x3f800000);
    iVar2 = FUN_0065a2c0();
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
    return;
  }
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x24) == 4)) {
    iVar2 = FUN_00585c10(1);
    if (*(char *)(iVar2 + 0x31) < '\x01') {
      FUN_00584390();
    }
  }
  iVar2 = FUN_00585c10(1);
  if (*(char *)(iVar2 + 0x31) < '\x01') {
    cVar1 = FUN_00578f60();
    if (cVar1 == '\0') {
      FUN_00578cf0(1);
    }
  }
  FUN_00572ec0(0,0);
  iVar2 = FUN_0065a2c0();
  *(undefined4 *)(iVar2 + 0x3b0) = 1000;
  return;
}



void FUN_00663520(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x764) != 0) {
    cVar2 = FUN_006b7260();
    if (cVar2 != '\0') {
      FUN_006b7240();
    }
  }
  if ((*(int *)(in_ECX + 0x764) != 0) && (param_1 == *(int *)(in_ECX + 0x760))) {
    cVar2 = FUN_006b73a0();
    if (cVar2 != '\0') {
      if (*(int *)(DAT_00b33398 + 0x24) != 0) {
        FUN_006ac3e0(**(undefined4 **)(in_ECX + 0x764),in_ECX);
      }
      FUN_006b7190(0);
      return;
    }
  }
  iVar1 = *(int *)(in_ECX + 0x764);
  if (iVar1 != 0) {
    FUN_006b73e0();
    FUN_00401f20(iVar1);
    *(undefined4 *)(in_ECX + 0x764) = 0;
    *(undefined4 *)(in_ECX + 0x760) = 0;
  }
  *(int *)(in_ECX + 0x760) = param_1;
  uVar3 = FUN_0065ac50(param_1,0,2,1);
  *(undefined4 *)(in_ECX + 0x764) = uVar3;
  return;
}



void FUN_006635e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  
  if (in_ECX[param_1 + 0x1da] != 0) {
    FUN_006b7240();
    puVar1 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
    FUN_006b7360(*puVar1,puVar1[1],puVar1[2]);
    if (*(int *)(DAT_00b33398 + 0x24) != 0) {
      FUN_006ac3e0(*(undefined4 *)in_ECX[param_1 + 0x1da],in_ECX);
    }
    FUN_006b7190(0);
    return;
  }
  iVar2 = FUN_0041b820(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_0065ac50(*(undefined4 *)(iVar2 + 0xc),0,2,1);
    in_ECX[param_1 + 0x1da] = iVar2;
  }
  return;
}



void FUN_006636b0(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)FUN_006758e0(DAT_00b333c4,0xc,0);
  *(undefined1 *)(DAT_00b333c4 + 0x738) = 0;
  piVar4 = piVar3;
  if (piVar3 != (int *)0x0) {
    while (((((int *)*piVar4 == (int *)0x0 ||
             (cVar2 = (**(code **)(*(int *)*piVar4 + 400))(), cVar2 == '\0')) || (*piVar4 == 0)) ||
           (cVar2 = FUN_005e6c60(), cVar2 == '\0'))) {
      piVar1 = piVar4 + 1;
      piVar4 = (int *)*piVar1;
      if ((int *)*piVar1 == (int *)0x0) {
        FUN_004526e0();
        FUN_00401f20(piVar3);
        return;
      }
    }
    *(undefined1 *)(DAT_00b333c4 + 0x738) = 1;
    FUN_004526e0();
    FUN_00401f20(piVar3);
  }
  return;
}



void FUN_00663740(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x780);
  piVar3 = piVar1;
  if ((*(int *)(in_ECX + 0x784) != 0) || (*piVar1 != 0)) {
    while ((piVar3 != (int *)0x0 && ((piVar3[1] != 0 || (*piVar3 != 0))))) {
      piVar2 = (int *)*piVar3;
      if ((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 0x154))(), iVar4 == 0)) {
        piVar1 = piVar3;
        piVar3 = (int *)piVar3[1];
      }
      else {
        uVar5 = (**(code **)(*piVar2 + 0x154))(1,1,0);
        FUN_0088cf90(uVar5);
        FUN_0065c620(piVar2);
        piVar2[2] = piVar2[2] & 0xffbfffff;
        piVar3 = (int *)piVar1[1];
      }
    }
  }
  return;
}



void FUN_006637c0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  byte bVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00612220();
  bVar4 = *(byte *)(iVar1 + 0x18) & 1;
  if (bVar4 == 0) {
    iVar1 = *(int *)(in_ECX + 0x104);
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x5c8);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_00477ec0(8);
    if (iVar1 != 0) {
      uVar5 = 0;
      uVar2 = FUN_00477ec0(8);
      FUN_007b4280(0,uVar2,uVar5);
      FUN_007c7f90(uVar2,uVar5);
    }
  }
  if (bVar4 == 0) {
    iVar1 = *(int *)(in_ECX + 0x5c8);
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x104);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_00477ec0(8);
    if (iVar1 != 0) {
      uVar5 = 1;
      uVar2 = FUN_00477ec0(8);
      FUN_007b4280(0,uVar2,uVar5);
      FUN_007c7f90(uVar2,uVar5);
    }
  }
  puVar3 = (undefined4 *)(in_ECX + 0x798);
  if (bVar4 == 0) {
    puVar3 = (undefined4 *)(in_ECX + 0x79c);
  }
  FUN_004dd130(*puVar3);
  return;
}



void FUN_00663870(undefined4 param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_0075fa90(param_1);
    return;
  }
  FUN_0075fa90(param_1);
  return;
}



void FUN_006638a0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = (int *)FUN_0041e650();
  if (piVar1 == (int *)0x0) {
    return;
  }
  if ((*piVar1 == *(int *)(in_ECX + 0x798)) &&
     ((*(byte *)(*(int *)(in_ECX + 0x5d0) + 0x18) & 1) != 0)) {
    FUN_0055e2a0(in_ECX + 0x79c);
    FUN_005e3fc0();
    return;
  }
  if (*piVar1 == *(int *)(in_ECX + 0x79c)) {
    iVar2 = FUN_00612220();
    if ((*(byte *)(iVar2 + 0x18) & 1) != 0) {
      FUN_0055e2a0(in_ECX + 0x798);
    }
  }
  FUN_005e3fc0();
  return;
}



void FUN_00663920(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if (((0 < DAT_00b3b7d0) && (piVar1 = *(int **)(in_ECX + 0x58), piVar1 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*piVar1 + 0xf4))(1), iVar2 != 0)) {
    iVar2 = (**(code **)(*piVar1 + 0xf4))(1);
    if (*(int *)(iVar2 + 8) != 0) {
      FUN_00607f90(*(int *)(iVar2 + 8),0x7fffffff);
    }
  }
  return;
}



void FUN_00663980(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x5b4) != 0) {
    do {
      piVar1 = *(int **)(in_ECX + 0x5b4);
      if ((piVar1[1] == 0) && (*piVar1 == 0)) break;
      FUN_00401f20(*piVar1);
      puVar2 = *(undefined4 **)(in_ECX + 0x5b4);
      puVar3 = (undefined4 *)puVar2[1];
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = 0;
      }
      else {
        puVar2[1] = puVar3[1];
        *puVar2 = *puVar3;
        FUN_00401f20(puVar3);
      }
    } while (*(int *)(in_ECX + 0x5b4) != 0);
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x5b4));
    *(undefined4 *)(in_ECX + 0x5b4) = 0;
  }
  return;
}



int FUN_00663a00(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  iVar1 = FUN_00420ef0();
  if ((iVar1 != 0) && (piVar3 = *(int **)(iVar1 + 0xc), piVar3 != (int *)0x0)) {
    do {
      if (*piVar3 == 0) {
        return iVar2;
      }
      if (((*(int *)(*piVar3 + 0x58) != 0) && (iVar1 = FUN_005e0380(), iVar1 != 0)) &&
         (iVar1 = FUN_005e0380(), *(char *)(iVar1 + 0x20) == '\x01')) {
        iVar2 = iVar2 + 1;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    return iVar2;
  }
  return 0;
}



uint FUN_00663a60(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00420ef0();
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    for (piVar2 = *(int **)(iVar1 + 0xc); (piVar2 != (int *)0x0 && (*piVar2 != 0));
        piVar2 = (int *)piVar2[1]) {
      if (*piVar2 == param_1) {
        return CONCAT31((int3)((uint)piVar2 >> 8),1);
      }
    }
  }
  return (uint)piVar2 & 0xffffff00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00663aa0(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *local_18;
  int local_14;
  
  iVar4 = FUN_005e02e0(0);
  if (((iVar4 != 0) && ((int *)(iVar4 + 0x58) != (int *)0x0)) &&
     (local_18 = (int *)0x0, param_1 != (int *)0x0)) {
    do {
      iVar9 = 0;
      piVar10 = (int *)param_1[1];
      if ((piVar10 == (int *)0x0) && (*param_1 == 0)) break;
      iVar1 = *param_1;
      local_14 = 0;
      piVar8 = (int *)(iVar4 + 0x58);
      do {
        piVar2 = (int *)piVar8[1];
        if ((piVar2 == (int *)0x0) && (*piVar8 == 0)) break;
        iVar7 = *piVar8;
        if (iVar7 != 0) {
          cVar3 = FUN_00414f00(*(undefined4 *)(iVar1 + 0x98),0x48);
          if (cVar3 != '\0') {
            iVar9 = iVar9 + 1;
            iVar5 = (**(code **)(*(int *)(iVar7 + 0x18) + 0x18))();
            if ((iVar5 != 2) && (iVar5 = (**(code **)(*(int *)(iVar7 + 0x18) + 0x18))(), iVar5 != 3)
               ) {
              uVar6 = FUN_00415360();
              iVar5 = FUN_005f23b0(uVar6);
              iVar7 = (**(code **)(*(int *)(iVar7 + 0x24) + 8))();
              if (iVar5 < iVar7) {
                local_14 = local_14 + 1;
              }
            }
          }
        }
        piVar8 = piVar2;
      } while (piVar2 != (int *)0x0);
      if (local_14 == iVar9) {
        if (local_18 == (int *)0x0) {
          local_18 = (int *)FUN_00401f00(8);
          if (local_18 == (int *)0x0) {
            local_18 = (int *)0x0;
          }
          else {
            *local_18 = 0;
            local_18[1] = 0;
          }
        }
        if (iVar1 != 0) {
          if (*local_18 == 0) {
            *local_18 = iVar1;
          }
          else {
            piVar8 = (int *)FUN_00401f00(8);
            if (piVar8 == (int *)0x0) {
              _DAT_00000004 = local_18[1];
              local_18[1] = 0;
              *local_18 = iVar1;
            }
            else {
              *piVar8 = *local_18;
              piVar8[1] = 0;
              piVar8[1] = local_18[1];
              local_18[1] = (int)piVar8;
              *local_18 = iVar1;
            }
          }
        }
      }
      param_1 = piVar10;
    } while (piVar10 != (int *)0x0);
    piVar10 = local_18;
    if (local_18 != (int *)0x0) {
      do {
        if ((piVar10[1] == 0) && (*piVar10 == 0)) break;
        FUN_0065c620(*piVar10);
        piVar8 = piVar10 + 1;
        piVar10 = (int *)*piVar8;
      } while ((int *)*piVar8 != (int *)0x0);
      FUN_004526e0();
      FUN_00401f20(local_18);
    }
  }
  return;
}



void FUN_00663c50(float param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  bool bVar7;
  float10 fVar8;
  undefined4 uVar9;
  
  if ((int)param_1 - 0xcU < 0x15) {
    cVar1 = FUN_00565c50(2,param_1);
    iVar3 = FUN_00446af0((int)cVar1);
    if (iVar3 != 0) {
      uVar4 = FUN_005f1910(*(undefined4 *)(iVar3 + 0x2c));
      bVar7 = false;
      uVar2 = 0;
      iVar5 = FUN_005e3320();
      if (*(int *)(iVar5 + 0xc) != DAT_00b37d00) {
        iVar5 = *(int *)(iVar3 + 0x34);
        FUN_005e3320();
        iVar6 = FUN_006ecc80();
        uVar9 = *(undefined4 *)(iVar3 + 0x2c);
        bVar7 = iVar6 == iVar5;
        FUN_005e3320(uVar9);
        uVar2 = FUN_0051c090(uVar9);
      }
      fVar8 = (float10)FUN_00548030(uVar4,bVar7,uVar2);
      param_1 = (float)fVar8;
      if (param_1 == 0.0) {
        param_1 = 1.0;
      }
      *(float *)(in_ECX + 0x7a4 + cVar1 * 4) = param_1;
    }
  }
  return;
}



void FUN_00663d30(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c3d88;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = *(int *)(in_ECX + 0x638);
  *(undefined4 *)(in_ECX + 0x63c) = 0;
  if (((iVar1 != 0) && (iVar6 = FUN_006ecc80(uVar5), iVar1 != iVar6)) &&
     (iVar6 = FUN_004d6670(), iVar1 != iVar6)) {
    uVar2 = FUN_0067f0a0();
    FUN_0067f0b0(1);
    uVar3 = FUN_0067f0e0();
    FUN_0067f0f0(1);
    uVar4 = FUN_0067f0c0();
    FUN_0067f0d0(0);
    iVar1 = *(int *)(in_ECX + 0x638);
    iVar8 = 0;
    iVar6 = iVar1;
    if ((*(char *)(iVar1 + 4) != '0') && (iVar6 = 0, *(char *)(iVar1 + 4) == '5')) {
      iVar8 = iVar1;
    }
    FUN_0068a9f0();
    local_2c = *(undefined4 *)(in_ECX + 0x62c);
    local_28 = *(undefined4 *)(in_ECX + 0x630);
    local_24 = *(undefined4 *)(in_ECX + 0x634);
    local_4 = 0;
    FUN_0068b030(DAT_00b333c4,&local_2c,iVar6,iVar8);
    uVar7 = FUN_0068a1b0();
    *(undefined4 *)(in_ECX + 0x63c) = uVar7;
    FUN_0067f0f0(uVar3);
    FUN_0067f0b0(uVar2);
    FUN_0067f0d0(uVar4);
    local_4 = 0xffffffff;
    FUN_0068aa10();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00663e80(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x7f9) == '\0') {
    *(undefined1 *)(in_ECX + 0x7f9) = 1;
    FUN_0057acc0(DAT_00b389d8,0,1,0xbf800000);
  }
  return;
}



undefined1 FUN_00663eb0(int param_1)

{
  undefined1 uVar1;
  undefined1 local_1;
  
  local_1 = 0xff;
  uVar1 = 0xff;
  if (param_1 != 0) {
    FUN_004d6760(*(undefined4 *)(param_1 + 0xc),&local_1);
    uVar1 = local_1;
  }
  return uVar1;
}



void FUN_00663ee0(int param_1)

{
  if (param_1 != 0) {
    FUN_00452570();
    return;
  }
  return;
}



void FUN_00663f00(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = FUN_00420ef0();
  if (iVar4 != 0) {
    piVar2 = *(int **)(iVar4 + 0xc);
    while ((piVar3 = piVar2, piVar3 != (int *)0x0 && (iVar1 = *piVar3, iVar1 != 0))) {
      piVar2 = (int *)piVar3[1];
      if ((*(int **)(iVar1 + 0x58) != (int *)0x0) &&
         ((**(code **)(**(int **)(iVar1 + 0x58) + 0x18))(iVar1,1), piVar2 != (int *)piVar3[1])) {
        piVar2 = *(int **)(iVar4 + 0xc);
      }
    }
  }
  return;
}



void FUN_00663f50(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((DAT_00b3bb48 != 0) || (DAT_00b3bb44 != 0)) {
    puVar2 = &DAT_00b3bb44;
    do {
      iVar1 = (**(code **)(*(int *)*puVar2 + 0x154))();
      if (iVar1 != 0) {
        *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) | 1;
        FUN_0088cf20(iVar1,0,1,0);
      }
      puVar2 = (undefined4 *)puVar2[1];
    } while (puVar2 != (undefined4 *)0x0);
  }
  return;
}



void FUN_00663fa0(int param_1)

{
  if (param_1 != 0) {
    FUN_0065c620();
    return;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00663ff0(float *param_1)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  undefined4 uStack_24;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *(float *)(in_ECX + 0x60) = *param_1 * 0.14287673;
  *(float *)(in_ECX + 100) = fVar1 * 0.14287673;
  *(float *)(in_ECX + 0x68) = fVar2 * 0.14287673;
  *(undefined4 *)(in_ECX + 0x6c) = uStack_24;
  return;
}



void FUN_00664040(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c3db8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a73744;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a735a8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006640b0(byte param_1)

{
  FUN_00664040();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_006640d0(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  char *_Format;
  char local_1f8 [500];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_1f8;
  cVar3 = FUN_006605a0(0);
  if (cVar3 != '\0') {
    _sprintf(local_1f8,DAT_00b38b38);
    FUN_0057acc0(local_1f8,0,1,0xbf800000);
    return 0;
  }
  piVar4 = (int *)FUN_006758e0(DAT_00b333c4,0xf,0);
  if ((piVar4 != (int *)0x0) && ((piVar4[1] != 0 || (*piVar4 != 0)))) {
    _sprintf(local_1f8,DAT_00b38b60);
    FUN_0057acc0(local_1f8,0,1,0xbf800000);
    FUN_004526e0();
    FUN_00401f20(piVar4);
    return 0;
  }
  piVar4 = (int *)(**(code **)(*(int *)(in_ECX + 0x68) + 8))();
  if (*(int *)(in_ECX + 0x58) != 0) {
    do {
      if ((piVar4 == (int *)0x0) ||
         ((piVar1 = (int *)piVar4[1], piVar1 == (int *)0x0 && (*piVar4 == 0)))) goto LAB_006641f8;
      piVar2 = (int *)*piVar4;
      piVar4 = piVar1;
    } while ((piVar2 == (int *)0x0) ||
            (cVar3 = (**(code **)(*piVar2 + 0x28))(), _Format = DAT_00b38b58, cVar3 == '\0'));
LAB_0066420f:
    _sprintf(local_1f8,_Format);
    FUN_0057acc0(local_1f8,0,1,0xbf800000);
    return 0;
  }
LAB_006641f8:
  _Format = DAT_00b38b48;
  if (*(char *)(in_ECX + 0x5a9) == '\0') goto LAB_0066420f;
  cVar3 = (**(code **)(*DAT_00b333c4 + 0x25c))();
  if (cVar3 != '\0') {
    return 0;
  }
  cVar3 = (**(code **)(*DAT_00b333c4 + 0x1a0))();
  if (cVar3 != '\0') {
    return 0;
  }
  iVar5 = (**(code **)(*DAT_00b333c4 + 0x284))(10);
  if (iVar5 < 1) {
    return 0;
  }
  iVar5 = (**(code **)(*DAT_00b333c4 + 0x284))(8);
  if (iVar5 < 1) {
    return 0;
  }
  iVar5 = FUN_006ecc80();
  if (iVar5 == 0) {
    iVar5 = FUN_004d6670();
    if (iVar5 == 0) goto LAB_006642d6;
    cVar3 = FUN_004ef140();
  }
  else {
    FUN_006ecc80();
    cVar3 = FUN_004ca6c0();
  }
  if (cVar3 == '\0') {
    return 1;
  }
LAB_006642d6:
  _sprintf(local_1f8,DAT_00b38b40);
  FUN_0057acc0(local_1f8,0,1,0xbf800000);
  return 0;
}



void FUN_00664320(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  iVar1 = in_ECX;
  if (*(int *)(in_ECX + 0xd4) != 0) {
    iVar1 = *(int *)(in_ECX + 0xd4);
  }
  *(undefined4 *)(in_ECX + 0x720) = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x724) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(in_ECX + 0x728) = *(undefined4 *)(iVar1 + 0x34);
  iVar1 = FUN_006ecc80();
  if (iVar1 != 0) {
    FUN_006ecc80();
    iVar1 = FUN_004c9cf0();
    if (iVar1 != 0) {
      FUN_006ecc80();
      uVar2 = FUN_004c9cf0();
      *(undefined4 *)(in_ECX + 0x72c) = uVar2;
      return;
    }
  }
  uVar2 = FUN_006ecc80();
  *(undefined4 *)(in_ECX + 0x72c) = uVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006643a0(void)

{
  int iVar1;
  float *pfVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float local_8c;
  float local_88;
  float local_84;
  int local_80;
  int local_7c;
  undefined1 local_78 [12];
  undefined4 local_6c [9];
  undefined1 local_48 [72];
  
  local_7c = FUN_00403190(1);
  local_80 = FUN_00403190(2);
  if (DAT_00b14f38 != '\0') {
    local_80 = -local_80;
  }
  *(float *)(in_ECX + 0x74c) = (float)local_7c * _DAT_00b14ee8 + *(float *)(in_ECX + 0x74c);
  *(float *)(in_ECX + 0x750) = (float)local_80 * _DAT_00b14ee8 + *(float *)(in_ECX + 0x750);
  FUN_0070fdd0(*(undefined4 *)(in_ECX + 0x74c));
  FUN_0070fd30(*(undefined4 *)(in_ECX + 0x750));
  FUN_007100a0(local_6c,local_48);
  local_88 = DAT_00b3f9ac;
  local_8c = DAT_00b3f9a8;
  local_84 = (float)DAT_00b3f9b0;
  iVar1 = FUN_00403520(0,0);
  if (iVar1 != 0) {
    local_88 = local_88 + 10.0;
  }
  iVar1 = FUN_00403520(1,0);
  if (iVar1 != 0) {
    local_88 = local_88 - 10.0;
  }
  iVar1 = FUN_00403520(3,0);
  if (iVar1 != 0) {
    local_8c = local_8c + 10.0;
  }
  iVar1 = FUN_00403520(2,0);
  if (iVar1 != 0) {
    local_8c = local_8c - 10.0;
  }
  pfVar2 = (float *)FUN_007101f0(local_78,&local_8c);
  local_8c = *pfVar2;
  local_88 = pfVar2[1];
  local_84 = pfVar2[2];
  *(float *)(in_ECX + 0x754) = *(float *)(in_ECX + 0x754) + local_8c;
  *(float *)(in_ECX + 0x758) = *(float *)(in_ECX + 0x758) + local_88;
  *(float *)(in_ECX + 0x75c) = *(float *)(in_ECX + 0x75c) + local_84;
  iVar1 = DAT_00b333cc;
  if (*(short *)(DAT_00b333cc + 0xb6) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(DAT_00b333cc + 0xb0);
  }
  *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(in_ECX + 0x754);
  *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(in_ECX + 0x758);
  *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(in_ECX + 0x75c);
  if (*(short *)(iVar1 + 0xb6) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(iVar1 + 0xb0);
  }
  puVar5 = local_6c;
  puVar6 = (undefined4 *)(iVar3 + 0x30);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (*(short *)(iVar1 + 0xb6) == 0) {
    FUN_00707370(0,0);
    return;
  }
  FUN_00707370(0,0);
  return;
}



void FUN_006645c0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  iVar1 = FUN_005e02e0(0);
  if ((iVar1 != 0) && (piVar8 = (int *)(iVar1 + 0x58), piVar8 != (int *)0x0)) {
    FUN_004167e0();
    piVar4 = piVar8;
    piVar6 = (int *)0x0;
    do {
      piVar5 = (int *)piVar4[1];
      if ((piVar5 == (int *)0x0) && (*piVar4 == 0)) break;
      piVar7 = piVar4;
      if ((*(byte *)(*piVar4 + 0x40) & 4) != 0) {
        piVar7 = piVar6;
        if (piVar6 == (int *)0x0) {
          if (piVar5 == (int *)0x0) {
            *piVar4 = 0;
            piVar5 = piVar4;
          }
          else {
            piVar4[1] = piVar5[1];
            *piVar4 = *piVar5;
            FUN_00401f20(piVar5);
            piVar5 = piVar4;
          }
        }
        else {
          FUN_0065c620(*piVar4);
          piVar5 = (int *)piVar6[1];
        }
      }
      piVar4 = piVar5;
      piVar6 = piVar7;
    } while (piVar5 != (int *)0x0);
    do {
      if ((piVar8[1] == 0) && (*piVar8 == 0)) break;
      FUN_0065f6a0(*piVar8);
      piVar8 = (int *)piVar8[1];
    } while (piVar8 != (int *)0x0);
    for (piVar8 = (int *)(DAT_00b33a98 + 0x2c);
        (piVar8 != (int *)0x0 && ((piVar8[1] != 0 || (*piVar8 != 0)))); piVar8 = (int *)piVar8[1]) {
      iVar1 = *piVar8;
      if (((*(byte *)(iVar1 + 0x40) & 4) != 0) &&
         (iVar2 = (**(code **)(*(int *)(iVar1 + 0x18) + 0x18))(), iVar2 == 0)) {
        uVar3 = FUN_00415360();
        iVar2 = (**(code **)(*in_ECX + 0x284))(uVar3);
        if (DAT_00b37a70 <= iVar2) {
          (**(code **)(*in_ECX + 0x2dc))(iVar1);
        }
      }
    }
  }
  return;
}



char FUN_006646d0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_005e0990(param_1);
  if (cVar1 != '\0') {
    FUN_0065f6a0(param_1);
  }
  return cVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00664700(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  if (*(int *)(in_ECX + 0x624) != param_1) {
    if (*(int *)(in_ECX + 0x624) != 0) {
      FUN_00419f10(1);
    }
    *(int *)(in_ECX + 0x624) = param_1;
    if (param_1 == 0) {
      iVar1 = FUN_0041b870();
      if (iVar1 == 0) {
        _sprintf(local_108,"%s\\icon_hud_default_magic.dds","Icons");
      }
      else {
        uVar4 = 0;
        uVar3 = 3;
        FUN_0041b870(3,0);
        iVar1 = FUN_004152c0(uVar3,uVar4);
        puVar2 = *(undefined1 **)(*(int *)(iVar1 + 0x1c) + 0x48);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = &DAT_00a2f7ec;
        }
        _sprintf(local_108,"%s\\%s","Icons",puVar2);
      }
    }
    else {
      iVar1 = FUN_004152c0(3,0);
      puVar2 = *(undefined1 **)(*(int *)(iVar1 + 0x1c) + 0x48);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &DAT_00a2f7ec;
      }
      _sprintf(local_108,"%s\\%s","Icons",puVar2);
    }
    FUN_0057b2d0(local_108);
    if (*(int *)(in_ECX + 0x624) != 0) {
      FUN_0041a610(0);
    }
    FUN_00662da0();
    iVar1 = *(int *)(in_ECX + 0x764);
    if (iVar1 != 0) {
      FUN_006b73e0();
      FUN_00401f20(iVar1);
      *(undefined4 *)(in_ECX + 0x764) = 0;
      *(undefined4 *)(in_ECX + 0x760) = 0;
    }
  }
  return;
}



void FUN_00664850(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 100) == 0)) {
    *(undefined4 *)(in_ECX + 0x628) = 0;
    return;
  }
  iVar1 = *(int *)(in_ECX + 0x628);
  if (iVar1 != 0) {
    if (iVar1 == param_1) {
      return;
    }
    if ((iVar1 != 0) && (param_1 == 0)) {
      FUN_00664700(0);
    }
  }
  *(int *)(in_ECX + 0x628) = param_1;
  if (param_1 == 0) {
    FUN_00664700(0);
    return;
  }
  if (*(int *)(param_1 + 100) == 0) {
    FUN_00664700(0);
    return;
  }
  FUN_00664700(*(int *)(param_1 + 100) + 0x18);
  return;
}



void FUN_006648d0(uint param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x5b4) == 0) {
    puVar4 = (undefined4 *)FUN_00401f00(8);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    *(undefined4 **)(in_ECX + 0x5b4) = puVar4;
  }
  if (((*(int **)(in_ECX + 0x5b4))[1] == 0) && (**(int **)(in_ECX + 0x5b4) == 0)) {
    puVar4 = (undefined4 *)FUN_00401f00(8);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    FUN_00446cb0(puVar4);
  }
  iVar2 = **(int **)(in_ECX + 0x5b4);
  if ((iVar2 != 0) && (param_1 < 8)) {
    cVar3 = FUN_00565c50(0,param_1);
    pcVar1 = (char *)(cVar3 + iVar2);
    *pcVar1 = *pcVar1 + '\x01';
  }
  return;
}



int FUN_00664970(uint param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int in_ECX;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  piVar3 = *(int **)(in_ECX + 0x5b4);
  if (*(int **)(in_ECX + 0x5b4) == (int *)0x0) {
    puVar4 = (undefined4 *)FUN_00401f00(8);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    *(undefined4 **)(in_ECX + 0x5b4) = puVar4;
    puVar4 = (undefined4 *)FUN_00401f00(8);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
      FUN_00446cb0(0);
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
      FUN_00446cb0(puVar4);
    }
  }
  else {
    do {
      piVar1 = (int *)piVar3[1];
      if ((piVar1 == (int *)0x0) && (*piVar3 == 0)) break;
      puVar4 = (undefined4 *)*piVar3;
      piVar3 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  if ((puVar4 != (undefined4 *)0x0) && (param_1 < 8)) {
    cVar2 = FUN_00565c50(0,param_1);
    return (int)*(char *)((int)cVar2 + (int)puVar4);
  }
  return 0;
}



undefined4 FUN_00664a20(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_1 < 8) {
    uVar1 = FUN_00664970(param_1);
    uVar1 = FUN_005480a0(uVar1);
  }
  return uVar1;
}



float10 FUN_00664a40(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x598) = param_1;
  FUN_00411160(param_1,0);
  FUN_007b70e0(param_1);
  return (float10)*(float *)(in_ECX + 0x598);
}



void FUN_00664a80(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  uint unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c3e01;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[0x113] = 0;
  in_ECX[0x111] = 0;
  in_ECX[0x112] = 0;
  FUN_0057a6f0(10,uVar1);
  FUN_0057a6f0(8);
  FUN_0057a6f0(9);
  if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x16])(1);
  }
  iVar2 = FUN_00401f00(0x90);
  uStack_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_006438f0();
  }
  uStack_4 = 0xffffffff;
  in_ECX[0x16] = iVar2;
  iVar2 = FUN_00401f00(0x2ec);
  uStack_4 = 1;
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00628ee0();
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*piVar3 + 4))(in_ECX[0x16]);
  uVar4 = FUN_00659a00();
  FUN_00674550(in_ECX,uVar4);
  if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x16])(1);
  }
  in_ECX[0x16] = (int)piVar3;
  uVar4 = FUN_00659a00();
  FUN_00674550(in_ECX,uVar4);
  (**(code **)(*in_ECX + 0x148))();
  iVar5 = FUN_0065a2c0();
  if (iVar5 == 0) {
    in_ECX[0x7c] = 0;
  }
  else {
    FUN_0057e270(&stack0xffffffec);
    iVar5 = FUN_00401f00(8);
    puStack_8 = (undefined1 *)0x2;
    if (iVar5 == 0) {
      puStack_8 = (undefined1 *)0xffffffff;
      in_ECX[0x7c] = 0;
    }
    else {
      iVar5 = FUN_00532bc0(0x41000000,unaff_ESI >> 0x10);
      puStack_8 = (undefined1 *)0xffffffff;
      in_ECX[0x7c] = iVar5;
    }
  }
  FUN_005f6020(0,0,0);
  FUN_004e3490();
  *unaff_FS_OFFSET = iVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00664c40(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int in_ECX;
  
  FUN_00578cf0(0);
  if (*(int *)(in_ECX + 0x5dc) != 0) {
    cVar1 = FUN_00472ea0();
    if (cVar1 != '\0') {
      sVar2 = FUN_005e5690(0,0,0);
      sVar3 = FUN_00470720(5);
      if ((sVar3 != sVar2) || (cVar1 = FUN_00578fa0(), cVar1 != '\0')) {
        FUN_00477b60(sVar2,1,0xffffffff);
      }
      iVar4 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xf0))(1);
      if (iVar4 != 0) {
        sVar2 = FUN_005e5690(0x21,0,0);
        iVar4 = FUN_0051aa00(sVar2);
        if ((iVar4 == 0x21) &&
           ((sVar3 = FUN_00470720(2), sVar3 != sVar2 || (cVar1 = FUN_00578fa0(), cVar1 != '\0')))) {
          FUN_00477b60(sVar2,1,0xffffffff);
        }
      }
    }
    FUN_00476d10(in_ECX,_DAT_00b33e9c,0xbf800000);
    FUN_00474510(in_ECX);
    if ((*(int *)(in_ECX + 0x5e0) != 0) &&
       ((**(code **)(**(int **)(in_ECX + 0x5e0) + 0x50))(_DAT_00b33e9c),
       *(int *)(*(int *)(in_ECX + 0x5e0) + 0x40) != 0)) {
      FUN_00707370(_DAT_00b33e9c,0);
    }
  }
  return;
}



void FUN_00664d70(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0xc);
joined_r0x00664d87:
    piVar3 = piVar1;
    if (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[0xd];
      for (puVar4 = (undefined4 *)(**(code **)(*piVar3 + 4))(); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)puVar4[1]) {
        if (puVar4 == &DAT_00b3ca58) goto joined_r0x00664d87;
      }
      FUN_006ffe90(piVar3);
      goto joined_r0x00664d87;
    }
    puVar4 = *(undefined4 **)(param_1 + 0xa8);
    if (puVar4 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar4 + 1);
      if ((LVar5 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
    if ((*(int *)(param_1 + 0xa8) != 0) && (iVar6 = FUN_00452a60(), iVar6 != param_1)) {
      (**(code **)(**(int **)(param_1 + 0xa8) + 0x4c))(param_1);
    }
    uVar7 = 0;
    if (*(short *)(param_1 + 0xb6) != 0) {
      if (*(short *)(param_1 + 0xb6) == 0) goto LAB_00664e47;
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0xb0) + uVar7 * 4);
        if (piVar1 != (int *)0x0) {
          pcVar2 = *(code **)(*piVar1 + 8);
          *(ushort *)(piVar1 + 6) = *(ushort *)(piVar1 + 6) & 0xfffe;
          iVar6 = (*pcVar2)();
          if (iVar6 != 0) {
            FUN_00664d70(iVar6);
          }
        }
LAB_00664e47:
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(param_1 + 0xb6));
    }
  }
  return;
}



void FUN_00664e60(void)

{
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  
  iVar5 = FUN_00582160(0,1);
  if ((((in_ECX[0x176] != 0) && (in_ECX[0x16] != 0)) && (iVar5 != 0)) &&
     ((*(int *)(iVar5 + 0x60) != 0 && ((*(byte *)(*(int *)(iVar5 + 0x60) + 0x18) & 1) == 0)))) {
    sVar3 = FUN_00470720(0);
    uVar6 = FUN_00470750(0);
    iVar5 = FUN_004706e0(0);
    fVar1 = *(float *)(in_ECX[0x177] + 0x94);
    fVar2 = *(float *)(iVar5 + 0x48);
    FUN_0057ecb0();
    FUN_0057d5b0();
    sVar4 = FUN_00470720(0);
    if (sVar3 == sVar4) {
      FUN_00474ab0(0,sVar3,uVar6,fVar1 + fVar2,0xffffffff);
    }
    FUN_0065d750((char)in_ECX[0x162] == '\0');
    FUN_00474510(in_ECX);
    uVar6 = (**(code **)(*in_ECX + 0x154))();
    if ((char)in_ECX[0x162] == '\0') {
      uVar6 = FUN_00405790(0);
    }
    FUN_005ea1a0(uVar6);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00664f70(char param_1)

{
  ushort *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *in_ECX;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  int iStack_58;
  undefined1 auStack_54 [36];
  undefined1 auStack_30 [36];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c3e28;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff98;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((in_ECX[0x174] != 0) && (iVar4 = FUN_00612220(uVar3), iVar4 != 0)) {
    if (param_1 == '\0') {
      iVar4 = FUN_00612220(uVar3);
      if ((*(byte *)(iVar4 + 0x18) & 1) == 0) goto LAB_006651ff;
    }
    else if ((((*(byte *)(in_ECX[0x174] + 0x18) & 1) == 0) ||
             (cVar2 = (**(code **)(*in_ECX + 0x198))(0), cVar2 != '\0')) ||
            (*(char *)((int)in_ECX + 0x589) != '\0')) goto LAB_006651ff;
    iVar4 = FUN_00612220(uVar3);
    if (param_1 == '\0') {
      *(ushort *)(iVar4 + 0x18) = *(ushort *)(iVar4 + 0x18) & 0xfffe;
    }
    else {
      *(ushort *)(iVar4 + 0x18) = *(ushort *)(iVar4 + 0x18) | 1;
    }
    if (param_1 == '\0') {
      puVar1 = (ushort *)(in_ECX[0x174] + 0x18);
      *puVar1 = *puVar1 | 1;
    }
    else {
      puVar1 = (ushort *)(in_ECX[0x174] + 0x18);
      *puVar1 = *puVar1 & 0xfffe;
      iVar4 = FUN_00612220(uVar3);
      puVar5 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
      *(undefined4 *)(iVar4 + 0x54) = *puVar5;
      *(undefined4 *)(iVar4 + 0x58) = puVar5[1];
      *(undefined4 *)(iVar4 + 0x5c) = puVar5[2];
      fVar10 = (float10)(**(code **)(*in_ECX + 0x1e0))();
      FUN_0070fdd0((float)fVar10);
      puVar5 = (undefined4 *)FUN_004d7c50(auStack_30,auStack_54,0);
      puVar9 = (undefined4 *)(iVar4 + 0x30);
      for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      _DAT_00b14e50 = 0x3f800000;
      FUN_005ee1b0();
      iVar4 = FUN_004d8370();
      if (iVar4 == 0) {
        FUN_00707370(0,0);
      }
      else {
        FUN_00474510(in_ECX);
      }
    }
    cVar2 = FUN_005e5480();
    if (cVar2 != '\0') {
      if (param_1 == '\0') {
        iVar4 = in_ECX[0x173];
        iVar6 = FUN_004d8370();
      }
      else {
        iVar4 = FUN_004d8370();
        iVar6 = in_ECX[0x173];
      }
      piVar7 = (int *)(**(code **)(**(int **)(*(int *)(iVar4 + 0x98) + 0x7c) + 0x4c))("magicNode");
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)(**(code **)(*piVar7 + 8))();
      }
      piVar8 = (int *)(**(code **)(**(int **)(*(int *)(iVar6 + 0x98) + 0x7c) + 0x4c))("magicNode");
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)(**(code **)(*piVar8 + 8))();
      }
      if (((piVar7 != (int *)0x0) && (piVar8 != (int *)0x0)) &&
         (uVar3 = 0, *(short *)((int)piVar7 + 0xb6) != 0)) {
        do {
          (**(code **)(*piVar7 + 0x8c))(&iStack_58,uVar3);
          uStack_4 = 0;
          if (iStack_58 != 0) {
            (**(code **)(*piVar8 + 0x84))(iStack_58,1);
          }
          uStack_4 = 0xffffffff;
          FUN_007016a0();
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)((int)piVar7 + 0xb6));
      }
    }
    iVar4 = (**(code **)(*in_ECX + 0x154))();
    if (param_1 != '\0') {
      if (*(short *)(iVar4 + 0xb6) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = **(int **)(iVar4 + 0xb0);
      }
    }
    FUN_006637c0();
    FUN_005ea1a0(iVar4);
    (**(code **)(*(int *)in_ECX[0x16] + 0x42c))();
  }
LAB_006651ff:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00665260(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  if (param_1 == DAT_00b333c4) {
    if (*(int *)(in_ECX + 0x638) != 0) {
      FUN_00663d30();
    }
    *(undefined1 *)(in_ECX + 0x117) = 1;
  }
  if (*(int *)(in_ECX + 0x5f4) != 0) {
    if ((*(char *)(in_ECX + 0x117) != '\0') || (cVar1 = FUN_005299b0(in_ECX + 0x5f8), cVar1 == '\0')
       ) {
      FUN_00529a20(in_ECX + 0x5f8);
      *(undefined1 *)(in_ECX + 0x117) = 0;
    }
    piVar4 = (int *)(in_ECX + 0x5f8);
    while (((piVar4 != (int *)0x0 && (*piVar4 != 0)) && (*(char *)(in_ECX + 0x117) == '\0'))) {
      piVar4 = (int *)piVar4[1];
      iVar2 = FUN_0052b440(1);
      if (iVar2 == param_1) {
        *(undefined1 *)(in_ECX + 0x117) = 1;
      }
      if (((iVar2 != 0) && (iVar3 = FUN_004d6d40(), iVar3 != 0)) &&
         ((iVar3 = FUN_004d6d40(), iVar3 != 0 &&
          ((iVar3 = FUN_00485e00(iVar2,iVar3), iVar3 != 0 &&
           (cVar1 = FUN_00487820(*(undefined4 *)(iVar2 + 0xc)), cVar1 != '\0')))))) {
        *(undefined1 *)(in_ECX + 0x117) = 1;
      }
    }
  }
  return;
}



undefined4 FUN_006665e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (iVar1 == 7) {
    uVar2 = (**(code **)(*in_ECX + 0x284))(0x13);
    iVar1 = FUN_00548fd0(uVar2);
    iVar3 = FUN_006623d0();
    if (iVar1 <= iVar3) {
      FUN_00579c10(DAT_00b388f0,0,1,DAT_00b38cf0,0);
      return 0;
    }
    FUN_00446cb0(param_1);
  }
  FUN_005e45f0(param_1,1);
  FUN_006a23b0(param_1);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00666670(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int in_ECX;
  
  fVar5 = _DAT_00b370b0;
  fVar4 = _DAT_00b370a8;
  fVar3 = _DAT_00b370a0;
  fVar2 = _DAT_00b0313c;
  if (DAT_00b14f48 == '\0') {
    return;
  }
  if ((*(char *)(in_ECX + 0x588) != '\0') || (DAT_00b3bb04 != '\0')) {
    if (_DAT_00b0313c == *(float *)(DAT_00b333cc + 0xec)) {
      return;
    }
    goto LAB_00666804;
  }
  iVar6 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2d0))();
  if (iVar6 == 5) {
    iVar6 = FUN_00403520(6,0);
    if (iVar6 == 0) goto LAB_006667a1;
    if (DAT_00b3baea == '\0') {
      return;
    }
    iVar6 = FUN_005f23b0(0x1c);
    if (iVar6 < 2) {
      return;
    }
    if (fVar5 < _DAT_00b3bafc == (fVar5 == _DAT_00b3bafc)) {
      return;
    }
    fVar1 = *(float *)(in_ECX + 0x598);
    pfVar7 = (float *)FUN_00403c00();
    if (fVar1 <= *pfVar7) {
      return;
    }
    param_1 = ((_DAT_00b3bafc - fVar5) / fVar4) * (fVar3 - fVar2) + fVar2;
    fVar2 = fVar3;
    if (param_1 < fVar3) goto LAB_00666804;
  }
  else {
    iVar6 = FUN_00403520(6,0);
    if ((iVar6 != 0) && (DAT_00b3baea != '\0')) {
      return;
    }
LAB_006667a1:
    if (fVar2 <= *(float *)(in_ECX + 0x598)) {
      return;
    }
    param_1 = (fVar2 - fVar3) * (param_1 / fVar4) + *(float *)(in_ECX + 0x598);
    if (fVar2 < param_1) goto LAB_00666804;
  }
  fVar2 = param_1;
LAB_00666804:
  FUN_00664a40(fVar2);
  return;
}



undefined1 FUN_006669f0(void)

{
  undefined1 uVar1;
  int *piVar2;
  int *in_ECX;
  bool bVar3;
  float10 fVar4;
  
  bVar3 = (char)in_ECX[0x1d2] == '\0';
  *(bool *)(in_ECX + 0x1d2) = bVar3;
  uVar1 = 0;
  if (bVar3) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x174))();
    in_ECX[0x1d5] = *piVar2;
    in_ECX[0x1d6] = piVar2[1];
    in_ECX[0x1d7] = piVar2[2];
    fVar4 = (float10)(**(code **)(*in_ECX + 0xec))();
    uVar1 = (undefined1)in_ECX[0x1d2];
    in_ECX[0x1d7] =
         (int)(float)(fVar4 * (float10)(float)in_ECX[0x175] + (float10)(float)in_ECX[0x1d7]);
    in_ECX[0x1d3] = in_ECX[10];
    in_ECX[0x1d4] = in_ECX[8];
  }
  return uVar1;
}



void FUN_00666b50(void)

{
  int iVar1;
  
  iVar1 = FUN_0065a2c0();
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x364) != 0) {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x364) + 8);
      if ((iVar1 != 0) && (iVar1 != -0x14)) {
        FUN_00531e80(*(uint *)(iVar1 + 0x30) >> 0x10);
        return;
      }
      FUN_00531e80(0);
      return;
    }
    FUN_00531e80(0);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00666bb0(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  float local_e4;
  char *local_e0;
  float local_dc;
  int local_d8;
  int *local_d4;
  int *local_d0;
  char acStack_cc [200];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_f4;
  iVar8 = *param_2;
  local_d4 = param_2;
  local_e8 = *param_3;
  local_d0 = param_3;
  local_f4 = iVar8;
  FUN_0057b8e0("PLAYER CHARACTER",(float)DAT_00b02e24,(float)iVar8,1,0xffffffff);
  iVar8 = iVar8 + param_1;
  local_f4 = iVar8;
  local_ec = iVar8;
  FUN_0057b8e0("Skill Usage",(float)DAT_00b02e24,(float)iVar8,1,0xffffffff);
  local_f4 = iVar8 + param_1;
  iVar8 = 0xc;
  local_f0 = local_f4;
  do {
    cVar3 = FUN_00565c50(2,iVar8);
    local_d8 = (int)cVar3;
    iVar4 = FUN_005e3320();
    if (iVar4 == 0) {
LAB_00666c94:
      local_e0 = "";
    }
    else {
      FUN_005e3320();
      cVar3 = FUN_0051c090();
      local_e0 = "Major, ";
      if (cVar3 == '\0') goto LAB_00666c94;
    }
    piVar1 = DAT_00b333c4;
    local_dc = 1.0;
    if (iVar8 - 0xcU < 0x15) {
      cVar3 = FUN_00565c50(2,iVar8);
      local_dc = (float)piVar1[cVar3 + 0x1e9];
    }
    piVar1 = DAT_00b333c4;
    local_e4 = 0.0;
    if (iVar8 - 0xcU < 0x15) {
      cVar3 = FUN_00565c50(2,iVar8);
      local_e4 = (float)piVar1[cVar3 + 0x4c];
    }
    uVar5 = (**(code **)(*DAT_00b333c4 + 0x284))
                      (iVar8,DAT_00b333c4[local_d8 + 0x62],(double)local_e4,(double)local_dc);
    uVar5 = FUN_00565cc0(iVar8,local_e0,uVar5);
    _sprintf(acStack_cc,"%s (%s%d): advances: %d, usage %.2f/%.2f",uVar5);
    FUN_0057b8e0(acStack_cc,(float)DAT_00b02e24);
    local_f4 = local_f4 + param_1;
    iVar8 = iVar8 + 1;
    if (0x20 < iVar8) {
      _sprintf(acStack_cc,"Major Skills Advanced: %d/%d",DAT_00b333c4[0x61]);
      FUN_0057b8e0(acStack_cc,(float)DAT_00b02e24,(float)local_f4,1);
      local_f4 = local_f4 + param_1;
      if ((char)DAT_00b333c4[0x77] != '\0') {
        FUN_0057b8e0("Ready to Level Up",(float)DAT_00b02e24,(float)local_f4,1);
        local_f4 = local_f4 + param_1;
      }
      local_e4 = (float)DAT_00b02e24;
      local_d8 = 0x500 - DAT_00b02e24;
      local_e0 = (char *)(((float)local_d8 - local_e4) * 0.5 + local_e4);
      FUN_0057b8e0("Attribute Skill Counts",local_e0,(float)local_ec,2);
      piVar7 = (int *)DAT_00b333c4[0x16d];
      fVar6 = 0.0;
      local_ec = local_f0;
      for (piVar1 = piVar7; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        if (*piVar1 != 0) {
          fVar6 = (float)((int)fVar6 + 1);
        }
      }
      fVar2 = fVar6;
      if (0 < (int)fVar6) {
        do {
          local_dc = fVar2;
          local_e4 = fVar6;
          iVar8 = *piVar7;
          piVar7 = (int *)piVar7[1];
          if (iVar8 != 0) {
            _sprintf(acStack_cc,"Advancement #%d");
            FUN_0057b8e0(acStack_cc,local_e0,(float)local_ec,2);
            local_ec = local_ec + param_1;
            uVar9 = 0;
            do {
              if (uVar9 < 8) {
                FUN_00565c50(0);
              }
              uVar5 = FUN_00565cc0(uVar9);
              _sprintf(acStack_cc,"%s: %d",uVar5);
              FUN_0057b8e0(acStack_cc,local_e0,(float)local_ec,2);
              local_ec = local_ec + param_1;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < 8);
          }
          local_dc = (float)((int)local_dc + -1);
          local_e4 = (float)((int)local_e4 + -1);
          fVar6 = local_e4;
          fVar2 = local_dc;
        } while (local_e4 != 0.0);
      }
      local_f0 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0("Specialization Counts",(float)local_f0,(float)local_e8,3,0xffffffff);
      iVar8 = local_e8 + param_1;
      local_e8 = iVar8;
      _sprintf(acStack_cc,"Combat: %d",(int)(char)DAT_00b333c4[0x16e]);
      local_f0 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)local_f0,(float)local_e8,3,0xffffffff);
      iVar8 = iVar8 + param_1;
      local_e8 = iVar8;
      _sprintf(acStack_cc,"Magic: %d",(int)*(char *)((int)DAT_00b333c4 + 0x5b9));
      local_f0 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)local_f0,(float)local_e8,3,0xffffffff);
      iVar8 = iVar8 + param_1;
      local_e8 = iVar8;
      _sprintf(acStack_cc,"Stealth: %d",(int)*(char *)((int)DAT_00b333c4 + 0x5ba));
      local_f0 = 0x500 - DAT_00b02e24;
      FUN_0057b8e0(acStack_cc,(float)local_f0,(float)local_e8,3,0xffffffff);
      *local_d4 = local_f4;
      *local_d0 = iVar8 + param_1;
      return;
    }
  } while( true );
}



void FUN_006670c0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = FUN_00565be0(2,iVar2);
    FUN_00663c50(uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x15);
  return;
}



uint FUN_006670f0(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint in_EAX;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *in_ECX;
  float10 fVar9;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (DAT_00b3bb88 == (undefined *)0x0) {
    DAT_00b3bb88 = &DAT_00b3bb4c;
    DAT_00b3bb5c = 0;
    DAT_00b3bb79 = 1;
  }
  pfVar5 = (float *)(**(code **)(*in_ECX + 0x174))();
  fStack_30 = *pfVar5;
  fStack_2c = pfVar5[1];
  fStack_28 = pfVar5[2];
  fStack_3c = 0.0;
  fStack_38 = 24.0;
  fStack_34 = 0.0;
  fVar9 = (float10)FUN_005e0660();
  fStack_28 = (float)(fVar9 * (float10)0.25 + (float10)fStack_28);
  FUN_00441920(param_1);
  fStack_18 = fStack_3c + fStack_30;
  fStack_14 = fStack_2c + fStack_38;
  fStack_10 = fStack_34 + fStack_28;
  cVar4 = FUN_00959d60(&fStack_18,&fStack_3c,0);
  if (cVar4 != '\0') {
    piVar1 = (int *)**(int **)(DAT_00b3bb88 + 0x1c);
    fStack_20 = (float)piVar1[0xb];
    fStack_24 = (float)piVar1[10];
    fStack_1c = (float)piVar1[0xc];
    if (0.0 < fStack_1c * fStack_34 + fStack_3c * fStack_24 + fStack_20 * fStack_38) {
      iVar7 = *piVar1;
      if (*(int **)(iVar7 + 0x1c) == (int *)0x0) goto LAB_0066722c;
      puVar6 = (undefined4 *)(**(code **)(**(int **)(iVar7 + 0x1c) + 4))();
      iVar7 = CONCAT31((int3)((uint)puVar6 >> 8),puVar6 == &DAT_00b3fd4c);
      if (puVar6 != &DAT_00b3fd4c) goto LAB_0066722c;
    }
  }
  fStack_24 = 24.0;
  fStack_3c = 24.0;
  fStack_20 = -24.0;
  fStack_1c = 0.0;
  fStack_38 = -24.0;
  fStack_c = fStack_30 + 24.0;
  fStack_34 = 0.0;
  fVar2 = fStack_2c - 24.0;
  fVar3 = fStack_28 + 0.0;
  fStack_8 = fVar2;
  fStack_4 = fVar3;
  cVar4 = FUN_00959d60(&fStack_c,&fStack_3c,0);
  if (cVar4 != '\0') {
    piVar1 = (int *)**(int **)(DAT_00b3bb88 + 0x1c);
    fStack_20 = (float)piVar1[0xb];
    fStack_24 = (float)piVar1[10];
    fStack_1c = (float)piVar1[0xc];
    if (0.0 < fStack_1c * fStack_34 + fStack_24 * fStack_3c + fStack_20 * fStack_38) {
      iVar7 = *piVar1;
      if (*(int **)(iVar7 + 0x1c) == (int *)0x0) goto LAB_0066722c;
      puVar6 = (undefined4 *)(**(code **)(**(int **)(iVar7 + 0x1c) + 4))();
      iVar7 = CONCAT31((int3)((uint)puVar6 >> 8),puVar6 == &DAT_00b3fd4c);
      if (puVar6 != &DAT_00b3fd4c) goto LAB_0066722c;
    }
  }
  fStack_24 = -24.0;
  fStack_20 = -24.0;
  fStack_3c = -24.0;
  fStack_1c = 0.0;
  fStack_18 = fStack_30 - 24.0;
  fStack_38 = -24.0;
  fStack_34 = 0.0;
  fStack_14 = fVar2;
  fStack_10 = fVar3;
  cVar4 = FUN_00959d60(&fStack_18,&fStack_3c,0);
  if (cVar4 != '\0') {
    piVar1 = (int *)**(int **)(DAT_00b3bb88 + 0x1c);
    fStack_20 = (float)piVar1[0xb];
    fStack_24 = (float)piVar1[10];
    fStack_1c = (float)piVar1[0xc];
    if (0.0 < fStack_1c * fStack_34 + fStack_24 * fStack_3c + fStack_20 * fStack_38) {
      iVar7 = *piVar1;
      if (*(int **)(iVar7 + 0x1c) != (int *)0x0) {
        puVar6 = (undefined4 *)(**(code **)(**(int **)(iVar7 + 0x1c) + 4))();
        iVar7 = CONCAT31((int3)((uint)puVar6 >> 8),puVar6 == &DAT_00b3fd4c);
        if (puVar6 == &DAT_00b3fd4c) goto LAB_00667408;
      }
LAB_0066722c:
      return CONCAT31((int3)((uint)iVar7 >> 8),1);
    }
  }
LAB_00667408:
  FUN_0065a2c0();
  uVar8 = FUN_00892d90();
  return uVar8;
}



void FUN_00667420(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  
  cVar2 = (**(code **)(*param_1 + 400))();
  if ((cVar2 == '\0') && (iVar3 = FUN_00612220(), iVar3 != 0)) {
    iVar3 = (**(code **)(*param_1 + 0x154))();
    fVar1 = *(float *)(iVar3 + 0x2c);
    FUN_00612220();
    fVar4 = (float10)FUN_00982c30();
    if (((float)fVar4 < fVar1) && (cVar2 = FUN_006670f0(iVar3), cVar2 != '\0')) {
      *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) | 1;
      FUN_0088cf20(iVar3,0,1,0);
      FUN_0067b1e0(param_1);
    }
  }
  return;
}



void FUN_00667520(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  
  do {
    if ((DAT_00b3bb48 == 0) && (DAT_00b3bb44 == 0)) {
      return;
    }
    puVar4 = &DAT_00b3bb44;
    while( true ) {
      piVar1 = (int *)*puVar4;
      iVar3 = (**(code **)(*piVar1 + 0x154))();
      if (iVar3 == 0) break;
      cVar2 = FUN_006670f0(iVar3);
      if (cVar2 == '\0') {
        *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xfffe;
        FUN_0088cf20(iVar3,1,1,0);
        break;
      }
      puVar4 = (undefined4 *)puVar4[1];
      if (puVar4 == (undefined4 *)0x0) {
        return;
      }
    }
    FUN_0065c620(piVar1);
  } while( true );
}



void FUN_00667600(int param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  undefined4 uVar11;
  int *piStack_7c;
  int *local_78;
  float fStack_74;
  float *pfStack_70;
  float fStack_6c;
  int local_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined1 uStack_20;
  int iStack_18;
  int local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_009c3e95;
  local_14 = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff78;
  *unaff_FS_OFFSET = (int)&local_14;
  local_68 = 0;
  iVar6 = FUN_006ecc80(uVar5);
  if (param_1 == iVar6) {
LAB_00667bc2:
    *unaff_FS_OFFSET = local_14;
    return;
  }
  FUN_0065a330(param_1);
  if (param_1 == 0) {
    FUN_004526e0();
    goto LAB_00667bc2;
  }
  cVar4 = FUN_004c97f0();
  if (cVar4 == '\0') {
    in_ECX[0x1ba] = 0;
  }
  (**(code **)(*in_ECX + 0x178))(0);
  FUN_0043df10();
  iVar6 = FUN_004caf90();
  if (((iVar6 != 0) || (cVar4 = FUN_004c97f0(), cVar4 == '\0')) ||
     (cVar4 = FUN_004c9820(), cVar4 != '\0')) {
    uVar11 = 0;
    FUN_00542ea0(iVar6,0);
    FUN_00543200(iVar6,uVar11);
  }
  local_68 = FUN_004c9cf0();
  bVar3 = false;
  *(undefined1 *)((int)in_ECX + 0x71e) = 0;
  if (in_ECX[0x1cc] != 0) {
    FUN_0065dd90();
    if ((undefined4 *)in_ECX[0x1cc] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[0x1cc])(1);
    }
    in_ECX[0x1cc] = 0;
  }
  iVar6 = FUN_004c9a80();
  iVar7 = FUN_004c9aa0();
  pfStack_70 = (float *)(float)(iVar6 << 0xc);
  fStack_6c = (float)pfStack_70 + 4096.0;
  fStack_74 = (float)(iVar7 << 0xc);
  fVar1 = fStack_74 + 4096.0;
  FUN_004a6970(pfStack_70,fStack_74);
  FUN_004a6970(pfStack_70,fVar1);
  FUN_004a6970(fStack_6c,fStack_74);
  FUN_004a6970(fStack_6c,fVar1);
  FUN_004526e0();
  iVar6 = FUN_004c9b40(1);
  if (iVar6 != 0) {
    bVar3 = false;
    for (pfStack_70 = (float *)(iVar6 + 4);
        (pfStack_70 != (float *)0x0 && (fVar1 = *pfStack_70, fStack_74 = fVar1, fVar1 != 0.0));
        pfStack_70 = (float *)pfStack_70[1]) {
      FUN_004a6950(in_ECX + 0xb);
      if ((((*(uint *)((int)fVar1 + 8) >> 5 & 1) == 0) &&
          ((iVar6 = *(int *)((int)fVar1 + 0x20), iVar6 == 0 ||
           (iVar7 = FUN_004d6670(), iVar6 == iVar7)))) &&
         ((local_78 = *(int **)((int)fVar1 + 0x1c), local_78 != (int *)0x0 &&
          ((local_78[1] != 0 || (*local_78 != 0)))))) {
        bVar2 = false;
        do {
          if ((local_78 == (int *)0x0) || (in_ECX = piStack_7c, *local_78 == 0)) break;
          cVar4 = FUN_004a7330(auStack_60);
          fVar1 = fStack_74;
          if (cVar4 != '\0') {
            iVar6 = FUN_004a4460(7);
            if (iVar6 != 0) {
              for (piVar9 = (int *)(iVar6 + 0xc); (piVar9 != (int *)0x0 && (*piVar9 != 0));
                  piVar9 = (int *)piVar9[1]) {
                FUN_00446cb0(*piVar9);
              }
            }
            if ((*(uint *)((int)fVar1 + 8) >> 6 & 1) != 0) {
              bVar3 = true;
              cVar4 = FUN_004a7330(auStack_58);
              if ((((cVar4 != '\0') && (cVar4 = FUN_004a7330(auStack_50), cVar4 != '\0')) &&
                  (cVar4 = FUN_004a7330(auStack_48), cVar4 != '\0')) &&
                 (cVar4 = FUN_004a7330(auStack_40), cVar4 != '\0')) {
                *(undefined1 *)((int)piStack_7c + 0x71e) = 1;
              }
            }
            if (piStack_7c[0x1ba] == 0) {
LAB_00667947:
              piStack_7c[0x1ba] = (int)fVar1;
            }
            else {
              iVar6 = FUN_004a4460(3);
              iVar7 = FUN_004a4460(3);
              if ((iVar7 != 0) &&
                 (((iVar6 == 0 || ((*(char *)(iVar7 + 4) != '\0' && (*(char *)(iVar6 + 4) == '\0')))
                   ) || ((*(char *)(iVar7 + 4) == *(char *)(iVar6 + 4) &&
                         (*(byte *)(iVar6 + 6) < *(byte *)(iVar7 + 6))))))) goto LAB_00667947;
            }
            bVar2 = true;
          }
          local_78 = (int *)local_78[1];
        } while (!bVar2);
        if ((*(uint *)((int)fStack_74 + 8) >> 6 & 1) != 0) {
          if (in_ECX[0x1cc] == 0) {
            fStack_6c = (float)FUN_00401f00(0x10);
            puStack_10 = (undefined1 *)0x0;
            if (fStack_6c == 0.0) {
              iVar6 = 0;
            }
            else {
              iVar6 = FUN_0065dd30(1,1);
            }
            puStack_10 = (undefined1 *)0xffffffff;
            in_ECX[0x1cc] = iVar6;
          }
          iVar6 = in_ECX[0x1cc];
          uVar5 = (uint)*(ushort *)(iVar6 + 10);
          if (*(ushort *)(iVar6 + 8) <= uVar5) {
            FUN_004e4a10(*(ushort *)(iVar6 + 0xe) + uVar5);
          }
          FUN_0042bb90(uVar5,&fStack_74);
        }
      }
    }
  }
  if (((DAT_00b14f58 == '\0') || (local_68 == 0)) ||
     ((cVar4 = FUN_004ef160(), cVar4 == '\0' ||
      (((*(char *)(DAT_00b333a0 + 0x51) != '\0' || (*(char *)(DAT_00b333a0 + 0x52) != '\0')) ||
       (bVar3)))))) goto LAB_00667aac;
  iVar6 = in_ECX[0x1cb];
  if (iVar6 == 0) {
LAB_00667a5f:
    puVar8 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
    uStack_38 = *puVar8;
    uStack_34 = puVar8[1];
    uStack_30 = puVar8[2];
    FUN_0043f320(in_ECX + 0x1c8);
    fVar10 = (float10)FUN_00404c90();
    if (fVar10 <= (float10)2048.0) goto LAB_00667aac;
  }
  else {
    if (*(char *)(iVar6 + 4) != '0') {
      if (*(char *)(iVar6 + 4) != '5') goto LAB_00667a5f;
      param_1 = FUN_004c9cf0();
    }
    if (iVar6 == param_1) goto LAB_00667a5f;
  }
  *(undefined1 *)((int)in_ECX + 0x71f) = 1;
LAB_00667aac:
  if (in_ECX[0x1ba] == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)FUN_004a4460(4);
  }
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  iStack_2c = in_ECX[0x1ba];
  uVar5 = 1;
  puStack_10 = (undefined1 *)0x1;
  uStack_20 = 1;
  if (piVar9 == (int *)0x0) {
    FUN_00401f20(0);
    local_68 = 0;
    uStack_62 = 0;
    uStack_64 = 0;
    piVar9 = &local_68;
    puStack_10 = (undefined1 *)0x3;
    uVar5 = 2;
  }
  else {
    piVar9 = (int *)(**(code **)(*piVar9 + 0x28))(&uStack_38);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
  }
  fStack_6c = (float)uVar5;
  FUN_004028d0(*piVar9,0);
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    FUN_00401f20(local_68);
  }
  puStack_10 = (undefined1 *)0x1;
  if ((uVar5 & 1) != 0) {
    FUN_00401f20(uStack_38);
  }
  FUN_005a64b0(&iStack_2c);
  FUN_0065e860();
  FUN_00401f20(uStack_28);
  *unaff_FS_OFFSET = iStack_18;
  return;
}



int * FUN_00667be0(void)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int *in_ECX;
  int *piVar9;
  int unaff_ESI;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  undefined4 uVar11;
  undefined *puStack_98;
  undefined *puStack_94;
  char *pcStack_90;
  int iStack_8c;
  undefined4 auStack_64 [9];
  int aiStack_40 [10];
  undefined4 uStack_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c3ed1;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x170))();
  if ((*(uint *)(DAT_00b33b00 + 0x18) >> 1 & 1) == 0) {
    iStack_8c = 0;
    pcStack_90 = (char *)0x1;
    puStack_94 = (undefined *)0x1;
    FUN_005227a0();
    FUN_006670c0();
  }
  iStack_8c = 3;
  pcStack_90 = (char *)0x1;
  puStack_94 = DAT_00b36bb8;
  puStack_98 = (undefined *)0x667c52;
  iVar3 = FUN_00439eb0();
  iStack_8c = 0x667c62;
  iVar4 = FUN_00401f00();
  piVar9 = (int *)0x0;
  uStack_4 = 0;
  if (iVar4 != 0) {
    iStack_8c = 0x667c7e;
    piVar9 = (int *)FUN_0070b780();
  }
  *(ushort *)(piVar9 + 6) = *(ushort *)(piVar9 + 6) | 0x40;
  piVar7 = (int *)in_ECX[0x174];
  uStack_4 = 0xffffffff;
  if (piVar7 != piVar9) {
    if (piVar7 != (int *)0x0) {
      iStack_8c = 0x667ca8;
      LVar5 = InterlockedDecrement(piVar7 + 1);
      if ((LVar5 == 0) && (piVar7 != (int *)0x0)) {
        iStack_8c = 0x667cba;
        (**(code **)*piVar7)();
      }
    }
    in_ECX[0x174] = (int)piVar9;
    iStack_8c = 0x667cca;
    InterlockedIncrement(piVar9 + 1);
  }
  iStack_8c = 0x667cda;
  FUN_006ff420();
  pcStack_90 = (char *)0x667ce9;
  iStack_8c = iVar3;
  (**(code **)(*piVar9 + 0x84))();
  pcStack_90 = "Camera01";
  puStack_94 = (undefined *)0x667cfb;
  DAT_00b3bb0c = (**(code **)(*(int *)in_ECX[0x174] + 0x58))();
  puStack_94 = &DAT_00a738a4;
  puStack_98 = (undefined *)0x667d12;
  DAT_00b3bb14 = (**(code **)(*(int *)in_ECX[0x174] + 0x58))();
  if (DAT_00b3bb0c == 0) {
    puStack_98 = DAT_00b36bb8;
    FUN_00404ec0("Missing \'Camera01\' on \'%s\'.");
  }
  if (DAT_00b3bb14 == 0) {
    puStack_98 = DAT_00b36bb8;
    FUN_00404ec0("Missing \'Bip\' on \'%s\'.");
  }
  puStack_98 = (undefined *)0x1;
  FUN_00707370(0);
  fVar1 = *(float *)(DAT_00b3bb0c + 0x90);
  puStack_98 = (undefined *)0x0;
  in_ECX[0x175] = (int)fVar1;
  *(undefined4 *)(iVar3 + 0x54) = 0;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  *(float *)(iVar3 + 0x5c) = -fVar1;
  puVar6 = &DAT_00b26dc4;
  puVar10 = auStack_64;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar6 = (undefined4 *)FUN_004d7c50(aiStack_40,auStack_64);
  puVar10 = (undefined4 *)(unaff_ESI + 0x30);
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  puStack_98 = PTR_s_Quiver_00b06568;
  iVar3 = (**(code **)(*piVar9 + 0x58))();
  if (iVar3 != 0) {
    *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) | 1;
  }
  iVar3 = FUN_00401f00(0x154);
  uStack_18 = 1;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00478730(in_ECX,piVar9);
  }
  uStack_18 = 0xffffffff;
  in_ECX[0x172] = iVar3;
  iVar3 = FUN_00401f00(0xdc);
  uStack_18 = 2;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00473eb0();
  }
  in_ECX[0x173] = iVar3;
  iVar3 = in_ECX[0x162];
  uStack_18 = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x162) = 1;
  piVar7 = (int *)FUN_00659f30();
  *(char *)(in_ECX + 0x162) = (char)iVar3;
  uVar8 = FUN_00435830(DAT_00b36bb8,0);
  FUN_00475d80(uVar8,piVar9,in_ECX);
  iVar3 = *(int *)in_ECX[0x16];
  uVar11 = 1;
  uVar8 = (**(code **)(iVar3 + 0xec))(1,0);
  (**(code **)(iVar3 + 0x104))(uVar8);
  piVar9 = (int *)in_ECX[0x16];
  uVar8 = FUN_004d8370();
  (**(code **)(*piVar9 + 0x114))(uVar8);
  (**(code **)(*(int *)in_ECX[0x16] + 0x114))(in_ECX[0x173]);
  FUN_006ff420("Player");
  pcVar2 = *(code **)(*piVar7 + 0x58);
  *(ushort *)(piVar7 + 6) = *(ushort *)(piVar7 + 6) | 1;
  DAT_00b3bb10 = (*pcVar2)("Camera01");
  if (DAT_00b3bb10 == 0) {
    uVar8 = (**(code **)(*in_ECX + 0x170))();
    uVar8 = FUN_0046d3f0(uVar8);
    FUN_00404ec0("Missing \'Camera01\' on \'%s\'.",uVar8);
  }
  FUN_00578cf0(1);
  FUN_005e4dd0();
  iVar3 = (**(code **)(*in_ECX + 0x284))(0x45);
  if (iVar3 != 0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x31c))(1);
    (**(code **)(*(int *)in_ECX[0x16] + 0x5c))();
    DAT_00b33d80 = 1;
    (**(code **)(*(int *)in_ECX[0x16] + 0x318))();
    DAT_00b33d80 = 0;
  }
  (**(code **)(*(int *)in_ECX[0x16] + 0x31c))(0);
  FUN_005ea1a0(uVar11);
  (**(code **)(*in_ECX + 0x148))();
  iVar3 = FUN_0065a2c0();
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 8) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_008ac0c0();
    }
    if (*(int *)(iVar3 + 8) == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = *(int **)(*(int *)(iVar3 + 8) + 0x2b0);
    }
    if (piVar9 != (int *)0x0) {
      iVar3 = FUN_0057e270(&puStack_98);
      (**(code **)(*piVar9 + 0x90))(piVar7,1,0,*(undefined2 *)(iVar3 + 2),0);
    }
  }
  *unaff_FS_OFFSET = aiStack_40[0];
  return piVar7;
}



void FUN_00668030(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = FUN_00565be0(2,iVar3);
    if (iVar2 - 0xcU < 0x15) {
      cVar1 = FUN_00565c50(2,iVar2);
      *(undefined4 *)(in_ECX + 0x130 + cVar1 * 4) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x15);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00668070(int param_1,char param_2)

{
  char *pcVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int in_ECX;
  int unaff_EBX;
  undefined1 *puVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_204 [4];
  double local_200 [63];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_204;
  *(int *)(in_ECX + 0x660) = *(int *)(in_ECX + 0x660) + 1;
  if (param_2 == '\0') {
    local_200[0] = (double)((ulonglong)local_200[0] & 0xffffffff00000000);
    if (*(int *)(param_1 + 0x2c) - 0xcU < 0x15) {
      cVar4 = FUN_00565c50(2,*(int *)(param_1 + 0x2c));
      local_200[0] = (double)(ulonglong)*(uint *)(in_ECX + 0x130 + cVar4 * 4);
    }
    local_200[0] = (double)local_200[0]._0_4_;
    fVar11 = (float10)FUN_0065fad0(param_1);
    fVar2 = (float)((float10)local_200[0] - fVar11);
    if (fVar2 < 0.0) {
      local_200[0]._0_4_ = 0.0;
      fVar2 = local_200[0]._0_4_;
    }
    local_200[0] = (double)CONCAT44(local_200[0]._4_4_,fVar2);
    if (*(int *)(param_1 + 0x2c) - 0xcU < 0x15) {
      cVar4 = FUN_00565c50(2,*(int *)(param_1 + 0x2c));
      *(float *)(in_ECX + 0x130 + cVar4 * 4) = local_200[0]._0_4_;
    }
  }
  uVar5 = FUN_005f23b0(*(undefined4 *)(param_1 + 0x2c));
  uVar9 = *(undefined4 *)(param_1 + 0x2c);
  local_200[0] = (double)CONCAT44(local_200[0]._4_4_,uVar5);
  iVar6 = FUN_005f1910(uVar9);
  piVar7 = (int *)FUN_005e02e0(0);
  (**(code **)(*piVar7 + 0x134))(uVar9,iVar6 + 1);
  FUN_0057a6f0(uVar9);
  FUN_005e2670(uVar9,1);
  iVar6 = FUN_005f23b0(*(undefined4 *)(param_1 + 0x2c));
  FUN_00663c50(*(undefined4 *)(param_1 + 0x2c));
  piVar7 = (int *)(in_ECX + 0x158 + *(int *)(param_1 + 0x2c) * 4);
  *piVar7 = *piVar7 + 1;
  if (*(uint *)(param_1 + 0x34) < 3) {
    pcVar1 = (char *)(in_ECX + 0x5b8 + *(uint *)(param_1 + 0x34));
    *pcVar1 = *pcVar1 + '\x01';
  }
  FUN_006648d0(*(undefined4 *)(param_1 + 0x30));
  bVar3 = false;
  iVar8 = FUN_005e3320();
  if (iVar8 != 0) {
    uVar9 = *(undefined4 *)(param_1 + 0x2c);
    FUN_005e3320(uVar9);
    cVar4 = FUN_0051c090(uVar9);
    if (cVar4 != '\0') {
      *(int *)(in_ECX + 0x184) = *(int *)(in_ECX + 0x184) + 1;
      bVar3 = true;
      FUN_0065fb30();
    }
  }
  iVar8 = FUN_00589b70(0x3ec);
  if (iVar8 != 0) {
    uVar9 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b0a064,0);
    FUN_009832e6(uVar9);
  }
  if ((bVar3) && (DAT_00b37618 <= *(int *)(in_ECX + 0x184))) {
    cVar4 = FUN_005a56c0();
    uVar9 = DAT_00b38d28;
    if (cVar4 == '\0') {
      if ((char)param_1 != '\0') {
        uVar5 = FUN_0052ea90(DAT_00b383a8,DAT_00b383b8);
        _sprintf((char *)local_200,"%s %s %s.  %s",uVar9,uVar5);
        FUN_0057acc0(local_200,0,1,0x40800000);
        if ((*(int *)(DAT_00b33398 + 0x24) != 0) &&
           (iVar8 = FUN_006ade50("UIStatsSkillUp",0x121,1), iVar8 != 0)) {
          FUN_006b7190(0);
          FUN_006b73e0();
          FUN_00401f20(iVar8);
        }
      }
      *(undefined1 *)(in_ECX + 0x1dc) = 1;
      goto LAB_006683a1;
    }
    if ((char)param_1 == '\0') {
      *(undefined1 *)(in_ECX + 0x1dc) = 1;
      goto LAB_006683a1;
    }
  }
  else if ((char)param_1 == '\0') goto LAB_006683a1;
  uVar9 = DAT_00b38d28;
  uVar5 = FUN_0052ea90(DAT_00b383a8);
  _sprintf((char *)local_200,"%s %s %s.",uVar9,uVar5);
  if (((*(int *)(DAT_00b33398 + 0x24) != 0) &&
      (iVar8 = FUN_006ade50("UIStatsSkillUp",0x121,0), iVar8 != 0)) &&
     (cVar4 = FUN_006b7260(), cVar4 == '\0')) {
    FUN_006b7190(0);
    FUN_006b73e0();
    FUN_00401f20(iVar8);
  }
  FUN_0057acc0(local_200,0,1,0xbf800000);
LAB_006683a1:
  if (iVar6 != unaff_EBX) {
    puVar10 = *(undefined1 **)(param_1 + 0x24);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &DAT_00a2f7ec;
    }
    uVar13 = 3;
    uVar12 = 2;
    uVar9 = DAT_00b38cf0;
    uVar5 = FUN_0052eab0(iVar6);
    FUN_0057b370("skill_perk.xml",0,1,0,2,puVar10,2,uVar5,uVar12,uVar9,uVar13);
    if ((*(int *)(param_1 + 0x2c) == 0xe) || (*(int *)(param_1 + 0x2c) - 0x10U < 2)) {
      FUN_004d8370();
      FUN_00471990();
      FUN_00476410(in_ECX,0);
      FUN_00471990();
      FUN_00476410(in_ECX,0);
    }
  }
  FUN_0057a7d0();
  return;
}



void FUN_00668440(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 < 8) {
    iVar1 = FUN_005f1910(param_1);
    uVar2 = FUN_00664970(param_1);
    iVar3 = FUN_005480a0(uVar2);
    iVar1 = iVar1 + iVar3;
    if (100 < iVar1) {
      iVar1 = 100;
    }
    piVar4 = (int *)FUN_005e02e0(0);
    (**(code **)(*piVar4 + 0x134))(param_1,iVar1);
    FUN_0057a6f0(param_1);
    FUN_005e2670(param_1,1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006684b0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int *in_ECX;
  undefined **ppuVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  uint **ppuStack_304;
  undefined ***pppuStack_300;
  uint **ppuStack_2fc;
  char **ppcStack_2f8;
  undefined8 uStack_2f4;
  undefined **ppuStack_2ec;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e4;
  uint *puStack_2e0;
  undefined1 *puStack_2dc;
  undefined4 *puStack_2d8;
  char *pcStack_2d4;
  float fVar10;
  undefined *puStack_2c8;
  uint uStack_2c4;
  undefined4 uStack_2b4;
  undefined2 uStack_2b0;
  undefined2 uStack_2ae;
  undefined *puStack_2ac;
  undefined4 uStack_2a8;
  int local_2a0;
  char local_298 [180];
  char acStack_1e4 [352];
  uint local_84;
  int local_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_009c3f09;
  local_4c = *unaff_FS_OFFSET;
  local_84 = DAT_00b30aac ^ (uint)&uStack_2b4;
  uStack_2c4 = DAT_00b30aac ^ (uint)&stack0xfffffd40;
  *unaff_FS_OFFSET = (int)&local_4c;
  puStack_2c8 = PTR_s___vault_TES4_LevelData__00b14eb8;
  pcStack_2d4 = "hT\x01";
  _sprintf(local_298,"%sLevelUpData_1.txt");
  pcStack_2d4 = (char *)0x154;
  puStack_2d8 = (undefined4 *)0x668511;
  local_2a0 = FUN_00401f00();
  ppuVar7 = (undefined **)0x0;
  local_44 = 0;
  if (local_2a0 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    puStack_2c8 = (undefined *)0x0;
    pcStack_2d4 = local_298;
    puStack_2d8 = (undefined4 *)0x668539;
    piVar2 = (int *)FUN_00430970();
  }
  local_44 = 0xffffffff;
  if ((piVar2 != (int *)0x0) && ((char)piVar2[9] != '\0')) {
    puStack_2c8 = (undefined *)0x2;
    (**(code **)(*piVar2 + 0xc))();
    uStack_2b4 = 0;
    uStack_2b0 = 0;
    uStack_2ae = 0;
    local_4c = 1;
    uStack_2a8 = (**(code **)(*in_ECX + 0x170))();
    puStack_2d8 = &uStack_2b4;
    pcStack_2d4 = "%s\t";
    puStack_2dc = (undefined1 *)0x6685c3;
    FUN_00402e30();
    pcStack_2d4 = (char *)0x6685d4;
    (**(code **)(*piVar2 + 0x2c))();
    pcStack_2d4 = (char *)0x6685db;
    pcStack_2d4 = (char *)FUN_004da2a0();
    puStack_2dc = &stack0xfffffd48;
    puStack_2d8 = (undefined4 *)&DAT_00a4c8e8;
    puStack_2e0 = (uint *)0x6685eb;
    FUN_00402e30();
    pcStack_2d4 = &stack0xfffffd48;
    puStack_2d8 = (undefined4 *)0x6685fc;
    (**(code **)(*piVar2 + 0x2c))();
    puStack_2d8 = (undefined4 *)0x668603;
    iVar3 = FUN_005e32f0();
    puStack_2d8 = *(undefined4 **)(iVar3 + 0x1c);
    if (puStack_2d8 == (undefined4 *)0x0) {
      puStack_2d8 = (undefined4 *)&DAT_00a2f7ec;
    }
    puStack_2e0 = (uint *)&stack0xfffffd44;
    puStack_2dc = &DAT_00a4c8e8;
    ppuStack_2e4 = (undefined **)0x668622;
    FUN_00402e30();
    puStack_2d8 = (undefined4 *)&stack0xfffffd44;
    puStack_2dc = (undefined1 *)0x668633;
    (**(code **)(*piVar2 + 0x2c))();
    puStack_2dc = (undefined1 *)0x66863a;
    iVar3 = FUN_005e3320();
    puStack_2dc = *(undefined1 **)(iVar3 + 0x1c);
    if (puStack_2dc == (undefined1 *)0x0) {
      puStack_2dc = &DAT_00a2f7ec;
    }
    ppuStack_2e4 = (undefined **)&stack0xfffffd40;
    puStack_2e0 = (uint *)&DAT_00a4c8e8;
    ppuStack_2e8 = (undefined **)0x668659;
    FUN_00402e30();
    puStack_2dc = &stack0xfffffd40;
    puStack_2e0 = (uint *)0x66866a;
    (**(code **)(*piVar2 + 0x2c))();
    puStack_2e0 = (uint *)0x668676;
    iVar3 = (**(code **)(*in_ECX + 0x268))();
    if (iVar3 == 0) {
      puStack_2e0 = (uint *)0x0;
      ppuStack_2e4 = (undefined **)&DAT_00a738fc;
      ppuStack_2e8 = (undefined **)0x668689;
      FUN_004028d0();
    }
    else {
      puStack_2e0 = (uint *)0x668697;
      iVar3 = (**(code **)(*in_ECX + 0x268))();
      puStack_2e0 = *(uint **)(iVar3 + 0x1c);
      if (puStack_2e0 == (uint *)0x0) {
        puStack_2e0 = (uint *)&DAT_00a2f7ec;
      }
      ppuStack_2e8 = (undefined **)&uStack_2c4;
      ppuStack_2e4 = (undefined **)&DAT_00a4c8e8;
      ppuStack_2ec = (undefined **)0x6686b6;
      FUN_00402e30();
    }
    puStack_2e0 = &uStack_2c4;
    ppuStack_2e4 = (undefined **)0x6686c7;
    (**(code **)(*piVar2 + 0x2c))();
    ppuStack_2e4 = (undefined **)0x6686ce;
    uVar4 = FUN_005e1fd0();
    ppuStack_2e4 = (undefined **)(uVar4 & 0xffff);
    ppuStack_2ec = &puStack_2c8;
    ppuStack_2e8 = (undefined **)&DAT_00a738f8;
    uStack_2f4 = (double)CONCAT44(0x6686e1,(int)uStack_2f4);
    FUN_00402e30();
    ppuStack_2e4 = &puStack_2c8;
    ppuStack_2e8 = (undefined **)0x6686f2;
    (**(code **)(*piVar2 + 0x2c))();
    do {
      ppuStack_2ec = (undefined **)0x6686fa;
      ppuStack_2e8 = ppuVar7;
      FUN_005e3320();
      ppuStack_2ec = (undefined **)0x668701;
      ppuStack_2e8 = (undefined **)FUN_0051bf00();
      ppuStack_2ec = (undefined **)0x668707;
      ppuStack_2ec = (undefined **)FUN_00565cc0();
      uStack_2f4 = (double)CONCAT44(&DAT_00a4c8e8,&stack0xfffffd34);
      ppcStack_2f8 = (char **)0x668717;
      FUN_00402e30();
      ppuStack_2e8 = (undefined **)&stack0xfffffd34;
      ppuStack_2ec = (undefined **)0x668728;
      (**(code **)(*piVar2 + 0x2c))();
      ppuVar7 = (undefined **)((int)ppuVar7 + 1);
    } while ((int)ppuVar7 < 7);
    ppuVar7 = (undefined **)0xc;
    do {
      ppuStack_2ec = (undefined **)0x668742;
      ppuStack_2e8 = ppuVar7;
      ppuStack_2ec = (undefined **)(**(code **)(*in_ECX + 0x284))();
      uStack_2f4 = (double)CONCAT44(&DAT_00a738f8,&stack0xfffffd30);
      ppcStack_2f8 = (char **)0x668752;
      FUN_00402e30();
      ppuStack_2ec = (undefined **)&stack0xfffffd30;
      uStack_2f4 = (double)CONCAT44(0x668763,(int)uStack_2f4);
      (**(code **)(*piVar2 + 0x2c))();
      fVar10 = 0.0;
      if (ppuVar7 + -3 < (undefined **)0x15) {
        uStack_2f4 = (double)CONCAT44(ppuVar7,2);
        ppcStack_2f8 = (char **)0x668779;
        cVar1 = FUN_00565c50();
        fVar10 = (float)in_ECX[cVar1 + 0x4c];
      }
      uStack_2f4 = (double)fVar10;
      ppuStack_2fc = (uint **)&pcStack_2d4;
      ppcStack_2f8 = (char **)0xa738f0;
      pppuStack_300 = (undefined ***)0x6687a3;
      FUN_00402e30();
      uStack_2f4 = (double)CONCAT44(&pcStack_2d4,0x6687b4);
      (**(code **)(*piVar2 + 0x2c))();
      iVar3 = (int)ppuVar7 + -0xb;
      ppuVar7 = (undefined **)((int)ppuVar7 + 1);
    } while (iVar3 < 0x15);
    ppuVar7 = (undefined **)0x0;
    do {
      ppuStack_2ec = (undefined **)0x6687cd;
      ppuStack_2e8 = ppuVar7;
      ppuStack_2e8 = (undefined **)FUN_005f1910();
      ppuStack_2ec = (undefined **)&DAT_00a738f8;
      uStack_2f4 = (double)CONCAT44(&stack0xfffffd34,0x6687dd);
      FUN_00402e30();
      ppuStack_2e8 = (undefined **)&stack0xfffffd34;
      ppuStack_2ec = (undefined **)0x6687ee;
      (**(code **)(*piVar2 + 0x2c))();
      uStack_2f4 = (double)CONCAT44(0x6687fb,(int)uStack_2f4);
      ppuStack_2ec = ppuVar7;
      uVar5 = (**(code **)(*in_ECX + 0x284))();
      ppcStack_2f8 = &pcStack_2d4;
      uStack_2f4 = (double)CONCAT44(uVar5,&DAT_00a738f8);
      ppuStack_2fc = (uint **)0x66880b;
      FUN_00402e30();
      uStack_2f4 = (double)CONCAT44(&pcStack_2d4,0x66881c);
      (**(code **)(*piVar2 + 0x2c))();
      ppuVar7 = (undefined **)((int)ppuVar7 + 1);
    } while ((int)ppuVar7 < 8);
    ppuStack_2e8 = (undefined **)0x8;
    ppuStack_2ec = (undefined **)0x66882d;
    ppuStack_2e8 = (undefined **)FUN_005f1910();
    ppuStack_2ec = (undefined **)&DAT_00a738f8;
    uStack_2f4 = (double)CONCAT44(&stack0xfffffd34,0x66883d);
    FUN_00402e30();
    ppuStack_2e8 = (undefined **)&stack0xfffffd34;
    ppuStack_2ec = (undefined **)0x66884e;
    (**(code **)(*piVar2 + 0x2c))();
    ppuStack_2ec = (undefined **)0x8;
    uStack_2f4 = (double)CONCAT44(0x66885c,(int)uStack_2f4);
    uVar5 = (**(code **)(*in_ECX + 0x284))();
    ppcStack_2f8 = &pcStack_2d4;
    uStack_2f4 = (double)CONCAT44(uVar5,&DAT_00a738f8);
    ppuStack_2fc = (uint **)0x66886c;
    FUN_00402e30();
    uStack_2f4._4_4_ = &pcStack_2d4;
    uStack_2f4._0_4_ = 0x66887d;
    (**(code **)(*piVar2 + 0x2c))();
    uStack_2f4._0_4_ = 10;
    ppcStack_2f8 = (char **)0x668886;
    uStack_2f4._0_4_ = FUN_005f1910();
    ppuStack_2fc = &puStack_2d8;
    ppcStack_2f8 = (char **)&DAT_00a738f8;
    pppuStack_300 = (undefined ***)0x668896;
    FUN_00402e30();
    uStack_2f4 = (double)CONCAT44(uStack_2f4._4_4_,&puStack_2d8);
    ppcStack_2f8 = (char **)0x6688a7;
    (**(code **)(*piVar2 + 0x2c))();
    ppcStack_2f8 = (char **)0xa;
    ppuStack_2fc = (uint **)0x6688b5;
    ppuStack_2fc = (uint **)(**(code **)(*in_ECX + 0x284))();
    ppuStack_304 = &puStack_2e0;
    pppuStack_300 = (undefined ***)&DAT_00a738f8;
    FUN_00402e30();
    ppuStack_2fc = &puStack_2e0;
    pppuStack_300 = (undefined ***)0x6688d6;
    (**(code **)(*piVar2 + 0x2c))();
    pppuStack_300 = (undefined ***)0x9;
    ppuStack_304 = (uint **)0x6688df;
    pppuStack_300 = (undefined ***)FUN_005f1910();
    ppuStack_304 = (uint **)&DAT_00a738f8;
    FUN_00402e30(&ppuStack_2e4);
    pppuStack_300 = &ppuStack_2e4;
    ppuStack_304 = (uint **)0x668900;
    (**(code **)(*piVar2 + 0x2c))();
    ppuStack_304 = (uint **)0x9;
    uVar5 = (**(code **)(*in_ECX + 0x284))();
    FUN_00402e30(&ppuStack_2ec,&DAT_00a738f8,uVar5);
    (**(code **)(*piVar2 + 0x2c))(&ppuStack_2ec);
    FUN_0065dfa0(&puStack_2e0,&ppuStack_2e8);
    FUN_00402e30((int)&uStack_2f4 + 4,"%.2f\t%.2f\t",(double)(float)puStack_2e0,
                 (double)(float)ppuStack_2e8);
    (**(code **)(*piVar2 + 0x2c))();
    FUN_004d6d40();
    iVar3 = FUN_00485e00();
    uVar5 = 0;
    if (iVar3 != 0) {
      uVar5 = FUN_00488100(0,0);
    }
    FUN_00402e30(&uStack_2f4,&DAT_00a738f8,uVar5);
    (**(code **)(*piVar2 + 0x2c))(&uStack_2f4);
    uVar5 = FUN_004de160();
    FUN_00402e30(&ppcStack_2f8,&DAT_00a738f8,uVar5);
    (**(code **)(*piVar2 + 0x2c))(&ppcStack_2f8);
    fVar9 = (float10)(**(code **)(*in_ECX + 0x348))();
    FUN_00402e30(&ppuStack_2fc,"%.2f\t",(double)fVar9);
    (**(code **)(*piVar2 + 0x2c))(&ppuStack_2fc);
    FUN_004028d0(&DAT_00a738d8,0);
    for (piVar8 = (int *)((int)uStack_2f4 + 0x58); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[1])
    {
      iVar3 = *piVar8;
      if (iVar3 != 0) {
        puVar6 = *(undefined1 **)(iVar3 + 0x1c);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_00a2f7ec;
        }
        _sprintf(acStack_1e4,"%s (%08X),",puVar6,*(undefined4 *)(iVar3 + 0xc));
        FUN_00412fa0(acStack_1e4);
      }
    }
    FUN_00412fa0(&DAT_00a738c8);
    (**(code **)(*piVar2 + 0x2c))(&pppuStack_300);
    iVar3 = 0x658;
    do {
      FUN_00402e30(&ppuStack_304,&DAT_00a738f8,*(undefined4 *)(iVar3 + DAT_00b333c4));
      (**(code **)(*piVar2 + 0x2c))(&ppuStack_304);
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x6c8);
    FUN_00402e30(&ppuStack_304,&DAT_00a3d9b0);
    (**(code **)(*piVar2 + 0x2c))(&ppuStack_304);
    FUN_004303b0();
    (**(code **)*piVar2)(1);
    puStack_2c8 = puStack_2ac;
    FUN_00401f20();
  }
  *unaff_FS_OFFSET = local_4c;
  return;
}



void FUN_00668b30(float param_1,float param_2,int param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  float10 fVar6;
  
  iVar2 = (int)param_1;
  iVar4 = FUN_005f1910(param_1);
  if (99 < iVar4) {
    return;
  }
  if (param_3 == 0) {
    uVar5 = FUN_00565c50(2,param_1);
    param_3 = FUN_00446af0(uVar5);
    if (param_3 == 0) goto LAB_00668c15;
  }
  uVar1 = (int)param_1 - 0xc;
  param_1 = 0.0;
  if (uVar1 < 0x15) {
    cVar3 = FUN_00565c50(2,iVar2);
    param_1 = *(float *)(in_ECX + 0x130 + cVar3 * 4);
  }
  FUN_0065fa40(iVar2,param_1 + param_2);
  fVar6 = (float10)FUN_0065fad0(param_3);
  if (fVar6 < (float10)(param_1 + param_2)) {
    FUN_00668070(param_3,0,param_4 == '\0');
  }
  if ((*(char *)(in_ECX + 0x6e5) != '\0') && (param_4 == '\0')) {
    cVar3 = FUN_00565c50(2,iVar2);
    *(float *)(*(int *)(in_ECX + 0x5b0) + cVar3 * 4) =
         *(float *)(*(int *)(in_ECX + 0x5b0) + cVar3 * 4) + param_2;
  }
LAB_00668c15:
  FUN_0057a6f0(iVar2);
  return;
}



void FUN_00668c30(float param_1,int param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = param_1;
  uVar3 = FUN_00565c50(2,param_1);
  iVar4 = FUN_00446af0(uVar3);
  fVar1 = *(float *)(iVar4 + 0x38 + param_2 * 4);
  iVar5 = FUN_005f1910(param_1);
  if (iVar5 < 100) {
    param_1 = fVar1;
    if (param_3 != 0.0) {
      param_1 = param_3 * fVar1;
    }
    if ((iVar4 != 0) && (0.0 < param_1)) {
      FUN_00668b30(uVar2,param_1,iVar4,0);
      return;
    }
  }
  return;
}



void FUN_00668cc0(void)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 800))();
  if (cVar1 == '\0') {
    cVar1 = FUN_0057a310();
    if (cVar1 != '\0') {
      FUN_00664e60();
    }
  }
  (**(code **)(**(int **)(in_ECX + 0x58) + 0x318))();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_00668d00(char param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  LONG LVar8;
  undefined4 *puVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  int *in_ECX;
  int iVar14;
  undefined4 *unaff_EBX;
  undefined4 *puVar15;
  undefined **ppuVar16;
  int *unaff_FS_OFFSET;
  undefined4 uVar17;
  undefined4 *puStack_294;
  undefined4 uStack_290;
  undefined4 *puStack_28c;
  undefined4 uStack_288;
  undefined4 *puStack_284;
  undefined4 *puStack_27c;
  undefined4 *puStack_278;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 auStack_264 [9];
  undefined1 auStack_240 [24];
  char acStack_228 [16];
  char acStack_218 [244];
  undefined1 auStack_124 [16];
  char acStack_114 [252];
  undefined1 uStack_18;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c3f7d;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&puStack_294;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffd5c;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = in_ECX + 0x176;
  if (param_1 == '\0') {
    if (*piVar1 != 0) {
      iVar6 = in_ECX[0x177];
      if (iVar6 != 0) {
        FUN_00475b60(uVar4);
        FUN_00401f20(iVar6);
      }
      in_ECX[0x177] = 0;
      puVar9 = (undefined4 *)*piVar1;
      if (puVar9 != (undefined4 *)0x0) {
        LVar8 = InterlockedDecrement(puVar9 + 1);
        if ((LVar8 == 0) && (puVar9 != (undefined4 *)0x0)) {
          (**(code **)*puVar9)(1);
        }
        *piVar1 = 0;
      }
      if ((undefined4 *)in_ECX[0x178] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)in_ECX[0x178])(1);
        in_ECX[0x178] = 0;
      }
    }
  }
  else if (*piVar1 == 0) {
    uStack_290 = (undefined4 *)CONCAT13(DAT_00b45da4,(undefined3)uStack_290);
    DAT_00b45da4 = 1;
    FUN_00679060();
    FUN_0067aca0(0);
    uVar5 = (**(code **)(*in_ECX + 0x154))();
    FUN_008b8700(uVar5);
    uVar5 = FUN_00612220();
    FUN_008b8700(uVar5);
    iVar6 = FUN_00612220();
    puStack_284 = *(undefined4 **)(iVar6 + 0xc);
    if (puStack_284 != (undefined4 *)0x0) {
      InterlockedIncrement((LONG *)((int)puStack_284 + 4));
    }
    iStack_4 = 0;
    FUN_006fffd0();
    FUN_00478b90();
    auStack_264[0] = 0x3f800000;
    uStack_268 = 0x3f800000;
    uStack_26c = 0x3f800000;
    iStack_4 = CONCAT31(iStack_4._1_3_,1);
    piVar7 = (int *)FUN_00700610(&puStack_27c);
    if (piVar7 != (int *)0x0) {
      iVar6 = (**(code **)(*piVar7 + 8))();
      if (iVar6 != 0) {
        uVar5 = 0;
        FUN_007b4280(1,iVar6,0);
        FUN_007c7f90(iVar6,uVar5);
      }
    }
    FUN_00478300(puStack_284);
    if (piVar7 == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(*piVar7 + 8))();
    }
    FUN_0075fa90(uVar5);
    FUN_006fffd0();
    FUN_00473120(*piVar1);
    FUN_006ffac0(&DAT_00a3fa90);
    FUN_00708560(&puStack_28c,0);
    puVar9 = puStack_28c;
    if (puStack_28c != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puStack_28c + 1);
      if ((LVar8 == 0) && (puVar9 != (undefined4 *)0x0)) {
        (**(code **)*puVar9)(1);
      }
    }
    FUN_00707610();
    FUN_004a2a90(*piVar1,0x3f800000);
    FUN_00664d70(*piVar1);
    iVar6 = *piVar1;
    *(undefined4 *)(iVar6 + 0x54) = DAT_00b3f9a8;
    *(undefined4 *)(iVar6 + 0x58) = DAT_00b3f9ac;
    *(undefined4 *)(iVar6 + 0x5c) = DAT_00b3f9b0;
    iVar6 = *piVar1;
    piVar7 = in_ECX;
    (**(code **)(*in_ECX + 0x170))();
    FUN_00524510(piVar7,iVar6);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x58))(PTR_s_Quiver_00b06568);
    FUN_005f8300(0,uVar5);
    puVar9 = &DAT_00b26dc4;
    puVar15 = auStack_264;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar15 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar15 = puVar15 + 1;
    }
    iVar6 = *piVar1;
    puVar9 = (undefined4 *)FUN_004d7c50(auStack_240,auStack_264,0);
    puVar15 = (undefined4 *)(iVar6 + 0x30);
    for (iVar14 = 9; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar15 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar15 = puVar15 + 1;
    }
    FUN_006ff420("PlayerInventoryPC");
    puStack_284 = (undefined4 *)FUN_00401f00(0x1e0);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
    if (puStack_284 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = (undefined4 *)FaceGen_Struct1E0_ctor();
    }
    uStack_290 = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x58))("BSFaceGenNiNodeBiped");
    piVar7 = (int *)FUN_00560920(&DAT_00b39db8,uVar5);
    if (piVar7 != (int *)0x0) {
      iVar6 = (**(code **)(*in_ECX + 0x284))(0x45);
      pcVar2 = *(code **)(*piVar7 + 0xa0);
      puVar9[0x77] = (float)iVar6;
      (*pcVar2)(puVar9);
    }
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x58))("BSFaceGenNiNodeSkinned");
    piVar7 = (int *)FUN_00560920(&DAT_00b39db8,uVar5);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xa0))(puVar9);
      FUN_0055d1b0(1);
    }
    if (puVar9 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar9 + 1);
      if (LVar8 == 0) {
        (**(code **)*puVar9)(1);
      }
      unaff_EBX = (undefined4 *)0x0;
    }
    cVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))();
    if (cVar3 == '\0') {
      iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
      if (iVar6 != 0) {
        iVar6 = (**(code **)(*(int *)*piVar1 + 0x58))(PTR_s_BackWeapon_00b065b0);
        iVar14 = (**(code **)(*(int *)*piVar1 + 0x58))(PTR_s_SideWeapon_00b065b4);
        iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
        if (*(char *)(*(int *)(iVar10 + 8) + 0x90) == '\x05') {
          piVar7 = (int *)(**(code **)(*(int *)*piVar1 + 0x58))(PTR_s_Torch_00b065c0);
        }
        else {
          piVar7 = (int *)(**(code **)(*(int *)*piVar1 + 0x58))(PTR_s_Weapon_00b065ac);
        }
        if (piVar7 != (int *)0x0) {
          iVar10 = 0;
          if (iVar6 != 0) {
            iVar10 = FUN_00405790(0);
          }
          if (iVar14 == 0) {
LAB_00669103:
            if (iVar10 == 0) goto LAB_00669142;
          }
          else if (iVar10 == 0) {
            iVar10 = FUN_00405790(0);
            goto LAB_00669103;
          }
          *(undefined4 *)(iVar10 + 0x54) = DAT_00b3f9a8;
          *(undefined4 *)(iVar10 + 0x58) = DAT_00b3f9ac;
          *(undefined4 *)(iVar10 + 0x5c) = DAT_00b3f9b0;
          puVar9 = &DAT_00b26dc4;
          puVar15 = (undefined4 *)(iVar10 + 0x30);
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar15 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar15 = puVar15 + 1;
          }
          (**(code **)(*piVar7 + 0x84))(iVar10,1);
        }
      }
    }
LAB_00669142:
    piVar7 = (int *)(**(code **)(*(int *)*piVar1 + 0x58))("ArrowBone");
    if (piVar7 != (int *)0x0) {
      piVar7 = (int *)(**(code **)(*piVar7 + 8))();
      if (piVar7 != (int *)0x0) {
        uVar4 = 0;
        if (*(short *)((int)piVar7 + 0xb6) != 0) {
          do {
            (**(code **)(*piVar7 + 0x8c))(&stack0xfffffd68,uVar4);
            if (unaff_EBX != (undefined4 *)0x0) {
              LVar8 = InterlockedDecrement(unaff_EBX + 1);
              if ((LVar8 == 0) && (unaff_EBX != (undefined4 *)0x0)) {
                (**(code **)*unaff_EBX)(1);
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(ushort *)((int)piVar7 + 0xb6));
        }
      }
    }
    piVar7 = (int *)(**(code **)(*(int *)*piVar1 + 0x58))("magicNode");
    if (piVar7 != (int *)0x0) {
      piVar7 = (int *)(**(code **)(*piVar7 + 8))();
      if (piVar7 != (int *)0x0) {
        uVar4 = 0;
        if (*(short *)((int)piVar7 + 0xb6) != 0) {
          do {
            (**(code **)(*piVar7 + 0x8c))(&puStack_294,uVar4);
            puVar9 = puStack_294;
            if (puStack_294 != (undefined4 *)0x0) {
              LVar8 = InterlockedDecrement(puStack_294 + 1);
              if ((LVar8 == 0) && (puVar9 != (undefined4 *)0x0)) {
                (**(code **)*puVar9)(1);
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(ushort *)((int)piVar7 + 0xb6));
        }
      }
    }
    FUN_007d92c0(*piVar1,0,0,0,0);
    iVar6 = FUN_00401f00(0xdc);
    uStack_18 = 4;
    if (iVar6 == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = FUN_00473eb0();
    }
    in_ECX[0x177] = iVar14;
    uStack_18 = 3;
    uStack_288 = (**(code **)(*in_ECX + 0x170))();
    uVar5 = FUN_0046d3f0(uStack_288,iVar6);
    _sprintf(acStack_114,"%s",uVar5);
    pcVar11 = _strrchr(acStack_114,0x5c);
    if (pcVar11 == (char *)0x0) {
      iStack_4._0_1_ = 1;
      if (puStack_28c != (undefined4 *)0x0) {
        LVar8 = InterlockedDecrement(puStack_28c + 1);
        if (LVar8 == 0) {
          (**(code **)*puStack_28c)(1);
        }
      }
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      if (puStack_27c != (undefined4 *)0x0) {
        (**(code **)*puStack_27c)(1);
      }
      if (puStack_278 != (undefined4 *)0x0) {
        (**(code **)*puStack_278)(1);
      }
      puVar9 = puStack_284;
      iStack_4 = 0xffffffff;
      if (puStack_284 != (undefined4 *)0x0) {
        LVar8 = InterlockedDecrement(puStack_284 + 1);
        if (LVar8 == 0) {
          (**(code **)*puVar9)(1);
        }
      }
      iVar6 = 0;
      goto LAB_00669661;
    }
    builtin_strncpy(pcVar11,"\\Idle.KF",9);
    _sprintf(acStack_218,"Data\\%s\\%s","Meshes",acStack_114);
    uVar17 = 0;
    uVar5 = FUN_0046d3f0(uStack_288,0);
    puStack_294 = (undefined4 *)FUN_00434850(acStack_218,uVar5,uVar17);
    *pcVar11 = '\0';
    ppuVar16 = &PTR_s_HandToHand_00b102cc;
    do {
      _sprintf(acStack_218,"Data\\%s\\%s\\%sIdle.KF","Meshes",acStack_114,*ppuVar16);
      iVar6 = (**(code **)(*DAT_00b33a04 + 4))(acStack_218,0,0,0xffffffff);
      if (iVar6 != 0) {
        pcVar12 = (char *)FUN_00401f00(0x104);
        pcVar13 = (char *)FUN_0046d3f0(unaff_EBX);
        pcVar11 = pcVar12;
        do {
          cVar3 = *pcVar13;
          *pcVar11 = cVar3;
          pcVar13 = pcVar13 + 1;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        pcVar11 = _strrchr(pcVar12,0x5c);
        if (pcVar11 != (char *)0x0) {
          _sprintf(pcVar11 + 1,"%sIdle.KF",*ppuVar16);
          FUN_0067b1e0(pcVar12);
        }
      }
      _sprintf(acStack_228,"Data\\%s\\%s\\%sTorchIdle.KF","Meshes",auStack_124,*ppuVar16);
      iVar6 = (**(code **)(*DAT_00b33a04 + 4))(acStack_228,0,0,0xffffffff);
      if (iVar6 != 0) {
        pcVar12 = (char *)FUN_00401f00(0x104);
        pcVar13 = (char *)FUN_0046d3f0(uStack_288);
        pcVar11 = pcVar12;
        do {
          cVar3 = *pcVar13;
          *pcVar11 = cVar3;
          pcVar13 = pcVar13 + 1;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        pcVar11 = _strrchr(pcVar12,0x5c);
        if (pcVar11 != (char *)0x0) {
          _sprintf(pcVar11 + 1,"%sTorchIdle.KF",*ppuVar16);
          FUN_0067b1e0(pcVar12);
        }
      }
      ppuVar16 = ppuVar16 + 1;
    } while ((int)ppuVar16 < 0xb102e0);
    FUN_00475d80(puStack_294,*piVar1,in_ECX);
    piVar7 = (int *)FUN_0041e650();
    if ((piVar7 != (int *)0x0) && (iVar6 = *piVar7, iVar6 != 0)) {
      uVar5 = 0;
      FUN_007b4280(1,iVar6,0);
      FUN_007c6ae0(iVar6,uVar5);
    }
    DAT_00b45da4 = uStack_290._3_1_;
    (**(code **)(*(int *)*piVar1 + 0x78))();
    (**(code **)(*(int *)*piVar1 + 0x50))();
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x16] + 0x42c))();
    }
    iStack_4._0_1_ = 1;
    if (puStack_28c != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puStack_28c + 1);
      if (LVar8 == 0) {
        (**(code **)*puStack_28c)(1);
      }
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    if (puStack_27c != (undefined4 *)0x0) {
      (**(code **)*puStack_27c)(1);
    }
    if (puStack_278 != (undefined4 *)0x0) {
      (**(code **)*puStack_278)(1);
    }
    puVar9 = puStack_284;
    iStack_4 = 0xffffffff;
    if (puStack_284 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puStack_284 + 1);
      if (LVar8 == 0) {
        (**(code **)*puVar9)(1);
      }
    }
  }
  iVar6 = *piVar1;
LAB_00669661:
  *unaff_FS_OFFSET = local_c;
  return iVar6;
}



undefined4 FUN_00669690(int param_1,char param_2,char param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b7148;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    piVar1 = (int *)(in_ECX + 0x5e4);
    while( true ) {
      if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
        FUN_00446cb0(param_1);
        if ((param_3 != '\0') && (iVar4 = FUN_00578fe0(uVar3), iVar4 != 0x3f1)) {
          local_14 = 0;
          local_10 = 0;
          local_e = 0;
          puVar5 = *(undefined1 **)(param_1 + 0x1c);
          local_4 = 0;
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_00a2f7ec;
          }
          FUN_00402e30(&local_14,"%s: %s",DAT_00b382e0,puVar5);
          uVar2 = local_14;
          FUN_0057acc0(local_14,0,1,0x41200000);
          local_4 = 0xffffffff;
          FUN_00401f20(uVar2);
        }
        if (param_2 != '\0') {
          FUN_0052f6d0((int *)(in_ECX + 0x5e4));
        }
        *unaff_FS_OFFSET = local_c;
        return 1;
      }
      if (*piVar1 == param_1) break;
      piVar1 = (int *)piVar1[1];
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006697a0(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int in_ECX;
  int iVar12;
  int *unaff_FS_OFFSET;
  undefined4 uVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_23c [3];
  char local_239;
  int local_238;
  undefined2 local_234;
  undefined2 local_232;
  undefined1 *local_230;
  undefined2 local_22c;
  undefined2 local_22a;
  undefined4 local_228;
  undefined2 local_224;
  undefined2 local_222;
  undefined1 local_220 [8];
  char local_218 [260];
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c3ff2;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_23c;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xfffffdb4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == (byte *)0x0) {
LAB_006697ee:
    uVar20 = 0;
    goto LAB_00669d00;
  }
  puVar9 = (undefined4 *)(in_ECX + 0x5ec);
  local_239 = '\0';
  cVar4 = local_239;
  while ((puVar9 != (undefined4 *)0x0 && (pbVar1 = (byte *)*puVar9, pbVar1 != (byte *)0x0))) {
    puVar9 = (undefined4 *)puVar9[1];
    if ((pbVar1 == param_1) && ((*(byte *)(*(int *)(pbVar1 + 0x68) + 0x3c) & 8) == 0))
    goto LAB_006697ee;
    if (*(int *)(pbVar1 + 0x68) == *(int *)(param_1 + 0x68)) {
      local_239 = '\x01';
      cVar4 = local_239;
    }
  }
  local_239 = cVar4;
  local_238 = in_ECX;
  FUN_00446cb0(param_1);
  cVar5 = FUN_004f9fa0(uVar7);
  if (cVar5 != '\0') {
    cVar5 = FUN_005790e0(0x3f1,0);
    if (cVar5 != '\0') {
      local_230 = (undefined1 *)0x0;
      local_22c = 0;
      local_22a = 0;
      local_4 = 0;
      local_238 = 0;
      local_234 = 0;
      local_232 = 0;
      FUN_004028d0(&DAT_00a2f7ec,0);
      puVar8 = *(undefined1 **)(*(int *)(param_1 + 0x68) + 0x34);
      local_4 = CONCAT31(local_4._1_3_,1);
      if ((*param_1 & 1) == 0) {
        if (cVar4 == '\0') {
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &DAT_00a2f7ec;
          }
          FUN_00402e30(&local_230,"%s: %s",DAT_00b382c8,puVar8);
          FUN_004028d0("UIQuestNew",0);
          if (*(int *)(DAT_00b333c4 + 0x5f4) == 0) {
            FUN_00660450(*(undefined4 *)(param_1 + 0x68));
          }
        }
        else {
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &DAT_00a2f7ec;
          }
          FUN_00402e30(&local_230,"%s: %s",DAT_00b382d8,puVar8);
          FUN_004028d0("UIQuestUpdate",0);
        }
      }
      else {
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &DAT_00a2f7ec;
        }
        FUN_00402e30(&local_230,"%s: %s",DAT_00b382d0,puVar8);
        FUN_004028d0("UIQuestUpdate",0);
        FUN_00660450(0);
      }
      puVar8 = *(undefined1 **)(*(int *)(param_1 + 0x68) + 0x28);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_00a2f7ec;
      }
      _sprintf(local_218,"%s",puVar8);
      local_114[0] = '\0';
      if (local_218[0] != '\0') {
        _sprintf(local_114,"%s\\%s","Icons",local_218);
      }
      puVar8 = local_230;
      iVar2 = local_238;
      FUN_0057add0(local_230,0x41200000,local_114,local_238);
      FUN_00401f20(iVar2);
      local_4 = 0xffffffff;
      FUN_00401f20(puVar8);
    }
    cVar5 = FUN_005790e0(0x3f1,0);
    if ((cVar5 == '\0') ||
       ((cVar5 = FUN_0057c140(0), cVar5 == '\0' && (cVar5 = FUN_0057c140(0x3f1), cVar5 == '\0')))) {
      if (((*param_1 & 1) == 0) && (cVar4 == '\0')) {
        uVar20 = 9;
      }
      else {
        uVar20 = 10;
      }
      FUN_0057de50(uVar20);
      puVar8 = *(undefined1 **)(*(int *)(param_1 + 0x68) + 0x28);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_00a2f7ec;
      }
      _sprintf(local_114,"%s",puVar8);
      local_218[0] = '\0';
      if (local_114[0] != '\0') {
        _sprintf(local_218,"%s\\%s","Icons",local_114);
      }
      iVar2 = *(int *)(param_1 + 0x68);
      iVar3 = *(int *)(DAT_00b333c4 + 0x5f4);
      bVar6 = *(byte *)(iVar2 + 0x3c) >> 1 & 1;
      iVar12 = DAT_00b382d0;
      if (iVar3 == 0) {
LAB_00669bc6:
        if (bVar6 == 0) {
          if (cVar4 == '\0') {
            local_238 = DAT_00b382c8;
          }
          else {
            local_238 = DAT_00b382d8;
          }
          puVar9 = (undefined4 *)FUN_0047d400(local_220);
          iVar2 = *(int *)(param_1 + 0x68);
          uVar20 = *puVar9;
          puVar8 = *(undefined1 **)(iVar2 + 0x34);
          local_4 = 4;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &DAT_00a2f7ec;
          }
          uVar18 = 3;
          uVar17 = 1;
          uVar15 = 0;
          uVar13 = 2;
          pcVar14 = local_218;
          uVar10 = 2;
          uVar16 = DAT_00b382f0;
          uVar11 = FUN_0052af40(iVar2);
          FUN_0057b370("quest_added.xml",&LAB_00665240,1,iVar2,2,local_238,2,puVar8,2,uVar20,2,
                       uVar11,uVar10,pcVar14,uVar13,uVar16,uVar15,uVar17,uVar18);
          local_4 = 0xffffffff;
          FUN_00402da0();
        }
        else {
LAB_00669c8c:
          puVar9 = (undefined4 *)FUN_0047d400(&local_238);
          uVar20 = *puVar9;
          puVar8 = *(undefined1 **)(*(int *)(param_1 + 0x68) + 0x34);
          local_4 = 5;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &DAT_00a2f7ec;
          }
          uVar18 = 3;
          uVar17 = 1;
          uVar15 = 0;
          uVar13 = 2;
          pcVar14 = local_218;
          uVar10 = 2;
          uVar16 = DAT_00b382f0;
          uVar11 = FUN_0052af40(*(int *)(param_1 + 0x68));
          FUN_0057b370("quest_added.xml",0,1,0,2,iVar12,2,puVar8,2,uVar20,2,uVar11,uVar10,pcVar14,
                       uVar13,uVar16,uVar15,uVar17,uVar18);
          FUN_00401f20(local_238);
        }
      }
      else {
        if ((iVar2 == iVar3) || (bVar6 != 0)) {
          if (iVar3 == 0) goto LAB_00669bc6;
          if ((bVar6 == 0) && (iVar12 = DAT_00b382d8, cVar4 == '\0')) {
            iVar12 = DAT_00b382c8;
          }
          goto LAB_00669c8c;
        }
        local_228 = 0;
        local_224 = 0;
        local_222 = 0;
        local_4 = 2;
        FUN_00402e30(&local_228,&DAT_00a4051c,*(undefined4 *)(iVar2 + 0xc));
        if (cVar4 == '\0') {
          local_238 = DAT_00b382c8;
        }
        else {
          local_238 = DAT_00b382d8;
        }
        puVar9 = (undefined4 *)FUN_0047d400(local_220);
        iVar2 = *(int *)(param_1 + 0x68);
        uVar20 = *puVar9;
        local_230 = *(undefined1 **)(iVar2 + 0x34);
        local_4._0_1_ = 3;
        if (local_230 == (undefined1 *)0x0) {
          local_230 = &DAT_00a2f7ec;
        }
        uVar21 = 3;
        uVar19 = 2;
        uVar18 = 2;
        uVar17 = 0;
        uVar15 = 2;
        pcVar14 = local_218;
        uVar13 = 2;
        uVar16 = DAT_00b382f0;
        uVar11 = DAT_00b382e8;
        uVar10 = FUN_0052af40(iVar2);
        FUN_0057b370("quest_added.xml",&LAB_00665220,1,iVar2,2,local_238,2,local_230,2,uVar20,2,
                     uVar10,uVar13,pcVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar11,uVar21);
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_00402da0();
        local_4 = 0xffffffff;
        FUN_00402da0();
      }
    }
  }
  uVar20 = 1;
LAB_00669d00:
  *unaff_FS_OFFSET = local_c;
  return uVar20;
}



void FUN_0066a3d0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00668070(param_1,1,1);
  *(int *)(in_ECX + 0x5bc) = *(int *)(in_ECX + 0x5bc) + 1;
  *(int *)(in_ECX + 0x664) = *(int *)(in_ECX + 0x664) + 1;
  return;
}



void FUN_0066a400(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  
  if (in_ECX[0x191] != 0) {
    for (piVar1 = (int *)(in_ECX[0x191] + 0x3c); (piVar1 != (int *)0x0 && (*piVar1 != 0));
        piVar1 = (int *)piVar1[1]) {
      (**(code **)(*in_ECX + 0x2e0))(*piVar1);
    }
  }
  FUN_006a2280(0);
  in_ECX[0x191] = param_1;
  if (param_1 != 0) {
    for (piVar1 = (int *)(param_1 + 0x3c); (piVar1 != (int *)0x0 && (*piVar1 != 0));
        piVar1 = (int *)piVar1[1]) {
      (**(code **)(*in_ECX + 0x2dc))(*piVar1);
    }
  }
  iVar3 = 0;
  do {
    uVar2 = FUN_00565be0(2,iVar3);
    FUN_00663c50(uVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x15);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0066a490(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 *puVar4;
  char acStack_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)acStack_104;
  if (param_1 != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xec))(1);
    if ((iVar1 == 0) ||
       (iVar1 = FUN_009832e6(*(undefined4 *)(iVar1 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0),
       iVar1 == 0)) {
      FUN_00579c10(DAT_00b388b0,&DAT_00666890,1,DAT_00b38cf0,0);
    }
    else {
      iVar2 = FUN_00484df0();
      if (iVar2 == 0) {
        if (*(char *)(iVar1 + 0x90) == '\x04') {
          FUN_00579c10(DAT_00b388d0,&DAT_00666890,1,DAT_00b38cf0,0);
        }
        else {
          *(int *)(in_ECX + 0x6e0) = param_1;
          uVar3 = DAT_00b388c8;
          if (*(char *)(iVar1 + 0x90) != '\x05') {
            uVar3 = DAT_00b388c0;
          }
          puVar4 = *(undefined1 **)(iVar1 + 0x28);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_00a2f7ec;
          }
          _sprintf(acStack_104,"%s%s?",uVar3,puVar4);
          FUN_00579c10(acStack_104,&DAT_00666890,2,DAT_00b38cf8,DAT_00b38d00,0);
        }
      }
      else {
        FUN_00579c10(DAT_00b388b8,&DAT_00666890,1,DAT_00b38cf0,0);
      }
    }
  }
  return;
}



void FUN_0066a5e0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x1f0) != 0) && (iVar2 = FUN_006ecc80(), iVar2 != 0)) {
    FUN_006ecc80();
    cVar1 = FUN_004c97f0();
    iVar2 = DAT_00b35c24;
    if (cVar1 != '\0') {
      iVar2 = FUN_00424180();
    }
    iVar3 = FUN_00531f10();
    if (iVar3 != iVar2) {
      FUN_006ecc80();
      cVar1 = FUN_004c97f0();
      if (cVar1 != '\0') {
        uVar4 = FUN_00424180();
        FUN_00531e90(uVar4);
        return;
      }
      FUN_00531e90(DAT_00b35c24);
    }
  }
  return;
}



void FUN_0066a670(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  LONG LVar5;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x574) != 0) {
    iVar3 = FUN_006ecc80();
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      cVar2 = FUN_004c97f0();
      piVar4 = DAT_00b35c24;
      if (cVar2 != '\0') {
        piVar4 = (int *)FUN_00424180();
      }
    }
    (**(code **)(**(int **)(in_ECX + 0x574) + 0x60))();
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x58))();
    }
    if ((*(int *)(in_ECX + 0x574) == 0) ||
       (iVar3 = *(int *)(*(int *)(in_ECX + 0x574) + 8), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x18);
    }
    if (iVar3 != 0) {
      FUN_008a6410();
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x58))();
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x574);
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x574) = 0;
  }
  *(undefined4 *)(in_ECX + 0x578) = 0;
  *(undefined4 *)(in_ECX + 0x57c) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066a740(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  void *_Dst;
  LONG LVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  DWORD DVar8;
  byte bVar9;
  int *in_ECX;
  int iVar10;
  int *unaff_FS_OFFSET;
  __time64_t _Var11;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c409d;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0060e4f0(uVar3);
  *in_ECX = (int)&PTR_FUN_00a73a0c;
  in_ECX[6] = (int)&PTR_FUN_00a73a04;
  in_ECX[0x17] = (int)&PTR_LAB_00a739bc;
  in_ECX[0x1a] = (int)&PTR_LAB_00a73988;
  in_ECX[0x15d] = 0;
  in_ECX[0x174] = 0;
  in_ECX[0x176] = 0;
  in_ECX[0x179] = 0;
  in_ECX[0x17a] = 0;
  in_ECX[0x17b] = 0;
  in_ECX[0x17c] = 0;
  in_ECX[0x17e] = 0;
  in_ECX[0x17f] = 0;
  in_ECX[0x1bb] = 0;
  in_ECX[0x1bc] = 0;
  in_ECX[0x1c1] = 0;
  in_ECX[0x1c2] = 0;
  in_ECX[0x1cf] = 0;
  in_ECX[0x1d0] = 0;
  in_ECX[0x1e0] = 0;
  in_ECX[0x1e1] = 0;
  in_ECX[0x1e3] = 0x25;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  in_ECX[0x1e2] = (int)&PTR_FUN_00a735a8;
  in_ECX[0x1e5] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[0x1e4] = (int)_Dst;
  _memset(_Dst,0,in_ECX[0x1e3] * 4);
  in_ECX[0x1e2] = (int)&PTR_FUN_00a73744;
  in_ECX[0x1e6] = 0;
  in_ECX[0x1e7] = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_0046ab80(0);
  _DAT_00b3bb24 = _DAT_00b36b70;
  iVar10 = 0x48;
  piVar5 = in_ECX + 0xc9;
  do {
    piVar5[-0x48] = 0;
    iVar10 = iVar10 + -1;
    *piVar5 = 0;
    piVar5[0x4b] = 0;
    piVar5 = piVar5 + 1;
  } while (iVar10 != 0);
  in_ECX[0x113] = 0;
  in_ECX[0x111] = 0;
  in_ECX[0x164] = 0;
  in_ECX[0x112] = 0;
  in_ECX[0x47] = 0;
  in_ECX[0x167] = 0;
  in_ECX[0x48] = 0;
  in_ECX[0x168] = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x169] = 0;
  *(undefined1 *)(in_ECX + 0x43) = 0;
  in_ECX[0x185] = 0;
  in_ECX[0x192] = 0;
  *(undefined1 *)(in_ECX + 0x4b) = 0;
  *(undefined1 *)((int)in_ECX + 0x5a9) = 1;
  *(undefined1 *)((int)in_ECX + 0x6e5) = 0;
  in_ECX[0x78] = 0;
  in_ECX[0x193] = 0x48;
  in_ECX[0x194] = 0;
  iVar10 = FUN_00401f00(0x54);
  in_ECX[0x16c] = iVar10;
  iVar10 = 0;
  do {
    *(undefined4 *)(iVar10 + in_ECX[0x16c]) = 0;
    iVar10 = iVar10 + 4;
  } while (iVar10 < 0x54);
  in_ECX[0x1bd] = 0;
  in_ECX[0x1be] = 0;
  in_ECX[0x195] = 0;
  *(undefined1 *)(in_ECX + 0x45) = 0;
  puVar7 = (undefined4 *)in_ECX[0x1e6];
  if (puVar7 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar7 + 1);
    if ((LVar4 == 0) && (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    in_ECX[0x1e6] = 0;
  }
  puVar7 = (undefined4 *)in_ECX[0x1e7];
  if (puVar7 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar7 + 1);
    if ((LVar4 == 0) && (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    in_ECX[0x1e7] = 0;
  }
  *(undefined1 *)((int)in_ECX + 0x115) = 1;
  iVar10 = FUN_00401f00(0x2ec);
  local_4._0_1_ = 7;
  if (iVar10 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00628ee0();
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  (**(code **)(*piVar5 + 4))(in_ECX[0x16]);
  uVar6 = FUN_00659a00();
  FUN_00674550(in_ECX,uVar6);
  if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x16])(1);
  }
  in_ECX[0x16] = (int)piVar5;
  uVar6 = FUN_00659a00();
  FUN_00674550(in_ECX,uVar6);
  in_ECX[0x7a] = 0;
  in_ECX[0x7b] = 0;
  puVar7 = (undefined4 *)FUN_00401f00(8);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  in_ECX[0x79] = (int)puVar7;
  FUN_0065b750();
  iVar10 = FUN_0065a2c0();
  if (iVar10 == 0) {
    in_ECX[0x7c] = 0;
    in_ECX[0x7d] = 0;
  }
  else {
    *(undefined4 *)(iVar10 + 0x3b0) = 1000;
    FUN_0065a310(1);
    if (*(int *)(iVar10 + 0x364) != 0) {
      FUN_0089f4d0(9);
    }
    if (*(int *)(iVar10 + 0x368) != 0) {
      FUN_0089f4d0(9);
    }
    iVar10 = FUN_00401f00(8);
    puStack_8._0_1_ = 8;
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = FUN_00532bc0(0x41000000,9);
    }
    puStack_8._0_1_ = 6;
    in_ECX[0x7c] = iVar10;
    iVar10 = thunk_FUN_00401aa0(0x1c0,1);
    bVar9 = 0x10 - ((byte)iVar10 & 0xf);
    *(byte *)(iVar10 + (uint)bVar9 + -1) = bVar9;
    puStack_8._0_1_ = 9;
    iVar10 = FUN_005358f0(0x40000000,9);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
    in_ECX[0x7d] = iVar10;
  }
  *(undefined1 *)(in_ECX + 0x162) = 0;
  *(undefined1 *)((int)in_ECX + 0x589) = 0;
  *(undefined1 *)((int)in_ECX + 0x58a) = 0;
  *(undefined1 *)((int)in_ECX + 0x58b) = 0;
  *(undefined1 *)(in_ECX + 0x163) = 0;
  iVar10 = _DAT_00b0313c;
  in_ECX[0x166] = _DAT_00b0313c;
  FUN_00411160(in_ECX[0x166],0);
  FUN_007b70e0(iVar10);
  in_ECX[0x172] = 0;
  in_ECX[0x173] = 0;
  puVar7 = (undefined4 *)in_ECX[0x174];
  if (puVar7 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar7 + 1);
    if ((LVar4 == 0) && (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    in_ECX[0x174] = 0;
  }
  in_ECX[0x175] = 0x42ec0000;
  puVar7 = (undefined4 *)in_ECX[0x176];
  if (puVar7 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar7 + 1);
    if ((LVar4 == 0) && (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    in_ECX[0x176] = 0;
  }
  in_ECX[0x177] = 0;
  *(undefined1 *)(in_ECX + 0x49) = 0;
  _DAT_00b3bacc = _DAT_00b3bb24;
  DAT_00b3bb38 = DAT_00b3f9a8;
  DAT_00b3bb3c = DAT_00b3f9ac;
  DAT_00b3bb40 = DAT_00b3f9b0;
  DAT_00b14e4d = 1;
  in_ECX[0x1c0] = 0;
  in_ECX[0x1bf] = 0;
  FUN_00668030();
  in_ECX[0x16d] = 0;
  FUN_0065fbb0();
  *(undefined2 *)(in_ECX + 0x16e) = 0;
  *(undefined1 *)((int)in_ECX + 0x5ba) = 0;
  FUN_0065d560();
  in_ECX[0x187] = 0;
  in_ECX[0x61] = 0;
  *(undefined1 *)(in_ECX + 0x77) = 0;
  *(undefined1 *)(in_ECX + 0x180) = 0;
  *(undefined1 *)(in_ECX + 0x170) = 0;
  in_ECX[0x46] = 0;
  in_ECX[0x182] = 0;
  in_ECX[0x183] = 0;
  *(undefined1 *)(in_ECX + 0x184) = 0;
  *(undefined1 *)((int)in_ECX + 0x611) = 0;
  *(undefined1 *)(in_ECX + 0x188) = 0;
  in_ECX[0x189] = 0;
  in_ECX[0x18a] = 0;
  in_ECX[0x18b] = DAT_00b3f9a8;
  in_ECX[0x18c] = DAT_00b3f9ac;
  in_ECX[0x18d] = DAT_00b3f9b0;
  in_ECX[0x18e] = 0;
  in_ECX[399] = 0;
  in_ECX[0x17d] = 0;
  puVar7 = (undefined4 *)FUN_00401f00(8);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  in_ECX[0x7e] = (int)puVar7;
  in_ECX[400] = 0;
  in_ECX[0x7f] = 0;
  _DAT_00b3bafc = 0;
  in_ECX[0x191] = 0;
  in_ECX[0x16f] = 0;
  in_ECX[0x171] = 0;
  *(undefined1 *)(in_ECX + 0x165) = 0;
  in_ECX[0x1b8] = 0;
  *(undefined1 *)(in_ECX + 0x1b9) = 0;
  *(undefined1 *)((int)in_ECX + 0x6e6) = 0;
  in_ECX[0x1ba] = 0;
  puVar7 = (undefined4 *)in_ECX[0x15d];
  if (puVar7 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar7 + 1);
    if ((LVar4 == 0) && (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    in_ECX[0x15d] = 0;
  }
  in_ECX[0x160] = 0;
  in_ECX[0x15e] = 0;
  in_ECX[0x161] = 0;
  in_ECX[0x15f] = 0;
  in_ECX[0x1c3] = 0;
  in_ECX[0x1c5] = 0;
  DVar8 = GetTickCount();
  in_ECX[0x1c4] = DVar8;
  in_ECX[0x1b2] = 0;
  in_ECX[0x1b3] = 0;
  in_ECX[0x1b4] = 0;
  in_ECX[0x1b5] = 0;
  in_ECX[0x1b6] = 0;
  in_ECX[0x1b7] = 0;
  in_ECX[0x196] = 0;
  in_ECX[0x197] = 0;
  in_ECX[0x198] = 0;
  in_ECX[0x199] = 0;
  in_ECX[0x19a] = 0;
  in_ECX[0x19b] = 0;
  in_ECX[0x19c] = 0;
  in_ECX[0x19d] = 0;
  in_ECX[0x19e] = 0;
  in_ECX[0x19f] = 0;
  in_ECX[0x1a0] = 0;
  in_ECX[0x1a1] = 0;
  in_ECX[0x1a2] = 0;
  in_ECX[0x1a3] = 0;
  in_ECX[0x1a4] = 0;
  in_ECX[0x1a5] = 0;
  in_ECX[0x1a6] = 0;
  in_ECX[0x1a7] = 0;
  in_ECX[0x1a8] = 0;
  in_ECX[0x1a9] = 0;
  in_ECX[0x1aa] = 0;
  in_ECX[0x1ab] = 0;
  in_ECX[0x1ac] = 0;
  in_ECX[0x1ad] = 0;
  in_ECX[0x1ae] = 0;
  in_ECX[0x1af] = 0;
  in_ECX[0x1b0] = 0;
  in_ECX[0x1b1] = 0;
  in_ECX[0x1e9] = 0;
  in_ECX[0x1ea] = 0;
  in_ECX[0x1eb] = 0;
  in_ECX[0x1ec] = 0;
  in_ECX[0x1ed] = 0;
  in_ECX[0x1ee] = 0;
  in_ECX[0x1ef] = 0;
  in_ECX[0x1f0] = 0;
  in_ECX[0x1f1] = 0;
  in_ECX[0x1f2] = 0;
  in_ECX[499] = 0;
  in_ECX[500] = 0;
  in_ECX[0x1f5] = 0;
  in_ECX[0x1f6] = 0;
  in_ECX[0x1f7] = 0;
  in_ECX[0x1f8] = 0;
  in_ECX[0x1f9] = 0;
  in_ECX[0x1fa] = 0;
  in_ECX[0x1fb] = 0;
  in_ECX[0x1fc] = 0;
  in_ECX[0x1fd] = 0;
  _Var11 = __time64((__time64_t *)0x0);
  in_ECX[0x1c6] = (int)_Var11;
  pcVar1 = *(code **)(*in_ECX + 0x1bc);
  *(undefined1 *)(in_ECX + 0x1c7) = 0;
  (*pcVar1)(*(char *)((int)in_ECX + 0x71d) == '\0');
  pcVar1 = *(code **)(*in_ECX + 0x1bc);
  *(undefined1 *)((int)in_ECX + 0x71d) = 0;
  (*pcVar1)((char)in_ECX[0x1c7] == '\0');
  *(undefined1 *)((int)in_ECX + 0x71e) = 0;
  *(undefined1 *)((int)in_ECX + 0x71f) = 0;
  in_ECX[0x1c8] = DAT_00b3f9a8;
  in_ECX[0x1c9] = DAT_00b3f9ac;
  in_ECX[0x1ca] = DAT_00b3f9b0;
  in_ECX[0x1cb] = 0;
  in_ECX[0x1cc] = 0;
  in_ECX[0x1cd] = _DAT_00b14eb0;
  in_ECX[0x178] = 0;
  *(undefined1 *)(in_ECX + 0x1ce) = 0;
  in_ECX[0x44] = 0;
  in_ECX[0x1d1] = 0;
  *(undefined1 *)(in_ECX + 0x1d2) = 0;
  in_ECX[0x1d3] = 0;
  in_ECX[0x1d4] = 0;
  in_ECX[0x1d5] = DAT_00b3f9a8;
  in_ECX[0x1d6] = DAT_00b3f9ac;
  in_ECX[0x1d7] = DAT_00b3f9b0;
  *(undefined1 *)(in_ECX + 0x80) = 0;
  in_ECX[0x1d8] = 0;
  in_ECX[0x1d9] = 0;
  in_ECX[0x1da] = 0;
  in_ECX[0x1db] = 0;
  in_ECX[0x1dc] = 0;
  in_ECX[0x1dd] = 0;
  in_ECX[0x1de] = 0;
  in_ECX[0x1df] = 0;
  in_ECX[0x15c] = 0;
  iVar2 = in_ECX[0x1e1];
  while (iVar2 != 0) {
    iVar2 = *(int *)(in_ECX[0x1e1] + 4);
    FUN_00401f20(in_ECX[0x1e1]);
    in_ECX[0x1e1] = iVar2;
  }
  in_ECX[0x1e0] = 0;
  in_ECX[0x1e8] = 0;
  *(undefined1 *)(in_ECX + 0x1fe) = 0;
  in_ECX[0x16b] = 0;
  *(undefined1 *)((int)in_ECX + 0x7f9) = 0;
  in_ECX[0x186] = 0;
  in_ECX[0x1ff] = 0;
  in_ECX[0x200] = 0;
  *(undefined1 *)((int)in_ECX + 0x116) = 0;
  in_ECX[2] = in_ECX[2] | 0x400;
  *unaff_FS_OFFSET = iVar10;
  return;
}



void FUN_0066b150(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  LONG LVar5;
  ushort uVar6;
  undefined4 *in_ECX;
  int iVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c411c;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a73a0c;
  in_ECX[6] = &PTR_FUN_00a73a04;
  in_ECX[0x17] = &PTR_LAB_00a739bc;
  in_ECX[0x1a] = &PTR_LAB_00a73988;
  local_4 = 6;
  FUN_0065e800(uVar4);
  FUN_00668d00(0);
  if (in_ECX[0x16b] != 0) {
    FUN_004526e0();
  }
  FUN_00401f20(in_ECX[0x16b]);
  if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x16])(1);
  }
  in_ECX[0x16] = 0;
  if (in_ECX[0x16c] != 0) {
    FUN_00401f20(in_ECX[0x16c]);
  }
  if (in_ECX[0x7e] != 0) {
    FUN_004526e0();
    FUN_00401f20(in_ECX[0x7e]);
  }
  if (in_ECX[0x7f] != 0) {
    FUN_004526e0();
    FUN_00401f20(in_ECX[0x7f]);
  }
  iVar7 = in_ECX[0x7c];
  if (iVar7 != 0) {
    FUN_00532180();
    FUN_00401f20(iVar7);
  }
  iVar7 = in_ECX[0x7d];
  if (iVar7 != 0) {
    FUN_00535680();
    FUN_00401e40(iVar7 - (uint)*(byte *)(iVar7 + -1));
  }
  puVar1 = (undefined4 *)in_ECX[0x15d];
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x15d] = 0;
  }
  if (in_ECX[0x189] != 0) {
    FUN_00419f10(1);
  }
  if (in_ECX[0x79] != 0) {
    do {
      piVar8 = (int *)in_ECX[0x79];
      if ((piVar8[1] == 0) && (*piVar8 == 0)) break;
      if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar8)(1);
      }
      puVar1 = (undefined4 *)in_ECX[0x79];
      puVar2 = (undefined4 *)puVar1[1];
      if (puVar2 == (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      else {
        puVar1[1] = puVar2[1];
        *puVar1 = *puVar2;
        FUN_00401f20(puVar2);
      }
    } while (in_ECX[0x79] != 0);
    FUN_00401f20(in_ECX[0x79]);
  }
  iVar7 = in_ECX[0x17a];
  while (iVar7 != 0) {
    iVar7 = *(int *)(in_ECX[0x17a] + 4);
    FUN_00401f20(in_ECX[0x17a]);
    in_ECX[0x17a] = iVar7;
  }
  in_ECX[0x179] = 0;
  iVar7 = in_ECX[0x17c];
  while (iVar7 != 0) {
    iVar7 = *(int *)(in_ECX[0x17c] + 4);
    FUN_00401f20(in_ECX[0x17c]);
    in_ECX[0x17c] = iVar7;
  }
  in_ECX[0x17b] = 0;
  iVar7 = in_ECX[0x17f];
  while (iVar7 != 0) {
    iVar7 = *(int *)(in_ECX[0x17f] + 4);
    FUN_00401f20(in_ECX[0x17f]);
    in_ECX[0x17f] = iVar7;
  }
  iVar7 = 6;
  in_ECX[0x17e] = 0;
  if ((undefined4 *)in_ECX[0x178] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x178])(1);
  }
  if (((DAT_00b33398 == (char *)0x0) || (*DAT_00b33398 != '\0')) || (DAT_00b33398[1] != '\0')) {
    FUN_0060e430(0);
    iVar3 = in_ECX[0x172];
    if (iVar3 != 0) {
      thunk_FUN_004796f0();
      FUN_00401f20(iVar3);
    }
    iVar3 = in_ECX[0x173];
    in_ECX[0x172] = 0;
    if (iVar3 != 0) {
      FUN_00475b60();
      FUN_00401f20(iVar3);
    }
    in_ECX[0x173] = 0;
    puVar1 = (undefined4 *)in_ECX[0x174];
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      in_ECX[0x174] = 0;
    }
    DAT_00b3bb0c = 0;
    DAT_00b3bb10 = 0;
    DAT_00b3bb14 = 0;
    FUN_004384e0(DAT_00b36bb8,1,1);
    FUN_00578cf0(0);
  }
  else {
    FUN_004a7a60("PlayerCharacter::Set3D( 0 ) called before the game was over.");
  }
  iVar3 = in_ECX[0x1c2];
  while (iVar3 != 0) {
    iVar3 = *(int *)(in_ECX[0x1c2] + 4);
    FUN_00401f20(in_ECX[0x1c2]);
    in_ECX[0x1c2] = iVar3;
  }
  in_ECX[0x1c1] = 0;
  if (in_ECX[0x1c3] != 0) {
    FUN_00452230(in_ECX[0x1c3]);
  }
  iVar3 = in_ECX[0x1cc];
  if (iVar3 != 0) {
    uVar6 = 0;
    if (*(short *)(iVar3 + 10) != 0) {
      do {
        uVar4 = (uint)uVar6;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(*(int *)(iVar3 + 4) + uVar4 * 4) = 0;
      } while (uVar6 < *(ushort *)(iVar3 + 10));
    }
    *(undefined2 *)(iVar3 + 10) = 0;
    *(undefined2 *)(iVar3 + 0xc) = 0;
    if ((undefined4 *)in_ECX[0x1cc] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[0x1cc])(1);
    }
    in_ECX[0x1cc] = 0;
  }
  iVar3 = in_ECX[0x1d9];
  if (iVar3 != 0) {
    FUN_006b73e0();
    FUN_00401f20(iVar3);
    in_ECX[0x1d9] = 0;
    in_ECX[0x1d8] = 0;
  }
  piVar8 = in_ECX + 0x1da;
  do {
    if (*piVar8 != 0) {
      FUN_006b7240();
      iVar3 = *piVar8;
      if (iVar3 != 0) {
        FUN_006b73e0();
        FUN_00401f20(iVar3);
      }
      *piVar8 = 0;
    }
    piVar8 = piVar8 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  FUN_00663980();
  iVar7 = in_ECX[0x1e1];
  while (iVar7 != 0) {
    iVar7 = *(int *)(in_ECX[0x1e1] + 4);
    FUN_00401f20(in_ECX[0x1e1]);
    in_ECX[0x1e1] = iVar7;
  }
  in_ECX[0x1e0] = 0;
  puVar1 = (undefined4 *)in_ECX[0x1e6];
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x1e6] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x1e7];
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x1e7] = 0;
  }
  puVar1 = DAT_00b3bb60;
  if (DAT_00b3bb60 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(DAT_00b3bb60 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b3bb60 = (undefined4 *)0x0;
  }
  FUN_00959d60(&DAT_00b3f9a8,&DAT_00b3f9a8,0);
  puVar1 = (undefined4 *)in_ECX[0x1e7];
  local_4._0_1_ = 5;
  if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x1e6];
  local_4._0_1_ = 4;
  if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  local_4._0_1_ = 3;
  FUN_00664040();
  puVar1 = (undefined4 *)in_ECX[0x176];
  local_4._0_1_ = 2;
  if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x174];
  local_4._0_1_ = 1;
  if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x15d];
  local_4 = (uint)local_4._1_3_ << 8;
  if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  local_4 = 0xffffffff;
  FUN_00612150();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066b710(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float *pfVar8;
  int *in_ECX;
  int iVar9;
  int iVar10;
  int unaff_EBX;
  float *pfVar11;
  undefined4 *puVar12;
  int *unaff_FS_OFFSET;
  float10 fVar13;
  char unaff_retaddr;
  float fVar14;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 auStack_94 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 auStack_64 [9];
  undefined1 auStack_40 [36];
  undefined1 auStack_1c [12];
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c414e;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff14;
  *unaff_FS_OFFSET = (int)&local_c;
  fVar13 = (float10)(**(code **)(*in_ECX + 0x1e0))(uVar5);
  _DAT_00b3bac8 = (float)fVar13;
  fVar13 = (float10)FUN_004a9720();
  _DAT_00b3bac4 = (float)fVar13;
  cVar4 = (**(code **)(*in_ECX + 0x198))(0);
  if (cVar4 != '\0') {
    in_ECX[0x175] = (int)((1.0 - _DAT_00b33e9c * 0.25) * (float)in_ECX[0x175]);
  }
  if (((char)in_ECX[0x162] == '\0') && (DAT_00b3bb04 == '\0')) {
    FUN_0070fdd0(_DAT_00b3bac8);
    FUN_0070fd30(_DAT_00b3bac4);
    puVar6 = (undefined4 *)FUN_007100a0(auStack_40,auStack_64);
    puVar12 = auStack_94;
    for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
    cVar4 = FUN_005e6c10();
    if (cVar4 == '\0') {
      fVar14 = *(float *)(DAT_00b3bb0c + 0x3c);
    }
    else {
      fVar14 = 0.0;
    }
    FUN_0070fdd0(-fVar14 * 3.1415927 * 0.5);
    puVar6 = (undefined4 *)FUN_007100a0(auStack_40,auStack_64);
    puVar12 = auStack_94;
    for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
    if (cVar4 == '\0') {
      fVar14 = *(float *)(DAT_00b3bb0c + 0x40);
    }
    else {
      fVar14 = 0.0;
    }
    FUN_0070fd30(fVar14 * 3.1415927 * 0.5);
    puVar6 = (undefined4 *)FUN_007100a0(auStack_40,auStack_64);
    puVar12 = auStack_94;
    for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
    if (DAT_00b3bb0c != 0) {
      fStack_bc = *(float *)(DAT_00b3bb0c + 0x88);
      fStack_b8 = *(float *)(DAT_00b3bb0c + 0x8c);
      fStack_b4 = *(float *)(DAT_00b3bb0c + 0x90);
    }
    uVar7 = FUN_00477ec0(0);
    fVar13 = (float10)FUN_004710b0(uVar7);
    iVar9 = DAT_00b3bb14;
    if ((float)fVar13 < 1.0) {
      fStack_a4 = *(float *)(DAT_00b3bb10 + 0x8c) - fStack_b8;
      fStack_cc = _DAT_00b36bd0 * (float)fVar13;
      fStack_d4 = fStack_cc * (*(float *)(DAT_00b3bb10 + 0x88) - fStack_bc);
      fStack_d0 = fStack_a4 * fStack_cc;
      fStack_cc = fStack_cc * (*(float *)(DAT_00b3bb10 + 0x90) - fStack_b4);
      fStack_bc = fStack_d4 + fStack_bc;
      fStack_b8 = fStack_b8 + fStack_d0;
      fStack_b4 = fStack_b4 + fStack_cc;
      if (DAT_00b3bb14 != 0) {
        pfVar11 = (float *)(DAT_00b3bb14 + 0x54);
        pfVar8 = (float *)FUN_00710250(&fStack_b0,&fStack_d4,in_ECX[0x174] + 0x30);
        iVar10 = DAT_00b3bb14;
        fStack_c8 = *pfVar8 + *pfVar11;
        fStack_c4 = pfVar8[1] + *(float *)(iVar9 + 0x58);
        fStack_c0 = pfVar8[2] + *(float *)(iVar9 + 0x5c);
        *(float *)(DAT_00b3bb14 + 0x54) = fStack_c8;
        *(float *)(iVar10 + 0x58) = fStack_c4;
        *(float *)(iVar10 + 0x5c) = fStack_c0;
        FUN_00707370(0,1);
      }
    }
    if ((in_ECX[0x7c] != 0) && (iVar9 = FUN_00531f10(), iVar9 != 0)) {
      FUN_00531e90(0);
      iVar9 = (**(code **)(*in_ECX + 0x380))();
      if (iVar9 != 0) {
        DAT_00b3bb00 = 0;
        _DAT_00b14e54 = 0x3f800000;
        (**(code **)(*in_ECX + 0x380))();
        FUN_005ee1b0();
      }
    }
  }
  else {
    iVar9 = FUN_00612220();
    fStack_a0 = *(float *)(iVar9 + 0x88);
    fStack_9c = *(float *)(iVar9 + 0x8c);
    fStack_98 = *(float *)(iVar9 + 0x90);
    if (DAT_00b3bb04 == '\0') {
      FUN_0070fdd0(_DAT_00b3bac8);
      FUN_0070fd30(_DAT_00b3bac4);
      fVar13 = (float10)(**(code **)(*in_ECX + 0xec))();
      fVar13 = fVar13 * (float10)(float)in_ECX[0x175];
    }
    else {
      if (DAT_00b3bb05 == '\0') {
        if (0.0 <= _DAT_00b3bb28) {
          if (6.2831855 < _DAT_00b3bb28) {
            _DAT_00b3bb28 = _DAT_00b3bb28 - 6.2831855;
          }
        }
        else {
          _DAT_00b3bb28 = _DAT_00b3bb28 + 6.2831855;
        }
        if (_DAT_00b3bb20 <= 1.5707964) {
          if (_DAT_00b3bb20 < -1.5707964) {
            _DAT_00b3bb20 = -1.5707964;
          }
        }
        else {
          _DAT_00b3bb20 = 1.5707964;
        }
        FUN_0070fdd0(_DAT_00b3bb28 + _DAT_00b3bac8);
        fVar14 = _DAT_00b3bb20;
      }
      else {
        if (0.0 <= _DAT_00b3bb34) {
          if (6.2831855 < _DAT_00b3bb34) {
            _DAT_00b3bb34 = _DAT_00b3bb34 - 6.2831855;
          }
        }
        else {
          _DAT_00b3bb34 = _DAT_00b3bb34 + 6.2831855;
        }
        fVar13 = (float10)(**(code **)(*in_ECX + 0x1e0))();
        FUN_0070fdd0((float)(fVar13 + (float10)_DAT_00b3bb34));
        fVar14 = _DAT_00b3bb2c;
      }
      FUN_0070fd30(fVar14);
      fVar13 = (float10)(**(code **)(*in_ECX + 0xec))();
      fVar13 = fVar13 * (float10)100.0;
    }
    fStack_98 = (float)(fVar13 + (float10)fStack_98);
    puVar6 = (undefined4 *)FUN_007100a0(auStack_40,auStack_64);
    fStack_6c = -_DAT_00b3bb24;
    uStack_70 = 0;
    puVar12 = auStack_94;
    for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
    uStack_68 = 0;
    pfVar8 = (float *)FUN_007101f0(auStack_1c,&uStack_70);
    fStack_d4 = fStack_a0 + *pfVar8;
    fStack_d0 = pfVar8[1] + fStack_9c;
    fStack_cc = pfVar8[2] + fStack_98;
    fStack_c8 = fStack_d4;
    fStack_c4 = fStack_d0;
    fStack_c0 = fStack_cc;
    fStack_a4 = fStack_d0;
    FUN_0066a5e0();
    FUN_0065f080(&fStack_d4,&fStack_a0,0);
    fVar2 = fStack_cc;
    fVar1 = fStack_d0;
    fVar14 = fStack_d4;
    fStack_bc = fStack_d4;
    fStack_b8 = fStack_d0;
    fStack_b4 = fStack_cc;
    if ((DAT_00b3bccc & 1) == 0) {
      DAT_00b3bccc = DAT_00b3bccc | 1;
      puStack_8 = (undefined1 *)0x0;
      FUN_0070d590();
      _atexit(FUN_00a25850);
      puStack_8 = (undefined1 *)0xffffffff;
    }
    _DAT_00b3bbfc = fVar14;
    _DAT_00b3bc00 = fVar1;
    _DAT_00b3bc04 = fVar2;
    FUN_00707370(0,1);
    FUN_0070c340(&fStack_a0,&DAT_00b258e8);
    auStack_94[0] = _DAT_00b3bbe0;
    auStack_94[1] = DAT_00b3bbd8;
    puVar6 = &DAT_00b3bbd8;
    puVar12 = auStack_64;
    for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
    auStack_94[2] = DAT_00b3bbdc;
    auStack_94[3] = _DAT_00b3bbec;
    uStack_84 = _DAT_00b3bbe4;
    uStack_80 = _DAT_00b3bbe8;
    uStack_7c = _DAT_00b3bbf8;
    uStack_78 = _DAT_00b3bbf0;
    uStack_74 = _DAT_00b3bbf4;
  }
  if (*(short *)(unaff_EBX + 0xb6) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = **(int **)(unaff_EBX + 0xb0);
  }
  *(float *)(iVar9 + 0x54) = fStack_bc;
  *(float *)(iVar9 + 0x58) = fStack_b8;
  *(float *)(iVar9 + 0x5c) = fStack_b4;
  if (*(short *)(unaff_EBX + 0xb6) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = **(int **)(unaff_EBX + 0xb0);
  }
  puVar6 = auStack_94;
  puVar12 = (undefined4 *)(iVar9 + 0x30);
  for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar12 = puVar12 + 1;
  }
  FUN_00707370(0,0);
  iVar9 = *(int *)(DAT_00b33398 + 0x24);
  if (iVar9 != 0) {
    fStack_c0 = (float)in_ECX[0xd];
    fStack_c4 = (float)in_ECX[0xc];
    fStack_c8 = (float)in_ECX[0xb];
    FUN_006a8e10(fStack_c8,fStack_c4,fStack_c0);
    (**(code **)(*in_ECX + 0x1e0))();
    fVar13 = (float10)FUN_00986000();
    fVar14 = (float)fVar13;
    (**(code **)(*in_ECX + 0x1e0))();
    uVar7 = 0;
    fVar13 = (float10)FUN_00986300(fVar14,0);
    FUN_006a8e40((float)fVar13,fVar14,uVar7);
  }
  iVar10 = FUN_006ecc80();
  if ((iVar10 == 0) || (FUN_004d4eb0(*(undefined4 *)(unaff_EBX + 0xdc)), iVar9 == 0))
  goto LAB_0066bfa5;
  if (*(char *)(iVar9 + 0xa5) == '\0') {
    cVar4 = FUN_005e06c0(in_ECX + 0xb,iVar10,0x3f63d70a);
    if (cVar4 == '\0') {
      if (*(char *)(iVar9 + 0xa5) == '\0') goto LAB_0066bfa5;
      goto LAB_0066bf82;
    }
    uVar7 = 1;
  }
  else {
LAB_0066bf82:
    cVar4 = FUN_005e06c0(in_ECX + 0xb,iVar10,0x3f63d70a);
    if (cVar4 != '\0') goto LAB_0066bfa5;
    uVar7 = 0;
  }
  FUN_006ae720(uVar7);
LAB_0066bfa5:
  if ((DAT_00b3bccc & 2) == 0) {
    DAT_00b3bccc = DAT_00b3bccc | 2;
    _DAT_00b3bb98 = DAT_00b3f9a8;
    _DAT_00b3bb9c = DAT_00b3f9ac;
    _DAT_00b3bba0 = DAT_00b3f9b0;
  }
  if ((DAT_00b3bccc & 4) == 0) {
    DAT_00b3bccc = DAT_00b3bccc | 4;
    _DAT_00b3bb8c = DAT_00b3f9a8;
    _DAT_00b3bb90 = DAT_00b3f9ac;
    _DAT_00b3bb94 = DAT_00b3f9b0;
  }
  iVar9 = *(int *)(unaff_EBX + 0xdc);
  fStack_b0 = fStack_bc - _DAT_00b3bb98;
  fStack_ac = fStack_b8 - _DAT_00b3bb9c;
  fStack_a8 = 0.0 - _DAT_00b3bba0;
  fVar13 = (float10)FUN_009870a0();
  fVar14 = (float)fVar13 / *(float *)(iVar9 + 0x120);
  fStack_d4 = *(float *)(iVar9 + 100);
  fStack_d0 = *(float *)(iVar9 + 0x70);
  fStack_cc = *(float *)(iVar9 + 0x7c);
  fStack_c8 = fStack_d4;
  fStack_c4 = fStack_d0;
  fStack_c0 = fStack_cc;
  FUN_0043f350();
  fVar13 = (float10)FUN_00982c30();
  fVar3 = fStack_cc;
  fVar2 = fStack_d0;
  fVar1 = fStack_d4;
  if (((64.0 < ABS((float)fVar13)) ||
      (fStack_cc * _DAT_00b3bb94 + _DAT_00b3bb8c * fStack_d4 + fStack_d0 * _DAT_00b3bb90 <
       1.0 - (fVar14 - 0.6))) || (unaff_retaddr != '\0')) {
    FUN_004ebda0(fStack_bc,fStack_b8,fStack_b4,fStack_d4,fStack_d0,fStack_cc,fVar14 - 0.25);
    puVar6 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
    FUN_004ea6e0(*puVar6,puVar6[1],puVar6[2],0);
    _DAT_00b3bb98 = fStack_bc;
    _DAT_00b3bb9c = fStack_b8;
    _DAT_00b3bba0 = 0.0;
    _DAT_00b3bb8c = fVar1;
    _DAT_00b3bb90 = fVar2;
    _DAT_00b3bb94 = fVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0066c200(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  float local_8;
  float local_4;
  
  *(undefined4 *)(in_ECX + 0x660) = 0;
  FUN_0065fbb0();
  iVar7 = 0;
  do {
    uVar4 = FUN_00565be0(2,iVar7);
    FUN_00663c50(uVar4);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x15);
  FUN_00668030();
  *(undefined2 *)(in_ECX + 0x5b8) = 0;
  *(undefined1 *)(in_ECX + 0x5ba) = 0;
  iVar7 = 0xc;
  do {
    cVar3 = FUN_00565c50(2,iVar7);
    fVar2 = *(float *)(*(int *)(in_ECX + 0x5b0) + cVar3 * 4);
    while (0.0 < fVar2) {
      fVar1 = 0.0;
      local_4 = fVar2;
      if (1.0 < fVar2) {
        local_4 = 1.0;
        fVar1 = fVar2 - 1.0;
      }
      iVar5 = FUN_005f1910(iVar7);
      fVar2 = fVar1;
      if (iVar5 < 100) {
        uVar4 = FUN_00565c50(2,iVar7);
        iVar5 = FUN_00446af0(uVar4);
        if (iVar5 != 0) {
          local_8 = 0.0;
          if (iVar7 - 0xcU < 0x15) {
            cVar3 = FUN_00565c50(2,iVar7);
            local_8 = *(float *)(in_ECX + 0x130 + cVar3 * 4);
          }
          local_8 = local_8 + local_4;
          local_4 = local_8;
          if (local_8 < 0.0) {
            local_4 = 0.0;
          }
          if (iVar7 - 0xcU < 0x15) {
            cVar3 = FUN_00565c50(2,iVar7);
            *(float *)(in_ECX + 0x130 + cVar3 * 4) = local_4;
          }
          local_4 = 1.0;
          iVar6 = FUN_005e3320();
          if (iVar6 != 0) {
            local_4 = 1.0;
            if (*(int *)(iVar5 + 0x2c) - 0xcU < 0x15) {
              cVar3 = FUN_00565c50(2,*(int *)(iVar5 + 0x2c));
              local_4 = *(float *)(in_ECX + 0x7a4 + cVar3 * 4);
            }
          }
          if (local_4 < local_8) {
            FUN_00668070(iVar5,0,0);
          }
        }
        FUN_0057a6f0(iVar7);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x21);
  return;
}



void FUN_0066c3e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *in_ECX;
  int iVar6;
  
  FUN_00668440(param_1);
  FUN_00668440(param_2);
  FUN_00668440(param_3);
  iVar3 = in_ECX[0x189];
  if (iVar3 == 0) {
    iVar3 = FUN_0041b870();
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + 0x18;
    }
  }
  iVar6 = in_ECX[0x18a];
  FUN_00664700(0);
  if (in_ECX[0x18a] != 0) {
    FUN_00664700(0);
  }
  in_ECX[0x18a] = 0;
  FUN_00664700(0);
  FUN_005e02e0(0);
  sVar2 = FUN_004677f0();
  uVar4 = (uint)(ushort)(sVar2 + 1);
  FUN_005e02e0(0);
  FUN_00467270(uVar4);
  if (iVar3 != 0) {
    FUN_00664700(iVar3);
  }
  if (iVar6 != 0) {
    FUN_00664850(iVar6);
  }
  FUN_0065fbb0();
  iVar3 = 0;
  iVar6 = 0;
  while (iVar6 < DAT_00b37618) {
    cVar1 = *(char *)(iVar3 + 0x5b8 + (int)in_ECX);
    if ('\0' < cVar1) {
      *(char *)(iVar3 + 0x5b8 + (int)in_ECX) = cVar1 + -1;
    }
    iVar3 = iVar3 + 1;
    iVar6 = iVar6 + 1;
    if (3 < iVar3) {
      iVar3 = 0;
    }
  }
  in_ECX[0x61] = in_ECX[0x61] - DAT_00b37618;
  FUN_0065d560();
  in_ECX[0x16f] = 0;
  if (in_ECX[0x61] < DAT_00b37618) {
    *(undefined1 *)(in_ECX + 0x77) = 0;
  }
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  if (iVar3 != 0) {
    FUN_00468ad0(5);
    FUN_00519c10();
    uVar5 = FUN_009828c0();
    FUN_00519c50(uVar5);
  }
  FUN_00447300();
  FUN_006772e0();
  if (DAT_00b14ea8 != '\0') {
    FUN_006684b0();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0066c580(char param_1)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  
  iVar1 = in_ECX[0x162];
  *(bool *)(in_ECX + 0x162) = param_1 == '\0';
  if (param_1 == '\0') {
    cVar2 = (**(code **)(*in_ECX + 0x198))(0);
    if (cVar2 != '\0') {
      _DAT_00b3bb24 = _DAT_00b36b80;
    }
  }
  if ((DAT_00b3bb04 == '\0') && (in_ECX[0x174] != 0)) {
    DAT_00b14e4d = 1;
    FUN_0066b710(0);
    FUN_00664f70((char)in_ECX[0x162] == '\0');
  }
  return (char)iVar1 == param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_0066c600(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x589) = 1;
  bVar1 = NAN(_DAT_00b3bb24);
  bVar2 = _DAT_00b36b78 < _DAT_00b3bb24;
  bVar3 = _DAT_00b36b78 == _DAT_00b3bb24;
  if (!bVar2 && bVar3 == 0) {
    _DAT_00b3bb24 = _DAT_00b36b78;
  }
  if (*(char *)(in_ECX + 0x588) == '\0') {
    *(undefined1 *)(in_ECX + 0x58a) = 1;
    uVar4 = FUN_0066c580(0);
    return uVar4;
  }
  return (ushort)bVar2 << 8 | (ushort)(NAN(_DAT_00b36b78) || bVar1) << 10 | (ushort)bVar3 << 0xe;
}



void FUN_0066c650(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x589) != '\0') {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2d0))();
    if (iVar1 == -1) {
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2e4))();
      if (iVar1 == 0) {
        *(undefined1 *)(in_ECX + 0x589) = 0;
        if (*(char *)(in_ECX + 0x58a) != '\0') {
          FUN_0066c580(1);
        }
        *(undefined1 *)(in_ECX + 0x58a) = 0;
      }
    }
  }
  return;
}



void FUN_0066c6a0(int *param_1)

{
  bool bVar1;
  char cVar2;
  int in_ECX;
  
  if (param_1 != (int *)0x0) {
    bVar1 = false;
    do {
      if (*param_1 == 0) break;
      cVar2 = FUN_00669690(*param_1,0,1);
      if (cVar2 != '\0') {
        bVar1 = true;
      }
      param_1 = (int *)param_1[1];
    } while (param_1 != (int *)0x0);
    if (bVar1) {
      FUN_0052f6d0(in_ECX + 0x5e4);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066c6f0(int *param_1,float param_2,char param_3)

{
  float fVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 in_EAX;
  int iVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  double *pdVar9;
  int *in_ECX;
  float10 fVar10;
  float10 fVar11;
  undefined8 uStack_18;
  float fStack_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 == 1.0) {
    in_ECX[0x166] = 0x42960000;
  }
  if (DAT_00b3bb04 != '\0') {
    _DAT_00b3bb08 = 0;
    DAT_00b3bb05 = 0;
    DAT_00b3bb04 = '\0';
    FUN_00664f70(CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),
                                          (ushort)(1.0 < param_2) << 8 | (ushort)NAN(param_2) << 10
                                          | (ushort)(param_2 == 1.0) << 0xe) >> 8),
                          (char)in_ECX[0x162] == '\0'));
  }
  iVar5 = FUN_006ecc80();
  if (iVar5 == 0) {
LAB_0066c77b:
    iVar5 = FUN_004d6670();
    iVar6 = FUN_004d6670();
  }
  else {
    FUN_006ecc80();
    cVar4 = FUN_004c97f0();
    if (cVar4 == '\0') goto LAB_0066c77b;
    iVar5 = FUN_006ecc80();
    iVar6 = FUN_006ecc80();
  }
  if (iVar5 != iVar6) {
    return;
  }
  local_8 = *(float *)(DAT_00b3bb0c + 0x8c);
  local_c = *(float *)(DAT_00b3bb0c + 0x88);
  local_4 = *(float *)(DAT_00b3bb0c + 0x90);
  bVar2 = false;
  iVar5 = (**(code **)(*param_1 + 0x154))();
  if (iVar5 == 0) goto LAB_0066cbc4;
  piVar7 = (int *)(**(code **)(*param_1 + 0x134))(0);
  if (piVar7 == (int *)0x0) {
    pdVar9 = (double *)(**(code **)(*param_1 + 0x174))();
    uStack_18 = *pdVar9;
    fStack_10 = *(float *)(pdVar9 + 1);
    fVar10 = (float10)(**(code **)(*param_1 + 0xec))();
    fStack_10 = (float)(fVar10 * (float10)(float)in_ECX[0x175] + (float10)fStack_10);
    local_c = local_c - (float)uStack_18;
    local_8 = local_8 - uStack_18._4_4_;
    local_4 = local_4 - fStack_10;
  }
  else {
    if ((*(byte *)(piVar7 + 6) & 1) != 0) {
      *(ushort *)(piVar7 + 6) = *(ushort *)(piVar7 + 6) & 0xfffe;
      FUN_00707370(0,0);
      (**(code **)(*piVar7 + 0x78))();
      *(ushort *)(piVar7 + 6) = *(ushort *)(piVar7 + 6) | 1;
    }
    if ((DAT_00b3bcd1 != '\0') && (param_2 < 1.0)) {
      DAT_00b3bcd1 = '\0';
    }
    uStack_18 = *(double *)(piVar7 + 8);
    fStack_10 = _DAT_00b14f28 + (float)piVar7[10];
    local_c = local_c - (float)piVar7[8];
    local_8 = local_8 - (float)piVar7[9];
    local_4 = local_4 - fStack_10;
    if ((*(int *)(DAT_00b333cc + 0xdc) != 0) && (bVar2 = true, DAT_00b3bcd1 == '\0')) {
      uStack_18 = (double)CONCAT44(piVar7[9],piVar7[0xb]);
      fVar10 = (float10)FUN_00404e30();
      uStack_18 = (double)(fVar10 * (float10)(float)uStack_18);
      fVar10 = (float10)FUN_00404c90();
      uStack_18._0_4_ = (float)((float10)uStack_18 / fVar10);
      fVar10 = (float10)FUN_009870a0();
      uStack_18._0_4_ = (float)fVar10 * 100.0;
      pfVar8 = (float *)FUN_00403c00();
      if (*pfVar8 < (float)uStack_18 != (*pfVar8 == (float)uStack_18)) {
        pfVar8 = (float *)FUN_00403c00();
        uStack_18._0_4_ = *pfVar8;
      }
      fVar1 = param_2;
      if (1.0 <= param_2) {
        fVar1 = 1.0;
      }
      uStack_18._0_4_ = (1.0 - fVar1) * ((float)in_ECX[0x166] - (float)uStack_18) + (float)uStack_18
      ;
      FUN_00411160((float)uStack_18,0);
      FUN_007b70e0((float)uStack_18);
      if (!NAN(param_2) && 1.0 < param_2 != (param_2 == 1.0)) {
        DAT_00b3bcd1 = '\x01';
      }
    }
  }
  if (param_3 == '\0') {
    uStack_18 = (double)local_4;
    FUN_00404c90();
    fVar10 = (float10)FUN_00985870();
    fVar11 = (float10)FUN_004a9720();
    fVar1 = ABS((float)((float10)(float)fVar10 - fVar11));
    if (fVar1 <= _DAT_00b14f18 * 0.017453292) {
      if (DAT_00b3bcd0 != '\0') goto LAB_0066ca53;
    }
    else {
      DAT_00b3bcd0 = '\x01';
LAB_0066ca53:
      pfVar8 = (float *)FUN_00403c00();
      FUN_0065abc0((float)((float10)(float)fVar10 - fVar11) * *pfVar8);
      pfVar8 = (float *)FUN_00403c00();
      if (fVar1 < *pfVar8 * 0.017453292) {
        DAT_00b3bcd0 = '\0';
      }
    }
    iVar5 = (**(code **)(*in_ECX + 0x18c))();
    if (iVar5 == 0) {
      (**(code **)(*in_ECX + 0x1e4))(param_1);
    }
    else {
      uStack_18 = (double)CONCAT44(-local_8,-local_c);
      fStack_10 = -local_4;
      fVar10 = (float10)FUN_00683cb0(&uStack_18);
      uStack_18 = (double)(float)fVar10;
      fVar10 = (float10)FUN_0065abb0();
      in_ECX[0x187] = (int)(float)((float10)uStack_18 - fVar10);
    }
    fVar10 = (float10)(**(code **)(*in_ECX + 0x1e0))();
    _DAT_00b3bac8 = (float)fVar10;
    fVar10 = (float10)FUN_004a9720();
    _DAT_00b3bac4 = (float)fVar10;
    FUN_0066c580(1);
    FUN_005e05f0(0x3f);
    *(undefined1 *)(in_ECX + 0x162) = 1;
    FUN_005fcab0(0x3f800000,0x3f800000);
    *(undefined1 *)(in_ECX + 0x162) = 0;
    uVar3 = _DAT_00b33e9c;
    FUN_004d8370();
    FUN_00476d10(in_ECX,uVar3,0xbf800000);
    FUN_00476d10(in_ECX,_DAT_00b33e9c,0xbf800000);
    FUN_00603ca0(0);
    (**(code **)(*in_ECX + 0xfc))();
  }
  if (bVar2) {
    return;
  }
LAB_0066cbc4:
  FUN_00982c30();
  iVar5 = FUN_009828c0();
  FUN_00664a40((float)iVar5);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066cc40(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *in_ECX;
  int iVar10;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ad061;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  pcVar1 = *(code **)(*in_ECX + 0x1bc);
  in_ECX[0x1ae] = in_ECX[0x1ae] + 1;
  iVar10 = 0;
  *(undefined1 *)(in_ECX + 0x1c7) = 1;
  (*pcVar1)(0,uVar4);
  *(undefined1 *)((int)in_ECX + 0x589) = 1;
  if (_DAT_00b3bb24 < _DAT_00b36b78) {
    _DAT_00b3bb24 = _DAT_00b36b78;
  }
  if ((char)in_ECX[0x162] == '\0') {
    *(undefined1 *)((int)in_ECX + 0x58a) = 1;
    FUN_0066c580(0);
  }
  iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))();
  if (iVar5 == 6) {
    FUN_005f4ae0(0);
  }
  (**(code **)(*(int *)in_ECX[0x16] + 0x178))(0);
  (**(code **)(*(int *)in_ECX[0x16] + 0x49c))();
  iVar5 = FUN_005e0380();
  if (iVar5 != 0) {
    FUN_005e0380();
    cVar3 = FUN_00567770();
    if (cVar3 != '\0') {
      (**(code **)(*in_ECX + 0x30c))();
    }
  }
  iVar5 = FUN_00401f00(0x3c);
  local_c = 0;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00568e10();
  }
  local_c = -1;
  FUN_005661e0(0x1b);
  *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 6;
  iVar6 = FUN_00401f00(0xc);
  local_c = 1;
  if (iVar6 != 0) {
    iVar10 = FUN_005696b0();
  }
  local_c = -1;
  FUN_00569750(0);
  FUN_005697f0(in_ECX);
  FUN_00565e00(iVar10);
  if (iVar10 != 0) {
    FUN_00569730();
    FUN_00401f20(iVar10);
  }
  iVar10 = FUN_00401f00(0xc);
  local_c = 2;
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = FUN_00569e40();
  }
  local_c = -1;
  FUN_00565ec0(iVar10);
  if (iVar10 != 0) {
    FUN_0060d0a0();
    FUN_00401f20(iVar10);
  }
  *(undefined4 *)(iVar5 + 0x18) = 0x1f;
  FUN_00569e90(0);
  FUN_00569ec0(uStack_4);
  FUN_00468230(0);
  (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
  piVar2 = (int *)in_ECX[0x16];
  if (piVar2[2] != 0) {
    uVar7 = (**(code **)(*piVar2 + 0x390))();
    uVar8 = (**(code **)(*piVar2 + 0xc0))(uVar7);
    uVar9 = (**(code **)(*piVar2 + 0xcc))(uVar8);
    FUN_004268b0(piVar2[2],piVar2[1],uVar9,uVar8,uVar7);
  }
  (**(code **)(*(int *)in_ECX[0x16] + 1000))(unaff_retaddr,param_2,param_1);
  FUN_005f1590(iVar5,0,1);
  FUN_005f8000();
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066ceb0(int param_1)

{
  code *pcVar1;
  int *in_ECX;
  
  *(undefined1 *)((int)in_ECX + 0x589) = 1;
  if (_DAT_00b3bb24 < _DAT_00b36b78) {
    _DAT_00b3bb24 = _DAT_00b36b78;
  }
  if ((char)in_ECX[0x162] == '\0') {
    *(undefined1 *)((int)in_ECX + 0x58a) = 1;
    FUN_0066c580(0);
  }
  pcVar1 = *(code **)(*in_ECX + 0x1bc);
  in_ECX[0x78] = param_1;
  *(undefined1 *)(in_ECX + 0x1c7) = 1;
  (*pcVar1)(0);
  FUN_00612240(param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066cf20(void)

{
  code *pcVar1;
  int *in_ECX;
  
  *(undefined1 *)((int)in_ECX + 0x589) = 1;
  if (_DAT_00b3bb24 < _DAT_00b36b78) {
    _DAT_00b3bb24 = _DAT_00b36b78;
  }
  if ((char)in_ECX[0x162] == '\0') {
    *(undefined1 *)((int)in_ECX + 0x58a) = 1;
    FUN_0066c580(0);
  }
  pcVar1 = *(code **)(*in_ECX + 0x1bc);
  *(undefined1 *)((int)in_ECX + 0x71d) = 1;
  (*pcVar1)(0);
  FUN_00611d70();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066cf80(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  DWORD DVar3;
  int in_ECX;
  
  FUN_00612110(param_1);
  if ((*(int *)(DAT_00b33b00 + 0x44) == 0x1ffff000) || (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)
     ) {
    FUN_00424770();
    _DAT_00b3bb08 = 0;
    DAT_00b3bad4 = 0;
    *(undefined4 *)(in_ECX + 0x700) = 0;
    DAT_00b3bad0 = 0;
    *(undefined4 *)(in_ECX + 0x7a0) = 0xffffffff;
    DAT_00b3bb05 = 0;
    DAT_00b3bb04 = 0;
    *(undefined1 *)(in_ECX + 0x116) = 0;
    if (*(int *)(in_ECX + 0x5b0) != 0) {
      FUN_00401f20(*(int *)(in_ECX + 0x5b0));
      *(undefined4 *)(in_ECX + 0x5b0) = 0;
      uVar1 = FUN_00401f00(0x54);
      *(undefined4 *)(in_ECX + 0x5b0) = uVar1;
      iVar2 = 0;
      do {
        *(undefined4 *)(iVar2 + *(int *)(in_ECX + 0x5b0)) = 0;
        iVar2 = iVar2 + 4;
      } while (iVar2 < 0x54);
    }
    if (*(int *)(in_ECX + 0x5ac) != 0) {
      FUN_004526e0();
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x5ac));
      *(undefined4 *)(in_ECX + 0x5ac) = 0;
    }
    while (DAT_00b3bb48 != 0) {
      iVar2 = *(int *)(DAT_00b3bb48 + 4);
      FUN_00401f20(DAT_00b3bb48);
      DAT_00b3bb48 = iVar2;
    }
    DAT_00b3bb44 = 0;
    FUN_0068e0b0(*(undefined4 *)(in_ECX + 0x1e4));
    if (((param_1 & 0x2000000) != 0) && (*(int *)(in_ECX + 0x5cc) != 0)) {
      FUN_00473aa0(in_ECX);
    }
    DVar3 = GetTickCount();
    *(DWORD *)(in_ECX + 0x710) = DVar3;
    FUN_0066a670();
    iVar2 = *(int *)(in_ECX + 0x784);
    while (iVar2 != 0) {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x784) + 4);
      FUN_00401f20(*(int *)(in_ECX + 0x784));
      *(int *)(in_ECX + 0x784) = iVar2;
    }
    *(undefined4 *)(in_ECX + 0x780) = 0;
    iVar2 = FUN_00582160(0,1);
    *(undefined4 *)(iVar2 + 0x10c) = 0;
    iVar2 = FUN_00582160(0,1);
    *(undefined4 *)(iVar2 + 0x110) = 0;
    iVar2 = FUN_004473a0(DAT_00b37c88);
    if (iVar2 != 0) {
      FUN_0051bed0(0);
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0066d120(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  undefined1 auStack_184 [8];
  float fStack_17c;
  char cStack_175;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  int *piStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined1 auStack_140 [4];
  int iStack_13c;
  undefined4 uStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [36];
  uint uStack_8c;
  float fStack_6c;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009c417e;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_184;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffe70;
  *unaff_FS_OFFSET = (int)&local_1c;
  if ((((DAT_00b14ea0 == '\0') && (cVar1 = (**(code **)(*param_1 + 400))(uVar2), cVar1 != '\0')) &&
      (cVar1 = (**(code **)(*param_1 + 0x198))(0), cVar1 == '\0')) ||
     ((param_1 == (int *)0x0 || (iVar3 = FUN_006ecc80(), iVar3 == 0)))) goto LAB_0066d8fb;
  uVar4 = (**(code **)(*param_1 + 0x154))();
  piStack_160 = (int *)FUN_004803c0(uVar4);
  if (piStack_160 == (int *)0x0) {
    if (param_2 == 2) {
      *(int **)(in_ECX + 0x578) = param_1;
      *(undefined4 *)(in_ECX + 0x584) = param_3;
      *(undefined4 *)(in_ECX + 0x57c) = 2;
    }
    goto LAB_0066d8fb;
  }
  iVar3 = FUN_006fa970(uVar4);
  if ((iVar3 == 0) || ((*(uint *)(iVar3 + 0xc) & 8) == 0)) {
    cVar1 = (**(code **)(*param_1 + 400))();
    cStack_175 = '\0';
    if (cVar1 != '\0') goto LAB_0066d1f8;
  }
  else {
LAB_0066d1f8:
    cStack_175 = '\x01';
  }
  *(undefined4 *)(in_ECX + 0x584) = param_3;
  *(int **)(in_ECX + 0x578) = param_1;
  *(int *)(in_ECX + 0x57c) = param_2;
  FUN_0047f9f0();
  fStack_15c = 0.0;
  if (cStack_175 == '\0') {
    (**(code **)(*piStack_160 + 0xa8))(auStack_d0);
    fVar9 = (float10)FUN_0047de30();
    fStack_15c = (float)fVar9;
  }
  else {
    FUN_008a4000(uVar4,auStack_d0,&fStack_15c);
  }
  FUN_005f11f0(&fStack_158,&fStack_14c);
  FUN_006ecc80();
  cVar1 = FUN_004c97f0();
  piVar5 = DAT_00b35c24;
  if (cVar1 != '\0') {
    piVar5 = (int *)FUN_00424180();
  }
  if ((*(int *)(in_ECX + 0x57c) == 1) && (piVar5 != (int *)0x0)) {
    cVar1 = FUN_005796f0();
    if ((cVar1 == '\0') || (DAT_00b365a8 == 0)) {
      FUN_004f5ea0();
      iVar3 = FUN_0065abe0(&fStack_17c);
      uStack_8c = (uint)*(ushort *)(iVar3 + 2) << 0x10 | 0x19;
      FUN_004f8840(&fStack_158);
      fStack_174 = *(float *)(in_ECX + 0x584);
      fStack_17c = fStack_174 * fStack_14c;
      fStack_170 = fStack_148 * fStack_174;
      fStack_174 = fStack_174 * fStack_144;
      fStack_16c = fStack_17c;
      fStack_168 = fStack_170;
      fStack_164 = fStack_174;
      FUN_00663ff0(&fStack_16c);
      cVar1 = (**(code **)(*piVar5 + 0x88))(auStack_b0);
      if ((cVar1 == '\0') || (iStack_13c = FUN_00889cd0(), iStack_13c == 0)) goto LAB_0066d4bc;
      fStack_6c = fStack_6c * *(float *)(in_ECX + 0x584);
      *(float *)(in_ECX + 0x584) = fStack_6c;
      fStack_17c = fStack_158 + fStack_6c * fStack_14c;
      fStack_170 = fStack_154 + fStack_148 * fStack_6c;
      fStack_174 = fStack_150 + fStack_6c * fStack_144;
      fStack_16c = fStack_17c;
      fStack_168 = fStack_170;
      fStack_164 = fStack_174;
      FUN_0047dd50(&fStack_16c);
    }
    else {
      FUN_00579640(&fStack_100);
      cVar1 = FUN_0045a500();
      if (cVar1 == '\0') {
        fStack_170 = fStack_100 - fStack_158;
        fStack_174 = fStack_fc - fStack_154;
        fStack_17c = fStack_f8 - fStack_150;
        fStack_16c = fStack_170;
        fStack_168 = fStack_174;
        fStack_164 = fStack_17c;
        fVar9 = (float10)FUN_00404c90();
        *(float *)(in_ECX + 0x584) = (float)fVar9;
      }
      FUN_0047dd50(&fStack_100);
      if (DAT_00b365a8 == 0) {
        iStack_13c = 0;
      }
      else {
        iStack_13c = *(int *)(DAT_00b365a8 + 8);
      }
    }
  }
  else {
LAB_0066d4bc:
    FUN_0047dcd0(auStack_d0);
    if (cStack_175 != '\0') {
      pfVar8 = (float *)FUN_007101f0(&fStack_16c,&DAT_00b258e8);
      fStack_f0 = *pfVar8;
      fStack_ec = pfVar8[1];
      fStack_e8 = pfVar8[2];
      FUN_0047f950(&fStack_100);
      fStack_100 = fStack_100 + fStack_f0;
      fStack_fc = fStack_fc + fStack_ec;
      fStack_f8 = fStack_f8 + fStack_e8;
      fStack_f4 = fStack_f4 + fStack_e4;
      FUN_0047dcd0(&fStack_100);
    }
    cVar1 = FUN_0045a500();
    if (cVar1 == '\0') {
      uVar4 = FUN_0047f950(&fStack_100);
      FUN_0043f3e0(&fStack_16c,uVar4);
      fStack_17c = fStack_16c - fStack_158;
      fStack_170 = fStack_168 - fStack_154;
      fStack_174 = fStack_164 - fStack_150;
      fStack_16c = fStack_17c;
      fStack_168 = fStack_170;
      fStack_164 = fStack_174;
      fVar9 = (float10)FUN_00404c90();
      *(float *)(in_ECX + 0x584) = (float)fVar9;
    }
    iStack_13c = piStack_160[2];
  }
  iVar3 = iStack_13c;
  if (*(int *)(iStack_13c + 8) != 0) {
    piVar5 = (int *)(iStack_13c + 0x50);
    iVar6 = (**(code **)(**(int **)(iStack_13c + 0x50) + 8))();
    if ((iVar6 != 7) && (iVar6 = (**(code **)(*(int *)*piVar5 + 8))(), iVar6 != 6)) {
      iVar6 = FUN_0065a2c0();
      if (iVar6 != 0) {
        fVar9 = (float10)FUN_008913c0();
        fStack_17c = (float)fVar9 * 6.99904 + 5.0;
        if (*(float *)(in_ECX + 0x584) < fStack_17c) {
          *(float *)(in_ECX + 0x584) = fStack_17c;
        }
      }
      if (*(int *)(in_ECX + 0x57c) == 3) {
        if (cStack_175 == '\0') {
          puVar7 = (undefined4 *)FUN_00403c00();
          uStack_110 = *puVar7;
          pfVar8 = (float *)FUN_00403c00();
          fStack_10c = *pfVar8;
          puVar7 = (undefined4 *)FUN_00403c00();
          uStack_104 = *puVar7;
          pfVar8 = (float *)FUN_00403c00();
          fStack_108 = *pfVar8;
        }
        else {
          puVar7 = (undefined4 *)FUN_00403c00();
          uStack_110 = *puVar7;
          pfVar8 = (float *)FUN_00403c00();
          fStack_10c = *pfVar8;
          puVar7 = (undefined4 *)FUN_00403c00();
          uStack_104 = *puVar7;
          pfVar8 = (float *)FUN_00403c00();
          fStack_108 = *pfVar8;
        }
      }
      else {
        fStack_174 = 1.0;
        fStack_170 = 1.0;
        cVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 400))();
        if (cVar1 == '\0') {
          puVar7 = (undefined4 *)FUN_00497340(&piStack_160);
          if (((byte)*puVar7 & 0x3f) == 0xe) {
            fStack_170 = 0.1;
            fVar9 = (float10)0.5;
            goto LAB_0066d78c;
          }
        }
        else {
          fVar9 = (float10)FUN_0089da90();
          fStack_17c = (float)fVar9;
          if ((fStack_17c <= 0.0) || (fStack_15c <= fStack_17c)) {
            fVar9 = (float10)FUN_00536460(iVar3);
            fVar9 = fVar9 * (float10)fStack_174;
          }
          else {
            fStack_174 = 1.0 - fStack_17c / fStack_15c;
            fVar9 = (float10)FUN_00536460(iVar3);
            fVar9 = fVar9 * (float10)fStack_174;
          }
LAB_0066d78c:
          fStack_174 = (float)fVar9;
        }
        uStack_110 = 0x3f000000;
        fStack_10c = fStack_170 * 0.2;
        uStack_104 = 0x3f400000;
        fStack_108 = fStack_174 * 1000.0;
      }
      FUN_0047f950(&fStack_e0);
      iVar3 = *piVar5;
      fStack_e0 = fStack_e0 - *(float *)(iVar3 + 0x40);
      fStack_dc = fStack_dc - *(float *)(iVar3 + 0x44);
      fStack_d8 = fStack_d8 - *(float *)(iVar3 + 0x48);
      fStack_d4 = fStack_d4 - *(float *)(iVar3 + 0x4c);
      pfVar8 = &fStack_e0;
      iVar3 = *piVar5 + 0x10;
      FUN_0047f950(auStack_c0);
      FUN_0088fd90(iVar3,pfVar8);
      FUN_0047dcd0(auStack_c0);
      FUN_006ecc80();
      piVar5 = (int *)FUN_004440c0();
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x58))();
      }
      fStack_17c = (float)FUN_00401f00(0x10);
      uStack_14 = 0;
      if (fStack_17c == 0.0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0047de90(auStack_140);
      }
      uStack_14 = 0xffffffff;
      FUN_0075fa90(uVar4);
      iVar3 = **(int **)(in_ECX + 0x574);
      FUN_006ecc80();
      uVar4 = FUN_004440c0();
      (**(code **)(iVar3 + 0x5c))(uVar4);
      FUN_006ecc80();
      piVar5 = (int *)FUN_004440c0();
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x58))();
      }
      goto LAB_0066d8fb;
    }
  }
  FUN_0066a670();
LAB_0066d8fb:
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0066d930(void)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int in_ECX;
  int iVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  undefined1 auStack_334 [4];
  int *local_330;
  int *local_32c;
  int *local_328;
  int *local_324;
  float local_320;
  int *local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float fStack_308;
  float fStack_304;
  float local_300;
  int *local_2fc;
  int *local_2f8;
  float fStack_2f4;
  int *piStack_2f0;
  int *piStack_2ec;
  int *piStack_2e8;
  undefined4 uStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  undefined1 auStack_2d0 [20];
  float fStack_2bc;
  undefined1 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_28c;
  undefined4 uStack_280;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined1 local_250 [32];
  undefined1 local_230;
  uint local_22c;
  undefined4 local_20c;
  undefined4 local_200;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined1 *local_1d8;
  undefined1 local_1d0 [16];
  int iStack_1c0;
  int iStack_1bc;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009c41bb;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_334;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffcc0;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar10 = 0;
  if ((*(int *)(in_ECX + 0x578) != 0) && (*(int *)(in_ECX + 0x574) != 0)) {
    iVar6 = *(int *)(*(int *)(in_ECX + 0x574) + 8);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar6 + 0x18);
    }
    if (((iVar6 != 0) && (*(int *)(iVar6 + 0xc) != 0)) &&
       ((local_31c = (int *)FUN_0065a2c0(uVar4), local_31c == (int *)0x0 ||
        ((iVar6 = local_31c[0xee], iVar5 = FUN_0065de60(), iVar6 != iVar5 || (local_31c[0xed] != 1))
        )))) {
      local_324 = (int *)(*(float *)(in_ECX + 0x584) + 0.0);
      FUN_005f11f0(&local_30c,&local_318);
      local_20c = 0x3f800000;
      local_230 = 0;
      local_22c = 0;
      local_200 = 0;
      local_1e0 = 0;
      local_1dc = 0;
      local_1d8 = (undefined1 *)0x0;
      local_1f0 = DAT_00ba7a40;
      uStack_1ec = DAT_00ba7a44;
      uStack_1e8 = DAT_00ba7a48;
      uStack_1e4 = uRam00ba7a4c;
      if ((*(int *)(in_ECX + 0x574) == 0) ||
         (iVar6 = *(int *)(*(int *)(in_ECX + 0x574) + 8), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar6 + 0x18);
      }
      if (iVar6 == 0) {
        local_32c = (int *)0x0;
      }
      else {
        local_32c = *(int **)(iVar6 + 0xc);
      }
      if (((local_32c == (int *)0x0) || (iVar6 = local_32c[2], iVar6 == 0)) || (iVar6 == -0x14)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar6 + 0x30);
      }
      iVar6 = FUN_0065abe0(&local_330);
      local_22c = (uint)*(ushort *)(iVar6 + 2) << 0x10 | uVar4 & 0xffff;
      FUN_004f8840(&local_30c);
      local_320 = (float)local_324 * local_318;
      local_328 = (int *)(local_314 * (float)local_324);
      local_330 = (int *)((float)local_324 * local_310);
      local_300 = local_320;
      local_2fc = local_328;
      local_2f8 = local_330;
      FUN_00663ff0(&local_300);
      FUN_00538c00();
      local_1d8 = local_1d0;
      local_14 = 0;
      local_1dc = 0;
      FUN_006ecc80();
      cVar3 = FUN_004c97f0();
      piVar7 = DAT_00b35c24;
      if (cVar3 != '\0') {
        piVar7 = (int *)FUN_00424180();
      }
      cVar3 = (**(code **)(*piVar7 + 0x88))(local_250);
      if (cVar3 != '\0') {
        iVar6 = 0;
        local_320 = 1.0;
        do {
          if (iStack_1bc <= iVar10) break;
          fStack_2bc = *(float *)(iStack_1c0 + 0x14 + iVar6);
          iVar5 = FUN_004806e0(*(undefined4 *)(iStack_1c0 + 0x20 + iVar6));
          if (((iVar5 != 0) && (iVar5 = FUN_004dc270(iVar5), iVar5 != 0)) &&
             (iVar5 != *(int *)(in_ECX + 0x578))) {
            local_320 = fStack_2bc;
          }
          iVar10 = iVar10 + 1;
          iVar6 = iVar6 + 0x30;
        } while (local_320 == 1.0);
        local_330 = (int *)(local_320 * (float)local_324 - 0.0);
        local_324 = local_330;
        if ((float)local_330 < 0.0) {
          local_324 = (int *)0x0;
        }
        if (*(int *)(in_ECX + 0x57c) == 3) {
          *(int **)(in_ECX + 0x584) = local_324;
        }
      }
      piVar7 = local_32c;
      if (*(int *)(in_ECX + 0x57c) == 3) {
        uStack_28c = 0x3f800000;
        uStack_2b0 = 0;
        uStack_280 = 0;
        uStack_260 = 0;
        uStack_25c = 0;
        uStack_258 = 0;
        uStack_270 = DAT_00ba7a40;
        uStack_26c = DAT_00ba7a44;
        uStack_268 = DAT_00ba7a48;
        uStack_264 = uRam00ba7a4c;
        if (((local_32c == (int *)0x0) || (iVar10 = local_32c[2], iVar10 == 0)) || (iVar10 == -0x14)
           ) {
          uStack_2ac = 0;
        }
        else {
          uStack_2ac = *(undefined4 *)(iVar10 + 0x30);
        }
        FUN_004f8840(&local_30c);
        iVar10 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x154))();
        local_300 = *(float *)(iVar10 + 0x20);
        local_2fc = *(int **)(iVar10 + 0x24);
        local_2f8 = *(int **)(iVar10 + 0x28);
        FUN_004f90c0(&local_300);
        iVar10 = FUN_006ecc80();
        if (iVar10 == 0) {
LAB_0066dd8b:
          if (*(int *)(in_ECX + 0x57c) != 3) goto LAB_0066dd98;
          goto LAB_0066de3c;
        }
        FUN_006ecc80();
        cVar3 = FUN_004c97f0();
        piVar7 = DAT_00b35c24;
        if (cVar3 != '\0') {
          piVar7 = (int *)FUN_00424180();
        }
        cVar3 = (**(code **)(*piVar7 + 0x88))(auStack_2d0);
        piVar7 = local_32c;
        if (cVar3 == '\0') goto LAB_0066dd8b;
        uVar8 = FUN_00889cb0();
        piVar9 = (int *)FUN_004dc270(uVar8);
        piVar7 = local_32c;
        if (((piVar9 == (int *)0x0) || (*(int **)(in_ECX + 0x578) == piVar9)) ||
           (cVar3 = (**(code **)(*piVar9 + 400))(), piVar7 = local_32c, cVar3 != '\0'))
        goto LAB_0066dd8b;
LAB_0066dd64:
        FUN_0066a670();
      }
      else {
LAB_0066dd98:
        iVar10 = *(int *)(in_ECX + 0x574);
        if (iVar10 != 0) {
          iVar6 = *(int *)(iVar10 + 8);
          if (iVar6 != 0) {
            fStack_2e0 = *(float *)(iVar6 + 0x30);
            fStack_2dc = *(float *)(iVar6 + 0x34);
            fStack_2d8 = *(float *)(iVar6 + 0x38);
            fStack_2d4 = *(float *)(iVar6 + 0x3c);
          }
          if ((iVar10 != 0) && (iVar10 = *(int *)(iVar10 + 8), iVar10 != 0)) {
            piStack_2f0 = *(int **)(iVar10 + 0x20);
            piStack_2ec = *(int **)(iVar10 + 0x24);
            piStack_2e8 = *(int **)(iVar10 + 0x28);
            uStack_2e4 = *(undefined4 *)(iVar10 + 0x2c);
          }
        }
        (**(code **)(*piVar7 + 0xac))(auStack_2d0);
        FUN_0088fcc0(auStack_2d0,&piStack_2f0);
        local_300 = local_300 - fStack_2e0;
        local_2fc = (int *)((float)local_2fc - fStack_2dc);
        local_2f8 = (int *)((float)local_2f8 - fStack_2d8);
        fStack_2f4 = fStack_2f4 - fStack_2d4;
        fStack_2e0 = SQRT((float)local_2f8 * (float)local_2f8 +
                          (float)local_2fc * (float)local_2fc + local_300 * local_300);
        local_330 = (int *)(fStack_2e0 * 6.99904);
        if (96.0 < (float)local_330) goto LAB_0066dd64;
LAB_0066de3c:
        local_330 = (int *)((float)local_324 * local_318);
        local_328 = (int *)(local_314 * (float)local_324);
        piVar7 = (int *)(local_310 * (float)local_324);
        local_320 = (float)local_330 + local_30c;
        local_32c = (int *)(fStack_308 + (float)local_328);
        local_324 = (int *)(fStack_304 + (float)piVar7);
        piVar9 = piVar7;
        piVar2 = local_330;
        local_300 = local_320;
        local_2fc = local_32c;
        local_2f8 = local_324;
        if ((local_31c == (int *)0x0) ||
           (piVar9 = local_330, piVar2 = local_328, local_31c = piVar7, piStack_2f0 = local_330,
           piStack_2ec = local_328, piStack_2e8 = piVar7, 0.0 <= local_310)) {
LAB_0066dfaf:
          local_328 = piVar2;
          local_330 = piVar9;
          FUN_00605dc0(&local_300);
        }
        else {
          piStack_2e8 = (int *)0x0;
          fVar11 = (float10)FUN_0043f350();
          local_328 = (int *)(float)fVar11;
          fVar11 = (float10)FUN_008913c0();
          piVar9 = (int *)((float)fVar11 * 6.99904 + 5.0);
          piVar2 = local_328;
          if ((float)piVar9 <= (float)local_328) goto LAB_0066dfaf;
          fVar1 = (float)piVar9 - (float)local_328;
          local_330 = (int *)(fVar1 * (float)piStack_2f0);
          local_328 = (int *)((float)piStack_2ec * fVar1);
          local_31c = (int *)(fVar1 * (float)piStack_2e8);
          local_300 = (float)local_330 + local_320;
          local_2fc = (int *)((float)local_328 + (float)local_32c);
          local_2f8 = (int *)((float)local_31c + (float)local_324);
          FUN_00605dc0(&local_300);
        }
      }
      local_14 = 0xffffffff;
      FUN_00538c80();
      goto LAB_0066d9d3;
    }
  }
  FUN_0066a670();
LAB_0066d9d3:
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0066dfd0(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  float10 fVar2;
  
  if (in_ECX[0x15f] == 2) {
    if (in_ECX[0x15d] == 0) {
      fVar2 = (float10)(**(code **)(*in_ECX + 0xec))();
      FUN_0066d120(in_ECX[0x15e],2,(float)(fVar2 * (float10)_DAT_00b37d28));
      if (in_ECX[0x15d] == 0) goto LAB_0066e07d;
    }
    iVar1 = FUN_00403520(4,2);
    if ((iVar1 == 0) &&
       ((iVar1 = FUN_00403520(4,1), iVar1 != 0 || (iVar1 = FUN_00403520(4,0), iVar1 != 0)))) {
      FUN_0066d930(param_1);
      return in_ECX[0x15f] == 2;
    }
    FUN_0066a670();
  }
LAB_0066e07d:
  return in_ECX[0x15f] == 2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066e090(undefined4 param_1)

{
  int *in_ECX;
  float10 fVar1;
  
  if (in_ECX[0x15f] == 0) {
    fVar1 = (float10)(**(code **)(*in_ECX + 0xec))();
    FUN_0066d120(param_1,2,(float)(fVar1 * (float10)_DAT_00b37d28));
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_0066e0d0(undefined4 param_1,float *param_2,char param_3,char param_4)

{
  ushort uVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  float fStack_4e4;
  char cStack_4dd;
  float local_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float local_4c4;
  int *local_4c0;
  float *local_4bc;
  float fStack_4b8;
  float local_4b4;
  int iStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  double dStack_4a0;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float fStack_480;
  int *piStack_474;
  undefined1 auStack_468 [4];
  undefined1 auStack_464 [4];
  uint uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_454;
  int iStack_44c;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined1 auStack_3f8 [12];
  undefined1 auStack_3ec [84];
  undefined **ppuStack_398;
  undefined1 uStack_394;
  undefined1 *puStack_390;
  int iStack_38c;
  undefined4 uStack_388;
  undefined1 auStack_384 [260];
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  undefined4 uStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  undefined4 uStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  undefined4 uStack_244;
  undefined1 uStack_230;
  uint uStack_22c;
  undefined4 uStack_20c;
  undefined4 uStack_200;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  int iStack_1c0;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  int iStack_14;
  
  iStack_14 = 0xffffffff;
  puStack_18 = &LAB_009c422a;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&fStack_4e4;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffb10;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_4bc = param_2;
  local_4c0 = in_ECX;
  fVar10 = (float10)FUN_0046d5c0(param_1,uVar4);
  local_4c4 = (float)(fVar10 + fVar10);
  FUN_0065a2c0();
  fVar10 = (float10)FUN_008913c0();
  local_4dc = (float)fVar10;
  local_4b4 = local_4dc * 6.99904;
  fVar10 = (float10)(**(code **)(*in_ECX + 0xec))();
  fStack_4b8 = (float)(fVar10 * (float10)_DAT_00b37d28);
  FUN_005f11f0(&fStack_4ac,auStack_3f8);
  if (param_4 == '\0') {
    FUN_0070fdd0(in_ECX[0x200]);
  }
  else {
    if ((float)in_ECX[0x1ff] != 0.0) {
      local_4dc = (local_4c4 * 0.5) / fStack_4b8;
      fVar10 = (float10)FUN_00985870();
      local_4dc = (float)fVar10;
      in_ECX[0x1ff] = (int)((float)in_ECX[0x1ff] + local_4dc);
    }
    FUN_0070fdd0(in_ECX[0x1ff]);
    in_ECX[0x200] = in_ECX[0x1ff];
    local_4dc = (local_4c4 * 0.5) / fStack_4b8;
    fVar10 = (float10)FUN_00985870();
    fVar2 = (float)in_ECX[0x1ff] + (float)fVar10;
    in_ECX[0x1ff] = (int)fVar2;
    if (6.2831855 < fVar2) {
      in_ECX[0x1ff] = (int)(fVar2 - 6.2831855);
    }
  }
  cStack_4dd = '\0';
  local_4dc = (float)(-(uint)(param_3 != '\0') & 10);
  iStack_4b0 = 0;
  do {
    iVar9 = iStack_4b0;
    if ((int)local_4dc < iStack_4b0) {
      if ((cStack_4dd == '\0') && (param_3 != '\0')) {
        local_4c4 = local_4c4 * 0.5;
        if (64.0 < local_4c4) {
          local_4c4 = 64.0;
        }
        *local_4bc = (float)in_ECX[0xb];
        local_4bc[1] = (float)in_ECX[0xc];
        local_4bc[2] = (float)in_ECX[0xd];
        local_4bc[2] = local_4bc[2] + local_4c4;
        cStack_4dd = '\x01';
      }
      break;
    }
    FUN_007101f0(&fStack_4d4,auStack_3f8);
    if (iVar9 != 0) {
      fStack_4cc = 0.0;
      FUN_0043f350();
      fStack_4d8 = (6.2831855 / (float)(int)local_4dc) * (float)(iVar9 + -1);
      FUN_0070fdd0(fStack_4d8);
      pfVar5 = (float *)FUN_007101f0(auStack_3ec,&fStack_4d4);
      fStack_4d4 = *pfVar5;
      fStack_4d0 = pfVar5[1];
      fStack_4cc = pfVar5[2];
    }
    uStack_20c = 0x3f800000;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_200 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    puStack_1d8 = (undefined1 *)0x0;
    fStack_1f0 = (float)DAT_00ba7a40;
    fStack_1ec = (float)DAT_00ba7a44;
    fStack_1e8 = (float)DAT_00ba7a48;
    uStack_1e4 = uRam00ba7a4c;
    iVar6 = FUN_0065abe0(auStack_464);
    fStack_260 = fStack_4ac * 0.14287673;
    uStack_22c = (uint)*(ushort *)(iVar6 + 2) << 0x10 | 0x1f;
    fStack_25c = fStack_4a8 * 0.14287673;
    fStack_258 = fStack_4a4 * 0.14287673;
    uStack_244 = uStack_254;
    fStack_4e4 = fStack_4b8 + local_4c4;
    dStack_4a0 = (double)fStack_4e4;
    fStack_4d8 = fStack_4e4 * fStack_4d4;
    fStack_4c8 = fStack_4e4 * fStack_4d0;
    fStack_4e4 = fStack_4e4 * fStack_4cc;
    fStack_270 = fStack_4d8 * 0.14287673;
    fStack_26c = fStack_4c8 * 0.14287673;
    fStack_268 = fStack_4e4 * 0.14287673;
    uStack_1e4 = uStack_264;
    fStack_250 = fStack_260;
    fStack_24c = fStack_25c;
    fStack_248 = fStack_258;
    fStack_1f0 = fStack_270;
    fStack_1ec = fStack_26c;
    fStack_1e8 = fStack_268;
    FUN_00538c00();
    puStack_1d8 = auStack_1d0;
    iStack_14 = 0;
    uStack_1dc = 0;
    FUN_006ecc80();
    cVar3 = FUN_004c97f0();
    piVar7 = DAT_00b35c24;
    if (cVar3 != '\0') {
      piVar7 = (int *)FUN_00424180();
    }
    cVar3 = (**(code **)(*piVar7 + 0x88))(&fStack_250);
    if (cVar3 == '\0') {
      dStack_4a0 = (double)(local_4c4 * 0.5);
      fVar2 = local_4c4 * 0.5 + fStack_4b8;
      fStack_4d4 = fVar2 * fStack_4d4;
      fStack_4d0 = fVar2 * fStack_4d0;
      fStack_4cc = fVar2 * fStack_4cc;
      fStack_4e4 = fStack_4ac + fStack_4d4;
      fStack_4c8 = fStack_4a8 + fStack_4d0;
      fStack_4d8 = fStack_4a4 + fStack_4cc;
      *local_4bc = fStack_4e4;
      local_4bc[1] = fStack_4c8;
      local_4bc[2] = fStack_4d8;
      fStack_494 = fStack_4e4;
      fStack_490 = fStack_4c8;
      fStack_48c = fStack_4d8;
LAB_0066e60a:
      fStack_4c8 = (float)FUN_00401f00(0x14);
      iStack_14._0_1_ = 1;
      if (fStack_4c8 == 0.0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        fStack_4e4 = (float)dStack_4a0;
        puVar8 = (undefined4 *)FUN_00532090(fStack_4e4,1);
      }
      iStack_14._0_1_ = 0;
      iVar9 = FUN_0065abe0(auStack_468);
      uVar1 = *(ushort *)(iVar9 + 2);
      FUN_00532250();
      iStack_14._0_1_ = 2;
      if (puVar8 == (undefined4 *)0x0) {
        uStack_45c = 0;
      }
      else {
        uStack_45c = puVar8[2];
      }
      uStack_43c = 0;
      uStack_438 = 0;
      uStack_434 = 0;
      uStack_430 = 0;
      uStack_428 = 0;
      uStack_424 = 0;
      uStack_420 = 0;
      uStack_41c = 0;
      uStack_414 = 0;
      uStack_440 = 0x3f800000;
      uStack_42c = 0x3f800000;
      uStack_418 = 0x3f800000;
      uStack_410 = 0;
      uStack_40c = 0;
      uStack_408 = 0;
      uStack_404 = 0;
      fStack_280 = *local_4bc * 0.14287673;
      fStack_27c = local_4bc[1] * 0.14287673;
      fStack_278 = local_4bc[2] * 0.14287673;
      uStack_460 = (uint)uVar1 << 0x10 | 0x1f;
      FUN_0047dcd0(&fStack_280);
      FUN_00531fc0(&uStack_460);
      iStack_14 = CONCAT31(iStack_14._1_3_,3);
      FUN_006ecc80();
      cVar3 = FUN_004c97f0();
      piVar7 = DAT_00b35c24;
      if (cVar3 != '\0') {
        piVar7 = (int *)FUN_00424180();
      }
      FUN_0089f470(piVar7);
      piVar7 = piStack_474;
      puStack_390 = auStack_384;
      ppuStack_398 = &PTR_FUN_00a56370;
      uStack_388 = 0x80000010;
      iStack_14 = CONCAT31(iStack_14._1_3_,4);
      iStack_38c = 0;
      uStack_394 = 0;
      if (piStack_474 != (int *)0x0) {
        FUN_0089f570();
        (**(code **)(*piVar7 + 0x38))(&ppuStack_398);
        FUN_0089f570();
      }
      FUN_008aeca0();
      if (puVar8 != (undefined4 *)0x0) {
        (**(code **)*puVar8)(1);
      }
      if (iStack_38c == 0) {
        cStack_4dd = '\x01';
      }
      iStack_14._0_1_ = 3;
      FUN_00536f90();
      iStack_14._0_1_ = 2;
      FUN_008aefb0();
      iStack_14 = (uint)iStack_14._1_3_ << 8;
      iVar9 = iStack_4b0;
      if (-1 < iStack_44c) {
        FUN_008a75d0(uStack_454,iStack_44c * 8,0x14);
        iVar9 = iStack_4b0;
      }
    }
    else {
      fVar2 = (float)dStack_4a0;
      dStack_4a0 = (double)(local_4c4 * 0.5);
      fVar2 = *(float *)(iStack_1c0 + 0x14) * fVar2 - local_4c4 * 0.5;
      fStack_4d4 = fVar2 * fStack_4d4;
      fStack_4d0 = fStack_4d0 * fVar2;
      fStack_4cc = fVar2 * fStack_4cc;
      fStack_488 = fStack_4d4 + fStack_4ac;
      fStack_4c8 = fStack_4d0 + fStack_4a8;
      fStack_4d8 = fStack_4a4 + fStack_4cc;
      *local_4bc = fStack_488;
      local_4bc[1] = fStack_4c8;
      local_4bc[2] = fStack_4d8;
      fStack_4e4 = fStack_4d0 * fStack_4d0 + fStack_4d4 * fStack_4d4 + 0.0;
      fStack_484 = fStack_4c8;
      fStack_480 = fStack_4d8;
      fVar10 = (float10)FUN_00982c30();
      fStack_4e4 = (float)fVar10 - (float)dStack_4a0;
      if (0.0 < fStack_4e4 - local_4b4) goto LAB_0066e60a;
    }
    iStack_14 = 0xffffffff;
    FUN_00538c80();
    iStack_4b0 = iVar9 + 1;
    in_ECX = local_4c0;
  } while (cStack_4dd == '\0');
  *unaff_FS_OFFSET = local_1c;
  return cStack_4dd;
}



void FUN_0066e950(float param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d00c6;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_00612220(uVar3);
  if (iVar4 != 0) {
    if (NAN(param_1) || 1.0 < param_1 == (param_1 == 1.0)) {
      uVar6 = FUN_006ff9c0(&DAT_00a3fa90);
      iVar4 = FUN_00560920(&DAT_00b35294,uVar6);
      if (iVar4 == 0) {
        iVar4 = FUN_00401f00(0x10);
        local_4 = 0;
        if (iVar4 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_005e1570(param_1);
        }
        local_4 = 0xffffffff;
        FUN_006ff8a0(uVar6);
      }
      else {
        *(float *)(iVar4 + 0xc) = param_1;
      }
    }
    else {
      FUN_006ffac0(&DAT_00a3fa90);
    }
  }
  piVar1 = *(int **)(in_ECX + 0x5d0);
  if (piVar1 == (int *)0x0) goto LAB_0066eab0;
  for (puVar5 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar5 != (undefined4 *)0x0;
      puVar5 = (undefined4 *)puVar5[1]) {
    if (puVar5 == &DAT_00b3fab0) {
      bVar2 = 1;
      goto LAB_0066ea23;
    }
  }
  bVar2 = 0;
LAB_0066ea23:
  if ((-(uint)bVar2 & (uint)piVar1) == 0) goto LAB_0066eab0;
  if (NAN(param_1) || 1.0 < param_1 == (param_1 == 1.0)) {
    iVar4 = FUN_00707530(0);
    if (iVar4 == 0) {
      iVar4 = FUN_00401f00(0x1c);
      local_4 = 1;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0047f920();
      }
      *(ushort *)(iVar4 + 0x18) = *(ushort *)(iVar4 + 0x18) | 1;
      local_4 = 0xffffffff;
      FUN_00405680(iVar4);
      goto LAB_0066ea98;
    }
  }
  else {
    uVar6 = FUN_00707530(0);
    FUN_004a1220(uVar6);
LAB_0066ea98:
    FUN_00707610();
  }
  FUN_004a2a90(-(uint)bVar2 & (uint)piVar1,param_1);
LAB_0066eab0:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0066ead0(byte param_1)

{
  FUN_0066b150();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066eaf0(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 undefined4 param_6,int param_7)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int *in_ECX;
  int iVar9;
  undefined4 unaff_EBX;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  float10 fVar13;
  undefined4 unaff_retaddr;
  undefined4 uVar14;
  float fVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined2 uVar19;
  uint uStack_b4;
  float fStack_a8;
  uint uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  undefined4 auStack_70 [9];
  undefined4 auStack_4c [9];
  undefined1 auStack_28 [40];
  
  uVar19 = (undefined2)((uint)unaff_EBX >> 0x10);
  uVar4 = FUN_004d6670();
  iVar11 = param_7;
  local_a0 = FUN_004c9cf0();
  FUN_004835d0(uVar4,local_a0);
  uVar1 = FUN_0040fda0();
  uStack_b4 = CONCAT13(uVar1,(undefined3)uStack_b4) & 0xff00ffff;
  iVar5 = FUN_006ecc80();
  if (iVar5 != 0) {
    piVar6 = in_ECX;
    FUN_006ecc80();
    FUN_004cecd0(piVar6);
  }
  (**(code **)(*in_ECX + 0x1cc))(&param_1);
  FUN_004d89a0(param_3,param_4,param_5);
  piVar6 = (int *)(**(code **)(*in_ECX + 0x380))();
  iVar5 = *(int *)(DAT_00b33398 + 0x24);
  FUN_004d8aa0(iVar11);
  if ((piVar6 != (int *)0x0) && (iVar7 = FUN_006ecc80(), iVar7 != 0)) {
    piVar16 = piVar6;
    FUN_006ecc80(piVar6);
    FUN_004cecd0(piVar16);
  }
  cVar3 = (char)((uint)unaff_EBX >> 0x18);
  if ((iVar11 == 0) || (cVar2 = FUN_004c97f0(), cVar2 == '\0')) {
    uVar4 = 0x7fffffff;
    fStack_a8 = NAN;
    if (iVar11 != 0) {
      uVar4 = FUN_004c9a80();
      fStack_a8 = (float)FUN_004c9aa0();
    }
    if (((uStack_b4 != 0) && (uStack_b4 != uStack_a4)) && (cVar2 = FUN_0045a500(), cVar2 == '\0')) {
      if (iVar11 != 0) {
        FUN_004400a0(iVar11,0);
      }
      FUN_00442630(0,1);
      FUN_0043fc20(0);
    }
    if (iVar11 != 0) {
      if (iVar5 != 0) {
        uVar18 = 0;
        uVar17 = 0;
        uVar14 = FUN_004cad00(&stack0x00000000);
        cVar2 = FUN_006ab160(uVar14,uVar17,uVar18);
        if ((cVar2 == '\0') || (cVar3 != '\0')) {
          uVar19 = (undefined2)(CONCAT13(cVar3,0x10000) >> 0x10);
        }
        else {
          FUN_006ab420();
        }
      }
      FUN_0055fdf0();
      FUN_004431f0(uStack_a4);
    }
    FUN_00445a10(&stack0x00000000);
    iVar11 = FUN_004efe80(uVar4,fStack_a8);
  }
  else {
    if (iVar5 != 0) {
      uVar17 = 0;
      uVar14 = 0;
      uVar4 = FUN_004cad00(0);
      cVar2 = FUN_006ab160(uVar4,uVar14,uVar17);
      if (cVar2 != '\0') {
        if (cVar3 == '\0') {
          FUN_006a8d50();
          FUN_006ab420();
        }
        else {
          uVar19 = (undefined2)(CONCAT13(cVar3,0x10000) >> 0x10);
        }
      }
    }
    FUN_004455e0(iVar11,&stack0x00000000);
    FUN_00560110();
  }
  if (iVar5 != 0) {
    FUN_006ac210();
    FUN_006ac3c0();
    iVar7 = (**(code **)(*(int *)in_ECX[0x16] + 0xf0))(1);
    if (iVar7 != 0) {
      (**(code **)(*(int *)in_ECX[0x16] + 0x348))();
    }
  }
  if ((char)param_7 != '\0') {
    FUN_00542ea0();
    FUN_00540380();
  }
  FUN_004d8aa0(0);
  FUN_004d35d0(in_ECX);
  iVar7 = (**(code **)(*in_ECX + 0x154))();
  if ((iVar7 == 0) && (cVar3 = FUN_0045a500(), cVar3 == '\0')) {
    FUN_00434020(5);
  }
  puVar8 = &DAT_00b26dc4;
  puVar10 = auStack_4c;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  for (; 3.1415927 < param_5; param_5 = param_5 - 6.2831855) {
  }
  for (; param_5 < -3.1415927; param_5 = param_5 + 6.2831855) {
  }
  FUN_0070fdd0(param_5);
  puVar8 = (undefined4 *)FUN_007100a0(auStack_28,auStack_70);
  puVar10 = auStack_4c;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  if (NAN(param_5) || 0.0 < param_5 == (param_5 == 0.0)) {
    fVar15 = param_4 + param_3;
  }
  else {
    fVar15 = param_3 - param_4;
  }
  FUN_0070fd30(fVar15);
  iVar7 = (**(code **)(*in_ECX + 0x154))();
  if (iVar7 != 0) {
    iVar7 = (**(code **)(*in_ECX + 0x154))();
    puVar8 = auStack_70;
    puVar10 = (undefined4 *)(iVar7 + 0x30);
    for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  puVar8 = (undefined4 *)FUN_007100a0(auStack_28,auStack_4c);
  puVar10 = puVar8;
  puVar12 = auStack_4c;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  if (*(short *)(DAT_00b333cc + 0xb6) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = **(int **)(DAT_00b333cc + 0xb0);
  }
  puVar10 = (undefined4 *)(iVar7 + 0x30);
  for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  if (*(short *)(DAT_00b333cc + 0xb6) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = **(int **)(DAT_00b333cc + 0xb0);
  }
  *(undefined4 *)(iVar7 + 0x54) = unaff_retaddr;
  *(undefined4 *)(iVar7 + 0x58) = param_1;
  *(undefined4 *)(iVar7 + 0x5c) = param_2;
  FUN_00707370(0,0);
  FUN_00707610();
  FUN_00707980();
  if (iVar5 != 0) {
    FUN_006a8e10(unaff_retaddr,param_1,param_2);
    (**(code **)(*in_ECX + 0x1e0))();
    fVar13 = (float10)FUN_00986000();
    fVar15 = (float)fVar13;
    (**(code **)(*in_ECX + 0x1e0))();
    uVar4 = 0;
    fVar13 = (float10)FUN_00986300(fVar15,0);
    FUN_006a8e40((float)fVar13,fVar15,uVar4);
  }
  FUN_00665260(in_ECX);
  if (piVar6 != (int *)0x0) {
    FUN_004d8a30(unaff_retaddr,param_1,param_2);
    uVar4 = FUN_004c9cf0();
    FUN_004dd4b0(piVar6,iVar11,uVar4);
    (**(code **)(*piVar6 + 0x178))(0);
  }
  iVar5 = FUN_007b7650();
  if (iVar5 != 0) {
    FUN_007aa4d0();
  }
  if (in_ECX[0x174] != 0) {
    cVar3 = FUN_0045a500();
    if (cVar3 == '\0') {
      puVar8 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
      local_a0 = *puVar8;
      uStack_9c = puVar8[1];
      fStack_98 = (float)puVar8[2];
      if ((iVar11 != 0) && (cVar3 = FUN_004c97f0(), cVar3 == '\0')) {
        fStack_a8 = 0.0;
        cVar3 = FUN_004d1e10(&local_a0,&fStack_a8);
        if ((cVar3 != '\0') && (fStack_98 < fStack_a8 + 32.0)) {
          fStack_98 = fStack_a8 + 32.0;
          (**(code **)(*in_ECX + 0x1cc))(&local_a0);
        }
      }
      iVar11 = 0;
      do {
        puVar8 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
        uStack_7c = *puVar8;
        uStack_78 = puVar8[1];
        fStack_74 = (float)puVar8[2];
        uStack_88 = DAT_00b3f9a8;
        uStack_84 = DAT_00b3f9ac;
        uStack_80 = DAT_00b3f9b0;
        FUN_0065af30(0x3e23d70a,&uStack_88,0);
        puVar8 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
        uStack_94 = *puVar8;
        uStack_90 = puVar8[1];
        fStack_8c = (float)puVar8[2];
        if (ABS(fStack_8c - fStack_74) < 0.1) break;
        iVar11 = iVar11 + 1;
      } while (iVar11 < 100);
      if (iVar11 == 100) {
        (**(code **)(*in_ECX + 0x1cc))(&local_a0);
      }
    }
    *(bool *)(in_ECX + 0x162) = (char)in_ECX[0x162] == '\0';
    FUN_00603ca0(0);
    *(bool *)(in_ECX + 0x162) = (char)in_ECX[0x162] == '\0';
    FUN_00603ca0(0);
    FUN_0066b710(0);
  }
  FUN_0055fa50(*(undefined4 *)(DAT_00b333cc + 0xdc),0);
  FUN_004424d0(_DAT_00b33e9c);
  if ((char)in_ECX[0x1fe] != '\0') {
    FUN_005732d0(2,0x3e99999a);
    FUN_00440af0(0,0,0);
    FUN_0057b7e0();
    *(undefined1 *)(in_ECX + 0x1fe) = 0;
    FUN_00572ec0(2,0);
    FUN_006a8d00();
    FUN_006a9b40();
    FUN_00410ba0(PTR_s_OblivionIntro_bik_00b030a4,1,1,0,0,1,0);
    FUN_006a8d50();
    FUN_006a9c00();
    *(undefined1 *)(in_ECX + 0x1fe) = 0;
  }
  if (((char)((ushort)uVar19 >> 8) != '\0') && (FUN_0040fdd0(), (char)uVar19 != '\0')) {
    FUN_006a8d50();
  }
  iVar11 = in_ECX[0x1d9];
  if (iVar11 != 0) {
    FUN_006b73e0();
    FUN_00401f20(iVar11);
    in_ECX[0x1d9] = 0;
    in_ECX[0x1d8] = 0;
  }
  *(undefined4 *)(DAT_00b33398 + 0x18) = 0;
  if ((*(int *)(DAT_00b333a0 + 0x34) == 0) && (*(int *)(DAT_00b333a0 + 0x54) != 0)) {
    FUN_00498f40();
  }
  FUN_00444a10();
  return;
}



void FUN_0066f370(float param_1,float param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  
  if (param_7 != 0) {
    if (DAT_00b35b90 != 0) {
      thunk_FUN_004be420();
    }
    if (DAT_00b35b8c != 0) {
      thunk_FUN_004bd8c0();
    }
    iVar1 = FUN_004efe80((int)ROUND(param_1) >> 0xc,(int)ROUND(param_2) >> 0xc);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_004f1630((int)ROUND(param_1) >> 0xc,(int)ROUND(param_2) >> 0xc), iVar1 == 0)) {
      return;
    }
    FUN_0066eaf0(param_1,param_2,param_3,param_4,param_5,param_6,iVar1,param_8);
  }
  return;
}



void FUN_0066f420(int *param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  int *piVar15;
  undefined4 uVar16;
  float fStack_44;
  float fStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar11 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c4268;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffa4;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar3 = (**(code **)(*in_ECX + 0x25c))(uVar4);
  if (cVar3 != '\0') goto LAB_0066fd74;
  if (DAT_00b13228 != '\0') {
    FUN_00466b70();
  }
  *(undefined1 *)(DAT_00b333c4 + 0x4b) = 1;
  bVar2 = false;
  iVar5 = (**(code **)(*in_ECX + 0x380))();
  if (iVar5 == 0) {
    if (((in_ECX[0x78] != 0) && (iVar5 = FUN_004db6b0(), iVar5 != 0)) &&
       (cVar3 = FUN_004de770(DAT_00b333c4,1), cVar3 == '\0')) {
      in_ECX[0x78] = 0;
    }
    piVar6 = (int *)in_ECX[0x78];
  }
  else {
    bVar2 = true;
    piVar6 = (int *)(**(code **)(*in_ECX + 0x380))();
    uVar16 = 1;
    piVar15 = DAT_00b333c4;
    (**(code **)(*in_ECX + 0x380))(DAT_00b333c4,1);
    cVar3 = FUN_004de770(piVar15,uVar16);
    if (cVar3 != '\0') {
      iVar5 = (**(code **)(*in_ECX + 0x380))();
      in_ECX[0x78] = iVar5;
    }
  }
  iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))();
  if ((iVar5 != 0) && (piVar6 != (int *)0x0)) {
    if (*(char *)(iVar5 + 0x20) == '\x16') {
      FUN_00602050(piVar6);
      bVar2 = true;
    }
    else if (*(char *)(iVar5 + 0x20) == '\x17') {
      FUN_005f0410();
    }
  }
  if (((int *)in_ECX[0x78] != (int *)0x0) &&
     (((cVar3 = (**(code **)(*(int *)in_ECX[0x78] + 0x198))(0), cVar3 != '\0' ||
       ((*(uint *)(in_ECX[0x78] + 8) >> 0xb & 1) != 0)) ||
      ((*(uint *)(in_ECX[0x78] + 8) >> 5 & 1) != 0)))) {
    in_ECX[0x78] = 0;
  }
  iVar5 = (**(code **)(in_ECX[0x17] + 0x30))();
  if (iVar5 != 0) {
    FUN_00699da0();
    FUN_004d8370();
    uVar16 = FUN_00470720(1);
    iVar5 = FUN_0051aa00(uVar16);
    if (iVar5 - 0x22U < 6) {
      FUN_00470fc0(1,0);
      FUN_00476d10(in_ECX,0,0xbf800000);
      FUN_00474510(in_ECX);
    }
    uVar16 = FUN_00470720(1);
    iVar5 = FUN_0051aa00(uVar16);
    if (iVar5 - 0x22U < 6) {
      FUN_00470fc0(1,0);
      FUN_00476d10(in_ECX,0,0xbf800000);
      FUN_00474510(in_ECX);
    }
  }
  FUN_005e05f0(0x800);
  iVar5 = FUN_0065a2c0();
  *(undefined4 *)(iVar5 + 0x2a0) = 0;
  iVar5 = (**(code **)(*in_ECX + 0x380))();
  if (iVar5 != 0) {
    uVar16 = 0x800;
    (**(code **)(*in_ECX + 0x380))(0x800);
    FUN_005e05f0(uVar16);
    (**(code **)(*in_ECX + 0x380))();
    iVar5 = FUN_0065a2c0();
    *(undefined4 *)(iVar5 + 0x2a0) = 0;
  }
  FUN_005e4140();
  fStack_44 = 0.0;
  puVar7 = (undefined4 *)(**(code **)(*DAT_00b333c4 + 0x174))();
  uStack_3c = (double)CONCAT44(uStack_3c._4_4_,*puVar7);
  iVar5 = (**(code **)(*DAT_00b333c4 + 0x174))();
  uStack_3c._4_4_ = *(undefined4 *)(iVar5 + 4);
  iVar5 = (**(code **)(*DAT_00b333c4 + 0x174))();
  uStack_34 = *(undefined4 *)(iVar5 + 8);
  FUN_005f0810(param_1,&fStack_44,(undefined4)uStack_3c,uStack_3c._4_4_,uStack_34);
  FUN_0068a9f0();
  uStack_4 = 0;
  uVar16 = FUN_004d6670();
  uVar8 = FUN_006ecc80(uVar16);
  uVar9 = (**(code **)(*param_1 + 0x174))(uVar8);
  cVar3 = FUN_0068b030(DAT_00b333c4,uVar9,uVar8,uVar16);
  if (cVar3 != '\0') {
    fVar12 = (float10)FUN_0068a760(DAT_00b333c4);
    fStack_44 = (float)fVar12;
  }
  iVar5 = FUN_0046b250(0x3a);
  uStack_3c = (double)fStack_44;
  fVar12 = (float10)FUN_005e3750();
  fStack_40 = *(float *)(iVar5 + 0x24);
  param_1 = (int *)(fStack_40 * ((float)((float10)uStack_3c / fVar12) / 3600.0));
  if (bVar2) {
    param_1 = (int *)((float)param_1 * 0.5);
  }
  iVar5 = FUN_009828c0();
  in_ECX[0x164] = iVar5;
  *(undefined1 *)(in_ECX + 0x165) = 0;
  FUN_00440af0(1,0,piVar11);
  iVar5 = in_ECX[0x164];
  if (iVar5 == 0) {
    uStack_3c = (double)((float)param_1 * 3600.0);
    fVar13 = (float10)FUN_004029d0();
    fVar12 = (float10)uStack_3c;
    fVar14 = (float10)FUN_00673b00();
    fVar1 = (float)(fVar14 + (float10)(float)(fVar12 / fVar13));
    uStack_3c = (double)CONCAT44(uStack_3c._4_4_,fVar1);
    FUN_00673b10(fVar1);
    FUN_004029e0((float)(fVar12 / fVar13));
  }
  else {
    uStack_30 = 0x3e4ccccd;
    uStack_2c = 0x3dcccccd;
    uStack_28 = 0x3f333333;
    uStack_24 = 0;
    FUN_00578e90(&uStack_30);
    if (0 < in_ECX[0x164]) {
      fStack_40 = (float)iVar5;
      do {
        FUN_0057b950(0,100.0 - ((float)in_ECX[0x164] * 100.0) / fStack_40);
        fVar12 = (float10)FUN_004029d0();
        fVar13 = (float10)FUN_00673b00();
        fVar1 = (float)(fVar13 + (float10)(float)((float10)3600.0 / fVar12));
        uStack_3c = (double)CONCAT44(uStack_3c._4_4_,fVar1);
        FUN_00673b10(fVar1);
        FUN_004029e0((float)((float10)3600.0 / fVar12));
        FUN_00677ec0(0x45610000,1);
        FUN_00674200(0x45610000,1);
        FUN_00673e90(0x45610000,1);
        FUN_00673c10(0x45610000,1);
        FUN_00674a20();
        in_ECX[0x164] = in_ECX[0x164] + -1;
        FUN_005f2530(0x40000000);
        FUN_005f25f0(0x40000000,1);
        FUN_005f2720(0x40000000);
      } while (0 < in_ECX[0x164]);
    }
  }
  in_ECX[0x164] = 10;
  FUN_00676940(piVar11);
  in_ECX[0x164] = 0;
  if (piVar6 != (int *)0x0) {
    iVar5 = FUN_004d8af0();
    iVar10 = FUN_004d8af0();
    if ((iVar10 == iVar5) && (iVar5 = (**(code **)(*in_ECX + 0x380))(), iVar5 == 0)) {
      uVar16 = FUN_006ecc80();
      uVar8 = FUN_004d6670();
      puVar7 = (undefined4 *)(**(code **)(*piVar11 + 0x174))();
      FUN_004d8a30(*puVar7,puVar7[1],puVar7[2]);
      FUN_004dd4b0(piVar6,uVar16,uVar8);
      cVar3 = FUN_0043f8c0(uVar16,1);
      if (cVar3 != '\0') {
        (**(code **)(*piVar6 + 0x178))(0);
      }
    }
  }
  if (DAT_00b0525c != '\0') {
    FUN_0043f2d0(0);
  }
  uVar16 = 1;
  FUN_00542ea0(1);
  FUN_0053fbb0(uVar16);
  DAT_00b3a6d2 = 1;
  puVar7 = (undefined4 *)(**(code **)(*piVar11 + 0x174))();
  uVar8 = 0;
  uVar16 = FUN_004d6670(0);
  FUN_0066f370(*puVar7,puVar7[1],puVar7[2],piVar11[8],piVar11[9],piVar11[10],uVar16,uVar8);
  uVar16 = 0;
  DAT_00b3a6d2 = 0;
  FUN_00542ea0(0);
  FUN_0053fbb0(uVar16);
  if (DAT_00b0525c != '\0') {
    FUN_0043f2d0(1);
  }
  FUN_00676a40();
  FUN_00441610();
  FUN_00678750();
  uVar16 = FUN_007616d0();
  FUN_006745d0(uVar16);
  if ((((*(char *)((int)DAT_00b333c4 + 0x116) == '\0') && (bVar2)) &&
      ((int *)in_ECX[0x78] != (int *)0x0)) &&
     (iVar5 = (**(code **)(*(int *)in_ECX[0x78] + 0x154))(), iVar5 != 0)) {
    iVar5 = FUN_004d8af0();
    iVar10 = FUN_004d8af0();
    if ((iVar5 != iVar10) || (iVar5 = (**(code **)(*in_ECX + 0x380))(), iVar5 != 0))
    goto LAB_0066fc60;
    FUN_005e6d70(0);
    cVar3 = (**(code **)(*(int *)DAT_00b333c4[0x16] + 0x304))();
    if (cVar3 != '\0') {
      iVar5 = *(int *)DAT_00b333c4[0x16];
      uVar16 = (**(code **)(*DAT_00b333c4 + 0x164))(DAT_00b333c4);
      uVar16 = (**(code **)(*DAT_00b333c4 + 0x168))(uVar16);
      (**(code **)(iVar5 + 0x150))(0,uVar16);
    }
    (**(code **)(*DAT_00b333c4 + 900))(in_ECX[0x78]);
    (**(code **)(*(int *)in_ECX[0x78] + 0x38c))(DAT_00b333c4);
    FUN_00602050(in_ECX[0x78]);
  }
  else {
LAB_0066fc60:
    if ((*(char *)((int)DAT_00b333c4 + 0x116) == '\0') && (in_ECX[0x78] != 0)) {
      iVar5 = FUN_004d8af0();
      iVar10 = FUN_004d8af0();
      if (iVar10 != iVar5) {
        FUN_0057acc0(DAT_00b38b50,0,1,0xbf800000);
      }
    }
  }
  for (piVar11 = (int *)(**(code **)(in_ECX[0x1a] + 8))();
      (piVar11 != (int *)0x0 && ((piVar11[1] != 0 || (*piVar11 != 0)))); piVar11 = (int *)piVar11[1]
      ) {
    if (*(int *)(*(int *)(*(int *)(*piVar11 + 0xc) + 0x1c) + 0x98) == 0x47445553) {
      iVar5 = FUN_009832e6(*piVar11,0,&PTR_PTR_00b14914,&PTR_PTR_00b14ff8,0);
      *(undefined1 *)(iVar5 + 0x3d) = 1;
    }
  }
  *(undefined1 *)(DAT_00b333c4 + 0x4b) = 0;
  FUN_00679a70();
  FUN_00677ec0(0,0);
  (**(code **)(*in_ECX + 0x2ec))();
  iVar5 = in_ECX[0x1d9];
  if (iVar5 != 0) {
    FUN_006b73e0();
    FUN_00401f20(iVar5);
    in_ECX[0x1d9] = 0;
    in_ECX[0x1d8] = 0;
  }
  *(undefined1 *)(DAT_00b333c4 + 0x45) = 0;
  uStack_4 = 0xffffffff;
  FUN_0068aa10();
LAB_0066fd74:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0066fd90(float param_1,float param_2)

{
  float fVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00579870();
  fVar1 = param_1;
  fVar3 = param_2;
  if (param_2 == 0.0) {
    fVar3 = (float)FUN_004476b0(param_1);
  }
  if (DAT_00b35b90 != 0) {
    thunk_FUN_004be420();
  }
  if (DAT_00b35b8c != 0) {
    thunk_FUN_004bd8c0();
  }
  if (fVar3 == 0.0) {
    param_1 = fVar3;
    param_2 = fVar3;
    iVar4 = FUN_004478b0(fVar1,&param_1,&param_2);
    if (iVar4 == 0) {
      return;
    }
    fVar3 = (float)FUN_004f1630(param_1,param_2);
  }
  else {
    cVar2 = FUN_004c97f0();
    if ((cVar2 == '\0') && (iVar4 = FUN_004c9cf0(), iVar4 != 0)) {
      uVar5 = FUN_004c9aa0();
      uVar6 = FUN_004c9a80(uVar5);
      FUN_004f1630(uVar6,uVar5);
    }
  }
  if (fVar3 != 0.0) {
    local_c = DAT_00b3f9a8;
    local_8 = DAT_00b3f9ac;
    local_4 = DAT_00b3f9b0;
    FUN_004d5d70(&local_18,&local_c);
    FUN_0066eaf0(local_18,local_14,local_10,local_c,local_8,local_4,fVar3,1);
    cVar2 = FUN_004c97f0();
    if (cVar2 == '\0') {
      FUN_00440590(&local_18,&param_2);
      local_10 = param_2;
      if (param_2 < 0.0) {
        local_10 = 0.0;
      }
      (**(code **)(*in_ECX + 0x1cc))(&local_18);
    }
  }
  return;
}



void FUN_0066ff10(char param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  if (in_ECX[0x1cb] == 0) {
    return;
  }
  if (param_1 != '\0') {
    FUN_00579cf0(DAT_00b38bf0,1,DAT_00b38cf0,0);
    iVar2 = in_ECX[0x1cb];
    if (iVar2 == 0) {
      return;
    }
    if (*(char *)(iVar2 + 4) != '0') {
      if (*(char *)(iVar2 + 4) != '5') {
        return;
      }
      FUN_0066f370(in_ECX[0x1c8],in_ECX[0x1c9],in_ECX[0x1ca],in_ECX[8],in_ECX[9],in_ECX[10],iVar2,0)
      ;
      return;
    }
    FUN_0066eaf0(in_ECX[0x1c8],in_ECX[0x1c9],in_ECX[0x1ca],in_ECX[8],in_ECX[9],in_ECX[10],iVar2,0);
    return;
  }
  piVar4 = in_ECX;
  if ((int *)in_ECX[0x35] != (int *)0x0) {
    piVar4 = (int *)in_ECX[0x35];
  }
  FUN_0057acc0(DAT_00b38bf0,0,1,0x40000000);
  iVar2 = FUN_0065a2c0();
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 500) >> 8 & 1) == 0)) {
    in_ECX[0x1ca] = piVar4[0xd];
  }
  pfVar1 = (float *)(in_ECX + 0x1c8);
  FUN_004d8a30(in_ECX[0x1c8],in_ECX[0x1c9],in_ECX[0x1ca]);
  if (iVar2 != 0) {
    FUN_00452a10(pfVar1);
  }
  iVar2 = in_ECX[0x1cb];
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 4) != '0') {
      if (*(char *)(iVar2 + 4) != '5') goto LAB_006700f6;
      iVar2 = FUN_00447740((int)ROUND(*pfVar1) >> 0xc,(int)ROUND((float)in_ECX[0x1c9]) >> 0xc,iVar2,
                           0);
    }
    if (iVar2 != 0) {
      (**(code **)(*piVar4 + 0x194))(iVar2);
      (**(code **)(*in_ECX + 0x194))(iVar2);
    }
  }
LAB_006700f6:
  iVar3 = FUN_00612220();
  iVar2 = in_ECX[0x174];
  *(float *)(iVar3 + 0x54) = *pfVar1;
  *(int *)(iVar3 + 0x58) = in_ECX[0x1c9];
  *(int *)(iVar3 + 0x5c) = in_ECX[0x1ca];
  *(float *)(iVar2 + 0x54) = *pfVar1;
  *(int *)(iVar2 + 0x58) = in_ECX[0x1c9];
  *(int *)(iVar2 + 0x5c) = in_ECX[0x1ca];
  FUN_00897a20(iVar3,1);
  FUN_00897a20(iVar2,1);
  FUN_00707370(0,0);
  FUN_00707370(0,0);
  if ((int *)in_ECX[0x35] != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)in_ECX[0x35] + 0x154))();
    *(float *)(iVar2 + 0x54) = *pfVar1;
    *(int *)(iVar2 + 0x58) = in_ECX[0x1c9];
    *(int *)(iVar2 + 0x5c) = in_ECX[0x1ca];
    FUN_00897a20(iVar2,1);
    FUN_00707370(0,0);
  }
  return;
}


