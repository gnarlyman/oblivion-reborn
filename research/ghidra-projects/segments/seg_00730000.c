
void FUN_00730010(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00714bf0(param_1);
  FUN_00714bf0(iVar1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 8,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x44,4,&param_1,1);
  FUN_00714bf0(iVar1);
  return;
}



undefined4 FUN_00730090(uint param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (param_1 < *(uint *)(in_ECX + 0xc)) {
    *(undefined4 *)(*(int *)(in_ECX + 0x10) + param_1 * 4) = param_2;
    return 1;
  }
  return 0;
}



float10 FUN_007300b0(uint param_1)

{
  int in_ECX;
  
  if (param_1 < *(uint *)(in_ECX + 0xc)) {
    return (float10)*(float *)(*(int *)(in_ECX + 0x10) + param_1 * 4);
  }
  return (float10)0;
}



void FUN_007300d0(int param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ECX;
  
  FUN_007214a0(param_1,param_2);
  if ((*(int *)(in_ECX + 0x10) == 0) || (*(int *)(in_ECX + 0xc) == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
    lVar1 = (ulonglong)*(uint *)(in_ECX + 0xc) * 4;
    uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    uVar3 = 0;
    if (*(int *)(in_ECX + 0xc) != 0) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar3 * 4) =
             *(undefined4 *)(*(int *)(in_ECX + 0x10) + uVar3 * 4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(in_ECX + 0xc));
      return;
    }
  }
  return;
}



undefined4 * FUN_00730150(void)

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
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a80574;
    puVar2[4] = 0;
    puVar2[3] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



uint FUN_007301d0(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint in_EAX;
  int in_ECX;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  uVar3 = *(uint *)(in_ECX + 0xc);
  if (uVar3 != *(uint *)(param_1 + 0xc)) goto LAB_0073022f;
  in_EAX = *(uint *)(in_ECX + 0x10);
  if (in_EAX == 0) {
LAB_007301f9:
    if (*(int *)(param_1 + 0x10) != 0) {
LAB_0073022f:
      return in_EAX & 0xffffff00;
    }
    if (in_EAX == 0) goto LAB_00730228;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) goto LAB_0073022f;
    if (in_EAX == 0) goto LAB_007301f9;
  }
  uVar5 = 0;
  if (uVar3 != 0) {
    pfVar4 = *(float **)(param_1 + 0x10);
    iVar6 = in_EAX - (int)pfVar4;
    do {
      fVar1 = *(float *)(iVar6 + (int)pfVar4);
      fVar2 = *pfVar4;
      in_EAX = CONCAT22((short)(in_EAX >> 0x10),
                        (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                        (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 != fVar1) goto LAB_0073022f;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 1;
    } while (uVar5 < uVar3);
  }
LAB_00730228:
  return CONCAT31((int3)(in_EAX >> 8),1);
}



void FUN_00730240(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a80574;
  FUN_00401f20(in_ECX[4]);
  in_ECX[4] = 0;
  FUN_00721410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00730280(undefined4 param_1)

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
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a80574;
    puVar2[4] = 0;
    puVar2[3] = 0;
  }
  local_4 = 0xffffffff;
  FUN_007300d0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00730310(int param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  
  iVar4 = param_1;
  FUN_00721610(param_1);
  iVar2 = *(int *)(iVar4 + 0x21c);
  puVar1 = (uint *)(in_ECX + 0xc);
  param_1 = 4;
  (**(code **)(iVar2 + 4))(iVar2,puVar1,4,&param_1,1);
  if (*puVar1 != 0) {
    lVar3 = (ulonglong)*puVar1 * 4;
    uVar5 = FUN_00401f00(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
    *(undefined4 *)(in_ECX + 0x10) = uVar5;
    iVar2 = *(int *)(iVar4 + 0x21c);
    param_1 = 4;
    (**(code **)(iVar2 + 4))(iVar2,uVar5,*puVar1 * 4,&param_1,1);
    return;
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



void FUN_007303a0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_006fe000(param_1);
  iVar1 = *(int *)(iVar2 + 0x220);
  param_1 = 4;
  (**(code **)(iVar1 + 8))(iVar1,(int *)(in_ECX + 0xc),4,&param_1,1);
  iVar1 = *(int *)(iVar2 + 0x220);
  param_1 = 4;
  (**(code **)(iVar1 + 8))
            (iVar1,*(undefined4 *)(in_ECX + 0x10),*(int *)(in_ECX + 0xc) * 4,&param_1,1);
  return;
}



void FUN_00730540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  *(undefined4 *)(in_ECX + 0x10) = param_2;
  *(undefined4 *)(in_ECX + 0x14) = param_3;
  *(undefined4 *)(in_ECX + 0x18) = param_4;
  return;
}



undefined4 * FUN_00730560(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a805f4;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[3] = DAT_00b25ad0;
    puVar2[4] = DAT_00b25ad4;
    puVar2[5] = DAT_00b25ad8;
    puVar2[6] = DAT_00b25adc;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_007305f0(int param_1)

{
  int in_ECX;
  
  FUN_00721610(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0x500000e) {
    FUN_00709430(param_1);
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0;
    *(undefined4 *)(in_ECX + 0x18) = 0x3f800000;
    return;
  }
  FUN_00715420(param_1);
  return;
}



void FUN_00730680(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a805f4;
  FUN_00721410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_007306b0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a805f4;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[3] = DAT_00b25ad0;
    puVar2[4] = DAT_00b25ad4;
    puVar2[5] = DAT_00b25ad8;
    puVar2[6] = DAT_00b25adc;
  }
  local_4 = 0xffffffff;
  FUN_007214a0(puVar2,param_1);
  puVar2[3] = *(undefined4 *)(in_ECX + 0xc);
  puVar2[4] = *(undefined4 *)(in_ECX + 0x10);
  puVar2[5] = *(undefined4 *)(in_ECX + 0x14);
  puVar2[6] = *(undefined4 *)(in_ECX + 0x18);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00730840(int param_1,undefined4 param_2,float param_3,float param_4,int param_5,
                 uint param_6)

{
  short *psVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (3 < (int)param_6) {
    iVar3 = (param_6 - 4 >> 2) + 1;
    uVar4 = iVar3 * 4;
    psVar1 = (short *)(param_1 + 4);
    pfVar2 = (float *)(param_5 + 8);
    do {
      iVar3 = iVar3 + -1;
      pfVar2[-2] = ((float)(int)psVar1[-2] / 32767.0) * param_4 + param_3;
      pfVar2[-1] = ((float)(int)psVar1[-1] / 32767.0) * param_4 + param_3;
      *pfVar2 = ((float)(int)*psVar1 / 32767.0) * param_4 + param_3;
      pfVar2[1] = ((float)(int)psVar1[1] / 32767.0) * param_4 + param_3;
      psVar1 = psVar1 + 4;
      pfVar2 = pfVar2 + 4;
    } while (iVar3 != 0);
  }
  if (param_6 <= uVar4) {
    return;
  }
  do {
    iVar3 = uVar4 * 2;
    uVar4 = uVar4 + 1;
    *(float *)(param_5 + -4 + uVar4 * 4) =
         ((float)(int)*(short *)(param_1 + iVar3) / 32767.0) * param_4 + param_3;
  } while (uVar4 < param_6);
  return;
}



undefined4 * FUN_00730920(void)

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
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a7d0f4;
    puVar2[3] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



bool FUN_007309a0(int param_1)

{
  int in_ECX;
  
  if (param_1 == 0) {
    return false;
  }
  return *(int *)(in_ECX + 0xc) == *(int *)(param_1 + 0xc);
}



undefined4 * FUN_007309c0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a7d0f4;
    puVar2[3] = 0;
  }
  local_4 = 0xffffffff;
  FUN_007214a0(puVar2,param_1);
  puVar2[3] = *(undefined4 *)(in_ECX + 0xc);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00730a50(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00721610(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0xc,4,&param_1,1);
  return;
}



void FUN_00730a90(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_006fe000(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0xc,4,&param_1,1);
  return;
}



void FUN_00730ad0(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00721730(param_1);
  param_1 = FUN_0070f910(DAT_00b3ffa0);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070faf0("m_iValue",*(undefined4 *)(in_ECX + 0xc));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 * FUN_00730b70(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xc,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a8068c;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_00730bf0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8068c;
  FUN_00721410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00730c20(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xc,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a8068c;
  }
  local_4 = 0xffffffff;
  FUN_007214a0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00730ca0(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_8;
  undefined1 auStack_4 [4];
  
  uVar2 = param_1;
  if (*(uint *)(param_1 + 0xd8) < 0x5000010) {
    FUN_00721610(param_1);
    iVar1 = *(int *)(uVar2 + 0x21c);
    local_8 = 4;
    (**(code **)(iVar1 + 4))(iVar1,&param_1,4,&local_8,1);
    uVar3 = 0;
    if (param_1 != 0) {
      do {
        iVar1 = *(int *)(uVar2 + 0x21c);
        local_8 = 4;
        (**(code **)(iVar1 + 4))(iVar1,auStack_4,4,&local_8,1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_1);
    }
  }
  return;
}



void FUN_00730d30(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00721730(param_1);
  param_1 = FUN_0070f910(DAT_00b3ffa8);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_007315f0(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_00b3ffb4 + 1;
  bVar2 = DAT_00b3ffb4 == 0;
  DAT_00b3ffb4 = iVar1;
  if (bVar2) {
    FUN_00747c20(&LAB_00730d80,&LAB_00731290);
  }
  return;
}



void FUN_00731620(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca82e;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  local_4 = 0;
  piVar6 = in_ECX + 2;
  *in_ECX = &PTR_FUN_00a80984;
  _eh_vector_constructor_iterator_(piVar6,4,10,FUN_007c88a0,FUN_007016a0);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar5 = param_1 - (int)in_ECX;
  param_1 = 10;
  do {
    puVar1 = (undefined4 *)*piVar6;
    if (puVar1 != *(undefined4 **)((int)piVar6 + iVar5)) {
      if (puVar1 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(puVar1 + 1);
        if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1,uVar3);
        }
      }
      iVar2 = *(int *)((int)piVar6 + iVar5);
      *piVar6 = iVar2;
      if (iVar2 != 0) {
        InterlockedIncrement((LONG *)(iVar2 + 4));
      }
    }
    piVar6 = piVar6 + 1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00731700(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ca82e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a80984;
  local_4 = 1;
  piVar5 = in_ECX + 2;
  iVar4 = 10;
  do {
    puVar1 = (undefined4 *)*piVar5;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar2);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(in_ECX + 2,4,10,FUN_007016a0);
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007317b0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  
  puVar2 = DAT_00b3fce4;
  puVar1 = *(undefined4 **)(in_ECX + 8);
  if (puVar1 != DAT_00b3fce4) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 8) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  puVar2 = DAT_00b3faa4;
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  if (puVar1 != DAT_00b3faa4) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x10) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  puVar2 = DAT_00b401d8;
  puVar1 = *(undefined4 **)(in_ECX + 0x14);
  if (puVar1 != DAT_00b401d8) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x14) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  puVar2 = DAT_00b401ac;
  puVar1 = *(undefined4 **)(in_ECX + 0x18);
  if (puVar1 != DAT_00b401ac) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x18) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  puVar2 = DAT_00b3fcf8;
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  if (puVar1 != DAT_00b3fcf8) {
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
  puVar2 = DAT_00b3f974;
  puVar1 = *(undefined4 **)(in_ECX + 0x20);
  if (puVar1 != DAT_00b3f974) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x20) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  puVar2 = DAT_00b3f980;
  puVar1 = *(undefined4 **)(in_ECX + 0x24);
  if (puVar1 != DAT_00b3f980) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x24) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  puVar2 = DAT_00b3f984;
  puVar1 = *(undefined4 **)(in_ECX + 0x28);
  if (puVar1 != DAT_00b3f984) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x28) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  puVar2 = DAT_00b3f998;
  puVar1 = *(undefined4 **)(in_ECX + 0x2c);
  if (puVar1 != DAT_00b3f998) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x2c) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  return;
}



void FUN_007319e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca86e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a80984;
  _eh_vector_constructor_iterator_(in_ECX + 2,4,10,FUN_007c88a0,FUN_007016a0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_007317b0(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00731a70(byte param_1)

{
  FUN_00731700();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00731a90(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != (int *)0x0) {
    iVar2 = FUN_00401f00(8);
    *param_2 = iVar2;
    *(int *)(iVar2 + 4) = param_1[1];
    iVar2 = *param_1;
    puVar1 = (undefined4 *)*param_2;
    while (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_00401f00(8);
      *puVar1 = puVar3;
      param_1 = (int *)*param_1;
      puVar3[1] = param_1[1];
      puVar1 = puVar3;
      iVar2 = *param_1;
    }
    *puVar1 = 0;
  }
  return;
}



void FUN_00731ae0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7e350;
  iVar1 = in_ECX[3];
  while (iVar1 != 0) {
    puVar2 = (undefined4 *)in_ECX[3];
    in_ECX[3] = *puVar2;
    FUN_00401f20(puVar2);
    iVar1 = in_ECX[3];
  }
  iVar1 = in_ECX[4];
  while (iVar1 != 0) {
    puVar2 = (undefined4 *)in_ECX[4];
    in_ECX[4] = *puVar2;
    FUN_00401f20(puVar2);
    iVar1 = in_ECX[4];
  }
  iVar1 = in_ECX[5];
  while (iVar1 != 0) {
    puVar2 = (undefined4 *)in_ECX[5];
    in_ECX[5] = *puVar2;
    FUN_00401f20(puVar2);
    iVar1 = in_ECX[5];
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  return;
}



undefined4 * FUN_00731b60(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)FUN_00401f00(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_00a3fcf8;
    puVar1[1] = 0;
    InterlockedIncrement((LONG *)&DAT_00b3fd64);
    *puVar1 = &PTR_FUN_00a7e350;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(in_ECX + 8);
  FUN_00731a90(*(undefined4 *)(in_ECX + 0xc),puVar1 + 3);
  FUN_00731a90(*(undefined4 *)(in_ECX + 0x10),puVar1 + 4);
  FUN_00731a90(*(undefined4 *)(in_ECX + 0x14),puVar1 + 5);
  puVar1[6] = *(undefined4 *)(in_ECX + 0x18);
  puVar1[7] = *(undefined4 *)(in_ECX + 0x1c);
  return puVar1;
}



void FUN_00731bf0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_2 + 0xb0);
  puVar2 = (undefined4 *)*param_1;
  if ((puVar2 == (undefined4 *)0x0) || (iVar1 < *(int *)(puVar2[1] + 0xb0))) {
    piVar5 = (int *)FUN_00401f00(8);
    piVar5[1] = param_2;
    *piVar5 = *param_1;
    *param_1 = (int)piVar5;
    return;
  }
  if (iVar1 != *(int *)(puVar2[1] + 0xb0)) {
    for (puVar3 = (undefined4 *)*puVar2; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3
        ) {
      if (iVar1 <= *(int *)(puVar3[1] + 0xb0)) {
        if (iVar1 == *(int *)(puVar3[1] + 0xb0)) {
          return;
        }
        break;
      }
      puVar2 = puVar3;
    }
    puVar4 = (undefined4 *)FUN_00401f00(8);
    puVar4[1] = param_2;
    *puVar4 = puVar3;
    *puVar2 = puVar4;
  }
  return;
}



void FUN_00731c70(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_2 + 0xb0);
  piVar4 = (int *)*param_1;
  if ((piVar4 != (int *)0x0) && (*(int *)(piVar4[1] + 0xb0) <= iVar1)) {
    if (iVar1 == *(int *)(piVar4[1] + 0xb0)) {
      *param_1 = *piVar4;
      FUN_00401f20(piVar4);
      return;
    }
    piVar2 = (int *)*piVar4;
    if ((int *)*piVar4 != (int *)0x0) {
      while (piVar3 = piVar2, *(int *)(piVar3[1] + 0xb0) < iVar1) {
        piVar2 = (int *)*piVar3;
        piVar4 = piVar3;
        if ((int *)*piVar3 == (int *)0x0) {
          return;
        }
      }
      if (iVar1 == *(int *)(piVar3[1] + 0xb0)) {
        *piVar4 = *piVar3;
        FUN_00401f20(piVar3);
      }
    }
  }
  return;
}



void FUN_00731ce0(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x84))();
    if (iVar1 < 4) {
      FUN_00731bf0(in_ECX + 0xc,param_1);
      return;
    }
    switch(param_1[0x52]) {
    case 0:
      FUN_00731bf0(in_ECX + 0x10,param_1);
      *(undefined1 *)(in_ECX + 8) = 1;
      return;
    case 1:
      FUN_00731bf0(in_ECX + 0x14,param_1);
      *(undefined1 *)(in_ECX + 8) = 1;
      return;
    case 2:
      *(int **)(in_ECX + 0x18) = param_1;
      *(undefined1 *)(in_ECX + 8) = 1;
      return;
    case 3:
      *(int **)(in_ECX + 0x1c) = param_1;
    }
    *(undefined1 *)(in_ECX + 8) = 1;
  }
  return;
}



void FUN_00731d80(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x84))();
    if (iVar1 < 4) {
      FUN_00731c70(in_ECX + 0xc,param_1);
      return;
    }
    switch(param_1[0x52]) {
    case 0:
      FUN_00731c70(in_ECX + 0x10,param_1);
      break;
    case 1:
      FUN_00731c70(in_ECX + 0x14,param_1);
      break;
    case 2:
      if (param_1 == *(int **)(in_ECX + 0x18)) {
        *(undefined4 *)(in_ECX + 0x18) = 0;
      }
      break;
    case 3:
      if (param_1 == *(int **)(in_ECX + 0x1c)) {
        *(undefined4 *)(in_ECX + 0x1c) = 0;
      }
    }
    if ((((*(int *)(in_ECX + 0x10) == 0) && (*(int *)(in_ECX + 0x14) == 0)) &&
        (*(int *)(in_ECX + 0x18) == 0)) && (*(int *)(in_ECX + 0x1c) == 0)) {
      *(undefined1 *)(in_ECX + 8) = 0;
      return;
    }
    *(undefined1 *)(in_ECX + 8) = 1;
  }
  return;
}



void FUN_00731e40(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = param_1;
  *(undefined4 *)(in_ECX + 0xc) = param_2;
  return;
}



bool FUN_00731e60(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00700650(param_1);
  return cVar1 != '\0';
}



bool FUN_00731e80(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00700670(param_1);
  return cVar1 != '\0';
}



void FUN_00731ea0(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *in_ECX = &PTR_FUN_00a8098c;
  in_ECX[4] = 0;
  return;
}



void FUN_00731ed0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ca8a3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8098c;
  puVar1 = (undefined4 *)in_ECX[4];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
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
  local_4 = 0xffffffff;
  FUN_0055ace0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_00731f80(void)

{
  char cVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x10) == 0) && (DAT_00b3f928 != (int *)0x0)) {
    cVar1 = (**(code **)(*DAT_00b3f928 + 0x11c))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



void FUN_00732050(undefined4 param_1,undefined4 param_2)

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
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a8098c;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
  }
  puVar2[2] = param_1;
  puVar2[3] = param_2;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_007320d0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca8cb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_3 != (int *)0x0) {
    iVar2 = (**(code **)(*param_3 + 0xc))(uVar1);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_00401f00(0x14);
      uStack_4 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        FUN_007005d0();
        *puVar3 = &PTR_FUN_00a8098c;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
      }
      puVar3[3] = param_2;
      uStack_4 = 0xffffffff;
      puVar3[2] = param_1;
      FUN_0075fa90(param_3);
      FUN_0070bd60(param_3);
      *unaff_FS_OFFSET = local_c;
      return puVar3;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_00732190(byte param_1)

{
  FUN_00731ed0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007321b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007009a0(param_1);
  param_1 = FUN_0070f910(DAT_00b3ffc0);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00732200(uint param_1)

{
  void *_Src;
  void *_Dst;
  undefined4 *in_ECX;
  
  if (param_1 != in_ECX[2]) {
    if (param_1 < (uint)in_ECX[1]) {
      in_ECX[1] = param_1;
    }
    _Src = (void *)*in_ECX;
    in_ECX[2] = param_1;
    if (param_1 == 0) {
      *in_ECX = 0;
    }
    else {
      _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                                  (uint)((ulonglong)param_1 * 4));
      *in_ECX = _Dst;
      if (in_ECX[1] != 0) {
        _memcpy(_Dst,_Src,in_ECX[1] * 4);
        FUN_00401f20(_Src);
        return;
      }
    }
    FUN_00401f20(_Src);
  }
  return;
}



void FUN_00732280(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  
  param_2 = param_2 * (param_3 + 3U & 0xfffffffc);
  iVar1 = FUN_00401f00(param_2 + 4 + param_1 * 0xc);
  *(int *)(in_ECX + 0x50) = iVar1;
  iVar1 = iVar1 + param_2;
  *(int *)(in_ECX + 0x54) = iVar1;
  iVar1 = iVar1 + param_1 * 4;
  *(int *)(in_ECX + 0x58) = iVar1;
  *(int *)(in_ECX + 0x5c) = iVar1 + param_1 * 4;
  return;
}



void FUN_007322d0(void)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x50));
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007322f0(void)

{
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b40080);
  _DAT_00b400f8 = GetCurrentThreadId();
  _DAT_00b400fc = _DAT_00b400fc + 1;
  if (DAT_00b40000 == 0) {
    DAT_00b40000 = in_ECX;
  }
  if (DAT_00b40004 == 0) {
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  else {
    *(int *)(DAT_00b40004 + 0x20) = in_ECX;
    *(int *)(in_ECX + 0x1c) = DAT_00b40004;
  }
  DAT_00b40004 = in_ECX;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  _DAT_00b400fc = _DAT_00b400fc + -1;
  if (_DAT_00b400fc == 0) {
    _DAT_00b400f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b40080);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00732370(void)

{
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b40080);
  _DAT_00b400f8 = GetCurrentThreadId();
  _DAT_00b400fc = _DAT_00b400fc + 1;
  if (DAT_00b40000 == in_ECX) {
    DAT_00b40000 = *(int *)(in_ECX + 0x20);
  }
  if (DAT_00b40004 == in_ECX) {
    DAT_00b40004 = *(int *)(in_ECX + 0x1c);
  }
  if (*(int *)(in_ECX + 0x1c) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x20) + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  }
  _DAT_00b400fc = _DAT_00b400fc + -1;
  if (_DAT_00b400fc == 0) {
    _DAT_00b400f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b40080);
  return;
}



void FUN_00732400(void)

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
  *in_ECX = &PTR_FUN_00a809f4;
  local_4 = 0;
  FUN_00401f20(in_ECX[5],uVar1);
  if ((undefined4 *)in_ECX[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[6])(1);
  }
  FUN_00732370();
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00732480(int param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (in_ECX != param_1) {
    if (*(undefined4 **)(in_ECX + 0x18) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x18))(1);
      *(undefined4 *)(in_ECX + 0x18) = 0;
    }
    *(undefined1 *)(in_ECX + 8) = *(undefined1 *)(param_1 + 8);
    *(undefined4 *)(in_ECX + 0x10) = 1;
    if (*(int *)(in_ECX + 0xc) != *(int *)(param_1 + 0xc)) {
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x14));
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(in_ECX + 0xc) = uVar1;
      lVar2 = (ulonglong)uVar1 * 4;
      uVar3 = FUN_00401f00(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
      *(undefined4 *)(in_ECX + 0x14) = uVar3;
    }
    _memcpy(*(void **)(in_ECX + 0x14),*(void **)(param_1 + 0x14),*(int *)(param_1 + 0xc) * 4);
  }
  return;
}



undefined4 * FUN_00732510(void)

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
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a809f4;
    *(undefined1 *)(puVar2 + 2) = 0;
    puVar2[3] = 0;
    puVar2[5] = 0;
    puVar2[4] = 1;
    puVar2[6] = 0;
    FUN_007322f0();
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_00732670(byte param_1)

{
  FUN_00732400();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00732690(int param_1)

{
  longlong lVar1;
  uint uVar2;
  void *_Dst;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca4b8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar2);
  *in_ECX = &PTR_FUN_00a809f4;
  *(undefined1 *)(in_ECX + 2) = *(undefined1 *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0xc);
  in_ECX[3] = uVar2;
  lVar1 = (ulonglong)uVar2 * 4;
  local_4 = 0;
  in_ECX[4] = 1;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  in_ECX[5] = _Dst;
  _memcpy(_Dst,*(void **)(param_1 + 0x14),*(int *)(param_1 + 0xc) * 4);
  in_ECX[6] = 0;
  if (DAT_00b3f928 != (int *)0x0) {
    (**(code **)(*DAT_00b3f928 + 0x118))();
  }
  FUN_007322f0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00732750(undefined1 param_1,uint param_2,void *param_3)

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
  *(undefined1 *)(in_ECX + 2) = param_1;
  in_ECX[3] = param_2;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a809f4;
  in_ECX[4] = 1;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_2 * 4));
  in_ECX[5] = _Dst;
  _memcpy(_Dst,param_3,in_ECX[3] * 4);
  in_ECX[6] = 0;
  if (DAT_00b3f928 != (int *)0x0) {
    (**(code **)(*DAT_00b3f928 + 0x118))();
  }
  FUN_007322f0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_00732810(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint auStack_8 [2];
  
  iVar1 = param_1;
  FUN_007008a0(param_1);
  auStack_8[1] = 1;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,1,auStack_8 + 1,1);
  *(bool *)(in_ECX + 8) = (char)param_1 != '\0';
  auStack_8[1] = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),auStack_8,4,auStack_8 + 1,1);
  if (auStack_8[0] != *(uint *)(in_ECX + 0xc)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x14));
    *(uint *)(in_ECX + 0xc) = auStack_8[0];
    uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)auStack_8[0] * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)auStack_8[0] * 4));
    *(undefined4 *)(in_ECX + 0x14) = uVar2;
  }
  auStack_8[1] = 1;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))
            (*(int *)(iVar1 + 0x21c),*(undefined4 *)(in_ECX + 0x14),*(int *)(in_ECX + 0xc) * 4,
             auStack_8 + 1,1);
  if (DAT_00b3f928 != (int *)0x0) {
    (**(code **)(*DAT_00b3f928 + 0x118))();
  }
  return;
}



void FUN_00732980(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007009a0(param_1);
  param_1 = FUN_0070f910(DAT_00b40008);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_007329d0(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  *in_ECX = param_1;
  if (param_1 != 0) {
    iVar1 = FUN_00401f00(param_1);
    in_ECX[1] = iVar1;
    in_ECX[2] = iVar1;
    in_ECX[3] = 0;
    return;
  }
  in_ECX[1] = 0;
  in_ECX[2] = in_ECX[1];
  in_ECX[3] = 0;
  return;
}



void FUN_00732a20(void)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  return;
}



