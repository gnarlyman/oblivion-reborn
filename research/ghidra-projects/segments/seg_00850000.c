
void FUN_008500a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  LONG LVar8;
  undefined4 uVar9;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3428;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45ba4;
  iVar5 = FUN_007b4280((uint)param_4[7] >> 0x1c,uVar4);
  if (iVar5 == 0) {
    param_4 = (int *)DAT_00b430f4;
  }
  else if (DAT_00b430ad == '\0') {
    param_4 = (int *)DAT_00b430f4;
  }
  else {
    param_4 = (int *)FUN_00405a30();
  }
  DAT_00b464a4 = (float)piVar1[0x29] * DAT_00b464a4;
  iVar5 = **(int **)(iVar3 + 0x24);
  iVar6 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar2 = *(undefined4 **)(iVar5 + 4);
  if (puVar2 != puVar7) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar2 + 1), LVar8 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar9);
  }
  puVar2 = param_3;
  iVar6 = *(int *)(*(int *)(iVar3 + 0x24) + 0xc);
  puVar7 = *(undefined4 **)(iVar6 + 4);
  if (puVar7 != param_3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar7 + 1), LVar8 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar6 + 4) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_3 = (undefined4 *)iVar3;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(iVar5 + 0x38),&param_3);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + 1;
  *unaff_FS_OFFSET = in_ECX;
  return;
}



void FUN_00850270(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  LONG LVar8;
  undefined4 uVar9;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3428;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45ba8;
  iVar5 = FUN_007b4280((uint)param_4[7] >> 0x1c,uVar4);
  if (iVar5 == 0) {
    param_4 = (int *)DAT_00b430f4;
  }
  else if (DAT_00b430ad == '\0') {
    param_4 = (int *)DAT_00b430f4;
  }
  else {
    param_4 = (int *)FUN_00405a30();
  }
  DAT_00b464a4 = (float)piVar1[0x29] * DAT_00b464a4;
  iVar5 = **(int **)(iVar3 + 0x24);
  iVar6 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar2 = *(undefined4 **)(iVar5 + 4);
  if (puVar2 != puVar7) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar2 + 1), LVar8 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar9);
  }
  puVar2 = param_3;
  iVar6 = *(int *)(*(int *)(iVar3 + 0x24) + 0xc);
  puVar7 = *(undefined4 **)(iVar6 + 4);
  if (puVar7 != param_3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar7 + 1), LVar8 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar6 + 4) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_3 = (undefined4 *)iVar3;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(iVar5 + 0x38),&param_3);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + 1;
  *unaff_FS_OFFSET = in_ECX;
  return;
}



void FUN_00850440(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  LONG LVar8;
  undefined4 uVar9;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3428;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45bac;
  iVar5 = FUN_007b4280((uint)param_4[7] >> 0x1c,uVar4);
  if (iVar5 == 0) {
    param_4 = (int *)DAT_00b430f4;
  }
  else if (DAT_00b430ad == '\0') {
    param_4 = (int *)DAT_00b430f4;
  }
  else {
    param_4 = (int *)FUN_00405a30();
  }
  DAT_00b464a4 = (float)piVar1[0x29] * DAT_00b464a4;
  iVar5 = **(int **)(iVar3 + 0x24);
  iVar6 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar2 = *(undefined4 **)(iVar5 + 4);
  if (puVar2 != puVar7) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar2 + 1), LVar8 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar9);
  }
  puVar2 = param_3;
  iVar6 = *(int *)(*(int *)(iVar3 + 0x24) + 0xc);
  puVar7 = *(undefined4 **)(iVar6 + 4);
  if (puVar7 != param_3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar7 + 1), LVar8 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar6 + 4) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_3 = (undefined4 *)iVar3;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(iVar5 + 0x38),&param_3);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + 1;
  *unaff_FS_OFFSET = in_ECX;
  return;
}



void FUN_00850610(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3458;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar2 = DAT_00b45be0;
  param_3 = DAT_00b45be0;
  if (DAT_00b45be0 != 0) {
    *(int *)(DAT_00b45be0 + 0x60) = *(int *)(DAT_00b45be0 + 0x60) + 1;
  }
  local_4 = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0(uVar3);
    }
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008506b0(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45be4;
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar2 = **(int **)(iVar4 + 0x24);
  param_3 = iVar2;
  puVar6 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar5);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(param_2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_2 = iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_2);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_008507a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3458;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar2 = DAT_00b45be8;
  param_3 = DAT_00b45be8;
  if (DAT_00b45be8 != 0) {
    *(int *)(DAT_00b45be8 + 0x60) = *(int *)(DAT_00b45be8 + 0x60) + 1;
  }
  local_4 = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0(uVar3);
    }
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00850840(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45bec;
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar2 = **(int **)(iVar4 + 0x24);
  param_3 = iVar2;
  puVar6 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar5);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(param_2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_2 = iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_2);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_00850930(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45c18;
  FUN_00848da0(*(undefined4 *)((int)param_3 + 0x10));
  piVar1 = (int *)**(int **)(iVar3 + 0x24);
  param_3 = piVar1;
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0,uVar4);
  puVar2 = (undefined4 *)piVar1[1];
  if (puVar2 != puVar5) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar2 + 1), LVar6 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_3 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_3 = (int *)iVar3;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_00850a40(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45c1c;
  FUN_00848da0(*(undefined4 *)((int)param_3 + 0x10));
  piVar1 = (int *)**(int **)(iVar3 + 0x24);
  param_3 = piVar1;
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0,uVar4);
  puVar2 = (undefined4 *)piVar1[1];
  if (puVar2 != puVar5) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar2 + 1), LVar6 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_3 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_3 = (int *)iVar3;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_00850b50(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d34e8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b455c8;
  local_10 = DAT_00b455c8;
  if (DAT_00b455c8 != 0) {
    *(int *)(DAT_00b455c8 + 0x60) = *(int *)(DAT_00b455c8 + 0x60) + 1;
  }
  local_4 = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&local_10);
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0(uVar3);
    }
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00850be0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d34e8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b455cc;
  local_10 = DAT_00b455cc;
  if (DAT_00b455cc != 0) {
    *(int *)(DAT_00b455cc + 0x60) = *(int *)(DAT_00b455cc + 0x60) + 1;
  }
  local_4 = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&local_10);
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0(uVar3);
    }
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00850c70(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3488;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar9 = (uint)*(byte *)(DAT_00b42eb8 + 9);
  iVar2 = **(int **)(DAT_00b456c0 + 0x24);
  puVar4 = (undefined4 *)(**(code **)(*param_4 + 0x88))(uVar9,uVar3);
  puVar8 = *(undefined4 **)(iVar2 + 4);
  if (puVar8 != puVar4) {
    if (((puVar8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0)) &&
       (puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if ((iVar2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar2 = *(int *)(*(int *)(uVar9 + 0x24) + 4);
  param_3 = iVar2;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(iStack_2c);
  if (iVar7 == 0) {
    puVar8 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar8 = DAT_00b430dc;
    }
  }
  else {
    puVar8 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(iStack_2c);
  }
  puVar4 = *(undefined4 **)(iVar2 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar4 + 1), LVar5 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  uVar6 = 0;
  if (iStack_2c == 4) {
    uStack_30 = 0x3f800000;
LAB_00850dfc:
    uVar11 = 0;
    if (iStack_2c != 2) goto LAB_00850ded;
    uVar10 = 0x3f800000;
  }
  else {
    uStack_30 = 0;
    if (iStack_2c != 3) goto LAB_00850dfc;
    uVar11 = 0x3f800000;
LAB_00850ded:
    uVar6 = 0x3f800000;
    uVar10 = 0;
    if (iStack_2c != 1) {
      uVar6 = 0;
    }
  }
  FUN_007ecae0(2,uVar6,uVar10,uVar11,uStack_30);
  if (iStack_2c == 8) {
    uVar6 = 0x3f800000;
LAB_00850e90:
    uVar10 = 0;
    uVar11 = 0;
    if (iStack_2c == 6) {
      uStack_30 = 0x3f800000;
      goto LAB_00850ea3;
    }
  }
  else {
    uVar6 = 0;
    if (iStack_2c != 7) goto LAB_00850e90;
    uVar11 = 0x3f800000;
  }
  uVar10 = 0x3f800000;
  uStack_30 = 0;
  if (iStack_2c != 5) {
    uVar10 = 0;
  }
LAB_00850ea3:
  FUN_007ecae0(3,uVar10,uStack_30,uVar11,uVar6);
  if ((char)param_3 != '\0') {
    *(int *)(iStack_2c + 0x60) = *(int *)(iStack_2c + 0x60) + 1;
    local_c = 0;
    FUN_0076ce40(*(undefined4 *)(uVar9 + 0x38),&param_3);
    piVar1 = (int *)(iStack_2c + 0x60);
    *piVar1 = *piVar1 + -1;
    local_c = -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(uVar9 + 0x38) = *(int *)(uVar9 + 0x38) + 1;
  }
  *unaff_FS_OFFSET = iStack_14;
  return;
}



void FUN_00850f60(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3488;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar9 = (uint)*(byte *)(DAT_00b42eb8 + 9);
  iVar2 = **(int **)(DAT_00b45b58 + 0x24);
  puVar4 = (undefined4 *)(**(code **)(*param_4 + 0x88))(uVar9,uVar3);
  puVar8 = *(undefined4 **)(iVar2 + 4);
  if (puVar8 != puVar4) {
    if (((puVar8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0)) &&
       (puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if ((iVar2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar2 = *(int *)(*(int *)(uVar9 + 0x24) + 4);
  param_3 = iVar2;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(iStack_2c);
  if (iVar7 == 0) {
    puVar8 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar8 = DAT_00b430dc;
    }
  }
  else {
    puVar8 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(iStack_2c);
  }
  puVar4 = *(undefined4 **)(iVar2 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar4 + 1), LVar5 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  uVar6 = 0;
  if (iStack_2c == 4) {
    uStack_30 = 0x3f800000;
LAB_008510ec:
    uVar11 = 0;
    if (iStack_2c != 2) goto LAB_008510dd;
    uVar10 = 0x3f800000;
  }
  else {
    uStack_30 = 0;
    if (iStack_2c != 3) goto LAB_008510ec;
    uVar11 = 0x3f800000;
LAB_008510dd:
    uVar6 = 0x3f800000;
    uVar10 = 0;
    if (iStack_2c != 1) {
      uVar6 = 0;
    }
  }
  FUN_007ecae0(2,uVar6,uVar10,uVar11,uStack_30);
  if (iStack_2c == 8) {
    uVar6 = 0x3f800000;
LAB_00851180:
    uVar10 = 0;
    uVar11 = 0;
    if (iStack_2c == 6) {
      uStack_30 = 0x3f800000;
      goto LAB_00851193;
    }
  }
  else {
    uVar6 = 0;
    if (iStack_2c != 7) goto LAB_00851180;
    uVar11 = 0x3f800000;
  }
  uVar10 = 0x3f800000;
  uStack_30 = 0;
  if (iStack_2c != 5) {
    uVar10 = 0;
  }
LAB_00851193:
  FUN_007ecae0(3,uVar10,uStack_30,uVar11,uVar6);
  if ((char)param_3 != '\0') {
    *(int *)(iStack_2c + 0x60) = *(int *)(iStack_2c + 0x60) + 1;
    local_c = 0;
    FUN_0076ce40(*(undefined4 *)(uVar9 + 0x38),&param_3);
    piVar1 = (int *)(iStack_2c + 0x60);
    *piVar1 = *piVar1 + -1;
    local_c = -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(uVar9 + 0x38) = *(int *)(uVar9 + 0x38) + 1;
  }
  *unaff_FS_OFFSET = iStack_14;
  return;
}



void FUN_00851250(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  undefined4 uVar9;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar10;
  undefined4 uVar11;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3338;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45b54;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  uVar6 = (uint)*(byte *)(DAT_00b42eb8 + 9);
  iVar2 = **(int **)(iVar4 + 0x24);
  param_3 = iVar2;
  puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x88))(uVar6,uVar5);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar9);
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x90))(unaff_EBX);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar9);
  }
  uVar9 = 0;
  if (unaff_EBP == 4) {
    uVar11 = 0x3f800000;
LAB_008513cc:
    uVar10 = 0;
    if (unaff_EBP != 2) goto LAB_008513bd;
    param_2 = 0x3f800000;
  }
  else {
    uVar11 = 0;
    if (unaff_EBP != 3) goto LAB_008513cc;
    uVar10 = 0x3f800000;
LAB_008513bd:
    uVar9 = 0x3f800000;
    param_2 = 0;
    if (unaff_EBP != 1) {
      uVar9 = 0;
    }
  }
  FUN_007ecae0(2,uVar9,param_2,uVar10,uVar11);
  if (unaff_EBP == 8) {
    uVar9 = 0x3f800000;
LAB_00851460:
    uVar10 = 0;
    uVar11 = 0;
    if (unaff_EBP == 6) {
      param_2 = 0x3f800000;
      goto LAB_00851473;
    }
  }
  else {
    uVar9 = 0;
    if (unaff_EBP != 7) goto LAB_00851460;
    uVar11 = 0x3f800000;
  }
  uVar10 = 0x3f800000;
  param_2 = 0;
  if (unaff_EBP != 5) {
    uVar10 = 0;
  }
LAB_00851473:
  FUN_007ecae0(3,uVar10,param_2,uVar11,uVar9);
  if ((char)param_3 != '\0') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    param_3 = iVar4;
    local_c = 0;
    FUN_0076ce40(*(undefined4 *)(uVar6 + 0x38),&param_3);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    local_c = -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(uVar6 + 0x38) = *(int *)(uVar6 + 0x38) + 1;
  }
  *unaff_FS_OFFSET = iStack_14;
  return;
}



void FUN_00851520(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  undefined4 uVar9;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar10;
  undefined4 uVar11;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3338;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45b60;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  uVar6 = (uint)*(byte *)(DAT_00b42eb8 + 9);
  iVar2 = **(int **)(iVar4 + 0x24);
  param_3 = iVar2;
  puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x88))(uVar6,uVar5);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar9);
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x90))(unaff_EBX);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar9);
  }
  uVar9 = 0;
  if (unaff_EBP == 4) {
    uVar11 = 0x3f800000;
LAB_0085169c:
    uVar10 = 0;
    if (unaff_EBP != 2) goto LAB_0085168d;
    param_2 = 0x3f800000;
  }
  else {
    uVar11 = 0;
    if (unaff_EBP != 3) goto LAB_0085169c;
    uVar10 = 0x3f800000;
LAB_0085168d:
    uVar9 = 0x3f800000;
    param_2 = 0;
    if (unaff_EBP != 1) {
      uVar9 = 0;
    }
  }
  FUN_007ecae0(2,uVar9,param_2,uVar10,uVar11);
  if (unaff_EBP == 8) {
    uVar9 = 0x3f800000;
LAB_00851730:
    uVar10 = 0;
    uVar11 = 0;
    if (unaff_EBP == 6) {
      param_2 = 0x3f800000;
      goto LAB_00851743;
    }
  }
  else {
    uVar9 = 0;
    if (unaff_EBP != 7) goto LAB_00851730;
    uVar11 = 0x3f800000;
  }
  uVar10 = 0x3f800000;
  param_2 = 0;
  if (unaff_EBP != 5) {
    uVar10 = 0;
  }
LAB_00851743:
  FUN_007ecae0(3,uVar10,param_2,uVar11,uVar9);
  if ((char)param_3 != '\0') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    param_3 = iVar4;
    local_c = 0;
    FUN_0076ce40(*(undefined4 *)(uVar6 + 0x38),&param_3);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    local_c = -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(uVar6 + 0x38) = *(int *)(uVar6 + 0x38) + 1;
  }
  *unaff_FS_OFFSET = iStack_14;
  return;
}



void FUN_008517f0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int unaff_EBX;
  int unaff_EBP;
  uint *unaff_FS_OFFSET;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d34b8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (uint)&local_c;
  iVar5 = DAT_00b45b40;
  bVar2 = *(byte *)(DAT_00b42eb8 + 9);
  iVar3 = **(int **)(DAT_00b45b40 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x88))((uint)bVar2,uVar6);
  puVar11 = *(undefined4 **)(iVar3 + 4);
  if (puVar11 != puVar7) {
    if (((puVar11 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar11 + 1), LVar8 == 0))
       && (puVar11 != (undefined4 *)0x0)) {
      (**(code **)*puVar11)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar9);
  }
  iVar4 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iVar10 = (**(code **)(*piVar1 + 0x8c))(iVar3);
  if (iVar10 == 0) {
    puVar11 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar11 = DAT_00b430dc;
    }
  }
  else {
    puVar11 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(iVar3);
  }
  puVar7 = *(undefined4 **)(iVar4 + 4);
  if (puVar7 != puVar11) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar7 + 1), LVar8 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(unaff_EBP + 4) = puVar11;
    if (puVar11 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar11 + 1);
    }
  }
  if ((unaff_EBP != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar9);
  }
  if ((char)param_3 != '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    param_3 = iVar5;
    local_c = 0;
    FUN_0076ce40(*(undefined4 *)(iVar3 + 0x38),&param_3);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    local_c = 0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + 1;
  }
  *unaff_FS_OFFSET = (uint)bVar2;
  return;
}



