
void FUN_006e0470(byte param_1)

{
  FUN_00715a70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_006e0490(undefined4 param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar3 = (undefined4 *)FUN_00401f00(0x44,uVar2);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00715990();
    *puVar3 = &PTR_FUN_00a7b194;
    puVar3[0x10] = 0;
    *(undefined2 *)(puVar3 + 0xf) = 0;
    *(undefined1 *)(puVar3 + 0xb) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00715d80(puVar3,param_1);
  uVar1 = *(ushort *)(in_ECX + 0x3c);
  *(ushort *)(puVar3 + 0xf) = uVar1;
  if ((*(byte *)(in_ECX + 0x3c) & 1) == 0) {
    uVar1 = uVar1 & 0xfffe;
  }
  else {
    uVar1 = uVar1 | 1;
  }
  *(ushort *)(puVar3 + 0xf) = uVar1;
  *(ushort *)(puVar3 + 0xf) =
       *(ushort *)(puVar3 + 0xf) ^ (byte)(*(byte *)(in_ECX + 0x3c) ^ (byte)uVar1) & 6;
  puVar3[0x10] = *(undefined4 *)(in_ECX + 0x40);
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



undefined4 * FUN_006e05b0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x44,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00715990();
    *puVar2 = &PTR_FUN_00a7b194;
    puVar2[0x10] = 0;
    *(undefined2 *)(puVar2 + 0xf) = 0;
    *(undefined1 *)(puVar2 + 0xb) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006e0630(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00715f40(param_1);
  if (*(uint *)(iVar1 + 0xd8) < 0xa000102) {
    *(ushort *)(in_ECX + 0x3c) = *(ushort *)(iVar1 + 0x25a) >> 5 & 0xff;
    FUN_00712a20();
    return;
  }
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x3c,2,&param_1,1);
  FUN_00712a20();
  return;
}



void FUN_006e06f0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00716140(param_1);
  param_1 = FUN_0070f910(DAT_00b3df34);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006e07a0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined4 *puVar3;
  
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    cVar1 = FUN_006c36b0(param_1);
    if (cVar1 != '\0') {
      if (*(int **)(in_ECX + 0x3c) == (int *)0x0) {
        return;
      }
      cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x94))();
      if (cVar1 == '\0') {
        return;
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x28) = 0xff7fffff;
  }
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    puVar3 = &param_1;
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x5c))
                      (*(undefined4 *)(in_ECX + 0x28),*(undefined4 *)(in_ECX + 0x30));
    if ((cVar1 != '\0') && (*(int *)(in_ECX + 0x30) != 0)) {
      iVar2 = FUN_00560920(&DAT_00b3fd14,*(int *)(in_ECX + 0x30));
      *(undefined4 **)(iVar2 + 0xdc) = puVar3;
      *(int *)(iVar2 + 0xb8) = *(int *)(iVar2 + 0xb8) + 1;
    }
  }
  return;
}



void FUN_006e0840(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7b20c;
  FUN_006c3a40();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_006e0870(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ec180();
    *puVar2 = &PTR_FUN_00a7b20c;
  }
  local_4 = 0xffffffff;
  thunk_FUN_006ce2c0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_006e08f0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ec180();
    *puVar2 = &PTR_FUN_00a7b20c;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_006e0950(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ec1d0(param_1);
  param_1 = FUN_0070f910(DAT_00b3dfa4);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006e0a80(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  float fStack_24;
  undefined1 *local_20;
  float fStack_18;
  float fStack_14;
  undefined1 local_c [12];
  
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    local_20 = (undefined1 *)param_1;
    fStack_24 = 1.0105727e-38;
    cVar1 = FUN_006c36b0();
    if (cVar1 != '\0') {
      if (*(int **)(in_ECX + 0x3c) == (int *)0x0) {
        return;
      }
      local_20 = (undefined1 *)0x6e0ac1;
      cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x94))();
      if (cVar1 == '\0') {
        return;
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x28) = 0xff7fffff;
  }
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    local_20 = local_c;
    fStack_24 = *(float *)(in_ECX + 0x30);
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x54))(*(undefined4 *)(in_ECX + 0x28));
    if (cVar1 != '\0') {
      fStack_24 = fStack_18;
      local_20 = (undefined1 *)fStack_14;
      if (0.0 <= fStack_18) {
        if (1.0 < fStack_18) {
          fStack_24 = 1.0;
        }
      }
      else {
        fStack_24 = 0.0;
      }
      if (0.0 <= fStack_14) {
        if (1.0 < fStack_14) {
          local_20 = (undefined1 *)0x3f800000;
        }
      }
      else {
        local_20 = (undefined1 *)0x0;
      }
      if (*(int *)(in_ECX + 0x30) != 0) {
        FUN_00560920(&DAT_00b3fd14,*(int *)(in_ECX + 0x30));
        if ((*(byte *)(in_ECX + 0x40) & 1) != 0) {
          FUN_004820f0(&fStack_24);
          FUN_00482120(&DAT_00b3fa90);
          FUN_004b0bc0(&DAT_00b3fa90);
          return;
        }
        FUN_004820f0(&DAT_00b3fa90);
        FUN_00482120(&fStack_24);
        FUN_004b0bc0(&fStack_24);
      }
    }
  }
  return;
}



void FUN_006e0c00(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7fd3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  thunk_FUN_00715e70(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0xa010068) {
    puVar2 = (undefined4 *)FUN_007124a0(uVar1);
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
    local_4 = 0;
    iVar3 = FUN_00401f00(0x20);
    local_4._0_1_ = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_006da160(puVar2);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0075fa90(uVar4);
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x7c))();
    local_4 = 0xffffffff;
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if (LVar5 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006e0cf0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  thunk_FUN_006ce320(param_1);
  if (*(uint *)(iVar1 + 0xd8) < 0xa000102) {
    *(ushort *)(in_ECX + 0x40) = *(ushort *)(iVar1 + 0x25a) >> 5 & 0x3f;
  }
  else {
    param_1 = 2;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x40,2,&param_1,1);
  }
  if (*(uint *)(iVar1 + 0xd8) < 0xa010068) {
    FUN_00712a20();
  }
  return;
}



void FUN_006e0d60(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7b2cc;
  FUN_006c3a40();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_006e0d90(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x44,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ecc00();
    *puVar2 = &PTR_FUN_00a7b2cc;
    *(undefined2 *)(puVar2 + 0x10) = 0;
  }
  local_4 = 0xffffffff;
  thunk_FUN_006ce2c0(puVar2,param_1);
  *(undefined2 *)(puVar2 + 0x10) = *(undefined2 *)(in_ECX + 0x40);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_006e0e20(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x44,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ecc00();
    *puVar2 = &PTR_FUN_00a7b2cc;
    *(undefined2 *)(puVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006e0ea0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ecc30(param_1);
  param_1 = FUN_0070f910(DAT_00b3e00c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006e0ef0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_c [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_c;
  *in_ECX = &PTR__scalar_deleting_destructor__00a44f6c;
  *(undefined2 *)(in_ECX + 2) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 1;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  in_ECX[1] = 0;
  in_ECX[4] = &PTR__scalar_deleting_destructor__00a38fb4;
  *(undefined2 *)(in_ECX + 6) = 0;
  *(undefined2 *)((int)in_ECX + 0x1e) = 1;
  *(undefined2 *)((int)in_ECX + 0x1a) = 0;
  *(undefined2 *)(in_ECX + 7) = 0;
  in_ECX[5] = 0;
  in_ECX[8] = &PTR__scalar_deleting_destructor__00a44f6c;
  *(undefined2 *)(in_ECX + 10) = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 1;
  *(undefined2 *)((int)in_ECX + 0x2a) = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  in_ECX[9] = 0;
  in_ECX[0xc] = &PTR__scalar_deleting_destructor__00a38fb4;
  *(undefined2 *)(in_ECX + 0xe) = 0;
  *(undefined2 *)((int)in_ECX + 0x3e) = 1;
  *(undefined2 *)((int)in_ECX + 0x3a) = 0;
  *(undefined2 *)(in_ECX + 0xf) = 0;
  in_ECX[0xd] = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_006e0fa0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7b37c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_006e0fc0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7b37c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006e0ff0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8038;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7b39c;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a7b37c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006e1060(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a7b3bc;
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
  FUN_006e0ff0();
  return;
}



void FUN_006e10b0(int param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  char *_Dst;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8068;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (*(char *)(in_ECX + 0x10) == '\0') {
    *(char **)(param_1 + 4) = param_2;
  }
  else {
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    _Dst = (char *)FUN_00401f00(pcVar4 + (1 - (int)(param_2 + 1)),uVar3);
    *(char **)(param_1 + 4) = _Dst;
    _strcpy_s(_Dst,(rsize_t)(pcVar4 + (1 - (int)(param_2 + 1))),param_2);
  }
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != param_3) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(param_1 + 8) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  local_4 = 0xffffffff;
  if (param_3 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(param_3 + 1);
    if (LVar5 == 0) {
      (**(code **)*param_3)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006e11a0(byte param_1)

{
  FUN_006e0ff0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006e11c0(byte param_1)

{
  FUN_006e1060();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_006e11e0(undefined4 param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c80f8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006d8b50(&param_2,param_1,param_3);
  local_4 = 0;
  if (param_2 == (undefined4 *)0x0) {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006d7e10();
  }
  uVar1 = param_2[2];
  param_3 = &stack0xffffffe4;
  puVar3 = &stack0xffffffe4;
  if (param_2 != (undefined4 *)0x0) {
    InterlockedIncrement(param_2 + 1);
    puVar3 = param_3;
  }
  param_3 = puVar3;
  FUN_007c2ff0(uVar1);
  puVar2 = param_2;
  local_4 = 0xffffffff;
  if (param_2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(param_2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_006e12c0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  char cStack_41;
  int iStack_40;
  int local_3c;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  undefined4 uStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar3 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c809b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffac;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00715f40(param_1);
  iVar2 = *(int *)(iVar3 + 0x21c);
  param_1 = 4;
  if (*(uint *)(iVar3 + 0xd8) < 0x4010003) {
    (**(code **)(iVar2 + 4))(iVar2,&local_30,4,&param_1,1);
    while (local_30 != 0) {
      local_30 = local_30 + -1;
      iStack_34 = 1;
      (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),&param_1,1,&iStack_34,1);
      uStack_38 = 0;
      FUN_00713620(&uStack_38);
      if ((char)param_1 == '\0') {
        iStack_10 = FUN_00401f00(0x40);
        uStack_4 = 0;
        if (iStack_10 == 0) {
          DAT_00b3e040 = 0;
        }
        else {
          DAT_00b3e040 = FUN_006e0ef0();
        }
        uVar4 = (uint)*(ushort *)(DAT_00b3e040 + 0x1a);
        uStack_4 = 0xffffffff;
        if (*(ushort *)(DAT_00b3e040 + 0x18) <= uVar4) {
          FUN_004e4a10(*(ushort *)(DAT_00b3e040 + 0x1e) + uVar4);
        }
        FUN_0042bb90(uVar4,&uStack_38);
        uStack_24 = 4;
        (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
                  (*(int *)(iVar3 + 0x21c),auStack_1c,4,&uStack_24,1);
        uVar4 = (uint)*(ushort *)(DAT_00b3e040 + 10);
        if (*(ushort *)(DAT_00b3e040 + 8) <= uVar4) {
          FUN_004e4a10(*(ushort *)(DAT_00b3e040 + 0xe) + uVar4);
        }
        FUN_0042bb90(uVar4,auStack_1c);
        FUN_00712a20();
        uStack_24 = 4;
        (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
                  (*(int *)(iVar3 + 0x21c),&iStack_40,4,&uStack_24,1);
        uVar4 = (uint)*(ushort *)(DAT_00b3e040 + 0x2a);
        if (*(ushort *)(DAT_00b3e040 + 0x28) <= uVar4) {
          FUN_004e4a10(*(ushort *)(DAT_00b3e040 + 0x2e) + uVar4);
        }
        FUN_0042bb90(uVar4,&iStack_40);
        while (iStack_40 != 0) {
          iStack_40 = iStack_40 + -1;
          iStack_34 = 0;
          FUN_00713620(&iStack_34);
          iVar2 = DAT_00b3e040;
          uVar1 = *(ushort *)(DAT_00b3e040 + 0x3a);
          uVar4 = (uint)uVar1;
          if (*(ushort *)(DAT_00b3e040 + 0x38) <= uVar4) {
            FUN_004e4a10(*(ushort *)(DAT_00b3e040 + 0x3e) + uVar4);
          }
          if (uVar4 < *(ushort *)(iVar2 + 0x3a)) {
            if (iStack_34 == 0) {
              if (*(int *)(*(int *)(iVar2 + 0x34) + uVar4 * 4) != 0) {
                *(short *)(iVar2 + 0x3c) = *(short *)(iVar2 + 0x3c) + -1;
              }
            }
            else if (*(int *)(*(int *)(iVar2 + 0x34) + uVar4 * 4) == 0) {
              *(short *)(iVar2 + 0x3c) = *(short *)(iVar2 + 0x3c) + 1;
            }
          }
          else {
            *(ushort *)(iVar2 + 0x3a) = uVar1 + 1;
            if (iStack_34 != 0) {
              *(short *)(iVar2 + 0x3c) = *(short *)(iVar2 + 0x3c) + 1;
            }
          }
          *(int *)(*(int *)(iVar2 + 0x34) + uVar4 * 4) = iStack_34;
          FUN_00712a20();
        }
        iStack_40 = -1;
      }
      else {
        iStack_34 = 0;
        FUN_00713620(&iStack_34);
        uStack_24 = 4;
        (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
                  (*(int *)(iVar3 + 0x21c),&uStack_20,4,&uStack_24,1);
        FUN_006e11e0(iStack_34,uStack_38,uStack_20);
        FUN_00401f20(iStack_34);
        FUN_00401f20(uStack_38);
      }
    }
  }
  else {
    iVar5 = 0;
    (**(code **)(iVar2 + 4))(iVar2,&local_3c,4,&param_1,1,uVar4);
    while (local_3c != 0) {
      local_3c = local_3c + -1;
      param_1 = 1;
      (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),&cStack_41,1,&param_1,1);
      if (cStack_41 == '\0') {
        FUN_00712a20();
        iVar5 = iVar5 + 1;
      }
      else {
        uStack_2c = 0;
        FUN_00713620(&uStack_2c);
        uStack_28 = 0;
        FUN_00713620(&uStack_28);
        uStack_14 = 4;
        (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
                  (*(int *)(iVar3 + 0x21c),&iStack_10,4,&uStack_14,1);
        FUN_006e11e0(uStack_28,uStack_2c,iStack_10);
        FUN_00401f20(uStack_2c);
        FUN_00401f20(uStack_28);
      }
    }
    local_3c = -1;
    FUN_00712bc0(iVar5);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006e16a0(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  LONG LVar6;
  uint uVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_1c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c33eb;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00715e70();
  if (*(uint *)(param_1 + 0xd8) < 0x4010003) {
    uVar1 = *(ushort *)((int)DAT_00b3e040 + 0x2a);
    uVar7 = 0;
    local_1c = 0;
    if (uVar1 != 0) {
      do {
        uVar2 = *(undefined4 *)(DAT_00b3e040[5] + uVar7 * 4);
        iVar4 = FUN_00401f00();
        iVar8 = 0;
        local_4 = 0;
        if (iVar4 != 0) {
          iVar8 = FUN_006d80c0(uVar2,0xc);
        }
        local_4 = 0xffffffff;
        FUN_00401f20();
        *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(DAT_00b3e040[1] + uVar7 * 4);
        puVar5 = (undefined4 *)FUN_007124a0();
        puVar3 = *(undefined4 **)(iVar8 + 0x2c);
        if (puVar3 != puVar5) {
          if (((puVar3 != (undefined4 *)0x0) &&
              (LVar6 = InterlockedDecrement(puVar3 + 1), LVar6 == 0)) &&
             (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)();
          }
          *(undefined4 **)(iVar8 + 0x2c) = puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar5 + 1);
          }
        }
        for (iVar4 = *(int *)(DAT_00b3e040[9] + uVar7 * 4); iVar4 != 0; iVar4 = iVar4 + -1) {
          uVar2 = *(undefined4 *)(DAT_00b3e040[0xd] + local_1c * 4);
          local_1c = local_1c + 1;
          FUN_007124a0();
          FUN_006d83a0(uVar2);
          FUN_00401f20();
        }
        uVar2 = *(undefined4 *)(iVar8 + 8);
        InterlockedIncrement((LONG *)(iVar8 + 4));
        FUN_007c2ff0(uVar2);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
    puVar3 = DAT_00b3e040;
    if (DAT_00b3e040 != (undefined4 *)0x0) {
      DAT_00b3e040[0xc] = &PTR__scalar_deleting_destructor__00a38fb4;
      FUN_00401f20();
      puVar3[8] = &PTR__scalar_deleting_destructor__00a44f6c;
      FUN_00401f20(puVar3[9]);
      puVar3[4] = &PTR__scalar_deleting_destructor__00a38fb4;
      FUN_00401f20(puVar3[5]);
      *puVar3 = &PTR__scalar_deleting_destructor__00a44f6c;
      FUN_00401f20(puVar3[1]);
      FUN_00401f20(puVar3);
    }
    DAT_00b3e040 = (undefined4 *)0x0;
  }
  else {
    for (iVar4 = FUN_007124d0(); iVar4 != 0; iVar4 = iVar4 + -1) {
      iVar8 = FUN_007124a0();
      uVar2 = *(undefined4 *)(iVar8 + 8);
      InterlockedIncrement((LONG *)(iVar8 + 4));
      FUN_007c2ff0(uVar2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006e18d0(void)

{
  uint uVar1;
  void *_Dst;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c80c8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00715990(uVar1);
  *in_ECX = &PTR_FUN_00a7b3fc;
  in_ECX[0x10] = 0x25;
  local_4 = 0;
  in_ECX[0xf] = &PTR_FUN_00a7b37c;
  in_ECX[0x12] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[0x11] = _Dst;
  _memset(_Dst,0,in_ECX[0x10] * 4);
  *(undefined1 *)(in_ECX + 0x13) = 0;
  in_ECX[0xf] = &PTR_FUN_00a7b3dc;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006e1980(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c80c8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_006e1060(uVar1);
  local_4 = 0xffffffff;
  FUN_00715a70();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006e19e0(byte param_1)

{
  FUN_006e1980();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
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
  local_10 = FUN_00401f00(0x50,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006e18d0();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006e1a80(int param_1,int param_2,int param_3)

{
  int in_ECX;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    *(short *)(in_ECX + 10) = (short)param_2;
    *(int *)(in_ECX + 0x24) = param_1;
    *(int *)(in_ECX + 0x14) = param_3;
    *(undefined *)(in_ECX + 0x1d) = (&DAT_00b3d3ee)[param_3];
    return;
  }
  *(undefined2 *)(in_ECX + 10) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined1 *)(in_ECX + 0x1d) = 0;
  return;
}



void FUN_006e1ac0(int param_1,int param_2,int param_3)

{
  int in_ECX;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    *(short *)(in_ECX + 0xc) = (short)param_2;
    *(int *)(in_ECX + 0x28) = param_1;
    *(int *)(in_ECX + 0x18) = param_3;
    *(undefined *)(in_ECX + 0x1e) = (&DAT_00b3d3e8)[param_3];
    return;
  }
  *(undefined2 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  return;
}



void FUN_006e1b00(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  uint local_8;
  undefined4 local_4;
  
  if (*(ushort *)(in_ECX + 8) != 0) {
    local_4 = *(undefined4 *)(in_ECX + 0x20);
    local_8 = (uint)*(ushort *)(in_ECX + 8);
    FUN_006d3540(2,*(undefined4 *)(in_ECX + 0x10),&local_4,&local_8,param_1,param_2);
    *(undefined2 *)(in_ECX + 8) = (undefined2)local_8;
    *(undefined4 *)(in_ECX + 0x20) = local_4;
  }
  if (*(ushort *)(in_ECX + 10) != 0) {
    local_4 = *(undefined4 *)(in_ECX + 0x24);
    local_8 = (uint)*(ushort *)(in_ECX + 10);
    FUN_006d3540(1,*(undefined4 *)(in_ECX + 0x14),&local_4,&local_8,param_1,param_2);
    *(undefined2 *)(in_ECX + 10) = (undefined2)local_8;
    *(undefined4 *)(in_ECX + 0x24) = local_4;
  }
  if (*(ushort *)(in_ECX + 0xc) != 0) {
    local_8 = (uint)*(ushort *)(in_ECX + 0xc);
    local_4 = *(undefined4 *)(in_ECX + 0x28);
    FUN_006d3540(0,*(undefined4 *)(in_ECX + 0x18),&local_4,&local_8,param_1,param_2);
    *(undefined2 *)(in_ECX + 0xc) = (undefined2)local_8;
    *(undefined4 *)(in_ECX + 0x28) = local_4;
  }
  return;
}



undefined4 * FUN_006e1c00(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x2c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a7b474;
    *(undefined2 *)(puVar2 + 2) = 0;
    puVar2[8] = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 7) = 0;
    *(undefined2 *)((int)puVar2 + 10) = 0;
    puVar2[9] = 0;
    puVar2[5] = 0;
    *(undefined1 *)((int)puVar2 + 0x1d) = 0;
    *(undefined2 *)(puVar2 + 3) = 0;
    puVar2[10] = 0;
    puVar2[6] = 0;
    *(undefined1 *)((int)puVar2 + 0x1e) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006e1de0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca4b8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7b474;
  iVar1 = in_ECX[8];
  local_4 = 0;
  if (iVar1 != 0) {
    if (in_ECX[4] == 4) {
      FUN_006be490(uVar2);
    }
    (**(code **)(&DAT_00b3d2f8 + in_ECX[4] * 4))(iVar1);
  }
  if (in_ECX[9] != 0) {
    (**(code **)(&DAT_00b3d2e0 + in_ECX[5] * 4))(in_ECX[9]);
  }
  if (in_ECX[10] != 0) {
    (**(code **)(&DAT_00b3d2c8 + in_ECX[6] * 4))(in_ECX[10]);
  }
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006e1e90(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x20);
  if (iVar1 != 0) {
    if (*(int *)(in_ECX + 0x10) == 4) {
      FUN_006be490();
    }
    (**(code **)(&DAT_00b3d2f8 + *(int *)(in_ECX + 0x10) * 4))(iVar1);
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    *(short *)(in_ECX + 8) = (short)param_2;
    *(int *)(in_ECX + 0x20) = param_1;
    *(int *)(in_ECX + 0x10) = param_3;
    *(undefined *)(in_ECX + 0x1c) = (&DAT_00b3d3f4)[param_3];
    return;
  }
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  return;
}



void FUN_006e1f00(int param_1,int param_2,int param_3)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    (**(code **)(&DAT_00b3d2e0 + *(int *)(in_ECX + 0x14) * 4))(*(int *)(in_ECX + 0x24));
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    *(short *)(in_ECX + 10) = (short)param_2;
    *(int *)(in_ECX + 0x24) = param_1;
    *(int *)(in_ECX + 0x14) = param_3;
    *(undefined *)(in_ECX + 0x1d) = (&DAT_00b3d3ee)[param_3];
    return;
  }
  *(undefined2 *)(in_ECX + 10) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined1 *)(in_ECX + 0x1d) = 0;
  return;
}



void FUN_006e1f60(int param_1,int param_2,int param_3)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x28) != 0) {
    (**(code **)(&DAT_00b3d2c8 + *(int *)(in_ECX + 0x18) * 4))(*(int *)(in_ECX + 0x28));
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    *(short *)(in_ECX + 0xc) = (short)param_2;
    *(int *)(in_ECX + 0x28) = param_1;
    *(int *)(in_ECX + 0x18) = param_3;
    *(undefined *)(in_ECX + 0x1e) = (&DAT_00b3d3e8)[param_3];
    return;
  }
  *(undefined2 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  return;
}



int * FUN_006e1fc0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8139;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  local_14 = 0;
  piVar3 = (int *)FUN_00700790(&local_10);
  iVar1 = *piVar3;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  local_4 = 0;
  local_14 = 1;
  if (local_10 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(local_10 + 1);
    if ((LVar4 == 0) && (local_10 != (undefined4 *)0x0)) {
      (**(code **)*local_10)(1,uVar2);
    }
  }
  local_18 = 0;
  local_1c = 0;
  if (*(short *)(in_ECX + 8) != 0) {
    FUN_006d3210(2,*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x20),
                 *(short *)(in_ECX + 8),param_2,param_3,&local_18,&local_1c);
    FUN_006e1e90(local_18,local_1c,*(undefined4 *)(in_ECX + 0x10));
  }
  if (*(short *)(in_ECX + 10) != 0) {
    FUN_006d3210(1,*(undefined4 *)(in_ECX + 0x14),*(undefined4 *)(in_ECX + 0x24),
                 *(short *)(in_ECX + 10),param_2,param_3,&local_18,&local_1c);
    FUN_006e1f00(local_18,local_1c,*(undefined4 *)(in_ECX + 0x14));
  }
  if (*(short *)(in_ECX + 0xc) != 0) {
    FUN_006d3210(0,*(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x28),
                 *(short *)(in_ECX + 0xc),param_2,param_3,&local_18,&local_1c);
    FUN_006e1f60(local_18,local_1c,*(undefined4 *)(in_ECX + 0x18));
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_006e2160(byte param_1)

{
  FUN_006e1de0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006e2180(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_8;
  int iStack_4;
  
  uVar2 = param_1;
  FUN_007008a0(param_1);
  local_8 = 4;
  (**(code **)(*(int *)(uVar2 + 0x21c) + 4))(*(int *)(uVar2 + 0x21c),&param_1,4,&local_8,1);
  if (param_1 != 0) {
    local_8 = 4;
    (**(code **)(*(int *)(uVar2 + 0x21c) + 4))(*(int *)(uVar2 + 0x21c),&iStack_4,4,&local_8,1);
    iVar3 = iStack_4;
    iVar1 = iStack_4 * 4;
    iStack_4 = CONCAT31(iStack_4._1_3_,(&DAT_00b3d3f4)[iStack_4]);
    uVar4 = (**(code **)(&DAT_00b3d0b8 + iVar1))(uVar2,param_1);
    (**(code **)(&DAT_00b3d440 + iVar3 * 4))(uVar4,param_1,iStack_4);
    if (0xffff < param_1) {
      param_1 = 0xffff;
      FUN_0060d0a0("Transform data loading has more than 65535 rotation keys!");
    }
    FUN_006e1e90(uVar4,param_1,iVar3);
  }
  iStack_4 = 4;
  (**(code **)(*(int *)(uVar2 + 0x21c) + 4))(*(int *)(uVar2 + 0x21c),&param_1,4,&iStack_4,1);
  if (param_1 != 0) {
    iStack_4 = 4;
    (**(code **)(*(int *)(uVar2 + 0x21c) + 4))(*(int *)(uVar2 + 0x21c),&local_8,4,&iStack_4,1);
    iVar1 = local_8;
    iStack_4 = CONCAT31(iStack_4._1_3_,(&DAT_00b3d3ee)[local_8]);
    uVar4 = (**(code **)(&DAT_00b3d0a0 + local_8 * 4))(uVar2,param_1);
    (**(code **)(&DAT_00b3d428 + iVar1 * 4))(uVar4,param_1,iStack_4);
    if (0xffff < param_1) {
      param_1 = 0xffff;
      FUN_0060d0a0("Transform data loading has more than 65535 position keys!");
    }
    FUN_006e1f00(uVar4,param_1,iVar1);
  }
  iStack_4 = 4;
  (**(code **)(*(int *)(uVar2 + 0x21c) + 4))(*(int *)(uVar2 + 0x21c),&param_1,4,&iStack_4,1);
  if (param_1 != 0) {
    iStack_4 = 4;
    (**(code **)(*(int *)(uVar2 + 0x21c) + 4))(*(int *)(uVar2 + 0x21c),&local_8,4,&iStack_4,1);
    iVar1 = local_8;
    iStack_4 = CONCAT31(iStack_4._1_3_,(&DAT_00b3d3e8)[local_8]);
    uVar4 = (**(code **)(&DAT_00b3d088 + local_8 * 4))(uVar2,param_1);
    (**(code **)(&DAT_00b3d410 + iVar1 * 4))(uVar4,param_1,iStack_4);
    if (0xffff < param_1) {
      param_1 = 0xffff;
      FUN_0060d0a0("Transform data loading has more than 65535 scale keys!");
    }
    FUN_006e1f60(uVar4,param_1,iVar1);
  }
  return;
}



undefined4
FUN_006e2620(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

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
  local_10 = FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006ea850(param_2,param_4,param_5);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 * FUN_006e26a0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x50,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ecd20();
    *puVar2 = &PTR_FUN_00a7b5ac;
    puVar2[0x12] = 0xffffffff;
    puVar2[0x13] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006e2720(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7b5ac;
  FUN_00401f20(in_ECX[0x13]);
  FUN_006ecd50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_006e2760(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac6db;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  fVar4 = (float10)FUN_007300b0(*(undefined4 *)(in_ECX + 0x48));
  fVar5 = (float10)FUN_007300b0(*(int *)(in_ECX + 0x48) + 1);
  fVar6 = (float10)FUN_007300b0(*(int *)(in_ECX + 0x48) + 2);
  iVar2 = FUN_00401f00(0x20,uVar1);
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_006da240((float)fVar4,(float)fVar5,(float)fVar6);
    *unaff_FS_OFFSET = local_c;
    return uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006e2840(int *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (param_1 != (int *)0x0) {
    for (puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))();
        (puVar1 != (undefined4 *)0x0 && (puVar1 != &DAT_00b3dcf0)); puVar1 = (undefined4 *)puVar1[1]
        ) {
    }
  }
  fVar2 = (float10)FUN_007300b0(*(undefined4 *)(in_ECX + 0x48));
  fVar3 = (float10)FUN_007300b0(*(int *)(in_ECX + 0x48) + 1);
  fVar4 = (float10)FUN_007300b0(*(int *)(in_ECX + 0x48) + 2);
  FUN_006da440((float)fVar2,(float)fVar3,(float)fVar4);
  return;
}



void FUN_006e28e0(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 unaff_ESI;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_c [12];
  
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    cVar1 = FUN_006c36b0(param_1);
    if (cVar1 != '\0') {
      if (*(int **)(in_ECX + 0x3c) == (int *)0x0) {
        return;
      }
      cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x94))();
      if (cVar1 == '\0') {
        return;
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x28) = 0xff7fffff;
  }
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    puVar3 = local_c;
    uVar2 = *(undefined4 *)(in_ECX + 0x30);
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x54))
                      (*(undefined4 *)(in_ECX + 0x28),uVar2,puVar3);
    if ((cVar1 != '\0') && (*(int *)(in_ECX + 0x44) != 0)) {
      FUN_00730090(*(undefined4 *)(in_ECX + 0x48),uVar2);
      FUN_00730090(*(int *)(in_ECX + 0x48) + 1,puVar3);
      FUN_00730090(*(int *)(in_ECX + 0x48) + 2,unaff_ESI);
    }
  }
  return;
}



undefined4 * FUN_006e29a0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x50,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ecd20();
    *puVar2 = &PTR_FUN_00a7b5ac;
    puVar2[0x12] = 0xffffffff;
    puVar2[0x13] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0075e410(puVar2,param_1);
  puVar2[0x12] = *(undefined4 *)(in_ECX + 0x48);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



int FUN_006e2b60(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  
  iVar5 = *(int *)(in_ECX + 0x4c);
  if (iVar5 == 0) {
    FUN_00401f20(0);
    pcVar2 = *(char **)(in_ECX + 0x40);
    *(undefined4 *)(in_ECX + 0x4c) = 0;
    if (pcVar2 != (char *)0x0) {
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar4 = FUN_00401f00(pcVar3 + (0xf - (int)(pcVar2 + 1)));
      *(undefined4 *)(in_ECX + 0x4c) = uVar4;
      FUN_006c5d40(uVar4,pcVar3 + (0xf - (int)(pcVar2 + 1)),"%s[%d]",pcVar2,
                   *(undefined4 *)(in_ECX + 0x48));
    }
    iVar5 = *(int *)(in_ECX + 0x4c);
  }
  return iVar5;
}



undefined4 * FUN_006e2bc0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x50,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ecd20();
    *puVar2 = &PTR_FUN_00a7b67c;
    puVar2[0x12] = 0xffffffff;
    puVar2[0x13] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006e2c70(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7b67c;
  FUN_00401f20(in_ECX[0x13]);
  FUN_006ecd50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006e2cb0(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar3;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (iVar2 != 0) {
    fVar3 = (float10)FUN_007300b0(*(undefined4 *)(in_ECX + 0x48));
    FUN_006d29e0((float)fVar3);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006e2d20(int *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  float10 fVar2;
  
  if (param_1 != (int *)0x0) {
    for (puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))();
        (puVar1 != (undefined4 *)0x0 && (puVar1 != &DAT_00b3cfbc)); puVar1 = (undefined4 *)puVar1[1]
        ) {
    }
  }
  fVar2 = (float10)FUN_007300b0(*(undefined4 *)(in_ECX + 0x48));
  FUN_006d2b70((float)fVar2);
  return;
}



void FUN_006e2d80(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    cVar1 = FUN_006c36b0(param_1);
    if (cVar1 != '\0') {
      if (*(int **)(in_ECX + 0x3c) == (int *)0x0) {
        return;
      }
      cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x94))();
      if (cVar1 == '\0') {
        return;
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x28) = 0xff7fffff;
  }
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    puVar2 = &param_1;
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x5c))
                      (*(undefined4 *)(in_ECX + 0x28),*(undefined4 *)(in_ECX + 0x30),puVar2);
    if ((cVar1 != '\0') && (*(int *)(in_ECX + 0x44) != 0)) {
      FUN_00730090(*(undefined4 *)(in_ECX + 0x48),puVar2);
    }
  }
  return;
}



undefined4 * FUN_006e2e00(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x50,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ecd20();
    *puVar2 = &PTR_FUN_00a7b67c;
    puVar2[0x12] = 0xffffffff;
    puVar2[0x13] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0075e410(puVar2,param_1);
  puVar2[0x12] = *(undefined4 *)(in_ECX + 0x48);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006e2ea0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_0075e460(param_1);
  iVar1 = *(int *)(iVar2 + 0x21c);
  param_1 = 4;
  (**(code **)(iVar1 + 4))(iVar1,in_ECX + 0x48,4,&param_1,1);
  if (*(uint *)(iVar2 + 0xd8) < 0xa010068) {
    FUN_00712a20();
  }
  return;
}



undefined4
FUN_006e2f90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

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
  local_10 = FUN_00401f00(0x34,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006d2480(param_2,param_4,param_5);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 * FUN_006e3010(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x48,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ecd20();
    *puVar2 = &PTR_FUN_00a7b72c;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



undefined4 FUN_006e3070(void)

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
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_006d29e0(*(undefined4 *)(*(int *)(in_ECX + 0x44) + 0xc));
    *unaff_FS_OFFSET = local_c;
    return uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006e3100(int *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (param_1 != (int *)0x0) {
    for (puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))();
        (puVar1 != (undefined4 *)0x0 && (puVar1 != &DAT_00b3cfbc)); puVar1 = (undefined4 *)puVar1[1]
        ) {
    }
  }
  FUN_006d2b70(*(undefined4 *)(*(int *)(in_ECX + 0x44) + 0xc));
  return;
}



void FUN_006e3150(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    cVar1 = FUN_006c36b0(param_1);
    if (cVar1 != '\0') {
      if (*(int **)(in_ECX + 0x3c) == (int *)0x0) {
        return;
      }
      cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x94))();
      if (cVar1 == '\0') {
        return;
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x28) = 0xff7fffff;
  }
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    puVar2 = &param_1;
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x5c))
                      (*(undefined4 *)(in_ECX + 0x28),*(undefined4 *)(in_ECX + 0x30));
    if ((cVar1 != '\0') && (*(int *)(in_ECX + 0x44) != 0)) {
      *(undefined4 **)(*(int *)(in_ECX + 0x44) + 0xc) = puVar2;
    }
  }
  return;
}



undefined4 * FUN_006e31d0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x48,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ecd20();
    *puVar2 = &PTR_FUN_00a7b72c;
  }
  local_4 = 0xffffffff;
  FUN_0075e410(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006e3250(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  thunk_FUN_00715e70(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0xa010068) {
    uVar2 = FUN_007124a0(uVar1);
    iVar3 = FUN_00401f00(0x18);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_006d2990(uVar2);
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar2);
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x7c))();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006e32f0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ed000(param_1);
  param_1 = FUN_0070f910(DAT_00b3e1e8);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006e3340(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cfdd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7a2ec;
  local_4 = 0;
  if (in_ECX[3] != 0) {
    (**(code **)(&DAT_00b3d2c8 + in_ECX[4] * 4))(in_ECX[3],uVar1);
  }
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006e33b0(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int in_ECX;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar1 = (&DAT_00b3d3e8)[param_3];
    *(int *)(in_ECX + 0xc) = param_1;
    *(int *)(in_ECX + 8) = param_2;
    *(int *)(in_ECX + 0x10) = param_3;
    *(undefined1 *)(in_ECX + 0x14) = uVar1;
    return;
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined1 *)(in_ECX + 0x14) = 0;
  return;
}



void FUN_006e3400(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(in_ECX + 0xc);
  FUN_006d3540(0,*(undefined4 *)(in_ECX + 0x10),&local_4,in_ECX + 8,param_1,param_2);
  *(undefined4 *)(in_ECX + 0xc) = local_4;
  return;
}



undefined4 * FUN_006e3440(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a7a2ec;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 FUN_006e34c0(int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  cVar2 = FUN_00700670(param_1);
  if ((((cVar2 != '\0') && (*(int *)(in_ECX + 8) == *(int *)(param_1 + 8))) &&
      (*(int *)(in_ECX + 0x10) == *(int *)(param_1 + 0x10))) &&
     (*(char *)(in_ECX + 0x14) == *(char *)(param_1 + 0x14))) {
    pcVar1 = *(code **)(&DAT_00b3d4a0 + *(int *)(in_ECX + 0x10) * 4);
    uVar4 = 0;
    if (*(int *)(in_ECX + 8) != 0) {
      do {
        iVar3 = *(byte *)(in_ECX + 0x14) * uVar4;
        cVar2 = (*pcVar1)(*(int *)(in_ECX + 0xc) + iVar3,*(int *)(param_1 + 0xc) + iVar3);
        if (cVar2 == '\0') {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(in_ECX + 8));
    }
    return 1;
  }
  return 0;
}



void FUN_006e3540(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    (**(code **)(&DAT_00b3d2c8 + *(int *)(in_ECX + 0x10) * 4))(*(int *)(in_ECX + 0xc));
  }
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar1 = (&DAT_00b3d3e8)[param_3];
    *(int *)(in_ECX + 0xc) = param_1;
    *(undefined1 *)(in_ECX + 0x14) = uVar1;
    *(int *)(in_ECX + 8) = param_2;
    *(int *)(in_ECX + 0x10) = param_3;
    return;
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined1 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



int * FUN_006e35a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8139;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  local_14 = 0;
  piVar3 = (int *)FUN_00700790(&local_10);
  iVar1 = *piVar3;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  local_4 = 0;
  local_14 = 1;
  if (local_10 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(local_10 + 1);
    if ((LVar4 == 0) && (local_10 != (undefined4 *)0x0)) {
      (**(code **)*local_10)(1,uVar2);
    }
  }
  if (*(int *)(in_ECX + 8) != 0) {
    local_18 = 0;
    local_1c = 0;
    FUN_006d3210(0,*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0xc),*(int *)(in_ECX + 8)
                 ,param_2,param_3,&local_18,&local_1c);
    FUN_006e3540(local_18,local_1c,*(undefined4 *)(in_ECX + 0x10));
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_006e3690(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_8;
  int iStack_4;
  
  iVar1 = param_1;
  FUN_007008a0(param_1);
  local_8 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,4,&local_8,1);
  if (param_1 != 0) {
    local_8 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&iStack_4,4,&local_8,1);
    *(undefined *)(in_ECX + 0x14) = (&DAT_00b3d3e8)[iStack_4];
    uVar2 = (**(code **)(&DAT_00b3d088 + iStack_4 * 4))(iVar1,param_1);
    (**(code **)(&DAT_00b3d410 + iStack_4 * 4))(uVar2,param_1,*(undefined1 *)(in_ECX + 0x14));
    FUN_006e3540(uVar2,param_1,iStack_4);
  }
  return;
}



void FUN_006e3740(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_0068f970(param_1);
  piVar1 = (int *)(in_ECX + 8);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),piVar1,4,&param_1,1);
  if (*piVar1 != 0) {
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))
              (*(int *)(iVar2 + 0x220),(int *)(in_ECX + 0x10),4,&param_1,1);
    (**(code **)(&DAT_00b3d5c0 + *(int *)(in_ECX + 0x10) * 4))
              (iVar2,*(undefined4 *)(in_ECX + 0xc),*piVar1);
  }
  return;
}



