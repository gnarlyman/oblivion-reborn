
void FUN_008c0000(byte param_1)

{
  FUN_008bfe20();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008c0020(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d747b;
  local_1c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar2 = *(int *)(in_ECX + 4);
  if (param_1 == 0) {
    iVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xa0,0x29,uVar6);
    *(undefined2 *)(iVar7 + 4) = 0xa0;
    uStack_14 = 0;
    param_1 = FUN_009107c0();
  }
  uStack_14 = 0xffffffff;
  uVar3 = *(undefined4 *)(iVar2 + 0x14);
  uVar4 = *(undefined4 *)(iVar2 + 0x18);
  uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x24);
  uVar4 = *(undefined4 *)(iVar2 + 0x28);
  uVar5 = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x34);
  uVar4 = *(undefined4 *)(iVar2 + 0x38);
  uVar5 = *(undefined4 *)(iVar2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x44);
  uVar4 = *(undefined4 *)(iVar2 + 0x48);
  uVar5 = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x54);
  uVar4 = *(undefined4 *)(iVar2 + 0x58);
  uVar5 = *(undefined4 *)(iVar2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 100);
  uVar4 = *(undefined4 *)(iVar2 + 0x68);
  uVar5 = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x74);
  uVar4 = *(undefined4 *)(iVar2 + 0x78);
  uVar5 = *(undefined4 *)(iVar2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x84);
  uVar4 = *(undefined4 *)(iVar2 + 0x88);
  uVar5 = *(undefined4 *)(iVar2 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  *(undefined4 *)(param_1 + 0x8c) = uVar5;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iVar2 + 0x9c);
  fVar1 = *(float *)(param_2 + 0x10);
  if (fVar1 != 1.0) {
    *(float *)(param_1 + 0x10) = fVar1 * *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x14) = fVar1 * *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 0x18) = fVar1 * *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x1c) = fVar1 * *(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x30) = fVar1 * *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x34) = fVar1 * *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x38) = fVar1 * *(float *)(param_1 + 0x38);
    *(float *)(param_1 + 0x3c) = fVar1 * *(float *)(param_1 + 0x3c);
  }
  FUN_008a07b0(param_1,param_2);
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_008c0330(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[2] = 1;
  *in_ECX = &PTR_FUN_00a98a3c;
  return;
}



undefined4 FUN_008c0350(undefined1 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    *param_1 = 0;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  puVar1 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar2 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[2] = 1;
    *puVar1 = &PTR_FUN_00a98a3c;
  }
  *(undefined4 **)(in_ECX + 0xc) = puVar2;
  if (*(int *)(in_ECX + 8) != 0) {
    if (puVar2 != (undefined4 *)0x0) {
      FUN_008a07e0(puVar2 + -1);
      *param_1 = 1;
      return *(undefined4 *)(in_ECX + 0xc);
    }
    FUN_008a07e0(0);
  }
  *param_1 = 1;
  return *(undefined4 *)(in_ECX + 0xc);
}



void FUN_008c03f0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d747b;
  local_1c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar2 = *(int *)(in_ECX + 4);
  if (param_1 == 0) {
    iVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x30,0x29,uVar6);
    *(undefined2 *)(iVar7 + 4) = 0x30;
    uStack_14 = 0;
    param_1 = FUN_00910e00();
  }
  uStack_14 = 0xffffffff;
  uVar3 = *(undefined4 *)(iVar2 + 0x14);
  uVar4 = *(undefined4 *)(iVar2 + 0x18);
  uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x24);
  uVar4 = *(undefined4 *)(iVar2 + 0x28);
  uVar5 = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
  fVar1 = *(float *)(param_2 + 0x10);
  if (fVar1 != 1.0) {
    *(float *)(param_1 + 0x10) = fVar1 * *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x14) = fVar1 * *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 0x18) = fVar1 * *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x1c) = fVar1 * *(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x20) = fVar1 * *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x24) = fVar1 * *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = fVar1 * *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x2c) = fVar1 * *(float *)(param_1 + 0x2c);
  }
  FUN_008a07b0(param_1,param_2);
  *unaff_FS_OFFSET = local_1c;
  return;
}



undefined4 FUN_008c04e0(void)

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
  puStack_8 = &LAB_009d744b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 4) == 0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x30,0x29,uVar1);
    *(undefined2 *)(iVar2 + 4) = 0x30;
    uStack_4 = 0;
    uVar3 = FUN_00910e00();
    *(undefined4 *)(in_ECX + 4) = uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0x30;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c0550(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7418;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a98a64;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba80ac = _DAT_00ba80ac + -1;
  local_4 = 0xffffffff;
  FUN_008a0250();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c05c0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a564a4;
    puVar2[3] = 0;
    DAT_00ba7d4c = DAT_00ba7d4c + 1;
    *puVar2 = &PTR_FUN_00a98a64;
    _DAT_00ba80ac = _DAT_00ba80ac + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c0650(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a564a4;
    puVar2[3] = 0;
    DAT_00ba7d4c = DAT_00ba7d4c + 1;
    *puVar2 = &PTR_FUN_00a98a64;
    _DAT_00ba80ac = _DAT_00ba80ac + 1;
  }
  local_4 = 0xffffffff;
  FUN_008a0860(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_008c0730(byte param_1)

{
  FUN_008c0550();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008c0750(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_008a0c30(param_1);
  iVar1 = *(int *)(in_ECX + 4);
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0x10,0x10,0,0);
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0x20,0x10,0,0);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0xc,4,&param_1,1);
  return;
}



void FUN_008c07c0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_008a0c80(param_1);
  iVar1 = *(int *)(in_ECX + 4);
  param_1 = 0x10;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x10,0x10,&param_1,1);
  param_1 = 0x10;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x20,0x10,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0xc,4,&param_1,1);
  return;
}



void FUN_008c0840(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[2] = 1;
  *in_ECX = &PTR_FUN_00a98afc;
  return;
}



undefined4 FUN_008c0860(undefined1 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    *param_1 = 0;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  puVar1 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar2 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[2] = 1;
    *puVar1 = &PTR_FUN_00a98afc;
  }
  *(undefined4 **)(in_ECX + 0xc) = puVar2;
  if (*(int *)(in_ECX + 8) != 0) {
    if (puVar2 != (undefined4 *)0x0) {
      FUN_008a07e0(puVar2 + -1);
      *param_1 = 1;
      return *(undefined4 *)(in_ECX + 0xc);
    }
    FUN_008a07e0(0);
  }
  *param_1 = 1;
  return *(undefined4 *)(in_ECX + 0xc);
}



undefined4 FUN_008c0900(void)

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
  puStack_8 = &LAB_009d744b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 4) == 0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x90,0x29,uVar1);
    *(undefined2 *)(iVar2 + 4) = 0x90;
    uStack_4 = 0;
    uVar3 = FUN_00911000();
    *(undefined4 *)(in_ECX + 4) = uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0x90;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c0970(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7418;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a98b24;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba80b8 = _DAT_00ba80b8 + -1;
  local_4 = 0xffffffff;
  FUN_008a0250();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c09e0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a564a4;
    puVar2[3] = 0;
    DAT_00ba7d4c = DAT_00ba7d4c + 1;
    *puVar2 = &PTR_FUN_00a98b24;
    _DAT_00ba80b8 = _DAT_00ba80b8 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c0a70(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a564a4;
    puVar2[3] = 0;
    DAT_00ba7d4c = DAT_00ba7d4c + 1;
    *puVar2 = &PTR_FUN_00a98b24;
    _DAT_00ba80b8 = _DAT_00ba80b8 + 1;
  }
  local_4 = 0xffffffff;
  FUN_008a0860(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_008c0b50(byte param_1)

{
  FUN_008c0970();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008c0b70(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d747b;
  local_1c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar2 = *(int *)(in_ECX + 4);
  if (param_1 == 0) {
    iVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x90,0x29,uVar6);
    *(undefined2 *)(iVar7 + 4) = 0x90;
    uStack_14 = 0;
    param_1 = FUN_00911000();
  }
  uStack_14 = 0xffffffff;
  uVar3 = *(undefined4 *)(iVar2 + 0x14);
  uVar4 = *(undefined4 *)(iVar2 + 0x18);
  uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x24);
  uVar4 = *(undefined4 *)(iVar2 + 0x28);
  uVar5 = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x34);
  uVar4 = *(undefined4 *)(iVar2 + 0x38);
  uVar5 = *(undefined4 *)(iVar2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x44);
  uVar4 = *(undefined4 *)(iVar2 + 0x48);
  uVar5 = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x54);
  uVar4 = *(undefined4 *)(iVar2 + 0x58);
  uVar5 = *(undefined4 *)(iVar2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 100);
  uVar4 = *(undefined4 *)(iVar2 + 0x68);
  uVar5 = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar2 + 0x84);
  fVar1 = *(float *)(param_2 + 0x10);
  if (fVar1 != 1.0) {
    *(float *)(param_1 + 0x10) = fVar1 * *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x14) = fVar1 * *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 0x18) = fVar1 * *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x1c) = fVar1 * *(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x40) = fVar1 * *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x44) = fVar1 * *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x48) = fVar1 * *(float *)(param_1 + 0x48);
    *(float *)(param_1 + 0x4c) = fVar1 * *(float *)(param_1 + 0x4c);
  }
  FUN_008a07b0(param_1,param_2);
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_008c0cb0(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 auStack_14 [4];
  
  FUN_008a0c30(param_1);
  iVar2 = *(int *)(in_ECX + 4);
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),iVar2 + 0x10,0x30,0,0);
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),iVar2 + 0x40,0x30,0,0);
  auStack_14[0] = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))
            (*(int *)(param_1 + 0x21c),iVar2 + 0x70,4,auStack_14,1);
  auStack_14[0] = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))
            (*(int *)(param_1 + 0x21c),iVar2 + 0x74,4,auStack_14,1);
  auStack_14[0] = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))
            (*(int *)(param_1 + 0x21c),iVar2 + 0x78,4,auStack_14,1);
  auStack_14[0] = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))
            (*(int *)(param_1 + 0x21c),iVar2 + 0x7c,4,auStack_14,1);
  auStack_14[0] = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))
            (*(int *)(param_1 + 0x21c),iVar2 + 0x80,4,auStack_14,1);
  pfVar1 = (float *)(iVar2 + 0x84);
  auStack_14[0] = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),pfVar1,4,auStack_14,1);
  if (*pfVar1 == 0.0) {
    *pfVar1 = 10.0;
  }
  fVar3 = *(float *)(iVar2 + 0x20);
  fVar4 = *(float *)(iVar2 + 0x24);
  fVar5 = *(float *)(iVar2 + 0x28);
  fVar7 = fVar5 * fVar5;
  fVar6 = fVar7 + fVar4 * fVar4 + fVar3 * fVar3;
  auVar8._4_4_ = fVar7;
  auVar8._0_4_ = fVar6;
  auVar8._8_4_ = fVar7;
  auVar8._12_4_ = fVar7;
  auVar8 = rsqrtss(auVar8,auVar8);
  fVar7 = auVar8._0_4_;
  fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
  *(float *)(iVar2 + 0x20) = fVar6 * fVar3;
  *(float *)(iVar2 + 0x24) = fVar6 * fVar4;
  *(float *)(iVar2 + 0x28) = fVar6 * fVar5;
  *(float *)(iVar2 + 0x2c) = fVar6 * *(float *)(iVar2 + 0x2c);
  fVar3 = *(float *)(iVar2 + 0x30);
  fVar4 = *(float *)(iVar2 + 0x34);
  fVar5 = *(float *)(iVar2 + 0x38);
  fVar7 = fVar5 * fVar5;
  fVar6 = fVar7 + fVar4 * fVar4 + fVar3 * fVar3;
  auVar9._4_4_ = fVar7;
  auVar9._0_4_ = fVar6;
  auVar9._8_4_ = fVar7;
  auVar9._12_4_ = fVar7;
  auVar8 = rsqrtss(auVar9,auVar9);
  fVar7 = auVar8._0_4_;
  fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
  *(float *)(iVar2 + 0x30) = fVar6 * fVar3;
  *(float *)(iVar2 + 0x34) = fVar6 * fVar4;
  *(float *)(iVar2 + 0x38) = fVar6 * fVar5;
  *(float *)(iVar2 + 0x3c) = fVar6 * *(float *)(iVar2 + 0x3c);
  fVar3 = *(float *)(iVar2 + 0x50);
  fVar4 = *(float *)(iVar2 + 0x54);
  fVar5 = *(float *)(iVar2 + 0x58);
  fVar7 = fVar5 * fVar5;
  fVar6 = fVar7 + fVar4 * fVar4 + fVar3 * fVar3;
  auVar10._4_4_ = fVar7;
  auVar10._0_4_ = fVar6;
  auVar10._8_4_ = fVar7;
  auVar10._12_4_ = fVar7;
  auVar8 = rsqrtss(auVar10,auVar10);
  fVar7 = auVar8._0_4_;
  fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
  *(float *)(iVar2 + 0x50) = fVar6 * fVar3;
  *(float *)(iVar2 + 0x54) = fVar6 * fVar4;
  *(float *)(iVar2 + 0x58) = fVar6 * fVar5;
  *(float *)(iVar2 + 0x5c) = fVar6 * *(float *)(iVar2 + 0x5c);
  fVar3 = *(float *)(iVar2 + 0x60);
  fVar4 = *(float *)(iVar2 + 100);
  fVar5 = *(float *)(iVar2 + 0x68);
  fVar7 = fVar5 * fVar5;
  fVar6 = fVar7 + fVar4 * fVar4 + fVar3 * fVar3;
  auVar11._4_4_ = fVar7;
  auVar11._0_4_ = fVar6;
  auVar11._8_4_ = fVar7;
  auVar11._12_4_ = fVar7;
  auVar8 = rsqrtss(auVar11,auVar11);
  fVar7 = auVar8._0_4_;
  fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
  *(float *)(iVar2 + 0x60) = fVar6 * fVar3;
  *(float *)(iVar2 + 100) = fVar6 * fVar4;
  *(float *)(iVar2 + 0x68) = fVar6 * fVar5;
  *(float *)(iVar2 + 0x6c) = fVar6 * *(float *)(iVar2 + 0x6c);
  return;
}



void FUN_008c1030(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_a0 = 0;
  local_70 = 0;
  local_9c = 0;
  local_6c = 0;
  local_98 = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &local_a0;
    (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),param_2,0x90,0,0);
  }
  FUN_008a01f0(param_1,param_2);
  uVar1 = param_2[5];
  iVar4 = *(int *)(in_ECX + 4);
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(iVar4 + 0x10) = param_2[4];
  *(undefined4 *)(iVar4 + 0x14) = uVar1;
  *(undefined4 *)(iVar4 + 0x18) = uVar2;
  *(undefined4 *)(iVar4 + 0x1c) = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  *(undefined4 *)(iVar4 + 0x20) = param_2[0xc];
  *(undefined4 *)(iVar4 + 0x24) = uVar1;
  *(undefined4 *)(iVar4 + 0x28) = uVar2;
  *(undefined4 *)(iVar4 + 0x2c) = uVar3;
  uVar1 = param_2[0x15];
  uVar2 = param_2[0x16];
  uVar3 = param_2[0x17];
  *(undefined4 *)(iVar4 + 0x30) = param_2[0x14];
  *(undefined4 *)(iVar4 + 0x34) = uVar1;
  *(undefined4 *)(iVar4 + 0x38) = uVar2;
  *(undefined4 *)(iVar4 + 0x3c) = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(undefined4 *)(iVar4 + 0x40) = param_2[8];
  *(undefined4 *)(iVar4 + 0x44) = uVar1;
  *(undefined4 *)(iVar4 + 0x48) = uVar2;
  *(undefined4 *)(iVar4 + 0x4c) = uVar3;
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x12];
  uVar3 = param_2[0x13];
  *(undefined4 *)(iVar4 + 0x50) = param_2[0x10];
  *(undefined4 *)(iVar4 + 0x54) = uVar1;
  *(undefined4 *)(iVar4 + 0x58) = uVar2;
  *(undefined4 *)(iVar4 + 0x5c) = uVar3;
  uVar1 = param_2[0x19];
  uVar2 = param_2[0x1a];
  uVar3 = param_2[0x1b];
  *(undefined4 *)(iVar4 + 0x60) = param_2[0x18];
  *(undefined4 *)(iVar4 + 100) = uVar1;
  *(undefined4 *)(iVar4 + 0x68) = uVar2;
  *(undefined4 *)(iVar4 + 0x6c) = uVar3;
  *(undefined4 *)(iVar4 + 0x70) = param_2[0x1c];
  *(undefined4 *)(iVar4 + 0x74) = param_2[0x1d];
  *(undefined4 *)(iVar4 + 0x78) = param_2[0x1e];
  *(undefined4 *)(iVar4 + 0x7c) = param_2[0x1f];
  *(undefined4 *)(iVar4 + 0x80) = param_2[0x20];
  *(undefined4 *)(iVar4 + 0x84) = param_2[0x21];
  return;
}



void FUN_008c1250(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[2] = 1;
  *in_ECX = &PTR_FUN_00a98bbc;
  return;
}



void FUN_008c12b0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  undefined1 local_c [12];
  
  iVar2 = param_1;
  FUN_008a0d20(param_1);
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 != 0) {
    FUN_004d68a0(local_c,iVar1 + 0x10);
    param_1 = FUN_00707280("PivotInA");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    FUN_004d68a0(local_c,iVar1 + 0x20);
    param_1 = FUN_00707280("planeAxisA");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    FUN_004d68a0(local_c,iVar1 + 0x30);
    param_1 = FUN_00707280("twistAxisA");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    FUN_004d68a0(local_c,iVar1 + 0x40);
    param_1 = FUN_00707280("PivotInB");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    FUN_004d68a0(local_c,iVar1 + 0x50);
    param_1 = FUN_00707280("planeAxisB");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    FUN_004d68a0(local_c,iVar1 + 0x60);
    param_1 = FUN_00707280("twistAxisB");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    param_1 = FUN_0070fb90("ConeMinAngle",*(undefined4 *)(iVar1 + 0x70));
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    param_1 = FUN_0070fb90("PlaneMinAngle",*(undefined4 *)(iVar1 + 0x74));
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    param_1 = FUN_0070fb90("PlaneMaxAngle",*(undefined4 *)(iVar1 + 0x78));
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    param_1 = FUN_0070fb90("TwistMinAngle",*(undefined4 *)(iVar1 + 0x7c));
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    param_1 = FUN_0070fb90("TwistMaxAngle",*(undefined4 *)(iVar1 + 0x80));
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    param_1 = FUN_0070fb90("MaxFrictionTrq",*(undefined4 *)(iVar1 + 0x84));
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
  }
  return;
}



undefined4 FUN_008c1620(undefined1 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    *param_1 = 0;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  puVar1 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar2 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[2] = 1;
    *puVar1 = &PTR_FUN_00a98bbc;
  }
  *(undefined4 **)(in_ECX + 0xc) = puVar2;
  if (*(int *)(in_ECX + 8) != 0) {
    if (puVar2 != (undefined4 *)0x0) {
      FUN_008a07e0(puVar2 + -1);
      *param_1 = 1;
      return *(undefined4 *)(in_ECX + 0xc);
    }
    FUN_008a07e0(0);
  }
  *param_1 = 1;
  return *(undefined4 *)(in_ECX + 0xc);
}



undefined4 FUN_008c16d0(void)

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
  puStack_8 = &LAB_009d744b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 4) == 0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xa0,0x29,uVar1);
    *(undefined2 *)(iVar2 + 4) = 0xa0;
    uStack_4 = 0;
    uVar3 = FUN_009117e0();
    *(undefined4 *)(in_ECX + 4) = uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0xa0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c1740(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7418;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a98c64;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba80c4 = _DAT_00ba80c4 + -1;
  local_4 = 0xffffffff;
  FUN_008a0250();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c17b0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a564a4;
    puVar2[3] = 0;
    DAT_00ba7d4c = DAT_00ba7d4c + 1;
    *puVar2 = &PTR_FUN_00a98c64;
    _DAT_00ba80c4 = _DAT_00ba80c4 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c1840(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a564a4;
    puVar2[3] = 0;
    DAT_00ba7d4c = DAT_00ba7d4c + 1;
    *puVar2 = &PTR_FUN_00a98c64;
    _DAT_00ba80c4 = _DAT_00ba80c4 + 1;
  }
  local_4 = 0xffffffff;
  FUN_008a0860(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_008c1970(byte param_1)

{
  FUN_008c1740();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008c1990(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d747b;
  local_1c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar2 = *(int *)(in_ECX + 4);
  if (param_1 == 0) {
    iVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xa0,0x29,uVar6);
    *(undefined2 *)(iVar7 + 4) = 0xa0;
    uStack_14 = 0;
    param_1 = FUN_009117e0();
  }
  uStack_14 = 0xffffffff;
  uVar3 = *(undefined4 *)(iVar2 + 0x14);
  uVar4 = *(undefined4 *)(iVar2 + 0x18);
  uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x24);
  uVar4 = *(undefined4 *)(iVar2 + 0x28);
  uVar5 = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x34);
  uVar4 = *(undefined4 *)(iVar2 + 0x38);
  uVar5 = *(undefined4 *)(iVar2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x44);
  uVar4 = *(undefined4 *)(iVar2 + 0x48);
  uVar5 = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x54);
  uVar4 = *(undefined4 *)(iVar2 + 0x58);
  uVar5 = *(undefined4 *)(iVar2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 100);
  uVar4 = *(undefined4 *)(iVar2 + 0x68);
  uVar5 = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x74);
  uVar4 = *(undefined4 *)(iVar2 + 0x78);
  uVar5 = *(undefined4 *)(iVar2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x84);
  uVar4 = *(undefined4 *)(iVar2 + 0x88);
  uVar5 = *(undefined4 *)(iVar2 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  *(undefined4 *)(param_1 + 0x8c) = uVar5;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar2 + 0x94);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar2 + 0x90);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar2 + 0x98);
  fVar1 = *(float *)(param_2 + 0x10);
  if (fVar1 != 1.0) {
    *(float *)(param_1 + 0x10) = fVar1 * *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x14) = fVar1 * *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 0x18) = fVar1 * *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x1c) = fVar1 * *(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x20) = fVar1 * *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x24) = fVar1 * *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = fVar1 * *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x2c) = fVar1 * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x60) = fVar1 * *(float *)(param_1 + 0x60);
    *(float *)(param_1 + 100) = fVar1 * *(float *)(param_1 + 100);
    *(float *)(param_1 + 0x68) = fVar1 * *(float *)(param_1 + 0x68);
    *(float *)(param_1 + 0x6c) = fVar1 * *(float *)(param_1 + 0x6c);
    *(float *)(param_1 + 0x70) = fVar1 * *(float *)(param_1 + 0x70);
    *(float *)(param_1 + 0x74) = fVar1 * *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x78) = fVar1 * *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x7c) = fVar1 * *(float *)(param_1 + 0x7c);
  }
  FUN_008a07b0(param_1,param_2);
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_008c1b00(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_008a0c30(param_1);
  iVar1 = *(int *)(in_ECX + 4);
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0x10,0x50,0,0);
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0x60,0x30,0,0);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0x90,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0x94,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0x98,4,&param_1,1);
  return;
}



void FUN_008c1bc0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_008a0c80(param_1);
  iVar1 = *(int *)(in_ECX + 4);
  param_1 = 0x50;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x10,0x50,&param_1,1);
  param_1 = 0x30;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x60,0x30,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x90,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x94,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x98,4,&param_1,1);
  return;
}



void FUN_008c1c90(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[2] = 1;
  *in_ECX = &PTR_FUN_00a98cfc;
  return;
}



undefined4 FUN_008c1cb0(undefined1 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    *param_1 = 0;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  puVar1 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar2 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[2] = 1;
    *puVar1 = &PTR_FUN_00a98cfc;
  }
  *(undefined4 **)(in_ECX + 0xc) = puVar2;
  if (*(int *)(in_ECX + 8) != 0) {
    if (puVar2 != (undefined4 *)0x0) {
      FUN_008a07e0(puVar2 + -1);
      *param_1 = 1;
      return *(undefined4 *)(in_ECX + 0xc);
    }
    FUN_008a07e0(0);
  }
  *param_1 = 1;
  return *(undefined4 *)(in_ECX + 0xc);
}



void FUN_008c1d50(byte param_1)

{
  FUN_00911df0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c1d80(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d74a8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0(uVar1);
  iVar2 = 0;
  *in_ECX = &PTR_FUN_00a564a4;
  in_ECX[3] = 0;
  DAT_00ba7d4c = DAT_00ba7d4c + 1;
  *in_ECX = &PTR_FUN_00a98d24;
  _DAT_00ba8354 = _DAT_00ba8354 + 1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a98dbc;
  if (param_1 != 0) {
    iVar2 = param_1 + 4;
  }
  FUN_008a0610(iVar2);
  _DAT_00ba80d0 = _DAT_00ba80d0 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c1e10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7418;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0(uVar1);
  iVar2 = 0;
  in_ECX[3] = 0;
  *in_ECX = &PTR_FUN_00a564a4;
  DAT_00ba7d4c = DAT_00ba7d4c + 1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a987a4;
  if (param_1 != 0) {
    iVar2 = param_1 + 4;
  }
  FUN_008a0610(iVar2);
  _DAT_00ba8088 = _DAT_00ba8088 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008c1e90(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d74db;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x4c,0x29,uVar1);
    *(undefined2 *)(iVar2 + 4) = 0x4c;
    uStack_4 = 0;
    param_1 = FUN_00913180();
  }
  uStack_4 = 0xffffffff;
  FUN_00911d50(param_1,param_2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_008c1f30(void)

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
  puStack_8 = &LAB_009d744b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 4) == 0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x4c,0x29,uVar1);
    *(undefined2 *)(iVar2 + 4) = 0x4c;
    uStack_4 = 0;
    uVar3 = FUN_00913180();
    *(undefined4 *)(in_ECX + 4) = uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0x4c;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c1fb0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d74a8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a98dbc;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba80d0 = _DAT_00ba80d0 + -1;
  local_4 = 0xffffffff;
  FUN_00911df0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c2020(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a564a4;
    puVar2[3] = 0;
    DAT_00ba7d4c = DAT_00ba7d4c + 1;
    *puVar2 = &PTR_FUN_00a98d24;
    _DAT_00ba8354 = _DAT_00ba8354 + 1;
    *puVar2 = &PTR_FUN_00a98dbc;
    _DAT_00ba80d0 = _DAT_00ba80d0 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c20c0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a564a4;
    puVar2[3] = 0;
    DAT_00ba7d4c = DAT_00ba7d4c + 1;
    *puVar2 = &PTR_FUN_00a98d24;
    _DAT_00ba8354 = _DAT_00ba8354 + 1;
    *puVar2 = &PTR_FUN_00a98dbc;
    _DAT_00ba80d0 = _DAT_00ba80d0 + 1;
  }
  local_4 = 0xffffffff;
  FUN_008a0860(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_008c21b0(byte param_1)

{
  FUN_008c1fb0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008c21d0(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  undefined1 auStack_c4 [36];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [28];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_c4;
  (**(code **)(*in_ECX + 0x10))();
  FUN_009132a0(in_ECX[1]);
  iVar1 = in_ECX[4];
  FUN_008b1ff0(*(int *)(in_ECX[3] + 0x50) + 0x10,param_1);
  FUN_008b1ff0(*(int *)(iVar1 + 0x50) + 0x10,param_1);
  FUN_009135e0(auStack_70);
  FUN_00913370(auStack_a0);
  iVar1 = FUN_00913660(auStack_30);
  in_ECX[5] = iVar1;
  iVar1 = FUN_00913460(auStack_60);
  in_ECX[6] = iVar1;
  FUN_009132e0();
  FUN_00913550();
  FUN_009136e0(0x3dcccccd,0x3f800000);
  FUN_009137b0();
  FUN_00913810();
  return;
}



void FUN_008c22d0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[2] = 1;
  *in_ECX = &PTR_FUN_00a98e54;
  return;
}



undefined4 FUN_008c22f0(int *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d7526;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = 1;
  local_28 = &PTR_FUN_00a98e70;
  local_4 = 0;
  iVar2 = (**(code **)(*param_1 + 0x8c))(uVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  iVar3 = (**(code **)(*param_1 + 0x88))();
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0xc) == 0)) {
    local_1c = 0;
  }
  else {
    local_1c = *(undefined4 *)(*(int *)(iVar3 + 0xc) + 8);
  }
  if (iVar2 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(iVar2 + 8);
  }
  iVar2 = (**(code **)(*param_1 + 0x88))();
  if (iVar2 == 0) {
    puVar4 = &DAT_00b2f090;
  }
  else {
    puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x50) + 0x10);
  }
  FUN_008c21d0(puVar4);
  if (1.0 <= param_2) {
    iVar2 = FUN_00401f00(0x10);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_008c1d80(&local_28);
    }
  }
  else {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_34 = 1;
    ppuStack_3c = &PTR_LAB_00a9883c;
    local_4._0_1_ = 1;
    FUN_008beec0();
    FUN_008bef00(local_24);
    uStack_30 = local_1c;
    uStack_2c = local_18;
    FUN_008bede0(0x3f800000);
    FUN_008bee00(param_2);
    iVar2 = FUN_00401f00(0x10);
    local_4._0_1_ = 2;
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_008c1e10(&ppuStack_3c);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    ppuStack_3c = &PTR_FUN_00a56484;
    FUN_008a0200(0);
  }
  local_4 = 0xffffffff;
  local_28 = &PTR_FUN_00a56484;
  FUN_008a0200(0);
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



undefined4 FUN_008c24c0(undefined1 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    *param_1 = 0;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  puVar1 = (undefined4 *)FUN_00401f00(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar2 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[2] = 1;
    *puVar1 = &PTR_FUN_00a98e70;
  }
  *(undefined4 **)(in_ECX + 0xc) = puVar2;
  if (*(int *)(in_ECX + 8) != 0) {
    if (puVar2 != (undefined4 *)0x0) {
      FUN_008a07e0(puVar2 + -1);
      *param_1 = 1;
      return *(undefined4 *)(in_ECX + 0xc);
    }
    FUN_008a07e0(0);
  }
  *param_1 = 1;
  return *(undefined4 *)(in_ECX + 0xc);
}



undefined4 FUN_008c25b0(void)

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
  puStack_8 = &LAB_009d744b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 4) == 0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x60,0x29,uVar1);
    *(undefined2 *)(iVar2 + 4) = 0x60;
    uStack_4 = 0;
    uVar3 = FUN_009138d0();
    *(undefined4 *)(in_ECX + 4) = uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0x60;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c2620(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7418;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a98e9c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba80dc = _DAT_00ba80dc + -1;
  local_4 = 0xffffffff;
  FUN_008a0250();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c2690(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a564a4;
    puVar2[3] = 0;
    DAT_00ba7d4c = DAT_00ba7d4c + 1;
    *puVar2 = &PTR_FUN_00a98e9c;
    _DAT_00ba80dc = _DAT_00ba80dc + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c2720(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a564a4;
    puVar2[3] = 0;
    DAT_00ba7d4c = DAT_00ba7d4c + 1;
    *puVar2 = &PTR_FUN_00a98e9c;
    _DAT_00ba80dc = _DAT_00ba80dc + 1;
  }
  local_4 = 0xffffffff;
  FUN_008a0860(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_008c2800(byte param_1)

{
  FUN_008c2620();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008c2820(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d747b;
  local_1c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar2 = *(int *)(in_ECX + 4);
  if (param_1 == 0) {
    iVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x60,0x29,uVar6);
    *(undefined2 *)(iVar7 + 4) = 0x60;
    uStack_14 = 0;
    param_1 = FUN_009138d0();
  }
  uStack_14 = 0xffffffff;
  uVar3 = *(undefined4 *)(iVar2 + 0x14);
  uVar4 = *(undefined4 *)(iVar2 + 0x18);
  uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x24);
  uVar4 = *(undefined4 *)(iVar2 + 0x28);
  uVar5 = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x34);
  uVar4 = *(undefined4 *)(iVar2 + 0x38);
  uVar5 = *(undefined4 *)(iVar2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x44);
  uVar4 = *(undefined4 *)(iVar2 + 0x48);
  uVar5 = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x54);
  uVar4 = *(undefined4 *)(iVar2 + 0x58);
  uVar5 = *(undefined4 *)(iVar2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  fVar1 = *(float *)(param_2 + 0x10);
  if (fVar1 != 1.0) {
    *(float *)(param_1 + 0x10) = fVar1 * *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x14) = fVar1 * *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 0x18) = fVar1 * *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x1c) = fVar1 * *(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x40) = fVar1 * *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x44) = fVar1 * *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x48) = fVar1 * *(float *)(param_1 + 0x48);
    *(float *)(param_1 + 0x4c) = fVar1 * *(float *)(param_1 + 0x4c);
  }
  FUN_008a07b0(param_1,param_2);
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_008c2920(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_70 = 0;
  local_40 = 0;
  local_6c = 0;
  local_3c = 0;
  local_68 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &local_70;
    (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),param_2,0x60,0,0);
  }
  FUN_008a01f0(param_1,param_2);
  uVar1 = param_2[5];
  iVar4 = *(int *)(in_ECX + 4);
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(iVar4 + 0x10) = param_2[4];
  *(undefined4 *)(iVar4 + 0x14) = uVar1;
  *(undefined4 *)(iVar4 + 0x18) = uVar2;
  *(undefined4 *)(iVar4 + 0x1c) = uVar3;
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x12];
  uVar3 = param_2[0x13];
  *(undefined4 *)(iVar4 + 0x20) = param_2[0x10];
  *(undefined4 *)(iVar4 + 0x24) = uVar1;
  *(undefined4 *)(iVar4 + 0x28) = uVar2;
  *(undefined4 *)(iVar4 + 0x2c) = uVar3;
  uVar1 = param_2[0x15];
  uVar2 = param_2[0x16];
  uVar3 = param_2[0x17];
  *(undefined4 *)(iVar4 + 0x30) = param_2[0x14];
  *(undefined4 *)(iVar4 + 0x34) = uVar1;
  *(undefined4 *)(iVar4 + 0x38) = uVar2;
  *(undefined4 *)(iVar4 + 0x3c) = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(undefined4 *)(iVar4 + 0x40) = param_2[8];
  *(undefined4 *)(iVar4 + 0x44) = uVar1;
  *(undefined4 *)(iVar4 + 0x48) = uVar2;
  *(undefined4 *)(iVar4 + 0x4c) = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  *(undefined4 *)(iVar4 + 0x50) = param_2[0xc];
  *(undefined4 *)(iVar4 + 0x54) = uVar1;
  *(undefined4 *)(iVar4 + 0x58) = uVar2;
  *(undefined4 *)(iVar4 + 0x5c) = uVar3;
  return;
}



void FUN_008c2b20(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[2] = 1;
  *in_ECX = &PTR_FUN_00a98f34;
  return;
}



void FUN_008c2b40(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  undefined1 local_c [12];
  
  iVar2 = param_1;
  FUN_008a0d20(param_1);
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 != 0) {
    FUN_004d68a0(local_c,iVar1 + 0x10);
    param_1 = FUN_00707280("PivotInA");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    FUN_004d68a0(local_c,iVar1 + 0x40);
    param_1 = FUN_00707280("PivotInB");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    FUN_004d68a0(local_c,iVar1 + 0x50);
    param_1 = FUN_00707280("AxleInB");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    FUN_004d68a0(local_c,iVar1 + 0x20);
    param_1 = FUN_00707280("Perp2AxleInA1");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    FUN_004d68a0(local_c,iVar1 + 0x30);
    param_1 = FUN_00707280("Perp2AxleInA2");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
  }
  return;
}



