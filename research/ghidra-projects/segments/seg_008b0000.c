
void thunk_FUN_0089f8e0(int param_1)

{
  int iVar1;
  uint *puVar2;
  int *in_ECX;
  
  iVar1 = param_1;
  FUN_00712a20();
  FUN_0089d650(iVar1);
  puVar2 = (uint *)(**(code **)(*in_ECX + 0x74))(&param_1);
  if (puVar2 != (uint *)0x0) {
    if (-1 < (int)puVar2[5]) {
      FUN_008a75d0(puVar2[3],puVar2[5] * 8,0x14);
    }
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = puVar2[5] & 0xc0000000 | 0x80000000;
  }
  if ((*(uint *)(iVar1 + 4) < 9) && ((*puVar2 & 0x20) != 0)) {
    *puVar2 = *puVar2 & 0xffffffdf | 0x8000;
  }
  if (((byte)*puVar2 & 0x3f) == 8) {
    *puVar2 = *puVar2 & 0xffffbfff;
  }
  return;
}



undefined4 FUN_008b0020(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x58))();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x2b0);
  }
  if (iVar1 != 0) {
    uVar2 = FUN_0088b430(in_ECX[2]);
    return uVar2;
  }
  return 0;
}



void FUN_008b0060(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x58))();
  if (iVar1 != 0) {
    FUN_0089b630(in_ECX[2],0,1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008b0080(int param_1)

{
  char *pcVar1;
  int in_ECX;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_4c [3];
  char local_49;
  undefined4 local_48;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_4c;
  FUN_0089fb70(param_1);
  local_48 = FUN_0070f910(DAT_00ba7f90);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_48);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    local_49 = '\0';
    pcVar1 = &local_49;
  }
  else {
    pcVar1 = (char *)FUN_008a63f0(&local_49);
  }
  local_48 = CONCAT31(local_48._1_3_,*pcVar1 != '\0');
  local_48 = FUN_0070f950("Active",local_48);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_48);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    local_49 = '\0';
  }
  else {
    local_49 = *(char *)(*(int *)(in_ECX + 8) + 0x91);
  }
  local_48 = FUN_0070f950("Fixed",CONCAT31((int3)((uint)&local_49 >> 8),local_49 != '\0'));
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_48);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x54);
  }
  _sprintf(local_44,"0x%08X",uVar3);
  local_48 = FUN_0070fc30("SimIsland",local_44);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_48);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b0210(void)

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
  *in_ECX = &PTR_FUN_00a55e8c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7f98 = _DAT_00ba7f98 + -1;
  local_4 = 0xffffffff;
  FUN_008a2550();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008b0280(int param_1)

{
  int in_ECX;
  
  FUN_008a2690(param_1);
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc);
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



void FUN_008b02b0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *piVar5;
  undefined4 unaff_retaddr;
  undefined1 local_1;
  
  iVar2 = (**(code **)(*in_ECX + 0x74))(&local_1);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)(*(int *)(iVar2 + 4) + 8);
    }
    if ((piVar5 != (int *)0x0) && (cVar1 = (**(code **)(*piVar5 + 0x8c))(param_1), cVar1 == '\0')) {
      iVar3 = (**(code **)(*piVar5 + 0x18))(param_1);
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar3 + 8);
      }
      *(undefined4 *)(iVar2 + 4) = uVar4;
    }
  }
  FUN_008a2670(unaff_retaddr,param_1);
  return;
}



void FUN_008b0320(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  undefined4 unaff_retaddr;
  undefined1 local_1;
  
  iVar1 = (**(code **)(*in_ECX + 0x74))(&local_1);
  iVar2 = FUN_007124a0();
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 8);
  }
  thunk_FUN_0089d6c0(unaff_retaddr);
  return;
}



void FUN_008b0360(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0xc);
  }
  if ((iVar1 != 0) && (*(int **)(iVar1 + 8) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 8) + 0x24))(param_1);
  }
  thunk_FUN_00700650(param_1);
  return;
}



void FUN_008b03a0(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0xc);
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    (**(code **)(*param_1 + 0x2c))(*(int *)(iVar1 + 8));
  }
  FUN_008a2610(param_1);
  return;
}



void FUN_008b03e0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  
  if ((char)param_1 == '\0') {
    if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(in_ECX + 8) + 0xc);
    }
    if (((iVar2 != 0) && (puVar1 = *(undefined4 **)(iVar2 + 8), puVar1 != (undefined4 *)0x0)) &&
       (LVar3 = InterlockedDecrement(puVar1 + 1), LVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
  }
  else {
    if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(in_ECX + 8) + 0xc);
    }
    if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
      InterlockedIncrement((LONG *)(*(int *)(iVar2 + 8) + 4));
      FUN_008a26c0(param_1);
      return;
    }
  }
  FUN_008a26c0(param_1);
  return;
}



void FUN_008b04d0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  iVar1 = param_1;
  FUN_008a2a50(param_1);
  param_1 = FUN_0070f910(DAT_00ba7f9c);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 8) + 0xc);
  }
  if ((iVar2 != 0) && (*(int **)(iVar2 + 8) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar2 + 8) + 0x30))(iVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b0560(void)

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
  *in_ECX = &PTR_FUN_00a55f2c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7fa4 = _DAT_00ba7fa4 + -1;
  local_4 = 0xffffffff;
  FUN_008b0210();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008b05d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  
  FUN_008b0280(param_1);
  if (((*(int *)(in_ECX + 8) != 0) && (iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0xc), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x10), iVar1 != 0)) {
    *(float *)(param_1 + 0x2c) = *(float *)(iVar1 + 0x58) + *(float *)(iVar1 + 0x14);
    *(float *)(param_1 + 0x28) = *(float *)(iVar1 + 0x14) - *(float *)(iVar1 + 0x58);
    uVar2 = *(undefined4 *)(iVar1 + 0x24);
    uVar3 = *(undefined4 *)(iVar1 + 0x28);
    uVar4 = *(undefined4 *)(iVar1 + 0x2c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar1 + 0x60);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008b0630(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a55f2c;
    _DAT_00ba7fa4 = _DAT_00ba7fa4 + 1;
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

void FUN_008b0750(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d6df1;
  local_1c = *unaff_FS_OFFSET;
  piVar1 = (int *)(DAT_00b30aac ^ (uint)&stack0xffffffc0);
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 != 0) {
    puVar2 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))();
    *(undefined2 *)(puVar2 + 1) = 0x70;
    local_1c = 0;
    FUN_008f01a0();
    *puVar2 = &PTR_FUN_00a97d98;
    puVar2[0x18] = *(undefined4 *)(param_1 + 0x30);
    local_1c = -1;
    iVar3 = (**(code **)(*DAT_00ba7d98 + 0x10))();
    *(undefined2 *)(iVar3 + 4) = 0x18;
    puVar4 = (undefined4 *)FUN_008f0c10();
    piVar5 = (int *)(**(code **)(*DAT_00ba7d98 + 0x10))();
    *(undefined2 *)(piVar5 + 1) = 0x14;
    puVar6 = (undefined4 *)FUN_008f0590(puVar4);
    *(undefined1 *)(puVar6 + 4) = 0;
    (**(code **)(*piVar1 + 0x4c))();
    if ((*(short *)(puVar6 + 1) != 0) &&
       (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
       *(short *)((int)puVar6 + 6) == 0)) {
      (**(code **)*puVar6)(1);
    }
    if ((*(short *)(puVar4 + 1) != 0) &&
       (*(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1,
       *(short *)((int)puVar4 + 6) == 0)) {
      (**(code **)*puVar4)(1);
    }
    if ((*(short *)(puVar2 + 1) != 0) &&
       (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
       *(short *)((int)puVar2 + 6) == 0)) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*piVar5 + 0x7c))(piVar1);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008b08f0(undefined4 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  int local_74;
  float local_70;
  float local_6c;
  float *local_68;
  float local_64;
  uint local_60;
  float local_5c;
  int local_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_74;
  local_50 = 0.0;
  fStack_4c = 1.0;
  local_68 = (float *)*param_1;
  local_58 = param_1[1];
  fStack_48 = 0.0;
  fStack_44 = 3.4028235e+38;
  while (local_58 = local_58 + -1, -1 < local_58) {
    *param_2 = local_50;
    param_2[1] = fStack_4c;
    param_2[2] = fStack_48;
    param_2[3] = fStack_44;
    local_40 = *local_68 * *(float *)(in_ECX + 0x30);
    fStack_3c = local_68[1] * *(float *)(in_ECX + 0x34);
    fStack_38 = local_68[2] * *(float *)(in_ECX + 0x38);
    fStack_34 = local_68[3] * *(float *)(in_ECX + 0x3c);
    local_30 = (*local_68 + *(float *)(in_ECX + 0x40)) * *(float *)(in_ECX + 0x30) + 196608.0;
    fStack_2c = (local_68[1] + *(float *)(in_ECX + 0x44)) * *(float *)(in_ECX + 0x34) + 196608.0;
    fStack_28 = (local_68[2] + *(float *)(in_ECX + 0x48)) * *(float *)(in_ECX + 0x38) + 196608.0;
    fStack_24 = (local_68[3] + *(float *)(in_ECX + 0x4c)) * *(float *)(in_ECX + 0x3c) + 196608.0;
    uVar3 = (uint)local_30 >> 6 & 0xffff;
    local_60 = (uint)fStack_28 >> 6 & 0xffff;
    if (((int)uVar3 < *(int *)(in_ECX + 0xc) + -1) && ((int)local_60 < *(int *)(in_ECX + 0x10) + -1)
       ) {
      local_74 = uVar3 + 1;
      local_5c = local_40 - (float)uVar3;
      local_64 = fStack_38 - (float)local_60;
      local_70 = (float)uVar3;
      fVar4 = (float10)FUN_008b0c30(local_74,local_60);
      local_54 = (float)fVar4;
      local_6c = (float)(local_60 + 1);
      fVar4 = (float10)FUN_008b0c30(uVar3,local_6c);
      local_70 = (float)fVar4;
      if (local_64 + local_5c <= 1.0) {
        fVar4 = (float10)FUN_008b0c30(uVar3,local_60);
        fVar1 = (float)fVar4;
        local_6c = local_54 - fVar1;
        local_70 = local_70 - fVar1;
        fVar1 = local_6c * local_5c + local_70 * local_64 + fVar1;
      }
      else {
        fVar4 = (float10)FUN_008b0c30(local_74,local_6c);
        local_6c = (float)fVar4 - local_70;
        local_70 = (float)fVar4 - local_54;
        fVar1 = local_70 * local_64 + local_54 + local_6c * (local_5c - 1.0);
      }
      *param_2 = -local_6c;
      param_2[2] = -local_70;
      fVar2 = *(float *)(in_ECX + 0x3c);
      fVar7 = *param_2 * *(float *)(in_ECX + 0x30);
      fVar8 = param_2[1] * *(float *)(in_ECX + 0x34);
      fVar9 = param_2[2] * *(float *)(in_ECX + 0x38);
      fVar6 = fVar9 * fVar9;
      fVar5 = fVar6 + fVar8 * fVar8 + fVar7 * fVar7;
      auVar10._4_4_ = fVar6;
      auVar10._0_4_ = fVar5;
      auVar10._8_4_ = fVar6;
      auVar10._12_4_ = fVar6;
      auVar10 = rsqrtss(auVar10,auVar10);
      fVar6 = auVar10._0_4_;
      fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      *param_2 = fVar5 * fVar7;
      param_2[1] = fVar5 * fVar8;
      param_2[2] = fVar5 * fVar9;
      param_2[3] = fVar5 * param_2[3] * fVar2;
      param_2[3] = (fStack_3c - fVar1) * *(float *)(in_ECX + 0x24) - local_68[3];
    }
    local_68 = local_68 + 4;
    param_2 = param_2 + 4;
  }
  return;
}



undefined4 FUN_008b0b50(undefined1 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    puVar1 = (undefined4 *)FUN_00401f00(0x40);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[4] = 0x3f800000;
      puVar1[5] = 0x3f800000;
      puVar1[6] = 0x3f800000;
      puVar1[8] = 2;
      puVar1[9] = 2;
      puVar1[7] = 0;
      puVar1[0xc] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0xbf800000;
    }
    *(undefined4 **)(in_ECX + 0xc) = puVar1;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008b05d0(puVar1);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



void FUN_008b0be0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_008b04d0(param_1);
  param_1 = FUN_0070f910(DAT_00ba7fa8);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



float10 FUN_008b0c30(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009828c0();
  return (float10)*(float *)(*(int *)(in_ECX + 0x60) + 8 +
                            (iVar1 * *(int *)(in_ECX + 0xc) + param_1) * 0xc);
}



void FUN_008b0c60(void)

{
  float fVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_c;
  float local_8;
  
  iVar3 = *(int *)(in_ECX + 0x20);
  if (iVar3 != 0) {
    local_8 = 3.4028235e+38;
    local_c = -3.4028235e+38;
    if (0 < *(int *)(in_ECX + 0x10)) {
      iVar4 = *(int *)(in_ECX + 0x10);
      do {
        iVar2 = *(int *)(in_ECX + 0x14);
        if (0 < *(int *)(in_ECX + 0x14)) {
          do {
            fVar1 = *(float *)(iVar3 + 8);
            if (fVar1 < local_8) {
              local_8 = fVar1;
            }
            if (local_c < fVar1) {
              local_c = fVar1;
            }
            iVar3 = iVar3 + 0xc;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(float *)(in_ECX + 0x1c) = local_c;
    *(float *)(in_ECX + 0x18) = local_8;
  }
  return;
}



void FUN_008b0d00(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (-1 < (int)in_ECX[2]) {
    piVar2 = (int *)*in_ECX;
    do {
      if (*piVar2 != 0) {
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 <= (int)in_ECX[2]);
  }
  return;
}



undefined4 FUN_008b0d20(int param_1)

{
  int *in_ECX;
  
  return *(undefined4 *)(*in_ECX + param_1 * 4);
}



undefined4 FUN_008b0d30(int param_1)

{
  int *in_ECX;
  
  return *(undefined4 *)(*in_ECX + 4 + (in_ECX[2] + param_1) * 4);
}



void FUN_008b0d50(int param_1)

{
  int *in_ECX;
  int *piVar1;
  
  param_1 = param_1 + 1;
  if (param_1 <= in_ECX[2]) {
    piVar1 = (int *)(*in_ECX + param_1 * 4);
    do {
      if (*piVar1 != 0) {
        return;
      }
      param_1 = param_1 + 1;
      piVar1 = piVar1 + 1;
    } while (param_1 <= in_ECX[2]);
  }
  return;
}



void FUN_008b0d80(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  *(bool *)param_1 = param_2 <= *(int *)(in_ECX + 8);
  return;
}



void FUN_008b0da0(void)

{
  undefined4 *in_ECX;
  
  FUN_008b18c0(*in_ECX,0,in_ECX[2] * 8 + 8);
  in_ECX[1] = 0;
  return;
}



undefined8 FUN_008b0dd0(int param_1)

{
  int *in_ECX;
  
  return CONCAT44(*(undefined4 *)(*in_ECX + 0xc + (in_ECX[2] + param_1) * 8),
                  *(undefined4 *)(*in_ECX + 8 + (in_ECX[2] + param_1) * 8));
}



void FUN_008b0df0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = in_ECX[2];
  iVar2 = *in_ECX;
  *(undefined4 *)(iVar2 + 8 + (iVar1 + param_1) * 8) = param_2;
  *(undefined4 *)(iVar2 + 0xc + (iVar1 + param_1) * 8) = param_3;
  return;
}



void FUN_008b0e10(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x80,0x14);
  *in_ECX = uVar1;
  FUN_008b18c0(uVar1,0,0x80);
  in_ECX[1] = 0;
  in_ECX[2] = 0xf;
  FUN_008b18c0(*in_ECX,0,0x80);
  in_ECX[1] = 0;
  return;
}



void FUN_008b0e60(void)

{
  undefined4 *in_ECX;
  
  (**(code **)(*DAT_00ba7d98 + 0x14))(*in_ECX,in_ECX[2] * 8 + 8,0x14);
  return;
}



void FUN_008b0e80(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  
  iVar1 = in_ECX[2];
  if (in_ECX[1] * 2 - iVar1 != 0 && iVar1 <= in_ECX[1] * 2) {
    FUN_008b1060(iVar1 * 2 + 2);
  }
  iVar1 = *in_ECX;
  uVar3 = (param_1 >> 4) * -0x61c8864f & in_ECX[2];
  iVar2 = *(int *)(iVar1 + uVar3 * 4);
  while ((iVar2 != 0 && (*(uint *)(iVar1 + uVar3 * 4) != param_1))) {
    uVar3 = uVar3 + 1 & in_ECX[2];
    iVar2 = *(int *)(*in_ECX + uVar3 * 4);
  }
  in_ECX[1] = in_ECX[1] + (uint)(*(uint *)(iVar1 + uVar3 * 4) != param_1);
  *(uint *)(iVar1 + uVar3 * 4) = param_1;
  *(undefined4 *)(*in_ECX + 4 + (in_ECX[2] + uVar3) * 4) = param_2;
  return;
}



uint FUN_008b0f00(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *in_ECX;
  
  uVar1 = in_ECX[2];
  uVar3 = (param_1 >> 4) * -0x61c8864f & uVar1;
  uVar2 = *(uint *)(*in_ECX + uVar3 * 4);
  while( true ) {
    if (uVar2 == 0) {
      return uVar1 + 1;
    }
    if (uVar2 == param_1) break;
    uVar3 = uVar3 + 1 & uVar1;
    uVar2 = *(uint *)(*in_ECX + uVar3 * 4);
  }
  return uVar3;
}



undefined4 FUN_008b0f40(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *in_ECX;
  
  uVar1 = in_ECX[2];
  iVar2 = *in_ECX;
  uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
  uVar3 = *(uint *)(iVar2 + uVar4 * 4);
  while (uVar3 != 0) {
    if (uVar3 == param_1) goto LAB_008b0f71;
    uVar4 = uVar4 + 1 & uVar1;
    uVar3 = *(uint *)(iVar2 + uVar4 * 4);
  }
  uVar4 = uVar1 + 1;
LAB_008b0f71:
  if ((int)uVar1 < (int)uVar4) {
    return 1;
  }
  *param_2 = *(undefined4 *)(iVar2 + 4 + (uVar1 + uVar4) * 4);
  return 0;
}



void FUN_008b0fa0(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *in_ECX;
  uint uVar6;
  
  in_ECX[1] = in_ECX[1] + -1;
  *(undefined4 *)(*in_ECX + param_1 * 4) = 0;
  uVar6 = in_ECX[2];
  iVar1 = *in_ECX;
  uVar4 = uVar6 + param_1 & uVar6;
  iVar2 = *(int *)(iVar1 + uVar4 * 4);
  while (iVar2 != 0) {
    uVar4 = uVar4 + uVar6 & uVar6;
    iVar2 = *(int *)(iVar1 + uVar4 * 4);
  }
  uVar5 = uVar4 + 1 & uVar6;
  uVar4 = param_1 + 1 & uVar6;
  iVar1 = *(int *)(iVar1 + uVar4 * 4);
  while (iVar1 != 0) {
    uVar3 = *(uint *)(*in_ECX + uVar4 * 4);
    uVar6 = (uVar3 >> 4) * -0x61c8864f & uVar6;
    if ((((uVar4 < uVar5) || (uVar6 <= param_1)) &&
        ((param_1 <= uVar4 || ((uVar6 <= param_1 && (uVar4 < uVar6)))))) &&
       ((uVar6 <= param_1 || (uVar5 <= uVar6)))) {
      *(uint *)(*in_ECX + param_1 * 4) = uVar3;
      *(undefined4 *)(*in_ECX + 4 + (in_ECX[2] + param_1) * 4) =
           *(undefined4 *)(*in_ECX + 4 + (in_ECX[2] + uVar4) * 4);
      *(undefined4 *)(*in_ECX + uVar4 * 4) = 0;
      param_1 = uVar4;
    }
    uVar6 = in_ECX[2];
    uVar4 = uVar4 + 1 & uVar6;
    iVar1 = *(int *)(*in_ECX + uVar4 * 4);
  }
  return;
}



void FUN_008b1060(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = *in_ECX;
  iVar4 = in_ECX[2] + 1;
  iVar3 = (**(code **)(*DAT_00ba7d98 + 0x10))(param_1 * 8,0x14);
  *in_ECX = iVar3;
  FUN_008b18c0(iVar3,0,param_1 * 4);
  in_ECX[2] = param_1 + -1;
  iVar3 = 0;
  in_ECX[1] = 0;
  if (0 < iVar4) {
    puVar5 = (undefined4 *)(iVar1 + iVar4 * 4);
    do {
      iVar2 = *(int *)(iVar1 + iVar3 * 4);
      if (iVar2 != 0) {
        FUN_008b0e80(iVar2,*puVar5);
      }
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar3 < iVar4);
  }
  (**(code **)(*DAT_00ba7d98 + 0x14))(iVar1,iVar4 * 8,0x14);
  return;
}



void FUN_008b1100(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x100,0x14);
  *in_ECX = uVar1;
  FUN_008b18c0(uVar1,0,0x100);
  in_ECX[1] = 0;
  in_ECX[2] = 0xf;
  FUN_008b18c0(*in_ECX,0,0x100);
  in_ECX[1] = 0;
  return;
}



void FUN_008b1150(void)

{
  undefined4 *in_ECX;
  
  (**(code **)(*DAT_00ba7d98 + 0x14))(*in_ECX,(in_ECX[2] + 1) * 0x10,0x14);
  return;
}



void FUN_008b1170(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *in_ECX;
  int iVar4;
  
  iVar1 = in_ECX[2];
  if (in_ECX[1] * 2 - iVar1 != 0 && iVar1 <= in_ECX[1] * 2) {
    FUN_008b14b0(iVar1 * 2 + 2);
  }
  uVar2 = in_ECX[2];
  uVar3 = __allmul(param_1 >> 4 | param_2 << 0x1c,param_2 >> 4,0x9e3779b1,0);
  iVar1 = *in_ECX;
  uVar3 = uVar3 & uVar2;
  if (*(int *)(iVar1 + uVar3 * 8) != 0 || *(int *)(iVar1 + 4 + uVar3 * 8) != 0) {
    do {
      if ((*(uint *)(iVar1 + uVar3 * 8) == param_1) && (*(uint *)(iVar1 + 4 + uVar3 * 8) == param_2)
         ) break;
      uVar3 = uVar3 + 1 & uVar2;
    } while (*(int *)(*in_ECX + uVar3 * 8) != 0 || *(int *)(*in_ECX + 4 + uVar3 * 8) != 0);
  }
  if ((*(uint *)(iVar1 + uVar3 * 8) == param_1) && (*(uint *)(iVar1 + 4 + uVar3 * 8) == param_2)) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  in_ECX[1] = in_ECX[1] + iVar4;
  *(uint *)(iVar1 + uVar3 * 8) = param_1;
  *(uint *)(iVar1 + 4 + uVar3 * 8) = param_2;
  iVar1 = in_ECX[2];
  iVar4 = *in_ECX;
  *(undefined4 *)(iVar4 + 8 + (iVar1 + uVar3) * 8) = param_3;
  *(undefined4 *)(iVar4 + 0xc + (iVar1 + uVar3) * 8) = param_4;
  return;
}



undefined8 FUN_008b1250(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  uVar1 = in_ECX[2];
  uVar8 = __allmul(param_1 >> 4 | param_2 << 0x1c,param_2 >> 4,0x9e3779b1,0);
  iVar2 = *in_ECX;
  uVar3 = (uint)uVar8 & uVar1;
  uVar5 = *(uint *)(iVar2 + uVar3 * 8);
  uVar4 = (uint)((ulonglong)uVar8 >> 0x20) & (int)uVar1 >> 0x1f;
  uVar6 = *(uint *)(iVar2 + 4 + uVar3 * 8);
  if (uVar5 != 0 || uVar6 != 0) {
    do {
      if ((uVar5 == param_1) && (uVar6 == param_2)) goto LAB_008b12cc;
      bVar7 = 0xfffffffe < uVar3;
      uVar3 = uVar3 + 1 & uVar1;
      uVar6 = *(uint *)(iVar2 + 4 + uVar3 * 8);
      uVar4 = uVar4 + bVar7 & (int)uVar1 >> 0x1f;
      uVar5 = *(uint *)(iVar2 + uVar3 * 8);
    } while (uVar5 != 0 || uVar6 != 0);
  }
  uVar3 = uVar1 + 1;
LAB_008b12cc:
  return CONCAT44(uVar4,uVar3);
}



void FUN_008b12e0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *in_ECX;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  uint local_20;
  uint local_1c;
  uint local_14;
  
  local_1c = (int)param_1 >> 0x1f;
  iVar1 = *in_ECX;
  in_ECX[1] = in_ECX[1] + -1;
  *(undefined4 *)(iVar1 + param_1 * 8) = 0;
  *(undefined4 *)(iVar1 + 4 + param_1 * 8) = 0;
  uVar6 = in_ECX[2];
  uVar8 = (int)uVar6 >> 0x1f;
  iVar1 = *in_ECX;
  uVar4 = uVar6 + param_1 & uVar6;
  uVar7 = uVar8 + local_1c + (uint)CARRY4(uVar6,param_1) & uVar8;
  if (*(int *)(iVar1 + uVar4 * 8) != 0 || *(int *)(iVar1 + 4 + uVar4 * 8) != 0) {
    do {
      bVar10 = CARRY4(uVar6,uVar4);
      uVar4 = uVar6 + uVar4 & uVar6;
      uVar7 = uVar8 + uVar7 + (uint)bVar10 & uVar8;
    } while (*(int *)(iVar1 + uVar4 * 8) != 0 || *(int *)(iVar1 + 4 + uVar4 * 8) != 0);
  }
  uVar5 = uVar4 + 1 & uVar6;
  uVar4 = uVar7 + (0xfffffffe < uVar4) & uVar8;
  local_20 = param_1;
  local_14 = local_1c + (0xfffffffe < param_1) & uVar8;
  uVar7 = param_1 + 1 & uVar6;
  if (*(int *)(*in_ECX + uVar7 * 8) != 0 || *(int *)(*in_ECX + 4 + uVar7 * 8) != 0) {
    do {
      iVar1 = *in_ECX;
      uVar2 = *(uint *)(iVar1 + 4 + uVar7 * 8);
      uVar11 = __allmul(*(uint *)(iVar1 + uVar7 * 8) >> 4 | uVar2 << 0x1c,uVar2 >> 4,0x9e3779b1,0);
      uVar8 = (uint)((ulonglong)uVar11 >> 0x20) & uVar8;
      uVar6 = (uint)uVar11 & uVar6;
      if ((((local_14 < uVar4) || ((local_14 == uVar4 && (uVar7 < uVar5)))) ||
          ((uVar8 <= local_1c && ((uVar8 < local_1c || (uVar6 <= local_20)))))) &&
         ((((local_1c < local_14 || ((local_1c <= local_14 && (local_20 <= uVar7)))) ||
           ((uVar8 <= local_1c &&
            ((((uVar8 < local_1c || (uVar6 <= local_20)) && (local_14 <= uVar8)) &&
             ((local_14 < uVar8 || (uVar7 < uVar6)))))))) &&
          (((uVar8 < local_1c || ((uVar8 <= local_1c && (uVar6 <= local_20)))) ||
           ((uVar4 <= uVar8 && ((uVar4 < uVar8 || (uVar5 <= uVar6)))))))))) {
        *(undefined4 *)(iVar1 + local_20 * 8) = *(undefined4 *)(iVar1 + uVar7 * 8);
        *(uint *)(iVar1 + 4 + local_20 * 8) = uVar2;
        iVar3 = *in_ECX;
        iVar1 = in_ECX[2] + uVar7;
        iVar9 = in_ECX[2] + local_20;
        *(undefined4 *)(iVar3 + 8 + iVar9 * 8) = *(undefined4 *)(iVar3 + 8 + iVar1 * 8);
        *(undefined4 *)(iVar3 + 0xc + iVar9 * 8) = *(undefined4 *)(iVar3 + 0xc + iVar1 * 8);
        iVar1 = *in_ECX;
        *(undefined4 *)(iVar1 + uVar7 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + uVar7 * 8) = 0;
        local_1c = local_14;
        local_20 = uVar7;
      }
      uVar6 = in_ECX[2];
      uVar8 = (int)uVar6 >> 0x1f;
      local_14 = local_14 + (0xfffffffe < uVar7) & uVar8;
      uVar7 = uVar7 + 1 & uVar6;
    } while (*(int *)(*in_ECX + uVar7 * 8) != 0 || *(int *)(*in_ECX + 4 + uVar7 * 8) != 0);
  }
  return;
}



void FUN_008b14b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = *in_ECX;
  iVar5 = in_ECX[2] + 1;
  iVar4 = (**(code **)(*DAT_00ba7d98 + 0x10))(param_1 << 4,0x14);
  *in_ECX = iVar4;
  FUN_008b18c0(iVar4,0,param_1 * 8);
  in_ECX[2] = param_1 + -1;
  iVar4 = 0;
  in_ECX[1] = 0;
  if (0 < iVar5) {
    puVar6 = (undefined4 *)(iVar1 + iVar5 * 8);
    do {
      iVar2 = *(int *)(iVar1 + iVar4 * 8);
      iVar3 = *(int *)(iVar1 + 4 + iVar4 * 8);
      if (iVar2 != 0 || iVar3 != 0) {
        FUN_008b1170(iVar2,iVar3,*puVar6,puVar6[1]);
      }
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 2;
    } while (iVar4 < iVar5);
  }
  (**(code **)(*DAT_00ba7d98 + 0x14))(iVar1,iVar5 * 0x10,0x14);
  return;
}



undefined4 FUN_008b1550(undefined4 param_1,undefined4 param_2)

{
  FUN_008b0f40(param_1,&param_2);
  return param_2;
}



undefined4 FUN_008b1570(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *in_ECX;
  
  uVar1 = in_ECX[2];
  uVar3 = (param_1 >> 4) * -0x61c8864f & uVar1;
  uVar2 = *(uint *)(*in_ECX + uVar3 * 4);
  while (uVar2 != 0) {
    if (uVar2 == param_1) goto LAB_008b15a1;
    uVar3 = uVar3 + 1 & uVar1;
    uVar2 = *(uint *)(*in_ECX + uVar3 * 4);
  }
  uVar3 = uVar1 + 1;
LAB_008b15a1:
  if ((int)uVar1 < (int)uVar3) {
    return 1;
  }
  FUN_008b0fa0(uVar3);
  return 0;
}



void FUN_008b15c0(int param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (4 < param_1 * 3) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 3);
  }
  FUN_008b1060();
  return;
}



void FUN_008b15e0(int param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (4 < param_1 * 3) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 3);
  }
  FUN_008b14b0();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008b16a0(undefined4 param_1)

{
  undefined1 local_204 [512];
  undefined4 local_4;
  
  local_4 = DAT_00b30aac;
  FUN_008bbfb0(local_204,0x200,1);
  FUN_008bbdb0(param_1);
  (**(code **)(*DAT_00ba7fb0 + 8))(3,0x2636fe25,local_204,".\\error\\hkError.cpp",0x1b);
  FUN_008bc000();
  return;
}



int __cdecl __vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  int iVar1;
  
  iVar1 = __vsnprintf_l(_Dest,_Count,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}



void FUN_008b1730(char *param_1,size_t param_2,char *param_3)

{
  __vsnprintf(param_1,param_2,param_3,&stack0x00000010);
  return;
}



void FUN_008b1750(char *param_1,char *param_2)

{
  _vsprintf(param_1,param_2,&stack0x0000000c);
  return;
}



int FUN_008b1770(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  
  while( true ) {
    bVar1 = *param_1;
    bVar2 = bVar1 < *param_2;
    if (bVar1 != *param_2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = param_1[1];
    bVar2 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar2) - (uint)(bVar2 != 0);
}



undefined4 FUN_008b17c0(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  param_1 = param_1 - (int)param_2;
  while( true ) {
    cVar1 = param_2[param_1];
    if ((cVar1 == '\0') && (*param_2 == '\0')) {
      return 0;
    }
    cVar4 = cVar1;
    if (('@' < cVar1) && (cVar1 < '[')) {
      cVar4 = cVar1 + ' ';
    }
    cVar2 = *param_2;
    cVar3 = cVar2;
    if (('@' < cVar2) && (cVar2 < '[')) {
      cVar3 = cVar2 + ' ';
    }
    if (cVar4 < cVar3) break;
    if (('@' < cVar1) && (cVar1 < '[')) {
      cVar1 = cVar1 + ' ';
    }
    if (('@' < cVar2) && (cVar2 < '[')) {
      cVar2 = cVar2 + ' ';
    }
    if (cVar2 < cVar1) {
      return 1;
    }
    param_2 = param_2 + 1;
  }
  return 0xffffffff;
}



void FUN_008b1840(char *param_1,char *param_2,size_t param_3)

{
  if (param_3 != 0) {
    _strncpy(param_1,param_2,param_3);
    return;
  }
  return;
}



int FUN_008b1860(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  return (int)param_1 - (int)pcVar1;
}



char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}



void FUN_008b1890(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}



void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + -1;
          puVar5 = puVar5 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_009856a3_caseD_2;
        case 3:
          goto switchD_009856a3_caseD_3;
        }
        goto switchD_009856a3_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_009856a3_caseD_0;
      case 1:
        goto switchD_009856a3_caseD_1;
      case 2:
        goto switchD_009856a3_caseD_2;
      case 3:
        goto switchD_009856a3_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar5 & 3);
        switch((uint)puVar5 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          uVar2 = uVar2 >> 2;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_009856a3_caseD_2;
            case 3:
              goto switchD_009856a3_caseD_3;
            }
            goto switchD_009856a3_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          puVar4 = (undefined4 *)((int)puVar4 + -2);
          puVar5 = (undefined4 *)((int)puVar5 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_009856a3_caseD_2;
            case 3:
              goto switchD_009856a3_caseD_3;
            }
            goto switchD_009856a3_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + -3);
          puVar5 = (undefined4 *)((int)puVar5 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_009856a3_caseD_2;
            case 3:
              goto switchD_009856a3_caseD_3;
            }
            goto switchD_009856a3_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar5[7 - uVar2] = puVar4[7 - uVar2];
    case 6:
      puVar5[6 - uVar2] = puVar4[6 - uVar2];
    case 5:
      puVar5[5 - uVar2] = puVar4[5 - uVar2];
    case 4:
      puVar5[4 - uVar2] = puVar4[4 - uVar2];
    case 3:
      puVar5[3 - uVar2] = puVar4[3 - uVar2];
    case 2:
      puVar5[2 - uVar2] = puVar4[2 - uVar2];
    case 1:
      puVar5[1 - uVar2] = puVar4[1 - uVar2];
      puVar4 = puVar4 + -uVar2;
      puVar5 = puVar5 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_009856a3_caseD_1:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      return _Dst;
    case 2:
switchD_009856a3_caseD_2:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      return _Dst;
    case 3:
switchD_009856a3_caseD_3:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
      return _Dst;
    }
switchD_009856a3_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_00baabe0 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    pvVar1 = (void *)__VEC_memcpy();
    return pvVar1;
  }
  puVar4 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar4 = puVar4 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_0098551c_caseD_2;
      case 3:
        goto switchD_0098551c_caseD_3;
      }
      goto switchD_0098551c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_0098551c_caseD_0;
    case 1:
      goto switchD_0098551c_caseD_1;
    case 2:
      goto switchD_0098551c_caseD_2;
    case 3:
      goto switchD_0098551c_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0098551c_caseD_2;
          case 3:
            goto switchD_0098551c_caseD_3;
          }
          goto switchD_0098551c_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0098551c_caseD_2;
          case 3:
            goto switchD_0098551c_caseD_3;
          }
          goto switchD_0098551c_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0098551c_caseD_2;
          case 3:
            goto switchD_0098551c_caseD_3;
          }
          goto switchD_0098551c_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar4[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar4[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar4[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar4[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar4[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar4[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar4[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar4 = puVar4 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_0098551c_caseD_1:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_0098551c_caseD_2:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_0098551c_caseD_3:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_0098551c_caseD_0:
  return _Dst;
}



void FUN_008b18c0(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    param_1 = param_1 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)param_1 = param_2;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}



void FUN_008b18f0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (**(code **)*DAT_00ba7d98)(pcVar2 + (1 - (int)(param_1 + 1)),0x13);
  iVar3 = iVar3 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar3] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}



void FUN_008b1930(void)

{
  (**(code **)(*DAT_00ba7d98 + 0x14))();
  return;
}



void FUN_008b1950(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 < 0x33) {
    iVar2 = 0x33;
  }
  piVar1 = (int *)(**(code **)(*DAT_00ba7d98 + 0x10))(iVar2 + 0xd,0x13);
  *piVar1 = param_1;
  piVar1[1] = iVar2;
  piVar1[2] = 0;
  return;
}



void FUN_008b1990(int *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  if ((*(int *)(iVar2 + -4) < 1) && (0x32 < *(int *)(iVar2 + -8) + 0xd)) goto LAB_008b19f6;
  iVar3 = *(int *)(iVar2 + -4) + -1;
  *(int *)(iVar2 + -4) = iVar3;
  if (iVar3 < 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))(iVar2 + -0xc,*(int *)(iVar2 + -8) + 0xd,0x13);
  }
  piVar1 = (int *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x10c,0x13);
  *piVar1 = 0xff;
  piVar1[1] = 0xff;
  do {
    piVar1[2] = 0;
    *param_1 = (int)(piVar1 + 3);
LAB_008b19f6:
    iVar3 = *(int *)((char *)*param_1 + -8) + 0xd;
    iVar2 = __vsnprintf((char *)*param_1,iVar3 / 2,param_2,&stack0x0000000c);
    if (iVar2 < 0) {
      iVar2 = *param_1;
      iVar4 = *(int *)(iVar2 + -4) + -1;
      *(int *)(iVar2 + -4) = iVar4;
      if (iVar4 < 0) {
        (**(code **)(*DAT_00ba7d98 + 0x14))(iVar2 + -0xc,*(int *)(iVar2 + -8) + 0xd,0x13);
      }
      iVar2 = iVar3 * 2;
      if (iVar2 < 0x100) {
        iVar2 = 0xff;
      }
    }
    else {
      if (iVar2 < iVar3) {
        *(int *)(*param_1 + -0xc) = iVar2;
        return;
      }
      iVar3 = *param_1;
      iVar4 = *(int *)(iVar3 + -4) + -1;
      *(int *)(iVar3 + -4) = iVar4;
      if (iVar4 < 0) {
        (**(code **)(*DAT_00ba7d98 + 0x14))(iVar3 + -0xc,*(int *)(iVar3 + -8) + 0xd,0x13);
      }
    }
    iVar3 = iVar2;
    if (iVar2 < 0x33) {
      iVar3 = 0x33;
    }
    piVar1 = (int *)(**(code **)(*DAT_00ba7d98 + 0x10))(iVar3 + 0xd,0x13);
    *piVar1 = iVar2;
    piVar1[1] = iVar3;
  } while( true );
}