void FUN_006e3860(int param_1)

{
  undefined4 *in_ECX;
  
  FUN_006ec220();
  *in_ECX = &PTR_FUN_00a7b7dc;
  in_ECX[3] = DAT_00b24fd4;
  in_ECX[4] = DAT_00b24fd8;
  in_ECX[5] = DAT_00b24fdc;
  in_ECX[6] = DAT_00b24fe0;
  in_ECX[7] = param_1;
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  in_ECX[8] = 0;
  return;
}



void FUN_006e38d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  FUN_006ec220();
  in_ECX[3] = param_1;
  in_ECX[4] = param_2;
  in_ECX[5] = param_3;
  in_ECX[6] = param_4;
  *in_ECX = &PTR_FUN_00a7b7dc;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  return;
}



void FUN_006e3960(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  LONG LVar6;
  int in_ECX;
  uint uVar7;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  uVar2 = puVar1[2];
  iVar3 = puVar1[3];
  if (uVar2 != 0) {
    local_10 = *(undefined4 *)(iVar3 + 4);
    local_c = *(undefined4 *)(iVar3 + 8);
    local_8 = *(undefined4 *)(iVar3 + 0xc);
    local_4 = *(undefined4 *)(iVar3 + 0x10);
    if (uVar2 != 1) {
      if ((puVar1[4] != 1) && (puVar1[4] != 5)) {
        return;
      }
      bVar4 = true;
      uVar7 = 1;
      while (uVar7 < uVar2) {
        cVar5 = FUN_00632310(&local_10);
        if (cVar5 != '\0') {
          bVar4 = false;
        }
        uVar7 = uVar7 + 1;
        if (!bVar4) {
          return;
        }
      }
      if (!bVar4) {
        return;
      }
    }
    puVar1 = *(undefined4 **)(in_ECX + 0x1c);
    if (puVar1 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar1 + 1);
      if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 0x1c) = 0;
    }
    *(undefined4 *)(in_ECX + 0xc) = local_10;
    *(undefined4 *)(in_ECX + 0x10) = local_c;
    *(undefined4 *)(in_ECX + 0x14) = local_8;
    *(undefined4 *)(in_ECX + 0x18) = local_4;
    return;
  }
  if (puVar1 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar1 + 1);
    if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  *(undefined4 *)(in_ECX + 0xc) = DAT_00b24fd4;
  *(undefined4 *)(in_ECX + 0x10) = DAT_00b24fd8;
  *(undefined4 *)(in_ECX + 0x14) = DAT_00b24fdc;
  *(undefined4 *)(in_ECX + 0x18) = DAT_00b24fe0;
  return;
}



void FUN_006e3aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  *(undefined4 *)(in_ECX + 0x10) = param_2;
  *(undefined4 *)(in_ECX + 0x14) = param_3;
  *(undefined4 *)(in_ECX + 0x18) = param_4;
  return;
}



int FUN_006e3b20(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c80f8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_006eba60(param_1,param_2);
  if (*(int *)(in_ECX + 0x1c) != 0) {
    FUN_006e46a0(&param_2,param_1,param_2);
    local_4 = 0;
    FUN_006dabf0(param_2);
    puVar1 = param_2;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    local_4 = 0xffffffff;
    if (((param_2 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_2 + 1), LVar4 == 0))
       && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



bool FUN_006e3be0(float param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 local_10 [16];
  
  if (param_1 == *(float *)(in_ECX + 8)) {
    *param_3 = *(undefined4 *)(in_ECX + 0xc);
    param_3[1] = *(undefined4 *)(in_ECX + 0x10);
    param_3[2] = *(undefined4 *)(in_ECX + 0x14);
    param_3[3] = *(undefined4 *)(in_ECX + 0x18);
    cVar2 = FUN_0073b770(&DAT_00b24fd4);
    return cVar2 == '\0';
  }
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      puVar3 = (undefined4 *)
               FUN_006be040(local_10,param_1,*(undefined4 *)(iVar1 + 0xc),
                            *(undefined4 *)(iVar1 + 0x10),*(int *)(iVar1 + 8),in_ECX + 0x20,
                            *(undefined1 *)(iVar1 + 0x14));
      *(undefined4 *)(in_ECX + 0xc) = *puVar3;
      *(undefined4 *)(in_ECX + 0x10) = puVar3[1];
      *(undefined4 *)(in_ECX + 0x14) = puVar3[2];
      *(undefined4 *)(in_ECX + 0x18) = puVar3[3];
    }
  }
  cVar2 = FUN_0073b770(&DAT_00b24fd4);
  if (cVar2 == '\0') {
    *param_3 = *(undefined4 *)(in_ECX + 0xc);
    param_3[1] = *(undefined4 *)(in_ECX + 0x10);
    param_3[2] = *(undefined4 *)(in_ECX + 0x14);
    param_3[3] = *(undefined4 *)(in_ECX + 0x18);
    *(float *)(in_ECX + 8) = param_1;
    return true;
  }
  return false;
}



undefined4 * FUN_006e3cd0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x24,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ec220();
    *puVar2 = &PTR_FUN_00a7b7dc;
    puVar2[3] = DAT_00b24fd4;
    puVar2[4] = DAT_00b24fd8;
    puVar2[5] = DAT_00b24fdc;
    puVar2[6] = DAT_00b24fe0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006e3d80(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  
  thunk_FUN_007008a0(param_1);
  FUN_00715420(param_1);
  puVar2 = (undefined4 *)FUN_00712a90();
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  if (puVar1 != puVar2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x1c) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  return;
}



undefined4 * FUN_006e3e70(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x24,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ec220();
    *puVar2 = &PTR_FUN_00a7b7dc;
    puVar2[3] = DAT_00b24fd4;
    puVar2[4] = DAT_00b24fd8;
    puVar2[5] = DAT_00b24fdc;
    puVar2[6] = DAT_00b24fe0;
    puVar2[7] = 0;
    puVar2[8] = 0;
  }
  local_4 = 0xffffffff;
  FUN_006d98f0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4
FUN_006e4000(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

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
  local_10 = FUN_00401f00(0x44,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006eae20(param_2,param_4,param_5);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 * FUN_006e4090(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x48,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ecd20();
    *puVar2 = &PTR_FUN_00a7b8b4;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void thunk_FUN_006eccb0(void)

{
  FUN_006eccb0();
  return;
}



void FUN_006e4120(byte param_1)

{
  FUN_006ecd50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_006e4140(void)

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
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x24,uVar1);
  local_4 = 0;
  if (iVar2 != 0) {
    iVar2 = *(int *)(in_ECX + 0x44);
    uVar3 = FUN_006e38d0(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                         *(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18));
    *unaff_FS_OFFSET = local_c;
    return uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006e41d0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  if (param_1 != (int *)0x0) {
    for (puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))();
        (puVar2 != (undefined4 *)0x0 && (puVar2 != &DAT_00b3e2d0)); puVar2 = (undefined4 *)puVar2[1]
        ) {
    }
  }
  iVar1 = *(int *)(in_ECX + 0x44);
  FUN_006e3aa0(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),
               *(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x18));
  return;
}



void FUN_006e4240(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 unaff_ESI;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    cVar1 = FUN_006c36b0(param_1);
    if (cVar1 != '\0') {
      if (*(int **)(in_ECX + 0x3c) == (int *)0x0) {
        return;
      }
      cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x94))();
      if (cVar1 == '\0') {
        return;
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x28) = 0xff7fffff;
  }
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    puVar3 = &local_10;
    local_10 = 0;
    uVar2 = *(undefined4 *)(in_ECX + 0x30);
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x50))
                      (*(undefined4 *)(in_ECX + 0x28),uVar2,puVar3);
    if ((cVar1 != '\0') && (*(int *)(in_ECX + 0x44) != 0)) {
      FUN_00730540(uVar2,puVar3,unaff_ESI,local_10);
    }
  }
  return;
}



undefined4 * FUN_006e42f0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x48,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ecd20();
    *puVar2 = &PTR_FUN_00a7b8b4;
  }
  local_4 = 0xffffffff;
  FUN_0075e410(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006e4370(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  thunk_FUN_00715e70(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0xa010068) {
    uVar2 = FUN_007124a0(uVar1);
    iVar3 = FUN_00401f00(0x24);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_006e3860(uVar2);
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar2);
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x7c))();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006e4410(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ed000(param_1);
  param_1 = FUN_0070f910(DAT_00b3e314);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006e4470(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cfdd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7b964;
  local_4 = 0;
  if (in_ECX[3] != 0) {
    (**(code **)(&DAT_00b3d310 + in_ECX[4] * 4))(in_ECX[3],uVar1);
  }
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006e44e0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(in_ECX + 0xc);
  FUN_006d3540(3,*(undefined4 *)(in_ECX + 0x10),&local_4,in_ECX + 8,param_1,param_2);
  *(undefined4 *)(in_ECX + 0xc) = local_4;
  return;
}



undefined4 * FUN_006e4520(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a7b964;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 FUN_006e45a0(int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  cVar2 = FUN_00700670(param_1);
  if ((((cVar2 != '\0') && (*(int *)(in_ECX + 8) == *(int *)(param_1 + 8))) &&
      (*(int *)(in_ECX + 0x10) == *(int *)(param_1 + 0x10))) &&
     (*(char *)(in_ECX + 0x14) == *(char *)(param_1 + 0x14))) {
    pcVar1 = *(code **)(&DAT_00b3d4e8 + *(int *)(in_ECX + 0x10) * 4);
    uVar4 = 0;
    if (*(int *)(in_ECX + 8) != 0) {
      do {
        iVar3 = *(byte *)(in_ECX + 0x14) * uVar4;
        cVar2 = (*pcVar1)(*(int *)(in_ECX + 0xc) + iVar3,*(int *)(param_1 + 0xc) + iVar3);
        if (cVar2 == '\0') {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(in_ECX + 8));
    }
    return 1;
  }
  return 0;
}



void FUN_006e4620(byte param_1)

{
  FUN_006e4470();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006e4640(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    (**(code **)(&DAT_00b3d310 + *(int *)(in_ECX + 0x10) * 4))(*(int *)(in_ECX + 0xc));
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = (&DAT_00b3d3fa)[param_3];
    *(int *)(in_ECX + 0xc) = param_1;
    *(undefined1 *)(in_ECX + 0x14) = uVar1;
    *(int *)(in_ECX + 8) = param_2;
    *(int *)(in_ECX + 0x10) = param_3;
    return;
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined1 *)(in_ECX + 0x14) = 0;
  return;
}



int * FUN_006e46a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8139;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  local_14 = 0;
  piVar3 = (int *)FUN_00700790(&local_10);
  iVar1 = *piVar3;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  local_4 = 0;
  local_14 = 1;
  if (local_10 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(local_10 + 1);
    if ((LVar4 == 0) && (local_10 != (undefined4 *)0x0)) {
      (**(code **)*local_10)(1,uVar2);
    }
  }
  if (*(int *)(in_ECX + 8) != 0) {
    local_18 = 0;
    local_1c = 0;
    FUN_006d3210(3,*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0xc),*(int *)(in_ECX + 8)
                 ,param_2,param_3,&local_18,&local_1c);
    FUN_006e4640(local_18,local_1c,*(undefined4 *)(in_ECX + 0x10));
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_006e4820(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_0068f970(param_1);
  piVar1 = (int *)(in_ECX + 8);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),piVar1,4,&param_1,1);
  if (*piVar1 != 0) {
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))
              (*(int *)(iVar2 + 0x220),(int *)(in_ECX + 0x10),4,&param_1,1);
    (**(code **)(&DAT_00b3d608 + *(int *)(in_ECX + 0x10) * 4))
              (iVar2,*(undefined4 *)(in_ECX + 0xc),*piVar1);
  }
  return;
}



void FUN_006e4930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *in_ECX;
  
  FUN_006ed140(param_1,param_5);
  *in_ECX = &PTR_FUN_00a7b9b4;
  in_ECX[7] = DAT_00b24260;
  in_ECX[8] = DAT_00b24264;
  in_ECX[9] = DAT_00b24268;
  in_ECX[10] = DAT_00b3cba4;
  in_ECX[0xb] = DAT_00b3cba8;
  in_ECX[0xc] = DAT_00b3cbac;
  in_ECX[0xd] = DAT_00b3cbb0;
  in_ECX[0xe] = 0xff7fffff;
  in_ECX[0xf] = param_2;
  in_ECX[0x10] = param_3;
  in_ECX[0x11] = param_4;
  return;
}



uint FUN_006e49c0(uint param_1)

{
  float fVar1;
  uint uVar2;
  int *in_ECX;
  
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 0) {
    uVar2 = (**(code **)(*in_ECX + 0x9c))(param_1);
    if (uVar2 == 0) {
      fVar1 = (float)in_ECX[7];
LAB_006e4a1f:
      if (fVar1 != -3.4028235e+38) {
        return 1;
      }
      return 0;
    }
  }
  else if (uVar2 == 1) {
    uVar2 = (**(code **)(*in_ECX + 0x9c))(param_1);
    if (uVar2 == 0) {
      fVar1 = (float)in_ECX[0xb];
      goto LAB_006e4a1f;
    }
  }
  else {
    uVar2 = uVar2 - 2;
    if (uVar2 == 0) {
      uVar2 = (**(code **)(*in_ECX + 0x9c))(param_1);
      if (uVar2 == 0) {
        fVar1 = (float)in_ECX[0xe];
        goto LAB_006e4a1f;
      }
    }
  }
  return uVar2 & 0xffffff00;
}



void FUN_006e4b20(int param_1,undefined4 param_2)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_006ed2b0(param_1,param_2);
  puVar2 = (undefined4 *)(in_ECX + 0x1c);
  puVar3 = (undefined4 *)(param_1 + 0x1c);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(in_ECX + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(in_ECX + 0x44);
  return;
}



undefined4 FUN_006e4b60(void)

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
  local_10 = FUN_00401f00(0x48,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006e4930(0,0xffff,0xffff,0xffff,0);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



uint FUN_006e4be0(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = FUN_006ed370(param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_006ce450(param_1 + 0x1c);
    if (((((char)uVar1 != '\0') && (*(int *)(param_1 + 0x3c) == *(int *)(in_ECX + 0x3c))) &&
        (*(int *)(param_1 + 0x40) == *(int *)(in_ECX + 0x40))) &&
       (uVar1 = *(uint *)(param_1 + 0x44), uVar1 == *(uint *)(in_ECX + 0x44))) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}



bool FUN_006e4c30(float param_1,undefined4 param_2,undefined4 *param_3)

{
  float fVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == *(float *)(in_ECX + 8)) {
    puVar4 = (undefined4 *)(in_ECX + 0x1c);
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
    }
    cVar2 = FUN_006cbc10();
    return cVar2 == '\0';
  }
  fVar1 = (param_1 - *(float *)(in_ECX + 0xc)) /
          (*(float *)(in_ECX + 0x10) - *(float *)(in_ECX + 0xc));
  if (*(int *)(in_ECX + 0x3c) != 0xffff) {
    FUN_006e72f0(fVar1,&local_10,3,*(undefined4 *)(in_ECX + 0x18),*(int *)(in_ECX + 0x3c));
    local_20 = local_10;
    local_1c = local_c;
    local_18 = local_8;
    FUN_00471390(&local_20);
  }
  if (*(int *)(in_ECX + 0x40) != 0xffff) {
    FUN_006e72f0(fVar1,&local_10,4,*(undefined4 *)(in_ECX + 0x18),*(int *)(in_ECX + 0x40));
    FUN_00714c40(local_10,local_c,local_8,local_4);
    FUN_0072fac0();
    FUN_00471430(&local_20);
  }
  if (*(int *)(in_ECX + 0x44) != 0xffff) {
    FUN_006e72f0(fVar1,&local_10,1,*(undefined4 *)(in_ECX + 0x18),*(int *)(in_ECX + 0x44));
    FUN_00471560(local_10);
  }
  puVar4 = (undefined4 *)(in_ECX + 0x1c);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_3 = *puVar4;
    puVar4 = puVar4 + 1;
    param_3 = param_3 + 1;
  }
  cVar2 = FUN_006cbc10();
  if (cVar2 != '\0') {
    return false;
  }
  *(float *)(in_ECX + 8) = param_1;
  return true;
}



int FUN_006e4db0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
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
  iVar2 = FUN_00401f00(0x48,uVar1);
  iVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_006e4930(0,0xffff,0xffff,0xffff,0);
  }
  local_4 = 0xffffffff;
  FUN_006ed2b0(iVar3,param_1);
  puVar4 = (undefined4 *)(in_ECX + 0x1c);
  puVar5 = (undefined4 *)(iVar3 + 0x1c);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(in_ECX + 0x40);
  *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(in_ECX + 0x44);
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



void FUN_006e4e60(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_006ed420(param_1);
  FUN_006cb990(iVar1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x3c,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x40,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x44,4,&param_1,1);
  return;
}



void FUN_006e4ef0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_006ed500(param_1);
  FUN_006cba90(iVar1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x3c,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x40,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x44,4,&param_1,1);
  return;
}



