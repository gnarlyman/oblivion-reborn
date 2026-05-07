
void FUN_00880200(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47728;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_008803b0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b4772c;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00880560(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47730;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
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
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
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
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_008807a0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47734;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
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
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
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
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_008809e0(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b47738;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
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
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 8);
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
  puStack_8 = *(undefined1 **)(*(int *)(puVar5 + 0x24) + 0xc);
  puVar8 = (undefined4 *)FUN_00848fd0(param_1,1);
  puVar4 = *(undefined4 **)(puStack_8 + 4);
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



void FUN_00880c00(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b4773c;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
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
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 8);
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
  puStack_8 = *(undefined1 **)(*(int *)(puVar5 + 0x24) + 0xc);
  puVar8 = (undefined4 *)FUN_00848fd0(param_1,1);
  puVar4 = *(undefined4 **)(puStack_8 + 4);
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



void FUN_00880e20(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b47740;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
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
  iVar3 = *(int *)(puVar5[9] + 8);
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
  puStack_8 = *(undefined4 **)(puVar5[9] + 0xc);
  puVar8 = (undefined4 *)FUN_00848fd0(param_1,1);
  puVar4 = (undefined4 *)puStack_8[1];
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



void FUN_008810e0(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b47744;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
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
  iVar3 = *(int *)(puVar5[9] + 8);
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
  puStack_8 = *(undefined4 **)(puVar5[9] + 0xc);
  puVar8 = (undefined4 *)FUN_00848fd0(param_1,1);
  puVar4 = (undefined4 *)puStack_8[1];
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



void FUN_008813a0(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b47748;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
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
  iVar3 = *(int *)(puVar5[9] + 8);
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
  puStack_8 = *(undefined4 **)(puVar5[9] + 0xc);
  puVar8 = (undefined4 *)FUN_00848fd0(param_1,1);
  puVar4 = (undefined4 *)puStack_8[1];
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
  iVar3 = *(int *)(puVar5[9] + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43110;
  if (puVar4 != DAT_00b43110) {
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



void FUN_00881610(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b4774c;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
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
  iVar3 = *(int *)(puVar5[9] + 8);
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
  puStack_8 = *(undefined4 **)(puVar5[9] + 0xc);
  puVar8 = (undefined4 *)FUN_00848fd0(param_1,1);
  puVar4 = (undefined4 *)puStack_8[1];
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
  iVar3 = *(int *)(puVar5[9] + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43110;
  if (puVar4 != DAT_00b43110) {
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



void FUN_00881880(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b47750;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
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
  iVar3 = *(int *)(puVar5[9] + 8);
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
  puStack_8 = *(undefined4 **)(puVar5[9] + 0xc);
  puVar8 = (undefined4 *)FUN_00848fd0(param_1,1);
  puVar4 = (undefined4 *)puStack_8[1];
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
  iVar3 = *(int *)(puVar5[9] + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43110;
  if (puVar4 != DAT_00b43110) {
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



void FUN_00881b80(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b47754;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
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
  iVar3 = *(int *)(puVar5[9] + 8);
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
  puStack_8 = *(undefined4 **)(puVar5[9] + 0xc);
  puVar8 = (undefined4 *)FUN_00848fd0(param_1,1);
  puVar4 = (undefined4 *)puStack_8[1];
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
  iVar3 = *(int *)(puVar5[9] + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43110;
  if (puVar4 != DAT_00b43110) {
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



void FUN_00881e80(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b47758;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = **(int **)(iVar5 + 0x24);
  puVar7 = (undefined4 *)FUN_00848fd0(param_1,0);
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
  puVar7 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0xc);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_00881fd0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b4775c;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = **(int **)(iVar5 + 0x24);
  puVar7 = (undefined4 *)FUN_00848fd0(param_1,0);
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
  puVar7 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0xc);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_00882120(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b47760;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = **(int **)(iVar5 + 0x24);
  puVar7 = (undefined4 *)FUN_00848fd0(param_1,0);
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
  puVar7 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0xc);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void FUN_00882270(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b47764;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = **(int **)(iVar5 + 0x24);
  puVar7 = (undefined4 *)FUN_00848fd0(param_1,0);
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
  puVar7 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0xc);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



float10 FUN_008823c0(void)

{
  float *in_ECX;
  
  return (float10)(in_ECX[2] * 0.32 + *in_ECX * 0.31 + in_ECX[1] * 0.36);
}



void FUN_008823f0(void)

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
  puStack_8 = &LAB_009d57a0;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007d94b0(uVar2);
  *in_ECX = &PTR_FUN_00a95abc;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x55] = 0;
  in_ECX[0x56] = 0;
  in_ECX[0x57] = 0;
  in_ECX[0x58] = 0;
  in_ECX[0x59] = 0;
  in_ECX[0x5a] = 0;
  in_ECX[0x5b] = 0;
  puVar1 = (undefined4 *)in_ECX[0x5a];
  local_4 = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x5a] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x3c];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x3c] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x3d];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x3d] = 0;
  }
  in_ECX[0x3e] = DAT_00b3f9a8;
  in_ECX[0x3f] = DAT_00b3f9ac;
  in_ECX[0x40] = DAT_00b3f9b0;
  in_ECX[0x47] = 0;
  in_ECX[0x41] = DAT_00b3f9a8;
  in_ECX[0x42] = DAT_00b3f9ac;
  in_ECX[0x43] = DAT_00b3f9b0;
  in_ECX[0x48] = 0;
  in_ECX[0x44] = DAT_00b3f9a8;
  in_ECX[0x45] = DAT_00b3f9ac;
  in_ECX[0x46] = DAT_00b3f9b0;
  in_ECX[0x49] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008825e0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d57a0;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a95abc;
  puVar1 = (undefined4 *)in_ECX[0x5a];
  local_4 = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x5a] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x3c];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x3c] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x3d];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x3d] = 0;
  }
  in_ECX[0x3e] = DAT_00b3f9a8;
  in_ECX[0x3f] = DAT_00b3f9ac;
  in_ECX[0x40] = DAT_00b3f9b0;
  in_ECX[0x47] = 0;
  in_ECX[0x41] = DAT_00b3f9a8;
  in_ECX[0x42] = DAT_00b3f9ac;
  in_ECX[0x43] = DAT_00b3f9b0;
  in_ECX[0x48] = 0;
  in_ECX[0x44] = DAT_00b3f9a8;
  in_ECX[0x45] = DAT_00b3f9ac;
  in_ECX[0x46] = DAT_00b3f9b0;
  in_ECX[0x49] = 0;
  puVar1 = (undefined4 *)in_ECX[0x5b];
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x5a];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x3d];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x3c];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_007d7490();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008827e0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  
  FUN_007d7ad0(param_1,param_2);
  puVar1 = *(undefined4 **)(param_1 + 0x168);
  if (puVar1 != *(undefined4 **)(in_ECX + 0x168)) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *(int *)(in_ECX + 0x168);
    *(int *)(param_1 + 0x168) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(in_ECX + 0x158);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(in_ECX + 0x15c);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(in_ECX + 0x160);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(in_ECX + 0x164);
  puVar1 = *(undefined4 **)(param_1 + 0x16c);
  if (puVar1 != *(undefined4 **)(in_ECX + 0x16c)) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *(int *)(in_ECX + 0x16c);
    *(int *)(param_1 + 0x16c) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008828c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  LONG LVar3;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_11c;
  undefined4 *local_118;
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d57d6;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&puStack_11c;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffed4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007d8160(param_1,param_2,param_3);
  FUN_007b4160(local_114,param_1,&DAT_00a7d0e4,uVar1);
  if (local_114[0] != '\0') {
    uVar2 = FUN_007b8200(&local_118,local_114,param_2,1);
    local_4 = 0;
    FUN_0055e2a0(uVar2);
    local_4 = 0xffffffff;
    if (local_118 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(local_118 + 1);
      if ((LVar3 == 0) && (local_118 != (undefined4 *)0x0)) {
        (**(code **)*local_118)(1);
      }
    }
  }
  if (1 < DAT_00b42f48) {
    FUN_007b4160(local_114,param_1,&DAT_00a7d0e8,uVar1);
    if (local_114[0] != '\0') {
      uVar2 = FUN_007b8200(&puStack_11c,local_114,param_2,1);
      local_4 = 1;
      FUN_0055e2a0(uVar2);
      local_4 = 0xffffffff;
      if (puStack_11c != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(puStack_11c + 1);
        if ((LVar3 == 0) && (puStack_11c != (undefined4 *)0x0)) {
          (**(code **)*puStack_11c)(1);
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00882a40(byte param_1)

{
  FUN_008825e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00882a60(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x170,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_008823f0();
  }
  local_4 = 0xffffffff;
  FUN_008827e0(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



int FUN_00882ae0(int param_1,float param_2,short *param_3,uint param_4)

{
  float fVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  char cVar9;
  uint uVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  int local_28;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar10 = param_4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d5826;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((DAT_00b42f3e != '\0') &&
     (((*(uint *)(in_ECX + 0x1c) & 0x8000) != 0 || ((*(uint *)(in_ECX + 0x1c) & 0x10000) != 0)))) {
    iVar4 = FUN_007d85d0(param_1,param_2,param_3,param_4);
    goto LAB_00882fa8;
  }
  uVar11 = (uint)DAT_00b42eac << 8 | (uint)param_2;
  if (DAT_00b42eac == 5) {
    iVar4 = in_ECX + 0x38;
    goto LAB_00882fa8;
  }
  if (DAT_00b42eac == 6) {
    FUN_0085abd0(param_1,*(int *)(param_1 + 0xb8) != 0,0);
    iVar4 = in_ECX + 0x48;
    goto LAB_00882fa8;
  }
  cVar9 = (char)param_4;
  if ((*(uint *)(in_ECX + 0x24) != uVar11) || (cVar9 == '\0')) {
    if (cVar9 == '\x01') {
      FUN_007e24c0(uVar3);
      *(uint *)(in_ECX + 0x24) = uVar11;
    }
    else {
      *param_3 = 0;
    }
    iVar4 = FUN_007b4280(*(uint *)(in_ECX + 0x1c) >> 0x1c);
    iVar4 = *(int *)(iVar4 + 0x118);
    sVar2 = FUN_007ed600();
    if (sVar2 == 0) {
      if (cVar9 == '\x01') {
        param_4 = FUN_00401f00(0x10);
        local_4 = 0;
        if (param_4 == 0) {
          param_2 = 0.0;
        }
        else {
          param_2 = (float)FUN_007e2370(param_4,param_1,0xe0,1,1,iVar4);
        }
        local_4 = 0xffffffff;
        FUN_005b1e20(&param_2);
        *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xffffe3ff;
        *(undefined4 *)(in_ECX + 0x24) = 0;
      }
      else {
LAB_00882ef7:
        *param_3 = *param_3 + 1;
      }
    }
    else {
      local_28 = FUN_007ed2a0();
      FUN_00405ad0(&param_2);
      FUN_007016a0();
      fVar12 = (float10)FUN_008823c0();
      fVar1 = *(float *)(param_1 + 0x2c);
      FUN_00405ad0(&param_2);
      FUN_007016a0();
      fVar13 = (float10)FUN_00404c90();
      fVar14 = (float10)0;
      if (fVar14 <= fVar13 - (float10)fVar1) {
        fVar14 = (float10)FUN_00404c90();
        fVar14 = fVar14 - (float10)fVar1;
      }
      fVar13 = (float10)FUN_008823c0();
      param_2 = (float)(((float10)1 / (float10)(float)fVar14) * (float10)(float)fVar14 * fVar13);
      if ((float)fVar12 <= param_2) {
        *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x400;
        *(undefined4 *)(in_ECX + 0x24) = 0;
        if ((float)fVar12 <= 0.0) {
          iVar7 = FUN_007ed4b0();
          if (iVar7 == 0) {
            iVar7 = 0;
            iVar6 = 0;
            *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xffffe7ff;
            *(undefined4 *)(in_ECX + 0x24) = 0;
          }
          else {
            iVar6 = FUN_007ed4b0();
            *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x800;
            *(undefined4 *)(in_ECX + 0x24) = 0;
            FUN_00434980(0x1000,iVar6 != 0);
          }
        }
        else {
          iVar6 = FUN_007ed4b0();
          *(undefined4 *)(in_ECX + 0x24) = 0;
          iVar7 = iVar4;
          if (iVar6 == 0) {
            iVar6 = 0;
            *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xffffefff | 0x800;
          }
          else {
            *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x1800;
          }
        }
      }
      else {
        *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xffffe3ff;
        *(undefined4 *)(in_ECX + 0x24) = 0;
        iVar7 = 0;
        if (local_28 != 0) {
          *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x800;
          *(undefined4 *)(in_ECX + 0x24) = 0;
          iVar7 = local_28;
        }
        iVar5 = FUN_007ed4b0();
        iVar6 = 0;
        local_28 = iVar4;
        if (iVar5 != 0) {
          *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x1000;
          *(undefined4 *)(in_ECX + 0x24) = 0;
          iVar6 = iVar5;
        }
      }
      uVar10 = param_4;
      if ((char)param_4 != '\x01') goto LAB_00882ef7;
      param_2 = (float)FUN_00401f00(0x10);
      local_4 = 1;
      if (param_2 == 0.0) {
        param_2 = 0.0;
      }
      else {
        param_2 = (float)FUN_007e2370(param_2,param_1,0xe1,1,3,local_28,iVar7,iVar6);
      }
      local_4 = 0xffffffff;
      FUN_005b1e20(&param_2);
      uVar10 = param_4;
    }
    if (((2 < DAT_00b42f48) && (((byte)DAT_00b42f40 & 0x10) != 0)) && ((char)uVar10 != '\0')) {
      iVar4 = FUN_00707530(0);
      if (iVar4 == 0) {
        piVar8 = (int *)FUN_00405760(&param_2);
        iVar4 = *(int *)(*piVar8 + 8);
        FUN_007016a0();
        if (iVar4 != 0) goto LAB_00882f50;
LAB_00882f61:
        param_4 = param_4 & 0xffffff00;
      }
      else {
LAB_00882f50:
        param_4 = CONCAT31(param_4._1_3_,1);
        if ((*(ushort *)(iVar4 + 0x18) >> 9 & 1) == 0) goto LAB_00882f61;
      }
      FUN_0085aac0(param_1,*(int *)(param_1 + 0xb8) != 0,param_4);
    }
  }
  if (*(int *)(in_ECX + 0xe0) != 0) {
    param_4 = CONCAT31(param_4._1_3_,1);
    FUN_00854b70(param_1,param_3,uVar10,&param_4,0);
  }
  iVar4 = in_ECX + 0x28;
LAB_00882fa8:
  *unaff_FS_OFFSET = local_c;
  return iVar4;
}



undefined4 FUN_00883130(undefined4 *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  LONG LVar5;
  
  bVar2 = (undefined4 *)0x80 < param_1;
  if (bVar2) {
    param_1 = (undefined4 *)0x0;
    puVar4 = &param_1;
  }
  else {
    puVar4 = &DAT_00b45088 + (int)param_1;
  }
  puVar3 = param_1;
  uVar1 = *puVar4;
  if ((bVar2) && (param_1 != (undefined4 *)0x0)) {
    LVar5 = InterlockedDecrement(param_1 + 1);
    if (LVar5 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  return uVar1;
}



undefined4 FUN_00883190(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int local_14;
  int *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d5858;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  local_10 = in_ECX;
  do {
    piVar4 = (int *)FUN_007606a0(&local_14,uVar3);
    iVar2 = *(int *)((int)&DAT_00b47790 + uVar5);
    local_4 = 0;
    if (iVar2 != *piVar4) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar4;
      *(int *)((int)&DAT_00b47790 + uVar5) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((local_14 != 0) &&
       (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0))
    {
      FUN_007604d0();
    }
    uVar5 = uVar5 + 4;
  } while (uVar5 < 0x70);
  (**(code **)(*local_10 + 0xc4))();
  if (1 < DAT_00b42f48) {
    (**(code **)(*local_10 + 200))();
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00883260(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint3 uVar5;
  uint uVar6;
  int *piVar7;
  LONG LVar8;
  undefined4 uVar9;
  int in_ECX;
  int iVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d5938;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b47790;
  iVar11 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b47790 != 0) && (iVar10 = iVar2, DAT_00b47790 != 0)) {
    *(int *)(DAT_00b47790 + 0x60) = *(int *)(DAT_00b47790 + 0x60) + 1;
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      iVar11 = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar3 = *(undefined4 **)(in_ECX + 0x9c);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x10c);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43b80 = DAT_00b43b60;
  _DAT_00b44210 = DAT_00b441f0;
  _DAT_00b434f0 = DAT_00b434d0;
  _DAT_00b448a0 = DAT_00b44880;
  if (iVar10 != DAT_00b47794) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b47794;
    if (DAT_00b47794 != 0) {
      *(int *)(DAT_00b47794 + 0x60) = *(int *)(DAT_00b47794 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xa0);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x110);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43bdc = DAT_00b43b84;
  _DAT_00b4426c = DAT_00b44214;
  _DAT_00b4354c = DAT_00b434f4;
  _DAT_00b448fc = DAT_00b448a4;
  if (iVar10 != DAT_00b47798) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b47798;
    if (DAT_00b47798 != 0) {
      *(int *)(DAT_00b47798 + 0x60) = *(int *)(DAT_00b47798 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 5;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 6;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xa4);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x114);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43be0 = DAT_00b43bf0;
  _DAT_00b44270 = DAT_00b44280;
  _DAT_00b43550 = DAT_00b43560;
  _DAT_00b44900 = DAT_00b44910;
  if (iVar10 != DAT_00b4779c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b4779c;
    if (DAT_00b4779c != 0) {
      *(int *)(DAT_00b4779c + 0x60) = *(int *)(DAT_00b4779c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 7;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 8;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 9;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,2,3,2);
    FUN_0076c910(DAT_00b430d4);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 10;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,3,1,2);
    FUN_0076c910(DAT_00b430ec);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xa8);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x118);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43bec = DAT_00b43be4;
  _DAT_00b4427c = DAT_00b44274;
  _DAT_00b4355c = DAT_00b43554;
  _DAT_00b4490c = DAT_00b44904;
  if (iVar10 != DAT_00b477a0) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b477a0;
    if (DAT_00b477a0 != 0) {
      *(int *)(DAT_00b477a0 + 0x60) = *(int *)(DAT_00b477a0 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xb;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xac);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x11c);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43eb8 = DAT_00b43ea8;
  _DAT_00b44548 = DAT_00b44538;
  _DAT_00b43828 = DAT_00b43818;
  _DAT_00b44bd8 = DAT_00b44bc8;
  if (iVar10 != DAT_00b477a4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b477a4;
    if (DAT_00b477a4 != 0) {
      *(int *)(DAT_00b477a4 + 0x60) = *(int *)(DAT_00b477a4 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xc;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xd;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xe;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,2,3,2);
    FUN_0076c910(DAT_00b430d4);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xf;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,3,1,2);
    FUN_0076c910(DAT_00b430ec);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xb0);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x120);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43ebc = DAT_00b43eac;
  _DAT_00b4454c = DAT_00b4453c;
  _DAT_00b4382c = DAT_00b4381c;
  _DAT_00b44bdc = DAT_00b44bcc;
  if (iVar10 != DAT_00b477ac) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b477ac;
    if (DAT_00b477ac != 0) {
      *(int *)(DAT_00b477ac + 0x60) = *(int *)(DAT_00b477ac + 0x60) + 1;
    }
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x10;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xb8);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x128);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f6c = DAT_00b43f5c;
  _DAT_00b445fc = DAT_00b445ec;
  _DAT_00b438dc = DAT_00b438cc;
  _DAT_00b44c8c = DAT_00b44c7c;
  if (iVar10 != DAT_00b477b0) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b477b0;
    if (DAT_00b477b0 != 0) {
      *(int *)(DAT_00b477b0 + 0x60) = *(int *)(DAT_00b477b0 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x11;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x12;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x13;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,2,3,2);
    FUN_0076c910(DAT_00b430d4);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x14;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,3,1,2);
    FUN_0076c910(DAT_00b430ec);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xbc);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 300);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f70 = DAT_00b43f60;
  _DAT_00b44600 = DAT_00b445f0;
  _DAT_00b438e0 = DAT_00b438d0;
  _DAT_00b44c90 = DAT_00b44c80;
  if (iVar10 != DAT_00b477a8) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b477a8;
    if (DAT_00b477a8 != 0) {
      *(int *)(DAT_00b477a8 + 0x60) = *(int *)(DAT_00b477a8 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x15;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xb4);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x124);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,9,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f4c = DAT_00b43f30;
  _DAT_00b445dc = DAT_00b445c0;
  _DAT_00b438bc = DAT_00b438a0;
  _DAT_00b44c6c = DAT_00b44c50;
  if (iVar10 != DAT_00b477b4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b477b4;
    if (DAT_00b477b4 != 0) {
      *(int *)(DAT_00b477b4 + 0x60) = *(int *)(DAT_00b477b4 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x16;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xc0);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x130);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b44170 = DAT_00b44160;
  _DAT_00b44800 = DAT_00b447f0;
  _DAT_00b43ae0 = DAT_00b43ad0;
  _DAT_00b44e90 = DAT_00b44e80;
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar11 != 0) {
    piVar7 = (int *)(iVar11 + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(iVar10 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00884d50(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint3 uVar5;
  uint uVar6;
  int *piVar7;
  LONG LVar8;
  undefined4 uVar9;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d5d60;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if ((DAT_00b477b8 != 0) && (local_18 = DAT_00b477b8, DAT_00b477b8 != 0)) {
    *(int *)(DAT_00b477b8 + 0x60) = *(int *)(DAT_00b477b8 + 0x60) + 1;
  }
  if (*(uint *)(local_18 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      local_1c = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 5;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 6;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 7;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 8;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,2);
    FUN_00760010(6,local_1c);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar3 = *(undefined4 **)(in_ECX + 0xc4);
  puVar4 = *(undefined4 **)(local_18 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar4 = DAT_00b451b0;
  puVar3 = *(undefined4 **)(local_18 + 0x44);
  if (puVar3 != DAT_00b451b0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c70 = DAT_00b43c48;
  _DAT_00b44300 = DAT_00b442d8;
  _DAT_00b435e0 = DAT_00b435b8;
  _DAT_00b44990 = DAT_00b44968;
  if (local_18 != DAT_00b477bc) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b477bc;
    if (DAT_00b477bc != 0) {
      *(int *)(DAT_00b477bc + 0x60) = *(int *)(DAT_00b477bc + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 9;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 10;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xb;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xc;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xd;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xe;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xf;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,2);
    FUN_00760010(6,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 200);
  puVar4 = *(undefined4 **)(local_18 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar4 = DAT_00b451b8;
  puVar3 = *(undefined4 **)(local_18 + 0x44);
  if (puVar3 != DAT_00b451b8) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c9c = DAT_00b43c74;
  _DAT_00b4432c = DAT_00b44304;
  _DAT_00b4360c = DAT_00b435e4;
  _DAT_00b449bc = DAT_00b44994;
  if (local_18 != DAT_00b477c0) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b477c0;
    if (DAT_00b477c0 != 0) {
      *(int *)(DAT_00b477c0 + 0x60) = *(int *)(DAT_00b477c0 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x10;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x11;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x12;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x13;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x14;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x15;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x16;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,2);
    FUN_00760010(6,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xcc);
  puVar4 = *(undefined4 **)(local_18 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar4 = DAT_00b451c0;
  puVar3 = *(undefined4 **)(local_18 + 0x44);
  if (puVar3 != DAT_00b451c0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43cc8 = DAT_00b43ca0;
  _DAT_00b44358 = DAT_00b44330;
  _DAT_00b43638 = DAT_00b43610;
  _DAT_00b449e8 = DAT_00b449c0;
  if (local_18 != DAT_00b477c4) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b477c4;
    if (DAT_00b477c4 != 0) {
      *(int *)(DAT_00b477c4 + 0x60) = *(int *)(DAT_00b477c4 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x17;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x18;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x19;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1a;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1b;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1c;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1d;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,2);
    FUN_00760010(6,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xd0);
  puVar4 = *(undefined4 **)(local_18 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar4 = DAT_00b451c8;
  puVar3 = *(undefined4 **)(local_18 + 0x44);
  if (puVar3 != DAT_00b451c8) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43cf4 = DAT_00b43ccc;
  _DAT_00b44384 = DAT_00b4435c;
  _DAT_00b43664 = DAT_00b4363c;
  _DAT_00b44a14 = DAT_00b449ec;
  if (local_18 != DAT_00b477c8) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b477c8;
    if (DAT_00b477c8 != 0) {
      *(int *)(DAT_00b477c8 + 0x60) = *(int *)(DAT_00b477c8 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 8) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1e;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1f;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x20;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x21;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x22;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x23;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x24;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x25;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,2);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xd4));
  uVar9 = FUN_00883130(0x2f);
  FUN_007aec60(uVar9);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d28 = DAT_00b43cf8;
  _DAT_00b443b8 = DAT_00b44388;
  _DAT_00b43698 = DAT_00b43668;
  _DAT_00b44a48 = DAT_00b44a18;
  if (local_18 != DAT_00b477cc) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b477cc;
    if (DAT_00b477cc != 0) {
      *(int *)(DAT_00b477cc + 0x60) = *(int *)(DAT_00b477cc + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x26;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x27;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x28;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x29;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,2);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xd8));
  uVar9 = FUN_00883130(0x32);
  FUN_007aec60(uVar9);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d60 = DAT_00b43d30;
  _DAT_00b443f0 = DAT_00b443c0;
  _DAT_00b436d0 = DAT_00b436a0;
  _DAT_00b44a80 = DAT_00b44a50;
  if (local_18 != DAT_00b477d0) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b477d0;
    if (DAT_00b477d0 != 0) {
      *(int *)(DAT_00b477d0 + 0x60) = *(int *)(DAT_00b477d0 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x30;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x31;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x32;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x33;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x34;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x35;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,2);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xdc));
  uVar9 = FUN_00883130(0x38);
  FUN_007aec60(uVar9);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d94 = DAT_00b43d68;
  _DAT_00b44424 = DAT_00b443f8;
  _DAT_00b43704 = DAT_00b436d8;
  _DAT_00b44ab4 = DAT_00b44a88;
  if (local_18 != DAT_00b477d4) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b477d4;
    if (DAT_00b477d4 != 0) {
      *(int *)(DAT_00b477d4 + 0x60) = *(int *)(DAT_00b477d4 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x36;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x37;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x38;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x39;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,2);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xe0));
  uVar9 = FUN_00883130(0x3b);
  FUN_007aec60(uVar9);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43dc8 = DAT_00b43d9c;
  _DAT_00b44458 = DAT_00b4442c;
  _DAT_00b43738 = DAT_00b4370c;
  _DAT_00b44ae8 = DAT_00b44abc;
  if (local_18 != DAT_00b477d8) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b477d8;
    if (DAT_00b477d8 != 0) {
      *(int *)(DAT_00b477d8 + 0x60) = *(int *)(DAT_00b477d8 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x40;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x41;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x42;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x43;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x44;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x45;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,2);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xe4));
  uVar9 = FUN_00883130(0x3e);
  FUN_007aec60(uVar9);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e00 = DAT_00b43dd0;
  _DAT_00b44490 = DAT_00b44460;
  _DAT_00b43770 = DAT_00b43740;
  _DAT_00b44b20 = DAT_00b44af0;
  if (local_18 != DAT_00b477dc) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b477dc;
    if (DAT_00b477dc != 0) {
      *(int *)(DAT_00b477dc + 0x60) = *(int *)(DAT_00b477dc + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x46;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x47;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x48;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x49;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,2);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xe8));
  uVar9 = FUN_00883130(0x41);
  FUN_007aec60(uVar9);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e34 = DAT_00b43e04;
  _DAT_00b444c4 = DAT_00b44494;
  _DAT_00b437a4 = DAT_00b43774;
  _DAT_00b44b54 = DAT_00b44b24;
  if (local_18 != DAT_00b477e0) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b477e0;
    if (DAT_00b477e0 != 0) {
      *(int *)(DAT_00b477e0 + 0x60) = *(int *)(DAT_00b477e0 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x50;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x51;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x52;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x53;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x54;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x55;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,2);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xec));
  uVar9 = FUN_00883130(0x44);
  FUN_007aec60(uVar9);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e68 = DAT_00b43e38;
  _DAT_00b444f8 = DAT_00b444c8;
  _DAT_00b437d8 = DAT_00b437a8;
  _DAT_00b44b88 = DAT_00b44b58;
  if (local_18 != DAT_00b477e4) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b477e4;
    if (DAT_00b477e4 != 0) {
      *(int *)(DAT_00b477e4 + 0x60) = *(int *)(DAT_00b477e4 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x56;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x57;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x58;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x59;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,2);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xf0));
  uVar9 = FUN_00883130(0x47);
  FUN_007aec60(uVar9);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e9c = DAT_00b43e6c;
  _DAT_00b4452c = DAT_00b444fc;
  _DAT_00b4380c = DAT_00b437dc;
  _DAT_00b44bbc = DAT_00b44b8c;
  if (local_18 != DAT_00b477e8) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b477e8;
    if (DAT_00b477e8 != 0) {
      *(int *)(DAT_00b477e8 + 0x60) = *(int *)(DAT_00b477e8 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 4) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x60;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x61;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_1c,3,3,2);
    FUN_00760010(3,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xf4));
  uVar9 = FUN_00883130(0x52);
  FUN_007aec60(uVar9);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43ed8 = DAT_00b43ec0;
  _DAT_00b44568 = DAT_00b44550;
  _DAT_00b43848 = DAT_00b43830;
  _DAT_00b44bf8 = DAT_00b44be0;
  if (local_18 != DAT_00b477ec) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b477ec;
    if (DAT_00b477ec != 0) {
      *(int *)(DAT_00b477ec + 0x60) = *(int *)(DAT_00b477ec + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 4) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x62;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 99;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 100;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x65;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_1c,3,3,2);
    FUN_00760010(3,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xf8));
  uVar9 = FUN_00883130(0x53);
  FUN_007aec60(uVar9);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f10 = DAT_00b43ef8;
  _DAT_00b44c30 = DAT_00b44c18;
  _DAT_00b445a0 = DAT_00b44588;
  _DAT_00b43880 = DAT_00b43868;
  FUN_0076c890(&DAT_00b477f0);
  if (*(uint *)(local_18 + 0x18) < 6) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x66;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(*(undefined4 *)(local_18 + 0x14),local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x67;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x68;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x69;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_1c,3,3,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xfc));
  uVar9 = FUN_00883130(0x54);
  FUN_007aec60(uVar9);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f8c = DAT_00b43f74;
  _DAT_00b438fc = DAT_00b438e4;
  _DAT_00b4461c = DAT_00b44604;
  _DAT_00b44cac = DAT_00b44c94;
  FUN_0076c890(&DAT_00b477f4);
  if (*(uint *)(local_18 + 0x18) < 6) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(*(undefined4 *)(local_18 + 0x14),local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_1c,3,3,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x70;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x71;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0x100));
  uVar9 = FUN_00883130(0x56);
  FUN_007aec60(uVar9);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43fa8 = DAT_00b43f90;
  _DAT_00b44638 = DAT_00b44620;
  _DAT_00b43918 = DAT_00b43900;
  _DAT_00b44cc8 = DAT_00b44cb0;
  FUN_0076c890(&DAT_00b477f8);
  if (*(uint *)(local_18 + 0x18) < 6) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x72;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(*(undefined4 *)(local_18 + 0x14),local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x73;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x74;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x75;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_1c,3,3,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x76;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x77;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0x104));
  uVar9 = FUN_00883130(0x58);
  FUN_007aec60(uVar9);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43fc4 = DAT_00b43fac;
  _DAT_00b44ce4 = DAT_00b44ccc;
  _DAT_00b44654 = DAT_00b4463c;
  _DAT_00b43934 = DAT_00b4391c;
  FUN_0076c890(&DAT_00b477fc);
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x78;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x79;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0x108));
  uVar9 = FUN_00883130(0x7b);
  FUN_007aec60(uVar9);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,9,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b44108 = DAT_00b440fc;
  _DAT_00b44798 = DAT_00b4478c;
  _DAT_00b43a78 = DAT_00b43a6c;
  _DAT_00b44e28 = DAT_00b44e1c;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_1c != 0) {
    piVar7 = (int *)(local_1c + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(local_18 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00889450(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a95c00;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00889470(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *in_ECX;
  
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = *param_1;
  fVar8 = param_1[1];
  fVar9 = param_1[2];
  fVar10 = param_1[3];
  fVar1 = param_1[3];
  fVar2 = param_2[3];
  *in_ECX = fVar6 * fVar7 + fVar10 * fVar3 + (fVar5 * fVar8 - fVar4 * fVar9);
  in_ECX[1] = fVar6 * fVar8 + fVar10 * fVar4 + (fVar3 * fVar9 - fVar5 * fVar7);
  in_ECX[2] = fVar6 * fVar9 + fVar10 * fVar5 + (fVar4 * fVar7 - fVar3 * fVar8);
  in_ECX[3] = fVar6 * fVar10 + fVar10 * fVar6 + (fVar6 * fVar10 - fVar6 * fVar10);
  in_ECX[3] = fVar1 * fVar2 - (fVar5 * fVar9 + fVar4 * fVar8 + fVar3 * fVar7);
  return;
}



void FUN_00889590(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a95c54;
  FUN_0089ad80();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008895c0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (in_ECX == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = in_ECX + 4;
  }
  *puVar1 = &PTR_LAB_00a95c48;
  if (in_ECX != (undefined4 *)0x0) {
    in_ECX[3] = &PTR_LAB_00a95c3c;
    *in_ECX = &PTR_LAB_00a45e5c;
    return;
  }
  _DAT_00000000 = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008896a0(int param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = thunk_FUN_00401aa0(param_1 + 0x10,1);
  bVar2 = 0x10 - ((byte)iVar1 & 0xf);
  *(byte *)(iVar1 + (uint)bVar2 + -1) = bVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008896f0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    _DAT_00b2e2dc = 1;
    return;
  default:
    _DAT_00b2e2dc = 4;
    return;
  case 2:
    _DAT_00b2e2dc = 2;
    return;
  case 3:
    _DAT_00b2e2dc = 5;
    return;
  case 4:
    _DAT_00b2e2dc = 9;
    return;
  }
}



void FUN_008897a0(void)

{
  undefined4 *puVar1;
  
  if (DAT_00ba7a00 != (int *)0x0) {
    (**(code **)(*DAT_00ba7a00 + 0x10))(1);
  }
  if (DAT_00ba8038 != (int *)0x0) {
    (**(code **)(*DAT_00ba8038 + 8))(1);
  }
  FUN_008905b0();
  FUN_00891010();
  puVar1 = DAT_00ba7904;
  if (DAT_00ba7904 != (undefined4 *)0x0) {
    if ((*(short *)(DAT_00ba7904 + 1) != 0) &&
       (*(short *)((int)DAT_00ba7904 + 6) = *(short *)((int)DAT_00ba7904 + 6) + -1,
       *(short *)((int)puVar1 + 6) == 0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00ba7904 = (undefined4 *)0x0;
  }
  FUN_008bbb90();
  return;
}



void FUN_00889a70(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d5d8b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != 0) && (param_1 != 0xa0)) {
    *(undefined1 *)(param_1 + -0xc) = 1;
    puVar1 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))();
    *(undefined2 *)(puVar1 + 1) = 0x2c0;
    local_c = 0;
    FUN_0089a230();
    *puVar1 = &PTR_FUN_00a95c54;
    puVar1[0xac] = 0;
    local_c = -1;
    if (DAT_00ba7904 != 0) {
      FUN_0089d340(DAT_00ba7904);
    }
    (**(code **)(*in_ECX + 0x4c))();
    if ((*(short *)(puVar1 + 1) != 0) &&
       (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
       *(short *)((int)puVar1 + 6) == 0)) {
      (**(code **)*puVar1)();
    }
    (**(code **)(*in_ECX + 0x7c))();
    iVar2 = (**(code **)(*in_ECX + 0x58))();
    if (iVar2 != 0) {
      FUN_008bbc60();
    }
    if (DAT_00ba7a00 != 0) {
      iVar2 = (**(code **)(*in_ECX + 0x58))();
      if (iVar2 != 0) {
        FUN_00899d60();
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00889bb0(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    iVar1 = (**(code **)(*in_ECX + 0x58))();
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x2b0) = -(uint)((char)param_1 != '\0') & (uint)in_ECX;
    }
  }
  FUN_0089d430(param_1);
  return;
}



char FUN_00889c20(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  
  cVar4 = '\0';
  if (((param_1 == 0) || (iVar1 = *(int *)(param_1 + 8), iVar1 == 0)) || (iVar1 == -0x14)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar1 + 0x30);
  }
  uVar2 = uVar3 >> 0x10;
  if (*(int *)(param_2 + 0x10) == 0) {
    if (uVar2 == 0) {
      uVar2 = (&DAT_00ba7eb0)[uVar3 & 0x3f];
      if (uVar2 == 0) {
        uVar2 = DAT_00b2eb3c + 1 & 0xffff;
        DAT_00b2eb3c = uVar2;
        if (uVar2 == 0) {
          uVar2 = 10;
          DAT_00b2eb3c = 10;
        }
      }
      cVar4 = '\x01';
    }
    *(uint *)(param_2 + 0x10) = uVar2;
    if (cVar4 != '\0') {
      FUN_0089f4d0(uVar2);
    }
    return cVar4;
  }
  FUN_0089f4d0(*(undefined4 *)(param_2 + 0x10));
  return '\x01';
}



undefined4 FUN_00889cb0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x50) != 0) {
    uVar1 = FUN_008afce0(*(int *)(in_ECX + 0x50));
    return uVar1;
  }
  return 0;
}