void FUN_008519b0(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3488;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar9 = (uint)*(byte *)(DAT_00b42eb8 + 9);
  iVar2 = **(int **)(DAT_00b45b64 + 0x24);
  puVar4 = (undefined4 *)(**(code **)(*param_4 + 0x88))(uVar9,uVar3);
  puVar8 = *(undefined4 **)(iVar2 + 4);
  if (puVar8 != puVar4) {
    if (((puVar8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0)) &&
       (puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if ((iVar2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar2 = *(int *)(*(int *)(uVar9 + 0x24) + 4);
  param_3 = iVar2;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(iStack_2c);
  if (iVar7 == 0) {
    puVar8 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar8 = DAT_00b430dc;
    }
  }
  else {
    puVar8 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(iStack_2c);
  }
  puVar4 = *(undefined4 **)(iVar2 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar4 + 1), LVar5 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  uVar6 = 0;
  if (iStack_2c == 4) {
    uStack_30 = 0x3f800000;
LAB_00851b3c:
    uVar11 = 0;
    if (iStack_2c != 2) goto LAB_00851b2d;
    uVar10 = 0x3f800000;
  }
  else {
    uStack_30 = 0;
    if (iStack_2c != 3) goto LAB_00851b3c;
    uVar11 = 0x3f800000;
LAB_00851b2d:
    uVar6 = 0x3f800000;
    uVar10 = 0;
    if (iStack_2c != 1) {
      uVar6 = 0;
    }
  }
  FUN_007ecae0(2,uVar6,uVar10,uVar11,uStack_30);
  if (iStack_2c == 8) {
    uVar6 = 0x3f800000;
LAB_00851bd0:
    uVar10 = 0;
    uVar11 = 0;
    if (iStack_2c == 6) {
      uStack_30 = 0x3f800000;
      goto LAB_00851be3;
    }
  }
  else {
    uVar6 = 0;
    if (iStack_2c != 7) goto LAB_00851bd0;
    uVar11 = 0x3f800000;
  }
  uVar10 = 0x3f800000;
  uStack_30 = 0;
  if (iStack_2c != 5) {
    uVar10 = 0;
  }
LAB_00851be3:
  FUN_007ecae0(3,uVar10,uStack_30,uVar11,uVar6);
  if ((char)param_3 != '\0') {
    *(int *)(iStack_2c + 0x60) = *(int *)(iStack_2c + 0x60) + 1;
    local_c = 0;
    FUN_0076ce40(*(undefined4 *)(uVar9 + 0x38),&param_3);
    piVar1 = (int *)(iStack_2c + 0x60);
    *piVar1 = *piVar1 + -1;
    local_c = -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(uVar9 + 0x38) = *(int *)(uVar9 + 0x38) + 1;
  }
  *unaff_FS_OFFSET = iStack_14;
  return;
}



void FUN_00851ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45bd0;
  iVar2 = param_4[0x38];
  if (iVar2 != 0) {
    iVar3 = **(int **)(DAT_00b45bd0 + 0x24);
    iVar6 = (**(code **)(*param_4 + 0x8c))(0,uVar5);
    if (iVar6 == 0) {
      uVar7 = DAT_00b430f0;
      if ((piVar1[7] & 0x80U) == 0) {
        uVar7 = DAT_00b430dc;
      }
    }
    else {
      uVar7 = (**(code **)(*piVar1 + 0x8c))(0);
    }
    FUN_0076c910(uVar7);
    if ((iVar3 != 0) && (DAT_00b42cdd != '\0')) {
      uVar7 = (**(code **)(*piVar1 + 0x78))();
      FUN_007715e0(uVar7);
    }
    iVar3 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
    iVar6 = DAT_00b43120;
    if (*(int *)(iVar2 + 8) != 0) {
      iVar6 = *(int *)(iVar2 + 8);
    }
    FUN_0076c910(iVar6);
    FUN_007715e0(3);
    if ((iVar3 != 0) && (DAT_00b42cdd != '\0')) {
      uVar7 = (**(code **)(*piVar1 + 0x78))();
      FUN_007715e0(uVar7);
    }
    uVar7 = *(undefined4 *)(iVar2 + 0x5c);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar8 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar8;
    }
    FUN_00772cd0(0x13,uVar7,0);
    uVar7 = *(undefined4 *)(iVar2 + 0x60);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar8 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar8;
    }
    FUN_00772cd0(0x14,uVar7,0);
    uVar7 = *(undefined4 *)(iVar2 + 100);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar8 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar8;
    }
    FUN_00772cd0(0xab,uVar7,1);
    uVar7 = *(undefined4 *)(iVar2 + 0x68);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar8 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar8;
    }
    FUN_00772cd0(0x17,uVar7,0);
    FUN_007d1c90(param_1,piVar1);
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    param_4 = (int *)iVar4;
    uStack_4 = 0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_4);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    uStack_4 = 0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00851e70(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45bd4;
  iVar2 = param_4[0x38];
  if (iVar2 != 0) {
    iVar3 = **(int **)(DAT_00b45bd4 + 0x24);
    iVar6 = (**(code **)(*param_4 + 0x8c))(0,uVar5);
    if (iVar6 == 0) {
      uVar7 = DAT_00b430f0;
      if ((piVar1[7] & 0x80U) == 0) {
        uVar7 = DAT_00b430dc;
      }
    }
    else {
      uVar7 = (**(code **)(*piVar1 + 0x8c))(0);
    }
    FUN_0076c910(uVar7);
    if ((iVar3 != 0) && (DAT_00b42cdd != '\0')) {
      uVar7 = (**(code **)(*piVar1 + 0x78))();
      FUN_007715e0(uVar7);
    }
    iVar3 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
    iVar6 = DAT_00b43120;
    if (*(int *)(iVar2 + 8) != 0) {
      iVar6 = *(int *)(iVar2 + 8);
    }
    FUN_0076c910(iVar6);
    if ((iVar3 != 0) && (DAT_00b42cdd != '\0')) {
      uVar7 = (**(code **)(*piVar1 + 0x78))();
      FUN_007715e0(uVar7);
    }
    uVar7 = *(undefined4 *)(iVar2 + 0x5c);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar8 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar8;
    }
    FUN_00772cd0(0x13,uVar7,0);
    uVar7 = *(undefined4 *)(iVar2 + 0x60);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar8 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar8;
    }
    FUN_00772cd0(0x14,uVar7,0);
    uVar7 = *(undefined4 *)(iVar2 + 100);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar8 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar8;
    }
    FUN_00772cd0(0xab,uVar7,1);
    uVar7 = *(undefined4 *)(iVar2 + 0x68);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar8 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar8;
    }
    FUN_00772cd0(0x17,uVar7,0);
    FUN_007d1c90(param_1,piVar1);
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    param_4 = (int *)iVar4;
    uStack_4 = 0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_4);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    uStack_4 = 0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00852030(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d34e8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b455a0;
  local_10 = DAT_00b455a0;
  if (DAT_00b455a0 != 0) {
    *(int *)(DAT_00b455a0 + 0x60) = *(int *)(DAT_00b455a0 + 0x60) + 1;
  }
  local_4 = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&local_10);
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0(uVar3);
    }
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008520c0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d34e8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b455a8;
  local_10 = DAT_00b455a8;
  if (DAT_00b455a8 != 0) {
    *(int *)(DAT_00b455a8 + 0x60) = *(int *)(DAT_00b455a8 + 0x60) + 1;
  }
  local_4 = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&local_10);
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0(uVar3);
    }
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00852150(undefined4 param_1,undefined4 param_2,short *param_3,int param_4,
                 undefined1 *param_5,char param_6,char param_7,char param_8,char param_9)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3573;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_6 == '\0') {
    if (param_7 == '\0') {
      if (param_8 == '\0') {
        if (param_9 == '\0') {
          if ((char)param_4 != '\x01') goto LAB_00852441;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 3;
          if (param_4 == 0) goto LAB_00852424;
          param_4 = FUN_007e2370(param_4,param_1,0x10,1,1,param_2);
        }
        else {
          if ((char)param_4 != '\x01') goto LAB_00852441;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 4;
          if (param_4 == 0) goto LAB_00852424;
          param_4 = FUN_007e2370(param_4,param_1,0x18,1,1,param_2);
        }
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_00852441;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 2;
        if (param_4 == 0) goto LAB_00852424;
        param_4 = FUN_007e2370(param_4,param_1,0x11,1,1,param_2);
      }
    }
    else if (param_8 == '\0') {
      if ((char)param_4 != '\x01') goto LAB_00852441;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 1;
      if (param_4 == 0) goto LAB_00852424;
      param_4 = FUN_007e2370(param_4,param_1,0x12,1,1,param_2);
    }
    else {
      if ((char)param_4 != '\x01') {
LAB_00852441:
        *param_3 = *param_3 + 1;
        goto LAB_00852449;
      }
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (param_4 == 0) {
LAB_00852424:
        param_4 = 0;
      }
      else {
        param_4 = FUN_007e2370(param_4,param_1,0x13,1,1,param_2);
      }
    }
  }
  else if (param_7 == '\0') {
    if (param_8 == '\0') {
      if ((char)param_4 != '\x01') goto LAB_00852441;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 8;
      if (param_4 == 0) goto LAB_00852424;
      param_4 = FUN_007e2370(param_4,param_1,0x14,1,1,param_2);
    }
    else {
      if ((char)param_4 != '\x01') goto LAB_00852441;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 7;
      if (param_4 == 0) goto LAB_00852424;
      param_4 = FUN_007e2370(param_4,param_1,0x15,1,1,param_2);
    }
  }
  else if (param_8 == '\0') {
    if ((char)param_4 != '\x01') goto LAB_00852441;
    param_4 = FUN_00401f00(0x10,uVar1);
    local_4 = 6;
    if (param_4 == 0) goto LAB_00852424;
    param_4 = FUN_007e2370(param_4,param_1,0x16,1,1,param_2);
  }
  else {
    if ((char)param_4 != '\x01') goto LAB_00852441;
    param_4 = FUN_00401f00(0x10,uVar1);
    local_4 = 5;
    if (param_4 == 0) goto LAB_00852424;
    param_4 = FUN_007e2370(param_4,param_1,0x17,1,1,param_2);
  }
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_4);
LAB_00852449:
  *param_5 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00852470(undefined4 param_1,undefined4 param_2,short *param_3,int param_4,
                 undefined1 *param_5,char param_6,char param_7,char param_8,char param_9,
                 char param_10,char param_11,char param_12)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3774;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_6 != '\0') {
    if (param_7 == '\0') {
      if (param_8 == '\0') {
        if (param_9 != '\0') {
          if (param_10 == '\0') {
            if (param_11 != '\0') {
              if (DAT_00b42e8c != (code *)0x0) {
                (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_SFgVc ( skinned & facegenblend & vertexcolors )"
                                ,0);
              }
              goto LAB_00853561;
            }
            if ((char)param_4 != '\x01') goto LAB_00853559;
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 0x27;
            if (param_4 == 0) goto LAB_0085353c;
            param_4 = FUN_007e2370(param_4,param_1,0x28,1,1,param_2);
          }
          else {
            if (param_11 != '\0') {
              if (DAT_00b42e8c != (code *)0x0) {
                (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_SFFgVc ( skinned & fog & facegenblend & vertexcolors )"
                                ,0);
              }
              goto LAB_00853561;
            }
            if ((char)param_4 != '\x01') goto LAB_00853559;
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 0x26;
            if (param_4 == 0) goto LAB_0085353c;
            param_4 = FUN_007e2370(param_4,param_1,0x44,1,1,param_2);
          }
          goto LAB_0085353e;
        }
        if (param_10 == '\0') {
          if (param_11 == '\0') {
            if ((char)param_4 != '\x01') goto LAB_00853559;
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 0x2a;
            if (param_4 == 0) goto LAB_0085353c;
            param_4 = FUN_007e2370(param_4,param_1,0x24,1,1,param_2);
          }
          else {
            if ((char)param_4 != '\x01') goto LAB_00853559;
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 0x2b;
            if (param_4 == 0) goto LAB_0085353c;
            param_4 = FUN_007e2370(param_4,param_1,0x25,1,1,param_2);
          }
        }
        else if (param_11 == '\0') {
          if ((char)param_4 != '\x01') goto LAB_00853559;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x28;
          if (param_4 == 0) goto LAB_0085353c;
          param_4 = FUN_007e2370(param_4,param_1,0x3e,1,1,param_2);
        }
        else {
          if ((char)param_4 != '\x01') goto LAB_00853559;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x29;
          if (param_4 == 0) goto LAB_0085353c;
          param_4 = FUN_007e2370(param_4,param_1,0x3f,1,1,param_2);
        }
        goto LAB_0085353e;
      }
      if (param_9 != '\0') {
        if (param_10 == '\0') {
          if (param_11 == '\0') {
            if (DAT_00b42e8c != (code *)0x0) {
              (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_SFgG ( skinned & glowmap & facegenblend )"
                              ,0);
            }
          }
          else if (DAT_00b42e8c != (code *)0x0) {
            (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_SFgGVc ( skinned & glowmap & facegenblend & vertexcolors )"
                            ,0);
          }
        }
        else if (param_11 == '\0') {
          if (DAT_00b42e8c != (code *)0x0) {
            (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_SFFgG ( skinned & fog & glowmap & facegenblend )"
                            ,0);
          }
        }
        else if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_SFFgGVc ( skinned & fog & glowmap & facegenblend & vertexcolors )"
                          ,0);
        }
        goto LAB_00853561;
      }
      if (param_10 == '\0') {
        if (param_11 == '\0') {
          if ((char)param_4 != '\x01') goto LAB_00853559;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x24;
          if (param_4 == 0) goto LAB_0085353c;
          param_4 = FUN_007e2370(param_4,param_1,0x26,1,1,param_2);
        }
        else {
          if ((char)param_4 != '\x01') goto LAB_00853559;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x25;
          if (param_4 == 0) goto LAB_0085353c;
          param_4 = FUN_007e2370(param_4,param_1,0x27,1,1,param_2);
        }
      }
      else if (param_11 == '\0') {
        if ((char)param_4 != '\x01') goto LAB_00853559;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x22;
        if (param_4 == 0) goto LAB_0085353c;
        param_4 = FUN_007e2370(param_4,param_1,0x40,1,1,param_2);
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_00853559;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x23;
        if (param_4 == 0) goto LAB_0085353c;
        param_4 = FUN_007e2370(param_4,param_1,0x41,1,1,param_2);
      }
      goto LAB_0085353e;
    }
    if (param_8 == '\0') {
      if (param_9 != '\0') {
        if (param_10 != '\0') {
          if (param_11 == '\0') {
            if (DAT_00b42e8c != (code *)0x0) {
              (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_SFFgA ( skinned & fog & facegenblend & alpha )"
                              ,0);
            }
          }
          else if (DAT_00b42e8c != (code *)0x0) {
            (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_SFFgAVc ( skinned & fog & facegenblend & alpha & vertexcolors )"
                            ,0);
          }
          goto LAB_00853561;
        }
        if (param_11 != '\0') {
          if (DAT_00b42e8c != (code *)0x0) {
            (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_SFgAVc ( skinned & facegenblend & alpha & vertexcolors )"
                            ,0);
          }
          goto LAB_00853561;
        }
        if ((char)param_4 == '\x01') {
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x1d;
          if (param_4 == 0) goto LAB_0085353c;
          param_4 = FUN_007e2370(param_4,param_1,0x2d,1,1,param_2);
          goto LAB_0085353e;
        }
        goto LAB_00853559;
      }
      if (param_10 == '\0') {
        if (param_11 == '\0') {
          if ((char)param_4 != '\x01') goto LAB_00853559;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x20;
          if (param_4 == 0) goto LAB_0085353c;
          param_4 = FUN_007e2370(param_4,param_1,0x29,1,1,param_2);
        }
        else {
          if ((char)param_4 != '\x01') goto LAB_00853559;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x21;
          if (param_4 == 0) goto LAB_0085353c;
          param_4 = FUN_007e2370(param_4,param_1,0x2a,1,1,param_2);
        }
      }
      else if (param_11 == '\0') {
        if ((char)param_4 != '\x01') goto LAB_00853559;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x1e;
        if (param_4 == 0) goto LAB_0085353c;
        param_4 = FUN_007e2370(param_4,param_1,0x42,1,1,param_2);
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_00853559;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x1f;
        if (param_4 == 0) goto LAB_0085353c;
        param_4 = FUN_007e2370(param_4,param_1,0x43,1,1,param_2);
      }
      goto LAB_0085353e;
    }
    if (param_9 != '\0') {
      if (param_10 == '\0') {
        if (param_11 != '\0') {
          if (DAT_00b42e8c != (code *)0x0) {
            (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_SGFgAVc ( skinned & glow & facegenblend & alpha & vertexcolors )"
                            ,0);
          }
          goto LAB_00853561;
        }
        if ((char)param_4 != '\x01') goto LAB_00853559;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x18;
        if (param_4 == 0) goto LAB_0085353c;
        param_4 = FUN_007e2370(param_4,param_1,0x2e,1,1,param_2);
      }
      else {
        if (param_11 != '\0') {
          if (DAT_00b42e8c != (code *)0x0) {
            (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_SFGFgAVc ( skinned & fog & glow & facegenblend & alpha & vertexcolors )"
                            ,0);
          }
          goto LAB_00853561;
        }
        if ((char)param_4 != '\x01') goto LAB_00853559;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x17;
        if (param_4 == 0) goto LAB_0085353c;
        param_4 = FUN_007e2370(param_4,param_1,0x47,1,1,param_2);
      }
      goto LAB_0085353e;
    }
    if (param_10 == '\0') {
      if (param_11 == '\0') {
        if ((char)param_4 != '\x01') goto LAB_00853559;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x1b;
        if (param_4 == 0) goto LAB_0085353c;
        param_4 = FUN_007e2370(param_4,param_1,0x2b,1,1,param_2);
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_00853559;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x1c;
        if (param_4 == 0) goto LAB_0085353c;
        param_4 = FUN_007e2370(param_4,param_1,0x2c,1,1,param_2);
      }
    }
    else if (param_11 == '\0') {
      if ((char)param_4 != '\x01') goto LAB_00853559;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 0x19;
      if (param_4 == 0) goto LAB_0085353c;
      param_4 = FUN_007e2370(param_4,param_1,0x45,1,1,param_2);
    }
    else {
      if ((char)param_4 != '\x01') goto LAB_00853559;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 0x1a;
      if (param_4 == 0) goto LAB_0085353c;
      param_4 = FUN_007e2370(param_4,param_1,0x46,1,1,param_2);
    }
    goto LAB_0085353e;
  }
  if (param_7 == '\0') {
    if (param_8 == '\0') {
      if (param_9 == '\0') {
        if (param_10 == '\0') {
          if (param_11 == '\0') {
            if ((char)param_4 != '\x01') goto LAB_00853559;
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 0x14;
            if (param_4 == 0) goto LAB_0085353c;
            param_4 = FUN_007e2370(param_4,param_1,0x19,1,1,param_2);
          }
          else if (param_12 == '\0') {
            if ((char)param_4 != '\x01') goto LAB_00853559;
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 0x15;
            if (param_4 == 0) goto LAB_0085353c;
            param_4 = FUN_007e2370(param_4,param_1,0x1a,1,1,param_2);
          }
          else {
            if ((char)param_4 != '\x01') goto LAB_00853559;
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 0x16;
            if (param_4 == 0) goto LAB_0085353c;
            param_4 = FUN_007e2370(param_4,param_1,0x2f,1,1,param_2);
          }
        }
        else if (param_11 == '\0') {
          if ((char)param_4 != '\x01') goto LAB_00853559;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x11;
          if (param_4 == 0) goto LAB_0085353c;
          param_4 = FUN_007e2370(param_4,param_1,0x34,1,1,param_2);
        }
        else if (param_12 == '\0') {
          if ((char)param_4 != '\x01') goto LAB_00853559;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x12;
          if (param_4 == 0) goto LAB_0085353c;
          param_4 = FUN_007e2370(param_4,param_1,0x35,1,1,param_2);
        }
        else {
          if ((char)param_4 != '\x01') goto LAB_00853559;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x13;
          if (param_4 == 0) goto LAB_0085353c;
          param_4 = FUN_007e2370(param_4,param_1,0x30,1,1,param_2);
        }
      }
      else if (param_10 == '\0') {
        if (param_11 != '\0') {
          if (DAT_00b42e8c != (code *)0x0) {
            (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_FgVc ( facegenblend & vertexcolors )"
                            ,0);
          }
          goto LAB_00853561;
        }
        if ((char)param_4 != '\x01') goto LAB_00853559;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x10;
        if (param_4 == 0) goto LAB_0085353c;
        param_4 = FUN_007e2370(param_4,param_1,0x1d,1,1,param_2);
      }
      else {
        if (param_11 != '\0') {
          if (DAT_00b42e8c != (code *)0x0) {
            (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_FFgVc ( fog & facegenblend & vertexcolors )"
                            ,0);
          }
          goto LAB_00853561;
        }
        if ((char)param_4 != '\x01') goto LAB_00853559;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0xf;
        if (param_4 == 0) goto LAB_0085353c;
        param_4 = FUN_007e2370(param_4,param_1,0x3a,1,1,param_2);
      }
      goto LAB_0085353e;
    }
    if (param_9 != '\0') {
      if (param_10 == '\0') {
        if (param_11 == '\0') {
          if (DAT_00b42e8c != (code *)0x0) {
            (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_FgG ( glowmap & facegenblend )"
                            ,0);
          }
        }
        else if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_FgGVc ( glowmap & facegenblend & vertexcolors )"
                          ,0);
        }
      }
      else if (param_11 == '\0') {
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_FFgG ( fog & glowmap & facegenblend )"
                          ,0);
        }
      }
      else if (DAT_00b42e8c != (code *)0x0) {
        (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_FFgGVc ( fog & glowmap & facegenblend & vertexcolors )"
                        ,0);
      }
      goto LAB_00853561;
    }
    if (param_10 == '\0') {
      if (param_11 == '\0') {
        if ((char)param_4 != '\x01') goto LAB_00853559;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0xd;
        if (param_4 == 0) goto LAB_0085353c;
        param_4 = FUN_007e2370(param_4,param_1,0x1b,1,1,param_2);
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_00853559;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0xe;
        if (param_4 == 0) goto LAB_0085353c;
        param_4 = FUN_007e2370(param_4,param_1,0x1c,1,1,param_2);
      }
    }
    else if (param_11 == '\0') {
      if ((char)param_4 != '\x01') goto LAB_00853559;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 0xb;
      if (param_4 == 0) goto LAB_0085353c;
      param_4 = FUN_007e2370(param_4,param_1,0x36,1,1,param_2);
    }
    else {
      if ((char)param_4 != '\x01') goto LAB_00853559;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 0xc;
      if (param_4 == 0) goto LAB_0085353c;
      param_4 = FUN_007e2370(param_4,param_1,0x37,1,1,param_2);
    }
    goto LAB_0085353e;
  }
  if (param_8 == '\0') {
    if (param_9 != '\0') {
      if (param_10 != '\0') {
        if (param_11 == '\0') {
          if (DAT_00b42e8c != (code *)0x0) {
            (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_FFgA ( fog & facegenblend & alpha )"
                            ,0);
          }
        }
        else if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_FFgAVc ( fog & facegenblend & alpha & vertexcolors )"
                          ,0);
        }
        goto LAB_00853561;
      }
      if (param_11 != '\0') {
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_FgAVc ( facegenblend & alpha & vertexcolors )"
                          ,0);
        }
        goto LAB_00853561;
      }
      if ((char)param_4 == '\x01') {
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 6;
        if (param_4 == 0) goto LAB_0085353c;
        param_4 = FUN_007e2370(param_4,param_1,0x22,1,1,param_2);
        goto LAB_0085353e;
      }
      goto LAB_00853559;
    }
    if (param_10 == '\0') {
      if (param_11 == '\0') {
        if ((char)param_4 != '\x01') goto LAB_00853559;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 9;
        if (param_4 == 0) goto LAB_0085353c;
        param_4 = FUN_007e2370(param_4,param_1,0x1e,1,1,param_2);
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_00853559;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 10;
        if (param_4 == 0) goto LAB_0085353c;
        param_4 = FUN_007e2370(param_4,param_1,0x1f,1,1,param_2);
      }
    }
    else if (param_11 == '\0') {
      if ((char)param_4 != '\x01') goto LAB_00853559;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 7;
      if (param_4 == 0) goto LAB_0085353c;
      param_4 = FUN_007e2370(param_4,param_1,0x38,1,1,param_2);
    }
    else {
      if ((char)param_4 != '\x01') goto LAB_00853559;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 8;
      if (param_4 == 0) goto LAB_0085353c;
      param_4 = FUN_007e2370(param_4,param_1,0x39,1,1,param_2);
    }
    goto LAB_0085353e;
  }
  if (param_9 != '\0') {
    if (param_10 == '\0') {
      if (param_11 != '\0') {
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_GFgAVc ( glow & facegen & alpha & vertexcolors )"
                          ,0);
        }
        goto LAB_00853561;
      }
      if ((char)param_4 != '\x01') goto LAB_00853559;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 1;
      if (param_4 == 0) goto LAB_0085353c;
      param_4 = FUN_007e2370(param_4,param_1,0x23,1,1,param_2);
    }
    else {
      if (param_11 != '\0') {
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)("SHADER ERROR : no shader to handle AMBDIFFTEX_FGFgAVc ( fog & glow & facegen & alpha & vertexcolors )"
                          ,0);
        }
        goto LAB_00853561;
      }
      if ((char)param_4 != '\x01') goto LAB_00853559;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (param_4 == 0) goto LAB_0085353c;
      param_4 = FUN_007e2370(param_4,param_1,0x3d,1,1,param_2);
    }
    goto LAB_0085353e;
  }
  if (param_10 == '\0') {
    if (param_11 == '\0') {
      if ((char)param_4 != '\x01') goto LAB_00853559;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 4;
      if (param_4 == 0) goto LAB_0085353c;
      param_4 = FUN_007e2370(param_4,param_1,0x20,1,1,param_2);
    }
    else {
      if ((char)param_4 != '\x01') goto LAB_00853559;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 5;
      if (param_4 == 0) goto LAB_0085353c;
      param_4 = FUN_007e2370(param_4,param_1,0x21,1,1,param_2);
    }
  }
  else if (param_11 == '\0') {
    if ((char)param_4 != '\x01') {
LAB_00853559:
      *param_3 = *param_3 + 1;
      goto LAB_00853561;
    }
    param_4 = FUN_00401f00(0x10,uVar1);
    local_4 = 2;
    if (param_4 == 0) {
LAB_0085353c:
      param_4 = 0;
    }
    else {
      param_4 = FUN_007e2370(param_4,param_1,0x3b,1,1,param_2);
    }
  }
  else {
    if ((char)param_4 != '\x01') goto LAB_00853559;
    param_4 = FUN_00401f00(0x10,uVar1);
    local_4 = 3;
    if (param_4 == 0) goto LAB_0085353c;
    param_4 = FUN_007e2370(param_4,param_1,0x3c,1,1,param_2);
  }
LAB_0085353e:
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_4);
LAB_00853561:
  *param_5 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00853580(undefined4 param_1,undefined4 param_2,undefined4 param_3,short *param_4,
                 int param_5,undefined1 *param_6,char param_7,char param_8)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d37b1;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_7 == '\0') {
    if (param_8 != '\0') {
      if ((char)param_5 != '\x01') {
        *param_4 = *param_4 + 1;
        *param_6 = 0;
        *unaff_FS_OFFSET = local_c;
        return;
      }
      param_5 = FUN_00401f00(0x10,uVar1);
      local_4 = 1;
      if (param_5 == 0) {
        param_5 = 0;
      }
      else {
        param_5 = FUN_007e2370(param_5,param_1,0x33,1,2,param_2,param_3);
      }
      local_4 = 0xffffffff;
      FUN_005b1e20(&param_5);
      goto LAB_00853702;
    }
    if ((char)param_5 != '\x01') goto LAB_008536fa;
    param_5 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (param_5 != 0) {
      param_5 = FUN_007e2370(param_5,param_1,0x31,1,2,param_2,param_3);
      goto LAB_008536c7;
    }
  }
  else {
    if ((char)param_5 != '\x01') {
LAB_008536fa:
      *param_4 = *param_4 + 1;
LAB_00853702:
      *param_6 = 0;
      *unaff_FS_OFFSET = local_c;
      return;
    }
    param_5 = FUN_00401f00(0x10,uVar1);
    local_4 = 2;
    if (param_5 != 0) {
      param_5 = FUN_007e2370(param_5,param_1,0x32,1,2,param_2,param_3);
      goto LAB_008536c7;
    }
  }
  param_5 = 0;
LAB_008536c7:
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_5);
  *param_6 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00853720(undefined4 param_1,undefined4 param_2,short *param_3,int param_4,
                 undefined1 *param_5,char param_6,char param_7,undefined4 param_8,char param_9)

{
  undefined1 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_5;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3812;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_6 == '\0') {
    if (param_7 == '\0') {
      if (param_9 == '\0') {
        if ((char)param_4 != '\x01') goto LAB_00853946;
        param_4 = FUN_00401f00(0x10,uVar2);
        local_4 = 0;
        if (param_4 == 0) goto LAB_00853929;
        param_4 = FUN_007e2370(param_4,param_1,0xe2,*puVar1,1,param_2);
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_00853946;
        param_4 = FUN_00401f00(0x10,uVar2);
        local_4 = 1;
        if (param_4 == 0) goto LAB_00853929;
        param_4 = FUN_007e2370(param_4,param_1,0xe6,*puVar1,1,param_2);
      }
    }
    else if (param_9 == '\0') {
      if ((char)param_4 != '\x01') goto LAB_00853946;
      param_4 = FUN_00401f00(0x10,uVar2);
      local_4 = 2;
      if (param_4 == 0) goto LAB_00853929;
      param_4 = FUN_007e2370(param_4,param_1,0xe3,*puVar1,1,param_2);
    }
    else {
      if ((char)param_4 != '\x01') goto LAB_00853946;
      param_4 = FUN_00401f00(0x10,uVar2);
      local_4 = 3;
      if (param_4 == 0) goto LAB_00853929;
      param_4 = FUN_007e2370(param_4,param_1,0xe7,*puVar1,1,param_2);
    }
  }
  else if (param_7 == '\0') {
    if ((char)param_4 != '\x01') {
LAB_00853946:
      *param_3 = *param_3 + 1;
      goto LAB_0085394e;
    }
    param_4 = FUN_00401f00(0x10,uVar2);
    local_4 = 4;
    if (param_4 == 0) {
LAB_00853929:
      param_4 = 0;
    }
    else {
      param_4 = FUN_007e2370(param_4,param_1,0xe4,*puVar1,1,param_2);
    }
  }
  else {
    if ((char)param_4 != '\x01') goto LAB_00853946;
    param_4 = FUN_00401f00(0x10,uVar2);
    local_4 = 5;
    if (param_4 == 0) goto LAB_00853929;
    param_4 = FUN_007e2370(param_4,param_1,0xe5,*puVar1,1,param_2);
  }
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_4);
LAB_0085394e:
  *puVar1 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00853970(int param_1,undefined4 param_2,short *param_3,char param_4,undefined1 *param_5,
                 char param_6,undefined4 param_7,char param_8,char param_9,char param_10,
                 char param_11)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int local_194;
  char local_190 [128];
  char local_110 [256];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d38ae;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_194;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffe60;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_6 != '\0') {
    if (param_8 == '\0') {
      if (param_9 == '\0') {
        if (param_4 != '\x01') goto LAB_00853cd8;
        local_194 = FUN_00401f00(0x10);
        local_4 = 5;
        if (local_194 == 0) goto LAB_00853b68;
        local_194 = FUN_007e2370(local_194,param_1,0x107,*param_5,0,0);
      }
      else if (param_11 == '\0') {
        if (param_4 != '\x01') goto LAB_00853cd8;
        local_194 = FUN_00401f00(0x10);
        local_4 = 6;
        if (local_194 == 0) goto LAB_00853b68;
        local_194 = FUN_007e2370(local_194,param_1,0x109,*param_5,0,0);
      }
      else {
        if (param_4 != '\x01') goto LAB_00853cd8;
        local_194 = FUN_00401f00(0x10);
        local_4 = 7;
        if (local_194 == 0) goto LAB_00853b68;
        local_194 = FUN_007e2370(local_194,param_1,0x10c,*param_5,0,0);
      }
    }
    else {
      if (param_9 != '\0') {
        if (param_1 == 0) {
LAB_00853d57:
          _sprintf(local_190,"none",uVar2);
        }
        else if ((*(int *)(param_1 + 0x1c) == 0) ||
                (iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 8), iVar1 == 0)) {
          if (*(int *)(param_1 + 8) == 0) goto LAB_00853d57;
          _sprintf(local_190,"%s",*(int *)(param_1 + 8));
        }
        else if (*(int *)(param_1 + 8) == 0) {
          _sprintf(local_190,"Parent:%s",iVar1);
        }
        else {
          _sprintf(local_190,"Parent:%s,Child:%s",iVar1,*(int *)(param_1 + 8));
        }
        _sprintf(local_110,
                 "SHADER ERROR (%s)(%08X) : no shader to handle TEXTURE_SFgVc ( texture skinned facegen vertexcolors )"
                 ,local_190,param_1);
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)(local_110,0);
        }
        goto LAB_00853d92;
      }
      if (param_4 != '\x01') goto LAB_00853cd8;
      local_194 = FUN_00401f00(0x10);
      local_4 = 8;
      if (local_194 == 0) goto LAB_00853b68;
      local_194 = FUN_007e2370(local_194,param_1,0x10a,*param_5,0,0);
    }
    goto LAB_00853b6a;
  }
  if (param_10 != '\0') {
    if (param_4 == '\x01') {
      local_194 = FUN_00401f00(0x10);
      local_4 = 4;
      if (local_194 == 0) goto LAB_00853b68;
      local_194 = FUN_007e2370(local_194,param_1,0x10b,*param_5,0,0);
      goto LAB_00853b6a;
    }
    goto LAB_00853cd8;
  }
  if (param_9 == '\0') {
    if (param_8 == '\0') {
      if (param_4 != '\x01') {
LAB_00853cd8:
        *param_3 = *param_3 + 1;
        goto LAB_00853d92;
      }
      local_194 = FUN_00401f00(0x10);
      local_4 = 0;
      if (local_194 == 0) {
LAB_00853b68:
        local_194 = 0;
      }
      else {
        local_194 = FUN_007e2370(local_194,param_1,0x104,*param_5,0,0);
      }
    }
    else {
      if (param_4 != '\x01') goto LAB_00853cd8;
      local_194 = FUN_00401f00(0x10);
      local_4 = 1;
      if (local_194 == 0) goto LAB_00853b68;
      local_194 = FUN_007e2370(local_194,param_1,0x105,*param_5,0,0);
    }
  }
  else if (param_11 == '\0') {
    if (param_4 != '\x01') goto LAB_00853cd8;
    local_194 = FUN_00401f00(0x10);
    local_4 = 2;
    if (local_194 == 0) goto LAB_00853b68;
    local_194 = FUN_007e2370(local_194,param_1,0x108,*param_5,0,0);
  }
  else {
    if (param_4 != '\x01') goto LAB_00853cd8;
    local_194 = FUN_00401f00(0x10);
    local_4 = 3;
    if (local_194 == 0) goto LAB_00853b68;
    local_194 = FUN_007e2370(local_194,param_1,0x106,*param_5,0,0);
  }
LAB_00853b6a:
  local_4 = 0xffffffff;
  FUN_005b1e20(&local_194);
