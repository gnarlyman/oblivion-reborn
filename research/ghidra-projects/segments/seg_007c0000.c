
void FUN_007c02b0(void)

{
  int *in_ECX;
  int iVar1;
  int *piVar2;
  
  piVar2 = in_ECX + 0x35;
  iVar1 = 0xd;
  do {
    (**(code **)(*in_ECX + 0x94))(*piVar2);
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



void FUN_007c0330(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce0bc;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008026c0(uVar3);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a8ffac;
  _eh_vector_constructor_iterator_(in_ECX + 0x24,4,8,FUN_007c88a0,FUN_007016a0);
  piVar6 = in_ECX + 0x2c;
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(piVar6,4,8,FUN_007c88a0,FUN_007016a0);
  piVar7 = in_ECX + 0x35;
  local_4._0_1_ = 2;
  _eh_vector_constructor_iterator_(piVar7,4,0xd,FUN_007c88a0,FUN_004027d0);
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  in_ECX[0x34] = 0;
  local_14 = 8;
  do {
    puVar1 = (undefined4 *)piVar6[-8];
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      piVar6[-8] = 0;
    }
    puVar1 = (undefined4 *)*piVar6;
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar6 = 0;
    }
    piVar6 = piVar6 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  iVar5 = 0xd;
  do {
    if (*piVar7 != 0) {
      piVar6 = (int *)(*piVar7 + 0x60);
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        FUN_007604d0();
      }
      *piVar7 = 0;
    }
    piVar7 = piVar7 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined1 *)(in_ECX + 8) = 1;
  puVar1 = (undefined4 *)in_ECX[0x46];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x46] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x47];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x47] = 0;
  }
  puVar1 = DAT_00b43328;
  if (DAT_00b43328 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(DAT_00b43328 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b43328 = (undefined4 *)0x0;
  }
  if ((DAT_00b43071 == '\0') || (DAT_00b43072 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(in_ECX + 0x48) = uVar2;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c0540(byte param_1)

{
  FUN_007bdbd0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x007c0b0a) */
/* WARNING: Removing unreachable block (ram,0x007c0b0f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007c0560(void)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 uVar6;
  int iVar7;
  int *in_ECX;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  float10 fVar12;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ce0f0;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar2);
  iVar8 = 0;
  iStack_18 = 0;
  uStack_4._0_1_ = 1;
  uStack_4._1_3_ = 0;
  switch(in_ECX[0x34]) {
  case 0:
    piVar3 = in_ECX + 0x35;
    goto LAB_007c05c7;
  case 1:
    FUN_005070e0();
    iStack_14 = FUN_009828c0();
    iStack_14 = iStack_14 + -1;
    if (iStack_14 < 7) {
      if (iStack_14 < 0) {
        iStack_14 = 0;
      }
      else if (6 < iStack_14) goto LAB_007c0600;
    }
    else {
LAB_007c0600:
      iStack_14 = 6;
    }
    FUN_0076c890(in_ECX + 0x36);
    iVar8 = iStack_18;
    FUN_007aec20(**(undefined4 **)(iStack_18 + 0x24));
    uVar6 = FUN_00405a30();
    FUN_0076c910(uVar6);
    if (*(int **)(in_ECX[0x1f] + 0x20) == (int *)0x0) {
      iStack_10 = 0;
    }
    else {
      iStack_10 = (**(code **)(**(int **)(in_ECX[0x1f] + 0x20) + 0x4c))();
    }
    _DAT_00b2c794 = (float)iStack_10;
    if (iStack_10 < 0) {
      _DAT_00b2c794 = _DAT_00b2c794 + 4.2949673e+09;
    }
    _DAT_00b2c794 = 1.0 / _DAT_00b2c794;
    puVar9 = (undefined4 *)(&DAT_00a8f918 + iStack_14 * 0xf0);
    puVar10 = &DAT_00b43228;
    for (iVar7 = 0x3c; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    _DAT_00b2c798 = 0.0;
    fVar1 = *(float *)(&DAT_00a8f8f8 + iStack_14 * 4);
    pfVar5 = (float *)&DAT_00b43240;
    do {
      pfVar4 = pfVar5 + 0x14;
      pfVar5[-4] = pfVar5[-4] / fVar1;
      *pfVar5 = *pfVar5 / fVar1;
      pfVar5[4] = pfVar5[4] / fVar1;
      pfVar5[8] = pfVar5[8] / fVar1;
      pfVar5[0xc] = pfVar5[0xc] / fVar1;
      pfVar5 = pfVar4;
    } while ((int)pfVar4 < 0xb43330);
    break;
  case 2:
    FUN_005070e0();
    iStack_14 = FUN_009828c0();
    iStack_14 = iStack_14 + -1;
    if (iStack_14 < 7) {
      if (iStack_14 < 0) {
        iStack_14 = 0;
      }
      else if (6 < iStack_14) goto LAB_007c0702;
    }
    else {
LAB_007c0702:
      iStack_14 = 6;
    }
    FUN_0076c890(in_ECX + 0x37);
    iVar8 = iStack_18;
    FUN_007aec20(**(undefined4 **)(iStack_18 + 0x24));
    uVar6 = FUN_00405a30();
    FUN_0076c910(uVar6);
    _DAT_00b2c794 = 0.0;
    if (*(int **)(in_ECX[0x1f] + 0x20) == (int *)0x0) {
      iStack_10 = 0;
    }
    else {
      iStack_10 = (**(code **)(**(int **)(in_ECX[0x1f] + 0x20) + 0x4c))();
    }
    _DAT_00b2c798 = (float)iStack_10;
    if (iStack_10 < 0) {
      _DAT_00b2c798 = _DAT_00b2c798 + 4.2949673e+09;
    }
    _DAT_00b2c798 = 1.0 / _DAT_00b2c798;
    puVar9 = (undefined4 *)(&DAT_00a8f918 + iStack_14 * 0xf0);
    puVar10 = &DAT_00b43228;
    for (iVar7 = 0x3c; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    fVar1 = *(float *)(&DAT_00a8f8f8 + iStack_14 * 4);
    pfVar5 = (float *)&DAT_00b43240;
    do {
      pfVar4 = pfVar5 + 0x14;
      pfVar5[-4] = pfVar5[-4] / fVar1;
      *pfVar5 = *pfVar5 / fVar1;
      pfVar5[4] = pfVar5[4] / fVar1;
      pfVar5[8] = pfVar5[8] / fVar1;
      pfVar5[0xc] = pfVar5[0xc] / fVar1;
      pfVar5 = pfVar4;
    } while ((int)pfVar4 < 0xb43330);
    break;
  case 3:
  case 4:
  case 5:
  case 6:
    FUN_0076c890(in_ECX + 0x38);
    iVar8 = iStack_18;
    FUN_007aec20(**(undefined4 **)(iStack_18 + 0x24));
    uVar6 = FUN_00405a30();
    FUN_0076c910(uVar6);
    iVar7 = in_ECX[0x34];
    if ((iVar7 == 3) || (iVar7 == 4)) {
      if (DAT_00b43071 == '\0') {
        iVar7 = 0x40;
        puVar9 = &DAT_00b2c7e8;
        puVar10 = &DAT_00b43228;
      }
      else {
        iVar7 = 0x10;
        puVar9 = &DAT_00b2c7a8;
        puVar10 = &DAT_00b43228;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      FUN_007aecb0(in_ECX[0x24]);
      iVar7 = in_ECX[0x2c];
LAB_007c0893:
      FUN_007aec60(iVar7);
    }
    else if (iVar7 == 6) {
      puVar9 = &DAT_00b2c8e8;
      puVar10 = &DAT_00b43228;
      for (iVar7 = 0x24; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      FUN_007aecb0(in_ECX[0x25]);
      iVar7 = in_ECX[0x2d];
      goto LAB_007c0893;
    }
    if (*(int **)(in_ECX[0x1f] + 0x20) == (int *)0x0) {
      iStack_10 = 0;
    }
    else {
      iStack_10 = (**(code **)(**(int **)(in_ECX[0x1f] + 0x20) + 0x4c))();
    }
    _DAT_00b2c794 = (float)iStack_10;
    if (iStack_10 < 0) {
      _DAT_00b2c794 = _DAT_00b2c794 + 4.2949673e+09;
    }
    _DAT_00b2c794 = 1.0 / _DAT_00b2c794;
    if (*(int **)(in_ECX[0x1f] + 0x20) == (int *)0x0) {
      iStack_10 = 0;
    }
    else {
      iStack_10 = (**(code **)(**(int **)(in_ECX[0x1f] + 0x20) + 0x50))();
    }
    _DAT_00b2c798 = (float)iStack_10;
    if (iStack_10 < 0) {
      _DAT_00b2c798 = _DAT_00b2c798 + 4.2949673e+09;
    }
    _DAT_00b2c798 = 1.0 / _DAT_00b2c798;
    break;
  case 7:
    FUN_0076c890(in_ECX + 0x3c);
    uVar6 = **(undefined4 **)(iStack_18 + 0x24);
    goto LAB_007c0ac7;
  case 8:
    piVar3 = in_ECX + 0x3d;
    goto LAB_007c05c7;
  case 9:
    fVar12 = (float10)FUN_005071a0();
    in_ECX[0x42] = (int)(float)fVar12;
    FUN_0076c890(in_ECX + 0x3e);
    iVar8 = iStack_18;
    FUN_007aec20(**(undefined4 **)(iStack_18 + 0x24));
    uVar6 = FUN_00405a30();
    FUN_0076c910(uVar6);
    FUN_007aec20(*(undefined4 *)(*(int *)(iVar8 + 0x24) + 4));
    FUN_0076c910(in_ECX[0x46]);
    FUN_007aec20(*(undefined4 *)(*(int *)(iVar8 + 0x24) + 8));
    iVar7 = in_ECX[0x47];
    goto LAB_007c0ad9;
  case 10:
    fVar12 = (float10)FUN_00507060();
    in_ECX[0x42] = (int)(float)fVar12;
    fVar12 = (float10)FUN_005070a0();
    in_ECX[0x43] = (int)(float)fVar12;
    piVar3 = in_ECX + 0x3f;
LAB_007c05c7:
    FUN_0076c890(piVar3);
    uVar6 = **(undefined4 **)(iStack_18 + 0x24);
LAB_007c0ac7:
    iVar8 = iStack_18;
    FUN_007aec20(uVar6);
    iVar7 = FUN_00405a30();
LAB_007c0ad9:
    FUN_0076c910(iVar7);
    break;
  case 0xb:
    fVar12 = (float10)FUN_0043f490(1,1);
    if (fVar12 * (float10)15.0 < (float10)0.0) {
LAB_007c0a07:
      fVar11 = (float10)FUN_0043f490(1,1);
      fVar12 = (float10)0;
      if (fVar12 <= fVar11 * (float10)15.0) {
        fVar12 = (float10)FUN_0043f490(1,1);
        fVar12 = fVar12 * (float10)15.0;
      }
    }
    else {
      fVar11 = (float10)FUN_0043f490(1,1);
      fVar12 = (float10)1;
      if (fVar11 * (float10)15.0 <= fVar12) goto LAB_007c0a07;
    }
    in_ECX[0x22] = (int)(float)fVar12;
    fVar12 = (float10)FUN_00507110();
    in_ECX[0x44] = (int)(float)fVar12;
    fVar12 = (float10)FUN_00507170();
    in_ECX[0x45] = (int)(float)fVar12;
    FUN_0076c890(in_ECX + 0x40);
    iVar8 = iStack_18;
    FUN_007aec20(**(undefined4 **)(iStack_18 + 0x24));
    uVar6 = FUN_00405a30();
    FUN_0076c910(uVar6);
    FUN_007aec20(*(undefined4 *)(*(int *)(iVar8 + 0x24) + 4));
    iVar7 = in_ECX[0x46];
    goto LAB_007c0ad9;
  case 0xc:
    fVar12 = (float10)FUN_00507170();
    in_ECX[0x42] = (int)(float)fVar12;
    FUN_0076c890(in_ECX + 0x41);
    uVar6 = **(undefined4 **)(iStack_18 + 0x24);
    goto LAB_007c0ac7;
  default:
    goto switchD_007c05ba_default;
  }
  FUN_0076ce40(in_ECX[0xe],&iStack_18);
  in_ECX[0xe] = in_ECX[0xe] + 1;
switchD_007c05ba_default:
  uStack_4 = 0xffffffff;
  if (iVar8 != 0) {
    piVar3 = (int *)(iVar8 + 0x60);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      FUN_007604d0();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int * FUN_007c0b80(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(8,uVar2);
  piVar8 = (int *)0x0;
  local_4 = 0;
  if (iVar3 != 0) {
    piVar8 = (int *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_00771090(DAT_00b43104,2,1);
  puVar6 = (undefined4 *)*piVar8;
  if (puVar6 != puVar4) {
    if (((puVar6 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar6 + 1), LVar5 == 0)) &&
       (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    *piVar8 = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  (**(code **)(*(int *)*piVar8 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*piVar8 + 0x50))(1,7,5,1,0);
  if ((int *)*piVar8 != (int *)0x0) {
    for (puVar6 = (undefined4 *)(**(code **)(*(int *)*piVar8 + 4))();
        (puVar6 != (undefined4 *)0x0 && (puVar6 != &DAT_00b3f684)); puVar6 = (undefined4 *)puVar6[1]
        ) {
    }
  }
  iVar3 = FUN_00401f00(0x124);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_007c0330();
  }
  (**(code **)(*piVar7 + 0x84))();
  (**(code **)(*piVar7 + 0xb0))();
  (**(code **)(*piVar7 + 0xb4))();
  piVar1 = (int *)piVar8[1];
  if (piVar1 != piVar7) {
    if (((piVar1 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar1 + 1), LVar5 == 0)) &&
       (piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    piVar8[1] = (int)piVar7;
    InterlockedIncrement(piVar7 + 1);
  }
  (**(code **)(*(int *)piVar8[1] + 0x54))(*piVar8);
  *unaff_FS_OFFSET = iVar3;
  return piVar8;
}



void FUN_007c0d10(int *param_1,undefined4 *param_2,uint *param_3,uint *param_4,int *param_5,
                 undefined4 *param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  
  *param_6 = 0;
  switch(param_2) {
  case (undefined4 *)0x0:
    *param_7 = 0x26;
    *param_4 = 0x100;
    *param_3 = 0x100;
    *param_5 = 0x71;
    return;
  case (undefined4 *)0x1:
    *param_7 = 0x26;
    *param_3 = 0x100;
    piVar3 = (int *)(**(code **)(*param_1 + 0x7c))();
    puVar1 = (undefined4 *)(**(code **)(*piVar3 + 0x50))(0);
    iVar2 = FUN_009828c0();
    if (iVar2 < 0x100) {
      *param_3 = 0x100;
      *param_4 = 0x71;
      return;
    }
    piVar3 = (int *)(**(code **)(*param_1 + 0x7c))();
    (**(code **)(*piVar3 + 0x50))(0);
    uVar4 = FUN_009828c0();
    *puVar1 = uVar4;
    *param_3 = 0x71;
    return;
  case (undefined4 *)0x2:
    *param_7 = 0x26;
    *param_4 = 0x100;
    *param_3 = 0x100;
    *param_5 = 0x71;
    return;
  case (undefined4 *)0x3:
    piVar3 = (int *)(**(code **)(*param_1 + 0x7c))();
    uVar4 = (**(code **)(*piVar3 + 0x4c))(0);
    *param_2 = uVar4;
    piVar3 = (int *)(**(code **)(*param_1 + 0x7c))();
    uVar4 = (**(code **)(*piVar3 + 0x50))(0);
    *param_2 = uVar4;
    *param_5 = 0x26;
    *param_3 = 0;
    return;
  case (undefined4 *)0x4:
    piVar3 = (int *)(**(code **)(*param_1 + 0x7c))();
    uVar4 = (**(code **)(*piVar3 + 0x4c))(0);
    *param_2 = uVar4;
    piVar3 = (int *)(**(code **)(*param_1 + 0x7c))();
    uVar4 = (**(code **)(*piVar3 + 0x50))(0);
    *param_2 = uVar4;
    *param_5 = ((DAT_00b34fc0 < 2) - 1 & 0x80) + 0x22;
    *param_3 = -(uint)(DAT_00b43070 != '\0') & 0x71;
    return;
  case (undefined4 *)0x5:
    piVar3 = (int *)(**(code **)(*param_1 + 0x7c))();
    (**(code **)(*piVar3 + 0x4c))(0);
    uVar4 = FUN_009828c0();
    *param_2 = uVar4;
    piVar3 = (int *)(**(code **)(*param_1 + 0x7c))();
    (**(code **)(*piVar3 + 0x50))(0);
    uVar4 = FUN_009828c0();
    *param_2 = uVar4;
    *param_5 = (uint)(DAT_00b42f3e != '\0') * 4 + 0x22;
    *param_3 = 0;
    return;
  case (undefined4 *)0x6:
    *param_4 = DAT_00b45fc8;
    *param_3 = DAT_00b45fc8;
    *param_7 = 6;
    *param_5 = 0x74;
    return;
  case (undefined4 *)0x7:
    *param_4 = 0x100;
    *param_3 = 0x100;
    *param_7 = 6;
    *param_5 = 0x24;
    return;
  case (undefined4 *)0x8:
    *param_4 = 0x80;
    *param_3 = 0x80;
    *param_7 = 6;
    *param_5 = 0x24;
    return;
  case (undefined4 *)0x9:
    *param_3 = DAT_00b45fc8;
    *param_4 = 1;
    *param_7 = 0xc;
    *param_5 = 0x51;
    return;
  case (undefined4 *)0xa:
    *param_3 = DAT_00b45fc8;
    *param_4 = 0x10;
    *param_7 = 0xc;
    *param_5 = 0x74;
    return;
  case (undefined4 *)0xb:
    *param_4 = DAT_00b45fc8;
    *param_3 = DAT_00b45fc8;
    *param_7 = 0xc;
    *param_5 = 0x72;
    return;
  case (undefined4 *)0xc:
    *param_4 = DAT_00b45fc8;
    *param_3 = DAT_00b45fc8;
    *param_7 = 0xc;
    *param_5 = 0x74;
    return;
  case (undefined4 *)0xd:
    *param_4 = 0x100;
    *param_3 = 0x100;
    *param_7 = 2;
    *param_5 = 0x15;
    return;
  case (undefined4 *)0xe:
    *param_4 = 0x100;
    *param_3 = 0x100;
    *param_7 = 6;
    *param_5 = 0;
    return;
  case (undefined4 *)0xf:
  case (undefined4 *)0x10:
    *param_4 = DAT_00b2c2b8;
    *param_3 = DAT_00b2c2b8;
    *param_7 = 6;
    *param_5 = 0;
    return;
  case (undefined4 *)0x11:
  case (undefined4 *)0x12:
    *param_4 = 0x80;
    *param_3 = 0x80;
    break;
  case (undefined4 *)0x13:
    *param_4 = DAT_00b2c2b8;
    *param_3 = DAT_00b2c2b8;
    break;
  case (undefined4 *)0x14:
    piVar3 = (int *)(**(code **)(*param_1 + 0x7c))();
    uVar4 = (**(code **)(*piVar3 + 0x4c))(0);
    *param_2 = uVar4;
    piVar3 = (int *)(**(code **)(*param_1 + 0x7c))();
    uVar4 = (**(code **)(*piVar3 + 0x50))(0);
    *param_2 = uVar4;
    *param_5 = 0x46;
    *param_3 = 0;
    return;
  case (undefined4 *)0x15:
    *param_4 = 0x100;
    *param_3 = 0x100;
    *param_7 = 2;
    *param_5 = 0;
    return;
  case (undefined4 *)0x16:
    *param_4 = 0x200;
    *param_3 = 0x200;
    *param_7 = 6;
    *param_5 = 0x72;
    return;
  case (undefined4 *)0x17:
    uVar5 = (uint)DAT_00b2c67c;
    *param_4 = uVar5;
    *param_3 = uVar5;
    *param_7 = 6;
    *param_5 = DAT_00b2c994;
    return;
  case (undefined4 *)0x18:
    *param_4 = 0x100;
    *param_3 = 0x100;
    *param_7 = 0x10;
    *param_5 = 0;
  default:
    return;
  }
  *param_7 = 6;
  *param_5 = 0;
  return;
}



int FUN_007c1360(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int in_ECX;
  int *unaff_ESI;
  uint uVar7;
  
  piVar1 = DAT_00b3f928;
  iVar6 = *(int *)(in_ECX + 0x40);
  uVar7 = (uint)DAT_00b2c67c;
  if (((iVar6 == 0) || (*(uint *)(iVar6 + 8) < uVar7)) || (*(uint *)(iVar6 + 0xc) < uVar7)) {
    piVar5 = (int *)(in_ECX + 0x44);
    if (*(int *)(in_ECX + 0x44) == 0) {
      uVar2 = FUN_0076c6d0(DAT_00b2c994);
      uVar3 = (**(code **)(*piVar1 + 0x98))(uVar2);
      uVar4 = FUN_0070bc70(uVar7,uVar7,piVar1,uVar3);
      FUN_0075fa90(uVar4);
      FUN_00401f20(uVar3);
      FUN_00401f20(uVar2);
      piVar5 = unaff_ESI;
    }
    iVar6 = *piVar5;
  }
  return iVar6;
}



void FUN_007c13f0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x44);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x44) = 0;
  }
  return;
}



int FUN_007c1430(undefined4 param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                uint param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce11b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = 0;
  uVar5 = 0;
  local_10 = 2;
  iVar2 = param_2;
  iVar3 = param_3;
  if (DAT_00b42e96 == '\0') {
    if (param_3 < (int)param_2) {
      param_3 = param_2;
    }
    iVar2 = 1;
    iVar3 = iVar2;
    if (1 < param_3) {
      do {
        iVar2 = iVar2 * 2;
        iVar3 = iVar2;
      } while (iVar2 < param_3);
    }
  }
  local_18 = 2;
  local_14 = 2;
  if (param_4 != 0) {
    DAT_00b3ff00 = 1;
    DAT_00b2752c = param_4;
  }
  if ((param_6 & 8) != 0) {
    DAT_00b27530 = 0;
  }
  if ((param_6 & 0x80) != 0) {
    DAT_00b294ec = 0;
  }
  if ((param_6 & 0x100) == 0) {
    uVar5 = *(undefined4 *)(in_ECX + 0x40);
  }
  param_2 = CONCAT31(param_2._1_3_,~(byte)(param_6 >> 2)) & 0xffffff01;
  if ((param_6 & 0x10) == 0) {
    iVar4 = FUN_007d6f40(iVar2,iVar3,&local_18,param_2,uVar5,uVar1);
  }
  else {
    iVar2 = FUN_009a1ce0(iVar2,DAT_00b43104,&local_18);
    if (iVar2 != 0) {
      iVar3 = FUN_00401f00(0x24);
      local_4 = 0;
      if (iVar3 == 0) {
        iVar4 = 0;
        local_4 = 0xffffffff;
      }
      else {
        iVar4 = FUN_007d6bd0(iVar2,1,uVar5);
        local_4 = 0xffffffff;
      }
    }
  }
  if (param_4 != 0) {
    DAT_00b3ff00 = 0;
  }
  if ((param_6 & 8) != 0) {
    DAT_00b27530 = 1;
  }
  if ((param_6 & 0x80) != 0) {
    DAT_00b294ec = 1;
  }
  if ((iVar4 == 0) && (DAT_00b42e8c != (code *)0x0)) {
    (*DAT_00b42e8c)("Unable to create rendered texture",0);
  }
  *unaff_FS_OFFSET = local_c;
  return iVar4;
}



void FUN_007c15c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_007c1430(param_1,param_2,param_2,param_3,param_4,param_5);
  return;
}



void FUN_007c15f0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ce148;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a90164;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a90144;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c1650(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ce178;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a90174;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a90154;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c16b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *in_ECX;
  
  puVar3 = (undefined4 *)(**(code **)(*in_ECX + 4))();
  puVar1 = (undefined4 *)puVar3[2];
  if (puVar1 != (undefined4 *)*param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *param_1;
    puVar3[2] = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  *puVar3 = 0;
  puVar3[1] = in_ECX[2];
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    *(undefined4 *)in_ECX[2] = puVar3;
    in_ECX[3] = in_ECX[3] + 1;
    in_ECX[2] = (int)puVar3;
    return;
  }
  in_ECX[3] = in_ECX[3] + 1;
  in_ECX[1] = (int)puVar3;
  in_ECX[2] = (int)puVar3;
  return;
}



int * FUN_007c1740(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b21d9;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = (int *)in_ECX[1];
  iVar2 = *piVar1;
  in_ECX[1] = iVar2;
  if (iVar2 == 0) {
    in_ECX[2] = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  iVar2 = piVar1[2];
  *param_1 = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 4));
  }
  local_4 = 0;
  (**(code **)(*in_ECX + 8))(piVar1,uVar3);
  in_ECX[3] = in_ECX[3] + -1;
  *unaff_FS_OFFSET = 1;
  return param_1;
}



int * FUN_007c17d0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  LONG LVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int *unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce1c1;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = (int *)*param_2;
  if (piVar1 == (int *)in_ECX[1]) {
    *param_2 = *piVar1;
    FUN_007c1740(param_1);
    *unaff_FS_OFFSET = local_c;
    return param_1;
  }
  if (piVar1 == (int *)in_ECX[2]) {
    *param_2 = 0;
    FUN_007d1fd0(param_1);
    *unaff_FS_OFFSET = local_c;
    return param_1;
  }
  piVar2 = (int *)piVar1[1];
  iVar3 = *piVar1;
  *param_2 = iVar3;
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar3;
  }
  if (iVar3 != 0) {
    *(int **)(iVar3 + 4) = piVar2;
  }
  puVar4 = (undefined4 *)piVar1[2];
  if (puVar4 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar4 + 1);
  }
  local_4 = 1;
  (**(code **)(*in_ECX + 8))(piVar1,uVar5);
  in_ECX[3] = in_ECX[3] + -1;
  *unaff_retaddr = (int)puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar4 + 1);
  }
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  if (puVar4 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar4 + 1);
    if (LVar6 == 0) {
      (**(code **)*puVar4)(1);
    }
  }
  *unaff_FS_OFFSET = 0;
  return unaff_retaddr;
}



void FUN_007c1920(byte param_1)

{
  FUN_007c1650();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007c1940(byte param_1)

{
  FUN_007c15f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_007c1960(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ce1f0;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = (undefined4 *)0x0;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x2c) != 0) {
    uVar3 = FUN_007c1740(&local_10);
    local_4._0_1_ = 1;
    FUN_0055e2a0(uVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_10 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(local_10 + 1);
      if ((LVar4 == 0) && (local_10 != (undefined4 *)0x0)) {
        (**(code **)*local_10)(1,uVar2);
      }
    }
    FUN_007c16b0(&local_14);
  }
  puVar1 = local_14;
  local_4 = 0xffffffff;
  if (local_14 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(local_14 + 1);
    if (LVar4 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return puVar1;
}



void FUN_007c1a30(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int *local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d6b38;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
    local_10 = (undefined4 *)0x0;
    piVar1 = *(int **)(in_ECX + 0x34);
    local_4 = 0;
    local_14 = piVar1;
    for (; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      if (puVar5 != (undefined4 *)piVar1[2]) {
        if ((puVar5 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar5 + 1), LVar4 == 0))
        {
          (**(code **)*puVar5)(1);
        }
        puVar5 = (undefined4 *)piVar1[2];
        local_10 = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar5 + 1);
        }
      }
      if (puVar5 == param_1) {
        if (piVar1 != (int *)0x0) {
          local_14 = piVar1;
          FUN_007c16b0(&local_10);
          FUN_007c17d0(&param_1,&local_14);
          puVar2 = param_1;
          piVar1 = local_14;
          if (((param_1 != (undefined4 *)0x0) &&
              (LVar4 = InterlockedDecrement(param_1 + 1), piVar1 = local_14, LVar4 == 0)) &&
             (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
            piVar1 = local_14;
          }
        }
        break;
      }
    }
    local_14 = piVar1;
    local_4 = 0xffffffff;
    if ((puVar5 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar5 + 1), LVar4 == 0)) {
      (**(code **)*puVar5)(1,uVar3);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Type propagation algorithm not settling */

int FUN_007c1b50(int *param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  int unaff_EBX;
  int *unaff_EBP;
  int unaff_retaddr;
  int *piVar7;
  undefined4 *puStack_4;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0x7c))();
  (**(code **)(*piVar2 + 0x4c))(0);
  piVar2 = (int *)(**(code **)(*param_1 + 0x7c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x50))(0);
  if ((param_3 == 0) || ((param_2 & 8) != 0)) goto LAB_007c1c74;
  switch(param_3) {
  case 0x14:
    if (DAT_00b42e9d != '\0') goto LAB_007c1c74;
    goto switchD_007c1bc5_caseD_1b;
  case 0x15:
    cVar1 = DAT_00b42e9e;
    break;
  case 0x16:
    cVar1 = DAT_00b42e9f;
    break;
  case 0x17:
    cVar1 = DAT_00b42e98;
    break;
  case 0x18:
    cVar1 = DAT_00b42e99;
    break;
  case 0x19:
    cVar1 = DAT_00b42e9a;
    break;
  case 0x1a:
    cVar1 = DAT_00b42e9b;
    break;
  default:
    goto switchD_007c1bc5_caseD_1b;
  case 0x24:
    cVar1 = DAT_00b42ea2;
    break;
  case 0x32:
    cVar1 = DAT_00b42ea4;
    break;
  case 0x51:
    cVar1 = DAT_00b42e9c;
    break;
  case 0x71:
    cVar1 = DAT_00b42ea1;
    break;
  case 0x72:
    cVar1 = DAT_00b42ea0;
    break;
  case 0x74:
    cVar1 = DAT_00b42ea3;
  }
  if (cVar1 == '\0') {
switchD_007c1bc5_caseD_1b:
    if (param_3 == 0x24) {
      param_3 = 0x71;
    }
  }
LAB_007c1c74:
  puVar6 = *(undefined4 **)(in_ECX + 4);
  puStack_4 = puVar6;
  if (puVar6 != (undefined4 *)0x0) {
    do {
      if (unaff_EBP != (int *)0x0) goto LAB_007c1dc9;
      piVar7 = (int *)puVar6[2];
      if (*(int **)(*piVar7 + 0x20) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(**(int **)(*piVar7 + 0x20) + 0x4c))();
      }
      if (iVar3 == unaff_retaddr) {
LAB_007c1ccf:
        if (*(int **)(*piVar7 + 0x20) == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)(**(code **)(**(int **)(*piVar7 + 0x20) + 0x50))();
        }
        if (piVar4 != param_1) {
          if (param_1 == (int *)0x0) {
            if (*(int **)(*piVar7 + 0x20) == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = (int *)(**(code **)(**(int **)(*piVar7 + 0x20) + 0x50))();
            }
            if (piVar4 == piVar2) goto LAB_007c1d09;
          }
          goto LAB_007c1d2e;
        }
LAB_007c1d09:
        if (((piVar7[1] != param_3) || (piVar7[2] != param_4)) ||
           ((piVar7[3] | 0x22U) != (param_2 | 0x22))) goto LAB_007c1d2e;
      }
      else {
        if (unaff_retaddr == 0) {
          if (*(int **)(*piVar7 + 0x20) == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = (**(code **)(**(int **)(*piVar7 + 0x20) + 0x4c))();
          }
          if (iVar3 == in_ECX) goto LAB_007c1ccf;
        }
LAB_007c1d2e:
        puVar6 = (undefined4 *)*puVar6;
        piVar7 = unaff_EBP;
      }
      unaff_EBP = piVar7;
    } while (puVar6 != (undefined4 *)0x0);
    puStack_4 = puVar6;
    if (piVar7 != (int *)0x0) {
LAB_007c1dc9:
      puStack_4 = puVar6;
      FUN_007aa860(&puStack_4);
      *(undefined1 *)(unaff_EBP + 4) = 1;
      goto LAB_007c1de5;
    }
  }
  unaff_EBP = (int *)FUN_00401f00(0x14);
  if (unaff_EBP == (int *)0x0) {
    unaff_EBP = (int *)0x0;
  }
  else {
    *unaff_EBP = 0;
  }
  unaff_EBP[3] = param_2;
  unaff_EBP[1] = param_3;
  unaff_EBP[2] = param_4;
  *(undefined1 *)(unaff_EBP + 4) = 1;
  if ((0 < unaff_retaddr) && (0 < (int)param_1)) {
    in_ECX = unaff_retaddr;
    piVar2 = param_1;
  }
  uVar5 = FUN_007c1430(param_1,in_ECX,piVar2,param_3,param_4,param_2);
  FUN_0075fa90(uVar5);
LAB_007c1de5:
  puVar6 = (undefined4 *)(**(code **)(*(int *)(unaff_EBX + 0x10) + 4))();
  puVar6[2] = unaff_EBP;
  *puVar6 = 0;
  puVar6[1] = *(undefined4 *)(unaff_EBX + 0x18);
  if (*(undefined4 **)(unaff_EBX + 0x18) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBX + 0x18) = puVar6;
    *(int *)(unaff_EBX + 0x1c) = *(int *)(unaff_EBX + 0x1c) + 1;
    *(undefined4 **)(unaff_EBX + 0x18) = puVar6;
    return *unaff_EBP;
  }
  *(int *)(unaff_EBX + 0x1c) = *(int *)(unaff_EBX + 0x1c) + 1;
  *(undefined4 **)(unaff_EBX + 0x14) = puVar6;
  *(undefined4 **)(unaff_EBX + 0x18) = puVar6;
  return *unaff_EBP;
}



void FUN_007c1ee0(int *param_1)

{
  int in_ECX;
  int *piVar1;
  int *piVar2;
  undefined4 *local_4;
  
  if (param_1 != (int *)0x0) {
    local_4 = *(undefined4 **)(in_ECX + 0x14);
    piVar1 = (int *)0x0;
    if (local_4 != (undefined4 *)0x0) {
      do {
        if (piVar1 != (int *)0x0) goto LAB_007c1f2b;
        piVar2 = (int *)local_4[2];
        if ((int *)*piVar2 != param_1) {
          local_4 = (undefined4 *)*local_4;
          piVar2 = piVar1;
        }
        piVar1 = piVar2;
      } while (local_4 != (undefined4 *)0x0);
      if (piVar2 != (int *)0x0) {
LAB_007c1f2b:
        param_1 = piVar1;
        FUN_005b1e20(&param_1);
        FUN_007aa860(&local_4);
      }
    }
  }
  return;
}



void FUN_007c1ff0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ce24f;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a901a8;
  in_ECX[7] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[4] = &PTR_FUN_00a901a8;
  in_ECX[0xb] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[8] = &PTR_FUN_00a901b8;
  in_ECX[0xf] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xc] = &PTR_FUN_00a901b8;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  local_4 = 5;
  piVar3 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))(uVar2);
  if (DAT_00b34fc0 < 2) {
    uVar4 = (**(code **)(*piVar3 + 0x74))();
    FUN_0075fa90(uVar4);
  }
  else {
    DAT_00b294ec = 0;
    uVar4 = (**(code **)(*piVar3 + 0x70))(0,DAT_00b3f928);
    uVar4 = FUN_0070be00(uVar4);
    FUN_0075fa90(uVar4);
    DAT_00b294ec = 1;
  }
  puVar1 = (undefined4 *)in_ECX[0x11];
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x11] = 0;
  }
  *unaff_FS_OFFSET = (int)in_ECX;
  return;
}



void FUN_007c2100(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  LONG LVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ce2af;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = in_ECX[0xf];
  local_4 = 5;
  while (iVar1 != 0) {
    FUN_007c1740(local_14);
    puVar3 = local_14[0];
    if (((local_14[0] != (undefined4 *)0x0) &&
        (LVar6 = InterlockedDecrement(local_14[0] + 1), LVar6 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    iVar1 = in_ECX[0xf];
  }
  iVar1 = in_ECX[0xb];
  while (iVar1 != 0) {
    FUN_007c1740(local_14);
    puVar3 = local_14[0];
    if (((local_14[0] != (undefined4 *)0x0) &&
        (LVar6 = InterlockedDecrement(local_14[0] + 1), LVar6 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    iVar1 = in_ECX[0xb];
  }
  if (in_ECX[7] != 0) {
    do {
      piVar2 = *(int **)(in_ECX[5] + 8);
      puVar3 = (undefined4 *)*piVar2;
      if (puVar3 != (undefined4 *)0x0) {
        LVar6 = InterlockedDecrement(puVar3 + 1);
        if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        *piVar2 = 0;
      }
      piVar4 = (int *)in_ECX[5];
      iVar1 = *piVar4;
      in_ECX[5] = iVar1;
      if (iVar1 == 0) {
        in_ECX[6] = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      (**(code **)(in_ECX[4] + 8))(piVar4,uVar5);
      in_ECX[7] = in_ECX[7] + -1;
      puVar3 = (undefined4 *)*piVar2;
      if (((puVar3 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar3 + 1), LVar6 == 0))
         && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      FUN_00401f20(piVar2);
    } while (in_ECX[7] != 0);
  }
  iVar1 = in_ECX[3];
  while (iVar1 != 0) {
    piVar2 = *(int **)(in_ECX[1] + 8);
    puVar3 = (undefined4 *)*piVar2;
    if (puVar3 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar3 + 1);
      if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      *piVar2 = 0;
    }
    piVar4 = (int *)in_ECX[1];
    iVar1 = *piVar4;
    in_ECX[1] = iVar1;
    if (iVar1 == 0) {
      in_ECX[2] = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    (**(code **)(*in_ECX + 8))(piVar4);
    in_ECX[3] = in_ECX[3] + -1;
    puVar3 = (undefined4 *)*piVar2;
    if (((puVar3 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar3 + 1), LVar6 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    FUN_00401f20(piVar2);
    iVar1 = in_ECX[3];
  }
  puVar3 = (undefined4 *)in_ECX[0x10];
  if (puVar3 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar3 + 1);
    if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    in_ECX[0x10] = 0;
  }
  puVar3 = (undefined4 *)in_ECX[0x11];
  if (puVar3 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar3 + 1);
    if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    in_ECX[0x11] = 0;
  }
  puVar3 = (undefined4 *)in_ECX[0x11];
  local_4._0_1_ = 4;
  if (((puVar3 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar3 + 1), LVar6 == 0)) &&
     (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  puVar3 = (undefined4 *)in_ECX[0x10];
  local_4._0_1_ = 3;
  if (((puVar3 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar3 + 1), LVar6 == 0)) &&
     (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  local_4._0_1_ = 2;
  FUN_007c1650();
  local_4._0_1_ = 1;
  FUN_007c1650();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_007c15f0();
  local_4 = 0xffffffff;
  FUN_007c15f0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c23c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  FUN_007c0d10(param_1,param_2,&local_4,&local_8,&param_1,&param_2,&local_c);
  FUN_007c1b50(uVar1,local_4,local_8,local_c,param_1,param_2);
  return;
}



void FUN_007c2420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_007c1b50(param_1,param_2,param_2,param_3,param_4,param_5);
  return;
}



void FUN_007c2450(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (DAT_00b43070 != '\0') {
    FUN_007c1b50(DAT_00b43104,1,1,0x24,0x71,0);
    FUN_007c1b50(DAT_00b43104,1,1,0x24,0x71,0);
    FUN_007c1b50(DAT_00b43104,1,1,0x24,0x71,0);
    FUN_007c1b50(DAT_00b43104,4,4,0x26,0x71,0);
    FUN_007c1b50(DAT_00b43104,0x10,0x10,0x26,0x71,0);
    FUN_007c1b50(DAT_00b43104,0x40,0x40,0x26,0x71,0);
    FUN_007c23c0(DAT_00b43104,2);
    FUN_007c23c0(DAT_00b43104,0);
    FUN_007c23c0(DAT_00b43104,4);
    if ((DAT_00b43071 != '\0') && (DAT_00b43072 != '\0')) {
      FUN_007c23c0(DAT_00b43104,1);
    }
  }
  piVar1 = DAT_00b43104;
  if (DAT_00b42f3e != '\0') {
    piVar2 = (int *)(**(code **)(*DAT_00b43104 + 0x7c))();
    uVar3 = (**(code **)(*piVar2 + 0x4c))(0);
    piVar2 = (int *)(**(code **)(*piVar1 + 0x7c))();
    uVar4 = (**(code **)(*piVar2 + 0x50))(0);
    FUN_007c1b50(piVar1,uVar3,uVar4,0x26,0,0);
  }
  piVar1 = DAT_00b43104;
  piVar2 = (int *)(**(code **)(*DAT_00b43104 + 0x7c))();
  (**(code **)(*piVar2 + 0x4c))(0);
  uVar3 = FUN_009828c0();
  piVar2 = (int *)(**(code **)(*piVar1 + 0x7c))();
  (**(code **)(*piVar2 + 0x50))(0);
  uVar4 = FUN_009828c0();
  FUN_007c1b50(piVar1,uVar3,uVar4,(DAT_00b42f3e != '\0') * '\x04' + '\"',0,0);
  piVar1 = DAT_00b43104;
  piVar2 = (int *)(**(code **)(*DAT_00b43104 + 0x7c))();
  (**(code **)(*piVar2 + 0x4c))(0);
  uVar3 = FUN_009828c0();
  piVar2 = (int *)(**(code **)(*piVar1 + 0x7c))();
  (**(code **)(*piVar2 + 0x50))(0);
  uVar4 = FUN_009828c0();
  FUN_007c1b50(piVar1,uVar3,uVar4,(DAT_00b42f3e != '\0') * '\x04' + '\"',0,0);
  iVar5 = 0;
  do {
    if (*(int *)(&stack0xffffffbc + iVar5 * 4) != 0) {
      FUN_007c1ee0(*(int *)(&stack0xffffffbc + iVar5 * 4));
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xd);
  return;
}



void FUN_007c2710(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  LONG LVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce2e0;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (in_ECX[0xf] == 0) {
    puVar5 = (undefined4 *)in_ECX[0xb];
    if (param_2 < puVar5) {
      iVar2 = (int)puVar5 - (int)param_2;
      do {
        FUN_007c1740(&param_2);
        local_4 = 0;
        piVar3 = (int *)FUN_007d6fe0(uVar1);
        (**(code **)(*piVar3 + 0x6c))(0);
        FUN_007c1ee0(param_2);
        puVar5 = param_2;
        local_4 = 0xffffffff;
        if (((param_2 != (undefined4 *)0x0) &&
            (LVar4 = InterlockedDecrement(param_2 + 1), LVar4 == 0)) &&
           (puVar5 != (undefined4 *)0x0)) {
          (**(code **)*puVar5)(1);
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else if (puVar5 < param_2) {
      param_2 = (undefined4 *)((int)param_2 - (int)puVar5);
      local_10 = in_ECX;
      do {
        puVar5 = (undefined4 *)FUN_007c23c0(param_1,0x17);
        local_10 = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar5 + 1);
        }
        local_4 = 1;
        piVar3 = (int *)FUN_007d6fe0();
        iVar2 = *piVar3;
        uVar6 = FUN_007c1360();
        (**(code **)(iVar2 + 0x6c))(uVar6);
        FUN_007c16b0(&local_10);
        local_4 = 0xffffffff;
        if ((puVar5 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar5 + 1), LVar4 == 0))
        {
          (**(code **)*puVar5)(1);
        }
        param_2 = (undefined4 *)((int)param_2 + -1);
      } while (param_2 != (undefined4 *)0x0);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c28e0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  *in_ECX = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0x3f800000;
  return;
}



void thunk_FUN_007ee5d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  
  iVar1 = param_1;
  FUN_007e28e0(param_1);
  param_1 = FUN_0070f910(DAT_00b4618c);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070faa0("number of lights",*(undefined4 *)(in_ECX + 0x78));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  uVar2 = FUN_007ed5d0();
  param_1 = FUN_0070faa0("active lights",uVar2);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  if (*(int *)(in_ECX + 0x8c) != 0) {
    param_1 = FUN_0070fb40("number of decals",*(int *)(in_ECX + 0x8c));
    uVar3 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
  }
  param_1 = FUN_0070fb40("Reference ID",*(undefined4 *)(in_ECX + 0x98));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  return;
}



void FUN_007c2960(float param_1,float param_2,float param_3,float param_4)

{
  DAT_00b43330 = param_1;
  DAT_00b43334 = param_2 - param_1;
  DAT_00b43338 = param_3;
  DAT_00b4333c = param_4 - param_3;
  return;
}



uint FUN_007c2990(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_009828c0();
  iVar1 = FUN_009828c0();
  FUN_009828c0();
  uVar2 = FUN_009828c0();
  return uVar2 & 0xffff | iVar1 << 0x10;
}



void FUN_007c2a40(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *in_ECX;
  uint uVar3;
  
  uVar3 = 0;
  if (in_ECX[1] != 0) {
    do {
      iVar1 = *(int *)(in_ECX[2] + uVar3 * 4);
      while (iVar1 != 0) {
        puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
        *(undefined4 *)(in_ECX[2] + uVar3 * 4) = *puVar2;
        (**(code **)(*in_ECX + 0x10))(puVar2);
        (**(code **)(*in_ECX + 0x18))(puVar2);
        iVar1 = *(int *)(in_ECX[2] + uVar3 * 4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[1]);
    in_ECX[3] = 0;
    return;
  }
  in_ECX[3] = 0;
  return;
}



void FUN_007c2af0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce313;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00436fa0(2);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a90238;
  FUN_00713a30(uVar1);
  in_ECX[10] = &PTR_FUN_00a3690c;
  in_ECX[0x12d] = 0;
  in_ECX[300] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00434600(param_1);
  FUN_00434cb0(0,1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c2b90(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c38f8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_00436420(uVar1);
  local_4 = 0xffffffff;
  FUN_00436fd0();
  *unaff_FS_OFFSET = local_c;
  return;
}



int * FUN_007c2bf0(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x238) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(in_ECX + 0x230);
  }
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  return param_1;
}



void FUN_007c2c30(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce354;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007ee440(uVar2);
  *in_ECX = &PTR_FUN_00a9026c;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  puVar1 = (undefined4 *)in_ECX[0x28];
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x28] = 0;
  }
  in_ECX[0x27] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c2d00(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ce354;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9026c;
  puVar1 = (undefined4 *)in_ECX[0x28];
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x28] = 0;
  }
  in_ECX[0x27] = 0;
  puVar1 = (undefined4 *)in_ECX[0x29];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x28];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_007ee4f0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c2df0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  
  thunk_FUN_007e2490(param_1,param_2);
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  if (puVar1 != *(undefined4 **)(in_ECX + 0xa0)) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *(int *)(in_ECX + 0xa0);
    *(int *)(param_1 + 0xa0) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0xa4);
  if (puVar1 != *(undefined4 **)(in_ECX + 0xa4)) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *(int *)(in_ECX + 0xa4);
    *(int *)(param_1 + 0xa4) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(in_ECX + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(in_ECX + 0xac);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(in_ECX + 0x9c);
  return;
}



uint FUN_007c2ec0(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int local_4;
  
  local_4 = 0;
  uVar3 = FUN_0055e000(param_1,&local_4);
  if ((char)uVar3 != '\0') {
    puVar2 = *(undefined4 **)(local_4 + 0x38);
    while (uVar3 = 0, puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      if (*piVar1 == param_2) {
        return CONCAT31((int3)((uint)puVar2 >> 8),1);
      }
    }
  }
  return uVar3 & 0xffffff00;
}



void FUN_007c2f10(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ce378;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a902e8;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a901d8;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c2f70(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ce3a8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a902f8;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a901e8;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c2fd0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a901f8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_007c2ff0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ce3d8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  iVar2 = (**(code **)(*in_ECX + 4))();
  puVar3 = *(undefined4 **)(in_ECX[2] + iVar2 * 4);
  do {
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x14))();
      if (param_1 != (undefined4 *)0x0) {
        InterlockedIncrement(param_1 + 1);
      }
      (**(code **)(*in_ECX + 0xc))(puVar3,unaff_retaddr);
      *puVar3 = *(undefined4 *)(in_ECX[2] + iVar2 * 4);
      *(undefined4 **)(in_ECX[2] + iVar2 * 4) = puVar3;
      in_ECX[3] = in_ECX[3] + 1;
      puStack_8 = (undefined1 *)0xffffffff;
      if ((param_1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 == 0))
      {
        param_1 = (undefined4 *)*param_1;
LAB_007c30b8:
        (*(code *)*param_1)();
      }
LAB_007c30be:
      *unaff_FS_OFFSET = (int)in_ECX;
      return;
    }
    cVar1 = (**(code **)(*in_ECX + 8))(param_1);
    if (cVar1 != '\0') {
      if ((char)in_ECX[4] == '\0') {
        puVar3[1] = param_1;
      }
      FUN_0055e2a0();
      puStack_8 = (undefined1 *)0xffffffff;
      if ((param_1 == (undefined4 *)0x0) || (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 != 0))
      goto LAB_007c30be;
      param_1 = (undefined4 *)*param_1;
      goto LAB_007c30b8;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}



void FUN_007c3110(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a90218;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_007c3130(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a901f8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007c3160(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a90218;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007c3190(int param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_0044d880(param_1);
  return;
}



void FUN_007c31e0(byte param_1)

{
  FUN_007c2b90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007c3200(byte param_1)

{
  FUN_007c2d00();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_007c3240(int param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce437;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(uint *)(in_ECX + 0x24) == param_2) goto LAB_007c34ad;
  FUN_007e24c0(uVar2);
  if (DAT_00b43344 == '\0') {
    sVar1 = 0;
  }
  else {
    sVar1 = FUN_007ed600();
  }
  if ((DAT_00b42f48 < 2) || (DAT_00b43070 != '\0')) {
    if (sVar1 == 0) {
      iVar4 = FUN_00401f00(0x10);
      uVar6 = param_1;
      local_4 = 3;
      if (iVar4 == 0) goto LAB_007c33c3;
      param_1 = FUN_007e2370(iVar4,param_1,0x195,1,0,0);
    }
    else {
      uVar3 = FUN_007ed2a0();
      iVar4 = FUN_00401f00(0x10);
      uVar6 = param_1;
      local_4 = 2;
      if (iVar4 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = FUN_007e2370(iVar4,param_1,0x196,1,1,uVar3);
      }
    }
  }
  else if (sVar1 == 0) {
    iVar4 = FUN_00401f00(0x10);
    uVar6 = param_1;
    local_4 = 1;
    if (iVar4 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = FUN_007e2370(iVar4,param_1,0xc,1,0,0);
    }
  }
  else {
    uVar3 = FUN_007ed2a0();
    iVar4 = FUN_00401f00(0x10);
    uVar6 = param_1;
    local_4 = 0;
    if (iVar4 == 0) {
LAB_007c33c3:
      uVar6 = param_1;
      param_1 = 0;
    }
    else {
      param_1 = FUN_007e2370(iVar4,param_1,0xd,1,1,uVar3);
    }
  }
  local_4 = 0xffffffff;
  FUN_006aa320(&param_1);
  if ((2 < DAT_00b42f48) && (((byte)DAT_00b42f40 & 0x10) != 0)) {
    iVar4 = FUN_007ed1a0();
    while (iVar4 != 0) {
      if (*(char *)(iVar4 + 0xf4) != '\0') {
        param_1 = FUN_00401f00(0x10);
        local_4 = 4;
        if (param_1 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_007e2370(param_1,uVar6,0,0,1,iVar4);
        }
        *(undefined2 *)(iVar4 + 4) = 0x197;
        local_4 = 0xffffffff;
        puVar5 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x28) + 4))();
        puVar5[2] = iVar4;
        puVar5[1] = 0;
        *puVar5 = *(undefined4 *)(in_ECX + 0x2c);
        if (*(int *)(in_ECX + 0x2c) == 0) {
          *(undefined4 **)(in_ECX + 0x30) = puVar5;
        }
        else {
          *(undefined4 **)(*(int *)(in_ECX + 0x2c) + 4) = puVar5;
        }
        *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
        *(undefined4 **)(in_ECX + 0x2c) = puVar5;
      }
      iVar4 = FUN_007ed3b0();
    }
  }
  *(uint *)(in_ECX + 0x24) = (uint)DAT_00b42eac << 8 | param_2;
LAB_007c34ad:
  *unaff_FS_OFFSET = local_c;
  return in_ECX + 0x28;
}



undefined4 FUN_007c34d0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0xb0,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_007c2c30();
  }
  local_4 = 0xffffffff;
  FUN_007c2df0(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_007c3550(byte param_1)

{
  FUN_007c2f70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007c3570(byte param_1)

{
  FUN_007c2f10();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007c3590(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a90348;
  in_ECX[2] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  return;
}



void FUN_007c35d0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ce49f;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)in_ECX[9];
  local_4 = 5;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 2);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  puVar1 = (undefined4 *)in_ECX[8];
  local_4._0_1_ = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[7];
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[6];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[5];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c3700(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ce4c8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a90350;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a901f8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c3770(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ce4f8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a90308;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a90218;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c37e0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a90370;
  if ((*(char *)(in_ECX + 4) != '\0') && (uVar3 = 0, in_ECX[1] != 0)) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 1;
        puVar2 = (undefined4 *)*puVar2;
        FUN_00401f20(*puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[1]);
  }
  FUN_007c3770();
  return;
}



void FUN_007c3830(byte param_1)

{
  FUN_007c3770();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007c3850(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ce541;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x30);
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  FUN_00573880(uVar3);
  puVar1 = *(undefined4 **)(in_ECX + 0x24);
  while (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    if (iVar2 != 0) {
      FUN_00812d60();
      FUN_00401f20(iVar2);
    }
  }
  FUN_00573880(uVar3);
  puVar1 = *(undefined4 **)(in_ECX + 0x30);
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  FUN_00573880();
  local_4._0_1_ = 1;
  FUN_007c2f70();
  puVar1 = *(undefined4 **)(in_ECX + 0x30);
  local_4 = (uint)local_4._1_3_ << 8;
  if (((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  local_4 = 0xffffffff;
  FUN_007c2f10();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c3980(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_c;
  int local_8;
  int *local_4;
  
  uVar5 = 0;
  if (DAT_00b2cbc8 != 0) {
    do {
      if (*(int *)(DAT_00b2cbcc + uVar5 * 4) != 0) {
        local_8 = *(int *)(DAT_00b2cbcc + uVar5 * 4);
        goto LAB_007c39a4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < DAT_00b2cbc8);
  }
  local_8 = 0;
LAB_007c39a4:
  local_c = 0;
  if (DAT_00b2cbd0 != 0) {
    while (local_8 != 0) {
      FUN_00452600(&local_8,&local_4,&local_c);
      iVar4 = local_c;
      if (local_c != 0) {
        puVar1 = *(undefined4 **)(local_c + 0x38);
        do {
          if (puVar1 == (undefined4 *)0x0) goto LAB_007c3a64;
          piVar3 = puVar1 + 2;
          puVar1 = (undefined4 *)*puVar1;
        } while (*piVar3 != param_1);
        piVar3 = *(int **)(local_c + 0x24);
        while (local_4 = piVar3, local_4 != (int *)0x0) {
          iVar2 = local_4[2];
          piVar3 = (int *)*local_4;
          if ((iVar2 != 0) && (iVar6 = FUN_00812630(param_1), iVar6 == 0)) {
            FUN_007aa860(&local_4);
            FUN_00812d60();
            FUN_00401f20(iVar2);
            DAT_00b43348 = DAT_00b43348 + -1;
          }
        }
LAB_007c3a64:
        piVar3 = *(int **)(iVar4 + 0x38);
        do {
          local_4 = piVar3;
          if (local_4 == (int *)0x0) {
            local_4 = (int *)0x0;
            break;
          }
          piVar3 = (int *)*local_4;
        } while (param_1 != local_4[2]);
        if (local_4 != (int *)0x0) {
          FUN_007aa860(&local_4);
        }
      }
    }
  }
  return;
}



undefined4 * FUN_007c3ab0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;
  undefined4 *local_4;
  
  uVar5 = 0;
  if (DAT_00b2cbc8 != 0) {
    do {
      if (*(int *)(DAT_00b2cbcc + uVar5 * 4) != 0) {
        puVar6 = *(undefined4 **)(DAT_00b2cbcc + uVar5 * 4);
        goto LAB_007c3ad4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < DAT_00b2cbc8);
  }
  puVar6 = (undefined4 *)0x0;
LAB_007c3ad4:
  local_1c = 0;
  local_14 = puVar6;
  puVar3 = local_4;
  if (DAT_00b2cbd0 != 0) {
    while (local_4 = puVar3, local_14 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)FUN_00452600(&local_14,&local_4,&local_1c);
      puVar3 = local_4;
      if (local_1c != 0) {
        puVar4 = *(undefined4 **)(local_1c + 0x24);
        iVar2 = local_1c;
        while (local_4 = puVar4, local_4 != (undefined4 *)0x0) {
          iVar1 = local_4[2];
          local_18 = (undefined4 *)*local_4;
          puVar4 = local_18;
          puVar6 = local_4 + 2;
          puVar3 = local_4;
          if (((iVar1 != 0) && (puVar4 = local_18, param_1 == *(int *)(iVar1 + 0x38))) &&
             (puVar4 = local_18, puVar6 = param_2, param_2 == *(undefined4 **)(iVar1 + 0x3c))) {
            local_8 = (uint)*(ushort *)(iVar1 + 0xe);
            local_10 = *(int *)(iVar1 + 0x14);
            iVar8 = 0;
            iVar7 = iVar2;
            if (local_8 != 0) {
              do {
                puVar6 = *(undefined4 **)(iVar2 + 0x38);
                do {
                  local_c = puVar6;
                  if (local_c == (undefined4 *)0x0) {
                    local_c = (undefined4 *)0x0;
                    break;
                  }
                  puVar6 = (undefined4 *)*local_c;
                } while (*(int *)(local_10 + iVar8 * 4) != local_c[2]);
                if (local_c != (undefined4 *)0x0) {
                  FUN_007aa860(&local_c);
                }
                iVar8 = iVar8 + 1;
                iVar7 = local_1c;
              } while (iVar8 < (int)local_8);
            }
            FUN_007aa860(&local_4);
            FUN_00812d60();
            puVar6 = (undefined4 *)FUN_00401f20(iVar1);
            DAT_00b43348 = DAT_00b43348 + -1;
            puVar4 = local_18;
            iVar2 = iVar7;
            puVar3 = local_4;
          }
        }
      }
    }
  }
  return puVar6;
}



void FUN_007c3c10(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *in_ECX = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0x3f800000;
  in_ECX[0xb] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[8] = &PTR_FUN_00a90328;
  in_ECX[0xc] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0xd] = &PTR_FUN_00a90338;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x007c465f) */
/* WARNING: Removing unreachable block (ram,0x007c43b7) */
/* WARNING: Removing unreachable block (ram,0x007c44bc) */
/* WARNING: Removing unreachable block (ram,0x007c46d0) */

undefined4 * FUN_007c3c50(int *param_1)

{
  int *piVar1;
  longlong lVar2;
  short sVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  LONG LVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined1 uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 *puVar21;
  uint uVar22;
  float *pfVar23;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_644;
  undefined4 *puStack_640;
  undefined1 uStack_639;
  undefined4 *puStack_638;
  undefined4 *puStack_634;
  undefined4 *local_630;
  uint uStack_62c;
  ushort *puStack_628;
  undefined4 *puStack_624;
  uint uStack_620;
  undefined4 *puStack_61c;
  undefined4 *puStack_618;
  float *pfStack_614;
  float *pfStack_610;
  uint uStack_60c;
  undefined4 *local_608;
  int *local_604;
  float *pfStack_600;
  int iStack_5fc;
  undefined4 *puStack_5f8;
  undefined4 *puStack_5f4;
  undefined4 *puStack_5f0;
  int local_5ec;
  float *pfStack_5e8;
  float *pfStack_5e4;
  void *pvStack_5e0;
  void *pvStack_5dc;
  void *pvStack_5d8;
  int *local_5d4;
  float *pfStack_5d0;
  int iStack_5cc;
  float *pfStack_5c8;
  int iStack_5c4;
  uint uStack_5c0;
  undefined4 *puStack_5bc;
  uint uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  int iStack_394;
  undefined1 auStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ce607;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&puStack_644;
  *unaff_FS_OFFSET = (int)&local_c;
  local_5d4 = param_1;
  if (DAT_00b42f48 != 0) {
    local_5ec = 0;
    if (*param_1 != 0) {
      local_630 = (undefined4 *)0x0;
      local_4 = 0;
      cVar5 = FUN_004a1ab0(*param_1);
      puVar10 = local_630;
      if (cVar5 == '\0') {
        iVar8 = FUN_00401f00();
        if (iVar8 != 0) {
          FUN_007c3590();
        }
        FUN_0075fa90();
        puVar10 = local_630;
        piVar11 = local_630 + 9;
        *(undefined1 *)((int)local_630 + 0x32) = 1;
        puVar15 = (undefined4 *)*piVar11;
        if (puVar15 != (undefined4 *)0x0) {
          LVar9 = InterlockedDecrement(puVar15 + 2);
          if ((LVar9 == 0) && (puVar15 != (undefined4 *)0x0)) {
            (**(code **)*puVar15)();
          }
          *piVar11 = 0;
        }
        local_604 = (int *)&stack0xfffff9a4;
        InterlockedIncrement(puVar10 + 1);
        FUN_007c2ff0(*param_1);
        if (DAT_00b2cbc0 == '\0') goto LAB_007c3dc4;
        local_604 = (int *)FUN_00401f00();
        local_4._0_1_ = 1;
        if (local_604 != (int *)0x0) {
          FUN_007c2af0();
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004bcb70();
        (**(code **)(*g_IOManager_singleton + 0x3c))();
      }
      else {
LAB_007c3dc4:
        puVar15 = local_630;
        if (*(char *)((int)puVar10 + 0x32) == '\0') {
LAB_007c4a96:
          puVar10 = local_630;
          local_4 = 0xffffffff;
          LVar9 = InterlockedDecrement(local_630 + 1);
          if (LVar9 == 0) {
            (**(code **)*puVar10)();
          }
          goto LAB_007c4abf;
        }
        local_608 = (undefined4 *)0x0;
        local_4._0_1_ = 2;
        if ((DAT_00b2cbc0 == '\0') || (local_630[9] != 0)) {
          if (local_630[9] == 0) {
            FUN_00434710(*local_5d4);
            FUN_004363c0();
            local_4 = CONCAT31(local_4._1_3_,5);
            FUN_006f9980(auStack_114);
            if (iStack_394 != 0) {
              FUN_0075fa90();
            }
            local_4._0_1_ = 2;
            FUN_00436420();
          }
          else {
            if (*(int *)(local_630[9] + 0xc) < 4) goto LAB_007c3e46;
            FUN_007c2bf0();
            local_4._0_1_ = 4;
            FUN_0055e2a0();
            local_4._0_1_ = 2;
            FUN_007016a0();
            FUN_004bcb70();
          }
          if (local_608 != (undefined4 *)0x0) {
            *(undefined1 *)((int)puVar15 + 0x32) = 0;
            piVar11 = (int *)FUN_00560920(&DAT_00b3fa80);
            piVar11 = (int *)(**(code **)(*piVar11 + 8))();
            iVar8 = local_5ec;
            local_604 = piVar11;
            while (piVar11 != (int *)0x0) {
              uVar20 = 0;
              if (*(short *)((int)piVar11 + 0xb6) != 0) {
                if (*(short *)((int)piVar11 + 0xb6) == 0) goto LAB_007c3f83;
                do {
                  piVar1 = *(int **)(piVar11[0x2c] + uVar20 * 4);
                  if ((piVar1 != (int *)0x0) &&
                     (iVar8 = (**(code **)(*piVar1 + 0xc))(), local_5ec = iVar8, iVar8 != 0))
                  goto LAB_007c3f95;
LAB_007c3f83:
                  uVar20 = uVar20 + 1;
                } while (uVar20 < *(ushort *)((int)piVar11 + 0xb6));
              }
              if (iVar8 != 0) break;
            }
LAB_007c3f95:
            iVar12 = FUN_00560920(&DAT_00b3fd04);
            iVar8 = *(int *)(iVar8 + 0xb4);
            puStack_61c = *(undefined4 **)(iVar8 + 0x1c);
            uStack_620 = ((DAT_00b42f48 < 2) - 1 & 0x94) + 0x50;
            uVar20 = (uint)*(ushort *)(iVar8 + 8);
            uStack_60c = uVar20;
            if (iVar12 == 0) {
              uStack_639 = 0;
              uVar6 = (ushort)(0xffff / (ulonglong)(longlong)(int)uVar20);
              if (uVar6 <= (ushort)uStack_620) {
                uStack_620 = (uint)uVar6;
              }
              uStack_62c = *(uint *)(iVar8 + 0x44) & 0xffff;
              uVar6 = (ushort)(0xffff / (ulonglong)(longlong)(int)uStack_62c);
              if (uVar6 <= (ushort)uStack_620) {
                uStack_620 = (uint)uVar6;
              }
              uVar16 = uStack_620;
              uVar19 = uStack_620 * uVar20;
              pvStack_5dc = puStack_61c;
              puStack_61c = (undefined4 *)*(int *)(iVar8 + 0x48);
              uStack_5b8 = uVar20;
              puStack_640 = (undefined4 *)FUN_00401f00();
              puStack_634 = (undefined4 *)
                            FUN_00401f00(-(uint)((int)((ulonglong)uVar19 * 0xc >> 0x20) != 0) |
                                         (uint)((ulonglong)uVar19 * 0xc));
              puStack_644 = (undefined4 *)
                            FUN_00401f00(-(uint)((int)((ulonglong)uVar19 * 0x10 >> 0x20) != 0) |
                                         (uint)((ulonglong)uVar19 * 0x10));
              local_4._0_1_ = 6;
              if (puStack_644 == (undefined4 *)0x0) {
                puStack_644 = (undefined4 *)0x0;
              }
              else {
                _vector_constructor_iterator_(puStack_644,0x10,uVar19,FUN_0047ea50);
              }
              local_4._0_1_ = 2;
              pfStack_600 = (float *)FUN_00401f00();
              pfStack_5e8 = (float *)FUN_00401f00(-(uint)((int)((ulonglong)uVar19 * 4 >> 0x20) != 0)
                                                  | (uint)((ulonglong)uVar19 * 4));
              lVar2 = (ulonglong)(uVar16 * uStack_62c) * 2;
              puStack_5f4 = (undefined4 *)
                            FUN_00401f00(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2
                                        );
              puStack_5f0 = *(undefined4 **)(iVar8 + 0x24);
              pfStack_5e4 = *(float **)(iVar8 + 0x28);
              iVar12 = 0;
              puStack_5bc = *(undefined4 **)(iVar8 + 0x20);
              iStack_5cc = 0;
              puStack_618 = (undefined4 *)0x0;
              uVar19 = 0;
              uVar22 = uVar20;
              if (uVar16 != 0) {
                iStack_5fc = uVar20 * 0xc;
                puStack_624 = (undefined4 *)(uVar20 * 0x10);
                puStack_638 = puStack_634;
                pfStack_610 = pfStack_600;
                iStack_5c4 = 0;
                pfStack_614 = pfStack_5e8;
                puStack_5f8 = puStack_644;
                do {
                  if (0 < (int)uVar22) {
                    pvStack_5d8 = (void *)(float)(int)puStack_618;
                    pvStack_5e0 = (void *)((int)puStack_640 - (int)puStack_634);
                    pfStack_5c8 = pfStack_614;
                    puStack_628 = (ushort *)((int)pvStack_5dc - (int)puStack_5bc);
                    uStack_5c0 = uStack_5b8;
                    puVar10 = puStack_638;
                    puVar15 = puStack_5bc;
                    puVar17 = puStack_5f8;
                    puVar21 = puStack_5f0;
                    pfVar23 = pfStack_610;
                    pfStack_5d0 = pfStack_5e4;
                    do {
                      *(undefined4 *)((int)pvStack_5e0 + (int)puVar10) =
                           *(undefined4 *)((int)puStack_628 + (int)puVar15);
                      *(undefined4 *)((int)pvStack_5e0 + 4 + (int)puVar10) =
                           *(undefined4 *)((int)(puStack_628 + 2) + (int)puVar15);
                      *(undefined4 *)((int)pvStack_5e0 + 8 + (int)puVar10) =
                           *(undefined4 *)((int)(puStack_628 + 4) + (int)puVar15);
                      *puVar10 = *puVar15;
                      puVar10[1] = puVar15[1];
                      puVar10[2] = puVar15[2];
                      *puVar17 = *puVar21;
                      puVar17[1] = puVar21[1];
                      puVar17[2] = puVar21[2];
                      puVar17[3] = puVar21[3];
                      *pfVar23 = *pfStack_5d0;
                      pfVar23[1] = pfStack_5d0[1];
                      *pfStack_5c8 = (float)pvStack_5d8;
                      pfStack_5c8 = pfStack_5c8 + 1;
                      pfStack_5d0 = pfStack_5d0 + 2;
                      puVar10 = puVar10 + 3;
                      puVar15 = puVar15 + 3;
                      puVar17 = puVar17 + 4;
                      puVar21 = puVar21 + 4;
                      pfVar23 = pfVar23 + 2;
                      uStack_5c0 = uStack_5c0 - 1;
                    } while (uStack_5c0 != 0);
                    uStack_5c0 = 0;
                    iVar12 = iStack_5cc;
                    uVar22 = uStack_5b8;
                  }
                  iVar8 = 0;
                  if (0 < (int)uStack_62c) {
                    do {
                      *(short *)((int)puStack_5f4 + iVar12 * 2) =
                           *(short *)((int)puStack_61c + iVar8 * 2) + (short)iStack_5c4;
                      iVar8 = iVar8 + 1;
                      iVar12 = iVar12 + 1;
                      iStack_5cc = iVar12;
                    } while (iVar8 < (int)uStack_62c);
                  }
                  uVar19 = uStack_620 & 0xffff;
                  puStack_638 = puStack_638 + uVar20 * 3;
                  pfStack_614 = pfStack_614 + uVar22;
                  pfStack_610 = pfStack_610 + uVar22 * 2;
                  puStack_5f8 = puStack_5f8 + uVar20 * 4;
                  puStack_618 = (undefined4 *)((int)puStack_618 + 1);
                  iStack_5c4 = iStack_5c4 + uVar22;
                } while ((int)puStack_618 < (int)uVar19);
              }
              uVar16 = (int)uStack_62c / 3;
              puStack_638 = (undefined4 *)(uVar16 & 0xffff);
              puStack_61c = (undefined4 *)FUN_00401f00();
              local_4 = CONCAT31(local_4._1_3_,7);
              uVar20 = uVar22;
              if (puStack_61c == (undefined4 *)0x0) {
LAB_007c474a:
                puStack_624 = (undefined4 *)0x0;
              }
              else {
                puStack_624 = (undefined4 *)
                              FUN_0072ab00(uStack_620 * uStack_60c,puStack_640,puStack_634,
                                           puStack_644,pfStack_600,1,0,uVar16 * uStack_620,
                                           puStack_5f4,uStack_620 * uStack_60c);
              }
            }
            else {
              pfStack_600 = *(float **)(iVar8 + 0x4c);
              puStack_628 = *(ushort **)(iVar8 + 0x48);
              uStack_639 = 1;
              uVar6 = (ushort)(0xffff / (ulonglong)(longlong)(int)uVar20);
              if (uVar6 <= (ushort)uStack_620) {
                uStack_620 = (uint)uVar6;
              }
              uVar6 = (ushort)(0xffff / (ulonglong)
                                        (longlong)
                                        (int)(((*puStack_628 & 1) != 0) + 2 + (uint)*puStack_628));
              if (uVar6 <= (ushort)uStack_620) {
                uStack_620 = (uint)uVar6;
              }
              uVar16 = uStack_620;
              uVar19 = uStack_620 * uVar20;
              puStack_5f8 = (undefined4 *)FUN_00401f00();
              puStack_5f4 = (undefined4 *)
                            FUN_00401f00(-(uint)((int)((ulonglong)uVar19 * 0xc >> 0x20) != 0) |
                                         (uint)((ulonglong)uVar19 * 0xc));
              puStack_640 = (undefined4 *)
                            FUN_00401f00(-(uint)((int)((ulonglong)uVar19 * 0x10 >> 0x20) != 0) |
                                         (uint)((ulonglong)uVar19 * 0x10));
              local_4._0_1_ = 8;
              if (puStack_640 == (undefined4 *)0x0) {
                puStack_618 = (undefined4 *)0x0;
              }
              else {
                _vector_constructor_iterator_(puStack_640,0x10,uVar19,FUN_0047ea50);
                puStack_618 = puStack_640;
              }
              local_4 = CONCAT31(local_4._1_3_,2);
              puStack_640 = (undefined4 *)FUN_00401f00();
              pfStack_5e8 = (float *)FUN_00401f00(-(uint)((int)((ulonglong)uVar19 * 4 >> 0x20) != 0)
                                                  | (uint)((ulonglong)uVar19 * 4));
              uVar6 = *puStack_628;
              lVar2 = (ulonglong)
                      ((uVar16 - 1) * (uint)(ushort)(((uVar6 & 1) != 0) + 2 + uVar6) + (uint)uVar6)
                      * 2;
              pfStack_614 = (float *)FUN_00401f00(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) |
                                                  (uint)lVar2);
              pvStack_5d8 = *(void **)(iVar8 + 0x24);
              pvStack_5dc = *(void **)(iVar8 + 0x28);
              iVar12 = 0;
              pvStack_5e0 = *(void **)(iVar8 + 0x20);
              uStack_62c = 0;
              uVar19 = 0;
              if (uVar16 != 0) {
                puStack_624 = (undefined4 *)(uVar20 << 4);
                pfStack_610 = pfStack_5e8;
                puStack_638 = puStack_640;
                pfStack_5e4 = (float *)(uVar16 - 1);
                iStack_5fc = (int)puStack_5f8 - (int)puStack_5f4;
                puStack_644 = puStack_618;
                puStack_634 = puStack_5f4;
                do {
                  puVar10 = puStack_634;
                  _memcpy((void *)(iStack_5fc + (int)puStack_634),puStack_61c,uVar20 * 0xc);
                  _memcpy(puVar10,pvStack_5e0,uVar20 * 0xc);
                  _memcpy(puStack_644,pvStack_5d8,(size_t)puStack_624);
                  _memcpy(puStack_638,pvStack_5dc,uVar20 * 8);
                  if (uVar20 != 0) {
                    puStack_5f0 = (undefined4 *)(float)(int)uStack_62c;
                    pfVar23 = pfStack_610;
                    for (uVar16 = uVar20; uVar16 != 0; uVar16 = uVar16 - 1) {
                      *pfVar23 = (float)puStack_5f0;
                      pfVar23 = pfVar23 + 1;
                    }
                  }
                  iVar13 = 0;
                  sVar3 = (short)uStack_62c;
                  sVar7 = (short)uStack_60c;
                  iVar8 = iVar12;
                  if (*puStack_628 != 0) {
                    do {
                      *(short *)((int)pfStack_614 + iVar8 * 2) =
                           *(short *)((int)pfStack_600 + iVar13 * 2) + sVar3 * sVar7;
                      iVar13 = iVar13 + 1;
                      iVar8 = iVar8 + 1;
                    } while (iVar13 < (int)(uint)*puStack_628);
                  }
                  iVar12 = iVar8;
                  if ((int)uStack_62c < (int)pfStack_5e4) {
                    puStack_5f0 = (undefined4 *)(uStack_62c & 0xffff);
                    *(short *)((int)pfStack_614 + (iVar8 + 1) * 2 + -2) =
                         sVar3 * sVar7 + *(short *)((int)pfStack_600 + (uint)*puStack_628 * 2 + -2);
                    sVar7 = (sVar3 + 1) * sVar7;
                    *(short *)((int)pfStack_614 + (iVar8 + 1) * 2) = *(short *)pfStack_600 + sVar7;
                    iVar12 = iVar8 + 2;
                    if ((*puStack_628 & 1) == 1) {
                      *(short *)((int)pfStack_614 + iVar12 * 2) = *(short *)pfStack_600 + sVar7;
                      iVar12 = iVar8 + 3;
                    }
                  }
                  puStack_644 = (undefined4 *)((int)puStack_644 + (int)puStack_624);
                  uVar19 = uStack_620 & 0xffff;
                  puStack_634 = puStack_634 + uVar20 * 3;
                  puStack_638 = (undefined4 *)((int)puStack_638 + uVar20 * 8);
                  uStack_62c = uStack_62c + 1;
                  pfStack_610 = pfStack_610 + uVar20;
                } while ((int)uStack_62c < (int)uVar19);
              }
              puVar14 = (undefined2 *)FUN_00401f00();
              *puVar14 = (short)iVar12;
              uVar6 = *puStack_628;
              if ((uVar6 & 1) == 1) {
                uVar6 = uVar6 + 3;
              }
              else {
                uVar6 = uVar6 + 2;
              }
              puStack_638 = (undefined4 *)(uint)uVar6;
              puStack_61c = (undefined4 *)FUN_00401f00();
              local_4 = CONCAT31(local_4._1_3_,9);
              if (puStack_61c == (undefined4 *)0x0) goto LAB_007c474a;
              puStack_624 = (undefined4 *)
                            FUN_0073b430(uStack_620 * uStack_60c,puStack_5f8,puStack_5f4,puStack_618
                                         ,puStack_640,1,0,iVar12 + -2,1,puVar14,pfStack_614,
                                         uStack_620 * uStack_60c);
            }
            puStack_644 = (undefined4 *)0x0;
            local_4._0_1_ = 10;
            iVar8 = FUN_00707530();
            if (((iVar8 != 0) && (**(int **)(iVar8 + 0x20) != 0)) &&
               (puVar10 = *(undefined4 **)(**(int **)(iVar8 + 0x20) + 8),
               puVar10 != (undefined4 *)0x0)) {
              puStack_644 = puVar10;
              InterlockedIncrement(puVar10 + 1);
            }
            puStack_640 = (undefined4 *)FUN_00707530();
            uVar18 = 0;
            if (puStack_640 == (undefined4 *)0x0) {
              puVar10 = (undefined4 *)FUN_00401f00();
              local_4._0_1_ = 0xb;
              puStack_61c = puVar10;
              if (puVar10 == (undefined4 *)0x0) {
                puStack_640 = (undefined4 *)0x0;
              }
              else {
                FUN_006ffd30();
                *puVar10 = &PTR_FUN_00a3d604;
                *(undefined2 *)(puVar10 + 6) = 0xec;
                *(undefined1 *)((int)puVar10 + 0x1a) = 0;
                puStack_640 = puVar10;
              }
              local_4._0_1_ = 10;
            }
            else {
              uVar18 = *(undefined1 *)((int)puStack_640 + 0x1a);
            }
            *(undefined1 *)((int)puStack_640 + 0x1a) = uVar18;
            *(ushort *)(puStack_640 + 6) = *(ushort *)(puStack_640 + 6) & 0xf3ff | 0x1201;
            puVar10 = (undefined4 *)FUN_00401f00();
            local_4._0_1_ = 0xc;
            puStack_61c = puVar10;
            if (puVar10 == (undefined4 *)0x0) {
              puStack_634 = (undefined4 *)0x0;
            }
            else {
              FUN_006ffd30();
              *puVar10 = &PTR_FUN_00a3d604;
              *(undefined2 *)(puVar10 + 6) = 0xec;
              *(undefined1 *)((int)puVar10 + 0x1a) = 0;
              puStack_634 = puVar10;
            }
            iVar8 = local_5ec;
            *(undefined1 *)((int)puStack_634 + 0x1a) = uVar18;
            local_4 = CONCAT31(local_4._1_3_,10);
            *(ushort *)(puStack_634 + 6) = *(ushort *)(puStack_634 + 6) & 0xf3fe | 0x1200;
            puStack_61c = (undefined4 *)FUN_00707530();
            puVar15 = local_630;
            iVar8 = *(int *)(iVar8 + 0xb4);
            uStack_5b4 = *(undefined4 *)(iVar8 + 0xc);
            uStack_5b0 = *(undefined4 *)(iVar8 + 0x10);
            uStack_5ac = *(undefined4 *)(iVar8 + 0x14);
            uStack_5a8 = *(undefined4 *)(iVar8 + 0x18);
            *(undefined1 *)(local_630 + 0xc) = uStack_639;
            puVar10 = (undefined4 *)local_630[2];
            if (puVar10 != puStack_624) {
              if (((puVar10 != (undefined4 *)0x0) &&
                  (LVar9 = InterlockedDecrement(puVar10 + 1), LVar9 == 0)) &&
                 (puVar10 != (undefined4 *)0x0)) {
                (**(code **)*puVar10)();
              }
              puVar15[2] = puStack_624;
              if (puStack_624 != (undefined4 *)0x0) {
                InterlockedIncrement(puStack_624 + 1);
              }
            }
            puVar17 = puStack_644;
            puVar15[3] = pfStack_5e8;
            puVar15[4] = uVar20;
            puVar10 = (undefined4 *)puVar15[5];
            if (puVar10 != puStack_644) {
              if (((puVar10 != (undefined4 *)0x0) &&
                  (LVar9 = InterlockedDecrement(puVar10 + 1), LVar9 == 0)) &&
                 (puVar10 != (undefined4 *)0x0)) {
                (**(code **)*puVar10)();
              }
              puVar15[5] = puVar17;
              if (puVar17 != (undefined4 *)0x0) {
                InterlockedIncrement(puVar17 + 1);
              }
            }
            puVar17 = puStack_634;
            puVar10 = (undefined4 *)puVar15[7];
            if (puVar10 != puStack_634) {
              if (((puVar10 != (undefined4 *)0x0) &&
                  (LVar9 = InterlockedDecrement(puVar10 + 1), LVar9 == 0)) &&
                 (puVar10 != (undefined4 *)0x0)) {
                (**(code **)*puVar10)();
              }
              puVar15[7] = puVar17;
              InterlockedIncrement(puVar17 + 1);
            }
            puVar17 = puStack_640;
            puVar10 = (undefined4 *)puVar15[6];
            if (puVar10 != puStack_640) {
              if (((puVar10 != (undefined4 *)0x0) &&
                  (LVar9 = InterlockedDecrement(puVar10 + 1), LVar9 == 0)) &&
                 (puVar10 != (undefined4 *)0x0)) {
                (**(code **)*puVar10)();
              }
              puVar15[6] = puVar17;
              InterlockedIncrement(puVar17 + 1);
            }
            puVar17 = puStack_61c;
            puVar10 = (undefined4 *)puVar15[8];
            if (puVar10 != puStack_61c) {
              if (((puVar10 != (undefined4 *)0x0) &&
                  (LVar9 = InterlockedDecrement(puVar10 + 1), LVar9 == 0)) &&
                 (puVar10 != (undefined4 *)0x0)) {
                (**(code **)*puVar10)();
              }
              puVar15[8] = puVar17;
              if (puVar17 != (undefined4 *)0x0) {
                InterlockedIncrement(puVar17 + 1);
              }
            }
            piVar11 = local_604;
            puVar15[10] = uStack_5a8;
            puVar15[0xb] = uVar19;
            *(undefined2 *)(puVar15 + 0xd) = puStack_638._0_2_;
            *(undefined1 *)((int)puVar15 + 0x31) = 0;
            if (local_604 != (int *)0x0) {
              for (puVar10 = (undefined4 *)(**(code **)(*local_604 + 4))();
                  puVar10 != (undefined4 *)0x0; puVar10 = (undefined4 *)puVar10[1]) {
                if (puVar10 == &DAT_00b3fd4c) {
                  bVar4 = 1;
                  goto LAB_007c4a25;
                }
              }
              bVar4 = 0;
LAB_007c4a25:
              if ((-(uint)bVar4 & (uint)piVar11) != 0) {
                *(undefined1 *)((int)puVar15 + 0x31) = 1;
              }
            }
            FUN_004384e0(*local_5d4,1);
            puVar10 = puStack_644;
            local_4._0_1_ = 2;
            if ((puStack_644 != (undefined4 *)0x0) &&
               (LVar9 = InterlockedDecrement(puStack_644 + 1), LVar9 == 0)) {
              (**(code **)*puVar10)();
            }
            puVar10 = local_608;
            local_4 = (uint)local_4._1_3_ << 8;
            LVar9 = InterlockedDecrement(local_608 + 1);
            if (LVar9 == 0) {
              (**(code **)*puVar10)();
            }
            goto LAB_007c4a96;
          }
        }
        else {
          local_604 = (int *)FUN_00401f00();
          local_4._0_1_ = 3;
          if (local_604 != (int *)0x0) {
            FUN_007c2af0();
          }
          local_4._0_1_ = 2;
          FUN_004bcb70();
          (**(code **)(*g_IOManager_singleton + 0x3c))();
        }
LAB_007c3e46:
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_007016a0();
      }
      local_4 = 0xffffffff;
      FUN_007016a0();
    }
  }
  puVar10 = (undefined4 *)0x0;
LAB_007c4abf:
  *unaff_FS_OFFSET = local_c;
  return puVar10;
}



void FUN_007c4af0(byte param_1)

{
  FUN_007c35d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007c4b10(byte param_1)

{
  FUN_007c3700();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007c4b30(byte param_1)

{
  FUN_007c37e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_007c4b50(undefined4 *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar3 = param_4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ad67b;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar8 = (undefined4 *)0x0;
  *param_4 = 0;
  iVar6 = FUN_007c3c50(param_1,uVar5);
  if (iVar6 == 0) {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  param_4 = (undefined4 *)0x0;
  cVar4 = FUN_0055e000(param_1[1],&param_4);
  puVar9 = param_4;
  if (cVar4 == '\0') {
    iVar7 = FUN_00401f00(0x44);
    if (iVar7 != 0) {
      puVar8 = (undefined4 *)FUN_007c3c10();
    }
    FUN_0075fa90(iVar6);
    puVar9 = param_1;
    puVar10 = puVar8;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    FUN_00452570(param_1[1],puVar8);
    puVar9 = puVar8;
  }
  iVar7 = *piVar3;
  puVar8 = (undefined4 *)puVar9[9];
  if (iVar7 == 0) {
    do {
      if (puVar8 == (undefined4 *)0x0) break;
      iVar7 = puVar8[2];
      puVar8 = (undefined4 *)*puVar8;
      if (((*(short *)(iVar7 + 0xe) != *(short *)(iVar7 + 0xc)) &&
          (param_2 == *(int *)(iVar7 + 0x38))) && (param_3 == *(int *)(iVar7 + 0x3c))) {
        *piVar3 = iVar7;
        break;
      }
    } while (*piVar3 == 0);
    iVar7 = *piVar3;
    if (iVar7 != 0) goto LAB_007c4c4e;
  }
  else {
LAB_007c4c4e:
    if (*(short *)(iVar7 + 0xc) != *(short *)(iVar7 + 0xe)) goto LAB_007c4cc0;
  }
  param_4 = (int *)FUN_00401f00(0x44);
  local_4 = 0;
  if (param_4 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_008129f0(iVar6,param_2,param_3,0);
  }
  *piVar3 = iVar6;
  DAT_00b43348 = DAT_00b43348 + 1;
  local_4 = 0xffffffff;
  FUN_00812660(param_1);
  FUN_005b1e20(piVar3);
  (**(code **)(*param_5 + 0x84))(*(undefined4 *)*piVar3,1);
LAB_007c4cc0:
  uVar1 = *(ushort *)(*piVar3 + 0xe);
  uVar2 = *(ushort *)(*piVar3 + 0xc);
  *unaff_FS_OFFSET = local_c;
  return (uint)uVar2 - (uint)uVar1;
}



void FUN_007c4ce0(void)

{
  int iVar1;
  uint uVar2;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  uVar2 = 0;
  if (DAT_00b2cbc8 != 0) {
    do {
      if (*(int *)(DAT_00b2cbcc + uVar2 * 4) != 0) {
        local_8 = *(int *)(DAT_00b2cbcc + uVar2 * 4);
        goto LAB_007c4d08;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_00b2cbc8);
  }
  local_8 = 0;
LAB_007c4d08:
  local_c = 0;
  if (DAT_00b2cbd0 != 0) {
    while (local_8 != 0) {
      FUN_00452600(&local_8,local_4,&local_c);
      iVar1 = local_c;
      if (local_c != 0) {
        FUN_007c3850();
        FUN_00401f20(iVar1);
      }
    }
  }
  FUN_007c2a40();
  DAT_00b43348 = 0;
  DAT_00b4334c = 0;
  return;
}



void FUN_007c4d90(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  undefined4 *local_18;
  int local_14;
  undefined1 local_10 [4];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b23e8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007c4ce0(uVar2);
  uVar2 = 0;
  if (DAT_00b2cbd8 != 0) {
    do {
      if (*(int *)(DAT_00b2cbdc + uVar2 * 4) != 0) {
        local_14 = *(int *)(DAT_00b2cbdc + uVar2 * 4);
        goto LAB_007c4de2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_00b2cbd8);
  }
  local_14 = 0;
LAB_007c4de2:
  puVar4 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_4 = 0;
  if (DAT_00b2cbe0 != 0) {
    while (local_14 != 0) {
      FUN_007b2600(&local_14,local_10,&local_18);
      puVar4 = local_18;
      if ((local_18 != (undefined4 *)0x0) && (*(char *)((int)local_18 + 0x32) == '\0')) {
        puVar1 = (undefined4 *)local_18[2];
        if (puVar1 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar1 + 1);
          if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          puVar4[2] = 0;
        }
        FUN_00401f20(puVar4[3]);
        puVar4[3] = 0;
        puVar1 = (undefined4 *)puVar4[5];
        if (puVar1 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar1 + 1);
          if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          puVar4[5] = 0;
        }
        puVar1 = (undefined4 *)puVar4[7];
        if (puVar1 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar1 + 1);
          if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          puVar4[7] = 0;
        }
        puVar1 = (undefined4 *)puVar4[6];
        if (puVar1 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar1 + 1);
          if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          puVar4[6] = 0;
        }
        puVar1 = (undefined4 *)puVar4[8];
        if (puVar1 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar1 + 1);
          if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          puVar4[8] = 0;
        }
      }
    }
    FUN_007c2a40();
  }
  local_4 = 0xffffffff;
  if ((puVar4 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar4 + 1), LVar3 == 0)) {
    (**(code **)*puVar4)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c4f50(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5,
                 int param_6,int param_7,uint param_8)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  float10 extraout_ST0;
  float10 fVar12;
  float10 extraout_ST1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  DAT_00b4334c = DAT_00b4334c + (param_8 & 0xffff);
  iVar9 = 0;
  sVar7 = (short)param_8;
  uVar8 = param_8;
  do {
    if (sVar7 == 0) {
      (**(code **)(*param_4 + 0x78))();
      param_8 = 0;
      FUN_0055e000(*(undefined4 *)(param_5 + 4),&param_8);
      piVar6 = *(int **)(param_8 + 0x38);
      bVar2 = true;
      if (piVar6 != (int *)0x0) {
        do {
          piVar1 = piVar6 + 2;
          piVar6 = (int *)*piVar6;
          if (*piVar1 == param_1) {
            bVar2 = false;
          }
        } while (piVar6 != (int *)0x0);
        if (!bVar2) {
          return;
        }
      }
      FUN_005b1e20(&param_1);
      return;
    }
    iVar11 = 0;
    param_8 = 0;
    uVar3 = FUN_007c4b50(param_5,param_2,param_3,&param_8,param_4);
    if (param_8 == 0) {
      return;
    }
    if ((uVar3 & 0xffff) != 0) {
      puVar10 = (undefined4 *)(param_6 + iVar9 * 0xc);
      do {
        if ((short)uVar8 == 0) break;
        uVar4 = FUN_007c2990(*puVar10,puVar10[1],puVar10[2]);
        FUN_009859d0(uVar4);
        local_10 = *puVar10;
        local_c = puVar10[1];
        local_8 = puVar10[2];
        iVar5 = _rand();
        local_4 = (*(float *)(param_5 + 0x10) * 0.5 * ((float)iVar5 / 65534.0 - 1.0) +
                  (1.0 - *(float *)(param_5 + 0x10))) * *(float *)(param_7 + iVar9 * 4);
        if (local_4 < 1.0) {
          if (local_4 < 0.0) {
            local_4 = 0.0;
          }
        }
        else {
          local_4 = 0.99;
        }
        _rand();
        iVar5 = FUN_009828c0();
        fVar12 = (float10)iVar5;
        if (extraout_ST0 - fVar12 < (float10)0.0) {
          fVar12 = fVar12 - extraout_ST1;
        }
        local_4 = (float)fVar12 + local_4;
        FUN_00812510(&local_10,param_1);
        iVar11 = iVar11 + 1;
        uVar8 = uVar8 + 0xffff;
        iVar9 = iVar9 + 1;
        puVar10 = puVar10 + 3;
      } while (iVar11 < (int)(uVar3 & 0xffff));
    }
    FUN_008126d0();
    sVar7 = (short)uVar8;
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x007c51e7) */
/* WARNING: Removing unreachable block (ram,0x007c51f7) */
/* WARNING: Removing unreachable block (ram,0x007c51fb) */
/* WARNING: Removing unreachable block (ram,0x007c5205) */

void FUN_007c5190(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce653;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007e27f0(uVar1);
  *in_ECX = &PTR_FUN_00a903d4;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x22] = 8;
  *(undefined2 *)(in_ECX + 0x21) = 0;
  in_ECX[0x1b] = DAT_00b25ae0;
  in_ECX[0x1c] = DAT_00b25ae4;
  in_ECX[0x1d] = DAT_00b25ae8;
  in_ECX[0x1e] = DAT_00b25aec;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c5270(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ce653;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a903d4;
  puVar1 = (undefined4 *)in_ECX[0x1f];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x1f] = 0;
  }
  in_ECX[0x22] = 8;
  in_ECX[0x20] = 0;
  *(undefined2 *)(in_ECX + 0x21) = 0;
  puVar1 = (undefined4 *)in_ECX[0x1f];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_007e2650(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c5340(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  
  FUN_007e2490(param_1,param_2);
  puVar1 = *(undefined4 **)(param_1 + 0x7c);
  if (puVar1 != *(undefined4 **)(in_ECX + 0x7c)) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *(int *)(in_ECX + 0x7c);
    *(int *)(param_1 + 0x7c) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(in_ECX + 0x80);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(in_ECX + 0x88);
  return;
}



void FUN_007c5440(byte param_1)

{
  FUN_007c5270();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007c5460(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x8c,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_007c5190();
  }
  local_4 = 0xffffffff;
  FUN_007c5340(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



int FUN_007c54e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ECX;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b3ba6;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x34) == 0) {
    uVar4 = 0x17d;
    if (*(int *)(in_ECX + 0x88) == 1) {
      uVar4 = 0x19c;
    }
    if (*(int *)(in_ECX + 0x88) != 4) {
      param_1 = FUN_00401f00(0x10,uVar3);
      local_4 = 0;
      if (param_1 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = FUN_007e2370(param_1,uVar2,uVar4,1,0,0);
      }
      local_4 = 0xffffffff;
      FUN_006aa320(&param_1);
    }
    if ((DAT_00b43070 == '\0') &&
       (((iVar1 = *(int *)(in_ECX + 0x88), iVar1 == 0 || (iVar1 == 4)) || (iVar1 == 3)))) {
      param_1 = FUN_00401f00(0x10,uVar3);
      local_4 = 1;
      if (param_1 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = FUN_007e2370(param_1,uVar2,0x19d,1,0,0);
      }
      local_4 = 0xffffffff;
      FUN_006aa320(&param_1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return in_ECX + 0x28;
}



void FUN_007c5720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x108) = param_1;
  *(undefined4 *)(in_ECX + 0x10c) = param_2;
  *(undefined4 *)(in_ECX + 0x110) = param_3;
  return;
}



bool FUN_007c5750(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  bool local_1;
  
  local_1 = true;
  piVar2 = (int *)FUN_00707530(4);
  if (piVar2 == (int *)0x0) {
    return true;
  }
  iVar3 = (**(code **)(*piVar2 + 0x54))();
  if ((iVar3 < 1) || (iVar3 = (**(code **)(*piVar2 + 0x54))(), 10 < iVar3)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  uVar6 = -(uint)bVar1 & (uint)piVar2;
  if (uVar6 != 0) {
    bVar1 = *(byte *)(in_ECX + 0x11c);
    if ((byte)((uint)*(undefined4 *)(uVar6 + 0x1c) >> 0x1c) != bVar1) {
      *(undefined1 *)(uVar6 + 0x1f) = 0;
      *(uint *)(uVar6 + 0x1c) = *(uint *)(uVar6 + 0x1c) | (uint)bVar1 << 0x1c;
      *(undefined4 *)(uVar6 + 0x24) = 0xffffffff;
    }
    uVar6 = *(uint *)(param_1 + 4);
    uVar4 = FUN_007ed5c0();
    local_1 = (uVar4 & 0xffff) < uVar6;
    uVar6 = FUN_007ed5c0();
    uVar6 = uVar6 & 0xffff;
    if (uVar6 != 0) {
      iVar3 = FUN_007ed160();
      if (*(char *)(iVar3 + 0xf4) == '\0') {
        FUN_007d6940(param_1);
      }
      if (1 < uVar6) {
        iVar3 = uVar6 - 1;
        do {
          iVar5 = FUN_007ed180();
          if ((iVar5 != 0) && (*(char *)(iVar5 + 0xf4) == '\0')) {
            FUN_007d6940(param_1);
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return local_1;
}



void FUN_007c5850(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(undefined4 **)(in_ECX + 0x118) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x118))(1,uVar1);
    *(undefined4 *)(in_ECX + 0x118) = 0;
  }
  iVar2 = FUN_00401f00(0x220);
  uStack_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_007d6060();
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x118) = uVar3;
  FUN_007d3400(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c58f0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (param_1 != param_2) {
    if (*(int **)(in_ECX + 4) == param_1) {
      *(int *)(in_ECX + 4) = *param_1;
    }
    if (*(int **)(in_ECX + 4) == param_2) {
      *(int **)(in_ECX + 4) = param_1;
    }
    if (*(int **)(in_ECX + 8) == param_1) {
      *(int *)(in_ECX + 8) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    puVar1 = (undefined4 *)param_2[1];
    param_1[1] = (int)puVar1;
    *param_1 = (int)param_2;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_1;
    }
    param_2[1] = (int)param_1;
  }
  return;
}



void FUN_007c5950(int *param_1,int *param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 != param_2) {
    if (*(int **)(in_ECX + 4) == param_1) {
      *(int *)(in_ECX + 4) = *param_1;
    }
    if (*(int **)(in_ECX + 8) == param_1) {
      *(int *)(in_ECX + 8) = param_1[1];
    }
    if (*(int **)(in_ECX + 8) == param_2) {
      *(int **)(in_ECX + 8) = param_1;
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    iVar1 = *param_2;
    *param_1 = iVar1;
    param_1[1] = (int)param_2;
    if (iVar1 != 0) {
      *(int **)(iVar1 + 4) = param_1;
    }
    *param_2 = (int)param_1;
  }
  return;
}



undefined4 FUN_007c59e0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xe0);
  if ((-1 < iVar1) && (iVar1 < (int)(uint)*(ushort *)(in_ECX + 0xb6))) {
    return *(undefined4 *)(*(int *)(in_ECX + 0xb0) + iVar1 * 4);
  }
  return 0;
}



void FUN_007c5a10(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x130);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x130) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_007c5a60(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x140);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x140) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



int FUN_007c5ab0(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  LONG LVar6;
  int in_ECX;
  bool bVar7;
  undefined4 *local_4;
  
  bVar7 = false;
  local_4 = (undefined4 *)0x0;
  piVar5 = *(int **)(in_ECX + 0xf8);
  *(int **)(in_ECX + 0x104) = piVar5;
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  do {
    iVar1 = *piVar5;
    *(int *)(in_ECX + 0x104) = iVar1;
    iVar2 = piVar5[2];
    if (iVar1 == 0) {
LAB_007c5b03:
      bVar3 = false;
    }
    else {
      if (iVar2 != 0) {
        piVar5 = (int *)FUN_00405ad0(&local_4);
        bVar7 = true;
        if (*piVar5 != 0) goto LAB_007c5b03;
      }
      bVar3 = true;
    }
    puVar4 = local_4;
    if ((((bVar7) && (bVar7 = false, local_4 != (undefined4 *)0x0)) &&
        (LVar6 = InterlockedDecrement(local_4 + 1), LVar6 == 0)) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    if (!bVar3) {
      return iVar2;
    }
    piVar5 = *(int **)(in_ECX + 0x104);
  } while( true );
}



int FUN_007c5b50(void)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  LONG LVar6;
  int in_ECX;
  bool bVar7;
  undefined4 *local_4;
  
  bVar7 = false;
  iVar4 = 0;
  local_4 = (undefined4 *)0x0;
  if (*(int *)(in_ECX + 0x104) != 0) {
    do {
      piVar5 = *(int **)(in_ECX + 0x104);
      iVar1 = *piVar5;
      *(int *)(in_ECX + 0x104) = iVar1;
      iVar4 = piVar5[2];
      if (iVar1 == 0) {
LAB_007c5b9d:
        bVar2 = false;
      }
      else {
        if (iVar4 != 0) {
          piVar5 = (int *)FUN_00405ad0(&local_4);
          bVar7 = true;
          if (*piVar5 != 0) goto LAB_007c5b9d;
        }
        bVar2 = true;
      }
      puVar3 = local_4;
      if ((((bVar7) && (bVar7 = false, local_4 != (undefined4 *)0x0)) &&
          (LVar6 = InterlockedDecrement(local_4 + 1), LVar6 == 0)) && (puVar3 != (undefined4 *)0x0))
      {
        (**(code **)*puVar3)(1);
      }
    } while (bVar2);
  }
  return iVar4;
}



void FUN_007c5be0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  LONG LVar7;
  int in_ECX;
  undefined4 *local_8;
  undefined4 *puStack_4;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xf8);
  bVar5 = false;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    iVar2 = puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    if (iVar2 == 0) {
LAB_007c5c27:
      bVar4 = false;
    }
    else {
      piVar6 = (int *)FUN_00405ad0(&local_8);
      bVar5 = true;
      if (*piVar6 == 0) goto LAB_007c5c27;
      bVar4 = true;
    }
    puVar3 = local_8;
    if ((((bVar5) && (bVar5 = false, local_8 != (undefined4 *)0x0)) &&
        (LVar7 = InterlockedDecrement(local_8 + 1), LVar7 == 0)) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    if (bVar4) {
      FUN_007c1a30(*(undefined4 *)(iVar2 + 0x114));
      puVar3 = *(undefined4 **)(iVar2 + 0x114);
      if (puVar3 != (undefined4 *)0x0) {
        LVar7 = InterlockedDecrement(puVar3 + 1);
        if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        *(undefined4 *)(iVar2 + 0x114) = 0;
      }
      piVar6 = (int *)FUN_00405ad0(&puStack_4);
      puVar3 = puStack_4;
      *(ushort *)(*piVar6 + 0x18) = *(ushort *)(*piVar6 + 0x18) | 1;
      if (((puStack_4 != (undefined4 *)0x0) &&
          (LVar7 = InterlockedDecrement(puStack_4 + 1), LVar7 == 0)) &&
         (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      FUN_007d5320();
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c5d00(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  bool bVar3;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
    bVar3 = DAT_00b43384 != '\0';
    if (bVar3) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b43400);
      _DAT_00b43478 = GetCurrentThreadId();
      _DAT_00b4347c = _DAT_00b4347c + 1;
    }
    puVar2 = *(undefined4 **)(in_ECX + 0xe8);
    while (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      if (*piVar1 != 0) {
        FUN_007d6900(param_1);
      }
    }
    if (bVar3) {
      _DAT_00b4347c = _DAT_00b4347c + -1;
      if (_DAT_00b4347c == 0) {
        _DAT_00b43478 = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x007c5d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b43400);
      return;
    }
  }
  return;
}



void FUN_007c5d90(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  uint uVar6;
  
  uVar6 = 0;
  if (*(short *)(param_1 + 0xb6) != 0) {
    if (*(short *)(param_1 + 0xb6) == 0) goto LAB_007c5e4d;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xb0) + uVar6 * 4);
      if (piVar1 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar1 + 0x10))();
        if (iVar4 == 0) {
          iVar4 = (**(code **)(*piVar1 + 8))();
          if (iVar4 != 0) {
            FUN_007c5d90(iVar4);
          }
        }
        else {
          piVar5 = (int *)FUN_00707530(4);
          if (((piVar5 == (int *)0x0) || (iVar4 = (**(code **)(*piVar5 + 0x54))(), iVar4 < 1)) ||
             (iVar4 = (**(code **)(*piVar5 + 0x54))(), 10 < iVar4)) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (((uint)piVar5 & -(uint)bVar3) != 0) {
            puVar2 = *(undefined4 **)(in_ECX + 0xe8);
            while (puVar2 != (undefined4 *)0x0) {
              piVar5 = puVar2 + 2;
              puVar2 = (undefined4 *)*puVar2;
              if (*piVar5 != 0) {
                FUN_007d6940(piVar1);
              }
            }
          }
        }
      }
LAB_007c5e4d:
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(param_1 + 0xb6));
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c5e70(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((param_1 != (int *)0x0) && (iVar1 = (**(code **)(*param_1 + 8))(), iVar1 != 0)) {
    bVar2 = DAT_00b43384 != '\0';
    if (bVar2) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b43400);
      _DAT_00b43478 = GetCurrentThreadId();
      _DAT_00b4347c = _DAT_00b4347c + 1;
    }
    FUN_007c5d90(iVar1);
    if (bVar2) {
      _DAT_00b4347c = _DAT_00b4347c + -1;
      if (_DAT_00b4347c == 0) {
        _DAT_00b43478 = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x007c5edd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b43400);
      return;
    }
  }
  return;
}



void FUN_007c5ef0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xf8);
  while (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    if (iVar2 != 0) {
      FUN_007c1a30(*(undefined4 *)(iVar2 + 0x114));
      puVar3 = *(undefined4 **)(iVar2 + 0x114);
      if (puVar3 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(puVar3 + 1);
        if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        *(undefined4 *)(iVar2 + 0x114) = 0;
      }
    }
  }
  FUN_007c13f0();
  return;
}



void FUN_007c5f60(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  LONG LVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x3d) == '\0') {
    piVar3 = (int *)FUN_00405ad0(&param_1);
    puVar2 = param_1;
    bVar1 = *(byte *)(*piVar3 + 0x18);
    if (param_1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(param_1 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    if ((bVar1 & 1) != 0) {
      FUN_007d21f0();
      return;
    }
    FUN_007d5ed0();
    uVar6 = 0;
    if (*(short *)(in_ECX + 0xb8) != 0) {
      do {
        if ((uVar6 < *(ushort *)(in_ECX + 0xb6)) &&
           (piVar3 = *(int **)(*(int *)(in_ECX + 0xb0) + uVar6 * 4), piVar3 != (int *)0x0)) {
          iVar5 = (**(code **)(*piVar3 + 8))();
          if (iVar5 != 0) {
            FUN_007d6900(iVar5);
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(in_ECX + 0xb8));
    }
    FUN_007d6a40();
  }
  return;
}



void FUN_007c6020(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  LONG LVar6;
  
  puVar2 = param_1;
  if (((*(char *)(param_1 + 0x3f) != '\0') && (*(char *)(param_1 + 0x41) != '\0')) &&
     (*(char *)(param_1 + 0x3d) == '\0')) {
    piVar5 = (int *)FUN_00405ad0(&param_1);
    puVar3 = param_1;
    iVar1 = *piVar5;
    if (param_1 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(param_1 + 1);
      if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    cVar4 = FUN_008aa390((undefined4 *)(iVar1 + 0x88));
    if ((cVar4 != '\0') && (*(short *)(puVar2 + 0x46) != 0xff)) {
      FUN_007c5720(*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),
                   *(undefined4 *)(iVar1 + 0x90));
      FUN_007c5f60(puVar2);
    }
  }
  return;
}



undefined1 FUN_007c6100(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar5 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ce678;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 == (undefined4 *)0x0) {
    piVar2 = (int *)FUN_00707530(4);
    if (piVar2 == (int *)0x0) goto LAB_007c620b;
    iVar3 = (**(code **)(*piVar2 + 0x54))();
    uVar4 = -(uint)(iVar3 != -1) & (uint)piVar2;
    if (uVar4 != 0) {
      puVar5 = (undefined4 *)FUN_007b4280(*(uint *)(uVar4 + 0x1c) >> 0x1c);
    }
  }
  cVar1 = FUN_007c5750(param_1);
  if (cVar1 == '\0') {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  puVar5 = (undefined4 *)puVar5[0x3a];
  while (puVar5 != (undefined4 *)0x0) {
    piVar2 = puVar5 + 2;
    puVar5 = (undefined4 *)*puVar5;
    if (*piVar2 != 0) {
      puVar6 = (undefined4 *)FUN_00405ad0(&param_2);
      uStack_4 = 0;
      cVar1 = FUN_007d2ea0(param_1,*puVar6);
      puVar6 = param_2;
      uStack_4 = 0xffffffff;
      if (((param_2 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(param_2 + 1), LVar7 == 0)
          ) && (puVar6 != (undefined4 *)0x0)) {
        (**(code **)*puVar6)(1);
      }
      if (cVar1 != '\0') {
        FUN_007d5790(param_1);
      }
    }
  }
LAB_007c620b:
  *unaff_FS_OFFSET = local_c;
  return 1;
}



int FUN_007c6230(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  LONG LVar6;
  int in_ECX;
  bool bVar7;
  undefined4 *local_4;
  
  bVar7 = false;
  local_4 = (undefined4 *)0x0;
  puVar1 = *(undefined4 **)(in_ECX + 0xe8);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    if (iVar2 == 0) {
LAB_007c626f:
      bVar3 = false;
    }
    else {
      piVar5 = (int *)FUN_00405ad0(&local_4);
      bVar7 = true;
      bVar3 = true;
      if (*piVar5 != param_1) goto LAB_007c626f;
    }
    puVar4 = local_4;
    if ((((bVar7) && (bVar7 = false, local_4 != (undefined4 *)0x0)) &&
        (LVar6 = InterlockedDecrement(local_4 + 1), LVar6 == 0)) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    if (bVar3) {
      return iVar2;
    }
  } while( true );
}



undefined4 FUN_007c62d0(ushort param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  if (uVar4 < *(uint *)(in_ECX + 0xf0)) {
    puVar2 = (undefined4 *)**(undefined4 **)(in_ECX + 0xe8);
    uVar3 = (*(undefined4 **)(in_ECX + 0xe8))[2];
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      uVar3 = *puVar1;
    }
    return uVar3;
  }
  return 0;
}



bool FUN_007c6310(undefined4 *param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  char unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b520b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xfffe;
  piVar1 = (int *)(in_ECX + 0x124);
  if (*piVar1 == 0) {
    iVar5 = FUN_00401f00(0x150,uVar4);
    local_4 = 0;
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00814160(3);
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar6);
  }
  *(undefined4 *)(*piVar1 + 0x124) = 3;
  iVar5 = *piVar1;
  *(undefined4 *)(iVar5 + 0x54) = param_1[0x22];
  *(undefined4 *)(iVar5 + 0x58) = param_1[0x23];
  *(undefined4 *)(iVar5 + 0x5c) = param_1[0x24];
  iVar5 = *(int *)(in_ECX + 0x120);
  if (iVar5 != 0) {
    if (param_3 == '\0') goto LAB_007c643d;
    if (iVar5 != 0) {
      FUN_007c1ee0(iVar5);
    }
  }
  puVar7 = (undefined4 *)FUN_007c23c0(DAT_00b43104,0x18);
  puVar2 = *(undefined4 **)(in_ECX + 0x120);
  if (puVar2 != puVar7) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar2 + 1), LVar8 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(in_ECX + 0x120) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
LAB_007c643d:
  puVar2 = *(undefined4 **)(in_ECX + 0x120);
  iVar5 = *piVar1;
  puVar7 = *(undefined4 **)(iVar5 + 0x140);
  if (puVar7 != puVar2) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar7 + 1), LVar8 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar5 + 0x140) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  iVar5 = *piVar1;
  puVar2 = *(undefined4 **)(iVar5 + 0x148);
  if (puVar2 != param_1) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar2 + 1), LVar8 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(iVar5 + 0x148) = param_1;
    InterlockedIncrement(param_1 + 1);
  }
  if (param_3 == '\0') {
    iVar5 = *(int *)(in_ECX + 0x128);
    *(int *)(in_ECX + 0x128) = iVar5 + 1;
  }
  else {
    iVar5 = -1;
  }
  (**(code **)(*(int *)*piVar1 + 0x84))(iVar5);
  iVar5 = *piVar1;
  puVar2 = *(undefined4 **)(iVar5 + 0x140);
  if (puVar2 != (undefined4 *)0x0) {
    LVar8 = InterlockedDecrement(puVar2 + 1);
    if ((LVar8 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(iVar5 + 0x140) = 0;
  }
  if (unaff_retaddr == '\0') {
    *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xfffe;
  }
  else {
    *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 1;
  }
  bVar3 = 5 < *(int *)(in_ECX + 0x128);
  if (bVar3) {
    *(undefined4 *)(in_ECX + 0x128) = 0;
  }
  *unaff_FS_OFFSET = in_ECX;
  return bVar3;
}



float10 FUN_007c6570(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                    float *param_5,float *param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  int *piVar9;
  LONG LVar10;
  int in_ECX;
  float10 fVar11;
  float local_8;
  
  puVar3 = param_7;
  local_8 = 0.0;
  puVar1 = *(undefined4 **)(in_ECX + 0xe8);
  while (puVar1 != (undefined4 *)0x0) {
    piVar9 = puVar1 + 2;
    puVar1 = (undefined4 *)*puVar1;
    if (*piVar9 != 0) {
      fVar11 = (float10)FUN_007d31b0(param_1,param_2,param_3,puVar3);
      local_8 = (float)(fVar11 + (float10)local_8);
      if (0.0 < local_8) {
        *param_4 = *param_4 + 1;
      }
    }
  }
  piVar9 = (int *)FUN_00405ad0(&param_7);
  puVar8 = param_7;
  iVar2 = *piVar9;
  puVar1 = *(undefined4 **)(iVar2 + 0xe0);
  puVar3 = *(undefined4 **)(iVar2 + 0xe4);
  puVar4 = *(undefined4 **)(iVar2 + 0xe8);
  if (((param_7 != (undefined4 *)0x0) && (LVar10 = InterlockedDecrement(param_7 + 1), LVar10 == 0))
     && (puVar8 != (undefined4 *)0x0)) {
    (**(code **)*puVar8)(1);
  }
  param_7 = puVar4;
  if ((float)puVar4 < (float)puVar3) {
    param_7 = puVar3;
  }
  if (((float)puVar1 <= (float)param_7) && (puVar1 = puVar4, (float)puVar4 < (float)puVar3)) {
    puVar1 = puVar3;
  }
  *param_5 = (float)puVar1;
  param_7 = puVar1;
  piVar9 = (int *)FUN_00405ad0(&param_7);
  puVar1 = param_7;
  iVar2 = *piVar9;
  fVar5 = *(float *)(iVar2 + 0xec);
  fVar6 = *(float *)(iVar2 + 0xf0);
  fVar7 = *(float *)(iVar2 + 0xf4);
  if (((param_7 != (undefined4 *)0x0) && (LVar10 = InterlockedDecrement(param_7 + 1), LVar10 == 0))
     && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  param_7 = (undefined4 *)fVar7;
  if (fVar7 < fVar6) {
    param_7 = (undefined4 *)fVar6;
  }
  if (((float)param_7 < fVar5) || (fVar5 = fVar6, fVar7 < fVar6)) {
    fVar7 = fVar5;
  }
  *param_6 = fVar7;
  return (float10)local_8;
}



int FUN_007c6740(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  
  puVar2 = *(undefined4 **)(in_ECX + 0xe8);
  iVar3 = 0;
  while (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if ((*piVar1 != 0) && (*(short *)(*piVar1 + 0x118) != 0xff)) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}



void FUN_007c6770(undefined4 param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  LONG LVar11;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *puStack_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce6b3;
  local_c = *unaff_FS_OFFSET;
  uVar8 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar6 = false;
  FUN_007b7650(uVar8);
  if (DAT_00b42cda == '\0') {
    piVar1 = (int *)(in_ECX + 0x124);
    if (*(int *)(in_ECX + 0x124) == 0) {
      local_10 = FUN_00401f00(0x150);
      local_4 = 0;
      if (local_10 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_00814160(0);
      }
      local_4 = 0xffffffff;
      FUN_0075fa90(uVar9);
    }
    *(undefined4 *)(*piVar1 + 0x124) = 0;
    local_10 = (uint)DAT_00b42eac;
    FUN_007b4890(5);
    if (*(int *)(in_ECX + 0x100) != 0) {
      puVar3 = *(undefined4 **)(in_ECX + 0xf8);
      while (puVar3 != (undefined4 *)0x0) {
        iVar4 = puVar3[2];
        puVar3 = (undefined4 *)*puVar3;
        if (iVar4 == 0) {
LAB_007c6857:
          bVar5 = false;
        }
        else {
          piVar10 = (int *)FUN_00405ad0(&local_1c);
          bVar6 = true;
          if (*piVar10 == 0) goto LAB_007c6857;
          bVar5 = true;
        }
        puVar7 = local_1c;
        if ((((bVar6) && (bVar6 = false, local_1c != (undefined4 *)0x0)) &&
            (LVar11 = InterlockedDecrement(local_1c + 1), LVar11 == 0)) &&
           (puVar7 != (undefined4 *)0x0)) {
          (**(code **)*puVar7)(1);
        }
        if (bVar5) {
          piVar10 = (int *)FUN_00405ad0(&local_18);
          puVar7 = local_18;
          bVar2 = *(byte *)(*piVar10 + 0x18);
          if (((local_18 != (undefined4 *)0x0) &&
              (LVar11 = InterlockedDecrement(local_18 + 1), LVar11 == 0)) &&
             (puVar7 != (undefined4 *)0x0)) {
            (**(code **)*puVar7)(1);
          }
          if ((~bVar2 & 1) == 0) {
            FUN_007d21f0();
          }
          else {
            FUN_00405ad0(&puStack_14);
            local_4 = 1;
            FUN_00707370(0,1);
            puVar7 = puStack_14;
            local_4 = 0xffffffff;
            if (((puStack_14 != (undefined4 *)0x0) &&
                (LVar11 = InterlockedDecrement(puStack_14 + 1), LVar11 == 0)) &&
               (puVar7 != (undefined4 *)0x0)) {
              (**(code **)*puVar7)(1);
            }
            if (*(short *)(iVar4 + 0x118) != 0xff) {
              DAT_00b42eb0 = iVar4;
              FUN_007d59c0(*piVar1,param_1);
            }
          }
        }
      }
      DAT_00b42eb0 = 0;
    }
    iVar4 = *piVar1;
    puVar3 = *(undefined4 **)(iVar4 + 0x140);
    if (puVar3 != (undefined4 *)0x0) {
      LVar11 = InterlockedDecrement(puVar3 + 1);
      if ((LVar11 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)(iVar4 + 0x140) = 0;
    }
    FUN_007b4890(local_10);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c69c0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ce6d8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9047c;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a9046c;
  *unaff_FS_OFFSET = local_c;
  return;
}



int * FUN_007c6a20(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  LONG LVar4;
  int *in_ECX;
  
  piVar3 = (int *)(**(code **)(*in_ECX + 4))();
  puVar1 = (undefined4 *)piVar3[2];
  if (puVar1 != (undefined4 *)*param_2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *param_2;
    piVar3[2] = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  *piVar3 = param_1;
  piVar3[1] = *(int *)(param_1 + 4);
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    **(int **)(param_1 + 4) = (int)piVar3;
    *(int **)(param_1 + 4) = piVar3;
    in_ECX[3] = in_ECX[3] + 1;
    return piVar3;
  }
  in_ECX[1] = (int)piVar3;
  *(int **)(param_1 + 4) = piVar3;
  in_ECX[3] = in_ECX[3] + 1;
  return piVar3;
}



void FUN_007c6ac0(byte param_1)

{
  FUN_007c69c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_007c6ae0(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce713;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_007c6230(param_1);
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = FUN_00401f00(0x220,uVar1);
    local_4 = 0;
    if (iVar3 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_007d6060();
    }
    *(undefined1 *)(puVar2 + 0x41) = param_2._0_1_;
    local_4 = 0xffffffff;
    FUN_007d3400(param_1);
    param_2 = puVar2;
    InterlockedIncrement(puVar2 + 1);
    local_4 = 1;
    FUN_007c16b0(&param_2);
    local_4 = 0xffffffff;
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if (LVar4 == 0) {
      (**(code **)*puVar2)(1);
    }
    if (*(char *)(puVar2 + 0x3d) != '\0') {
      if (*(char *)((int)puVar2 + 0xf5) == '\0') {
        uVar5 = FUN_007c1960();
      }
      else {
        uVar5 = FUN_007c23c0(DAT_00b43104,0x16);
        piVar6 = (int *)FUN_007d6fe0();
        iVar3 = *piVar6;
        uVar7 = FUN_007c1360();
        (**(code **)(iVar3 + 0x6c))(uVar7);
      }
      FUN_00499310(uVar5);
    }
  }
  else {
    *(undefined1 *)(puVar2 + 0x41) = param_2._0_1_;
  }
  FUN_007c5f60(puVar2);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_007c6c30(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  LONG LVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce74e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = *(undefined4 **)(in_ECX + 0xf8);
  do {
    if (puVar5 == (undefined4 *)0x0) {
      iVar2 = FUN_00401f00(0x220,uVar1);
      local_4 = 0;
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)FUN_007d6060();
      }
      local_4 = 0xffffffff;
      *(undefined1 *)(puVar3 + 0x41) = 1;
      puVar5 = (undefined4 *)FUN_00401f00(0x114,uVar1);
      local_4 = 1;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        FUN_0071a490();
        puVar5[0x42] = 0;
        *puVar5 = &PTR_FUN_00a43044;
        puVar5[0x43] = 0x3f800000;
        puVar5[0x44] = 0;
      }
      *(ushort *)(puVar5 + 6) = *(ushort *)(puVar5 + 6) & 0xfffe;
      local_4 = 0xffffffff;
      FUN_007d3400(puVar5);
      FUN_007d3370(1);
      *(undefined1 *)((int)puVar3 + 0xf5) = 0;
      FUN_007c5a10(param_1);
      param_1 = puVar3;
      InterlockedIncrement(puVar3 + 1);
      local_4 = 2;
      FUN_007c16b0(&param_1);
      local_4 = 0xffffffff;
      LVar6 = InterlockedDecrement(puVar3 + 1);
      if (LVar6 == 0) {
        (**(code **)*puVar3)(1);
      }
      goto LAB_007c6dc7;
    }
    puVar3 = (undefined4 *)puVar5[2];
    puVar5 = (undefined4 *)*puVar5;
  } while ((puVar3 == (undefined4 *)0x0) || ((undefined4 *)puVar3[0x4c] != param_1));
  piVar4 = (int *)FUN_00405ad0(&param_1);
  puVar5 = param_1;
  *(ushort *)(*piVar4 + 0x18) = *(ushort *)(*piVar4 + 0x18) & 0xfffe;
  if ((param_1 != (undefined4 *)0x0) &&
     ((LVar6 = InterlockedDecrement(param_1 + 1), LVar6 == 0 && (puVar5 != (undefined4 *)0x0)))) {
    (**(code **)*puVar5)(1);
  }
  FUN_007d1ed0(0x3f800000,0);
LAB_007c6dc7:
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_007c6de0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int in_ECX;
  undefined4 *local_4;
  
  if (*(int *)(in_ECX + 0x10c) == 0) {
    FUN_00749800(in_ECX + 0x114);
    *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(in_ECX + 0xf8);
  }
  else {
    FUN_007c58f0(*(int *)(in_ECX + 0x10c),*(undefined4 *)(in_ECX + 0xf8));
  }
  if (*(int *)(in_ECX + 0x108) == 0) {
    FUN_00749800(in_ECX + 0x110);
    *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(in_ECX + 0xf8);
  }
  else {
    FUN_007c58f0(*(int *)(in_ECX + 0x108),*(undefined4 *)(in_ECX + 0xf8));
  }
  piVar8 = *(int **)(in_ECX + 0x10c);
  if (piVar8 != (int *)0x0) {
    piVar3 = (int *)*piVar8;
joined_r0x007c6e73:
    piVar6 = piVar3;
    if (piVar6 != (int *)0x0) {
      iVar2 = piVar6[2];
      piVar3 = (int *)*piVar6;
      piVar8 = piVar6 + 2;
      if (iVar2 != 0) {
        if (*(float *)(iVar2 + 0xdc) < 0.1 != (*(float *)(iVar2 + 0xdc) == 0.1)) {
          fVar1 = *(float *)(iVar2 + 0xe0);
          piVar8 = (int *)CONCAT22((short)((uint)piVar8 >> 0x10),
                                   (ushort)(_DAT_00b2c680 < fVar1) << 8 |
                                   (ushort)(NAN(_DAT_00b2c680) || NAN(fVar1)) << 10 |
                                   (ushort)(_DAT_00b2c680 == fVar1) << 0xe);
          if (_DAT_00b2c680 >= fVar1 && (_DAT_00b2c680 == fVar1) == 0) {
            piVar4 = *(int **)(in_ECX + 0x108);
            if (piVar6 != piVar4) {
              if (*(int **)(in_ECX + 0xf8) == piVar6) {
                *(int *)(in_ECX + 0xf8) = *piVar6;
              }
              if (*(int **)(in_ECX + 0xf8) == piVar4) {
                *(int **)(in_ECX + 0xf8) = piVar6;
              }
              if (*(int **)(in_ECX + 0xfc) == piVar6) {
                *(int *)(in_ECX + 0xfc) = piVar6[1];
              }
              if (*piVar6 != 0) {
                *(int *)(*piVar6 + 4) = piVar6[1];
              }
              if ((int *)piVar6[1] != (int *)0x0) {
                *(int *)piVar6[1] = *piVar6;
              }
              piVar8 = (int *)piVar4[1];
              piVar6[1] = (int)piVar8;
              *piVar6 = (int)piVar4;
              if (piVar8 != (int *)0x0) {
                *piVar8 = (int)piVar6;
              }
              piVar4[1] = (int)piVar6;
            }
            goto joined_r0x007c6e73;
          }
        }
        piVar8 = (int *)FUN_00405ad0(&local_4);
        puVar7 = local_4;
        if (((*(byte *)(*piVar8 + 0x18) & 1) != 0) ||
           ((0.9 <= *(float *)(iVar2 + 0xdc) && (*(float *)(iVar2 + 0xe0) < _DAT_00b2c680)))) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        piVar8 = (int *)0x0;
        if (((local_4 != (undefined4 *)0x0) &&
            (piVar8 = (int *)InterlockedDecrement(local_4 + 1), piVar8 == (int *)0x0)) &&
           (puVar7 != (undefined4 *)0x0)) {
          piVar8 = (int *)(**(code **)*puVar7)(1);
        }
        if (bVar5) {
          if (iVar2 == param_1) {
            piVar8 = (int *)FUN_007c5950(piVar6,*(undefined4 *)(in_ECX + 0x108));
          }
          else {
            piVar8 = (int *)FUN_007c58f0(piVar6,*(undefined4 *)(in_ECX + 0x10c));
          }
        }
      }
      goto joined_r0x007c6e73;
    }
  }
  return piVar8;
}



void FUN_007c6ff0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007c6230(param_1);
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    FUN_007d21f0();
    return;
  }
  if (iVar1 != 0) {
    FUN_007c5f60(iVar1);
  }
  return;
}



void FUN_007c7030(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_007c6230(param_1);
  if (iVar1 != 0) {
    FUN_007d3370(param_2);
  }
  return;
}



byte FUN_007c7050(int *param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  iVar4 = (**(code **)(*param_1 + 8))();
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*param_1 + 0x10))();
    if (iVar4 != 0) {
      bVar2 = FUN_007c6100();
      return bVar2;
    }
    return 1;
  }
  bVar2 = 1;
  uVar6 = 0;
  iVar5 = FUN_00560920(&DAT_00b3fd70,iVar4);
  if (iVar5 == 0) {
    if (*(short *)(iVar4 + 0xb6) != 0) {
      if (*(short *)(iVar4 + 0xb6) == 0) goto LAB_007c7198;
      do {
        piVar1 = *(int **)(*(int *)(iVar4 + 0xb0) + uVar6 * 4);
        if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 6) & 1) == 0)) {
          iVar5 = (**(code **)(*piVar1 + 0x10))();
          if (iVar5 == 0) {
            iVar5 = (**(code **)(*piVar1 + 8))();
            if ((iVar5 == 0) || ((*(byte *)(iVar5 + 0x18) & 1) != 0)) goto LAB_007c7198;
            bVar3 = FUN_007c7050(iVar5,param_2);
          }
          else {
            bVar3 = FUN_007c6100(piVar1,param_2);
          }
          bVar2 = bVar2 & bVar3;
        }
LAB_007c7198:
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(iVar4 + 0xb6));
    }
  }
  else {
    iVar4 = *(int *)(iVar5 + 0xe0);
    if ((-1 < iVar4) && (iVar4 < (int)(uint)*(ushort *)(iVar5 + 0xb6))) {
      piVar1 = *(int **)(*(int *)(iVar5 + 0xb0) + iVar4 * 4);
      if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 6) & 1) == 0)) {
        iVar4 = (**(code **)(*piVar1 + 0x10))();
        if (iVar4 != 0) {
          bVar2 = FUN_007c6100(piVar1,param_2);
          return bVar2 & 1;
        }
        iVar4 = (**(code **)(*piVar1 + 8))();
        if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x18) & 1) == 0)) {
          bVar2 = FUN_007c7050(iVar4,param_2);
          return bVar2 & 1;
        }
      }
    }
  }
  return bVar2;
}



void FUN_007c71b0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  undefined4 *puVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  undefined4 *local_24;
  int *local_20;
  float local_1c;
  float local_18;
  int *local_14;
  undefined4 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce778;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = *(int **)(in_ECX + 0xe8);
  FUN_007d2ff0(param_1);
  do {
    if (piVar1 == (int *)0x0) {
      *unaff_FS_OFFSET = local_c;
      return;
    }
    piVar2 = (int *)*piVar1;
    local_14 = piVar1;
    fVar7 = (float10)FUN_007d2ff0(param_1);
    local_18 = (float)fVar7;
    puVar5 = (undefined4 *)0x0;
    local_24 = (undefined4 *)0x0;
    piVar6 = *(int **)(in_ECX + 0xe8);
    local_4 = 0;
    if (piVar6 != piVar1) {
      do {
        piVar1 = (int *)*piVar6;
        local_20 = piVar6;
        if (puVar5 != (undefined4 *)piVar6[2]) {
          if ((puVar5 != (undefined4 *)0x0) &&
             (LVar4 = InterlockedDecrement(puVar5 + 1), LVar4 == 0)) {
            (**(code **)*puVar5)(1);
          }
          puVar5 = (undefined4 *)piVar6[2];
          local_24 = puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar5 + 1);
          }
        }
        local_1c = (float)puVar5[0x34];
        if (local_1c < local_18) {
          FUN_007c17d0(&puStack_10,&local_20);
          puVar3 = puStack_10;
          if (((puStack_10 != (undefined4 *)0x0) &&
              (LVar4 = InterlockedDecrement(puStack_10 + 1), LVar4 == 0)) &&
             (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          FUN_007c6a20(local_20,&local_24);
          break;
        }
        piVar6 = piVar1;
      } while (piVar1 != local_14);
    }
    local_4 = 0xffffffff;
    piVar1 = piVar2;
    if ((puVar5 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar5 + 1), LVar4 == 0)) {
      (**(code **)*puVar5)(1);
    }
  } while( true );
}



void FUN_007c7340(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce820;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070b780(0);
  *in_ECX = &PTR_FUN_00a904b4;
  in_ECX[0x37] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x39] = &PTR_FUN_00a9048c;
  in_ECX[0x40] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x3d] = &PTR_FUN_00a9048c;
  in_ECX[0x44] = 0;
  in_ECX[0x45] = 0;
  in_ECX[0x48] = 0;
  in_ECX[0x49] = 0;
  local_4 = 7;
  FUN_006ff420("shadow scene node");
  FUN_00573880(uVar2);
  FUN_00573880();
  in_ECX[0x46] = 0;
  puVar5 = (undefined4 *)in_ECX[0x48];
  if (puVar5 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar5 + 1);
    if ((LVar3 == 0) && (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    in_ECX[0x48] = 0;
  }
  puVar5 = (undefined4 *)in_ECX[0x37];
  if (puVar5 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar5 + 1);
    if ((LVar3 == 0) && (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    in_ECX[0x37] = 0;
  }
  *(undefined2 *)(in_ECX + 0x38) = 0xffff;
  in_ECX[0x4a] = 0;
  *(undefined1 *)(in_ECX + 0x4b) = 0;
  iVar4 = FUN_00401f00(0x220);
  local_4._0_1_ = 8;
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)FUN_007d6060();
  }
  puVar1 = (undefined4 *)in_ECX[0x44];
  local_4._0_1_ = 7;
  if (puVar1 != puVar5) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x44] = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  iVar4 = FUN_00401f00(0x220);
  local_4._0_1_ = 9;
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)FUN_007d6060();
  }
  puVar1 = (undefined4 *)in_ECX[0x45];
  local_4 = CONCAT31(local_4._1_3_,7);
  if (puVar1 != puVar5) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x45] = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c76d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009a9f28;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar4 = (int *)in_ECX[0x3e];
  if (piVar4 != (int *)0x0) {
    while( true ) {
      puVar1 = (undefined4 *)piVar4[2];
      piVar4 = (int *)*piVar4;
      if ((puVar1 != (undefined4 *)0x0) && ((undefined4 *)puVar1[0x4c] == param_1)) break;
      if (piVar4 == (int *)0x0) {
        *unaff_FS_OFFSET = local_c;
        return;
      }
    }
    param_1 = puVar1;
    local_10 = in_ECX;
    InterlockedIncrement(puVar1 + 1);
    local_4 = 0;
    FUN_007d5f80(&local_10,&param_1);
    if ((local_10 != (undefined4 *)0x0) &&
       ((LVar3 = InterlockedDecrement(local_10 + 1), LVar3 == 0 && (local_10 != (undefined4 *)0x0)))
       ) {
      (**(code **)*local_10)(1,uVar2);
    }
    puVar1 = param_1;
    local_4 = 0xffffffff;
    if ((param_1 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(param_1 + 1), LVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c77c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009a9f28;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (undefined4 *)0x0) {
    InterlockedIncrement(param_1 + 1);
    local_4 = 0;
    FUN_007d5f80(&local_10,&param_1);
    if (local_10 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(local_10 + 1);
      if ((LVar3 == 0) && (local_10 != (undefined4 *)0x0)) {
        (**(code **)*local_10)(1,uVar2);
      }
    }
    puVar1 = param_1;
    local_4 = 0xffffffff;
    if (param_1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(param_1 + 1);
      if (LVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c7880(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  puVar2 = *(undefined4 **)(in_ECX + 0xf8);
  while (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if (*piVar1 != 0) {
      FUN_007c77c0(*piVar1);
    }
  }
  FUN_00573880();
  *(undefined4 *)(in_ECX + 0x108) = 0;
  *(undefined4 *)(in_ECX + 0x10c) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c78d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  LONG LVar9;
  int iVar10;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  undefined4 *local_30;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ce85b;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (*(char *)(in_ECX + 300) == '\0') {
    puVar2 = *(undefined4 **)(in_ECX + 0xe8);
    while (puVar2 != (undefined4 *)0x0) {
      iVar10 = puVar2[2];
      puVar2 = (undefined4 *)*puVar2;
      if (iVar10 != 0) {
        piVar8 = (int *)FUN_00405ad0(&local_30);
        puVar5 = local_30;
        iVar3 = *piVar8;
        if (((local_30 != (undefined4 *)0x0) &&
            (LVar9 = InterlockedDecrement(local_30 + 1), LVar9 == 0)) &&
           (puVar5 != (undefined4 *)0x0)) {
          (**(code **)*puVar5)(1);
        }
        if ((iVar3 == 0) || (*(int *)(iVar3 + 4) == 1)) {
          FUN_007c77c0(iVar10);
        }
        else {
          if (*(char *)(iVar10 + 0x104) != '\0') {
            FUN_007c6020(iVar10);
          }
          if ((*(char *)(iVar10 + 0xf4) == '\0') || (cVar6 = FUN_00405a80(), cVar6 == '\0')) {
            FUN_007d6390(param_1);
          }
        }
      }
    }
    FUN_007c71b0(puVar1);
  }
  puVar2 = DAT_00b43124;
  DAT_00b42f30 = *(undefined1 *)(in_ECX + 0x11c);
  if (DAT_00b43124 != puVar1) {
    if (((DAT_00b43124 != (undefined4 *)0x0) &&
        (LVar9 = InterlockedDecrement(DAT_00b43124 + 1), LVar9 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_00b43124 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  if (DAT_00b42f48 == 0) {
    piStack_2c = (int *)FUN_00401f00(0x38);
    uStack_4 = 0;
    if (piStack_2c == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)FUN_0071a8e0();
    }
    uVar4 = *(undefined4 *)(DAT_00b3f928 + 8);
    uStack_4 = 0xffffffff;
    FUN_00405710(piVar8);
    (**(code **)(*piVar8 + 0x4c))(puVar1);
    FUN_0070ab40(unaff_retaddr);
    (**(code **)(*piVar8 + 0x50))();
    FUN_00405710(uVar4);
  }
  else {
    if (DAT_00b42e86 == '\x01') {
      if (DAT_00b2d18c == -1) {
        DAT_00b2d18c = DAT_00b42f40;
      }
      DAT_00b42f40 = 4;
    }
    else if (DAT_00b2d18c != -1) {
      DAT_00b42f40 = DAT_00b2d18c;
      DAT_00b2d18c = -1;
    }
    uStack_28 = puVar1[0x22];
    uStack_24 = puVar1[0x23];
    uStack_20 = puVar1[0x24];
    iStack_10 = 0;
    uStack_1c = uStack_28;
    uStack_18 = uStack_24;
    uStack_14 = uStack_20;
    FUN_007ecae0(0x1c,uStack_28,uStack_24,uStack_20,0,uVar7);
    uStack_28 = puVar1[0x19];
    uStack_24 = puVar1[0x1c];
    uStack_20 = puVar1[0x1f];
    iStack_10 = 0;
    uStack_1c = uStack_28;
    uStack_18 = uStack_24;
    uStack_14 = uStack_20;
    FUN_007ecae0(0x1d,uStack_28,uStack_24,uStack_20,0);
    uStack_28 = puVar1[0x1b];
    uStack_24 = puVar1[0x1e];
    uStack_20 = puVar1[0x21];
    iStack_10 = 0;
    uStack_1c = uStack_28;
    uStack_18 = uStack_24;
    uStack_14 = uStack_20;
    FUN_007ecae0(0x1e,uStack_28,uStack_24,uStack_20,0);
    iVar10 = FUN_00707530(1);
    if (iVar10 != 0) {
      _DAT_00b46648 = *(undefined4 *)(iVar10 + 0x20);
      _DAT_00b4664c = *(undefined4 *)(iVar10 + 0x24);
      _DAT_00b46638 = *(float *)(iVar10 + 0x30);
      _DAT_00b46650 = *(undefined4 *)(iVar10 + 0x28);
      _DAT_00b4663c = _DAT_00b46638 - *(float *)(iVar10 + 0x2c);
      _DAT_00b46640 = 0;
      _DAT_00b46644 = 0;
      iStack_10 = 0;
      _DAT_00b46654 = 0;
      piStack_2c = (int *)_DAT_00b4663c;
      uStack_28 = _DAT_00b46648;
      uStack_24 = _DAT_00b4664c;
      uStack_20 = _DAT_00b46650;
      uStack_1c = _DAT_00b46648;
      uStack_18 = _DAT_00b4664c;
      uStack_14 = _DAT_00b46650;
    }
    _DAT_00b460b8 = _DAT_00b46064 + _DAT_00b2c670 * (_DAT_00b46068 - _DAT_00b46064);
    piVar8 = (int *)FUN_007b7650();
    piStack_2c = piVar8;
    if (piVar8 != (int *)0x0) {
      InterlockedIncrement(piVar8 + 1);
    }
    uStack_4 = 1;
    if (piVar8[1] == 1) {
      InterlockedIncrement(piVar8 + 1);
    }
    puVar2 = *(undefined4 **)(DAT_00b3f928 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    FUN_00405710(piVar8);
    (**(code **)(*piVar8 + 0x4c))(puVar1);
    *(undefined1 *)(piVar8 + 0x878) = 1;
    FUN_0070ab40(unaff_retaddr);
    *(undefined1 *)((int)piVar8 + 0x21e1) = 1;
    (**(code **)(*piVar8 + 0x50))();
    FUN_00405710(puVar2);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    if ((puVar2 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar2 + 1), LVar9 == 0)) {
      (**(code **)*puVar2)(1);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    LVar9 = InterlockedDecrement(piVar8 + 1);
    if (LVar9 == 0) {
      (**(code **)*piVar8)(1);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * FUN_007c7dc0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_EAX;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  undefined4 *local_8 [2];
  
  if ((param_1 == 0) || (piVar5 = *(int **)(in_ECX + 0xe8), piVar5 == (int *)0x0)) {
    return in_EAX;
  }
  do {
    iVar1 = piVar5[2];
    piVar4 = piVar5 + 2;
    piVar5 = (int *)*piVar5;
    if (iVar1 != 0) {
      piVar4 = (int *)FUN_00405ad0(local_8);
      puVar3 = local_8[0];
      iVar2 = *piVar4;
      piVar4 = (int *)0x0;
      if (((local_8[0] != (undefined4 *)0x0) &&
          (piVar4 = (int *)InterlockedDecrement(local_8[0] + 1), piVar4 == (int *)0x0)) &&
         (puVar3 != (undefined4 *)0x0)) {
        piVar4 = (int *)(**(code **)*puVar3)(1);
      }
      if (iVar2 == param_1) {
        piVar5 = (int *)FUN_007c77c0(iVar1);
        return piVar5;
      }
    }
    if (piVar5 == (int *)0x0) {
      return piVar4;
    }
  } while( true );
}



void FUN_007c7e50(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  puVar2 = *(undefined4 **)(in_ECX + 0xe8);
  while (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if (*piVar1 != 0) {
      FUN_007c77c0(*piVar1);
    }
  }
  FUN_00573880();
  FUN_00573880();
  *(undefined4 *)(in_ECX + 0x108) = 0;
  *(undefined4 *)(in_ECX + 0x10c) = 0;
  FUN_007c7880();
  return;
}



void FUN_007c7eb0(char param_1,char param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  if (param_1 != '\0') {
    puVar2 = *(undefined4 **)(in_ECX + 0xe8);
    while (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      if (*piVar1 != 0) {
        FUN_007c5f60(*piVar1);
      }
    }
    if (param_2 == '\0') {
      FUN_007c7e50();
    }
  }
  return;
}



void FUN_007c7ef0(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *(ushort *)(param_1 + 0xb8);
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      if ((uVar5 < *(ushort *)(param_1 + 0xb6)) &&
         (piVar2 = *(int **)(*(int *)(param_1 + 0xb0) + uVar5 * 4), piVar2 != (int *)0x0)) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 4))(); puVar3 != (undefined4 *)0x0;
            puVar3 = (undefined4 *)puVar3[1]) {
          if (puVar3 == &DAT_00b3fd14) {
            if ((char)param_2 == '\0') {
              FUN_007c6ae0(piVar2,1);
            }
            else {
              FUN_007c7dc0(piVar2);
            }
            goto LAB_007c7f5d;
          }
        }
        iVar4 = (**(code **)(*piVar2 + 8))();
        if (iVar4 != 0) {
          FUN_007c7ef0(piVar2,param_2);
        }
      }
LAB_007c7f5d:
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c7f90(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  if (param_1 != 0) {
    bVar1 = DAT_00b43384 != '\0';
    if (bVar1) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b43400);
      _DAT_00b43478 = GetCurrentThreadId();
      _DAT_00b4347c = _DAT_00b4347c + 1;
    }
    FUN_007c7ef0(param_1,param_2);
    if (bVar1) {
      _DAT_00b4347c = _DAT_00b4347c + -1;
      if (_DAT_00b4347c == 0) {
        _DAT_00b43478 = 0;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b43400);
    }
  }
  return;
}



void FUN_007c8000(void)

{
  uint uVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ce8ea;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a904b4;
  local_4 = 7;
  puVar2 = (undefined4 *)FUN_007b4280(*(undefined1 *)(in_ECX + 0x47),uVar1);
  if (puVar2 == in_ECX) {
    FUN_007b4270(*(undefined1 *)(in_ECX + 0x47),0);
  }
  FUN_007c7e50();
  puVar2 = (undefined4 *)in_ECX[0x44];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x44] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x45];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x45] = 0;
  }
  if ((undefined4 *)in_ECX[0x46] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x46])(1);
  }
  if (in_ECX[0x48] != 0) {
    FUN_007c1ee0(in_ECX[0x48]);
  }
  puVar2 = (undefined4 *)in_ECX[0x48];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x48] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x37];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x37] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x49];
  local_4._0_1_ = 6;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x48];
  local_4._0_1_ = 5;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x45];
  local_4._0_1_ = 4;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x44];
  local_4._0_1_ = 3;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4._0_1_ = 2;
  FUN_007c69c0();
  local_4._0_1_ = 1;
  FUN_007c69c0();
  puVar2 = (undefined4 *)in_ECX[0x37];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0070b810();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c8240(byte param_1)

{
  FUN_007c8000();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007c8270(float param_1)

{
  int in_ECX;
  
  *(float *)(in_ECX + 0x2c) = (1.0 - param_1 * 0.83) * 163840.0;
  *(undefined4 *)(in_ECX + 0x30) = 0x48200000;
  return;
}



void FUN_007c82a0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  FUN_006ffd30();
  *in_ECX = &PTR_FUN_00a81984;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  *(undefined2 *)(in_ECX + 6) = 0;
  in_ECX[7] = 0x3f800000;
  in_ECX[8] = DAT_00b3fa90;
  in_ECX[9] = DAT_00b3fa94;
  uVar1 = DAT_00b3fa98;
  in_ECX[0xb] = 0x46d9999b;
  in_ECX[10] = uVar1;
  in_ECX[0xc] = 0x48200000;
  *in_ECX = &PTR_FUN_00a90584;
  return;
}



void FUN_007c8300(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a90584;
  FUN_006ffd70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007c8330(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x34,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_007c82a0();
  }
  local_4 = 0xffffffff;
  FUN_00740cf0(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



float10 FUN_007c8480(void)

{
  int in_ECX;
  
  if ((0.0 <= *(float *)(in_ECX + 0xe8)) && (10.0 <= *(float *)(in_ECX + 0xe8))) {
    return (float10)1.0;
  }
  if (0.0 <= *(float *)(in_ECX + 0xe8)) {
    return (float10)(*(float *)(in_ECX + 0xe8) / 10.0);
  }
  return (float10)0.0;
}



undefined4 FUN_007c8510(void)

{
  if (DAT_00b42eb8 != 0) {
    return CONCAT31((int3)((uint)DAT_00b42eb8 >> 8),*(undefined1 *)(DAT_00b42eb8 + 6));
  }
  return 0;
}



void FUN_007c8520(void)

{
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  float *pfStack_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined1 local_c [12];
  
  local_48 = 0;
  pfStack_90 = &local_40;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_5c = 0.0;
  local_60 = 0.0;
  local_64 = 0;
  local_68 = 0.0;
  local_70 = 0.0;
  local_74 = 0;
  local_78 = 0.0;
  local_7c = 0.0;
  local_44 = 0x3f800000;
  local_58 = 1.0;
  local_6c = 1.0;
  local_80 = 1.0;
  puStack_94 = (undefined1 *)0x7c857b;
  FUN_00718a80();
  puStack_94 = (undefined1 *)&local_8c;
  pfStack_90 = &local_80;
  local_80 = local_10 * local_40;
  puStack_98 = local_c;
  local_7c = local_34 * local_10;
  local_78 = local_28 * local_10;
  local_70 = local_3c * local_10;
  local_6c = local_30 * local_10;
  local_68 = local_24 * local_10;
  local_60 = local_38 * local_10;
  local_5c = local_2c * local_10;
  local_58 = local_10 * local_20;
  local_50 = local_1c;
  local_4c = local_18;
  local_48 = local_14;
  local_44 = 0x3f800000;
  local_8c = -DAT_00b465a8;
  local_88 = -DAT_00b465ac;
  local_84 = -DAT_00b465b0;
  D3DXVec3TransformNormal();
  D3DXVec3Normalize();
  DAT_00b454d8 = (undefined1 *)&puStack_98;
  DAT_00b454dc = &local_18;
  DAT_00b454e0 = puStack_98;
  DAT_00b454e4 = 0;
  return;
}



void FUN_007c8680(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_40[0] = *param_1;
  local_40[1] = param_1[1];
  local_40[2] = param_1[2];
  local_40[3] = param_1[9];
  local_30 = param_1[3];
  local_2c = param_1[4];
  local_28 = param_1[5];
  local_24 = param_1[10];
  local_20 = param_1[6];
  local_1c = param_1[7];
  local_18 = param_1[8];
  local_14 = param_1[0xb];
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = param_1[0xc];
  puVar2 = local_40;
  puVar3 = &DAT_00b45560;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



void FUN_007c8710(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa8))();
  FUN_00820910();
  FUN_00814430();
  FUN_00815db0();
  FUN_0081aa00();
  FUN_0081b120();
  FUN_0081bce0();
  FUN_0081d090();
  FUN_0081dc40();
  FUN_0081ea70();
  FUN_008203d0();
  if (1 < DAT_00b42f48) {
    FUN_0082d990();
    FUN_00820c00();
    FUN_00828280();
    FUN_00831910();
    FUN_00832740();
    FUN_008357b0();
    FUN_00836230();
    FUN_00836810();
    FUN_00839f90();
    FUN_0083a7e0();
    FUN_00839a50();
    return;
  }
  FUN_0081f330();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c87c0(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  if ((param_1 != 0) && (param_3 - 0x160U < 3)) {
    if (*(char *)(param_1 + 0xe4) == '\0') {
      fVar3 = (float10)FUN_007c8480();
      _DAT_00b44edc = (float)fVar3;
      if (param_3 == 0x162) {
        iVar2 = *(int *)(param_1 + 0xec);
        fVar3 = (float10)FUN_0043f490(0,1);
        _DAT_00b44ee0 =
             (float)((fVar3 / (float10)3600.0) * (float10)6.283180236816406 * (float10)iVar2);
      }
    }
    else {
      fVar1 = *(float *)(param_2 + 0x44);
      _DAT_00b44edc = *(float *)(param_2 + 0x40) * 0.255;
      if (param_3 == 0x162) {
        fVar3 = (float10)FUN_0043f490(0,1);
        _DAT_00b44ee0 =
             (float)((fVar3 / (float10)3600.0) * (float10)6.283180236816406 * (float10)fVar1 *
                    (float10)255.0);
        return;
      }
    }
  }
  return;
}



void FUN_007c88a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  return;
}



void FUN_007c88b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d05a5;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00802540(uVar2);
  *in_ECX = &PTR_FUN_00a90634;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  puVar1 = (undefined4 *)in_ECX[9];
  local_4 = 8;
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[9] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x1f];
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x1f] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x20];
  if (puVar1 != param_2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x20] = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x21];
  if (puVar1 != param_3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x21] = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x22];
  if (puVar1 != param_4) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x22] = param_4;
    if (param_4 != (undefined4 *)0x0) {
      InterlockedIncrement(param_4 + 1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x24];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x24] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x23];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x23] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x26];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x26] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x25];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x25] = 0;
  }
  in_ECX[0x1d] = 0xffffffff;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007c8b30(void)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d05a5;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a90634;
  local_4 = 8;
  piVar4 = &DAT_00b45290;
  do {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0xb45494);
  piVar4 = &DAT_00b45088;
  do {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0xb4528c);
  piVar4 = &DAT_00b455a0;
  do {
    if (*piVar4 != 0) {
      piVar1 = (int *)(*piVar4 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0xb45c2c);
  piVar4 = &DAT_00b45018;
  do {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0xb45084);
  piVar4 = &DAT_00b45518;
  do {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0xb4555c);
  puVar2 = (undefined4 *)in_ECX[9];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[9] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x1f];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x1f] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x20];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x20] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x21];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x21] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x22];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x22] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x24];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x24] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x23];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x23] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x26];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x26] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x25];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x25] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x26];
  local_4._0_1_ = 7;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x25];
  local_4._0_1_ = 6;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x24];
  local_4._0_1_ = 5;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x23];
  local_4._0_1_ = 4;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x22];
  local_4._0_1_ = 3;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x21];
  local_4._0_1_ = 2;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x20];
  local_4._0_1_ = 1;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x1f];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_008012e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_007c8f50(void)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int *piVar4;
  
  FUN_008025f0();
  piVar4 = &DAT_00b45290;
  do {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0xb45494);
  piVar4 = &DAT_00b45088;
  do {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0xb4528c);
  piVar4 = &DAT_00b455a0;
  do {
    if (*piVar4 != 0) {
      piVar1 = (int *)(*piVar4 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0xb45c2c);
  piVar4 = &DAT_00b45018;
  do {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0xb45084);
  piVar4 = &DAT_00b45518;
  do {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0xb4555c);
  _memset(&DAT_00b43b20,0,0x68c);
  _memset(&DAT_00b441b0,0,0x68c);
  _memset(&DAT_00b43490,0,0x68c);
  _memset(&DAT_00b44840,0,0x68c);
  return 1;
}



void FUN_007c90b0(void)

{
  int in_ECX;
  uint uVar1;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    uVar1 = 0;
    do {
      if (*(int **)((int)&DAT_00b45290 + uVar1) != (int *)0x0) {
        (**(code **)(**(int **)((int)&DAT_00b45290 + uVar1) + 0x5c))();
      }
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x204);
  }
  uVar1 = 0;
  do {
    if (*(int **)((int)&DAT_00b45088 + uVar1) != (int *)0x0) {
      (**(code **)(**(int **)((int)&DAT_00b45088 + uVar1) + 0x44))();
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x204);
  FUN_0077a4a0();
  return;
}



undefined4 FUN_007c9110(void)

{
  int in_ECX;
  int in_stack_00000010;
  
  (**(code **)(**(int **)(in_ECX + 0x18) + 0x20))(*(undefined4 *)(in_stack_00000010 + 0x1c));
  (**(code **)(**(int **)(in_ECX + 0x18) + 0x24))(*(undefined4 *)(in_stack_00000010 + 0x28));
  return 0;
}



void FUN_007c9140(undefined4 param_1,float param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float local_18;
  float fStack_14;
  float fStack_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = (int)param_4;
  piVar3 = &DAT_00b45040;
  iVar2 = 0;
  do {
    if (*(char *)(*piVar3 + 8) != '\0') {
      local_c = *(undefined4 *)((int)&DAT_00b46528 + iVar2);
      local_8 = *(undefined4 *)((int)&DAT_00b4652c + iVar2);
      local_4 = *(undefined4 *)((int)&DAT_00b46530 + iVar2);
      D3DXVec3TransformCoord(&local_18,&local_c,param_1);
      param_4 = *(float *)((int)&DAT_00b465a8 + iVar2);
      if (iVar1 == 0) {
        if (param_3 - 0x177U < 3) {
          local_18 = param_2 * local_18;
          fStack_14 = fStack_14 * param_2;
          fStack_10 = param_2 * fStack_10;
        }
        else {
          param_4 = param_4 / param_2;
        }
      }
      *(float *)((int)&DAT_00b44fd8 + iVar2) = local_18;
      *(float *)((int)&DAT_00b44fdc + iVar2) = fStack_14;
      *(float *)((int)&DAT_00b44fe0 + iVar2) = fStack_10;
      *(float *)((int)&DAT_00b44fe4 + iVar2) = param_4;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while ((int)piVar3 < 0xb4504c);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_007c9230(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6,float *param_7)

{
  byte bVar1;
  int *piVar2;
  LONG LVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 *puStack_238;
  float local_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_220;
  float afStack_21c [54];
  int iStack_144;
  float fStack_140;
  float fStack_13c;
  int *piStack_138;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  float fStack_12c;
  undefined1 *puStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_10c;
  int *piStack_104;
  float afStack_fc [11];
  undefined4 auStack_d0 [2];
  undefined1 auStack_c8 [4];
  undefined1 auStack_c4 [92];
  undefined4 auStack_68 [3];
  undefined1 auStack_5c [88];
  
  uStack_23c._3_1_ = '\0';
  local_234 = (float)in_ECX;
  if ((*(int *)(param_5 + 0x18) != 0) &&
     (uStack_23c._3_1_ = (*(byte *)(*(int *)(param_5 + 0x18) + 0x1c) & 2) != 0,
     (bool)uStack_23c._3_1_)) {
    if (param_3 == 0) {
      return 0;
    }
    if (*(int *)(in_ECX + 0x34) == 0) {
      FUN_007655f0(param_2,param_7,0,3,1);
    }
    (**(code **)(**(int **)(in_ECX + 0x18) + 0x30))(*(undefined2 *)(param_3 + 0x24));
  }
  FUN_00765480(param_7,0);
  puVar8 = DAT_00b42e90;
  puStack_238 = DAT_00b42e90;
  if ((DAT_00b42eac == 5) && (_DAT_00b44ee4 == 0.0)) {
    if (**(int **)(DAT_00b42eb8 + 0xc) != 0) {
      piVar2 = (int *)FUN_00405ad0(&puStack_238);
      puVar8 = puStack_238;
      local_234 = *(float *)(*piVar2 + 0xf8);
      if (((puStack_238 != (undefined4 *)0x0) &&
          (LVar3 = InterlockedDecrement(puStack_238 + 1), LVar3 == 0)) &&
         (puVar8 != (undefined4 *)0x0)) {
        (**(code **)*puVar8)(1);
      }
      if (param_2 == 0) {
        local_234 = local_234 / param_7[0xc];
      }
      DAT_00b44fe4 = local_234;
      return 0;
    }
  }
  else {
    if ((int)DAT_00b42e90 - 6U < 4) {
      if (_DAT_00b44ee4 <= 0.0) {
        DAT_00b44fd8 = 0;
        DAT_00b44fdc = 0;
        DAT_00b44fe0 = 0;
        DAT_00b44fe4 = (float)DAT_00b465a8;
        return 0;
      }
      piVar2 = *(int **)(param_5 + 0x18);
      if (((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 0x54))(), iVar4 < 1)) ||
         (iVar4 = (**(code **)(*piVar2 + 0x54))(), 10 < iVar4)) {
        bVar1 = 0;
      }
      else {
        bVar1 = 1;
      }
      uVar5 = 0;
      if (((uint)piVar2 & -(uint)bVar1) != 0) {
        if (((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 0x54))(), iVar4 < 5)) ||
           (iVar4 = (**(code **)(*piVar2 + 0x54))(), 10 < iVar4)) {
          bVar1 = 0;
        }
        else {
          bVar1 = 1;
        }
        uVar5 = -(uint)bVar1 & (uint)piVar2;
      }
      local_234 = _DAT_00b44ee4;
      if (param_2 == 0) {
        local_234 = _DAT_00b44ee4 / param_7[0xc];
      }
      DAT_00b44fd8 = 0;
      DAT_00b44fe0 = *(undefined4 *)(uVar5 + 0xa0);
      DAT_00b44fdc = 0;
      DAT_00b44fe4 = local_234;
      return 0;
    }
    uStack_118 = 0;
    uStack_11c = 0;
    uStack_120 = 0;
    uStack_124 = 0;
    fStack_12c = 0.0;
    puStack_130 = (undefined1 *)0x0;
    uStack_134 = 0;
    piStack_138 = (int *)0x0;
    fStack_140 = 0.0;
    iStack_144 = 0;
    afStack_21c[0x35] = 0.0;
    afStack_21c[0x34] = 0.0;
    uStack_114 = 0x3f800000;
    puStack_128 = (undefined1 *)0x3f800000;
    fStack_13c = 1.0;
    afStack_21c[0x33] = 1.0;
    afStack_21c[0x32] = 1.0;
    afStack_21c[0x2d] = 1.0;
    afStack_21c[0x28] = 1.0;
    afStack_21c[0x23] = 1.0;
    afStack_21c[0x31] = 0.0;
    afStack_21c[0x30] = 0.0;
    afStack_21c[0x2f] = 0.0;
    afStack_21c[0x2e] = 0.0;
    afStack_21c[0x2c] = 0.0;
    afStack_21c[0x2b] = 0.0;
    afStack_21c[0x2a] = 0.0;
    afStack_21c[0x29] = 0.0;
    afStack_21c[0x27] = 0.0;
    afStack_21c[0x26] = 0.0;
    afStack_21c[0x25] = 0.0;
    afStack_21c[0x24] = 0.0;
    if ((uStack_23c._3_1_ == '\0') || (param_2 == 0)) {
      FUN_00718a80(afStack_21c + 0x13);
      afStack_21c[0x33] = afStack_21c[0x1f] * afStack_21c[0x13];
      afStack_21c[0x34] = afStack_21c[0x16] * afStack_21c[0x1f];
      afStack_21c[0x35] = afStack_21c[0x19] * afStack_21c[0x1f];
      fStack_140 = afStack_21c[0x14] * afStack_21c[0x1f];
      fStack_13c = afStack_21c[0x17] * afStack_21c[0x1f];
      piStack_138 = (int *)(afStack_21c[0x1a] * afStack_21c[0x1f]);
      puStack_130 = (undefined1 *)(afStack_21c[0x15] * afStack_21c[0x1f]);
      fStack_12c = afStack_21c[0x18] * afStack_21c[0x1f];
      puStack_128 = (undefined1 *)(afStack_21c[0x1f] * afStack_21c[0x1b]);
      uStack_120 = afStack_21c[0x1c];
      uStack_11c = afStack_21c[0x1d];
      uStack_118 = afStack_21c[0x1e];
      uStack_114 = 0x3f800000;
    }
    else {
      puVar10 = *(undefined4 **)(param_2 + 0x28);
      afStack_21c[0x23] = (float)*puVar10;
      afStack_21c[0x24] = (float)puVar10[1];
      afStack_21c[0x25] = (float)puVar10[2];
      afStack_21c[0x27] = (float)puVar10[4];
      afStack_21c[0x28] = (float)puVar10[5];
      afStack_21c[0x29] = (float)puVar10[6];
      afStack_21c[0x2b] = (float)puVar10[8];
      afStack_21c[0x2c] = (float)puVar10[9];
      afStack_21c[0x2d] = (float)puVar10[10];
      afStack_21c[0x2f] = (float)puVar10[0xc] + DAT_00b3f92c;
      afStack_21c[0x30] = (float)puVar10[0xd] + DAT_00b3f930;
      afStack_21c[0x31] = (float)puVar10[0xe] + DAT_00b3f934;
      afStack_21c[0x26] = (float)puVar10[3];
      afStack_21c[0x2a] = (float)puVar10[7];
      afStack_21c[0x2e] = (float)puVar10[0xb];
      afStack_21c[0x32] = (float)puVar10[0xf];
      D3DXMatrixInverse(afStack_21c + 0x33,0,afStack_21c + 0x23);
    }
    if (*(char *)(DAT_00b45030 + 8) != '\0') {
      iVar4 = 0;
      do {
        fStack_220 = -*(float *)((int)&DAT_00b465a8 + iVar4);
        afStack_21c[0] = -*(float *)((int)&DAT_00b465ac + iVar4);
        afStack_21c[1] = -*(float *)((int)&DAT_00b465b0 + iVar4);
        D3DXVec3TransformNormal(&fStack_230,&fStack_220,afStack_21c + 0x33);
        D3DXVec3Normalize(&fStack_22c,&uStack_23c);
        *(float *)((int)&DAT_00b454d8 + iVar4) = fStack_220;
        iVar6 = iVar4 + 0x10;
        *(float *)((int)&DAT_00b454dc + iVar4) = afStack_21c[0];
        *(float *)((int)&DAT_00b454e0 + iVar4) = afStack_21c[1];
        *(undefined4 *)((int)&DAT_00b454e4 + iVar4) = 0;
        iVar4 = iVar6;
      } while (iVar6 < 0x20);
    }
    FUN_007c9140(afStack_21c + 0x33,param_7[0xc],puVar8,param_2);
    if (((int)puVar8 < 0x180) || (0x187 < (int)puVar8)) {
      fStack_230 = DAT_00b46658;
      fStack_22c = DAT_00b4665c;
      fStack_228 = DAT_00b46660;
      D3DXVec3TransformCoord(&fStack_220,&fStack_230,afStack_21c + 0x33);
      _DAT_00b44f08 = fStack_220;
      _DAT_00b44f0c = afStack_21c[0];
      _DAT_00b44f10 = afStack_21c[1];
    }
    else {
      fStack_220 = DAT_00b46658;
      afStack_21c[0] = DAT_00b4665c;
      afStack_21c[1] = DAT_00b46660;
      fStack_230 = DAT_00b46658 - param_7[9];
      fStack_22c = DAT_00b4665c - param_7[10];
      fStack_228 = DAT_00b46660 - param_7[0xb];
      FUN_0043f350();
      _DAT_00b44f18 = fStack_230;
      _DAT_00b44f1c = fStack_22c;
      _DAT_00b44f20 = fStack_228;
      _DAT_00b44f24 = 0;
      _DAT_00b44f08 = fStack_220 - DAT_00b3f92c;
      _DAT_00b44f0c = afStack_21c[0] - DAT_00b3f930;
      _DAT_00b44f10 = afStack_21c[1] - DAT_00b3f934;
      fStack_230 = _DAT_00b44f08;
      fStack_22c = _DAT_00b44f0c;
      fStack_228 = _DAT_00b44f10;
    }
    _DAT_00b44f14 = 0x3f800000;
    if (*(char *)(DAT_00b4501c + 8) != '\0') {
      if ((((*(int **)(DAT_00b42eb8 + 0xc) == (int *)0x0) ||
           (*(char *)(**(int **)(DAT_00b42eb8 + 0xc) + 0xf5) != '\0')) ||
          ((0x17f < (int)puVar8 && ((int)puVar8 < 0x188)))) ||
         ((puVar8 == (undefined4 *)0x77 || (puVar8 == (undefined4 *)0x85)))) {
        pfVar7 = (float *)(*(int *)(in_ECX + 0x14) + 0x940);
        pfVar9 = afStack_fc + 3;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pfVar9 = pfVar9 + 1;
        }
        D3DXMatrixTranspose(&DAT_00b45498,afStack_fc + 3);
      }
      else {
        afStack_21c[0x21] = 0.0;
        afStack_21c[0x20] = 0.0;
        afStack_21c[0x1f] = 0.0;
        afStack_21c[0x1e] = 0.0;
        afStack_21c[0x1c] = 0.0;
        afStack_21c[0x1b] = 0.0;
        afStack_21c[0x1a] = 0.0;
        afStack_21c[0x19] = 0.0;
        afStack_21c[0x17] = 0.0;
        afStack_21c[0x16] = 0.0;
        afStack_21c[0x15] = 0.0;
        afStack_21c[0x14] = 0.0;
        afStack_21c[0x11] = 0.0;
        afStack_21c[0x10] = 0.0;
        afStack_21c[0xf] = 0.0;
        afStack_21c[0xe] = 0.0;
        afStack_21c[0xc] = 0.0;
        afStack_21c[0xb] = 0.0;
        afStack_21c[10] = 0.0;
        afStack_21c[9] = 0.0;
        afStack_21c[7] = 0.0;
        afStack_21c[6] = 0.0;
        afStack_21c[5] = 0.0;
        afStack_21c[4] = 0.0;
        afStack_21c[0x22] = 1.0;
        afStack_21c[0x1d] = 1.0;
        afStack_21c[0x18] = 1.0;
        afStack_21c[0x13] = 1.0;
        afStack_21c[0x12] = 1.0;
        afStack_21c[0xd] = 1.0;
        afStack_21c[8] = 1.0;
        afStack_21c[3] = 1.0;
        if (param_2 == 0) {
          FUN_007640a0(afStack_21c + 0x13,param_7);
        }
        else {
          pfVar7 = *(float **)(param_2 + 0x28);
          pfVar9 = afStack_21c + 0x13;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar9 = *pfVar7;
            pfVar7 = pfVar7 + 1;
            pfVar9 = pfVar9 + 1;
          }
        }
        afStack_21c[0x1f] = DAT_00b3f92c + afStack_21c[0x1f];
        afStack_21c[0x20] = DAT_00b3f930 + afStack_21c[0x20];
        afStack_21c[0x21] = DAT_00b3f934 + afStack_21c[0x21];
        D3DXMatrixMultiply(afStack_fc + 3,afStack_21c + 0x13,**(int **)(DAT_00b42eb8 + 0xc) + 0x10);
        pfVar7 = afStack_fc;
        pfVar9 = afStack_21c;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pfVar9 = pfVar9 + 1;
        }
        D3DXMatrixTranspose(afStack_21c,afStack_21c);
        pfVar7 = afStack_21c + 3;
        pfVar9 = (float *)&DAT_00b45498;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pfVar9 = pfVar9 + 1;
        }
      }
    }
    if ((((*(char *)(DAT_00b45024 + 8) != '\0') &&
         (piVar2 = *(int **)(param_5 + 0x18), piVar2 != (int *)0x0)) &&
        (iVar4 = (**(code **)(*piVar2 + 0x54))(), iVar4 != -1)) &&
       (iVar4 = FUN_007b4280((uint)piVar2[7] >> 0x1c), iVar4 != 0)) {
      if ((uStack_23c._3_1_ == '\0') || (param_2 == 0)) {
        afStack_21c[3] = *param_7;
        afStack_21c[4] = param_7[1];
        afStack_21c[5] = param_7[2];
        afStack_21c[6] = param_7[9];
        afStack_21c[7] = param_7[3];
        afStack_21c[8] = param_7[4];
        afStack_21c[9] = param_7[5];
        afStack_21c[10] = param_7[10];
        afStack_21c[0xb] = param_7[6];
        afStack_21c[0xc] = param_7[7];
        afStack_21c[0xd] = param_7[8];
        afStack_21c[0xe] = param_7[0xb];
        afStack_21c[0xf] = 0.0;
        afStack_21c[0x10] = 0.0;
        afStack_21c[0x11] = 0.0;
        afStack_21c[0x12] = param_7[0xc];
      }
      else {
        afStack_21c[0x12] = 1.0;
        afStack_21c[3] = 1.0;
        afStack_21c[4] = 0.0;
        fStack_230 = DAT_00b3f92c;
        afStack_21c[5] = 0.0;
        fStack_22c = DAT_00b3f930;
        fStack_228 = DAT_00b3f934;
        afStack_21c[6] = DAT_00b3f92c;
        afStack_21c[7] = 0.0;
        afStack_21c[9] = 0.0;
        afStack_21c[8] = 1.0;
        afStack_21c[10] = DAT_00b3f930;
        afStack_21c[0xb] = 0.0;
        afStack_21c[0xc] = 0.0;
        afStack_21c[0xd] = 1.0;
        afStack_21c[0xe] = DAT_00b3f934;
        afStack_21c[0xf] = 0.0;
        afStack_21c[0x10] = 0.0;
        afStack_21c[0x11] = 0.0;
      }
      afStack_21c[0x11] = 0.0;
      afStack_21c[0x10] = 0.0;
      afStack_21c[0xf] = 0.0;
      pfVar7 = afStack_21c + 3;
      pfVar9 = (float *)&DAT_00b45560;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar9 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar9 = pfVar9 + 1;
      }
    }
    if ((*(char *)(DAT_00b45068 + 8) != '\0') && (param_2 != 0)) {
      pfVar7 = *(float **)(param_2 + 0x28);
      pfVar9 = afStack_21c + 3;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar9 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar9 = pfVar9 + 1;
      }
      D3DXMatrixTranspose(afStack_21c + 3,afStack_21c + 3);
      pfVar7 = afStack_21c + 3;
      pfVar9 = (float *)&DAT_00b44f98;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar9 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar9 = pfVar9 + 1;
      }
    }
    piVar2 = *(int **)(DAT_00b43104 + 0x280);
    if ((int)puStack_238 - 0x177U < 4) {
      iStack_10c = **(int **)(DAT_00b42eb8 + 0xc);
      piStack_104 = piVar2;
      if (*(char *)(iStack_10c + 0x214) == '\0') {
        puVar8 = (undefined4 *)(iStack_10c + 0x150);
        iVar4 = *(int *)((int)local_234 + 0x14);
        pfVar7 = (float *)(iVar4 + 0x980);
        pfVar9 = afStack_21c + 3;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pfVar9 = pfVar9 + 1;
        }
        afStack_21c[0xf] =
             -(DAT_00b3f934 * afStack_21c[0xb] +
              DAT_00b3f92c * afStack_21c[3] + DAT_00b3f930 * afStack_21c[7]);
        afStack_21c[0x10] =
             -(DAT_00b3f934 * afStack_21c[0xc] +
              DAT_00b3f930 * afStack_21c[8] + DAT_00b3f92c * afStack_21c[4]);
        puStack_238 = (undefined4 *)
                      (DAT_00b3f934 * afStack_21c[0xd] +
                      DAT_00b3f92c * afStack_21c[5] + afStack_21c[9] * DAT_00b3f930);
        afStack_21c[0x11] = -(float)puStack_238;
        pfVar7 = (float *)(iVar4 + 0x9c0);
        pfVar9 = afStack_fc + 3;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pfVar9 = pfVar9 + 1;
        }
        D3DXMatrixMultiply(afStack_21c + 0x13,afStack_21c + 3,afStack_fc + 3);
        puVar11 = auStack_5c;
        D3DXMatrixInverse(puVar11,0,afStack_21c + 0x10);
        D3DXMatrixTranspose(afStack_21c + 0xd);
        puStack_130 = auStack_c8 + -(int)puVar8;
        puStack_128 = auStack_c4 + -(int)puVar8;
        iVar4 = 0;
        do {
          uStack_240 = *puVar8;
          uStack_23c = puVar8[1];
          puStack_238 = (undefined4 *)puVar8[2];
          local_234 = -(float)puVar8[3];
          D3DXPlaneNormalize(&uStack_240,&uStack_240);
          D3DXPlaneTransform(&puStack_128,&stack0xfffffdb8,afStack_21c + 9);
          *(undefined4 *)((int)auStack_68 + (int)puVar8) = uStack_134;
          *(undefined1 **)(puVar11 + (int)puVar8) = puStack_130;
          *(float *)(iStack_144 + (int)puVar8) = fStack_12c;
          *(undefined1 **)((int)fStack_13c + (int)puVar8) = puStack_128;
          (**(code **)(*piStack_138 + 0xdc))(piStack_138,iVar4,(int)auStack_68 + (int)puVar8);
          iVar4 = iVar4 + 1;
          puVar8 = puVar8 + 4;
        } while (iVar4 < 6);
        *(undefined1 *)((int)fStack_12c + 0x214) = 1;
        puVar8 = auStack_d0;
        puVar10 = (undefined4 *)((int)fStack_12c + 0x1b4);
        for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        return 0;
      }
      iVar4 = iStack_10c + 0x1b4;
      iVar6 = 0;
      do {
        (**(code **)(*piVar2 + 0xdc))(piVar2,iVar6,iVar4);
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar6 < 6);
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007c9f30(undefined4 param_1,float param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  float fVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int *in_ECX;
  int *piVar12;
  int *unaff_FS_OFFSET;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ce918;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffff94;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar7);
  iVar1 = (int)param_4;
  iVar11 = DAT_00b42e90;
  piVar10 = *(int **)((int)param_4 + 0x18);
  uStack_4 = 0;
  bVar4 = false;
  bVar13 = false;
  if (((piVar10 == (int *)0x0) || (iVar8 = (**(code **)(*piVar10 + 0x54))(), iVar8 < 1)) ||
     (iVar8 = (**(code **)(*piVar10 + 0x54))(), 10 < iVar8)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  piVar12 = (int *)0x0;
  if ((-(uint)bVar3 & (uint)piVar10) != 0) {
    if (((piVar10 == (int *)0x0) || (iVar8 = (**(code **)(*piVar10 + 0x54))(), iVar8 < 5)) ||
       (iVar8 = (**(code **)(*piVar10 + 0x54))(), 10 < iVar8)) {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
    }
    piVar12 = (int *)(-(uint)bVar3 & (uint)piVar10);
  }
  if (piVar10 == (int *)0x0) {
    if (DAT_00b42e8c != (code *)0x0) {
      (*DAT_00b42e8c)("Attempting to render geometry with a shader, but no shader property",0);
    }
    goto switchD_007ca265_caseD_1;
  }
  FUN_007c87c0(piVar12,*(undefined4 *)(iVar1 + 0x10),iVar11);
  iVar8 = *(int *)(iVar1 + 8);
  param_4 = (float)CONCAT31(param_4._1_3_,(piVar10[7] & 2U) != 0);
  if ((iVar8 == 0) ||
     ((bVar13 = (*(ushort *)(iVar8 + 0x18) >> 9 & 1) != 0, 1.0 <= (float)piVar10[8] &&
      (((*(byte *)(iVar8 + 0x18) & 1) == 0 || ((piVar10[7] & 0x100U) == 0)))))) {
    FUN_007e2430(0x3f800000);
  }
  else {
    bVar4 = true;
  }
  iStack_30 = piVar10[8];
  fStack_4c = DAT_00b46498;
  fStack_3c = DAT_00b46498;
  fStack_48 = DAT_00b4649c;
  fStack_38 = DAT_00b4649c;
  uStack_44 = DAT_00b464a0;
  uStack_34 = DAT_00b464a0;
  iStack_40 = DAT_00b464a4;
  DAT_00b464a4 = iStack_30;
  if (piVar12 != (int *)0x0) {
    if (DAT_00b42eac == 1) {
      uVar6 = FUN_007ed5d0();
      uVar7 = (uint)uVar6;
      if (10 < uVar6) {
        uVar7 = 10;
      }
      puVar9 = (undefined4 *)(&DAT_00b2dd50 + uVar7 * 0x10);
    }
    else {
      if (DAT_00b42eac != 2) goto LAB_007ca1b3;
      uVar6 = (**(code **)(*piVar12 + 0x60))(param_1);
      uVar7 = (uint)uVar6;
      if (0x10 < uVar6) {
        uVar7 = 0x10;
      }
      puVar9 = &DAT_00b2de00 + uVar7 * 4;
    }
    FUN_007ecae0(0,*puVar9,puVar9[1],puVar9[2],puVar9[3]);
    FUN_007ecae0(0x19,DAT_00b25ad0,DAT_00b25ad4,DAT_00b25ad8,DAT_00b25adc);
  }
LAB_007ca1b3:
  if (param_4._0_1_ == '\0') {
    if ((piVar12 == (int *)0x0) || ((piVar12[7] & 0x1000U) == 0)) {
      if (((iVar11 == 0x48) || (iVar11 == 0x49)) || ((0x167 < iVar11 && (iVar11 < 0x176)))) {
        iVar8 = in_ECX[0x22];
      }
      else {
        iVar8 = in_ECX[0x1f];
      }
    }
    else {
      iVar8 = in_ECX[0x21];
    }
  }
  else {
    iVar8 = in_ECX[0x20];
  }
  FUN_0075fa90(iVar8);
  if (DAT_00b42e86 != '\0') {
    fStack_3c = 1.0;
    fStack_38 = 1.0;
    uStack_34 = 0x3f800000;
    iStack_30 = 0x3f800000;
    FUN_007ecae0(0,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  }
  switch(iVar11) {
  case 0:
    FUN_00852030(param_1,param_2,iVar1,piVar12);
    break;
  default:
    goto switchD_007ca265_caseD_1;
  case 2:
    FUN_008520c0(param_1,param_2,iVar1,piVar12);
    break;
  case 3:
    FUN_008490f0(param_1,param_2,iVar1,piVar12);
    break;
  case 6:
    FUN_008480c0(param_1,param_2,iVar1,piVar12);
    break;
  case 7:
    FUN_00848190(param_1,param_2,iVar1,piVar12);
    break;
  case 8:
    FUN_00848270(param_1,param_2,iVar1,piVar12);
    break;
  case 9:
    FUN_00848300(param_1,param_2,iVar1,piVar12);
    break;
  case 10:
    FUN_00850b50(param_1,param_2,iVar1,piVar12);
    break;
  case 0xb:
    FUN_00850be0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x10:
    FUN_00849220(param_1,param_2,iVar1,piVar12);
    break;
  case 0x11:
    FUN_008492b0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x12:
    FUN_00849440(param_1,param_2,iVar1,piVar12);
    break;
  case 0x13:
    FUN_00849550(param_1,param_2,iVar1,piVar12);
    break;
  case 0x14:
    FUN_008496e0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x15:
    FUN_00849770(param_1,param_2,iVar1,piVar12);
    break;
  case 0x16:
    FUN_00849900(param_1,param_2,iVar1,piVar12);
    break;
  case 0x17:
    FUN_00849a10(param_1,param_2,iVar1,piVar12);
    break;
  case 0x19:
    FUN_00849ba0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x1a:
    FUN_00849d60(param_1,param_2,iVar1,piVar12);
    break;
  case 0x1b:
    FUN_0084a2e0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x1c:
    FUN_0084a510(param_1,param_2,iVar1,piVar12);
    break;
  case 0x1d:
    FUN_0084abc0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x1e:
    FUN_0084ae80(param_1,param_2,iVar1,piVar12);
    break;
  case 0x1f:
    FUN_0084b040(param_1,param_2,iVar1,piVar12);
    break;
  case 0x20:
    FUN_0084b5c0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x21:
    FUN_0084b5c0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x22:
    FUN_0084b7f0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x23:
    FUN_005e1850(param_1,param_2,iVar1,piVar12);
    break;
  case 0x24:
    FUN_0084c200(param_1,param_2,iVar1,piVar12);
    break;
  case 0x25:
    FUN_0084c3c0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x26:
    FUN_0084c940(param_1,param_2,iVar1,piVar12);
    break;
  case 0x27:
    FUN_0084c940(param_1,param_2,iVar1,piVar12);
    break;
  case 0x28:
    FUN_0084cff0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x29:
    FUN_0084d580(param_1,param_2,iVar1,piVar12);
    break;
  case 0x2a:
    FUN_0084d740(param_1,param_2,iVar1,piVar12);
    break;
  case 0x2b:
    FUN_0084dcc0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x2c:
    FUN_0084def0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x2d:
    FUN_0084e120(param_1,param_2,iVar1,piVar12);
    break;
  case 0x2e:
    FUN_005e1850(param_1,param_2,iVar1,piVar12);
    break;
  case 0x31:
    FUN_0084e860(param_1,param_2,iVar1,piVar12);
    break;
  case 0x32:
    FUN_0084e9e0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x34:
    FUN_00849f20(param_1,param_2,iVar1,piVar12);
    break;
  case 0x35:
    FUN_0084a100(param_1,param_2,iVar1,piVar12);
    break;
  case 0x36:
    FUN_0084a740(param_1,param_2,iVar1,piVar12);
    break;
  case 0x37:
    FUN_0084a980(param_1,param_2,iVar1,piVar12);
    break;
  case 0x38:
    FUN_0084b200(param_1,param_2,iVar1,piVar12);
    break;
  case 0x39:
    FUN_0084b3e0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x3a:
    FUN_0084bab0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x3b:
    FUN_0084bd80(param_1,param_2,iVar1,piVar12);
    break;
  case 0x3c:
    FUN_0084bfc0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x3d:
    FUN_005e1850(param_1,param_2,iVar1,piVar12);
    break;
  case 0x3e:
    FUN_0084c580(param_1,param_2,iVar1,piVar12);
    break;
  case 0x3f:
    FUN_0084c760(param_1,param_2,iVar1,piVar12);
    break;
  case 0x40:
    FUN_0084cb70(param_1,param_2,iVar1,piVar12);
    break;
  case 0x41:
    FUN_0084cdb0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x42:
    FUN_0084d900(param_1,param_2,iVar1,piVar12);
    break;
  case 0x43:
    FUN_0084dae0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x44:
    FUN_0084d2b0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x45:
    FUN_0084e3e0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x46:
    FUN_0084e620(param_1,param_2,iVar1,piVar12);
    break;
  case 0x47:
    FUN_005e1850(param_1,param_2,iVar1,piVar12);
    break;
  case 0x48:
    FUN_00850c70(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x49:
    FUN_00846250(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x4a:
    FUN_008419c0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x4b:
    FUN_00841b40(param_1,param_2,iVar1,piVar12);
    break;
  case 0x4f:
    FUN_00841d30(param_1,param_2,iVar1,piVar12);
    break;
  case 0x51:
    FUN_00841eb0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x55:
    FUN_008420a0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x56:
    FUN_008422c0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x5a:
    FUN_00842550(param_1,param_2,iVar1,piVar12);
    break;
  case 0x5c:
    FUN_00842770(param_1,param_2,iVar1,piVar12);
    break;
  case 0x60:
    FUN_00842a00(param_1,param_2,iVar1,piVar12);
    break;
  case 0x61:
    FUN_00842b80(param_1,param_2,iVar1,piVar12);
    break;
  case 0x65:
    FUN_00842d70(param_1,param_2,iVar1,piVar12);
    break;
  case 0x67:
    FUN_00842ef0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x6b:
    FUN_008430e0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x6c:
    FUN_00843300(param_1,param_2,iVar1,piVar12);
    break;
  case 0x70:
    FUN_00843590(param_1,param_2,iVar1,piVar12);
    break;
  case 0x72:
    FUN_008437b0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x76:
    FUN_0083ad30(param_1,param_2,iVar1,piVar12);
    break;
  case 0x77:
    FUN_0083aeb0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x78:
    FUN_0083b0f0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x7c:
    FUN_0083b2e0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x7d:
    FUN_0083b4f0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x7e:
    FUN_0083b670(param_1,param_2,iVar1,piVar12);
    break;
  case 0x83:
    FUN_0083b860(param_1,param_2,iVar1,piVar12);
    break;
  case 0x84:
    FUN_0083bbf0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x85:
    FUN_0083be10(param_1,param_2,iVar1,piVar12);
    break;
  case 0x86:
    FUN_0083bfe0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x8a:
    FUN_0083c270(param_1,param_2,iVar1,piVar12);
    break;
  case 0x8b:
    FUN_0083c520(param_1,param_2,iVar1,piVar12);
    break;
  case 0x8c:
    FUN_0083c740(param_1,param_2,iVar1,piVar12);
    break;
  case 0x91:
    FUN_0083c9d0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x92:
    FUN_0083cc80(param_1,param_2,iVar1,piVar12);
    break;
  case 0x93:
    FUN_0083ce00(param_1,param_2,iVar1,piVar12);
    break;
  case 0x97:
    FUN_0083cff0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x98:
    FUN_0083d200(param_1,param_2,iVar1,piVar12);
    break;
  case 0x99:
    FUN_0083d380(param_1,param_2,iVar1,piVar12);
    break;
  case 0x9e:
    FUN_0083d570(param_1,param_2,iVar1,piVar12);
    break;
  case 0x9f:
    FUN_0083d780(param_1,param_2,iVar1,piVar12);
    break;
  case 0xa0:
    FUN_0083d9a0(param_1,param_2,iVar1,piVar12);
    break;
  case 0xa4:
    FUN_0083dc30(param_1,param_2,iVar1,piVar12);
    break;
  case 0xa5:
    FUN_0083dee0(param_1,param_2,iVar1,piVar12);
    break;
  case 0xa6:
    FUN_0083e100(param_1,param_2,iVar1,piVar12);
    break;
  case 0xab:
    FUN_0083e390(param_1,param_2,iVar1,piVar12);
    break;
  case 0xac:
    FUN_0083e640(param_1,param_2,iVar1,piVar12);
    break;
  case 0xad:
    FUN_0083e7c0(param_1,param_2,iVar1,piVar12);
    break;
  case 0xae:
    FUN_0083e9b0(param_1,param_2,iVar1,piVar12);
    break;
  case 0xb2:
    FUN_0083ebc0(param_1,param_2,iVar1,piVar12);
    break;
  case 0xb3:
    FUN_0083ed40(param_1,param_2,iVar1,piVar12);
    break;
  case 0xb4:
    FUN_0083ef30(param_1,param_2,iVar1,piVar12);
    break;
  case 0xb9:
    FUN_0083f140(param_1,param_2,iVar1,piVar12);
    break;
  case 0xba:
    FUN_0083f360(param_1,param_2,iVar1,piVar12);
    break;
  case 0xbb:
    FUN_0083f5f0(param_1,param_2,iVar1,piVar12);
    break;
  case 0xbf:
    FUN_0083f8a0(param_1,param_2,iVar1,piVar12);
    break;
  case 0xc0:
    FUN_0083fac0(param_1,param_2,iVar1,piVar12);
    break;
  case 0xc1:
    FUN_0083fd50(param_1,param_2,iVar1,piVar12);
    break;
  case 0xc6:
    FUN_00840000(param_1,param_2,iVar1,piVar12);
    break;
  case 199:
    FUN_00840180(param_1,param_2,iVar1,piVar12);
    break;
  case 200:
    FUN_00840370(param_1,param_2,iVar1,piVar12);
    break;
  case 0xcc:
    FUN_00840580(param_1,param_2,iVar1,piVar12);
    break;
  case 0xcd:
    FUN_00840700(param_1,param_2,iVar1,piVar12);
    break;
  case 0xce:
    FUN_008408f0(param_1,param_2,iVar1,piVar12);
    break;
  case 0xd3:
    FUN_00840b00(param_1,param_2,iVar1,piVar12);
    break;
  case 0xd4:
    FUN_00840d20(param_1,param_2,iVar1,piVar12);
    break;
  case 0xd5:
    FUN_00840fb0(param_1,param_2,iVar1,piVar12);
    break;
  case 0xd9:
    FUN_00841260(param_1,param_2,iVar1,piVar12);
    break;
  case 0xda:
    FUN_00841480(param_1,param_2,iVar1,piVar12);
    break;
  case 0xdb:
    FUN_00841710(param_1,param_2,iVar1,piVar12);
    break;
  case 0xe2:
    FUN_0084eb60(param_1,param_2,iVar1,piVar12);
    break;
  case 0xe3:
    FUN_0084ec90(param_1,param_2,iVar1,piVar12);
    break;
  case 0xe4:
    FUN_0084edc0(param_1,param_2,iVar1,piVar12);
    break;
  case 0xe5:
    FUN_0084eef0(param_1,param_2,iVar1,piVar12);
    break;
  case 0xe8:
    FUN_00843a40(param_1,param_2,iVar1,piVar12);
    break;
  case 0xeb:
    FUN_00843b30(param_1,param_2,iVar1,piVar12);
    break;
  case 0xf6:
    FUN_00843c10(param_1,param_2,iVar1,piVar12);
    break;
  case 0xf9:
    FUN_00843cf0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x104:
    FUN_0084f020(param_1,param_2,iVar1,piVar12);
    break;
  case 0x105:
    FUN_0084f120(param_1,param_2,iVar1,piVar12);
    break;
  case 0x106:
    FUN_0084f340(param_1,param_2,iVar1,piVar12);
    break;
  case 0x107:
    FUN_0084f4f0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x108:
    FUN_0084f5f0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x109:
    FUN_0084f6f0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x10a:
    FUN_0084f7f0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x10f:
    FUN_0084fa10(param_1,param_2,iVar1,piVar12);
    break;
  case 0x110:
    FUN_0084fb40(param_1,param_2,iVar1,piVar12);
    break;
  case 0x111:
    FUN_0084fc70(param_1,param_2,iVar1,piVar12);
    break;
  case 0x112:
    FUN_0084fda0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x115:
    FUN_00843dd0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x116:
    FUN_00843ed0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x118:
    FUN_00843fd0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x119:
    FUN_008440d0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x11c:
    FUN_008441d0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x11d:
    FUN_00844370(param_1,param_2,iVar1,piVar12);
    break;
  case 0x11f:
    FUN_00844510(param_1,param_2,iVar1,piVar12);
    break;
  case 0x120:
    FUN_008446b0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x123:
    FUN_00844850(param_1,param_2,iVar1,piVar12);
    break;
  case 0x124:
    FUN_00844950(param_1,param_2,iVar1,piVar12);
    break;
  case 0x126:
    FUN_00844a50(param_1,param_2,iVar1,piVar12);
    break;
  case 0x127:
    FUN_00844b50(param_1,param_2,iVar1,piVar12);
    break;
  case 0x160:
    FUN_008483e0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x161:
    FUN_008484c0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x162:
    FUN_008485a0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x163:
    FUN_00848680(param_1,param_2,iVar1,piVar12);
    break;
  case 0x164:
    FUN_00848710(param_1,param_2,iVar1,piVar12);
    break;
  case 0x165:
    FUN_008487a0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x166:
    FUN_00848830(param_1,param_2,iVar1,piVar12);
    break;
  case 0x167:
    FUN_008488c0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x168:
    FUN_008517f0(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x169:
    FUN_00846c50(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x16a:
    FUN_00846dc0(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x16b:
    FUN_008479e0(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x16c:
    FUN_00846f90(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x16d:
    FUN_00851250(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x16e:
    FUN_00850f60(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x16f:
    FUN_00846570(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x170:
    FUN_00851520(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x171:
    FUN_008519b0(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x172:
    FUN_00847160(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x173:
    FUN_00847400(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x174:
    FUN_008476f0(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x175:
    FUN_00847d50(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x176:
    FUN_00846890(param_1,param_2,iVar1,piVar12,1);
    break;
  case 0x177:
    FUN_00845cf0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x178:
    FUN_00845ec0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x179:
    FUN_00846090(param_1,param_2,iVar1,piVar12);
    break;
  case 0x17b:
    FUN_0083ba70(param_1,param_2,iVar1,piVar12);
    break;
  case 0x180:
    FUN_0084fed0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x181:
    FUN_008500a0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x182:
    FUN_00850270(param_1,param_2,iVar1,piVar12);
    break;
  case 0x183:
    FUN_00850440(param_1,param_2,iVar1,piVar12);
    break;
  case 0x184:
    FUN_00844c50(param_1,param_2,iVar1,piVar12);
    break;
  case 0x185:
    FUN_00844e30(param_1,param_2,iVar1,piVar12);
    break;
  case 0x186:
    FUN_00845010(param_1,param_2,iVar1,piVar12);
    break;
  case 0x187:
    FUN_008451b0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x18a:
    FUN_008453f0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x18b:
    FUN_00845870(param_1,param_2,iVar1,piVar12);
    break;
  case 0x18c:
    FUN_00851ca0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x18d:
    FUN_00851e70(param_1,param_2,iVar1,piVar12);
    break;
  case 0x18e:
    FUN_00848950(param_1,param_2,iVar1,piVar12);
    break;
  case 399:
    FUN_00848ad0(param_1,param_2,iVar1,piVar12);
    break;
  case 400:
    FUN_00850610(param_1,param_2,iVar1,piVar12);
    break;
  case 0x191:
    FUN_008506b0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x192:
    FUN_008507a0(param_1,param_2,iVar1,piVar12);
    break;
  case 0x193:
    FUN_00850840(param_1,param_2,iVar1,piVar12);
    break;
  case 0x19e:
    FUN_00850930(param_1,param_2,iVar1,piVar12);
    break;
  case 0x19f:
    FUN_00850a40(param_1,param_2,iVar1,piVar12);
  }
  if (((iVar11 - 0x34U < 0x161) && ((iVar11 < 0x160 || (0x167 < iVar11)))) &&
     ((iVar11 < 0x18a || (399 < iVar11)))) {
    cVar5 = FUN_007c8510();
    if (cVar5 == '\0') {
      FUN_0076c730(0x1b,1,0);
      FUN_0076c730(0xe,0,0);
      FUN_0076c730(0xf,0,0);
      if (bVar13) {
        uVar15 = 3;
        uVar14 = 0x17;
      }
      else {
        uVar15 = 4;
        uVar14 = 0x17;
      }
    }
    else {
      if ((bVar4) || (param_2 = (float)piVar12[8], param_2 != 1.0)) {
        FUN_0076c730(0x1b,1,0);
        (**(code **)(*(int *)in_ECX[6] + 8))(*(undefined4 *)(iVar1 + 8));
        if (bVar13) {
          FUN_0076c730(0xf,1,0);
          FUN_0076c730(0x18,*(undefined1 *)(*(int *)(iVar1 + 8) + 0x1a),0);
          switch(*(ushort *)(*(int *)(iVar1 + 8) + 0x18) >> 10 & 7) {
          case 0:
            goto switchD_007cb36b_caseD_0;
          case 1:
            goto switchD_007cb36b_caseD_1;
          case 2:
            goto switchD_007cb36b_caseD_2;
          case 3:
            goto switchD_007cb36b_caseD_3;
          case 4:
            goto switchD_007cb36b_caseD_4;
          case 5:
            goto switchD_007cb36b_caseD_5;
          case 6:
            goto switchD_007cb36b_caseD_6;
          default:
            goto switchD_007cb36b_default;
          }
        }
        uVar15 = 0;
        uVar14 = 0xf;
      }
      else {
        FUN_0076c730(0x1b,0,0);
        if (bVar13) {
          FUN_0076c730(0xf,1,0);
          FUN_0076c730(0x18,*(undefined1 *)(*(int *)(iVar1 + 8) + 0x1a),0);
          switch(*(ushort *)(*(int *)(iVar1 + 8) + 0x18) >> 10 & 7) {
          case 0:
switchD_007cb36b_caseD_0:
            uVar15 = 8;
            break;
          case 1:
switchD_007cb36b_caseD_1:
            uVar15 = 2;
            break;
          case 2:
switchD_007cb36b_caseD_2:
            uVar15 = 3;
            break;
          case 3:
switchD_007cb36b_caseD_3:
            uVar15 = 4;
            break;
          case 4:
switchD_007cb36b_caseD_4:
            uVar15 = 5;
            break;
          case 5:
switchD_007cb36b_caseD_5:
            uVar15 = 6;
            break;
          case 6:
switchD_007cb36b_caseD_6:
            uVar15 = 7;
            break;
          default:
switchD_007cb36b_default:
            uVar15 = 1;
          }
          uVar14 = 0x19;
        }
        else {
          uVar15 = 0;
          uVar14 = 0xf;
        }
      }
      FUN_0076c730(uVar14,uVar15,0);
      FUN_0076c730(0x17,4,0);
      uVar15 = 1;
      uVar14 = 0xe;
    }
LAB_007cb550:
    FUN_0076c730(uVar14,uVar15,0);
  }
  else if (iVar11 - 6U < 4) {
    (**(code **)(*(int *)in_ECX[6] + 8))(*(undefined4 *)(iVar1 + 8));
    if (((*(byte *)(*(int *)(iVar1 + 8) + 0x18) & 1) != 0) &&
       ((**(code **)(*(int *)in_ECX[6] + 100))(0x1b,0,0),
       (*(ushort *)(*(int *)(iVar1 + 8) + 0x18) >> 9 & 1) == 0)) {
      (**(code **)(*(int *)in_ECX[6] + 100))(0xf,1,0);
      (**(code **)(*(int *)in_ECX[6] + 100))(0x19,5,0);
      (**(code **)(*(int *)in_ECX[6] + 100))(0x18,0x80,0);
    }
  }
  else if (iVar11 - 4U < 0xdb) {
    if (bVar4) {
      uVar15 = 1;
LAB_007cb535:
      FUN_0076c730(0x1b,uVar15,0);
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      if (!bVar13) goto LAB_007cb535;
      FUN_0076c730(0x1b,0,0);
      uVar15 = 1;
    }
    uVar14 = 0xf;
    goto LAB_007cb550;
  }
  if ((piVar12 == (int *)0x0) || ((piVar12[7] & 0x80000U) == 0)) {
    param_2 = 0.0;
    if (iVar11 - 0x177U < 4) {
      FUN_0076c730(0xaf,0,0);
      param_2 = -0.0001;
      goto LAB_007cb5d6;
    }
    iVar1 = (&DAT_00b455a0)[iVar11];
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar15 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar15;
    }
    FUN_00772cd0(0xaf,param_2,0);
    iVar1 = (&DAT_00b455a0)[iVar11];
    param_2 = 0.0;
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar15 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar15;
    }
    FUN_00772cd0(0xc3,param_2,0);
  }
  else {
    param_2 = 1.0;
    FUN_0076c730(0xaf,0x3f800000,0);
    param_2 = -0.0005;
LAB_007cb5d6:
    FUN_0076c730(0xc3,param_2,0);
  }
  if ((DAT_00b42eb8 != 0) && (*(char *)(DAT_00b42eb8 + 7) == '\0')) {
    _DAT_00b4668c = 0;
  }
  if ((iVar11 - 0x123U < 7) && (DAT_00b43076 != '\0')) {
    piVar10 = (int *)FUN_00405ad0(&param_2);
    iVar11 = *piVar10;
    uStack_2c = *(undefined4 *)(iVar11 + 0x88);
    uStack_28 = *(undefined4 *)(iVar11 + 0x8c);
    uStack_24 = *(undefined4 *)(iVar11 + 0x90);
    FUN_007016a0();
    piVar10 = (int *)FUN_00405ad0(&param_2);
    fStack_20 = *(float *)(*piVar10 + 0xf8) * 1.2;
    FUN_007016a0();
    FUN_0070c720(&uStack_2c,&fStack_3c,&fStack_4c,0x3727c5ac);
    param_2 = (float)FUN_00701640();
    iVar11 = FUN_00701670();
    param_4 = (fStack_3c + 1.0) * 0.5;
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    param_2 = (float)(int)param_2;
    param_4 = param_4 * param_2;
    FUN_00404f70(param_4);
    uStack_1c = FUN_009828c0();
    fVar2 = (fStack_48 + 1.0) * 0.5;
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    param_4 = (float)iVar11;
    FUN_00484370(fVar2 * param_4);
    iStack_18 = FUN_009828c0();
    iStack_18 = iVar11 - iStack_18;
    fVar2 = (fStack_4c + 1.0) * 0.5;
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    param_2 = fVar2 * param_2;
    FUN_00484370(param_2);
    uStack_14 = FUN_009828c0();
    param_2 = (fStack_38 + 1.0) * 0.5;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    param_2 = param_2 * param_4;
    FUN_00404f70(param_2);
    iStack_10 = FUN_009828c0();
    iStack_10 = iVar11 - iStack_10;
    (**(code **)(**(int **)(DAT_00b43104 + 0x280) + 300))
              (*(int **)(DAT_00b43104 + 0x280),&uStack_1c);
  }
  else {
    iVar11 = (&DAT_00b455a0)[iVar11];
    if (*(int *)(iVar11 + 0x30) == 0) {
      uVar15 = FUN_00772df0();
      *(undefined4 *)(iVar11 + 0x30) = uVar15;
    }
    FUN_00772cd0(0xae,0,0);
  }
switchD_007ca265_caseD_1:
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int * FUN_007cbdc0(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce956;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = FUN_00401f00(8,uVar4);
  local_4 = 0;
  if (iVar5 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar7 = (undefined4 *)FUN_00771090(DAT_00b43104,6,1);
  puVar12 = (undefined4 *)*piVar6;
  if (puVar12 != puVar7) {
    if (((puVar12 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar12 + 1), LVar8 == 0))
       && (puVar12 != (undefined4 *)0x0)) {
      (**(code **)*puVar12)(1);
    }
    *piVar6 = (int)puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  piVar9 = (int *)FUN_00771090(DAT_00b43104,8,1);
  piVar10 = (int *)FUN_00771090(DAT_00b43104,4,1);
  piVar11 = (int *)FUN_00771090(DAT_00b43104,8,1);
  (**(code **)(*(int *)*piVar6 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*piVar6 + 0x50))(1,3,3,2,0);
  (**(code **)(*(int *)*piVar6 + 0x50))(2,5,4,3,0);
  (**(code **)(*(int *)*piVar6 + 0x50))(3,7,5,1,0);
  (**(code **)(*(int *)*piVar6 + 0x4c))(0,4,0xe,0x80000000,2,6,0,0);
  (**(code **)(*(int *)*piVar6 + 0x4c))(0,5,0xf,0x80000001,2,7,0,0);
  (**(code **)(*piVar9 + 0x50))(0,0,0,2,0);
  (**(code **)(*piVar9 + 0x50))(1,1,1,3,0);
  (**(code **)(*piVar9 + 0x50))(2,2,2,4,0);
  (**(code **)(*piVar9 + 0x50))(3,3,3,2,0);
  (**(code **)(*piVar9 + 0x50))(4,5,4,3,0);
  (**(code **)(*piVar9 + 0x50))(5,7,5,1,0);
  (**(code **)(*piVar9 + 0x4c))(0,6,0xe,0x80000000,2,6,0,0);
  (**(code **)(*piVar9 + 0x4c))(0,7,0xf,0x80000001,2,7,0,0);
  (**(code **)(*piVar10 + 0x50))(0,0,0,2,0);
  (**(code **)(*piVar10 + 0x50))(1,3,3,2,0);
  (**(code **)(*piVar10 + 0x50))(2,5,4,3,0);
  (**(code **)(*piVar10 + 0x50))(3,7,5,1,0);
  (**(code **)(*piVar11 + 0x50))(0,0,0,2,0);
  (**(code **)(*piVar11 + 0x50))(1,3,3,2,0);
  (**(code **)(*piVar11 + 0x50))(2,5,4,3,0);
  (**(code **)(*piVar11 + 0x50))(3,7,5,1,0);
  (**(code **)(*piVar11 + 0x4c))(0,4,0xe,0x80000000,2,6,0,0);
  (**(code **)(*piVar11 + 0x4c))(0,5,0xf,0x80000001,2,7,0,0);
  (**(code **)(*piVar11 + 0x4c))(0,6,8,&DAT_80000002,3,5,1,0);
  (**(code **)(*piVar11 + 0x4c))(0,7,9,0x80000003,3,5,2,0);
  piVar13 = (int *)*piVar6;
  if (piVar13 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    for (puVar12 = (undefined4 *)(**(code **)(*piVar13 + 4))(); puVar12 != (undefined4 *)0x0;
        puVar12 = (undefined4 *)puVar12[1]) {
      if (puVar12 == &DAT_00b3f684) {
        bVar1 = 1;
        goto LAB_007cc106;
      }
    }
    bVar1 = 0;
LAB_007cc106:
    uVar4 = -(uint)bVar1 & (uint)piVar13;
  }
  for (puVar12 = (undefined4 *)(**(code **)(*piVar9 + 4))(); puVar12 != (undefined4 *)0x0;
      puVar12 = (undefined4 *)puVar12[1]) {
    if (puVar12 == &DAT_00b3f684) {
      bVar1 = 1;
      goto LAB_007cc134;
    }
  }
  bVar1 = 0;
LAB_007cc134:
  for (puVar12 = (undefined4 *)(**(code **)(*piVar10 + 4))(); puVar12 != (undefined4 *)0x0;
      puVar12 = (undefined4 *)puVar12[1]) {
    if (puVar12 == &DAT_00b3f684) {
      bVar2 = 1;
      goto LAB_007cc160;
    }
  }
  bVar2 = 0;
LAB_007cc160:
  puVar12 = (undefined4 *)(**(code **)(*piVar11 + 4))();
  do {
    if (puVar12 == (undefined4 *)0x0) {
      bVar3 = 0;
LAB_007cc185:
      iVar5 = FUN_00401f00(0x9c);
      if (iVar5 == 0) {
        piVar13 = (int *)0x0;
      }
      else {
        piVar13 = (int *)FUN_007c88b0(uVar4,-(uint)bVar1 & (uint)piVar9,-(uint)bVar2 & (uint)piVar10
                                      ,-(uint)bVar3 & (uint)piVar11);
      }
      (**(code **)(*piVar13 + 0x84))();
      (**(code **)(*piVar13 + 0xa8))();
      (**(code **)(*piVar13 + 0xb4))();
      (**(code **)(*piVar13 + 0xb8))();
      (**(code **)(*piVar13 + 0x88))();
      piVar9 = (int *)piVar6[1];
      if (piVar9 != piVar13) {
        if (((piVar9 != (int *)0x0) && (LVar8 = InterlockedDecrement(piVar9 + 1), LVar8 == 0)) &&
           (piVar9 != (int *)0x0)) {
          (**(code **)*piVar9)(1);
        }
        piVar6[1] = (int)piVar13;
        InterlockedIncrement(piVar13 + 1);
      }
      (**(code **)(*(int *)piVar6[1] + 0x54))(*piVar6);
      *unaff_FS_OFFSET = iVar5;
      return piVar6;
    }
    if (puVar12 == &DAT_00b3f684) {
      bVar3 = 1;
      goto LAB_007cc185;
    }
    puVar12 = (undefined4 *)puVar12[1];
  } while( true );
}



void FUN_007cc280(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce9ac;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = (int *)(in_ECX + 0x30);
  if (*piVar1 == 0) {
    iVar4 = FUN_00401f00(0x34,uVar3);
    local_4 = 0;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_009a8490(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar5);
    (**(code **)(*(int *)*piVar1 + 0x1c))("WorldViewProjTranspose",0x20000009,0,&DAT_00a2f7ec);
    (**(code **)(*(int *)*piVar1 + 0x1c))("SkinWorldViewProjTranspose",0x20000009,1,&DAT_00a2f7ec);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("ShadowProj",0x10000009,0,0x1c,4,&DAT_00a2f7ec,0x40,4,&DAT_00b45560,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("SkinWorldTranspose",0x10000009,0,9,4,&DAT_00a2f7ec,0x40,4,&DAT_00b44f98,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("WorldTranspose",0x10000009,0,8,4,&DAT_00a2f7ec,0x40,4,&DAT_00b45498,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("ShadowProjData",0x10000007,0,0x20,1,&DAT_00a2f7ec,0x10,4,&DAT_00b44ee8,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("ShadowProjTransform",0x10000007,0,0x21,1,&DAT_00a2f7ec,0x10,4,&DAT_00b44ef8,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("HighDetailRange",0x10000007,0,0xc,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46698,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("DirectronalLightDir0",0x10000007,0,0xd,1,&DAT_00a2f7ec,0x10,4,&DAT_00b454d8,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("DirectronalLightDir1",0x10000007,0,0xe,1,&DAT_00a2f7ec,0x10,4,&DAT_00b454e8,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("PointLightPos0",0x10000007,0,0x10,1,&DAT_00a2f7ec,0x10,4,&DAT_00b44fd8,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("PointLightPos1",0x10000007,0,0x11,1,&DAT_00a2f7ec,0x10,4,&DAT_00b44fe8,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("PointLightPos2",0x10000007,0,0x12,1,&DAT_00a2f7ec,0x10,4,&DAT_00b44ff8,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("DiffuseColor0",0x10000007,0,0x13,1,&DAT_00a2f7ec,0x10,4,&DAT_00b464a8,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("DiffuseColor1",0x10000007,0,0x14,1,&DAT_00a2f7ec,0x10,4,&DAT_00b464b8,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("DiffuseColor2",0x10000007,0,0x15,1,&DAT_00a2f7ec,0x10,4,&DAT_00b464c8,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("FogParam | ShadowVolumeFatness",0x10000007,0,0x17,1,&DAT_00a2f7ec,0x10,4,
               &DAT_00b46638,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("FogColor | ShadowVolumeExtrudeDistance",0x10000007,0,0x18,1,&DAT_00a2f7ec,0x10,4,
               &DAT_00b46648,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("EyePosition",0x10000007,0,0x19,1,&DAT_00a2f7ec,0x10,4,&DAT_00b44f08,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("BoundCenter",0x10000007,0,0x2e,1,&DAT_00a2f7ec,0x10,4,&DAT_00b44f28,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("LODLandFlags",0x10000007,0,0x2f,1,&DAT_00a2f7ec,0x10,4,&DAT_00b466b8,0);
    (**(code **)(*(int *)*piVar1 + 0x18))("BoneMatrix3",0x20000009,0x120000,0x2a,0x36,0,0,0,0,0);
    (**(code **)(*(int *)*piVar1 + 0x1c))("WorldViewTranspose",0x20000009,4,&DAT_00a2f7ec);
    (**(code **)(*(int *)*piVar1 + 0x1c))("SkinWorldViewTranspose",0x20000009,5,&DAT_00a2f7ec);
    iVar4 = 1;
    (**(code **)(*(int *)*piVar1 + 0x18))
              (&DAT_00a7aa78,0x10000004,0,0x16,1,&DAT_00a2f7ec,4,4,&DAT_00b44ee0,0);
    puVar6 = (undefined4 *)(**(code **)(*(int *)*piVar1 + 0x38))("WorldViewProjTranspose");
    puVar2 = DAT_00b45018;
    if (DAT_00b45018 != puVar6) {
      if (((DAT_00b45018 != (undefined4 *)0x0) &&
          (in_ECX = iVar4, LVar7 = InterlockedDecrement(DAT_00b45018 + 1), LVar7 == 0)) &&
         (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_00b45018 = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar6 + 1);
      }
    }
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("WorldTranspose");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("SkinWorldTranspose");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("SkinWorldViewProjTranspose");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("ShadowProj");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("ShadowProjData");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("ShadowProjTransform");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("HighDetailRange");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("DirectronalLightDir0");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("DirectronalLightDir1");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("DirectronalLightDir2");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("DirectronalLightDir3");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("PointLightPos0");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("PointLightPos1");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("PointLightPos2");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("PointLightPos3");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("FogParam | ShadowVolumeFatness");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("FogColor | ShadowVolumeExtrudeDistance");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("EyePosition");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("BoneMatrix3");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("WorldViewTranspose");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("SkinWorldViewTranspose");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))(&DAT_00a7aa78);
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("BoundCenter");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("LODLandFlags");
    FUN_0075fa90(uVar5);
    if (1 < DAT_00b42f48) {
      (**(code **)(*(int *)*piVar1 + 0x18))
                ("DecalCount",0x10000007,0,0x1e,1,&DAT_00a2f7ec,0x10,4,&DAT_00b4615c,0);
      uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("DecalCount");
      FUN_0075fa90(uVar5);
      (**(code **)(*(int *)*piVar1 + 0x18))
                ("decal fade",0x10000009,0,0x1f,8,&DAT_00a2f7ec,0x80,4,&DAT_00b46218,0);
      uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("decal fade");
      FUN_0075fa90(uVar5);
      (**(code **)(*(int *)*piVar1 + 0x18))
                ("decal proj",0x10000009,0,0x28,0x20,&DAT_00a2f7ec,0x200,4,&DAT_00b46298,0);
      uVar5 = (**(code **)(*(int *)*piVar1 + 0x38))("decal proj");
      FUN_0075fa90(uVar5);
    }
    FUN_0055e2a0(piVar1);
  }
  puVar2 = (undefined4 *)(in_ECX + 0x2c);
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar4 = FUN_00401f00(0x34,uVar3);
    local_4 = 1;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_009a4750(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar5);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("eye dir",0x10000007,0,0,1,&DAT_00a2f7ec,0x10,4,&DAT_00b44f18,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("Ambient Color",0x10000007,0,1,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46498,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("Light Color 0",0x10000007,0,2,1,&DAT_00a2f7ec,0x10,4,&DAT_00b464a8,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("Light Color 1",0x10000007,0,3,1,&DAT_00a2f7ec,0x10,4,&DAT_00b464b8,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("Light Color 2",0x10000007,0,4,1,&DAT_00a2f7ec,0x10,4,&DAT_00b464c8,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("Light Color 3",0x10000007,0,5,1,&DAT_00a2f7ec,0x10,4,&DAT_00b464d8,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("Emittance Color",0x10000007,0,6,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46628,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("Toggles",0x10000007,0,7,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46688,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("HairTint",0x10000007,0,0x18,1,&DAT_00a2f7ec,0x10,4,&DAT_00b4616c,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("STBBColorConstants",0x10000007,0,0x1a,1,&DAT_00a2f7ec,0x10,4,&DAT_00b466a8,0);
    iVar4 = 0x19;
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("RefractionPower",0x10000004,0,0x19,1,&DAT_00a2f7ec,4,4,&DAT_00b44edc,0);
    uVar5 = (**(code **)(*(int *)*puVar2 + 0x38))("HairTint");
    FUN_0075fa90(uVar5);
    puVar8 = (undefined4 *)(**(code **)(*(int *)*puVar2 + 0x38))("eye dir");
    puVar6 = DAT_00b45518;
    if (DAT_00b45518 != puVar8) {
      if (((DAT_00b45518 != (undefined4 *)0x0) &&
          (in_ECX = iVar4, LVar7 = InterlockedDecrement(DAT_00b45518 + 1), LVar7 == 0)) &&
         (puVar6 != (undefined4 *)0x0)) {
        (**(code **)*puVar6)(1);
      }
      DAT_00b45518 = puVar8;
      if (puVar8 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar8 + 1);
      }
    }
    uVar5 = (**(code **)(*(int *)*puVar2 + 0x38))("Ambient Color");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*puVar2 + 0x38))("Light Color 0");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*puVar2 + 0x38))("Light Color 1");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*puVar2 + 0x38))("Light Color 2");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*puVar2 + 0x38))("Light Color 3");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*puVar2 + 0x38))("Emittance Color");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*puVar2 + 0x38))("Toggles");
    FUN_0075fa90(uVar5);
    uVar5 = (**(code **)(*(int *)*puVar2 + 0x38))("RefractionPower");
    FUN_0075fa90(uVar5);
    if (1 < DAT_00b42f48) {
      (**(code **)(*(int *)*puVar2 + 0x18))
                ("DecalCount",0x10000007,0,0xe,1,&DAT_00a2f7ec,0x10,4,&DAT_00b4615c,0);
      uVar5 = (**(code **)(*(int *)*puVar2 + 0x38))("DecalCount");
      FUN_0075fa90(uVar5);
      (**(code **)(*(int *)*puVar2 + 0x18))
                ("decal offset",0x10000009,0,0xf,8,&DAT_00a2f7ec,0x80,4,&DAT_00b46198,0);
      uVar5 = (**(code **)(*(int *)*puVar2 + 0x38))("decal offset");
      FUN_0075fa90(uVar5);
    }
    FUN_0055e2a0(puVar2);
  }
  puVar2 = (undefined4 *)(in_ECX + 0x90);
  if (*(int *)(in_ECX + 0x90) == 0) {
    iVar4 = FUN_00401f00(0x34,uVar3);
    local_4 = 2;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_009a8490(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar5);
    (**(code **)(*(int *)*puVar2 + 0x1c))("WorldViewProjTranspose",0x20000009,0,&DAT_00a2f7ec);
    (**(code **)(*(int *)*puVar2 + 0x1c))("SkinWorldViewProjTranspose",0x20000009,4,&DAT_00a2f7ec);
    (**(code **)(*(int *)*puVar2 + 0x18))("BoneMatrix3",0x20000009,0x120000,0xe,0x36,0,0,0,0,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("EyePosition",0x10000007,0,8,1,&DAT_00a2f7ec,0x10,4,&DAT_00b44f08,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("U Offset",0x10000004,0,9,1,&DAT_00a2f7ec,4,4,&DAT_00b44ed0,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("V Offset",0x10000004,0,10,1,&DAT_00a2f7ec,4,4,&DAT_00b44ed4,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("Z scaler",0x10000004,0,0xb,1,&DAT_00a2f7ec,4,4,&DAT_00b44ed8,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("FogParam",0x10000007,0,0xc,1,&DAT_00a2f7ec,0x10,4,&DAT_00b44f78,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("FogColor",0x10000007,0,0xd,1,&DAT_00a2f7ec,0x10,4,&DAT_00b44f68,0);
  }
  puVar2 = (undefined4 *)(in_ECX + 0x8c);
  if (*(int *)(in_ECX + 0x8c) == 0) {
    iVar4 = FUN_00401f00(0x34,uVar3);
    local_4 = 3;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_009a4750(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar5);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("Fill Color",0x10000007,0,0,1,&DAT_00a2f7ec,0x10,4,&DAT_00b44f38,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("Rim Color",0x10000007,0,1,1,&DAT_00a2f7ec,0x10,4,&DAT_00b44f48,0);
    (**(code **)(*(int *)*puVar2 + 0x18))
              ("fVars",0x10000007,0,2,1,&DAT_00a2f7ec,0x10,4,&DAT_00b44f58,0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007cd090(void)

{
  char **ppcVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *puVar4;
  char **ppcVar5;
  int iVar6;
  char **local_2868 [2];
  char *local_2860;
  undefined4 local_285c;
  undefined1 local_2858 [68];
  char *local_2814;
  char *local_2810;
  undefined1 *local_280c;
  char *local_2808;
  undefined1 *local_2804;
  undefined4 local_2800;
  undefined1 local_27fc [52];
  char *local_27c8;
  undefined *local_27c4;
  undefined1 *local_27c0;
  undefined4 local_27bc;
  undefined1 local_27b8 [60];
  char *local_277c;
  char *local_2778;
  undefined1 *local_2774;
  undefined4 local_2770;
  undefined1 local_276c [60];
  char *local_2730;
  char *local_272c;
  undefined1 *local_2728;
  char *local_2724;
  undefined1 *local_2720;
  char *local_271c;
  undefined1 *local_2718;
  undefined4 local_2714;
  undefined1 local_2710 [44];
  char *local_26e4;
  undefined *local_26e0;
  undefined1 *local_26dc;
  char *local_26d8;
  undefined1 *local_26d4;
  undefined4 local_26d0;
  undefined1 local_26cc [52];
  char *local_2698;
  undefined *local_2694;
  undefined1 *local_2690;
  undefined4 local_268c;
  undefined1 local_2688 [60];
  char *local_264c;
  char *local_2648;
  undefined *local_2644;
  undefined4 local_2640;
  undefined1 local_263c [60];
  char *local_2600;
  char *local_25fc;
  undefined *local_25f8;
  undefined *local_25f4;
  undefined1 *local_25f0;
  undefined4 local_25ec;
  undefined1 local_25e8 [52];
  char *local_25b4;
  char *local_25b0;
  undefined *local_25ac;
  char *local_25a8;
  undefined1 *local_25a4;
  undefined4 local_25a0;
  undefined1 local_259c [52];
  char *local_2568;
  char *local_2564;
  undefined *local_2560;
  undefined *local_255c;
  undefined1 *local_2558;
  char *local_2554;
  undefined1 *local_2550;
  undefined4 local_254c;
  undefined1 local_2548 [44];
  char *local_251c;
  char *local_2518;
  undefined1 *local_2514;
  undefined4 local_2510;
  undefined1 local_250c [60];
  char *local_24d0;
  char *local_24cc;
  undefined1 *local_24c8;
  undefined *local_24c4;
  undefined1 *local_24c0;
  undefined4 local_24bc;
  undefined1 local_24b8 [52];
  char *local_2484;
  char *local_2480;
  undefined1 *local_247c;
  char *local_2478;
  undefined1 *local_2474;
  undefined4 local_2470;
  undefined1 local_246c [52];
  char *local_2438;
  char *local_2434;
  undefined1 *local_2430;
  undefined *local_242c;
  undefined1 *local_2428;
  char *local_2424;
  undefined1 *local_2420;
  undefined4 local_241c;
  undefined1 local_2418 [44];
  char *local_23ec;
  char *local_23e8;
  undefined1 *local_23e4;
  char *local_23e0;
  undefined *local_23dc;
  undefined4 local_23d8;
  undefined1 local_23d4 [52];
  char *local_23a0;
  char *local_239c;
  undefined1 *local_2398;
  char *local_2394;
  undefined *local_2390;
  undefined *local_238c;
  undefined1 *local_2388;
  undefined4 local_2384;
  undefined1 local_2380 [44];
  char *local_2354;
  char *local_2350;
  undefined1 *local_234c;
  char *local_2348;
  undefined *local_2344;
  char *local_2340;
  undefined1 *local_233c;
  undefined4 local_2338;
  undefined1 local_2334 [44];
  char *local_2308;
  char *local_2304;
  undefined1 *local_2300;
  char *local_22fc;
  undefined *local_22f8;
  undefined *local_22f4;
  undefined1 *local_22f0;
  char *local_22ec;
  undefined1 *local_22e8;
  undefined4 local_22e4;
  undefined4 local_22e0;
  undefined4 local_22dc;
  undefined4 local_22d8;
  undefined4 local_22d4;
  undefined4 local_22d0;
  undefined4 local_22cc;
  undefined4 local_22c8;
  undefined4 local_22c4;
  undefined4 local_22c0;
  char *local_22bc;
  char *local_22b8;
  undefined *local_22b4;
  undefined4 local_22b0;
  undefined1 local_22ac [60];
  char *local_2270;
  char *local_226c;
  undefined *local_2268;
  undefined *local_2264;
  undefined1 *local_2260;
  undefined4 local_225c;
  undefined1 local_2258 [52];
  char *local_2224;
  char *local_2220;
  undefined *local_221c;
  char *local_2218;
  undefined1 *local_2214;
  undefined4 local_2210;
  undefined1 local_220c [52];
  char *local_21d8;
  char *local_21d4;
  undefined *local_21d0;
  undefined *local_21cc;
  undefined1 *local_21c8;
  char *local_21c4;
  undefined1 *local_21c0;
  undefined4 local_21bc;
  undefined1 local_21b8 [44];
  char *local_218c;
  char *local_2188;
  undefined *local_2184;
  undefined4 local_2180;
  undefined1 local_217c [60];
  char *local_2140;
  char *local_213c;
  undefined *local_2138;
  undefined *local_2134;
  undefined1 *local_2130;
  undefined4 local_212c;
  undefined1 local_2128 [52];
  char *local_20f4;
  char *local_20f0;
  undefined *local_20ec;
  char *local_20e8;
  undefined1 *local_20e4;
  undefined4 local_20e0;
  undefined1 local_20dc [52];
  char *local_20a8;
  char *local_20a4;
  undefined *local_20a0;
  undefined *local_209c;
  undefined1 *local_2098;
  char *local_2094;
  undefined1 *local_2090;
  undefined4 local_208c;
  undefined1 local_2088 [44];
  char *local_205c;
  char *local_2058;
  undefined *local_2054;
  undefined4 local_2050;
  undefined1 local_204c [60];
  char *local_2010;
  char *local_200c;
  undefined *local_2008;
  undefined *local_2004;
  undefined1 *local_2000;
  undefined4 local_1ffc;
  undefined1 local_1ff8 [52];
  char *local_1fc4;
  char *local_1fc0;
  undefined *local_1fbc;
  undefined4 local_1fb8;
  undefined1 local_1fb4 [60];
  char *local_1f78;
  char *local_1f74;
  undefined *local_1f70;
  undefined *local_1f6c;
  undefined1 *local_1f68;
  undefined4 local_1f64;
  undefined1 local_1f60 [52];
  char *local_1f2c;
  undefined4 local_1f28;
  undefined1 local_1f24 [68];
  char *local_1ee0;
  undefined *local_1edc;
  undefined1 *local_1ed8;
  undefined4 local_1ed4;
  undefined1 local_1ed0 [60];
  char *local_1e94;
  char *local_1e90;
  undefined1 *local_1e8c;
  undefined4 local_1e88;
  undefined1 local_1e84 [60];
  char *local_1e48;
  undefined *local_1e44;
  undefined1 *local_1e40;
  char *local_1e3c;
  undefined1 *local_1e38;
  undefined4 local_1e34;
  undefined1 local_1e30 [52];
  char *local_1dfc;
  char *local_1df8;
  undefined1 *local_1df4;
  undefined4 local_1df0;
  undefined1 local_1dec [60];
  char *local_1db0;
  undefined *local_1dac;
  undefined1 *local_1da8;
  char *local_1da4;
  undefined1 *local_1da0;
  undefined4 local_1d9c;
  undefined1 local_1d98 [52];
  char *local_1d64;
  char *local_1d60;
  undefined1 *local_1d5c;
  undefined4 local_1d58;
  undefined1 local_1d54 [60];
  char *local_1d18;
  undefined *local_1d14;
  undefined1 *local_1d10;
  char *local_1d0c;
  undefined1 *local_1d08;
  undefined4 local_1d04;
  undefined1 local_1d00 [52];
  char *local_1ccc;
  char *local_1cc8;
  undefined1 *local_1cc4;
  undefined *local_1cc0;
  undefined4 local_1cbc;
  undefined4 local_1cb8;
  undefined1 local_1cb4 [52];
  char *local_1c80;
  char *local_1c7c;
  undefined1 *local_1c78;
  char *local_1c74;
  char *local_1c70;
  undefined4 local_1c6c;
  undefined1 local_1c68 [52];
  char *local_1c34;
  char *local_1c30;
  undefined1 *local_1c2c;
  char *local_1c28;
  undefined1 *local_1c24;
  char *local_1c20;
  char *local_1c1c;
  undefined4 local_1c18;
  undefined1 local_1c14 [44];
  char *local_1be8;
  char *local_1be4;
  undefined1 *local_1be0;
  undefined4 local_1bdc;
  undefined1 local_1bd8 [60];
  char *local_1b9c;
  char *local_1b98;
  undefined1 *local_1b94;
  char *local_1b90;
  undefined1 *local_1b8c;
  undefined4 local_1b88;
  undefined1 local_1b84 [52];
  char *local_1b50;
  undefined *local_1b4c;
  undefined1 *local_1b48;
  char *local_1b44;
  undefined1 *local_1b40;
  undefined4 local_1b3c;
  undefined1 local_1b38 [52];
  char *local_1b04;
  char *local_1b00;
  undefined1 *local_1afc;
  undefined4 local_1af8;
  undefined1 local_1af4 [60];
  undefined4 local_1ab8;
  undefined1 local_1ab4 [72];
  char *local_1a6c;
  char *local_1a68;
  undefined1 *local_1a64;
  undefined *local_1a60;
  undefined1 *local_1a5c;
  char *local_1a58;
  undefined1 *local_1a54;
  undefined4 local_1a50;
  undefined1 local_1a4c [44];
  char *local_1a20;
  char *local_1a1c;
  undefined1 *local_1a18;
  char *local_1a14;
  undefined1 *local_1a10;
  undefined4 local_1a0c;
  undefined1 local_1a08 [52];
  undefined4 local_19d4;
  undefined1 local_19d0 [72];
  char *local_1988;
  char *local_1984;
  undefined1 *local_1980;
  char *local_197c;
  undefined1 *local_1978;
  undefined4 local_1974;
  undefined1 local_1970 [52];
  char *local_193c;
  char *local_1938;
  undefined1 *local_1934;
  char *local_1930;
  undefined1 *local_192c;
  char *local_1928;
  undefined1 *local_1924;
  undefined4 local_1920;
  undefined1 local_191c [44];
  char *local_18f0;
  char *local_18ec;
  undefined1 *local_18e8;
  undefined4 local_18e4;
  undefined1 local_18e0 [60];
  char *local_18a4;
  char *local_18a0;
  undefined1 *local_189c;
  char *local_1898;
  undefined1 *local_1894;
  undefined4 local_1890;
  undefined1 local_188c [52];
  char *local_1858;
  char *local_1854;
  undefined1 *local_1850;
  undefined *local_184c;
  undefined1 *local_1848;
  undefined4 local_1844;
  undefined1 local_1840 [52];
  char *local_180c;
  char *local_1808;
  undefined1 *local_1804;
  undefined *local_1800;
  undefined1 *local_17fc;
  char *local_17f8;
  undefined1 *local_17f4;
  undefined4 local_17f0;
  undefined1 local_17ec [44];
  char *local_17c0;
  char *local_17bc;
  undefined1 *local_17b8;
  char *local_17b4;
  undefined1 *local_17b0;
  undefined4 local_17ac;
  undefined1 local_17a8 [52];
  char *local_1774;
  undefined4 local_1770;
  undefined1 local_176c [68];
  char *local_1728;
  undefined *local_1724;
  undefined1 *local_1720;
  undefined4 local_171c;
  undefined1 local_1718 [60];
  char *local_16dc;
  undefined *local_16d8;
  undefined1 *local_16d4;
  undefined4 local_16d0;
  undefined1 local_16cc [60];
  char *local_1690;
  char *local_168c;
  undefined1 *local_1688;
  undefined4 local_1684;
  undefined1 local_1680 [60];
  char *local_1644;
  char *local_1640;
  undefined1 *local_163c;
  undefined *local_1638;
  undefined1 *local_1634;
  undefined4 local_1630;
  undefined1 local_162c [52];
  char *local_15f8;
  undefined4 local_15f4;
  undefined1 local_15f0 [68];
  char *local_15ac;
  char *local_15a8;
  undefined1 *local_15a4;
  undefined4 local_15a0;
  undefined1 local_159c [60];
  char *local_1560;
  char *local_155c;
  undefined1 *local_1558;
  char *local_1554;
  undefined1 *local_1550;
  undefined4 local_154c;
  undefined1 local_1548 [52];
  char *local_1514;
  char *local_1510;
  undefined1 *local_150c;
  undefined *local_1508;
  undefined1 *local_1504;
  undefined4 local_1500;
  undefined1 local_14fc [52];
  char *local_14c8;
  char *local_14c4;
  undefined1 *local_14c0;
  undefined4 local_14bc;
  undefined1 local_14b8 [60];
  char *local_147c;
  char *local_1478;
  undefined1 *local_1474;
  char *local_1470;
  undefined1 *local_146c;
  undefined4 local_1468;
  undefined1 local_1464 [52];
  char *local_1430;
  undefined4 local_142c;
  undefined1 local_1428 [68];
  char *local_13e4;
  undefined *local_13e0;
  undefined1 *local_13dc;
  undefined4 local_13d8;
  undefined1 local_13d4 [60];
  char *local_1398;
  char *local_1394;
  undefined1 *local_1390;
  undefined4 local_138c;
  undefined1 local_1388 [60];
  char *local_134c;
  undefined4 local_1348;
  undefined1 local_1344 [68];
  char *local_1300;
  undefined *local_12fc;
  undefined1 *local_12f8;
  undefined4 local_12f4;
  undefined1 local_12f0 [60];
  char *local_12b4;
  char *local_12b0;
  undefined1 *local_12ac;
  undefined4 local_12a8;
  undefined1 local_12a4 [60];
  char *local_1268;
  char *local_1264;
  undefined1 *local_1260;
  undefined *local_125c;
  undefined1 *local_1258;
  undefined4 local_1254;
  undefined1 local_1250 [52];
  char *local_121c;
  char *local_1218;
  undefined1 *local_1214;
  undefined *local_1210;
  undefined1 *local_120c;
  undefined *local_1208;
  undefined1 *local_1204;
  undefined4 local_1200;
  undefined1 local_11fc [44];
  char *local_11d0;
  undefined *local_11cc;
  undefined1 *local_11c8;
  undefined4 local_11c4;
  undefined1 local_11c0 [60];
  char *local_1184;
  undefined *local_1180;
  undefined1 *local_117c;
  undefined *local_1178;
  undefined1 *local_1174;
  undefined4 local_1170;
  undefined1 local_116c [52];
  char *local_1138;
  undefined *local_1134;
  undefined1 *local_1130;
  undefined *local_112c;
  undefined1 *local_1128;
  undefined *local_1124;
  undefined1 *local_1120;
  undefined4 local_111c;
  undefined1 local_1118 [44];
  char *local_10ec;
  undefined *local_10e8;
  undefined1 *local_10e4;
  undefined4 local_10e0;
  undefined1 local_10dc [60];
  char *local_10a0;
  undefined *local_109c;
  undefined1 *local_1098;
  undefined4 local_1094;
  undefined1 local_1090 [60];
  char *local_1054;
  undefined *local_1050;
  undefined1 *local_104c;
  undefined4 local_1048;
  undefined1 local_1044 [60];
  char *local_1008;
  undefined *local_1004;
  undefined1 *local_1000;
  undefined *local_ffc;
  undefined1 *local_ff8;
  undefined4 local_ff4;
  undefined1 local_ff0 [52];
  char *local_fbc;
  undefined *local_fb8;
  undefined1 *local_fb4;
  char *local_fb0;
  undefined1 *local_fac;
  undefined4 local_fa8;
  undefined1 local_fa4 [52];
  char *local_f70;
  undefined *local_f6c;
  undefined1 *local_f68;
  undefined4 local_f64;
  undefined1 local_f60 [60];
  char *local_f24;
  undefined *local_f20;
  undefined1 *local_f1c;
  undefined4 local_f18;
  undefined1 local_f14 [60];
  char *local_ed8;
  undefined *local_ed4;
  undefined1 *local_ed0;
  undefined4 local_ecc;
  undefined1 local_ec8 [60];
  char *local_e8c;
  undefined *local_e88;
  undefined1 *local_e84;
  undefined *local_e80;
  undefined1 *local_e7c;
  undefined4 local_e78;
  undefined1 local_e74 [52];
  char *local_e40;
  undefined *local_e3c;
  undefined1 *local_e38;
  undefined *local_e34;
  undefined1 *local_e30;
  undefined4 local_e2c;
  undefined1 local_e28 [52];
  char *local_df4;
  undefined *local_df0;
  undefined1 *local_dec;
  undefined *local_de8;
  undefined1 *local_de4;
  undefined *local_de0;
  undefined1 *local_ddc;
  undefined4 local_dd8;
  undefined1 local_dd4 [44];
  char *local_da8;
  undefined *local_da4;
  undefined1 *local_da0;
  char *local_d9c;
  undefined1 *local_d98;
  undefined4 local_d94;
  undefined1 local_d90 [52];
  char *local_d5c;
  undefined *local_d58;
  undefined1 *local_d54;
  char *local_d50;
  undefined1 *local_d4c;
  undefined *local_d48;
  undefined1 *local_d44;
  undefined4 local_d40;
  undefined1 local_d3c [44];
  char *local_d10;
  undefined *local_d0c;
  undefined1 *local_d08;
  undefined4 local_d04;
  undefined1 local_d00 [60];
  char *local_cc4;
  undefined *local_cc0;
  undefined1 *local_cbc;
  undefined4 local_cb8;
  undefined1 local_cb4 [60];
  undefined4 local_c78;
  undefined4 local_c74;
  undefined1 local_c70 [68];
  undefined4 local_c2c;
  undefined4 local_c28;
  undefined1 local_c24 [68];
  char *local_be0;
  undefined *local_bdc;
  undefined1 *local_bd8;
  undefined *local_bd4;
  undefined1 *local_bd0;
  undefined4 local_bcc;
  undefined1 local_bc8 [52];
  undefined4 local_b94;
  undefined4 local_b90;
  undefined1 local_b8c [68];
  char *local_b48;
  undefined4 local_b44;
  undefined1 local_b40 [68];
  undefined4 local_afc;
  undefined4 local_af8;
  undefined1 local_af4 [68];
  undefined4 local_ab0;
  undefined4 local_aac;
  undefined1 local_aa8 [68];
  char *local_a64;
  undefined4 local_a60;
  undefined1 local_a5c [68];
  char *local_a18;
  undefined4 local_a14;
  undefined1 local_a10 [68];
  char *local_9cc;
  undefined4 local_9c8;
  undefined1 local_9c4 [68];
  char *local_980;
  undefined *local_97c;
  undefined1 *local_978;
  undefined4 local_974;
  undefined1 local_970 [60];
  char *local_934;
  char *local_930;
  undefined1 *local_92c;
  undefined4 local_928;
  undefined1 local_924 [60];
  char *local_8e8;
  undefined4 local_8e4;
  undefined1 local_8e0 [68];
  char *local_89c;
  undefined4 local_898;
  undefined1 local_894 [68];
  char *local_850;
  undefined4 local_84c;
  undefined1 local_848 [68];
  char *local_804;
  undefined *local_800;
  undefined1 *local_7fc;
  undefined4 local_7f8;
  undefined1 local_7f4 [60];
  char *local_7b8;
  undefined *local_7b4;
  undefined1 *local_7b0;
  undefined4 local_7ac;
  undefined1 local_7a8 [60];
  char *local_76c;
  undefined *local_768;
  undefined1 *local_764;
  undefined *local_760;
  undefined1 *local_75c;
  undefined4 local_758;
  undefined1 local_754 [52];
  char *local_720;
  char *local_71c;
  undefined1 *local_718;
  undefined4 local_714;
  undefined1 local_710 [60];
  char *local_6d4;
  char *local_6d0;
  undefined1 *local_6cc;
  undefined *local_6c8;
  undefined1 *local_6c4;
  undefined4 local_6c0;
  undefined1 local_6bc [52];
  char *local_688;
  undefined4 local_684;
  undefined1 local_680 [68];
  char *local_63c;
  undefined *local_638;
  undefined1 *local_634;
  undefined4 local_630;
  undefined1 local_62c [60];
  char *local_5f0;
  undefined *local_5ec;
  undefined1 *local_5e8;
  undefined *local_5e4;
  undefined1 *local_5e0;
  undefined4 local_5dc;
  undefined1 local_5d8 [52];
  char *local_5a4;
  undefined4 local_5a0;
  undefined1 local_59c [68];
  char *local_558;
  undefined4 local_554;
  undefined1 local_550 [68];
  char *local_50c;
  undefined *local_508;
  undefined1 *local_504;
  undefined4 local_500;
  undefined1 local_4fc [60];
  char *local_4c0;
  undefined4 local_4bc;
  undefined1 local_4b8 [68];
  char *local_474;
  undefined *local_470;
  undefined1 *local_46c;
  undefined4 local_468;
  undefined1 local_464 [60];
  char *local_428;
  undefined *local_424;
  undefined1 *local_420;
  undefined4 local_41c;
  undefined1 local_418 [60];
  char *local_3dc;
  undefined4 local_3d8;
  undefined1 local_3d4 [68];
  char *local_390;
  char *local_38c;
  undefined1 *local_388;
  undefined4 local_384;
  undefined1 local_380 [60];
  char *local_344;
  char *local_340;
  undefined1 *local_33c;
  undefined *local_338;
  undefined1 *local_334;
  undefined4 local_330;
  undefined1 local_32c [52];
  char *local_2f8;
  char *local_2f4;
  undefined1 *local_2f0;
  undefined4 local_2ec;
  undefined1 local_2e8 [60];
  char *local_2ac;
  char *local_2a8;
  undefined1 *local_2a4;
  char *local_2a0;
  undefined1 *local_29c;
  undefined4 local_298;
  undefined1 local_294 [52];
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 local_258 [68];
  char local_214 [8];
  char local_20c [260];
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_2868;
  __itoa(DAT_00b42e88,local_214,10);
  local_b48 = "lighting\\1x\\v\\base.v.hlsl";
  local_b44 = 0;
  _memset(local_b40,0,0x44);
  local_afc = 0;
  local_af8 = 0;
  _memset(local_af4,0,0x44);
  local_ab0 = 0;
  local_aac = 0;
  _memset(local_aa8,0,0x44);
  local_a64 = "lighting\\1x\\v\\diffusePt.v.hlsl";
  local_a60 = 0;
  _memset(local_a5c,0,0x44);
  local_a18 = "lighting\\1x\\v\\diffuseDir.v.hlsl";
  local_a14 = 0;
  _memset(local_a10,0,0x44);
  local_9cc = "lighting\\1x\\v\\base.v.hlsl";
  local_9c8 = 0;
  _memset(local_9c4,0,0x44);
  local_980 = "lighting\\1x\\v\\base.v.hlsl";
  local_97c = &DAT_00a90e0c;
  local_978 = &DAT_00a2f7ec;
  local_974 = 0;
  _memset(local_970,0,0x3c);
  local_934 = "lighting\\1x\\v\\base.v.hlsl";
  local_930 = "FACEGENBLEND";
  local_92c = &DAT_00a2f7ec;
  local_928 = 0;
  _memset(local_924,0,0x3c);
  local_8e8 = "lighting\\1x\\v\\specularPt.v.hlsl";
  local_8e4 = 0;
  _memset(local_8e0,0,0x44);
  local_89c = "lighting\\1x\\v\\specularDir.v.hlsl";
  local_898 = 0;
  _memset(local_894,0,0x44);
  local_850 = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  local_84c = 0;
  _memset(local_848,0,0x44);
  local_804 = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  local_800 = &DAT_00a90d88;
  local_7fc = &DAT_00a2f7ec;
  local_7f8 = 0;
  _memset(local_7f4,0,0x3c);
  local_7b8 = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  local_7b4 = &DAT_00a90e0c;
  local_7b0 = &DAT_00a2f7ec;
  local_7ac = 0;
  _memset(local_7a8,0,0x3c);
  local_76c = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  local_768 = &DAT_00a90d88;
  local_764 = &DAT_00a2f7ec;
  local_760 = &DAT_00a90e0c;
  local_75c = &DAT_00a2f7ec;
  local_758 = 0;
  _memset(local_754,0,0x34);
  local_720 = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  local_71c = "FACEGENBLEND";
  local_718 = &DAT_00a2f7ec;
  local_714 = 0;
  _memset(local_710,0,0x3c);
  local_6d4 = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  local_6d0 = "FACEGENBLEND";
  local_6cc = &DAT_00a2f7ec;
  local_6c8 = &DAT_00a90d88;
  local_6c4 = &DAT_00a2f7ec;
  local_6c0 = 0;
  _memset(local_6bc,0,0x34);
  local_688 = "lighting\\1x\\v\\ambDiffuseDirAndPt.v.hlsl";
  local_684 = 0;
  _memset(local_680,0,0x44);
  local_63c = "lighting\\1x\\v\\base.v.hlsl";
  local_638 = &DAT_00a90d88;
  local_634 = &DAT_00a2f7ec;
  local_630 = 0;
  _memset(local_62c,0,0x3c);
  local_5f0 = "lighting\\1x\\v\\base.v.hlsl";
  local_5ec = &DAT_00a90d88;
  local_5e8 = &DAT_00a2f7ec;
  local_5e4 = &DAT_00a8f8c4;
  local_5e0 = &DAT_00a2f7ec;
  local_5dc = 0;
  _memset(local_5d8,0,0x34);
  local_5a4 = "lighting\\1x\\v\\envmap.v.hlsl";
  local_5a0 = 0;
  _memset(local_59c,0,0x44);
  local_558 = "lighting\\1x\\v\\vertDir.v.hlsl";
  local_554 = 0;
  _memset(local_550,0,0x44);
  local_50c = "lighting\\1x\\v\\vertDir.v.hlsl";
  local_508 = &DAT_00a90e0c;
  local_504 = &DAT_00a2f7ec;
  local_500 = 0;
  _memset(local_4fc,0,0x3c);
  local_4c0 = "lighting\\1x\\v\\vertDirAndPt.v.hlsl";
  local_4bc = 0;
  _memset(local_4b8,0,0x44);
  local_474 = "lighting\\1x\\v\\vertDirAndPt.v.hlsl";
  local_470 = &DAT_00a90e0c;
  local_46c = &DAT_00a2f7ec;
  local_468 = 0;
  _memset(local_464,0,0x3c);
  local_428 = "lighting\\1x\\v\\base.v.hlsl";
  local_424 = &DAT_00a8f7b8;
  local_420 = &DAT_00a2f7ec;
  local_41c = 0;
  _memset(local_418,0,0x3c);
  local_3dc = "lighting\\1x\\v\\land.v.hlsl";
  local_3d8 = 0;
  _memset(local_3d4,0,0x44);
  local_390 = "lighting\\1x\\v\\land.v.hlsl";
  local_38c = "LANDALPHA";
  local_388 = &DAT_00a2f7ec;
  local_384 = 0;
  _memset(local_380,0,0x3c);
  local_344 = "lighting\\1x\\v\\land.v.hlsl";
  local_340 = "LANDALPHA";
  local_33c = &DAT_00a2f7ec;
  local_338 = &DAT_00a8f7b8;
  local_334 = &DAT_00a2f7ec;
  local_330 = 0;
  _memset(local_32c,0,0x34);
  local_2f8 = "lighting\\1x\\v\\land.v.hlsl";
  local_2f4 = "PTLIGHT";
  local_2f0 = &DAT_00a2f7ec;
  local_2ec = 0;
  _memset(local_2e8,0,0x3c);
  local_2ac = "lighting\\1x\\v\\land.v.hlsl";
  local_2a8 = "LANDALPHA";
  local_2a4 = &DAT_00a2f7ec;
  local_2a0 = "PTLIGHT";
  local_29c = &DAT_00a2f7ec;
  local_298 = 0;
  _memset(local_294,0,0x34);
  local_260 = 0;
  local_25c = 0;
  _memset(local_258,0,0x44);
  local_11d0 = "lighting\\1x\\v\\base.v.hlsl";
  local_11cc = &DAT_00a90cc8;
  local_11c8 = &DAT_00a2f7ec;
  local_11c4 = 0;
  _memset(local_11c0,0,0x3c);
  local_1184 = "lighting\\1x\\v\\base.v.hlsl";
  local_1180 = &DAT_00a90cc8;
  local_117c = &DAT_00a2f7ec;
  local_1178 = &DAT_00a90d88;
  local_1174 = &DAT_00a2f7ec;
  local_1170 = 0;
  _memset(local_116c,0,0x34);
  local_1138 = "lighting\\1x\\v\\base.v.hlsl";
  local_1134 = &DAT_00a90cc8;
  local_1130 = &DAT_00a2f7ec;
  local_112c = &DAT_00a90d88;
  local_1128 = &DAT_00a2f7ec;
  local_1124 = &DAT_00a8f8c4;
  local_1120 = &DAT_00a2f7ec;
  local_111c = 0;
  _memset(local_1118,0,0x2c);
  local_10ec = "lighting\\1x\\v\\diffusePt.v.hlsl";
  local_10e8 = &DAT_00a90cc8;
  local_10e4 = &DAT_00a2f7ec;
  local_10e0 = 0;
  _memset(local_10dc,0,0x3c);
  local_10a0 = "lighting\\1x\\v\\diffuseDir.v.hlsl";
  local_109c = &DAT_00a90cc8;
  local_1098 = &DAT_00a2f7ec;
  local_1094 = 0;
  _memset(local_1090,0,0x3c);
  local_1054 = "lighting\\1x\\v\\base.v.hlsl";
  local_1050 = &DAT_00a90cc8;
  local_104c = &DAT_00a2f7ec;
  local_1048 = 0;
  _memset(local_1044,0,0x3c);
  local_1008 = "lighting\\1x\\v\\base.v.hlsl";
  local_1004 = &DAT_00a90cc8;
  local_1000 = &DAT_00a2f7ec;
  local_ffc = &DAT_00a90e0c;
  local_ff8 = &DAT_00a2f7ec;
  local_ff4 = 0;
  _memset(local_ff0,0,0x34);
  local_fbc = "lighting\\1x\\v\\base.v.hlsl";
  local_fb8 = &DAT_00a90cc8;
  local_fb4 = &DAT_00a2f7ec;
  local_fb0 = "FACEGENBLEND";
  local_fac = &DAT_00a2f7ec;
  local_fa8 = 0;
  _memset(local_fa4,0,0x34);
  local_f70 = "lighting\\1x\\v\\specularPt.v.hlsl";
  local_f6c = &DAT_00a90cc8;
  local_f68 = &DAT_00a2f7ec;
  local_f64 = 0;
  _memset(local_f60,0,0x3c);
  local_f24 = "lighting\\1x\\v\\specularDir.v.hlsl";
  local_f20 = &DAT_00a90cc8;
  local_f1c = &DAT_00a2f7ec;
  local_f18 = 0;
  _memset(local_f14,0,0x3c);
  local_ed8 = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  local_ed4 = &DAT_00a90cc8;
  local_ed0 = &DAT_00a2f7ec;
  local_ecc = 0;
  _memset(local_ec8,0,0x3c);
  local_e8c = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  local_e88 = &DAT_00a90cc8;
  local_e84 = &DAT_00a2f7ec;
  local_e80 = &DAT_00a90e0c;
  local_e7c = &DAT_00a2f7ec;
  local_e78 = 0;
  _memset(local_e74,0,0x34);
  local_e40 = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  local_e3c = &DAT_00a90cc8;
  local_e38 = &DAT_00a2f7ec;
  local_e34 = &DAT_00a90d88;
  local_e30 = &DAT_00a2f7ec;
  local_e2c = 0;
  _memset(local_e28,0,0x34);
  local_df4 = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  local_df0 = &DAT_00a90cc8;
  local_dec = &DAT_00a2f7ec;
  local_de8 = &DAT_00a90d88;
  local_de4 = &DAT_00a2f7ec;
  local_de0 = &DAT_00a90e0c;
  local_ddc = &DAT_00a2f7ec;
  local_dd8 = 0;
  _memset(local_dd4,0,0x2c);
  local_da8 = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  local_da4 = &DAT_00a90cc8;
  local_da0 = &DAT_00a2f7ec;
  local_d9c = "FACEGENBLEND";
  local_d98 = &DAT_00a2f7ec;
  local_d94 = 0;
  _memset(local_d90,0,0x34);
  local_d5c = "lighting\\1x\\v\\ambDiffuseDirTexture.v.hlsl";
  local_d58 = &DAT_00a90cc8;
  local_d54 = &DAT_00a2f7ec;
  local_d50 = "FACEGENBLEND";
  local_d4c = &DAT_00a2f7ec;
  local_d48 = &DAT_00a90d88;
  local_d44 = &DAT_00a2f7ec;
  local_d40 = 0;
  _memset(local_d3c,0,0x2c);
  local_d10 = "lighting\\1x\\v\\ambDiffuseDirAndPt.v.hlsl";
  local_d0c = &DAT_00a90cc8;
  local_d08 = &DAT_00a2f7ec;
  local_d04 = 0;
  _memset(local_d00,0,0x3c);
  local_cc4 = "lighting\\1x\\v\\envmap.v.hlsl";
  local_cc0 = &DAT_00a90cc8;
  local_cbc = &DAT_00a2f7ec;
  local_cb8 = 0;
  _memset(local_cb4,0,0x3c);
  local_c78 = 0;
  local_c74 = 0;
  _memset(local_c70,0,0x44);
  local_c2c = 0;
  local_c28 = 0;
  _memset(local_c24,0,0x44);
  local_be0 = "lighting\\1x\\v\\base.v.hlsl";
  local_bdc = &DAT_00a90cc8;
  local_bd8 = &DAT_00a2f7ec;
  local_bd4 = &DAT_00a8f7b8;
  local_bd0 = &DAT_00a2f7ec;
  local_bcc = 0;
  _memset(local_bc8,0,0x34);
  local_b94 = 0;
  local_b90 = 0;
  _memset(local_b8c,0,0x44);
  local_2860 = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_285c = 0;
  _memset(local_2858,0,0x44);
  local_2814 = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_2810 = "MODELSPACENORM";
  local_280c = &DAT_00a2f7ec;
  local_2808 = "LODLANDCLIP";
  local_2804 = &DAT_00a2f7ec;
  local_2800 = 0;
  _memset(local_27fc,0,0x34);
  local_27c8 = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_27c4 = &DAT_00a90cc8;
  local_27c0 = &DAT_00a2f7ec;
  local_27bc = 0;
  _memset(local_27b8,0,0x3c);
  local_277c = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_2778 = "PROJ_SHADOW";
  local_2774 = &DAT_00a2f7ec;
  local_2770 = 0;
  _memset(local_276c,0,0x3c);
  local_2730 = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_272c = "MODELSPACENORM";
  local_2728 = &DAT_00a2f7ec;
  local_2724 = "PROJ_SHADOW";
  local_2720 = &DAT_00a2f7ec;
  local_271c = "LODLANDCLIP";
  local_2718 = &DAT_00a2f7ec;
  local_2714 = 0;
  _memset(local_2710,0,0x2c);
  local_26e4 = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_26e0 = &DAT_00a90cc8;
  local_26dc = &DAT_00a2f7ec;
  local_26d8 = "PROJ_SHADOW";
  local_26d4 = &DAT_00a2f7ec;
  local_26d0 = 0;
  _memset(local_26cc,0,0x34);
  local_2698 = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_2694 = &DAT_00a451f0;
  local_2690 = &DAT_00a2f7ec;
  local_268c = 0;
  _memset(local_2688,0,0x3c);
  local_264c = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_2648 = "LIGHTS";
  local_2644 = &DAT_00a61fbc;
  local_2640 = 0;
  _memset(local_263c,0,0x3c);
  local_2600 = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_25fc = "LIGHTS";
  local_25f8 = &DAT_00a61fbc;
  local_25f4 = &DAT_00a90cc8;
  local_25f0 = &DAT_00a2f7ec;
  local_25ec = 0;
  _memset(local_25e8,0,0x34);
  local_25b4 = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_25b0 = "LIGHTS";
  local_25ac = &DAT_00a61fbc;
  local_25a8 = "PROJ_SHADOW";
  local_25a4 = &DAT_00a2f7ec;
  local_25a0 = 0;
  _memset(local_259c,0,0x34);
  local_2568 = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_2564 = "LIGHTS";
  local_2560 = &DAT_00a61fbc;
  local_255c = &DAT_00a90cc8;
  local_2558 = &DAT_00a2f7ec;
  local_2554 = "PROJ_SHADOW";
  local_2550 = &DAT_00a2f7ec;
  local_254c = 0;
  _memset(local_2548,0,0x2c);
  local_251c = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_2518 = "SPECULAR";
  local_2514 = &DAT_00a2f7ec;
  local_2510 = 0;
  _memset(local_250c,0,0x3c);
  local_24d0 = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_24cc = "SPECULAR";
  local_24c8 = &DAT_00a2f7ec;
  local_24c4 = &DAT_00a90cc8;
  local_24c0 = &DAT_00a2f7ec;
  local_24bc = 0;
  _memset(local_24b8,0,0x34);
  local_2484 = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_2480 = "SPECULAR";
  local_247c = &DAT_00a2f7ec;
  local_2478 = "PROJ_SHADOW";
  local_2474 = &DAT_00a2f7ec;
  local_2470 = 0;
  _memset(local_246c,0,0x34);
  local_2438 = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_2434 = "SPECULAR";
  local_2430 = &DAT_00a2f7ec;
  local_242c = &DAT_00a90cc8;
  local_2428 = &DAT_00a2f7ec;
  local_2424 = "PROJ_SHADOW";
  local_2420 = &DAT_00a2f7ec;
  local_241c = 0;
  _memset(local_2418,0,0x2c);
  local_23ec = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_23e8 = "SPECULAR";
  local_23e4 = &DAT_00a2f7ec;
  local_23e0 = "LIGHTS";
  local_23dc = &DAT_00a61fbc;
  local_23d8 = 0;
  _memset(local_23d4,0,0x34);
  local_23a0 = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_239c = "SPECULAR";
  local_2398 = &DAT_00a2f7ec;
  local_2394 = "LIGHTS";
  local_2390 = &DAT_00a61fbc;
  local_238c = &DAT_00a90cc8;
  local_2388 = &DAT_00a2f7ec;
  local_2384 = 0;
  _memset(local_2380,0,0x2c);
  local_2354 = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_2350 = "SPECULAR";
  local_234c = &DAT_00a2f7ec;
  local_2348 = "LIGHTS";
  local_2344 = &DAT_00a61fbc;
  local_2340 = "PROJ_SHADOW";
  local_233c = &DAT_00a2f7ec;
  local_2338 = 0;
  _memset(local_2334,0,0x2c);
  local_2308 = "lighting\\2x\\v\\ADTS.v.hlsl";
  local_2304 = "SPECULAR";
  local_2300 = &DAT_00a2f7ec;
  local_22fc = "LIGHTS";
  local_22f8 = &DAT_00a61fbc;
  local_22f4 = &DAT_00a90cc8;
  local_22f0 = &DAT_00a2f7ec;
  local_22ec = "PROJ_SHADOW";
  local_22e8 = &DAT_00a2f7ec;
  local_22e4 = 0;
  local_22e0 = 0;
  local_22dc = 0;
  local_22d8 = 0;
  local_22d4 = 0;
  local_22d0 = 0;
  local_22cc = 0;
  local_22c8 = 0;
  local_22c4 = 0;
  local_22c0 = 0;
  local_22bc = "lighting\\2x\\v\\AD.v.hlsl";
  local_22b8 = "LIGHTS";
  local_22b4 = &DAT_00a61fbc;
  local_22b0 = 0;
  _memset(local_22ac,0,0x3c);
  local_2270 = "lighting\\2x\\v\\AD.v.hlsl";
  local_226c = "LIGHTS";
  local_2268 = &DAT_00a61fbc;
  local_2264 = &DAT_00a90cc8;
  local_2260 = &DAT_00a2f7ec;
  local_225c = 0;
  _memset(local_2258,0,0x34);
  local_2224 = "lighting\\2x\\v\\AD.v.hlsl";
  local_2220 = "LIGHTS";
  local_221c = &DAT_00a61fbc;
  local_2218 = "PROJ_SHADOW";
  local_2214 = &DAT_00a2f7ec;
  local_2210 = 0;
  _memset(local_220c,0,0x34);
  local_21d8 = "lighting\\2x\\v\\AD.v.hlsl";
  local_21d4 = "LIGHTS";
  local_21d0 = &DAT_00a61fbc;
  local_21cc = &DAT_00a90cc8;
  local_21c8 = &DAT_00a2f7ec;
  local_21c4 = "PROJ_SHADOW";
  local_21c0 = &DAT_00a2f7ec;
  local_21bc = 0;
  _memset(local_21b8,0,0x2c);
  local_218c = "lighting\\2x\\v\\AD.v.hlsl";
  local_2188 = "LIGHTS";
  local_2184 = &DAT_00a61fb0;
  local_2180 = 0;
  _memset(local_217c,0,0x3c);
  local_2140 = "lighting\\2x\\v\\AD.v.hlsl";
  local_213c = "LIGHTS";
  local_2138 = &DAT_00a61fb0;
  local_2134 = &DAT_00a90cc8;
  local_2130 = &DAT_00a2f7ec;
  local_212c = 0;
  _memset(local_2128,0,0x34);
  local_20f4 = "lighting\\2x\\v\\AD.v.hlsl";
  local_20f0 = "LIGHTS";
  local_20ec = &DAT_00a61fb0;
  local_20e8 = "PROJ_SHADOW";
  local_20e4 = &DAT_00a2f7ec;
  local_20e0 = 0;
  _memset(local_20dc,0,0x34);
  local_20a8 = "lighting\\2x\\v\\AD.v.hlsl";
  local_20a4 = "LIGHTS";
  local_20a0 = &DAT_00a61fb0;
  local_209c = &DAT_00a90cc8;
  local_2098 = &DAT_00a2f7ec;
  local_2094 = "PROJ_SHADOW";
  local_2090 = &DAT_00a2f7ec;
  local_208c = 0;
  _memset(local_2088,0,0x2c);
  local_205c = "lighting\\2x\\v\\DiffusePt.v.hlsl";
  local_2058 = "LIGHTS";
  local_2054 = &DAT_00a61fbc;
  local_2050 = 0;
  _memset(local_204c,0,0x3c);
  local_2010 = "lighting\\2x\\v\\DiffusePt.v.hlsl";
  local_200c = "LIGHTS";
  local_2008 = &DAT_00a61fbc;
  local_2004 = &DAT_00a90cc8;
  local_2000 = &DAT_00a2f7ec;
  local_1ffc = 0;
  _memset(local_1ff8,0,0x34);
  local_1fc4 = "lighting\\2x\\v\\DiffusePt.v.hlsl";
  local_1fc0 = "LIGHTS";
  local_1fbc = &DAT_00a61fb0;
  local_1fb8 = 0;
  _memset(local_1fb4,0,0x3c);
  local_1f78 = "lighting\\2x\\v\\DiffusePt.v.hlsl";
  local_1f74 = "LIGHTS";
  local_1f70 = &DAT_00a61fb0;
  local_1f6c = &DAT_00a90cc8;
  local_1f68 = &DAT_00a2f7ec;
  local_1f64 = 0;
  _memset(local_1f60,0,0x34);
  local_1f2c = "lighting\\2x\\v\\Specular.v.hlsl";
  local_1f28 = 0;
  _memset(local_1f24,0,0x44);
  local_1ee0 = "lighting\\2x\\v\\Specular.v.hlsl";
  local_1edc = &DAT_00a90cc8;
  local_1ed8 = &DAT_00a2f7ec;
  local_1ed4 = 0;
  _memset(local_1ed0,0,0x3c);
  local_1e94 = "lighting\\2x\\v\\Specular.v.hlsl";
  local_1e90 = "PROJ_SHADOW";
  local_1e8c = &DAT_00a2f7ec;
  local_1e88 = 0;
  _memset(local_1e84,0,0x3c);
  local_1e48 = "lighting\\2x\\v\\Specular.v.hlsl";
  local_1e44 = &DAT_00a90cc8;
  local_1e40 = &DAT_00a2f7ec;
  local_1e3c = "PROJ_SHADOW";
  local_1e38 = &DAT_00a2f7ec;
  local_1e34 = 0;
  _memset(local_1e30,0,0x34);
  local_1dfc = "lighting\\2x\\v\\Specular.v.hlsl";
  local_1df8 = "POINT";
  local_1df4 = &DAT_00a2f7ec;
  local_1df0 = 0;
  _memset(local_1dec,0,0x3c);
  local_1db0 = "lighting\\2x\\v\\Specular.v.hlsl";
  local_1dac = &DAT_00a90cc8;
  local_1da8 = &DAT_00a2f7ec;
  local_1da4 = "POINT";
  local_1da0 = &DAT_00a2f7ec;
  local_1d9c = 0;
  _memset(local_1d98,0,0x34);
  local_1d64 = "lighting\\2x\\v\\EnvMap.v.hlsl";
  local_1d60 = "ENVMAP";
  local_1d5c = &DAT_00a2f7ec;
  local_1d58 = 0;
  _memset(local_1d54,0,0x3c);
  local_1d18 = "lighting\\2x\\v\\EnvMap.v.hlsl";
  local_1d14 = &DAT_00a90cc8;
  local_1d10 = &DAT_00a2f7ec;
  local_1d0c = "ENVMAP";
  local_1d08 = &DAT_00a2f7ec;
  local_1d04 = 0;
  _memset(local_1d00,0,0x34);
  local_1ccc = "lighting\\2x\\v\\EnvMap.v.hlsl";
  local_1cc8 = "ENVMAP";
  local_1cc4 = &DAT_00a2f7ec;
  local_1cc0 = &DAT_00a90be8;
  local_1cbc = 0;
  local_1cb8 = 0;
  _memset(local_1cb4,0,0x34);
  local_1c70 = local_214;
  local_1c80 = "lighting\\2x\\v\\decal.v.hlsl";
  local_1c7c = "DECAL";
  local_1c78 = &DAT_00a2f7ec;
  local_1c74 = "MAXDECALS";
  local_1c6c = 0;
  _memset(local_1c68,0,0x34);
  local_1c1c = local_214;
  local_1c34 = "lighting\\2x\\v\\decal.v.hlsl";
  local_1c30 = "DECAL";
  local_1c2c = &DAT_00a2f7ec;
  local_1c28 = "ALPHA";
  local_1c24 = &DAT_00a2f7ec;
  local_1c20 = "MAXDECALS";
  local_1c18 = 0;
  _memset(local_1c14,0,0x2c);
  local_1be8 = "lighting\\2x\\v\\land.v.hlsl";
  local_1be4 = "PROJ_SHADOW";
  local_1be0 = &DAT_00a2f7ec;
  local_1bdc = 0;
  _memset(local_1bd8,0,0x3c);
  local_1b9c = "lighting\\2x\\v\\land.v.hlsl";
  local_1b98 = "LANDALPHA";
  local_1b94 = &DAT_00a2f7ec;
  local_1b90 = "PROJ_SHADOW";
  local_1b8c = &DAT_00a2f7ec;
  local_1b88 = 0;
  _memset(local_1b84,0,0x34);
  local_1b50 = "lighting\\2x\\v\\landlighting.v.hlsl";
  local_1b4c = &DAT_00a7b010;
  local_1b48 = &DAT_00a2f7ec;
  local_1b44 = "PTLIGHT";
  local_1b40 = &DAT_00a2f7ec;
  local_1b3c = 0;
  _memset(local_1b38,0,0x34);
  local_1b04 = "lighting\\2x\\v\\landlighting.v.hlsl";
  local_1b00 = "SPECULAR";
  local_1afc = &DAT_00a2f7ec;
  local_1af8 = 0;
  _memset(local_1af4,0,0x3c);
  local_1ab8 = 0;
  _memset(local_1ab4,0,0x48);
  local_1a6c = "lighting\\2x\\v\\landlighting.v.hlsl";
  local_1a68 = "LANDALPHA";
  local_1a64 = &DAT_00a2f7ec;
  local_1a60 = &DAT_00a7b010;
  local_1a5c = &DAT_00a2f7ec;
  local_1a58 = "PTLIGHT";
  local_1a54 = &DAT_00a2f7ec;
  local_1a50 = 0;
  _memset(local_1a4c,0,0x2c);
  local_1a20 = "lighting\\2x\\v\\landlighting.v.hlsl";
  local_1a1c = "LANDALPHA";
  local_1a18 = &DAT_00a2f7ec;
  local_1a14 = "SPECULAR";
  local_1a10 = &DAT_00a2f7ec;
  local_1a0c = 0;
  _memset(local_1a08,0,0x34);
  local_19d4 = 0;
  _memset(local_19d0,0,0x48);
  local_1988 = "lighting\\2x\\v\\landlighting.v.hlsl";
  local_1984 = "SPECULAR";
  local_1980 = &DAT_00a2f7ec;
  local_197c = "PROJ_SHADOW";
  local_1978 = &DAT_00a2f7ec;
  local_1974 = 0;
  _memset(local_1970,0,0x34);
  local_193c = "lighting\\2x\\v\\landlighting.v.hlsl";
  local_1938 = "LANDALPHA";
  local_1934 = &DAT_00a2f7ec;
  local_1930 = "SPECULAR";
  local_192c = &DAT_00a2f7ec;
  local_1928 = "PROJ_SHADOW";
  local_1924 = &DAT_00a2f7ec;
  local_1920 = 0;
  _memset(local_191c,0,0x2c);
  local_18f0 = "lighting\\2x\\v\\depthmap.v.hlsl";
  local_18ec = "DEPTHMAP";
  local_18e8 = &DAT_00a2f7ec;
  local_18e4 = 0;
  _memset(local_18e0,0,0x3c);
  local_18a4 = "lighting\\2x\\v\\depthmap.v.hlsl";
  local_18a0 = "DEPTHMAP";
  local_189c = &DAT_00a2f7ec;
  local_1898 = "ALPHATEST";
  local_1894 = &DAT_00a2f7ec;
  local_1890 = 0;
  _memset(local_188c,0,0x34);
  local_1858 = "lighting\\2x\\v\\depthmap.v.hlsl";
  local_1854 = "DEPTHMAP";
  local_1850 = &DAT_00a2f7ec;
  local_184c = &DAT_00a90cc8;
  local_1848 = &DAT_00a2f7ec;
  local_1844 = 0;
  _memset(local_1840,0,0x34);
  local_180c = "lighting\\2x\\v\\depthmap.v.hlsl";
  local_1808 = "DEPTHMAP";
  local_1804 = &DAT_00a2f7ec;
  local_1800 = &DAT_00a90cc8;
  local_17fc = &DAT_00a2f7ec;
  local_17f8 = "ALPHATEST";
  local_17f4 = &DAT_00a2f7ec;
  local_17f0 = 0;
  _memset(local_17ec,0,0x2c);
  local_17c0 = "lighting\\2x\\v\\depthmap.v.hlsl";
  local_17bc = "DEPTHMAP";
  local_17b8 = &DAT_00a2f7ec;
  local_17b4 = "WATERDEPTH";
  local_17b0 = &DAT_00a2f7ec;
  local_17ac = 0;
  _memset(local_17a8,0,0x34);
  local_1774 = "lighting\\2x\\v\\renderNormals.v.hlsl";
  local_1770 = 0;
  _memset(local_176c,0,0x44);
  local_1728 = "lighting\\2x\\v\\renderNormals.v.hlsl";
  local_1724 = &DAT_00a90cc8;
  local_1720 = &DAT_00a2f7ec;
  local_171c = 0;
  _memset(local_1718,0,0x3c);
  local_16dc = "lighting\\2x\\v\\renderNormals.v.hlsl";
  local_16d8 = &DAT_00a90b00;
  local_16d4 = &DAT_00a2f7ec;
  local_16d0 = 0;
  _memset(local_16cc,0,0x3c);
  local_1690 = "lighting\\2x\\v\\renderNormals.v.hlsl";
  local_168c = "CLEAR";
  local_1688 = &DAT_00a2f7ec;
  local_1684 = 0;
  _memset(local_1680,0,0x3c);
  local_1644 = "lighting\\2x\\v\\renderNormals.v.hlsl";
  local_1640 = "CLEAR";
  local_163c = &DAT_00a2f7ec;
  local_1638 = &DAT_00a90cc8;
  local_1634 = &DAT_00a2f7ec;
  local_1630 = 0;
  _memset(local_162c,0,0x34);
  local_15f8 = "lighting\\2x\\v\\land.v.hlsl";
  local_15f4 = 0;
  _memset(local_15f0,0,0x44);
  local_15ac = "lighting\\2x\\v\\land.v.hlsl";
  local_15a8 = "LANDALPHA";
  local_15a4 = &DAT_00a2f7ec;
  local_15a0 = 0;
  _memset(local_159c,0,0x3c);
  local_1560 = "lighting\\2x\\v\\land.v.hlsl";
  local_155c = "LANDALPHA";
  local_1558 = &DAT_00a2f7ec;
  local_1554 = "LANDLO";
  local_1550 = &DAT_00a2f7ec;
  local_154c = 0;
  _memset(local_1548,0,0x34);
  local_1514 = "lighting\\2x\\v\\land.v.hlsl";
  local_1510 = "LANDALPHA";
  local_150c = &DAT_00a2f7ec;
  local_1508 = &DAT_00a8f7b8;
  local_1504 = &DAT_00a2f7ec;
  local_1500 = 0;
  _memset(local_14fc,0,0x34);
  local_14c8 = "lighting\\2x\\v\\land.v.hlsl";
  local_14c4 = "PTLIGHT";
  local_14c0 = &DAT_00a2f7ec;
  local_14bc = 0;
  _memset(local_14b8,0,0x3c);
  local_147c = "lighting\\2x\\v\\land.v.hlsl";
  local_1478 = "LANDALPHA";
  local_1474 = &DAT_00a2f7ec;
  local_1470 = "PTLIGHT";
  local_146c = &DAT_00a2f7ec;
  local_1468 = 0;
  _memset(local_1464,0,0x34);
  local_1430 = "lighting\\2x\\v\\localMap.v.hlsl";
  local_142c = 0;
  _memset(local_1428,0,0x44);
  local_13e4 = "lighting\\2x\\v\\localMap.v.hlsl";
  local_13e0 = &DAT_00a90cc8;
  local_13dc = &DAT_00a2f7ec;
  local_13d8 = 0;
  _memset(local_13d4,0,0x3c);
  local_1398 = "lighting\\2x\\v\\localMap.v.hlsl";
  local_1394 = "CLEAR";
  local_1390 = &DAT_00a2f7ec;
  local_138c = 0;
  _memset(local_1388,0,0x3c);
  local_134c = "lighting\\1x\\v\\texEffect.v.hlsl";
  local_1348 = 0;
  _memset(local_1344,0,0x44);
  local_1300 = "lighting\\1x\\v\\texEffect.v.hlsl";
  local_12fc = &DAT_00a90cc8;
  local_12f8 = &DAT_00a2f7ec;
  local_12f4 = 0;
  _memset(local_12f0,0,0x3c);
  local_12b4 = "lighting\\2x\\v\\SimpleShadow.v.hlsl";
  local_12b0 = "SHADOWMAP";
  local_12ac = &DAT_00a2f7ec;
  local_12a8 = 0;
  _memset(local_12a4,0,0x3c);
  local_1268 = "lighting\\2x\\v\\SimpleShadow.v.hlsl";
  local_1264 = "SHADOWMAP";
  local_1260 = &DAT_00a2f7ec;
  local_125c = &DAT_00a90cc8;
  local_1258 = &DAT_00a2f7ec;
  local_1254 = 0;
  _memset(local_1250,0,0x34);
  local_121c = "lighting\\2x\\v\\SimpleShadow.v.hlsl";
  local_1218 = "SHADOWMAP";
  local_1214 = &DAT_00a2f7ec;
  local_1210 = &DAT_00a3bad8;
  local_120c = &DAT_00a2f7ec;
  local_1208 = &DAT_00a90e0c;
  local_1204 = &DAT_00a2f7ec;
  local_1200 = 0;
  _memset(local_11fc,0,0x2c);
  iVar6 = 0;
  ppcVar5 = &local_b48;
  do {
    if (*ppcVar5 != (char *)0x0) {
      FUN_00801030(*ppcVar5,local_108);
      _sprintf(local_20c,"SLS1%03i.vso",iVar6);
      local_2868[0] = (char **)FUN_008014e0(local_108,ppcVar5 + 1,"vs_1_1",local_20c,0,0);
      ppcVar1 = (char **)(&DAT_00b45290)[iVar6];
      if (ppcVar1 != local_2868[0]) {
        if (((ppcVar1 != (char **)0x0) &&
            (LVar3 = InterlockedDecrement((LONG *)(ppcVar1 + 1)), LVar3 == 0)) &&
           (ppcVar1 != (char **)0x0)) {
          (**(code **)*ppcVar1)(1);
        }
        (&DAT_00b45290)[iVar6] = local_2868[0];
        if (local_2868[0] != (char **)0x0) {
          InterlockedIncrement((LONG *)(local_2868[0] + 1));
        }
      }
    }
    iVar6 = iVar6 + 1;
    ppcVar5 = ppcVar5 + 0x13;
  } while (iVar6 < 0x1f);
  ppcVar5 = &local_11d0;
  iVar6 = 0;
  do {
    local_2868[0] = ppcVar5;
    if (*ppcVar5 != (char *)0x0) {
      FUN_00801030(*ppcVar5,local_108);
      _sprintf(local_20c,"SLS1S%03i.vso",iVar6);
      puVar4 = (undefined4 *)FUN_008014e0(local_108,ppcVar5 + 1,"vs_1_1",local_20c,0,0);
      puVar2 = (undefined4 *)(&DAT_00b4530c)[iVar6];
      if (puVar2 != puVar4) {
        if (((puVar2 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar2 + 1), LVar3 == 0)
            ) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        (&DAT_00b4530c)[iVar6] = puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar4 + 1);
        }
      }
    }
    iVar6 = iVar6 + 1;
    ppcVar5 = local_2868[0] + 0x13;
  } while (iVar6 < 0x16);
  if (1 < DAT_00b42f48) {
    ppcVar5 = &local_2860;
    iVar6 = 0;
    do {
      local_2868[0] = ppcVar5;
      if (*ppcVar5 == (char *)0x0) {
        puVar2 = (undefined4 *)(&DAT_00b45364)[iVar6];
        if (puVar2 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar2 + 1);
          if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          (&DAT_00b45364)[iVar6] = 0;
        }
      }
      else {
        FUN_00801030(*ppcVar5,local_108);
        _sprintf(local_20c,"SLS2%03i.vso",iVar6);
        puVar4 = (undefined4 *)FUN_008014e0(local_108,ppcVar5 + 1,"vs_2_0",local_20c,0,0);
        puVar2 = (undefined4 *)(&DAT_00b45364)[iVar6];
        if (puVar2 != puVar4) {
          if (((puVar2 != (undefined4 *)0x0) &&
              (LVar3 = InterlockedDecrement(puVar2 + 1), LVar3 == 0)) &&
             (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          (&DAT_00b45364)[iVar6] = puVar4;
          if (puVar4 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar4 + 1);
          }
        }
      }
      iVar6 = iVar6 + 1;
      ppcVar5 = local_2868[0] + 0x13;
    } while (iVar6 < 0x4c);
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007cefd0(void)

{
  char **ppcVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *puVar4;
  char **ppcVar5;
  int iVar6;
  char **local_2b2c [2];
  int iStack_2b24;
  char *local_2b20;
  undefined4 local_2b1c;
  undefined1 local_2b18 [68];
  char *local_2ad4;
  char *local_2ad0;
  undefined1 *local_2acc;
  char *local_2ac8;
  undefined1 *local_2ac4;
  undefined4 local_2ac0;
  undefined1 local_2abc [52];
  char *local_2a88;
  undefined *local_2a84;
  undefined1 *local_2a80;
  undefined4 local_2a7c;
  undefined1 local_2a78 [60];
  char *local_2a3c;
  char *local_2a38;
  undefined1 *local_2a34;
  undefined4 local_2a30;
  undefined1 local_2a2c [60];
  char *local_29f0;
  char *local_29ec;
  undefined1 *local_29e8;
  char *local_29e4;
  undefined1 *local_29e0;
  char *local_29dc;
  undefined1 *local_29d8;
  undefined4 local_29d4;
  undefined1 local_29d0 [44];
  char *local_29a4;
  undefined *local_29a0;
  undefined1 *local_299c;
  char *local_2998;
  undefined1 *local_2994;
  undefined4 local_2990;
  undefined1 local_298c [52];
  char *local_2958;
  undefined *local_2954;
  undefined1 *local_2950;
  undefined4 local_294c;
  undefined1 local_2948 [60];
  char *local_290c;
  undefined *local_2908;
  undefined1 *local_2904;
  undefined4 local_2900;
  undefined1 local_28fc [60];
  char *local_28c0;
  undefined *local_28bc;
  undefined1 *local_28b8;
  char *local_28b4;
  undefined1 *local_28b0;
  undefined4 local_28ac;
  undefined1 local_28a8 [52];
  char *local_2874;
  char *local_2870;
  undefined *local_286c;
  undefined4 local_2868;
  undefined1 local_2864 [60];
  char *local_2828;
  char *local_2824;
  undefined *local_2820;
  undefined *local_281c;
  undefined1 *local_2818;
  undefined4 local_2814;
  undefined1 local_2810 [52];
  char *local_27dc;
  char *local_27d8;
  undefined *local_27d4;
  undefined *local_27d0;
  undefined1 *local_27cc;
  undefined4 local_27c8;
  undefined1 local_27c4 [52];
  char *local_2790;
  char *local_278c;
  undefined *local_2788;
  char *local_2784;
  undefined1 *local_2780;
  undefined4 local_277c;
  undefined1 local_2778 [52];
  char *local_2744;
  char *local_2740;
  undefined *local_273c;
  undefined *local_2738;
  undefined1 *local_2734;
  char *local_2730;
  undefined1 *local_272c;
  undefined4 local_2728;
  undefined1 local_2724 [44];
  char *local_26f8;
  char *local_26f4;
  undefined *local_26f0;
  undefined *local_26ec;
  undefined1 *local_26e8;
  char *local_26e4;
  undefined1 *local_26e0;
  undefined4 local_26dc;
  undefined1 local_26d8 [44];
  char *local_26ac;
  char *local_26a8;
  undefined1 *local_26a4;
  undefined4 local_26a0;
  undefined1 local_269c [60];
  char *local_2660;
  char *local_265c;
  undefined1 *local_2658;
  undefined *local_2654;
  undefined1 *local_2650;
  undefined4 local_264c;
  undefined1 local_2648 [52];
  char *local_2614;
  char *local_2610;
  undefined1 *local_260c;
  undefined *local_2608;
  undefined1 *local_2604;
  undefined4 local_2600;
  undefined1 local_25fc [52];
  char *local_25c8;
  char *local_25c4;
  undefined1 *local_25c0;
  char *local_25bc;
  undefined1 *local_25b8;
  undefined4 local_25b4;
  undefined1 local_25b0 [52];
  char *local_257c;
  char *local_2578;
  undefined1 *local_2574;
  undefined *local_2570;
  undefined1 *local_256c;
  char *local_2568;
  undefined1 *local_2564;
  undefined4 local_2560;
  undefined1 local_255c [44];
  char *local_2530;
  char *local_252c;
  undefined1 *local_2528;
  undefined *local_2524;
  undefined1 *local_2520;
  char *local_251c;
  undefined1 *local_2518;
  undefined4 local_2514;
  undefined1 local_2510 [44];
  char *local_24e4;
  char *local_24e0;
  undefined1 *local_24dc;
  char *local_24d8;
  undefined *local_24d4;
  undefined4 local_24d0;
  undefined1 local_24cc [52];
  char *local_2498;
  char *local_2494;
  undefined1 *local_2490;
  char *local_248c;
  undefined *local_2488;
  undefined *local_2484;
  undefined1 *local_2480;
  undefined4 local_247c;
  undefined1 local_2478 [44];
  undefined4 local_244c;
  undefined1 local_2448 [72];
  undefined4 local_2400;
  undefined1 local_23fc [72];
  undefined4 local_23b4;
  undefined1 local_23b0 [72];
  undefined4 local_2368;
  undefined1 local_2364 [72];
  char *local_231c;
  char *local_2318;
  undefined *local_2314;
  undefined4 local_2310;
  undefined1 local_230c [60];
  char *local_22d0;
  char *local_22cc;
  undefined *local_22c8;
  undefined *local_22c4;
  undefined1 *local_22c0;
  undefined4 local_22bc;
  undefined1 local_22b8 [52];
  char *local_2284;
  char *local_2280;
  undefined *local_227c;
  char *local_2278;
  undefined1 *local_2274;
  undefined4 local_2270;
  undefined1 local_226c [52];
  char *local_2238;
  char *local_2234;
  undefined *local_2230;
  undefined *local_222c;
  undefined1 *local_2228;
  char *local_2224;
  undefined1 *local_2220;
  undefined4 local_221c;
  undefined1 local_2218 [44];
  char *local_21ec;
  char *local_21e8;
  undefined *local_21e4;
  undefined4 local_21e0;
  undefined1 local_21dc [60];
  char *local_21a0;
  char *local_219c;
  undefined *local_2198;
  undefined *local_2194;
  undefined1 *local_2190;
  undefined4 local_218c;
  undefined1 local_2188 [52];
  char *local_2154;
  char *local_2150;
  undefined *local_214c;
  char *local_2148;
  undefined1 *local_2144;
  undefined4 local_2140;
  undefined1 local_213c [52];
  char *local_2108;
  char *local_2104;
  undefined *local_2100;
  undefined *local_20fc;
  undefined1 *local_20f8;
  char *local_20f4;
  undefined1 *local_20f0;
  undefined4 local_20ec;
  undefined1 local_20e8 [44];
  char *local_20bc;
  char *local_20b8;
  undefined *local_20b4;
  undefined4 local_20b0;
  undefined1 local_20ac [60];
  char *local_2070;
  char *local_206c;
  undefined *local_2068;
  undefined4 local_2064;
  undefined1 local_2060 [60];
  char *local_2024;
  undefined4 local_2020;
  undefined1 local_201c [68];
  char *local_1fd8;
  undefined *local_1fd4;
  undefined1 *local_1fd0;
  undefined4 local_1fcc;
  undefined1 local_1fc8 [60];
  char *local_1f8c;
  char *local_1f88;
  undefined1 *local_1f84;
  undefined4 local_1f80;
  undefined1 local_1f7c [60];
  char *local_1f40;
  char *local_1f3c;
  undefined1 *local_1f38;
  undefined *local_1f34;
  undefined1 *local_1f30;
  undefined4 local_1f2c;
  undefined1 local_1f28 [52];
  char *local_1ef4;
  char *local_1ef0;
  undefined1 *local_1eec;
  undefined4 local_1ee8;
  undefined1 local_1ee4 [60];
  char *local_1ea8;
  char *local_1ea4;
  undefined1 *local_1ea0;
  undefined *local_1e9c;
  undefined1 *local_1e98;
  undefined4 local_1e94;
  undefined1 local_1e90 [52];
  char *local_1e5c;
  undefined4 local_1e58;
  undefined1 local_1e54 [68];
  char *local_1e10;
  char *local_1e0c;
  undefined1 *local_1e08;
  undefined4 local_1e04;
  undefined1 local_1e00 [60];
  char *local_1dc4;
  undefined *local_1dc0;
  undefined4 local_1dbc;
  undefined4 local_1db8;
  undefined1 local_1db4 [60];
  char *local_1d78;
  char *local_1d74;
  undefined1 *local_1d70;
  char *local_1d6c;
  char *local_1d68;
  undefined4 local_1d64;
  undefined1 local_1d60 [52];
  char *local_1d2c;
  char *local_1d28;
  undefined1 *local_1d24;
  char *local_1d20;
  undefined1 *local_1d1c;
  char *local_1d18;
  char *local_1d14;
  undefined4 local_1d10;
  undefined1 local_1d0c [44];
  char *local_1ce0;
  char *local_1cdc;
  undefined1 *local_1cd8;
  undefined4 local_1cd4;
  undefined1 local_1cd0 [60];
  char *local_1c94;
  char *local_1c90;
  undefined1 *local_1c8c;
  char *local_1c88;
  undefined1 *local_1c84;
  undefined4 local_1c80;
  undefined1 local_1c7c [52];
  char *local_1c48;
  undefined *local_1c44;
  undefined1 *local_1c40;
  char *local_1c3c;
  undefined1 *local_1c38;
  undefined4 local_1c34;
  undefined1 local_1c30 [52];
  char *local_1bfc;
  char *local_1bf8;
  undefined1 *local_1bf4;
  undefined4 local_1bf0;
  undefined1 local_1bec [60];
  undefined4 local_1bb0;
  undefined1 local_1bac [72];
  char *local_1b64;
  char *local_1b60;
  undefined1 *local_1b5c;
  undefined *local_1b58;
  undefined1 *local_1b54;
  char *local_1b50;
  undefined1 *local_1b4c;
  undefined4 local_1b48;
  undefined1 local_1b44 [44];
  char *local_1b18;
  char *local_1b14;
  undefined1 *local_1b10;
  char *local_1b0c;
  undefined1 *local_1b08;
  undefined4 local_1b04;
  undefined1 local_1b00 [52];
  undefined4 local_1acc;
  undefined1 local_1ac8 [72];
  char *local_1a80;
  char *local_1a7c;
  undefined1 *local_1a78;
  char *local_1a74;
  undefined1 *local_1a70;
  undefined4 local_1a6c;
  undefined1 local_1a68 [52];
  char *local_1a34;
  char *local_1a30;
  undefined1 *local_1a2c;
  char *local_1a28;
  undefined1 *local_1a24;
  char *local_1a20;
  undefined1 *local_1a1c;
  undefined4 local_1a18;
  undefined1 local_1a14 [44];
  char *local_19e8;
  char *local_19e4;
  undefined1 *local_19e0;
  undefined4 local_19dc;
  undefined1 local_19d8 [60];
  char *local_199c;
  char *local_1998;
  undefined1 *local_1994;
  char *local_1990;
  undefined1 *local_198c;
  undefined4 local_1988;
  undefined1 local_1984 [52];
  char *local_1950;
  char *local_194c;
  undefined1 *local_1948;
  undefined *local_1944;
  undefined1 *local_1940;
  undefined4 local_193c;
  undefined1 local_1938 [52];
  char *local_1904;
  char *local_1900;
  undefined1 *local_18fc;
  undefined *local_18f8;
  undefined1 *local_18f4;
  char *local_18f0;
  undefined1 *local_18ec;
  undefined4 local_18e8;
  undefined1 local_18e4 [44];
  char *local_18b8;
  char *local_18b4;
  undefined1 *local_18b0;
  char *local_18ac;
  undefined1 *local_18a8;
  undefined4 local_18a4;
  undefined1 local_18a0 [52];
  char *local_186c;
  undefined4 local_1868;
  undefined1 local_1864 [68];
  char *local_1820;
  undefined *local_181c;
  undefined1 *local_1818;
  undefined4 local_1814;
  undefined1 local_1810 [60];
  char *local_17d4;
  char *local_17d0;
  undefined1 *local_17cc;
  undefined4 local_17c8;
  undefined1 local_17c4 [60];
  char *local_1788;
  undefined4 local_1784;
  undefined1 local_1780 [68];
  char *local_173c;
  char *local_1738;
  undefined1 *local_1734;
  undefined4 local_1730;
  undefined1 local_172c [60];
  char *local_16f0;
  char *local_16ec;
  undefined1 *local_16e8;
  char *local_16e4;
  undefined1 *local_16e0;
  undefined4 local_16dc;
  undefined1 local_16d8 [52];
  char *local_16a4;
  undefined *local_16a0;
  undefined1 *local_169c;
  undefined4 local_1698;
  undefined1 local_1694 [60];
  char *local_1658;
  char *local_1654;
  undefined1 *local_1650;
  undefined *local_164c;
  undefined1 *local_1648;
  undefined4 local_1644;
  undefined1 local_1640 [52];
  char *local_160c;
  char *local_1608;
  undefined1 *local_1604;
  undefined4 local_1600;
  undefined1 local_15fc [60];
  char *local_15c0;
  char *local_15bc;
  undefined1 *local_15b8;
  char *local_15b4;
  undefined1 *local_15b0;
  undefined4 local_15ac;
  undefined1 local_15a8 [52];
  char *local_1574;
  undefined4 local_1570;
  undefined1 local_156c [68];
  char *local_1528;
  char *local_1524;
  undefined1 *local_1520;
  undefined4 local_151c;
  undefined1 local_1518 [60];
  char *local_14dc;
  undefined *local_14d8;
  undefined1 *local_14d4;
  undefined4 local_14d0;
  undefined1 local_14cc [60];
  char *local_1490;
  char *local_148c;
  undefined1 *local_1488;
  char *local_1484;
  undefined *local_1480;
  char *local_147c;
  undefined *local_1478;
  char *local_1474;
  undefined *local_1470;
  undefined4 local_146c;
  undefined4 local_1468;
  undefined4 local_1464;
  undefined4 local_1460;
  undefined4 local_145c;
  undefined4 local_1458;
  undefined4 local_1454;
  undefined4 local_1450;
  undefined4 local_144c;
  undefined4 local_1448;
  char *local_1444;
  char *local_1440;
  undefined1 *local_143c;
  char *local_1438;
  undefined *local_1434;
  char *local_1430;
  undefined *local_142c;
  char *local_1428;
  undefined *local_1424;
  char *local_1420;
  undefined1 *local_141c;
  undefined4 local_1418;
  undefined4 local_1414;
  undefined4 local_1410;
  undefined4 local_140c;
  undefined4 local_1408;
  undefined4 local_1404;
  undefined4 local_1400;
  undefined4 local_13fc;
  char *local_13f8;
  char *local_13f4;
  undefined1 *local_13f0;
  char *local_13ec;
  undefined *local_13e8;
  char *local_13e4;
  undefined *local_13e0;
  char *local_13dc;
  undefined *local_13d8;
  undefined4 local_13d4;
  undefined4 local_13d0;
  undefined4 local_13cc;
  undefined4 local_13c8;
  undefined4 local_13c4;
  undefined4 local_13c0;
  undefined4 local_13bc;
  undefined4 local_13b8;
  undefined4 local_13b4;
  undefined4 local_13b0;
  char *local_13ac;
  char *local_13a8;
  undefined1 *local_13a4;
  char *local_13a0;
  undefined *local_139c;
  char *local_1398;
  undefined *local_1394;
  char *local_1390;
  undefined *local_138c;
  char *local_1388;
  undefined1 *local_1384;
  undefined4 local_1380;
  undefined4 local_137c;
  undefined4 local_1378;
  undefined4 local_1374;
  undefined4 local_1370;
  undefined4 local_136c;
  undefined4 local_1368;
  undefined4 local_1364;
  char *local_1360;
  char *local_135c;
  undefined1 *local_1358;
  char *local_1354;
  undefined *local_1350;
  char *local_134c;
  undefined *local_1348;
  char *local_1344;
  undefined *local_1340;
  undefined4 local_133c;
  undefined4 local_1338;
  undefined4 local_1334;
  undefined4 local_1330;
  undefined4 local_132c;
  undefined4 local_1328;
  undefined4 local_1324;
  undefined4 local_1320;
  undefined4 local_131c;
  undefined4 local_1318;
  char *local_1314;
  char *local_1310;
  undefined1 *local_130c;
  char *local_1308;
  undefined *local_1304;
  char *local_1300;
  undefined *local_12fc;
  char *local_12f8;
  undefined *local_12f4;
  char *local_12f0;
  undefined1 *local_12ec;
  undefined4 local_12e8;
  undefined4 local_12e4;
  undefined4 local_12e0;
  undefined4 local_12dc;
  undefined4 local_12d8;
  undefined4 local_12d4;
  undefined4 local_12d0;
  undefined4 local_12cc;
  char *local_12c8;
  undefined4 local_12c4;
  undefined1 local_12c0 [68];
  char *local_127c;
  undefined4 local_1278;
  undefined1 local_1274 [68];
  char *local_1230;
  undefined4 local_122c;
  undefined1 local_1228 [68];
  char *local_11e4;
  undefined *local_11e0;
  undefined1 *local_11dc;
  undefined4 local_11d8;
  undefined1 local_11d4 [60];
  char *local_1198;
  undefined *local_1194;
  undefined1 *local_1190;
  undefined *local_118c;
  undefined1 *local_1188;
  undefined4 local_1184;
  undefined1 local_1180 [52];
  char *local_114c;
  undefined *local_1148;
  undefined1 *local_1144;
  char *local_1140;
  undefined1 *local_113c;
  undefined4 local_1138;
  undefined1 local_1134 [52];
  char *local_1100;
  undefined *local_10fc;
  undefined1 *local_10f8;
  undefined *local_10f4;
  undefined1 *local_10f0;
  undefined4 local_10ec;
  undefined1 local_10e8 [52];
  char *local_10b4;
  char *local_10b0;
  char *local_10ac;
  undefined4 local_10a8;
  undefined1 local_10a4 [60];
  char *local_1068;
  char *local_1064;
  char *local_1060;
  undefined4 local_105c;
  undefined1 local_1058 [60];
  char *local_101c;
  undefined4 local_1018;
  undefined1 local_1014 [68];
  char *local_fd0;
  undefined *local_fcc;
  undefined1 *local_fc8;
  undefined4 local_fc4;
  undefined1 local_fc0 [60];
  char *local_f84;
  char *local_f80;
  undefined1 *local_f7c;
  undefined4 local_f78;
  undefined1 local_f74 [60];
  char *local_f38;
  char *local_f34;
  undefined1 *local_f30;
  undefined *local_f2c;
  undefined1 *local_f28;
  undefined4 local_f24;
  undefined1 local_f20 [52];
  char *local_eec;
  undefined *local_ee8;
  undefined1 *local_ee4;
  undefined4 local_ee0;
  undefined1 local_edc [60];
  char *local_ea0;
  undefined *local_e9c;
  undefined1 *local_e98;
  undefined *local_e94;
  undefined1 *local_e90;
  undefined4 local_e8c;
  undefined1 local_e88 [52];
  char *local_e54;
  undefined *local_e50;
  undefined1 *local_e4c;
  char *local_e48;
  undefined1 *local_e44;
  undefined4 local_e40;
  undefined1 local_e3c [52];
  char *local_e08;
  undefined *local_e04;
  undefined1 *local_e00;
  char *local_dfc;
  undefined1 *local_df8;
  undefined *local_df4;
  undefined1 *local_df0;
  undefined4 local_dec;
  undefined1 local_de8 [44];
  char *local_dbc;
  char *local_db8;
  undefined1 *local_db4;
  undefined4 local_db0;
  undefined1 local_dac [60];
  char *local_d70;
  char *local_d6c;
  undefined1 *local_d68;
  undefined *local_d64;
  undefined1 *local_d60;
  undefined4 local_d5c;
  undefined1 local_d58 [52];
  char *local_d24;
  char *local_d20;
  undefined1 *local_d1c;
  char *local_d18;
  undefined1 *local_d14;
  undefined4 local_d10;
  undefined1 local_d0c [52];
  char *local_cd8;
  char *local_cd4;
  undefined1 *local_cd0;
  undefined *local_ccc;
  undefined1 *local_cc8;
  char *local_cc4;
  undefined1 *local_cc0;
  undefined4 local_cbc;
  undefined1 local_cb8 [44];
  char *local_c8c;
  undefined *local_c88;
  undefined1 *local_c84;
  undefined4 local_c80;
  undefined1 local_c7c [60];
  char *local_c40;
  undefined *local_c3c;
  undefined1 *local_c38;
  undefined *local_c34;
  undefined1 *local_c30;
  undefined4 local_c2c;
  undefined1 local_c28 [52];
  char *local_bf4;
  undefined *local_bf0;
  undefined1 *local_bec;
  char *local_be8;
  undefined1 *local_be4;
  undefined4 local_be0;
  undefined1 local_bdc [52];
  char *local_ba8;
  undefined *local_ba4;
  undefined1 *local_ba0;
  char *local_b9c;
  undefined1 *local_b98;
  undefined *local_b94;
  undefined1 *local_b90;
  undefined4 local_b8c;
  undefined1 local_b88 [44];
  char *local_b5c;
  undefined *local_b58;
  undefined1 *local_b54;
  undefined *local_b50;
  undefined1 *local_b4c;
  undefined4 local_b48;
  undefined1 local_b44 [52];
  char *local_b10;
  undefined *local_b0c;
  undefined1 *local_b08;
  undefined *local_b04;
  undefined1 *local_b00;
  undefined *local_afc;
  undefined1 *local_af8;
  undefined4 local_af4;
  undefined1 local_af0 [44];
  char *local_ac4;
  undefined *local_ac0;
  undefined1 *local_abc;
  undefined *local_ab8;
  undefined1 *local_ab4;
  char *local_ab0;
  undefined1 *local_aac;
  undefined4 local_aa8;
  undefined1 local_aa4 [44];
  char *local_a78;
  undefined *local_a74;
  undefined1 *local_a70;
  undefined *local_a6c;
  undefined1 *local_a68;
  char *local_a64;
  undefined1 *local_a60;
  undefined *local_a5c;
  undefined1 *local_a58;
  undefined4 local_a54;
  undefined4 local_a50;
  undefined4 local_a4c;
  undefined4 local_a48;
  undefined4 local_a44;
  undefined4 local_a40;
  undefined4 local_a3c;
  undefined4 local_a38;
  undefined4 local_a34;
  undefined4 local_a30;
  char *local_a2c;
  undefined4 local_a28;
  undefined1 local_a24 [68];
  char *local_9e0;
  undefined *local_9dc;
  undefined1 *local_9d8;
  undefined4 local_9d4;
  undefined1 local_9d0 [60];
  char *local_994;
  undefined *local_990;
  undefined1 *local_98c;
  undefined *local_988;
  undefined1 *local_984;
  undefined4 local_980;
  undefined1 local_97c [52];
  char *local_948;
  undefined4 local_944;
  undefined1 local_940 [68];
  char *local_8fc;
  undefined *local_8f8;
  undefined1 *local_8f4;
  undefined4 local_8f0;
  undefined1 local_8ec [60];
  char *local_8b0;
  undefined4 local_8ac;
  undefined1 local_8a8 [68];
  char *local_864;
  undefined4 local_860;
  undefined1 local_85c [68];
  char *local_818;
  char *local_814;
  undefined1 *local_810;
  char *local_80c;
  char *local_808;
  undefined4 local_804;
  undefined1 local_800 [52];
  char *local_7cc;
  char *local_7c8;
  char *local_7c4;
  undefined4 local_7c0;
  undefined1 local_7bc [60];
  char *local_780;
  char *local_77c;
  undefined4 local_778;
  undefined4 local_774;
  undefined1 local_770 [60];
  char *local_734;
  undefined4 local_730;
  undefined1 local_72c [68];
  char *local_6e8;
  undefined4 local_6e4;
  undefined1 local_6e0 [68];
  char *local_69c;
  char *local_698;
  undefined1 *local_694;
  undefined4 local_690;
  undefined1 local_68c [60];
  char *local_650;
  undefined *local_64c;
  undefined1 *local_648;
  undefined4 local_644;
  undefined1 local_640 [60];
  char *local_604;
  char *local_600;
  undefined1 *local_5fc;
  undefined *local_5f8;
  undefined1 *local_5f4;
  undefined4 local_5f0;
  undefined1 local_5ec [52];
  char *local_5b8;
  char *local_5b4;
  undefined1 *local_5b0;
  undefined4 local_5ac;
  undefined1 local_5a8 [60];
  char *local_56c;
  char *local_568;
  undefined1 *local_564;
  char *local_560;
  undefined1 *local_55c;
  undefined4 local_558;
  undefined1 local_554 [52];
  undefined4 local_520;
  undefined1 local_51c [72];
  char local_4d4 [8];
  char local_4cc [260];
  undefined1 local_3c8 [260];
  char local_2c4 [352];
  char local_164 [352];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_2b2c;
  __gcvt((double)_DAT_00b2c2bc,0xc,local_164);
  __gcvt((double)_DAT_00b2c2c0,0xc,local_2c4);
  __itoa(DAT_00b42e88,local_4d4,10);
  local_12c8 = "lighting\\1x\\p\\base.p.hlsl";
  local_12c4 = 0;
  _memset(local_12c0,0,0x44);
  local_127c = "lighting\\1x\\p\\diffusePt.p.hlsl";
  local_1278 = 0;
  _memset(local_1274,0,0x44);
  local_1230 = "lighting\\1x\\p\\diffuseDir.p.hlsl";
  local_122c = 0;
  _memset(local_1228,0,0x44);
  local_11e4 = "lighting\\1x\\p\\base.p.hlsl";
  local_11e0 = &DAT_00a8f8c4;
  local_11dc = &DAT_00a2f7ec;
  local_11d8 = 0;
  _memset(local_11d4,0,0x3c);
  local_1198 = "lighting\\1x\\p\\base.p.hlsl";
  local_1194 = &DAT_00a8f8c4;
  local_1190 = &DAT_00a2f7ec;
  local_118c = &DAT_00a90e0c;
  local_1188 = &DAT_00a2f7ec;
  local_1184 = 0;
  _memset(local_1180,0,0x34);
  local_114c = "lighting\\1x\\p\\base.p.hlsl";
  local_1148 = &DAT_00a8f8c4;
  local_1144 = &DAT_00a2f7ec;
  local_1140 = "FACEGENBLEND";
  local_113c = &DAT_00a2f7ec;
  local_1138 = 0;
  _memset(local_1134,0,0x34);
  local_1100 = "lighting\\1x\\p\\base.p.hlsl";
  local_10fc = &DAT_00a8f8c4;
  local_10f8 = &DAT_00a2f7ec;
  local_10f4 = &DAT_00a3bc50;
  local_10f0 = &DAT_00a2f7ec;
  local_10ec = 0;
  _memset(local_10e8,0,0x34);
  local_10ac = local_164;
  local_10b4 = "lighting\\1x\\p\\specularPt.p.hlsl";
  local_10b0 = "SPECMULT";
  local_10a8 = 0;
  _memset(local_10a4,0,0x3c);
  local_1060 = local_164;
  local_1068 = "lighting\\1x\\p\\specularDir.p.hlsl";
  local_1064 = "SPECMULT";
  local_105c = 0;
  _memset(local_1058,0,0x3c);
  local_101c = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_1018 = 0;
  _memset(local_1014,0,0x44);
  local_fd0 = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_fcc = &DAT_00a90d88;
  local_fc8 = &DAT_00a2f7ec;
  local_fc4 = 0;
  _memset(local_fc0,0,0x3c);
  local_f84 = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_f80 = "ALPHA";
  local_f7c = &DAT_00a2f7ec;
  local_f78 = 0;
  _memset(local_f74,0,0x3c);
  local_f38 = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_f34 = "ALPHA";
  local_f30 = &DAT_00a2f7ec;
  local_f2c = &DAT_00a90d88;
  local_f28 = &DAT_00a2f7ec;
  local_f24 = 0;
  _memset(local_f20,0,0x34);
  local_eec = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_ee8 = &DAT_00a90e0c;
  local_ee4 = &DAT_00a2f7ec;
  local_ee0 = 0;
  _memset(local_edc,0,0x3c);
  local_ea0 = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_e9c = &DAT_00a90e0c;
  local_e98 = &DAT_00a2f7ec;
  local_e94 = &DAT_00a90d88;
  local_e90 = &DAT_00a2f7ec;
  local_e8c = 0;
  _memset(local_e88,0,0x34);
  local_e54 = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_e50 = &DAT_00a90e0c;
  local_e4c = &DAT_00a2f7ec;
  local_e48 = "ALPHA";
  local_e44 = &DAT_00a2f7ec;
  local_e40 = 0;
  _memset(local_e3c,0,0x34);
  local_e08 = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_e04 = &DAT_00a90e0c;
  local_e00 = &DAT_00a2f7ec;
  local_dfc = "ALPHA";
  local_df8 = &DAT_00a2f7ec;
  local_df4 = &DAT_00a90d88;
  local_df0 = &DAT_00a2f7ec;
  local_dec = 0;
  _memset(local_de8,0,0x2c);
  local_dbc = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_db8 = "FACEGENBLEND";
  local_db4 = &DAT_00a2f7ec;
  local_db0 = 0;
  _memset(local_dac,0,0x3c);
  local_d70 = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_d6c = "FACEGENBLEND";
  local_d68 = &DAT_00a2f7ec;
  local_d64 = &DAT_00a90d88;
  local_d60 = &DAT_00a2f7ec;
  local_d5c = 0;
  _memset(local_d58,0,0x34);
  local_d24 = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_d20 = "FACEGENBLEND";
  local_d1c = &DAT_00a2f7ec;
  local_d18 = "ALPHA";
  local_d14 = &DAT_00a2f7ec;
  local_d10 = 0;
  _memset(local_d0c,0,0x34);
  local_cd8 = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_cd4 = "FACEGENBLEND";
  local_cd0 = &DAT_00a2f7ec;
  local_ccc = &DAT_00a90d88;
  local_cc8 = &DAT_00a2f7ec;
  local_cc4 = "ALPHA";
  local_cc0 = &DAT_00a2f7ec;
  local_cbc = 0;
  _memset(local_cb8,0,0x2c);
  local_c8c = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_c88 = &DAT_00a8f7b8;
  local_c84 = &DAT_00a2f7ec;
  local_c80 = 0;
  _memset(local_c7c,0,0x3c);
  local_c40 = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_c3c = &DAT_00a8f7b8;
  local_c38 = &DAT_00a2f7ec;
  local_c34 = &DAT_00a90d88;
  local_c30 = &DAT_00a2f7ec;
  local_c2c = 0;
  _memset(local_c28,0,0x34);
  local_bf4 = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_bf0 = &DAT_00a8f7b8;
  local_bec = &DAT_00a2f7ec;
  local_be8 = "ALPHA";
  local_be4 = &DAT_00a2f7ec;
  local_be0 = 0;
  _memset(local_bdc,0,0x34);
  local_ba8 = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_ba4 = &DAT_00a8f7b8;
  local_ba0 = &DAT_00a2f7ec;
  local_b9c = "ALPHA";
  local_b98 = &DAT_00a2f7ec;
  local_b94 = &DAT_00a90d88;
  local_b90 = &DAT_00a2f7ec;
  local_b8c = 0;
  _memset(local_b88,0,0x2c);
  local_b5c = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_b58 = &DAT_00a8f7b8;
  local_b54 = &DAT_00a2f7ec;
  local_b50 = &DAT_00a90e0c;
  local_b4c = &DAT_00a2f7ec;
  local_b48 = 0;
  _memset(local_b44,0,0x34);
  local_b10 = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_b0c = &DAT_00a8f7b8;
  local_b08 = &DAT_00a2f7ec;
  local_b04 = &DAT_00a90e0c;
  local_b00 = &DAT_00a2f7ec;
  local_afc = &DAT_00a90d88;
  local_af8 = &DAT_00a2f7ec;
  local_af4 = 0;
  _memset(local_af0,0,0x2c);
  local_ac4 = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_ac0 = &DAT_00a8f7b8;
  local_abc = &DAT_00a2f7ec;
  local_ab8 = &DAT_00a90e0c;
  local_ab4 = &DAT_00a2f7ec;
  local_ab0 = "ALPHA";
  local_aac = &DAT_00a2f7ec;
  local_aa8 = 0;
  _memset(local_aa4,0,0x2c);
  local_a78 = "lighting\\1x\\p\\ambDiffDirTexture.p.hlsl";
  local_a74 = &DAT_00a8f7b8;
  local_a70 = &DAT_00a2f7ec;
  local_a6c = &DAT_00a90e0c;
  local_a68 = &DAT_00a2f7ec;
  local_a64 = "ALPHA";
  local_a60 = &DAT_00a2f7ec;
  local_a5c = &DAT_00a90d88;
  local_a58 = &DAT_00a2f7ec;
  local_a54 = 0;
  local_a50 = 0;
  local_a4c = 0;
  local_a48 = 0;
  local_a44 = 0;
  local_a40 = 0;
  local_a3c = 0;
  local_a38 = 0;
  local_a34 = 0;
  local_a30 = 0;
  local_a2c = "lighting\\1x\\p\\ambDiffDirAndPt.p.hlsl";
  local_a28 = 0;
  _memset(local_a24,0,0x44);
  local_9e0 = "lighting\\1x\\p\\base.p.hlsl";
  local_9dc = &DAT_00a90d88;
  local_9d8 = &DAT_00a2f7ec;
  local_9d4 = 0;
  _memset(local_9d0,0,0x3c);
  local_994 = "lighting\\1x\\p\\base.p.hlsl";
  local_990 = &DAT_00a90d88;
  local_98c = &DAT_00a2f7ec;
  local_988 = &DAT_00a8f8c4;
  local_984 = &DAT_00a2f7ec;
  local_980 = 0;
  _memset(local_97c,0,0x34);
  local_948 = "lighting\\1x\\p\\envmap.p.hlsl";
  local_944 = 0;
  _memset(local_940,0,0x44);
  local_8fc = "lighting\\1x\\p\\envmap.p.hlsl";
  local_8f8 = &DAT_00a90e0c;
  local_8f4 = &DAT_00a2f7ec;
  local_8f0 = 0;
  _memset(local_8ec,0,0x3c);
  local_8b0 = "lighting\\1x\\p\\vertDir.p.hlsl";
  local_8ac = 0;
  _memset(local_8a8,0,0x44);
  local_864 = "lighting\\1x\\p\\vertDirAndPt.p.hlsl";
  local_860 = 0;
  _memset(local_85c,0,0x44);
  local_808 = local_2c4;
  local_818 = "lighting\\1x\\p\\SI.p.hlsl";
  local_814 = "AMBIENT";
  local_810 = &DAT_00a2f7ec;
  local_80c = "EMMITMULT";
  local_804 = 0;
  _memset(local_800,0,0x34);
  local_7c4 = local_2c4;
  local_7cc = "lighting\\1x\\p\\SI.p.hlsl";
  local_7c8 = "EMMITMULT";
  local_7c0 = 0;
  _memset(local_7bc,0,0x3c);
  local_780 = "lighting\\1x\\p\\SI.p.hlsl";
  local_77c = "SIBLOCK";
  local_778 = 0;
  local_774 = 0;
  _memset(local_770,0,0x3c);
  local_734 = "lighting\\1x\\p\\base.p.hlsl";
  local_730 = 0;
  _memset(local_72c,0,0x44);
  local_6e8 = "lighting\\1x\\p\\land.p.hlsl";
  local_6e4 = 0;
  _memset(local_6e0,0,0x44);
  local_69c = "lighting\\1x\\p\\land.p.hlsl";
  local_698 = "LANDALPHA";
  local_694 = &DAT_00a2f7ec;
  local_690 = 0;
  _memset(local_68c,0,0x3c);
  local_650 = "lighting\\1x\\p\\land.p.hlsl";
  local_64c = &DAT_00a8f7b8;
  local_648 = &DAT_00a2f7ec;
  local_644 = 0;
  _memset(local_640,0,0x3c);
  local_604 = "lighting\\1x\\p\\land.p.hlsl";
  local_600 = "LANDALPHA";
  local_5fc = &DAT_00a2f7ec;
  local_5f8 = &DAT_00a8f7b8;
  local_5f4 = &DAT_00a2f7ec;
  local_5f0 = 0;
  _memset(local_5ec,0,0x34);
  local_5b8 = "lighting\\1x\\p\\land.p.hlsl";
  local_5b4 = "PTLIGHT";
  local_5b0 = &DAT_00a2f7ec;
  local_5ac = 0;
  _memset(local_5a8,0,0x3c);
  local_56c = "lighting\\1x\\p\\land.p.hlsl";
  local_568 = "LANDALPHA";
  local_564 = &DAT_00a2f7ec;
  local_560 = "PTLIGHT";
  local_55c = &DAT_00a2f7ec;
  local_558 = 0;
  _memset(local_554,0,0x34);
  local_520 = 0;
  _memset(local_51c,0,0x48);
  local_2b20 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_2b1c = 0;
  _memset(local_2b18,0,0x44);
  local_2ad4 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_2ad0 = "MODELSPACENORM";
  local_2acc = &DAT_00a2f7ec;
  local_2ac8 = "LODLANDCLIP";
  local_2ac4 = &DAT_00a2f7ec;
  local_2ac0 = 0;
  _memset(local_2abc,0,0x34);
  local_2a88 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_2a84 = &DAT_00a8f7b8;
  local_2a80 = &DAT_00a2f7ec;
  local_2a7c = 0;
  _memset(local_2a78,0,0x3c);
  local_2a3c = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_2a38 = "PROJ_SHADOW";
  local_2a34 = &DAT_00a2f7ec;
  local_2a30 = 0;
  _memset(local_2a2c,0,0x3c);
  local_29f0 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_29ec = "MODELSPACENORM";
  local_29e8 = &DAT_00a2f7ec;
  local_29e4 = "PROJ_SHADOW";
  local_29e0 = &DAT_00a2f7ec;
  local_29dc = "LODLANDCLIP";
  local_29d8 = &DAT_00a2f7ec;
  local_29d4 = 0;
  _memset(local_29d0,0,0x2c);
  local_29a4 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_29a0 = &DAT_00a8f7b8;
  local_299c = &DAT_00a2f7ec;
  local_2998 = "PROJ_SHADOW";
  local_2994 = &DAT_00a2f7ec;
  local_2990 = 0;
  _memset(local_298c,0,0x34);
  local_2958 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_2954 = &DAT_00a451f0;
  local_2950 = &DAT_00a2f7ec;
  local_294c = 0;
  _memset(local_2948,0,0x3c);
  local_290c = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_2908 = &DAT_00a3bc50;
  local_2904 = &DAT_00a2f7ec;
  local_2900 = 0;
  _memset(local_28fc,0,0x3c);
  local_28c0 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_28bc = &DAT_00a3bc50;
  local_28b8 = &DAT_00a2f7ec;
  local_28b4 = "PROJ_SHADOW";
  local_28b0 = &DAT_00a2f7ec;
  local_28ac = 0;
  _memset(local_28a8,0,0x34);
  local_2874 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_2870 = "LIGHTS";
  local_286c = &DAT_00a61fbc;
  local_2868 = 0;
  _memset(local_2864,0,0x3c);
  local_2828 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_2824 = "LIGHTS";
  local_2820 = &DAT_00a61fbc;
  local_281c = &DAT_00a8f7b8;
  local_2818 = &DAT_00a2f7ec;
  local_2814 = 0;
  _memset(local_2810,0,0x34);
  local_27dc = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_27d8 = "LIGHTS";
  local_27d4 = &DAT_00a61fbc;
  local_27d0 = &DAT_00a3bc50;
  local_27cc = &DAT_00a2f7ec;
  local_27c8 = 0;
  _memset(local_27c4,0,0x34);
  local_2790 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_278c = "LIGHTS";
  local_2788 = &DAT_00a61fbc;
  local_2784 = "PROJ_SHADOW";
  local_2780 = &DAT_00a2f7ec;
  local_277c = 0;
  _memset(local_2778,0,0x34);
  local_2744 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_2740 = "LIGHTS";
  local_273c = &DAT_00a61fbc;
  local_2738 = &DAT_00a8f7b8;
  local_2734 = &DAT_00a2f7ec;
  local_2730 = "PROJ_SHADOW";
  local_272c = &DAT_00a2f7ec;
  local_2728 = 0;
  _memset(local_2724,0,0x2c);
  local_26f8 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_26f4 = "LIGHTS";
  local_26f0 = &DAT_00a61fbc;
  local_26ec = &DAT_00a3bc50;
  local_26e8 = &DAT_00a2f7ec;
  local_26e4 = "PROJ_SHADOW";
  local_26e0 = &DAT_00a2f7ec;
  local_26dc = 0;
  _memset(local_26d8,0,0x2c);
  local_26ac = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_26a8 = "SPECULAR";
  local_26a4 = &DAT_00a2f7ec;
  local_26a0 = 0;
  _memset(local_269c,0,0x3c);
  local_2660 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_265c = "SPECULAR";
  local_2658 = &DAT_00a2f7ec;
  local_2654 = &DAT_00a8f7b8;
  local_2650 = &DAT_00a2f7ec;
  local_264c = 0;
  _memset(local_2648,0,0x34);
  local_2614 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_2610 = "SPECULAR";
  local_260c = &DAT_00a2f7ec;
  local_2608 = &DAT_00a3bc50;
  local_2604 = &DAT_00a2f7ec;
  local_2600 = 0;
  _memset(local_25fc,0,0x34);
  local_25c8 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_25c4 = "SPECULAR";
  local_25c0 = &DAT_00a2f7ec;
  local_25bc = "PROJ_SHADOW";
  local_25b8 = &DAT_00a2f7ec;
  local_25b4 = 0;
  _memset(local_25b0,0,0x34);
  local_257c = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_2578 = "SPECULAR";
  local_2574 = &DAT_00a2f7ec;
  local_2570 = &DAT_00a8f7b8;
  local_256c = &DAT_00a2f7ec;
  local_2568 = "PROJ_SHADOW";
  local_2564 = &DAT_00a2f7ec;
  local_2560 = 0;
  _memset(local_255c,0,0x2c);
  local_2530 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_252c = "SPECULAR";
  local_2528 = &DAT_00a2f7ec;
  local_2524 = &DAT_00a3bc50;
  local_2520 = &DAT_00a2f7ec;
  local_251c = "PROJ_SHADOW";
  local_2518 = &DAT_00a2f7ec;
  local_2514 = 0;
  _memset(local_2510,0,0x2c);
  local_24e4 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_24e0 = "SPECULAR";
  local_24dc = &DAT_00a2f7ec;
  local_24d8 = "LIGHTS";
  local_24d4 = &DAT_00a61fbc;
  local_24d0 = 0;
  _memset(local_24cc,0,0x34);
  local_2498 = "lighting\\2x\\p\\ADTS.p.hlsl";
  local_2494 = "SPECULAR";
  local_2490 = &DAT_00a2f7ec;
  local_248c = "LIGHTS";
  local_2488 = &DAT_00a61fbc;
  local_2484 = &DAT_00a8f7b8;
  local_2480 = &DAT_00a2f7ec;
  local_247c = 0;
  _memset(local_2478,0,0x2c);
  local_244c = 0;
  _memset(local_2448,0,0x48);
  local_2400 = 0;
  _memset(local_23fc,0,0x48);
  local_23b4 = 0;
  _memset(local_23b0,0,0x48);
  local_2368 = 0;
  _memset(local_2364,0,0x48);
  local_231c = "lighting\\2x\\p\\AD.p.hlsl";
  local_2318 = "LIGHTS";
  local_2314 = &DAT_00a61fbc;
  local_2310 = 0;
  _memset(local_230c,0,0x3c);
  local_22d0 = "lighting\\2x\\p\\AD.p.hlsl";
  local_22cc = "LIGHTS";
  local_22c8 = &DAT_00a61fbc;
  local_22c4 = &DAT_00a8f7b8;
  local_22c0 = &DAT_00a2f7ec;
  local_22bc = 0;
  _memset(local_22b8,0,0x34);
  local_2284 = "lighting\\2x\\p\\AD.p.hlsl";
  local_2280 = "LIGHTS";
  local_227c = &DAT_00a61fbc;
  local_2278 = "PROJ_SHADOW";
  local_2274 = &DAT_00a2f7ec;
  local_2270 = 0;
  _memset(local_226c,0,0x34);
  local_2238 = "lighting\\2x\\p\\AD.p.hlsl";
  local_2234 = "LIGHTS";
  local_2230 = &DAT_00a61fbc;
  local_222c = &DAT_00a8f7b8;
  local_2228 = &DAT_00a2f7ec;
  local_2224 = "PROJ_SHADOW";
  local_2220 = &DAT_00a2f7ec;
  local_221c = 0;
  _memset(local_2218,0,0x2c);
  local_21ec = "lighting\\2x\\p\\AD.p.hlsl";
  local_21e8 = "LIGHTS";
  local_21e4 = &DAT_00a61fb0;
  local_21e0 = 0;
  _memset(local_21dc,0,0x3c);
  local_21a0 = "lighting\\2x\\p\\AD.p.hlsl";
  local_219c = "LIGHTS";
  local_2198 = &DAT_00a61fb0;
  local_2194 = &DAT_00a8f7b8;
  local_2190 = &DAT_00a2f7ec;
  local_218c = 0;
  _memset(local_2188,0,0x34);
  local_2154 = "lighting\\2x\\p\\AD.p.hlsl";
  local_2150 = "LIGHTS";
  local_214c = &DAT_00a61fb0;
  local_2148 = "PROJ_SHADOW";
  local_2144 = &DAT_00a2f7ec;
  local_2140 = 0;
  _memset(local_213c,0,0x34);
  local_2108 = "lighting\\2x\\p\\AD.p.hlsl";
  local_2104 = "LIGHTS";
  local_2100 = &DAT_00a61fb0;
  local_20fc = &DAT_00a8f7b8;
  local_20f8 = &DAT_00a2f7ec;
  local_20f4 = "PROJ_SHADOW";
  local_20f0 = &DAT_00a2f7ec;
  local_20ec = 0;
  _memset(local_20e8,0,0x2c);
  local_20bc = "lighting\\2x\\p\\DiffusePt.p.hlsl";
  local_20b8 = "LIGHTS";
  local_20b4 = &DAT_00a61fbc;
  local_20b0 = 0;
  _memset(local_20ac,0,0x3c);
  local_2070 = "lighting\\2x\\p\\DiffusePt.p.hlsl";
  local_206c = "LIGHTS";
  local_2068 = &DAT_00a61fb0;
  local_2064 = 0;
  _memset(local_2060,0,0x3c);
  local_2024 = "lighting\\2x\\p\\Specular.p.hlsl";
  local_2020 = 0;
  _memset(local_201c,0,0x44);
  local_1fd8 = "lighting\\2x\\p\\Specular.p.hlsl";
  local_1fd4 = &DAT_00a3bc50;
  local_1fd0 = &DAT_00a2f7ec;
  local_1fcc = 0;
  _memset(local_1fc8,0,0x3c);
  local_1f8c = "lighting\\2x\\p\\Specular.p.hlsl";
  local_1f88 = "PROJ_SHADOW";
  local_1f84 = &DAT_00a2f7ec;
  local_1f80 = 0;
  _memset(local_1f7c,0,0x3c);
  local_1f40 = "lighting\\2x\\p\\Specular.p.hlsl";
  local_1f3c = "PROJ_SHADOW";
  local_1f38 = &DAT_00a2f7ec;
  local_1f34 = &DAT_00a3bc50;
  local_1f30 = &DAT_00a2f7ec;
  local_1f2c = 0;
  _memset(local_1f28,0,0x34);
  local_1ef4 = "lighting\\2x\\p\\Specular.p.hlsl";
  local_1ef0 = "POINT";
  local_1eec = &DAT_00a2f7ec;
  local_1ee8 = 0;
  _memset(local_1ee4,0,0x3c);
  local_1ea8 = "lighting\\2x\\p\\Specular.p.hlsl";
  local_1ea4 = "POINT";
  local_1ea0 = &DAT_00a2f7ec;
  local_1e9c = &DAT_00a3bc50;
  local_1e98 = &DAT_00a2f7ec;
  local_1e94 = 0;
  _memset(local_1e90,0,0x34);
  local_1e5c = "lighting\\2x\\p\\EnvMap.p.hlsl";
  local_1e58 = 0;
  _memset(local_1e54,0,0x44);
  local_1e10 = "lighting\\2x\\p\\EnvMap.p.hlsl";
  local_1e0c = "WINDOW";
  local_1e08 = &DAT_00a2f7ec;
  local_1e04 = 0;
  _memset(local_1e00,0,0x3c);
  local_1dc4 = "lighting\\2x\\p\\EnvMap.p.hlsl";
  local_1dc0 = &DAT_00a90be8;
  local_1dbc = 0;
  local_1db8 = 0;
  _memset(local_1db4,0,0x3c);
  local_1d68 = local_4d4;
  local_1d78 = "lighting\\2x\\p\\decal.p.hlsl";
  local_1d74 = "DECAL";
  local_1d70 = &DAT_00a2f7ec;
  local_1d6c = "MAXDECALS";
  local_1d64 = 0;
  _memset(local_1d60,0,0x34);
  local_1d14 = local_4d4;
  local_1d2c = "lighting\\2x\\p\\decal.p.hlsl";
  local_1d28 = "DECAL";
  local_1d24 = &DAT_00a2f7ec;
  local_1d20 = "ALPHA";
  local_1d1c = &DAT_00a2f7ec;
  local_1d18 = "MAXDECALS";
  local_1d10 = 0;
  _memset(local_1d0c,0,0x2c);
  local_1ce0 = "lighting\\2x\\p\\land.p.hlsl";
  local_1cdc = "PROJ_SHADOW";
  local_1cd8 = &DAT_00a2f7ec;
  local_1cd4 = 0;
  _memset(local_1cd0,0,0x3c);
  local_1c94 = "lighting\\2x\\p\\land.p.hlsl";
  local_1c90 = "PROJ_SHADOW";
  local_1c8c = &DAT_00a2f7ec;
  local_1c88 = "LANDALPHA";
  local_1c84 = &DAT_00a2f7ec;
  local_1c80 = 0;
  _memset(local_1c7c,0,0x34);
  local_1c48 = "lighting\\2x\\p\\landlighting.p.hlsl";
  local_1c44 = &DAT_00a7b010;
  local_1c40 = &DAT_00a2f7ec;
  local_1c3c = "PTLIGHT";
  local_1c38 = &DAT_00a2f7ec;
  local_1c34 = 0;
  _memset(local_1c30,0,0x34);
  local_1bfc = "lighting\\2x\\p\\landlighting.p.hlsl";
  local_1bf8 = "SPECULAR";
  local_1bf4 = &DAT_00a2f7ec;
  local_1bf0 = 0;
  _memset(local_1bec,0,0x3c);
  local_1bb0 = 0;
  _memset(local_1bac,0,0x48);
  local_1b64 = "lighting\\2x\\p\\landlighting.p.hlsl";
  local_1b60 = "LANDALPHA";
  local_1b5c = &DAT_00a2f7ec;
  local_1b58 = &DAT_00a7b010;
  local_1b54 = &DAT_00a2f7ec;
  local_1b50 = "PTLIGHT";
  local_1b4c = &DAT_00a2f7ec;
  local_1b48 = 0;
  _memset(local_1b44,0,0x2c);
  local_1b18 = "lighting\\2x\\p\\landlighting.p.hlsl";
  local_1b14 = "LANDALPHA";
  local_1b10 = &DAT_00a2f7ec;
  local_1b0c = "SPECULAR";
  local_1b08 = &DAT_00a2f7ec;
  local_1b04 = 0;
  _memset(local_1b00,0,0x34);
  local_1acc = 0;
  _memset(local_1ac8,0,0x48);
  local_1a80 = "lighting\\2x\\p\\landlighting.p.hlsl";
  local_1a7c = "SPECULAR";
  local_1a78 = &DAT_00a2f7ec;
  local_1a74 = "PROJ_SHADOW";
  local_1a70 = &DAT_00a2f7ec;
  local_1a6c = 0;
  _memset(local_1a68,0,0x34);
  local_1a34 = "lighting\\2x\\p\\landlighting.p.hlsl";
  local_1a30 = "LANDALPHA";
  local_1a2c = &DAT_00a2f7ec;
  local_1a28 = "SPECULAR";
  local_1a24 = &DAT_00a2f7ec;
  local_1a20 = "PROJ_SHADOW";
  local_1a1c = &DAT_00a2f7ec;
  local_1a18 = 0;
  _memset(local_1a14,0,0x2c);
  local_19e8 = "lighting\\2x\\p\\depthmap.p.hlsl";
  local_19e4 = "DEPTHMAP";
  local_19e0 = &DAT_00a2f7ec;
  local_19dc = 0;
  _memset(local_19d8,0,0x3c);
  local_199c = "lighting\\2x\\p\\depthmap.p.hlsl";
  local_1998 = "DEPTHMAP";
  local_1994 = &DAT_00a2f7ec;
  local_1990 = "ALPHATEST";
  local_198c = &DAT_00a2f7ec;
  local_1988 = 0;
  _memset(local_1984,0,0x34);
  local_1950 = "lighting\\2x\\p\\depthmap.p.hlsl";
  local_194c = "DEPTHMAP";
  local_1948 = &DAT_00a2f7ec;
  local_1944 = &DAT_00a90cc8;
  local_1940 = &DAT_00a2f7ec;
  local_193c = 0;
  _memset(local_1938,0,0x34);
  local_1904 = "lighting\\2x\\p\\depthmap.p.hlsl";
  local_1900 = "DEPTHMAP";
  local_18fc = &DAT_00a2f7ec;
  local_18f8 = &DAT_00a90cc8;
  local_18f4 = &DAT_00a2f7ec;
  local_18f0 = "ALPHATEST";
  local_18ec = &DAT_00a2f7ec;
  local_18e8 = 0;
  _memset(local_18e4,0,0x2c);
  local_18b8 = "lighting\\2x\\p\\depthmap.p.hlsl";
  local_18b4 = "DEPTHMAP";
  local_18b0 = &DAT_00a2f7ec;
  local_18ac = "WATERDEPTH";
  local_18a8 = &DAT_00a2f7ec;
  local_18a4 = 0;
  _memset(local_18a0,0,0x34);
  local_186c = "lighting\\2x\\p\\renderNormals.p.hlsl";
  local_1868 = 0;
  _memset(local_1864,0,0x44);
  local_1820 = "lighting\\2x\\p\\renderNormals.p.hlsl";
  local_181c = &DAT_00a90b00;
  local_1818 = &DAT_00a2f7ec;
  local_1814 = 0;
  _memset(local_1810,0,0x3c);
  local_17d4 = "lighting\\2x\\p\\renderNormals.p.hlsl";
  local_17d0 = "CLEAR";
  local_17cc = &DAT_00a2f7ec;
  local_17c8 = 0;
  _memset(local_17c4,0,0x3c);
  local_1788 = "lighting\\2x\\p\\land.p.hlsl";
  local_1784 = 0;
  _memset(local_1780,0,0x44);
  local_173c = "lighting\\2x\\p\\land.p.hlsl";
  local_1738 = "LANDALPHA";
  local_1734 = &DAT_00a2f7ec;
  local_1730 = 0;
  _memset(local_172c,0,0x3c);
  local_16f0 = "lighting\\2x\\p\\land.p.hlsl";
  local_16ec = "LANDALPHA";
  local_16e8 = &DAT_00a2f7ec;
  local_16e4 = "LANDLO";
  local_16e0 = &DAT_00a2f7ec;
  local_16dc = 0;
  _memset(local_16d8,0,0x34);
  local_16a4 = "lighting\\2x\\p\\land.p.hlsl";
  local_16a0 = &DAT_00a8f7b8;
  local_169c = &DAT_00a2f7ec;
  local_1698 = 0;
  _memset(local_1694,0,0x3c);
  local_1658 = "lighting\\2x\\p\\land.p.hlsl";
  local_1654 = "LANDALPHA";
  local_1650 = &DAT_00a2f7ec;
  local_164c = &DAT_00a8f7b8;
  local_1648 = &DAT_00a2f7ec;
  local_1644 = 0;
  _memset(local_1640,0,0x34);
  local_160c = "lighting\\2x\\p\\land.p.hlsl";
  local_1608 = "PTLIGHT";
  local_1604 = &DAT_00a2f7ec;
  local_1600 = 0;
  _memset(local_15fc,0,0x3c);
  local_15c0 = "lighting\\2x\\p\\land.p.hlsl";
  local_15bc = "LANDALPHA";
  local_15b8 = &DAT_00a2f7ec;
  local_15b4 = "PTLIGHT";
  local_15b0 = &DAT_00a2f7ec;
  local_15ac = 0;
  _memset(local_15a8,0,0x34);
  local_1574 = "lighting\\2x\\p\\localMap.p.hlsl";
  local_1570 = 0;
  _memset(local_156c,0,0x44);
  local_1528 = "lighting\\2x\\p\\localMap.p.hlsl";
  local_1524 = "CLEAR";
  local_1520 = &DAT_00a2f7ec;
  local_151c = 0;
  _memset(local_1518,0,0x3c);
  local_14dc = "lighting\\1x\\p\\texEffect.p.hlsl";
  local_14d8 = &DAT_00a90ed4;
  local_14d4 = &DAT_00a2f7ec;
  local_14d0 = 0;
  _memset(local_14cc,0,0x3c);
  local_1490 = "lighting\\2x\\p\\SimpleShadow.p.hlsl";
  local_148c = "SHADOWMAP";
  local_1488 = &DAT_00a2f7ec;
  local_1484 = "DEPTHBIAS";
  local_1480 = &DAT_00a90ec0;
  local_147c = "SAMPLE";
  local_1478 = &DAT_00a61fc8;
  local_1474 = "PASSES";
  local_1470 = &DAT_00a61fc8;
  local_146c = 0;
  local_1468 = 0;
  local_1464 = 0;
  local_1460 = 0;
  local_145c = 0;
  local_1458 = 0;
  local_1454 = 0;
  local_1450 = 0;
  local_144c = 0;
  local_1448 = 0;
  local_1444 = "lighting\\2x\\p\\SimpleShadow.p.hlsl";
  local_1440 = "SHADOWMAP";
  local_143c = &DAT_00a2f7ec;
  local_1438 = "DEPTHBIAS";
  local_1434 = &DAT_00a90ec0;
  local_1430 = "SAMPLE";
  local_142c = &DAT_00a61fc8;
  local_1428 = "PASSES";
  local_1424 = &DAT_00a61fc8;
  local_1420 = "ALPHATEST";
  local_141c = &DAT_00a2f7ec;
  local_1418 = 0;
  local_1414 = 0;
  local_1410 = 0;
  local_140c = 0;
  local_1408 = 0;
  local_1404 = 0;
  local_1400 = 0;
  local_13fc = 0;
  local_13f8 = "lighting\\2x\\p\\SimpleShadow.p.hlsl";
  local_13f4 = "SHADOWMAP";
  local_13f0 = &DAT_00a2f7ec;
  local_13ec = "DEPTHBIAS";
  local_13e8 = &DAT_00a90ec0;
  local_13e4 = "SAMPLE";
  local_13e0 = &DAT_00a61fa4;
  local_13dc = "PASSES";
  local_13d8 = &DAT_00a61fc8;
  local_13d4 = 0;
  local_13d0 = 0;
  local_13cc = 0;
  local_13c8 = 0;
  local_13c4 = 0;
  local_13c0 = 0;
  local_13bc = 0;
  local_13b8 = 0;
  local_13b4 = 0;
  local_13b0 = 0;
  local_13ac = "lighting\\2x\\p\\SimpleShadow.p.hlsl";
  local_13a8 = "SHADOWMAP";
  local_13a4 = &DAT_00a2f7ec;
  local_13a0 = "DEPTHBIAS";
  local_139c = &DAT_00a90ec0;
  local_1398 = "SAMPLE";
  local_1394 = &DAT_00a61fa4;
  local_1390 = "PASSES";
  local_138c = &DAT_00a61fc8;
  local_1388 = "ALPHATEST";
  local_1384 = &DAT_00a2f7ec;
  local_1380 = 0;
  local_137c = 0;
  local_1378 = 0;
  local_1374 = 0;
  local_1370 = 0;
  local_136c = 0;
  local_1368 = 0;
  local_1364 = 0;
  local_1360 = "lighting\\2x\\p\\SimpleShadow.p.hlsl";
  local_135c = "SHADOWMAP";
  local_1358 = &DAT_00a2f7ec;
  local_1354 = "DEPTHBIAS";
  local_1350 = &DAT_00a90ec0;
  local_134c = "SAMPLE";
  local_1348 = &DAT_00a61fa4;
  local_130c = &DAT_00a2f7ec;
  local_1304 = &DAT_00a90ec0;
  local_12ec = &DAT_00a2f7ec;
  local_1344 = "PASSES";
  local_1340 = &DAT_00a61fbc;
  local_133c = 0;
  local_1338 = 0;
  local_1334 = 0;
  local_1330 = 0;
  local_132c = 0;
  local_1328 = 0;
  local_1324 = 0;
  local_1320 = 0;
  local_131c = 0;
  local_1318 = 0;
  local_1314 = "lighting\\2x\\p\\SimpleShadow.p.hlsl";
  local_1310 = "SHADOWMAP";
  local_1308 = "DEPTHBIAS";
  local_1300 = "SAMPLE";
  local_12fc = &DAT_00a61fa4;
  local_12f8 = "PASSES";
  local_12f4 = &DAT_00a61fbc;
  local_12f0 = "ALPHATEST";
  local_12e8 = 0;
  local_12e4 = 0;
  local_12e0 = 0;
  local_12dc = 0;
  local_12d8 = 0;
  local_12d4 = 0;
  local_12d0 = 0;
  local_12cc = 0;
  iVar6 = 0;
  ppcVar5 = &local_12c8;
  do {
    if (*ppcVar5 != (char *)0x0) {
      FUN_00801030(*ppcVar5,local_3c8);
      _sprintf(local_4cc,"SLS1%03i.pso");
      local_2b2c[0] = (char **)FUN_00801c90(local_3c8,ppcVar5 + 1,"ps_2_0",local_4cc,0,1);
      ppcVar1 = (char **)(&DAT_00b45088)[iVar6];
      if (ppcVar1 != local_2b2c[0]) {
        if (((ppcVar1 != (char **)0x0) &&
            (LVar3 = InterlockedDecrement((LONG *)(ppcVar1 + 1)), LVar3 == 0)) &&
           (ppcVar1 != (char **)0x0)) {
          (**(code **)*ppcVar1)(1);
        }
        (&DAT_00b45088)[iVar6] = local_2b2c[0];
        if (local_2b2c[0] != (char **)0x0) {
          InterlockedIncrement((LONG *)(local_2b2c[0] + 1));
        }
      }
    }
    iVar6 = iVar6 + 1;
    ppcVar5 = ppcVar5 + 0x13;
  } while (iVar6 < 0x2f);
  iStack_2b24 = DAT_00b42f48;
  if (1 < DAT_00b42f48) {
    ppcVar5 = &local_2b20;
    iVar6 = 0;
    do {
      local_2b2c[0] = ppcVar5;
      if (*ppcVar5 == (char *)0x0) {
        puVar2 = (undefined4 *)(&DAT_00b45144)[iVar6];
        if (puVar2 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar2 + 1);
          if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          (&DAT_00b45144)[iVar6] = 0;
        }
      }
      else if ((iVar6 < 0x4e) || (4 < iStack_2b24)) {
        FUN_00801030(*ppcVar5,local_3c8);
        _sprintf(local_4cc,"SLS2%03i.pso");
        puVar4 = (undefined4 *)FUN_00801c90(local_3c8,ppcVar5 + 1,"ps_2_0",local_4cc,0,1);
        puVar2 = (undefined4 *)(&DAT_00b45144)[iVar6];
        if (puVar2 != puVar4) {
          if (((puVar2 != (undefined4 *)0x0) &&
              (LVar3 = InterlockedDecrement(puVar2 + 1), LVar3 == 0)) &&
             (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          (&DAT_00b45144)[iVar6] = puVar4;
          if (puVar4 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar4 + 1);
          }
        }
      }
      iVar6 = iVar6 + 1;
      ppcVar5 = local_2b2c[0] + 0x13;
    } while (iVar6 < 0x52);
  }
  return;
}