void FUN_00732a30(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca8f8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00728670(param_1,param_2,0,param_3,param_4,param_5,param_6);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a80a44;
  if (param_7 == 0) {
    uVar3 = FUN_00401f00(param_1 & 0xffff,uVar2);
    in_ECX[0x10] = uVar3;
    uVar1 = 0;
    if ((ushort)param_1 != 0) {
      iVar4 = 0;
      do {
        *(byte *)(iVar4 + in_ECX[0x10]) = ~(byte)uVar1 & 1;
        uVar1 = uVar1 + 1;
        iVar4 = iVar4 + 1;
      } while (uVar1 < (ushort)param_1);
    }
  }
  else {
    in_ECX[0x10] = param_7;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_00732b00(void)

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
    FUN_00728770();
    *puVar2 = &PTR_FUN_00a80a44;
    puVar2[0x10] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 thunk_FUN_00728f50(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00700650(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((*(int **)(in_ECX + 0x34) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x24))(param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



undefined1 FUN_00732b90(int param_1)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  int in_ECX;
  
  cVar2 = FUN_00728f90(param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  iVar1 = *(int *)(in_ECX + 0x40);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      return 0;
    }
    if (iVar1 != 0) goto LAB_00732bc7;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    return 0;
  }
LAB_00732bc7:
  if (iVar1 != 0) {
    uVar3 = 0;
    if (*(ushort *)(in_ECX + 8) != 0) {
      do {
        if (*(char *)((uint)uVar3 + iVar1) != *(char *)((uint)uVar3 + *(int *)(param_1 + 0x40))) {
          return 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(in_ECX + 8));
    }
  }
  return 1;
}



void FUN_00732c10(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a80a44;
  FUN_00401f20(in_ECX[0x10]);
  FUN_007291e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00732d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined2 param_8)

{
  undefined4 *in_ECX;
  
  FUN_00728670(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  *in_ECX = &PTR_FUN_00a80aac;
  *(undefined2 *)(in_ECX + 0x10) = param_8;
  return;
}



void FUN_00732dd0(void)

{
  undefined4 *in_ECX;
  
  FUN_00728770();
  *in_ECX = &PTR_FUN_00a80aac;
  *(undefined2 *)(in_ECX + 0x10) = 0;
  return;
}



void FUN_00732df0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a80aac;
  FUN_007291e0();
  return;
}



void thunk_FUN_00728f20(int param_1)

{
  undefined4 uVar1;
  
  FUN_0068f970(param_1);
  if (0xa030006 < *(uint *)(param_1 + 0xd8)) {
    uVar1 = FUN_007124a0();
    FUN_0075fa90(uVar1);
  }
  return;
}



undefined2 FUN_00732e10(int param_1)

{
  undefined2 uVar1;
  int in_ECX;
  
  uVar1 = FUN_00728f90(param_1);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  return CONCAT11((char)((ushort)*(short *)(in_ECX + 0x40) >> 8),
                  *(short *)(in_ECX + 0x40) == *(short *)(param_1 + 0x40));
}



void FUN_00732e40(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a80aac;
  FUN_007291e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00732e70(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00729450(param_1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x40,2,&param_1,1);
  return;
}



void FUN_00732eb0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_007299a0(param_1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x40,2,&param_1,1);
  return;
}



void FUN_00732ef0(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00729d00(param_1);
  param_1 = FUN_0070f910(DAT_00b40108);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070faa0("m_usTriangles",*(undefined2 *)(in_ECX + 0x40));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00732fe2) */

void FUN_00732f80(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  float *pfVar10;
  int in_ECX;
  ushort uVar11;
  ushort uVar12;
  int iVar13;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00728280(1);
  iVar13 = *(int *)(in_ECX + 0x4c);
  uVar8 = 0;
  if (*(short *)(in_ECX + 0x44) != 0) {
    do {
      iVar3 = (uint)uVar8 * 2;
      uVar7 = 2;
      if (2 < *(ushort *)(iVar3 + *(int *)(in_ECX + 0x48))) {
        do {
          uVar9 = (uint)uVar7;
          uVar1 = *(ushort *)(iVar13 + -4 + uVar9 * 2);
          if ((uVar7 & 1) == 0) {
            uVar11 = *(ushort *)(iVar13 + -2 + uVar9 * 2);
            uVar12 = *(ushort *)(iVar13 + uVar9 * 2);
          }
          else {
            uVar11 = *(ushort *)(iVar13 + uVar9 * 2);
            uVar12 = *(ushort *)(iVar13 + -2 + uVar9 * 2);
          }
          if (((uVar1 != uVar11) && (uVar11 != uVar12)) && (uVar12 != uVar1)) {
            iVar2 = *(int *)(in_ECX + 0x1c);
            iVar4 = (uint)uVar11 * 0xc;
            iVar5 = (uint)uVar1 * 0xc;
            local_c = *(float *)(iVar4 + iVar2) - *(float *)(iVar2 + iVar5);
            pfVar10 = (float *)(iVar4 + 8 + iVar2);
            iVar6 = (uint)uVar12 * 0xc;
            local_8 = *(float *)(iVar4 + 4 + iVar2) - *(float *)(iVar2 + 4 + iVar5);
            local_4 = *pfVar10 - *(float *)(iVar2 + 8 + iVar5);
            local_18 = *(float *)(iVar6 + iVar2) - *(float *)(iVar4 + iVar2);
            local_14 = *(float *)(iVar6 + 4 + iVar2) - *(float *)(iVar4 + 4 + iVar2);
            local_10 = *(float *)(iVar6 + 8 + iVar2) - *pfVar10;
            local_24 = local_8 * local_10 - local_4 * local_14;
            local_20 = local_18 * local_4 - local_c * local_10;
            local_1c = local_14 * local_c - local_8 * local_18;
            FUN_004bfaa0(&local_24);
            pfVar10 = (float *)(*(int *)(in_ECX + 0x20) + iVar5);
            *pfVar10 = local_24 + *(float *)(*(int *)(in_ECX + 0x20) + iVar5);
            pfVar10[1] = local_20 + pfVar10[1];
            pfVar10[2] = local_1c + pfVar10[2];
            pfVar10 = (float *)(*(int *)(in_ECX + 0x20) + iVar4);
            *pfVar10 = *(float *)(*(int *)(in_ECX + 0x20) + iVar4) + local_24;
            pfVar10[1] = pfVar10[1] + local_20;
            pfVar10[2] = pfVar10[2] + local_1c;
            pfVar10 = (float *)(*(int *)(in_ECX + 0x20) + iVar6);
            *pfVar10 = *(float *)(*(int *)(in_ECX + 0x20) + iVar6) + local_24;
            pfVar10[1] = local_20 + pfVar10[1];
            pfVar10[2] = local_1c + pfVar10[2];
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(iVar3 + *(int *)(in_ECX + 0x48)));
      }
      uVar8 = uVar8 + 1;
      iVar13 = iVar13 + (uint)*(ushort *)(iVar3 + *(int *)(in_ECX + 0x48)) * 2;
    } while (uVar8 < *(ushort *)(in_ECX + 0x44));
  }
  FUN_00725890(*(undefined4 *)(in_ECX + 0x20),*(undefined2 *)(in_ECX + 8),0xc);
  *(ushort *)(in_ECX + 0x2e) = *(ushort *)(in_ECX + 0x2e) | 2;
  return;
}



void FUN_007331d0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a80b3c;
  FUN_0055ace0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



float10 FUN_00733200(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = param_1 + param_2 >> 1;
  iVar1 = *(int *)(in_ECX + 0x2c);
  if (*(float *)(*(int *)(in_ECX + 0x2c) + iVar3 * 4) <=
      *(float *)(*(int *)(in_ECX + 0x2c) + param_1 * 4)) {
    iVar2 = *(int *)(in_ECX + 0x2c);
    if (*(float *)(iVar1 + param_1 * 4) < *(float *)(iVar1 + param_2 * 4)) {
      return (float10)*(float *)(iVar2 + param_1 * 4);
    }
    if (*(float *)(iVar2 + param_2 * 4) <= *(float *)(iVar2 + iVar3 * 4)) {
      iVar2 = *(int *)(in_ECX + 0x2c);
      goto LAB_00733287;
    }
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x2c);
    if (*(float *)(iVar1 + iVar3 * 4) < *(float *)(iVar1 + param_2 * 4)) {
LAB_00733287:
      return (float10)*(float *)(iVar2 + iVar3 * 4);
    }
    if (*(float *)(iVar2 + param_2 * 4) <= *(float *)(iVar2 + param_1 * 4)) {
      return (float10)*(float *)(*(int *)(in_ECX + 0x2c) + param_1 * 4);
    }
  }
  return (float10)*(float *)(*(int *)(in_ECX + 0x2c) + param_2 * 4);
}



bool FUN_00733290(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = thunk_FUN_00700670(param_1);
  return cVar1 != '\0';
}



void FUN_007332e0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  iVar2 = DAT_00b3f928;
  if (DAT_00b3f928 == 0) {
    return;
  }
  (**(code **)(*in_ECX + 0x5c))();
  iVar3 = in_ECX[8];
  in_ECX[0xc] = iVar3;
  if (iVar3 != 0) {
    in_ECX[0xc] = iVar3 + -1;
    piVar1 = *(int **)(in_ECX[10] + (iVar3 + -1) * 4);
    while (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x84))(iVar2);
      if (in_ECX[0xc] == 0) break;
      iVar3 = in_ECX[0xc] + -1;
      in_ECX[0xc] = iVar3;
      piVar1 = *(int **)(in_ECX[10] + iVar3 * 4);
    }
  }
  if (in_ECX[6] != 0) {
    do {
      piVar1 = (int *)in_ECX[4];
      iVar2 = *piVar1;
      in_ECX[4] = iVar2;
      if (iVar2 == 0) {
        in_ECX[5] = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      (**(code **)(in_ECX[3] + 8))(piVar1);
      in_ECX[6] = in_ECX[6] + -1;
    } while (in_ECX[6] != 0);
  }
  FUN_00733830();
  return;
}



void FUN_00733380(int param_1,int param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  if (param_1 < param_2) {
    do {
      iVar6 = param_1 + -1;
      iVar5 = param_2 + 1;
      fVar7 = (float10)FUN_00733200(param_1,param_2);
      while( true ) {
        iVar3 = *(int *)(in_ECX + 0x2c) + iVar5 * 4;
        do {
          iVar4 = iVar5;
          pfVar1 = (float *)(iVar3 + -4);
          iVar3 = iVar3 + -4;
          iVar5 = iVar4 + -1;
        } while ((float)fVar7 < *pfVar1);
        iVar3 = *(int *)(in_ECX + 0x2c) + iVar6 * 4;
        do {
          pfVar1 = (float *)(iVar3 + 4);
          iVar3 = iVar3 + 4;
          iVar6 = iVar6 + 1;
        } while (*pfVar1 < (float)fVar7);
        if (iVar5 <= iVar6) break;
        iVar3 = *(int *)(in_ECX + 0x28);
        uVar2 = *(undefined4 *)(iVar3 + iVar6 * 4);
        *(undefined4 *)(iVar3 + iVar6 * 4) = *(undefined4 *)(iVar3 + iVar5 * 4);
        *(undefined4 *)(*(int *)(in_ECX + 0x28) + iVar5 * 4) = uVar2;
        iVar3 = *(int *)(in_ECX + 0x2c);
        uVar2 = *(undefined4 *)(iVar3 + iVar6 * 4);
        *(undefined4 *)(iVar3 + iVar6 * 4) = *(undefined4 *)(iVar3 + iVar5 * 4);
        *(undefined4 *)(*(int *)(in_ECX + 0x2c) + iVar5 * 4) = uVar2;
      }
      if (iVar5 == param_2) {
        param_2 = iVar4 + -2;
        iVar4 = param_1;
      }
      else {
        FUN_00733380(param_1,iVar5);
      }
      param_1 = iVar4;
    } while (iVar4 < param_2);
  }
  return;
}



void FUN_00733440(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca928;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a80bac;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a80b9c;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007334b0(byte param_1)

{
  FUN_00733440();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007334d0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ca963;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a80bcc;
  local_4 = 1;
  FUN_00401f20(in_ECX[10],uVar3);
  FUN_00401f20(in_ECX[0xb]);
  if (in_ECX[6] != 0) {
    do {
      piVar1 = (int *)in_ECX[4];
      iVar2 = *piVar1;
      in_ECX[4] = iVar2;
      if (iVar2 == 0) {
        in_ECX[5] = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      (**(code **)(in_ECX[3] + 8))(piVar1);
      in_ECX[6] = in_ECX[6] + -1;
    } while (in_ECX[6] != 0);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00733440();
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a80b3c;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007335a0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  
  uVar1 = param_1[1];
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = *(undefined4 *)(*param_1 + uVar4 * 4);
      puVar3 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0xc) + 4))();
      puVar3[2] = uVar2;
      *puVar3 = 0;
      puVar3[1] = *(undefined4 *)(in_ECX + 0x14);
      if (*(undefined4 **)(in_ECX + 0x14) == (undefined4 *)0x0) {
        *(undefined4 **)(in_ECX + 0x10) = puVar3;
      }
      else {
        **(undefined4 **)(in_ECX + 0x14) = puVar3;
      }
      *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
      uVar4 = uVar4 + 1;
      *(undefined4 **)(in_ECX + 0x14) = puVar3;
    } while (uVar4 < uVar1);
  }
  return;
}



void FUN_00733600(void)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  undefined4 *puVar9;
  
  if (*(int *)(in_ECX + 0x1c) == 0) {
    *(int *)(in_ECX + 0x1c) = in_ECX + 0xc;
  }
  iVar5 = *(int *)(*(int *)(in_ECX + 0x1c) + 0xc);
  *(int *)(in_ECX + 0x20) = iVar5;
  if (iVar5 != 0) {
    if (*(int *)(in_ECX + 0x24) < iVar5) {
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x28));
      *(uint *)(in_ECX + 0x24) = *(uint *)(in_ECX + 0x20);
      lVar6 = (ulonglong)*(uint *)(in_ECX + 0x20) * 4;
      uVar7 = FUN_00401f00(-(uint)((int)((ulonglong)lVar6 >> 0x20) != 0) | (uint)lVar6);
      *(undefined4 *)(in_ECX + 0x28) = uVar7;
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x2c));
      lVar6 = (ulonglong)*(uint *)(in_ECX + 0x24) * 4;
      uVar7 = FUN_00401f00(-(uint)((int)((ulonglong)lVar6 >> 0x20) != 0) | (uint)lVar6);
      *(undefined4 *)(in_ECX + 0x2c) = uVar7;
    }
    puVar9 = *(undefined4 **)(*(int *)(in_ECX + 0x1c) + 4);
    iVar5 = *(int *)(in_ECX + 8);
    fVar2 = *(float *)(iVar5 + 100);
    iVar8 = 0;
    fVar3 = *(float *)(iVar5 + 0x70);
    fVar4 = *(float *)(iVar5 + 0x7c);
    if (0 < *(int *)(in_ECX + 0x20)) {
      do {
        puVar1 = puVar9 + 2;
        puVar9 = (undefined4 *)*puVar9;
        *(undefined4 *)(*(int *)(in_ECX + 0x28) + iVar8 * 4) = *puVar1;
        iVar5 = *(int *)(*(int *)(in_ECX + 0x28) + iVar8 * 4);
        iVar8 = iVar8 + 1;
        *(float *)(*(int *)(in_ECX + 0x2c) + -4 + iVar8 * 4) =
             *(float *)(iVar5 + 0x28) * fVar4 +
             *(float *)(iVar5 + 0x20) * fVar2 + *(float *)(iVar5 + 0x24) * fVar3;
      } while (iVar8 < *(int *)(in_ECX + 0x20));
    }
    FUN_00733380(0,*(int *)(in_ECX + 0x20) + -1);
  }
  return;
}



void FUN_00733710(void)

{
  undefined4 *in_ECX;
  
  FUN_00733810();
  *in_ECX = &PTR_FUN_00a80bcc;
  in_ECX[6] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[3] = &PTR_FUN_00a80bbc;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  return;
}



void FUN_00733750(byte param_1)