void FUN_008b1ab0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  
  if ((float)param_2[5] < *(float *)(in_ECX + 0x24)) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(in_ECX + 0x10) = *param_2;
    *(undefined4 *)(in_ECX + 0x14) = uVar1;
    *(undefined4 *)(in_ECX + 0x18) = uVar2;
    *(undefined4 *)(in_ECX + 0x1c) = uVar3;
    *(undefined4 *)(in_ECX + 0x20) = param_2[4];
    *(undefined4 *)(in_ECX + 0x24) = param_2[5];
    iVar5 = *(int *)(param_1 + 0xc);
    while (iVar4 = iVar5, iVar4 != 0) {
      param_1 = iVar4;
      iVar5 = *(int *)(iVar4 + 0xc);
    }
    *(int *)(in_ECX + 0x30) = param_1;
    *(undefined4 *)(in_ECX + 4) = param_2[5];
  }
  return;
}



void FUN_008b1b00(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  float10 fVar5;
  
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = (float10)fsin((float10)param_2 * (float10)0.5);
  fVar1 = (float)fVar5;
  fVar5 = (float10)fcos((float10)param_2 * (float10)0.5);
  *in_ECX = fVar1 * *param_1;
  in_ECX[1] = fVar1 * fVar2;
  in_ECX[2] = fVar1 * fVar3;
  in_ECX[3] = fVar1 * fVar4;
  in_ECX[3] = (float)fVar5;
  return;
}



void FUN_008b1b40(float *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  uint uVar5;
  int local_c [3];
  
  fVar3 = param_1[5] + *param_1 + param_1[10];
  if (0.0 < fVar3) {
    fVar3 = SQRT(fVar3 + 1.0);
    fVar4 = 0.5 / fVar3;
    *in_ECX = (param_1[6] - param_1[9]) * fVar4;
    in_ECX[1] = (param_1[8] - param_1[2]) * fVar4;
    in_ECX[2] = (param_1[1] - param_1[4]) * fVar4;
    in_ECX[3] = fVar3 * 0.5;
    return;
  }
  local_c[0] = 1;
  local_c[1] = 2;
  local_c[2] = 0;
  uVar5 = (uint)(*param_1 < param_1[5]);
  if (param_1[uVar5 * 5] < param_1[10]) {
    uVar5 = 2;
  }
  iVar1 = local_c[uVar5];
  iVar2 = local_c[iVar1];
  fVar3 = SQRT((param_1[uVar5 * 5] - (param_1[iVar2 * 5] + param_1[iVar1 * 5])) + 1.0);
  fVar4 = 0.5 / fVar3;
  in_ECX[uVar5] = fVar3 * 0.5;
  in_ECX[3] = (param_1[iVar2 + iVar1 * 4] - param_1[iVar1 + iVar2 * 4]) * fVar4;
  in_ECX[iVar1] = (param_1[uVar5 + iVar1 * 4] + param_1[iVar1 + uVar5 * 4]) * fVar4;
  in_ECX[iVar2] = (param_1[uVar5 + iVar2 * 4] + param_1[iVar2 + uVar5 * 4]) * fVar4;
  return;
}



void FUN_008b1c60(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_2c;
  float local_24;
  
  fVar7 = *param_1;
  fVar8 = param_1[1];
  fVar9 = param_1[2];
  fVar1 = param_1[3];
  local_2c = fVar9 * param_2[2] + fVar7 * *param_2 + fVar1 * param_2[3] + fVar8 * param_2[1];
  local_24 = 1.0;
  if (local_2c < 0.0) {
    local_24 = -1.0;
    local_2c = -local_2c;
  }
  if (0.999 <= local_2c) {
    fVar10 = 1.0 - param_3;
    local_24 = local_24 * param_3;
  }
  else {
    if (ABS(local_2c) < 1.0) {
      fVar4 = (float10)FUN_00986130();
    }
    else if (local_2c <= 0.0) {
      fVar4 = (float10)3.1415927;
    }
    else {
      fVar4 = (float10)0.0;
    }
    fVar5 = (float10)1.0 / SQRT((float10)1.0 - (float10)local_2c * (float10)local_2c);
    fVar6 = (float10)fsin(fVar4 - fVar4 * (float10)param_3);
    fVar10 = (float)(fVar6 * fVar5);
    fVar4 = (float10)fsin(fVar4 * (float10)param_3);
    local_24 = (float)(fVar4 * fVar5 * (float10)local_24);
  }
  fVar7 = fVar10 * fVar7;
  fVar8 = fVar10 * fVar8;
  fVar9 = fVar10 * fVar9;
  fVar10 = fVar10 * fVar1;
  *in_ECX = fVar7;
  in_ECX[1] = fVar8;
  in_ECX[2] = fVar9;
  in_ECX[3] = fVar10;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ECX = fVar7 + local_24 * *param_2;
  in_ECX[1] = fVar8 + local_24 * fVar1;
  in_ECX[2] = fVar9 + local_24 * fVar2;
  in_ECX[3] = fVar10 + local_24 * fVar3;
  FUN_004d6830();
  return;
}



void FUN_008b1dd0(float *param_1)

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
  float *in_ECX;
  
  fVar8 = *param_1 + *param_1;
  fVar10 = param_1[1] + param_1[1];
  fVar11 = param_1[2] + param_1[2];
  fVar9 = fVar8 * *param_1;
  fVar1 = *param_1;
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar8 = fVar8 * param_1[3];
  fVar6 = param_1[3];
  fVar7 = param_1[3];
  *in_ECX = 1.0 - (fVar11 * fVar5 + fVar10 * fVar3);
  in_ECX[1] = fVar10 * fVar1 + fVar11 * fVar7;
  in_ECX[2] = fVar11 * fVar2 - fVar10 * fVar6;
  in_ECX[3] = 0.0;
  in_ECX[4] = fVar10 * fVar1 - fVar11 * fVar7;
  in_ECX[5] = 1.0 - (fVar11 * fVar5 + fVar9);
  in_ECX[6] = fVar8 + fVar11 * fVar4;
  in_ECX[7] = 0.0;
  in_ECX[8] = fVar10 * fVar6 + fVar11 * fVar2;
  in_ECX[9] = fVar11 * fVar4 - fVar8;
  in_ECX[10] = 1.0 - (fVar10 * fVar3 + fVar9);
  in_ECX[0xb] = 0.0;
  return;
}



void FUN_008b1eb0(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_20 [28];
  
  FUN_008b1b00(param_1,param_2);
  FUN_008b1dd0(local_20);
  return;
}



void FUN_008b1ee0(undefined1 *param_1,float param_2,float param_3,float param_4)

{
  if (ABS(param_2 - param_3) < param_4) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}



void FUN_008b1f10(int param_1)

{
  float *in_ECX;
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_008d2860(param_1);
  fVar1 = -*(float *)(param_1 + 0x30);
  fVar2 = -*(float *)(param_1 + 0x34);
  fVar3 = -*(float *)(param_1 + 0x38);
  in_ECX[0xc] = *in_ECX * fVar1 + in_ECX[4] * fVar2 + in_ECX[8] * fVar3;
  in_ECX[0xd] = in_ECX[1] * fVar1 + in_ECX[5] * fVar2 + in_ECX[9] * fVar3;
  in_ECX[0xe] = in_ECX[2] * fVar1 + in_ECX[6] * fVar2 + in_ECX[10] * fVar3;
  in_ECX[0xf] = in_ECX[3] * fVar1 + in_ECX[7] * fVar2 + in_ECX[0xb] * fVar3;
  return;
}



void FUN_008b1f70(float *param_1,float *param_2)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int in_ECX;
  int iVar17;
  int iVar18;
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  fVar6 = param_1[4];
  fVar7 = param_1[5];
  fVar8 = param_1[6];
  fVar9 = param_1[7];
  fVar10 = param_1[8];
  fVar11 = param_1[9];
  fVar12 = param_1[10];
  fVar13 = param_1[0xb];
  iVar17 = in_ECX - (int)param_2;
  iVar18 = 4;
  do {
    fVar14 = *param_2;
    fVar15 = param_2[1];
    fVar16 = param_2[2];
    pfVar1 = (float *)(iVar17 + (int)param_2);
    *pfVar1 = fVar2 * fVar14 + fVar6 * fVar15 + fVar10 * fVar16;
    pfVar1[1] = fVar3 * fVar14 + fVar7 * fVar15 + fVar11 * fVar16;
    pfVar1[2] = fVar4 * fVar14 + fVar8 * fVar15 + fVar12 * fVar16;
    pfVar1[3] = fVar5 * fVar14 + fVar9 * fVar15 + fVar13 * fVar16;
    param_2 = param_2 + 4;
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  fVar2 = param_1[0xd];
  fVar3 = param_1[0xe];
  fVar4 = param_1[0xf];
  *(float *)(in_ECX + 0x30) = *(float *)(in_ECX + 0x30) + param_1[0xc];
  *(float *)(in_ECX + 0x34) = *(float *)(in_ECX + 0x34) + fVar2;
  *(float *)(in_ECX + 0x38) = *(float *)(in_ECX + 0x38) + fVar3;
  *(float *)(in_ECX + 0x3c) = *(float *)(in_ECX + 0x3c) + fVar4;
  return;
}



void FUN_008b1ff0(float *param_1,float *param_2)

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
  float *pfVar11;
  int in_ECX;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar2 = param_1[8];
  fVar3 = param_1[9];
  fVar4 = param_1[10];
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar13 = param_1[4];
  fVar14 = param_1[5];
  fVar15 = param_1[6];
  iVar12 = 3;
  pfVar11 = param_2;
  do {
    fVar8 = *pfVar11;
    fVar9 = pfVar11[1];
    fVar10 = pfVar11[2];
    pfVar1 = (float *)((in_ECX - (int)param_2) + (int)pfVar11);
    *pfVar1 = fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10;
    pfVar1[1] = fVar13 * fVar8 + fVar14 * fVar9 + fVar15 * fVar10;
    pfVar1[2] = fVar2 * fVar8 + fVar3 * fVar9 + fVar4 * fVar10;
    pfVar1[3] = fVar2 * fVar8 + fVar3 * fVar9 + fVar4 * fVar10;
    pfVar11 = pfVar11 + 4;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  fVar2 = param_1[8];
  fVar3 = param_1[9];
  fVar4 = param_1[10];
  fVar5 = param_1[4];
  fVar6 = param_1[5];
  fVar7 = param_1[6];
  fVar13 = param_2[0xc] - param_1[0xc];
  fVar14 = param_2[0xd] - param_1[0xd];
  fVar15 = param_2[0xe] - param_1[0xe];
  *(float *)(in_ECX + 0x30) = *param_1 * fVar13 + param_1[1] * fVar14 + param_1[2] * fVar15;
  *(float *)(in_ECX + 0x34) = fVar5 * fVar13 + fVar6 * fVar14 + fVar7 * fVar15;
  *(float *)(in_ECX + 0x38) = fVar2 * fVar13 + fVar3 * fVar14 + fVar4 * fVar15;
  *(float *)(in_ECX + 0x3c) = fVar2 * fVar13 + fVar3 * fVar14 + fVar4 * fVar15;
  return;
}



void FUN_008b2170(void)

{
  undefined4 *in_ECX;
  
  FUN_00536060(0);
  *in_ECX = &PTR_FUN_00a97e40;
  return;
}



void FUN_008b21f0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float *pfVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  
  do {
    fVar3 = *(float *)((param_2 + param_3 >> 1) * 0x30 + 0x14 + param_1);
    iVar17 = param_3;
    iVar18 = param_2;
    do {
      for (pfVar14 = (float *)(iVar18 * 0x30 + 0x14 + param_1); *pfVar14 < fVar3;
          pfVar14 = pfVar14 + 0xc) {
        iVar18 = iVar18 + 1;
      }
      for (pfVar14 = (float *)(iVar17 * 0x30 + 0x14 + param_1); fVar3 < *pfVar14;
          pfVar14 = pfVar14 + -0xc) {
        iVar17 = iVar17 + -1;
      }
      if (iVar17 < iVar18) break;
      if (iVar17 != iVar18) {
        iVar15 = iVar17 * 0x30;
        uVar5 = *(undefined4 *)(iVar15 + 0x10 + param_1);
        uVar4 = *(undefined4 *)(iVar15 + 0x14 + param_1);
        puVar1 = (undefined4 *)(iVar15 + param_1);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar1 = (undefined4 *)(iVar15 + param_1);
        uVar6 = puVar1[8];
        puVar2 = (undefined4 *)(iVar18 * 0x30 + param_1);
        uVar11 = puVar2[1];
        uVar12 = puVar2[2];
        uVar13 = puVar2[3];
        puVar16 = (undefined4 *)(iVar18 * 0x30 + param_1);
        *puVar1 = *puVar2;
        puVar1[1] = uVar11;
        puVar1[2] = uVar12;
        puVar1[3] = uVar13;
        puVar1[4] = puVar16[4];
        puVar1[5] = puVar16[5];
        puVar1[8] = puVar16[8];
        puVar16[5] = uVar4;
        puVar16[4] = uVar5;
        *puVar16 = uVar7;
        puVar16[1] = uVar8;
        puVar16[2] = uVar9;
        puVar16[3] = uVar10;
        puVar16[8] = uVar6;
      }
      iVar17 = iVar17 + -1;
      iVar18 = iVar18 + 1;
    } while (iVar18 <= iVar17);
    if (param_2 < iVar17) {
      FUN_008b21f0(param_1,param_2,iVar17,param_4);
    }
    param_2 = iVar18;
    if (param_3 <= iVar18) {
      return;
    }
  } while( true );
}



void FUN_008b22f0(void)

{
  uint in_ECX;
  undefined4 local_4;
  
  local_4 = in_ECX & 0xffffff00;
  if (1 < *(int *)(in_ECX + 0x14)) {
    FUN_008b21f0(*(undefined4 *)(in_ECX + 0x10),0,*(int *)(in_ECX + 0x14) + -1,local_4);
  }
  return;
}



void FUN_008b2390(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a97e68;
  in_ECX[3] = 0xc0490fdb;
  in_ECX[4] = 0x40490fdb;
  in_ECX[5] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  return;
}



void FUN_008b23e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  float *pfVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  uint uVar6;
  int *in_ECX;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 local_6d;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20 [28];
  
  local_60 = *param_4;
  fStack_5c = param_4[1];
  fStack_58 = param_4[2];
  fVar8 = fStack_5c * fStack_5c;
  fStack_4c = fStack_58 * fStack_58;
  auVar10._4_4_ = fVar8;
  auVar10._0_4_ = fVar8;
  auVar10._8_4_ = fVar8;
  auVar10._12_4_ = fVar8;
  auVar11._4_12_ = auVar10._4_12_;
  auVar11._0_4_ = fVar8 + local_60 * local_60;
  auVar12._4_4_ = fStack_4c;
  auVar12._0_4_ = fStack_4c + auVar11._0_4_;
  auVar12._8_4_ = fStack_4c;
  auVar12._12_4_ = fStack_4c;
  auVar12 = rsqrtss(auVar11,auVar12);
  local_50 = auVar12._0_4_;
  local_6c = 0.5;
  local_40 = 3.0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0.5;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  fStack_54 = local_50 * 0.5 * (3.0 - (fStack_4c + auVar11._0_4_) * local_50 * local_50);
  pfVar1 = (float *)(in_ECX + 0xc);
  local_60 = fStack_54 * local_60;
  fStack_5c = fStack_54 * fStack_5c;
  fStack_58 = fStack_54 * fStack_58;
  fStack_54 = fStack_54 * param_4[3];
  fStack_48 = fStack_4c;
  fStack_44 = fStack_4c;
  FUN_0088fd90(param_1,&local_60);
  FUN_0088fd90(param_2,&local_60);
  FUN_0088fd10(param_1,param_3);
  FUN_0088fd10(param_2,param_3);
  local_6c = ABS((float)in_ECX[0xd]);
  local_64 = 2;
  local_68 = ABS((float)in_ECX[0xe]);
  bVar2 = ABS(*pfVar1) <= local_6c;
  fVar8 = ABS(*pfVar1);
  if (!bVar2) {
    fVar8 = local_6c;
  }
  uVar7 = (uint)!bVar2;
  if (fVar8 <= local_68) {
    uVar6 = 2;
  }
  else {
    uVar6 = uVar7;
    uVar7 = 2;
  }
  in_ECX[uVar7 + 0x10] = 0;
  in_ECX[0x13] = 0;
  in_ECX[bVar2 + 0x10] = (int)pfVar1[uVar6];
  in_ECX[uVar6 + 0x10] = (int)-pfVar1[bVar2];
  fVar8 = (float)in_ECX[0x10];
  fVar4 = (float)in_ECX[0x11];
  fVar5 = (float)in_ECX[0x12];
  fVar9 = fVar4 * fVar4;
  fStack_4c = fVar5 * fVar5;
  auVar13._4_4_ = fVar9;
  auVar13._0_4_ = fVar9;
  auVar13._8_4_ = fVar9;
  auVar13._12_4_ = fVar9;
  auVar14._4_12_ = auVar13._4_12_;
  auVar14._0_4_ = fVar9 + fVar8 * fVar8;
  auVar3._4_4_ = fStack_4c;
  auVar3._0_4_ = fStack_4c + auVar14._0_4_;
  auVar3._8_4_ = fStack_4c;
  auVar3._12_4_ = fStack_4c;
  auVar12 = rsqrtss(auVar14,auVar3);
  local_50 = auVar12._0_4_;
  fVar9 = local_30 * local_50 * (local_40 - (fStack_4c + auVar14._0_4_) * local_50 * local_50);
  in_ECX[0x10] = (int)(fVar9 * fVar8);
  in_ECX[0x11] = (int)(fVar9 * fVar4);
  in_ECX[0x12] = (int)(fVar9 * fVar5);
  in_ECX[0x13] = (int)(fVar9 * (float)in_ECX[0x13]);
  in_ECX[0x14] = (int)((float)in_ECX[0xd] * (float)in_ECX[0x12] -
                      (float)in_ECX[0xe] * (float)in_ECX[0x11]);
  in_ECX[0x15] = (int)((float)in_ECX[0xe] * (float)in_ECX[0x10] - *pfVar1 * (float)in_ECX[0x12]);
  in_ECX[0x16] = (int)(*pfVar1 * (float)in_ECX[0x11] - (float)in_ECX[0xd] * (float)in_ECX[0x10]);
  in_ECX[0x17] = (int)((float)in_ECX[0xf] * (float)in_ECX[0x13] -
                      (float)in_ECX[0xf] * (float)in_ECX[0x13]);
  fStack_48 = fStack_4c;
  fStack_44 = fStack_4c;
  FUN_0088fe00(param_1,in_ECX + 0x14);
  FUN_0088fd90(param_2,local_20);
  (**(code **)(*in_ECX + 8))(&local_6d);
  return;
}



void FUN_008b2620(undefined1 *param_1)

{
  float fVar1;
  char *pcVar2;
  int in_ECX;
  undefined1 local_15;
  float local_14;
  
  if ((((ABS(ABS(*(float *)(in_ECX + 0x48) * *(float *)(in_ECX + 0x58) +
                 *(float *)(in_ECX + 0x44) * *(float *)(in_ECX + 0x54) +
                 *(float *)(in_ECX + 0x40) * *(float *)(in_ECX + 0x50))) < 1e-05) &&
       (ABS(ABS(*(float *)(in_ECX + 0x88) * *(float *)(in_ECX + 0x78) +
                *(float *)(in_ECX + 0x84) * *(float *)(in_ECX + 0x74) +
                *(float *)(in_ECX + 0x80) * *(float *)(in_ECX + 0x70))) < 1e-05)) &&
      (ABS((*(float *)(in_ECX + 0x48) * *(float *)(in_ECX + 0x48) +
           *(float *)(in_ECX + 0x44) * *(float *)(in_ECX + 0x44) +
           *(float *)(in_ECX + 0x40) * *(float *)(in_ECX + 0x40)) - 1.0) < 1e-05)) &&
     ((ABS((*(float *)(in_ECX + 0x58) * *(float *)(in_ECX + 0x58) +
           *(float *)(in_ECX + 0x54) * *(float *)(in_ECX + 0x54) +
           *(float *)(in_ECX + 0x50) * *(float *)(in_ECX + 0x50)) - 1.0) < 1e-05 &&
      (ABS((*(float *)(in_ECX + 0x78) * *(float *)(in_ECX + 0x78) +
           *(float *)(in_ECX + 0x74) * *(float *)(in_ECX + 0x74) +
           *(float *)(in_ECX + 0x70) * *(float *)(in_ECX + 0x70)) - 1.0) < 1e-05)))) {
    local_14 = *(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x38) +
               *(float *)(in_ECX + 0x34) * *(float *)(in_ECX + 0x34) +
               *(float *)(in_ECX + 0x30) * *(float *)(in_ECX + 0x30);
    pcVar2 = (char *)FUN_008b1ee0(&local_15,local_14,0x3f800000,0x3727c5ac);
    if (*pcVar2 != '\0') {
      if ((*(float *)(in_ECX + 0xc) < 0.0 == (*(float *)(in_ECX + 0xc) == 0.0)) ||
         (*(float *)(in_ECX + 0x10) < 0.0 == (*(float *)(in_ECX + 0x10) == 0.0))) {
        fVar1 = *(float *)(in_ECX + 0x10) - *(float *)(in_ECX + 0xc);
      }
      else {
        fVar1 = ABS(*(float *)(in_ECX + 0xc)) + *(float *)(in_ECX + 0x10);
      }
      if (fVar1 <= 6.2831855) {
        *param_1 = 1;
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}



void FUN_008b2820(int param_1,undefined4 param_2)

{
  float *pfVar1;
  float *pfVar2;
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
  float fVar16;
  float fVar17;
  float *pfVar18;
  int in_ECX;
  int iVar19;
  int iVar20;
  float10 fVar21;
  float *local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float *local_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  uint uStack_84;
  float local_80 [4];
  float *local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float *local_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40 [7];
  uint uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  FUN_008f0f70(param_1,param_2,*(undefined4 *)(param_1 + 0x28),8);
  pfVar2 = *(float **)(param_1 + 0x1c);
  fVar3 = *pfVar2;
  fVar4 = pfVar2[1];
  fVar5 = pfVar2[2];
  fVar6 = pfVar2[3];
  fVar7 = pfVar2[4];
  fVar8 = pfVar2[5];
  fVar9 = pfVar2[6];
  fVar10 = pfVar2[7];
  fVar11 = pfVar2[8];
  fVar12 = pfVar2[9];
  fVar13 = pfVar2[10];
  fVar14 = pfVar2[0xb];
  pfVar18 = (float *)(in_ECX + 0x20);
  iVar19 = (int)local_80 - (int)pfVar18;
  iVar20 = 4;
  do {
    fVar15 = *pfVar18;
    fVar16 = pfVar18[1];
    fVar17 = pfVar18[2];
    pfVar1 = (float *)(iVar19 + (int)pfVar18);
    *pfVar1 = fVar3 * fVar15 + fVar7 * fVar16 + fVar11 * fVar17;
    pfVar1[1] = fVar4 * fVar15 + fVar8 * fVar16 + fVar12 * fVar17;
    pfVar1[2] = fVar5 * fVar15 + fVar9 * fVar16 + fVar13 * fVar17;
    pfVar1[3] = fVar6 * fVar15 + fVar10 * fVar16 + fVar14 * fVar17;
    pfVar18 = pfVar18 + 4;
    iVar20 = iVar20 + -1;
  } while (iVar20 != 0);
  pfVar1 = *(float **)(param_1 + 0x20);
  local_80[0] = local_80[0] + pfVar2[0xc];
  local_80[1] = local_80[1] + pfVar2[0xd];
  local_80[2] = local_80[2] + pfVar2[0xe];
  local_80[3] = local_80[3] + pfVar2[0xf];
  fVar3 = *pfVar1;
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar6 = pfVar1[3];
  fVar7 = pfVar1[4];
  fVar8 = pfVar1[5];
  fVar9 = pfVar1[6];
  fVar10 = pfVar1[7];
  fVar11 = pfVar1[8];
  fVar12 = pfVar1[9];
  fVar13 = pfVar1[10];
  fVar14 = pfVar1[0xb];
  pfVar18 = (float *)(in_ECX + 0x60);
  iVar19 = (int)local_40 - (int)pfVar18;
  iVar20 = 3;
  do {
    fVar15 = *pfVar18;
    fVar16 = pfVar18[1];
    fVar17 = pfVar18[2];
    pfVar2 = (float *)(iVar19 + (int)pfVar18);
    *pfVar2 = fVar3 * fVar15 + fVar7 * fVar16 + fVar11 * fVar17;
    pfVar2[1] = fVar4 * fVar15 + fVar8 * fVar16 + fVar12 * fVar17;
    pfVar2[2] = fVar5 * fVar15 + fVar9 * fVar16 + fVar13 * fVar17;
    pfVar2[3] = fVar6 * fVar15 + fVar10 * fVar16 + fVar14 * fVar17;
    pfVar18 = pfVar18 + 4;
    iVar20 = iVar20 + -1;
  } while (iVar20 != 0);
  local_40[0] = local_40[0] + pfVar1[0xc];
  local_40[1] = local_40[1] + pfVar1[0xd];
  local_40[2] = local_40[2] + pfVar1[0xe];
  local_40[3] = local_40[3] + pfVar1[0xf];
  local_a0 = local_60;
  fStack_9c = fStack_5c;
  fStack_98 = fStack_58;
  uStack_94 = uStack_54;
  local_b0 = local_50;
  fStack_ac = (float)uStack_4c;
  fStack_a8 = (float)uStack_48;
  uStack_a4 = uStack_44;
  local_90 = local_40[4];
  fStack_8c = local_40[5];
  fStack_88 = local_40[6];
  uStack_84 = uStack_24;
  FUN_008f1310(&local_b0,param_1,param_2);
  local_a0 = local_50;
  fStack_9c = (float)uStack_4c;
  fStack_98 = (float)uStack_48;
  uStack_94 = uStack_44;
  local_b0 = local_60;
  fStack_ac = fStack_5c;
  fStack_a8 = fStack_58;
  uStack_a4 = uStack_54;
  local_90 = -local_40[4];
  fStack_8c = -local_40[5];
  fStack_88 = -local_40[6];
  uStack_84 = uStack_24 ^ 0x80000000;
  FUN_008f1310(&local_b0,param_1,param_2);
  iVar19 = *(int *)(param_1 + 0x28);
  local_a0 = *(float **)(in_ECX + 0xc);
  fStack_9c = *(float *)(in_ECX + 0x10);
  local_b0 = local_70;
  fStack_ac = (float)uStack_6c;
  fStack_a8 = (float)uStack_68;
  uStack_a4 = uStack_64;
  fVar21 = (float10)FUN_008ecbb0(fStack_18 * fStack_58 +
                                 fStack_1c * fStack_5c + local_20 * (float)local_60,
                                 (local_20 * local_40[5] - fStack_1c * local_40[4]) * fStack_58 +
                                 (fStack_18 * local_40[4] - local_20 * local_40[6]) * fStack_5c +
                                 (fStack_1c * local_40[6] - fStack_18 * local_40[5]) *
                                 (float)local_60);
  if ((float10)*(float *)(iVar19 + 0x38) - fVar21 <= (float10)3.1415927) {
    if ((float10)3.1415927 < fVar21 - (float10)*(float *)(iVar19 + 0x38)) {
      fVar21 = fVar21 - (float10)6.2831855;
    }
  }
  else {
    fVar21 = fVar21 + (float10)6.2831855;
  }
  fStack_98 = (float)fVar21;
  *(float *)(iVar19 + 0x38) = (float)fVar21;
  FUN_008f1b60(&local_b0,param_1,param_2);
  FUN_008f1cc0(local_80,local_40,param_1,param_2);
  if (*(float *)(in_ECX + 0x14) != 0.0) {
    fStack_a8 = *(float *)(in_ECX + 0x14);
    local_b0 = local_80 + 4;
    fStack_ac = (float)(iVar19 + 0x30);
    uStack_a4 = 1;
    FUN_008f1460(&local_b0,param_1,param_2);
  }
  return;
}



undefined4 FUN_008b2b00(void)

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
    uVar3 = FUN_008b2390();
    *(undefined4 *)(in_ECX + 4) = uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0x90;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b2b70(void)

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
  *in_ECX = &PTR_FUN_00a5653c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7fc8 = _DAT_00ba7fc8 + -1;
  local_4 = 0xffffffff;
  FUN_008a0250();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008b2be0(void)

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
    *puVar2 = &PTR_FUN_00a5653c;
    _DAT_00ba7fc8 = _DAT_00ba7fc8 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008b2c70(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a5653c;
    _DAT_00ba7fc8 = _DAT_00ba7fc8 + 1;
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



void FUN_008b2d60(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
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
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  return;
}



void FUN_008b2dd0(int param_1,int param_2)

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
    param_1 = FUN_008b2390();
  }
  uStack_14 = 0xffffffff;
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
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  fVar1 = *(float *)(param_2 + 0x10);
  if (fVar1 != 1.0) {
    *(float *)(param_1 + 0x20) = fVar1 * *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x24) = fVar1 * *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = fVar1 * *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x2c) = fVar1 * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x60) = fVar1 * *(float *)(param_1 + 0x60);
    *(float *)(param_1 + 100) = fVar1 * *(float *)(param_1 + 100);
    *(float *)(param_1 + 0x68) = fVar1 * *(float *)(param_1 + 0x68);
    *(float *)(param_1 + 0x6c) = fVar1 * *(float *)(param_1 + 0x6c);
  }
  FUN_008a07b0(param_1,param_2);
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_008b2f00(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  undefined1 local_a0 [156];
  
  FUN_008b2d60();
  if (param_2 == (undefined1 *)0x0) {
    param_2 = local_a0;
    (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),param_2,0x90,0,0);
  }
  FUN_008a01f0(param_1,param_2);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  iVar4 = *(int *)(in_ECX + 4);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(iVar4 + 0x24) = uVar1;
  *(undefined4 *)(iVar4 + 0x28) = uVar2;
  *(undefined4 *)(iVar4 + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(iVar4 + 0x34) = uVar1;
  *(undefined4 *)(iVar4 + 0x38) = uVar2;
  *(undefined4 *)(iVar4 + 0x3c) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(iVar4 + 0x44) = uVar1;
  *(undefined4 *)(iVar4 + 0x48) = uVar2;
  *(undefined4 *)(iVar4 + 0x4c) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(iVar4 + 0x54) = uVar1;
  *(undefined4 *)(iVar4 + 0x58) = uVar2;
  *(undefined4 *)(iVar4 + 0x5c) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(iVar4 + 0x60) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(iVar4 + 100) = uVar1;
  *(undefined4 *)(iVar4 + 0x68) = uVar2;
  *(undefined4 *)(iVar4 + 0x6c) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(iVar4 + 0x74) = uVar1;
  *(undefined4 *)(iVar4 + 0x78) = uVar2;
  *(undefined4 *)(iVar4 + 0x7c) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x74);
  uVar2 = *(undefined4 *)(param_2 + 0x78);
  uVar3 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(iVar4 + 0x84) = uVar1;
  *(undefined4 *)(iVar4 + 0x88) = uVar2;
  *(undefined4 *)(iVar4 + 0x8c) = uVar3;
  *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(param_2 + 0x88);
  return;
}



void FUN_008b30d0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_008a0c30(param_1);
  iVar1 = *(int *)(in_ECX + 4);
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0x20,0x40,0,0);
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0x60,0x30,0,0);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0xc,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0x10,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0x14,4,&param_1,1);
  return;
}



void FUN_008b3180(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_008a0c80(param_1);
  iVar1 = *(int *)(in_ECX + 4);
  param_1 = 0x40;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x20,0x40,&param_1,1);
  param_1 = 0x30;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x60,0x30,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0xc,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x10,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x14,4,&param_1,1);
  return;
}



void FUN_008b3250(int param_1)

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
    FUN_004d68a0(local_c,iVar1 + 0x20);
    param_1 = FUN_00707280("PivotInA");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    FUN_004d68a0(local_c,iVar1 + 0x60);
    param_1 = FUN_00707280("PivotInB");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    FUN_004d68a0(local_c,iVar1 + 0x70);
    param_1 = FUN_00707280("AxleInB");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    FUN_004d68a0(local_c,iVar1 + 0x40);
    param_1 = FUN_00707280("Perp2AxleInA1");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    FUN_004d68a0(local_c,iVar1 + 0x50);
    param_1 = FUN_00707280("Perp2AxleInA2");
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    param_1 = FUN_0070fb90("MinAngle",*(undefined4 *)(iVar1 + 0xc));
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    param_1 = FUN_0070fb90("MaxAngle",*(undefined4 *)(iVar1 + 0x10));
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
    param_1 = FUN_0070fb90("MaxFrictionTrq",*(undefined4 *)(iVar1 + 0x14));
    uVar3 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
  }
  return;
}



undefined4 FUN_008b34b0(undefined1 *param_1)

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
    *puVar1 = &PTR_FUN_00a56658;
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



void FUN_008b3540(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



undefined4 FUN_008b3550(float param_1,float param_2,float *param_3)

{
  float fVar1;
  
  if ((param_2 < 0.0 == (param_2 == 0.0)) && (param_1 < 0.0 == (param_1 == 0.0))) {
    param_3[8] = 0.0;
    param_3[9] = 0.0;
    param_3[10] = 0.0;
    param_3[0xb] = 0.0;
    param_3[0xc] = 0.0;
    param_3[0xd] = 0.0;
    param_3[0xe] = 0.0;
    param_3[0xf] = 0.0;
    param_3[0x10] = 0.0;
    param_3[0x11] = 0.0;
    param_3[0x12] = 0.0;
    param_3[0x13] = 0.0;
    param_3[8] = 1.0;
    fVar1 = param_2 * param_1 * param_1 * 0.4;
    param_3[0xd] = 1.0;
    param_3[0x12] = 1.0;
    param_3[8] = fVar1;
    param_3[0xd] = fVar1;
    param_3[0x12] = fVar1;
    param_3[4] = 0.0;
    param_3[5] = 0.0;
    param_3[6] = 0.0;
    param_3[7] = 0.0;
    param_3[1] = param_2;
    *param_3 = param_1 * param_1 * param_1 * 4.1887903;
    return 0;
  }
  return 1;
}



undefined4 FUN_008b35e0(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 < 0.0 != (param_2 == 0.0)) {
    return 1;
  }
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  param_3[8] = 0.0;
  param_3[9] = 0.0;
  param_3[10] = 0.0;
  param_3[0xb] = 0.0;
  fVar4 = param_2 * 0.33333334;
  param_3[0xc] = 0.0;
  param_3[0xd] = 0.0;
  param_3[0xe] = 0.0;
  param_3[0xf] = 0.0;
  param_3[0x10] = 0.0;
  param_3[0x11] = 0.0;
  param_3[0x12] = 0.0;
  param_3[0x13] = 0.0;
  param_3[8] = 1.0;
  param_3[0xd] = 1.0;
  param_3[0x12] = 1.0;
  param_3[8] = (fVar2 * fVar2 + fVar3 * fVar3) * fVar4;
  param_3[0xd] = (fVar1 * fVar1 + fVar3 * fVar3) * fVar4;
  param_3[0x12] = (fVar1 * fVar1 + fVar2 * fVar2) * fVar4;
  param_3[4] = 0.0;
  param_3[5] = 0.0;
  param_3[6] = 0.0;
  param_3[7] = 0.0;
  param_3[1] = param_2;
  *param_3 = fVar3 * fVar2 * fVar1 * 8.0;
  return 0;
}



void FUN_008b3690(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  in_ECX[4] = param_1[4];
  in_ECX[5] = uVar1;
  in_ECX[6] = uVar2;
  in_ECX[7] = uVar3;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  in_ECX[8] = param_1[8];
  in_ECX[9] = uVar1;
  in_ECX[10] = uVar2;
  in_ECX[0xb] = uVar3;
  uVar1 = param_1[0xd];
  uVar2 = param_1[0xe];
  uVar3 = param_1[0xf];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = uVar1;
  in_ECX[0xe] = uVar2;
  in_ECX[0xf] = uVar3;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = uVar1;
  in_ECX[0x12] = uVar2;
  in_ECX[0x13] = uVar3;
  return;
}