int FUN_00889cd0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x50);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x18) == '\x01')) {
    return *(int *)(iVar1 + 0x10) + iVar1;
  }
  return 0;
}



bool FUN_00889d60(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar2;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d5db8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008bbf80();
  local_4 = 0;
  uVar1 = (**(code **)(*in_ECX + 0x58))();
  FUN_008bc6c0(&param_1,uVar1,local_10);
  bVar2 = (char)param_1 != '\0';
  local_4 = 0xffffffff;
  FUN_008bc000();
  *unaff_FS_OFFSET = local_c;
  return bVar2;
}



void FUN_00889e00(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + 1;
  return;
}



void FUN_00889e10(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + 1;
  return;
}



void FUN_00889e20(void)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  undefined1 uStack_1;
  
  if (in_ECX[0xb] != 0) {
    if (2999 < (uint)in_ECX[0xb]) {
      in_ECX[0xb] = 3000;
    }
    iVar1 = (**(code **)(*in_ECX + 0x58))();
    if (iVar1 != 0) {
      FUN_0089c310(in_ECX[10],in_ECX[0xb],0);
      uVar2 = 0;
      if (in_ECX[0xb] != 0) {
        do {
          iVar1 = *(int *)(in_ECX[10] + uVar2 * 4);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(iVar1 + 0xc);
          }
          if (iVar1 == 0) {
            FUN_008996c0(&uStack_1,*(undefined4 *)(in_ECX[10] + uVar2 * 4));
          }
          else {
            *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xffffffef;
          }
          FUN_008bc730();
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)in_ECX[0xb]);
      }
      iVar1 = (**(code **)(*in_ECX + 0x58))();
      if ((in_ECX[4] == 0) || (*(int *)(iVar1 + 0xb4) != 9)) {
        FUN_00898b70(0x3c23d70a);
      }
      else {
        FUN_008bab10(0x3c23d70a,0x3c23d70a);
        FUN_008bab60();
      }
      _memset((void *)in_ECX[10],0,in_ECX[0xb] * 4);
      in_ECX[0xb] = 0;
    }
  }
  return;
}



