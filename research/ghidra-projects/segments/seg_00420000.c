
void FUN_00420050(char param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = FUN_0041e210(0x21);
  if (iVar5 != 0) {
    piVar1 = *(int **)(iVar5 + 0xc);
    while ((piVar1 != (int *)0x0 && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0))) {
      iVar3 = *piVar2;
      bVar4 = false;
      if ((iVar3 != 0) && (0x14 < (int)*(char *)(iVar3 + 0x2f) + *(int *)(iVar3 + 0x30))) {
        bVar4 = true;
      }
      if (((char)piVar2[1] != param_1) || (bVar4)) {
        FUN_0065c620(piVar2);
        FUN_00401f20(piVar2);
        piVar1 = *(int **)(iVar5 + 0xc);
      }
      else {
        piVar1 = (int *)piVar1[1];
      }
    }
  }
  return;
}



uint FUN_004200c0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0041e210(0x21);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    for (piVar2 = *(int **)(iVar1 + 0xc); (piVar2 != (int *)0x0 && ((int *)*piVar2 != (int *)0x0));
        piVar2 = (int *)piVar2[1]) {
      if (*(int *)*piVar2 == param_1) {
        return CONCAT31((int3)((uint)piVar2 >> 8),1);
      }
    }
  }
  return (uint)piVar2 & 0xffffff00;
}



void FUN_00420100(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x18);
  if (iVar2 == 0) {
    iVar3 = FUN_00401f00(0x18,uVar1);
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      local_4 = iVar2;
      iVar2 = FUN_0042a4c0();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar2);
  }
  *(undefined4 *)(iVar2 + 0xc) = *param_1;
  *(undefined4 *)(iVar2 + 0x10) = param_1[1];
  *(undefined4 *)(iVar2 + 0x14) = param_1[2];
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00420190(void)

{
  FUN_0041e210(0x3e);
  return;
}



void FUN_004201a0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    FUN_0041e160(0x3e);
  }
  else {
    iVar2 = FUN_0041e210(0x3e);
    if (iVar2 == 0) {
      iVar2 = FUN_00401f00(0x1c,uVar1);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0042a540(param_1,param_2);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(uVar4);
    }
    else {
      puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
      *(undefined4 *)(iVar2 + 0xc) = *puVar3;
      *(undefined4 *)(iVar2 + 0x10) = puVar3[1];
      *(undefined4 *)(iVar2 + 0x14) = puVar3[2];
      *(int *)(iVar2 + 0x18) = param_2;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00420260(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x3f);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



void FUN_00420280(int param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    FUN_0041e160(0x3f);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_0041e210(0x3f);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0042a5e0();
  }
  local_4 = 0xffffffff;
  *(int *)(iVar2 + 0xc) = param_1;
  FUN_0041e0a0(iVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_00420340(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x3f);
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(iVar1 + 0x10)) & 0xffffff01;
  }
  return 0;
}



void FUN_00420360(char param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x3f);
  if (iVar1 != 0) {
    if (param_1 != '\0') {
      *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) | 1;
      return;
    }
    *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) & 0xfe;
  }
  return;
}



void FUN_00420380(undefined1 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x3f);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x10) = param_1;
  }
  return;
}



int FUN_004203a0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x40);
  if (iVar1 != 0) {
    return iVar1 + 0xc;
  }
  return 0;
}



undefined4 FUN_004203c0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x41);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



void FUN_004203e0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    iVar2 = FUN_0041e210(0x41);
    if (iVar2 == 0) {
      iVar3 = FUN_00401f00(0x10,uVar1);
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        local_4 = iVar2;
        iVar2 = FUN_0042a840();
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(iVar2);
    }
    *(int *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  FUN_0041e160(0x41);
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00420480(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x42);
  if (iVar1 != 0) {
    return iVar1 + 0xc;
  }
  return 0;
}



void FUN_004204a0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x42);
  if (iVar1 != 0) {
    FUN_0041e160(0x42);
  }
  return;
}



undefined4 FUN_004204c0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(5);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



void FUN_004204e0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    FUN_0041e160(5);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_0041e210(5);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0041d9a0();
  }
  local_4 = 0xffffffff;
  *(int *)(iVar2 + 0xc) = param_1;
  FUN_0041e0a0(iVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004205a0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x43);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



void FUN_004205c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    FUN_0041e160(0x43);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_0041e210(0x43);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0042a660();
  }
  local_4 = 0xffffffff;
  *(int *)(iVar2 + 0xc) = param_1;
  FUN_0041e0a0(iVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00420680(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x44);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



void FUN_004206a0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    FUN_0041e160(0x44);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_0041e210(0x44);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0042a680();
  }
  local_4 = 0xffffffff;
  *(int *)(iVar2 + 0xc) = param_1;
  FUN_0041e0a0(iVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00420760(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x24);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



void FUN_00420780(int param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    FUN_0041e160(0x24);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_0041e210(0x24);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0042a6c0();
  }
  local_4 = 0xffffffff;
  *(int *)(iVar2 + 0xc) = param_1;
  FUN_0041e0a0(iVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00420840(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x58);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



void FUN_00420860(int param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    FUN_0041e160(0x58);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_0041e210(0x58);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0042a6a0();
  }
  local_4 = 0xffffffff;
  *(int *)(iVar2 + 0xc) = param_1;
  FUN_0041e0a0(iVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00420920(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x5a);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0xc) = (undefined1)param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0042ab50(param_1);
  }
  local_4 = 0xffffffff;
  FUN_0041e0a0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004209c0(void)

{
  FUN_0041e160(0x5a);
  return;
}



void FUN_004209d0(char param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afadb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == '\0') {
    FUN_0041e160(0x35);
  }
  else if ((*(byte *)(in_ECX + 0xe) & 0x20) == 0) {
    iVar2 = FUN_00401f00(0xc,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00429bf0();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar3);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00420a70(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x10);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



void FUN_00420a90(int param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    FUN_0041e160(0x10);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_0041e210(0x10);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0041da80();
  }
  local_4 = 0xffffffff;
  *(int *)(iVar2 + 0xc) = param_1;
  FUN_0041e0a0(iVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00420b50(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(9);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



void FUN_00420b70(int param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    FUN_0041e160(9);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_0041e210(9);
  if (iVar2 != 0) {
    if (*(undefined4 **)(iVar2 + 0xc) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar2 + 0xc))(1);
    }
    *(int *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0041d9e0();
  }
  local_4 = 0xffffffff;
  *(int *)(iVar2 + 0xc) = param_1;
  FUN_0041e0a0(iVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



float10 FUN_00420c40(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x4c);
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 0xc);
  }
  return (float10)0;
}



void FUN_00420c60(float param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0.0) {
    FUN_0041e160(0x4c);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_0041e210(0x4c);
  if (iVar2 != 0) {
    *(float *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0041da60();
  }
  *(float *)(iVar2 + 0xc) = param_1;
  local_4 = 0xffffffff;
  FUN_0041e0a0(iVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00420d20(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x4d);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



void FUN_00420d40(int param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    FUN_0041e160(0x4d);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_0041e210(0x4d);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0042a820();
  }
  local_4 = 0xffffffff;
  *(int *)(iVar2 + 0xc) = param_1;
  FUN_0041e0a0(iVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00420e00(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x4e);
  if (iVar2 == 0) {
    iVar3 = FUN_00401f00(0x10,uVar1);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      local_4 = iVar2;
      uVar4 = FUN_0042a980();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar4);
  }
  FUN_0042aa70(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00420e90(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x4e);
  if (iVar1 != 0) {
    FUN_0042aff0();
    return;
  }
  return;
}



void FUN_00420eb0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x4e);
  if (iVar1 != 0) {
    FUN_0042afc0();
    return;
  }
  return;
}



undefined4 FUN_00420ed0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0041e210(0x4e);
  if (iVar1 != 0) {
    uVar2 = FUN_0042aae0();
    return uVar2;
  }
  return 0;
}



void FUN_00420ef0(void)

{
  FUN_0041e210(0x23);
  return;
}



void FUN_00420f00(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x23);
  if (iVar1 != 0) {
    FUN_0041e160(0x23);
  }
  return;
}



void FUN_00420f20(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x46);
  if (iVar2 == 0) {
    iVar3 = FUN_00401f00(0x1c,uVar1);
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      local_4 = iVar2;
      iVar2 = FUN_0042a6e0();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar2);
  }
  *(undefined4 *)(iVar2 + 0xc) = param_1;
  *(undefined1 *)(iVar2 + 0x14) = param_3;
  *(undefined4 *)(iVar2 + 0x10) = param_2;
  *(undefined4 *)(iVar2 + 0x18) = param_4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00420fc0(void)

{
  FUN_0041e210(0x51);
  return;
}



undefined4 FUN_00420fd0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x4a);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



void FUN_00420ff0(void)

{
  FUN_0041e160(0x4a);
  return;
}



void FUN_00421000(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x4b);
  local_10 = in_ECX;
  if (iVar2 == 0) {
    local_10 = FUN_00401f00(0x1c,uVar1);
    if (local_10 == 0) {
      iVar2 = 0;
    }
    else {
      local_4 = iVar2;
      iVar2 = FUN_0042a8c0();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar2);
  }
  if (0x23 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    if (*(int *)(iVar2 + 0x10) != 0) {
      (**(code **)(*DAT_00b34d90 + 0x18))
                ("SetSavedAnimation() is being called when there is already a saved animation.");
      *(undefined4 *)(iVar2 + 0x10) = unaff_retaddr;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    *(undefined4 *)(iVar2 + 0x10) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(undefined4 *)(iVar2 + 0x10) = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004210e0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x4b);
  local_10 = in_ECX;
  if (iVar2 == 0) {
    local_10 = FUN_00401f00(0x1c,uVar1);
    if (local_10 == 0) {
      iVar2 = 0;
    }
    else {
      local_4 = iVar2;
      iVar2 = FUN_0042a8c0();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar2);
  }
  if (0x23 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    if (*(int *)(iVar2 + 0x14) != 0) {
      (**(code **)(*DAT_00b34d90 + 0x18))
                (
                "SetSavedAttachedAnimation() is being called when there is already a saved attached animation."
                );
      *(undefined4 *)(iVar2 + 0x14) = unaff_retaddr;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    *(undefined4 *)(iVar2 + 0x14) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(undefined4 *)(iVar2 + 0x14) = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004211c0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x4b);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x14);
  }
  return 0;
}



void FUN_004211e0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x4b);
  local_10 = in_ECX;
  if (iVar2 == 0) {
    local_10 = FUN_00401f00(0x1c,uVar1);
    if (local_10 == 0) {
      iVar2 = 0;
    }
    else {
      local_4 = iVar2;
      iVar2 = FUN_0042a8c0();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar2);
  }
  if (0x23 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    if (*(int *)(iVar2 + 0x18) != 0) {
      (**(code **)(*DAT_00b34d90 + 0x18))
                ("SetSavedHavokData() is being called when there is already saved havok data.");
      *(undefined4 *)(iVar2 + 0x18) = unaff_retaddr;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    *(undefined4 *)(iVar2 + 0x18) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(undefined4 *)(iVar2 + 0x18) = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004212c0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x4b);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x18);
  }
  return 0;
}



void FUN_004212e0(void)

{
  FUN_0041e160(0x4b);
  return;
}



void FUN_004212f0(void)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = FUN_0041e210(0x4b);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
    FUN_00401e40(*(int *)(iVar1 + 0x14));
    puVar2 = (undefined2 *)thunk_FUN_00401aa0(6,1);
    *(undefined2 **)(iVar1 + 0x14) = puVar2;
    *puVar2 = 4;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  return;
}



uint FUN_00421340(int *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uVar11;
  int in_ECX;
  int iVar12;
  char *pcVar13;
  uint unaff_retaddr;
  short sVar14;
  
  FUN_00401020("ExtraDataList::GetSaveSize");
  iVar12 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    iVar12 = 6;
  }
  pcVar13 = (char *)(iVar12 + 2);
  iVar12 = *(int *)(in_ECX + 4);
  do {
    if (iVar12 == 0) {
      if (DAT_00b05bac != '\0') {
        puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
        if (puVar2 != (undefined4 *)0x0) {
          piVar10 = (int *)FUN_0046b250(*puVar2);
          uVar11 = (**(code **)(*piVar10 + 0xd4))
                             (*(undefined4 *)((int)puVar2 + 5),0x18cd,
                              "..\\TES Shared\\ExtraDataList.cpp");
          FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                       ,(uint)pcVar13 & 0xffff,*puVar2,uVar11);
          FUN_00401040();
          return (uint)pcVar13 & 0xffff;
        }
        FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",(uint)pcVar13 & 0xffff,
                     0x18cd,"..\\TES Shared\\ExtraDataList.cpp");
      }
      FUN_00401040();
      return (uint)pcVar13 & 0xffff;
    }
    sVar14 = (short)pcVar13;
    switch(*(undefined1 *)(iVar12 + 4)) {
    case 0x11:
      if (((param_1 != (int *)0x0) && (cVar3 = (**(code **)(*param_1 + 400))(), cVar3 != '\0')) &&
         (param_1 != DAT_00b333c4)) {
        pcVar13 = pcVar13 + 4;
        goto LAB_00421500;
      }
      break;
    case 0x12:
      if ((unaff_retaddr & 0x4000020) != 0) {
        FUN_009832e6(iVar12,0,&PTR_PTR_00b03850,&PTR_PTR_00b03bb8,0);
        sVar5 = FUN_004fa1e0();
        pcVar13 = (char *)(uint)(ushort)(sVar14 + sVar5 + 4);
        goto LAB_00421500;
      }
      break;
    case 0x1e:
      FUN_009832e6(iVar12,0,&PTR_PTR_00b03850,&PTR_PTR_00b03b30,0);
      pcVar13 = pcVar13 + 0x14;
      goto LAB_00421500;
    case 0x1f:
      iVar8 = FUN_009832e6(iVar12,0,&PTR_PTR_00b03850,&PTR_PTR_00b03b9c,0);
      pcVar13 = pcVar13 + 0xe;
      sVar5 = (short)pcVar13;
      if ((0x3f < *(byte *)(DAT_00b33b00 + 0x7c)) &&
         (cVar3 = FUN_00446b80(*(undefined4 *)(*(int *)(iVar8 + 0xc) + 0xc)), cVar3 != '\0')) {
        sVar4 = (**(code **)(**(int **)(iVar8 + 0xc) + 0xdc))();
        sVar4 = sVar4 + 1;
LAB_004214f6:
        pcVar13 = (char *)(uint)(ushort)(sVar5 + sVar4);
      }
      goto LAB_00421500;
    case 0x20:
      if ((unaff_retaddr & 0x40000) != 0) {
        pcVar13 = pcVar13 + 4;
        iVar8 = FUN_009832e6(iVar12,0,&PTR_PTR_00b03850,&PTR_PTR_00b03b78,0);
        if (*(int *)(iVar8 + 0xc) != 0) {
          sVar5 = (**(code **)(**(int **)(iVar8 + 0xc) + 0xdc))();
          pcVar13 = (char *)(uint)(ushort)((short)pcVar13 + sVar5);
        }
        goto LAB_00421500;
      }
      break;
    case 0x21:
      iVar7 = FUN_009832e6(iVar12,0,&PTR_PTR_00b03850,&PTR_PTR_00b03b58,0);
      iVar8 = 0;
      for (piVar10 = *(int **)(iVar7 + 0xc); piVar10 != (int *)0x0; piVar10 = (int *)piVar10[1]) {
        if (*piVar10 != 0) {
          iVar8 = iVar8 + 1;
        }
      }
      pcVar13 = pcVar13 + iVar8 * 5 + 2;
      goto LAB_00421500;
    case 0x22:
    case 0x2b:
    case 0x2d:
    case 0x2e:
    case 0x37:
    case 0x48:
    case 0x53:
      if ((unaff_retaddr & 0x20) != 0) goto switchD_004213ac_caseD_41;
      break;
    case 0x23:
      iVar7 = FUN_009832e6(iVar12,0,&PTR_PTR_00b03850,&PTR_PTR_00b03b14,0);
      iVar8 = 0;
      for (piVar10 = *(int **)(iVar7 + 0xc); piVar10 != (int *)0x0; piVar10 = (int *)piVar10[1]) {
        if (*piVar10 != 0) {
          iVar8 = iVar8 + 1;
        }
      }
      pcVar13 = pcVar13 + iVar8 * 4 + 2;
      goto LAB_00421500;
    case 0x27:
      if ((unaff_retaddr & 0xa0) != 0) {
        pcVar13 = pcVar13 + 4;
        goto LAB_00421500;
      }
      break;
    case 0x28:
      if ((unaff_retaddr & 0x120) != 0) {
        pcVar13 = pcVar13 + 4;
        goto LAB_00421500;
      }
      break;
    case 0x29:
      if ((unaff_retaddr & 0x220) != 0) {
        pcVar13 = pcVar13 + 4;
        goto LAB_00421500;
      }
      break;
    case 0x2a:
      if ((unaff_retaddr & 0x20) != 0) {
        pcVar13 = pcVar13 + 2;
        goto LAB_00421500;
      }
      break;
    case 0x2c:
    case 0x2f:
    case 0x55:
      if ((unaff_retaddr & 0x20) != 0) goto switchD_004213ac_caseD_5a;
      break;
    case 0x31:
      if ((unaff_retaddr & 0x40) != 0) {
        pcVar13 = pcVar13 + 6;
        goto LAB_00421500;
      }
      break;
    case 0x32:
      if ((unaff_retaddr & 0x100000) != 0) {
        FUN_009832e6(iVar12,0,&PTR_PTR_00b03850,&PTR_PTR_00b03ad4,0);
        sVar5 = FUN_0042b4f0();
        pcVar13 = (char *)(uint)(ushort)(sVar14 + sVar5);
        goto LAB_00421500;
      }
      break;
    case 0x33:
      if ((unaff_retaddr & 0x400) != 0) {
        pcVar13 = pcVar13 + 1;
        goto LAB_00421500;
      }
      break;
    case 0x36:
      if ((unaff_retaddr & 0x20) != 0) {
        pcVar13 = pcVar13 + 5;
        goto LAB_00421500;
      }
      break;
    case 0x39:
      if ((unaff_retaddr & 0x200000) != 0) {
        pcVar13 = pcVar13 + 0xc;
        goto LAB_00421500;
      }
      break;
    case 0x3a:
      if ((unaff_retaddr & 0x200000) != 0) {
        iVar8 = FUN_009832e6(iVar12,0,&PTR_PTR_00b03850,&PTR_PTR_00b03af0,0);
        uVar11 = (**(code **)(*(int *)(iVar8 + 0xc) + 8))(0);
        sVar5 = FUN_0068ddc0(uVar11);
        pcVar13 = (char *)(uint)(ushort)(sVar14 + sVar5 + 4);
        goto LAB_00421500;
      }
      break;
    case 0x3d:
      if ((char)unaff_retaddr < '\0') {
        pcVar13 = pcVar13 + 4;
        goto LAB_00421500;
      }
      break;
    case 0x3e:
      if ((unaff_retaddr & 0x4000) != 0) {
        pcVar13 = pcVar13 + 0x10;
        goto LAB_00421500;
      }
      break;
    case 0x41:
    case 0x4f:
    case 0x5c:
switchD_004213ac_caseD_41:
      pcVar13 = pcVar13 + 4;
      goto LAB_00421500;
    case 0x46:
      if ((unaff_retaddr & 0x1000) != 0) {
        FUN_009832e6(iVar12,0,&PTR_PTR_00b03850,&PTR_PTR_00b03aac,0);
        pcVar13 = pcVar13 + 0xd;
        goto LAB_00421500;
      }
      break;
    case 0x4a:
      if ((unaff_retaddr & 0x2000000) != 0) {
        iVar8 = FUN_009832e6(iVar12,0,&PTR_PTR_00b03850,&PTR_PTR_00b03a84,0);
        pcVar6 = *(char **)(iVar8 + 0xc);
        pcVar1 = pcVar6 + 1;
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        pcVar13 = pcVar6 + (int)(pcVar13 + (1 - (int)pcVar1));
        goto LAB_00421500;
      }
      break;
    case 0x4b:
      if ((unaff_retaddr & 0x1000000) != 0) {
        iVar8 = FUN_009832e6(iVar12,0,&PTR_PTR_00b03850,&PTR_PTR_00b03a5c,0);
        sVar4 = FUN_004522f0(*(undefined4 *)(iVar8 + 0x10));
        sVar5 = FUN_004522f0(*(undefined4 *)(iVar8 + 0x14));
        sVar5 = sVar14 + sVar4 + 6 + sVar5;
        sVar4 = FUN_004522f0(*(undefined4 *)(iVar8 + 0x18));
        goto LAB_004214f6;
      }
      break;
    case 0x4e:
      iVar7 = FUN_009832e6(iVar12,0,&PTR_PTR_00b03850,&PTR_PTR_00b03a38,0);
      iVar8 = 0;
      for (piVar10 = *(int **)(iVar7 + 0xc); piVar10 != (int *)0x0; piVar10 = (int *)piVar10[1]) {
        if (*piVar10 != 0) {
          iVar8 = iVar8 + 1;
        }
      }
      pcVar13 = pcVar13 + iVar8 * 10 + 2;
      goto LAB_00421500;
    case 0x52:
      if ((unaff_retaddr & 0x2000) != 0) {
        pcVar13 = pcVar13 + 4;
        goto LAB_00421500;
      }
      break;
    case 0x59:
      iVar8 = FUN_009832e6(iVar12,0,&PTR_PTR_00b03850,&PTR_PTR_00b03a14,0);
      if (*(int *)(iVar8 + 0xc) != 0) {
        sVar5 = FUN_006b86a0();
        pcVar13 = (char *)(uint)(ushort)(sVar14 + sVar5);
        goto LAB_00421500;
      }
      break;
    case 0x5a:
switchD_004213ac_caseD_5a:
      pcVar13 = pcVar13 + 1;
LAB_00421500:
      if (sVar14 == (short)pcVar13) break;
      goto LAB_00421883;
    }
    uVar9 = unaff_retaddr & 0x20;
    if (((((uVar9 != 0) && (*(char *)(iVar12 + 4) == '\x1b')) ||
         ((uVar9 != 0 &&
          ((*(char *)(iVar12 + 4) == '\x1c' ||
           ((uVar9 != 0 &&
            ((*(char *)(iVar12 + 4) == 'G' || ((uVar9 != 0 && (*(char *)(iVar12 + 4) == 'P')))))))))
          ))) || (((unaff_retaddr & 0x10000000) != 0 && (*(char *)(iVar12 + 4) == '5')))) ||
       (*(char *)(iVar12 + 4) == '%')) {
LAB_00421883:
      pcVar13 = pcVar13 + 1;
    }
    iVar12 = *(int *)(iVar12 + 8);
  } while( true );
}



void FUN_00421a00(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  char cVar7;
  char *pcVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 uVar12;
  int in_ECX;
  uint unaff_retaddr;
  uint uVar13;
  uint uStack_a8;
  undefined1 uStack_a1;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  int local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int local_58;
  short *psStack_54;
  uint local_50;
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [2];
  undefined4 local_20;
  uint uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  uint uStack_c;
  undefined2 *puStack_8;
  
  local_20 = 0;
  iVar9 = *(int *)(DAT_00b33b00 + 0x14);
  local_50 = 0;
  local_58 = iVar9;
  cVar7 = FUN_0045a170();
  if (cVar7 != '\0') {
    local_8c = 0x4b4f4c42;
    FUN_0045b9a0(&local_8c,4);
    local_50 = *(uint *)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_20,2);
  }
  FUN_00401020("ExtraDataList::SaveGame");
  iStack_98 = 0;
  puStack_8 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&iStack_98,2);
  iVar2 = *(int *)(in_ECX + 4);
  do {
    if (iVar2 == 0) {
      *puStack_8 = (undefined2)iStack_98;
      if (DAT_00b05bac != '\0') {
        puVar6 = *(undefined4 **)(DAT_00b33b00 + 0x84);
        iVar2 = *(int *)(DAT_00b33b00 + 0x14);
        if (puVar6 == (undefined4 *)0x0) {
          FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar2 - iVar9,0x1b62,
                       "..\\TES Shared\\ExtraDataList.cpp");
        }
        else {
          piVar11 = (int *)FUN_0046b250(*puVar6);
          uVar12 = (**(code **)(*piVar11 + 0xd4))
                             (*(undefined4 *)((int)puVar6 + 5),0x1b62,
                              "..\\TES Shared\\ExtraDataList.cpp");
          FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                       ,iVar2 - iVar9,*puVar6,uVar12);
        }
      }
      cVar7 = FUN_0045a170();
      if (cVar7 != '\0') {
        uVar13 = *(uint *)(DAT_00b33b00 + 0x14);
        if ((int)psStack_54 + 0xffffU < uVar13) {
          FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                       "..\\TES Shared\\ExtraDataList.cpp",0x1b62);
        }
        *psStack_54 = (short)uVar13 - (short)psStack_54;
      }
      FUN_00401040();
      return;
    }
    iStack_10 = *(int *)(DAT_00b33b00 + 0x14);
    switch(*(undefined1 *)(iVar2 + 4)) {
    case 0x11:
      if (((param_1 != (int *)0x0) && (cVar7 = (**(code **)(*param_1 + 400))(), cVar7 != '\0')) &&
         (param_1 != DAT_00b333c4)) {
        FUN_0045b9a0(&stack0xffffff56,1);
        iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03c58,0);
        uStack_7c = 0;
        if (*(int *)(iVar9 + 0xc) != 0) {
          iVar9 = FUN_004c9cf0();
          uStack_7c = *(undefined4 *)(iVar9 + 0xc);
        }
        FUN_0045f7a0(&uStack_7c,4);
      }
      break;
    case 0x12:
      if ((unaff_retaddr & 0x4000020) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        uStack_40 = *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0xc);
        FUN_0045f7a0(&uStack_40,4);
        FUN_004fa2d0();
      }
      break;
    case 0x1b:
    case 0x1c:
    case 0x47:
    case 0x50:
      if ((unaff_retaddr & 0x20) != 0) {
        uVar13 = 1;
        puVar10 = (uint *)&stack0xffffff56;
        goto LAB_00422911;
      }
      break;
    case 0x1e:
      FUN_0045b9a0(&stack0xffffff56,1);
      iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03b30,0);
      uStack_78 = 0;
      if (*(int *)(iVar9 + 0xc) == 0) {
        iVar3 = param_1[3];
        uVar12 = (**(code **)(*param_1 + 0xd4))();
        FUN_004a7a60("Saving package start location on %08X %s, but the location is NULL.",iVar3,
                     uVar12);
      }
      else {
        uStack_78 = *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0xc);
      }
      FUN_0045f7a0(&uStack_78,4);
      FUN_0045b9a0(iVar9 + 0x10,0xc);
      uVar13 = 4;
      puVar10 = (uint *)(iVar9 + 0x1c);
      goto LAB_00422911;
    case 0x1f:
      FUN_0045b9a0(&stack0xffffff56,1);
      iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03b9c,0);
      uStack_64 = *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0xc);
      uStack_6c = 0;
      if (*(int *)(iVar9 + 0x14) != 0) {
        uStack_6c = *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0xc);
      }
      FUN_0045f7a0(&uStack_64,4);
      FUN_0045b9a0(iVar9 + 0x10,4);
      FUN_0045f7a0(&uStack_6c,4);
      FUN_0045b9a0(iVar9 + 0x18,1);
      FUN_0045b9a0(iVar9 + 0x19,1);
      if ((0x3f < *(byte *)(DAT_00b33b00 + 0x7c)) &&
         (cVar7 = FUN_00446b80(uStack_64), cVar7 != '\0')) {
        uStack_9d = *(undefined1 *)(*(int *)(iVar9 + 0xc) + 0x20);
        FUN_0045b9a0(&uStack_9d,1);
        (**(code **)(**(int **)(iVar9 + 0xc) + 0xe0))();
      }
      break;
    case 0x20:
      if ((unaff_retaddr & 0x40000) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03b78,0);
        uStack_68 = 0;
        if (*(int *)(iVar9 + 0xc) != 0) {
          uStack_68 = *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0xc);
        }
        FUN_0045f7a0(&uStack_68,4);
        if (*(int *)(iVar9 + 0xc) != 0) {
          (**(code **)(**(int **)(iVar9 + 0xc) + 0xe0))();
        }
      }
      break;
    case 0x21:
      FUN_0045b9a0(&stack0xffffff56,1);
      iStack_9c = 0;
      puVar4 = *(undefined2 **)(DAT_00b33b00 + 0x14);
      FUN_0045b9a0(&iStack_9c,2);
      iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03b58,0);
      for (piVar11 = *(int **)(iVar9 + 0xc);
          (piVar11 != (int *)0x0 && ((piVar11[1] != 0 || (*piVar11 != 0))));
          piVar11 = (int *)piVar11[1]) {
        piVar5 = (int *)*piVar11;
        if (piVar5 != (int *)0x0) {
          uStack_30 = *(undefined4 *)(*piVar5 + 0xc);
          FUN_0045f7a0(&uStack_30,4);
          FUN_0045b9a0(piVar5 + 1,1);
          iStack_9c = iStack_9c + 1;
        }
      }
      *puVar4 = (undefined2)iStack_9c;
      break;
    case 0x22:
      if ((unaff_retaddr & 0x20) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03d00,0);
        uStack_38 = *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0xc);
        FUN_0045f7a0(&uStack_38,4);
      }
      break;
    case 0x23:
      FUN_0045b9a0(&stack0xffffff56,1);
      iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03b14,0);
      iStack_94 = 0;
      puVar4 = *(undefined2 **)(DAT_00b33b00 + 0x14);
      FUN_0045b9a0(&iStack_94,2);
      for (piVar11 = *(int **)(iVar9 + 0xc);
          (piVar11 != (int *)0x0 && ((piVar11[1] != 0 || (*piVar11 != 0))));
          piVar11 = (int *)piVar11[1]) {
        if (*piVar11 != 0) {
          uStack_88 = *(undefined4 *)(*piVar11 + 0xc);
          FUN_0045f7a0(&uStack_88,4);
          iStack_94 = iStack_94 + 1;
        }
      }
      *puVar4 = (undefined2)iStack_94;
      break;
    case 0x25:
