
void FUN_006c0170(int param_1,uint param_2)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float local_c;
  float local_8;
  float local_4;
  
  uVar2 = param_2 - 1;
  if (1 < param_2) {
    iVar4 = param_1 + 4;
    local_c = *(float *)(param_1 + 4) * 2.0 - *(float *)(param_1 + 0x50);
    local_8 = *(float *)(param_1 + 8) * 2.0 - *(float *)(param_1 + 0x54);
    local_4 = *(float *)(param_1 + 0xc) * 2.0 - *(float *)(param_1 + 0x58);
    FUN_006bff30(&local_c,(float *)(param_1 + 0x50),0x3f800000,0x3f800000);
    if (1 < uVar2) {
      iVar3 = param_2 - 2;
      do {
        FUN_006bff30(iVar4,iVar4 + 0x98,*(float *)(iVar4 + 0x48) - *(float *)(iVar4 + -4),
                     *(float *)(iVar4 + 0x94) - *(float *)(iVar4 + 0x48));
        iVar4 = iVar4 + 0x4c;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = uVar2 * 0x4c;
    iVar4 = (param_2 - 2) * 0x4c;
    local_c = *(float *)(iVar3 + 4 + param_1) * 2.0 - *(float *)(iVar4 + 4 + param_1);
    iVar4 = iVar4 + 4 + param_1;
    local_8 = *(float *)(iVar3 + 8 + param_1) * 2.0 - *(float *)(iVar4 + 4);
    local_4 = *(float *)(iVar3 + param_1 + 0xc) * 2.0 - *(float *)(iVar4 + 8);
    FUN_006bff30(iVar4,&local_c,0x3f800000,0x3f800000);
  }
  if (uVar2 != 0) {
    pfVar1 = (float *)(param_1 + 0x58);
    do {
      pfVar1[-9] = (pfVar1[-2] - pfVar1[-0x15]) * 3.0 - (pfVar1[-0xc] * 2.0 + pfVar1[4]);
      pfVar1[-8] = (pfVar1[-1] - pfVar1[-0x14]) * 3.0 - (pfVar1[-0xb] * 2.0 + pfVar1[5]);
      pfVar1[-7] = (*pfVar1 - pfVar1[-0x13]) * 3.0 - (pfVar1[-10] * 2.0 + pfVar1[6]);
      pfVar1[-6] = (pfVar1[-0xc] + pfVar1[4]) - (pfVar1[-2] - pfVar1[-0x15]) * 2.0;
      uVar2 = uVar2 - 1;
      pfVar1[-5] = (pfVar1[5] + pfVar1[-0xb]) - (pfVar1[-1] - pfVar1[-0x14]) * 2.0;
      pfVar1[-4] = (pfVar1[6] + pfVar1[-10]) - (*pfVar1 - pfVar1[-0x13]) * 2.0;
      pfVar1 = pfVar1 + 0x13;
    } while (uVar2 != 0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006c0430(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float local_54;
  int local_50;
  undefined1 local_20 [12];
  float local_14;
  float local_10;
  float local_c;
  
  local_54 = 0.0;
  iVar3 = DAT_00b23d84;
  while (iVar2 = param_1, param_2 = param_2 + -1, param_2 != 0) {
    param_1 = iVar2 + 0x4c;
    local_50 = 0;
    if (-1 < iVar3) {
      do {
        fVar1 = (float)local_50 * _DAT_00b3c2f4;
        FUN_006bfdb0(fVar1,iVar2,param_1,&local_14);
        FUN_006bfe90(fVar1,iVar2,param_1,local_20);
        fVar5 = local_c;
        fVar4 = local_10;
        fVar1 = local_14;
        fVar6 = (float10)FUN_00982c30();
        fVar1 = (float)fVar6 / (fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1);
        if (local_54 < fVar1) {
          local_54 = fVar1;
        }
        local_50 = local_50 + 1;
        iVar3 = DAT_00b23d84;
      } while (local_50 <= DAT_00b23d84);
    }
  }
  return (float10)local_54;
}



uint * FUN_006c05b0(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x4c >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x4c)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 != (uint *)0x0) {
    *puVar2 = param_1;
    _eh_vector_constructor_iterator_(puVar2 + 1,0x4c,param_1,FUN_007616d0,FUN_0060d0a0);
    *unaff_FS_OFFSET = local_c;
    return puVar2 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return (uint *)0x0;
}



undefined4 FUN_006c0680(uint param_1,undefined4 *param_2,uint *param_3)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *_Dst;
  int *unaff_FS_OFFSET;
  uint local_20;
  uint *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c285b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  _Src = (void *)*param_2;
  cVar1 = FUN_006d31b0(param_1,_Src,*param_3,&local_20,0x4c,uVar2);
  if (cVar1 != '\0') {
    uVar3 = *param_3 + 1;
    uVar2 = -(uint)((int)((ulonglong)uVar3 * 0x4c >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x4c);
    local_1c = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
    local_4 = 0;
    if (local_1c == (uint *)0x0) {
      _Dst = (uint *)0x0;
    }
    else {
      _Dst = local_1c + 1;
      *local_1c = uVar3;
      _eh_vector_constructor_iterator_(_Dst,0x4c,uVar3,FUN_007616d0,FUN_0060d0a0);
    }
    local_4 = 0xffffffff;
    _memcpy(_Dst,_Src,local_20 * 0x4c);
    if (local_20 < *param_3) {
      _memcpy(_Dst + local_20 * 0x13 + 0x13,(void *)(local_20 * 0x4c + (int)_Src),
              (*param_3 - local_20) * 0x4c);
    }
    FUN_006bbdc0(&local_18,param_1,_Src,3,*param_3,0x4c);
    _Dst[local_20 * 0x13] = param_1;
    _Dst[local_20 * 0x13 + 1] = local_18;
    _Dst[local_20 * 0x13 + 2] = local_14;
    _Dst[local_20 * 0x13 + 3] = local_10;
    _Dst[local_20 * 0x13 + 4] = 0;
    _Dst[local_20 * 0x13 + 5] = 0;
    _Dst[local_20 * 0x13 + 6] = 0;
    *param_3 = *param_3 + 1;
    if (_Src != (void *)0x0) {
      _eh_vector_destructor_iterator_(_Src,0x4c,*(int *)((int)_Src + -4),FUN_0060d0a0);
      FUN_00401f20((int)_Src + -4);
    }
    *param_2 = _Dst;
    FUN_006c0170(_Dst,*param_3,0x4c);
    *unaff_FS_OFFSET = local_c;
    return 1;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006c0820(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 + param_1 * 6) * 4;
  *(code **)(&DAT_00b3d118 + iVar1) = FUN_006c0430;
  *(code **)(&DAT_00b3cff8 + iVar1) = FUN_006bfcd0;
  *(code **)(&DAT_00b3d238 + iVar1) = FUN_006bfdb0;
  *(code **)(&DAT_00b3d650 + iVar1) = FUN_006bfe90;
  *(code **)(&DAT_00b3d4a0 + iVar1) = FUN_006bfbb0;
  *(code **)(&DAT_00b3d410 + iVar1) = FUN_006c0170;
  *(code **)(&DAT_00b3d1a8 + iVar1) = FUN_006c0680;
  return;
}



void FUN_006c0880(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_006bc1c0(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x10,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x14,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x18,4,&param_1,1);
  return;
}



void FUN_006c0900(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  FUN_006bc1e0(param_1,param_2);
  param_2 = 4;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),iVar1 + 0x10,4,&param_2,1);
  param_2 = 4;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),iVar1 + 0x14,4,&param_2,1);
  param_2 = 4;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),iVar1 + 0x18,4,&param_2,1);
  return;
}



uint * FUN_006c0980(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afb5b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = -(uint)((int)((ulonglong)param_2 * 0x4c >> 0x20) != 0) | (uint)((ulonglong)param_2 * 0x4c)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = puVar2 + 1;
    *puVar2 = param_2;
    _eh_vector_constructor_iterator_(puVar4,0x4c,param_2,FUN_007616d0,FUN_0060d0a0);
  }
  local_4 = 0xffffffff;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    FUN_006c0880(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



void FUN_006c0a40(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_006c0900(param_1,param_2);
    param_2 = param_2 + 0x4c;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006c0a70(void)

{
  if (DAT_00b3c6f8 != '\0') {
    return 0;
  }
  DAT_00b3c6f8 = 1;
  _DAT_00b3d0ac = FUN_006c0980;
  _DAT_00b3d5e4 = FUN_006c0a40;
  _DAT_00b3d554 = &LAB_006bfc50;
  _DAT_00b3d37c = FUN_006c05b0;
  _DAT_00b3d2ec = &LAB_006c0650;
  DAT_00b3d3f1 = 0x4c;
  FUN_006c0820(1,3);
  return 1;
}



void FUN_006c0ad0(void)

{
  FUN_00714c40(0,0,0,0);
  return;
}



undefined4 FUN_006c0b00(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_006be360(param_1,param_2);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  if (((*(float *)(param_2 + 0x14) == *(float *)(param_1 + 0x14)) &&
      (*(float *)(param_2 + 0x18) == *(float *)(param_1 + 0x18))) &&
     (*(float *)(param_2 + 0x1c) == *(float *)(param_1 + 0x1c))) {
    cVar1 = FUN_0073b770(param_2 + 0x20);
    if (cVar1 != '\0') {
      cVar1 = FUN_0073b770(param_2 + 0x30);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



void FUN_006c0c40(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float *pfVar9;
  float *in_ECX;
  double *pdVar10;
  undefined1 *puVar11;
  float *pfVar12;
  double local_80 [2];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  pfVar9 = in_ECX + 1;
  pdVar10 = local_80;
  pfVar12 = pfVar9;
  FUN_00714d80(local_70,param_1 + 1,pdVar10,pfVar9);
  uVar8 = FUN_00714cf0(pdVar10,pfVar12);
  FUN_00714db0(local_50,uVar8);
  pfVar12 = param_2 + 1;
  puVar11 = local_70;
  FUN_00714d80(local_80,pfVar9,puVar11,pfVar12);
  uVar8 = FUN_00714cf0(puVar11,pfVar12);
  FUN_00714db0(local_60,uVar8);
  fVar6 = 1.0 / (*param_2 - *param_1);
  fVar1 = in_ECX[5];
  fVar2 = in_ECX[6];
  fVar3 = in_ECX[6];
  fVar4 = in_ECX[7];
  fVar5 = in_ECX[7];
  fVar7 = (*in_ECX - *param_1) * fVar6 * (1.0 - fVar1);
  local_80[0] = (double)fVar7;
  uVar8 = FUN_0072f990(local_70,fVar7 * (fVar3 + 1.0) * (fVar5 + 1.0),local_50);
  puVar11 = local_10;
  FUN_0072f990(local_40,(1.0 - fVar2) * (float)local_80[0] * (1.0 - fVar4),local_60,puVar11,uVar8);
  FUN_00714c60(puVar11,uVar8);
  uVar8 = FUN_00714c90(local_40,local_60);
  uVar8 = FUN_0072f990(local_70,0x3f000000,uVar8);
  uVar8 = FUN_0072f9f0(local_80,uVar8);
  pfVar9 = (float *)FUN_00714cf0(local_30,uVar8);
  in_ECX[8] = *pfVar9;
  in_ECX[9] = pfVar9[1];
  in_ECX[10] = pfVar9[2];
  in_ECX[0xb] = pfVar9[3];
  fVar1 = (*param_2 - *in_ECX) * fVar6 * (1.0 - fVar1);
  local_80[0] = (double)fVar1;
  uVar8 = FUN_0072f990(local_30,fVar1 * (1.0 - fVar2) * (fVar5 + 1.0),local_50);
  puVar11 = local_20;
  FUN_0072f990(local_40,(fVar3 + 1.0) * (float)local_80[0] * (1.0 - fVar4),local_60,puVar11,uVar8);
  FUN_00714c60(puVar11,uVar8);
  uVar8 = FUN_00714c90(local_30,local_20);
  uVar8 = FUN_0072f990(local_40,0x3f000000,uVar8);
  uVar8 = FUN_0072f9f0(local_70,uVar8);
  pfVar9 = (float *)FUN_00714cf0(local_80,uVar8);
  in_ECX[0xc] = *pfVar9;
  in_ECX[0xd] = pfVar9[1];
  in_ECX[0xe] = pfVar9[2];
  in_ECX[0xf] = pfVar9[3];
  return;
}



void FUN_006c0ec0(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (1 < param_2) {
    FUN_006bd310(param_1,param_2,param_3);
    FUN_006c0c40(param_1,param_1 + 0x40);
    if (1 < param_2 - 1) {
      iVar2 = param_2 - 2;
      iVar1 = param_1;
      do {
        FUN_006c0c40(iVar1,iVar1 + 0x80);
        iVar2 = iVar2 + -1;
        iVar1 = iVar1 + 0x40;
      } while (iVar2 != 0);
    }
    FUN_006c0c40((param_2 - 2) * 0x40 + param_1,(param_2 - 1) * 0x40 + param_1);
  }
  return;
}



uint * FUN_006c0f40(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x40 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x40)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 != (uint *)0x0) {
    *puVar2 = param_1;
    _eh_vector_constructor_iterator_(puVar2 + 1,0x40,param_1,FUN_006c0ad0,FUN_0060d0a0);
    *unaff_FS_OFFSET = local_c;
    return puVar2 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return (uint *)0x0;
}



undefined4 FUN_006c1010(uint param_1,undefined4 *param_2,uint *param_3)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *_Dst;
  int *unaff_FS_OFFSET;
  uint local_24;
  uint *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c71ab;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  _Src = (void *)*param_2;
  cVar1 = FUN_006d31b0(param_1,_Src,*param_3,&local_24,0x40,uVar2);
  if (cVar1 != '\0') {
    uVar4 = *param_3 + 1;
    uVar2 = -(uint)((int)((ulonglong)uVar4 * 0x40 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x40);
    local_20 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
    local_4 = 0;
    if (local_20 == (uint *)0x0) {
      _Dst = (uint *)0x0;
    }
    else {
      _Dst = local_20 + 1;
      *local_20 = uVar4;
      _eh_vector_constructor_iterator_(_Dst,0x40,uVar4,FUN_006c0ad0,FUN_0060d0a0);
    }
    local_4 = 0xffffffff;
    _memcpy(_Dst,_Src,local_24 << 6);
    if (local_24 < *param_3) {
      _memcpy(_Dst + local_24 * 0x10 + 0x10,(void *)(local_24 * 0x40 + (int)_Src),
              (*param_3 - local_24) * 0x40);
    }
    FUN_006bd1f0(&local_1c,param_1,_Src,3,*param_3,0x40);
    puVar3 = _Dst + local_24 * 0x10;
    *puVar3 = param_1;
    puVar3[1] = local_1c;
    puVar3[2] = local_18;
    puVar3[3] = local_14;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[4] = local_10;
    puVar3[7] = 0;
    *param_3 = *param_3 + 1;
    if (_Src != (void *)0x0) {
      _eh_vector_destructor_iterator_(_Src,0x40,*(int *)((int)_Src + -4),FUN_0060d0a0);
      FUN_00401f20((int)_Src + -4);
    }
    *param_2 = _Dst;
    FUN_006c0ec0(_Dst,*param_3,0x40);
    *unaff_FS_OFFSET = local_c;
    return 1;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006c11c0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_006bd510(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x14,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x18,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x1c,4,&param_1,1);
  return;
}



void FUN_006c1240(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  FUN_006bd530(param_1,param_2);
  param_2 = 4;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),iVar1 + 0x14,4,&param_2,1);
  param_2 = 4;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),iVar1 + 0x18,4,&param_2,1);
  param_2 = 4;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),iVar1 + 0x1c,4,&param_2,1);
  return;
}



uint * FUN_006c12c0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afb5b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = -(uint)((int)((ulonglong)param_2 * 0x40 >> 0x20) != 0) | (uint)((ulonglong)param_2 * 0x40)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = puVar2 + 1;
    *puVar2 = param_2;
    _eh_vector_constructor_iterator_(puVar4,0x40,param_2,FUN_006c0ad0,FUN_0060d0a0);
  }
  local_4 = 0xffffffff;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    FUN_006c11c0(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



void FUN_006c1380(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_006c1240(param_1,param_2);
    param_2 = param_2 + 0x40;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006c13b0(void)

{
  if (DAT_00b3c754 != '\0') {
    return 0;
  }
  _DAT_00b3d154 = 0;
  _DAT_00b3d274 = 0;
  _DAT_00b3d68c = 0;
  DAT_00b3c754 = 1;
  _DAT_00b3d0c4 = FUN_006c12c0;
  _DAT_00b3d5fc = FUN_006c1380;
  _DAT_00b3d56c = &LAB_006c0b80;
  _DAT_00b3d394 = FUN_006c0f40;
  _DAT_00b3d304 = &LAB_006c0fe0;
  DAT_00b3d3f7 = 0x40;
  _DAT_00b3d034 = &LAB_006c0bf0;
  _DAT_00b3d4dc = FUN_006c0b00;
  _DAT_00b3d44c = FUN_006c0ec0;
  _DAT_00b3d1e4 = FUN_006c1010;
  return 1;
}



undefined4 FUN_006c1440(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006bb490(param_1,param_2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  if ((((*(float *)(param_2 + 8) == *(float *)(param_1 + 8)) &&
       (*(float *)(param_2 + 0xc) == *(float *)(param_1 + 0xc))) &&
      (*(float *)(param_2 + 0x10) == *(float *)(param_1 + 0x10))) &&
     ((*(float *)(param_2 + 0x14) == *(float *)(param_1 + 0x14) &&
      (*(float *)(param_2 + 0x18) == *(float *)(param_1 + 0x18))))) {
    return 1;
  }
  return 0;
}



void FUN_006c1550(int param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  param_2 = *(float *)(param_1 + 4) - param_2;
  param_3 = param_3 - *(float *)(param_1 + 4);
  fVar1 = *(float *)(param_1 + 0x10) + 1.0;
  fVar2 = 1.0 - *(float *)(param_1 + 0x10);
  fVar3 = (1.0 - *(float *)(param_1 + 8)) * 0.5;
  fVar4 = fVar3 * (*(float *)(param_1 + 0xc) + 1.0);
  fVar3 = fVar3 * (1.0 - *(float *)(param_1 + 0xc));
  fVar5 = 2.0 / (param_5 + param_4);
  *(float *)(param_1 + 0x14) = (fVar3 * fVar1 * param_2 + param_3 * fVar2 * fVar4) * fVar5 * param_4
  ;
  *(float *)(param_1 + 0x18) = fVar5 * param_5 * (fVar2 * fVar3 * param_3 + param_2 * fVar1 * fVar4)
  ;
  return;
}



void FUN_006c1650(int param_1,uint param_2)

{
  uint uVar1;
  float *pfVar2;
  float *extraout_ECX;
  float *extraout_EDX;
  float *extraout_EDX_00;
  float *pfVar3;
  int iVar4;
  
  if (1 < param_2) {
    FUN_006c1550(param_1,(*(float *)(param_1 + 4) + *(float *)(param_1 + 4)) -
                         *(float *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x20),0x3f800000,
                 0x3f800000);
    uVar1 = param_2 - 1;
    pfVar3 = extraout_EDX;
    if (1 < uVar1) {
      iVar4 = param_2 - 2;
      pfVar2 = extraout_EDX;
      do {
        pfVar3 = pfVar2 + 7;
        FUN_006c1550(pfVar3,pfVar2[1],pfVar2[0xf],*pfVar3 - *pfVar2,pfVar2[0xe] - *pfVar3);
        iVar4 = iVar4 + -1;
        pfVar2 = extraout_ECX;
        pfVar3 = extraout_EDX_00;
      } while (iVar4 != 0);
    }
    FUN_006c1550(pfVar3 + uVar1 * 7,pfVar3[(param_2 - 2) * 7 + 1],
                 (pfVar3[uVar1 * 7 + 1] + pfVar3[uVar1 * 7 + 1]) - pfVar3[(param_2 - 2) * 7 + 1],
                 0x3f800000,0x3f800000);
  }
  return;
}



uint * FUN_006c1740(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x1c)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 != (uint *)0x0) {
    *puVar2 = param_1;
    _eh_vector_constructor_iterator_(puVar2 + 1,0x1c,param_1,FUN_007616d0,FUN_0060d0a0);
    *unaff_FS_OFFSET = local_c;
    return puVar2 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return (uint *)0x0;
}



undefined4 FUN_006c1810(uint param_1,undefined4 *param_2,uint *param_3)

{
  uint *puVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *_Dst;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  uint local_14;
  uint *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afaab;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  _Src = (void *)*param_2;
  cVar2 = FUN_006d31b0(param_1,_Src,*param_3,&local_14,0x1c,uVar3);
  if (cVar2 != '\0') {
    uVar4 = *param_3 + 1;
    uVar3 = -(uint)((int)((ulonglong)uVar4 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x1c);
    local_10 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    local_4 = 0;
    if (local_10 == (uint *)0x0) {
      _Dst = (uint *)0x0;
    }
    else {
      _Dst = local_10 + 1;
      *local_10 = uVar4;
      _eh_vector_constructor_iterator_(_Dst,0x1c,uVar4,FUN_007616d0,FUN_0060d0a0);
    }
    local_4 = 0xffffffff;
    _memcpy(_Dst,_Src,local_14 * 0x1c);
    if (local_14 < *param_3) {
      _memcpy(_Dst + local_14 * 7 + 7,(void *)(local_14 * 0x1c + (int)_Src),
              (*param_3 - local_14) * 0x1c);
    }
    fVar5 = (float10)FUN_006bb4d0(param_1,_Src,3,*param_3,0x1c);
    local_10 = (uint *)(float)fVar5;
    puVar1 = _Dst + local_14 * 7;
    *puVar1 = param_1;
    puVar1[1] = (uint)local_10;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *param_3 = *param_3 + 1;
    if (_Src != (void *)0x0) {
      _eh_vector_destructor_iterator_(_Src,0x1c,*(int *)((int)_Src + -4),FUN_0060d0a0);
      FUN_00401f20((int)_Src + -4);
    }
    *param_2 = _Dst;
    FUN_006c1650(_Dst,*param_3,0x1c);
    *unaff_FS_OFFSET = local_c;
    return 1;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006c19d0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_006bb5e0(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 8,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0xc,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x10,4,&param_1,1);
  return;
}



void FUN_006c1a50(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  FUN_006bb620(param_1,param_2);
  param_2 = 4;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),iVar1 + 8,4,&param_2,1);
  param_2 = 4;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),iVar1 + 0xc,4,&param_2,1);
  param_2 = 4;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),iVar1 + 0x10,4,&param_2,1);
  return;
}



