
void FUN_00840000(int *param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b458b8;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar6);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  iStack_4 = iVar5;
  FUN_0076ce40(in_ECX[0xe],&iStack_4);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00840180(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b458bc;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  iVar3 = **(int **)(puVar5 + 0x24);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00840370(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b458c0;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = **(int **)(puVar5 + 0x24);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_00840580(int *param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b458d0;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar6);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  iStack_4 = iVar5;
  FUN_0076ce40(in_ECX[0xe],&iStack_4);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00840700(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b458d4;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  iVar3 = **(int **)(puVar5 + 0x24);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008408f0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b458d8;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = **(int **)(puVar5 + 0x24);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_00840b00(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b458ec;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar6);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  puVar4 = *(undefined4 **)(puVar5[9] + 4);
  puStack_4 = puVar4;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = (undefined4 *)puVar4[1];
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
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
  iVar3 = *(int *)(puVar5[9] + 0x1c);
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
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_4 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_4);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00840d20(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b458f0;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  iVar3 = *(int *)puVar5[9];
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00840fb0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b458f4;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = *(int *)puVar5[9];
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_00841260(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b45904;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar6);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  puVar4 = *(undefined4 **)(puVar5[9] + 4);
  puStack_4 = puVar4;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = (undefined4 *)puVar4[1];
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
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
  iVar3 = *(int *)(puVar5[9] + 0x1c);
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
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_4 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_4);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00841480(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45908;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  iVar3 = *(int *)puVar5[9];
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00841710(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b4590c;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = *(int *)puVar5[9];
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_008419c0(int *param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b456c8;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  iStack_4 = iVar5;
  FUN_0076ce40(in_ECX[0xe],&iStack_4);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00841b40(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b456cc;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = **(int **)(puVar5 + 0x24);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0xc);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_00841d30(int *param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b456dc;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  iStack_4 = iVar5;
  FUN_0076ce40(in_ECX[0xe],&iStack_4);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00841eb0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b456e4;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = **(int **)(puVar5 + 0x24);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0xc);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_008420a0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b456f4;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  puVar4 = *(undefined4 **)(puVar5[9] + 4);
  puStack_4 = puVar4;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = (undefined4 *)puVar4[1];
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x14);
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
  iVar3 = *(int *)(puVar5[9] + 0x18);
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
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_4 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_4);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_008422c0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b456f8;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = *(int *)puVar5[9];
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0xc);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_00842550(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b45708;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  puVar4 = *(undefined4 **)(puVar5[9] + 4);
  puStack_4 = puVar4;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = (undefined4 *)puVar4[1];
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x14);
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
  iVar3 = *(int *)(puVar5[9] + 0x18);
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
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_4 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_4);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00842770(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45710;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = *(int *)puVar5[9];
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0xc);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_00842a00(int *param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b45720;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  iStack_4 = iVar5;
  FUN_0076ce40(in_ECX[0xe],&iStack_4);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00842b80(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45724;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = **(int **)(puVar5 + 0x24);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0xc);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_00842d70(int *param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b45734;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  iStack_4 = iVar5;
  FUN_0076ce40(in_ECX[0xe],&iStack_4);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00842ef0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b4573c;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = **(int **)(puVar5 + 0x24);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0xc);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_008430e0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b4574c;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  puVar4 = *(undefined4 **)(puVar5[9] + 4);
  puStack_4 = puVar4;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = (undefined4 *)puVar4[1];
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x14);
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
  iVar3 = *(int *)(puVar5[9] + 0x18);
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
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_4 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_4);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00843300(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45750;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = *(int *)puVar5[9];
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0xc);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_00843590(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b45760;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  puVar4 = *(undefined4 **)(puVar5[9] + 4);
  puStack_4 = puVar4;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = (undefined4 *)puVar4[1];
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x14);
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
  iVar3 = *(int *)(puVar5[9] + 0x18);
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
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_4 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_4);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_008437b0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45768;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = *(int *)puVar5[9];
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
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
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0xc);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_00843a40(void)

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
  int in_stack_00000010;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45940;
  iVar2 = **(int **)(DAT_00b45940 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(in_stack_00000010,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1,uVar5);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00848fa0(iVar2,in_stack_00000010);
  FUN_007715e0(0);
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  in_stack_00000010 = iVar4;
  uStack_4 = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000010);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  uStack_4 = 0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00843b30(void)

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
  int in_stack_00000010;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b4594c;
  iVar2 = **(int **)(DAT_00b4594c + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(in_stack_00000010,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1,uVar5);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00848fa0(iVar2,in_stack_00000010);
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  in_stack_00000010 = iVar4;
  uStack_4 = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000010);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  uStack_4 = 0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00843c10(void)

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
  int in_stack_00000010;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45978;
  iVar2 = **(int **)(DAT_00b45978 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(in_stack_00000010,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1,uVar5);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00848fa0(iVar2,in_stack_00000010);
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  in_stack_00000010 = iVar4;
  uStack_4 = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000010);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  uStack_4 = 0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00843cf0(void)

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
  int in_stack_00000010;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45984;
  iVar2 = **(int **)(DAT_00b45984 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(in_stack_00000010,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1,uVar5);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00848fa0(iVar2,in_stack_00000010);
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  in_stack_00000010 = iVar4;
  uStack_4 = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000010);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  uStack_4 = 0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00843dd0(int param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b459f4;
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
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_1 = iVar4;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_00843ed0(int param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b459f8;
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
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_1 = iVar4;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_00843fd0(int param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45a00;
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
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_1 = iVar4;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_008440d0(int param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45a04;
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
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_1 = iVar4;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_008441d0(undefined4 *param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45a10;
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
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0x10);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  param_1 = DAT_00b43108;
  if (puVar3 != DAT_00b43108) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0x14);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  param_1 = DAT_00b4310c;
  if (puVar3 != DAT_00b4310c) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_1 = (undefined4 *)iVar4;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_00844370(undefined4 *param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45a14;
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
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0x10);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  param_1 = DAT_00b43108;
  if (puVar3 != DAT_00b43108) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0x14);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  param_1 = DAT_00b4310c;
  if (puVar3 != DAT_00b4310c) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_1 = (undefined4 *)iVar4;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_00844510(undefined4 *param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45a1c;
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
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0x10);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  param_1 = DAT_00b43108;
  if (puVar3 != DAT_00b43108) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0x14);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  param_1 = DAT_00b4310c;
  if (puVar3 != DAT_00b4310c) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_1 = (undefined4 *)iVar4;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_008446b0(undefined4 *param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45a20;
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
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0x10);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  param_1 = DAT_00b43108;
  if (puVar3 != DAT_00b43108) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0x14);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  param_1 = DAT_00b4310c;
  if (puVar3 != DAT_00b4310c) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_1 = (undefined4 *)iVar4;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_00844850(int param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45a2c;
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
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_1 = iVar4;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_00844950(int param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45a30;
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
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_1 = iVar4;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_00844a50(int param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45a38;
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
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_1 = iVar4;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_00844b50(int param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45a3c;
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
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_1 = iVar4;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_00844c50(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = (undefined4 *)&LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45bb0;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,0,uVar4);
  iVar3 = param_1;
  iVar5 = FUN_007b4280(*(uint *)(param_1 + 0x1c) >> 0x1c);
  if (DAT_00b43074 == '\0') {
    if (iVar5 != 0) {
      puVar6 = DAT_00b430f4;
      if (DAT_00b430ad != '\0') {
        puVar6 = (undefined4 *)FUN_00405a30();
      }
      goto LAB_00844d13;
    }
  }
  else {
    if ((*(uint *)(iVar3 + 0x1c) & 0x200000) == 0) {
      if (iVar5 == 0) goto LAB_00844d1a;
      if (DAT_00b430ad == '\0') {
        puStack_8 = DAT_00b430f4;
        puVar6 = puStack_8;
      }
      else {
        puVar6 = (undefined4 *)FUN_00405a30();
      }
    }
    else {
      puStack_8 = DAT_00b430f4;
      puVar6 = puStack_8;
    }
LAB_00844d13:
    puStack_8 = puVar6;
    if (puStack_8 != (undefined4 *)0x0) goto LAB_00844d24;
  }
LAB_00844d1a:
  puStack_8 = DAT_00b430f4;
LAB_00844d24:
  if (DAT_00b42ce3 == '\0') {
    DAT_00b464a4 = *(float *)(iVar3 + 0xa4) * DAT_00b464a4;
  }
  iVar2 = **(int **)(iVar2 + 0x24);
  puVar7 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar6 = *(undefined4 **)(iVar2 + 4);
  if (puVar6 != puVar7) {
    if (((puVar6 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar6 + 1), LVar8 == 0)) &&
       (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_00848fa0(iVar2,param_1);
  iVar2 = *(int *)(*(int *)(unaff_ESI + 0x24) + 4);
  puVar6 = *(undefined4 **)(iVar2 + 4);
  if (puVar6 != puStack_8) {
    if (((puVar6 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar6 + 1), LVar8 == 0)) &&
       (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  *(int *)(unaff_ESI + 0x60) = *(int *)(unaff_ESI + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(unaff_ESI + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_00844e30(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = (undefined4 *)&LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45bb4;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,0,uVar4);
  iVar3 = param_1;
  iVar5 = FUN_007b4280(*(uint *)(param_1 + 0x1c) >> 0x1c);
  if (DAT_00b43074 == '\0') {
    if (iVar5 != 0) {
      puVar6 = DAT_00b430f4;
      if (DAT_00b430ad != '\0') {
        puVar6 = (undefined4 *)FUN_00405a30();
      }
      goto LAB_00844ef3;
    }
  }
  else {
    if ((*(uint *)(iVar3 + 0x1c) & 0x200000) == 0) {
      if (iVar5 == 0) goto LAB_00844efa;
      if (DAT_00b430ad == '\0') {
        puStack_8 = DAT_00b430f4;
        puVar6 = puStack_8;
      }
      else {
        puVar6 = (undefined4 *)FUN_00405a30();
      }
    }
    else {
      puStack_8 = DAT_00b430f4;
      puVar6 = puStack_8;
    }
LAB_00844ef3:
    puStack_8 = puVar6;
    if (puStack_8 != (undefined4 *)0x0) goto LAB_00844f04;
  }
LAB_00844efa:
  puStack_8 = DAT_00b430f4;
LAB_00844f04:
  if (DAT_00b42ce3 == '\0') {
    DAT_00b464a4 = *(float *)(iVar3 + 0xa4) * DAT_00b464a4;
  }
  iVar2 = **(int **)(iVar2 + 0x24);
  puVar7 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar6 = *(undefined4 **)(iVar2 + 4);
  if (puVar6 != puVar7) {
    if (((puVar6 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar6 + 1), LVar8 == 0)) &&
       (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_00848fa0(iVar2,param_1);
  iVar2 = *(int *)(*(int *)(unaff_ESI + 0x24) + 4);
  puVar6 = *(undefined4 **)(iVar2 + 4);
  if (puVar6 != puStack_8) {
    if (((puVar6 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar6 + 1), LVar8 == 0)) &&
       (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  *(int *)(unaff_ESI + 0x60) = *(int *)(unaff_ESI + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(unaff_ESI + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_00845010(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = (undefined4 *)&LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45bb8;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,0,uVar5);
  iVar3 = param_1;
  iVar6 = FUN_007b4280(*(uint *)(param_1 + 0x1c) >> 0x1c);
  if (iVar6 == 0) {
    puStack_8 = DAT_00b430f4;
  }
  else if (DAT_00b430ad == '\0') {
    puStack_8 = DAT_00b430f4;
  }
  else {
    puStack_8 = (undefined4 *)FUN_00405a30();
  }
  if (DAT_00b42ce3 == '\0') {
    DAT_00b464a4 = *(float *)(iVar3 + 0xa4) * DAT_00b464a4;
  }
  iVar6 = **(int **)(iVar4 + 0x24);
  puVar7 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar2 = *(undefined4 **)(iVar6 + 4);
  if (puVar2 != puVar7) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar2 + 1), LVar8 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(iVar6 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_00848fa0(iVar6,param_1);
  iVar3 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puVar2 = *(undefined4 **)(iVar3 + 4);
  if (puVar2 != puStack_8) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar2 + 1), LVar8 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_1 = iVar4;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008451b0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int iStack_18;
  int local_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
  iVar5 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = (undefined4 *)&LAB_009d3248;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45bbc;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,0,uVar4);
  _DAT_00b44f28 = *(float *)(iVar5 + 0x20) - DAT_00b3f92c;
  _DAT_00b44f2c = *(float *)(iVar5 + 0x24) - DAT_00b3f930;
  _DAT_00b44f30 = *(float *)(iVar5 + 0x28) - DAT_00b3f934;
  puStack_8 = DAT_00b43114;
  if (DAT_00b42ce3 == '\0') {
    DAT_00b464a4 = *(float *)(param_1 + 0xa4) * DAT_00b464a4;
    iVar5 = FUN_007ed1a0();
    if ((iVar5 == 0) || (*(char *)(iVar5 + 0xfc) == '\0')) {
      DAT_00b464a8 = DAT_00b46498;
      DAT_00b464ac = DAT_00b4649c;
      DAT_00b464b0 = DAT_00b464a0;
      DAT_00b464b4 = DAT_00b464a4;
    }
  }
  else {
    iVar5 = FUN_007ed1a0();
    if ((iVar5 == 0) || (*(char *)(iVar5 + 0xfc) == '\0')) {
      DAT_00b464a8 = 0x3f000000;
      DAT_00b464ac = 0x3f000000;
      DAT_00b464b0 = 0x3f000000;
      DAT_00b464b4 = 1.0;
    }
  }
  iVar5 = **(int **)(iVar3 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar2 = *(undefined4 **)(iVar5 + 4);
  if (puVar2 != puVar6) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar2 + 1), LVar7 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(iVar5 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00848fa0(iVar5,param_1);
  iVar5 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  puVar2 = *(undefined4 **)(iVar5 + 4);
  if (puVar2 != puStack_8) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar2 + 1), LVar7 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(iVar5 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_1 = iVar3;
  FUN_0076ce40(in_ECX[0xe],&param_1);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = iStack_18;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008453f0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *unaff_ESI;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  undefined4 *puVar10;
  float fVar11;
  int iVar12;
  float fStack_d8;
  undefined4 auStack_90 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 auStack_5c [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d327b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff18;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = DAT_00b45bc8;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,0,uVar2);
  iVar12 = *(int *)piVar1[9];
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar10 = *(undefined4 **)(iVar12 + 4);
  if (puVar10 != puVar3) {
    if (((puVar10 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar10 + 1), LVar4 == 0))
       && (puVar10 != (undefined4 *)0x0)) {
      (**(code **)*puVar10)(1);
    }
    *(undefined4 **)(iVar12 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  FUN_00848fa0(iVar12,unaff_retaddr);
  puVar3 = DAT_00b43128;
  iVar12 = *(int *)(piVar1[9] + 4);
  puVar10 = *(undefined4 **)(iVar12 + 4);
  if (puVar10 != DAT_00b43128) {
    if (((puVar10 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar10 + 1), LVar4 == 0))
       && (puVar10 != (undefined4 *)0x0)) {
      (**(code **)*puVar10)(1);
    }
    *(undefined4 **)(iVar12 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar12 = 0;
  iVar5 = FUN_007ee1f0();
  if ((iVar5 != 0) || (iVar5 = FUN_007ee1d0(), piVar8 = piVar1, iVar5 != 0)) {
    puVar10 = &DAT_00b46298;
    iVar7 = 0;
    do {
      piVar8 = unaff_ESI;
      if (DAT_00b42e88 <= iVar12) break;
      puVar3 = (undefined4 *)(iVar5 + 8);
      puVar9 = auStack_90;
      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar9 = puVar9 + 1;
      }
      auStack_5c[0] = auStack_90[0];
      auStack_5c[1] = auStack_90[1];
      auStack_5c[2] = auStack_90[2];
      auStack_5c[3] = uStack_6c;
      uStack_4c = auStack_90[3];
      uStack_48 = uStack_80;
      uStack_44 = uStack_7c;
      uVar2 = 5;
      uStack_40 = uStack_68;
      uStack_3c = uStack_78;
      uStack_38 = uStack_74;
      uStack_34 = uStack_70;
      uStack_30 = uStack_64;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = uStack_60;
      puVar3 = auStack_5c;
      puVar9 = puVar10;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar9 = puVar9 + 1;
      }
      fVar11 = *(float *)(iVar5 + 0x40);
      fStack_d8 = 1.0;
      while( true ) {
        if ((uVar2 & 1) != 0) {
          fStack_d8 = fVar11 * fStack_d8;
        }
        uVar2 = uVar2 >> 1;
        if (uVar2 == 0) break;
        fVar11 = fVar11 * fVar11;
      }
      *(float *)((int)&DAT_00b46218 + iVar7) = 1.0 - fStack_d8;
      switch(*(undefined1 *)(iVar5 + 0x44)) {
      case 0:
        *(undefined4 *)((int)&DAT_00b46198 + iVar7) = 0;
        *(undefined4 *)((int)&DAT_00b4619c + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b461a0 + iVar7) = 0;
        *(undefined4 *)((int)&DAT_00b461a4 + iVar7) = 0x3f000000;
        break;
      case 1:
        *(undefined4 *)((int)&DAT_00b46198 + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b4619c + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b461a0 + iVar7) = 0;
        *(undefined4 *)((int)&DAT_00b461a4 + iVar7) = 0x3f000000;
        break;
      case 2:
        *(undefined4 *)((int)&DAT_00b46198 + iVar7) = 0;
        *(undefined4 *)((int)&DAT_00b4619c + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b461a0 + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b461a4 + iVar7) = 0x3f000000;
        break;
      case 3:
        *(undefined4 *)((int)&DAT_00b46198 + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b4619c + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b461a0 + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b461a4 + iVar7) = 0x3f000000;
        break;
      default:
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)("Invalid sub texture in decal",0);
        }
      }
      puVar10 = puVar10 + 0x10;
      iVar12 = iVar12 + 1;
      iVar7 = iVar7 + 0x10;
      if (iVar12 < DAT_00b42e88) {
        iVar5 = FUN_007ee1f0();
      }
      in_ECX = piVar1;
    } while (iVar5 != 0);
  }
  _DAT_00b4615c = (float)iVar12;
  piVar8[0x18] = piVar8[0x18] + 1;
  uStack_14 = 0;
  FUN_0076ce40(in_ECX[0xe],&stack0xffffff1c);
  piVar8 = piVar8 + 0x18;
  *piVar8 = *piVar8 + -1;
  uStack_14 = 0xffffffff;
  if (*piVar8 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00845870(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *unaff_ESI;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  undefined4 *puVar10;
  float fVar11;
  int iVar12;
  float fStack_d8;
  undefined4 auStack_90 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 auStack_5c [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d327b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff18;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = DAT_00b45bcc;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,0,uVar2);
  iVar12 = *(int *)piVar1[9];
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar10 = *(undefined4 **)(iVar12 + 4);
  if (puVar10 != puVar3) {
    if (((puVar10 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar10 + 1), LVar4 == 0))
       && (puVar10 != (undefined4 *)0x0)) {
      (**(code **)*puVar10)(1);
    }
    *(undefined4 **)(iVar12 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  FUN_00848fa0(iVar12,unaff_retaddr);
  puVar3 = DAT_00b43128;
  iVar12 = *(int *)(piVar1[9] + 4);
  puVar10 = *(undefined4 **)(iVar12 + 4);
  if (puVar10 != DAT_00b43128) {
    if (((puVar10 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar10 + 1), LVar4 == 0))
       && (puVar10 != (undefined4 *)0x0)) {
      (**(code **)*puVar10)(1);
    }
    *(undefined4 **)(iVar12 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar12 = 1;
  iVar5 = FUN_007ee1f0();
  if ((iVar5 != 0) || (iVar5 = FUN_007ee1d0(), piVar8 = piVar1, iVar5 != 0)) {
    puVar10 = &DAT_00b462d8;
    iVar7 = 0;
    do {
      piVar8 = unaff_ESI;
      if (DAT_00b42e88 <= iVar12) break;
      puVar3 = (undefined4 *)(iVar5 + 8);
      puVar9 = auStack_90;
      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar9 = puVar9 + 1;
      }
      auStack_5c[0] = auStack_90[0];
      auStack_5c[1] = auStack_90[1];
      auStack_5c[2] = auStack_90[2];
      auStack_5c[3] = uStack_6c;
      uStack_4c = auStack_90[3];
      uStack_48 = uStack_80;
      uStack_44 = uStack_7c;
      uVar2 = 10;
      uStack_40 = uStack_68;
      uStack_3c = uStack_78;
      uStack_38 = uStack_74;
      uStack_34 = uStack_70;
      uStack_30 = uStack_64;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = uStack_60;
      puVar3 = auStack_5c;
      puVar9 = puVar10;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar9 = puVar9 + 1;
      }
      fVar11 = *(float *)(iVar5 + 0x40);
      fStack_d8 = 1.0;
      while( true ) {
        if ((uVar2 & 1) != 0) {
          fStack_d8 = fVar11 * fStack_d8;
        }
        uVar2 = uVar2 >> 1;
        if (uVar2 == 0) break;
        fVar11 = fVar11 * fVar11;
      }
      *(float *)((int)&DAT_00b46228 + iVar7) = 1.0 - fStack_d8;
      switch(*(undefined1 *)(iVar5 + 0x44)) {
      case 0:
        *(undefined4 *)((int)&DAT_00b461a8 + iVar7) = 0;
        *(undefined4 *)((int)&DAT_00b461ac + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b461b0 + iVar7) = 0;
        *(undefined4 *)((int)&DAT_00b461b4 + iVar7) = 0x3f000000;
        break;
      case 1:
        *(undefined4 *)((int)&DAT_00b461a8 + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b461ac + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b461b0 + iVar7) = 0;
        *(undefined4 *)((int)&DAT_00b461b4 + iVar7) = 0x3f000000;
        break;
      case 2:
        *(undefined4 *)((int)&DAT_00b461a8 + iVar7) = 0;
        *(undefined4 *)((int)&DAT_00b461ac + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b461b0 + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b461b4 + iVar7) = 0x3f000000;
        break;
      case 3:
        *(undefined4 *)((int)&DAT_00b461a8 + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b461ac + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b461b0 + iVar7) = 0x3f000000;
        *(undefined4 *)((int)&DAT_00b461b4 + iVar7) = 0x3f000000;
        break;
      default:
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)("Invalid sub texture in decal",0);
        }
      }
      puVar10 = puVar10 + 0x10;
      iVar12 = iVar12 + 1;
      iVar7 = iVar7 + 0x10;
      if (iVar12 < DAT_00b42e88) {
        iVar5 = FUN_007ee1f0();
      }
      in_ECX = piVar1;
    } while (iVar5 != 0);
  }
  _DAT_00b4615c = (float)iVar12;
  piVar8[0x18] = piVar8[0x18] + 1;
  uStack_14 = 0;
  FUN_0076ce40(in_ECX[0xe],&stack0xffffff1c);
  piVar8 = piVar8 + 0x18;
  *piVar8 = *piVar8 + -1;
  uStack_14 = 0xffffffff;
  if (*piVar8 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void FUN_00845cf0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar3 = (int)param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b45b7c;
  iVar2 = **(int **)(DAT_00b42eb8 + 0xc);
  FUN_00848e50(*(undefined4 *)((int)param_3 + 0xc));
  if (((*(byte *)(*(int *)(iVar3 + 8) + 0x18) & 1) == 0) &&
     ((*(ushort *)(*(int *)(iVar3 + 8) + 0x18) >> 9 & 1) == 0)) {
    FUN_007aec60((&DAT_00b45274)[DAT_00b430b0 * 2]);
  }
  else {
    puVar4 = *(undefined4 **)(&DAT_00b45278 + DAT_00b430b0 * 8);
    puVar7 = *(undefined4 **)(iVar5 + 0x44);
    if (puVar7 != puVar4) {
      if (((puVar7 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar7 + 1), LVar8 == 0))
         && (puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1,uVar6);
      }
      *(undefined4 **)(iVar5 + 0x44) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar4 + 1);
      }
    }
  }
  iVar3 = **(int **)(iVar5 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_00848fa0(iVar3,param_3);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x18);
  param_3 = (undefined4 *)FUN_00405a30();
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != param_3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  FUN_007715e0(0);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  param_3 = (undefined4 *)iVar5;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_00845ec0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar3 = (int)param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b45b80;
  iVar2 = **(int **)(DAT_00b42eb8 + 0xc);
  FUN_00848e50(*(undefined4 *)((int)param_3 + 0xc));
  if (((*(byte *)(*(int *)(iVar3 + 8) + 0x18) & 1) == 0) &&
     ((*(ushort *)(*(int *)(iVar3 + 8) + 0x18) >> 9 & 1) == 0)) {
    FUN_007aec60((&DAT_00b45274)[DAT_00b430b0 * 2]);
  }
  else {
    puVar4 = *(undefined4 **)(&DAT_00b45278 + DAT_00b430b0 * 8);
    puVar7 = *(undefined4 **)(iVar5 + 0x44);
    if (puVar7 != puVar4) {
      if (((puVar7 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar7 + 1), LVar8 == 0))
         && (puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1,uVar6);
      }
      *(undefined4 **)(iVar5 + 0x44) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar4 + 1);
      }
    }
  }
  iVar3 = **(int **)(iVar5 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_00848fa0(iVar3,param_3);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x18);
  param_3 = (undefined4 *)FUN_00405a30();
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != param_3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  FUN_007715e0(0);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  param_3 = (undefined4 *)iVar5;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_00846090(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  LONG LVar8;
  undefined4 *puVar9;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3428;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b45b84;
  uVar2 = *(undefined1 *)(DAT_00b42eb8 + 9);
  FUN_00848e50(*(undefined4 *)((int)param_3 + 0xc));
  puVar3 = (undefined4 *)(&DAT_00b45274)[DAT_00b430b0 * 2];
  puVar9 = *(undefined4 **)(iVar6 + 0x44);
  if (puVar9 != puVar3) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar9 + 1), LVar8 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1,uVar7);
    }
    *(undefined4 **)(iVar6 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar4 = **(int **)(DAT_00b42eb8 + 0xc);
  iVar5 = **(int **)(iVar6 + 0x24);
  puVar9 = (undefined4 *)(**(code **)(*param_4 + 0x88))(uVar2);
  puVar3 = *(undefined4 **)(iVar5 + 4);
  if (puVar3 != puVar9) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar5 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  FUN_00848fa0(iVar5,param_3);
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
  param_3 = (undefined4 *)FUN_00405a30();
  puVar3 = *(undefined4 **)(iVar5 + 4);
  if (puVar3 != param_3) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar5 + 4) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  FUN_007715e0(0);
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  param_3 = (undefined4 *)iVar6;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar4;
  return;
}



void FUN_00846250(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  char cStack00000010;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = _cStack00000010;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d32a8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b456c4;
  iVar2 = **(int **)(DAT_00b456c4 + 0x24);
  puVar7 = (undefined4 *)
           (**(code **)(*_cStack00000010 + 0x88))(*(undefined1 *)(DAT_00b42eb8 + 9),uVar6);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_00848fa0(iVar2,piVar1);
  iVar2 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  puVar7 = (undefined4 *)FUN_00848fd0(piVar1,in_ECX);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_00848fa0(iVar2,piVar1);
  puVar7 = DAT_00b43108;
  iVar2 = *(int *)(*(int *)(iVar5 + 0x24) + 8);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b43108) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b4310c;
  iVar2 = *(int *)(*(int *)(iVar5 + 0x24) + 0xc);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b4310c) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  uVar4 = 0;
  if (in_ECX == 4) {
    uStack_24 = 0x3f800000;
LAB_00846412:
    local_28 = 0;
    if (in_ECX != 2) goto LAB_00846403;
    local_2c = 0x3f800000;
  }
  else {
    uStack_24 = 0;
    if (in_ECX != 3) goto LAB_00846412;
    local_28 = 0x3f800000;
LAB_00846403:
    uVar4 = 0x3f800000;
    local_2c = 0;
    if (in_ECX != 1) {
      uVar4 = 0;
    }
  }
  FUN_007ecae0(2,uVar4,local_2c,local_28,uStack_24);
  if (in_ECX == 8) {
    local_2c = 0x3f800000;
LAB_008464a6:
    uVar4 = 0;
    local_28 = 0;
    if (in_ECX == 6) {
      uStack_24 = 0x3f800000;
      goto LAB_008464b9;
    }
  }
  else {
    local_2c = 0;
    if (in_ECX != 7) goto LAB_008464a6;
    local_28 = 0x3f800000;
  }
  uVar4 = 0x3f800000;
  uStack_24 = 0;
  if (in_ECX != 5) {
    uVar4 = 0;
  }
LAB_008464b9:
  FUN_007ecae0(3,uVar4,uStack_24,local_28,local_2c);
  if (cStack00000010 != '\0') {
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00846570(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  char cStack00000010;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = _cStack00000010;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d32a8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b45b5c;
  iVar2 = **(int **)(DAT_00b45b5c + 0x24);
  puVar7 = (undefined4 *)
           (**(code **)(*_cStack00000010 + 0x88))(*(undefined1 *)(DAT_00b42eb8 + 9),uVar6);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_00848fa0(iVar2,piVar1);
  iVar2 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  puVar7 = (undefined4 *)FUN_00848fd0(piVar1,in_ECX);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_00848fa0(iVar2,piVar1);
  puVar7 = DAT_00b43108;
  iVar2 = *(int *)(*(int *)(iVar5 + 0x24) + 8);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b43108) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b4310c;
  iVar2 = *(int *)(*(int *)(iVar5 + 0x24) + 0xc);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b4310c) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  uVar4 = 0;
  if (in_ECX == 4) {
    uStack_24 = 0x3f800000;
LAB_00846732:
    local_28 = 0;
    if (in_ECX != 2) goto LAB_00846723;
    local_2c = 0x3f800000;
  }
  else {
    uStack_24 = 0;
    if (in_ECX != 3) goto LAB_00846732;
    local_28 = 0x3f800000;
LAB_00846723:
    uVar4 = 0x3f800000;
    local_2c = 0;
    if (in_ECX != 1) {
      uVar4 = 0;
    }
  }
  FUN_007ecae0(2,uVar4,local_2c,local_28,uStack_24);
  if (in_ECX == 8) {
    local_2c = 0x3f800000;
LAB_008467c6:
    uVar4 = 0;
    local_28 = 0;
    if (in_ECX == 6) {
      uStack_24 = 0x3f800000;
      goto LAB_008467d9;
    }
  }
  else {
    local_2c = 0;
    if (in_ECX != 7) goto LAB_008467c6;
    local_28 = 0x3f800000;
  }
  uVar4 = 0x3f800000;
  uStack_24 = 0;
  if (in_ECX != 5) {
    uVar4 = 0;
  }
LAB_008467d9:
  FUN_007ecae0(3,uVar4,uStack_24,local_28,local_2c);
  if (cStack00000010 != '\0') {
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00846890(void)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  LONG LVar11;
  int iVar12;
  undefined4 in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  float10 fVar13;
  int unaff_retaddr;
  float fStack0000000c;
  char cStack00000010;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = _cStack00000010;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d32d8;
  local_c = *unaff_FS_OFFSET;
  uVar9 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar8 = DAT_00b45b78;
  iVar12 = **(int **)(DAT_00b45b78 + 0x24);
  puVar10 = (undefined4 *)
            (**(code **)(*_cStack00000010 + 0x88))(*(undefined1 *)(DAT_00b42eb8 + 9),uVar9);
  puVar2 = *(undefined4 **)(iVar12 + 4);
  if (puVar2 != puVar10) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar11 = InterlockedDecrement(puVar2 + 1), LVar11 == 0))
       && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(iVar12 + 4) = puVar10;
    if (puVar10 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar10 + 1);
    }
  }
  FUN_00848fa0(iVar12,piVar1);
  iVar12 = *(int *)(*(int *)(iVar8 + 0x24) + 4);
  puVar10 = (undefined4 *)FUN_00848fd0(piVar1,in_ECX);
  puVar2 = *(undefined4 **)(iVar12 + 4);
  if (puVar2 != puVar10) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar11 = InterlockedDecrement(puVar2 + 1), LVar11 == 0))
       && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(iVar12 + 4) = puVar10;
    if (puVar10 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar10 + 1);
    }
  }
  FUN_00848fa0(iVar12,piVar1);
  puVar10 = DAT_00b430e8;
  iVar12 = *(int *)(*(int *)(iVar8 + 0x24) + 8);
  puVar2 = *(undefined4 **)(iVar12 + 4);
  if (puVar2 != DAT_00b430e8) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar11 = InterlockedDecrement(puVar2 + 1), LVar11 == 0))
       && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(iVar12 + 4) = puVar10;
    if (puVar10 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar10 + 1);
    }
  }
  fVar3 = *(float *)(unaff_retaddr + 0x88);
  fVar4 = *(float *)(unaff_retaddr + 0x8c);
  if (DAT_00b42d78 == (code *)0x0) {
    fStack0000000c = 0.0;
  }
  else {
    fVar13 = (float10)(*DAT_00b42d78)(0,0);
    fStack0000000c = (float)fVar13;
  }
  fVar5 = (fStack0000000c - _DAT_00b43078) / 5000.0;
  fVar7 = 0.0;
  if (((0.0 <= fVar5) && (fVar6 = 1.0, 1.0 < fVar5)) || (fVar6 = fVar5, 0.0 <= fVar5)) {
    fVar7 = fVar6;
  }
  _DAT_00b46638 = piVar1[0x2a];
  _DAT_00b4663c = piVar1[0x2b];
  _DAT_00b46640 = (fVar7 * (DAT_00b4312c - DAT_00b43134) + DAT_00b43134) - fVar3;
  _DAT_00b46644 = (fVar7 * (DAT_00b43130 - DAT_00b43138) + DAT_00b43138) - fVar4;
  _DAT_00b46648 = (float)_DAT_00b2c684 * 0.5 * 4096.0;
  _DAT_00b4664c = 0x45000000;
  _DAT_00b46650 = 0;
  _DAT_00b46654 = 0;
  if (((cStack00000010 != '\0') && (DAT_00b2c67e != '\0')) &&
     ((DAT_00b43077 != '\0' && (iVar12 = (**(code **)(*piVar1 + 0x88))(in_ECX), iVar12 != 0)))) {
    *(int *)(iVar8 + 0x60) = *(int *)(iVar8 + 0x60) + 1;
    _cStack00000010 = (int *)iVar8;
    puStack_8 = (undefined1 *)0x0;
    FUN_0076ce40(*(undefined4 *)(unaff_EBX + 0x38),&stack0x00000010);
    piVar1 = (int *)(iVar8 + 0x60);
    *piVar1 = *piVar1 + -1;
    puStack_8 = (undefined1 *)0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(unaff_EBX + 0x38) = *(int *)(unaff_EBX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00846c50(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int in_ECX;
  int unaff_EBX;
  uint *unaff_FS_OFFSET;
  char cStack00000010;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = _cStack00000010;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d4588;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (uint)&local_c;
  iVar6 = DAT_00b45b44;
  bVar2 = *(byte *)(DAT_00b42eb8 + 9);
  iVar3 = **(int **)(DAT_00b45b44 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*_cStack00000010 + 0x88))((uint)bVar2,uVar7);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(unaff_EBX,piVar1);
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  puVar8 = (undefined4 *)FUN_00848fd0(piVar1,iVar3);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar5 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(iVar5,piVar1);
  if (cStack00000010 != '\0') {
    *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
    _cStack00000010 = (int *)iVar6;
    puStack_8 = (undefined1 *)0x0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000010);
    piVar1 = (int *)(iVar6 + 0x60);
    *piVar1 = *piVar1 + -1;
    puStack_8 = (undefined1 *)0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = (uint)bVar2;
  return;
}



void FUN_00846dc0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3308;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45b48;
  uVar8 = (uint)*(byte *)(DAT_00b42eb8 + 9);
  param_4 = (int *)(uint)*(byte *)(param_4[0x32] + uVar8);
  FUN_007ecae0(0x1f,0x3f800000,DAT_00b25ad4,(float)(int)param_4,DAT_00b25adc,uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  param_4 = (int *)iVar2;
  puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x88))(uVar8);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(param_3 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00848fa0(param_3,piVar1);
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puVar6 = (undefined4 *)FUN_00848fd0(piVar1,uVar8);
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
  FUN_00848fa0(iVar2,piVar1);
  if ((char)param_4 != '\0') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    param_4 = (int *)iVar4;
    puStack_8 = (undefined1 *)0x0;
    FUN_0076ce40(*(undefined4 *)(iStack_24 + 0x38),&param_4);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    puStack_8 = (undefined1 *)0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(iStack_24 + 0x38) = *(int *)(iStack_24 + 0x38) + 1;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00846f90(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3308;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45b50;
  uVar8 = (uint)*(byte *)(DAT_00b42eb8 + 9);
  param_4 = (int *)(uint)*(byte *)(param_4[0x32] + uVar8);
  FUN_007ecae0(0x1f,0x3f800000,DAT_00b25ad4,(float)(int)param_4,DAT_00b25adc,uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  param_4 = (int *)iVar2;
  puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x88))(uVar8);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(param_3 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00848fa0(param_3,piVar1);
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puVar6 = (undefined4 *)FUN_00848fd0(piVar1,uVar8);
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
  FUN_00848fa0(iVar2,piVar1);
  if ((char)param_4 != '\0') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    param_4 = (int *)iVar4;
    puStack_8 = (undefined1 *)0x0;
    FUN_0076ce40(*(undefined4 *)(iStack_24 + 0x38),&param_4);
    piVar1 = (int *)(iVar4 + 0x60);
    *piVar1 = *piVar1 + -1;
    puStack_8 = (undefined1 *)0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(iStack_24 + 0x38) = *(int *)(iStack_24 + 0x38) + 1;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00847160(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  char cStack00000010;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_28;
  undefined4 local_24;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = _cStack00000010;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3338;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b45b68;
  cVar2 = *(char *)(DAT_00b42eb8 + 9);
  iVar3 = **(int **)(DAT_00b45b68 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*_cStack00000010 + 0x88))(cVar2,uVar7);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(unaff_EBX,piVar1);
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  puVar8 = (undefined4 *)FUN_00848fd0(piVar1,cVar2);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar5 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(iVar5,piVar1);
  uVar11 = 0;
  if (cVar2 == '\x04') {
    local_24 = 0x3f800000;
LAB_008472a5:
    uVar10 = 0;
    if (cVar2 != '\x02') goto LAB_00847296;
    local_28 = 0x3f800000;
  }
  else {
    local_24 = 0;
    if (cVar2 != '\x03') goto LAB_008472a5;
    uVar10 = 0x3f800000;
LAB_00847296:
    uVar11 = 0x3f800000;
    local_28 = 0;
    if (cVar2 != '\x01') {
      uVar11 = 0;
    }
  }
  FUN_007ecae0(0,uVar11,local_28,uVar10,local_24);
  if (cVar2 == '\b') {
    uVar11 = 0x3f800000;
LAB_00847339:
    uVar10 = 0;
    local_28 = 0;
    if (cVar2 == '\x06') {
      local_24 = 0x3f800000;
      goto LAB_0084734c;
    }
  }
  else {
    uVar11 = 0;
    if (cVar2 != '\a') goto LAB_00847339;
    local_28 = 0x3f800000;
  }
  uVar10 = 0x3f800000;
  local_24 = 0;
  if (cVar2 != '\x05') {
    uVar10 = 0;
  }
LAB_0084734c:
  FUN_007ecae0(0x19,uVar10,local_24,local_28,uVar11);
  if (cStack00000010 != '\0') {
    *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
    _cStack00000010 = (int *)iVar6;
    puStack_8 = (undefined1 *)0x0;
    FUN_0076ce40(*(undefined4 *)(iVar3 + 0x38),&stack0x00000010);
    piVar1 = (int *)(iVar6 + 0x60);
    *piVar1 = *piVar1 + -1;
    puStack_8 = (undefined1 *)0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + 1;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00847400(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int unaff_EBX;
  uint uVar9;
  int *unaff_FS_OFFSET;
  undefined4 uVar10;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3338;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b45b6c;
  uVar9 = (uint)*(byte *)(DAT_00b42eb8 + 9);
  param_4 = (int *)(uint)*(byte *)(param_4[0x32] + uVar9);
  FUN_007ecae0(0x1f,0x3f800000,DAT_00b25ad4,(float)(int)param_4,DAT_00b25adc,uVar6);
  iVar2 = **(int **)(iVar5 + 0x24);
  param_4 = (int *)iVar2;
  puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x88))(uVar9);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(param_3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_00848fa0(param_3,piVar1);
  iVar2 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  puVar7 = (undefined4 *)FUN_00848fd0(piVar1,uVar9);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_00848fa0(iVar2,piVar1);
  if (uVar9 == 4) {
    uStack_24 = 0x3f800000;
LAB_0084757e:
    uVar4 = 0;
    uVar10 = 0;
    if (uVar9 != 2) goto LAB_008475a2;
    local_28 = 0x3f800000;
  }
  else {
    uStack_24 = 0;
    if (uVar9 != 3) goto LAB_0084757e;
    uVar10 = 0x3f800000;
LAB_008475a2:
    local_28 = 0;
    if (uVar9 == 1) {
      uVar4 = 0x3f800000;
    }
    else {
      uVar4 = 0;
    }
  }
  FUN_007ecae0(2,uVar4,local_28,uVar10,uStack_24);
  if (uVar9 == 8) {
    uVar10 = 0x3f800000;
LAB_00847630:
    uVar4 = 0;
    local_28 = 0;
    if (uVar9 == 6) {
      uStack_24 = 0x3f800000;
      goto LAB_00847643;
    }
  }
  else {
    uVar10 = 0;
    if (uVar9 != 7) goto LAB_00847630;
    local_28 = 0x3f800000;
  }
  uVar4 = 0x3f800000;
  uStack_24 = 0;
  if (uVar9 != 5) {
    uVar4 = 0;
  }
LAB_00847643:
  FUN_007ecae0(3,uVar4,uStack_24,local_28,uVar10);
  if ((char)param_4 != '\0') {
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_008476f0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int unaff_EBX;
  uint uVar9;
  int *unaff_FS_OFFSET;
  undefined4 uVar10;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3338;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b45b70;
  uVar9 = (uint)*(byte *)(DAT_00b42eb8 + 9);
  param_4 = (int *)(uint)*(byte *)(param_4[0x32] + uVar9);
  FUN_007ecae0(0x1f,0x3f800000,DAT_00b25ad4,(float)(int)param_4,DAT_00b25adc,uVar6);
  iVar2 = **(int **)(iVar5 + 0x24);
  param_4 = (int *)iVar2;
  puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x88))(uVar9);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(param_3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_00848fa0(param_3,piVar1);
  iVar2 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  puVar7 = (undefined4 *)FUN_00848fd0(piVar1,uVar9);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_00848fa0(iVar2,piVar1);
  if (uVar9 == 4) {
    uStack_24 = 0x3f800000;
LAB_0084786e:
    uVar4 = 0;
    uVar10 = 0;
    if (uVar9 != 2) goto LAB_00847892;
    local_28 = 0x3f800000;
  }
  else {
    uStack_24 = 0;
    if (uVar9 != 3) goto LAB_0084786e;
    uVar10 = 0x3f800000;
LAB_00847892:
    local_28 = 0;
    if (uVar9 == 1) {
      uVar4 = 0x3f800000;
    }
    else {
      uVar4 = 0;
    }
  }
  FUN_007ecae0(2,uVar4,local_28,uVar10,uStack_24);
  if (uVar9 == 8) {
    uVar10 = 0x3f800000;
LAB_00847920:
    uVar4 = 0;
    local_28 = 0;
    if (uVar9 == 6) {
      uStack_24 = 0x3f800000;
      goto LAB_00847933;
    }
  }
  else {
    uVar10 = 0;
    if (uVar9 != 7) goto LAB_00847920;
    local_28 = 0x3f800000;
  }
  uVar4 = 0x3f800000;
  uStack_24 = 0;
  if (uVar9 != 5) {
    uVar4 = 0;
  }
LAB_00847933:
  FUN_007ecae0(3,uVar4,uStack_24,local_28,uVar10);
  if ((char)param_4 != '\0') {
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
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_008479e0(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  char cStack00000010;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = _cStack00000010;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d32a8;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b45b4c;
  bVar2 = *(byte *)(DAT_00b42eb8 + 9);
  _cStack00000010 = (int *)(uint)*(byte *)(_cStack00000010[0x32] + (uint)bVar2);
  FUN_007ecae0(0x1f,0x3f800000,DAT_00b25ad4,(float)(int)_cStack00000010,DAT_00b25adc,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*piVar1 + 0x88))((uint)bVar2);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(iVar3,piVar1);
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  puVar8 = (undefined4 *)FUN_00848fd0(piVar1,in_ECX);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(iVar3,piVar1);
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 8);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0xc);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  if (in_ECX == 4) {
    uStack_24 = 0x3f800000;
LAB_00847bdc:
    uVar5 = 0;
    local_28 = 0;
    if (in_ECX != 2) goto LAB_00847c00;
    local_2c = 0x3f800000;
  }
  else {
    uStack_24 = 0;
    if (in_ECX != 3) goto LAB_00847bdc;
    local_28 = 0x3f800000;
LAB_00847c00:
    local_2c = 0;
    if (in_ECX == 1) {
      uVar5 = 0x3f800000;
    }
    else {
      uVar5 = 0;
    }
  }
  FUN_007ecae0(2,uVar5,local_2c,local_28,uStack_24);
  if (in_ECX == 8) {
    local_2c = 0x3f800000;
LAB_00847c8e:
    uVar5 = 0;
    local_28 = 0;
    if (in_ECX == 6) {
      uStack_24 = 0x3f800000;
      goto LAB_00847ca1;
    }
  }
  else {
    local_2c = 0;
    if (in_ECX != 7) goto LAB_00847c8e;
    local_28 = 0x3f800000;
  }
  uVar5 = 0x3f800000;
  uStack_24 = 0;
  if (in_ECX != 5) {
    uVar5 = 0;
  }
LAB_00847ca1:
  FUN_007ecae0(3,uVar5,uStack_24,local_28,local_2c);
  if (cStack00000010 != '\0') {
    *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
    _cStack00000010 = (int *)iVar6;
    puStack_8 = (undefined1 *)0x0;
    FUN_0076ce40(*(undefined4 *)(unaff_EBX + 0x38),&stack0x00000010);
    piVar1 = (int *)(iVar6 + 0x60);
    *piVar1 = *piVar1 + -1;
    puStack_8 = (undefined1 *)0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(unaff_EBX + 0x38) = *(int *)(unaff_EBX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00847d50(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  char cStack00000010;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = _cStack00000010;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d32a8;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b45b74;
  bVar2 = *(byte *)(DAT_00b42eb8 + 9);
  _cStack00000010 = (int *)(uint)*(byte *)(_cStack00000010[0x32] + (uint)bVar2);
  FUN_007ecae0(0x1f,0x3f800000,DAT_00b25ad4,(float)(int)_cStack00000010,DAT_00b25adc,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*piVar1 + 0x88))((uint)bVar2);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(iVar3,piVar1);
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  puVar8 = (undefined4 *)FUN_00848fd0(piVar1,in_ECX);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(iVar3,piVar1);
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 8);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0xc);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  if (in_ECX == 4) {
    uStack_24 = 0x3f800000;
LAB_00847f4c:
    uVar5 = 0;
    local_28 = 0;
    if (in_ECX != 2) goto LAB_00847f70;
    local_2c = 0x3f800000;
  }
  else {
    uStack_24 = 0;
    if (in_ECX != 3) goto LAB_00847f4c;
    local_28 = 0x3f800000;
LAB_00847f70:
    local_2c = 0;
    if (in_ECX == 1) {
      uVar5 = 0x3f800000;
    }
    else {
      uVar5 = 0;
    }
  }
  FUN_007ecae0(2,uVar5,local_2c,local_28,uStack_24);
  if (in_ECX == 8) {
    local_2c = 0x3f800000;
LAB_00847ffe:
    uVar5 = 0;
    local_28 = 0;
    if (in_ECX == 6) {
      uStack_24 = 0x3f800000;
      goto LAB_00848011;
    }
  }
  else {
    local_2c = 0;
    if (in_ECX != 7) goto LAB_00847ffe;
    local_28 = 0x3f800000;
  }
  uVar5 = 0x3f800000;
  uStack_24 = 0;
  if (in_ECX != 5) {
    uVar5 = 0;
  }
LAB_00848011:
  FUN_007ecae0(3,uVar5,uStack_24,local_28,local_2c);
  if (cStack00000010 != '\0') {
    *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
    _cStack00000010 = (int *)iVar6;
    puStack_8 = (undefined1 *)0x0;
    FUN_0076ce40(*(undefined4 *)(unaff_EBX + 0x38),&stack0x00000010);
    piVar1 = (int *)(iVar6 + 0x60);
    *piVar1 = *piVar1 + -1;
    puStack_8 = (undefined1 *)0xffffffff;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    *(int *)(unaff_EBX + 0x38) = *(int *)(unaff_EBX + 0x38) + 1;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008480c0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar4;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d34e8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b455b8;
  if (_DAT_00b44ee4 <= 0.0) {
    FUN_007aec60(DAT_00b4522c);
    uVar4 = DAT_00b45434;
  }
  else {
    FUN_007aec60(DAT_00b4523c);
    uVar4 = DAT_00b45444;
  }
  FUN_007aecb0(uVar4);
  local_10 = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
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



void FUN_00848190(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

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
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b455bc;
  iVar2 = **(int **)(DAT_00b455bc + 0x24);
  puVar6 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar5);
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
  FUN_00848fa0(iVar2,param_3);
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_3 = iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = in_ECX;
  return;
}



void FUN_00848270(void)

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
  iVar2 = DAT_00b455c0;
  local_10 = DAT_00b455c0;
  if (DAT_00b455c0 != 0) {
    *(int *)(DAT_00b455c0 + 0x60) = *(int *)(DAT_00b455c0 + 0x60) + 1;
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



void FUN_00848300(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

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
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b455c4;
  iVar2 = **(int **)(DAT_00b455c4 + 0x24);
  puVar6 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar5);
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
  FUN_00848fa0(iVar2,param_3);
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_3 = iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = in_ECX;
  return;
}



void FUN_008483e0(void)

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
  int in_stack_00000010;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45b20;
  iVar2 = **(int **)(DAT_00b45b20 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(in_stack_00000010,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1,uVar5);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00848fa0(iVar2,in_stack_00000010);
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  in_stack_00000010 = iVar4;
  uStack_4 = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000010);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  uStack_4 = 0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008484c0(void)

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
  int in_stack_00000010;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45b24;
  iVar2 = **(int **)(DAT_00b45b24 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(in_stack_00000010,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1,uVar5);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00848fa0(iVar2,in_stack_00000010);
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  in_stack_00000010 = iVar4;
  uStack_4 = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000010);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  uStack_4 = 0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008485a0(void)

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
  int in_stack_00000010;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45b28;
  iVar2 = **(int **)(DAT_00b45b28 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(in_stack_00000010,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1,uVar5);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00848fa0(iVar2,in_stack_00000010);
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  in_stack_00000010 = iVar4;
  uStack_4 = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&stack0x00000010);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  uStack_4 = 0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00848680(void)

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
  iVar2 = DAT_00b45b2c;
  local_10 = DAT_00b45b2c;
  if (DAT_00b45b2c != 0) {
    *(int *)(DAT_00b45b2c + 0x60) = *(int *)(DAT_00b45b2c + 0x60) + 1;
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



void FUN_00848710(void)

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
  iVar2 = DAT_00b45b30;
  local_10 = DAT_00b45b30;
  if (DAT_00b45b30 != 0) {
    *(int *)(DAT_00b45b30 + 0x60) = *(int *)(DAT_00b45b30 + 0x60) + 1;
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



void FUN_008487a0(void)

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
  iVar2 = DAT_00b45b34;
  local_10 = DAT_00b45b34;
  if (DAT_00b45b34 != 0) {
    *(int *)(DAT_00b45b34 + 0x60) = *(int *)(DAT_00b45b34 + 0x60) + 1;
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



void FUN_00848830(void)

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
  iVar2 = DAT_00b45b38;
  local_10 = DAT_00b45b38;
  if (DAT_00b45b38 != 0) {
    *(int *)(DAT_00b45b38 + 0x60) = *(int *)(DAT_00b45b38 + 0x60) + 1;
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



void FUN_008488c0(void)

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
  iVar2 = DAT_00b45b3c;
  local_10 = DAT_00b45b3c;
  if (DAT_00b45b3c != 0) {
    *(int *)(DAT_00b45b3c + 0x60) = *(int *)(DAT_00b45b3c + 0x60) + 1;
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



void FUN_00848950(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int iVar6;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45bd8;
  iVar2 = *(int *)(param_4 + 0xe0);
  if (iVar2 != 0) {
    uVar3 = **(undefined4 **)(DAT_00b45bd8 + 0x24);
    uVar5 = FUN_00848fd0(param_4,0);
    FUN_0076c910(uVar5);
    FUN_00848fa0(uVar3,param_4);
    uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x24) + 4);
    iVar6 = DAT_00b43120;
    if (*(int *)(iVar2 + 8) != 0) {
      iVar6 = *(int *)(iVar2 + 8);
    }
    FUN_0076c910(iVar6);
    FUN_007715e0(3);
    FUN_00848fa0(uVar3,param_4);
    uVar3 = *(undefined4 *)(iVar2 + 0x5c);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar5;
    }
    FUN_00772cd0(0x13,uVar3,0);
    uVar3 = *(undefined4 *)(iVar2 + 0x60);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar5;
    }
    FUN_00772cd0(0x14,uVar3,0);
    uVar3 = *(undefined4 *)(iVar2 + 100);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar5;
    }
    FUN_00772cd0(0xab,uVar3,1);
    uVar3 = *(undefined4 *)(iVar2 + 0x68);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar5;
    }
    FUN_00772cd0(0x17,uVar3,0);
    FUN_007d1c90(param_1,param_4);
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    param_4 = iVar4;
    local_4 = 0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_4);
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



void FUN_00848ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int iVar6;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45bdc;
  iVar2 = *(int *)(param_4 + 0xe0);
  if (iVar2 != 0) {
    uVar3 = **(undefined4 **)(DAT_00b45bdc + 0x24);
    uVar5 = FUN_00848fd0(param_4,0);
    FUN_0076c910(uVar5);
    FUN_00848fa0(uVar3,param_4);
    uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x24) + 4);
    iVar6 = DAT_00b43120;
    if (*(int *)(iVar2 + 8) != 0) {
      iVar6 = *(int *)(iVar2 + 8);
    }
    FUN_0076c910(iVar6);
    FUN_00848fa0(uVar3,param_4);
    uVar3 = *(undefined4 *)(iVar2 + 0x5c);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar5;
    }
    FUN_00772cd0(0x13,uVar3,0);
    uVar3 = *(undefined4 *)(iVar2 + 0x60);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar5;
    }
    FUN_00772cd0(0x14,uVar3,0);
    uVar3 = *(undefined4 *)(iVar2 + 100);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar5;
    }
    FUN_00772cd0(0xab,uVar3,1);
    uVar3 = *(undefined4 *)(iVar2 + 0x68);
    if (*(int *)(iVar4 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar4 + 0x30) = uVar5;
    }
    FUN_00772cd0(0x17,uVar3,0);
    FUN_007d1c90(param_1,param_4);
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
    param_4 = iVar4;
    local_4 = 0;
    FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_4);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00848c40(int param_1)