switchD_00421aea_caseD_25:
      uVar13 = 1;
      puVar10 = (uint *)&stack0xffffff56;
      goto LAB_00422911;
    case 0x27:
      if ((unaff_retaddr & 0xa0) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        uStack_2c = *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0xc);
        FUN_0045f7a0(&uStack_2c,4);
      }
      break;
    case 0x28:
      if ((unaff_retaddr & 0x120) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        uStack_4c = *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0xc);
        FUN_0045f7a0(&uStack_4c,4);
      }
      break;
    case 0x29:
      if ((unaff_retaddr & 0x220) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        uStack_48 = *(uint *)(iVar2 + 0xc);
        uVar13 = 4;
        puVar10 = &uStack_48;
        goto LAB_00422911;
      }
      break;
    case 0x2a:
      if ((unaff_retaddr & 0x20) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        uStack_c = (uint)*(ushort *)(iVar2 + 0xc);
        uVar13 = 2;
        puVar10 = &uStack_c;
        goto LAB_00422911;
      }
      break;
    case 0x2b:
      if ((unaff_retaddr & 0x20) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        uStack_44 = *(uint *)(iVar2 + 0xc);
        puVar10 = &uStack_44;
        goto LAB_00422908;
      }
      break;
    case 0x2c:
      if ((unaff_retaddr & 0x20) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        uStack_9f = *(undefined1 *)(iVar2 + 0xc);
        uVar13 = 1;
        puVar10 = (uint *)&uStack_9f;
        goto LAB_00422911;
      }
      break;
    case 0x2d:
      if ((unaff_retaddr & 0x20) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        local_50 = *(uint *)(iVar2 + 0xc);
        puVar10 = &local_50;
        goto LAB_00422908;
      }
      break;
    case 0x2e:
      if ((unaff_retaddr & 0x20) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        uStack_3c = *(uint *)(iVar2 + 0xc);
        puVar10 = &uStack_3c;
        goto LAB_00422908;
      }
      break;
    case 0x2f:
      if ((unaff_retaddr & 0x20) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        uStack_9e = *(undefined1 *)(iVar2 + 0xc);
        uVar13 = 1;
        puVar10 = (uint *)&uStack_9e;
        goto LAB_00422911;
      }
      break;
    case 0x31:
      if ((unaff_retaddr & 0x40) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        iVar9 = *(int *)(iVar2 + 0xc);
        uStack_74 = 0;
        if (*(int *)(iVar9 + 4) != 0) {
          uStack_74 = *(undefined4 *)(*(int *)(iVar9 + 4) + 0xc);
        }
        FUN_0045b9a0(iVar9,1);
        FUN_0045f7a0(&uStack_74,4);
        uVar13 = 1;
        puVar10 = (uint *)(iVar9 + 8);
        goto LAB_00422911;
      }
      break;
    case 0x32:
      if ((unaff_retaddr & 0x100000) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03ad4,0);
        FUN_0042b950();
      }
      break;
    case 0x33:
      if ((unaff_retaddr & 0x400) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03c7c,0);
        uStack_a0 = *(undefined1 *)(*(int *)(iVar9 + 0xc) + 0xc);
        uVar13 = 1;
        puVar10 = (uint *)&uStack_a0;
        goto LAB_00422911;
      }
      break;
    case 0x35:
      if ((unaff_retaddr & 0x10000000) != 0) goto switchD_00421aea_caseD_25;
      break;
    case 0x36:
      if ((unaff_retaddr & 0x20) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03d24,0);
        FUN_0045b9a0(iVar9 + 0xc,4);
        uVar13 = 1;
        puVar10 = (uint *)(iVar9 + 0x10);
        goto LAB_00422911;
      }
      break;
    case 0x37:
      if ((unaff_retaddr & 0x20) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        uStack_14 = *(uint *)(iVar2 + 0xc);
        puVar10 = &uStack_14;
        goto LAB_00422908;
      }
      break;
    case 0x39:
      if ((unaff_retaddr & 0x200000) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03cdc,0);
        piVar11 = (int *)(iVar9 + 0xc);
        local_58 = 0;
        iVar9 = (**(code **)(*piVar11 + 0x30))();
        if (iVar9 != 0) {
          (**(code **)(*piVar11 + 0x30))();
          local_58 = FUN_00419a20();
        }
        FUN_0045f7a0(&local_58,4);
        uStack_70 = 0;
        iVar9 = (**(code **)(*piVar11 + 0x38))();
        if (iVar9 != 0) {
          (**(code **)(*piVar11 + 0x38))();
          uStack_70 = FUN_006a2250();
        }
        FUN_0045f7a0(&uStack_70,4);
        uStack_60 = 0;
        iVar9 = (**(code **)(*piVar11 + 0x20))();
        if (iVar9 != 0) {
          iVar9 = (**(code **)(*piVar11 + 0x20))();
          uStack_60 = *(undefined4 *)(iVar9 + 0xc);
        }
        FUN_0045f7a0(&uStack_60,4);
      }
      break;
    case 0x3a:
      if ((unaff_retaddr & 0x200000) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03af0,0);
        piVar11 = (int *)(iVar9 + 0xc);
        uStack_80 = 0;
        iVar9 = (**(code **)(*piVar11 + 4))();
        if (iVar9 != 0) {
          iVar9 = (**(code **)(*piVar11 + 4))();
          uStack_80 = *(undefined4 *)(iVar9 + 0xc);
        }
        FUN_0045f7a0(&uStack_80,4);
        uVar12 = (**(code **)(*piVar11 + 8))(0);
        FUN_0068deb0(uVar12);
      }
      break;
    case 0x3d:
      if ((unaff_retaddr & 0x80) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        uStack_1c = *(uint *)(iVar2 + 0xc);
        puVar10 = &uStack_1c;
        goto LAB_00422908;
      }
      break;
    case 0x3e:
      if ((unaff_retaddr & 0x4000) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03cb8,0);
        auStack_28[0] = *(undefined4 *)(*(int *)(iVar9 + 0x18) + 0xc);
        FUN_0045f7a0(auStack_28,4);
        uVar13 = 0xc;
        puVar10 = (uint *)(iVar9 + 0xc);
        goto LAB_00422911;
      }
      break;
    case 0x41:
      FUN_0045b9a0(&stack0xffffff56,1);
      iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03c38,0);
      uStack_84 = 0;
      if (*(int *)(iVar9 + 0xc) != 0) {
        uStack_84 = *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0xc);
      }
      FUN_0045f7a0(&uStack_84,4);
      break;
    case 0x46:
      if ((unaff_retaddr & 0x1000) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03aac,0);
        FUN_0045b9a0(iVar9 + 0xc,4);
        FUN_0045b9a0(iVar9 + 0x10,4);
        FUN_0045b9a0(iVar9 + 0x14,1);
        uVar13 = 4;
        puVar10 = (uint *)(iVar9 + 0x18);
        goto LAB_00422911;
      }
      break;
    case 0x48:
      if ((unaff_retaddr & 0x20) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03c9c,0);
        local_20 = *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0xc);
        FUN_0045f7a0(&local_20,4);
      }
      break;
    case 0x4a:
      if ((unaff_retaddr & 0x2000000) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03a84,0);
        pcVar8 = *(char **)(iVar9 + 0xc);
        cVar7 = (char)pcVar8;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_0045b9a0(&stack0xffffff57,1);
        uVar13 = (uint)(byte)((char)pcVar8 - (cVar7 + '\x01'));
        puVar10 = *(uint **)(iVar9 + 0xc);
        goto LAB_00422911;
      }
      break;
    case 0x4b:
      if ((unaff_retaddr & 0x1000000) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03a5c,0);
        uStack_a8 = 0;
        uStack_a8 = FUN_004522f0(*(undefined4 *)(iVar9 + 0x10));
        uStack_a8 = uStack_a8 & 0xffff;
        FUN_0045b9a0(&uStack_a8,2);
        if (*(int *)(iVar9 + 0x10) != 0) {
          FUN_0045b9a0(*(int *)(iVar9 + 0x10),uStack_a8 & 0xffff);
        }
        uStack_a8 = FUN_004522f0(*(undefined4 *)(iVar9 + 0x14));
        uStack_a8 = uStack_a8 & 0xffff;
        FUN_0045b9a0(&uStack_a8,2);
        if (*(int *)(iVar9 + 0x14) != 0) {
          FUN_0045b9a0(*(int *)(iVar9 + 0x14),uStack_a8 & 0xffff);
        }
        uStack_a8 = FUN_004522f0(*(undefined4 *)(iVar9 + 0x18));
        uStack_a8 = uStack_a8 & 0xffff;
        FUN_0045b9a0(&uStack_a8,2);
        puVar10 = *(uint **)(iVar9 + 0x18);
        if (puVar10 != (uint *)0x0) {
          uVar13 = uStack_a8 & 0xffff;
          goto LAB_00422911;
        }
      }
      break;
    case 0x4e:
      FUN_0045b9a0(&stack0xffffff56,1);
      local_8c = 0;
      puVar4 = *(undefined2 **)(DAT_00b33b00 + 0x14);
      FUN_0045b9a0(&local_8c,2);
      iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03a38,0);
      for (piVar11 = *(int **)(iVar9 + 0xc);
          (piVar11 != (int *)0x0 && ((piVar11[1] != 0 || (*piVar11 != 0))));
          piVar11 = (int *)piVar11[1]) {
        piVar5 = (int *)*piVar11;
        if (piVar5 != (int *)0x0) {
          uStack_88 = 0;
          if (*piVar5 != 0) {
            uStack_88 = *(undefined4 *)(*piVar5 + 0xc);
          }
          FUN_0045f7a0(&uStack_88,4);
          FUN_0045b9a0(piVar5 + 1,2);
          FUN_0045b9a0(piVar5 + 2,4);
          local_8c = local_8c + 1;
        }
      }
      *puVar4 = (undefined2)local_8c;
      break;
    case 0x4f:
      FUN_0045b9a0(&stack0xffffff56,1);
      iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03c14,0);
      uStack_90 = 0;
      if (*(int *)(iVar9 + 0xc) != 0) {
        uStack_90 = *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0xc);
      }
      FUN_0045f7a0(&uStack_90,4);
      break;
    case 0x52:
      if ((unaff_retaddr & 0x2000) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        uStack_34 = *(uint *)(iVar2 + 0xc);
        uVar13 = 4;
        puVar10 = &uStack_34;
        goto LAB_00422911;
      }
      break;
    case 0x53:
      if ((unaff_retaddr & 0x20) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        uStack_18 = *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0xc);
        FUN_0045f7a0(&uStack_18,4);
      }
      break;
    case 0x55:
      if ((unaff_retaddr & 0x20) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        uStack_a1 = *(undefined1 *)(iVar2 + 0xc);
        uVar13 = 1;
        puVar10 = (uint *)&uStack_a1;
        goto LAB_00422911;
      }
      break;
    case 0x59:
      iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03a14,0);
      if (*(int *)(iVar9 + 0xc) != 0) {
        FUN_0045b9a0(&stack0xffffff56,1);
        FUN_006b8750();
      }
      break;
    case 0x5a:
      FUN_0045b9a0(&stack0xffffff56,1);
      iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03bf4,0);
      uVar13 = 1;
      puVar10 = (uint *)(iVar9 + 0xc);
      goto LAB_00422911;
    case 0x5c:
      FUN_0045b9a0(&stack0xffffff56,1);
      iVar9 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03850,&PTR_PTR_00b03bd4,0);
      puVar10 = (uint *)(iVar9 + 0xc);
LAB_00422908:
      uVar13 = 4;
LAB_00422911:
      FUN_0045b9a0(puVar10,uVar13);
    }
    if (iStack_10 != *(int *)(DAT_00b33b00 + 0x14)) {
      iStack_98 = iStack_98 + 1;
    }
    iVar2 = *(int *)(iVar2 + 8);
    iVar9 = iStack_5c;
  } while( true );
}



void FUN_00422b10(uint param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  
  if ((param_3 == (int *)0x0) || (cVar1 = (**(code **)(*param_3 + 400))(), cVar1 == '\0')) {
    if ((param_1 & 0x100000) != 0) {
      FUN_0041e210(0x32);
      FUN_0042b580();
    }
    if ((param_1 & 0x200000) != 0) {
      uVar7 = 0;
      ppuVar6 = &PTR_PTR_00b03af0;
      ppuVar5 = &PTR_PTR_00b03850;
      uVar4 = 0;
      uVar2 = FUN_0041e210(0x3a);
      iVar3 = FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
      if (iVar3 != 0) {
        uVar2 = (**(code **)(*(int *)(iVar3 + 0xc) + 8))(0);
        FUN_0068e060(uVar2);
      }
    }
  }
  return;
}



void FUN_00422ba0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x55);
  if (iVar2 == 0) {
    iVar2 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0042a090(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar3);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(undefined1 *)(iVar2 + 0xc) = (undefined1)param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_00422c40(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x55);
  if (iVar1 != 0) {
    return *(undefined1 *)(iVar1 + 0xc);
  }
  return 0xff;
}



void FUN_00422c60(void)

{
  FUN_0041e160(0x55);
  return;
}



void FUN_00422c70(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x59);
  if (iVar2 == 0) {
    iVar2 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0042a140(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar3);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(undefined4 *)(iVar2 + 0xc) = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00422d10(void)

{
  FUN_0041e160(0x59);
  return;
}



void FUN_00422d20(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x5c);
  if (iVar2 == 0) {
    iVar2 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0042ac00(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar3);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(undefined4 *)(iVar2 + 0xc) = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



float10 FUN_00422dc0(void)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0.0;
  iVar1 = FUN_0041e210(0x5c);
  if (iVar1 != 0) {
    local_4 = *(float *)(iVar1 + 0xc);
  }
  return (float10)local_4;
}



undefined4 FUN_00422de0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3c);
}



bool FUN_00422df0(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  for (piVar1 = (int *)(in_ECX + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2 == 0;
}



/* WARNING: Removing unreachable block (ram,0x00422e8d) */

void FUN_00422e20(undefined4 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int unaff_FS_OFFSET;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_00401020("BaseExtraList::RemoveExtra");
    bVar2 = *(byte *)(param_1 + 1);
    uVar4 = (uint)bVar2;
    iVar3 = FUN_0041e2d0(uVar4);
    if (iVar3 == 0) {
      *(undefined4 *)(in_ECX + 4) = param_1[2];
    }
    else {
      *(undefined4 *)(iVar3 + 8) = param_1[2];
    }
    if ((char)param_1 == '\0') {
      param_1[2] = 0;
    }
    else {
      (**(code **)*param_1)(1);
    }
    if (bVar2 >> 3 < 0xc) {
      pbVar1 = (byte *)((bVar2 >> 3) + 8 + in_ECX);
      *pbVar1 = *pbVar1 & ~('\x01' << (bVar2 & 7));
    }
    iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if ((in_ECX == *(int *)(iVar3 + 8)) && (uVar4 < 0x5d)) {
      *(undefined4 *)(iVar3 + 0x10 + uVar4 * 4) = 0;
    }
    FUN_00401040();
  }
  return;
}



void FUN_00422ee0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00a350f8;
  return;
}



void FUN_00422f00(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a34dec;
  FUN_0041dff0(1);
  return;
}



void FUN_00422f10(void)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint in_ECX;
  uint uVar6;
  int *piVar7;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_50 = in_ECX;
  FUN_00401020("ExtraDataList::Save");
  for (iVar1 = *(int *)(in_ECX + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    switch(*(undefined1 *)(iVar1 + 4)) {
    case 4:
      local_50 = *(uint *)(iVar1 + 0xc);
      FUN_0046ae40(0x574c4358,&local_50,4);
      break;
    case 5:
      uStack_3c = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc);
      FUN_0046ae40(0x54574358,&uStack_3c,4);
      break;
    case 8:
      if (*(int *)(iVar1 + 0xc) == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)(*(int *)(iVar1 + 0xc) + 4);
      }
      uVar6 = 0;
      for (piVar3 = piVar7; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        if (*piVar3 != 0) {
          uVar6 = uVar6 + 1;
        }
      }
      if (uVar6 != 0) {
        puVar4 = (undefined4 *)
                 FUN_00401f00(-(uint)((int)((ulonglong)uVar6 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar6 * 4));
        puVar5 = puVar4;
        for (; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
          *puVar5 = *(undefined4 *)(*piVar7 + 0xc);
          puVar5 = puVar5 + 1;
        }
        FUN_0046ae40(0x524c4358,puVar4,uVar6 * 4);
        FUN_00401f20(puVar4);
      }
      break;
    case 0xb:
      thunk_FUN_0046ae40(0x544d4358,iVar1 + 0xc,1);
      break;
    case 0xc:
      uStack_40 = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc);
      FUN_0046ae40(0x4d434358,&uStack_40,4);
      break;
    case 0x13:
      local_50 = (uint)*(byte *)(iVar1 + 0xc);
      FUN_0046ae40(0x54434158,&local_50,4);
      break;
    case 0x18:
      uStack_24 = *(undefined4 *)(iVar1 + 0xc);
      uStack_20 = *(undefined4 *)(iVar1 + 0x10);
      uStack_1c = *(undefined4 *)(iVar1 + 0x14);
      FUN_0046ae40(0x444f4c58,&uStack_24,0xc);
      break;
    case 0x19:
      FUN_00497240();
      break;
    case 0x1e:
      uStack_18 = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc);
      uStack_14 = *(undefined4 *)(iVar1 + 0x10);
      uStack_10 = *(undefined4 *)(iVar1 + 0x14);
      uStack_c = *(undefined4 *)(iVar1 + 0x18);
      FUN_0046ae40(0x4c535058,&uStack_18,0x14);
      break;
    case 0x24:
      FUN_0046ba80(0x4d434c58,*(undefined4 *)(iVar1 + 0xc));
      break;
    case 0x27:
      uStack_4c = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc);
      FUN_0046ae40(0x4e574f58,&uStack_4c,4);
      break;
    case 0x28:
      uStack_48 = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc);
      FUN_0046ae40(0x424c4758,&uStack_48,4);
      break;
    case 0x29:
      local_50 = *(uint *)(iVar1 + 0xc);
      FUN_0046ae40(0x4b4e5258,&local_50,4);
      break;
    case 0x2a:
      local_50 = (uint)*(short *)(iVar1 + 0xc);
      FUN_0046ae40(0x544e4358,&local_50,4);
      break;
    case 0x2b:
      local_50 = FUN_009828c0();
      FUN_0046ae40(0x544c4858,&local_50,4);
      break;
    case 0x2c:
      local_50 = (uint)*(byte *)(iVar1 + 0xc);
      FUN_0046ae40(0x45535558,&local_50,4);
      break;
    case 0x2d:
      local_50 = *(uint *)(iVar1 + 0xc);
      FUN_0046ae40(0x4d495458,&local_50,4);
      break;
    case 0x2e:
      local_50 = *(uint *)(iVar1 + 0xc);
      FUN_0046ae40(0x47484358,&local_50,4);
      break;
    case 0x2f:
      thunk_FUN_0046ae40(0x4c4f5358,iVar1 + 0xc,1);
      break;
    case 0x31:
      puVar2 = *(undefined1 **)(iVar1 + 0xc);
      uStack_28 = puVar2[8];
      auStack_30[0] = *puVar2;
      if (*(int *)(puVar2 + 4) == 0) {
        uStack_2c = 0;
      }
      else {
        uStack_2c = *(undefined4 *)(*(int *)(puVar2 + 4) + 0xc);
      }
      FUN_0046ae40(0x434f4c58,auStack_30,0xc);
      break;
    case 0x32:
      FUN_0042b9a0();
      break;
    case 0x33:
      FUN_0046ba10(0x4b524d58);
      FUN_0042b380();
      break;
    case 0x38:
      FUN_0041e210(0x38);
      FUN_0046ae40(0x44455358,&stack0xffffffab,1);
      break;
    case 0x3f:
      if (*(int *)(iVar1 + 0xc) != 0) {
        uStack_38 = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc);
        uStack_34 = *(undefined1 *)(iVar1 + 0x10);
        FUN_0046ae40(0x50534558,&uStack_38,8);
      }
      break;
    case 0x43:
      if (*(int *)(iVar1 + 0xc) != 0) {
        local_50 = *(uint *)(*(int *)(iVar1 + 0xc) + 0xc);
        FUN_0046ae40(0x4d545258,&local_50,4);
      }
      break;
    case 0x44:
      if (*(int *)(iVar1 + 0xc) != 0) {
        local_50 = *(uint *)(*(int *)(iVar1 + 0xc) + 0xc);
        FUN_0046ae40(0x43524d58,&local_50,4);
      }
      break;
    case 0x48:
      uStack_44 = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc);
      FUN_0046ae40(0x4e535058,&uStack_44,4);
      break;
    case 0x4d:
      if (*(int *)(iVar1 + 0xc) != 0) {
        local_50 = *(uint *)(*(int *)(iVar1 + 0xc) + 0xc);
        FUN_0046ae40(0x47525458,&local_50,4);
      }
      break;
    case 0x58:
      if (*(int *)(iVar1 + 0xc) != 0) {
        local_50 = *(uint *)(*(int *)(iVar1 + 0xc) + 0xc);
        FUN_0046ae40(0x53524858,&local_50,4);
      }
    }
  }
  FUN_00401040();
  return;
}



void FUN_004234b0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x26);
  if (iVar1 != 0) {
    FUN_00422e20(iVar1,1);
  }
  return;
}



int FUN_004234d0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_0041e210(0x32);
  if (iVar3 == 0) {
    if (param_1 != 0) {
      iVar3 = FUN_00401f00(0x10,uVar2);
      local_4 = 0;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00429c10(param_1);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(iVar3);
    }
  }
  else if (param_1 == 0) {
    FUN_00422e20(iVar3,1);
  }
  else {
    iVar1 = *(int *)(iVar3 + 0xc);
    if (iVar1 != 0) {
      FUN_007c88a0();
      FUN_00401f20(iVar1);
    }
    *(int *)(iVar3 + 0xc) = param_1;
  }
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