uint * FUN_006c1ad0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afb5b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = -(uint)((int)((ulonglong)param_2 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)param_2 * 0x1c)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = puVar2 + 1;
    *puVar2 = param_2;
    _eh_vector_constructor_iterator_(puVar4,0x1c,param_2,FUN_007616d0,FUN_0060d0a0);
  }
  local_4 = 0xffffffff;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    FUN_006c19d0(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



void FUN_006c1b90(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_006c1a50(param_1,param_2);
    param_2 = param_2 + 0x1c;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006c1bc0(void)

{
  if (DAT_00b3c7b0 != '\0') {
    return 0;
  }
  _DAT_00b3d124 = 0;
  _DAT_00b3d244 = 0;
  _DAT_00b3d65c = 0;
  DAT_00b3c7b0 = 1;
  _DAT_00b3d094 = FUN_006c1ad0;
  _DAT_00b3d5cc = FUN_006c1b90;
  _DAT_00b3d53c = &LAB_006c1510;
  _DAT_00b3d364 = FUN_006c1740;
  _DAT_00b3d2d4 = &LAB_006c17e0;
  DAT_00b3d3eb = 0x1c;
  _DAT_00b3d004 = &LAB_006c14c0;
  _DAT_00b3d4ac = FUN_006c1440;
  _DAT_00b3d41c = FUN_006c1650;
  _DAT_00b3d1b4 = FUN_006c1810;
  return 1;
}



undefined4 FUN_006c1ca0(uint param_1,undefined4 *param_2,uint *param_3)

{
  void *_Src;
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint *_Dst;
  int *unaff_FS_OFFSET;
  uint local_14;
  uint *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afaab;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  _Src = (void *)*param_2;
  cVar1 = FUN_006d31b0(param_1,_Src,*param_3,&local_14,8,uVar3);
  if (cVar1 != '\0') {
    uVar4 = *param_3 + 1;
    uVar3 = -(uint)((int)((ulonglong)uVar4 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 8);
    local_10 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    local_4 = 0;
    if (local_10 == (uint *)0x0) {
      _Dst = (uint *)0x0;
    }
    else {
      _Dst = local_10 + 1;
      *local_10 = uVar4;
      _eh_vector_constructor_iterator_(_Dst,8,uVar4,FUN_007616d0,FUN_0060d0a0);
    }
    local_4 = 0xffffffff;
    _memcpy(_Dst,_Src,local_14 * 8);
    if (local_14 < *param_3) {
      _memcpy(_Dst + local_14 * 2 + 2,(void *)((int)_Src + local_14 * 8),(*param_3 - local_14) * 8);
    }
    uVar2 = FUN_006bddc0(param_1,_Src,5,*param_3,8);
    _Dst[local_14 * 2] = param_1;
    *(undefined1 *)(_Dst + local_14 * 2 + 1) = uVar2;
    *param_3 = *param_3 + 1;
    if (_Src != (void *)0x0) {
      _eh_vector_destructor_iterator_(_Src,8,*(int *)((int)_Src + -4),FUN_0060d0a0);
      FUN_00401f20((int)_Src + -4);
    }
    *param_2 = _Dst;
    *unaff_FS_OFFSET = local_c;
    return 1;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



uint * FUN_006c1e10(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afb5b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = -(uint)((int)((ulonglong)param_2 * 8 >> 0x20) != 0) | (uint)((ulonglong)param_2 * 8);
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = puVar2 + 1;
    *puVar2 = param_2;
    _eh_vector_constructor_iterator_(puVar4,8,param_2,FUN_007616d0,FUN_0060d0a0);
  }
  local_4 = 0xffffffff;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    FUN_006bdf60(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



void FUN_006c1ed0(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_006bdfc0(param_1,param_2);
    param_2 = param_2 + 8;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006c1f00(void)

{
  if (DAT_00b3c80c != '\0') {
    return 0;
  }
  _DAT_00b3d1a4 = 0;
  _DAT_00b3d2c4 = 0;
  _DAT_00b3d6dc = 0;
  DAT_00b3c80c = 1;
  DAT_00b3d114 = FUN_006c1e10;
  _DAT_00b3d64c = FUN_006c1ed0;
  _DAT_00b3d5bc = &LAB_006c1c80;
  _DAT_00b3d3e4 = FUN_006bf0b0;
  _DAT_00b3d354 = &LAB_006bf150;
  DAT_00b3d40b = 8;
  _DAT_00b3d084 = &LAB_006c1c60;
  _DAT_00b3d52c = &LAB_006c1c50;
  _DAT_00b3d49c = FUN_0060d0a0;
  _DAT_00b3d234 = FUN_006c1ca0;
  return 1;
}



void FUN_006c1f90(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



uint * FUN_006c2000(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x14 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x14)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 != (uint *)0x0) {
    *puVar2 = param_1;
    _eh_vector_constructor_iterator_(puVar2 + 1,0x14,param_1,FUN_006c1f90,FUN_0060d0a0);
    *unaff_FS_OFFSET = local_c;
    return puVar2 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return (uint *)0x0;
}



undefined4 FUN_006c20d0(uint param_1,undefined4 *param_2,uint *param_3)

{
  uint *puVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *_Dst;
  int *unaff_FS_OFFSET;
  uint local_24;
  uint *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c71ab;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  _Src = (void *)*param_2;
  cVar2 = FUN_006d31b0(param_1,_Src,*param_3,&local_24,0x14,uVar3);
  if (cVar2 != '\0') {
    uVar4 = *param_3 + 1;
    uVar3 = -(uint)((int)((ulonglong)uVar4 * 0x14 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x14);
    local_20 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    local_4 = 0;
    if (local_20 == (uint *)0x0) {
      _Dst = (uint *)0x0;
    }
    else {
      _Dst = local_20 + 1;
      *local_20 = uVar4;
      _eh_vector_constructor_iterator_(_Dst,0x14,uVar4,FUN_006c1f90,FUN_0060d0a0);
    }
    local_4 = 0xffffffff;
    _memcpy(_Dst,_Src,local_24 * 0x14);
    if (local_24 < *param_3) {
      _memcpy(_Dst + local_24 * 5 + 5,(void *)(local_24 * 0x14 + (int)_Src),
              (*param_3 - local_24) * 0x14);
    }
    FUN_006be280(&local_1c,param_1,_Src,5,*param_3,0x14);
    puVar1 = _Dst + local_24 * 5;
    *puVar1 = param_1;
    puVar1[1] = local_1c;
    puVar1[2] = local_18;
    puVar1[3] = local_14;
    puVar1[4] = local_10;
    *param_3 = *param_3 + 1;
    if (_Src != (void *)0x0) {
      _eh_vector_destructor_iterator_(_Src,0x14,*(int *)((int)_Src + -4),FUN_0060d0a0);
      FUN_00401f20((int)_Src + -4);
    }
    *param_2 = _Dst;
    *unaff_FS_OFFSET = local_c;
    return 1;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



uint * FUN_006c2270(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afb5b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = -(uint)((int)((ulonglong)param_2 * 0x14 >> 0x20) != 0) | (uint)((ulonglong)param_2 * 0x14)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = puVar2 + 1;
    *puVar2 = param_2;
    _eh_vector_constructor_iterator_(puVar4,0x14,param_2,FUN_006c1f90,FUN_0060d0a0);
  }
  local_4 = 0xffffffff;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    FUN_006bd510(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006c2330(void)

{
  if (DAT_00b3c868 != '\0') {
    return 0;
  }
  _DAT_00b3d174 = 0;
  _DAT_00b3d294 = 0;
  _DAT_00b3d6ac = 0;
  _DAT_00b3d46c = 0;
  DAT_00b3c868 = 1;
  _DAT_00b3d0e4 = FUN_006c2270;
  _DAT_00b3d61c = FUN_006befa0;
  _DAT_00b3d58c = &LAB_006c29e0;
  _DAT_00b3d3b4 = FUN_006c2000;
  _DAT_00b3d324 = &LAB_006c20a0;
  DAT_00b3d3ff = 0x14;
  _DAT_00b3d054 = &LAB_006c1fc0;
  _DAT_00b3d4fc = &LAB_006c1fb0;
  _DAT_00b3d204 = FUN_006c20d0;
  return 1;
}



undefined4 FUN_006c2410(uint param_1,undefined4 *param_2,uint *param_3)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *_Dst;
  int *unaff_FS_OFFSET;
  float10 fVar4;
  uint local_14;
  uint *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afaab;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  _Src = (void *)*param_2;
  cVar1 = FUN_006d31b0(param_1,_Src,*param_3,&local_14,8,uVar2);
  if (cVar1 != '\0') {
    uVar3 = *param_3 + 1;
    uVar2 = -(uint)((int)((ulonglong)uVar3 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 8);
    local_10 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
    local_4 = 0;
    if (local_10 == (uint *)0x0) {
      _Dst = (uint *)0x0;
    }
    else {
      _Dst = local_10 + 1;
      *local_10 = uVar3;
      _eh_vector_constructor_iterator_(_Dst,8,uVar3,FUN_007616d0,FUN_0060d0a0);
    }
    local_4 = 0xffffffff;
    _memcpy(_Dst,_Src,local_14 * 8);
    if (local_14 < *param_3) {
      _memcpy(_Dst + local_14 * 2 + 2,(void *)((int)_Src + local_14 * 8),(*param_3 - local_14) * 8);
    }
    fVar4 = (float10)FUN_006bb4d0(param_1,_Src,5,*param_3,8);
    local_10 = (uint *)(float)fVar4;
    _Dst[local_14 * 2] = param_1;
    (_Dst + local_14 * 2)[1] = (uint)local_10;
    *param_3 = *param_3 + 1;
    if (_Src != (void *)0x0) {
      _eh_vector_destructor_iterator_(_Src,8,*(int *)((int)_Src + -4),FUN_0060d0a0);
      FUN_00401f20((int)_Src + -4);
    }
    *param_2 = _Dst;
    *unaff_FS_OFFSET = local_c;
    return 1;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



uint * FUN_006c2590(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afb5b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = -(uint)((int)((ulonglong)param_2 * 8 >> 0x20) != 0) | (uint)((ulonglong)param_2 * 8);
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = puVar2 + 1;
    *puVar2 = param_2;
    _eh_vector_constructor_iterator_(puVar4,8,param_2,FUN_007616d0,FUN_0060d0a0);
  }
  local_4 = 0xffffffff;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    FUN_006bb5e0(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006c2650(void)

{
  if (DAT_00b3c8c4 != '\0') {
    return 0;
  }
  _DAT_00b3d12c = 0;
  _DAT_00b3d24c = 0;
  _DAT_00b3d664 = 0;
  DAT_00b3c8c4 = 1;
  _DAT_00b3d09c = FUN_006c2590;
  _DAT_00b3d5d4 = FUN_006bf300;
  _DAT_00b3d544 = &LAB_006c23f0;
  _DAT_00b3d36c = FUN_006bf0b0;
  _DAT_00b3d2dc = &LAB_006bf150;
  DAT_00b3d3ed = 8;
  _DAT_00b3d00c = &LAB_006c23c0;
  _DAT_00b3d4b4 = &LAB_006bf060;
  _DAT_00b3d424 = FUN_0060d0a0;
  _DAT_00b3d1bc = FUN_006c2410;
  return 1;
}



void FUN_006c2740(undefined4 param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 8);
  fVar2 = *(float *)(param_3 + 8);
  fVar3 = *(float *)(param_2 + 0xc);
  fVar4 = *(float *)(param_3 + 0xc);
  *param_4 = *(float *)(param_2 + 4) - *(float *)(param_3 + 4);
  param_4[1] = fVar1 - fVar2;
  param_4[2] = fVar3 - fVar4;
  return;
}



undefined4 FUN_006c2790(uint param_1,undefined4 *param_2,uint *param_3)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *_Dst;
  int *unaff_FS_OFFSET;
  uint local_20;
  uint *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c285b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  _Src = (void *)*param_2;
  cVar1 = FUN_006d31b0(param_1,_Src,*param_3,&local_20,0x10,uVar2);
  if (cVar1 != '\0') {
    uVar4 = *param_3 + 1;
    uVar2 = -(uint)((int)((ulonglong)uVar4 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x10);
    local_1c = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
    local_4 = 0;
    if (local_1c == (uint *)0x0) {
      _Dst = (uint *)0x0;
    }
    else {
      _Dst = local_1c + 1;
      *local_1c = uVar4;
      _eh_vector_constructor_iterator_(_Dst,0x10,uVar4,FUN_007616d0,FUN_0060d0a0);
    }
    local_4 = 0xffffffff;
    _memcpy(_Dst,_Src,local_20 << 4);
    if (local_20 < *param_3) {
      _memcpy(_Dst + local_20 * 4 + 4,(void *)(local_20 * 0x10 + (int)_Src),
              (*param_3 - local_20) * 0x10);
    }
    FUN_006bbdc0(&local_18,param_1,_Src,5,*param_3,0x10);
    puVar3 = _Dst + local_20 * 4;
    *puVar3 = param_1;
    puVar3[1] = local_18;
    puVar3[2] = local_14;
    puVar3[3] = local_10;
    *param_3 = *param_3 + 1;
    if (_Src != (void *)0x0) {
      _eh_vector_destructor_iterator_(_Src,0x10,*(int *)((int)_Src + -4),FUN_0060d0a0);
      FUN_00401f20((int)_Src + -4);
    }
    *param_2 = _Dst;
    *unaff_FS_OFFSET = local_c;
    return 1;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006c2920(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 + param_1 * 6) * 4;
  *(undefined1 **)(&DAT_00b3d118 + iVar1) = &LAB_006bf3d0;
  *(undefined1 **)(&DAT_00b3cff8 + iVar1) = &LAB_006c2710;
  *(code **)(&DAT_00b3d238 + iVar1) = FUN_006c2740;
  *(undefined1 **)(&DAT_00b3d650 + iVar1) = &LAB_006bbb80;
  *(undefined1 **)(&DAT_00b3d4a0 + iVar1) = &LAB_006bf3c0;
  *(code **)(&DAT_00b3d410 + iVar1) = FUN_0060d0a0;
  *(code **)(&DAT_00b3d1a8 + iVar1) = FUN_006c2790;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006c2980(void)

{
  if (DAT_00b3c920 != '\0') {
    return 0;
  }
  DAT_00b3c920 = 1;
  _DAT_00b3d0b4 = FUN_006bf730;
  _DAT_00b3d5ec = FUN_006bf7f0;
  _DAT_00b3d55c = &LAB_006c26e0;
  _DAT_00b3d384 = FUN_006bf4d0;
  _DAT_00b3d2f4 = &LAB_006bf570;
  DAT_00b3d3f3 = 0x10;
  FUN_006c2920(1,5);
  return 1;
}



uint * FUN_006c2a10(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x14 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x14)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 != (uint *)0x0) {
    *puVar2 = param_1;
    _eh_vector_constructor_iterator_(puVar2 + 1,0x14,param_1,FUN_006c0ad0,FUN_0060d0a0);
    *unaff_FS_OFFSET = local_c;
    return puVar2 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return (uint *)0x0;
}



undefined4 FUN_006c2ab0(uint param_1,undefined4 *param_2,uint *param_3)

{
  uint *puVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *_Dst;
  int *unaff_FS_OFFSET;
  uint local_24;
  uint *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c71ab;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  _Src = (void *)*param_2;
  cVar2 = FUN_006d31b0(param_1,_Src,*param_3,&local_24,0x14,uVar3);
  if (cVar2 != '\0') {
    uVar4 = *param_3 + 1;
    uVar3 = -(uint)((int)((ulonglong)uVar4 * 0x14 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x14);
    local_20 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    local_4 = 0;
    if (local_20 == (uint *)0x0) {
      _Dst = (uint *)0x0;
    }
    else {
      _Dst = local_20 + 1;
      *local_20 = uVar4;
      _eh_vector_constructor_iterator_(_Dst,0x14,uVar4,FUN_006c0ad0,FUN_0060d0a0);
    }
    local_4 = 0xffffffff;
    _memcpy(_Dst,_Src,local_24 * 0x14);
    if (local_24 < *param_3) {
      _memcpy(_Dst + local_24 * 5 + 5,(void *)(local_24 * 0x14 + (int)_Src),
              (*param_3 - local_24) * 0x14);
    }
    FUN_006bd1f0(&local_1c,param_1,_Src,5,*param_3,0x14);
    puVar1 = _Dst + local_24 * 5;
    *puVar1 = param_1;
    puVar1[1] = local_1c;
    puVar1[2] = local_18;
    puVar1[3] = local_14;
    puVar1[4] = local_10;
    *param_3 = *param_3 + 1;
    if (_Src != (void *)0x0) {
      _eh_vector_destructor_iterator_(_Src,0x14,*(int *)((int)_Src + -4),FUN_0060d0a0);
      FUN_00401f20((int)_Src + -4);
    }
    *param_2 = _Dst;
    FUN_006bd310(_Dst,*param_3,0x14);
    *unaff_FS_OFFSET = local_c;
    return 1;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



uint * FUN_006c2c60(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afb5b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = -(uint)((int)((ulonglong)param_2 * 0x14 >> 0x20) != 0) | (uint)((ulonglong)param_2 * 0x14)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = puVar2 + 1;
    *puVar2 = param_2;
    _eh_vector_constructor_iterator_(puVar4,0x14,param_2,FUN_006c0ad0,FUN_0060d0a0);
  }
  local_4 = 0xffffffff;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    FUN_006bd510(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006c2d20(void)

{
  if (DAT_00b3c97c != '\0') {
    return 0;
  }
  _DAT_00b3d15c = 0;
  _DAT_00b3d27c = 0;
  _DAT_00b3d694 = 0;
  DAT_00b3c97c = 1;
  _DAT_00b3d0cc = FUN_006c2c60;
  _DAT_00b3d604 = FUN_006bfaf0;
  _DAT_00b3d574 = &LAB_006c29e0;
  _DAT_00b3d39c = FUN_006c2a10;
  _DAT_00b3d30c = &LAB_006c20a0;
  DAT_00b3d3f9 = 0x14;
  _DAT_00b3d03c = &LAB_006c1fc0;
  _DAT_00b3d4e4 = &LAB_006c1fb0;
  _DAT_00b3d454 = &LAB_006bf8e0;
  _DAT_00b3d1ec = FUN_006c2ab0;
  return 1;
}



void FUN_006c34a0(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_00b3ca30 + 1;
  bVar2 = DAT_00b3ca30 == 0;
  DAT_00b3ca30 = iVar1;
  if (bVar2) {
    FUN_00747c40(&LAB_006c2db0,&LAB_006c31f0);
  }
  return;
}



void FUN_006c34d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0xff7fffff;
  in_ECX[4] = 0xff7fffff;
  in_ECX[7] = 0xff7fffff;
  return;
}



void FUN_006c3500(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *in_ECX = 0xff7fffff;
  in_ECX[1] = 0xff7fffff;
  in_ECX[5] = 0xff7fffff;
  in_ECX[8] = 0xff7fffff;
  in_ECX[9] = 0xff7fffff;
  in_ECX[0xd] = 0xff7fffff;
  in_ECX[0x10] = 0xff7fffff;
  puVar2 = &DAT_00b26dc4;
  puVar3 = in_ECX + 0x11;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



undefined4 FUN_006c3570(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  undefined4 auStack_6c [6];
  undefined4 uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined4 local_2c [7];
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c71db;
  local_c = *unaff_FS_OFFSET;
  uStack_4c = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = *(int *)(in_ECX + 0x30);
  iStack_50 = iVar1 + 0x30;
  uStack_54 = 0x6c35a5;
  FUN_007150f0();
  local_10 = *(undefined4 *)(iVar1 + 0x60);
  local_2c[0] = *(undefined4 *)(iVar1 + 0x54);
  local_2c[1] = *(undefined4 *)(iVar1 + 0x58);
  local_2c[2] = *(undefined4 *)(iVar1 + 0x5c);
  iStack_50 = 0x38;
  uStack_54 = 0x6c35f0;
  iVar1 = FUN_00401f00();
  local_4 = 0;
  if (iVar1 != 0) {
    puVar3 = local_2c;
    puVar4 = auStack_6c;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar2 = FUN_006d5c30();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006c3650(int param_1)

{
  FUN_006ce320(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0xa010068) {
    FUN_00712a20();
  }
  return;
}



undefined1 thunk_FUN_006ce350(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = thunk_FUN_00715f10(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x24))(param_1);
  }
  return 1;
}



uint FUN_006c36b0(float param_1)

{
  float fVar1;
  float fVar2;
  undefined4 in_EAX;
  uint uVar3;
  int *in_ECX;
  float10 fVar4;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),*(byte *)(in_ECX + 2) >> 3);
  if ((*(byte *)(in_ECX + 2) >> 3 & 1) != 0) {
    fVar1 = (float)in_ECX[8];
    uVar3 = (uint)(ushort)((ushort)(param_1 < fVar1) << 8 |
                           (ushort)(NAN(param_1) || NAN(fVar1)) << 10 |
                          (ushort)(param_1 == fVar1) << 0xe);
    if ((param_1 != fVar1) || ((char)in_ECX[0xe] != '\0')) {
      if ((char)in_ECX[0xb] == '\0') {
        *(undefined1 *)(in_ECX + 0xe) = 0;
        return uVar3;
      }
      fVar4 = (float10)(**(code **)(*in_ECX + 100))(param_1);
      fVar1 = (float)fVar4;
      fVar2 = (float)in_ECX[10];
      uVar3 = (uint)(ushort)((ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10
                            | (ushort)(fVar1 == fVar2) << 0xe);
      if ((fVar1 != fVar2) || ((char)in_ECX[0xe] != '\0')) {
        in_ECX[10] = (int)fVar1;
        *(undefined1 *)(in_ECX + 0xe) = 0;
        return uVar3;
      }
    }
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}



void FUN_006c3730(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = DAT_00b24260;
  *(undefined4 *)(in_ECX + 8) = DAT_00b24264;
  *(undefined4 *)(in_ECX + 0xc) = DAT_00b24268;
  *(undefined4 *)(in_ECX + 0x10) = DAT_00b3cba4;
  *(undefined4 *)(in_ECX + 0x14) = DAT_00b3cba8;
  *(undefined4 *)(in_ECX + 0x18) = DAT_00b3cbac;
  *(undefined4 *)(in_ECX + 0x1c) = DAT_00b3cbb0;
  *(undefined4 *)(in_ECX + 0x20) = 0xff7fffff;
  *(undefined4 *)(in_ECX + 0x24) = DAT_00b24260;
  *(undefined4 *)(in_ECX + 0x28) = DAT_00b24264;
  *(undefined4 *)(in_ECX + 0x2c) = DAT_00b24268;
  *(undefined4 *)(in_ECX + 0x30) = DAT_00b3cba4;
  *(undefined4 *)(in_ECX + 0x34) = DAT_00b3cba8;
  *(undefined4 *)(in_ECX + 0x38) = DAT_00b3cbac;
  *(undefined4 *)(in_ECX + 0x3c) = DAT_00b3cbb0;
  *(undefined4 *)(in_ECX + 0x40) = 0xff7fffff;
  FUN_006c3500();
  return;
}



void FUN_006c37d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7213;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006cce40(param_1,param_2,param_3);
  *in_ECX = &PTR_FUN_00a79584;
  in_ECX[0xc] = DAT_00b24260;
  in_ECX[0xd] = DAT_00b24264;
  in_ECX[0xe] = DAT_00b24268;
  in_ECX[0xf] = DAT_00b3cba4;
  in_ECX[0x10] = DAT_00b3cba8;
  in_ECX[0x11] = DAT_00b3cbac;
  in_ECX[0x12] = DAT_00b3cbb0;
  in_ECX[0x13] = 0xff7fffff;
  bVar1 = *(byte *)((int)in_ECX + 0xd);
  local_4 = 0;
  in_ECX[0x14] = 0;
  *(undefined1 *)(in_ECX + 0x15) = 0;
  if (bVar1 != 0) {
    pvVar3 = (void *)FUN_00401f00((uint)bVar1 * 0x68,uVar2);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      _vector_constructor_iterator_(pvVar3,0x68,(uint)bVar1,FUN_006c3730);
    }
    in_ECX[0x14] = pvVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006c38f0(byte param_1)

{
  FUN_006ce520();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006c3910(float param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = __isnan((double)param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_00983ffd((double)param_1);
    if (iVar1 != 0) {
      *(float *)(in_ECX + 0x28) = param_1;
    }
  }
  if (*(int *)(in_ECX + 0x2c) != 0) {
    FUN_006e1f60(0,0,0);
  }
  return;
}



void FUN_006c3960(float param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5,
                 undefined4 param_6,undefined4 param_7,float param_8)

{
  int in_ECX;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_5 != -3.4028235e+38) {
    local_c = param_5;
    local_10 = param_4;
    local_8 = param_6;
    local_4 = param_7;
    FUN_00471430(&local_10);
    if (*(int *)(in_ECX + 0x2c) != 0) {
      FUN_006e1e90(0,0,0);
    }
  }
  if (param_8 != -3.4028235e+38) {
    FUN_006c3910(param_8);
  }
  if (param_1 != -3.4028235e+38) {
    local_10 = param_1;
    local_8 = param_3;
    local_c = (float)param_2;
    FUN_00471390(&local_10);
    if (*(int *)(in_ECX + 0x2c) != 0) {
      FUN_006e1f00(0,0,0);
    }
  }
  return;
}



void FUN_006c3a40(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7238;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x3c);
  local_4 = 0;
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



void FUN_006c3ac0(int *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_5c [6];
  undefined4 uStack_44;
  int iStack_40;
  undefined4 local_20 [7];
  undefined4 local_4;
  
  if (param_1 != (int *)0x0) {
    iStack_40 = 0x6c3add;
    for (puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))();
        (puVar1 != (undefined4 *)0x0 && (puVar1 != &DAT_00b3d91c)); puVar1 = (undefined4 *)puVar1[1]
        ) {
    }
  }
  iVar2 = *(int *)(in_ECX + 0x30);
  iStack_40 = iVar2 + 0x30;
  uStack_44 = 0x6c3b09;
  FUN_007150f0();
  local_4 = *(undefined4 *)(iVar2 + 0x60);
  local_20[0] = *(undefined4 *)(iVar2 + 0x54);
  local_20[1] = *(undefined4 *)(iVar2 + 0x58);
  local_20[2] = *(undefined4 *)(iVar2 + 0x5c);
  puVar1 = local_20;
  puVar3 = auStack_5c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_006c3960();
  return;
}



undefined4
FUN_006c3b70(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7276;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_c;
  *unaff_FS_OFFSET = &local_c;
  if (param_3 == '\0') {
    iVar2 = FUN_00401f00(0x30,uVar1);
    local_4 = 1;
    if (iVar2 != 0) {
      uVar3 = FUN_006cbc60(param_2,param_4,param_5);
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
  }
  else {
    iVar2 = FUN_00401f00(0x58,uVar1);
    local_4 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_006c37d0(param_2,param_4,param_5);
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006c3c40(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  undefined4 unaff_ESI;
  undefined4 *puVar4;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    cVar3 = FUN_006c36b0(param_1);
    if (cVar3 != '\0') {
      if (*(int **)(in_ECX + 0x3c) == (int *)0x0) {
        return;
      }
      cVar3 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x94))();
      if (cVar3 == '\0') {
        return;
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x28) = 0xff7fffff;
  }
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    local_4 = 0xff7fffff;
    local_20 = DAT_00b24260;
    local_18 = DAT_00b24268;
    local_10 = DAT_00b3cba8;
    local_1c = DAT_00b24264;
    local_8 = DAT_00b3cbb0;
    local_14 = DAT_00b3cba4;
    puVar4 = &local_20;
    fVar1 = *(float *)(in_ECX + 0x30);
    local_c = DAT_00b3cbac;
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x4c))(*(undefined4 *)(in_ECX + 0x28));
    if (cVar3 != '\0') {
      iVar2 = *(int *)(in_ECX + 0x30);
      if (fVar1 != -3.4028235e+38) {
        *(float *)(iVar2 + 0x54) = fVar1;
        *(undefined4 **)(iVar2 + 0x58) = puVar4;
        *(undefined4 *)(iVar2 + 0x5c) = unaff_ESI;
      }
      if (local_1c != -3.4028235e+38) {
        FUN_0047c600(iVar2 + 0x30);
      }
      if (local_10 != -3.4028235e+38) {
        *(float *)(iVar2 + 0x60) = ABS(local_10);
        return;
      }
    }
  }
  return;
}



void FUN_006c3db0(int param_1)

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
    iVar3 = FUN_00401f00(0x38);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_006d5b20(uVar2);
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar2);
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x7c))();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006c3e50(void)

{
  undefined4 *in_ECX;
  
  FUN_006ce1d0();
  *in_ECX = &PTR_FUN_00a79634;
  return;
}



undefined4 * FUN_006c3e80(undefined4 param_1)

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
    FUN_006ce1d0();
    *puVar2 = &PTR_FUN_00a79634;
  }
  local_4 = 0xffffffff;
  FUN_006ce2c0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_006c3f00(void)

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
    FUN_006ce1d0();
    *puVar2 = &PTR_FUN_00a79634;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_006c3f60(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ce3f0(param_1);
  param_1 = FUN_0070f910(DAT_00b3ca58);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006c3fd0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a796e4;
  FUN_0055ace0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint FUN_006c4000(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint in_EAX;
  uint uVar1;
  
  if ((*(int *)(param_1 + 0x44) != 0) && (*(int *)(param_2 + 0x44) == 0)) {
    FUN_006c9cb0(param_3,0);
    uVar1 = FUN_006c9ba0(param_4,param_5,param_6,param_3,param_7,0);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}



void FUN_006c4060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_006c9e00(param_2,param_3,param_4,param_5,param_6);
  return;
}



void FUN_006c4090(void)

{
  undefined4 *in_ECX;
  
  FUN_00401f20(*in_ECX);
  return;
}



void FUN_006c40a0(uint param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint *puVar4;
  LONG LVar5;
  int *in_ECX;
  uint uVar6;
  int *unaff_FS_OFFSET;
  uint local_14;
  uint *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8ceb;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != in_ECX[1]) {
    if (param_1 == 0) {
      local_10 = (uint *)0x0;
    }
    else {
      uVar6 = -(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 4);
      puVar4 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar6) | uVar6 + 4,uVar3);
      local_4 = 0;
      if (puVar4 == (uint *)0x0) {
        local_10 = (uint *)0x0;
      }
      else {
        local_10 = puVar4 + 1;
        *puVar4 = param_1;
        _eh_vector_constructor_iterator_(local_10,4,param_1,FUN_007c88a0,FUN_007016a0);
      }
      local_4 = 0xffffffff;
      local_14 = 0;
      if (in_ECX[2] != 0) {
        do {
          puVar1 = (undefined4 *)local_10[local_14];
          puVar4 = (uint *)(*in_ECX + local_14 * 4);
          if (puVar1 != (undefined4 *)*puVar4) {
            if (((puVar1 != (undefined4 *)0x0) &&
                (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
               (puVar1 != (undefined4 *)0x0)) {
              (**(code **)*puVar1)(1);
            }
            uVar3 = *puVar4;
            local_10[local_14] = uVar3;
            if (uVar3 != 0) {
              InterlockedIncrement((LONG *)(uVar3 + 4));
            }
          }
          local_14 = local_14 + 1;
        } while (local_14 < (uint)in_ECX[2]);
      }
    }
    pvVar2 = (void *)*in_ECX;
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar2,4,*(int *)((int)pvVar2 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar2 + -4);
    }
    *in_ECX = (int)local_10;
    in_ECX[1] = param_1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006c4200(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  if (((*(byte *)(in_ECX + 8) >> 3 & 1) != 0) && (uVar2 = 0, *(int *)(in_ECX + 0x54) != 0)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x4c) + uVar2 * 4);
      FUN_006ca950(param_1,1);
      if (*(int *)(iVar1 + 0x44) == 0) {
        *(int *)(in_ECX + 0x54) = *(int *)(in_ECX + 0x54) + -1;
        *(undefined4 *)(*(int *)(in_ECX + 0x4c) + uVar2 * 4) =
             *(undefined4 *)(*(int *)(in_ECX + 0x4c) + *(int *)(in_ECX + 0x54) * 4);
        uVar2 = uVar2 - 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 0x54));
  }
  return;
}



undefined4 FUN_006c42b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int in_ECX;
  uint uVar5;
  undefined4 local_c;
  int *local_8;
  undefined4 local_4;
  
  iVar3 = param_1;
  cVar4 = FUN_00715820(param_1);
  if ((cVar4 != '\0') && (*(short *)(in_ECX + 0x46) == *(short *)(iVar3 + 0x46))) {
    param_1 = FUN_006a9030();
    do {
      if (param_1 == 0) {
        uVar5 = 0;
        param_1 = 0;
        if (*(short *)(in_ECX + 0x46) == 0) {
          return 1;
        }
        do {
          piVar1 = *(int **)(*(int *)(in_ECX + 0x40) + uVar5 * 4);
          piVar2 = *(int **)(*(int *)(iVar3 + 0x40) + uVar5 * 4);
          if ((piVar1 == (int *)0x0) || (piVar2 == (int *)0x0)) {
            if (piVar1 != piVar2) {
              return 0;
            }
          }
          else {
            cVar4 = (**(code **)(*piVar1 + 0x2c))(piVar2);
            if (cVar4 == '\0') {
              return 0;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(in_ECX + 0x46));
        return 1;
      }
      FUN_00452600(&param_1,&local_c,&local_8);
      cVar4 = FUN_0055e000(local_c,&local_4);
    } while ((cVar4 != '\0') && (cVar4 = (**(code **)(*local_8 + 0x2c))(local_4), cVar4 != '\0'));
    return 0;
  }
  return 0;
}



undefined4 * FUN_006c4390(int param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *piVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7c98;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar6 = 0;
  if (*(short *)(in_ECX + 0x46) != 0) {
    do {
      puVar4 = *(undefined4 **)(*(int *)(in_ECX + 0x40) + uVar6 * 4);
      if ((puVar4 != (undefined4 *)0x0) &&
         ((InterlockedIncrement(puVar4 + 1), param_2 == '\0' || (puVar4[0x11] != 0)))) {
        uVar2 = 0;
        if (puVar4[3] != 0) {
          piVar5 = (int *)puVar4[5];
          do {
            if ((*piVar5 != 0) && (*piVar5 == param_1)) {
              local_4 = 0xffffffff;
              LVar3 = InterlockedDecrement(puVar4 + 1);
              if (LVar3 == 0) {
                (**(code **)*puVar4)(1,uVar1);
              }
              goto LAB_006c443b;
            }
            uVar2 = uVar2 + 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 < (uint)puVar4[3]);
        }
      }
      local_4 = 0xffffffff;
      if ((puVar4 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar4 + 1), LVar3 == 0)) {
        (**(code **)*puVar4)(1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(in_ECX + 0x46));
  }
  puVar4 = (undefined4 *)0x0;
LAB_006c443b:
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



uint FUN_006c4480(undefined4 param_1)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(in_ECX + 0x54) != 0) {
    do {
      in_EAX = *(uint *)(in_ECX + 0x4c);
      if (*(int *)(*(int *)(in_EAX + uVar1 * 4) + 0x44) == 4) {
        in_EAX = FUN_006c9cb0(param_1,0);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 0x54));
  }
  return in_EAX & 0xffffff00;
}



void FUN_006c44c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7973c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_006c4510(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  LONG LVar8;
  uint *puVar9;
  int in_ECX;
  uint uVar10;
  uint *puVar11;
  ushort uVar12;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d71cb;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != *(ushort *)(in_ECX + 8)) {
    uVar12 = (ushort)param_1;
    if (param_1 < *(ushort *)(in_ECX + 10)) {
      uVar10 = param_1 & 0xffff;
      if (uVar12 < *(ushort *)(in_ECX + 10)) {
        do {
          piVar1 = (int *)(*(int *)(in_ECX + 4) + (uVar10 & 0xffff) * 4);
          if (*piVar1 != 0) {
            puVar2 = (undefined4 *)*piVar1;
            local_4 = 0;
            if (puVar2 != (undefined4 *)0x0) {
              LVar8 = InterlockedDecrement(puVar2 + 1);
              if ((LVar8 == 0) && (puVar2 != (undefined4 *)0x0)) {
                (**(code **)*puVar2)(1);
              }
              *piVar1 = 0;
            }
            *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
          }
          uVar10 = uVar10 + 1;
        } while ((ushort)uVar10 < *(ushort *)(in_ECX + 10));
      }
      *(ushort *)(in_ECX + 10) = uVar12;
    }
    local_4 = 0xffffffff;
    pvVar3 = *(void **)(in_ECX + 4);
    *(ushort *)(in_ECX + 8) = uVar12;
    if (param_1 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      param_1 = param_1 & 0xffff;
      puVar9 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < param_1 * 4) | param_1 * 4 + 4,uVar7);
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
      uVar12 = 0;
      if (*(short *)(in_ECX + 10) != 0) {
        do {
          iVar4 = *(int *)(in_ECX + 4);
          iVar6 = (uint)uVar12 * 4;
          puVar2 = *(undefined4 **)(iVar4 + iVar6);
          if (puVar2 != *(undefined4 **)(iVar6 + (int)pvVar3)) {
            if (((puVar2 != (undefined4 *)0x0) &&
                (LVar8 = InterlockedDecrement(puVar2 + 1), LVar8 == 0)) &&
               (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            iVar5 = *(int *)(iVar6 + (int)pvVar3);
            *(int *)(iVar4 + iVar6) = iVar5;
            if (iVar5 != 0) {
              InterlockedIncrement((LONG *)(iVar5 + 4));
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(in_ECX + 10));
      }
      uVar12 = *(ushort *)(in_ECX + 10);
      if (uVar12 < *(ushort *)(in_ECX + 8)) {
        do {
          iVar4 = *(int *)(in_ECX + 4);
          puVar2 = *(undefined4 **)(iVar4 + (uint)uVar12 * 4);
          local_4 = 2;
          if (puVar2 != (undefined4 *)0x0) {
            LVar8 = InterlockedDecrement(puVar2 + 1);
            if ((LVar8 == 0) && (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            *(undefined4 *)(iVar4 + (uint)uVar12 * 4) = 0;
          }
          uVar12 = uVar12 + 1;
          local_4 = 0xffffffff;
        } while (uVar12 < *(ushort *)(in_ECX + 8));
      }
    }
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar3,4,*(int *)((int)pvVar3 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar3 + -4);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006c4790(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int *in_ECX;
  
  iVar3 = in_ECX[1];
  if (in_ECX[2] == iVar3) {
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = iVar3 * 2;
    }
    FUN_006c40a0(iVar3);
  }
  piVar1 = (int *)(*in_ECX + in_ECX[2] * 4);
  in_ECX[2] = in_ECX[2] + 1;
  puVar2 = (undefined4 *)*piVar1;
  if (puVar2 != (undefined4 *)*param_1) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    iVar3 = *param_1;
    *piVar1 = iVar3;
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006c47fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      InterlockedIncrement((LONG *)(iVar3 + 4));
      return;
    }
  }
  return;
}



void FUN_006c4810(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *in_ECX;
  
  in_ECX[2] = in_ECX[2] + -1;
  iVar1 = in_ECX[2];
  iVar2 = *in_ECX;
  puVar3 = *(undefined4 **)(iVar2 + param_1 * 4);
  if (puVar3 != *(undefined4 **)(iVar2 + iVar1 * 4)) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    iVar1 = *(int *)(iVar2 + iVar1 * 4);
    *(int *)(iVar2 + param_1 * 4) = iVar1;
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006c485e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      InterlockedIncrement((LONG *)(iVar1 + 4));
      return;
    }
  }
  return;
}



void FUN_006c4870(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7975c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_006c4890(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7973c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006c48c0(byte param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  pvVar1 = (void *)in_ECX[1];
  *in_ECX = &PTR_FUN_00a7977c;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006c4910(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7975c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c4940(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  
  if ((_DAT_00b3ca98 & 1) == 0) {
    _DAT_00b3ca98 = _DAT_00b3ca98 | 1;
    DAT_00b3ca94 = 0;
    _atexit(FUN_00a267d0);
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == DAT_00b3ca94) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != DAT_00b3ca94) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == DAT_00b3ca94) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != DAT_00b3ca94) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
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



int * FUN_006c4a10(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  int *piVar5;
  int iVar6;
  int in_ECX;
  undefined4 *puVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d6b98;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar8 = 0;
  local_14 = (undefined4 *)0x0;
  if (*(ushort *)(in_ECX + 0x46) != 0) {
    piVar5 = *(int **)(in_ECX + 0x40);
    do {
      puVar1 = (undefined4 *)*piVar5;
      if (puVar1 == param_2) {
        local_10 = puVar1;
        if (puVar1 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar1 + 1);
        }
        local_4 = 0;
        FUN_006d7f60(&local_18,uVar8);
        if (((local_18 != (undefined4 *)0x0) &&
            (LVar4 = InterlockedDecrement(local_18 + 1), LVar4 == 0)) &&
           (local_18 != (undefined4 *)0x0)) {
          (**(code **)*local_18)(1,uVar3);
        }
        uVar3 = 0;
        if (*(uint *)(in_ECX + 0x5c) == 0) goto LAB_006c4aef;
        piVar5 = *(int **)(in_ECX + 0x60);
        goto LAB_006c4ae0;
      }
      uVar8 = uVar8 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar8 < *(ushort *)(in_ECX + 0x46));
  }
  *param_1 = 0;
  goto LAB_006c4a6c;
  while( true ) {
    uVar3 = uVar3 + 1;
    piVar5 = piVar5 + 1;
    if (*(uint *)(in_ECX + 0x5c) <= uVar3) break;
LAB_006c4ae0:
    if (*piVar5 != 0) {
      piVar5 = (int *)(*(int **)(in_ECX + 0x60))[uVar3];
      goto joined_r0x006c4af3;
    }
  }
LAB_006c4aef:
  piVar5 = (int *)0x0;
joined_r0x006c4af3:
  do {
    if (piVar5 == (int *)0x0) goto LAB_006c4b57;
    local_14 = (undefined4 *)piVar5[2];
    iVar2 = piVar5[1];
    piVar5 = (int *)*piVar5;
    if (piVar5 == (int *)0x0) {
      iVar6 = (**(code **)(*(int *)(in_ECX + 0x58) + 4))(iVar2);
      uVar3 = iVar6 + 1;
      if (uVar3 < *(uint *)(in_ECX + 0x5c)) {
        puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x60) + uVar3 * 4);
        do {
          piVar5 = (int *)*puVar7;
          if (piVar5 != (int *)0x0) goto LAB_006c4b32;
          uVar3 = uVar3 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar3 < *(uint *)(in_ECX + 0x5c));
      }
      piVar5 = (int *)0x0;
    }
LAB_006c4b32:
  } while (local_14 != param_2);
  FUN_004524c0(iVar2);
LAB_006c4b57:
  uVar3 = 0;
  if (*(int *)(in_ECX + 0x54) != 0) {
    do {
      if (*(undefined4 **)(*(int *)(in_ECX + 0x4c) + uVar3 * 4) == param_2) {
        *(int *)(in_ECX + 0x54) = *(int *)(in_ECX + 0x54) + -1;
        *(undefined4 *)(*(int *)(in_ECX + 0x4c) + uVar3 * 4) =
             *(undefined4 *)(*(int *)(in_ECX + 0x4c) + *(int *)(in_ECX + 0x54) * 4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 0x54));
  }
  FUN_006cac60();
  puVar1[0x10] = 0;
  *param_1 = (int)puVar1;
  InterlockedIncrement(puVar1 + 1);
  local_4 = 0xffffffff;
  LVar4 = InterlockedDecrement(puVar1 + 1);
  if (LVar4 == 0) {
    (**(code **)*puVar1)(1);
  }
LAB_006c4a6c:
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_006c4bd0(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (*(short *)(in_ECX + 0x46) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x40) + uVar2 * 4);
      if (iVar1 != 0) {
        FUN_006cac60();
        *(undefined4 *)(iVar1 + 0x40) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0x46));
  }
  FUN_00739670();
  FUN_007c2a40();
  return;
}



void FUN_006c4c20(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  LONG LVar7;
  int in_ECX;
  uint uVar8;
  int *unaff_FS_OFFSET;
  uint uStack_18;
  int local_14;
  undefined4 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d6b08;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00715e40(param_1);
  uVar8 = 0;
  if (*(short *)(in_ECX + 0x46) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x40) + uVar8 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x38))(param_1,uVar5);
        FUN_006c9590(*(undefined4 *)(in_ECX + 0x30));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(in_ECX + 0x46));
  }
  FUN_0055e000(in_ECX,&local_14);
  uStack_18 = 0;
  if (*(int *)(in_ECX + 0x78) != 0) {
    local_14 = local_14 + 0x70;
    do {
      piVar1 = (int *)*param_1;
      uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x70) + uStack_18 * 4);
      iVar6 = (**(code **)(*piVar1 + 4))(uVar2);
      for (puVar3 = *(undefined4 **)(piVar1[2] + iVar6 * 4); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        cVar4 = (**(code **)(*piVar1 + 8))(uVar2,puVar3[1]);
        if (cVar4 != '\0') {
          puVar3 = (undefined4 *)puVar3[2];
          puStack_10 = puVar3;
          if (puVar3 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar3 + 1);
          }
          uStack_4 = 0;
          FUN_006c4790(&puStack_10);
          uStack_4 = 0xffffffff;
          if ((puVar3 != (undefined4 *)0x0) &&
             (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) {
            (**(code **)*puVar3)(1);
          }
          goto LAB_006c4d05;
        }
      }
      FUN_006c4790(*(int *)(in_ECX + 0x70) + uStack_18 * 4);
LAB_006c4d05:
      uStack_18 = uStack_18 + 1;
    } while (uStack_18 < *(uint *)(in_ECX + 0x78));
  }
  if (*(int **)(in_ECX + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x7c) + 0x38))(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_006c4da0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  uint auStack_8 [2];
  
  piVar2 = param_1;
  FUN_00716050(param_1);
  param_1 = (int *)CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0x6c));
  auStack_8[1] = 1;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],&param_1,1,auStack_8 + 1,1);
  auStack_8[0] = (uint)*(ushort *)(in_ECX + 0x46);
  auStack_8[1] = 4;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],auStack_8,4,auStack_8 + 1,1);
  uVar3 = 0;
  if (auStack_8[0] != 0) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x40) + uVar3 * 4);
      if (iVar1 != 0) {
        (**(code **)(*piVar2 + 0x2c))(iVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < auStack_8[0]);
  }
  (**(code **)(*piVar2 + 0x2c))(*(undefined4 *)(in_ECX + 0x7c));
  return;
}



void FUN_006c4ec0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7298;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a79784;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a7973c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006c4f30(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a797c4;
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
  FUN_006c4ec0();
  return;
}



void FUN_006c4fe0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c72c8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a797a4;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a7975c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006c5050(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a797e4;
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
  FUN_006c4fe0();
  return;
}



void FUN_006c50a0(byte param_1)