{
  FUN_007334d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00733770(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x34,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00733810();
    *puVar2 = &PTR_FUN_00a80bcc;
    puVar2[6] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[3] = &PTR_FUN_00a80bbc;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00700770(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00733810(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  *in_ECX = &PTR_FUN_00a80b3c;
  in_ECX[2] = 0;
  return;
}



void FUN_00733830(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = 0;
  return;
}



bool FUN_00733840(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 8) != 0;
}



void thunk_FUN_00700770(undefined4 param_1)

{
  undefined4 in_ECX;
  
  FUN_00452570(in_ECX,param_1);
  return;
}



void FUN_00733880(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a80c5c;
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007338b0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca988;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a80c70;
  local_4 = 0;
  FUN_00713c60(uVar1);
  *in_ECX = &PTR_FUN_00a80c5c;
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00733940(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca988;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a80c5c;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a80c70;
  FUN_00713a30(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007339c0(byte param_1)

{
  FUN_007338b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int * FUN_007339e0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  DWORD DVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x80);
  EnterCriticalSection(lpCriticalSection);
  DVar3 = GetCurrentThreadId();
  *(int *)(in_ECX + 0xfc) = *(int *)(in_ECX + 0xfc) + 1;
  *(DWORD *)(in_ECX + 0xf8) = DVar3;
  FUN_00712930();
  (**(code **)(*(int *)(in_ECX + 0x100) + 4))(param_1);
  if (*(int *)(in_ECX + 0x310) != 1) {
    piVar1 = (int *)(in_ECX + 0xfc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(in_ECX + 0xf8) = 0;
    }
    LeaveCriticalSection(lpCriticalSection);
    return (int *)0x0;
  }
  piVar1 = (int *)**(int **)(in_ECX + 0x308);
  if (piVar1 != (int *)0x0) {
    for (puVar4 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00b3fad4) {
        piVar2 = (int *)(in_ECX + 0xfc);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          *(undefined4 *)(in_ECX + 0xf8) = 0;
        }
        LeaveCriticalSection(lpCriticalSection);
        return piVar1;
      }
    }
  }
  piVar1 = (int *)(in_ECX + 0xfc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(in_ECX + 0xf8) = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  return (int *)0x0;
}



undefined4
FUN_00733aa0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int *in_ECX;
  int iVar4;
  int unaff_EBX;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 *unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca9b8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)(**(code **)(*in_ECX + 8))(param_1,0,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    *unaff_FS_OFFSET = unaff_EBX;
    return 0;
  }
  InterlockedIncrement(puVar2 + 1);
  *unaff_retaddr = *(undefined4 *)puVar2[0x15];
  *param_1 = *(undefined4 *)puVar2[0x16];
  puVar5 = puVar2 + 2;
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_2 = *puVar5;
    puVar5 = puVar5 + 1;
    param_2 = param_2 + 1;
  }
  *(bool *)param_3 = 1 < (uint)puVar2[0x18];
  *param_4 = puVar2[0x1b];
  local_c = -1;
  LVar3 = InterlockedDecrement(puVar2 + 1);
  if (LVar3 == 0) {
    (**(code **)*puVar2)(1);
  }
  *unaff_FS_OFFSET = unaff_EBX;
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00733ca0(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_10 [4];
  byte local_c [8];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_10;
  pbVar2 = *(byte **)(in_ECX + 8);
  local_c[0] = *pbVar2;
  uVar5 = (uint)local_c[0];
  *(byte **)(in_ECX + 8) = pbVar2 + 1;
  local_c[1] = pbVar2[1];
  uVar4 = (uint)local_c[1];
  *(byte **)(in_ECX + 8) = pbVar2 + 2;
  if (uVar4 < uVar5) {
    uVar1 = uVar4 + uVar5 * 6;
    uVar3 = uVar1 / 7;
    local_c[2] = (char)((uVar1 - uVar3 >> 1) + uVar3 >> 2);
    uVar1 = uVar5 * 5 + uVar4 * 2;
    uVar3 = uVar1 / 7;
    local_c[3] = (char)((uVar1 - uVar3 >> 1) + uVar3 >> 2);
    uVar1 = uVar4 * 3 + uVar5 * 4;
    uVar3 = uVar1 / 7;
    local_c[4] = (char)((uVar1 - uVar3 >> 1) + uVar3 >> 2);
    uVar1 = uVar5 * 3 + uVar4 * 4;
    uVar3 = uVar1 / 7;
    local_c[5] = (char)((uVar1 - uVar3 >> 1) + uVar3 >> 2);
    uVar1 = uVar4 * 5 + uVar5 * 2;
    uVar3 = uVar1 / 7;
    local_c[6] = (char)((uVar1 - uVar3 >> 1) + uVar3 >> 2);
    uVar5 = uVar5 + uVar4 * 6;
    uVar4 = uVar5 / 7;
    local_c[7] = (char)((uVar5 - uVar4 >> 1) + uVar4 >> 2);
  }
  else {
    local_c[2] = (char)((uVar4 + uVar5 * 4) / 5);
    local_c[3] = (char)((uVar5 * 3 + uVar4 * 2) / 5);
    local_c[4] = (char)((uVar4 * 3 + uVar5 * 2) / 5);
    local_c[5] = (char)((uVar5 + uVar4 * 4) / 5);
    local_c[6] = 0;
    local_c[7] = 0xff;
  }
  *param_1 = local_c[pbVar2[2] & 7];
  param_1[4] = local_c[**(byte **)(in_ECX + 8) >> 3 & 7];
  param_1[8] = local_c[((*(byte **)(in_ECX + 8))[1] & 1) * 4 + (uint)(**(byte **)(in_ECX + 8) >> 6)]
  ;
  param_1[0xc] = local_c[*(byte *)(*(int *)(in_ECX + 8) + 1) >> 1 & 7];
  param_1[0x10] = local_c[*(byte *)(*(int *)(in_ECX + 8) + 1) >> 4 & 7];
  param_1[0x14] =
       local_c[(*(byte *)(*(int *)(in_ECX + 8) + 2) & 3) * 2 +
               (uint)(*(byte *)(*(int *)(in_ECX + 8) + 1) >> 7)];
  param_1[0x18] = local_c[*(byte *)(*(int *)(in_ECX + 8) + 2) >> 2 & 7];
  param_1[0x1c] = local_c[*(byte *)(*(int *)(in_ECX + 8) + 2) >> 5];
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 3;
  param_1[0x20] = local_c[**(byte **)(in_ECX + 8) & 7];
  param_1[0x24] = local_c[**(byte **)(in_ECX + 8) >> 3 & 7];
  param_1[0x28] =
       local_c[((*(byte **)(in_ECX + 8))[1] & 1) * 4 + (uint)(**(byte **)(in_ECX + 8) >> 6)];
  param_1[0x2c] = local_c[*(byte *)(*(int *)(in_ECX + 8) + 1) >> 1 & 7];
  param_1[0x30] = local_c[*(byte *)(*(int *)(in_ECX + 8) + 1) >> 4 & 7];
  param_1[0x34] =
       local_c[(*(byte *)(*(int *)(in_ECX + 8) + 2) & 3) * 2 +
               (uint)(*(byte *)(*(int *)(in_ECX + 8) + 1) >> 7)];
  param_1[0x38] = local_c[*(byte *)(*(int *)(in_ECX + 8) + 2) >> 2 & 7];
  param_1[0x3c] = local_c[*(byte *)(*(int *)(in_ECX + 8) + 2) >> 5];
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 3;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00733f90(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  ushort uVar4;
  int in_ECX;
  ushort uVar5;
  int iVar6;
  byte local_10 [6];
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_10;
  pbVar2 = *(byte **)(in_ECX + 8);
  uVar4 = (ushort)pbVar2[1] * 0x100 + (ushort)*pbVar2;
  *(byte **)(in_ECX + 8) = pbVar2 + 2;
  uVar5 = (ushort)pbVar2[3] * 0x100 + (ushort)pbVar2[2];
  local_10[0] = (byte)(uVar4 >> 8) & 0xf8;
  local_10[2] = (char)uVar4 * '\b';
  local_10[3] = (byte)(uVar5 >> 8) & 0xf8;
  local_10[5] = (char)uVar5 * '\b';
  local_10[4] = (byte)(uVar5 >> 3) & 0xfe;
  *(byte **)(in_ECX + 8) = pbVar2 + 4;
  local_a = (char)(((uint)local_10[3] + (uint)local_10[0] * 2) / 3);
  local_10[1] = (byte)(uVar4 >> 3) & 0xfe;
  local_9 = (char)(((uint)local_10[4] + (uint)local_10[1] * 2) / 3);
  local_8 = (char)(((uint)local_10[5] + (uint)local_10[2] * 2) / 3);
  local_7 = (char)(((uint)local_10[0] + (uint)local_10[3] * 2) / 3);
  local_6 = (char)(((uint)local_10[1] + (uint)local_10[4] * 2) / 3);
  local_5 = (char)(((uint)local_10[2] + (uint)local_10[5] * 2) / 3);
  iVar6 = 4;
  do {
    bVar1 = **(byte **)(in_ECX + 8);
    iVar3 = (bVar1 & 3) * 3;
    *param_1 = local_10[iVar3];
    param_1[1] = local_10[iVar3 + 1];
    param_1[2] = local_10[iVar3 + 2];
    iVar3 = (bVar1 >> 2 & 3) * 3;
    param_1[4] = local_10[iVar3];
    param_1[5] = local_10[iVar3 + 1];
    param_1[6] = local_10[iVar3 + 2];
    iVar3 = (bVar1 >> 4 & 3) * 3;
    param_1[8] = local_10[iVar3];
    param_1[9] = local_10[iVar3 + 1];
    param_1[10] = local_10[iVar3 + 2];
    iVar3 = (uint)(bVar1 >> 6) * 3;
    param_1[0xc] = local_10[iVar3];
    bVar1 = local_10[iVar3 + 2];
    param_1[0xd] = local_10[iVar3 + 1];
    param_1[0xe] = bVar1;
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
    param_1 = param_1 + 0x10;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00734170(byte *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int in_ECX;
  ushort uVar6;
  int iVar7;
  ushort uVar8;
  undefined1 local_1c [8];
  byte local_14 [7];
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_1c;
  pbVar5 = *(byte **)(in_ECX + 8);
  uVar6 = (ushort)pbVar5[1] * 0x100 + (ushort)*pbVar5;
  *(byte **)(in_ECX + 8) = pbVar5 + 2;
  uVar8 = (ushort)pbVar5[3] * 0x100 + (ushort)pbVar5[2];
  *(byte **)(in_ECX + 8) = pbVar5 + 4;
  local_14[2] = (char)uVar6 << 3;
  local_14[0] = (byte)(uVar6 >> 8) & 0xf8;
  local_14[4] = (byte)(uVar8 >> 8) & 0xf8;
  local_14[5] = (byte)(uVar8 >> 3) & 0xfe;
  local_14[1] = (byte)(uVar6 >> 3) & 0xfe;
  local_14[6] = (char)uVar8 * '\b';
  local_14[3] = 0xff;
  local_d = 0xff;
  local_9 = 0xff;
  if (uVar8 < uVar6) {
    local_c = (char)(((uint)local_14[4] + (uint)local_14[0] * 2) / 3);
    local_b = (char)(((uint)local_14[5] + (uint)local_14[1] * 2) / 3);
    local_a = (char)(((uint)local_14[6] + (uint)local_14[2] * 2) / 3);
    local_8 = (char)(((uint)local_14[0] + (uint)local_14[4] * 2) / 3);
    local_7 = (char)(((uint)local_14[1] + (uint)local_14[5] * 2) / 3);
    local_6 = (char)(((uint)local_14[2] + (uint)local_14[6] * 2) / 3);
    local_5 = 0xff;
  }
  else {
    local_c = (undefined1)((uint)local_14[4] + (uint)local_14[0] >> 1);
    local_b = (undefined1)((uint)local_14[5] + (uint)local_14[1] >> 1);
    local_a = (undefined1)((uint)local_14[6] + (uint)local_14[2] >> 1);
    local_8 = local_c;
    local_7 = local_b;
    local_6 = local_a;
    local_5 = 0;
  }
  iVar7 = 4;
  do {
    bVar2 = **(byte **)(in_ECX + 8);
    iVar1 = (bVar2 & 3) * 4;
    *param_1 = local_14[(bVar2 & 3) * 4];
    param_1[1] = local_14[iVar1 + 1];
    bVar3 = local_14[iVar1 + 2];
    param_1[3] = local_14[iVar1 + 3];
    iVar1 = (bVar2 >> 2 & 3) * 4;
    param_1[2] = bVar3;
    param_1[4] = local_14[iVar1];
    param_1[5] = local_14[iVar1 + 1];
    bVar3 = local_14[iVar1 + 2];
    param_1[7] = local_14[iVar1 + 3];
    iVar1 = (bVar2 >> 4 & 3) * 4;
    param_1[8] = local_14[iVar1];
    param_1[9] = local_14[iVar1 + 1];
    bVar4 = local_14[iVar1 + 2];
    param_1[0xb] = local_14[iVar1 + 3];
    param_1[10] = bVar4;
    iVar1 = (uint)(bVar2 >> 6) * 4;
    param_1[0xc] = local_14[(uint)(bVar2 >> 6) * 4];
    param_1[0xd] = local_14[iVar1 + 1];
    bVar2 = local_14[iVar1 + 2];
    bVar4 = local_14[iVar1 + 3];
    param_1[6] = bVar3;
    param_1[0xe] = bVar2;
    param_1[0xf] = bVar4;
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
    param_1 = param_1 + 0x10;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007343e0(void *param_1,int param_2)

{
  size_t _Size;
  undefined4 *in_ECX;
  undefined1 *_Src;
  undefined1 auStack_48 [4];
  undefined1 local_44 [3];
  undefined1 local_41 [61];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_48;
  _Src = &stack0xffffffac;
  if ((code *)*in_ECX != (code *)0x0) {
    (*(code *)*in_ECX)(local_41);
  }
  (*(code *)in_ECX[1])(local_44);
  _Size = (int)param_1 * 4;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    _Src = _Src + 0x10;
    _memcpy(param_1,_Src,_Size);
    param_1 = (void *)((int)param_1 + in_ECX[3]);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_00734460(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  uint local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c [15];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca9eb;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_80;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff70;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = *(int *)(param_1 + 0xc);
  local_58 = param_1;
  if (iVar2 == 4) {
    *in_ECX = 0;
    in_ECX[1] = FUN_00734170;
  }
  else if (iVar2 == 5) {
    *in_ECX = &LAB_00733b70;
    in_ECX[1] = FUN_00733f90;
  }
  else {
    if (iVar2 != 6) {
      iVar2 = 0;
      goto LAB_007346e2;
    }
    *in_ECX = FUN_00733ca0;
    in_ECX[1] = FUN_00733f90;
  }
  local_64 = FUN_00401f00(0x70,uVar1);
  local_4 = 0;
  if (local_64 == 0) {
    local_7c = 0;
  }
  else {
    local_7c = FUN_0070e560(**(undefined4 **)(param_1 + 0x54),**(undefined4 **)(param_1 + 0x58),
                            &DAT_00b25e00,*(undefined4 *)(param_1 + 0x60),
                            *(undefined4 *)(param_1 + 0x6c));
  }
  uVar1 = *(uint *)(param_1 + 0x6c);
  local_6c = *(uint *)(param_1 + 0x60);
  local_4 = 0xffffffff;
  local_78 = 0;
  iVar2 = local_7c;
  local_64 = uVar1;
  if (uVar1 != 0) {
    do {
      local_74 = 0;
      if (local_6c != 0) {
        do {
          in_ECX[2] = *(int *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60) * 4) * local_78 +
                      *(int *)(*(int *)(param_1 + 0x5c) + local_74 * 4) + *(int *)(param_1 + 0x50);
          puVar4 = (undefined4 *)
                   (*(int *)(*(int *)(iVar2 + 0x5c) + *(int *)(iVar2 + 0x60) * 4) * local_78 +
                    *(int *)(*(int *)(iVar2 + 0x5c) + local_74 * 4) + *(int *)(iVar2 + 0x50));
          uVar1 = *(uint *)(*(int *)(param_1 + 0x54) + local_74 * 4);
          uVar3 = *(uint *)(*(int *)(param_1 + 0x58) + local_74 * 4);
          local_80 = uVar1 >> 2;
          local_70 = uVar3 & 3;
          uVar3 = uVar3 >> 2;
          uVar6 = uVar1 & 3;
          in_ECX[3] = uVar1 * 4;
          local_5c = uVar6;
          if (uVar3 != 0) {
            local_54 = uVar1 * 0xc;
            local_68 = uVar3;
            do {
              if (local_80 != 0) {
                local_60 = local_80;
                do {
                  puVar7 = &local_50;
                  if ((code *)*in_ECX != (code *)0x0) {
                    (*(code *)*in_ECX)((int)&local_50 + 3);
                  }
                  (*(code *)in_ECX[1])(&local_50);
                  iVar2 = 4;
                  puVar5 = puVar4;
                  do {
                    *puVar5 = *puVar7;
                    puVar5[1] = puVar7[1];
                    puVar5[2] = puVar7[2];
                    puVar5[3] = puVar7[3];
                    puVar5 = (undefined4 *)((int)puVar5 + in_ECX[3]);
                    puVar7 = puVar7 + 4;
                    iVar2 = iVar2 + -1;
                  } while (iVar2 != 0);
                  puVar4 = puVar4 + 4;
                  local_60 = local_60 - 1;
                } while (local_60 != 0);
                local_60 = 0;
                param_1 = local_58;
                uVar6 = local_5c;
              }
              if (uVar6 != 0) {
                FUN_007343e0(puVar4,uVar6,4);
                puVar4 = puVar4 + uVar6;
              }
              puVar4 = (undefined4 *)((int)puVar4 + local_54);
              local_68 = local_68 - 1;
            } while (local_68 != 0);
          }
          if (local_70 != 0) {
            for (; local_80 != 0; local_80 = local_80 - 1) {
              FUN_007343e0(puVar4,4,local_70);
              puVar4 = puVar4 + 4;
            }
            if (uVar6 != 0) {
              FUN_007343e0(puVar4,uVar6,local_70);
            }
          }
          local_74 = local_74 + 1;
          iVar2 = local_7c;
          uVar1 = local_64;
        } while (local_74 < local_6c);
      }
      local_78 = local_78 + 1;
    } while (local_78 < uVar1);
  }
LAB_007346e2:
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



/* WARNING: Removing unreachable block (ram,0x00734745) */
/* WARNING: Removing unreachable block (ram,0x00734789) */

void FUN_00734710(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 local_4;
  
  uVar2 = 0;
  *in_ECX = 0;
  in_ECX[1] = FUN_00733f90;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  puVar3 = (undefined1 *)((int)in_ECX + 0x11);
  do {
    local_4 = (undefined1)(int)ROUND(((double)(uVar2 & 0xf) / 15.0) * 255.0);
    puVar3[-1] = local_4;
    uVar1 = uVar2 >> 4;
    uVar2 = uVar2 + 1;
    local_4 = (undefined1)(int)ROUND(((double)(uVar1 & 0xf) / 15.0) * 255.0);
    *puVar3 = local_4;
    puVar3 = puVar3 + 2;
  } while (uVar2 < 0x100);
  return;
}



void FUN_00734a10(undefined1 *param_1,undefined1 *param_2)

{
  int in_ECX;
  uint uVar1;
  
  uVar1 = 0;
  if (*(short *)(in_ECX + 0x10e) != 0) {
    do {
      *param_2 = param_1[2];
      param_2[1] = param_1[1];
      param_2[2] = *param_1;
      uVar1 = uVar1 + 1;
      param_2 = param_2 + 3;
      param_1 = param_1 + 3;
    } while (uVar1 < *(ushort *)(in_ECX + 0x10e));
  }
  return;
}



void FUN_00734a60(undefined1 *param_1,undefined1 *param_2)

{
  int in_ECX;
  uint uVar1;
  
  uVar1 = 0;
  if (*(short *)(in_ECX + 0x10e) != 0) {
    do {
      *param_2 = param_1[2];
      param_2[1] = param_1[1];
      param_2[2] = *param_1;
      param_2[3] = param_1[3];
      uVar1 = uVar1 + 1;
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    } while (uVar1 < *(ushort *)(in_ECX + 0x10e));
  }
  return;
}



undefined4 FUN_00734ac0(char *param_1)

{
  int iVar1;
  
  iVar1 = __stricmp(param_1,".tga");
  if (iVar1 != 0) {
    iVar1 = __stricmp(param_1,".targa");
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}



void FUN_00734b00(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009caac8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a80c5c;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a80c84;
  FUN_0070f2e0(uVar1);
  *(undefined1 *)(in_ECX + 0x40) = 0;
  *(undefined1 *)((int)in_ECX + 0x101) = 0;
  *(undefined1 *)((int)in_ECX + 0x102) = 0;
  *(undefined2 *)(in_ECX + 0x41) = 0;
  *(undefined2 *)((int)in_ECX + 0x106) = 0;
  *(undefined1 *)(in_ECX + 0x42) = 0;
  *(undefined2 *)((int)in_ECX + 0x10a) = 0;
  *(undefined2 *)(in_ECX + 0x43) = 0;
  *(undefined2 *)((int)in_ECX + 0x10e) = 0;
  *(undefined2 *)(in_ECX + 0x44) = 0;
  *(undefined1 *)((int)in_ECX + 0x112) = 0;
  *(undefined1 *)((int)in_ECX + 0x113) = 0;
  *(undefined1 *)(in_ECX + 0x45) = 0;
  *(undefined1 *)((int)in_ECX + 0x115) = 0;
  *(undefined1 *)((int)in_ECX + 0x116) = 0;
  *(undefined1 *)((int)in_ECX + 0x117) = 0;
  *(undefined1 *)(in_ECX + 0x46) = 0;
  puVar3 = &DAT_00b25e48;
  puVar4 = in_ECX + 0x47;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  in_ECX[0x58] = 0;
  in_ECX[0x59] = 0;
  in_ECX[0x5a] = 0;
  in_ECX[0x5b] = 0;
  in_ECX[0x5c] = 0;
  in_ECX[0x5d] = 0;
  *(undefined1 *)(in_ECX + 0x5e) = 0;
  *(undefined1 *)((int)in_ECX + 0x179) = 0;
  *(undefined1 *)((int)in_ECX + 0x17a) = 0;
  *(undefined1 *)((int)in_ECX + 0x17b) = 0;
  *(undefined1 *)(in_ECX + 0x5f) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00734c30(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a80c84;
  FUN_00401f20(in_ECX[0x59]);
  FUN_00401f20(in_ECX[0x5b]);
  *in_ECX = &PTR_FUN_00a80c5c;
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00734c80(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_4;
  
  local_4 = 1;
  (**(code **)(param_1 + 4))(param_1,param_2,param_3,&local_4,1);
  return;
}



void FUN_00734cb0(int param_1,void *param_2)

{
  size_t _Size;
  int in_ECX;
  uint uVar1;
  uint uVar2;
  byte local_9;
  uint local_8;
  undefined4 local_4;
  
  local_8 = 0;
  if (*(short *)(in_ECX + 0x10e) != 0) {
    do {
      if (*(int *)(in_ECX + 0x174) == 0) {
        local_9 = 0;
        local_4 = 1;
        (**(code **)(param_1 + 4))(param_1,&local_9,1,&local_4,1);
        *(byte *)(in_ECX + 0x178) = local_9 >> 7;
        if ((char)local_9 < '\0') {
          *(uint *)(in_ECX + 0x174) = local_9 - 0x7f;
          *(undefined1 *)(in_ECX + 0x178) = 1;
          local_4 = 1;
          (**(code **)(param_1 + 4))
                    (param_1,in_ECX + 0x179,*(undefined1 *)(in_ECX + 0x114),&local_4,1);
        }
        else {
          *(undefined1 *)(in_ECX + 0x178) = 0;
          *(uint *)(in_ECX + 0x174) = local_9 + 1;
        }
      }
      uVar2 = *(ushort *)(in_ECX + 0x10e) - local_8;
      if (*(uint *)(in_ECX + 0x174) < uVar2) {
        uVar2 = *(uint *)(in_ECX + 0x174);
      }
      if (*(char *)(in_ECX + 0x178) == '\0') {
        local_4 = 1;
        (**(code **)(param_1 + 4))(param_1,param_2,*(byte *)(in_ECX + 0x114) * uVar2,&local_4,1);
        param_2 = (void *)((int)param_2 + *(byte *)(in_ECX + 0x114) * uVar2);
      }
      else if (uVar2 != 0) {
        _Size = (size_t)*(byte *)(in_ECX + 0x114);
        uVar1 = uVar2;
        do {
          _memcpy(param_2,(void *)(in_ECX + 0x179),_Size);
          _Size = (size_t)*(byte *)(in_ECX + 0x114);
          param_2 = (void *)((int)param_2 + _Size);
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      *(int *)(in_ECX + 0x174) = *(int *)(in_ECX + 0x174) - uVar2;
      local_8 = local_8 + uVar2;
    } while (local_8 < *(ushort *)(in_ECX + 0x10e));
  }
  return;
}



void FUN_00734e10(undefined4 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (*(uint *)(in_ECX + 0x168) < (uint)*(ushort *)(in_ECX + 0x106)) {
    *(uint *)(in_ECX + 0x168) = (uint)*(ushort *)(in_ECX + 0x106);
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x16c));
    lVar2 = (ulonglong)*(uint *)(in_ECX + 0x168) * 4;
    uVar3 = FUN_00401f00(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
    *(undefined4 *)(in_ECX + 0x16c) = uVar3;
  }
  uVar4 = (uint)*(ushort *)(in_ECX + 0x106) * 4;
  if (*(uint *)(in_ECX + 0x160) < uVar4) {
    *(uint *)(in_ECX + 0x160) = uVar4;
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x164));
    uVar3 = FUN_00401f00(*(undefined4 *)(in_ECX + 0x160));
    *(undefined4 *)(in_ECX + 0x164) = uVar3;
  }
  pcVar7 = *(char **)(in_ECX + 0x16c);
  switch(*(undefined1 *)(in_ECX + 0x108)) {
  case 8:
    pcVar6 = *(char **)(in_ECX + 0x164);
    FUN_00734c80(param_1,pcVar6,*(undefined2 *)(in_ECX + 0x106));
    uVar4 = 0;
    if (*(short *)(in_ECX + 0x106) != 0) {
      do {
        cVar1 = *pcVar6;
        pcVar7[2] = cVar1;
        pcVar7[1] = cVar1;
        *pcVar7 = cVar1;
        pcVar7[3] = -1;
        uVar4 = uVar4 + 1;
        pcVar7 = pcVar7 + 4;
        pcVar6 = pcVar6 + 1;
      } while (uVar4 < *(ushort *)(in_ECX + 0x106));
      return;
    }
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    break;
  case 0xf:
  case 0x10:
    pbVar5 = *(byte **)(in_ECX + 0x164);
    FUN_00734c80(param_1,pbVar5,(uint)*(ushort *)(in_ECX + 0x106) * 2);
    uVar4 = 0;
    if (*(short *)(in_ECX + 0x106) != 0) {
      do {
        *pcVar7 = (pbVar5[1] & 0xfc) * '\x02';
        pcVar7[1] = (*pbVar5 >> 2 & 0x38) + pbVar5[1] * '@';
        pcVar7[2] = *pbVar5 * '\b';
        pcVar7[3] = -1;
        uVar4 = uVar4 + 1;
        pcVar7 = pcVar7 + 4;
        pbVar5 = pbVar5 + 2;
      } while (uVar4 < *(ushort *)(in_ECX + 0x106));
      return;
    }
    break;
  case 0x18:
    pcVar6 = *(char **)(in_ECX + 0x164);
    FUN_00734c80(param_1,pcVar6,(uint)*(ushort *)(in_ECX + 0x106) * 3);
    uVar4 = 0;
    if (*(short *)(in_ECX + 0x106) != 0) {
      do {
        pcVar7[2] = *pcVar6;
        pcVar7[1] = pcVar6[1];
        *pcVar7 = pcVar6[2];
        pcVar7[3] = -1;
        uVar4 = uVar4 + 1;
        pcVar6 = pcVar6 + 3;
        pcVar7 = pcVar7 + 4;
      } while (uVar4 < *(ushort *)(in_ECX + 0x106));
      return;
    }
    break;
  case 0x20:
    pcVar6 = *(char **)(in_ECX + 0x164);
    FUN_00734c80(param_1,pcVar6,(uint)*(ushort *)(in_ECX + 0x106) * 4);
    uVar4 = 0;
    if (*(short *)(in_ECX + 0x106) != 0) {
      do {
        pcVar7[2] = *pcVar6;
        pcVar7[1] = pcVar6[1];
        *pcVar7 = pcVar6[2];
        pcVar7[3] = pcVar6[3];
        uVar4 = uVar4 + 1;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      } while (uVar4 < *(ushort *)(in_ECX + 0x106));
    }
    break;
  default:
    goto switchD_00734eb6_default;
  }
switchD_00734eb6_default:
  return;
}



int FUN_007354b0(undefined4 param_1)

{
  int *piVar1;
  LONG *pLVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar3;
  uint uVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *in_ECX;
  uint uVar9;
  LPCRITICAL_SECTION unaff_ESI;
  int *unaff_FS_OFFSET;
  uint uVar10;
  undefined1 local_69 [9];
  LPCRITICAL_SECTION local_60;
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [44];
  int iStack_24;
  undefined4 uStack_1c;
  int iStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009caa36;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff84;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070f2e0(uVar4);
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x20);
  local_60 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  DVar5 = GetCurrentThreadId();
  in_ECX[0x3f] = in_ECX[0x3f] + 1;
  in_ECX[0x3e] = DVar5;
  cVar3 = (**(code **)(*in_ECX + 0xc))(param_1,local_54,local_58,local_50,local_69,local_5c);
  if (cVar3 != '\0') {
    uVar4 = (uint)*(byte *)(in_ECX + 0x45) * (uint)*(ushort *)((int)in_ECX + 0x10e);
    if (*(byte *)(in_ECX + 0x45) == 0) {
      if (*(char *)((int)in_ECX + 0x112) != '\x04') goto LAB_0073552e;
      uVar4 = (uint)(*(ushort *)((int)in_ECX + 0x10e) >> 1);
    }
    uVar10 = uVar4;
    if (*(char *)((int)in_ECX + 0x101) == '\0') {
      if (*(char *)((int)in_ECX + 0x116) == '\0') goto LAB_007355ab;
    }
    else if ((uint)*(ushort *)((int)in_ECX + 0x106) + (uint)*(ushort *)(in_ECX + 0x41) + 1 < 0x4000)
    {
      FUN_00734e10(param_1);
LAB_007355ab:
      if ((((iStack_10 == 0) ||
           (**(uint **)(iStack_10 + 0x54) != (uint)*(ushort *)((int)in_ECX + 0x10e))) ||
          (**(uint **)(iStack_10 + 0x58) != (uint)*(ushort *)(in_ECX + 0x44))) ||
         (cVar3 = FUN_0071ad40(in_ECX + 0x47), iVar6 = iStack_10, cVar3 == '\0')) {
        iStack_10 = FUN_00401f00(0x70);
        uStack_1c = 0;
        if (iStack_10 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_0070e560(*(undefined2 *)((int)in_ECX + 0x10e),(short)in_ECX[0x44],
                               in_ECX + 0x47,1,1);
        }
        uStack_1c = 0xffffffff;
      }
      iStack_10 = iVar6;
      if (*(char *)((int)in_ECX + 0x116) != '\0') {
        iVar7 = FUN_00401f00(0x24);
        uStack_1c = 1;
        if (iVar7 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_00732750(*(undefined1 *)((int)in_ECX + 0x115),
                               *(undefined2 *)((int)in_ECX + 0x106),in_ECX[0x5b]);
        }
        uStack_1c = 0xffffffff;
        FUN_0071b140(uVar8);
      }
      if ((uint)in_ECX[0x58] < uVar4) {
        in_ECX[0x58] = uVar4;
        FUN_00401f20(in_ECX[0x59]);
        iVar7 = FUN_00401f00(in_ECX[0x58]);
        in_ECX[0x59] = iVar7;
      }
      iVar7 = **(int **)(iVar6 + 0x5c) + *(int *)(iVar6 + 0x50);
      uVar4 = *(int *)(iVar6 + 100) * **(uint **)(iVar6 + 0x54);
      if (uVar4 == 0) {
        uVar4 = **(uint **)(iVar6 + 0x54) >> 1;
      }
      if (*(char *)((int)in_ECX + 0x117) != '\0') {
        iVar7 = iVar7 + (*(ushort *)(in_ECX + 0x44) - 1) * uVar4;
        uVar4 = -uVar4;
      }
      uVar9 = 0;
      if ((char)in_ECX[0x46] == '\0') {
        if ((short)in_ECX[0x44] != 0) {
          do {
            (**(code **)(iStack_14 + 4))(iStack_14,in_ECX[0x59],uVar10,&stack0xffffff84,1);
            (*(code *)in_ECX[0x5c])(in_ECX[0x59],iVar7);
            uVar9 = uVar9 + 1;
            iVar7 = iVar7 + uVar4;
          } while (uVar9 < *(ushort *)(in_ECX + 0x44));
        }
      }
      else if ((short)in_ECX[0x44] != 0) {
        do {
          FUN_00734cb0(iStack_14,in_ECX[0x59],in_ECX[0x58]);
          (*(code *)in_ECX[0x5c])(in_ECX[0x59],iVar7);
          uVar9 = uVar9 + 1;
          iVar7 = iVar7 + uVar4;
        } while (uVar9 < *(ushort *)(in_ECX + 0x44));
      }
      pLVar2 = &unaff_ESI[5].LockCount;
      *pLVar2 = *pLVar2 + -1;
      if (*pLVar2 == 0) {
        unaff_ESI[5].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      }
      LeaveCriticalSection(unaff_ESI);
      goto LAB_007357dc;
    }
  }
LAB_0073552e:
  piVar1 = in_ECX + 0x3f;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    in_ECX[0x3e] = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  iStack_10 = 0;
LAB_007357dc:
  *unaff_FS_OFFSET = iStack_24;
  return iStack_10;
}



void FUN_00735800(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int in_ECX;
  byte bVar3;
  byte *pbVar4;
  short local_4;
  
  bVar3 = *param_2;
  if (bVar3 != 0) {
    local_4 = 0;
    do {
      if (local_4 == *(short *)(in_ECX + 0x100)) {
        return;
      }
      pbVar4 = param_2 + 1;
      bVar1 = bVar3 & 0x7f;
      if ((char)bVar3 < '\0') {
        if (bVar1 != 0) {
          do {
            bVar1 = bVar1 - 1;
            *param_1 = *pbVar4;
            pbVar4 = pbVar4 + 1;
            param_1 = param_1 + param_3;
          } while (bVar1 != 0);
          bVar1 = 0;
        }
      }
      else {
        bVar3 = *pbVar4;
        pbVar4 = param_2 + 2;
        for (bVar2 = bVar1; bVar2 != 0; bVar2 = bVar2 - 1) {
          *param_1 = bVar3;
          param_1 = param_1 + param_3;
          bVar1 = 0;
        }
      }
      bVar3 = *pbVar4;
      local_4 = local_4 + (ushort)(byte)(bVar1 - 1);
      param_2 = pbVar4;
    } while (bVar3 != 0);
  }
  return;
}



void FUN_00735890(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int in_ECX;
  byte bVar3;
  byte *pbVar4;
  short local_4;
  
  bVar3 = *param_2;
  if (bVar3 != 0) {
    local_4 = 0;
    do {
      if (local_4 == *(short *)(in_ECX + 0x100)) {
        return;
      }
      pbVar4 = param_2 + 1;
      bVar1 = bVar3 & 0x7f;
      if ((char)bVar3 < '\0') {
        if (bVar1 != 0) {
          do {
            bVar1 = bVar1 - 1;
            *param_1 = *pbVar4;
            pbVar4 = pbVar4 + 2;
            param_1 = param_1 + param_3;
          } while (bVar1 != 0);
          bVar1 = 0;
        }
      }
      else {
        bVar3 = *pbVar4;
        pbVar4 = param_2 + 3;
        for (bVar2 = bVar1; bVar2 != 0; bVar2 = bVar2 - 1) {
          *param_1 = bVar3;
          param_1 = param_1 + param_3;
          bVar1 = 0;
        }
      }
      bVar3 = *pbVar4;
      local_4 = local_4 + (ushort)(byte)(bVar1 - 1);
      param_2 = pbVar4;
    } while (bVar3 != 0);
  }
  return;
}



undefined4 FUN_00735920(char *param_1)

{
  int iVar1;
  
  iVar1 = __stricmp(param_1,".sgi");
  if (iVar1 != 0) {
    iVar1 = __stricmp(param_1,".rgb");
    if (iVar1 != 0) {
      iVar1 = __stricmp(param_1,".rgba");
      if (iVar1 != 0) {
        iVar1 = __stricmp(param_1,".int");
        if (iVar1 != 0) {
          iVar1 = __stricmp(param_1,".inta");
          if (iVar1 != 0) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}



void FUN_00735990(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009caac8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a80c5c;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a80cd0;
  FUN_0070f2e0(uVar1);
  *(undefined2 *)(in_ECX + 0x40) = 0;
  *(undefined2 *)((int)in_ECX + 0x102) = 0;
  *(undefined2 *)(in_ECX + 0x41) = 0;
  *(undefined1 *)((int)in_ECX + 0x106) = 0;
  *(undefined1 *)((int)in_ECX + 0x107) = 0;
  puVar3 = &DAT_00b25e48;
  puVar4 = in_ECX + 0x42;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00735a40(int param_1,undefined4 param_2,int param_3)

{
  undefined4 local_4;
  
  local_4 = 4;
  (**(code **)(param_1 + 4))(param_1,param_2,param_3 * 4,&local_4,1);
  return;
}



int FUN_00735cd0(int param_1)

{
  int *piVar1;
  LONG *pLVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  char cVar4;
  uint uVar5;
  DWORD DVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int *in_ECX;
  undefined1 *puVar10;
  ushort uVar11;
  int iVar12;
  int unaff_EBX;
  int iVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  int *unaff_FS_OFFSET;
  int iVar17;
  uint uVar18;
  undefined4 uStack_78;
  LPCRITICAL_SECTION local_60;
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [44];
  int iStack_24;
  undefined4 uStack_1c;
  int iStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009caa6b;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff78;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070f2e0(uVar5);
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x20);
  local_60 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  DVar6 = GetCurrentThreadId();
  in_ECX[0x3f] = in_ECX[0x3f] + 1;
  in_ECX[0x3e] = DVar6;
  cVar4 = (**(code **)(*in_ECX + 0xc))
                    (param_1,local_54,local_58,local_50,(int)&uStack_78 + 3,local_5c);
  if (cVar4 == '\0') {
LAB_00735d51:
    piVar1 = in_ECX + 0x3f;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      in_ECX[0x3e] = 0;
    }
    LeaveCriticalSection(lpCriticalSection);
    iVar7 = 0;
  }
  else {
    if ((((iStack_10 == 0) || (**(uint **)(iStack_10 + 0x54) != (uint)*(ushort *)(in_ECX + 0x40)))
        || (**(uint **)(iStack_10 + 0x58) != (uint)*(ushort *)((int)in_ECX + 0x102))) ||
       (cVar4 = FUN_0071ad40(in_ECX + 0x42), cVar4 == '\0')) {
      iStack_14 = FUN_00401f00(0x70);
      uStack_1c = 0;
      if (iStack_14 == 0) {
        iStack_10 = 0;
      }
      else {
        iStack_10 = FUN_0070e560((short)in_ECX[0x40],*(undefined2 *)((int)in_ECX + 0x102),
                                 in_ECX + 0x42,1,1);
      }
      uStack_1c = 0xffffffff;
    }
    iVar17 = 0;
    if (*(char *)((int)in_ECX + 0x107) == '\0') {
      iVar7 = (uint)*(byte *)((int)in_ECX + 0x106) * (uint)*(ushort *)(in_ECX + 0x40) *
              (uint)*(ushort *)(in_ECX + 0x41) * (uint)*(ushort *)((int)in_ECX + 0x102);
    }
    else {
      uVar5 = (uint)*(ushort *)(in_ECX + 0x41) * (uint)*(ushort *)((int)in_ECX + 0x102);
      iVar17 = FUN_00401f00(-(uint)((int)((ulonglong)uVar5 * 4 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar5 * 4));
      if (iVar17 == 0) goto LAB_00735d51;
      FUN_00735a40(param_1,iVar17,uVar5);
      iVar7 = 0;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        iStack_14 = 4;
        (**(code **)(param_1 + 4))(param_1,&stack0xffffff84,4,&iStack_14,1);
        iVar7 = iVar7 + unaff_EBX;
      }
    }
    puVar8 = (undefined1 *)FUN_00401f00(iVar7);
    if (puVar8 == (undefined1 *)0x0) {
      pLVar2 = &uStack_78[5].LockCount;
      *pLVar2 = *pLVar2 + -1;
      if (*pLVar2 == 0) {
        uStack_78[5].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      }
      LeaveCriticalSection(uStack_78);
      iVar7 = 0;
    }
    else {
      (**(code **)(param_1 + 4))(param_1,puVar8,iVar7,&stack0xffffff80,1);
      iVar7 = *(int *)(iStack_10 + 100);
      iVar12 = **(int **)(iStack_10 + 0x54) * iVar7;
      iVar13 = **(int **)(iStack_10 + 0x5c) + *(int *)(iStack_10 + 0x50);
      iStack_14 = iVar12;
      if (*(char *)((int)in_ECX + 0x107) == '\0') {
        uVar5 = 0;
        if (*(char *)((int)in_ECX + 0x106) == '\x01') {
          puVar10 = puVar8;
          if ((short)in_ECX[0x41] != 0) {
            do {
              uVar18 = 0;
              puVar9 = (undefined1 *)
                       ((*(ushort *)((int)in_ECX + 0x102) - 1) * iVar12 + uVar5 + iVar13);
              if (*(short *)((int)in_ECX + 0x102) != 0) {
                uVar11 = *(ushort *)(in_ECX + 0x40);
                do {
                  uVar14 = 0;
                  if (uVar11 != 0) {
                    do {
                      *puVar9 = *puVar10;
                      uVar11 = *(ushort *)(in_ECX + 0x40);
                      uVar14 = uVar14 + 1;
                      puVar10 = puVar10 + 1;
                      puVar9 = puVar9 + iVar7;
                    } while (uVar14 < uVar11);
                  }
                  uVar18 = uVar18 + 1;
                  puVar9 = puVar9 + iVar12 * -2;
                } while (uVar18 < *(ushort *)((int)in_ECX + 0x102));
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(ushort *)(in_ECX + 0x41));
          }
        }
        else {
          puVar10 = puVar8;
          if ((short)in_ECX[0x41] != 0) {
            do {
              uVar18 = 0;
              puVar9 = (undefined1 *)
                       ((*(ushort *)((int)in_ECX + 0x102) - 1) * iVar12 + uVar5 + iVar13);
              if (*(short *)((int)in_ECX + 0x102) != 0) {
                uVar11 = *(ushort *)(in_ECX + 0x40);
                do {
                  uVar14 = 0;
                  if (uVar11 != 0) {
                    do {
                      *puVar9 = *puVar10;
                      uVar11 = *(ushort *)(in_ECX + 0x40);
                      uVar14 = uVar14 + 1;
                      puVar10 = puVar10 + 2;
                      puVar9 = puVar9 + iVar7;
                    } while (uVar14 < uVar11);
                  }
                  puVar9 = puVar9 + iVar12 * -2;
                  uVar18 = uVar18 + 1;
                } while (uVar18 < *(ushort *)((int)in_ECX + 0x102));
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(ushort *)(in_ECX + 0x41));
          }
        }
      }
      else {
        uVar15 = (uint)*(ushort *)(in_ECX + 0x41);
        uVar5 = (uint)*(ushort *)((int)in_ECX + 0x102);
        iVar3 = uVar15 * uVar5 * 8 + 0x200;
        uVar18 = 0;
        if (*(char *)((int)in_ECX + 0x106) == '\x01') {
          if (uVar15 != 0) {
            do {
              iVar16 = (uVar5 - 1) * iVar12 + uVar18 + iVar13;
              uVar15 = 0;
              if (uVar5 != 0) {
                do {
                  FUN_00735800(iVar16,puVar8 + (*(int *)(iVar17 + (uVar5 * uVar18 + uVar15) * 4) -
                                               iVar3),iVar7);
                  uVar5 = (uint)*(ushort *)((int)in_ECX + 0x102);
                  iVar16 = iVar16 - iStack_14;
                  uVar15 = uVar15 + 1;
                  iVar12 = iStack_14;
                } while (uVar15 < uVar5);
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < *(ushort *)(in_ECX + 0x41));
          }
        }
        else if (uVar15 != 0) {
          do {
            iVar16 = (uVar5 - 1) * iVar12 + uVar18 + iVar13;
            uVar15 = 0;
            if (uVar5 != 0) {
              do {
                FUN_00735890(iVar16,puVar8 + (*(int *)(iVar17 + (uVar5 * uVar18 + uVar15) * 4) -
                                             iVar3),iVar7);
                uVar5 = (uint)*(ushort *)((int)in_ECX + 0x102);
                iVar16 = iVar16 - iStack_14;
                uVar15 = uVar15 + 1;
                iVar12 = iStack_14;
              } while (uVar15 < uVar5);
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < *(ushort *)(in_ECX + 0x41));
        }
      }
      iVar7 = iStack_10;
      FUN_00401f20(puVar8);
      FUN_00401f20(iVar17);
      if ((short)in_ECX[0x41] == 1) {
        puVar8 = (undefined1 *)(**(int **)(iVar7 + 0x5c) + *(int *)(iVar7 + 0x50));
        for (iVar17 = (uint)*(ushort *)(in_ECX + 0x40) * (uint)*(ushort *)((int)in_ECX + 0x102);
            iVar17 != 0; iVar17 = iVar17 + -1) {
          puVar8[2] = *puVar8;
          puVar8[1] = *puVar8;
          puVar8 = puVar8 + 3;
        }
      }
      else if ((short)in_ECX[0x41] == 2) {
        puVar8 = (undefined1 *)(**(int **)(iVar7 + 0x5c) + *(int *)(iVar7 + 0x50));
        for (iVar17 = (uint)*(ushort *)(in_ECX + 0x40) * (uint)*(ushort *)((int)in_ECX + 0x102);
            iVar17 != 0; iVar17 = iVar17 + -1) {
          puVar8[3] = puVar8[1];
          puVar8[2] = *puVar8;
          puVar8[1] = *puVar8;
          puVar8 = puVar8 + 4;
        }
      }
      pLVar2 = &uStack_78[5].LockCount;
      *pLVar2 = *pLVar2 + -1;
      if (*pLVar2 == 0) {
        uStack_78[5].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      }
      LeaveCriticalSection(uStack_78);
    }
  }
  *unaff_FS_OFFSET = iStack_24;
  return iVar7;
}



void FUN_00736360(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009caa98;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a80c5c;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a80cec;
  FUN_0070f2e0(uVar1);
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  puVar3 = &DAT_00b25fb0;
  puVar4 = in_ECX + 0x44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00736950(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int in_stack_00000094;
  int in_stack_00000098;
  int iStack_18;
  
  iVar6 = in_stack_00000094;
  iVar5 = param_2;
  iVar3 = *(int *)(param_2 + 0x5c);
  puVar8 = (undefined1 *)
           (*(int *)(iVar3 + *(int *)(param_2 + 0x60) * 4) * in_stack_00000098 +
            *(int *)(param_2 + 0x50) + *(int *)(iVar3 + in_stack_00000094 * 4));
  param_2 = 1;
  (**(code **)(param_1 + 4))
            (param_1,puVar8,
             *(int *)(iVar3 + 4 + in_stack_00000094 * 4) - *(int *)(iVar3 + in_stack_00000094 * 4),
             &param_2,1);
  FUN_0071b4d0(&stack0x0000000c);
  iVar4 = *(int *)(*(int *)(iVar5 + 0x54) + iVar6 * 4);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x58) + iVar6 * 4);
  cVar7 = FUN_0070e260(&stack0x00000050);
  if ((cVar7 != '\0') && (puVar9 = puVar8, iStack_18 == 0xff0000)) {
    for (; iVar5 = iVar4, iVar3 != 0; iVar3 = iVar3 + -1) {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar1 = puVar8[1];
        uVar2 = *puVar8;
        *puVar9 = puVar8[2];
        puVar9[1] = uVar1;
        puVar9[2] = uVar2;
        puVar9 = puVar9 + 3;
        puVar8 = puVar8 + 3;
      }
    }
  }
  return;
}



void FUN_00736a20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  byte bStack00000094;
  int in_stack_00000098;
  uint *puStack_44;
  int iStack_2c;
  int iStack_28;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  byte bStack_8;
  byte bStack_7;
  byte bStack_6;
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  iVar3 = _bStack00000094;
  iVar2 = param_2;
  iVar1 = *(int *)(param_2 + 0x5c);
  puVar19 = (uint *)(*(int *)(iVar1 + *(int *)(param_2 + 0x60) * 4) * in_stack_00000098 +
                     *(int *)(param_2 + 0x50) + *(int *)(iVar1 + _bStack00000094 * 4));
  param_2 = 1;
  (**(code **)(param_1 + 4))
            (param_1,puVar19,
             *(int *)(iVar1 + 4 + _bStack00000094 * 4) - *(int *)(iVar1 + _bStack00000094 * 4),
             &param_2,1);
  FUN_0071b4d0(&stack0x0000000c);
  iVar1 = *(int *)(*(int *)(iVar2 + 0x54) + iVar3 * 4);
  iStack_28 = *(int *)(*(int *)(iVar2 + 0x58) + iVar3 * 4);
  cVar4 = FUN_0070e260(&stack0x00000050);
  if (cVar4 != '\0') {
    uVar7 = 0;
    piVar11 = (int *)&stack0x00000020;
    do {
      puStack_44 = puVar19;
      iVar2 = iStack_28;
      if (*piVar11 == 3) {
        if ((&stack0x00000028)[uVar7 * 0xc] != '\0') {
          if (iStack_28 == 0) {
            return;
          }
          do {
            if (iVar1 != 0) {
              bVar5 = 8 - bStack_3;
              bVar6 = 8 - bStack_2;
              bVar14 = 8 - bStack_1;
              bVar12 = 8 - bStack_4;
              iStack_2c = iVar1;
              do {
                uVar7 = *puStack_44;
                uVar17 = 0;
                uVar9 = (uVar7 & uStack_18) >> (bStack_8 & 0x1f);
                for (bVar13 = bStack_4; bVar12 <= bVar13; bVar13 = bVar13 - bVar12) {
                  uVar17 = (uVar17 | uVar9) << (bVar12 & 0x1f);
                }
                bStack00000094 = (byte)(uVar9 >> (('\b' - bVar13) - bStack_4 & 0x1f));
                uVar18 = 0;
                uVar10 = (uVar7 & uStack_14) >> (bStack_7 & 0x1f);
                for (bVar13 = bStack_3; bVar5 <= bVar13; bVar13 = bVar13 - bVar5) {
                  uVar18 = (uVar18 | uVar10) << (bVar5 & 0x1f);
                }
                uVar8 = (uVar7 & uStack_10) >> (bStack_6 & 0x1f);
                uVar21 = 0;
                for (bVar16 = bStack_2; bVar6 <= bVar16; bVar16 = bVar16 - bVar6) {
                  uVar21 = (uVar21 | uVar8) << (bVar6 & 0x1f);
                }
                uVar20 = (uVar7 & uStack_c) >> (bStack_5 & 0x1f);
                uVar7 = 0;
                for (bVar15 = bStack_1; bVar14 <= bVar15; bVar15 = bVar15 - bVar14) {
                  uVar7 = (uVar7 | uVar20) << (bVar14 & 0x1f);
                }
                *(byte *)puVar19 =
                     bStack00000094 | (byte)(uVar17 >> (bVar12 & 0x1f)) |
                     (char)uVar9 << (bStack_4 & 0x1f);
                puStack_44 = puStack_44 + 1;
                *(byte *)((int)puVar19 + 1) =
                     (byte)(uVar10 >> (('\b' - bStack_3) - bVar13 & 0x1f)) |
                     (byte)(uVar18 >> (bVar5 & 0x1f)) | (char)uVar10 << (bStack_3 & 0x1f);
                *(byte *)((int)puVar19 + 2) =
                     (byte)(uVar8 >> (('\b' - bStack_2) - bVar16 & 0x1f)) |
                     (byte)(uVar21 >> (bVar6 & 0x1f)) | (char)uVar8 << (bStack_2 & 0x1f);
                *(byte *)((int)puVar19 + 3) =
                     (byte)(uVar20 >> (('\b' - bStack_1) - bVar15 & 0x1f)) |
                     (byte)(uVar7 >> (bVar14 & 0x1f)) | (char)uVar20 << (bStack_1 & 0x1f);
                puVar19 = puVar19 + 1;
                iStack_2c = iStack_2c + -1;
              } while (iStack_2c != 0);
            }
            iStack_28 = iStack_28 + -1;
          } while (iStack_28 != 0);
          return;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      piVar11 = piVar11 + 3;
    } while (uVar7 < 4);
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (iVar1 != 0) {
        bVar5 = 8 - bStack_3;
        bVar6 = 8 - bStack_2;
        bVar14 = 8 - bStack_4;
        iStack_28 = iVar1;
        do {
          uVar7 = *puStack_44;
          uVar17 = 0;
          uVar9 = (uVar7 & uStack_18) >> (bStack_8 & 0x1f);
          for (bVar12 = bStack_4; bVar14 <= bVar12; bVar12 = bVar12 - bVar14) {
            uVar17 = (uVar17 | uVar9) << (bVar14 & 0x1f);
          }
          uVar18 = 0;
          uVar10 = (uVar7 & uStack_14) >> (bStack_7 & 0x1f);
          for (bVar13 = bStack_3; bVar5 <= bVar13; bVar13 = bVar13 - bVar5) {
            uVar18 = (uVar18 | uVar10) << (bVar5 & 0x1f);
          }
          uVar21 = (uVar7 & uStack_10) >> (bStack_6 & 0x1f);
          uVar7 = 0;
          for (bVar16 = bStack_2; bVar6 <= bVar16; bVar16 = bVar16 - bVar6) {
            uVar7 = (uVar7 | uVar21) << (bVar6 & 0x1f);
          }
          *(byte *)puVar19 =
               (byte)(uVar9 >> (('\b' - bVar12) - bStack_4 & 0x1f)) |
               (byte)(uVar17 >> (bVar14 & 0x1f)) | (char)uVar9 << (bStack_4 & 0x1f);
          puStack_44 = puStack_44 + 1;
          *(byte *)((int)puVar19 + 1) =
               (byte)(uVar10 >> (('\b' - bStack_3) - bVar13 & 0x1f)) |
               (byte)(uVar18 >> (bVar5 & 0x1f)) | (char)uVar10 << (bStack_3 & 0x1f);
          *(byte *)((int)puVar19 + 2) =
               (byte)(uVar21 >> (('\b' - bStack_2) - bVar16 & 0x1f)) |
               (byte)(uVar7 >> (bVar6 & 0x1f)) | (char)uVar21 << (bStack_2 & 0x1f);
          *(undefined1 *)((int)puVar19 + 3) = 0xff;
          puVar19 = puVar19 + 1;
          iStack_28 = iStack_28 + -1;
        } while (iStack_28 != 0);
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00736eb0(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ushort *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  int in_stack_00000094;
  int in_stack_00000098;
  byte bStack_258;
  byte bStack_257;
  byte bStack_256;
  byte bStack_255;
  uint local_254;
  uint uStack_250;
  uint uStack_24c;
  uint local_248;
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  byte bStack_238;
  byte bStack_237;
  byte bStack_236;
  byte bStack_235;
  byte local_234;
  byte bStack_233;
  byte bStack_232;
  byte bStack_231;
  uint uStack_230;
  uint uStack_22c;
  int iStack_228;
  uint local_224;
  uint local_220;
  int iStack_21c;
  uint uStack_218;
  int iStack_214;
  uint local_210;
  int local_20c;
  int iStack_208;
  ushort local_204 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&bStack_258;
  local_20c = param_1;
  pbVar7 = (byte *)(*(int *)(*(int *)(param_2 + 0x5c) + *(int *)(param_2 + 0x60) * 4) *
                    in_stack_00000098 + *(int *)(*(int *)(param_2 + 0x5c) + in_stack_00000094 * 4) +
                   *(int *)(param_2 + 0x50));
  uVar10 = *(int *)(*(int *)(param_2 + 0x58) + in_stack_00000094 * 4) *
           *(int *)(*(int *)(param_2 + 0x54) + in_stack_00000094 * 4) * 2;
  local_210 = uVar10;
  FUN_0071b4d0(&stack0x0000000c);
  local_220 = 0;
  if (uVar10 != 0) {
    uVar5 = (uint)local_234;
    do {
      local_224 = 0x200;
      if (uVar10 - local_220 < 0x200) {
        local_224 = uVar10 - local_220;
      }
      uVar9 = local_224;
      local_254 = 1;
      (**(code **)(local_20c + 4))(local_20c,local_204,local_224,&local_254,1);
      cVar1 = FUN_0071ad40(&DAT_00b25e00);
      bVar3 = (byte)uVar5;
      uVar10 = uVar5;
      if (cVar1 == '\0') {
        cVar1 = FUN_0071ad40(&DAT_00b25e48);
        if (cVar1 == '\0') {
          return;
        }
        local_254 = uVar9 >> 1;
        puVar6 = local_204;
        if (local_254 != 0) {
          iStack_21c = 8 - uVar5;
          bStack_256 = 8 - bStack_233;
          uStack_218 = (uint)bStack_233;
          iStack_214 = 8 - uStack_218;
          bStack_257 = 8 - bStack_232;
          uStack_230 = (uint)bStack_232;
          bStack_258 = 8 - bVar3;
          iStack_228 = 8 - uStack_230;
          pbVar8 = pbVar7;
          do {
            uVar2 = (*puVar6 & local_248) >> (bStack_238 & 0x1f);
            uVar9 = 0;
            bVar4 = (byte)uVar10;
            while (bStack_258 <= bVar4) {
              bVar4 = (char)uVar10 - bStack_258;
              uVar10 = (uint)bVar4;
              uVar9 = (uVar9 | uVar2) << (bStack_258 & 0x1f);
            }
            *pbVar8 = (byte)(uVar2 >> ((char)iStack_21c - bVar4 & 0x1f)) |
                      (byte)(uVar9 >> (bStack_258 & 0x1f)) | (char)uVar2 << (bVar3 & 0x1f);
            uVar9 = (*puVar6 & uStack_244) >> (bStack_237 & 0x1f);
            uVar10 = 0;
            for (bVar4 = bStack_233; bStack_256 <= bVar4; bVar4 = bVar4 - bStack_256) {
              uVar10 = (uVar10 | uVar9) << (bStack_256 & 0x1f);
            }
            pbVar8[1] = (byte)(uVar9 >> ((char)iStack_214 - bVar4 & 0x1f)) |
                        (byte)(uVar10 >> (bStack_256 & 0x1f)) | (char)uVar9 << (bStack_233 & 0x1f);
            uVar10 = (*puVar6 & uStack_240) >> (bStack_236 & 0x1f);
            uStack_24c = 0;
            for (bVar4 = bStack_232; bStack_257 <= bVar4; bVar4 = bVar4 - bStack_257) {
              uStack_24c = (uStack_24c | uVar10) << (bStack_257 & 0x1f);
            }
            pbVar7 = pbVar8 + 3;
            puVar6 = puVar6 + 1;
            local_254 = local_254 - 1;
            pbVar8[2] = (byte)(uVar10 >> ((char)iStack_228 - bVar4 & 0x1f)) |
                        (byte)(uStack_24c >> (bStack_257 & 0x1f)) |
                        (char)uVar10 << (bStack_232 & 0x1f);
            uVar10 = (uint)local_234;
            pbVar8 = pbVar7;
            uStack_22c = uVar5;
          } while (local_254 != 0);
        }
      }
      else {
        local_254 = uVar9 >> 1;
        puVar6 = local_204;
        if (local_254 != 0) {
          iStack_21c = 8 - uVar5;
          bStack_257 = 8 - bStack_233;
          uStack_218 = (uint)bStack_233;
          iStack_214 = 8 - uStack_218;
          bStack_256 = 8 - bStack_232;
          uStack_230 = (uint)bStack_232;
          iStack_228 = 8 - uStack_230;
          bStack_258 = 8 - bStack_231;
          uStack_24c = (uint)bStack_231;
          bStack_255 = 8 - bVar3;
          iStack_208 = 8 - uStack_24c;
          pbVar8 = pbVar7;
          do {
            uVar2 = (*puVar6 & local_248) >> (bStack_238 & 0x1f);
            uVar9 = 0;
            bVar4 = (byte)uVar10;
            while (bStack_255 <= bVar4) {
              bVar4 = (char)uVar10 - bStack_255;
              uVar10 = (uint)bVar4;
              uVar9 = (uVar9 | uVar2) << (bStack_255 & 0x1f);
            }
            *pbVar8 = (byte)(uVar2 >> ((char)iStack_21c - bVar4 & 0x1f)) |
                      (byte)(uVar9 >> (bStack_255 & 0x1f)) | (char)uVar2 << (bVar3 & 0x1f);
            uVar9 = (*puVar6 & uStack_244) >> (bStack_237 & 0x1f);
            uVar10 = 0;
            for (bVar4 = bStack_233; bStack_257 <= bVar4; bVar4 = bVar4 - bStack_257) {
              uVar10 = (uVar10 | uVar9) << (bStack_257 & 0x1f);
            }
            pbVar8[1] = (byte)(uVar9 >> ((char)iStack_214 - bVar4 & 0x1f)) |
                        (byte)(uVar10 >> (bStack_257 & 0x1f)) | (char)uVar9 << (bStack_233 & 0x1f);
            uVar9 = (*puVar6 & uStack_240) >> (bStack_236 & 0x1f);
            uVar10 = 0;
            for (bVar4 = bStack_232; bStack_256 <= bVar4; bVar4 = bVar4 - bStack_256) {
              uVar10 = (uVar10 | uVar9) << (bStack_256 & 0x1f);
            }
            pbVar8[2] = (byte)(uVar9 >> ((char)iStack_228 - bVar4 & 0x1f)) |
                        (byte)(uVar10 >> (bStack_256 & 0x1f)) | (char)uVar9 << (bStack_232 & 0x1f);
            uVar10 = (*puVar6 & uStack_23c) >> (bStack_235 & 0x1f);
            uStack_250 = 0;
            for (bVar4 = bStack_231; bStack_258 <= bVar4; bVar4 = bVar4 - bStack_258) {
              uStack_250 = (uStack_250 | uVar10) << (bStack_258 & 0x1f);
            }
            pbVar7 = pbVar8 + 4;
            puVar6 = puVar6 + 1;
            local_254 = local_254 - 1;
            pbVar8[3] = (byte)(uVar10 >> ((char)iStack_208 - bVar4 & 0x1f)) |
                        (byte)(uStack_250 >> (bStack_258 & 0x1f)) |
                        (char)uVar10 << (bStack_231 & 0x1f);
            uVar10 = (uint)local_234;
            pbVar8 = pbVar7;
            uStack_22c = uVar5;
          } while (local_254 != 0);
        }
      }
      local_220 = local_220 + local_224;
      uVar5 = uVar10;
      uVar10 = local_210;
    } while (local_220 < local_210);
  }
  return;
}



int FUN_00737330(void)

{
  int *piVar1;
  LONG *pLVar2;
  code *pcVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  DWORD DVar7;
  int iVar8;
  int *in_ECX;
  LPCRITICAL_SECTION unaff_ESI;
  uint uVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int iStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ae3cb;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff80;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070f2e0();
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x20);
  EnterCriticalSection(lpCriticalSection);
  DVar7 = GetCurrentThreadId();
  in_ECX[0x3f] = in_ECX[0x3f] + 1;
  in_ECX[0x3e] = DVar7;
  pcVar3 = *(code **)(*in_ECX + 0xc);
  *(undefined1 *)(in_ECX + 0x43) = 0;
  cVar5 = (*pcVar3)();
  if (cVar5 == '\0') {
    piVar1 = in_ECX + 0x3f;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      in_ECX[0x3e] = 0;
    }
    LeaveCriticalSection(lpCriticalSection);
    iStack_10 = 0;
  }
  else {
    if ((((iStack_10 == 0) || (**(int **)(iStack_10 + 0x54) != in_ECX[0x41])) ||
        (**(int **)(iStack_10 + 0x58) != in_ECX[0x40])) ||
       (((cVar5 = FUN_0071ad40(), cVar5 == '\0' || (*(int *)(iStack_10 + 0x60) != in_ECX[0x42])) ||
        (*(uint *)(iStack_10 + 0x6c) != uVar6)))) {
      iVar8 = FUN_00401f00();
      if (iVar8 == 0) {
        iStack_10 = 0;
      }
      else {
        iStack_10 = FUN_0070e560();
      }
    }
    uVar4 = *(uint *)(iStack_10 + 0x60);
    cVar5 = FUN_0071ad40();
    if (cVar5 == '\0') {
      if (uVar6 != 0) {
        iVar8 = -1;
        do {
          switch(iVar8) {
          case 0:
            break;
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
          }
          uVar9 = 0;
          if (uVar4 != 0) {
            do {
              cVar5 = *(char *)((int)in_ECX + 0x111);
              if (cVar5 == '\x10') {
                FUN_0070f010();
                FUN_0070f010(in_ECX + 0x44);
                FUN_00736eb0(iStack_14,iStack_10);
              }
              else if (cVar5 == '\x18') {
                FUN_0070f010();
                FUN_0070f010(in_ECX + 0x44);
                FUN_00736950(iStack_14,iStack_10);
              }
              else if (cVar5 == ' ') {
                FUN_0070f010();
                FUN_0070f010(in_ECX + 0x44);
                FUN_00736a20(iStack_14,iStack_10);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar4);
          }
          uVar9 = iVar8 + 2;
          lpCriticalSection = unaff_ESI;
          iVar8 = iVar8 + 1;
        } while (uVar9 < uVar6);
      }
    }
    else if (uVar6 != 0) {
      iVar8 = -1;
      do {
        switch(iVar8) {
        case 0:
          break;
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
        }
        uVar9 = 0;
        if (uVar4 != 0) {
          do {
            (**(code **)(iStack_14 + 4))();
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar4);
        }
        uVar9 = iVar8 + 2;
        lpCriticalSection = unaff_ESI;
        iVar8 = iVar8 + 1;
      } while (uVar9 < uVar6);
    }
    pLVar2 = &lpCriticalSection[5].LockCount;
    *pLVar2 = *pLVar2 + -1;
    if (*pLVar2 == 0) {
      lpCriticalSection[5].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  *unaff_FS_OFFSET = iStack_24;
  return iStack_10;
}



void FUN_00737750(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009caac8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a80c5c;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a80d08;
  FUN_0070f2e0(uVar1);
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  puVar3 = &DAT_00b25e48;
  puVar4 = in_ECX + 0x42;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)(in_ECX + 0x53) = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x55] = 0;
  *(undefined1 *)(in_ECX + 0x56) = 0;
  *(undefined1 *)((int)in_ECX + 0x159) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4
FUN_00737800(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined1 *param_4,
            undefined4 *param_5)

{
  int *piVar1;
  ushort uVar2;
  DWORD DVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  short unaff_retaddr;
  undefined1 auStack_1c [4];
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  (**(code **)(*param_1 + 8))(0);
  *param_5 = 1;
  param_5 = (undefined4 *)0x2;
  (*(code *)param_1[1])(param_1,&stack0x00000000,2,&param_5,1);
  if (unaff_retaddr != 0x4d42) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x80));
  DVar3 = GetCurrentThreadId();
  *(int *)(in_ECX + 0xfc) = *(int *)(in_ECX + 0xfc) + 1;
  *(DWORD *)(in_ECX + 0xf8) = DVar3;
  param_5 = (undefined4 *)0x4;
  (*(code *)param_1[1])(param_1,&stack0xffffffe0,4,&param_5,1);
  param_5 = (undefined4 *)0x2;
  (*(code *)param_1[1])(param_1,&stack0x00000000,2,&param_5,1);
  param_5 = (undefined4 *)0x2;
  (*(code *)param_1[1])(param_1,&stack0x00000000,2,&param_5,1);
  param_5 = (undefined4 *)0x4;
  (*(code *)param_1[1])(param_1,in_ECX + 0x154,4,&param_5,1);
  param_5 = (undefined4 *)0x4;
  (*(code *)param_1[1])(param_1,&iStack_18,4,&param_5,1);
  param_5 = (undefined4 *)0x4;
  (*(code *)param_1[1])(param_1,&iStack_10,4,&param_5,1);
  param_5 = (undefined4 *)0x4;
  (*(code *)param_1[1])(param_1,&iStack_c,4,&param_5,1);
  param_5 = (undefined4 *)0x2;
  (*(code *)param_1[1])(param_1,&stack0x00000000,2,&param_5,1);
  param_5 = (undefined4 *)0x2;
  (*(code *)param_1[1])(param_1,in_ECX + 0x14c,2,&param_5,1);
  param_5 = (undefined4 *)0x4;
  (*(code *)param_1[1])(param_1,&iStack_14,4,&param_5,1);
  param_5 = (undefined4 *)0x4;
  (*(code *)param_1[1])(param_1,&stack0xffffffe0,4,&param_5,1);
  param_5 = (undefined4 *)0x4;
  (*(code *)param_1[1])(param_1,auStack_1c,4,&param_5,1);
  param_5 = (undefined4 *)0x4;
  (*(code *)param_1[1])(param_1,auStack_1c,4,&param_5,1);
  param_5 = (undefined4 *)0x4;
  (*(code *)param_1[1])(param_1,in_ECX + 0x150,4,&param_5,1);
  param_5 = (undefined4 *)0x4;
  (*(code *)param_1[1])(param_1,&stack0xffffffe0,4,&param_5,1);
  if (iStack_18 != 4) {
    uVar2 = *(ushort *)(in_ECX + 0x14c);
    param_5 = (undefined4 *)(uint)uVar2;
    uStack_8 = (uint)param_5;
    switch(param_5) {
    case (undefined4 *)0x4:
    case (undefined4 *)0x8:
      puVar5 = &DAT_00b25d70;
      break;
    default:
      goto switchD_00737a3f_caseD_5;
    case (undefined4 *)0x18:
      puVar5 = &DAT_00b25e48;
      break;
    case (undefined4 *)0x20:
      puVar5 = &DAT_00b25e00;
    }
    puVar6 = (undefined4 *)(in_ECX + 0x108);
    for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    if ((iStack_14 != 2) && (iStack_14 != 1)) {
      *(int *)(in_ECX + 0x100) = iStack_10;
      *(bool *)(in_ECX + 0x158) = -1 < iStack_c;
      if (iStack_c < 1) {
        iStack_c = -iStack_c;
      }
      *(int *)(in_ECX + 0x104) = iStack_c;
      if (((*(int *)(in_ECX + 0x150) == 0) && (uVar2 != 0x18)) && (uVar2 != 0x20)) {
        *(int *)(in_ECX + 0x150) = 1 << ((byte)uVar2 & 0x1f);
      }
      *param_1 = iStack_10;
      *param_2 = *(undefined4 *)(in_ECX + 0x104);
      puVar5 = (undefined4 *)(in_ECX + 0x108);
      for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
        *param_3 = *puVar5;
        puVar5 = puVar5 + 1;
        param_3 = param_3 + 1;
      }
      *param_4 = 1;
      FUN_0043f300();
      return 1;
    }
  }
switchD_00737a3f_caseD_5:
  piVar1 = (int *)(in_ECX + 0xfc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(in_ECX + 0xf8) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x80));
  return 0;
}



int FUN_00737b60(int *param_1)

{
  int *piVar1;
  LONG *pLVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 uVar3;
  undefined4 *puVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  LONG LVar10;
  byte *pbVar11;
  byte *pbVar12;
  int *in_ECX;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int *unaff_FS_OFFSET;
  uint uStack_494;
  uint uVar19;
  undefined4 uStack_47c;
  LPCRITICAL_SECTION p_Stack_478;
  undefined1 local_465 [5];
  LPCRITICAL_SECTION local_460;
  undefined1 local_45c [4];
  undefined1 local_458 [4];
  undefined1 local_454 [4];
  undefined1 local_450 [44];
  undefined1 auStack_424 [1024];
  int iStack_24;
  undefined4 uStack_1c;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cab0c;
  local_c = *unaff_FS_OFFSET;
  uStack_494 = DAT_00b30aac ^ (uint)&stack0xfffffb70;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070f2e0();
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x20);
  local_460 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  DVar6 = GetCurrentThreadId();
  in_ECX[0x3f] = in_ECX[0x3f] + 1;
  in_ECX[0x3e] = DVar6;
  cVar5 = (**(code **)(*in_ECX + 0xc))(param_1,local_458,local_454,local_450,local_465,local_45c);
  if (cVar5 == '\0') {
    piVar1 = in_ECX + 0x3f;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      in_ECX[0x3e] = 0;
    }
    LeaveCriticalSection(lpCriticalSection);
    iVar7 = 0;
  }
  else {
    if ((((iStack_10 == 0) || (**(int **)(iStack_10 + 0x54) != in_ECX[0x40])) ||
        (**(int **)(iStack_10 + 0x58) != in_ECX[0x41])) ||
       (cVar5 = FUN_0071ad40(in_ECX + 0x42), iVar7 = iStack_10, cVar5 == '\0')) {
      uStack_494 = FUN_00401f00(0x70);
      uStack_1c = 0;
      if (uStack_494 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_0070e560(in_ECX[0x40],in_ECX[0x41],in_ECX + 0x42,1,1);
      }
      uStack_1c = 0xffffffff;
    }
    cVar5 = FUN_0071ad40(&DAT_00b25d70);
    if (cVar5 == '\0') {
      (**(code **)(*param_1 + 0xc))(in_ECX[0x54] * 4,1);
    }
    else {
      (*(code *)param_1[1])(param_1,auStack_424,in_ECX[0x54] * 4,&stack0xfffffb74,1);
      iVar16 = in_ECX[0x54];
      if (iVar16 != 0) {
        puVar8 = auStack_424 + 2;
        do {
          uVar3 = puVar8[-2];
          puVar8[-2] = *puVar8;
          *puVar8 = uVar3;
          puVar8[1] = 0xff;
          puVar8 = puVar8 + 4;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      uStack_494 = FUN_00401f00(0x24);
      uStack_1c = 1;
      if (uStack_494 == 0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = (undefined4 *)FUN_00732750(0,0x100,auStack_424);
      }
      puVar4 = *(undefined4 **)(iVar7 + 0x4c);
      uStack_1c = 0xffffffff;
      if (puVar4 != puVar9) {
        if (((puVar4 != (undefined4 *)0x0) &&
            (LVar10 = InterlockedDecrement(puVar4 + 1), LVar10 == 0)) &&
           (puVar4 != (undefined4 *)0x0)) {
          (**(code **)*puVar4)(1);
        }
        *(undefined4 **)(iVar7 + 0x4c) = puVar9;
        if (puVar9 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar9 + 1);
        }
      }
    }
    iVar16 = in_ECX[0x55] + in_ECX[0x54] * -4 + -0x36;
    if (0 < iVar16) {
      (**(code **)(*param_1 + 0xc))(iVar16,1);
    }
    iVar16 = in_ECX[0x41];
    uVar17 = **(int **)(iVar7 + 0x54) * *(int *)(iVar7 + 100);
    if (*(ushort *)(in_ECX + 0x53) == 4) {
      uStack_494 = ((uint)in_ECX[0x40] >> 1) + (in_ECX[0x40] & 1U);
      if ((uStack_494 & 3) == 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = 4 - (uStack_494 & 3);
      }
      iVar16 = uStack_494 + iVar16;
      pbVar11 = (byte *)FUN_00401f00(iVar16);
      if ((char)in_ECX[0x56] == '\0') {
        pbVar15 = (byte *)(**(int **)(iVar7 + 0x5c) + *(int *)(iVar7 + 0x50));
      }
      else {
        pbVar15 = (byte *)((**(int **)(iVar7 + 0x58) + -1) * uVar17 + **(int **)(iVar7 + 0x5c) +
                          *(int *)(iVar7 + 0x50));
        uVar17 = -uVar17;
      }
      uVar19 = 0;
      if (in_ECX[0x41] != 0) {
        do {
          uStack_47c = 1;
          (*(code *)param_1[1])(param_1,pbVar11,iVar16,&uStack_47c,1);
          pbVar12 = pbVar15;
          pbVar13 = pbVar11;
          for (uVar18 = uStack_494; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pbVar12 = *pbVar13 >> 4;
            pbVar12[1] = *pbVar13 & 0xf;
            pbVar12 = pbVar12 + 2;
            pbVar13 = pbVar13 + 1;
          }
          pbVar15 = pbVar15 + uVar17;
          uVar19 = uVar19 + 1;
        } while (uVar19 < (uint)in_ECX[0x41]);
      }
      FUN_00401f20(pbVar11);
    }
    else if ((char)in_ECX[0x56] == '\0') {
      if ((uVar17 & 3) == 0) {
        (*(code *)param_1[1])
                  (param_1,**(int **)(iVar7 + 0x5c) + *(int *)(iVar7 + 0x50),
                   ((uint)*(ushort *)(in_ECX + 0x53) * in_ECX[0x40] + 0x1f >> 3 & 0x1ffffffc) *
                   iVar16,&stack0xfffffb7c,1);
      }
      else {
        iVar14 = **(int **)(iVar7 + 0x5c) + *(int *)(iVar7 + 0x50);
        uVar19 = 0;
        if (iVar16 != 0) {
          do {
            uStack_494 = 1;
            (*(code *)param_1[1])(param_1,iVar14,uVar17,&uStack_494,1);
            uStack_494 = 1;
            (*(code *)param_1[1])(param_1,&uStack_47c,4 - (uVar17 & 3),&uStack_494,1);
            uVar19 = uVar19 + 1;
            iVar14 = iVar14 + uVar17;
          } while (uVar19 < (uint)in_ECX[0x41]);
        }
      }
    }
    else {
      uVar19 = 0;
      iVar14 = (iVar16 + -1) * uVar17 + **(int **)(iVar7 + 0x5c) + *(int *)(iVar7 + 0x50);
      if ((uVar17 & 3) == 0) {
        if (iVar16 != 0) {
          do {
            uStack_494 = 1;
            (*(code *)param_1[1])(param_1,iVar14,uVar17,&uStack_494,1);
            uVar19 = uVar19 + 1;
            iVar14 = iVar14 - uVar17;
          } while (uVar19 < (uint)in_ECX[0x41]);
        }
      }
      else if (iVar16 != 0) {
        do {
          uStack_494 = 1;
          (*(code *)param_1[1])(param_1,iVar14,uVar17,&uStack_494,1);
          uStack_494 = 1;
          (*(code *)param_1[1])(param_1,&uStack_47c,4 - (uVar17 & 3),&uStack_494,1);
          uVar19 = uVar19 + 1;
          iVar14 = iVar14 - uVar17;
        } while (uVar19 < (uint)in_ECX[0x41]);
      }
    }
    cVar5 = FUN_0071ad40(&DAT_00b25e48);
    if ((cVar5 != '\0') || (cVar5 = FUN_0071ad40(&DAT_00b25e00), cVar5 != '\0')) {
      puVar8 = (undefined1 *)(**(int **)(iVar7 + 0x5c) + *(int *)(iVar7 + 0x50));
      iVar16 = *(int *)(iVar7 + 100);
      for (iVar14 = in_ECX[0x41] * in_ECX[0x40]; iVar14 != 0; iVar14 = iVar14 + -1) {
        uVar3 = *puVar8;
        *puVar8 = puVar8[2];
        puVar8[2] = uVar3;
        puVar8 = puVar8 + iVar16;
      }
    }
    pLVar2 = &p_Stack_478[5].LockCount;
    *pLVar2 = *pLVar2 + -1;
    if (*pLVar2 == 0) {
      p_Stack_478[5].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    }
    LeaveCriticalSection(p_Stack_478);
  }
  *unaff_FS_OFFSET = iStack_24;
  return iVar7;
}



void FUN_00738110(void)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  undefined2 uVar8;
  float *pfVar9;
  int *in_ECX;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  uint uStack_38;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  FUN_00728280(1);
  puVar12 = (ushort *)in_ECX[0x12];
  uVar7 = (**(code **)(*in_ECX + 0x5c))();
  uStack_38 = (uint)uVar7;
  if (uVar7 != 0) {
    do {
      uVar7 = *puVar12;
      uVar2 = puVar12[1];
      uVar3 = puVar12[2];
      puVar12 = puVar12 + 3;
      uVar11 = (uint)uVar7;
      iVar10 = in_ECX[7];
      iVar4 = (uint)uVar2 * 0xc;
      iVar5 = uVar11 * 0xc;
      fStack_c = *(float *)(iVar4 + iVar10) - *(float *)(iVar10 + iVar5);
      iVar6 = (uint)uVar3 * 0xc;
      fStack_8 = *(float *)(iVar4 + 4 + iVar10) - *(float *)(iVar10 + 4 + iVar5);
      fStack_4 = *(float *)(iVar4 + 8 + iVar10) - *(float *)(iVar10 + 8 + iVar5);
      fStack_18 = *(float *)(iVar10 + iVar6) - *(float *)(iVar4 + iVar10);
      fStack_14 = *(float *)(iVar10 + 4 + iVar6) - *(float *)(iVar4 + 4 + iVar10);
      fStack_10 = *(float *)(iVar10 + 8 + iVar6) - *(float *)(iVar4 + 8 + iVar10);
      fStack_24 = fStack_8 * fStack_10 - fStack_4 * fStack_14;
      fStack_20 = fStack_18 * fStack_4 - fStack_c * fStack_10;
      fStack_1c = fStack_14 * fStack_c - fStack_8 * fStack_18;
      FUN_004bfaa0(&fStack_24);
      pfVar9 = (float *)(in_ECX[8] + iVar5);
      *pfVar9 = fStack_24 + *(float *)(in_ECX[8] + iVar5);
      pfVar9[1] = fStack_20 + pfVar9[1];
      pfVar9[2] = fStack_1c + pfVar9[2];
      pfVar9 = (float *)(in_ECX[8] + iVar4);
      *pfVar9 = *(float *)(in_ECX[8] + iVar4) + fStack_24;
      pfVar9[1] = fStack_20 + pfVar9[1];
      pfVar9[2] = pfVar9[2] + fStack_1c;
      pfVar9 = (float *)(in_ECX[8] + iVar6);
      *pfVar9 = *(float *)(in_ECX[8] + iVar6) + fStack_24;
      pfVar9[1] = pfVar9[1] + fStack_20;
      pfVar9[2] = fStack_1c + pfVar9[2];
      iVar10 = in_ECX[0x13];
      if ((iVar10 != 0) && ((short)in_ECX[0x14] == (short)in_ECX[2])) {
        uVar7 = *(ushort *)(iVar10 + uVar11 * 8);
        if (uVar7 != 0) {
          iVar10 = *(int *)(iVar10 + 4 + uVar11 * 8) + (uint)uVar7 * 2;
          do {
            puVar1 = (ushort *)(iVar10 + -2);
            iVar10 = iVar10 + -2;
            pfVar9 = (float *)(in_ECX[8] + (uint)*puVar1 * 0xc);
            uVar7 = uVar7 - 1;
            *pfVar9 = *pfVar9 + fStack_24;
            pfVar9[1] = pfVar9[1] + fStack_20;
            pfVar9[2] = pfVar9[2] + fStack_1c;
          } while (uVar7 != 0);
        }
        puVar1 = (ushort *)(in_ECX[0x13] + (uint)uVar2 * 8);
        uVar7 = *puVar1;
        if (uVar7 != 0) {
          iVar10 = *(int *)(puVar1 + 2) + (uint)uVar7 * 2;
          do {
            puVar1 = (ushort *)(iVar10 + -2);
            iVar10 = iVar10 + -2;
            pfVar9 = (float *)(in_ECX[8] + (uint)*puVar1 * 0xc);
            uVar7 = uVar7 - 1;
            *pfVar9 = fStack_24 + *pfVar9;
            pfVar9[1] = fStack_20 + pfVar9[1];
            pfVar9[2] = pfVar9[2] + fStack_1c;
          } while (uVar7 != 0);
        }
        puVar1 = (ushort *)(in_ECX[0x13] + (uint)uVar3 * 8);
        uVar7 = *puVar1;
        if (uVar7 != 0) {
          iVar10 = *(int *)(puVar1 + 2) + (uint)uVar7 * 2;
          do {
            puVar1 = (ushort *)(iVar10 + -2);
            iVar10 = iVar10 + -2;
            pfVar9 = (float *)(in_ECX[8] + (uint)*puVar1 * 0xc);
            uVar7 = uVar7 - 1;
            *pfVar9 = *pfVar9 + fStack_24;
            pfVar9[1] = fStack_20 + pfVar9[1];
            pfVar9[2] = pfVar9[2] + fStack_1c;
          } while (uVar7 != 0);
        }
      }
      uStack_38 = uStack_38 - 1;
    } while (uStack_38 != 0);
  }
  uVar8 = (**(code **)(*in_ECX + 0x50))(0xc);
  FUN_00725890(in_ECX[8],uVar8);
  *(ushort *)((int)in_ECX + 0x2e) = *(ushort *)((int)in_ECX + 0x2e) | 2;
  return;
}



void FUN_007383c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00a80d1c;
  return;
}



uint FUN_007383f0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_00b40120 != (int *)0x0)) {
    uVar1 = (**(code **)(*DAT_00b40120 + 0x10))(param_1,param_2,param_3);
    return uVar1;
  }
  return param_1 & 0xffffff00;
}



uint FUN_00738420(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_00b40120 != (int *)0x0)) {
    uVar1 = (**(code **)(*DAT_00b40120 + 0x14))(param_1);
    return uVar1;
  }
  return param_1 & 0xffffff00;
}



void FUN_00738440(void)

{
  if (DAT_00b40120 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0073844f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_00b40120 + 0x20))();
    return;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00738460(undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  char local_804 [2048];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_804;
  if (DAT_00b40120 != 0) {
    _vsprintf_s(local_804,0x800,param_3,&stack0x00000010);
    if (*(int *)(DAT_00b40120 + 0x10) != 0) {
      uVar1 = (**(code **)(DAT_00b40120 + 0x10))(local_804,param_1,param_2);
      return uVar1;
    }
  }
  return 0;
}



undefined1 FUN_00738500(void)

{
  return 1;
}



void FUN_00738510(void)

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
  *in_ECX = &PTR_FUN_00a80d1c;
  local_4 = 0;
  if (DAT_00b40120 != (int *)0x0) {
    (**(code **)(*DAT_00b40120 + 0x20))(uVar1);
    if (DAT_00b40120 != (int *)0x0) {
      (**(code **)(*DAT_00b40120 + 0x30))();
    }
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00738590(byte param_1)

{
  FUN_00738510();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007385b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a80d8c;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}



void FUN_00738600(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a80d8c;
  FUN_00401f20(in_ECX[2]);
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  return;
}



void FUN_00738630(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int in_ECX;
  int iVar4;
  bool bVar5;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 8) = 0;
  if (param_1 != (char *)0x0) {
    iVar4 = 1;
    bVar5 = true;
    pcVar2 = param_1;
    pcVar3 = "";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar5 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar5);
    if (!bVar5) {
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcVar3 = (char *)FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
      *(char **)(in_ECX + 8) = pcVar3;
      _strcpy_s(pcVar3,(rsize_t)(pcVar2 + (1 - (int)(param_1 + 1))),param_1);
    }
  }
  return;
}



void FUN_007386a0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a80d8c;
  FUN_00401f20(in_ECX[2]);
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007386e0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00713620(in_ECX + 8);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0xc,4,&param_1,1);
  return;
}



void FUN_00738720(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00713720(*(undefined4 *)(in_ECX + 8));
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0xc,4,&param_1,1);
  return;
}



void FUN_00738760(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  *in_ECX = &PTR_FUN_00a80dbc;
  return;
}



void FUN_00738790(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a80dbc;
  FUN_0055ace0();
  return;
}



void FUN_007387a0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a80dbc;
  FUN_0055ace0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007387d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a80e28;
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}