LAB_00853d92:
  *param_5 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00853dc0(undefined4 param_1,undefined4 param_2,short *param_3,int param_4,
                 undefined1 *param_5,char param_6,char param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d390c;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_6 == '\0') {
    if (param_7 == '\0') {
      if ((char)param_4 != '\x01') {
LAB_00853f5d:
        *param_3 = *param_3 + 1;
        *param_5 = 0;
        *unaff_FS_OFFSET = local_c;
        return;
      }
      param_4 = FUN_00401f00(0x10,uVar1);
      puVar2 = param_5;
      local_4 = 0;
      if (param_4 != 0) {
        param_4 = FUN_007e2370(param_4,param_1,0x10f,*param_5,1,param_2);
        goto LAB_00853f2d;
      }
    }
    else {
      if ((char)param_4 != '\x01') goto LAB_00853f5d;
      param_4 = FUN_00401f00(0x10,uVar1);
      puVar2 = param_5;
      local_4 = 1;
      if (param_4 != 0) {
        param_4 = FUN_007e2370(param_4,param_1,0x110,*param_5,1,param_2);
        goto LAB_00853f2d;
      }
    }
  }
  else if (param_7 == '\0') {
    if ((char)param_4 != '\x01') goto LAB_00853f5d;
    param_4 = FUN_00401f00(0x10,uVar1);
    puVar2 = param_5;
    local_4 = 2;
    if (param_4 != 0) {
      param_4 = FUN_007e2370(param_4,param_1,0x111,*param_5,1,param_2);
      goto LAB_00853f2d;
    }
  }
  else {
    if ((char)param_4 != '\x01') goto LAB_00853f5d;
    param_4 = FUN_00401f00(0x10,uVar1);
    puVar2 = param_5;
    local_4 = 3;
    if (param_4 != 0) {
      param_4 = FUN_007e2370(param_4,param_1,0x112,*param_5,1,param_2);
      goto LAB_00853f2d;
    }
  }
  param_4 = 0;
  puVar2 = param_5;
LAB_00853f2d:
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_4);
  *puVar2 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00853f80(undefined4 param_1,short *param_2,int param_3,undefined1 *param_4,char param_5,
                 char param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d395c;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_5 == '\0') {
    if (param_6 != '\0') {
      if ((char)param_3 != '\x01') {
LAB_00854162:
        *param_2 = *param_2 + 1;
        *param_4 = 0;
        *unaff_FS_OFFSET = local_c;
        return;
      }
      param_3 = FUN_00401f00(0x10,uVar1);
      puVar2 = param_4;
      local_4 = 1;
      if (param_3 != 0) {
        param_3 = FUN_007e2370(param_3,param_1,0x181,*param_4,0,0);
        goto LAB_00854132;
      }
LAB_00854130:
      param_3 = 0;
      puVar2 = param_4;
LAB_00854132:
      local_4 = 0xffffffff;
      FUN_005b1e20(&param_3);
      *puVar2 = 0;
      *unaff_FS_OFFSET = local_c;
      return;
    }
    if ((char)param_3 != '\x01') {
LAB_008540cb:
      *param_2 = *param_2 + 1;
      *param_4 = 0;
      *unaff_FS_OFFSET = local_c;
      return;
    }
    param_3 = FUN_00401f00(0x10,uVar1);
    puVar2 = param_4;
    local_4 = 0;
    if (param_3 != 0) {
      param_3 = FUN_007e2370(param_3,param_1,0x180,*param_4,0,0);
      goto LAB_00853ffe;
    }
  }
  else {
    if (param_6 != '\0') {
      if ((char)param_3 != '\x01') goto LAB_00854162;
      param_3 = FUN_00401f00(0x10,uVar1);
      puVar2 = param_4;
      local_4 = 3;
      if (param_3 != 0) {
        param_3 = FUN_007e2370(param_3,param_1,0x183,*param_4,0,0);
        goto LAB_00854132;
      }
      goto LAB_00854130;
    }
    if ((char)param_3 != '\x01') goto LAB_008540cb;
    param_3 = FUN_00401f00(0x10,uVar1);
    puVar2 = param_4;
    local_4 = 2;
    if (param_3 != 0) {
      param_3 = FUN_007e2370(param_3,param_1,0x182,*param_4,0,0);
      goto LAB_00853ffe;
    }
  }
  param_3 = 0;
  puVar2 = param_4;
LAB_00853ffe:
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_3);
  *puVar2 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00854190(undefined4 param_1,short *param_2,int param_3,undefined1 *param_4,char param_5,
                 char param_6,char param_7)

{
  undefined1 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d39b7;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_6 != '\0') {
    if ((char)param_3 == '\x01') {
      param_3 = FUN_00401f00(0x10,uVar2);
      local_4 = 4;
      if (param_3 == 0) goto LAB_00854337;
      param_3 = FUN_007e2370(param_3,param_1,0x194,*puVar1,0,0);
      goto LAB_00854339;
    }
    goto LAB_00854354;
  }
  if (param_5 == '\0') {
    if (param_7 == '\0') {
      if ((char)param_3 != '\x01') {
LAB_00854354:
        *param_2 = *param_2 + 1;
        goto LAB_0085435c;
      }
      param_3 = FUN_00401f00(0x10,uVar2);
      local_4 = 0;
      if (param_3 == 0) {
LAB_00854337:
        param_3 = 0;
      }
      else {
        param_3 = FUN_007e2370(param_3,param_1,400,*puVar1,0,0);
      }
    }
    else {
      if ((char)param_3 != '\x01') goto LAB_00854354;
      param_3 = FUN_00401f00(0x10,uVar2);
      local_4 = 1;
      if (param_3 == 0) goto LAB_00854337;
      param_3 = FUN_007e2370(param_3,param_1,0x191,*puVar1,0,0);
    }
  }
  else if (param_7 == '\0') {
    if ((char)param_3 != '\x01') goto LAB_00854354;
    param_3 = FUN_00401f00(0x10,uVar2);
    local_4 = 2;
    if (param_3 == 0) goto LAB_00854337;
    param_3 = FUN_007e2370(param_3,param_1,0x192,*puVar1,0,0);
  }
  else {
    if ((char)param_3 != '\x01') goto LAB_00854354;
    param_3 = FUN_00401f00(0x10,uVar2);
    local_4 = 3;
    if (param_3 == 0) goto LAB_00854337;
    param_3 = FUN_007e2370(param_3,param_1,0x193,*puVar1,0,0);
  }
LAB_00854339:
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_3);
LAB_0085435c:
  *puVar1 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00854380(undefined4 param_1,undefined4 *param_2,short *param_3,char param_4,
                 undefined1 *param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  LONG LVar11;
  undefined4 uVar12;
  short *psVar13;
  int in_ECX;
  uint uVar14;
  uint uVar15;
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3a4e;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_20 = 0;
  local_1c = in_ECX;
  piVar8 = (int *)FUN_00707530(4);
  puVar6 = param_5;
  bVar3 = DAT_00b42f48 < 2;
  uVar14 = DAT_00b2c674 - 1;
  if (*(ushort *)(in_ECX + 0xcc) < uVar14) {
    uVar14 = (uint)*(ushort *)(in_ECX + 0xcc);
  }
  local_18 = uVar14;
  local_14 = piVar8;
  if (DAT_00b42e86 != '\0') {
    if (param_4 == '\x01') {
      param_6 = FUN_00401f00(0x10,uVar7);
      local_4 = 0;
      if (param_6 == 0) {
        local_24 = (undefined4 *)0x0;
      }
      else {
        local_24 = (undefined4 *)FUN_007e2370(param_6,param_1,0x48,*puVar6,0,0);
      }
      local_4 = 0xffffffff;
      FUN_005b1e20(&local_24);
    }
    else {
      *param_3 = *param_3 + 1;
    }
    uVar15 = 0;
    *puVar6 = 0;
    if (0 < (int)uVar14) {
      do {
        if (*(int *)(local_14[0x2f] + 4 + (uVar15 & 0xffff) * 4) != 0) {
          if (param_4 == '\x01') {
            param_6 = FUN_00401f00(0x10,uVar7);
            local_4 = 1;
            if (param_6 == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = FUN_007e2370(param_6,param_1,0x16e,*puVar6,0,0);
            }
            iVar2 = local_1c;
            *(char *)(iVar9 + 9) = (char)uVar15 + '\x01';
            local_4 = 0xffffffff;
            puVar10 = (undefined4 *)(**(code **)(*(int *)(local_1c + 0x28) + 4))();
            puVar10[2] = iVar9;
            *puVar10 = 0;
            puVar10[1] = *(undefined4 *)(iVar2 + 0x30);
            if (*(undefined4 **)(iVar2 + 0x30) == (undefined4 *)0x0) {
              *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + 1;
              *(undefined4 **)(iVar2 + 0x2c) = puVar10;
              *(undefined4 **)(iVar2 + 0x30) = puVar10;
            }
            else {
              **(undefined4 **)(iVar2 + 0x30) = puVar10;
              *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + 1;
              *(undefined4 **)(iVar2 + 0x30) = puVar10;
            }
          }
          else {
            *param_3 = *param_3 + 1;
          }
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)local_18);
    }
    goto LAB_00854b51;
  }
  if ((char)param_6 == '\0') {
    if (param_4 == '\x01') {
      local_24 = (undefined4 *)FUN_00401f00(0x10,uVar7);
      local_4 = 2;
      if (local_24 == (undefined4 *)0x0) {
        local_24 = (undefined4 *)0x0;
        local_4 = 0xffffffff;
        FUN_005b1e20(&local_24);
      }
      else {
        local_24 = (undefined4 *)FUN_007e2370(local_24,param_1,0x48,*param_5,1,param_2);
        local_4 = 0xffffffff;
        FUN_005b1e20(&local_24);
      }
    }
    else {
LAB_00854609:
      *param_3 = *param_3 + 1;
    }
  }
  else {
    if (param_4 != '\x01') goto LAB_00854609;
    local_24 = (undefined4 *)FUN_00401f00(0x10,uVar7);
    local_4 = 3;
    if (local_24 == (undefined4 *)0x0) {
      local_24 = (undefined4 *)0x0;
    }
    else {
      local_24 = (undefined4 *)FUN_007e2370(local_24,param_1,0x49,*param_5,1,param_2);
    }
    local_4 = 0xffffffff;
    FUN_005b1e20(&local_24);
  }
  *param_5 = 0;
  iVar9 = (**(code **)(*piVar8 + 0x90))(0);
  if (iVar9 != 0) {
    if (param_4 == '\x01') {
      local_24 = (undefined4 *)FUN_00401f00(0x10,uVar7);
      local_4 = 4;
      if (local_24 == (undefined4 *)0x0) {
        local_24 = (undefined4 *)0x0;
      }
      else {
        local_24 = (undefined4 *)FUN_007e2370(local_24,param_1,0x16d,*param_5,0,0);
      }
      local_4 = 0xffffffff;
      FUN_005b1e20(&local_24);
    }
    else {
      *param_3 = *param_3 + 1;
    }
  }
  if (bVar3) {
    iVar9 = FUN_007ed2a0();
    iVar2 = local_1c;
    while (iVar9 != 0) {
      piVar8 = (int *)FUN_00405ad0(&local_24);
      puVar10 = local_24;
      iVar1 = *piVar8;
      if (((DAT_00b3fa90 == *(float *)(iVar1 + 0xec)) && (DAT_00b3fa94 == *(float *)(iVar1 + 0xf0)))
         && (DAT_00b3fa98 == *(float *)(iVar1 + 0xf4))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      local_20 = local_20 & 0xfffffffe;
      if (((local_24 != (undefined4 *)0x0) &&
          (LVar11 = InterlockedDecrement(local_24 + 1), LVar11 == 0)) &&
         (puVar10 != (undefined4 *)0x0)) {
        (**(code **)*puVar10)(1);
      }
      if (bVar5) {
        if (param_4 == '\x01') {
          iStack_10 = FUN_00401f00(0x10);
          local_4 = 5;
          if (iStack_10 == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = FUN_007e2370(iStack_10,param_1,0x168,*param_5,1,iVar9);
          }
          local_4 = 0xffffffff;
          puVar10 = (undefined4 *)(**(code **)(*(int *)(iVar2 + 0x28) + 4))();
          puVar10[2] = uVar12;
          *puVar10 = 0;
          puVar10[1] = *(undefined4 *)(iVar2 + 0x30);
          if (*(undefined4 **)(iVar2 + 0x30) == (undefined4 *)0x0) {
            *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + 1;
            *(undefined4 **)(iVar2 + 0x2c) = puVar10;
            *(undefined4 **)(iVar2 + 0x30) = puVar10;
          }
          else {
            **(undefined4 **)(iVar2 + 0x30) = puVar10;
            *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + 1;
            *(undefined4 **)(iVar2 + 0x30) = puVar10;
          }
        }
        else {
          *param_3 = *param_3 + 1;
        }
      }
      iVar9 = FUN_007ed4b0();
    }
  }
  puVar6 = param_5;
  puVar10 = param_2;
  uVar14 = 0;
  psVar13 = param_3;
  if (0 < (int)local_18) {
    do {
      if (*(int *)(local_14[0x2f] + 4 + (uVar14 & 0xffff) * 4) != 0) {
        cVar4 = (char)uVar14;
        if ((char)param_6 == '\0') {
          if (param_4 != '\x01') {
LAB_008548e8:
            *psVar13 = *psVar13 + 1;
            goto LAB_008548ec;
          }
          param_2 = (undefined4 *)FUN_00401f00(0x10);
          local_4 = 6;
          if (param_2 == (undefined4 *)0x0) {
            cRam00000009 = cVar4 + '\x01';
            local_24 = (undefined4 *)0x0;
          }
          else {
            local_24 = (undefined4 *)FUN_007e2370(param_2,param_1,0x16e,*puVar6,1,puVar10);
            *(char *)((int)local_24 + 9) = cVar4 + '\x01';
          }
        }
        else {
          if (param_4 != '\x01') goto LAB_008548e8;
          param_2 = (undefined4 *)FUN_00401f00(0x10);
          local_4 = 7;
          if (param_2 == (undefined4 *)0x0) {
            local_24 = (undefined4 *)0x0;
          }
          else {
            local_24 = (undefined4 *)FUN_007e2370(param_2,param_1,0x16f,*puVar6,1,puVar10);
          }
          *(char *)((int)local_24 + 9) = cVar4 + '\x01';
        }
        local_4 = 0xffffffff;
        FUN_005b1e20(&local_24);
        psVar13 = param_3;
      }
LAB_008548ec:
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)local_18);
  }
  param_6 = 0;
  if (0 < (int)local_18) {
    do {
      uVar14 = param_6;
      if (*(int *)(local_14[0x2f] + 4 + (param_6 & 0xffff) * 4) != 0) {
        iVar9 = (**(code **)(*local_14 + 0x90))(param_6 + 1);
        if (iVar9 != 0) {
          if (param_4 == '\x01') {
            iStack_10 = FUN_00401f00(0x10);
            local_4 = 8;
            if (iStack_10 == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = FUN_007e2370(iStack_10,param_1,0x170,*param_5,0,0);
            }
            *(char *)(iVar9 + 9) = (char)uVar14 + '\x01';
            local_4 = 0xffffffff;
            puVar10 = (undefined4 *)(**(code **)(*(int *)(local_1c + 0x28) + 4))();
            puVar10[2] = iVar9;
            *puVar10 = 0;
            puVar10[1] = *(undefined4 *)(local_1c + 0x30);
            if (*(undefined4 **)(local_1c + 0x30) == (undefined4 *)0x0) {
              *(int *)(local_1c + 0x34) = *(int *)(local_1c + 0x34) + 1;
              *(undefined4 **)(local_1c + 0x2c) = puVar10;
              *(undefined4 **)(local_1c + 0x30) = puVar10;
            }
            else {
              **(undefined4 **)(local_1c + 0x30) = puVar10;
              *(int *)(local_1c + 0x34) = *(int *)(local_1c + 0x34) + 1;
              *(undefined4 **)(local_1c + 0x30) = puVar10;
            }
          }
          else {
            *param_3 = *param_3 + 1;
          }
        }
        if (bVar3) {
          iVar9 = FUN_007ed2a0();
          while (iVar9 != 0) {
            piVar8 = (int *)FUN_00405ad0(&param_2);
            puVar10 = param_2;
            iVar2 = *piVar8;
            if (((DAT_00b3fa90 == *(float *)(iVar2 + 0xec)) &&
                (DAT_00b3fa94 == *(float *)(iVar2 + 0xf0))) &&
               (DAT_00b3fa98 == *(float *)(iVar2 + 0xf4))) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            local_20 = local_20 & 0xfffffffd;
            if (((param_2 != (undefined4 *)0x0) &&
                (LVar11 = InterlockedDecrement(param_2 + 1), LVar11 == 0)) &&
               (puVar10 != (undefined4 *)0x0)) {
              (**(code **)*puVar10)(1);
            }
            if (bVar5) {
              if (param_4 == '\x01') {
                iStack_10 = FUN_00401f00(0x10);
                local_4 = 9;
                if (iStack_10 == 0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = FUN_007e2370(iStack_10,param_1,0x171,*param_5,1,iVar9);
                }
                *(char *)(iVar9 + 9) = (char)param_6 + '\x01';
                local_4 = 0xffffffff;
                puVar10 = (undefined4 *)(**(code **)(*(int *)(local_1c + 0x28) + 4))();
                puVar10[2] = iVar9;
                *puVar10 = 0;
                puVar10[1] = *(undefined4 *)(local_1c + 0x30);
                if (*(undefined4 **)(local_1c + 0x30) == (undefined4 *)0x0) {
                  *(int *)(local_1c + 0x34) = *(int *)(local_1c + 0x34) + 1;
                  *(undefined4 **)(local_1c + 0x2c) = puVar10;
                  *(undefined4 **)(local_1c + 0x30) = puVar10;
                }
                else {
                  **(undefined4 **)(local_1c + 0x30) = puVar10;
                  *(int *)(local_1c + 0x34) = *(int *)(local_1c + 0x34) + 1;
                  *(undefined4 **)(local_1c + 0x30) = puVar10;
                }
              }
              else {
                *param_3 = *param_3 + 1;
              }
            }
            iVar9 = FUN_007ed4b0();
          }
        }
      }
      param_6 = param_6 + 1;
    } while ((int)param_6 < (int)local_18);
  }
LAB_00854b51:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00854b70(undefined4 param_1,short *param_2,int param_3,undefined1 *param_4,char param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3ac6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_5 == '\0') {
    if ((char)param_3 == '\x01') {
      param_3 = FUN_00401f00(0x10,uVar2);
      puVar1 = param_4;
      local_4 = 1;
      if (param_3 == 0) {
        param_3 = 0;
      }
      else {
        param_3 = FUN_007e2370(param_3,param_1,0x18c,*param_4,0,0);
      }
      local_4 = 0xffffffff;
      FUN_005b1e20(&param_3);
      *puVar1 = 0;
      *unaff_FS_OFFSET = local_c;
      return;
    }
    *param_2 = *param_2 + 1;
    *param_4 = 0;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if ((char)param_3 == '\x01') {
    param_3 = FUN_00401f00(0x10,uVar2);
    puVar1 = param_4;
    local_4 = 0;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_007e2370(param_3,param_1,0x18d,*param_4,0,0);
    }
    local_4 = 0xffffffff;
    FUN_005b1e20(&param_3);
    *puVar1 = 0;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *param_2 = *param_2 + 1;
  *param_4 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00854cd0(undefined4 param_1,short *param_2,int param_3,undefined1 *param_4,char param_5,
                 char param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3a91;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_6 == '\0') {
    if (param_5 == '\0') {
      if ((char)param_3 == '\x01') {
        param_3 = FUN_00401f00(0x10,uVar1);
        puVar2 = param_4;
        local_4 = 1;
        if (param_3 == 0) {
          param_3 = 0;
        }
        else {
          param_3 = FUN_007e2370(param_3,param_1,0x160,*param_4,0,0);
        }
        local_4 = 0xffffffff;
        FUN_005b1e20(&param_3);
        *puVar2 = 0;
        *unaff_FS_OFFSET = local_c;
        return;
      }
      *param_2 = *param_2 + 1;
      *param_4 = 0;
      *unaff_FS_OFFSET = local_c;
      return;
    }
    if ((char)param_3 != '\x01') goto LAB_00854e5e;
    param_3 = FUN_00401f00(0x10,uVar1);
    puVar2 = param_4;
    local_4 = 2;
    if (param_3 != 0) {
      param_3 = FUN_007e2370(param_3,param_1,0x161,*param_4,0,0);
      goto LAB_00854e2e;
    }
  }
  else {
    if ((char)param_3 != '\x01') {
LAB_00854e5e:
      *param_2 = *param_2 + 1;
      *param_4 = 0;
      *unaff_FS_OFFSET = local_c;
      return;
    }
    param_3 = FUN_00401f00(0x10,uVar1);
    puVar2 = param_4;
    local_4 = 0;
    if (param_3 != 0) {
      param_3 = FUN_007e2370(param_3,param_1,0x162,*param_4,0,0);
      goto LAB_00854e2e;
    }
  }
  param_3 = 0;
  puVar2 = param_4;
LAB_00854e2e:
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_3);
  *puVar2 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00854e90(undefined4 param_1,short *param_2,int param_3,undefined1 *param_4,char param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3ac6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_5 == '\0') {
    if ((char)param_3 == '\x01') {
      param_3 = FUN_00401f00(0x10,uVar2);
      puVar1 = param_4;
      local_4 = 1;
      if (param_3 == 0) {
        param_3 = 0;
      }
      else {
        param_3 = FUN_007e2370(param_3,param_1,0,*param_4,0,0);
      }
      local_4 = 0xffffffff;
      FUN_005b1e20(&param_3);
      *puVar1 = 0;
      *unaff_FS_OFFSET = local_c;
      return;
    }
    *param_2 = *param_2 + 1;
    *param_4 = 0;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if ((char)param_3 == '\x01') {
    param_3 = FUN_00401f00(0x10,uVar2);
    puVar1 = param_4;
    local_4 = 0;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_007e2370(param_3,param_1,2,*param_4,0,0);
    }
    local_4 = 0xffffffff;
    FUN_005b1e20(&param_3);
    *puVar1 = 0;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *param_2 = *param_2 + 1;
  *param_4 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00854ff0(undefined4 *param_1,short *param_2,int param_3,char param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3b06;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar6 = (int *)FUN_00405760(&param_1);
  puVar3 = param_1;
  iVar1 = *(int *)(*piVar6 + 0x10);
  if (((param_1 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(param_1 + 1), LVar7 == 0)) &&
     (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1,uVar5);
  }
  if ((iVar1 == 0) || (cVar4 = FUN_008aa390(&DAT_00b3fa90), cVar4 == '\0')) goto LAB_0085514b;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x30) + 8);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 7) = 1;
  }
  if (param_4 == '\0') {
    if ((char)param_3 != '\x01') {
LAB_00855143:
      *param_2 = *param_2 + 1;
      goto LAB_0085514b;
    }
    param_3 = FUN_00401f00(0x10);
    uStack_4 = 0;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_007e2370(param_3,puVar2,0x19e,0,0,0);
    }
  }
  else {
    if ((char)param_3 != '\x01') goto LAB_00855143;
    param_3 = FUN_00401f00(0x10);
    uStack_4 = 1;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_007e2370(param_3,puVar2,0x19f,0,0,0);
    }
  }
  uStack_4 = 0xffffffff;
  FUN_005b1e20(&param_3);