int FUN_00423590(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_0041e210(0x33);
  if (iVar3 == 0) {
    if (param_1 != 0) {
      iVar3 = FUN_00401f00(0x10,uVar2);
      local_4 = 0;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00429ca0(param_1);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(iVar3);
    }
  }
  else {
    if (param_1 == 0) {
      FUN_00422e20(iVar3,1);
      *unaff_FS_OFFSET = local_c;
      return 0;
    }
    iVar1 = *(int *)(iVar3 + 0xc);
    if (iVar1 != 0) {
      FUN_005a6a20();
      FUN_00401f20(iVar1);
    }
    *(int *)(iVar3 + 0xc) = param_1;
  }
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



void FUN_00423660(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x27);
  if (iVar2 == 0) {
    if (param_1 != 0) {
      iVar2 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00429e00(param_1);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(uVar3);
    }
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (param_1 == 0) {
    FUN_00422e20(iVar2,1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(int *)(iVar2 + 0xc) = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00423720(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x28);
  if (iVar2 == 0) {
    if (param_1 != 0) {
      iVar2 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00429e20(param_1);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(uVar3);
    }
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (param_1 == 0) {
    FUN_00422e20(iVar2,1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(int *)(iVar2 + 0xc) = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004237e0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x29);
  if (iVar2 == 0) {
    if (param_1 != -1) {
      iVar2 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00429e40(param_1);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(uVar3);
    }
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (param_1 == -1) {
    FUN_00422e20(iVar2,1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(int *)(iVar2 + 0xc) = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004238a0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x2a);
  sVar4 = (short)param_1;
  if ((sVar4 != 0) && (sVar4 != 1)) {
    if (iVar2 != 0) {
      *(short *)(iVar2 + 0xc) = sVar4;
      *unaff_FS_OFFSET = local_c;
      return;
    }
    iVar2 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00429e60(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar3);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (iVar2 != 0) {
    FUN_00422e20(iVar2,1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00423970(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x4f);
  if (param_1 == 0) {
    if (iVar2 != 0) {
      FUN_00422e20(iVar2,1);
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  else if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0042ab10(param_1);
  }
  local_4 = 0xffffffff;
  FUN_0041e0a0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00423a30(float param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x37);
  if (iVar2 == 0) {
    if (param_1 != 1.0) {
      iVar2 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00429fb0(param_1);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(uVar3);
    }
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (param_1 == 1.0) {
    FUN_00422e20(iVar2,1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(float *)(iVar2 + 0xc) = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00423b10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x5b);
  if (iVar2 == 0) {
    if (param_1 != 0) {
      iVar2 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0042ab70(param_1);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(uVar3);
    }
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (param_1 == 0) {
    FUN_00422e20(iVar2,1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(int *)(iVar2 + 0xc) = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00423bd0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x38);
  if ((char)param_1 == -1) {
    if (iVar2 != 0) {
      FUN_00422e20(iVar2,1);
    }
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (iVar2 == 0) {
    iVar2 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0042a160(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar3);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(char *)(iVar2 + 0xc) = (char)param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00423c90(int param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    FUN_0041e160(0x53);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar1 = FUN_0041e210(0x53);
  if (iVar1 == 0) {
    iVar2 = FUN_00401f00(0x10);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      local_4 = iVar1;
      iVar1 = FUN_00429950();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar1);
  }
  *(int *)(iVar1 + 0xc) = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00423d30(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)param_1[6])();
  if (iVar1 == 0) {
    uVar3 = (**(code **)(*param_1 + 0xd4))(param_1[3]);
    FUN_004a7a60("Reference %s %08X has no parent save cell",uVar3);
    return;
  }
  iVar2 = FUN_004c9cf0();
  if (iVar2 != 0) {
    FUN_00423c90(iVar2);
    return;
  }
  FUN_00423c90(iVar1);
  return;
}



void FUN_00423da0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x13);
  if (iVar1 == 0) {
    if (param_1 == 1) {
      return;
    }
    iVar1 = FUN_0041eb90();
  }
  else if ((param_1 == 1) && (*(int *)(iVar1 + 0x10) == 0)) {
    FUN_00422e20(iVar1,1);
    return;
  }
  if (iVar1 != 0) {
    *(char *)(iVar1 + 0xc) = (char)param_1;
  }
  return;
}



void FUN_00423df0(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0041e210(0x13);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (uint)*(byte *)(iVar1 + 0xc);
  }
  uVar2 = uVar2 | param_1;
  iVar1 = FUN_0041e210(0x13);
  if (iVar1 == 0) {
    if (uVar2 == 1) {
      return;
    }
    iVar1 = FUN_0041eb90();
  }
  else if ((uVar2 == 1) && (*(int *)(iVar1 + 0x10) == 0)) {
    FUN_00422e20(iVar1,1);
    return;
  }
  if (iVar1 != 0) {
    *(char *)(iVar1 + 0xc) = (char)uVar2;
  }
  return;
}



void FUN_00423e50(byte param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_0041e210(0x13);
  if (iVar1 == 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = *(byte *)(iVar1 + 0xc);
  }
  bVar2 = bVar2 & ~param_1;
  iVar1 = FUN_0041e210(0x13);
  if (iVar1 == 0) {
    if (bVar2 == 1) {
      return;
    }
    iVar1 = FUN_0041eb90();
  }
  else if ((bVar2 == 1) && (*(int *)(iVar1 + 0x10) == 0)) {
    FUN_00422e20(iVar1,1);
    return;
  }
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0xc) = bVar2;
  }
  return;
}



void FUN_00423eb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x13);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      return;
    }
    iVar1 = FUN_0041eb90();
  }
  else if ((*(char *)(iVar1 + 0xc) == '\x01') && (param_1 == 0)) {
    FUN_00422e20(iVar1,1);
    return;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x10) = param_1;
  }
  return;
}



void FUN_00423f00(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  LONG LVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_0041e210(3);
  if (param_1 == (undefined4 *)0x0) {
    if (iVar3 == 0) goto LAB_00423fd1;
    if (*(int *)(iVar3 + 0xc) == 0) {
      FUN_00422e20(iVar3,1);
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  else if (iVar3 == 0) {
    iVar4 = FUN_00401f00(0x10,uVar2);
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      local_4 = iVar3;
      iVar3 = FUN_0041d7f0();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar3);
  }
  puVar1 = *(undefined4 **)(iVar3 + 0xc);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(iVar3 + 0xc) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
LAB_00423fd1:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00423ff0(float param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(4);
  if (param_1 == 0.0) {
    if (iVar2 != 0) {
      FUN_00422e20(iVar2,1);
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  else {
    if (iVar2 == 0) {
      iVar2 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0041d920(param_1);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(uVar3);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    *(float *)(iVar2 + 0xc) = param_1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004240c0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(2);
  if (param_1 == 0) {
    if (iVar2 != 0) {
      FUN_00422e20(iVar2,1);
    }
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (iVar2 == 0) {
    iVar2 = FUN_00401f00(0x14,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0041dac0(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar3);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  FUN_0075fa90(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_00424180(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 **ppuVar4;
  LONG LVar5;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0x0;
  iVar3 = FUN_0041e210(2);
  if (iVar3 == 0) {
    local_4 = (undefined4 *)0x0;
    ppuVar4 = &local_4;
  }
  else {
    ppuVar4 = (undefined4 **)(iVar3 + 0xc);
  }
  puVar2 = local_4;
  puVar1 = *ppuVar4;
  if ((iVar3 == 0) && (local_4 != (undefined4 *)0x0)) {
    LVar5 = InterlockedDecrement(local_4 + 1);
    if (LVar5 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  return puVar1;
}



void FUN_004241e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_0041e210(8);
  if (param_1 == (undefined4 *)0x0) {
    if (iVar3 != 0) {
      FUN_00422e20(iVar3,1);
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  else {
    if (iVar3 == 0) {
      iVar4 = FUN_00401f00(0x10);
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        local_4 = iVar3;
        uVar5 = FUN_0041d940(param_1);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(uVar5);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    puVar1 = *(undefined4 **)(iVar3 + 0xc);
    if ((puVar1 != (undefined4 *)0x0) && (puVar1 != param_1)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    *(undefined4 **)(iVar3 + 0xc) = param_1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004242c0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0xb);
  if (param_1 == 0) {
    if (iVar2 != 0) {
      FUN_00422e20(iVar2,1);
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  else {
    if (iVar2 == 0) {
      iVar2 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0041d960(param_1);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(uVar3);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    *(char *)(iVar2 + 0xc) = (char)param_1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00424380(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0xc);
  if (param_1 == 0) {
    if (iVar2 != 0) {
      FUN_00422e20(iVar2,1);
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  else {
    if (iVar2 == 0) {
      iVar2 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0041d980(param_1);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(uVar3);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    *(int *)(iVar2 + 0xc) = param_1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00424440(int param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0xf);
  if (param_1 == 0) {
    if (iVar2 != 0) {
      FUN_00422e20(iVar2,1);
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  else {
    if (iVar2 == 0) {
      iVar3 = FUN_00401f00(0x1c,uVar1);
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        local_4 = iVar2;
        iVar2 = FUN_0041dc80(param_1,param_2);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(iVar2);
    }
    else {
      *(int *)(iVar2 + 0xc) = param_1;
      FUN_0075fa90(param_2);
    }
    *param_3 = iVar2 + 0x14;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00424510(undefined4 param_1)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ab8a3;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined1 *)(in_ECX + 1) = 10;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a35140;
  in_ECX[3] = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  *(undefined2 *)((int)in_ECX + 0x12) = 0;
  local_4 = 1;
  FUN_004028d0(param_1,0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00424580(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009aba58;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00401f20(in_ECX[3],uVar1);
  in_ECX[3] = 0;
  *(undefined2 *)((int)in_ECX + 0x12) = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004245e0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(10);
  if (param_1 == 0) {
    if (iVar2 != 0) {
      FUN_00422e20(iVar2,1);
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  else {
    if (iVar2 == 0) {
      iVar2 = FUN_00401f00(0x14,uVar1);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00424510(param_1);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(uVar3);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    FUN_004028d0(param_1,0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004246b0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x22);
  if (iVar1 != 0) {
    FUN_00422e20(iVar1,1);
  }
  return;
}



void FUN_004246d0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x1f);
  if (iVar1 != 0) {
    FUN_00422e20(iVar1,1);
  }
  return;
}



void FUN_004246f0(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0041e210(0x20);
  if (iVar2 != 0) {
    FUN_00566830(1);
    cVar1 = FUN_0045a500();
    if (cVar1 != '\0') {
      FUN_0045c7a0(*(undefined4 *)(iVar2 + 0xc));
      *(undefined4 *)(iVar2 + 0xc) = 0;
      FUN_00422e20(iVar2,1);
      return;
    }
    if (*(int **)(iVar2 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(iVar2 + 0xc) + 0x10))(1);
    }
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_00422e20(iVar2,1);
  }
  return;
}



void FUN_00424770(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x3d);
  if (iVar1 != 0) {
    FUN_00422e20(iVar1,1);
  }
  return;
}



void FUN_00424790(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x36);
  if (iVar1 != 0) {
    FUN_00422e20(iVar1,1);
  }
  return;
}



void FUN_004247b0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x11);
  if (iVar2 == 0) {
    if (param_1 != 0) {
      iVar2 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0042a2e0(param_1);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(uVar3);
    }
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (param_1 == 0) {
    FUN_00422e20(iVar2,1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(int *)(iVar2 + 0xc) = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00424870(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b3ba6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x19);
  iVar4 = 0;
  if (iVar2 == 0) {
    if (param_1 != 0) {
      iVar2 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (iVar2 != 0) {
        iVar4 = FUN_0042a300();
      }
      local_4 = 0xffffffff;
      iVar2 = FUN_00401f00(8,uVar1);
      local_4 = 1;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00497210();
      }
      local_4 = 0xffffffff;
      *(undefined4 *)(iVar4 + 0xc) = uVar3;
      FUN_00497950(param_1);
      FUN_0041e0a0(iVar4);
    }
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (param_1 == 0) {
    FUN_00422e20(iVar2,1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  FUN_00497950(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00424970(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b3ba6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x19);
  iVar4 = 0;
  if (iVar2 == 0) {
    if (param_1 != 0) {
      iVar2 = FUN_00401f00(0x10,uVar1);
      local_4 = 0;
      if (iVar2 != 0) {
        iVar4 = FUN_0042a300();
      }
      local_4 = 0xffffffff;
      iVar2 = FUN_00401f00(8,uVar1);
      local_4 = 1;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00497210();
      }
      local_4 = 0xffffffff;
      *(undefined4 *)(iVar4 + 0xc) = uVar3;
      FUN_00497370(param_1);
      FUN_0041e0a0(iVar4);
    }
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (param_1 == 0) {
    FUN_00422e20(iVar2,1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  FUN_00497370(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00424a70(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    iVar3 = FUN_0041e210(0x40);
    if (iVar3 == 0) {
      iVar4 = FUN_00401f00(0x14,uVar2);
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        local_4 = iVar3;
        iVar3 = FUN_0042a600();
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(iVar3);
    }
    for (piVar1 = (int *)(iVar3 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*piVar1 == param_1) goto LAB_00424af7;
    }
    FUN_00446cb0(param_1);
  }
LAB_00424af7:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00424b10(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_0041e210(0x40), iVar1 != 0)) {
    FUN_0065c620(param_1);
    if ((*(int *)(iVar1 + 0x10) == 0) && (*(int *)(iVar1 + 0xc) == 0)) {
      FUN_00422e20(iVar1,1);
    }
  }
  return;
}



void FUN_00424b60(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    iVar3 = FUN_0041e210(0x42);
    if (iVar3 == 0) {
      iVar4 = FUN_00401f00(0x14,uVar2);
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        local_4 = iVar3;
        iVar3 = FUN_0042a860();
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(iVar3);
    }
    for (piVar1 = (int *)(iVar3 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*piVar1 == param_1) goto LAB_00424be7;
    }
    FUN_00446cb0(param_1);
  }
LAB_00424be7:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00424c00(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_0041e210(0x42), iVar1 != 0)) {
    FUN_0065c620(param_1);
    if ((*(int *)(iVar1 + 0x10) == 0) && (*(int *)(iVar1 + 0xc) == 0)) {
      FUN_00422e20(iVar1,1);
    }
  }
  return;
}



void FUN_00424c50(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_0041e210(0x23);
  if (iVar3 == 0) {
    iVar4 = FUN_00401f00(0x10,uVar2);
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      local_4 = iVar3;
      iVar3 = FUN_00429b20();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar3);
  }
  for (piVar1 = *(int **)(iVar3 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 == param_1) goto LAB_00424cd3;
  }
  FUN_00446cb0(param_1);
LAB_00424cd3:
  FUN_0045a500();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00424d00(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x23);
  if (iVar1 != 0) {
    FUN_0065c620(param_1);
    FUN_0045a500();
  }
  return;
}



void FUN_00424d30(char param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x51);
  if (param_1 != '\0') {
    if (iVar2 == 0) {
      iVar3 = FUN_00401f00(0x10,uVar1);
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        local_4 = iVar2;
        iVar2 = FUN_0042ab30(param_2);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(iVar2);
    }
    *(undefined4 *)(iVar2 + 0xc) = param_2;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (iVar2 != 0) {
    FUN_00422e20(iVar2,1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00424de0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0041e160(0x4a);
  if (param_1 != 0) {
    iVar2 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0042a720(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar3);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00424e60(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x4b);
  if (iVar1 == 0) {
    iVar1 = FUN_0041e210(0x4a);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
      FUN_004e2f70(1);
      return;
    }
  }
  else {
    if (*(int *)(iVar1 + 0x10) != 0) {
      FUN_00401020("ExtraDataList::RestoreSavedAnimationData");
      FUN_0045a140(*(undefined1 *)(iVar1 + 0xc));
      FUN_00458ed0(param_1,param_1[3],*(undefined4 *)(iVar1 + 0x10));
      FUN_00401e40(*(undefined4 *)(iVar1 + 0x10));
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined1 *)(DAT_00b33b00 + 0x7c) = *(undefined1 *)(DAT_00b33b00 + 0x71);
      FUN_00401040();
    }
    if (*(int *)(iVar1 + 0x14) != 0) {
      FUN_00401020("ExtraDataList::RestoreSavedAnimationData");
      FUN_0045a140(*(undefined1 *)(iVar1 + 0xc));
      FUN_00459080(param_1,*(undefined4 *)(iVar1 + 0x14));
      FUN_00401e40(*(undefined4 *)(iVar1 + 0x14));
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined1 *)(DAT_00b33b00 + 0x7c) = *(undefined1 *)(DAT_00b33b00 + 0x71);
      FUN_00401040();
    }
    if (*(int *)(iVar1 + 0x18) == 0) {
      FUN_0041e160(0x4b);
      (**(code **)(*param_1 + 0x44))(0x1000000);
    }
  }
  return;
}



void FUN_00424f90(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x4b);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x18) != 0) {
      FUN_00401020("ExtraDataList::RestoreSavedHavokData");
      FUN_0045a140(*(undefined1 *)(iVar1 + 0xc));
      FUN_00459370(param_1,*(undefined4 *)(iVar1 + 0x18));
      FUN_00401e40(*(undefined4 *)(iVar1 + 0x18));
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined1 *)(DAT_00b33b00 + 0x7c) = *(undefined1 *)(DAT_00b33b00 + 0x71);
      FUN_00401040();
    }
    if ((*(int *)(iVar1 + 0x10) == 0) && (*(int *)(iVar1 + 0x14) == 0)) {
      FUN_0041e160(0x4b);
      (**(code **)(*param_1 + 0x44))(0x1000000);
    }
  }
  return;
}



void FUN_00425040(uint param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined4 uVar14;
  
  bVar4 = false;
  if ((param_3 != (int *)0x0) && (cVar5 = (**(code **)(*param_3 + 400))(), cVar5 != '\0')) {
    bVar4 = true;
  }
  if ((((param_1 & 0x4000020) != 0) && (iVar6 = FUN_0041e210(0x12), iVar6 != 0)) && (param_4 != 0))
  {
    iVar7 = FUN_009832e6(param_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0);
    if ((bVar4) && (iVar8 = FUN_005e02e0(1), iVar8 != 0)) {
      iVar7 = iVar8 + 0xc4;
    }
    iVar8 = 0;
    if (*(int *)(iVar6 + 0xc) != 0) {
      iVar8 = *(int *)(*(int *)(iVar6 + 0xc) + 0xc);
    }
    if ((iVar7 != 0) &&
       ((*(int *)(iVar7 + 4) == 0 || (*(int *)(*(int *)(iVar7 + 4) + 0xc) != iVar8)))) {
      FUN_0041e160(0x12);
    }
  }
  if (((param_1 & 0x20) != 0) && (iVar6 = FUN_0041e210(0x22), iVar6 != 0)) {
    uVar9 = FUN_0046b250(*(undefined4 *)(iVar6 + 0xc),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    iVar7 = FUN_009832e6(uVar9);
    *(int *)(iVar6 + 0xc) = iVar7;
    if ((iVar7 == 0) && (iVar6 = FUN_0041e210(0x22), iVar6 != 0)) {
      FUN_00422e20(iVar6,1);
    }
  }
  if (((param_1 & 0x20) != 0) && (iVar6 = FUN_0041e210(0x48), iVar6 != 0)) {
    uVar9 = FUN_0046b250(*(undefined4 *)(iVar6 + 0xc),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0320c,0);
    iVar6 = FUN_009832e6(uVar9);
    if (iVar6 != 0) {
      FUN_0041efd0(iVar6);
    }
  }
  if (bVar4) {
    iVar6 = FUN_0041e210(0x1f);
    if (iVar6 != 0) {
      cVar5 = FUN_00446b80(*(undefined4 *)(*(int *)(iVar6 + 0xc) + 0xc));
      if (cVar5 != '\0') {
        (**(code **)(**(int **)(iVar6 + 0xc) + 0xe8))();
      }
      FUN_005672a0();
      if (*(int *)(iVar6 + 0x14) != 0) {
        uVar9 = FUN_0046b250(*(int *)(iVar6 + 0x14),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
        uVar9 = FUN_009832e6(uVar9);
        *(undefined4 *)(iVar6 + 0x14) = uVar9;
      }
    }
    if ((((param_1 & 0x40000) != 0) && (iVar6 = FUN_0041e210(0x20), iVar6 != 0)) &&
       (*(int *)(iVar6 + 0xc) != 0)) {
      (**(code **)(**(int **)(iVar6 + 0xc) + 0xe8))();
    }
    iVar6 = FUN_0041e210(0x23);
    if (iVar6 != 0) {
      piVar10 = *(int **)(iVar6 + 0xc);
      while ((piVar10 != (int *)0x0 && ((piVar10[1] != 0 || (*piVar10 != 0))))) {
        if (*piVar10 == 0) {
LAB_00425265:
          piVar1 = (int *)piVar10[1];
          if (piVar1 == (int *)0x0) {
            *piVar10 = 0;
          }
          else {
            piVar10[1] = piVar1[1];
            *piVar10 = *piVar1;
            FUN_00401f20(piVar1);
          }
        }
        else {
          uVar9 = FUN_0046b250(*piVar10,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
          iVar6 = FUN_009832e6(uVar9);
          if (iVar6 == 0) goto LAB_00425265;
          *piVar10 = iVar6;
          piVar10 = (int *)piVar10[1];
        }
      }
    }
    if ((param_1 & 0x4000) != 0) {
      iVar6 = FUN_0041e210(0x3e);
      if (*(int *)(iVar6 + 0x18) != 0) {
        uVar9 = FUN_0046b250(*(int *)(iVar6 + 0x18),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
        uVar9 = FUN_009832e6(uVar9);
        *(undefined4 *)(iVar6 + 0x18) = uVar9;
      }
    }
  }
  else {
    if ((param_1 & 0x200000) != 0) {
      uVar14 = 0;
      ppuVar13 = &PTR_PTR_00b03cdc;
      ppuVar12 = &PTR_PTR_00b03850;
      uVar11 = 0;
      uVar9 = FUN_0041e210(0x39);
      iVar6 = FUN_009832e6(uVar9,uVar11,ppuVar12,ppuVar13,uVar14);
      if (iVar6 != 0) {
        piVar10 = (int *)(iVar6 + 0xc);
        iVar6 = (**(code **)(*(int *)(iVar6 + 0xc) + 0x30))();
        iVar7 = (**(code **)(*piVar10 + 0x38))();
        iVar8 = (**(code **)(*piVar10 + 0x20))();
        if (iVar6 != 0) {
          iVar2 = *piVar10;
          uVar9 = FUN_004199c0(iVar6);
          (**(code **)(iVar2 + 0x34))(uVar9);
        }
        if (iVar7 != 0) {
          iVar6 = *piVar10;
          uVar9 = FUN_006a1d90(iVar7);
          (**(code **)(iVar6 + 0x3c))(uVar9);
        }
        if (iVar8 != 0) {
          uVar9 = FUN_0046b250(iVar8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
          uVar9 = FUN_009832e6(uVar9);
          FUN_004a6d70(uVar9);
        }
      }
      uVar14 = 0;
      ppuVar13 = &PTR_PTR_00b03af0;
      ppuVar12 = &PTR_PTR_00b03850;
      uVar11 = 0;
      uVar9 = FUN_0041e210(0x3a);
      iVar6 = FUN_009832e6(uVar9,uVar11,ppuVar12,ppuVar13,uVar14);
      if (iVar6 != 0) {
        iVar7 = (**(code **)(*(int *)(iVar6 + 0xc) + 4))();
        if (iVar7 != 0) {
          uVar9 = FUN_0046b250(iVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
          uVar9 = FUN_009832e6(uVar9);
          FUN_006a32c0(uVar9);
        }
        uVar9 = (**(code **)(*(int *)(iVar6 + 0xc) + 8))(0);
        FUN_0068e030(uVar9);
      }
    }
    if ((param_1 & 0x100000) != 0) {
      FUN_0041e210(0x32);
      FUN_0042b550();
    }
  }
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x46) {
    piVar10 = (int *)0x0;
    iVar6 = FUN_0041e210(0x42);
    if (iVar6 != 0) {
      piVar10 = (int *)(iVar6 + 0xc);
    }
    piVar1 = (int *)0x0;
joined_r0x00425469:
    if ((piVar10 == (int *)0x0) || ((piVar10[1] == 0 && (*piVar10 == 0)))) goto LAB_00425507;
    iVar6 = *piVar10;
    if (iVar6 != 0) {
      uVar9 = FUN_0046b250(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      iVar7 = FUN_009832e6(uVar9);
      if (iVar7 != 0) {
        *piVar10 = iVar7;
        FUN_004203e0(param_3);
        piVar1 = piVar10;
        piVar10 = (int *)piVar10[1];
        goto joined_r0x00425469;
      }
    }
    if (piVar1 != (int *)0x0) {
      FUN_0065c620(iVar6);
      piVar10 = (int *)piVar1[1];
      goto joined_r0x00425469;
    }
    piVar3 = (int *)piVar10[1];
    if (piVar3 == (int *)0x0) {
      *piVar10 = 0;
    }
    else {
      piVar10[1] = piVar3[1];
      *piVar10 = *piVar3;
      FUN_00401f20(piVar3);
    }
    if ((piVar10[1] != 0) || (*piVar10 != 0)) goto joined_r0x00425469;
  }
LAB_00425507:
  if ((0x45 < *(byte *)(DAT_00b33b00 + 0x7c)) &&
     ((iVar6 = FUN_0041e210(0x41), iVar6 != 0 && (*(int *)(iVar6 + 0xc) != 0)))) {
    uVar9 = FUN_0046b250(*(int *)(iVar6 + 0xc),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    iVar6 = FUN_009832e6(uVar9);
    FUN_004203e0(iVar6);
    if (iVar6 != 0) {
      FUN_00424b60(param_3);
    }
  }
  uVar14 = 0;
  ppuVar13 = &PTR_PTR_00b03a38;
  ppuVar12 = &PTR_PTR_00b03850;
  uVar11 = 0;
  uVar9 = FUN_0041e210(0x4e);
  iVar6 = FUN_009832e6(uVar9,uVar11,ppuVar12,ppuVar13,uVar14);
  if (iVar6 == 0) {
LAB_004255f9:
    iVar6 = FUN_0041e210(0x4f);
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0xc) != 0)) {
      uVar9 = FUN_0046b250(*(int *)(iVar6 + 0xc),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      uVar9 = FUN_009832e6(uVar9);
      FUN_00423970(uVar9);
    }
    return;
  }
  piVar10 = *(int **)(iVar6 + 0xc);
joined_r0x0042558b:
  do {
    if (piVar10 == (int *)0x0) goto LAB_004255f9;
    piVar1 = (int *)*piVar10;
    if (piVar1 != (int *)0x0) {
      uVar9 = FUN_0046b250(*piVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      iVar6 = FUN_009832e6(uVar9);
      *piVar1 = iVar6;
      if (iVar6 == 0) {
        piVar3 = (int *)piVar10[1];
        if (piVar3 == (int *)0x0) {
          *piVar10 = 0;
        }
        else {
          piVar10[1] = piVar3[1];
          *piVar10 = *piVar3;
          FUN_00401f20(piVar3);
        }
        FUN_0060d0a0();
        FUN_00401f20(piVar1);
        goto joined_r0x0042558b;
      }
    }
    piVar10 = (int *)piVar10[1];
  } while( true );
}



void FUN_00425650(uint param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  
  bVar2 = false;
  if (param_2 != (int *)0x0) {
    cVar3 = (**(code **)(*param_2 + 400))();
    if (cVar3 != '\0') {
      bVar2 = true;
    }
  }
  if ((param_1 & 0x4000020) != 0) {
    iVar4 = FUN_0041e210(0x12);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x10) != 0)) {
      FUN_004fba50();
    }
  }
  if (((param_1 & 0x40000) != 0) && (bVar2)) {
    FUN_004246f0();
  }
  if (((param_1 & 0x400000) != 0) && (!bVar2)) {
    FUN_0041e160(0x17);
  }
  if ((param_1 & 0x10000000) != 0) {
    FUN_0041e160(0x35);
  }
  if (((param_1 & 0x200000) != 0) && (!bVar2)) {
    FUN_0041e160(0x39);
    FUN_0041e160(0x3a);
  }
  if (((param_1 & 0x100000) != 0) && (!bVar2)) {
    iVar4 = FUN_0041e210(0x32);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) != 0)) {
      uVar1 = param_2[3];
      iVar4 = FUN_0042b410();
      if (uVar1 < *(uint *)(iVar4 + 0xc)) {
        FUN_0067f340(param_2);
      }
      FUN_0041e160(0x32);
    }
  }
  if (((param_1 & 0x80) != 0) && (bVar2)) {
    iVar4 = FUN_0041e210(0x3d);
    if (iVar4 != 0) {
      FUN_00422e20(iVar4,1);
    }
  }
  if (((param_1 & 0x4000) != 0) && (bVar2)) {
    FUN_0041e160(0x3e);
  }
  if (((param_1 & 0x2000) != 0) && (bVar2)) {
    FUN_0041e160(0x52);
  }
  if (((param_1 & 0x1000) != 0) && (bVar2)) {
    iVar4 = FUN_0041e210(0x46);
    if (iVar4 != 0) {
      FUN_00422e20(iVar4,1);
    }
  }
  if ((param_1 & 0x2000000) != 0) {
    FUN_0041e160(0x4a);
  }
  if ((param_1 & 0x1000000) != 0) {
    FUN_0041e160(0x4b);
  }
  if (((param_1 & 0x40000) != 0) && (bVar2)) {
    FUN_004246f0();
  }
  if (((param_1 & 0x400000) != 0) && (!bVar2)) {
    FUN_0041e160(0x17);
  }
  if ((param_1 & 0x10000000) != 0) {
    FUN_0041e160(0x35);
  }
  if ((*(int *)(DAT_00b33b00 + 0x44) == 0x1ffff000) || (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)
     ) {
    if (bVar2) {
      iVar4 = FUN_0041e210(0x1f);
      if (iVar4 != 0) {
        FUN_00422e20(iVar4,1);
      }
      FUN_0041e160(0x21);
      FUN_0041e160(0x1e);
      iVar4 = FUN_0041e210(0x23);
      if (iVar4 != 0) {
        FUN_0041e160(0x23);
      }
      iVar4 = FUN_0041e210(0x4e);
      if (iVar4 != 0) {
        FUN_0041e160(0x4e);
      }
      FUN_0041e160(0x42);
      FUN_00423970(0);
      FUN_0041e160(0x25);
      FUN_0041e160(0x59);
      FUN_0041e160(0x5a);
      return;
    }
    iVar4 = FUN_0041e210(0x41);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) != 0)) {
      FUN_00424c00(param_2);
      FUN_0041e160(0x41);
    }
  }
  return;
}



void FUN_00425900(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  if ((((param_2 != (int *)0x0) && (cVar1 = (**(code **)(*param_2 + 400))(), cVar1 != '\0')) &&
      (iVar2 = FUN_0041e210(0x11), iVar2 != 0)) &&
     ((*(int *)(iVar2 + 0xc) != 0 && (iVar2 = FUN_006ecc80(), iVar2 != 0)))) {
    iVar2 = FUN_0041e210(0x11);
    if (iVar2 != 0) {
      FUN_00422e20(iVar2,1);
    }
    FUN_004cecd0(param_2);
  }
  return;
}



int FUN_00425970(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = FUN_0041e210(0x59);
  if ((iVar2 != 0) && (iVar3 = *(int *)(iVar2 + 0xc), iVar3 != 0)) {
    cVar1 = FUN_00422df0();
    if (cVar1 != '\0') {
      FUN_006b8cf0(*(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x24),
                   *(undefined4 *)(iVar3 + 0x18),param_1);
    }
  }
  return iVar3;
}



void FUN_004259b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a34dec;
  FUN_0041dff0(1);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004259e0(uint param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab902;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_004510b0(uVar3);
  if (iVar4 < 0x4d434359) {
    if (iVar4 == 0x4d434358) {
      param_1 = 0;
      FUN_004510e0(&param_1);
      FUN_00424380(param_1);
    }
    else if (iVar4 < 0x47484359) {
      if (iVar4 == 0x47484358) {
        param_1 = 0;
        FUN_004510e0(&param_1);
        FUN_0041ee90(param_1);
      }
      else if (iVar4 < 0x44455359) {
        if (iVar4 == 0x44455358) {
          param_1 = param_1 & 0xffffff00;
          if (*(int *)(uVar1 + 0x254) == 4) {
            local_24 = (undefined4 *)0x0;
            FUN_004510e0(&local_24);
            param_1 = CONCAT31(param_1._1_3_,local_24._0_1_);
            FUN_00423bd0(param_1);
          }
          else {
            FUN_00450c20(&param_1,1);
            FUN_00423bd0(param_1);
          }
        }
        else if (iVar4 == 0x424c4758) {
          param_1 = 0;
          FUN_004510e0(&param_1);
          FUN_00423720(param_1);
        }
        else if (iVar4 == 0x434f4c58) {
          iVar4 = FUN_0041e210(0x31);
          if (iVar4 == 0) {
            puVar5 = (undefined1 *)FUN_00401f00(0xc);
            puVar7 = (undefined1 *)0x0;
            if (puVar5 != (undefined1 *)0x0) {
              *(undefined4 *)(puVar5 + 4) = 0;
              *puVar5 = 0;
              puVar5[8] = 0;
              puVar7 = puVar5;
            }
            param_1 = FUN_00401f00(0x10);
            local_4 = 0;
            if (param_1 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = FUN_00429a80(puVar7);
            }
            local_4 = 0xffffffff;
            FUN_0041e0a0(iVar4);
          }
          else {
            puVar7 = *(undefined1 **)(iVar4 + 0xc);
          }
          if (*(int *)(uVar1 + 0x254) == 0xc) {
            FUN_00450c20(puVar7,0xc);
          }
          else {
            if (*(int *)(uVar1 + 0x254) != 0x10) {
              FUN_004a7a60("Unrecognized format for lock data in file \'%s\'.",uVar1 + 0x1c);
              FUN_00422e20(iVar4,1);
              goto LAB_00426251;
            }
            FUN_00450c20(&local_24,0x10);
            puVar7[8] = (undefined1)local_18;
            *puVar7 = local_24._0_1_;
            *(undefined4 *)(puVar7 + 4) = local_20;
          }
          if (puVar7 != (undefined1 *)0x0) {
            puVar7[8] = puVar7[8] | 1;
          }
        }
        else if (iVar4 == 0x43524d58) {
          param_1 = 0;
          FUN_004510e0(&param_1);
          FUN_004206a0(param_1);
        }
      }
      else if (iVar4 == 0x44475258) {
        iVar4 = FUN_0041e210(0x19);
        if (iVar4 == 0) {
          param_1 = FUN_00401f00(0x10);
          local_4 = 4;
          if (param_1 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_0042a300();
          }
          local_4 = 0xffffffff;
          param_1 = FUN_00401f00(8);
          local_4 = 5;
          if (param_1 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = FUN_00497210();
          }
          local_4 = 0xffffffff;
          *(undefined4 *)(iVar4 + 0xc) = uVar6;
          FUN_0041e0a0(iVar4);
        }
        cVar2 = FUN_00497470(uVar1);
        if (cVar2 == '\0') {
          FUN_004a7a60("Failed to load RagDoll Data.");
          FUN_00422e20(iVar4,1);
        }
      }
      else if (iVar4 == 0x444f4c58) {
        local_24 = (undefined4 *)0x0;
        local_20 = 0;
        local_1c = 0x3f7851ec;
        FUN_00450c20(&local_24,0xc);
        FUN_00420100(&local_24);
      }
      else if (iVar4 == 0x45535558) {
        param_1 = 0;
        FUN_004510e0(&param_1);
        FUN_0041ed50(param_1);
      }
    }
    else if (iVar4 < 0x4b524d59) {
      if (iVar4 == 0x4b524d58) {
        iVar4 = FUN_0041e6d0();
        if (iVar4 == 0) {
          param_1 = FUN_00401f00(0x10);
          local_4 = 2;
          if (param_1 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = FUN_0042b3f0();
          }
          local_4 = 0xffffffff;
          FUN_00423590(uVar6);
        }
        FUN_0042b200(uVar1);
      }
      else if (iVar4 == 0x47525458) {
        param_1 = 0;
        FUN_004510e0(&param_1);
        FUN_00420d40(param_1);
      }
      else if (iVar4 == 0x49435058) {
        FUN_0044fea0();
      }
      else if (iVar4 == 0x4b4e5258) {
        param_1 = 0;
        FUN_004510e0(&param_1);
        FUN_004237e0(param_1);
      }
    }
    else if (iVar4 == 0x4c455458) {
      iVar4 = FUN_0041e6b0();
      if (iVar4 == 0) {
        param_1 = FUN_00401f00(0x1c);
        local_4 = 1;
        if (param_1 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_0042b590();
        }
        local_4 = 0xffffffff;
        FUN_004234d0(uVar6);
      }
      FUN_0042b670(uVar1);
    }
    else if (iVar4 == 0x4c4f5358) {
      if (*(int *)(uVar1 + 0x254) == 1) {
        param_1 = (uint)param_1._1_3_ << 8;
        FUN_00450c20(&param_1,1);
        FUN_0041ef30((int)(char)param_1);
      }
    }
    else if (iVar4 == 0x4c535058) {
      local_24 = (undefined4 *)0x0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      FUN_00450c20(&local_24,0x14);
      FUN_0041f4c0(local_24,0,&local_20,local_14);
    }
  }
  else if (iVar4 < 0x53524859) {
    if (iVar4 == 0x53524858) {
      param_1 = 0;
      FUN_004510e0(&param_1);
      FUN_00420860(param_1);
    }
    else if (iVar4 < 0x4e535059) {
      if (iVar4 == 0x4e535058) {
        param_1 = 0;
        FUN_004510e0(&param_1);
        FUN_0041efd0(param_1);
      }
      else if (iVar4 == 0x4d434c58) {
        local_10 = 0;
        FUN_004510e0(&local_10);
        FUN_00420780(local_10);
      }
      else if (iVar4 == 0x4d495458) {
        param_1 = 0;
        FUN_004510e0(&param_1);
        FUN_0041edf0(param_1);
      }
      else if (iVar4 == 0x4d545258) {
        param_1 = 0;
        FUN_004510e0(&param_1);
        FUN_004205c0(param_1);
      }
    }
    else if (iVar4 == 0x4e574f58) {
      param_1 = 0;
      FUN_004510e0(&param_1);
      FUN_00423660(param_1);
    }
    else if (iVar4 == 0x50534558) {
      local_24 = (undefined4 *)0x0;
      local_20 = 0;
      FUN_00450c20(&local_24,8);
      FUN_00420280(local_24);
      FUN_00420380(local_20);
    }
    else if (iVar4 == 0x524c4358) {
      local_10 = *(uint *)(uVar1 + 0x254);
      uVar3 = local_10 >> 2;
      if ((local_10 & 3) == 0) {
        param_1 = FUN_00401f00(0x10);
        local_4 = 3;
        if (param_1 == 0) {
          param_1 = 0;
        }
        else {
          param_1 = FUN_004a62d0(0);
        }
        local_4 = 0xffffffff;
        local_24 = (undefined4 *)FUN_00401f00(uVar3 * 4);
        FUN_00450c20(local_24,local_10);
        puVar8 = local_24;
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          FUN_0046bb20(puVar8,uVar1);
          iVar4 = FUN_004a63e0(*puVar8);
          if (iVar4 != 0) {
            FUN_004a6350(iVar4);
          }
          puVar8 = puVar8 + 1;
        }
        FUN_004241e0(param_1);
        FUN_00401f20(local_24);
      }
      else {
        FUN_004a7a60("Invalid Extra Data - Region List in file \"%s\".",uVar1 + 0x1c);
      }
    }
  }
  else if (iVar4 < 0x544e4359) {
    if (iVar4 == 0x544e4358) {
      param_1 = 0;
      FUN_004510e0(&param_1);
      FUN_004238a0(param_1);
    }
    else if (iVar4 == 0x54434158) {
      param_1 = 0;
      FUN_004510e0(&param_1);
      FUN_00423da0(param_1);
    }
    else if (iVar4 == 0x544c4858) {
      param_1 = 0;
      FUN_004510e0(&param_1);
      FUN_0041ecb0((float)(int)param_1);
    }
    else if (iVar4 == 0x544d4358) {
      param_1 = (uint)param_1._1_3_ << 8;
      FUN_00450c20(&param_1,1);
      FUN_004242c0((int)(char)param_1);
    }
  }
  else if (iVar4 == 0x54574358) {
    param_1 = 0;
    FUN_004510e0(&param_1);
    FUN_004204e0(param_1);
  }
  else if (iVar4 == 0x574c4358) {
    param_1 = 0;
    FUN_004510e0(&param_1);
    FUN_00423ff0(param_1);
  }
LAB_00426251:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00426270(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int in_ECX;
  undefined4 unaff_retaddr;
  char *pcVar9;
  
  FUN_00401020("ExtraDataList::InitItem");
  iVar1 = *(int *)(in_ECX + 4);
  uVar4 = FUN_0046b680(0xffffffff);
  do {
    if (iVar1 == 0) {
      FUN_00401040();
      return;
    }
    iVar2 = *(int *)(iVar1 + 8);
    switch(*(undefined1 *)(iVar1 + 4)) {
    case 5:
      iVar6 = *(int *)(iVar1 + 0xc);
      FUN_0046bb20(&stack0xfffffff4,uVar4);
      uVar7 = FUN_0046b250(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03d7c,0);
      iVar8 = FUN_009832e6(uVar7);
      *(int *)(iVar1 + 0xc) = iVar8;
      if (iVar8 == 0) {
        pcVar9 = "Unable to find cell water type %08X. Water data will be removed.";
LAB_004266ed:
        FUN_004a7a60(pcVar9,iVar6);
LAB_004266f5:
        FUN_00422e20(iVar1,1);
      }
      break;
    case 0xc:
      iVar6 = *(int *)(iVar1 + 0xc);
      FUN_0046bb20(&stack0xfffffff4,uVar4);
      uVar7 = FUN_0046b250(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03d98,0);
      iVar8 = FUN_009832e6(uVar7);
      *(int *)(iVar1 + 0xc) = iVar8;
      if (iVar8 == 0) {
        pcVar9 = "Unable to find cell climate %08X. Climate data will be removed.";
        goto LAB_004266ed;
      }
      break;
    case 0x1e:
      iVar6 = *(int *)(iVar1 + 0xc);
      FUN_0046bb20(&stack0xfffffff4,uVar4);
      iVar8 = FUN_0046b250(iVar6);
      *(int *)(iVar1 + 0xc) = iVar8;
      if (iVar8 == 0) {
        pcVar9 = 
        "Unable to find package start location cell %08X. Package start location extra data will be removed."
        ;
        goto LAB_004266ed;
      }
      break;
    case 0x27:
      iVar6 = *(int *)(iVar1 + 0xc);
      FUN_0046bb20(&stack0xfffffff4,uVar4);
      iVar8 = FUN_0046b250(iVar6);
      *(int *)(iVar1 + 0xc) = iVar8;
      if (iVar8 == 0) {
        pcVar9 = "Unable to find ownership owner form %08X. Ownership will be removed.";
        goto LAB_004266ed;
      }
      break;
    case 0x28:
      iVar6 = *(int *)(iVar1 + 0xc);
      FUN_0046bb20(&stack0xfffffff4,uVar4);
      uVar7 = FUN_0046b250(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03db4,0);
      iVar8 = FUN_009832e6(uVar7);
      *(int *)(iVar1 + 0xc) = iVar8;
      if (iVar8 == 0) {
        pcVar9 = "Unable to find ownership condition global %08X. Ownership will be removed.";
        goto LAB_004266ed;
      }
      break;
    case 0x31:
      iVar8 = *(int *)(iVar1 + 0xc);
      iVar6 = *(int *)(iVar8 + 4);
      if (iVar6 != 0) {
        FUN_0046bb20(&stack0xfffffff4,uVar4);
        uVar7 = FUN_0046b250(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03dcc,0);
        iVar5 = FUN_009832e6(uVar7);
        *(int *)(iVar8 + 4) = iVar5;
        if (iVar5 == 0) {
          pcVar9 = "Unable to find key %08X for lock data. Lock will be removed.";
          goto LAB_004266ed;
        }
      }
      break;
    case 0x32:
      cVar3 = FUN_0042b700(unaff_retaddr);
      if (cVar3 == '\0') goto LAB_004266f5;
      break;
    case 0x3f:
      iVar6 = *(int *)(iVar1 + 0xc);
      FUN_0046bb20(&stack0xfffffff4,uVar4);
      uVar7 = FUN_0046b250(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      iVar8 = FUN_009832e6(uVar7);
      *(int *)(iVar1 + 0xc) = iVar8;
      if (iVar8 == 0) {
        pcVar9 = 
        "Unable to find enable state parent %08X. Enable state parent data will be removed.";
        goto LAB_004266ed;
      }
      iVar6 = FUN_009832e6(unaff_retaddr,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      if ((iVar6 == 0) || (cVar3 = FUN_004e0e40(), cVar3 == '\0')) {
        FUN_004a7a60("Enable state parent loop detected. Parent removed.");
        goto LAB_004266f5;
      }
      FUN_00424a70(iVar6);
      break;
    case 0x43:
      iVar6 = *(int *)(iVar1 + 0xc);
      FUN_0046bb20(&stack0xfffffff4,uVar4);
      uVar7 = FUN_0046b250(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      iVar8 = FUN_009832e6(uVar7);
      *(int *)(iVar1 + 0xc) = iVar8;
      if (iVar8 == 0) {
        pcVar9 = 
        "Unable to find random door teleport marker %08X. Random door teleport marker data will be removed."
        ;
        goto LAB_004266ed;
      }
      break;
    case 0x44:
      iVar6 = *(int *)(iVar1 + 0xc);
      FUN_0046bb20(&stack0xfffffff4,uVar4);
      uVar7 = FUN_0046b250(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      iVar8 = FUN_009832e6(uVar7);
      *(int *)(iVar1 + 0xc) = iVar8;
      if (iVar8 == 0) {
        pcVar9 = "Unable to find merchant container %08X. Merchant container data will be removed.";
        goto LAB_004266ed;
      }
      break;
    case 0x48:
      iVar6 = *(int *)(iVar1 + 0xc);
      FUN_0046bb20(&stack0xfffffff4,uVar4);
      uVar7 = FUN_0046b250(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0320c,0);
      iVar8 = FUN_009832e6(uVar7);
      *(int *)(iVar1 + 0xc) = iVar8;
      if (iVar8 == 0) {
        pcVar9 = "Unable to find poison %08X. Poison data will be removed.";
        goto LAB_004266ed;
      }
      break;
    case 0x4d:
      iVar6 = *(int *)(iVar1 + 0xc);
      FUN_0046bb20(&stack0xfffffff4,uVar4);
      uVar7 = FUN_0046b250(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      iVar8 = FUN_009832e6(uVar7);
      *(int *)(iVar1 + 0xc) = iVar8;
      if (iVar8 == 0) {
        pcVar9 = "Unable to find XMarker target %08X. XMarker target data will be removed.";
        goto LAB_004266ed;
      }
      break;
    case 0x58:
      iVar6 = *(int *)(iVar1 + 0xc);
      FUN_0046bb20(&stack0xfffffff4,uVar4);
      uVar7 = FUN_0046b250(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      iVar8 = FUN_009832e6(uVar7);
      *(int *)(iVar1 + 0xc) = iVar8;
      if ((iVar8 != 0) && (cVar3 = FUN_004d74d0(), cVar3 == '\0')) {
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
        pcVar9 = "Unable to find travel horse %08X. Travel horse data will be removed.";
        goto LAB_004266ed;
      }
    }
    iVar1 = iVar2;
  } while( true );
}



int FUN_004267b0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  LONG LVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_0041e210(0x49);
  if (iVar4 != 0) {
    piVar1 = *(int **)(iVar4 + 0xc);
    if (piVar1 != (int *)0x0) {
      puVar2 = (undefined4 *)*piVar1;
      if (puVar2 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puVar2 + 1);
        if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
      FUN_00401f20(piVar1);
    }
    *(undefined4 *)(iVar4 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return iVar4;
  }
  iVar4 = FUN_00401f00(0x10,uVar3);
  local_4 = 0;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00429970(param_1);
  }
  local_4 = 0xffffffff;
  *(undefined1 *)(iVar4 + 4) = 0x49;
  FUN_0041e0a0(iVar4);
  *unaff_FS_OFFSET = local_c;
  return iVar4;
}



void FUN_00426890(byte param_1)

{
  FUN_00424580();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004268b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    cVar1 = FUN_005660a0(uVar2);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x20) != '\x01')) goto LAB_004269c6;
    cVar1 = FUN_005660e0();
    if ((cVar1 != '\0') ||
       ((*(char *)(param_1 + 0x20) == '\x13' || (*(char *)(param_1 + 0x20) == '\x11'))))
    goto LAB_004269c6;
  }
  iVar3 = FUN_0041e210(0x1f);
  if (param_1 != 0) {
    if (iVar3 == 0) {
      iVar3 = FUN_00401f00(0x1c);
      local_4 = 0;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0042a1a0(param_1,param_2,param_3,param_4,param_5);
      }
      local_4 = 0xffffffff;
      FUN_0041e0a0(uVar4);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    *(int *)(iVar3 + 0xc) = param_1;
    *(undefined4 *)(iVar3 + 0x10) = param_2;
    *(undefined4 *)(iVar3 + 0x14) = param_3;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (iVar3 != 0) {
    iVar3 = FUN_0041e210(0x1f);
    if (iVar3 != 0) {
      FUN_00422e20(iVar3,1);
    }
  }
LAB_004269c6:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004269e0(float param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x3d);
  if (iVar2 == 0) {
    iVar3 = FUN_00401f00(0x10,uVar1);
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      local_4 = iVar2;
      iVar2 = FUN_0042a290(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar2);
  }
  else {
    *(float *)(iVar2 + 0xc) = *(float *)(iVar2 + 0xc) + param_1;
  }
  if (*(float *)(iVar2 + 0xc) <= 0.0) {
    iVar2 = FUN_0041e210(0x3d);
    if (iVar2 != 0) {
      FUN_00422e20(iVar2,1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00426a90(uint param_1,undefined4 param_2,int *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  char *pcVar11;
  short asStack_23c [2];
  char local_238;
  char local_237;
  byte bStack_236;
  char local_235;
  int iStack_234;
  char cStack_22d;
  undefined1 uStack_22c;
  byte bStack_22b;
  undefined1 uStack_22a;
  undefined1 uStack_229;
  ushort auStack_228 [2];
  ushort auStack_224 [2];
  ushort auStack_220 [2];
  uint local_21c;
  ushort auStack_218 [2];
  ushort auStack_214 [2];
  int local_210;
  undefined4 uStack_20c;
  int *local_208;
  int iStack_204;
  undefined4 uStack_200;
  int *piStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 auStack_1e0 [4];
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  int iStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int local_144;
  undefined4 uStack_140;
  undefined1 auStack_13c [12];
  undefined4 uStack_130;
  undefined1 auStack_12c [4];
  undefined1 auStack_128 [4];
  undefined1 auStack_124 [4];
  int iStack_120;
  undefined1 uStack_118;
  undefined1 auStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ab9ac;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)asStack_23c;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffdb4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_208 = param_3;
  local_21c = 0;
  local_210 = 0;
  cVar3 = FUN_0045a170(uVar4);
  if (cVar3 != '\0') {
    FUN_004534d0(&local_144,4);
    if (local_144 != 0x4b4f4c42) {
      puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\ExtraDataList.cpp",0x1b6f,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar5 = (int *)FUN_0046b250(*puVar2);
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\ExtraDataList.cpp",0x1b6f,*puVar2,uVar6);
      }
    }
    local_210 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_21c,2);
  }
  local_238 = '\0';
  local_235 = '\0';
  local_237 = '\0';
  piVar5 = (int *)FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  piStack_1fc = piVar5;
  FUN_004534d0(auStack_224,2);
  iStack_204 = 0;
  if (auStack_224[0] == 0) {
LAB_00428003:
    if ((param_1 & 0x4000000) != 0) {
      FUN_0041e160(0x12);
    }
  }
  else {
    do {
      FUN_004534d0(&bStack_22b,1);
      switch(bStack_22b) {
      case 0x11:
        if ((param_3 != (int *)0x0) && (cVar3 = (**(code **)(*param_3 + 400))(), cVar3 != '\0')) {
          iVar10 = FUN_0041ff80();
          if (iVar10 != 0) {
            iVar10 = FUN_0041e210(0x11);
            if (iVar10 != 0) {
              FUN_00422e20(iVar10,1);
            }
            FUN_004cecd0(param_3);
          }
          FUN_0045ba00(&uStack_1b8,4);
          cVar3 = FUN_004db4a0();
          if ((cVar3 != '\0') && (param_3 != DAT_00b333c4)) {
            uVar6 = FUN_0046b250(uStack_1b8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
            iVar10 = FUN_009832e6(uVar6);
            if (iVar10 != 0) {
              uVar6 = FUN_004ef1e0();
              FUN_004247b0(uVar6);
              piVar5 = param_3;
              FUN_004ef1e0(param_3);
              FUN_004d35d0(piVar5);
              iVar10 = FUN_006ecc80();
              if (iVar10 != 0) {
                FUN_006ecc80();
                cVar3 = FUN_004c97f0();
                if (cVar3 != '\0') {
                  piVar5 = param_3;
                  FUN_006ecc80(param_3);
                  FUN_004cecd0(piVar5);
                }
              }
            }
          }
        }
        break;
      case 0x12:
        if ((param_1 & 0x4000020) != 0) {
          local_235 = '\x01';
          FUN_0045ba00(&uStack_1c4,4);
          uVar6 = FUN_0046b250(uStack_1c4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03358,0);
          iVar10 = FUN_009832e6(uVar6);
          if (iVar10 != 0) {
            FUN_0041f090(iVar10);
          }
          iVar7 = FUN_0041e920();
          if (iVar7 == 0) {
            iVar7 = 0;
            if (iVar10 != 0) {
              iVar7 = FUN_004fbdc0();
            }
            FUN_0041f130(iVar7);
            if (iVar7 == 0) {
              iStack_234 = FUN_00401f00(0x14);
              if (iStack_234 == 0) {
                iVar10 = 0;
              }
              else {
                iStack_4 = iVar7;
                iVar10 = FUN_004f9db0();
              }
              iStack_4 = 0xffffffff;
              FUN_004fb760();
              if (iVar10 != 0) {
                FUN_004fb4e0();
                FUN_00401f20(iVar10);
              }
              break;
            }
          }
          FUN_004fb760();
        }
        break;
      default:
        FUN_004a7a60("No loading code found in ExtraDataList::LoadGame() for type %i.  The order of the extra data enum probably changed.  Errors may occur."
                     ,bStack_22b);
        break;
      case 0x17:
        if ((param_1 & 0x400000) != 0) {
          FUN_004534d0(auStack_128,4);
        }
        break;
      case 0x1b:
        if ((param_1 & 0x20) != 0) {
          FUN_0041f200(1,0);
        }
        break;
      case 0x1c:
        if ((param_1 & 0x20) != 0) {
          FUN_0041f200(1,1);
        }
        break;
      case 0x1e:
        FUN_0045ba00(&uStack_194,4);
        FUN_004534d0(auStack_13c,0xc);
        FUN_004534d0(&uStack_130,4);
        uStack_140 = FUN_0046b250(uStack_194);
        iVar10 = FUN_009832e6(uStack_140,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
        iVar7 = FUN_009832e6(uStack_140,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
        if ((iVar10 != 0) || (iVar7 != 0)) {
          FUN_0041f4c0(iVar10,iVar7,auStack_13c,uStack_130);
        }
        break;
      case 0x1f:
        FUN_0045ba00(&uStack_20c,4);
        FUN_004534d0(&uStack_16c,4);
        FUN_0045ba00(&uStack_1ac,4);
        FUN_004534d0(&uStack_154,1);
        FUN_004534d0(&uStack_1b4,1);
        if ((*(byte *)(DAT_00b33b00 + 0x7c) < 0x40) ||
           (cVar3 = FUN_00446b80(uStack_20c), cVar3 == '\0')) {
          uVar6 = FUN_0046b250(uStack_20c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03e00,0);
          piVar5 = (int *)FUN_009832e6(uVar6);
          if (piVar5 == (int *)0x0) break;
        }
        else {
          FUN_004534d0(&uStack_174,1);
          if (piVar5 == (int *)0x0) {
            (**(code **)(*DAT_00b34d90 + 0x18))("Package being created on non-actor!");
          }
          piVar5 = (int *)FUN_00463ec0(uStack_20c,piVar5,uStack_174);
          (**(code **)(*piVar5 + 0xe4))();
        }
        FUN_004268b0(piVar5,uStack_16c,uStack_1ac,uStack_154,uStack_1b4);
        break;
      case 0x20:
        if (((param_1 & 0x40000) != 0) && (FUN_0045ba00(&iStack_1a4,4), iStack_1a4 != 0)) {
          piVar5 = (int *)FUN_00463ec0(iStack_1a4,0,0x11);
          (**(code **)(*piVar5 + 0xe4))();
          FUN_0041fbc0(piVar5);
        }
        break;
      case 0x21:
        FUN_004534d0(auStack_220,2);
        iVar10 = 0;
        if (auStack_220[0] != 0) {
          do {
            FUN_0045ba00(&uStack_19c,4);
            FUN_004534d0(&uStack_164,1);
            uVar6 = FUN_0046b250(uStack_19c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03e00,0);
            iVar7 = FUN_009832e6(uVar6);
            if (iVar7 != 0) {
              FUN_0041ffc0(iVar7,uStack_164);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)(uint)auStack_220[0]);
        }
        break;
      case 0x22:
        if ((param_1 & 0x20) != 0) {
          FUN_0045ba00(&uStack_148,4);
          FUN_0041fa40(uStack_148);
        }
        break;
      case 0x23:
        FUN_004534d0(auStack_228,2);
        iVar10 = 0;
        if (auStack_228[0] != 0) {
          do {
            FUN_0045ba00(&uStack_1f4,4);
            FUN_00424c50(uStack_1f4);
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)(uint)auStack_228[0]);
        }
        break;
      case 0x25:
        FUN_0041f150(1);
        break;
      case 0x27:
        if ((param_1 & 0xa0) != 0) {
          FUN_0045ba00(&uStack_14c,4);
          uVar6 = FUN_0046b250(uStack_14c);
          FUN_00423660(uVar6);
          local_238 = '\x01';
        }
        break;
      case 0x28:
        if ((param_1 & 0x120) != 0) {
          FUN_0045ba00(&uStack_1cc,4);
          uVar6 = FUN_0046b250(uStack_1cc,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03db4,0);
          iVar10 = FUN_009832e6(uVar6);
          if (iVar10 != 0) {
            FUN_00423720(iVar10);
          }
        }
        break;
      case 0x29:
        if ((param_1 & 0x220) != 0) {
          FUN_004534d0(&uStack_17c,4);
          FUN_004237e0(uStack_17c);
        }
        break;
      case 0x2a:
        if ((param_1 & 0x20) != 0) {
          FUN_004534d0(&uStack_178,2);
          FUN_004238a0(uStack_178);
        }
        break;
      case 0x2b:
        if ((param_1 & 0x20) != 0) {
          FUN_004534d0(&uStack_158,4);
          FUN_0041ecb0(uStack_158);
        }
        break;
      case 0x2c:
        if ((param_1 & 0x20) != 0) {
          FUN_004534d0(&uStack_1ec,1);
          FUN_0041ed50(uStack_1ec);
        }
        break;
      case 0x2d:
        if ((param_1 & 0x20) != 0) {
          FUN_004534d0(&uStack_18c,4);
          FUN_0041edf0(uStack_18c);
        }
        break;
      case 0x2e:
        if ((param_1 & 0x20) != 0) {
          FUN_004534d0(&uStack_1e4,4);
          FUN_0041ee90(uStack_1e4);
        }
        break;
      case 0x2f:
        if ((param_1 & 0x20) != 0) {
          FUN_004534d0(&cStack_22d,1);
          FUN_0041ef30((int)cStack_22d);
        }
        break;
      case 0x31:
        if ((param_1 & 0x40) != 0) {
          puVar8 = (undefined1 *)FUN_00401f00(0xc);
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = (undefined1 *)0x0;
          }
          else {
            *puVar8 = 0;
            *(undefined4 *)(puVar8 + 4) = 0;
            puVar8[8] = 0;
          }
          if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x15) {
LAB_00426e24:
            FUN_004534d0(auStack_124,0x10);
            *(int *)(puVar8 + 4) = iStack_120;
            *puVar8 = auStack_124[0];
            puVar8[8] = uStack_118;
            if (iStack_120 != 0) {
              uVar6 = FUN_0046b250(iStack_120,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03dcc,0);
              uVar6 = FUN_009832e6(uVar6);
              *(undefined4 *)(puVar8 + 4) = uVar6;
            }
          }
          else {
            FUN_004534d0(puVar8,1);
            FUN_0045ba00(&iStack_15c,4);
            if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x1a) {
              FUN_0045ba00(auStack_12c,4);
            }
            FUN_004534d0(puVar8 + 8,1);
            if (iStack_15c != 0) {
              uVar6 = FUN_0046b250(iStack_15c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03dcc,0);
              uVar6 = FUN_009832e6(uVar6);
              *(undefined4 *)(puVar8 + 4) = uVar6;
            }
            if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x15) goto LAB_00426e24;
          }
          FUN_0041eaf0(puVar8);
        }
        break;
      case 0x32:
        if ((param_1 & 0x100000) != 0) {
          iStack_234 = FUN_00401f00(0x1c);
          iStack_4 = 3;
          if (iStack_234 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = FUN_0042b590();
          }
          iStack_4 = 0xffffffff;
          FUN_0042b500();
          FUN_004234d0(uVar6);
        }
        break;
      case 0x33:
        if ((param_1 & 0x400) != 0) {
          FUN_004534d0(&uStack_22a,1);
          iVar10 = FUN_0041e210(0x33);
          if (iVar10 != 0) {
            *(undefined1 *)(*(int *)(iVar10 + 0xc) + 0xc) = uStack_22a;
          }
        }
        break;
      case 0x35:
        if ((param_1 & 0x10000000) != 0) {
          FUN_004209d0(1);
        }
        break;
      case 0x36:
        if ((param_1 & 0x20) != 0) {
          FUN_004534d0(&uStack_1f8,4);
          FUN_004534d0(&uStack_1bc,1);
          FUN_0041fe90(uStack_1f8);
          FUN_0041ff40(uStack_1bc);
        }
        break;
      case 0x37:
        if ((*(byte *)(DAT_00b33b00 + 0x7c) < 0x43) && ((param_1 & 0x30) != 0)) {
          FUN_004534d0(&uStack_200,4);
          if (param_3 == (int *)0x0) {
            FUN_00423a30(uStack_200);
          }
          else {
            FUN_004db520(uStack_200);
          }
        }
        if ((0x42 < *(byte *)(DAT_00b33b00 + 0x7c)) && ((param_1 & 0x20) != 0)) {
          FUN_004534d0(&uStack_1dc,4);
          FUN_00423a30(uStack_1dc);
        }
        break;
      case 0x39:
        if ((param_1 & 0x200000) != 0) {
          FUN_0045ba00(&uStack_1e8,4);
          FUN_0045ba00(auStack_1e0,4);
          FUN_0045ba00(&uStack_1f0,4);
          iStack_234 = FUN_00401f00(0x24);
          iStack_4 = 1;
          if (iStack_234 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = FUN_006a2fe0(uStack_1f0);
          }
          iStack_4 = 0xffffffff;
          (**(code **)(*(int *)(iVar10 + 0xc) + 0x34))(uStack_1e8);
          (**(code **)(*(int *)(iVar10 + 0xc) + 0x3c))(uStack_1e4);
          FUN_0041e0a0(iVar10);
        }
        break;
      case 0x3a:
        if ((param_1 & 0x200000) != 0) {
          FUN_0045ba00(&uStack_1d8,4);
          iStack_234 = FUN_00401f00(0x20);
          iStack_4 = 2;
          if (iStack_234 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = FUN_006a3310(uStack_1d8);
          }
          iStack_4 = 0xffffffff;
          uVar6 = (**(code **)(*(int *)(iVar10 + 0xc) + 8))(0);
          FUN_0068ee90(uVar6);
          FUN_0041e0a0(iVar10);
        }
        break;
      case 0x3c:
        if ((param_1 & 0x2000) != 0) {
          FUN_00452170(4);
        }
        break;
      case 0x3d:
        if ((param_1 & 0x80) != 0) {
          FUN_00424770();
          FUN_004534d0(&uStack_1d4,4);
          FUN_004269e0(uStack_1d4);
        }
        break;
      case 0x3e:
        if ((param_1 & 0x4000) != 0) {
          iStack_234 = FUN_00401f00(0x1c);
          iStack_4 = 4;
          if (iStack_234 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = FUN_0042a510();
          }
          iStack_4 = 0xffffffff;
          FUN_0045ba00(&uStack_1d0,4);
          uVar6 = 0xc;
          iVar7 = iVar10 + 0xc;
          *(undefined4 *)(iVar10 + 0x18) = uStack_1d0;
LAB_004277da:
          FUN_004534d0(iVar7,uVar6);
          FUN_0041e0a0(iVar10);
        }
        break;
      case 0x41:
        FUN_0045ba00(&iStack_1a8,4);
        if (iStack_1a8 != 0) {
          FUN_004203e0(iStack_1a8);
        }
        break;
      case 0x42:
        FUN_004534d0(&bStack_236,1);
        uVar4 = 0;
        if (bStack_236 != 0) {
          do {
            FUN_0045ba00(&iStack_1b0,4);
            if (iStack_1b0 != 0) {
              FUN_00424b60(iStack_1b0);
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < bStack_236);
        }
        break;
      case 0x45:
        FUN_0045ba00(&uStack_1a0,4);
        uVar6 = FUN_0046b250(uStack_1a0,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03de4,0);
        iVar10 = FUN_009832e6(uVar6);
        if ((piVar5 != (int *)0x0) && (iVar10 != 0)) {
          (**(code **)(*piVar5 + 300))(iVar10);
        }
        break;
      case 0x46:
        if ((param_1 & 0x1000) != 0) {
          iStack_234 = FUN_00401f00(0x1c);
          iStack_4 = 5;
          if (iStack_234 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = FUN_0042a6e0();
          }
          iStack_4 = 0xffffffff;
          FUN_004534d0(iVar10 + 0xc,4);
          FUN_004534d0(iVar10 + 0x10,4);
          FUN_004534d0(iVar10 + 0x14,1);
          uVar6 = 4;
          iVar7 = iVar10 + 0x18;
          goto LAB_004277da;
        }
        break;
      case 0x47:
        if ((param_1 & 0x20) != 0) {
          FUN_0041f370(1);
        }
        break;
      case 0x48:
        if ((param_1 & 0x20) != 0) {
          FUN_0045ba00(&uStack_1c8,4);
          FUN_0041efd0(uStack_1c8);
        }
        break;
      case 0x4a:
        if ((param_1 & 0x2000000) != 0) {
          if (((0x14 < *(byte *)(DAT_00b33b00 + 0x7c)) && (*(byte *)(DAT_00b33b00 + 0x7c) < 0x17))
             && (FUN_004534d0(&iStack_1c0,4), iStack_1c0 < 0x2b)) {
            FUN_00424de0((&PTR_DAT_00b102e0)[iStack_1c0 * 9]);
          }
          if ((*(byte *)(DAT_00b33b00 + 0x7c) < 0x15) || (0x16 < *(byte *)(DAT_00b33b00 + 0x7c))) {
            FUN_004534d0(&uStack_229,1);
            _memset(auStack_114,0,0x104);
            FUN_004534d0(auStack_114,uStack_229);
            FUN_00424de0(auStack_114);
          }
        }
        break;
      case 0x4b:
        if ((param_1 & 0x1000000) != 0) {
          FUN_004534d0(asStack_23c,2);
          if (asStack_23c[0] != 0) {
            uVar6 = FUN_0040fd70(asStack_23c[0]);
            FUN_004534d0(uVar6,asStack_23c[0]);
            FUN_00421000(uVar6);
          }
          FUN_004534d0(asStack_23c,2);
          if (asStack_23c[0] != 0) {
            uVar6 = FUN_0040fd70(asStack_23c[0]);
            FUN_004534d0(uVar6,asStack_23c[0]);
            FUN_004210e0(uVar6);
          }
          FUN_004534d0(asStack_23c,2);
          if (asStack_23c[0] != 0) {
            uVar6 = FUN_0040fd70(asStack_23c[0]);
            FUN_004534d0(uVar6,asStack_23c[0]);
            FUN_004211e0(uVar6);
          }
          if (param_3[0xf] != 0) {
            local_237 = '\x01';
          }
        }
        break;
      case 0x4e:
        FUN_004534d0(auStack_214,2);
        iStack_234 = FUN_00401f00(0x10);
        iStack_4 = 7;
        if (iStack_234 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_0042a980();
        }
        uVar4 = 0;
        iStack_4 = 0xffffffff;
        if (auStack_214[0] != 0) {
          do {
            FUN_0045ba00(&uStack_198,4);
            iStack_234 = FUN_00401f00(0xc);
            iStack_4 = 8;
            if (iStack_234 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = FUN_004298a0(uStack_198);
            }
            iStack_4 = 0xffffffff;
            FUN_004534d0(iVar10 + 4,2);
            FUN_004534d0(iVar10 + 8,4);
            FUN_00446cb0(iVar10);
            uVar4 = uVar4 + 1;
          } while (uVar4 < auStack_214[0]);
        }
        FUN_0041e0a0(uVar6);
        param_3 = local_208;
        break;
      case 0x4f:
        FUN_0045ba00(&iStack_190,4);
        if (iStack_190 != 0) {
          FUN_00423970(iStack_190);
        }
        break;
      case 0x50:
        if ((param_1 & 0x20) != 0) {
          FUN_0041f2f0();
        }
        break;
      case 0x52:
        if ((param_1 & 0x2000) != 0) {
          FUN_004534d0(&uStack_184,4);
          FUN_0041f420(uStack_184);
        }
        break;
      case 0x53:
        if (((param_1 & 0x20) != 0) && (FUN_0045ba00(&iStack_188,4), iStack_188 != 0)) {
          uVar6 = FUN_0046b250(iStack_188);
          iVar10 = FUN_009832e6(uVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
          if ((iVar10 != 0) ||
             (iVar10 = FUN_009832e6(uVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0), iVar10 != 0)) {
            FUN_00423c90(uVar6);
          }
        }
        break;
      case 0x54:
        if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x44) {
          FUN_004534d0(auStack_218,2);
          uVar4 = 0;
          if (auStack_218[0] != 0) {
            do {
              FUN_004534d0(&uStack_22c,1);
              FUN_004534d0(&iStack_180,4);
              puVar8 = (undefined1 *)FUN_00401f00(8);
              iStack_4 = 9;
              puStack_150 = puVar8;
              if (puVar8 == (undefined1 *)0x0) {
                puVar8 = (undefined1 *)0x0;
              }
              else {
                iStack_234 = iStack_180;
                *puVar8 = uStack_22c;
                FUN_0067ec70(iStack_180);
              }
              iStack_4 = 0xffffffff;
              FUN_00446cb0(puVar8);
              uVar4 = uVar4 + 1;
              param_3 = local_208;
            } while (uVar4 < auStack_218[0]);
          }
        }
        break;
      case 0x55:
        if ((param_1 & 0x20) != 0) {
          FUN_004534d0(&uStack_170,1);
          FUN_00422ba0(uStack_170);
        }
        break;
      case 0x59:
        puStack_150 = (undefined1 *)FUN_00401f00(0x28);
        iStack_4 = 10;
        if (puStack_150 == (undefined1 *)0x0) {
          iVar10 = 0;
        }
        else {
          iVar10 = FUN_006b8c80();
        }
        iStack_4 = 0xffffffff;
        FUN_006b8950(param_3);
        if (*(int *)(iVar10 + 0x18) == 0) {
          FUN_006b8f50();
          FUN_00401f20(iVar10);
        }
        else {
          FUN_00422c70(iVar10);
        }
        break;
      case 0x5a:
        FUN_004534d0(&uStack_168,1);
        FUN_00420920(uStack_168);
        break;
      case 0x5c:
        FUN_004534d0(&uStack_160,4);
        FUN_00422d20(uStack_160);
      }
      iStack_204 = iStack_204 + 1;
      piVar5 = piStack_1fc;
    } while (iStack_204 < (int)(uint)auStack_224[0]);
    if (local_235 == '\0') goto LAB_00428003;
  }
  if ((local_238 == '\0') && ((param_1 & 0x80) != 0)) {
    FUN_0041e160(0x27);
  }
  if (local_237 != '\0') {
    FUN_00424e60(param_3);
    FUN_00424f90(param_3);
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      uVar9 = local_21c & 0xffff;
      if (uVar9 + local_210 < uVar4) {
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar10 = (uVar4 - uVar9) - local_210;
        pcVar11 = 
        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      else {
        if (uVar9 + local_210 <= uVar4) goto LAB_0042815b;
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar10 = (uVar9 - uVar4) + local_210;
        pcVar11 = 
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      FUN_004a7a60(pcVar11,iVar10,"..\\TES Shared\\ExtraDataList.cpp",0x1e93,uVar1);
    }
    else {
      piVar5 = (int *)FUN_0046b250(*puVar2);
      iVar10 = local_210;
      uVar9 = (local_21c & 0xffff) + local_210;
      if (uVar9 < uVar4) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar4 - (local_21c & 0xffff)) - iVar10,"..\\TES Shared\\ExtraDataList.cpp",
                     0x1e93,*puVar2,uVar6);
      }
      else if (uVar4 < uVar9) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_21c & 0xffff) - uVar4) + iVar10,"..\\TES Shared\\ExtraDataList.cpp",
                     0x1e93,*puVar2,uVar6);
      }
    }
  }
LAB_0042815b:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004282a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009aba01;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar8 = 0;
  if ((param_1 != (undefined4 *)0x0) && (cVar3 = FUN_0041e340(param_1), cVar3 != '\0')) {
    switch(*(undefined1 *)(puVar1 + 1)) {
    case 3:
      FUN_00423f00(puVar1[3]);
      break;
    case 4:
      FUN_00423ff0(puVar1[3]);
      break;
    case 5:
      FUN_004204e0(puVar1[3]);
      break;
    default:
      FUN_004a7a60("No Copy function available for Extra Data type %i.",*(undefined1 *)(puVar1 + 1))
      ;
      break;
    case 0xb:
      FUN_004242c0((int)*(char *)(puVar1 + 3));
      break;
    case 0xc:
      FUN_00424380(puVar1[3]);
      break;
    case 0xf:
      FUN_00424440(puVar1[3],puVar1[4],&param_1);
      param_1[1] = puVar1[6];
      *param_1 = puVar1[5];
      break;
    case 0x12:
      FUN_0041f090(puVar1[3]);
      FUN_0041f130(puVar1[4]);
      break;
    case 0x13:
      FUN_00423da0(*(undefined1 *)(puVar1 + 3));
      break;
    case 0x18:
      FUN_00420100(puVar1 + 3);
      break;
    case 0x19:
      FUN_00424970(puVar1[3]);
      break;
    case 0x1b:
      FUN_0041f200(1,0);
      break;
    case 0x1c:
      FUN_0041f200(1,1);
      break;
    case 0x1e:
      uVar8 = FUN_009832e6(puVar1[3],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
      uVar7 = FUN_009832e6(puVar1[3],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
      FUN_0041f4c0(uVar8,uVar7,puVar1 + 4,puVar1[7]);
      break;
    case 0x1f:
      FUN_004268b0(puVar1[3],puVar1[4],puVar1[5],*(undefined1 *)(puVar1 + 6),
                   *(undefined1 *)((int)puVar1 + 0x19));
      break;
    case 0x20:
      FUN_0041fbc0(puVar1[3]);
      break;
    case 0x21:
      for (piVar2 = (int *)puVar1[3]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        puVar1 = (undefined4 *)*piVar2;
        if (puVar1 != (undefined4 *)0x0) {
          FUN_0041ffc0(*puVar1,*(undefined1 *)(puVar1 + 1));
        }
      }
      break;
    case 0x22:
      FUN_0041fa40(puVar1[3]);
      break;
    case 0x23:
      for (piVar2 = (int *)puVar1[3]; (piVar2 != (int *)0x0 && (*piVar2 != 0));
          piVar2 = (int *)piVar2[1]) {
        FUN_00424c50(*piVar2);
      }
      break;
    case 0x24:
      FUN_00420780(puVar1[3]);
      break;
    case 0x26:
    case 0x54:
      FUN_0041e710(puVar1[3]);
      break;
    case 0x27:
      FUN_00423660(puVar1[3]);
      break;
    case 0x28:
      FUN_00423720(puVar1[3]);
      break;
    case 0x29:
      FUN_004237e0(puVar1[3]);
      break;
    case 0x2a:
      FUN_004238a0(*(undefined2 *)(puVar1 + 3));
      break;
    case 0x2b:
      FUN_0041ecb0(puVar1[3]);
      break;
    case 0x2c:
      FUN_0041ed50(*(undefined1 *)(puVar1 + 3));
      break;
    case 0x2d:
      FUN_0041edf0(puVar1[3]);
      break;
    case 0x2e:
      FUN_0041ee90(puVar1[3]);
      break;
    case 0x2f:
      FUN_0041ef30((int)*(char *)(puVar1 + 3));
      break;
    case 0x31:
      puVar6 = (undefined4 *)FUN_00401f00(0xc,uVar4);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *(undefined1 *)puVar6 = 0;
        puVar6[1] = 0;
        *(undefined1 *)(puVar6 + 2) = 0;
      }
      puVar1 = (undefined4 *)puVar1[3];
      *puVar6 = *puVar1;
      puVar6[1] = puVar1[1];
      puVar6[2] = puVar1[2];
      FUN_0041eaf0(puVar6);
      break;
    case 0x32:
      param_1 = (undefined4 *)FUN_00401f00(0x1c,uVar4);
      local_4 = 1;
      if (param_1 != (undefined4 *)0x0) {
        uVar8 = FUN_0042b590();
      }
      local_4 = 0xffffffff;
      FUN_0042b4b0(puVar1[3]);
      FUN_004234d0(uVar8);
      break;
    case 0x33:
      param_1 = (undefined4 *)FUN_00401f00(0x10,uVar4);
      local_4 = 2;
      if (param_1 != (undefined4 *)0x0) {
        uVar8 = FUN_0042b3f0();
      }
      local_4 = 0xffffffff;
      FUN_0042b2a0(puVar1[3]);
      FUN_00423590(uVar8);
      break;
    case 0x36:
      FUN_0041fe90(puVar1[3]);
      FUN_0041ff40(*(undefined1 *)(puVar1 + 4));
      break;
    case 0x37:
      FUN_00423a30(puVar1[3]);
      break;
    case 0x38:
      FUN_00423bd0(*(undefined1 *)(puVar1 + 3));
      break;
    case 0x3f:
      FUN_00420280(puVar1[3]);
      FUN_00420380(*(undefined1 *)(puVar1 + 4));
      break;
    case 0x43:
      FUN_004205c0(puVar1[3]);
      break;
    case 0x44:
      FUN_004206a0(puVar1[3]);
      break;
    case 0x47:
      FUN_0041f370(1);
      break;
    case 0x48:
      FUN_0041efd0(puVar1[3]);
      break;
    case 0x4d:
      FUN_00420d40(puVar1[3]);
      break;
    case 0x4e:
      for (piVar2 = (int *)puVar1[3]; (piVar2 != (int *)0x0 && (*piVar2 != 0));
          piVar2 = (int *)piVar2[1]) {
      }
      break;
    case 0x4f:
      FUN_00423970(puVar1[3]);
      break;
    case 0x50:
      FUN_0041f2f0();
      break;
    case 0x51:
      FUN_00424d30(1,puVar1[3]);
      break;
    case 0x55:
      FUN_00422ba0(*(undefined1 *)(puVar1 + 3));
      break;
    case 0x57:
      iVar5 = FUN_0041e210(0x57);
      if (iVar5 == 0) {
        param_1 = (undefined4 *)FUN_00401f00(0x30,uVar4);
        local_4 = 0;
        if (param_1 == (undefined4 *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_0042b090(0);
        }
        local_4 = 0xffffffff;
        FUN_0041e0a0(iVar5);
      }
      *(undefined4 *)(iVar5 + 0x24) = puVar1[9];
      *(undefined4 *)(iVar5 + 0x28) = puVar1[10];
      *(undefined4 *)(iVar5 + 0x2c) = puVar1[0xb];
      *(undefined4 *)(iVar5 + 0xc) = puVar1[3];
      *(undefined4 *)(iVar5 + 0x10) = puVar1[4];
      *(undefined4 *)(iVar5 + 0x14) = puVar1[5];
      *(undefined4 *)(iVar5 + 0x18) = puVar1[6];
      *(undefined4 *)(iVar5 + 0x1c) = puVar1[7];
      *(undefined4 *)(iVar5 + 0x20) = puVar1[8];
      break;
    case 0x58:
      FUN_00420860(puVar1[3]);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00428920(void)

{
  int iVar1;
  int unaff_retaddr;
  
  FUN_0041e3d0(1);
  FUN_00401020("ExtraDataList::CopyList");
  if (unaff_retaddr != 0) {
    for (iVar1 = *(int *)(unaff_retaddr + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      FUN_004282a0(iVar1);
    }
  }
  FUN_00401040();
  return;
}



void FUN_00428970(char param_1)

{
  bool bVar1;
  int iVar2;
  int unaff_retaddr;
  undefined4 uVar3;
  
  FUN_00401020("ExtraDataList::CopyListForContainer");
  iVar2 = *(int *)(unaff_retaddr + 4);
  while (iVar2 != 0) {
    bVar1 = true;
    switch(*(undefined1 *)(iVar2 + 4)) {
    case 0x12:
      FUN_004282a0(iVar2);
      if (param_1 == '\0') {
        uVar3 = 0;
LAB_004289d6:
        FUN_00422e20(iVar2,uVar3);
        iVar2 = *(int *)(unaff_retaddr + 4);
        bVar1 = false;
      }
      break;
    case 0x1b:
    case 0x1c:
    case 0x22:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x36:
    case 0x37:
    case 0x48:
    case 0x50:
    case 0x55:
      FUN_004282a0(iVar2);
      if ((*(char *)(iVar2 + 4) != '7') && (param_1 == '\0')) {
        uVar3 = 1;
        goto LAB_004289d6;
      }
    }
    if (iVar2 == 0) break;
    if (bVar1) {
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  FUN_00401040();
  return;
}



void FUN_00428a60(void)

{
  int iVar1;
  int unaff_retaddr;
  
  FUN_00401020("ExtraDataList::DuplicateExtraListForContainer");
  for (iVar1 = *(int *)(unaff_retaddr + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    switch(*(undefined1 *)(iVar1 + 4)) {
    case 0x12:
    case 0x1b:
    case 0x1c:
    case 0x22:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x36:
    case 0x37:
    case 0x48:
    case 0x50:
    case 0x55:
      FUN_004282a0(iVar1);
    }
  }
  FUN_00401040();
  return;
}



void FUN_00428b10(char param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00401020("ExtraDataList::CopyListForReference",uVar2);
  iVar5 = *(int *)(unaff_retaddr + 4);
  while (iVar5 != 0) {
    bVar1 = true;
    switch(*(undefined1 *)(iVar5 + 4)) {
    case 0x12:
      if (param_1 == '\0') {
        iVar3 = FUN_0041e210(0x12);
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar3 + 0xc);
        }
        iVar3 = FUN_00401f00(0x14);
        puStack_8 = (undefined1 *)0x0;
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_00429f20(uVar4);
        }
        puStack_8 = (undefined1 *)0xffffffff;
        FUN_0041e0a0(uVar4);
        FUN_0041e210(0x12);
        uVar4 = FUN_004fbdc0();
        iVar3 = FUN_0041e210(0x12);
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0x10) = uVar4;
        }
      }
      else {
        FUN_004282a0(iVar5);
        FUN_00422e20(iVar5,0);
        iVar5 = *(int *)(unaff_retaddr + 4);
        bVar1 = false;
      }
      break;
    case 0x1b:
    case 0x22:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x36:
    case 0x37:
    case 0x48:
      FUN_004282a0(iVar5);
      if (param_1 != '\0') {
        FUN_00422e20(iVar5,1);
        iVar5 = *(int *)(unaff_retaddr + 4);
        bVar1 = false;
      }
    }
    if (iVar5 == 0) break;
    if (bVar1) {
      iVar5 = *(int *)(iVar5 + 8);
    }
  }
  FUN_00401040();
  *unaff_FS_OFFSET = in_ECX;
  return;
}



int FUN_00428cc0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  LONG LVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_0041e210(0x30);
  if (iVar4 != 0) {
    piVar1 = *(int **)(iVar4 + 0xc);
    if (piVar1 != (int *)0x0) {
      puVar2 = (undefined4 *)*piVar1;
      if (puVar2 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puVar2 + 1);
        if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
      FUN_00401f20(piVar1);
    }
    *(undefined4 *)(iVar4 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return iVar4;
  }
  iVar4 = FUN_00401f00(0x10,uVar3);
  local_4 = 0;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00429970(param_1);
  }
  local_4 = 0xffffffff;
  FUN_0041e0a0(iVar4);
  *unaff_FS_OFFSET = local_c;
  return iVar4;
}



bool FUN_00428e70(void)

{
  int in_ECX;
  
  return (*(byte *)(in_ECX + 8) & 1) != 0;
}



void FUN_00428e80(void)

{
  byte *pbVar1;
  int in_ECX;
  
  pbVar1 = (byte *)(*(int *)(in_ECX + 0xc) + 8);
  *pbVar1 = *pbVar1 | 1;
  return;
}



void FUN_00428e90(void)

{
  byte *pbVar1;
  int in_ECX;
  
  pbVar1 = (byte *)(*(int *)(in_ECX + 0xc) + 8);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}



undefined1 FUN_004295d0(uint param_1)

{
  undefined1 uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if ((param_1 < 0x1e) && ((*(uint *)(in_ECX + 0xc) & 1 << ((byte)param_1 & 0x1f)) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}



void FUN_004295f0(uint param_1,char param_2)

{
  uint uVar1;
  int in_ECX;
  
  if (param_1 < 0x1e) {
    uVar1 = 1 << ((byte)param_1 & 0x1f);
    if (param_2 != '\0') {
      *(uint *)(in_ECX + 0xc) = *(uint *)(in_ECX + 0xc) | uVar1;
      return;
    }
    *(uint *)(in_ECX + 0xc) = *(uint *)(in_ECX + 0xc) & ~uVar1;
  }
  return;
}



void FUN_004298a0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  *in_ECX = param_1;
  *(undefined2 *)(in_ECX + 1) = 0;
  return;
}



void FUN_004298c0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x15;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a35794;
  in_ECX[3] = param_1;
  return;
}



void FUN_004298e0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba28;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a35794;
  iVar1 = in_ECX[3];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00475b60(uVar2);
    FUN_00401f20(iVar1);
  }
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00429950(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x53;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a357a0;
  in_ECX[3] = 0;
  return;
}



void FUN_00429970(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x30;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a357ac;
  in_ECX[3] = param_1;
  return;
}



int FUN_00429990(void)

{
  undefined2 uVar1;
  int iVar2;
  char *in_ECX;
  
  iVar2 = (int)*in_ECX;
  if ((in_ECX[8] & 4U) != 0) {
    uVar1 = FUN_005e1fd0();
    iVar2 = FUN_009828c0(uVar1,iVar2);
    if (99 < iVar2) {
      iVar2 = 99;
    }
  }
  return iVar2;
}



char FUN_004299e0(int param_1)

{
  if (param_1 <= DAT_00b338b8) {
    return '\0';
  }
  if (param_1 <= DAT_00b338c0) {
    return '\x01';
  }
  if (param_1 <= DAT_00b338c8) {
    return '\x02';
  }
  if (param_1 <= DAT_00b338d0) {
    return '\x03';
  }
  return (DAT_00b338d8 < param_1) + '\x04';
}



undefined4 FUN_00429a30(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return DAT_00b338b8;
  case 1:
    return DAT_00b338c0;
  case 2:
    return DAT_00b338c8;
  case 3:
    return DAT_00b338d0;
  case 4:
    return DAT_00b338d8;
  default:
    return 100;
  }
}



void FUN_00429a80(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x31;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a357b8;
  in_ECX[3] = param_1;
  return;
}



void FUN_00429b20(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba58;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined1 *)(in_ECX + 1) = 0x23;
  in_ECX[2] = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a357c4;
  puVar2 = (undefined4 *)FUN_00401f00(8,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  in_ECX[3] = puVar2;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00429ba0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[3];
  *in_ECX = &PTR_FUN_00a357c4;
  iVar2 = puVar1[1];
  while (iVar2 != 0) {
    iVar2 = *(int *)(puVar1[1] + 4);
    FUN_00401f20(puVar1[1]);
    puVar1[1] = iVar2;
  }
  *puVar1 = 0;
  FUN_00401f20(in_ECX[3]);
  *in_ECX = &PTR_LAB_00a34d50;
  return;
}



void FUN_00429bf0(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x35;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a357d0;
  return;
}



void FUN_00429c10(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x32;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a357dc;
  in_ECX[3] = param_1;
  return;
}



void FUN_00429c30(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba28;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a357dc;
  iVar1 = in_ECX[3];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_007c88a0(uVar2);
    FUN_00401f20(iVar1);
  }
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00429ca0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x33;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a357e8;
  in_ECX[3] = param_1;
  return;
}



void FUN_00429cc0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba28;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a357e8;
  iVar1 = in_ECX[3];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_005a6a20(uVar2);
    FUN_00401f20(iVar1);
  }
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00429d30(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x13;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a357f4;
  *(undefined1 *)(in_ECX + 3) = 1;
  in_ECX[4] = 0;
  return;
}



void FUN_00429d50(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x1a;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a35800;
  in_ECX[3] = param_1;
  return;
}



void FUN_00429d70(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba28;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a35800;
  iVar1 = in_ECX[3];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_004894d0(uVar2);
    FUN_00401f20(iVar1);
  }
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00429de0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x26;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a3580c;
  in_ECX[3] = param_1;
  return;
}



void FUN_00429e00(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x27;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35818;
  in_ECX[3] = param_1;
  return;
}



void FUN_00429e20(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x28;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35824;
  in_ECX[3] = param_1;
  return;
}



void FUN_00429e40(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x29;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35830;
  in_ECX[3] = param_1;
  return;
}



void FUN_00429e60(undefined2 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x2a;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a3583c;
  *(undefined2 *)(in_ECX + 3) = param_1;
  return;
}



void FUN_00429e80(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = param_1;
  *(undefined1 *)(in_ECX + 1) = 0x2b;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35848;
  return;
}



void FUN_00429ea0(undefined1 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x2c;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35854;
  *(undefined1 *)(in_ECX + 3) = param_1;
  return;
}



void FUN_00429ec0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = param_1;
  *(undefined1 *)(in_ECX + 1) = 0x2d;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35860;
  return;
}



void FUN_00429ee0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = param_1;
  *(undefined1 *)(in_ECX + 1) = 0x2e;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a3586c;
  return;
}



void FUN_00429f00(undefined1 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x2f;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35878;
  *(undefined1 *)(in_ECX + 3) = param_1;
  return;
}



void FUN_00429f20(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x12;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a35884;
  in_ECX[3] = param_1;
  in_ECX[4] = 0;
  return;
}



void FUN_00429f40(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba28;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a35884;
  iVar1 = in_ECX[4];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_004fb4e0(uVar2);
    FUN_00401f20(iVar1);
  }
  *in_ECX = &PTR_LAB_00a34d50;
  in_ECX[4] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00429fb0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = param_1;
  *(undefined1 *)(in_ECX + 1) = 0x37;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35890;
  return;
}



void FUN_00429fd0(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x25;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a3589c;
  return;
}



void FUN_00429ff0(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x1b;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a358a8;
  return;
}



void FUN_0042a010(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x50;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a358b4;
  return;
}



void FUN_0042a030(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x1c;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a358c0;
  return;
}



void FUN_0042a050(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x47;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a358cc;
  return;
}



void FUN_0042a070(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x52;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a358d8;
  in_ECX[3] = param_1;
  return;
}



void FUN_0042a090(undefined1 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x55;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a358e4;
  *(undefined1 *)(in_ECX + 3) = param_1;
  return;
}



void FUN_0042a0b0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba28;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a358f0;
  *(undefined1 *)(in_ECX[3] + 0x20) = 0;
  iVar1 = in_ECX[3];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_006b8f50(uVar2);
    FUN_00401f20(iVar1);
  }
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0042a120(byte param_1)

{
  FUN_0042a0b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042a140(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x59;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a358f0;
  in_ECX[3] = param_1;
  return;
}



void FUN_0042a160(undefined1 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x38;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a358fc;
  *(undefined1 *)(in_ECX + 3) = param_1;
  return;
}



void FUN_0042a180(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x22;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35908;
  in_ECX[3] = param_1;
  return;
}



void FUN_0042a1a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = param_1;
  in_ECX[4] = param_2;
  in_ECX[5] = param_3;
  *(undefined1 *)(in_ECX + 1) = 0x1f;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35914;
  *(undefined1 *)(in_ECX + 6) = param_4;
  *(undefined1 *)((int)in_ECX + 0x19) = param_5;
  return;
}



void FUN_0042a1e0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x20;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a35920;
  in_ECX[3] = param_1;
  return;
}



void FUN_0042a200(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba58;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a35920;
  local_4 = 0;
  if (in_ECX[3] != 0) {
    FUN_00566830(1);
    cVar1 = FUN_0045a500(uVar2);
    if (cVar1 == '\0') {
      if ((int *)in_ECX[3] != (int *)0x0) {
        (**(code **)(*(int *)in_ECX[3] + 0x10))(1);
      }
    }
    else {
      FUN_0045c7a0(in_ECX[3]);
    }
  }
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0042a290(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = param_1;
  *(undefined1 *)(in_ECX + 1) = 0x3d;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a3592c;
  return;
}



void FUN_0042a2b0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x36;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35938;
  in_ECX[3] = param_1;
  *(undefined1 *)(in_ECX + 4) = 1;
  return;
}



void FUN_0042a2e0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x11;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35944;
  in_ECX[3] = param_1;
  return;
}



void FUN_0042a300(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x19;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a35950;
  in_ECX[3] = 0;
  return;
}



void FUN_0042a320(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba28;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a35950;
  iVar1 = in_ECX[3];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00497220(uVar2);
    FUN_00401f20(iVar1);
  }
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0042a390(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x17;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a3595c;
  in_ECX[3] = 0;
  return;
}



void FUN_0042a3b0(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x21;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a35968;
  in_ECX[3] = 0;
  return;
}



void FUN_0042a3d0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[3];
  *in_ECX = &PTR_FUN_00a35968;
  for (; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]) {
    FUN_00401f20(*piVar1);
  }
  puVar2 = (undefined4 *)in_ECX[3];
  iVar3 = puVar2[1];
  while (iVar3 != 0) {
    iVar3 = *(int *)(puVar2[1] + 4);
    FUN_00401f20(puVar2[1]);
    puVar2[1] = iVar3;
  }
  *puVar2 = 0;
  FUN_00401f20(in_ECX[3]);
  *in_ECX = &PTR_LAB_00a34d50;
  return;
}



void FUN_0042a440(int param_1,undefined1 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    puVar2 = (undefined4 *)FUN_00401f00(8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    *(undefined4 **)(in_ECX + 0xc) = puVar2;
  }
  for (piVar3 = *(int **)(in_ECX + 0xc);
      (piVar3 != (int *)0x0 && (piVar1 = (int *)*piVar3, piVar1 != (int *)0x0));
      piVar3 = (int *)piVar3[1]) {
    if (*piVar1 == param_1) {
      *piVar1 = param_1;
      *(undefined1 *)(piVar1 + 1) = param_2;
      return;
    }
  }
  piVar3 = (int *)FUN_00401f00(8);
  FUN_00446cb0(piVar3);
  *piVar3 = param_1;
  *(undefined1 *)(piVar3 + 1) = param_2;
  return;
}



void FUN_0042a4c0(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x18;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35974;
  in_ECX[5] = 0x3f7851ec;
  return;
}



void FUN_0042a510(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x3e;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35980;
  in_ECX[3] = DAT_00b3f9a8;
  in_ECX[4] = DAT_00b3f9ac;
  in_ECX[5] = DAT_00b3f9b0;
  in_ECX[6] = 0;
  return;
}



void FUN_0042a540(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba28;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined1 *)(in_ECX + 1) = 0x3e;
  in_ECX[2] = 0;
  local_4 = 0;
  *in_ECX = &PTR_LAB_00a35980;
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    in_ECX[3] = DAT_00b3f9a8;
    in_ECX[4] = DAT_00b3f9ac;
    in_ECX[5] = DAT_00b3f9b0;
    in_ECX[6] = 0;
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x174))(uVar1);
    in_ECX[3] = *puVar2;
    in_ECX[4] = puVar2[1];
    in_ECX[5] = puVar2[2];
    in_ECX[6] = param_2;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0042a5e0(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x3f;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a3598c;
  in_ECX[3] = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  return;
}



void FUN_0042a600(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x40;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a35998;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}



void FUN_0042a620(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a35998;
  iVar1 = in_ECX[4];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[4] + 4);
    FUN_00401f20(in_ECX[4]);
    in_ECX[4] = iVar1;
  }
  in_ECX[3] = 0;
  *in_ECX = &PTR_LAB_00a34d50;
  return;
}



void FUN_0042a660(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x43;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a359a4;
  in_ECX[3] = 0;
  return;
}



void FUN_0042a680(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x44;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a359b0;
  in_ECX[3] = 0;
  return;
}



void FUN_0042a6a0(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x58;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a359bc;
  in_ECX[3] = 0;
  return;
}



void FUN_0042a6c0(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x24;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a359c8;
  in_ECX[3] = 0;
  return;
}



void FUN_0042a6e0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = 0;
  *(undefined1 *)(in_ECX + 1) = 0x46;
  in_ECX[4] = 0;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a359d4;
  return;
}



void FUN_0042a700(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x48;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a359e0;
  in_ECX[3] = param_1;
  return;
}



void FUN_0042a720(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba28;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined1 *)(in_ECX + 1) = 0x4a;
  in_ECX[2] = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a359ec;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)thunk_FUN_00401aa0(pcVar2 + (1 - (int)(param_1 + 1)),1);
  in_ECX[3] = pcVar2;
  do {
    cVar1 = *param_1;
    *pcVar2 = cVar1;
    param_1 = param_1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0042a7c0(void)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba58;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a359ec;
  local_4 = 0;
  FUN_00401e40(in_ECX[3]);
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0042a820(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x4d;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a359f8;
  in_ECX[3] = 0;
  return;
}



void FUN_0042a840(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x41;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35a04;
  in_ECX[3] = 0;
  return;
}



void FUN_0042a860(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x42;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a35a10;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}



void FUN_0042a880(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a35a10;
  iVar1 = in_ECX[4];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[4] + 4);
    FUN_00401f20(in_ECX[4]);
    in_ECX[4] = iVar1;
  }
  in_ECX[3] = 0;
  *in_ECX = &PTR_LAB_00a34d50;
  return;
}



void FUN_0042a8c0(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x4b;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a35a1c;
  *(undefined1 *)(in_ECX + 3) = *(undefined1 *)(DAT_00b33b00 + 0x7c);
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  return;
}



void FUN_0042a8f0(void)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba58;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a35a1c;
  local_4 = 0;
  if (in_ECX[4] != 0) {
    FUN_00401e40(in_ECX[4]);
  }
  if (in_ECX[5] != 0) {
    FUN_00401e40(in_ECX[5]);
  }
  if (in_ECX[6] != 0) {
    FUN_00401e40(in_ECX[6]);
  }
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0042a980(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba58;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined1 *)(in_ECX + 1) = 0x4e;
  in_ECX[2] = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a35a28;
  puVar2 = (undefined4 *)FUN_00401f00(8,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  in_ECX[3] = puVar2;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0042aa00(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[3];
  *in_ECX = &PTR_FUN_00a35a28;
  for (; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]) {
    FUN_00401f20(*piVar1);
  }
  puVar2 = (undefined4 *)in_ECX[3];
  iVar3 = puVar2[1];
  while (iVar3 != 0) {
    iVar3 = *(int *)(puVar2[1] + 4);
    FUN_00401f20(puVar2[1]);
    puVar2[1] = iVar3;
  }
  *puVar2 = 0;
  FUN_00401f20(in_ECX[3]);
  *in_ECX = &PTR_LAB_00a34d50;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042aa70(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  for (piVar2 = *(int **)(in_ECX + 0xc);
      (piVar2 != (int *)0x0 && (piVar1 = (int *)*piVar2, piVar1 != (int *)0x0));
      piVar2 = (int *)piVar2[1]) {
    if (*piVar1 == param_1) {
      *(short *)(piVar1 + 1) = (short)piVar1[1] + 1;
      return;
    }
  }
  piVar2 = (int *)FUN_00401f00(0xc);
  if (piVar2 == (int *)0x0) {
    _DAT_00000004 = _DAT_00000004 + 1;
    FUN_00446cb0(0);
    return;
  }
  *piVar2 = param_1;
  piVar2[2] = 0;
  *(undefined2 *)(piVar2 + 1) = 0;
  *(short *)(piVar2 + 1) = (short)piVar2[1] + 1;
  FUN_00446cb0(piVar2);
  return;
}



undefined2 FUN_0042aae0(int param_1)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = *(int **)(in_ECX + 0xc);
  if (piVar2 != (int *)0x0) {
    while (piVar1 = (int *)*piVar2, piVar1 != (int *)0x0) {
      if (*piVar1 == param_1) {
        return (short)piVar1[1];
      }
      piVar2 = (int *)piVar2[1];
      if (piVar2 == (int *)0x0) {
        return 0;
      }
    }
  }
  return 0;
}



void FUN_0042ab10(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x4f;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35a34;
  in_ECX[3] = param_1;
  return;
}



void FUN_0042ab30(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = param_1;
  *(undefined1 *)(in_ECX + 1) = 0x51;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35a40;
  return;
}



void FUN_0042ab50(undefined1 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x5a;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35a4c;
  *(undefined1 *)(in_ECX + 3) = param_1;
  return;
}



void FUN_0042ab70(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x5b;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a35a58;
  in_ECX[3] = param_1;
  return;
}



void FUN_0042ab90(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba28;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a35a58;
  iVar1 = in_ECX[3];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_006b73e0(uVar2);
    FUN_00401f20(iVar1);
  }
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0042ac00(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = param_1;
  *(undefined1 *)(in_ECX + 1) = 0x5c;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35a64;
  return;
}



void FUN_0042ac20(byte param_1)

{
  FUN_004298e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042ac40(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba28;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined1 *)(in_ECX + 1) = 0x14;
  in_ECX[2] = 0;
  local_4 = 0;
  *in_ECX = &PTR_LAB_00a35a70;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x174))(uVar1);
  in_ECX[3] = *puVar2;
  in_ECX[4] = puVar2[1];
  in_ECX[5] = puVar2[2];
  in_ECX[6] = param_1[8];
  in_ECX[7] = param_1[9];
  in_ECX[8] = param_1[10];
  *unaff_FS_OFFSET = local_c;
  return;
}



char FUN_0042acd0(void)

{
  undefined2 uVar1;
  int iVar2;
  char *in_ECX;
  
  iVar2 = (int)*in_ECX;
  if ((in_ECX[8] & 4U) != 0) {
    uVar1 = FUN_005e1fd0();
    iVar2 = FUN_009828c0(uVar1,iVar2);
    if (99 < iVar2) {
      iVar2 = 99;
    }
  }
  if (iVar2 <= DAT_00b338b8) {
    return '\0';
  }
  if (iVar2 <= DAT_00b338c0) {
    return '\x01';
  }
  if (iVar2 <= DAT_00b338c8) {
    return '\x02';
  }
  if (iVar2 <= DAT_00b338d0) {
    return '\x03';
  }
  return (DAT_00b338d8 < iVar2) + '\x04';
}



void FUN_0042ad70(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a357b8;
  FUN_00401f20(in_ECX[3]);
  *in_ECX = &PTR_LAB_00a34d50;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042adb0(byte param_1)

{
  FUN_00429ba0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042add0(byte param_1)

{
  FUN_00429c30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042adf0(byte param_1)

{
  FUN_00429cc0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042ae10(byte param_1)

{
  FUN_00429d70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042ae50(byte param_1)

{
  FUN_00429f40();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042ae70(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x1e;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a35a7c;
  if (param_1 == 0) {
    param_1 = param_2;
  }
  in_ECX[3] = param_1;
  in_ECX[4] = *param_3;
  in_ECX[5] = param_3[1];
  uVar1 = param_3[2];
  in_ECX[7] = param_4;
  in_ECX[6] = uVar1;
  return;
}



void FUN_0042aec0(byte param_1)

{
  FUN_0042a200();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042aee0(byte param_1)

{
  FUN_0042a320();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042af00(byte param_1)

{
  FUN_0042a3d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042af20(byte param_1)

{
  FUN_0042a620();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042af40(byte param_1)

{
  FUN_0042a7c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042af60(byte param_1)

{
  FUN_0042a880();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042af80(byte param_1)

{
  FUN_0042a8f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042afa0(byte param_1)

{
  FUN_0042aa00();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042afc0(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  for (piVar1 = *(int **)(in_ECX + 0xc); (piVar1 != (int *)0x0 && ((int *)*piVar1 != (int *)0x0));
      piVar1 = (int *)piVar1[1]) {
    if (*(int *)*piVar1 == param_1) {
      FUN_0065c620();
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042aff0(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = *(int **)(in_ECX + 0xc);
  piVar2 = piVar3;
  while ((piVar2 != (int *)0x0 && (iVar1 = *piVar2, iVar1 != 0))) {
    piVar2 = (int *)piVar2[1];
    *(float *)(iVar1 + 8) = *(float *)(iVar1 + 8) + _DAT_00b33e9c;
  }
  for (; (piVar3 != (int *)0x0 && (iVar1 = *piVar3, iVar1 != 0)); piVar3 = (int *)piVar3[1]) {
    if (_DAT_00b368a0 < *(float *)(iVar1 + 8)) {
      FUN_0065c620(iVar1);
      FUN_00401f20(iVar1);
      piVar3 = *(int **)(in_ECX + 0xc);
    }
  }
  return;
}



void FUN_0042b090(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba58;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined1 *)(in_ECX + 1) = 0x57;
  in_ECX[2] = 0;
  local_4 = 0;
  *in_ECX = &PTR_LAB_00a35a88;
  if (param_1 != (int *)0x0) {
    in_ECX[3] = param_1[8];
    in_ECX[4] = param_1[9];
    in_ECX[5] = param_1[10];
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x174))(uVar1);
    in_ECX[6] = *puVar2;
    in_ECX[7] = puVar2[1];
    in_ECX[8] = puVar2[2];
    in_ECX[9] = *puVar2;
    in_ECX[10] = puVar2[1];
    in_ECX[0xb] = puVar2[2];
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0042b130(byte param_1)

{
  FUN_0042ab90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042b150(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c60d8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a357ac;
  piVar1 = (int *)in_ECX[3];
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    FUN_00401f20(piVar1,uVar3);
  }
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0042b1e0(byte param_1)

{
  FUN_0042b150();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_0042b200(int param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (((param_1 != 0) && (iVar2 = FUN_004510b0(), iVar2 == 0x4b524d58)) &&
     (cVar1 = FUN_0044fea0(), cVar1 != '\0')) {
    iVar2 = FUN_004510b0();
    if (iVar2 == 0x4d414e46) {
      FUN_00450c20(in_ECX + 0xc,1);
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') {
        return 0;
      }
    }
    iVar2 = FUN_004510b0();
    if (iVar2 == 0x4c4c5546) {
      FUN_0046c7a0();
      cVar1 = FUN_0044fea0();
      if ((cVar1 != '\0') && (iVar2 = FUN_004510b0(), iVar2 == 0x4d414e54)) {
        FUN_004510f0(in_ECX + 0xe);
        return 1;
      }
    }
  }
  return 0;
}



void FUN_0042b2a0(int param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 8))(param_1);
  *(undefined1 *)(in_ECX + 3) = *(undefined1 *)(param_1 + 0xc);
  *(undefined2 *)((int)in_ECX + 0xe) = *(undefined2 *)(param_1 + 0xe);
  return;
}



byte FUN_0042b310(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0xc) & 1;
}



void FUN_0042b320(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 0xc) = *(byte *)(in_ECX + 0xc) | 1;
    return;
  }
  *(byte *)(in_ECX + 0xc) = *(byte *)(in_ECX + 0xc) & 0xfe;
  return;
}



byte FUN_0042b340(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0xc) >> 1 & 1;
}



void FUN_0042b350(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 0xc) = *(byte *)(in_ECX + 0xc) | 2;
    return;
  }
  *(byte *)(in_ECX + 0xc) = *(byte *)(in_ECX + 0xc) & 0xfd;
  return;
}



undefined2 FUN_0042b370(void)

{
  int in_ECX;
  
  return *(undefined2 *)(in_ECX + 0xe);
}



void FUN_0042b380(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int in_ECX;
  undefined1 *puVar5;
  
  FUN_0046ae40(0x4d414e46,in_ECX + 0xc,1);
  if (*(ushort *)(in_ECX + 8) == 0xffff) {
    pcVar3 = *(char **)(in_ECX + 4);
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar4 = (int)pcVar3 - (int)pcVar1;
  }
  else {
    uVar4 = (uint)*(ushort *)(in_ECX + 8);
  }
  puVar5 = *(undefined1 **)(in_ECX + 4);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_00a2f7ec;
  }
  thunk_FUN_0046ae40(0x4c4c5546,puVar5,uVar4 + 1);
  FUN_0046ae40(0x4d414e54,in_ECX + 0xe,2);
  return;
}



void FUN_0042b3f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a322a0;
  in_ECX[1] = 0;
  *(undefined2 *)(in_ECX + 2) = 0;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined1 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  return;
}



undefined4 FUN_0042b410(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}



void FUN_0042b420(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  return;
}



int FUN_0042b430(void)

{
  int in_ECX;
  
  return in_ECX + 0x10;
}



void FUN_0042b440(undefined4 *param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = *param_1;
  *(undefined4 *)(in_ECX + 0x14) = param_1[1];
  *(undefined4 *)(in_ECX + 0x18) = param_1[2];
  return;
}



undefined4 FUN_0042b460(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    uVar1 = FUN_006ecc80();
    return uVar1;
  }
  return 0;
}



undefined4 FUN_0042b470(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    iVar1 = FUN_006ecc80();
    if (iVar1 != 0) {
      uVar2 = FUN_004c9cf0();
      return uVar2;
    }
    iVar1 = (*(code *)**(undefined4 **)(*in_ECX + 0x18))();
    if (iVar1 != 0) {
      uVar2 = FUN_004c9cf0();
      return uVar2;
    }
  }
  return 0;
}



void FUN_0042b4b0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  return;
}



undefined2 FUN_0042b4f0(void)

{
  return 0x1c;
}



void FUN_0042b500(void)

{
  int *in_ECX;
  int local_4;
  
  local_4 = (int)in_ECX;
  FUN_004534d0(in_ECX + 1,0xc);
  FUN_004534d0(in_ECX + 4,0xc);
  FUN_0045ba00(&local_4,4);
  *in_ECX = local_4;
  return;
}



void FUN_0042b550(void)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    uVar1 = FUN_0046b250(*in_ECX,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    iVar2 = FUN_009832e6(uVar1);
    *in_ECX = iVar2;
  }
  return;
}



void FUN_0042b580(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_00680090(*in_ECX);
  }
  return;
}



void FUN_0042b590(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0x7f7fffce;
  in_ECX[2] = 0x7f7fffce;
  in_ECX[4] = 0x7f7fffce;
  in_ECX[3] = 0x7f7fffce;
  in_ECX[5] = 0x7f7fffce;
  *in_ECX = 0;
  in_ECX[6] = 0x7f7fffce;
  return;
}



void FUN_0042b5f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *in_ECX;
  
  if (param_1 != 0) {
    if (((*in_ECX != 0) && (iVar1 = FUN_006ecc80(), iVar1 != 0)) &&
       (iVar1 = FUN_004ca970(), iVar1 != 0)) {
      FUN_004c9860(param_2);
    }
    iVar1 = FUN_006ecc80();
    if ((iVar1 != 0) && (iVar1 = FUN_004ca970(), iVar1 != 0)) {
      FUN_004c9860(param_2);
    }
  }
  return;
}



void FUN_0042b650(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_004de8d0();
    return;
  }
  FUN_004028d0(&DAT_00a2f7ec,0);
  return;
}



void FUN_0042b670(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 != 0) {
    iVar1 = FUN_004510b0();
    if (iVar1 == 0x4c455458) {
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      FUN_00450c20(&local_1c,0x1c);
      *in_ECX = local_1c;
      in_ECX[1] = local_18;
      in_ECX[2] = local_14;
      in_ECX[3] = local_10;
      in_ECX[4] = local_c;
      in_ECX[5] = local_8;
      in_ECX[6] = local_4;
    }
  }
  return;
}



undefined4 FUN_0042b700(void)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_48 = *in_ECX;
  uVar2 = FUN_0046b680();
  FUN_0046bb20(&local_48,uVar2);
  uVar2 = FUN_0046b250(local_48,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
  piVar3 = (int *)FUN_009832e6(uVar2);
  *in_ECX = piVar3;
  if (piVar3 == (int *)0x0) {
    FUN_004a7a60("Could not find linked door (%08X) in teleport data init.",local_48);
    return 0;
  }
  iVar4 = (**(code **)(*piVar3 + 0x170))();
  if (*(char *)(iVar4 + 4) == '\x18') {
    iVar4 = FUN_00983ffd((double)(float)in_ECX[1]);
    if ((((iVar4 == 0) || (iVar4 = FUN_00983ffd((double)(float)in_ECX[2]), iVar4 == 0)) ||
        (iVar4 = FUN_00983ffd((double)(float)in_ECX[3]), iVar4 == 0)) ||
       (((iVar4 = __isnan((double)(float)in_ECX[1]), iVar4 != 0 ||
         (iVar4 = __isnan((double)(float)in_ECX[2]), iVar4 != 0)) ||
        (iVar4 = __isnan((double)(float)in_ECX[3]), iVar4 != 0)))) {
      FUN_004a7a60();
      in_ECX[1] = DAT_00b3f9a8;
      in_ECX[2] = DAT_00b3f9ac;
      in_ECX[3] = DAT_00b3f9b0;
    }
    iVar4 = FUN_00983ffd((double)(float)in_ECX[4]);
    if (((iVar4 != 0) && (iVar4 = FUN_00983ffd((double)(float)in_ECX[5]), iVar4 != 0)) &&
       ((iVar4 = FUN_00983ffd((double)(float)in_ECX[6]), iVar4 != 0 &&
        (((iVar4 = __isnan((double)(float)in_ECX[4]), iVar4 == 0 &&
          (iVar4 = __isnan((double)(float)in_ECX[5]), iVar4 == 0)) &&
         (iVar4 = __isnan((double)(float)in_ECX[6]), iVar4 == 0)))))) {
      return 1;
    }
    FUN_004a7a60();
    in_ECX[4] = DAT_00b3f9a8;
    in_ECX[5] = DAT_00b3f9ac;
    in_ECX[6] = DAT_00b3f9b0;
    return 1;
  }
  piVar3 = (int *)(**(code **)(*(int *)*in_ECX + 0x170))();
  iVar4 = (**(code **)(*(int *)*in_ECX + 0x170))();
  uStack_44 = *(undefined4 *)(iVar4 + 0xc);
  iVar4 = (**(code **)(*(int *)*in_ECX + 0x170))();
  bVar1 = *(byte *)(iVar4 + 4);
  uVar2 = (**(code **)(*piVar3 + 0xd4))();
  FUN_004a7a60("Linked door (%08X) in teleport data points to invalid object (%s %s(%08X)).",
               local_48,(&PTR_DAT_00b05e04)[(uint)bVar1 * 3],uVar2);
  *in_ECX = 0;
  return 0;
}



void FUN_0042b950(void)

{
  int *in_ECX;
  undefined4 local_4;
  
  FUN_0045b9a0(in_ECX + 1,0xc);
  FUN_0045b9a0(in_ECX + 4,0xc);
  local_4 = 0;
  if (*in_ECX != 0) {
    local_4 = *(undefined4 *)(*in_ECX + 0xc);
  }
  FUN_0045f7a0(&local_4,4);
  return;
}



void FUN_0042b9a0(void)

{
  int *in_ECX;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (*in_ECX != 0) {
    local_1c = *(undefined4 *)(*in_ECX + 0xc);
    local_18 = in_ECX[1];
    local_14 = in_ECX[2];
    local_10 = in_ECX[3];
    local_c = in_ECX[4];
    local_8 = in_ECX[5];
    local_4 = in_ECX[6];
    FUN_0046ae40(0x4c455458,&local_1c,0x1c);
  }
  return;
}



bool FUN_0042ba10(int *param_1)

{
  char cVar1;
  int *in_ECX;
  
  if (*in_ECX == *param_1) {
    cVar1 = FUN_008aa390(param_1 + 1);
    if (cVar1 == '\0') {
      cVar1 = FUN_008aa390(param_1 + 4);
      return cVar1 != '\0';
    }
  }
  return true;
}



undefined4 FUN_0042ba90(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = 0;
  iVar5 = 0x18;
  if (*param_1 == '.') {
    param_1 = param_1 + 1;
  }
  else if (param_1[1] == '.') {
    param_1 = param_1 + 2;
  }
  do {
    uVar6 = (uint)(iVar5 - iVar3) >> 1;
    iVar1 = uVar6 + iVar3;
    iVar2 = __stricmp(param_1,(char *)(iVar1 * 8 + 0xb04368));
    iVar4 = iVar1;
    if ((iVar2 < 1) && (iVar4 = iVar3, iVar5 = iVar1, -1 < iVar2)) break;
    iVar3 = iVar4;
  } while (uVar6 != 0);
  if (iVar2 != 0) {
    return 0x100;
  }
  return *(undefined4 *)(iVar1 * 8 + 0xb0436c);
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a35cf4;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_0042bb90(uint param_1,int *param_2)

{
  int in_ECX;
  
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == 0) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != 0) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == 0) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
      *(int *)(*(int *)(in_ECX + 4) + param_1 * 4) = *param_2;
      return;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != 0) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
      *(int *)(*(int *)(in_ECX + 4) + param_1 * 4) = *param_2;
      return;
    }
  }
  *(int *)(*(int *)(in_ECX + 4) + param_1 * 4) = *param_2;
  return;
}