void FUN_006e4f80(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ed580(param_1);
  param_1 = FUN_0070f910(DAT_00b3e3d8);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  FUN_006cbad0(iVar1);
  param_1 = FUN_0070fb40("m_kTransCPHandle",*(undefined4 *)(in_ECX + 0x3c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("m_kRotCPHandle",*(undefined4 *)(in_ECX + 0x40));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("m_kScaleCPHandle",*(undefined4 *)(in_ECX + 0x44));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006e5090(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_006ed140(param_1,param_3);
  *in_ECX = &PTR_FUN_00a7baac;
  in_ECX[10] = param_2;
  return;
}



void FUN_006e5130(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_006ed2b0(param_1,param_2);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  return;
}



undefined4 * FUN_006e5160(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x2c,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ed140(0,0);
    *puVar2 = &PTR_FUN_00a7baac;
    puVar2[10] = 0xffff;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



undefined4 FUN_006e51d0(float param_1,undefined4 param_2,undefined4 *param_3)

{
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == *(float *)(in_ECX + 8)) {
    *param_3 = *(undefined4 *)(in_ECX + 0x1c);
    param_3[1] = *(undefined4 *)(in_ECX + 0x20);
    param_3[2] = *(undefined4 *)(in_ECX + 0x24);
    return 1;
  }
  if (*(int *)(in_ECX + 0x28) != 0xffff) {
    FUN_006e72f0((param_1 - *(float *)(in_ECX + 0xc)) /
                 (*(float *)(in_ECX + 0x10) - *(float *)(in_ECX + 0xc)),&local_c,3,
                 *(undefined4 *)(in_ECX + 0x18),*(int *)(in_ECX + 0x28));
    *(undefined4 *)(in_ECX + 0x1c) = local_c;
    *(undefined4 *)(in_ECX + 0x20) = local_8;
    *(undefined4 *)(in_ECX + 0x24) = local_4;
  }
  *param_3 = *(undefined4 *)(in_ECX + 0x1c);
  param_3[1] = *(undefined4 *)(in_ECX + 0x20);
  param_3[2] = *(undefined4 *)(in_ECX + 0x24);
  *(float *)(in_ECX + 8) = param_1;
  return 1;
}



undefined4 * FUN_006e52a0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x2c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ed140(0,0);
    *puVar2 = &PTR_FUN_00a7baac;
    puVar2[10] = 0xffff;
  }
  local_4 = 0xffffffff;
  FUN_006ed2b0(puVar2,param_1);
  puVar2[7] = *(undefined4 *)(in_ECX + 0x1c);
  puVar2[8] = *(undefined4 *)(in_ECX + 0x20);
  puVar2[9] = *(undefined4 *)(in_ECX + 0x24);
  puVar2[10] = *(undefined4 *)(in_ECX + 0x28);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



bool FUN_006e5340(int param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_006ed370(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_008aa390(param_1 + 0x1c);
    if (cVar1 == '\0') {
      return *(int *)(param_1 + 0x28) == *(int *)(in_ECX + 0x28);
    }
  }
  return false;
}



void FUN_006e5380(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_006ed420(param_1);
  FUN_00709430(iVar1);
  iVar1 = *(int *)(iVar1 + 0x21c);
  param_1 = 4;
  (**(code **)(iVar1 + 4))(iVar1,in_ECX + 0x28,4,&param_1,1);
  return;
}



void FUN_006e53c0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_006ed500(param_1);
  FUN_007094a0(iVar1);
  iVar1 = *(int *)(iVar1 + 0x220);
  param_1 = 4;
  (**(code **)(iVar1 + 8))(iVar1,in_ECX + 0x28,4,&param_1,1);
  return;
}



void FUN_006e5400(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ed580(param_1);
  param_1 = FUN_0070f910(DAT_00b3e428);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("m_kPoint3CPHandle",*(undefined4 *)(in_ECX + 0x28));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006e5490(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_006ed140(param_1,param_3);
  *in_ECX = &PTR_FUN_00a7bb84;
  in_ECX[8] = param_2;
  return;
}



void FUN_006e5520(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_006ed2b0(param_1,param_2);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  return;
}



undefined4 * FUN_006e5550(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x24,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ed140(0,0);
    *puVar2 = &PTR_FUN_00a7bb84;
    puVar2[8] = 0xffff;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



bool FUN_006e55c0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_006ed330(param_1);
  return cVar1 != '\0';
}



uint FUN_006e55e0(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int in_ECX;
  
  uVar3 = FUN_006ed370(param_1);
  if ((char)uVar3 != '\0') {
    fVar1 = *(float *)(in_ECX + 0x1c);
    fVar2 = *(float *)(param_1 + 0x1c);
    uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                     (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                     (ushort)(fVar2 == fVar1) << 0xe);
    if (fVar2 == fVar1) {
      return CONCAT31((int3)((uint)*(int *)(param_1 + 0x20) >> 8),
                      *(int *)(param_1 + 0x20) == *(int *)(in_ECX + 0x20));
    }
  }
  return uVar3 & 0xffffff00;
}



undefined4 * FUN_006e56a0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x24,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ed140(0,0);
    *puVar2 = &PTR_FUN_00a7bb84;
    puVar2[8] = 0xffff;
  }
  local_4 = 0xffffffff;
  FUN_006ed2b0(puVar2,param_1);
  puVar2[7] = *(undefined4 *)(in_ECX + 0x1c);
  puVar2[8] = *(undefined4 *)(in_ECX + 0x20);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006e5740(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_006ed420(param_1);
  iVar1 = *(int *)(iVar2 + 0x21c);
  param_1 = 4;
  (**(code **)(iVar1 + 4))(iVar1,in_ECX + 0x1c,4,&param_1,1);
  iVar1 = *(int *)(iVar2 + 0x21c);
  param_1 = 4;
  (**(code **)(iVar1 + 4))(iVar1,in_ECX + 0x20,4,&param_1,1);
  return;
}



void FUN_006e57a0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_006ed500(param_1);
  iVar1 = *(int *)(iVar2 + 0x220);
  param_1 = 4;
  (**(code **)(iVar1 + 8))(iVar1,in_ECX + 0x1c,4,&param_1,1);
  iVar1 = *(int *)(iVar2 + 0x220);
  param_1 = 4;
  (**(code **)(iVar1 + 8))(iVar1,in_ECX + 0x20,4,&param_1,1);
  return;
}



void FUN_006e5800(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ed580(param_1);
  param_1 = FUN_0070f910(DAT_00b3e49c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("m_fFloatValue",*(undefined4 *)(in_ECX + 0x1c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("m_kFloatCPHandle",*(undefined4 *)(in_ECX + 0x20));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



ushort FUN_006e58e0(int param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int in_ECX;
  uint uVar4;
  float *pfVar5;
  
  uVar3 = FUN_006e4be0(param_1);
  if ((char)uVar3 != '\0') {
    uVar4 = 0;
    pfVar5 = (float *)(param_1 + 0x48);
    while( true ) {
      fVar1 = *(float *)((in_ECX - param_1) + (int)pfVar5);
      fVar2 = *pfVar5;
      uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
              (ushort)(fVar2 == fVar1) << 0xe;
      if (fVar2 != fVar1) break;
      uVar4 = uVar4 + 1;
      pfVar5 = pfVar5 + 1;
      if (5 < uVar4) {
        return CONCAT11((char)(uVar3 >> 8),1);
      }
    }
  }
  return uVar3 & 0xff00;
}



void FUN_006e5920(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *in_ECX;
  
  FUN_006e4930(param_1,param_2,param_3,param_4,param_5);
  *in_ECX = &PTR_FUN_00a7bc5c;
  in_ECX[0x12] = 0x7f7fffff;
  in_ECX[0x13] = 0x7f7fffff;
  in_ECX[0x14] = 0x7f7fffff;
  in_ECX[0x15] = 0x7f7fffff;
  in_ECX[0x16] = 0x7f7fffff;
  in_ECX[0x17] = 0x7f7fffff;
  return;
}



bool FUN_006e5990(float param_1,undefined4 param_2,undefined4 *param_3)

{
  float fVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == *(float *)(in_ECX + 8)) {
    puVar4 = (undefined4 *)(in_ECX + 0x1c);
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
    }
    cVar2 = FUN_006cbc10();
    return cVar2 == '\0';
  }
  fVar1 = (param_1 - *(float *)(in_ECX + 0xc)) /
          (*(float *)(in_ECX + 0x10) - *(float *)(in_ECX + 0xc));
  if (*(int *)(in_ECX + 0x3c) != 0xffff) {
    FUN_006e7470(fVar1,&local_10,3,*(undefined4 *)(in_ECX + 0x18),*(int *)(in_ECX + 0x3c),
                 *(undefined4 *)(in_ECX + 0x48),*(undefined4 *)(in_ECX + 0x4c));
    local_20 = local_10;
    local_1c = local_c;
    local_18 = local_8;
    FUN_00471390(&local_20);
  }
  if (*(int *)(in_ECX + 0x40) != 0xffff) {
    FUN_006e7470(fVar1,&local_10,4,*(undefined4 *)(in_ECX + 0x18),*(int *)(in_ECX + 0x40),
                 *(undefined4 *)(in_ECX + 0x50),*(undefined4 *)(in_ECX + 0x54));
    FUN_00714c40(local_10,local_c,local_8,local_4);
    FUN_0072fac0();
    FUN_00471430(&local_20);
  }
  if (*(int *)(in_ECX + 0x44) != 0xffff) {
    FUN_006e7470(fVar1,&local_10,1,*(undefined4 *)(in_ECX + 0x18),*(int *)(in_ECX + 0x44),
                 *(undefined4 *)(in_ECX + 0x58),*(undefined4 *)(in_ECX + 0x5c));
    FUN_00471560(local_10);
  }
  puVar4 = (undefined4 *)(in_ECX + 0x1c);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_3 = *puVar4;
    puVar4 = puVar4 + 1;
    param_3 = param_3 + 1;
  }
  cVar2 = FUN_006cbc10();
  if (cVar2 != '\0') {
    return false;
  }
  *(float *)(in_ECX + 8) = param_1;
  return true;
}



int FUN_006e5b40(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x60,uVar1);
  iVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_006e5920(0,0xffff,0xffff,0xffff,0);
  }
  local_4 = 0xffffffff;
  FUN_006e4b20(iVar3,param_1);
  *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(in_ECX + 0x48);
  *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(in_ECX + 0x4c);
  *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(in_ECX + 0x50);
  *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(in_ECX + 0x54);
  *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(in_ECX + 0x58);
  *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(in_ECX + 0x5c);
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



undefined4 FUN_006e5bf0(void)

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
  local_10 = FUN_00401f00(0x60,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006e5920(0,0xffff,0xffff,0xffff,0);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006e5cf0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006e4f80(param_1);
  param_1 = FUN_0070f910(DAT_00b3e4e8);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



ushort FUN_006e5d70(int param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int in_ECX;
  uint uVar4;
  float *pfVar5;
  
  uVar3 = FUN_006e5340(param_1);
  if ((char)uVar3 != '\0') {
    uVar4 = 0;
    pfVar5 = (float *)(param_1 + 0x2c);
    while( true ) {
      fVar1 = *(float *)((in_ECX - param_1) + (int)pfVar5);
      fVar2 = *pfVar5;
      uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
              (ushort)(fVar2 == fVar1) << 0xe;
      if (fVar2 != fVar1) break;
      uVar4 = uVar4 + 1;
      pfVar5 = pfVar5 + 1;
      if (1 < uVar4) {
        return CONCAT11((char)(uVar3 >> 8),1);
      }
    }
  }
  return uVar3 & 0xff00;
}



undefined4 FUN_006e5db0(float param_1,undefined4 param_2,undefined4 *param_3)

{
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1 == *(float *)(in_ECX + 8)) {
    *param_3 = *(undefined4 *)(in_ECX + 0x1c);
    param_3[1] = *(undefined4 *)(in_ECX + 0x20);
    param_3[2] = *(undefined4 *)(in_ECX + 0x24);
    return 1;
  }
  if (*(int *)(in_ECX + 0x28) != 0xffff) {
    FUN_006e7470((param_1 - *(float *)(in_ECX + 0xc)) /
                 (*(float *)(in_ECX + 0x10) - *(float *)(in_ECX + 0xc)),&local_10,3,
                 *(undefined4 *)(in_ECX + 0x18),*(int *)(in_ECX + 0x28),
                 *(undefined4 *)(in_ECX + 0x2c),*(undefined4 *)(in_ECX + 0x30));
    *(undefined4 *)(in_ECX + 0x1c) = local_10;
    *(undefined4 *)(in_ECX + 0x20) = local_c;
    *(undefined4 *)(in_ECX + 0x24) = local_8;
  }
  *param_3 = *(undefined4 *)(in_ECX + 0x1c);
  param_3[1] = *(undefined4 *)(in_ECX + 0x20);
  param_3[2] = *(undefined4 *)(in_ECX + 0x24);
  *(float *)(in_ECX + 8) = param_1;
  return 1;
}



undefined4 * FUN_006e5e90(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x34,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006e5090(0,0xffff,0);
    *puVar2 = &PTR_FUN_00a7bd1c;
    puVar2[0xb] = 0x7f7fffff;
    puVar2[0xc] = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_006e5130(puVar2,param_1);
  puVar2[0xb] = *(undefined4 *)(in_ECX + 0x2c);
  puVar2[0xc] = *(undefined4 *)(in_ECX + 0x30);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_006e5f40(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x34,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006e5090(0,0xffff,0);
    *puVar2 = &PTR_FUN_00a7bd1c;
    puVar2[0xb] = 0x7f7fffff;
    puVar2[0xc] = 0x7f7fffff;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_006e6040(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006e5400(param_1);
  param_1 = FUN_0070f910(DAT_00b3e548);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



ushort FUN_006e60a0(int param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int in_ECX;
  uint uVar4;
  float *pfVar5;
  
  uVar3 = FUN_006e55e0(param_1);
  if ((char)uVar3 != '\0') {
    uVar4 = 0;
    pfVar5 = (float *)(param_1 + 0x24);
    while( true ) {
      fVar1 = *(float *)((in_ECX - param_1) + (int)pfVar5);
      fVar2 = *pfVar5;
      uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
              (ushort)(fVar2 == fVar1) << 0xe;
      if (fVar2 != fVar1) break;
      uVar4 = uVar4 + 1;
      pfVar5 = pfVar5 + 1;
      if (1 < uVar4) {
        return CONCAT11((char)(uVar3 >> 8),1);
      }
    }
  }
  return uVar3 & 0xff00;
}



undefined4 * FUN_006e6170(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x2c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006e5490(0,0xffff,0);
    *puVar2 = &PTR_FUN_00a7bddc;
    puVar2[9] = 0x7f7fffff;
    puVar2[10] = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_006e5520(puVar2,param_1);
  puVar2[9] = *(undefined4 *)(in_ECX + 0x24);
  puVar2[10] = *(undefined4 *)(in_ECX + 0x28);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_006e6220(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x2c,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006e5490(0,0xffff,0);
    *puVar2 = &PTR_FUN_00a7bddc;
    puVar2[9] = 0x7f7fffff;
    puVar2[10] = 0x7f7fffff;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_006e6320(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006e5800(param_1);
  param_1 = FUN_0070f910(DAT_00b3e5b4);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



ushort FUN_006e6390(int param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int in_ECX;
  uint uVar4;
  float *pfVar5;
  
  uVar3 = FUN_006e6a00(param_1);
  if ((char)uVar3 != '\0') {
    uVar4 = 0;
    pfVar5 = (float *)(param_1 + 0x34);
    while( true ) {
      fVar1 = *(float *)((in_ECX - param_1) + (int)pfVar5);
      fVar2 = *pfVar5;
      uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
              (ushort)(fVar2 == fVar1) << 0xe;
      if (fVar2 != fVar1) break;
      uVar4 = uVar4 + 1;
      pfVar5 = pfVar5 + 1;
      if (1 < uVar4) {
        return CONCAT11((char)(uVar3 >> 8),1);
      }
    }
  }
  return uVar3 & 0xff00;
}



undefined4 FUN_006e63d0(float param_1,undefined4 param_2,undefined4 *param_3)

{
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == *(float *)(in_ECX + 8)) {
    *param_3 = *(undefined4 *)(in_ECX + 0x1c);
    param_3[1] = *(undefined4 *)(in_ECX + 0x20);
    param_3[2] = *(undefined4 *)(in_ECX + 0x24);
    param_3[3] = *(undefined4 *)(in_ECX + 0x28);
    return 1;
  }
  if (*(int *)(in_ECX + 0x2c) != 0xffff) {
    FUN_006e7470((param_1 - *(float *)(in_ECX + 0xc)) /
                 (*(float *)(in_ECX + 0x10) - *(float *)(in_ECX + 0xc)),&local_10,4,
                 *(undefined4 *)(in_ECX + 0x18),*(int *)(in_ECX + 0x2c),
                 *(undefined4 *)(in_ECX + 0x34),*(undefined4 *)(in_ECX + 0x38));
    *(undefined4 *)(in_ECX + 0x1c) = local_10;
    *(undefined4 *)(in_ECX + 0x20) = local_c;
    *(undefined4 *)(in_ECX + 0x24) = local_8;
    *(undefined4 *)(in_ECX + 0x28) = local_4;
  }
  *param_3 = *(undefined4 *)(in_ECX + 0x1c);
  param_3[1] = *(undefined4 *)(in_ECX + 0x20);
  param_3[2] = *(undefined4 *)(in_ECX + 0x24);
  param_3[3] = *(undefined4 *)(in_ECX + 0x28);
  *(float *)(in_ECX + 8) = param_1;
  return 1;
}



undefined4 * FUN_006e64c0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006e66c0(0,0xffff,0);
    *puVar2 = &PTR_FUN_00a7be9c;
    puVar2[0xd] = 0x7f7fffff;
    puVar2[0xe] = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_006e67a0(puVar2,param_1);
  puVar2[0xd] = *(undefined4 *)(in_ECX + 0x34);
  puVar2[0xe] = *(undefined4 *)(in_ECX + 0x38);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_006e6570(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006e66c0(0,0xffff,0);
    *puVar2 = &PTR_FUN_00a7be9c;
    puVar2[0xd] = 0x7f7fffff;
    puVar2[0xe] = 0x7f7fffff;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_006e6670(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006e6ac0(param_1);
  param_1 = FUN_0070f910(DAT_00b3e5f0);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006e66c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_006ed140(param_1,param_3);
  *in_ECX = &PTR_FUN_00a7bf5c;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = param_2;
  return;
}



void FUN_006e67a0(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_006ed2b0(param_1,param_2);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
  return;
}



undefined4 * FUN_006e67e0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x34,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ed140(0,0);
    *puVar2 = &PTR_FUN_00a7bf5c;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0xffff;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



undefined4 FUN_006e6860(float param_1,undefined4 param_2,undefined4 *param_3)

{
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == *(float *)(in_ECX + 8)) {
    *param_3 = *(undefined4 *)(in_ECX + 0x1c);
    param_3[1] = *(undefined4 *)(in_ECX + 0x20);
    param_3[2] = *(undefined4 *)(in_ECX + 0x24);
    param_3[3] = *(undefined4 *)(in_ECX + 0x28);
    return 1;
  }
  if (*(int *)(in_ECX + 0x2c) != 0xffff) {
    FUN_006e72f0((param_1 - *(float *)(in_ECX + 0xc)) /
                 (*(float *)(in_ECX + 0x10) - *(float *)(in_ECX + 0xc)),&local_10,4,
                 *(undefined4 *)(in_ECX + 0x18),*(int *)(in_ECX + 0x2c));
    *(undefined4 *)(in_ECX + 0x1c) = local_10;
    *(undefined4 *)(in_ECX + 0x20) = local_c;
    *(undefined4 *)(in_ECX + 0x24) = local_8;
    *(undefined4 *)(in_ECX + 0x28) = local_4;
  }
  *param_3 = *(undefined4 *)(in_ECX + 0x1c);
  param_3[1] = *(undefined4 *)(in_ECX + 0x20);
  param_3[2] = *(undefined4 *)(in_ECX + 0x24);
  param_3[3] = *(undefined4 *)(in_ECX + 0x28);
  *(float *)(in_ECX + 8) = param_1;
  return 1;
}



undefined4 * FUN_006e6940(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x34,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ed140(0,0);
    *puVar2 = &PTR_FUN_00a7bf5c;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0xffff;
  }
  local_4 = 0xffffffff;
  FUN_006ed2b0(puVar2,param_1);
  puVar2[7] = *(undefined4 *)(in_ECX + 0x1c);
  puVar2[8] = *(undefined4 *)(in_ECX + 0x20);
  puVar2[9] = *(undefined4 *)(in_ECX + 0x24);
  puVar2[10] = *(undefined4 *)(in_ECX + 0x28);
  puVar2[0xb] = *(undefined4 *)(in_ECX + 0x2c);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



bool FUN_006e6a00(int param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_006ed370(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_00632310(param_1 + 0x1c);
    if (cVar1 == '\0') {
      return *(int *)(param_1 + 0x2c) == *(int *)(in_ECX + 0x2c);
    }
  }
  return false;
}



void FUN_006e6a40(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_006ed420(param_1);
  FUN_00715420(iVar1);
  iVar1 = *(int *)(iVar1 + 0x21c);
  param_1 = 4;
  (**(code **)(iVar1 + 4))(iVar1,in_ECX + 0x2c,4,&param_1,1);
  return;
}



void FUN_006e6a80(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_006ed500(param_1);
  FUN_00709510(iVar1);
  iVar1 = *(int *)(iVar1 + 0x220);
  param_1 = 4;
  (**(code **)(iVar1 + 8))(iVar1,in_ECX + 0x2c,4,&param_1,1);
  return;
}



void FUN_006e6ac0(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ed580(param_1);
  param_1 = FUN_0070f910(DAT_00b3e668);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("m_kColorACPHandle",*(undefined4 *)(in_ECX + 0x2c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006e6b50(float param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int *in_ECX;
  float10 fVar13;
  float10 extraout_ST0;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 extraout_ST1;
  float10 fVar17;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  if (param_1 == (float)in_ECX[5]) {
    *param_2 = in_ECX[6];
    *param_3 = in_ECX[7];
    return;
  }
  fVar17 = (float10)1;
  iVar5 = *in_ECX;
  fVar13 = (float10)param_1;
  in_ECX[5] = (int)param_1;
  iVar1 = iVar5 + -3;
  if (fVar17 <= fVar13) {
    iVar12 = iVar5 + -1;
  }
  else {
    iVar12 = FUN_009828c0();
    iVar12 = iVar12 + 3;
    fVar13 = extraout_ST0;
    fVar17 = extraout_ST1;
  }
  iVar2 = iVar12 + -3;
  *param_2 = iVar2;
  in_ECX[6] = iVar2;
  fVar14 = (float10)iVar1;
  *param_3 = iVar12;
  iVar6 = *in_ECX;
  fVar4 = (float)(fVar14 * fVar13);
  in_ECX[7] = iVar12;
  if (6 < iVar6) {
    fVar7 = 0.0;
    iVar6 = iVar5 + -1;
    if (iVar12 < 6) {
      local_10 = 0.0;
    }
    else {
      local_10 = (float)(iVar12 + -5);
    }
    if (4 < iVar12) {
      fVar7 = (float)(iVar12 + -4);
    }
    iVar3 = iVar1;
    if (iVar12 < iVar5 + -2) {
      iVar3 = iVar12 + -1;
    }
    local_1c = (float)iVar3;
    if (iVar12 < iVar1) {
      fVar14 = (float10)iVar12;
    }
    fVar15 = (float10)0.5;
    fVar13 = fVar15;
    if (iVar12 == 3) {
      fVar13 = fVar17;
    }
    local_20 = (float)fVar13;
    fVar13 = fVar15;
    if (iVar12 == iVar6) {
      fVar13 = fVar17;
    }
    local_18 = (float)fVar13;
    fVar13 = (float10)0.33333334;
    if (iVar12 == 3) {
      param_2 = (int *)(float)fVar17;
      local_14 = (float)fVar15;
    }
    else {
      fVar16 = fVar13;
      if (iVar12 == 4) {
        fVar16 = fVar15;
      }
      param_2 = (int *)(float)fVar16;
      if (iVar12 == iVar6) {
        local_14 = (float)fVar15;
      }
      else {
        local_14 = (float)fVar13;
      }
    }
    if ((iVar12 == iVar6) || (fVar17 = fVar15, iVar12 == iVar5 + -2)) {
      fVar13 = fVar17;
    }
    fVar9 = fVar4 - (float)iVar2;
    fVar8 = (float)(iVar12 + -2) - fVar4;
    fVar10 = fVar8 * local_20 * fVar8 * (float)param_2;
    local_14 = local_14 *
               ((local_1c - fVar4) * fVar9 * local_18 + (fVar4 - fVar7) * fVar8 * local_20);
    fVar11 = fVar9 * (float)fVar13 * fVar9 * local_18;
    in_ECX[1] = (int)(fVar10 * fVar8);
    in_ECX[2] = (int)((fVar4 - local_10) * fVar10 + local_14 * (local_1c - fVar4));
    in_ECX[3] = (int)(fVar11 * ((float)fVar14 - fVar4) + (fVar4 - fVar7) * local_14);
    in_ECX[4] = (int)(fVar11 * fVar9);
    return;
  }
  if (iVar6 == 6) {
    if (iVar12 == 3) {
      fVar9 = 1.0 - fVar4;
      fVar7 = (fVar9 * fVar4 + (2.0 - fVar4) * fVar4 * 0.5) * 0.5;
      fVar8 = fVar4 * 0.33333334 * fVar4 * 0.5;
      in_ECX[1] = (int)(fVar9 * fVar9 * fVar9);
      in_ECX[2] = (int)(fVar7 * (2.0 - fVar4) + fVar4 * fVar9 * fVar9);
      in_ECX[3] = (int)(fVar8 * (3.0 - fVar4) + fVar4 * fVar7);
      in_ECX[4] = (int)(fVar8 * fVar4);
      return;
    }
    if (iVar12 != 4) {
      fVar7 = fVar4 - 2.0;
      fVar10 = 3.0 - fVar4;
      fVar9 = fVar10 * 0.5 * fVar10 * 0.33333334;
      fVar8 = (fVar10 * fVar7 + (fVar4 - 1.0) * fVar10 * 0.5) * 0.5;
      in_ECX[1] = (int)(fVar9 * fVar10);
      in_ECX[2] = (int)(fVar8 * fVar10 + fVar9 * fVar4);
      in_ECX[3] = (int)(fVar7 * fVar7 * fVar10 + fVar8 * (fVar4 - 1.0));
      in_ECX[4] = (int)(fVar7 * fVar7 * fVar7);
      return;
    }
    fVar9 = 3.0 - fVar4;
    fVar10 = 1.0 - fVar4 * 0.5;
    fVar8 = (fVar4 - 1.0) * 0.5;
    fVar7 = (fVar9 * fVar8 + fVar4 * fVar10) * 0.33333334;
    in_ECX[1] = (int)(fVar10 * fVar10 * (2.0 - fVar4));
    in_ECX[2] = (int)(fVar7 * fVar9 + fVar4 * fVar10 * fVar10);
    in_ECX[3] = (int)(fVar8 * fVar8 * fVar9 + fVar7 * fVar4);
    in_ECX[4] = (int)((fVar4 - 1.0) * fVar8 * fVar8);
    return;
  }
  if (iVar6 != 5) {
    if (iVar6 == 4) {
      fVar7 = 1.0 - fVar4;
      in_ECX[1] = (int)(fVar7 * fVar7 * fVar7);
      in_ECX[2] = (int)(fVar4 * 3.0 * fVar7 * fVar7);
      in_ECX[3] = (int)(fVar4 * fVar4 * 3.0 * fVar7);
      in_ECX[4] = (int)(fVar4 * fVar4 * fVar4);
    }
    return;
  }
  if (iVar12 != 3) {
    fVar9 = fVar4 - 1.0;
    fVar10 = 2.0 - fVar4;
    fVar8 = 1.0 - fVar4 * 0.5;
    fVar7 = fVar8 * (fVar9 + fVar4 * 0.5);
    in_ECX[1] = (int)(fVar10 * fVar8 * fVar8);
    in_ECX[2] = (int)(fVar7 * fVar10 + fVar4 * fVar8 * fVar8);
    in_ECX[3] = (int)(fVar9 * fVar9 * fVar10 + fVar7 * fVar4);
    in_ECX[4] = (int)(fVar9 * fVar9 * fVar9);
    return;
  }
  fVar10 = 1.0 - fVar4;
  fVar9 = 2.0 - fVar4;
  fVar8 = fVar4 * 0.5;
  fVar7 = (fVar10 * fVar4 + fVar9 * fVar8) * 0.5;
  in_ECX[1] = (int)(fVar10 * fVar10 * fVar10);
  in_ECX[2] = (int)(fVar7 * fVar9 + fVar4 * fVar10 * fVar10);
  in_ECX[3] = (int)(fVar8 * fVar8 * fVar9 + fVar4 * fVar7);
  in_ECX[4] = (int)(fVar8 * fVar8 * fVar4);
  return;
}



undefined4 * FUN_006e71e0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a7c044;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void thunk_FUN_0068f970(void)

{
  return;
}



void thunk_FUN_00700650(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0070065f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



void FUN_006e72b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7c044;
  FUN_00401f20(in_ECX[2]);
  FUN_00401f20(in_ECX[3]);
  FUN_0055ace0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006e72f0(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int in_ECX;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_4;
  
  local_4 = in_ECX;
  iVar3 = FUN_006e78d0();
  FUN_006e6b50(param_1,&param_1,&local_4);
  fVar1 = *(float *)(iVar3 + 4);
  pfVar5 = (float *)(*(int *)(in_ECX + 8) + (param_1 * param_3 + param_5) * 4);
  uVar8 = 0;
  if (3 < (int)param_3) {
    iVar10 = (param_3 - 4 >> 2) + 1;
    uVar8 = iVar10 * 4;
    pfVar4 = pfVar5;
    pfVar6 = (float *)(param_2 + 8);
    do {
      pfVar5 = pfVar4 + 4;
      iVar10 = iVar10 + -1;
      pfVar6[-2] = *pfVar4 * fVar1;
      pfVar6[-1] = pfVar4[1] * fVar1;
      *pfVar6 = pfVar4[2] * fVar1;
      pfVar6[1] = pfVar4[3] * fVar1;
      pfVar4 = pfVar5;
      pfVar6 = pfVar6 + 4;
    } while (iVar10 != 0);
  }
  while (uVar8 < param_3) {
    fVar2 = *pfVar5;
    uVar8 = uVar8 + 1;
    pfVar5 = pfVar5 + 1;
    *(float *)(param_2 + -4 + uVar8 * 4) = fVar2 * fVar1;
  }
  iVar10 = param_1 + 1;
  if (iVar10 <= local_4) {
    iVar9 = iVar10 - param_1;
    param_1 = (local_4 - iVar10) + 1;
    pfVar4 = (float *)(iVar3 + 4 + iVar9 * 4);
    do {
      fVar1 = *pfVar4;
      uVar8 = 0;
      if (3 < (int)param_3) {
        iVar3 = (param_3 - 4 >> 2) + 1;
        uVar8 = iVar3 * 4;
        pfVar6 = pfVar5;
        pfVar7 = (float *)(param_2 + 8);
        do {
          pfVar5 = pfVar6 + 4;
          iVar3 = iVar3 + -1;
          pfVar7[-2] = *pfVar6 * fVar1 + pfVar7[-2];
          pfVar7[-1] = pfVar6[1] * fVar1 + pfVar7[-1];
          *pfVar7 = pfVar6[2] * fVar1 + *pfVar7;
          pfVar7[1] = pfVar6[3] * fVar1 + pfVar7[1];
          pfVar6 = pfVar5;
          pfVar7 = pfVar7 + 4;
        } while (iVar3 != 0);
      }
      while (uVar8 < param_3) {
        fVar2 = *pfVar5;
        uVar8 = uVar8 + 1;
        pfVar5 = pfVar5 + 1;
        *(float *)(param_2 + -4 + uVar8 * 4) = fVar2 * fVar1 + *(float *)(param_2 + -4 + uVar8 * 4);
      }
      pfVar4 = pfVar4 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_006e7470(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float local_48 [18];
  
  fVar3 = (float)FUN_006e78d0();
  local_48[0] = fVar3;
  FUN_006e6b50(param_1,&param_4,local_48 + 1);
  FUN_00730840(*(int *)(in_ECX + 0xc) + (param_4 * param_3 + param_5) * 2,param_3 * 4,param_6,
               param_7,local_48 + 2,param_3 * 4);
  fVar1 = *(float *)((int)fVar3 + 4);
  iVar6 = 0;
  uVar9 = 0;
  if (3 < (int)param_3) {
    iVar7 = (param_3 - 4 >> 2) + 1;
    uVar9 = iVar7 * 4;
    pfVar4 = (float *)(param_2 + 8);
    iVar8 = iVar6;
    do {
      iVar6 = iVar8 + 4;
      iVar7 = iVar7 + -1;
      pfVar4[-2] = local_48[iVar8 + 2] * fVar1;
      pfVar4[-1] = local_48[iVar8 + 3] * fVar1;
      *pfVar4 = *(float *)((int)pfVar4 + (int)local_48 + (8U - param_2)) * fVar1;
      pfVar4[1] = *(float *)((int)pfVar4 + (int)local_48 + (0xcU - param_2)) * fVar1;
      pfVar4 = pfVar4 + 4;
      iVar8 = iVar6;
      fVar3 = local_48[0];
    } while (iVar7 != 0);
  }
  while (uVar9 < param_3) {
    uVar2 = iVar6 + 2;
    uVar9 = uVar9 + 1;
    iVar6 = iVar6 + 1;
    *(float *)(param_2 + -4 + uVar9 * 4) = local_48[uVar2] * fVar1;
  }
  iVar8 = param_4 + 1;
  if (iVar8 <= (int)local_48[1]) {
    iVar7 = iVar8 - param_4;
    param_4 = ((int)local_48[1] - iVar8) + 1;
    pfVar4 = (float *)((int)fVar3 + 4 + iVar7 * 4);
    do {
      fVar1 = *pfVar4;
      uVar9 = 0;
      if (3 < (int)param_3) {
        iVar7 = (param_3 - 4 >> 2) + 1;
        uVar9 = iVar7 * 4;
        pfVar5 = (float *)(param_2 + 8);
        iVar8 = iVar6;
        do {
          iVar6 = iVar8 + 4;
          iVar7 = iVar7 + -1;
          pfVar5[-2] = local_48[iVar8 + 2] * fVar1 + pfVar5[-2];
          pfVar5[-1] = local_48[iVar8 + 3] * fVar1 + pfVar5[-1];
          *pfVar5 = local_48[iVar6] * fVar1 + *pfVar5;
          pfVar5[1] = local_48[iVar8 + 5] * fVar1 + pfVar5[1];
          pfVar5 = pfVar5 + 4;
          iVar8 = iVar6;
        } while (iVar7 != 0);
      }
      while (uVar9 < param_3) {
        uVar2 = iVar6 + 2;
        uVar9 = uVar9 + 1;
        iVar6 = iVar6 + 1;
        *(float *)(param_2 + -4 + uVar9 * 4) =
             local_48[uVar2] * fVar1 + *(float *)(param_2 + -4 + uVar9 * 4);
      }
      pfVar4 = pfVar4 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_006e7740(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_0068f970(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))
            (*(int *)(iVar2 + 0x220),(int *)(in_ECX + 0x10),4,&param_1,1);
  iVar1 = *(int *)(in_ECX + 0x10);
  if (iVar1 != 0) {
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))
              (*(int *)(iVar2 + 0x220),*(undefined4 *)(in_ECX + 8),iVar1 * 4,&param_1,1);
  }
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))
            (*(int *)(iVar2 + 0x220),(int *)(in_ECX + 0x14),4,&param_1,1);
  iVar1 = *(int *)(in_ECX + 0x14);
  if (iVar1 != 0) {
    param_1 = 2;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))
              (*(int *)(iVar2 + 0x220),*(undefined4 *)(in_ECX + 0xc),iVar1 * 2,&param_1,1);
  }
  return;
}



int FUN_006e78d0(void)

{
  int in_ECX;
  
  return in_ECX + 8;
}



undefined4 * FUN_006e78f0(undefined4 param_1)

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
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x28,uVar1);
  local_4 = 0;
  puVar4 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a7c0cc;
    puVar2[7] = 0xbf800000;
    puVar2[2] = 0;
    puVar2[8] = 0;
    puVar2[9] = 3;
    puVar4 = puVar2;
  }
  local_4 = 0xffffffff;
  FUN_00700770(puVar4,param_1);
  puVar2 = (undefined4 *)(in_ECX + 8);
  puVar5 = puVar4 + 2;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



undefined4 * FUN_006e7990(void)

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
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a7c0cc;
    puVar2[7] = 0xbf800000;
    puVar2[2] = 0;
    puVar2[8] = 0;
    puVar2[9] = 3;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006e7a50(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7c0cc;
  FUN_0055ace0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006e7b00(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007009a0(param_1);
  param_1 = FUN_0070f910(DAT_00b3e728);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006e7b90(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7da8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_006ec250(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_006e7c20(float param_1,undefined4 param_2,undefined1 *param_3)

{
  float fVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char extraout_AL;
  undefined4 in_EAX;
  undefined3 extraout_var;
  int iVar7;
  undefined3 uVar8;
  uint3 uVar9;
  int in_ECX;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  bool bVar13;
  char local_b;
  
  fVar1 = *(float *)(in_ECX + 8);
  if (param_1 == fVar1) {
    if (*(char *)(in_ECX + 0xc) != '\x02') {
      *param_3 = *(char *)(in_ECX + 0xc) != '\0';
      return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),
                                      (ushort)(param_1 < fVar1) << 8 |
                                      (ushort)(NAN(param_1) || NAN(fVar1)) << 10 |
                                      (ushort)(param_1 == fVar1) << 0xe) >> 8),1);
    }
    *param_3 = 0;
    return (uint)param_3 & 0xffffff00;
  }
  iVar7 = *(int *)(in_ECX + 0x10);
  if (iVar7 != 0) {
    bVar2 = *(byte *)(iVar7 + 0x14);
    uVar3 = *(undefined4 *)(iVar7 + 0x10);
    iVar4 = *(int *)(iVar7 + 0xc);
    uVar11 = *(uint *)(iVar7 + 8);
    if (uVar11 != 0) {
      *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x14);
      FUN_006bdba0(param_1,iVar4,uVar3,uVar11,(uint *)(in_ECX + 0x14),bVar2);
      uVar5 = *(uint *)(in_ECX + 0x14);
      uVar8 = extraout_var;
      local_b = extraout_AL;
      if (extraout_AL == *(char *)(in_ECX + 0x1c)) {
        uVar6 = *(uint *)(in_ECX + 0x18);
        bVar13 = extraout_AL == '\0';
        if ((uVar6 == uVar5) || (uVar10 = uVar6 + 1, uVar10 <= uVar5)) {
          while (uVar6 = uVar6 + 1, local_b = extraout_AL, uVar6 < uVar5) {
            local_b = extraout_AL;
            if ((uVar11 <= uVar6) ||
               (local_b = bVar13, (bool)*(char *)(bVar2 * uVar6 + 4 + iVar4) == bVar13)) break;
          }
        }
        else {
          if (uVar10 < uVar11) {
            iVar7 = bVar2 * uVar10;
            pcVar12 = (char *)(iVar7 + 4 + iVar4);
            uVar8 = (undefined3)((uint)iVar7 >> 8);
            do {
              local_b = bVar13;
              if ((bool)*pcVar12 == bVar13) goto LAB_006e7d55;
              uVar10 = uVar10 + 1;
              pcVar12 = pcVar12 + bVar2;
            } while (uVar10 < uVar11);
          }
          local_b = extraout_AL;
          if (((bool)extraout_AL != bVar13) && (uVar11 = 0, local_b = extraout_AL, uVar5 != 0)) {
            pcVar12 = (char *)(iVar4 + 4);
            do {
              local_b = bVar13;
              if ((bool)*pcVar12 == bVar13) break;
              uVar11 = uVar11 + 1;
              pcVar12 = pcVar12 + bVar2;
              local_b = extraout_AL;
            } while (uVar11 < uVar5);
          }
        }
      }
LAB_006e7d55:
      iVar7 = CONCAT31(uVar8,local_b != '\0');
      *(bool *)(in_ECX + 0xc) = local_b != '\0';
      *(char *)(in_ECX + 0x1c) = extraout_AL;
    }
  }
  uVar9 = (uint3)((uint)iVar7 >> 8);
  if (*(char *)(in_ECX + 0xc) != '\x02') {
    *param_3 = *(char *)(in_ECX + 0xc) != '\0';
    *(float *)(in_ECX + 8) = param_1;
    return CONCAT31(uVar9,1);
  }
  *param_3 = 0;
  return (uint)uVar9 << 8;
}



void FUN_006e7db0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_006e7f50(param_1);
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 7) = 0;
  *in_ECX = &PTR_FUN_00a7c11c;
  return;
}



undefined4 * FUN_006e7de0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x20,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006e7f50(0);
    *puVar2 = &PTR_FUN_00a7c11c;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 7) = 0;
  }
  local_4 = 0xffffffff;
  FUN_006e82f0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_006e7e70(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x20,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006e7f50(0);
    *puVar2 = &PTR_FUN_00a7c11c;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 7) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006e7ef0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006e8620(param_1);
  param_1 = FUN_0070f910(DAT_00b3e7a0);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006e7f50(int param_1)

{
  undefined4 *in_ECX;
  
  FUN_006ec220();
  *in_ECX = &PTR_FUN_00a7c1d4;
  *(undefined1 *)(in_ECX + 3) = 2;
  in_ECX[4] = param_1;
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  in_ECX[5] = 0;
  return;
}



void FUN_006e7fa0(undefined1 param_1)

{
  undefined4 *in_ECX;
  
  FUN_006ec220();
  *(undefined1 *)(in_ECX + 3) = param_1;
  *in_ECX = &PTR_FUN_00a7c1d4;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  return;
}



void FUN_006e8000(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  LONG LVar5;
  int in_ECX;
  uint uVar6;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x10);
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  uVar3 = puVar2[2];
  if (uVar3 != 0) {
    cVar1 = *(char *)(puVar2[3] + 4);
    if (uVar3 != 1) {
      if ((puVar2[4] != 1) && (puVar2[4] != 5)) {
        return;
      }
      bVar4 = true;
      uVar6 = 1;
      while (uVar6 < uVar3) {
        if (*(char *)(puVar2[3] + 4 + *(byte *)(puVar2 + 5) * uVar6) != cVar1) {
          bVar4 = false;
        }
        uVar6 = uVar6 + 1;
        if (!bVar4) {
          return;
        }
      }
      if (!bVar4) {
        return;
      }
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x10);
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(in_ECX + 0x10) = 0;
    }
    *(char *)(in_ECX + 0xc) = cVar1;
    return;
  }
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  *(undefined1 *)(in_ECX + 0xc) = 2;
  return;
}