void FUN_008b36d0(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  
  *param_3 = *param_3 - (param_1[2] * param_1[2] + param_1[1] * param_1[1]) * param_2;
  param_3[5] = param_3[5] - (param_1[2] * param_1[2] + *param_1 * *param_1) * param_2;
  param_3[10] = param_3[10] - (param_1[1] * param_1[1] + *param_1 * *param_1) * param_2;
  fVar1 = param_2 * *param_1 * param_1[1] + param_3[1];
  param_3[1] = fVar1;
  param_3[4] = fVar1;
  fVar1 = param_2 * param_1[2] * param_1[1] + param_3[6];
  param_3[6] = fVar1;
  param_3[9] = fVar1;
  fVar1 = param_2 * *param_1 * param_1[2] + param_3[8];
  param_3[8] = fVar1;
  param_3[2] = fVar1;
  return;
}



void FUN_008b3770(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  
  *param_3 = (param_1[2] * param_1[2] + param_1[1] * param_1[1]) * param_2 + *param_3;
  param_3[5] = (param_1[2] * param_1[2] + *param_1 * *param_1) * param_2 + param_3[5];
  param_3[10] = (param_1[1] * param_1[1] + *param_1 * *param_1) * param_2 + param_3[10];
  fVar1 = param_3[1] - param_2 * *param_1 * param_1[1];
  param_3[1] = fVar1;
  param_3[4] = fVar1;
  fVar1 = param_3[6] - param_2 * param_1[2] * param_1[1];
  param_3[6] = fVar1;
  param_3[9] = fVar1;
  fVar1 = param_3[8] - param_2 * *param_1 * param_1[2];
  param_3[8] = fVar1;
  param_3[2] = fVar1;
  return;
}



void FUN_008b3810(float param_1)

{
  int in_EAX;
  float local_20 [7];
  
  *(float *)(in_EAX + 4) = param_1 * *(float *)(in_EAX + 4);
  local_20[0] = param_1;
  local_20[1] = 0.0;
  local_20[2] = 0.0;
  local_20[3] = 0.0;
  FUN_008d2a60(local_20);
  return;
}



void FUN_008b3850(int param_1)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int *in_ECX;
  int iVar22;
  float *pfVar23;
  float *pfVar24;
  int local_18;
  int local_14;
  
  in_ECX[0xc] = 0;
  in_ECX[0xb] = 0;
  in_ECX[10] = 0;
  in_ECX[9] = 0;
  in_ECX[8] = 0;
  in_ECX[7] = 0;
  in_ECX[6] = 0;
  in_ECX[5] = 0;
  in_ECX[4] = 0;
  in_ECX[3] = 0;
  pfVar23 = (float *)(param_1 + in_ECX[1] * 4);
  local_18 = 1;
  pfVar24 = (float *)(param_1 + *in_ECX * 4);
  local_14 = 3;
  do {
    fVar1 = *pfVar24;
    fVar2 = *pfVar23;
    iVar22 = (local_18 % 3) * 4;
    fVar3 = *(float *)(param_1 + (*in_ECX + iVar22) * 4);
    fVar4 = *(float *)(param_1 + (iVar22 + in_ECX[1]) * 4);
    fVar5 = fVar3 - fVar1;
    fVar12 = fVar4 - fVar2;
    fVar6 = fVar1 * fVar1;
    fVar7 = fVar6 * fVar1;
    fVar8 = fVar2 * fVar2;
    fVar19 = fVar8 * fVar2;
    fVar20 = fVar3 * fVar3;
    fVar11 = fVar4 * fVar4 * fVar4;
    fVar13 = fVar3 * (fVar3 + fVar1) + fVar6;
    fVar17 = fVar13 * fVar3 + fVar7;
    fVar9 = (fVar4 + fVar2) * fVar4 + fVar8;
    fVar10 = fVar9 * fVar4 + fVar19;
    fVar14 = fVar3 * fVar1 + fVar3 * fVar1;
    fVar18 = fVar20 * 3.0 + fVar14 + fVar6;
    fVar6 = fVar6 * 3.0 + fVar14 + fVar20;
    fVar16 = (fVar3 + fVar1) * fVar12 + (float)in_ECX[3];
    in_ECX[3] = (int)fVar16;
    fVar15 = fVar13 * fVar12 + (float)in_ECX[4];
    in_ECX[4] = (int)fVar15;
    fVar14 = fVar17 * fVar12 + (float)in_ECX[6];
    in_ECX[6] = (int)fVar14;
    fVar13 = (fVar17 * fVar3 + fVar7 * fVar1) * fVar12 + (float)in_ECX[9];
    in_ECX[9] = (int)fVar13;
    fVar17 = fVar9 * fVar5 + (float)in_ECX[5];
    in_ECX[5] = (int)fVar17;
    fVar21 = fVar10 * fVar5 + (float)in_ECX[8];
    in_ECX[8] = (int)fVar21;
    fVar10 = (fVar10 * fVar4 + fVar19 * fVar2) * fVar5 + (float)in_ECX[0xc];
    in_ECX[0xc] = (int)fVar10;
    fVar9 = (fVar6 * fVar2 + fVar18 * fVar4) * fVar12 + (float)in_ECX[7];
    in_ECX[7] = (int)fVar9;
    fVar6 = ((fVar7 * 4.0 + fVar6 * fVar3) * fVar2 + (fVar18 * fVar1 + fVar20 * fVar3 * 4.0) * fVar4
            ) * fVar12 + (float)in_ECX[10];
    in_ECX[10] = (int)fVar6;
    fVar2 = fVar4 * fVar4 * fVar2;
    fVar8 = fVar8 * fVar4;
    pfVar24 = pfVar24 + 4;
    pfVar23 = pfVar23 + 4;
    local_18 = local_18 + 1;
    local_14 = local_14 + -1;
    fVar1 = ((fVar11 * 4.0 + fVar2 * 3.0 + fVar8 + fVar8 + fVar19) * fVar3 +
            (fVar19 * 4.0 + fVar2 + fVar2 + fVar8 * 3.0 + fVar11) * fVar1) * fVar5 +
            (float)in_ECX[0xb];
    in_ECX[0xb] = (int)fVar1;
  } while (local_14 != 0);
  in_ECX[3] = (int)(fVar16 * 0.5);
  in_ECX[4] = (int)(fVar15 * 0.16666667);
  in_ECX[6] = (int)(fVar14 * 0.083333336);
  in_ECX[9] = (int)(fVar13 * 0.05);
  in_ECX[5] = (int)(fVar17 * -0.16666667);
  in_ECX[8] = (int)(fVar21 * -0.083333336);
  in_ECX[0xc] = (int)(fVar10 * -0.05);
  in_ECX[7] = (int)(fVar9 * 0.041666668);
  in_ECX[10] = (int)(fVar6 * 0.016666668);
  in_ECX[0xb] = (int)(fVar1 * -0.016666668);
  return;
}



void FUN_008b3b50(float *param_1,float *param_2)

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
  int *extraout_ECX;
  
  FUN_008b3850(param_1);
  fVar4 = (-(*param_1 * *param_2) - param_1[1] * param_2[1]) - param_1[2] * param_2[2];
  fVar8 = 1.0 / param_2[extraout_ECX[2]];
  pfVar1 = param_2 + extraout_ECX[1];
  param_2 = param_2 + *extraout_ECX;
  fVar6 = fVar8 * fVar8;
  fVar7 = fVar6 * fVar8;
  extraout_ECX[0xd] = (int)(fVar8 * (float)extraout_ECX[4]);
  extraout_ECX[0xe] = (int)(fVar8 * (float)extraout_ECX[5]);
  fVar5 = fVar4 * (float)extraout_ECX[3];
  extraout_ECX[0xf] =
       (int)-(((float)extraout_ECX[5] * *pfVar1 + *param_2 * (float)extraout_ECX[4] + fVar5) * fVar6
             );
  extraout_ECX[0x10] = (int)(fVar8 * (float)extraout_ECX[6]);
  extraout_ECX[0x11] = (int)(fVar8 * (float)extraout_ECX[8]);
  fVar2 = (float)extraout_ECX[5] * *pfVar1 + *param_2 * (float)extraout_ECX[4];
  fVar3 = *param_2 * *pfVar1 * (float)extraout_ECX[7];
  extraout_ECX[0x12] =
       (int)((*pfVar1 * *pfVar1 * (float)extraout_ECX[8] +
             *param_2 * (float)extraout_ECX[6] * *param_2 +
             fVar3 + fVar3 + (fVar2 + fVar2 + fVar5) * fVar4) * fVar7);
  extraout_ECX[0x13] = (int)(fVar8 * (float)extraout_ECX[9]);
  extraout_ECX[0x14] = (int)(fVar8 * (float)extraout_ECX[0xc]);
  fVar2 = *param_2;
  fVar3 = *pfVar1;
  fVar9 = *param_2 * *pfVar1 * (float)extraout_ECX[7];
  extraout_ECX[0x15] =
       (int)-(fVar7 * fVar8 *
             (fVar2 * fVar2 * fVar2 * (float)extraout_ECX[9] +
             *param_2 * (float)extraout_ECX[10] * *param_2 * *pfVar1 * 3.0 +
             fVar3 * (float)extraout_ECX[0xc] * fVar3 * fVar3 +
             *param_2 * (float)extraout_ECX[0xb] * fVar3 * fVar3 * 3.0 +
             ((((float)extraout_ECX[5] * *pfVar1 + *param_2 * (float)extraout_ECX[4]) * 3.0 + fVar5)
              * fVar4 +
             (*pfVar1 * *pfVar1 * (float)extraout_ECX[8] +
             *param_2 * (float)extraout_ECX[6] * *param_2 + fVar9 + fVar9) * 3.0) * fVar4));
  extraout_ECX[0x16] = (int)(fVar8 * (float)extraout_ECX[10]);
  extraout_ECX[0x17] =
       (int)-((fVar4 * (float)extraout_ECX[8] +
              (float)extraout_ECX[0xc] * *pfVar1 + *param_2 * (float)extraout_ECX[0xb]) * fVar6);
  fVar3 = *pfVar1 * (float)extraout_ECX[7] + *param_2 * (float)extraout_ECX[6];
  fVar2 = *param_2 * (float)extraout_ECX[10] * *pfVar1;
  extraout_ECX[0x18] =
       (int)((*param_2 * *param_2 * (float)extraout_ECX[9] +
             *pfVar1 * (float)extraout_ECX[0xb] * *pfVar1 +
             fVar2 + fVar2 + (fVar4 * (float)extraout_ECX[4] + fVar3 + fVar3) * fVar4) * fVar7);
  return;
}



void FUN_008b3d50(float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  int in_ECX;
  
  *param_3 = *(float *)(in_ECX + 0x68) / *(float *)(in_ECX + 100);
  param_3[1] = *(float *)(in_ECX + 0x6c) / *(float *)(in_ECX + 100);
  param_3[2] = *(float *)(in_ECX + 0x70) / *(float *)(in_ECX + 100);
  *param_4 = (*(float *)(in_ECX + 0x78) + *(float *)(in_ECX + 0x7c)) * param_2;
  param_4[5] = (*(float *)(in_ECX + 0x74) + *(float *)(in_ECX + 0x7c)) * param_2;
  param_4[10] = (*(float *)(in_ECX + 0x74) + *(float *)(in_ECX + 0x78)) * param_2;
  fVar1 = -(param_2 * *(float *)(in_ECX + 0x80));
  param_4[1] = fVar1;
  param_4[4] = fVar1;
  fVar1 = -(param_2 * *(float *)(in_ECX + 0x84));
  param_4[6] = fVar1;
  param_4[9] = fVar1;
  fVar1 = -(param_2 * *(float *)(in_ECX + 0x88));
  param_4[8] = fVar1;
  param_4[2] = fVar1;
  *param_4 = *param_4 - (param_3[2] * param_3[2] + param_3[1] * param_3[1]) * param_1;
  param_4[5] = param_4[5] - (param_3[2] * param_3[2] + *param_3 * *param_3) * param_1;
  param_4[10] = param_4[10] - (param_3[1] * param_3[1] + *param_3 * *param_3) * param_1;
  fVar1 = *param_3 * param_3[1] * param_1 + param_4[1];
  param_4[1] = fVar1;
  param_4[4] = fVar1;
  fVar1 = param_3[2] * param_3[1] * param_1 + param_4[6];
  param_4[6] = fVar1;
  param_4[9] = fVar1;
  fVar1 = param_3[2] * *param_3 * param_1 + param_4[8];
  param_4[8] = fVar1;
  param_4[2] = fVar1;
  return;
}



undefined4 FUN_008b3e60(int *param_1,float *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_7c;
  float local_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar4 = 0;
  local_50 = 0.0;
  fStack_4c = 0.0;
  fStack_48 = 0.0;
  fStack_44 = 0.0;
  local_70 = 0.0;
  fStack_6c = 0.0;
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  local_7c = 0.0;
  local_78 = 0.0;
  if (0 < param_1[1]) {
    iVar3 = *param_1;
    iVar5 = 0;
    do {
      FUN_0088fcc0(iVar5 + 0x50 + iVar3,iVar5 + 0x10 + iVar3);
      iVar3 = *param_1;
      local_7c = local_7c + *(float *)(iVar5 + 4 + iVar3);
      fVar2 = *(float *)(iVar5 + 4 + iVar3);
      local_78 = local_78 + *(float *)(iVar5 + iVar3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x90;
      local_70 = local_70 + fVar2 * local_60;
      fStack_6c = fStack_6c + fVar2 * fStack_5c;
      fStack_68 = fStack_68 + fVar2 * fStack_58;
      fStack_64 = fStack_64 + fVar2 * fStack_54;
    } while (iVar4 < param_1[1]);
    if (local_7c < 0.0 == (local_7c == 0.0)) {
      fVar2 = 1.0 / local_7c;
      param_2[1] = local_7c;
      *param_2 = local_78;
      iVar4 = 0;
      local_78 = 0.0;
      param_2[4] = fVar2 * local_70;
      param_2[5] = fVar2 * fStack_6c;
      param_2[6] = fVar2 * fStack_68;
      param_2[7] = fVar2 * fStack_64;
      param_2[8] = local_50;
      param_2[9] = fStack_4c;
      param_2[10] = fStack_48;
      param_2[0xb] = fStack_44;
      param_2[0xc] = local_50;
      param_2[0xd] = fStack_4c;
      param_2[0xe] = fStack_48;
      param_2[0xf] = fStack_44;
      param_2[0x10] = local_50;
      param_2[0x11] = fStack_4c;
      param_2[0x12] = fStack_48;
      param_2[0x13] = fStack_44;
      if (0 < param_1[1]) {
        do {
          puVar1 = (undefined4 *)(iVar4 + 0x20 + *param_1);
          local_40 = *puVar1;
          uStack_3c = puVar1[1];
          uStack_38 = puVar1[2];
          uStack_34 = puVar1[3];
          iVar3 = iVar4 + *param_1;
          local_30 = *(undefined4 *)(iVar3 + 0x30);
          uStack_2c = *(undefined4 *)(iVar3 + 0x34);
          uStack_28 = *(undefined4 *)(iVar3 + 0x38);
          uStack_24 = *(undefined4 *)(iVar3 + 0x3c);
          local_20 = *(undefined4 *)(iVar3 + 0x40);
          uStack_1c = *(undefined4 *)(iVar3 + 0x44);
          uStack_18 = *(undefined4 *)(iVar3 + 0x48);
          uStack_14 = *(undefined4 *)(iVar3 + 0x4c);
          FUN_008d2c60(iVar3 + 0x50);
          FUN_0088fcc0(iVar4 + *param_1 + 0x50,iVar4 + *param_1 + 0x10);
          local_60 = local_60 - fVar2 * local_70;
          fStack_5c = fStack_5c - fVar2 * fStack_6c;
          fStack_58 = fStack_58 - fVar2 * fStack_68;
          fStack_54 = fStack_54 - fVar2 * fStack_64;
          FUN_008b3770(&local_60,*(undefined4 *)(iVar4 + 4 + *param_1),&local_40);
          FUN_008d29e0(&local_40);
          local_78 = (float)((int)local_78 + 1);
          iVar4 = iVar4 + 0x90;
        } while ((int)local_78 < param_1[1]);
      }
      return 0;
    }
  }
  return 1;
}



void FUN_008b4020(int *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  int *piVar3;
  int *in_ECX;
  int *extraout_ECX;
  int iVar4;
  int local_74;
  int local_64;
  float local_60 [4];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_64 = param_1[4];
  in_ECX[0x22] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x19] = 0;
  if (0 < local_64) {
    local_74 = 0;
    do {
      local_20 = *param_2;
      fStack_1c = param_2[1];
      fStack_18 = param_2[2];
      fStack_14 = param_2[3];
      iVar4 = *param_1;
      piVar3 = (int *)(param_1[3] + local_74);
      pfVar1 = (float *)(piVar3[1] * 0x10 + iVar4);
      local_30 = *pfVar1 + local_20;
      fStack_2c = pfVar1[1] + fStack_1c;
      fStack_28 = pfVar1[2] + fStack_18;
      fStack_24 = pfVar1[3] + fStack_14;
      pfVar1 = (float *)(*piVar3 * 0x10 + iVar4);
      local_40 = *pfVar1 + local_20;
      fStack_3c = pfVar1[1] + fStack_1c;
      fStack_38 = pfVar1[2] + fStack_18;
      fStack_34 = pfVar1[3] + fStack_14;
      pfVar1 = (float *)(piVar3[2] * 0x10 + iVar4);
      local_20 = *pfVar1 + local_20;
      fStack_1c = pfVar1[1] + fStack_1c;
      fStack_18 = pfVar1[2] + fStack_18;
      fStack_14 = pfVar1[3] + fStack_14;
      local_60[0] = (fStack_2c - fStack_3c) * (fStack_18 - fStack_38) -
                    (fStack_28 - fStack_38) * (fStack_1c - fStack_3c);
      local_60[1] = (fStack_28 - fStack_38) * (local_20 - local_40) -
                    (local_30 - local_40) * (fStack_18 - fStack_38);
      local_60[2] = (local_30 - local_40) * (fStack_1c - fStack_3c) -
                    (fStack_2c - fStack_3c) * (local_20 - local_40);
      fStack_4c = local_60[2] * local_60[2];
      local_50 = SQRT(fStack_4c + local_60[1] * local_60[1] + local_60[0] * local_60[0]);
      if (0.0 < local_50) {
        local_60[3] = 1.0 / local_50;
        local_60[0] = local_60[3] * local_60[0];
        local_60[1] = local_60[3] * local_60[1];
        local_60[2] = local_60[3] * local_60[2];
        local_60[3] = local_60[3] *
                      ((fStack_24 - fStack_34) * (fStack_14 - fStack_34) -
                      (fStack_24 - fStack_34) * (fStack_14 - fStack_34));
        if ((ABS(local_60[0]) <= ABS(local_60[1])) || (ABS(local_60[0]) <= ABS(local_60[2]))) {
          iVar4 = 1;
          if (ABS(local_60[1]) <= ABS(local_60[2])) {
            iVar4 = 2;
          }
          in_ECX[2] = iVar4;
        }
        else {
          in_ECX[2] = 0;
        }
        iVar4 = (in_ECX[2] + 1) % 3;
        *in_ECX = iVar4;
        in_ECX[1] = (iVar4 + 1) % 3;
        fStack_48 = fStack_4c;
        fStack_44 = fStack_4c;
        FUN_008b3b50(&local_40,local_60);
        iVar4 = *extraout_ECX;
        if (iVar4 == 0) {
          fVar2 = (float)extraout_ECX[0xd];
        }
        else if (extraout_ECX[1] == 0) {
          fVar2 = (float)extraout_ECX[0xe];
        }
        else {
          fVar2 = (float)extraout_ECX[0xf];
        }
        extraout_ECX[0x19] = (int)(local_60[0] * fVar2 + (float)extraout_ECX[0x19]);
        extraout_ECX[iVar4 + 0x1a] =
             (int)(local_60[iVar4] * (float)extraout_ECX[0x10] + (float)extraout_ECX[iVar4 + 0x1a]);
        iVar4 = extraout_ECX[1];
        extraout_ECX[iVar4 + 0x1a] =
             (int)(local_60[iVar4] * (float)extraout_ECX[0x11] + (float)extraout_ECX[iVar4 + 0x1a]);
        iVar4 = extraout_ECX[2];
        extraout_ECX[iVar4 + 0x1a] =
             (int)(local_60[iVar4] * (float)extraout_ECX[0x12] + (float)extraout_ECX[iVar4 + 0x1a]);
        iVar4 = *extraout_ECX;
        extraout_ECX[iVar4 + 0x1d] =
             (int)(local_60[iVar4] * (float)extraout_ECX[0x13] + (float)extraout_ECX[iVar4 + 0x1d]);
        iVar4 = extraout_ECX[1];
        extraout_ECX[iVar4 + 0x1d] =
             (int)(local_60[iVar4] * (float)extraout_ECX[0x14] + (float)extraout_ECX[iVar4 + 0x1d]);
        iVar4 = extraout_ECX[2];
        extraout_ECX[iVar4 + 0x1d] =
             (int)(local_60[iVar4] * (float)extraout_ECX[0x15] + (float)extraout_ECX[iVar4 + 0x1d]);
        iVar4 = *extraout_ECX;
        extraout_ECX[iVar4 + 0x20] =
             (int)(local_60[iVar4] * (float)extraout_ECX[0x16] + (float)extraout_ECX[iVar4 + 0x20]);
        iVar4 = extraout_ECX[1];
        extraout_ECX[iVar4 + 0x20] =
             (int)(local_60[iVar4] * (float)extraout_ECX[0x17] + (float)extraout_ECX[iVar4 + 0x20]);
        iVar4 = extraout_ECX[2];
        extraout_ECX[iVar4 + 0x20] =
             (int)(local_60[iVar4] * (float)extraout_ECX[0x18] + (float)extraout_ECX[iVar4 + 0x20]);
        in_ECX = extraout_ECX;
      }
      local_74 = local_74 + 0xc;
      local_64 = local_64 + -1;
    } while (local_64 != 0);
  }
  in_ECX[0x1a] = (int)((float)in_ECX[0x1a] * 0.5);
  in_ECX[0x1b] = (int)((float)in_ECX[0x1b] * 0.5);
  in_ECX[0x1c] = (int)((float)in_ECX[0x1c] * 0.5);
  in_ECX[0x1d] = (int)((float)in_ECX[0x1d] * 0.33333334);
  in_ECX[0x1e] = (int)((float)in_ECX[0x1e] * 0.33333334);
  in_ECX[0x1f] = (int)((float)in_ECX[0x1f] * 0.33333334);
  in_ECX[0x20] = (int)((float)in_ECX[0x20] * 0.5);
  in_ECX[0x21] = (int)((float)in_ECX[0x21] * 0.5);
  in_ECX[0x22] = (int)((float)in_ECX[0x22] * 0.5);
  return;
}



void FUN_008b4350(float *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  int iVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  undefined1 auVar6 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  
  iVar1 = param_2[1];
  fVar10 = 3.4028235e+38;
  fVar5 = -3.4028235e+38;
  fVar14 = 0.0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  fVar11 = fVar10;
  fVar12 = fVar10;
  fVar13 = fVar10;
  fVar7 = fVar5;
  fVar8 = fVar5;
  fVar9 = fVar5;
  if (0 < iVar1) {
    pauVar3 = (undefined1 (*) [16])*param_2;
    iVar4 = iVar1;
    do {
      auVar6 = *pauVar3;
      pauVar3 = pauVar3 + 1;
      iVar4 = iVar4 + -1;
      auVar18._4_4_ = fVar11;
      auVar18._0_4_ = fVar10;
      auVar18._8_4_ = fVar12;
      auVar18._12_4_ = fVar13;
      auVar18 = minps(auVar6,auVar18);
      auVar2._4_4_ = fVar7;
      auVar2._0_4_ = fVar5;
      auVar2._8_4_ = fVar8;
      auVar2._12_4_ = fVar9;
      auVar6 = maxps(auVar6,auVar2);
      fVar10 = auVar18._0_4_;
      fVar11 = auVar18._4_4_;
      fVar12 = auVar18._8_4_;
      fVar13 = auVar18._12_4_;
      fVar5 = auVar6._0_4_;
      fVar7 = auVar6._4_4_;
      fVar8 = auVar6._8_4_;
      fVar9 = auVar6._12_4_;
    } while (iVar4 != 0);
  }
  if (iVar1 != 0) {
    fVar14 = (fVar10 + fVar5) * 0.5;
    fVar15 = (fVar11 + fVar7) * 0.5;
    fVar16 = (fVar12 + fVar8) * 0.5;
    fVar17 = (fVar13 + fVar9) * 0.5;
  }
  *param_1 = -fVar14;
  param_1[1] = -fVar15;
  param_1[2] = -fVar16;
  param_1[3] = -fVar17;
  return;
}



undefined4 FUN_008b43e0(undefined4 param_1,float param_2,float *param_3)

{
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_3c;
  
  if (param_2 < 0.0 != (param_2 == 0.0)) {
    return 1;
  }
  FUN_008b4350(&local_f0,param_1);
  fStack_e4 = 0.0;
  FUN_008b4020(param_1,&local_f0);
  *param_3 = local_3c;
  FUN_008b3d50(param_2,param_2 / local_3c,&local_e0,&local_d0);
  param_3[4] = local_e0 - local_f0;
  param_3[5] = fStack_dc - fStack_ec;
  param_3[6] = fStack_d8 - fStack_e8;
  param_3[7] = fStack_d4 - fStack_e4;
  param_3[8] = local_d0;
  param_3[9] = fStack_cc;
  param_3[10] = fStack_c8;
  param_3[0xb] = fStack_c4;
  param_3[0xc] = local_c0;
  param_3[0xd] = fStack_bc;
  param_3[0xe] = fStack_b8;
  param_3[0xf] = fStack_b4;
  param_3[0x10] = local_b0;
  param_3[0x11] = fStack_ac;
  param_3[0x12] = fStack_a8;
  param_3[0x13] = fStack_a4;
  param_3[1] = param_2;
  return 0;
}



void FUN_008b44a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0x80000000;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0x80000000;
  return;
}



void FUN_008b44c0(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],(in_ECX[5] & 0x3fffffff) * 0xc,0x14);
  }
  if (-1 < (int)in_ECX[2]) {
    FUN_008a75d0(*in_ECX,in_ECX[2] << 4,0x14);
  }
  return;
}