undefined4 FUN_008c2ce0(undefined1 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    *param_1 = 0;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  puVar1 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar2 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[2] = 1;
    *puVar1 = &PTR_FUN_00a98f34;
  }
  *(undefined4 **)(in_ECX + 0xc) = puVar2;
  if (*(int *)(in_ECX + 8) != 0) {
    if (puVar2 != (undefined4 *)0x0) {
      FUN_008a07e0(puVar2 + -1);
      *param_1 = 1;
      return *(undefined4 *)(in_ECX + 0xc);
    }
    FUN_008a07e0(0);
  }
  *param_1 = 1;
  return *(undefined4 *)(in_ECX + 0xc);
}



void FUN_008c2d80(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d747b;
  local_1c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar2 = *(int *)(in_ECX + 4);
  if (param_1 == 0) {
    iVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x30,0x29,uVar6);
    *(undefined2 *)(iVar7 + 4) = 0x30;
    uStack_14 = 0;
    param_1 = FUN_00913c30();
  }
  uStack_14 = 0xffffffff;
  uVar3 = *(undefined4 *)(iVar2 + 0x14);
  uVar4 = *(undefined4 *)(iVar2 + 0x18);
  uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x24);
  uVar4 = *(undefined4 *)(iVar2 + 0x28);
  uVar5 = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  fVar1 = *(float *)(param_2 + 0x10);
  if (fVar1 != 1.0) {
    *(float *)(param_1 + 0x10) = fVar1 * *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x14) = fVar1 * *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 0x18) = fVar1 * *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x1c) = fVar1 * *(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x20) = fVar1 * *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x24) = fVar1 * *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = fVar1 * *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x2c) = fVar1 * *(float *)(param_1 + 0x2c);
  }
  FUN_008a07b0(param_1,param_2);
  *unaff_FS_OFFSET = local_1c;
  return;
}



undefined4 FUN_008c2ec0(void)

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
  puStack_8 = &LAB_009d744b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 4) == 0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x30,0x29,uVar1);
    *(undefined2 *)(iVar2 + 4) = 0x30;
    uStack_4 = 0;
    uVar3 = FUN_00913c30();
    *(undefined4 *)(in_ECX + 4) = uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0x30;
}



void thunk_FUN_008a0d20(void)

{
  FUN_008a0d20();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c2f40(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7418;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a98f5c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba80e8 = _DAT_00ba80e8 + -1;
  local_4 = 0xffffffff;
  FUN_008a0250();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c2fb0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a564a4;
    puVar2[3] = 0;
    DAT_00ba7d4c = DAT_00ba7d4c + 1;
    *puVar2 = &PTR_FUN_00a98f5c;
    _DAT_00ba80e8 = _DAT_00ba80e8 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c3040(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a564a4;
    puVar2[3] = 0;
    DAT_00ba7d4c = DAT_00ba7d4c + 1;
    *puVar2 = &PTR_FUN_00a98f5c;
    _DAT_00ba80e8 = _DAT_00ba80e8 + 1;
  }
  local_4 = 0xffffffff;
  FUN_008a0860(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_008c3130(byte param_1)

{
  FUN_008c2f40();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008c3150(int param_1,undefined4 *param_2)

{
  undefined1 auStack_74 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_74;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &local_70;
    (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),param_2,0x30,0,0);
  }
  FUN_008a01f0(param_1,param_2);
  uStack_30 = param_2[8];
  uStack_2c = param_2[9];
  uStack_28 = param_2[10];
  uStack_24 = param_2[0xb];
  uStack_40 = param_2[4];
  uStack_3c = param_2[5];
  uStack_38 = param_2[6];
  uStack_34 = param_2[7];
  FUN_00913c50(&uStack_40,&uStack_30);
  return;
}



void FUN_008c3290(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[2] = 1;
  *in_ECX = &PTR_FUN_00a98ff4;
  return;
}



undefined4 FUN_008c32b0(undefined1 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    *param_1 = 0;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  puVar1 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar2 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[2] = 1;
    *puVar1 = &PTR_FUN_00a98ff4;
  }
  *(undefined4 **)(in_ECX + 0xc) = puVar2;
  if (*(int *)(in_ECX + 8) != 0) {
    if (puVar2 != (undefined4 *)0x0) {
      FUN_008a07e0(puVar2 + -1);
      *param_1 = 1;
      return *(undefined4 *)(in_ECX + 0xc);
    }
    FUN_008a07e0(0);
  }
  *param_1 = 1;
  return *(undefined4 *)(in_ECX + 0xc);
}



void FUN_008c3350(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b8eb8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9901c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  DAT_00ba80f4 = DAT_00ba80f4 + -1;
  local_4 = 0xffffffff;
  FUN_008b0210();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c33c0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a5591c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    DAT_00ba7d70 = DAT_00ba7d70 + 1;
    *puVar2 = &PTR_FUN_00a55e8c;
    _DAT_00ba7f98 = _DAT_00ba7f98 + 1;
    *puVar2 = &PTR_FUN_00a9901c;
    DAT_00ba80f4 = DAT_00ba80f4 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c3470(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a5591c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    DAT_00ba7d70 = DAT_00ba7d70 + 1;
    *puVar2 = &PTR_FUN_00a55e8c;
    _DAT_00ba7f98 = _DAT_00ba7f98 + 1;
    *puVar2 = &PTR_FUN_00a9901c;
    DAT_00ba80f4 = DAT_00ba80f4 + 1;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x80))(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = unaff_EBX;
  return puVar2;
}



undefined4 FUN_008c35b0(undefined1 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    *param_1 = 0;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  puVar1 = (undefined4 *)FUN_00401f00(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[3] = 0x3f800000;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  *(undefined4 **)(in_ECX + 0xc) = puVar1;
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_008b0280(puVar1);
    if (*(int *)(in_ECX + 8) != 0) {
      puVar1[2] = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x10);
      *param_1 = 1;
      return *(undefined4 *)(in_ECX + 0xc);
    }
    puVar1[2] = 0;
  }
  *param_1 = 1;
  return *(undefined4 *)(in_ECX + 0xc);
}



char FUN_008c3730(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = thunk_FUN_008a2650(param_1);
  if (cVar1 != '\0') {
    local_14 = 0x3f800000;
    local_4 = 0x3f800000;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    FUN_008b0280(&local_20);
    if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
      local_18 = 0;
    }
    else {
      local_18 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x10);
    }
    FUN_008b0280(&local_10);
  }
  return cVar1;
}



void FUN_008c37f0(byte param_1)

{
  FUN_008c3350();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c3810(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_00914420(param_1,param_2);
  *in_ECX = &PTR_FUN_00a990bc;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba8380);
  _DAT_00ba83f8 = GetCurrentThreadId();
  _DAT_00ba83fc = _DAT_00ba83fc + 1;
  in_ECX[5] = param_3;
  _DAT_00ba83fc = _DAT_00ba83fc + -1;
  if (_DAT_00ba83fc == 0) {
    _DAT_00ba83f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba8380);
  return;
}



void FUN_008c3880(byte param_1)

{
  FUN_00914470();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_008c38b0(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 extraout_ECX;
  uint *unaff_FS_OFFSET;
  char *pcVar3;
  char *pcVar4;
  char *pcStack_23c;
  int iStack_238;
  uint uStack_234;
  undefined4 uStack_224;
  undefined1 auStack_214 [516];
  uint local_10;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d755b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&uStack_224;
  uStack_234 = DAT_00b30aac ^ (uint)&stack0xfffffdd0;
  *unaff_FS_OFFSET = (uint)&local_c;
  iStack_238 = 0x8c38fa;
  iVar1 = (**(code **)(*in_ECX + 0x68))();
  iStack_238 = (int)&uStack_224 + 3;
  pcStack_23c = (char *)0x8c390a;
  uVar2 = (**(code **)(*in_ECX + 0x74))();
  if (*(uint *)(param_1 + 4) < 6) {
    pcStack_23c = (char *)0x0;
    iVar1 = iVar1 + -4;
    (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),uVar2,iVar1,0);
    pcVar3 = param_1 + 0xe0;
    param_1 = param_1 + 8;
    if (*param_1 == '\0') {
      param_1 = "Please";
    }
    uStack_224 = &pcStack_23c;
    pcStack_23c = (char *)CONCAT31((int3)((uint)extraout_ECX >> 8),1);
    FUN_008bbfb0(auStack_214,0x200);
    pcStack_23c = " re-export\n";
    pcVar4 = " contains an old bhkMoppBvTreeShape! ";
    puStack_8 = (undefined1 *)0x0;
    FUN_008bbdb0("File ");
    FUN_008bbdb0(pcVar3);
    FUN_008bbdb0(pcVar4);
    FUN_008bbdb0(param_1);
    FUN_008bbdb0();
    pcStack_23c = (char *)0xd7;
    (**(code **)(*DAT_00ba7fb0 + 8))(1,0x234f2250,auStack_214,".\\bhkMoppBvTreeShape.cpp");
    puStack_8 = (undefined1 *)0xffffffff;
    pcStack_23c = (char *)0x8c39d4;
    FUN_008bc000();
  }
  else {
    pcStack_23c = param_1;
    FUN_0089d670();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008c3a10(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [4];
  undefined **local_60 [15];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d75a3;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_64;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      FUN_00914340(uVar1);
      local_14 = 0;
      uVar2 = FUN_00914160(*(undefined4 *)(param_1 + 4),local_60);
      *(undefined4 *)(param_1 + 8) = uVar2;
      local_60[0] = &PTR_LAB_00a45e5c;
    }
    local_14 = 0xffffffff;
    iVar3 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x24);
    *(undefined2 *)(iVar3 + 4) = 0x18;
    local_1c = 1;
    puVar4 = (undefined4 *)
             FUN_008c3810(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                          *(undefined4 *)(param_1 + 0xc));
    local_1c = -1;
    (**(code **)(*in_ECX + 0x4c))(puVar4);
    if ((*(short *)(puVar4 + 1) != 0) &&
       (*(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1,
       *(short *)((int)puVar4 + 6) == 0)) {
      (**(code **)*puVar4)(1);
    }
    (**(code **)(*in_ECX + 0x7c))(param_1);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008c3b30(int param_1)

{
  int in_ECX;
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_28;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_28;
  FUN_008b04d0(param_1);
  local_28 = FUN_0070f910(DAT_00ba80f8);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_28);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x10);
  }
  _sprintf(local_24,"0x%8X",uVar2);
  local_28 = FUN_0070fc30("MoppCode",local_24);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_28);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c3c00(void)

{
  undefined4 *in_ECX;
  
  FUN_0089d3d0();
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00a5591c;
  DAT_00ba7d70 = DAT_00ba7d70 + 1;
  *in_ECX = &PTR_FUN_00a55a5c;
  _DAT_00ba7f44 = _DAT_00ba7f44 + 1;
  *in_ECX = &PTR_FUN_00a55afc;
  _DAT_00ba7f50 = _DAT_00ba7f50 + 1;
  *in_ECX = &PTR_FUN_00a9917c;
  _DAT_00ba8100 = _DAT_00ba8100 + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c3c60(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d6e18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9917c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba8100 = _DAT_00ba8100 + -1;
  local_4 = 0xffffffff;
  FUN_008ae9f0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008c3cd0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  FUN_008aea60(param_1);
  if (((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) && (iVar1 + 0x10 != 0)) {
    FUN_0047dcd0(iVar1 + 0x10);
    FUN_0047dcd0(iVar1 + 0x20);
    FUN_0047dcd0(iVar1 + 0x30);
  }
  return;
}



/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __cdecl CProcessLocal<class
   CControlSiteFactoryMgr>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   AFX_MODULE_THREAD_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   _AFXCTL_AMBIENT_CACHE>::CreateObject(void)
   
   Library: Visual Studio 2005 Release */

undefined4 CreateObject(void)

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
  local_10 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_008c3c00();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008c3d90(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  iVar2 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_008c3c00();
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x80))(uVar3,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = unaff_ESI;
  return uVar3;
}



void FUN_008c3f10(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c3f40(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = _DAT_00b2efc4;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  return;
}



void FUN_008c3fa0(byte param_1)

{
  FUN_008c3c60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_008c3fc0(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar1 = FUN_00401f00(0x40);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_008c3f40();
    }
    *(undefined4 *)(in_ECX + 0xc) = uVar2;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008c3cd0(uVar2);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008c4010(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&uStack_54;
  if (param_1 != 0) {
    puVar2 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x40,0x24);
    *(undefined2 *)(puVar2 + 1) = 0x40;
    uVar1 = DAT_00b2ffe4;
    uStack_38 = *(undefined4 *)(param_1 + 0x30);
    uStack_34 = *(undefined4 *)(param_1 + 0x34);
    uStack_30 = *(undefined4 *)(param_1 + 0x38);
    uStack_2c = *(undefined4 *)(param_1 + 0x3c);
    uStack_48 = *(undefined4 *)(param_1 + 0x20);
    uStack_44 = *(undefined4 *)(param_1 + 0x24);
    uStack_40 = *(undefined4 *)(param_1 + 0x28);
    uStack_3c = *(undefined4 *)(param_1 + 0x2c);
    uStack_54 = *(undefined4 *)(param_1 + 0x14);
    uStack_50 = *(undefined4 *)(param_1 + 0x18);
    uStack_4c = *(undefined4 *)(param_1 + 0x1c);
    puVar2[4] = *(undefined4 *)(param_1 + 0x10);
    puVar2[5] = uStack_54;
    puVar2[6] = uStack_50;
    puVar2[7] = uStack_4c;
    puVar2[8] = uStack_48;
    puVar2[9] = uStack_44;
    puVar2[10] = uStack_40;
    puVar2[0xb] = uStack_3c;
    puVar2[3] = uVar1;
    *(undefined2 *)((int)puVar2 + 6) = 1;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_00a99144;
    puVar2[0xc] = uStack_38;
    puVar2[0xd] = uStack_34;
    puVar2[0xe] = uStack_30;
    puVar2[0xf] = uStack_2c;
    puVar2[3] = *(undefined4 *)(param_1 + 4);
    (**(code **)(*in_ECX + 0x4c))(puVar2);
    if ((*(short *)(puVar2 + 1) != 0) &&
       (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
       *(short *)((int)puVar2 + 6) == 0)) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*in_ECX + 0x7c))(param_1);
  }
  return;
}



void FUN_008c4130(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_008aeac0(param_1);
  param_1 = FUN_0070f910(DAT_00ba8104);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_008c4190(byte param_1)

{
  FUN_00914ec0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008c41c0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  FUN_008a2690(param_1);
  if ((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) {
    FUN_0047dcd0(iVar1 + 0x20);
    FUN_0047dcd0(iVar1 + 0x30);
    FUN_0047dcd0(iVar1 + 0x10);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c4210(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a5591c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    DAT_00ba7d70 = DAT_00ba7d70 + 1;
    *puVar2 = &PTR_FUN_00a9922c;
    _DAT_00ba8400 = _DAT_00ba8400 + 1;
    *puVar2 = &PTR_FUN_00a992cc;
    _DAT_00ba810c = _DAT_00ba810c + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c42c0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a5591c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    DAT_00ba7d70 = DAT_00ba7d70 + 1;
    *puVar2 = &PTR_FUN_00a9922c;
    _DAT_00ba8400 = _DAT_00ba8400 + 1;
    *puVar2 = &PTR_FUN_00a992cc;
    _DAT_00ba810c = _DAT_00ba810c + 1;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x80))(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = unaff_EBX;
  return puVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c4450(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a992cc;
  _DAT_00ba810c = _DAT_00ba810c + -1;
  FUN_00914ec0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008c4480(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d75db;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&uStack_74;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff80;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 != 0) {
    iStack_6c = (**(code **)(*DAT_00ba7d98 + 0x10))(0x40,0x24,uVar1);
    *(undefined2 *)(iStack_6c + 4) = 0x40;
    uStack_58 = *(undefined4 *)(param_1 + 0x20);
    uStack_54 = *(undefined4 *)(param_1 + 0x24);
    uStack_50 = *(undefined4 *)(param_1 + 0x28);
    uStack_4c = *(undefined4 *)(param_1 + 0x2c);
    local_1c = 0;
    uStack_68 = *(undefined4 *)(param_1 + 0x30);
    uStack_64 = *(undefined4 *)(param_1 + 0x34);
    uStack_60 = *(undefined4 *)(param_1 + 0x38);
    uStack_5c = *(undefined4 *)(param_1 + 0x3c);
    uStack_48 = *(undefined4 *)(param_1 + 0x10);
    uStack_44 = *(undefined4 *)(param_1 + 0x14);
    uStack_74 = *(undefined4 *)(param_1 + 0x18);
    uStack_70 = *(undefined4 *)(param_1 + 0x1c);
    uStack_40 = uStack_74;
    uStack_3c = uStack_70;
    puVar2 = (undefined4 *)FUN_00914fd0(&uStack_48,&uStack_68,&uStack_58);
    local_1c = -1;
    (**(code **)(*in_ECX + 0x4c))(puVar2);
    if ((*(short *)(puVar2 + 1) != 0) &&
       (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
       *(short *)((int)puVar2 + 6) == 0)) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*in_ECX + 0x7c))(param_1);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



undefined4 FUN_008c4610(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar1 = thunk_FUN_00401aa0(0x50,1);
    bVar3 = 0x10 - ((byte)iVar1 & 0xf);
    puVar2 = (undefined4 *)(iVar1 + (uint)bVar3);
    *(byte *)((int)puVar2 + -1) = bVar3;
    *puVar2 = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    *(undefined4 **)(in_ECX + 0xc) = puVar2;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008c41c0(puVar2);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008c46a0(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined1 local_3c [12];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_44;
  FUN_00914f30(param_1);
  local_40 = FUN_0070f910(DAT_00ba8110);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_40);
  if ((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) {
    local_30 = *(undefined4 *)(iVar1 + 0x10);
    uStack_2c = *(undefined4 *)(iVar1 + 0x14);
    uStack_28 = *(undefined4 *)(iVar1 + 0x18);
    uStack_24 = *(undefined4 *)(iVar1 + 0x1c);
  }
  FUN_0043f3e0(local_3c,&local_30);
  local_40 = FUN_00707280("Normal");
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_40);
  local_40 = FUN_0070fb90("Constant",uStack_24);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_40);
  return;
}



void FUN_008c47c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a993bc;
  if (in_ECX[5] != 0) {
    FUN_00401f20(in_ECX[5]);
  }
  if (in_ECX[6] != 0) {
    FUN_00401f20(in_ECX[6]);
  }
  if (in_ECX[7] != 0) {
    FUN_00401f20(in_ECX[7]);
  }
  FUN_0055ace0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_008c4840(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x20,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a993bc;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



/* WARNING: Removing unreachable block (ram,0x008c48f9) */
/* WARNING: Removing unreachable block (ram,0x008c4907) */
/* WARNING: Removing unreachable block (ram,0x008c490b) */

void FUN_008c48a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d7623;
  local_1c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_009156c0(uVar5);
  *in_ECX = &PTR_FUN_00a9940c;
  in_ECX[4] = 0;
  local_14 = 1;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    in_ECX[4] = iVar1;
    if (iVar1 != 0) {
      InterlockedIncrement((LONG *)(iVar1 + 4));
    }
  }
  in_ECX[0xc] = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[9] = uVar2;
  in_ECX[10] = uVar3;
  in_ECX[0xb] = uVar4;
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_008c4950(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LONG LVar6;
  int in_ECX;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(in_ECX + 0x30);
  uVar3 = *(undefined4 *)(in_ECX + 0x24);
  uVar4 = *(undefined4 *)(in_ECX + 0x28);
  uVar5 = *(undefined4 *)(in_ECX + 0x2c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != *(undefined4 **)(in_ECX + 0x10)) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar1 + 1);
      if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *(int *)(in_ECX + 0x10);
    *(int *)(param_1 + 4) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  return;
}



void FUN_008c49c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009d7653;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9940c;
  puVar1 = (undefined4 *)in_ECX[4];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[4] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[4];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_008c4ad0(uint param_1,undefined4 *param_2)

{
  ushort *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int in_ECX;
  undefined4 uStack_24;
  
  if (*(uint *)(*(int *)(in_ECX + 0x10) + 8) <= (param_1 & 0xffffff)) {
    return (undefined4 *)0x0;
  }
  puVar1 = (ushort *)(*(int *)(*(int *)(in_ECX + 0x10) + 0x14) + (param_1 & 0xffffff) * 0x14);
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    uVar3 = *(undefined4 *)(in_ECX + 0x30);
    *(undefined2 *)((int)param_2 + 6) = 1;
    param_2[2] = 0;
    *param_2 = &PTR_FUN_00a99384;
    param_2[3] = uVar3;
  }
  puVar2 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x10) + 0x18) + (uint)*puVar1 * 0xc);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  param_2[4] = *puVar2;
  param_2[5] = uVar3;
  param_2[6] = uVar4;
  puVar2 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x10) + 0x18) + (uint)puVar1[1] * 0xc);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  param_2[8] = *puVar2;
  param_2[9] = uVar3;
  param_2[10] = uVar4;
  puVar2 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x10) + 0x18) + (uint)puVar1[2] * 0xc);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  param_2[0xc] = *puVar2;
  param_2[0xd] = uVar3;
  param_2[0xe] = uVar4;
  if (*(float *)(in_ECX + 0x20) != 1.0) {
    fVar5 = *(float *)(in_ECX + 0x24);
    fVar6 = *(float *)(in_ECX + 0x28);
    fVar7 = *(float *)(in_ECX + 0x2c);
    param_2[4] = *(float *)(in_ECX + 0x20) * (float)param_2[4];
    param_2[5] = fVar5 * (float)param_2[5];
    param_2[6] = fVar6 * (float)param_2[6];
    param_2[7] = fVar7 * (float)param_2[7];
    fVar5 = *(float *)(in_ECX + 0x24);
    fVar6 = *(float *)(in_ECX + 0x28);
    fVar7 = *(float *)(in_ECX + 0x2c);
    param_2[8] = *(float *)(in_ECX + 0x20) * (float)param_2[8];
    param_2[9] = fVar5 * (float)param_2[9];
    param_2[10] = fVar6 * (float)param_2[10];
    param_2[0xb] = fVar7 * (float)param_2[0xb];
    fVar5 = *(float *)(in_ECX + 0x24);
    fVar6 = *(float *)(in_ECX + 0x28);
    fVar7 = *(float *)(in_ECX + 0x2c);
    param_2[0xc] = (float)param_2[0xc] * *(float *)(in_ECX + 0x20);
    param_2[0xd] = (float)param_2[0xd] * fVar5;
    param_2[0xe] = (float)param_2[0xe] * fVar6;
    param_2[0xf] = (float)param_2[0xf] * fVar7;
  }
  uVar3 = *(undefined4 *)(puVar1 + 6);
  uVar4 = *(undefined4 *)(puVar1 + 8);
  param_2[0x10] = *(undefined4 *)(puVar1 + 4);
  param_2[0x11] = uVar3;
  param_2[0x12] = uVar4;
  param_2[0x13] = uStack_24;
  return param_2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008c4ca0(undefined4 param_1,float param_2,undefined1 (*param_3) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int in_ECX;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_54 [12];
  undefined4 local_48;
  int local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [16];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_54;
  *(undefined4 *)*param_3 = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 4) = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 8) = 0x7f7fffff;
  local_48 = param_1;
  uVar6 = 0;
  *(undefined4 *)(*param_3 + 0xc) = 0;
  *(undefined4 *)param_3[1] = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 4) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 8) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 0xc) = 0;
  *(undefined4 *)*param_3 = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 4) = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 8) = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 0xc) = 0;
  fStack_34 = 0.0;
  *(undefined4 *)param_3[1] = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 4) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 8) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 0xc) = 0;
  iVar4 = *(int *)(in_ECX + 0x10);
  if (*(int *)(iVar4 + 0xc) != 0) {
    local_44 = 0;
    do {
      pfVar5 = (float *)(*(int *)(iVar4 + 0x18) + local_44);
      local_40 = *(float *)(in_ECX + 0x20) * *pfVar5;
      fStack_3c = *(float *)(in_ECX + 0x24) * pfVar5[1];
      fStack_38 = *(float *)(in_ECX + 0x28) * pfVar5[2];
      fStack_34 = *(float *)(in_ECX + 0x2c) * fStack_34;
      FUN_0088fcc0(local_48,&local_40);
      local_44 = local_44 + 0xc;
      auVar7 = minps(*param_3,local_30);
      *param_3 = auVar7;
      auVar7 = maxps(param_3[1],local_30);
      param_3[1] = auVar7;
      iVar4 = *(int *)(in_ECX + 0x10);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(iVar4 + 0xc));
  }
  fVar1 = *(float *)(*param_3 + 4);
  fVar2 = *(float *)(*param_3 + 8);
  fVar3 = *(float *)(*param_3 + 0xc);
  param_2 = *(float *)(in_ECX + 0x30) + param_2;
  *(float *)*param_3 = *(float *)*param_3 - param_2;
  *(float *)(*param_3 + 4) = fVar1 - param_2;
  *(float *)(*param_3 + 8) = fVar2 - param_2;
  *(float *)(*param_3 + 0xc) = fVar3 - param_2;
  fVar1 = *(float *)(param_3[1] + 4);
  fVar2 = *(float *)(param_3[1] + 8);
  fVar3 = *(float *)(param_3[1] + 0xc);
  *(float *)param_3[1] = *(float *)param_3[1] + param_2;
  *(float *)(param_3[1] + 4) = fVar1 + param_2;
  *(float *)(param_3[1] + 8) = fVar2 + param_2;
  *(float *)(param_3[1] + 0xc) = fVar3 + param_2;
  return;
}



void FUN_008c4dd0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  piVar1 = (int *)(param_1 + 0x220);
  param_1 = 4;
  (**(code **)(*piVar1 + 8))(*piVar1,(int *)(in_ECX + 8),4,&param_1,1);
  param_1 = 0x14;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))
            (*(int *)(iVar2 + 0x220),*(undefined4 *)(in_ECX + 0x14),*(int *)(in_ECX + 8) * 0x14,
             &param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))
            (*(int *)(iVar2 + 0x220),(int *)(in_ECX + 0xc),4,&param_1,1);
  param_1 = 0xc;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))
            (*(int *)(iVar2 + 0x220),*(undefined4 *)(in_ECX + 0x18),*(int *)(in_ECX + 0xc) * 0xc,
             &param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))
            (*(int *)(iVar2 + 0x220),(ushort *)(in_ECX + 0x10),2,&param_1,1);
  param_1 = 0xc;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))
            (*(int *)(iVar2 + 0x220),*(undefined4 *)(in_ECX + 0x1c),
             (uint)*(ushort *)(in_ECX + 0x10) * 0xc,&param_1,1);
  return;
}



void FUN_008c4ed0(int param_1)

{
  uint *puVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = param_1;
  local_1c = 2;
  local_18 = 2;
  local_14 = 2;
  local_10 = 2;
  puVar1 = (uint *)(in_ECX + 8);
  local_c = 4;
  local_8 = 4;
  local_4 = 4;
  local_20 = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),puVar1,4,&local_20,1);
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)*puVar1 * 0x14 >> 0x20) != 0) |
                       (uint)((ulonglong)*puVar1 * 0x14));
  *(undefined4 *)(in_ECX + 0x14) = uVar4;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
            (*(int *)(iVar3 + 0x21c),uVar4,*puVar1 * 0x14,&local_1c,7);
  puVar1 = (uint *)(in_ECX + 0xc);
  param_1 = 4;
  local_20 = 4;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),puVar1,4,&local_20,1);
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)*puVar1 * 0xc >> 0x20) != 0) |
                       (uint)((ulonglong)*puVar1 * 0xc));
  *(undefined4 *)(in_ECX + 0x18) = uVar4;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),uVar4,*puVar1 * 0xc,&param_1,1)
  ;
  puVar2 = (ushort *)(in_ECX + 0x10);
  local_20 = 2;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),puVar2,2,&local_20,1);
  uVar4 = FUN_00401f00((uint)*puVar2 * 0xc);
  *(undefined4 *)(in_ECX + 0x1c) = uVar4;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
            (*(int *)(iVar3 + 0x21c),uVar4,(uint)*puVar2 * 0xc,&param_1,1);
  return;
}



void FUN_008c5030(byte param_1)

{
  FUN_008c49c0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



float10 FUN_008c5070(void)

{
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    return (float10)*(float *)(*(int *)(in_ECX + 8) + 0x20);
  }
  return (float10)1.0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c50a0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d61e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9945c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba8120 = _DAT_00ba8120 + -1;
  local_4 = 0xffffffff;
  FUN_008ce450();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008c5110(int param_1)

{
  int in_ECX;
  
  thunk_FUN_008a2690(param_1);
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_008c4950(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c5160(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a5591c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    DAT_00ba7d70 = DAT_00ba7d70 + 1;
    *puVar2 = &PTR_FUN_00a965d4;
    _DAT_00ba816c = _DAT_00ba816c + 1;
    *puVar2 = &PTR_FUN_00a9945c;
    _DAT_00ba8120 = _DAT_00ba8120 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c5210(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a5591c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    DAT_00ba7d70 = DAT_00ba7d70 + 1;
    *puVar2 = &PTR_FUN_00a965d4;
    _DAT_00ba816c = _DAT_00ba816c + 1;
    *puVar2 = &PTR_FUN_00a9945c;
    _DAT_00ba8120 = _DAT_00ba8120 + 1;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x80))(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = unaff_EBX;
  return puVar2;
}



void FUN_008c5340(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d6eeb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    iStack_4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x40,0x24,uVar1);
    *(undefined2 *)(iStack_4 + 4) = 0x40;
    local_c = 0;
    puVar2 = (undefined4 *)FUN_008c48a0(param_1);
    local_c = -1;
    (**(code **)(*in_ECX + 0x4c))(puVar2);
    if ((*(short *)(puVar2 + 1) != 0) &&
       (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
       *(short *)((int)puVar2 + 6) == 0)) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*in_ECX + 0x7c))(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a99500;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_008c5490(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  ushort uVar4;
  
  if (param_1 != *(ushort *)(in_ECX + 8)) {
    uVar4 = (ushort)param_1;
    if (param_1 < *(ushort *)(in_ECX + 10)) {
      uVar3 = param_1 & 0xffff;
      if (uVar4 < *(ushort *)(in_ECX + 10)) {
        do {
          if (*(short *)(*(int *)(in_ECX + 4) + (uVar3 & 0xffff) * 2) != 0) {
            *(undefined2 *)(*(int *)(in_ECX + 4) + (uVar3 & 0xffff) * 2) = 0;
            *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
          }
          uVar3 = uVar3 + 1;
        } while ((ushort)uVar3 < *(ushort *)(in_ECX + 10));
      }
      *(ushort *)(in_ECX + 10) = uVar4;
    }
    iVar1 = *(int *)(in_ECX + 4);
    *(ushort *)(in_ECX + 8) = uVar4;
    if (param_1 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      uVar2 = FUN_00401f00((param_1 & 0xffff) * 2);
      uVar4 = 0;
      *(undefined4 *)(in_ECX + 4) = uVar2;
      if (*(short *)(in_ECX + 10) != 0) {
        do {
          uVar3 = (uint)uVar4;
          uVar4 = uVar4 + 1;
          *(undefined2 *)(uVar3 * 2 + *(int *)(in_ECX + 4)) = *(undefined2 *)(uVar3 * 2 + iVar1);
        } while (uVar4 < *(ushort *)(in_ECX + 10));
      }
      uVar4 = *(ushort *)(in_ECX + 10);
      if (uVar4 < *(ushort *)(in_ECX + 8)) {
        do {
          uVar3 = (uint)uVar4;
          uVar4 = uVar4 + 1;
          *(undefined2 *)(*(int *)(in_ECX + 4) + uVar3 * 2) = 0;
        } while (uVar4 < *(ushort *)(in_ECX + 8));
        FUN_00401f20(iVar1);
        return;
      }
    }
    FUN_00401f20(iVar1);
  }
  return;
}



void FUN_008c5580(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_009d767b;
  local_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_1c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_14 = 0;
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[1] = 0;
  }
  in_ECX[4] = 0x3f800000;
  in_ECX[5] = 0x3f800000;
  in_ECX[6] = 0x3f800000;
  in_ECX[7] = 0x3f800000;
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_008c5620(byte param_1)

{
  FUN_008c50a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_008c5640(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d709b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar2 = thunk_FUN_00401aa0(0x30,1);
    bVar4 = 0x10 - ((byte)iVar2 & 0xf);
    *(byte *)(iVar2 + (uint)bVar4 + -1) = bVar4;
    local_4 = 0;
    uVar3 = FUN_008c5580(uVar1);
    local_4 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0xc) = uVar3;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008c5110(uVar3);
    }
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  uVar3 = *(undefined4 *)(in_ECX + 0xc);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_008c5720(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 8);
  }
  (**(code **)(**(int **)(iVar1 + 0x10) + 0x24))(param_1);
  thunk_FUN_00700650(param_1);
  return;
}



void FUN_008c57e0(void)

{
  int iVar1;
  int *in_ECX;
  int unaff_retaddr;
  undefined4 uStack_8;
  
  iVar1 = (**(code **)(*in_ECX + 0x74))((int)&uStack_8 + 3);
  FUN_008a25c0(unaff_retaddr);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(unaff_retaddr + 0x21c) + 4))
              (*(int *)(unaff_retaddr + 0x21c),iVar1 + 8,4,&stack0x00000000,1);
    uStack_8 = 4;
    (**(code **)(*(int *)(unaff_retaddr + 0x21c) + 4))
              (*(int *)(unaff_retaddr + 0x21c),iVar1 + 0x10,0x10,&uStack_8,1);
    FUN_00712a20();
  }
  return;
}



void FUN_008c5860(void)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  int *unaff_retaddr;
  undefined1 local_4 [4];
  
  (**(code **)(*in_ECX + 0x74))(local_4);
  iVar2 = in_ECX[2];
  FUN_008a2610(unaff_retaddr);
  uVar1 = *(undefined4 *)(iVar2 + 0x30);
  (**(code **)(unaff_retaddr[0x88] + 8))(unaff_retaddr[0x88],&stack0xfffffff4,4,&stack0x00000000,1);
  (**(code **)(unaff_retaddr[0x88] + 8))(unaff_retaddr[0x88],iVar2 + 0x20,0x10,&stack0x00000000,1);
  (**(code **)(*unaff_retaddr + 0x2c))(*(undefined4 *)(iVar2 + 0x10));
  (**(code **)(*in_ECX + 100))(uVar1);
  return;
}