{
  FUN_006c4ec0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006c50c0(byte param_1)

{
  FUN_006c4f30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006c50e0(byte param_1)

{
  FUN_006c4fe0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006c5120(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c732f;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a79804;
  local_4 = 5;
  FUN_00739670(uVar3);
  in_ECX[0x1e] = 0;
  puVar1 = (undefined4 *)in_ECX[0x1f];
  local_4._0_1_ = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  pvVar2 = (void *)in_ECX[0x1c];
  local_4._0_1_ = 3;
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar2,4,*(int *)((int)pvVar2 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar2 + -4);
  }
  local_4._0_1_ = 2;
  FUN_006c5050();
  FUN_00401f20(in_ECX[0x13]);
  pvVar2 = (void *)in_ECX[0x10];
  local_4 = (uint)local_4._1_3_ << 8;
  in_ECX[0xf] = &PTR_FUN_00a7977c;
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar2,4,*(int *)((int)pvVar2 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar2 + -4);
  }
  local_4 = 0xffffffff;
  FUN_00715a70();
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_006c5240(int *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  LONG LVar7;
  int in_ECX;
  uint uVar8;
  ushort uVar9;
  
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = *(ushort *)(in_ECX + 10);
  if (*(ushort *)(in_ECX + 0xc) < uVar1) {
    uVar6 = uVar1 - 1;
    uVar9 = uVar1;
    if (-1 < (short)uVar6) {
      do {
        uVar5 = uVar6;
        if ((*(int *)(*(int *)(in_ECX + 4) + (short)uVar6 * 4) != 0) &&
           (uVar5 = uVar9, (int)(short)uVar9 != (uint)uVar1)) break;
        uVar9 = uVar5;
        uVar6 = uVar6 - 1;
      } while (-1 < (short)uVar6);
    }
    uVar8 = (uint)(short)uVar9;
    if (uVar8 != uVar1) {
      iVar2 = *(int *)(in_ECX + 4);
      puVar3 = *(undefined4 **)(iVar2 + uVar8 * 4);
      if (puVar3 != (undefined4 *)*param_1) {
        if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)
            ) && (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        iVar4 = *param_1;
        *(int *)(iVar2 + uVar8 * 4) = iVar4;
        if (iVar4 != 0) {
          InterlockedIncrement((LONG *)(iVar4 + 4));
        }
      }
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
      return uVar8;
    }
  }
  uVar8 = (uint)uVar1;
  if (*(ushort *)(in_ECX + 8) <= uVar8) {
    FUN_006c4510(*(ushort *)(in_ECX + 0xe) + uVar8);
  }
  FUN_006c4940(uVar8,param_1);
  return uVar8;
}



void FUN_006c5340(byte param_1)

{
  FUN_006c5050();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006c5360(undefined4 param_1)

{
  uint uVar1;
  void *_Dst;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7363;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar1);
  *in_ECX = &PTR_FUN_00a798c4;
  in_ECX[3] = 0x25;
  local_4 = 0;
  in_ECX[2] = &PTR_FUN_00a7973c;
  in_ECX[5] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[4] = _Dst;
  _memset(_Dst,0,in_ECX[3] * 4);
  *(undefined1 *)(in_ECX + 6) = 1;
  in_ECX[2] = &PTR_FUN_00a79880;
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[7] = param_1;
  FUN_00716690();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006c5420(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1c) = param_1;
  return;
}



uint FUN_006c5430(undefined4 param_1)

{
  char cVar1;
  uint local_4;
  
  local_4 = 0;
  cVar1 = FUN_0055e000(param_1,&local_4);
  return -(uint)(cVar1 != '\0') & local_4;
}



void FUN_006c5490(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7388;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a798c4;
  local_4 = 0;
  FUN_006c4f30(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a796e4;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006c5500(byte param_1)

{
  FUN_006c5490();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006c5520(void)

{
  uint uVar1;
  void *_Dst;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c73d9;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00715990(uVar1);
  *in_ECX = &PTR_FUN_00a79804;
  in_ECX[0xf] = &PTR_FUN_00a7977c;
  *(undefined2 *)(in_ECX + 0x11) = 0;
  *(undefined2 *)((int)in_ECX + 0x4a) = 10;
  *(undefined2 *)((int)in_ECX + 0x46) = 0;
  *(undefined2 *)(in_ECX + 0x12) = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x17] = 0x25;
  local_4 = 3;
  in_ECX[0x16] = &PTR_FUN_00a7975c;
  in_ECX[0x19] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[0x18] = _Dst;
  _memset(_Dst,0,in_ECX[0x17] * 4);
  *(undefined1 *)(in_ECX + 0x1a) = 0;
  in_ECX[0x16] = &PTR_FUN_00a798a0;
  *(undefined1 *)(in_ECX + 0x1b) = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006c55f0(byte param_1)

{
  FUN_006c5120();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006c5610(undefined4 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *_Dst;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c744a;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00715990(uVar2);
  *in_ECX = &PTR_FUN_00a79804;
  in_ECX[0xf] = &PTR_FUN_00a7977c;
  *(undefined2 *)(in_ECX + 0x11) = 0;
  *(undefined2 *)((int)in_ECX + 0x4a) = 10;
  *(undefined2 *)((int)in_ECX + 0x46) = 0;
  *(undefined2 *)(in_ECX + 0x12) = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x17] = 0x25;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  in_ECX[0x16] = &PTR_FUN_00a7975c;
  in_ECX[0x19] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[0x18] = _Dst;
  _memset(_Dst,0,in_ECX[0x17] * 4);
  *(undefined1 *)(in_ECX + 0x1a) = 0;
  in_ECX[0x16] = &PTR_FUN_00a798a0;
  *(undefined1 *)(in_ECX + 0x1b) = param_2;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  local_4._0_1_ = 7;
  FUN_00715ce0(param_1);
  iVar3 = FUN_00401f00(0x20);
  local_4._0_1_ = 8;
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_006c5360(param_1);
  }
  puVar1 = (undefined4 *)in_ECX[0x1f];
  local_4 = CONCAT31(local_4._1_3_,7);
  if (puVar1 != puVar4) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x1f] = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_006c5760(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  LONG LVar2;
  int in_ECX;
  uint *unaff_FS_OFFSET;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7478;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (uint)&local_c;
  if ((in_ECX != 0) && (param_1[0x10] != 0)) {
LAB_006c57c7:
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  param_1[0x10] = in_ECX;
  if (param_1[0x17] == 0) {
    FUN_0049f4d0(*(undefined4 *)(*(int *)(in_ECX + 0x30) + 8));
  }
  if ((char)param_3 != '\0') {
    cVar1 = FUN_006c9590(*(undefined4 *)(in_ECX + 0x30));
    if (cVar1 == '\0') {
      param_1[0x10] = 0;
      goto LAB_006c57c7;
    }
  }
  if (param_2 != 0) {
    FUN_00434930(param_2);
  }
  param_3 = param_1;
  InterlockedIncrement(param_1 + 1);
  local_4 = 0;
  FUN_006c5240(&param_3);
  local_4 = 0xffffffff;
  LVar2 = InterlockedDecrement(param_1 + 1);
  if (LVar2 == 0) {
    (**(code **)*param_1)(1);
  }
  FUN_00412d30(param_1[2],param_1);
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined4 * FUN_006c5860(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c74b3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 == 0) {
    local_14 = *(uint *)(param_1 + 0xc);
  }
  else {
    local_14 = *(uint *)(param_2 + 0xc);
  }
  uVar5 = 0;
  if (*(int *)(in_ECX + 0x78) != 0) {
    do {
      puVar4 = *(undefined4 **)(*(int *)(in_ECX + 0x70) + uVar5 * 4);
      if (puVar4[0x11] == 0) {
        if (local_14 <= (uint)puVar4[3]) {
          FUN_006c4a10(&local_10,puVar4);
          puVar1 = local_10;
          if (local_10 != (undefined4 *)0x0) {
            LVar3 = InterlockedDecrement(local_10 + 1);
            if (LVar3 == 0) {
              (**(code **)*puVar1)(1);
            }
          }
          goto LAB_006c596c;
        }
        FUN_006c4a10(&local_10,puVar4);
        puVar4 = local_10;
        if (local_10 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(local_10 + 1);
          if (LVar3 == 0) {
            (**(code **)*puVar4)(1);
          }
        }
        FUN_006c4810(uVar5);
        uVar5 = uVar5 - 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(in_ECX + 0x78));
  }
  local_10 = (undefined4 *)FUN_00401f00(0x68,uVar2);
  uStack_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_006c7fb0("__TempBlendSequence__",local_14,0xc,0);
  }
  local_10 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar4 + 1);
  }
  uStack_4 = 1;
  FUN_006c4790(&local_10);
  uStack_4 = 0xffffffff;
  if (puVar4 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar4 + 1);
    if (LVar3 == 0) {
      (**(code **)*puVar4)(1);
    }
  }
LAB_006c596c:
  FUN_006c9f10(puVar4,local_14,param_2);
  FUN_006c78b0();
  FUN_006c5760(puVar4,0,0);
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



void FUN_006c5a10(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int in_ECX;
  uint uVar6;
  
  FUN_00715d80(param_1,param_2);
  uVar6 = 0;
  *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(in_ECX + 0x6c);
  if (*(short *)(in_ECX + 0x46) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x40) + uVar6 * 4);
      if (piVar1 != (int *)0x0) {
        uVar3 = (**(code **)(*piVar1 + 0x18))(param_2);
        FUN_006c5760(uVar3,0,0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(in_ECX + 0x46));
  }
  if (*(int **)(in_ECX + 0x7c) != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x7c) + 0x18))(param_2);
    puVar2 = *(undefined4 **)(param_1 + 0x7c);
    if (puVar2 != puVar4) {
      if (puVar2 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puVar2 + 1);
        if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
      *(undefined4 **)(param_1 + 0x7c) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar4 + 1);
      }
    }
  }
  return;
}



undefined1 FUN_006c5ab0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int in_ECX;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar3 = FUN_00715f10(param_1);
  if (cVar3 == '\0') {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  uVar8 = 0;
  if (*(short *)(in_ECX + 0x46) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x40) + uVar8 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x24))(param_1,uVar4);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(in_ECX + 0x46));
  }
  if (*(int **)(in_ECX + 0x7c) == (int *)0x0) {
    iVar5 = FUN_00401f00(0x20);
    uStack_4 = 0;
    if (iVar5 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)FUN_006c5360(*(undefined4 *)(in_ECX + 0x30));
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x7c);
    uStack_4 = 0xffffffff;
    if (puVar2 != puVar6) {
      if (puVar2 != (undefined4 *)0x0) {
        LVar7 = InterlockedDecrement(puVar2 + 1);
        if ((LVar7 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
      *(undefined4 **)(in_ECX + 0x7c) = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar6 + 1);
      }
    }
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x7c) + 0x24))(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   _AFX_THREAD_STATE>::CreateObject(void)
    public: static class CObject * __cdecl CFrameWnd::CreateObject(void)
   
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
  local_10 = FUN_00401f00(0x80,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006c5520();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006c5c20(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00715e70(param_1);
  iVar1 = FUN_007124d0();
  FUN_006c4510(iVar1);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    uVar2 = FUN_007124a0();
    FUN_006c5760(uVar2,0,0);
  }
  return;
}



void FUN_006c5c70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_006c5860(param_1,param_5);
  FUN_006c9d30(param_1,param_3,param_2,param_4,0x3f800000,0x3f800000,0);
  return;
}



undefined4 FUN_006c5cc0(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x80,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_006c5520();
  }
  local_4 = 0xffffffff;
  FUN_006c5a10(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



int FUN_006c5d40(char *param_1,size_t param_2,char *param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar1 = _vsprintf_s(param_1,param_2,param_3,&stack0x00000010);
  param_1[param_2 - 1] = '\0';
  return iVar1;
}



void FUN_006c5d80(int param_1)

{
  uint uVar1;
  void *_Dst;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cfdd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a79934;
  in_ECX[2] = 0;
  in_ECX[3] = param_1;
  in_ECX[4] = 0;
  if (param_1 != 0) {
    _Dst = (void *)FUN_00401f00(param_1);
    in_ECX[2] = _Dst;
    _memset(_Dst,0,in_ECX[3]);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_006c5e20(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint in_EAX;
  byte *pbVar2;
  int iVar3;
  int in_ECX;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  *param_2 = 0;
  pbVar2 = *(byte **)(in_ECX + 8);
  pbVar4 = param_1;
  pbVar5 = pbVar2;
  if (*(int *)(in_ECX + 0x10) != 0) {
LAB_006c5e40:
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 == *pbVar4) {
        if (bVar1 != 0) {
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_006c5e60;
          pbVar2 = pbVar2 + 2;
          pbVar4 = pbVar4 + 2;
          if (bVar1 != 0) goto LAB_006c5e40;
        }
        iVar3 = 0;
      }
      else {
LAB_006c5e60:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      }
      if (iVar3 == 0) {
        return 1;
      }
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while (bVar1 != 0);
      *param_2 = (uint)(pbVar2 + (1 - (int)(pbVar5 + 1)) + *param_2);
      pbVar2 = pbVar5 + (int)(pbVar2 + (1 - (int)(pbVar5 + 1)));
      in_EAX = *param_2;
      pbVar4 = param_1;
      pbVar5 = pbVar2;
    } while (in_EAX < *(uint *)(in_ECX + 0x10));
  }
  return in_EAX & 0xffffff00;
}



void FUN_006c5ea0(void)

{
  size_t _Size;
  void *_Dst;
  int in_ECX;
  
  _Size = *(int *)(in_ECX + 0xc) * 2;
  _Dst = (void *)FUN_00401f00(_Size);
  _memset(_Dst,0,_Size);
  _memcpy(_Dst,*(void **)(in_ECX + 8),*(size_t *)(in_ECX + 0xc));
  FUN_00401f20(*(undefined4 *)(in_ECX + 8));
  *(size_t *)(in_ECX + 0xc) = _Size;
  *(void **)(in_ECX + 8) = _Dst;
  return;
}



void FUN_006c5ee0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7508;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006d04e0(uVar1);
  local_4 = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  *(undefined2 *)(in_ECX + 0x11) = 0;
  *in_ECX = &PTR_FUN_00a79984;
  FUN_006d0010(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006c5f60(byte param_1)

{
  FUN_006cf940();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint FUN_006c5f80(undefined4 param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if (*(ushort *)(in_ECX + 0x44) != 0) {
    do {
      if (*(int *)(*(int *)(in_ECX + 0x40) + (uVar1 & 0xffff) * 4) == 0) {
        *(undefined4 *)(*(int *)(in_ECX + 0x40) + (uVar1 & 0xffff) * 4) = param_1;
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while ((ushort)uVar1 < *(ushort *)(in_ECX + 0x44));
  }
  return CONCAT22((short)(uVar1 >> 0x10),0xffff);
}



void FUN_006c5fc0(float param_1,char param_2)

{
  float fVar1;
  int in_ECX;
  float10 fVar2;
  float local_c;
  float local_8;
  
  local_8 = *(float *)(in_ECX + 0x38);
  if (*(float *)(in_ECX + 0x34) == -3.4028235e+38) {
    local_8 = 0.0;
    fVar1 = param_1;
  }
  else {
    fVar1 = param_1 - *(float *)(in_ECX + 0x34);
  }
  local_8 = *(float *)(in_ECX + 0x28) * fVar1 + local_8;
  local_c = local_8;
  if (*(int *)(in_ECX + 0x24) == 0) {
    fVar1 = *(float *)(in_ECX + 0x30) - *(float *)(in_ECX + 0x2c);
    if (fVar1 == 0.0) {
      local_c = *(float *)(in_ECX + 0x2c);
    }
    else {
      if (fVar1 == local_8 - *(float *)(in_ECX + 0x2c)) {
        local_c = *(float *)(in_ECX + 0x30);
      }
      else {
        fVar2 = (float10)FUN_00982bfa();
        local_c = (float)fVar2 + *(float *)(in_ECX + 0x2c);
      }
      if (local_c < *(float *)(in_ECX + 0x2c)) {
        local_c = local_c + fVar1;
      }
    }
  }
  if (local_c <= *(float *)(in_ECX + 0x30)) {
    if (local_c < *(float *)(in_ECX + 0x2c)) {
      local_c = *(float *)(in_ECX + 0x2c);
    }
  }
  else {
    local_c = *(float *)(in_ECX + 0x30);
  }
  if (param_2 == '\0') {
    return;
  }
  *(float *)(in_ECX + 0x38) = local_8;
  *(float *)(in_ECX + 0x34) = param_1;
  *(float *)(in_ECX + 0x3c) = local_c;
  return;
}



uint FUN_006c6110(int param_1)

{
  uint uVar1;
  uint in_ECX;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  while( true ) {
    if (uVar1 == 0) {
      return 1;
    }
    if (uVar1 == in_ECX) break;
    uVar1 = *(uint *)(uVar1 + 0x58);
  }
  return uVar1 & 0xffffff00;
}



char * FUN_006c6140(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_00401f00(pcVar2 + (0x20 - (int)(param_1 + 1)));
  switch(param_2) {
  case (char *)0x0:
    param_2 = "INACTIVE";
    break;
  case (char *)0x1:
    param_2 = "ANIMATING";
    break;
  case (char *)0x2:
    param_2 = "EASEIN";
    break;
  case (char *)0x3:
    param_2 = "EASEOUT";
    break;
  case (char *)0x4:
    param_2 = "TRANSSOURCE";
    break;
  case (char *)0x5:
    param_2 = "TRANSDEST";
    break;
  case (char *)0x6:
    param_2 = "MORPHSOURCE";
  }
  _sprintf(pcVar2,"%s = %s",param_1,param_2);
  return pcVar2;
}



void FUN_006c61e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x34);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x34) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_006c6230(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a79934;
  FUN_00401f20(in_ECX[2]);
  FUN_0055ace0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



char * FUN_006c6270(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int in_ECX;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar5 = param_1;
  cVar3 = FUN_006c5e20(param_1,&param_1);
  if (cVar3 != '\0') {
    return param_1;
  }
  pcVar1 = pcVar5 + 1;
  pcVar4 = pcVar5;
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  if (*(char **)(in_ECX + 0xc) < pcVar4 + *(int *)(in_ECX + 0x10) + (1 - (int)pcVar1)) {
    FUN_006c5ea0();
  }
  pcVar2 = *(char **)(in_ECX + 0x10);
  pcVar6 = pcVar2 + *(int *)(in_ECX + 8);
  *pcVar6 = '\0';
  iVar7 = (int)pcVar6 - (int)pcVar5;
  do {
    cVar3 = *pcVar5;
    pcVar5[iVar7] = cVar3;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  *(int *)(in_ECX + 0x10) = (int)(pcVar4 + *(int *)(in_ECX + 0x10) + (1 - (int)pcVar1));
  return pcVar2;
}



void FUN_006c62e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *(undefined1 *)(in_ECX + 3) = 0xff;
  *(undefined1 *)((int)in_ECX + 0xd) = 0xff;
  return;
}



void FUN_006c6300(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *in_ECX = 0;
  }
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[1] = 0;
  }
  in_ECX[2] = 0;
  *(undefined1 *)(in_ECX + 3) = 0xff;
  *(undefined1 *)((int)in_ECX + 0xd) = 0xff;
  return;
}



void FUN_006c6370(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  *(undefined2 *)(in_ECX + 1) = 0xffff;
  *(undefined2 *)((int)in_ECX + 6) = 0xffff;
  *(undefined2 *)(in_ECX + 2) = 0xffff;
  *(undefined2 *)((int)in_ECX + 10) = 0xffff;
  *(undefined2 *)(in_ECX + 3) = 0xffff;
  return;
}



int FUN_006c63a0(void)

{
  int *in_ECX;
  
  if (*(ushort *)((int)in_ECX + 6) != 0xffff) {
    return (uint)*(ushort *)((int)in_ECX + 6) + *(int *)(*in_ECX + 8);
  }
  return 0;
}



int FUN_006c63c0(void)

{
  int *in_ECX;
  
  if (*(ushort *)(in_ECX + 2) != 0xffff) {
    return (uint)*(ushort *)(in_ECX + 2) + *(int *)(*in_ECX + 8);
  }
  return 0;
}



int FUN_006c63e0(void)

{
  int *in_ECX;
  
  if (*(ushort *)((int)in_ECX + 10) != 0xffff) {
    return (uint)*(ushort *)((int)in_ECX + 10) + *(int *)(*in_ECX + 8);
  }
  return 0;
}



undefined4 * FUN_006c6400(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b3cb30;
  if (DAT_00b3cb30 == (undefined4 *)0x0) {
    iVar2 = FUN_00401f00(0x14,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_006c5d80(0x100);
    }
    puVar5 = DAT_00b3cb30;
    local_4 = 0xffffffff;
    if (DAT_00b3cb30 != puVar3) {
      if (DAT_00b3cb30 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(DAT_00b3cb30 + 1);
        if ((LVar4 == 0) && (puVar5 != (undefined4 *)0x0)) {
          (**(code **)*puVar5)(1);
        }
      }
      puVar5 = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        DAT_00b3cb30 = puVar3;
        InterlockedIncrement(puVar3 + 1);
        puVar5 = DAT_00b3cb30;
      }
    }
  }
  DAT_00b3cb30 = puVar5;
  *unaff_FS_OFFSET = local_c;
  return puVar5;
}



void FUN_006c64c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7538;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  puVar1 = (undefined4 *)*in_ECX;
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006c6550(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  in_ECX[7] = 0x3f800000;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *in_ECX = &PTR_FUN_00a79a34;
  in_ECX[8] = 0;
  in_ECX[10] = 0x3f800000;
  in_ECX[9] = 0;
  in_ECX[0xb] = 0x7f7fffff;
  in_ECX[0xc] = 0xff7fffff;
  in_ECX[0xd] = 0xff7fffff;
  in_ECX[0xe] = 0xff7fffff;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0xf] = 0xff7fffff;
  in_ECX[0x12] = 0xff7fffff;
  in_ECX[0x13] = 0xff7fffff;
  in_ECX[0x14] = 0xff7fffff;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x15] = 0xff7fffff;
  in_ECX[0x19] = 0;
  return;
}



int * FUN_006c6610(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cea29;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = *(int *)(*(int *)(in_ECX + 0x14) + param_2 * 0x10);
  *param_1 = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 4));
  }
  local_4 = 0;
  FUN_006c6300(uVar1);
  iVar2 = *(int *)(in_ECX + 0x18) + param_2 * 0x10;
  *(undefined2 *)(iVar2 + 4) = 0xffff;
  *(undefined2 *)(iVar2 + 6) = 0xffff;
  *(undefined2 *)(iVar2 + 8) = 0xffff;
  *(undefined2 *)(iVar2 + 10) = 0xffff;
  *(undefined2 *)(iVar2 + 0xc) = 0xffff;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_006c66b0(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  int in_ECX;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  if (*(int *)(param_1 * 0x10 + *(int *)(in_ECX + 0x14)) == 0) {
    *param_2 = 0;
    return;
  }
  piVar10 = (int *)(*(int *)(in_ECX + 0x18) + param_1 * 0x10);
  if (*(ushort *)(piVar10 + 1) == 0xffff) {
    pcVar4 = (char *)0x0;
  }
  else {
    pcVar4 = (char *)((uint)*(ushort *)(piVar10 + 1) + *(int *)(*piVar10 + 8));
  }
  pcVar1 = pcVar4 + 1;
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  pcVar2 = pcVar4 + (1 - (int)pcVar1);
  if ((*(ushort *)((int)piVar10 + 6) != 0xffff) &&
     (pcVar5 = (char *)((uint)*(ushort *)((int)piVar10 + 6) + *(int *)(*piVar10 + 8)),
     pcVar5 != (char *)0x0)) {
    pcVar2 = "PROP\n";
    do {
      pcVar7 = pcVar2;
      pcVar2 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    pcVar2 = pcVar5 + 1;
    do {
      cVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
    uVar6 = FUN_00401f00(pcVar7 + (int)(pcVar5 + (int)(pcVar4 + ((-0xa79a86 - (int)pcVar2) -
                                                                (int)pcVar1))));
    *param_2 = uVar6;
    if (*(ushort *)((int)piVar10 + 6) == 0xffff) {
      iVar9 = 0;
    }
    else {
      iVar9 = (uint)*(ushort *)((int)piVar10 + 6) + *(int *)(*piVar10 + 8);
    }
    if (*(ushort *)(piVar10 + 1) == 0xffff) {
      iVar8 = 0;
    }
    else {
      iVar8 = (uint)*(ushort *)(piVar10 + 1) + *(int *)(*piVar10 + 8);
    }
    FUN_006c5d40(uVar6,pcVar7 + (int)(pcVar5 + (int)(pcVar4 + ((-0xa79a86 - (int)pcVar2) -
                                                              (int)pcVar1))),"%s\n%s%s",iVar8,
                 "PROP\n",iVar9);
    return;
  }
  pcVar4 = (char *)FUN_00401f00(pcVar2);
  *param_2 = pcVar4;
  if (*(ushort *)(piVar10 + 1) != 0xffff) {
    _strcpy_s(pcVar4,(rsize_t)pcVar2,
              (char *)((uint)*(ushort *)(piVar10 + 1) + *(int *)(*piVar10 + 8)));
    return;
  }
  _strcpy_s(pcVar4,(rsize_t)pcVar2,(char *)0x0);
  return;
}



void FUN_006c67f0(int *param_1)

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
  *(short *)(in_ECX + 1) = (short)param_1[1];
  *(undefined2 *)((int)in_ECX + 6) = *(undefined2 *)((int)param_1 + 6);
  *(short *)(in_ECX + 2) = (short)param_1[2];
  *(undefined2 *)((int)in_ECX + 10) = *(undefined2 *)((int)param_1 + 10);
  *(short *)(in_ECX + 3) = (short)param_1[3];
  return;
}



void FUN_006c6870(int *param_1)

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
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)param_1[1]) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = param_1[1];
    in_ECX[1] = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  in_ECX[2] = param_1[2];
  *(char *)(in_ECX + 3) = (char)param_1[3];
  *(undefined1 *)((int)in_ECX + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
  return;
}



void FUN_006c6910(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  LONG LVar5;
  ushort uVar6;
  int in_ECX;
  int iVar7;
  int *unaff_FS_OFFSET;
  uint local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7568;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar3 = (undefined4 *)FUN_00700010(&DAT_00b3cd7c);
  iVar7 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar3 + 1);
  }
  local_4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x40) + 0x7c);
    local_14 = 0;
    if (*(int *)(in_ECX + 0xc) != 0) {
      do {
        uVar6 = *(ushort *)(*(int *)(in_ECX + 0x18) + 4 + iVar7);
        if (uVar6 == 0xffff) {
          iVar4 = 0;
        }
        else {
          iVar4 = (uint)uVar6 + *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + iVar7) + 8);
        }
        iVar4 = (**(code **)(*piVar1 + 0x4c))(iVar4,uVar2);
        if (iVar4 != 0) {
          uVar6 = 0;
          if (*(ushort *)(puVar3 + 0x11) != 0) {
            do {
              if (*(int *)(puVar3[0x10] + (uint)uVar6 * 4) == iVar4) {
                if (uVar6 != 0xffff) {
                  *(uint *)(*(int *)(in_ECX + 0x14) + iVar7 + 8) = (uint)uVar6 * 0x30 + puVar3[0xf];
                }
                break;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < *(ushort *)(puVar3 + 0x11));
          }
        }
        local_14 = local_14 + 1;
        iVar7 = iVar7 + 0x10;
      } while (local_14 < *(uint *)(in_ECX + 0xc));
    }
  }
  local_4 = 0xffffffff;
  if ((puVar3 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar3 + 1), LVar5 == 0)) {
    (**(code **)*puVar3)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006c6a50(char param_1)

{
  int iVar1;
  undefined1 uVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_4;
  
  iVar4 = 0;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x14) + iVar4);
      iVar5 = *(int *)(in_ECX + 0x14) + iVar4;
      if ((iVar1 != 0) && (*(int **)(iVar5 + 8) != (int *)0x0)) {
        if (*(byte *)(iVar5 + 0xd) == 0xff) {
          uVar3 = (uint)param_1;
        }
        else {
          uVar3 = (uint)*(byte *)(iVar5 + 0xd);
        }
        uVar2 = (**(code **)(**(int **)(iVar5 + 8) + 0x98))(iVar1,0,uVar3,0x3f800000);
        *(undefined1 *)(iVar5 + 0xc) = uVar2;
      }
      local_4 = local_4 + 1;
      iVar4 = iVar4 + 0x10;
    } while (local_4 < *(uint *)(in_ECX + 0xc));
  }
  return;
}



void FUN_006c6ac0(void)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int iVar4;
  uint uVar5;
  undefined4 *local_4;
  
  uVar5 = 0;
  if (in_ECX[3] != 0) {
    iVar4 = 0;
    local_4 = in_ECX;
    do {
      iVar2 = in_ECX[5] + iVar4;
      if ((((*(int *)(iVar2 + 8) != 0) &&
           ((**(code **)(**(int **)(iVar2 + 8) + 0x9c))(&local_4,*(undefined1 *)(iVar2 + 0xc)),
           puVar1 = local_4, local_4 != (undefined4 *)0x0)) &&
          (LVar3 = InterlockedDecrement(local_4 + 1), LVar3 == 0)) && (puVar1 != (undefined4 *)0x0))
      {
        (**(code **)*puVar1)(1);
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar5 < (uint)in_ECX[3]);
  }
  return;
}



float10 FUN_006c6b30(float param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  bool bVar12;
  bool bVar13;
  float10 fVar14;
  float *local_14;
  float *local_c;
  float *local_8;
  float *local_4;
  
  pfVar8 = (float *)0x0;
  fVar14 = (float10)FUN_006c5fc0(param_2,0);
  iVar6 = *(int *)(*(int *)((int)param_1 + 0x20) + 0xc);
  pfVar11 = *(float **)(*(int *)((int)param_1 + 0x20) + 0x10);
  local_4 = (float *)0x0;
  pfVar9 = (float *)0x0;
  local_14 = (float *)0x0;
  pfVar7 = local_14;
  for (; local_14 = pfVar7, iVar6 != 0; iVar6 = iVar6 + -1) {
    if (((char *)pfVar11[1] != (char *)0x0) &&
       (iVar5 = __strnicmp((char *)pfVar11[1],PTR_DAT_00b241c4,DAT_00b241c8), iVar5 == 0)) {
      if (pfVar9 == (float *)0x0) {
        pfVar9 = pfVar11;
      }
      local_14 = pfVar11;
      local_4 = pfVar11;
      if (((float)fVar14 <= *pfVar11) && (local_14 = pfVar7, pfVar8 == (float *)0x0)) {
        pfVar8 = pfVar11;
      }
    }
    pfVar11 = pfVar11 + 2;
    pfVar7 = local_14;
  }
  bVar4 = false;
  if (pfVar8 == (float *)0x0) {
    fVar1 = *pfVar7;
    bVar4 = true;
    fVar3 = ((*(float *)((int)param_1 + 0x30) - *(float *)((int)param_1 + 0x2c)) + *pfVar9) - fVar1;
  }
  else {
    if (pfVar7 == (float *)0x0) {
      fVar1 = (*(float *)((int)param_1 + 0x2c) - *(float *)((int)param_1 + 0x30)) + *local_4;
      local_14 = local_4;
    }
    else {
      fVar1 = *pfVar7;
    }
    fVar3 = *pfVar8 - fVar1;
    pfVar9 = pfVar8;
  }
  bVar12 = local_14 == (float *)0x0;
  uVar2 = *(uint *)(*(int *)(in_ECX + 0x20) + 0xc);
  pfVar11 = *(float **)(*(int *)(in_ECX + 0x20) + 0x10);
  bVar13 = pfVar9 == (float *)0x0;
  uVar10 = 0;
  local_c = (float *)0x0;
  local_8 = (float *)0x0;
  pfVar8 = (float *)0x0;
  pfVar7 = (float *)0x0;
  if (uVar2 != 0) {
    do {
      if (bVar12) {
        pfVar8 = local_8;
        pfVar7 = local_c;
        if (bVar13) break;
LAB_006c6ca0:
        iVar6 = __stricmp((char *)pfVar11[1],(char *)pfVar9[1]);
        if (iVar6 == 0) {
          bVar13 = true;
          local_8 = pfVar11;
        }
      }
      else {
        iVar6 = __stricmp((char *)pfVar11[1],(char *)local_14[1]);
        if (iVar6 == 0) {
          bVar12 = true;
          local_c = pfVar11;
        }
        if (!bVar13) goto LAB_006c6ca0;
      }
      uVar10 = uVar10 + 1;
      pfVar11 = pfVar11 + 2;
      pfVar8 = local_8;
      pfVar7 = local_c;
    } while (uVar10 < uVar2);
  }
  param_2 = 0.0;
  param_1 = 0.0;
  if (pfVar7 == pfVar8) {
    param_1 = *pfVar7;
    param_2 = *pfVar8;
    if (bVar4) {
      param_2 = (*(float *)(in_ECX + 0x30) - *(float *)(in_ECX + 0x2c)) + param_2;
    }
    else {
      param_1 = param_1 - (*(float *)(in_ECX + 0x30) - *(float *)(in_ECX + 0x2c));
    }
  }
  else {
    if (pfVar8 != (float *)0x0) {
      param_2 = *pfVar8;
    }
    if (pfVar7 != (float *)0x0) {
      param_1 = *pfVar7;
    }
    if (param_2 < param_1) {
      param_2 = (*(float *)(in_ECX + 0x30) - *(float *)(in_ECX + 0x2c)) + param_2;
    }
  }
  fVar14 = (float10)(param_1 + (((float)fVar14 - fVar1) / fVar3) * (param_2 - param_1));
  if (fVar14 < (float10)*(float *)(in_ECX + 0x2c)) {
    return (float10)(float)(((float10)*(float *)(in_ECX + 0x30) - (float10)*(float *)(in_ECX + 0x2c)
                            ) + fVar14);
  }
  if ((float10)*(float *)(in_ECX + 0x30) < fVar14) {
    fVar14 = (float10)(float)(fVar14 - ((float10)*(float *)(in_ECX + 0x30) -
                                       (float10)*(float *)(in_ECX + 0x2c)));
  }
  return fVar14;
}



void FUN_006c6dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar3 = 0;
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x14) + 8 + iVar3);
      iVar2 = *(int *)(in_ECX + 0x14) + iVar3;
      if (iVar1 != 0) {
        if ((*(char *)(iVar1 + 0xe) != '\x01') || (*(byte *)(iVar2 + 0xc) != *(byte *)(iVar1 + 0xf))
           ) {
          *(undefined4 *)(*(int *)(iVar1 + 0x14) + 4 + (uint)*(byte *)(iVar2 + 0xc) * 0x18) =
               param_1;
          *(undefined4 *)(iVar1 + 0x24) = 0xff7fffff;
          *(undefined4 *)(iVar1 + 0x28) = 0xff7fffff;
          *(byte *)(iVar1 + 0xc) = *(byte *)(iVar1 + 0xc) | 4;
          *(undefined4 *)(iVar1 + 0x2c) = 0xff7fffff;
        }
        iVar1 = *(int *)(iVar2 + 8);
        if ((*(char *)(iVar1 + 0xe) != '\x01') || (*(byte *)(iVar2 + 0xc) != *(byte *)(iVar1 + 0xf))
           ) {
          *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x10 + (uint)*(byte *)(iVar2 + 0xc) * 0x18) =
               param_2;
          *(undefined4 *)(iVar1 + 0x24) = 0xff7fffff;
          *(undefined4 *)(iVar1 + 0x28) = 0xff7fffff;
          *(byte *)(iVar1 + 0xc) = *(byte *)(iVar1 + 0xc) | 4;
          *(undefined4 *)(iVar1 + 0x2c) = 0xff7fffff;
        }
        iVar1 = *(int *)(iVar2 + 8);
        if ((*(char *)(iVar1 + 0xe) == '\x01') && (*(byte *)(iVar2 + 0xc) == *(byte *)(iVar1 + 0xf))
           ) {
          *(undefined4 *)(iVar1 + 0x20) = param_3;
        }
        else {
          *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x14 + (uint)*(byte *)(iVar2 + 0xc) * 0x18) =
               param_3;
        }
      }
      local_4 = local_4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (local_4 < *(uint *)(in_ECX + 0xc));
  }
  return;
}