undefined4 FUN_008b4540(undefined4 *param_1,int param_2,uint param_3,float param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_4 < 0.0 != (param_4 == 0.0)) {
    return 1;
  }
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0x80000000;
  if (0 < (int)param_3) {
    FUN_008a6e40(&iStack_3c,((int)param_3 < 0) - 1 & param_3,0x10);
  }
  iVar2 = 0;
  uStack_38 = param_3;
  if (3 < (int)param_3) {
    iVar1 = 0;
    iVar3 = (param_3 - 4 >> 2) + 1;
    iVar2 = iVar3 * 4;
    do {
      *(undefined4 *)(iVar1 + iStack_3c) = *param_1;
      *(undefined4 *)(iVar1 + 4 + iStack_3c) = param_1[1];
      *(undefined4 *)(iVar1 + 8 + iStack_3c) = param_1[2];
      *(undefined4 *)(iVar1 + 0x10 + iStack_3c) = *(undefined4 *)((int)param_1 + param_2);
      *(undefined4 *)(iVar1 + 0x14 + iStack_3c) = *(undefined4 *)((int)param_1 + param_2 + 4);
      *(undefined4 *)(iVar1 + 0x18 + iStack_3c) = *(undefined4 *)((int)param_1 + param_2 + 8);
      *(undefined4 *)(iVar1 + 0x20 + iStack_3c) = *(undefined4 *)((int)param_1 + param_2 * 2);
      *(undefined4 *)(iVar1 + 0x24 + iStack_3c) = *(undefined4 *)((int)param_1 + param_2 * 2 + 4);
      *(undefined4 *)(iVar1 + 0x28 + iStack_3c) = *(undefined4 *)((int)param_1 + param_2 * 2 + 8);
      *(undefined4 *)(iVar1 + 0x30 + iStack_3c) = *(undefined4 *)((int)param_1 + param_2 * 3);
      *(undefined4 *)(iVar1 + 0x34 + iStack_3c) = *(undefined4 *)((int)param_1 + param_2 * 3 + 4);
      *(undefined4 *)(iVar1 + 0x38 + iStack_3c) = *(undefined4 *)((int)param_1 + param_2 * 3 + 8);
      param_1 = param_1 + param_2;
      iVar1 = iVar1 + 0x40;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (iVar2 < (int)param_3) {
    iVar1 = iVar2 << 4;
    iVar2 = param_3 - iVar2;
    do {
      *(undefined4 *)(iVar1 + iStack_3c) = *param_1;
      *(undefined4 *)(iVar1 + 4 + iStack_3c) = param_1[1];
      *(undefined4 *)(iVar1 + 8 + iStack_3c) = param_1[2];
      param_1 = (undefined4 *)((int)param_1 + param_2);
      iVar1 = iVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iStack_24 = iStack_3c;
  uStack_1c = 0x10;
  uStack_20 = param_3;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0x80000000;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0x80000000;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0x80000000;
  FUN_008f2010(&iStack_24,&uStack_18,&uStack_30,1);
  FUN_008b43e0(&uStack_18,param_4,param_5);
  *(float *)(param_5 + 4) = param_4;
  if ((uStack_28 & 0x80000000) == 0) {
    FUN_008a75d0(uStack_30,uStack_28 << 4,0x14);
  }
  FUN_008b44c0();
  if ((uStack_34 & 0x80000000) == 0) {
    FUN_008a75d0(iStack_3c,uStack_34 << 4,0x14);
  }
  return 0;
}



undefined4 FUN_008b455d(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack00000004;
  uint uStack00000008;
  uint uStack0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  int in_stack_0000001c;
  uint in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 *in_stack_00000044;
  int in_stack_00000048;
  uint in_stack_0000004c;
  undefined4 in_stack_00000050;
  int in_stack_00000054;
  
  uVar1 = in_stack_0000004c;
  iStack00000004 = 0;
  uStack00000008 = 0;
  uStack0000000c = 0x80000000;
  if (0 < (int)in_stack_0000004c) {
    FUN_008a6e40(&stack0x00000004,((int)in_stack_0000004c < 0) - 1 & in_stack_0000004c,0x10);
  }
  iVar4 = 0;
  uStack00000008 = uVar1;
  puVar2 = in_stack_00000044;
  if (3 < (int)uVar1) {
    iVar3 = 0;
    iVar5 = (uVar1 - 4 >> 2) + 1;
    iVar4 = iVar5 * 4;
    do {
      *(undefined4 *)(iVar3 + iStack00000004) = *puVar2;
      *(undefined4 *)(iVar3 + 4 + iStack00000004) = puVar2[1];
      *(undefined4 *)(iVar3 + 8 + iStack00000004) = puVar2[2];
      *(undefined4 *)(iVar3 + 0x10 + iStack00000004) =
           *(undefined4 *)((int)puVar2 + in_stack_00000048);
      *(undefined4 *)(iVar3 + 0x14 + iStack00000004) =
           *(undefined4 *)((int)puVar2 + in_stack_00000048 + 4);
      *(undefined4 *)(iVar3 + 0x18 + iStack00000004) =
           *(undefined4 *)((int)puVar2 + in_stack_00000048 + 8);
      *(undefined4 *)(iVar3 + 0x20 + iStack00000004) =
           *(undefined4 *)((int)puVar2 + in_stack_00000048 * 2);
      *(undefined4 *)(iVar3 + 0x24 + iStack00000004) =
           *(undefined4 *)((int)puVar2 + in_stack_00000048 * 2 + 4);
      *(undefined4 *)(iVar3 + 0x28 + iStack00000004) =
           *(undefined4 *)((int)puVar2 + in_stack_00000048 * 2 + 8);
      *(undefined4 *)(iVar3 + 0x30 + iStack00000004) =
           *(undefined4 *)((int)puVar2 + in_stack_00000048 * 3);
      *(undefined4 *)(iVar3 + 0x34 + iStack00000004) =
           *(undefined4 *)((int)puVar2 + in_stack_00000048 * 3 + 4);
      *(undefined4 *)(iVar3 + 0x38 + iStack00000004) =
           *(undefined4 *)((int)puVar2 + in_stack_00000048 * 3 + 8);
      puVar2 = puVar2 + in_stack_00000048;
      iVar3 = iVar3 + 0x40;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (iVar4 < (int)uVar1) {
    iVar3 = iVar4 << 4;
    iVar4 = uVar1 - iVar4;
    do {
      *(undefined4 *)(iVar3 + iStack00000004) = *puVar2;
      *(undefined4 *)(iVar3 + 4 + iStack00000004) = puVar2[1];
      *(undefined4 *)(iVar3 + 8 + iStack00000004) = puVar2[2];
      puVar2 = (undefined4 *)((int)puVar2 + in_stack_00000048);
      iVar3 = iVar3 + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  in_stack_0000001c = iStack00000004;
  in_stack_00000024 = 0x10;
  in_stack_00000020 = uVar1;
  in_stack_00000028 = 0;
  in_stack_0000002c = 0;
  in_stack_00000030 = 0x80000000;
  in_stack_00000034 = 0;
  in_stack_00000038 = 0;
  in_stack_0000003c = 0x80000000;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0x80000000;
  FUN_008f2010(&stack0x0000001c,&stack0x00000028,&stack0x00000010,1);
  iVar4 = in_stack_00000054;
  FUN_008b43e0(&stack0x00000028,in_stack_00000050,in_stack_00000054);
  *(undefined4 *)(iVar4 + 4) = in_stack_00000050;
  if ((in_stack_00000018 & 0x80000000) == 0) {
    FUN_008a75d0(in_stack_00000010,in_stack_00000018 << 4,0x14);
  }
  FUN_008b44c0();
  if ((uStack0000000c & 0x80000000) == 0) {
    FUN_008a75d0(iStack00000004,uStack0000000c << 4,0x14);
  }
  return 0;
}



undefined4
FUN_008b4790(float *param_1,float *param_2,float param_3,float param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float local_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float local_404;
  undefined1 local_400 [4];
  undefined1 auStack_3fc [8];
  float fStack_3f4;
  float local_3e4;
  float local_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float local_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float local_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float local_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float local_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float local_390;
  float local_38c;
  float local_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float local_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  float local_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float local_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float local_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  float local_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float local_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float local_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float local_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float local_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float local_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float local_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float local_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float local_260;
  float local_25c;
  float local_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float local_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined1 *local_1d0;
  uint local_1cc;
  uint local_1c8;
  undefined1 local_1c0 [64];
  undefined4 local_180 [95];
  
  if ((param_4 < 0.0 != (param_4 == 0.0)) || (param_3 < 0.0 != (param_3 == 0.0))) {
    return 1;
  }
  fVar13 = *param_2 - *param_1;
  fVar14 = param_2[1] - param_1[1];
  fVar15 = param_2[2] - param_1[2];
  fVar5 = fVar14 * fVar14;
  fVar6 = fVar15 * fVar15;
  fVar7 = SQRT(fVar6 + fVar5 + fVar13 * fVar13);
  if (0.0 < fVar7) {
    auVar8._4_4_ = fVar5;
    auVar8._0_4_ = fVar5;
    auVar8._8_4_ = fVar5;
    auVar8._12_4_ = fVar5;
    auVar9._4_12_ = auVar8._4_12_;
    auVar9._0_4_ = fVar5 + fVar13 * fVar13;
    auVar10._4_4_ = fVar6;
    auVar10._0_4_ = fVar6 + auVar9._0_4_;
    auVar10._8_4_ = fVar6;
    auVar10._12_4_ = fVar6;
    auVar10 = rsqrtss(auVar9,auVar10);
    fVar5 = auVar10._0_4_;
    fVar5 = fVar5 * 0.5 * (3.0 - (fVar6 + auVar9._0_4_) * fVar5 * fVar5);
    fVar13 = fVar5 * fVar13;
    fVar14 = fVar5 * fVar14;
    fVar15 = fVar5 * fVar15;
    fVar5 = fVar5 * (param_2[3] - param_1[3]);
    local_420 = 0.0;
    fStack_41c = 0.0;
    fStack_418 = 1.0;
    fStack_414 = 0.0;
    if (ABS(fVar15 * 1.0 + fVar14 * 0.0 + fVar13 * 0.0) < 0.99999) {
      local_3a0 = fVar15 * 0.0 - fVar14 * 1.0;
      fStack_39c = fVar13 * 1.0 - fVar15 * 0.0;
      fStack_398 = fVar14 * 0.0 - fVar13 * 0.0;
      fVar6 = fStack_39c * fStack_39c;
      auVar11._8_4_ = fStack_398 * fStack_398;
      auVar16._4_4_ = fVar6;
      auVar16._0_4_ = fVar6;
      auVar16._8_4_ = fVar6;
      auVar16._12_4_ = fVar6;
      auVar17._4_12_ = auVar16._4_12_;
      auVar17._0_4_ = fVar6 + local_3a0 * local_3a0;
      auVar11._4_4_ = auVar11._8_4_;
      auVar11._0_4_ = auVar11._8_4_;
      auVar11._12_4_ = auVar11._8_4_;
      auVar12._4_12_ = auVar11._4_12_;
      auVar12._0_4_ = auVar11._8_4_ + auVar17._0_4_;
      auVar10 = rsqrtss(auVar17,auVar12);
      local_400 = auVar10._0_4_;
      _auStack_3fc = auVar12._4_12_;
      fStack_394 = (float)local_400 * 0.5 *
                   (3.0 - auVar12._0_4_ * (float)local_400 * (float)local_400);
      local_3a0 = fStack_394 * local_3a0;
      fStack_39c = fStack_394 * fStack_39c;
      fStack_398 = fStack_394 * fStack_398;
      fStack_394 = fStack_394 * (fVar5 * 0.0 - fVar5 * 0.0);
      fVar4 = (float10)FUN_008a2af0(fVar15 * 1.0 + fVar14 * 0.0 + fVar13 * 0.0);
      FUN_008b1b00(&local_3a0,(float)fVar4);
      FUN_008b1dd0(local_400);
      goto LAB_008b49f7;
    }
  }
  fStack_3dc = 0.0;
  fStack_3d8 = 0.0;
  fStack_3d4 = 0.0;
  local_3d0 = 0.0;
  fStack_3c8 = 0.0;
  fStack_3c4 = 0.0;
  local_3c0 = 0.0;
  fStack_3bc = 0.0;
  fStack_3b4 = 0.0;
  local_3e0 = 1.0;
  fStack_3cc = 1.0;
  fStack_3b8 = 1.0;
LAB_008b49f7:
  fStack_348 = param_3 * param_3;
  local_1d0 = local_1c0;
  local_3e4 = fStack_348 * param_3 * 4.1887903;
  local_3a0 = 0.5;
  fStack_39c = 0.0;
  fStack_398 = 0.0;
  fStack_394 = 0.0;
  local_3b0 = (*param_1 + *param_2) * 0.5;
  fStack_3ac = (param_1[1] + param_2[1]) * 0.5;
  fStack_3a8 = (param_1[2] + param_2[2]) * 0.5;
  fStack_3a4 = (param_1[3] + param_2[3]) * 0.5;
  local_1cc = 0;
  local_1c8 = 0x80000003;
  _local_400 = ZEXT816(0);
  puVar1 = local_180;
  iVar3 = 3;
  local_390 = fVar7 * param_3 * param_3 * 3.1415927;
  fVar5 = 1.0 / (local_390 + local_3e4);
  fVar6 = local_3e4 * fVar5 * param_4;
  local_404 = fVar5 * local_390 * param_4;
  do {
    puVar1[-0x10] = 0;
    puVar1[-0xf] = 0;
    puVar1[-0xc] = 0;
    puVar1[-0xb] = 0;
    puVar1[-10] = 0;
    puVar1[-9] = 0;
    puVar1[-8] = 0;
    puVar1[-7] = 0;
    puVar1[-6] = 0;
    puVar1[-5] = 0;
    puVar1[-4] = 0;
    puVar1[-3] = 0;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[4] = 0x3f800000;
    puVar1[9] = 0x3f800000;
    puVar1[0xe] = 0x3f800000;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1 = puVar1 + 0x24;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00539b00();
  local_340 = local_3e0;
  fStack_33c = fStack_3dc;
  fStack_338 = fStack_3d8;
  fStack_334 = fStack_3d4;
  local_330 = local_3d0;
  fStack_32c = fStack_3cc;
  fStack_328 = fStack_3c8;
  fStack_324 = fStack_3c4;
  local_320 = local_3c0;
  fStack_31c = fStack_3bc;
  fStack_318 = fStack_3b8;
  fStack_314 = fStack_3b4;
  local_310 = local_3b0;
  fStack_30c = fStack_3ac;
  fStack_308 = fStack_3a8;
  fStack_304 = fStack_3a4;
  local_370 = fStack_348 * 0.25 + fVar7 * fVar7 * 0.25 * 0.33333334;
  fStack_36c = (float)auStack_3fc._0_4_;
  fStack_368 = (float)auStack_3fc._4_4_;
  fStack_364 = fStack_3f4;
  local_360 = (float)local_400;
  fStack_358 = (float)auStack_3fc._4_4_;
  fStack_354 = fStack_3f4;
  local_350 = (float)local_400;
  fStack_34c = (float)auStack_3fc._0_4_;
  fStack_344 = fStack_3f4;
  fStack_348 = fStack_348 * 0.5;
  local_380 = 0.0;
  fStack_37c = 0.0;
  fStack_378 = 0.0;
  fStack_374 = 0.0;
  local_420 = local_404;
  fStack_41c = 0.0;
  fStack_418 = 0.0;
  fStack_414 = 0.0;
  fStack_35c = local_370;
  FUN_008d2a60(&local_420);
  local_38c = local_404;
  local_380 = (float)local_400;
  fStack_37c = (float)auStack_3fc._0_4_;
  fStack_378 = (float)auStack_3fc._4_4_;
  fStack_374 = fStack_3f4;
  if (local_1cc == (local_1c8 & 0x3fffffff)) {
    FUN_008a6ee0(&local_1d0,0x90);
  }
  pfVar2 = (float *)(local_1d0 + local_1cc * 0x90);
  local_1cc = local_1cc + 1;
  *pfVar2 = local_390;
  pfVar2[1] = local_38c;
  pfVar2[4] = local_380;
  pfVar2[5] = fStack_37c;
  pfVar2[6] = fStack_378;
  pfVar2[7] = fStack_374;
  pfVar2[8] = local_370;
  pfVar2[9] = fStack_36c;
  pfVar2[10] = fStack_368;
  pfVar2[0xb] = fStack_364;
  pfVar2[0xc] = local_360;
  pfVar2[0xd] = fStack_35c;
  pfVar2[0xe] = fStack_358;
  pfVar2[0xf] = fStack_354;
  pfVar2[0x10] = local_350;
  pfVar2[0x11] = fStack_34c;
  pfVar2[0x12] = fStack_348;
  pfVar2[0x13] = fStack_344;
  pfVar2[0x14] = local_340;
  pfVar2[0x15] = fStack_33c;
  pfVar2[0x16] = fStack_338;
  pfVar2[0x17] = fStack_334;
  pfVar2[0x18] = local_330;
  pfVar2[0x19] = fStack_32c;
  pfVar2[0x1a] = fStack_328;
  pfVar2[0x1b] = fStack_324;
  pfVar2[0x1c] = local_320;
  pfVar2[0x1d] = fStack_31c;
  pfVar2[0x1e] = fStack_318;
  pfVar2[0x1f] = fStack_314;
  pfVar2[0x20] = local_310;
  pfVar2[0x21] = fStack_30c;
  pfVar2[0x22] = fStack_308;
  pfVar2[0x23] = fStack_304;
  FUN_00539b00();
  fStack_418 = fVar7 * 0.5;
  local_2a0 = local_3e0;
  fStack_29c = fStack_3dc;
  fStack_298 = fStack_3d8;
  fStack_294 = fStack_3d4;
  local_290 = local_3d0;
  fStack_28c = fStack_3cc;
  fStack_288 = fStack_3c8;
  fStack_284 = fStack_3c4;
  local_280 = local_3c0;
  fStack_27c = fStack_3bc;
  fStack_278 = fStack_3b8;
  fStack_274 = fStack_3b4;
  local_270 = local_3b0;
  fStack_26c = fStack_3ac;
  fStack_268 = fStack_3a8;
  fStack_264 = fStack_3a4;
  local_420 = 0.0;
  fStack_41c = 0.0;
  fStack_414 = 0.0;
  local_404 = fStack_418;
  FUN_0088fe00(&local_3e0,&local_420);
  fStack_2d8 = param_3 * 0.375;
  local_420 = local_420 + local_270;
  fStack_41c = fStack_41c + fStack_26c;
  fStack_418 = fStack_418 + fStack_268;
  fStack_414 = fStack_414 + fStack_264;
  local_2e0 = 0.0;
  fStack_2dc = 0.0;
  fStack_2d4 = 0.0;
  local_370 = (float)local_400;
  fStack_36c = (float)auStack_3fc._0_4_;
  fStack_368 = (float)auStack_3fc._4_4_;
  fStack_364 = fStack_3f4;
  local_360 = (float)local_400;
  fStack_35c = (float)auStack_3fc._0_4_;
  fStack_358 = (float)auStack_3fc._4_4_;
  fStack_354 = fStack_3f4;
  local_350 = (float)local_400;
  fStack_34c = (float)auStack_3fc._0_4_;
  fStack_348 = (float)auStack_3fc._4_4_;
  fStack_344 = fStack_3f4;
  local_270 = local_420;
  fStack_26c = fStack_41c;
  fStack_268 = fStack_418;
  fStack_264 = fStack_414;
  FUN_008b3550(param_3,fVar6,&local_390);
  local_2d0 = local_370;
  fStack_2cc = fStack_36c;
  fStack_2c8 = fStack_368;
  fStack_2c4 = fStack_364;
  local_2c0 = local_360;
  fStack_2bc = fStack_35c;
  fStack_2b8 = fStack_358;
  fStack_2b4 = fStack_354;
  local_2b0 = local_350;
  fStack_2ac = fStack_34c;
  fStack_2a8 = fStack_348;
  fStack_2a4 = fStack_344;
  local_300 = local_3a0;
  uStack_2fc = fStack_39c;
  uStack_2f8 = fStack_398;
  uStack_2f4 = fStack_394;
  FUN_008d2a60(&local_300);
  fVar5 = fVar6 * 0.5;
  FUN_008b36d0(&local_2e0,fVar5,&local_2d0);
  fVar7 = local_3e4 * 0.5;
  local_2f0 = fVar7;
  local_2ec = fVar5;
  if (local_1cc == (local_1c8 & 0x3fffffff)) {
    FUN_008a6ee0(&local_1d0,0x90);
  }
  pfVar2 = (float *)(local_1d0 + local_1cc * 0x90);
  local_1cc = local_1cc + 1;
  *pfVar2 = local_2f0;
  pfVar2[1] = local_2ec;
  pfVar2[4] = local_2e0;
  pfVar2[5] = fStack_2dc;
  pfVar2[6] = fStack_2d8;
  pfVar2[7] = fStack_2d4;
  pfVar2[8] = local_2d0;
  pfVar2[9] = fStack_2cc;
  pfVar2[10] = fStack_2c8;
  pfVar2[0xb] = fStack_2c4;
  pfVar2[0xc] = local_2c0;
  pfVar2[0xd] = fStack_2bc;
  pfVar2[0xe] = fStack_2b8;
  pfVar2[0xf] = fStack_2b4;
  pfVar2[0x10] = local_2b0;
  pfVar2[0x11] = fStack_2ac;
  pfVar2[0x12] = fStack_2a8;
  pfVar2[0x13] = fStack_2a4;
  pfVar2[0x14] = local_2a0;
  pfVar2[0x15] = fStack_29c;
  pfVar2[0x16] = fStack_298;
  pfVar2[0x17] = fStack_294;
  pfVar2[0x18] = local_290;
  pfVar2[0x19] = fStack_28c;
  pfVar2[0x1a] = fStack_288;
  pfVar2[0x1b] = fStack_284;
  pfVar2[0x1c] = local_280;
  pfVar2[0x1d] = fStack_27c;
  pfVar2[0x1e] = fStack_278;
  pfVar2[0x1f] = fStack_274;
  pfVar2[0x20] = local_270;
  pfVar2[0x21] = fStack_26c;
  pfVar2[0x22] = fStack_268;
  pfVar2[0x23] = fStack_264;
  FUN_00539b00();
  fStack_418 = -local_404;
  local_210 = local_3e0;
  fStack_20c = fStack_3dc;
  fStack_208 = fStack_3d8;
  fStack_204 = fStack_3d4;
  local_200 = local_3d0;
  fStack_1fc = fStack_3cc;
  fStack_1f8 = fStack_3c8;
  fStack_1f4 = fStack_3c4;
  local_1f0 = local_3c0;
  fStack_1ec = fStack_3bc;
  fStack_1e8 = fStack_3b8;
  fStack_1e4 = fStack_3b4;
  local_1e0 = local_3b0;
  fStack_1dc = fStack_3ac;
  fStack_1d8 = fStack_3a8;
  fStack_1d4 = fStack_3a4;
  local_420 = 0.0;
  fStack_41c = 0.0;
  fStack_414 = 0.0;
  FUN_0088fe00(&local_3e0,&local_420);
  fStack_248 = param_3 * -0.375;
  local_420 = local_420 + local_1e0;
  fStack_41c = fStack_41c + fStack_1dc;
  fStack_418 = fStack_418 + fStack_1d8;
  fStack_414 = fStack_414 + fStack_1d4;
  local_250 = 0.0;
  fStack_24c = 0.0;
  fStack_244 = 0.0;
  local_370 = (float)local_400;
  fStack_36c = (float)auStack_3fc._0_4_;
  fStack_368 = (float)auStack_3fc._4_4_;
  fStack_364 = fStack_3f4;
  local_360 = (float)local_400;
  fStack_35c = (float)auStack_3fc._0_4_;
  fStack_358 = (float)auStack_3fc._4_4_;
  fStack_354 = fStack_3f4;
  local_350 = (float)local_400;
  fStack_34c = (float)auStack_3fc._0_4_;
  fStack_348 = (float)auStack_3fc._4_4_;
  fStack_344 = fStack_3f4;
  local_1e0 = local_420;
  fStack_1dc = fStack_41c;
  fStack_1d8 = fStack_418;
  fStack_1d4 = fStack_414;
  FUN_008b3550(param_3,fVar6,&local_390);
  local_240 = local_370;
  fStack_23c = fStack_36c;
  fStack_238 = fStack_368;
  fStack_234 = fStack_364;
  local_230 = local_360;
  fStack_22c = fStack_35c;
  fStack_228 = fStack_358;
  fStack_224 = fStack_354;
  local_220 = local_350;
  fStack_21c = fStack_34c;
  fStack_218 = fStack_348;
  fStack_214 = fStack_344;
  local_300 = local_3a0;
  uStack_2fc = fStack_39c;
  uStack_2f8 = fStack_398;
  uStack_2f4 = fStack_394;
  FUN_008d2a60(&local_300);
  FUN_008b36d0(&local_250,fVar5,&local_240);
  local_260 = fVar7;
  local_25c = fVar5;
  if (local_1cc == (local_1c8 & 0x3fffffff)) {
    FUN_008a6ee0(&local_1d0,0x90);
  }
  pfVar2 = (float *)(local_1d0 + local_1cc * 0x90);
  local_1cc = local_1cc + 1;
  *pfVar2 = local_260;
  pfVar2[1] = local_25c;
  pfVar2[4] = local_250;
  pfVar2[5] = fStack_24c;
  pfVar2[6] = fStack_248;
  pfVar2[7] = fStack_244;
  pfVar2[8] = local_240;
  pfVar2[9] = fStack_23c;
  pfVar2[10] = fStack_238;
  pfVar2[0xb] = fStack_234;
  pfVar2[0xc] = local_230;
  pfVar2[0xd] = fStack_22c;
  pfVar2[0xe] = fStack_228;
  pfVar2[0xf] = fStack_224;
  pfVar2[0x10] = local_220;
  pfVar2[0x11] = fStack_21c;
  pfVar2[0x12] = fStack_218;
  pfVar2[0x13] = fStack_214;
  pfVar2[0x14] = local_210;
  pfVar2[0x15] = fStack_20c;
  pfVar2[0x16] = fStack_208;
  pfVar2[0x17] = fStack_204;
  pfVar2[0x18] = local_200;
  pfVar2[0x19] = fStack_1fc;
  pfVar2[0x1a] = fStack_1f8;
  pfVar2[0x1b] = fStack_1f4;
  pfVar2[0x1c] = local_1f0;
  pfVar2[0x1d] = fStack_1ec;
  pfVar2[0x1e] = fStack_1e8;
  pfVar2[0x1f] = fStack_1e4;
  pfVar2[0x20] = local_1e0;
  pfVar2[0x21] = fStack_1dc;
  pfVar2[0x22] = fStack_1d8;
  pfVar2[0x23] = fStack_1d4;
  FUN_008b3e60(&local_1d0,param_5);
  if (-1 < (int)local_1c8) {
    FUN_008a75d0(local_1d0,(local_1c8 & 0x3fffffff) * 0x90,0x14);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_008b51c0(float *param_1,float *param_2,float param_3,float param_4,undefined4 param_5)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 local_130;
  undefined8 uStack_128;
  float local_114;
  float local_110 [8];
  float *local_f0;
  undefined4 local_ec;
  uint local_e8;
  float local_e0;
  float local_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if ((param_4 < 0.0 == (param_4 == 0.0)) && (param_3 < 0.0 == (param_3 == 0.0))) {
    fVar12 = *param_2 - *param_1;
    fVar14 = param_2[1] - param_1[1];
    fVar16 = param_2[2] - param_1[2];
    fVar4 = fVar14 * fVar14;
    fVar5 = fVar16 * fVar16;
    auVar1._4_8_ = uStack_128;
    auVar1._0_4_ = fVar5;
    local_130 = auVar1._0_8_ << 0x20;
    uStack_128._0_4_ = fVar5;
    uStack_128._4_4_ = fVar5;
    fVar6 = SQRT(fVar5 + fVar4 + fVar12 * fVar12);
    if (0.0 < fVar6) {
      auVar7._4_4_ = fVar4;
      auVar7._0_4_ = fVar4;
      auVar7._8_4_ = fVar4;
      auVar7._12_4_ = fVar4;
      auVar8._4_12_ = auVar7._4_12_;
      auVar8._0_4_ = fVar4 + fVar12 * fVar12;
      auVar2._4_8_ = uStack_128;
      auVar2._0_4_ = fVar5;
      local_130 = auVar2._0_8_ << 0x20;
      auVar9._4_4_ = fVar5;
      auVar9._0_4_ = fVar5 + auVar8._0_4_;
      auVar9._8_4_ = fVar5;
      auVar9._12_4_ = fVar5;
      auVar9 = rsqrtss(auVar8,auVar9);
      fVar4 = auVar9._0_4_;
      local_130._0_4_ = fVar4;
      fStack_54 = 0.5;
      fVar4 = fVar4 * 0.5 * (3.0 - (fVar5 + auVar8._0_4_) * fVar4 * fVar4);
      fVar12 = fVar4 * fVar12;
      fVar14 = fVar4 * fVar14;
      fVar16 = fVar4 * fVar16;
      fVar4 = fVar4 * (param_2[3] - param_1[3]);
      local_110[0] = 0.5;
      local_110[1] = 0.0;
      local_110[2] = 0.0;
      local_110[3] = 0.0;
      if (0.99999 <= ABS(fVar16 * fRam00b2f0b8 + fVar14 * fRam00b2f0b4 + fVar12 * _DAT_00b2f0b0)) {
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        local_40 = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        local_30 = 0;
        uStack_2c = 0;
        uStack_24 = 0;
        local_50 = 0x3f800000;
        uStack_3c = 0x3f800000;
        uStack_28 = 0x3f800000;
      }
      else {
        fVar13 = fRam00b2f0b4 * fVar16 - fRam00b2f0b8 * fVar14;
        fVar15 = fRam00b2f0b8 * fVar12 - _DAT_00b2f0b0 * fVar16;
        fVar17 = _DAT_00b2f0b0 * fVar14 - fRam00b2f0b4 * fVar12;
        fVar5 = fVar15 * fVar15;
        auVar10._8_4_ = fVar17 * fVar17;
        auVar18._4_4_ = fVar5;
        auVar18._0_4_ = fVar5;
        auVar18._8_4_ = fVar5;
        auVar18._12_4_ = fVar5;
        auVar19._4_12_ = auVar18._4_12_;
        auVar19._0_4_ = fVar5 + fVar13 * fVar13;
        auVar10._4_4_ = auVar10._8_4_;
        auVar10._0_4_ = auVar10._8_4_;
        auVar10._12_4_ = auVar10._8_4_;
        auVar11._4_12_ = auVar10._4_12_;
        auVar11._0_4_ = auVar10._8_4_ + auVar19._0_4_;
        auVar9 = rsqrtss(auVar19,auVar11);
        fVar5 = auVar9._0_4_;
        fVar5 = fVar5 * 0.5 * (3.0 - auVar11._0_4_ * fVar5 * fVar5);
        local_130._4_4_ = fVar5 * fVar15;
        local_130._0_4_ = fVar5 * fVar13;
        uStack_128._0_4_ = fVar5 * fVar17;
        uStack_128._4_4_ = fVar5 * (fRam00b2f0bc * fVar4 - fRam00b2f0bc * fVar4);
        fVar3 = (float10)FUN_008a2af0(fVar16 * fRam00b2f0b8 +
                                      fVar14 * fRam00b2f0b4 + fVar12 * _DAT_00b2f0b0);
        FUN_008b1b00(&local_130,(float)fVar3);
        FUN_008b1dd0(local_110 + 4);
        fStack_54 = local_110[0];
      }
      local_114 = fVar6 * param_3 * param_3 * 3.1415927;
      local_60 = fStack_54 * (*param_1 + *param_2);
      fStack_5c = fStack_54 * (param_1[1] + param_2[1]);
      fStack_58 = fStack_54 * (param_1[2] + param_2[2]);
      fStack_54 = fStack_54 * (param_1[3] + param_2[3]);
      uStack_bc = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      local_90 = local_50;
      uStack_8c = uStack_4c;
      uStack_88 = uStack_48;
      uStack_84 = uStack_44;
      local_a0 = 0;
      uStack_9c = 0;
      uStack_94 = 0;
      local_f0 = &local_e0;
      local_110[4] = 0.0;
      local_110[5] = 0.0;
      local_110[6] = 0.0;
      local_110[7] = 0.0;
      local_80 = local_40;
      uStack_7c = uStack_3c;
      uStack_78 = uStack_38;
      uStack_74 = uStack_34;
      local_c0 = param_3 * param_3 * 0.25 + fVar6 * fVar6 * 0.25 * 0.33333334;
      local_e8 = 0x80000001;
      local_e0 = 0.0;
      local_dc = 0.0;
      local_ec = 1;
      fStack_98 = param_3 * param_3 * 0.5;
      local_70 = local_30;
      uStack_6c = uStack_2c;
      uStack_68 = uStack_28;
      uStack_64 = uStack_24;
      local_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      local_110[0] = param_4;
      local_110[1] = 0.0;
      local_110[2] = 0.0;
      local_110[3] = 0.0;
      fStack_ac = local_c0;
      local_20 = local_60;
      fStack_1c = fStack_5c;
      fStack_18 = fStack_58;
      fStack_14 = fStack_54;
      FUN_008d2a60(local_110);
      local_e0 = local_114;
      local_d0 = local_110[4];
      uStack_cc = local_110[5];
      uStack_c8 = local_110[6];
      uStack_c4 = local_110[7];
      local_dc = param_4;
      FUN_008b3e60(&local_f0,param_5);
      if (-1 < (int)local_e8) {
        FUN_008a75d0(local_f0,(local_e8 & 0x3fffffff) * 0x90,0x14);
      }
      return 0;
    }
  }
  return 1;
}



undefined4
FUN_008b55d0(float *param_1,float *param_2,float *param_3,float param_4,float param_5,float *param_6
            )

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int unaff_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float *local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  int local_120;
  uint local_11c;
  undefined4 local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float *local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float *local_80;
  uint local_7c;
  int local_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if ((param_4 < 0.0 == (param_4 == 0.0)) && (0.0 <= param_5)) {
    local_40 = *param_2;
    fStack_3c = param_2[1];
    fStack_38 = param_2[2];
    fStack_34 = param_2[3];
    local_20 = *param_3;
    fStack_1c = param_3[1];
    fStack_18 = param_3[2];
    fStack_14 = param_3[3];
    local_60 = *param_1;
    fStack_5c = param_1[1];
    fStack_58 = param_1[2];
    fStack_54 = param_1[3];
    fVar12 = (fStack_1c - fStack_3c) * (fStack_58 - fStack_38) -
             (fStack_18 - fStack_38) * (fStack_5c - fStack_3c);
    fVar13 = (fStack_18 - fStack_38) * (local_60 - local_40) -
             (local_20 - local_40) * (fStack_58 - fStack_38);
    fVar14 = (local_20 - local_40) * (fStack_5c - fStack_3c) -
             (fStack_1c - fStack_3c) * (local_60 - local_40);
    fVar10 = fVar13 * fVar13;
    fVar11 = fVar14 * fVar14;
    local_104 = SQRT(fVar11 + fVar10 + fVar12 * fVar12);
    if (1e-05 <= param_5) {
      if (1e-05 <= local_104) {
        fVar4 = param_5 * 0.5;
        auVar16._4_4_ = fVar10;
        auVar16._0_4_ = fVar10;
        auVar16._8_4_ = fVar10;
        auVar16._12_4_ = fVar10;
        auVar17._4_12_ = auVar16._4_12_;
        auVar17._0_4_ = fVar10 + fVar12 * fVar12;
        auVar18._4_4_ = fVar11;
        auVar18._0_4_ = fVar11 + auVar17._0_4_;
        auVar18._8_4_ = fVar11;
        auVar18._12_4_ = fVar11;
        auVar18 = rsqrtss(auVar17,auVar18);
        fVar15 = auVar18._0_4_;
        fVar10 = param_5 * -0.5;
        fVar11 = fVar15 * 0.5 * (3.0 - (fVar11 + auVar17._0_4_) * fVar15 * fVar15);
        fVar12 = fVar11 * fVar12;
        fVar13 = fVar11 * fVar13;
        fVar14 = fVar11 * fVar14;
        fVar11 = fVar11 * ((fStack_14 - fStack_34) * (fStack_54 - fStack_34) -
                          (fStack_14 - fStack_34) * (fStack_54 - fStack_34));
        local_70 = local_60 + fVar4 * fVar12;
        fStack_6c = fStack_5c + fVar4 * fVar13;
        fStack_68 = fStack_58 + fVar4 * fVar14;
        fStack_64 = fStack_54 + fVar4 * fVar11;
        local_60 = local_60 + fVar10 * fVar12;
        fStack_5c = fStack_5c + fVar10 * fVar13;
        fStack_58 = fStack_58 + fVar10 * fVar14;
        fStack_54 = fStack_54 + fVar10 * fVar11;
        local_50 = local_40 + fVar4 * fVar12;
        fStack_4c = fStack_3c + fVar4 * fVar13;
        fStack_48 = fStack_38 + fVar4 * fVar14;
        fStack_44 = fStack_34 + fVar4 * fVar11;
        local_40 = local_40 + fVar10 * fVar12;
        fStack_3c = fStack_3c + fVar10 * fVar13;
        fStack_38 = fStack_38 + fVar10 * fVar14;
        fStack_34 = fStack_34 + fVar10 * fVar11;
        local_30 = local_20 + fVar4 * fVar12;
        fStack_2c = fStack_1c + fVar4 * fVar13;
        fStack_28 = fStack_18 + fVar4 * fVar14;
        fStack_24 = fStack_14 + fVar4 * fVar11;
        local_80 = &local_70;
        local_20 = local_20 + fVar10 * fVar12;
        fStack_1c = fStack_1c + fVar10 * fVar13;
        fStack_18 = fStack_18 + fVar10 * fVar14;
        fStack_14 = fStack_14 + fVar10 * fVar11;
        local_78 = -0x7ffffffa;
        local_7c = 6;
        local_d0 = 0;
        local_cc = 0;
        local_c0 = (float *)0x0;
        fStack_bc = 0.0;
        fStack_b8 = 0.0;
        fStack_b4 = 0.0;
        local_b0 = 0.0;
        fStack_ac = 0.0;
        fStack_a8 = 0.0;
        fStack_a4 = 0.0;
        local_a0 = 0.0;
        fStack_9c = 0.0;
        fStack_98 = 0.0;
        fStack_94 = 0.0;
        local_90 = 0.0;
        fStack_8c = 0.0;
        fStack_88 = 0.0;
        fStack_84 = 0.0;
        local_130 = (float *)0x0;
        fStack_12c = 0.0;
        fStack_128 = -0.0;
        local_11c = 0x80000000;
        local_108 = *(undefined4 *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        fStack_124 = 0.0;
        local_120 = 0;
        local_130 = (float *)FUN_008a7560(0x60,0x14);
        iVar2 = local_120;
        fStack_128 = (float)((uint)fStack_128 & 0x40000000 | local_7c);
        fStack_12c = (float)local_7c;
        pfVar5 = local_80;
        pfVar8 = local_130;
        uVar9 = local_7c;
        if (0 < (int)local_7c) {
          do {
            fVar12 = pfVar5[1];
            fVar10 = pfVar5[2];
            fVar13 = pfVar5[3];
            *pfVar8 = *pfVar5;
            pfVar8[1] = fVar12;
            pfVar8[2] = fVar10;
            pfVar8[3] = fVar13;
            uVar9 = uVar9 - 1;
            pfVar5 = pfVar5 + 4;
            pfVar8 = pfVar8 + 4;
          } while (uVar9 != 0);
        }
        iVar1 = local_120 + 1;
        if ((int)(local_11c & 0x3fffffff) < iVar1) {
          iVar7 = (local_11c & 0x3fffffff) * 2;
          if (iVar7 <= iVar1) {
            iVar7 = iVar1;
          }
          FUN_008a6e40(&fStack_124,iVar7,0xc);
        }
        puVar3 = (undefined4 *)((int)fStack_124 + iVar2 * 0xc);
        *puVar3 = 0;
        puVar3[1] = 2;
        puVar3[2] = 4;
        iVar7 = iVar2 + 2;
        if ((int)(local_11c & 0x3fffffff) < iVar7) {
          iVar6 = (local_11c & 0x3fffffff) * 2;
          if (iVar6 <= iVar7) {
            iVar6 = iVar7;
          }
          local_120 = iVar1;
          FUN_008a6e40(&fStack_124,iVar6,0xc);
        }
        puVar3 = (undefined4 *)((int)fStack_124 + iVar1 * 0xc);
        *puVar3 = 1;
        puVar3[1] = 5;
        puVar3[2] = 3;
        iVar1 = iVar2 + 3;
        if ((int)(local_11c & 0x3fffffff) < iVar1) {
          iVar6 = (local_11c & 0x3fffffff) * 2;
          if (iVar6 <= iVar1) {
            iVar6 = iVar1;
          }
          local_120 = iVar7;
          FUN_008a6e40(&fStack_124,iVar6,0xc);
        }
        puVar3 = (undefined4 *)((int)fStack_124 + iVar7 * 0xc);
        *puVar3 = 0;
        puVar3[1] = 3;
        puVar3[2] = 2;
        iVar7 = iVar2 + 4;
        if ((int)(local_11c & 0x3fffffff) < iVar7) {
          iVar6 = (local_11c & 0x3fffffff) * 2;
          if (iVar6 <= iVar7) {
            iVar6 = iVar7;
          }
          local_120 = iVar1;
          FUN_008a6e40(&fStack_124,iVar6,0xc);
        }
        puVar3 = (undefined4 *)((int)fStack_124 + iVar1 * 0xc);
        *puVar3 = 0;
        puVar3[1] = 1;
        puVar3[2] = 3;
        iVar1 = iVar2 + 5;
        if ((int)(local_11c & 0x3fffffff) < iVar1) {
          iVar6 = (local_11c & 0x3fffffff) * 2;
          if (iVar6 <= iVar1) {
            iVar6 = iVar1;
          }
          local_120 = iVar7;
          FUN_008a6e40(&fStack_124,iVar6,0xc);
        }
        puVar3 = (undefined4 *)((int)fStack_124 + iVar7 * 0xc);
        *puVar3 = 1;
        puVar3[1] = 0;
        puVar3[2] = 4;
        iVar7 = iVar2 + 6;
        if ((int)(local_11c & 0x3fffffff) < iVar7) {
          iVar6 = (local_11c & 0x3fffffff) * 2;
          if (iVar6 <= iVar7) {
            iVar6 = iVar7;
          }
          local_120 = iVar1;
          FUN_008a6e40(&fStack_124,iVar6,0xc);
        }
        puVar3 = (undefined4 *)((int)fStack_124 + iVar1 * 0xc);
        *puVar3 = 1;
        puVar3[1] = 4;
        puVar3[2] = 5;
        iVar1 = iVar2 + 7;
        if ((int)(local_11c & 0x3fffffff) < iVar1) {
          iVar6 = (local_11c & 0x3fffffff) * 2;
          if (iVar6 <= iVar1) {
            iVar6 = iVar1;
          }
          local_120 = iVar7;
          FUN_008a6e40(&fStack_124,iVar6,0xc);
        }
        puVar3 = (undefined4 *)((int)fStack_124 + iVar7 * 0xc);
        *puVar3 = 2;
        puVar3[1] = 5;
        puVar3[2] = 4;
        iVar2 = iVar2 + 8;
        if ((int)(local_11c & 0x3fffffff) < iVar2) {
          iVar7 = (local_11c & 0x3fffffff) * 2;
          if (iVar7 <= iVar2) {
            iVar7 = iVar2;
          }
          local_120 = iVar1;
          FUN_008a6e40(&fStack_124,iVar7,0xc);
        }
        puVar3 = (undefined4 *)((int)fStack_124 + iVar1 * 0xc);
        *puVar3 = 2;
        puVar3[1] = 3;
        puVar3[2] = 5;
        local_120 = iVar2;
        FUN_008b43e0(&local_130,param_4,&local_d0);
        FUN_008b44c0();
        local_130 = local_c0;
        fStack_12c = fStack_bc;
        fStack_128 = fStack_b8;
        fStack_124 = fStack_b4;
        local_100 = local_b0;
        fStack_fc = fStack_ac;
        fStack_f8 = fStack_a8;
        fStack_f4 = fStack_a4;
        local_f0 = local_a0;
        fStack_ec = fStack_9c;
        fStack_e8 = fStack_98;
        fStack_e4 = fStack_94;
        local_e0 = local_90;
        fStack_dc = fStack_8c;
        fStack_d8 = fStack_88;
        fStack_d4 = fStack_84;
        if (-1 < local_78) {
          FUN_008a75d0(local_80,local_78 << 4,0x14);
        }
      }
      else {
        local_130 = (float *)((local_60 + local_40 + local_20) * 0.33333334);
        fStack_12c = (fStack_5c + fStack_3c + fStack_1c) * 0.33333334;
        fStack_128 = (fStack_58 + fStack_38 + fStack_18) * 0.33333334;
        fStack_124 = (fStack_54 + fStack_34 + fStack_14) * 0.33333334;
        local_100 = (fStack_128 * fStack_128 + fStack_12c * fStack_12c) * param_4;
        fStack_ec = (fStack_128 * fStack_128 + (float)local_130 * (float)local_130) * param_4;
        fStack_d8 = (fStack_12c * fStack_12c + (float)local_130 * (float)local_130) * param_4;
        fStack_fc = -(fStack_12c * (float)local_130 * param_4);
        fStack_f8 = -(fStack_128 * (float)local_130 * param_4);
        fStack_e8 = -(fStack_128 * fStack_12c * param_4);
        local_f0 = fStack_fc;
        local_e0 = fStack_f8;
        fStack_dc = fStack_e8;
      }
    }
    else {
      local_108 = 0x3eaaaaab;
      local_130 = (float *)((local_60 + local_40 + local_20) * 0.33333334);
      fStack_12c = (fStack_5c + fStack_3c + fStack_1c) * 0.33333334;
      fStack_128 = (fStack_58 + fStack_38 + fStack_18) * 0.33333334;
      fStack_124 = (fStack_54 + fStack_34 + fStack_14) * 0.33333334;
      fVar12 = (*param_2 * *param_2 +
               *param_3 * *param_3 + *param_1 * *param_1 + (float)local_130 * (float)local_130 * 9.0
               ) * param_4 * 0.083333336;
      fStack_d8 = (param_1[1] * param_1[1] +
                  param_2[1] * param_2[1] + param_3[1] * param_3[1] + fStack_12c * fStack_12c * 9.0)
                  * param_4 * 0.083333336;
      fStack_ec = (param_1[2] * param_1[2] +
                  param_2[2] * param_2[2] + param_3[2] * param_3[2] + fStack_128 * fStack_128 * 9.0)
                  * param_4 * 0.083333336;
      local_100 = fStack_ec + fStack_d8;
      fStack_ec = fStack_ec + fVar12;
      fStack_d8 = fStack_d8 + fVar12;
      fStack_fc = -((*param_2 * param_2[1] +
                    *param_1 * param_1[1] +
                    param_3[1] * *param_3 + fStack_12c * (float)local_130 * 9.0) * param_4 *
                   0.083333336);
      fStack_f8 = -((*param_2 * param_2[2] +
                    *param_1 * param_1[2] +
                    param_3[2] * *param_3 + fStack_128 * (float)local_130 * 9.0) * param_4 *
                   0.083333336);
      fStack_e8 = -((param_3[2] * param_3[1] +
                    param_2[2] * param_2[1] +
                    param_1[2] * param_1[1] + fStack_128 * fStack_12c * 9.0) * param_4 * 0.083333336
                   );
      local_f0 = fStack_fc;
      local_e0 = fStack_f8;
      fStack_dc = fStack_e8;
      FUN_008b36d0(&local_130,param_4,&local_100);
    }
    param_6[1] = param_4;
    param_6[8] = local_100;
    param_6[9] = fStack_fc;
    param_6[10] = fStack_f8;
    param_6[0xb] = fStack_f4;
    param_6[0xc] = local_f0;
    param_6[0xd] = fStack_ec;
    param_6[0xe] = fStack_e8;
    param_6[0xf] = fStack_e4;
    param_6[0x10] = local_e0;
    param_6[0x11] = fStack_dc;
    param_6[0x12] = fStack_d8;
    param_6[0x13] = fStack_d4;
    *param_6 = local_104 * param_5 * 0.5;
    param_6[4] = (float)local_130;
    param_6[5] = fStack_12c;
    param_6[6] = fStack_128;
    param_6[7] = fStack_124;
    return 0;
  }
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008b5e20(int *param_1,float *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int unaff_FS_OFFSET;
  float10 fVar9;
  int iStack_3b4;
  int iStack_3b0;
  uint uStack_3ac;
  uint uStack_3a8;
  int iStack_3a4;
  undefined **ppuStack_3a0;
  int iStack_39c;
  int iStack_398;
  int iStack_394;
  float local_390;
  float local_38c;
  float local_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float local_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  float local_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float local_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  int local_340;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  undefined1 auStack_260 [64];
  undefined1 auStack_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  local_390 = 0.0;
  local_38c = 0.0;
  local_340 = 0;
  iStack_33c = 0;
  iStack_338 = 0;
  iStack_334 = 0;
  local_380 = 0.0;
  fStack_37c = 0.0;
  fStack_378 = 0.0;
  fStack_374 = 0.0;
  local_370 = 0.0;
  fStack_36c = 0.0;
  fStack_368 = 0.0;
  fStack_364 = 0.0;
  local_360 = 0.0;
  fStack_35c = 0.0;
  fStack_358 = 0.0;
  fStack_354 = 0.0;
  local_350 = 0.0;
  fStack_34c = 0.0;
  fStack_348 = 0.0;
  fStack_344 = 0.0;
  uVar2 = (**(code **)(*param_1 + 8))();
  switch(uVar2) {
  case 2:
  case 3:
  case 0xc:
  case 0xd:
  case 0x10:
  case 0x18:
    iVar5 = (**(code **)(*param_1 + 8))();
    if ((iVar5 == 3) || (iVar5 = (**(code **)(*param_1 + 8))(), iVar5 == 0x18)) {
      param_1 = (int *)param_1[3];
    }
    iVar5 = (**(code **)(*param_1 + 0x20))();
    if (iVar5 == -1) {
      return;
    }
    do {
      iVar6 = (**(code **)(*param_1 + 0x28))(iVar5,auStack_220);
      if (iVar6 != 0) {
        FUN_008b5e20(iVar6,param_2,param_3);
      }
      iVar5 = (**(code **)(*param_1 + 0x24))(iVar5);
    } while (iVar5 != -1);
    return;
  case 4:
    FUN_008b3550(param_1[3],0x3f800000,&local_390);
    break;
  case 5:
    fVar9 = (float10)FUN_008f2260(0x3f800000,&local_390);
    FUN_008b51c0(param_1 + 8,param_1 + 0xc,(float)fVar9);
    break;
  case 6:
    local_340 = param_1[4];
    iStack_33c = param_1[5];
    iStack_338 = param_1[6];
    iStack_334 = param_1[7];
    iStack_3b0 = param_1[8];
    uStack_3ac = param_1[9];
    uStack_3a8 = param_1[10];
    iStack_3a4 = param_1[0xb];
    ppuStack_3a0 = (undefined **)param_1[0xc];
    iStack_39c = param_1[0xd];
    iStack_398 = param_1[0xe];
    iStack_394 = param_1[0xf];
    FUN_008b55d0(&local_340,&iStack_3b0,&ppuStack_3a0,0x3f800000,param_1[3],&local_390);
    break;
  case 7:
    ppuStack_3a0 = (undefined **)param_1[4];
    iStack_39c = param_1[5];
    iStack_398 = param_1[6];
    iStack_394 = param_1[7];
    FUN_008b35e0(&ppuStack_3a0,0x3f800000,&local_390);
    break;
  case 8:
    FUN_008b4790(param_1 + 4,param_1 + 8,param_1[3],0x3f800000,&local_390);
    break;
  case 9:
    (**(code **)(*param_1 + 0x1c))(&iStack_3b0);
    iVar5 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    piVar4 = *(int **)(iVar5 + 0x19c);
    if (piVar4 == (int *)0x0) {
      piVar4 = DAT_00ba7d9c;
    }
    iVar6 = piVar4[8];
    iVar3 = (iStack_3b4 + 1) * 0x10;
    uVar1 = iVar6 + iVar3;
    if ((uint)piVar4[0xb] < uVar1) {
      iVar6 = (**(code **)(*piVar4 + 0xc))(iVar3);
    }
    else {
      piVar4[8] = uVar1;
    }
    uVar2 = (**(code **)(*param_1 + 0x20))(iVar6);
    FUN_008b4540(uVar2,0x10,iStack_3b0,0x3f800000,&local_390);
    piVar4 = *(int **)(iVar5 + 0x19c);
    if (piVar4 == (int *)0x0) {
      piVar4 = DAT_00ba7d9c;
    }
    piVar4[8] = iVar6;
    if (iVar6 == piVar4[10]) {
      (**(code **)(*piVar4 + 0x10))(iVar6);
    }
    break;
  default:
    goto switchD_008b5e87_caseD_a;
  case 0xb:
    iStack_3b0 = 0;
    piVar4 = param_1;
    if (param_1[3] < 1) {
      return;
    }
    do {
      fStack_330 = *param_2;
      fStack_32c = param_2[1];
      fStack_328 = param_2[2];
      fStack_324 = param_2[3];
      fStack_320 = param_2[4];
      fStack_31c = param_2[5];
      fStack_318 = param_2[6];
      fStack_314 = param_2[7];
      fStack_310 = param_2[8];
      fStack_30c = param_2[9];
      fStack_308 = param_2[10];
      fStack_304 = param_2[0xb];
      fStack_300 = param_2[0xc];
      fStack_2fc = param_2[0xd];
      fStack_2f8 = param_2[0xe];
      fStack_2f4 = param_2[0xf];
      FUN_0088fcc0(&fStack_330,piVar4 + 4);
      FUN_008ed410(piVar4[7]);
      FUN_008b5e20(&ppuStack_3a0,&fStack_330,param_3);
      iStack_3b0 = iStack_3b0 + 1;
      ppuStack_3a0 = &PTR_LAB_00a45e5c;
      piVar4 = piVar4 + 4;
    } while (iStack_3b0 < param_1[3]);
    return;
  case 0xe:
    fStack_32c = (float)iStack_33c;
    fStack_328 = (float)iStack_338;
    fStack_324 = (float)iStack_334;
    fStack_320 = (float)local_340;
    fStack_318 = (float)iStack_338;
    fStack_314 = (float)iStack_334;
    fStack_310 = (float)local_340;
    fStack_30c = (float)iStack_33c;
    fStack_304 = (float)iStack_334;
    fStack_300 = (float)param_1[8];
    fStack_2fc = (float)param_1[9];
    fStack_2f8 = (float)param_1[10];
    fStack_2f4 = (float)param_1[0xb];
    fStack_330 = 1.0;
    fStack_31c = 1.0;
    fStack_308 = 1.0;
    FUN_008b1f70(param_2,&fStack_330);
    FUN_008b5e20(param_1[4],auStack_260,param_3);
    return;
  case 0xf:
    FUN_008b1f70(param_2,param_1 + 8);
    FUN_008b5e20(param_1[4],auStack_260,param_3);
    return;
  case 0x16:
    FUN_008b5e20(param_1[4],param_2,param_3);
    return;
  case 0x17:
    break;
  case 0x19:
    FUN_008b1f70(param_2,param_1 + 8);
    FUN_008b5e20(param_1[3],auStack_260,param_3);
    return;
  }
  if (local_390 != 0.0) {
    FUN_008b3810(local_390);
    iStack_3b0 = 0;
    uStack_3ac = 0;
    uStack_3a8 = 0x80000000;
    FUN_00539b00();
    FUN_008b3690(param_3);
    if (uStack_3ac == (uStack_3a8 & 0x3fffffff)) {
      FUN_008a6ee0(&iStack_3b0,0x90);
    }
    puVar7 = (undefined4 *)(uStack_3ac * 0x90 + iStack_3b0);
    uStack_3ac = uStack_3ac + 1;
    puVar7[4] = fStack_2e0;
    puVar7[5] = fStack_2dc;
    puVar7[6] = fStack_2d8;
    puVar7[7] = fStack_2d4;
    *puVar7 = fStack_2f0;
    puVar7[1] = fStack_2ec;
    puVar7[8] = fStack_2d0;
    puVar7[9] = fStack_2cc;
    puVar7[10] = fStack_2c8;
    puVar7[0xb] = fStack_2c4;
    puVar7[0xc] = fStack_2c0;
    puVar7[0xd] = fStack_2bc;
    puVar7[0xe] = fStack_2b8;
    puVar7[0xf] = fStack_2b4;
    puVar7[0x10] = fStack_2b0;
    puVar7[0x11] = fStack_2ac;
    puVar7[0x12] = fStack_2a8;
    puVar7[0x13] = fStack_2a4;
    puVar7[0x14] = fStack_2a0;
    puVar7[0x15] = fStack_29c;
    puVar7[0x16] = fStack_298;
    puVar7[0x17] = fStack_294;
    puVar7[0x18] = fStack_290;
    puVar7[0x19] = fStack_28c;
    puVar7[0x1a] = fStack_288;
    puVar7[0x1b] = fStack_284;
    puVar7[0x1c] = fStack_280;
    puVar7[0x1d] = fStack_27c;
    puVar7[0x1e] = fStack_278;
    puVar7[0x1f] = fStack_274;
    puVar7[0x20] = fStack_270;
    puVar7[0x21] = fStack_26c;
    puVar7[0x22] = fStack_268;
    puVar7[0x23] = fStack_264;
    FUN_00539b00();
    fStack_2e0 = local_380;
    fStack_2dc = fStack_37c;
    fStack_2d8 = fStack_378;
    fStack_2d4 = fStack_374;
    fStack_2d0 = local_370;
    fStack_2cc = fStack_36c;
    fStack_2c8 = fStack_368;
    fStack_2c4 = fStack_364;
    fStack_2c0 = local_360;
    fStack_2bc = fStack_35c;
    fStack_2b8 = fStack_358;
    fStack_2b4 = fStack_354;
    fStack_2b0 = local_350;
    fStack_2ac = fStack_34c;
    fStack_2a8 = fStack_348;
    fStack_2a4 = fStack_344;
    fStack_2f0 = local_390;
    fStack_2a0 = *param_2;
    fStack_29c = param_2[1];
    fStack_298 = param_2[2];
    fStack_294 = param_2[3];
    fStack_290 = param_2[4];
    fStack_28c = param_2[5];
    fStack_288 = param_2[6];
    fStack_284 = param_2[7];
    fStack_280 = param_2[8];
    fStack_27c = param_2[9];
    fStack_278 = param_2[10];
    fStack_274 = param_2[0xb];
    fStack_2ec = local_38c;
    fStack_270 = param_2[0xc];
    fStack_26c = param_2[0xd];
    fStack_268 = param_2[0xe];
    fStack_264 = param_2[0xf];
    if (uStack_3ac == (uStack_3a8 & 0x3fffffff)) {
      FUN_008a6ee0(&iStack_3b0,0x90);
    }
    pfVar8 = (float *)(uStack_3ac * 0x90 + iStack_3b0);
    uStack_3ac = uStack_3ac + 1;
    pfVar8[4] = fStack_2e0;
    pfVar8[5] = fStack_2dc;
    pfVar8[6] = fStack_2d8;
    pfVar8[7] = fStack_2d4;
    *pfVar8 = fStack_2f0;
    pfVar8[1] = fStack_2ec;
    pfVar8[8] = fStack_2d0;
    pfVar8[9] = fStack_2cc;
    pfVar8[10] = fStack_2c8;
    pfVar8[0xb] = fStack_2c4;
    pfVar8[0xc] = fStack_2c0;
    pfVar8[0xd] = fStack_2bc;
    pfVar8[0xe] = fStack_2b8;
    pfVar8[0xf] = fStack_2b4;
    pfVar8[0x10] = fStack_2b0;
    pfVar8[0x11] = fStack_2ac;
    pfVar8[0x12] = fStack_2a8;
    pfVar8[0x13] = fStack_2a4;
    pfVar8[0x14] = fStack_2a0;
    pfVar8[0x15] = fStack_29c;
    pfVar8[0x16] = fStack_298;
    pfVar8[0x17] = fStack_294;
    pfVar8[0x18] = fStack_290;
    pfVar8[0x19] = fStack_28c;
    pfVar8[0x1a] = fStack_288;
    pfVar8[0x1b] = fStack_284;
    pfVar8[0x1c] = fStack_280;
    pfVar8[0x1d] = fStack_27c;
    pfVar8[0x1e] = fStack_278;
    pfVar8[0x1f] = fStack_274;
    pfVar8[0x20] = fStack_270;
    pfVar8[0x21] = fStack_26c;
    pfVar8[0x22] = fStack_268;
    pfVar8[0x23] = fStack_264;
    FUN_008b3e60(&iStack_3b0,param_3);
    if (-1 < (int)uStack_3a8) {
      FUN_008a75d0(iStack_3b0,(uStack_3a8 & 0x3fffffff) * 0x90,0x14);
    }
  }
switchD_008b5e87_caseD_a:
  return;
}



void FUN_008b6550(undefined4 param_1,float param_2,float *param_3)

{
  float local_b0;
  float local_ac;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20 [7];
  
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 0;
  uStack_34 = 0;
  local_a0 = 0.0;
  fStack_9c = 0.0;
  fStack_98 = 0.0;
  fStack_94 = 0.0;
  local_90 = 0.0;
  fStack_8c = 0.0;
  fStack_88 = 0.0;
  fStack_84 = 0.0;
  local_80 = 0.0;
  fStack_7c = 0.0;
  fStack_78 = 0.0;
  fStack_74 = 0.0;
  local_70 = 0.0;
  fStack_6c = 0.0;
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  local_ac = 0.0;
  local_b0 = 0.0;
  local_60 = 0x3f800000;
  uStack_4c = 0x3f800000;
  uStack_38 = 0x3f800000;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_008b5e20(param_1,&local_60,&local_b0);
  if (local_b0 != 0.0) {
    local_20[0] = param_2 / local_b0;
    local_ac = local_ac * local_20[0];
    local_20[1] = 0.0;
    local_20[2] = 0.0;
    local_20[3] = 0.0;
    FUN_008d2a60(local_20);
    *param_3 = local_b0;
    param_3[4] = local_a0;
    param_3[5] = fStack_9c;
    param_3[6] = fStack_98;
    param_3[7] = fStack_94;
    param_3[1] = local_ac;
    param_3[8] = local_90;
    param_3[9] = fStack_8c;
    param_3[10] = fStack_88;
    param_3[0xb] = fStack_84;
    param_3[0xc] = local_80;
    param_3[0xd] = fStack_7c;
    param_3[0xe] = fStack_78;
    param_3[0xf] = fStack_74;
    param_3[0x10] = local_70;
    param_3[0x11] = fStack_6c;
    param_3[0x12] = fStack_68;
    param_3[0x13] = fStack_64;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b6650(void)

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
  *in_ECX = &PTR_FUN_00a65794;
  _DAT_00ba7fd4 = _DAT_00ba7fd4 + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b66c0(void)

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
  *in_ECX = &PTR_FUN_00a65794;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7fd4 = _DAT_00ba7fd4 + -1;
  local_4 = 0xffffffff;
  FUN_008ae9f0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008b6730(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  FUN_008aea60(param_1);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    puVar1 = &DAT_00ba7a40;
  }
  else {
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x10);
  }
  FUN_0047dcd0(puVar1);
  if ((in_ECX == 0) ||
     (puVar1 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x20), *(int *)(in_ECX + 8) == 0)) {
    puVar1 = &DAT_00ba7a40;
  }
  FUN_0047dcd0(puVar1);
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
    uVar2 = FUN_008b6650();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008b67f0(undefined4 param_1)

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
    uVar3 = FUN_008b6650();
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



void FUN_008b6980(undefined4 param_1)

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
  iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x30,0x24,uVar1);
  *(undefined2 *)(iVar2 + 4) = 0x30;
  local_c = 0;
  puVar3 = (undefined4 *)FUN_008f3490(uStack_4,unaff_retaddr,param_1);
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



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b6a40(float *param_1,float *param_2,float param_3)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_5c [4];
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d6e78;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_5c;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffa0;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_0089d3d0(uVar1);
  *in_ECX = &PTR_FUN_00a5591c;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  DAT_00ba7d70 = DAT_00ba7d70 + 1;
  *in_ECX = &PTR_FUN_00a55a5c;
  _DAT_00ba7f44 = _DAT_00ba7f44 + 1;
  *in_ECX = &PTR_FUN_00a55afc;
  _DAT_00ba7f50 = _DAT_00ba7f50 + 1;
  *in_ECX = &PTR_FUN_00a65794;
  local_14 = 0;
  local_40 = *param_1 * 0.14287673;
  local_3c = param_1[1] * 0.14287673;
  local_38 = param_1[2] * 0.14287673;
  local_50 = *param_2 * 0.14287673;
  local_4c = param_2[1] * 0.14287673;
  local_48 = param_2[2] * 0.14287673;
  local_58 = param_3 * 0.14287673;
  FUN_008b6980(&local_40,&local_50,local_58);
  *unaff_FS_OFFSET = local_1c;
  return;
}



undefined4 FUN_008b6b40(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar1 = FUN_00401f00(0x30);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00564030();
    }
    *(undefined4 *)(in_ECX + 0xc) = uVar2;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008b6730(uVar2);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008b6b90(int param_1)

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
    FUN_008b6980(&local_30,&local_40,*(undefined4 *)(param_1 + 4));
  }
  (**(code **)(*in_ECX + 0x7c))(param_1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b6c20(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *in_ECX;
  undefined4 unaff_ESI;
  uint *unaff_FS_OFFSET;
  undefined1 auStack_98 [4];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
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
  puStack_18 = &LAB_009d6eab;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_98;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff60;
  *unaff_FS_OFFSET = (uint)&local_1c;
  local_8c = _DAT_00b2efc4;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_94 = param_1;
  local_74 = 0;
  local_90 = 0;
  local_70 = 0x3f800000;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  FUN_008aea60(&local_90);
  if ((in_ECX == (int *)0x0) || (in_ECX[2] == 0)) {
    puVar2 = &DAT_00ba7a40;
  }
  else {
    puVar2 = (undefined4 *)(in_ECX[2] + 0x10);
  }
  FUN_0047dcd0(puVar2);
  if ((in_ECX == (int *)0x0) || (in_ECX[2] == 0)) {
    puVar2 = &DAT_00ba7a40;
  }
  else {
    puVar2 = (undefined4 *)(in_ECX[2] + 0x20);
  }
  FUN_0047dcd0(puVar2);
  iStack_5c = (**(code **)(*DAT_00ba7d98 + 0x10))(0x90,8,uVar1);
  *(undefined2 *)(iStack_5c + 4) = 0x90;
  uStack_58 = local_78;
  uStack_54 = local_74;
  uStack_50 = local_70;
  local_1c = 0;
  uStack_4c = local_6c;
  uStack_48 = uStack_88;
  uStack_44 = uStack_84;
  uStack_40 = local_80;
  uStack_3c = local_7c;
  piVar3 = (int *)FUN_008f4080(&uStack_48,&uStack_58,local_94,6,1);
  local_1c = 0xffffffff;
  (**(code **)(*piVar3 + 0xc))();
  if (piVar3[0x14] != 0) {
    (**(code **)(*in_ECX + 0x94))(unaff_ESI,piVar3[0x14],"bhkCapsuleShape");
  }
  *unaff_FS_OFFSET = local_24;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_008b6dc0(float *param_1,float *param_2,float *param_3)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float *pfVar18;
  int in_ECX;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  float10 extraout_ST0;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_a4 [12];
  float local_98;
  float local_94;
  float *local_8c;
  double local_88;
  float local_80 [4];
  float local_70 [4];
  float local_60 [8];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_a4;
  local_8c = param_1;
  if (in_ECX == 0) {
    iVar22 = 0;
  }
  else {
    iVar22 = *(int *)(in_ECX + 8);
  }
  fVar2 = *param_2;
  fVar25 = param_2[1];
  fVar26 = param_2[2];
  fVar27 = param_2[3];
  fVar3 = param_2[4];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[8];
  fVar8 = param_2[9];
  fVar9 = param_2[10];
  fVar10 = param_2[0xb];
  fVar11 = param_2[0xc];
  fVar12 = param_2[0xd];
  fVar13 = param_2[0xe];
  fVar14 = param_2[0xf];
  pfVar18 = (float *)(iVar22 + 0x10);
  iVar19 = 2;
  iVar21 = (int)local_60 - (int)pfVar18;
  do {
    fVar15 = *pfVar18;
    fVar16 = pfVar18[1];
    fVar17 = pfVar18[2];
    pfVar1 = (float *)(iVar21 + (int)pfVar18);
    *pfVar1 = fVar16 * fVar3 + fVar15 * fVar2 + fVar17 * fVar7 + fVar11;
    pfVar1[1] = fVar16 * fVar4 + fVar15 * fVar25 + fVar17 * fVar8 + fVar12;
    pfVar1[2] = fVar16 * fVar5 + fVar15 * fVar26 + fVar17 * fVar9 + fVar13;
    pfVar1[3] = fVar16 * fVar6 + fVar15 * fVar27 + fVar17 * fVar10 + fVar14;
    iVar19 = iVar19 + -1;
    pfVar18 = pfVar18 + 4;
  } while (0 < iVar19);
  FUN_008d1cd0(param_1,local_60,local_60 + 4,&local_40);
  fVar2 = param_1[3] + *(float *)(iVar22 + 0xc);
  local_30 = *param_1 - local_40;
  fStack_2c = param_1[1] - fStack_3c;
  fStack_28 = param_1[2] - fStack_38;
  fStack_24 = param_1[3] - fStack_34;
  local_70[0] = local_30 * local_30;
  local_70[1] = fStack_2c * fStack_2c;
  local_70[2] = fStack_28 * fStack_28;
  local_70[3] = fStack_24 * fStack_24;
  local_80[0] = local_70[2] + local_70[1] + local_70[0];
  local_88 = (double)fVar2;
  local_98 = fVar2 * fVar2;
  if (local_98 < local_80[0] == (local_98 == local_80[0])) {
    if (local_80[0] <= 0.0) {
      local_98 = 0.0;
      local_70[0] = local_60[4] - local_60[0];
      local_70[1] = local_60[5] - local_60[1];
      local_70[2] = local_60[6] - local_60[2];
      fVar25 = ABS(local_60[4] - local_60[0]);
      local_80[0] = param_3[4];
      local_80[1] = param_3[5];
      local_80[2] = param_3[6];
      fVar26 = ABS(local_60[5] - local_60[1]);
      bVar24 = fVar25 <= fVar26;
      local_94 = fVar25;
      if (!bVar24) {
        local_94 = fVar26;
      }
      uVar20 = (uint)(fVar26 < fVar25);
      uVar23 = 2;
      if (ABS(local_60[6] - local_60[2]) < local_94) {
        uVar20 = 2;
        uVar23 = (uint)(fVar26 < fVar25);
      }
      local_80[uVar20] = 0.0;
      local_80[bVar24] = local_70[uVar23];
      local_80[uVar23] = -local_70[bVar24];
      fVar25 = param_3[7];
      fVar27 = local_80[2] * local_80[2];
      fVar26 = fVar27 + local_80[1] * local_80[1] + local_80[0] * local_80[0];
      auVar29._4_4_ = fVar27;
      auVar29._0_4_ = fVar26;
      auVar29._8_4_ = fVar27;
      auVar29._12_4_ = fVar27;
      auVar29 = rsqrtss(auVar29,auVar29);
      fVar27 = auVar29._0_4_;
      fVar26 = fVar27 * 0.5 * (3.0 - fVar26 * fVar27 * fVar27);
      param_3[4] = fVar26 * local_80[0];
      param_3[5] = fVar26 * local_80[1];
      param_3[6] = fVar26 * local_80[2];
      param_3[7] = fVar26 * 0.0;
      param_3[7] = fVar25;
      param_1 = local_8c;
    }
    else {
      FUN_00982c30();
      local_98 = (float)extraout_ST0;
      fVar2 = param_3[7];
      fVar25 = local_70[2] + local_70[1] + local_70[0];
      auVar28._4_4_ = local_70[2];
      auVar28._0_4_ = fVar25;
      auVar28._8_4_ = local_70[2];
      auVar28._12_4_ = local_70[2];
      auVar29 = rsqrtss(auVar28,auVar28);
      fVar26 = auVar29._0_4_;
      fVar25 = fVar26 * 0.5 * (3.0 - fVar25 * fVar26 * fVar26);
      param_3[4] = fVar25 * local_30;
      param_3[5] = fVar25 * fStack_2c;
      param_3[6] = fVar25 * fStack_28;
      param_3[7] = fVar25 * fStack_24;
      param_3[7] = fVar2;
      fVar2 = (float)local_88;
    }
    fVar25 = *(float *)(iVar22 + 0xc) - local_98;
    fVar26 = param_3[7];
    fVar27 = *param_1;
    fVar3 = param_1[1];
    fVar4 = param_1[2];
    fVar5 = param_1[3];
    param_3[7] = local_98 - fVar2;
    *param_3 = fVar25 * param_3[4] + fVar27;
    param_3[1] = fVar25 * param_3[5] + fVar3;
    param_3[2] = fVar25 * param_3[6] + fVar4;
    param_3[3] = fVar25 * fVar26 + fVar5;
    return 1;
  }
  return 0;
}



void FUN_008b7110(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_008aeac0(param_1);
  param_1 = FUN_0070f910(DAT_00ba7fd8);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void thunk_FUN_00897850(void)

{
  thunk_FUN_00897850();
  return;
}



undefined4 * FUN_008b71b0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00897600();
    *puVar2 = &PTR_FUN_00a655cc;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008b7210(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 auStack_64 [4];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_64;
  uVar1 = FUN_005398e0(local_60,param_1);
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_0089f570();
    FUN_008aba40(uVar1);
    FUN_0089f570();
  }
  return;
}



undefined4 * FUN_008b7280(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00897600();
    *puVar2 = &PTR_FUN_00a655cc;
  }
  local_4 = 0xffffffff;
  thunk_FUN_008976d0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_008b7300(void)

{
  int *in_ECX;
  undefined1 local_34 [52];
  
  if ((in_ECX[4] != 0) && (*(int *)(in_ECX[4] + 8) != 0)) {
    FUN_008aedc0(local_34);
    (**(code **)(*in_ECX + 0x78))(local_34);
  }
  return;
}



void FUN_008b73b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0089f290(param_1);
  param_1 = FUN_0070f910(DAT_00ba7fe0);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b7400(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bd428;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a65654;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7fe8 = _DAT_00ba7fe8 + -1;
  local_4 = 0xffffffff;
  FUN_008ae930();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008b7470(void)

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
    *puVar2 = &PTR_FUN_00a65654;
    _DAT_00ba7fe8 = _DAT_00ba7fe8 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008b7520(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a55a5c;
    _DAT_00ba7f44 = _DAT_00ba7f44 + 1;
    *puVar2 = &PTR_FUN_00a65654;
    _DAT_00ba7fe8 = _DAT_00ba7fe8 + 1;
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



void FUN_008b7650(undefined4 param_1,int param_2)

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
  if (((iVar5 != 0) && (uStack_1c = *(float *)(param_2 + 0x10), uStack_1c != 1.0)) &&
     (iVar7 = *(int *)(iVar5 + 8), iVar7 != 0)) {
    iVar8 = iVar7 << 4;
    do {
      iVar8 = iVar8 + -0x10;
      pfVar1 = (float *)(*(int *)(iVar5 + 4) + iVar8);
      fVar2 = pfVar1[1];
      fVar3 = pfVar1[2];
      fVar4 = pfVar1[3];
      pfVar6 = (float *)(*(int *)(iVar5 + 4) + iVar8);
      iVar7 = iVar7 + -1;
      *pfVar6 = *pfVar1 * uStack_1c;
      pfVar6[1] = fVar2 * uStack_1c;
      pfVar6[2] = fVar3 * uStack_1c;
      pfVar6[3] = fVar4 * uStack_1c;
    } while (iVar7 != 0);
  }
  FUN_008a2670(uStack_18,param_2);
  return;
}



void FUN_008b76e0(int param_1)

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
    iStack_4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x90,0x24,uVar1);
    *(undefined2 *)(iStack_4 + 4) = 0x90;
    local_c = 0;
    puVar2 = (undefined4 *)FUN_008f5300(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
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



void FUN_008b77a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  
  FUN_008a2690(param_1);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(in_ECX + 8) + 0xc);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  uVar6 = *(uint *)(param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar6 < iVar9) {
    iVar8 = uVar6 * 2;
    if (iVar8 <= iVar9) {
      iVar8 = iVar9;
    }
    FUN_008a6e40((int *)(param_1 + 4),iVar8,0x10);
  }
  *(int *)(param_1 + 8) = iVar9;
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(in_ECX + 8) + 0x10;
  }
  if (0 < iVar9) {
    iVar7 = 0;
    do {
      puVar1 = (undefined4 *)(iVar7 + iVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + iVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      iVar7 = iVar7 + 0x10;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



void FUN_008b7830(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  undefined4 unaff_EBX;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  undefined4 local_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d6f18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*in_ECX + 0x74))(&local_1c,uVar1);
  local_1c = 0;
  uStack_18 = 0;
  iStack_14 = -0x80000000;
  puStack_8 = (undefined1 *)0x0;
  if (iVar2 != 0) {
    local_1c = *(undefined4 *)(iVar2 + 4);
    uStack_18 = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar2 + 4) = 0;
    iStack_14 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0x80000000;
  }
  FUN_008a2610(unaff_retaddr);
  if (iVar2 != 0) {
    FUN_008e81b0(unaff_retaddr,&local_1c);
    (**(code **)(*in_ECX + 100))(unaff_EBX);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (-1 < iStack_14) {
    FUN_008a75d0(local_1c,iStack_14 << 4,0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined1 FUN_008b7930(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d6f50;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar1 = FUN_008a2650(param_1);
  uVar2 = 0;
  if (cVar1 != '\0') {
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = -0x80000000;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = -0x80000000;
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    FUN_008b77a0(&local_1c);
    FUN_008b77a0(&local_2c);
    uVar2 = FUN_008e8140(&local_18,&local_28,uVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    if (-1 < local_20) {
      FUN_008a75d0(local_28,local_20 << 4,0x14);
    }
    local_4 = 0xffffffff;
    if (-1 < local_10) {
      FUN_008a75d0(local_18,local_10 << 4,0x14);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008b7a60(int param_1)

{
  int in_ECX;
  uint uVar1;
  int iVar2;
  undefined1 auStack_64 [4];
  float *local_60;
  int local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_40;
  float local_3c;
  float local_38;
  char local_34 [32];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_64;
  FUN_008ae9a0(param_1);
  local_60 = (float *)FUN_0070f910(DAT_00ba7fec);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_60);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    local_5c = 0;
  }
  else {
    local_5c = *(int *)(*(int *)(in_ECX + 8) + 0xc);
  }
  local_60 = (float *)FUN_0070faf0("Num Spheres",local_5c);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_60);
  if ((((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) &&
      (local_60 = (float *)(*(int *)(in_ECX + 8) + 0x10), local_60 != (float *)0x0)) &&
     (iVar2 = 0, 0 < local_5c)) {
    do {
      local_50 = local_60[2];
      local_58 = local_60[3];
      local_40 = *local_60 * 6.99904;
      local_3c = local_60[1] * 6.99904;
      local_38 = local_50 * 6.99904;
      _sprintf(local_34,"Pos %d",iVar2);
      local_54 = FUN_00707280(local_34);
      uVar1 = (uint)*(ushort *)(param_1 + 10);
      if (*(ushort *)(param_1 + 8) <= uVar1) {
        FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
      }
      FUN_0042bb90(uVar1,&local_54);
      _sprintf(local_34,"Radius %d",iVar2);
      local_58 = (float)FUN_0070fb90(local_34,local_58);
      uVar1 = (uint)*(ushort *)(param_1 + 10);
      if (*(ushort *)(param_1 + 8) <= uVar1) {
        FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
      }
      FUN_0042bb90(uVar1,&local_58);
      local_60 = local_60 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_5c);
  }
  return;
}



undefined4 FUN_008b7c70(undefined1 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    puVar1 = (undefined4 *)FUN_00401f00(0x10);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0x80000000;
    }
    *(undefined4 **)(in_ECX + 0xc) = puVar1;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008b77a0(puVar1);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b7d50(void)

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
  *in_ECX = &PTR_FUN_00a6593c;
  _DAT_00ba7ff4 = _DAT_00ba7ff4 + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b7da0(void)

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
  *in_ECX = &PTR_FUN_00a6593c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7ff4 = _DAT_00ba7ff4 + -1;
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
    uVar2 = FUN_008b7d50();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008b7e80(undefined4 param_1)

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
    uVar3 = FUN_008b7d50();
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



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008b7fa0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  undefined1 auStack_44 [8];
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_44;
  if ((in_ECX == (int *)0x0) || (in_ECX[2] == 0)) {
    puVar1 = &DAT_00ba7a40;
  }
  else {
    puVar1 = (undefined4 *)(in_ECX[2] + 0x10);
  }
  local_30 = *puVar1;
  uStack_2c = puVar1[1];
  uStack_28 = puVar1[2];
  uStack_24 = puVar1[3];
  FUN_0043f3e0(&local_3c,&local_30);
  local_3c = local_3c * 2.0;
  local_38 = local_38 * 2.0;
  local_34 = local_34 * 2.0;
  iVar2 = FUN_006fbc40(&local_3c,0);
  if (iVar2 != 0) {
    (**(code **)(*in_ECX + 0x98))(iVar2);
    FUN_006ff420("bhkBoxShape");
    (**(code **)(*param_1 + 0x84))(iVar2,0);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b8120(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d6f7b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&uStack_54;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffa0;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 != 0) {
    iStack_4c = (**(code **)(*DAT_00ba7d98 + 0x10))(0x20,0x24,uVar1);
    *(undefined2 *)(iStack_4c + 4) = 0x20;
    uStack_50 = *(undefined4 *)(param_1 + 0x10);
    uStack_54 = *(undefined4 *)(param_1 + 0x14);
    local_1c = 0;
    uStack_40 = *(undefined4 *)(param_1 + 0x18);
    uStack_3c = *(undefined4 *)(param_1 + 0x1c);
    uStack_48 = uStack_50;
    uStack_44 = uStack_54;
    puVar2 = (undefined4 *)FUN_008cdfe0(&uStack_48,_DAT_00b2efc4);
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



void FUN_008b8240(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  undefined1 local_c [12];
  
  iVar1 = param_1;
  FUN_008aeac0(param_1);
  param_1 = FUN_0070f910(DAT_00ba7ff8);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  if ((in_ECX == 0) ||
     (puVar2 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x10), *(int *)(in_ECX + 8) == 0)) {
    puVar2 = &DAT_00ba7a40;
  }
  FUN_0043f3e0(local_c,puVar2);
  param_1 = FUN_00707280("Half Extent");
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  return;
}



void FUN_008b8320(byte param_1)

{
  int in_ECX;
  
  FUN_00715a70();
  if (((param_1 & 1) != 0) && (in_ECX != 0)) {
    FUN_00401e40(in_ECX - (uint)*(byte *)(in_ECX + -1));
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008b8380(void)

{
  int iVar1;
  int in_ECX;
  undefined1 auStack_3c [12];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_3c;
  if (*(int *)(in_ECX + 0x30) != 0) {
    iVar1 = FUN_00497420(*(int *)(in_ECX + 0x30));
    if ((((iVar1 != 0) && (*(float *)(iVar1 + 0x14) < 1.0)) && (*(int *)(iVar1 + 0x10) != 0)) &&
       (*(int *)(*(int *)(iVar1 + 0x10) + 8) != 0)) {
      local_30 = *(float *)(in_ECX + 0x40) * 100.0;
      fStack_2c = *(float *)(in_ECX + 0x44) * 100.0;
      fStack_28 = *(float *)(in_ECX + 0x48) * 100.0;
      fStack_24 = *(float *)(in_ECX + 0x4c) * 100.0;
      FUN_005377b0(*(undefined4 *)(in_ECX + 0x50),&local_30);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b8410(int param_1,float *param_2,int param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iStack_20;
  int local_1c;
  undefined1 *puStack_18;
  int *local_14;
  
  local_14 = (int *)0xffffffff;
  puStack_18 = &LAB_009d6fbb;
  local_1c = *unaff_FS_OFFSET;
  uVar8 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_3 == 0) {
    param_3 = param_1;
  }
  piVar9 = (int *)FUN_00700010(&DAT_00ba8000);
  piVar11 = piVar9;
  if (piVar9 == (int *)0x0) {
    iVar10 = thunk_FUN_00401aa0(0x70,1);
    bVar7 = 0x10 - ((byte)iVar10 & 0xf);
    piVar11 = (int *)(iVar10 + (uint)bVar7);
    *(byte *)((int)piVar11 + -1) = bVar7;
    local_14 = piVar9;
    FUN_00715990(uVar8);
    *piVar11 = (int)&PTR_FUN_00a97fcc;
    iVar6 = iRam00ba7a4c;
    iVar5 = DAT_00ba7a48;
    iVar4 = DAT_00ba7a44;
    iVar10 = DAT_00ba7a40;
    piVar11[0x14] = 0;
    piVar11[0x10] = iVar10;
    piVar11[0x11] = iVar4;
    piVar11[0x12] = iVar5;
    piVar11[0x13] = iVar6;
    local_14 = (int *)0xffffffff;
    (**(code **)(*piVar11 + 0x58))(param_3);
  }
  iVar10 = FUN_0047fac0(param_3);
  fVar13 = *param_2;
  fVar14 = param_2[1];
  fVar15 = param_2[2];
  fVar16 = param_2[3];
  if ((iVar10 != 0) && (iVar10 = *(int *)(iVar10 + 0x10), iVar10 != 0)) {
    fVar12 = (float10)FUN_00535ac0();
    fVar3 = _DAT_00b2f0f8 * (float)fVar12;
    fVar2 = *(float *)(*(int *)(*(int *)(iVar10 + 8) + 0x50) + 200) * 0.75;
    fVar13 = fVar2 * fVar3 * fVar13 + fVar3 * fVar13;
    fVar14 = fVar2 * fVar3 * fVar14 + fVar3 * fVar14;
    fVar15 = fVar2 * fVar3 * fVar15 + fVar3 * fVar15;
    fVar16 = fVar2 * fVar3 * fVar16 + fVar3 * fVar16;
  }
  piVar11[5] = 0;
  piVar11[6] = 0x3e4ccccd;
  *(ushort *)(piVar11 + 2) = *(ushort *)(piVar11 + 2) & 0xfff5 | 5;
  pcVar1 = *(code **)(*piVar11 + 0x4c);
  piVar11[4] = 0;
  piVar11[0x10] = (int)fVar13;
  piVar11[0x11] = (int)fVar14;
  piVar11[0x12] = (int)fVar15;
  piVar11[0x13] = (int)fVar16;
  piVar11[3] = 0x3f800000;
  (*pcVar1)(0xff7fffff);
  *unaff_FS_OFFSET = iStack_20;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b8590(undefined4 param_1,float *param_2,int param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iStack_20;
  int local_1c;
  undefined1 *puStack_18;
  int *local_14;
  
  local_14 = (int *)0xffffffff;
  puStack_18 = &LAB_009d6fbb;
  local_1c = *unaff_FS_OFFSET;
  uVar8 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_1c;
  piVar9 = (int *)FUN_00700010(&DAT_00ba8000);
  piVar11 = piVar9;
  if (piVar9 == (int *)0x0) {
    iVar10 = thunk_FUN_00401aa0(0x70,1);
    bVar7 = 0x10 - ((byte)iVar10 & 0xf);
    piVar11 = (int *)(iVar10 + (uint)bVar7);
    *(byte *)((int)piVar11 + -1) = bVar7;
    local_14 = piVar9;
    FUN_00715990(uVar8);
    *piVar11 = (int)&PTR_FUN_00a97fcc;
    iVar6 = iRam00ba7a4c;
    iVar5 = DAT_00ba7a48;
    iVar4 = DAT_00ba7a44;
    iVar10 = DAT_00ba7a40;
    piVar11[0x14] = 0;
    piVar11[0x10] = iVar10;
    piVar11[0x11] = iVar4;
    piVar11[0x12] = iVar5;
    piVar11[0x13] = iVar6;
    local_14 = (int *)0xffffffff;
    (**(code **)(*piVar11 + 0x58))(param_1);
  }
  iVar10 = FUN_0047fac0(param_1);
  fVar13 = *param_2;
  fVar14 = param_2[1];
  fVar15 = param_2[2];
  fVar16 = param_2[3];
  if ((iVar10 != 0) && (iVar10 = *(int *)(iVar10 + 0x10), iVar10 != 0)) {
    fVar12 = (float10)FUN_00535ac0();
    fVar3 = _DAT_00b2f0f8 * (float)fVar12;
    fVar2 = *(float *)(*(int *)(*(int *)(iVar10 + 8) + 0x50) + 200) * 0.75;
    fVar13 = fVar2 * *param_2 + fVar3 * fVar13;
    fVar14 = fVar2 * param_2[1] + fVar3 * fVar14;
    fVar15 = fVar2 * param_2[2] + fVar3 * fVar15;
    fVar16 = fVar2 * param_2[3] + fVar3 * fVar16;
  }
  piVar11[5] = 0;
  pcVar1 = *(code **)(*piVar11 + 0x4c);
  piVar11[6] = param_3;
  *(ushort *)(piVar11 + 2) = *(ushort *)(piVar11 + 2) & 0xfff5 | 5;
  piVar11[4] = 0;
  piVar11[0x10] = (int)fVar13;
  piVar11[0x11] = (int)fVar14;
  piVar11[0x12] = (int)fVar15;
  piVar11[0x13] = (int)fVar16;
  piVar11[3] = 0x3f800000;
  (*pcVar1)(0xff7fffff);
  *unaff_FS_OFFSET = iStack_20;
  return;
}



void FUN_008b8700(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_00700010(&DAT_00ba8000);
    if (iVar1 != 0) {
      FUN_006ffe90(iVar1);
    }
    iVar1 = (**(code **)(*param_1 + 8))();
    if (iVar1 != 0) {
      uVar3 = 0;
      if (*(short *)(iVar1 + 0xb6) != 0) {
        if (*(short *)(iVar1 + 0xb6) != 0) goto LAB_008b8746;
        uVar2 = 0;
        while( true ) {
          FUN_008b8700(uVar2);
          uVar3 = uVar3 + 1;
          if (*(ushort *)(iVar1 + 0xb6) <= uVar3) break;
LAB_008b8746:
          uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xb0) + uVar3 * 4);
        }
      }
    }
  }
  return;
}



void FUN_008b8800(float *param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  
  *param_4 = *param_1;
  param_4[1] = param_1[1];
  param_1 = param_1 + 2;
  param_4[2] = *param_1;
  param_4[3] = 0.0;
  param_4[4] = *param_4;
  param_4[5] = param_4[1];
  param_4[6] = param_4[2];
  param_4[7] = param_4[3];
  if (0 < param_2) {
    do {
      fVar1 = param_1[-2];
      if (param_1[-2] < param_4[4]) {
        fVar1 = param_4[4];
      }
      param_4[4] = fVar1;
      fVar1 = param_1[-1];
      if (param_1[-1] < param_4[5]) {
        fVar1 = param_4[5];
      }
      param_4[5] = fVar1;
      fVar1 = *param_1;
      if (*param_1 < param_4[6]) {
        fVar1 = param_4[6];
      }
      param_4[6] = fVar1;
      fVar1 = param_1[-2];
      if (*param_4 < param_1[-2]) {
        fVar1 = *param_4;
      }
      *param_4 = fVar1;
      fVar1 = param_1[-1];
      if (param_4[1] < param_1[-1]) {
        fVar1 = param_4[1];
      }
      param_4[1] = fVar1;
      fVar1 = *param_1;
      if (param_4[2] < *param_1) {
        fVar1 = param_4[2];
      }
      param_1 = (float *)((int)param_1 + param_3);
      param_4[2] = fVar1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



void FUN_008b88f0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_008f5750(0,0);
    *param_1 = &PTR_FUN_00a98060;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined ** FUN_008b8910(void)

{
  FUN_008f5750(0,0);
  return &PTR_FUN_00a98060;
}



void FUN_008b8970(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_008f5750(param_1,0);
  *in_ECX = &PTR_FUN_00a98060;
  in_ECX[0x10] = 0x3f000000;
  in_ECX[0x11] = 0x3e99999a;
  in_ECX[0x12] = 0x437a0000;
  in_ECX[0x13] = 0x3f733333;
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



void FUN_008b89c0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  FUN_008f5750(param_6,0);
  *in_ECX = &PTR_FUN_00a98060;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  in_ECX[8] = *param_1;
  in_ECX[9] = uVar1;
  in_ECX[10] = uVar2;
  in_ECX[0xb] = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  in_ECX[0xc] = *param_2;
  in_ECX[0xd] = uVar1;
  in_ECX[0xe] = uVar2;
  in_ECX[0xf] = uVar3;
  in_ECX[0x10] = param_3;
  in_ECX[0x11] = param_4;
  in_ECX[0x13] = param_5;
  in_ECX[0x12] = 0x437a0000;
  return;
}



void FUN_008b8a10(float *param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 in_EAX;
  uint uVar5;
  int in_ECX;
  
  auVar1._4_4_ = -(uint)(0.001 < ABS(param_1[1] - *(float *)(in_ECX + 0x34)));
  auVar1._0_4_ = -(uint)(0.001 < ABS(*param_1 - *(float *)(in_ECX + 0x30)));
  auVar1._8_4_ = -(uint)(0.001 < ABS(param_1[2] - *(float *)(in_ECX + 0x38)));
  auVar1._12_4_ = -(uint)(0.001 < ABS(param_1[3] - *(float *)(in_ECX + 0x3c)));
  uVar5 = movmskps(in_EAX,auVar1);
  if ((((uVar5 & 7) != 0) && (*(int *)(in_ECX + 0x18) != 0)) &&
     (*(int *)(*(int *)(in_ECX + 0x18) + 8) != 0)) {
    FUN_008a6410();
  }
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *(float *)(in_ECX + 0x30) = *param_1;
  *(float *)(in_ECX + 0x34) = fVar2;
  *(float *)(in_ECX + 0x38) = fVar3;
  *(float *)(in_ECX + 0x3c) = fVar4;
  return;
}



void FUN_008b8a80(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x48) = param_1;
  return;
}



void FUN_008b8ab0(byte param_1)

{
  FUN_008f57b0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008b8b60(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int in_ECX;
  float unaff_EBX;
  undefined1 auStack_16c [12];
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d4 [48];
  undefined1 auStack_a4 [48];
  undefined1 auStack_74 [4];
  undefined1 local_70 [44];
  undefined1 auStack_44 [64];
  
  iVar1 = *(int *)(in_ECX + 0x18);
  FUN_0088fcc0(*(int *)(iVar1 + 0x50) + 0x10,in_ECX + 0x20);
  iVar4 = *(int *)(iVar1 + 0x50);
  local_110 = local_160 - *(float *)(in_ECX + 0x30);
  fStack_10c = fStack_15c - *(float *)(in_ECX + 0x34);
  fStack_108 = fStack_158 - *(float *)(in_ECX + 0x38);
  fStack_104 = fStack_154 - *(float *)(in_ECX + 0x3c);
  local_150 = local_160 - *(float *)(iVar4 + 0x60);
  fStack_14c = fStack_15c - *(float *)(iVar4 + 100);
  fStack_148 = fStack_158 - *(float *)(iVar4 + 0x68);
  fStack_144 = fStack_154 - *(float *)(iVar4 + 0x6c);
  FUN_008d2bd0(&local_150);
  (**(code **)(**(int **)(iVar1 + 0x50) + 0x3c))(local_70);
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  fStack_118 = 0.0;
  fStack_11c = unaff_EBX;
  FUN_008d2ab0(auStack_d4,auStack_74);
  FUN_008d2ab0(auStack_a4,auStack_d4);
  FUN_008d2a20(auStack_44);
  iVar4 = FUN_008d28b0(0x33d6bf95);
  if (iVar4 == 0) {
    fStack_e8 = *(float *)(in_ECX + 0x4c);
    iVar4 = *(int *)(iVar1 + 0x50);
    fStack_f4 = fStack_e8 * *(float *)(iVar4 + 0xd0);
    fStack_f0 = fStack_e8 * *(float *)(iVar4 + 0xd4);
    fStack_ec = fStack_e8 * *(float *)(iVar4 + 0xd8);
    fStack_e8 = fStack_e8 * *(float *)(iVar4 + 0xdc);
    FUN_008a6410();
    (**(code **)(**(int **)(iVar1 + 0x50) + 0x54))(&fStack_f4);
    fStack_dc = *(float *)(in_ECX + 0x4c);
    iVar4 = *(int *)(iVar1 + 0x50);
    fStack_e8 = fStack_dc * *(float *)(iVar4 + 0xe0);
    fStack_e4 = fStack_dc * *(float *)(iVar4 + 0xe4);
    fStack_e0 = fStack_dc * *(float *)(iVar4 + 0xe8);
    fStack_dc = fStack_dc * *(float *)(iVar4 + 0xec);
    FUN_008a6410();
    (**(code **)(**(int **)(iVar1 + 0x50) + 0x58))(&fStack_e8);
    FUN_008abce0(auStack_16c,&fStack_15c);
    fVar3 = *(float *)(in_ECX + 0x44) * *(float *)(param_1 + 0xc);
    fVar2 = *(float *)(in_ECX + 0x40);
    fStack_10c = fVar3 * fStack_11c + fVar2 * fStack_15c;
    fStack_108 = fVar3 * fStack_118 + fVar2 * fStack_158;
    fStack_104 = fVar3 * fStack_114 + fVar2 * fStack_154;
    fStack_100 = fVar3 * local_110 + fVar2 * local_150;
    FUN_0088fe00(&fStack_14c,&fStack_10c);
    FUN_0089da90();
    FUN_008a6410();
    (**(code **)(**(int **)(iVar1 + 0x50) + 0x60))(&stack0xfffffe84,auStack_16c);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b8df0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d6fe8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a980a4;
  local_4 = 0;
  FUN_008a53c0(uVar1);
  _DAT_00ba8014 = _DAT_00ba8014 + -1;
  local_4 = 0xffffffff;
  FUN_008a5820();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008b8e70(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  undefined4 uStack_18;
  
  iVar4 = (**(code **)(*in_ECX + 0x74))((int)&uStack_18 + 3);
  if (iVar4 != 0) {
    iVar1 = in_ECX[9];
    iVar2 = in_ECX[10];
    iVar3 = in_ECX[0xb];
    *(int *)(iVar4 + 0x40) = in_ECX[8];
    *(int *)(iVar4 + 0x44) = iVar1;
    *(int *)(iVar4 + 0x48) = iVar2;
    *(int *)(iVar4 + 0x4c) = iVar3;
    iVar1 = in_ECX[0xd];
    iVar2 = in_ECX[0xe];
    iVar3 = in_ECX[0xf];
    *(int *)(iVar4 + 0x30) = in_ECX[0xc];
    *(int *)(iVar4 + 0x34) = iVar1;
    *(int *)(iVar4 + 0x38) = iVar2;
    *(int *)(iVar4 + 0x3c) = iVar3;
    uStack_18 = *(float *)(param_2 + 0x10);
    if (uStack_18 != 1.0) {
      *(float *)(iVar4 + 0x30) = uStack_18 * *(float *)(iVar4 + 0x30);
      *(float *)(iVar4 + 0x34) = uStack_18 * *(float *)(iVar4 + 0x34);
      *(float *)(iVar4 + 0x38) = uStack_18 * *(float *)(iVar4 + 0x38);
      *(float *)(iVar4 + 0x3c) = uStack_18 * *(float *)(iVar4 + 0x3c);
    }
  }
  FUN_008a4e30(param_1,param_2);
  return;
}



void FUN_008b8ef0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  undefined4 uStack_18;
  undefined1 local_14 [16];
  
  iVar4 = (**(code **)(*in_ECX + 0x74))(local_14);
  if (iVar4 != 0) {
    iVar1 = in_ECX[0xd];
    iVar2 = in_ECX[0xe];
    iVar3 = in_ECX[0xf];
    *(int *)(iVar4 + 0x30) = in_ECX[0xc];
    *(int *)(iVar4 + 0x34) = iVar1;
    *(int *)(iVar4 + 0x38) = iVar2;
    *(int *)(iVar4 + 0x3c) = iVar3;
    iVar1 = in_ECX[9];
    iVar2 = in_ECX[10];
    iVar3 = in_ECX[0xb];
    *(int *)(iVar4 + 0x40) = in_ECX[8];
    *(int *)(iVar4 + 0x44) = iVar1;
    *(int *)(iVar4 + 0x48) = iVar2;
    *(int *)(iVar4 + 0x4c) = iVar3;
  }
  FUN_008a5120(param_1);
  (**(code **)(*in_ECX + 100))(uStack_18);
  return;
}



void FUN_008b8f50(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(in_ECX + 0x34) = uVar1;
    *(undefined4 *)(in_ECX + 0x38) = uVar2;
    *(undefined4 *)(in_ECX + 0x3c) = uVar3;
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(in_ECX + 0x24) = uVar1;
    *(undefined4 *)(in_ECX + 0x28) = uVar2;
    *(undefined4 *)(in_ECX + 0x2c) = uVar3;
    uVar3 = uRam00ba7a4c;
    uVar2 = DAT_00ba7a48;
    uVar1 = DAT_00ba7a44;
    *(undefined4 *)(param_1 + 0x30) = DAT_00ba7a40;
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
    FUN_008a2f50((undefined4 *)(param_1 + 0x30));
    FUN_008a2f80((undefined4 *)(param_1 + 0x40));
  }
  FUN_0089d720(param_1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_008b8fb0(undefined4 param_1)

{
  int in_ECX;
  undefined1 auStack_38 [8];
  undefined1 local_30 [28];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_38;
  FUN_008a2f10(local_30);
  FUN_008a2b40(local_30,in_ECX + 0x20);
  return param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008b9000(undefined4 param_1)

{
  int in_ECX;
  undefined1 auStack_3c [12];
  undefined1 local_30 [28];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_3c;
  FUN_00889470(param_1,in_ECX + 0x20);
  FUN_008a2f80(local_30);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_008b9050(float *param_1)

{
  int in_ECX;
  undefined1 auStack_38 [8];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_38;
  FUN_008a3030(param_1);
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_0088fe00(*(int *)(*(int *)(in_ECX + 8) + 0x50) + 0x10,in_ECX + 0x30);
    *param_1 = *param_1 - local_30;
    param_1[1] = param_1[1] - fStack_2c;
    param_1[2] = param_1[2] - fStack_28;
    param_1[3] = param_1[3] - fStack_24;
  }
  return param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_008b90c0(int param_1)

{
  int *in_ECX;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [32];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_38;
  (**(code **)(*in_ECX + 0x8c))(param_1 + 0x30);
  (**(code **)(*in_ECX + 0x90))(auStack_34);
  FUN_008b1dd0(auStack_38);
  return param_1;
}



void FUN_008b9120(byte param_1)

{
  int in_ECX;
  
  FUN_008b8df0();
  if (((param_1 & 1) != 0) && (in_ECX != 0)) {
    FUN_00401e40(in_ECX - (uint)*(byte *)(in_ECX + -1));
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_008b9150(float *param_1)

{
  int *in_ECX;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_88 [4];
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_88;
  fVar1 = DAT_00ba7a40;
  fVar2 = DAT_00ba7a44;
  fVar3 = DAT_00ba7a48;
  fVar4 = fRam00ba7a4c;
  if ((in_ECX != (int *)0x0) && (in_ECX[2] != 0)) {
    (**(code **)(*in_ECX + 0x90))(&local_60);
    fStack_50 = (float)in_ECX[0xc];
    fStack_4c = (float)in_ECX[0xd];
    fStack_48 = (float)in_ECX[0xe];
    fStack_44 = (float)in_ECX[0xf];
    fStack_84 = fStack_54 * 2.0;
    fStack_30 = fStack_54 * fStack_84 - 1.0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    fStack_70 = local_60;
    fStack_6c = fStack_5c;
    fStack_68 = fStack_58;
    fStack_64 = 0.0;
    fStack_40 = (fStack_58 * fStack_48 + fStack_5c * fStack_4c + local_60 * fStack_50) * 2.0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    fStack_80 = fStack_84;
    FUN_008a2ed0(param_1);
    fVar1 = *param_1 -
            ((fStack_6c * fStack_48 - fStack_68 * fStack_4c) * fStack_80 +
            fStack_40 * fStack_70 + fStack_30 * fStack_50);
    fVar2 = param_1[1] -
            ((fStack_68 * fStack_50 - fStack_70 * fStack_48) * fStack_80 +
            fStack_40 * fStack_6c + fStack_30 * fStack_4c);
    fVar3 = param_1[2] -
            ((fStack_70 * fStack_4c - fStack_6c * fStack_50) * fStack_80 +
            fStack_40 * fStack_68 + fStack_30 * fStack_48);
    fVar4 = param_1[3] -
            ((fStack_64 * fStack_44 - fStack_64 * fStack_44) * fStack_80 +
            fStack_40 * fStack_64 + fStack_30 * fStack_44);
  }
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  param_1[3] = fVar4;
  return param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008b92c0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *in_ECX;
  undefined1 auStack_58 [4];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_58;
  if ((in_ECX != (int *)0x0) && (in_ECX[2] != 0)) {
    (**(code **)(*in_ECX + 0x90))(&local_40);
    fVar3 = (float)in_ECX[0xc];
    fVar4 = (float)in_ECX[0xd];
    fVar5 = (float)in_ECX[0xe];
    fVar6 = (float)in_ECX[0xf];
    fStack_54 = fStack_34 * 2.0;
    fVar1 = fStack_34 * fStack_54 - 1.0;
    fStack_4c = fStack_3c;
    fStack_48 = fStack_38;
    uStack_44 = 0;
    fStack_50 = fStack_38 * fVar5 + fStack_3c * fVar4 + local_40 * fVar3;
    fVar2 = fStack_50 * 2.0;
    fStack_30 = (fStack_3c * fVar5 - fStack_38 * fVar4) * fStack_54 +
                fVar2 * local_40 + fVar1 * fVar3 + *param_1;
    fStack_2c = (fStack_38 * fVar3 - local_40 * fVar5) * fStack_54 +
                fVar2 * fStack_3c + fVar1 * fVar4 + param_1[1];
    fStack_28 = (local_40 * fVar4 - fStack_3c * fVar3) * fStack_54 +
                fVar2 * fStack_38 + fVar1 * fVar5 + param_1[2];
    fStack_24 = (fVar6 * 0.0 - fVar6 * 0.0) * fStack_54 + fVar2 * 0.0 + fVar1 * fVar6 + param_1[3];
    FUN_008a2f50(&fStack_30);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008b9400(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int in_ECX;
  undefined1 auStack_4c [8];
  float local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_4c;
  fVar3 = *(float *)(in_ECX + 0x30);
  fVar4 = *(float *)(in_ECX + 0x34);
  fVar5 = *(float *)(in_ECX + 0x38);
  fVar6 = *(float *)(in_ECX + 0x3c);
  local_44 = param_2[3] * 2.0;
  fVar1 = param_2[3] * local_44 - 1.0;
  fVar7 = *param_2;
  fStack_3c = param_2[1];
  fStack_38 = param_2[2];
  uStack_34 = 0;
  local_40 = fStack_38 * fVar5 + fStack_3c * fVar4 + fVar7 * fVar3;
  fVar2 = local_40 * 2.0;
  local_30 = (fStack_3c * fVar5 - fStack_38 * fVar4) * local_44 + fVar2 * fVar7 + fVar1 * fVar3 +
             *param_1;
  fStack_2c = (fStack_38 * fVar3 - fVar7 * fVar5) * local_44 + fVar2 * fStack_3c + fVar1 * fVar4 +
              param_1[1];
  fStack_28 = (fVar7 * fVar4 - fStack_3c * fVar3) * local_44 + fVar2 * fStack_38 + fVar1 * fVar5 +
              param_1[2];
  fStack_24 = (fVar6 * 0.0 - fVar6 * 0.0) * local_44 + fVar2 * 0.0 + fVar1 * fVar6 + param_1[3];
  FUN_00889470(param_2,in_ECX + 0x20);
  FUN_008a2fb0(&local_30,&local_40);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008b9540(int *param_1)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b4 [8];
  int local_ac;
  int local_a4 [9];
  int local_80;
  int local_7c;
  int local_78;
  undefined1 local_70 [48];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d702c;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_b4;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff40;
  *unaff_FS_OFFSET = (int)&local_1c;
  piVar3 = (int *)0x0;
  if (param_1 == (int *)0x0) {
    local_ac = FUN_00401f00(0xdc,uVar1);
    local_14 = 1;
    if (local_ac == 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)FUN_0070b780(0);
    }
    local_14 = 0xffffffff;
  }
  else if (param_1[2] != 0) {
    local_ac = FUN_00401f00(0xdc,uVar1);
    local_14 = 0;
    if (local_ac != 0) {
      piVar3 = (int *)FUN_0070b780(0);
    }
    local_14 = 0xffffffff;
    (**(code **)(*param_1 + 0x84))(piVar3,0);
    FUN_00707370(0,1);
    param_1 = piVar3;
  }
  FUN_006ff420("bhkRigidBodyT");
  FUN_008b1dd0(in_ECX + 0x20);
  local_40 = *(undefined4 *)(in_ECX + 0x30);
  uStack_3c = *(undefined4 *)(in_ECX + 0x34);
  uStack_38 = *(undefined4 *)(in_ECX + 0x38);
  uStack_34 = *(undefined4 *)(in_ECX + 0x3c);
  FUN_00607740(local_a4,local_70);
  FUN_0043f3e0(&local_80,&local_40);
  piVar3 = local_a4;
  piVar4 = param_1 + 0xc;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  param_1[0x15] = local_80;
  param_1[0x16] = local_7c;
  param_1[0x17] = local_78;
  FUN_008a30e0(param_1);
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b96d0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7068;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008a4150(uVar3);
  *in_ECX = &PTR_FUN_00a980a4;
  _DAT_00ba8014 = _DAT_00ba8014 + 1;
  iVar1 = param_1[2];
  puVar6 = (undefined4 *)0x0;
  local_4 = 0;
  FUN_008bc720();
  if (((param_1[2] != 0) && (piVar4 = (int *)(param_1[2] + 0x14), piVar4 != (int *)0x0)) &&
     (iVar2 = *piVar4, iVar2 != 0)) {
    puVar6 = *(undefined4 **)(iVar2 + 8);
  }
  if (puVar6 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar6 + 1);
  }
  (**(code **)(*param_1 + 0x4c))(0);
  FUN_0089d730(iVar1);
  if (puVar6 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar6 + 1);
    if (LVar5 == 0) {
      (**(code **)*puVar6)(1);
    }
  }
  FUN_008bc730();
  *unaff_FS_OFFSET = (int)in_ECX;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008b97a0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d709b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = thunk_FUN_00401aa0(0x50,1);
  bVar1 = 0x10 - ((byte)iVar3 & 0xf);
  puVar4 = (undefined4 *)(iVar3 + (uint)bVar1);
  *(byte *)((int)puVar4 + -1) = bVar1;
  local_4 = 0;
  FUN_008a4150(uVar2);
  *puVar4 = &PTR_FUN_00a980a4;
  puVar4[6] = 0;
  _DAT_00ba8014 = _DAT_00ba8014 + 1;
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008b9820(undefined4 param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d70cb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  iVar3 = thunk_FUN_00401aa0(0x50,1);
  bVar1 = 0x10 - ((byte)iVar3 & 0xf);
  puVar4 = (undefined4 *)(iVar3 + (uint)bVar1);
  *(byte *)((int)puVar4 + -1) = bVar1;
  local_4 = 0;
  FUN_008a4150(uVar2);
  *puVar4 = &PTR_FUN_00a980a4;
  puVar4[6] = 0;
  _DAT_00ba8014 = _DAT_00ba8014 + 1;
  local_4 = 0xffffffff;
  FUN_008b8e70(puVar4,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



void FUN_008b9900(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  FUN_008a5c10(param_1);
  param_1 = FUN_0070f910(DAT_00ba8018);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  local_c = *(undefined4 *)(in_ECX + 0x20);
  local_8 = *(undefined4 *)(in_ECX + 0x24);
  local_4 = *(undefined4 *)(in_ECX + 0x28);
  local_10 = *(undefined4 *)(in_ECX + 0x2c);
  FUN_0043f3e0(local_1c,in_ECX + 0x30);
  param_1 = FUN_007153c0("Local Rot");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_00707280("Local Pos");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_008b9a00(void)

{
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_008ac0f0();
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008b9a20(undefined4 param_1)

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
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  iVar2 = FUN_00401f00(0x1e0,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00890240();
  }
  local_4 = 0xffffffff;
  FUN_0089d610(uVar3,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_008b9b20(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = param_1;
  iVar2 = FUN_007124a0();
  iVar3 = (**(code **)(*in_ECX + 0x74))(&param_1);
  if ((iVar3 != 0) && (iVar2 != 0)) {
    *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(iVar2 + 8);
  }
  FUN_0089d6c0(uVar1);
  return;
}



void FUN_008b9b60(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    iVar1 = FUN_008ac0c0();
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 0xc);
      goto LAB_008b9b7f;
    }
  }
  piVar2 = (int *)0x0;
LAB_008b9b7f:
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x24))(param_1);
  }
  thunk_FUN_00700650(param_1);
  return;
}



void FUN_008b9ba0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    iVar1 = FUN_008ac0c0();
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      goto LAB_008b9bbf;
    }
  }
  uVar2 = 0;
LAB_008b9bbf:
  (**(code **)(*param_1 + 0x2c))(uVar2);
  FUN_0089d7b0(param_1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008b9ca0(undefined4 param_1)

{
  undefined4 *in_ECX;
  undefined1 auStack_3c [40];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_3c;
  FUN_008acb10(param_1);
  *in_ECX = &PTR_FUN_00a981b0;
  in_ECX[2] = &PTR_LAB_00a98198;
  in_ECX[3] = &PTR_LAB_00a98180;
  in_ECX[0x2c] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0x3f800000;
  in_ECX[0x13] = 0;
  return;
}



void FUN_008b9d30(byte param_1)

{
  FUN_008acbc0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008b9d60(void)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x90)) {
    do {
      FUN_008a6300(in_ECX + 8);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x90));
  }
  iVar1 = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  if (0 < *(int *)(in_ECX + 0x9c)) {
    do {
      FUN_008de670(in_ECX + 0xc);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x9c));
  }
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b9dd0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009d7103;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9667c;
  local_4 = 1;
  if (in_ECX[2] != 0) {
    FUN_008ac0c0(uVar1);
  }
  FUN_0089d700();
  _DAT_00ba8020 = _DAT_00ba8020 + -1;
  local_4 = local_4 & 0xffffff00;
  FUN_008ceac0();
  local_4 = 0xffffffff;
  FUN_0089d780();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008b9e50(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d712b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xc0,0x31,uVar2);
  uVar1 = uStack_4;
  *(undefined2 *)(iVar3 + 4) = 0xc0;
  local_c = 0;
  puVar4 = (undefined4 *)FUN_008b9ca0(uStack_4);
  local_c = -1;
  (**(code **)(*in_ECX + 0x4c))(puVar4);
  if ((*(short *)(puVar4 + 1) != 0) &&
     (*(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1,
     *(short *)((int)puVar4 + 6) == 0)) {
    (**(code **)*puVar4)(1);
  }
  (**(code **)(*in_ECX + 0x7c))(uVar1);
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



undefined4 FUN_008b9f00(undefined1 *param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar1 = FUN_00401f00(0x70);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      FUN_00890b00();
    }
    *(int *)(in_ECX + 0xc) = iVar1;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008ac0f0(iVar1);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



void FUN_008b9f60(void)

{
  int in_ECX;
  
  FUN_008b9d60();
                    /* WARNING: Could not recover jumptable at 0x008b9f75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(in_ECX + 0x10) + 8))();
  return;
}



void FUN_008b9f80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  undefined1 local_c [12];
  
  iVar1 = param_1;
  FUN_0089d820(param_1);
  param_1 = FUN_0070f910(DAT_00ba8024);
  uVar4 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    puVar2 = &DAT_00ba7a40;
  }
  else {
    puVar2 = (undefined4 *)FUN_008ac070();
  }
  FUN_0043f3e0(local_c,puVar2);
  param_1 = FUN_00707280(&DAT_00a981c4);
  uVar4 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    uVar3 = FUN_008ac0a0();
    FUN_0043f3e0(local_c,uVar3);
  }
  param_1 = FUN_00707280(&DAT_00a981c0);
  uVar4 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  return;
}



void FUN_008ba090(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a981dc;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  return;
}



void FUN_008ba0d0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int *piVar2;
  int iVar3;
  
  *in_ECX = &PTR_FUN_00a981dc;
  piVar2 = in_ECX + 2;
  iVar3 = 0xb;
  do {
    puVar1 = (undefined4 *)*piVar2;
    if (puVar1 != (undefined4 *)0x0) {
      if ((*(short *)(puVar1 + 1) != 0) &&
         (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
         *(short *)((int)puVar1 + 6) == 0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008ba120(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(short *)(param_1 + 4) != 0) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  puVar1 = *(undefined4 **)(in_ECX + 8 + param_2 * 4);
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *(int *)(in_ECX + 8 + param_2 * 4) = param_1;
  return;
}



undefined4 FUN_008ba170(int param_1)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 8 + param_1 * 4);
}



void FUN_008ba180(byte param_1)

{
  FUN_008ba0d0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008ba1b0(int *param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int in_ECX;
  int iVar5;
  int unaff_FS_OFFSET;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtRayCstCached";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = _tls_index;
  *(undefined4 **)(in_ECX + 4) = param_2;
  *(undefined4 *)(in_ECX + 0xc) = param_5;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  if (param_3 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_3 + 0x14;
  }
  *(int *)(in_ECX + 8) = iVar5;
  if (*(char *)(param_2 + 8) == '\0') {
    *(undefined4 *)(in_ECX + 0x44) = 0;
  }
  else if (param_3 == 0) {
    *(undefined4 *)(in_ECX + 0x44) = 0;
  }
  else {
    *(int *)(in_ECX + 0x44) = param_3 + 0x10;
  }
  local_30 = *param_2;
  uStack_2c = param_2[1];
  uStack_28 = param_2[2];
  uStack_24 = param_2[3];
  local_1c = param_2 + 4;
  local_14 = param_4;
  local_20 = 1;
  local_18 = 0x10;
  (**(code **)(*param_1 + 0x38))(&local_30);
  iVar1 = *(int *)(iVar1 + iVar2 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_008ba2c0(int *param_1,undefined1 (*param_2) [16],int param_3,undefined4 param_4,int param_5
                 ,int param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  int iVar8;
  int *piVar9;
  int unaff_EBX;
  int unaff_FS_OFFSET;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iStack_44;
  int iStack_40;
  int local_3c;
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  iVar3 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar8 = *(int *)(iVar3 + _tls_index * 4);
  if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar4 = "TtRayCastGroup";
    uVar5 = rdtsc();
    local_3c = (int)uVar5;
    puVar4[1] = local_3c;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar4 + 3;
  }
  local_30 = minps(*param_2,param_2[1]);
  local_20 = maxps(*param_2,param_2[1]);
  if (-1 < param_3 + -2) {
    iVar8 = param_3 + -1;
    pauVar6 = param_2;
    do {
      auVar2 = pauVar6[3];
      iVar8 = iVar8 + -1;
      auVar10 = minps(local_30,pauVar6[4]);
      auVar11 = maxps(local_20,pauVar6[4]);
      local_30 = minps(auVar10,auVar2);
      local_20 = maxps(auVar11,auVar2);
      pauVar6 = pauVar6 + 3;
    } while (iVar8 != 0);
  }
  iVar8 = (**(code **)(*param_1 + 0x3c))();
  piVar9 = *(int **)(*(int *)(iVar3 + _tls_index * 4) + 0x19c);
  if (piVar9 == (int *)0x0) {
    piVar9 = DAT_00ba7d9c;
  }
  iStack_40 = piVar9[8];
  uVar7 = iVar8 + 0x10U & 0xfffffff0;
  uVar1 = iStack_40 + uVar7;
  if ((uint)piVar9[0xb] < uVar1) {
    iStack_40 = (**(code **)(*piVar9 + 0xc))(uVar7);
  }
  else {
    piVar9[8] = uVar1;
  }
  (**(code **)(*param_1 + 0x40))(local_30,iStack_40);
  if (-1 < param_3 + -1) {
    iStack_44 = param_3;
    do {
      FUN_008ba1b0(param_1,param_2,param_4,unaff_EBX,param_5);
      param_2 = param_2 + 3;
      param_5 = param_5 + param_6;
      iStack_44 = iStack_44 + -1;
    } while (iStack_44 != 0);
  }
  piVar9 = *(int **)(local_3c + 0x19c);
  if (*(int **)(local_3c + 0x19c) == (int *)0x0) {
    piVar9 = DAT_00ba7d9c;
  }
  piVar9[8] = unaff_EBX;
  if (unaff_EBX == piVar9[10]) {
    (**(code **)(*piVar9 + 0x10))(unaff_EBX);
  }
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar4 = *(undefined4 **)(local_3c + 0x1a4);
    *puVar4 = &DAT_00a9610c;
    uVar5 = rdtsc();
    puVar4[1] = (int)uVar5;
    *(undefined4 **)(local_3c + 0x1a4) = puVar4 + 3;
  }
  return;
}



float10 FUN_008ba470(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char *pcVar9;
  int in_ECX;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iStack_24;
  int *piStack_20;
  undefined1 local_19;
  int local_18;
  int local_14;
  
  local_14 = *(int *)(*(char *)(param_1 + 5) + param_1);
  param_1 = *(char *)(param_1 + 5) + param_1;
  local_18 = *(int *)(in_ECX + 0x10) * param_2 + *(int *)(in_ECX + 0xc);
  if (local_14 == 0) {
    return (float10)*(float *)(local_18 + 4);
  }
  iVar10 = param_2 * 0x30 + *(int *)(in_ECX + 4);
  pcVar9 = (char *)(**(code **)**(undefined4 **)(in_ECX + 8))(&local_19,iVar10,param_1);
  if (*pcVar9 != '\0') {
    pfVar1 = *(float **)(param_1 + 8);
    fVar3 = pfVar1[8];
    fVar4 = pfVar1[9];
    fVar5 = pfVar1[10];
    fVar6 = pfVar1[4];
    fVar7 = pfVar1[5];
    fVar8 = pfVar1[6];
    pfVar2 = *(float **)(in_ECX + 4);
    fVar11 = *pfVar2 - pfVar1[0xc];
    fVar12 = pfVar2[1] - pfVar1[0xd];
    fVar13 = pfVar2[2] - pfVar1[0xe];
    *(float *)(in_ECX + 0x20) = *pfVar1 * fVar11 + pfVar1[1] * fVar12 + pfVar1[2] * fVar13;
    *(float *)(in_ECX + 0x24) = fVar6 * fVar11 + fVar7 * fVar12 + fVar8 * fVar13;
    *(float *)(in_ECX + 0x28) = fVar3 * fVar11 + fVar4 * fVar12 + fVar5 * fVar13;
    *(float *)(in_ECX + 0x2c) = fVar3 * fVar11 + fVar4 * fVar12 + fVar5 * fVar13;
    fVar3 = pfVar1[8];
    fVar4 = pfVar1[9];
    fVar5 = pfVar1[10];
    fVar6 = pfVar1[4];
    fVar7 = pfVar1[5];
    fVar8 = pfVar1[6];
    fVar11 = *(float *)(iVar10 + 0x10) - pfVar1[0xc];
    fVar12 = *(float *)(iVar10 + 0x14) - pfVar1[0xd];
    fVar13 = *(float *)(iVar10 + 0x18) - pfVar1[0xe];
    *(float *)(in_ECX + 0x30) = *pfVar1 * fVar11 + pfVar1[1] * fVar12 + pfVar1[2] * fVar13;
    *(float *)(in_ECX + 0x34) = fVar6 * fVar11 + fVar7 * fVar12 + fVar8 * fVar13;
    *(float *)(in_ECX + 0x38) = fVar3 * fVar11 + fVar4 * fVar12 + fVar5 * fVar13;
    *(float *)(in_ECX + 0x3c) = fVar3 * fVar11 + fVar4 * fVar12 + fVar5 * fVar13;
    *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(iVar10 + 0x24);
    (**(code **)(*piStack_20 + 0x18))(in_ECX + 0x20,param_1,iStack_24);
    return (float10)*(float *)(iStack_24 + 4);
  }
  return (float10)*(float *)(iStack_24 + 4);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ba5e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7158;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a75e64;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba802c = _DAT_00ba802c + -1;
  local_4 = 0xffffffff;
  FUN_008aec30();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008ba650(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d718b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (undefined4 *)0x0) {
    iStack_4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xa0,0x2e,uVar1);
    *(undefined2 *)(iStack_4 + 4) = 0xa0;
    local_c = 0;
    uVar2 = FUN_008cdcb0(param_1 + 8,*param_1);
    local_c = -1;
    (**(code **)(*in_ECX + 0x4c))(uVar2);
    FUN_008bc730();
    (**(code **)(*in_ECX + 0x7c))(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008ba6f0(int param_1)

{
  undefined1 auStack_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_48;
  FUN_0089f580(param_1);
  FUN_0088d820(&local_40);
  *(undefined4 *)(param_1 + 0x20) = local_40;
  *(undefined4 *)(param_1 + 0x24) = uStack_3c;
  *(undefined4 *)(param_1 + 0x28) = uStack_38;
  *(undefined4 *)(param_1 + 0x2c) = uStack_34;
  *(undefined4 *)(param_1 + 0x30) = local_30;
  *(undefined4 *)(param_1 + 0x34) = uStack_2c;
  *(undefined4 *)(param_1 + 0x38) = uStack_28;
  *(undefined4 *)(param_1 + 0x3c) = uStack_24;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008ba750(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a559cc;
    puVar2[3] = 0;
    _DAT_00ba7d34 = _DAT_00ba7d34 + 1;
    *puVar2 = &PTR_FUN_00a55b9c;
    DAT_00ba7f5c = DAT_00ba7f5c + 1;
    *(undefined1 *)(puVar2 + 4) = 0;
    *puVar2 = &PTR_FUN_00a75e64;
    _DAT_00ba802c = _DAT_00ba802c + 1;
    *(undefined1 *)(puVar2 + 4) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008ba7f0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
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
    *puVar2 = &PTR_FUN_00a559cc;
    puVar2[3] = 0;
    _DAT_00ba7d34 = _DAT_00ba7d34 + 1;
    *puVar2 = &PTR_FUN_00a55b9c;
    DAT_00ba7f5c = DAT_00ba7f5c + 1;
    *(undefined1 *)(puVar2 + 4) = 0;
    *puVar2 = &PTR_FUN_00a75e64;
    _DAT_00ba802c = _DAT_00ba802c + 1;
    *(undefined1 *)(puVar2 + 4) = 0;
  }
  local_4 = 0xffffffff;
  FUN_0089f5d0(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_008ba8d0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_008aed00(param_1);
  param_1 = FUN_0070f910(DAT_00ba8030);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 FUN_008ba920(undefined1 *param_1)

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
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0x80000000;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
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
      FUN_008ba6f0(puVar2);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



void FUN_008ba9c0(void)

{
  int iVar1;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  *(undefined4 *)(iVar1 + 0x1a0) = 0;
  *(undefined4 *)(iVar1 + 0x1ac) = 0;
  *(undefined4 *)(iVar1 + 0x1a4) = 0;
  *(undefined4 *)(iVar1 + 0x1a8) = 0;
  return;
}



void FUN_008ba9f0(void)

{
  int iVar1;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  *(undefined4 *)(iVar1 + 0x1a4) = *(undefined4 *)(iVar1 + 0x1a0);
  return;
}



void FUN_008baa10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_FS_OFFSET;
  
  iVar3 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(*(int *)(iVar1 + _tls_index * 4) + 0x1a0);
  if (iVar2 != 0) {
    (**(code **)(*DAT_00ba7d98 + 4))(iVar2);
  }
  iVar1 = *(int *)(iVar1 + iVar3 * 4);
  *(undefined4 *)(iVar1 + 0x1a0) = 0;
  *(undefined4 *)(iVar1 + 0x1ac) = 0;
  *(undefined4 *)(iVar1 + 0x1a4) = 0;
  *(undefined4 *)(iVar1 + 0x1a8) = 0;
  return;
}



void FUN_008baa60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_FS_OFFSET;
  
  iVar3 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (param_1 != *(int *)(iVar2 + 0x1ac) - *(int *)(iVar2 + 0x1a0)) {
    if (*(int *)(iVar2 + 0x1a0) != 0) {
      (**(code **)(*DAT_00ba7d98 + 4))(*(int *)(iVar2 + 0x1a0));
    }
    uVar4 = (**(code **)*DAT_00ba7d98)(param_1,0x18);
    *(undefined4 *)(iVar2 + 0x1a0) = uVar4;
    iVar1 = *(int *)(iVar1 + iVar3 * 4);
    *(undefined4 *)(iVar1 + 0x1a4) = *(undefined4 *)(iVar1 + 0x1a0);
    param_1 = *(int *)(iVar1 + 0x1a0) + param_1;
    *(int *)(iVar1 + 0x1ac) = param_1;
    *(int *)(iVar1 + 0x1a8) = param_1 + -0x10;
  }
  return;
}



void FUN_008bab10(int param_1,int param_2)

{
  int *in_ECX;
  int iVar1;
  
  *(undefined1 *)(in_ECX + 4) = 1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_1;
  (**(code **)(**(int **)(*in_ECX + 8) + 0x10))();
  iVar1 = 0;
  if (0 < in_ECX[0x41]) {
    do {
      FUN_008f58b0(1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_ECX[0x41]);
  }
  return;
}



void FUN_008bab60(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  
  if (*(char *)(in_ECX + 0x10) != '\0') {
    iVar3 = 0;
    if (0 < *(int *)(in_ECX + 0x104)) {
      do {
        FUN_008f58a0();
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(in_ECX + 0x104));
    }
    *(undefined1 *)(in_ECX + 0x10) = 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x104)) {
    piVar4 = (int *)(in_ECX + 0x30);
    do {
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        piVar4[-1] = piVar4[-2];
      }
      else {
        iVar2 = piVar4[1];
        FUN_008b1890(piVar4[-2],iVar1,iVar2 - iVar1);
        piVar4[-1] = piVar4[-2] + (iVar2 - iVar1);
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 10;
    } while (iVar3 < *(int *)(in_ECX + 0x104));
  }
  return;
}



void FUN_008babf0(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  FUN_008bab60();
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x104)) {
    iVar2 = in_ECX + 0x24;
    do {
      *(undefined1 *)(iVar2 + -4) = 1;
      FUN_008f58b0(1);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x28;
    } while (iVar1 < *(int *)(in_ECX + 0x104));
  }
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x104)) {
    do {
      FUN_008f58a0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x104));
  }
  return;
}



void FUN_008bac50(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  FUN_008f5870(0,6);
  puVar2 = in_ECX + 5;
  iVar1 = 6;
  do {
    FUN_008f5870(0,1);
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    puVar2[2] = 0xffffffff;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  in_ECX[0x41] = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  *in_ECX = 0;
  in_ECX[1] = 0x3c888889;
  return;
}



void FUN_008bacc0(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  int iVar2;
  
  puVar1 = (undefined4 *)*in_ECX;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  FUN_008babf0();
  iVar2 = 6;
  do {
    FUN_008f5890();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_008f5890();
  return;
}



void FUN_008bad50(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[8]) {
    FUN_008a75d0(in_ECX[6],in_ECX[8] & 0x3fffffff,0x14);
  }
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],in_ECX[5] << 2,0x14);
  }
  if (-1 < (int)in_ECX[2]) {
    FUN_008a75d0(*in_ECX,(in_ECX[2] & 0x3fffffff) * 0x18,0x14);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_008badf0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_FS_OFFSET;
  int iStack_360;
  undefined1 local_350 [828];
  undefined4 local_14;
  
  iVar1 = *param_1;
  local_14 = DAT_00b30aac;
  FUN_008a72a0(DAT_00ba7d98,0x10);
  FUN_008bb000(local_350);
  uVar2 = (**(code **)*DAT_00ba7d98)(2000000,1);
  FUN_008a7220(uVar2,2000000);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  FUN_008f58a0();
  if ((char)param_1[3] == '\0') {
    iStack_360 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    do {
      FUN_008ba9f0();
      *(undefined4 *)(iStack_360 + 0x1b4) = 1;
      FUN_00898c90(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 4));
      *(undefined4 *)(iStack_360 + 0x1b4) = 0;
      param_1[7] = *(int *)(iStack_360 + 0x1a0);
      param_1[8] = *(int *)(iStack_360 + 0x1a4);
      FUN_008f58b0(1);
      FUN_008f58a0();
    } while ((char)param_1[3] == '\0');
  }
  (**(code **)(*DAT_00ba7d98 + 4))(param_1[5]);
  iVar1 = param_1[9];
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (iVar1 != 0) {
    FUN_008bad50();
    (**(code **)(*DAT_00ba7d98 + 0x14))(iVar1,0x28,0x18);
  }
  param_1[9] = 0;
  FUN_008a7220(0,0);
  (**(code **)(*DAT_00ba7d98 + 4))(iStack_360);
  FUN_008bb020();
  FUN_008f58b0(1);
  FUN_008a7200();
  return 0;
}



void FUN_008baf70(undefined4 param_1,int param_2)

{
  int *lpParameter;
  HANDLE pvVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  *in_ECX = param_1;
  if (6 < param_2) {
    param_2 = 6;
  }
  iVar2 = 0;
  if (0 < param_2) {
    do {
      lpParameter = in_ECX + in_ECX[0x41] * 10 + 5;
      in_ECX[0x41] = in_ECX[0x41] + 1;
      *lpParameter = (int)in_ECX;
      lpParameter[2] = iVar2;
      pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_008badf0,lpParameter,0,(LPDWORD)0x0);
      iVar2 = iVar2 + 1;
      lpParameter[1] = (int)pvVar1;
    } while (iVar2 < param_2);
  }
  return;
}



void FUN_008bafd0(int param_1,undefined4 param_2)

{
  FUN_008bac50();
  if (*(short *)(param_1 + 4) != 0) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  FUN_008baf70(param_1,param_2);
  return;
}



undefined4 FUN_008bb000(undefined4 param_1)

{
  FUN_008a7260(param_1);
  FUN_008ba9c0();
  return 0;
}



undefined4 FUN_008bb020(void)

{
  int *piVar1;
  int unaff_FS_OFFSET;
  
  FUN_008baa10();
  piVar1 = *(int **)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x19c);
  if (piVar1 == (int *)0x0) {
    piVar1 = DAT_00ba7d9c;
  }
  (**(code **)(*piVar1 + 4))();
  FUN_008a7260(0);
  return 0;
}



void FUN_008bb120(char *param_1)

{
  FILE *pFVar1;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0xffffffff;
  *in_ECX = &PTR_FUN_00a98274;
  *(undefined1 *)(in_ECX + 4) = 1;
  pFVar1 = _fopen(param_1,"rb");
  in_ECX[3] = pFVar1;
  *(bool *)(in_ECX + 4) = pFVar1 != (FILE *)0x0;
  return;
}



bool FUN_008bb160(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x28))();
  in_ECX[2] = iVar1;
  return iVar1 == -1;
}



void FUN_008bb200(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a98274;
  if ((FILE *)in_ECX[3] != (FILE *)0x0) {
    _fclose((FILE *)in_ECX[3]);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008bb2b0(char *param_1)

{
  FILE *pFVar1;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a982a0;
  *(undefined1 *)(in_ECX + 3) = 1;
  pFVar1 = _fopen(param_1,"wb");
  in_ECX[2] = pFVar1;
  return;
}



void FUN_008bb320(void)

{
  int in_ECX;
  
  if ((*(FILE **)(in_ECX + 8) != (FILE *)0x0) && (*(char *)(in_ECX + 0xc) != '\0')) {
    _fclose(*(FILE **)(in_ECX + 8));
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  return;
}



void FUN_008bb3b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a982a0;
  FUN_008bb320();
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008bb420(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int local_c;
  uint local_8;
  uint local_4;
  
  piVar4 = (int *)&DAT_00ba8188;
  local_c = 0;
  local_8 = 0;
  local_4 = 0x80000000;
  puVar3 = DAT_00ba8188;
  if (DAT_00ba8188 != (undefined4 *)0x0) {
    do {
      if (*(int *)puVar3[2] == 0) {
        iVar2 = (*(code *)*puVar3)();
        if (iVar2 != 0) {
          *(int *)puVar3[2] = iVar2;
          goto LAB_008bb45e;
        }
        if (local_8 == (local_4 & 0x3fffffff)) {
          FUN_008a6ee0(&local_c,4);
        }
        *(undefined4 **)(local_c + local_8 * 4) = puVar3;
        local_8 = local_8 + 1;
        puVar3 = (undefined4 *)puVar3[1];
        *(undefined4 *)(*piVar4 + 4) = 0;
        *piVar4 = (int)puVar3;
      }
      else {
LAB_008bb45e:
        piVar4 = puVar3 + 1;
        puVar3 = (undefined4 *)*piVar4;
      }
    } while (puVar3 != (undefined4 *)0x0);
    while (uVar1 = local_8, local_8 != 0) {
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        puVar3 = *(undefined4 **)(local_c + uVar1 * 4);
        iVar2 = (*(code *)*puVar3)();
        if (iVar2 != 0) {
          *(int *)puVar3[2] = iVar2;
          *piVar4 = (int)puVar3;
          local_8 = local_8 - 1;
          piVar4 = puVar3 + 1;
          *(undefined4 *)(local_c + uVar1 * 4) = *(undefined4 *)(local_c + local_8 * 4);
        }
      }
    }
  }
  local_8 = 0;
  if (-1 < (int)local_4) {
    FUN_008a75d0(local_c,local_4 << 2,0x14);
  }
  return;
}



void FUN_008bb560(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a982c0;
  FUN_008b0e10();
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0x80000000;
  in_ECX[8] = param_1;
  in_ECX[9] = param_2;
  return;
}



void FUN_008bb600(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *in_ECX;
  int unaff_EBX;
  undefined4 uVar4;
  
  uVar2 = param_2;
  pcVar3 = (char *)(**(code **)(*in_ECX + 0x10))(&param_2,param_2);
  if (*pcVar3 == '\0') {
    return;
  }
  pcVar3 = "";
  uVar4 = 0;
  switch(unaff_EBX) {
  case 0:
    pcVar3 = "Report";
    break;
  case 1:
    pcVar3 = "Warning";
    break;
  case 2:
    pcVar3 = "Assert";
    goto LAB_008bb64f;
  case 3:
    pcVar3 = "Error";
LAB_008bb64f:
    uVar4 = 1;
  }
  FUN_008bb6a0(pcVar3,uVar2,param_1,param_2,param_3,uVar4);
  if ((unaff_EBX != 2) && (unaff_EBX != 3)) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008bb6a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,char param_6)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [72];
  undefined1 local_210 [12];
  undefined1 local_204 [512];
  undefined4 local_4;
  
  local_4 = DAT_00b30aac;
  if ((param_2 == -1) && (*(int *)(in_ECX + 0x18) != 0)) {
    param_2 = *(int *)(*(int *)(in_ECX + 0x14) + -4 + *(int *)(in_ECX + 0x18) * 4);
  }
  FUN_008b1750(local_210,&DAT_00a98308,param_2);
  FUN_008bbfb0(local_204,0x200,1);
  puVar7 = &DAT_00a98304;
  puVar6 = &DAT_00a982fc;
  puVar5 = &DAT_00a71e50;
  puVar4 = local_210;
  puVar3 = &DAT_00a982f4;
  uVar2 = 0x28;
  FUN_008bbdb0(param_4);
  FUN_008bbd90(uVar2);
  FUN_008bbe00(param_5);
  FUN_008bbdb0(puVar3);
  FUN_008bbdb0(puVar4);
  FUN_008bbdb0(puVar5);
  FUN_008bbdb0(param_1);
  FUN_008bbdb0(puVar6);
  FUN_008bbdb0(param_3);
  FUN_008bbdb0(puVar7);
  (**(code **)(in_ECX + 0x20))(local_204,*(undefined4 *)(in_ECX + 0x24));
  if (param_6 != '\0') {
    FUN_008f61a0();
    iVar1 = FUN_008f6190(auStack_260,0x14);
    if (2 < iVar1) {
      (**(code **)(in_ECX + 0x20))("Stack trace is:\n",*(undefined4 *)(in_ECX + 0x24));
      FUN_008f6010(auStack_258,iVar1 + -2,*(undefined4 *)(in_ECX + 0x20),
                   *(undefined4 *)(in_ECX + 0x24));
    }
    FUN_008f5fa0();
  }
  FUN_008bc000();
  return;
}



void FUN_008bb870(byte param_1)

{
  FUN_008bb8a0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008bb8a0(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[7]) {
    FUN_008a75d0(in_ECX[5],in_ECX[7] << 2,0x14);
  }
  FUN_008b0e60();
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



int FUN_008bb8f0(LPCSTR param_1,int param_2)

{
  LPCSTR lpOutputString;
  LPCSTR pCVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_1[param_2 + -1] == '\0') {
    OutputDebugStringA(param_1);
    _printf("%s",param_1);
    return param_2;
  }
  uVar3 = param_2 + 1;
  uVar5 = 0x14;
  uVar4 = uVar3;
  FUN_004bfc80(uVar3,0x14);
  lpOutputString = (LPCSTR)FUN_008a7560(uVar4,uVar5);
  if (0 < param_2) {
    pCVar1 = lpOutputString;
    iVar2 = param_2;
    do {
      *pCVar1 = pCVar1[(int)param_1 - (int)lpOutputString];
      pCVar1 = pCVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  lpOutputString[param_2] = '\0';
  OutputDebugStringA(lpOutputString);
  _printf("%s",lpOutputString);
  if (-1 < (int)uVar3) {
    uVar5 = 0x14;
    uVar3 = uVar3 & 0x3fffffff;
    FUN_004bfc80(lpOutputString,uVar3,0x14);
    FUN_008a75d0(lpOutputString,uVar3,uVar5);
  }
  return param_2;
}



void FUN_008bb990(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *local_20c;
  uint local_208;
  uint local_204;
  undefined1 local_200 [512];
  
  local_20c = local_200;
  local_208 = 0;
  local_204 = 0x80000080;
  for (iVar2 = DAT_00ba8188; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    if (local_208 == (local_204 & 0x3fffffff)) {
      FUN_008a6ee0(&local_20c,4);
    }
    *(int *)(local_20c + local_208 * 4) = iVar2;
    local_208 = local_208 + 1;
  }
  iVar2 = local_208 - 1;
  while (-1 < iVar2) {
    puVar1 = (undefined4 *)**(int **)(*(int *)(local_20c + iVar2 * 4) + 8);
    if ((*(short *)(puVar1 + 1) != 0) &&
       (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
       *(short *)((int)puVar1 + 6) == 0)) {
      (**(code **)*puVar1)(1);
    }
    iVar2 = iVar2 + -1;
    **(undefined4 **)(*(int *)(local_20c + iVar2 * 4 + 4) + 8) = 0;
  }
  if (-1 < (int)local_204) {
    FUN_008a75d0(local_20c,local_204 << 2,0x14);
  }
  return;
}



undefined4 FUN_008bba80(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  
  if (DAT_00ba8040 == '\0') {
    FUN_008ba9c0();
    if (param_1 == 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    FUN_008a70f0(param_1);
    if (param_2 == 0) {
      iVar2 = FUN_00401f00(0x330);
      if (iVar2 == 0) {
        param_2 = 0;
      }
      else {
        param_2 = FUN_008a72a0(param_1,0);
      }
    }
    FUN_008a7260(param_2);
    FUN_008ba9c0();
    iVar2 = FUN_00401f00(0x330);
    if (iVar2 == 0) {
      DAT_00ba7d9c = 0;
    }
    else {
      DAT_00ba7d9c = FUN_008a72a0(param_1,0);
    }
    puVar3 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(8,0x15);
    *(undefined2 *)(puVar3 + 1) = 8;
    *(undefined2 *)((int)puVar3 + 6) = 1;
    *puVar3 = &PTR_LAB_00a98240;
    FUN_00534070(puVar3);
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x28,0x15);
    *(undefined2 *)(iVar2 + 4) = 0x28;
    uVar4 = FUN_008bb560(unaff_ESI,unaff_retaddr);
    FUN_00534020(uVar4);
    FUN_008bb420();
    (**(code **)(*DAT_00ba803c + 8))();
    DAT_00ba8040 = '\x01';
  }
  return 0;
}



undefined4 FUN_008bbb90(void)

{
  undefined4 *puVar1;
  short *psVar2;
  int *piVar3;
  int unaff_FS_OFFSET;
  
  if (DAT_00ba8040 == '\x01') {
    FUN_008bb990();
    puVar1 = DAT_00ba7fb0;
    if ((DAT_00ba7fb0 != (undefined4 *)0x0) && (*(short *)(DAT_00ba7fb0 + 1) != 0)) {
      psVar2 = (short *)((int)DAT_00ba7fb0 + 6);
      *psVar2 = *psVar2 + -1;
      if (*psVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    puVar1 = DAT_00ba7fb4;
    DAT_00ba7fb0 = (undefined4 *)0x0;
    if ((DAT_00ba7fb4 != (undefined4 *)0x0) && (*(short *)(DAT_00ba7fb4 + 1) != 0)) {
      psVar2 = (short *)((int)DAT_00ba7fb4 + 6);
      *psVar2 = *psVar2 + -1;
      if (*psVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    DAT_00ba7fb4 = (undefined4 *)0x0;
    FUN_008baa10();
    piVar3 = *(int **)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x19c);
    if (piVar3 == (int *)0x0) {
      piVar3 = DAT_00ba7d9c;
    }
    (**(code **)(*piVar3 + 4))();
    FUN_008a7260(0);
    if (DAT_00ba7d9c != (int *)0x0) {
      (**(code **)(*DAT_00ba7d9c + 4))();
      FUN_008a7210();
    }
    FUN_008a70f0(0);
    DAT_00ba8040 = '\0';
  }
  return 0;
}



void FUN_008bbc60(uint param_1)

{
  uint extraout_ECX;
  uint uVar1;
  
  uVar1 = param_1;
  FUN_0090b980(param_1);
  FUN_0090b8f0(param_1);
  FUN_0090a720(param_1);
  FUN_008da3e0(uVar1 & 0xffffff00);
  FUN_00909560(param_1);
  FUN_00906400(param_1);
  FUN_008f7180(param_1);
  FUN_00905fd0(param_1);
  FUN_008da3e0(1);
  FUN_008da3e0(extraout_ECX & 0xffffff00);
  FUN_00905e50(param_1);
  FUN_008da3e0(1);
  uVar1 = param_1;
  FUN_00904da0(param_1);
  FUN_00903ee0(param_1);
  FUN_008da3e0(uVar1 & 0xffffff00);
  FUN_00903c90(param_1);
  FUN_008da3e0(1);
  FUN_009029a0(param_1);
  FUN_008f7210(param_1);
  FUN_00901a80(param_1);
  FUN_008ffc20(param_1);
  FUN_008ffb30(param_1,1,1);
  FUN_008fefd0(param_1);
  FUN_008fe230(param_1);
  FUN_008fd9c0(param_1);
  FUN_008fd680(param_1);
  FUN_008fce90(param_1);
  FUN_008fc130(param_1);
  FUN_008ffb30(param_1,6,4);
  FUN_008ffb30(param_1,4,6);
  FUN_008fb650(param_1);
  FUN_008fa950(param_1);
  FUN_008fa040(param_1);
  FUN_008f9250(param_1);
  FUN_008f8c90(param_1);
  FUN_008f7f60(param_1);
  FUN_008f72a0(param_1);
  return;
}



void FUN_008bbd90(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 8) + 0xc))(&stack0x00000004,1);
  return;
}



void FUN_008bbdb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    iVar1 = **(int **)(in_ECX + 8);
    uVar2 = FUN_008b1860(param_1);
    (**(code **)(iVar1 + 0xc))(param_1,uVar2);
    return;
  }
  (**(code **)(**(int **)(in_ECX + 8) + 0xc))("(null)",6);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008bbe00(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_404 [1024];
  undefined4 local_4;
  
  local_4 = DAT_00b30aac;
  FUN_008b1730(local_404,0x400,&DAT_00a300d4,param_1);
  iVar1 = **(int **)(in_ECX + 8);
  uVar2 = FUN_008b1860(local_404);
  (**(code **)(iVar1 + 0xc))(local_404,uVar2);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008bbe70(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_404 [1024];
  undefined4 local_4;
  
  local_4 = DAT_00b30aac;
  FUN_008b1730(local_404,0x400,&DAT_00a4051c,param_1);
  iVar1 = **(int **)(in_ECX + 8);
  uVar2 = FUN_008b1860(local_404);
  (**(code **)(iVar1 + 0xc))(local_404,uVar2);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008bbee0(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char local_404 [1024];
  undefined4 local_4;
  
  local_4 = DAT_00b30aac;
  __vsnprintf(local_404,0x400,param_2,&stack0x0000000c);
  iVar1 = **(int **)(param_1 + 8);
  uVar2 = FUN_008b1860(local_404);
  (**(code **)(iVar1 + 0xc))(local_404,uVar2);
  return;
}



void FUN_008bbf50(int param_1)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a98328;
  in_ECX[2] = param_1;
  if (*(short *)(param_1 + 4) != 0) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  return;
}



void FUN_008bbf80(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a98328;
  uVar1 = (**(code **)(*DAT_00ba7fb4 + 0x10))(param_1);
  in_ECX[2] = uVar1;
  return;
}



void FUN_008bbfb0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a98328;
  iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x1c,0x17);
  *(undefined2 *)(iVar1 + 4) = 0x1c;
  uVar2 = FUN_008f5e50(unaff_ESI,unaff_retaddr,param_1);
  in_ECX[2] = uVar2;
  return;
}



void FUN_008bc000(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[2];
  *in_ECX = &PTR_FUN_00a98328;
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008bc030(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a98330;
  in_ECX[2] = param_1;
  in_ECX[3] = *(undefined4 *)(param_1 + 4);
  in_ECX[4] = param_2;
  iVar2 = *(int *)(param_1 + 4) + 1;
  uVar3 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar1 = uVar3 * 2;
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_008a6e40(param_1,iVar2,1);
  }
  *(undefined1 *)(((int *)in_ECX[2])[1] + *(int *)in_ECX[2]) = 0;
  return;
}



void FUN_008bc0a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  *(undefined4 *)(*(int *)(in_ECX + 8) + 4) = 0;
  iVar1 = *(int *)(in_ECX + 8);
  *(undefined4 *)(in_ECX + 0xc) = 0;
  iVar3 = *(int *)(iVar1 + 4) + 1;
  uVar4 = *(uint *)(iVar1 + 8) & 0x3fffffff;
  if ((int)uVar4 < iVar3) {
    iVar2 = uVar4 * 2;
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    FUN_008a6e40(iVar1,iVar3,1);
  }
  *(undefined1 *)((*(int **)(in_ECX + 8))[1] + **(int **)(in_ECX + 8)) = 0;
  return;
}



int FUN_008bc0f0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  piVar1 = *(int **)(in_ECX + 8);
  iVar2 = piVar1[1];
  iVar4 = iVar2 - *(int *)(in_ECX + 0xc);
  if (iVar4 < param_2) {
    iVar4 = (iVar2 - iVar4) + param_2;
    iVar2 = iVar4 + 1;
    if ((int)(piVar1[2] & 0x3fffffffU) < iVar2) {
      iVar3 = (piVar1[2] & 0x3fffffffU) * 2;
      if (iVar3 <= iVar2) {
        iVar3 = iVar2;
      }
      FUN_008a6e40(piVar1,iVar3,1);
    }
    *(int *)(*(int *)(in_ECX + 8) + 4) = iVar4;
    *(undefined1 *)(iVar4 + **(int **)(in_ECX + 8)) = 0;
  }
  else if (iVar2 < (int)(piVar1[2] & 0x3fffffffU)) {
    *(undefined1 *)(iVar2 + *piVar1) = 0;
  }
  FUN_008b1890(**(int **)(in_ECX + 8) + *(int *)(in_ECX + 0xc),param_1,param_2);
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + param_2;
  return param_2;
}



undefined4 FUN_008bc180(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  
  iVar5 = param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar5 = *(int *)(in_ECX + 0xc) + param_1;
    }
    else {
      iVar5 = *(int *)(in_ECX + 0xc);
      if (param_2 == 2) {
        iVar5 = *(int *)(*(int *)(in_ECX + 8) + 4) - param_1;
      }
    }
  }
  if (-1 < iVar5) {
    piVar2 = *(int **)(in_ECX + 8);
    iVar4 = piVar2[1];
    if (iVar4 < iVar5) {
      iVar1 = iVar5 + 1;
      if (iVar4 < iVar1) {
        if ((int)(piVar2[2] & 0x3fffffffU) < iVar1) {
          iVar3 = (piVar2[2] & 0x3fffffffU) * 2;
          if (iVar3 <= iVar1) {
            iVar3 = iVar1;
          }
          FUN_008a6e40(piVar2,iVar3,1);
        }
        for (; iVar4 < iVar1; iVar4 = iVar4 + 1) {
          *(undefined1 *)(iVar4 + *piVar2) = 0;
        }
      }
      piVar2[1] = iVar1;
      *(int *)(*(int *)(in_ECX + 8) + 4) = iVar5;
    }
    *(int *)(in_ECX + 0xc) = iVar5;
    return 0;
  }
  return 1;
}



void FUN_008bc220(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[2];
  *in_ECX = &PTR_FUN_00a98328;
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
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



void FUN_008bc270(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined4 unaff_ESI;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a98328;
  iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x14,0x17);
  *(undefined2 *)(iVar1 + 4) = 0x14;
  uVar2 = FUN_008bc030(unaff_ESI,1);
  in_ECX[2] = uVar2;
  return;
}



void FUN_008bc2b0(byte param_1)

{
  FUN_008bc2e0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008bc2e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a98330;
  if ((in_ECX[4] == 0) && (in_ECX[2] != 0)) {
    FUN_008bc310(1);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008bc310(byte param_1)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[2]) {
    FUN_008a75d0(*in_ECX,in_ECX[2] & 0x3fffffff,0x14);
  }
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008bc370(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  *in_ECX = &PTR_FUN_00a98360;
  if (0 < (int)in_ECX[2]) {
    do {
      puVar1 = *(undefined4 **)(in_ECX[1] + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)in_ECX[2]);
  }
  if (-1 < (int)in_ECX[3]) {
    FUN_008a75d0(in_ECX[1],in_ECX[3] << 2,0x14);
  }
  *in_ECX = &PTR_LAB_00a99b50;
  return;
}



void FUN_008bc520(byte param_1)

{
  FUN_008bc370();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008bc540(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5
                 )

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 unaff_retaddr;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined **ppuStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  if (param_4 != 0) {
    uStack_2c = 6;
    uStack_30 = 0x6c;
    if (param_5 == '\0') {
      iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))();
      *(undefined2 *)(iVar1 + 4) = 0x6c;
      piVar2 = (int *)FUN_0090d430();
    }
    else {
      iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))();
      *(undefined2 *)(iVar1 + 4) = 0x6c;
      piVar2 = (int *)FUN_0090d7d0();
    }
    ppuStack_18 = &PTR_FUN_00a98360;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0x80000000;
    (**(code **)(*piVar2 + 0xc))(unaff_retaddr,param_1,&ppuStack_18);
    uStack_30 = 0;
    FUN_0090bb90();
    uStack_4 = 0x70616e73;
    uStack_30 = 0x70616e73;
    if (param_1 != (undefined1 *)0x0) {
      puVar3 = (undefined4 *)FUN_0090bba0(param_1);
      uStack_2c = *puVar3;
    }
    iVar1 = (**(code **)(*piVar2 + 0x10))(param_4,&uStack_30);
    if (((short)piVar2[1] != 0) &&
       (*(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1,
       *(short *)((int)piVar2 + 6) == 0)) {
      (**(code **)*piVar2)(1);
    }
    FUN_008bc370();
    *(char *)ppuStack_18 = '\x01' - (iVar1 != 0);
    return;
  }
  *param_1 = 0;
  return;
}



undefined4
FUN_008bc660(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char **local_14;
  undefined4 local_10;
  char *local_c;
  undefined4 local_8;
  undefined *local_4;
  
  local_8 = param_2;
  local_14 = &local_c;
  local_c = "SnapshotSave";
  local_4 = &DAT_00ba82d8;
  local_10 = 1;
  FUN_008bc540(param_1,&local_14,&DAT_00ba8320,param_3,param_4,param_5);
  return param_1;
}



undefined4
FUN_008bc6c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 local_18 [24];
  
  FUN_0090f080();
  FUN_0090f0b0(param_2);
  FUN_008bc660(param_1,local_18,param_3,param_4,param_5);
  FUN_0090f130();
  return param_1;
}



void FUN_008bc720(void)

{
  int in_ECX;
  
  if (*(short *)(in_ECX + 4) != 0) {
    *(short *)(in_ECX + 6) = *(short *)(in_ECX + 6) + 1;
  }
  return;
}



void FUN_008bc730(void)

{
  undefined4 *in_ECX;
  
  if ((*(short *)(in_ECX + 1) != 0) &&
     (*(short *)((int)in_ECX + 6) = *(short *)((int)in_ECX + 6) + -1,
     *(short *)((int)in_ECX + 6) == 0)) {
    (**(code **)*in_ECX)(1);
  }
  return;
}



void FUN_008bc750(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x48)) {
    piVar2 = *(int **)(in_ECX + 0x44);
    do {
      if (*piVar2 == param_1) {
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 < *(int *)(in_ECX + 0x48));
  }
  if (*(uint *)(in_ECX + 0x48) == (*(uint *)(in_ECX + 0x4c) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x44),0x10);
  }
  piVar2 = (int *)(*(int *)(in_ECX + 0x48) * 0x10 + *(int *)(in_ECX + 0x44));
  *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + 1;
  piVar2[2] = param_2;
  piVar2[3] = param_3;
  *piVar2 = param_1;
  return;
}



void FUN_008bc7b0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x48)) {
    piVar1 = *(int **)(in_ECX + 0x44);
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_2) {
        iVar7 = iVar4 * 0x10;
        iVar2 = piVar1[iVar4 * 4 + 2];
        iVar3 = piVar1[iVar4 * 4 + 3];
        iVar8 = *(int *)(in_ECX + 0x48) + -1;
        *(int *)(in_ECX + 0x48) = iVar8;
        if (iVar4 < iVar8) {
          do {
            puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x44) + iVar7);
            *puVar5 = puVar5[4];
            puVar5[1] = puVar5[5];
            puVar5[2] = puVar5[6];
            puVar5[3] = puVar5[7];
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 0x10;
          } while (iVar4 < *(int *)(in_ECX + 0x48));
        }
        *param_1 = iVar2;
        param_1[1] = iVar3;
        return;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar4 < *(int *)(in_ECX + 0x48));
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



void FUN_008bc870(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 8))("Shape",1,*(undefined4 *)(in_ECX + 0x14));
  if (-1 < *(int *)(in_ECX + 0x40)) {
    (**(code **)(*param_1 + 4))
              ("CollAgtPtr",8,*(undefined4 *)(in_ECX + 0x38),*(int *)(in_ECX + 0x3c) << 3,
               *(int *)(in_ECX + 0x40) << 3);
  }
  if (-1 < *(int *)(in_ECX + 0x4c)) {
    (**(code **)(*param_1 + 4))
              ("Properties",4,*(undefined4 *)(in_ECX + 0x44),*(int *)(in_ECX + 0x48) << 4,
               *(int *)(in_ECX + 0x4c) << 4);
  }
  return;
}



void FUN_008bc8f0(int param_1,undefined1 param_2)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a97598;
  piVar1 = in_ECX + 5;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *piVar1 = param_1;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[6] = 0xffffffff;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 0xb) = param_2;
  in_ECX[10] = 0;
  in_ECX[0xc] = 0;
  *(undefined1 *)((int)in_ECX + 0x2d) = 0x7f;
  *(char *)((int)in_ECX + 0x2d) = (char)piVar1 - (char)(in_ECX + 10);
  in_ECX[0x10] = 0x80000000;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x13] = 0x80000000;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[9] = (int)in_ECX - (int)piVar1;
  if ((param_1 != 0) && (*(short *)(param_1 + 4) != 0)) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  return;
}



void FUN_008bc990(undefined4 param_1)

{
  FUN_00721610(param_1);
  FUN_00712ae0();
  return;
}



undefined1 FUN_008bc9b0(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  undefined1 uVar3;
  int in_ECX;
  uint uVar4;
  
  uVar3 = FUN_00731e60(param_1);
  uVar1 = *(uint *)(in_ECX + 0x1c);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x10) + uVar4 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x24))(param_1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return uVar3;
}



void FUN_008bca30(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  LONG LVar8;
  uint *puVar9;
  int in_ECX;
  uint uVar10;
  uint *puVar11;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d71cb;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != *(uint *)(in_ECX + 8)) {
    uVar10 = param_1;
    if (param_1 < *(uint *)(in_ECX + 0xc)) {
      do {
        piVar1 = (int *)(*(int *)(in_ECX + 4) + uVar10 * 4);
        if (*piVar1 != 0) {
          puVar3 = (undefined4 *)*piVar1;
          local_4 = 0;
          if (puVar3 != (undefined4 *)0x0) {
            LVar8 = InterlockedDecrement(puVar3 + 1);
            if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
              (**(code **)*puVar3)(1);
            }
            *piVar1 = 0;
          }
          *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(in_ECX + 0xc));
      *(uint *)(in_ECX + 0xc) = param_1;
    }
    local_4 = 0xffffffff;
    pvVar4 = *(void **)(in_ECX + 4);
    *(uint *)(in_ECX + 8) = param_1;
    if (param_1 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      uVar10 = -(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 4);
      puVar9 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar10) | uVar10 + 4,uVar7);
      local_4 = 1;
      if (puVar9 == (uint *)0x0) {
        puVar11 = (uint *)0x0;
      }
      else {
        puVar11 = puVar9 + 1;
        *puVar9 = param_1;
        _eh_vector_constructor_iterator_(puVar11,4,param_1,FUN_007c88a0,FUN_007016a0);
      }
      local_4 = 0xffffffff;
      *(uint **)(in_ECX + 4) = puVar11;
      param_1 = 0;
      if (*(int *)(in_ECX + 0xc) != 0) {
        do {
          iVar5 = *(int *)(in_ECX + 4);
          iVar2 = param_1 * 4;
          puVar3 = *(undefined4 **)(iVar5 + iVar2);
          if (puVar3 != *(undefined4 **)(iVar2 + (int)pvVar4)) {
            if (((puVar3 != (undefined4 *)0x0) &&
                (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
               (puVar3 != (undefined4 *)0x0)) {
              (**(code **)*puVar3)(1);
            }
            iVar6 = *(int *)(iVar2 + (int)pvVar4);
            *(int *)(iVar5 + iVar2) = iVar6;
            if (iVar6 != 0) {
              InterlockedIncrement((LONG *)(iVar6 + 4));
            }
          }
          param_1 = param_1 + 1;
        } while (param_1 < *(uint *)(in_ECX + 0xc));
      }
      uVar7 = *(uint *)(in_ECX + 0xc);
      if (uVar7 < *(uint *)(in_ECX + 8)) {
        do {
          iVar2 = *(int *)(in_ECX + 4);
          puVar3 = *(undefined4 **)(iVar2 + uVar7 * 4);
          local_4 = 2;
          if (puVar3 != (undefined4 *)0x0) {
            LVar8 = InterlockedDecrement(puVar3 + 1);
            if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
              (**(code **)*puVar3)(1);
            }
            *(undefined4 *)(iVar2 + uVar7 * 4) = 0;
          }
          uVar7 = uVar7 + 1;
          local_4 = 0xffffffff;
        } while (uVar7 < *(uint *)(in_ECX + 8));
      }
    }
    if (pvVar4 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar4,4,*(int *)((int)pvVar4 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar4 + -4);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008bcc50(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7c98;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    do {
      iVar1 = *(int *)(in_ECX + 4);
      puVar2 = *(undefined4 **)(iVar1 + uVar5 * 4);
      local_4 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(puVar2 + 1);
        if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1,uVar3);
        }
        *(undefined4 *)(iVar1 + uVar5 * 4) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008bccf0(byte param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  pvVar1 = (void *)in_ECX[1];
  *in_ECX = &PTR_FUN_00a98398;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008bcd40(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  
  if (param_1 < *(uint *)(in_ECX + 0xc)) {
    if (*param_2 == 0) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != 0) {
        *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == 0) {
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
    }
  }
  else {
    *(uint *)(in_ECX + 0xc) = param_1 + 1;
    if (*param_2 != 0) {
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
    }
  }
  iVar1 = *(int *)(in_ECX + 4);
  puVar2 = *(undefined4 **)(iVar1 + param_1 * 4);
  if (puVar2 != (undefined4 *)*param_2) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    iVar3 = *param_2;
    *(int *)(iVar1 + param_1 * 4) = iVar3;
    if (iVar3 != 0) {
      InterlockedIncrement((LONG *)(iVar3 + 4));
    }
  }
  return;
}



void FUN_008bcde0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7203;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00721350(uVar1);
  *in_ECX = &PTR_FUN_00a983a4;
  in_ECX[3] = &PTR_FUN_00a98398;
  in_ECX[5] = 0;
  in_ECX[8] = 1;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[4] = 0;
  local_4 = 2;
  FUN_00721440(&DAT_00a98390);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008bce70(void)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009d7233;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a983a4;
  local_4 = 1;
  FUN_008bcc50(uVar2);
  in_ECX[3] = &PTR_FUN_00a98398;
  pvVar1 = (void *)in_ECX[4];
  local_4 = local_4 & 0xffffff00;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_00721410();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_008bcf80(void)

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
  iVar2 = FUN_00401f00(0x24,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_008bcde0();
  }
  local_4 = 0xffffffff;
  FUN_00721440(0);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_008bcff0(byte param_1)

{
  FUN_008bce70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008bd010(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  
  iVar2 = param_1;
  FUN_00721730(param_1);
  param_1 = FUN_0070f910(DAT_00ba8044);
  uVar3 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  uVar3 = *(uint *)(in_ECX + 0x1c);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x10) + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x30))(iVar2);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}



void FUN_008bd090(undefined4 *param_1)

{
  LONG *lpAddend;
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf808;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (undefined4 *)0x0) {
    lpAddend = param_1 + 1;
    InterlockedIncrement(lpAddend);
    uVar1 = *(uint *)(in_ECX + 0x18);
    local_4 = 0;
    if (*(uint *)(in_ECX + 0x14) <= uVar1) {
      FUN_008bca30(*(int *)(in_ECX + 0x20) + uVar1);
    }
    FUN_008bcd40(uVar1,&param_1);
    local_4 = 0xffffffff;
    LVar4 = InterlockedDecrement(lpAddend);
    if (LVar4 == 0) {
      (**(code **)*puVar2)(1,uVar3);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008bd130(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  
  FUN_007214a0(param_1,param_2);
  uVar1 = *(uint *)(in_ECX + 0x1c);
  FUN_008bca30(uVar1);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x10) + uVar4 * 4);
      uVar3 = 0;
      if (piVar2 != (int *)0x0) {
        uVar3 = (**(code **)(*piVar2 + 0x18))(param_2);
      }
      FUN_008bd090(uVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}



void FUN_008bd190(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00721550(param_1);
  for (iVar1 = FUN_007124d0(); iVar1 != 0; iVar1 = iVar1 + -1) {
    iVar2 = FUN_007124a0();
    if (iVar2 != 0) {
      FUN_008bd090(iVar2);
    }
  }
  return;
}



undefined4 FUN_008bd1d0(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x24,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_008bcde0();
  }
  local_4 = 0xffffffff;
  FUN_008bd130(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008bd250(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7258;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9840c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba804c = _DAT_00ba804c + -1;
  local_4 = 0xffffffff;
  FUN_008aed50();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008bd2e0(void)

{
  undefined4 *in_ECX;
  
  FUN_0089d3d0();
  *in_ECX = &PTR_FUN_00a559cc;
  in_ECX[3] = 0;
  _DAT_00ba7d34 = _DAT_00ba7d34 + 1;
  *in_ECX = &PTR_FUN_00a55b9c;
  DAT_00ba7f5c = DAT_00ba7f5c + 1;
  *(undefined1 *)(in_ECX + 4) = 0;
  *in_ECX = &PTR_FUN_00a55c2c;
  _DAT_00ba7f68 = _DAT_00ba7f68 + 1;
  *(undefined1 *)(in_ECX + 4) = 0;
  *in_ECX = &PTR_FUN_00a9840c;
  _DAT_00ba804c = _DAT_00ba804c + 1;
  *(undefined1 *)(in_ECX + 4) = 0;
  return;
}



void FUN_008bd330(byte param_1)

{
  FUN_008bd250();
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
  local_10 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_008bd2e0();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008bd3c0(undefined4 param_1)

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
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  iVar2 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_008bd2e0();
  }
  local_4 = 0xffffffff;
  FUN_0089f5d0(uVar3,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008bd480(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_74 [80];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d728b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_74;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff80;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x130,0x2e,uVar1);
    *(undefined2 *)(iVar2 + 4) = 0x130;
    uVar4 = *param_1;
    local_1c = 0;
    uVar3 = FUN_008a2050(&stack0xffffff88);
    uVar4 = FUN_0090f580(param_1[1],uVar3,uVar4);
    local_1c = -1;
    (**(code **)(*in_ECX + 0x4c))(uVar4);
    FUN_008bc730();
    (**(code **)(*in_ECX + 0x7c))(param_1);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_008bd550(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_008aee90(param_1);
  param_1 = FUN_0070f910(DAT_00ba8050);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 FUN_008bd5a0(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar2 = thunk_FUN_00401aa0(0x70,1);
    bVar1 = 0x10 - ((byte)iVar2 & 0xf);
    iVar2 = iVar2 + (uint)bVar1;
    *(byte *)(iVar2 + -1) = bVar1;
    FUN_00532250();
    *(int *)(in_ECX + 0xc) = iVar2;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008aee10(iVar2);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



void FUN_008bd600(byte param_1)

{
  int in_ECX;
  
  if (-1 < *(int *)(in_ECX + 0x14)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0xc),*(int *)(in_ECX + 0x14) * 8,0x14);
  }
  if (((param_1 & 1) != 0) && (in_ECX != 0)) {
    FUN_00401e40(in_ECX - (uint)*(byte *)(in_ECX + -1));
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008bd6b0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7308;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a984ac;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba8058 = _DAT_00ba8058 + -1;
  local_4 = 0xffffffff;
  FUN_0089fc90();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008bd720(int param_1)

{
  int iVar1;
  int in_ECX;
  
  FUN_0089fd10(param_1);
  if ((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x58);
    FUN_0047dcd0(iVar1 + 0x30);
    FUN_0047dcd0(iVar1 + 0x40);
    *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(iVar1 + 0x5c);
    *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(iVar1 + 0x5d);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008bd780(void)

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
    *puVar2 = &PTR_FUN_00a3d414;
    puVar2[3] = 0;
    DAT_00ba7d00 = DAT_00ba7d00 + 1;
    *puVar2 = &PTR_FUN_00a97094;
    _DAT_00ba7d40 = _DAT_00ba7d40 + 1;
    *puVar2 = &PTR_FUN_00a984ac;
    _DAT_00ba8058 = _DAT_00ba8058 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008bd820(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int unaff_EBP;
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
    *puVar2 = &PTR_FUN_00a3d414;
    puVar2[3] = 0;
    DAT_00ba7d00 = DAT_00ba7d00 + 1;
    *puVar2 = &PTR_FUN_00a97094;
    _DAT_00ba7d40 = _DAT_00ba7d40 + 1;
    *puVar2 = &PTR_FUN_00a984ac;
    _DAT_00ba8058 = _DAT_00ba8058 + 1;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x88))(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = unaff_EBP;
  return puVar2;
}



void FUN_008bd940(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0x3f800000;
  in_ECX[0xd] = 0x447a0000;
  in_ECX[0xe] = 0x3dcccccd;
  *(undefined1 *)(in_ECX + 0xf) = 1;
  *(undefined1 *)((int)in_ECX + 0x3d) = 1;
  return;
}



void FUN_008bd9a0(byte param_1)

{
  FUN_008bd6b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_008bd9c0(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar1 = thunk_FUN_00401aa0(0x50,1);
    bVar3 = 0x10 - ((byte)iVar1 & 0xf);
    *(byte *)(iVar1 + (uint)bVar3 + -1) = bVar3;
    uVar2 = FUN_008bd940();
    *(undefined4 *)(in_ECX + 0xc) = uVar2;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008bd720(uVar2);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008bda20(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
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
  puStack_18 = &LAB_009d72cb;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&uStack_54;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffa0;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 != 0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x60,0x26,uVar1);
    *(undefined2 *)(iVar2 + 4) = 0x60;
    local_1c = 0;
    puVar3 = (undefined4 *)FUN_0090fa70(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0)
    ;
    puVar3[0x15] = *(undefined4 *)(param_1 + 0x34);
    local_1c = -1;
    puVar3[0x16] = *(undefined4 *)(param_1 + 0x38);
    puVar3[0x14] = *(undefined4 *)(param_1 + 0x30);
    *(undefined1 *)(puVar3 + 0x17) = *(undefined1 *)(param_1 + 0x3c);
    *(undefined1 *)((int)puVar3 + 0x5d) = *(undefined1 *)(param_1 + 0x3d);
    uStack_54 = *(undefined4 *)(param_1 + 0x24);
    uStack_50 = *(undefined4 *)(param_1 + 0x28);
    uStack_4c = *(undefined4 *)(param_1 + 0x2c);
    uStack_48 = *(undefined4 *)(param_1 + 0x10);
    uStack_44 = *(undefined4 *)(param_1 + 0x14);
    uStack_40 = *(undefined4 *)(param_1 + 0x18);
    uStack_3c = *(undefined4 *)(param_1 + 0x1c);
    FUN_0090fac0(&uStack_48,&stack0xffffffa8);
    (**(code **)(*in_ECX + 0x4c))(puVar3);
    if ((*(short *)(puVar3 + 1) != 0) &&
       (*(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1,
       *(short *)((int)puVar3 + 6) == 0)) {
      (**(code **)*puVar3)(1);
    }
    (**(code **)(*in_ECX + 0x7c))(param_1);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_008bdb60(int param_1)

{
  uint uVar1;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  FUN_008a0180(param_1);
  local_54 = FUN_0070f910(DAT_00ba805c);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_54);
  FUN_008bd940();
  FUN_008bd720(local_50);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008bdbf0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7308;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9854c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba8064 = _DAT_00ba8064 + -1;
  local_4 = 0xffffffff;
  FUN_0089fc90();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008bdc60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_0089fd10(param_1);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    param_1 = 0;
  }
  else {
    param_1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x34);
  }
  *(int *)(iVar2 + 0x24) = param_1;
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    puVar3 = &DAT_00b2f080;
  }
  else {
    puVar3 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x20);
  }
  *(undefined4 *)(iVar2 + 0x10) = *puVar3;
  *(undefined4 *)(iVar2 + 0x14) = puVar3[1];
  *(undefined4 *)(iVar2 + 0x18) = puVar3[2];
  *(undefined4 *)(iVar2 + 0x1c) = puVar3[3];
  uVar1 = 0;
  if ((in_ECX != 0) && (uVar1 = 0, *(int *)(in_ECX + 8) != 0)) {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x30);
  }
  *(undefined4 *)(iVar2 + 0x20) = uVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008bdce0(void)

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
    *puVar2 = &PTR_FUN_00a3d414;
    puVar2[3] = 0;
    DAT_00ba7d00 = DAT_00ba7d00 + 1;
    *puVar2 = &PTR_FUN_00a97094;
    _DAT_00ba7d40 = _DAT_00ba7d40 + 1;
    *puVar2 = &PTR_FUN_00a9854c;
    _DAT_00ba8064 = _DAT_00ba8064 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008bdd80(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int unaff_EBP;
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
    *puVar2 = &PTR_FUN_00a3d414;
    puVar2[3] = 0;
    DAT_00ba7d00 = DAT_00ba7d00 + 1;
    *puVar2 = &PTR_FUN_00a97094;
    _DAT_00ba7d40 = _DAT_00ba7d40 + 1;
    *puVar2 = &PTR_FUN_00a9854c;
    _DAT_00ba8064 = _DAT_00ba8064 + 1;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x88))(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = unaff_EBP;
  return puVar2;
}



void FUN_008bde80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[4] = DAT_00b2f080;
  in_ECX[5] = DAT_00b2f084;
  in_ECX[6] = DAT_00b2f088;
  in_ECX[7] = DAT_00b2f08c;
  in_ECX[8] = 0x3dcccccd;
  in_ECX[9] = 0x3c23d70a;
  return;
}



void FUN_008bdee0(byte param_1)

{
  FUN_008bdbf0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_008bdf00(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar1 = FUN_00401f00(0x30);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_008bde80();
    }
    *(undefined4 *)(in_ECX + 0xc) = uVar2;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008bdc60(uVar2);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008bdf50(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d733b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&uStack_44;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffb0;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 != 0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x40,0x26,uVar1);
    *(undefined2 *)(iVar2 + 4) = 0x40;
    local_1c = 0;
    puVar3 = (undefined4 *)FUN_0090fdf0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0)
    ;
    puVar3[0xc] = *(undefined4 *)(param_1 + 0x20);
    puVar3[0xd] = *(undefined4 *)(param_1 + 0x24);
    local_1c = -1;
    uStack_44 = *(undefined4 *)(param_1 + 0x14);
    uStack_40 = *(undefined4 *)(param_1 + 0x18);
    uStack_3c = *(undefined4 *)(param_1 + 0x1c);
    puVar3[8] = *(undefined4 *)(param_1 + 0x10);
    puVar3[9] = uStack_44;
    puVar3[10] = uStack_40;
    puVar3[0xb] = uStack_3c;
    (**(code **)(*in_ECX + 0x4c))(puVar3);
    if ((*(short *)(puVar3 + 1) != 0) &&
       (*(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1,
       *(short *)((int)puVar3 + 6) == 0)) {
      (**(code **)*puVar3)(1);
    }
    (**(code **)(*in_ECX + 0x7c))(param_1);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_008be060(int param_1)

{
  uint uVar1;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_008a0180(param_1);
  local_44 = FUN_0070f910(DAT_00ba8068);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_44);
  local_30 = DAT_00b2f080;
  local_2c = DAT_00b2f084;
  local_28 = DAT_00b2f088;
  local_40 = 0;
  local_3c = 0;
  local_24 = DAT_00b2f08c;
  local_38 = 0;
  local_20 = 0x3dcccccd;
  local_1c = 0x3c23d70a;
  FUN_008bdc60(&local_40);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008be120(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7308;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a985ec;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba8070 = _DAT_00ba8070 + -1;
  local_4 = 0xffffffff;
  FUN_0089fc90();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008be190(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_44;
  FUN_0089fd10(param_1);
  if ((in_ECX != 0) && (iVar2 = *(int *)(in_ECX + 8), iVar2 != 0)) {
    local_40 = *(undefined4 *)(iVar2 + 0x20);
    uStack_3c = *(undefined4 *)(iVar2 + 0x24);
    uStack_38 = *(undefined4 *)(iVar2 + 0x28);
    uStack_34 = *(undefined4 *)(iVar2 + 0x2c);
    local_30 = *(undefined4 *)(iVar2 + 0x30);
    uStack_2c = *(undefined4 *)(iVar2 + 0x34);
    uStack_28 = *(undefined4 *)(iVar2 + 0x38);
    uStack_24 = *(undefined4 *)(iVar2 + 0x3c);
  }
  FUN_0047dcd0(&local_40);
  FUN_0047dcd0(&local_30);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    local_44 = 0;
  }
  else {
    local_44 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x40);
  }
  *(undefined4 *)(param_1 + 0x30) = local_44;
  uVar1 = 0;
  if ((in_ECX != 0) && (uVar1 = 0, *(int *)(in_ECX + 8) != 0)) {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x44);
  }
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008be240(void)

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
    *puVar2 = &PTR_FUN_00a3d414;
    puVar2[3] = 0;
    DAT_00ba7d00 = DAT_00ba7d00 + 1;
    *puVar2 = &PTR_FUN_00a97094;
    _DAT_00ba7d40 = _DAT_00ba7d40 + 1;
    *puVar2 = &PTR_FUN_00a985ec;
    _DAT_00ba8070 = _DAT_00ba8070 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008be2e0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int unaff_EBP;
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
    *puVar2 = &PTR_FUN_00a3d414;
    puVar2[3] = 0;
    DAT_00ba7d00 = DAT_00ba7d00 + 1;
    *puVar2 = &PTR_FUN_00a97094;
    _DAT_00ba7d40 = _DAT_00ba7d40 + 1;
    *puVar2 = &PTR_FUN_00a985ec;
    _DAT_00ba8070 = _DAT_00ba8070 + 1;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x88))(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = unaff_EBP;
  return puVar2;
}



void FUN_008be470(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0x3dcccccd;
  in_ECX[0xd] = 0x3c23d70a;
  return;
}



void FUN_008be4d0(byte param_1)

{
  FUN_008be120();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_008be4f0(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar1 = thunk_FUN_00401aa0(0x50,1);
    bVar3 = 0x10 - ((byte)iVar1 & 0xf);
    *(byte *)(iVar1 + (uint)bVar3 + -1) = bVar3;
    uVar2 = FUN_008be470();
    *(undefined4 *)(in_ECX + 0xc) = uVar2;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008be190(uVar2);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008be550(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
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
  puStack_18 = &LAB_009d72cb;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&uStack_54;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffa0;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 != 0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x60,0x26,uVar1);
    *(undefined2 *)(iVar2 + 4) = 0x60;
    local_1c = 0;
    puVar3 = (undefined4 *)FUN_00910040(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0)
    ;
    uStack_48 = *(undefined4 *)(param_1 + 0x20);
    uStack_44 = *(undefined4 *)(param_1 + 0x24);
    uStack_40 = *(undefined4 *)(param_1 + 0x28);
    local_1c = -1;
    uStack_3c = *(undefined4 *)(param_1 + 0x2c);
    uStack_54 = *(undefined4 *)(param_1 + 0x14);
    uStack_50 = *(undefined4 *)(param_1 + 0x18);
    uStack_4c = *(undefined4 *)(param_1 + 0x1c);
    puVar3[8] = *(undefined4 *)(param_1 + 0x10);
    puVar3[9] = uStack_54;
    puVar3[10] = uStack_50;
    puVar3[0xb] = uStack_4c;
    puVar3[0xc] = uStack_48;
    puVar3[0xd] = uStack_44;
    puVar3[0xe] = uStack_40;
    puVar3[0xf] = uStack_3c;
    puVar3[0x10] = *(undefined4 *)(param_1 + 0x30);
    puVar3[0x11] = *(undefined4 *)(param_1 + 0x34);
    (**(code **)(*in_ECX + 0x4c))(puVar3);
    if ((*(short *)(puVar3 + 1) != 0) &&
       (*(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1,
       *(short *)((int)puVar3 + 6) == 0)) {
      (**(code **)*puVar3)(1);
    }
    (**(code **)(*in_ECX + 0x7c))(param_1);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_008be680(int param_1)

{
  uint uVar1;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
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
  
  FUN_008a0180(param_1);
  local_54 = FUN_0070f910(DAT_00ba8074);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_54);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_50 = 0;
  local_2c = 0;
  local_4c = 0;
  local_28 = 0;
  local_48 = 0;
  local_24 = 0;
  local_20 = 0x3dcccccd;
  local_1c = 0x3c23d70a;
  FUN_008be190(&local_50);
  return;
}



void FUN_008be730(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *in_ECX;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  
  FUN_008f5750(param_1,0);
  *in_ECX = &PTR_FUN_00a98688;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  in_ECX[8] = *param_2;
  in_ECX[9] = uVar5;
  in_ECX[10] = uVar6;
  in_ECX[0xb] = uVar7;
  in_ECX[0xc] = param_3;
  in_ECX[0xd] = param_4;
  *(undefined1 *)(in_ECX + 0xe) = 1;
  fVar1 = (float)in_ECX[8];
  fVar2 = (float)in_ECX[9];
  fVar3 = (float)in_ECX[10];
  fVar4 = (float)in_ECX[0xb];
  fVar9 = fVar3 * fVar3 + fVar1 * fVar1;
  fVar11 = fVar4 * fVar4 + fVar2 * fVar2;
  fVar12 = fVar1 * fVar1 + fVar3 * fVar3;
  fVar13 = fVar2 * fVar2 + fVar4 * fVar4;
  fVar8 = fVar11 + fVar9;
  auVar10._4_4_ = fVar9 + fVar11;
  auVar10._0_4_ = fVar8;
  auVar10._8_4_ = fVar13 + fVar12;
  auVar10._12_4_ = fVar12 + fVar13;
  auVar10 = rsqrtss(auVar10,auVar10);
  fVar9 = auVar10._0_4_;
  fVar8 = fVar9 * 0.5 * (3.0 - fVar8 * fVar9 * fVar9);
  in_ECX[8] = fVar8 * fVar1;
  in_ECX[9] = fVar8 * fVar2;
  in_ECX[10] = fVar8 * fVar3;
  in_ECX[0xb] = fVar8 * fVar4;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008be7f0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7378;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a986ac;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba807c = _DAT_00ba807c + -1;
  local_4 = 0xffffffff;
  FUN_0089dff0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008be860(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_0089e060(param_1);
  *(undefined1 *)(param_1 + 0x28) = 1;
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    puVar3 = &DAT_00ba7a40;
  }
  else {
    puVar3 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x20);
  }
  FUN_0047dcd0(puVar3);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    param_1 = 0;
  }
  else {
    param_1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x34);
  }
  *(int *)(iVar2 + 0x24) = param_1;
  uVar1 = 0;
  if ((in_ECX != 0) && (uVar1 = 0, *(int *)(in_ECX + 8) != 0)) {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x30);
  }
  *(undefined4 *)(iVar2 + 0x20) = uVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008be8e0(void)

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
    *puVar2 = &PTR_FUN_00a3d414;
    puVar2[3] = 0;
    DAT_00ba7d00 = DAT_00ba7d00 + 1;
    *puVar2 = &PTR_FUN_00a3d49c;
    _DAT_00ba7d0c = _DAT_00ba7d0c + 1;
    *puVar2 = &PTR_FUN_00a986ac;
    _DAT_00ba807c = _DAT_00ba807c + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008be980(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a3d414;
    puVar2[3] = 0;
    DAT_00ba7d00 = DAT_00ba7d00 + 1;
    *puVar2 = &PTR_FUN_00a3d49c;
    _DAT_00ba7d0c = _DAT_00ba7d0c + 1;
    *puVar2 = &PTR_FUN_00a986ac;
    _DAT_00ba807c = _DAT_00ba807c + 1;
  }
  local_4 = 0xffffffff;
  FUN_0089e1a0(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_008bea80(byte param_1)

{
  FUN_008f57b0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008beab0(byte param_1)

{
  FUN_008be7f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_008bead0(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar1 = thunk_FUN_00401aa0(0x40,1);
    bVar3 = 0x10 - ((byte)iVar1 & 0xf);
    puVar2 = (undefined4 *)(iVar1 + (uint)bVar3);
    *(byte *)((int)puVar2 + -1) = bVar3;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0x40000000;
    *(undefined1 *)(puVar2 + 10) = 1;
    *(undefined4 **)(in_ECX + 0xc) = puVar2;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008be860(puVar2);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008beb60(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d73ab;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&uStack_54;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffa0;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 != 0) {
    iStack_4c = (**(code **)(*DAT_00ba7d98 + 0x10))(0x40,0x26,uVar1);
    *(undefined2 *)(iStack_4c + 4) = 0x40;
    uStack_50 = *(undefined4 *)(param_1 + 0x10);
    uStack_54 = *(undefined4 *)(param_1 + 0x14);
    uStack_40 = *(undefined4 *)(param_1 + 0x18);
    local_1c = 0;
    uStack_3c = *(undefined4 *)(param_1 + 0x1c);
    uStack_48 = uStack_50;
    uStack_44 = uStack_54;
    puVar2 = (undefined4 *)
             FUN_008be730(*(undefined4 *)(param_1 + 4),&uStack_48,*(undefined4 *)(param_1 + 0x20),
                          *(undefined4 *)(param_1 + 0x24));
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



void FUN_008bed90(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if ((param_1 != 0) && (*(short *)(param_1 + 4) != 0)) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *(int *)(in_ECX + 0xc) = param_1;
  return;
}



void FUN_008bede0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x14) = param_1;
  }
  return;
}



void FUN_008bee00(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x10) = param_1;
  }
  return;
}



undefined4 FUN_008beec0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    puVar1 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x29);
    *(undefined2 *)(puVar1 + 1) = 0x18;
    *(undefined2 *)((int)puVar1 + 6) = 1;
    puVar1[3] = 0;
    *puVar1 = &PTR_FUN_00a98778;
    *(undefined4 **)(in_ECX + 4) = puVar1;
  }
  return 0x18;
}



void FUN_008bef00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 != 0) {
    if ((param_1 != 0) && (*(short *)(param_1 + 4) != 0)) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
    }
    puVar2 = *(undefined4 **)(iVar1 + 0xc);
    if (((puVar2 != (undefined4 *)0x0) && (*(short *)(puVar2 + 1) != 0)) &&
       (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
       *(short *)((int)puVar2 + 6) == 0)) {
      (**(code **)*puVar2)(1);
    }
    *(int *)(iVar1 + 0xc) = param_1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008bef50(void)

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
  *in_ECX = &PTR_FUN_00a987a4;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba8088 = _DAT_00ba8088 + -1;
  local_4 = 0xffffffff;
  FUN_008a0250();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008befc0(void)

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
    *puVar2 = &PTR_FUN_00a987a4;
    _DAT_00ba8088 = _DAT_00ba8088 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008bf050(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a987a4;
    _DAT_00ba8088 = _DAT_00ba8088 + 1;
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



void FUN_008bf130(int param_1)

{
  if (*(uint *)(param_1 + 4) < 6) {
    FUN_00712a20();
    FUN_0089d650(param_1);
    return;
  }
  FUN_008a0940(param_1);
  return;
}



void FUN_008bf160(byte param_1)

{
  FUN_00910520();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008bf190(byte param_1)

{
  FUN_008bef50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008bf1b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0x3c23d70a;
  local_8 = 0x3a83126f;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &local_18;
    (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),param_2,0x18,0,0);
  }
  (**(code **)(*in_ECX + 0x10))();
  iVar1 = in_ECX[1];
  *(undefined4 *)(iVar1 + 0x10) = param_2[3];
  *(undefined4 *)(iVar1 + 0x14) = param_2[4];
  return;
}



void FUN_008bf230(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  iVar3 = param_1;
  FUN_008a0c30(param_1);
  iVar1 = *(int *)(in_ECX + 4);
  puVar4 = (undefined4 *)FUN_008e8040(iVar3);
  if ((puVar4 != (undefined4 *)0x0) && (*(short *)(puVar4 + 1) != 0)) {
    *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + 1;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0xc);
  if (((puVar2 != (undefined4 *)0x0) && (*(short *)(puVar2 + 1) != 0)) &&
     (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
     *(short *)((int)puVar2 + 6) == 0)) {
    (**(code **)*puVar2)(1);
  }
  *(undefined4 **)(iVar1 + 0xc) = puVar4;
  if ((*(short *)(puVar4 + 1) != 0) &&
     (*(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1,
     *(short *)((int)puVar4 + 6) == 0)) {
    (**(code **)*puVar4)(1);
  }
  param_1 = 4;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),iVar1 + 0x10,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),iVar1 + 0x14,4,&param_1,1);
  return;
}



void FUN_008bf2f0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_008a0c80(param_1);
  iVar1 = *(int *)(in_ECX + 4);
  FUN_008e80c0(iVar2,*(undefined4 *)(iVar1 + 0xc));
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x10,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x14,4,&param_1,1);
  return;
}



void FUN_008bf360(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[2] = 1;
  *in_ECX = &PTR_LAB_00a9883c;
  return;
}



void FUN_008bf380(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  uint uVar4;
  int *piVar5;
  
  iVar1 = param_1;
  FUN_008a0d20(param_1);
  if (*(int *)(in_ECX + 4) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x14);
  }
  param_1 = FUN_0070fb90("DAMPING",param_1);
  uVar4 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  if (*(int *)(in_ECX + 4) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x10);
  }
  param_1 = FUN_0070fb90(&PTR_LAB_00a98854,param_1);
  uVar4 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  if (*(int *)(in_ECX + 4) == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(*(int *)(in_ECX + 4) + 0xc);
  }
  if (piVar5 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar5 + 0xc))();
    piVar3 = (int *)FUN_008e7e60(uVar2);
    if (piVar3 != (int *)0x0) {
      FUN_008a0200(piVar5);
      (**(code **)(*piVar3 + 0x14))(iVar1);
      *piVar3 = (int)&PTR_FUN_00a56484;
      FUN_008a0200(0);
      FUN_00401f20(piVar3);
    }
  }
  return;
}



undefined4 FUN_008bf490(undefined1 *param_1)

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
    *puVar1 = &PTR_LAB_00a9883c;
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



undefined4 FUN_008bf5f0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    puVar1 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x20,0x29);
    puVar1[5] = 0x41200000;
    *(undefined2 *)(puVar1 + 1) = 0x20;
    *(undefined2 *)((int)puVar1 + 6) = 1;
    puVar1[4] = 0;
    puVar1[3] = 0;
    *puVar1 = &PTR_FUN_00a98898;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    *(undefined1 *)((int)puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x1a) = 0;
    *(undefined4 **)(in_ECX + 4) = puVar1;
  }
  return 0x20;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008bf650(void)

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
  *in_ECX = &PTR_FUN_00a988c4;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba8094 = _DAT_00ba8094 + -1;
  local_4 = 0xffffffff;
  FUN_008a0250();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008bf6c0(void)

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
    *puVar2 = &PTR_FUN_00a988c4;
    _DAT_00ba8094 = _DAT_00ba8094 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008bf750(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a988c4;
    _DAT_00ba8094 = _DAT_00ba8094 + 1;
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



void FUN_008bf830(byte param_1)

{
  FUN_009105c0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008bf860(byte param_1)

{
  FUN_008bf650();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008bf880(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *in_ECX;
  float10 fVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0x42c80000;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &local_20;
    (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),param_2,0x20,0,0);
  }
  (**(code **)(*in_ECX + 0x10))();
  iVar1 = in_ECX[1];
  *(undefined1 *)(iVar1 + 0x18) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)(iVar1 + 0x19) = *(undefined1 *)(param_2 + 5);
  fVar2 = (float10)FUN_00982c30();
  *(float *)(iVar1 + 0x14) = (float)fVar2;
  return;
}



void FUN_008bf910(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  iVar3 = param_1;
  FUN_008a0c30(param_1);
  iVar1 = *(int *)(in_ECX + 4);
  puVar4 = (undefined4 *)FUN_008e8040(iVar3);
  if ((puVar4 != (undefined4 *)0x0) && (*(short *)(puVar4 + 1) != 0)) {
    *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + 1;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0xc);
  if (((puVar2 != (undefined4 *)0x0) && (*(short *)(puVar2 + 1) != 0)) &&
     (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
     *(short *)((int)puVar2 + 6) == 0)) {
    (**(code **)*puVar2)(1);
  }
  *(undefined4 **)(iVar1 + 0xc) = puVar4;
  if ((*(short *)(puVar4 + 1) != 0) &&
     (*(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1,
     *(short *)((int)puVar4 + 6) == 0)) {
    (**(code **)*puVar4)(1);
  }
  param_1 = 4;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),iVar1 + 0x14,4,&param_1,1);
  param_1 = 1;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),iVar1 + 0x19,1,&param_1,1);
  param_1 = 1;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),iVar1 + 0x1a,1,&param_1,1);
  return;
}



void FUN_008bf9f0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_008a0c80(param_1);
  iVar1 = *(int *)(in_ECX + 4);
  FUN_008e80c0(iVar2,*(undefined4 *)(iVar1 + 0xc));
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x14,4,&param_1,1);
  param_1 = 1;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x19,1,&param_1,1);
  param_1 = 1;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x1a,1,&param_1,1);
  return;
}



void FUN_008bfa80(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[2] = 1;
  *in_ECX = &PTR_LAB_00a9895c;
  return;
}



void FUN_008bfaa0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
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
  puStack_8 = &LAB_009d73e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*in_ECX + 0x74))((int)&uStack_24 + 3,uVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -4;
  }
  if (*(uint *)(unaff_retaddr + 4) < 6) {
    if (iVar2 != 0) {
      iVar3 = FUN_007124a0();
      if (iVar3 != 0) {
        uStack_24 = &PTR_FUN_00a56484;
        uStack_20 = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        uStack_1c = 1;
        puStack_8 = (undefined1 *)0x0;
        FUN_008a07e0(&uStack_24);
        FUN_008bef00(uStack_20);
        *(undefined4 *)(iVar2 + 0x10) = uStack_14;
        *(undefined4 *)(iVar2 + 0xc) = uStack_18;
        puStack_8 = (undefined1 *)0xffffffff;
        uStack_24 = &PTR_FUN_00a56484;
        FUN_008a0200(0);
      }
      FUN_0089d6c0(unaff_retaddr);
    }
  }
  else {
    FUN_008a0320(unaff_retaddr);
    FUN_007124d0();
    FUN_007124a0();
    FUN_007124a0();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 FUN_008bfd10(undefined1 *param_1)

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
    *puVar1 = &PTR_LAB_00a9895c;
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



undefined4 FUN_008bfdb0(void)

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
    uVar3 = FUN_009107c0();
    *(undefined4 *)(in_ECX + 4) = uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0xa0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008bfe20(void)

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
  *in_ECX = &PTR_FUN_00a989a4;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba80a0 = _DAT_00ba80a0 + -1;
  local_4 = 0xffffffff;
  FUN_008a0250();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008bfe90(void)

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
    *puVar2 = &PTR_FUN_00a989a4;
    _DAT_00ba80a0 = _DAT_00ba80a0 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008bff20(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a989a4;
    _DAT_00ba80a0 = _DAT_00ba80a0 + 1;
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