void FUN_00889f20(char param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  
  if (in_ECX[0xb] != 0) {
    if (2999 < (uint)in_ECX[0xb]) {
      in_ECX[0xb] = 3000;
    }
    uVar2 = in_ECX[0xb];
    uVar5 = DAT_00b2e2fc;
    if (uVar2 < DAT_00b2e2fc) {
      uVar5 = uVar2;
    }
    uVar2 = uVar2 - uVar5;
    iVar3 = (**(code **)(*in_ECX + 0x58))();
    if (iVar3 != 0) {
      iVar3 = uVar2 * 4;
      if (param_1 == '\0') {
        FUN_0089c310(in_ECX[10] + iVar3,uVar5,1);
      }
      else {
        FUN_0089c310(in_ECX[10] + iVar3,uVar5,0);
        FUN_008a6410();
        iVar4 = (**(code **)(*in_ECX + 0x58))();
        if ((in_ECX[4] == 0) || (*(int *)(iVar4 + 0xb4) != 9)) {
          FUN_00898b70(0x3c23d70a);
          FUN_008a6440();
        }
        else {
          FUN_008bab10(0x3c23d70a,0x3c23d70a);
          FUN_008bab60();
          FUN_008a6440();
        }
      }
      uVar6 = uVar2;
      if (uVar2 < (uint)in_ECX[0xb]) {
        do {
          piVar1 = (int *)(in_ECX[10] + uVar6 * 4);
          iVar4 = *piVar1;
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(iVar4 + 0xc);
          }
          if (iVar4 == 0) {
            FUN_008996c0(&param_1,*piVar1);
          }
          else {
            *(uint *)(iVar4 + 0x18) = *(uint *)(iVar4 + 0x18) & 0xffffffef;
          }
          FUN_008bc730();
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)in_ECX[0xb]);
      }
      _memset((void *)(in_ECX[10] + iVar3),0,uVar5 * 4);
      in_ECX[0xb] = uVar2;
    }
  }
  return;
}



void FUN_0088a080(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  if (in_ECX[0xf] != 0) {
    if (99 < (uint)in_ECX[0xf]) {
      in_ECX[0xf] = 100;
    }
    iVar2 = (**(code **)(*in_ECX + 0x58))();
    if (iVar2 != 0) {
      uVar3 = 0;
      if (in_ECX[0xf] != 0) {
        do {
          if ((*(int *)(in_ECX[0xe] + uVar3 * 4) != 0) &&
             (iVar2 = *(int *)(in_ECX[0xe] + uVar3 * 4), *(int *)(iVar2 + 8) == 0)) {
            FUN_0089bae0(iVar2);
          }
          if (((*(int *)(in_ECX[0xe] + uVar3 * 4) != 0) &&
              (puVar1 = *(undefined4 **)(in_ECX[0xe] + uVar3 * 4), *(short *)(puVar1 + 1) != 0)) &&
             (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
             *(short *)((int)puVar1 + 6) == 0)) {
            (**(code **)*puVar1)(1);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)in_ECX[0xf]);
      }
      _memset((void *)in_ECX[0xe],0,in_ECX[0xf] * 4);
      in_ECX[0xf] = 0;
    }
  }
  return;
}



void FUN_0088a120(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  if ((in_ECX[0x11] != 0) && (in_ECX[0xb] == 0)) {
    if (199 < (uint)in_ECX[0x11]) {
      in_ECX[0x11] = 200;
    }
    iVar2 = (**(code **)(*in_ECX + 0x58))();
    if (iVar2 != 0) {
      uVar3 = 0;
      if (in_ECX[0x11] != 0) {
        do {
          if ((((*(int *)(in_ECX[0x10] + uVar3 * 4) != 0) &&
               (iVar2 = *(int *)(in_ECX[0x10] + uVar3 * 4), *(int *)(iVar2 + 8) == 0)) &&
              ((*(int *)(iVar2 + 0x10) == 0 || (*(int *)(*(int *)(iVar2 + 0x10) + 0x54) != 0)))) &&
             ((*(int *)(iVar2 + 0x14) == 0 || (*(int *)(*(int *)(iVar2 + 0x14) + 0x54) != 0)))) {
            FUN_008988a0(iVar2);
          }
          if (((*(int *)(in_ECX[0x10] + uVar3 * 4) != 0) &&
              (puVar1 = *(undefined4 **)(in_ECX[0x10] + uVar3 * 4), *(short *)(puVar1 + 1) != 0)) &&
             (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
             *(short *)((int)puVar1 + 6) == 0)) {
            (**(code **)*puVar1)(1);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)in_ECX[0x11]);
      }
      _memset((void *)in_ECX[0x10],0,in_ECX[0x11] * 4);
      in_ECX[0x11] = 0;
    }
  }
  return;
}



void FUN_0088a1f0(void)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  
  if (in_ECX[0x13] != 0) {
    if (2999 < (uint)in_ECX[0x13]) {
      in_ECX[0x13] = 3000;
    }
    iVar1 = (**(code **)(*in_ECX + 0x58))();
    if (iVar1 != 0) {
      FUN_0089c8e0(in_ECX[0x12],in_ECX[0x13]);
      if (in_ECX[0x13] != 0) {
        uVar2 = 0;
        do {
          iVar1 = *(int *)(in_ECX[0x12] + uVar2 * 4);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(iVar1 + 0xc);
          }
          if (iVar1 != 0) {
            *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xffffffdf;
          }
          FUN_008bc730();
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)in_ECX[0x13]);
      }
      _memset((void *)in_ECX[0x12],0,in_ECX[0x13] * 4);
      in_ECX[0x13] = 0;
    }
  }
  return;
}



void FUN_0088a280(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  if (in_ECX[0x13] != 0) {
    if (2999 < (uint)in_ECX[0x13]) {
      in_ECX[0x13] = 3000;
    }
    uVar1 = in_ECX[0x13];
    uVar3 = DAT_00b2e2f8;
    if (uVar1 < DAT_00b2e2f8) {
      uVar3 = uVar1;
    }
    uVar1 = uVar1 - uVar3;
    iVar2 = (**(code **)(*in_ECX + 0x58))();
    if (iVar2 != 0) {
      FUN_0089c8e0(in_ECX[0x12] + uVar1 * 4,uVar3);
      uVar3 = uVar1;
      if (uVar1 < (uint)in_ECX[0x13]) {
        do {
          iVar2 = *(int *)(in_ECX[0x12] + uVar3 * 4);
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(iVar2 + 0xc);
          }
          if (iVar2 != 0) {
            *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) & 0xffffffdf;
          }
          FUN_008bc730();
          *(undefined4 *)(in_ECX[0x12] + uVar3 * 4) = 0;
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)in_ECX[0x13]);
      }
      in_ECX[0x13] = uVar1;
    }
  }
  return;
}



void FUN_0088a310(void)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  
  if (in_ECX[0xd] != 0) {
    if (199 < (uint)in_ECX[0xd]) {
      in_ECX[0xd] = 200;
    }
    iVar1 = (**(code **)(*in_ECX + 0x58))();
    if (iVar1 != 0) {
      FUN_0089d080(in_ECX[0xc],in_ECX[0xd]);
      if (in_ECX[0xd] != 0) {
        uVar2 = 0;
        do {
          iVar1 = *(int *)(in_ECX[0xc] + uVar2 * 4);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(iVar1 + 0xc);
          }
          if (iVar1 != 0) {
            *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) & 0xfd;
          }
          FUN_008bc730();
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)in_ECX[0xd]);
      }
      _memset((void *)in_ECX[0xc],0,in_ECX[0xd] * 4);
      in_ECX[0xd] = 0;
    }
  }
  return;
}



void FUN_0088a3a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  if (in_ECX[0xf] != 0) {
    if (99 < (uint)in_ECX[0xf]) {
      in_ECX[0xf] = 100;
    }
    iVar2 = (**(code **)(*in_ECX + 0x58))();
    if (iVar2 != 0) {
      uVar3 = 0;
      if (in_ECX[0xf] != 0) {
        do {
          if ((*(int *)(in_ECX[0xe] + uVar3 * 4) != 0) &&
             (iVar2 = *(int *)(in_ECX[0xe] + uVar3 * 4), *(int *)(iVar2 + 8) != 0)) {
            FUN_0089ccc0(iVar2);
          }
          if (((*(int *)(in_ECX[0xe] + uVar3 * 4) != 0) &&
              (puVar1 = *(undefined4 **)(in_ECX[0xe] + uVar3 * 4), *(short *)(puVar1 + 1) != 0)) &&
             (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
             *(short *)((int)puVar1 + 6) == 0)) {
            (**(code **)*puVar1)(1);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)in_ECX[0xf]);
      }
      _memset((void *)in_ECX[0xe],0,in_ECX[0xf] * 4);
      in_ECX[0xf] = 0;
    }
  }
  return;
}



void FUN_0088a440(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  undefined1 uStack_1;
  
  if (in_ECX[0x11] != 0) {
    if (199 < (uint)in_ECX[0x11]) {
      in_ECX[0x11] = 200;
    }
    iVar2 = (**(code **)(*in_ECX + 0x58))();
    if (iVar2 != 0) {
      uVar3 = 0;
      if (in_ECX[0x11] != 0) {
        do {
          if ((*(int *)(in_ECX[0x10] + uVar3 * 4) != 0) &&
             (iVar2 = *(int *)(in_ECX[0x10] + uVar3 * 4), *(int *)(iVar2 + 8) != 0)) {
            FUN_008988f0(&uStack_1,iVar2);
          }
          if (((*(int *)(in_ECX[0x10] + uVar3 * 4) != 0) &&
              (puVar1 = *(undefined4 **)(in_ECX[0x10] + uVar3 * 4), *(short *)(puVar1 + 1) != 0)) &&
             (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
             *(short *)((int)puVar1 + 6) == 0)) {
            (**(code **)*puVar1)(1);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)in_ECX[0x11]);
      }
      _memset((void *)in_ECX[0x10],0,in_ECX[0x11] * 4);
      in_ECX[0x11] = 0;
    }
  }
  return;
}



void FUN_0088a4f0(void)

{
  undefined4 *in_ECX;
  
  FUN_008a9510();
  *in_ECX = &PTR_LAB_00a95cb0;
  in_ECX[4] = 0;
  in_ECX[5] = 0xc2932667;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[0x14] = 0x3dcccccd;
  in_ECX[9] = 0x7f7fffff;
  *(undefined1 *)((int)in_ECX + 0x95) = DAT_00b2e2dc;
  *(undefined1 *)(in_ECX + 0x23) = 0;
  *(undefined1 *)(in_ECX + 10) = 3;
  return;
}



void FUN_0088a570(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = &PTR_LAB_00a95c60;
  in_ECX[3] = &PTR_LAB_00a95c3c;
  in_ECX[4] = &PTR_LAB_00a95c48;
  in_ECX[5] = &PTR_LAB_00a95c68;
  *in_ECX = &PTR_FUN_00a95ce4;
  in_ECX[2] = &PTR_LAB_00a95cdc;
  in_ECX[3] = &PTR_LAB_00a95cd0;
  in_ECX[4] = &PTR_LAB_00a95cc4;
  in_ECX[5] = &PTR_LAB_00a95cbc;
  return;
}



void FUN_0088a5e0(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (in_ECX == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = in_ECX + 4;
  }
  *puVar1 = &PTR_LAB_00a95c48;
  if (in_ECX == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = in_ECX + 3;
  }
  *puVar1 = &PTR_LAB_00a95c3c;
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0088a630(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *in_ECX = *param_1;
  in_ECX[1] = uVar1;
  in_ECX[2] = uVar2;
  in_ECX[3] = uVar3;
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[8] = param_1[8];
  return;
}



void FUN_0088a660(float param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  if ((*(int *)(in_ECX + 8) != 0) && (iVar2 = 0, 0 < *(int *)(in_ECX + 100))) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x60) + iVar2 * 4);
      if ((piVar1 != (int *)0x0) && (param_1 != 0.0)) {
        (**(code **)(*piVar1 + 0x14))(param_1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 100));
  }
  return;
}



int FUN_0088a6b0(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d5deb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (in_ECX[3] == 0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xa0,0x2c,uVar1);
    *(undefined2 *)(iVar2 + 4) = 0xa0;
    uStack_4 = 0;
    iVar2 = FUN_0088a4f0();
    uStack_4 = 0xffffffff;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + 0xa0;
    }
    in_ECX[3] = iVar2;
    if (in_ECX[2] != 0) {
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + -0xa0;
      }
      (**(code **)(*in_ECX + 0x84))(iVar2);
    }
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  iVar2 = in_ECX[3];
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



void FUN_0088a790(void)

{
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 0x14) != 0) {
    iVar1 = *(int *)(in_ECX + 0x70);
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      FUN_008a7830(*(undefined4 *)(*(int *)(in_ECX + 0x6c) + 4 + iVar1 * 8),
                   *(undefined4 *)(*(int *)(in_ECX + 0x6c) + iVar1 * 8),0);
    }
  }
  *(undefined4 *)(in_ECX + 0x70) = 0;
  return;
}



void FUN_0088a7d0(int *param_1,int param_2,code *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_004a05e0(param_1);
    if (*(int *)(param_2 + 8) == 0) {
      *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xffef | 6;
    }
    if (iVar1 != 0) {
      (*param_3)(iVar1,param_2);
    }
    if ((*(char *)(param_2 + 4) != '\0') && (iVar1 = (**(code **)(*param_1 + 8))(), iVar1 != 0)) {
      uVar3 = 0;
      if (*(short *)(iVar1 + 0xb6) != 0) {
        if (*(short *)(iVar1 + 0xb6) != 0) goto LAB_0088a83d;
        uVar2 = 0;
        while( true ) {
          FUN_0088a7d0(uVar2,param_2,param_3);
          uVar3 = uVar3 + 1;
          if (*(ushort *)(iVar1 + 0xb6) <= uVar3) break;
LAB_0088a83d:
          uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xb0) + uVar3 * 4);
        }
      }
    }
  }
  return;
}



void FUN_0088a870(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[4];
  if (piVar3 != (int *)0x0) {
    if (param_2[6] == 0) {
      *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xffbf;
    }
    else {
      *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x40;
    }
    iVar1 = FUN_00560920(&DAT_00ba7a20,param_1);
    if (iVar1 != 0) {
      if (param_2[5] == 0) {
        *(ushort *)(iVar1 + 0xc) = *(ushort *)(iVar1 + 0xc) | 0x100;
      }
      else {
        *(ushort *)(iVar1 + 0xc) = *(ushort *)(iVar1 + 0xc) & 0xfeff;
      }
    }
    if ((*(byte *)(param_2 + 3) & 1) == 0) {
      *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xfffb;
    }
    else {
      *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 4;
      *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 8;
    }
    if (DAT_00b2e2d8 != '\0') {
      FUN_00889c20(piVar3,param_2);
    }
    iVar1 = (**(code **)(*(int *)*param_2 + 0x58))();
    iVar2 = (**(code **)(*piVar3 + 0x58))();
    if (iVar2 != iVar1) {
      if ((int *)*param_2 != (int *)0x0) {
        (**(code **)(*(int *)*param_2 + 0x58))();
      }
      (**(code **)(*piVar3 + 0x5c))(*param_2);
      if ((int *)*param_2 != (int *)0x0) {
        (**(code **)(*(int *)*param_2 + 0x58))();
      }
    }
    piVar3 = (int *)FUN_00452a60();
    (**(code **)(*piVar3 + 0x74))();
    if (*(char *)(*param_2 + 0x1a) != '\0') {
      (**(code **)(*param_1 + 0x7c))(1);
    }
  }
  param_2[3] = param_2[3] & 0xfffffffe;
  param_2[5] = param_2[5] + 1;
  return;
}