undefined4 FUN_006c6ed0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  int iVar8;
  byte *pbVar9;
  int in_ECX;
  undefined4 *puVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined4 *local_14;
  
  iVar8 = *(int *)(in_ECX + 0x20);
  if ((iVar8 == 0) || (iVar2 = *(int *)(param_1 + 0x20), iVar2 == 0)) {
    return 0;
  }
  iVar3 = *(int *)(iVar8 + 0x10);
  uVar4 = *(uint *)(iVar2 + 0xc);
  uVar5 = *(uint *)(iVar8 + 0xc);
  uVar12 = 0;
  bVar7 = false;
  if (uVar4 != 0) {
    puVar10 = (undefined4 *)(*(int *)(iVar2 + 0x10) + 4);
    local_14 = puVar10;
    do {
      pbVar6 = (byte *)*local_14;
      iVar8 = __strnicmp((char *)pbVar6,PTR_DAT_00b241c4,DAT_00b241c8);
      if (iVar8 == 0) {
        uVar13 = 0;
        bVar7 = true;
        if (uVar5 == 0) {
          return 0;
        }
        puVar14 = (undefined4 *)(iVar3 + 4);
        do {
          pbVar11 = (byte *)*puVar14;
          pbVar9 = pbVar6;
          do {
            bVar1 = *pbVar9;
            bVar15 = bVar1 < *pbVar11;
            if (bVar1 != *pbVar11) {
LAB_006c6f90:
              iVar8 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_006c6f95;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar9[1];
            bVar15 = bVar1 < pbVar11[1];
            if (bVar1 != pbVar11[1]) goto LAB_006c6f90;
            pbVar9 = pbVar9 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_006c6f95:
          if (iVar8 == 0) break;
          uVar13 = uVar13 + 1;
          puVar14 = puVar14 + 2;
          if (uVar5 <= uVar13) {
            return 0;
          }
        } while( true );
      }
      local_14 = local_14 + 2;
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar4);
    if (bVar7) {
      uVar12 = 0;
      bVar7 = false;
      if (uVar5 != 0) {
        local_14 = (undefined4 *)(iVar3 + 4);
        do {
          pbVar6 = (byte *)*local_14;
          iVar8 = __strnicmp((char *)pbVar6,PTR_DAT_00b241c4,DAT_00b241c8);
          if (iVar8 == 0) {
            bVar7 = true;
            uVar13 = 0;
            puVar14 = puVar10;
            do {
              pbVar11 = (byte *)*puVar14;
              pbVar9 = pbVar6;
              do {
                bVar1 = *pbVar9;
                bVar15 = bVar1 < *pbVar11;
                if (bVar1 != *pbVar11) {
LAB_006c7044:
                  iVar8 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_006c7049;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar9[1];
                bVar15 = bVar1 < pbVar11[1];
                if (bVar1 != pbVar11[1]) goto LAB_006c7044;
                pbVar9 = pbVar9 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar1 != 0);
              iVar8 = 0;
LAB_006c7049:
              if (iVar8 == 0) break;
              uVar13 = uVar13 + 1;
              puVar14 = puVar14 + 2;
              if (uVar4 <= uVar13) {
                return 0;
              }
            } while( true );
          }
          local_14 = local_14 + 2;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar5);
        if (bVar7) {
          return 1;
        }
      }
    }
  }
  return 0;
}



void FUN_006c70a0(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  LONG LVar11;
  int in_ECX;
  uint uVar12;
  int iVar13;
  int *unaff_FS_OFFSET;
  uint local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d6856;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00700770(param_1,param_2);
  pcVar2 = *(char **)(in_ECX + 8);
  FUN_00401f20(*(undefined4 *)(param_1 + 8),uVar5);
  pcVar6 = pcVar2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  pcVar7 = (char *)FUN_00401f00(pcVar6 + (1 - (int)(pcVar2 + 1)));
  *(char **)(param_1 + 8) = pcVar7;
  _strcpy_s(pcVar7,(rsize_t)(pcVar6 + (1 - (int)(pcVar2 + 1))),pcVar2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 0x10);
  uVar5 = *(uint *)(in_ECX + 0xc);
  uVar12 = -(uint)((int)((ulonglong)uVar5 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x10);
  puVar8 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar12) | uVar12 + 4);
  local_4 = 0;
  if (puVar8 == (uint *)0x0) {
    puVar9 = (uint *)0x0;
  }
  else {
    puVar9 = puVar8 + 1;
    *puVar8 = uVar5;
    _eh_vector_constructor_iterator_(puVar9,0x10,uVar5,FUN_006c62e0,FUN_006c64c0);
  }
  *(uint **)(param_1 + 0x14) = puVar9;
  uVar5 = *(uint *)(in_ECX + 0xc);
  local_4 = 0xffffffff;
  uVar12 = -(uint)((int)((ulonglong)uVar5 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x10);
  puVar8 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar12) | uVar12 + 4);
  local_4 = 1;
  if (puVar8 == (uint *)0x0) {
    puVar9 = (uint *)0x0;
  }
  else {
    puVar9 = puVar8 + 1;
    *puVar8 = uVar5;
    _eh_vector_constructor_iterator_(puVar9,0x10,uVar5,FUN_006c6370,FUN_007016a0);
  }
  iVar13 = 0;
  *(uint **)(param_1 + 0x18) = puVar9;
  local_4 = 0xffffffff;
  local_14 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    do {
      if (*(int *)(iVar13 + *(int *)(in_ECX + 0x14)) != 0) {
        if (*(int *)(in_ECX + 0x40) == 0) {
          puVar10 = (undefined4 *)
                    (**(code **)(**(int **)(iVar13 + *(int *)(in_ECX + 0x14)) + 0x18))(param_2);
          iVar3 = *(int *)(param_1 + 0x14);
          puVar4 = *(undefined4 **)(iVar3 + iVar13);
          if (puVar4 != puVar10) {
            if (((puVar4 != (undefined4 *)0x0) &&
                (LVar11 = InterlockedDecrement(puVar4 + 1), LVar11 == 0)) &&
               (puVar4 != (undefined4 *)0x0)) {
              (**(code **)*puVar4)(1);
            }
            *(undefined4 **)(iVar3 + iVar13) = puVar10;
            if (puVar10 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar10 + 1);
            }
          }
          if (*(int *)(iVar13 + 4 + *(int *)(in_ECX + 0x14)) != 0) {
            puVar10 = (undefined4 *)
                      (**(code **)(**(int **)(iVar13 + 4 + *(int *)(in_ECX + 0x14)) + 0x18))
                                (param_2);
            iVar3 = *(int *)(param_1 + 0x14);
            puVar4 = *(undefined4 **)(iVar13 + 4 + iVar3);
            if (puVar4 != puVar10) {
              if (((puVar4 != (undefined4 *)0x0) &&
                  (LVar11 = InterlockedDecrement(puVar4 + 1), LVar11 == 0)) &&
                 (puVar4 != (undefined4 *)0x0)) {
                (**(code **)*puVar4)(1);
              }
              *(undefined4 **)(iVar13 + 4 + iVar3) = puVar10;
              if (puVar10 != (undefined4 *)0x0) {
                InterlockedIncrement(puVar10 + 1);
              }
            }
          }
        }
        else {
          puVar10 = (undefined4 *)FUN_00700710(param_2);
          iVar3 = *(int *)(param_1 + 0x14);
          puVar4 = *(undefined4 **)(iVar3 + iVar13);
          if (puVar4 != puVar10) {
            if (((puVar4 != (undefined4 *)0x0) &&
                (LVar11 = InterlockedDecrement(puVar4 + 1), LVar11 == 0)) &&
               (puVar4 != (undefined4 *)0x0)) {
              (**(code **)*puVar4)(1);
            }
            *(undefined4 **)(iVar3 + iVar13) = puVar10;
            if (puVar10 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar10 + 1);
            }
          }
          *(undefined1 *)(iVar13 + 0xc + *(int *)(param_1 + 0x14)) =
               *(undefined1 *)(iVar13 + 0xc + *(int *)(in_ECX + 0x14));
        }
      }
      *(undefined1 *)(iVar13 + 0xd + *(int *)(param_1 + 0x14)) =
           *(undefined1 *)(iVar13 + 0xd + *(int *)(in_ECX + 0x14));
      FUN_006c67f0(*(int *)(in_ECX + 0x18) + iVar13);
      local_14 = local_14 + 1;
      iVar13 = iVar13 + 0x10;
    } while (local_14 < *(uint *)(in_ECX + 0xc));
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  puVar4 = *(undefined4 **)(param_1 + 0x20);
  if (puVar4 != *(undefined4 **)(in_ECX + 0x20)) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar11 = InterlockedDecrement(puVar4 + 1), LVar11 == 0))
       && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    iVar13 = *(int *)(in_ECX + 0x20);
    *(int *)(param_1 + 0x20) = iVar13;
    if (iVar13 != 0) {
      InterlockedIncrement((LONG *)(iVar13 + 4));
    }
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(in_ECX + 0x30);
  pcVar2 = *(char **)(in_ECX + 0x5c);
  FUN_00401f20(*(undefined4 *)(param_1 + 0x5c));
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (pcVar2 != (char *)0x0) {
    pcVar6 = pcVar2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar7 = (char *)FUN_00401f00(pcVar6 + (1 - (int)(pcVar2 + 1)));
    *(char **)(param_1 + 0x5c) = pcVar7;
    _strcpy_s(pcVar7,(rsize_t)(pcVar6 + (1 - (int)(pcVar2 + 1))),pcVar2);
  }
  puVar4 = *(undefined4 **)(param_1 + 100);
  if (puVar4 != *(undefined4 **)(in_ECX + 100)) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar11 = InterlockedDecrement(puVar4 + 1), LVar11 == 0))
       && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    iVar13 = *(int *)(in_ECX + 100);
    *(int *)(param_1 + 100) = iVar13;
    if (iVar13 != 0) {
      InterlockedIncrement((LONG *)(iVar13 + 4));
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006c7470(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  undefined4 *puStack_4;
  
  FUN_00700750(param_1);
  FUN_0055e000(in_ECX,&local_10);
  iVar7 = 0;
  local_c = local_10;
  local_8 = 0;
  puVar6 = local_10;
  if (*(int *)(in_ECX + 0xc) != 0) {
    do {
      puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x14) + iVar7);
      if (*(int *)(*(int *)(in_ECX + 0x14) + iVar7) != 0) {
        if (*(int *)(in_ECX + 0x40) == 0) {
          (**(code **)(*(int *)*puVar1 + 0x38))(param_1);
          piVar2 = *(int **)(*(int *)(in_ECX + 0x14) + 4 + iVar7);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x38))(param_1);
          }
        }
        else {
          piVar2 = (int *)*puVar1;
          if (*(int *)(in_ECX + 0x44) == 0) {
            (**(code **)(*piVar2 + 0x38))(param_1);
          }
          else {
            cVar4 = FUN_0055e000(piVar2,&local_10);
            if (cVar4 == '\0') {
              FUN_0055e2a0(*(int *)(in_ECX + 0x14) + iVar7);
            }
            else {
              FUN_0075fa90(local_10);
            }
          }
          cVar4 = FUN_0055e000(*(undefined4 *)(*(int *)(in_ECX + 0x14) + 4 + iVar7),&local_10);
          if (cVar4 == '\0') {
            iVar3 = *(int *)(in_ECX + 0x14);
            puVar6 = *(undefined4 **)(iVar7 + 4 + local_c[5]);
            puStack_4 = (undefined4 *)(iVar7 + 4 + local_c[5]);
            if (puVar6 != *(undefined4 **)(iVar3 + 4 + iVar7)) {
              if (((puVar6 != (undefined4 *)0x0) &&
                  (LVar5 = InterlockedDecrement(puVar6 + 1), LVar5 == 0)) &&
                 (puVar6 != (undefined4 *)0x0)) {
                (**(code **)*puVar6)(1);
              }
              puVar6 = *(undefined4 **)(iVar3 + 4 + iVar7);
              *puStack_4 = puVar6;
              goto LAB_006c75ce;
            }
          }
          else {
            iVar3 = puVar6[5];
            puVar6 = *(undefined4 **)(iVar7 + 4 + iVar3);
            if (puVar6 != local_10) {
              if (((puVar6 != (undefined4 *)0x0) &&
                  (LVar5 = InterlockedDecrement(puVar6 + 1), LVar5 == 0)) &&
                 (puVar6 != (undefined4 *)0x0)) {
                (**(code **)*puVar6)(1);
              }
              *(undefined4 **)(iVar7 + 4 + iVar3) = local_10;
              puVar6 = local_10;
LAB_006c75ce:
              if (puVar6 != (undefined4 *)0x0) {
                InterlockedIncrement(puVar6 + 1);
              }
            }
          }
          cVar4 = FUN_0055e000(*(undefined4 *)(*(int *)(in_ECX + 0x14) + 8 + iVar7),&local_10);
          puVar6 = local_c;
          if (cVar4 == '\0') {
            *(undefined4 *)(iVar7 + 8 + local_c[5]) =
                 *(undefined4 *)(*(int *)(in_ECX + 0x14) + 8 + iVar7);
          }
          else {
            *(undefined4 **)(iVar7 + 8 + local_c[5]) = local_10;
          }
        }
      }
      local_8 = local_8 + 1;
      iVar7 = iVar7 + 0x10;
    } while (local_8 < *(uint *)(in_ECX + 0xc));
  }
  cVar4 = FUN_0055e000(*(undefined4 *)(in_ECX + 0x40),&local_10);
  if (cVar4 == '\0') {
    puVar6[0x10] = *(undefined4 *)(in_ECX + 0x40);
  }
  else {
    puVar6[0x10] = local_10;
  }
  cVar4 = FUN_0055e000(*(undefined4 *)(in_ECX + 0x58),&local_10);
  if (cVar4 == '\0') {
    puVar6[0x16] = *(undefined4 *)(in_ECX + 0x58);
  }
  else {
    puVar6[0x16] = local_10;
  }
  cVar4 = FUN_0055e000(*(undefined4 *)(in_ECX + 0x60),&local_10);
  if (cVar4 == '\0') {
    puVar6[0x18] = *(undefined4 *)(in_ECX + 0x60);
    return;
  }
  puVar6[0x18] = local_10;
  return;
}



bool FUN_006c76c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *in_ECX;
  
  iVar1 = *param_1;
  if ((int *)*in_ECX == (int *)0x0) {
    if (iVar1 != 0) {
      return false;
    }
  }
  else {
    if (iVar1 == 0) {
      return false;
    }
    if ((iVar1 != 0) && (cVar3 = (**(code **)(*(int *)*in_ECX + 0x2c))(iVar1), cVar3 == '\0')) {
      return false;
    }
  }
  piVar2 = (int *)in_ECX[1];
  if (piVar2 == (int *)0x0) {
LAB_006c7706:
    if (param_1[1] != 0) {
      return false;
    }
    if (piVar2 == (int *)0x0) goto LAB_006c7723;
  }
  else {
    if (param_1[1] == 0) {
      return false;
    }
    if (piVar2 == (int *)0x0) goto LAB_006c7706;
  }
  if ((param_1[1] != 0) && (cVar3 = (**(code **)(*piVar2 + 0x2c))(param_1[1]), cVar3 == '\0')) {
    return false;
  }
LAB_006c7723:
  return *(char *)((int)in_ECX + 0xd) == *(char *)((int)param_1 + 0xd);
}



uint FUN_006c7740(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  
  uVar1 = (**(code **)(*(int *)*in_ECX + 0x2c))(*param_1);
  if (((((char)uVar1 != '\0') && (*(short *)(in_ECX + 1) == *(short *)(param_1 + 1))) &&
      (*(short *)((int)in_ECX + 6) == *(short *)((int)param_1 + 6))) &&
     (((uVar1 = CONCAT22((short)(uVar1 >> 0x10),*(short *)(in_ECX + 2)),
       *(short *)(in_ECX + 2) == *(short *)(param_1 + 2) &&
       (*(short *)((int)in_ECX + 10) == *(short *)((int)param_1 + 10))) &&
      (*(short *)(in_ECX + 3) == *(short *)(param_1 + 3))))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}



undefined1 FUN_006c77a0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  undefined4 unaff_retaddr;
  
  cVar3 = FUN_00700650(param_1);
  if (cVar3 != '\0') {
    uVar5 = 0;
    if (*(int *)(in_ECX + 0xc) != 0) {
      iVar4 = 0;
      do {
        iVar1 = *(int *)(in_ECX + 0x14);
        piVar2 = *(int **)(iVar1 + iVar4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x24))(unaff_retaddr);
        }
        piVar2 = *(int **)(iVar1 + iVar4 + 4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x24))(unaff_retaddr);
        }
        (**(code **)(**(int **)(iVar4 + *(int *)(in_ECX + 0x18)) + 0x24))(unaff_retaddr);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x10;
        param_1 = unaff_retaddr;
      } while (uVar5 < *(uint *)(in_ECX + 0xc));
    }
    if (*(int **)(in_ECX + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x20) + 0x24))(param_1);
    }
    if (*(int **)(in_ECX + 100) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 100) + 0x24))(param_1);
    }
    return 1;
  }
  return 0;
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
  local_10 = FUN_00401f00(0x68,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006c6550();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006c78b0(void)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  LONG LVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_1c;
  undefined2 local_14;
  undefined2 local_10;
  undefined2 local_c;
  uint local_8;
  
  puVar4 = (undefined4 *)FUN_006c6400();
  if (*(undefined4 **)(in_ECX + 100) != puVar4) {
    local_8 = 0;
    if (*(int *)(in_ECX + 0xc) != 0) {
      local_1c = 0;
      do {
        puVar5 = (undefined4 *)FUN_006c6400();
        piVar6 = (int *)(*(int *)(in_ECX + 0x18) + local_1c);
        if (*(ushort *)(piVar6 + 1) == 0xffff) {
          iVar8 = 0;
        }
        else {
          iVar8 = (uint)*(ushort *)(piVar6 + 1) + *(int *)(*piVar6 + 8);
        }
        if (*(ushort *)((int)piVar6 + 6) == 0xffff) {
          iVar12 = 0;
        }
        else {
          iVar12 = (uint)*(ushort *)((int)piVar6 + 6) + *(int *)(*piVar6 + 8);
        }
        if (*(ushort *)(piVar6 + 2) == 0xffff) {
          iVar11 = 0;
        }
        else {
          iVar11 = (uint)*(ushort *)(piVar6 + 2) + *(int *)(*piVar6 + 8);
        }
        if (*(ushort *)((int)piVar6 + 10) == 0xffff) {
          iVar10 = 0;
        }
        else {
          iVar10 = (uint)*(ushort *)((int)piVar6 + 10) + *(int *)(*piVar6 + 8);
        }
        if (*(ushort *)(piVar6 + 3) == 0xffff) {
          iVar9 = 0;
        }
        else {
          iVar9 = (uint)*(ushort *)(piVar6 + 3) + *(int *)(*piVar6 + 8);
        }
        if (iVar8 == 0) {
          local_14 = 0xffff;
        }
        else {
          local_14 = FUN_006c6270(iVar8);
        }
        if (iVar12 == 0) {
          local_10 = 0xffff;
        }
        else {
          local_10 = FUN_006c6270(iVar12);
        }
        if (iVar11 == 0) {
          local_c = 0xffff;
        }
        else {
          local_c = FUN_006c6270(iVar11);
        }
        if (iVar10 == 0) {
          uVar2 = 0xffff;
        }
        else {
          uVar2 = FUN_006c6270(iVar10);
        }
        if (iVar9 == 0) {
          uVar3 = 0xffff;
        }
        else {
          uVar3 = FUN_006c6270(iVar9);
        }
        piVar6 = (int *)(*(int *)(in_ECX + 0x18) + local_1c);
        puVar1 = (undefined4 *)*piVar6;
        if (puVar1 != puVar5) {
          if (((puVar1 != (undefined4 *)0x0) &&
              (LVar7 = InterlockedDecrement(puVar1 + 1), LVar7 == 0)) &&
             (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          *piVar6 = (int)puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar5 + 1);
          }
        }
        iVar8 = *(int *)(in_ECX + 0x18) + local_1c;
        *(undefined2 *)(iVar8 + 4) = local_14;
        *(undefined2 *)(iVar8 + 6) = local_10;
        *(undefined2 *)(iVar8 + 8) = local_c;
        *(undefined2 *)(iVar8 + 10) = uVar2;
        *(undefined2 *)(iVar8 + 0xc) = uVar3;
        local_8 = local_8 + 1;
        local_1c = local_1c + 0x10;
      } while (local_8 < *(uint *)(in_ECX + 0xc));
    }
    puVar5 = *(undefined4 **)(in_ECX + 100);
    if (puVar5 != puVar4) {
      if (((puVar5 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar5 + 1), LVar7 == 0))
         && (puVar5 != (undefined4 *)0x0)) {
        (**(code **)*puVar5)(1);
      }
      *(undefined4 **)(in_ECX + 100) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar4 + 1);
      }
    }
  }
  return;
}



void FUN_006c7ad0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int in_ECX;
  int local_8;
  uint local_4;
  
  FUN_0068f970(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0xa010068) {
    uVar3 = FUN_007124a0();
    FUN_0075fa90(uVar3);
    local_4 = 0;
    if (*(int *)(in_ECX + 0xc) != 0) {
      local_8 = 0;
      do {
        puVar4 = (undefined4 *)FUN_007124a0();
        iVar1 = *(int *)(in_ECX + 0x14);
        puVar2 = *(undefined4 **)(iVar1 + 4 + local_8);
        if (puVar2 != puVar4) {
          if (((puVar2 != (undefined4 *)0x0) &&
              (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
             (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          *(undefined4 **)(iVar1 + 4 + local_8) = puVar4;
          if (puVar4 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar4 + 1);
          }
        }
        local_8 = local_8 + 0x10;
        local_4 = local_4 + 1;
      } while (local_4 < *(uint *)(in_ECX + 0xc));
      return;
    }
  }
  else {
    uVar3 = FUN_007124a0();
    FUN_0075fa90(uVar3);
    uVar3 = FUN_007124a0();
    *(undefined4 *)(in_ECX + 0x40) = uVar3;
  }
  return;
}



void FUN_006c7d90(ushort param_1,undefined2 param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a79aa0;
  *(ushort *)(in_ECX + 2) = param_1;
  *(undefined2 *)((int)in_ECX + 0xe) = param_2;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  if (param_1 == 0) {
    in_ECX[1] = 0;
  }
  else {
    uVar3 = (uint)param_1;
    puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3 * 4) | uVar3 * 4 + 4,uVar1);
    local_4 = 0;
    if (puVar2 == (uint *)0x0) {
      in_ECX[1] = 0;
    }
    else {
      *puVar2 = uVar3;
      _eh_vector_constructor_iterator_(puVar2 + 1,4,uVar3,FUN_007c88a0,FUN_007016a0);
      in_ECX[1] = puVar2 + 1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c7e90(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  
  if ((_DAT_00b3cb00 & 1) == 0) {
    _DAT_00b3cb00 = _DAT_00b3cb00 | 1;
    DAT_00b3cafc = 0;
    _atexit(FUN_00a26800);
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == DAT_00b3cafc) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != DAT_00b3cafc) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == DAT_00b3cafc) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != DAT_00b3cafc) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
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



void FUN_006c7f60(byte param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  pvVar1 = (void *)in_ECX[1];
  *in_ECX = &PTR_FUN_00a79aa0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006c7fb0(char *param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  char *_Dst;
  uint *puVar6;
  undefined4 *puVar7;
  LONG LVar8;
  undefined4 *in_ECX;
  uint uVar9;
  uint *puVar10;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c75c4;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar4);
  in_ECX[7] = 0x3f800000;
  *in_ECX = &PTR_FUN_00a79a34;
  in_ECX[2] = 0;
  in_ECX[3] = param_2;
  in_ECX[4] = param_3;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  local_4 = 0;
  in_ECX[8] = 0;
  in_ECX[10] = 0x3f800000;
  in_ECX[9] = 0;
  in_ECX[0xb] = 0x7f7fffff;
  in_ECX[0xc] = 0xff7fffff;
  in_ECX[0xd] = 0xff7fffff;
  in_ECX[0xe] = 0xff7fffff;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0xf] = 0xff7fffff;
  in_ECX[0x12] = 0xff7fffff;
  in_ECX[0x13] = 0xff7fffff;
  in_ECX[0x14] = 0xff7fffff;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x15] = 0xff7fffff;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = param_4;
  if (param_4 != 0) {
    InterlockedIncrement((LONG *)(param_4 + 4));
  }
  local_4._0_1_ = 2;
  FUN_00401f20(in_ECX[2]);
  pcVar5 = param_1;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  _Dst = (char *)FUN_00401f00(pcVar5 + (1 - (int)(param_1 + 1)));
  in_ECX[2] = _Dst;
  _strcpy_s(_Dst,(rsize_t)(pcVar5 + (1 - (int)(param_1 + 1))),param_1);
  uVar4 = in_ECX[3];
  if (uVar4 != 0) {
    uVar9 = -(uint)((int)((ulonglong)uVar4 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x10);
    puVar6 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar9) | uVar9 + 4);
    local_4._0_1_ = 3;
    if (puVar6 == (uint *)0x0) {
      puVar10 = (uint *)0x0;
    }
    else {
      puVar10 = puVar6 + 1;
      *puVar6 = uVar4;
      _eh_vector_constructor_iterator_(puVar10,0x10,uVar4,FUN_006c62e0,FUN_006c64c0);
    }
    uVar4 = in_ECX[3];
    in_ECX[5] = puVar10;
    local_4._0_1_ = 2;
    uVar9 = -(uint)((int)((ulonglong)uVar4 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x10);
    puVar6 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar9) | uVar9 + 4);
    local_4._0_1_ = 4;
    if (puVar6 == (uint *)0x0) {
      puVar10 = (uint *)0x0;
    }
    else {
      puVar10 = puVar6 + 1;
      *puVar6 = uVar4;
      _eh_vector_constructor_iterator_(puVar10,0x10,uVar4,FUN_006c6370,FUN_007016a0);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    in_ECX[6] = puVar10;
    param_3 = 0;
    if (in_ECX[3] != 0) {
      param_2 = 0;
      do {
        puVar7 = (undefined4 *)FUN_006c6400();
        iVar2 = in_ECX[6];
        puVar3 = *(undefined4 **)(iVar2 + param_2);
        if (puVar3 != puVar7) {
          if (puVar3 != (undefined4 *)0x0) {
            LVar8 = InterlockedDecrement(puVar3 + 1);
            if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
              (**(code **)*puVar3)(1);
            }
          }
          *(undefined4 **)(iVar2 + param_2) = puVar7;
          if (puVar7 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar7 + 1);
          }
        }
        param_2 = param_2 + 0x10;
        param_3 = param_3 + 1;
      } while (param_3 < (uint)in_ECX[3]);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_006c8220(uint param_1,int *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  LONG LVar9;
  undefined4 uVar10;
  int in_ECX;
  int iVar11;
  int iVar12;
  int *unaff_FS_OFFSET;
  undefined1 local_1d;
  int local_18;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c75f3;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1d = 0;
  piVar6 = (int *)FUN_00700010(&DAT_00b3cd7c);
  if (piVar6 != (int *)0x0) {
    InterlockedIncrement(piVar6 + 1);
  }
  local_4 = 0;
  if (piVar6 == (int *)0x0) {
    iVar11 = *(int *)(in_ECX + 0xc);
    if (iVar11 != 0) {
      piVar8 = *(int **)(in_ECX + 0x18);
      iVar12 = 0;
      do {
        uVar4 = *(ushort *)(piVar8 + 2);
        if (uVar4 != 0xffff) {
          if ((((*(int *)(*piVar8 + 8) + (uint)uVar4 != 0) &&
               (iVar7 = *(int *)(*piVar8 + 8) + (uint)uVar4, iVar7 != 0)) &&
              (*(char *)(iVar7 + 2) == 'T')) && (*(char *)(iVar7 + 7) == 'f')) {
            iVar12 = iVar12 + 1;
          }
        }
        piVar8 = piVar8 + 4;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      if ((short)iVar12 != 0) {
        iVar11 = FUN_00401f00(0x48,uVar5);
        local_4._0_1_ = 1;
        if (iVar11 == 0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)FUN_006c5ee0(iVar12 + 10);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if (piVar8 != (int *)0x0) {
          InterlockedIncrement(piVar8 + 1);
          piVar6 = piVar8;
        }
        (**(code **)(*piVar6 + 0x58))(param_1);
        *(ushort *)(piVar6 + 2) = *(ushort *)(piVar6 + 2) | 0x20;
        local_1d = 1;
        if (param_1 == *(int *)(*(int *)(in_ECX + 0x40) + 0x30)) {
          FUN_006ffe90(piVar6);
          puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x40) + 0x34);
          puVar3 = (undefined4 *)piVar6[0xd];
          if (puVar3 != puVar2) {
            if (((puVar3 != (undefined4 *)0x0) &&
                (LVar9 = InterlockedDecrement(puVar3 + 1), LVar9 == 0)) &&
               (puVar3 != (undefined4 *)0x0)) {
              (**(code **)*puVar3)(1);
            }
            piVar6[0xd] = (int)puVar2;
            if (puVar2 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar2 + 1);
            }
          }
          iVar11 = *(int *)(in_ECX + 0x40);
          piVar8 = *(int **)(iVar11 + 0x34);
          if (piVar8 != piVar6) {
            if (((piVar8 != (int *)0x0) && (LVar9 = InterlockedDecrement(piVar8 + 1), LVar9 == 0))
               && (piVar8 != (int *)0x0)) {
              (**(code **)*piVar8)(1);
            }
            *(int **)(iVar11 + 0x34) = piVar6;
            InterlockedIncrement(piVar6 + 1);
          }
        }
        goto LAB_006c83b6;
      }
    }
    local_1d = 0;
  }
  else {
LAB_006c83b6:
    param_1 = 0;
    if (*(int *)(in_ECX + 0xc) != 0) {
      local_18 = 0;
      do {
        iVar11 = *(int *)(in_ECX + 0x14) + local_18;
        uVar4 = *(ushort *)(*(int *)(in_ECX + 0x18) + 8 + local_18);
        piVar8 = (int *)(*(int *)(in_ECX + 0x18) + local_18);
        if (uVar4 != 0xffff) {
          iVar12 = *piVar8;
          if (*(int *)(iVar12 + 8) + (uint)uVar4 != 0) {
            iVar12 = *(int *)(iVar12 + 8);
            iVar7 = (uint)uVar4 + iVar12;
            if (((iVar7 != 0) && (*(char *)(iVar7 + 2) == 'T')) && (*(char *)(iVar7 + 7) == 'f')) {
              uVar4 = *(ushort *)(piVar8 + 1);
              if (uVar4 == 0xffff) {
                iVar12 = 0;
              }
              else {
                iVar12 = (uint)uVar4 + iVar12;
              }
              iVar12 = (**(code **)(*param_2 + 0x4c))(iVar12);
              if ((iVar12 != 0) &&
                 ((*(int *)(in_ECX + 0x60) != iVar12 ||
                  (*(char *)(*(int *)(in_ECX + 0x40) + 0x6c) == '\0')))) {
                uVar10 = FUN_00700010(&DAT_00b3ca58);
                uVar4 = 0;
                if (*(ushort *)(piVar6 + 0x11) != 0) {
                  do {
                    if (*(int *)(piVar6[0x10] + (uint)uVar4 * 4) == iVar12) {
                      if (uVar4 != 0xffff) {
                        *(int *)(piVar6[0x10] + (uint)uVar4 * 4) = iVar12;
                        goto LAB_006c84aa;
                      }
                      break;
                    }
                    uVar4 = uVar4 + 1;
                  } while (uVar4 < *(ushort *)(piVar6 + 0x11));
                }
                uVar4 = FUN_006c5f80(iVar12);
                if (uVar4 != 0xffff) {
LAB_006c84aa:
                  iVar12 = __stricmp(*(char **)(iVar12 + 8),"Bip01");
                  if (iVar12 != 0) {
                    FUN_006ffe90(uVar10);
                  }
                  piVar8 = *(int **)(iVar11 + 4);
                  if (piVar8 != piVar6) {
                    if (((piVar8 != (int *)0x0) &&
                        (LVar9 = InterlockedDecrement(piVar8 + 1), LVar9 == 0)) &&
                       (piVar8 != (int *)0x0)) {
                      (**(code **)*piVar8)(1);
                    }
                    *(int **)(iVar11 + 4) = piVar6;
                    InterlockedIncrement(piVar6 + 1);
                  }
                  iVar12 = piVar6[0xf] + (uint)uVar4 * 0x30;
                  *(int *)(iVar11 + 8) = iVar12;
                  pbVar1 = (byte *)(iVar12 + 0xc);
                  *pbVar1 = *pbVar1 | 1;
                }
              }
            }
          }
        }
        param_1 = param_1 + 1;
        local_18 = local_18 + 0x10;
      } while (param_1 < *(uint *)(in_ECX + 0xc));
    }
    local_4 = 0xffffffff;
    if ((piVar6 != (int *)0x0) && (LVar9 = InterlockedDecrement(piVar6 + 1), LVar9 == 0)) {
      (**(code **)*piVar6)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return local_1d;
}



undefined4 FUN_006c8580(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  uint *puVar5;
  LONG LVar6;
  int in_ECX;
  uint uVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  uint *local_24;
  uint *local_20;
  uint local_18;
  int local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7626;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x10) != 0) {
    uVar8 = *(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 0x10);
    uVar7 = -(uint)((int)((ulonglong)uVar8 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 0x10);
    puVar5 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar7) | uVar7 + 4,uVar4);
    local_4 = 0;
    if (puVar5 == (uint *)0x0) {
      local_24 = (uint *)0x0;
    }
    else {
      local_24 = puVar5 + 1;
      *puVar5 = uVar8;
      _eh_vector_constructor_iterator_(local_24,0x10,uVar8,FUN_006c62e0,FUN_006c64c0);
    }
    local_4 = 0xffffffff;
    uVar7 = -(uint)((int)((ulonglong)uVar8 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 0x10);
    puVar5 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar7) | uVar7 + 4,uVar4);
    local_4 = 1;
    if (puVar5 == (uint *)0x0) {
      local_20 = (uint *)0x0;
    }
    else {
      local_20 = puVar5 + 1;
      *puVar5 = uVar8;
      _eh_vector_constructor_iterator_(local_20,0x10,uVar8,FUN_006c6370,FUN_007016a0);
    }
    local_4 = 0xffffffff;
    local_18 = 0;
    if (uVar8 != 0) {
      local_14 = 0;
      puVar5 = local_20;
      do {
        if (local_18 < *(uint *)(in_ECX + 0xc)) {
          FUN_006c6870(*(int *)(in_ECX + 0x14) + local_14);
          FUN_006c67f0(*(int *)(in_ECX + 0x18) + local_14);
        }
        else {
          puVar1 = *(undefined4 **)(in_ECX + 100);
          puVar2 = (undefined4 *)*puVar5;
          if (puVar2 != puVar1) {
            if (((puVar2 != (undefined4 *)0x0) &&
                (LVar6 = InterlockedDecrement(puVar2 + 1), LVar6 == 0)) &&
               (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            *puVar5 = (uint)puVar1;
            if (puVar1 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar1 + 1);
            }
          }
        }
        local_18 = local_18 + 1;
        local_14 = local_14 + 0x10;
        puVar5 = puVar5 + 4;
      } while (local_18 < uVar8);
    }
    pvVar3 = *(void **)(in_ECX + 0x14);
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar3,0x10,*(int *)((int)pvVar3 + -4),FUN_006c64c0);
      FUN_00401f20((int)pvVar3 + -4);
    }
    pvVar3 = *(void **)(in_ECX + 0x18);
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar3,0x10,*(int *)((int)pvVar3 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar3 + -4);
    }
    *(uint **)(in_ECX + 0x14) = local_24;
    *(uint *)(in_ECX + 0xc) = uVar8;
    *(uint **)(in_ECX + 0x18) = local_20;
    *unaff_FS_OFFSET = local_c;
    return CONCAT31((int3)((uint)local_24 >> 8),1);
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 FUN_006c87a0(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x68,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_006c6550();
  }
  local_4 = 0xffffffff;
  FUN_006c70a0(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_006c8820(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *in_ECX;
  int *piStack_4;
  
  iVar2 = param_1;
  piStack_4 = in_ECX;
  puVar3 = (undefined4 *)FUN_00712a90();
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *in_ECX = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = (undefined4 *)FUN_00712a90();
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[1] = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(uint *)(iVar2 + 0xd8) < 0xa01006f) {
    FUN_00712a90();
    piStack_4 = (int *)&DAT_00000002;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&param_1,2,&piStack_4,1);
  }
  if (*(int *)(iVar2 + 4) != 0) {
    param_1 = 1;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))
              (*(int *)(iVar2 + 0x21c),(undefined1 *)((int)in_ECX + 0xd),1,&param_1,1);
  }
  return;
}



void FUN_006c8920(int *param_1)

{
  undefined4 *in_ECX;
  
  (**(code **)(*param_1 + 0x2c))(*in_ECX);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],&stack0x00000000,4,&stack0xfffffff8,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],&stack0x00000000,4,&stack0xfffffff8,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],&stack0x00000000,4,&stack0xfffffff8,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],&stack0x00000000,4,&stack0xfffffff8,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],&stack0x00000000,4,&stack0xfffffff8,1);
  return;
}



void FUN_006c8a60(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 local_4;
  
  iVar1 = param_1;
  if (0xa010070 < *(uint *)(param_1 + 0xd8)) {
    uVar3 = FUN_00712a90();
    FUN_0075fa90(uVar3);
    local_4 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,4,&local_4,1);
    *(undefined2 *)(in_ECX + 4) = (undefined2)param_1;
    local_4 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,4,&local_4,1);
    *(undefined2 *)(in_ECX + 6) = (undefined2)param_1;
    local_4 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,4,&local_4,1);
    *(undefined2 *)(in_ECX + 8) = (undefined2)param_1;
    local_4 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,4,&local_4,1);
    *(undefined2 *)(in_ECX + 10) = (undefined2)param_1;
    local_4 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,4,&local_4,1);
    *(undefined2 *)(in_ECX + 0xc) = (undefined2)param_1;
    return;
  }
  param_1 = 0;
  FUN_00713620(&param_1);
  if (param_1 == 0) {
    *(undefined2 *)(in_ECX + 4) = 0xffff;
  }
  else {
    uVar2 = FUN_006c6270(param_1);
    *(undefined2 *)(in_ECX + 4) = uVar2;
  }
  FUN_00401f20(param_1);
  param_1 = 0;
  FUN_00713620(&param_1);
  if (param_1 == 0) {
    *(undefined2 *)(in_ECX + 6) = 0xffff;
  }
  else {
    uVar2 = FUN_006c6270(param_1);
    *(undefined2 *)(in_ECX + 6) = uVar2;
  }
  FUN_00401f20(param_1);
  param_1 = 0;
  FUN_00713620(&param_1);
  if (param_1 == 0) {
    *(undefined2 *)(in_ECX + 8) = 0xffff;
  }
  else {
    uVar2 = FUN_006c6270(param_1);
    *(undefined2 *)(in_ECX + 8) = uVar2;
  }
  FUN_00401f20(param_1);
  param_1 = 0;
  FUN_00713620(&param_1);
  if (param_1 == 0) {
    *(undefined2 *)(in_ECX + 10) = 0xffff;
  }
  else {
    uVar2 = FUN_006c6270(param_1);
    *(undefined2 *)(in_ECX + 10) = uVar2;
  }
  FUN_00401f20(param_1);
  param_1 = 0;
  FUN_00713620(&param_1);
  if (param_1 == 0) {
    *(undefined2 *)(in_ECX + 0xc) = 0xffff;
    FUN_00401f20(0);
    return;
  }
  uVar2 = FUN_006c6270(param_1);
  *(undefined2 *)(in_ECX + 0xc) = uVar2;
  FUN_00401f20(param_1);
  return;
}