void FUN_006e80f0(undefined1 param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined1 *)(in_ECX + 0xc) = param_1;
    return;
  }
  *(undefined1 *)(in_ECX + 0xc) = param_1;
  return;
}



int FUN_006e8170(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c80f8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_006eba60(param_1,param_2);
  if (*(int *)(in_ECX + 0x10) != 0) {
    FUN_006e8920(&param_2,param_1,param_2);
    local_4 = 0;
    FUN_0070bd60(param_2);
    puVar1 = param_2;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    local_4 = 0xffffffff;
    if (((param_2 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_2 + 1), LVar4 == 0))
       && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



void FUN_006e82f0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  
  thunk_FUN_00700770(param_1,param_2);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(in_ECX + 0xc);
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 == *(undefined4 **)(in_ECX + 0x10)) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
    return;
  }
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x10);
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 4));
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
  return;
}



undefined4 * FUN_006e8370(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ec220();
    *puVar2 = &PTR_FUN_00a7c1d4;
    *(undefined1 *)(puVar2 + 3) = 2;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined1 FUN_006e8400(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = thunk_FUN_00700650(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(int **)(in_ECX + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x10) + 0x24))(param_1);
  }
  return 1;
}



int FUN_006e8430(int param_1)

{
  int *piVar1;
  char extraout_AL;
  char extraout_AL_00;
  uint3 extraout_var;
  uint3 uVar2;
  uint3 extraout_var_00;
  int in_ECX;
  
  thunk_FUN_00700670(param_1);
  uVar2 = extraout_var;
  if ((extraout_AL == '\0') || (*(char *)(in_ECX + 0xc) != *(char *)(param_1 + 0xc)))
  goto LAB_006e8442;
  piVar1 = *(int **)(in_ECX + 0x10);
  if (piVar1 == (int *)0x0) {
LAB_006e8462:
    if (*(int *)(param_1 + 0x10) != 0) goto LAB_006e8442;
    if (piVar1 == (int *)0x0) goto LAB_006e847b;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) goto LAB_006e8442;
    if (piVar1 == (int *)0x0) goto LAB_006e8462;
  }
  (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(param_1 + 0x10));
  uVar2 = extraout_var_00;
  if (extraout_AL_00 != '\0') {
LAB_006e847b:
    return CONCAT31(uVar2,1);
  }
LAB_006e8442:
  return (uint)uVar2 << 8;
}



void FUN_006e8490(byte param_1)

{
  FUN_006e7b90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_006e84b0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ec220();
    *puVar2 = &PTR_FUN_00a7c1d4;
    *(undefined1 *)(puVar2 + 3) = 2;
    puVar2[4] = 0;
    puVar2[5] = 0;
  }
  local_4 = 0xffffffff;
  FUN_006e82f0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006e8550(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  
  iVar2 = param_1;
  thunk_FUN_007008a0(param_1);
  param_1 = 1;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0xc,1,&param_1,1);
  puVar3 = (undefined4 *)FUN_00712a90();
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x10) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  return;
}



void FUN_006e85d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = param_1;
  thunk_FUN_0068f970(param_1);
  iVar1 = piVar2[0x88];
  param_1 = (int *)0x1;
  (**(code **)(iVar1 + 8))(iVar1,in_ECX + 0xc,1,&param_1,1);
  (**(code **)(*piVar2 + 0x2c))(*(undefined4 *)(in_ECX + 0x10));
  return;
}



void FUN_006e8620(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ec460(param_1);
  param_1 = FUN_0070f910(DAT_00b3e7e8);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fa00("m_bBoolValue",*(undefined1 *)(in_ECX + 0xc));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_spBoolData",*(undefined4 *)(in_ECX + 0x10));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006e8700(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(in_ECX + 0xc);
  FUN_006d3540(5,*(undefined4 *)(in_ECX + 0x10),&local_4,in_ECX + 8,param_1,param_2);
  *(undefined4 *)(in_ECX + 0xc) = local_4;
  return;
}



undefined4 * FUN_006e8740(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a7c2ac;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 FUN_006e87c0(int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  cVar2 = FUN_00700670(param_1);
  if ((((cVar2 != '\0') && (*(int *)(in_ECX + 8) == *(int *)(param_1 + 8))) &&
      (*(int *)(in_ECX + 0x10) == *(int *)(param_1 + 0x10))) &&
     (*(char *)(in_ECX + 0x14) == *(char *)(param_1 + 0x14))) {
    pcVar1 = *(code **)(&DAT_00b3d518 + *(int *)(in_ECX + 0x10) * 4);
    uVar4 = 0;
    if (*(int *)(in_ECX + 8) != 0) {
      do {
        iVar3 = *(byte *)(in_ECX + 0x14) * uVar4;
        cVar2 = (*pcVar1)(*(int *)(in_ECX + 0xc) + iVar3,*(int *)(param_1 + 0xc) + iVar3);
        if (cVar2 == '\0') {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(in_ECX + 8));
    }
    return 1;
  }
  return 0;
}



void FUN_006e8840(void)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca4b8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7c2ac;
  pvVar1 = (void *)in_ECX[3];
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,8,*(int *)((int)pvVar1 + -4),FUN_0060d0a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_0055ace0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006e88c0(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    (**(code **)(&DAT_00b3d340 + *(int *)(in_ECX + 0x10) * 4))(*(int *)(in_ECX + 0xc));
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = (&DAT_00b3d406)[param_3];
    *(int *)(in_ECX + 0xc) = param_1;
    *(undefined1 *)(in_ECX + 0x14) = uVar1;
    *(int *)(in_ECX + 8) = param_2;
    *(int *)(in_ECX + 0x10) = param_3;
    return;
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined1 *)(in_ECX + 0x14) = 0;
  return;
}



int * FUN_006e8920(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8139;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  local_14 = 0;
  piVar3 = (int *)FUN_00700790(&local_10);
  iVar1 = *piVar3;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  local_4 = 0;
  local_14 = 1;
  if (local_10 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(local_10 + 1);
    if ((LVar4 == 0) && (local_10 != (undefined4 *)0x0)) {
      (**(code **)*local_10)(1,uVar2);
    }
  }
  if (*(int *)(in_ECX + 8) != 0) {
    local_18 = 0;
    local_1c = 0;
    FUN_006d3210(5,*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0xc),*(int *)(in_ECX + 8)
                 ,param_2,param_3,&local_18,&local_1c);
    FUN_006e88c0(local_18,local_1c,*(undefined4 *)(in_ECX + 0x10));
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_006e8a10(byte param_1)

{
  FUN_006e8840();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006e8a30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined4 local_8;
  int iStack_4;
  
  iVar1 = param_1;
  FUN_007008a0(param_1);
  local_8 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,4,&local_8,1);
  if (param_1 != 0) {
    iVar3 = 5;
    if (0xa010067 < *(uint *)(iVar1 + 0xd8)) {
      local_8 = 4;
      (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&iStack_4,4,&local_8,1);
      iVar3 = iStack_4;
    }
    *(undefined *)(in_ECX + 0x14) = (&DAT_00b3d406)[iVar3];
    uVar2 = (**(code **)(&DAT_00b3d100 + iVar3 * 4))(iVar1,param_1);
    (**(code **)(&DAT_00b3d488 + iVar3 * 4))(uVar2,param_1,*(undefined1 *)(in_ECX + 0x14));
    FUN_006e88c0(uVar2,param_1,iVar3);
  }
  return;
}



void FUN_006e8af0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_0068f970(param_1);
  piVar1 = (int *)(in_ECX + 8);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),piVar1,4,&param_1,1);
  if (*piVar1 != 0) {
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))
              (*(int *)(iVar2 + 0x220),(int *)(in_ECX + 0x10),4,&param_1,1);
    (**(code **)(&DAT_00b3d638 + *(int *)(in_ECX + 0x10) * 4))
              (iVar2,*(undefined4 *)(in_ECX + 0xc),*piVar1);
  }
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a7c2fc;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a7c304;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_006e8ca0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  
  if (param_1 != in_ECX[1]) {
    if (param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 4));
      uVar2 = 0;
      if (in_ECX[2] != 0) {
        do {
          *(undefined4 *)(iVar1 + uVar2 * 4) = *(undefined4 *)(*in_ECX + uVar2 * 4);
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)in_ECX[2]);
      }
    }
    FUN_00401f20(*in_ECX);
    *in_ECX = iVar1;
    in_ECX[1] = param_1;
  }
  return;
}



void FUN_006e8d00(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c817e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00715990(uVar1);
  *in_ECX = &PTR_FUN_00a7c30c;
  in_ECX[0xf] = 0xffffffff;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = &PTR__scalar_deleting_destructor__00a7c2fc;
  *(undefined2 *)(in_ECX + 0x13) = 0;
  *(undefined2 *)((int)in_ECX + 0x52) = 1;
  *(undefined2 *)((int)in_ECX + 0x4e) = 0;
  *(undefined2 *)(in_ECX + 0x14) = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x15] = &PTR__scalar_deleting_destructor__00a7c304;
  *(undefined2 *)(in_ECX + 0x17) = 0;
  *(undefined2 *)((int)in_ECX + 0x62) = 1;
  *(undefined2 *)((int)in_ECX + 0x5e) = 0;
  *(undefined2 *)(in_ECX + 0x18) = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_006e8dd0(uint param_1)

{
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  LONG LVar7;
  int in_ECX;
  uint uVar8;
  uint uVar9;
  uint local_4;
  
  uVar9 = *(uint *)(in_ECX + 0x40);
  if (((uVar9 != 0) && (*(uint *)(in_ECX + 0x3c) != param_1)) &&
     ((param_1 == 0xffffffff || ((-1 < (int)param_1 && (param_1 < uVar9)))))) {
    uVar9 = 0;
    bVar6 = false;
    if (*(short *)(in_ECX + 0x4e) != 0) {
      do {
        piVar2 = *(int **)(*(int *)(in_ECX + 0x48) + uVar9 * 4);
        if (piVar2 != (int *)0x0) {
          if (uVar9 == param_1) {
            bVar6 = true;
          }
          uVar8 = 0;
          if (piVar2[2] != 0) {
            do {
              iVar3 = *(int *)(*piVar2 + uVar8 * 4);
              if (bVar6) {
                puVar1 = (ushort *)(iVar3 + 0x18);
                *puVar1 = *puVar1 | 2;
              }
              else {
                puVar1 = (ushort *)(iVar3 + 0x18);
                *puVar1 = *puVar1 & 0xfffd;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < (uint)piVar2[2]);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ushort *)(in_ECX + 0x4e));
    }
    uVar9 = 0;
    if (*(int *)(in_ECX + 0x6c) != 0) {
      do {
        iVar3 = *(int *)(*(int *)(in_ECX + 100) + uVar9 * 4);
        uVar9 = uVar9 + 1;
        *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xfffd | 1;
      } while (uVar9 < *(uint *)(in_ECX + 0x6c));
    }
    if (param_1 != 0xffffffff) {
      uVar9 = *(uint *)(in_ECX + 0x58);
      piVar2 = *(int **)(uVar9 + param_1 * 4);
      if (piVar2 != (int *)0x0) {
        uVar9 = 0;
        local_4 = 0;
        if (piVar2[2] != 0) {
          do {
            iVar3 = **(int **)(*piVar2 + local_4 * 4);
            *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xfffe | 2;
            puVar4 = *(undefined4 **)(*(int *)(*piVar2 + local_4 * 4) + 4);
            puVar5 = *(undefined4 **)(iVar3 + 0xb8);
            if (puVar5 != puVar4) {
              if (((puVar5 != (undefined4 *)0x0) &&
                  (LVar7 = InterlockedDecrement(puVar5 + 1), LVar7 == 0)) &&
                 (puVar5 != (undefined4 *)0x0)) {
                (**(code **)*puVar5)(1);
              }
              *(undefined4 **)(iVar3 + 0xb8) = puVar4;
              if (puVar4 != (undefined4 *)0x0) {
                InterlockedIncrement(puVar4 + 1);
              }
            }
            uVar9 = local_4 + 1;
            local_4 = uVar9;
          } while (uVar9 < (uint)piVar2[2]);
        }
      }
    }
    *(uint *)(in_ECX + 0x3c) = param_1;
    return CONCAT31((int3)(uVar9 >> 8),1);
  }
  return uVar9 & 0xffffff00;
}



int FUN_006e8f40(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x70,uVar1);
  iVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_006e8d00();
  }
  local_4 = 0xffffffff;
  FUN_00715d80(iVar3,param_1);
  *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(in_ECX + 0x40);
  *unaff_FS_OFFSET = local_c;
  return iVar3;
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
  local_10 = FUN_00401f00(0x70,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006e8d00();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006e90a0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  int in_ECX;
  uint uVar7;
  uint uVar8;
  uint local_c;
  uint local_4;
  
  FUN_00715e70(param_1);
  uVar7 = 0;
  if (*(short *)(in_ECX + 0x4e) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x48) + uVar7 * 4);
      if ((piVar1 != (int *)0x0) && (uVar8 = 0, piVar1[2] != 0)) {
        do {
          uVar4 = FUN_007124a0();
          if (uVar8 < (uint)piVar1[2]) {
            *(undefined4 *)(*piVar1 + uVar8 * 4) = uVar4;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)piVar1[2]);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)(in_ECX + 0x4e));
  }
  local_4 = 0;
  if (*(short *)(in_ECX + 0x5e) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x58) + local_4 * 4);
      if ((piVar1 != (int *)0x0) && (local_c = 0, piVar1[2] != 0)) {
        do {
          puVar2 = *(undefined4 **)(*piVar1 + local_c * 4);
          uVar4 = FUN_007124a0();
          *puVar2 = uVar4;
          puVar5 = (undefined4 *)FUN_007124a0();
          puVar3 = (undefined4 *)puVar2[1];
          if (puVar3 != puVar5) {
            if (((puVar3 != (undefined4 *)0x0) &&
                (LVar6 = InterlockedDecrement(puVar3 + 1), LVar6 == 0)) &&
               (puVar3 != (undefined4 *)0x0)) {
              (**(code **)*puVar3)(1);
            }
            puVar2[1] = puVar5;
            if (puVar5 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar5 + 1);
            }
          }
          local_c = local_c + 1;
        } while (local_c < (uint)piVar1[2]);
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(ushort *)(in_ECX + 0x5e));
  }
  uVar7 = 0;
  if (*(int *)(in_ECX + 0x6c) != 0) {
    do {
      uVar4 = FUN_007124a0();
      if (uVar7 < *(uint *)(in_ECX + 0x6c)) {
        *(undefined4 *)(*(int *)(in_ECX + 100) + uVar7 * 4) = uVar4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(in_ECX + 0x6c));
  }
  return;
}



undefined4 FUN_006e9220(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int in_ECX;
  uint uVar6;
  uint local_c;
  
  cVar5 = FUN_00715820(param_1);
  if ((((cVar5 == '\0') || (*(int *)(in_ECX + 0x3c) != *(int *)(param_1 + 0x3c))) ||
      (*(int *)(in_ECX + 0x40) != *(int *)(param_1 + 0x40))) ||
     (((*(short *)(in_ECX + 0x4e) != *(short *)(param_1 + 0x4e) ||
       (*(short *)(in_ECX + 0x5e) != *(short *)(param_1 + 0x5e))) ||
      (*(int *)(in_ECX + 0x6c) != *(int *)(param_1 + 0x6c))))) {
    return 0;
  }
  local_c = 0;
  if (*(short *)(in_ECX + 0x4e) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x48) + local_c * 4);
      piVar2 = *(int **)(*(int *)(param_1 + 0x48) + local_c * 4);
      if (piVar1 == (int *)0x0) {
        if (piVar2 != (int *)0x0) {
          return 0;
        }
      }
      else {
        if (piVar2 == (int *)0x0) {
          return 0;
        }
        if (piVar1[2] != piVar2[2]) {
          return 0;
        }
        if (piVar1[2] != 0) {
          uVar6 = 0;
          do {
            cVar5 = (**(code **)(**(int **)(uVar6 * 4 + *piVar1) + 0x2c))
                              (*(undefined4 *)(*piVar2 + uVar6 * 4));
            if (cVar5 == '\0') {
              return 0;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)piVar1[2]);
        }
      }
      local_c = local_c + 1;
    } while (local_c < *(ushort *)(in_ECX + 0x4e));
  }
  local_c = 0;
  if (*(short *)(in_ECX + 0x5e) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x58) + local_c * 4);
      piVar2 = *(int **)(*(int *)(param_1 + 0x58) + local_c * 4);
      if (piVar1 == (int *)0x0) {
        if (piVar2 != (int *)0x0) {
          return 0;
        }
      }
      else {
        if (piVar2 == (int *)0x0) {
          return 0;
        }
        if (piVar1[2] != piVar2[2]) {
          return 0;
        }
        uVar6 = 0;
        if (piVar1[2] != 0) {
          do {
            puVar3 = *(undefined4 **)(*piVar1 + uVar6 * 4);
            puVar4 = *(undefined4 **)(*piVar2 + uVar6 * 4);
            cVar5 = (**(code **)(*(int *)*puVar3 + 0x2c))(*puVar4);
            if (cVar5 == '\0') {
              return 0;
            }
            cVar5 = (**(code **)(*(int *)puVar3[1] + 0x2c))(puVar4[1]);
            if (cVar5 == '\0') {
              return 0;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)piVar1[2]);
        }
      }
      local_c = local_c + 1;
    } while (local_c < *(ushort *)(in_ECX + 0x5e));
  }
  uVar6 = 0;
  if (*(int *)(in_ECX + 0x6c) != 0) {
    do {
      cVar5 = (**(code **)(**(int **)(uVar6 * 4 + *(int *)(in_ECX + 100)) + 0x2c))
                        (*(undefined4 *)(*(int *)(param_1 + 100) + uVar6 * 4));
      if (cVar5 == '\0') {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(in_ECX + 0x6c));
  }
  return 1;
}