{
  float fVar1;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = *(float *)(param_1 + 0x40);
  local_c = *(float *)(param_1 + 0x44);
  local_8 = *(float *)(param_1 + 0x48);
  if (((DAT_00b3fa90 == local_10) && (DAT_00b3fa94 == local_c)) && (DAT_00b3fa98 == local_8)) {
    return;
  }
  if (DAT_00b43070 != '\0') {
    fVar1 = _DAT_00b43208;
    if (DAT_00b43074 != '\0') {
      fVar1 = _DAT_00b4320c;
    }
    local_10 = fVar1 * local_10;
    local_c = local_c * fVar1;
    local_8 = local_8 * fVar1;
  }
  local_10 = DAT_00b46498 + local_10;
  local_c = DAT_00b4649c + local_c;
  local_8 = local_8 + DAT_00b464a0;
  if (DAT_00b43070 == '\0') {
    if (1.0 <= local_10) {
      local_10 = 1.0;
    }
    if (1.0 <= local_c) {
      local_c = 1.0;
    }
    if (1.0 <= local_8) {
      local_8 = 1.0;
    }
  }
  FUN_007ecae0(0,local_10,local_c,local_8,DAT_00b464a4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00848da0(int param_1)

{
  float fVar1;
  float local_1c;
  float local_18;
  float local_14;
  
  local_1c = *(float *)(param_1 + 0x40);
  local_18 = *(float *)(param_1 + 0x44);
  local_14 = *(float *)(param_1 + 0x48);
  if (DAT_00b43070 != '\0') {
    fVar1 = _DAT_00b43208;
    if (DAT_00b43074 != '\0') {
      fVar1 = _DAT_00b4320c;
    }
    local_1c = fVar1 * local_1c;
    local_18 = fVar1 * local_18;
    local_14 = fVar1 * local_14;
  }
  FUN_007ecae0(0x19,local_1c,local_18,local_14,0x3f800000);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00848e50(int param_1)

{
  if (param_1 != 0) {
    _DAT_00b46638 = *(float *)(param_1 + 0x30);
    if ((_DAT_00b46638 == 0.0) && (*(float *)(param_1 + 0x2c) == 0.0)) {
      _DAT_00b46638 = 500000.0;
      _DAT_00b4663c = 0.0;
      _DAT_00b46640 = 0;
      _DAT_00b46644 = 0;
      _DAT_00b46648 = DAT_00b25ad0;
      _DAT_00b4664c = DAT_00b25ad4;
      _DAT_00b46650 = DAT_00b25ad8;
      _DAT_00b46654 = DAT_00b25adc;
      return;
    }
    _DAT_00b46648 = *(undefined4 *)(param_1 + 0x20);
    _DAT_00b4664c = *(undefined4 *)(param_1 + 0x24);
    _DAT_00b46650 = *(undefined4 *)(param_1 + 0x28);
    _DAT_00b4663c = _DAT_00b46638 - *(float *)(param_1 + 0x2c);
    _DAT_00b46640 = 0;
    _DAT_00b46644 = 0;
    _DAT_00b46654 = 0;
  }
  return;
}



void FUN_00848fa0(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (((param_1 != 0) && (param_2 != (int *)0x0)) && (DAT_00b42cdd != '\0')) {
    uVar1 = (**(code **)(*param_2 + 0x78))();
    FUN_007715e0(uVar1);
  }
  return;
}



undefined4 FUN_00848fd0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x8c))(param_2);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x8c))(param_2);
    return uVar2;
  }
  uVar2 = DAT_00b430f0;
  if ((param_1[7] & 0x80U) == 0) {
    uVar2 = DAT_00b430dc;
  }
  return uVar2;
}