void FUN_006c8e40(uint *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  LONG LVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int in_ECX;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int *unaff_FS_OFFSET;
  int iStack_1c;
  undefined4 *puStack_18;
  undefined4 *local_14;
  uint *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar5 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c7692;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007008a0(param_1);
  if (puVar5[0x36] < 0xa010068) {
    FUN_00713620(in_ECX + 8);
    FUN_00713620(in_ECX + 0x5c);
    FUN_00712a20();
    puVar1 = (uint *)(in_ECX + 0xc);
    local_14 = (undefined4 *)0x4;
    (**(code **)(puVar5[0x87] + 4))(puVar5[0x87],puVar1,4,&local_14,1);
    uVar4 = *puVar1;
    *(undefined4 *)(in_ECX + 0x10) = 0xc;
    uVar10 = -(uint)((int)((ulonglong)uVar4 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x10);
    puStack_10 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar10) | uVar10 + 4);
    uStack_4 = 0;
    if (puStack_10 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      *puStack_10 = uVar4;
      param_1 = puStack_10 + 1;
      _eh_vector_constructor_iterator_(param_1,0x10,uVar4,FUN_006c62e0,FUN_006c64c0);
      puVar5 = param_1;
    }
    uVar4 = *puVar1;
    *(uint **)(in_ECX + 0x14) = puVar5;
    uStack_4 = 0xffffffff;
    uVar10 = -(uint)((int)((ulonglong)uVar4 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x10);
    puStack_10 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar10) | uVar10 + 4);
    uStack_4 = 1;
    if (puStack_10 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      *puStack_10 = uVar4;
      param_1 = puStack_10 + 1;
      _eh_vector_constructor_iterator_(param_1,0x10,uVar4,FUN_006c6370,FUN_007016a0);
      puVar5 = param_1;
    }
    uStack_4 = 0xffffffff;
    *(uint **)(in_ECX + 0x18) = puVar5;
    param_1 = (uint *)FUN_00401f00(0x14);
    uStack_4 = 2;
    if (param_1 == (uint *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_006c5d80(*puVar1 * 0x140);
    }
    uStack_4 = 0xffffffff;
    FUN_0075fa90(uVar6);
    local_14 = (undefined4 *)0x0;
    if (*puVar1 != 0) {
      param_1 = (uint *)0x0;
      do {
        piVar11 = (int *)(*(int *)(in_ECX + 0x18) + (int)param_1);
        puStack_18 = *(undefined4 **)(in_ECX + 100);
        puVar2 = (undefined4 *)*piVar11;
        if (puVar2 != puStack_18) {
          if (((puVar2 != (undefined4 *)0x0) &&
              (LVar7 = InterlockedDecrement(puVar2 + 1), LVar7 == 0)) &&
             (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          *piVar11 = (int)puStack_18;
          if (puStack_18 != (undefined4 *)0x0) {
            InterlockedIncrement(puStack_18 + 1);
          }
        }
        iStack_1c = 0;
        FUN_00713620(&iStack_1c);
        iVar12 = *(int *)(in_ECX + 0x18) + (int)param_1;
        if (iStack_1c == 0) {
          *(undefined2 *)(iVar12 + 4) = 0xffff;
        }
        else {
          uVar3 = FUN_006c6270(iStack_1c);
          *(undefined2 *)(iVar12 + 4) = uVar3;
        }
        FUN_00401f20(iStack_1c);
        FUN_00712a20();
        param_1 = (uint *)((int)param_1 + 0x10);
        local_14 = (undefined4 *)((int)local_14 + 1);
      } while (local_14 < *(undefined4 **)(in_ECX + 0xc));
    }
  }
  else {
    FUN_00713620(in_ECX + 8);
    puVar1 = (uint *)(in_ECX + 0xc);
    local_14 = (undefined4 *)0x4;
    (**(code **)(puVar5[0x87] + 4))(puVar5[0x87],puVar1,4,&local_14,1,uVar4);
    local_14 = (undefined4 *)&DAT_00000004;
    (**(code **)(puVar5[0x87] + 4))(puVar5[0x87],in_ECX + 0x10,4,&local_14,1);
    uVar4 = *puVar1;
    uVar10 = -(uint)((int)((ulonglong)uVar4 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x10);
    puStack_10 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar10) | uVar10 + 4);
    uStack_4 = 3;
    if (puStack_10 == (uint *)0x0) {
      puVar8 = (uint *)0x0;
    }
    else {
      *puStack_10 = uVar4;
      param_1 = puStack_10 + 1;
      _eh_vector_constructor_iterator_(param_1,0x10,uVar4,FUN_006c62e0,FUN_006c64c0);
      puVar8 = param_1;
    }
    uVar4 = *puVar1;
    *(uint **)(in_ECX + 0x14) = puVar8;
    uStack_4 = 0xffffffff;
    uVar10 = -(uint)((int)((ulonglong)uVar4 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x10);
    puStack_10 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar10) | uVar10 + 4);
    uStack_4 = 4;
    if (puStack_10 == (uint *)0x0) {
      puVar8 = (uint *)0x0;
    }
    else {
      *puStack_10 = uVar4;
      param_1 = puStack_10 + 1;
      _eh_vector_constructor_iterator_(param_1,0x10,uVar4,FUN_006c6370,FUN_007016a0);
      puVar8 = param_1;
    }
    *(uint **)(in_ECX + 0x18) = puVar8;
    uStack_4 = 0xffffffff;
    if (puVar5[0x36] < 0xa010071) {
      param_1 = (uint *)FUN_00401f00(0x14);
      uStack_4 = 5;
      if (param_1 == (uint *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_006c5d80(*puVar1 * 0x140);
      }
      uStack_4 = 0xffffffff;
      FUN_0075fa90(uVar6);
    }
    puStack_18 = (undefined4 *)0x0;
    if (*puVar1 != 0) {
      iVar12 = 0;
      do {
        if (puVar5[0x36] < 0xa010071) {
          local_14 = *(undefined4 **)(in_ECX + 100);
          puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x18) + iVar12);
          param_1 = (uint *)(*(int *)(in_ECX + 0x18) + iVar12);
          if (puVar2 != local_14) {
            if (((puVar2 != (undefined4 *)0x0) &&
                (LVar7 = InterlockedDecrement(puVar2 + 1), LVar7 == 0)) &&
               (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            *param_1 = (uint)local_14;
            if (local_14 != (undefined4 *)0x0) {
              InterlockedIncrement(local_14 + 1);
            }
          }
        }
        FUN_006c8820(puVar5);
        FUN_006c8a60(puVar5);
        puStack_18 = (undefined4 *)((int)puStack_18 + 1);
        iVar12 = iVar12 + 0x10;
      } while (puStack_18 < *(undefined4 **)(in_ECX + 0xc));
    }
    local_14 = (undefined4 *)0x4;
    (**(code **)(puVar5[0x87] + 4))(puVar5[0x87],in_ECX + 0x1c,4,&local_14,1);
    FUN_00712a20();
    local_14 = (undefined4 *)0x4;
    (**(code **)(puVar5[0x87] + 4))(puVar5[0x87],&puStack_18,4,&local_14,1);
    *(undefined4 **)(in_ECX + 0x24) = puStack_18;
    local_14 = (undefined4 *)0x4;
    (**(code **)(puVar5[0x87] + 4))(puVar5[0x87],in_ECX + 0x28,4,&local_14,1);
    if (puVar5[0x36] < 0xa030001) {
      local_14 = (undefined4 *)0x4;
      (**(code **)(puVar5[0x87] + 4))(puVar5[0x87],&puStack_18,4,&local_14,1);
    }
    local_14 = (undefined4 *)0x4;
    (**(code **)(puVar5[0x87] + 4))(puVar5[0x87],in_ECX + 0x2c,4,&local_14,1);
    local_14 = (undefined4 *)0x4;
    (**(code **)(puVar5[0x87] + 4))(puVar5[0x87],in_ECX + 0x30,4,&local_14,1);
    if (puVar5[0x36] < 0xa01006b) {
      puStack_10 = (uint *)0x1;
      (**(code **)(puVar5[0x87] + 4))(puVar5[0x87],&param_1,1,&puStack_10,1);
    }
    FUN_00712a20();
    FUN_00713620(in_ECX + 0x5c);
    if (0xa010070 < puVar5[0x36]) {
      puVar9 = (undefined4 *)FUN_00712a90();
      puVar2 = *(undefined4 **)(in_ECX + 100);
      if (puVar2 != puVar9) {
        if (((puVar2 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar2 + 1), LVar7 == 0)
            ) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 **)(in_ECX + 100) = puVar9;
        if (puVar9 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar9 + 1);
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006c9420(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  LONG LVar4;
  uint uVar5;
  
  puVar2 = param_1;
  uVar5 = 0;
  if (param_1[3] != 0) {
    do {
      FUN_006c6610(&param_1,uVar5);
      puVar3 = param_1;
      if (((param_1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 == 0)
          ) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)puVar2[3]);
  }
  pvVar1 = (void *)puVar2[5];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_006c64c0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  pvVar1 = (void *)puVar2[6];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  FUN_006c70a0(puVar2,param_2);
  return;
}



uint FUN_006c94e0(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  LONG LVar4;
  int in_ECX;
  uint uVar5;
  int *piVar6;
  
  uVar1 = *(uint *)(in_ECX + 0xc);
  uVar5 = 0;
  if (uVar1 != 0) {
    piVar6 = *(int **)(in_ECX + 0x14);
    do {
      if (*piVar6 == 0) break;
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < uVar1);
  }
  if ((uVar5 == uVar1) && (cVar3 = FUN_006c8580(), cVar3 == '\0')) {
    return 0xffffffff;
  }
  piVar6 = (int *)(*(int *)(in_ECX + 0x14) + uVar5 * 0x10);
  puVar2 = (undefined4 *)*piVar6;
  if (puVar2 != param_1) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar2 + 1), LVar4 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *piVar6 = (int)param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  FUN_006c67f0(param_2);
  return uVar5;
}



undefined4 FUN_006c9590(undefined4 param_1)

{
  byte bVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  int iVar13;
  int in_ECX;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  char *_Str1;
  int *piVar19;
  bool bVar20;
  char cStack_2a;
  undefined1 uStack_29;
  int local_28;
  int *local_24;
  int *piStack_20;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  piVar2 = *(int **)(*(int *)(in_ECX + 0x40) + 0x7c);
  local_28 = in_ECX;
  local_24 = piVar2;
  if (*(int *)(in_ECX + 0x5c) != 0) {
    uVar7 = (**(code **)(*piVar2 + 0x4c))(*(int *)(in_ECX + 0x5c));
    *(undefined4 *)(in_ECX + 0x60) = uVar7;
  }
  cStack_2a = FUN_006c8220(param_1,piVar2);
  bVar3 = false;
  uStack_18 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    do {
      iVar13 = local_28;
      iVar8 = uStack_18 * 0x10;
      piVar2 = *(int **)(iVar8 + *(int *)(local_28 + 0x14));
      iStack_1c = iVar8;
      if (piVar2 != (int *)0x0) {
        piVar17 = (int *)(*(int *)(local_28 + 0x18) + iVar8);
        cVar5 = (**(code **)(*piVar2 + 0x8c))(local_24);
        if (cVar5 == '\0') {
          if (*(ushort *)(piVar17 + 3) == 0xffff) {
            iVar8 = 0;
          }
          else {
            iVar8 = (uint)*(ushort *)(piVar17 + 3) + *(int *)(*piVar17 + 8);
          }
          if (*(ushort *)((int)piVar17 + 10) == 0xffff) {
            iVar18 = 0;
          }
          else {
            iVar18 = (uint)*(ushort *)((int)piVar17 + 10) + *(int *)(*piVar17 + 8);
          }
          if (*(ushort *)(piVar17 + 2) == 0xffff) {
            iVar16 = 0;
          }
          else {
            iVar16 = (uint)*(ushort *)(piVar17 + 2) + *(int *)(*piVar17 + 8);
          }
          if (*(ushort *)((int)piVar17 + 6) == 0xffff) {
            iVar14 = 0;
          }
          else {
            iVar14 = (uint)*(ushort *)((int)piVar17 + 6) + *(int *)(*piVar17 + 8);
          }
          if (*(ushort *)(piVar17 + 1) == 0xffff) {
            iVar9 = 0;
          }
          else {
            iVar9 = (uint)*(ushort *)(piVar17 + 1) + *(int *)(*piVar17 + 8);
          }
          FUN_00748530(auStack_10,0,
                       "NiControllerSequence::StoreTargets \'%s\'failed to resolve dependencies for the interpolator with thefollowing identifiers:\n\tm_pcAVObjectName\t%s\n\tm_pcPropertyType\t%s\nm_pcCtlrType\t\t%s\nm_pcCtlrID\t\t\t%s\nm_pcInterpolatorID\t%s\n"
                       ,*(undefined4 *)(iVar13 + 8),iVar9,iVar14,iVar16,iVar18,iVar8);
        }
        else if (*(int *)(iVar8 + 8 + *(int *)(iVar13 + 0x14)) == 0) {
          if (*(ushort *)(piVar17 + 1) == 0xffff) {
            iVar13 = 0;
          }
          else {
            iVar13 = (uint)*(ushort *)(piVar17 + 1) + *(int *)(*piVar17 + 8);
          }
          piStack_20 = (int *)(**(code **)(*local_24 + 0x4c))(iVar13);
          if (piStack_20 != (int *)0x0) {
            piVar2 = piStack_20;
            if ((*(ushort *)((int)piVar17 + 6) != 0xffff) &&
               ((uint)*(ushort *)((int)piVar17 + 6) + *(int *)(*piVar17 + 8) != 0)) {
              puVar12 = (undefined4 *)piStack_20[0x27];
              do {
                piVar2 = piStack_20;
                if (puVar12 == (undefined4 *)0x0) break;
                piVar2 = (int *)puVar12[2];
                puVar12 = (undefined4 *)*puVar12;
                puVar10 = (undefined4 *)(**(code **)(*piVar2 + 4))();
                pbVar11 = (byte *)FUN_006c63a0();
                pbVar15 = (byte *)*puVar10;
                do {
                  bVar1 = *pbVar15;
                  bVar20 = bVar1 < *pbVar11;
                  if (bVar1 != *pbVar11) {
LAB_006c9750:
                    iVar13 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                    goto LAB_006c9755;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar15[1];
                  bVar20 = bVar1 < pbVar11[1];
                  if (bVar1 != pbVar11[1]) goto LAB_006c9750;
                  pbVar15 = pbVar15 + 2;
                  pbVar11 = pbVar11 + 2;
                } while (bVar1 != 0);
                iVar13 = 0;
LAB_006c9755:
              } while (iVar13 != 0);
            }
            piStack_20 = piVar2;
            piVar2 = piStack_20;
            if (piStack_20 != (int *)0x0) {
              iVar13 = local_28;
              for (piVar19 = (int *)piStack_20[3]; local_28 = iVar13, piVar19 != (int *)0x0;
                  piVar19 = (int *)piVar19[0xd]) {
                puVar12 = (undefined4 *)(**(code **)(*piVar19 + 4))();
                pbVar11 = (byte *)FUN_006c63c0();
                pbVar15 = (byte *)*puVar12;
                do {
                  bVar1 = *pbVar15;
                  bVar20 = bVar1 < *pbVar11;
                  if (bVar1 != *pbVar11) {
LAB_006c9894:
                    iVar13 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                    goto LAB_006c9899;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar15[1];
                  bVar20 = bVar1 < pbVar11[1];
                  if (bVar1 != pbVar11[1]) goto LAB_006c9894;
                  pbVar15 = pbVar15 + 2;
                  pbVar11 = pbVar11 + 2;
                } while (bVar1 != 0);
                iVar13 = 0;
LAB_006c9899:
                if (iVar13 == 0) {
                  pbVar15 = (byte *)(**(code **)(*piVar19 + 0x8c))();
                  iVar13 = FUN_006c63e0();
                  if (pbVar15 != (byte *)0x0) {
                    if (iVar13 == 0) goto LAB_006c98ec;
                    pbVar11 = (byte *)FUN_006c63e0();
                    do {
                      bVar1 = *pbVar15;
                      bVar20 = bVar1 < *pbVar11;
                      if (bVar1 != *pbVar11) {
LAB_006c98e3:
                        iVar13 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                        goto LAB_006c98e8;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar15[1];
                      bVar20 = bVar1 < pbVar11[1];
                      if (bVar1 != pbVar11[1]) goto LAB_006c98e3;
                      pbVar15 = pbVar15 + 2;
                      pbVar11 = pbVar11 + 2;
                    } while (bVar1 != 0);
                    iVar13 = 0;
                  }
LAB_006c98e8:
                  if (iVar13 == 0) goto LAB_006c9940;
                }
LAB_006c98ec:
                iVar13 = local_28;
              }
              piVar19 = *(int **)(iStack_1c + 4 + *(int *)(iVar13 + 0x14));
              if (piVar19 == (int *)0x0) {
                if (*(ushort *)((int)piVar17 + 10) == 0xffff) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = (uint)*(ushort *)((int)piVar17 + 10) + *(int *)(*piVar17 + 8);
                }
                if (*(ushort *)(piVar17 + 2) == 0xffff) {
                  iVar18 = 0;
                }
                else {
                  iVar18 = (uint)*(ushort *)(piVar17 + 2) + *(int *)(*piVar17 + 8);
                }
                if (*(ushort *)((int)piVar17 + 6) == 0xffff) {
                  iVar16 = 0;
                }
                else {
                  iVar16 = (uint)*(ushort *)((int)piVar17 + 6) + *(int *)(*piVar17 + 8);
                }
                if (*(ushort *)(piVar17 + 1) == 0xffff) {
                  iVar14 = 0;
                }
                else {
                  iVar14 = (uint)*(ushort *)(piVar17 + 1) + *(int *)(*piVar17 + 8);
                }
                FUN_00748530(auStack_8,0,
                             "NiControllerSequence::StoreTargets \'%s\'failed to find target with the following identifiers:\n\tm_pcAVObjectName\t%s\n\tm_pcPropertyType\t%s\n\tm_pcCtlrType\t\t%s\n\tm_pcCtlrID\t\t\t%s\n"
                             ,*(undefined4 *)(iVar13 + 8),iVar14,iVar16,iVar18,iVar8);
                goto LAB_006c9b16;
              }
              (**(code **)(*piVar19 + 0x58))(piVar2);
              cStack_2a = '\x01';
              if (piVar2 == *(int **)(*(int *)(iVar13 + 0x40) + 0x30)) {
                FUN_006ffe90(piVar19);
                FUN_006c61e0(*(undefined4 *)(*(int *)(iVar13 + 0x40) + 0x34));
                FUN_006c61e0(piVar19);
              }
LAB_006c9940:
              if (*(ushort *)(piVar17 + 3) == 0xffff) {
                iVar13 = 0;
              }
              else {
                iVar13 = (uint)*(ushort *)(piVar17 + 3) + *(int *)(*piVar17 + 8);
              }
              sVar6 = (**(code **)(*piVar19 + 0x7c))(iVar13);
              if (sVar6 == -1) {
LAB_006c9a64:
                if (*(ushort *)(piVar17 + 3) == 0xffff) {
                  iVar13 = 0;
                }
                else {
                  iVar13 = (uint)*(ushort *)(piVar17 + 3) + *(int *)(*piVar17 + 8);
                }
                if (*(ushort *)((int)piVar17 + 10) == 0xffff) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = (uint)*(ushort *)((int)piVar17 + 10) + *(int *)(*piVar17 + 8);
                }
                if (*(ushort *)(piVar17 + 2) == 0xffff) {
                  iVar18 = 0;
                }
                else {
                  iVar18 = (uint)*(ushort *)(piVar17 + 2) + *(int *)(*piVar17 + 8);
                }
                if (*(ushort *)((int)piVar17 + 6) == 0xffff) {
                  iVar16 = 0;
                }
                else {
                  iVar16 = (uint)*(ushort *)((int)piVar17 + 6) + *(int *)(*piVar17 + 8);
                }
                if (*(ushort *)(piVar17 + 1) == 0xffff) {
                  iVar14 = 0;
                }
                else {
                  iVar14 = (uint)*(ushort *)(piVar17 + 1) + *(int *)(*piVar17 + 8);
                }
                FUN_00748530(auStack_4,0,
                             "NiControllerSequence::StoreTargets \'%s\'failed to find target with the following identifiers:\n\tm_pcAVObjectName\t%s\n\tm_pcPropertyType\t%s\n\tm_pcCtlrType\t\t%s\n\tm_pcCtlrID\t\t\t%s\n\tm_pcInterpolatorID\t%s\n"
                             ,*(undefined4 *)(local_28 + 8),iVar14,iVar16,iVar18,iVar8,iVar13);
              }
              else {
                uVar7 = (**(code **)(*piVar19 + 0x80))(sVar6);
                iVar13 = FUN_00560920(&DAT_00b3cc5c,uVar7);
                uVar4 = uStack_14;
                uStack_14 = uStack_14 & 0xffffff00;
                if ((*(int **)(local_28 + 0x60) == piStack_20) &&
                   (*(char *)(*(int *)(local_28 + 0x40) + 0x6c) != '\0')) {
                  uStack_14 = CONCAT31(SUB43(uVar4,1),1);
                }
                if (iVar13 == 0) {
                  iVar13 = (**(code **)(*piVar19 + 0x98))(sVar6,1,uStack_14,0,2);
                  (**(code **)(*piVar19 + 0x84))(iVar13,sVar6);
                  if (iVar13 == 0) goto LAB_006c9a64;
                }
                iVar18 = iStack_1c;
                iVar8 = local_28;
                *(ushort *)(piVar19 + 2) = *(ushort *)(piVar19 + 2) | 0x20;
                FUN_0075fa90(piVar19);
                *(int *)(iVar18 + 8 + *(int *)(iVar8 + 0x14)) = iVar13;
              }
              goto LAB_006c9b16;
            }
          }
          if (*(ushort *)(piVar17 + 1) == 0xffff) {
            _Str1 = (char *)0x0;
          }
          else {
            _Str1 = (char *)((uint)*(ushort *)(piVar17 + 1) + *(int *)(*piVar17 + 8));
          }
          if (!bVar3) {
            iVar13 = __stricmp(_Str1,"Bip01");
            if ((iVar13 == 0) && (iVar13 = (**(code **)(*local_24 + 0x4c))("Bip02"), iVar13 != 0)) {
              bVar3 = true;
            }
            else {
              iVar13 = __strnicmp("Bow",_Str1,3);
              if ((iVar13 != 0) &&
                 (((iVar13 = __strnicmp("Arrow",_Str1,5), iVar13 != 0 &&
                   (iVar13 = __strnicmp("Bip01 Tail",_Str1,10), iVar13 != 0)) &&
                  (iVar13 = __strnicmp("Bridle",_Str1,6), iVar13 != 0)))) {
                uVar7 = FUN_006c63a0();
                uVar7 = FUN_006c63c0(uVar7);
                FUN_00748530(auStack_c,0,
                             "NiControllerSequence::StoreTargets \'%s\'failed to find target with the following identifiers:\n\tm_pcAVObjectName\t%s\n\tm_pcCtlrType\t\t%s\n\tm_pcPropertyType\t%s\n"
                             ,*(undefined4 *)(local_28 + 8),_Str1,uVar7);
              }
            }
          }
        }
      }
LAB_006c9b16:
      uStack_18 = uStack_18 + 1;
    } while (uStack_18 < *(uint *)(local_28 + 0xc));
  }
  if (cStack_2a != '\0') {
    (**(code **)(**(int **)(*(int *)(local_28 + 0x40) + 0x30) + 0x5c))(&uStack_29,1,&cStack_2a);
  }
  piVar2 = local_24;
  if (((bVar3) || (iVar13 = (**(code **)(*local_24 + 0x4c))("Bip02"), iVar13 != 0)) &&
     ((iVar13 = (**(code **)(*piVar2 + 0x4c))(&DAT_00a30968), iVar13 != 0 &&
      (*(int *)(iVar13 + 0x1c) != 0)))) {
    FUN_006c6910(*(int *)(iVar13 + 0x1c));
  }
  return 1;
}



uint FUN_006c9ba0(undefined4 param_1,char param_2,undefined4 param_3,float param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  undefined2 extraout_var_01;
  undefined3 uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint in_ECX;
  
  if (*(int *)(in_ECX + 0x44) != 0) {
    return in_EAX & 0xffffff00;
  }
  *(undefined4 *)(in_ECX + 0x58) = 0;
  if (param_5 != 0) {
    uVar2 = *(uint *)(param_5 + 0x58);
    if (((uVar2 != 0) && ((uVar2 == in_ECX || (uVar2 = FUN_006c6110(uVar2), (char)uVar2 == '\0'))))
       || (uVar2 = FUN_006c6ed0(param_5), (char)uVar2 == '\0')) {
      return uVar2 & 0xffffff00;
    }
    *(int *)(in_ECX + 0x58) = param_5;
  }
  FUN_006c6a50(param_1);
  *(undefined4 *)(in_ECX + 0x1c) = param_3;
  uVar3 = (undefined3)
          (CONCAT22(extraout_var_01,
                    (ushort)(0.0 < param_4) << 8 | (ushort)NAN(param_4) << 10 |
                    (ushort)(param_4 == 0.0) << 0xe) >> 8);
  if (0.0 < param_4) {
    if ((char)param_6 == '\0') {
      iVar1 = *(int *)(in_ECX + 0x44);
      *(undefined4 *)(in_ECX + 0x44) = 2;
    }
    else {
      iVar1 = *(int *)(in_ECX + 0x44);
      *(undefined4 *)(in_ECX + 0x44) = 5;
    }
    if (iVar1 == 0) {
      FUN_0073a5e0(&param_6);
      uVar3 = extraout_var;
    }
    *(undefined4 *)(in_ECX + 0x4c) = 0xff7fffff;
    *(float *)(in_ECX + 0x50) = param_4;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x44);
    *(undefined4 *)(in_ECX + 0x44) = 1;
    if (iVar1 == 0) {
      FUN_0073a5e0(&param_6);
      uVar3 = extraout_var_00;
    }
  }
  if (param_2 != '\0') {
    *(undefined4 *)(in_ECX + 0x48) = 0xff7fffff;
  }
  return CONCAT31(uVar3,1);
}



undefined4 FUN_006c9cb0(float param_1,char param_2)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x44) == 0) {
    return 0;
  }
  if (0.0 < param_1) {
    *(uint *)(in_ECX + 0x44) = (param_2 != '\0') + 3;
    *(undefined4 *)(in_ECX + 0x4c) = 0xff7fffff;
    *(float *)(in_ECX + 0x50) = param_1;
    return 1;
  }
  if (*(float *)(in_ECX + 0x34) != -3.4028235e+38) {
    *(float *)(in_ECX + 0x48) =
         (*(float *)(in_ECX + 0x38) / *(float *)(in_ECX + 0x28) - *(float *)(in_ECX + 0x34)) +
         *(float *)(in_ECX + 0x48);
  }
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0xff7fffff;
  FUN_006c6ac0();
  return 1;
}



undefined4
FUN_006c9d30(int param_1,float param_2,float param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  
  FUN_006c9cb0(0,1);
  iVar2 = param_4;
  if (param_2 <= 0.0) {
    param_2 = 0.0001;
  }
  if (*(int *)(in_ECX + 0x44) == 0) {
    *(undefined4 *)(in_ECX + 0x58) = 0;
    FUN_006c6a50(param_4);
    iVar1 = *(int *)(in_ECX + 0x44);
    *(undefined4 *)(in_ECX + 0x1c) = param_5;
    *(undefined4 *)(in_ECX + 0x44) = 1;
    if (iVar1 == 0) {
      param_4 = in_ECX;
      FUN_0073a5e0(&param_4);
    }
    cVar3 = FUN_006c9ba0(iVar2,0,param_6,param_2,param_7,1);
    if (cVar3 != '\0') {
      FUN_006c9cb0(param_2,1);
      *(float *)(in_ECX + 0x54) = *(float *)(in_ECX + 0x3c) / *(float *)(in_ECX + 0x28);
      *(float *)(param_1 + 0x54) = param_3 / *(float *)(param_1 + 0x28);
      return 1;
    }
  }
  return 0;
}



uint FUN_006c9e00(int param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 extraout_var_02;
  undefined3 uVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int in_ECX;
  
  FUN_006c9cb0(0,1);
  uVar3 = param_3;
  iVar2 = param_1;
  uVar4 = FUN_006c9ba0(param_3,0,param_4,param_2,param_1,1);
  if (((char)uVar4 != '\0') && (*(int *)(iVar2 + 0x44) == 0)) {
    *(undefined4 *)(iVar2 + 0x58) = 0;
    FUN_006c6a50(uVar3);
    *(undefined4 *)(iVar2 + 0x1c) = param_5;
    uVar5 = (undefined3)
            (CONCAT22(extraout_var_02,
                      (ushort)(0.0 < param_2) << 8 | (ushort)NAN(param_2) << 10 |
                      (ushort)(param_2 == 0.0) << 0xe) >> 8);
    if (0.0 < param_2) {
      iVar1 = *(int *)(iVar2 + 0x44);
      *(undefined4 *)(iVar2 + 0x44) = 5;
      if (iVar1 == 0) {
        param_1 = iVar2;
        FUN_0073a5e0(&param_1);
        uVar5 = extraout_var;
      }
      *(undefined4 *)(iVar2 + 0x4c) = 0xff7fffff;
      *(float *)(iVar2 + 0x50) = param_2;
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x44);
      *(undefined4 *)(iVar2 + 0x44) = 1;
      if (iVar1 == 0) {
        param_2 = (float)iVar2;
        FUN_0073a5e0(&param_2);
        uVar5 = extraout_var_00;
      }
    }
    *(undefined4 *)(iVar2 + 0x48) = 0xff7fffff;
    iVar2 = *(int *)(in_ECX + 0x44);
    *(undefined4 *)(in_ECX + 0x44) = 6;
    if (iVar2 == 0) {
      FUN_0073a5e0(&param_2);
      uVar5 = extraout_var_01;
    }
    return CONCAT31(uVar5,1);
  }
  return uVar4 & 0xffffff00;
}



void FUN_006c9f10(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  LONG LVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int in_ECX;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *unaff_FS_OFFSET;
  uint uStack_24;
  undefined4 *local_20;
  undefined4 *puStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar3 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c76c0;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar11 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      FUN_006c6610(&local_20,uVar11);
      puVar12 = local_20;
      if (((local_20 != (undefined4 *)0x0) &&
          (LVar6 = InterlockedDecrement(local_20 + 1), LVar6 == 0)) &&
         (puVar12 != (undefined4 *)0x0)) {
        (**(code **)*puVar12)(1);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0xc));
  }
  iVar8 = *(int *)(in_ECX + 0x24);
  if ((iVar8 == 2) || (iVar8 == 0)) {
    *(int *)(param_1 + 0x24) = iVar8;
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(in_ECX + 0x30);
  puVar12 = *(undefined4 **)(in_ECX + 100);
  puStack_1c = puVar12;
  if (puVar12 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar12 + 1);
  }
  uStack_18 = 0xffff;
  uStack_16 = 0xffff;
  uStack_14 = 0xffff;
  uStack_12 = 0xffff;
  uStack_10 = 0xffff;
  uStack_4 = 1;
  uStack_24 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    param_1 = 0;
    do {
      piVar13 = (int *)(*(int *)(in_ECX + 0x14) + param_1);
      piVar1 = (int *)piVar13[1];
      if ((*piVar13 != 0) && (piVar1 != (int *)0x0)) {
        if (param_3 == 0) {
LAB_006ca059:
          uVar11 = 0;
          sVar4 = (**(code **)(*piVar1 + 0x74))(uVar5);
          if (sVar4 != 0) {
            do {
              iVar8 = (**(code **)(*piVar1 + 0x80))(uVar11);
              if (iVar8 == piVar13[2]) {
                uVar10 = (**(code **)(*piVar1 + 0x90))(uVar11);
                iVar8 = FUN_006c94e0(uVar10,&puStack_1c);
                iVar8 = iVar8 * 0x10 + *(int *)(iVar3 + 0x14);
                *(int *)(iVar8 + 8) = piVar13[2];
                puVar12 = *(undefined4 **)(iVar8 + 4);
                if (puVar12 != (undefined4 *)piVar13[1]) {
                  if (((puVar12 != (undefined4 *)0x0) &&
                      (LVar6 = InterlockedDecrement(puVar12 + 1), LVar6 == 0)) &&
                     (puVar12 != (undefined4 *)0x0)) {
                    (**(code **)*puVar12)(1);
                  }
                  iVar2 = piVar13[1];
                  *(int *)(iVar8 + 4) = iVar2;
                  if (iVar2 != 0) {
                    InterlockedIncrement((LONG *)(iVar2 + 4));
                  }
                }
                *(undefined1 *)(iVar8 + 0xd) = *(undefined1 *)((int)piVar13 + 0xd);
                break;
              }
              uVar11 = uVar11 + 1;
              uVar9 = (**(code **)(*piVar1 + 0x74))();
            } while (uVar11 < (uVar9 & 0xffff));
          }
        }
        else {
          uVar11 = 0;
          if (*(uint *)(param_3 + 0xc) != 0) {
            piVar7 = (int *)(*(int *)(param_3 + 0x14) + 4);
            do {
              if (piVar1 == (int *)*piVar7) goto LAB_006ca059;
              uVar11 = uVar11 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar11 < *(uint *)(param_3 + 0xc));
          }
        }
      }
      param_1 = param_1 + 0x10;
      uStack_24 = uStack_24 + 1;
      puVar12 = puStack_1c;
    } while (uStack_24 < *(uint *)(in_ECX + 0xc));
  }
  uStack_4 = 0xffffffff;
  if ((puVar12 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar12 + 1), LVar6 == 0)) {
    (**(code **)*puVar12)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006ca160(char *param_1,int *param_2)

{
  undefined4 *puVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  LONG LVar9;
  int iVar10;
  char *pcVar11;
  int *unaff_FS_OFFSET;
  bool bVar12;
  int local_334;
  undefined4 *puStack_330;
  undefined2 uStack_32c;
  undefined2 uStack_32a;
  undefined2 uStack_328;
  undefined2 uStack_326;
  undefined2 uStack_324;
  int local_320;
  char local_31c [260];
  char local_218 [260];
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c76f6;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_334;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffcbc;
  *unaff_FS_OFFSET = (int)&local_c;
  _strcpy_s(local_218,0x104,param_1);
  local_31c[0] = '\0';
  local_114[0] = '\0';
  pcVar5 = _strchr(local_218,10);
  if (pcVar5 != (char *)0x0) {
    _strcpy_s(local_31c,0x104,pcVar5 + 1);
    *pcVar5 = '\0';
    pcVar5 = _strchr(local_31c,10);
    _strcpy_s(local_114,0x104,pcVar5 + 1);
    *pcVar5 = '\0';
  }
  local_334 = 0;
  sVar2 = (**(code **)(*param_2 + 0x74))(uVar4);
  if (sVar2 != 0) {
    do {
      puVar1 = *(undefined4 **)(local_320 + 100);
      puStack_330 = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar1 + 1);
      }
      uStack_32c = 0xffff;
      uStack_32a = 0xffff;
      uStack_328 = 0xffff;
      uStack_326 = 0xffff;
      uStack_324 = 0xffff;
      uStack_4 = 1;
      uStack_32c = FUN_006c6270(local_218);
      iVar10 = 5;
      bVar12 = true;
      pcVar5 = local_31c;
      pcVar11 = "PROP";
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        bVar12 = *pcVar5 == *pcVar11;
        pcVar5 = pcVar5 + 1;
        pcVar11 = pcVar11 + 1;
      } while (bVar12);
      if (bVar12) {
        uStack_32a = FUN_006c6270(local_114);
      }
      piVar6 = (int *)(**(code **)(*param_2 + 4))();
      if (*piVar6 == 0) {
        uStack_328 = 0xffff;
      }
      else {
        uStack_328 = FUN_006c6270(*piVar6);
      }
      iVar10 = (**(code **)(*param_2 + 0x8c))();
      if (iVar10 == 0) {
        uStack_326 = 0xffff;
      }
      else {
        uStack_326 = FUN_006c6270(iVar10);
      }
      iVar10 = local_334;
      iVar7 = (**(code **)(*param_2 + 0x78))(local_334);
      if (iVar7 == 0) {
        uStack_328 = 0xffff;
      }
      else {
        uStack_328 = FUN_006c6270(iVar7);
      }
      uVar8 = (**(code **)(*param_2 + 0x80))(iVar10);
      iVar10 = local_320;
      iVar7 = FUN_006c94e0(uVar8,&puStack_330);
      if (iVar7 == -1) {
        uStack_4 = 0xffffffff;
        if (puVar1 != (undefined4 *)0x0) {
          LVar9 = InterlockedDecrement(puVar1 + 1);
          if (LVar9 == 0) {
            (**(code **)*puVar1)(1);
          }
        }
        uVar8 = 0;
        goto LAB_006ca3e5;
      }
      iVar10 = *(int *)(iVar10 + 0x14);
      piVar6 = *(int **)(iVar10 + 4 + iVar7 * 0x10);
      if (piVar6 != param_2) {
        if (piVar6 != (int *)0x0) {
          LVar9 = InterlockedDecrement(piVar6 + 1);
          if ((LVar9 == 0) && (piVar6 != (int *)0x0)) {
            (**(code **)*piVar6)(1);
          }
        }
        *(int **)(iVar10 + 4 + iVar7 * 0x10) = param_2;
        InterlockedIncrement(param_2 + 1);
      }
      uStack_4 = 0xffffffff;
      if (puVar1 != (undefined4 *)0x0) {
        LVar9 = InterlockedDecrement(puVar1 + 1);
        if (LVar9 == 0) {
          (**(code **)*puVar1)(1);
        }
      }
      iVar10 = local_334 + 1;
      local_334 = iVar10;
      uVar3 = (**(code **)(*param_2 + 0x74))();
    } while ((ushort)iVar10 < uVar3);
  }
  uVar8 = 1;
LAB_006ca3e5:
  *unaff_FS_OFFSET = local_c;
  return uVar8;
}