void FUN_008c5900(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  uint local_c;
  int local_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  FUN_008ce640(param_1);
  param_1 = FUN_0070f910(DAT_00ba8124);
  uVar6 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar6) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar6);
  }
  FUN_0042bb90(uVar6,&param_1);
  uVar6 = 0;
  if (in_ECX == 0) {
    param_1 = 0;
  }
  else {
    param_1 = *(int *)(in_ECX + 8);
  }
  local_c = (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0x10);
  local_8 = FUN_0070fb40("Subparts",local_c);
  uVar5 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar5) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar5);
  }
  FUN_0042bb90(uVar5,&local_8);
  if (5 < local_c) {
    local_c = 5;
  }
  if (local_c != 0) {
    local_8 = 0;
    do {
      iVar4 = FUN_0070fb40(&DAT_00a99504,uVar6);
      uVar1 = *(ushort *)(iVar2 + 10);
      uVar5 = (uint)uVar1;
      if (*(ushort *)(iVar2 + 8) <= uVar5) {
        FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar5);
      }
      iVar3 = local_8;
      if (uVar5 < *(ushort *)(iVar2 + 10)) {
        if (iVar4 == 0) {
          if (*(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) != 0) {
            *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) == 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(iVar2 + 10) = uVar1 + 1;
        if (iVar4 != 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      *(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) = iVar4;
      local_4 = *(undefined4 *)(local_8 + *(int *)(*(int *)(param_1 + 0x10) + 0x1c));
      FUN_008a9100(iVar2);
      uVar6 = uVar6 + 1;
      local_8 = iVar3 + 0xc;
    } while (uVar6 < local_c);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008c5a70(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  int *piVar4;
  ushort uVar5;
  uint uVar6;
  void *_Dst;
  void *_Dst_00;
  int *in_ECX;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  undefined **ppuVar15;
  int *unaff_FS_OFFSET;
  float10 fVar16;
  undefined1 auStack_b4 [8];
  undefined **local_ac;
  undefined4 local_a8;
  ushort local_a4;
  ushort local_a2;
  short local_a0;
  ushort local_9e;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined **local_88;
  undefined4 local_84;
  ushort local_80;
  ushort local_7e;
  short sStack_7c;
  ushort local_7a;
  int local_78;
  int local_74;
  float local_70;
  uint local_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *local_58;
  undefined4 local_54;
  float local_50;
  float local_40;
  float fStack_3c;
  float fStack_38;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_009d76cc;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_b4;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff40;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_54 = param_1;
  if (in_ECX == (int *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = in_ECX[2];
  }
  local_74 = *(int *)(iVar9 + 0x10);
  local_88 = &PTR__scalar_deleting_destructor__00a99500;
  local_80 = 0;
  local_7a = 1;
  local_7e = 0;
  sStack_7c = 0;
  local_84 = (void *)0x0;
  local_ac = &PTR__scalar_deleting_destructor__00a99500;
  local_a4 = 0;
  local_9e = 1;
  local_a2 = 0;
  local_a0 = 0;
  local_a8 = (void *)0x0;
  local_14 = 1;
  local_98 = 0;
  local_70 = 0.0;
  local_68 = 0;
  if (*(short *)(local_74 + 0x10) != 0) {
    local_78 = 0;
    local_58 = in_ECX;
    do {
      iVar9 = 0;
      local_94 = (int)local_70 * 0x14;
      local_9c = 0;
      local_8c = 0;
      local_6c = 0;
      uVar11 = local_98;
      local_90 = (uint)local_70;
      do {
        uVar5 = local_7e;
        uVar3 = local_a2;
        puVar12 = (ushort *)(*(int *)(local_74 + 0x14) + local_94);
        if (iVar9 == 0) {
          local_9c = (uint)*puVar12;
          uVar5 = puVar12[1];
          local_8c = (uint)uVar5;
          local_6c = (uint)puVar12[2];
          if (*(int *)(*(int *)(local_74 + 0x1c) + 4 + local_78) + uVar11 <= local_9c) break;
          uVar13 = (uint)local_a2;
          sVar1 = *puVar12 - (short)uVar11;
          if (local_a4 <= uVar13) {
            FUN_008c5490(local_9e + uVar13);
            uVar11 = local_98;
          }
          if (uVar13 < local_a2) {
            if (sVar1 == 0) {
              if (*(short *)((int)local_a8 + uVar13 * 2) != 0) {
                local_a0 = local_a0 + -1;
              }
            }
            else if (*(short *)((int)local_a8 + uVar13 * 2) == 0) {
              local_a0 = local_a0 + 1;
            }
          }
          else {
            local_a2 = uVar3 + 1;
            if (sVar1 != 0) {
              local_a0 = local_a0 + 1;
            }
          }
          uVar3 = local_a2;
          *(short *)((int)local_a8 + uVar13 * 2) = sVar1;
          uVar13 = (uint)local_a2;
          sVar1 = uVar5 - (short)uVar11;
          if (local_a4 <= uVar13) {
            FUN_008c5490(local_9e + uVar13);
            uVar11 = local_98;
          }
          if (uVar13 < local_a2) {
            if (sVar1 == 0) {
              if (*(short *)((int)local_a8 + uVar13 * 2) != 0) {
                local_a0 = local_a0 + -1;
              }
            }
            else if (*(short *)((int)local_a8 + uVar13 * 2) == 0) {
              local_a0 = local_a0 + 1;
            }
          }
          else {
            local_a2 = uVar3 + 1;
            if (sVar1 != 0) {
              local_a0 = local_a0 + 1;
            }
          }
          uVar3 = local_a2;
          sVar2 = (short)local_6c - (short)uVar11;
          *(short *)((int)local_a8 + uVar13 * 2) = sVar1;
          uVar13 = (uint)local_a2;
          if (local_a4 <= uVar13) {
            FUN_008c5490(local_9e + uVar13);
            uVar11 = local_98;
          }
          if (uVar13 < local_a2) {
            if (sVar2 == 0) {
              if (*(short *)((int)local_a8 + uVar13 * 2) != 0) {
                local_a0 = local_a0 + -1;
              }
            }
            else if (*(short *)((int)local_a8 + uVar13 * 2) == 0) {
              local_a0 = local_a0 + 1;
            }
          }
          else {
            local_a2 = uVar3 + 1;
            if (sVar2 != 0) {
              local_a0 = local_a0 + 1;
            }
          }
          local_94 = local_94 + 0x14;
          *(short *)((int)local_a8 + uVar13 * 2) = sVar2;
          iVar9 = 1;
          local_90 = local_90 + 1;
        }
        else if (((ushort)local_8c == *puVar12) && ((ushort)local_6c == puVar12[1])) {
          uVar13 = (uint)local_a2;
          uVar5 = puVar12[2] - (short)uVar11;
          local_9c = (uint)uVar5;
          if (local_a4 <= uVar13) {
            FUN_008c5490(local_9e + uVar13);
            uVar5 = (ushort)local_9c;
          }
          if (uVar13 < local_a2) {
            if (uVar5 == 0) {
              if (*(short *)((int)local_a8 + uVar13 * 2) != 0) {
                local_a0 = local_a0 + -1;
              }
            }
            else if (*(short *)((int)local_a8 + uVar13 * 2) == 0) {
              local_a0 = local_a0 + 1;
            }
          }
          else {
            local_a2 = uVar3 + 1;
            if (uVar5 != 0) {
              local_a0 = local_a0 + 1;
            }
          }
          local_9c = local_8c & 0xffff;
          local_90 = local_90 + 1;
          local_94 = local_94 + 0x14;
          *(ushort *)((int)local_a8 + uVar13 * 2) = uVar5;
          local_8c = local_6c & 0xffff;
          iVar9 = iVar9 + 1;
          uVar11 = local_98;
          local_6c = (uint)puVar12[2];
        }
        else {
          uVar13 = (uint)local_7e;
          sVar1 = (short)iVar9 + 2;
          if (local_80 <= uVar13) {
            FUN_008c5490(local_7a + uVar13);
            uVar11 = local_98;
          }
          if (uVar13 < local_7e) {
            if (sVar1 == 0) {
              if (*(short *)((int)local_84 + uVar13 * 2) != 0) {
                sStack_7c = sStack_7c + -1;
              }
            }
            else if (*(short *)((int)local_84 + uVar13 * 2) == 0) {
              sStack_7c = sStack_7c + 1;
            }
          }
          else {
            local_7e = uVar5 + 1;
            if (sVar1 != 0) {
              sStack_7c = sStack_7c + 1;
            }
          }
          *(short *)((int)local_84 + uVar13 * 2) = sVar1;
          iVar9 = 0;
        }
      } while ((local_9c & 0xffff) < *(int *)(*(int *)(local_74 + 0x1c) + 4 + local_78) + uVar11);
      local_9c = FUN_00401f00(0x50,uVar6);
      local_14._0_1_ = 2;
      if (local_9c == 0) {
        local_9c = 0;
      }
      else {
        local_9c = FUN_00719d20();
      }
      uVar11 = *(uint *)(*(int *)(local_74 + 0x1c) + 4 + local_78);
      local_14._0_1_ = 1;
      iVar9 = FUN_00401f00(-(uint)((int)((ulonglong)uVar11 * 0xc >> 0x20) != 0) |
                           (uint)((ulonglong)uVar11 * 0xc));
      local_94 = uVar11 + local_98;
      if (local_98 < local_94) {
        iVar14 = local_98 * 0xc;
        iVar10 = local_94 - local_98;
        pfVar8 = (float *)(iVar9 + 8);
        do {
          local_40 = *(float *)(*(int *)(local_74 + 0x18) + iVar14);
          iVar7 = *(int *)(local_74 + 0x18) + iVar14;
          iVar14 = iVar14 + 0xc;
          fStack_3c = *(float *)(iVar7 + 4);
          iVar10 = iVar10 + -1;
          local_50 = *(float *)(iVar7 + 8);
          pfVar8[-2] = local_40 * 6.99904;
          pfVar8[-1] = fStack_3c * 6.99904;
          *pfVar8 = local_50 * 6.99904;
          pfVar8 = pfVar8 + 3;
          fStack_38 = local_50;
        } while (iVar10 != 0);
      }
      FUN_00728320(uVar11,iVar9,0,0,0,0,0);
      local_8c = (uint)local_7e;
      _Dst = (void *)FUN_00401f00(local_8c * 2);
      uVar3 = local_a2;
      uVar11 = (uint)local_a2;
      _Dst_00 = (void *)FUN_00401f00(uVar11 * 2);
      _memcpy(_Dst,local_84,local_8c * 2);
      _memcpy(_Dst_00,local_a8,uVar11 * 2);
      uVar11 = local_9c;
      FUN_00719f40(CONCAT22(sStack_7c,local_7e),_Dst,_Dst_00);
      *(short *)(uVar11 + 0x40) = (short)local_90 - SUB42(local_70,0);
      local_70 = (float)FUN_00401f00(0xc0);
      local_14._0_1_ = 3;
      if (local_70 == 0.0) {
        iVar9 = 0;
      }
      else {
        iVar9 = FUN_00719a20(uVar11);
      }
      local_14 = CONCAT31(local_14._1_3_,1);
      FUN_006ff420("bhkPackedNiTriStripsShape");
      piVar4 = local_58;
      fVar16 = (float10)FUN_008c5070();
      local_70 = (float)ABS(fVar16);
      *(float *)(iVar9 + 0x60) = local_70;
      (**(code **)(*piVar4 + 0x98))(iVar9);
      iVar14 = FUN_00707530(2);
      if (iVar14 != 0) {
        local_68 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        FUN_008a2730(*(undefined4 *)(*(int *)(local_78 + 0x1c) + 8 + CONCAT22(local_7a,sStack_7c)),
                     &local_68);
        *(int *)(iVar14 + 0x40) = local_68;
        *(int *)(iVar14 + 0x54) = *(int *)(iVar14 + 0x54) + 1;
        *(undefined4 *)(iVar14 + 0x44) = uStack_64;
        *(undefined4 *)(iVar14 + 0x48) = uStack_60;
      }
      if (local_a8._2_2_ != 0) {
        ppuVar15 = local_ac;
        for (uVar11 = (uint)(uVar3 >> 1); uVar11 != 0; uVar11 = uVar11 - 1) {
          *ppuVar15 = (undefined *)0x0;
          ppuVar15 = ppuVar15 + 1;
        }
        for (uVar11 = (uint)((uVar3 & 1) != 0); uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined2 *)ppuVar15 = 0;
          ppuVar15 = (undefined **)((int)ppuVar15 + 2);
        }
      }
      local_a8 = (void *)((uint)local_a8 & 0xffff);
      local_a4 = 0;
      if (local_84._2_2_ != 0) {
        ppuVar15 = local_88;
        for (uVar11 = local_90 >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
          *ppuVar15 = (undefined *)0x0;
          ppuVar15 = ppuVar15 + 1;
        }
        for (uVar11 = (uint)((local_90 & 1) != 0); uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined2 *)ppuVar15 = 0;
          ppuVar15 = (undefined **)((int)ppuVar15 + 2);
        }
      }
      local_84 = (void *)((uint)local_84 & 0xffff);
      local_80 = 0;
      (**(code **)(*local_58 + 0x84))(iVar9,0);
      local_98 = local_94;
      local_70 = (float)local_90;
      local_78 = local_78 + 0xc;
      local_68 = local_68 + 1;
    } while (local_68 < (int)(uint)*(ushort *)(local_74 + 0x10));
  }
  local_90 = (uint)local_70;
  FUN_00401f20(local_a8);
  FUN_00401f20(local_84);
  *unaff_FS_OFFSET = local_1c;
  return;
}



float10 FUN_008c6210(void)

{
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    return (float10)*(float *)(*(int *)(in_ECX + 8) + 0x10);
  }
  return (float10)1.0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c6240(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d61e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9952c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba812c = _DAT_00ba812c + -1;
  local_4 = 0xffffffff;
  FUN_008ce450();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c62b0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a5591c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    DAT_00ba7d70 = DAT_00ba7d70 + 1;
    *puVar2 = &PTR_FUN_00a965d4;
    _DAT_00ba816c = _DAT_00ba816c + 1;
    *puVar2 = &PTR_FUN_00a9952c;
    _DAT_00ba812c = _DAT_00ba812c + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c6360(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a5591c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    DAT_00ba7d70 = DAT_00ba7d70 + 1;
    *puVar2 = &PTR_FUN_00a965d4;
    _DAT_00ba816c = _DAT_00ba816c + 1;
    *puVar2 = &PTR_FUN_00a9952c;
    _DAT_00ba812c = _DAT_00ba812c + 1;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x80))(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = unaff_EBX;
  return puVar2;
}



void FUN_008c64a0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d770b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    iVar2 = thunk_FUN_00401aa0(0x50,1);
    bVar4 = 0x10 - ((byte)iVar2 & 0xf);
    *(byte *)(iVar2 + (uint)bVar4 + -1) = bVar4;
    local_4 = 0;
    puVar3 = (undefined4 *)FUN_009161d0(param_1);
    local_4 = 0xffffffff;
    (**(code **)(*in_ECX + 0x4c))(puVar3,uVar1);
    if ((*(short *)(puVar3 + 1) != 0) &&
       (*(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1,
       *(short *)((int)puVar3 + 6) == 0)) {
      (**(code **)*puVar3)(1);
    }
    (**(code **)(*in_ECX + 0x7c))(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008c65b0(byte param_1)

{
  FUN_008c6240();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008c65d0(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 8) + 0x30);
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
        piVar1 = &DAT_00ba8138;
      }
      else {
        piVar1 = (int *)(*(int *)(*(int *)(in_ECX + 8) + 0x28) + iVar3 * 8);
      }
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x24))(param_1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  thunk_FUN_00700650(param_1);
  return;
}



void FUN_008c6680(void)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *in_ECX;
  uint *puVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  int *unaff_retaddr;
  int local_24;
  int local_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c26db;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((in_ECX == (int *)0x0) || (in_ECX[2] == 0)) {
    local_24 = 0;
  }
  else {
    local_24 = *(int *)(in_ECX[2] + 0x30);
  }
  local_20 = 0;
  if (0 < local_24) {
    do {
      if ((in_ECX == (int *)0x0) || (in_ECX[2] == 0)) {
        puVar8 = &DAT_00ba8138;
      }
      else {
        puVar8 = (uint *)(*(int *)(in_ECX[2] + 0x28) + local_20 * 8);
      }
      piVar1 = (int *)*puVar8;
      if (piVar1 != (int *)0x0) {
        for (puVar5 = (undefined4 *)(**(code **)(*piVar1 + 4))(uVar4); puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)puVar5[1]) {
          if (puVar5 == &DAT_00b3fd0c) {
            bVar2 = 1;
            goto LAB_008c6710;
          }
        }
        bVar2 = 0;
LAB_008c6710:
        if ((-(uint)bVar2 & (uint)piVar1) != 0) {
          fStack_1c = (float)FUN_00401f00(0xc0);
          uStack_4 = 0;
          if (fStack_1c == 0.0) {
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_00719a20(-(uint)bVar2 & (uint)piVar1);
          }
          uStack_4 = 0xffffffff;
          FUN_006ff420("bhkNiTriStripsShape");
          fVar9 = (float10)FUN_008c6210();
          fStack_1c = (float)ABS(fVar9);
          *(float *)(iVar6 + 0x60) = fStack_1c;
          (**(code **)(*in_ECX + 0x98))(iVar6);
          iVar7 = FUN_00707530(2);
          if (iVar7 != 0) {
            if (*puVar8 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(ushort *)(*puVar8 + 0x2c) >> 6 & 0x3f;
            }
            fStack_1c = 0.0;
            uStack_18 = 0;
            uStack_14 = 0;
            FUN_008a2730(uVar3,&fStack_1c);
            *(float *)(iVar7 + 0x40) = fStack_1c;
            *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + 1;
            *(undefined4 *)(iVar7 + 0x44) = uStack_18;
            *(undefined4 *)(iVar7 + 0x48) = uStack_14;
          }
          (**(code **)(*unaff_retaddr + 0x84))(iVar6,0);
        }
      }
      local_20 = local_20 + 1;
    } while (local_20 < local_24);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008c6870(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}



void FUN_008c6880(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != (undefined4 *)*param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *param_1;
    *in_ECX = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  in_ECX[1] = param_1[1];
  return;
}



void FUN_008c68d0(uint param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int in_ECX;
  
  if (param_1 < *(uint *)(in_ECX + 0xc)) {
    if ((*param_2 == 0) && (param_2[1] == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    piVar1 = (int *)(*(int *)(in_ECX + 4) + param_1 * 8);
    if (bVar2) {
      if ((*piVar1 == 0) && (piVar1[1] == 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) {
        *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
      }
    }
    else if ((*piVar1 == 0) && (piVar1[1] == 0)) {
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
      FUN_008c6880(param_2);
      return;
    }
  }
  else {
    *(uint *)(in_ECX + 0xc) = param_1 + 1;
    if ((*param_2 == 0) && (param_2[1] == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
      FUN_008c6880(param_2);
      return;
    }
  }
  FUN_008c6880(param_2);
  return;
}



void FUN_008c69c0(uint param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  uint uVar7;
  LONG LVar8;
  int in_ECX;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  uint *local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d774b;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != *(uint *)(in_ECX + 8)) {
    uVar9 = param_1;
    if (param_1 < *(uint *)(in_ECX + 0xc)) {
      do {
        piVar11 = (int *)(*(int *)(in_ECX + 4) + uVar9 * 8);
        if ((*piVar11 == 0) && (piVar11[1] == 0)) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if (!bVar6) {
          local_14 = (uint *)0x0;
          local_10 = 0;
          local_4 = 0;
          FUN_008c6880(&local_14);
          *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(in_ECX + 0xc));
      *(uint *)(in_ECX + 0xc) = param_1;
    }
    local_4 = 0xffffffff;
    pvVar2 = *(void **)(in_ECX + 4);
    *(uint *)(in_ECX + 8) = param_1;
    if (param_1 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      uVar9 = -(uint)((int)((ulonglong)param_1 * 8 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 8);
      local_14 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar9) | uVar9 + 4,uVar7);
      local_4 = 1;
      if (local_14 == (uint *)0x0) {
        puVar10 = (uint *)0x0;
      }
      else {
        puVar10 = local_14 + 1;
        *local_14 = param_1;
        _eh_vector_constructor_iterator_(puVar10,8,param_1,FUN_008c6870,FUN_007016a0);
      }
      local_4 = 0xffffffff;
      *(uint **)(in_ECX + 4) = puVar10;
      local_14 = (uint *)0x0;
      if (*(int *)(in_ECX + 0xc) != 0) {
        do {
          iVar1 = (int)local_14 * 8;
          puVar3 = *(undefined4 **)(*(int *)(in_ECX + 4) + iVar1);
          piVar11 = (int *)(*(int *)(in_ECX + 4) + iVar1);
          if (puVar3 != *(undefined4 **)((int)pvVar2 + iVar1)) {
            if (((puVar3 != (undefined4 *)0x0) &&
                (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
               (puVar3 != (undefined4 *)0x0)) {
              (**(code **)*puVar3)(1);
            }
            iVar4 = *(int *)((int)pvVar2 + iVar1);
            *piVar11 = iVar4;
            if (iVar4 != 0) {
              InterlockedIncrement((LONG *)(iVar4 + 4));
            }
          }
          local_14 = (uint *)((int)local_14 + 1);
          piVar11[1] = *(int *)((int)pvVar2 + iVar1 + 4);
        } while (local_14 < *(uint **)(in_ECX + 0xc));
      }
      uVar7 = *(uint *)(in_ECX + 0xc);
      if (uVar7 < *(uint *)(in_ECX + 8)) {
        local_14 = (uint *)0x0;
        local_10 = 0;
        do {
          puVar5 = *(undefined4 **)(*(int *)(in_ECX + 4) + uVar7 * 8);
          puVar3 = (undefined4 *)(*(int *)(in_ECX + 4) + uVar7 * 8);
          local_4 = 2;
          if (puVar5 != (undefined4 *)0x0) {
            LVar8 = InterlockedDecrement(puVar5 + 1);
            if ((LVar8 == 0) && (puVar5 != (undefined4 *)0x0)) {
              (**(code **)*puVar5)(1);
            }
            *puVar3 = 0;
          }
          uVar7 = uVar7 + 1;
          puVar3[1] = 0;
          local_4 = 0xffffffff;
        } while (uVar7 < *(uint *)(in_ECX + 8));
      }
    }
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar2,8,*(int *)((int)pvVar2 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar2 + -4);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008c6be0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7778;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    uVar5 = 0;
    do {
      puVar2 = *(undefined4 **)(*(int *)(in_ECX + 4) + uVar5 * 8);
      puVar1 = (undefined4 *)(*(int *)(in_ECX + 4) + uVar5 * 8);
      local_4 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(puVar2 + 1);
        if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1,uVar3);
        }
        *puVar1 = 0;
      }
      uVar5 = uVar5 + 1;
      puVar1[1] = 0;
    } while (uVar5 < *(uint *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008c6c90(byte param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  pvVar1 = (void *)in_ECX[1];
  *in_ECX = &PTR_FUN_00a995d0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,8,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_008c6ce0(undefined1 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d77ab;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar3 = thunk_FUN_00401aa0(0x40,1);
    bVar2 = 0x10 - ((byte)iVar3 & 0xf);
    puVar4 = (undefined4 *)(iVar3 + (uint)bVar2);
    *(byte *)((int)puVar4 + -1) = bVar2;
    *puVar4 = 0;
    local_4 = 0xffffffff;
    puVar4[1] = 0;
    puVar4[2] = &PTR_FUN_00a995d0;
    puVar4[4] = 0;
    puVar4[7] = 1;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[8] = 0x3f800000;
    puVar4[9] = 0x3f800000;
    puVar4[10] = 0x3f800000;
    *(undefined4 **)(in_ECX + 0xc) = puVar4;
    if (*(int *)(in_ECX + 8) != 0) {
      thunk_FUN_008a2690(puVar4);
      if (*(int *)(in_ECX + 8) != 0) {
        FUN_00916310(puVar4);
        *param_1 = 1;
        goto LAB_008c6db3;
      }
      puVar4[8] = 0x3f800000;
      puVar4[9] = 0x3f800000;
      puVar4[10] = 0x3f800000;
    }
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
LAB_008c6db3:
  uVar1 = *(undefined4 *)(in_ECX + 0xc);
  *unaff_FS_OFFSET = local_c;
  return uVar1;
}



void FUN_008c6dd0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0x80000000;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0x80000000;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0x80000000;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0x80000000;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0x80000000;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0x80000000;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0x80000000;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0x80000000;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0x80000000;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0x80000000;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0x80000000;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0x80000000;
  return;
}



void FUN_008c6e80(void)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d7852;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 10;
  if (-1 < *(int *)(in_ECX + 0xb0)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0xa8),*(int *)(in_ECX + 0xb0) * 4,0x14);
  }
  local_4._0_1_ = 9;
  if (-1 < *(int *)(in_ECX + 0xa4)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x9c),*(int *)(in_ECX + 0xa4) * 4,0x14);
  }
  local_4._0_1_ = 8;
  if (-1 < *(int *)(in_ECX + 0x98)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x90),*(int *)(in_ECX + 0x98) * 4,0x14);
  }
  local_4._0_1_ = 7;
  if (-1 < *(int *)(in_ECX + 0x8c)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x84),*(int *)(in_ECX + 0x8c) * 4,0x14);
  }
  local_4._0_1_ = 6;
  if (-1 < *(int *)(in_ECX + 0x80)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x78),*(int *)(in_ECX + 0x80) * 4,0x14);
  }
  local_4._0_1_ = 5;
  if (-1 < *(int *)(in_ECX + 0x74)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x6c),*(int *)(in_ECX + 0x74) * 4,0x14);
  }
  local_4._0_1_ = 4;
  if (-1 < *(int *)(in_ECX + 0x68)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x60),*(int *)(in_ECX + 0x68) * 4,0x14);
  }
  local_4._0_1_ = 3;
  if (-1 < (int)*(uint *)(in_ECX + 0x5c)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x54),*(uint *)(in_ECX + 0x5c) & 0x3fffffff,0x14);
  }
  local_4._0_1_ = 2;
  if (-1 < *(int *)(in_ECX + 0x50)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x48),*(int *)(in_ECX + 0x50) * 4,0x14);
  }
  local_4._0_1_ = 1;
  if (-1 < *(int *)(in_ECX + 0x44)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x3c),*(int *)(in_ECX + 0x44) * 4,0x14);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (-1 < *(int *)(in_ECX + 0x38)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x30),*(int *)(in_ECX + 0x38) * 4,0x14);
  }
  local_4 = 0xffffffff;
  if (-1 < *(int *)(in_ECX + 0x2c)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x24),*(int *)(in_ECX + 0x2c) * 4,0x14);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008c7160(uint param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  iVar2 = param_1;
  local_8 = in_ECX;
  FUN_008ce640(param_1);
  param_1 = FUN_0070f910(DAT_00ba8130);
  uVar6 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar6) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar6);
  }
  FUN_0042bb90(uVar6,&param_1);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    param_1 = 0;
  }
  else {
    param_1 = *(uint *)(*(int *)(in_ECX + 8) + 0x30);
  }
  uVar6 = param_1;
  local_c = param_1;
  local_10 = FUN_0070fb40("Subparts",param_1);
  uVar7 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar7) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar7);
  }
  FUN_0042bb90(uVar7,&local_10);
  local_10 = 0;
  if (5 < uVar6) {
    local_10 = local_c - 5;
    param_1 = 5;
    uVar6 = 5;
    if (3 < local_10) {
      local_10 = 3;
    }
  }
  local_14 = 0;
  if (uVar6 != 0) {
    do {
      iVar3 = FUN_0070fb40(&DAT_00a99504,local_14);
      uVar1 = *(ushort *)(iVar2 + 10);
      uVar6 = (uint)uVar1;
      if (*(ushort *)(iVar2 + 8) <= uVar6) {
        FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar6);
      }
      if (uVar6 < *(ushort *)(iVar2 + 10)) {
        if (iVar3 == 0) {
          if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) != 0) {
            *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) == 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(iVar2 + 10) = uVar1 + 1;
        if (iVar3 != 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      *(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) = iVar3;
      if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
        piVar5 = &DAT_00ba8138;
      }
      else {
        piVar5 = (int *)(*(int *)(*(int *)(in_ECX + 8) + 0x28) + local_14 * 8);
      }
      if (*piVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(ushort *)(*piVar5 + 0x2c) >> 6 & 0x3f;
      }
      iVar3 = FUN_0070fc30("MATERIAL",(&PTR_s_STONE_00b2e908)[uVar6]);
      uVar1 = *(ushort *)(iVar2 + 10);
      uVar6 = (uint)uVar1;
      if (*(ushort *)(iVar2 + 8) <= uVar6) {
        FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar6);
      }
      if (uVar6 < *(ushort *)(iVar2 + 10)) {
        if (iVar3 == 0) {
          if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) != 0) {
            *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) == 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(iVar2 + 10) = uVar1 + 1;
        if (iVar3 != 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      *(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) = iVar3;
      local_4 = piVar5[1];
      FUN_008a9100(iVar2);
      local_14 = local_14 + 1;
      in_ECX = local_8;
    } while (local_14 < param_1);
  }
  param_1 = 0;
  if (local_10 != 0) {
    do {
      iVar4 = (local_c - param_1) + -1;
      iVar3 = FUN_0070fb40(&DAT_00a99504,iVar4);
      uVar1 = *(ushort *)(iVar2 + 10);
      uVar6 = (uint)uVar1;
      if (*(ushort *)(iVar2 + 8) <= uVar6) {
        FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar6);
      }
      if (uVar6 < *(ushort *)(iVar2 + 10)) {
        if (iVar3 == 0) {
          if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) != 0) {
            *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) == 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(iVar2 + 10) = uVar1 + 1;
        if (iVar3 != 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      *(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) = iVar3;
      if ((local_8 == 0) || (*(int *)(local_8 + 8) == 0)) {
        piVar5 = &DAT_00ba8138;
      }
      else {
        piVar5 = (int *)(*(int *)(*(int *)(local_8 + 8) + 0x28) + iVar4 * 8);
      }
      if (*piVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(ushort *)(*piVar5 + 0x2c) >> 6 & 0x3f;
      }
      iVar3 = FUN_0070fc30("MATERIAL",(&PTR_s_STONE_00b2e908)[uVar6]);
      uVar1 = *(ushort *)(iVar2 + 10);
      uVar6 = (uint)uVar1;
      if (*(ushort *)(iVar2 + 8) <= uVar6) {
        FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar6);
      }
      if (uVar6 < *(ushort *)(iVar2 + 10)) {
        if (iVar3 == 0) {
          if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) != 0) {
            *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) == 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(iVar2 + 10) = uVar1 + 1;
        if (iVar3 != 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      *(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) = iVar3;
      local_4 = piVar5[1];
      FUN_008a9100(iVar2);
      param_1 = param_1 + 1;
    } while (param_1 < local_10);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c74f0(char *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int *in_ECX;
  undefined4 extraout_ECX;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  int *unaff_FS_OFFSET;
  char *pcVar4;
  char *pcVar5;
  char *pcStack_33c;
  undefined1 *puStack_338;
  uint uStack_334;
  char *pcStack_324;
  undefined4 *puStack_320;
  uint local_31c;
  int iStack_318;
  undefined4 uStack_314;
  undefined1 local_30d;
  char *local_30c;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  uint uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  uint uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  uint uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  uint uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  uint uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  uint uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  uint uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  uint uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  uint uStack_268;
  undefined1 *puStack_23c;
  undefined1 auStack_22c [504];
  int iStack_34;
  undefined4 uStack_2c;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d7891;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&pcStack_324;
  uStack_334 = DAT_00b30aac ^ (uint)&stack0xfffffcd0;
  *unaff_FS_OFFSET = (int)&local_1c;
  puStack_338 = &local_30d;
  local_30c = param_1;
  pcStack_33c = (char *)0x8c754b;
  local_31c = (**(code **)(*in_ECX + 0x74))();
  if (*(uint *)(param_1 + 4) < 2) {
    pcVar4 = param_1 + 0xe0;
    param_1 = param_1 + 8;
    if (*param_1 == '\0') {
      param_1 = "Please";
    }
    puStack_23c = (undefined1 *)&pcStack_33c;
    pcStack_33c = (char *)CONCAT31((int3)((uint)extraout_ECX >> 8),1);
    FUN_008bbfb0(auStack_22c,0x200);
    pcStack_33c = " re-export\n";
    pcVar5 = " contains an old bhkMeshShape! ";
    puStack_18 = (undefined1 *)0x0;
    FUN_008bbdb0("File ");
    FUN_008bbdb0(pcVar4);
    FUN_008bbdb0(pcVar5);
    FUN_008bbdb0(param_1);
    FUN_008bbdb0();
    pcStack_33c = (char *)0x113;
    (**(code **)(*DAT_00ba7fb0 + 8))(1,0x234f2250,auStack_22c,".\\bhkNiTriStripsShape.cpp");
    uStack_2c = 0xffffffff;
    FUN_008bc000();
    FUN_007008a0(pcStack_324);
    FUN_008c6dd0();
    uStack_2c = 1;
    (**(code **)(*(int *)(pcStack_324 + 0x21c) + 4))
              (*(int *)(pcStack_324 + 0x21c),&iStack_318,0xc0,0,0);
    if (unaff_EDI != (undefined4 *)0x0) {
      if (-1 < (int)uStack_2ec) {
        FUN_008a75d0(uStack_2f4,uStack_2ec * 4,0x14);
      }
      uStack_2ec = uStack_2ec & 0xc0000000 | 0x80000000;
      uStack_2f4 = 0;
      uStack_2f0 = 0;
      if (-1 < (int)uStack_2e0) {
        FUN_008a75d0(uStack_2e8,uStack_2e0 * 4,0x14);
      }
      uStack_2e0 = uStack_2e0 & 0xc0000000 | 0x80000000;
      uStack_2e8 = 0;
      uStack_2e4 = 0;
      if (-1 < (int)uStack_2d4) {
        FUN_008a75d0(uStack_2dc,uStack_2d4 * 4,0x14);
      }
      uStack_2d4 = uStack_2d4 & 0xc0000000 | 0x80000000;
      uStack_2dc = 0;
      uStack_2d8 = 0;
      if (-1 < (int)uStack_2c8) {
        FUN_008a75d0(uStack_2d0,uStack_2c8 * 4,0x14);
      }
      uStack_2c8 = uStack_2c8 & 0xc0000000 | 0x80000000;
      uStack_2d0 = 0;
      uStack_2cc = 0;
      if (-1 < (int)uStack_2bc) {
        FUN_008a75d0(uStack_2c4,uStack_2bc & 0x3fffffff,0x14);
      }
      uStack_2bc = uStack_2bc & 0xc0000000 | 0x80000000;
      uStack_2c4 = 0;
      uStack_2c0 = 0;
      if (-1 < (int)uStack_2b0) {
        FUN_008a75d0(uStack_2b8,uStack_2b0 * 4,0x14);
      }
      uStack_2b0 = uStack_2b0 & 0xc0000000 | 0x80000000;
      uStack_2b8 = 0;
      uStack_2b4 = 0;
      if (-1 < (int)uStack_2a4) {
        FUN_008a75d0(uStack_2ac,uStack_2a4 * 4,0x14);
      }
      uStack_2a4 = uStack_2a4 & 0xc0000000 | 0x80000000;
      uStack_2ac = 0;
      uStack_2a8 = 0;
      if (-1 < (int)uStack_298) {
        FUN_008a75d0(uStack_2a0,uStack_298 * 4,0x14);
      }
      uStack_298 = uStack_298 & 0xc0000000 | 0x80000000;
      uStack_2a0 = 0;
      uStack_29c = 0;
      if (-1 < (int)uStack_28c) {
        FUN_008a75d0(uStack_294,uStack_28c * 4,0x14);
      }
      uStack_28c = uStack_28c & 0xc0000000 | 0x80000000;
      uStack_294 = 0;
      uStack_290 = 0;
      if (-1 < (int)uStack_280) {
        FUN_008a75d0(uStack_288,uStack_280 * 4,0x14);
      }
      uStack_280 = uStack_280 & 0xc0000000 | 0x80000000;
      uStack_288 = 0;
      uStack_284 = 0;
      if (-1 < (int)uStack_274) {
        FUN_008a75d0(uStack_27c,uStack_274 * 4,0x14);
      }
      uStack_274 = uStack_274 & 0xc0000000 | 0x80000000;
      uStack_27c = 0;
      uStack_278 = 0;
      if (-1 < (int)uStack_268) {
        FUN_008a75d0(uStack_270,uStack_268 * 4,0x14);
      }
      unaff_EDI[1] = uStack_314;
      uStack_268 = uStack_268 & 0xc0000000 | 0x80000000;
      uStack_270 = 0;
      uStack_26c = 0;
      if (0x1e < iStack_318) {
        iStack_318 = 0;
      }
      *(int *)(uStack_334 + 0x10) = iStack_318;
      *unaff_EDI = 0;
      unaff_EDI[1] = _DAT_00b2efc4;
    }
    FUN_00712ae0();
    uStack_2c = 0xffffffff;
    FUN_008c6e80();
  }
  else {
    pcStack_33c = param_1;
    FUN_008a25c0();
    pcStack_33c = (char *)0x8c7adf;
    FUN_00712ae0();
    pcStack_33c = (char *)0x1;
    iStack_318 = 0;
    puStack_320 = (undefined4 *)0x4;
    (**(code **)(*(int *)(param_1 + 0x21c) + 4))
              (*(int *)(param_1 + 0x21c),&iStack_318,4,&puStack_320);
    if ((unaff_EDI != (undefined4 *)0x0) && (uStack_334 = 0, 0 < unaff_ESI)) {
      do {
        puStack_320 = (undefined4 *)0x0;
        local_31c = 0;
        uStack_2c = 2;
        (**(code **)(*(int *)(param_1 + 0x21c) + 4))
                  (*(int *)(param_1 + 0x21c),&local_31c,4,&stack0xfffffcd0,1);
        if ((*(uint *)(param_1 + 4) < 9) && ((local_31c & 0x20) != 0)) {
          local_31c = local_31c & 0xffffffdf | 0x8000;
        }
        uVar1 = unaff_EDI[5];
        if ((uint)unaff_EDI[4] <= uVar1) {
          FUN_008c69c0(unaff_EDI[7] + uVar1);
        }
        FUN_008c68d0(uVar1,&puStack_320);
        puVar2 = puStack_320;
        uStack_2c = 0xffffffff;
        if (((puStack_320 != (undefined4 *)0x0) &&
            (LVar3 = InterlockedDecrement(puStack_320 + 1), LVar3 == 0)) &&
           (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        uStack_334 = uStack_334 + 1;
        param_1 = pcStack_324;
      } while ((int)uStack_334 < unaff_ESI);
    }
  }
  *unaff_FS_OFFSET = iStack_34;
  return;
}



void FUN_008c7c20(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  undefined4 uStack_24;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d78c8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = (**(code **)(*in_ECX + 0x74))((int)&uStack_24 + 3,uVar2);
  local_1c = iVar3;
  if (iVar3 != 0) {
    uVar4 = FUN_007124d0();
    uVar2 = uVar4;
    uStack_24 = uVar4;
    if ((*(uint *)(unaff_retaddr + 4) < 2) && (FUN_008c69c0(uVar4), uVar4 != 0)) {
      uStack_18 = 0;
      uStack_14 = 0;
      do {
        uVar2 = *(uint *)(iVar3 + 0x14);
        puStack_8 = (undefined1 *)0x0;
        if (*(uint *)(iVar3 + 0x10) <= uVar2) {
          FUN_008c69c0(*(int *)(iVar3 + 0x1c) + uVar2);
        }
        FUN_008c68d0(uVar2,&uStack_18);
        uVar4 = uVar4 - 1;
        puStack_8 = (undefined1 *)0xffffffff;
        uVar2 = uStack_24;
      } while (uVar4 != 0);
    }
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        puVar5 = (undefined4 *)FUN_007124a0();
        iVar3 = *(int *)(iVar3 + 0xc);
        puVar1 = *(undefined4 **)(iVar3 + uVar4 * 8);
        if (puVar1 != puVar5) {
          if (((puVar1 != (undefined4 *)0x0) &&
              (LVar6 = InterlockedDecrement(puVar1 + 1), LVar6 == 0)) &&
             (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          *(undefined4 **)(iVar3 + uVar4 * 8) = puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar5 + 1);
          }
        }
        uVar4 = uVar4 + 1;
        iVar3 = local_1c;
      } while (uVar4 < uStack_24);
    }
  }
  thunk_FUN_0089d6c0(unaff_retaddr);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c7d60(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int *unaff_retaddr;
  int iVar7;
  int *piStack_34;
  int *local_30;
  undefined4 uStack_2c;
  undefined **local_28;
  void *pvStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d78f8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_30 = in_ECX;
  iVar3 = (**(code **)(*in_ECX + 0x74))(&local_28,uVar2);
  pvVar4 = (void *)0x0;
  local_28 = &PTR_FUN_00a995d0;
  uStack_20 = 0;
  iStack_14 = 1;
  uStack_1c = 0;
  uStack_18 = 0;
  pvStack_24 = (void *)0x0;
  puStack_8 = (undefined1 *)0x1;
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + 0x14);
    iVar6 = 0;
    if (0 < iVar7) {
      do {
        uVar2 = uStack_1c;
        iVar1 = *(int *)(iVar3 + 0xc);
        if (uStack_20 <= uStack_1c) {
          FUN_008c69c0(uStack_1c + iStack_14);
        }
        FUN_008c68d0(uVar2,iVar1 + iVar6 * 8);
        iVar6 = iVar6 + 1;
        in_ECX = piStack_34;
      } while (iVar6 < iVar7);
    }
    pvVar4 = pvStack_24;
    FUN_008c6be0();
    FUN_008c69c0(0);
    *(undefined4 *)(iVar3 + 4) = _DAT_00b2efc4;
  }
  FUN_008a2610(unaff_retaddr);
  (**(code **)(unaff_retaddr[0x88] + 8))(unaff_retaddr[0x88],&stack0xffffffc8,4,&stack0x00000000,1);
  iVar3 = 0;
  if (0 < iVar7) {
    do {
      (**(code **)(*unaff_retaddr + 0x2c))(*(undefined4 *)((int)pvVar4 + iVar3 * 8));
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar7);
  }
  (**(code **)(unaff_retaddr[0x88] + 8))(unaff_retaddr[0x88],&stack0xffffffc8,4,&stack0x00000000,1);
  iVar3 = 0;
  if (0 < iVar7) {
    puVar5 = (undefined4 *)((int)pvVar4 + 4);
    do {
      local_30 = (int *)*puVar5;
      (**(code **)(unaff_retaddr[0x88] + 8))(unaff_retaddr[0x88],&local_30,4,&stack0x00000000,1);
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 2;
      pvVar4 = pvStack_24;
    } while (iVar3 < iVar7);
  }
  (**(code **)(*in_ECX + 100))(uStack_2c);
  local_c = -1;
  if (pvVar4 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar4,8,*(int *)((int)pvVar4 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar4 + -4);
  }
  *unaff_FS_OFFSET = iStack_14;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c7fb0(void)

{
  undefined4 *in_ECX;
  
  FUN_0089d3d0();
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00a5591c;
  DAT_00ba7d70 = DAT_00ba7d70 + 1;
  *in_ECX = &PTR_FUN_00a55a5c;
  _DAT_00ba7f44 = _DAT_00ba7f44 + 1;
  *in_ECX = &PTR_FUN_00a55afc;
  _DAT_00ba7f50 = _DAT_00ba7f50 + 1;
  *in_ECX = &PTR_FUN_00a99624;
  _DAT_00ba8140 = _DAT_00ba8140 + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c8010(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d6e18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a99624;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba8140 = _DAT_00ba8140 + -1;
  local_4 = 0xffffffff;
  FUN_008ae9f0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008c8080(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  float10 fVar2;
  
  FUN_008aea60(param_1);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    puVar1 = &DAT_00ba7a40;
  }
  else {
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x20);
  }
  FUN_0047dcd0(puVar1);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    puVar1 = &DAT_00ba7a40;
  }
  else {
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x30);
  }
  FUN_0047dcd0(puVar1);
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    fVar2 = (float10)FUN_008f2260();
    *(float *)(param_1 + 0x30) = (float)fVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __cdecl CProcessLocal<class
   CControlSiteFactoryMgr>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   AFX_MODULE_THREAD_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   _AFXCTL_AMBIENT_CACHE>::CreateObject(void)
   
   Library: Visual Studio 2005 Release */