LAB_0085514b:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00855170(undefined4 param_1,undefined4 param_2,int param_3,char param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3b46;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_4 == '\0') {
    if ((char)param_3 != '\x01') goto LAB_0085522b;
    param_3 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (param_3 == 0) {
LAB_00855210:
      param_3 = 0;
    }
    else {
      param_3 = FUN_007e2370(param_3,param_1,10,0,0,0);
    }
  }
  else {
    if ((char)param_3 != '\x01') goto LAB_0085522b;
    param_3 = FUN_00401f00(0x10,uVar1);
    local_4 = 1;
    if (param_3 == 0) goto LAB_00855210;
    param_3 = FUN_007e2370(param_3,param_1,0xb,0,0,0);
  }
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_3);
LAB_0085522b:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00855240(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  char cVar15;
  char cVar16;
  undefined1 uVar17;
  short sVar18;
  undefined *puVar19;
  int iVar20;
  int iVar21;
  LONG LVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int *piVar25;
  int *in_ECX;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  undefined4 *puStack_4;
  
  uVar1 = in_ECX[7];
  bVar3 = false;
  bVar26 = (uVar1 & 1) != 0;
  bVar27 = (uVar1 & 0x10) != 0;
  if ((bVar26) || (bVar8 = false, bVar27)) {
    bVar8 = true;
  }
  bVar28 = (uVar1 & 0x80) != 0;
  bVar29 = (uVar1 & 8) != 0;
  bVar30 = (uVar1 & 2) != 0;
  if (((uVar1 & 0x20) != 0) || (bVar9 = false, DAT_00b42eac == 3)) {
    bVar9 = true;
  }
  bVar31 = *(int *)in_ECX[0x31] != 0;
  bVar32 = (uVar1 & 0x400) != 0;
  bVar33 = *(int *)(*(int *)(param_1 + 0xb4) + 0x24) != 0;
  for (puVar19 = (undefined *)(**(code **)(*in_ECX + 4))(); puVar19 != (undefined *)0x0;
      puVar19 = *(undefined **)(puVar19 + 4)) {
    if (puVar19 == &DAT_00b468c8) {
      bVar4 = 1;
      goto LAB_008552f5;
    }
  }
  bVar4 = 0;
LAB_008552f5:
  bVar34 = (-(uint)bVar4 & (uint)in_ECX) != 0;
  for (puVar19 = (undefined *)(**(code **)(*in_ECX + 4))(); puVar19 != (undefined *)0x0;
      puVar19 = *(undefined **)(puVar19 + 4)) {
    if (puVar19 == &DAT_00b478b0) {
      bVar4 = 1;
      goto LAB_00855324;
    }
  }
  bVar4 = 0;
LAB_00855324:
  for (puVar19 = (undefined *)(**(code **)(*in_ECX + 4))(); puVar19 != (undefined *)0x0;
      puVar19 = *(undefined **)(puVar19 + 4)) {
    if (puVar19 == &DAT_00b468bc) {
      bVar5 = 1;
      goto LAB_00855354;
    }
  }
  bVar5 = 0;
LAB_00855354:
  uVar1 = in_ECX[7];
  bVar35 = (uVar1 & 0x4000) == 0;
  bVar36 = (uVar1 & 0x10000) != 0;
  FUN_007b7650();
  cVar15 = FUN_007aa380();
  if (((in_ECX[7] & 0x100000U) == 0) || (bVar6 = false, DAT_00b42e86 != '\0')) {
    bVar6 = true;
  }
  bVar37 = (in_ECX[7] & 0x40000U) != 0;
  iVar20 = FUN_00707530(0);
  if ((iVar20 == 0) || (cVar10 = '\x01', (*(ushort *)(iVar20 + 0x18) >> 9 & 1) == 0)) {
    cVar10 = '\0';
  }
  if ((float)in_ECX[0x29] == 0.0) {
    bVar28 = false;
  }
  else if ((in_ECX[7] & 0x20000U) != 0) {
    bVar28 = true;
    bVar8 = false;
  }
  if ((float)in_ECX[0x27] == 0.0) {
    bVar8 = false;
  }
  iVar21 = FUN_007b4280((uint)in_ECX[7] >> 0x1c);
  uVar24 = *(undefined4 *)(iVar21 + 0x118);
  if (bVar8) {
    FUN_00405ad0(&puStack_4);
    bVar3 = true;
    cVar16 = FUN_008aa390(&DAT_00b3fa90);
    bVar7 = true;
    if (cVar16 == '\0') goto LAB_0085547c;
  }
  else {
LAB_0085547c:
    bVar7 = false;
  }
  puVar14 = puStack_4;
  if ((((bVar3) && (puStack_4 != (undefined4 *)0x0)) &&
      (LVar22 = InterlockedDecrement(puStack_4 + 1), LVar22 == 0)) && (puVar14 != (undefined4 *)0x0)
     ) {
    (**(code **)*puVar14)(1);
  }
  uVar13 = param_4;
  uVar12 = param_3;
  bVar11 = false;
  bVar3 = false;
  if (((float)in_ECX[8] < 1.0) || ((iVar20 != 0 && ((*(byte *)(iVar20 + 0x18) & 1) != 0)))) {
    param_3 = CONCAT31(param_3._1_3_,1);
    if (cVar15 != '\0') {
      FUN_00854e90(param_1,uVar12,param_4,&param_3,bVar30);
      bVar8 = false;
    }
    bVar9 = true;
  }
  param_3._0_1_ = 1;
  if (((uVar1 & 0x8000) != 0) || (bVar36)) {
    FUN_00854cd0(param_1,uVar12,uVar13,&param_3,bVar30,bVar36);
  }
  sVar18 = FUN_007ed600();
  if (bVar6) {
    if (!bVar9) {
      if ((param_2 != 0xf) || (bVar29)) goto LAB_00855a32;
      if (bVar35) goto LAB_00855569;
      goto LAB_008558f9;
    }
LAB_00855569:
    if (sVar18 == 0) {
      if ((bVar9) || (!bVar7)) goto LAB_00855950;
LAB_0085599c:
      FUN_00852470(param_1,uVar24,uVar12,uVar13,&param_3,bVar30,cVar10,bVar31,bVar32,0,bVar33,bVar34
                  );
LAB_008559d3:
      if ((bVar7) && (!bVar9)) {
        FUN_00853dc0(param_1,uVar24,uVar12,uVar13,&param_3,bVar30,0,bVar29,bVar26,bVar27,bVar34);
      }
    }
    else {
      if (bVar9) {
LAB_00855950:
        if (((-(uint)bVar4 & (uint)in_ECX) != 0) || ((-(uint)bVar5 & (uint)in_ECX) != 0))
        goto LAB_0085599c;
        FUN_00852470(param_1,uVar24,uVar12,uVar13,&param_3,bVar30,cVar10,bVar31,bVar32,1,bVar33,
                     bVar34);
        bVar9 = true;
        goto LAB_008559d3;
      }
      uVar23 = FUN_007ed2a0();
      if (((cVar10 != '\0') || (bVar30)) || (bVar31)) {
        if ((param_2 & 1) != 0) {
          FUN_00852150(param_1,uVar24,uVar12,uVar13,&param_3,bVar30,cVar10,bVar31,bVar34);
        }
        FUN_00405ad0(&puStack_4);
        uVar17 = FUN_008aa390(&DAT_00b3fa90);
        param_4 = CONCAT31(param_4._1_3_,uVar17);
        FUN_007016a0();
        if ((char)param_4 != '\0') {
          FUN_00853720(param_1,uVar24,uVar12,uVar13,&param_3,bVar30,0,bVar29,bVar34);
        }
        FUN_00405ad0(&puStack_4);
        uVar17 = FUN_008aa390(&DAT_00b3fa90);
        param_4 = CONCAT31(param_4._1_3_,uVar17);
        FUN_007016a0();
        if ((char)param_4 != '\0') {
          FUN_00853720(param_1,uVar23,uVar12,uVar13,&param_3,bVar30,1,bVar29,bVar34);
        }
      }
      else {
        FUN_00853580(param_1,uVar24,uVar23,uVar12,uVar13,&param_3,0,bVar34);
      }
      iVar21 = FUN_007ed4b0();
      while (iVar21 != 0) {
        FUN_00405ad0(&puStack_4);
        uVar17 = FUN_008aa390(&DAT_00b3fa90);
        puVar14 = puStack_4;
        param_4 = CONCAT31(param_4._1_3_,uVar17);
        if (((puStack_4 != (undefined4 *)0x0) &&
            (LVar22 = InterlockedDecrement(puStack_4 + 1), LVar22 == 0)) &&
           (puVar14 != (undefined4 *)0x0)) {
          (**(code **)*puVar14)(1);
        }
        if ((char)param_4 != '\0') {
          FUN_00853720(param_1,iVar21,uVar12,uVar13,&param_3,bVar30,1,bVar29,bVar34);
        }
        iVar21 = FUN_007ed4b0();
      }
      FUN_00853970(param_1,uVar24,uVar12,uVar13,&param_3,bVar30,bVar29,bVar32,bVar33,bVar34,bVar37);
      if (bVar8) {
        iVar21 = FUN_007ed2a0();
        if (bVar7) {
          FUN_00405ad0(&puStack_4);
          bVar3 = true;
          cVar15 = FUN_008aa390(&DAT_00b3fa90);
          param_4 = CONCAT31(param_4._1_3_,1);
          if (cVar15 == '\0') goto LAB_008557cc;
        }
        else {
LAB_008557cc:
          param_4 = param_4 & 0xffffff00;
        }
        if (bVar3) {
          FUN_007016a0();
        }
        if ((char)param_4 == '\0') {
          FUN_00853dc0(param_1,iVar21,uVar12,uVar13,&param_3,bVar30,1,bVar29,bVar26,bVar27,bVar34);
          iVar21 = FUN_007ed4b0();
        }
        else {
          FUN_00853dc0(param_1,uVar24,uVar12,uVar13,&param_3,bVar30,0,bVar29,bVar26,bVar27,bVar34);
        }
        while (iVar21 != 0) {
          FUN_00405ad0(&puStack_4);
          uVar17 = FUN_008aa390(&DAT_00b3fa90);
          param_4 = CONCAT31(param_4._1_3_,uVar17);
          FUN_007016a0();
          if ((char)param_4 != '\0') {
            FUN_00853dc0(param_1,iVar21,uVar12,uVar13,&param_3,bVar30,1,bVar29,bVar26,bVar27,bVar34)
            ;
          }
          iVar21 = FUN_007ed4b0();
        }
      }
    }
    if (bVar28) {
      FUN_00853f80(param_1,uVar12,uVar13,&param_3,bVar30,bVar33);
    }
    if (bVar35) goto LAB_00855913;
  }
  else {
LAB_00855a32:
    if (bVar35) {
      param_3._0_1_ = 1;
      if ((param_2 & 1) != 0) {
        FUN_00852150(param_1,uVar24,uVar12,uVar13,&param_3,bVar30,cVar10,bVar31,bVar34);
      }
      FUN_00707530(0);
      if ((param_2 & 2) != 0) {
        FUN_00405ad0(&puStack_4);
        uVar17 = FUN_008aa390(&DAT_00b3fa90);
        puVar14 = puStack_4;
        param_4 = CONCAT31(param_4._1_3_,uVar17);
        if (((puStack_4 != (undefined4 *)0x0) &&
            (LVar22 = InterlockedDecrement(puStack_4 + 1), LVar22 == 0)) &&
           (puVar14 != (undefined4 *)0x0)) {
          (**(code **)*puVar14)(1);
        }
        if ((char)param_4 != '\0') {
          FUN_00853720(param_1,uVar24,uVar12,uVar13,&param_3,bVar30,0,bVar29,bVar34);
        }
        iVar21 = FUN_007ed2a0();
        while (iVar21 != 0) {
          piVar25 = (int *)FUN_00405ad0(&puStack_4);
          puVar14 = puStack_4;
          iVar2 = *piVar25;
          if (((DAT_00b3fa90 == *(float *)(iVar2 + 0xec)) &&
              (DAT_00b3fa94 == *(float *)(iVar2 + 0xf0))) &&
             (DAT_00b3fa98 == *(float *)(iVar2 + 0xf4))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          param_4 = CONCAT31(param_4._1_3_,!bVar3);
          if (((puStack_4 != (undefined4 *)0x0) &&
              (LVar22 = InterlockedDecrement(puStack_4 + 1), LVar22 == 0)) &&
             (puVar14 != (undefined4 *)0x0)) {
            (**(code **)*puVar14)(1);
          }
          if ((char)param_4 != '\0') {
            FUN_00853720(param_1,iVar21,uVar12,uVar13,&param_3,bVar30,1,bVar29,bVar34);
          }
          iVar21 = FUN_007ed4b0();
        }
      }
      if ((param_2 & 4) != 0) {
        FUN_00853970(param_1,uVar24,uVar12,uVar13,&param_3,bVar30,bVar29,bVar32,bVar33,bVar34,bVar37
                    );
      }
      if ((bVar8) && ((param_2 & 8) != 0)) {
        iVar21 = FUN_007ed2a0();
        if (bVar7) {
          FUN_00405ad0(&puStack_4);
          bVar11 = true;
          cVar15 = FUN_008aa390(&DAT_00b3fa90);
          param_4 = CONCAT31(param_4._1_3_,1);
          if (cVar15 == '\0') goto LAB_00855c6f;
        }
        else {
LAB_00855c6f:
          param_4 = param_4 & 0xffffff00;
        }
        if (bVar11) {
          FUN_007016a0();
        }
        if ((char)param_4 == '\0') {
          if (iVar21 == 0) goto LAB_00855dde;
          FUN_00405ad0(&puStack_4);
          uVar17 = FUN_008aa390(&DAT_00b3fa90);
          param_4 = CONCAT31(param_4._1_3_,uVar17);
          FUN_007016a0();
          if ((char)param_4 != '\0') {
            FUN_00853dc0(param_1,iVar21,uVar12,uVar13,&param_3,bVar30,1,bVar29,bVar26,bVar27,bVar34)
            ;
            iVar21 = FUN_007ed4b0();
          }
        }
        else {
          FUN_00853dc0(param_1,uVar24,uVar12,uVar13,&param_3,bVar30,0,bVar29,bVar26,bVar27,bVar34);
          param_3._0_1_ = 0;
        }
        while (iVar21 != 0) {
          FUN_00405ad0(&puStack_4);
          uVar17 = FUN_008aa390(&DAT_00b3fa90);
          puVar14 = puStack_4;
          param_4 = CONCAT31(param_4._1_3_,uVar17);
          if (((puStack_4 != (undefined4 *)0x0) &&
              (LVar22 = InterlockedDecrement(puStack_4 + 1), LVar22 == 0)) &&
             (puVar14 != (undefined4 *)0x0)) {
            (**(code **)*puVar14)(1);
          }
          if ((char)param_4 != '\0') {
            FUN_00853dc0(param_1,iVar21,uVar12,uVar13,&param_3,bVar30,1,bVar29,bVar26,bVar27,bVar34)
            ;
          }
          iVar21 = FUN_007ed4b0();
        }
      }
LAB_00855dde:
      if ((bVar28) && ((param_2 & 8) != 0)) {
        FUN_00853f80(param_1,uVar12,uVar13,&param_3,bVar30,bVar33);
      }
      goto LAB_00855913;
    }
  }
LAB_008558f9:
  FUN_00854380(param_1,uVar24,uVar12,uVar13,&param_3,0);
LAB_00855913:
  if ((param_2 == 0xf) && (!bVar9)) {
    if ((iVar20 == 0) || ((*(byte *)(iVar20 + 0x18) & 1) == 0)) {
      uVar24 = 0;
    }
    else {
      uVar24 = 1;
    }
    FUN_00854190(param_1,uVar12,uVar13,&param_3,bVar30,bVar34,uVar24);
  }
  if (in_ECX[0x38] != 0) {
    FUN_00854b70(param_1,uVar12,uVar13,&param_3,bVar30);
  }
  if ((DAT_00b43073 != '\0') && ((param_2 & 1) != 0)) {
    FUN_00854ff0(param_1,uVar12,uVar13,bVar30,bVar31);
  }
  return;
}



void FUN_00855e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,short *param_4,
                 int param_5,undefined1 *param_6,char param_7,char param_8,char param_9,
                 undefined4 param_10,char param_11,char param_12,char param_13)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  char *pcVar2;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3c36;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_7 == '\0') {
    if (param_8 == '\0') {
      if (param_9 == '\0') {
        if (param_12 == '\0') {
          if (param_11 == '\0') {
            if (param_13 == '\0') {
              if ((char)param_5 != '\x01') goto LAB_008564c8;
              param_5 = FUN_00401f00(0x10,uVar1);
              local_4 = 0;
              if (param_5 == 0) goto LAB_00856148;
              param_5 = FUN_007e2370(param_5,param_1,0x4a,1,2,param_2,param_3);
            }
            else {
              if ((char)param_5 != '\x01') goto LAB_008564c8;
              param_5 = FUN_00401f00(0x10,uVar1);
              local_4 = 1;
              if (param_5 == 0) goto LAB_00856148;
              param_5 = FUN_007e2370(param_5,param_1,0x54,1,2,param_2,param_3);
            }
          }
          else if (param_13 == '\0') {
            if ((char)param_5 != '\x01') goto LAB_008564c8;
            param_5 = FUN_00401f00(0x10,uVar1);
            local_4 = 2;
            if (param_5 == 0) goto LAB_00856148;
            param_5 = FUN_007e2370(param_5,param_1,0x55,1,2,param_2,param_3);
          }
          else {
            if ((char)param_5 != '\x01') goto LAB_008564c8;
            param_5 = FUN_00401f00(0x10,uVar1);
            local_4 = 3;
            if (param_5 == 0) goto LAB_00856148;
            param_5 = FUN_007e2370(param_5,param_1,0x5f,1,2,param_2,param_3);
          }
        }
        else if (param_11 == '\0') {
          if ((char)param_5 != '\x01') goto LAB_008564c8;
          param_5 = FUN_00401f00(0x10,uVar1);
          local_4 = 4;
          if (param_5 == 0) goto LAB_00856148;
          param_5 = FUN_007e2370(param_5,param_1,0x4c,1,2,param_2,param_3);
        }
        else {
          if ((char)param_5 != '\x01') goto LAB_008564c8;
          param_5 = FUN_00401f00(0x10,uVar1);
          local_4 = 5;
          if (param_5 == 0) goto LAB_00856148;
          param_5 = FUN_007e2370(param_5,param_1,0x57,1,2,param_2,param_3);
        }
      }
      else if (param_11 == '\0') {
        if ((char)param_5 != '\x01') {
LAB_008564c8:
          *param_4 = *param_4 + 1;
          goto LAB_008564e7;
        }
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 6;
        if (param_5 == 0) {
LAB_00856148:
          param_5 = 0;
        }
        else {
          param_5 = FUN_007e2370(param_5,param_1,0x4e,1,2,param_2,param_3);
        }
      }
      else {
        if ((char)param_5 != '\x01') goto LAB_008564c8;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 7;
        if (param_5 == 0) goto LAB_00856148;
        param_5 = FUN_007e2370(param_5,param_1,0x59,1,2,param_2,param_3);
      }
    }
    else {
      if (param_9 != '\0') {
        if (DAT_00b42e8c == (code *)0x0) goto LAB_008564e7;
        pcVar2 = "SHADER ERROR : no shader to handle BSSM_AD2_GFg ( glowmap & facegenblend )";
LAB_008564e2:
        (*DAT_00b42e8c)(pcVar2,0);
        goto LAB_008564e7;
      }
      if (param_11 == '\0') {
        if ((char)param_5 != '\x01') goto LAB_008564c8;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 8;
        if (param_5 == 0) goto LAB_00856148;
        param_5 = FUN_007e2370(param_5,param_1,0x4b,1,2,param_2,param_3);
      }
      else {
        if ((char)param_5 != '\x01') goto LAB_008564c8;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 9;
        if (param_5 == 0) goto LAB_00856148;
        param_5 = FUN_007e2370(param_5,param_1,0x56,1,2,param_2,param_3);
      }
    }
  }
  else if (param_8 == '\0') {
    if (param_9 == '\0') {
      if (param_12 == '\0') {
        if (param_11 == '\0') {
          if ((char)param_5 != '\x01') goto LAB_008564c8;
          param_5 = FUN_00401f00(0x10,uVar1);
          local_4 = 10;
          if (param_5 == 0) goto LAB_00856148;
          param_5 = FUN_007e2370(param_5,param_1,0x4f,1,2,param_2,param_3);
        }
        else {
          if ((char)param_5 != '\x01') goto LAB_008564c8;
          param_5 = FUN_00401f00(0x10,uVar1);
          local_4 = 0xb;
          if (param_5 == 0) goto LAB_00856148;
          param_5 = FUN_007e2370(param_5,param_1,0x5a,1,2,param_2,param_3);
        }
      }
      else if (param_11 == '\0') {
        if ((char)param_5 != '\x01') goto LAB_008564c8;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 0xc;
        if (param_5 == 0) goto LAB_00856148;
        param_5 = FUN_007e2370(param_5,param_1,0x50,1,2,param_2,param_3);
      }
      else {
        if ((char)param_5 != '\x01') goto LAB_008564c8;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 0xd;
        if (param_5 == 0) goto LAB_00856148;
        param_5 = FUN_007e2370(param_5,param_1,0x5b,1,2,param_2,param_3);
      }
    }
    else if (param_11 == '\0') {
      if ((char)param_5 != '\x01') goto LAB_008564c8;
      param_5 = FUN_00401f00(0x10,uVar1);
      local_4 = 0xe;
      if (param_5 == 0) goto LAB_00856148;
      param_5 = FUN_007e2370(param_5,param_1,0x53,1,2,param_2,param_3);
    }
    else {
      if ((char)param_5 != '\x01') goto LAB_008564c8;
      param_5 = FUN_00401f00(0x10,uVar1);
      local_4 = 0xf;
      if (param_5 == 0) goto LAB_00856148;
      param_5 = FUN_007e2370(param_5,param_1,0x5e,1,2,param_2,param_3);
    }
  }
  else {
    if (param_9 != '\0') {
      if (DAT_00b42e8c == (code *)0x0) goto LAB_008564e7;
      pcVar2 = 
      "SHADER ERROR : no shader to handle BSSM_AD2_SGFg ( skinned & glowmap & facegenblend )";
      goto LAB_008564e2;
    }
    if (param_11 == '\0') {
      if ((char)param_5 != '\x01') goto LAB_008564c8;
      param_5 = FUN_00401f00(0x10,uVar1);
      local_4 = 0x10;
      if (param_5 == 0) goto LAB_00856148;
      param_5 = FUN_007e2370(param_5,param_1,0x51,1,2,param_2,param_3);
    }
    else {
      if ((char)param_5 != '\x01') goto LAB_008564c8;
      param_5 = FUN_00401f00(0x10,uVar1);
      local_4 = 0x11;
      if (param_5 == 0) goto LAB_00856148;
      param_5 = FUN_007e2370(param_5,param_1,0x5c,1,2,param_2,param_3);
    }
  }
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_5);
LAB_008564e7:
  *param_6 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00856510(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 short *param_5,int param_6,undefined1 *param_7,char param_8,char param_9,
                 char param_10,undefined4 param_11,char param_12,char param_13,char param_14)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  char *pcVar2;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3d52;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_8 == '\0') {
    if (param_9 == '\0') {
      if (param_10 == '\0') {
        if (param_13 == '\0') {
          if (param_12 == '\0') {
            if (param_14 == '\0') {
              if ((char)param_6 != '\x01') goto LAB_00856d1d;
              param_6 = FUN_00401f00(0x10,uVar1);
              local_4 = 0;
              if (param_6 == 0) goto LAB_00856800;
              param_6 = FUN_007e2370(param_6,param_1,0x60,1,3,param_2,param_3,param_4);
            }
            else {
              if ((char)param_6 != '\x01') goto LAB_00856d1d;
              param_6 = FUN_00401f00(0x10,uVar1);
              local_4 = 1;
              if (param_6 == 0) goto LAB_00856800;
              param_6 = FUN_007e2370(param_6,param_1,0x6a,1,3,param_2,param_3,param_4);
            }
          }
          else if (param_14 == '\0') {
            if ((char)param_6 != '\x01') goto LAB_00856d1d;
            param_6 = FUN_00401f00(0x10,uVar1);
            local_4 = 2;
            if (param_6 == 0) goto LAB_00856800;
            param_6 = FUN_007e2370(param_6,param_1,0x6b,1,3,param_2,param_3,param_4);
          }
          else {
            if ((char)param_6 != '\x01') goto LAB_00856d1d;
            param_6 = FUN_00401f00(0x10,uVar1);
            local_4 = 3;
            if (param_6 == 0) goto LAB_00856800;
            param_6 = FUN_007e2370(param_6,param_1,0x75,1,3,param_2,param_3,param_4);
          }
        }
        else if (param_12 == '\0') {
          if ((char)param_6 != '\x01') goto LAB_00856d1d;
          param_6 = FUN_00401f00(0x10,uVar1);
          local_4 = 4;
          if (param_6 == 0) goto LAB_00856800;
          param_6 = FUN_007e2370(param_6,param_1,0x62,1,3,param_2,param_3,param_4);
        }
        else {
          if ((char)param_6 != '\x01') goto LAB_00856d1d;
          param_6 = FUN_00401f00(0x10,uVar1);
          local_4 = 5;
          if (param_6 == 0) goto LAB_00856800;
          param_6 = FUN_007e2370(param_6,param_1,0x6d,1,3,param_2,param_3,param_4);
        }
      }
      else if (param_12 == '\0') {
        if ((char)param_6 != '\x01') {
LAB_00856d1d:
          *param_5 = *param_5 + 1;
          goto LAB_00856d3c;
        }
        param_6 = FUN_00401f00(0x10,uVar1);
        local_4 = 6;
        if (param_6 == 0) {
LAB_00856800:
          param_6 = 0;
        }
        else {
          param_6 = FUN_007e2370(param_6,param_1,100,1,3,param_2,param_3,param_4);
        }
      }
      else {
        if ((char)param_6 != '\x01') goto LAB_00856d1d;
        param_6 = FUN_00401f00(0x10,uVar1);
        local_4 = 7;
        if (param_6 == 0) goto LAB_00856800;
        param_6 = FUN_007e2370(param_6,param_1,0x6f,1,3,param_2,param_3,param_4);
      }
    }
    else {
      if (param_10 != '\0') {
        if (DAT_00b42e8c == (code *)0x0) goto LAB_00856d3c;
        pcVar2 = "SHADER ERROR : no shader to handle BSSM_AD3_GFg ( glowmap & facegenblend )";
LAB_00856d37:
        (*DAT_00b42e8c)(pcVar2,0);
        goto LAB_00856d3c;
      }
      if (param_13 == '\0') {
        if (param_12 == '\0') {
          if ((char)param_6 != '\x01') goto LAB_00856d1d;
          param_6 = FUN_00401f00(0x10,uVar1);
          local_4 = 8;
          if (param_6 == 0) goto LAB_00856800;
          param_6 = FUN_007e2370(param_6,param_1,0x61,1,3,param_2,param_3,param_4);
        }
        else {
          if ((char)param_6 != '\x01') goto LAB_00856d1d;
          param_6 = FUN_00401f00(0x10,uVar1);
          local_4 = 9;
          if (param_6 == 0) goto LAB_00856800;
          param_6 = FUN_007e2370(param_6,param_1,0x6c,1,3,param_2,param_3,param_4);
        }
      }
      else if (param_12 == '\0') {
        if ((char)param_6 != '\x01') goto LAB_00856d1d;
        param_6 = FUN_00401f00(0x10,uVar1);
        local_4 = 10;
        if (param_6 == 0) goto LAB_00856800;
        param_6 = FUN_007e2370(param_6,param_1,99,1,3,param_2,param_3,param_4);
      }
      else {
        if ((char)param_6 != '\x01') goto LAB_00856d1d;
        param_6 = FUN_00401f00(0x10,uVar1);
        local_4 = 0xb;
        if (param_6 == 0) goto LAB_00856800;
        param_6 = FUN_007e2370(param_6,param_1,0x6e,1,3,param_2,param_3,param_4);
      }
    }
  }
  else {
    if (param_9 != '\0') {
      if (param_10 != '\0') {
        if (DAT_00b42e8c == (code *)0x0) goto LAB_00856d3c;
        pcVar2 = 
        "SHADER ERROR : no shader to handle BSSM_AD3_SGFg ( skinned & glowmap & facegenblend )";
        goto LAB_00856d37;
      }
      if (param_13 == '\0') {
        if (param_12 == '\0') {
          if ((char)param_6 != '\x01') goto LAB_00856d1d;
          param_6 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x12;
          if (param_6 == 0) goto LAB_00856800;
          param_6 = FUN_007e2370(param_6,param_1,0x67,1,3,param_2,param_3,param_4);
        }
        else {
          if ((char)param_6 != '\x01') goto LAB_00856d1d;
          param_6 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x13;
          if (param_6 == 0) goto LAB_00856800;
          param_6 = FUN_007e2370(param_6,param_1,0x72,1,3,param_2,param_3,param_4);
        }
      }
      else if (param_12 == '\0') {
        if ((char)param_6 != '\x01') goto LAB_00856d1d;
        param_6 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x14;
        if (param_6 == 0) goto LAB_00856800;
        param_6 = FUN_007e2370(param_6,param_1,0x68,1,3,param_2,param_3,param_4);
      }
      else {
        if ((char)param_6 != '\x01') goto LAB_00856d1d;
        param_6 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x15;
        if (param_6 == 0) goto LAB_00856800;
        param_6 = FUN_007e2370(param_6,param_1,0x73,1,3,param_2,param_3,param_4);
      }
      goto LAB_00856802;
    }
    if (param_10 == '\0') {
      if (param_13 == '\0') {
        if (param_12 == '\0') {
          if ((char)param_6 != '\x01') goto LAB_00856d1d;
          param_6 = FUN_00401f00(0x10,uVar1);
          local_4 = 0xc;
          if (param_6 == 0) goto LAB_00856800;
          param_6 = FUN_007e2370(param_6,param_1,0x65,1,3,param_2,param_3,param_4);
        }
        else {
          if ((char)param_6 != '\x01') goto LAB_00856d1d;
          param_6 = FUN_00401f00(0x10,uVar1);
          local_4 = 0xd;
          if (param_6 == 0) goto LAB_00856800;
          param_6 = FUN_007e2370(param_6,param_1,0x70,1,3,param_2,param_3,param_4);
        }
      }
      else if (param_12 == '\0') {
        if ((char)param_6 != '\x01') goto LAB_00856d1d;
        param_6 = FUN_00401f00(0x10,uVar1);
        local_4 = 0xe;
        if (param_6 == 0) goto LAB_00856800;
        param_6 = FUN_007e2370(param_6,param_1,0x66,1,3,param_2,param_3,param_4);
      }
      else {
        if ((char)param_6 != '\x01') goto LAB_00856d1d;
        param_6 = FUN_00401f00(0x10,uVar1);
        local_4 = 0xf;
        if (param_6 == 0) goto LAB_00856800;
        param_6 = FUN_007e2370(param_6,param_1,0x71,1,3,param_2,param_3,param_4);
      }
    }
    else if (param_12 == '\0') {
      if ((char)param_6 != '\x01') goto LAB_00856d1d;
      param_6 = FUN_00401f00(0x10,uVar1);
      local_4 = 0x10;
      if (param_6 == 0) goto LAB_00856800;
      param_6 = FUN_007e2370(param_6,param_1,0x69,1,3,param_2,param_3,param_4);
    }
    else {
      if ((char)param_6 != '\x01') goto LAB_00856d1d;
      param_6 = FUN_00401f00(0x10,uVar1);
      local_4 = 0x11;
      if (param_6 == 0) goto LAB_00856800;
      param_6 = FUN_007e2370(param_6,param_1,0x74,1,3,param_2,param_3,param_4);
    }
  }