void FUN_0088ab60(int *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  
  if (param_1 != (int *)0x0) {
    for (puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[1]) {
      if (puVar2 == &DAT_00ba7a20) {
        bVar1 = 1;
        goto LAB_0088ab86;
      }
    }
    bVar1 = 0;
LAB_0088ab86:
    if ((-(uint)bVar1 & (uint)param_1) != 0) {
      if (*(int *)(param_2 + 0xc) != 0) {
        FUN_0088f0e0();
        return;
      }
      FUN_0088f160();
      return;
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0088ac20(int *param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&fStack_44;
  if (param_1 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    for (puVar5 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      if (puVar5 == &DAT_00ba7a20) {
        bVar4 = 1;
        goto LAB_0088ac66;
      }
    }
    bVar4 = 0;
LAB_0088ac66:
    uVar7 = -(uint)bVar4 & (uint)param_1;
  }
  piVar6 = (int *)param_1[4];
  if (piVar6 != (int *)0x0) {
    for (puVar5 = (undefined4 *)(**(code **)(*piVar6 + 4))(); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      if (puVar5 == &DAT_00ba7d84) {
        bVar4 = 1;
        goto LAB_0088aca4;
      }
    }
    bVar4 = 0;
LAB_0088aca4:
    piVar6 = (int *)(-(uint)bVar4 & (uint)piVar6);
    if ((piVar6 != (int *)0x0) && (pfVar2 = *(float **)(param_2 + 0xc), pfVar2 != (float *)0x0)) {
      fStack_30 = *pfVar2;
      fStack_2c = pfVar2[1];
      fStack_28 = pfVar2[2];
      fStack_24 = pfVar2[3];
      if ((uVar7 != 0) && (*(float *)(uVar7 + 0x14) < 1.0)) {
        fVar1 = *(float *)(uVar7 + 0x14);
        if (fVar1 == 0.0) {
          return;
        }
        fStack_44 = *(float *)(uVar7 + 0x18);
        fStack_30 = fStack_44 * fStack_30;
        fStack_2c = fStack_44 * fStack_2c;
        fStack_28 = fStack_44 * fStack_28;
        fStack_24 = fStack_44 * fStack_24;
        auVar3._4_4_ = -(uint)(0.001 < ABS(fStack_2c - DAT_00ba7a44));
        auVar3._0_4_ = -(uint)(0.001 < ABS(fStack_30 - DAT_00ba7a40));
        auVar3._8_4_ = -(uint)(0.001 < ABS(fStack_28 - DAT_00ba7a48));
        auVar3._12_4_ = -(uint)(0.001 < ABS(fStack_24 - fRam00ba7a4c));
        uVar7 = movmskps(CONCAT22((short)((uint)pfVar2 >> 0x10),
                                  (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                  (ushort)(fVar1 == 0.0) << 0xe),auVar3);
        if ((uVar7 & 7) == 0) {
          return;
        }
      }
      (**(code **)(*piVar6 + 0x8c))(&fStack_40);
      fStack_44 = fStack_44 + fStack_34;
      fStack_40 = fStack_40 + fStack_30;
      fStack_3c = fStack_3c + fStack_2c;
      fStack_38 = fStack_38 + fStack_28;
      (**(code **)(*piVar6 + 0x94))(&fStack_44);
    }
  }
  return;
}



void FUN_0088ad90(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  uint uVar4;
  undefined1 auStack_8 [8];
  
  if (in_ECX[0xd] != 0) {
    if (199 < (uint)in_ECX[0xd]) {
      in_ECX[0xd] = 200;
    }
    iVar1 = (**(code **)(*in_ECX + 0x58))();
    if (iVar1 != 0) {
      FUN_0089cd00(in_ECX[0xc],in_ECX[0xd]);
      uVar4 = 0;
      if (in_ECX[0xd] != 0) {
        do {
          iVar1 = *(int *)(in_ECX[0xc] + uVar4 * 4);
          if (iVar1 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(iVar1 + 0xc);
          }
          if (iVar2 == 0) {
            FUN_00899b30(iVar1);
          }
          else {
            *(byte *)(iVar2 + 0x10) = *(byte *)(iVar2 + 0x10) & 0xfe;
          }
          if (*(int *)(in_ECX[0xc] + uVar4 * 4) != 0) {
            piVar3 = (int *)FUN_0047f990(auStack_8,&DAT_00ba7b80);
            if ((int *)*piVar3 != (int *)0x0) {
              (**(code **)(*(int *)*piVar3 + 0x50))();
            }
          }
          FUN_008bc730();
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)in_ECX[0xd]);
      }
      _memset((void *)in_ECX[0xc],0,in_ECX[0xd] * 4);
      in_ECX[0xd] = 0;
    }
  }
  return;
}



void FUN_0088aeb0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d5e39;
  local_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_0089d3d0(uVar1);
  in_ECX[3] = 0;
  *in_ECX = (int)&PTR_FUN_00a95cf4;
  in_ECX[4] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = -0x80000000;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = -0x80000000;
  DAT_00ba7900 = DAT_00ba7900 + 1;
  local_14._0_1_ = 2;
  local_14._1_3_ = 0;
  *(undefined1 *)(in_ECX + 6) = 0;
  in_ECX[5] = 0;
  *(undefined1 *)((int)in_ECX + 0x19) = 0;
  *(undefined1 *)((int)in_ECX + 0x1a) = 0;
  in_ECX[9] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[0xb] = 0;
  pvVar2 = (void *)FUN_00401f00(12000);
  in_ECX[10] = (int)pvVar2;
  _memset(pvVar2,0,12000);
  in_ECX[0xd] = 0;
  pvVar2 = (void *)FUN_00401f00(800);
  in_ECX[0xc] = (int)pvVar2;
  _memset(pvVar2,0,800);
  in_ECX[0xf] = 0;
  pvVar2 = (void *)FUN_00401f00(400);
  in_ECX[0xe] = (int)pvVar2;
  _memset(pvVar2,0,400);
  in_ECX[0x11] = 0;
  pvVar2 = (void *)FUN_00401f00(800);
  in_ECX[0x10] = (int)pvVar2;
  _memset(pvVar2,0,800);
  in_ECX[0x13] = 0;
  pvVar2 = (void *)FUN_00401f00(12000);
  in_ECX[0x12] = (int)pvVar2;
  _memset(pvVar2,0,12000);
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0xa0;
  }
  FUN_00889a70(param_1);
  uVar3 = (**(code **)(*in_ECX + 0x58))();
  iVar4 = (**(code **)(*in_ECX + 0x58))();
  if (*(int *)(iVar4 + 0xb4) == 9) {
    iVar4 = FUN_00401f00(0x108);
    local_14 = CONCAT31(local_14._1_3_,3);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_008bafd0(uVar3,DAT_00b2e2d4);
    }
    in_ECX[4] = iVar4;
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0088b121) */

void FUN_0088b070(void)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00ba8040 == '\0') {
    PTR_LAB_00b2eb04 = &LAB_00889770;
    PTR_LAB_00b2eb08 = &LAB_006078c0;
    piVar3 = (int *)FUN_00401f00(0x2c,uVar2);
    local_4 = 0;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      FUN_008a7060();
      *piVar3 = (int)&PTR_LAB_00a95c70;
    }
    local_4 = 0xffffffff;
    FUN_008bba80(piVar3,0,_printf,0);
    piVar1 = piVar3 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*piVar3 + 0x34))(1);
    }
    puVar5 = *(undefined4 **)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x19c);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = DAT_00ba7d9c;
    }
    (**(code **)*puVar5)(&DAT_00b47900,0x60000);
    FUN_008a83c0();
    iVar4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x24);
    *(undefined2 *)(iVar4 + 4) = 0x18;
    DAT_00ba7904 = FUN_0088a570();
    FUN_00712590("bhkBoxShape",CreateObject);
    FUN_00712590("bhkConvexSweepShape",FUN_008c9c80);
    FUN_00712590("bhkConvexTransformShape",CreateObject);
    FUN_00712590("bhkConvexVerticesShape",CreateObject);
    FUN_00712590("bhkCylinderShape",CreateObject);
    FUN_00712590("bhkMultiSphereShape",FUN_008b7470);
    FUN_00712590("bhkMeshShape",FUN_008c62b0);
    FUN_00712590("bhkNiTriStripsShape",FUN_008c62b0);
    FUN_00712590("bhkPackedNiTriStripsShape",FUN_008c5160);
    FUN_00712590("hkPackedNiTriStripsData",FUN_008c4840);
    FUN_00712590("bhkPlaneShape",FUN_008c4210);
    FUN_00712590("bhkSphereShape",CreateObject);
    FUN_00712590("bhkTriangleShape",CreateObject);
    FUN_00712590("bhkMoppBvTreeShape",FUN_008c33c0);
    FUN_00712590("bhkTransformShape",FUN_008a1b80);
    FUN_00712590("bhkCapsuleShape",CreateObject);
    FUN_00712590("bhkListShape",FUN_008a0ef0);
    FUN_00712590("bhkBallAndSocketConstraint",FUN_008c2fb0);
    FUN_00712590("bhkHingeConstraint",FUN_008c2690);
    FUN_00712590("bhkFixedConstraint",FUN_008c2020);
    FUN_00712590("bhkLimitedHingeConstraint",FUN_008b2be0);
    FUN_00712590("bhkPrismaticConstraint",FUN_008c17b0);
    FUN_00712590("bhkRagdollConstraint",FUN_008c09e0);
    FUN_00712590("bhkStiffSpringConstraint",FUN_008c05c0);
    FUN_00712590("bhkWheelConstraint",FUN_008bfe90);
    FUN_00712590("bhkBreakableConstraint",FUN_008bf6c0);
    FUN_00712590("bhkMalleableConstraint",FUN_008befc0);
    FUN_00712590("bhkMouseSpringAction",FUN_0089e430);
    FUN_00712590("bhkMotorAction",FUN_008be8e0);
    FUN_00712590("bhkDashpotAction",FUN_008be240);
    FUN_00712590("bhkAngularDashpotAction",FUN_008bdce0);
    FUN_00712590("bhkSpringAction",FUN_008bd780);
    FUN_00712590("bhkAabbPhantom",FUN_008ba750);
    FUN_00712590("bhkCollisionObject",FUN_0089e960);
    FUN_00712590("bhkPCollisionObject",FUN_0089efc0);
    FUN_00712590("bhkSPCollisionObject",FUN_008b71b0);
    FUN_00712590("bhkBlendCollisionObject",FUN_0088ed20);
    FUN_00712590("bhkBlendController",CreateObject);
    FUN_00712590("bhkRigidBody",CreateObject);
    FUN_00712590("bhkRigidBodyT",FUN_008b97a0);
    FUN_00712590("bhkSimpleShapePhantom",CreateObject);
    FUN_00712590("bhkCachingShapePhantom",CreateObject);
    FUN_00712590("bhkExtraData",FUN_008bcf80);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



bool FUN_0088b430(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x58))();
  iVar1 = param_1;
  if ((iVar2 == 0) || (param_1 == 0)) {
    return false;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (in_ECX[8] == 0) {
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x18) & 0x30) == 0)) {
      pcVar3 = (char *)FUN_008996c0(&param_1,param_1);
      return *pcVar3 != '\0';
    }
  }
  else if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x18) & 0x30) == 0)) {
    *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 0x20;
    if (2999 < (uint)in_ECX[0x13]) {
      FUN_0088a440();
      FUN_0088a3a0();
      FUN_0088a310();
      FUN_0088a280();
    }
    FUN_008bc720();
    *(int *)(in_ECX[0x12] + in_ECX[0x13] * 4) = iVar1;
    in_ECX[0x13] = in_ECX[0x13] + 1;
    return true;
  }
  return true;
}



undefined1 FUN_0088b4e0(int param_1)

{
  int iVar1;
  int *in_ECX;
  undefined1 uVar2;
  
  uVar2 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x58))();
  if ((iVar1 != 0) && (param_1 != 0)) {
    uVar2 = 1;
    if (in_ECX[8] == 0) {
      if ((*(int *)(param_1 + 0xc) != 0) && ((*(byte *)(*(int *)(param_1 + 0xc) + 0x10) & 3) == 0))
      {
        FUN_00899b30(param_1);
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 != 0) {
        if ((*(byte *)(iVar1 + 0x10) & 3) == 0) {
          *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) | 2;
          if (199 < (uint)in_ECX[0xd]) {
            FUN_0088a440();
            FUN_0088a3a0();
            FUN_0088a310();
            FUN_0088a280();
          }
          FUN_008bc720();
          *(int *)(in_ECX[0xc] + in_ECX[0xd] * 4) = param_1;
          in_ECX[0xd] = in_ECX[0xd] + 1;
          return 1;
        }
      }
    }
  }
  return uVar2;
}



undefined1 FUN_0088b580(int param_1)

{
  int iVar1;
  int *in_ECX;
  undefined1 uVar2;
  
  iVar1 = (**(code **)(*in_ECX + 0x58))();
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = 0, param_1 != 0)) {
    uVar2 = 1;
    if (in_ECX[8] != 0) {
      if (99 < (uint)in_ECX[0xf]) {
        FUN_0088a440();
        FUN_0088a3a0();
        FUN_0088a310();
        FUN_0088a280();
      }
      if (*(short *)(param_1 + 4) != 0) {
        *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
      }
      *(int *)(in_ECX[0xe] + in_ECX[0xf] * 4) = param_1;
      in_ECX[0xf] = in_ECX[0xf] + 1;
      return 1;
    }
    FUN_0089ccc0(param_1);
  }
  return uVar2;
}



undefined1 FUN_0088b600(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  undefined1 uVar3;
  
  iVar2 = (**(code **)(*in_ECX + 0x58))();
  iVar1 = param_1;
  uVar3 = 0;
  if ((iVar2 != 0) && (uVar3 = 0, param_1 != 0)) {
    uVar3 = 1;
    if (in_ECX[8] != 0) {
      if (199 < (uint)in_ECX[0x11]) {
        FUN_0088a440();
        FUN_0088a3a0();
        FUN_0088a310();
        FUN_0088a280();
      }
      if (*(short *)(iVar1 + 4) != 0) {
        *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
      }
      *(int *)(in_ECX[0x10] + in_ECX[0x11] * 4) = iVar1;
      in_ECX[0x11] = in_ECX[0x11] + 1;
      return 1;
    }
    FUN_008988f0(&param_1,param_1);
  }
  return uVar3;
}



/* WARNING: Removing unreachable block (ram,0x0088b7c5) */
/* WARNING: Removing unreachable block (ram,0x0088b7df) */
/* WARNING: Removing unreachable block (ram,0x0088b7e5) */

void FUN_0088b680(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  int unaff_EBX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  uint uStack_28;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d5e7e;
  local_c = *unaff_FS_OFFSET;
  uStack_28 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == '\0') {
    if (in_ECX != (int *)0x0) {
      (**(code **)(*in_ECX + 0x58))();
    }
    if ((undefined4 *)in_ECX[5] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[5])(1);
    }
    (**(code **)(*in_ECX + 0x58))();
    in_ECX[5] = 0;
  }
  else if (in_ECX[5] == 0) {
    local_4 = 0;
    FUN_008cabf0();
    local_4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x74,0x32);
    *(undefined2 *)(local_4 + 4) = 0x74;
    local_c._0_1_ = 1;
    iVar1 = FUN_008cb220();
    local_c = (uint)local_c._1_3_ << 8;
    (**(code **)(*in_ECX + 0x58))();
    uVar2 = (**(code **)(*in_ECX + 0x58))();
    FUN_008cb070(uVar2);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + 8;
    }
    if (unaff_EBX == 0) {
      FUN_008a6ee0(&stack0xffffffe0,4);
    }
    *(int *)(unaff_ESI + unaff_EBX * 4) = iVar1;
    local_c = (**(code **)(*DAT_00ba7d98 + 0x10))(0x90,0x32);
    *(undefined2 *)(local_c + 4) = 0x90;
    iVar1 = FUN_008ca540(&uStack_28,0);
    in_ECX[5] = iVar1;
    (**(code **)(*in_ECX + 0x58))();
    FUN_008baa60(0x7d000);
    FUN_008ba9f0();
    FUN_008c9e20(0x61a9);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_0088b850(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *in_ECX;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_94 [11];
  char local_89;
  int local_88;
  int local_84;
  undefined **ppuStack_80;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d5eb0;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_94;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff60;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (DAT_00ba790a == '\0') {
    switch(*(uint *)(param_1 + 0x24) & 0x3f) {
    case 0x14:
      break;
    case 0x15:
    case 0x1b:
      DAT_00ba7924 = DAT_00ba7924 + 1;
      DAT_00ba7928 = DAT_00ba7928 + 1;
      if (DAT_00ba7928 < 0x1f) break;
      goto LAB_0088b8cf;
    default:
      DAT_00ba7924 = DAT_00ba7924 + 1;
      DAT_00ba7934 = *(uint *)(param_1 + 0x24) & 0x3f;
      break;
    case 0x1a:
      DAT_00ba7924 = DAT_00ba7924 + 1;
      DAT_00ba792c = DAT_00ba792c + 1;
      break;
    case 0x1d:
      DAT_00ba7924 = DAT_00ba7924 + 1;
      DAT_00ba7930 = DAT_00ba7930 + 1;
    }
    if (DAT_00b2e2f4 < DAT_00ba7924) {
LAB_0088b8cf:
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
      local_89 = '\0';
      goto LAB_0088bb0e;
    }
  }
  iVar8 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  puVar1 = *(undefined4 **)(iVar8 + 0x1a4);
  if (puVar1 < *(undefined4 **)(iVar8 + 0x1a8)) {
    *puVar1 = "TtPickObject";
    uVar2 = rdtsc();
    local_88 = (int)uVar2;
    puVar1[1] = local_88;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar1 + 3;
  }
  local_89 = '\0';
  local_84 = iVar8;
  iVar7 = (**(code **)(*in_ECX + 0x58))(uVar6);
  if (iVar7 != 0) {
    FUN_0043f450();
    *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar8 = *(int *)(param_1 + 0x78);
    if (iVar8 == 0) {
      iVar8 = *(int *)(param_1 + 0x74);
      if (iVar8 == 0) {
        FUN_00898ed0(param_1,param_1 + 0x30);
        local_89 = *(int *)(param_1 + 0x50) != 0;
      }
      else {
        local_88 = iVar8 + 0x10;
        *(undefined4 *)(iVar8 + 0x24) = 0x3f800000;
        *(undefined4 *)(iVar8 + 0x30) = 0;
        *(undefined4 *)(iVar8 + 4) = 0x3f800000;
        if (*(int *)(param_1 + 0x70) == 0) {
          FUN_008987e0(param_1,iVar8);
        }
        else {
          ppuStack_80 = &PTR_LAB_00a74c80;
          uStack_40 = 0;
          uStack_3c = 0;
          uStack_14 = 1;
          FUN_008ba1b0(*(undefined4 *)(iVar7 + 100),param_1,*(undefined4 *)(iVar7 + 0x78),
                       *(int *)(param_1 + 0x70),iVar8);
          uStack_14 = 0xffffffff;
        }
        if (*(int *)(iVar8 + 0x30) != 0) {
          FUN_0088a630(local_88);
          local_89 = '\x01';
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x70) == 0) {
        FUN_008987e0(param_1,iVar8);
      }
      else {
        ppuStack_80 = &PTR_LAB_00a74c80;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_14 = 0;
        FUN_008ba1b0(*(undefined4 *)(iVar7 + 100),param_1,*(undefined4 *)(iVar7 + 0x78),
                     *(int *)(param_1 + 0x70),iVar8);
        uStack_14 = 0xffffffff;
      }
      if (*(int *)(iVar8 + 0x14) != 0) {
        FUN_008b22f0();
        puVar1 = *(undefined4 **)(iVar8 + 0x10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(param_1 + 0x30) = *puVar1;
        *(undefined4 *)(param_1 + 0x34) = uVar3;
        *(undefined4 *)(param_1 + 0x38) = uVar4;
        *(undefined4 *)(param_1 + 0x3c) = uVar5;
        *(undefined4 *)(param_1 + 0x40) = puVar1[4];
        *(undefined4 *)(param_1 + 0x44) = puVar1[5];
        *(undefined4 *)(param_1 + 0x50) = puVar1[8];
        local_89 = '\x01';
      }
    }
    FUN_008a78e0(param_1,param_1 + 0x10,(-(uint)(local_89 != '\0') & 0x767877) - 0x777778,0);
    iVar8 = local_84;
  }
  puVar1 = *(undefined4 **)(iVar8 + 0x1a4);
  if (puVar1 < *(undefined4 **)(iVar8 + 0x1a8)) {
    *puVar1 = &DAT_00a9610c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar1 + 3;
  }
LAB_0088bb0e:
  *unaff_FS_OFFSET = local_1c;
  return local_89;
}



void FUN_0088bb60(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 8) == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 8) + 0x14;
  }
  if (*(uint *)(in_ECX + 0x70) == (*(uint *)(in_ECX + 0x74) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x6c),8);
  }
  iVar1 = *(int *)(in_ECX + 0x70);
  iVar2 = *(int *)(in_ECX + 0x6c);
  *(int *)(iVar2 + iVar1 * 8) = iVar3;
  *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = param_2;
  *(int *)(in_ECX + 0x70) = *(int *)(in_ECX + 0x70) + 1;
  return;
}



void FUN_0088bbb0(undefined4 param_1,int param_2)

{
  if ((&PTR_FUN_00b2e300)[*(int *)(param_2 + 8)] != (undefined *)0x0) {
    FUN_0088a7d0(param_1,param_2,(&PTR_FUN_00b2e300)[*(int *)(param_2 + 8)]);
  }
  return;
}