void FUN_007387f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a80e28;
  FUN_00401f20(in_ECX[2]);
  FUN_00401f20(in_ECX[3]);
  FUN_00401f20(in_ECX[4]);
  return;
}



undefined4 * FUN_00738830(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xc0,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00717590();
    *puVar2 = &PTR_FUN_00a80e34;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a80ed4;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_00738920(uint param_1)

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
      _eh_vector_constructor_iterator_(puVar4,0x14,param_1,FUN_007387d0,FUN_007387f0);
    }
  }
  *in_ECX = puVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00738a40(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cab38;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0071fbb0(uVar1);
  *(undefined1 *)(in_ECX + 0x16) = 0;
  *(undefined1 *)((int)in_ECX + 0x59) = 0;
  in_ECX[0x17] = 0;
  *in_ECX = &PTR_FUN_00a80edc;
  *(undefined2 *)(in_ECX + 0x1a) = 4;
  *(undefined2 *)((int)in_ECX + 0x6e) = 4;
  local_4 = 0;
  *(undefined2 *)((int)in_ECX + 0x6a) = 0;
  *(undefined2 *)(in_ECX + 0x1b) = 0;
  in_ECX[0x18] = &PTR__scalar_deleting_destructor__00a80ed4;
  uVar2 = FUN_00401f00(0x10);
  in_ECX[0x19] = uVar2;
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
  local_10 = FUN_00401f00(0x70,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_00738a40();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



uint FUN_00738b50(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int local_34;
  uint local_2c;
  uint local_28;
  
  uVar3 = FUN_0071fde0(param_1);
  if (((((char)uVar3 == '\0') ||
       (uVar3 = CONCAT31((int3)(uVar3 >> 8),*(char *)(param_1 + 0x58)),
       *(char *)(param_1 + 0x58) != *(char *)(in_ECX + 0x58))) ||
      (uVar3 = (uint)*(ushort *)(param_1 + 0x6c), uVar3 != *(ushort *)(in_ECX + 0x6c))) ||
     (*(short *)(param_1 + 0x6a) != *(short *)(in_ECX + 0x6a))) {
    return uVar3 & 0xffffff00;
  }
  local_28 = 0;
  uVar4 = 0;
  if (uVar3 != 0) {
    piVar6 = *(int **)(in_ECX + 100);
    iVar12 = *(int *)(param_1 + 100) - (int)piVar6;
    do {
      uVar4 = *(uint *)(iVar12 + (int)piVar6);
      iVar10 = *piVar6;
      if (uVar4 == 0) {
        if (iVar10 != 0) goto LAB_00738d04;
      }
      else {
        if (iVar10 == 0) {
LAB_00738d04:
          return uVar4 & 0xffffff00;
        }
        uVar9 = (uint)*(ushort *)(uVar4 + 4);
        uVar7 = (uint)*(ushort *)(uVar4 + 6);
        if ((uVar9 != *(ushort *)(iVar10 + 4)) || (uVar7 != *(ushort *)(iVar10 + 6)))
        goto LAB_00738d04;
        iVar5 = *(int *)(uVar4 + 8);
        local_34 = *(int *)(uVar4 + 0xc);
        iVar1 = *(int *)(uVar4 + 0x10);
        iVar2 = *(int *)(iVar10 + 0x10);
        local_2c = 0;
        if (uVar9 != 0) {
          iVar13 = *(int *)(iVar10 + 8) - iVar5;
          iVar8 = *(int *)(iVar10 + 0xc) - local_34;
          iVar10 = iVar1;
          do {
            uVar4 = FUN_004b9d10(iVar13 + iVar5);
            if (((char)uVar4 != '\0') ||
               (uVar4 = FUN_00632310(iVar8 + local_34), (char)uVar4 != '\0')) goto LAB_00738d04;
            uVar14 = 0;
            if (uVar7 != 0) {
              iVar11 = iVar10;
              do {
                uVar4 = FUN_004b9d10((iVar2 - iVar1) + iVar11);
                if ((char)uVar4 != '\0') goto LAB_00738d04;
                uVar14 = uVar14 + 1;
                iVar11 = iVar11 + 8;
              } while (uVar14 < uVar7);
            }
            iVar5 = iVar5 + 8;
            local_34 = local_34 + 0x10;
            local_2c = local_2c + 1;
            iVar10 = iVar10 + uVar7 * 8;
          } while (local_2c < uVar9);
        }
      }
      uVar4 = local_28 + 1;
      piVar6 = piVar6 + 1;
      local_28 = uVar4;
    } while (uVar4 < uVar3);
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}



void FUN_00738d10(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a80e34;
  FUN_007226e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00738d40(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xc0,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00717590();
    *puVar2 = &PTR_FUN_00a80e34;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00723020(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00738dc0(ushort param_1,void *param_2,void *param_3,void *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cab89;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar2);
  *in_ECX = &PTR_FUN_00a80f4c;
  in_ECX[2] = 0;
  uVar2 = (uint)param_1;
  *(ushort *)(in_ECX + 3) = param_1;
  local_4 = 1;
  pvVar3 = (void *)FUN_00401f00(uVar2 * 0xc);
  in_ECX[4] = pvVar3;
  _memcpy(pvVar3,param_2,uVar2 * 0xc);
  if (param_3 == (void *)0x0) {
    in_ECX[5] = 0;
  }
  else {
    pvVar3 = (void *)FUN_00401f00(uVar2 * 8);
    in_ECX[5] = pvVar3;
    _memcpy(pvVar3,param_3,uVar2 * 8);
  }
  if (param_4 == (void *)0x0) {
    in_ECX[6] = 0;
  }
  else {
    pvVar3 = (void *)FUN_00401f00(uVar2 * 0x10);
    local_4._0_1_ = 2;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      _vector_constructor_iterator_(pvVar3,0x10,uVar2,FUN_0047ea50);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    in_ECX[6] = pvVar3;
    _memcpy(pvVar3,param_4,uVar2 << 4);
  }
  iVar4 = FUN_00401f00(0x30);
  local_4._0_1_ = 3;
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)FUN_007319e0();
  }
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = CONCAT31(local_4._1_3_,1);
  if (puVar1 != puVar5) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar1 + 1);
      if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[2] = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00738f70(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca4b8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a80f4c;
  local_4 = 0;
  FUN_00401f20(in_ECX[4],uVar2);
  FUN_00401f20(in_ECX[5]);
  FUN_00401f20(in_ECX[6]);
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00739010(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afb8b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00700770(param_1,param_2);
  iVar3 = FUN_00401f00(0x30,uVar2);
  local_4 = 0;
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_00731620(*(undefined4 *)(in_ECX + 8));
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  local_4 = 0xffffffff;
  if (puVar1 != puVar4) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(param_1 + 8) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_007390d0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a80f4c;
    puVar2[2] = 0;
    *(undefined2 *)(puVar2 + 3) = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined1 FUN_00739200(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  uint uVar2;
  
  cVar1 = FUN_00700650(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = 8;
  do {
    (**(code **)(**(int **)(uVar2 + *(int *)(in_ECX + 8)) + 0x24))(param_1);
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x30);
  return 1;
}



void FUN_00739420(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  
  FUN_00707ab0(param_1);
  uVar2 = 0;
  if (*(short *)(in_ECX + 0x12e) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x128) + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x38))(param_1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0x12e));
  }
  if (*(short *)(in_ECX + 0x13e) != 0) {
    uVar2 = 0;
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x138) + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x38))(param_1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0x13e));
  }
  return;
}