LAB_00856802:
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_6);
LAB_00856d3c:
  *param_7 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00856d60(undefined4 param_1,undefined4 param_2,short *param_3,int param_4,
                 undefined1 *param_5,char param_6,char param_7,char param_8,undefined4 param_9,
                 char param_10,char param_11,char param_12,char param_13,char param_14,char param_15
                 )

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3eaf;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_6 == '\0') {
    if (param_7 == '\0') {
      if (param_8 != '\0') {
        if (param_10 == '\0') {
          if ((char)param_4 == '\x01') {
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 4;
            if (param_4 != 0) {
              param_4 = FUN_007e2370(param_4,param_1,0x79,1,1,param_2);
              goto LAB_00857708;
            }
LAB_00857706:
            param_4 = 0;
            goto LAB_00857708;
          }
        }
        else if ((char)param_4 == '\x01') {
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 5;
          if (param_4 == 0) goto LAB_00857706;
          param_4 = FUN_007e2370(param_4,param_1,0x87,1,1,param_2);
          goto LAB_00857708;
        }
        goto LAB_00857723;
      }
      if (param_11 == '\0') {
        if (param_12 == '\0') {
          if (param_10 == '\0') {
            if (param_13 == '\0') {
              if (param_14 == '\0') {
                if (param_15 == '\0') {
                  if ((char)param_4 != '\x01') goto LAB_00857723;
                  param_4 = FUN_00401f00(0x10,uVar1);
                  local_4 = 6;
                  if (param_4 == 0) goto LAB_00857706;
                  param_4 = FUN_007e2370(param_4,param_1,0x76,1,1,param_2);
                }
                else {
                  if ((char)param_4 != '\x01') goto LAB_00857723;
                  param_4 = FUN_00401f00(0x10,uVar1);
                  local_4 = 7;
                  if (param_4 == 0) goto LAB_00857706;
                  param_4 = FUN_007e2370(param_4,param_1,0x7c,1,1,param_2);
                }
                goto LAB_00857708;
              }
            }
            else if (param_14 == '\0') {
              if ((char)param_4 == '\x01') {
                param_4 = FUN_00401f00(0x10,uVar1);
                local_4 = 9;
                if (param_4 == 0) goto LAB_00857706;
                param_4 = FUN_007e2370(param_4,param_1,0x82,1,1,param_2);
                goto LAB_00857708;
              }
              goto LAB_00857723;
            }
            if ((char)param_4 != '\x01') goto LAB_00857723;
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 8;
            if (param_4 == 0) goto LAB_00857706;
            param_4 = FUN_007e2370(param_4,param_1,0x17b,1,1,param_2);
          }
          else if (param_13 == '\0') {
            if (param_15 == '\0') {
              if ((char)param_4 != '\x01') goto LAB_00857723;
              param_4 = FUN_00401f00(0x10,uVar1);
              local_4 = 10;
              if (param_4 == 0) goto LAB_00857706;
              param_4 = FUN_007e2370(param_4,param_1,0x84,1,1,param_2);
            }
            else {
              if ((char)param_4 != '\x01') goto LAB_00857723;
              param_4 = FUN_00401f00(0x10,uVar1);
              local_4 = 0xb;
              if (param_4 == 0) goto LAB_00857706;
              param_4 = FUN_007e2370(param_4,param_1,0x8a,1,1,param_2);
            }
          }
          else {
            if ((char)param_4 != '\x01') goto LAB_00857723;
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 0xc;
            if (param_4 == 0) goto LAB_00857706;
            param_4 = FUN_007e2370(param_4,param_1,0x90,1,1,param_2);
          }
        }
        else if (param_10 == '\0') {
          if ((char)param_4 != '\x01') goto LAB_00857723;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0xd;
          if (param_4 == 0) goto LAB_00857706;
          param_4 = FUN_007e2370(param_4,param_1,0x77,1,1,param_2);
        }
        else {
          if ((char)param_4 != '\x01') goto LAB_00857723;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0xe;
          if (param_4 == 0) goto LAB_00857706;
          param_4 = FUN_007e2370(param_4,param_1,0x85,1,1,param_2);
        }
      }
      else if (param_10 == '\0') {
        if ((char)param_4 != '\x01') goto LAB_00857723;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0xf;
        if (param_4 == 0) goto LAB_00857706;
        param_4 = FUN_007e2370(param_4,param_1,0x7a,1,1,param_2);
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_00857723;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x10;
        if (param_4 == 0) goto LAB_00857706;
        param_4 = FUN_007e2370(param_4,param_1,0x88,1,1,param_2);
      }
    }
    else {
      if (param_8 != '\0') {
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)("SHADER ERROR : no shader to handle ADT_GFg ( glowmap & facegenblend )",0)
          ;
        }
        goto LAB_0085772b;
      }
      if (param_11 == '\0') {
        if (param_10 == '\0') {
          if ((char)param_4 != '\x01') goto LAB_00857723;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0;
          if (param_4 == 0) goto LAB_00857706;
          param_4 = FUN_007e2370(param_4,param_1,0x78,1,1,param_2);
        }
        else {
          if ((char)param_4 != '\x01') goto LAB_00857723;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 1;
          if (param_4 == 0) goto LAB_00857706;
          param_4 = FUN_007e2370(param_4,param_1,0x86,1,1,param_2);
        }
      }
      else if (param_10 == '\0') {
        if ((char)param_4 != '\x01') goto LAB_00857723;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 2;
        if (param_4 == 0) goto LAB_00857706;
        param_4 = FUN_007e2370(param_4,param_1,0x7b,1,1,param_2);
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_00857723;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 3;
        if (param_4 == 0) goto LAB_00857706;
        param_4 = FUN_007e2370(param_4,param_1,0x89,1,1,param_2);
      }
    }
  }
  else if (param_7 == '\0') {
    if (param_8 == '\0') {
      if (param_11 == '\0') {
        if (param_10 == '\0') {
          if (param_15 == '\0') {
            if ((char)param_4 != '\x01') goto LAB_00857723;
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 0x17;
            if (param_4 == 0) goto LAB_00857706;
            param_4 = FUN_007e2370(param_4,param_1,0x7d,1,1,param_2);
          }
          else {
            if ((char)param_4 != '\x01') goto LAB_00857723;
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 0x18;
            if (param_4 == 0) goto LAB_00857706;
            param_4 = FUN_007e2370(param_4,param_1,0x83,1,1,param_2);
          }
        }
        else if (param_15 == '\0') {
          if ((char)param_4 != '\x01') goto LAB_00857723;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x19;
          if (param_4 == 0) goto LAB_00857706;
          param_4 = FUN_007e2370(param_4,param_1,0x8b,1,1,param_2);
        }
        else {
          if ((char)param_4 != '\x01') goto LAB_00857723;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x1a;
          if (param_4 == 0) goto LAB_00857706;
          param_4 = FUN_007e2370(param_4,param_1,0x91,1,1,param_2);
        }
      }
      else if (param_10 == '\0') {
        if ((char)param_4 != '\x01') goto LAB_00857723;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x1b;
        if (param_4 == 0) goto LAB_00857706;
        param_4 = FUN_007e2370(param_4,param_1,0x80,1,1,param_2);
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_00857723;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x1c;
        if (param_4 == 0) goto LAB_00857706;
        param_4 = FUN_007e2370(param_4,param_1,0x8e,1,1,param_2);
      }
    }
    else if (param_10 == '\0') {
      if ((char)param_4 != '\x01') {
LAB_00857723:
        *param_3 = *param_3 + 1;
        goto LAB_0085772b;
      }
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 0x15;
      if (param_4 == 0) goto LAB_00857706;
      param_4 = FUN_007e2370(param_4,param_1,0x7f,1,1,param_2);
    }
    else {
      if ((char)param_4 != '\x01') goto LAB_00857723;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 0x16;
      if (param_4 == 0) goto LAB_00857706;
      param_4 = FUN_007e2370(param_4,param_1,0x8d,1,1,param_2);
    }
  }
  else {
    if (param_8 != '\0') {
      if (DAT_00b42e8c != (code *)0x0) {
        (*DAT_00b42e8c)("SHADER ERROR : no shader to handle ADT_SGFg ( skinned & glowmap & facegenblend )"
                        ,0);
      }
      goto LAB_0085772b;
    }
    if (param_11 == '\0') {
      if (param_10 == '\0') {
        if ((char)param_4 != '\x01') goto LAB_00857723;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x11;
        if (param_4 == 0) goto LAB_00857706;
        param_4 = FUN_007e2370(param_4,param_1,0x7e,1,1,param_2);
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_00857723;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x12;
        if (param_4 == 0) goto LAB_00857706;
        param_4 = FUN_007e2370(param_4,param_1,0x8c,1,1,param_2);
      }
    }
    else if (param_10 == '\0') {
      if ((char)param_4 != '\x01') goto LAB_00857723;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 0x13;
      if (param_4 == 0) goto LAB_00857706;
      param_4 = FUN_007e2370(param_4,param_1,0x81,1,1,param_2);
    }
    else {
      if ((char)param_4 != '\x01') goto LAB_00857723;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 0x14;
      if (param_4 == 0) goto LAB_00857706;
      param_4 = FUN_007e2370(param_4,param_1,0x8f,1,1,param_2);
    }
  }
LAB_00857708:
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_4);
LAB_0085772b:
  *param_5 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00857750(undefined4 param_1,undefined4 param_2,undefined4 param_3,short *param_4,
                 int param_5,undefined1 *param_6,char param_7,char param_8,char param_9,
                 undefined4 param_10,char param_11,char param_12,char param_13,char param_14)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3fee;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_7 == '\0') {
    if (param_8 == '\0') {
      if (param_9 == '\0') {
        if (param_12 == '\0') {
          if (param_11 == '\0') {
            if (param_13 == '\0') {
              if (param_14 == '\0') {
                if ((char)param_5 != '\x01') goto LAB_008580b1;
                param_5 = FUN_00401f00(0x10,uVar1);
                local_4 = 6;
                if (param_5 == 0) goto LAB_00858094;
                param_5 = FUN_007e2370(param_5,param_1,0x92,1,2,param_2,param_3);
              }
              else {
                if ((char)param_5 != '\x01') goto LAB_008580b1;
                param_5 = FUN_00401f00(0x10,uVar1);
                local_4 = 7;
                if (param_5 == 0) goto LAB_00858094;
                param_5 = FUN_007e2370(param_5,param_1,0x97,1,2,param_2,param_3);
              }
            }
            else {
              if ((char)param_5 != '\x01') goto LAB_008580b1;
              param_5 = FUN_00401f00(0x10,uVar1);
              local_4 = 8;
              if (param_5 == 0) goto LAB_00858094;
              param_5 = FUN_007e2370(param_5,param_1,0x9d,1,2,param_2,param_3);
            }
          }
          else if (param_13 == '\0') {
            if (param_14 == '\0') {
              if ((char)param_5 != '\x01') goto LAB_008580b1;
              param_5 = FUN_00401f00(0x10,uVar1);
              local_4 = 9;
              if (param_5 == 0) goto LAB_00858094;
              param_5 = FUN_007e2370(param_5,param_1,0x9f,1,2,param_2,param_3);
            }
            else {
              if ((char)param_5 != '\x01') goto LAB_008580b1;
              param_5 = FUN_00401f00(0x10,uVar1);
              local_4 = 10;
              if (param_5 == 0) goto LAB_00858094;
              param_5 = FUN_007e2370(param_5,param_1,0xa4,1,2,param_2,param_3);
            }
          }
          else {
            if ((char)param_5 != '\x01') goto LAB_008580b1;
            param_5 = FUN_00401f00(0x10,uVar1);
            local_4 = 0xb;
            if (param_5 == 0) goto LAB_00858094;
            param_5 = FUN_007e2370(param_5,param_1,0xaa,1,2,param_2,param_3);
          }
        }
        else if (param_11 == '\0') {
          if ((char)param_5 != '\x01') goto LAB_008580b1;
          param_5 = FUN_00401f00(0x10,uVar1);
          local_4 = 0xc;
          if (param_5 == 0) goto LAB_00858094;
          param_5 = FUN_007e2370(param_5,param_1,0x95,1,2,param_2,param_3);
        }
        else {
          if ((char)param_5 != '\x01') goto LAB_008580b1;
          param_5 = FUN_00401f00(0x10,uVar1);
          local_4 = 0xd;
          if (param_5 == 0) goto LAB_00858094;
          param_5 = FUN_007e2370(param_5,param_1,0xa2,1,2,param_2,param_3);
        }
      }
      else if (param_11 == '\0') {
        if ((char)param_5 != '\x01') {
LAB_008580b1:
          *param_4 = *param_4 + 1;
          goto LAB_008580b9;
        }
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 4;
        if (param_5 == 0) {
LAB_00858094:
          param_5 = 0;
        }
        else {
          param_5 = FUN_007e2370(param_5,param_1,0x94,1,2,param_2,param_3);
        }
      }
      else {
        if ((char)param_5 != '\x01') goto LAB_008580b1;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 5;
        if (param_5 == 0) goto LAB_00858094;
        param_5 = FUN_007e2370(param_5,param_1,0xa1,1,2,param_2,param_3);
      }
    }
    else {
      if (param_9 != '\0') {
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)("SHADER ERROR : no shader to handle ADT2_GFg ( 2 lights & glowmap & facegenblend )"
                          ,0);
        }
        goto LAB_008580b9;
      }
      if (param_12 == '\0') {
        if (param_11 == '\0') {
          if ((char)param_5 != '\x01') goto LAB_008580b1;
          param_5 = FUN_00401f00(0x10,uVar1);
          local_4 = 0;
          if (param_5 == 0) goto LAB_00858094;
          param_5 = FUN_007e2370(param_5,param_1,0x93,1,2,param_2,param_3);
        }
        else {
          if ((char)param_5 != '\x01') goto LAB_008580b1;
          param_5 = FUN_00401f00(0x10,uVar1);
          local_4 = 1;
          if (param_5 == 0) goto LAB_00858094;
          param_5 = FUN_007e2370(param_5,param_1,0xa0,1,2,param_2,param_3);
        }
      }
      else if (param_11 == '\0') {
        if ((char)param_5 != '\x01') goto LAB_008580b1;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 2;
        if (param_5 == 0) goto LAB_00858094;
        param_5 = FUN_007e2370(param_5,param_1,0x96,1,2,param_2,param_3);
      }
      else {
        if ((char)param_5 != '\x01') goto LAB_008580b1;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 3;
        if (param_5 == 0) goto LAB_00858094;
        param_5 = FUN_007e2370(param_5,param_1,0xa3,1,2,param_2,param_3);
      }
    }
  }
  else if (param_8 == '\0') {
    if (param_9 == '\0') {
      if (param_12 == '\0') {
        if (param_11 == '\0') {
          if (param_14 == '\0') {
            if ((char)param_5 != '\x01') goto LAB_008580b1;
            param_5 = FUN_00401f00(0x10,uVar1);
            local_4 = 0x14;
            if (param_5 == 0) goto LAB_00858094;
            param_5 = FUN_007e2370(param_5,param_1,0x98,1,2,param_2,param_3);
          }
          else {
            if ((char)param_5 != '\x01') goto LAB_008580b1;
            param_5 = FUN_00401f00(0x10,uVar1);
            local_4 = 0x15;
            if (param_5 == 0) goto LAB_00858094;
            param_5 = FUN_007e2370(param_5,param_1,0x9e,1,2,param_2,param_3);
          }
        }
        else if (param_14 == '\0') {
          if ((char)param_5 != '\x01') goto LAB_008580b1;
          param_5 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x16;
          if (param_5 == 0) goto LAB_00858094;
          param_5 = FUN_007e2370(param_5,param_1,0xa5,1,2,param_2,param_3);
        }
        else {
          if ((char)param_5 != '\x01') goto LAB_008580b1;
          param_5 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x17;
          if (param_5 == 0) goto LAB_00858094;
          param_5 = FUN_007e2370(param_5,param_1,0xab,1,2,param_2,param_3);
        }
      }
      else if (param_11 == '\0') {
        if ((char)param_5 != '\x01') goto LAB_008580b1;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x18;
        if (param_5 == 0) goto LAB_00858094;
        param_5 = FUN_007e2370(param_5,param_1,0x9b,1,2,param_2,param_3);
      }
      else {
        if ((char)param_5 != '\x01') goto LAB_008580b1;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x19;
        if (param_5 == 0) goto LAB_00858094;
        param_5 = FUN_007e2370(param_5,param_1,0xa8,1,2,param_2,param_3);
      }
    }
    else if (param_11 == '\0') {
      if ((char)param_5 != '\x01') goto LAB_008580b1;
      param_5 = FUN_00401f00(0x10,uVar1);
      local_4 = 0x12;
      if (param_5 == 0) goto LAB_00858094;
      param_5 = FUN_007e2370(param_5,param_1,0x9a,1,2,param_2,param_3);
    }
    else {
      if ((char)param_5 != '\x01') goto LAB_008580b1;
      param_5 = FUN_00401f00(0x10,uVar1);
      local_4 = 0x13;
      if (param_5 == 0) goto LAB_00858094;
      param_5 = FUN_007e2370(param_5,param_1,0xa7,1,2,param_2,param_3);
    }
  }
  else {
    if (param_9 != '\0') {
      if (DAT_00b42e8c != (code *)0x0) {
        (*DAT_00b42e8c)("SHADER ERROR : no shader to handle ADT_SGFg ( 2 lights & skinned & glowmap & facegenblend )"
                        ,0);
      }
      goto LAB_008580b9;
    }
    if (param_12 == '\0') {
      if (param_11 == '\0') {
        if ((char)param_5 != '\x01') goto LAB_008580b1;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 0xe;
        if (param_5 == 0) goto LAB_00858094;
        param_5 = FUN_007e2370(param_5,param_1,0x99,1,2,param_2,param_3);
      }
      else {
        if ((char)param_5 != '\x01') goto LAB_008580b1;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 0xf;
        if (param_5 == 0) goto LAB_00858094;
        param_5 = FUN_007e2370(param_5,param_1,0xa6,1,2,param_2,param_3);
      }
    }
    else if (param_11 == '\0') {
      if ((char)param_5 != '\x01') goto LAB_008580b1;
      param_5 = FUN_00401f00(0x10,uVar1);
      local_4 = 0x10;
      if (param_5 == 0) goto LAB_00858094;
      param_5 = FUN_007e2370(param_5,param_1,0x9c,1,2,param_2,param_3);
    }
    else {
      if ((char)param_5 != '\x01') goto LAB_008580b1;
      param_5 = FUN_00401f00(0x10,uVar1);
      local_4 = 0x11;
      if (param_5 == 0) goto LAB_00858094;
      param_5 = FUN_007e2370(param_5,param_1,0xa9,1,2,param_2,param_3);
    }
  }
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_5);
LAB_008580b9:
  *param_6 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008580e0(undefined4 param_1,undefined4 param_2,short *param_3,int param_4,
                 undefined1 *param_5,char param_6,char param_7,char param_8,undefined4 param_9,
                 char param_10,char param_11,char param_12,char param_13)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d4102;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_6 != '\0') {
    if (param_7 == '\0') {
      if (param_8 != '\0') {
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)("SHADER ERROR : no shader to handle ADTS_SFg ( skinned & facegenblend )",0
                         );
        }
        goto LAB_008588c5;
      }
      if (param_11 == '\0') {
        if (param_10 == '\0') {
          if (param_13 == '\0') {
            if ((char)param_4 != '\x01') goto LAB_008588bd;
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 0x10;
            if (param_4 == 0) goto LAB_008588a0;
            param_4 = FUN_007e2370(param_4,param_1,0xb2,1,1,param_2);
          }
          else {
            if ((char)param_4 != '\x01') goto LAB_008588bd;
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 0x11;
            if (param_4 == 0) goto LAB_008588a0;
            param_4 = FUN_007e2370(param_4,param_1,0xb4,1,1,param_2);
          }
        }
        else if (param_13 == '\0') {
          if ((char)param_4 != '\x01') goto LAB_008588bd;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x12;
          if (param_4 == 0) goto LAB_008588a0;
          param_4 = FUN_007e2370(param_4,param_1,0xbf,1,1,param_2);
        }
        else {
          if ((char)param_4 != '\x01') goto LAB_008588bd;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x13;
          if (param_4 == 0) goto LAB_008588a0;
          param_4 = FUN_007e2370(param_4,param_1,0xc1,1,1,param_2);
        }
      }
      else if (param_10 == '\0') {
        if ((char)param_4 != '\x01') goto LAB_008588bd;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x14;
        if (param_4 == 0) goto LAB_008588a0;
        param_4 = FUN_007e2370(param_4,param_1,0xb6,1,1,param_2);
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_008588bd;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x15;
        if (param_4 == 0) goto LAB_008588a0;
        param_4 = FUN_007e2370(param_4,param_1,0xc3,1,1,param_2);
      }
      goto LAB_008588a2;
    }
    if (param_8 != '\0') {
      if (DAT_00b42e8c != (code *)0x0) {
        (*DAT_00b42e8c)("SHADER ERROR : no shader to handle ADT_SGFg ( skinned & glowmap & facegenblend )"
                        ,0);
      }
      goto LAB_008588c5;
    }
    if (param_11 == '\0') {
      if (param_10 == '\0') {
        if ((char)param_4 != '\x01') goto LAB_008588bd;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0xc;
        if (param_4 == 0) goto LAB_008588a0;
        param_4 = FUN_007e2370(param_4,param_1,0xb3,1,1,param_2);
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_008588bd;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 0xd;
        if (param_4 == 0) goto LAB_008588a0;
        param_4 = FUN_007e2370(param_4,param_1,0xc0,1,1,param_2);
      }
    }
    else if (param_10 == '\0') {
      if ((char)param_4 != '\x01') goto LAB_008588bd;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 0xe;
      if (param_4 == 0) goto LAB_008588a0;
      param_4 = FUN_007e2370(param_4,param_1,0xb7,1,1,param_2);
    }
    else {
      if ((char)param_4 != '\x01') goto LAB_008588bd;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 0xf;
      if (param_4 == 0) goto LAB_008588a0;
      param_4 = FUN_007e2370(param_4,param_1,0xc4,1,1,param_2);
    }
    goto LAB_008588a2;
  }
  if (param_7 == '\0') {
    if (param_8 != '\0') {
      if (DAT_00b42e8c != (code *)0x0) {
        (*DAT_00b42e8c)("SHADER ERROR : no shader to handle ADTS_Fg ( facegenblend )",0);
      }
      goto LAB_008588c5;
    }
    if (param_11 == '\0') {
      if (param_10 == '\0') {
        if (param_12 == '\0') {
          if (param_13 == '\0') {
            if ((char)param_4 != '\x01') goto LAB_008588bd;
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 4;
            if (param_4 == 0) goto LAB_008588a0;
            param_4 = FUN_007e2370(param_4,param_1,0xac,1,1,param_2);
          }
          else {
            if ((char)param_4 != '\x01') goto LAB_008588bd;
            param_4 = FUN_00401f00(0x10,uVar1);
            local_4 = 5;
            if (param_4 == 0) goto LAB_008588a0;
            param_4 = FUN_007e2370(param_4,param_1,0xae,1,1,param_2);
          }
        }
        else {
          if ((char)param_4 != '\x01') goto LAB_008588bd;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 6;
          if (param_4 == 0) goto LAB_008588a0;
          param_4 = FUN_007e2370(param_4,param_1,0xb8,1,1,param_2);
        }
      }
      else if (param_12 == '\0') {
        if (param_13 == '\0') {
          if ((char)param_4 != '\x01') goto LAB_008588bd;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 7;
          if (param_4 == 0) goto LAB_008588a0;
          param_4 = FUN_007e2370(param_4,param_1,0xb9,1,1,param_2);
        }
        else {
          if ((char)param_4 != '\x01') goto LAB_008588bd;
          param_4 = FUN_00401f00(0x10,uVar1);
          local_4 = 8;
          if (param_4 == 0) goto LAB_008588a0;
          param_4 = FUN_007e2370(param_4,param_1,0xbb,1,1,param_2);
        }
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_008588bd;
        param_4 = FUN_00401f00(0x10,uVar1);
        local_4 = 9;
        if (param_4 == 0) goto LAB_008588a0;
        param_4 = FUN_007e2370(param_4,param_1,0xc5,1,1,param_2);
      }
    }
    else if (param_10 == '\0') {
      if ((char)param_4 != '\x01') goto LAB_008588bd;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 10;
      if (param_4 == 0) goto LAB_008588a0;
      param_4 = FUN_007e2370(param_4,param_1,0xb0,1,1,param_2);
    }
    else {
      if ((char)param_4 != '\x01') goto LAB_008588bd;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 0xb;
      if (param_4 == 0) goto LAB_008588a0;
      param_4 = FUN_007e2370(param_4,param_1,0xbd,1,1,param_2);
    }
    goto LAB_008588a2;
  }
  if (param_8 != '\0') {
    if (DAT_00b42e8c != (code *)0x0) {
      (*DAT_00b42e8c)("SHADER ERROR : no shader to handle ADTS_GFg ( glowmap & facegenblend )",0);
    }
    goto LAB_008588c5;
  }
  if (param_11 == '\0') {
    if (param_10 == '\0') {
      if ((char)param_4 != '\x01') {
LAB_008588bd:
        *param_3 = *param_3 + 1;
        goto LAB_008588c5;
      }
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (param_4 == 0) {
LAB_008588a0:
        param_4 = 0;
      }
      else {
        param_4 = FUN_007e2370(param_4,param_1,0xad,1,1,param_2);
      }
    }
    else {
      if ((char)param_4 != '\x01') goto LAB_008588bd;
      param_4 = FUN_00401f00(0x10,uVar1);
      local_4 = 1;
      if (param_4 == 0) goto LAB_008588a0;
      param_4 = FUN_007e2370(param_4,param_1,0xba,1,1,param_2);
    }
  }
  else if (param_10 == '\0') {
    if ((char)param_4 != '\x01') goto LAB_008588bd;
    param_4 = FUN_00401f00(0x10,uVar1);
    local_4 = 2;
    if (param_4 == 0) goto LAB_008588a0;
    param_4 = FUN_007e2370(param_4,param_1,0xb1,1,1,param_2);
  }
  else {
    if ((char)param_4 != '\x01') goto LAB_008588bd;
    param_4 = FUN_00401f00(0x10,uVar1);
    local_4 = 3;
    if (param_4 == 0) goto LAB_008588a0;
    param_4 = FUN_007e2370(param_4,param_1,0xbe,1,1,param_2);
  }