void FUN_006ca440(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007009a0(param_1);
  param_1 = FUN_0070f910(DAT_00b3cb24);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_006c6140("State",*(undefined4 *)(in_ECX + 0x44));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("ArraySize",*(undefined4 *)(in_ECX + 0xc));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("Weight",*(undefined4 *)(in_ECX + 0x1c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_00715910("CycleType",*(undefined4 *)(in_ECX + 0x24));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90(&DAT_00a79de0,*(undefined4 *)(in_ECX + 0x28));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("Begin",*(undefined4 *)(in_ECX + 0x2c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90(&DAT_00a51c18,*(undefined4 *)(in_ECX + 0x30));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90(&DAT_00a79dd8,*(undefined4 *)(in_ECX + 0x34));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("Offset",*(undefined4 *)(in_ECX + 0x48));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("Start",*(undefined4 *)(in_ECX + 0x4c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90(&DAT_00a51c18,*(undefined4 *)(in_ECX + 0x50));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("WeightLast",*(undefined4 *)(in_ECX + 0x38));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("LastScaled",*(undefined4 *)(in_ECX + 0x3c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006ca7c0(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c774e;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a79a34;
  local_4 = 2;
  if (in_ECX[0x11] != 0) {
    FUN_006c9cb0(0,0);
  }
  FUN_00401f20(in_ECX[2],uVar3);
  pvVar1 = (void *)in_ECX[5];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_006c64c0);
    FUN_00401f20((int)pvVar1 + -4,uVar3);
  }
  pvVar1 = (void *)in_ECX[6];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4,uVar3);
  }
  FUN_00401f20(in_ECX[0x17],uVar3);
  puVar2 = (undefined4 *)in_ECX[0x19];
  local_4._0_1_ = 1;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[8];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_006ca8e0(int param_1,int *param_2)

{
  int iVar1;
  uint in_EAX;
  undefined4 *puVar2;
  uint uVar3;
  int in_ECX;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    for (puVar2 = (undefined4 *)(**(code **)(*param_2 + 4))(); in_EAX = 0,
        puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[1]) {
      if (puVar2 == &DAT_00b3cdf8) {
        *(ushort *)(param_2 + 2) = *(short *)(in_ECX + 0x24) * 2 | *(ushort *)(param_2 + 2) & 0xfff9
        ;
        iVar1 = *(int *)(in_ECX + 0x28);
        *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) & 0xffef;
        param_2[3] = iVar1;
        uVar3 = FUN_006ca160(param_1,param_2);
        return uVar3;
      }
    }
  }
  return in_EAX & 0xffffff00;
}



void FUN_006ca950(float param_1,char param_2)

{
  int iVar1;
  float in_ECX;
  float10 fVar2;
  float local_8;
  float local_4;
  
  if (*(int *)((int)in_ECX + 0x44) == 0) {
    return;
  }
  if (*(float *)((int)in_ECX + 0x48) == -3.4028235e+38) {
    *(float *)((int)in_ECX + 0x48) = -param_1;
  }
  if (*(float *)((int)in_ECX + 0x4c) == -3.4028235e+38) {
    *(float *)((int)in_ECX + 0x4c) = param_1;
    *(float *)((int)in_ECX + 0x50) = *(float *)((int)in_ECX + 0x50) + param_1;
  }
  local_8 = 1.0;
  local_4 = 1.0;
  switch(*(int *)((int)in_ECX + 0x44)) {
  case 1:
    *(undefined4 *)((int)in_ECX + 0x4c) = *(undefined4 *)((int)in_ECX + 0x3c);
    break;
  case 2:
    if (param_1 < *(float *)((int)in_ECX + 0x50)) {
      if (param_1 < *(float *)((int)in_ECX + 0x4c)) {
        param_1 = *(float *)((int)in_ECX + 0x4c);
      }
      local_8 = (param_1 - *(float *)((int)in_ECX + 0x4c)) /
                (*(float *)((int)in_ECX + 0x50) - *(float *)((int)in_ECX + 0x4c));
      break;
    }
    goto LAB_006caa5d;
  case 3:
    if (*(float *)((int)in_ECX + 0x50) <= param_1) {
      FUN_006c9cb0(0,0);
      return;
    }
    if (param_1 < *(float *)((int)in_ECX + 0x4c)) {
      param_1 = *(float *)((int)in_ECX + 0x4c);
    }
    local_8 = (*(float *)((int)in_ECX + 0x50) - param_1) /
              (*(float *)((int)in_ECX + 0x50) - *(float *)((int)in_ECX + 0x4c));
    break;
  case 4:
    goto switchD_006ca9b5_caseD_4;
  case 5:
    if (param_1 < *(float *)((int)in_ECX + 0x50)) {
      if (param_1 < *(float *)((int)in_ECX + 0x4c)) {
        param_1 = *(float *)((int)in_ECX + 0x4c);
      }
      local_4 = (param_1 - *(float *)((int)in_ECX + 0x4c)) /
                (*(float *)((int)in_ECX + 0x50) - *(float *)((int)in_ECX + 0x4c));
      break;
    }
    if (*(float *)((int)in_ECX + 0x54) != -3.4028235e+38) {
      *(float *)((int)in_ECX + 0x48) = *(float *)((int)in_ECX + 0x54) - param_1;
      *(undefined4 *)((int)in_ECX + 0x54) = 0xff7fffff;
    }
LAB_006caa5d:
    *(undefined4 *)((int)in_ECX + 0x44) = 1;
    break;
  case 6:
    local_4 = param_1 + *(float *)((int)in_ECX + 0x48);
    fVar2 = (float10)FUN_006c6b30(in_ECX,local_4);
    local_4 = (float)fVar2 / *(float *)(*(int *)((int)in_ECX + 0x58) + 0x28);
    *(float *)(*(int *)((int)in_ECX + 0x58) + 0x48) = local_4 - param_1;
    iVar1 = *(int *)((int)in_ECX + 0x44);
    *(undefined4 *)((int)in_ECX + 0x44) = 4;
    if (iVar1 == 0) {
      local_4 = in_ECX;
      FUN_0073a5e0(&local_4);
    }
    goto switchD_006ca9b5_caseD_4;
  }
switchD_006ca9b5_default:
  if (param_2 == '\0') {
    return;
  }
  if (*(float *)((int)in_ECX + 0x54) == -3.4028235e+38) {
    iVar1 = *(int *)((int)in_ECX + 0x58);
    if (iVar1 == 0) {
      param_1 = param_1 + *(float *)((int)in_ECX + 0x48);
    }
    else {
      if (*(float *)(iVar1 + 0x48) + param_1 != *(float *)(iVar1 + 0x34)) {
        FUN_006ca950(param_1,0);
      }
      fVar2 = (float10)FUN_006c6b30(*(int *)((int)in_ECX + 0x58),
                                    param_1 + *(float *)(*(int *)((int)in_ECX + 0x58) + 0x48));
      param_1 = (float)fVar2 / *(float *)((int)in_ECX + 0x28);
    }
  }
  else {
    param_1 = *(float *)((int)in_ECX + 0x54);
  }
  fVar2 = (float10)FUN_006c5fc0(param_1,1);
  FUN_006c6dc0(*(float *)((int)in_ECX + 0x1c) * local_4,local_8,(float)fVar2);
  return;
switchD_006ca9b5_caseD_4:
  if (*(float *)((int)in_ECX + 0x50) <= param_1) {
    FUN_006c9cb0(0,1);
    return;
  }
  if (param_1 < *(float *)((int)in_ECX + 0x4c)) {
    param_1 = *(float *)((int)in_ECX + 0x4c);
  }
  local_4 = (*(float *)((int)in_ECX + 0x50) - param_1) /
            (*(float *)((int)in_ECX + 0x50) - *(float *)((int)in_ECX + 0x4c));
  goto switchD_006ca9b5_default;
}



void FUN_006cac60(void)

{
  int iVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  int iVar4;
  uint local_4;
  
  iVar4 = 0;
  if (*(int *)(in_ECX + 0x44) != 0) {
    FUN_006c9cb0(0,0);
  }
  local_4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    do {
      iVar1 = *(int *)(in_ECX + 0x14);
      puVar2 = *(undefined4 **)(iVar1 + 4 + iVar4);
      if (puVar2 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(puVar2 + 1);
        if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 *)(iVar1 + 4 + iVar4) = 0;
      }
      *(undefined4 *)(*(int *)(in_ECX + 0x14) + 8 + iVar4) = 0;
      local_4 = local_4 + 1;
      iVar4 = iVar4 + 0x10;
    } while (local_4 < *(uint *)(in_ECX + 0xc));
  }
  return;
}



void FUN_006cace0(uint param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  char *_Dst;
  LONG LVar9;
  uint uVar10;
  int in_ECX;
  int *piVar11;
  int iVar12;
  char *_Src;
  uint uVar13;
  undefined4 *puVar14;
  int *unaff_FS_OFFSET;
  undefined4 *local_30;
  undefined **local_2c;
  int local_28;
  short local_24;
  ushort local_22;
  short local_20;
  undefined2 local_1e;
  void *local_18;
  ushort local_12;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7788;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0068f970(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0xa010068) {
    uVar10 = *(uint *)(in_ECX + 0xc);
    *(undefined4 *)(in_ECX + 0x2c) = 0x7f7fffff;
    uVar13 = 0;
    *(undefined4 *)(in_ECX + 0x30) = 0xff7fffff;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(int *)(in_ECX + 0x14) + 4);
      do {
        iVar12 = *piVar11;
        if (*(float *)(iVar12 + 0x14) < *(float *)(in_ECX + 0x2c)) {
          *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(iVar12 + 0x14);
        }
        if (*(float *)(in_ECX + 0x30) < *(float *)(iVar12 + 0x18)) {
          *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(iVar12 + 0x18);
        }
        uVar13 = uVar13 + 1;
        piVar11 = piVar11 + 4;
      } while (uVar13 < uVar10);
    }
    if ((*(float *)(in_ECX + 0x2c) == 3.4028235e+38) &&
       (*(float *)(in_ECX + 0x30) == -3.4028235e+38)) {
      *(undefined4 *)(in_ECX + 0x30) = 0;
      *(undefined4 *)(in_ECX + 0x2c) = 0;
    }
    local_24 = (short)uVar10;
    local_2c = &PTR__scalar_deleting_destructor__00a38fb4;
    local_1e = 1;
    local_22 = 0;
    local_20 = 0;
    if (local_24 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_00401f00((uVar10 & 0xffff) * 4,uVar7);
    }
    iVar12 = local_28;
    local_4 = 0;
    FUN_006c7d90(*(undefined4 *)(in_ECX + 0xc),1);
    local_4 = CONCAT31(local_4._1_3_,1);
    param_1 = 0;
    if (*(int *)(in_ECX + 0xc) != 0) {
      local_30 = (undefined4 *)0x0;
      do {
        _Src = (char *)0x0;
        piVar11 = (int *)(*(int *)(in_ECX + 0x18) + (int)local_30);
        uVar2 = *(ushort *)(piVar11 + 1);
        if (uVar2 != 0xffff) {
          _Src = (char *)((uint)uVar2 + *(int *)(*piVar11 + 8));
        }
        pcVar8 = _Src;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        _Dst = (char *)FUN_00401f00(pcVar8 + (1 - (int)(_Src + 1)),uVar7);
        _strcpy_s(_Dst,(rsize_t)(pcVar8 + (1 - (int)(_Src + 1))),_Src);
        puVar6 = local_30;
        if (param_1 < local_22) {
          if (_Dst == (char *)0x0) {
            if (*(int *)(local_28 + param_1 * 4) != 0) {
              local_20 = local_20 + -1;
            }
          }
          else if (*(int *)(local_28 + param_1 * 4) == 0) {
            local_20 = local_20 + 1;
          }
        }
        else {
          local_22 = (short)param_1 + 1;
          if (_Dst != (char *)0x0) {
            local_20 = local_20 + 1;
          }
        }
        *(char **)(local_28 + param_1 * 4) = _Dst;
        iVar12 = *(int *)(in_ECX + 0x18);
        *(undefined2 *)((int)local_30 + iVar12 + 4) = 0xffff;
        *(undefined2 *)((int)local_30 + iVar12 + 6) = 0xffff;
        *(undefined2 *)((int)local_30 + iVar12 + 8) = 0xffff;
        *(undefined2 *)((int)local_30 + iVar12 + 10) = 0xffff;
        *(undefined2 *)((int)local_30 + iVar12 + 0xc) = 0xffff;
        puVar3 = *(undefined4 **)(*(int *)(in_ECX + 0x14) + 4 + (int)local_30);
        local_30 = puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar3 + 1);
        }
        local_4._0_1_ = 2;
        FUN_006c7e90(param_1,&local_30);
        local_4 = CONCAT31(local_4._1_3_,1);
        if ((puVar3 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar3 + 1), LVar9 == 0))
        {
          (**(code **)*puVar3)(1);
        }
        puVar3 = *(undefined4 **)(*(int *)(in_ECX + 0x14) + (int)puVar6);
        puVar14 = (undefined4 *)(*(int *)(in_ECX + 0x14) + (int)puVar6);
        if (puVar3 != (undefined4 *)0x0) {
          LVar9 = InterlockedDecrement(puVar3 + 1);
          if ((LVar9 == 0) && (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          *puVar14 = 0;
        }
        puVar3 = (undefined4 *)puVar14[1];
        if (puVar3 != (undefined4 *)0x0) {
          LVar9 = InterlockedDecrement(puVar3 + 1);
          if ((LVar9 == 0) && (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          puVar14[1] = 0;
        }
        local_30 = puVar6 + 4;
        puVar14[2] = 0;
        param_1 = param_1 + 1;
        *(undefined1 *)(puVar14 + 3) = 0xff;
        *(undefined1 *)((int)puVar14 + 0xd) = 0xff;
        iVar12 = local_28;
      } while (param_1 < *(uint *)(in_ECX + 0xc));
    }
    uVar7 = 0;
    if (local_12 != 0) {
      do {
        iVar4 = *(int *)((int)local_18 + uVar7 * 4);
        if (uVar7 == 0) {
          bVar5 = *(byte *)(iVar4 + 8) >> 1;
          uVar10 = bVar5 & 3;
          *(uint *)(in_ECX + 0x24) = uVar10;
          if ((uVar10 != 2) && ((bVar5 & 3) != 0)) {
            *(undefined4 *)(in_ECX + 0x24) = 0;
          }
          *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(iVar4 + 0xc);
        }
        FUN_006ca8e0(*(undefined4 *)(iVar12 + uVar7 * 4),iVar4);
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_12);
    }
    uVar10 = (uint)local_22;
    uVar7 = 0;
    if (uVar10 != 0) {
      do {
        FUN_00401f20(*(undefined4 *)(iVar12 + uVar7 * 4));
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar10);
    }
    local_4 = local_4 & 0xffffff00;
    if (local_18 != (void *)0x0) {
      _eh_vector_destructor_iterator_(local_18,4,*(int *)((int)local_18 + -4),FUN_007016a0);
      FUN_00401f20((int)local_18 + -4);
    }
    FUN_00401f20(iVar12);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006cb090(byte param_1)

{
  FUN_006ca7c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int * FUN_006cb0b0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  LONG LVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c77d4;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar9 = 0;
  local_4 = 0;
  iVar7 = FUN_00401f00(0x68,uVar6);
  local_4 = 1;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_006c7fb0(*(undefined4 *)(param_2 + 8),*(undefined2 *)(param_2 + 0x16),
                         *(undefined2 *)(param_2 + 0x16),0);
  }
  *param_1 = iVar7;
  if (iVar7 != 0) {
    InterlockedIncrement((LONG *)(iVar7 + 4));
  }
  local_4 = 0;
  bVar4 = true;
  if (*(short *)(param_2 + 0x16) != 0) {
    do {
      iVar7 = *(int *)(*(int *)(param_2 + 0x10) + uVar9 * 4);
      iVar1 = *(int *)(*(int *)(param_2 + 0x20) + uVar9 * 4);
      if ((iVar7 != 0) && (iVar1 != 0)) {
        if (bVar4) {
          bVar5 = *(byte *)(iVar1 + 8) >> 1;
          uVar6 = bVar5 & 3;
          if ((uVar6 != 2) && ((bVar5 & 3) != 0)) {
            uVar6 = 0;
          }
          if ((uVar6 == 2) || (uVar6 == 0)) {
            *(uint *)(*param_1 + 0x24) = uVar6;
          }
          bVar4 = false;
          *(undefined4 *)(*param_1 + 0x28) = *(undefined4 *)(iVar1 + 0xc);
          *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)(iVar1 + 0x14);
          *(undefined4 *)(*param_1 + 0x30) = *(undefined4 *)(iVar1 + 0x18);
        }
        FUN_006ca8e0(iVar7,iVar1);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(ushort *)(param_2 + 0x16));
  }
  puVar2 = *(undefined4 **)(param_2 + 0x2c);
  iVar7 = *param_1;
  puVar3 = *(undefined4 **)(iVar7 + 0x20);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar7 + 0x20) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  iVar7 = *param_1;
  FUN_00401f20(*(undefined4 *)(iVar7 + 0x5c));
  *(undefined4 *)(iVar7 + 0x5c) = 0;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x006cb374) */
/* WARNING: Removing unreachable block (ram,0x006cb38f) */
/* WARNING: Removing unreachable block (ram,0x006cb39d) */

undefined4 * FUN_006cb240(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  undefined4 *local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7821;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = 0;
  if (param_3 < *(undefined4 **)(param_2 + 0x210)) {
    local_4 = 1;
    if (*(uint *)(param_2 + 0xd8) < 0x5000000) {
      FUN_006d89f0(&param_3,param_2,param_3,0);
      local_4._0_1_ = 2;
      uVar3 = FUN_006cb0b0(&local_14,param_3);
      local_4._0_1_ = 3;
      FUN_0055e2a0(uVar3);
      local_4._0_1_ = 2;
      if (((local_14 != (undefined4 *)0x0) &&
          (LVar4 = InterlockedDecrement(local_14 + 1), LVar4 == 0)) &&
         (local_14 != (undefined4 *)0x0)) {
        (**(code **)*local_14)(1);
      }
      puVar1 = param_3;
      local_4 = CONCAT31(local_4._1_3_,1);
      if (((param_3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_3 + 1), LVar4 == 0)
          ) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    else {
      uVar3 = FUN_00560920(&DAT_00b3cb24,
                           *(undefined4 *)(*(int *)(param_2 + 0x208) + (int)param_3 * 4),uVar2);
      FUN_0075fa90(uVar3);
    }
    *param_1 = 0;
    *unaff_FS_OFFSET = local_c;
    return param_1;
  }
  *param_1 = 0;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_006cb3c0(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  float *in_ECX;
  float local_10;
  float local_c;
  float local_8;
  
  fVar1 = -3.4028235e+38;
  if (in_ECX[7] != -3.4028235e+38) {
    fVar1 = 1.0 / in_ECX[7];
    iVar2 = __isnan((double)fVar1);
    if ((iVar2 != 0) || (iVar2 = FUN_00983ffd((double)fVar1), iVar2 == 0)) goto LAB_006cb42b;
  }
  param_1[7] = fVar1;
LAB_006cb42b:
  if (in_ECX[4] == -3.4028235e+38) {
    param_1[4] = 0xff7fffff;
  }
  else {
    FUN_00714d80(&local_10,in_ECX + 3);
    FUN_00471430();
  }
  if (*in_ECX != -3.4028235e+38) {
    local_10 = -*in_ECX;
    local_c = -in_ECX[1];
    local_8 = -in_ECX[2];
    FUN_00471390();
    return;
  }
  *param_1 = 0xff7fffff;
  return;
}



void FUN_006cb4d0(undefined4 *param_1)

{
  float fVar1;
  float *pfVar2;
  float *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 local_34 [16];
  undefined4 local_24 [9];
  
  local_50 = 1.0;
  if (in_ECX[7] == -3.4028235e+38) {
    param_1[7] = 0xff7fffff;
  }
  else {
    fVar1 = 1.0 / in_ECX[7];
    iVar3 = __isnan((double)fVar1);
    if (iVar3 == 0) {
      iVar3 = FUN_00983ffd((double)fVar1);
      if (iVar3 != 0) {
        param_1[7] = fVar1;
      }
    }
    local_50 = (float)param_1[7];
  }
  fVar1 = in_ECX[4];
  puVar4 = &DAT_00b26dc4;
  puVar5 = local_24;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (fVar1 == -3.4028235e+38) {
    param_1[4] = 0xff7fffff;
  }
  else {
    FUN_00714d80(local_34,in_ECX + 3);
    FUN_00471430();
    FUN_0047c600();
  }
  if (*in_ECX == -3.4028235e+38) {
    *param_1 = 0xff7fffff;
    return;
  }
  local_4c = -*in_ECX;
  local_48 = -in_ECX[1];
  local_44 = -in_ECX[2];
  pfVar2 = (float *)FUN_007101f0(local_34,&local_4c);
  local_40 = local_50 * *pfVar2;
  local_3c = pfVar2[1] * local_50;
  local_38 = local_50 * pfVar2[2];
  FUN_00471390();
  return;
}



undefined4 * FUN_006cb640(undefined4 *param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  float *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float local_50;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 local_34 [16];
  undefined4 local_24 [9];
  
  *param_1 = DAT_00b24260;
  param_1[1] = DAT_00b24264;
  param_1[2] = DAT_00b24268;
  param_1[3] = DAT_00b3cba4;
  param_1[4] = DAT_00b3cba8;
  param_1[5] = DAT_00b3cbac;
  uVar2 = DAT_00b3cbb0;
  param_1[7] = 0xff7fffff;
  param_1[6] = uVar2;
  local_50 = 1.0;
  if ((in_ECX[7] == -3.4028235e+38) || (param_2[7] == -3.4028235e+38)) {
    param_1[7] = 0xff7fffff;
  }
  else {
    FUN_00471560(param_2[7] * in_ECX[7]);
    local_50 = (float)param_1[7];
  }
  fVar1 = in_ECX[4];
  puVar5 = &DAT_00b26dc4;
  puVar6 = local_24;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if ((fVar1 == -3.4028235e+38) || (param_2[4] == -3.4028235e+38)) {
    param_1[4] = 0xff7fffff;
  }
  else {
    FUN_00714cf0(local_34,param_2 + 3);
    FUN_00715340();
    FUN_00471430(local_34);
    FUN_0047c600(local_24);
  }
  if ((*in_ECX != -3.4028235e+38) && (*param_2 != -3.4028235e+38)) {
    pfVar3 = (float *)FUN_007101f0(local_34,param_2);
    local_40 = *in_ECX + local_50 * *pfVar3;
    local_3c = in_ECX[1] + pfVar3[1] * local_50;
    local_38 = in_ECX[2] + local_50 * pfVar3[2];
    FUN_00471390(&local_40);
    return param_1;
  }
  *param_1 = 0xff7fffff;
  return param_1;
}



undefined4 * FUN_006cb820(undefined4 *param_1,float *param_2)

{
  undefined4 uVar1;
  float *in_ECX;
  float local_10;
  float local_c;
  float local_8;
  
  *param_1 = DAT_00b24260;
  param_1[1] = DAT_00b24264;
  param_1[2] = DAT_00b24268;
  param_1[3] = DAT_00b3cba4;
  param_1[4] = DAT_00b3cba8;
  param_1[5] = DAT_00b3cbac;
  uVar1 = DAT_00b3cbb0;
  param_1[7] = 0xff7fffff;
  param_1[6] = uVar1;
  if ((in_ECX[7] == -3.4028235e+38) || (param_2[7] == -3.4028235e+38)) {
    param_1[7] = 0xff7fffff;
  }
  else {
    FUN_00471560(param_2[7] * in_ECX[7]);
  }
  if ((in_ECX[4] == -3.4028235e+38) || (param_2[4] == -3.4028235e+38)) {
    param_1[4] = 0xff7fffff;
  }
  else {
    FUN_00714cf0(&local_10,param_2 + 3);
    FUN_00715340();
    FUN_00471430(&local_10);
  }
  if ((*in_ECX != -3.4028235e+38) && (*param_2 != -3.4028235e+38)) {
    local_10 = *param_2 + *in_ECX;
    local_c = param_2[1] + in_ECX[1];
    local_8 = param_2[2] + in_ECX[2];
    FUN_00471390(&local_10);
    return param_1;
  }
  *param_1 = 0xff7fffff;
  return param_1;
}



void FUN_006cb990(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  FUN_00709430(param_1);
  FUN_00715420(iVar1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 7,4,&param_1,1);
  if (*(uint *)(iVar1 + 0xd8) < 0xa01006e) {
    uStack_4 = 1;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,1,&uStack_4,1);
    if ((char)param_1 == '\0') {
      *in_ECX = 0xff7fffff;
    }
    uStack_4 = 1;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,1,&uStack_4,1);
    if ((char)param_1 == '\0') {
      in_ECX[4] = 0xff7fffff;
    }
    uStack_4 = 1;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,1,&uStack_4,1);
    if ((char)param_1 == '\0') {
      in_ECX[7] = 0xff7fffff;
    }
  }
  return;
}



void FUN_006cba90(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_007094a0(param_1);
  FUN_007154b0(iVar1);
  iVar1 = *(int *)(iVar1 + 0x220);
  param_1 = 4;
  (**(code **)(iVar1 + 8))(iVar1,in_ECX + 0x1c,4,&param_1,1);
  return;
}



void FUN_006cbad0(int param_1)

{
  int iVar1;
  float *in_ECX;
  uint uVar2;
  undefined4 local_4;
  
  local_4 = FUN_0070f910("NiQuatTransform");
  iVar1 = param_1;
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_4);
  if (*in_ECX != -3.4028235e+38) {
    param_1 = FUN_00707280("m_kTranslate");
    uVar2 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar2) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
    }
    FUN_0042bb90(uVar2,&param_1);
  }
  if (in_ECX[4] != -3.4028235e+38) {
    param_1 = FUN_007153c0("m_kRotate");
    uVar2 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar2) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
    }
    FUN_0042bb90(uVar2,&param_1);
  }
  if (in_ECX[7] != -3.4028235e+38) {
    param_1 = FUN_0070fb90("m_fScale",in_ECX[7]);
    uVar2 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar2) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
    }
    FUN_0042bb90(uVar2,&param_1);
  }
  return;
}



undefined4 FUN_006cbc10(void)

{
  float *in_ECX;
  
  if (((in_ECX[7] == -3.4028235e+38) && (in_ECX[4] == -3.4028235e+38)) &&
     (*in_ECX == -3.4028235e+38)) {
    return 1;
  }
  return 0;
}



void FUN_006cbc60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_006cce40(param_1,param_2,param_3);
  *in_ECX = &PTR_LAB_00a79e54;
  return;
}



void thunk_FUN_006ccf50(void)

{
  FUN_006ccf50();
  return;
}



void FUN_006cbcb0(void)

{
  undefined4 *in_ECX;
  
  FUN_006cc4e0();
  *in_ECX = &PTR_LAB_00a79e54;
  return;
}



undefined4 * FUN_006cbce0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x30,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006cc4e0();
    *puVar2 = &PTR_LAB_00a79e54;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_006cbd40(int param_1)

{
  FUN_006cd720(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0xa01006e) {
    FUN_006cb990(param_1);
  }
  return;
}



undefined4 FUN_006cbdf0(float param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  
  if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
    param_1 = *(float *)(in_ECX + 0x20);
  }
  if (param_1 == -3.4028235e+38) {
    *param_3 = 0xff7fffff;
    param_3[4] = 0xff7fffff;
    param_3[7] = 0xff7fffff;
    return 0;
  }
  puStack_18 = param_3;
  uStack_1c = param_2;
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x18) + 0x4c))(param_1);
  if (cVar1 != '\0') {
    if ((float)param_3[4] != -3.4028235e+38) {
      uStack_1c = param_3[3];
      puStack_18 = (undefined4 *)param_3[4];
      FUN_00715340();
      FUN_00471430(&uStack_1c);
    }
    return 1;
  }
  *param_3 = 0xff7fffff;
  param_3[4] = 0xff7fffff;
  param_3[7] = 0xff7fffff;
  return 0;
}



uint FUN_006cbee0(float param_1,undefined4 param_2,float *param_3)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  int in_ECX;
  byte bVar11;
  undefined4 unaff_EBP;
  ushort uVar12;
  float local_8c;
  float local_84;
  float local_80;
  float local_7c;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  local_80 = 1.0;
  local_84 = 1.0;
  FUN_00714c40(0,0,0,0);
  bVar11 = 0;
  local_7c = 0.0;
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  bVar3 = true;
  if (*(char *)(in_ECX + 0xd) != '\0') {
    do {
      piVar1 = (int *)(*(int *)(in_ECX + 0x14) + (uint)bVar11 * 0x18);
      if (((int *)*piVar1 != (int *)0x0) && (0.0 < (float)piVar1[2])) {
        local_8c = param_1;
        if ((DAT_00b3cbd0 == '\0') || (*(char *)(in_ECX + 0xe) != '\x01')) {
          if ((float)piVar1[2] != 0.0) {
            if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
              local_8c = (float)piVar1[5];
            }
            goto LAB_006cbfc2;
          }
        }
        else {
          if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
            local_8c = *(float *)(in_ECX + 0x20);
          }
LAB_006cbfc2:
          if (local_8c != -3.4028235e+38) {
            local_30 = -3.4028235e+38;
            local_4c = DAT_00b24260;
            local_44 = DAT_00b24268;
            local_3c = DAT_00b3cba8;
            local_48 = DAT_00b24264;
            local_34 = DAT_00b3cbb0;
            local_40 = DAT_00b3cba4;
            local_38 = DAT_00b3cbac;
            cVar7 = (**(code **)(*(int *)*piVar1 + 0x4c))(local_8c,param_2,&local_4c,unaff_EBP);
            if (cVar7 != '\0') {
              if (local_4c == -3.4028235e+38) {
                local_80 = local_80 - (float)piVar1[2];
              }
              else {
                fStack_24 = (float)piVar1[2];
                bVar4 = true;
                fStack_2c = fStack_24 * local_4c;
                fStack_28 = local_48 * fStack_24;
                fStack_24 = local_44 * fStack_24;
              }
              if (local_3c != -3.4028235e+38) {
                if (bVar3) {
                  bVar3 = false;
                }
                else if (local_34 * fStack_50 +
                         local_38 * fStack_54 + local_40 * local_5c + local_3c * fStack_58 < 0.0) {
                  FUN_00714cc0(auStack_10);
                }
                pfVar8 = (float *)FUN_0072f930(auStack_20,piVar1[2]);
                local_5c = *pfVar8 + local_5c;
                fStack_58 = fStack_58 + pfVar8[1];
                bVar5 = true;
                fStack_54 = fStack_54 + pfVar8[2];
                fStack_50 = fStack_50 + pfVar8[3];
              }
              if (local_30 == -3.4028235e+38) {
                local_84 = local_84 - (float)piVar1[2];
              }
              else {
                bVar6 = true;
                local_7c = local_30 * (float)piVar1[2] + local_7c;
              }
              goto LAB_006cc22a;
            }
          }
        }
        local_80 = local_80 - (float)piVar1[2];
        local_84 = local_84 - (float)piVar1[2];
      }
LAB_006cc22a:
      bVar11 = bVar11 + 1;
    } while (bVar11 < *(byte *)(in_ECX + 0xd));
  }
  *param_3 = -3.4028235e+38;
  param_3[4] = -3.4028235e+38;
  param_3[7] = -3.4028235e+38;
  if (((bVar4) || (bVar5)) || (bVar6)) {
    if (local_80 == 0.0) {
      bVar4 = false;
    }
    if (local_84 < 0.0001) {
      bVar6 = false;
    }
    if (bVar4) {
      FUN_00471390();
    }
    if (bVar5) {
      FUN_00715340();
      FUN_00471430();
    }
    if (bVar6) {
      local_7c = local_7c / local_84;
      iVar9 = __isnan((double)local_7c);
      if ((iVar9 == 0) && (iVar9 = FUN_00983ffd((double)local_7c), iVar9 != 0)) {
        param_3[7] = local_7c;
      }
    }
  }
  fVar2 = param_3[7];
  uVar12 = (ushort)(-3.4028235e+38 < fVar2) << 8 | (ushort)NAN(fVar2) << 10 |
           (ushort)(fVar2 == -3.4028235e+38) << 0xe;
  if (fVar2 == -3.4028235e+38) {
    fVar2 = param_3[4];
    uVar12 = (ushort)(-3.4028235e+38 < fVar2) << 8 | (ushort)NAN(fVar2) << 10 |
             (ushort)(fVar2 == -3.4028235e+38) << 0xe;
    if (fVar2 == -3.4028235e+38) {
      fVar2 = *param_3;
      uVar10 = (uint)(ushort)((ushort)(fVar2 < -3.4028235e+38) << 8 | (ushort)NAN(fVar2) << 10 |
                             (ushort)(fVar2 == -3.4028235e+38) << 0xe);
      if (fVar2 == -3.4028235e+38) {
        return uVar10;
      }
      goto LAB_006cc391;
    }
  }
  uVar10 = (uint)uVar12;
LAB_006cc391:
  return CONCAT31((int3)(uVar10 >> 8),1);
}



uint FUN_006cc3a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  uVar1 = in_EAX & 0xffffff00;
  if (*(char *)(in_ECX + 0xe) == '\x01') {
    uVar1 = FUN_006cbdf0(param_1,param_2,param_3);
    *(undefined4 *)(in_ECX + 8) = param_1;
    return uVar1;
  }
  if (*(char *)(in_ECX + 0xe) != '\0') {
    FUN_006cd0f0();
    uVar1 = FUN_006cbee0(param_1,param_2,param_3);
  }
  *(undefined4 *)(in_ECX + 8) = param_1;
  return uVar1;
}



undefined4 * FUN_006cc400(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x30,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006cc4e0();
    *puVar2 = &PTR_LAB_00a79e54;
  }
  local_4 = 0xffffffff;
  FUN_006cd3d0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void thunk_FUN_006cd3d0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int in_ECX;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  byte bStack_11;
  int iStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009afaab;
  iStack_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&iStack_c;
  thunk_FUN_00700770(param_1,param_2);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(in_ECX + 0xc);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(in_ECX + 0xd);
  uVar8 = (uint)*(byte *)(in_ECX + 0xd);
  puVar5 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar8 * 0x18) | uVar8 * 0x18 + 4,uVar4);
  puVar10 = (uint *)0x0;
  uStack_4 = 0;
  if (puVar5 != (uint *)0x0) {
    puVar10 = puVar5 + 1;
    *puVar5 = uVar8;
    _eh_vector_constructor_iterator_(puVar10,0x18,uVar8,FUN_006ccde0,FUN_007016a0);
  }
  *(uint **)(param_1 + 0x14) = puVar10;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  uStack_4 = 0xffffffff;
  if ((*(byte *)(in_ECX + 0xc) & 1) == 0) {
    bStack_11 = 0;
    if (*(char *)(in_ECX + 0xd) != '\0') {
      do {
        iVar3 = (uint)bStack_11 * 0x18;
        piVar1 = *(int **)(*(int *)(in_ECX + 0x14) + iVar3);
        iVar11 = *(int *)(in_ECX + 0x14) + iVar3;
        piVar9 = (int *)(*(int *)(param_1 + 0x14) + iVar3);
        if (piVar1 != (int *)0x0) {
          puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x18))(param_2);
          puVar2 = (undefined4 *)*piVar9;
          if (puVar2 != puVar6) {
            if (((puVar2 != (undefined4 *)0x0) &&
                (LVar7 = InterlockedDecrement(puVar2 + 1), LVar7 == 0)) &&
               (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            *piVar9 = (int)puVar6;
            if (puVar6 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar6 + 1);
            }
          }
        }
        piVar9[1] = *(int *)(iVar11 + 4);
        bStack_11 = bStack_11 + 1;
        piVar9[2] = *(int *)(iVar11 + 8);
        *(undefined1 *)(piVar9 + 3) = *(undefined1 *)(iVar11 + 0xc);
        piVar9[4] = *(int *)(iVar11 + 0x10);
        piVar9[5] = *(int *)(iVar11 + 0x14);
      } while (bStack_11 < *(byte *)(in_ECX + 0xd));
    }
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(in_ECX + 0xe);
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(in_ECX + 0xf);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(in_ECX + 0x10);
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(in_ECX + 0x11);
  }
  *unaff_FS_OFFSET = iStack_c;
  return;
}



void FUN_006cc490(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006cddb0(param_1);
  param_1 = FUN_0070f910(DAT_00b3cbf8);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006cc4e0(void)

{
  undefined4 *in_ECX;
  
  FUN_006eba00();
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 3) = 0;
  in_ECX[8] = 0xff7fffff;
  *(undefined1 *)((int)in_ECX + 0xd) = 0;
  *(undefined1 *)((int)in_ECX + 0xe) = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *in_ECX = &PTR_FUN_00a79f0c;
  *(undefined1 *)((int)in_ECX + 0xf) = 0xff;
  *(undefined1 *)(in_ECX + 4) = 0x80;
  *(undefined1 *)((int)in_ECX + 0x11) = 0x80;
  in_ECX[9] = 0xff7fffff;
  in_ECX[10] = 0xff7fffff;
  in_ECX[0xb] = 0xff7fffff;
  return;
}



byte FUN_006cc550(void)

{
  int in_ECX;
  float *pfVar1;
  byte bVar2;
  byte local_5;
  float local_4;
  
  if (*(char *)(in_ECX + 0xe) == '\x01') {
    return *(byte *)(in_ECX + 0xf);
  }
  local_4 = 0.0;
  bVar2 = 0;
  local_5 = 0xff;
  if (*(byte *)(in_ECX + 0xd) != 0) {
    pfVar1 = (float *)(*(int *)(in_ECX + 0x14) + 8);
    do {
      if (local_4 < *pfVar1) {
        local_4 = *pfVar1;
        local_5 = bVar2;
      }
      bVar2 = bVar2 + 1;
      pfVar1 = pfVar1 + 6;
    } while (bVar2 < *(byte *)(in_ECX + 0xd));
    if (local_5 != 0xff) {
      return local_5;
    }
  }
  return 0xff;
}