undefined4 CreateObject(void)

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
  local_10 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_008c7fb0();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008c8170(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  iVar2 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_008c7fb0();
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x80))(uVar3,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = unaff_ESI;
  return uVar3;
}



void FUN_008c82d0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d6e4b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x60,0x24,uVar1);
  *(undefined2 *)(iVar2 + 4) = 0x60;
  local_c = 0;
  puVar3 = (undefined4 *)FUN_008f3230(uStack_4,unaff_retaddr,param_1,DAT_00b2ffe4);
  local_c = -1;
  (**(code **)(*in_ECX + 0x4c))(puVar3);
  if ((*(short *)(puVar3 + 1) != 0) &&
     (*(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1,
     *(short *)((int)puVar3 + 6) == 0)) {
    (**(code **)*puVar3)(1);
  }
  *unaff_FS_OFFSET = iVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c8390(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = _DAT_00b2efc4;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0x3f800000;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  return;
}



void FUN_008c83e0(byte param_1)

{
  FUN_008c8010();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_008c8400(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar1 = thunk_FUN_00401aa0(0x50,1);
    bVar3 = 0x10 - ((byte)iVar1 & 0xf);
    *(byte *)(iVar1 + (uint)bVar3 + -1) = bVar3;
    uVar2 = FUN_008c8390();
    *(undefined4 *)(in_ECX + 0xc) = uVar2;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008c8080(uVar2);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008c8460(int param_1)

{
  int *in_ECX;
  undefined1 auStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_48;
  if (param_1 != 0) {
    local_40 = *(undefined4 *)(param_1 + 0x20);
    local_3c = *(undefined4 *)(param_1 + 0x24);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_34 = *(undefined4 *)(param_1 + 0x2c);
    local_30 = *(undefined4 *)(param_1 + 0x10);
    local_2c = *(undefined4 *)(param_1 + 0x14);
    local_28 = *(undefined4 *)(param_1 + 0x18);
    local_24 = *(undefined4 *)(param_1 + 0x1c);
    FUN_008c82d0(&local_30,&local_40,*(undefined4 *)(param_1 + 0x30));
  }
  (**(code **)(*in_ECX + 0x7c))(param_1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c84f0(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined1 auStack_a4 [4];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_24;
  uint local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d792b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_a4;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff50;
  *unaff_FS_OFFSET = (uint)&local_1c;
  local_9c = _DAT_00b2efc4;
  local_70 = 0;
  local_90 = 0;
  local_8c = 0;
  local_a0 = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0x3f800000;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_008c8080(&local_a0);
  iStack_5c = (**(code **)(*DAT_00ba7d98 + 0x10))(0x90,8,uVar1);
  *(undefined2 *)(iStack_5c + 4) = 0x90;
  uStack_58 = local_88;
  uStack_54 = local_84;
  uStack_50 = local_80;
  local_1c = 0;
  uStack_4c = local_7c;
  uStack_48 = uStack_98;
  uStack_44 = uStack_94;
  uStack_40 = local_90;
  uStack_3c = local_8c;
  piVar2 = (int *)FUN_00916380(&uStack_48,&uStack_58,local_78,9,1);
  local_1c = 0xffffffff;
  (**(code **)(*piVar2 + 0xc))();
  if (piVar2[0x14] != 0) {
    (**(code **)(*in_ECX + 0x94))(param_1,piVar2[0x14],"bhkCylinderShape");
  }
  *unaff_FS_OFFSET = local_24;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c8660(int param_1)

{
  uint uVar1;
  undefined1 auStack_84 [4];
  undefined4 local_80;
  undefined1 local_7c [12];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_84;
  FUN_008aeac0(param_1);
  local_80 = FUN_0070f910(DAT_00ba8144);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_80);
  local_6c = _DAT_00b2efc4;
  local_40 = 0;
  local_60 = 0;
  local_70 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0x3f800000;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  FUN_008c8080(&local_70);
  local_80 = FUN_0070fb90(&DAT_00a996c8,local_40);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_80);
  local_30 = local_60;
  local_2c = local_5c;
  local_28 = local_58;
  local_24 = local_54;
  FUN_004d68a0(local_7c,&local_30);
  local_80 = FUN_00707280(&DAT_00a996c4);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_80);
  local_30 = local_50;
  local_2c = local_4c;
  local_28 = local_48;
  local_24 = local_44;
  FUN_004d68a0(local_7c,&local_30);
  local_80 = FUN_00707280(&DAT_00a996c0);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_80);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c8830(void)

{
  undefined4 *in_ECX;
  
  FUN_0089d3d0();
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00a5591c;
  DAT_00ba7d70 = DAT_00ba7d70 + 1;
  *in_ECX = &PTR_FUN_00a55a5c;
  _DAT_00ba7f44 = _DAT_00ba7f44 + 1;
  *in_ECX = &PTR_FUN_00a55afc;
  _DAT_00ba7f50 = _DAT_00ba7f50 + 1;
  *in_ECX = &PTR_FUN_00a996dc;
  _DAT_00ba814c = _DAT_00ba814c + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c8890(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d6e18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a996dc;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba814c = _DAT_00ba814c + -1;
  local_4 = 0xffffffff;
  FUN_008ae9f0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __cdecl CProcessLocal<class
   CControlSiteFactoryMgr>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   AFX_MODULE_THREAD_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   _AFXCTL_AMBIENT_CACHE>::CreateObject(void)
   
   Library: Visual Studio 2005 Release */

undefined4 CreateObject(void)

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
  local_10 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_008c8830();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008c8970(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  iVar2 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_008c8830();
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x80))(uVar3,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = unaff_ESI;
  return uVar3;
}



void FUN_008c8a80(byte param_1)

{
  FUN_008c8890();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008c8aa0(undefined4 param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int *in_ECX;
  int iVar7;
  int iVar8;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  local_14 = param_1;
  iVar5 = (**(code **)(*in_ECX + 0x74))((int)&uStack_1c + 3);
  if ((iVar5 != 0) && (uStack_1c = *(float *)(param_2 + 0x10), uStack_1c != 1.0)) {
    iVar7 = *(int *)(iVar5 + 0xc);
    if (iVar7 != 0) {
      iVar8 = iVar7 << 4;
      do {
        iVar8 = iVar8 + -0x10;
        pfVar1 = (float *)(*(int *)(iVar5 + 8) + iVar8);
        fVar2 = pfVar1[1];
        fVar3 = pfVar1[2];
        fVar4 = pfVar1[3];
        pfVar6 = (float *)(*(int *)(iVar5 + 8) + iVar8);
        iVar7 = iVar7 + -1;
        *pfVar6 = *pfVar1 * uStack_1c;
        pfVar6[1] = fVar2 * uStack_1c;
        pfVar6[2] = fVar3 * uStack_1c;
        pfVar6[3] = fVar4 * uStack_1c;
      } while (iVar7 != 0);
    }
    iVar7 = *(int *)(iVar5 + 0x18);
    if (iVar7 != 0) {
      iVar8 = iVar7 << 4;
      do {
        iVar8 = iVar8 + -0x10;
        iVar7 = iVar7 + -1;
        *(float *)(*(int *)(iVar5 + 0x14) + 0xc + iVar8) =
             *(float *)(*(int *)(iVar5 + 0x14) + 0xc + iVar8) * uStack_1c;
      } while (iVar7 != 0);
    }
  }
  FUN_008a2670(uStack_18,param_2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c8b60(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *in_ECX;
  undefined4 unaff_EBP;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d796b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    iStack_4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x50,0x24,uVar2);
    *(undefined2 *)(iStack_4 + 4) = 0x50;
    local_c = 0;
    puVar3 = (undefined4 *)FUN_00917720(unaff_EBP,uVar1,0x10,param_1 + 0x14,DAT_00b2ffe4);
    puVar3[3] = _DAT_00b2efc4;
    local_c = -1;
    (**(code **)(*in_ECX + 0x4c))(puVar3);
    if ((*(short *)(puVar3 + 1) != 0) &&
       (*(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1,
       *(short *)((int)puVar3 + 6) == 0)) {
      (**(code **)*puVar3)(1);
    }
    (**(code **)(*in_ECX + 0x7c))(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008c8c50(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  
  FUN_008aea60(param_1);
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_00917200(param_1 + 8);
    piVar4 = (int *)FUN_00916bc0();
    uVar5 = *(uint *)(param_1 + 0x1c) & 0x3fffffff;
    if ((int)uVar5 < piVar4[1]) {
      if (-1 < (int)*(uint *)(param_1 + 0x1c)) {
        FUN_008a75d0(*(undefined4 *)(param_1 + 0x14),uVar5 << 4,0x14);
      }
      uVar6 = FUN_008a7560(piVar4[1] << 4,0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar6;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0x40000000 | piVar4[1];
    }
    iVar8 = piVar4[1];
    puVar7 = *(undefined4 **)(param_1 + 0x14);
    *(int *)(param_1 + 0x18) = iVar8;
    if (0 < iVar8) {
      iVar9 = *piVar4 - (int)puVar7;
      do {
        puVar1 = (undefined4 *)(iVar9 + (int)puVar7);
        uVar6 = puVar1[1];
        uVar2 = puVar1[2];
        uVar3 = puVar1[3];
        *puVar7 = *puVar1;
        puVar7[1] = uVar6;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        puVar7 = puVar7 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008c8d40(undefined1 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    puVar1 = (undefined4 *)FUN_00401f00(0x20);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = _DAT_00b2efc4;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0x80000000;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0x80000000;
    }
    *(undefined4 **)(in_ECX + 0xc) = puVar1;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008c8c50(puVar1);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



void FUN_008c8db0(void)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d799b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (-1 < *(int *)(in_ECX + 0x1c)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x14),*(int *)(in_ECX + 0x1c) << 4,0x14);
  }
  local_4 = 0xffffffff;
  if (-1 < *(int *)(in_ECX + 0x10)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 8),*(int *)(in_ECX + 0x10) << 4,0x14);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008c8e70(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  undefined4 unaff_EBX;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d79d0;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*in_ECX + 0x74))(&local_28,uVar1);
  uStack_1c = 0;
  uStack_18 = 0;
  iStack_14 = -0x80000000;
  local_28 = 0;
  uStack_24 = 0;
  iStack_20 = -0x80000000;
  puStack_8 = (undefined1 *)0x1;
  if (iVar2 != 0) {
    uStack_1c = *(undefined4 *)(iVar2 + 8);
    uStack_18 = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 8) = 0;
    iStack_14 = *(int *)(iVar2 + 0x10);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0x80000000;
    local_28 = *(undefined4 *)(iVar2 + 0x14);
    uStack_24 = *(undefined4 *)(iVar2 + 0x18);
    *(undefined4 *)(iVar2 + 0x14) = 0;
    iStack_20 = *(int *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0x80000000;
  }
  FUN_008a2610(unaff_retaddr);
  if (iVar2 != 0) {
    FUN_008e81b0(unaff_retaddr,&uStack_1c);
    FUN_008e81b0(unaff_retaddr,&local_28);
    (**(code **)(*in_ECX + 100))(unaff_EBX);
  }
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  if (-1 < iStack_20) {
    FUN_008a75d0(local_28,iStack_20 << 4,0x14);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (-1 < iStack_14) {
    FUN_008a75d0(uStack_1c,iStack_14 << 4,0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_008c8ff0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_008aeac0(param_1);
  param_1 = FUN_0070f910(DAT_00ba8150);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_008c9070(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *in_ECX;
  int iVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  int *piStack_70;
  uint uStack_6c;
  int local_64 [4];
  undefined4 uStack_54;
  int *piStack_50;
  int aiStack_4c [2];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d7a08;
  local_1c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffff80;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (in_ECX == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)in_ECX[2];
  }
  (**(code **)(*piVar11 + 0x1c))(local_64,uVar7);
  uStack_54 = 0;
  piStack_50 = (int *)0x0;
  aiStack_4c[0] = -0x80000000;
  puStack_18 = (undefined1 *)0x0;
  piVar6 = piStack_50;
  if (((char)local_64[0] != '\0') && (piStack_70 = in_ECX, piVar6 = in_ECX, 0 < (int)in_ECX)) {
    FUN_008a6e40(&uStack_54,(uint)in_ECX & ((int)in_ECX < 0) - 1,0x10);
    piVar6 = in_ECX;
  }
  piStack_50 = piVar6;
  iVar8 = (**(code **)(*piVar11 + 0x20))(uStack_54);
  local_64[0] = 0;
  local_64[1] = 0;
  local_64[2] = 0x80000000;
  local_1c._0_1_ = 1;
  if (0 < (int)uStack_6c) {
    FUN_008a6e40(local_64,uStack_6c & ((int)uStack_6c < 0) - 1,0x10);
  }
  iVar10 = 0;
  if (0 < (int)uStack_6c) {
    iVar9 = 0;
    do {
      puVar1 = (undefined4 *)(iVar9 + iVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(iVar9 + local_64[0]);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 0x10;
    } while (iVar10 < (int)uStack_6c);
  }
  uStack_44 = 0x10;
  aiStack_4c[0] = local_64[0];
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0x80000000;
  uStack_34 = 0;
  iStack_30 = 0;
  uStack_2c = 0x80000000;
  local_1c = CONCAT31(local_1c._1_3_,2);
  FUN_008f21e0(aiStack_4c,&uStack_40,1);
  (**(code **)(*piStack_70 + 0x94))(param_1,&uStack_40,"bhkConvexVerticesShape");
  iStack_28._0_1_ = 1;
  FUN_008b44c0();
  iStack_28 = (uint)iStack_28._1_3_ << 8;
  if (((uint)in_ECX & 0x80000000) == 0) {
    FUN_008a75d0(piStack_70,(int)in_ECX << 4,0x14);
  }
  iStack_28 = 0xffffffff;
  if ((local_64[2] & 0x80000000U) == 0) {
    FUN_008a75d0(local_64[0],local_64[2] << 4,0x14);
  }
  *unaff_FS_OFFSET = iStack_30;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c92b0(void)

{
  undefined4 *in_ECX;
  
  FUN_0089d3d0();
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00a5591c;
  DAT_00ba7d70 = DAT_00ba7d70 + 1;
  *in_ECX = &PTR_FUN_00a55a5c;
  _DAT_00ba7f44 = _DAT_00ba7f44 + 1;
  *in_ECX = &PTR_FUN_00a55afc;
  _DAT_00ba7f50 = _DAT_00ba7f50 + 1;
  *in_ECX = &PTR_FUN_00a9978c;
  _DAT_00ba8158 = _DAT_00ba8158 + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c9310(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d6e18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9978c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba8158 = _DAT_00ba8158 + -1;
  local_4 = 0xffffffff;
  FUN_008ae9f0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008c9380(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  FUN_008aea60(param_1);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x10);
  }
  *(undefined4 *)(param_1 + 8) = uVar3;
  if ((in_ECX == 0) ||
     (puVar4 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x20), *(int *)(in_ECX + 8) == 0)) {
    puVar4 = &DAT_00b2f090;
  }
  uVar3 = puVar4[1];
  uVar1 = puVar4[2];
  uVar2 = puVar4[3];
  *(undefined4 *)(param_1 + 0x10) = *puVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar3 = puVar4[5];
  uVar1 = puVar4[6];
  uVar2 = puVar4[7];
  *(undefined4 *)(param_1 + 0x20) = puVar4[4];
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar3 = puVar4[9];
  uVar1 = puVar4[10];
  uVar2 = puVar4[0xb];
  *(undefined4 *)(param_1 + 0x30) = puVar4[8];
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar3 = puVar4[0xd];
  uVar1 = puVar4[0xe];
  uVar2 = puVar4[0xf];
  *(undefined4 *)(param_1 + 0x40) = puVar4[0xc];
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  return;
}



/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __cdecl CProcessLocal<class
   CControlSiteFactoryMgr>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   AFX_MODULE_THREAD_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   _AFXCTL_AMBIENT_CACHE>::CreateObject(void)
   
   Library: Visual Studio 2005 Release */

undefined4 CreateObject(void)

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
  local_10 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_008c92b0();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008c9460(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  iVar2 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_008c92b0();
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x80))(uVar3,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = unaff_ESI;
  return uVar3;
}



void FUN_008c9520(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *piVar5;
  int iStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  local_14 = param_1;
  iVar2 = (**(code **)(*in_ECX + 0x74))((int)&uStack_1c + 3);
  if (iVar2 == 0) goto LAB_008c95cc;
  if (*(int *)(iVar2 + 8) == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(*(int *)(iVar2 + 8) + 8);
  }
  uStack_1c = *(float *)(iStack_24 + 0x10);
  if (uStack_1c == 1.0) {
    if (piVar5 == (int *)0x0) goto LAB_008c95cc;
    cVar1 = (**(code **)(*piVar5 + 0x8c))(iStack_24);
    if (cVar1 != '\0') goto LAB_008c95cc;
  }
  else {
    *(float *)(iVar2 + 0x40) = uStack_1c * *(float *)(iVar2 + 0x40);
    *(float *)(iVar2 + 0x44) = uStack_1c * *(float *)(iVar2 + 0x44);
    *(float *)(iVar2 + 0x48) = uStack_1c * *(float *)(iVar2 + 0x48);
    *(float *)(iVar2 + 0x4c) = uStack_1c * *(float *)(iVar2 + 0x4c);
  }
  iVar3 = (**(code **)(*piVar5 + 0x18))(iStack_24);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar3 + 8);
  }
  *(undefined4 *)(iVar2 + 8) = uVar4;
LAB_008c95cc:
  FUN_008a2670(uStack_18,iStack_24);
  return;
}



void FUN_008c95f0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d6eeb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    iStack_4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x60,0x24,uVar1);
    *(undefined2 *)(iStack_4 + 4) = 0x60;
    local_c = 0;
    puVar2 = (undefined4 *)FUN_009179b0(*(undefined4 *)(param_1 + 8),param_1 + 0x10);
    local_c = -1;
    (**(code **)(*in_ECX + 0x4c))(puVar2);
    if ((*(short *)(puVar2 + 1) != 0) &&
       (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
       *(short *)((int)puVar2 + 6) == 0)) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*in_ECX + 0x7c))(param_1);
    if ((in_ECX[2] == 0) || (iVar3 = *(int *)(in_ECX[2] + 0x10), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 8);
    }
    if (iVar3 != 0) {
      in_ECX[4] = *(int *)(iVar3 + 0x10);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008c9770(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  if (((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) ||
     (iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x10), iVar1 == 0)) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(iVar1 + 8);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x24))(param_1);
  }
  thunk_FUN_00700650(param_1);
  return;
}



void FUN_008c97b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) ||
     (iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x10), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  (**(code **)(*param_1 + 0x2c))(uVar2);
  FUN_008a2610(param_1);
  return;
}



void FUN_008c97f0(undefined4 param_1)

{
  int iVar1;
  LONG LVar2;
  int in_ECX;
  undefined4 *puVar3;
  
  if ((char)param_1 == '\0') {
    if (((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) ||
       (iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x10), iVar1 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = *(undefined4 **)(iVar1 + 8);
    }
    if ((puVar3 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar3 + 1), LVar2 == 0)) {
      (**(code **)*puVar3)(1);
    }
  }
  else {
    if (((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) ||
       (iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x10), iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 8);
    }
    if (iVar1 != 0) {
      InterlockedIncrement((LONG *)(iVar1 + 4));
      FUN_008a26c0(param_1);
      return;
    }
  }
  FUN_008a26c0(param_1);
  return;
}



void FUN_008c98c0(byte param_1)

{
  FUN_008c9310();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008c98e0(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar2 = thunk_FUN_00401aa0(0x60,1);
    bVar4 = 0x10 - ((byte)iVar2 & 0xf);
    puVar3 = (undefined4 *)(iVar2 + (uint)bVar4);
    *(byte *)((int)puVar3 + -1) = bVar4;
    *puVar3 = 0;
    uVar1 = _DAT_00b2efc4;
    puVar3[2] = 0;
    puVar3[1] = uVar1;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[4] = 0x3f800000;
    puVar3[9] = 0x3f800000;
    puVar3[0xe] = 0x3f800000;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    *(undefined4 **)(in_ECX + 0xc) = puVar3;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008c9380(puVar3);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008c9980(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint *unaff_FS_OFFSET;
  int aiStack_b4 [2];
  int local_ac [2];
  undefined1 local_a4 [28];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_24;
  uint local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d7a3e;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)aiStack_b4;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff40;
  *unaff_FS_OFFSET = (uint)&local_1c;
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    puVar2 = &DAT_00b2f090;
  }
  else {
    puVar2 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x20);
  }
  local_70 = *puVar2;
  uStack_6c = puVar2[1];
  uStack_68 = puVar2[2];
  uStack_64 = puVar2[3];
  local_60 = puVar2[4];
  uStack_5c = puVar2[5];
  uStack_58 = puVar2[6];
  uStack_54 = puVar2[7];
  local_50 = puVar2[8];
  uStack_4c = puVar2[9];
  uStack_48 = puVar2[10];
  uStack_44 = puVar2[0xb];
  local_40 = puVar2[0xc];
  uStack_3c = puVar2[0xd];
  uStack_38 = puVar2[0xe];
  uStack_34 = puVar2[0xf];
  FUN_00607740(local_a4,&local_70,uVar1);
  FUN_0043f3e0(local_80,&local_40);
  local_ac[1] = FUN_00401f00(0xdc);
  local_14 = 0;
  if (local_ac[1] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0070b780(0);
  }
  local_14 = 0xffffffff;
  FUN_006ff420("bhkConvexTransformShape");
  (**(code **)(*param_1 + 0x84))(iVar3,0);
  *(undefined4 *)(iVar3 + 0x54) = uStack_88;
  *(undefined4 *)(iVar3 + 0x58) = uStack_84;
  *(undefined4 *)(iVar3 + 0x5c) = local_80[0];
  piVar5 = local_ac;
  piVar6 = (int *)(iVar3 + 0x30);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  if (((aiStack_b4[0] == 0) || (*(int *)(aiStack_b4[0] + 8) == 0)) ||
     (iVar4 = *(int *)(*(int *)(aiStack_b4[0] + 8) + 0x10), iVar4 == 0)) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(iVar4 + 8);
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x90))(iVar3);
  }
  *unaff_FS_OFFSET = local_24;
  return;
}