LAB_008588a2:
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_4);
LAB_008588c5:
  *param_5 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008588e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,short *param_4,
                 int param_5,undefined1 *param_6,char param_7,char param_8,char param_9,
                 undefined4 param_10,char param_11,char param_12,char param_13,char param_14)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d4212;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_7 != '\0') {
    if (param_8 == '\0') {
      if (param_9 != '\0') {
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)("SHADER ERROR : no shader to handle ADTS2_SFg ( skinned & facegenblend )",
                          0);
        }
        goto LAB_00859143;
      }
      if (param_12 == '\0') {
        if (param_11 == '\0') {
          if (param_14 == '\0') {
            if ((char)param_5 != '\x01') goto LAB_0085913b;
            param_5 = FUN_00401f00(0x10,uVar1);
            local_4 = 0x10;
            if (param_5 == 0) goto LAB_0085911e;
            param_5 = FUN_007e2370(param_5,param_1,0xcc,1,2,param_2,param_3);
          }
          else {
            if ((char)param_5 != '\x01') goto LAB_0085913b;
            param_5 = FUN_00401f00(0x10,uVar1);
            local_4 = 0x11;
            if (param_5 == 0) goto LAB_0085911e;
            param_5 = FUN_007e2370(param_5,param_1,0xce,1,2,param_2,param_3);
          }
        }
        else if (param_14 == '\0') {
          if ((char)param_5 != '\x01') goto LAB_0085913b;
          param_5 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x12;
          if (param_5 == 0) goto LAB_0085911e;
          param_5 = FUN_007e2370(param_5,param_1,0xd9,1,2,param_2,param_3);
        }
        else {
          if ((char)param_5 != '\x01') goto LAB_0085913b;
          param_5 = FUN_00401f00(0x10,uVar1);
          local_4 = 0x13;
          if (param_5 == 0) goto LAB_0085911e;
          param_5 = FUN_007e2370(param_5,param_1,0xdb,1,2,param_2,param_3);
        }
      }
      else if (param_11 == '\0') {
        if ((char)param_5 != '\x01') goto LAB_0085913b;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x14;
        if (param_5 == 0) goto LAB_0085911e;
        param_5 = FUN_007e2370(param_5,param_1,0xd0,1,2,param_2,param_3);
      }
      else {
        if ((char)param_5 != '\x01') goto LAB_0085913b;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 0x15;
        if (param_5 == 0) goto LAB_0085911e;
        param_5 = FUN_007e2370(param_5,param_1,0xdd,1,2,param_2,param_3);
      }
      goto LAB_00859129;
    }
    if (param_9 != '\0') {
      if (DAT_00b42e8c != (code *)0x0) {
        (*DAT_00b42e8c)("SHADER ERROR : no shader to handle ADTS2_SGFg ( 2 lights & skinned & glowmap & facegenblend )"
                        ,0);
      }
      goto LAB_00859143;
    }
    if (param_12 == '\0') {
      if (param_11 == '\0') {
        if ((char)param_5 != '\x01') goto LAB_0085913b;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 0xc;
        if (param_5 == 0) goto LAB_0085911e;
        param_5 = FUN_007e2370(param_5,param_1,0xcd,1,2,param_2,param_3);
      }
      else {
        if ((char)param_5 != '\x01') goto LAB_0085913b;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 0xd;
        if (param_5 == 0) goto LAB_0085911e;
        param_5 = FUN_007e2370(param_5,param_1,0xda,1,2,param_2,param_3);
      }
    }
    else if (param_11 == '\0') {
      if ((char)param_5 != '\x01') goto LAB_0085913b;
      param_5 = FUN_00401f00(0x10,uVar1);
      local_4 = 0xe;
      if (param_5 == 0) goto LAB_0085911e;
      param_5 = FUN_007e2370(param_5,param_1,0xd1,1,2,param_2,param_3);
    }
    else {
      if ((char)param_5 != '\x01') goto LAB_0085913b;
      param_5 = FUN_00401f00(0x10,uVar1);
      local_4 = 0xf;
      if (param_5 == 0) goto LAB_0085911e;
      param_5 = FUN_007e2370(param_5,param_1,0xde,1,2,param_2,param_3);
    }
    goto LAB_00859129;
  }
  if (param_8 == '\0') {
    if (param_9 != '\0') {
      if (DAT_00b42e8c != (code *)0x0) {
        (*DAT_00b42e8c)("SHADER ERROR : no shader to handle ADTS2_Fg ( facegenblend )",0);
      }
      goto LAB_00859143;
    }
    if (param_12 == '\0') {
      if (param_11 == '\0') {
        if (param_13 == '\0') {
          if (param_14 == '\0') {
            if ((char)param_5 != '\x01') goto LAB_0085913b;
            param_5 = FUN_00401f00(0x10,uVar1);
            local_4 = 4;
            if (param_5 == 0) goto LAB_0085911e;
            param_5 = FUN_007e2370(param_5,param_1,0xc6,1,2,param_2,param_3);
          }
          else {
            if ((char)param_5 != '\x01') goto LAB_0085913b;
            param_5 = FUN_00401f00(0x10,uVar1);
            local_4 = 5;
            if (param_5 == 0) goto LAB_0085911e;
            param_5 = FUN_007e2370(param_5,param_1,200,1,2,param_2,param_3);
          }
        }
        else {
          if ((char)param_5 != '\x01') goto LAB_0085913b;
          param_5 = FUN_00401f00(0x10,uVar1);
          local_4 = 6;
          if (param_5 == 0) goto LAB_0085911e;
          param_5 = FUN_007e2370(param_5,param_1,0xd2,1,2,param_2,param_3);
        }
      }
      else if (param_13 == '\0') {
        if (param_14 == '\0') {
          if ((char)param_5 != '\x01') goto LAB_0085913b;
          param_5 = FUN_00401f00(0x10,uVar1);
          local_4 = 7;
          if (param_5 == 0) goto LAB_0085911e;
          param_5 = FUN_007e2370(param_5,param_1,0xd3,1,2,param_2,param_3);
        }
        else {
          if ((char)param_5 != '\x01') goto LAB_0085913b;
          param_5 = FUN_00401f00(0x10,uVar1);
          local_4 = 8;
          if (param_5 == 0) goto LAB_0085911e;
          param_5 = FUN_007e2370(param_5,param_1,0xd5,1,2,param_2,param_3);
        }
      }
      else {
        if ((char)param_5 != '\x01') goto LAB_0085913b;
        param_5 = FUN_00401f00(0x10,uVar1);
        local_4 = 9;
        if (param_5 == 0) goto LAB_0085911e;
        param_5 = FUN_007e2370(param_5,param_1,0xdf,1,2,param_2,param_3);
      }
    }
    else if (param_11 == '\0') {
      if ((char)param_5 != '\x01') goto LAB_0085913b;
      param_5 = FUN_00401f00(0x10,uVar1);
      local_4 = 10;
      if (param_5 == 0) goto LAB_0085911e;
      param_5 = FUN_007e2370(param_5,param_1,0xca,1,2,param_2,param_3);
    }
    else {
      if ((char)param_5 != '\x01') goto LAB_0085913b;
      param_5 = FUN_00401f00(0x10,uVar1);
      local_4 = 0xb;
      if (param_5 == 0) goto LAB_0085911e;
      param_5 = FUN_007e2370(param_5,param_1,0xd7,1,2,param_2,param_3);
    }
    goto LAB_00859129;
  }
  if (param_9 != '\0') {
    if (DAT_00b42e8c != (code *)0x0) {
      (*DAT_00b42e8c)("SHADER ERROR : no shader to handle ADTS2_GFg ( 2 lights & glowmap & facegenblend )"
                      ,0);
    }
    goto LAB_00859143;
  }
  if (param_12 == '\0') {
    if (param_11 == '\0') {
      if ((char)param_5 != '\x01') {
LAB_0085913b:
        *param_4 = *param_4 + 1;
        goto LAB_00859143;
      }
      param_5 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (param_5 == 0) {
LAB_0085911e:
        param_5 = 0;
      }
      else {
        param_5 = FUN_007e2370(param_5,param_1,199,1,2,param_2,param_3);
      }
    }
    else {
      if ((char)param_5 != '\x01') goto LAB_0085913b;
      param_5 = FUN_00401f00(0x10,uVar1);
      local_4 = 1;
      if (param_5 == 0) goto LAB_0085911e;
      param_5 = FUN_007e2370(param_5,param_1,0xd4,1,2,param_2,param_3);
    }
  }
  else if (param_11 == '\0') {
    if ((char)param_5 != '\x01') goto LAB_0085913b;
    param_5 = FUN_00401f00(0x10,uVar1);
    local_4 = 2;
    if (param_5 == 0) {
LAB_00858a44:
      param_5 = 0;
    }
    else {
      param_5 = FUN_007e2370(param_5,param_1,0xcb,1,1,param_2);
    }
  }
  else {
    if ((char)param_5 != '\x01') goto LAB_0085913b;
    param_5 = FUN_00401f00(0x10,uVar1);
    local_4 = 3;
    if (param_5 == 0) goto LAB_00858a44;
    param_5 = FUN_007e2370(param_5,param_1,0xd8,1,1,param_2);
  }
LAB_00859129:
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_5);
LAB_00859143:
  *param_6 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00859160(undefined4 param_1,undefined4 param_2,undefined4 param_3,short *param_4,
                 int param_5,undefined1 *param_6,char param_7,char param_8,undefined4 param_9,
                 char param_10,char param_11)

{
  undefined1 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_6;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d427d;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_7 == '\0') {
    if (param_8 == '\0') {
      if (param_10 == '\0') {
        if (param_11 == '\0') {
          if ((char)param_5 != '\x01') goto LAB_00859404;
          param_5 = FUN_00401f00(0x10,uVar2);
          local_4 = 0;
          if (param_5 == 0) goto LAB_008593e7;
          param_5 = FUN_007e2370(param_5,param_1,0xe8,*puVar1,2,param_2,param_3);
        }
        else {
          if ((char)param_5 != '\x01') goto LAB_00859404;
          param_5 = FUN_00401f00(0x10,uVar2);
          local_4 = 1;
          if (param_5 == 0) goto LAB_008593e7;
          param_5 = FUN_007e2370(param_5,param_1,0xee,*puVar1,2,param_2,param_3);
        }
      }
      else {
        if ((char)param_5 != '\x01') goto LAB_00859404;
        param_5 = FUN_00401f00(0x10,uVar2);
        local_4 = 2;
        if (param_5 == 0) goto LAB_008593e7;
        param_5 = FUN_007e2370(param_5,param_1,0xea,*puVar1,2,param_2,param_3);
      }
    }
    else {
      if ((char)param_5 != '\x01') goto LAB_00859404;
      param_5 = FUN_00401f00(0x10,uVar2);
      local_4 = 3;
      if (param_5 == 0) goto LAB_008593e7;
      param_5 = FUN_007e2370(param_5,param_1,0xe9,*puVar1,2,param_2,param_3);
    }
  }
  else if (param_8 == '\0') {
    if (param_10 == '\0') {
      if ((char)param_5 != '\x01') {
LAB_00859404:
        *param_4 = *param_4 + 1;
        goto LAB_0085940c;
      }
      param_5 = FUN_00401f00(0x10,uVar2);
      local_4 = 4;
      if (param_5 == 0) {
LAB_008593e7:
        param_5 = 0;
      }
      else {
        param_5 = FUN_007e2370(param_5,param_1,0xeb,*puVar1,2,param_2,param_3);
      }
    }
    else {
      if ((char)param_5 != '\x01') goto LAB_00859404;
      param_5 = FUN_00401f00(0x10,uVar2);
      local_4 = 5;
      if (param_5 == 0) goto LAB_008593e7;
      param_5 = FUN_007e2370(param_5,param_1,0xed,*puVar1,2,param_2,param_3);
    }
  }
  else {
    if ((char)param_5 != '\x01') goto LAB_00859404;
    param_5 = FUN_00401f00(0x10,uVar2);
    local_4 = 6;
    if (param_5 == 0) goto LAB_008593e7;
    param_5 = FUN_007e2370(param_5,param_1,0xec,*puVar1,2,param_2,param_3);
  }
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_5);
LAB_0085940c:
  *puVar1 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00859430(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 short *param_5,int param_6,undefined1 *param_7,char param_8,char param_9,
                 undefined4 param_10,char param_11,char param_12)

{
  undefined1 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_7;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d42ed;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_8 == '\0') {
    if (param_9 == '\0') {
      if (param_11 == '\0') {
        if (param_12 == '\0') {
          if ((char)param_6 != '\x01') goto LAB_008596f7;
          param_6 = FUN_00401f00(0x10,uVar2);
          local_4 = 0;
          if (param_6 == 0) goto LAB_008596da;
          param_6 = FUN_007e2370(param_6,param_1,0xf6,*puVar1,3,param_2,param_3,param_4);
        }
        else {
          if ((char)param_6 != '\x01') goto LAB_008596f7;
          param_6 = FUN_00401f00(0x10,uVar2);
          local_4 = 1;
          if (param_6 == 0) goto LAB_008596da;
          param_6 = FUN_007e2370(param_6,param_1,0xfc,*puVar1,3,param_2,param_3,param_4);
        }
      }
      else {
        if ((char)param_6 != '\x01') goto LAB_008596f7;
        param_6 = FUN_00401f00(0x10,uVar2);
        local_4 = 2;
        if (param_6 == 0) goto LAB_008596da;
        param_6 = FUN_007e2370(param_6,param_1,0xf8,*puVar1,3,param_2,param_3,param_4);
      }
    }
    else {
      if ((char)param_6 != '\x01') goto LAB_008596f7;
      param_6 = FUN_00401f00(0x10,uVar2);
      local_4 = 3;
      if (param_6 == 0) goto LAB_008596da;
      param_6 = FUN_007e2370(param_6,param_1,0xf7,*puVar1,3,param_2,param_3,param_4);
    }
  }
  else if (param_9 == '\0') {
    if (param_11 == '\0') {
      if ((char)param_6 != '\x01') {
LAB_008596f7:
        *param_5 = *param_5 + 1;
        goto LAB_008596ff;
      }
      param_6 = FUN_00401f00(0x10,uVar2);
      local_4 = 4;
      if (param_6 == 0) {
LAB_008596da:
        param_6 = 0;
      }
      else {
        param_6 = FUN_007e2370(param_6,param_1,0xf9,*puVar1,3,param_2,param_3,param_4);
      }
    }
    else {
      if ((char)param_6 != '\x01') goto LAB_008596f7;
      param_6 = FUN_00401f00(0x10,uVar2);
      local_4 = 5;
      if (param_6 == 0) goto LAB_008596da;
      param_6 = FUN_007e2370(param_6,param_1,0xfb,*puVar1,3,param_2,param_3,param_4);
    }
  }
  else {
    if ((char)param_6 != '\x01') goto LAB_008596f7;
    param_6 = FUN_00401f00(0x10,uVar2);
    local_4 = 6;
    if (param_6 == 0) goto LAB_008596da;
    param_6 = FUN_007e2370(param_6,param_1,0xfa,*puVar1,3,param_2,param_3,param_4);
  }
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_6);
LAB_008596ff:
  *puVar1 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00859720(undefined4 param_1,undefined4 param_2,short *param_3,undefined4 param_4,
                 undefined1 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,int param_12,
                 undefined4 param_13)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d4326;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((char)param_12 == '\0') {
    FUN_00853970(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_13);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if ((char)param_6 == '\0') {
    if ((char)param_4 != '\x01') {
LAB_0085980b:
      *param_3 = *param_3 + 1;
      *unaff_FS_OFFSET = local_c;
      return;
    }
    param_12 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (param_12 != 0) {
      param_12 = FUN_007e2370(param_12,param_1,0x10d,*param_5,0,0);
      goto LAB_008597df;
    }
  }
  else {
    if ((char)param_4 != '\x01') goto LAB_0085980b;
    param_12 = FUN_00401f00(0x10,uVar1);
    local_4 = 1;
    if (param_12 != 0) {
      param_12 = FUN_007e2370(param_12,param_1,0x10e,*param_5,0,0);
      goto LAB_008597df;
    }
  }
  param_12 = 0;
LAB_008597df:
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_12);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00859880(undefined4 param_1,int param_2,short *param_3,int param_4,undefined1 *param_5,
                 char param_6,undefined4 param_7,char param_8,char param_9,char param_10,
                 char param_11)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined1 *puVar4;
  uint uVar5;
  int *piVar6;
  LONG LVar7;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d4437;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar1 = *(char *)(param_2 + 0xfc);
  piVar6 = (int *)FUN_00405ad0(&local_10);
  iVar2 = *piVar6;
  if (((DAT_00b3fa90 == *(float *)(iVar2 + 0xec)) && (DAT_00b3fa94 == *(float *)(iVar2 + 0xf0))) &&
     (DAT_00b3fa98 == *(float *)(iVar2 + 0xf4))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (local_10 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(local_10 + 1);
    if ((LVar7 == 0) && (local_10 != (undefined4 *)0x0)) {
      (**(code **)*local_10)(1,uVar5);
    }
  }
  puVar4 = param_5;
  if (bVar3) goto LAB_00859fec;
  if (param_6 == '\0') {
    if (cVar1 != '\0') {
      if (param_9 == '\0') {
        if (param_10 == '\0') {
          if (param_11 == '\0') {
            if ((char)param_4 != '\x01') goto LAB_00859fe1;
            param_4 = FUN_00401f00(0x10);
            uStack_4 = 8;
            if (param_4 == 0) goto LAB_00859fc4;
            param_4 = FUN_007e2370(param_4,param_1,0x123,*puVar4,1,param_2);
          }
          else {
            if ((char)param_4 != '\x01') goto LAB_00859fe1;
            param_4 = FUN_00401f00(0x10);
            uStack_4 = 9;
            if (param_4 == 0) goto LAB_00859fc4;
            param_4 = FUN_007e2370(param_4,param_1,0x124,*puVar4,1,param_2);
          }
        }
        else {
          if ((char)param_4 != '\x01') goto LAB_00859fe1;
          param_4 = FUN_00401f00(0x10);
          uStack_4 = 10;
          if (param_4 == 0) goto LAB_00859fc4;
          param_4 = FUN_007e2370(param_4,param_1,0x129,*puVar4,1,param_2);
        }
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_00859fe1;
        param_4 = FUN_00401f00(0x10);
        uStack_4 = 0xb;
        if (param_4 == 0) goto LAB_00859fc4;
        param_4 = FUN_007e2370(param_4,param_1,0x125,*puVar4,1,param_2);
      }
      goto LAB_00859fc6;
    }
    if (param_9 == '\0') {
      if (param_8 == '\0') {
        if (param_10 == '\0') {
          if (param_11 == '\0') {
            if ((char)param_4 != '\x01') goto LAB_00859fe1;
            param_4 = FUN_00401f00(0x10);
            uStack_4 = 0;
            if (param_4 == 0) goto LAB_00859fc4;
            param_4 = FUN_007e2370(param_4,param_1,0x115,*puVar4,1,param_2);
          }
          else {
            if ((char)param_4 != '\x01') goto LAB_00859fe1;
            param_4 = FUN_00401f00(0x10);
            uStack_4 = 1;
            if (param_4 == 0) goto LAB_00859fc4;
            param_4 = FUN_007e2370(param_4,param_1,0x116,*puVar4,1,param_2);
          }
        }
        else {
          if ((char)param_4 != '\x01') goto LAB_00859fe1;
          param_4 = FUN_00401f00(0x10);
          uStack_4 = 2;
          if (param_4 == 0) goto LAB_00859fc4;
          param_4 = FUN_007e2370(param_4,param_1,0x11b,*puVar4,1,param_2);
        }
      }
      else if (param_10 == '\0') {
        if (param_11 == '\0') {
          if ((char)param_4 != '\x01') goto LAB_00859fe1;
          param_4 = FUN_00401f00(0x10);
          uStack_4 = 3;
          if (param_4 == 0) goto LAB_00859fc4;
          param_4 = FUN_007e2370(param_4,param_1,0x11c,*puVar4,1,param_2);
        }
        else {
          if ((char)param_4 != '\x01') goto LAB_00859fe1;
          param_4 = FUN_00401f00(0x10);
          uStack_4 = 4;
          if (param_4 == 0) goto LAB_00859fc4;
          param_4 = FUN_007e2370(param_4,param_1,0x11d,*puVar4,1,param_2);
        }
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_00859fe1;
        param_4 = FUN_00401f00(0x10);
        uStack_4 = 5;
        if (param_4 == 0) goto LAB_00859fc4;
        param_4 = FUN_007e2370(param_4,param_1,0x122,*puVar4,1,param_2);
      }
      goto LAB_00859fc6;
    }
    if (param_8 != '\0') {
      if ((char)param_4 != '\x01') goto LAB_00859fe1;
      param_4 = FUN_00401f00(0x10);
      uStack_4 = 7;
      if (param_4 == 0) goto LAB_00859fc4;
      param_4 = FUN_007e2370(param_4,param_1,0x11e,*puVar4,1,param_2);
      goto LAB_00859fc6;
    }
    if ((char)param_4 == '\x01') {
      param_4 = FUN_00401f00(0x10);
      uStack_4 = 6;
      if (param_4 == 0) {
LAB_00859fc4:
        param_4 = 0;
      }
      else {
        param_4 = FUN_007e2370(param_4,param_1,0x117,*puVar4,1,param_2);
      }
      goto LAB_00859fc6;
    }
LAB_00859fe1:
    *param_3 = *param_3 + 1;
  }
  else {
    if (cVar1 == '\0') {
      if (param_9 == '\0') {
        if (param_8 == '\0') {
          if (param_11 == '\0') {
            if ((char)param_4 != '\x01') goto LAB_00859fe1;
            param_4 = FUN_00401f00(0x10);
            uStack_4 = 0xc;
            if (param_4 == 0) goto LAB_00859fc4;
            param_4 = FUN_007e2370(param_4,param_1,0x118,*puVar4,1,param_2);
          }
          else {
            if ((char)param_4 != '\x01') goto LAB_00859fe1;
            param_4 = FUN_00401f00(0x10);
            uStack_4 = 0xd;
            if (param_4 == 0) goto LAB_00859fc4;
            param_4 = FUN_007e2370(param_4,param_1,0x119,*puVar4,1,param_2);
          }
        }
        else if (param_11 == '\0') {
          if ((char)param_4 != '\x01') goto LAB_00859fe1;
          param_4 = FUN_00401f00(0x10);
          uStack_4 = 0xe;
          if (param_4 == 0) goto LAB_00859fc4;
          param_4 = FUN_007e2370(param_4,param_1,0x11f,*puVar4,1,param_2);
        }
        else {
          if ((char)param_4 != '\x01') goto LAB_00859fe1;
          param_4 = FUN_00401f00(0x10);
          uStack_4 = 0xf;
          if (param_4 == 0) goto LAB_00859fc4;
          param_4 = FUN_007e2370(param_4,param_1,0x120,*puVar4,1,param_2);
        }
      }
      else if (param_8 == '\0') {
        if ((char)param_4 != '\x01') goto LAB_00859fe1;
        param_4 = FUN_00401f00(0x10);
        uStack_4 = 0x10;
        if (param_4 == 0) goto LAB_00859fc4;
        param_4 = FUN_007e2370(param_4,param_1,0x11a,*puVar4,1,param_2);
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_00859fe1;
        param_4 = FUN_00401f00(0x10);
        uStack_4 = 0x11;
        if (param_4 == 0) goto LAB_00859fc4;
        param_4 = FUN_007e2370(param_4,param_1,0x121,*puVar4,1,param_2);
      }
    }
    else if (param_9 == '\0') {
      if (param_11 == '\0') {
        if ((char)param_4 != '\x01') goto LAB_00859fe1;
        param_4 = FUN_00401f00(0x10);
        uStack_4 = 0x12;
        if (param_4 == 0) goto LAB_00859fc4;
        param_4 = FUN_007e2370(param_4,param_1,0x126,*puVar4,1,param_2);
      }
      else {
        if ((char)param_4 != '\x01') goto LAB_00859fe1;
        param_4 = FUN_00401f00(0x10);
        uStack_4 = 0x13;
        if (param_4 == 0) goto LAB_00859fc4;
        param_4 = FUN_007e2370(param_4,param_1,0x127,*puVar4,1,param_2);
      }
    }
    else {
      if ((char)param_4 != '\x01') goto LAB_00859fe1;
      param_4 = FUN_00401f00(0x10);
      uStack_4 = 0x14;
      if (param_4 == 0) goto LAB_00859fc4;
      param_4 = FUN_007e2370(param_4,param_1,0x128,*puVar4,1,param_2);
    }
LAB_00859fc6:
    uStack_4 = 0xffffffff;
    FUN_005b1e20(&param_4);
  }
  *puVar4 = 0;
LAB_00859fec:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0085a010(undefined4 param_1,int param_2,int param_3,short *param_4,int param_5,
                 undefined1 *param_6,char param_7,char param_8,char param_9)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d4497;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_7 != '\0') {
    if ((char)param_5 != '\x01') goto LAB_0085a1d9;
    param_5 = FUN_00401f00(0x10,uVar1);
    if (param_3 == 0) {
      local_4 = 4;
    }
    else {
      local_4 = 3;
      param_2 = param_3;
    }
    if (param_5 == 0) {
      param_5 = 0;
    }
    else {
      param_5 = FUN_007e2370(param_5,param_1,0x185,*param_6,1,param_2);
    }
    goto LAB_0085a1b4;
  }
  if ((char)param_5 != '\x01') {
LAB_0085a1d9:
    *param_4 = *param_4 + 1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (param_8 == '\0') {
    if ((DAT_00b43074 == '\0') || (param_9 != '\0')) {
      uVar2 = 0x184;
      goto LAB_0085a072;
    }
    param_5 = FUN_00401f00(0x10,uVar1);
    local_4 = 2;
    if (param_5 != 0) {
      param_5 = FUN_007e2370(param_5,param_1,0x186,*param_6,0,0);
      goto LAB_0085a1b4;
    }
  }
  else {
    uVar2 = 0x187;
LAB_0085a072:
    param_5 = FUN_00401f00(0x10,uVar1);
    if (param_3 == 0) {
      local_4 = 1;
      if (param_5 != 0) {
        param_5 = FUN_007e2370(param_5,param_1,uVar2,*param_6,1,param_2);
        goto LAB_0085a1b4;
      }
    }
    else {
      local_4 = 0;
      if (param_5 != 0) {
        param_5 = FUN_007e2370(param_5,param_1,uVar2,*param_6,1,param_3);
        goto LAB_0085a1b4;
      }
    }
  }
  param_5 = 0;
LAB_0085a1b4:
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_5);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0085a200(undefined4 param_1,short *param_2,char param_3,undefined1 *param_4,char param_5,
                 int param_6)

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
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  do {
    if (param_6 < 1) {
      *unaff_FS_OFFSET = local_c;
      return;
    }
    if (param_5 == '\0') {
      if (param_3 == '\x01') {
        iVar2 = FUN_00401f00(0x10,uVar1);
        local_4 = 0;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_007e2370(iVar2,param_1,0x18a,*param_4,0,0);
        }
        local_4 = 0xffffffff;
        puVar4 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x28) + 4))();
        puVar4[2] = uVar3;
        *puVar4 = 0;
        puVar4[1] = *(undefined4 *)(in_ECX + 0x30);
        if (*(undefined4 **)(in_ECX + 0x30) == (undefined4 *)0x0) {
LAB_0085a34c:
          *(undefined4 **)(in_ECX + 0x2c) = puVar4;
          *(undefined4 **)(in_ECX + 0x30) = puVar4;
          *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
        }
        else {
          **(undefined4 **)(in_ECX + 0x30) = puVar4;
          *(undefined4 **)(in_ECX + 0x30) = puVar4;
          *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
        }
      }
      else {
LAB_0085a35c:
        *param_2 = *param_2 + 1;
      }
    }
    else {
      if (param_3 != '\x01') goto LAB_0085a35c;
      iVar2 = FUN_00401f00(0x10,uVar1);
      local_4 = 1;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_007e2370(iVar2,param_1,0x18b,*param_4,0,0);
      }
      local_4 = 0xffffffff;
      puVar4 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x28) + 4))();
      puVar4[2] = uVar3;
      *puVar4 = 0;
      puVar4[1] = *(undefined4 *)(in_ECX + 0x30);
      if (*(undefined4 **)(in_ECX + 0x30) == (undefined4 *)0x0) goto LAB_0085a34c;
      **(undefined4 **)(in_ECX + 0x30) = puVar4;
      *(undefined4 **)(in_ECX + 0x30) = puVar4;
      *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
    }
    param_6 = param_6 - DAT_00b42e88;
  } while( true );
}