byte FUN_006cc5c0(undefined4 *param_1,int param_2,char param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  LONG LVar4;
  int *in_ECX;
  byte bVar5;
  uint uVar6;
  
  uVar6 = 0;
  bVar5 = 0;
  if (*(byte *)((int)in_ECX + 0xd) != 0) {
    do {
      bVar5 = (byte)uVar6;
      if (*(int *)(in_ECX[5] + uVar6 * 0x18) == 0) break;
      bVar5 = bVar5 + 1;
      uVar6 = (uint)bVar5;
    } while (bVar5 < *(byte *)((int)in_ECX + 0xd));
  }
  if ((bVar5 == *(byte *)((int)in_ECX + 0xd)) &&
     (cVar3 = (**(code **)(*in_ECX + 0xa4))(), cVar3 == '\0')) {
    return 0xff;
  }
  piVar1 = (int *)(in_ECX[5] + (uint)bVar5 * 0x18);
  puVar2 = (undefined4 *)*piVar1;
  if (puVar2 != param_1) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar2 + 1), LVar4 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *piVar1 = (int)param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  piVar1[1] = param_2;
  *(char *)(piVar1 + 3) = param_3;
  piVar1[4] = param_4;
  if (*(char *)((int)in_ECX + 0x11) < param_3) {
    cVar3 = (char)in_ECX[4];
    if (cVar3 < param_3) {
      *(char *)((int)in_ECX + 0x11) = cVar3;
      *(char *)(in_ECX + 4) = param_3;
    }
    else if (param_3 != cVar3) {
      *(char *)((int)in_ECX + 0x11) = param_3;
    }
  }
  *(char *)((int)in_ECX + 0xe) = *(char *)((int)in_ECX + 0xe) + '\x01';
  if (*(char *)((int)in_ECX + 0xe) == '\x01') {
    *(byte *)((int)in_ECX + 0xf) = bVar5;
    in_ECX[6] = (int)param_1;
  }
  else {
    *(undefined1 *)((int)in_ECX + 0xf) = 0xff;
    in_ECX[8] = -0x800001;
    in_ECX[6] = 0;
  }
  in_ECX[9] = -0x800001;
  in_ECX[10] = -0x800001;
  *(byte *)(in_ECX + 3) = *(byte *)(in_ECX + 3) | 4;
  in_ECX[0xb] = -0x800001;
  return bVar5;
}



int * FUN_006cc6e0(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  LONG LVar8;
  int in_ECX;
  byte bVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b21d9;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = (int *)(*(int *)(in_ECX + 0x14) + (uint)param_2 * 0x18);
  iVar5 = *piVar1;
  *param_1 = iVar5;
  if (iVar5 != 0) {
    InterlockedIncrement((LONG *)(iVar5 + 4));
  }
  puVar6 = (undefined4 *)*piVar1;
  local_4 = 0;
  iVar5 = piVar1[3];
  if (puVar6 != (undefined4 *)0x0) {
    LVar8 = InterlockedDecrement(puVar6 + 1);
    if ((LVar8 == 0) && (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1,uVar7);
    }
    *piVar1 = 0;
  }
  *(undefined1 *)(piVar1 + 3) = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[4] = 0;
  piVar1[5] = -0x800001;
  if (((char)iVar5 == *(char *)(in_ECX + 0x10)) || ((char)iVar5 == *(char *)(in_ECX + 0x11))) {
    bVar9 = 0;
    *(undefined1 *)(in_ECX + 0x11) = 0x80;
    *(undefined1 *)(in_ECX + 0x10) = 0x80;
    if (*(char *)(in_ECX + 0xd) != '\0') {
      do {
        iVar5 = *(int *)(in_ECX + 0x14) + (uint)bVar9 * 0x18;
        if ((*(int *)(*(int *)(in_ECX + 0x14) + (uint)bVar9 * 0x18) != 0) &&
           (cVar3 = *(char *)(iVar5 + 0xc), *(char *)(in_ECX + 0x11) < cVar3)) {
          cVar4 = *(char *)(in_ECX + 0x10);
          if (cVar4 < cVar3) {
            *(char *)(in_ECX + 0x11) = cVar4;
            *(undefined1 *)(in_ECX + 0x10) = *(undefined1 *)(iVar5 + 0xc);
          }
          else if (cVar3 < cVar4) {
            *(char *)(in_ECX + 0x11) = cVar3;
          }
        }
        bVar9 = bVar9 + 1;
      } while (bVar9 < *(byte *)(in_ECX + 0xd));
    }
  }
  *(char *)(in_ECX + 0xe) = *(char *)(in_ECX + 0xe) + -1;
  if (*(char *)(in_ECX + 0xe) == '\x01') {
    if (*(char *)(in_ECX + 0xd) == '\x02') {
      *(bool *)(in_ECX + 0xf) = param_2 == 0;
    }
    else {
      bVar9 = 0;
      if (*(char *)(in_ECX + 0xd) != '\0') {
        do {
          if (*(int *)(*(int *)(in_ECX + 0x14) + (uint)bVar9 * 0x18) != 0) {
            *(byte *)(in_ECX + 0xf) = bVar9;
          }
          bVar9 = bVar9 + 1;
        } while (bVar9 < *(byte *)(in_ECX + 0xd));
      }
    }
    *(undefined4 *)(in_ECX + 0x18) =
         *(undefined4 *)(*(int *)(in_ECX + 0x14) + (uint)*(byte *)(in_ECX + 0xf) * 0x18);
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x14) + (uint)*(byte *)(in_ECX + 0xf) * 0x18 + 0x14);
  }
  else {
    if (*(char *)(in_ECX + 0xe) != '\0') goto LAB_006cc845;
    uVar2 = 0xff7fffff;
    *(undefined1 *)(in_ECX + 0xf) = 0xff;
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  *(undefined4 *)(in_ECX + 0x20) = uVar2;
LAB_006cc845:
  *(undefined4 *)(in_ECX + 0x24) = 0xff7fffff;
  *(undefined4 *)(in_ECX + 0x28) = 0xff7fffff;
  *(byte *)(in_ECX + 0xc) = *(byte *)(in_ECX + 0xc) | 4;
  *(undefined4 *)(in_ECX + 0x2c) = 0xff7fffff;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_006cc890(int *param_1)

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
  in_ECX[2] = param_1[2];
  *(char *)(in_ECX + 3) = (char)param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  return;
}



void FUN_006cc900(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = 0;
  uVar8 = 0;
  if (*(byte *)(in_ECX + 0xd) != 0) {
    iVar3 = *(int *)(in_ECX + 0x14);
    iVar5 = 0;
    do {
      iVar6 = iVar5;
      if ((*(int *)(iVar3 + uVar8 * 0x18) != 0) && (iVar6 = iVar3 + uVar8 * 0x18, iVar5 != 0)) {
        iVar9 = iVar3 + uVar8 * 0x18;
        iVar6 = iVar5;
        break;
      }
      bVar7 = (char)uVar8 + 1;
      uVar8 = (uint)bVar7;
      iVar5 = iVar6;
    } while (bVar7 < *(byte *)(in_ECX + 0xd));
    if (iVar6 == 0) {
      return;
    }
    if (iVar9 == 0) {
      return;
    }
    fVar1 = *(float *)(iVar6 + 4) * *(float *)(iVar6 + 0x10);
    fVar2 = *(float *)(iVar9 + 4) * *(float *)(iVar9 + 0x10);
    if ((fVar1 == 0.0) && (fVar2 == 0.0)) {
      *(undefined4 *)(iVar6 + 8) = 0;
      *(undefined4 *)(iVar9 + 8) = 0;
      return;
    }
    if (*(char *)(iVar9 + 0xc) < *(char *)(iVar6 + 0xc)) {
      if (*(float *)(iVar6 + 0x10) == 1.0) {
        *(undefined4 *)(iVar6 + 8) = 0x3f800000;
        *(undefined4 *)(iVar9 + 8) = 0;
        return;
      }
      fVar1 = *(float *)(iVar6 + 0x10) * fVar1;
      fVar2 = (1.0 - *(float *)(iVar6 + 0x10)) * fVar2;
      fVar4 = 1.0 / (fVar2 + fVar1);
      *(float *)(iVar6 + 8) = fVar4 * fVar1;
      fVar4 = fVar4 * fVar2;
    }
    else if (*(char *)(iVar6 + 0xc) < *(char *)(iVar9 + 0xc)) {
      if (*(float *)(iVar9 + 0x10) == 1.0) goto LAB_006cca0c;
      fVar1 = (1.0 - *(float *)(iVar9 + 0x10)) * fVar1;
      fVar4 = 1.0 / (fVar2 * *(float *)(iVar9 + 0x10) + fVar1);
      *(float *)(iVar6 + 8) = fVar4 * fVar1;
      fVar4 = *(float *)(iVar9 + 0x10) * fVar2 * fVar4;
    }
    else {
      fVar4 = 1.0 / (fVar2 + fVar1);
      *(float *)(iVar6 + 8) = fVar4 * fVar1;
      fVar4 = fVar4 * fVar2;
    }
    *(float *)(iVar9 + 8) = fVar4;
    if ((*(byte *)(in_ECX + 0xc) & 2) != 0) {
      if (*(float *)(iVar9 + 8) < *(float *)(iVar6 + 8) !=
          (*(float *)(iVar9 + 8) == *(float *)(iVar6 + 8))) {
        *(undefined4 *)(iVar6 + 8) = 0x3f800000;
        *(undefined4 *)(iVar9 + 8) = 0;
        return;
      }
LAB_006cca0c:
      *(undefined4 *)(iVar6 + 8) = 0;
      *(undefined4 *)(iVar9 + 8) = 0x3f800000;
      return;
    }
    if (0.0 < *(float *)(in_ECX + 0x1c)) {
      fVar1 = *(float *)(iVar6 + 8);
      fVar2 = *(float *)(in_ECX + 0x1c);
      if (fVar1 < fVar2) {
        *(undefined4 *)(iVar6 + 8) = 0;
      }
      if (*(float *)(iVar9 + 8) < *(float *)(in_ECX + 0x1c)) {
        *(undefined4 *)(iVar9 + 8) = 0;
        *(undefined4 *)(iVar9 + 8) = 0x3f800000;
        return;
      }
      if (fVar1 < fVar2) {
        *(undefined4 *)(iVar9 + 8) = 0x3f800000;
        return;
      }
    }
  }
  return;
}



void FUN_006ccb00(void)

{
  int *piVar1;
  int in_ECX;
  byte bVar2;
  
  if (*(char *)(in_ECX + 0xe) != '\x01') {
    bVar2 = 0;
    if (*(char *)(in_ECX + 0xd) != '\0') {
      do {
        piVar1 = *(int **)(*(int *)(in_ECX + 0x14) + (uint)bVar2 * 0x18);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x7c))();
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 < *(byte *)(in_ECX + 0xd));
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006ccb12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x18) + 0x7c))();
  return;
}



void FUN_006ccb50(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int in_ECX;
  byte bVar2;
  
  if (*(char *)(in_ECX + 0xe) == '\x01') {
    (**(code **)(**(int **)(in_ECX + 0x18) + 0x84))(param_1,param_2);
    return;
  }
  bVar2 = 0;
  if (*(char *)(in_ECX + 0xd) != '\0') {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x14) + (uint)bVar2 * 0x18);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x84))(param_1,param_2);
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < *(byte *)(in_ECX + 0xd));
  }
  return;
}



void FUN_006ccbc0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int in_ECX;
  byte bVar5;
  
  iVar2 = param_1;
  FUN_00700750(param_1);
  FUN_0055e000(in_ECX,&param_1);
  iVar3 = param_1;
  bVar5 = 0;
  if (*(char *)(in_ECX + 0xd) != '\0') {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x14) + (uint)bVar5 * 0x18);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x38))(iVar2);
      }
      bVar5 = bVar5 + 1;
    } while (bVar5 < *(byte *)(in_ECX + 0xd));
  }
  if (*(int *)(in_ECX + 0x18) != 0) {
    cVar4 = FUN_0055e000(*(int *)(in_ECX + 0x18),&param_1);
    if (cVar4 != '\0') {
      *(int *)(iVar3 + 0x18) = param_1;
      return;
    }
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  }
  return;
}



uint FUN_006ccc50(uint *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined2 uVar4;
  int *in_ECX;
  
  uVar3 = *param_1;
  if ((int *)*in_ECX == (int *)0x0) {
    if (uVar3 != 0) goto LAB_006ccc64;
    uVar3 = 0;
  }
  else if ((uVar3 == 0) ||
          (uVar3 = (**(code **)(*(int *)*in_ECX + 0x2c))(uVar3), (char)uVar3 == '\0'))
  goto LAB_006ccc64;
  fVar1 = (float)in_ECX[1];
  fVar2 = (float)param_1[1];
  uVar4 = (undefined2)(uVar3 >> 0x10);
  uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                         (ushort)(fVar2 == fVar1) << 0xe);
  if (fVar2 == fVar1) {
    fVar1 = (float)in_ECX[2];
    fVar2 = (float)param_1[2];
    uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                           (ushort)(fVar2 == fVar1) << 0xe);
    if ((fVar2 == fVar1) && ((char)in_ECX[3] == (char)param_1[3])) {
      fVar1 = (float)in_ECX[4];
      fVar2 = (float)param_1[4];
      uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 == fVar1) {
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
    }
  }
LAB_006ccc64:
  return uVar3 & 0xffffff00;
}



undefined1 FUN_006cccc0(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  byte bVar3;
  
  cVar2 = thunk_FUN_00700650(param_1);
  if (cVar2 != '\0') {
    if (((*(byte *)(in_ECX + 0xc) & 1) == 0) && (bVar3 = 0, *(char *)(in_ECX + 0xd) != '\0')) {
      do {
        piVar1 = *(int **)(*(int *)(in_ECX + 0x14) + (uint)bVar3 * 0x18);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x24))(param_1);
        }
        bVar3 = bVar3 + 1;
      } while (bVar3 < *(byte *)(in_ECX + 0xd));
    }
    return 1;
  }
  return 0;
}



uint FUN_006ccd10(int param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int in_ECX;
  byte bVar5;
  uint uVar6;
  
  uVar4 = thunk_FUN_00700670(param_1);
  if ((char)uVar4 != '\0') {
    cVar3 = *(char *)(in_ECX + 0xd);
    uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar3);
    if (cVar3 == *(char *)(param_1 + 0xd)) {
      uVar6 = 0;
      if (cVar3 != '\0') {
        do {
          uVar4 = FUN_006ccc50(*(int *)(param_1 + 0x14) + uVar6 * 0x18);
          if ((char)uVar4 == '\0') goto LAB_006ccdd6;
          bVar5 = (char)uVar6 + 1;
          uVar6 = (uint)bVar5;
        } while (bVar5 < *(byte *)(in_ECX + 0xd));
      }
      if (*(char *)(in_ECX + 0xc) == *(char *)(param_1 + 0xc)) {
        fVar1 = *(float *)(in_ECX + 0x1c);
        fVar2 = *(float *)(param_1 + 0x1c);
        uVar4 = CONCAT22((short)(uVar4 >> 0x10),
                         (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                         (ushort)(fVar2 == fVar1) << 0xe);
        if (((((fVar2 == fVar1) &&
              (uVar4 = CONCAT31((int3)(uVar4 >> 8),*(char *)(in_ECX + 0xe)),
              *(char *)(in_ECX + 0xe) == *(char *)(param_1 + 0xe))) &&
             (*(char *)(in_ECX + 0xf) == *(char *)(param_1 + 0xf))) &&
            ((*(int *)(in_ECX + 0x18) == 0 ||
             (uVar4 = (**(code **)(**(int **)(in_ECX + 0x18) + 0x2c))
                                (*(undefined4 *)(param_1 + 0x18)), (char)uVar4 != '\0')))) &&
           (uVar4 = *(uint *)(in_ECX + 0x18), uVar4 == *(uint *)(param_1 + 0x18))) {
          fVar1 = *(float *)(in_ECX + 0x20);
          fVar2 = *(float *)(param_1 + 0x20);
          uVar4 = CONCAT22((short)(uVar4 >> 0x10),
                           (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                           (ushort)(fVar2 == fVar1) << 0xe);
          if (((fVar2 == fVar1) && (*(char *)(in_ECX + 0x10) == *(char *)(param_1 + 0x10))) &&
             (*(char *)(in_ECX + 0x11) == *(char *)(param_1 + 0x11))) {
            return CONCAT31((int3)(uVar4 >> 8),1);
          }
        }
      }
LAB_006ccdd6:
      return uVar4 & 0xffffff00;
    }
  }
  return uVar4 & 0xffffff00;
}



void FUN_006ccde0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_c [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  *(undefined1 *)(in_ECX + 3) = 0;
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0xff7fffff;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_006cce40(char param_1,undefined4 param_2,byte param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *in_ECX;
  uint *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7853;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006eba00(uVar1);
  in_ECX[7] = param_2;
  puVar3 = (uint *)0x0;
  in_ECX[8] = 0xff7fffff;
  *(undefined1 *)(in_ECX + 3) = 0;
  *(undefined1 *)(in_ECX + 4) = 0x80;
  *(undefined1 *)((int)in_ECX + 0x11) = 0x80;
  *in_ECX = &PTR_FUN_00a79f0c;
  *(byte *)((int)in_ECX + 0xd) = param_3;
  *(undefined1 *)((int)in_ECX + 0xe) = 0;
  *(undefined1 *)((int)in_ECX + 0xf) = 0xff;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[9] = 0xff7fffff;
  local_4 = 0;
  in_ECX[10] = 0xff7fffff;
  *(bool *)(in_ECX + 3) = param_1 != '\0';
  in_ECX[0xb] = 0xff7fffff;
  if (param_3 != 0) {
    uVar1 = (uint)param_3;
    puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar1 * 0x18) | uVar1 * 0x18 + 4);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (puVar2 != (uint *)0x0) {
      puVar3 = puVar2 + 1;
      *puVar2 = uVar1;
      _eh_vector_constructor_iterator_(puVar3,0x18,uVar1,FUN_006ccde0,FUN_007016a0);
    }
    in_ECX[5] = puVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006ccf50(void)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7878;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a79f0c;
  pvVar1 = (void *)in_ECX[5];
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x18,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_006eba30(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 * FUN_006ccfd0(void)

{
  void *pvVar1;
  byte bVar2;
  uint *puVar3;
  int in_ECX;
  byte bVar4;
  uint *puVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStackY_100 [196];
  undefined4 uStackY_3c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b242a0 == '\0') {
    *unaff_FS_OFFSET = local_c;
    return auStackY_100;
  }
  bVar2 = *(char *)(in_ECX + 0xd) + DAT_00b242a0;
  puVar3 = (uint *)FUN_00401f00();
  local_4 = 0;
  if (puVar3 == (uint *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = puVar3 + 1;
    *puVar3 = (uint)bVar2;
    uStackY_3c = 0x6cd072;
    _eh_vector_constructor_iterator_(puVar5,0x18,(uint)bVar2,FUN_006ccde0,FUN_007016a0);
  }
  bVar4 = 0;
  local_4 = 0xffffffff;
  if (*(char *)(in_ECX + 0xd) != '\0') {
    do {
      FUN_006cc890();
      bVar4 = bVar4 + 1;
    } while (bVar4 < *(byte *)(in_ECX + 0xd));
  }
  pvVar1 = *(void **)(in_ECX + 0x14);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x18,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20();
  }
  *(byte *)(in_ECX + 0xd) = bVar2;
  *(uint **)(in_ECX + 0x14) = puVar5;
  *unaff_FS_OFFSET = local_c;
  return (undefined1 *)0x1;
}



void FUN_006cd0f0(void)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  uint uVar5;
  byte bVar6;
  int iVar7;
  float local_4;
  
  if ((*(byte *)(in_ECX + 0xc) & 4) == 0) {
    return;
  }
  *(byte *)(in_ECX + 0xc) = *(byte *)(in_ECX + 0xc) & 0xfb;
  if (*(char *)(in_ECX + 0xe) == '\x01') {
    *(undefined4 *)(*(int *)(in_ECX + 0x14) + 8 + (uint)*(byte *)(in_ECX + 0xf) * 0x18) = 0x3f800000
    ;
    return;
  }
  if (*(char *)(in_ECX + 0xe) == '\x02') {
    FUN_006cc900();
    return;
  }
  iVar7 = 0;
  if (*(float *)(in_ECX + 0x24) == -3.4028235e+38) {
    uVar5 = 0;
    *(undefined4 *)(in_ECX + 0x24) = 0;
    *(undefined4 *)(in_ECX + 0x28) = 0;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
    if (*(char *)(in_ECX + 0xd) != '\0') {
      do {
        iVar1 = *(int *)(in_ECX + 0x14) + uVar5 * 0x18;
        if (*(int *)(*(int *)(in_ECX + 0x14) + uVar5 * 0x18) != 0) {
          fVar3 = *(float *)(iVar1 + 4) * *(float *)(iVar1 + 0x10);
          if (*(char *)(iVar1 + 0xc) == *(char *)(in_ECX + 0x10)) {
            *(float *)(in_ECX + 0x24) = *(float *)(in_ECX + 0x24) + fVar3;
            if (*(float *)(in_ECX + 0x2c) < *(float *)(iVar1 + 0x10)) {
              *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(iVar1 + 0x10);
            }
            iVar7 = iVar7 + 1;
          }
          else if (*(char *)(iVar1 + 0xc) == *(char *)(in_ECX + 0x11)) {
            *(float *)(in_ECX + 0x28) = *(float *)(in_ECX + 0x28) + fVar3;
          }
        }
        bVar6 = (char)uVar5 + 1;
        uVar5 = (uint)bVar6;
      } while (bVar6 < *(byte *)(in_ECX + 0xd));
      if ((1 < iVar7) && (*(float *)(in_ECX + 0x24) != 0.0)) {
        *(undefined4 *)(in_ECX + 0x28) = 0;
      }
    }
  }
  fVar4 = 1.0 - *(float *)(in_ECX + 0x2c);
  fVar3 = *(float *)(in_ECX + 0x24) * *(float *)(in_ECX + 0x2c) + fVar4 * *(float *)(in_ECX + 0x28);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 1.0 / fVar3;
  }
  bVar6 = 0;
  if (*(char *)(in_ECX + 0xd) != '\0') {
    do {
      iVar7 = *(int *)(in_ECX + 0x14) + (uint)bVar6 * 0x18;
      if (*(int *)(*(int *)(in_ECX + 0x14) + (uint)bVar6 * 0x18) != 0) {
        if (*(char *)(iVar7 + 0xc) == *(char *)(in_ECX + 0x10)) {
          *(float *)(iVar7 + 8) =
               *(float *)(iVar7 + 4) * *(float *)(in_ECX + 0x2c) * *(float *)(iVar7 + 0x10) * fVar3;
        }
        else if ((*(char *)(iVar7 + 0xc) == *(char *)(in_ECX + 0x11)) &&
                (*(float *)(in_ECX + 0x28) != 0.0)) {
          *(float *)(iVar7 + 8) = *(float *)(iVar7 + 4) * fVar4 * *(float *)(iVar7 + 0x10) * fVar3;
        }
        else {
          *(undefined4 *)(iVar7 + 8) = 0;
        }
      }
      bVar6 = bVar6 + 1;
    } while (bVar6 < *(byte *)(in_ECX + 0xd));
  }
  if (*(float *)(in_ECX + 0x1c) <= 0.0) goto LAB_006cd33e;
  bVar6 = 0;
  local_4 = 0.0;
  if (*(char *)(in_ECX + 0xd) == '\0') {
LAB_006cd2ff:
    local_4 = 0.0;
  }
  else {
    do {
      iVar7 = *(int *)(in_ECX + 0x14) + (uint)bVar6 * 0x18;
      if ((*(int *)(*(int *)(in_ECX + 0x14) + (uint)bVar6 * 0x18) != 0) &&
         (*(float *)(iVar7 + 8) != 0.0)) {
        if (*(float *)(iVar7 + 8) < *(float *)(in_ECX + 0x1c)) {
          *(undefined4 *)(iVar7 + 8) = 0;
        }
        local_4 = *(float *)(iVar7 + 8) + local_4;
      }
      bVar6 = bVar6 + 1;
    } while (bVar6 < *(byte *)(in_ECX + 0xd));
    if (local_4 == 1.0) goto LAB_006cd33e;
    if (local_4 <= 0.0) goto LAB_006cd2ff;
    local_4 = 1.0 / local_4;
  }
  uVar5 = 0;
  if (*(char *)(in_ECX + 0xd) != '\0') {
    do {
      iVar7 = *(int *)(in_ECX + 0x14) + uVar5 * 0x18;
      if (*(float *)(iVar7 + 8) != 0.0) {
        *(float *)(iVar7 + 8) = local_4 * *(float *)(iVar7 + 8);
      }
      bVar6 = (char)uVar5 + 1;
      uVar5 = (uint)bVar6;
    } while (bVar6 < *(byte *)(in_ECX + 0xd));
  }
LAB_006cd33e:
  if ((*(byte *)(in_ECX + 0xc) & 2) == 0) {
    return;
  }
  bVar6 = 0;
  uVar5 = 0xff;
  local_4 = -1.0;
  if (*(char *)(in_ECX + 0xd) == '\0') {
    *(undefined4 *)(*(int *)(in_ECX + 0x14) + 0x17f0) = 0x3f800000;
    return;
  }
  do {
    pfVar2 = (float *)(*(int *)(in_ECX + 0x14) + 8 + (uint)bVar6 * 0x18);
    if (local_4 < *pfVar2) {
      local_4 = *pfVar2;
      uVar5 = (uint)bVar6;
    }
    bVar6 = bVar6 + 1;
    *pfVar2 = 0.0;
  } while (bVar6 < *(byte *)(in_ECX + 0xd));
  *(undefined4 *)(*(int *)(in_ECX + 0x14) + 8 + uVar5 * 0x18) = 0x3f800000;
  return;
}



void FUN_006cd3d0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int in_ECX;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  byte local_11;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afaab;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  thunk_FUN_00700770(param_1,param_2);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(in_ECX + 0xc);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(in_ECX + 0xd);
  uVar8 = (uint)*(byte *)(in_ECX + 0xd);
  puVar5 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar8 * 0x18) | uVar8 * 0x18 + 4,uVar4);
  puVar10 = (uint *)0x0;
  local_4 = 0;
  if (puVar5 != (uint *)0x0) {
    puVar10 = puVar5 + 1;
    *puVar5 = uVar8;
    _eh_vector_constructor_iterator_(puVar10,0x18,uVar8,FUN_006ccde0,FUN_007016a0);
  }
  *(uint **)(param_1 + 0x14) = puVar10;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  local_4 = 0xffffffff;
  if ((*(byte *)(in_ECX + 0xc) & 1) == 0) {
    local_11 = 0;
    if (*(char *)(in_ECX + 0xd) != '\0') {
      do {
        iVar3 = (uint)local_11 * 0x18;
        piVar1 = *(int **)(*(int *)(in_ECX + 0x14) + iVar3);
        iVar11 = *(int *)(in_ECX + 0x14) + iVar3;
        piVar9 = (int *)(*(int *)(param_1 + 0x14) + iVar3);
        if (piVar1 != (int *)0x0) {
          puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x18))(param_2);
          puVar2 = (undefined4 *)*piVar9;
          if (puVar2 != puVar6) {
            if (((puVar2 != (undefined4 *)0x0) &&
                (LVar7 = InterlockedDecrement(puVar2 + 1), LVar7 == 0)) &&
               (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            *piVar9 = (int)puVar6;
            if (puVar6 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar6 + 1);
            }
          }
        }
        piVar9[1] = *(int *)(iVar11 + 4);
        local_11 = local_11 + 1;
        piVar9[2] = *(int *)(iVar11 + 8);
        *(undefined1 *)(piVar9 + 3) = *(undefined1 *)(iVar11 + 0xc);
        piVar9[4] = *(int *)(iVar11 + 0x10);
        piVar9[5] = *(int *)(iVar11 + 0x14);
      } while (local_11 < *(byte *)(in_ECX + 0xd));
    }
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(in_ECX + 0xe);
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(in_ECX + 0xf);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(in_ECX + 0x10);
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(in_ECX + 0x11);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006cd570(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int *in_ECX;
  int *piStack_4;
  
  iVar3 = param_1;
  piStack_4 = in_ECX;
  puVar4 = (undefined4 *)FUN_00712a90();
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != puVar4) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *in_ECX = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  param_1 = 4;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),in_ECX + 1,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),in_ECX + 2,4,&param_1,1);
  iVar2 = *(int *)(iVar3 + 0x21c);
  if (*(uint *)(iVar3 + 0xd8) < 0xa01006e) {
    param_1 = 4;
    (**(code **)(iVar2 + 4))(iVar2,&piStack_4,4);
    if (piStack_4 == (int *)0x80000000) {
      *(undefined1 *)(in_ECX + 3) = 0x80;
    }
    else {
      *(char *)(in_ECX + 3) = (char)piStack_4;
    }
  }
  else {
    param_1 = 1;
    (**(code **)(iVar2 + 4))(iVar2,in_ECX + 3,1,&param_1,1);
  }
  param_1 = 4;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),in_ECX + 4,4,&param_1,1);
  return;
}



void FUN_006cd680(int *param_1)

{
  undefined4 *in_ECX;
  
  (**(code **)(*param_1 + 0x2c))(*in_ECX);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 1,4,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 2,4,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 3,1,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 4,4,&stack0x00000000,1);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_006cd720(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  int in_ECX;
  byte bVar6;
  byte *pbVar7;
  int *unaff_FS_OFFSET;
  char cStack_1d;
  int local_1c;
  int aiStack_18 [2];
  uint *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar2 = (int)param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c6fcb;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  thunk_FUN_007008a0(param_1);
  if (0xa01006f < *(uint *)(iVar2 + 0xd8)) {
    pbVar7 = (byte *)(in_ECX + 0xc);
    param_1 = (uint *)0x1;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),pbVar7,1,&param_1,1,uVar3);
    *pbVar7 = *pbVar7 & 0xfb;
  }
  iVar1 = *(int *)(iVar2 + 0x21c);
  if (*(uint *)(iVar2 + 0xd8) < 0xa01006e) {
    local_1c = 2;
    (**(code **)(iVar1 + 4))(iVar1,&param_1,2,&local_1c);
    *(char *)(in_ECX + 0xd) = (char)param_1;
    local_1c = 2;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),aiStack_18,2,&local_1c,1);
  }
  else {
    param_1 = (uint *)0x1;
    (**(code **)(iVar1 + 4))(iVar1,in_ECX + 0xd,1,&param_1,1);
  }
  pbVar7 = (byte *)(in_ECX + 0xd);
  param_1 = (uint *)(uint)*pbVar7;
  puStack_10 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < (uint)((int)param_1 * 0x18)) |
                                    (int)param_1 * 0x18 + 4U);
  puVar4 = param_1;
  uStack_4 = 0;
  if (puStack_10 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    *puStack_10 = (uint)param_1;
    param_1 = puStack_10 + 1;
    _eh_vector_constructor_iterator_(param_1,0x18,(int)puVar4,FUN_006ccde0,FUN_007016a0);
    puVar4 = param_1;
  }
  *(uint **)(in_ECX + 0x14) = puVar4;
  uStack_4 = 0xffffffff;
  if (*(uint *)(iVar2 + 0xd8) < 0xa010070) {
    bVar6 = 0;
    if (*pbVar7 != 0) {
      do {
        FUN_006cd570(iVar2);
        bVar6 = bVar6 + 1;
      } while (bVar6 < *pbVar7);
    }
    aiStack_18[0] = 1;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&param_1,1,aiStack_18,1);
    if ((char)param_1 == '\0') {
      *(byte *)(in_ECX + 0xc) = *(byte *)(in_ECX + 0xc) & 0xfe;
    }
    else {
      *(byte *)(in_ECX + 0xc) = *(byte *)(in_ECX + 0xc) | 1;
    }
    aiStack_18[0] = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x1c,4,aiStack_18,1)
    ;
    aiStack_18[0] = 1;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&cStack_1d,1,aiStack_18,1);
    if (cStack_1d == '\0') {
      *(byte *)(in_ECX + 0xc) = *(byte *)(in_ECX + 0xc) & 0xfd;
    }
    else {
      *(byte *)(in_ECX + 0xc) = *(byte *)(in_ECX + 0xc) | 2;
    }
    iVar1 = *(int *)(iVar2 + 0x21c);
    if (*(uint *)(iVar2 + 0xd8) < 0xa01006e) {
      aiStack_18[1] = 2;
      (**(code **)(iVar1 + 4))(iVar1,&local_1c,2);
      *(undefined1 *)(in_ECX + 0xe) = (undefined1)local_1c;
      aiStack_18[1] = 2;
      (**(code **)(*(int *)(iVar2 + 0x21c) + 4))
                (*(int *)(iVar2 + 0x21c),aiStack_18,2,aiStack_18 + 1,1);
      *(undefined1 *)(in_ECX + 0xf) = (undefined1)aiStack_18[0];
    }
    else {
      aiStack_18[1] = 1;
      (**(code **)(iVar1 + 4))(iVar1,in_ECX + 0xe,1,aiStack_18 + 1,1);
      aiStack_18[1] = 1;
      (**(code **)(*(int *)(iVar2 + 0x21c) + 4))
                (*(int *)(iVar2 + 0x21c),in_ECX + 0xf,1,aiStack_18 + 1,1);
    }
    if (0xa01006b < *(uint *)(iVar2 + 0xd8)) {
      uVar5 = FUN_00712a90();
      *(undefined4 *)(in_ECX + 0x18) = uVar5;
      aiStack_18[1] = 4;
      (**(code **)(*(int *)(iVar2 + 0x21c) + 4))
                (*(int *)(iVar2 + 0x21c),in_ECX + 0x20,4,aiStack_18 + 1,1);
    }
    iVar1 = *(int *)(iVar2 + 0x21c);
    if (*(uint *)(iVar2 + 0xd8) < 0xa01006e) {
      aiStack_18[1] = 4;
      (**(code **)(iVar1 + 4))(iVar1,aiStack_18,4);
      if (aiStack_18[0] == -0x80000000) {
        *(undefined1 *)(in_ECX + 0x10) = 0x80;
      }
      else {
        *(char *)(in_ECX + 0x10) = (char)aiStack_18[0];
      }
      aiStack_18[1] = 4;
      (**(code **)(*(int *)(iVar2 + 0x21c) + 4))
                (*(int *)(iVar2 + 0x21c),&local_1c,4,aiStack_18 + 1,1);
      if (local_1c == -0x80000000) {
        *(undefined1 *)(in_ECX + 0x11) = 0x80;
      }
      else {
        *(char *)(in_ECX + 0x11) = (char)local_1c;
      }
    }
    else {
      aiStack_18[1] = 1;
      (**(code **)(iVar1 + 4))(iVar1,in_ECX + 0x10,1,aiStack_18 + 1,1);
      aiStack_18[1] = 1;
      (**(code **)(*(int *)(iVar2 + 0x21c) + 4))
                (*(int *)(iVar2 + 0x21c),in_ECX + 0x11,1,aiStack_18 + 1,1);
    }
  }
  else {
    param_1 = (uint *)0x4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x1c,4,&param_1,1);
    if ((*(byte *)(in_ECX + 0xc) & 1) == 0) {
      param_1 = (uint *)0x1;
      (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0xe,1,&param_1,1);
      param_1 = (uint *)0x1;
      (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0xf,1,&param_1,1);
      param_1 = (uint *)0x1;
      (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x10,1,&param_1,1)
      ;
      param_1 = (uint *)0x1;
      (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x11,1,&param_1,1)
      ;
      param_1 = (uint *)0x4;
      (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x20,4,&param_1,1)
      ;
      param_1 = (uint *)0x4;
      (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x24,4,&param_1,1)
      ;
      param_1 = (uint *)0x4;
      (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x28,4,&param_1,1)
      ;
      puStack_10 = (uint *)0x4;
      (**(code **)(*(int *)(iVar2 + 0x21c) + 4))
                (*(int *)(iVar2 + 0x21c),in_ECX + 0x2c,4,&puStack_10,1);
      bVar6 = 0;
      if (*pbVar7 != 0) {
        do {
          FUN_006cd570(iVar2);
          bVar6 = bVar6 + 1;
        } while (bVar6 < *pbVar7);
      }
      uVar5 = FUN_00712a90();
      *(undefined4 *)(in_ECX + 0x18) = uVar5;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006cdc10(int *param_1)

{
  byte *pbVar1;
  int *piVar2;
  int in_ECX;
  byte bVar3;
  
  piVar2 = param_1;
  thunk_FUN_0068f970(param_1);
  param_1 = (int *)0x1;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],in_ECX + 0xc,1,&param_1,1);
  pbVar1 = (byte *)(in_ECX + 0xd);
  param_1 = (int *)0x1;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],pbVar1,1,&param_1,1);
  param_1 = (int *)0x4;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],in_ECX + 0x1c,4,&param_1,1);
  if ((*(byte *)(in_ECX + 0xc) & 1) == 0) {
    param_1 = (int *)0x1;
    (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],in_ECX + 0xe,1,&param_1,1);
    param_1 = (int *)0x1;
    (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],in_ECX + 0xf,1,&param_1,1);
    param_1 = (int *)0x1;
    (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],in_ECX + 0x10,1,&param_1,1);
    param_1 = (int *)0x1;
    (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],in_ECX + 0x11,1,&param_1,1);
    param_1 = (int *)0x4;
    (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],in_ECX + 0x20,4,&param_1,1);
    param_1 = (int *)0x4;
    (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],in_ECX + 0x24,4,&param_1,1);
    param_1 = (int *)0x4;
    (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],in_ECX + 0x28,4,&param_1,1);
    param_1 = (int *)0x4;
    (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],in_ECX + 0x2c,4,&param_1,1);
    bVar3 = 0;
    if (*pbVar1 != 0) {
      do {
        FUN_006cd680(piVar2);
        bVar3 = bVar3 + 1;
      } while (bVar3 < *pbVar1);
    }
    (**(code **)(*piVar2 + 0x2c))(*(undefined4 *)(in_ECX + 0x18));
  }
  return;
}