void FUN_007394a0(ushort param_1,undefined2 param_2)

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
  *in_ECX = &PTR_FUN_00a80f9c;
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

void FUN_007395a0(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  
  if ((_DAT_00b4015c & 1) == 0) {
    _DAT_00b4015c = _DAT_00b4015c | 1;
    DAT_00b40158 = 0;
    _atexit(FUN_00a26b90);
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == DAT_00b40158) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != DAT_00b40158) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == DAT_00b40158) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != DAT_00b40158) {
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



void FUN_00739670(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  ushort uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7c98;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  if (*(short *)(in_ECX + 10) != 0) {
    do {
      iVar1 = *(int *)(in_ECX + 4);
      puVar2 = *(undefined4 **)(iVar1 + (uint)uVar5 * 4);
      local_4 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(puVar2 + 1);
        if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1,uVar3);
        }
        *(undefined4 *)(iVar1 + (uint)uVar5 * 4) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(in_ECX + 10));
  }
  *(undefined2 *)(in_ECX + 0xc) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00739710(ushort param_1,undefined2 param_2)

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
  *in_ECX = &PTR_FUN_00a80fa4;
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

void FUN_00739810(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  
  if ((_DAT_00b40164 & 1) == 0) {
    _DAT_00b40164 = _DAT_00b40164 | 1;
    DAT_00b40160 = 0;
    _atexit(FUN_00a26b60);
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == DAT_00b40160) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != DAT_00b40160) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == DAT_00b40160) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != DAT_00b40160) {
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



void FUN_007398e0(byte param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  pvVar1 = (void *)in_ECX[1];
  *in_ECX = &PTR_FUN_00a80f9c;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00739930(byte param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  pvVar1 = (void *)in_ECX[1];
  *in_ECX = &PTR_FUN_00a80fa4;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00739980(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [4];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c74db;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)auStack_10;
  *unaff_FS_OFFSET = (int)&local_c;
  DAT_00b40134 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  if (DAT_00b40134 != (undefined4 *)0x0) {
    *DAT_00b40134 = 0;
    DAT_00b40134[1] = 0;
    DAT_00b40134[2] = 0;
    DAT_00b40134[3] = 8;
    DAT_00b40134[4] = 8;
    DAT_00b40134[5] = 0;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  DAT_00b40134 = (undefined4 *)0x0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00739a00(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  char cStack_22;
  undefined1 local_21;
  uint uStack_20;
  uint uStack_1c;
  int iStack_18;
  uint uStack_14;
  int local_10;
  uint uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  local_10 = in_ECX;
  FUN_007201b0(param_1);
  local_21 = *(undefined1 *)(in_ECX + 0x58);
  param_1 = 1;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&local_21,1,&param_1,1);
  uStack_1c = (uint)*(ushort *)(in_ECX + 0x6a);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&uStack_1c,4,&param_1,1);
  uStack_c = 0;
  if (uStack_1c != 0) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 100) + uStack_c * 4);
      if (iVar2 == 0) {
        uStack_20 = 0;
      }
      else {
        uStack_20 = (uint)*(ushort *)(iVar2 + 4);
      }
      param_1 = 2;
      (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&uStack_20,2,&param_1,1);
      if ((short)uStack_20 != 0) {
        iStack_18 = *(int *)(iVar2 + 0xc);
        uStack_4 = *(undefined4 *)(iVar2 + 0x10);
        uStack_14 = (uint)*(ushort *)(iVar2 + 6);
        param_1 = CONCAT31(param_1._1_3_,*(int *)(iVar2 + 8) != 0);
        uStack_8 = 1;
        (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&param_1,1,&uStack_8,1);
        if ((char)param_1 != '\0') {
          uVar3 = 0;
          if ((short)uStack_20 != 0) {
            do {
              FUN_00714bf0(iVar1);
              uVar3 = uVar3 + 1;
            } while (uVar3 < (uStack_20 & 0xffff));
          }
        }
        cStack_22 = iStack_18 != 0;
        uStack_8 = 1;
        (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&cStack_22,1,&uStack_8,1)
        ;
        if (cStack_22 != '\0') {
          uVar3 = 0;
          if ((short)uStack_20 != 0) {
            do {
              FUN_00709510(iVar1);
              uVar3 = uVar3 + 1;
            } while (uVar3 < (uStack_20 & 0xffff));
          }
        }
        uStack_8 = 2;
        (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&uStack_14,2,&uStack_8,1)
        ;
        in_ECX = local_10;
        if ((short)uStack_14 != 0) {
          for (iVar2 = (uStack_14 & 0xffff) * (uStack_20 & 0xffff); local_10 = in_ECX, iVar2 != 0;
              iVar2 = iVar2 + -1) {
            FUN_00714bf0(iVar1);
            in_ECX = local_10;
          }
        }
      }
      uStack_c = uStack_c + 1;
    } while (uStack_c < uStack_1c);
  }
  return;
}