int FUN_0042bc00(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x30);
  if (iVar1 == -1) {
    iVar1 = *(int *)(in_ECX + 0x148);
  }
  return iVar1;
}



undefined4 FUN_0042bc10(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  
  uVar1 = in_ECX[1];
  uVar2 = param_1[1];
  if (uVar1 <= uVar2) {
    if ((uVar1 < uVar2) || (*in_ECX < *param_1)) {
      return 0xffffffff;
    }
    if ((uVar1 < uVar2) || ((uVar1 == uVar2 && (*in_ECX <= *param_1)))) {
      return 0;
    }
  }
  return 1;
}



uint FUN_0042bc50(byte *param_1)

{
  byte bVar1;
  byte *in_ECX;
  
  bVar1 = in_ECX[3];
  if ((bVar1 & 0x7f) == 0x2a) {
    return (uint)((byte)(((bVar1 >> 5 & 4) + (*in_ECX >> 6 & 2)) - ((char)in_ECX[1] >> 7)) !=
                 (byte)(((param_1[3] >> 5 & 4) + (*param_1 >> 6 & 2)) - ((char)param_1[1] >> 7)));
  }
  if (*(uint *)(in_ECX + 4) < *(uint *)(param_1 + 4)) {
    return 0xffffffff;
  }
  if ((*(uint *)(in_ECX + 4) <= *(uint *)(param_1 + 4)) && (in_ECX[2] == param_1[2])) {
    return (uint)((byte)(((bVar1 >> 5 & 4) + (*in_ECX >> 6 & 2)) - ((char)in_ECX[1] >> 7)) !=
                 (byte)(((param_1[3] >> 5 & 4) + (*param_1 >> 6 & 2)) - ((char)param_1[1] >> 7)));
  }
  return 1;
}