void FUN_006e9410(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  LONG LVar11;
  int in_ECX;
  int *piVar12;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  uint local_28;
  undefined4 *local_20;
  undefined4 *puStack_1c;
  int *local_18;
  undefined4 *local_14;
  int *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c81b6;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00715e40(param_1);
  FUN_0055e000(in_ECX,&local_20);
  local_28 = 0;
  if (*(short *)(in_ECX + 0x4e) != 0) {
    local_14 = local_20 + 0x11;
    do {
      piVar8 = *(int **)(*(int *)(in_ECX + 0x48) + local_28 * 4);
      if (piVar8 == (int *)0x0) {
        local_10 = (int *)0x0;
        if (*(ushort *)(local_14 + 2) <= local_28) {
          FUN_004e4a10(*(ushort *)((int)local_14 + 0xe) + local_28);
        }
        FUN_0042bb90(local_28,&local_10);
      }
      else {
        local_10 = piVar8;
        piVar6 = (int *)FUN_00401f00(0xc,uVar5);
        piVar12 = (int *)0x0;
        if (piVar6 != (int *)0x0) {
          *piVar6 = 0;
          piVar6[1] = 0;
          piVar6[2] = 0;
          piVar12 = piVar6;
        }
        local_4 = 0xffffffff;
        local_18 = piVar12;
        if (*(ushort *)(local_14 + 2) <= local_28) {
          FUN_004e4a10(*(ushort *)((int)local_14 + 0xe) + local_28);
        }
        FUN_0042bb90(local_28,&local_18);
        local_18 = (int *)0x0;
        if (piVar8[2] != 0) {
          do {
            uVar1 = *(undefined4 *)(*local_10 + (int)local_18 * 4);
            piVar8 = (int *)*param_1;
            iVar7 = (**(code **)(*piVar8 + 4))(uVar1);
            for (puVar2 = *(undefined4 **)(piVar8[2] + iVar7 * 4); puVar2 != (undefined4 *)0x0;
                puVar2 = (undefined4 *)*puVar2) {
              cVar4 = (**(code **)(*piVar8 + 8))(uVar1,puVar2[1]);
              if (cVar4 != '\0') {
                iVar7 = piVar12[1];
                uVar1 = puVar2[2];
                if (piVar12[2] == iVar7) {
                  if (iVar7 == 0) {
                    iVar7 = 1;
                  }
                  else {
                    iVar7 = iVar7 * 2;
                  }
                  FUN_006e8ca0(iVar7);
                }
                *(undefined4 *)(*piVar12 + piVar12[2] * 4) = uVar1;
                goto LAB_006e957e;
              }
            }
            iVar7 = piVar12[1];
            if (piVar12[2] == iVar7) {
              if (iVar7 == 0) {
                iVar7 = 1;
              }
              else {
                iVar7 = iVar7 * 2;
              }
              FUN_006e8ca0(iVar7);
            }
            *(undefined4 *)(*piVar12 + piVar12[2] * 4) = uVar1;
LAB_006e957e:
            piVar12[2] = piVar12[2] + 1;
            local_18 = (int *)((int)local_18 + 1);
          } while (local_18 < (int *)local_10[2]);
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < *(ushort *)(in_ECX + 0x4e));
  }
  local_28 = 0;
  if (*(short *)(in_ECX + 0x5e) != 0) {
    do {
      puVar2 = local_20;
      local_10 = *(int **)(*(int *)(in_ECX + 0x58) + local_28 * 4);
      if (local_10 == (int *)0x0) {
        if (*(ushort *)(local_20 + 0x17) <= local_28) {
          FUN_004e4a10(*(ushort *)((int)local_20 + 0x62) + local_28);
        }
        if (local_28 < *(ushort *)((int)puVar2 + 0x5e)) {
          if (*(int *)(puVar2[0x16] + local_28 * 4) != 0) {
            *(short *)(puVar2 + 0x18) = *(short *)(puVar2 + 0x18) + -1;
          }
        }
        else {
          *(short *)((int)puVar2 + 0x5e) = (short)local_28 + 1;
        }
        *(undefined4 *)(puVar2[0x16] + local_28 * 4) = 0;
      }
      else {
        piVar8 = (int *)FUN_00401f00(0xc,uVar5);
        puVar2 = local_20;
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          *piVar8 = 0;
          piVar8[1] = 0;
          piVar8[2] = 0;
        }
        local_4 = 0xffffffff;
        if (*(ushort *)(local_20 + 0x17) <= local_28) {
          FUN_004e4a10(*(ushort *)((int)local_20 + 0x62) + local_28);
        }
        if (local_28 < *(ushort *)((int)puVar2 + 0x5e)) {
          if (piVar8 == (int *)0x0) {
            if (*(int *)(puVar2[0x16] + local_28 * 4) != 0) {
              *(short *)(puVar2 + 0x18) = *(short *)(puVar2 + 0x18) + -1;
            }
          }
          else if (*(int *)(puVar2[0x16] + local_28 * 4) == 0) {
            *(short *)(puVar2 + 0x18) = *(short *)(puVar2 + 0x18) + 1;
          }
        }
        else {
          *(short *)((int)puVar2 + 0x5e) = (short)local_28 + 1;
          if (piVar8 != (int *)0x0) {
            *(short *)(puVar2 + 0x18) = *(short *)(puVar2 + 0x18) + 1;
          }
        }
        *(int **)(puVar2[0x16] + local_28 * 4) = piVar8;
        local_14 = (undefined4 *)0x0;
        if (local_10[2] != 0) {
          do {
            local_18 = *(int **)(*local_10 + (int)local_14 * 4);
            puStack_1c = (undefined4 *)FUN_00401f00(8);
            if (puStack_1c == (undefined4 *)0x0) {
              puStack_1c = (undefined4 *)0x0;
            }
            else {
              puStack_1c[1] = 0;
            }
            iVar7 = piVar8[1];
            if (piVar8[2] == iVar7) {
              if (iVar7 == 0) {
                iVar7 = 1;
              }
              else {
                iVar7 = iVar7 * 2;
              }
              FUN_006e8ca0(iVar7);
            }
            *(undefined4 **)(*piVar8 + piVar8[2] * 4) = puStack_1c;
            piVar8[2] = piVar8[2] + 1;
            piVar12 = (int *)*param_1;
            iVar7 = *local_18;
            iVar9 = (**(code **)(*piVar12 + 4))(iVar7);
            for (puVar2 = *(undefined4 **)(piVar12[2] + iVar9 * 4); puVar2 != (undefined4 *)0x0;
                puVar2 = (undefined4 *)*puVar2) {
              cVar4 = (**(code **)(*piVar12 + 8))(iVar7,puVar2[1]);
              if (cVar4 != '\0') {
                *local_20 = puVar2[2];
                goto LAB_006e975b;
              }
            }
            *local_20 = *puStack_1c;
LAB_006e975b:
            puVar3 = local_20;
            puVar10 = (undefined4 *)(**(code **)(*(int *)puStack_1c[1] + 0x18))(unaff_retaddr);
            puVar2 = (undefined4 *)puVar3[1];
            if (puVar2 != puVar10) {
              if (((puVar2 != (undefined4 *)0x0) &&
                  (LVar11 = InterlockedDecrement(puVar2 + 1), LVar11 == 0)) &&
                 (puVar2 != (undefined4 *)0x0)) {
                (**(code **)*puVar2)(1);
              }
              puVar3[1] = puVar10;
              if (puVar10 != (undefined4 *)0x0) {
                InterlockedIncrement(puVar10 + 1);
              }
            }
            (**(code **)(*(int *)local_20[1] + 0x38))(local_4);
            local_14 = (undefined4 *)((int)local_14 + 1);
          } while (local_14 < (undefined4 *)local_10[2]);
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < *(ushort *)(in_ECX + 0x5e));
  }
  puVar2 = local_20;
  local_28 = 0;
  if (*(int *)(in_ECX + 0x6c) != 0) {
    piVar8 = local_20 + 0x19;
    do {
      piVar12 = (int *)*param_1;
      uVar1 = *(undefined4 *)(*(int *)(in_ECX + 100) + local_28 * 4);
      iVar7 = (**(code **)(*piVar12 + 4))(uVar1);
      for (puVar3 = *(undefined4 **)(piVar12[2] + iVar7 * 4); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        cVar4 = (**(code **)(*piVar12 + 8))(uVar1,puVar3[1]);
        if (cVar4 != '\0') {
          iVar7 = puVar2[0x1a];
          uVar1 = puVar3[2];
          if (puVar2[0x1b] == iVar7) {
            if (iVar7 == 0) {
              iVar7 = 1;
            }
            else {
              iVar7 = iVar7 * 2;
            }
            FUN_006e8ca0(iVar7);
          }
          *(undefined4 *)(*piVar8 + puVar2[0x1b] * 4) = uVar1;
          goto LAB_006e98f7;
        }
      }
      iVar7 = puVar2[0x1a];
      if (puVar2[0x1b] == iVar7) {
        if (iVar7 == 0) {
          iVar7 = 1;
        }
        else {
          iVar7 = iVar7 * 2;
        }
        FUN_006e8ca0(iVar7);
      }
      *(undefined4 *)(*piVar8 + puVar2[0x1b] * 4) = uVar1;
LAB_006e98f7:
      puVar2[0x1b] = puVar2[0x1b] + 1;
      local_28 = local_28 + 1;
    } while (local_28 < *(uint *)(in_ECX + 0x6c));
  }
  uVar1 = local_20[0xf];
  local_20[0xf] = 0xffffffff;
  FUN_006e8dd0(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006e9940(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  uint uVar4;
  uint uStack_8;
  undefined4 *puStack_4;
  
  piVar3 = param_1;
  FUN_00716050(param_1);
  param_1 = (int *)0x4;
  (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],in_ECX + 0x3c,4,&param_1,1);
  param_1 = (int *)0x4;
  (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],in_ECX + 0x40,4,&param_1,1);
  uStack_8 = (uint)*(ushort *)(in_ECX + 0x4e);
  param_1 = (int *)0x4;
  (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],&uStack_8,4,&param_1,1);
  param_1 = (int *)0x0;
  if (*(short *)(in_ECX + 0x4e) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x48) + (int)param_1 * 4);
      iVar2 = piVar3[0x88];
      if (piVar1 == (int *)0x0) {
        uStack_8 = 0;
        puStack_4 = (undefined4 *)0x4;
        (**(code **)(iVar2 + 8))(iVar2,&uStack_8,4,&puStack_4,1);
      }
      else {
        puStack_4 = (undefined4 *)piVar1[2];
        uStack_8 = 4;
        (**(code **)(iVar2 + 8))(iVar2,&puStack_4,4,&uStack_8);
        uVar4 = 0;
        if (piVar1[2] != 0) {
          do {
            (**(code **)(*piVar3 + 0x2c))(*(undefined4 *)(*piVar1 + uVar4 * 4));
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)piVar1[2]);
        }
      }
      param_1 = (int *)((int)param_1 + 1);
    } while (param_1 < (uint)*(ushort *)(in_ECX + 0x4e));
  }
  puStack_4 = (undefined4 *)(uint)*(ushort *)(in_ECX + 0x5e);
  param_1 = (int *)0x4;
  (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],&puStack_4,4,&param_1,1);
  param_1 = (int *)0x0;
  if (*(short *)(in_ECX + 0x5e) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x58) + (int)param_1 * 4);
      puStack_4 = (undefined4 *)0x4;
      if (piVar1 == (int *)0x0) {
        uStack_8 = 0;
        (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],&uStack_8,4,&puStack_4,1);
      }
      else {
        uStack_8 = piVar1[2];
        (**(code **)(piVar3[0x88] + 8))(piVar3[0x88]);
        uVar4 = 0;
        if (piVar1[2] != 0) {
          do {
            puStack_4 = *(undefined4 **)(*piVar1 + uVar4 * 4);
            (**(code **)(*piVar3 + 0x2c))(*puStack_4);
            (**(code **)(*piVar3 + 0x2c))(*(undefined4 *)(uStack_8 + 4));
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)piVar1[2]);
        }
      }
      param_1 = (int *)((int)param_1 + 1);
    } while (param_1 < (uint)*(ushort *)(in_ECX + 0x5e));
  }
  puStack_4 = *(undefined4 **)(in_ECX + 0x6c);
  param_1 = (int *)0x4;
  (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],&puStack_4,4,&param_1,1);
  uVar4 = 0;
  if (*(int *)(in_ECX + 0x6c) != 0) {
    do {
      (**(code **)(*piVar3 + 0x2c))(*(undefined4 *)(*(int *)(in_ECX + 100) + uVar4 * 4));
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(in_ECX + 0x6c));
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_006e9ba0(uint param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  int aiStack_14 [3];
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar4 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c81b6;
  aiStack_14[2] = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)(aiStack_14 + 2);
  FUN_00715f40(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar4 + 0x21c) + 4))
            (*(int *)(iVar4 + 0x21c),in_ECX + 0x3c,4,&param_1,1,uVar1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar4 + 0x21c) + 4))(*(int *)(iVar4 + 0x21c),in_ECX + 0x40,4,&param_1,1);
  uStack_20 = 0;
  param_1 = 4;
  (**(code **)(*(int *)(iVar4 + 0x21c) + 4))(*(int *)(iVar4 + 0x21c),&uStack_20,4,&param_1,1);
  param_1 = 0;
  if (uStack_20 != 0) {
    do {
      uVar1 = param_1;
      piVar2 = (int *)FUN_00401f00(0xc);
      piVar5 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        *piVar2 = 0;
        piVar2[1] = 0;
        piVar2[2] = 0;
        piVar5 = piVar2;
      }
      uStack_4 = 0xffffffff;
      if (*(ushort *)(in_ECX + 0x4c) <= uVar1) {
        FUN_004e4a10(*(ushort *)(in_ECX + 0x52) + uVar1);
      }
      if (uVar1 < *(ushort *)(in_ECX + 0x4e)) {
        if (piVar5 == (int *)0x0) {
          if (*(int *)(*(int *)(in_ECX + 0x48) + uVar1 * 4) != 0) {
            *(short *)(in_ECX + 0x50) = *(short *)(in_ECX + 0x50) + -1;
          }
        }
        else if (*(int *)(*(int *)(in_ECX + 0x48) + uVar1 * 4) == 0) {
          *(short *)(in_ECX + 0x50) = *(short *)(in_ECX + 0x50) + 1;
        }
      }
      else {
        *(short *)(in_ECX + 0x4e) = (short)uVar1 + 1;
        if (piVar5 != (int *)0x0) {
          *(short *)(in_ECX + 0x50) = *(short *)(in_ECX + 0x50) + 1;
        }
      }
      *(int **)(*(int *)(in_ECX + 0x48) + uVar1 * 4) = piVar5;
      uStack_24 = 0;
      aiStack_14[0] = 4;
      (**(code **)(*(int *)(iVar4 + 0x21c) + 4))(*(int *)(iVar4 + 0x21c),&uStack_24,4,aiStack_14,1);
      uVar1 = 0;
      if (uStack_24 != 0) {
        do {
          iVar3 = piVar5[1];
          if (piVar5[2] == iVar3) {
            if (iVar3 == 0) {
              iVar3 = 1;
            }
            else {
              iVar3 = iVar3 * 2;
            }
            FUN_006e8ca0(iVar3);
          }
          *(int *)(*piVar5 + piVar5[2] * 4) = in_ECX;
          piVar5[2] = piVar5[2] + 1;
          FUN_00712a20();
          uVar1 = uVar1 + 1;
        } while (uVar1 < uStack_24);
      }
      param_1 = param_1 + 1;
    } while (param_1 < uStack_20);
  }
  uStack_1c = 0;
  param_1 = 4;
  (**(code **)(*(int *)(iVar4 + 0x21c) + 4))(*(int *)(iVar4 + 0x21c),&uStack_1c,4,&param_1,1);
  param_1 = 0;
  if (uStack_1c != 0) {
    do {
      uVar1 = param_1;
      piVar2 = (int *)FUN_00401f00(0xc);
      piVar5 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        *piVar2 = 0;
        piVar2[1] = 0;
        piVar2[2] = 0;
        piVar5 = piVar2;
      }
      uStack_4 = 0xffffffff;
      if (*(ushort *)(in_ECX + 0x5c) <= uVar1) {
        FUN_004e4a10(*(ushort *)(in_ECX + 0x62) + uVar1);
      }
      if (uVar1 < *(ushort *)(in_ECX + 0x5e)) {
        if (piVar5 == (int *)0x0) {
          if (*(int *)(*(int *)(in_ECX + 0x58) + uVar1 * 4) != 0) {
            *(short *)(in_ECX + 0x60) = *(short *)(in_ECX + 0x60) + -1;
          }
        }
        else if (*(int *)(*(int *)(in_ECX + 0x58) + uVar1 * 4) == 0) {
          *(short *)(in_ECX + 0x60) = *(short *)(in_ECX + 0x60) + 1;
        }
      }
      else {
        *(short *)(in_ECX + 0x5e) = (short)uVar1 + 1;
        if (piVar5 != (int *)0x0) {
          *(short *)(in_ECX + 0x60) = *(short *)(in_ECX + 0x60) + 1;
        }
      }
      *(int **)(*(int *)(in_ECX + 0x58) + uVar1 * 4) = piVar5;
      uStack_24 = 0;
      aiStack_14[0] = 4;
      (**(code **)(*(int *)(iVar4 + 0x21c) + 4))(*(int *)(iVar4 + 0x21c),&uStack_24,4,aiStack_14,1);
      uVar1 = 0;
      if (uStack_24 != 0) {
        do {
          aiStack_14[0] = FUN_00401f00(8);
          if (aiStack_14[0] == 0) {
            aiStack_14[0] = 0;
          }
          else {
            *(undefined4 *)(aiStack_14[0] + 4) = 0;
          }
          iVar3 = piVar5[1];
          if (piVar5[2] == iVar3) {
            if (iVar3 == 0) {
              iVar3 = 1;
            }
            else {
              iVar3 = iVar3 * 2;
            }
            FUN_006e8ca0(iVar3);
          }
          *(int *)(*piVar5 + piVar5[2] * 4) = aiStack_14[0];
          piVar5[2] = piVar5[2] + 1;
          FUN_00712a20();
          FUN_00712a20();
          uVar1 = uVar1 + 1;
        } while (uVar1 < uStack_24);
      }
      param_1 = param_1 + 1;
    } while (param_1 < uStack_1c);
  }
  uStack_18 = 0;
  aiStack_14[1] = 4;
  (**(code **)(*(int *)(iVar4 + 0x21c) + 4))(*(int *)(iVar4 + 0x21c),&uStack_18,4,aiStack_14 + 1,1);
  uVar1 = 0;
  if (uStack_18 != 0) {
    do {
      iVar4 = *(int *)(in_ECX + 0x68);
      if (*(int *)(in_ECX + 0x6c) == iVar4) {
        if (iVar4 == 0) {
          iVar4 = 1;
        }
        else {
          iVar4 = iVar4 * 2;
        }
        FUN_006e8ca0(iVar4);
      }
      *(int *)(*(int *)(in_ECX + 100) + *(int *)(in_ECX + 0x6c) * 4) = in_ECX;
      *(int *)(in_ECX + 0x6c) = *(int *)(in_ECX + 0x6c) + 1;
      FUN_00712a20();
      uVar1 = uVar1 + 1;
    } while (uVar1 < uStack_18);
  }
  *unaff_FS_OFFSET = aiStack_14[2];
  return;
}



void FUN_006e9f60(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  LONG LVar5;
  int in_ECX;
  uint uVar6;
  uint local_8;
  uint local_4;
  
  uVar6 = 0;
  if (*(short *)(in_ECX + 0x4e) != 0) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x48) + uVar6 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00401f20(*puVar1);
        FUN_00401f20(puVar1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(in_ECX + 0x4e));
  }
  uVar4 = 0;
  if (*(short *)(in_ECX + 0x4e) != 0) {
    do {
      uVar6 = (uint)uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(*(int *)(in_ECX + 0x48) + uVar6 * 4) = 0;
    } while (uVar4 < *(ushort *)(in_ECX + 0x4e));
  }
  *(undefined2 *)(in_ECX + 0x4e) = 0;
  *(undefined2 *)(in_ECX + 0x50) = 0;
  local_4 = 0;
  if (*(short *)(in_ECX + 0x5e) != 0) {
    do {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x58) + local_4 * 4);
      if (piVar2 != (int *)0x0) {
        local_8 = 0;
        if (piVar2[2] != 0) {
          do {
            iVar3 = *(int *)(*piVar2 + local_8 * 4);
            if (iVar3 != 0) {
              puVar1 = *(undefined4 **)(iVar3 + 4);
              if (((puVar1 != (undefined4 *)0x0) &&
                  (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
                 (puVar1 != (undefined4 *)0x0)) {
                (**(code **)*puVar1)(1);
              }
              FUN_00401f20(iVar3);
            }
            local_8 = local_8 + 1;
          } while (local_8 < (uint)piVar2[2]);
        }
        FUN_00401f20(*piVar2);
        FUN_00401f20(piVar2);
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(ushort *)(in_ECX + 0x5e));
  }
  uVar4 = 0;
  if (*(short *)(in_ECX + 0x5e) != 0) {
    do {
      uVar6 = (uint)uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(*(int *)(in_ECX + 0x58) + uVar6 * 4) = 0;
    } while (uVar4 < *(ushort *)(in_ECX + 0x5e));
  }
  *(undefined2 *)(in_ECX + 0x5e) = 0;
  *(undefined2 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  return;
}



void FUN_006ea160(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8209;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7c30c;
  local_4 = 3;
  FUN_006e9f60(uVar1);
  FUN_00401f20(in_ECX[0x19]);
  in_ECX[0x15] = &PTR__scalar_deleting_destructor__00a7c304;
  FUN_00401f20(in_ECX[0x16]);
  in_ECX[0x11] = &PTR__scalar_deleting_destructor__00a7c2fc;
  FUN_00401f20(in_ECX[0x12]);
  local_4 = 0xffffffff;
  FUN_00715a70();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006ea1f0(byte param_1)

{
  FUN_006ea160();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_006ea230(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006cc4e0();
    *puVar2 = &PTR_FUN_00a7c3a4;
    puVar2[0xc] = DAT_00b3eba0;
    puVar2[0xd] = DAT_00b3eba4;
    puVar2[0xe] = DAT_00b3eba8;
    puVar2[0xf] = DAT_00b3ebac;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_006ea320(byte param_1)

{
  FUN_006ccf50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_006ea340(float param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int in_ECX;
  undefined4 *unaff_retaddr;
  
  if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
    param_1 = *(float *)(in_ECX + 0x20);
  }
  if (param_1 == -3.4028235e+38) {
    *param_3 = DAT_00b3eba0;
    param_3[1] = DAT_00b3eba4;
    param_3[2] = DAT_00b3eba8;
    param_3[3] = DAT_00b3ebac;
    *(undefined4 *)(in_ECX + 0x30) = *param_3;
    *(undefined4 *)(in_ECX + 0x34) = param_3[1];
    *(undefined4 *)(in_ECX + 0x38) = param_3[2];
    *(undefined4 *)(in_ECX + 0x3c) = param_3[3];
    return 0;
  }
  puVar1 = (undefined4 *)(in_ECX + 0x30);
  cVar2 = (**(code **)(**(int **)(in_ECX + 0x18) + 0x58))(param_1,param_2,puVar1);
  if (cVar2 == '\0') {
    *unaff_retaddr = DAT_00b3eba0;
    unaff_retaddr[1] = DAT_00b3eba4;
    unaff_retaddr[2] = DAT_00b3eba8;
    unaff_retaddr[3] = DAT_00b3ebac;
    *puVar1 = *unaff_retaddr;
    *(undefined4 *)(in_ECX + 0x34) = unaff_retaddr[1];
    *(undefined4 *)(in_ECX + 0x38) = unaff_retaddr[2];
    *(undefined4 *)(in_ECX + 0x3c) = unaff_retaddr[3];
    return 0;
  }
  *unaff_retaddr = *puVar1;
  unaff_retaddr[1] = *(undefined4 *)(in_ECX + 0x34);
  unaff_retaddr[2] = *(undefined4 *)(in_ECX + 0x38);
  unaff_retaddr[3] = *(undefined4 *)(in_ECX + 0x3c);
  return 1;
}



undefined4 FUN_006ea430(float param_1,undefined4 param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  float *pfVar7;
  int in_ECX;
  byte bVar8;
  float local_50;
  float local_4c;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  pfVar1 = (float *)(in_ECX + 0x30);
  *pfVar1 = 0.0;
  bVar8 = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  bVar5 = false;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  local_50 = 0.0;
  if (*(char *)(in_ECX + 0xd) != '\0') {
    do {
      iVar4 = (uint)bVar8 * 0x18;
      piVar3 = *(int **)(*(int *)(in_ECX + 0x14) + iVar4);
      iVar2 = *(int *)(in_ECX + 0x14) + iVar4;
      if ((((piVar3 != (int *)0x0) && (0.0 < *(float *)(iVar2 + 8))) &&
          (local_4c = param_1, piVar3 != (int *)0x0)) && (*(float *)(iVar2 + 8) != 0.0)) {
        if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
          local_4c = *(float *)(iVar2 + 0x14);
        }
        if ((local_4c != -3.4028235e+38) &&
           (cVar6 = (**(code **)(*piVar3 + 0x58))(local_4c,param_2,&local_40), cVar6 != '\0')) {
          if ((0.0 < local_50) &&
             (*(float *)(in_ECX + 0x3c) * fStack_34 +
              *(float *)(in_ECX + 0x38) * fStack_38 +
              *pfVar1 * local_40 + *(float *)(in_ECX + 0x34) * fStack_3c < 0.0)) {
            pfVar7 = (float *)FUN_00714cc0(auStack_30);
            local_40 = *pfVar7;
            fStack_3c = pfVar7[1];
            fStack_38 = pfVar7[2];
            fStack_34 = pfVar7[3];
          }
          pfVar7 = (float *)FUN_0072f930(auStack_20,
                                         *(undefined4 *)(*(int *)(in_ECX + 0x14) + 8 + iVar4));
          local_40 = *pfVar7;
          fStack_3c = pfVar7[1];
          fStack_38 = pfVar7[2];
          fStack_34 = pfVar7[3];
          pfVar7 = (float *)FUN_0072f930(auStack_10,local_50);
          *pfVar1 = *pfVar7;
          *(float *)(in_ECX + 0x34) = pfVar7[1];
          *(float *)(in_ECX + 0x38) = pfVar7[2];
          *(float *)(in_ECX + 0x3c) = pfVar7[3];
          *pfVar1 = local_40 + *pfVar1;
          *(float *)(in_ECX + 0x34) = fStack_3c + *(float *)(in_ECX + 0x34);
          *(float *)(in_ECX + 0x38) = fStack_38 + *(float *)(in_ECX + 0x38);
          *(float *)(in_ECX + 0x3c) = fStack_34 + *(float *)(in_ECX + 0x3c);
          FUN_00715340();
          bVar5 = true;
          local_50 = *(float *)(*(int *)(in_ECX + 0x14) + 8 + iVar4) + local_50;
        }
      }
      bVar8 = bVar8 + 1;
    } while (bVar8 < *(byte *)(in_ECX + 0xd));
    if (bVar5) {
      *param_3 = *pfVar1;
      param_3[1] = *(float *)(in_ECX + 0x34);
      param_3[2] = *(float *)(in_ECX + 0x38);
      param_3[3] = *(float *)(in_ECX + 0x3c);
      return 1;
    }
  }
  *pfVar1 = DAT_00b3eba0;
  *(undefined4 *)(in_ECX + 0x34) = DAT_00b3eba4;
  *(undefined4 *)(in_ECX + 0x38) = DAT_00b3eba8;
  *(undefined4 *)(in_ECX + 0x3c) = DAT_00b3ebac;
  *param_3 = *pfVar1;
  param_3[1] = *(float *)(in_ECX + 0x34);
  param_3[2] = *(float *)(in_ECX + 0x38);
  param_3[3] = *(float *)(in_ECX + 0x3c);
  return 0;
}



uint FUN_006ea6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  uVar1 = in_EAX & 0xffffff00;
  if (*(char *)(in_ECX + 0xe) == '\x01') {
    uVar1 = FUN_006ea340(param_1,param_2,param_3);
    *(undefined4 *)(in_ECX + 8) = param_1;
    return uVar1;
  }
  if (*(char *)(in_ECX + 0xe) != '\0') {
    FUN_006cd0f0();
    uVar1 = FUN_006ea430(param_1,param_2,param_3);
  }
  *(undefined4 *)(in_ECX + 8) = param_1;
  return uVar1;
}



undefined4 * FUN_006ea700(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006cc4e0();
    *puVar2 = &PTR_FUN_00a7c3a4;
    puVar2[0xc] = DAT_00b3eba0;
    puVar2[0xd] = DAT_00b3eba4;
    puVar2[0xe] = DAT_00b3eba8;
    puVar2[0xf] = DAT_00b3ebac;
  }
  local_4 = 0xffffffff;
  FUN_006cd3d0(puVar2,param_1);
  puVar2[0xc] = *(undefined4 *)(in_ECX + 0x30);
  puVar2[0xd] = *(undefined4 *)(in_ECX + 0x34);
  puVar2[0xe] = *(undefined4 *)(in_ECX + 0x38);
  puVar2[0xf] = *(undefined4 *)(in_ECX + 0x3c);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006ea850(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_006cce40(param_1,param_2,param_3);
  *in_ECX = &PTR_FUN_00a7c454;
  in_ECX[0xc] = DAT_00b24fc8;
  in_ECX[0xd] = DAT_00b24fcc;
  in_ECX[0xe] = DAT_00b24fd0;
  *(undefined1 *)(in_ECX + 0xf) = 0;
  return;
}



undefined4 * FUN_006ea8c0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006cc4e0();
    *puVar2 = &PTR_FUN_00a7c454;
    puVar2[0xc] = DAT_00b24fc8;
    puVar2[0xd] = DAT_00b24fcc;
    puVar2[0xe] = DAT_00b24fd0;
    *(undefined1 *)(puVar2 + 0xf) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 FUN_006ea970(float param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int in_ECX;
  undefined4 *unaff_retaddr;
  
  if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
    param_1 = *(float *)(in_ECX + 0x20);
  }
  if (param_1 == -3.4028235e+38) {
    return 0;
  }
  puVar1 = (undefined4 *)(in_ECX + 0x30);
  cVar2 = (**(code **)(**(int **)(in_ECX + 0x18) + 0x54))(param_1,param_2,puVar1);
  if (cVar2 != '\0') {
    *unaff_retaddr = *puVar1;
    unaff_retaddr[1] = *(undefined4 *)(in_ECX + 0x34);
    unaff_retaddr[2] = *(undefined4 *)(in_ECX + 0x38);
    return 1;
  }
  *puVar1 = DAT_00b24fc8;
  *(undefined4 *)(in_ECX + 0x34) = DAT_00b24fcc;
  *(undefined4 *)(in_ECX + 0x38) = DAT_00b24fd0;
  *unaff_retaddr = *puVar1;
  unaff_retaddr[1] = *(undefined4 *)(in_ECX + 0x34);
  unaff_retaddr[2] = *(undefined4 *)(in_ECX + 0x38);
  return 0;
}



undefined4 FUN_006eaa10(float param_1,float param_2,undefined4 *param_3)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  int in_ECX;
  byte bVar7;
  float local_1c;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  uVar5 = param_2;
  local_1c = 1.0;
  *(undefined1 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = DAT_00b3f9a8;
  *(undefined4 *)(in_ECX + 0x34) = DAT_00b3f9ac;
  bVar7 = 0;
  *(undefined4 *)(in_ECX + 0x38) = DAT_00b3f9b0;
  if (*(char *)(in_ECX + 0xd) != '\0') {
    do {
      iVar4 = (uint)bVar7 * 0x18;
      piVar3 = *(int **)(*(int *)(in_ECX + 0x14) + iVar4);
      iVar1 = *(int *)(in_ECX + 0x14) + iVar4;
      if ((piVar3 != (int *)0x0) && (0.0 < *(float *)(iVar1 + 8))) {
        param_2 = param_1;
        if ((piVar3 != (int *)0x0) && (*(float *)(iVar1 + 8) != 0.0)) {
          if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
            param_2 = *(float *)(iVar1 + 0x14);
          }
          if (param_2 != -3.4028235e+38) {
            cVar6 = (**(code **)(*piVar3 + 0x54))(param_2,uVar5,&local_c);
            if (cVar6 == '\0') {
              local_1c = local_1c - *(float *)(*(int *)(in_ECX + 0x14) + 8 + iVar4);
            }
            else {
              fVar2 = *(float *)(*(int *)(in_ECX + 0x14) + 8 + iVar4);
              *(float *)(in_ECX + 0x30) = *(float *)(in_ECX + 0x30) + fVar2 * local_c;
              *(float *)(in_ECX + 0x34) = fStack_8 * fVar2 + *(float *)(in_ECX + 0x34);
              *(float *)(in_ECX + 0x38) = *(float *)(in_ECX + 0x38) + fVar2 * fStack_4;
              *(undefined1 *)(in_ECX + 0x3c) = 1;
            }
            goto LAB_006eab3f;
          }
        }
        local_1c = local_1c - *(float *)(iVar1 + 8);
      }
LAB_006eab3f:
      bVar7 = bVar7 + 1;
    } while (bVar7 < *(byte *)(in_ECX + 0xd));
  }
  if (*(char *)(in_ECX + 0x3c) != '\0') {
    local_1c = 1.0 / local_1c;
    *(float *)(in_ECX + 0x30) = local_1c * *(float *)(in_ECX + 0x30);
    *(float *)(in_ECX + 0x34) = *(float *)(in_ECX + 0x34) * local_1c;
    *(float *)(in_ECX + 0x38) = local_1c * *(float *)(in_ECX + 0x38);
    *param_3 = *(undefined4 *)(in_ECX + 0x30);
    param_3[1] = *(undefined4 *)(in_ECX + 0x34);
    param_3[2] = *(undefined4 *)(in_ECX + 0x38);
    return 1;
  }
  *(undefined4 *)(in_ECX + 0x30) = DAT_00b24fc8;
  *(undefined4 *)(in_ECX + 0x34) = DAT_00b24fcc;
  *(undefined4 *)(in_ECX + 0x38) = DAT_00b24fd0;
  *param_3 = *(undefined4 *)(in_ECX + 0x30);
  param_3[1] = *(undefined4 *)(in_ECX + 0x34);
  param_3[2] = *(undefined4 *)(in_ECX + 0x38);
  return 0;
}