void FUN_0085a390(undefined4 param_1,undefined4 param_2,short *param_3,undefined4 param_4,
                 undefined1 *param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  LONG LVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  int in_ECX;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  undefined4 *local_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d44e1;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  FUN_00707530(4);
  FUN_00405ad0(&local_1c);
  puVar11 = local_1c;
  if (((local_1c != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(local_1c + 1), LVar7 == 0))
     && (puVar11 != (undefined4 *)0x0)) {
    (**(code **)*puVar11)(1,uVar6);
  }
  FUN_00854380(param_1,param_2,param_3,param_4,param_5,param_7);
  if (DAT_00b2c674 == 0) {
    uStack_2c = (uint)*(ushort *)(in_ECX + 0xcc);
  }
  else {
    uStack_2c = DAT_00b2c674 - 1;
    if (*(ushort *)(in_ECX + 0xcc) < uStack_2c) {
      uStack_2c = (uint)*(ushort *)(in_ECX + 0xcc);
    }
  }
  if (DAT_00b42e86 == '\0') {
    param_7 = FUN_007ed2a0();
    if (param_7 != 0) {
LAB_0085a473:
      iVar8 = FUN_007ed4b0();
      do {
        iVar12 = iVar8;
        if (iVar12 == 0) {
LAB_0085a4de:
          bVar2 = false;
        }
        else {
          piVar9 = (int *)FUN_00405ad0(&local_1c);
          iVar8 = *piVar9;
          bVar3 = true;
          if (((DAT_00b3fa90 != *(float *)(iVar8 + 0xec)) ||
              (DAT_00b3fa94 != *(float *)(iVar8 + 0xf0))) ||
             (DAT_00b3fa98 != *(float *)(iVar8 + 0xf4))) goto LAB_0085a4de;
          bVar2 = true;
        }
        puVar11 = local_1c;
        if (((bVar3) && (bVar3 = false, local_1c != (undefined4 *)0x0)) &&
           ((LVar7 = InterlockedDecrement(local_1c + 1), LVar7 == 0 &&
            (puVar11 != (undefined4 *)0x0)))) {
          (**(code **)*puVar11)(1);
        }
        iVar8 = FUN_007ed4b0();
      } while (bVar2);
      do {
        if (iVar8 == 0) {
LAB_0085a579:
          bVar2 = false;
        }
        else {
          piVar9 = (int *)FUN_00405ad0(&puStack_28);
          iVar1 = *piVar9;
          bVar4 = true;
          if (((DAT_00b3fa90 != *(float *)(iVar1 + 0xec)) ||
              (DAT_00b3fa94 != *(float *)(iVar1 + 0xf0))) ||
             (DAT_00b3fa98 != *(float *)(iVar1 + 0xf4))) goto LAB_0085a579;
          bVar2 = true;
        }
        puVar11 = puStack_28;
        if (((bVar4) && (bVar4 = false, puStack_28 != (undefined4 *)0x0)) &&
           ((LVar7 = InterlockedDecrement(puStack_28 + 1), LVar7 == 0 &&
            (puVar11 != (undefined4 *)0x0)))) {
          (**(code **)*puVar11)(1);
        }
        if (!bVar2) goto LAB_0085a5c0;
        iVar8 = FUN_007ed4b0();
      } while( true );
    }
LAB_0085a70e:
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    puStack_28 = (undefined4 *)0x0;
    if (0 < (int)uStack_2c) {
      do {
        piVar9 = (int *)FUN_00707530(4);
        puStack_14 = (undefined4 *)((int)puStack_28 + 1);
        iVar8 = (**(code **)(*piVar9 + 0x88))(puStack_14);
        if (iVar8 != 0) {
          iVar8 = FUN_007ed2a0();
          while (iVar8 != 0) {
            do {
              local_1c = (undefined4 *)FUN_007ed4b0();
              if (local_1c == (undefined4 *)0x0) {
LAB_0085a7c8:
                bVar2 = false;
              }
              else {
                piVar9 = (int *)FUN_00405ad0(&puStack_18);
                iVar12 = *piVar9;
                bVar3 = true;
                if (((DAT_00b3fa90 != *(float *)(iVar12 + 0xec)) ||
                    (DAT_00b3fa94 != *(float *)(iVar12 + 0xf0))) ||
                   (DAT_00b3fa98 != *(float *)(iVar12 + 0xf4))) goto LAB_0085a7c8;
                bVar2 = true;
              }
              puVar11 = puStack_18;
              if (((bVar3) && (bVar3 = false, puStack_18 != (undefined4 *)0x0)) &&
                 ((LVar7 = InterlockedDecrement(puStack_18 + 1), LVar7 == 0 &&
                  (puVar11 != (undefined4 *)0x0)))) {
                (**(code **)*puVar11)(1);
              }
            } while (bVar2);
            do {
              iVar12 = FUN_007ed4b0();
              if (iVar12 == 0) {
LAB_0085a869:
                bVar2 = false;
              }
              else {
                piVar9 = (int *)FUN_00405ad0(&puStack_24);
                iVar1 = *piVar9;
                bVar4 = true;
                if (((DAT_00b3fa90 != *(float *)(iVar1 + 0xec)) ||
                    (DAT_00b3fa94 != *(float *)(iVar1 + 0xf0))) ||
                   (DAT_00b3fa98 != *(float *)(iVar1 + 0xf4))) goto LAB_0085a869;
                bVar2 = true;
              }
              puVar11 = puStack_24;
              if (((bVar4) && (bVar4 = false, puStack_24 != (undefined4 *)0x0)) &&
                 ((LVar7 = InterlockedDecrement(puStack_24 + 1), LVar7 == 0 &&
                  (puVar11 != (undefined4 *)0x0)))) {
                (**(code **)*puVar11)(1);
              }
            } while (bVar2);
            if (iVar8 == 0) {
LAB_0085a905:
              bVar2 = false;
            }
            else {
              piVar9 = (int *)FUN_00405ad0(&puStack_20);
              iVar1 = *piVar9;
              bVar5 = true;
              if (((DAT_00b3fa90 == *(float *)(iVar1 + 0xec)) &&
                  (DAT_00b3fa94 == *(float *)(iVar1 + 0xf0))) &&
                 (DAT_00b3fa98 == *(float *)(iVar1 + 0xf4))) goto LAB_0085a905;
              bVar2 = true;
            }
            puVar11 = puStack_20;
            if ((((bVar5) && (bVar5 = false, puStack_20 != (undefined4 *)0x0)) &&
                (LVar7 = InterlockedDecrement(puStack_20 + 1), LVar7 == 0)) &&
               (puVar11 != (undefined4 *)0x0)) {
              (**(code **)*puVar11)(1);
            }
            if (bVar2) {
              if ((char)param_4 == '\x01') {
                iStack_10 = FUN_00401f00(0x10);
                uStack_4 = 1;
                if (iStack_10 == 0) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = FUN_007e2370(iStack_10,param_1,0x172,*param_5,3,iVar8,local_1c,iVar12);
                }
                *(char *)(iVar8 + 9) = (char)puStack_28 + '\x01';
                uStack_4 = 0xffffffff;
                puVar11 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x28) + 4))();
                puVar11[2] = iVar8;
                *puVar11 = 0;
                puVar11[1] = *(undefined4 *)(in_ECX + 0x30);
                if (*(undefined4 **)(in_ECX + 0x30) == (undefined4 *)0x0) {
                  *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
                  *(undefined4 **)(in_ECX + 0x2c) = puVar11;
                  *(undefined4 **)(in_ECX + 0x30) = puVar11;
                }
                else {
                  **(undefined4 **)(in_ECX + 0x30) = puVar11;
                  *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
                  *(undefined4 **)(in_ECX + 0x30) = puVar11;
                }
              }
              else {
                *param_3 = *param_3 + 1;
              }
            }
            iVar8 = FUN_007ed4b0();
          }
        }
        puStack_28 = puStack_14;
      } while ((int)puStack_14 < (int)uStack_2c);
    }
  }
  if ((char)param_4 == '\x01') {
    iVar8 = FUN_00401f00(0x10);
    uStack_4 = 2;
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_007e2370(iVar8,param_1,0x176,*param_5,1,param_2);
    }
    *(undefined1 *)(iVar8 + 9) = 9;
    uStack_4 = 0xffffffff;
    puVar11 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x28) + 4))();
    puVar11[2] = iVar8;
    *puVar11 = 0;
    puVar11[1] = *(undefined4 *)(in_ECX + 0x30);
    if (*(undefined4 **)(in_ECX + 0x30) == (undefined4 *)0x0) {
      *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
      *(undefined4 **)(in_ECX + 0x2c) = puVar11;
      *(undefined4 **)(in_ECX + 0x30) = puVar11;
    }
    else {
      **(undefined4 **)(in_ECX + 0x30) = puVar11;
      *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
      *(undefined4 **)(in_ECX + 0x30) = puVar11;
    }
  }
  else {
    *param_3 = *param_3 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
LAB_0085a5c0:
  if (param_7 != 0) {
    piVar9 = (int *)FUN_00405ad0(&puStack_24);
    iVar1 = *piVar9;
    bVar5 = true;
    if (((DAT_00b3fa90 != *(float *)(iVar1 + 0xec)) || (DAT_00b3fa94 != *(float *)(iVar1 + 0xf0)))
       || (DAT_00b3fa98 != *(float *)(iVar1 + 0xf4))) {
      bVar2 = true;
      goto LAB_0085a621;
    }
  }
  bVar2 = false;
LAB_0085a621:
  puVar11 = puStack_24;
  if ((((bVar5) && (bVar5 = false, puStack_24 != (undefined4 *)0x0)) &&
      (LVar7 = InterlockedDecrement(puStack_24 + 1), LVar7 == 0)) && (puVar11 != (undefined4 *)0x0))
  {
    (**(code **)*puVar11)(1);
  }
  if (bVar2) {
    if ((char)param_4 == '\x01') {
      puStack_14 = (undefined4 *)FUN_00401f00(0x10);
      uStack_4 = 0;
      if (puStack_14 == (undefined4 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_007e2370(puStack_14,param_1,0x169,*param_5,3,param_7,iVar12,iVar8);
      }
      uStack_4 = 0xffffffff;
      puVar11 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x28) + 4))();
      puVar11[2] = uVar10;
      *puVar11 = 0;
      puVar11[1] = *(undefined4 *)(in_ECX + 0x30);
      if (*(undefined4 **)(in_ECX + 0x30) == (undefined4 *)0x0) {
        *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
        *(undefined4 **)(in_ECX + 0x2c) = puVar11;
        *(undefined4 **)(in_ECX + 0x30) = puVar11;
      }
      else {
        **(undefined4 **)(in_ECX + 0x30) = puVar11;
        *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
        *(undefined4 **)(in_ECX + 0x30) = puVar11;
      }
    }
    else {
      *param_3 = *param_3 + 1;
    }
  }
  param_7 = FUN_007ed4b0();
  if (param_7 == 0) goto LAB_0085a70e;
  goto LAB_0085a473;
}



void FUN_0085aac0(undefined4 param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d395c;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar1 = DAT_00b42eb0;
  iVar3 = FUN_00401f00(0x10,uVar2);
  param_3 = iVar3;
  if (param_2 == '\0') {
    if ((char)param_3 == '\0') {
      local_4 = 0;
      if (iVar3 != 0) {
        param_3 = FUN_007e2370(iVar3,param_1,6,1,1,uVar1);
        goto LAB_0085aba3;
      }
    }
    else {
      local_4 = 1;
      if (iVar3 != 0) {
        param_3 = FUN_007e2370(iVar3,param_1,7,1,1,uVar1);
        goto LAB_0085aba3;
      }
    }
  }
  else if ((char)param_3 == '\0') {
    local_4 = 2;
    if (iVar3 != 0) {
      param_3 = FUN_007e2370(iVar3,param_1,8,1,1,uVar1);
      goto LAB_0085aba3;
    }
  }
  else {
    local_4 = 3;
    if (iVar3 != 0) {
      param_3 = FUN_007e2370(iVar3,param_1,9,1,1,uVar1);
      goto LAB_0085aba3;
    }
  }
  param_3 = 0;
LAB_0085aba3:
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0085abd0(undefined4 param_1,char param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d4521;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x54) != 0) goto LAB_0085acaa;
  iVar2 = FUN_00401f00(0x10,uVar1);
  param_3 = iVar2;
  if ((char)param_3 == '\0') {
    if (param_2 == '\0') {
      local_4 = 1;
      if (iVar2 == 0) {
LAB_0085ac8f:
        param_3 = 0;
      }
      else {
        param_3 = FUN_007e2370(iVar2,param_1,0x165,1,0,0);
      }
    }
    else {
      local_4 = 2;
      if (iVar2 == 0) goto LAB_0085ac8f;
      param_3 = FUN_007e2370(iVar2,param_1,0x166,1,0,0);
    }
  }
  else {
    local_4 = 0;
    if (iVar2 == 0) goto LAB_0085ac8f;
    param_3 = FUN_007e2370(iVar2,param_1,0x167,1,0,0);
  }
  local_4 = 0xffffffff;
  FUN_005b1e20(&param_3);