void FUN_0042bd20(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



uint FUN_0042bd30(void)

{
  int in_ECX;
  
  if (DAT_00b04440 == 1) {
    return *(uint *)(in_ECX + 0x160) >> 4 & 0xffffff01;
  }
  return CONCAT31((int3)((uint)DAT_00b04440 >> 8),DAT_00b04440 != 0);
}



uint FUN_0042bd50(void)

{
  int in_ECX;
  
  if (DAT_00b04448 == 1) {
    return *(uint *)(in_ECX + 0x160) >> 5 & 0xffffff01;
  }
  return CONCAT31((int3)((uint)DAT_00b04448 >> 8),DAT_00b04448 != 0);
}



undefined4 FUN_0042bd70(void)

{
  bool bVar1;
  char cVar2;
  int in_ECX;
  
  if (((DAT_00b04460 == '\0') && (DAT_00b04430 == '\0')) &&
     ((*(uint *)(in_ECX + 0x160) >> 7 & 1) == 0)) {
    if (DAT_00b04438 == 1) {
      bVar1 = (bool)((byte)(*(uint *)(in_ECX + 0x160) >> 3) & 1);
    }
    else {
      bVar1 = DAT_00b04438 != 0;
    }
    if (bVar1 == false) {
      cVar2 = FUN_0042bd30();
      if (cVar2 == '\0') {
        cVar2 = FUN_0042bd50();
        if (cVar2 == '\0') {
          return 0;
        }
      }
    }
  }
  return 1;
}



undefined4 FUN_0042bde0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_00b33a04 != (int *)0x0) {
    uVar1 = (**(code **)(*DAT_00b33a04 + 4))(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}



uint FUN_0042be10(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if ((DAT_00b338e0 != 0) && (param_1 != 0)) {
    DAT_00b338e4 = 0;
    FUN_0065c620(param_1);
    uVar1 = 0;
    do {
      if (*(int *)((int)&DAT_00b338e8 + uVar1) == param_1) {
        *(undefined4 *)((int)&DAT_00b338e8 + uVar1) = 0;
      }
      if (*(int *)((int)&DAT_00b3390c + uVar1) == param_1) {
        *(undefined4 *)((int)&DAT_00b3390c + uVar1) = 0;
      }
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x24);
    DAT_00b338e4 = 0;
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042be70(void)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = DAT_00b338e0;
  if (DAT_00b338e0 != (int *)0x0) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
    }
    FUN_004526e0();
    FUN_00401f20(DAT_00b338e0);
    DAT_00b338e0 = (int *)0x0;
  }
  if (DAT_00b33930 != (undefined4 *)0x0) {
    uVar2 = 0;
    if (*(short *)((int)DAT_00b33930 + 10) != 0) {
      do {
        FUN_00401f20(*(undefined4 *)(DAT_00b33930[1] + uVar2 * 4));
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)((int)DAT_00b33930 + 10));
    }
    (**(code **)*DAT_00b33930)(1);
  }
  if (DAT_00b33934 != (undefined4 *)0x0) {
    uVar2 = 0;
    if (*(short *)((int)DAT_00b33934 + 10) != 0) {
      do {
        FUN_00401f20(*(undefined4 *)(DAT_00b33934[1] + uVar2 * 4));
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)((int)DAT_00b33934 + 10));
    }
    (**(code **)*DAT_00b33934)(1);
  }
  DAT_00b338e8 = 0;
  DAT_00b3390c = 0;
  DAT_00b338ec = 0;
  DAT_00b33910 = 0;
  _DAT_00b338f0 = 0;
  _DAT_00b33914 = 0;
  _DAT_00b338f4 = 0;
  _DAT_00b33918 = 0;
  _DAT_00b338f8 = 0;
  _DAT_00b3391c = 0;
  _DAT_00b338fc = 0;
  _DAT_00b33920 = 0;
  _DAT_00b33900 = 0;
  _DAT_00b33924 = 0;
  _DAT_00b33904 = 0;
  _DAT_00b33928 = 0;
  _DAT_00b33908 = 0;
  _DAT_00b3392c = 0;
  return;
}