void FUN_00739c20(byte param_1)

{
  FUN_00738f70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00739c40(undefined4 param_1)

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
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x1c,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00738dc0(*(undefined2 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x10),
                         *(undefined4 *)(in_ECX + 0x14),*(undefined4 *)(in_ECX + 0x18));
  }
  local_4 = 0xffffffff;
  FUN_00739010(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_00739cd0(int param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  undefined4 *puVar5;
  int iVar6;
  ushort uVar7;
  char cStack_5;
  undefined4 local_4;
  
  iVar2 = param_1;
  FUN_007008a0(param_1);
  puVar1 = (ushort *)(in_ECX + 0xc);
  local_4 = 2;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),puVar1,2,&local_4,1);
  uVar3 = FUN_00401f00((uint)*puVar1 * 0xc);
  *(undefined4 *)(in_ECX + 0x10) = uVar3;
  if (*puVar1 != 0) {
    uVar7 = 0;
    do {
      FUN_00709430(iVar2);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *puVar1);
  }
  iVar4 = *(int *)(iVar2 + 0x21c);
  if (*(uint *)(iVar2 + 0xd8) < 0x4010000) {
    local_4 = 4;
    (**(code **)(iVar4 + 4))(iVar4,(int *)(in_ECX + 0x14),4,&local_4);
    param_1 = CONCAT31(param_1._1_3_,*(int *)(in_ECX + 0x14) != 0);
  }
  else {
    local_4 = 1;
    (**(code **)(iVar4 + 4))(iVar4,&param_1,1,&local_4,1);
  }
  if ((char)param_1 != '\0') {
    uVar3 = FUN_00401f00((uint)*puVar1 * 8);
    uVar7 = 0;
    *(undefined4 *)(in_ECX + 0x14) = uVar3;
    if (*puVar1 != 0) {
      do {
        FUN_00714ba0(iVar2);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *puVar1);
    }
  }
  iVar4 = *(int *)(iVar2 + 0x21c);
  if (*(uint *)(iVar2 + 0xd8) < 0x4010000) {
    local_4 = 4;
    (**(code **)(iVar4 + 4))(iVar4,(int *)(in_ECX + 0x18),4,&local_4);
    cStack_5 = *(int *)(in_ECX + 0x18) != 0;
  }
  else {
    local_4 = 1;
    (**(code **)(iVar4 + 4))(iVar4,&cStack_5,1,&local_4,1);
  }
  if (cStack_5 != '\0') {
    uVar7 = *puVar1;
    iVar4 = FUN_00401f00((uint)uVar7 * 0x10);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar6 = uVar7 - 1;
      if (-1 < iVar6) {
        puVar5 = (undefined4 *)(iVar4 + 8);
        do {
          puVar5[-2] = 0;
          iVar6 = iVar6 + -1;
          puVar5[-1] = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5 = puVar5 + 4;
        } while (-1 < iVar6);
      }
    }
    uVar7 = 0;
    *(int *)(in_ECX + 0x18) = iVar4;
    if (*puVar1 != 0) {
      do {
        FUN_00715420(iVar2);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *puVar1);
    }
  }
  FUN_00712ae0();
  return;
}