/* Library Function - Multiple Matches With Different Base Names
    public: virtual __thiscall CButton::~CButton(void)
    public: virtual __thiscall CComboBox::~CComboBox(void)
    public: virtual __thiscall CDateTimeCtrl::~CDateTimeCtrl(void)
    public: virtual __thiscall CDialogBar::~CDialogBar(void)
     19 names - too many to list
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void FID_conflict__CProgressCtrl(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d6e18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FID_conflict__scalar_deleting_destructor__00a9983c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  local_4 = 0xffffffff;
  FUN_008ae9f0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008c9c80(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a5591c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    DAT_00ba7d70 = DAT_00ba7d70 + 1;
    *puVar2 = &PTR_FUN_00a55a5c;
    _DAT_00ba7f44 = _DAT_00ba7f44 + 1;
    *puVar2 = &PTR_FUN_00a55afc;
    _DAT_00ba7f50 = _DAT_00ba7f50 + 1;
    *puVar2 = &PTR_FID_conflict__scalar_deleting_destructor__00a9983c;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008c9d30(undefined1 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    *param_1 = 0;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  puVar1 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = _DAT_00b2efc4;
    puVar1[2] = 0;
    puVar1[3] = 0x41a00000;
    puVar1[4] = 0x40a00000;
    *(undefined4 **)(in_ECX + 0xc) = puVar1;
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *param_1 = 1;
  return *(undefined4 *)(in_ECX + 0xc);
}



/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall CButton::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall CComboBox::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall CDateTimeCtrl::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall CDialogBar::`scalar deleting destructor'(unsigned int)
     19 names - too many to list
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void FID_conflict__scalar_deleting_destructor_(byte param_1)

{
  FID_conflict__CProgressCtrl();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008c9e20(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 local_204 [512];
  undefined4 local_4;
  
  local_4 = DAT_00b30aac;
  if (*(int *)(in_ECX + 8) == 0) {
    piVar1 = (int *)(*(code *)PTR_FUN_00b3004c)();
    *(int **)(in_ECX + 8) = piVar1;
    if (piVar1 == (int *)0x0) {
      FUN_008bbfb0(local_204,0x200,1);
      FUN_008bbdb0(
                  "Server could not be created, please check that you platform supports sockets with the hkBase library"
                  );
      uVar3 = 0x6e;
    }
    else {
      (**(code **)(*piVar1 + 0x1c))(param_1);
      FUN_008bbfb0(local_204,0x200,1);
      pcVar2 = " every frame";
      FUN_008bbdb0("Server created and will poll for new client(s) on port ");
      FUN_008bbe00(param_1);
      FUN_008bbdb0(pcVar2);
      uVar3 = 0x6a;
    }
  }
  else {
    FUN_008bbfb0(local_204,0x200,1);
    FUN_008bbdb0(
                "Server has already been created, only one server allowed per visual debugger instance"
                );
    uVar3 = 0x73;
  }
  (**(code **)(*DAT_00ba7fb0 + 8))(0,0xffffffff,local_204,".\\hkVisualDebugger.cpp",uVar3);
  FUN_008bc000();
  return;
}



void FUN_008c9f30(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xc);
  param_1 = param_1 * 8;
  puVar2 = *(undefined4 **)(iVar1 + 4 + param_1);
  if (((puVar2 != (undefined4 *)0x0) && (*(short *)(puVar2 + 1) != 0)) &&
     (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
     *(short *)((int)puVar2 + 6) == 0)) {
    (**(code **)*puVar2)(1);
  }
  puVar2 = *(undefined4 **)(iVar1 + param_1);
  if (((puVar2 != (undefined4 *)0x0) && (*(short *)(puVar2 + 1) != 0)) &&
     (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
     *(short *)((int)puVar2 + 6) == 0)) {
    (**(code **)*puVar2)(1);
  }
  iVar3 = *(int *)(in_ECX + 0x10) + -1;
  *(int *)(in_ECX + 0x10) = iVar3;
  iVar1 = *(int *)(in_ECX + 0xc);
  *(undefined4 *)(iVar1 + param_1) = *(undefined4 *)(iVar1 + iVar3 * 8);
  *(undefined4 *)(iVar1 + 4 + param_1) = *(undefined4 *)(iVar1 + 4 + iVar3 * 8);
  return;
}



void FUN_008ca1d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x28)) {
    piVar2 = *(int **)(in_ECX + 0x24);
    while (*piVar2 != param_1) {
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
      if (*(int *)(in_ECX + 0x28) <= iVar3) {
        return;
      }
    }
    iVar1 = *(int *)(in_ECX + 0x24);
    iVar4 = *(int *)(in_ECX + 0x28) + -1;
    *(int *)(in_ECX + 0x28) = iVar4;
    *(undefined4 *)(iVar1 + iVar3 * 8) = *(undefined4 *)(iVar1 + iVar4 * 8);
    *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = *(undefined4 *)(iVar1 + 4 + iVar4 * 8);
    iVar3 = 0;
    if (0 < *(int *)(in_ECX + 0x34)) {
      do {
        (**(code **)(*(int *)(in_ECX + 0x30) + iVar3 * 4))
                  (param_1,0,iVar3 * 4 & 0xffffff00,
                   *(undefined4 *)(*(int *)(in_ECX + 0x3c) + iVar3 * 4));
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(in_ECX + 0x34));
    }
  }
  return;
}



void FUN_008ca250(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x34)) {
    piVar2 = *(int **)(in_ECX + 0x30);
    while (*piVar2 != param_1) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      if (*(int *)(in_ECX + 0x34) <= iVar1) {
        return;
      }
    }
    if (-1 < iVar1) {
      iVar3 = *(int *)(in_ECX + 0x34) + -1;
      *(int *)(in_ECX + 0x34) = iVar3;
      *(undefined4 *)(*(int *)(in_ECX + 0x30) + iVar1 * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0x30) + iVar3 * 4);
      iVar3 = *(int *)(in_ECX + 0x40) + -1;
      *(int *)(in_ECX + 0x40) = iVar3;
      *(undefined4 *)(*(int *)(in_ECX + 0x3c) + iVar1 * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0x3c) + iVar3 * 4);
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008ca2a0(void)

{
  int iVar1;
  int in_ECX;
  undefined1 auStack_210 [524];
  undefined4 local_4;
  
  local_4 = DAT_00b30aac;
  (**(code **)(*DAT_00ba7fb0 + 0x18))(0x1293adef,"Shuting down Visual Debugger..");
  iVar1 = *(int *)(in_ECX + 0x10);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xc) + iVar1 * 8 + 4) + 0xc) + 0x14))
              (0x3c87fcb9);
    FUN_008c9f30(iVar1);
    FUN_008bbfb0(auStack_210,0x200,1);
    FUN_008bbdb0("Client deleted.");
    (**(code **)(*DAT_00ba7fb0 + 8))(0,0xffffffff,auStack_210,".\\hkVisualDebugger.cpp",0x56);
    FUN_008bc000();
  }
  if (*(undefined4 **)(in_ECX + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 8))(1);
    *(undefined4 *)(in_ECX + 8) = 0;
    FUN_008bbfb0(auStack_210,0x200,1);
    FUN_008bbdb0("Server deleted.");
    (**(code **)(*DAT_00ba7fb0 + 8))(0,0xffffffff,auStack_210,".\\hkVisualDebugger.cpp",0x5d);
    FUN_008bc000();
  }
  (**(code **)(*DAT_00ba7fb0 + 0x1c))();
  return;
}



void FUN_008ca3c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int unaff_EBP;
  
  piVar1 = (int *)(**(code **)(*DAT_00ba7d98 + 0x10))(4,0x13);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else if (unaff_EBP == 0) {
    DAT_00ba7fc0 = DAT_00ba7fc0 + 1;
    *piVar1 = (int)&DAT_00ba7fc4;
  }
  else {
    iVar2 = FUN_008b1860(unaff_EBP);
    iVar3 = FUN_008b1950(iVar2);
    *piVar1 = iVar3 + 0xc;
    FUN_008b1890(iVar3 + 0xc,unaff_EBP,iVar2 + 1);
  }
  if (*(uint *)(in_ECX + 0x50) == (*(uint *)(in_ECX + 0x54) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x4c),4);
  }
  *(int **)(*(int *)(in_ECX + 0x4c) + *(int *)(in_ECX + 0x50) * 4) = piVar1;
  *(int *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + 1;
  return;
}



void FUN_008ca450(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  
  if (*(uint *)(in_ECX + 0x28) == (*(uint *)(in_ECX + 0x2c) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x24),8);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x24) + *(int *)(in_ECX + 0x28) * 8);
  *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + 1;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x34)) {
    do {
      (**(code **)(*(int *)(in_ECX + 0x30) + iVar2 * 4))
                (param_1,param_2,CONCAT31((int3)((uint)(iVar2 * 4) >> 8),1),
                 *(undefined4 *)(*(int *)(in_ECX + 0x3c) + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x34));
  }
  return;
}



void FUN_008ca4d0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0x34) == (*(uint *)(in_ECX + 0x38) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x30),4);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x30) + *(int *)(in_ECX + 0x34) * 4) = param_1;
  *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
  if (*(uint *)(in_ECX + 0x40) == (*(uint *)(in_ECX + 0x44) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x3c),4);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x3c) + *(int *)(in_ECX + 0x40) * 4) = param_2;
  *(int *)(in_ECX + 0x40) = *(int *)(in_ECX + 0x40) + 1;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008ca540(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_20c [520];
  undefined4 local_4;
  
  local_4 = DAT_00b30aac;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a99ae8;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0x80000000;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0x80000000;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0x80000000;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0x80000000;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0x80000000;
  in_ECX[0x12] = param_2;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0x80000000;
  *(undefined1 *)(in_ECX + 0x16) = 0;
  in_ECX[0x22] = "Frame Timer";
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  *(undefined1 *)(in_ECX + 0x20) = 0;
  in_ECX[0x21] = 0;
  uVar4 = in_ECX[8] & 0x3fffffff;
  if ((int)uVar4 < param_1[1]) {
    if ((in_ECX[8] & 0x80000000) == 0) {
      FUN_008a75d0(in_ECX[6],uVar4 << 2,0x14);
    }
    uVar1 = FUN_008a7560(param_1[1] << 2,0x14);
    in_ECX[6] = uVar1;
    in_ECX[8] = in_ECX[8] & 0x40000000 | param_1[1];
  }
  iVar3 = param_1[1];
  puVar2 = (undefined4 *)in_ECX[6];
  in_ECX[7] = iVar3;
  if (0 < iVar3) {
    iVar5 = *param_1 - (int)puVar2;
    do {
      *puVar2 = *(undefined4 *)(iVar5 + (int)puVar2);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  if (0 < (int)in_ECX[7]) {
    do {
      (**(code **)(**(int **)(in_ECX[6] + iVar3 * 4) + 8))();
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)in_ECX[7]);
  }
  (**(code **)(*DAT_00ba7fb0 + 0x18))(0x1293adef,"Visual Debugger");
  FUN_008bbfb0(auStack_20c,0x200,1);
  FUN_008bbdb0("VDB Server instance has been created");
  (**(code **)(*DAT_00ba7fb0 + 8))(0,0xffffffff,auStack_20c,".\\hkVisualDebugger.cpp",0x26);
  FUN_008bc000();
  FUN_009184f0();
  FUN_008ca3c0("DebugDisplay");
  FUN_008ca3c0("Shapes");
  FUN_008ca3c0("MousePicking");
  iVar3 = in_ECX[0x12];
  if ((iVar3 != 0) && (*(short *)(iVar3 + 4) != 0)) {
    *(short *)(iVar3 + 6) = *(short *)(iVar3 + 6) + 1;
  }
  (**(code **)(*DAT_00ba7fb0 + 0x1c))();
  return;
}



void FUN_008ca770(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  *in_ECX = &PTR_FUN_00a99ae8;
  FUN_008ca2a0();
  iVar4 = 0;
  if (0 < (int)in_ECX[7]) {
    do {
      (**(code **)(**(int **)(in_ECX[6] + iVar4 * 4) + 8))(0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)in_ECX[7]);
  }
  iVar4 = 0;
  if (0 < (int)in_ECX[0x14]) {
    do {
      piVar1 = *(int **)(in_ECX[0x13] + iVar4 * 4);
      if (piVar1 != (int *)0x0) {
        iVar3 = *(int *)(*piVar1 + -4) + -1;
        *(int *)(*piVar1 + -4) = iVar3;
        if (iVar3 < 0) {
          FUN_008b1930();
        }
        (**(code **)(*DAT_00ba7d98 + 0x14))(piVar1,4,0x13);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)in_ECX[0x14]);
  }
  puVar2 = (undefined4 *)in_ECX[0x12];
  in_ECX[0x14] = 0;
  if (((puVar2 != (undefined4 *)0x0) && (*(short *)(puVar2 + 1) != 0)) &&
     (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
     *(short *)((int)puVar2 + 6) == 0)) {
    (**(code **)*puVar2)(1);
  }
  if (-1 < (int)in_ECX[0x15]) {
    FUN_008a75d0(in_ECX[0x13],in_ECX[0x15] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x11]) {
    FUN_008a75d0(in_ECX[0xf],in_ECX[0x11] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0xe]) {
    FUN_008a75d0(in_ECX[0xc],in_ECX[0xe] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0xb]) {
    FUN_008a75d0(in_ECX[9],in_ECX[0xb] << 3,0x14);
  }
  if (-1 < (int)in_ECX[8]) {
    FUN_008a75d0(in_ECX[6],in_ECX[8] << 2,0x14);
  }
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],in_ECX[5] << 3,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008ca940(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int in_ECX;
  undefined4 unaff_retaddr;
  
  if (param_3 != 0) {
    FUN_00918bc0(param_3);
  }
  iVar6 = *(int *)(in_ECX + 0x10);
  piVar8 = (int *)(in_ECX + 0xc);
  iVar4 = iVar6 + 1;
  uVar2 = *(uint *)(in_ECX + 0x14) & 0x3fffffff;
  if ((int)uVar2 < iVar4) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    FUN_008a6e40(piVar8,iVar3,8);
  }
  *(int *)(in_ECX + 0x10) = iVar4;
  puVar1 = (undefined4 *)(*piVar8 + iVar6 * 8);
  *puVar1 = param_1;
  iVar4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x50,0x32);
  *(undefined2 *)(iVar4 + 4) = 0x50;
  uVar5 = FUN_009187a0(in_ECX + 0x18,unaff_retaddr,param_1);
  puVar1[1] = uVar5;
  FUN_00918b40();
  iVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x50)) {
    do {
      iVar6 = (**(code **)(*(int *)(puVar1[1] + 8) + 8))
                        (**(undefined4 **)(*(int *)(in_ECX + 0x4c) + iVar4 * 4));
      if (-1 < iVar6) {
        (**(code **)(*(int *)(puVar1[1] + 8) + 0x10))(iVar6);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x50));
  }
  piVar8 = *(int **)(*piVar8 + -8 + *(int *)(in_ECX + 0x10) * 8);
  if ((piVar8 != (int *)0x0) &&
     (pcVar7 = (char *)(**(code **)(*piVar8 + 8))(&param_1), *pcVar7 != '\0')) {
    FUN_00918440(5);
    FUN_009181b0(0);
    FUN_00918440(0);
    piVar8 = (int *)FUN_00953130();
    (**(code **)(*piVar8 + 0x10))();
  }
  return;
}



void FUN_008cab80(byte param_1)

{
  FUN_008ca770();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008cabf0(void)

{
  FUN_0091e980();
  FUN_0091e760();
  FUN_0091e090();
  FUN_0091db30();
  FUN_0091d250();
  FUN_0091cbe0();
  FUN_0091bf90();
  FUN_0091b680();
  FUN_0091ac40();
  FUN_00919fb0();
  FUN_00919440();
  FUN_00919030();
  FUN_00918df0();
  return;
}



void FUN_008cad40(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    FUN_00899ca0((int *)(in_ECX + 0x4c));
    FUN_00899ce0((int *)(in_ECX + 0x50));
    FUN_00899c20((int *)(in_ECX + 0x58));
    FUN_00899c60((int *)(in_ECX + 0x54));
    puVar1 = (undefined4 *)FUN_008991c0();
    iVar2 = 0;
    if (0 < (int)puVar1[3]) {
      do {
        (**(code **)(*(int *)(in_ECX + 0x4c) + 4))(*(undefined4 *)(puVar1[2] + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)puVar1[3]);
    }
    iVar2 = 0;
    if (0 < (int)puVar1[0xc]) {
      do {
        (**(code **)(*(int *)(in_ECX + 0x50) + 4))(*(undefined4 *)(puVar1[0xb] + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)puVar1[0xc]);
    }
    iVar2 = 0;
    if (0 < (int)puVar1[9]) {
      do {
        (**(code **)(*(int *)(in_ECX + 0x58) + 4))(*(undefined4 *)(puVar1[8] + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)puVar1[9]);
    }
    iVar2 = 0;
    if (0 < (int)puVar1[6]) {
      do {
        (**(code **)(*(int *)(in_ECX + 0x54) + 4))(*(undefined4 *)(puVar1[5] + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)puVar1[6]);
    }
    if ((*(short *)(puVar1 + 1) != 0) &&
       (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
       *(short *)((int)puVar1 + 6) == 0)) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void FUN_008cae40(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    FUN_008989e0((int *)(in_ECX + 0x4c));
    FUN_00898a30((int *)(in_ECX + 0x50));
    FUN_00898940((int *)(in_ECX + 0x58));
    FUN_00898990((int *)(in_ECX + 0x54));
    puVar1 = (undefined4 *)FUN_008991c0();
    iVar2 = 0;
    if (0 < (int)puVar1[3]) {
      do {
        (**(code **)(*(int *)(in_ECX + 0x4c) + 8))(*(undefined4 *)(puVar1[2] + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)puVar1[3]);
    }
    iVar2 = 0;
    if (0 < (int)puVar1[0xc]) {
      do {
        (**(code **)(*(int *)(in_ECX + 0x50) + 8))(*(undefined4 *)(puVar1[0xb] + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)puVar1[0xc]);
    }
    iVar2 = 0;
    if (0 < (int)puVar1[9]) {
      do {
        (**(code **)(*(int *)(in_ECX + 0x58) + 8))(*(undefined4 *)(puVar1[8] + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)puVar1[9]);
    }
    iVar2 = 0;
    if (0 < (int)puVar1[6]) {
      do {
        (**(code **)(*(int *)(in_ECX + 0x54) + 8))(*(undefined4 *)(puVar1[5] + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)puVar1[6]);
    }
    if ((*(short *)(puVar1 + 1) != 0) &&
       (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
       *(short *)((int)puVar1 + 6) == 0)) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void FUN_008caf40(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x6c)) {
    piVar2 = *(int **)(in_ECX + 0x68);
    while (*piVar2 != param_1) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      if (*(int *)(in_ECX + 0x6c) <= iVar1) {
        return;
      }
    }
    if (-1 < iVar1) {
      iVar3 = *(int *)(in_ECX + 0x6c) + -1;
      *(int *)(in_ECX + 0x6c) = iVar3;
      *(undefined4 *)(*(int *)(in_ECX + 0x68) + iVar1 * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0x68) + iVar3 * 4);
    }
  }
  return;
}



void FUN_008caf80(int param_1)

{
  int in_ECX;
  int iVar1;
  
  if ((*(int *)(in_ECX + 4) != 0) && (iVar1 = 0, 0 < *(int *)(in_ECX + 0x58))) {
    do {
      FUN_008cae40(*(undefined4 *)(*(int *)(in_ECX + 0x54) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x58));
  }
  *(int *)(in_ECX + 4) = param_1;
  if ((param_1 != 0) && (iVar1 = 0, 0 < *(int *)(in_ECX + 0x58))) {
    do {
      FUN_008cad40(*(undefined4 *)(*(int *)(in_ECX + 0x54) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x58));
  }
  return;
}



void FUN_008caff0(int param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x60)) {
    piVar1 = *(int **)(in_ECX + 0x5c);
    while (*piVar1 != param_1) {
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
      if (*(int *)(in_ECX + 0x60) <= iVar2) {
        return;
      }
    }
    if (-1 < iVar2) {
      if (in_ECX == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = in_ECX + 0x48;
      }
      FUN_00898b20(iVar3);
      iVar3 = 0;
      if (0 < *(int *)(in_ECX + 0x6c)) {
        do {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x68) + iVar3 * 4) + 4))(param_1);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(in_ECX + 0x6c));
      }
      iVar3 = *(int *)(in_ECX + 0x60) + -1;
      *(int *)(in_ECX + 0x60) = iVar3;
      *(undefined4 *)(*(int *)(in_ECX + 0x5c) + iVar2 * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0x5c) + iVar3 * 4);
      FUN_008cae40(param_1);
    }
  }
  return;
}



void FUN_008cb070(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  piVar1 = (int *)(in_ECX + 0x5c);
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x60)) {
    piVar3 = (int *)*piVar1;
    do {
      if (*piVar3 == param_1) {
        if (-1 < iVar2) {
          return;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x60));
  }
  if (in_ECX == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = in_ECX + 0x48;
  }
  FUN_00899da0(iVar2);
  if (*(uint *)(in_ECX + 0x60) == (*(uint *)(in_ECX + 100) & 0x3fffffff)) {
    FUN_008a6ee0(piVar1,4);
  }
  *(int *)(*piVar1 + *(int *)(in_ECX + 0x60) * 4) = param_1;
  *(int *)(in_ECX + 0x60) = *(int *)(in_ECX + 0x60) + 1;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x6c)) {
    do {
      (**(code **)**(undefined4 **)(*(int *)(in_ECX + 0x68) + iVar2 * 4))(param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x6c));
  }
  FUN_008cad40(param_1);
  return;
}



void FUN_008cb120(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  piVar1 = (int *)(in_ECX + 0x68);
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x6c)) {
    piVar3 = (int *)*piVar1;
    do {
      if (*piVar3 == param_1) {
        if (-1 < iVar2) {
          return;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x6c));
  }
  if (*(uint *)(in_ECX + 0x6c) == (*(uint *)(in_ECX + 0x70) & 0x3fffffff)) {
    FUN_008a6ee0(piVar1,4);
  }
  *(int *)(*piVar1 + *(int *)(in_ECX + 0x6c) * 4) = param_1;
  *(int *)(in_ECX + 0x6c) = *(int *)(in_ECX + 0x6c) + 1;
  return;
}



void FUN_008cb180(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a99b70;
  if (-1 < (int)in_ECX[0xb]) {
    FUN_008a75d0(in_ECX[9],in_ECX[0xb] << 2,0x14);
  }
  if (-1 < (int)in_ECX[4]) {
    FUN_008a75d0(in_ECX[2],in_ECX[4] << 2,0x14);
  }
  return;
}



void FUN_008cb200(byte param_1)

{
  FUN_008cb180();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008cb220(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = &PTR_FUN_00a99b70;
  in_ECX[3] = 0;
  in_ECX[5] = 0;
  in_ECX[4] = in_ECX + 7;
  in_ECX[6] = 0x80000004;
  in_ECX[0xd] = 0x80000004;
  in_ECX[0xc] = 0;
  in_ECX[0xb] = in_ECX + 0xe;
  in_ECX[0x12] = &PTR_LAB_00a99b50;
  in_ECX[0x13] = &PTR_LAB_00a46684;
  in_ECX[0x14] = &PTR_LAB_00a56320;
  in_ECX[0x15] = &PTR_LAB_00a99b58;
  in_ECX[0x16] = &PTR_LAB_00a99b58;
  *in_ECX = &PTR_FUN_00a99bd0;
  in_ECX[2] = &PTR_LAB_00a99bc4;
  in_ECX[0x12] = &PTR_LAB_00a99bbc;
  in_ECX[0x13] = &PTR_LAB_00a99ba8;
  in_ECX[0x14] = &PTR_LAB_00a99b94;
  in_ECX[0x15] = &PTR_LAB_00a99b88;
  in_ECX[0x16] = &PTR_LAB_00a99b7c;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0x80000000;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0x80000000;
  return;
}



void FUN_008cb330(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[0x18];
  *in_ECX = &PTR_FUN_00a99bd0;
  in_ECX[2] = &PTR_LAB_00a99bc4;
  in_ECX[0x12] = &PTR_LAB_00a99bbc;
  in_ECX[0x13] = &PTR_LAB_00a99ba8;
  in_ECX[0x14] = &PTR_LAB_00a99b94;
  in_ECX[0x15] = &PTR_LAB_00a99b88;
  in_ECX[0x16] = &PTR_LAB_00a99b7c;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_008caff0(*(undefined4 *)(in_ECX[0x17] + iVar1 * 4));
  }
  if (-1 < (int)in_ECX[0x1c]) {
    FUN_008a75d0(in_ECX[0x1a],in_ECX[0x1c] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x19]) {
    FUN_008a75d0(in_ECX[0x17],in_ECX[0x19] << 2,0x14);
  }
  in_ECX[0x16] = &PTR_LAB_00a99b58;
  in_ECX[0x15] = &PTR_LAB_00a99b58;
  in_ECX[0x14] = &PTR_LAB_00a56320;
  in_ECX[0x13] = &PTR_LAB_00a46684;
  in_ECX[0x12] = &PTR_LAB_00a99b50;
  FUN_008cb180();
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008cb420(byte param_1)

{
  FUN_008cb330();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



undefined4 FUN_008cb450(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  FUN_008d9a50();
  if (*(int *)(param_1 + 0x88) == 0) {
    *(undefined4 *)(param_1 + 0x88) = 1;
    FUN_0091ef50(param_1,param_2);
    if (param_3 != 0) {
      FUN_008dc6e0(param_1,param_2);
    }
    piVar1 = (int *)(param_1 + 0x88);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (*(int *)(param_1 + 0x84) != 0)) && (*(char *)(param_1 + 0x90) == '\0'))
    {
      FUN_00899210();
    }
  }
  else {
    FUN_0091ef50(param_1,param_2);
    if (param_3 != 0) {
      FUN_008dc6e0(param_1,param_2);
      return param_2;
    }
  }
  return param_2;
}



void FUN_008cb4e0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    *(undefined4 *)(param_1 + 0x88) = 1;
    if ((param_3 != 0) && (*(int *)(param_1 + 0xec) != 0)) {
      FUN_008dc770(param_1,param_2);
    }
    FUN_0091ed30(param_2);
    iVar1 = *(int *)(param_1 + 0x88) + -1;
    *(int *)(param_1 + 0x88) = iVar1;
    if (((iVar1 == 0) && (*(int *)(param_1 + 0x84) != 0)) && (*(char *)(param_1 + 0x90) == '\0')) {
      FUN_00899210();
      return;
    }
  }
  else {
    if ((param_3 != 0) && (*(int *)(param_1 + 0xec) != 0)) {
      FUN_008dc770(param_1,param_2);
    }
    FUN_0091ed30(param_2);
  }
  return;
}



void FUN_008cb580(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 0x3c)) {
    do {
      puVar1 = (undefined4 *)(*(int *)(param_2 + 0x38) + iVar3 * 8);
      iVar4 = *(int *)(puVar1[1] + 0x10) + puVar1[1];
      if (*(char *)(iVar4 + 0x91) == '\0') {
        if ((param_4 == 7) &&
           (iVar2 = FUN_008e7740(*puVar1,*(undefined4 *)(param_2 + 0x54),
                                 *(undefined4 *)(iVar4 + 0x54)), iVar2 == *(int *)(param_2 + 0x54)))
        {
          uVar5 = *puVar1;
          FUN_008e68a0(*(int *)(iVar4 + 0x54) + 0x44,uVar5);
          goto LAB_008cb5f4;
        }
      }
      else {
        uVar5 = *puVar1;
        FUN_008e68a0(param_3,uVar5);
LAB_008cb5f4:
        FUN_008e67f0(param_1,uVar5);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_2 + 0x3c));
  }
  return;
}



void FUN_008cb610(int param_1,int param_2)

{
  if (*(ushort *)(param_2 + 0x22) != 0xffff) {
    *(undefined4 *)(*(int *)(param_1 + 0x50) + (uint)*(ushort *)(param_2 + 0x22) * 4) = 0;
    *(undefined2 *)(param_2 + 0x22) = 0xffff;
  }
  return;
}



void FUN_008cb640(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  *(int *)(param_2 + 8) = param_1;
  if (*(char *)(param_2 + 0x91) != '\0') {
    FUN_008dde30(param_2);
    return;
  }
  if (*(char *)(param_1 + 0xa4) != '\0') {
    iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x6c,0x2f);
    *(undefined2 *)(iVar1 + 4) = 0x6c;
    iVar1 = FUN_008de400(param_1);
    if (param_1 == 1) {
      *(undefined1 *)(iVar1 + 0x28) = 1;
      *(undefined1 *)(iVar1 + 0x29) = 1;
      piVar2 = (int *)0x39;
      *(undefined2 *)(iVar1 + 0x20) = (undefined2)uRam0000003d;
      if (uRam0000003d == (uRam00000041 & 0x3fffffff)) {
        FUN_008a6ee0(0x39,4);
      }
      *(int *)(iRam00000039 + uRam0000003d * 4) = iVar1;
    }
    else {
      *(undefined1 *)(iVar1 + 0x28) = 0;
      *(undefined1 *)(iVar1 + 0x29) = 0;
      piVar2 = (int *)(param_1 + 0x44);
      *(undefined2 *)(iVar1 + 0x20) = *(undefined2 *)(param_1 + 0x48);
      if (*(uint *)(param_1 + 0x48) == (*(uint *)(param_1 + 0x4c) & 0x3fffffff)) {
        FUN_008a6ee0(piVar2,4);
      }
      *(int *)(*piVar2 + *(int *)(param_1 + 0x48) * 4) = iVar1;
    }
    piVar2[1] = piVar2[1] + 1;
    FUN_008dde30(param_2);
    return;
  }
  if (param_3 == 1) {
    FUN_008dde30(param_2);
  }
  return;
}



void FUN_008cb740(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  if (0 < *(int *)(param_2 + 0xbc)) {
    do {
      iVar1 = *(int *)(*(int *)(param_2 + 0xb8) + local_4 * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) == *(int *)(param_1 + 0x30))) {
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_3,4);
        }
        *(int *)(*param_3 + param_3[1] * 4) = iVar1;
        param_3[1] = param_3[1] + 1;
        if (*(short *)(iVar1 + 4) != 0) {
          *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
        }
        FUN_008ddc90(iVar1);
        *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x27) = 1;
        iVar1 = *(int *)(param_1 + 0x30);
        if (*(short *)(iVar1 + 0x22) == -1) {
          *(undefined2 *)(iVar1 + 0x22) = *(undefined2 *)(param_1 + 0x54);
          if (*(uint *)(param_1 + 0x54) == (*(uint *)(param_1 + 0x58) & 0x3fffffff)) {
            FUN_008a6ee0((int *)(param_1 + 0x50),4);
          }
          *(int *)(*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x54) * 4) = iVar1;
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_2 + 0xbc));
  }
  return;
}



void FUN_008cb820(int param_1,int param_2)

{
  if (*(char *)(param_2 + 0x29) == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0x44) + (uint)*(ushort *)(param_2 + 0x20) * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0x44) + -4 + *(int *)(param_1 + 0x48) * 4);
    *(ushort *)(*(int *)(*(int *)(param_1 + 0x44) + (uint)*(ushort *)(param_2 + 0x20) * 4) + 0x20) =
         *(ushort *)(param_2 + 0x20);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x38) + (uint)*(ushort *)(param_2 + 0x20) * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0x38) + -4 + *(int *)(param_1 + 0x3c) * 4);
    *(ushort *)(*(int *)(*(int *)(param_1 + 0x38) + (uint)*(ushort *)(param_2 + 0x20) * 4) + 0x20) =
         *(ushort *)(param_2 + 0x20);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  }
  if (*(ushort *)(param_2 + 0x22) != 0xffff) {
    *(undefined4 *)(*(int *)(param_1 + 0x50) + (uint)*(ushort *)(param_2 + 0x22) * 4) = 0;
    *(undefined2 *)(param_2 + 0x22) = 0xffff;
  }
  return;
}



void FUN_008cb8a0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  local_4 = *(int *)(param_1 + 0x6c);
  iVar1 = *(int *)(param_1 + 8);
  if (-1 < local_4 + -1) {
    iVar4 = (local_4 + -1) * 0x1c;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x68) + iVar4);
      if (*(short *)(iVar2 + 4) != 0) {
        *(short *)(iVar2 + 6) = *(short *)(iVar2 + 6) + 1;
      }
      if (*(int *)(iVar1 + 0x88) == 0) {
        *(undefined4 *)(iVar1 + 0x88) = 1;
        FUN_0091ed30(iVar2);
        iVar3 = *(int *)(iVar1 + 0x88) + -1;
        *(int *)(iVar1 + 0x88) = iVar3;
        if (((iVar3 == 0) && (*(int *)(iVar1 + 0x84) != 0)) && (*(char *)(iVar1 + 0x90) == '\0')) {
          FUN_00899210();
        }
      }
      else {
        FUN_0091ed30(iVar2);
      }
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
        FUN_008a6ee0(param_2,4);
      }
      *(int *)(*param_2 + param_2[1] * 4) = iVar2;
      iVar4 = iVar4 + -0x1c;
      local_4 = local_4 + -1;
      param_2[1] = param_2[1] + 1;
    } while (local_4 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x78);
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x74) + iVar4 * 4);
    if (*(short *)(iVar2 + 4) != 0) {
      *(short *)(iVar2 + 6) = *(short *)(iVar2 + 6) + 1;
    }
    if (*(int *)(iVar1 + 0x88) == 0) {
      *(undefined4 *)(iVar1 + 0x88) = 1;
      FUN_0091ed30(iVar2);
      iVar3 = *(int *)(iVar1 + 0x88) + -1;
      *(int *)(iVar1 + 0x88) = iVar3;
      if (((iVar3 == 0) && (*(int *)(iVar1 + 0x84) != 0)) && (*(char *)(iVar1 + 0x90) == '\0')) {
        FUN_00899210();
      }
    }
    else {
      FUN_0091ed30(iVar2);
    }
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_2,4);
    }
    *(int *)(*param_2 + param_2[1] * 4) = iVar2;
    param_2[1] = param_2[1] + 1;
  }
  return;
}



void FUN_008cba20(int param_1,int param_2)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x3c) == (*(uint *)(param_1 + 0x40) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(param_1 + 0x38),4);
  }
  *(int *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c) * 4) = param_2;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x44) + (uint)*(ushort *)(param_2 + 0x20) * 4) =
       *(undefined4 *)(*(int *)(param_1 + 0x44) + -4 + *(int *)(param_1 + 0x48) * 4);
  *(ushort *)(*(int *)(*(int *)(param_1 + 0x44) + (uint)*(ushort *)(param_2 + 0x20) * 4) + 0x20) =
       *(ushort *)(param_2 + 0x20);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  *(short *)(param_2 + 0x20) = *(short *)(param_1 + 0x3c) + -1;
  *(undefined1 *)(param_2 + 0x29) = 1;
  iVar1 = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  if (0 < *(int *)(param_2 + 0x38)) {
    do {
      FUN_008dd0c0(0,0,*(int *)(*(int *)(*(int *)(param_2 + 0x34) + iVar1 * 4) + 0x50) + 0x10);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_2 + 0x38));
  }
  FUN_008e77f0(param_2,*(undefined4 *)(param_2 + 0x68),*(undefined4 *)(param_1 + 0x160),
               *(undefined4 *)(param_1 + 0x74));
  FUN_008dcac0(param_1,param_2);
  return;
}



void FUN_008cbaf0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 0x48) == (*(uint *)(param_1 + 0x4c) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(param_1 + 0x44),4);
  }
  *(int *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48) * 4) = param_2;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x38) + (uint)*(ushort *)(param_2 + 0x20) * 4) =
       *(undefined4 *)(*(int *)(param_1 + 0x38) + -4 + *(int *)(param_1 + 0x3c) * 4);
  *(ushort *)(*(int *)(*(int *)(param_1 + 0x38) + (uint)*(ushort *)(param_2 + 0x20) * 4) + 0x20) =
       *(ushort *)(param_2 + 0x20);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  *(short *)(param_2 + 0x20) = *(short *)(param_1 + 0x48) + -1;
  iVar2 = 0;
  *(undefined1 *)(param_2 + 0x29) = 0;
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x160);
  if (0 < *(int *)(param_2 + 0x38)) {
    do {
      iVar1 = *(int *)(*(int *)(param_2 + 0x34) + iVar2 * 4);
      FUN_008dd750(*(undefined4 *)(param_2 + 0x68),*(int *)(iVar1 + 0x50) + 0x10);
      (**(code **)(**(int **)(iVar1 + 0x50) + 0x54))(&DAT_00ba7a40);
      (**(code **)(**(int **)(iVar1 + 0x50) + 0x58))(&DAT_00ba7a40);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_2 + 0x38));
  }
  FUN_008dcc10(param_1,param_2);
  return;
}



void FUN_008cbbb0(int param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x28) = 0;
  if (*(short *)(param_2 + 0x22) == -1) {
    *(undefined2 *)(param_2 + 0x22) = *(undefined2 *)(param_1 + 0x54);
    if (*(uint *)(param_1 + 0x54) == (*(uint *)(param_1 + 0x58) & 0x3fffffff)) {
      FUN_008a6ee0((int *)(param_1 + 0x50),4);
    }
    *(int *)(*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x54) * 4) = param_2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  return;
}



void FUN_008cbc00(int param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x28) = 1;
  *(undefined1 *)(param_2 + 0x25) = 0;
  *(undefined1 *)(param_2 + 0x24) = 0;
  if (*(short *)(param_2 + 0x22) == -1) {
    *(undefined2 *)(param_2 + 0x22) = *(undefined2 *)(param_1 + 0x54);
    if (*(uint *)(param_1 + 0x54) == (*(uint *)(param_1 + 0x58) & 0x3fffffff)) {
      FUN_008a6ee0((int *)(param_1 + 0x50),4);
    }
    *(int *)(*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x54) * 4) = param_2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  return;
}



void FUN_008cbc60(int param_1,int param_2,char param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [60];
  
  if (param_3 == '\0') {
    piVar1 = *(int **)(param_1 + 0x50);
    if (param_2 == 7) {
      iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))();
      *(undefined2 *)(iVar2 + 4) = 0x100;
      iVar2 = FUN_008ea030(*(int *)(param_1 + 0x50) + 0x40,*(int *)(param_1 + 0x50) + 0x80);
      FUN_0089df00(piVar1 + 4);
      if (*(float *)(iVar2 + 0x6c) != 0.0) {
        if (*(int *)(param_1 + 8) == 0) {
          fVar4 = 1.0 / *(float *)(iVar2 + 0x6c) + *(float *)(iVar2 + 0x5c);
        }
        else {
          fVar4 = *(float *)(*(int *)(param_1 + 8) + 0xc);
        }
        FUN_008dd750(fVar4,iVar2 + 0x10);
      }
    }
    else {
      iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x100,0x2b);
      *(undefined2 *)(iVar2 + 4) = 0x100;
      iVar2 = FUN_008ea140(*(int *)(param_1 + 0x50) + 0x40,*(int *)(param_1 + 0x50) + 0x80);
      (**(code **)(*piVar1 + 0x74))(iVar2);
    }
    if (param_4 == '\0') {
      *(int *)(iVar2 + 0xf0) = piVar1[0x3c];
      *(int *)(iVar2 + 0xf4) = piVar1[0x3d];
      *(int *)(param_1 + 0x50) = iVar2;
      (**(code **)*piVar1)(1);
    }
    else {
      *(int **)(iVar2 + 0xf0) = piVar1;
      *(uint *)(iVar2 + 0xf4) = (uint)*(ushort *)(param_1 + 0x2e);
      *(int *)(param_1 + 0x50) = iVar2;
    }
    *(ushort *)(param_1 + 0x2e) = (param_2 != 7) + 1;
  }
  else {
    if (param_4 == '\0') {
      piVar1 = *(int **)(param_1 + 0x50);
      iVar2 = piVar1[0x3c];
      *(int *)(param_1 + 0x50) = iVar2;
      *(short *)(param_1 + 0x2e) = (short)piVar1[0x3d];
      (**(code **)(*piVar1 + 0x74))(iVar2);
      piVar1[0x3c] = 0;
      (**(code **)*piVar1)(1);
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 8))();
    if ((iVar2 != param_2) && (param_2 != 1)) {
      piVar1 = *(int **)(param_1 + 0x50);
      (**(code **)(*piVar1 + 0x28))(auStack_40);
      fVar3 = (float10)FUN_0089da90(auStack_44,piVar1 + 0x24,piVar1[0x2d],piVar1[0x2e]);
      iVar2 = FUN_008a9630(param_2,piVar1 + 0x10,piVar1 + 0x20,(float)fVar3);
      (**(code **)(*piVar1 + 0x74))(iVar2);
      *(int *)(iVar2 + 200) = piVar1[0x32];
      *(int *)(iVar2 + 0xcc) = piVar1[0x33];
      *(int *)(param_1 + 0x50) = iVar2;
      (**(code **)*piVar1)(1);
    }
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x50) + 0x10;
  *(bool *)(param_1 + 0x91) = param_2 == 7;
  if ((param_2 != 7) && (param_2 != 6)) {
    *(undefined1 *)(param_1 + 0x92) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x92) = 1;
  return;
}



void FUN_008cbe90(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x54);
  *(undefined4 *)(param_2 + 8) = 0;
  FUN_008ddc20(param_2);
  if (((*(short *)(puVar1 + 8) != -1) && (puVar1[0xe] == 0)) && (*(char *)(param_1 + 0xa4) != '\0'))
  {
    FUN_008cb820(param_1,puVar1);
    (**(code **)*puVar1)(1);
  }
  return;
}



void FUN_008cbee0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 *local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  local_4c = local_40;
  iVar4 = 0;
  iVar1 = *(int *)(param_2 + 0x54);
  local_48 = 0;
  local_44 = -0x7ffffff0;
  if (0 < *(int *)(param_2 + 0xbc)) {
    do {
      piVar2 = *(int **)(*(int *)(param_2 + 0xb8) + iVar4 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))(&local_4c);
        iVar3 = 0;
        if (0 < local_48) {
          do {
            if ((*(char *)(*(int *)(local_4c + iVar3 * 4) + 0x91) == '\0') &&
               (*(int *)(local_4c + iVar3 * 4) != param_2)) goto LAB_008cbfea;
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_48);
        }
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_3,4);
        }
        *(int **)(*param_3 + param_3[1] * 4) = piVar2;
        param_3[1] = param_3[1] + 1;
        if ((short)piVar2[1] != 0) {
          *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
        }
        FUN_008ddc90(piVar2);
        *(undefined1 *)(iVar1 + 0x27) = 1;
        if (*(short *)(iVar1 + 0x22) == -1) {
          *(undefined2 *)(iVar1 + 0x22) = *(undefined2 *)(param_1 + 0x54);
          if (*(uint *)(param_1 + 0x54) == (*(uint *)(param_1 + 0x58) & 0x3fffffff)) {
            FUN_008a6ee0((int *)(param_1 + 0x50),4);
          }
          *(int *)(*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x54) * 4) = iVar1;
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        }
      }
LAB_008cbfea:
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_2 + 0xbc));
  }
  if (-1 < local_44) {
    FUN_008a75d0(local_4c,local_44 << 2,0x14);
  }
  return;
}



undefined4 * FUN_008cc050(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int unaff_FS_OFFSET;
  
  iVar11 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar11 + 0x1a4) < *(uint *)(iVar11 + 0x1a8)) {
    puVar12 = *(undefined4 **)(iVar11 + 0x1a4);
    *puVar12 = "TtMergeIsle";
    uVar3 = rdtsc();
    puVar12[1] = (int)uVar3;
    *(undefined4 **)(iVar11 + 0x1a4) = puVar12 + 3;
  }
  puVar12 = param_3;
  puVar13 = param_2;
  if ((int)param_2[0xe] < (int)param_3[0xe]) {
    puVar12 = param_2;
    puVar13 = param_3;
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  if ((*(char *)((int)puVar13 + 0x29) == '\0') && (*(char *)((int)puVar12 + 0x29) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(puVar13 + 10) != '\0') || (param_2._0_1_ = 0, *(char *)(puVar12 + 10) != '\0')) {
    param_2._0_1_ = 1;
  }
  if (bVar4) {
    if (*(char *)((int)puVar13 + 0x29) == '\0') {
      *(undefined1 *)(puVar13 + 10) = 1;
      FUN_008cba20(param_1,puVar13);
      *(undefined1 *)(puVar13 + 9) = *(undefined1 *)(puVar12 + 9);
      bVar5 = *(byte *)((int)puVar12 + 0x25);
    }
    else {
      if (*(char *)((int)puVar12 + 0x29) == '\0') {
        *(undefined1 *)(puVar12 + 10) = 1;
        FUN_008cba20(param_1,puVar12);
        goto LAB_008cc139;
      }
      bVar5 = *(byte *)(puVar12 + 9);
      if (*(byte *)(puVar13 + 9) < *(byte *)(puVar12 + 9)) {
        bVar5 = *(byte *)(puVar13 + 9);
      }
      *(byte *)(puVar13 + 9) = bVar5;
      bVar5 = *(byte *)((int)puVar12 + 0x25);
      if (*(byte *)((int)puVar13 + 0x25) < *(byte *)((int)puVar12 + 0x25)) {
        bVar5 = *(byte *)((int)puVar13 + 0x25);
      }
    }
    *(byte *)((int)puVar13 + 0x25) = bVar5;
  }
LAB_008cc139:
  FUN_008e6c30(puVar13 + 0x11,puVar12 + 0x11);
  uVar10 = puVar13[0xe];
  iVar11 = puVar12[0xe] + uVar10;
  if ((int)(puVar13[0xf] & 0x3fffffff) < iVar11) {
    iVar7 = (puVar13[0xf] & 0x3fffffff) * 2;
    if (iVar7 <= iVar11) {
      iVar7 = iVar11;
    }
    FUN_008a6e40(puVar13 + 0xd,iVar7,4);
  }
  puVar13[0xe] = iVar11;
  iVar11 = 0;
  if (0 < (int)puVar12[0xe]) {
    do {
      *(undefined4 *)(puVar13[0xd] + (uVar10 & 0xffff) * 4) =
           *(undefined4 *)(puVar12[0xd] + iVar11 * 4);
      *(undefined4 **)(*(int *)(puVar12[0xd] + iVar11 * 4) + 0x54) = puVar13;
      *(short *)(*(int *)(puVar12[0xd] + iVar11 * 4) + 0x8c) = (short)uVar10;
      iVar11 = iVar11 + 1;
      uVar10 = uVar10 + 1;
    } while (iVar11 < (int)puVar12[0xe]);
  }
  iVar11 = puVar13[0x18];
  piVar9 = puVar13 + 0x17;
  iVar7 = puVar12[0x18] + iVar11;
  if ((int)(puVar13[0x19] & 0x3fffffff) < iVar7) {
    iVar2 = (puVar13[0x19] & 0x3fffffff) * 2;
    iVar8 = iVar7;
    if (iVar7 < iVar2) {
      iVar8 = iVar2;
    }
    FUN_008a6e40(piVar9,iVar8,4);
  }
  puVar13[0x18] = iVar7;
  iVar7 = 0;
  if (0 < (int)puVar12[0x18]) {
    do {
      iVar2 = *(int *)(puVar12[0x17] + iVar7 * 4);
      if (iVar2 != 0) {
        *(int *)(*piVar9 + iVar11 * 4) = iVar2;
        *(undefined4 **)(*(int *)(*piVar9 + iVar11 * 4) + 0xc) = puVar13;
        iVar11 = iVar11 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)puVar12[0x18]);
  }
  if ((int)(puVar13[0x19] & 0x3fffffff) < iVar11) {
    iVar7 = (puVar13[0x19] & 0x3fffffff) * 2;
    if (iVar7 <= iVar11) {
      iVar7 = iVar11;
    }
    FUN_008a6e40(piVar9,iVar7,4);
  }
  puVar13[0x18] = iVar11;
  iVar11 = 0;
  if (0 < (int)puVar12[0xe]) {
    do {
      iVar7 = *(int *)(puVar12[0xd] + iVar11 * 4);
      piVar9 = *(int **)(iVar7 + 0x68);
      iVar7 = *(int *)(iVar7 + 0x6c);
      if (-1 < iVar7 + -1) {
        do {
          iVar2 = *piVar9;
          piVar9 = piVar9 + 7;
          iVar7 = iVar7 + -1;
          *(undefined4 **)(iVar2 + 8) = puVar13;
        } while (iVar7 != 0);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)puVar12[0xe]);
  }
  iVar11 = puVar12[2];
  if ((int)puVar12[2] < (int)puVar13[2]) {
    iVar11 = puVar13[2];
  }
  puVar13[2] = iVar11;
  puVar13[3] = puVar13[3] + puVar12[3];
  puVar13[4] = puVar13[4] + puVar12[4];
  puVar13[6] = puVar13[6] + puVar12[6];
  puVar13[5] = puVar13[5] + puVar12[5];
  uVar1 = *(ushort *)(puVar12 + 8);
  if (*(char *)((int)puVar12 + 0x29) == '\0') {
    piVar9 = (int *)(param_1 + 0x44);
  }
  else {
    piVar9 = (int *)(param_1 + 0x38);
  }
  uVar10 = (uint)uVar1;
  if ((int)uVar10 < piVar9[1] + -1) {
    *(undefined4 *)(*piVar9 + uVar10 * 4) = *(undefined4 *)(*piVar9 + -4 + piVar9[1] * 4);
    *(ushort *)(*(int *)(*piVar9 + uVar10 * 4) + 0x20) = uVar1;
  }
  piVar9[1] = piVar9[1] + -1;
  if ((*(char *)((int)puVar13 + 0x26) == '\0') && (*(char *)((int)puVar12 + 0x26) == '\0')) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined1 *)((int)puVar13 + 0x26) = uVar6;
  if ((*(char *)((int)puVar13 + 0x27) == '\0') && (*(char *)((int)puVar12 + 0x27) == '\0')) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined1 *)((int)puVar13 + 0x27) = uVar6;
  *(undefined1 *)(puVar13 + 10) = param_2._0_1_;
  if ((*(short *)((int)puVar12 + 0x22) != -1) && (*(short *)((int)puVar13 + 0x22) == -1)) {
    *(undefined2 *)((int)puVar13 + 0x22) = *(undefined2 *)(param_1 + 0x54);
    if (*(uint *)(param_1 + 0x54) == (*(uint *)(param_1 + 0x58) & 0x3fffffff)) {
      FUN_008a6ee0((int *)(param_1 + 0x50),4);
    }
    *(undefined4 **)(*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x54) * 4) = puVar13;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  if (*(ushort *)((int)puVar12 + 0x22) != 0xffff) {
    *(undefined4 *)(*(int *)(param_1 + 0x50) + (uint)*(ushort *)((int)puVar12 + 0x22) * 4) = 0;
    *(undefined2 *)((int)puVar12 + 0x22) = 0xffff;
  }
  (**(code **)*puVar12)(1);
  iVar11 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar11 + 0x1a4) < *(uint *)(iVar11 + 0x1a8)) {
    puVar12 = *(undefined4 **)(iVar11 + 0x1a4);
    *puVar12 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar12[1] = (int)uVar3;
    *(undefined4 **)(iVar11 + 0x1a4) = puVar12 + 3;
  }
  piVar9 = (int *)(param_1 + 0x88);
  *piVar9 = *piVar9 + -1;
  if (((*piVar9 == 0) && (*(int *)(param_1 + 0x84) != 0)) && (*(char *)(param_1 + 0x90) == '\0')) {
    FUN_00899210();
  }
  return puVar13;
}



void FUN_008cc3f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  iVar2 = *(int *)(param_1 + 0x54);
  do {
    if (iVar2 == 0) {
      return;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x50) + -4 + *(int *)(param_1 + 0x54) * 4);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
    if (iVar2 != 0) {
      *(undefined2 *)(iVar2 + 0x22) = 0xffff;
      if (*(char *)(iVar2 + 0x27) != '\0') {
        piVar1 = (int *)(iVar2 + 0x5c);
        iVar7 = -1;
        iVar3 = 0;
        if (0 < *(int *)(iVar2 + 0x60)) {
          piVar6 = (int *)*piVar1;
          iVar4 = iVar3;
          do {
            if (*piVar6 == 0) {
              iVar3 = iVar4 + 1;
              iVar7 = iVar4;
              break;
            }
            iVar3 = iVar4 + 1;
            piVar6 = piVar6 + 1;
            iVar4 = iVar3;
          } while (iVar3 < *(int *)(iVar2 + 0x60));
        }
        if (iVar3 < *(int *)(iVar2 + 0x60)) {
          do {
            iVar4 = *(int *)(*piVar1 + iVar3 * 4);
            if (iVar4 != 0) {
              *(int *)(*piVar1 + iVar7 * 4) = iVar4;
              iVar7 = iVar7 + 1;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(iVar2 + 0x60));
        }
        if (iVar7 != -1) {
          uVar5 = *(uint *)(iVar2 + 100) & 0x3fffffff;
          if ((int)uVar5 < iVar7) {
            iVar3 = uVar5 * 2;
            if (iVar3 <= iVar7) {
              iVar3 = iVar7;
            }
            FUN_008a6e40(piVar1,iVar3,4);
          }
          *(int *)(iVar2 + 0x60) = iVar7;
        }
        *(undefined1 *)(iVar2 + 0x27) = 0;
      }
      if ((int)*(char *)(iVar2 + 0x28) != (uint)(*(char *)(iVar2 + 0x29) != '\0')) {
        if (*(char *)(iVar2 + 0x28) == '\0') {
          FUN_008cbaf0(param_1,iVar2);
        }
        else {
          FUN_008cba20();
        }
      }
    }
    iVar2 = *(int *)(param_1 + 0x54);
  } while( true );
}



void FUN_008cc4e0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar6 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x14);
      if ((*(int *)(iVar6 + 4 + iVar2) == param_2) || (*(int *)(iVar6 + 8 + iVar2) == param_2)) {
        iVar7 = *(int *)(param_1 + 0x18) + -1;
        *(int *)(param_1 + 0x18) = iVar7;
        iVar7 = iVar7 * 0x40;
        iVar8 = iVar7 + iVar2;
        *(undefined4 *)(iVar6 + iVar2) = *(undefined4 *)(iVar7 + iVar2);
        *(undefined4 *)(iVar6 + 4 + iVar2) = *(undefined4 *)(iVar8 + 4);
        *(undefined4 *)(iVar6 + 8 + iVar2) = *(undefined4 *)(iVar8 + 8);
        *(undefined4 *)(iVar6 + 0xc + iVar2) = *(undefined4 *)(iVar8 + 0xc);
        *(undefined4 *)(iVar6 + 0x10 + iVar2) = *(undefined4 *)(iVar8 + 0x10);
        *(undefined4 *)(iVar6 + 0x14 + iVar2) = *(undefined4 *)(iVar8 + 0x14);
        *(undefined4 *)(iVar6 + 0x18 + iVar2) = *(undefined4 *)(iVar8 + 0x18);
        uVar3 = *(undefined4 *)(iVar8 + 0x24);
        uVar4 = *(undefined4 *)(iVar8 + 0x28);
        uVar5 = *(undefined4 *)(iVar8 + 0x2c);
        puVar1 = (undefined4 *)(iVar6 + 0x20 + iVar2);
        *puVar1 = *(undefined4 *)(iVar8 + 0x20);
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        uVar3 = *(undefined4 *)(iVar8 + 0x34);
        uVar4 = *(undefined4 *)(iVar8 + 0x38);
        uVar5 = *(undefined4 *)(iVar8 + 0x3c);
        puVar1 = (undefined4 *)(iVar6 + 0x30 + iVar2);
        *puVar1 = *(undefined4 *)(iVar8 + 0x30);
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        iVar9 = iVar9 + -1;
        iVar6 = iVar6 + -0x40;
      }
      iVar9 = iVar9 + 1;
      iVar6 = iVar6 + 0x40;
    } while (iVar9 < *(int *)(param_1 + 0x18));
  }
  return;
}



void FUN_008cc570(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int unaff_FS_OFFSET;
  int aiStack_64 [2];
  int local_5c;
  undefined1 local_58 [4];
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  undefined1 local_30 [44];
  
  if (*(int *)(param_1 + 0x88) != 0) {
    local_58[0] = 3;
    local_54 = param_2;
    FUN_00898820(local_58);
    return;
  }
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x88) = 1;
  if (iVar4 != 0) {
    local_5c = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    uVar2 = *(uint *)(param_1 + 0x2a4);
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x80000000;
    piVar5 = *(int **)(local_5c + 0x19c);
    if (*(int **)(local_5c + 0x19c) == (int *)0x0) {
      piVar5 = DAT_00ba7d9c;
    }
    local_34 = piVar5[8];
    uVar3 = uVar2 * 8 + 0x10 & 0xfffffff0;
    uVar1 = local_34 + uVar3;
    if ((uint)piVar5[0xb] < uVar1) {
      local_34 = (**(code **)(*piVar5 + 0xc))(uVar3);
    }
    else {
      piVar5[8] = uVar1;
    }
    local_38 = uVar2 | 0x80000000;
    uVar2 = *(uint *)(param_1 + 0x2a4);
    local_50 = 0;
    local_4c = 0;
    local_48 = 0x80000000;
    piVar5 = *(int **)(local_5c + 0x19c);
    if (*(int **)(local_5c + 0x19c) == (int *)0x0) {
      piVar5 = DAT_00ba7d9c;
    }
    local_44 = piVar5[8];
    uVar3 = uVar2 * 8 + 0x10 & 0xfffffff0;
    uVar1 = local_44 + uVar3;
    local_40 = local_34;
    if ((uint)piVar5[0xb] < uVar1) {
      local_44 = (**(code **)(*piVar5 + 0xc))(uVar3);
    }
    else {
      piVar5[8] = uVar1;
    }
    local_48 = uVar2 | 0x80000000;
    local_50 = local_44;
    (**(code **)(**(int **)(param_2 + 0x14) + 0xc))
              (*(undefined4 *)(param_2 + 0x1c),*(float *)(*(int *)(param_1 + 0x74) + 8) * 0.5,
               local_30);
    aiStack_64[0] = param_2 + 0x28;
    (**(code **)(**(int **)(param_1 + 100) + 0x18))(aiStack_64,&local_3c,1,&local_4c,&local_5c);
    if (0 < local_4c + local_3c) {
      FUN_008d84f0(&local_40,&local_50);
      FUN_008d83e0(local_50,local_4c);
      if (*(int *)(param_1 + 0x78) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x78) + 8;
      }
      FUN_008d8370(local_40,local_3c,iVar4);
    }
    iVar4 = local_5c;
    piVar5 = *(int **)(local_5c + 0x19c);
    if (*(int **)(local_5c + 0x19c) == (int *)0x0) {
      piVar5 = DAT_00ba7d9c;
    }
    piVar5[8] = local_44;
    if (local_44 == piVar5[10]) {
      (**(code **)(*piVar5 + 0x10))(local_44);
    }
    if (-1 < (int)local_48) {
      FUN_008a75d0(local_50,local_48 << 3,0x14);
    }
    piVar5 = *(int **)(iVar4 + 0x19c);
    if (*(int **)(iVar4 + 0x19c) == (int *)0x0) {
      piVar5 = DAT_00ba7d9c;
    }
    piVar5[8] = local_34;
    if (local_34 == piVar5[10]) {
      (**(code **)(*piVar5 + 0x10))(local_34);
    }
    if (-1 < (int)local_38) {
      FUN_008a75d0(local_40,local_38 << 3,0x14);
    }
  }
  piVar5 = (int *)(param_1 + 0x88);
  *piVar5 = *piVar5 + -1;
  if (((*piVar5 == 0) && (*(int *)(param_1 + 0x84) != 0)) && (*(char *)(param_1 + 0x90) == '\0')) {
    FUN_00899210();
  }
  return;
}



void FUN_008cc800(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  int unaff_ESI;
  int unaff_FS_OFFSET;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  undefined1 local_30 [44];
  
  if (*(int *)(param_2 + 0x14) != 0) {
    local_44 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    uVar1 = *(uint *)(param_1 + 0x2a4);
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x80000000;
    piVar4 = *(int **)(local_44 + 0x19c);
    if (*(int **)(local_44 + 0x19c) == (int *)0x0) {
      piVar4 = DAT_00ba7d9c;
    }
    local_34 = piVar4[8];
    uVar5 = uVar1 * 8 + 0x10 & 0xfffffff0;
    uVar2 = local_34 + uVar5;
    local_48 = local_34;
    if ((uint)piVar4[0xb] < uVar2) {
      local_34 = (**(code **)(*piVar4 + 0xc))(uVar5);
    }
    else {
      piVar4[8] = uVar2;
    }
    local_38 = uVar1 | 0x80000000;
    local_40 = local_34;
    (**(code **)(**(int **)(param_2 + 0x14) + 0xc))
              (*(undefined4 *)(param_2 + 0x1c),*(float *)(*(int *)(param_1 + 0x74) + 8) * 0.5,
               local_30);
    (**(code **)(**(int **)(param_1 + 100) + 8))(param_2 + 0x28,&local_3c,&iStack_4c);
    if (0 < iStack_54) {
      if (*(int *)(param_1 + 0x78) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x78) + 8;
      }
      FUN_008d8370(unaff_EBX,iStack_54,iVar3);
    }
    piVar4 = *(int **)(unaff_ESI + 0x19c);
    if (*(int **)(unaff_ESI + 0x19c) == (int *)0x0) {
      piVar4 = DAT_00ba7d9c;
    }
    piVar4[8] = iStack_4c;
    if (iStack_4c == piVar4[10]) {
      (**(code **)(*piVar4 + 0x10))(iStack_4c);
    }
    if (-1 < iStack_50) {
      FUN_008a75d0(unaff_EBX,iStack_50 << 3,0x14);
    }
  }
  return;
}



void FUN_008cc950(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_ESI;
  undefined4 unaff_EDI;
  int unaff_FS_OFFSET;
  undefined1 *puVar6;
  int local_44;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  undefined1 local_30 [44];
  
  local_44 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  uVar2 = *(uint *)(param_1 + 0x2a4);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0x80000000;
  piVar4 = *(int **)(local_44 + 0x19c);
  if (*(int **)(local_44 + 0x19c) == (int *)0x0) {
    piVar4 = DAT_00ba7d9c;
  }
  local_34 = piVar4[8];
  uVar5 = uVar2 * 8 + 0x10 & 0xfffffff0;
  uVar1 = local_34 + uVar5;
  if ((uint)piVar4[0xb] < uVar1) {
    local_34 = (**(code **)(*piVar4 + 0xc))(uVar5);
  }
  else {
    piVar4[8] = uVar1;
  }
  local_38 = uVar2 | 0x80000000;
  puVar6 = local_30;
  local_40 = local_34;
  (**(code **)(*param_2 + 0x14))();
  (**(code **)(**(int **)(param_1 + 100) + 8))(param_2 + 10,&local_34,&local_44);
  if (unaff_ESI != 0) {
    if (*(int *)(param_1 + 0x78) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x78) + 8;
    }
    FUN_008d8370(unaff_EDI,unaff_ESI,iVar3);
  }
  piVar4 = *(int **)(puVar6 + 0x19c);
  if (*(int **)(puVar6 + 0x19c) == (int *)0x0) {
    piVar4 = DAT_00ba7d9c;
  }
  piVar4[8] = local_44;
  if (local_44 == piVar4[10]) {
    (**(code **)(*piVar4 + 0x10))(local_44);
  }
  if (-1 < unaff_EBX) {
    FUN_008a75d0(unaff_EDI,unaff_EBX << 3,0x14);
  }
  return;
}



void FUN_008cca80(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int unaff_FS_OFFSET;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  piVar5 = *(int **)(iVar2 + 0x19c);
  uVar3 = *(uint *)(param_1 + 0x2a4);
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  if (piVar5 == (int *)0x0) {
    piVar5 = DAT_00ba7d9c;
  }
  local_4 = piVar5[8];
  uVar4 = uVar3 * 8 + 0x10 & 0xfffffff0;
  uVar1 = local_4 + uVar4;
  if ((uint)piVar5[0xb] < uVar1) {
    local_4 = (**(code **)(*piVar5 + 0xc))(uVar4);
  }
  else {
    piVar5[8] = uVar1;
  }
  local_8 = uVar3 | 0x80000000;
  local_10 = local_4;
  if ((*(int *)(param_2 + 0x14) != 0) &&
     ((**(code **)(**(int **)(param_1 + 100) + 0x10))(param_2 + 0x28,&local_10), 0 < local_c)) {
    FUN_008d83e0(local_10,local_c);
  }
  piVar5 = *(int **)(iVar2 + 0x19c);
  if (piVar5 == (int *)0x0) {
    piVar5 = DAT_00ba7d9c;
  }
  piVar5[8] = local_4;
  if (local_4 == piVar5[10]) {
    (**(code **)(*piVar5 + 0x10))(local_4);
  }
  if (-1 < (int)local_8) {
    FUN_008a75d0(local_10,local_8 << 3,0x14);
  }
  return;
}



void FUN_008ccb90(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBX;
  undefined4 unaff_EBP;
  int unaff_FS_OFFSET;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  piVar4 = *(int **)(iVar2 + 0x19c);
  uVar3 = *(uint *)(param_1 + 0x2a4);
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  if (piVar4 == (int *)0x0) {
    piVar4 = DAT_00ba7d9c;
  }
  local_4 = piVar4[8];
  uVar5 = uVar3 * 8 + 0x10 & 0xfffffff0;
  uVar1 = local_4 + uVar5;
  if ((uint)piVar4[0xb] < uVar1) {
    local_4 = (**(code **)(*piVar4 + 0xc))(uVar5);
  }
  else {
    piVar4[8] = uVar1;
  }
  local_8 = uVar3 | 0x80000000;
  local_10 = local_4;
  (**(code **)(**(int **)(param_1 + 100) + 0x10))(param_2 + 0x28,&local_10);
  if (unaff_EBX != 0) {
    FUN_008d83e0(unaff_EBP,unaff_EBX);
  }
  piVar4 = *(int **)(iVar2 + 0x19c);
  if (piVar4 == (int *)0x0) {
    piVar4 = DAT_00ba7d9c;
  }
  piVar4[8] = local_c;
  if (local_c == piVar4[10]) {
    (**(code **)(*piVar4 + 0x10))(local_c);
  }
  if (-1 < local_10) {
    FUN_008a75d0(unaff_EBP,local_10 << 3,0x14);
  }
  return;
}



void FUN_008ccc90(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int unaff_FS_OFFSET;
  int local_1bc;
  int iStack_1b8;
  undefined4 *puStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  uint uStack_1a0;
  undefined2 uStack_19c;
  ushort uStack_19a;
  int local_198;
  int local_194;
  int local_190;
  undefined1 local_18c [4];
  int local_188;
  undefined4 local_184;
  uint local_180;
  int local_17c;
  char local_178 [4];
  undefined1 auStack_174 [16];
  int **local_164;
  uint local_160;
  uint local_15c;
  int *local_158 [32];
  undefined1 *puStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined1 auStack_cc [64];
  undefined1 *local_8c;
  int local_88;
  int local_84;
  undefined1 local_80 [128];
  
  if (*(char *)(param_1 + 0xa4) != '\0') {
    local_190 = *(int *)(param_1 + 0x3c);
    while (local_190 = local_190 + -1, -1 < local_190) {
      piVar10 = *(int **)(*(int *)(param_1 + 0x38) + local_190 * 4);
      if (*(char *)((int)piVar10 + 0x26) != '\0') {
        iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        piVar7 = *(int **)(iVar2 + 0x19c);
        uVar3 = piVar10[0xe];
        local_188 = 0;
        local_184 = 0;
        local_180 = 0x80000000;
        if (piVar7 == (int *)0x0) {
          piVar7 = DAT_00ba7d9c;
        }
        iVar6 = piVar7[8];
        uVar5 = uVar3 * 4 + 0x10 & 0xfffffff0;
        uVar1 = iVar6 + uVar5;
        if ((uint)piVar7[0xb] < uVar1) {
          iVar6 = (**(code **)(*piVar7 + 0xc))(uVar5);
        }
        else {
          piVar7[8] = uVar1;
        }
        local_180 = uVar3 | 0x80000000;
        local_188 = iVar6;
        local_17c = iVar6;
        FUN_0091f340(&local_188,piVar10[0xe]);
        FUN_008de0c0(local_178,local_18c);
        if (local_178[0] == '\0') {
          local_8c = local_80;
          local_88 = 0;
          local_84 = -0x7fffffe0;
          FUN_0091f3a0(&local_8c);
          local_164 = local_158;
          local_15c = 0x80000020;
          local_160 = 1;
          local_1bc = 1;
          local_158[0] = piVar10;
          if (1 < local_88) {
            do {
              iVar6 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x6c,0x2f);
              *(undefined2 *)(iVar6 + 4) = 0x6c;
              piVar7 = (int *)FUN_008de400(param_1);
              if (*(uint *)(param_1 + 0x3c) == (*(uint *)(param_1 + 0x40) & 0x3fffffff)) {
                FUN_008a6ee0((int *)(param_1 + 0x38),4);
              }
              *(int **)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c) * 4) = piVar7;
              *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
              *(short *)(piVar7 + 8) = *(short *)(param_1 + 0x3c) + -1;
              if (local_160 == (local_15c & 0x3fffffff)) {
                FUN_008a6ee0(&local_164,4);
              }
              local_164[local_160] = piVar7;
              local_160 = local_160 + 1;
              if ((int)(piVar7[0xf] & 0x3fffffffU) < *(int *)(local_8c + local_1bc * 4)) {
                FUN_008a6e40(piVar7 + 0xd,*(int *)(local_8c + local_1bc * 4),4);
              }
              local_1bc = local_1bc + 1;
            } while (local_1bc < local_88);
          }
          local_198 = piVar10[0xd];
          local_194 = piVar10[0xe];
          piVar10[0xe] = 0;
          local_1bc = 0;
          if (0 < local_194) {
            do {
              piVar7 = local_164[*(int *)(local_188 + local_1bc * 4)];
              iVar6 = *(int *)(local_198 + local_1bc * 4);
              *(int **)(iVar6 + 0x54) = piVar7;
              *(short *)(iVar6 + 0x8c) = (short)piVar7[0xe];
              if (piVar7[0xe] == (piVar7[0xf] & 0x3fffffffU)) {
                FUN_008a6ee0(piVar7 + 0xd,4);
              }
              *(int *)(piVar7[0xd] + piVar7[0xe] * 4) = iVar6;
              piVar7[0xe] = piVar7[0xe] + 1;
              if (piVar10 != piVar7) {
                iVar8 = (**(code **)(**(int **)(iVar6 + 0x50) + 0x1c))();
                piVar10[5] = piVar10[5] - iVar8;
                piVar7[5] = piVar7[5] + iVar8;
                piVar11 = *(int **)(iVar6 + 0x68);
                iStack_1b8 = 0;
                if (0 < *(int *)(iVar6 + 0x6c)) {
                  do {
                    (**(code **)(**(int **)(*piVar11 + 0xc) + 0x20))(auStack_174);
                    (**(code **)(*piVar10 + 0x10))(*piVar11,local_178);
                    (**(code **)(*piVar7 + 0xc))(*piVar11,&local_180);
                    iVar8 = *piVar11;
                    piVar11 = piVar11 + 7;
                    *(int **)(iVar8 + 8) = piVar7;
                    iStack_1b8 = iStack_1b8 + 1;
                  } while (iStack_1b8 < *(int *)(iVar6 + 0x6c));
                }
              }
              local_1bc = local_1bc + 1;
            } while (local_1bc < local_194);
          }
          local_198 = *(int *)(param_1 + 0x30);
          local_194 = piVar10[0x17];
          iVar6 = piVar10[0x18];
          piVar10[0x18] = 0;
          iStack_1b8 = 0;
          if (0 < iVar6) {
            do {
              piVar7 = *(int **)(local_194 + iStack_1b8 * 4);
              if (piVar7 != (int *)0x0) {
                puStack_d8 = auStack_cc;
                iVar8 = 0;
                iStack_d4 = 0;
                iStack_d0 = -0x7ffffff0;
                (**(code **)(*piVar7 + 0xc))(&puStack_d8);
                iVar9 = 0;
                if (0 < iStack_d4) {
                  do {
                    iVar8 = *(int *)(*(int *)(puStack_d8 + iVar9 * 4) + 0x54);
                    if (iVar8 != local_198) break;
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < iStack_d4);
                }
                if (-1 < iStack_d0) {
                  FUN_008a75d0(puStack_d8,iStack_d0 << 2,0x14);
                }
                piVar7[3] = iVar8;
                if (*(uint *)(iVar8 + 0x60) == (*(uint *)(iVar8 + 100) & 0x3fffffff)) {
                  FUN_008a6ee0((int *)(iVar8 + 0x5c),4);
                }
                *(int **)(*(int *)(iVar8 + 0x5c) + *(int *)(iVar8 + 0x60) * 4) = piVar7;
                *(int *)(iVar8 + 0x60) = *(int *)(iVar8 + 0x60) + 1;
              }
              iStack_1b8 = iStack_1b8 + 1;
            } while (iStack_1b8 < iVar6);
          }
          uStack_1a0 = *(uint *)(*(int *)(param_1 + 0x7c) + 0x1bf8);
          uStack_19a = (ushort)uStack_1a0;
          uStack_1a0 = uStack_1a0 & 0xffff;
          puStack_1b0 = &uStack_1a4;
          iStack_1ac = 0;
          iStack_1a8 = -0x7fffffff;
          uStack_19c = (undefined2)*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x1bfc);
          if (piVar10[0x12] == 1) {
            uStack_1a4 = *(undefined4 *)piVar10[0x11];
            piVar10[0x12] = 0;
            iStack_1ac = 1;
          }
          else if (1 < piVar10[0x12]) {
            FUN_008a6e40(&puStack_1b0,2,4);
            puVar4 = (undefined4 *)piVar10[0x11];
            iVar6 = piVar10[0x13];
            piVar10[0x11] = (int)puStack_1b0;
            iVar8 = piVar10[0x12];
            piVar10[0x12] = iStack_1ac;
            piVar10[0x13] = iStack_1a8;
            puStack_1b0 = puVar4;
            iStack_1ac = iVar8;
            iStack_1a8 = iVar6;
          }
          uVar3 = piVar10[0x15];
          piVar10[0x15] = uStack_1a0;
          local_1bc = 0;
          uStack_1a0 = uVar3;
          if (0 < iStack_1ac) {
            do {
              uVar3 = puStack_1b0[local_1bc];
              local_1bc = local_1bc + 1;
              uVar1 = uStack_1a0;
              if (local_1bc != iStack_1ac) {
                uVar1 = (uint)uStack_19a;
              }
              for (uVar5 = uVar3; uVar5 < uVar1 + uVar3; uVar5 = uVar5 + *(byte *)(uVar5 + 3)) {
                iVar6 = *(int *)(*(int *)(*(int *)(uVar5 + 0x14) + 0x10) + 0x54 +
                                *(int *)(uVar5 + 0x14));
                if (*(short *)(iVar6 + 0x20) == -1) {
                  iVar6 = *(int *)(*(int *)(*(int *)(uVar5 + 0x18) + 0x10) + 0x54 +
                                  *(int *)(uVar5 + 0x18));
                }
                FUN_008e68a0(iVar6 + 0x44,uVar5);
              }
              (**(code **)(*DAT_00ba7d98 + 0x14))(uVar3,uStack_19a,0x24);
            } while (local_1bc < iStack_1ac);
          }
          iStack_1ac = 0;
          if (-1 < iStack_1a8) {
            FUN_008a75d0(puStack_1b0,iStack_1a8 << 2,0x14);
          }
          if ((-1 < piVar10[0x13]) &&
             ((piVar10[0x12] < 1 || (piVar10[0x12] * 2 < (int)(piVar10[0x13] & 0x3fffffffU))))) {
            FUN_008a6f90(piVar10 + 0x11,4,piVar10 + 0x14,1);
          }
          if (-1 < (int)local_15c) {
            FUN_008a75d0(local_164,local_15c << 2,0x14);
          }
          if (-1 < local_84) {
            FUN_008a75d0(local_8c,local_84 << 2,0x14);
          }
        }
        *(undefined1 *)((int)piVar10 + 0x26) = 0;
        piVar10 = *(int **)(iVar2 + 0x19c);
        if (piVar10 == (int *)0x0) {
          piVar10 = DAT_00ba7d9c;
        }
        piVar10[8] = local_17c;
        if (local_17c == piVar10[10]) {
          (**(code **)(*piVar10 + 0x10))(local_17c);
        }
        if (-1 < (int)local_180) {
          FUN_008a75d0(local_188,local_180 << 2,0x14);
        }
      }
    }
  }
  return;
}



void FUN_008cd320(int param_1,int param_2,int param_3)

{
  undefined1 local_c [4];
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    local_8 = param_2;
    local_c[0] = 0xc;
    local_4 = param_3;
    FUN_00898820(local_c);
    return;
  }
  FUN_008cc050(param_1,*(undefined4 *)(param_2 + 0x54),*(undefined4 *)(param_3 + 0x54));
  return;
}



void FUN_008cd380(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  local_4c = local_40;
  iVar1 = *(int *)(param_2 + 0x54);
  iVar4 = 0;
  local_48 = 0;
  local_44 = -0x7ffffff0;
  if (0 < param_3[1]) {
    do {
      piVar2 = *(int **)(*param_3 + iVar4 * 4);
      if (iVar1 == *(int *)(param_1 + 0x30)) {
        FUN_008de080(piVar2);
        if (((short)piVar2[1] != 0) &&
           (*(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1,
           *(short *)((int)piVar2 + 6) == 0)) {
          (**(code **)*piVar2)(1);
        }
      }
      else {
        FUN_008de080(piVar2);
        if (((short)piVar2[1] != 0) &&
           (*(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1,
           *(short *)((int)piVar2 + 6) == 0)) {
          (**(code **)*piVar2)(1);
        }
        local_48 = 0;
        (**(code **)(*piVar2 + 0xc))(&local_4c);
        iVar5 = 0;
        if (0 < local_48) {
          do {
            iVar3 = *(int *)(local_4c + iVar5 * 4);
            if ((((*(char *)(iVar3 + 0x91) == '\0') && (iVar3 != param_2)) &&
                (*(char *)(param_2 + 0x91) == '\0')) &&
               (*(int *)(iVar3 + 0x54) != *(int *)(param_2 + 0x54))) {
              FUN_008cd320(*(undefined4 *)(iVar3 + 8),iVar3,param_2);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_48);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3[1]);
  }
  if (-1 < local_44) {
    FUN_008a75d0(local_4c,local_44 << 2,0x14);
  }
  return;
}



void FUN_008cd4e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined1 *puStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined1 auStack_a4 [4];
  uint uStack_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined1 *puStack_98;
  int iStack_94;
  int iStack_90;
  undefined1 auStack_8c [64];
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined1 auStack_40 [64];
  
  iVar7 = (**(code **)(**(int **)(param_1 + 0x50) + 8))();
  iVar5 = param_2;
  if (iVar7 != param_2) {
    if ((param_2 == 7) || (param_2 == 6)) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x01';
    }
    if ((iVar7 == 7) || (iVar7 == 6)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    if (((cVar9 == '\0') || (cVar6 != '\0')) || (*(int *)(*(int *)(param_1 + 0x50) + 0xf0) != 0)) {
      FUN_008bc720();
      iVar2 = *(int *)(param_1 + 8);
      if ((iVar2 == 0) || ((iVar7 == 7) == (iVar5 == 7))) {
        FUN_008cbc60(param_1,iVar5,cVar9,cVar6);
        if (iVar2 != 0) {
          *(undefined1 *)(iVar2 + 0x91) = 0;
          if ((3 < *(int *)(iVar2 + 0xb4)) && (iVar5 == 6)) {
            FUN_008cc4e0(*(undefined4 *)(iVar2 + 8),param_1);
          }
          *(undefined1 *)(iVar2 + 0x91) = 1;
          FUN_0089b630(param_1,param_4,1);
        }
      }
      else {
        puStack_98 = auStack_8c;
        iStack_90 = -0x7ffffff0;
        iStack_44 = -0x7ffffff0;
        iVar10 = 0;
        puStack_4c = auStack_40;
        iStack_94 = 0;
        uStack_48 = 0;
        uVar3 = *(uint *)(*(int *)(iVar2 + 0x7c) + 0x1bf8);
        uStack_9c = (undefined2)*(undefined4 *)(*(int *)(iVar2 + 0x7c) + 0x1bfc);
        uStack_a0 = uVar3 & 0xffff;
        puStack_b0 = auStack_a4;
        uStack_9a = (undefined2)uVar3;
        *(undefined1 *)(iVar2 + 0x90) = 1;
        *(undefined1 *)(iVar2 + 0x91) = 0;
        uStack_ac = 0;
        iStack_a8 = -0x7fffffff;
        FUN_008cb8a0(param_1,&puStack_98);
        if (iVar5 == 7) {
          FUN_008cbee0(iVar2,param_1,&puStack_4c);
        }
        else {
          FUN_008cb740(iVar2,param_1,&puStack_4c);
        }
        FUN_008cb580(*(int *)(param_1 + 0x54) + 0x44,param_1,&puStack_b0,iVar5);
        if ((iVar7 != 7) && (2 < *(int *)(*(int *)(param_1 + 0x54) + 0x38))) {
          *(undefined1 *)(*(int *)(param_1 + 0x54) + 0x26) = 1;
        }
        FUN_008cbe90(iVar2,param_1);
        FUN_008cbc60(param_1,iVar5,cVar9,cVar6);
        FUN_008cb640(iVar2,param_1,param_3);
        FUN_008cd380(iVar2,param_1,&puStack_4c);
        *(undefined1 *)(iVar2 + 0x91) = 1;
        if (0 < iStack_94) {
          do {
            puVar4 = *(undefined4 **)(puStack_98 + iVar10 * 4);
            FUN_008d9a50();
            if (*(int *)(iVar2 + 0x88) == 0) {
              *(undefined4 *)(iVar2 + 0x88) = 1;
              FUN_0091ef50(iVar2,puVar4);
              iVar7 = *(int *)(iVar2 + 0x88) + -1;
              *(int *)(iVar2 + 0x88) = iVar7;
              if (((iVar7 == 0) && (*(int *)(iVar2 + 0x84) != 0)) &&
                 (*(char *)(iVar2 + 0x90) == '\0')) {
                FUN_00899210();
              }
            }
            else {
              FUN_0091ef50(iVar2,puVar4);
            }
            if ((*(short *)(puVar4 + 1) != 0) &&
               (*(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1,
               *(short *)((int)puVar4 + 6) == 0)) {
              (**(code **)*puVar4)(1);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < iStack_94);
        }
        iVar7 = param_1;
        iVar10 = param_1;
        if (iVar5 != 7) {
          piVar1 = (int *)(param_1 + 0x38);
          iVar11 = 0;
          if (0 < *(int *)(param_1 + 0x3c)) {
            do {
              iVar8 = *(int *)(*piVar1 + 4 + iVar11 * 8);
              iVar8 = *(int *)(iVar8 + 0x10) + iVar8;
              if (((*(char *)(iVar10 + 0x91) == '\0') && (*(char *)(iVar8 + 0x91) == '\0')) &&
                 (*(int *)(iVar10 + 0x54) != *(int *)(iVar8 + 0x54))) {
                FUN_008cd320(*(undefined4 *)(iVar10 + 8),iVar10,iVar8);
                iVar10 = param_1;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < *(int *)(iVar7 + 0x3c));
          }
        }
        FUN_008e6c30(*(int *)(iVar10 + 0x54) + 0x44,&puStack_b0);
        if (iVar5 == 7) {
          FUN_008dd750(*(undefined4 *)(iVar2 + 0x160),*(int *)(param_1 + 0x50) + 0x10);
          *(int *)(iVar2 + 0x88) = *(int *)(iVar2 + 0x88) + 1;
          FUN_008d7400(&param_1,1,iVar2);
          (**(code **)(**(int **)(iVar2 + 8) + 0x1c))(&param_1,1,iVar2);
          FUN_008dd030(*(undefined4 *)(param_1 + 8),param_1);
          *(int *)(iVar2 + 0x88) = *(int *)(iVar2 + 0x88) + -1;
        }
        FUN_0089b630(param_1,param_4,1);
        *(undefined1 *)(iVar2 + 0x90) = 0;
        if ((*(int *)(iVar2 + 0x88) == 0) && (*(int *)(iVar2 + 0x84) != 0)) {
          FUN_00899210();
        }
        if (-1 < iStack_a8) {
          FUN_008a75d0(puStack_b0,iStack_a8 << 2,0x14);
        }
        if (-1 < iStack_44) {
          FUN_008a75d0(puStack_4c,iStack_44 << 2,0x14);
        }
        if (-1 < iStack_90) {
          FUN_008a75d0(puStack_98,iStack_90 << 2,0x14);
          FUN_008bc730();
          return;
        }
      }
      FUN_008bc730();
    }
  }
  return;
}



void FUN_008cd9d0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(in_ECX + 0x70) = *param_1;
  *(undefined4 *)(in_ECX + 0x74) = uVar1;
  *(undefined4 *)(in_ECX + 0x78) = uVar2;
  *(undefined4 *)(in_ECX + 0x7c) = uVar3;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  *(undefined4 *)(in_ECX + 0x80) = param_1[4];
  *(undefined4 *)(in_ECX + 0x84) = uVar1;
  *(undefined4 *)(in_ECX + 0x88) = uVar2;
  *(undefined4 *)(in_ECX + 0x8c) = uVar3;
  FUN_008de950();
  return;
}



void FUN_008cda30(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  iVar2 = *(int *)(in_ECX + 0x94);
  iVar1 = 0;
  if (0 < iVar2) {
    piVar3 = *(int **)(in_ECX + 0x90);
    do {
      if (*piVar3 == param_1) goto LAB_008cda5f;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < iVar2);
  }
  iVar1 = -1;
LAB_008cda5f:
  FUN_0088d7d0(param_1,CONCAT31((int3)((uint)iVar2 >> 8),-1 < iVar1));
  if (-1 < iVar1) {
    iVar2 = *(int *)(in_ECX + 0x94) + -1;
    *(int *)(in_ECX + 0x94) = iVar2;
    *(undefined4 *)(*(int *)(in_ECX + 0x90) + iVar1 * 4) =
         *(undefined4 *)(*(int *)(in_ECX + 0x90) + iVar2 * 4);
  }
  return;
}



void FUN_008cdaa0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a99bf0;
  if (-1 < (int)in_ECX[0x26]) {
    FUN_008a75d0(in_ECX[0x24],in_ECX[0x26] << 2,0x14);
  }
  FUN_008de8b0();
  return;
}



void FUN_008cdbb0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x94) == 0) {
    if (-1 < *(int *)(in_ECX + 0x98)) {
      FUN_008a75d0(*(undefined4 *)(in_ECX + 0x90),*(int *)(in_ECX + 0x98) << 2,0x14);
    }
    *(undefined4 *)(in_ECX + 0x90) = 0;
    *(undefined4 *)(in_ECX + 0x94) = 0;
    *(uint *)(in_ECX + 0x98) = *(uint *)(in_ECX + 0x98) & 0xc0000000 | 0x80000000;
  }
  FUN_008de800();
  return;
}



void FUN_008cdc30(byte param_1)

{
  FUN_008cdaa0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008cdcb0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  FUN_008bc8f0(0,2);
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0x80000000;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0x80000000;
  in_ECX[9] = 0xffffffec;
  *in_ECX = &PTR_FUN_00a99bf0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0x80000000;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  in_ECX[0x1c] = *param_1;
  in_ECX[0x1d] = uVar1;
  in_ECX[0x1e] = uVar2;
  in_ECX[0x1f] = uVar3;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  in_ECX[0x20] = param_1[4];
  in_ECX[0x21] = uVar1;
  in_ECX[0x22] = uVar2;
  in_ECX[0x23] = uVar3;
  in_ECX[0xc] = param_2;
  return;
}



int FUN_008cdd20(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  
  iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xa0,0x2e);
  *(undefined2 *)(iVar1 + 4) = 0xa0;
  iVar1 = FUN_008cdcb0(in_ECX + 0x70,*(undefined4 *)(in_ECX + 0x30));
  uVar2 = *(uint *)(iVar1 + 0x58) & 0x3fffffff;
  if ((int)uVar2 < *(int *)(in_ECX + 0x54)) {
    if (-1 < (int)*(uint *)(iVar1 + 0x58)) {
      FUN_008a75d0(*(undefined4 *)(iVar1 + 0x50),uVar2 << 2,0x14);
    }
    uVar3 = FUN_008a7560(*(int *)(in_ECX + 0x54) << 2,0x14);
    *(undefined4 *)(iVar1 + 0x50) = uVar3;
    *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x58) & 0x40000000 | *(uint *)(in_ECX + 0x54);
  }
  iVar5 = *(int *)(in_ECX + 0x54);
  puVar4 = *(undefined4 **)(iVar1 + 0x50);
  *(int *)(iVar1 + 0x54) = iVar5;
  if (0 < iVar5) {
    iVar6 = *(int *)(in_ECX + 0x50) - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar2 = *(uint *)(iVar1 + 100) & 0x3fffffff;
  if ((int)uVar2 < *(int *)(in_ECX + 0x60)) {
    if (-1 < (int)*(uint *)(iVar1 + 100)) {
      FUN_008a75d0(*(undefined4 *)(iVar1 + 0x5c),uVar2 * 4,0x14);
    }
    uVar3 = FUN_008a7560(*(int *)(in_ECX + 0x60) << 2,0x14);
    *(undefined4 *)(iVar1 + 0x5c) = uVar3;
    *(uint *)(iVar1 + 100) = *(uint *)(iVar1 + 100) & 0x40000000 | *(uint *)(in_ECX + 0x60);
  }
  iVar5 = *(int *)(in_ECX + 0x60);
  puVar4 = *(undefined4 **)(iVar1 + 0x5c);
  *(int *)(iVar1 + 0x60) = iVar5;
  if (0 < iVar5) {
    iVar6 = *(int *)(in_ECX + 0x5c) - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_008a9e50(in_ECX);
  return iVar1;
}



void FUN_008cde90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar2 = param_1;
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar2 = iVar1;
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  *(int *)(in_ECX + 8) = iVar2;
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 4);
  iVar3 = *(int *)(param_2 + 0xc);
  iVar2 = param_2;
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar2 = iVar1;
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  *(int *)(in_ECX + 0x10) = iVar2;
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(in_ECX + 4) = 1;
  return;
}



void FUN_008cdee0(int *param_1)

{
  (**(code **)*param_1)("BoxShape",1);
  (**(code **)(*param_1 + 0x14))();
  return;
}



void FUN_008cdf30(float *param_1,float *param_2,float param_3,float *param_4)

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
  
  fVar10 = *param_2;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_1[0xc];
  fVar4 = param_1[0xd];
  fVar5 = param_1[0xe];
  fVar6 = param_1[0xf];
  fVar7 = ABS(fVar10 * *param_1) + ABS(fVar1 * param_1[4]) + ABS(fVar2 * param_1[8]) + param_3;
  fVar8 = ABS(fVar10 * param_1[1]) + ABS(fVar1 * param_1[5]) + ABS(fVar2 * param_1[9]) + param_3;
  fVar9 = ABS(fVar10 * param_1[2]) + ABS(fVar1 * param_1[6]) + ABS(fVar2 * param_1[10]) + param_3;
  fVar10 = ABS(fVar10 * param_1[3]) + ABS(fVar1 * param_1[7]) + ABS(fVar2 * param_1[0xb]) + param_3;
  param_4[4] = fVar7 + fVar3;
  param_4[5] = fVar8 + fVar4;
  param_4[6] = fVar9 + fVar5;
  param_4[7] = fVar10 + fVar6;
  *param_4 = -fVar7 + fVar3;
  param_4[1] = -fVar8 + fVar4;
  param_4[2] = -fVar9 + fVar5;
  param_4[3] = -fVar10 + fVar6;
  return;
}



void FUN_008cdfe0(float *param_1,undefined4 param_2)

{
  float *pfVar1;
  float fVar2;
  undefined4 *in_ECX;
  
  in_ECX[3] = param_2;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a99d60;
  pfVar1 = (float *)(in_ECX + 4);
  *pfVar1 = *param_1;
  in_ECX[5] = param_1[1];
  in_ECX[6] = param_1[2];
  in_ECX[7] = param_1[3];
  if ((float)in_ECX[5] <= *pfVar1) {
    fVar2 = (float)in_ECX[5];
  }
  else {
    fVar2 = *pfVar1;
  }
  in_ECX[7] = fVar2;
  if ((float)in_ECX[6] < fVar2) {
    fVar2 = (float)in_ECX[6];
  }
  in_ECX[7] = fVar2;
  return;
}



void FUN_008ce090(uint *param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  int in_ECX;
  undefined4 in_EDX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(in_ECX + 0x10);
  uVar4 = *(uint *)(in_ECX + 0x14);
  uVar5 = *(uint *)(in_ECX + 0x18);
  uVar6 = *(uint *)(in_ECX + 0x1c);
  *param_2 = uVar3;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  uVar3 = uVar3 ^ *param_1 & 0x80000000;
  uVar4 = uVar4 ^ param_1[1] & 0x80000000;
  uVar5 = uVar5 ^ param_1[2] & 0x80000000;
  uVar6 = uVar6 ^ param_1[3] & 0x80000000;
  auVar1._4_4_ = uVar4;
  auVar1._0_4_ = uVar3;
  auVar1._8_4_ = uVar5;
  auVar1._12_4_ = uVar6;
  uVar2 = movmskps(in_EDX,auVar1);
  *param_2 = uVar3;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  param_2[3] = uVar2 & 7 | 0x3f000000;
  return;
}



void FUN_008ce0d0(ushort *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_ECX;
  int iVar7;
  
  if (-1 < param_2 + -1) {
    do {
      fVar1 = *(float *)(in_ECX + 0x14);
      fVar2 = *(float *)(in_ECX + 0x18);
      fVar3 = *(float *)(in_ECX + 0x1c);
      iVar7 = (uint)*param_1 * 0x10;
      fVar4 = *(float *)(&UNK_00a99c54 + iVar7);
      fVar5 = *(float *)(&UNK_00a99c58 + iVar7);
      fVar6 = *(float *)(&UNK_00a99c5c + iVar7);
      *param_3 = *(float *)(in_ECX + 0x10) * *(float *)(&DAT_00a99c50 + iVar7);
      param_3[1] = fVar1 * fVar4;
      param_3[2] = fVar2 * fVar5;
      param_3[3] = fVar3 * fVar6;
      param_3[3] = (float)(*param_1 | 0x3f000000);
      param_3 = param_3 + 4;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



void FUN_008ce130(int param_1)

{
  float *pfVar1;
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
  int in_ECX;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  
  fVar2 = *(float *)(in_ECX + 0x10);
  fVar3 = *(float *)(in_ECX + 0xc);
  fVar4 = *(float *)(in_ECX + 0x14);
  fVar5 = *(float *)(in_ECX + 0x18);
  pfVar13 = (float *)&DAT_00a99cd0;
  pfVar14 = (float *)(param_1 + 0x10);
  iVar15 = 4;
  do {
    fVar6 = pfVar13[4];
    fVar7 = pfVar13[5];
    fVar8 = pfVar13[6];
    fVar9 = pfVar13[7];
    fVar10 = pfVar13[1];
    fVar11 = pfVar13[2];
    fVar12 = pfVar13[3];
    pfVar1 = (float *)(param_1 + -0xa99cd0 + (int)pfVar13);
    *pfVar1 = fVar2 * *pfVar13;
    pfVar1[1] = fVar4 * fVar10;
    pfVar1[2] = fVar5 * fVar11;
    pfVar1[3] = fVar3 * fVar12;
    *pfVar14 = fVar2 * fVar6;
    pfVar14[1] = fVar4 * fVar7;
    pfVar14[2] = fVar5 * fVar8;
    pfVar14[3] = fVar3 * fVar9;
    pfVar13 = pfVar13 + 8;
    pfVar14 = pfVar14 + 8;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  return;
}



void FUN_008ce1b0(undefined1 *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  uint uVar9;
  int in_ECX;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int unaff_EBX;
  uint uVar14;
  int unaff_FS_OFFSET;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_4c;
  float local_48;
  int local_44;
  uint local_3c [3];
  float local_30 [11];
  
  iVar11 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar1 = *(int *)(iVar11 + _tls_index * 4);
  iVar8 = iVar1;
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar12 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar12 = "TtrcBox";
    uVar3 = rdtsc();
    iVar8 = (int)uVar3;
    puVar12[1] = iVar8;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar12 + 3;
    unaff_EBX = iVar1;
  }
  iVar1 = _tls_index;
  fVar2 = *(float *)(in_ECX + 0xc);
  fVar15 = *(float *)(in_ECX + 0x10) + fVar2;
  fVar16 = *(float *)(in_ECX + 0x14) + fVar2;
  fVar17 = *(float *)(in_ECX + 0x18) + fVar2;
  fVar18 = *(float *)(in_ECX + 0x1c) + fVar2;
  local_30[4] = -fVar15;
  local_30[5] = -fVar16;
  local_30[6] = -fVar17;
  auVar5._4_4_ = -(uint)(param_2[1] <= local_30[5]);
  auVar5._0_4_ = -(uint)(*param_2 <= local_30[4]);
  auVar5._8_4_ = -(uint)(param_2[2] <= local_30[6]);
  auVar5._12_4_ = -(uint)(param_2[3] <= -fVar18);
  uVar14 = movmskps(unaff_EBX,auVar5);
  auVar7._4_4_ = -(uint)(fVar16 <= param_2[1]);
  auVar7._0_4_ = -(uint)(fVar15 <= *param_2);
  auVar7._8_4_ = -(uint)(fVar17 <= param_2[2]);
  auVar7._12_4_ = -(uint)(fVar18 <= param_2[3]);
  uVar10 = movmskps(in_ECX,auVar7);
  auVar4._4_4_ = -(uint)(fVar16 <= param_2[5]);
  auVar4._0_4_ = -(uint)(fVar15 <= param_2[4]);
  auVar4._8_4_ = -(uint)(fVar17 <= param_2[6]);
  auVar4._12_4_ = -(uint)(fVar18 <= param_2[7]);
  uVar9 = movmskps(iVar8,auVar4);
  uVar10 = uVar10 & 7;
  auVar6._4_4_ = -(uint)(param_2[5] <= local_30[5]);
  auVar6._0_4_ = -(uint)(param_2[4] <= local_30[4]);
  auVar6._8_4_ = -(uint)(param_2[6] <= local_30[6]);
  auVar6._12_4_ = -(uint)(param_2[7] <= -fVar18);
  uVar13 = movmskps(fVar2,auVar6);
  uVar14 = uVar14 & 7;
  if ((((uVar10 & uVar9 & 7) != 0) || ((uVar14 & uVar13 & 7) != 0)) || (uVar14 == 0 && uVar10 == 0))
  {
    iVar11 = *(int *)(iVar11 + _tls_index * 4);
    if (*(uint *)(iVar11 + 0x1a4) < *(uint *)(iVar11 + 0x1a8)) {
      puVar12 = *(undefined4 **)(iVar11 + 0x1a4);
      *puVar12 = &DAT_00a9610c;
      uVar3 = rdtsc();
      puVar12[1] = (int)uVar3;
LAB_008ce42e:
      *(undefined4 **)(iVar11 + 0x1a4) = puVar12 + 3;
    }
LAB_008ce437:
    *param_1 = 0;
    return;
  }
  fVar2 = 1.0;
  uVar9 = uVar9 & 7 | uVar10;
  local_48 = param_3[5];
  local_3c[0] = 1;
  local_3c[1] = 2;
  local_3c[2] = 4;
  local_4c = 0.0;
  local_44 = 1;
  do {
    iVar11 = 8;
    do {
      if ((uVar9 & *(uint *)((int)local_3c + iVar11)) != 0) {
        fVar15 = *(float *)((int)local_30 + iVar11 + 0x10);
        fVar16 = fVar2 * *(float *)(iVar11 + (int)param_2) + fVar15;
        fVar16 = fVar16 / (fVar16 - (fVar2 * *(float *)(iVar11 + 0x10 + (int)param_2) + fVar15));
        if ((uVar10 & *(uint *)((int)local_3c + iVar11)) == 0) {
          if (local_48 < fVar16) goto LAB_008ce31a;
        }
        else if (fVar16 < local_4c) {
LAB_008ce31a:
          fVar16 = local_48;
        }
        else {
          local_30[0] = 0.0;
          local_30[1] = 0.0;
          local_30[2] = 0.0;
          local_30[3] = 0.0;
          *(float *)((int)local_30 + iVar11) = fVar2;
          local_4c = fVar16;
          fVar16 = local_48;
        }
        local_48 = fVar16;
        if (local_48 < local_4c) {
          iVar11 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
          if (*(uint *)(iVar11 + 0x1a8) <= *(uint *)(iVar11 + 0x1a4)) goto LAB_008ce437;
          puVar12 = *(undefined4 **)(iVar11 + 0x1a4);
          *puVar12 = &DAT_00a9610c;
          uVar3 = rdtsc();
          puVar12[1] = (int)uVar3;
          goto LAB_008ce42e;
        }
      }
      iVar11 = iVar11 + -4;
    } while (-1 < iVar11);
    fVar2 = -1.0;
    uVar9 = uVar13 & 7 | uVar14;
    local_44 = local_44 + -1;
    uVar10 = uVar14;
    if (local_44 < 0) {
      param_3[5] = local_4c;
      iVar11 = *(int *)(unaff_FS_OFFSET + 0x2c);
      *param_3 = local_30[0];
      param_3[1] = local_30[1];
      param_3[2] = local_30[2];
      param_3[3] = local_30[3];
      param_3[4] = -NAN;
      iVar11 = *(int *)(iVar11 + iVar1 * 4);
      if (*(uint *)(iVar11 + 0x1a4) < *(uint *)(iVar11 + 0x1a8)) {
        puVar12 = *(undefined4 **)(iVar11 + 0x1a4);
        *puVar12 = &DAT_00a9610c;
        uVar3 = rdtsc();
        puVar12[1] = (int)uVar3;
        *(undefined4 **)(iVar11 + 0x1a4) = puVar12 + 3;
      }
      *param_1 = 1;
      return;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ce450(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d69f8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a965d4;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba816c = _DAT_00ba816c + -1;
  local_4 = 0xffffffff;
  FUN_008a2550();
  *unaff_FS_OFFSET = local_c;
  return;
}



void thunk_FUN_008a2690(undefined4 *param_1)

{
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    *param_1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 8);
    return;
  }
  *param_1 = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008ce4d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int *piVar4;
  undefined4 local_224;
  undefined1 auStack_220 [524];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_224;
  local_224 = param_1;
  if (in_ECX == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(in_ECX + 8);
  }
  iVar1 = (**(code **)(*piVar4 + 0x20))();
  while( true ) {
    if (iVar1 == -1) {
      return;
    }
    if (((in_ECX == 0) || (*(int **)(in_ECX + 8) == (int *)0x0)) ||
       (iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x28))(iVar1,auStack_220), iVar2 == 0)) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(iVar2 + 8);
    }
    if (in_ECX == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(in_ECX + 8);
    }
    iVar1 = (**(code **)(*piVar3 + 0x24))(iVar1);
    if (piVar4 == (int *)0x0) break;
    (**(code **)(*piVar4 + 0x90))(local_224);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_008ce580(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  char cVar5;
  undefined4 local_224;
  undefined1 auStack_220 [524];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_224;
  local_224 = param_1;
  cVar1 = FUN_008a2760(param_1);
  cVar5 = cVar1;
  if (cVar1 != '\0') {
    if (in_ECX == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(in_ECX + 8);
    }
    iVar2 = (**(code **)(*piVar4 + 0x20))();
    while ((cVar5 = cVar1, iVar2 != -1 && (cVar5 = '\0', cVar1 != '\0'))) {
      if ((in_ECX == 0) ||
         ((*(int **)(in_ECX + 8) == (int *)0x0 ||
          (iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x28))(iVar2,auStack_220), iVar3 == 0)))) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = *(int **)(iVar3 + 8);
      }
      if (piVar4 != (int *)0x0) {
        cVar1 = (**(code **)(*piVar4 + 0x8c))(local_224);
      }
      if (in_ECX == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = *(int **)(in_ECX + 8);
      }
      iVar2 = (**(code **)(*piVar4 + 0x24))(iVar2);
    }
  }
  return cVar5;
}



void FUN_008ce640(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_008a2a50(param_1);
  param_1 = FUN_0070f910(DAT_00ba8170);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined1 * FUN_008ce690(undefined1 *param_1,float *param_2,float *param_3)

{
  if ((param_2[9] == 1.4013e-45) && (param_3[9] != 1.4013e-45)) {
    if (0.0 < param_2[6] * (param_2[2] - param_3[2]) +
              param_2[5] * (param_2[1] - param_3[1]) + param_2[4] * (*param_2 - *param_3)) {
      *param_1 = 1;
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}



void FUN_008ce720(void)

{
  int in_ECX;
  int iVar1;
  
  if (0 < *(int *)(in_ECX + 0x1a8)) {
    iVar1 = 0;
    do {
      FUN_008bc730();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x1a8));
  }
  *(undefined4 *)(in_ECX + 0x1a8) = 0;
  *(undefined4 *)(in_ECX + 0x1c0) = 0;
  *(undefined4 *)(in_ECX + 0x1b4) = 0;
  return;
}



void FUN_008ce770(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 local_19;
  int local_18;
  int local_14;
  
  local_14 = *(int *)(in_ECX + 0x14) + -1;
  if (0 < local_14) {
    iVar10 = local_14 * 0x30;
    do {
      bVar12 = local_14 != 1;
      local_18 = local_14 + -1;
      local_14 = local_18;
      if (bVar12) {
        iVar9 = iVar10 + -0x30;
        do {
          local_18 = local_18 + -1;
          iVar9 = iVar9 + -0x30;
          pcVar7 = (char *)FUN_008ce690(&local_19,*(int *)(in_ECX + 0x10) + iVar9,
                                        iVar10 + *(int *)(in_ECX + 0x10));
          if (*pcVar7 != '\0') {
            *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + -1;
            iVar9 = *(int *)(in_ECX + 0x10);
            iVar11 = *(int *)(in_ECX + 0x14) * 0x30;
            puVar1 = (undefined4 *)(iVar11 + iVar9);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            iVar11 = iVar11 + iVar9;
            puVar2 = (undefined4 *)(iVar10 + iVar9);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar2[2] = uVar5;
            puVar2[3] = uVar6;
            uVar4 = *(undefined4 *)(iVar11 + 0x14);
            uVar5 = *(undefined4 *)(iVar11 + 0x18);
            uVar6 = *(undefined4 *)(iVar11 + 0x1c);
            puVar1 = (undefined4 *)(iVar10 + 0x10 + iVar9);
            *puVar1 = *(undefined4 *)(iVar11 + 0x10);
            puVar1[1] = uVar4;
            puVar1[2] = uVar5;
            puVar1[3] = uVar6;
            *(undefined4 *)(iVar10 + 0x20 + iVar9) = *(undefined4 *)(iVar11 + 0x20);
            *(undefined4 *)(iVar10 + 0x24 + iVar9) = *(undefined4 *)(iVar11 + 0x24);
            *(undefined4 *)(iVar10 + 0x28 + iVar9) = *(undefined4 *)(iVar11 + 0x28);
            *(undefined4 *)(iVar10 + 0x2c + iVar9) = *(undefined4 *)(iVar11 + 0x2c);
            break;
          }
        } while (local_18 != 0);
      }
      iVar10 = iVar10 + -0x30;
    } while (0 < local_14);
  }
  if ((*(int *)(in_ECX + 0x1a0) != 0) &&
     (local_18 = *(int *)(*(int *)(in_ECX + 0x1a0) + 0x14), local_18 != 0)) {
    local_14 = local_18 * 0x30;
    do {
      iVar10 = *(int *)(in_ECX + 0x14);
      local_18 = local_18 + -1;
      local_14 = local_14 + -0x30;
      if (iVar10 != 0) {
        iVar9 = iVar10 * 0x30;
        do {
          iVar11 = iVar9 + -0x30;
          iVar10 = iVar10 + -1;
          pcVar7 = (char *)FUN_008ce690(&local_19,
                                        *(int *)(*(int *)(in_ECX + 0x1a0) + 0x10) + local_14,
                                        *(int *)(in_ECX + 0x10) + iVar11);
          if (*pcVar7 != '\0') {
            *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + -1;
            iVar3 = *(int *)(in_ECX + 0x10);
            iVar8 = *(int *)(in_ECX + 0x14) * 0x30;
            puVar1 = (undefined4 *)(iVar8 + iVar3);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            iVar8 = iVar8 + iVar3;
            puVar2 = (undefined4 *)(iVar11 + iVar3);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar2[2] = uVar5;
            puVar2[3] = uVar6;
            uVar4 = *(undefined4 *)(iVar8 + 0x14);
            uVar5 = *(undefined4 *)(iVar8 + 0x18);
            uVar6 = *(undefined4 *)(iVar8 + 0x1c);
            puVar1 = (undefined4 *)(iVar9 + -0x20 + iVar3);
            *puVar1 = *(undefined4 *)(iVar8 + 0x10);
            puVar1[1] = uVar4;
            puVar1[2] = uVar5;
            puVar1[3] = uVar6;
            *(undefined4 *)(iVar9 + -0x10 + iVar3) = *(undefined4 *)(iVar8 + 0x20);
            *(undefined4 *)(iVar9 + -0xc + iVar3) = *(undefined4 *)(iVar8 + 0x24);
            *(undefined4 *)(iVar9 + -8 + iVar3) = *(undefined4 *)(iVar8 + 0x28);
            *(undefined4 *)(iVar9 + -4 + iVar3) = *(undefined4 *)(iVar8 + 0x2c);
          }
          iVar9 = iVar11;
        } while (iVar10 != 0);
      }
    } while (local_18 != 0);
  }
  return;
}



void FUN_008ce8f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  int iVar10;
  
  iVar9 = 0;
  *(undefined4 *)(in_ECX + 4) = 0x7f7fffff;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  if ((DAT_00ba7a50 != (code *)0x0) && (iVar10 = 0, 0 < *(int *)(in_ECX + 0x1b4))) {
    do {
      uVar7 = *(uint *)(*(int *)(*(int *)(in_ECX + 0x1a4) + iVar10 * 4) + 0x30) & 0x3f;
      if ((uVar7 == 0xe) || (uVar7 == 0x10)) {
        iVar3 = *(int *)(*(int *)(in_ECX + 0x1b0) + iVar10 * 4);
        if (iVar3 == 0) {
          iVar8 = *(int *)(in_ECX + 0x1bc);
        }
        else {
          if (iVar3 != 1) goto LAB_008ce96c;
          iVar8 = *(int *)(in_ECX + 0x1bc);
        }
        (*DAT_00ba7a50)(iVar8 + iVar9,iVar3);
      }
LAB_008ce96c:
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 0x30;
    } while (iVar10 < *(int *)(in_ECX + 0x1b4));
  }
  iVar9 = *(int *)(in_ECX + 0x1b4) + -1;
  if (-1 < iVar9) {
    iVar10 = iVar9 * 0x30;
    do {
      if (*(int *)(*(int *)(in_ECX + 0x1b0) + iVar9 * 4) == 1) {
        FUN_008bc730();
        *(int *)(in_ECX + 0x1a8) = *(int *)(in_ECX + 0x1a8) + -1;
        *(undefined4 *)(*(int *)(in_ECX + 0x1a4) + iVar9 * 4) =
             *(undefined4 *)(*(int *)(in_ECX + 0x1a4) + *(int *)(in_ECX + 0x1a8) * 4);
        *(int *)(in_ECX + 0x1c0) = *(int *)(in_ECX + 0x1c0) + -1;
        iVar3 = *(int *)(in_ECX + 0x1bc);
        iVar8 = *(int *)(in_ECX + 0x1c0) * 0x30;
        puVar1 = (undefined4 *)(iVar8 + iVar3);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        iVar8 = iVar8 + iVar3;
        puVar2 = (undefined4 *)(iVar10 + iVar3);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        uVar4 = *(undefined4 *)(iVar8 + 0x14);
        uVar5 = *(undefined4 *)(iVar8 + 0x18);
        uVar6 = *(undefined4 *)(iVar8 + 0x1c);
        puVar1 = (undefined4 *)(iVar10 + 0x10 + iVar3);
        *puVar1 = *(undefined4 *)(iVar8 + 0x10);
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        *(undefined4 *)(iVar10 + 0x20 + iVar3) = *(undefined4 *)(iVar8 + 0x20);
        *(undefined4 *)(iVar10 + 0x24 + iVar3) = *(undefined4 *)(iVar8 + 0x24);
        *(undefined4 *)(iVar10 + 0x28 + iVar3) = *(undefined4 *)(iVar8 + 0x28);
        *(undefined4 *)(iVar10 + 0x2c + iVar3) = *(undefined4 *)(iVar8 + 0x2c);
        *(int *)(in_ECX + 0x1b4) = *(int *)(in_ECX + 0x1b4) + -1;
        *(undefined4 *)(*(int *)(in_ECX + 0x1b0) + iVar9 * 4) =
             *(undefined4 *)(*(int *)(in_ECX + 0x1b0) + *(int *)(in_ECX + 0x1b4) * 4);
      }
      else {
        *(undefined4 *)(*(int *)(in_ECX + 0x1b0) + iVar9 * 4) = 1;
      }
      iVar9 = iVar9 + -1;
      iVar10 = iVar10 + -0x30;
    } while (-1 < iVar9);
  }
  return;
}



void FUN_008cea50(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[6] = 0x80000008;
  in_ECX[4] = in_ECX + 8;
  in_ECX[1] = 0x7f7fffff;
  in_ECX[0x68] = param_1;
  in_ECX[5] = 0;
  *in_ECX = &PTR_FUN_00a99dd8;
  in_ECX[0x69] = 0;
  in_ECX[0x6b] = 0x80000000;
  in_ECX[0x6c] = 0;
  in_ECX[0x6e] = 0x80000000;
  in_ECX[0x6f] = 0;
  in_ECX[0x71] = 0x80000000;
  in_ECX[0x6a] = 0;
  in_ECX[0x70] = 0;
  in_ECX[0x6d] = 0;
  return;
}



void FUN_008ceac0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d7aa2;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a99dd8;
  iVar2 = 0;
  local_4 = 3;
  if (0 < (int)in_ECX[0x6a]) {
    do {
      FUN_008bc730(uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)in_ECX[0x6a]);
  }
  if (-1 < (int)in_ECX[0x6b]) {
    FUN_008a75d0(in_ECX[0x69],in_ECX[0x6b] * 4,0x14);
  }
  in_ECX[0x69] = 0;
  in_ECX[0x6a] = 0;
  in_ECX[0x6b] = in_ECX[0x6b] & 0xc0000000 | 0x80000000;
  if (-1 < (int)in_ECX[0x71]) {
    FUN_008a75d0(in_ECX[0x6f],(in_ECX[0x71] & 0x3fffffff) * 0x30,0x14);
  }
  in_ECX[0x6f] = 0;
  in_ECX[0x70] = 0;
  in_ECX[0x71] = in_ECX[0x71] & 0xc0000000 | 0x80000000;
  if (-1 < (int)in_ECX[0x6e]) {
    FUN_008a75d0(in_ECX[0x6c],in_ECX[0x6e] * 4,0x14);
  }
  in_ECX[0x6c] = 0;
  in_ECX[0x6d] = 0;
  in_ECX[0x6e] = in_ECX[0x6e] & 0xc0000000 | 0x80000000;
  local_4._0_1_ = 2;
  if (-1 < (int)in_ECX[0x71]) {
    FUN_008a75d0(in_ECX[0x6f],(in_ECX[0x71] & 0x3fffffff) * 0x30,0x14);
  }
  local_4._0_1_ = 1;
  if (-1 < (int)in_ECX[0x6e]) {
    FUN_008a75d0(in_ECX[0x6c],in_ECX[0x6e] * 4,0x14);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (-1 < (int)in_ECX[0x6b]) {
    FUN_008a75d0(in_ECX[0x69],in_ECX[0x6b] * 4,0x14);
  }
  local_4 = 0xffffffff;
  FUN_005322e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008ced20(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  int *piVar8;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_74 [8];
  float local_6c;
  int local_68;
  int local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_2c;
  undefined4 local_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_74;
  iVar9 = param_1[9];
  for (iVar6 = *(int *)(param_1[9] + 0xc); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
    iVar9 = iVar6;
  }
  piVar10 = (int *)(in_ECX + 0x1a4);
  iVar9 = *(int *)(iVar9 + 0x10) + iVar9;
  iVar6 = 0;
  local_6c = (float)iVar9;
  local_68 = in_ECX;
  if (0 < *(int *)(in_ECX + 0x1a8)) {
    piVar8 = (int *)*piVar10;
    do {
      if (*piVar8 == iVar9) {
        if (iVar6 != -1) {
          if (*(int *)(*(int *)(in_ECX + 0x1b0) + iVar6 * 4) == 1) {
            *(undefined4 *)(*(int *)(in_ECX + 0x1b0) + iVar6 * 4) = 2;
          }
          goto LAB_008ceec2;
        }
        break;
      }
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0x1a8));
  }
  FUN_008bc720();
  if (*(uint *)(in_ECX + 0x1a8) == (*(uint *)(in_ECX + 0x1ac) & 0x3fffffff)) {
    FUN_008a6ee0(piVar10,4);
  }
  iVar5 = local_68;
  *(int *)(*piVar10 + *(int *)(in_ECX + 0x1a8) * 4) = iVar9;
  *(int *)(in_ECX + 0x1a8) = *(int *)(in_ECX + 0x1a8) + 1;
  iVar9 = param_1[8];
  local_50 = *param_1;
  uStack_4c = param_1[1];
  uStack_48 = param_1[2];
  uStack_44 = param_1[3];
  local_40 = param_1[4];
  uStack_3c = param_1[5];
  uStack_38 = param_1[6];
  uStack_34 = param_1[7];
  local_64 = iVar9;
  for (iVar6 = *(int *)(iVar9 + 0xc); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
    local_64 = iVar6;
  }
  local_2c = *(undefined4 *)(iVar9 + 4);
  iVar9 = param_1[9];
  iVar6 = iVar9;
  for (iVar4 = *(int *)(iVar9 + 0xc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
    iVar6 = iVar4;
  }
  local_24 = *(undefined4 *)(iVar9 + 4);
  piVar10 = (int *)(local_68 + 0x1bc);
  if (*(uint *)(local_68 + 0x1c0) == (*(uint *)(local_68 + 0x1c4) & 0x3fffffff)) {
    FUN_008a6ee0(piVar10,0x30);
  }
  iVar4 = local_68;
  iVar9 = *(int *)(iVar5 + 0x1c0);
  *(int *)(iVar5 + 0x1c0) = iVar9 + 1;
  puVar7 = (undefined4 *)(iVar9 * 0x30 + *piVar10);
  puVar7[8] = local_64;
  *puVar7 = local_50;
  puVar7[1] = uStack_4c;
  puVar7[2] = uStack_48;
  puVar7[3] = uStack_44;
  puVar7[9] = local_2c;
  piVar10 = (int *)(local_68 + 0x1b0);
  puVar7[4] = local_40;
  puVar7[5] = uStack_3c;
  puVar7[6] = uStack_38;
  puVar7[7] = uStack_34;
  puVar7[10] = iVar6;
  puVar7[0xb] = local_24;
  if (*(uint *)(local_68 + 0x1b4) == (*(uint *)(local_68 + 0x1b8) & 0x3fffffff)) {
    FUN_008a6ee0(piVar10,4);
  }
  *(undefined4 *)(*piVar10 + *(int *)(iVar4 + 0x1b4) * 4) = 0;
  piVar10 = (int *)(iVar4 + 0x1b4);
  *piVar10 = *piVar10 + 1;
LAB_008ceec2:
  if ((*(char *)((int)local_6c + 0x2c) == '\x01') ||
     (((byte)*(undefined4 *)((int)local_6c + 0x30) & 0x3f) == 0x14)) {
    if (*(uint *)(local_68 + 0x14) == (*(uint *)(local_68 + 0x18) & 0x3fffffff)) {
      FUN_008a6ee0((int *)(local_68 + 0x10),0x30);
    }
    puVar7 = (undefined4 *)(*(int *)(local_68 + 0x14) * 0x30 + *(int *)(local_68 + 0x10));
    *(int *)(local_68 + 0x14) = *(int *)(local_68 + 0x14) + 1;
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    *puVar7 = *param_1;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar1 = param_1[5];
    uVar2 = param_1[6];
    uVar3 = param_1[7];
    puVar7[4] = param_1[4];
    puVar7[5] = uVar1;
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    iVar9 = param_1[8];
    for (iVar6 = *(int *)(param_1[8] + 0xc); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
      iVar9 = iVar6;
    }
    puVar7[8] = iVar9;
    iVar9 = param_1[9];
    for (iVar6 = *(int *)(param_1[9] + 0xc); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
      iVar9 = iVar6;
    }
    puVar7[10] = iVar9;
    puVar7[9] = 0;
    puVar7[0xb] = *(undefined4 *)(param_1[9] + 4);
    fVar11 = (float10)FUN_00986000();
    local_6c = (float)fVar11;
    iVar9 = (**(code **)(**(int **)param_1[9] + 8))();
    if (iVar9 == 6) {
      puVar7[9] = 2;
      iVar6 = *(int *)param_1[9];
      fVar12 = *(float *)(iVar6 + 0x20) - *(float *)(iVar6 + 0x10);
      fVar13 = *(float *)(iVar6 + 0x24) - *(float *)(iVar6 + 0x14);
      fVar14 = *(float *)(iVar6 + 0x28) - *(float *)(iVar6 + 0x18);
      fVar15 = *(float *)(iVar6 + 0x2c) - *(float *)(iVar6 + 0x1c);
      fVar16 = *(float *)(iVar6 + 0x30) - *(float *)(iVar6 + 0x20);
      fVar17 = *(float *)(iVar6 + 0x34) - *(float *)(iVar6 + 0x24);
      fVar18 = *(float *)(iVar6 + 0x38) - *(float *)(iVar6 + 0x28);
      fVar19 = *(float *)(iVar6 + 0x3c) - *(float *)(iVar6 + 0x2c);
      fStack_60 = fVar18 * fVar13 - fVar17 * fVar14;
      fStack_5c = fVar16 * fVar14 - fVar18 * fVar12;
      fStack_58 = fVar17 * fVar12 - fVar16 * fVar13;
      fVar13 = fStack_58 * fStack_58;
      fVar12 = fVar13 + fStack_5c * fStack_5c + fStack_60 * fStack_60;
      auVar20._4_4_ = fVar13;
      auVar20._0_4_ = fVar12;
      auVar20._8_4_ = fVar13;
      auVar20._12_4_ = fVar13;
      auVar20 = rsqrtss(auVar20,auVar20);
      fVar13 = auVar20._0_4_;
      fStack_54 = fVar13 * 0.5 * (3.0 - fVar12 * fVar13 * fVar13);
      fStack_60 = fStack_54 * fStack_60;
      fStack_5c = fStack_54 * fStack_5c;
      fStack_58 = fStack_54 * fStack_58;
      fStack_54 = fStack_54 * (fVar19 * fVar15 - fVar19 * fVar15);
      FUN_0088fe00(((int *)param_1[9])[2],&fStack_60);
      fVar12 = fStack_5c;
      fVar13 = fStack_58;
      if ((float)puVar7[6] * fStack_58 + (float)puVar7[5] * fStack_5c + (float)puVar7[4] * fStack_60
          < 0.0) {
        fStack_60 = -fStack_60;
        fVar12 = -fStack_5c;
        fVar13 = -fStack_58;
      }
      fStack_60 = (float)puVar7[6] * fVar13 +
                  (float)puVar7[5] * fVar12 + (float)puVar7[4] * fStack_60;
      if (local_6c < fStack_60) {
        puVar7[9] = 1;
      }
    }
    (**(code **)(**(int **)param_1[8] + 8))();
    if (iVar9 == 6) {
      FUN_008ce770();
    }
  }
  return;
}



void FUN_008cf0f0(byte param_1)

{
  FUN_008ceac0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008cf190(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_b8 [4];
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  int local_a0 [4];
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_b8;
  local_a0[0] = param_1[0xc4];
  local_90 = param_1[0xb0];
  iStack_8c = param_1[0xb1];
  iStack_88 = param_1[0xb2];
  iStack_84 = param_1[0xb3];
  local_50 = param_1[0xa5];
  local_60 = param_1[0xb8];
  iStack_5c = param_1[0xb9];
  iStack_58 = param_1[0xba];
  iStack_54 = param_1[0xbb];
  local_4c = param_1[0xa4];
  pfVar1 = (float *)(param_1 + 0xb8);
  local_48 = param_1[0xa6];
  local_80 = param_1[0xac];
  iStack_7c = param_1[0xad];
  iStack_78 = param_1[0xae];
  iStack_74 = param_1[0xaf];
  local_44 = 0;
  local_30 = param_1[0xa0];
  iStack_2c = param_1[0xa1];
  iStack_28 = param_1[0xa2];
  iStack_24 = param_1[0xa3];
  local_40 = 0x41a00000;
  local_70 = local_80;
  iStack_6c = iStack_7c;
  iStack_68 = iStack_78;
  iStack_64 = iStack_74;
  if (((uint)param_1[0x7d] >> 8 & 1) != 0) {
    local_70 = param_1[0x8c];
    iStack_6c = param_1[0x8d];
    iStack_68 = param_1[0x8e];
    iStack_64 = param_1[0x8f];
  }
  FUN_0091f430(local_a0,pfVar1);
  local_b4 = (float)param_1[0xd2] * 0.9;
  if (param_1[2] == 0) {
    puVar4 = &DAT_00ba7a40;
  }
  else {
    puVar4 = (undefined4 *)FUN_008ac070();
  }
  if ((float)param_1[0xc6] < (float)puVar4[2] + local_b4) {
    if (0.0 < (float)param_1[0xba]) {
      param_1[0xba] = 0;
    }
    (**(code **)(*param_1 + 0x58))();
    iVar5 = (**(code **)(*param_1 + 0x58))();
    fStack_b0 = *(float *)(iVar5 + 0x20);
    fStack_ac = *(float *)(iVar5 + 0x24);
    fStack_a8 = *(float *)(iVar5 + 0x28);
    fStack_a4 = *(float *)(iVar5 + 0x2c);
    (**(code **)(*param_1 + 0x58))();
    fVar2 = (float)param_1[0xca];
    fVar3 = (float)param_1[0xb6];
    *pfVar1 = fVar2 * fStack_b0 * fVar3 + *pfVar1;
    param_1[0xb9] = (int)(fVar2 * fStack_ac * fVar3 + (float)param_1[0xb9]);
    param_1[0xba] = (int)(fVar2 * fStack_a8 * fVar3 + (float)param_1[0xba]);
    param_1[0xbb] = (int)(fVar2 * fStack_a4 * fVar3 + (float)param_1[0xbb]);
  }
  if ((param_1[0xa8] != 0xb) && (param_1[0xa8] == 0)) {
    FUN_00890720();
    (**(code **)(*param_1 + 0x58))();
    iVar5 = (**(code **)(*param_1 + 0x58))();
    fStack_b0 = *(float *)(iVar5 + 0x20);
    fStack_ac = *(float *)(iVar5 + 0x24);
    fStack_a8 = *(float *)(iVar5 + 0x28);
    fStack_a4 = *(float *)(iVar5 + 0x2c);
    (**(code **)(*param_1 + 0x58))();
    fVar2 = (float)param_1[0xca];
    fVar3 = -(float)param_1[0xb6] * 3.0;
    *pfVar1 = fVar2 * fStack_b0 * fVar3 + *pfVar1;
    param_1[0xb9] = (int)(fVar2 * fStack_ac * fVar3 + (float)param_1[0xb9]);
    param_1[0xba] = (int)(fVar2 * fStack_a8 * fVar3 + (float)param_1[0xba]);
    param_1[0xbb] = (int)(fVar2 * fStack_a4 * fVar3 + (float)param_1[0xbb]);
  }
  return;
}



void FUN_008cf3a0(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a99e18;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008cf3b0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_d8 [8];
  float local_d0;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  int local_b0 [2];
  float fStack_a8;
  int local_a0 [4];
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  float local_50;
  int local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_d8;
  pfVar1 = (float *)(param_1 + 0xb8);
  local_90 = param_1[0xb0];
  iStack_8c = param_1[0xb1];
  iStack_88 = param_1[0xb2];
  iStack_84 = param_1[0xb3];
  local_80 = param_1[0xac];
  iStack_7c = param_1[0xad];
  iStack_78 = param_1[0xae];
  iStack_74 = param_1[0xaf];
  local_70 = local_80;
  iStack_6c = iStack_7c;
  iStack_68 = iStack_78;
  iStack_64 = iStack_74;
  if (-1e+08 <= (float)param_1[0xb8]) {
    local_60 = *pfVar1;
    fStack_5c = (float)param_1[0xb9];
    fStack_58 = (float)param_1[0xba];
    iStack_54 = param_1[0xbb];
    local_a0[0] = param_1[0xc4];
    local_d0 = (float)param_1[0xa6];
    local_b0[0] = param_1[0xa4];
    local_c0 = (float)param_1[0xa5];
    local_30 = param_1[0xa0];
    iStack_2c = param_1[0xa1];
    iStack_28 = param_1[0xa2];
    iStack_24 = param_1[0xa3];
    local_44 = 0;
    local_40 = 0x47c35000;
    local_50 = local_c0;
    local_4c = local_b0[0];
    local_48 = local_d0;
    FUN_0091f430(local_a0,pfVar1);
    local_c0 = (float)param_1[0xae] * (float)param_1[0xba] +
               (float)param_1[0xad] * (float)param_1[0xb9] + (float)param_1[0xac] * *pfVar1;
    fVar4 = -0.0 - local_c0;
    *pfVar1 = fVar4 * (float)param_1[0xac] + *pfVar1;
    param_1[0xb9] = (int)(fVar4 * (float)param_1[0xad] + (float)param_1[0xb9]);
    param_1[0xba] = (int)(fVar4 * (float)param_1[0xae] + (float)param_1[0xba]);
    param_1[0xbb] = (int)(fVar4 * (float)param_1[0xaf] + (float)param_1[0xbb]);
    fVar4 = (float)param_1[0xae] * fStack_58 +
            (float)param_1[0xad] * fStack_5c + (float)param_1[0xac] * local_60;
    *pfVar1 = fVar4 * (float)param_1[0xac] + *pfVar1;
    param_1[0xb9] = (int)(fVar4 * (float)param_1[0xad] + (float)param_1[0xb9]);
    param_1[0xba] = (int)(fVar4 * (float)param_1[0xae] + (float)param_1[0xba]);
    param_1[0xbb] = (int)(fVar4 * (float)param_1[0xaf] + (float)param_1[0xbb]);
    fVar4 = (float)param_1[0xc9];
    *pfVar1 = fVar4 * *pfVar1;
    param_1[0xb9] = (int)(fVar4 * (float)param_1[0xb9]);
    param_1[0xba] = (int)(fVar4 * (float)param_1[0xba]);
    param_1[0xbb] = (int)(fVar4 * (float)param_1[0xbb]);
    FUN_00891440(local_b0);
    local_c0 = fStack_a8;
    if ((float)param_1[0xc6] < fStack_a8) {
      (**(code **)(*param_1 + 0x58))();
      iVar3 = (**(code **)(*param_1 + 0x58))();
      local_c0 = *(float *)(iVar3 + 0x20);
      fStack_bc = *(float *)(iVar3 + 0x24);
      fStack_b8 = *(float *)(iVar3 + 0x28);
      fStack_b4 = *(float *)(iVar3 + 0x2c);
      (**(code **)(*param_1 + 0x58))();
      fVar4 = (float)param_1[0xca];
      fVar2 = (float)param_1[0xb6];
      *pfVar1 = fVar4 * local_c0 * fVar2 + *pfVar1;
      param_1[0xb9] = (int)(fVar4 * fStack_bc * fVar2 + (float)param_1[0xb9]);
      param_1[0xba] = (int)(fVar4 * fStack_b8 * fVar2 + (float)param_1[0xba]);
      param_1[0xbb] = (int)(fVar4 * fStack_b4 * fVar2 + (float)param_1[0xbb]);
    }
  }
  else {
    *pfVar1 = 0.0;
    local_60 = *pfVar1;
    fStack_5c = (float)param_1[0xb9];
    fStack_58 = (float)param_1[0xba];
    iStack_54 = param_1[0xbb];
    local_a0[0] = 0x3f800000;
    local_c0 = (float)param_1[0xa6];
    local_b0[0] = param_1[0xa4];
    local_d0 = (float)param_1[0xa5];
    local_30 = param_1[0xa0];
    iStack_2c = param_1[0xa1];
    iStack_28 = param_1[0xa2];
    iStack_24 = param_1[0xa3];
    local_44 = 0;
    local_40 = 0x47c35000;
    local_50 = local_d0;
    local_4c = local_b0[0];
    local_48 = local_c0;
    FUN_0091f430(local_a0,pfVar1);
  }
  if (param_1[0xa8] != 0xb) {
    FUN_00890720();
  }
  return;
}



void FUN_008cf6c0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0x44fa0000;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a99e48;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008cf6e0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  float fVar7;
  int local_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0 [4];
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  float local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_c4;
  if (((uint)param_1[0x7d] >> 8 & 1) != 0) {
    param_1[0xa8] = 0;
    if ((float)param_1[200] == 0.0) {
      param_1[0x7d] = param_1[0x7d] & 0xffffff7f;
    }
    else {
      param_1[0x7d] = param_1[0x7d] | 0x80;
    }
  }
  bVar3 = false;
  local_c4 = in_ECX;
  if ((0.05 <= (float)param_1[0xc9]) || (bVar4 = false, 0.0 <= (float)param_1[0xba])) {
    fVar7 = (float)param_1[0xc4];
    if (NAN(fVar7) || 1.0 < fVar7 == (fVar7 == 1.0)) goto LAB_008cf7d4;
    local_c0 = (float)param_1[0xd2];
    fStack_bc = local_c0;
    fStack_b8 = local_c0;
    fStack_b4 = local_c0;
    if (param_1[2] == 0) {
      puVar5 = &DAT_00ba7a40;
    }
    else {
      puVar5 = (undefined4 *)FUN_008ac070();
    }
    local_c0 = (float)puVar5[2] - local_c0;
    if ((float)param_1[0xc6] <= local_c0) goto LAB_008cf7d4;
    bVar4 = true;
  }
  bVar3 = bVar4;
  param_1[0x7d] = param_1[0x7d] | 0x400;
LAB_008cf7d4:
  if (param_1[0xa8] != 0xb) {
    if (param_1[0xa8] != 1) {
      param_1[0xc9] = 0;
      FUN_00890720();
      return;
    }
    if (((((uint)param_1[0x7d] >> 10 & 1) != 0) && (FUN_00890720(), bVar3)) &&
       (local_c0 = (float)param_1[0xba], local_c0 < 0.0)) {
      param_1[0xba] = 0;
    }
    param_1[0xa8] = 0xb;
  }
  if (0.0 < (float)param_1[0xc4]) {
    if ((param_1[0x7d] & 0x1800U) == 0) {
      local_a0[0] = _DAT_00b2e76c * (float)param_1[0xc4] + _DAT_00ba7a60;
    }
    else {
      local_a0[0] = 1.0;
    }
    local_90 = param_1[0xb0];
    iStack_8c = param_1[0xb1];
    iStack_88 = param_1[0xb2];
    iStack_84 = param_1[0xb3];
    local_40 = *(undefined4 *)(local_c4 + 8);
    local_80 = param_1[0xac];
    iStack_7c = param_1[0xad];
    iStack_78 = param_1[0xae];
    iStack_74 = param_1[0xaf];
    local_30 = param_1[0xa0];
    iStack_2c = param_1[0xa1];
    iStack_28 = param_1[0xa2];
    iStack_24 = param_1[0xa3];
    local_60 = (float)param_1[0xb8];
    fStack_5c = (float)param_1[0xb9];
    fStack_58 = (float)param_1[0xba];
    iStack_54 = param_1[0xbb];
    pfVar1 = (float *)(param_1 + 0xb8);
    local_b0 = (float)param_1[0xa4];
    local_c0 = (float)param_1[0xa5];
    local_48 = 0;
    local_44 = 0;
    local_70 = local_80;
    iStack_6c = iStack_7c;
    iStack_68 = iStack_78;
    iStack_64 = iStack_74;
    local_50 = local_c0;
    local_4c = (int)local_b0;
    FUN_0091f430(local_a0,pfVar1);
    local_b0 = (float)param_1[0xba] * (float)param_1[0xae] +
               (float)param_1[0xb9] * (float)param_1[0xad] + *pfVar1 * (float)param_1[0xac];
    fVar7 = -0.0 - local_b0;
    *pfVar1 = fVar7 * (float)param_1[0xac] + *pfVar1;
    param_1[0xb9] = (int)(fVar7 * (float)param_1[0xad] + (float)param_1[0xb9]);
    param_1[0xba] = (int)(fVar7 * (float)param_1[0xae] + (float)param_1[0xba]);
    param_1[0xbb] = (int)(fVar7 * (float)param_1[0xaf] + (float)param_1[0xbb]);
    fVar7 = (float)param_1[0xae] * fStack_58 +
            (float)param_1[0xad] * fStack_5c + (float)param_1[0xac] * local_60;
    *pfVar1 = fVar7 * (float)param_1[0xac] + *pfVar1;
    param_1[0xb9] = (int)(fVar7 * (float)param_1[0xad] + (float)param_1[0xb9]);
    param_1[0xba] = (int)(fVar7 * (float)param_1[0xae] + (float)param_1[0xba]);
    param_1[0xbb] = (int)(fVar7 * (float)param_1[0xaf] + (float)param_1[0xbb]);
  }
  (**(code **)(*param_1 + 0x58))();
  iVar6 = (**(code **)(*param_1 + 0x58))();
  local_b0 = *(float *)(iVar6 + 0x20);
  fStack_ac = *(float *)(iVar6 + 0x24);
  fStack_a8 = *(float *)(iVar6 + 0x28);
  fStack_a4 = *(float *)(iVar6 + 0x2c);
  (**(code **)(*param_1 + 0x58))();
  fVar7 = (float)param_1[0xca];
  fVar2 = (float)param_1[0xb6];
  param_1[0xb8] = (int)(fVar7 * local_b0 * fVar2 + (float)param_1[0xb8]);
  param_1[0xb9] = (int)(fVar7 * fStack_ac * fVar2 + (float)param_1[0xb9]);
  param_1[0xba] = (int)(fVar7 * fStack_a8 * fVar2 + (float)param_1[0xba]);
  param_1[0xbb] = (int)(fVar7 * fStack_a4 * fVar2 + (float)param_1[0xbb]);
  FUN_00890740();
  return;
}



void FUN_008cfa40(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a99e74;
  return;
}



void FUN_008cfa50(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008cfa80(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_5c [8];
  float fStack_54;
  float fStack_50;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_5c;
  iVar3 = param_1[0xa8];
  if ((iVar3 != 0xb) && ((iVar3 == 0 || (iVar3 == 3)))) {
    FUN_00890720();
    return;
  }
  param_1[0x7d] = param_1[0x7d] | 0x2000;
  (**(code **)(*param_1 + 0x58))();
  iVar3 = (**(code **)(*param_1 + 0x58))();
  fStack_40 = *(float *)(iVar3 + 0x20);
  fStack_3c = *(float *)(iVar3 + 0x24);
  fStack_38 = *(float *)(iVar3 + 0x28);
  fStack_34 = *(float *)(iVar3 + 0x2c);
  (**(code **)(*param_1 + 0x58))();
  fVar8 = (float)param_1[0xca];
  fStack_40 = fVar8 * fStack_40;
  fStack_3c = fVar8 * fStack_3c;
  fStack_38 = fVar8 * fStack_38;
  fStack_34 = fVar8 * fStack_34;
  fVar8 = fStack_38 * fStack_38;
  fStack_50 = fVar8 + fStack_3c * fStack_3c + fStack_40 * fStack_40;
  auVar9._4_4_ = fVar8;
  auVar9._0_4_ = fStack_50;
  auVar9._8_4_ = fVar8;
  auVar9._12_4_ = fVar8;
  auVar9 = rsqrtss(auVar9,auVar9);
  fVar8 = auVar9._0_4_;
  fStack_30 = fVar8 * 0.5 * (3.0 - fStack_50 * fVar8 * fVar8);
  fStack_50 = fStack_50 * fStack_30;
  fStack_54 = (fStack_50 + fStack_50) * ABS((float)param_1[199]);
  fStack_2c = fStack_30;
  fStack_28 = fStack_30;
  fStack_24 = fStack_30;
  fVar6 = (float10)FUN_00982c30();
  fStack_54 = (float)fVar6;
  fVar7 = -0.0 - fStack_54;
  fStack_40 = fVar7 * fStack_30 * fStack_40;
  fStack_3c = fVar7 * fStack_2c * fStack_3c;
  fVar8 = fVar7 * fStack_28 * fStack_38;
  fStack_34 = fVar7 * fStack_24 * fStack_34;
  if (param_1[2] == 0) {
    pfVar4 = (float *)&DAT_00ba7a40;
  }
  else {
    fStack_38 = fVar8;
    pfVar4 = (float *)FUN_008ac0a0();
    fVar8 = fStack_38;
  }
  fVar7 = *pfVar4;
  fVar1 = pfVar4[1];
  fVar2 = pfVar4[3];
  fStack_38 = 0.0;
  param_1[0xb8] = (int)(fVar7 + fStack_40);
  param_1[0xb9] = (int)(fVar1 + fStack_3c);
  param_1[0xba] = (int)(fVar8 + 0.0);
  param_1[0xbb] = (int)(fVar2 + fStack_34);
  param_1[0xa8] = 2;
  fStack_40 = fVar7;
  fStack_3c = fVar1;
  fStack_34 = fVar2;
  FUN_00890720();
  param_1[0x7d] = param_1[0x7d] & 0xfffdfeff;
  piVar5 = (int *)FUN_008ba170(param_1[0x7b]);
  (**(code **)(*piVar5 + 0x18))(param_1);
  return;
}



void FUN_008cfc60(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a99ea0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008cfc70(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  undefined1 auStack_d8 [4];
  float local_d4;
  int local_d0;
  float local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 local_a0 [4];
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_d8;
  local_a0[0] = 0x3f800000;
  local_90 = param_1[0xb0];
  iStack_8c = param_1[0xb1];
  iStack_88 = param_1[0xb2];
  iStack_84 = param_1[0xb3];
  local_80 = param_1[0xac];
  iStack_7c = param_1[0xad];
  iStack_78 = param_1[0xae];
  iStack_74 = param_1[0xaf];
  local_60 = (float)param_1[0xb8];
  fStack_5c = (float)param_1[0xb9];
  fStack_58 = (float)param_1[0xba];
  iStack_54 = param_1[0xbb];
  local_c0 = (float)param_1[0xa6];
  pfVar1 = (float *)(param_1 + 0xb8);
  local_d0 = param_1[0xa4];
  local_b0 = (float)param_1[0xa5];
  local_30 = param_1[0xa0];
  iStack_2c = param_1[0xa1];
  iStack_28 = param_1[0xa2];
  iStack_24 = param_1[0xa3];
  local_44 = 0;
  local_40 = 0x42c80000;
  local_70 = local_80;
  iStack_6c = iStack_7c;
  iStack_68 = iStack_78;
  iStack_64 = iStack_74;
  if (((uint)param_1[0x7d] >> 8 & 1) != 0) {
    local_70 = param_1[0x8c];
    iStack_6c = param_1[0x8d];
    iStack_68 = param_1[0x8e];
    iStack_64 = param_1[0x8f];
  }
  local_50 = (int)local_b0;
  local_4c = local_d0;
  local_48 = (int)local_c0;
  FUN_0091f430(local_a0,pfVar1);
  if (param_1[2] == 0) {
    puVar4 = &DAT_00ba7a40;
  }
  else {
    puVar4 = (undefined4 *)FUN_008ac070();
  }
  local_c0 = (float)puVar4[2];
  local_d4 = local_c0 - (float)param_1[0xd2];
  fVar6 = (float)param_1[0xce];
  if (!NAN(fVar6) && 0.5 < fVar6 != (fVar6 == 0.5)) {
    local_d4 = (float)param_1[0xcf] * 0.5 * (float)param_1[0xce] + local_d4;
  }
  (**(code **)(*param_1 + 0x58))();
  iVar5 = (**(code **)(*param_1 + 0x58))();
  local_b0 = *(float *)(iVar5 + 0x20);
  fStack_ac = *(float *)(iVar5 + 0x24);
  fStack_a8 = *(float *)(iVar5 + 0x28);
  fStack_a4 = *(float *)(iVar5 + 0x2c);
  (**(code **)(*param_1 + 0x58))();
  if (local_d4 <= (float)param_1[0xc6]) {
    if ((float)param_1[0xce] < 0.5) {
      if ((float)param_1[0xc6] - 5.0 < local_d4) {
        param_1[0x7d] = param_1[0x7d] | 0x400;
      }
      if ((param_1[0xa8] == 1) && (((uint)param_1[0x7d] >> 10 & 1) != 0)) {
        FUN_00890720();
      }
      else if (local_d4 < (float)param_1[0xc6] - 1.4287673) {
        fVar6 = -0.0 - ((float)param_1[0xae] * (float)param_1[0xba] +
                       (float)param_1[0xad] * (float)param_1[0xb9] + (float)param_1[0xac] * *pfVar1)
        ;
        *pfVar1 = fVar6 * (float)param_1[0xac] + *pfVar1;
        param_1[0xb9] = (int)(fVar6 * (float)param_1[0xad] + (float)param_1[0xb9]);
        param_1[0xba] = (int)(fVar6 * (float)param_1[0xae] + (float)param_1[0xba]);
        param_1[0xbb] = (int)(fVar6 * (float)param_1[0xaf] + (float)param_1[0xbb]);
        fVar6 = (float)param_1[0xae] * fStack_58 +
                (float)param_1[0xad] * fStack_5c + (float)param_1[0xac] * local_60;
        *pfVar1 = fVar6 * (float)param_1[0xac] + *pfVar1;
        param_1[0xb9] = (int)(fVar6 * (float)param_1[0xad] + (float)param_1[0xb9]);
        param_1[0xba] = (int)(fVar6 * (float)param_1[0xae] + (float)param_1[0xba]);
        param_1[0xbb] = (int)(fVar6 * (float)param_1[0xaf] + (float)param_1[0xbb]);
        local_c0 = -0.0 - (float)param_1[0xb6];
        uStack_bc = 0;
        uStack_b8 = 0;
        uStack_b4 = 0;
        iVar5 = (**(code **)(*param_1 + 0x58))();
        fVar6 = *(float *)(iVar5 + 0x24);
        fVar2 = *(float *)(iVar5 + 0x28);
        fVar3 = *(float *)(iVar5 + 0x2c);
        *pfVar1 = local_c0 * *(float *)(iVar5 + 0x20) + *pfVar1;
        param_1[0xb9] = (int)(local_c0 * fVar6 + (float)param_1[0xb9]);
        param_1[0xba] = (int)(local_c0 * fVar2 + (float)param_1[0xba]);
        param_1[0xbb] = (int)(local_c0 * fVar3 + (float)param_1[0xbb]);
      }
      goto LAB_008cfff8;
    }
    if ((((float)param_1[0xca] == 1.0) || (((uint)param_1[0x7d] >> 8 & 1) != 0)) ||
       (((uint)param_1[0x7d] >> 9 & 1) != 0)) goto LAB_008cfff8;
    fVar6 = 0.0166;
  }
  else {
    param_1[0x7d] = param_1[0x7d] | 0x400;
    if (param_1[0xa8] == 1) {
      FUN_00890720();
      goto LAB_008cfff8;
    }
    local_c0 = (float)param_1[0xba];
    if (local_c0 <= 0.0) {
      fVar6 = (float)param_1[0xb6];
    }
    else {
      param_1[0xba] = 0;
      fVar6 = (float)param_1[0xb6];
    }
  }
  fVar2 = (float)param_1[0xca];
  *pfVar1 = fVar2 * local_b0 * fVar6 + *pfVar1;
  param_1[0xb9] = (int)(fVar2 * fStack_ac * fVar6 + (float)param_1[0xb9]);
  param_1[0xba] = (int)(fVar2 * fStack_a8 * fVar6 + (float)param_1[0xba]);
  param_1[0xbb] = (int)(fVar2 * fStack_a4 * fVar6 + (float)param_1[0xbb]);
LAB_008cfff8:
  FUN_00890970();
  if (param_1[0xa8] == 0) {
    FUN_00890720();
  }
  return;
}