void FUN_0042bfb0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  while( true ) {
    puVar1 = *(uint **)(param_1 + param_2 * 4);
    iVar6 = param_2;
    iVar7 = param_3;
    if (param_2 < param_3) {
      do {
        while( true ) {
          puVar2 = *(uint **)(param_1 + iVar7 * 4);
          if ((puVar2[1] < puVar1[1]) ||
             (((puVar2[1] == puVar1[1] && (*puVar2 < *puVar1)) || (iVar7 <= iVar6)))) break;
          iVar7 = iVar7 + -1;
        }
        if (iVar6 != iVar7) {
          *(uint **)(param_1 + iVar6 * 4) = puVar2;
          iVar6 = iVar6 + 1;
        }
        uVar3 = puVar1[1];
        while( true ) {
          puVar2 = *(uint **)(param_1 + iVar6 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          if ((((uVar3 <= uVar5) && ((uVar5 != uVar3 || (*puVar1 <= uVar4)))) &&
              ((uVar3 < uVar5 || ((uVar3 <= uVar5 && (*puVar1 < uVar4)))))) || (iVar7 <= iVar6))
          break;
          iVar6 = iVar6 + 1;
        }
        if (iVar6 != iVar7) {
          *(undefined4 *)(param_1 + iVar7 * 4) = *(undefined4 *)(param_1 + iVar6 * 4);
          iVar7 = iVar7 + -1;
        }
      } while (iVar6 < iVar7);
    }
    *(uint **)(param_1 + iVar6 * 4) = puVar1;
    if (param_2 < iVar6) {
      FUN_0042bfb0(param_1,param_2,iVar6 + -1);
    }
    if (param_3 <= iVar6) break;
    param_2 = iVar6 + 1;
  }
  return;
}



void FUN_0042c080(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x194) & 4) == 0) {
    if (*(int *)(in_ECX + 0x198) != 0) {
      FUN_00401f20(*(int *)(in_ECX + 0x198));
    }
    if (*(int *)(in_ECX + 0x19c) != 0) {
      FUN_00401f20(*(int *)(in_ECX + 0x19c));
    }
    *(undefined4 *)(in_ECX + 0x198) = 0;
    *(undefined4 *)(in_ECX + 0x19c) = 0;
  }
  *(byte *)(in_ECX + 0x194) = *(byte *)(in_ECX + 0x194) & 0xef;
  return;
}



void FUN_0042c0d0(char param_1)

{
  int in_ECX;
  uint uVar1;
  
  if ((*(byte *)(in_ECX + 0x194) & 4) == 0) {
    if (*(int *)(in_ECX + 0x1a0) != 0) {
      FUN_00401f20(*(int *)(in_ECX + 0x1a0));
    }
    *(undefined4 *)(in_ECX + 0x1a0) = 0;
    if ((*(int *)(in_ECX + 0x1a4) != 0) && (param_1 == '\0')) {
      uVar1 = 0;
      if (*(int *)(in_ECX + 0x164) != 0) {
        do {
          FUN_00401f20(*(undefined4 *)(*(int *)(in_ECX + 0x1a4) + uVar1 * 4));
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(in_ECX + 0x164));
      }
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x1a4));
      *(undefined4 *)(in_ECX + 0x1a4) = 0;
    }
  }
  *(byte *)(in_ECX + 0x194) = *(byte *)(in_ECX + 0x194) & 0xdf;
  return;
}



void FUN_0042c160(void)

{
  int in_ECX;
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(in_ECX + 0x194) & 4) == 0) {
    if (*(int *)(in_ECX + 0x178) != 0) {
      uVar2 = 0;
      if (*(int *)(in_ECX + 0x164) != 0) {
        iVar1 = 0;
        do {
          FUN_00401f20(*(undefined4 *)(*(int *)(in_ECX + 0x178) + 0xc + iVar1));
          uVar2 = uVar2 + 1;
          iVar1 = iVar1 + 0x10;
        } while (uVar2 < *(uint *)(in_ECX + 0x164));
      }
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x178));
    }
    *(undefined4 *)(in_ECX + 0x178) = 0;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0042c1d0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_138 [32];
  uint local_118;
  int local_114;
  char cStack_109;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_138;
  if ((DAT_00b04460 != '\0') && (-1 < *(int *)(param_1 + 8))) {
    if (param_2 != (char *)0x0) {
      builtin_strncpy(local_108,"Data\\",6);
      pcVar3 = param_2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      pcVar7 = &cStack_109;
      do {
        pcVar6 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar6 != '\0');
      pcVar6 = param_2;
      for (uVar5 = (uint)((int)pcVar3 - (int)param_2) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = (int)pcVar3 - (int)param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar5 = *(uint *)(in_ECX + 0x180);
      iVar2 = *(int *)(in_ECX + 0x184);
      iVar4 = __stat64i32(local_108,local_138);
      if (((iVar4 != -1) && (iVar2 <= local_114)) && ((iVar2 < local_114 || (uVar5 < local_118)))) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0x80000000;
        return 1;
      }
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x80000000;
  }
  return 0;
}



bool FUN_0042c2d0(int param_1,char param_2)

{
  int in_ECX;
  
  if ((param_2 == '\0') &&
     ((((byte)((uint)*(undefined4 *)(param_1 + 0xc) >> 0x1f) ^ *(byte *)(in_ECX + 0x194) >> 3) & 1)
      != 0)) {
    return false;
  }
  return (*(uint *)(param_1 + 0xc) & 0x7fffffff) != 0;
}



undefined4 FUN_0042c310(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
    return 1;
  }
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(*(int *)(in_ECX + 0x154) + 0x1c);
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    uVar1 = FUN_00401f00(*(int *)(in_ECX + 0xc));
    *(undefined4 *)(in_ECX + 0x18) = uVar1;
  }
  *(undefined1 *)(in_ECX + 0x24) = 1;
  return 1;
}



int FUN_0042c3e0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = *(int *)(in_ECX + 0x158) + *(int *)(in_ECX + 0x148) + param_3;
  if (*(int *)(in_ECX + 0x154) != 0) {
    FUN_00401020(*(int *)(in_ECX + 0x154) + 0x3c);
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x154) + 0x30);
  if (iVar1 == -1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x154) + 0x148);
  }
  iVar1 = iVar3 - iVar1;
  if (iVar1 != 0) {
    FUN_00747e20(iVar1,1);
  }
  if (*(uint *)(in_ECX + 0x150) < (uint)(*(int *)(in_ECX + 0x148) + param_2 + param_3)) {
    param_2 = (*(uint *)(in_ECX + 0x150) - *(int *)(in_ECX + 0x148)) - param_3;
  }
  iVar2 = FUN_00747d10(param_1,param_2);
  iVar1 = *(int *)(in_ECX + 0x154);
  iVar3 = iVar2 + iVar3;
  *(int *)(iVar1 + 0x148) = iVar3;
  *(int *)(iVar1 + 0x14c) = iVar3;
  if (*(int *)(in_ECX + 0x154) != 0) {
    FUN_00401040();
  }
  return iVar2;
}



int FUN_0042c4a0(void *param_1,uint param_2)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0x14);
  uVar2 = 0;
  if (uVar3 < param_2) {
    if (uVar3 != 0) {
      _memcpy(param_1,(void *)(*(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x14)),uVar3);
      param_1 = (void *)((int)param_1 + uVar3);
      param_2 = param_2 - uVar3;
      uVar2 = uVar3;
    }
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0;
    if (*(uint *)(in_ECX + 0xc) < param_2) {
      iVar1 = FUN_0042c3e0(param_1,param_2,uVar2);
      return iVar1 + uVar2;
    }
    uVar3 = FUN_0042c3e0(*(undefined4 *)(in_ECX + 0x18),*(uint *)(in_ECX + 0xc),uVar2);
    *(uint *)(in_ECX + 0x10) = uVar3;
    if (uVar3 < param_2) {
      param_2 = uVar3;
    }
  }
  _memcpy(param_1,(void *)(*(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x14)),param_2);
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + param_2;
  return param_2 + uVar2;
}



int FUN_0042c560(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if (*(int *)(in_ECX + 0x154) != 0) {
    FUN_00401020(*(int *)(in_ECX + 0x154) + 0x3c);
  }
  iVar2 = *(int *)(in_ECX + 0x30);
  if (iVar2 == -1) {
    iVar2 = *(int *)(in_ECX + 0x148);
  }
  iVar2 = *(int *)(in_ECX + 0x158) + iVar2;
  piVar1 = *(int **)(in_ECX + 0x154);
  iVar3 = piVar1[0xc];
  if (iVar3 == -1) {
    iVar3 = piVar1[0x52];
  }
  if (iVar3 != iVar2) {
    (**(code **)(*piVar1 + 0xc))(iVar2,0);
  }
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x154) + 0x24))(param_1,*(undefined4 *)(in_ECX + 0x150));
  *(int *)(in_ECX + 0x148) = *(int *)(in_ECX + 0x148) + iVar2;
  if (*(int *)(in_ECX + 0x154) != 0) {
    FUN_00401040();
  }
  return iVar2;
}



int FUN_0042c600(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if (*(int *)(in_ECX + 0x154) != 0) {
    FUN_00401020(*(int *)(in_ECX + 0x154) + 0x3c);
  }
  iVar2 = *(int *)(in_ECX + 0x30);
  if (iVar2 == -1) {
    iVar2 = *(int *)(in_ECX + 0x148);
  }
  iVar2 = *(int *)(in_ECX + 0x158) + iVar2;
  piVar1 = *(int **)(in_ECX + 0x154);
  iVar3 = piVar1[0xc];
  if (iVar3 == -1) {
    iVar3 = piVar1[0x52];
  }
  if (iVar3 != iVar2) {
    (**(code **)(*piVar1 + 0xc))(iVar2,0);
  }
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x154) + 0x20))(param_1,*(undefined4 *)(in_ECX + 0x150));
  *(int *)(in_ECX + 0x148) = *(int *)(in_ECX + 0x148) + iVar2;
  if (*(int *)(in_ECX + 0x154) != 0) {
    FUN_00401040();
  }
  return iVar2;
}



undefined4 FUN_0042c6a0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x18) == 0) {
    *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(*(int *)(in_ECX + 0x154) + 0x1c);
    *(undefined4 *)(in_ECX + 0x14) = 0;
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x18) = 0;
    if (*(int *)(in_ECX + 0xc) != 0) {
      uVar1 = FUN_00401f00(*(int *)(in_ECX + 0xc));
      *(undefined4 *)(in_ECX + 0x18) = uVar1;
    }
    *(undefined1 *)(in_ECX + 0x24) = 1;
    return 1;
  }
  return 1;
}



void FUN_0042c8e0(void)

{
  int in_ECX;
  
  (**(code **)(in_ECX + 4))();
  return;
}



void FUN_0042c910(void)

{
  undefined4 *in_ECX;
  
  InterlockedDecrement(in_ECX + 0x6a);
  if ((*(byte *)(in_ECX + 0x65) & 2) != 0) {
    FUN_00401020("Archive: CheckDelete()");
    if (in_ECX[0x6a] == 0) {
      FUN_0042be10();
      *(undefined1 *)(in_ECX + 0x6b) = 1;
    }
    FUN_00401040();
  }
  if (*(char *)(in_ECX + 0x6b) != '\0') {
    (**(code **)*in_ECX)(1);
  }
  return;
}