void FUN_006cddb0(uint param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  int local_4;
  
  iVar1 = param_1;
  local_4 = in_ECX;
  FUN_006ebac0(param_1);
  param_1 = FUN_0070f910(DAT_00b3cc5c);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070fa00("m_ucArraySize",*(undefined1 *)(in_ECX + 0xd));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070fa00("ms_ucArrayGrowBy",DAT_00b242a0);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0xc)) & 0xffffff01;
  param_1 = FUN_0070f950("ManagerControlled",param_1);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070fb90("m_fWeightThreshold",*(undefined4 *)(in_ECX + 0x1c));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*(byte *)(in_ECX + 0xc) >> 1) & 0xffffff01;
  param_1 = FUN_0070f950("m_bOnlyUseHighestWeight",param_1);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070fa00("m_ucInterpCount",*(undefined1 *)(in_ECX + 0xe));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070fa00("m_ucSingleIdx",*(undefined1 *)(in_ECX + 0xf));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  iVar4 = 0;
  param_1 = 0;
  if (*(char *)(in_ECX + 0xd) != '\0') {
    do {
      iVar2 = *(int *)(iVar4 + *(int *)(in_ECX + 0x14));
      if (((iVar2 != 0) && (DAT_00b3cc30 != 0)) &&
         ((iVar2 = FUN_006c4390(iVar2,1), iVar2 != 0 ||
          ((DAT_00b3cc34 != 0 &&
           (iVar2 = FUN_006c4390(*(undefined4 *)(iVar4 + *(int *)(in_ECX + 0x14)),1), iVar2 != 0))))
         )) {
        local_4 = FUN_0070fc30("NiControllerSequence",*(undefined4 *)(iVar2 + 8));
        uVar3 = (uint)*(ushort *)(iVar1 + 10);
        if (*(ushort *)(iVar1 + 8) <= uVar3) {
          FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
        }
        FUN_0042bb90(uVar3,&local_4);
        local_4 = FUN_0070fa00("m_cPriority",*(undefined1 *)(iVar4 + 0xc + *(int *)(in_ECX + 0x14)))
        ;
        uVar3 = (uint)*(ushort *)(iVar1 + 10);
        if (*(ushort *)(iVar1 + 8) <= uVar3) {
          FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
        }
        FUN_0042bb90(uVar3,&local_4);
        local_4 = FUN_0070fb90("m_fWeight",*(undefined4 *)(iVar4 + 4 + *(int *)(in_ECX + 0x14)));
        uVar3 = (uint)*(ushort *)(iVar1 + 10);
        if (*(ushort *)(iVar1 + 8) <= uVar3) {
          FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
        }
        FUN_0042bb90(uVar3,&local_4);
        local_4 = FUN_0070fb90("m_fNormalizedWeight",
                               *(undefined4 *)(iVar4 + 8 + *(int *)(in_ECX + 0x14)));
        uVar3 = (uint)*(ushort *)(iVar1 + 10);
        if (*(ushort *)(iVar1 + 8) <= uVar3) {
          FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
        }
        FUN_0042bb90(uVar3,&local_4);
        local_4 = FUN_0070fb90("m_fEaseSpinner",
                               *(undefined4 *)(iVar4 + 0x10 + *(int *)(in_ECX + 0x14)));
        uVar3 = (uint)*(ushort *)(iVar1 + 10);
        if (*(ushort *)(iVar1 + 8) <= uVar3) {
          FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
        }
        FUN_0042bb90(uVar3,&local_4);
      }
      param_1 = param_1 + 1;
      iVar4 = iVar4 + 0x18;
    } while (param_1 < *(byte *)(in_ECX + 0xd));
  }
  return;
}



void FUN_006ce1b0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa4))(in_ECX[0xc]);
  return;
}



void thunk_FUN_00715e70(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int iVar5;
  int *in_ECX;
  
  puVar3 = (undefined4 *)FUN_007124a0();
  puVar1 = (undefined4 *)in_ECX[0xd];
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0xd] = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar5 = FUN_007124a0();
  in_ECX[0xc] = iVar5;
  if (*(uint *)(param_1 + 0xd8) < 0xa000110) {
    cVar2 = (**(code **)(*in_ECX + 0x60))();
    if ((cVar2 != '\0') && (in_ECX[0xc] != 0)) {
      iVar5 = *(int *)(in_ECX[0xc] + 0xb4);
      *(ushort *)(iVar5 + 0x2e) = *(ushort *)(iVar5 + 0x2e) & 0xfff | 0x8000;
    }
  }
  return;
}



void FUN_006ce1d0(void)

{
  undefined4 *in_ECX;
  
  FUN_006d04e0();
  *in_ECX = &PTR_FUN_00a7a08c;
  in_ECX[0xf] = 0;
  return;
}



void FUN_006ce260(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x84))(param_1,param_2);
  }
  return;
}



void FUN_006ce290(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    FUN_006d0510();
    if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x3c) + 0x80))(in_ECX + 0x14,in_ECX + 0x18);
    }
  }
  return;
}



void FUN_006ce2c0(undefined4 param_1,undefined4 param_2)

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



void FUN_006ce2f0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00715e40(param_1);
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x38))(param_1);
  }
  return;
}



void FUN_006ce320(int param_1)

{
  undefined4 uVar1;
  
  FUN_006d0550(param_1);
  if (0xa010067 < *(uint *)(param_1 + 0xd8)) {
    uVar1 = FUN_00712a90();
    FUN_0075fa90(uVar1);
  }
  return;
}



undefined1 FUN_006ce350(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = thunk_FUN_00715f10(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x24))(param_1);
  }
  return 1;
}



void FUN_006ce380(int *param_1)

{
  int in_ECX;
  
  thunk_FUN_00716050(param_1);
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 0x3c));
  return;
}



undefined4 FUN_006ce3a0(int param_1)

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



void FUN_006ce3f0(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006d05c0(param_1);
  param_1 = FUN_0070f910(DAT_00b3ccb0);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x30))(iVar1);
  }
  return;
}



undefined4 FUN_006ce450(float *param_1)

{
  char cVar1;
  float *in_ECX;
  
  if (((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) {
    cVar1 = FUN_0073b770(param_1 + 3);
    if ((cVar1 != '\0') && (param_1[7] == in_ECX[7])) {
      return 1;
    }
  }
  return 0;
}



void FUN_006ce4c0(void)

{
  undefined4 *in_ECX;
  
  FUN_006cc4e0();
  *in_ECX = &PTR_FUN_00a79584;
  in_ECX[0xc] = DAT_00b24260;
  in_ECX[0xd] = DAT_00b24264;
  in_ECX[0xe] = DAT_00b24268;
  in_ECX[0xf] = DAT_00b3cba4;
  in_ECX[0x10] = DAT_00b3cba8;
  in_ECX[0x11] = DAT_00b3cbac;
  in_ECX[0x12] = DAT_00b3cbb0;
  in_ECX[0x13] = 0xff7fffff;
  in_ECX[0x14] = 0;
  *(undefined1 *)(in_ECX + 0x15) = 0;
  return;
}



void FUN_006ce520(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a79584;
  FUN_00401f20(in_ECX[0x14]);
  FUN_006ccf50();
  return;
}



char FUN_006ce540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char extraout_AL;
  char cVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_20 [32];
  
  bVar1 = *(byte *)(in_ECX + 0xf);
  FUN_006cc5c0(param_1,param_2,param_3,param_4);
  if (extraout_AL != -1) {
    FUN_006c3500();
    if (*(char *)(in_ECX + 0xe) == '\x01') {
      *(undefined1 *)(in_ECX + 0x54) = 1;
      return extraout_AL;
    }
    if (*(char *)(in_ECX + 0xe) == '\x02') {
      cVar2 = FUN_006cbc10();
      if (cVar2 == '\0') {
        iVar4 = *(int *)(in_ECX + 0x50);
        cVar2 = FUN_006cbc10();
        if (cVar2 == '\0') {
          puVar3 = (undefined4 *)FUN_006cb640(local_20,(uint)bVar1 * 0x68 + 4 + iVar4);
          puVar5 = (undefined4 *)(in_ECX + 0x30);
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          }
        }
      }
      FUN_006c3500();
    }
  }
  return extraout_AL;
}



undefined4 FUN_006ce600(float *param_1)

{
  float *pfVar1;
  int in_ECX;
  int iVar2;
  undefined1 local_20 [32];
  
  pfVar1 = (float *)(in_ECX + 0x30);
  if (((*(float *)(in_ECX + 0x4c) == -3.4028235e+38) &&
      (*(float *)(in_ECX + 0x40) == -3.4028235e+38)) && (*pfVar1 == -3.4028235e+38)) {
    return 0;
  }
  if (*(char *)(in_ECX + 0xe) == '\x01') {
    pfVar1 = (float *)FUN_006cb640(local_20,(uint)*(byte *)(in_ECX + 0xf) * 0x68 + 4 +
                                            *(int *)(in_ECX + 0x50));
  }
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
  }
  return 1;
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
  local_10 = FUN_00401f00(0x58,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006ce4c0();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int * FUN_006ce7a0(int *param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_20 [32];
  
  if (*(char *)(in_ECX + 0xe) == '\x01') {
    bVar1 = *(byte *)(in_ECX + 0xf);
    if ((byte)param_2 == bVar1) {
      cVar2 = FUN_006cbc10();
      if (cVar2 == '\0') {
        iVar4 = *(int *)(in_ECX + 0x50);
        cVar2 = FUN_006cbc10();
        if (cVar2 == '\0') {
          puVar3 = (undefined4 *)FUN_006cb640(local_20,(uint)bVar1 * 0x68 + 4 + iVar4);
          puVar5 = (undefined4 *)(in_ECX + 0x30);
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          }
        }
      }
    }
  }
  FUN_006cc6e0(param_1,param_2);
  if ((*(char *)(in_ECX + 0xe) == '\x01') && (*param_1 != 0)) {
    *(undefined1 *)(in_ECX + 0x54) = 1;
    FUN_006c3500();
  }
  return param_1;
}



uint FUN_006ce840(undefined4 param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined2 extraout_var;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  undefined2 uVar11;
  int in_ECX;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  ushort uVar15;
  char local_9f;
  byte local_9d;
  float local_98;
  float local_90;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c [4];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [32];
  
  local_90 = 1.0;
  FUN_00714c40(0,0,0,0);
  local_98 = 0.0;
  pfVar13 = (float *)(in_ECX + 0x30);
  local_9f = '\0';
  bVar4 = false;
  bVar5 = false;
  fVar1 = *(float *)(in_ECX + 0x4c);
  uVar15 = (ushort)(-3.4028235e+38 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
           (ushort)(fVar1 == -3.4028235e+38) << 0xe;
  if (fVar1 == -3.4028235e+38) {
    fVar1 = *(float *)(in_ECX + 0x40);
    uVar15 = (ushort)(-3.4028235e+38 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
             (ushort)(fVar1 == -3.4028235e+38) << 0xe;
    if (fVar1 != -3.4028235e+38) goto LAB_006cea18;
    fVar1 = *pfVar13;
    uVar15 = (ushort)(fVar1 < -3.4028235e+38) << 8 | (ushort)NAN(fVar1) << 10 |
             (ushort)(fVar1 == -3.4028235e+38) << 0xe;
    if (fVar1 != -3.4028235e+38) goto LAB_006cea18;
    bVar2 = true;
    FUN_00471390();
    FUN_00471430();
    uVar6 = __isnan(1.0);
    if ((uVar6 == 0) && (uVar6 = FUN_00983ffd(0x3ff0000000000000), uVar6 != 0)) {
      *(undefined4 *)(in_ECX + 0x4c) = 0x3f800000;
    }
  }
  else {
LAB_006cea18:
    uVar6 = CONCAT22(extraout_var,uVar15);
    bVar2 = false;
  }
  bVar3 = true;
  local_9d = 0;
  if (*(char *)(in_ECX + 0xd) == '\0') {
LAB_006ced15:
    return uVar6 & 0xffffff00;
  }
  do {
    uVar6 = (uint)local_9d;
    iVar7 = uVar6 * 0x68 + *(int *)(in_ECX + 0x50);
    iVar9 = *(int *)(in_ECX + 0x14) + uVar6 * 0x18;
    iVar12 = iVar7;
    if (*(int *)(*(int *)(in_ECX + 0x14) + uVar6 * 0x18) != 0) {
      fVar1 = *(float *)(iVar9 + 8);
      uVar15 = (ushort)((uint)iVar7 >> 0x10);
      iVar12 = CONCAT22(uVar15,(ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                               (ushort)(fVar1 == 0.0) << 0xe);
      if (0.0 < fVar1) {
        pfVar8 = (float *)(iVar7 + 4);
        if (!bVar2) {
          pfVar8 = (float *)(iVar7 + 0x24);
        }
        pfVar14 = local_5c;
        for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
          *pfVar14 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar14 = pfVar14 + 1;
        }
        if (local_5c[0] != -3.4028235e+38) {
          local_34 = *(float *)(iVar9 + 8);
          local_9f = '\x01';
          local_3c = local_34 * local_5c[0];
          local_38 = local_5c[1] * local_34;
          local_34 = local_5c[2] * local_34;
        }
        pfVar8 = (float *)((uint)uVar15 << 0x10);
        if (local_4c != -3.4028235e+38) {
          if (bVar3) {
            bVar3 = false;
          }
          else if (local_44 * local_60 +
                   local_48 * local_64 + local_5c[3] * local_6c + local_4c * local_68 < 0.0) {
            FUN_00714cc0(local_30);
          }
          pfVar8 = (float *)FUN_0072f930(local_20,*(undefined4 *)(iVar9 + 8));
          local_6c = *pfVar8 + local_6c;
          local_68 = local_68 + pfVar8[1];
          bVar4 = true;
          local_64 = local_64 + pfVar8[2];
          local_60 = local_60 + pfVar8[3];
        }
        iVar12 = CONCAT22((short)((uint)pfVar8 >> 0x10),
                          (ushort)(-3.4028235e+38 < local_40) << 8 | (ushort)NAN(local_40) << 10 |
                          (ushort)(local_40 == -3.4028235e+38) << 0xe);
        if (local_40 == -3.4028235e+38) {
          local_90 = local_90 - *(float *)(iVar9 + 8);
        }
        else {
          bVar5 = true;
          local_98 = local_98 + *(float *)(iVar9 + 8) * local_40;
        }
      }
    }
    local_9d = local_9d + 1;
  } while (local_9d < *(byte *)(in_ECX + 0xd));
  uVar6 = CONCAT31((int3)((uint)iVar12 >> 8),local_9f);
  if (((local_9f == '\0') && (!bVar4)) && (!bVar5)) goto LAB_006ced15;
  local_5c[0] = DAT_00b24260;
  local_5c[1] = (float)DAT_00b24264;
  local_5c[2] = (float)DAT_00b24268;
  local_5c[3] = (float)DAT_00b3cba4;
  local_4c = (float)DAT_00b3cba8;
  local_48 = (float)DAT_00b3cbac;
  local_44 = (float)DAT_00b3cbb0;
  local_40 = -3.4028235e+38;
  if (local_9f != '\0') {
    FUN_00471390();
  }
  if (bVar4) {
    FUN_00715340();
    FUN_00471430();
  }
  if (bVar5) {
    local_98 = (1.0 / local_90) * local_98;
    iVar9 = __isnan((double)local_98);
    if ((iVar9 == 0) && (iVar9 = FUN_00983ffd((double)local_98), iVar9 != 0)) {
      local_40 = local_98;
    }
  }
  pfVar10 = (float *)FUN_006cb820(local_20,local_5c);
  pfVar8 = pfVar10;
  pfVar14 = pfVar13;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar14 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar14 = pfVar14 + 1;
  }
  fVar1 = *(float *)(in_ECX + 0x4c);
  uVar15 = (ushort)(-3.4028235e+38 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
           (ushort)(fVar1 == -3.4028235e+38) << 0xe;
  uVar11 = (undefined2)((uint)pfVar10 >> 0x10);
  if (fVar1 == -3.4028235e+38) {
    fVar1 = *(float *)(in_ECX + 0x40);
    uVar15 = (ushort)(-3.4028235e+38 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
             (ushort)(fVar1 == -3.4028235e+38) << 0xe;
    if (fVar1 == -3.4028235e+38) {
      fVar1 = *pfVar13;
      uVar6 = CONCAT22(uVar11,(ushort)(fVar1 < -3.4028235e+38) << 8 | (ushort)NAN(fVar1) << 10 |
                              (ushort)(fVar1 == -3.4028235e+38) << 0xe);
      if (fVar1 == -3.4028235e+38) goto LAB_006ced15;
      goto LAB_006ced25;
    }
  }
  uVar6 = CONCAT22(uVar11,uVar15);
LAB_006ced25:
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *param_3 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    param_3 = param_3 + 1;
  }
  return CONCAT31((int3)(uVar6 >> 8),1);
}



char FUN_006ced50(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afaab;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar1 = *(byte *)(in_ECX + 0xd);
  cVar3 = FUN_006ccfd0(uVar4);
  if (cVar3 != '\0') {
    bVar2 = *(byte *)(in_ECX + 0xd);
    pvVar5 = (void *)FUN_00401f00((uint)bVar2 * 0x68);
    local_4 = 0;
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      _vector_constructor_iterator_(pvVar5,0x68,(uint)bVar2,FUN_006c3730);
    }
    if (bVar1 != 0) {
      iVar6 = 0;
      uVar4 = (uint)bVar1;
      do {
        puVar8 = (undefined4 *)(*(int *)(in_ECX + 0x50) + iVar6);
        puVar9 = (undefined4 *)(iVar6 + (int)pvVar5);
        iVar6 = iVar6 + 0x68;
        uVar4 = uVar4 - 1;
        for (iVar7 = 0x1a; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      } while (uVar4 != 0);
    }
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x50));
    *(void **)(in_ECX + 0x50) = pvVar5;
  }
  *unaff_FS_OFFSET = local_c;
  return cVar3;
}



void FUN_006cee20(float param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  undefined4 unaff_EBX;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 unaff_retaddr;
  undefined1 *puVar9;
  undefined1 local_8c [4];
  undefined1 local_88 [4];
  int local_84;
  undefined1 auStack_74 [52];
  undefined1 auStack_40 [32];
  undefined1 auStack_20 [24];
  float fStack_8;
  
  pfVar3 = (float *)((uint)*(byte *)(in_ECX + 0xf) * 0x68 + *(int *)(in_ECX + 0x50));
  piVar1 = *(int **)(*(int *)(in_ECX + 0x14) + (uint)*(byte *)(in_ECX + 0xf) * 0x18);
  if (param_1 != *pfVar3) {
    if (param_1 < *pfVar3) {
      local_84 = in_ECX;
      cVar2 = FUN_006cbc10();
      if (cVar2 != '\0') {
        puVar9 = local_8c;
        (**(code **)(*piVar1 + 0x80))(local_88,puVar9);
        FUN_00470ab0();
        (**(code **)(*piVar1 + 0x4c))(unaff_EBX,unaff_retaddr,local_88);
        FUN_00470ab0();
        (**(code **)(*piVar1 + 0x4c))(puVar9,unaff_retaddr,auStack_74);
        FUN_00470ab0();
        FUN_006cb4d0(auStack_40);
        pfVar4 = (float *)FUN_006cb640(auStack_20,auStack_40);
        pfVar7 = pfVar3 + 9;
        for (iVar6 = 8; in_ECX = local_84, iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar7 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          pfVar7 = pfVar7 + 1;
        }
      }
      cVar2 = FUN_006cbc10();
      if (cVar2 == '\0') {
        puVar5 = (undefined4 *)FUN_006cb640(auStack_20,pfVar3 + 9);
        puVar8 = (undefined4 *)(in_ECX + 0x30);
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        }
      }
    }
    (**(code **)(*piVar1 + 0x4c))(param_1,param_2,pfVar3 + 1);
    param_1 = fStack_8;
  }
  *pfVar3 = param_1;
  return;
}



void FUN_006cef80(uint param_1,float param_2)

{
  int *piVar1;
  char cVar2;
  uint *puVar3;
  float *pfVar4;
  undefined4 uVar5;
  float *pfVar6;
  int in_ECX;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint uStack_10c;
  undefined1 *puStack_108;
  undefined4 *puStack_104;
  float *pfStack_100;
  undefined1 *local_fc;
  undefined4 uStack_d0;
  undefined4 auStack_c4 [2];
  float local_bc;
  uint uStack_b8;
  uint uStack_b4;
  float fStack_b0;
  uint uStack_ac;
  float afStack_9c [4];
  undefined1 auStack_8c [32];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [28];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [4];
  float fStack_3c;
  undefined1 auStack_34 [16];
  float fStack_24;
  undefined4 uStack_18;
  float fStack_4;
  
  piVar1 = *(int **)(*(int *)(in_ECX + 0x14) + (param_1 & 0xff) * 0x18);
  pfVar8 = (float *)((param_1 & 0xff) * 0x68 + *(int *)(in_ECX + 0x50));
  if ((piVar1 == (int *)0x0) || (param_2 == *pfVar8)) {
    FUN_00471390();
    FUN_00471430();
    local_fc = (undefined1 *)0x6cf44c;
    iVar7 = __isnan(1.0);
    if (iVar7 == 0) {
      local_fc = (undefined1 *)0x6cf460;
      iVar7 = FUN_00983ffd();
      if (iVar7 != 0) {
        pfVar8[0x10] = 1.0;
      }
    }
    *pfVar8 = param_2;
    return;
  }
  if ((*(char *)(in_ECX + 0x54) != '\0') || (cVar2 = FUN_006cbc10(), cVar2 != '\0')) {
    *(undefined1 *)(in_ECX + 0x54) = 0;
    local_fc = (undefined1 *)param_2;
    pfStack_100 = (float *)0x6cf003;
    (**(code **)(*piVar1 + 0x4c))();
    uStack_d0 = 0xff7fffff;
    uStack_b8 = DAT_00b27110;
    uStack_b4 = DAT_00b27114;
    fStack_b0 = DAT_00b27118;
    uStack_ac = DAT_00b2711c;
    if (pfVar8[5] != -3.4028235e+38) {
      local_fc = (undefined1 *)0x6cf09e;
      puVar3 = (uint *)FUN_00714d80();
      uStack_b8 = *puVar3;
      uStack_b4 = puVar3[1];
      fStack_b0 = (float)puVar3[2];
      uStack_ac = puVar3[3];
    }
    local_fc = (undefined1 *)0x6cf0cf;
    FUN_00714cf0();
    FUN_0047c600();
  }
  pfVar10 = pfVar8 + 1;
  if (param_2 < *pfVar8) {
    local_fc = (undefined1 *)0x6cf109;
    (**(code **)(*piVar1 + 0x80))();
    local_fc = (undefined1 *)0x6cf115;
    FUN_00470ab0();
    local_fc = auStack_68;
    pfStack_100 = (float *)param_1;
    puStack_104 = (undefined4 *)afStack_9c[0];
    puStack_108 = (undefined1 *)0x6cf136;
    (**(code **)(*piVar1 + 0x4c))();
    puStack_108 = (undefined1 *)0x6cf142;
    FUN_00470ab0();
    puStack_108 = auStack_34;
    uStack_10c = param_1;
    (**(code **)(*piVar1 + 0x4c))(uStack_d0);
    FUN_00470ab0();
    (**(code **)(*piVar1 + 0x4c))(uStack_18,param_1,&fStack_b0);
    FUN_00470ab0();
    FUN_006cb3c0(auStack_6c);
    pfVar4 = (float *)FUN_006cb820(&stack0xffffff1c,auStack_8c);
    pfVar6 = pfVar8 + 9;
    pfVar9 = pfVar6;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar9 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar9 = pfVar9 + 1;
    }
    if (*pfVar6 != -3.4028235e+38) {
      uVar5 = FUN_007101f0(&stack0xffffff1c,pfVar6);
      FUN_00471390(uVar5);
    }
    local_fc = (undefined1 *)0xff7fffff;
    uStack_10c = DAT_00b27110;
    puStack_108 = (undefined1 *)DAT_00b27114;
    puStack_104 = (undefined4 *)DAT_00b27118;
    pfStack_100 = (float *)DAT_00b2711c;
    if (fStack_3c != -3.4028235e+38) {
      puVar3 = (uint *)FUN_00714d80(&stack0xffffff1c,auStack_40);
      uStack_10c = *puVar3;
      puStack_108 = (undefined1 *)puVar3[1];
      puStack_104 = (undefined4 *)puVar3[2];
      pfStack_100 = (float *)puVar3[3];
    }
    FUN_00714cf0(afStack_9c,&uStack_10c);
    FUN_0047c600(pfVar8 + 0x11);
    FUN_006cb3c0(auStack_6c);
    pfVar6 = (float *)FUN_006cb820(&stack0xffffff1c,&local_bc);
    pfVar4 = pfVar10;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar4 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar4 = pfVar4 + 1;
    }
    if (*pfVar10 != -3.4028235e+38) {
      uVar5 = FUN_007101f0(&stack0xffffff1c,pfVar10);
      FUN_00471390(uVar5);
    }
    pfVar6 = (float *)FUN_006cb820(&stack0xffffff1c,pfVar10);
    pfVar4 = pfVar8 + 9;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar4 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar4 = pfVar4 + 1;
    }
    *pfVar8 = fStack_24;
    pfVar8 = &local_bc;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar10 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar10 = pfVar10 + 1;
    }
    return;
  }
  FUN_00470ab0();
  local_fc = (undefined1 *)param_2;
  pfStack_100 = (float *)0x6cf394;
  (**(code **)(*piVar1 + 0x4c))();
  pfStack_100 = (float *)0x6cf3a0;
  FUN_00470ab0();
  pfStack_100 = (float *)auStack_6c;
  puStack_104 = (undefined4 *)0x6cf3af;
  FUN_006cb3c0();
  pfStack_100 = afStack_9c;
  puStack_104 = (undefined4 *)auStack_4c;
  puStack_108 = (undefined1 *)0x6cf3c8;
  pfVar6 = (float *)FUN_006cb820();
  pfStack_100 = pfVar8 + 9;
  pfVar4 = pfStack_100;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar4 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar4 = pfVar4 + 1;
  }
  if (*pfStack_100 != -3.4028235e+38) {
    puStack_104 = auStack_c4;
    puStack_108 = (undefined1 *)0x6cf3f7;
    pfStack_100 = (float *)FUN_007101f0();
    puStack_104 = (undefined4 *)0x6cf400;
    FUN_00471390();
  }
  *pfVar8 = fStack_4;
  pfVar8 = afStack_9c;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar10 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar10 = pfVar10 + 1;
  }
  return;
}



void FUN_006cf490(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  int in_ECX;
  int iVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afb5b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006cd3d0(param_1,param_2);
  bVar4 = *(byte *)(in_ECX + 0xd);
  pvVar2 = (void *)FUN_00401f00((uint)bVar4 * 0x68,uVar1);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar2,0x68,(uint)bVar4,FUN_006c3730);
  }
  bVar4 = 0;
  *(void **)(param_1 + 0x50) = pvVar2;
  if (*(char *)(in_ECX + 0xd) != '\0') {
    do {
      uVar1 = (uint)bVar4;
      bVar4 = bVar4 + 1;
      puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x50) + uVar1 * 0x68);
      puVar6 = (undefined4 *)(*(int *)(param_1 + 0x50) + uVar1 * 0x68);
      for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    } while (bVar4 < *(byte *)(in_ECX + 0xd));
  }
  puVar5 = (undefined4 *)(in_ECX + 0x30);
  puVar6 = (undefined4 *)(param_1 + 0x30);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006cf560(undefined4 param_1)

{
  uint uVar1;
  void *pvVar2;
  int in_ECX;
  byte bVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006cd720(param_1);
  bVar3 = *(byte *)(in_ECX + 0xd);
  pvVar2 = (void *)FUN_00401f00((uint)bVar3 * 0x68,uVar1);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar2,0x68,(uint)bVar3,FUN_006c3730);
  }
  bVar3 = 0;
  local_4 = 0xffffffff;
  *(void **)(in_ECX + 0x50) = pvVar2;
  if (*(char *)(in_ECX + 0xd) != '\0') {
    do {
      FUN_006cb990(param_1);
      FUN_006cb990(param_1);
      FUN_00711b90(param_1);
      bVar3 = bVar3 + 1;
    } while (bVar3 < *(byte *)(in_ECX + 0xd));
  }
  FUN_006cb990(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_006cf630(float param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [32];
  
  if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
    param_1 = *(float *)(in_ECX + 0x20);
  }
  if (param_1 == -3.4028235e+38) {
    return 0;
  }
  FUN_006cee20(param_1,param_2);
  if (*(char *)(in_ECX + 0x54) == '\0') {
    cVar1 = FUN_006cbc10();
    if (cVar1 == '\0') goto LAB_006cf726;
  }
  local_24 = 0xff7fffff;
  local_38 = DAT_00b24268;
  local_2c = DAT_00b3cbac;
  local_40 = DAT_00b24260;
  local_34 = DAT_00b3cba4;
  local_3c = DAT_00b24264;
  local_28 = DAT_00b3cbb0;
  local_30 = DAT_00b3cba8;
  FUN_006cb4d0(&local_40);
  cVar1 = FUN_006cbc10();
  if (cVar1 == '\0') {
    puVar2 = (undefined4 *)FUN_006cb640(local_20,&local_40);
  }
  else {
    puVar2 = &local_40;
  }
  puVar4 = (undefined4 *)(in_ECX + 0x30);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(in_ECX + 0x54) = 0;
LAB_006cf726:
  cVar1 = FUN_006cbc10();
  if (cVar1 != '\0') {
    return 0;
  }
  puVar2 = (undefined4 *)
           FUN_006cb640(local_20,(uint)*(byte *)(in_ECX + 0xf) * 0x68 + 4 + *(int *)(in_ECX + 0x50))
  ;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  return 1;
}



undefined4 FUN_006cf860(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x58,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_006ce4c0();
  }
  local_4 = 0xffffffff;
  FUN_006cf490(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_006cf940(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7508;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a79984;
  puVar1 = (undefined4 *)in_ECX[0xf];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      FUN_00401f20(puVar1 + -1,uVar2);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  FUN_00401f20(in_ECX[0x10],uVar2);
  local_4 = 0xffffffff;
  FUN_00715a70();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006cf9d0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  float fStack_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  if ((*(byte *)(in_ECX + 8) >> 3 & 1) != 0) {
    local_4 = -3.4028235e+38;
    local_20 = DAT_00b24260;
    local_1c = DAT_00b24264;
    local_18 = DAT_00b24268;
    local_14 = DAT_00b3cba4;
    iVar4 = 0;
    local_10 = DAT_00b3cba8;
    local_c = DAT_00b3cbac;
    local_8 = DAT_00b3cbb0;
    if (*(short *)(in_ECX + 0x44) != 0) {
      iVar3 = 0;
      do {
        if (((*(int *)(*(int *)(in_ECX + 0x40) + iVar4 * 4) != 0) &&
            (iVar1 = *(int *)(*(int *)(in_ECX + 0x40) + iVar4 * 4),
            (*(byte *)(iVar1 + 0x18) >> 1 & 1) != 0)) &&
           (cVar2 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + iVar3) + 0x4c))
                              (param_1,iVar1,&local_20), cVar2 != '\0')) {
          if (local_20 != -3.4028235e+38) {
            iVar1 = *(int *)(*(int *)(in_ECX + 0x40) + iVar4 * 4);
            *(float *)(iVar1 + 0x54) = local_20;
            *(undefined4 *)(iVar1 + 0x58) = local_1c;
            *(undefined4 *)(iVar1 + 0x5c) = local_18;
          }
          if (local_10 != -3.4028235e+38) {
            FUN_0047c600(*(int *)(*(int *)(in_ECX + 0x40) + iVar4 * 4) + 0x30);
          }
          if (local_4 == -3.4028235e+38) {
            if ((*(byte *)(in_ECX + 8) >> 6 & 1) == 0) goto LAB_006cfb25;
            fStack_24 = 1.0;
          }
          else {
            fStack_24 = ABS(local_4);
          }
          *(float *)(*(int *)(*(int *)(in_ECX + 0x40) + iVar4 * 4) + 0x60) = fStack_24;
        }
LAB_006cfb25:
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x30;
      } while (iVar4 < (int)(uint)*(ushort *)(in_ECX + 0x44));
    }
  }
  return;
}



ushort FUN_006cfb80(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  int in_ECX;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (param_1 == (byte *)0x0) {
    return 0xffff;
  }
  uVar2 = 0;
  if (*(ushort *)(in_ECX + 0x44) != 0) {
    do {
      if (*(int *)(*(int *)(in_ECX + 0x40) + (uint)uVar2 * 4) != 0) {
        pbVar3 = *(byte **)(*(int *)(*(int *)(in_ECX + 0x40) + (uint)uVar2 * 4) + 8);
        pbVar5 = param_1;
        do {
          bVar1 = *pbVar3;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_006cfbd7:
            iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_006cfbdc;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_006cfbd7;
          pbVar3 = pbVar3 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_006cfbdc:
        if (iVar4 == 0) {
          return uVar2;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0x44));
  }
  return 0xffff;
}



void FUN_006cfc20(void)

{
  int in_ECX;
  ushort uVar1;
  float local_8;
  float local_4;
  
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    *(undefined4 *)(in_ECX + 0x14) = 0x7f7fffff;
    uVar1 = 0;
    *(undefined4 *)(in_ECX + 0x18) = 0xff7fffff;
    if (*(short *)(in_ECX + 0x44) != 0) {
      do {
        local_4 = -3.4028235e+38;
        local_8 = 3.4028235e+38;
        (**(code **)(*(int *)((uint)uVar1 * 0x30 + *(int *)(in_ECX + 0x3c)) + 0x80))
                  (&local_8,&local_4);
        if (local_8 < *(float *)(in_ECX + 0x14)) {
          *(float *)(in_ECX + 0x14) = local_8;
        }
        if (*(float *)(in_ECX + 0x18) < local_4) {
          *(float *)(in_ECX + 0x18) = local_4;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ushort *)(in_ECX + 0x44));
    }
    if ((*(float *)(in_ECX + 0x14) == 3.4028235e+38) &&
       (*(float *)(in_ECX + 0x18) == -3.4028235e+38)) {
      FUN_006d0510();
      return;
    }
  }
  return;
}



undefined4 FUN_006cfd00(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  undefined4 auStack_68 [6];
  undefined4 uStack_50;
  int iStack_4c;
  uint uStack_48;
  undefined4 local_2c [7];
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c78ab;
  local_c = *unaff_FS_OFFSET;
  uStack_48 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x40) + (param_1 & 0xffff) * 4);
  iStack_4c = iVar1 + 0x30;
  uStack_50 = 0x6cfd3d;
  FUN_007150f0();
  local_2c[0] = *(undefined4 *)(iVar1 + 0x54);
  local_2c[1] = *(undefined4 *)(iVar1 + 0x58);
  local_10 = *(undefined4 *)(iVar1 + 0x60);
  local_2c[2] = *(undefined4 *)(iVar1 + 0x5c);
  iStack_4c = 0x38;
  uStack_50 = 0x6cfd88;
  iVar1 = FUN_00401f00();
  local_4 = 0;
  if (iVar1 != 0) {
    puVar3 = local_2c;
    puVar4 = auStack_68;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar2 = FUN_006d5c30();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006cfe00(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  ushort uVar1;
  
  uVar1 = 0;
  if (*(short *)(in_ECX + 0x44) != 0) {
    do {
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + (uint)uVar1 * 0x30) + 0x84))(param_1,param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(in_ECX + 0x44));
  }
  return;
}



void FUN_006cff00(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  int in_ECX;
  uint *puVar4;
  ushort uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(short *)(in_ECX + 0x44) != 0) &&
     (puVar1 = *(undefined4 **)(in_ECX + 0x3c), puVar1 != (undefined4 *)0x0)) {
    if (puVar1[-1] == 0) {
      FUN_00401f20(puVar1 + -1,uVar2);
    }
    else {
      (**(code **)*puVar1)(3);
    }
    uVar2 = (uint)*(ushort *)(in_ECX + 0x44);
    puVar3 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2 * 0x30) | uVar2 * 0x30 + 4);
    uStack_4 = 0;
    if (puVar3 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = puVar3 + 1;
      *puVar3 = uVar2;
      _eh_vector_constructor_iterator_(puVar4,0x30,uVar2,FUN_006cbcb0,thunk_FUN_006ccf50);
    }
    uVar5 = 0;
    *(uint **)(in_ECX + 0x3c) = puVar4;
    if (*(short *)(in_ECX + 0x44) != 0) {
      do {
        InterlockedIncrement((LONG *)((uint)uVar5 * 0x30 + 4 + *(int *)(in_ECX + 0x3c)));
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(in_ECX + 0x44));
    }
    _memset(*(void **)(in_ECX + 0x40),0,(uint)*(ushort *)(in_ECX + 0x44) * 4);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}