uint FUN_006eabe0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  uVar1 = in_EAX & 0xffffff00;
  if (*(char *)(in_ECX + 0xe) == '\x01') {
    uVar1 = FUN_006ea970(param_1,param_2,param_3);
    *(undefined4 *)(in_ECX + 8) = param_1;
    return uVar1;
  }
  if (*(char *)(in_ECX + 0xe) != '\0') {
    FUN_006cd0f0();
    uVar1 = FUN_006eaa10(param_1,param_2,param_3);
  }
  *(undefined4 *)(in_ECX + 8) = param_1;
  return uVar1;
}



undefined4 * FUN_006eac40(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006cc4e0();
    *puVar2 = &PTR_FUN_00a7c454;
    puVar2[0xc] = DAT_00b24fc8;
    puVar2[0xd] = DAT_00b24fcc;
    puVar2[0xe] = DAT_00b24fd0;
    *(undefined1 *)(puVar2 + 0xf) = 0;
  }
  local_4 = 0xffffffff;
  FUN_006cd3d0(puVar2,param_1);
  puVar2[0xc] = *(undefined4 *)(in_ECX + 0x30);
  puVar2[0xd] = *(undefined4 *)(in_ECX + 0x34);
  puVar2[0xe] = *(undefined4 *)(in_ECX + 0x38);
  *(undefined1 *)(puVar2 + 0xf) = *(undefined1 *)(in_ECX + 0x3c);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006ead00(undefined4 param_1)

{
  int in_ECX;
  
  FUN_006cd720(param_1);
  FUN_00709430(param_1);
  if (((DAT_00b24fc8 != *(float *)(in_ECX + 0x30)) || (DAT_00b24fcc != *(float *)(in_ECX + 0x34)))
     || (DAT_00b24fd0 != *(float *)(in_ECX + 0x38))) {
    *(undefined1 *)(in_ECX + 0x3c) = 1;
  }
  return;
}



void FUN_006eae20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_006cce40(param_1,param_2,param_3);
  *in_ECX = &PTR_FUN_00a7c504;
  in_ECX[0xc] = DAT_00b24fd4;
  in_ECX[0xd] = DAT_00b24fd8;
  in_ECX[0xe] = DAT_00b24fdc;
  in_ECX[0xf] = DAT_00b24fe0;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  return;
}



undefined4 * FUN_006eae90(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x44,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006cc4e0();
    *puVar2 = &PTR_FUN_00a7c504;
    puVar2[0xc] = DAT_00b24fd4;
    puVar2[0xd] = DAT_00b24fd8;
    puVar2[0xe] = DAT_00b24fdc;
    puVar2[0xf] = DAT_00b24fe0;
    *(undefined1 *)(puVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 FUN_006eaf50(float param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int in_ECX;
  undefined4 *unaff_retaddr;
  
  if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
    param_1 = *(float *)(in_ECX + 0x20);
  }
  if (param_1 == -3.4028235e+38) {
    return 0;
  }
  puVar1 = (undefined4 *)(in_ECX + 0x30);
  cVar2 = (**(code **)(**(int **)(in_ECX + 0x18) + 0x50))(param_1,param_2,puVar1);
  if (cVar2 != '\0') {
    *unaff_retaddr = *puVar1;
    unaff_retaddr[1] = *(undefined4 *)(in_ECX + 0x34);
    unaff_retaddr[2] = *(undefined4 *)(in_ECX + 0x38);
    unaff_retaddr[3] = *(undefined4 *)(in_ECX + 0x3c);
    return 1;
  }
  *unaff_retaddr = DAT_00b24fd4;
  unaff_retaddr[1] = DAT_00b24fd8;
  unaff_retaddr[2] = DAT_00b24fdc;
  unaff_retaddr[3] = DAT_00b24fe0;
  *puVar1 = *unaff_retaddr;
  *(undefined4 *)(in_ECX + 0x34) = unaff_retaddr[1];
  *(undefined4 *)(in_ECX + 0x38) = unaff_retaddr[2];
  *(undefined4 *)(in_ECX + 0x3c) = unaff_retaddr[3];
  return 0;
}



undefined4 FUN_006eb000(float param_1,float param_2,undefined4 *param_3)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  int in_ECX;
  byte bVar7;
  float local_24;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar5 = param_2;
  local_24 = 1.0;
  *(undefined1 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x30) = DAT_00b25ad0;
  *(undefined4 *)(in_ECX + 0x34) = DAT_00b25ad4;
  *(undefined4 *)(in_ECX + 0x38) = DAT_00b25ad8;
  bVar7 = 0;
  *(undefined4 *)(in_ECX + 0x3c) = DAT_00b25adc;
  if (*(char *)(in_ECX + 0xd) != '\0') {
    do {
      iVar4 = (uint)bVar7 * 0x18;
      piVar1 = (int *)(*(int *)(in_ECX + 0x14) + iVar4);
      piVar3 = (int *)*piVar1;
      if ((piVar3 != (int *)0x0) && (0.0 < (float)piVar1[2])) {
        local_10 = 0.0;
        local_c = 0.0;
        local_8 = 0.0;
        local_4 = 0.0;
        param_2 = param_1;
        if ((piVar3 != (int *)0x0) && ((float)piVar1[2] != 0.0)) {
          if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
            param_2 = (float)piVar1[5];
          }
          if (param_2 != -3.4028235e+38) {
            cVar6 = (**(code **)(*piVar3 + 0x50))(param_2,uVar5,&local_10);
            if (cVar6 == '\0') {
              local_24 = local_24 - *(float *)(*(int *)(in_ECX + 0x14) + 8 + iVar4);
            }
            else {
              fVar2 = *(float *)(*(int *)(in_ECX + 0x14) + 8 + iVar4);
              *(float *)(in_ECX + 0x30) = *(float *)(in_ECX + 0x30) + fVar2 * local_10;
              *(float *)(in_ECX + 0x34) = *(float *)(in_ECX + 0x34) + local_c * fVar2;
              *(float *)(in_ECX + 0x38) = local_8 * fVar2 + *(float *)(in_ECX + 0x38);
              *(float *)(in_ECX + 0x3c) = *(float *)(in_ECX + 0x3c) + fVar2 * local_4;
              *(undefined1 *)(in_ECX + 0x40) = 1;
            }
            goto LAB_006eb17d;
          }
        }
        local_24 = local_24 - (float)piVar1[2];
      }
LAB_006eb17d:
      bVar7 = bVar7 + 1;
    } while (bVar7 < *(byte *)(in_ECX + 0xd));
  }
  if (*(char *)(in_ECX + 0x40) != '\0') {
    *(float *)(in_ECX + 0x30) = *(float *)(in_ECX + 0x30) / local_24;
    *(float *)(in_ECX + 0x34) = *(float *)(in_ECX + 0x34) / local_24;
    *(float *)(in_ECX + 0x38) = *(float *)(in_ECX + 0x38) / local_24;
    *(float *)(in_ECX + 0x3c) = *(float *)(in_ECX + 0x3c) / local_24;
    *param_3 = *(undefined4 *)(in_ECX + 0x30);
    param_3[1] = *(undefined4 *)(in_ECX + 0x34);
    param_3[2] = *(undefined4 *)(in_ECX + 0x38);
    param_3[3] = *(undefined4 *)(in_ECX + 0x3c);
    return 1;
  }
  *(undefined4 *)(in_ECX + 0x30) = DAT_00b24fd4;
  *(undefined4 *)(in_ECX + 0x34) = DAT_00b24fd8;
  *(undefined4 *)(in_ECX + 0x38) = DAT_00b24fdc;
  *(undefined4 *)(in_ECX + 0x3c) = DAT_00b24fe0;
  *param_3 = *(undefined4 *)(in_ECX + 0x30);
  param_3[1] = *(undefined4 *)(in_ECX + 0x34);
  param_3[2] = *(undefined4 *)(in_ECX + 0x38);
  param_3[3] = *(undefined4 *)(in_ECX + 0x3c);
  return 0;
}



uint FUN_006eb230(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  uVar1 = in_EAX & 0xffffff00;
  if (*(char *)(in_ECX + 0xe) == '\x01') {
    uVar1 = FUN_006eaf50(param_1,param_2,param_3);
    *(undefined4 *)(in_ECX + 8) = param_1;
    return uVar1;
  }
  if (*(char *)(in_ECX + 0xe) != '\0') {
    FUN_006cd0f0();
    uVar1 = FUN_006eb000(param_1,param_2,param_3);
  }
  *(undefined4 *)(in_ECX + 8) = param_1;
  return uVar1;
}



undefined4 * FUN_006eb290(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x44,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006cc4e0();
    *puVar2 = &PTR_FUN_00a7c504;
    puVar2[0xc] = DAT_00b24fd4;
    puVar2[0xd] = DAT_00b24fd8;
    puVar2[0xe] = DAT_00b24fdc;
    puVar2[0xf] = DAT_00b24fe0;
    *(undefined1 *)(puVar2 + 0x10) = 0;
  }
  local_4 = 0xffffffff;
  FUN_006cd3d0(puVar2,param_1);
  puVar2[0xc] = *(undefined4 *)(in_ECX + 0x30);
  puVar2[0xd] = *(undefined4 *)(in_ECX + 0x34);
  puVar2[0xe] = *(undefined4 *)(in_ECX + 0x38);
  puVar2[0xf] = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined1 *)(puVar2 + 0x10) = *(undefined1 *)(in_ECX + 0x40);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006eb360(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  FUN_006cd720(param_1);
  FUN_00715420(param_1);
  cVar1 = FUN_00632310(&DAT_00b24fd4);
  if (cVar1 != '\0') {
    *(undefined1 *)(in_ECX + 0x40) = 1;
  }
  return;
}



void FUN_006eb460(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_006cce40(param_1,param_2,param_3);
  *in_ECX = &PTR_FUN_00a7c5b4;
  *(undefined1 *)(in_ECX + 0xc) = 2;
  return;
}



undefined4 * FUN_006eb4c0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x34,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006cc4e0();
    *puVar2 = &PTR_FUN_00a7c5b4;
    *(undefined1 *)(puVar2 + 0xc) = 2;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void thunk_FUN_0068f970(void)

{
  thunk_FUN_0068f970();
  return;
}



undefined4 FUN_006eb570(float param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
    param_1 = *(float *)(in_ECX + 0x20);
  }
  if (param_1 == -3.4028235e+38) {
    return 0;
  }
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x18) + 0x60))(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    *(undefined1 *)(in_ECX + 0x30) = *param_3;
    return 1;
  }
  *param_3 = 0;
  *(undefined1 *)(in_ECX + 0x30) = 2;
  return 0;
}



undefined4 FUN_006eb5e0(float param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  int in_ECX;
  byte bVar7;
  float local_c;
  float local_8;
  float local_4;
  
  uVar5 = param_2;
  local_8 = 0.0;
  bVar7 = 0;
  local_c = 1.0;
  bVar4 = false;
  if (*(char *)(in_ECX + 0xd) != '\0') {
    do {
      iVar3 = (uint)bVar7 * 0x18;
      piVar2 = *(int **)(*(int *)(in_ECX + 0x14) + iVar3);
      iVar1 = *(int *)(in_ECX + 0x14) + iVar3;
      if ((piVar2 != (int *)0x0) && (0.0 < *(float *)(iVar1 + 8))) {
        local_4 = param_1;
        if ((piVar2 != (int *)0x0) && (*(float *)(iVar1 + 8) != 0.0)) {
          if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
            local_4 = *(float *)(iVar1 + 0x14);
          }
          if (local_4 != -3.4028235e+38) {
            cVar6 = (**(code **)(*piVar2 + 0x60))(local_4,uVar5,&param_2);
            if (cVar6 == '\0') {
              local_c = local_c - *(float *)(*(int *)(in_ECX + 0x14) + 8 + iVar3);
            }
            else {
              bVar4 = true;
              local_8 = *(float *)(*(int *)(in_ECX + 0x14) + 8 + iVar3) * (float)(param_2 & 0xff) +
                        local_8;
            }
            goto LAB_006eb6cf;
          }
        }
        local_c = local_c - *(float *)(iVar1 + 8);
      }
LAB_006eb6cf:
      bVar7 = bVar7 + 1;
    } while (bVar7 < *(byte *)(in_ECX + 0xd));
    if (bVar4) {
      if (0.5 <= local_8 / local_c) {
        *(undefined1 *)(in_ECX + 0x30) = 1;
        *param_3 = 1;
        return 1;
      }
      *(undefined1 *)(in_ECX + 0x30) = 0;
      *param_3 = 0;
      return 1;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(in_ECX + 0x30) = 2;
  return 0;
}



uint FUN_006eb750(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  uVar1 = in_EAX & 0xffffff00;
  if (*(char *)(in_ECX + 0xe) == '\x01') {
    uVar1 = FUN_006eb570(param_1,param_2,param_3);
    *(undefined4 *)(in_ECX + 8) = param_1;
    return uVar1;
  }
  if (*(char *)(in_ECX + 0xe) != '\0') {
    FUN_006cd0f0();
    uVar1 = FUN_006eb5e0(param_1,param_2,param_3);
  }
  *(undefined4 *)(in_ECX + 8) = param_1;
  return uVar1;
}



undefined4 * FUN_006eb7b0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x34,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006cc4e0();
    *puVar2 = &PTR_FUN_00a7c5b4;
    *(undefined1 *)(puVar2 + 0xc) = 2;
  }
  local_4 = 0xffffffff;
  FUN_006cd3d0(puVar2,param_1);
  *(undefined1 *)(puVar2 + 0xc) = *(undefined1 *)(in_ECX + 0x30);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006eb980(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8238;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7c684;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a7c674;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006eb9e0(byte param_1)

{
  FUN_006eb980();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006eba00(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  *in_ECX = &PTR_FUN_00a7c6bc;
  in_ECX[2] = 0xff7fffff;
  return;
}



void FUN_006eba30(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7c6bc;
  FUN_0055ace0();
  return;
}



int * FUN_006eba60(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00700900();
  (**(code **)(*piVar1 + 0x90))();
  return piVar1;
}



void thunk_FUN_007008a0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *piStack_4;
  
  if ((0x5000005 < *(uint *)(param_1 + 0xd8)) && (*(uint *)(param_1 + 0xd8) < 0xa010072)) {
    piVar1 = (int *)(param_1 + 0x21c);
    param_1 = 4;
    piStack_4 = in_ECX;
    (**(code **)(*piVar1 + 4))(*piVar1,&piStack_4,4,&param_1,1);
    iVar2 = *in_ECX;
    uVar3 = FUN_00712550(piStack_4);
    (**(code **)(iVar2 + 0x48))(uVar3);
  }
  return;
}



void FUN_006eba90(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7c6bc;
  FUN_0055ace0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006ebac0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007009a0(param_1);
  param_1 = FUN_0070f910(DAT_00b3eb8c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006ebb10(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a7c76c;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}



void FUN_006ebb40(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c8273;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)in_ECX[4];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[3];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a680dc;
  FUN_0055ace0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006ebc20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xc) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  if (puVar1 != param_2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x10) = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  return;
}



void FUN_006ebcb0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bd968;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = (int *)in_ECX[5];
  local_4 = 0;
  in_ECX[2] = 0;
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[-1] == 0) {
        FUN_00401f20(puVar2 + -1,uVar3);
      }
      else {
        (**(code **)*puVar2)(3);
      }
    }
    if (piVar1[2] != 0) {
      FUN_0056b680(1);
    }
    FUN_00401f20(piVar1,uVar3);
  }
  FUN_00401f20(*in_ECX,uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006ebd50(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  uint *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar4 = (uint *)0x0;
  in_ECX[1] = param_1;
  in_ECX[2] = 0;
  if (param_1 != 0) {
    uVar3 = -(uint)((int)((ulonglong)param_1 * 0x14 >> 0x20) != 0) |
            (uint)((ulonglong)param_1 * 0x14);
    puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
    local_4 = 0;
    if (puVar2 != (uint *)0x0) {
      puVar4 = puVar2 + 1;
      *puVar2 = param_1;
      _eh_vector_constructor_iterator_(puVar4,0x14,param_1,FUN_006ebb10,FUN_006ebb40);
    }
  }
  *in_ECX = puVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006ebe50(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int *unaff_FS_OFFSET;
  int *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0xc,uVar1);
  uVar1 = 0;
  local_4 = 0;
  if (iVar2 == 0) {
    local_10 = (int *)0x0;
  }
  else {
    local_10 = (int *)FUN_006ebd50(param_1);
  }
  local_4 = 0xffffffff;
  if (param_1 != 0) {
    iVar2 = 0;
    do {
      if (uVar1 < (uint)local_10[1]) {
        iVar4 = *local_10 + iVar2;
      }
      else {
        iVar4 = 0;
      }
      iVar3 = in_ECX[1];
      if (in_ECX[2] == iVar3) {
        if (iVar3 == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = iVar3 * 2;
        }
        FUN_006e8ca0(iVar3);
      }
      *(int *)(*in_ECX + in_ECX[2] * 4) = iVar4;
      in_ECX[2] = in_ECX[2] + 1;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x14;
    } while (uVar1 < param_1);
  }
  local_10[2] = in_ECX[5];
  in_ECX[5] = (int)local_10;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006ebf20(void)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3ec80);
  _DAT_00b3ecf8 = GetCurrentThreadId();
  _DAT_00b3ecfc = _DAT_00b3ecfc + 1;
  if (DAT_00b24ff0 == 0) {
    FUN_006ebe50(DAT_00b24ff4);
    DAT_00b24ff4 = DAT_00b24ff4 * 2;
  }
  DAT_00b24ff0 = DAT_00b24ff0 + -1;
  uVar1 = *DAT_00b24fe8;
  *DAT_00b24fe8 = DAT_00b24fe8[DAT_00b24ff0];
  _DAT_00b3ecfc = _DAT_00b3ecfc + -1;
  if (_DAT_00b3ecfc == 0) {
    _DAT_00b3ecf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3ec80);
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ebfb0(undefined4 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3ec80);
  _DAT_00b3ecf8 = GetCurrentThreadId();
  _DAT_00b3ecfc = _DAT_00b3ecfc + 1;
  FUN_0073a5e0(&param_1);
  _DAT_00b3ecfc = _DAT_00b3ecfc + -1;
  if (_DAT_00b3ecfc == 0) {
    _DAT_00b3ecf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3ec80);
  return;
}



undefined4 FUN_006ec080(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_14;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0xa8))(&local_14,uVar1);
  local_14 = FUN_00401f00(0x18);
  puStack_8 = (undefined1 *)0x0;
  if (local_14 != 0) {
    uVar2 = FUN_006d29e0(uVar1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar2;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void FUN_006ec110(int *param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined4 unaff_retaddr;
  
  if (param_1 != (int *)0x0) {
    for (puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))();
        (puVar1 != (undefined4 *)0x0 && (puVar1 != &DAT_00b3cfbc)); puVar1 = (undefined4 *)puVar1[1]
        ) {
    }
  }
  (**(code **)(*in_ECX + 0xa8))(&param_1);
  FUN_006d2b70(unaff_retaddr);
  return;
}



void FUN_006ec180(void)

{
  undefined4 *in_ECX;
  
  FUN_006ce1d0();
  *in_ECX = &PTR_FUN_00a7c7e4;
  return;
}



void FUN_006ec1b0(byte param_1)

{
  FUN_006c3a40();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006ec1d0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ce3f0(param_1);
  param_1 = FUN_0070f910(DAT_00b3ed14);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006ec220(void)

{
  undefined4 *in_ECX;
  
  FUN_006eba00();
  *in_ECX = &PTR_FUN_00a7c8ac;
  return;
}



void FUN_006ec250(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7c8ac;
  FUN_006eba30();
  return;
}



int FUN_006ec260(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int *in_ECX;
  int unaff_EBX;
  
  bVar1 = (**(code **)(*in_ECX + 0xac))(param_2);
  iVar2 = (**(code **)(*in_ECX + 0xa8))(param_2);
  return iVar2 + (uint)bVar1 * unaff_EBX;
}



void thunk_FUN_00700770(undefined4 param_1)

{
  undefined4 in_ECX;
  
  FUN_00452570(in_ECX,param_1);
  return;
}



void thunk_FUN_007008a0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *piStack_4;
  
  if ((0x5000005 < *(uint *)(param_1 + 0xd8)) && (*(uint *)(param_1 + 0xd8) < 0xa010072)) {
    piVar1 = (int *)(param_1 + 0x21c);
    param_1 = 4;
    piStack_4 = in_ECX;
    (**(code **)(*piVar1 + 4))(*piVar1,&piStack_4,4,&param_1,1);
    iVar2 = *in_ECX;
    uVar3 = FUN_00712550(piStack_4);
    (**(code **)(iVar2 + 0x48))(uVar3);
  }
  return;
}



void thunk_FUN_00700650(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0070065f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



void thunk_FUN_0068f970(void)

{
  return;
}



uint thunk_FUN_00700670(int *param_1)

{
  byte bVar1;
  uint in_EAX;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  int *in_ECX;
  byte *pbVar5;
  bool bVar6;
  
  if (param_1 == (int *)0x0) {
    return in_EAX & 0xffffff00;
  }
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))();
  pbVar5 = (byte *)*puVar2;
  puVar2 = (undefined4 *)(**(code **)(*in_ECX + 4))();
  pbVar3 = (byte *)*puVar2;
  while( true ) {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
  return CONCAT31((int3)((uint)iVar4 >> 8),iVar4 == 0);
}



void FUN_006ec2f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7c8ac;
  FUN_006eba30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006ec320(float *param_1,float *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  short sVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  int *in_ECX;
  float *unaff_EBX;
  uint unaff_EBP;
  float *unaff_ESI;
  
  *param_1 = 3.4028235e+38;
  pcVar1 = *(code **)(*in_ECX + 0x98);
  *param_2 = -3.4028235e+38;
  sVar3 = (*pcVar1)();
  if (sVar3 != 0) {
    do {
      (**(code **)(*in_ECX + 0xac))();
      pfVar4 = (float *)(**(code **)(*in_ECX + 0xa8))(0);
      (**(code **)(*in_ECX + 0x9c))(0);
      uVar2 = (**(code **)(*in_ECX + 0xac))(0);
      pfVar5 = (float *)(**(code **)(*in_ECX + 0xa8))(0);
      if ((pfVar4 != (float *)0x0) && (pfVar5 != (float *)0x0)) {
        if (*pfVar4 < *unaff_ESI) {
          *unaff_ESI = *pfVar4;
        }
        if (*unaff_EBX < *pfVar5) {
          *unaff_EBX = *pfVar5;
        }
      }
      unaff_EBP = CONCAT31((int3)(unaff_EBP >> 8),uVar2) + 1;
      uVar6 = (**(code **)(*in_ECX + 0x98))();
    } while (unaff_EBP < (uVar6 & 0xffff));
  }
  if ((*param_1 == 3.4028235e+38) && (*param_2 == -3.4028235e+38)) {
    *param_1 = 0.0;
    *param_2 = 0.0;
    return;
  }
  return;
}



void FUN_006ec460(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ebac0(param_1);
  param_1 = FUN_0070f910(DAT_00b3ed80);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 FUN_006ec4b0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_14;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0xa8))(&local_14,uVar1);
  local_14 = FUN_00401f00(0x18);
  puStack_8 = (undefined1 *)0x0;
  if (local_14 != 0) {
    uVar2 = FUN_006e7fa0(uVar1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar2;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4
FUN_006ec530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

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
  local_10 = FUN_00401f00(0x34,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006eb460(param_2,param_4,param_5);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void thunk_FUN_006ce380(int *param_1)

{
  int in_ECX;
  
  thunk_FUN_00716050(param_1);
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 0x3c));
  return;
}



undefined4 thunk_FUN_006ce3a0(int param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  
  cVar2 = thunk_FUN_00715820(param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  piVar1 = *(int **)(in_ECX + 0x3c);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      return 0;
    }
    if (piVar1 != (int *)0x0) goto LAB_006ce3d4;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    return 0;
  }
  if (piVar1 == (int *)0x0) {
    return 1;
  }
LAB_006ce3d4:
  cVar2 = (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(param_1 + 0x3c));
  if (cVar2 == '\0') {
    return 0;
  }
  return 1;
}



void FUN_006ec5d0(int *param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined4 unaff_retaddr;
  
  if (param_1 != (int *)0x0) {
    for (puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))();
        (puVar1 != (undefined4 *)0x0 && (puVar1 != &DAT_00b3e7e8)); puVar1 = (undefined4 *)puVar1[1]
        ) {
    }
  }
  (**(code **)(*in_ECX + 0xa8))(&param_1);
  FUN_006e80f0(unaff_retaddr);
  return;
}



void FUN_006ec630(void)

{
  undefined4 *in_ECX;
  
  FUN_006ce1d0();
  *in_ECX = &PTR_FUN_00a7c97c;
  return;
}



void FUN_006ec660(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ce3f0(param_1);
  param_1 = FUN_0070f910(DAT_00b3edd4);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006ec6b0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 4));
  }
  return;
}



void FUN_006ec6c0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *_Dst;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    _Dst = (char *)FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
    *(char **)(in_ECX + 4) = _Dst;
    _strcpy_s(_Dst,(rsize_t)(pcVar2 + (1 - (int)(param_1 + 1))),param_1);
  }
  return;
}



void FUN_006ec720(int param_1)

{
  int in_ECX;
  
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c));
  FUN_00713620(in_ECX + 4);
  return;
}



void FUN_006ec760(int param_1)

{
  int in_ECX;
  
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220));
  FUN_00713720(*(undefined4 *)(in_ECX + 4));
  return;
}



void FUN_006ec7a0(undefined4 param_1)

{
  FUN_00715f40(param_1);
  FUN_00712a20();
  return;
}



void FUN_006ec7c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x40);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x40) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_006ec810(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c82d3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7ab8c;
  puVar1 = (undefined4 *)in_ECX[0x10];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x10] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x10];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00715a70(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_006ec8c0(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x40);
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 8);
    *param_2 = *(undefined4 *)(iVar1 + 0x10);
    *param_3 = *(undefined1 *)(iVar1 + 0x14);
    return *(undefined4 *)(iVar1 + 0xc);
  }
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  return 0;
}



void FUN_006ec910(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_00715d80(param_1,param_2);
  if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x40) + 0x18))(param_2);
    FUN_006ec7c0(uVar1);
  }
  return;
}



void FUN_006ec980(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  
  FUN_00715e70(param_1);
  puVar2 = (undefined4 *)FUN_007124a0();
  puVar1 = *(undefined4 **)(in_ECX + 0x40);
  if (puVar1 != puVar2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x40) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  return;
}



undefined1 FUN_006ec9e0(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00715f10(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  (**(code **)(**(int **)(in_ECX + 0x40) + 0x24))(param_1);
  return 1;
}



void FUN_006eca10(int *param_1)

{
  int in_ECX;
  
  FUN_00716050(param_1);
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 0x40));
  return;
}



bool FUN_006eca30(int param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00715820(param_1);
  if (cVar1 == '\0') {
    return false;
  }
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x40) + 0x2c))(*(undefined4 *)(param_1 + 0x40));
  return cVar1 != '\0';
}



void FUN_006eca60(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00716140(param_1);
  param_1 = FUN_0070f910(DAT_00b3eea8);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 FUN_006ecab0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c82fb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&uStack_1c;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0xa8))(&local_18,uVar1);
  iVar2 = FUN_00401f00(0x20);
  puStack_8 = (undefined1 *)0x0;
  if (iVar2 != 0) {
    uVar3 = FUN_006da240(uStack_1c,local_18,uStack_14);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void thunk_FUN_006ce2c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  thunk_FUN_00715d80(param_1,param_2);
  if (*(int *)(in_ECX + 0x3c) != 0) {
    uVar1 = FUN_00700710(param_2);
    FUN_0075fa90(uVar1);
  }
  return;
}



void thunk_FUN_006ce320(int param_1)

{
  undefined4 uVar1;
  
  FUN_006d0550(param_1);
  if (0xa010067 < *(uint *)(param_1 + 0xd8)) {
    uVar1 = FUN_00712a90();
    FUN_0075fa90(uVar1);
  }
  return;
}



void FUN_006ecb80(int *param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined4 unaff_ESI;
  undefined4 local_c;
  undefined4 uStack_8;
  
  if (param_1 != (int *)0x0) {
    for (puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))();
        (puVar1 != (undefined4 *)0x0 && (puVar1 != &DAT_00b3dcf0)); puVar1 = (undefined4 *)puVar1[1]
        ) {
    }
  }
  (**(code **)(*in_ECX + 0xa8))(&local_c);
  FUN_006da440(unaff_ESI,local_c,uStack_8);
  return;
}



void FUN_006ecc00(void)

{
  undefined4 *in_ECX;
  
  FUN_006ce1d0();
  *in_ECX = &PTR_FUN_00a7ca5c;
  return;
}



void FUN_006ecc30(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ce3f0(param_1);
  param_1 = FUN_0070f910(DAT_00b3eefc);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 FUN_006ecc80(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x40);
}



bool FUN_006ecc90(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_006ce350(param_1);
  return cVar1 != '\0';
}