void FUN_0073a030(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cabd4;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070d590(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a80fac;
  FUN_00739710(5,5);
  local_4._0_1_ = 1;
  FUN_007394a0(5,5);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(in_ECX + 0x41) = 1;
  FUN_0070d430();
  FUN_0070cc70();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0073a0d0(void)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined4 local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cac24;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a80fac;
  uVar3 = 0;
  local_4._1_3_ = 0;
  if (*(short *)((int)in_ECX + 0x12e) != 0) {
    local_14[0] = 0;
    do {
      local_4._0_1_ = 3;
      FUN_00739810(uVar3,local_14);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)((int)in_ECX + 0x12e));
  }
  local_4._0_1_ = 2;
  FUN_00739670(uVar2);
  uVar3 = 0;
  if (*(short *)((int)in_ECX + 0x13e) != 0) {
    local_14[0] = 0;
    do {
      local_4._0_1_ = 4;
      FUN_007395a0(uVar3,local_14);
      uVar3 = uVar3 + 1;
      local_4._0_1_ = 2;
    } while (uVar3 < *(ushort *)((int)in_ECX + 0x13e));
  }
  FUN_00739670(uVar2);
  in_ECX[0x4d] = &PTR_FUN_00a80f9c;
  pvVar1 = (void *)in_ECX[0x4e];
  local_4._0_1_ = 1;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  pvVar1 = (void *)in_ECX[0x4a];
  local_4 = (uint)local_4._1_3_ << 8;
  in_ECX[0x49] = &PTR_FUN_00a80fa4;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_0070c170();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0073a220(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_14;
  int *local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cac70;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070d050(param_1,param_2);
  FUN_006c4510(*(undefined2 *)(in_ECX + 0x12e));
  uVar5 = 0;
  *(undefined2 *)(param_1 + 0x132) = *(undefined2 *)(in_ECX + 0x132);
  if (*(short *)(in_ECX + 0x12e) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x128) + uVar5 * 4);
      local_10 = piVar1;
      if (piVar1 != (int *)0x0) {
        InterlockedIncrement(piVar1 + 1);
      }
      local_4 = 0;
      if (piVar1 == (int *)0x0) {
        puStack_14 = (undefined4 *)0x0;
        local_4 = 2;
        FUN_00739810(uVar5,&puStack_14);
      }
      else {
        puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x18))(param_2,uVar2);
        puStack_14 = puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar3 + 1);
        }
        local_4._0_1_ = 1;
        FUN_00739810(uVar5,&puStack_14);
        local_4 = (uint)local_4._1_3_ << 8;
        if ((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0))
        {
          (**(code **)*puVar3)(1);
        }
      }
      local_4 = 0xffffffff;
      if ((piVar1 != (int *)0x0) && (LVar4 = InterlockedDecrement(piVar1 + 1), LVar4 == 0)) {
        (**(code **)*piVar1)(1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(in_ECX + 0x12e));
  }
  FUN_006c4510(*(undefined2 *)(in_ECX + 0x13e));
  uVar2 = 0;
  *(undefined2 *)(param_1 + 0x142) = *(undefined2 *)(in_ECX + 0x142);
  if (*(short *)(in_ECX + 0x13e) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x138) + uVar2 * 4);
      local_10 = piVar1;
      if (piVar1 != (int *)0x0) {
        InterlockedIncrement(piVar1 + 1);
      }
      local_4 = 3;
      if (piVar1 == (int *)0x0) {
        puStack_14 = (undefined4 *)0x0;
        local_4 = 5;
        FUN_007395a0(uVar2,&puStack_14);
      }
      else {
        puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x18))(param_2);
        puStack_14 = puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar3 + 1);
        }
        local_4._0_1_ = 4;
        FUN_007395a0(uVar2,&puStack_14);
        local_4 = CONCAT31(local_4._1_3_,3);
        if ((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0))
        {
          (**(code **)*puVar3)(1);
        }
      }
      local_4 = 0xffffffff;
      if ((piVar1 != (int *)0x0) && (LVar4 = InterlockedDecrement(piVar1 + 1), LVar4 == 0)) {
        (**(code **)*piVar1)(1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0x13e));
  }
  *unaff_FS_OFFSET = local_c;
  return;
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
  local_10 = FUN_00401f00(0x144,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_0073a030();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_0073a510(uint param_1)

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
    local_10 = (int *)FUN_00738920(param_1);
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



void FUN_0073a5e0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  uVar1 = in_ECX[2];
  uVar2 = 0;
  if (uVar1 != 0) {
    piVar4 = (int *)*in_ECX;
    do {
      if (*piVar4 == *param_1) {
        if (uVar2 != 0xffffffff) {
          return;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar2 < uVar1);
  }
  uVar2 = in_ECX[1];
  if (uVar1 == uVar2) {
    if (uVar2 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = uVar2 * 2;
    }
    FUN_006e8ca0(iVar3);
  }
  *(int *)(*in_ECX + in_ECX[2] * 4) = *param_1;
  in_ECX[2] = in_ECX[2] + 1;
  return;
}



void FUN_0073a640(void)

{
  int iVar1;
  
  iVar1 = DAT_00b40134;
  if (DAT_00b40134 != 0) {
    FUN_006ebcb0();
    FUN_00401f20(iVar1);
  }
  return;
}



void FUN_0073a730(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00717790(param_1);
  param_1 = FUN_0070f910(DAT_00b40140);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0073a960(byte param_1)

{
  FUN_0073a0d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_0073a980(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x144,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_0073a030();
  }
  local_4 = 0xffffffff;
  FUN_0073a220(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_0073aa00(undefined4 param_1)

{
  ushort uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  
  FUN_0070d440(param_1);
  uVar1 = *(ushort *)(in_ECX + 0x12e);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = (uint)*(ushort *)(in_ECX + 0x12e);
      iVar2 = *(int *)(in_ECX + 0x128);
      if (*(ushort *)(in_ECX + 300) <= uVar3) {
        FUN_006c4510(*(ushort *)(in_ECX + 0x132) + uVar3);
      }
      FUN_00739810(uVar3,iVar2 + uVar4 * 4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  FUN_00739670();
  uVar1 = *(ushort *)(in_ECX + 0x13e);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = (uint)*(ushort *)(in_ECX + 0x13e);
      iVar2 = *(int *)(in_ECX + 0x138);
      if (*(ushort *)(in_ECX + 0x13c) <= uVar3) {
        FUN_006c4510(*(ushort *)(in_ECX + 0x142) + uVar3);
      }
      FUN_007395a0(uVar3,iVar2 + uVar4 * 4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  FUN_00739670();
  return;
}



void FUN_0073aae0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0070dc20(param_1);
  param_1 = FUN_0070f910(DAT_00b40138);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0073ab30(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009caca3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a80edc;
  uVar3 = 0;
  local_4 = 1;
  if (*(short *)((int)in_ECX + 0x6a) != 0) {
    do {
      iVar1 = *(int *)(in_ECX[0x19] + uVar3 * 4);
      if (uVar3 < *(ushort *)((int)in_ECX + 0x6a)) {
        if (*(int *)(in_ECX[0x19] + uVar3 * 4) != 0) {
          *(short *)(in_ECX + 0x1b) = *(short *)(in_ECX + 0x1b) + -1;
        }
      }
      else {
        *(short *)((int)in_ECX + 0x6a) = (short)uVar3 + 1;
      }
      *(undefined4 *)(in_ECX[0x19] + uVar3 * 4) = 0;
      if (iVar1 != 0) {
        FUN_00401f20(*(undefined4 *)(iVar1 + 8),uVar2);
        FUN_00401f20(*(undefined4 *)(iVar1 + 0xc));
        FUN_00401f20(*(undefined4 *)(iVar1 + 0x10));
        local_14[0] = iVar1;
        FUN_0073a5e0(local_14);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)((int)in_ECX + 0x6a));
  }
  FUN_004e4a10(0);
  in_ECX[0x18] = &PTR__scalar_deleting_destructor__00a80ed4;
  FUN_00401f20(in_ECX[0x19],uVar2);
  local_4 = 0xffffffff;
  FUN_0071fbe0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0073ac20(int param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int in_ECX;
  int *piVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  char cStack_32;
  char cStack_31;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  int *piStack_20;
  int local_1c;
  int *piStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar3 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009caccb;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(uint *)(param_1 + 0xd8) < 0xa00010f) {
    FUN_00729450(param_1);
  }
  else {
    FUN_0071fec0(param_1);
  }
  local_1c = 1;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),&param_1,1,&local_1c,1,uVar4);
  *(bool *)(in_ECX + 0x58) = (char)param_1 != '\0';
  if (*(uint *)(iVar3 + 0xd8) < 0xa00010f) {
    local_1c = 2;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),&uStack_30,2,&local_1c,1);
    *(short *)(in_ECX + 8) = (short)uStack_30;
    local_1c = 2;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),in_ECX + 0x40,2,&local_1c,1);
  }
  if (*(uint *)(iVar3 + 0xd8) < 0xa00010f) {
    local_1c = 2;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),&uStack_30,2,&local_1c,1);
    *(uint *)(in_ECX + 0x44) = uStack_30 & 0xffff;
    if ((short)uStack_30 != 0) {
      uVar5 = FUN_00401f00((uStack_30 & 0xffff) * 2);
      local_1c = 2;
      *(undefined4 *)(in_ECX + 0x48) = uVar5;
      (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
                (*(int *)(iVar3 + 0x21c),uVar5,(uStack_30 & 0xffff) * 2,&local_1c,1);
    }
  }
  uStack_28 = 0;
  local_1c = 4;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),&uStack_28,4,&local_1c,1);
  if (uStack_28 != 0) {
    iStack_10 = in_ECX + 0x60;
    FUN_004e4a10(uStack_28);
    uStack_30 = 0;
    if (uStack_28 != 0) {
      do {
        uStack_2c = 0;
        local_1c = 2;
        (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),&uStack_2c,2,&local_1c,1)
        ;
        if ((short)uStack_2c != 0) {
          uStack_24 = 0;
          iVar8 = 0;
          piStack_20 = (int *)0x0;
          local_1c = 0;
          piStack_18 = (int *)0x1;
          (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
                    (*(int *)(iVar3 + 0x21c),&cStack_32,1,&piStack_18,1);
          if (cStack_32 != '\0') {
            iVar8 = FUN_00401f00((uStack_2c & 0xffff) * 8);
            piStack_18 = (int *)0x8;
            (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
                      (*(int *)(iVar3 + 0x21c),iVar8,(uStack_2c & 0xffff) * 8,&piStack_18,1);
          }
          piStack_18 = (int *)0x1;
          (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
                    (*(int *)(iVar3 + 0x21c),&cStack_31,1,&piStack_18,1);
          if (cStack_31 != '\0') {
            uVar4 = uStack_2c & 0xffff;
            piVar6 = (int *)FUN_00401f00(uVar4 * 0x10);
            uStack_4 = 0;
            piVar7 = (int *)0x0;
            if (piVar6 != (int *)0x0) {
              piStack_18 = piVar6;
              _vector_constructor_iterator_(piVar6,0x10,uVar4,FUN_0047ea50);
              piVar7 = piVar6;
            }
            uStack_4 = 0xffffffff;
            piStack_18 = (int *)0x10;
            piStack_20 = piVar7;
            (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
                      (*(int *)(iVar3 + 0x21c),piVar7,(uStack_2c & 0xffff) << 4,&piStack_18,1);
          }
          piStack_18 = (int *)0x2;
          (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
                    (*(int *)(iVar3 + 0x21c),&uStack_24,2,&piStack_18,1);
          if ((short)uStack_24 != 0) {
            uVar4 = (uStack_24 & 0xffff) * (uStack_2c & 0xffff);
            lVar2 = (ulonglong)uVar4 * 8;
            local_1c = FUN_00401f00(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
            uStack_14 = 8;
            (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
                      (*(int *)(iVar3 + 0x21c),local_1c,uVar4 * 8,&uStack_14,1);
          }
          piVar6 = DAT_00b40134;
          piVar7 = DAT_00b40134 + 2;
          if (DAT_00b40134[2] == 0) {
            piStack_18 = DAT_00b40134 + 3;
            FUN_0073a510(DAT_00b40134[3]);
            *piStack_18 = *piStack_18 * 2;
          }
          piVar6 = (int *)*piVar6;
          piVar1 = (int *)*piVar6;
          *piVar7 = *piVar7 + -1;
          *piVar6 = piVar6[*piVar7];
          piStack_18 = piVar1;
          FUN_00401f20(piVar1[2]);
          *(short *)(piVar1 + 1) = (short)uStack_2c;
          piVar1[2] = iVar8;
          FUN_00401f20(piVar1[3]);
          piVar1[3] = (int)piStack_20;
          FUN_00401f20(piVar1[4]);
          piVar1[4] = local_1c;
          *(undefined2 *)((int)piVar1 + 6) = (undefined2)uStack_24;
          FUN_0042bb90(uStack_30,&piStack_18);
        }
        uStack_30 = uStack_30 + 1;
      } while (uStack_30 < uStack_28);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0073b050(byte param_1)

{
  FUN_0073ab30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0073b080(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8105c;
  FUN_00721410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_0073b0b0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00721350();
    puVar2[6] = 0;
    *puVar2 = &PTR_FUN_00a8105c;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



undefined4 * FUN_0073b170(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00721350();
    puVar2[6] = 0;
    *puVar2 = &PTR_FUN_00a8105c;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
  }
  local_4 = 0xffffffff;
  FUN_007214a0(puVar2,param_1);
  puVar2[3] = *(undefined4 *)(in_ECX + 0xc);
  puVar2[4] = *(undefined4 *)(in_ECX + 0x10);
  puVar2[5] = *(undefined4 *)(in_ECX + 0x14);
  puVar2[6] = *(undefined4 *)(in_ECX + 0x18);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_0073b220(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  FUN_00721610(param_1);
  if (*(uint *)(iVar1 + 0xd8) < 0x500000e) {
    FUN_00709430(iVar1);
    *(undefined4 *)(in_ECX + 0xc) = local_c;
    *(undefined4 *)(in_ECX + 0x10) = local_8;
    *(undefined4 *)(in_ECX + 0x14) = local_4;
    *(undefined4 *)(in_ECX + 0x18) = 0;
    return;
  }
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0xc,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x10,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x14,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x18,4,&param_1,1);
  return;
}



void FUN_0073b2f0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_006fe000(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0xc,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x10,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x14,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x18,4,&param_1,1);
  return;
}



void FUN_0073b430(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined2 param_12,
                 undefined2 param_13)

{
  undefined4 *in_ECX;
  
  FUN_00719cb0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11);
  *(undefined2 *)((int)in_ECX + 0x52) = param_13;
  *in_ECX = &PTR_FUN_00a810dc;
  *(undefined2 *)(in_ECX + 0x14) = param_12;
  return;
}



undefined4 * FUN_0073b520(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x54,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00719d20();
    *puVar2 = &PTR_FUN_00a810dc;
    *(undefined2 *)(puVar2 + 0x14) = 0;
    *(undefined2 *)((int)puVar2 + 0x52) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 FUN_0073b770(float *param_1)

{
  float *in_ECX;
  
  if ((((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) &&
     (param_1[3] == in_ECX[3])) {
    return 1;
  }
  return 0;
}



void FUN_0073b7c0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  float fVar7;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined1 local_78 [12];
  undefined1 local_6c [36];
  undefined1 local_48 [36];
  undefined1 local_24 [36];
  
  iVar4 = *(int *)(in_ECX + 0x14c);
  if (iVar4 == 2) {
    *(undefined4 *)(in_ECX + 0x134) = 0x3f000000;
    *(undefined4 *)(in_ECX + 0x130) = 0x3f000000;
    *(undefined4 *)(in_ECX + 0x138) = 0;
    *(float *)(in_ECX + 0x10c) = *(float *)(in_ECX + 0x6c) * 0.5;
    *(float *)(in_ECX + 0x118) = *(float *)(in_ECX + 0x68) * -0.5;
    *(undefined4 *)(in_ECX + 0x124) = 0;
    *(float *)(in_ECX + 0x110) = *(float *)(in_ECX + 0x78) * 0.5;
    *(float *)(in_ECX + 0x11c) = *(float *)(in_ECX + 0x74) * -0.5;
    *(undefined4 *)(in_ECX + 0x128) = 0;
    *(float *)(in_ECX + 0x114) = *(float *)(in_ECX + 0x84) * 0.5;
    *(float *)(in_ECX + 0x120) = *(float *)(in_ECX + 0x80) * -0.5;
    *(undefined4 *)(in_ECX + 300) = 0;
  }
  else if ((iVar4 == 3) || (iVar4 == 4)) {
    *(undefined4 *)(in_ECX + 0x138) = 0;
    *(undefined4 *)(in_ECX + 0x134) = 0;
    *(undefined4 *)(in_ECX + 0x130) = 0;
    uVar1 = FUN_00710400(local_48);
    puVar2 = (undefined4 *)FUN_007100a0(local_6c,uVar1);
    puVar5 = (undefined4 *)(in_ECX + 0x10c);
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    puVar6 = local_24;
    fVar7 = 1.0 / *(float *)(in_ECX + 0x94);
    uVar1 = FUN_00710400(local_6c);
    FUN_007100a0(local_48,uVar1);
    puVar2 = (undefined4 *)FUN_00710190(puVar6,fVar7);
    puVar5 = (undefined4 *)(in_ECX + 0x10c);
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    pfVar3 = (float *)FUN_007101f0(local_78,in_ECX + 0x88);
    local_84 = *(float *)(in_ECX + 0x100) - *pfVar3;
    local_80 = *(float *)(in_ECX + 0x104) - pfVar3[1];
    local_7c = *(float *)(in_ECX + 0x108) - pfVar3[2];
    *(float *)(in_ECX + 0x130) = local_84;
    *(float *)(in_ECX + 0x134) = local_80;
    *(float *)(in_ECX + 0x138) = local_7c;
  }
  FUN_007101f0(&local_90,in_ECX + 0x154);
  *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 1;
  *(float *)(in_ECX + 0x164) = local_90;
  *(float *)(in_ECX + 0x168) = local_8c;
  *(float *)(in_ECX + 0x16c) = local_88;
  *(float *)(in_ECX + 0x170) =
       *(float *)(in_ECX + 0x160) * *(float *)(in_ECX + 0x94) +
       *(float *)(in_ECX + 0x90) * local_88 +
       *(float *)(in_ECX + 0x88) * local_90 + *(float *)(in_ECX + 0x8c) * local_8c;
  return;
}



void FUN_0073ba10(void)

{
  FUN_0070c120();
  FUN_0073b7c0();
  return;
}



undefined4 FUN_0073ba20(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0x19 - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  switch(param_2) {
  case 0:
    FUN_006c5d40(uVar3,pcVar2,"%s = PROJECTED_LIGHT",param_1);
    return uVar3;
  case 1:
    FUN_006c5d40(uVar3,pcVar2,"%s = PROJECTED_SHADOW",param_1);
    return uVar3;
  case 2:
    FUN_006c5d40(uVar3,pcVar2,"%s = ENVIRONMENT_MAP",param_1);
    return uVar3;
  case 3:
    FUN_006c5d40(uVar3,pcVar2,"%s = FOG_MAP",param_1);
  }
  return uVar3;
}



undefined4 FUN_0073bad0(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0x19 - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  switch(param_2) {
  case 0:
    FUN_006c5d40(uVar3,pcVar2,"%s = WORLD_PARALLEL",param_1);
    return uVar3;
  case 1:
    FUN_006c5d40(uVar3,pcVar2,"%s = WORLD_PERSPECTIVE",param_1);
    return uVar3;
  case 2:
    FUN_006c5d40(uVar3,pcVar2,"%s = SPHERE_MAP",param_1);
    return uVar3;
  case 3:
    FUN_006c5d40(uVar3,pcVar2,"%s = SPECULAR_CUBE_MAP",param_1);
    return uVar3;
  case 4:
    FUN_006c5d40(uVar3,pcVar2,"%s = DIFFUSE_CUBE_MAP",param_1);
  }
  return uVar3;
}



void FUN_0073bb90(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad06;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007090c0(uVar1);
  *in_ECX = &PTR_FUN_00a8120c;
  puVar3 = &DAT_00b26dc4;
  puVar4 = in_ECX + 0x37;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  puVar3 = &DAT_00b26dc4;
  puVar4 = in_ECX + 0x43;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  local_4 = 1;
  FUN_00716de0(&DAT_00b258d0,0);
  FUN_00716de0(&DAT_00b258d0,0);
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 3;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  *(undefined1 *)(in_ECX + 0x54) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0073bca0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009cad46;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8120c;
  local_4 = 1;
  FUN_00701480();
  puVar1 = (undefined4 *)in_ECX[0x4f];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  local_4 = 0xffffffff;
  FUN_00708da0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0073bd30(int param_1,undefined4 param_2)

{
  LONG LVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_00708b00(param_1,param_2);
  puVar3 = *(undefined4 **)(param_1 + 0x13c);
  if (puVar3 != *(undefined4 **)(in_ECX + 0x13c)) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar1 = InterlockedDecrement(puVar3 + 1);
      if ((LVar1 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    iVar2 = *(int *)(in_ECX + 0x13c);
    *(int *)(param_1 + 0x13c) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  puVar3 = (undefined4 *)(in_ECX + 0xdc);
  puVar4 = (undefined4 *)(param_1 + 0xdc);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(in_ECX + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(in_ECX + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(in_ECX + 0x108);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(in_ECX + 0x140);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(in_ECX + 0x144);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(in_ECX + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(in_ECX + 0x14c);
  *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(in_ECX + 0x150);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(in_ECX + 0x154);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(in_ECX + 0x158);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(in_ECX + 0x15c);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(in_ECX + 0x160);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(in_ECX + 0x164);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(in_ECX + 0x168);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(in_ECX + 0x16c);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(in_ECX + 0x170);
  return;
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
  local_10 = FUN_00401f00(0x174,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_0073bb90();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_0073c010(byte param_1)

{
  FUN_0073bca0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_0073c030(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x174,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_0073bb90();
  }
  local_4 = 0xffffffff;
  FUN_0073bd30(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_0073c0b0(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  FUN_00708eb0(param_1);
  FUN_00711b90(iVar1);
  FUN_00709430(iVar1);
  local_8 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&local_4,4,&local_8,1);
  *(undefined4 *)(in_ECX + 0x140) = local_4;
  local_4 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&local_8,4,&local_4,1);
  *(undefined4 *)(in_ECX + 0x144) = local_8;
  local_4 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&local_8,4,&local_4,1);
  *(undefined4 *)(in_ECX + 0x148) = local_8;
  local_4 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&local_8,4,&local_4,1);
  *(undefined4 *)(in_ECX + 0x14c) = local_8;
  FUN_00712a20();
  local_4 = 1;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,1,&local_4,1);
  *(bool *)(in_ECX + 0x150) = (char)param_1 != '\0';
  FUN_00716ea0(iVar1);
  if (*(uint *)(iVar1 + 0xd8) < 0xa030004) {
    local_4 = 2;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&local_8,2,&local_4,1);
    local_4 = 2;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&local_8,2,&local_4,1);
  }
  if (*(uint *)(iVar1 + 0xd8) < 0x4010010) {
    local_4 = 2;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&local_8,2,&local_4,1);
  }
  return;
}



void FUN_0073c5e0(void)

{
  undefined4 *in_ECX;
  uint uVar1;
  
  uVar1 = 0;
  *in_ECX = &PTR_FUN_00a81314;
  if (in_ECX[3] != 0) {
    do {
      FUN_00401f20(*(undefined4 *)(in_ECX[4] + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)in_ECX[3]);
  }
  FUN_00401f20(in_ECX[4]);
  in_ECX[4] = 0;
  FUN_00721410();
  return;
}



void FUN_0073c630(int param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  char *pcVar6;
  int in_ECX;
  uint uVar7;
  
  FUN_007214a0(param_1,param_2);
  if ((*(int *)(in_ECX + 0x10) != 0) && (*(int *)(in_ECX + 0xc) != 0)) {
    *(int *)(param_1 + 0xc) = *(int *)(in_ECX + 0xc);
    iVar3 = *(int *)(in_ECX + 0x14);
    if ((iVar3 < 0) || (*(int *)(in_ECX + 0xc) <= iVar3)) {
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x14) = iVar3;
    }
    lVar4 = (ulonglong)*(uint *)(in_ECX + 0xc) * 4;
    uVar5 = FUN_00401f00(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
    uVar7 = 0;
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    if (*(int *)(in_ECX + 0xc) != 0) {
      do {
        if (*(int *)(*(int *)(in_ECX + 0x10) + uVar7 * 4) == 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar7 * 4) = 0;
        }
        else {
          pcVar6 = *(char **)(*(int *)(in_ECX + 0x10) + uVar7 * 4);
          pcVar1 = pcVar6 + 1;
          do {
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          uVar5 = FUN_00401f00(pcVar6 + (1 - (int)pcVar1));
          *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar7 * 4) = uVar5;
          _strcpy_s(*(char **)(*(int *)(param_1 + 0x10) + uVar7 * 4),
                    (rsize_t)(pcVar6 + (1 - (int)pcVar1)),
                    *(char **)(*(int *)(in_ECX + 0x10) + uVar7 * 4));
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(in_ECX + 0xc));
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



undefined4 * FUN_0073c710(void)

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
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a81314;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[5] = 0xffffffff;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



uint FUN_0073c7a0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint in_EAX;
  byte *pbVar4;
  uint uVar5;
  int in_ECX;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  uVar2 = *(uint *)(in_ECX + 0xc);
  if ((uVar2 != *(uint *)(param_1 + 0xc)) ||
     (in_EAX = *(uint *)(in_ECX + 0x14), in_EAX != *(uint *)(param_1 + 0x14))) {
    return in_EAX & 0xffffff00;
  }
  iVar3 = *(int *)(in_ECX + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x10) == 0) goto LAB_0073c7df;
    if (iVar3 != 0) goto LAB_0073c7e7;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_0073c7e7:
    if ((iVar3 != 0) && (uVar7 = 0, uVar2 != 0)) {
      do {
        uVar5 = *(uint *)(iVar3 + uVar7 * 4);
        if (uVar5 == 0) {
LAB_0073c806:
          if (*(int *)(*(int *)(param_1 + 0x10) + uVar7 * 4) != 0) goto LAB_0073c859;
          if (uVar5 != 0) goto LAB_0073c813;
        }
        else {
          if (*(int *)(*(int *)(param_1 + 0x10) + uVar7 * 4) == 0) goto LAB_0073c859;
          if (uVar5 == 0) goto LAB_0073c806;
LAB_0073c813:
          pbVar6 = *(byte **)(*(int *)(param_1 + 0x10) + uVar7 * 4);
          pbVar4 = *(byte **)(iVar3 + uVar7 * 4);
          do {
            bVar1 = *pbVar4;
            bVar8 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_0073c840:
              uVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_0073c845;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar8 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_0073c840;
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_0073c845:
          if (uVar5 != 0) {
LAB_0073c859:
            return uVar5 & 0xffffff00;
          }
        }
        in_EAX = 0;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar2);
    }
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
LAB_0073c7df:
  return in_EAX & 0xffffff00;
}



void FUN_0073c870(byte param_1)

{
  FUN_0073c5e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_0073c890(undefined4 param_1)

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
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a81314;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[5] = 0xffffffff;
  }
  local_4 = 0xffffffff;
  FUN_0073c630(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_0073ca60(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  
  iVar2 = param_1;
  FUN_00721730(param_1);
  param_1 = FUN_0070f910(DAT_00b40180);
  uVar4 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  param_1 = FUN_0070fb40("m_uiSize",*(undefined4 *)(in_ECX + 0xc));
  uVar4 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  uVar4 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    do {
      param_1 = FUN_0070fc30("m_ppcValue[i]",*(undefined4 *)(*(int *)(in_ECX + 0x10) + uVar4 * 4));
      uVar1 = *(ushort *)(iVar2 + 10);
      uVar5 = (uint)uVar1;
      if (*(ushort *)(iVar2 + 8) <= uVar5) {
        FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar5);
      }
      if (uVar5 < *(ushort *)(iVar2 + 10)) {
        if (param_1 == 0) {
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
        if (param_1 != 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      uVar4 = uVar4 + 1;
      *(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) = param_1;
    } while (uVar4 < *(uint *)(in_ECX + 0xc));
  }
  iVar3 = FUN_0070faf0("m_iIndex",*(undefined4 *)(in_ECX + 0x14));
  uVar1 = *(ushort *)(iVar2 + 10);
  uVar4 = (uint)uVar1;
  if (*(ushort *)(iVar2 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
  }
  if (uVar4 < *(ushort *)(iVar2 + 10)) {
    if (iVar3 == 0) {
      if (*(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) != 0) {
        *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) == 0) {
      *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
      *(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) = iVar3;
      return;
    }
  }
  else {
    *(ushort *)(iVar2 + 10) = uVar1 + 1;
    if (iVar3 != 0) {
      *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
      *(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) = iVar3;
      return;
    }
  }
  *(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) = iVar3;
  return;
}



void FUN_0073cc20(void)

{
  undefined4 *in_ECX;
  uint uVar1;
  
  uVar1 = 0;
  *in_ECX = &PTR_FUN_00a8137c;
  if (in_ECX[3] != 0) {
    do {
      FUN_00401f20(*(undefined4 *)(in_ECX[4] + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)in_ECX[3]);
  }
  FUN_00401f20(in_ECX[4]);
  in_ECX[4] = 0;
  FUN_00721410();
  return;
}



void FUN_0073cc70(int param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  char *pcVar5;
  int in_ECX;
  uint uVar6;
  
  FUN_007214a0(param_1,param_2);
  if ((*(int *)(in_ECX + 0x10) != 0) && (*(int *)(in_ECX + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
    lVar3 = (ulonglong)*(uint *)(in_ECX + 0xc) * 4;
    uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    if (*(int *)(in_ECX + 0xc) != 0) {
      do {
        if (*(int *)(*(int *)(in_ECX + 0x10) + uVar6 * 4) == 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar6 * 4) = 0;
        }
        else {
          pcVar5 = *(char **)(*(int *)(in_ECX + 0x10) + uVar6 * 4);
          pcVar1 = pcVar5 + 1;
          do {
            cVar2 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          uVar4 = FUN_00401f00(pcVar5 + (1 - (int)pcVar1));
          *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar6 * 4) = uVar4;
          _strcpy_s(*(char **)(*(int *)(param_1 + 0x10) + uVar6 * 4),
                    (rsize_t)(pcVar5 + (1 - (int)pcVar1)),
                    *(char **)(*(int *)(in_ECX + 0x10) + uVar6 * 4));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(in_ECX + 0xc));
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



undefined4 * FUN_0073cd30(void)

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
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a8137c;
    puVar2[4] = 0;
    puVar2[3] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 FUN_0073cdb0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int in_ECX;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(in_ECX + 0xc);
  if (uVar2 != *(uint *)(param_1 + 0xc)) {
    return 0;
  }
  iVar3 = *(int *)(in_ECX + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0;
    }
    if (iVar3 != 0) goto LAB_0073cdef;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
LAB_0073cdef:
  if ((iVar3 != 0) && (uVar7 = 0, uVar2 != 0)) {
    do {
      iVar5 = *(int *)(iVar3 + uVar7 * 4);
      if (iVar5 == 0) {
LAB_0073ce14:
        if (*(int *)(*(int *)(param_1 + 0x10) + uVar7 * 4) != 0) {
          return 0;
        }
        if (iVar5 != 0) goto LAB_0073ce21;
      }
      else {
        if (*(int *)(*(int *)(param_1 + 0x10) + uVar7 * 4) == 0) {
          return 0;
        }
        if (iVar5 == 0) goto LAB_0073ce14;
LAB_0073ce21:
        pbVar6 = *(byte **)(*(int *)(param_1 + 0x10) + uVar7 * 4);
        pbVar4 = *(byte **)(iVar3 + uVar7 * 4);
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_0073ce50:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0073ce55;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0073ce50;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_0073ce55:
        if (iVar5 != 0) {
          return 0;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  return 1;
}



void FUN_0073ce80(byte param_1)

{
  FUN_0073cc20();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_0073cea0(undefined4 param_1)

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
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a8137c;
    puVar2[4] = 0;
    puVar2[3] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0073cc70(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_0073cf30(int param_1)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  
  iVar3 = param_1;
  FUN_00721610(param_1);
  puVar1 = (uint *)(in_ECX + 0xc);
  param_1 = 4;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),puVar1,4,&param_1,1);
  if (*puVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  else {
    lVar2 = (ulonglong)*puVar1 * 4;
    uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
    uVar5 = 0;
    *(undefined4 *)(in_ECX + 0x10) = uVar4;
    if (*puVar1 != 0) {
      do {
        *(undefined4 *)(uVar5 * 4 + *(int *)(in_ECX + 0x10)) = 0;
        FUN_00713620(*(int *)(in_ECX + 0x10) + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *puVar1);
      return;
    }
  }
  return;
}



void FUN_0073d160(void)

{
  undefined4 *in_ECX;
  
  FUN_0071a490();
  in_ECX[0x42] = 0;
  *in_ECX = &PTR_FUN_00a813d4;
  in_ECX[0x43] = 0x3f800000;
  in_ECX[0x44] = 0;
  in_ECX[0x45] = 0x3f800000;
  in_ECX[0x49] = 0x3f800000;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 0;
  in_ECX[0x48] = 0;
  return;
}



void FUN_0073d1e0(void)

{
  int in_ECX;
  
  FUN_00725410();
  *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(in_ECX + 100);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(in_ECX + 0x70);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(in_ECX + 0x7c);
  *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 1;
  return;
}



void FUN_0073d210(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_00725430(param_1,param_2);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(in_ECX + 0x114);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(in_ECX + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(in_ECX + 0x11c);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(in_ECX + 0x120);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(in_ECX + 0x124);
  return;
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
  local_10 = FUN_00401f00(0x128,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_0073d160();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_0073d350(byte param_1)

{
  FUN_0071a540();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_0073d370(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x128,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_0073d160();
  }
  local_4 = 0xffffffff;
  FUN_0073d210(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



undefined4 FUN_0073d5d0(void)

{
  return 0xc;
}



undefined4 * FUN_0073d5e0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a81484;
    *(undefined2 *)(puVar2 + 6) = 0;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00700300(puVar2,param_1);
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(in_ECX + 0x18);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_0073d670(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a81484;
    *(undefined2 *)(puVar2 + 6) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 * FUN_0073d810(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xe0,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0070b780(0);
    *puVar2 = &PTR_FUN_00a814e4;
    puVar2[0x37] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_0073d890(int param_1)

{
  FUN_0070b530(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0x14000004) {
    FUN_007124a0();
  }
  return;
}



void FUN_0073d8f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a814e4;
  FUN_0070b810();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_0073d920(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xe0,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0070b780(0);
    *puVar2 = &PTR_FUN_00a814e4;
    puVar2[0x37] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0070ac60(puVar2,param_1);
  puVar2[0x37] = *(undefined4 *)(in_ECX + 0xdc);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_0073da70(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  thunk_FUN_00700300(param_1,param_2);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(in_ECX + 0x18);
  return;
}



undefined4 * FUN_0073dab0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a81584;
    *(undefined2 *)(puVar2 + 6) = 1;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00700300(puVar2,param_1);
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(in_ECX + 0x18);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_0073db40(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a81584;
    *(undefined2 *)(puVar2 + 6) = 1;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_0073dbb0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar3 = (undefined4 *)FUN_00401f00(0x1c,uVar2);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar3 = &PTR_FUN_00a81584;
    *(undefined2 *)(puVar3 + 6) = 1;
  }
  puVar1 = DAT_00b401ac;
  local_4 = 0xffffffff;
  if (DAT_00b401ac != puVar3) {
    if (DAT_00b401ac != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(DAT_00b401ac + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    DAT_00b401ac = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0073dc60(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b401ac;
  if (DAT_00b401ac != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b401ac + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b401ac = (undefined4 *)0x0;
  }
  return;
}



void FUN_0073dca0(uint param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00700b10(param_1);
  param_1 = FUN_0070f910(DAT_00b401b0);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0x18)) & 0xffffff01;
  param_1 = FUN_0070f950("m_bSmooth",param_1);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0073dd40(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  return;
}



void FUN_0073dd70(uint param_1)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != in_ECX[1]) {
    pvVar5 = (void *)0x0;
    if (param_1 != 0) {
      pvVar5 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 0x1c >> 0x20) != 0) |
                                    (uint)((ulonglong)param_1 * 0x1c),uVar1);
      local_4 = 0;
      if (pvVar5 == (void *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        _vector_constructor_iterator_(pvVar5,0x1c,param_1,FUN_0073dd40);
      }
      uVar1 = 0;
      if (in_ECX[2] != 0) {
        iVar2 = 0;
        do {
          uVar1 = uVar1 + 1;
          puVar4 = (undefined4 *)(*in_ECX + iVar2);
          puVar6 = (undefined4 *)(iVar2 + (int)pvVar5);
          for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          iVar2 = iVar2 + 0x1c;
        } while (uVar1 < (uint)in_ECX[2]);
      }
    }
    FUN_00401f20(*in_ECX);
    *in_ECX = (int)pvVar5;
    in_ECX[1] = param_1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0073de50(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cada8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar1);
  *in_ECX = &PTR_FUN_00a815ec;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *(undefined2 *)(in_ECX + 6) = 0;
  in_ECX[7] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0073deb0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cadee;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a815ec;
  local_4 = 2;
  FUN_007014e0();
  puVar1 = (undefined4 *)in_ECX[5];
  local_4 = CONCAT31(local_4._1_3_,1);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  FUN_00401f20(in_ECX[2]);
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* Library Function - Single Match
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   _AFXCTL_AMBIENT_CACHE>::CreateObject(void)
   
   Library: Visual Studio 2005 Release */

CNoTrackObject * __cdecl CThreadLocal<class__AFXCTL_AMBIENT_CACHE>::CreateObject(void)

{
  uint uVar1;
  CNoTrackObject *pCVar2;
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
  local_10 = FUN_00401f00(0x20,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    pCVar2 = (CNoTrackObject *)FUN_0073de50();
    *unaff_FS_OFFSET = local_c;
    return pCVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (CNoTrackObject *)0x0;
}



bool FUN_0073e050(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  
  cVar2 = FUN_00700670(param_1);
  if (cVar2 == '\0') {
    return false;
  }
  uVar1 = *(uint *)(in_ECX + 0x10);
  if (uVar1 == *(uint *)(param_1 + 0x10)) {
    uVar4 = 0;
    if (uVar1 != 0) {
      psVar5 = *(short **)(param_1 + 8);
      psVar6 = (short *)(*(int *)(in_ECX + 8) + 4);
      iVar3 = *(int *)(in_ECX + 8) - (int)psVar5;
      do {
        if ((((*(short *)(iVar3 + (int)psVar5) != *psVar5) && (psVar6[-1] != psVar5[1])) &&
            (*psVar6 != psVar5[2])) &&
           (((psVar6[1] != psVar5[3] && (psVar6[2] != psVar5[4])) &&
            ((psVar6[3] != psVar5[5] && (cVar2 = FUN_00632310(psVar5 + 6), cVar2 != '\0')))))) {
          return false;
        }
        uVar4 = uVar4 + 1;
        psVar6 = psVar6 + 0xe;
        psVar5 = psVar5 + 0xe;
      } while (uVar4 < uVar1);
    }
    cVar2 = (**(code **)(**(int **)(in_ECX + 0x14) + 0x2c))(*(undefined4 *)(param_1 + 0x14));
    return cVar2 != '\0';
  }
  return false;
}



void FUN_0073e130(byte param_1)

{
  FUN_0073deb0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0073e150(int param_1,int param_2)

{
  undefined2 *puVar1;
  LONG LVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00700770(param_1,param_2);
  local_20 = 0;
  if (*(int *)(in_ECX + 0x10) != 0) {
    param_2 = 0;
    do {
      puVar1 = (undefined2 *)(*(int *)(in_ECX + 8) + param_2);
      local_1c._0_2_ = *puVar1;
      local_1c._2_2_ = puVar1[1];
      local_18 = puVar1[2];
      local_16 = puVar1[3];
      local_14 = puVar1[4];
      local_12 = puVar1[5];
      local_10 = *(undefined4 *)(puVar1 + 6);
      local_c = *(undefined4 *)(puVar1 + 8);
      iVar3 = *(int *)(param_1 + 0xc);
      local_8 = *(undefined4 *)(puVar1 + 10);
      local_4 = *(undefined4 *)(puVar1 + 0xc);
      if (*(int *)(param_1 + 0x10) == iVar3) {
        if (iVar3 == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = iVar3 * 2;
        }
        FUN_0073dd70(iVar3);
      }
      param_2 = param_2 + 0x1c;
      puVar4 = &local_1c;
      puVar5 = (undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) * 0x1c);
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      local_20 = local_20 + 1;
    } while (local_20 < *(uint *)(in_ECX + 0x10));
  }
  puVar4 = *(undefined4 **)(param_1 + 0x14);
  if (puVar4 == *(undefined4 **)(in_ECX + 0x14)) {
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(in_ECX + 0x18);
    return;
  }
  if (((puVar4 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar4 + 1), LVar2 == 0)) &&
     (puVar4 != (undefined4 *)0x0)) {
    (**(code **)*puVar4)(1);
  }
  iVar3 = *(int *)(in_ECX + 0x14);
  *(int *)(param_1 + 0x14) = iVar3;
  if (iVar3 == 0) {
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(in_ECX + 0x18);
    return;
  }
  InterlockedIncrement((LONG *)(iVar3 + 4));
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(in_ECX + 0x18);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_0073e2b0(uint param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint local_24 [2];
  undefined1 auStack_1a [2];
  undefined1 auStack_18 [2];
  undefined1 auStack_16 [2];
  undefined1 auStack_14 [2];
  undefined1 auStack_12 [2];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  FUN_007008a0(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),local_24,4,&param_1,1);
  param_1 = 0;
  if (local_24[0] != 0) {
    do {
      uStack_10 = 0;
      uStack_c = 0;
      uStack_8 = 0;
      uStack_4 = 0;
      local_24[1] = 2;
      (**(code **)(*(int *)(iVar1 + 0x21c) + 4))
                (*(int *)(iVar1 + 0x21c),&stack0xffffffe4,2,local_24 + 1,1);
      local_24[1] = 2;
      (**(code **)(*(int *)(iVar1 + 0x21c) + 4))
                (*(int *)(iVar1 + 0x21c),auStack_1a,2,local_24 + 1,1);
      local_24[1] = 2;
      (**(code **)(*(int *)(iVar1 + 0x21c) + 4))
                (*(int *)(iVar1 + 0x21c),auStack_18,2,local_24 + 1,1);
      local_24[1] = 2;
      (**(code **)(*(int *)(iVar1 + 0x21c) + 4))
                (*(int *)(iVar1 + 0x21c),auStack_16,2,local_24 + 1,1);
      local_24[1] = 2;
      (**(code **)(*(int *)(iVar1 + 0x21c) + 4))
                (*(int *)(iVar1 + 0x21c),auStack_14,2,local_24 + 1,1);
      local_24[1] = 2;
      (**(code **)(*(int *)(iVar1 + 0x21c) + 4))
                (*(int *)(iVar1 + 0x21c),auStack_12,2,local_24 + 1,1);
      FUN_00715420(iVar1);
      iVar2 = *(int *)(in_ECX + 0xc);
      if (*(int *)(in_ECX + 0x10) == iVar2) {
        if (iVar2 == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = iVar2 * 2;
        }
        FUN_0073dd70(iVar2);
      }
      puVar3 = (undefined4 *)&stack0xffffffe4;
      puVar4 = (undefined4 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0x10) * 0x1c);
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
      param_1 = param_1 + 1;
    } while (param_1 < local_24[0]);
  }
  FUN_00712a20();
  return;
}



void FUN_0073e440(int *param_1)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  uint local_1c;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_1;
  local_18 = in_ECX;
  FUN_0068f970(param_1);
  local_1c = *(uint *)(in_ECX + 0x10);
  param_1 = (int *)0x4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],&local_1c,4,&param_1,1);
  uVar2 = 0;
  if (local_1c != 0) {
    param_1 = (int *)0x0;
    do {
      iVar3 = *(int *)(in_ECX + 8) + (int)param_1;
      uStack_14 = 2;
      (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],iVar3,2,&uStack_14,1);
      uStack_14 = 2;
      (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],iVar3 + 2,2,&uStack_14,1);
      uStack_14 = 2;
      (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],iVar3 + 4,2,&uStack_14,1);
      uStack_14 = 2;
      (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],iVar3 + 6,2,&uStack_14,1);
      uStack_14 = 2;
      (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],iVar3 + 8,2,&uStack_14,1);
      uStack_14 = 2;
      (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],iVar3 + 10,2,&uStack_14,1);
      uStack_10 = *(undefined4 *)(iVar3 + 0xc);
      uStack_c = *(undefined4 *)(iVar3 + 0x10);
      uStack_8 = *(undefined4 *)(iVar3 + 0x14);
      uStack_4 = *(undefined4 *)(iVar3 + 0x18);
      FUN_00709510(piVar1);
      uVar2 = uVar2 + 1;
      param_1 = (int *)((int)param_1 + 0x1c);
      in_ECX = local_18;
    } while (uVar2 < local_1c);
  }
  (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(in_ECX + 0x14));
  return;
}



undefined4 FUN_0073e5b0(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x20,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_0073de50();
  }
  local_4 = 0xffffffff;
  FUN_0073e150(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_0073e630(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  FUN_00738760();
  *in_ECX = &PTR_FUN_00a8163c;
  in_ECX[2] = DAT_00b3f9a8;
  in_ECX[3] = DAT_00b3f9ac;
  uVar1 = DAT_00b3f9b0;
  in_ECX[5] = 0;
  in_ECX[4] = uVar1;
  in_ECX[6] = DAT_00b3f9a8;
  in_ECX[7] = DAT_00b3f9ac;
  uVar1 = DAT_00b3f9b0;
  in_ECX[9] = 0;
  in_ECX[8] = uVar1;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  return;
}



void FUN_0073e6a0(uint param_1)

{
  void *_Dst;
  int in_ECX;
  uint uVar1;
  
  if (param_1 != *(uint *)(in_ECX + 0x28)) {
    if (param_1 == 0) {
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x2c));
      *(undefined4 *)(in_ECX + 0x2c) = 0;
      *(undefined4 *)(in_ECX + 0x28) = 0;
      return;
    }
    _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)param_1 * 4));
    if (*(void **)(in_ECX + 0x2c) != (void *)0x0) {
      uVar1 = *(uint *)(in_ECX + 0x28);
      if ((int)param_1 <= (int)*(uint *)(in_ECX + 0x28)) {
        uVar1 = param_1;
      }
      _memcpy(_Dst,*(void **)(in_ECX + 0x2c),uVar1 * 4);
    }
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x2c));
    *(void **)(in_ECX + 0x2c) = _Dst;
    *(uint *)(in_ECX + 0x28) = param_1;
  }
  return;
}



uint FUN_0073e720(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  uint uVar4;
  float *pfVar5;
  float10 fVar6;
  
  fVar6 = (float10)FUN_00982c30();
  fVar1 = (float)fVar6;
  if ((*(float *)(in_ECX + 0x24) <= fVar1) && (1e-06 < fVar1)) {
    if (*(char *)(param_1 + 0x104) == '\0') {
      fVar1 = *(float *)(in_ECX + 0x24) / fVar1;
    }
    else {
      fVar1 = *(float *)(in_ECX + 0x24);
    }
    fVar2 = 2.0 / (*(float *)(param_1 + 0xf0) - *(float *)(param_1 + 0xec));
    fVar3 = 2.0 / (*(float *)(param_1 + 0xf4) - *(float *)(param_1 + 0xf8));
    if (fVar3 < fVar2) {
      fVar3 = fVar2;
    }
    uVar4 = 0;
    fVar1 = fVar3 * fVar1 * *(float *)(param_1 + 0x120);
    if (*(uint *)(in_ECX + 0x28) != 0) {
      pfVar5 = *(float **)(in_ECX + 0x2c);
      do {
        if (*pfVar5 < fVar1 != (*pfVar5 == fVar1)) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
        pfVar5 = pfVar5 + 1;
      } while (uVar4 < *(uint *)(in_ECX + 0x28));
    }
    return uVar4;
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
  local_10 = FUN_00401f00(0x30,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_0073e630();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 FUN_0073e8f0(int param_1)

{
  uint uVar1;
  char cVar2;
  int in_ECX;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  
  cVar2 = FUN_0072a0a0(param_1 + 8);
  if ((cVar2 != '\0') && (cVar2 = FUN_0072a0a0(param_1 + 0x18), cVar2 != '\0')) {
    uVar1 = *(uint *)(in_ECX + 0x28);
    if (uVar1 != *(uint *)(param_1 + 0x28)) {
      return 0;
    }
    uVar4 = 0;
    if (uVar1 != 0) {
      pfVar3 = *(float **)(in_ECX + 0x2c);
      iVar5 = *(int *)(param_1 + 0x2c) - (int)pfVar3;
      do {
        if (*pfVar3 != *(float *)(iVar5 + (int)pfVar3)) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        pfVar3 = pfVar3 + 1;
      } while (uVar4 < uVar1);
    }
    return 1;
  }
  return 0;
}



void FUN_0073e960(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8163c;
  FUN_00401f20(in_ECX[0xb]);
  FUN_00738790();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_0073e9a0(void)

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
  iVar2 = FUN_00401f00(0x30,uVar1);
  iVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_0073e630();
  }
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(in_ECX + 0x10);
  *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
  local_4 = 0xffffffff;
  FUN_0073e6a0(*(undefined4 *)(in_ECX + 0x28));
  _memcpy(*(void **)(iVar3 + 0x2c),*(void **)(in_ECX + 0x2c),*(int *)(in_ECX + 0x28) * 4);
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



void FUN_0073ea40(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 local_34 [52];
  
  FUN_00723930();
  *(undefined4 *)(in_ECX + 0x24) = 0;
  uVar3 = 0;
  if (*(short *)(param_1 + 0xb6) != 0) {
    bVar4 = false;
    bVar5 = *(short *)(param_1 + 0xb6) == 0;
    do {
      if ((!bVar4 && !bVar5) && (iVar1 = *(int *)(*(int *)(param_1 + 0xb0) + uVar3 * 4), iVar1 != 0)
         ) {
        FUN_0072a6b0(iVar1 + 0x20);
      }
      uVar2 = (uint)*(ushort *)(param_1 + 0xb6);
      uVar3 = uVar3 + 1;
      bVar4 = uVar2 < uVar3;
      bVar5 = uVar2 == uVar3;
    } while (!bVar5 && (int)uVar3 <= (int)uVar2);
  }
  FUN_00718a80(local_34);
  FUN_0072a820(in_ECX + 0x18,local_34);
  return;
}



int FUN_0073eac0(void)

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
  iVar2 = FUN_00401f00(0x30,uVar1);
  iVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_0073e630();
  }
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(in_ECX + 0x10);
  *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
  local_4 = 0xffffffff;
  FUN_0073e6a0(*(undefined4 *)(in_ECX + 0x28));
  _memcpy(*(void **)(iVar3 + 0x2c),*(void **)(in_ECX + 0x2c),*(int *)(in_ECX + 0x28) * 4);
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



void FUN_0073ec30(int param_1)

{
  uint *puVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  iVar2 = param_1;
  thunk_FUN_0068f970(param_1);
  FUN_00716ee0(iVar2);
  FUN_00716ee0(iVar2);
  puVar1 = (uint *)(in_ECX + 0x28);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),puVar1,4,&param_1,1);
  uVar3 = 0;
  if (*puVar1 != 0) {
    do {
      param_1 = 4;
      (**(code **)(*(int *)(iVar2 + 0x220) + 8))
                (*(int *)(iVar2 + 0x220),*(int *)(in_ECX + 0x2c) + uVar3 * 4,4,&param_1,1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *puVar1);
  }
  return;
}



void FUN_0073ecc0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint local_48;
  int local_44;
  
  local_44 = in_ECX;
  local_48 = FUN_0070f910();
  uVar1 = *(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10();
  }
  FUN_0042bb90(uVar1,&local_48);
  local_48 = FUN_0072a040();
  uVar1 = *(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10();
  }
  FUN_0042bb90(uVar1,&local_48);
  local_48 = FUN_0072a040();
  uVar1 = *(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10();
  }
  FUN_0042bb90(uVar1,&local_48);
  local_48 = 0;
  if (*(int *)(in_ECX + 0x28) != 0) {
    do {
      uVar3 = local_48;
      iVar2 = FUN_00401f00();
      FUN_006c5d40(iVar2,0x80,"Proportion[%d] = %g",uVar3,
                   (double)*(float *)(*(int *)(local_44 + 0x2c) + uVar3 * 4));
      uVar1 = *(ushort *)(param_1 + 10);
      uVar3 = (uint)uVar1;
      if (*(ushort *)(param_1 + 8) <= uVar3) {
        FUN_004e4a10();
      }
      if (uVar3 < *(ushort *)(param_1 + 10)) {
        if (iVar2 == 0) {
          if (*(int *)(*(int *)(param_1 + 4) + uVar3 * 4) != 0) {
            *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(param_1 + 4) + uVar3 * 4) == 0) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(param_1 + 10) = uVar1 + 1;
        if (iVar2 != 0) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
        }
      }
      *(int *)(*(int *)(param_1 + 4) + uVar3 * 4) = iVar2;
      local_48 = local_48 + 1;
    } while (local_48 < *(uint *)(local_44 + 0x28));
  }
  return;
}



void FUN_0073ee80(void)

{
  undefined4 *in_ECX;
  
  FUN_00728770();
  in_ECX[0x11] = 0;
  *(undefined2 *)(in_ECX + 0x12) = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  *(ushort *)((int)in_ECX + 0x2e) = *(ushort *)((int)in_ECX + 0x2e) & 0xfff | 0x8000;
  *in_ECX = &PTR_FUN_00a816c4;
  return;
}



void FUN_0073eec0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a816c4;
  FUN_00401f20(in_ECX[0x11]);
  FUN_00401f20(in_ECX[0x13]);
  FUN_00401f20(in_ECX[0x14]);
  FUN_00401f20(in_ECX[0x15]);
  FUN_00401f20(in_ECX[0x16]);
  FUN_007291e0();
  return;
}



void FUN_0073ef10(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x44));
  *(undefined4 *)(in_ECX + 0x44) = param_1;
  return;
}



void FUN_0073ef30(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x4c));
  *(undefined4 *)(in_ECX + 0x4c) = param_1;
  return;
}



void FUN_0073ef50(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x50));
  *(undefined4 *)(in_ECX + 0x50) = param_1;
  return;
}



void FUN_0073ef70(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x54));
  *(undefined4 *)(in_ECX + 0x54) = param_1;
  return;
}



void FUN_0073ef90(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x58));
  *(undefined4 *)(in_ECX + 0x58) = param_1;
  return;
}



void FUN_0073efb0(ushort param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar4 = *(short *)(in_ECX + 0x48) - 1;
  if (param_1 != uVar4) {
    uVar7 = (uint)uVar4;
    uVar8 = (uint)param_1;
    iVar2 = uVar8 * 0xc;
    iVar3 = uVar7 * 0xc;
    puVar5 = (undefined4 *)(iVar3 + *(int *)(in_ECX + 0x1c));
    puVar6 = (undefined4 *)(iVar2 + *(int *)(in_ECX + 0x1c));
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
    puVar6[2] = puVar5[2];
    iVar1 = *(int *)(in_ECX + 0x24);
    if (iVar1 != 0) {
      puVar5 = (undefined4 *)(uVar7 * 0x10 + iVar1);
      puVar6 = (undefined4 *)(uVar8 * 0x10 + iVar1);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
      puVar6[3] = puVar5[3];
    }
    iVar1 = *(int *)(in_ECX + 0x20);
    if (iVar1 != 0) {
      puVar5 = (undefined4 *)(iVar1 + iVar3);
      puVar6 = (undefined4 *)(iVar1 + iVar2);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
    }
    iVar1 = *(int *)(in_ECX + 0x44);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + uVar8 * 4) = *(undefined4 *)(iVar1 + uVar7 * 4);
    }
    iVar1 = *(int *)(in_ECX + 0x4c);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + uVar8 * 4) = *(undefined4 *)(iVar1 + uVar7 * 4);
    }
    iVar1 = *(int *)(in_ECX + 0x50);
    if (iVar1 != 0) {
      puVar5 = (undefined4 *)(uVar7 * 0x10 + iVar1);
      puVar6 = (undefined4 *)(uVar8 * 0x10 + iVar1);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
      puVar6[3] = puVar5[3];
    }
    iVar1 = *(int *)(in_ECX + 0x54);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + uVar8 * 4) = *(undefined4 *)(iVar1 + uVar7 * 4);
    }
    iVar1 = *(int *)(in_ECX + 0x58);
    if (iVar1 != 0) {
      puVar6 = (undefined4 *)(iVar3 + iVar1);
      puVar5 = (undefined4 *)(iVar1 + iVar2);
      *puVar5 = *puVar6;
      puVar5[1] = puVar6[1];
      puVar5[2] = puVar6[2];
    }
    *(short *)(in_ECX + 0x48) = *(short *)(in_ECX + 0x48) + -1;
    return;
  }
  *(short *)(in_ECX + 0x48) = *(short *)(in_ECX + 0x48) + -1;
  return;
}



undefined4 * FUN_0073f0d0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x5c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00728770();
    *(ushort *)((int)puVar2 + 0x2e) = *(ushort *)((int)puVar2 + 0x2e) & 0xfff | 0x8000;
    *puVar2 = &PTR_FUN_00a816c4;
    puVar2[0x11] = 0;
    *(undefined2 *)(puVar2 + 0x12) = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    *(undefined1 *)(puVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 * FUN_0073f170(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x5c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00728770();
    *(ushort *)((int)puVar2 + 0x2e) = *(ushort *)((int)puVar2 + 0x2e) & 0xfff | 0x8000;
    *puVar2 = &PTR_FUN_00a816c4;
    puVar2[0x11] = 0;
    *(undefined2 *)(puVar2 + 0x12) = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    *(undefined1 *)(puVar2 + 0x10) = 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  uRam00000040 = 1;
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_0073f210(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a816c4;
  FUN_00401f20(in_ECX[0x11]);
  FUN_00401f20(in_ECX[0x13]);
  FUN_00401f20(in_ECX[0x14]);
  FUN_00401f20(in_ECX[0x15]);
  FUN_00401f20(in_ECX[0x16]);
  FUN_007291e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint FUN_0073f270(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  ushort uVar6;
  int in_ECX;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  
  uVar4 = FUN_00728f90(param_1);
  if ((char)uVar4 == '\0') goto LAB_0073f282;
  iVar9 = *(int *)(in_ECX + 0x44);
  if (iVar9 == 0) {
LAB_0073f29a:
    if (*(int *)(param_1 + 0x44) != 0) {
LAB_0073f282:
      return uVar4 & 0xffffff00;
    }
  }
  else {
    if (*(int *)(param_1 + 0x44) == 0) goto LAB_0073f282;
    if (iVar9 == 0) goto LAB_0073f29a;
  }
  if (iVar9 != 0) {
    uVar6 = 0;
    if (*(ushort *)(in_ECX + 8) != 0) {
      do {
        iVar3 = (uint)uVar6 * 4;
        fVar1 = *(float *)(iVar3 + iVar9);
        fVar2 = *(float *)(*(int *)(param_1 + 0x44) + iVar3);
        uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),
                         (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                         (ushort)(fVar2 == fVar1) << 0xe);
        if (fVar2 != fVar1) goto LAB_0073f457;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(in_ECX + 8));
    }
  }
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),*(short *)(in_ECX + 0x48));
  if (*(short *)(in_ECX + 0x48) != *(short *)(param_1 + 0x48)) goto LAB_0073f457;
  iVar9 = *(int *)(in_ECX + 0x4c);
  if (iVar9 == 0) {
LAB_0073f2f9:
    if (*(int *)(param_1 + 0x4c) != 0) goto LAB_0073f457;
    if (iVar9 != 0) goto LAB_0073f307;
  }
  else {
    if (*(int *)(param_1 + 0x4c) == 0) goto LAB_0073f457;
    if (iVar9 == 0) goto LAB_0073f2f9;
LAB_0073f307:
    uVar6 = 0;
    if (*(ushort *)(in_ECX + 8) != 0) {
      do {
        iVar3 = (uint)uVar6 * 4;
        fVar1 = *(float *)(iVar3 + iVar9);
        fVar2 = *(float *)(*(int *)(param_1 + 0x4c) + iVar3);
        uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),
                         (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                         (ushort)(fVar2 == fVar1) << 0xe);
        if (fVar2 != fVar1) goto LAB_0073f457;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(in_ECX + 8));
    }
  }
  pfVar7 = *(float **)(in_ECX + 0x50);
  if (pfVar7 == (float *)0x0) {
LAB_0073f34c:
    if (*(int *)(param_1 + 0x50) != 0) {
LAB_0073f457:
      return uVar4 & 0xffffff00;
    }
    if (pfVar7 == (float *)0x0) goto LAB_0073f3cb;
  }
  else {
    if (*(int *)(param_1 + 0x50) == 0) goto LAB_0073f457;
    if (pfVar7 == (float *)0x0) goto LAB_0073f34c;
  }
  uVar10 = 0;
  if (*(ushort *)(in_ECX + 8) != 0) {
    uVar4 = *(uint *)(param_1 + 0x50);
    pfVar8 = (float *)(uVar4 + 8);
    iVar9 = uVar4 - (int)pfVar7;
    do {
      fVar1 = *pfVar7;
      fVar2 = *(float *)(iVar9 + (int)pfVar7);
      uVar5 = (undefined2)(uVar4 >> 0x10);
      uVar4 = CONCAT22(uVar5,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 != fVar1) goto LAB_0073f457;
      fVar1 = pfVar7[1];
      fVar2 = pfVar8[-1];
      uVar4 = CONCAT22(uVar5,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 != fVar1) goto LAB_0073f457;
      fVar1 = pfVar7[2];
      fVar2 = *pfVar8;
      uVar4 = CONCAT22(uVar5,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 != fVar1) goto LAB_0073f457;
      fVar1 = pfVar7[3];
      fVar2 = pfVar8[1];
      uVar4 = CONCAT22(uVar5,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 != fVar1) goto LAB_0073f457;
      uVar10 = uVar10 + 1;
      pfVar8 = pfVar8 + 4;
      pfVar7 = pfVar7 + 4;
    } while (uVar10 < *(ushort *)(in_ECX + 8));
  }
LAB_0073f3cb:
  uVar4 = *(uint *)(in_ECX + 0x54);
  if (uVar4 != 0) {
    uVar10 = 0;
    if (*(ushort *)(in_ECX + 8) != 0) {
      pfVar7 = *(float **)(param_1 + 0x54);
      iVar9 = uVar4 - (int)pfVar7;
      do {
        fVar1 = *(float *)(iVar9 + (int)pfVar7);
        fVar2 = *pfVar7;
        uVar4 = CONCAT22((short)(uVar4 >> 0x10),
                         (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                         (ushort)(fVar2 == fVar1) << 0xe);
        if (fVar2 != fVar1) goto LAB_0073f457;
        uVar10 = uVar10 + 1;
        pfVar7 = pfVar7 + 1;
      } while (uVar10 < *(ushort *)(in_ECX + 8));
    }
  }
  pfVar7 = *(float **)(in_ECX + 0x58);
  if (pfVar7 != (float *)0x0) {
    uVar10 = 0;
    if (*(ushort *)(in_ECX + 8) != 0) {
      uVar4 = *(uint *)(param_1 + 0x58);
      pfVar8 = (float *)(uVar4 + 8);
      iVar9 = uVar4 - (int)pfVar7;
      do {
        fVar1 = *pfVar7;
        fVar2 = *(float *)((int)pfVar7 + iVar9);
        uVar5 = (undefined2)(uVar4 >> 0x10);
        uVar4 = CONCAT22(uVar5,(ushort)(fVar2 < fVar1) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                               (ushort)(fVar2 == fVar1) << 0xe);
        if (fVar2 != fVar1) goto LAB_0073f457;
        fVar1 = pfVar7[1];
        fVar2 = pfVar8[-1];
        uVar4 = CONCAT22(uVar5,(ushort)(fVar2 < fVar1) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                               (ushort)(fVar2 == fVar1) << 0xe);
        if (fVar2 != fVar1) goto LAB_0073f457;
        fVar1 = pfVar7[2];
        fVar2 = *pfVar8;
        uVar4 = CONCAT22(uVar5,(ushort)(fVar2 < fVar1) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                               (ushort)(fVar2 == fVar1) << 0xe);
        if (fVar2 != fVar1) goto LAB_0073f457;
        uVar10 = uVar10 + 1;
        pfVar8 = pfVar8 + 3;
        pfVar7 = pfVar7 + 3;
      } while (uVar10 < *(ushort *)(in_ECX + 8));
    }
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}



void FUN_0073f460(int param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  uint uVar5;
  char cStack_9;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  FUN_00729450(param_1);
  if (*(uint *)(iVar1 + 0xd8) < 0x4010007) {
    local_4 = 2;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&local_8,2,&local_4,1);
  }
  iVar3 = FUN_00401f00((uint)*(ushort *)(in_ECX + 2) * 4);
  in_ECX[0x11] = iVar3;
  iVar3 = *(int *)(iVar1 + 0x21c);
  if (*(uint *)(iVar1 + 0xd8) < 0xa00010d) {
    local_4 = 4;
    (**(code **)(iVar3 + 4))(iVar3,&local_8,4);
    uVar2 = 0;
    if ((short)in_ECX[2] != 0) {
      do {
        uVar5 = (uint)uVar2;
        uVar2 = uVar2 + 1;
        *(undefined4 *)(in_ECX[0x11] + uVar5 * 4) = local_8;
      } while (uVar2 < *(ushort *)(in_ECX + 2));
    }
  }
  else {
    local_4 = 1;
    (**(code **)(iVar3 + 4))(iVar3,&cStack_9,1,&local_4,1);
    if (cStack_9 == '\0') {
      uVar2 = 0;
      if ((short)in_ECX[2] != 0) {
        do {
          uVar5 = (uint)uVar2;
          uVar2 = uVar2 + 1;
          *(undefined4 *)(in_ECX[0x11] + uVar5 * 4) = 0x3f800000;
        } while (uVar2 < *(ushort *)(in_ECX + 2));
      }
    }
    else {
      local_4 = 4;
      (**(code **)(*(int *)(iVar1 + 0x21c) + 4))
                (*(int *)(iVar1 + 0x21c),in_ECX[0x11],(uint)*(ushort *)(in_ECX + 2) * 4,&local_4,1);
    }
  }
  local_4 = 2;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x12,2,&local_4,1);
  iVar3 = *(int *)(iVar1 + 0x21c);
  if (*(uint *)(iVar1 + 0xd8) < 0x4010007) {
    local_4 = 4;
    (**(code **)(iVar3 + 4))(iVar3,in_ECX + 0x13,4);
    param_1 = CONCAT31(param_1._1_3_,in_ECX[0x13] != 0);
  }
  else {
    local_4 = 1;
    (**(code **)(iVar3 + 4))(iVar3,&param_1,1,&local_4,1);
  }
  iVar3 = FUN_00401f00((uint)*(ushort *)(in_ECX + 2) * 4);
  in_ECX[0x13] = iVar3;
  if ((char)param_1 == '\0') {
    uVar2 = 0;
    if ((short)in_ECX[2] != 0) {
      do {
        uVar5 = (uint)uVar2;
        uVar2 = uVar2 + 1;
        *(undefined4 *)(in_ECX[0x13] + uVar5 * 4) = 0x3f800000;
      } while (uVar2 < *(ushort *)(in_ECX + 2));
    }
  }
  else {
    local_4 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))
              (*(int *)(iVar1 + 0x21c),iVar3,(uint)*(ushort *)(in_ECX + 2) * 4,&local_4,1);
  }
  if ((char)in_ECX[0x10] == '\0') {
    if (0x5000007 < *(uint *)(iVar1 + 0xd8)) {
      local_4 = 1;
      (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&cStack_9,1,&local_4,1);
      if (cStack_9 != '\0') {
        iVar3 = FUN_00401f00((uint)*(ushort *)(in_ECX + 2) * 0x10);
        uVar2 = 0;
        in_ECX[0x14] = iVar3;
        if ((short)in_ECX[2] != 0) {
          do {
            FUN_00715420(iVar1);
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(ushort *)(in_ECX + 2));
        }
        if (*(uint *)(iVar1 + 0xd8) < 0xa000101) {
          for (puVar4 = (undefined4 *)(**(code **)(*in_ECX + 4))(); puVar4 != (undefined4 *)0x0;
              puVar4 = (undefined4 *)puVar4[1]) {
            if (puVar4 == &DAT_00b401dc) goto LAB_0073f815;
          }
          FUN_00401f20(in_ECX[0x14]);
          in_ECX[0x14] = 0;
        }
      }
    }
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x21c);
    if (*(uint *)(iVar1 + 0xd8) < 0x4010000) {
      local_4 = 4;
      (**(code **)(iVar3 + 4))(iVar3,in_ECX + 0x14,4);
      cStack_9 = in_ECX[0x14] != 0;
    }
    else {
      local_4 = 1;
      (**(code **)(iVar3 + 4))(iVar3,&cStack_9,1,&local_4,1);
    }
    iVar3 = FUN_00401f00((uint)*(ushort *)(in_ECX + 2) * 0x10);
    in_ECX[0x14] = iVar3;
    if (cStack_9 == '\0') {
      uVar5 = 0;
      if ((short)in_ECX[2] != 0) {
        iVar3 = 0;
        do {
          puVar4 = (undefined4 *)(in_ECX[0x14] + iVar3);
          *puVar4 = DAT_00b27110;
          puVar4[1] = DAT_00b27114;
          puVar4[2] = DAT_00b27118;
          puVar4[3] = DAT_00b2711c;
          uVar5 = uVar5 + 1;
          iVar3 = iVar3 + 0x10;
        } while (uVar5 < *(ushort *)(in_ECX + 2));
      }
    }
    else {
      uVar5 = 0;
      if ((short)in_ECX[2] != 0) {
        do {
          FUN_00715420(iVar1);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(in_ECX + 2));
      }
    }
  }