void FUN_00849020(ushort param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int local_4;
  
  bVar1 = 2;
  piVar3 = &DAT_00b4501c;
  local_4 = 9;
  do {
    if (piVar3[-1] != 0) {
      *(bool *)(piVar3[-1] + 8) =
           (*(uint *)(&DAT_00b43b20 + (uint)param_1 * 4) & 1 << (bVar1 - 1 & 0x1f)) != 0;
    }
    if (*piVar3 != 0) {
      *(bool *)(*piVar3 + 8) =
           (*(uint *)(&DAT_00b43b20 + (uint)param_1 * 4) & 1 << (bVar1 & 0x1f)) != 0;
    }
    if (piVar3[1] != 0) {
      *(bool *)(piVar3[1] + 8) =
           (*(uint *)(&DAT_00b43b20 + (uint)param_1 * 4) & 1 << (bVar1 + 1 & 0x1f)) != 0;
    }
    bVar1 = bVar1 + 3;
    piVar3 = piVar3 + 3;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  iVar2 = 0;
  do {
    if ((&DAT_00b45518)[iVar2] != 0) {
      *(bool *)((&DAT_00b45518)[iVar2] + 8) =
           (*(uint *)(&DAT_00b441b0 + (uint)param_1 * 4) & 1 << ((char)iVar2 + 1U & 0x1f)) != 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x11);
  return;
}



void FUN_008490f0(int param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  undefined4 uVar8;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b455ac;
  uVar8 = DAT_00b45290;
  if (param_2 != 0) {
    uVar8 = DAT_00b4530c;
  }
  FUN_007aecb0(uVar8);
  FUN_00848c40(param_3[4]);
  iVar2 = **(int **)(iVar4 + 0x24);
  puVar6 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar5);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar8 = (**(code **)(*param_3 + 0x78))();
    FUN_007715e0(uVar8);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_3 = (int *)iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
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



void FUN_00849220(undefined4 param_1,undefined4 param_2,int param_3)

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
  iVar2 = DAT_00b455e0;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  param_3 = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
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



void FUN_008492b0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int unaff_EBX;
  int unaff_EBP;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b455e4;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  iVar8 = **(int **)(iVar3 + 0x24);
  param_3 = iVar8;
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_2;
  if (puVar2 != puVar5) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar2 + 1), LVar6 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_2;
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar8 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  param_2 = iVar8;
  puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x90))(0);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_1;
  if (puVar2 != puVar5) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar2 + 1), LVar6 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_1;
    *(undefined4 **)(param_1 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_1 = iVar3;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(unaff_EBP + 0x38),&param_1);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_EBP + 0x38) = *(int *)(unaff_EBP + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_00849440(undefined4 param_1,int param_2,int *param_3,int *param_4)

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
  iVar3 = DAT_00b455e8;
  FUN_00848c40(*(undefined4 *)((int)param_3 + 0x10));
  piVar1 = (int *)**(int **)(iVar3 + 0x24);
  param_3 = piVar1;
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
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



void FUN_00849550(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int unaff_EBX;
  int unaff_EBP;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b455ec;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  iVar8 = **(int **)(iVar3 + 0x24);
  param_3 = iVar8;
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_2;
  if (puVar2 != puVar5) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar2 + 1), LVar6 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_2;
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar8 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  param_2 = iVar8;
  puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x90))(0);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_1;
  if (puVar2 != puVar5) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar2 + 1), LVar6 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_1;
    *(undefined4 **)(param_1 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_1 = iVar3;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(unaff_EBP + 0x38),&param_1);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_EBP + 0x38) = *(int *)(unaff_EBP + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_008496e0(undefined4 param_1,undefined4 param_2,int param_3)

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
  iVar2 = DAT_00b455f0;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  param_3 = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
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



void FUN_00849770(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int unaff_EBX;
  int unaff_EBP;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b455f4;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  iVar8 = **(int **)(iVar3 + 0x24);
  param_3 = iVar8;
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_2;
  if (puVar2 != puVar5) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar2 + 1), LVar6 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_2;
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar8 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  param_2 = iVar8;
  puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x90))(0);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_1;
  if (puVar2 != puVar5) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar2 + 1), LVar6 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_1;
    *(undefined4 **)(param_1 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_1 = iVar3;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(unaff_EBP + 0x38),&param_1);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_EBP + 0x38) = *(int *)(unaff_EBP + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_00849900(undefined4 param_1,int param_2,int *param_3,int *param_4)

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
  iVar3 = DAT_00b455f8;
  FUN_00848c40(*(undefined4 *)((int)param_3 + 0x10));
  piVar1 = (int *)**(int **)(iVar3 + 0x24);
  param_3 = piVar1;
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
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



void FUN_00849a10(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int unaff_EBX;
  int unaff_EBP;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b455fc;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  iVar8 = **(int **)(iVar3 + 0x24);
  param_3 = iVar8;
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_2;
  if (puVar2 != puVar5) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar2 + 1), LVar6 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_2;
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar8 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  param_2 = iVar8;
  puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x90))(0);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_1;
  if (puVar2 != puVar5) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar2 + 1), LVar6 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_1;
    *(undefined4 **)(param_1 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_1 = iVar3;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(unaff_EBP + 0x38),&param_1);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_EBP + 0x38) = *(int *)(unaff_EBP + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_00849ba0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_EBX;
  int unaff_EBP;
  int iVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45604;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  iVar9 = **(int **)(iVar2 + 0x24);
  param_3 = iVar9;
  puVar4 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar3);
  puVar8 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_2;
  if (puVar8 != puVar4) {
    if (((puVar8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0)) &&
       (puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    iVar9 = param_2;
    *(undefined4 **)(param_2 + 4) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar9 = *(int *)(*(int *)(iVar2 + 0x24) + 4);
  param_2 = iVar9;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    puVar8 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar8 = DAT_00b430dc;
    }
  }
  else {
    puVar8 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar4 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_1;
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar4 + 1), LVar5 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    iVar9 = param_1;
    *(undefined4 **)(param_1 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
  param_1 = iVar2;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(unaff_EBP + 0x38),&param_1);
  piVar1 = (int *)(iVar2 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_EBP + 0x38) = *(int *)(unaff_EBP + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_00849d60(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_EBX;
  int unaff_EBP;
  int iVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45608;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  iVar9 = **(int **)(iVar2 + 0x24);
  param_3 = iVar9;
  puVar4 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar3);
  puVar8 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_2;
  if (puVar8 != puVar4) {
    if (((puVar8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0)) &&
       (puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    iVar9 = param_2;
    *(undefined4 **)(param_2 + 4) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar9 = *(int *)(*(int *)(iVar2 + 0x24) + 4);
  param_2 = iVar9;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    puVar8 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar8 = DAT_00b430dc;
    }
  }
  else {
    puVar8 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar4 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_1;
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar4 + 1), LVar5 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    iVar9 = param_1;
    *(undefined4 **)(param_1 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
  param_1 = iVar2;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(unaff_EBP + 0x38),&param_1);
  piVar1 = (int *)(iVar2 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_EBP + 0x38) = *(int *)(unaff_EBP + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_00849f20(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int unaff_EBP;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar8 = (int)param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45670;
  FUN_00848c40(*(undefined4 *)((int)param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(iVar8 + 0xc));
  piVar1 = param_4;
  iVar8 = **(int **)(iVar3 + 0x24);
  param_3 = (undefined4 *)iVar8;
  param_3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = (int)param_2;
  if (puVar2 != param_3) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = (int)param_2;
    *(undefined4 **)((int)param_2 + 4) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar8 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  param_2 = (undefined4 *)iVar8;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    if ((piVar1[7] & 0x80U) == 0) {
      param_2 = DAT_00b430dc;
    }
    else {
      param_2 = DAT_00b430f0;
    }
  }
  else {
    param_2 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_1;
  if (puVar2 != param_2) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_1;
    *(undefined4 **)(param_1 + 4) = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_1 = iVar3;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_1);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084a100(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int unaff_EBP;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar8 = (int)param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45674;
  FUN_00848c40(*(undefined4 *)((int)param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(iVar8 + 0xc));
  piVar1 = param_4;
  iVar8 = **(int **)(iVar3 + 0x24);
  param_3 = (undefined4 *)iVar8;
  param_3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = (int)param_2;
  if (puVar2 != param_3) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = (int)param_2;
    *(undefined4 **)((int)param_2 + 4) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar8 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  param_2 = (undefined4 *)iVar8;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    if ((piVar1[7] & 0x80U) == 0) {
      param_2 = DAT_00b430dc;
    }
    else {
      param_2 = DAT_00b430f0;
    }
  }
  else {
    param_2 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_1;
  if (puVar2 != param_2) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_1;
    *(undefined4 **)(param_1 + 4) = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_1 = iVar3;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_1);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084a2e0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b4560c;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  iVar2 = **(int **)(iVar3 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  iVar8 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar8 == 0) {
    puVar9 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar9 = DAT_00b430dc;
    }
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 != puVar9) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar5 + 1), LVar6 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 8);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(unaff_retaddr + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((unaff_retaddr != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&stack0x00000000);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084a510(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45610;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  iVar2 = **(int **)(iVar3 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  iVar8 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar8 == 0) {
    puVar9 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar9 = DAT_00b430dc;
    }
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 != puVar9) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar5 + 1), LVar6 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 8);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(unaff_retaddr + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((unaff_retaddr != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&stack0x00000000);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084a740(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45678;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar2 = **(int **)(iVar3 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  iVar8 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar8 == 0) {
    puVar9 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar9 = DAT_00b430dc;
    }
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 != puVar9) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar5 + 1), LVar6 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 8);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(unaff_retaddr + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((unaff_retaddr != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&stack0x00000000);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084a980(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b4567c;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar2 = **(int **)(iVar3 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  iVar8 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar8 == 0) {
    puVar9 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar9 = DAT_00b430dc;
    }
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 != puVar9) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar5 + 1), LVar6 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 8);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(unaff_retaddr + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((unaff_retaddr != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&stack0x00000000);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084abc0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33c8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar8 = DAT_00b45614;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  iVar8 = **(int **)(iVar8 + 0x24);
  puVar3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar2);
  puVar7 = *(undefined4 **)(iVar8 + 4);
  if (puVar7 != puVar3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar7 + 1), LVar4 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_EBX + 0x24) + 4);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar8 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_EBP + 0x24) + 8);
  puVar3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(1);
  puVar7 = *(undefined4 **)(iVar8 + 4);
  if (puVar7 != puVar3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar7 + 1), LVar4 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_ESI + 0x24) + 0xc);
  iVar6 = (**(code **)(*param_4 + 0x8c))(1);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(1);
  }
  puVar3 = *(undefined4 **)(iVar8 + 4);
  iVar8 = iStack_4;
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    iVar8 = iStack_4;
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  *(int *)(unaff_ESI + 0x60) = *(int *)(unaff_ESI + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&iStack_4);
  piVar1 = (int *)(unaff_ESI + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084ae80(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_EBX;
  int unaff_EBP;
  int iVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45618;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  iVar9 = **(int **)(iVar2 + 0x24);
  param_3 = iVar9;
  puVar4 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar3);
  puVar8 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_2;
  if (puVar8 != puVar4) {
    if (((puVar8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0)) &&
       (puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    iVar9 = param_2;
    *(undefined4 **)(param_2 + 4) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar9 = *(int *)(*(int *)(iVar2 + 0x24) + 4);
  param_2 = iVar9;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    puVar8 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar8 = DAT_00b430dc;
    }
  }
  else {
    puVar8 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar4 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_1;
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar4 + 1), LVar5 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    iVar9 = param_1;
    *(undefined4 **)(param_1 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
  param_1 = iVar2;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(unaff_EBP + 0x38),&param_1);
  piVar1 = (int *)(iVar2 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_EBP + 0x38) = *(int *)(unaff_EBP + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_0084b040(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_EBX;
  int unaff_EBP;
  int iVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b4561c;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  iVar9 = **(int **)(iVar2 + 0x24);
  param_3 = iVar9;
  puVar4 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar3);
  puVar8 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_2;
  if (puVar8 != puVar4) {
    if (((puVar8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0)) &&
       (puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    iVar9 = param_2;
    *(undefined4 **)(param_2 + 4) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar9 = *(int *)(*(int *)(iVar2 + 0x24) + 4);
  param_2 = iVar9;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    puVar8 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar8 = DAT_00b430dc;
    }
  }
  else {
    puVar8 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar4 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_1;
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar4 + 1), LVar5 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    iVar9 = param_1;
    *(undefined4 **)(param_1 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
  param_1 = iVar2;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(unaff_EBP + 0x38),&param_1);
  piVar1 = (int *)(iVar2 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_EBP + 0x38) = *(int *)(unaff_EBP + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_0084b200(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int unaff_EBP;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar8 = (int)param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45680;
  FUN_00848c40(*(undefined4 *)((int)param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(iVar8 + 0xc));
  piVar1 = param_4;
  iVar8 = **(int **)(iVar3 + 0x24);
  param_3 = (undefined4 *)iVar8;
  param_3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = (int)param_2;
  if (puVar2 != param_3) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = (int)param_2;
    *(undefined4 **)((int)param_2 + 4) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar8 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  param_2 = (undefined4 *)iVar8;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    if ((piVar1[7] & 0x80U) == 0) {
      param_2 = DAT_00b430dc;
    }
    else {
      param_2 = DAT_00b430f0;
    }
  }
  else {
    param_2 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_1;
  if (puVar2 != param_2) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_1;
    *(undefined4 **)(param_1 + 4) = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_1 = iVar3;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_1);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084b3e0(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int unaff_EBP;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar8 = (int)param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45684;
  FUN_00848c40(*(undefined4 *)((int)param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(iVar8 + 0xc));
  piVar1 = param_4;
  iVar8 = **(int **)(iVar3 + 0x24);
  param_3 = (undefined4 *)iVar8;
  param_3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = (int)param_2;
  if (puVar2 != param_3) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = (int)param_2;
    *(undefined4 **)((int)param_2 + 4) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar8 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  param_2 = (undefined4 *)iVar8;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    if ((piVar1[7] & 0x80U) == 0) {
      param_2 = DAT_00b430dc;
    }
    else {
      param_2 = DAT_00b430f0;
    }
  }
  else {
    param_2 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_1;
  if (puVar2 != param_2) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_1;
    *(undefined4 **)(param_1 + 4) = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_1 = iVar3;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_1);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084b5c0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45620;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  iVar2 = **(int **)(iVar3 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  iVar8 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar8 == 0) {
    puVar9 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar9 = DAT_00b430dc;
    }
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 != puVar9) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar5 + 1), LVar6 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 8);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(unaff_retaddr + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((unaff_retaddr != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&stack0x00000000);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084b7f0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33c8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar8 = DAT_00b45628;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  iVar8 = **(int **)(iVar8 + 0x24);
  puVar3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar2);
  puVar7 = *(undefined4 **)(iVar8 + 4);
  if (puVar7 != puVar3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar7 + 1), LVar4 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_EBX + 0x24) + 4);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar8 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_EBP + 0x24) + 8);
  puVar3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(1);
  puVar7 = *(undefined4 **)(iVar8 + 4);
  if (puVar7 != puVar3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar7 + 1), LVar4 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_ESI + 0x24) + 0xc);
  iVar6 = (**(code **)(*param_4 + 0x8c))(1);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(1);
  }
  puVar3 = *(undefined4 **)(iVar8 + 4);
  iVar8 = iStack_4;
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    iVar8 = iStack_4;
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  *(int *)(unaff_ESI + 0x60) = *(int *)(unaff_ESI + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&iStack_4);
  piVar1 = (int *)(unaff_ESI + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084bab0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33c8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar8 = DAT_00b45628;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar8 = **(int **)(iVar8 + 0x24);
  puVar3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar2);
  puVar7 = *(undefined4 **)(iVar8 + 4);
  if (puVar7 != puVar3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar7 + 1), LVar4 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_EBX + 0x24) + 4);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar8 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_EBP + 0x24) + 8);
  puVar3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(1);
  puVar7 = *(undefined4 **)(iVar8 + 4);
  if (puVar7 != puVar3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar7 + 1), LVar4 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_ESI + 0x24) + 0xc);
  iVar6 = (**(code **)(*param_4 + 0x8c))(1);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(1);
  }
  puVar3 = *(undefined4 **)(iVar8 + 4);
  iVar8 = iStack_4;
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    iVar8 = iStack_4;
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  *(int *)(unaff_ESI + 0x60) = *(int *)(unaff_ESI + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&iStack_4);
  piVar1 = (int *)(unaff_ESI + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084bd80(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b4568c;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar2 = **(int **)(iVar3 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  iVar8 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar8 == 0) {
    puVar9 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar9 = DAT_00b430dc;
    }
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 != puVar9) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar5 + 1), LVar6 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 8);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(unaff_retaddr + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((unaff_retaddr != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&stack0x00000000);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084bfc0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45690;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar2 = **(int **)(iVar3 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  iVar8 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar8 == 0) {
    puVar9 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar9 = DAT_00b430dc;
    }
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 != puVar9) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar5 + 1), LVar6 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 8);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(unaff_retaddr + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((unaff_retaddr != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&stack0x00000000);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084c200(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_EBX;
  int unaff_EBP;
  int iVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45630;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  iVar9 = **(int **)(iVar2 + 0x24);
  param_3 = iVar9;
  puVar4 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar3);
  puVar8 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_2;
  if (puVar8 != puVar4) {
    if (((puVar8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0)) &&
       (puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    iVar9 = param_2;
    *(undefined4 **)(param_2 + 4) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar9 = *(int *)(*(int *)(iVar2 + 0x24) + 4);
  param_2 = iVar9;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    puVar8 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar8 = DAT_00b430dc;
    }
  }
  else {
    puVar8 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar4 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_1;
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar4 + 1), LVar5 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    iVar9 = param_1;
    *(undefined4 **)(param_1 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
  param_1 = iVar2;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(unaff_EBP + 0x38),&param_1);
  piVar1 = (int *)(iVar2 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_EBP + 0x38) = *(int *)(unaff_EBP + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_0084c3c0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_EBX;
  int unaff_EBP;
  int iVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45634;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  iVar9 = **(int **)(iVar2 + 0x24);
  param_3 = iVar9;
  puVar4 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar3);
  puVar8 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_2;
  if (puVar8 != puVar4) {
    if (((puVar8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0)) &&
       (puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    iVar9 = param_2;
    *(undefined4 **)(param_2 + 4) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar9 = *(int *)(*(int *)(iVar2 + 0x24) + 4);
  param_2 = iVar9;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    puVar8 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar8 = DAT_00b430dc;
    }
  }
  else {
    puVar8 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar4 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_1;
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar4 + 1), LVar5 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    iVar9 = param_1;
    *(undefined4 **)(param_1 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
  param_1 = iVar2;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(unaff_EBP + 0x38),&param_1);
  piVar1 = (int *)(iVar2 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_EBP + 0x38) = *(int *)(unaff_EBP + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_0084c580(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int unaff_EBP;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar8 = (int)param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45698;
  FUN_00848c40(*(undefined4 *)((int)param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(iVar8 + 0xc));
  piVar1 = param_4;
  iVar8 = **(int **)(iVar3 + 0x24);
  param_3 = (undefined4 *)iVar8;
  param_3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = (int)param_2;
  if (puVar2 != param_3) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = (int)param_2;
    *(undefined4 **)((int)param_2 + 4) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar8 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  param_2 = (undefined4 *)iVar8;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    if ((piVar1[7] & 0x80U) == 0) {
      param_2 = DAT_00b430dc;
    }
    else {
      param_2 = DAT_00b430f0;
    }
  }
  else {
    param_2 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_1;
  if (puVar2 != param_2) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_1;
    *(undefined4 **)(param_1 + 4) = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_1 = iVar3;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_1);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084c760(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int unaff_EBP;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar8 = (int)param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b4569c;
  FUN_00848c40(*(undefined4 *)((int)param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(iVar8 + 0xc));
  piVar1 = param_4;
  iVar8 = **(int **)(iVar3 + 0x24);
  param_3 = (undefined4 *)iVar8;
  param_3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = (int)param_2;
  if (puVar2 != param_3) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = (int)param_2;
    *(undefined4 **)((int)param_2 + 4) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar8 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  param_2 = (undefined4 *)iVar8;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    if ((piVar1[7] & 0x80U) == 0) {
      param_2 = DAT_00b430dc;
    }
    else {
      param_2 = DAT_00b430f0;
    }
  }
  else {
    param_2 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_1;
  if (puVar2 != param_2) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_1;
    *(undefined4 **)(param_1 + 4) = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_1 = iVar3;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_1);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084c940(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45638;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  iVar2 = **(int **)(iVar3 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  iVar8 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar8 == 0) {
    puVar9 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar9 = DAT_00b430dc;
    }
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 != puVar9) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar5 + 1), LVar6 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 8);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(unaff_retaddr + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((unaff_retaddr != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&stack0x00000000);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084cb70(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b456a0;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar2 = **(int **)(iVar3 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  iVar8 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar8 == 0) {
    puVar9 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar9 = DAT_00b430dc;
    }
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 != puVar9) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar5 + 1), LVar6 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 8);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(unaff_retaddr + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((unaff_retaddr != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&stack0x00000000);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084cdb0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b456a4;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar2 = **(int **)(iVar3 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  iVar8 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar8 == 0) {
    puVar9 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar9 = DAT_00b430dc;
    }
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 != puVar9) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar5 + 1), LVar6 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 8);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(unaff_retaddr + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((unaff_retaddr != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&stack0x00000000);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084cff0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33c8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar8 = DAT_00b45640;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  iVar8 = **(int **)(iVar8 + 0x24);
  puVar3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar2);
  puVar7 = *(undefined4 **)(iVar8 + 4);
  if (puVar7 != puVar3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar7 + 1), LVar4 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_EBX + 0x24) + 4);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar8 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_EBP + 0x24) + 8);
  puVar3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(1);
  puVar7 = *(undefined4 **)(iVar8 + 4);
  if (puVar7 != puVar3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar7 + 1), LVar4 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_ESI + 0x24) + 0xc);
  iVar6 = (**(code **)(*param_4 + 0x8c))(1);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(1);
  }
  puVar3 = *(undefined4 **)(iVar8 + 4);
  iVar8 = iStack_4;
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    iVar8 = iStack_4;
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  *(int *)(unaff_ESI + 0x60) = *(int *)(unaff_ESI + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&iStack_4);
  piVar1 = (int *)(unaff_ESI + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084d2b0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33c8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar8 = DAT_00b456b0;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar8 = **(int **)(iVar8 + 0x24);
  puVar3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar2);
  puVar7 = *(undefined4 **)(iVar8 + 4);
  if (puVar7 != puVar3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar7 + 1), LVar4 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_EBX + 0x24) + 4);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar8 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_EBP + 0x24) + 8);
  puVar3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(1);
  puVar7 = *(undefined4 **)(iVar8 + 4);
  if (puVar7 != puVar3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar7 + 1), LVar4 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_ESI + 0x24) + 0xc);
  iVar6 = (**(code **)(*param_4 + 0x8c))(1);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(1);
  }
  puVar3 = *(undefined4 **)(iVar8 + 4);
  iVar8 = iStack_4;
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    iVar8 = iStack_4;
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  *(int *)(unaff_ESI + 0x60) = *(int *)(unaff_ESI + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&iStack_4);
  piVar1 = (int *)(unaff_ESI + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084d580(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_EBX;
  int unaff_EBP;
  int iVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45644;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  iVar9 = **(int **)(iVar2 + 0x24);
  param_3 = iVar9;
  puVar4 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar3);
  puVar8 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_2;
  if (puVar8 != puVar4) {
    if (((puVar8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0)) &&
       (puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    iVar9 = param_2;
    *(undefined4 **)(param_2 + 4) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar9 = *(int *)(*(int *)(iVar2 + 0x24) + 4);
  param_2 = iVar9;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    puVar8 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar8 = DAT_00b430dc;
    }
  }
  else {
    puVar8 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar4 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_1;
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar4 + 1), LVar5 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    iVar9 = param_1;
    *(undefined4 **)(param_1 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
  param_1 = iVar2;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(unaff_EBP + 0x38),&param_1);
  piVar1 = (int *)(iVar2 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_EBP + 0x38) = *(int *)(unaff_EBP + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_0084d740(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_EBX;
  int unaff_EBP;
  int iVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45648;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  iVar9 = **(int **)(iVar2 + 0x24);
  param_3 = iVar9;
  puVar4 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar3);
  puVar8 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_2;
  if (puVar8 != puVar4) {
    if (((puVar8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0)) &&
       (puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    iVar9 = param_2;
    *(undefined4 **)(param_2 + 4) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar9 = *(int *)(*(int *)(iVar2 + 0x24) + 4);
  param_2 = iVar9;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    puVar8 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar8 = DAT_00b430dc;
    }
  }
  else {
    puVar8 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar4 = *(undefined4 **)(iVar9 + 4);
  iVar9 = param_1;
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar4 + 1), LVar5 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    iVar9 = param_1;
    *(undefined4 **)(param_1 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  if ((iVar9 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
  param_1 = iVar2;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(unaff_EBP + 0x38),&param_1);
  piVar1 = (int *)(iVar2 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_EBP + 0x38) = *(int *)(unaff_EBP + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_0084d900(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int unaff_EBP;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar8 = (int)param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b456a8;
  FUN_00848c40(*(undefined4 *)((int)param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(iVar8 + 0xc));
  piVar1 = param_4;
  iVar8 = **(int **)(iVar3 + 0x24);
  param_3 = (undefined4 *)iVar8;
  param_3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = (int)param_2;
  if (puVar2 != param_3) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = (int)param_2;
    *(undefined4 **)((int)param_2 + 4) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar8 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  param_2 = (undefined4 *)iVar8;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    if ((piVar1[7] & 0x80U) == 0) {
      param_2 = DAT_00b430dc;
    }
    else {
      param_2 = DAT_00b430f0;
    }
  }
  else {
    param_2 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_1;
  if (puVar2 != param_2) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_1;
    *(undefined4 **)(param_1 + 4) = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_1 = iVar3;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_1);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084dae0(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int unaff_EBP;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar8 = (int)param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b456ac;
  FUN_00848c40(*(undefined4 *)((int)param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(iVar8 + 0xc));
  piVar1 = param_4;
  iVar8 = **(int **)(iVar3 + 0x24);
  param_3 = (undefined4 *)iVar8;
  param_3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = (int)param_2;
  if (puVar2 != param_3) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = (int)param_2;
    *(undefined4 **)((int)param_2 + 4) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  iVar8 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  param_2 = (undefined4 *)iVar8;
  iVar7 = (**(code **)(*piVar1 + 0x8c))(0);
  if (iVar7 == 0) {
    if ((piVar1[7] & 0x80U) == 0) {
      param_2 = DAT_00b430dc;
    }
    else {
      param_2 = DAT_00b430f0;
    }
  }
  else {
    param_2 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar2 = *(undefined4 **)(iVar8 + 4);
  iVar8 = param_1;
  if (puVar2 != param_2) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar8 = param_1;
    *(undefined4 **)(param_1 + 4) = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar6 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar6);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  param_1 = iVar3;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_1);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084dcc0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b4564c;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  iVar2 = **(int **)(iVar3 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  iVar8 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar8 == 0) {
    puVar9 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar9 = DAT_00b430dc;
    }
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 != puVar9) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar5 + 1), LVar6 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 8);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(unaff_retaddr + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((unaff_retaddr != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&stack0x00000000);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084def0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b45650;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  iVar2 = **(int **)(iVar3 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  iVar8 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar8 == 0) {
    puVar9 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar9 = DAT_00b430dc;
    }
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 != puVar9) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar5 + 1), LVar6 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 8);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(unaff_retaddr + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((unaff_retaddr != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&stack0x00000000);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084e120(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33c8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar8 = DAT_00b45654;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  iVar8 = **(int **)(iVar8 + 0x24);
  puVar3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar2);
  puVar7 = *(undefined4 **)(iVar8 + 4);
  if (puVar7 != puVar3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar7 + 1), LVar4 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_EBX + 0x24) + 4);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar8 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_EBP + 0x24) + 8);
  puVar3 = (undefined4 *)(**(code **)(*param_4 + 0x88))(1);
  puVar7 = *(undefined4 **)(iVar8 + 4);
  if (puVar7 != puVar3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar7 + 1), LVar4 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  iVar8 = *(int *)(*(int *)(unaff_ESI + 0x24) + 0xc);
  iVar6 = (**(code **)(*param_4 + 0x8c))(1);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(1);
  }
  puVar3 = *(undefined4 **)(iVar8 + 4);
  iVar8 = iStack_4;
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    iVar8 = iStack_4;
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((iVar8 != 0) && (DAT_00b42cdd != '\0')) {
    uVar5 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar5);
  }
  *(int *)(unaff_ESI + 0x60) = *(int *)(unaff_ESI + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&iStack_4);
  piVar1 = (int *)(unaff_ESI + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084e3e0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b456b4;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar2 = **(int **)(iVar3 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  iVar8 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar8 == 0) {
    puVar9 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar9 = DAT_00b430dc;
    }
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 != puVar9) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar5 + 1), LVar6 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 8);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(unaff_retaddr + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((unaff_retaddr != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&stack0x00000000);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084e620(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b456b8;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  FUN_00848e50(*(undefined4 *)(param_3 + 0xc));
  iVar2 = **(int **)(iVar3 + 0x24);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar4);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((param_2 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 4);
  iVar8 = (**(code **)(*param_4 + 0x8c))(0);
  if (iVar8 == 0) {
    puVar9 = DAT_00b430f0;
    if ((param_4[7] & 0x80U) == 0) {
      puVar9 = DAT_00b430dc;
    }
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(*param_4 + 0x8c))(0);
  }
  puVar5 = *(undefined4 **)(iVar2 + 4);
  if (puVar5 != puVar9) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar5 + 1), LVar6 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 **)(param_1 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  if ((param_1 != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 8);
  puVar5 = (undefined4 *)(**(code **)(*param_4 + 0x90))(0);
  puVar9 = *(undefined4 **)(iVar2 + 4);
  if (puVar9 != puVar5) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
       (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(unaff_retaddr + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((unaff_retaddr != 0) && (DAT_00b42cdd != '\0')) {
    uVar7 = (**(code **)(*param_4 + 0x78))();
    FUN_007715e0(uVar7);
  }
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  FUN_0076ce40(*(undefined4 *)(unaff_ESI + 0x38),&stack0x00000000);
  piVar1 = (int *)(iVar3 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



void FUN_0084e860(undefined4 param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  LONG LVar7;
  undefined4 uVar8;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45664;
  DAT_00b46528 = DAT_00b46538;
  DAT_00b4652c = DAT_00b4653c;
  DAT_00b46530 = DAT_00b46540;
  DAT_00b46534 = DAT_00b46544;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  iVar2 = **(int **)(iVar4 + 0x24);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0,uVar5);
  if (iVar6 == 0) {
    if ((piVar1[7] & 0x80U) == 0) {
      param_2 = DAT_00b430dc;
    }
    else {
      param_2 = DAT_00b430f0;
    }
  }
  else {
    param_2 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != param_2) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar8 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar8);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_2 = (undefined4 *)iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_2);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084e9e0(undefined4 param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  LONG LVar7;
  undefined4 uVar8;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45668;
  DAT_00b46528 = DAT_00b46538;
  DAT_00b4652c = DAT_00b4653c;
  DAT_00b46530 = DAT_00b46540;
  DAT_00b46534 = DAT_00b46544;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  piVar1 = param_4;
  iVar2 = **(int **)(iVar4 + 0x24);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0,uVar5);
  if (iVar6 == 0) {
    if ((piVar1[7] & 0x80U) == 0) {
      param_2 = DAT_00b430dc;
    }
    else {
      param_2 = DAT_00b430f0;
    }
  }
  else {
    param_2 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != param_2) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar8 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar8);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_2 = (undefined4 *)iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_2);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084eb60(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
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
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45928;
  iVar2 = **(int **)(DAT_00b45928 + 0x24);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0,uVar5);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*param_3 + 0x78))();
    FUN_007715e0(uVar9);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_3 = (int *)iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084ec90(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
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
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b4592c;
  iVar2 = **(int **)(DAT_00b4592c + 0x24);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0,uVar5);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*param_3 + 0x78))();
    FUN_007715e0(uVar9);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_3 = (int *)iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084edc0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
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
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45930;
  iVar2 = **(int **)(DAT_00b45930 + 0x24);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0,uVar5);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*param_3 + 0x78))();
    FUN_007715e0(uVar9);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_3 = (int *)iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084eef0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
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
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45934;
  iVar2 = **(int **)(DAT_00b45934 + 0x24);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0,uVar5);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*param_3 + 0x78))();
    FUN_007715e0(uVar9);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_3 = (int *)iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084f020(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  undefined4 uVar8;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b459b0;
  iVar2 = **(int **)(DAT_00b459b0 + 0x24);
  puVar6 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar5);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar8 = (**(code **)(*param_3 + 0x78))();
    FUN_007715e0(uVar8);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_3 = (int *)iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084f120(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3428;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b459b4;
  iVar2 = **(int **)(DAT_00b459b4 + 0x24);
  puVar6 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar5);
  puVar10 = *(undefined4 **)(iVar2 + 4);
  if (puVar10 != puVar6) {
    if (((puVar10 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar10 + 1), LVar7 == 0))
       && (puVar10 != (undefined4 *)0x0)) {
      (**(code **)*puVar10)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar8 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar8);
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x88))(1);
  puVar10 = *(undefined4 **)(iVar2 + 4);
  if (puVar10 != puVar6) {
    if (((puVar10 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar10 + 1), LVar7 == 0))
       && (puVar10 != (undefined4 *)0x0)) {
      (**(code **)*puVar10)(1);
    }
    *(undefined4 **)(unaff_EBP + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if ((unaff_EBP != 0) && (DAT_00b42cdd != '\0')) {
    uVar8 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar8);
  }
  iVar3 = *(int *)(*(int *)(iVar4 + 0x24) + 8);
  iVar9 = (**(code **)(*piVar1 + 0x8c))(1);
  if (iVar9 == 0) {
    puVar10 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar10 = DAT_00b430dc;
    }
  }
  else {
    puVar10 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(1);
  }
  puVar6 = *(undefined4 **)(iVar3 + 4);
  if (puVar6 != puVar10) {
    if (((puVar6 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar6 + 1), LVar7 == 0)) &&
       (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    *(undefined4 **)(unaff_ESI + 4) = puVar10;
    if (puVar10 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar10 + 1);
    }
  }
  if ((unaff_ESI != 0) && (DAT_00b42cdd != '\0')) {
    uVar8 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar8);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_1 = iVar4;
  FUN_0076ce40(*(undefined4 *)(iVar3 + 0x38),&param_1);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084f340(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  undefined4 uVar9;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3428;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b459b8;
  iVar2 = **(int **)(DAT_00b459b8 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar6);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
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
  puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x88))(1);
  puVar3 = *(undefined4 **)(iVar4 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(unaff_EBP + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((unaff_EBP != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar9);
  }
  _DAT_00b46628 = piVar1[0x2a];
  _DAT_00b4662c = piVar1[0x2b];
  _DAT_00b46630 = piVar1[0x2c];
  _DAT_00b46634 = piVar1[0x2d];
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  param_2 = iVar5;
  local_c = 0;
  FUN_0076ce40(*(undefined4 *)(iVar4 + 0x38),&param_2);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_c = -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(iVar4 + 0x38) = *(int *)(iVar4 + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084f4f0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  undefined4 uVar8;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b459bc;
  iVar2 = **(int **)(DAT_00b459bc + 0x24);
  puVar6 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar5);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar8 = (**(code **)(*param_3 + 0x78))();
    FUN_007715e0(uVar8);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_3 = (int *)iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084f5f0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  undefined4 uVar8;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b459c0;
  iVar2 = **(int **)(DAT_00b459c0 + 0x24);
  puVar6 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar5);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar8 = (**(code **)(*param_3 + 0x78))();
    FUN_007715e0(uVar8);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_3 = (int *)iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084f6f0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  undefined4 uVar8;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b459c4;
  iVar2 = **(int **)(DAT_00b459c4 + 0x24);
  puVar6 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar5);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar8 = (**(code **)(*param_3 + 0x78))();
    FUN_007715e0(uVar8);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_3 = (int *)iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084f7f0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3428;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b459c8;
  iVar2 = **(int **)(DAT_00b459c8 + 0x24);
  puVar6 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0,uVar5);
  puVar10 = *(undefined4 **)(iVar2 + 4);
  if (puVar10 != puVar6) {
    if (((puVar10 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar10 + 1), LVar7 == 0))
       && (puVar10 != (undefined4 *)0x0)) {
      (**(code **)*puVar10)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar8 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar8);
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x88))(1);
  puVar10 = *(undefined4 **)(iVar2 + 4);
  if (puVar10 != puVar6) {
    if (((puVar10 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar10 + 1), LVar7 == 0))
       && (puVar10 != (undefined4 *)0x0)) {
      (**(code **)*puVar10)(1);
    }
    *(undefined4 **)(unaff_EBP + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  if ((unaff_EBP != 0) && (DAT_00b42cdd != '\0')) {
    uVar8 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar8);
  }
  iVar3 = *(int *)(*(int *)(iVar4 + 0x24) + 8);
  iVar9 = (**(code **)(*piVar1 + 0x8c))(1);
  if (iVar9 == 0) {
    puVar10 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar10 = DAT_00b430dc;
    }
  }
  else {
    puVar10 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(1);
  }
  puVar6 = *(undefined4 **)(iVar3 + 4);
  if (puVar6 != puVar10) {
    if (((puVar6 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar6 + 1), LVar7 == 0)) &&
       (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    *(undefined4 **)(unaff_ESI + 4) = puVar10;
    if (puVar10 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar10 + 1);
    }
  }
  if ((unaff_ESI != 0) && (DAT_00b42cdd != '\0')) {
    uVar8 = (**(code **)(*piVar1 + 0x78))();
    FUN_007715e0(uVar8);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_1 = iVar4;
  FUN_0076ce40(*(undefined4 *)(iVar3 + 0x38),&param_1);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084fa10(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
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
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b459dc;
  iVar2 = **(int **)(DAT_00b459dc + 0x24);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0,uVar5);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*param_3 + 0x78))();
    FUN_007715e0(uVar9);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_3 = (int *)iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084fb40(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
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
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b459e0;
  iVar2 = **(int **)(DAT_00b459e0 + 0x24);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0,uVar5);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*param_3 + 0x78))();
    FUN_007715e0(uVar9);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_3 = (int *)iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084fc70(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
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
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b459e4;
  iVar2 = **(int **)(DAT_00b459e4 + 0x24);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0,uVar5);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*param_3 + 0x78))();
    FUN_007715e0(uVar9);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_3 = (int *)iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084fda0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
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
  puStack_8 = &LAB_009d3368;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b459e8;
  iVar2 = **(int **)(DAT_00b459e8 + 0x24);
  iVar6 = (**(code **)(*param_4 + 0x8c))(0,uVar5);
  if (iVar6 == 0) {
    puVar7 = DAT_00b430f0;
    if ((piVar1[7] & 0x80U) == 0) {
      puVar7 = DAT_00b430dc;
    }
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(0);
  }
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar7) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(unaff_EBX + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((unaff_EBX != 0) && (DAT_00b42cdd != '\0')) {
    uVar9 = (**(code **)(*param_3 + 0x78))();
    FUN_007715e0(uVar9);
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  param_3 = (int *)iVar4;
  puStack_8 = (undefined1 *)0x0;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_3);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0084fed0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

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
  iVar3 = DAT_00b45ba0;
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