LAB_0085acaa:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0085acc0(undefined4 param_1,short *param_2,int param_3,undefined1 *param_4,char param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3ac6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_5 == '\0') {
    if ((char)param_3 == '\x01') {
      param_3 = FUN_00401f00(0x10,uVar2);
      puVar1 = param_4;
      local_4 = 1;
      if (param_3 == 0) {
        param_3 = 0;
      }
      else {
        param_3 = FUN_007e2370(param_3,param_1,0x18e,*param_4,0,0);
      }
      local_4 = 0xffffffff;
      FUN_005b1e20(&param_3);
      *puVar1 = 0;
      *unaff_FS_OFFSET = local_c;
      return;
    }
    *param_2 = *param_2 + 1;
    *param_4 = 0;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if ((char)param_3 == '\x01') {
    param_3 = FUN_00401f00(0x10,uVar2);
    puVar1 = param_4;
    local_4 = 0;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_007e2370(param_3,param_1,399,*param_4,0,0);
    }
    local_4 = 0xffffffff;
    FUN_005b1e20(&param_3);
    *puVar1 = 0;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *param_2 = *param_2 + 1;
  *param_4 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0085ae20(int param_1,uint param_2,ushort *param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  int *piVar10;
  LONG LVar11;
  undefined4 uVar12;
  int iVar13;
  short sVar14;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  ushort in_FPUControlWord;
  undefined1 uStack_87;
  char local_86;
  char cStack_85;
  char local_84;
  char cStack_83;
  char cStack_82;
  char cStack_81;
  uint local_80;
  undefined4 uStack_7b;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint local_6c;
  undefined4 local_66;
  uint local_62;
  char cStack_5e;
  undefined4 local_5d;
  undefined4 uStack_59;
  undefined4 local_55;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  undefined1 uStack_4e;
  char cStack_4d;
  undefined4 *local_4c;
  int iStack_48;
  uint local_44;
  uint local_40;
  int local_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 local_24;
  undefined4 local_20;
  int iStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d455e;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffff68;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar1 = in_ECX[7];
  local_80 = 0;
  if (((uVar1 & 1) != 0) || (local_6c = local_6c & 0xffffff00, (uVar1 & 0x10) != 0)) {
    local_6c = CONCAT31(local_6c._1_3_,1);
  }
  local_86 = (uVar1 & 0x80) != 0;
  local_20 = CONCAT31(local_20._1_3_,(uVar1 & 0x20000) != 0);
  local_24 = CONCAT31(local_24._1_3_,(uVar1 & 2) != 0);
  local_3c = CONCAT31(local_3c._1_3_,(uVar1 & 0x200000) != 0);
  local_66 = CONCAT31(local_66._1_3_,(uVar1 & 8) != 0);
  if (((uVar1 & 0x20) != 0) || (local_84 = '\0', DAT_00b42eac == 3)) {
    local_84 = '\x01';
  }
  local_44 = CONCAT31(local_44._1_3_,(uVar1 & 0x100) != 0);
  local_55 = CONCAT31(local_55._1_3_,*(int *)in_ECX[0x31] != 0);
  local_5d = CONCAT31(local_5d._1_3_,(uVar1 & 0x400) != 0);
  local_10 = CONCAT31(local_10._1_3_,*(int *)(*(int *)(param_1 + 0xb4) + 0x24) != 0);
  if ((((DAT_00b43074 == '\0') && (DAT_00b43108 != 0)) && (((byte)DAT_00b42f40 & 0x20) != 0)) &&
     ((1 < DAT_00b42f48 && ((uVar1 & 0x2000) == 0)))) {
    local_4c = (undefined4 *)CONCAT22(local_4c._2_2_,in_FPUControlWord);
    local_40 = in_FPUControlWord | 0xc00;
    local_38 = (ulonglong)ROUND(DAT_00b44f04);
    if ((int)local_38 == 0) goto LAB_0085af6b;
    local_62 = CONCAT31(local_62._1_3_,1);
    if ((byte)(uVar1 >> 0x1c) == 1) goto LAB_0085af6b;
  }
  else {
LAB_0085af6b:
    local_62 = local_62 & 0xffffff00;
  }
  for (puVar8 = (undefined *)(**(code **)(*in_ECX + 4))(uVar7); puVar8 != (undefined *)0x0;
      puVar8 = *(undefined **)(puVar8 + 4)) {
    if (puVar8 == &DAT_00b468c8) {
      bVar2 = 1;
      goto LAB_0085af94;
    }
  }
  bVar2 = 0;
LAB_0085af94:
  uStack_7b = CONCAT31(uStack_7b._1_3_,(-(uint)bVar2 & (uint)in_ECX) != 0);
  for (puVar8 = (undefined *)(**(code **)(*in_ECX + 4))(); puVar8 != (undefined *)0x0;
      puVar8 = *(undefined **)(puVar8 + 4)) {
    if (puVar8 == &DAT_00b478b0) {
      bVar2 = 1;
      goto LAB_0085afc4;
    }
  }
  bVar2 = 0;
LAB_0085afc4:
  cStack_51 = (-(uint)bVar2 & (uint)in_ECX) != 0;
  for (puVar8 = (undefined *)(**(code **)(*in_ECX + 4))(); puVar8 != (undefined *)0x0;
      puVar8 = *(undefined **)(puVar8 + 4)) {
    if (puVar8 == &DAT_00b468bc) {
      bVar2 = 1;
      goto LAB_0085aff4;
    }
  }
  bVar2 = 0;
LAB_0085aff4:
  cStack_4d = DAT_00b42f3e;
  iStack_48 = DAT_00b42f48;
  cStack_4f = (-(uint)bVar2 & (uint)in_ECX) != 0;
  uVar1 = in_ECX[7];
  uStack_30 = CONCAT31(uStack_30._1_3_,(uVar1 & 0x400000) != 0);
  uStack_74 = CONCAT31(uStack_74._1_3_,(uVar1 & 0x800) != 0);
  uStack_2c = CONCAT31(uStack_2c._1_3_,(uVar1 & 0x1000) != 0);
  cStack_76 = (uVar1 & 0x4000) != 0;
  cStack_50 = (uVar1 & 0x8000) != 0;
  local_40 = CONCAT31(local_40._1_3_,(uVar1 & 0x10000) != 0);
  FUN_007b7650();
  cStack_82 = FUN_007aa380();
  if (((in_ECX[7] & 0x100000U) == 0) || (cStack_5e = '\0', DAT_00b42e86 != '\0')) {
    cStack_5e = '\x01';
  }
  uStack_59 = CONCAT31(uStack_59._1_3_,(in_ECX[7] & 0x40000U) != 0);
  iVar9 = FUN_00707530(0);
  iStack_28 = iVar9;
  if (iVar9 == 0) {
    piVar10 = (int *)FUN_00405760(&puStack_14);
    uStack_4 = 0;
    if (*piVar10 == 0) {
      iVar9 = 0;
    }
    else {
      piVar10 = (int *)FUN_00405760(&puStack_18);
      iVar9 = *(int *)(*piVar10 + 8);
      local_80 = 1;
    }
    iStack_28 = iVar9;
    if (((((local_80 & 1) != 0) &&
         (local_80 = local_80 & 0xfffffffe, puStack_18 != (undefined4 *)0x0)) &&
        (LVar11 = InterlockedDecrement(puStack_18 + 1), LVar11 == 0)) &&
       (puStack_18 != (undefined4 *)0x0)) {
      (**(code **)*puStack_18)(1);
    }
    uStack_4 = 0xffffffff;
    if (((puStack_14 != (undefined4 *)0x0) &&
        (LVar11 = InterlockedDecrement(puStack_14 + 1), LVar11 == 0)) &&
       (puStack_14 != (undefined4 *)0x0)) {
      (**(code **)*puStack_14)(1);
    }
    if (iVar9 != 0) goto LAB_0085b161;
LAB_0085b16c:
    cStack_85 = '\0';
  }
  else {
LAB_0085b161:
    cStack_85 = '\x01';
    if ((*(byte *)(iVar9 + 0x18) & 1) == 0) goto LAB_0085b16c;
  }
  if ((iVar9 == 0) || ((*(ushort *)(iVar9 + 0x18) >> 9 & 1) == 0)) {
    iStack_1c = (uint)iStack_1c._1_3_ << 8;
  }
  else {
    iStack_1c = CONCAT31(iStack_1c._1_3_,1);
    local_44 = local_44 & 0xffffff00;
  }
  if ((float)in_ECX[0x29] == 0.0) {
    local_86 = '\0';
  }
  else if ((char)local_20 != '\0') {
    local_86 = '\x01';
    local_6c = local_6c & 0xffffff00;
  }
  if ((float)in_ECX[0x27] == 0.0) {
    local_6c = local_6c & 0xffffff00;
  }
  iVar9 = FUN_007b4280((uint)in_ECX[7] >> 0x1c);
  uStack_70 = *(undefined4 *)(iVar9 + 0x118);
  if ((char)local_6c == '\0') {
LAB_0085b221:
    cStack_77 = '\0';
  }
  else {
    FUN_00405ad0(&local_4c);
    local_80 = local_80 | 2;
    cVar5 = FUN_008aa390(&DAT_00b3fa90);
    cStack_77 = '\x01';
    if (cVar5 == '\0') goto LAB_0085b221;
  }
  puVar3 = local_4c;
  if (((((local_80 & 2) != 0) && (local_4c != (undefined4 *)0x0)) &&
      (LVar11 = InterlockedDecrement(local_4c + 1), LVar11 == 0)) && (puVar3 != (undefined4 *)0x0))
  {
    (**(code **)*puVar3)(1);
  }
  uVar4 = local_24;
  if (((float)in_ECX[8] < 1.0) || (cStack_85 != '\0')) {
    cStack_81 = '\x01';
    if (cStack_82 != '\0') {
      FUN_00854e90(param_1,param_3,param_4,&cStack_81,local_24);
      local_6c = local_6c & 0xffffff00;
    }
    local_84 = '\x01';
  }
  uStack_87 = 1;
  uVar6 = FUN_007ed600();
  local_80 = (uint)uVar6;
  uStack_4e = (param_2 & 1) != 0;
  cStack_75 = (param_2 & 2) != 0;
  local_38 = CONCAT44(local_38._4_4_,param_2) & 0xffffffff00000001;
  cStack_85 = (param_2 & 4) != 0;
  if ((param_2 & 8) == 0) {
LAB_0085b2e4:
    cStack_83 = '\0';
  }
  else {
    cStack_83 = '\x01';
    if ((char)local_6c == '\0') goto LAB_0085b2e4;
  }
  if ((local_86 == '\0') || (cStack_82 = '\x01', (param_2 & 8) == 0)) {
    cStack_82 = '\0';
  }
  local_86 = ((byte)param_2 & 0xf) == 0xf;
  local_4c = (undefined4 *)CONCAT31(local_4c._1_3_,local_86);
  cStack_81 = '\x01';
  if ((cStack_50 != '\0') || ((char)local_40 != '\0')) {
    FUN_00854cd0(param_1,param_3,param_4,&uStack_87,uVar4,local_40);
    goto LAB_0085bbb8;
  }
  if ((cStack_51 != '\0') || (cStack_4f != '\0')) {
    (**(code **)(*in_ECX + 0x98))(param_1,param_2,param_3,param_4);
    goto LAB_0085bbb8;
  }
  if (cStack_76 == '\0') {
    if (cStack_5e != '\0') {
      if ((bool)uStack_4e) {
        if (DAT_00b43073 != '\0') {
LAB_0085b503:
          if (!(bool)cStack_75) {
LAB_0085b689:
            FUN_00852150(param_1,uStack_70,param_3,param_4,&uStack_87,uVar4,iStack_1c,local_55,
                         uStack_7b);
            goto LAB_0085b6b7;
          }
          if ((!(bool)cStack_85) || ((1 < uVar6 && (local_84 == '\0')))) {
            if (uVar6 < 2) {
              uVar12 = FUN_007ed2a0();
              FUN_00855e80(param_1,uStack_70,uVar12,param_3,param_4,&uStack_87,uVar4,local_55,
                           local_5d,local_66,local_62,uStack_74,uStack_7b);
              local_80 = 0;
              cStack_81 = '\0';
            }
            else {
              iStack_48 = FUN_007ed2a0();
              uVar12 = FUN_007ed4b0();
              FUN_00856510(param_1,uStack_70,iStack_48,uVar12,param_3,param_4,&uStack_87,uVar4,
                           local_55,local_5d,local_66,local_62,uStack_74,uStack_7b);
              local_80 = local_80 - 2;
              cStack_81 = '\0';
            }
            goto LAB_0085b6b7;
          }
          if (uVar6 == 0) {
            FUN_00856d60(param_1,uStack_70,param_3,param_4,&uStack_87,uVar4,local_55,local_5d,
                         local_66,local_62,uStack_74,uStack_2c,uStack_7b,uStack_30,uStack_59);
          }
          else {
            uVar12 = FUN_007ed2a0();
            FUN_00857750(param_1,uStack_70,uVar12,param_3,param_4,&uStack_87,uVar4,local_55,local_5d
                         ,local_66,local_62,uStack_74,uStack_7b,uStack_59);
          }
          if (cStack_83 == '\0') {
            local_86 = '\0';
            goto LAB_0085b89c;
          }
          goto LAB_0085b811;
        }
        if (local_84 == '\0') {
          if ((bool)cStack_75) {
            if ((((!(bool)cStack_85) || (cStack_83 == '\0')) || ((char)local_5d != '\0')) ||
               ((cStack_4d != '\0' && ((char)local_44 != '\0')))) goto LAB_0085b503;
            goto LAB_0085b3b7;
          }
          goto LAB_0085b689;
        }
LAB_0085b3b7:
        if ((((1 < uVar6) && (local_84 == '\0')) || (cStack_77 == '\0')) ||
           ((((uVar6 != 0 && ((char)local_62 != '\0')) ||
             ((iStack_48 < 5 && (((char)uStack_74 != '\0' || ((char)uStack_59 != '\0')))))) ||
            ((float)in_ECX[0x27] != 1.0)))) goto LAB_0085b503;
        if ((char)local_5d == '\0') {
          if (uVar6 == 0) {
            FUN_008580e0(param_1,uStack_70,param_3,param_4,&uStack_87,uVar4,local_55,0,local_66,
                         local_62,uStack_74,uStack_7b,uStack_59);
            local_86 = '\0';
          }
          else {
            uVar12 = FUN_007ed2a0();
            FUN_008588e0(param_1,uStack_70,uVar12,param_3,param_4,&uStack_87,uVar4,local_55,0,
                         local_66,local_62,uStack_74,uStack_7b,uStack_59);
            local_86 = '\0';
          }
        }
        else {
          FUN_00856d60(param_1,uStack_70,param_3,param_4,&uStack_87,uVar4,local_55,local_5d,local_66
                       ,local_62,uStack_74,uStack_2c,uStack_7b,uStack_30,uStack_59);
          local_86 = '\0';
        }
      }
      else {
LAB_0085b6b7:
        if (cStack_75 != '\0') {
          if (cStack_81 == '\0') {
            local_6c = FUN_007ed4b0();
          }
          else {
            FUN_00853720(param_1,uStack_70,param_3,param_4,&uStack_87,uVar4,0,local_66,uStack_7b);
            local_6c = FUN_007ed2a0();
          }
          while (local_6c != 0) {
            iVar9 = FUN_007ed4b0();
            if (local_80 < 3) {
              FUN_00859160(param_1,local_6c,iVar9,param_3,param_4,&uStack_87,uVar4,local_5d,local_66
                           ,uStack_74,uStack_7b);
              if (local_80 < 2) {
                local_80 = 0;
              }
              else {
                local_80 = local_80 - 2;
              }
            }
            else {
              iStack_48 = iVar9;
              uVar12 = FUN_007ed4b0();
              FUN_00859430(param_1,local_6c,iStack_48,uVar12,param_3,param_4,&uStack_87,uVar4,
                           local_5d,local_66,uStack_74,uStack_7b);
              local_80 = local_80 - 3;
            }
            local_6c = FUN_007ed4b0();
          }
        }
        if (cStack_85 != '\0') {
          FUN_00859720(param_1,uStack_70,param_3,param_4,&uStack_87,uVar4,local_66,local_5d,local_10
                       ,uStack_7b,0,uStack_74,uStack_59);
        }
        if (cStack_83 != '\0') {
LAB_0085b811:
          if (cStack_77 != '\0') {
            FUN_00859880(param_1,uStack_70,param_3,param_4,&uStack_87,uVar4,local_66,local_62,
                         uStack_74,uStack_7b,uStack_59);
          }
          iVar9 = FUN_007ed2a0();
          while (iVar9 != 0) {
            FUN_00859880(param_1,iVar9,param_3,param_4,&uStack_87,uVar4,local_66,local_62,uStack_74,
                         uStack_7b,uStack_59);
            iVar9 = FUN_007ed4b0();
          }
        }
      }
LAB_0085b89c:
      if (cStack_82 != '\0') {
        uVar12 = FUN_007ed2a0();
        FUN_0085a010(param_1,uStack_70,uVar12,param_3,param_4,&uStack_87,uVar4,local_20,local_3c);
        local_86 = '\x01';
      }
      if ((((2 < (uint)in_ECX[0xd]) || (2 < *param_3)) && (DAT_00b42e97 != '\0')) &&
         ((((char)uStack_7b == '\0' && (local_84 == '\0')) && ((char)local_44 == '\0')))) {
        if ((char)param_4 == '\x01') {
          local_3c = FUN_00401f00(0x10);
          uStack_4 = 1;
          if (local_3c == 0) {
            local_3c = 0;
          }
          else {
            local_3c = FUN_007e2370(local_3c,param_1,3,1,0,0);
          }
          uStack_4 = 0xffffffff;
          FUN_006aa320(&local_3c);
        }
        else {
          *param_3 = *param_3 + 1;
        }
      }
    }
  }
  else {
    FUN_0085a390(param_1,uStack_70,param_3,param_4,&uStack_87,local_6c,local_62);
  }
  if ((local_86 == '\0') && (in_ECX[0xd] != 0)) {
    sVar14 = *(short *)(*(int *)(in_ECX[0xc] + 8) + 4);
    if ((sVar14 != 400) && (sVar14 != 0x192)) {
      *(undefined1 *)(*(int *)(in_ECX[0xc] + 8) + 7) = 1;
    }
  }
  if (((char)local_4c != '\0') && (in_ECX[0x23] != 0)) {
    FUN_0085a200(param_1,param_3,param_4,&uStack_87,local_44,in_ECX[0x23]);
  }
  if (local_86 != '\0') {
    if ((iStack_28 == 0) || ((*(byte *)(iStack_28 + 0x18) & 1) == 0)) {
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
    }
    FUN_00854190(param_1,param_3,param_4,&uStack_87,uVar4,uStack_7b,uVar12);
  }
  if (in_ECX[0x38] != 0) {
    FUN_0085acc0(param_1,param_3,param_4,&uStack_87,uVar4);
  }
  if (DAT_00b43073 != '\0') {
    if ((int)local_38 != 0) {
      FUN_00854ff0(param_1,param_3,param_4,uVar4,local_55);
    }
    if (((((char)uStack_7b == '\0') && ((char)uStack_30 == '\0')) && ((char)uStack_74 == '\0')) &&
       ((((char)uStack_2c == '\0' && (cStack_76 == '\0')) && ((char)uStack_59 == '\0')))) {
      FUN_00855170(param_1,param_3,param_4,uVar4);
    }
  }
  cVar5 = FUN_00405a80();
  if ((cVar5 != '\0') && (iVar9 = FUN_007ed1a0(), iVar9 != 0)) {
    cVar5 = (char)uStack_7b;
    do {
      if (*(char *)(iVar9 + 0xf4) != '\0') {
        iVar13 = FUN_00401f00(0x10);
        uStack_4 = 2;
        if (iVar13 == 0) {
          iVar9 = 0;
        }
        else {
          local_38._0_4_ = iVar13;
          iVar9 = FUN_007e2370(iVar13,param_1,0,0,1,iVar9);
        }
        uStack_4 = 0xffffffff;
        local_38 = CONCAT44(local_38._4_4_,iVar9);
        if ((char)local_24 == '\0') {
          if (cStack_76 == '\0') {
            sVar14 = (-(ushort)(cVar5 != '\0') & 3) + 0x177;
          }
          else {
            sVar14 = 0x179;
          }
        }
        else {
          sVar14 = 0x178;
        }
        *(short *)(iVar9 + 4) = sVar14;
        *(undefined1 *)(iVar9 + 7) = 1;
        FUN_006aa320(&local_38);
      }
      iVar9 = FUN_007ed3b0();
    } while (iVar9 != 0);
  }
LAB_0085bbb8:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0085bbe0(void)

{
  undefined4 *in_ECX;
  
  FUN_007e27f0();
  in_ECX[0x1b] = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  *in_ECX = &PTR_FUN_00a956ec;
  DAT_00b47844 = 0;
  in_ECX[0x1f] = 0x3f800000;
  *(undefined1 *)((int)in_ECX + 0x71) = 0;
  *(undefined1 *)((int)in_ECX + 0x72) = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1d] = 0;
  *(undefined1 *)((int)in_ECX + 0x85) = 0;
  *(undefined1 *)(in_ECX + 0x21) = 0;
  return;
}



void FUN_0085bc40(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_007e2490(param_1,param_2);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(in_ECX + 0x6c);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(in_ECX + 0x70);
  *(undefined1 *)(param_1 + 0x71) = *(undefined1 *)(in_ECX + 0x71);
  *(undefined1 *)(param_1 + 0x72) = *(undefined1 *)(in_ECX + 0x72);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(in_ECX + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(in_ECX + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(in_ECX + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(in_ECX + 0x80);
  *(undefined1 *)(param_1 + 0x85) = *(undefined1 *)(in_ECX + 0x85);
  *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)(in_ECX + 0x84);
  return;
}



void FUN_0085bcb0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a956ec;
  FUN_007e2650();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_0085bce0(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x88,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_0085bbe0();
  }
  local_4 = 0xffffffff;
  FUN_0085bc40(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



int FUN_0085bd60(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x34) == 0) {
    if (*(char *)(in_ECX + 0x70) == '\0') {
      if (DAT_00b47844 == '\0') {
        iVar5 = (-(uint)(*(char *)(in_ECX + 0x71) != '\0') & 0xffffffe3) + 0x199;
      }
      else {
        iVar5 = 0x19a;
      }
    }
    else {
      iVar5 = 0x198;
    }
    iVar2 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_007e2370(iVar2,param_1,iVar5,1,0,0);
    }
    local_4 = 0xffffffff;
    puVar4 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x28) + 4))();
    puVar4[2] = uVar3;
    puVar4[1] = 0;
    *puVar4 = *(undefined4 *)(in_ECX + 0x2c);
    if (*(int *)(in_ECX + 0x2c) == 0) {
      *(undefined4 **)(in_ECX + 0x30) = puVar4;
    }
    else {
      *(undefined4 **)(*(int *)(in_ECX + 0x2c) + 4) = puVar4;
    }
    *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
    *(undefined4 **)(in_ECX + 0x2c) = puVar4;
  }
  *unaff_FS_OFFSET = local_c;
  return in_ECX + 0x28;
}



void FUN_0085be50(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007e28e0(param_1);
  param_1 = FUN_0070f910(DAT_00b47848);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0085bea0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_00b25ad4;
  if (param_2 != 0) {
    uVar2 = 0x3f800000;
  }
  if (param_3 == 0) {
    uVar1 = 0x41f00000;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 0x4c);
  }
  FUN_007ecae0(0x1f,0x3f800000,uVar2,uVar1,DAT_00b25adc);
  return;
}



void FUN_0085bf40(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  char in_stack_00000014;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d45e8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b47790;
  if (in_stack_00000014 == '\0') {
    _in_stack_00000014 = DAT_00b47790;
    if (DAT_00b47790 != 0) {
      *(int *)(DAT_00b47790 + 0x60) = *(int *)(DAT_00b47790 + 0x60) + 1;
    }
    local_4 = 0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000014);
    local_4 = 0xffffffff;
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0(uVar3);
      }
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0085bfd0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  char cStack00000010;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = _cStack00000010;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d4588;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b47794;
  iVar2 = **(int **)(DAT_00b47794 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*_cStack00000010 + 0x88))(0,uVar6);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(in_ECX + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar4 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  puVar7 = (undefined4 *)FUN_00848fd0(piVar1,0);
  puVar3 = *(undefined4 **)(iVar4 + 4);
  if (puVar3 != puVar7) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if (cStack00000010 == '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    _cStack00000010 = (int *)iVar5;
    puStack_8 = (undefined1 *)0x0;
    FUN_0076ce40(*(undefined4 *)(unaff_EBX + 0x38),&stack0x00000010);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    puStack_8 = (undefined1 *)0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(unaff_EBX + 0x38) = *(int *)(unaff_EBX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0085c110(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d4618;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b47798;
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar2 = **(int **)(iVar5 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar6);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(param_2 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar4 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  puVar7 = (undefined4 *)FUN_00848fd0(iVar2,0);
  puVar3 = *(undefined4 **)(iVar4 + 4);
  if (puVar3 != puVar7) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((char)param_4 == '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    param_4 = (int *)iVar5;
    puStack_8 = (undefined1 *)0x0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_4);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    puStack_8 = (undefined1 *)0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_0085c250(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d4618;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b4779c;
  DAT_00b46528 = DAT_00b46538;
  DAT_00b4652c = DAT_00b4653c;
  DAT_00b46530 = DAT_00b46540;
  DAT_00b46534 = DAT_00b46544;
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar2 = **(int **)(iVar4 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(param_4,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1,uVar5);
      }
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if ((char)param_5 == '\0') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    param_5 = iVar4;
    local_4 = 0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_5);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    local_4 = 0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0085c370(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000010;
  char cStack00000014;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d45b8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b477a0;
  iVar2 = **(int **)(DAT_00b477a0 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(in_stack_00000010,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1,uVar5);
      }
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if (cStack00000014 == '\0') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    _cStack00000014 = iVar4;
    local_4 = 0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000014);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    local_4 = 0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0085c450(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000010;
  char cStack00000014;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d45b8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b477a4;
  iVar2 = **(int **)(DAT_00b477a4 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(in_stack_00000010,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1,uVar5);
      }
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if (cStack00000014 == '\0') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    _cStack00000014 = iVar4;
    local_4 = 0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000014);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    local_4 = 0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0085c530(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  char cStack00000010;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d45b8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b477a8;
  iVar2 = **(int **)(DAT_00b477a8 + 0x24);
  puVar6 = (undefined4 *)(**(code **)(*_cStack00000010 + 0x88))(0,uVar5);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if (cStack00000010 == '\0') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    _cStack00000010 = (int *)iVar4;
    puStack_8 = (undefined1 *)0x0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000010);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    puStack_8 = (undefined1 *)0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0085c610(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000010;
  char cStack00000014;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d45b8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b477ac;
  iVar2 = **(int **)(DAT_00b477ac + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(in_stack_00000010,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1,uVar5);
      }
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if (cStack00000014 == '\0') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    _cStack00000014 = iVar4;
    local_4 = 0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000014);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    local_4 = 0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0085c6f0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000010;
  char cStack00000014;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d45b8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b477f8;
  iVar2 = **(int **)(DAT_00b477f8 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(in_stack_00000010,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1,uVar5);
      }
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if (cStack00000014 == '\0') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    _cStack00000014 = iVar4;
    local_4 = 0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000014);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    local_4 = 0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0085c7d0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d45e8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b477b4;
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  if ((char)param_5 == '\0') {
    param_5 = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
    local_4 = 0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_5);
    local_4 = 0xffffffff;
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0(uVar3);
      }
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0085c870(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iVar3 = param_3;
  iStack_4 = -1;
  puStack_8 = &LAB_009d4618;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b477c8;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(iVar3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  piVar1 = param_1;
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(piVar1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,piVar1);
  if ((char)param_1 == '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    param_1 = (int *)iVar5;
    FUN_0076ce40(in_ECX[0xe],&param_1);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0085ca00(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  iVar3 = param_3;
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d4618;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b477cc;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(iVar3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  piVar1 = param_1;
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)((int)puStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  puStack_4 = (undefined4 *)iVar3;
  local_c = (undefined4 *)FUN_00848fd0(piVar1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)((int)puStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  if ((char)param_1 == '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    param_1 = (int *)iVar5;
    FUN_0076ce40(in_ECX[0xe],&param_1);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0085cc20(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iVar3 = param_3;
  iStack_4 = -1;
  puStack_8 = &LAB_009d4618;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b477d0;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(iVar3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  piVar1 = param_1;
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(piVar1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,piVar1);
  if ((char)param_1 == '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    param_1 = (int *)iVar5;
    FUN_0076ce40(in_ECX[0xe],&param_1);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0085cdb0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  iVar3 = param_3;
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d4618;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b477d4;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(iVar3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  piVar1 = param_1;
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)((int)puStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  puStack_4 = (undefined4 *)iVar3;
  local_c = (undefined4 *)FUN_00848fd0(piVar1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)((int)puStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  if ((char)param_1 == '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    param_1 = (int *)iVar5;
    FUN_0076ce40(in_ECX[0xe],&param_1);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0085cfd0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iVar3 = param_3;
  iStack_4 = -1;
  puStack_8 = &LAB_009d4618;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b477d8;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(iVar3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(iVar3 + 0x10),uVar6);
  piVar1 = param_1;
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(piVar1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,piVar1);
  if ((char)param_1 == '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    param_1 = (int *)iVar5;
    FUN_0076ce40(in_ECX[0xe],&param_1);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0085d160(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  iVar3 = param_3;
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d4618;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b477dc;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(iVar3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(iVar3 + 0x10),uVar6);
  piVar1 = param_1;
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)((int)puStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  puStack_4 = (undefined4 *)iVar3;
  local_c = (undefined4 *)FUN_00848fd0(piVar1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)((int)puStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  if ((char)param_1 == '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    param_1 = (int *)iVar5;
    FUN_0076ce40(in_ECX[0xe],&param_1);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0085d380(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d4618;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b477b8;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  piVar1 = param_1;
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(piVar1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,piVar1);
  if ((char)param_1 == '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    param_1 = (int *)iVar5;
    FUN_0076ce40(in_ECX[0xe],&param_1);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0085d500(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d4618;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b477bc;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  piVar1 = param_1;
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)((int)puStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  puStack_4 = (undefined4 *)iVar3;
  local_c = (undefined4 *)FUN_00848fd0(piVar1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)((int)puStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  if ((char)param_1 == '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    param_1 = (int *)iVar5;
    FUN_0076ce40(in_ECX[0xe],&param_1);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0085d720(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d4618;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b477c0;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  piVar1 = param_1;
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(piVar1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,piVar1);
  if ((char)param_1 == '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    param_1 = (int *)iVar5;
    FUN_0076ce40(in_ECX[0xe],&param_1);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0085d8a0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d4618;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b477c4;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  piVar1 = param_1;
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)((int)puStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  puStack_4 = (undefined4 *)iVar3;
  local_c = (undefined4 *)FUN_00848fd0(piVar1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)((int)puStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  if ((char)param_1 == '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    param_1 = (int *)iVar5;
    FUN_0076ce40(in_ECX[0xe],&param_1);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0085dac0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iVar3 = param_3;
  iStack_4 = -1;
  puStack_8 = &LAB_009d4618;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b477e0;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(iVar3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(iVar3 + 0x10),uVar6);
  piVar1 = param_1;
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(piVar1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,piVar1);
  if ((char)param_1 == '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    param_1 = (int *)iVar5;
    FUN_0076ce40(in_ECX[0xe],&param_1);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0085dc50(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  iVar3 = param_3;
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d4618;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b477e4;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(iVar3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(iVar3 + 0x10),uVar6);
  piVar1 = param_1;
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)((int)puStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  puStack_4 = (undefined4 *)iVar3;
  local_c = (undefined4 *)FUN_00848fd0(piVar1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)((int)puStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,piVar1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  if ((char)param_1 == '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    param_1 = (int *)iVar5;
    FUN_0076ce40(in_ECX[0xe],&param_1);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0085de70(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000010;
  char cStack00000014;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d45b8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b477e8;
  iVar2 = **(int **)(DAT_00b477e8 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(in_stack_00000010,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1,uVar5);
      }
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00848fa0(iVar2,in_stack_00000010);
  if (cStack00000014 == '\0') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    _cStack00000014 = iVar4;
    uStack_4 = 0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000014);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    uStack_4 = 0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0085df60(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000010;
  char cStack00000014;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d45b8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b477ec;
  iVar2 = **(int **)(DAT_00b477ec + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(in_stack_00000010,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1,uVar5);
      }
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00848fa0(iVar2,in_stack_00000010);
  if (cStack00000014 == '\0') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    _cStack00000014 = iVar4;
    uStack_4 = 0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000014);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    uStack_4 = 0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0085e050(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d4618;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b477f0;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,*(undefined4 *)(param_3 + 0x10),uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00848fa0(iVar2,param_1);
  if ((char)param_2 == '\0') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    param_2 = iVar4;
    FUN_0076ce40(in_ECX[0xe],&param_2);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_0085e160(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d4618;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b477f4;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,*(undefined4 *)(param_3 + 0x10),uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00848fa0(iVar2,param_1);
  puVar6 = DAT_00b43108;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b43108) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  puVar6 = DAT_00b4310c;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 8);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b4310c) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if ((char)param_2 == '\0') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    param_2 = iVar4;
    FUN_0076ce40(in_ECX[0xe],&param_2);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_0085e300(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d4618;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b477f8;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,*(undefined4 *)(param_3 + 0x10),uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00848fa0(iVar2,param_1);
  if ((char)param_2 == '\0') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    param_2 = iVar4;
    FUN_0076ce40(in_ECX[0xe],&param_2);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_0085e410(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d4588;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b477fc;
  iVar2 = **(int **)(DAT_00b42eb8 + 0xc);
  iVar3 = **(int **)(DAT_00b477fc + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar6);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_00848fa0(iVar3,param_3);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x18);
  puVar7 = (undefined4 *)FUN_00405a30();
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_007715e0(0);
  if ((char)param_4 == '\0') {
    *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    param_4 = (int *)iVar5;
    puStack_8 = (undefined1 *)0x0;
    FUN_0076ce40(*(undefined4 *)(unaff_EBX + 0x38),&param_4);
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    puStack_8 = (undefined1 *)0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(unaff_EBX + 0x38) = *(int *)(unaff_EBX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0085e570(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar3 = param_1;
  puStack_8 = &LAB_009d4650;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = 0;
  uVar7 = 0;
  local_4 = 0;
  uVar2 = *(uint *)(param_1 + 0x18);
  while (uVar2 < 7) {
    piVar5 = (int *)FUN_00772630(&param_1,uVar4);
    local_4._0_1_ = 1;
    if (iVar6 != *piVar5) {
      if (iVar6 != 0) {
        piVar1 = (int *)(iVar6 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar6 = *piVar5;
      if (iVar6 != 0) {
        *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if ((param_1 != 0) &&
       (*(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1, *(int *)(param_1 + 0x5c) == 0)) {
      FUN_00772560();
    }
    FUN_00801110(iVar6,uVar7,1,2);
    FUN_00760010(*(undefined4 *)(iVar3 + 0x14),iVar6);
    uVar7 = uVar7 + 1;
    uVar2 = uVar7;
  }
  local_4 = 0xffffffff;
  if (iVar6 != 0) {
    piVar5 = (int *)(iVar6 + 0x5c);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      FUN_00772560();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}


/*
Unable to decompile 'FUN_0085e660'
Cause: Exception while decompiling 0085e660: process: timeout

*/