void FUN_0088bc20(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d5ee8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*in_ECX + 0x58))(uVar1);
  if (iVar2 != 0) {
    (**(code **)(*in_ECX + 0x58))();
    puVar7 = (undefined4 *)0x0;
    iStack_10 = -0x80000000;
    iVar3 = *(int *)(iVar2 + 0x3c);
    uStack_4 = 0;
    if (0 < iVar3) {
      puVar7 = (undefined4 *)FUN_008a7560(iVar3 * 4,0x14);
      iVar3 = *(int *)(iVar2 + 0x3c);
      iStack_10 = iVar3;
    }
    iVar6 = *(int *)(iVar2 + 0x38);
    if (0 < iVar3) {
      puVar4 = puVar7;
      iVar5 = iVar3;
      do {
        *puVar4 = *(undefined4 *)((iVar6 - (int)puVar7) + (int)puVar4);
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        FUN_008cbbb0(iVar2,puVar7[iVar6]);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
    (**(code **)(*in_ECX + 0x58))();
    uStack_4 = 0xffffffff;
    if (-1 < iStack_10) {
      FUN_008a75d0(puVar7,iStack_10 * 4,0x14);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0088bd60(char param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    if (*(int *)(in_ECX + 0x4c) == 0) {
      return;
    }
    if (param_1 != '\0') {
      return;
    }
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x20) + -1;
    *(int *)(in_ECX + 0x20) = iVar1;
    if (iVar1 != 0) {
      return;
    }
    FUN_0088a440();
    FUN_0088a3a0();
    FUN_0088a310();
    if (param_1 != '\0') {
      FUN_0088a280();
      return;
    }
  }
  FUN_0088a1f0();
  return;
}



void FUN_0088bdb0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d5f2e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = (int)&PTR_FUN_00a95cf4;
  DAT_00ba7900 = DAT_00ba7900 + -1;
  local_4 = 2;
  (**(code **)(*in_ECX + 0x58))(uVar2);
  if ((undefined4 *)in_ECX[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[5])(1);
  }
  (**(code **)(*in_ECX + 0x58))();
  iVar3 = in_ECX[4];
  in_ECX[5] = 0;
  if (iVar3 != 0) {
    FUN_008bacc0();
    FUN_00401f20(iVar3);
    in_ECX[4] = 0;
  }
  (**(code **)(*in_ECX + 0x58))();
  FUN_0089d700();
  (**(code **)(*in_ECX + 0x58))();
  FUN_00401f20(in_ECX[10]);
  FUN_00401f20(in_ECX[0xc]);
  FUN_00401f20(in_ECX[0xe]);
  FUN_00401f20(in_ECX[0x10]);
  FUN_00401f20(in_ECX[0x12]);
  if (0 < in_ECX[0x19]) {
    iVar3 = 0;
    do {
      puVar1 = *(undefined4 **)(in_ECX[0x18] + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_ECX[0x19]);
  }
  in_ECX[0x19] = 0;
  local_4._0_1_ = 1;
  if (-1 < in_ECX[0x1d]) {
    FUN_008a75d0(in_ECX[0x1b],in_ECX[0x1d] * 8,0x14);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (-1 < in_ECX[0x1a]) {
    FUN_008a75d0(in_ECX[0x18],in_ECX[0x1a] * 4,0x14);
  }
  local_4 = 0xffffffff;
  FUN_0089d780();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0088bf40(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0089d820(param_1);
  param_1 = FUN_0070f910(DAT_00ba7938);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0x19));
  param_1 = FUN_0070f950("Enabled",param_1);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*(int *)(in_ECX + 0x14) != 0);
  param_1 = FUN_0070f950("Vis Debug",param_1);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("Worlds",DAT_00ba7900);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("Actions",DAT_00ba7d00);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("Contraints",DAT_00ba7d4c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("Entities",DAT_00ba7f8c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("RigidBodies",DAT_00ba7d80);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("Shapes",DAT_00ba7d70);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("Phantoms",DAT_00ba7f5c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("MoppBVTreeShapes",DAT_00ba80f4);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0088c210(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  if ((in_ECX != (int *)0x0) && (iVar1 = (**(code **)(*in_ECX + 0x58))(), iVar1 != 0)) {
    if (*(char *)(param_1 + 0x2c) == '\x01') {
      if (in_ECX[7] == 0) {
        if ((*(int *)(param_1 + 0xc) != 0) &&
           ((*(byte *)(*(int *)(param_1 + 0xc) + 0x18) & 0x30) == 0)) {
          FUN_008994e0(param_1,1);
          return;
        }
      }
      else {
        if (2999 < (uint)in_ECX[0xb]) {
          FUN_00889f20(0);
          FUN_0088ad90();
          FUN_0088a080();
          FUN_0088a120();
        }
        iVar1 = *(int *)(param_1 + 0xc);
        if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x18) & 0x30) == 0)) {
          *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x10;
          FUN_008bc720();
          *(int *)(in_ECX[10] + in_ECX[0xb] * 4) = param_1;
          in_ECX[0xb] = in_ECX[0xb] + 1;
          return;
        }
      }
    }
    else if (in_ECX[7] == 0) {
      if ((*(int *)(param_1 + 0xc) != 0) && ((*(byte *)(*(int *)(param_1 + 0xc) + 0x10) & 3) == 0))
      {
        FUN_00899a50(param_1);
      }
    }
    else {
      if (199 < (uint)in_ECX[0xd]) {
        FUN_00889f20(0);
        FUN_0088ad90();
        FUN_0088a080();
        FUN_0088a120();
      }
      iVar1 = *(int *)(param_1 + 0xc);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x10) & 3) == 0)) {
        *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) | 1;
        FUN_008bc720();
        *(int *)(in_ECX[0xc] + in_ECX[0xd] * 4) = param_1;
        in_ECX[0xd] = in_ECX[0xd] + 1;
        return;
      }
    }
  }
  return;
}



void FUN_0088c330(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    iVar1 = (**(code **)(*in_ECX + 0x58))();
    if (iVar1 != 0) {
      if (in_ECX[7] == 0) {
        if ((((param_1 != 0) && (*(int *)(param_1 + 8) == 0)) &&
            ((*(int *)(param_1 + 0x10) == 0 || (*(int *)(*(int *)(param_1 + 0x10) + 0x54) != 0))))
           && ((*(int *)(param_1 + 0x14) == 0 || (*(int *)(*(int *)(param_1 + 0x14) + 0x54) != 0))))
        {
          FUN_008988a0();
          return;
        }
      }
      else {
        if (199 < (uint)in_ECX[0x11]) {
          FUN_00889e20();
          FUN_0088ad90();
          FUN_0088a080();
          FUN_0088a120();
        }
        if (*(short *)(param_1 + 4) != 0) {
          *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
        }
        *(int *)(in_ECX[0x10] + in_ECX[0x11] * 4) = param_1;
        in_ECX[0x11] = in_ECX[0x11] + 1;
      }
    }
  }
  return;
}



void FUN_0088c3d0(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    iVar1 = (**(code **)(*in_ECX + 0x58))();
    if (iVar1 != 0) {
      if (in_ECX[7] == 0) {
        FUN_0089bae0();
        return;
      }
      if (99 < (uint)in_ECX[0xf]) {
        FUN_00889f20(0);
        FUN_0088ad90();
        FUN_0088a080();
        FUN_0088a120();
      }
      if (*(short *)(param_1 + 4) != 0) {
        *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
      }
      *(int *)(in_ECX[0xe] + in_ECX[0xf] * 4) = param_1;
      in_ECX[0xf] = in_ECX[0xf] + 1;
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0088c600(float *param_1)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 auStack_68 [2];
  int iStack_60;
  float local_5c;
  float local_58;
  float local_54;
  float afStack_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_28;
  uint local_24;
  undefined4 uStack_20;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_009d5f58;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_68;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_5c = 0.0;
  local_58 = 0.0;
  local_54 = -0.0;
  local_40 = *param_1 - (float)in_ECX[0x14];
  fStack_3c = param_1[1] - (float)in_ECX[0x15];
  fStack_38 = param_1[2] - (float)in_ECX[0x16];
  fStack_34 = param_1[3] - (float)in_ECX[0x17];
  local_14 = 0;
  iVar2 = (**(code **)(*in_ECX + 0x58))(uVar1);
  (**(code **)(*in_ECX + 0x58))();
  (**(code **)(**(int **)(iVar2 + 100) + 0x34))(&local_40,afStack_50,&local_5c);
  in_ECX[0x14] = (int)((float)in_ECX[0x14] + local_5c);
  in_ECX[0x15] = (int)((float)in_ECX[0x15] + local_58);
  in_ECX[0x16] = (int)((float)in_ECX[0x16] + local_54);
  in_ECX[0x17] = (int)((float)in_ECX[0x17] + afStack_50[0]);
  *(float *)(iVar2 + 0x280) = *(float *)(iVar2 + 0x280) + local_5c;
  *(float *)(iVar2 + 0x284) = *(float *)(iVar2 + 0x284) + local_58;
  *(float *)(iVar2 + 0x288) = *(float *)(iVar2 + 0x288) + local_54;
  *(float *)(iVar2 + 0x28c) = *(float *)(iVar2 + 0x28c) + afStack_50[0];
  *(float *)(iVar2 + 0x290) = *(float *)(iVar2 + 0x290) + local_5c;
  *(float *)(iVar2 + 0x294) = *(float *)(iVar2 + 0x294) + local_58;
  *(float *)(iVar2 + 0x298) = *(float *)(iVar2 + 0x298) + local_54;
  *(float *)(iVar2 + 0x29c) = *(float *)(iVar2 + 0x29c) + afStack_50[0];
  (**(code **)(*in_ECX + 0x58))();
  uStack_20 = 0xffffffff;
  if (-1 < iStack_60) {
    FUN_008a75d0(auStack_68[0],iStack_60 * 4,0x14);
  }
  *unaff_FS_OFFSET = iStack_28;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_0088c740(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int *piVar16;
  int *piVar17;
  undefined4 *puVar18;
  int *unaff_FS_OFFSET;
  undefined1 auStack_124 [8];
  int *piStack_11c;
  int *local_118;
  byte local_111;
  int local_110;
  int *local_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined1 auStack_a0 [8];
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined1 auStack_70 [76];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  int iStack_14;
  
  iStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d5f99;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_124;
  uVar11 = DAT_00b30aac ^ (uint)&stack0xfffffed0;
  *unaff_FS_OFFSET = (int)&local_1c;
  piVar13 = &local_100;
  local_110 = param_2;
  local_111 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar12 = FUN_006fa970(param_2,uVar11);
    if ((iVar12 != 0) && ((*(uint *)(iVar12 + 0xc) & 2) != 0)) {
      local_108 = 0;
      piVar13 = (int *)FUN_004a05e0(param_1);
      local_10c = piVar13;
      if (piVar13 != (int *)0x0) {
        local_118 = (int *)piVar13[4];
        local_108 = 1;
        if ((local_118 != (int *)0x0) && (cVar10 = (**(code **)(*piVar13 + 0x74))(), cVar10 == '\0')
           ) {
          *(undefined1 *)(local_104 + 0x18) = 1;
          local_111 = 1;
          if (param_2 != param_1) {
            piVar16 = (int *)0x0;
            cVar10 = FUN_00405650(&DAT_00ba8018,local_118);
            piVar17 = local_118;
            if (cVar10 == '\0') {
              uVar14 = FUN_00560920(&DAT_00ba7d84,local_118);
              FUN_00405070(uVar14);
              iStack_14 = 0;
              if (local_118 != (int *)0x0) {
                FUN_00897670(0);
                iStack_e4 = FUN_008896a0(0x40);
                iStack_14._0_1_ = 1;
                if (iStack_e4 == 0) {
                  piVar16 = (int *)0x0;
                }
                else {
                  piVar16 = (int *)FUN_008b96d0(local_118);
                }
                iStack_14 = (uint)iStack_14._1_3_ << 8;
                (**(code **)(*local_118 + 0x8c))(&iStack_80);
                (**(code **)(*piStack_11c + 0x90))(&iStack_94);
                pcVar3 = *(code **)(*piVar16 + 0x94);
                piVar16[0xc] = iStack_88;
                piVar16[0xd] = iStack_84;
                piVar16[0xe] = iStack_80;
                piVar16[0xf] = iStack_7c;
                piVar16[8] = iStack_98;
                piVar16[9] = iStack_94;
                piVar16[10] = iStack_90;
                piVar16[0xb] = iStack_8c;
                (*pcVar3)(&DAT_00ba7a40);
                (**(code **)(*piVar16 + 0x98))(&DAT_00b2f080);
                FUN_00897670(piVar16);
                piVar13 = local_10c;
              }
              FUN_0075fa90(0);
              iStack_14 = 0xffffffff;
              FUN_007016a0();
              piVar17 = piVar16;
            }
            if (piVar17 == (int *)0x0) {
              FUN_00435ce0(piVar13);
              FUN_00435ce0(0);
              puVar15 = &DAT_00b26dc4;
              puVar18 = (undefined4 *)(param_1 + 0x30);
              for (iVar12 = 9; iVar12 != 0; iVar12 = iVar12 + -1) {
                *puVar18 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar18 = puVar18 + 1;
              }
              *(undefined4 *)(param_1 + 0x54) = DAT_00b3f9a8;
              *(undefined4 *)(param_1 + 0x58) = DAT_00b3f9ac;
              *(undefined4 *)(param_1 + 0x5c) = DAT_00b3f9b0;
              *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xffef | 6;
              param_2 = local_110;
            }
            else {
              FUN_005398e0(auStack_70,param_1 + 0x30);
              fVar5 = (float)piVar17[0xc];
              fVar6 = (float)piVar17[0xd];
              fVar7 = (float)piVar17[0xe];
              fVar8 = (float)piVar17[0xf];
              pfVar1 = (float *)(piVar17 + 8);
              local_118 = (int *)((float)piVar17[0xb] * 2.0);
              fVar2 = (float)piVar17[0xb] * (float)local_118 - 1.0;
              fVar9 = *pfVar1;
              fStack_dc = (float)piVar17[9];
              fStack_d8 = (float)piVar17[10];
              uStack_d4 = 0;
              fStack_e0 = fStack_d8 * fVar7 + fStack_dc * fVar6 + fVar9 * fVar5;
              fVar4 = fStack_e0 * 2.0;
              fStack_d0 = (fStack_dc * fVar7 - fStack_d8 * fVar6) * (float)local_118 +
                          fVar4 * fVar9 + fVar2 * fVar5;
              fStack_cc = (fStack_d8 * fVar5 - fVar9 * fVar7) * (float)local_118 +
                          fVar4 * fStack_dc + fVar2 * fVar6;
              fStack_c8 = (fVar9 * fVar6 - fStack_dc * fVar5) * (float)local_118 +
                          fVar4 * fStack_d8 + fVar2 * fVar7;
              fStack_c4 = (fVar8 * 0.0 - fVar8 * 0.0) * (float)local_118 +
                          fVar4 * 0.0 + fVar2 * fVar8;
              FUN_0088fcc0(auStack_70,&fStack_d0);
              FUN_008b1b40(auStack_70);
              FUN_00889470(pfVar1,auStack_a0);
              fVar2 = (float)piVar17[0xb];
              fVar5 = fVar2 * fVar2 * 2.0 - 1.0;
              fVar6 = *pfVar1;
              fStack_dc = (float)piVar17[9];
              fStack_d8 = (float)piVar17[10];
              uStack_d4 = 0;
              fStack_e0 = fStack_d8 * fStack_b8 + fStack_dc * fStack_bc + fVar6 * fStack_c0;
              fVar4 = fStack_e0 * 2.0;
              local_118 = (int *)(-fVar2 * 2.0);
              fStack_d0 = (fStack_dc * fStack_b8 - fStack_d8 * fStack_bc) * (float)local_118 +
                          fVar4 * fVar6 + fVar5 * fStack_c0;
              fStack_cc = (fStack_d8 * fStack_c0 - fVar6 * fStack_b8) * (float)local_118 +
                          fVar4 * fStack_dc + fVar5 * fStack_bc;
              fStack_c8 = (fVar6 * fStack_bc - fStack_dc * fStack_c0) * (float)local_118 +
                          fVar4 * fStack_d8 + fVar5 * fStack_b8;
              fStack_c4 = (fStack_b4 * 0.0 - fStack_b4 * 0.0) * (float)local_118 +
                          fVar4 * 0.0 + fVar5 * fStack_b4;
              piVar17[0xc] = (int)fStack_d0;
              piVar17[0xd] = (int)fStack_cc;
              piVar17[0xe] = (int)fStack_c8;
              piVar17[0xf] = (int)fStack_c4;
              *pfVar1 = fStack_b0;
              piVar17[9] = iStack_ac;
              piVar17[10] = iStack_a8;
              piVar17[0xb] = iStack_a4;
              FUN_00435ce0(local_10c);
              FUN_00435ce0(0);
              *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xffef | 6;
              param_2 = local_110;
            }
          }
        }
      }
      local_100 = local_104;
      local_fc = 1;
      if (DAT_00ba7908 != '\0') {
        local_f8 = 10;
        FUN_0088bbb0(param_2,&local_100);
      }
      uStack_f4 = local_108;
      local_f8 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_e8 = 1;
      if (PTR_FUN_00b2e300 != (undefined *)0x0) {
        FUN_0088a7d0(param_2,&local_100,PTR_FUN_00b2e300);
      }
    }
    piVar13 = (int *)(uint)local_111;
  }
  *unaff_FS_OFFSET = local_1c;
  return piVar13;
}



undefined4 FUN_0088cc80(int param_1,undefined1 param_2,char param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  int in_ECX;
  undefined1 local_1c [4];
  undefined1 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_5 == '\0') {
    iVar1 = FUN_006fa970(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(uint *)(iVar1 + 0xc) & 2) == 0) {
      return 0;
    }
  }
  *(undefined1 *)(in_ECX + 0x18) = 1;
  local_18 = param_2;
  if ((DAT_00ba7908 != '\0') && (local_14 = 10, PTR_LAB_00b2e328 != (undefined *)0x0)) {
    FUN_0088a7d0(param_1,local_1c,PTR_LAB_00b2e328);
  }
  local_10 = (uint)(param_3 != '\0');
  if (*(int *)(param_1 + 0xa8) == 0) {
    local_10 = 0;
  }
  local_14 = 0;
  local_c = param_4;
  local_8 = 0;
  local_4 = 1;
  if (PTR_FUN_00b2e300 != (undefined *)0x0) {
    FUN_0088a7d0(param_1,local_1c,PTR_FUN_00b2e300);
  }
  return 1;
}



char FUN_0088cd50(int param_1,undefined1 param_2,char param_3)

{
  int iVar1;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  
  if ((param_1 != 0) &&
     ((param_3 != '\0' ||
      ((iVar1 = FUN_006fa970(param_1), iVar1 != 0 && ((*(uint *)(iVar1 + 0xc) & 2) != 0)))))) {
    local_18 = param_2;
    local_1c = 0;
    local_14 = 1;
    if (PTR_LAB_00b2e304 != (undefined *)0x0) {
      FUN_0088a7d0(param_1,&local_1c,PTR_LAB_00b2e304);
    }
    return param_3;
  }
  return '\0';
}



undefined1 FUN_0088cdc0(int param_1,undefined1 param_2,char param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (param_3 == '\0') {
      iVar1 = FUN_006fa970(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      if ((*(uint *)(iVar1 + 0xc) & 2) == 0) {
        return 0;
      }
    }
    local_18 = param_2;
    uVar2 = 1;
    local_1c = 0;
    local_14 = 2;
    if (PTR_LAB_00b2e308 != (undefined *)0x0) {
      FUN_0088a7d0(param_1,&local_1c,PTR_LAB_00b2e308);
    }
  }
  return uVar2;
}



undefined1 FUN_0088ce30(int param_1,char param_2,undefined1 param_3,char param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  uint local_10;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (param_4 == '\0') {
      iVar1 = FUN_006fa970(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      if ((*(uint *)(iVar1 + 0xc) & 2) == 0) {
        return 0;
      }
    }
    local_18 = param_3;
    local_10 = (uint)(param_2 != '\0');
    uVar2 = 1;
    local_1c = 0;
    local_14 = 0xd;
    if (PTR_FUN_00b2e334 != (undefined *)0x0) {
      FUN_0088a7d0(param_1,&local_1c,PTR_FUN_00b2e334);
    }
  }
  return uVar2;
}