void FUN_006eccb0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_006ce380(param_1);
  FUN_00713720(*(undefined4 *)(in_ECX + 0x40));
  return;
}



void FUN_006eccd0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  
  puVar2 = (undefined4 *)FUN_006ff9c0(*(undefined4 *)(in_ECX + 0x40));
  puVar1 = *(undefined4 **)(in_ECX + 0x44);
  if (puVar1 != puVar2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x44) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  return;
}



void FUN_006ecd20(void)

{
  undefined4 *in_ECX;
  
  FUN_006ce1d0();
  in_ECX[0x10] = 0;
  *in_ECX = &PTR_FUN_00a7cb2c;
  in_ECX[0x11] = 0;
  return;
}



void FUN_006ecd50(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8328;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7cb2c;
  local_4 = 0;
  FUN_00401f20(in_ECX[0x10],uVar2);
  puVar1 = (undefined4 *)in_ECX[0x11];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_006c3a40();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006ecde0(undefined4 param_1)

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
  FUN_00715ce0(param_1);
  if (*(int *)(in_ECX + 0x30) != 0) {
    FUN_006eccd0();
  }
  return;
}



uint FUN_006ecf50(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  byte *pbVar4;
  int in_ECX;
  byte *pbVar5;
  bool bVar6;
  
  pbVar3 = (byte *)FUN_006ce3a0(param_1);
  if ((char)pbVar3 == '\0') goto LAB_006ecf62;
  piVar2 = *(int **)(in_ECX + 0x44);
  if (piVar2 == (int *)0x0) {
LAB_006ecf7a:
    if (*(int *)(param_1 + 0x44) != 0) goto LAB_006ecf62;
    if (piVar2 != (int *)0x0) goto LAB_006ecf84;
  }
  else {
    if (*(int *)(param_1 + 0x44) == 0) goto LAB_006ecf62;
    if (piVar2 == (int *)0x0) goto LAB_006ecf7a;
LAB_006ecf84:
    if ((*(int *)(param_1 + 0x44) != 0) &&
       (pbVar3 = (byte *)(**(code **)(*piVar2 + 0x2c))(*(int *)(param_1 + 0x44)),
       (char)pbVar3 == '\0')) goto LAB_006ecf62;
  }
  pbVar3 = *(byte **)(in_ECX + 0x40);
  pbVar4 = pbVar3;
  if (pbVar3 == (byte *)0x0) {
LAB_006ecfa8:
    if (*(int *)(param_1 + 0x40) != 0) goto LAB_006ecf62;
    if (pbVar3 == (byte *)0x0) goto LAB_006ecfed;
  }
  else {
    if (*(int *)(param_1 + 0x40) == 0) goto LAB_006ecf62;
    if (pbVar3 == (byte *)0x0) goto LAB_006ecfa8;
  }
  pbVar5 = *(byte **)(param_1 + 0x40);
  if (pbVar5 != (byte *)0x0) {
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_006ecfe0:
        pbVar3 = (byte *)((1 - (uint)bVar6) - (uint)(bVar6 != 0));
        goto LAB_006ecfe5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_006ecfe0;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    pbVar3 = (byte *)0x0;
LAB_006ecfe5:
    pbVar4 = (byte *)0x0;
    if (pbVar3 != (byte *)0x0) {
LAB_006ecf62:
      return (uint)pbVar3 & 0xffffff00;
    }
  }
LAB_006ecfed:
  return CONCAT31((int3)((uint)pbVar4 >> 8),1);
}



void FUN_006ed000(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ce3f0(param_1);
  param_1 = FUN_0070f910(DAT_00b3ef5c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fc30("Extra Data Name",*(undefined4 *)(in_ECX + 0x40));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



int FUN_006ed0e0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0xac))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*in_ECX + 0xa0))(param_1);
    iVar3 = (**(code **)(*in_ECX + 0x9c))(param_1);
    return iVar2 * iVar3 * 2;
  }
  iVar2 = (**(code **)(*in_ECX + 0xa0))(param_1);
  iVar3 = (**(code **)(*in_ECX + 0x9c))(param_1);
  return iVar2 * iVar3 * 4;
}



void FUN_006ed140(int param_1,int param_2)

{
  undefined4 *in_ECX;
  
  FUN_006eba00();
  *in_ECX = &PTR_FUN_00a7cc04;
  in_ECX[3] = 0x7f7fffff;
  in_ECX[4] = 0xff7fffff;
  in_ECX[5] = param_1;
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  in_ECX[6] = param_2;
  if (param_2 != 0) {
    InterlockedIncrement((LONG *)(param_2 + 4));
  }
  return;
}



void FUN_006ed1b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c8363;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7cc04;
  puVar1 = (undefined4 *)in_ECX[6];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[5];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_006eba30(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_006ed260(undefined4 param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  
  uVar1 = (**(code **)(*in_ECX + 0x98))();
  if (((ushort)param_1 < uVar1) && (in_ECX[5] != 0)) {
    iVar2 = (**(code **)(*in_ECX + 0xb4))(param_1);
    if (iVar2 != 0xffff) {
      puVar3 = (undefined4 *)FUN_006e78d0();
      return *puVar3;
    }
  }
  return 0;
}



void FUN_006ed2b0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  undefined4 uVar4;
  int in_ECX;
  
  thunk_FUN_00700770(param_1,param_2);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  if (puVar1 != *(undefined4 **)(in_ECX + 0x14)) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *(int *)(in_ECX + 0x14);
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  if (*(int *)(in_ECX + 0x18) != 0) {
    uVar4 = FUN_00700710(param_2);
    FUN_0075fa90(uVar4);
  }
  return;
}



undefined1 FUN_006ed330(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = thunk_FUN_00700650(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(int **)(in_ECX + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x14) + 0x24))(param_1);
  }
  if (*(int **)(in_ECX + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x18) + 0x24))(param_1);
  }
  return 1;
}



uint FUN_006ed370(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  undefined2 uVar5;
  int in_ECX;
  
  uVar4 = thunk_FUN_00700670(param_1);
  if ((char)uVar4 == '\0') goto LAB_006ed3f7;
  fVar1 = *(float *)(in_ECX + 0xc);
  fVar2 = *(float *)(param_1 + 0xc);
  uVar5 = (undefined2)(uVar4 >> 0x10);
  uVar4 = CONCAT22(uVar5,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                         (ushort)(fVar2 == fVar1) << 0xe);
  if (fVar2 == fVar1) {
    fVar1 = *(float *)(in_ECX + 0x10);
    fVar2 = *(float *)(param_1 + 0x10);
    uVar4 = CONCAT22(uVar5,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                           (ushort)(fVar2 == fVar1) << 0xe);
    if (fVar2 == fVar1) {
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
  piVar3 = *(int **)(in_ECX + 0x14);
  if (piVar3 == (int *)0x0) {
LAB_006ed3b8:
    if (*(int *)(param_1 + 0x14) != 0) goto LAB_006ed3f7;
    if (piVar3 != (int *)0x0) goto LAB_006ed3c2;
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) goto LAB_006ed3f7;
    if (piVar3 == (int *)0x0) goto LAB_006ed3b8;
LAB_006ed3c2:
    uVar4 = (**(code **)(*piVar3 + 0x2c))(*(undefined4 *)(param_1 + 0x14));
    if ((char)uVar4 == '\0') goto LAB_006ed3f7;
  }
  piVar3 = *(int **)(in_ECX + 0x18);
  if (piVar3 == (int *)0x0) {
LAB_006ed3e2:
    if ((*(int *)(param_1 + 0x18) != 0) || (piVar3 == (int *)0x0)) goto LAB_006ed3f7;
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_006ed3f7;
    if (piVar3 == (int *)0x0) goto LAB_006ed3e2;
  }
  uVar4 = (**(code **)(*piVar3 + 0x2c))(*(undefined4 *)(param_1 + 0x18));
LAB_006ed3f7:
  return uVar4 & 0xffffff00;
}



void FUN_006ed400(byte param_1)

{
  FUN_006ed1b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006ed420(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int in_ECX;
  
  iVar3 = param_1;
  thunk_FUN_007008a0(param_1);
  iVar1 = *(int *)(iVar3 + 0x21c);
  param_1 = 4;
  (**(code **)(iVar1 + 4))(iVar1,in_ECX + 0xc,4,&param_1,1);
  iVar1 = *(int *)(iVar3 + 0x21c);
  param_1 = 4;
  (**(code **)(iVar1 + 4))(iVar1,in_ECX + 0x10,4,&param_1,1);
  puVar4 = (undefined4 *)FUN_00712a90();
  puVar2 = *(undefined4 **)(in_ECX + 0x14);
  if (puVar2 != puVar4) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x14) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = (undefined4 *)FUN_00712a90();
  puVar2 = *(undefined4 **)(in_ECX + 0x18);
  if (puVar2 != puVar4) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x18) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  return;
}



void FUN_006ed500(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = param_1;
  thunk_FUN_0068f970(param_1);
  param_1 = (int *)0x4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0xc,4,&param_1,1);
  param_1 = (int *)0x4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x10,4,&param_1,1);
  (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(in_ECX + 0x14));
  (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(in_ECX + 0x18));
  return;
}



void FUN_006ed580(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ebac0(param_1);
  param_1 = FUN_0070f910(DAT_00b3ef9c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("m_fStartTime",*(undefined4 *)(in_ECX + 0xc));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("m_fEndTime",*(undefined4 *)(in_ECX + 0x10));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  if (*(int **)(in_ECX + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x14) + 0x30))(iVar1);
  }
  if (*(int **)(in_ECX + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x18) + 0x30))(iVar1);
  }
  return;
}



char * FUN_006ed670(char *param_1,rsize_t param_2,char *param_3,rsize_t param_4)

{
  _strncpy_s(param_1,param_2,param_3,param_4);
  return param_1;
}



void FUN_006ed6a0(int param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = 4;
  (**(code **)(param_1 + 4))(param_1,param_2,4,&local_4,1);
  return;
}



void FUN_006ed6d0(undefined4 param_1,undefined4 param_2)

{
  FUN_004a7a60("FR2 ASSERT violation in %s line %i. Code may crash.",param_1,param_2);
  return;
}



void FUN_006ed6f0(void)

{
  int in_ECX;
  
  if (*(undefined4 **)(in_ECX + 0x40) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x40))(1);
  }
  *(undefined4 *)(in_ECX + 0x40) = 0;
  return;
}



void FUN_006ed710(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8396;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7cd44;
  local_4 = 1;
  FUN_006f5fa0(uVar1);
  if (0xf < (uint)in_ECX[0xe]) {
    FUN_00401f20(in_ECX[9]);
  }
  in_ECX[0xe] = 0xf;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  if (0xf < (uint)in_ECX[7]) {
    FUN_00401f20(in_ECX[2]);
  }
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006ed7a0(byte param_1)

{
  FUN_006ed710();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006ed7c0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c83c8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7cd5c;
  local_4 = 0;
  if ((undefined4 *)in_ECX[0x10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x10])(1,uVar1);
  }
  in_ECX[0x10] = 0;
  local_4 = 0xffffffff;
  FUN_006ed710();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006ed830(byte param_1)

{
  FUN_006ed7c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_006ed850(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_b4;
  undefined1 local_b0 [4];
  undefined1 local_ac;
  undefined4 uStack_a4;
  undefined4 *local_a0;
  undefined1 *local_9c;
  undefined4 *local_98;
  uint uStack_94;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [68];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c83f8;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_80;
  uStack_94 = DAT_00b30aac ^ (uint)&stack0xffffff70;
  *unaff_FS_OFFSET = (int)&local_c;
  local_78 = local_b0;
  local_70 = param_3;
  local_7c = param_2;
  uStack_b4 = 8;
  local_98 = (undefined4 *)0xf;
  local_9c = (undefined1 *)0x0;
  local_74 = param_5;
  local_80 = param_6;
  local_ac = 0;
  FUN_00414500("FRCTL001");
  uStack_b4 = 0x6ed8ed;
  FUN_006f6110();
  local_98 = (undefined4 *)0x1;
  local_78 = (undefined1 *)&uStack_b4;
  local_9c = (undefined1 *)0xf;
  local_a0 = (undefined4 *)0x0;
  local_4 = 0;
  local_b0[0] = 0;
  FUN_00414420(param_1,0,0xffffffff);
  cVar1 = FUN_006f66e0();
  if (cVar1 != '\0') {
    local_98 = (undefined4 *)0x18;
    local_9c = (undefined1 *)0x1;
    local_a0 = &local_6c;
    uStack_a4 = 0x6ed949;
    cVar1 = FUN_006f5e50();
    if (cVar1 != '\0') {
      iVar4 = 2;
      do {
        iVar3 = 2;
        do {
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *local_7c = local_6c;
      *local_70 = local_68;
      *param_4 = local_64;
      param_4[1] = local_60;
      local_98 = param_4;
      local_9c = local_54;
      param_4[2] = local_5c;
      param_4[3] = local_58;
      local_a0 = (undefined4 *)0x6ed9b0;
      cVar1 = FUN_006ef020();
      if (cVar1 != '\0') {
        local_98 = param_4;
        local_9c = local_54;
        local_a0 = (undefined4 *)0x6ed9c7;
        cVar1 = FUN_006ee270();
        local_4 = 0xffffffff;
        if (cVar1 != '\0') {
          local_98 = (undefined4 *)0x6ed9df;
          FUN_006ed7c0();
          uVar2 = 1;
          goto LAB_006ed9e1;
        }
      }
    }
  }
  local_4 = 0xffffffff;
  local_98 = (undefined4 *)0x6ed930;
  FUN_006ed7c0();
  uVar2 = 0;
LAB_006ed9e1:
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



void FUN_006eda10(int param_1,size_t param_2,char param_3)

{
  int in_ECX;
  int iVar1;
  
  if (param_2 != 1) {
    if (*(uint *)(in_ECX + 0x18) < 0x10) {
      iVar1 = in_ECX + 4;
    }
    else {
      iVar1 = *(int *)(in_ECX + 4);
    }
    _memset((void *)(iVar1 + param_1),(int)param_3,param_2);
    return;
  }
  if (0xf < *(uint *)(in_ECX + 0x18)) {
    *(char *)(*(int *)(in_ECX + 4) + param_1) = param_3;
    return;
  }
  *(char *)(in_ECX + 4 + param_1) = param_3;
  return;
}



int FUN_006eda70(uint param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0x14) < param_1) {
    FUN_00984d5e();
  }
  if (0xf < *(uint *)(in_ECX + 0x18)) {
    return *(int *)(in_ECX + 4) + param_1;
  }
  return in_ECX + 4 + param_1;
}



void FUN_006edaa0(uint param_1,undefined4 param_2)

{
  int in_ECX;
  uint uVar1;
  
  if (-*(int *)(in_ECX + 0x14) - 1U <= param_1) {
    FUN_00980570();
  }
  if (param_1 != 0) {
    uVar1 = *(int *)(in_ECX + 0x14) + param_1;
    if (uVar1 == 0xffffffff) {
      FUN_00980570();
    }
    if (*(uint *)(in_ECX + 0x18) < uVar1) {
      FUN_004135c0(uVar1,*(undefined4 *)(in_ECX + 0x14));
    }
    else if (uVar1 == 0) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
      if (*(uint *)(in_ECX + 0x18) < 0x10) {
        *(undefined1 *)(in_ECX + 4) = 0;
        return;
      }
      **(undefined1 **)(in_ECX + 4) = 0;
      return;
    }
    if (uVar1 != 0) {
      FUN_006eda10(*(undefined4 *)(in_ECX + 0x14),param_1,param_2);
      *(uint *)(in_ECX + 0x14) = uVar1;
      if (0xf < *(uint *)(in_ECX + 0x18)) {
        *(undefined1 *)(*(int *)(in_ECX + 4) + uVar1) = 0;
        return;
      }
      *(undefined1 *)(in_ECX + 4 + uVar1) = 0;
    }
  }
  return;
}



void FUN_006edb50(uint param_1)

{
  int in_ECX;
  
  if (param_1 <= *(uint *)(in_ECX + 0x14)) {
    FUN_004134e0(param_1,0xffffffff);
    return;
  }
  FUN_006edaa0(param_1 - *(uint *)(in_ECX + 0x14),0);
  return;
}



int FUN_006edb80(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_005520e0(param_1);
    FUN_00414420(param_1 + 0x18,0,0xffffffff);
    param_1 = param_1 + 0x34;
    param_3 = param_3 + 0x34;
  } while (param_1 != param_2);
  return param_3;
}



int FUN_006edbd0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar1 = param_2 + -0x34;
    param_3 = param_3 + -0x34;
    FUN_005520e0(iVar1);
    FUN_00414420(param_2 + -0x1c,0,0xffffffff);
    param_2 = iVar1;
  } while (iVar1 != param_1);
  return param_3;
}



void FUN_006edc20(int param_1)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8438;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00552160(param_1);
  *(undefined4 *)(in_ECX + 0x30) = 0xf;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  FUN_00414420(param_1 + 0x18,0,0xffffffff);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006edc90(int param_1,int param_2,int param_3)

{
  if (param_1 != param_2) {
    do {
      FUN_005520e0(param_3);
      FUN_00414420(param_3 + 0x18,0,0xffffffff);
      param_1 = param_1 + 0x34;
    } while (param_1 != param_2);
  }
  return;
}



int FUN_006edcd0(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_006edbd0(param_1,param_2,param_3,param_3,local_4,local_8);
  return param_3 + ((param_2 - param_1) / 0x34) * -0x34;
}



float10 FUN_006edd30(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  char *in_ECX;
  undefined1 local_18 [12];
  int local_c;
  
  if (4 < param_1) {
    FUN_006ed6d0(".\\FanControls.cpp",0xbb);
  }
  if (1 < param_2) {
    FUN_006ed6d0(".\\FanControls.cpp",0xbc);
  }
  if (1 < param_3) {
    FUN_006ed6d0(".\\FanControls.cpp",0xbd);
  }
  if (*in_ECX == '\0') {
    return (float10)0;
  }
  iVar2 = FUN_005523c0(local_18,param_3 * 0x30 + param_4);
  if ((*(int *)(iVar2 + 0xc) == 0) || (*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2 == 0)) {
    FUN_00984d5e();
  }
  fVar1 = **(float **)(iVar2 + 0xc);
  if (local_c != 0) {
    FUN_00401f20(local_c);
  }
  return (float10)(*(float *)(in_ECX + (param_3 + (param_2 + param_1 * 2) * 2) * 0x20 + 0x278) +
                  fVar1);
}