LAB_0073f815:
  if (*(uint *)(iVar1 + 0xd8) < 0xa000110) {
    *(ushort *)((int)in_ECX + 0x2e) = *(ushort *)((int)in_ECX + 0x2e) & 0xfff | 0x8000;
  }
  if (0xa030004 < *(uint *)(iVar1 + 0xd8)) {
    local_4 = 1;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&cStack_9,1,&local_4,1);
    if (cStack_9 != '\0') {
      iVar3 = FUN_00401f00((uint)*(ushort *)(in_ECX + 2) * 4);
      uVar2 = 0;
      in_ECX[0x15] = iVar3;
      if ((short)in_ECX[2] != 0) {
        do {
          local_4 = 4;
          (**(code **)(*(int *)(iVar1 + 0x21c) + 4))
                    (*(int *)(iVar1 + 0x21c),in_ECX[0x15] + (uint)uVar2 * 4,4,&local_4,1);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(ushort *)(in_ECX + 2));
      }
    }
    local_4 = 1;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&local_8,1,&local_4,1);
    if ((char)local_8 != '\0') {
      iVar3 = FUN_00401f00((uint)*(ushort *)(in_ECX + 2) * 0xc);
      uVar2 = 0;
      in_ECX[0x16] = iVar3;
      if ((short)in_ECX[2] != 0) {
        do {
          FUN_00709430(iVar1);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(ushort *)(in_ECX + 2));
      }
    }
  }
  return;
}



void FUN_0073f950(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  char cStack_8;
  char cStack_7;
  char cStack_6;
  char cStack_5;
  undefined4 local_4;
  
  iVar1 = param_1;
  FUN_007299a0(param_1);
  param_1 = CONCAT31(param_1._1_3_,*(int *)(in_ECX + 0x44) != 0);
  local_4 = 1;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&param_1,1,&local_4,1);
  if ((char)param_1 != '\0') {
    local_4 = 4;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))
              (*(int *)(iVar1 + 0x220),*(undefined4 *)(in_ECX + 0x44),
               (uint)*(ushort *)(in_ECX + 8) * 4,&local_4,1);
  }
  local_4 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x48,2,&local_4,1);
  cStack_8 = *(int *)(in_ECX + 0x4c) != 0;
  local_4 = 1;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&cStack_8,1,&local_4,1);
  if (cStack_8 != '\0') {
    local_4 = 4;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))
              (*(int *)(iVar1 + 0x220),*(undefined4 *)(in_ECX + 0x4c),
               (uint)*(ushort *)(in_ECX + 8) * 4,&local_4,1);
  }
  cStack_7 = *(int *)(in_ECX + 0x50) != 0;
  local_4 = 1;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&cStack_7,1,&local_4,1);
  if ((cStack_7 != '\0') && (uVar2 = 0, *(short *)(in_ECX + 8) != 0)) {
    do {
      FUN_007154b0(iVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 8));
  }
  cStack_6 = *(int *)(in_ECX + 0x54) != 0;
  local_4 = 1;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&cStack_6,1,&local_4,1);
  if ((cStack_6 != '\0') && (uVar2 = 0, *(short *)(in_ECX + 8) != 0)) {
    do {
      local_4 = 4;
      (**(code **)(*(int *)(iVar1 + 0x220) + 8))
                (*(int *)(iVar1 + 0x220),*(int *)(in_ECX + 0x54) + uVar2 * 4,4,&local_4,1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 8));
  }
  cStack_5 = *(int *)(in_ECX + 0x58) != 0;
  local_4 = 1;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&cStack_5,1,&local_4,1);
  if ((cStack_5 != '\0') && (uVar2 = 0, *(short *)(in_ECX + 8) != 0)) {
    do {
      FUN_007094a0(iVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 8));
  }
  return;
}



void FUN_0073fb80(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00729d00(param_1);
  param_1 = FUN_0070f910(DAT_00b401c8);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_pfRadii",*(undefined4 *)(in_ECX + 0x44));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070faa0("m_usActive",*(undefined2 *)(in_ECX + 0x48));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_pfSizes",*(undefined4 *)(in_ECX + 0x4c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_pkRotations",*(undefined4 *)(in_ECX + 0x50));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_pfRotationAngles",*(undefined4 *)(in_ECX + 0x54));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_pkRotationAxes",*(undefined4 *)(in_ECX + 0x58));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 * FUN_0073fd60(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a81784;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_0073fe20(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a81784;
  FUN_006ffd70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_0073fe50(undefined4 param_1)

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
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a81784;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00700300(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_0073fed0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar3 = (undefined4 *)FUN_00401f00(0x18,uVar2);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar3 = &PTR_FUN_00a81784;
  }
  puVar1 = DAT_00b401d8;
  local_4 = 0xffffffff;
  if (DAT_00b401d8 != puVar3) {
    if (DAT_00b401d8 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(DAT_00b401d8 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    DAT_00b401d8 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0073ff80(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b401d8;
  if (DAT_00b401d8 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b401d8 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b401d8 = (undefined4 *)0x0;
  }
  return;
}



void FUN_0073ffc0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00700b10(param_1);
  param_1 = FUN_0070f910(DAT_00b401d0);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}