undefined1 FUN_0088ceb0(int param_1,byte param_2,undefined1 param_3,char param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  uint local_10;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (param_4 == '\0') {
      iVar1 = FUN_006fa970(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      if ((*(uint *)(iVar1 + 0xc) & 2) == 0) {
        return 0;
      }
    }
    local_10 = (uint)param_2;
    local_18 = param_3;
    uVar2 = 1;
    local_1c = 0;
    local_14 = 3;
    if (PTR_DAT_00b2e30c != (undefined *)0x0) {
      FUN_0088a7d0(param_1,&local_1c,PTR_DAT_00b2e30c);
    }
  }
  return uVar2;
}



undefined1 FUN_0088cf20(int param_1,byte param_2,undefined1 param_3,char param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  uint local_10;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (param_4 == '\0') {
      iVar1 = FUN_006fa970(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      if ((*(uint *)(iVar1 + 0xc) & 2) == 0) {
        return 0;
      }
    }
    local_10 = (uint)param_2;
    local_18 = param_3;
    uVar2 = 1;
    local_1c = 0;
    local_14 = 0xe;
    if (PTR_LAB_00b2e338 != (undefined *)0x0) {
      FUN_0088a7d0(param_1,&local_1c,PTR_LAB_00b2e338);
    }
  }
  return uVar2;
}



undefined1 FUN_0088cf90(int param_1,byte param_2,undefined1 param_3,char param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  uint local_10;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (param_4 == '\0') {
      iVar1 = FUN_006fa970(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      if ((*(uint *)(iVar1 + 0xc) & 2) == 0) {
        return 0;
      }
    }
    local_10 = (uint)param_2;
    local_18 = param_3;
    uVar2 = 1;
    local_1c = 0;
    local_14 = 0xc;
    if (PTR_LAB_00b2e330 != (undefined *)0x0) {
      FUN_0088a7d0(param_1,&local_1c,PTR_LAB_00b2e330);
    }
  }
  return uVar2;
}



undefined1 FUN_0088d000(int param_1,undefined1 param_2,char param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (param_3 == '\0') {
      iVar1 = FUN_006fa970(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      if ((*(uint *)(iVar1 + 0xc) & 2) == 0) {
        return 0;
      }
    }
    local_18 = param_2;
    uVar2 = 1;
    local_1c = 0;
    local_14 = 4;
    if (PTR_DAT_00b2e310 != (undefined *)0x0) {
      FUN_0088a7d0(param_1,&local_1c,PTR_DAT_00b2e310);
    }
  }
  return uVar2;
}



undefined1 FUN_0088d070(int param_1,undefined4 param_2,undefined1 param_3,char param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (param_4 == '\0') {
      iVar1 = FUN_006fa970(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      if ((*(uint *)(iVar1 + 0xc) & 2) == 0) {
        return 0;
      }
    }
    local_18 = param_3;
    uVar2 = 1;
    local_1c = 0;
    local_14 = 5;
    local_10 = param_2;
    if (PTR_LAB_00b2e314 != (undefined *)0x0) {
      FUN_0088a7d0(param_1,&local_1c,PTR_LAB_00b2e314);
    }
  }
  return uVar2;
}



undefined1 FUN_0088d0e0(int param_1,undefined4 param_2,undefined1 param_3,char param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (param_4 == '\0') {
      iVar1 = FUN_006fa970(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      if ((*(uint *)(iVar1 + 0xc) & 2) == 0) {
        return 0;
      }
    }
    local_18 = param_3;
    uVar2 = 1;
    local_1c = 0;
    local_14 = 7;
    local_10 = param_2;
    if (PTR_LAB_00b2e31c != (undefined *)0x0) {
      FUN_0088a7d0(param_1,&local_1c,PTR_LAB_00b2e31c);
    }
  }
  return uVar2;
}



bool FUN_0088d150(int param_1,undefined1 param_2,char param_3)

{
  int iVar1;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  int local_10;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_3 == '\0') {
    iVar1 = FUN_006fa970(param_1);
    if (iVar1 == 0) {
      return false;
    }
    if ((*(uint *)(iVar1 + 0xc) & 2) == 0) {
      return false;
    }
  }
  local_18 = param_2;
  local_1c = 0;
  local_14 = 8;
  local_10 = 0;
  if (PTR_LAB_00b2e320 != (undefined *)0x0) {
    FUN_0088a7d0(param_1,&local_1c,PTR_LAB_00b2e320);
  }
  return local_10 != 0;
}



void FUN_0088d1d0(char param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c) == 0) {
    if ((*(int *)(in_ECX + 0x2c) != 0) && (param_1 == '\0')) {
      FUN_00889e20();
    }
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x1c) + -1;
    *(int *)(in_ECX + 0x1c) = iVar1;
    if (iVar1 == 0) {
      if (param_1 == '\0') {
        FUN_00889e20();
      }
      else {
        FUN_00889f20(0);
      }
      FUN_0088ad90();
      FUN_0088a080();
      FUN_0088a120();
      return;
    }
  }
  return;
}



void FUN_0088d230(byte param_1)

{
  int in_ECX;
  
  FUN_0088bdb0();
  if (((param_1 & 1) != 0) && (in_ECX != 0)) {
    FUN_00401e40(in_ECX - (uint)*(byte *)(in_ECX + -1));
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0088d260(float *param_1)

{
  float local_30;
  float local_2c;
  float local_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_30;
  local_30 = *param_1 * 0.14287673;
  local_2c = param_1[1] * 0.14287673;
  local_28 = param_1[2] * 0.14287673;
  FUN_0088c600(&local_30);
  return;
}



void FUN_0088d310(int param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a96248;
  in_ECX[2] = param_1;
  in_ECX[3] = param_2;
  if (*(short *)(param_1 + 4) != 0) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  return;
}



void FUN_0088d340(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[2];
  *in_ECX = &PTR_FUN_00a96248;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



undefined4 FUN_0088d370(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}



void FUN_0088d380(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[2];
  *in_ECX = &PTR_FUN_00a96248;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_0088d3d0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined2 extraout_var;
  undefined4 uVar6;
  float fVar7;
  undefined1 auStack_38 [8];
  float local_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_38;
  piVar4 = (int *)param_1[3];
  piVar3 = param_1;
  while (piVar2 = piVar4, piVar2 != (int *)0x0) {
    piVar3 = piVar2;
    piVar4 = (int *)piVar2[3];
  }
  uVar5 = 0;
  if (((char)piVar3[6] == '\x01') && (uVar5 = FUN_008afc40(param_1), uVar5 != 0)) {
    if (*(int *)(uVar5 + 8) == 0) {
      if ((int *)param_1[3] != (int *)0x0) {
        iVar1 = *(int *)param_1[3];
        if (iVar1 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(iVar1 + 8);
        }
        uVar5 = FUN_00435cc0(&DAT_00ba7fa8,uVar6);
        if ((char)uVar5 != '\0') {
          fVar7 = *(float *)(*(int *)(param_2 + 0x10) + 0x18);
          uVar5 = CONCAT22((short)((uint)*(int *)(param_2 + 0x10) >> 0x10),
                           (ushort)(0.0 < fVar7) << 8 | (ushort)NAN(fVar7) << 10 |
                           (ushort)(fVar7 == 0.0) << 0xe);
          if (0.0 >= fVar7 && (fVar7 == 0.0) == 0) {
            return CONCAT31((int3)(uVar5 >> 8),1);
          }
        }
      }
    }
    else {
      FUN_0088fe00(param_1[2],*param_1 + 0x40);
      iVar1 = *(int *)(param_2 + 0x10);
      fVar7 = *(float *)(iVar1 + 0x18) * fStack_28 +
              *(float *)(iVar1 + 0x14) * fStack_2c + *(float *)(iVar1 + 0x10) * local_30;
      uVar5 = CONCAT22(extraout_var,
                       (ushort)(0.0 < fVar7) << 8 | (ushort)NAN(fVar7) << 10 |
                       (ushort)(fVar7 == 0.0) << 0xe);
      if (0.0 >= fVar7 && (fVar7 == 0.0) == 0) {
        return CONCAT31((int3)(uVar5 >> 8),1);
      }
    }
  }
  return uVar5 & 0xffffff00;
}



void FUN_0088d4e0(undefined4 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_0088d3d0(*param_1,param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_0088d3d0(param_1[1],param_1), cVar1 == '\0')) {
    return;
  }
  param_1[7] = 1;
  return;
}



void FUN_0088d560(char param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (param_1 != *(char *)(in_ECX + 0x68)) {
    piVar1 = *(int **)(in_ECX + 8);
    *(char *)(in_ECX + 0x68) = param_1;
    if ((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0xfd) == '\0')) {
      if (param_1 != '\0') {
        (**(code **)(*piVar1 + 0x3c))();
        return;
      }
      (**(code **)(*piVar1 + 0x30))();
      (**(code **)(*piVar1 + 0x38))();
    }
  }
  return;
}



char FUN_0088d5a0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  
  cVar1 = '\0';
  if ((*(char *)(in_ECX + 0x68) == '\0') && (cVar1 = FUN_0089f470(param_1), cVar1 != '\0')) {
    uVar2 = FUN_008aeb80(0x1e,0x82,0,0x14);
    FUN_0088bb60(in_ECX,uVar2);
  }
  return cVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_0088d5e0(float *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int in_ECX;
  
  fVar3 = *(float *)(in_ECX + 0x84);
  fVar4 = *(float *)(in_ECX + 0x88);
  fVar5 = *(float *)(in_ECX + 0x8c);
  fVar6 = *(float *)(in_ECX + 0x74);
  fVar7 = *(float *)(in_ECX + 0x78);
  fVar8 = *(float *)(in_ECX + 0x7c);
  bVar1 = (&DAT_00b2e500)[param_4 + (param_2 + *(int *)(in_ECX + 0xac) * 3) * 3];
  fVar2 = (float)(2 - param_3);
  if (2 - param_3 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar9 = *(float *)(in_ECX + 0x74);
  fVar10 = *(float *)(in_ECX + 0x78);
  fVar11 = *(float *)(in_ECX + 0x7c);
  *param_1 = *(float *)(in_ECX + 0x70) +
             (*(float *)(in_ECX + 0x80) - *(float *)(in_ECX + 0x70)) *
             (*(float *)(&DAT_00b2e548 + (bVar1 / 3) * 4) + 0.16666);
  param_1[1] = fVar9 + ((float)((uint)bVar1 % 3) * 0.3333 + 0.16666) * (fVar3 - fVar6);
  param_1[2] = fVar10 + (fVar2 * 0.3333 + 0.16666) * (fVar4 - fVar7);
  param_1[3] = fVar11 + (fVar5 - fVar8);
  return param_1;
}



void FUN_0088d6c0(float param_1)

{
  int in_ECX;
  float10 fVar1;
  uint local_8;
  
  if (param_1 <= 6.2831855) {
    if (param_1 < 0.0) {
      fVar1 = (float10)FUN_00982bfa();
      param_1 = (float)fVar1 + 6.2831855;
    }
  }
  else {
    fVar1 = (float10)FUN_00982bfa();
    param_1 = (float)fVar1;
  }
  local_8 = (uint)(longlong)ROUND((param_1 + 0.3926991) / 0.7853982);
  *(uint *)(in_ECX + 0xac) = local_8;
  if (7 < local_8) {
    *(undefined4 *)(in_ECX + 0xac) = 0;
  }
  return;
}



undefined4 FUN_0088d780(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  undefined1 local_c [4];
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(in_ECX + 0x54);
  local_4 = 0;
  local_8 = param_1;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if (*(int *)(*(int *)(in_ECX + 0x50) + iVar1 * 4) != 0) {
      (**(code **)**(undefined4 **)(*(int *)(in_ECX + 0x50) + iVar1 * 4))(local_c);
    }
  }
  return local_4;
}



void FUN_0088d7d0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int in_ECX;
  undefined1 local_c [4];
  undefined4 local_8;
  undefined1 local_4;
  
  iVar1 = *(int *)(in_ECX + 0x54);
  local_8 = param_1;
  local_4 = param_2;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if (*(int *)(*(int *)(in_ECX + 0x50) + iVar1 * 4) != 0) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + iVar1 * 4) + 4))(local_c);
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0088d820(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  uint local_14 [4];
  
  uVar5 = uRam00ba7a4c;
  uVar4 = DAT_00ba7a48;
  uVar3 = DAT_00ba7a44;
  uVar2 = DAT_00ba7a40;
  local_14[0] = DAT_00b30aac ^ (uint)local_14;
  if ((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) {
    FUN_0089f570();
    uVar2 = *(undefined4 *)(iVar1 + 0x74);
    uVar3 = *(undefined4 *)(iVar1 + 0x78);
    uVar4 = *(undefined4 *)(iVar1 + 0x7c);
    *param_1 = *(undefined4 *)(iVar1 + 0x70);
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x84);
    uVar3 = *(undefined4 *)(iVar1 + 0x88);
    uVar4 = *(undefined4 *)(iVar1 + 0x8c);
    param_1[4] = *(undefined4 *)(iVar1 + 0x80);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    FUN_0089f570();
    return;
  }
  *param_1 = DAT_00ba7a40;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  return;
}



void FUN_0088d8a0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9627c;
  FUN_008ba5e0();
  if ((param_1 & 1) != 0) {
    FUN_00401e40((int)in_ECX - (uint)*(byte *)((int)in_ECX + -1));
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0088d900(float *param_1,byte param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int in_ECX;
  undefined4 extraout_EDX;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_e4 [12];
  float local_d8;
  float *local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [48];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_e4;
  local_d4 = param_1;
  if (DAT_00ba7a04 == '\0') {
    iVar3 = 0;
    if ((param_2 & 1) == 0) {
      if ((param_2 & 2) != 0) {
        iVar3 = 6;
      }
    }
    else {
      iVar3 = 3;
    }
    if ((param_2 & 8) == 0) {
      if ((param_2 & 4) != 0) {
        iVar3 = iVar3 + 1;
      }
    }
    else {
      iVar3 = iVar3 + 2;
    }
    local_d8 = *(float *)(iVar3 * 4 + 0xb2e4dc) + param_1[3];
    local_d0 = 0;
    local_cc = 0;
    local_c8 = 0x3f800000;
    local_c4 = 0;
    FUN_008b1b00(&local_d0,-local_d8);
    local_30 = *param_1;
    fStack_2c = param_1[1];
    fStack_28 = param_1[2];
    fStack_24 = param_1[3];
    FUN_008b1dd0(local_c0);
    FUN_0088fcc0(local_60,in_ECX + 0x40);
    local_90 = *(float *)(in_ECX + 0x20) + local_70;
    fStack_8c = *(float *)(in_ECX + 0x24) + fStack_6c;
    fStack_88 = *(float *)(in_ECX + 0x28) + fStack_68;
    fStack_84 = *(float *)(in_ECX + 0x2c) + fStack_64;
    local_80 = *(float *)(in_ECX + 0x30) + local_70;
    fStack_7c = *(float *)(in_ECX + 0x34) + fStack_6c;
    fStack_78 = *(float *)(in_ECX + 0x38) + fStack_68;
    fStack_74 = *(float *)(in_ECX + 0x3c) + fStack_64;
    FUN_0088d820(&local_b0);
    auVar2._4_4_ = -(uint)(0.001 < ABS(fStack_ac - fStack_8c));
    auVar2._0_4_ = -(uint)(0.001 < ABS(local_b0 - local_90));
    auVar2._8_4_ = -(uint)(0.001 < ABS(fStack_a8 - fStack_88));
    auVar2._12_4_ = -(uint)(0.001 < ABS(fStack_a4 - fStack_84));
    uVar4 = movmskps(extraout_EDX,auVar2);
    if ((uVar4 & 7) != 0) {
      if (*(int *)(in_ECX + 8) != 0) {
        FUN_0089f570();
        FUN_008cd9d0(&local_90);
        FUN_0089f570();
      }
      piVar1 = *(int **)(in_ECX + 8);
      if (piVar1 != (int *)0x0) {
        iVar3 = piVar1[0x2b];
        FUN_0088d6c0(local_d8);
        if (iVar3 == piVar1[0x2b]) {
          local_d8 = *(float *)(in_ECX + 0x60);
          if (*(char *)(in_ECX + 0x69) != '\0') {
            local_d8 = local_d8 * 0.5;
          }
          if ((0.0 < local_d8) &&
             (fVar5 = *local_d4 - *(float *)(in_ECX + 0x50),
             fVar6 = local_d4[1] - *(float *)(in_ECX + 0x54),
             fVar7 = local_d4[2] - *(float *)(in_ECX + 0x58),
             local_b0 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5), local_b0 <= local_d8))
          {
            return;
          }
        }
        fVar5 = local_d4[1];
        fVar6 = local_d4[2];
        fVar7 = local_d4[3];
        *(float *)(in_ECX + 0x50) = *local_d4;
        *(float *)(in_ECX + 0x54) = fVar5;
        *(float *)(in_ECX + 0x58) = fVar6;
        *(float *)(in_ECX + 0x5c) = fVar7;
        if ((*(char *)(in_ECX + 0x68) == '\0') && (*(char *)(*(int *)(in_ECX + 8) + 0xfd) == '\0'))
        {
          (**(code **)(*piVar1 + 0x30))();
          (**(code **)(*piVar1 + 0x38))();
        }
      }
    }
  }
  return;
}