void FUN_006ede10(float param_1,int param_2,int param_3,undefined4 param_4)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *in_ECX;
  int iVar5;
  int *unaff_FS_OFFSET;
  float10 fVar6;
  float local_54 [4];
  double local_44;
  undefined1 local_3c [12];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  int local_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = (int)param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8470;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff94;
  *unaff_FS_OFFSET = (int)&local_c;
  if (4 < (int)param_1) {
    FUN_006ed6d0(".\\FanControls.cpp",0xd9,uVar2);
  }
  if (*in_ECX != '\0') {
    local_54[0] = 15.0;
    local_54[1] = -4.0;
    iVar5 = 0;
    local_54[2] = 65.0;
    local_54[3] = 4.0;
    do {
      pfVar1 = local_54 + iVar5;
      param_1 = *(float *)((param_3 - (int)local_54) + (int)pfVar1);
      if (param_1 < *pfVar1) {
        param_1 = *pfVar1;
      }
      if (local_54[iVar5 + 2] < param_1) {
        param_1 = local_54[iVar5 + 2];
      }
      local_44 = (double)param_1;
      fVar6 = (float10)FUN_006edd30(iVar3,iVar5,param_2,param_4);
      iVar5 = iVar5 + 1;
      *(float *)(&stack0xffffffa0 + iVar5 * 4) = (float)((float10)local_44 - fVar6);
    } while (iVar5 < 2);
    iVar3 = (param_2 + iVar3 * 2) * 0x10;
    pfVar1 = (float *)(in_ECX + iVar3 + 0xc34);
    uVar2 = 0;
    local_54[2] = *(float *)(in_ECX + iVar3 + 0xc38) * 0.0 + *pfVar1 * 0.0;
    local_54[3] = pfVar1[3] * 0.0 + pfVar1[2] * 0.0;
    do {
      FUN_00552730(local_24);
      local_4 = 0;
      uVar4 = FUN_00552310(local_3c,local_54[uVar2 + 2]);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00551da0(uVar4);
      if (local_30 != 0) {
        FUN_00401f20(local_30);
      }
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_4 = 0xffffffff;
      if (local_18 != 0) {
        FUN_00401f20(local_18);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 2);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006ee010(float param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  uint local_24;
  int local_20;
  int local_1c;
  
  param_3 = param_3 - (int)param_2;
  local_1c = 2;
  do {
    local_20 = 2;
    do {
      uVar4 = *param_2;
      uVar1 = param_2[1];
      *(uint *)(param_3 + (int)param_2) = uVar4;
      *(uint *)((int)param_2 + param_3 + 4) = uVar1;
      FUN_00527160(uVar4 * uVar1,0);
      local_24 = 0;
      if (*param_2 != 0) {
        do {
          if (param_2[1] != 0) {
            uVar4 = 0;
            do {
              fVar5 = (float10)FUN_006f6a80();
              if ((param_2[3] == 0) || ((int)(param_2[4] - param_2[3]) >> 2 == 0)) {
                FUN_00984d5e();
              }
              uVar1 = param_2[3];
              iVar3 = param_2[1] * local_24 + uVar4;
              iVar2 = *(int *)(param_3 + 0xc + (int)param_2);
              if ((iVar2 == 0) || (*(int *)(param_3 + 0x10 + (int)param_2) - iVar2 >> 2 == 0)) {
                FUN_00984d5e();
              }
              iVar2 = *(int *)(param_3 + 4 + (int)param_2) * local_24 + uVar4;
              uVar4 = uVar4 + 1;
              *(float *)(*(int *)(param_3 + 0xc + (int)param_2) + iVar2 * 4) =
                   *(float *)(uVar1 + iVar3 * 4) + (float)(fVar5 * (float10)param_1 * (float10)1.5);
            } while (uVar4 < param_2[1]);
          }
          local_24 = local_24 + 1;
        } while (local_24 < *param_2);
      }
      param_2 = param_2 + 6;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  return;
}



undefined4 FUN_006ee130(undefined4 param_1,float param_2)

{
  FUN_00552310(param_1,1.0 / param_2);
  return param_1;
}



int FUN_006ee160(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_006edb80(param_1,param_2,param_3,param_3,local_4,local_8);
  return ((param_2 - param_1) / 0x34) * 0x34 + param_3;
}



int FUN_006ee1c0(int param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009c84a1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x34) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_006edc20(param_1);
    }
    param_3 = param_3 + 0x34;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}



undefined4 FUN_006ee270(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined1 *in_ECX;
  float *pfVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  int *local_94;
  int iStack_90;
  float *local_8c;
  int *local_88;
  uint local_84;
  int iStack_80;
  int iStack_7c;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined1 auStack_54 [12];
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [12];
  int iStack_30;
  undefined1 auStack_24 [12];
  int iStack_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c84e8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff5c;
  *unaff_FS_OFFSET = (int)&local_c;
  local_88 = (int *)(in_ECX + 0x268);
  local_8c = (float *)0x0;
  do {
    local_84 = 0;
    local_94 = local_88;
    do {
      uVar10 = 0;
      piVar8 = local_94;
      do {
        iVar4 = param_2[uVar10 * 2];
        piVar8[-3] = 1;
        piVar8[-2] = iVar4;
        FUN_00527160(iVar4,0);
        if ((*piVar8 == 0) || (piVar8[1] - *piVar8 >> 2 == 0)) {
          FUN_00984d5e(uVar3);
        }
        cVar2 = (**(code **)(*param_1 + 0x10))(*piVar8,4,param_2[uVar10 * 2]);
        if (cVar2 == '\0') goto LAB_006eea03;
        cVar2 = (**(code **)(*param_1 + 0x10))(piVar8 + 4,4,1);
        if (cVar2 == '\0') goto LAB_006eea03;
        fVar11 = (float10)FUN_005511d0();
        uVar10 = uVar10 + 1;
        piVar8[3] = (int)(float)((float10)1 / fVar11);
        piVar8 = piVar8 + 8;
      } while (uVar10 < 2);
      local_94 = local_94 + 0x10;
      local_84 = local_84 + 1;
    } while (local_84 < 2);
    local_88 = local_88 + 0x20;
    local_8c = (float *)((int)local_8c + 1);
  } while (local_8c < 5);
  local_8c = (float *)0x0;
  local_94 = (int *)0x0;
  do {
    local_84 = 0;
    do {
      if ((float *)local_84 != local_8c) {
        iVar4 = local_84 + (int)local_94;
        local_88 = (int *)0x0;
        uVar3 = 0;
        piVar8 = (int *)(in_ECX + iVar4 * 0x38 + 0x4e8);
        do {
          iVar1 = param_2[uVar3 * 2];
          piVar8[-3] = 1;
          piVar8[-2] = iVar1;
          FUN_00527160(iVar1,0);
          if ((*piVar8 == 0) || (piVar8[1] - *piVar8 >> 2 == 0)) {
            FUN_00984d5e();
          }
          cVar2 = (**(code **)(*param_1 + 0x10))(*piVar8,4,param_2[uVar3 * 2]);
          if (cVar2 == '\0') goto LAB_006eea03;
          fVar11 = (float10)FUN_005511d0();
          uVar3 = uVar3 + 1;
          piVar8 = piVar8 + 6;
          local_88 = (int *)(float)(fVar11 + (float10)(float)local_88);
        } while (uVar3 < 2);
        cVar2 = (**(code **)(*param_1 + 0x10))(in_ECX + iVar4 * 0x38 + 0x510,4,1);
        if (cVar2 == '\0') goto LAB_006eea03;
        *(float *)(in_ECX + iVar4 * 0x38 + 0x50c) = 1.0 / (float)local_88;
      }
      local_84 = local_84 + 1;
    } while (local_84 < 5);
    local_8c = (float *)((int)local_8c + 1);
    local_94 = (int *)((int)local_94 + 5);
  } while (local_94 < 0x19);
  iVar4 = param_2[2] + *param_2;
  local_8c = (float *)0x0;
  local_94 = (int *)(in_ECX + 0x40);
  do {
    uVar3 = 0;
    piVar8 = local_94 + -0xc;
    do {
      iVar1 = param_2[uVar3 * 2];
      piVar8[-3] = iVar1;
      piVar8[-2] = 1;
      FUN_00527160(iVar1,0);
      if ((*piVar8 == 0) || (piVar8[1] - *piVar8 >> 2 == 0)) {
        FUN_00984d5e();
      }
      cVar2 = (**(code **)(*param_1 + 0x10))(*piVar8,4,iVar1);
      if (cVar2 == '\0') goto LAB_006eea03;
      uVar3 = uVar3 + 1;
      piVar8 = piVar8 + 6;
    } while (uVar3 < 2);
    local_94[-3] = iVar4;
    local_94[-2] = iVar4;
    FUN_00527160(iVar4 * iVar4,0);
    if ((*local_94 == 0) || (local_94[1] - *local_94 >> 2 == 0)) {
      FUN_00984d5e();
    }
    cVar2 = (**(code **)(*param_1 + 0x10))(*local_94,4,iVar4 * iVar4);
    if (cVar2 == '\0') goto LAB_006eea03;
    uVar3 = 0;
    piVar8 = local_94;
    do {
      piVar9 = piVar8 + 6;
      iVar1 = param_2[uVar3 * 2];
      piVar8[3] = iVar1;
      piVar8[4] = iVar1;
      FUN_00527160(iVar1 * iVar1,0);
      if ((*piVar9 == 0) || (piVar8[7] - *piVar9 >> 2 == 0)) {
        FUN_00984d5e();
      }
      cVar2 = (**(code **)(*param_1 + 0x10))(*piVar9,4,iVar1 * iVar1);
      if (cVar2 == '\0') goto LAB_006eea03;
      uVar3 = uVar3 + 1;
      piVar8 = piVar9;
    } while (uVar3 < 2);
    local_94 = local_94 + 0x1e;
    local_8c = (float *)((int)local_8c + 1);
  } while (local_8c < 5);
  local_8c = (float *)0x5;
  do {
    local_84 = 2;
    do {
      FUN_005511d0();
      fVar11 = (float10)FUN_00982c30();
      if ((float)fVar11 <= 0.001) {
        FUN_006ed6d0(".\\FanControls.cpp",0x85);
      }
      uVar5 = FUN_006ee130(&fStack_74,(float)fVar11);
      uStack_4 = 0;
      FUN_005520e0(uVar5);
      uStack_4 = 0xffffffff;
      if (fStack_68 != 0.0) {
        FUN_00401f20(fStack_68);
      }
      uVar5 = FUN_00552730(auStack_3c);
      uStack_4 = 1;
      iVar4 = FUN_005523c0(&fStack_74,uVar5);
      if ((*(int *)(iVar4 + 0xc) == 0) || (*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2 == 0)
         ) {
        FUN_00984d5e();
      }
      uVar5 = **(undefined4 **)(iVar4 + 0xc);
      if (fStack_68 != 0.0) {
        FUN_00401f20(fStack_68);
      }
      fStack_68 = 0.0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_4 = 0xffffffff;
      if (iStack_30 != 0) {
        FUN_00401f20(iStack_30);
      }
      uVar5 = FUN_00552310(auStack_3c,uVar5);
      uStack_4 = 2;
      uVar5 = FUN_00552630(&fStack_74,uVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,3);
      FUN_005520e0(uVar5);
      if (fStack_68 != 0.0) {
        FUN_00401f20(fStack_68);
      }
      fStack_68 = 0.0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_4 = 0xffffffff;
      if (iStack_30 != 0) {
        FUN_00401f20(iStack_30);
      }
      FUN_005511d0();
      fVar11 = (float10)FUN_00982c30();
      if ((float)fVar11 <= 0.001) {
        FUN_006ed6d0(".\\FanControls.cpp",0x8d);
      }
      FUN_00551d40(1.0 / (float)fVar11);
      local_84 = local_84 + -1;
    } while (local_84 != 0);
    local_8c = (float *)((int)local_8c + -1);
  } while (local_8c != (float *)0x0);
  pfVar6 = (float *)(in_ECX + 0xc38);
  iStack_90 = 5;
  do {
    iStack_7c = 2;
    local_8c = pfVar6;
    do {
      pfVar7 = local_8c + -1;
      *pfVar7 = 0.0;
      *local_8c = 0.0;
      local_8c[1] = 0.0;
      local_8c[2] = 0.0;
      iStack_80 = 2;
      pfVar6 = pfVar7;
      do {
        iStack_5c = 2;
        do {
          uVar5 = FUN_00552730(auStack_24);
          uStack_4 = 4;
          iVar4 = FUN_005523c0(auStack_54,uVar5);
          if ((*(int *)(iVar4 + 0xc) == 0) ||
             (*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2 == 0)) {
            FUN_00984d5e();
          }
          *pfVar6 = *pfVar6 + **(float **)(iVar4 + 0xc);
          if (iStack_48 != 0) {
            FUN_00401f20(iStack_48);
          }
          iStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_4 = 0xffffffff;
          if (iStack_18 != 0) {
            FUN_00401f20(iStack_18);
          }
          pfVar6 = pfVar6 + 1;
          iStack_5c = iStack_5c + -1;
        } while (iStack_5c != 0);
        iStack_80 = iStack_80 + -1;
      } while (iStack_80 != 0);
      pfVar6 = local_8c + 4;
      iStack_7c = iStack_7c + -1;
      fStack_68 = 1.0 / (local_8c[2] * *pfVar7 - local_8c[1] * *local_8c);
      fStack_74 = fStack_68 * local_8c[2];
      fStack_70 = -*local_8c * fStack_68;
      fStack_6c = -local_8c[1] * fStack_68;
      fStack_68 = fStack_68 * *pfVar7;
      *pfVar7 = fStack_74;
      *local_8c = fStack_70;
      local_8c[1] = fStack_6c;
      local_8c[2] = fStack_68;
      local_8c = pfVar6;
    } while (iStack_7c != 0);
    iStack_90 = iStack_90 + -1;
  } while (iStack_90 != 0);
  *in_ECX = 1;
  uVar5 = 1;
LAB_006ee9e7:
  *unaff_FS_OFFSET = local_c;
  return uVar5;
LAB_006eea03:
  uVar5 = 0;
  goto LAB_006ee9e7;
}



void FUN_006eea10(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    uVar1 = FUN_006ee160(param_5,*(undefined4 *)(in_ECX + 8),param_3);
    FUN_005522b0(uVar1,*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = uVar1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



void FUN_006eea70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006edcd0(param_1,param_2,param_3,param_3,param_3,0);
  return;
}



void FUN_006eeaa0(int param_1,int param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009c8521;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_006edc20(param_3);
    }
    param_1 = param_1 + 0x34;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



int FUN_006eeb50(int param_1,int param_2,undefined4 param_3)

{
  FUN_006eeaa0(param_1,param_2,param_3);
  return param_2 * 0x34 + param_1;
}



void FUN_006eeb90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006ee1c0(param_1,param_2,param_3);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006eebc0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int extraout_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_6c;
  undefined1 local_4c [12];
  int local_40;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009c8548;
  local_10 = *unaff_FS_OFFSET;
  uStack_6c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_6c;
  *unaff_FS_OFFSET = (int)&local_10;
  local_18 = uStack_6c;
  FUN_006edc20(param_4);
  iVar2 = *(int *)(in_ECX + 4);
  uVar5 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar5 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x34;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x34;
    }
    if (0x4ec4ec4U - iVar1 < param_3) {
      FUN_00790b90();
      iVar2 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x34;
    }
    if (uVar5 < iVar1 + param_3) {
      if (0x4ec4ec4 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x34;
      }
      if (uVar5 < iVar2 + param_3) {
        iVar2 = FUN_0054f6a0();
        uVar5 = iVar2 + param_3;
      }
      iVar1 = FUN_0054f740(uVar5,0);
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar3 = FUN_006ee1c0(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar3 = FUN_006eeb50(uVar3,param_3,local_4c);
      FUN_006ee1c0(param_2,*(undefined4 *)(in_ECX + 8),uVar3);
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x34;
      }
      if (iVar2 != 0) {
        FUN_005522b0(iVar2,*(undefined4 *)(in_ECX + 8));
        FUN_00401f20(*(undefined4 *)(in_ECX + 4));
      }
      *(uint *)(in_ECX + 0xc) = uVar5 * 0x34 + iVar1;
      *(uint *)(in_ECX + 8) = (param_3 + iVar4) * 0x34 + iVar1;
      *(int *)(in_ECX + 4) = iVar1;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8);
      if ((uint)((iVar2 - param_2) / 0x34) < param_3) {
        FUN_006eeb90(param_2,iVar2,param_3 * 0x34 + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_006eeb50(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2) / 0x34,local_4c
                    );
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x34;
        local_8 = 0;
        FUN_006edc90(param_2,*(int *)(in_ECX + 8) + param_3 * -0x34,local_4c);
      }
      else {
        iVar1 = iVar2 + param_3 * -0x34;
        uVar3 = FUN_006eeb90(iVar1,iVar2,iVar2);
        *(undefined4 *)(in_ECX + 8) = uVar3;
        FUN_006eea70(param_2,iVar1,iVar2);
        FUN_006edc90(param_2,param_3 * 0x34 + param_2,local_4c);
      }
    }
  }
  if (0xf < local_1c) {
    FUN_00401f20(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  if (local_40 != 0) {
    FUN_00401f20(local_40);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_006eeee0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int in_stack_00000014;
  uint in_stack_00000024;
  undefined4 in_stack_00000034;
  uint in_stack_00000038;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8578;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar1 = *(uint *)(in_ECX + 4);
  iVar5 = 0;
  local_4 = 0;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (int)(*(int *)(in_ECX + 8) - uVar1) / 0x34;
  }
  if (uVar3 < param_1) {
    if (uVar1 != 0) {
      iVar5 = (int)(*(int *)(in_ECX + 8) - uVar1) / 0x34;
    }
    uVar3 = *(uint *)(in_ECX + 8);
    if (uVar3 < uVar1) {
      FUN_00984d5e(uVar2);
    }
    FUN_006eebc0(in_ECX,uVar3,param_1 - iVar5,&stack0x00000008);
  }
  else if (uVar1 != 0) {
    uVar3 = *(uint *)(in_ECX + 8);
    if (param_1 < (uint)((int)(uVar3 - uVar1) / 0x34)) {
      if (uVar3 < uVar1) {
        FUN_00984d5e(uVar2);
      }
      uVar1 = *(uint *)(in_ECX + 4);
      if (*(uint *)(in_ECX + 8) < uVar1) {
        FUN_00984d5e(uVar2);
      }
      uVar4 = param_1 * 0x34 + uVar1;
      local_10 = uVar1;
      if ((*(uint *)(in_ECX + 8) < uVar4) || (uVar4 < *(uint *)(in_ECX + 4))) {
        FUN_00984d5e(uVar2);
      }
      FUN_006eea10(local_14,in_ECX,uVar4,in_ECX,uVar3);
    }
  }
  if (0xf < in_stack_00000038) {
    FUN_00401f20(in_stack_00000024);
  }
  in_stack_00000038 = 0xf;
  in_stack_00000034 = 0;
  in_stack_00000024 = in_stack_00000024 & 0xffffff00;
  if (in_stack_00000014 != 0) {
    FUN_00401f20(in_stack_00000014);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x006ef076) */
/* WARNING: Removing unreachable block (ram,0x006ef083) */
/* WARNING: Removing unreachable block (ram,0x006ef08c) */
/* WARNING: Removing unreachable block (ram,0x006ef0a2) */
/* WARNING: Removing unreachable block (ram,0x006ef0ae) */

uint FUN_006ef020(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  uint unaff_EBX;
  uint uVar4;
  int iStack_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = 0;
  do {
    local_18 = 0;
    do {
      uVar3 = (**(code **)(*param_1 + 0x10))();
      if ((char)uVar3 == '\0') {
LAB_006ef2c1:
        return uVar3 & 0xffffff00;
      }
      iVar1 = local_14 + local_18;
      FUN_006eeee0(local_1c);
      uVar4 = 0;
      if (local_1c != 0) {
        iStack_20 = 0;
        do {
          if ((in_ECX[iVar1 * 4 + 1] == 0) ||
             ((uint)((in_ECX[iVar1 * 4 + 2] - in_ECX[iVar1 * 4 + 1]) / 0x34) <= uVar4)) {
            FUN_00984d5e();
          }
          iVar2 = in_ECX[iVar1 * 4 + 1];
          ((undefined4 *)(iVar2 + iStack_20))[1] = *(undefined4 *)(param_2 + iVar1 * 4);
          *(undefined4 *)(iVar2 + iStack_20) = 1;
          FUN_00527160();
          if ((in_ECX[iVar1 * 4 + 1] == 0) ||
             ((uint)((in_ECX[iVar1 * 4 + 2] - in_ECX[iVar1 * 4 + 1]) / 0x34) <= uVar4)) {
            FUN_00984d5e();
          }
          iVar2 = *(int *)(iStack_20 + 0xc + in_ECX[iVar1 * 4 + 1]);
          if ((iVar2 == 0) || (*(int *)(iStack_20 + in_ECX[iVar1 * 4 + 1] + 0x10) - iVar2 >> 2 == 0)
             ) {
            FUN_00984d5e();
          }
          uVar3 = (**(code **)(*param_1 + 0x10))();
          if (((char)uVar3 == '\0') ||
             (uVar3 = (**(code **)(*in_ECX + 0x10))(), (char)uVar3 == '\0')) goto LAB_006ef2c1;
          if ((in_ECX[iVar1 * 4 + 1] == 0) ||
             ((uint)((in_ECX[iVar1 * 4 + 2] - in_ECX[iVar1 * 4 + 1]) / 0x34) <= uVar4)) {
            FUN_00984d5e();
          }
          if (*(uint *)(in_ECX[iVar1 * 4 + 1] + 0x30) < unaff_EBX) {
            FUN_006edaa0();
          }
          else {
            FUN_004134e0();
          }
          if ((in_ECX[iVar1 * 4 + 1] == 0) ||
             ((uint)((in_ECX[iVar1 * 4 + 2] - in_ECX[iVar1 * 4 + 1]) / 0x34) <= uVar4)) {
            FUN_00984d5e();
          }
          uVar3 = (**(code **)(*in_ECX + 0x10))();
          if ((char)uVar3 == '\0') goto LAB_006ef2c1;
          uVar4 = uVar4 + 1;
          iStack_20 = 0x38;
        } while (uVar4 < local_1c);
      }
      local_18 = local_18 + 1;
    } while (local_18 < 2);
    local_14 = local_14 + 2;
    if (3 < local_14) {
      return CONCAT31((int3)(local_14 >> 8),1);
    }
  } while( true );
}



void FUN_006ef2d0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}



void FUN_006ef2f0(undefined4 param_1,void *param_2,uint param_3,undefined1 *param_4)

{
  int iVar1;
  void *_Dst;
  rsize_t rVar2;
  void *_Dst_00;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)(in_ECX + 4);
  param_4 = (undefined1 *)CONCAT31(param_4._1_3_,*param_4);
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(in_ECX + 0xc) - iVar1;
  }
  if (param_3 != 0) {
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(in_ECX + 8) - iVar1;
    }
    if (-iVar4 - 1U < param_3) {
      iVar1 = FUN_00790b90();
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(in_ECX + 8) - iVar1;
    }
    if (uVar5 < iVar4 + param_3) {
      if (-(uVar5 >> 1) - 1 < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_ECX + 8) - iVar1;
      }
      if (uVar5 < iVar4 + param_3) {
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(in_ECX + 8) - iVar1;
        }
        uVar5 = iVar1 + param_3;
      }
      _Dst = (void *)FUN_00401f00(uVar5);
      rVar2 = (int)param_2 - (int)*(void **)(in_ECX + 4);
      if (rVar2 != 0) {
        _memmove_s(_Dst,rVar2,*(void **)(in_ECX + 4),rVar2);
      }
      _Dst_00 = (void *)FUN_007890f0(rVar2 + (int)_Dst,param_3,&param_4);
      rVar2 = *(int *)(in_ECX + 8) - (int)param_2;
      if (rVar2 != 0) {
        _memmove_s(_Dst_00,rVar2,param_2,rVar2);
      }
      iVar1 = *(int *)(in_ECX + 4);
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_ECX + 8) - iVar1;
      }
      if (iVar1 != 0) {
        FUN_00401f20(iVar1);
      }
      *(void **)(in_ECX + 4) = _Dst;
      *(uint *)(in_ECX + 0xc) = (int)_Dst + uVar5;
      *(uint *)(in_ECX + 8) = (int)_Dst + param_3 + iVar4;
      return;
    }
    iVar1 = *(int *)(in_ECX + 8);
    if ((uint)(iVar1 - (int)param_2) < param_3) {
      FUN_00556cd0(param_2,iVar1,(int)param_2 + param_3);
      FUN_007890f0(*(int *)(in_ECX + 8),(int)param_2 + (param_3 - *(int *)(in_ECX + 8)),&param_4);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3;
      FUN_006ef2d0(param_2,*(int *)(in_ECX + 8) - param_3,&param_4);
      return;
    }
    uVar3 = FUN_00556cd0(iVar1 - param_3,iVar1,iVar1);
    *(undefined4 *)(in_ECX + 8) = uVar3;
    FUN_00788a80(param_2,iVar1 - param_3,iVar1);
    FUN_006ef2d0(param_2,(int)param_2 + param_3,&param_4);
  }
  return;
}



void FUN_006ef4a0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



void FUN_006ef4b0(uint param_1)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  undefined1 local_8 [4];
  uint local_4;
  
  uVar1 = *(uint *)(in_ECX + 4);
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(in_ECX + 8) - uVar1;
  }
  if (uVar2 < param_1) {
    if (uVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(in_ECX + 8) - uVar1;
    }
    uVar2 = *(uint *)(in_ECX + 8);
    if (uVar2 < uVar1) {
      FUN_00984d5e();
    }
    FUN_006ef2f0(in_ECX,uVar2,param_1 - iVar3,&stack0x00000008);
    return;
  }
  if ((uVar1 != 0) && (uVar2 = *(uint *)(in_ECX + 8), param_1 < uVar2 - uVar1)) {
    if (uVar2 < uVar1) {
      FUN_00984d5e();
    }
    uVar1 = *(uint *)(in_ECX + 4);
    if (*(uint *)(in_ECX + 8) < uVar1) {
      FUN_00984d5e();
    }
    param_1 = param_1 + uVar1;
    local_4 = uVar1;
    if ((*(uint *)(in_ECX + 8) < param_1) || (param_1 < *(uint *)(in_ECX + 4))) {
      FUN_00984d5e();
    }
    FUN_00788b10(local_8,in_ECX,param_1,in_ECX,uVar2);
  }
  return;
}



void FUN_006ef560(int param_1,int param_2,undefined4 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    FUN_00557770(param_3);
  }
  return;
}



void FUN_006ef590(int param_1,int param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009c85a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00557800(param_1,param_3);
    param_1 = param_1 + 0x40;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



int FUN_006ef620(int param_1,int param_2,undefined4 param_3)

{
  FUN_006ef590(param_1,param_2,param_3);
  return param_2 * 0x40 + param_1;
}



void FUN_006ef660(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_6c;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [48];
  uint local_1c;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009c85c8;
  local_10 = *unaff_FS_OFFSET;
  uStack_6c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_6c;
  *unaff_FS_OFFSET = (int)&local_10;
  local_58 = param_4[1];
  local_5c = *param_4;
  local_54 = param_4[2];
  local_50 = param_4[3];
  _eh_vector_copy_constructor_iterator_(local_4c,param_4 + 4,0x10,3,FUN_00557340,FUN_00794eb0);
  iVar1 = *(int *)(in_ECX + 4);
  iVar4 = 0;
  local_8 = 0;
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(in_ECX + 0xc) - iVar1 >> 6;
  }
  if (param_3 != 0) {
    if (iVar1 != 0) {
      iVar4 = *(int *)(in_ECX + 8) - iVar1 >> 6;
    }
    if (0x3ffffffU - iVar4 < param_3) {
      iVar1 = FUN_00790b90();
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(in_ECX + 8) - iVar1 >> 6;
    }
    if (uVar5 < iVar4 + param_3) {
      if (0x3ffffff - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_ECX + 8) - iVar1 >> 6;
      }
      if (uVar5 < iVar4 + param_3) {
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(in_ECX + 8) - iVar1 >> 6;
        }
        uVar5 = iVar1 + param_3;
      }
      iVar4 = FUN_00556350(uVar5,0);
      local_1c = local_1c & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar2 = FUN_00557a10(*(undefined4 *)(in_ECX + 4),param_2,iVar4);
      uVar2 = FUN_006ef620(uVar2,param_3,&local_5c);
      local_1c = local_1c & 0xffffff00;
      FUN_00557a10(param_2,*(undefined4 *)(in_ECX + 8),uVar2);
      iVar1 = *(int *)(in_ECX + 4);
      local_8 = 0;
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(in_ECX + 8) - iVar1 >> 6;
      }
      if (iVar1 != 0) {
        FUN_00557740(iVar1,*(undefined4 *)(in_ECX + 8));
        FUN_00401f20(*(undefined4 *)(in_ECX + 4));
      }
      *(uint *)(in_ECX + 0xc) = uVar5 * 0x40 + iVar4;
      *(uint *)(in_ECX + 8) = (param_3 + iVar3) * 0x40 + iVar4;
      *(int *)(in_ECX + 4) = iVar4;
    }
    else {
      local_1c = *(uint *)(in_ECX + 8);
      if ((uint)((int)(local_1c - param_2) >> 6) < param_3) {
        FUN_00559980(param_2,local_1c,param_3 * 0x40 + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_006ef620(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2 >> 6),&local_5c)
        ;
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x40;
        local_8 = 0;
        FUN_006ef560(param_2,*(int *)(in_ECX + 8) + param_3 * -0x40,&local_5c);
      }
      else {
        iVar1 = local_1c + param_3 * -0x40;
        uVar2 = FUN_00559980(iVar1,local_1c,local_1c);
        *(undefined4 *)(in_ECX + 8) = uVar2;
        FUN_00558680(param_2,iVar1,local_1c);
        FUN_006ef560(param_2,param_3 * 0x40 + param_2,&local_5c);
      }
    }
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_4c,0x10,3,FUN_00794eb0);
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_006ef920(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c85f8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar1 = *(uint *)(in_ECX + 4);
  iVar4 = 0;
  local_4 = 0;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (int)(*(int *)(in_ECX + 8) - uVar1) >> 6;
  }
  if (uVar3 < param_1) {
    if (uVar1 != 0) {
      iVar4 = (int)(*(int *)(in_ECX + 8) - uVar1) >> 6;
    }
    uVar3 = *(uint *)(in_ECX + 8);
    if (uVar3 < uVar1) {
      FUN_00984d5e(uVar2);
    }
    FUN_006ef660(in_ECX,uVar3,param_1 - iVar4,&stack0x00000008);
  }
  else if ((uVar1 != 0) &&
          (uVar3 = *(uint *)(in_ECX + 8), param_1 < (uint)((int)(uVar3 - uVar1) >> 6))) {
    if (uVar3 < uVar1) {
      FUN_00984d5e(uVar2);
    }
    uVar1 = *(uint *)(in_ECX + 4);
    if (*(uint *)(in_ECX + 8) < uVar1) {
      FUN_00984d5e(uVar2);
    }
    uVar5 = param_1 * 0x40 + uVar1;
    local_10 = uVar1;
    if ((*(uint *)(in_ECX + 8) < uVar5) || (uVar5 < *(uint *)(in_ECX + 4))) {
      FUN_00984d5e(uVar2);
    }
    FUN_005592a0(local_14,in_ECX,uVar5,in_ECX,uVar3);
  }
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(&stack0x00000018,0x10,3,FUN_00794eb0);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006efa20(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  char *pcStack_e4;
  undefined4 uStack_e0;
  undefined1 local_dc [4];
  undefined1 local_d8;
  undefined4 uStack_d0;
  uint *local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  uint local_ac;
  uint local_a8;
  undefined1 *local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  int local_94;
  int local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  uint local_80;
  undefined4 local_7c;
  undefined **local_54;
  undefined4 *local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8640;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_ac;
  local_c0 = DAT_00b30aac ^ (uint)&stack0xffffff44;
  *unaff_FS_OFFSET = (int)&local_c;
  local_a4 = local_dc;
  uStack_e0 = 8;
  local_c4 = 0xf;
  local_c8 = 0;
  pcStack_e4 = "FREGT003";
  local_d8 = 0;
  uStack_e8 = 0x6efa9e;
  FUN_00414500();
  uStack_e0 = 0x6efaaa;
  FUN_006f6110();
  local_c4 = 0;
  local_a4 = (undefined1 *)&uStack_e0;
  pcStack_e4 = (char *)0xffffffff;
  uStack_e8 = 0;
  local_c8 = 0xf;
  local_cc = (uint *)0x0;
  uStack_ec = param_1;
  local_4 = 0;
  local_dc[0] = 0;
  uStack_f0 = 0x6efad3;
  FUN_00414420();
  pcStack_e4 = (char *)0x6efadf;
  cVar4 = FUN_006f66e0();
  if (cVar4 == '\0') {
    local_4 = 0xffffffff;
    local_c4 = 0x6efaf7;
    FUN_006ed7c0();
    uVar5 = 0;
  }
  else {
    local_c4 = 0x38;
    local_c8 = 1;
    local_cc = &local_8c;
    uStack_d0 = 0x6efb0c;
    cVar4 = FUN_006f5e50();
    if (cVar4 == '\0') {
LAB_006efb10:
      local_4 = 0xffffffff;
      local_c4 = 0x6efb24;
      FUN_006ed7c0();
      uVar5 = 0;
    }
    else {
      *param_2 = local_7c;
      local_c4 = 0x6efb38;
      FUN_00559930();
      local_c4 = 0x6efb3f;
      FUN_00559930();
      uVar7 = local_84;
      local_9c = (local_88 + 7U & 0xfffffff8) - local_88;
      local_90 = local_88 + local_9c;
      local_a4 = auStack_100;
      local_94 = local_8c * local_90;
      _eh_vector_constructor_iterator_(&uStack_f0,0x10,3,FUN_006ef4a0,FUN_00794eb0);
      FUN_006ef920(uVar7);
      local_a8 = 0;
      if (local_84 != 0) {
        local_98 = 0;
        do {
          uVar9 = local_98;
          uVar7 = local_a8;
          if ((*(int *)(param_3 + 4) == 0) ||
             ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 6) <= local_a8)) {
            local_c4 = 0x6efbd0;
            FUN_00984d5e();
          }
          local_c4 = 1;
          local_cc = (uint *)(*(int *)(param_3 + 4) + uVar9);
          local_c8 = 4;
          uStack_d0 = 0x6efbe3;
          cVar4 = FUN_006f5d40();
          if (cVar4 == '\0') goto LAB_006efb10;
          if ((*(int *)(param_3 + 4) == 0) ||
             ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 6) <= uVar7)) {
            local_c4 = 0x6efc03;
            FUN_00984d5e();
          }
          *(int *)(uVar9 + 4 + *(int *)(param_3 + 4)) = local_88;
          if ((*(int *)(param_3 + 4) == 0) ||
             ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 6) <= uVar7)) {
            local_c4 = 0x6efc26;
            FUN_00984d5e();
          }
          *(uint *)(uVar9 + 8 + *(int *)(param_3 + 4)) = local_8c;
          if ((*(int *)(param_3 + 4) == 0) ||
             ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 6) <= uVar7)) {
            local_c4 = 0x6efc49;
            FUN_00984d5e();
          }
          local_a4 = (undefined1 *)(local_94 - local_90);
          *(int *)(uVar9 + 0xc + *(int *)(param_3 + 4)) = local_9c;
          local_ac = 0;
          local_a0 = uVar9;
          do {
            puVar3 = local_a4;
            if ((*(int *)(param_3 + 4) == 0) ||
               ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 6) <= local_a8)) {
              local_c4 = 0x6efc92;
              FUN_00984d5e();
            }
            local_c4 = 0;
            local_c8 = local_94;
            local_cc = (uint *)0x6efca9;
            FUN_006ef4b0();
            if ((*(int *)(param_3 + 4) == 0) ||
               ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 6) <= local_a8)) {
              local_c4 = 0x6efcc3;
              FUN_00984d5e();
            }
            iVar6 = *(int *)(param_3 + 4) + uVar9;
            piVar1 = (int *)(iVar6 + 0x14 + local_ac);
            iVar2 = *piVar1;
            if ((iVar2 == 0) ||
               ((undefined1 *)(*(int *)(iVar6 + 0x18 + local_ac) - iVar2) <= puVar3)) {
              local_c4 = 0x6efce9;
              FUN_00984d5e();
            }
            puVar8 = (uint *)(puVar3 + *piVar1);
            uVar7 = 0;
            if (local_8c != 0) {
              do {
                local_c4 = local_88;
                local_c8 = 1;
                uStack_d0 = 0x6efd0d;
                local_cc = puVar8;
                cVar4 = FUN_006f5d40();
                if (cVar4 == '\0') {
                  local_4 = 1;
                  goto LAB_006efdb5;
                }
                uVar7 = uVar7 + 1;
                puVar8 = (uint *)((int)puVar8 - (local_88 + local_9c));
              } while (uVar7 < local_8c);
            }
            local_a0 = local_a0 + 0x10;
            local_ac = local_ac + 0x10;
            uVar9 = local_98;
          } while (local_ac < 0x30);
          local_98 = local_98 + 0x40;
          local_a8 = local_a8 + 1;
        } while (local_a8 < local_84);
      }
      uVar7 = local_80;
      local_a4 = auStack_100;
      _eh_vector_constructor_iterator_(&uStack_f0,0x10,3,FUN_006ef4a0,FUN_00794eb0);
      FUN_006ef920(uVar7);
      local_a8 = 0;
      if (local_80 != 0) {
        local_ac = 0;
        do {
          uVar9 = local_a8;
          uVar7 = local_ac;
          if ((*(int *)(param_4 + 4) == 0) ||
             ((uint)(*(int *)(param_4 + 8) - *(int *)(param_4 + 4) >> 6) <= local_a8)) {
            local_c4 = 0x6efe10;
            FUN_00984d5e();
          }
          local_c4 = 1;
          local_cc = (uint *)(*(int *)(param_4 + 4) + uVar7);
          local_c8 = 4;
          uStack_d0 = 0x6efe23;
          cVar4 = FUN_006f5d40();
          if (cVar4 == '\0') goto LAB_006efb10;
          if ((*(int *)(param_4 + 4) == 0) ||
             ((uint)(*(int *)(param_4 + 8) - *(int *)(param_4 + 4) >> 6) <= uVar9)) {
            local_c4 = 0x6efe43;
            FUN_00984d5e();
          }
          *(int *)(*(int *)(param_4 + 4) + 4 + uVar7) = local_88;
          if ((*(int *)(param_4 + 4) == 0) ||
             ((uint)(*(int *)(param_4 + 8) - *(int *)(param_4 + 4) >> 6) <= uVar9)) {
            local_c4 = 0x6efe66;
            FUN_00984d5e();
          }
          *(uint *)(*(int *)(param_4 + 4) + 8 + uVar7) = local_8c;
          if ((*(int *)(param_4 + 4) == 0) ||
             ((uint)(*(int *)(param_4 + 8) - *(int *)(param_4 + 4) >> 6) <= uVar9)) {
            local_c4 = 0x6efe89;
            FUN_00984d5e();
          }
          *(int *)(*(int *)(param_4 + 4) + 0xc + uVar7) = local_9c;
          local_a4 = (undefined1 *)(local_94 - local_90);
          uVar7 = 0;
          local_a0 = local_ac;
          do {
            puVar3 = local_a4;
            if ((*(int *)(param_4 + 4) == 0) ||
               ((uint)(*(int *)(param_4 + 8) - *(int *)(param_4 + 4) >> 6) <= uVar9)) {
              local_c4 = 0x6efed0;
              FUN_00984d5e();
            }
            local_c4 = 0;
            local_c8 = local_94;
            local_cc = (uint *)0x6efee7;
            FUN_006ef4b0();
            if ((*(int *)(param_4 + 4) == 0) ||
               ((uint)(*(int *)(param_4 + 8) - *(int *)(param_4 + 4) >> 6) <= uVar9)) {
              local_c4 = 0x6efeff;
              FUN_00984d5e();
            }
            iVar6 = *(int *)(param_4 + 4) + local_ac;
            iVar2 = *(int *)(iVar6 + 0x14 + uVar7);
            if ((iVar2 == 0) || ((undefined1 *)(*(int *)(iVar6 + 0x18 + uVar7) - iVar2) <= puVar3))
            {
              local_c4 = 0x6eff21;
              FUN_00984d5e();
            }
            puVar8 = (uint *)(puVar3 + *(int *)(iVar6 + 0x14 + uVar7));
            uVar9 = 0;
            if (local_8c != 0) {
              do {
                local_c4 = local_88;
                local_c8 = 1;
                uStack_d0 = 0x6eff3e;
                local_cc = puVar8;
                cVar4 = FUN_006f5d40();
                if (cVar4 == '\0') {
                  local_4 = 2;
LAB_006efdb5:
                  local_54 = &PTR_FUN_00a7cd5c;
                  if (local_14 != (undefined4 *)0x0) {
                    local_c4 = 1;
                    local_c8 = 0x6efdc8;
                    (**(code **)*local_14)();
                  }
                  local_14 = (undefined4 *)0x0;
                  local_4 = 0xffffffff;
                  local_c4 = 0x6efde7;
                  FUN_006ed710();
                  uVar5 = 0;
                  goto LAB_006effce;
                }
                uVar9 = uVar9 + 1;
                puVar8 = (uint *)((int)puVar8 - (local_88 + local_9c));
              } while (uVar9 < local_8c);
            }
            local_a0 = local_a0 + 0x10;
            uVar7 = uVar7 + 0x10;
            uVar9 = local_a8;
          } while (uVar7 < 0x30);
          local_ac = local_ac + 0x40;
          local_a8 = local_a8 + 1;
        } while (local_a8 < local_80);
      }
      local_54 = &PTR_FUN_00a7cd5c;
      local_4 = 3;
      if (local_14 != (undefined4 *)0x0) {
        local_c4 = 1;
        local_c8 = 0x6effad;
        (**(code **)*local_14)();
      }
      local_14 = (undefined4 *)0x0;
      local_4 = 0xffffffff;
      local_c4 = 0x6effcc;
      FUN_006ed710();
      uVar5 = 1;
    }
  }
LAB_006effce:
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}