void FUN_0042ca60(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba88;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a35d74;
  local_4 = 0;
  FUN_0042c080(uVar1);
  FUN_0042c0d0(0);
  FUN_0042c160();
  FUN_00401010();
  local_4 = 0xffffffff;
  FUN_00430670();
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_0042cae0(int param_1)

{
  int *in_ECX;
  uint unaff_EBX;
  int *piVar1;
  int iVar2;
  
  if ((*(byte *)(in_ECX + 0x65) & 0x10) != 0) {
    return *(int *)(in_ECX[0x67] + param_1 * 4) + in_ECX[0x66];
  }
  if ((*(byte *)(in_ECX + 0x58) & 1) == 0) {
    return 0;
  }
  (**(code **)(*in_ECX + 0xc))(in_ECX[0x59] * 0x10 + 0x24,0);
  if (in_ECX != (int *)0x0) {
    iVar2 = 0;
    piVar1 = in_ECX;
    do {
      (*(code *)in_ECX[1])();
      (**(code **)(*in_ECX + 0xc))
                (*(int *)(iVar2 + 8 + in_ECX[0x5e]) * 0x10 + (unaff_EBX >> 0x18),1);
      iVar2 = iVar2 + 0x10;
      piVar1 = (int *)((int)piVar1 + -1);
    } while (piVar1 != (int *)0x0);
  }
  (*(code *)in_ECX[1])();
  if (in_ECX[0x66] != 0) {
    FUN_00401f20(in_ECX[0x66]);
    in_ECX[0x66] = 0;
  }
  iVar2 = FUN_00401f00(unaff_EBX >> 0x18);
  in_ECX[0x66] = iVar2;
  (*(code *)in_ECX[1])();
  return in_ECX[0x66];
}



/* WARNING: Removing unreachable block (ram,0x0042cd74) */
/* WARNING: Removing unreachable block (ram,0x0042cd3e) */
/* WARNING: Removing unreachable block (ram,0x0042cd42) */
/* WARNING: Removing unreachable block (ram,0x0042cd50) */
/* WARNING: Removing unreachable block (ram,0x0042cd54) */
/* WARNING: Removing unreachable block (ram,0x0042cd82) */
/* WARNING: Removing unreachable block (ram,0x0042cd8b) */
/* WARNING: Removing unreachable block (ram,0x0042cdc4) */

int FUN_0042cc00(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int unaff_retaddr;
  
  if ((*(byte *)(in_ECX + 0x65) & 0x20) != 0) {
    return *(int *)(*(int *)(in_ECX[0x69] + param_1 * 4) + param_2 * 4) + in_ECX[0x68];
  }
  if (((uint)in_ECX[0x58] >> 1 & 1) == 0) {
    return 0;
  }
  if (in_ECX[0x68] != 0) {
    FUN_00401f20(in_ECX[0x68]);
    in_ECX[0x68] = 0;
  }
  iVar4 = 0;
  iVar3 = FUN_00401f00(0x100);
  in_ECX[0x68] = iVar3;
  if (DAT_00b04448 == 1) {
    bVar2 = (bool)((byte)((uint)in_ECX[0x58] >> 5) & 1);
  }
  else {
    bVar2 = DAT_00b04448 != 0;
  }
  if (bVar2 == false) {
    (**(code **)(*in_ECX + 0xc))(in_ECX[0x62],0);
    iVar4 = 0;
    if (unaff_retaddr != 0) {
      do {
        (*(code *)in_ECX[1])();
      } while( true );
    }
    (*(code *)in_ECX[1])();
    if (*(char *)in_ECX[0x68] != '\0') {
      do {
        iVar4 = iVar4 + 1;
        (*(code *)in_ECX[1])();
      } while (*(char *)(iVar4 + in_ECX[0x68]) != '\0');
      return in_ECX[0x68];
    }
  }
  else {
    (**(code **)(*in_ECX + 0xc))
              (*(int *)(*(int *)(in_ECX[0x69] + param_1 * 4) + param_2 * 4) + in_ECX[0x62],0);
    (*(code *)in_ECX[1])();
    cVar1 = *(char *)in_ECX[0x68];
    while (cVar1 != '\0') {
      iVar4 = iVar4 + 1;
      (*(code *)in_ECX[1])();
      cVar1 = *(char *)(iVar4 + in_ECX[0x68]);
    }
  }
  return in_ECX[0x68];
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_0042ce40(uint *param_1,uint *param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  char *_Str1;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_120 [3];
  undefined1 local_11d;
  uint *local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  char *local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_120;
  local_11c = param_2;
  local_10c = param_3;
  if ((*(byte *)(in_ECX + 0x194) & 1) != 0) {
    return 0;
  }
  uVar7 = *(uint *)(in_ECX + 0x18c);
  uVar1 = *(uint *)(in_ECX + 0x164);
  local_11d = 0;
  if ((uVar7 < uVar1) && (iVar4 = FUN_0042bc10(uVar7 * 0x10 + *(int *)(in_ECX + 0x178)), iVar4 == 0)
     ) {
    *local_11c = uVar7;
    return 1;
  }
  *(undefined4 *)(in_ECX + 400) = 0xffffffff;
  if (uVar1 != 0) {
    local_118 = *param_1;
    local_114 = param_1[1];
    uVar7 = 0;
    local_110 = uVar1;
    do {
      uVar6 = local_110 - uVar7 >> 1;
      uVar1 = uVar6 + uVar7;
      puVar5 = (uint *)(uVar1 * 0x10 + *(int *)(in_ECX + 0x178));
      uVar2 = *puVar5;
      uVar3 = puVar5[1];
      if (uVar3 < local_114) {
LAB_0042cfe8:
        iVar4 = 1;
        uVar7 = uVar1;
      }
      else {
        if ((uVar3 <= local_114) && (uVar2 <= local_118)) {
          if ((uVar3 <= local_114) && ((local_114 != uVar3 || (uVar2 < local_118))))
          goto LAB_0042cfe8;
          goto LAB_0042cf40;
        }
        iVar4 = -1;
        local_110 = uVar1;
      }
    } while (uVar6 != 0);
    if (iVar4 == 0) {
LAB_0042cf40:
      *local_11c = uVar1;
      *(uint *)(in_ECX + 0x18c) = uVar1;
      local_11d = 1;
      if (((local_10c != (char *)0x0) && (DAT_00b04430 != '\0')) &&
         ((*(byte *)(in_ECX + 0x160) & 1) != 0)) {
        __splitpath(local_10c,(char *)0x0,local_108,(char *)0x0,(char *)0x0);
        _Str1 = (char *)FUN_0042cae0(uVar1);
        iVar4 = __stricmp(_Str1,local_108);
        if (iVar4 != 0) {
          FUN_004a7a60("HashMap Collision between %s and %s",_Str1,local_108);
          local_11d = 0;
        }
      }
    }
  }
  return local_11d;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_0042d000(int param_1,uint *param_2,uint *param_3,char *param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int in_ECX;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined1 auStack_128 [3];
  undefined1 local_125;
  uint local_124;
  uint *local_120;
  uint local_11c;
  uint local_118;
  char *local_114;
  int local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_128;
  local_120 = param_3;
  local_114 = param_4;
  if ((*(byte *)(in_ECX + 0x194) & 1) != 0) {
    return 0;
  }
  iVar8 = param_1 * 0x10 + *(int *)(in_ECX + 0x178);
  local_124 = *(uint *)(in_ECX + 400);
  uVar1 = *(uint *)(iVar8 + 8);
  local_125 = 0;
  if (local_124 < uVar1) {
    iVar10 = local_124 * 0x10 + *(int *)(iVar8 + 0xc);
    if (((((char)param_5 != '\0') ||
         ((((byte)((uint)*(undefined4 *)(iVar10 + 0xc) >> 0x1f) ^ *(byte *)(in_ECX + 0x194) >> 3) &
          1) == 0)) && ((*(uint *)(iVar10 + 0xc) & 0x7fffffff) != 0)) &&
       (iVar4 = FUN_0042bc10(iVar10), iVar4 == 0)) {
      cVar3 = FUN_0042c1d0(iVar10,local_114);
      if (cVar3 == '\0') {
        *local_120 = local_124;
        return 1;
      }
      return 0;
    }
  }
  if (uVar1 != 0) {
    local_10c = *(int *)(iVar8 + 0xc);
    local_11c = *param_2;
    local_118 = param_2[1];
    uVar7 = 0;
    local_124 = uVar1;
    do {
      uVar5 = local_124 - uVar7 >> 1;
      uVar1 = uVar5 + uVar7;
      puVar9 = (uint *)(uVar1 * 0x10 + local_10c);
      uVar2 = puVar9[1];
      if (uVar2 < local_118) {
LAB_0042d22b:
        iVar8 = 1;
        uVar7 = uVar1;
      }
      else {
        if ((uVar2 <= local_118) && (*puVar9 <= local_11c)) {
          if ((uVar2 <= local_118) && ((local_118 != uVar2 || (*puVar9 < local_11c))))
          goto LAB_0042d22b;
          goto LAB_0042d152;
        }
        iVar8 = -1;
        local_124 = uVar1;
      }
    } while (uVar5 != 0);
    if (iVar8 == 0) {
LAB_0042d152:
      cVar3 = FUN_0042c2d0(puVar9,param_5);
      pcVar6 = local_114;
      if ((cVar3 != '\0') && (cVar3 = FUN_0042c1d0(puVar9,local_114), cVar3 == '\0')) {
        *local_120 = uVar1;
        *(uint *)(in_ECX + 400) = uVar1;
        local_125 = 1;
        if ((pcVar6 != (char *)0x0) &&
           ((DAT_00b04430 != '\0' && ((*(uint *)(in_ECX + 0x160) >> 1 & 1) != 0)))) {
          __splitpath(pcVar6,(char *)0x0,(char *)0x0,local_108,(char *)0x0);
          pcVar6 = (char *)FUN_0042cc00(param_1,uVar1);
          iVar8 = __stricmp(pcVar6,local_108);
          if (iVar8 != 0) {
            FUN_004a7a60("HashMap Collision between %s and %s",pcVar6,local_108);
            local_125 = 0;
          }
        }
      }
    }
  }
  return local_125;
}



int FUN_0042d240(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  
  iVar1 = param_3;
  cVar3 = FUN_0042ce40(param_1,&param_3,param_3);
  iVar2 = param_3;
  if (cVar3 != '\0') {
    cVar3 = FUN_0042d000(param_3,param_2,&param_3,iVar1,1);
    if (cVar3 != '\0') {
      return param_3 * 0x10 + *(int *)(*(int *)(in_ECX + 0x178) + 0xc + iVar2 * 0x10);
    }
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0042d2a0(char *param_1,char *param_2,FILETIME *param_3)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  HANDLE hFindFile;
  char *pcVar6;
  int iVar7;
  LONG LVar8;
  BOOL BVar9;
  int in_ECX;
  uint uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined2 *puVar14;
  undefined1 auStack_378 [3];
  char local_375;
  int local_374;
  int local_370;
  FILETIME *local_36c;
  char *local_368;
  char *local_364;
  HANDLE local_360;
  undefined1 local_35c [8];
  undefined1 local_354 [8];
  undefined1 local_34c [319];
  undefined4 uStack_20d;
  char acStack_109 [261];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_378;
  local_368 = param_1;
  local_364 = param_2;
  local_36c = param_3;
  local_374 = 0;
  iVar2 = 1 - (int)param_1;
  do {
    cVar3 = *param_1;
    param_1[(int)&uStack_20d + iVar2] = cVar3;
    param_1 = param_1 + 1;
    pcVar4 = param_2;
  } while (cVar3 != '\0');
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  uVar5 = (int)pcVar4 - (int)param_2;
  pcVar4 = local_34c + 0x13f;
  do {
    pcVar6 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = param_2;
  for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar4 = pcVar4 + 1;
  }
  puVar12 = (undefined4 *)(local_34c + 0x13f);
  do {
    pcVar4 = (char *)((int)puVar12 + 1);
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  } while (*pcVar4 != '\0');
  *puVar12 = 0x2a2e2a;
  hFindFile = FindFirstFileA((LPCSTR)((int)&uStack_20d + 1),(LPWIN32_FIND_DATAA)local_34c);
  if (hFindFile == (HANDLE)0xffffffff) {
    local_374 = 0;
  }
  else {
    iVar2 = 1 - (int)param_2;
    do {
      cVar3 = *param_2;
      param_2[(int)(acStack_109 + iVar2)] = cVar3;
      param_2 = param_2 + 1;
    } while (cVar3 != '\0');
    pcVar4 = acStack_109 + 1;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    if (1 < (byte)((int)pcVar4 - (int)(acStack_109 + 2))) {
      acStack_109[(int)pcVar4 - (int)(acStack_109 + 2) & 0xff] = '\0';
    }
    local_360 = hFindFile;
    FUN_006fa2d0(acStack_109 + 1,2);
    local_375 = '\0';
    cVar3 = FUN_0042ce40(local_354,&local_370,0);
    iVar2 = local_370;
    if (cVar3 != '\0') {
      local_375 = '\x01';
    }
    do {
      if (((local_34c[0] & 0x10) == 0) || (local_34c[0x2c] == '.')) {
        if ((local_375 != '\0') &&
           (LVar8 = CompareFileTime((FILETIME *)(local_34c + 0x14),local_36c), 0 < LVar8)) {
          FUN_006fa2d0(local_34c + 0x2c,0);
          cVar3 = FUN_0042d000(iVar2,local_35c,&local_370,0,0);
          if (cVar3 != '\0') {
            puVar1 = (uint *)(local_370 * 0x10 +
                              *(int *)(*(int *)(in_ECX + 0x178) + 0xc + iVar2 * 0x10) + 0xc);
            *puVar1 = *puVar1 & 0x80000000;
            local_374 = local_374 + 1;
          }
        }
      }
      else {
        pcVar4 = local_364;
        do {
          cVar3 = *pcVar4;
          pcVar4[(int)&uStack_20d + (1 - (int)local_364)] = cVar3;
          pcVar4 = pcVar4 + 1;
        } while (cVar3 != '\0');
        pcVar4 = local_34c + 0x2c;
        pcVar6 = pcVar4;
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        pcVar13 = local_34c + 0x13f;
        do {
          pcVar11 = pcVar13 + 1;
          pcVar13 = pcVar13 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = pcVar4;
        for (uVar5 = (uint)((int)pcVar6 - (int)pcVar4) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar5 = (int)pcVar6 - (int)pcVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        puVar14 = (undefined2 *)(local_34c + 0x13f);
        do {
          pcVar4 = (char *)((int)puVar14 + 1);
          puVar14 = (undefined2 *)((int)puVar14 + 1);
        } while (*pcVar4 != '\0');
        *puVar14 = 0x5c;
        iVar7 = FUN_0042d2a0(local_368,(int)&uStack_20d + 1,local_36c);
        local_374 = local_374 + iVar7;
        hFindFile = local_360;
      }
      BVar9 = FindNextFileA(hFindFile,(LPWIN32_FIND_DATAA)local_34c);
    } while (BVar9 != 0);
    FindClose(hFindFile);
  }
  return local_374;
}



void FUN_0042d540(char *param_1,int param_2,undefined4 param_3,uint param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009abab8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00430140(uVar3);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a35de4;
  if (param_1 != (char *)0x0) {
    iVar2 = 0x3c - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[(int)in_ECX + iVar2] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  in_ECX[0x55] = param_2;
  in_ECX[6] = 0;
  InterlockedIncrement((LONG *)(param_2 + 0x1a8));
  in_ECX[0x56] = param_3;
  in_ECX[0x54] = param_4;
  FUN_004307f0(0);
  if ((DAT_00b04360 < param_4) && (param_5 != -1)) {
    param_4 = DAT_00b04360;
  }
  in_ECX[3] = param_4;
  if (in_ECX[6] == 0) {
    in_ECX[7] = *(undefined4 *)(in_ECX[0x55] + 0x1c);
    in_ECX[5] = 0;
    in_ECX[4] = 0;
    in_ECX[6] = 0;
    if (param_4 != 0) {
      uVar4 = FUN_00401f00(param_4);
      in_ECX[6] = uVar4;
    }
    *(undefined1 *)(in_ECX + 9) = 1;
  }
  if (param_5 == -1) {
    uVar4 = FUN_0042c3e0(in_ECX[6],in_ECX[3],0);
    in_ECX[4] = uVar4;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0042d650(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009abae8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a35de4;
  local_4 = 0;
  FUN_0042c910(uVar1);
  if (in_ECX[6] != 0) {
    FUN_00401f20(in_ECX[6]);
  }
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  local_4 = 0xffffffff;
  FUN_00430670();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0042d6d0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009abb18;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0042d540(param_1,param_2,param_3,param_4,param_5);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a35e64;
  iVar3 = FUN_0042c4a0(in_ECX + 0x59,4);
  in_ECX[0x52] = in_ECX[0x52] + iVar3;
  puVar4 = (undefined4 *)FUN_00401f00(0x38,uVar2);
  in_ECX[0x57] = puVar4;
  puVar4[8] = &LAB_0042ba60;
  puVar4[9] = &LAB_0042ba80;
  puVar4[10] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  iVar3 = FUN_00742490(puVar4,"1.2.1",0x38);
  if (iVar3 == 0) {
    uVar1 = in_ECX[0x59];
    uVar5 = DAT_00b04360;
    if (uVar1 < DAT_00b04360) {
      uVar5 = uVar1;
    }
    in_ECX[0x5a] = uVar5;
    uVar6 = FUN_00401f00(uVar5,uVar2);
    in_ECX[0x58] = uVar6;
    in_ECX[0x5b] = 0;
    in_ECX[0x5c] = 0;
  }
  else {
    FUN_00743970(puVar4);
    if (param_1 == (char *)0x0) {
      param_1 = "<Unknown>";
    }
    FUN_004a7a60("Error initializing ZLib inflate stream for file %s.",param_1);
    FUN_00401f20(puVar4);
    in_ECX[0x57] = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_0042d800(undefined4 param_1)

{
  int in_ECX;
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(in_ECX + 10);
  if (*(ushort *)(in_ECX + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(in_ECX + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,param_1);
  return uVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0042d840(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  char cStack_11c;
  char acStack_11b [267];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009abb78;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&cStack_11c;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffed4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar3 = (int *)FUN_00431690(param_1,0,0x2800,uVar2);
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar3 + 0x18))(0,0);
    puVar6 = (undefined4 *)*piVar3;
    if (cVar1 != '\0') {
      iVar4 = (*(code *)puVar6[10])(&cStack_11c,0x104,0xd);
      while (iVar4 != 0) {
        (*(code *)piVar3[1])(piVar3,&stack0xfffffee3,1,&stack0xfffffedc,1);
        pcVar5 = _strstr(&cStack_11c,"\\");
        if (pcVar5 == (char *)0x0) {
          if (DAT_00b33930 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)FUN_00401f00(0x10);
            local_c = 2;
            if (puVar6 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              *(undefined2 *)(puVar6 + 2) = 5;
              *puVar6 = &PTR__scalar_deleting_destructor__00a35cf4;
              *(undefined2 *)((int)puVar6 + 0xe) = 1;
              *(undefined2 *)((int)puVar6 + 10) = 0;
              *(undefined2 *)(puVar6 + 3) = 0;
              uVar7 = FUN_00401f00(0x14);
              puVar6[1] = uVar7;
            }
            local_c = -1;
            DAT_00b33930 = puVar6;
          }
          iVar4 = FUN_00401f00(8);
          local_c = 3;
          if (iVar4 != 0) {
            FUN_006fa2d0(&cStack_11c,0);
          }
          uVar2 = (uint)*(ushort *)((int)DAT_00b33930 + 10);
          local_c = -1;
          if (*(ushort *)(DAT_00b33930 + 2) <= uVar2) {
            FUN_004e4a10(*(ushort *)((int)DAT_00b33930 + 0xe) + uVar2);
          }
        }
        else {
          if (DAT_00b33934 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)FUN_00401f00(0x10);
            local_c = 0;
            if (puVar6 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              *(undefined2 *)(puVar6 + 2) = 5;
              *puVar6 = &PTR__scalar_deleting_destructor__00a35cf4;
              *(undefined2 *)((int)puVar6 + 0xe) = 1;
              *(undefined2 *)((int)puVar6 + 10) = 0;
              *(undefined2 *)(puVar6 + 3) = 0;
              uVar7 = FUN_00401f00(0x14);
              puVar6[1] = uVar7;
            }
            local_c = -1;
            DAT_00b33934 = puVar6;
          }
          pcVar5 = &cStack_11c;
          if (cStack_11c == '\\') {
            pcVar5 = acStack_11b;
          }
          iVar4 = FUN_00401f00(8);
          local_c = 1;
          if (iVar4 != 0) {
            FUN_006fa2d0(pcVar5,1);
          }
          uVar2 = (uint)*(ushort *)((int)DAT_00b33934 + 10);
          local_c = -1;
          if (*(ushort *)(DAT_00b33934 + 2) <= uVar2) {
            FUN_004e4a10(*(ushort *)((int)DAT_00b33934 + 0xe) + uVar2);
          }
        }
        FUN_0042bb90(uVar2,&stack0xfffffedc);
        iVar4 = (**(code **)(*piVar3 + 0x28))(&cStack_11c,0x104,0xd);
      }
      puVar6 = (undefined4 *)*piVar3;
    }
    (*(code *)*puVar6)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0042db10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((&DAT_00b338e8)[param_1] != 0) || ((&DAT_00b3390c)[param_1] != 0)) {
    uVar1 = FUN_0042d240(param_2,param_3,param_4);
  }
  return uVar1;
}



int FUN_0042db50(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
                char *param_6)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  uint local_18;
  uint uStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b1c0b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_18 = param_1 + 0x200;
  FUN_00401020("ArchiveManager::AddArchiveToFileList",uVar4);
  cVar3 = FUN_0042ce40(param_3,&iStack_24,0);
  if (cVar3 != '\0') {
    if ((param_2 == 0) && (param_1 != 0)) {
      param_2 = FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                             (uint)((ulonglong)param_1 * 4));
      if (param_1 != 0) {
        uVar4 = 0;
        do {
          uVar5 = *param_5;
          iStack_20 = FUN_00401f00(8);
          puStack_8 = (undefined1 *)0x0;
          if (iStack_20 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_006fa2d0(uVar5,0);
          }
          *(undefined4 *)(param_2 + uVar4 * 4) = uVar5;
          param_5 = (undefined4 *)param_5[1];
          uVar4 = uVar4 + 1;
          puStack_8 = (undefined1 *)0xffffffff;
        } while (uVar4 < param_1);
      }
      FUN_0042bfb0(param_2,0,param_1 - 1);
    }
    iVar14 = iStack_24 * 0x10 + *(int *)(unaff_retaddr + 0x178);
    uVar4 = 0;
    iStack_20 = iVar14;
    if (*(int *)(iVar14 + 8) != 0) {
      iStack_28 = 0;
      do {
        puVar15 = (uint *)(*(int *)(iVar14 + 0xc) + iStack_28);
        if (((((byte)(puVar15[3] >> 0x1f) ^ *(byte *)(unaff_retaddr + 0x194) >> 3) & 1) == 0) &&
           ((puVar15[3] & 0x7fffffff) != 0)) {
          iVar6 = FUN_0042bc50(puVar15);
          if (iVar6 == 0) {
            if (param_1 != 0) {
              local_18 = *puVar15;
              uStack_14 = puVar15[1];
              uVar12 = 0;
              uVar11 = param_1;
              do {
                uVar7 = uVar11 - uVar12 >> 1;
                uVar13 = uVar7 + uVar12;
                puVar15 = *(uint **)(param_2 + uVar13 * 4);
                uVar1 = *puVar15;
                uVar2 = puVar15[1];
                iVar14 = iStack_20;
                if (((uVar2 <= uStack_14) && ((uStack_14 != uVar2 || (uVar1 <= local_18)))) &&
                   ((uStack_14 < uVar2 ||
                    ((uVar12 = uVar13, uVar13 = uVar11, uStack_14 == uVar2 && (local_18 <= uVar1))))
                   )) goto LAB_0042ddae;
                uVar11 = uVar13;
              } while (uVar7 != 0);
            }
            pcVar8 = (char *)FUN_0042cc00(iStack_24,uVar4);
            pcVar9 = param_6;
            do {
              cVar3 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar3 != '\0');
            pcVar10 = pcVar8;
            do {
              cVar3 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar3 != '\0');
            iVar6 = FUN_00401f00(pcVar9 + (int)(pcVar10 +
                                               ((1 - (int)(pcVar8 + 1)) - (int)(param_6 + 1))));
            pcVar9 = param_6;
            do {
              cVar3 = *pcVar9;
              pcVar9[iVar6 - (int)param_6] = cVar3;
              pcVar9 = pcVar9 + 1;
              pcVar10 = pcVar8;
            } while (cVar3 != '\0');
            do {
              cVar3 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar3 != '\0');
            uVar12 = (int)pcVar10 - (int)pcVar8;
            pcVar9 = (char *)(iVar6 + -1);
            do {
              pcVar10 = pcVar9 + 1;
              pcVar9 = pcVar9 + 1;
            } while (*pcVar10 != '\0');
            for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar9 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
            }
            FUN_00446cb0(iVar6);
          }
          else if (iVar6 < 0) break;
        }
LAB_0042ddae:
        iStack_28 = iStack_28 + 0x10;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar14 + 8));
    }
  }
  FUN_00401040();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 FUN_0042ddf0(char *param_1,char *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  int local_c;
  undefined1 local_8 [8];
  
  local_c = 0;
  if (*param_1 == '\\') {
    param_1 = param_1 + 1;
  }
  iVar3 = _strncmp(param_1,"Data\\",5);
  if ((iVar3 == 0) || (iVar3 = _strncmp(param_1,"data\\",5), pcVar5 = param_1, iVar3 == 0)) {
    param_1 = param_1 + 5;
    pcVar5 = param_1;
  }
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  if ((param_3 == 0xffff) && (pcVar5 = param_1, pcVar6[-1] != '\\')) {
    do {
      pcVar6 = pcVar5;
      pcVar5 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    param_3 = FUN_0042ba90(pcVar6 + -3);
  }
  FUN_006fa2d0(param_1,1);
  iVar3 = DAT_00b338e4;
  if (((DAT_00b338e4 == 0) || ((*(ushort *)(DAT_00b338e4 + 0x174) & (ushort)param_3) == 0)) ||
     (cVar2 = FUN_0042ce40(local_8,&local_c,0), cVar2 == '\0')) {
    piVar9 = DAT_00b338e0;
    if (DAT_00b338e0 == (int *)0x0) {
      return 0;
    }
    while (((iVar7 = *piVar9, iVar7 == 0 || (iVar7 == iVar3)) ||
           (((*(ushort *)(iVar7 + 0x174) & (ushort)param_3) == 0 ||
            (cVar2 = FUN_0042ce40(local_8,&local_c,0), cVar2 == '\0'))))) {
      piVar9 = (int *)piVar9[1];
      if (piVar9 == (int *)0x0) {
        return 0;
      }
    }
    iVar8 = local_c * 0x10 + *(int *)(iVar7 + 0x178);
    DAT_00b338e4 = iVar7;
  }
  else {
    InterlockedIncrement((LONG *)(iVar3 + 0x1a8));
    iVar8 = local_c * 0x10 + *(int *)(iVar3 + 0x178);
    iVar7 = iVar3;
  }
  if ((iVar8 == 0) || (*(int *)(iVar8 + 8) == 0)) {
    FUN_0042c910();
  }
  else {
    bVar10 = (*(byte *)(iVar7 + 0x194) & 0x20) == 0;
    if (bVar10) {
      FUN_00401020("ArchiveManager::GetRandomFileNameForDirectory");
    }
    uVar1 = *(uint *)(iVar8 + 8);
    uVar4 = FUN_0047df80(0);
    pcVar5 = (char *)FUN_0042cc00(local_c,uVar4 % uVar1);
    iVar3 = (int)param_2 - (int)param_1;
    do {
      cVar2 = *param_1;
      param_1[iVar3] = cVar2;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
    pcVar6 = _strrchr(param_2,0x5c);
    if (pcVar6 != (char *)0x0) {
      iVar3 = 1 - (int)pcVar5;
      do {
        cVar2 = *pcVar5;
        pcVar5[(int)(pcVar6 + iVar3)] = cVar2;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (bVar10) {
        FUN_00401040();
      }
      return 1;
    }
  }
  return 0;
}



void FUN_0042e000(byte param_1)

{
  FUN_0042ca60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4
FUN_0042e020(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  
  cVar1 = FUN_0042ce40(param_1,param_3,param_5);
  if (cVar1 != '\0') {
    cVar1 = FUN_0042d000(*param_3,param_2,param_4,param_5,0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_0042e070(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009a9ef6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  InterlockedIncrement((LONG *)(in_ECX + 0x1a8));
  uVar4 = 0;
  iVar5 = param_2 * 0x10 + *(int *)(*(int *)(in_ECX + 0x178) + 0xc + param_1 * 0x10);
  if (((iVar5 == 0) ||
      ((((byte)(*(uint *)(iVar5 + 0xc) >> 0x1f) ^ *(byte *)(in_ECX + 0x194) >> 3) & 1) != 0)) ||
     (uVar3 = *(uint *)(iVar5 + 0xc) & 0x7fffffff, uVar3 == 0)) goto LAB_0042e180;
  if ((((byte)(*(uint *)(in_ECX + 0x160) >> 2) ^ (byte)((uint)*(undefined4 *)(iVar5 + 8) >> 0x1e)) &
      1) == 0) {
    iVar2 = FUN_00401f00(0x15c,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
LAB_0042e174:
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0042d540(param_4,in_ECX,uVar3,*(uint *)(iVar5 + 8) & 0x3fffffff,param_3);
    }
  }
  else {
    iVar2 = FUN_00401f00(0x174,uVar1);
    local_4 = 1;
    if (iVar2 == 0) goto LAB_0042e174;
    uVar4 = FUN_0042d6d0(param_4,in_ECX,uVar3,*(uint *)(iVar5 + 8) & 0x3fffffff,param_3);
  }
  local_4 = 0xffffffff;
LAB_0042e180:
  FUN_0042c910();
  *unaff_FS_OFFSET = local_c;
  return uVar4;
}



undefined4 FUN_0042e1a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b3ba6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  InterlockedIncrement((LONG *)(in_ECX + 0x1a8));
  uVar3 = 0;
  if (((param_1 == 0) ||
      ((((byte)(*(uint *)(param_1 + 0xc) >> 0x1f) ^ *(byte *)(in_ECX + 0x194) >> 3) & 1) != 0)) ||
     ((*(uint *)(param_1 + 0xc) & 0x7fffffff) == 0)) goto LAB_0042e2ae;
  if ((((byte)(*(uint *)(in_ECX + 0x160) >> 2) ^ (byte)((uint)*(undefined4 *)(param_1 + 8) >> 0x1e))
      & 1) == 0) {
    iVar2 = FUN_00401f00(0x15c,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
LAB_0042e2a2:
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0042d540(param_3,in_ECX,*(uint *)(param_1 + 0xc) & 0x7fffffff,
                           *(uint *)(param_1 + 8) & 0x3fffffff,param_2);
    }
  }
  else {
    iVar2 = FUN_00401f00(0x174,uVar1);
    local_4 = 1;
    if (iVar2 == 0) goto LAB_0042e2a2;
    uVar3 = FUN_0042d6d0(param_3,in_ECX,*(uint *)(param_1 + 0xc) & 0x7fffffff,
                         *(uint *)(param_1 + 8) & 0x3fffffff,param_2);
  }
  local_4 = 0xffffffff;
LAB_0042e2ae:
  FUN_0042c910();
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0042e2d0(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  HANDLE hFindFile;
  int in_ECX;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  int local_174;
  uint *local_170;
  int local_16c;
  int local_168;
  uint local_164;
  int local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_14c;
  char cStack_145;
  _WIN32_FIND_DATAA local_144;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_174;
  local_174 = 0;
  if ((DAT_00b33934 == 0) && (DAT_00b33930 == 0)) {
    return 0;
  }
  if (((*(byte *)(in_ECX + 0x160) & 1) == 0) || ((*(uint *)(in_ECX + 0x160) >> 1 & 1) == 0)) {
    FUN_004a7a60(
                "bInvalidateOlderFiles is true in the INI file, but the archive doesn\'t have directory or file strings.  This is going to be really really slow."
                );
    hFindFile = FindFirstFileA((LPCSTR)(in_ECX + 0x3c),&local_144);
    if (hFindFile == (HANDLE)0xffffffff) {
      FUN_004a7a60("Could not find Archive %s to get file time.",(LPCSTR)(in_ECX + 0x3c));
    }
    else {
      FindClose(hFindFile);
    }
    FUN_0042d2a0(PTR_DAT_00b0555c,&DAT_00a2f7ec,&local_144.ftLastWriteTime);
  }
  else {
    local_164 = 0;
    if (*(int *)(in_ECX + 0x164) != 0) {
      local_168 = 0;
      local_16c = in_ECX;
      do {
        puVar9 = (uint *)(*(int *)(local_16c + 0x178) + local_168);
        if (DAT_00b33934 != 0) {
          uVar10 = 0;
          if (*(ushort *)(DAT_00b33934 + 10) != 0) {
            local_154 = *puVar9;
            uVar13 = puVar9[1];
            piVar7 = *(int **)(DAT_00b33934 + 4);
LAB_0042e381:
            uVar2 = *(uint *)*piVar7;
            uVar3 = ((uint *)*piVar7)[1];
            if (((uVar3 < uVar13) || ((uVar3 == uVar13 && (uVar2 < local_154)))) ||
               ((uVar13 <= uVar3 && ((uVar3 != uVar13 || (local_154 < uVar2)))))) goto LAB_0042e3ac;
            uVar10 = 0;
            if (puVar9[2] != 0) {
              iVar6 = 0;
              do {
                puVar8 = (uint *)(puVar9[3] + 0xc + iVar6);
                *puVar8 = *puVar8 & 0x80000000;
                uVar10 = uVar10 + 1;
                iVar6 = iVar6 + 0x10;
              } while (uVar10 < puVar9[2]);
            }
            local_174 = local_174 + puVar9[2];
            goto LAB_0042e4f6;
          }
        }
LAB_0042e3ba:
        local_144.ftCreationTime.dwLowDateTime._0_2_ = 0x5c;
        local_144.dwFileAttributes = 0x61746144;
        local_170 = puVar9;
        pcVar4 = (char *)FUN_0042cae0(local_164);
        pcVar5 = pcVar4;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        pcVar12 = &cStack_145;
        do {
          pcVar11 = pcVar12 + 1;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = pcVar4;
        for (uVar10 = (uint)((int)pcVar5 - (int)pcVar4) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar10 = (int)pcVar5 - (int)pcVar4 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar12 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar12 = pcVar12 + 1;
        }
        iVar6 = FID_conflict___access((wchar_t *)&local_144,0);
        if ((iVar6 != -1) && (local_15c = 0, puVar9[2] != 0)) {
          local_160 = 0;
          do {
            puVar8 = (uint *)(puVar9[3] + local_160);
            if ((DAT_00b33930 != 0) &&
               (local_158 = (uint)*(ushort *)(DAT_00b33930 + 10), local_158 != 0)) {
              local_14c = *puVar8;
              uVar10 = puVar8[1];
              piVar7 = *(int **)(DAT_00b33930 + 4);
              uVar13 = 0;
              do {
                uVar2 = *(uint *)*piVar7;
                uVar3 = ((uint *)*piVar7)[1];
                if (((uVar10 <= uVar3) &&
                    ((uVar3 != uVar10 || (puVar9 = local_170, local_14c <= uVar2)))) &&
                   ((uVar3 < uVar10 || ((uVar3 == uVar10 && (uVar2 <= local_14c)))))) {
                  puVar8[3] = puVar8[3] & 0x80000000;
                  local_174 = local_174 + 1;
                  break;
                }
                uVar13 = uVar13 + 1;
                piVar7 = piVar7 + 1;
              } while (uVar13 < local_158);
            }
            local_160 = local_160 + 0x10;
            local_15c = local_15c + 1;
          } while (local_15c < puVar9[2]);
        }
LAB_0042e4f6:
        local_168 = local_168 + 0x10;
        local_164 = local_164 + 1;
      } while (local_164 < *(uint *)(local_16c + 0x164));
    }
  }
  return local_174;
LAB_0042e3ac:
  uVar10 = uVar10 + 1;
  piVar7 = piVar7 + 1;
  if (*(ushort *)(DAT_00b33934 + 10) <= uVar10) goto LAB_0042e3ba;
  goto LAB_0042e381;
}



void FUN_0042e6a0(byte param_1)

{
  FUN_0042d650();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042e6c0(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00430ba0(param_1);
  param_1 = FUN_0070f910("ArchiveFile");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fc30(&DAT_00a35ff4,*(int *)(in_ECX + 0x154) + 0x3c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("Offset",*(undefined4 *)(in_ECX + 0x158));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0042e790(byte param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[0x57];
  *in_ECX = &PTR_FUN_00a35e64;
  if (iVar1 != 0) {
    FUN_00743970(iVar1);
    FUN_00401f20(iVar1);
  }
  if (in_ECX[0x58] != 0) {
    FUN_00401f20(in_ECX[0x58]);
  }
  FUN_0042d650();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint FUN_0042e800(char *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint in_EAX;
  int iVar4;
  int local_20;
  int local_1c;
  undefined1 local_18 [8];
  undefined1 local_10 [12];
  
  if (DAT_00b338e0 != (int *)0x0) {
    if (*param_1 == '\\') {
      param_1 = param_1 + 1;
    }
    iVar4 = _strncmp(param_1,"Data\\",5);
    if ((iVar4 == 0) || (iVar4 = _strncmp(param_1,"data\\",5), iVar4 == 0)) {
      param_1 = param_1 + 5;
    }
    in_EAX = FUN_006fa1b0(param_1,local_18,local_10);
    for (piVar2 = DAT_00b338e0; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      iVar4 = *piVar2;
      if (((iVar4 != 0) &&
          (in_EAX = FUN_0042ce40(local_18,&local_20,0), iVar3 = local_20, (char)in_EAX != '\0')) &&
         (in_EAX = FUN_0042d000(local_20,local_10,&local_1c,0,0), (char)in_EAX != '\0')) {
        iVar4 = local_1c * 0x10 + *(int *)(*(int *)(iVar4 + 0x178) + 0xc + iVar3 * 0x10);
        puVar1 = (uint *)(iVar4 + 0xc);
        *puVar1 = *puVar1 & 0x80000000;
        return CONCAT31((int3)((uint)iVar4 >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}



undefined4 FUN_0042e8e0(char *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 local_18 [8];
  undefined1 local_10 [12];
  
  local_24 = 0;
  local_20 = 0;
  if (*param_1 == '\\') {
    param_1 = param_1 + 1;
  }
  iVar4 = _strncmp(param_1,"Data\\",5);
  if ((iVar4 == 0) || (iVar4 = _strncmp(param_1,"data\\",5), iVar4 == 0)) {
    param_1 = param_1 + 5;
  }
  pcVar2 = param_1;
  if (param_3 == 0xffff) {
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    param_3 = FUN_0042ba90(pcVar5 + -3);
  }
  FUN_006fa1b0(param_1,local_18,local_10);
  local_1c = DAT_00b338e4;
  piVar1 = DAT_00b338e0;
  if ((((DAT_00b338e4 != 0) && ((*(ushort *)(DAT_00b338e4 + 0x174) & (ushort)param_3) != 0)) &&
      (cVar3 = FUN_0042ce40(local_18,&local_24,param_1), uVar6 = local_24, piVar1 = DAT_00b338e0,
      cVar3 != '\0')) &&
     (cVar3 = FUN_0042d000(local_24,local_10,&local_20,param_1,0), piVar1 = DAT_00b338e0,
     cVar3 != '\0')) {
    uVar6 = FUN_0042e070(uVar6,local_20,param_2,param_1);
    return uVar6;
  }
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar4 = *piVar1;
    if (((iVar4 != 0) && (iVar4 != local_1c)) &&
       (((*(ushort *)(iVar4 + 0x174) & (ushort)param_3) != 0 &&
        ((cVar3 = FUN_0042ce40(local_18,&local_24,param_1), cVar3 != '\0' &&
         (cVar3 = FUN_0042d000(local_24,local_10,&local_20,param_1,0), cVar3 != '\0')))))) break;
    piVar1 = (int *)piVar1[1];
  }
  DAT_00b338e4 = iVar4;
  uVar6 = FUN_0042e070(local_24,local_20,param_2,param_1);
  return uVar6;
}



int FUN_0042ea60(char *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 local_24;
  int local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [8];
  undefined1 local_10 [12];
  
  if (DAT_00b338e0 != (int *)0x0) {
    if (*param_1 == '\\') {
      param_1 = param_1 + 1;
    }
    iVar4 = _strncmp(param_1,"Data\\",5);
    if ((iVar4 == 0) || (iVar4 = _strncmp(param_1,"data\\",5), iVar4 == 0)) {
      param_1 = param_1 + 5;
    }
    pcVar2 = param_1;
    if (param_2 == 0xffff) {
      do {
        pcVar5 = pcVar2;
        pcVar2 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
      param_2 = FUN_0042ba90(pcVar5 + -3);
    }
    FUN_006fa1b0(param_1,local_18,local_10);
    iVar4 = DAT_00b338e4;
    local_20 = DAT_00b338e4;
    piVar1 = DAT_00b338e0;
    if (((DAT_00b338e4 != 0) && ((*(ushort *)(DAT_00b338e4 + 0x174) & (ushort)param_2) != 0)) &&
       (cVar3 = FUN_0042e020(local_18,local_10,&local_24,local_1c,param_1), piVar1 = DAT_00b338e0,
       cVar3 != '\0')) {
      return iVar4;
    }
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      iVar4 = *piVar1;
      if (((iVar4 != 0) && (iVar4 != local_20)) &&
         (((*(ushort *)(iVar4 + 0x174) & (ushort)param_2) != 0 &&
          ((cVar3 = FUN_0042ce40(local_18,&local_24,param_1), cVar3 != '\0' &&
           (cVar3 = FUN_0042d000(local_24,local_10,local_1c,param_1,0), cVar3 != '\0')))))) {
        DAT_00b338e4 = iVar4;
        return iVar4;
      }
    }
  }
  return 0;
}



bool FUN_0042eba0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0042ea60(param_1,param_2);
  return iVar1 != 0;
}



undefined4 FUN_0042ebc0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  char cVar3;
  
  cVar3 = -(char)((int)*(undefined4 *)(param_2 + 0xc) >> 0x1f);
  if ((&DAT_00b338e8)[param_1 + (uint)(cVar3 != '\0') * 9] == 0) {
    return 0;
  }
  InterlockedIncrement((LONG *)((&DAT_00b338e8)[param_1 + (uint)(cVar3 != '\0') * 9] + 0x1a8));
  cVar1 = -(char)((int)*(undefined4 *)(param_2 + 0xc) >> 0x1f);
  if (cVar3 != cVar1) {
    FUN_0042c910();
    if ((&DAT_00b338e8)[param_1 + (uint)(cVar1 != '\0') * 9] == 0) {
      return 0;
    }
    InterlockedIncrement((LONG *)((&DAT_00b338e8)[param_1 + (uint)(cVar1 != '\0') * 9] + 0x1a8));
  }
  uVar2 = FUN_0042e1a0(param_2,param_3,param_4);
  FUN_0042c910();
  return uVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0042ec70(int *param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int *local_11c;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_11c;
  local_11c = param_1;
  if (DAT_00b338e0 != (int *)0x0) {
    if (*param_2 == '\\') {
      param_2 = param_2 + 1;
    }
    iVar3 = _strncmp(param_2,"Data\\",5);
    if ((iVar3 == 0) || (iVar3 = _strncmp(param_2,"data\\",5), iVar3 == 0)) {
      param_2 = param_2 + 5;
    }
    iVar3 = -(int)param_3;
    do {
      cVar1 = *param_3;
      param_3[(int)(local_108 + iVar3)] = cVar1;
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
    pcVar4 = _strrchr(local_108,0x5c);
    if (pcVar4 != (char *)0x0) {
      pcVar4[1] = '\0';
    }
    pcVar4 = param_2;
    if (param_4 == 0xffff) {
      do {
        pcVar5 = pcVar4;
        pcVar4 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
      param_4 = FUN_0042ba90(pcVar5 + -3);
    }
    iVar3 = 0;
    FUN_006fa1b0(param_2,local_110,local_118);
    uVar7 = 0;
    for (piVar8 = local_11c; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[1]) {
      if (*piVar8 != 0) {
        uVar7 = uVar7 + 1;
      }
    }
    piVar6 = local_11c;
    piVar8 = DAT_00b338e0;
    if (DAT_00b338e0 != (int *)0x0) {
      do {
        iVar2 = *piVar8;
        if ((iVar2 != 0) && ((*(ushort *)(iVar2 + 0x174) & (ushort)param_4) != 0)) {
          iVar3 = FUN_0042db50(iVar2,uVar7,iVar3,local_110,local_118,piVar6,local_108);
          piVar6 = local_11c;
        }
        piVar8 = (int *)piVar8[1];
      } while (piVar8 != (int *)0x0);
      if (iVar3 != 0) {
        uVar9 = 0;
        if (uVar7 != 0) {
          do {
            FUN_00401f20(*(undefined4 *)(iVar3 + uVar9 * 4));
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
        }
        FUN_00401f20(iVar3);
      }
    }
  }
  return;
}



void FUN_0042edf0(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int local_8;
  int local_4;
  
  for (piVar3 = DAT_00b338e0; (piVar3 != (int *)0x0 && ((piVar3[1] != 0 || (*piVar3 != 0))));
      piVar3 = (int *)piVar3[1]) {
    iVar2 = *piVar3;
    if (((*(ushort *)(iVar2 + 0x174) & param_3) != 0) &&
       ((cVar5 = FUN_0042ce40(param_1,&local_8,0), iVar4 = local_8, cVar5 != '\0' &&
        (cVar5 = FUN_0042d000(local_8,param_2,&local_4,0,0), cVar5 != '\0')))) {
      puVar1 = (uint *)(local_4 * 0x10 + *(int *)(*(int *)(iVar2 + 0x178) + 0xc + iVar4 * 0x10) +
                       0xc);
      *puVar1 = *puVar1 & 0x80000000;
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0042ee80(undefined4 param_1,undefined4 param_2,char param_3,char param_4)

{
  char *pcVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 uVar7;
  char *pcVar8;
  DWORD DVar9;
  undefined4 *in_ECX;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  int *unaff_FS_OFFSET;
  undefined1 auStack_15c [3];
  byte bStack_159;
  uint uStack_158;
  uint local_154;
  void *pvStack_150;
  undefined4 local_14c;
  DWORD DStack_148;
  undefined1 auStack_140 [32];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_110 [256];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009abbe8;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_15c;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffe94;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14c = param_1;
  FUN_006fa180(uVar5);
  in_ECX[0x5e] = 0;
  FUN_00430970(param_1,0,param_2,0);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a35d74;
  FUN_00401000();
  local_4._0_1_ = 1;
  in_ECX[99] = 0xffffffff;
  in_ECX[100] = 0xffffffff;
  in_ECX[0x5e] = 0;
  in_ECX[0x66] = 0;
  in_ECX[0x67] = 0;
  in_ECX[0x68] = 0;
  in_ECX[0x69] = 0;
  *(undefined1 *)(in_ECX + 0x65) = 0;
  in_ECX[0x6a] = 0;
  in_ECX[0x62] = 0;
  *(undefined1 *)(in_ECX + 0x6b) = 0;
  if (*(char *)(in_ECX + 9) != '\0') {
    if (param_3 != '\0') {
      *(undefined1 *)(in_ECX + 0x65) = 8;
    }
    FUN_004307f0();
    local_154 = 1;
    (*(code *)in_ECX[1])();
    if ((in_ECX[0x55] == 0x415342) && ((uint)in_ECX[0x56] < 0x68)) {
      if ((*(byte *)(in_ECX + 0x65) & 8) == 0) {
        DStack_148 = GetTickCount();
        FUN_00404ee0("Loading archive %s");
        uVar5 = in_ECX[0x59];
        lVar2 = (ulonglong)uVar5 * 0x10;
        pvVar6 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
        local_4._0_1_ = 2;
        pvStack_150 = pvVar6;
        if (pvVar6 == (void *)0x0) {
          pvVar6 = (void *)0x0;
        }
        else {
          _vector_constructor_iterator_(pvVar6,0x10,uVar5,FUN_0042bd20);
        }
        local_4._0_1_ = 1;
        in_ECX[0x5e] = pvVar6;
        FUN_0042c8e0(pvVar6,in_ECX[0x59] << 4);
        if (((*(byte *)(in_ECX + 0x58) & 1) != 0) && (cVar4 = FUN_0042bd70(), cVar4 != '\0')) {
          *(byte *)(in_ECX + 0x65) = *(byte *)(in_ECX + 0x65) | 0x10;
          uVar7 = FUN_00401f00();
          in_ECX[0x66] = uVar7;
          uVar7 = FUN_00401f00(-(uint)((int)((ulonglong)(uint)in_ECX[0x59] * 4 >> 0x20) != 0) |
                               (uint)((ulonglong)(uint)in_ECX[0x59] * 4));
          in_ECX[0x67] = uVar7;
        }
        if ((((uint)in_ECX[0x58] >> 1 & 1) != 0) && (cVar4 = FUN_0042bd70(), cVar4 != '\0')) {
          *(byte *)(in_ECX + 0x65) = *(byte *)(in_ECX + 0x65) | 0x20;
          uVar7 = FUN_00401f00();
          in_ECX[0x68] = uVar7;
          uVar7 = FUN_00401f00(-(uint)((int)((ulonglong)(uint)in_ECX[0x59] * 4 >> 0x20) != 0) |
                               (uint)((ulonglong)(uint)in_ECX[0x59] * 4));
          in_ECX[0x69] = uVar7;
        }
        local_154 = 0;
        uStack_158 = 0;
        if (in_ECX[0x59] != 0) {
          iVar11 = 0;
          do {
            uVar5 = local_154;
            if ((*(byte *)(in_ECX + 0x58) & 1) != 0) {
              pvStack_150 = (void *)0x1;
              (*(code *)in_ECX[1])();
              cVar4 = FUN_0042bd70();
              if (cVar4 == '\0') {
                FUN_0042c8e0(auStack_110,bStack_159);
              }
              else {
                FUN_0042c8e0(in_ECX[0x66] + uVar5,bStack_159);
                *(uint *)(in_ECX[0x67] + uStack_158 * 4) = uVar5;
                local_154 = uVar5 + bStack_159;
              }
            }
            iVar13 = *(int *)(in_ECX[0x5e] + 8 + iVar11);
            pvVar6 = (void *)FUN_00401f00();
            local_4._0_1_ = 3;
            if (pvVar6 == (void *)0x0) {
              pvVar6 = (void *)0x0;
            }
            else {
              pvStack_150 = pvVar6;
              _vector_constructor_iterator_(pvVar6,0x10,iVar13,FUN_0042bd20);
            }
            local_4._0_1_ = 1;
            pvStack_150 = (void *)0x1;
            (*(code *)in_ECX[1])();
            *(void **)(in_ECX[0x5e] + 0xc + iVar11) = pvVar6;
            uStack_158 = uStack_158 + 1;
            iVar11 = iVar11 + 0x10;
            param_1 = local_14c;
          } while (uStack_158 < (uint)in_ECX[0x59]);
        }
        pcVar12 = (char *)0x0;
        if (((uint)in_ECX[0x58] >> 1 & 1) != 0) {
          iVar11 = in_ECX[0xc];
          if (iVar11 == -1) {
            iVar11 = in_ECX[0x52];
          }
          in_ECX[0x62] = iVar11;
          cVar4 = FUN_0042bd70();
          if (cVar4 != '\0') {
            FUN_0042c8e0(in_ECX[0x68],in_ECX[0x5c]);
            uStack_158 = 0;
            param_1 = local_14c;
            if (in_ECX[0x59] != 0) {
              iVar11 = 0;
              do {
                uVar5 = uStack_158;
                uVar7 = FUN_00401f00();
                *(undefined4 *)(in_ECX[0x69] + uVar5 * 4) = uVar7;
                uVar10 = 0;
                if (*(int *)(in_ECX[0x5e] + 8 + iVar11) != 0) {
                  do {
                    *(char **)(*(int *)(in_ECX[0x69] + uVar5 * 4) + uVar10 * 4) = pcVar12;
                    pcVar8 = pcVar12 + in_ECX[0x68];
                    pcVar1 = pcVar8 + 1;
                    do {
                      cVar4 = *pcVar8;
                      pcVar8 = pcVar8 + 1;
                    } while (cVar4 != '\0');
                    pcVar12 = pcVar8 + (int)(pcVar12 + (1 - (int)pcVar1));
                    uVar10 = uVar10 + 1;
                    uVar5 = uStack_158;
                  } while (uVar10 < *(uint *)(in_ECX[0x5e] + 8 + iVar11));
                }
                uStack_158 = uVar5 + 1;
                iVar11 = iVar11 + 0x10;
                param_1 = local_14c;
              } while (uStack_158 < (uint)in_ECX[0x59]);
            }
          }
        }
        DVar9 = GetTickCount();
        DStack_148 = DVar9 - DStack_148;
        fVar3 = (float)(int)DStack_148;
        if ((int)DStack_148 < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        FUN_00404ee0("Finished loading archive %s containing %i directories and %i files in %f seconds"
                     ,param_1,in_ECX[0x59],in_ECX[0x5a],(double)(fVar3 / 1000.0));
      }
      iVar11 = __stat64i32(in_ECX + 0xf,auStack_140);
      if (iVar11 == -1) {
        FUN_004a7a60("Could not find Archive %s to get filetime.",in_ECX + 0xf);
      }
      in_ECX[0x60] = uStack_120;
      in_ECX[0x61] = uStack_11c;
      if ((*(byte *)(in_ECX + 0x65) & 8) == 0) {
        if (DAT_00b04460 != '\0') {
          DVar9 = GetTickCount();
          FUN_00404ee0("Invalidating files in archive %s",param_1);
          uVar7 = FUN_0042e2d0();
          DStack_148 = GetTickCount();
          DStack_148 = DStack_148 - DVar9;
          fVar3 = (float)(int)DStack_148;
          if ((int)DStack_148 < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
          }
          FUN_00404ee0("Finished invalidating %i files in archive %s in %f seconds",uVar7,param_1,
                       (double)(fVar3 / 1000.0));
        }
        if ((param_4 != '\0') && (local_154 = 0, in_ECX[0x59] != 0)) {
          do {
            uVar5 = 0;
            if (in_ECX[0x59] != 0) {
              iVar11 = local_154 * 0x10;
              iVar13 = 0;
              do {
                FUN_0042edf0(in_ECX[0x5e] + iVar11,*(int *)(in_ECX[0x5e] + 0xc + iVar11) + iVar13,
                             *(undefined2 *)(in_ECX + 0x5d));
                uVar5 = uVar5 + 1;
                iVar13 = iVar13 + 0x10;
              } while (uVar5 < (uint)in_ECX[0x59]);
            }
            local_154 = local_154 + 1;
          } while (local_154 < (uint)in_ECX[0x59]);
        }
      }
      FUN_004303f0();
    }
    else {
      *(byte *)(in_ECX + 0x65) = *(byte *)(in_ECX + 0x65) | 1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_0042f4c0(undefined4 param_1,short param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_118;
  undefined1 local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009abc2e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&iStack_118;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffee4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((DAT_00b04428 != '\0') && (DAT_00b33a04 != (int *)0x0)) {
    iVar2 = (**(code **)(*DAT_00b33a04 + 4))(param_1,local_114,1,0xffffffff,uVar1);
    if (iVar2 != 0) {
      iStack_118 = FUN_00401f00(0x280);
      uStack_4 = 0;
      if (iStack_118 == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)FUN_0042ee80(local_114,0x40000,0,param_3);
      }
      uStack_4 = 0xffffffff;
      if (puVar3 != (undefined4 *)0x0) {
        if ((*(char *)(puVar3 + 9) != '\0') && ((*(byte *)(puVar3 + 0x65) & 1) == 0)) {
          if (DAT_00b338e0 == (undefined4 *)0x0) {
            DAT_00b338e0 = (undefined4 *)FUN_00401f00(8);
            if (DAT_00b338e0 == (undefined4 *)0x0) {
              DAT_00b338e0 = (undefined4 *)0x0;
            }
            else {
              *DAT_00b338e0 = 0;
              DAT_00b338e0[1] = 0;
            }
          }
          FUN_0067b1e0(puVar3);
          if (param_2 != 0) {
            *(short *)(puVar3 + 0x5d) = param_2;
          }
          goto LAB_0042f5eb;
        }
        (**(code **)*puVar3)(1);
      }
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_0042f5eb:
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_0042fa10(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  if ((*(char *)(in_ECX + 4) == '\0') && (*(int *)(in_ECX + 0xc) != 0)) {
    *(undefined1 *)(in_ECX + 4) = 1;
    FUN_0047cfd0();
    FUN_0068f970(param_2);
    FUN_0047cfa0(param_1);
    FUN_0047cf50();
  }
  return;
}



void FUN_0042fa50(undefined4 param_1,undefined4 param_2,LONG param_3,undefined4 param_4,LONG param_5
                 )

{
  HANDLE pvVar1;
  undefined4 *in_ECX;
  
  FUN_0047cea0();
  in_ECX[7] = param_1;
  *in_ECX = &PTR_FUN_00a3631c;
  in_ECX[8] = param_2;
  in_ECX[9] = param_3;
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,in_ECX[8],param_3,(LPCSTR)0x0);
  in_ECX[10] = pvVar1;
  in_ECX[0xb] = param_4;
  in_ECX[0xc] = param_5;
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,in_ECX[0xb],param_5,(LPCSTR)0x0);
  in_ECX[0xd] = pvVar1;
  in_ECX[0xe] = 1;
  in_ECX[0xf] = 1;
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,in_ECX[0xe],1,(LPCSTR)0x0);
  in_ECX[0x10] = pvVar1;
  return;
}



void FUN_0042fb60(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a36328;
  *(undefined1 *)(in_ECX + 1) = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  if (param_1 != '\0') {
    iVar2 = FUN_00401f00(0x44,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0042fa50(in_ECX,param_2,param_3,param_4,param_5);
    }
    in_ECX[3] = uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0042fbf0(void)

{
  int iVar1;
  DWORD DVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xc);
  if (iVar1 != 0) {
    DVar2 = WaitForSingleObject(*(HANDLE *)(iVar1 + 0x34),0xffffffff);
    if (DVar2 != 0x102) {
      InterlockedDecrement((LONG *)(iVar1 + 0x2c));
    }
  }
  return;
}



int FUN_0042fc20(char param_1)

{
  int *in_ECX;
  
  if (in_ECX == (int *)0x0) {
    return 0;
  }
  if (in_ECX[3] != 0) {
    if (param_1 != '\0') {
      FUN_00401020(&DAT_00a2f830);
    }
    if (((in_ECX[2] == 1) || (in_ECX[2] == 2)) && (0 < *(int *)(in_ECX[3] + 0x2c))) {
      FUN_0042fbf0();
      (**(code **)(*in_ECX + 8))();
      in_ECX[2] = 0;
    }
    if (param_1 != '\0') {
      FUN_00401040();
    }
  }
  return in_ECX[2];
}



void FUN_0042fc90(char param_1)

{
  int iVar1;
  DWORD DVar2;
  int *in_ECX;
  
  if ((in_ECX != (int *)0x0) && (in_ECX[3] != 0)) {
    if (param_1 != '\0') {
      FUN_00401020(&DAT_00a2f830);
    }
    if ((in_ECX[2] == 1) || (in_ECX[2] == 2)) {
      iVar1 = in_ECX[3];
      if (iVar1 != 0) {
        DVar2 = WaitForSingleObject(*(HANDLE *)(iVar1 + 0x34),0xffffffff);
        if (DVar2 != 0x102) {
          InterlockedDecrement((LONG *)(iVar1 + 0x2c));
        }
      }
      (**(code **)(*in_ECX + 8))();
      in_ECX[2] = 0;
    }
    if (param_1 != '\0') {
      FUN_00401040();
    }
  }
  return;
}



void FUN_0042fd10(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) == 0) {
    *(undefined4 *)(in_ECX + 8) = 1;
  }
  iVar1 = *(int *)(in_ECX + 0xc);
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 0x20));
    ReleaseSemaphore(*(HANDLE *)(iVar1 + 0x28),1,(LPLONG)0x0);
  }
  return;
}



void FUN_0042fd50(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3631c;
  in_ECX[7] = 0;
  CloseHandle((HANDLE)in_ECX[0x10]);
  CloseHandle((HANDLE)in_ECX[0xd]);
  CloseHandle((HANDLE)in_ECX[10]);
  FUN_0047d0b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0042fda0(void)

{
  int iVar1;
  code *pcVar2;
  DWORD DVar3;
  int *in_ECX;
  
  *in_ECX = (int)&PTR_FUN_00a36328;
  if (in_ECX[3] != 0) {
    FUN_00401020(&DAT_00a2f830);
  }
  if (in_ECX[2] == 1) {
    in_ECX[2] = 2;
  }
  if (in_ECX[3] != 0) {
    FUN_00401040();
  }
  if (in_ECX[3] != 0) {
    FUN_00401020(&DAT_00a2f830);
    if ((in_ECX[2] == 1) || (in_ECX[2] == 2)) {
      iVar1 = in_ECX[3];
      if (iVar1 != 0) {
        DVar3 = WaitForSingleObject(*(HANDLE *)(iVar1 + 0x34),0xffffffff);
        if (DVar3 != 0x102) {
          InterlockedDecrement((LONG *)(iVar1 + 0x2c));
        }
      }
      (**(code **)(*in_ECX + 8))();
      pcVar2 = *(code **)(*in_ECX + 0xc);
      in_ECX[2] = 0;
      (*pcVar2)();
    }
    FUN_00401040();
  }
  if ((undefined4 *)in_ECX[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[3])(1);
    in_ECX[3] = 0;
  }
  return;
}



void FUN_0042fe60(byte param_1)

{
  FUN_0042fda0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined1 FUN_0042fe80(undefined4 param_1,char param_2)

{
  int *_Filename;
  FILE *pFVar1;
  char *_Mode;
  int iVar2;
  int iVar3;
  int *in_ECX;
  char *_Mode_00;
  
  if (in_ECX[7] != 0) {
    return 1;
  }
  in_ECX[5] = 0;
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  if (in_ECX[8] == 0) {
    if (param_2 == '\0') {
      _Mode_00 = "rb";
    }
    else {
      _Mode_00 = "rt";
    }
  }
  else {
    _Mode_00 = "r+t";
    if (param_2 == '\0') {
      _Mode_00 = "r+b";
    }
  }
  _Filename = in_ECX + 0xf;
  pFVar1 = _fopen((char *)_Filename,_Mode_00);
  in_ECX[7] = (int)pFVar1;
  if ((pFVar1 == (FILE *)0x0) && (in_ECX[8] == 1)) {
    _Mode = "wt";
    if (param_2 == '\0') {
      _Mode = "wb";
    }
    pFVar1 = _fopen((char *)_Filename,_Mode);
    in_ECX[7] = (int)pFVar1;
    if (pFVar1 != (FILE *)0x0) {
      _fclose(pFVar1);
    }
    pFVar1 = _fopen((char *)_Filename,_Mode_00);
    in_ECX[7] = (int)pFVar1;
  }
  if (in_ECX[7] != 0) {
    iVar3 = in_ECX[3];
    *(undefined1 *)(in_ECX + 9) = 1;
    if ((iVar3 == 0) || (in_ECX[6] != 0)) goto LAB_0042ff74;
    if (iVar3 == -1) {
      iVar2 = (**(code **)(*in_ECX + 0x10))();
      in_ECX[3] = iVar2;
    }
    iVar2 = FUN_00401f00(in_ECX[3]);
    in_ECX[6] = iVar2;
    if (iVar3 != -1) goto LAB_0042ff74;
    in_ECX[4] = in_ECX[3];
    in_ECX[5] = 0;
    iVar3 = FUN_00747d10(iVar2,in_ECX[3]);
    if (iVar3 == in_ECX[3]) goto LAB_0042ff74;
  }
  *(undefined1 *)(in_ECX + 9) = 0;
LAB_0042ff74:
  return (char)in_ECX[9];
}



void FUN_0042ff80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = param_1;
  if (param_2 == 0) {
    if (in_ECX[8] == 0) {
      param_2 = 1;
      iVar2 = param_1 - in_ECX[0x52];
    }
  }
  else if (param_2 == 1) {
    param_1 = in_ECX[0x52] + param_1;
  }
  else if (param_2 == 2) {
    iVar1 = (**(code **)(*in_ECX + 0x1c))();
    param_1 = iVar1 - param_1;
  }
  else {
    param_1 = in_ECX[0x52];
  }
  if (param_1 != in_ECX[0x52]) {
    FUN_00747e20(iVar2,param_2);
    in_ECX[0x52] = param_1;
  }
  return;
}