void FUN_0088dbe0(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = in_ECX[0x29];
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(*in_ECX + 0x34))(iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0088dc10(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  float *pfVar4;
  undefined1 *puVar5;
  float *pfVar6;
  float *pfVar7;
  int *unaff_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_4b4 [8];
  int local_4ac;
  float local_4a8;
  float local_4a4;
  float fStack_4a0;
  float local_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float local_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  undefined **local_470;
  undefined4 local_430;
  undefined4 local_42c;
  float local_420 [8];
  undefined1 local_400;
  undefined4 local_3fc;
  undefined1 local_3d0;
  undefined4 local_3cc;
  undefined1 local_3a0;
  undefined4 local_39c;
  undefined1 local_370;
  undefined4 local_36c;
  undefined1 local_340;
  undefined4 local_33c;
  undefined1 local_310;
  undefined4 local_30c;
  undefined1 local_2e0;
  undefined4 local_2dc;
  undefined1 local_2b0;
  undefined4 local_2ac;
  undefined1 local_280;
  undefined4 local_27c;
  undefined1 local_270 [48];
  float afStack_240 [135];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d5ff1;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_4b4;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (*(int *)(in_ECX + 8) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(*(int *)(in_ECX + 8) + 0x2b0);
  }
  if (piVar3 != (int *)0x0) {
    local_4a8 = *(float *)(in_ECX + 0x88) - *(float *)(in_ECX + 0x78);
    local_4a4 = (float)(*(uint *)(in_ECX + 0x30) & 0xffffffdb | 0x1b);
    if (local_4a8 < 17.145208) {
      local_4a8 = 17.145208;
    }
    local_490 = 0.0;
    fStack_48c = 0.0;
    fStack_488 = local_4a8 * -2.0;
    fStack_484 = 0.0;
    local_4ac = in_ECX;
    _eh_vector_constructor_iterator_(local_270,0x40,9,FUN_00535980,FUN_004f5e90);
    local_14 = 0;
    local_3fc = 0;
    local_3cc = 0;
    local_39c = 0;
    local_36c = 0;
    local_33c = 0;
    local_30c = 0;
    local_2dc = 0;
    local_2ac = 0;
    local_27c = 0;
    local_400 = 0;
    local_3d0 = 0;
    local_3a0 = 0;
    local_370 = 0;
    local_340 = 0;
    local_310 = 0;
    local_2e0 = 0;
    local_2b0 = 0;
    local_280 = 0;
    pfVar6 = local_420;
    puVar5 = &DAT_00b2e555;
    fVar8 = local_490;
    fVar9 = fStack_48c;
    fVar10 = fStack_488;
    fVar11 = fStack_484;
    do {
      FUN_0088d5e0(&local_480,puVar5[-1],0,*puVar5);
      pfVar6[9] = local_4a4;
      *pfVar6 = local_480;
      pfVar6[1] = fStack_47c;
      pfVar6[2] = fStack_478;
      pfVar6[3] = fStack_474;
      pfVar6[4] = fVar8 + local_480;
      pfVar6[5] = fVar9 + fStack_47c;
      pfVar6[6] = fVar10 + fStack_478;
      pfVar6[7] = fVar11 + fStack_474;
      puVar5 = puVar5 + 2;
      pfVar6 = pfVar6 + 0xc;
    } while ((int)puVar5 < 0xb2e567);
    local_470 = &PTR_LAB_00a74c80;
    local_430 = 0;
    local_42c = 0;
    local_14 = CONCAT31(local_14._1_3_,1);
    (**(code **)(*piVar3 + 0x58))();
    iVar2 = (**(code **)(*piVar3 + 0x58))();
    uVar1 = *(undefined4 *)(iVar2 + 0x78);
    iVar2 = (**(code **)(*piVar3 + 0x58))();
    FUN_008ba2c0(*(undefined4 *)(iVar2 + 100),local_420,9,uVar1,local_270,0x40);
    (**(code **)(*piVar3 + 0x58))();
    pfVar6 = local_420;
    pfVar7 = afStack_240;
    pfVar4 = (float *)(local_4ac + 0xb8);
    local_4ac = 9;
    do {
      fVar8 = *pfVar7;
      if (fVar8 != 0.0) {
        fStack_4a0 = pfVar6[2];
        fVar9 = pfVar7[-3];
        local_480 = fStack_488;
        pfVar4[-1] = fVar8;
        fVar9 = fVar9 * fStack_488 + fStack_4a0;
      }
      else {
        fVar9 = -2.1474836e+09;
        pfVar4[-1] = 0.0;
      }
      *pfVar4 = fVar9;
      FUN_008a78e0(pfVar6,pfVar6 + 4,(-(uint)(fVar8 != 0.0) & 0x7e7f80) - 0x7f7f80,0);
      pfVar4 = pfVar4 + 2;
      pfVar7 = pfVar7 + 0x10;
      pfVar6 = pfVar6 + 0xc;
      local_4ac = local_4ac + -1;
    } while (local_4ac != 0);
    local_470 = &PTR_LAB_00a74c74;
    local_14 = 0xffffffff;
    _eh_vector_destructor_iterator_(local_270,0x40,9,FUN_004f5e90);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_0088dfd0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar5;
  undefined4 *puStack_64;
  int *piStack_60;
  undefined **ppuStack_5c;
  char cStack_58;
  undefined1 local_40 [28];
  uint local_24;
  int iStack_20;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d6028;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&puStack_64;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_0088d5e0(local_40,param_3,param_4,param_5);
  (**(code **)(**(int **)(in_ECX + 0xb0) + 0x94))(local_40,uVar2);
  piStack_60 = *(int **)(*(int *)(in_ECX + 8) + 0x74);
  iVar1 = *piStack_60;
  if ((*(int *)(in_ECX + 0xb0) == 0) || (iVar3 = *(int *)(*(int *)(in_ECX + 0xb0) + 8), iVar3 == 0))
  {
    puStack_64 = (undefined4 *)0x0;
  }
  else {
    puStack_64 = (undefined4 *)(iVar3 + 0x14);
  }
  iVar3 = (**(code **)(*(int *)*puStack_64 + 8))();
  if ((int *)*param_1 == (int *)0x0) {
    bVar5 = false;
  }
  else {
    iVar4 = (**(code **)(*(int *)*param_1 + 8))();
    ppuStack_5c = &PTR_LAB_00a9626c;
    cStack_58 = '\0';
    puStack_18 = (undefined1 *)0x0;
    (**(code **)(iVar1 + 0x994 + (uint)*(byte *)(iVar3 * 0x20 + iVar4 + 400 + iVar1) * 0x14))
              (puStack_64,param_1,piStack_60,&ppuStack_5c);
    bVar5 = cStack_58 != '\0';
  }
  *unaff_FS_OFFSET = iStack_20;
  return bVar5;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0088e1d0(int param_1)

{
  bool bVar1;
  char cVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [44];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_54;
  local_54 = 0;
  if ((param_1 < *(int *)(in_ECX + 0xa4)) &&
     (local_44 = *(int *)(*(int *)(in_ECX + 0x90) + param_1 * 4), local_44 != 0)) {
    local_4c = 1;
    local_50 = 0;
    local_48 = in_ECX;
    do {
      uVar4 = 0;
      do {
        bVar1 = false;
        uVar3 = 0;
        do {
          if ((bVar1) && ((uVar4 != 2 || (uVar3 != 1)))) {
LAB_0088e259:
            if (bVar1) goto LAB_0088e25d;
          }
          else {
            cVar2 = FUN_0088dfd0(local_44,local_40,local_50,uVar4,uVar3);
            if (cVar2 == '\0') goto LAB_0088e259;
            bVar1 = true;
LAB_0088e25d:
            local_54 = local_54 | local_4c;
          }
          local_4c = local_4c << 1;
          uVar3 = uVar3 + 1;
        } while (uVar3 < 3);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
      local_50 = local_50 + 1;
    } while (local_50 < 3);
    *(uint *)(*(int *)(local_48 + 0xa0) + param_1 * 4) = local_54;
  }
  return;
}



void FUN_0088e2c0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_008ba8d0(param_1);
  param_1 = FUN_0070f910(DAT_00ba7a0c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088e310(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  LONG LVar6;
  int in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_120;
  float fStack_11c;
  float fStack_118;
  undefined4 *puStack_114;
  undefined4 uStack_10c;
  int iStack_104;
  undefined4 uStack_68;
  undefined1 uStack_48;
  uint local_24;
  uint local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d6077;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&uStack_154;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffea0;
  *unaff_FS_OFFSET = (uint)&local_1c;
  local_14c = _DAT_00b2efc4;
  local_134 = 0;
  local_140 = 0x3f800000;
  local_13c = 0x3f800000;
  local_138 = 0x3f800000;
  local_120 = (*(float *)(in_ECX + 0x80) - *(float *)(in_ECX + 0x70)) * 0.3333;
  fStack_11c = (*(float *)(in_ECX + 0x84) - *(float *)(in_ECX + 0x74)) * 0.3333;
  fStack_118 = (*(float *)(in_ECX + 0x88) - *(float *)(in_ECX + 0x78)) * 0.3333;
  puStack_114 = (undefined4 *)((*(float *)(in_ECX + 0x8c) - *(float *)(in_ECX + 0x7c)) * 0.3333);
  local_150 = 0;
  FUN_0047dcd0(&local_120);
  iVar3 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x20,0x24,uVar2);
  *(undefined2 *)(iVar3 + 4) = 0x20;
  local_138 = uStack_148;
  local_134 = uStack_144;
  local_1c = 0;
  uStack_130 = local_140;
  uStack_12c = local_13c;
  puVar4 = (undefined4 *)FUN_008cdfe0(&local_138,uStack_154);
  local_1c = 0xffffffff;
  FUN_008a5790();
  uStack_68 = 0;
  local_1c = 1;
  uStack_48 = 6;
  if (in_ECX != -0x14) {
    fStack_118 = *(float *)(in_ECX + 0x30);
  }
  puStack_114 = puVar4;
  iVar3 = FUN_00401f00(0x1c);
  local_1c._0_1_ = 2;
  if (iVar3 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)FUN_00533290(&fStack_118);
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xb0);
  local_1c = CONCAT31(local_1c._1_3_,1);
  if (puVar1 != puVar5) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar1 + 1), LVar6 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 **)(in_ECX + 0xb0) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if ((*(short *)(puVar4 + 1) != 0) &&
     (*(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1,
     *(short *)((int)puVar4 + 6) == 0)) {
    (**(code **)*puVar4)(1);
  }
  local_1c = 0xffffffff;
  if (-1 < iStack_104) {
    FUN_008a75d0(uStack_10c,iStack_104 * 8,0x14);
  }
  *unaff_FS_OFFSET = local_24;
  return;
}



void FUN_0088e560(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d60d4;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008cdcb0(param_1 + 8,*param_1);
  *in_ECX = &PTR_FUN_00a96324;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0x80000000;
  in_ECX[0x2c] = 0;
  local_4 = 2;
  in_ECX[0x2b] = 0;
  *(undefined1 *)(in_ECX + 0x3f) = 0;
  *(undefined1 *)((int)in_ECX + 0xfd) = 1;
  FUN_0088e310(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0088e600(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009d6106;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0xb0);
  local_4 = 1;
  if (((puVar1 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar1 + 1), LVar3 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  local_4 = local_4 & 0xffffff00;
  if (-1 < *(int *)(in_ECX + 0xa8)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0xa0),*(int *)(in_ECX + 0xa8) * 4,0x14);
  }
  local_4 = 0xffffffff;
  FUN_008cdaa0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0088e6c0(byte param_1)

{
  FUN_0088e600();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0088e6f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d613b;
  local_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_1c;
  in_ECX[0x19] = 0;
  iVar2 = iRam00ba7a4c;
  iVar1 = DAT_00ba7a48;
  iVar5 = DAT_00ba7a44;
  in_ECX[0x10] = DAT_00ba7a40;
  in_ECX[0x11] = iVar5;
  in_ECX[0x12] = iVar1;
  in_ECX[0x13] = iVar2;
  iVar3 = iRam00ba7a4c;
  iVar2 = DAT_00ba7a48;
  iVar1 = DAT_00ba7a44;
  iVar5 = DAT_00ba7a40;
  in_ECX[0x18] = 0;
  in_ECX[0x14] = iVar5;
  in_ECX[0x15] = iVar1;
  in_ECX[0x16] = iVar2;
  in_ECX[0x17] = iVar3;
  *(undefined1 *)(in_ECX + 0x1a) = 0;
  *(undefined1 *)((int)in_ECX + 0x69) = 0;
  if (param_1 != 0) {
    iVar5 = *(int *)(param_1 + 0x24);
    iVar1 = *(int *)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x2c);
    in_ECX[8] = *(int *)(param_1 + 0x20);
    in_ECX[9] = iVar5;
    in_ECX[10] = iVar1;
    in_ECX[0xb] = iVar2;
    iVar5 = *(int *)(param_1 + 0x34);
    iVar1 = *(int *)(param_1 + 0x38);
    iVar2 = *(int *)(param_1 + 0x3c);
    in_ECX[0xc] = *(int *)(param_1 + 0x30);
    in_ECX[0xd] = iVar5;
    in_ECX[0xe] = iVar1;
    in_ECX[0xf] = iVar2;
    iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x100,0x2e,uVar4);
    *(undefined2 *)(iVar5 + 4) = 0x100;
    local_1c = 0;
    uVar6 = FUN_0088e560(param_1);
    local_1c = -1;
    (**(code **)(*in_ECX + 0x4c))(uVar6);
    FUN_008bc730();
    (**(code **)(*in_ECX + 0x7c))(param_1);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_0088e7c0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_0088eb60();
  *in_ECX = &PTR_FUN_00a96384;
  puVar2 = &DAT_00b26dc4;
  puVar3 = in_ECX + 10;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



void FUN_0088e850(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a96384;
  FUN_0088ea60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0088e880(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  LONG LVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7c98;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 1);
  }
  local_4 = 0;
  FUN_00897670(0);
  FUN_00897670(puVar1);
  iVar2 = *in_ECX;
  in_ECX[6] = *(int *)(param_1 + 0x18);
  in_ECX[5] = *(int *)(param_1 + 0x14);
  in_ECX[8] = *(int *)(param_1 + 0x20);
  uVar4 = FUN_00452a60(uVar3);
  (**(code **)(iVar2 + 0x4c))(uVar4);
  puStack_8 = (undefined1 *)0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if (LVar5 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = (int)puVar1;
  return;
}



undefined4 * FUN_0088e950(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x4c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0088eb60();
    *puVar2 = &PTR_FUN_00a96384;
    puVar4 = &DAT_00b26dc4;
    puVar5 = puVar2 + 10;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  local_4 = 0xffffffff;
  FUN_0088ea90(puVar2,param_1);
  puVar4 = (undefined4 *)(in_ECX + 0x28);
  puVar5 = puVar2 + 10;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_0088e9f0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 local_6c [9];
  undefined1 local_48 [36];
  undefined1 local_24 [36];
  
  if (*(int *)(in_ECX + 0x10) != 0) {
    FUN_0088edc0();
  }
  puVar1 = (undefined4 *)(in_ECX + 0x28);
  puVar4 = local_6c;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = FUN_00452a60();
  FUN_00452a60();
  puVar1 = local_6c;
  puVar5 = local_48;
  FUN_007100a0(local_24,iVar2 + 0x30);
  puVar1 = (undefined4 *)FUN_007100a0(puVar5,puVar1);
  iVar2 = FUN_00452a60();
  puVar4 = (undefined4 *)(iVar2 + 100);
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088ea60(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9643c;
  _DAT_00ba7a1c = _DAT_00ba7a1c + -1;
  FUN_00897b00();
  return;
}



void FUN_0088ea90(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  thunk_FUN_008976d0(param_1,param_2);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  return;
}



uint FUN_0088eac0(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = thunk_FUN_00897880(param_1);
  if ((byte)uVar1 != 0) {
    if (*(float *)(in_ECX + 0x14) == *(float *)(param_1 + 0x14)) {
      return (uint)((byte)uVar1 & *(float *)(in_ECX + 0x18) == *(float *)(param_1 + 0x18));
    }
    uVar1 = 0;
  }
  return uVar1 & 0xffffff00;
}



void FUN_0088eb20(void)

{
  int *in_ECX;
  
  if (DAT_00ba7a8c != 3) {
    if ((*(byte *)(in_ECX + 3) >> 6 & 1) == 0) {
      if ((*(byte *)(in_ECX + 3) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0088eb5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*in_ECX + 100))();
        return;
      }
    }
    else if (DAT_00ba7a8c != 2) {
      FUN_0089eae0();
      *(ushort *)(in_ECX + 3) = *(ushort *)(in_ECX + 3) & 0xffbf;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088eb60(void)

{
  undefined4 *in_ECX;
  
  FUN_00897600();
  *in_ECX = &PTR_FUN_00a9643c;
  _DAT_00ba7a1c = _DAT_00ba7a1c + 1;
  in_ECX[5] = 0;
  *(ushort *)(in_ECX + 3) = *(ushort *)(in_ECX + 3) & 0xfeff;
  in_ECX[6] = 0x3f800000;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[7] = 8;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088eba0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9643c;
  _DAT_00ba7a1c = _DAT_00ba7a1c + -1;
  FUN_00897b00();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088ebd0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_00897640(param_1);
  *in_ECX = &PTR_FUN_00a9643c;
  _DAT_00ba7a1c = _DAT_00ba7a1c + 1;
  in_ECX[5] = 0;
  *(ushort *)(in_ECX + 3) = *(ushort *)(in_ECX + 3) & 0xfeff;
  in_ECX[6] = 0x3f800000;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[7] = 8;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0088ec10(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x28,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00897600();
    *puVar2 = &PTR_FUN_00a9643c;
    _DAT_00ba7a1c = _DAT_00ba7a1c + 1;
    puVar2[5] = 0;
    *(ushort *)(puVar2 + 3) = *(ushort *)(puVar2 + 3) & 0xfeff;
    puVar2[6] = 0x3f800000;
    puVar2[7] = 8;
    puVar2[8] = 0;
    puVar2[9] = 0;
  }
  local_4 = 0xffffffff;
  thunk_FUN_008976d0(puVar2,param_1);
  puVar2[6] = *(undefined4 *)(in_ECX + 0x18);
  puVar2[5] = *(undefined4 *)(in_ECX + 0x14);
  puVar2[8] = *(undefined4 *)(in_ECX + 0x20);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_0088ecd0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  thunk_FUN_00897810(param_1);
  *(ushort *)(in_ECX + 0xc) = *(ushort *)(in_ECX + 0xc) | 8;
  if (((*(int *)(in_ECX + 0x10) == 0) || (iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + 8), iVar1 == 0)
      ) || (iVar1 == -0x14)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x30);
  }
  uVar2 = uVar2 >> 8 & 0x1f;
  *(undefined4 *)(in_ECX + 0x14) = (&DAT_00b2e660)[uVar2 * 2];
  *(undefined4 *)(in_ECX + 0x18) = (&DAT_00b2e664)[uVar2 * 2];
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0088ed20(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x28,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00897600();
    *puVar2 = &PTR_FUN_00a9643c;
    _DAT_00ba7a1c = _DAT_00ba7a1c + 1;
    puVar2[5] = 0;
    *(ushort *)(puVar2 + 3) = *(ushort *)(puVar2 + 3) & 0xfeff;
    puVar2[6] = 0x3f800000;
    puVar2[7] = 8;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_0088edc0(void)

{
  char cVar1;
  int *in_ECX;
  
  if (DAT_00ba7a8c != 3) {
    if ((*(byte *)(in_ECX + 3) >> 6 & 1) != 0) {
      if (DAT_00ba7a8c == 2) {
        return;
      }
      FUN_0089eae0();
      *(ushort *)(in_ECX + 3) = *(ushort *)(in_ECX + 3) & 0xffbf;
      return;
    }
    if ((*(byte *)(in_ECX + 3) & 1) == 0) {
      return;
    }
    if ((((in_ECX[4] != 0) && (cVar1 = FUN_00607840(), cVar1 != '\0')) || ((float)in_ECX[5] < 1.0))
       || (in_ECX[7] == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0088ee1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*in_ECX + 100))();
      return;
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_0088ee20(int *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_220 [12];
  undefined1 *puStack_214;
  undefined1 auStack_210 [512];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d616b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_220;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = 0;
  if ((param_1 != (int *)0x0) && (iVar4 = (**(code **)(*param_1 + 8))(), iVar4 != 0)) {
    pcVar6 = *(char **)(iVar4 + 8);
    if ((pcVar6 == (char *)0x0) || (iVar5 = __strnicmp(pcVar6,"Bip",3), iVar5 != 0)) {
      uVar9 = 0;
      if (*(short *)(iVar4 + 0xb6) != 0) {
        do {
          uVar3 = FUN_0088ee20();
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ushort *)(iVar4 + 0xb6));
      }
    }
    else {
      pcVar1 = pcVar6 + 1;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if ((int)pcVar6 - (int)pcVar1 == 5) {
        iVar5 = FUN_00405790();
        if (iVar5 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar5 + 8);
        }
        if (((iVar7 != 0) && (iVar7 = __stricmp((char *)(iVar7 + 6),"NonAccum"), iVar7 == 0)) &&
           (iVar7 = FUN_00497420(), iVar7 != 0)) {
          FUN_00435ce0();
          FUN_00435ce0();
          *(ushort *)(iVar5 + 0x18) = *(ushort *)(iVar5 + 0x18) & 0xffef | 6;
          uVar3 = 1;
          piVar8 = (int *)FUN_00700010();
          if (piVar8 != (int *)0x0) {
            (**(code **)(*piVar8 + 0x58))();
          }
          if (*(int *)(iVar4 + 0x1c) != 0) {
            pcVar6 = *(char **)(*(int *)(iVar4 + 0x1c) + 8);
            if ((byte *)pcVar6 == (byte *)0x0) {
              pcVar6 = "Unknown";
            }
            puStack_214 = &stack0xfffffdcc;
            FUN_008bbfb0(auStack_210,0x200);
            uVar9 = (uint)(byte)*pcVar6;
            uStack_4 = 0;
            FUN_008bbdb0("A very old skeleton for ");
            FUN_008bbd90(uVar9);
            FUN_008bbdb0();
            (**(code **)(*DAT_00ba7fb0 + 8))
                      (1,0x234f224f,auStack_210,".\\bhkBlendCollisionObject.cpp");
            uStack_4 = 0xffffffff;
            FUN_008bc000();
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_0088f040(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x10);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if ((*(int *)(in_ECX + 0x1c) != 6) ||
     ((piVar1[2] != 0 && (iVar2 = (**(code **)(**(int **)(piVar1[2] + 0x50) + 8))(), iVar2 == 6))))
  {
    if (*(int *)(in_ECX + 0x1c) != 1) {
      return;
    }
    if ((piVar1[2] != 0) && (iVar2 = (**(code **)(**(int **)(piVar1[2] + 0x50) + 8))(), iVar2 < 6))
    {
      return;
    }
  }
  (**(code **)(*piVar1 + 0x9c))(*(undefined4 *)(in_ECX + 0x1c));
  return;
}



void FUN_0088f0a0(void)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x10);
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[2];
    if ((iVar2 == 0) || (iVar2 == -0x14)) {
      bVar3 = 0;
    }
    else {
      bVar3 = (byte)*(undefined4 *)(iVar2 + 0x30);
    }
    if (((bVar3 & 0x3f) == 8) && (*(int *)(in_ECX + 0x20) != 0)) {
      (**(code **)(*piVar1 + 0x5c))(*(int *)(in_ECX + 0x20));
    }
  }
  return;
}



void FUN_0088f0e0(void)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  int *in_ECX;
  
  iVar1 = in_ECX[9];
  in_ECX[9] = iVar1 + 1;
  if (iVar1 == 0) {
    if (DAT_00ba7a8c != 3) {
      if ((*(byte *)(in_ECX + 3) >> 6 & 1) == 0) {
        if ((*(byte *)(in_ECX + 3) & 1) != 0) {
          (**(code **)(*in_ECX + 100))();
        }
      }
      else if (DAT_00ba7a8c != 2) {
        FUN_0089eae0();
        *(ushort *)(in_ECX + 3) = *(ushort *)(in_ECX + 3) & 0xffbf;
      }
    }
    piVar2 = (int *)in_ECX[4];
    if (piVar2 != (int *)0x0) {
      iVar1 = piVar2[2];
      if ((iVar1 == 0) || (iVar1 == -0x14)) {
        bVar3 = 0;
      }
      else {
        bVar3 = (byte)*(undefined4 *)(iVar1 + 0x30);
      }
      if (((bVar3 & 0x3f) == 8) && (in_ECX[8] != 0)) {
        (**(code **)(*piVar2 + 0x5c))(in_ECX[8]);
      }
    }
  }
  return;
}



void FUN_0088f160(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  byte bVar3;
  
  *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + -1;
  if (*(int *)(in_ECX + 0x24) < 1) {
    piVar1 = *(int **)(in_ECX + 0x10);
    *(undefined4 *)(in_ECX + 0x24) = 0;
    if (piVar1 != (int *)0x0) {
      iVar2 = piVar1[2];
      if ((iVar2 == 0) || (iVar2 == -0x14)) {
        bVar3 = 0;
      }
      else {
        bVar3 = (byte)*(undefined4 *)(iVar2 + 0x30);
      }
      if (((bVar3 & 0x3f) == 8) && (*(int *)(in_ECX + 0x20) != 0)) {
        (**(code **)(*piVar1 + 0x5c))(*(int *)(in_ECX + 0x20));
      }
    }
  }
  return;
}



float10 FUN_0088f1b0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_4;
  
  local_4 = 1.0;
  if (param_1 == (int *)0x0) goto LAB_0088f1ec;
  if (param_2 == 0) {
LAB_0088f1d6:
    piVar1 = param_1;
  }
  else {
    piVar1 = (int *)(**(code **)(*param_1 + 0x58))(param_2);
    if (piVar1 == (int *)0x0) goto LAB_0088f1d6;
  }
  iVar2 = FUN_00497420(piVar1);
  if (iVar2 != 0) {
    local_4 = *(float *)(iVar2 + 0x14);
  }
LAB_0088f1ec:
  return (float10)local_4;
}



int FUN_0088f200(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  if ((param_1 != 0) && (iVar5 = FUN_00497420(param_1), iVar5 == 0)) {
    if (*(short *)(param_1 + 0xb6) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(param_1 + 0xb0);
    }
    iVar5 = FUN_00497420(iVar3);
    if ((((iVar5 == 0) &&
         (uVar4 = (uint)(*(short *)(iVar3 + 0xb8) != 1), uVar4 < *(ushort *)(iVar3 + 0xb6))) &&
        (piVar1 = *(int **)(*(int *)(iVar3 + 0xb0) + uVar4 * 4), piVar1 != (int *)0x0)) &&
       ((iVar5 = FUN_00497420(piVar1), iVar5 == 0 &&
        (iVar3 = (**(code **)(*piVar1 + 8))(), iVar3 != 0)))) {
      uVar4 = 0;
      if (*(short *)(iVar3 + 0xb6) != 0) {
        if (*(short *)(iVar3 + 0xb6) != 0) goto LAB_0088f29e;
        uVar2 = 0;
        while ((iVar5 = FUN_00497420(uVar2), iVar5 == 0 &&
               (uVar4 = uVar4 + 1, uVar4 < *(ushort *)(iVar3 + 0xb6)))) {
LAB_0088f29e:
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0xb0) + uVar4 * 4);
        }
      }
    }
  }
  return iVar5;
}



void FUN_0088f2d0(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined1 auStack_4 [4];
  
  iVar1 = param_1;
  thunk_FUN_00897b90(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x14,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x18,4,&param_1,1);
  if (*(uint *)(iVar1 + 4) < 8) {
    param_1 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),auStack_4,4,&param_1,1);
    param_1 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),auStack_4,4,&param_1,1);
  }
  return;
}



void FUN_0088f370(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  thunk_FUN_00897bd0(param_1);
  iVar1 = *(int *)(iVar2 + 0x220);
  param_1 = 4;
  (**(code **)(iVar1 + 8))(iVar1,in_ECX + 0x14,4,&param_1,1);
  iVar1 = *(int *)(iVar2 + 0x220);
  param_1 = 4;
  (**(code **)(iVar1 + 8))(iVar1,in_ECX + 0x18,4,&param_1,1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088f3d0(void)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  int *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_144 [14];
  char local_136;
  byte local_135;
  uint local_134;
  float local_130;
  int local_12c;
  int *local_128;
  undefined4 auStack_124 [9];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_e0 [16];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_c0 [16];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [48];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [60];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_144;
  local_130 = _DAT_00b2e2e0;
  local_12c = FUN_00452a60();
  piVar2 = (int *)in_ECX[4];
  local_135 = *(byte *)((int)in_ECX + 0xd) & 1;
  iVar4 = 1;
  if ((float)in_ECX[5] == 0.0) {
    if (DAT_00ba7a8c == 1) {
      return;
    }
    if (((float)in_ECX[6] == 0.0) || (local_135 != 0)) {
      local_134 = 1;
    }
    else {
      local_134 = 0;
    }
  }
  else if ((float)in_ECX[5] == 1.0) {
    local_134 = 2;
    if (DAT_00ba7a8c == 2) {
      return;
    }
    iVar4 = 6;
  }
  else {
    local_134 = (uint)(DAT_00ba7a8c == 2);
  }
  local_136 = '\0';
  local_128 = piVar2;
  if (in_ECX[7] != iVar4) {
    if (in_ECX[7] == 6) {
      (**(code **)(*in_ECX + 0x68))();
    }
    else if (piVar2 != (int *)0x0) {
      FUN_004d6af0(&DAT_00ba7a40);
      FUN_004d6b30(&DAT_00ba7a40);
    }
    FUN_0089ed20(iVar4,piVar2);
    in_ECX[7] = iVar4;
    local_136 = '\x01';
  }
  if (local_134 == 0) {
    puVar5 = (undefined4 *)(local_12c + 100);
    puVar6 = auStack_124;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    fStack_f0 = fStack_100 * 0.14287673;
    fStack_ec = fStack_fc * 0.14287673;
    fStack_e8 = fStack_f8 * 0.14287673;
    FUN_00539850(auStack_50,auStack_124);
    FUN_008b1b40(auStack_50);
    piVar2 = local_128;
    (**(code **)(*local_128 + 0x8c))(&fStack_b0);
    (**(code **)(*piVar2 + 0x90))(&fStack_c4);
    fVar1 = (float)in_ECX[5];
    fStack_d0 = (1.0 - fVar1) * fStack_b0 + fStack_f0 * fVar1;
    fStack_cc = (1.0 - fVar1) * fStack_ac + fStack_ec * fVar1;
    fStack_c8 = (1.0 - fVar1) * fStack_a8 + fStack_e8 * fVar1;
    fStack_c4 = (1.0 - fVar1) * fStack_a4 + fStack_e4 * fVar1;
    FUN_008b1c60(auStack_c0,auStack_a0,in_ECX[5]);
    FUN_004d6830();
    pfVar3 = &fStack_d0;
    if (local_135 == 0) {
      pfVar3 = &fStack_f0;
    }
    fStack_60 = *pfVar3;
    fStack_5c = pfVar3[1];
    fStack_58 = pfVar3[2];
    fStack_54 = pfVar3[3];
    FUN_008b1dd0(auStack_e0);
    FUN_00607740(auStack_124,auStack_90);
    FUN_0043f3e0(&fStack_100,&fStack_60);
    if (DAT_00ba7a8c == 0) {
      (**(code **)(*in_ECX + 0x78))(auStack_124);
    }
    if (local_130 == 0.0) {
      local_130 = 1.0;
    }
    else {
      local_130 = 1.0 / local_130;
    }
    if (local_135 == 0) {
      local_134 = in_ECX[6];
    }
    else {
      local_134 = 0x3f800000;
    }
    FUN_008a34c0(&fStack_d0,auStack_e0,local_130,local_134);
  }
  else if (local_134 == 1) {
    FUN_0089ea70();
  }
  else if (local_134 == 2) {
    (**(code **)(*in_ECX + 0x68))();
  }
  if (((local_136 != '\0') && (in_ECX[8] != 0)) && (*(int *)(in_ECX[8] + 0x1c) == 0)) {
    FUN_0088f0a0();
    return;
  }
  return;
}



void FUN_0088f700(int *param_1,float *param_2,char param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_78 [16];
  int aiStack_68 [9];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int aiStack_34 [11];
  float fStack_8;
  
  if ((((((param_1 != (int *)0x0) &&
         (piVar4 = (int *)(**(code **)(*param_1 + 8))(), piVar4 != (int *)0x0)) &&
        (*(short *)((int)piVar4 + 0xb6) != 0)) &&
       ((iVar5 = *(int *)piVar4[0x2c], iVar5 != 0 && (*(short *)(iVar5 + 0xb6) != 0)))) &&
      ((iVar1 = **(int **)(iVar5 + 0xb0), iVar1 != 0 && (iVar5 = FUN_0088f200(iVar5), iVar5 != 0))))
     && ((bVar2 = *(float *)(iVar5 + 0x14) == 0.0, *(int *)(iVar1 + 0xa8) != 0 || (bVar2)))) {
    if ((*(int *)(iVar5 + 0x10) == 0) || (cVar3 = FUN_00607840(), cVar3 == '\0')) {
      piVar6 = (int *)(iVar1 + 100);
      piVar7 = aiStack_68;
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
    }
    else {
      FUN_004d6900(&fStack_44);
      FUN_004d6950(auStack_78);
      FUN_0047c600(aiStack_68);
    }
    piVar6 = piVar4 + 0xc;
    piVar7 = aiStack_34;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    if ((param_3 != '\0') || (!bVar2)) {
      fStack_3c = fStack_8;
    }
    *param_2 = fStack_44;
    param_2[1] = fStack_40;
    param_2[2] = fStack_3c;
    *param_2 = *param_2 - (float)piVar4[0x15];
    param_2[1] = param_2[1] - (float)piVar4[0x16];
    param_2[2] = param_2[2] - (float)piVar4[0x17];
    piVar4[0x15] = (int)fStack_44;
    piVar4[0x16] = (int)fStack_40;
    piVar4[0x17] = (int)fStack_3c;
    piVar6 = aiStack_68;
    piVar7 = piVar4 + 0xc;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    if (param_3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0088f86e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar4 + 0x74))();
      return;
    }
  }
  return;
}



float10 FUN_0088fa30(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0088f200(param_1);
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 0x14);
  }
  return (float10)1.0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0088fa60(int param_1)

{
  int in_ECX;
  uint uVar1;
  uint local_48;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_48;
  FUN_0089eef0(param_1);
  local_48 = FUN_0070f910(DAT_00ba7a20);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_48);
  local_48 = FUN_0070fb90("fHeirGain",*(undefined4 *)(in_ECX + 0x14));
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_48);
  local_48 = FUN_0070fb90("fVelGain",*(undefined4 *)(in_ECX + 0x18));
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_48);
  local_48 = CONCAT31(local_48._1_3_,*(undefined1 *)(in_ECX + 0xd)) & 0xffffff01;
  local_48 = FUN_0070f950("bBlendPos",local_48);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_48);
  local_48 = CONCAT31(local_48._1_3_,(byte)((ushort)*(undefined2 *)(in_ECX + 0xc) >> 9)) &
             0xffffff01;
  local_48 = FUN_0070f950("bAlwaysBlend",local_48);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_48);
  _sprintf(local_44,"0x%08X",*(undefined4 *)(in_ECX + 0x20));
  local_48 = FUN_0070fc30("Stored World",local_44);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_48);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0088fcaa) */

void FUN_0088fc30(undefined1 *param_1,float param_2)

{
  float *in_ECX;
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (param_2 <= ABS((in_ECX[2] * in_ECX[2] + in_ECX[1] * in_ECX[1] + *in_ECX * *in_ECX) - 1.0)) {
    *param_1 = 0;
    return;
  }
  *param_1 = 1;
  return;
}



void FUN_0088fcc0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *in_ECX;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_1[0xd];
  fVar5 = param_1[0xe];
  fVar6 = param_1[0xf];
  fVar7 = param_1[9];
  fVar8 = param_1[10];
  fVar9 = param_1[0xb];
  fVar10 = param_1[5];
  fVar11 = param_1[6];
  fVar12 = param_1[7];
  fVar13 = param_1[1];
  fVar14 = param_1[2];
  fVar15 = param_1[3];
  *in_ECX = *param_1 * fVar1 + param_1[4] * fVar2 + param_1[8] * fVar3 + param_1[0xc];
  in_ECX[1] = fVar13 * fVar1 + fVar10 * fVar2 + fVar7 * fVar3 + fVar4;
  in_ECX[2] = fVar14 * fVar1 + fVar11 * fVar2 + fVar8 * fVar3 + fVar5;
  in_ECX[3] = fVar15 * fVar1 + fVar12 * fVar2 + fVar9 * fVar3 + fVar6;
  return;
}



void FUN_0088fd10(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_ECX;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_1[8];
  fVar2 = param_1[9];
  fVar3 = param_1[10];
  fVar4 = param_1[4];
  fVar5 = param_1[5];
  fVar6 = param_1[6];
  fVar7 = *param_2 - param_1[0xc];
  fVar8 = param_2[1] - param_1[0xd];
  fVar9 = param_2[2] - param_1[0xe];
  *in_ECX = *param_1 * fVar7 + param_1[1] * fVar8 + param_1[2] * fVar9;
  in_ECX[1] = fVar4 * fVar7 + fVar5 * fVar8 + fVar6 * fVar9;
  in_ECX[2] = fVar1 * fVar7 + fVar2 * fVar8 + fVar3 * fVar9;
  in_ECX[3] = fVar1 * fVar7 + fVar2 * fVar8 + fVar3 * fVar9;
  return;
}



void FUN_0088fd90(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *in_ECX;
  
  fVar1 = param_1[8];
  fVar2 = param_1[9];
  fVar3 = param_1[10];
  fVar4 = param_1[4];
  fVar5 = param_1[5];
  fVar6 = param_1[6];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  fVar9 = param_2[2];
  *in_ECX = *param_1 * fVar7 + param_1[1] * fVar8 + param_1[2] * fVar9;
  in_ECX[1] = fVar4 * fVar7 + fVar5 * fVar8 + fVar6 * fVar9;
  in_ECX[2] = fVar1 * fVar7 + fVar2 * fVar8 + fVar3 * fVar9;
  in_ECX[3] = fVar1 * fVar7 + fVar2 * fVar8 + fVar3 * fVar9;
  return;
}



void FUN_0088fe00(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *in_ECX;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_1[9];
  fVar5 = param_1[10];
  fVar6 = param_1[0xb];
  fVar7 = param_1[5];
  fVar8 = param_1[6];
  fVar9 = param_1[7];
  fVar10 = param_1[1];
  fVar11 = param_1[2];
  fVar12 = param_1[3];
  *in_ECX = *param_1 * fVar1 + param_1[4] * fVar2 + param_1[8] * fVar3;
  in_ECX[1] = fVar10 * fVar1 + fVar7 * fVar2 + fVar4 * fVar3;
  in_ECX[2] = fVar11 * fVar1 + fVar8 * fVar2 + fVar5 * fVar3;
  in_ECX[3] = fVar12 * fVar1 + fVar9 * fVar2 + fVar6 * fVar3;
  return;
}



void FUN_0088fee0(int param_1,float param_2)

{
  int in_ECX;
  
  if (*(float *)(in_ECX + 0x50 + param_1 * 4) == 1.1754944e-38) {
    *(float *)(in_ECX + 0x50 + param_1 * 4) = param_2;
    return;
  }
  *(float *)(in_ECX + 0x50 + param_1 * 4) =
       (*(float *)(in_ECX + 0x50 + param_1 * 4) + param_2) * 0.5;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0088ff20(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  int in_ECX;
  uint uVar10;
  int iVar11;
  undefined1 auStack_5c [28];
  float local_40 [11];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_5c;
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar2 = param_2[2];
  fVar5 = param_2[3];
  pfVar9 = local_40;
  param_1 = param_1 - (int)pfVar9;
  iVar11 = 2;
  do {
    pfVar1 = (float *)(param_1 + (int)pfVar9);
    fVar6 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar8 = pfVar1[3];
    *pfVar9 = fVar3 - *pfVar1;
    pfVar9[1] = fVar4 - fVar6;
    pfVar9[2] = fVar2 - fVar7;
    pfVar9[3] = fVar5 - fVar8;
    pfVar9[2] = 0.0;
    pfVar9 = pfVar9 + 4;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  uVar10 = (uint)(local_40[6] * local_40[6] + local_40[5] * local_40[5] + local_40[4] * local_40[4]
                 <= local_40[2] * local_40[2] +
                    local_40[1] * local_40[1] + local_40[0] * local_40[0]);
  if (*(float *)(in_ECX + 0x50 + uVar10 * 4) != 1.1754944e-38) {
    fVar2 = (fVar2 + *(float *)(in_ECX + 0x50 + uVar10 * 4)) * 0.5;
  }
  *(float *)(in_ECX + 0x50 + uVar10 * 4) = fVar2;
  return;
}


