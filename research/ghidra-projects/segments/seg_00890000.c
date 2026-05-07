
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00890020(undefined4 param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_48 [8];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_48;
  pfVar3 = (float *)FUN_008ac0a0();
  local_30 = *pfVar3;
  fStack_2c = pfVar3[1];
  fStack_24 = pfVar3[3];
  auVar7._4_4_ = -(uint)(0.01 < ABS(fStack_2c - DAT_00ba7a44));
  auVar7._0_4_ = -(uint)(0.01 < ABS(local_30 - DAT_00ba7a40));
  auVar7._8_4_ = -(uint)(0.01 < ABS(pfVar3[2] - DAT_00ba7a48));
  auVar7._12_4_ = -(uint)(0.01 < ABS(fStack_24 - fRam00ba7a4c));
  uVar4 = movmskps(pfVar3,auVar7);
  if ((uVar4 & 7) != 0) {
    fVar1 = *(float *)(param_3 + 0x10);
    fVar2 = *(float *)(param_3 + 0x14);
    fStack_28 = 0.0;
    fVar5 = fVar2 * fVar2 + fVar1 * fVar1 + 0.0;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
    local_40 = fVar5 * fVar1 * local_30;
    fStack_3c = fVar5 * fVar2 * fStack_2c;
    fStack_38 = fVar5 * 0.0 * 0.0;
    fStack_34 = fVar5 * *(float *)(param_3 + 0x1c) * fStack_24;
    pfVar3 = (float *)FUN_008ac0a0();
    local_30 = *pfVar3 + local_40;
    fStack_2c = pfVar3[1] + fStack_3c;
    fStack_28 = pfVar3[2] + fStack_38;
    fStack_24 = pfVar3[3] + fStack_34;
    FUN_008ac0b0(&local_30);
  }
  return;
}



void FUN_00890130(undefined4 *param_1,undefined4 param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  float10 fVar4;
  float10 fVar5;
  
  *in_ECX = &PTR_LAB_00a96590;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  in_ECX[4] = *param_1;
  in_ECX[5] = uVar1;
  in_ECX[6] = uVar2;
  in_ECX[7] = uVar3;
  fVar4 = (float10)FUN_00986000();
  in_ECX[8] = (float)fVar4;
  in_ECX[1] = 0;
  in_ECX[0x16] = param_3;
  in_ECX[9] = 0x1f;
  in_ECX[10] = 0;
  in_ECX[0x15] = 0x800000;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x14] = 0x800000;
  *(undefined1 *)(in_ECX + 0x18) = 0;
  in_ECX[0x19] = 0;
  *(undefined1 *)((int)in_ECX + 0x61) = 0;
  fVar5 = (float10)FUN_00986300();
  in_ECX[0x17] = (param_3 / (float)fVar5) * (float)fVar4;
  return;
}



void FUN_00890210(byte param_1)

{
  FUN_008ce450();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00890240(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d68e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0(uVar1);
  in_ECX[3] = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a9667c;
  FUN_008cea50(0);
  _DAT_00ba8020 = _DAT_00ba8020 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008902b0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_204;
  undefined1 auStack_200 [476];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d61ab;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&local_204;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffdf0;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_204 = param_1;
  FUN_0089f570(uVar1);
  if ((in_ECX != (int *)0x0) && (in_ECX[2] != 0)) {
    FUN_008cea50(in_ECX + 4);
    uStack_14 = 0;
    iVar2 = (**(code **)(*in_ECX + 0x58))();
    FUN_008ad7d0(local_204,iVar2 + 0x20,auStack_200,in_ECX + 4);
    FUN_008ce8f0();
    uStack_14 = 0xffffffff;
    FUN_008ceac0();
  }
  FUN_0089f570(uVar1);
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_00890390(byte param_1)

{
  FUN_008b9dd0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_008903d0(void)

{
  int iVar1;
  
  iVar1 = FUN_0088d370();
  if (iVar1 != 5) {
    iVar1 = FUN_0088d370();
    if (iVar1 != 6) {
      iVar1 = FUN_0088d370();
      if (iVar1 != 4) {
        return 0;
      }
    }
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00890410(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d61e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0(uVar1);
  *in_ECX = &PTR_FUN_00a5591c;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  DAT_00ba7d70 = DAT_00ba7d70 + 1;
  *in_ECX = &PTR_FUN_00a965d4;
  _DAT_00ba816c = _DAT_00ba816c + 1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a96704;
  FUN_008a1170(param_1);
  _DAT_00ba7d58 = _DAT_00ba7d58 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008904c0(byte param_1)

{
  FUN_008a0e80();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_008904e0(float *param_1,float *param_2,float param_3)

{
  if (((ABS(*param_1 - *param_2) <= param_3) &&
      (ABS(param_1[1] - param_2[1]) < param_3 != (ABS(param_1[1] - param_2[1]) == param_3))) &&
     (ABS(param_1[2] - param_2[2]) < param_3 != (ABS(param_1[2] - param_2[2]) == param_3))) {
    return 1;
  }
  return 0;
}



void FUN_00890560(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x90);
  if (puVar1 != param_1) {
    if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
       (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
       *(short *)((int)puVar1 + 6) == 0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 **)(in_ECX + 0x90) = param_1;
    if ((param_1 != (undefined4 *)0x0) && (*(short *)(param_1 + 1) != 0)) {
      *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
    }
  }
  return;
}



void FUN_008905b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00ba7a54;
  if (((DAT_00ba7a54 != (undefined4 *)0x0) && (*(short *)(DAT_00ba7a54 + 1) != 0)) &&
     (*(short *)((int)DAT_00ba7a54 + 6) = *(short *)((int)DAT_00ba7a54 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  return;
}



undefined4 FUN_008905e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
    uVar2 = FUN_008b6a40(param_1,param_2,param_3);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 FUN_00890660(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    piVar1 = (int *)FUN_008ac0c0();
    if (piVar1 != (int *)0x0) {
      if (param_1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 8);
      }
      if (piVar1[5] != iVar3) {
        iVar3 = piVar1[2];
        if (*(int *)(in_ECX + 8) != 0) {
          FUN_008ac070();
        }
        if (iVar3 != 0) {
          FUN_00899b30(piVar1);
        }
        if (param_1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 8);
        }
        (**(code **)(*piVar1 + 8))(uVar2);
        if (iVar3 != 0) {
          FUN_00899a50(piVar1);
        }
        return 1;
      }
    }
  }
  return 0;
}



void FUN_00890700(float param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2a0) = 1;
  *(float *)(in_ECX + 0x31c) = param_1 * 0.14287673;
  return;
}



void FUN_00890720(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2a0) != 0xb) {
    *(int *)(in_ECX + 0x1ec) = *(int *)(in_ECX + 0x2a0);
    *(undefined4 *)(in_ECX + 0x2a0) = 0xb;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00890740(void)

{
  float fVar1;
  int in_ECX;
  
  *(float *)(in_ECX + 0x324) = *(float *)(in_ECX + 0x324) + *(float *)(in_ECX + 0x2d8);
  fVar1 = -*(float *)(in_ECX + 0x2e8);
  if ((((!NAN(_DAT_00b2e778) && !NAN(fVar1)) && _DAT_00b2e778 < fVar1 != (_DAT_00b2e778 == fVar1))
      && ((*(uint *)(in_ECX + 500) >> 8 & 1) == 0)) && ((*(uint *)(in_ECX + 500) >> 9 & 1) == 0)) {
    *(float *)(in_ECX + 800) = *(float *)(in_ECX + 800) + *(float *)(in_ECX + 0x2d8);
    return;
  }
  *(undefined4 *)(in_ECX + 800) = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008907a0(float *param_1,float param_2)

{
  float fVar1;
  int in_ECX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_24;
  
  fVar1 = 1.0 / param_2;
  fVar2 = fVar1 * *param_1 * 0.14287673;
  fVar3 = fVar1 * param_1[1] * 0.14287673;
  fVar4 = fVar1 * param_1[2] * 0.14287673;
  if (*(float *)(in_ECX + 0x2f8) * *(float *)(in_ECX + 0x2f8) +
      *(float *)(in_ECX + 0x2f4) * *(float *)(in_ECX + 0x2f4) +
      *(float *)(in_ECX + 0x2f0) * *(float *)(in_ECX + 0x2f0) <
      fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) {
    *(float *)(in_ECX + 0x300) = param_2;
    *(float *)(in_ECX + 0x2f0) = fVar2;
    *(float *)(in_ECX + 0x2f4) = fVar3;
    *(float *)(in_ECX + 0x2f8) = fVar4;
    *(float *)(in_ECX + 0x2fc) = fVar1 * fStack_24;
    return;
  }
  return;
}



void FUN_00890890(float param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (ABS(*(float *)(in_ECX + 0x304)) < ABS(param_1)) {
    *(float *)(in_ECX + 0x304) = param_1;
    *(undefined4 *)(in_ECX + 0x308) = param_2;
    return;
  }
  return;
}



float10 FUN_008908e0(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  
  fVar2 = param_1;
  if (0.0 < *(float *)(in_ECX + 0x308)) {
    if (*(float *)(in_ECX + 0x308) <= param_2) {
      param_1 = *(float *)(in_ECX + 0x308);
    }
    else {
      param_1 = param_2;
    }
    fVar1 = *(float *)(in_ECX + 0x304);
    *(float *)(in_ECX + 0x308) = *(float *)(in_ECX + 0x308) - param_2;
    *(float *)(in_ECX + 0x304) = *(float *)(in_ECX + 0x304) - 0.05;
    return (float10)(fVar1 * param_1 + fVar2);
  }
  *(undefined4 *)(in_ECX + 0x304) = 0;
  return (float10)param_1;
}



void FUN_00890970(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  
  uVar4 = uRam00ba7a4c;
  uVar3 = DAT_00ba7a48;
  uVar2 = DAT_00ba7a44;
  if (*(float *)(in_ECX + 0x300) <= 0.0) {
    *(undefined4 *)(in_ECX + 0x2f0) = DAT_00ba7a40;
    *(undefined4 *)(in_ECX + 0x2f4) = uVar2;
    *(undefined4 *)(in_ECX + 0x2f8) = uVar3;
    *(undefined4 *)(in_ECX + 0x2fc) = uVar4;
  }
  else {
    fVar1 = *(float *)(in_ECX + 0x300);
    if ((*(uint *)(in_ECX + 500) & 0x1800) == 0) {
      *(float *)(in_ECX + 0x2e0) = fVar1 * *(float *)(in_ECX + 0x2f0) + *(float *)(in_ECX + 0x2e0);
      *(float *)(in_ECX + 0x2e4) = fVar1 * *(float *)(in_ECX + 0x2f4) + *(float *)(in_ECX + 0x2e4);
      *(float *)(in_ECX + 0x2e8) = fVar1 * *(float *)(in_ECX + 0x2f8) + *(float *)(in_ECX + 0x2e8);
      *(float *)(in_ECX + 0x2ec) = fVar1 * *(float *)(in_ECX + 0x2fc) + *(float *)(in_ECX + 0x2ec);
      return;
    }
  }
  return;
}



void FUN_008909d0(undefined4 *param_1)

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
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  in_ECX[4] = param_1[4];
  in_ECX[5] = uVar1;
  in_ECX[6] = uVar2;
  in_ECX[7] = uVar3;
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  return;
}



undefined1 * FUN_00890a10(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  if ((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x48)) {
      piVar3 = *(int **)(iVar1 + 0x44);
      do {
        if (*piVar3 == param_1) {
          return (undefined1 *)CONCAT31((int3)((uint)&param_1 >> 8),1);
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 4;
      } while (iVar2 < *(int *)(iVar1 + 0x48));
    }
  }
  return &stack0x00000000;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00890a70(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d6218;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0(uVar1);
  *in_ECX = &PTR_FUN_00a559cc;
  in_ECX[3] = 0;
  _DAT_00ba7d34 = _DAT_00ba7d34 + 1;
  *in_ECX = &PTR_FUN_00a55b9c;
  DAT_00ba7f5c = DAT_00ba7f5c + 1;
  *(undefined1 *)(in_ECX + 4) = 0;
  *in_ECX = &PTR_FUN_00a75e64;
  _DAT_00ba802c = _DAT_00ba802c + 1;
  *(undefined1 *)(in_ECX + 4) = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a9627c;
  FUN_0088e6f0(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00890b00(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0x3f800000;
  in_ECX[9] = 0;
  in_ECX[10] = 0x3dcccccd;
  in_ECX[0xc] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0xd] = 0x3f800000;
  in_ECX[0x12] = 0;
  in_ECX[0x15] = 4;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x13] = 0x3d4ccccd;
  in_ECX[0x14] = 0x3f800000;
  in_ECX[0x16] = 0x41200000;
  in_ECX[0x17] = 0x7f7fffff;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0x3fc90fdb;
  in_ECX[0x1a] = 0x3f800000;
  return;
}



void FUN_00890b90(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x00890bda) */
/* WARNING: Removing unreachable block (ram,0x00890be8) */

undefined4 FUN_00890ba0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 local_4;
  
  local_4 = 0;
  if (*(int *)(in_ECX + 0x36c) < 2) {
    puVar1 = (undefined4 *)(in_ECX + 0x374 + *(int *)(in_ECX + 0x36c) * 4);
  }
  else {
    local_4 = 0;
    puVar1 = &local_4;
  }
  return *puVar1;
}



void FUN_00890c00(char param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d6290;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00890b00(uVar5);
  in_ECX[0x1d] = 0;
  in_ECX[0x23] = 0;
  *(undefined1 *)(in_ECX + 0x21) = 1;
  in_ECX[0x1c] = 0;
  DAT_00b2eb3c = DAT_00b2eb3c + 1 & 0xffff;
  local_4 = 0;
  if (DAT_00b2eb3c == 0) {
    DAT_00b2eb3c = 10;
  }
  uVar5 = DAT_00b2eb3c << 0x10;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0x3f800000;
  in_ECX[0x1d] = uVar5 | 0x14;
  in_ECX[0x1e] = 0;
  in_ECX[0x25] = 0x408dbbd5;
  in_ECX[0x22] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x27] = 1;
  in_ECX[0x28] = 0;
  in_ECX[0x26] = 0x3f800000;
  *(undefined1 *)((int)in_ECX + 0x85) = 0;
  uVar3 = uRam00ba7a4c;
  uVar2 = DAT_00ba7a48;
  uVar1 = DAT_00ba7a44;
  *in_ECX = DAT_00ba7a40;
  in_ECX[1] = uVar1;
  in_ECX[2] = uVar2;
  in_ECX[3] = uVar3;
  uVar4 = uRam00ba7a4c;
  uVar3 = DAT_00ba7a48;
  uVar2 = DAT_00ba7a44;
  uVar1 = DAT_00ba7a40;
  in_ECX[0x14] = 0;
  in_ECX[9] = 0;
  in_ECX[4] = uVar1;
  in_ECX[5] = uVar2;
  in_ECX[6] = uVar3;
  in_ECX[7] = uVar4;
  in_ECX[0x10] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x15] = 4;
  in_ECX[8] = 0x3f800000;
  in_ECX[0x13] = 0x3f000000;
  in_ECX[10] = 0x3f800000;
  in_ECX[0x16] = 0x42c80000;
  if (param_1 != '\0') {
    if (DAT_00ba7a54 == 0) {
      local_4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x34,0x31);
      *(undefined2 *)(local_4 + 4) = 0x34;
      local_c._0_1_ = 1;
      DAT_00ba7a54 = FUN_008ba090();
      local_c = (uint)local_c._1_3_ << 8;
      local_c = (**(code **)(*DAT_00ba7d98 + 0x10))(0xc,0x31);
      *(undefined2 *)(local_c + 4) = 0xc;
      puVar6 = (undefined4 *)FUN_008d0030();
      FUN_008ba120(puVar6,0);
      if ((*(short *)(puVar6 + 1) != 0) &&
         (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
         *(short *)((int)puVar6 + 6) == 0)) {
        (**(code **)*puVar6)(1);
      }
      iVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))(8,0x31);
      *(undefined2 *)(iVar7 + 4) = 8;
      puVar6 = (undefined4 *)FUN_008cfc60();
      FUN_008ba120(puVar6,5);
      if ((*(short *)(puVar6 + 1) != 0) &&
         (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
         *(short *)((int)puVar6 + 6) == 0)) {
        (**(code **)*puVar6)(1);
      }
      iVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))(8,0x31);
      *(undefined2 *)(iVar7 + 4) = 8;
      puVar6 = (undefined4 *)FUN_008cfa40();
      FUN_008ba120(puVar6,1);
      if ((*(short *)(puVar6 + 1) != 0) &&
         (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
         *(short *)((int)puVar6 + 6) == 0)) {
        (**(code **)*puVar6)(1);
      }
      iVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xc,0x31);
      *(undefined2 *)(iVar7 + 4) = 0xc;
      puVar6 = (undefined4 *)FUN_008cf6c0();
      FUN_008ba120(puVar6,2);
      if ((*(short *)(puVar6 + 1) != 0) &&
         (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
         *(short *)((int)puVar6 + 6) == 0)) {
        (**(code **)*puVar6)(1);
      }
      puVar6 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(8,0x31);
      *(undefined2 *)(puVar6 + 1) = 8;
      *(undefined2 *)((int)puVar6 + 6) = 1;
      *puVar6 = &PTR_FUN_00a967b4;
      FUN_008ba120(puVar6,4);
      if ((*(short *)(puVar6 + 1) != 0) &&
         (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
         *(short *)((int)puVar6 + 6) == 0)) {
        (**(code **)*puVar6)(1);
      }
      iVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))(8,0x31);
      *(undefined2 *)(iVar7 + 4) = 8;
      local_4._0_1_ = 6;
      puVar6 = (undefined4 *)FUN_008cf3a0();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_008ba120(puVar6,6);
      if ((*(short *)(puVar6 + 1) != 0) &&
         (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
         *(short *)((int)puVar6 + 6) == 0)) {
        (**(code **)*puVar6)(1);
      }
    }
    FUN_00890560(DAT_00ba7a54);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00890f70(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d62be;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x90);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    if ((*(short *)(puVar1 + 1) != 0) &&
       (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
       *(short *)((int)puVar1 + 6) == 0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    *(undefined4 *)(in_ECX + 0x90) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x8c);
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



void FUN_00891010(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00ba7a64;
  if (DAT_00ba7a64 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00ba7a64 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00ba7a64 = (undefined4 *)0x0;
  }
  return;
}



undefined4 FUN_00891050(undefined1 *param_1)

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
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar2 = FUN_00401f00(0xb0,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00890c00(1);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0xc) = uVar3;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008b9a00(uVar3);
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



void FUN_008910f0(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x364);
  if (((iVar1 != 0) && (cVar2 = FUN_00890a10(param_1), cVar2 == '\0')) && (*(int *)(iVar1 + 8) != 0)
     ) {
    FUN_008bc750(param_1,param_2,param_2 >> 0x1f);
  }
  return;
}



undefined4 FUN_00891130(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_8 [2];
  
  uVar1 = 0;
  if (param_2 != 0) {
    FUN_0047f990(local_8,param_1);
    uVar1 = local_8[0];
  }
  return uVar1;
}



int FUN_00891160(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  
  if ((*(uint *)(in_ECX + 500) & 0x8000) != 0) {
    if (((*(int *)(in_ECX + 0x364) != 0) && (piVar2 = (int *)FUN_0089f6b0(0), piVar2 != (int *)0x0))
       && (iVar3 = (**(code **)(*piVar2 + 8))(), iVar3 != 0)) {
      if (*(short *)(iVar3 + 0xb6) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = **(undefined4 **)(iVar3 + 0xb0);
      }
      iVar3 = FUN_00560920(&DAT_00b3fab0,uVar4);
      if (iVar3 != 0) {
        uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
        while (uVar6 != 0) {
          uVar6 = uVar6 - 1;
          if (((uVar6 < *(ushort *)(iVar3 + 0xb6)) &&
              (iVar1 = *(int *)(*(int *)(iVar3 + 0xb0) + uVar6 * 4), iVar1 != 0)) &&
             ((*(char **)(iVar1 + 8) != (char *)0x0 &&
              (iVar5 = __stricmp(*(char **)(iVar1 + 8),"bhkColDisp"), iVar5 == 0)))) {
            return iVar1;
          }
        }
      }
    }
    *(uint *)(in_ECX + 500) = *(uint *)(in_ECX + 500) & 0xffff7fff;
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00891230(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  undefined1 auStack_7c [12];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [48];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_7c;
  if (*(int *)(in_ECX + 0x368) != 0) {
    FUN_006848d0(local_60);
    local_70 = local_30;
    uStack_6c = uStack_2c;
    uStack_68 = uStack_28;
    uStack_64 = param_2;
    FUN_0088d900(&local_70,param_1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008912a0(float param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  byte bVar10;
  float fVar11;
  undefined4 *puVar12;
  uint uVar13;
  int in_ECX;
  undefined4 *puVar14;
  undefined1 auStack_4c [56];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_4c;
  piVar1 = *(int **)(in_ECX + 0x374);
  if (piVar1 != (int *)0x0) {
    for (puVar12 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar12 != (undefined4 *)0x0;
        puVar12 = (undefined4 *)puVar12[1]) {
      if (puVar12 == &DAT_00ba7fd8) {
        bVar10 = 1;
        goto LAB_008912e0;
      }
    }
    bVar10 = 0;
LAB_008912e0:
    uVar13 = -(uint)bVar10 & (uint)piVar1;
    if (uVar13 != 0) {
      iVar2 = *(int *)(uVar13 + 8);
      fVar11 = _DAT_00b2efc4;
      if (iVar2 != 0) {
        fVar11 = *(float *)(iVar2 + 0xc);
      }
      puVar12 = (undefined4 *)(iVar2 + 0x10);
      if (iVar2 == 0) {
        puVar12 = &DAT_00ba7a40;
      }
      uVar3 = puVar12[1];
      fVar4 = (float)puVar12[2];
      uVar5 = puVar12[3];
      puVar14 = (undefined4 *)(iVar2 + 0x20);
      if (iVar2 == 0) {
        puVar14 = &DAT_00ba7a40;
      }
      uVar6 = *puVar14;
      uVar7 = puVar14[1];
      fVar8 = (float)puVar14[2];
      uVar9 = puVar14[3];
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x10) = *puVar12;
        *(undefined4 *)(iVar2 + 0x14) = uVar3;
        *(float *)(iVar2 + 0x18) = (fVar11 - param_1) + fVar4;
        *(undefined4 *)(iVar2 + 0x1c) = uVar5;
        *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 0xc);
      }
      iVar2 = *(int *)(uVar13 + 8);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x20) = uVar6;
        *(undefined4 *)(iVar2 + 0x24) = uVar7;
        *(float *)(iVar2 + 0x28) = fVar8 - (fVar11 - param_1);
        *(undefined4 *)(iVar2 + 0x2c) = uVar9;
        *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar2 + 0xc);
      }
      if (*(int *)(uVar13 + 8) != 0) {
        *(float *)(*(int *)(uVar13 + 8) + 0xc) = param_1;
        return;
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_008913c0(void)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x374);
  if (piVar1 != (int *)0x0) {
    for (puVar4 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00ba7fd8) {
        bVar3 = 1;
        goto LAB_008913f0;
      }
    }
    bVar3 = 0;
LAB_008913f0:
    if ((-(uint)bVar3 & (uint)piVar1) != 0) {
      iVar2 = *(int *)((-(uint)bVar3 & (uint)piVar1) + 8);
      if (iVar2 != 0) {
        return (float10)*(float *)(iVar2 + 0xc);
      }
      return (float10)_DAT_00b2efc4;
    }
  }
  return (float10)*(float *)(in_ECX + 0x3a0);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00891440(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int in_ECX;
  undefined1 auStack_78 [8];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_78;
  FUN_006848d0(local_60);
  FUN_0088fe00(local_60,in_ECX + 0x340);
  if (*(int *)(in_ECX + 8) == 0) {
    pfVar4 = (float *)&DAT_00ba7a40;
  }
  else {
    pfVar4 = (float *)FUN_008ac070();
  }
  fVar1 = pfVar4[1];
  fVar2 = pfVar4[2];
  fVar3 = pfVar4[3];
  *param_1 = *pfVar4 - local_70;
  param_1[1] = fVar1 - fStack_6c;
  param_1[2] = fVar2 - fStack_68;
  param_1[3] = fVar3 - fStack_64;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008914c0(float *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int in_ECX;
  undefined1 auStack_78 [8];
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
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_78;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x364) + 8);
  local_60 = *(undefined4 *)(iVar1 + 0x70);
  uStack_5c = *(undefined4 *)(iVar1 + 0x74);
  uStack_58 = *(undefined4 *)(iVar1 + 0x78);
  uStack_54 = *(undefined4 *)(iVar1 + 0x7c);
  local_50 = *(undefined4 *)(iVar1 + 0x80);
  uStack_4c = *(undefined4 *)(iVar1 + 0x84);
  uStack_48 = *(undefined4 *)(iVar1 + 0x88);
  uStack_44 = *(undefined4 *)(iVar1 + 0x8c);
  local_40 = *(undefined4 *)(iVar1 + 0x90);
  uStack_3c = *(undefined4 *)(iVar1 + 0x94);
  uStack_38 = *(undefined4 *)(iVar1 + 0x98);
  uStack_34 = *(undefined4 *)(iVar1 + 0x9c);
  local_30 = *(undefined4 *)(iVar1 + 0xa0);
  uStack_2c = *(undefined4 *)(iVar1 + 0xa4);
  uStack_28 = *(undefined4 *)(iVar1 + 0xa8);
  uStack_24 = *(undefined4 *)(iVar1 + 0xac);
  FUN_0088fe00(&local_60,in_ECX + 0x340);
  if (*(int *)(in_ECX + 8) == 0) {
    pfVar5 = (float *)&DAT_00ba7a40;
  }
  else {
    pfVar5 = (float *)FUN_008ac070();
  }
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[2];
  fVar4 = pfVar5[3];
  *param_1 = *pfVar5 - local_70;
  param_1[1] = fVar2 - fStack_6c;
  param_1[2] = fVar3 - fStack_68;
  param_1[3] = fVar4 - fStack_64;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00891560(float *param_1)

{
  int in_ECX;
  undefined1 auStack_88 [8];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_88;
  FUN_006848d0(local_60);
  FUN_0088fe00(local_60,in_ECX + 0x340);
  local_80 = *param_1 + local_70;
  fStack_7c = param_1[1] + fStack_6c;
  fStack_78 = param_1[2] + fStack_68;
  fStack_74 = param_1[3] + fStack_64;
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_0089f570();
  }
  FUN_008ac080(&local_80);
  FUN_0089f570();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008915f0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_104 [11];
  char cStack_f9;
  undefined4 local_f4;
  undefined **local_f0;
  undefined4 local_ec;
  float fStack_d0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined ***local_3c;
  undefined4 local_38;
  uint local_24;
  int iStack_20;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_009d631b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_104;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffef0;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_6c = 0x3f800000;
  local_cc = 0x3f800000;
  local_ec = 0x3f800000;
  local_90 = 0;
  local_8c = 0;
  local_60 = 0;
  local_40 = 0;
  local_f0 = &PTR_FUN_00a562bc;
  local_c0 = 0;
  puVar1 = (undefined4 *)((param_1 + 0x38) * 0x10 + in_ECX);
  local_b0 = *puVar1;
  uStack_ac = puVar1[1];
  uStack_a8 = puVar1[2];
  uStack_a4 = puVar1[3];
  *param_2 = local_b0;
  param_2[1] = uStack_ac;
  param_2[2] = uStack_a8;
  param_2[3] = uStack_a4;
  local_3c = &local_f0;
  param_2[2] = (float)param_2[2] - 25.0;
  local_50 = DAT_00ba7a40;
  uStack_4c = DAT_00ba7a44;
  uStack_48 = DAT_00ba7a48;
  uStack_44 = uRam00ba7a4c;
  local_a0 = *param_2;
  uStack_9c = param_2[1];
  uStack_98 = param_2[2];
  uStack_94 = param_2[3];
  local_14 = 0;
  local_38 = 0;
  FUN_0057e270(&local_f4);
  local_8c = local_f4;
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_008ac0c0(uVar2);
  }
  if (*(int *)(iVar3 + 8) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(*(int *)(iVar3 + 8) + 0x2b0);
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x58))();
  }
  cStack_f9 = (**(code **)(*piVar4 + 0x88))(&local_b0);
  (**(code **)(*piVar4 + 0x58))();
  if (cStack_f9 != '\0') {
    param_2[2] = (1.0 - fStack_d0) * 25.0 + (float)param_2[2];
  }
  *unaff_FS_OFFSET = iStack_20;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00891780(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_34;
  if ((*(byte *)(in_ECX + 500) & 1) != 0) {
    if (*(int *)(in_ECX + 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_008ac0c0();
    }
    uVar3 = 0;
    do {
      local_30 = 0;
      local_2c = *(float *)(in_ECX + 0x3a4) * 0.5 - *(float *)(in_ECX + 0x3a0);
      local_28 = *(undefined4 *)(in_ECX + 0x3a0);
      local_24 = 0;
      if (uVar3 == 1) {
        local_2c = local_2c * -1.0;
      }
      FUN_0088fcc0(iVar1 + 0x70,&local_30);
      iVar2 = uVar3 * 0x10;
      uVar3 = uVar3 + 1;
      *(float *)(iVar2 + 0x388 + in_ECX) =
           *(float *)(iVar2 + 0x388 + in_ECX) + *(float *)(in_ECX + 0x248);
    } while (uVar3 < 2);
  }
  return;
}



void FUN_00891850(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  undefined4 *puVar9;
  int iVar10;
  
  if (*(int *)(in_ECX + 0x214) != 0x1e) {
    piVar8 = *(int **)(param_1 + 0x28);
    iVar10 = 0x1f;
    if (piVar8 != (int *)0x0) {
      piVar5 = piVar8;
      for (piVar6 = (int *)piVar8[3]; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[3]) {
        piVar5 = piVar6;
      }
      uVar1 = piVar5[7];
      *(uint *)(in_ECX + 0x218) = uVar1 & 0x3f;
      piVar5 = piVar8;
      for (piVar6 = (int *)piVar8[3]; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[3]) {
        piVar5 = piVar6;
      }
      if (((char)piVar5[6] == '\x01') && (piVar5[4] + (int)piVar5 != 0)) {
        puVar9 = (undefined4 *)(*(int *)(piVar5[4] + (int)piVar5 + 0x50) + 0xd0);
      }
      else {
        puVar9 = &DAT_00ba7a40;
      }
      uVar2 = puVar9[1];
      uVar3 = puVar9[2];
      uVar4 = puVar9[3];
      *(undefined4 *)(in_ECX + 0x220) = *puVar9;
      *(undefined4 *)(in_ECX + 0x224) = uVar2;
      *(undefined4 *)(in_ECX + 0x228) = uVar3;
      *(undefined4 *)(in_ECX + 0x22c) = uVar4;
      if (*(int *)(param_1 + 0x2c) == -1) {
        if (*piVar8 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*piVar8 + 8);
        }
        if ((iVar7 != 0) && (iVar10 = *(int *)(iVar7 + 0x10), 0x1d < iVar10)) {
          iVar10 = 0x1e;
        }
      }
      else if (((uVar1 & 0x3f) != 0x11) &&
              (piVar8 = (int *)FUN_008afbe0(piVar8), piVar8 != (int *)0x0)) {
        iVar10 = (**(code **)(*piVar8 + 0x9c))(*(undefined4 *)(param_1 + 0x2c));
        if (iVar10 < 0x1e) {
          iVar10 = (**(code **)(*piVar8 + 0x9c))(*(undefined4 *)(param_1 + 0x2c));
        }
        else {
          iVar10 = 0x1e;
        }
      }
      if (((*(int *)(in_ECX + 0x214) == 0x1f) || (iVar10 == 0x1e)) &&
         ((*(int *)(in_ECX + 0x214) = iVar10, (*(byte *)(in_ECX + 0x1f6) & 1) != 0 ||
          (iVar10 == 0x1e)))) {
        if (iVar10 == 0x1e) {
          *(uint *)(in_ECX + 500) = *(uint *)(in_ECX + 500) | 0x20000;
          return;
        }
        *(uint *)(in_ECX + 500) = *(uint *)(in_ECX + 500) & 0xfffdffff;
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_008919a0(float *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_114 [14];
  undefined1 local_106;
  char local_105;
  float local_104;
  float local_100;
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
  undefined4 uStack_b8;
  float fStack_b4;
  undefined1 local_b0 [16];
  int iStack_a0;
  float local_9c;
  undefined1 local_90 [32];
  undefined4 local_70;
  undefined4 local_6c;
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
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_114;
  fVar5 = param_1[8];
  if (*(char *)((int)fVar5 + 0x18) == '\x02') {
    iVar4 = *(int *)((int)fVar5 + 0x10) + (int)fVar5;
  }
  else {
    iVar4 = 0;
  }
  piVar1 = (int *)param_1[10];
  if ((char)piVar1[6] == '\x01') {
    iVar2 = piVar1[4] + (int)piVar1;
  }
  else {
    iVar2 = 0;
  }
  local_106 = 1;
  if ((iVar4 != 0) && (iVar2 != 0)) {
    piVar1 = (int *)*piVar1;
    iVar4 = *(int *)(iVar2 + 0x50);
    local_60 = *(undefined4 *)(iVar4 + 0x10);
    uStack_5c = *(undefined4 *)(iVar4 + 0x14);
    uStack_58 = *(undefined4 *)(iVar4 + 0x18);
    uStack_54 = *(undefined4 *)(iVar4 + 0x1c);
    local_50 = *(undefined4 *)(iVar4 + 0x20);
    uStack_4c = *(undefined4 *)(iVar4 + 0x24);
    uStack_48 = *(undefined4 *)(iVar4 + 0x28);
    uStack_44 = *(undefined4 *)(iVar4 + 0x2c);
    local_40 = *(undefined4 *)(iVar4 + 0x30);
    uStack_3c = *(undefined4 *)(iVar4 + 0x34);
    uStack_38 = *(undefined4 *)(iVar4 + 0x38);
    uStack_34 = *(undefined4 *)(iVar4 + 0x3c);
    local_30 = *(undefined4 *)(iVar4 + 0x40);
    uStack_2c = *(undefined4 *)(iVar4 + 0x44);
    uStack_28 = *(undefined4 *)(iVar4 + 0x48);
    uStack_24 = *(undefined4 *)(iVar4 + 0x4c);
    local_9c = 1.0;
    local_e0 = *param_1;
    fStack_dc = param_1[1];
    fStack_d8 = param_1[2];
    fStack_d4 = param_1[3];
    local_70 = 0;
    local_6c = 0;
    local_c0 = fStack_d8;
    FUN_008914c0(&local_d0);
    local_100 = fStack_c8 + *(float *)(in_ECX + 0x248);
    local_105 = '\0';
    if (0.0 < local_c0 - local_100) {
      if (*(float *)(in_ECX + 0x248) / 3.0 < local_c0 - local_100) {
        return 1;
      }
      local_105 = '\x01';
    }
    local_c0 = local_d0 - local_e0;
    fStack_bc = fStack_cc - fStack_dc;
    fStack_b4 = fStack_c4 - fStack_d4;
    uStack_b8 = 0;
    local_104 = *(float *)(in_ECX + 0x24c);
    fVar5 = fStack_bc * fStack_bc + local_c0 * local_c0 + 0.0;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
    local_e0 = fVar5 * fStack_bc;
    fStack_e4 = fStack_c4;
    local_f0 = local_d0 - local_104 * fVar5 * local_c0;
    fStack_ec = fStack_cc - local_e0 * local_104;
    fStack_e8 = local_100;
    fStack_c8 = local_100;
    FUN_0088fd10(&local_60,&local_d0);
    FUN_0088fd10(&local_60,&local_f0);
    (**(code **)(*piVar1 + 0x14))(&local_106,local_90,local_b0);
    local_106 = local_9c < 1.0;
    if (1.0 <= local_9c) {
      if (local_105 != '\0') {
        local_106 = 1;
      }
    }
    else {
      piVar1 = (int *)piVar1[2];
      if (piVar1 != (int *)0x0) {
        if ((iStack_a0 == -1) ||
           (piVar3 = (int *)(**(code **)(*piVar1 + 0x88))(), piVar3 == (int *)0x0)) {
          iVar4 = piVar1[4];
        }
        else {
          iVar4 = (**(code **)(*piVar3 + 0x9c))(iStack_a0);
        }
        if (iVar4 - 0xfU < 0xf) {
          local_106 = 0;
        }
      }
    }
    FUN_008a78e0(&local_d0,&local_f0,(-(uint)(local_9c < 1.0) & 0xff898888) - 0x10000,0);
  }
  return local_106;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_00891cc0(float *param_1)

{
  float *pfVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
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
  char cVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  int in_ECX;
  float *pfVar26;
  undefined4 extraout_ECX;
  int iVar27;
  int *piVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auStack_3f4 [7];
  char cStack_3ed;
  undefined4 uStack_3e8;
  float local_3e4;
  float *local_3e0;
  uint uStack_3dc;
  int local_3d8;
  float fStack_3d4;
  undefined1 uStack_3cd;
  int *local_3cc;
  int iStack_3c8;
  float fStack_3c4;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float afStack_370 [4];
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  undefined1 auStack_340 [16];
  float fStack_330;
  float fStack_32c;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined1 auStack_2e0 [32];
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  float afStack_2b8 [12];
  undefined1 auStack_288 [28];
  float fStack_26c;
  float fStack_24c;
  undefined1 auStack_220 [524];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_3f4;
  local_3e0 = param_1;
  if (*(int *)(in_ECX + 0x36c) == 1) {
    cVar22 = FUN_008919a0(param_1);
    return cVar22;
  }
  puVar3 = (undefined4 *)param_1[8];
  if (*(char *)(puVar3 + 6) == '\x02') {
    local_3e4 = (float)(puVar3[4] + (int)puVar3);
  }
  else {
    local_3e4 = 0.0;
  }
  puVar4 = (undefined4 *)param_1[10];
  if (*(char *)(puVar4 + 6) == '\x01') {
    local_3d8 = puVar4[4] + (int)puVar4;
  }
  else {
    local_3d8 = 0;
  }
  iVar24 = local_3d8;
  uStack_3e8._0_3_ = CONCAT12(1,(ushort)uStack_3e8);
  if ((local_3e4 == 0.0) || (local_3d8 == 0)) goto LAB_00892551;
  piVar28 = (int *)*puVar4;
  uStack_3e8 = CONCAT13(uStack_3e8._3_1_,(uint3)(ushort)uStack_3e8);
  local_3cc = piVar28;
  iVar23 = (**(code **)(*(int *)*puVar3 + 8))();
  if (iVar23 == 8) {
    iStack_3c8 = *(int *)local_3e0[8];
    fStack_3d4 = *(float *)(iStack_3c8 + 0xc);
  }
  else {
    fStack_3d4 = *(float *)(in_ECX + 0x3a0);
    iStack_3c8 = 0;
  }
  iVar24 = *(int *)(iVar24 + 0x50);
  uStack_320 = *(undefined4 *)(iVar24 + 0x10);
  uStack_31c = *(undefined4 *)(iVar24 + 0x14);
  uStack_318 = *(undefined4 *)(iVar24 + 0x18);
  uStack_314 = *(undefined4 *)(iVar24 + 0x1c);
  uStack_310 = *(undefined4 *)(iVar24 + 0x20);
  uStack_30c = *(undefined4 *)(iVar24 + 0x24);
  uStack_308 = *(undefined4 *)(iVar24 + 0x28);
  uStack_304 = *(undefined4 *)(iVar24 + 0x2c);
  uStack_300 = *(undefined4 *)(iVar24 + 0x30);
  uStack_2fc = *(undefined4 *)(iVar24 + 0x34);
  uStack_2f8 = *(undefined4 *)(iVar24 + 0x38);
  uStack_2f4 = *(undefined4 *)(iVar24 + 0x3c);
  uStack_2f0 = *(undefined4 *)(iVar24 + 0x40);
  uStack_2ec = *(undefined4 *)(iVar24 + 0x44);
  uStack_2e8 = *(undefined4 *)(iVar24 + 0x48);
  uStack_2e4 = *(undefined4 *)(iVar24 + 0x4c);
  fStack_32c = 1.0;
  fStack_350 = *local_3e0;
  fStack_34c = local_3e0[1];
  fStack_3a0 = local_3e0[2];
  fStack_344 = local_3e0[3];
  uStack_2c0 = 0;
  uStack_2bc = 0;
  fStack_348 = fStack_3a0;
  FUN_008914c0(&fStack_390);
  uStack_3dc = 0;
  uVar29 = 0;
  if ((*(byte *)(in_ECX + 500) & 1) == 0) {
    fStack_3b0 = fStack_390 - fStack_350;
    fStack_3ac = fStack_38c - fStack_34c;
    fStack_384 = fStack_384 - fStack_344;
  }
  else {
    do {
      if (iStack_3c8 == 0) {
        fStack_3b0 = 0.0;
        fStack_3ac = *(float *)(in_ECX + 0x3a4) * 0.5;
        fStack_3a8 = fStack_3d4;
        fStack_3a4 = 0.0;
        if (uVar29 == 1) {
          fStack_3ac = fStack_3ac * -1.0;
        }
      }
      else {
        pfVar26 = (float *)((uVar29 + 1) * 0x10 + iStack_3c8);
        fStack_3b0 = *pfVar26;
        fStack_3ac = pfVar26[1];
        fStack_3a8 = pfVar26[2];
        fStack_3a4 = pfVar26[3];
      }
      pfVar26 = (float *)((uVar29 + 0x38) * 0x10 + in_ECX);
      FUN_0088fcc0((int)local_3e4 + 0x70,&fStack_3b0);
      fStack_3ac = fStack_34c;
      fStack_3b0 = fStack_350;
      uVar30 = uVar29 + 1;
      *(float *)(in_ECX + 0x388 + uVar29 * 0x10) =
           *(float *)(in_ECX + 0x248) + *(float *)(in_ECX + 0x388 + uVar29 * 0x10);
      fVar2 = pfVar26[1];
      fVar31 = pfVar26[2];
      fVar32 = pfVar26[3];
      afStack_370[uVar29 * 4] = fStack_350 - *pfVar26;
      afStack_370[uVar29 * 4 + 1] = fStack_34c - fVar2;
      afStack_370[uVar29 * 4 + 2] = fStack_348 - fVar31;
      afStack_370[uVar29 * 4 + 3] = fStack_344 - fVar32;
      uVar29 = uVar30;
    } while (uVar30 < 2);
    uStack_3dc = (uint)(fStack_358 * fStack_358 + fStack_35c * fStack_35c + fStack_360 * fStack_360
                       <= afStack_370[2] * afStack_370[2] +
                          afStack_370[1] * afStack_370[1] + afStack_370[0] * afStack_370[0]);
    iVar24 = (uStack_3dc + 0x38) * 0x10;
    fStack_390 = *(float *)(iVar24 + in_ECX);
    fStack_38c = *(float *)(iVar24 + in_ECX + 4);
    fStack_3b0 = *(float *)((int)local_3e4 + 0xa0) - fStack_3b0;
    fStack_3ac = *(float *)((int)local_3e4 + 0xa4) - fStack_3ac;
    fStack_384 = *(float *)((int)local_3e4 + 0xac) - fStack_344;
    piVar28 = local_3cc;
  }
  uVar29 = uStack_3e8;
  fVar2 = *(float *)(in_ECX + 0x248);
  fStack_3c4 = fStack_388 + fVar2;
  fVar31 = fStack_3ac * fStack_3ac + fStack_3b0 * fStack_3b0 + 0.0;
  auVar33 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
  fVar32 = auVar33._0_4_;
  fStack_3a4 = fVar32 * 0.5 * (3.0 - fVar31 * fVar32 * fVar32);
  fStack_3b0 = fStack_3a4 * fStack_3b0;
  fStack_3ac = fStack_3a4 * fStack_3ac;
  fStack_3a8 = fStack_3a4 * 0.0;
  fStack_3a4 = fStack_3a4 * fStack_384;
  uStack_3e8 = uStack_3e8 & 0xffffff;
  uVar30 = uStack_3e8;
  local_3e4 = fStack_3a0 - fStack_3c4;
  if (0.0 < local_3e4) {
    uStack_3e8._0_3_ = (uint3)uVar29;
    if (local_3e4 <= fVar2 / 3.0) {
      uStack_3e8 = CONCAT13(1,(uint3)uStack_3e8);
      uVar30 = uStack_3e8;
    }
    else {
      if ((*(byte *)(in_ECX + 500) & 1) == 0) {
        return '\x01';
      }
      local_3e4 = (fStack_3a0 - *(float *)(uStack_3dc * 0x10 + 0x388 + in_ECX)) + fVar2;
      if (0.0 < local_3e4) {
        if (fVar2 / 3.0 < local_3e4) {
          return '\x01';
        }
        uStack_3e8 = CONCAT13(1,(uint3)uStack_3e8);
        uVar30 = uStack_3e8;
      }
    }
  }
  uStack_3e8 = uVar30;
  fStack_388 = fStack_3c4;
  fStack_348 = fStack_3c4;
  if (local_3e0[0xb] != -NAN) {
    iVar24 = (**(code **)(*piVar28 + 8))();
    piVar25 = piVar28;
    if (iVar24 == 0x18) {
      piVar25 = (int *)piVar28[3];
      iVar24 = (**(code **)(*piVar25 + 8))();
    }
    if (iVar24 == 0x10) {
      iVar24 = (**(code **)(*piVar25 + 0x28))(local_3e0[0xb],auStack_220);
      fVar2 = local_3e0[0x14];
      fVar31 = *(float *)((int)fVar2 + 0x10);
      fVar32 = *(float *)((int)fVar2 + 0x14);
      fVar6 = *(float *)((int)fVar2 + 0x18);
      fVar7 = *(float *)((int)fVar2 + 0x1c);
      fVar8 = *(float *)((int)fVar2 + 0x20);
      fVar9 = *(float *)((int)fVar2 + 0x24);
      fVar10 = *(float *)((int)fVar2 + 0x28);
      fVar11 = *(float *)((int)fVar2 + 0x2c);
      fVar12 = *(float *)((int)fVar2 + 0x30);
      fVar13 = *(float *)((int)fVar2 + 0x34);
      fVar14 = *(float *)((int)fVar2 + 0x38);
      fVar15 = *(float *)((int)fVar2 + 0x3c);
      fVar16 = *(float *)((int)fVar2 + 0x40);
      fVar17 = *(float *)((int)fVar2 + 0x44);
      fVar18 = *(float *)((int)fVar2 + 0x48);
      fVar2 = *(float *)((int)fVar2 + 0x4c);
      pfVar26 = (float *)(iVar24 + 0x10);
      iVar27 = 3;
      iVar23 = (int)afStack_2b8 - (int)pfVar26;
      do {
        fVar19 = *pfVar26;
        fVar20 = pfVar26[1];
        fVar21 = pfVar26[2];
        pfVar1 = (float *)((int)pfVar26 + iVar23);
        *pfVar1 = fVar20 * fVar8 + fVar19 * fVar31 + fVar21 * fVar12 + fVar16;
        pfVar1[1] = fVar20 * fVar9 + fVar19 * fVar32 + fVar21 * fVar13 + fVar17;
        pfVar1[2] = fVar20 * fVar10 + fVar19 * fVar6 + fVar21 * fVar14 + fVar18;
        pfVar1[3] = fVar20 * fVar11 + fVar19 * fVar7 + fVar21 * fVar15 + fVar2;
        iVar27 = iVar27 + -1;
        pfVar26 = pfVar26 + 4;
      } while (0 < iVar27);
      FUN_008d1ef0(afStack_2b8,&local_3cc);
      fStack_360 = fStack_350;
      fStack_35c = fStack_34c;
      fStack_378 = fStack_358;
      fStack_374 = fStack_354;
      afStack_370[0] = fStack_350;
      afStack_370[1] = fStack_34c;
      fStack_3a8 = fStack_3b4;
      afStack_370[2] = fStack_358 - fStack_3b8 * *(float *)(in_ECX + 0x24c);
      afStack_370[3] = fStack_354 - fStack_3b4 * *(float *)(in_ECX + 0x24c);
      FUN_008d0ca0(&fStack_378,0x3f000000,afStack_2b8,*(undefined4 *)(iVar24 + 0xc),&local_3cc,0,0,
                   auStack_288);
      if ((fStack_26c < 0.0) || (fStack_24c < 0.0)) {
        cVar22 = '\x01';
        if (((int *)piVar25[2] != (int *)0x0) &&
           (iVar24 = (**(code **)(*(int *)piVar25[2] + 0x9c))(*(undefined4 *)(uStack_3e8 + 0x2c)),
           cVar22 = '\x01', iVar24 - 0xfU < 0xf)) {
          cVar22 = '\0';
        }
      }
      else {
        cVar22 = '\0';
        if (cStack_3ed != '\0') {
          cVar22 = '\x01';
        }
      }
      if (((*(byte *)(in_ECX + 500) & 1) != 0) && (cVar22 == '\0')) {
        fStack_3a8 = *(float *)(uStack_3e8 + 8);
        FUN_0088fee0(local_3e4,fStack_3a8);
      }
      FUN_008a78e0(&fStack_378,afStack_370 + 2,(-(uint)(cVar22 != '\0') & 0xff898888) - 0x10000,0);
      return cVar22;
    }
  }
  local_3cc = (int *)(*(float *)(in_ECX + 0x24c) + fStack_3d4);
  fStack_380 = fStack_390 - fStack_3b0 * (float)local_3cc;
  fStack_37c = fStack_38c - fStack_3ac * (float)local_3cc;
  fStack_390 = fStack_3b0 * (float)local_3cc + fStack_390;
  fStack_38c = (float)local_3cc * fStack_3ac + fStack_38c;
  fStack_3a0 = fStack_3ac;
  fStack_378 = fStack_388;
  FUN_0088fd10(&uStack_320,&fStack_390);
  FUN_0088fd10(&uStack_320,&fStack_380);
  (**(code **)(*piVar28 + 0x14))(&uStack_3cd,auStack_2e0,auStack_340);
  if (1.0 <= fStack_32c) {
LAB_008924ed:
    bVar5 = 0;
  }
  else {
    if (fStack_330 == local_3e0[0xb]) {
LAB_0089247f:
      piVar28 = (int *)piVar28[2];
      uStack_3e8._0_3_ = CONCAT12(1,(ushort)uStack_3e8);
      if (piVar28 != (int *)0x0) {
        if ((fStack_330 == -NAN) ||
           (piVar25 = (int *)(**(code **)(*piVar28 + 0x88))(), piVar25 == (int *)0x0)) {
          iVar24 = piVar28[4];
        }
        else {
          iVar24 = (**(code **)(*piVar25 + 0x9c))(fStack_330);
        }
        if (iVar24 - 0xfU < 0xe) {
          uStack_3e8._0_3_ = (uint3)(ushort)uStack_3e8;
        }
      }
    }
    else {
      FUN_0088fe00(&uStack_320,auStack_340);
      auVar33._4_4_ = -(uint)(0.01 < ABS(fStack_39c - fStack_3ac));
      auVar33._0_4_ = -(uint)(0.01 < ABS(fStack_3a0 - fStack_3b0));
      auVar33._8_4_ = -(uint)(0.01 < ABS(fStack_398 - fStack_3a8));
      auVar33._12_4_ = -(uint)(0.01 < ABS(fStack_394 - fStack_3a4));
      iVar24 = movmskps(extraout_ECX,auVar33);
      if (iVar24 == 0) goto LAB_0089247f;
      if (uStack_3e8._3_1_ != '\0') {
        uStack_3e8._0_3_ = CONCAT12(1,(ushort)uStack_3e8);
      }
    }
    if (1.0 <= fStack_32c) goto LAB_008924ed;
    bVar5 = 1;
  }
  FUN_008a78e0(&fStack_390,&fStack_380,(-(uint)bVar5 & 0xff898888) - 0x10000,0);
  if (((*(byte *)(in_ECX + 500) & 1) != 0) && (uStack_3e8._2_1_ == '\0')) {
    fStack_3a0 = local_3e0[2];
    FUN_0088fee0(uStack_3dc,fStack_3a0);
  }
LAB_00892551:
  return uStack_3e8._2_1_;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00892570(undefined4 param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  uint uVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_44 [12];
  float local_38;
  float local_34;
  float local_30 [2];
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_44;
  fVar6 = (float10)FUN_0089da90();
  fVar1 = (float)fVar6;
  uVar5 = *(uint *)(*(int *)(param_2 + 0x30) + 0x30);
  if ((0.0 < fVar1) && (fVar1 < _DAT_00b2e764)) {
    fVar2 = *param_3;
    fVar3 = param_3[1];
    fVar4 = param_3[2];
    local_38 = 2.0;
    local_30[0] = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    local_34 = local_30[0] / fVar1;
    if (1000.0 < local_34) {
      local_34 = 1000.0 / local_34;
      *param_3 = local_34 * fVar2;
      param_3[1] = local_34 * fVar3;
      param_3[2] = local_34 * fVar4;
      param_3[3] = local_34 * param_3[3];
    }
    uVar5 = uVar5 & 0x3f;
    if (uVar5 == 10) {
      if (fVar1 <= _DAT_00b2e764 * 0.5) {
        local_38 = 3.0;
      }
      else {
        local_38 = 0.1;
      }
    }
    if (uVar5 == 0xe) {
      local_38 = 0.1;
    }
    if ((((*(byte *)(in_ECX + 4) & 1) == 0) && ((*(uint *)(in_ECX + 4) >> 3 & 1) != 0)) &&
       (FUN_008914c0(local_30),
       *(float *)(in_ECX + 0x1b4) * 0.9 < *(float *)(param_2 + 8) - fStack_28)) {
      fVar1 = *(float *)(in_ECX + 0xf0);
      fVar2 = *(float *)(in_ECX + 0xf4);
      fVar3 = *(float *)(in_ECX + 0xf8);
      fVar4 = *(float *)(in_ECX + 0xfc);
      fVar8 = fVar3 * fVar3;
      fVar7 = fVar8 + fVar2 * fVar2 + fVar1 * fVar1;
      auVar9._4_4_ = fVar8;
      auVar9._0_4_ = fVar7;
      auVar9._8_4_ = fVar8;
      auVar9._12_4_ = fVar8;
      auVar9 = rsqrtss(auVar9,auVar9);
      fVar8 = auVar9._0_4_;
      fVar7 = fVar8 * 0.5 * (3.0 - fVar7 * fVar8 * fVar8);
      fVar8 = SQRT(param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3);
      *param_3 = fVar7 * fVar1 * fVar8;
      param_3[1] = fVar7 * fVar2 * fVar8;
      param_3[2] = fVar7 * fVar3 * fVar8;
      param_3[3] = fVar7 * fVar4 * fVar8;
    }
    *param_3 = local_38 * *param_3;
    param_3[1] = local_38 * param_3[1];
    param_3[2] = local_38 * param_3[2];
    param_3[3] = local_38 * param_3[3];
    return;
  }
  *param_3 = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_3[3] = 0.0;
  return;
}



void FUN_008927e0(char param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x368);
  if ((piVar1 != (int *)0x0) && ((bool)param_1 != ((char)piVar1[0x1a] == '\0'))) {
    if (param_1 != '\0') {
      FUN_0088d560(0);
      piVar1 = *(int **)(in_ECX + 0x368);
      if (*(int *)(in_ECX + 8) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_008ac0c0();
      }
      if (*(int *)(iVar2 + 8) != 0) {
        (**(code **)(*piVar1 + 0x5c))(*(undefined4 *)(*(int *)(iVar2 + 8) + 0x2b0));
        return;
      }
      (**(code **)(*piVar1 + 0x5c))(0);
      return;
    }
    (**(code **)(*piVar1 + 0x60))();
    FUN_0088d560(1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00892870(undefined4 param_1,int param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  int in_ECX;
  byte extraout_DL;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auStack_84 [12];
  float local_78;
  float local_74;
  float local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
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
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_84;
  iVar1 = *(int *)(param_2 + 0xb0);
  if (((iVar1 != 0) &&
      (local_74 = *(float *)(in_ECX + 0x1bc), *(uint *)(iVar1 + 0x3b0) <= *(uint *)(in_ECX + 0x1c0))
      ) && ((*(uint *)(iVar1 + 500) & 0x4000) == 0)) {
    FUN_008ac0a0();
    local_50 = param_3[4];
    fStack_4c = param_3[5];
    fStack_44 = param_3[7];
    fStack_48 = 0.0;
    local_60 = fStack_4c * fStack_4c + local_50 * local_50 + 0.0;
    if (0.0 < local_60) {
      fVar3 = fStack_4c * fStack_4c + local_50 * local_50 + 0.0;
      auVar7 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar5 = auVar7._0_4_;
      fVar3 = fVar5 * 0.5 * (3.0 - fVar3 * fVar5 * fVar5);
      local_50 = fVar3 * local_50;
      fStack_4c = fVar3 * fStack_4c;
      fStack_48 = fVar3 * 0.0;
      fStack_44 = fVar3 * fStack_44;
    }
    if ((in_ECX == 0x1f0) || (*(int *)(in_ECX + -0x1e8) == 0)) {
      pfVar2 = (float *)&DAT_00ba7a40;
    }
    else {
      pfVar2 = (float *)FUN_008ac0a0();
    }
    fStack_5c = pfVar2[1];
    fStack_54 = pfVar2[3];
    fStack_58 = 0.0;
    local_60 = SQRT(fStack_5c * fStack_5c + *pfVar2 * *pfVar2 + 0.0);
    local_78 = local_60;
    if (local_74 == 2.8026e-45) {
      local_78 = local_60 + 20.0;
    }
    local_78 = local_78 * -0.25;
    local_50 = local_78 * local_50;
    fStack_4c = local_78 * fStack_4c;
    fStack_48 = local_78 * fStack_48;
    fStack_44 = local_78 * fStack_44;
    FUN_0043f3e0(&local_40,&local_50);
    *(float *)(iVar1 + 0x350) = *(float *)(iVar1 + 0x350) + local_50;
    *(float *)(iVar1 + 0x354) = *(float *)(iVar1 + 0x354) + fStack_4c;
    *(float *)(iVar1 + 0x358) = *(float *)(iVar1 + 0x358) + fStack_48;
    *(float *)(iVar1 + 0x35c) = *(float *)(iVar1 + 0x35c) + fStack_44;
    *(int *)(iVar1 + 0x360) = *(int *)(iVar1 + 0x360) + 1;
    FUN_008907a0(&local_40,0x3c23d70a);
    if ((*(byte *)(iVar1 + 500) & extraout_DL) != 0) {
      local_50 = *param_3;
      fStack_4c = param_3[1];
      fStack_48 = param_3[2];
      fStack_44 = param_3[3];
      if (*(int *)(iVar1 + 8) == 0) {
        pfVar2 = (float *)&DAT_00ba7a40;
      }
      else {
        pfVar2 = (float *)FUN_008ac070();
      }
      local_50 = local_50 - *pfVar2;
      fStack_4c = fStack_4c - pfVar2[1];
      fStack_44 = fStack_44 - pfVar2[3];
      fStack_48 = 0.0;
      fVar3 = *(float *)(iVar1 + 0x2c0);
      fVar5 = *(float *)(iVar1 + 0x2c4);
      fVar8 = 0.5;
      fVar4 = fVar5 * fVar5 + fVar3 * fVar3 + 0.0;
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar6 = auVar7._0_4_;
      fVar4 = fVar6 * 0.5 * (3.0 - fVar4 * fVar6 * fVar6);
      local_74 = fVar4 * 0.0 * 0.0 + fVar4 * fVar5 * fStack_4c + fVar4 * fVar3 * local_50;
      local_60 = local_74 * fVar4 * fVar3;
      fStack_5c = local_74 * fVar4 * fVar5;
      fStack_58 = local_74 * fVar4 * 0.0;
      fStack_54 = local_74 * fVar4 * *(float *)(iVar1 + 0x2cc);
      local_40 = param_3[4];
      fStack_3c = param_3[5];
      local_70 = 3.0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      local_30 = 0.5;
      fStack_2c = 0.0;
      fStack_28 = 0.0;
      fStack_24 = 0.0;
      local_78 = SQRT(fStack_58 * fStack_58 + fStack_5c * fStack_5c + local_60 * local_60) /
                 (*(float *)(iVar1 + 0x3a4) * 0.5) - _DAT_00b2e89c;
      fVar3 = fStack_3c * fStack_3c + local_40 * local_40 + 0.0;
      auVar7 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar5 = auVar7._0_4_;
      fStack_34 = fVar5 * 0.5 * (3.0 - fVar3 * fVar5 * fVar5);
      local_40 = fStack_34 * local_40;
      fStack_3c = fStack_34 * fStack_3c;
      fStack_38 = fStack_34 * 0.0;
      fStack_34 = fStack_34 * param_3[7];
      if ((in_ECX == 0x1f0) || (*(int *)(in_ECX + -0x1e8) == 0)) {
        pfVar2 = (float *)&DAT_00ba7a40;
      }
      else {
        pfVar2 = (float *)FUN_008ac0a0();
        fVar8 = local_30;
      }
      fVar3 = *pfVar2;
      fVar5 = pfVar2[1];
      fVar4 = fVar5 * fVar5 + fVar3 * fVar3 + 0.0;
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar6 = auVar7._0_4_;
      fVar8 = fVar8 * fVar6 * (local_70 - fVar4 * fVar6 * fVar6);
      local_74 = -(fVar8 * 0.0 * fStack_38 + fVar8 * fVar5 * fStack_3c + fVar8 * fVar3 * local_40) *
                 local_78;
      local_78 = local_74;
      if (1.0 < local_74) {
        local_78 = 1.0;
      }
      if (0.0 <= local_78) {
        if (1.0 < local_74) {
          local_78 = 1.0;
          local_74 = 1.0;
        }
        else if (local_74 <= 0.0) {
          return;
        }
        local_30 = fStack_58 * fStack_4c - fStack_5c * fStack_48;
        fStack_2c = local_60 * fStack_48 - fStack_58 * local_50;
        fStack_28 = fStack_5c * local_50 - local_60 * fStack_4c;
        fStack_24 = fStack_54 * fStack_44 - fStack_54 * fStack_44;
        if (0.0 < fStack_28) {
          local_78 = local_74 * -1.0;
          local_74 = local_78;
        }
        local_74 = local_74 * _DAT_00b2e898;
        local_60 = fVar3;
        fStack_5c = fVar5;
        fStack_58 = (float)0;
        fStack_54 = pfVar2[3];
        FUN_00890890(local_74,0x3e4ccccd);
        return;
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_00892d90(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined2 extraout_var;
  int in_ECX;
  float10 fVar5;
  undefined1 auStack_f4 [3];
  char cStack_f1;
  float local_f0;
  int local_ec;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined1 auStack_d0 [8];
  float fStack_c8;
  float fStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 auStack_90 [20];
  float fStack_7c;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_f4;
  if (*(int *)(in_ECX + 0x364) == 0) {
    local_ec = 0;
  }
  else {
    local_ec = *(int *)(*(int *)(in_ECX + 0x364) + 8);
  }
  local_e4 = *(float *)(in_ECX + 0x33c) * 0.25;
  fVar5 = (float10)FUN_008913c0();
  local_f0 = (float)(fVar5 + (float10)4.572055339813232);
  local_e0 = 0.0;
  fStack_d8 = 0.0;
  fStack_d4 = 0.0;
  fStack_dc = local_f0;
  FUN_006848d0(local_60);
  FUN_0088fe00(local_60,&local_e0);
  FUN_00891440(&local_a0);
  uVar3 = 0;
  local_70 = local_a0 + local_e0;
  fStack_6c = fStack_9c + fStack_dc;
  fStack_68 = fStack_98 + fStack_d8;
  fStack_64 = fStack_94 + fStack_d4;
  local_f0 = 0.0;
  if (0 < *(int *)(local_ec + 0x124)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(local_ec + 0x120) + (int)local_f0 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        switch(puVar1[7] & 0x3f) {
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 10:
        case 0xb:
        case 0xc:
        case 0x10:
        case 0x11:
        case 0x14:
          break;
        default:
          piVar2 = (int *)*puVar1;
          iVar4 = (**(code **)(*piVar2 + 8))();
          if (((iVar4 == 3) || (iVar4 == 9)) || (iVar4 == 0x18)) {
            fStack_7c = 1.0;
            uVar3 = 0;
            uStack_b0 = 0;
            uStack_ac = 0;
            FUN_0088fd10(puVar1[2],&local_a0);
            FUN_0088fd10(puVar1[2],&local_70);
            cStack_f1 = '\0';
            do {
              fStack_7c = 1.0;
              fStack_c8 = local_e4 + fStack_c8;
              fStack_b8 = local_e4 + fStack_b8;
              (**(code **)(*piVar2 + 0x14))(&uStack_e6,auStack_d0,auStack_90);
              if (fStack_7c < 1.0) {
                cStack_f1 = '\x01';
                break;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < 3);
            FUN_0088fd10(puVar1[2],&local_70);
            FUN_0088fd10(puVar1[2],&local_a0);
            if (cStack_f1 == '\0') {
              uVar3 = 0;
              do {
                fStack_7c = 1.0;
                fStack_c8 = local_e4 + fStack_c8;
                fStack_b8 = local_e4 + fStack_b8;
                (**(code **)(*piVar2 + 0x14))(&uStack_e5,auStack_d0,auStack_90);
                if (1.0 < fStack_7c == 0 && (fStack_7c == 1.0) == 0) {
                  return CONCAT31((int3)(CONCAT22(extraout_var,
                                                  (ushort)(1.0 < fStack_7c) << 8 |
                                                  (ushort)NAN(fStack_7c) << 10 |
                                                  (ushort)(fStack_7c == 1.0) << 0xe) >> 8),1);
                }
                uVar3 = uVar3 + 1;
              } while (uVar3 < 3);
            }
          }
        }
      }
      uVar3 = (int)local_f0 + 1;
      local_f0 = (float)uVar3;
    } while ((int)uVar3 < *(int *)(local_ec + 0x124));
  }
  return uVar3 & 0xffffff00;
}



void FUN_00893040(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d63ec;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9681c;
  in_ECX[0x78] = &PTR_LAB_00a96810;
  in_ECX[0x7c] = &PTR_LAB_00a967f4;
  local_4 = 6;
  in_ECX[0xf0] = 0;
  if (in_ECX[2] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_008ac0c0(uVar2);
  }
  if (*(int *)(iVar3 + 8) == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(*(int *)(iVar3 + 8) + 0x2b0);
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x58))();
    if (in_ECX[2] != 0) {
      FUN_008acac0(in_ECX + 0x7c);
    }
    (**(code **)(*piVar5 + 0x58))();
  }
  local_4._0_1_ = 5;
  if (-1 < (int)in_ECX[0xf1]) {
    FUN_008a75d0(in_ECX[0xef],(in_ECX[0xf1] & 0x3fffffff) * 0x30,0x14);
  }
  local_4._0_1_ = 4;
  _eh_vector_destructor_iterator_(in_ECX + 0xdd,4,2,FUN_007016a0);
  puVar1 = (undefined4 *)in_ECX[0xda];
  local_4._0_1_ = 3;
  if (((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[0xd9];
  local_4._0_1_ = 2;
  if (((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  in_ECX[0x7c] = &PTR_LAB_00a96570;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0088d340();
  local_4 = 0xffffffff;
  FUN_008b9dd0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00893230(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_6c [4];
  int local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  double local_58;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_009d6418;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_6c;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_68 = 0;
  local_5c = param_3 * 0.14287673;
  local_64 = 0;
  local_60 = 0x80000000;
  local_14 = 0;
  FUN_008a6e40(&local_68,0x12,0x10,uVar2);
  local_50 = *param_2 * 0.14287673;
  fStack_4c = param_2[1] * 0.14287673;
  fStack_48 = param_2[2] * 0.14287673 - local_5c;
  if (local_64 == (local_60 & 0x3fffffff)) {
    FUN_008a6ee0(&local_68,0x10);
  }
  pfVar3 = (float *)(local_64 * 0x10 + local_68);
  local_64 = local_64 + 1;
  *pfVar3 = local_50;
  pfVar3[1] = fStack_4c;
  pfVar3[2] = fStack_48;
  pfVar3[3] = fStack_44;
  uVar2 = 0;
  fVar1 = local_5c;
  fStack_48 = param_4 + 0.1 + fStack_48;
  do {
    fStack_38 = fStack_48;
    fStack_34 = fStack_44;
    local_40 = *(float *)((int)&DAT_00b2e788 + uVar2) * fVar1 + local_50;
    fStack_3c = *(float *)((int)&DAT_00b2e7a8 + uVar2) * fVar1 + fStack_4c;
    if (local_64 == (local_60 & 0x3fffffff)) {
      FUN_008a6ee0(&local_68,0x10);
      fVar1 = local_5c;
    }
    pfVar3 = (float *)(local_64 * 0x10 + local_68);
    local_64 = local_64 + 1;
    uVar2 = uVar2 + 4;
    *pfVar3 = local_40;
    pfVar3[1] = fStack_3c;
    pfVar3[2] = fStack_38;
    pfVar3[3] = fStack_34;
  } while (uVar2 < 0x20);
  uVar2 = 0;
  local_50 = *param_1 * 0.14287673;
  fStack_4c = param_1[1] * 0.14287673;
  local_58 = (double)(fVar1 * 0.5);
  fStack_48 = fVar1 * 0.5 + param_1[2] * 0.14287673;
  do {
    local_40 = *(float *)((int)&DAT_00b2e788 + uVar2) * fVar1;
    fStack_38 = fStack_48;
    fStack_34 = fStack_44;
    fStack_3c = *(float *)((int)&DAT_00b2e7a8 + uVar2) * fVar1;
    if (local_64 == (local_60 & 0x3fffffff)) {
      FUN_008a6ee0(&local_68,0x10);
      fVar1 = local_5c;
    }
    pfVar3 = (float *)(local_64 * 0x10 + local_68);
    local_64 = local_64 + 1;
    uVar2 = uVar2 + 4;
    *pfVar3 = local_40;
    pfVar3[1] = fStack_3c;
    pfVar3[2] = fStack_38;
    pfVar3[3] = fStack_34;
  } while (uVar2 < 0x20);
  fStack_48 = fStack_48 + (float)local_58;
  if (local_64 == (local_60 & 0x3fffffff)) {
    FUN_008a6ee0(&local_68,0x10);
  }
  pfVar3 = (float *)(local_64 * 0x10 + local_68);
  local_64 = local_64 + 1;
  *pfVar3 = local_50;
  pfVar3[1] = fStack_4c;
  pfVar3[2] = fStack_48;
  pfVar3[3] = fStack_44;
  uVar4 = FUN_008d2770(&local_68);
  local_14 = 0xffffffff;
  if (-1 < (int)local_60) {
    FUN_008a75d0(local_68,local_60 << 4,0x14);
  }
  *unaff_FS_OFFSET = local_1c;
  return uVar4;
}



void FUN_00893510(void)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d644b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (-1 < *(int *)(in_ECX + 0x18)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x10),*(int *)(in_ECX + 0x18) * 4,0x14);
  }
  local_4 = 0xffffffff;
  if (-1 < *(int *)(in_ECX + 0xc)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 4),*(int *)(in_ECX + 0xc) * 4,0x14);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008935d0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int in_ECX;
  int iVar8;
  int *unaff_FS_OFFSET;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [20];
  int local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d64a7;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00891160(uVar2);
  iVar8 = 0;
  if (iVar3 != 0) goto LAB_00893939;
  if (param_1 == (int *)0x0) {
    if (*(int *)(in_ECX + 0x364) == 0) goto LAB_00893939;
    piVar4 = (int *)FUN_0089f6b0(0);
    if (piVar4 == (int *)0x0) goto LAB_00893939;
    param_1 = (int *)(**(code **)(*piVar4 + 8))();
    if (param_1 == (int *)0x0) goto LAB_00893939;
    if (*(short *)((int)param_1 + 0xb6) != 0) {
      uVar5 = FUN_00405790(0);
      param_1 = (int *)FUN_00560920(&DAT_00b3fab0,uVar5);
    }
    if (param_1 == (int *)0x0) goto LAB_00893939;
  }
  iVar3 = FUN_00890ba0();
  if (iVar3 != 0) {
    iVar3 = FUN_00401f00(0xdc);
    puStack_4 = (undefined4 *)0x0;
    if (iVar3 != 0) {
      iVar8 = FUN_0070b780(0);
    }
    puStack_4 = (undefined4 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(iVar8,0);
    FUN_006ff420("bhkColDisp");
    puStack_4 = (undefined4 *)(1.0 / (float)param_1[0x25]);
    pfVar6 = (float *)FUN_0043f3e0(auStack_20,in_ECX + 0x340);
    fStack_2c = (float)puStack_4 * *pfVar6;
    fStack_28 = pfVar6[1] * (float)puStack_4;
    fStack_24 = (float)puStack_4 * pfVar6[2];
    *(float *)(iVar8 + 0x54) = fStack_2c;
    *(float *)(iVar8 + 0x58) = fStack_28;
    *(float *)(iVar8 + 0x5c) = fStack_24;
    puStack_4 = (undefined4 *)param_1[0x25];
    if ((float)puStack_4 != 0.0) {
      puStack_4 = (undefined4 *)ABS(1.0 / (float)param_1[0x25]);
      *(undefined4 **)(iVar8 + 0x60) = puStack_4;
    }
    puVar7 = (undefined4 *)FUN_00401f00(0x1c);
    local_c = 1;
    puStack_4 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *puVar7 = &PTR_FUN_00a2fd04;
      *(undefined2 *)(puVar7 + 6) = 8;
    }
    *(ushort *)(puVar7 + 6) = *(ushort *)(puVar7 + 6) & 0xffc7;
    local_c = -1;
    FUN_00405680(puVar7);
    puVar7 = (undefined4 *)FUN_00401f00(0x1c);
    local_c = 2;
    puStack_4 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *puVar7 = &PTR_FUN_00a2fdb4;
      *(undefined2 *)(puVar7 + 6) = 0xf;
    }
    *(ushort *)(puVar7 + 6) = *(ushort *)(puVar7 + 6) | 3;
    local_c = -1;
    FUN_00405680(puVar7);
    puVar7 = (undefined4 *)FUN_00401f00(0x1c);
    local_c = 3;
    puStack_4 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *puVar7 = &PTR_FUN_00a2fd5c;
      *(undefined2 *)(puVar7 + 6) = 0;
    }
    *(ushort *)(puVar7 + 6) = *(ushort *)(puVar7 + 6) | 1;
    local_c = -1;
    FUN_00405680(puVar7);
    uStack_38 = 0;
    local_34 = 0;
    uStack_30 = 0;
    puVar7 = (undefined4 *)FUN_0057e270(&puStack_4);
    FUN_008a8140(*puVar7,&uStack_38);
    iVar3 = FUN_00401f00(0x5c);
    local_c = 4;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_007095a0();
    }
    *(undefined4 *)(iVar3 + 0x1c) = DAT_00b25ac4;
    *(undefined4 *)(iVar3 + 0x20) = DAT_00b25ac8;
    uVar5 = DAT_00b25acc;
    *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x54) + 1;
    *(undefined4 *)(iVar3 + 0x24) = uVar5;
    iVar1 = *(int *)(iVar3 + 0x54);
    *(undefined4 *)(iVar3 + 0x28) = DAT_00b25ac4;
    *(undefined4 *)(iVar3 + 0x2c) = DAT_00b25ac8;
    uVar5 = DAT_00b25acc;
    *(int *)(iVar3 + 0x54) = iVar1 + 1;
    *(undefined4 *)(iVar3 + 0x30) = uVar5;
    *(undefined4 *)(iVar3 + 0x40) = uStack_38;
    *(undefined4 *)(iVar3 + 0x44) = local_34;
    *(int *)(iVar3 + 0x54) = iVar1 + 2;
    local_c = -1;
    *(undefined4 *)(iVar3 + 0x48) = uStack_30;
    FUN_00405680(iVar3);
    piVar4 = (int *)FUN_00890ba0();
    (**(code **)(*piVar4 + 0x90))(iVar8);
    FUN_00707610();
    if (DAT_00ba7a84 != (code *)0x0) {
      (*DAT_00ba7a84)(iVar8);
    }
    *(uint *)(iStack_3c + 500) = *(uint *)(iStack_3c + 500) | 0x8000;
  }
LAB_00893939:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00893950(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  undefined1 local_4 [4];
  
  puVar1 = (undefined4 *)FUN_00891160();
  if ((((puVar1 != (undefined4 *)0x0) && ((int *)puVar1[7] != (int *)0x0)) &&
      ((**(code **)(*(int *)puVar1[7] + 0x88))(local_4), puVar1 != (undefined4 *)0x0)) &&
     ((LVar2 = InterlockedDecrement(puVar1 + 1), LVar2 == 0 && (puVar1 != (undefined4 *)0x0)))) {
    (**(code **)*puVar1)(1);
  }
  *(uint *)(in_ECX + 500) = *(uint *)(in_ECX + 500) & 0xffff7fff;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008939b0(void)

{
  float fVar1;
  int in_ECX;
  float10 fVar2;
  undefined1 auStack_8c [4];
  float local_88;
  float local_84;
  float local_80;
  undefined1 local_70 [8];
  float fStack_68;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_8c;
  if ((*(byte *)(in_ECX + 500) & 1) == 0) {
    return;
  }
  if ((*(uint *)(in_ECX + 500) >> 0x12 & 1) != 0) {
    return;
  }
  if (*(float *)(in_ECX + 0x30c) <= 0.0) {
    return;
  }
  FUN_006848d0(local_60);
  local_88 = *(float *)(in_ECX + 0x240);
  local_84 = *(float *)(in_ECX + 0x244);
  if (local_88 == 1.1754944e-38) {
    FUN_008915f0(0,local_70);
    local_80 = fStack_68;
    local_88 = fStack_68;
  }
  if (local_84 == 1.1754944e-38) {
    FUN_008915f0(1,local_70);
    local_80 = fStack_68;
    local_84 = fStack_68;
  }
  if (local_84 - local_88 == 0.0) {
    local_84 = 0.0;
  }
  else {
    local_88 = (local_84 - local_88) / *(float *)(in_ECX + 0x3a4);
    fVar2 = (float10)FUN_009870a0();
    fVar1 = (float)fVar2;
    if (fVar1 <= 0.0) {
      local_84 = _DAT_00b2e77c * -0.017453292;
      if (fVar1 < local_84) goto LAB_00893b25;
    }
    else {
      local_84 = _DAT_00b2e77c * 0.017453292;
      if (local_84 < fVar1) goto LAB_00893b25;
    }
    local_84 = fVar1;
  }
LAB_00893b25:
  local_84 = local_84 - *(float *)(in_ECX + 0x32c);
  if (local_84 == 0.0) {
    return;
  }
  if (1.0 < *(float *)(in_ECX + 0x330)) {
    *(undefined4 *)(in_ECX + 0x330) = 0x3f800000;
  }
  *(float *)(in_ECX + 0x32c) = local_84 * *(float *)(in_ECX + 0x330) + *(float *)(in_ECX + 0x32c);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00893b90(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  undefined1 (*pauVar11) [16];
  int *unaff_FS_OFFSET;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_1c4 [4];
  byte bStack_1c0;
  char local_1bf;
  char cStack_1be;
  char local_1bd;
  float fStack_1bc;
  int iStack_1b8;
  float local_1b4;
  undefined1 (*pauStack_1b0) [16];
  char local_1a9;
  int *piStack_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  undefined1 uStack_191;
  undefined4 *puStack_190;
  uint uStack_18c;
  uint uStack_188;
  int *local_184;
  float *pfStack_180;
  float local_17c;
  int local_178;
  int local_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  float fStack_160;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [4];
  int iStack_130;
  float fStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  int *piStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [32];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **ppuStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_4c;
  undefined4 uStack_40;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  uint uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d64e3;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_1c4;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffe30;
  *unaff_FS_OFFSET = (int)&local_1c;
  *(undefined4 *)(in_ECX + 0x54) = 0x800000;
  *(uint *)(in_ECX + 4) = *(uint *)(in_ECX + 4) & 0xfffffffb;
  *(undefined4 *)(in_ECX + 0x50) = 0x800000;
  local_184 = param_1;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  local_1a0 = param_2;
  local_170 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  if ((*(byte *)(in_ECX + 6) & 1) != 0) {
    *(undefined4 *)(in_ECX + 0x1c8) = 0;
  }
  *(undefined4 *)(in_ECX + 0x1c4) = 0;
  local_198 = 0;
  local_19c = 0;
  local_1bd = '\0';
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(in_ECX + 0xc0);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(in_ECX + 0xc4);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(in_ECX + 200);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(in_ECX + 0xcc);
  if ((in_ECX != 0x1f0) && (*(int *)(in_ECX + -0x1e8) != 0)) {
    FUN_008ac0a0(uVar5);
  }
  local_1a9 = *(int *)(in_ECX + 0x17c) == 1;
  local_17c = 0.0;
  local_1bf = '\0';
  if ((((((!(bool)local_1a9) && ((*(uint *)(in_ECX + 4) >> 1 & 1) == 0)) && (in_ECX != 0x1f0)) &&
       ((*(int *)(in_ECX + -0x1e8) != 0 && (local_1b4 = (float)FUN_008ac0c0(), local_1b4 != 0.0))))
      && ((*(int *)(in_ECX + 0x184) != 0 &&
          ((piVar1 = *(int **)(*(int *)(in_ECX + 0x184) + 8), piVar1 != (int *)0x0 &&
           (iVar6 = (**(code **)(*piVar1 + 8))(), iVar6 == 0xc)))))) &&
     ((iVar6 = (**(code **)(*piVar1 + 0x1c))(), iVar6 == 3 &&
      ((piVar2 = *(int **)(piVar1[4] + 8), piVar2 != (int *)0x0 &&
       (iVar6 = (**(code **)(*piVar2 + 8))(), iVar6 == 8)))))) {
    pauStack_1b0 = (undefined1 (*) [16])piVar2[3];
    fStack_150 = 0.0;
    local_1b4 = (float)((int)local_1b4 + 0x70);
    fStack_14c = 0.0;
    fStack_144 = 0.0;
    fStack_100 = (float)piVar2[4] + 0.0;
    fStack_fc = (float)piVar2[5] + 0.0;
    fStack_f8 = (float)piVar2[6] + (float)pauStack_1b0;
    fStack_f4 = (float)piVar2[7] + 0.0;
    fStack_148 = (float)pauStack_1b0;
    FUN_0088fcc0(local_1b4,&fStack_100);
    piVar1 = *(int **)(piVar1[4] + 0x10);
    if ((piVar1 != (int *)0x0) && (iVar6 = (**(code **)(*piVar1 + 8))(), iVar6 == 8)) {
      pauStack_1b0 = (undefined1 (*) [16])piVar1[3];
      fStack_150 = 0.0;
      fStack_14c = 0.0;
      fStack_144 = 0.0;
      fStack_120 = (float)piVar1[4] + 0.0;
      fStack_11c = (float)piVar1[5] + 0.0;
      fStack_118 = (float)piVar1[6] + (float)pauStack_1b0;
      fStack_114 = (float)piVar1[7] + 0.0;
      fStack_148 = (float)pauStack_1b0;
      FUN_0088fcc0(local_1b4,&fStack_120);
      pauStack_1b0 = (undefined1 (*) [16])piVar1[3];
      local_17c = (float)pauStack_1b0 * 0.333;
      local_1bf = '\x01';
      FUN_008a7930(&fStack_b0,0x40800000,0xff0000ff,0);
      FUN_008a7930(&fStack_c0,0x40800000,0xff008000,0);
    }
  }
  local_178 = *(int *)(local_1a0 + 0x4c);
  local_1a4 = 0;
  if (0 < local_178) {
    do {
      local_174 = local_1a4 * 0x30;
      pfVar10 = (float *)(*local_184 + local_174);
      pauVar11 = (undefined1 (*) [16])(local_1a4 * 0x40 + *(int *)(local_1a0 + 0x48));
      fVar13 = pfVar10[10];
      if (*(char *)((int)fVar13 + 0x18) == '\x01') {
        iStack_1b8 = *(int *)((int)fVar13 + 0x10) + (int)fVar13;
      }
      else {
        iStack_1b8 = 0;
      }
      fStack_1bc = pfVar10[6];
      local_1b4 = (float)(*(uint *)((int)fVar13 + 0x1c) & 0x3f);
      bStack_1c0 = ~(byte)(*(uint *)(in_ECX + 4) >> 0xb) & 1;
      pauStack_1b0 = pauVar11;
      pfStack_180 = pfVar10;
      fStack_160 = fStack_1bc;
      if ((((iStack_1b8 != 0) && (0.985 < fStack_1bc)) &&
          (iVar6 = (**(code **)(**(int **)(iStack_1b8 + 0x50) + 8))(), iVar6 == 6)) &&
         (DAT_00ba7a5c == 0)) {
        FUN_008914c0(&fStack_120);
        afStack_140[0] = *(float *)(in_ECX + 0x58) + fStack_118;
        fStack_160 = pfVar10[2];
        fStack_118 = afStack_140[0];
        if (fStack_160 <= afStack_140[0]) {
          uStack_4c = 0x3f800000;
          ppuStack_70 = &PTR_FUN_00a562bc;
          uStack_6c = 0x3f800000;
          uStack_40 = 0;
          puStack_190 = (undefined4 *)0x0;
          uStack_18c = 0;
          uStack_188 = 0x80000000;
          iVar6 = *(int *)(*(int *)(in_ECX + 0x174) + 8);
          uVar5 = *(uint *)(iVar6 + 0x124);
          uStack_14 = 1;
          if (0 < (int)uVar5) {
            puStack_190 = (undefined4 *)FUN_008a7560(uVar5 * 4,0x14);
            uVar5 = *(uint *)(iVar6 + 0x124);
            uStack_188 = uVar5;
          }
          puVar3 = puStack_190;
          iVar6 = *(int *)(iVar6 + 0x120);
          if (0 < (int)uVar5) {
            puVar7 = puStack_190;
            uVar9 = uVar5;
            do {
              *puVar7 = *(undefined4 *)((iVar6 - (int)puStack_190) + (int)puVar7);
              puVar7 = puVar7 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          uStack_d0 = 0;
          uStack_cc = 0;
          iVar6 = 0;
          uStack_c8 = 0x42100000;
          uStack_c4 = 0;
          uStack_f0 = 0;
          fStack_110 = *pfStack_180 + 0.0;
          fStack_10c = pfStack_180[1] + 0.0;
          fStack_108 = pfStack_180[2] + 36.0;
          fStack_104 = pfStack_180[3] + 0.0;
          uStack_ec = 0;
          uStack_e8 = 0x42580000;
          uStack_e4 = 0;
          fStack_100 = fStack_110 - 0.0;
          fStack_fc = fStack_10c - 0.0;
          fStack_f8 = fStack_108 - 54.0;
          fStack_f4 = fStack_104 - 0.0;
          _DAT_00ba7a58 = (int *)0xd51184e7;
          uStack_18c = uVar5;
          if (0 < (int)uVar5) {
            do {
              iVar8 = puVar3[iVar6];
              if (((iVar8 != 0) && (*(char *)(iVar8 + 0x18) == '\x01')) &&
                 (*(int *)(iVar8 + 0x10) + iVar8 != 0)) {
                if (*(char *)(iVar8 + 0x18) == '\x01') {
                  iVar8 = *(int *)(iVar8 + 0x10) + iVar8;
                }
                else {
                  iVar8 = 0;
                }
                iVar8 = (**(code **)(**(int **)(iVar8 + 0x50) + 8))();
                if (iVar8 == 6) {
                  fStack_12c = 1.0;
                  uStack_80 = 0;
                  uStack_7c = 0;
                  FUN_0088fd10(*(undefined4 *)(puVar3[iVar6] + 8),&fStack_110);
                  FUN_0088fd10(*(undefined4 *)(puVar3[iVar6] + 8),&fStack_100);
                  (**(code **)(**(int **)puVar3[iVar6] + 0x14))(&uStack_191,auStack_a0,afStack_140);
                  if (fStack_12c < 1.0) {
                    uVar5 = *(uint *)(puVar3[iVar6] + 0x1c) & 0x3f;
                    *(uint *)(in_ECX + 0x28) = uVar5;
                    if (iStack_130 == -1) {
                      if (*(int *)puVar3[iVar6] == 0) {
                        iVar8 = 0;
                      }
                      else {
                        iVar8 = *(int *)(*(int *)puVar3[iVar6] + 8);
                      }
                      if (iVar8 != 0) {
                        iVar8 = *(int *)(iVar8 + 0x10);
                        if (0x1d < iVar8) {
                          iVar8 = 0x1e;
                        }
LAB_008941d7:
                        if ((0xe < iVar8) && (iVar8 < 0x1e)) goto LAB_00894288;
                      }
                    }
                    else if (((uVar5 != 0x11) &&
                             (piStack_1a8 = (int *)FUN_008afbe0(puVar3[iVar6]),
                             piStack_1a8 != (int *)0x0)) &&
                            (iVar8 = (**(code **)(*piStack_1a8 + 0x9c))(iStack_130), iVar8 < 0x1e))
                    {
                      iVar8 = (**(code **)(*piStack_1a8 + 0x9c))(iStack_130);
                      goto LAB_008941d7;
                    }
                    piStack_1a8 = (int *)(fStack_108 + fStack_12c * (fStack_f8 - fStack_108));
                    if ((float)_DAT_00ba7a58 < (float)piStack_1a8) {
                      _DAT_00ba7a58 = piStack_1a8;
                      DAT_00ba7a5c = FUN_0047de00(puVar3[iVar6]);
                      fStack_e0 = fStack_110;
                      fStack_dc = fStack_10c;
                      piStack_d8 = piStack_1a8;
                      uStack_d4 = 0;
                      FUN_008a7930(&fStack_e0,0x40800000,0xffffff00,0);
                    }
                  }
                }
              }
LAB_00894288:
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)uStack_18c);
          }
          uStack_14 = uStack_14 & 0xffffff00;
          if ((uStack_188 & 0x80000000) == 0) {
            FUN_008a75d0(puVar3,uStack_188 * 4,0x14);
          }
          uStack_14 = 0xffffffff;
          pfVar10 = pfStack_180;
          pauVar11 = pauStack_1b0;
        }
      }
      fStack_150 = *(float *)*pauVar11;
      fStack_14c = *(float *)(*pauVar11 + 4);
      fStack_148 = *(float *)(*pauVar11 + 8);
      fStack_144 = *(float *)(*pauVar11 + 0xc);
      if (iStack_1b8 == 0) {
        switch(local_1b4) {
        case 1.68156e-44:
        case 2.24208e-44:
          *(undefined4 *)pauVar11[1] = local_170;
          *(undefined4 *)(pauVar11[1] + 4) = uStack_16c;
          *(undefined4 *)(pauVar11[1] + 8) = uStack_168;
          *(undefined4 *)(pauVar11[1] + 0xc) = uStack_164;
          break;
        case 1.96182e-44:
          if ((*(byte *)(in_ECX + 6) & 1) != 0) {
            *(undefined4 *)pauVar11[1] = local_170;
            *(undefined4 *)(pauVar11[1] + 4) = uStack_16c;
            *(undefined4 *)(pauVar11[1] + 8) = uStack_168;
            *(undefined4 *)(pauVar11[1] + 0xc) = uStack_164;
          }
          break;
        case 2.8026e-44:
          fStack_1bc = 0.0;
          *(undefined4 *)(*pauVar11 + 8) = 0;
          auVar22 = *pauVar11;
          fVar15 = auVar22._0_4_;
          fVar17 = auVar22._4_4_;
          fVar16 = auVar22._8_4_;
          fVar14 = fVar16 * fVar16;
          fVar13 = fVar14 + fVar17 * fVar17 + fVar15 * fVar15;
          auVar20._4_4_ = fVar14;
          auVar20._0_4_ = fVar13;
          auVar20._8_4_ = fVar14;
          auVar20._12_4_ = fVar14;
          auVar20 = rsqrtss(auVar20,auVar20);
          fVar14 = auVar20._0_4_;
          fVar13 = fVar14 * 0.5 * (3.0 - fVar13 * fVar14 * fVar14);
          *(float *)*pauVar11 = fVar13 * fVar15;
          *(float *)(*pauVar11 + 4) = fVar13 * fVar17;
          *(float *)(*pauVar11 + 8) = fVar13 * fVar16;
          *(float *)(*pauVar11 + 0xc) = fVar13 * auVar22._12_4_;
        }
      }
      else {
        switch(local_1b4) {
        case 2.8026e-45:
          iVar6 = (**(code **)(**(int **)(iStack_1b8 + 0x50) + 8))();
          if (iVar6 < 6) goto switchD_00894322_caseD_a;
          *(undefined4 *)(pauVar11[2] + 8) = 0x3f13b646;
          break;
        default:
          if ((local_1bf != '\0') && ((*(uint *)(in_ECX + 4) >> 1 & 1) == 0)) {
            fVar13 = *pfVar10 - fStack_b0;
            fVar14 = pfVar10[1] - fStack_ac;
            fVar15 = pfVar10[2] - fStack_a8;
            fVar17 = pfVar10[3] - fStack_a4;
            afStack_140[0] =
                 SQRT(fVar17 * fVar17 + fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13);
            if (local_17c <= afStack_140[0]) {
              fVar13 = *pfVar10 - fStack_c0;
              fVar14 = pfVar10[1] - fStack_bc;
              fVar15 = pfVar10[2] - fStack_b8;
              fVar17 = pfVar10[3] - fStack_b4;
              afStack_140[0] =
                   SQRT(fVar17 * fVar17 + fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13);
              if (afStack_140[0] < local_17c) {
                *(uint *)(in_ECX + 4) = *(uint *)(in_ECX + 4) | 2;
              }
            }
            else {
              *(uint *)(in_ECX + 4) = *(uint *)(in_ECX + 4) | 2;
            }
          }
          break;
        case 5.60519e-45:
        case 7.00649e-45:
        case 8.40779e-45:
          if ((*(byte *)(in_ECX + 6) & 1) == 0) {
            fVar12 = (float10)FUN_0089da90();
            local_1b4 = (float)fVar12;
            if (local_1b4 < _DAT_00b2e764) {
              *(undefined4 *)pauVar11[1] = local_170;
              *(undefined4 *)(pauVar11[1] + 4) = uStack_16c;
              *(undefined4 *)(pauVar11[1] + 8) = uStack_168;
              *(undefined4 *)(pauVar11[1] + 0xc) = uStack_164;
            }
            fStack_150 = 0.0;
            fStack_14c = 0.0;
            fStack_148 = 1.0;
            fStack_1bc = 1.0;
            fStack_144 = 0.0;
          }
          bStack_1c0 = 0;
          break;
        case 1.4013e-44:
switchD_00894322_caseD_a:
          if ((*(byte *)(in_ECX + 6) & 1) == 0) {
            fStack_150 = 0.0;
            fStack_14c = 0.0;
            fStack_148 = 1.0;
            fStack_1bc = 1.0;
            fStack_144 = 0.0;
            *(undefined4 *)(pauVar11[2] + 0xc) = 0;
            iVar6 = (**(code **)(**(int **)(iStack_1b8 + 0x50) + 8))();
            if (iVar6 < 6) {
              *(undefined4 *)pauVar11[1] = local_170;
              *(undefined4 *)(pauVar11[1] + 4) = uStack_16c;
              *(undefined4 *)(pauVar11[1] + 8) = uStack_168;
              *(undefined4 *)(pauVar11[1] + 0xc) = uStack_164;
            }
          }
          bStack_1c0 = 0;
        }
      }
      if ((-0.01 <= fStack_1bc) && (iStack_1b8 != 0)) {
        cStack_1be = '\x01';
        if (*(float *)(in_ECX + 0x20) <= fStack_1bc) {
          if (((*(byte *)(in_ECX + 6) & 1) == 0) && ((*(byte *)(in_ECX + 4) & 1) != 0)) {
            FUN_0088ff20(in_ECX + 400,pfVar10);
          }
          *(uint *)(in_ECX + 4) = *(uint *)(in_ECX + 4) | 0x400;
          if ((*(uint *)(in_ECX + 4) >> 3 & 1) == 0) {
            *(undefined4 *)(pauVar11[2] + 8) = 0x40b8a3d8;
          }
        }
        else {
          cVar4 = FUN_00891cc0(pfVar10);
          iVar6 = local_1a0;
          if (cVar4 == '\0') {
            if ((*(uint *)(in_ECX + 4) & 0x1800) == 0) {
              *(undefined4 *)(pauVar11[2] + 0xc) = 0;
            }
            *(uint *)(in_ECX + 4) = *(uint *)(in_ECX + 4) | 0x404;
            if (local_1a9 == '\0') {
              afStack_140[0] = *(float *)(*pauVar11 + 0xc);
              fStack_1bc = afStack_140[0] - afStack_140[0];
              fVar13 = fStack_14c * fStack_14c + fStack_150 * fStack_150 + 1.0;
              auVar18._4_4_ = 0x3f800000;
              auVar18._0_4_ = fVar13;
              auVar18._8_4_ = 0x3f800000;
              auVar18._12_4_ = 0x3f800000;
              auVar22 = rsqrtss(auVar18,auVar18);
              fVar14 = auVar22._0_4_;
              fVar13 = fVar14 * 0.5 * (3.0 - fVar13 * fVar14 * fVar14);
              fStack_150 = fVar13 * fStack_150;
              fStack_14c = fVar13 * fStack_14c;
              fStack_148 = fVar13 * 1.0;
              fStack_144 = fVar13 * fStack_144;
              *(float *)*pauVar11 = fStack_150;
              *(float *)(*pauVar11 + 4) = fStack_14c;
              *(float *)(*pauVar11 + 8) = fStack_148;
              *(float *)(*pauVar11 + 0xc) = fStack_144;
              if (fStack_1bc < 0.0) {
                fStack_1bc = 0.0;
              }
              *(float *)(pauVar11[1] + 8) = fStack_1bc * 5.0 + 1.0 + *(float *)(pauVar11[1] + 8);
            }
            else {
              fVar13 = fStack_14c * fStack_14c + fStack_150 * fStack_150 + 1.0;
              auVar22._4_4_ = 0x3f800000;
              auVar22._0_4_ = fVar13;
              auVar22._8_4_ = 0x3f800000;
              auVar22._12_4_ = 0x3f800000;
              auVar22 = rsqrtss(auVar22,auVar22);
              fVar14 = auVar22._0_4_;
              fVar13 = fVar14 * 0.5 * (3.0 - fVar13 * fVar14 * fVar14);
              fStack_150 = fVar13 * fStack_150;
              fStack_14c = fVar13 * fStack_14c;
              fStack_148 = fVar13 * 1.0;
              fStack_144 = fVar13 * fStack_144;
            }
          }
          else if ((local_198 < 4) && (bStack_1c0 != 0)) {
            if (fStack_1bc < 0.2) {
              cStack_1be = '\0';
            }
            pauVar11 = (undefined1 (*) [16])
                       (*(int *)(local_1a0 + 0x4c) * 0x40 + *(int *)(local_1a0 + 0x48));
            FUN_008909d0(pauStack_1b0);
            *(undefined4 *)pauVar11[1] = local_170;
            *(undefined4 *)(pauVar11[1] + 4) = uStack_16c;
            *(undefined4 *)(pauVar11[1] + 8) = uStack_168;
            *(undefined4 *)(pauVar11[1] + 0xc) = uStack_164;
            *(undefined4 *)(*pauVar11 + 8) = 0;
            auVar22 = *pauVar11;
            fVar15 = auVar22._0_4_;
            fVar17 = auVar22._4_4_;
            fVar16 = auVar22._8_4_;
            fVar14 = fVar16 * fVar16;
            fVar13 = fVar14 + fVar17 * fVar17 + fVar15 * fVar15;
            auVar19._4_4_ = fVar14;
            auVar19._0_4_ = fVar13;
            auVar19._8_4_ = fVar14;
            auVar19._12_4_ = fVar14;
            auVar20 = rsqrtss(auVar19,auVar19);
            fVar14 = auVar20._0_4_;
            fVar13 = fVar14 * 0.5 * (3.0 - fVar13 * fVar14 * fVar14);
            local_198 = local_198 + 1;
            *(float *)*pauVar11 = fVar13 * fVar15;
            *(float *)(*pauVar11 + 4) = fVar13 * fVar17;
            *(float *)(*pauVar11 + 8) = fVar13 * fVar16;
            *(float *)(*pauVar11 + 0xc) = fVar13 * auVar22._12_4_;
            *(int *)(iVar6 + 0x4c) = *(int *)(iVar6 + 0x4c) + 1;
            if (cStack_1be == '\0') goto LAB_0089481f;
            local_19c = local_19c + 1;
          }
        }
        *(uint *)(in_ECX + 4) = *(uint *)(in_ECX + 4) | 0x200;
        *(int *)(in_ECX + 0x1c4) = *(int *)(in_ECX + 0x1c4) + 1;
        FUN_00891850(*local_184 + local_174);
        if (local_1bd == '\0') {
          local_1bd = '\x01';
          fVar13 = fStack_150;
          fVar14 = fStack_14c;
          fVar15 = fStack_148;
          fVar17 = fStack_144;
        }
        else {
          auVar22 = *(undefined1 (*) [16])(in_ECX + 0x40);
          fVar13 = fStack_150 + auVar22._0_4_;
          fVar14 = fStack_14c + auVar22._4_4_;
          fVar15 = fStack_148 + auVar22._8_4_;
          fVar17 = fStack_144 + auVar22._12_4_;
        }
        *(float *)(in_ECX + 0x40) = fVar13;
        *(float *)(in_ECX + 0x44) = fVar14;
        *(float *)(in_ECX + 0x48) = fVar15;
        *(float *)(in_ECX + 0x4c) = fVar17;
        if ((*(byte *)(in_ECX + 6) & 1) != 0) {
          *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(iStack_1b8 + 0xc);
        }
      }
LAB_0089481f:
      local_1a4 = local_1a4 + 1;
    } while (local_1a4 < local_178);
  }
  *(bool *)(in_ECX + 0x60) = *(int *)(in_ECX + 0x1c4) == local_19c;
  if ((*(int *)(in_ECX + 0x1c4) != 0) &&
     (0.0 < *(float *)(in_ECX + 0x48) * *(float *)(in_ECX + 0x48) +
            *(float *)(in_ECX + 0x44) * *(float *)(in_ECX + 0x44) +
            *(float *)(in_ECX + 0x40) * *(float *)(in_ECX + 0x40))) {
    fVar13 = *(float *)(in_ECX + 0x40);
    fVar14 = *(float *)(in_ECX + 0x44);
    fVar15 = *(float *)(in_ECX + 0x48);
    fVar16 = fVar15 * fVar15;
    fVar17 = fVar16 + fVar14 * fVar14 + fVar13 * fVar13;
    auVar21._4_4_ = fVar16;
    auVar21._0_4_ = fVar17;
    auVar21._8_4_ = fVar16;
    auVar21._12_4_ = fVar16;
    auVar22 = rsqrtss(auVar21,auVar21);
    fVar16 = auVar22._0_4_;
    fVar17 = fVar16 * 0.5 * (3.0 - fVar17 * fVar16 * fVar16);
    *(float *)(in_ECX + 0x40) = fVar17 * fVar13;
    *(float *)(in_ECX + 0x44) = fVar17 * fVar14;
    *(float *)(in_ECX + 0x48) = fVar17 * fVar15;
    *(float *)(in_ECX + 0x4c) = fVar17 * *(float *)(in_ECX + 0x4c);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_00894940(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  if (((in_ECX[0xdb] != param_1) && (param_1 < 2)) && (in_ECX[param_1 + 0xdd] != 0)) {
    uVar1 = in_ECX[0x7d];
    if ((uVar1 >> 0xf & 1) != 0) {
      FUN_00893950();
    }
    in_ECX[0xdb] = param_1;
    if (in_ECX[2] == 0) {
      puVar2 = &DAT_00ba7a40;
    }
    else {
      puVar2 = (undefined4 *)FUN_008ac070();
    }
    uVar3 = FUN_00890ba0(puVar2);
    FUN_00890660(uVar3,puVar2);
    if ((uVar1 >> 0xf & 1) != 0) {
      (**(code **)(*in_ECX + 0x88))(0);
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_008949c0(undefined4 param_1,char param_2,char param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int in_ECX;
  float *pfVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_254 [15];
  byte local_245;
  float fStack_244;
  int local_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined1 local_220 [16];
  undefined **local_210;
  undefined4 local_20c;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined **local_1d0;
  undefined4 local_1cc;
  undefined1 *local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b0 [396];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d6536;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_254;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffda0;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_245 = 0;
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_008ac0c0(uVar2);
  }
  if (piVar3[2] != 0) {
    local_210 = &PTR_LAB_00a967a8;
    local_1e4 = 0x7f7fffff;
    local_1e0 = 0;
    local_20c = 0x7f7fffff;
    local_1c0 = local_1b0;
    local_1cc = 0x7f7fffff;
    local_1d0 = &PTR_FUN_00a55dec;
    local_1b8 = 0x80000008;
    local_1bc = 0;
    local_22c = 0x3c23d70a;
    local_230 = 0x3c23d70a;
    local_14._0_1_ = 1;
    local_14._1_3_ = 0;
    FUN_00891440(local_220);
    FUN_00452a10(param_1);
    local_240 = piVar3[0x28];
    iStack_23c = piVar3[0x29];
    iStack_238 = piVar3[0x2a];
    iStack_234 = piVar3[0x2b];
    (**(code **)(*piVar3 + 0x30))(&local_240,&local_240,&local_210,&local_1d0);
    if (0 < local_1bc) {
      pfVar4 = (float *)(local_1c0 + 0x1c);
      iVar5 = local_1bc;
      do {
        switch(*(uint *)((int)pfVar4[3] + 0x1c) & 0x3f) {
        case 4:
        case 5:
        case 6:
        case 7:
        case 10:
        case 0xb:
          goto switchD_00894b0f_caseD_4;
        case 8:
        case 0x14:
          cVar1 = param_3;
          break;
        default:
          goto switchD_00894b0f_caseD_9;
        case 0xc:
        case 0x10:
          cVar1 = param_2;
          break;
        case 0x11:
          cVar1 = param_4;
        }
        if (cVar1 != '\0') {
switchD_00894b0f_caseD_9:
          fStack_244 = *pfVar4;
          local_245 = local_245 | fStack_244 < -0.1;
        }
switchD_00894b0f_caseD_4:
        pfVar4 = pfVar4 + 0xc;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00891560(local_220);
    local_14 = (uint)local_14._1_3_ << 8;
    FUN_005322e0();
  }
  *unaff_FS_OFFSET = local_1c;
  return local_245 == 0;
}



void FUN_00894bd0(float param_1)

{
  float fVar1;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 500) & 1) == 0) {
    fVar1 = *(float *)(in_ECX + 0x3a4) * 0.5;
    if (fVar1 < param_1) {
      param_1 = fVar1;
    }
    if (param_1 <= 0.0) {
      param_1 = *(float *)(in_ECX + 0x3a0);
    }
    if (*(float *)(in_ECX + 0x3a8) != param_1) {
      if (*(int *)(in_ECX + 0x370) == 2) {
        *(undefined4 *)(in_ECX + 0x370) = *(undefined4 *)(in_ECX + 0x36c);
        FUN_00894940(0);
      }
      *(undefined4 *)(in_ECX + 0x3ac) = 2;
      *(float *)(in_ECX + 0x3a8) = param_1;
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00894c70(float param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined1 auStack_4c [4];
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_4c;
  if (*(int *)(in_ECX + 0x3ac) != 2) {
    return;
  }
  iVar3 = FUN_00560920(&DAT_00ba7fd8,*(undefined4 *)(in_ECX + 0x374));
  if (iVar3 == 0) {
    local_48 = *(float *)(in_ECX + 0x3a8);
    goto LAB_00894df1;
  }
  if ((*(uint *)(in_ECX + 500) >> 0x14 & 1) != 0) {
    param_1 = 100.0;
  }
  iVar1 = *(int *)(iVar3 + 8);
  fVar2 = _DAT_00b2efc4;
  if (iVar1 != 0) {
    fVar2 = *(float *)(iVar1 + 0xc);
  }
  local_44 = param_1 * 5.0;
  if (fVar2 <= *(float *)(in_ECX + 0x3a8)) {
    local_48 = local_44 + fVar2;
    if (*(float *)(in_ECX + 0x3a8) < local_48 != (*(float *)(in_ECX + 0x3a8) == local_48))
    goto LAB_00894d2b;
  }
  else {
    local_48 = fVar2 - local_44;
    if (*(float *)(in_ECX + 0x3a8) < local_48) {
      local_44 = -local_44;
    }
    else {
LAB_00894d2b:
      local_44 = *(float *)(in_ECX + 0x3a8) - fVar2;
      local_48 = *(float *)(in_ECX + 0x3a8);
    }
  }
  puVar4 = (undefined4 *)(iVar1 + 0x10);
  if (iVar1 == 0) {
    puVar4 = &DAT_00ba7a40;
  }
  local_40 = *puVar4;
  uStack_3c = puVar4[1];
  uStack_34 = puVar4[3];
  puVar5 = (undefined4 *)(iVar1 + 0x20);
  if (iVar1 == 0) {
    puVar5 = &DAT_00ba7a40;
  }
  local_30 = *puVar5;
  uStack_2c = puVar5[1];
  uStack_24 = puVar5[3];
  fStack_38 = (float)puVar4[2] - local_44;
  fStack_28 = local_44 + (float)puVar5[2];
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10) = local_40;
    *(undefined4 *)(iVar1 + 0x14) = uStack_3c;
    *(float *)(iVar1 + 0x18) = fStack_38;
    *(undefined4 *)(iVar1 + 0x1c) = uStack_34;
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0xc);
  }
  iVar1 = *(int *)(iVar3 + 8);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x20) = local_30;
    *(undefined4 *)(iVar1 + 0x24) = uStack_2c;
    *(float *)(iVar1 + 0x28) = fStack_28;
    *(undefined4 *)(iVar1 + 0x2c) = uStack_24;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0xc);
  }
  if (*(int *)(iVar3 + 8) != 0) {
    *(float *)(*(int *)(iVar3 + 8) + 0xc) = local_48;
  }
LAB_00894df1:
  if (*(float *)(in_ECX + 0x3a8) != local_48) {
    return;
  }
  if (*(float *)(in_ECX + 0x3a0) == local_48) {
    if (*(int *)(in_ECX + 0x370) != 2) {
      FUN_00894940(*(int *)(in_ECX + 0x370));
      *(undefined4 *)(in_ECX + 0x370) = 2;
    }
    *(undefined4 *)(in_ECX + 0x3ac) = 0;
    return;
  }
  *(undefined4 *)(in_ECX + 0x3ac) = 1;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00894e80(float param_1)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined1 local_204 [4];
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined **local_1d0;
  undefined4 local_1cc;
  undefined1 *local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b0 [396];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d657b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)local_204;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffdf0;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (((*(uint *)(in_ECX + 500) >> 0x13 & 1) == 0) || (*(int *)(in_ECX + 0x364) == 0)) {
    FUN_00891440(&local_200);
    local_200 = param_1 * *(float *)(in_ECX + 0x2e0) + local_200;
    fStack_1fc = param_1 * *(float *)(in_ECX + 0x2e4) + fStack_1fc;
    fStack_1f8 = param_1 * *(float *)(in_ECX + 0x2e8) + fStack_1f8;
    fStack_1f4 = param_1 * *(float *)(in_ECX + 0x2ec) + fStack_1f4;
    FUN_00891560(&local_200);
  }
  else {
    local_1c0 = local_1b0;
    local_1cc = 0x7f7fffff;
    local_1d0 = &PTR_FUN_00a55dec;
    local_1b8 = 0x80000008;
    local_1bc = 0;
    local_1e0 = 0x34000000;
    local_1dc = 0x34000000;
    local_14 = 0;
    FUN_00891440(&local_200);
    local_1f0 = local_200 + *(float *)(in_ECX + 0x2e0) * param_1;
    fStack_1ec = fStack_1fc + *(float *)(in_ECX + 0x2e4) * param_1;
    fStack_1e8 = fStack_1f8 + *(float *)(in_ECX + 0x2e8) * param_1;
    fStack_1e4 = fStack_1f4 + *(float *)(in_ECX + 0x2ec) * param_1;
    if ((*(int *)(in_ECX + 0x364) != 0) &&
       (piVar1 = *(int **)(*(int *)(in_ECX + 0x364) + 8), piVar1 != (int *)0x0)) {
      FUN_0089f570(uVar2);
      (**(code **)(*piVar1 + 0x30))(&local_200,&local_1f0,&local_1d0,0);
      FUN_0089f570();
    }
    if (0 < local_1bc) {
      FUN_008af890();
      iVar3 = 0;
      if (0 < local_1bc) {
        iVar4 = 0;
        do {
          (**(code **)(*(int *)(in_ECX + 0x1f0) + 8))(local_1c0 + iVar4);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x30;
        } while (iVar3 < local_1bc);
      }
    }
    FUN_00891560(&local_1f0);
    local_14 = 0xffffffff;
    FUN_005322e0();
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_00895060(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_008ac0c0();
  }
  if (*(int *)(iVar2 + 8) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(*(int *)(iVar2 + 8) + 0x2b0);
  }
  if (piVar4 != param_1) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x58))();
      FUN_008b9f60();
      if (*(int **)(in_ECX + 0x364) != (int *)0x0) {
        (**(code **)(**(int **)(in_ECX + 0x364) + 0x60))();
      }
      if (*(int **)(in_ECX + 0x368) != (int *)0x0) {
        (**(code **)(**(int **)(in_ECX + 0x368) + 0x60))();
      }
      (**(code **)(*piVar4 + 0x58))();
    }
    if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
      iVar2 = FUN_008abdb0();
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    if (param_1 != (int *)0x0) {
      if (*(int *)(in_ECX + 0x364) != 0) {
        if (((*(byte *)(in_ECX + 500) & 1) == 0) && ((*(uint *)(in_ECX + 500) >> 0x14 & 1) == 0)) {
          FUN_00894bd0(0x3abb4579);
          FUN_008912a0(0x3abb4579);
          FUN_00894bd0(0);
        }
        (**(code **)(**(int **)(in_ECX + 0x364) + 0x5c))(param_1);
        uVar1 = *(undefined4 *)(in_ECX + 0x364);
        uVar3 = FUN_008aeb80(0x96,0x96,0,0x19);
        FUN_0088bb60(uVar1,uVar3);
      }
      if (*(int **)(in_ECX + 0x368) != (int *)0x0) {
        (**(code **)(**(int **)(in_ECX + 0x368) + 0x5c))(param_1);
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00895190(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  byte bVar6;
  float in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  undefined1 auStack_114 [4];
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  int local_dc;
  uint local_d8;
  uint local_d4;
  int local_d0;
  uint local_cc;
  uint local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  int local_ac;
  int local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  uint local_70 [2];
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d6617;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_114;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffee0;
  *unaff_FS_OFFSET = (int)&local_1c;
  *(undefined4 *)((int)in_ECX + 0x370) = 2;
  if (param_1 == 0) goto LAB_00895eda;
  local_e4 = 0.0;
  local_b0 = 0.0;
  local_b8 = 0.0;
  local_b4 = 0.0;
  local_f4 = in_ECX;
  if (*(int *)(param_1 + 0x8c) == 0) {
    if (*(int *)(param_1 + 0x70) == 0) {
      if (*(char *)(param_1 + 0x85) != '\0') goto LAB_008953eb;
      local_bc = *(float *)(param_1 + 0x98);
LAB_008953f5:
      local_104 = DAT_00b3f9a8;
      local_fc = DAT_00b3f9b0;
      local_100 = DAT_00b3f9ac;
      local_c4 = local_bc * 23.0;
      local_c0 = local_bc * 17.5;
      local_bc = local_bc * 64.0;
      local_a4 = local_104;
      local_a0 = local_100;
    }
    else {
      if (*(char *)(param_1 + 0x85) != '\0') {
LAB_008953eb:
        local_bc = 1.0;
        goto LAB_008953f5;
      }
      iVar3 = FUN_006fba90(*(int *)(param_1 + 0x70),uVar2);
      if (iVar3 == 0) {
        local_bc = *(float *)(*(int *)(param_1 + 0x70) + 0x2c);
        if ((*(byte *)((int)in_ECX + 500) & 1) == 0) {
          local_c4 = *(float *)(param_1 + 0x98) * 25.0;
          local_c0 = local_c4;
        }
        else {
          local_c4 = *(float *)(param_1 + 0x98) * 25.0;
          local_c0 = local_bc;
          local_bc = local_c4;
        }
        local_a4 = DAT_00b3f9a8;
        local_a0 = DAT_00b3f9ac;
        local_104 = DAT_00b3f9a8;
        local_100 = DAT_00b3f9ac;
        local_fc = DAT_00b3f9b0;
      }
      else {
        local_110 = *(float *)(param_1 + 0x98);
        pfVar4 = (float *)FUN_004707b0(&local_80,local_110);
        local_110 = *(float *)(param_1 + 0x98);
        local_c4 = *pfVar4;
        local_c0 = pfVar4[1];
        local_bc = pfVar4[2];
        pfVar4 = (float *)FUN_004707b0(&local_80,local_110);
        local_a4 = *pfVar4;
        local_a0 = pfVar4[1];
        local_104 = DAT_00b3f9a8;
        local_100 = DAT_00b3f9ac;
        local_fc = DAT_00b3f9b0;
      }
    }
    in_ECX = local_f4;
    DAT_00b3f9a8 = local_104;
    DAT_00b3f9ac = local_100;
    DAT_00b3f9b0 = local_fc;
    if ((local_bc < local_c4) || (local_bc < local_c0)) {
      *(uint *)((int)local_f4 + 500) = *(uint *)((int)local_f4 + 500) | 1;
    }
    if ((*(byte *)((int)local_f4 + 500) & 1) == 0) {
      local_f8 = local_bc + local_bc;
      local_ec = local_100;
      local_10c = (local_c0 + local_c4) * 0.5;
      local_fc = local_fc + (local_bc - local_10c);
      local_e8 = local_fc * -1.0;
      fVar1 = local_10c * 0.75 * 0.14287673;
      local_f0 = local_104;
      if (*(float *)((int)local_f4 + 0x248) < fVar1) {
        *(float *)((int)local_f4 + 0x248) = fVar1;
      }
    }
    else {
      local_fc = 0.0;
      if (local_c4 <= local_c0) {
        if (local_bc <= local_c4) {
          local_10c = local_bc;
          local_108 = local_c4;
        }
        else {
          local_10c = local_c4;
          local_108 = local_bc;
        }
        local_100 = local_a0 + (local_c0 - local_10c);
        local_ec = local_100 * -1.0;
        local_104 = local_a4;
        local_f0 = local_a4;
        local_f8 = local_c0;
      }
      else {
        if (local_bc <= local_c0) {
          local_10c = local_bc;
          local_108 = local_c0;
        }
        else {
          local_10c = local_c0;
          local_108 = local_bc;
        }
        local_104 = local_a4 + (local_c4 - local_10c);
        local_f0 = local_104 * -1.0;
        local_100 = local_a0;
        local_ec = local_a0;
        local_f8 = local_c4;
      }
      local_f8 = local_f8 * 2.0;
      local_e8 = 0.0;
      if (local_10c < local_108 * 0.75) {
        local_108 = local_108 - local_10c;
        local_fc = local_108 * 2.0 + local_10c + 0.0;
        local_110 = *(float *)(param_1 + 0x4c) * 2.0;
        *(float *)((int)local_f4 + 0x314) = local_110;
        *(float *)((int)local_f4 + 0x348) = local_110 + *(float *)((int)local_f4 + 0x348);
        if (*(float *)(param_1 + 0x50) == 0.0) {
          *(float *)(param_1 + 0x50) = local_10c * 0.14287673;
        }
        local_e0 = 0;
        local_dc = 0;
        local_d8 = 0;
        local_d4 = 0x80000000;
        local_d0 = 0;
        local_cc = 0;
        local_c8 = 0x80000000;
        local_14 = 0;
        local_e8 = local_fc;
        local_110 = (float)FUN_00401f00(0x14);
        local_14._0_1_ = 1;
        if (local_110 == 0.0) {
          local_a8 = 0;
        }
        else {
          local_a8 = FUN_008b6a40(&local_104,&local_f0,local_10c);
        }
        local_14._0_1_ = 0;
        local_e4 = local_fc * 0.14287673;
        local_b0 = 0.0;
        local_b8 = local_10c * 0.14287673;
        local_110 = local_104 - local_f0;
        local_b4 = local_100 - local_ec;
        local_f4 = local_fc - local_e8;
        local_80 = local_110;
        fStack_7c = local_b4;
        fStack_78 = local_f4;
        fVar7 = (float10)FUN_00404c90();
        local_8c = local_104;
        local_110 = (float)(fVar7 * (float10)0.5) * 0.14287673;
        local_b4 = local_b8 + local_b8 + local_110;
        local_100 = local_100 - 8.0;
        local_fc = local_108 + 1.0;
        local_84 = local_108 - 1.0;
        local_f4 = local_fc;
        local_88 = local_100;
        local_ac = FUN_00401f00(0x14);
        local_14._0_1_ = 2;
        if (local_ac == 0) {
          local_110 = 0.0;
        }
        else {
          local_110 = local_108 - 1.0;
          local_110 = (float)FUN_008b6a40(&local_104,&local_8c,local_110);
        }
        local_ec = local_ec + 8.0;
        local_14._0_1_ = 0;
        local_98 = local_f0;
        local_e8 = local_f4;
        local_90 = local_108 - 1.0;
        local_94 = local_ec;
        local_ac = FUN_00401f00(0x14);
        local_14._0_1_ = 3;
        if (local_ac == 0) {
          local_108 = 0.0;
        }
        else {
          local_108 = local_108 - 1.0;
          local_108 = (float)FUN_008b6a40(&local_f0,&local_98,local_108);
        }
        local_14 = (uint)local_14._1_3_ << 8;
        if (local_a8 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)(local_a8 + 8);
        }
        if (local_d8 == (local_d4 & 0x3fffffff)) {
          FUN_008a6ee0(&local_dc,4);
        }
        *(undefined4 *)(local_dc + local_d8 * 4) = uVar5;
        local_d8 = local_d8 + 1;
        if (local_110 == 0.0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)((int)local_110 + 8);
        }
        if (local_d8 == (local_d4 & 0x3fffffff)) {
          FUN_008a6ee0(&local_dc,4);
        }
        *(undefined4 *)(local_dc + local_d8 * 4) = uVar5;
        local_d8 = local_d8 + 1;
        if (local_108 == 0.0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)((int)local_108 + 8);
        }
        if (local_d8 == (local_d4 & 0x3fffffff)) {
          FUN_008a6ee0(&local_dc,4);
        }
        *(undefined4 *)(local_dc + local_d8 * 4) = uVar5;
        local_d8 = local_d8 + 1;
        if (local_cc == (local_c8 & 0x3fffffff)) {
          FUN_008a6ee0(&local_d0,4);
        }
        *(undefined4 *)(local_d0 + local_cc * 4) = 0;
        local_cc = local_cc + 1;
        if (local_cc == (local_c8 & 0x3fffffff)) {
          FUN_008a6ee0(&local_d0,4);
        }
        *(undefined4 *)(local_d0 + local_cc * 4) = 0;
        local_cc = local_cc + 1;
        if (local_cc == (local_c8 & 0x3fffffff)) {
          FUN_008a6ee0(&local_d0,4);
        }
        *(undefined4 *)(local_d0 + local_cc * 4) = 0;
        local_cc = local_cc + 1;
        *(undefined4 *)(param_1 + 0x9c) = 0;
        local_ac = FUN_00401f00(0x14);
        local_14._0_1_ = 4;
        if (local_ac == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00890410(&local_e0);
        }
        local_14 = (uint)local_14._1_3_ << 8;
        FUN_0075fa90(uVar5);
        local_14 = 0xffffffff;
        FUN_00893510();
      }
    }
    *(float *)((int)in_ECX + 0x340) = local_a4 * 0.14287673;
    *(float *)((int)in_ECX + 0x344) = local_a0 * 0.14287673;
    if (*(int *)((int)in_ECX + 0x374) == 0) {
      fVar1 = *(float *)(param_1 + 0x4c) * 2.0 + (local_fc + local_10c) * 0.14287673;
      *(float *)((int)in_ECX + 0x314) = fVar1;
      *(float *)((int)in_ECX + 0x348) = fVar1 + *(float *)((int)in_ECX + 0x348);
      if (*(float *)(param_1 + 0x50) == 0.0) {
        *(float *)(param_1 + 0x50) = local_10c * 0.14287673;
      }
      local_b8 = *(float *)(param_1 + 0x50);
      local_b4 = local_b8 * 0.5 + local_b8 * 2.0;
      local_110 = local_e8 * 0.14287673;
      local_b0 = local_110 - local_b8;
      if ((*(byte *)((int)in_ECX + 500) & 1) == 0) {
        local_e4 = local_fc * 0.14287673;
        uVar5 = FUN_008905e0(&local_104,&local_f0,local_10c);
        FUN_0075fa90(uVar5);
        if (*(char *)(param_1 + 0x85) != '\0') {
          if (DAT_00ba7a64 == 0) {
            local_110 = *(float *)((int)in_ECX + 0x248);
            uVar5 = FUN_00893230(&local_104,&local_f0,local_10c,local_110);
            FUN_0075fa90(uVar5);
          }
          FUN_0055e2a0(&DAT_00ba7a64);
          goto LAB_00895cde;
        }
        local_110 = *(float *)((int)in_ECX + 0x248);
        uVar5 = FUN_00893230(&local_104,&local_f0,local_10c,local_110);
      }
      else {
        *(undefined4 *)(param_1 + 0x9c) = 0;
        local_110 = local_fc * 0.14287673;
        local_e4 = local_b8 + local_110;
        local_ac = FUN_00401f00(0x14);
        local_14 = 5;
        if (local_ac == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_008b6a40(&local_104,&local_f0,local_10c);
        }
        local_14 = 0xffffffff;
      }
      FUN_0075fa90(uVar5);
    }
  }
  else {
    FUN_0075fa90(*(int *)(param_1 + 0x8c));
    iVar3 = FUN_00890ba0();
    local_10c = _DAT_00b2efc4;
    if ((iVar3 != 0) && (*(int *)(iVar3 + 8) != 0)) {
      local_10c = *(float *)(*(int *)(iVar3 + 8) + 0xc);
    }
    local_10c = local_10c * 6.99904;
    local_f8 = 0.0;
  }
LAB_00895cde:
  *(float *)((int)in_ECX + 0x3a0) = local_10c * 0.14287673;
  *(float *)((int)in_ECX + 0x3a8) = local_10c * 0.14287673;
  *(float *)((int)in_ECX + 0x3a4) = local_f8 * 0.14287673;
  local_110 = local_bc + local_bc;
  *(float *)((int)in_ECX + 0x33c) = local_110 * 0.14287673;
  if (*(int *)(param_1 + 0x8c) == 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x9c);
  }
  else {
    uVar5 = 0;
  }
  FUN_00894940(uVar5);
  if (*(char *)(param_1 + 0x84) != '\0') {
    local_64 = 0;
    local_60 = 0;
    local_5c = 0x80000000;
    local_70[1] = 0;
    local_68 = 2;
    local_b0 = *(float *)((int)in_ECX + 0x248) + local_b0;
    local_70[0] = *(uint *)(param_1 + 0x74) & 0xffffffc0 | 0x15;
    local_14 = 6;
    local_e4 = local_b8 + local_e4;
    if (local_e4 < local_b0 != (local_e4 == local_b0)) {
      local_e4 = local_e4 + *(float *)((int)in_ECX + 0x248);
    }
    local_50 = -local_b8 * 2.0;
    local_110 = local_b8 * 2.0;
    uStack_44 = 0;
    uStack_74 = 0;
    uStack_34 = 0;
    local_80 = local_110;
    fStack_7c = local_110;
    fStack_78 = local_e4;
    fStack_4c = local_50;
    fStack_48 = local_b0;
    local_40 = local_110;
    fStack_3c = local_110;
    fStack_38 = local_e4;
    local_ac = thunk_FUN_00401aa0(0x80,1);
    bVar6 = 0x10 - ((byte)local_ac & 0xf);
    local_ac = local_ac + (uint)bVar6;
    *(byte *)(local_ac + -1) = bVar6;
    local_14._0_1_ = 7;
    uVar5 = FUN_00890a70(local_70);
    local_14 = CONCAT31(local_14._1_3_,6);
    FUN_0075fa90(uVar5);
    iVar3 = *(int *)((int)in_ECX + 0x368);
    local_80 = 0.0;
    fStack_7c = local_b4;
    local_14 = 0xffffffff;
    fStack_78 = 0.0;
    uStack_74 = 0;
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *(float *)(iVar3 + 0x44) = local_b4;
    *(undefined4 *)(iVar3 + 0x48) = 0;
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    FUN_008a5090();
  }
LAB_00895eda:
  *unaff_FS_OFFSET = local_1c;
  return;
}



undefined1 FUN_00895f00(void)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  undefined1 uVar4;
  int *unaff_FS_OFFSET;
  undefined **local_120;
  undefined1 local_11c;
  undefined1 *local_118;
  int local_114;
  undefined4 local_110;
  undefined1 local_10c [256];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d665b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffedc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar4 = 0;
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_008ac0c0(uVar1);
  }
  if (piVar2[2] != 0) {
    local_118 = local_10c;
    local_120 = &PTR_FUN_00a56370;
    local_110 = 0x80000010;
    local_114 = 0;
    local_11c = 0;
    local_4 = 0;
    (**(code **)(*piVar2 + 0x38))(&local_120);
    uVar4 = 0;
    if (0 < local_114) {
      piVar2 = (int *)(local_118 + 8);
      iVar3 = local_114;
      uVar4 = 0;
      do {
        switch(*(uint *)(*piVar2 + 0x1c) & 0x3f) {
        case 4:
        case 5:
        case 6:
        case 7:
        case 10:
        case 0xb:
        case 0xc:
        case 0x10:
        case 0x11:
          break;
        default:
          uVar4 = 1;
        }
        piVar2 = piVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_4 = 0xffffffff;
    FUN_00536f90();
  }
  *unaff_FS_OFFSET = local_c;
  return uVar4;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00896000(float *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined2 extraout_var;
  float *pfVar13;
  int *piVar14;
  int iVar15;
  float *pfVar16;
  int *piVar17;
  undefined4 uVar18;
  byte bVar19;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int iVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int unaff_FS_OFFSET;
  float10 fVar23;
  float10 fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_144 [6];
  char cStack_13e;
  byte bStack_13d;
  float fStack_13c;
  float fStack_138;
  int iStack_134;
  byte bStack_12d;
  int iStack_12c;
  float *local_128;
  byte bStack_121;
  float fStack_120;
  int iStack_11c;
  float fStack_118;
  undefined4 local_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [64];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_144;
  in_ECX[0x7d] = in_ECX[0x7d] & 0xffffff1f;
  local_128 = param_1;
  local_114 = 0;
  if ((*param_1 == 0.0) || (iVar11 = (**(code **)(*in_ECX + 0x58))(), iVar11 == 0)) {
    return 0;
  }
  fStack_118 = *param_1;
  pfVar16 = param_1 + 4;
  bStack_13d = FUN_008904e0(pfVar16,&DAT_00b3f9a8,0x3c23d70a);
  uVar12 = in_ECX[0x7d];
  bStack_12d = (byte)(uVar12 >> 0x13) & 1;
  bStack_121 = (byte)(uVar12 >> 0x14) & 1;
  cStack_13e = '\0';
  if (((uVar12 >> 0x14 & 1) == 0) && ((uVar12 >> 0x13 & 1) == 0)) {
    uVar12 = uVar12 >> 2;
    if ((uVar12 & 1) != 0) goto LAB_008960c9;
    fVar23 = (float10)FUN_0047da40();
    fVar24 = (float10)_DAT_00b2e784;
    uVar12 = CONCAT22(extraout_var,
                      (ushort)(fVar24 < fVar23) << 8 | (ushort)(NAN(fVar24) || NAN(fVar23)) << 10 |
                      (ushort)(fVar24 == fVar23) << 0xe);
    if (fVar24 < fVar23 || (fVar24 == fVar23) != 0) goto LAB_008960c9;
  }
  cStack_13e = '\x01';
LAB_008960c9:
  if (bStack_13d == 0) {
    if (in_ECX[0xd8] != 0) {
      in_ECX[0xd4] = 0;
      in_ECX[0xd5] = 0;
      in_ECX[0xd6] = 0;
      in_ECX[0xd7] = 0;
      in_ECX[0xd8] = 0;
    }
    in_ECX[0xc1] = 0;
    in_ECX[0xc2] = 0;
  }
  fStack_110 = 0.001;
  fStack_10c = 0.001;
  fStack_108 = 0.001;
  fStack_104 = 0.001;
  auVar2._4_4_ = -(uint)(0.001 < ABS((float)in_ECX[0xbd] - DAT_00ba7a44));
  auVar2._0_4_ = -(uint)(0.001 < ABS((float)in_ECX[0xbc] - DAT_00ba7a40));
  auVar2._8_4_ = -(uint)(0.001 < ABS((float)in_ECX[0xbe] - DAT_00ba7a48));
  auVar2._12_4_ = -(uint)(0.001 < ABS((float)in_ECX[0xbf] - fRam00ba7a4c));
  uVar12 = movmskps(uVar12,auVar2);
  bStack_13d = bStack_13d & (uVar12 & 7) == 0;
  if (bStack_13d == 0) {
    in_ECX[0x7d] = in_ECX[0x7d] | 8;
  }
  else {
    in_ECX[0x7d] = in_ECX[0x7d] & 0xfffffff7;
  }
  iStack_11c = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  puVar22 = *(undefined4 **)(iStack_11c + 0x1a4);
  if (puVar22 < *(undefined4 **)(iStack_11c + 0x1a8)) {
    *puVar22 = "TtCharacter movement";
    uVar1 = rdtsc();
    fStack_138 = (float)uVar1;
    puVar22[1] = fStack_138;
    *(undefined4 **)(iStack_11c + 0x1a4) = puVar22 + 3;
  }
  iVar11 = (**(code **)(*in_ECX + 0x58))();
  if (iVar11 == 0) {
    if (bStack_13d == 0) {
      FUN_0070fdd0(param_1[3]);
      pfVar13 = (float *)FUN_007101f0(&fStack_100,pfVar16);
      *pfVar16 = *pfVar13;
      param_1[5] = pfVar13[1];
      param_1[6] = pfVar13[2];
      FUN_005e1500(&fStack_f0);
      fStack_f0 = fStack_f0 + *pfVar16;
      fStack_ec = param_1[5] + fStack_ec;
      fStack_e8 = param_1[6] + fStack_e8;
      FUN_00452a10(&fStack_f0);
    }
  }
  else {
    iStack_134 = FUN_009828c0();
    iStack_134 = 1 - iStack_134;
    if (((bStack_13d == 0) && (1 < iStack_134)) && (cStack_13e == '\0')) {
      if (2 < iStack_134) {
        iStack_134 = 2;
      }
      fStack_138 = 1.0 / (float)iStack_134;
      FUN_0069dd70(fStack_138);
      *param_1 = fStack_138 * *param_1;
    }
    else {
      iStack_134 = 1;
    }
    FUN_00894c70(fStack_118);
    in_ECX[0x85] = 0x1f;
    in_ECX[0x86] = 0;
    fStack_120 = (float)in_ECX[0xd9];
    if ((*(byte *)(in_ECX + 0x7d) & 1) != 0) {
      fVar23 = (float10)FUN_008908e0(param_1[3],*param_1);
      param_1[3] = (float)fVar23;
    }
    FUN_008b1b00(in_ECX + 0xac,-param_1[3]);
    in_ECX[0xb6] = (int)*param_1;
    in_ECX[0xb7] = (int)(1.0 / *param_1);
    fStack_f0 = *pfVar16;
    fStack_ec = param_1[5];
    fStack_e8 = param_1[6];
    iVar11 = FUN_0088d370();
    if ((iVar11 != 5) && (((uint)in_ECX[0x7d] >> 0xb & 1) == 0)) {
      fStack_e8 = 0.0;
    }
    fStack_13c = (float)in_ECX[0xb7];
    fStack_f0 = fStack_13c * fStack_f0;
    fStack_ec = fStack_13c * fStack_ec;
    fStack_e8 = fStack_13c * fStack_e8;
    in_ECX[0xa4] = (int)(fStack_f0 * 0.14287673);
    in_ECX[0xa5] = (int)(fStack_ec * 0.14287673);
    in_ECX[0xa6] = (int)(fStack_e8 * 0.14287673);
    cVar10 = FUN_008903d0();
    if ((cVar10 != '\0') && (param_1[1] != 0.0)) {
      fStack_100 = -1.0;
      fStack_fc = 0.0;
      fStack_f8 = 0.0;
      fStack_f4 = 0.0;
      FUN_008b1b00(&fStack_100,param_1[1]);
      fVar25 = (float)in_ECX[0xa4];
      fVar26 = (float)in_ECX[0xa5];
      fVar27 = (float)in_ECX[0xa6];
      fVar30 = (float)in_ECX[0xa7];
      fStack_13c = fStack_d4 * 2.0;
      fVar28 = fStack_d4 * fStack_13c - 1.0;
      fStack_d4 = 0.0;
      fVar29 = fStack_d8 * fVar27 + fStack_dc * fVar26 + fStack_e0 * fVar25;
      fVar6 = fVar29 * 2.0;
      in_ECX[0xa4] = (int)(fVar28 * fVar25);
      in_ECX[0xa5] = (int)(fVar28 * fVar26);
      in_ECX[0xa6] = (int)(fVar28 * fVar27);
      in_ECX[0xa7] = (int)(fVar28 * fVar30);
      in_ECX[0xa4] = (int)((fStack_dc * fVar27 - fStack_d8 * fVar26) * fStack_13c +
                          fVar6 * fStack_e0 + fVar28 * fVar25);
      in_ECX[0xa5] = (int)((fStack_d8 * fVar25 - fStack_e0 * fVar27) * fStack_13c +
                          fVar6 * fStack_dc + fVar28 * fVar26);
      in_ECX[0xa6] = (int)((fStack_e0 * fVar26 - fStack_dc * fVar25) * fStack_13c +
                          fVar6 * fStack_d8 + fVar28 * fVar27);
      in_ECX[0xa7] = (int)((fVar30 * 0.0 - fVar30 * 0.0) * fStack_13c +
                          fVar6 * 0.0 + fVar28 * fVar30);
      fStack_e0 = fVar29;
    }
    in_ECX[0xd2] = in_ECX[0xc5];
    fStack_c0 = fStack_d0;
    fStack_bc = fStack_cc;
    fStack_b8 = fStack_c8;
    fStack_b4 = fStack_c4;
    FUN_004d6830();
    fVar28 = fStack_120;
    fStack_e0 = 0.0;
    fStack_dc = -1.0;
    uStack_b0 = in_ECX[0xac] ^ 0x80000000;
    uStack_ac = in_ECX[0xad] ^ 0x80000000;
    uStack_a8 = in_ECX[0xae] ^ 0x80000000;
    uStack_a4 = in_ECX[0xaf] ^ 0x80000000;
    fStack_d8 = 0.0;
    fStack_d4 = 0.0;
    FUN_006848d0(auStack_90);
    FUN_008b1dd0(&fStack_c0);
    uVar18 = extraout_ECX;
    if ((float)in_ECX[0xcb] != 0.0) {
      fVar23 = (float10)FUN_00986000();
      fStack_13c = (float)fVar23;
      fStack_120 = fStack_13c;
      fVar23 = (float10)FUN_00986300();
      fStack_13c = (float)fVar23;
      fStack_100 = 1.0;
      fStack_fc = 0.0;
      fStack_f8 = 0.0;
      fStack_f4 = 0.0;
      fStack_f0 = 0.0;
      fStack_ec = fStack_120;
      uStack_50 = 0x3f800000;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      fStack_e8 = -fStack_13c;
      uStack_e4 = 0;
      fStack_a0 = 0.0;
      uStack_94 = 0;
      uStack_40 = 0;
      fStack_3c = fStack_120;
      uStack_34 = 0;
      fStack_98 = fStack_120;
      uStack_30 = 0;
      fStack_28 = fStack_120;
      uStack_24 = 0;
      fStack_9c = fStack_13c;
      fStack_38 = fStack_e8;
      fStack_2c = fStack_13c;
      FUN_008d2c20(&uStack_50);
      uVar18 = extraout_ECX_00;
    }
    if ((fVar28 != 0.0) && (*(int *)((int)fVar28 + 8) != 0)) {
      FUN_0089f570();
      FUN_008aba40(auStack_90);
      FUN_0089f570();
      uVar18 = extraout_ECX_01;
    }
    fStack_13c = fStack_c4 * 2.0;
    fVar28 = fStack_c4 * fStack_13c - 1.0;
    fStack_a0 = fStack_d0;
    fStack_9c = fStack_cc;
    fStack_98 = fStack_c8;
    uStack_94 = 0;
    fVar30 = fStack_c8 * fStack_d8 + fStack_cc * fStack_dc + fStack_d0 * fStack_e0;
    fVar6 = fVar30 * 2.0;
    fVar25 = (fStack_cc * fStack_d8 - fStack_dc * fStack_c8) * fStack_13c +
             fVar6 * fStack_d0 + fVar28 * fStack_e0;
    fVar26 = (fStack_c8 * fStack_e0 - fStack_d8 * fStack_d0) * fStack_13c +
             fVar6 * fStack_cc + fVar28 * fStack_dc;
    fVar27 = (fStack_d0 * fStack_dc - fStack_e0 * fStack_cc) * fStack_13c +
             fVar6 * fStack_c8 + fVar28 * fStack_d8;
    fVar28 = (fStack_d4 * 0.0 - fStack_d4 * 0.0) * fStack_13c + fVar6 * 0.0 + fVar28 * fStack_d4;
    if ((bStack_13d == 0) ||
       (auVar5._4_4_ = -(uint)(fStack_10c < ABS(fVar26 - (float)in_ECX[0xb1])),
       auVar5._0_4_ = -(uint)(fStack_110 < ABS(fVar25 - (float)in_ECX[0xb0])),
       auVar5._8_4_ = -(uint)(fStack_108 < ABS(fVar27 - (float)in_ECX[0xb2])),
       auVar5._12_4_ = -(uint)(fStack_104 < ABS(fVar28 - (float)in_ECX[0xb3])),
       uVar12 = movmskps(uVar18,auVar5), (uVar12 & 7) != 0)) {
      in_ECX[0xc3] = _DAT_00b2e780;
    }
    iStack_12c = in_ECX[2];
    in_ECX[0xb0] = (int)fVar25;
    in_ECX[0xb1] = (int)fVar26;
    in_ECX[0xb2] = (int)fVar27;
    in_ECX[0xb3] = (int)fVar28;
    cStack_13e = '\x01';
    fStack_e0 = fVar30;
    iVar11 = iStack_11c;
    if (bStack_12d == 0) {
      while (iStack_11c = iVar11, iStack_134 != 0) {
        iStack_134 = iStack_134 + -1;
        DAT_00ba7a5c = 0;
        if (in_ECX[2] == 0) {
          piVar14 = (int *)&DAT_00ba7a40;
        }
        else {
          piVar14 = (int *)FUN_008ac0a0();
        }
        iVar15 = piVar14[1];
        iVar20 = piVar14[2];
        iVar7 = piVar14[3];
        in_ECX[0xb8] = *piVar14;
        in_ECX[0xb9] = iVar15;
        in_ECX[0xba] = iVar20;
        in_ECX[0xbb] = iVar7;
        if ((bStack_13d != 0) && (iVar15 = FUN_0088d370(), iVar15 != 2)) {
          in_ECX[0xba] = 0;
        }
        in_ECX[0x7d] = in_ECX[0x7d] & 0xfffff9ff;
        in_ECX[0x7d] = in_ECX[0x7d] | 0x10000;
        FUN_00891780();
        if (in_ECX[2] != 0) {
          FUN_0089f570();
          FUN_008ae890(&uStack_b0,in_ECX + 0x98);
          FUN_0089f570();
        }
        in_ECX[0x7d] = in_ECX[0x7d] & 0xfffeffff;
        if ((in_ECX[0x98] == 2) && ((char)in_ECX[0x94] == '\0')) {
          bVar19 = 1;
        }
        else {
          bVar19 = 0;
        }
        uVar12 = in_ECX[0x7d];
        if ((uVar12 & 0x2000) == 0) {
          bVar19 = bVar19 | (byte)(uVar12 >> 9) & 1;
        }
        else if (((bVar19 == 0) && ((uVar12 >> 9 & 1) == 0)) || ((float)in_ECX[0xba] <= 0.0)) {
          in_ECX[0x7d] = in_ECX[0x7d] & 0xffffdfff;
          bVar19 = 0;
        }
        else {
          fVar28 = (float)in_ECX[0xb8];
          fVar6 = (float)in_ECX[0xb9];
          fVar25 = (float)in_ECX[0xba];
          fStack_e0 = SQRT(fVar25 * fVar25 + fVar6 * fVar6 + fVar28 * fVar28);
          if (((fStack_e0 <= 0.0) || (fStack_138 = 1.0 / fStack_e0, bVar19 == 0)) ||
             (((uVar12 >> 9 & 1) == 0 ||
              (((float)in_ECX[0x84] < (float)in_ECX[0x8e] ==
                ((float)in_ECX[0x84] == (float)in_ECX[0x8e]) ||
               (fStack_e0 = fStack_138 * fVar25 * (float)in_ECX[0x8e] +
                            fStack_138 * fVar6 * (float)in_ECX[0x8d] +
                            fStack_138 * fVar28 * (float)in_ECX[0x8c],
               fStack_e0 < 0.05 == (fStack_e0 == 0.05))))))) {
            bVar19 = 0;
          }
          else {
            in_ECX[0x7d] = in_ECX[0x7d] & 0xffffdfff;
            bVar19 = 0;
          }
        }
        if (bVar19 == 0) {
          in_ECX[0x7d] = in_ECX[0x7d] & 0xfffffeff;
        }
        else {
          in_ECX[0x7d] = in_ECX[0x7d] | 0x100;
        }
        puVar22 = *(undefined4 **)(iVar11 + 0x1a4);
        if (puVar22 < *(undefined4 **)(iVar11 + 0x1a8)) {
          *puVar22 = "Ttupdate character state";
          uVar1 = rdtsc();
          fStack_120 = (float)uVar1;
          puVar22[1] = fStack_120;
          *(undefined4 **)(iVar11 + 0x1a4) = puVar22 + 3;
        }
        piVar14 = (int *)FUN_008ba170(in_ECX[0x7b]);
        (**(code **)(*piVar14 + 0x18))();
        puVar22 = *(undefined4 **)(iVar11 + 0x1a4);
        if (puVar22 < *(undefined4 **)(iVar11 + 0x1a8)) {
          *puVar22 = &DAT_00a9610c;
          uVar1 = rdtsc();
          fStack_13c = (float)uVar1;
          puVar22[1] = fStack_13c;
          *(undefined4 **)(iVar11 + 0x1a4) = puVar22 + 3;
        }
        if (in_ECX[2] != 0) {
          FUN_008ac0b0(in_ECX + 0xb8);
        }
        cStack_13e = '\x01';
        if (((bStack_13d != 0) && (iVar11 = FUN_0088d370(), iVar11 != 2)) &&
           (iVar11 = FUN_008abdb0(), *(int *)(iVar11 + 4) <= in_ECX[0xf0])) {
          iVar11 = 0;
          cStack_13e = '\0';
          fStack_138 = 0.0;
          do {
            iVar15 = FUN_008abdb0();
            fVar25 = fRam00ba7a4c;
            fVar6 = DAT_00ba7a48;
            fVar28 = DAT_00ba7a44;
            if (*(int *)(iVar15 + 4) <= (int)fStack_138) {
              if (cStack_13e == '\0') {
                in_ECX[0xb8] = (int)DAT_00ba7a40;
                in_ECX[0xb9] = (int)fVar28;
                in_ECX[0xba] = (int)fVar6;
                in_ECX[0xbb] = (int)fVar25;
                if (in_ECX[2] != 0) {
                  FUN_008ac0b0(in_ECX + 0xb8);
                }
                goto LAB_00896c0c;
              }
              break;
            }
            piVar14 = (int *)FUN_008abdb0();
            pfVar16 = (float *)(*piVar14 + iVar11);
            pfVar13 = (float *)(in_ECX[0xef] + iVar11);
            auVar3._4_4_ = -(uint)(fStack_10c < ABS(pfVar13[1] - pfVar16[1]));
            auVar3._0_4_ = -(uint)(fStack_110 < ABS(*pfVar13 - *pfVar16));
            auVar3._8_4_ = -(uint)(fStack_108 < ABS(pfVar13[2] - pfVar16[2]));
            auVar3._12_4_ = -(uint)(fStack_104 < ABS(pfVar13[3] - pfVar16[3]));
            iVar15 = movmskps(extraout_ECX_02,auVar3);
            if (iVar15 == 0) {
              piVar14 = (int *)FUN_008abdb0();
              iVar15 = in_ECX[0xef];
              pfVar16 = (float *)(iVar11 + 0x10 + *piVar14);
              pfVar13 = (float *)(iVar15 + 0x10 + iVar11);
              auVar4._4_4_ = -(uint)(fStack_10c < ABS(pfVar13[1] - pfVar16[1]));
              auVar4._0_4_ = -(uint)(fStack_110 < ABS(*pfVar13 - *pfVar16));
              auVar4._8_4_ = -(uint)(fStack_108 < ABS(pfVar13[2] - pfVar16[2]));
              auVar4._12_4_ = -(uint)(fStack_104 < ABS(pfVar13[3] - pfVar16[3]));
              iVar20 = movmskps(extraout_ECX_03,auVar4);
              if (((iVar20 != 0) ||
                  (piVar14 = (int *)FUN_008abdb0(),
                  *(int *)(iVar15 + iVar11 + 0x20) != *(int *)(*piVar14 + 0x20 + iVar11))) ||
                 (iVar15 = in_ECX[0xef], piVar14 = (int *)FUN_008abdb0(),
                 *(int *)(iVar15 + iVar11 + 0x28) != *(int *)(iVar11 + 0x28 + *piVar14)))
              goto LAB_00896ba1;
            }
            else {
LAB_00896ba1:
              cStack_13e = '\x01';
            }
            fStack_138 = (float)((int)fStack_138 + 1);
            iVar11 = iVar11 + 0x30;
          } while (cStack_13e == '\0');
        }
        DAT_00b2efb8 = (-(uint)(bStack_121 != 0) & 0xfffffffd) + 4;
        FUN_008902b0(in_ECX + 0xb4);
        DAT_00b2efb8 = 4;
LAB_00896c0c:
        if ((DAT_00ba7a5c != 0) && ((in_ECX[0x7d] & 0x2000U) == 0)) {
          FUN_0089f570();
          FUN_0047de20();
          pfVar16 = (float *)FUN_008ac070();
          fStack_100 = *pfVar16;
          fStack_fc = pfVar16[1];
          fStack_f4 = pfVar16[3];
          fStack_138 = *(float *)(*(int *)(DAT_00ba7a5c + 0x50) + 0xd8) * (float)in_ECX[0xb6];
          fStack_f8 = _DAT_00ba7a58 + (float)in_ECX[0xd2] + fStack_138;
          FUN_008a7930(&fStack_100,0x40800000,0xffff0000,0);
          FUN_008ac080(&fStack_100);
          fStack_f8 = fStack_138 + _DAT_00ba7a58;
          FUN_008a7930(&fStack_100,0x40800000,0xff00ffff,0);
          FUN_0089f570();
        }
        in_ECX[0xa8] = 0xb;
        iVar11 = iStack_11c;
      }
      iVar11 = FUN_008abdb0();
      if (*(int *)(iVar11 + 4) < 6) {
        iVar11 = FUN_008abdb0();
        fStack_13c = *(float *)(iVar11 + 4);
      }
      else {
        fStack_13c = 7.00649e-45;
      }
      fStack_138 = 0.0;
      if (0 < (int)fStack_13c) {
        piVar14 = in_ECX + 0xef;
        iStack_134 = 0;
        do {
          iVar11 = iStack_134;
          if ((int)fStack_138 < in_ECX[0xf0]) {
            piVar17 = (int *)FUN_008abdb0();
            puVar22 = (undefined4 *)(*piVar17 + iVar11);
            uVar18 = puVar22[1];
            uVar8 = puVar22[2];
            uVar9 = puVar22[3];
            iVar15 = *piVar17 + iVar11;
            puVar21 = (undefined4 *)(*piVar14 + iVar11);
            *puVar21 = *puVar22;
            puVar21[1] = uVar18;
            puVar21[2] = uVar8;
            puVar21[3] = uVar9;
            uVar18 = *(undefined4 *)(iVar15 + 0x14);
            uVar8 = *(undefined4 *)(iVar15 + 0x18);
            uVar9 = *(undefined4 *)(iVar15 + 0x1c);
            puVar21[4] = *(undefined4 *)(iVar15 + 0x10);
            puVar21[5] = uVar18;
            puVar21[6] = uVar8;
            puVar21[7] = uVar9;
            puVar21[8] = *(undefined4 *)(iVar15 + 0x20);
            puVar21[9] = *(undefined4 *)(iVar15 + 0x24);
            puVar21[10] = *(undefined4 *)(iVar15 + 0x28);
            puVar21[0xb] = *(undefined4 *)(iVar15 + 0x2c);
            iStack_134 = iVar11;
          }
          else {
            piVar17 = (int *)FUN_008abdb0();
            puVar22 = (undefined4 *)(*piVar17 + iStack_134);
            if (in_ECX[0xf0] == (in_ECX[0xf1] & 0x3fffffffU)) {
              FUN_008a6ee0(piVar14,0x30);
            }
            puVar21 = (undefined4 *)(in_ECX[0xf0] * 0x30 + *piVar14);
            in_ECX[0xf0] = in_ECX[0xf0] + 1;
            uVar18 = puVar22[1];
            uVar8 = puVar22[2];
            uVar9 = puVar22[3];
            *puVar21 = *puVar22;
            puVar21[1] = uVar18;
            puVar21[2] = uVar8;
            puVar21[3] = uVar9;
            uVar18 = puVar22[5];
            uVar8 = puVar22[6];
            uVar9 = puVar22[7];
            puVar21[4] = puVar22[4];
            puVar21[5] = uVar18;
            puVar21[6] = uVar8;
            puVar21[7] = uVar9;
            puVar21[8] = puVar22[8];
            puVar21[9] = puVar22[9];
            puVar21[10] = puVar22[10];
            puVar21[0xb] = puVar22[0xb];
          }
          fStack_138 = (float)((int)fStack_138 + 1);
          iStack_134 = iStack_134 + 0x30;
        } while ((int)fStack_138 < (int)fStack_13c);
      }
    }
    else {
      if (iStack_12c == 0) {
        piVar14 = (int *)&DAT_00ba7a40;
      }
      else {
        piVar14 = (int *)FUN_008ac0a0();
      }
      iVar7 = iStack_11c;
      iVar11 = piVar14[1];
      iVar15 = piVar14[2];
      iVar20 = piVar14[3];
      in_ECX[0xb8] = *piVar14;
      in_ECX[0xb9] = iVar11;
      in_ECX[0xba] = iVar15;
      in_ECX[0xbb] = iVar20;
      fVar25 = fRam00ba7a4c;
      fVar6 = DAT_00ba7a48;
      fVar28 = DAT_00ba7a44;
      in_ECX[0xa0] = (int)DAT_00ba7a40;
      in_ECX[0xa1] = (int)fVar28;
      in_ECX[0xa2] = (int)fVar6;
      in_ECX[0xa3] = (int)fVar25;
      puVar22 = *(undefined4 **)(iStack_11c + 0x1a4);
      if (puVar22 < *(undefined4 **)(iStack_11c + 0x1a8)) {
        *puVar22 = "Ttupdate character state";
        uVar1 = rdtsc();
        fStack_138 = (float)uVar1;
        puVar22[1] = fStack_138;
        *(undefined4 **)(iStack_11c + 0x1a4) = puVar22 + 3;
      }
      piVar14 = (int *)FUN_008ba170(in_ECX[0x7b]);
      (**(code **)(*piVar14 + 0x18))();
      puVar22 = *(undefined4 **)(iVar7 + 0x1a4);
      if (puVar22 < *(undefined4 **)(iVar7 + 0x1a8)) {
        *puVar22 = &DAT_00a9610c;
        uVar1 = rdtsc();
        fStack_138 = (float)uVar1;
        puVar22[1] = fStack_138;
        *(undefined4 **)(iVar7 + 0x1a4) = puVar22 + 3;
      }
      if (in_ECX[2] != 0) {
        FUN_008ac0b0(in_ECX + 0xb8);
      }
      FUN_00894e80(in_ECX[0xb6]);
    }
    FUN_008939b0();
    if ((in_ECX[0x7d] & 0xe0U) != 0) {
      local_114 = 2;
    }
    if (((uint)in_ECX[0x7d] >> 2 & 1) == 0) {
      if (cStack_13e == '\0') {
        fStack_100 = 0.0;
        fStack_fc = 1.0;
        fStack_f8 = 0.2;
      }
      else {
        iVar11 = FUN_0088d370();
        if (iVar11 == 2) {
          fStack_100 = 0.0;
          fStack_fc = 0.5;
          fStack_f8 = 1.0;
        }
        else if (iVar11 == 5) {
          fStack_100 = 0.5;
          fStack_fc = 0.0;
          fStack_f8 = 0.5;
        }
        else {
          fStack_100 = 1.0;
          fStack_fc = 1.0;
          fStack_f8 = 0.0;
        }
      }
    }
    else {
      fStack_100 = 1.0;
      fStack_fc = 0.2;
      fStack_f8 = 0.0;
    }
    fStack_f0 = fStack_100;
    fStack_ec = fStack_fc;
    fStack_e8 = fStack_f8;
    if (in_ECX[2] == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = FUN_008ac0c0();
    }
    if ((*(int *)(iVar11 + 8) != 0) && (*(int *)(*(int *)(iVar11 + 8) + 0x2b0) != 0)) {
      uVar18 = FUN_008aebb0(fStack_f0,fStack_ec,fStack_e8,0x3e0c8c8d);
      iVar11 = in_ECX[0xd9];
      if (in_ECX[2] != 0) {
        FUN_008ac0c0();
      }
      FUN_0088bb60(iVar11,uVar18);
    }
    (**(code **)(*in_ECX + 0x84))(local_128[7],local_128[3]);
    iVar11 = FUN_00891160();
    if ((iVar11 != 0) && (iVar11 = FUN_00707530(2), iVar11 != 0)) {
      *(int *)(iVar11 + 0x54) = *(int *)(iVar11 + 0x54) + 1;
      *(float *)(iVar11 + 0x40) = fStack_f0;
      *(float *)(iVar11 + 0x44) = fStack_ec;
      *(float *)(iVar11 + 0x48) = fStack_e8;
    }
  }
  puVar22 = *(undefined4 **)(iStack_11c + 0x1a4);
  if (puVar22 < *(undefined4 **)(iStack_11c + 0x1a8)) {
    *puVar22 = &DAT_00a9610c;
    uVar1 = rdtsc();
    puVar22[1] = (int)uVar1;
    *(undefined4 **)(iStack_11c + 0x1a4) = puVar22 + 3;
  }
  if (0.0 < (float)in_ECX[0xc0]) {
    fVar28 = (float)in_ECX[0xc0] - fStack_118;
    in_ECX[0xc0] = (int)fVar28;
    if (fVar28 < 0.0 != (fVar28 == 0.0)) {
      in_ECX[0xc0] = 0;
      in_ECX[0xbc] = 0;
      in_ECX[0xbd] = 0;
      in_ECX[0xbe] = 0;
      in_ECX[0xbf] = 0;
    }
  }
  if (0.0 < (float)in_ECX[0xc3]) {
    in_ECX[0xc3] = (int)((float)in_ECX[0xc3] - fStack_118);
  }
  in_ECX[0x7d] = in_ECX[0x7d] & 0xffffefff;
  return local_114;
}



void FUN_00897040(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_74;
  int iStack_6c;
  int local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d6693;
  local_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff70;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 != 0) {
    in_ECX[0x92] = (int)(*(float *)(param_1 + 0x98) * *(float *)(param_1 + 0x94));
    FUN_00895190(param_1);
    FUN_00532250(uVar2);
    local_80 = *(undefined4 *)(param_1 + 0x74);
    local_14 = 0;
    iVar3 = FUN_00890ba0();
    if (iVar3 == 0) {
      local_7c = 0;
    }
    else {
      local_7c = *(undefined4 *)(iVar3 + 8);
    }
    iVar3 = FUN_00401f00(0x14);
    local_14._0_1_ = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00531fc0(&local_80);
    }
    piVar1 = in_ECX + 0xd9;
    local_14 = (uint)local_14._1_3_ << 8;
    FUN_0075fa90(uVar4);
    if (*(int *)(param_1 + 0x78) != 0) {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x5c))(*(int *)(param_1 + 0x78));
        iVar3 = *piVar1;
        uVar4 = FUN_008aeb80(0x96,0x96,0,0x19);
        FUN_0088bb60(iVar3,uVar4);
        if (*(char *)(*(int *)(param_1 + 0x78) + 0x1a) != '\0') {
          (**(code **)(*in_ECX + 0x88))(0);
        }
      }
      if ((int *)in_ECX[0xda] != (int *)0x0) {
        (**(code **)(*(int *)in_ECX[0xda] + 0x5c))(*(undefined4 *)(param_1 + 0x78));
      }
    }
    in_ECX[0xa8] = *(int *)(param_1 + 0x88);
    in_ECX[0xc4] = *(int *)(param_1 + 0x7c);
    in_ECX[0xca] = *(int *)(param_1 + 0x80);
    in_ECX[0xec] = *(int *)(param_1 + 0xa0);
    if (*piVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*piVar1 + 8);
    }
    *(undefined4 *)(param_1 + 0x48) = uVar4;
    FUN_008b9e50(param_1);
    if (in_ECX[2] != 0) {
      FUN_008acd60(in_ECX + 0x7c);
    }
    local_14 = 0xffffffff;
    if (-1 < iStack_6c) {
      FUN_008a75d0(uStack_74,iStack_6c * 8,0x14);
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00897230(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_54 [12];
  float local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d6716;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_54;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffa0;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_00890240(uVar1);
  local_14 = 0;
  FUN_0088d310(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x88));
  local_14._0_1_ = 1;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0x3f800000;
  local_34 = 0;
  local_48 = _DAT_00b2e77c * 0.017453292;
  FUN_00890130(&local_40,local_48,*(float *)(param_1 + 0x98) * *(float *)(param_1 + 0x94));
  *in_ECX = &PTR_FUN_00a9681c;
  in_ECX[0x78] = &PTR_LAB_00a96810;
  in_ECX[0x7c] = &PTR_LAB_00a967f4;
  in_ECX[0xd9] = 0;
  in_ECX[0xda] = 0;
  local_14._0_1_ = 4;
  _eh_vector_constructor_iterator_(in_ECX + 0xdd,4,2,FUN_007c88a0,FUN_007016a0);
  local_14._0_1_ = 5;
  uVar2 = FUN_008a7560(0xf0,0x14);
  in_ECX[0xef] = uVar2;
  in_ECX[0xf1] = 5;
  in_ECX[0xe8] = 0x40000000;
  in_ECX[0xeb] = 0;
  in_ECX[0xea] = 0x40000000;
  in_ECX[0x7d] = 0;
  in_ECX[0xe9] = 0x41200000;
  in_ECX[0xd0] = 0;
  in_ECX[0xd1] = 0;
  in_ECX[0xd2] = 0;
  in_ECX[0xd3] = 0;
  in_ECX[0xbc] = 0;
  in_ECX[0xbd] = 0;
  in_ECX[0xbe] = 0;
  in_ECX[0xbf] = 0;
  in_ECX[200] = 0;
  in_ECX[0xc9] = 0;
  in_ECX[0xc0] = 0;
  in_ECX[0xcb] = 0;
  local_14 = CONCAT31(local_14._1_3_,6);
  in_ECX[0xcc] = 0x3f800000;
  in_ECX[0xc3] = 0;
  in_ECX[0xc1] = 0;
  in_ECX[0xc2] = 0;
  in_ECX[0xc4] = 0;
  in_ECX[0xc5] = 0;
  in_ECX[0xca] = 0x3f800000;
  in_ECX[0xac] = 0;
  in_ECX[0xad] = 0;
  in_ECX[0xaf] = 0;
  in_ECX[0xae] = 0x3f800000;
  in_ECX[0xb0] = 0x3f800000;
  in_ECX[0xb1] = 0;
  in_ECX[0xb2] = 0;
  in_ECX[0xb3] = 0;
  in_ECX[0xa8] = 0;
  in_ECX[0xdb] = 2;
  in_ECX[0xdc] = 2;
  in_ECX[0xec] = 0;
  in_ECX[0xed] = 0;
  in_ECX[0xee] = 0;
  in_ECX[0xf0] = 0;
  FUN_00897040(param_1);
  *unaff_FS_OFFSET = local_1c;
  return;
}



undefined4 FUN_00897490(int param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = 0;
  puVar3 = (undefined4 *)(param_1 + 8);
  param_1 = (int)param_2 - param_1;
  do {
    local_c = puVar3[-2];
    local_8 = puVar3[-1];
    local_4 = *puVar3;
    local_18 = *param_2;
    local_14 = param_2[1];
    local_10 = *(undefined4 *)((int)puVar3 + param_1);
    cVar1 = FUN_008904e0(&local_c,&local_18,param_3);
    if (cVar1 == '\0') {
      return 0;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 3;
    param_2 = param_2 + 3;
  } while (uVar2 < 3);
  return 1;
}



int FUN_00897580(int *param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  uint in_EAX;
  int *piVar3;
  uint3 uVar4;
  
  uVar2 = in_EAX >> 8;
  if (param_1 == (int *)0x0) goto LAB_008975b8;
  if (param_2 == 0) {
LAB_008975a1:
    piVar3 = param_1;
  }
  else {
    piVar3 = (int *)(**(code **)(*param_1 + 0x58))(param_2);
    if (piVar3 == (int *)0x0) goto LAB_008975a1;
  }
  fVar1 = (float)piVar3[0x20];
  uVar4 = (uint3)(CONCAT22((short)((uint)piVar3 >> 0x10),
                           (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe) >> 8);
  if (0.0 < fVar1) {
    return CONCAT31(uVar4,1);
  }
  uVar2 = (uint)uVar4;
LAB_008975b8:
  return uVar2 << 8;
}



int FUN_008975c0(int *param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  uint in_EAX;
  int *piVar3;
  uint3 uVar4;
  
  uVar2 = in_EAX >> 8;
  if (param_1 == (int *)0x0) goto LAB_008975f8;
  if (param_2 == 0) {
LAB_008975e1:
    piVar3 = param_1;
  }
  else {
    piVar3 = (int *)(**(code **)(*param_1 + 0x58))(param_2);
    if (piVar3 == (int *)0x0) goto LAB_008975e1;
  }
  fVar1 = (float)piVar3[0x21];
  uVar4 = (uint3)(CONCAT22((short)((uint)piVar3 >> 0x10),
                           (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe) >> 8);
  if (0.0 < fVar1) {
    return CONCAT31(uVar4,1);
  }
  uVar2 = (uint)uVar4;
LAB_008975f8:
  return uVar2 << 8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00897600(void)

{
  undefined4 *in_ECX;
  
  FUN_00711c50();
  *in_ECX = &PTR_FUN_00a96944;
  in_ECX[4] = 0;
  _DAT_00ba7a80 = _DAT_00ba7a80 + 1;
  *(undefined2 *)(in_ECX + 3) = 0x41;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00897640(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_00711d90(param_1);
  *in_ECX = &PTR_FUN_00a96944;
  in_ECX[4] = 0;
  _DAT_00ba7a80 = _DAT_00ba7a80 + 1;
  *(undefined2 *)(in_ECX + 3) = 0x41;
  return;
}



void FUN_00897670(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined1 local_8 [8];
  
  iVar1 = *(int *)(in_ECX + 0x10);
  if (iVar1 != param_1) {
    if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
      FUN_008bc7b0(local_8,&DAT_00ba7b80);
    }
    FUN_0075fa90(param_1);
    if ((*(int *)(in_ECX + 0x10) != 0) && (*(int *)(*(int *)(in_ECX + 0x10) + 8) != 0)) {
      FUN_008bc750(&DAT_00ba7b80,in_ECX,0);
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x008977bd) */
/* WARNING: Removing unreachable block (ram,0x008977c7) */
/* WARNING: Removing unreachable block (ram,0x008977e5) */
/* WARNING: Removing unreachable block (ram,0x008977ef) */

void FUN_008976d0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = param_2;
  iVar6 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d6750;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  thunk_FUN_00700770(param_1,param_2);
  *(undefined2 *)(iVar6 + 0xc) = *(undefined2 *)(in_ECX + 0xc);
  piVar1 = *(int **)(in_ECX + 0x10);
  if (piVar1 != (int *)0x0) {
    InterlockedIncrement(piVar1 + 1);
    param_2 = (undefined4 *)0x0;
    local_4 = 1;
    cVar4 = FUN_0055e000(piVar1,&param_1);
    iVar6 = param_1;
    if (cVar4 == '\0') {
      iVar6 = (**(code **)(*piVar1 + 0x18))(uVar2,uVar5);
    }
    FUN_0075fa90(iVar6);
    puVar3 = param_2;
    FUN_00897670(param_2);
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if (LVar7 == 0) {
        (**(code **)*puVar3)(1);
      }
      param_2 = (undefined4 *)0x0;
    }
    LVar7 = InterlockedDecrement(piVar1 + 1);
    if (LVar7 == 0) {
      (**(code **)*piVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00897810(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00711cb0(param_1);
  iVar1 = FUN_00452a60();
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) & 0xffef | 6;
  }
  uVar2 = FUN_007124a0();
  FUN_00897670(uVar2);
  return;
}



void FUN_00897850(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x10) + 0x24))(param_1);
  }
  FUN_00711cd0(param_1);
  return;
}



bool FUN_00897880(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int in_ECX;
  
  cVar1 = FUN_00711d20(param_1);
  bVar3 = false;
  if (cVar1 != '\0') {
    if (*(int **)(in_ECX + 0x10) != (int *)0x0) {
      bVar2 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x2c))(*(undefined4 *)(param_1 + 0x10));
      return (bool)(bVar2 & *(short *)(param_1 + 0xc) == *(short *)(in_ECX + 0xc));
    }
    bVar3 = *(int *)(param_1 + 0x10) == 0 && *(short *)(param_1 + 0xc) == *(short *)(in_ECX + 0xc);
  }
  return bVar3;
}



void FUN_00897a20(int *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_004a05e0(param_1);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0xc) = *(ushort *)(iVar1 + 0xc) | 0x40;
    }
    if ((param_2 != '\0') && (iVar1 = (**(code **)(*param_1 + 8))(), iVar1 != 0)) {
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      while (uVar3 != 0) {
        uVar3 = uVar3 - 1;
        if (uVar3 < *(ushort *)(iVar1 + 0xb6)) {
          uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xb0) + uVar3 * 4);
        }
        else {
          uVar2 = 0;
        }
        FUN_00897a20(uVar2,1);
      }
    }
  }
  return;
}



void FUN_00897a90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004a05e0(param_1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    FUN_0089f520(param_2);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00897b00(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009d6783;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a96944;
  _DAT_00ba7a80 = _DAT_00ba7a80 + -1;
  local_4 = 1;
  FUN_00897670(0);
  puVar1 = (undefined4 *)in_ECX[4];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  local_4 = 0xffffffff;
  FUN_00711c80();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00897b90(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00711c90(param_1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0xc,2,&param_1,1);
  FUN_00712a20();
  return;
}



void FUN_00897bd0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = param_1;
  FUN_00711d00(param_1);
  iVar1 = piVar2[0x88];
  param_1 = (int *)0x2;
  (**(code **)(iVar1 + 8))(iVar1,in_ECX + 0xc,2,&param_1,1);
  (**(code **)(*piVar2 + 0x2c))(*(undefined4 *)(in_ECX + 0x10));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00897c20(float param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  LONG LVar10;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d67df;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((_DAT_00ba7b98 & 1) == 0) {
    _DAT_00ba7b98 = _DAT_00ba7b98 | 1;
    DAT_00ba7b94 = (undefined4 *)0x0;
    _atexit(FUN_00a27b10);
  }
  if ((_DAT_00ba7b98 & 2) == 0) {
    _DAT_00ba7b98 = _DAT_00ba7b98 | 2;
    DAT_00ba7b90 = (undefined4 *)0x0;
    _atexit(FUN_00a27ae0);
  }
  if ((_DAT_00ba7b98 & 4) == 0) {
    _DAT_00ba7b98 = _DAT_00ba7b98 | 4;
    DAT_00ba7b8c = (undefined4 *)0x0;
    _atexit(FUN_00a27ab0);
  }
  if ((_DAT_00ba7b98 & 8) == 0) {
    _DAT_00ba7b98 = _DAT_00ba7b98 | 8;
    DAT_00ba7b88 = (undefined4 *)0x0;
    _atexit(FUN_00a27a80);
  }
  bVar2 = *(byte *)(in_ECX + 0xc) >> 4;
  if (param_1._0_1_ == '\0') {
    if ((bVar2 & 1) != 0) {
      piVar9 = (int *)FUN_00452a60(uVar3);
      if (((piVar9 != (int *)0x0) &&
          (piVar4 = (int *)(**(code **)(*piVar9 + 8))(), piVar4 != (int *)0x0)) ||
         (piVar4 = (int *)piVar9[7], piVar4 != (int *)0x0)) {
        local_10 = (uint)*(ushort *)((int)piVar4 + 0xb6);
        param_1 = 0.0;
        if (local_10 != 0) {
          do {
            if ((((uint)param_1 < (uint)*(ushort *)((int)piVar4 + 0xb6)) &&
                (*(int *)(piVar4[0x2c] + (int)param_1 * 4) != 0)) &&
               (iVar6 = FUN_007073f0("bhkColDisp"), iVar6 != 0)) {
              (**(code **)(*piVar4 + 0x88))(&puStack_14,iVar6);
              puVar7 = puStack_14;
              if (((puStack_14 != (undefined4 *)0x0) &&
                  (LVar10 = InterlockedDecrement(puStack_14 + 1), LVar10 == 0)) &&
                 (puVar7 != (undefined4 *)0x0)) {
                (**(code **)*puVar7)(1);
              }
              puVar7 = DAT_00ba7b94;
              if ((DAT_00ba7b94 != (undefined4 *)0x0) && (DAT_00ba7b94[1] == 1)) {
                LVar10 = InterlockedDecrement(DAT_00ba7b94 + 1);
                if ((LVar10 == 0) && (puVar7 != (undefined4 *)0x0)) {
                  (**(code **)*puVar7)(1);
                }
                DAT_00ba7b94 = (undefined4 *)0x0;
              }
              puVar7 = DAT_00ba7b90;
              if ((DAT_00ba7b90 != (undefined4 *)0x0) && (DAT_00ba7b90[1] == 1)) {
                LVar10 = InterlockedDecrement(DAT_00ba7b90 + 1);
                if ((LVar10 == 0) && (puVar7 != (undefined4 *)0x0)) {
                  (**(code **)*puVar7)(1);
                }
                DAT_00ba7b90 = (undefined4 *)0x0;
              }
              puVar7 = DAT_00ba7b8c;
              if ((DAT_00ba7b8c != (undefined4 *)0x0) && (DAT_00ba7b8c[1] == 1)) {
                LVar10 = InterlockedDecrement(DAT_00ba7b8c + 1);
                if ((LVar10 == 0) && (puVar7 != (undefined4 *)0x0)) {
                  (**(code **)*puVar7)(1);
                }
                DAT_00ba7b8c = (undefined4 *)0x0;
              }
              puVar7 = DAT_00ba7b88;
              if ((DAT_00ba7b88 != (undefined4 *)0x0) && (DAT_00ba7b88[1] == 1)) {
                LVar10 = InterlockedDecrement(DAT_00ba7b88 + 1);
                if ((LVar10 == 0) && (puVar7 != (undefined4 *)0x0)) {
                  (**(code **)*puVar7)(1);
                }
                DAT_00ba7b88 = (undefined4 *)0x0;
              }
            }
            param_1 = (float)((int)param_1 + 1);
          } while ((uint)param_1 < local_10);
        }
      }
      *(ushort *)(in_ECX + 0xc) = *(ushort *)(in_ECX + 0xc) & 0xffef;
    }
  }
  else if (((bVar2 & 1) == 0) && (piVar9 = *(int **)(in_ECX + 0x10), piVar9 != (int *)0x0)) {
    iVar6 = piVar9[2];
    if ((iVar6 == 0) || (iVar6 == -0x14)) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)*(undefined4 *)(iVar6 + 0x30);
    }
    if ((bVar2 & 0x3f) != 0x11) {
      piVar4 = (int *)FUN_00452a60(uVar3);
      if ((piVar4 == (int *)0x0) ||
         (piVar5 = (int *)(**(code **)(*piVar4 + 8))(), piVar5 == (int *)0x0)) {
        piVar5 = (int *)piVar4[7];
      }
      param_1 = (float)FUN_00401f00(0xdc);
      uStack_4 = 0;
      if (param_1 == 0.0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0070b780(0);
      }
      uStack_4 = 0xffffffff;
      FUN_006ff420("bhkColDisp");
      if (piVar5 != (int *)0x0) {
        param_1 = ABS(1.0 / (float)piVar5[0x25]);
        *(float *)(iVar6 + 0x60) = param_1;
        (**(code **)(*piVar5 + 0x84))(iVar6,1);
        FUN_00707370(0,1);
      }
      puVar7 = (undefined4 *)(**(code **)(*piVar9 + 0x88))(iVar6);
      puStack_14 = puVar7;
      if (puVar7 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar7 + 1);
      }
      uStack_4 = 1;
      if (puVar7 == (undefined4 *)0x0) {
        if ((piVar5 != (int *)0x0) && (iVar6 != 0)) {
          (**(code **)(*piVar5 + 0x88))(&param_1,iVar6);
          FUN_007016a0();
        }
      }
      else {
        if (piVar5 != (int *)0x0) {
          if (DAT_00ba7b94 == (undefined4 *)0x0) {
            param_1 = (float)FUN_00401f00(0x1c);
            uStack_4._0_1_ = 2;
            if (param_1 == 0.0) {
              uVar8 = 0;
            }
            else {
              uVar8 = FUN_00405990();
            }
            uStack_4 = CONCAT31(uStack_4._1_3_,1);
            FUN_0075fa90(uVar8);
            *(ushort *)(DAT_00ba7b94 + 6) = *(ushort *)(DAT_00ba7b94 + 6) & 0xffcf;
            *(ushort *)(DAT_00ba7b94 + 6) = *(ushort *)(DAT_00ba7b94 + 6) & 0xfff7;
          }
          if (DAT_00ba7b90 == (undefined4 *)0x0) {
            param_1 = (float)FUN_00401f00(0x1c);
            uStack_4._0_1_ = 3;
            if (param_1 == 0.0) {
              uVar8 = 0;
            }
            else {
              uVar8 = FUN_00405a00();
            }
            uStack_4 = CONCAT31(uStack_4._1_3_,1);
            FUN_0075fa90(uVar8);
            *(ushort *)(DAT_00ba7b90 + 6) = *(ushort *)(DAT_00ba7b90 + 6) | 1;
            *(ushort *)(DAT_00ba7b90 + 6) = *(ushort *)(DAT_00ba7b90 + 6) | 2;
          }
          iVar6 = FUN_00707530(2);
          if (iVar6 == 0) {
            if (DAT_00ba7b8c == (undefined4 *)0x0) {
              param_1 = (float)FUN_00401f00(0x5c);
              uStack_4._0_1_ = 4;
              if (param_1 == 0.0) {
                uVar8 = 0;
              }
              else {
                uVar8 = FUN_007095a0();
              }
              uStack_4 = CONCAT31(uStack_4._1_3_,1);
              FUN_0075fa90(uVar8);
              puVar1 = DAT_00ba7b8c;
              DAT_00ba7b8c[7] = DAT_00b25ac4;
              puVar1[8] = DAT_00b25ac8;
              uVar8 = DAT_00b25acc;
              puVar1[0x15] = puVar1[0x15] + 1;
              puVar1[9] = uVar8;
              puVar1 = DAT_00ba7b8c;
              DAT_00ba7b8c[10] = DAT_00b25ac4;
              puVar1[0xb] = DAT_00b25ac8;
              uVar8 = DAT_00b25acc;
              puVar1[0x15] = puVar1[0x15] + 1;
              puVar1[0xc] = uVar8;
              puVar1 = DAT_00ba7b8c;
              DAT_00ba7b8c[0x10] = DAT_00b25ac4;
              puVar1[0x11] = DAT_00b25ac8;
              uVar8 = DAT_00b25acc;
              puVar1[0x15] = puVar1[0x15] + 1;
              puVar1[0x12] = uVar8;
            }
            FUN_00405680(DAT_00ba7b8c);
          }
          if (DAT_00ba7b88 == (undefined4 *)0x0) {
            param_1 = (float)FUN_00401f00(0x1c);
            uStack_4._0_1_ = 5;
            if (param_1 == 0.0) {
              uVar8 = 0;
            }
            else {
              uVar8 = FUN_004059d0();
            }
            uStack_4 = CONCAT31(uStack_4._1_3_,1);
            FUN_0075fa90(uVar8);
            *(ushort *)(DAT_00ba7b88 + 6) = *(ushort *)(DAT_00ba7b88 + 6) | 1;
          }
          FUN_00405680(DAT_00ba7b94);
          FUN_00405680(DAT_00ba7b90);
          FUN_00405680(DAT_00ba7b88);
          FUN_00707610();
          FUN_00707980();
          FUN_00707370(0,0);
        }
        if (DAT_00ba7a84 != (code *)0x0) {
          (*DAT_00ba7a84)(puVar7);
        }
      }
      *(ushort *)(in_ECX + 0xc) = *(ushort *)(in_ECX + 0xc) | 0x10;
      uStack_4 = 0xffffffff;
      FUN_007016a0();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00898210(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  uint local_28;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_28;
  FUN_00711e60(param_1);
  local_28 = FUN_0070f910(DAT_00ba7b80);
  uVar3 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&local_28);
  _sprintf(local_24,"0x%8X",in_ECX[4]);
  local_28 = FUN_0070fc30("bhkWorldObject",local_24);
  uVar3 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&local_28);
  local_28 = CONCAT31(local_28._1_3_,(char)in_ECX[3]) & 0xffffff01;
  local_28 = FUN_0070f950("bActive",local_28);
  uVar3 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&local_28);
  local_28 = CONCAT31(local_28._1_3_,*(byte *)(in_ECX + 3) >> 6) & 0xffffff01;
  local_28 = FUN_0070f950("bReset",local_28);
  uVar3 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&local_28);
  local_28 = CONCAT31(local_28._1_3_,*(byte *)(in_ECX + 3) >> 2) & 0xffffff01;
  local_28 = FUN_0070f950("bNotify",local_28);
  uVar3 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&local_28);
  local_28 = CONCAT31(local_28._1_3_,*(byte *)(in_ECX + 3) >> 3) & 0xffffff01;
  local_28 = FUN_0070f950("bSetLocal",local_28);
  uVar3 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&local_28);
  uVar1 = (**(code **)(*in_ECX + 0x74))();
  local_28 = FUN_0070f950("bKeyframe",uVar1);
  uVar3 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&local_28);
  local_28 = local_28 & 0xffffff00;
  iVar2 = FUN_00452a60();
  if ((iVar2 != 0) && (local_28 = CONCAT31(local_28._1_3_,1), 0.0 <= *(float *)(iVar2 + 0x7c))) {
    local_28 = (uint)local_28._1_3_ << 8;
  }
  local_28 = FUN_0070f950("bFaceDown",local_28);
  uVar3 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&local_28);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008984a0(float param_1,undefined4 param_2)

{
  _DAT_00ba7b9c = _DAT_00b2e8a8 * param_1;
  _DAT_00ba7ba0 = param_2;
  return;
}



void FUN_008984c0(void)

{
  undefined4 *in_ECX;
  
  FUN_00536060(1);
  *in_ECX = &PTR_FUN_00a96a40;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008984e0(undefined4 param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  LONG LVar5;
  int *in_ECX;
  float10 fVar6;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  uint local_98;
  int *local_94;
  undefined4 *local_90;
  int *local_8c;
  undefined4 *local_88;
  float local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [60];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&fStack_a4;
  local_98 = 0;
  if (((char)in_ECX[2] == '\0') || (_DAT_00ba7b9c == 0.0)) {
    return;
  }
  local_94 = in_ECX + 3;
  local_8c = in_ECX;
  iVar3 = FUN_009828c0();
  local_a0 = (float)(1 - iVar3);
  local_84 = (float)(int)local_a0;
  do {
    if (local_94 == (int *)0x0) {
LAB_00898570:
      bVar1 = false;
    }
    else {
      piVar4 = (int *)FUN_00677c70(&local_88);
      local_98 = local_98 | 1;
      if (*piVar4 == 0) goto LAB_00898570;
      bVar1 = true;
    }
    puVar2 = local_88;
    if (((((local_98 & 1) != 0) && (local_98 = local_98 & 0xfffffffe, local_88 != (undefined4 *)0x0)
         ) && (LVar5 = InterlockedDecrement(local_88 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    if (!bVar1) {
      return;
    }
    piVar4 = (int *)FUN_00677c70(&local_90);
    puVar2 = local_90;
    iVar3 = *piVar4;
    if (((local_90 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(local_90 + 1), LVar5 == 0)
        ) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    piVar4 = local_8c;
    iVar3 = *(int *)(iVar3 + 8);
    fVar6 = (float10)(**(code **)(*local_8c + 0x1c))(_DAT_00ba7b9c);
    fStack_a4 = (float)(fVar6 + (float10)_DAT_00ba7b9c * (float10)0.25);
    if (fStack_a4 < 0.0) {
      fStack_a4 = 0.0;
    }
    if (_DAT_00b2e8a8 < fStack_a4) {
      fStack_a4 = _DAT_00b2e8a8;
    }
    fStack_a4 = fStack_a4 * (float)local_88;
    local_a0 = (float)((float10)0.25 * (float10)_DAT_00b3f9a4);
    fVar6 = (float10)(**(code **)(*piVar4 + 0x1c))(local_a0);
    fStack_9c = _DAT_00ba7ba0 + (float)fVar6;
    if (fStack_9c <= _DAT_00b3f9a0) {
      if (fStack_9c < 0.0) {
        fStack_9c = _DAT_00b3f9a0 + fStack_9c;
      }
    }
    else {
      fStack_9c = fStack_9c - _DAT_00b3f9a0;
    }
    uStack_70 = 0;
    fStack_6c = local_a0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0x3f800000;
    uStack_74 = 0;
    FUN_008b1eb0(&uStack_80,fStack_9c);
    FUN_0088fe00(auStack_50,&uStack_70);
    if (iVar3 != 0) {
      FUN_008a6410();
      (**(code **)(**(int **)(iVar3 + 0x50) + 0x6c))(param_1,auStack_60);
    }
    local_94 = (int *)local_94[1];
  } while( true );
}



void FUN_00898760(void)

{
  int *piVar1;
  char *pcVar2;
  int unaff_ESI;
  int *unaff_EDI;
  char cStack_18;
  int local_4;
  
  (**(code **)(*unaff_EDI + 0x1c))(&local_4);
  piVar1 = unaff_EDI + 5;
  pcVar2 = (char *)(*(code *)**(undefined4 **)(local_4 + 8))(&local_4);
  cStack_18 = (char)piVar1;
  if (*pcVar2 == '\0') {
    if (cStack_18 != '\0') {
      (**(code **)(*unaff_EDI + 0x20))();
      if (*(char *)(unaff_ESI + 0x18) == '\x02') {
        (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x10) + unaff_ESI) + 0x20))(piVar1);
      }
    }
  }
  else if (cStack_18 == '\0') {
    (**(code **)(*unaff_EDI + 0x18))();
    if (*(char *)(unaff_ESI + 0x18) == '\x02') {
      (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x10) + unaff_ESI) + 0x18))(piVar1);
      return;
    }
  }
  return;
}



void FUN_008987e0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_008ba1b0(*(undefined4 *)(in_ECX + 100),param_1,*(undefined4 *)(in_ECX + 0x78),0,param_2);
  return;
}



void FUN_00898820(void)

{
  FUN_008d8830();
  return;
}



void FUN_00898870(byte param_1)

{
  FUN_008d3390();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



undefined4 FUN_008988a0(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  if (*(int *)(in_ECX + 0x88) != 0) {
    local_8[0] = 8;
    local_4 = param_1;
    FUN_008d8830(local_8);
    return 0;
  }
  uVar1 = FUN_008cb450();
  return uVar1;
}



void FUN_008988f0(undefined1 *param_1,undefined4 param_2)

{
  int in_ECX;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  if (*(int *)(in_ECX + 0x88) != 0) {
    local_8[0] = 9;
    local_4 = param_2;
    FUN_008d8830(local_8);
    *param_1 = 0;
    return;
  }
  FUN_008cb4e0();
  *param_1 = 1;
  return;
}



void FUN_00898940(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 200)) {
    piVar2 = *(int **)(in_ECX + 0xc4);
    do {
      if (*piVar2 == param_1) {
        *(undefined4 *)(*(int *)(in_ECX + 0xc4) + iVar1 * 4) = 0;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 200));
  }
  *(undefined4 *)(*(int *)(in_ECX + 0xc4) + -4) = 0;
  return;
}



void FUN_00898990(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0xec)) {
    piVar2 = *(int **)(in_ECX + 0xe8);
    do {
      if (*piVar2 == param_1) {
        *(undefined4 *)(*(int *)(in_ECX + 0xe8) + iVar1 * 4) = 0;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0xec));
  }
  *(undefined4 *)(*(int *)(in_ECX + 0xe8) + -4) = 0;
  return;
}



void FUN_008989e0(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0xd4)) {
    piVar2 = *(int **)(in_ECX + 0xd0);
    do {
      if (*piVar2 == param_1) {
        *(undefined4 *)(*(int *)(in_ECX + 0xd0) + iVar1 * 4) = 0;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0xd4));
  }
  *(undefined4 *)(*(int *)(in_ECX + 0xd0) + -4) = 0;
  return;
}



void FUN_00898a30(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0xe0)) {
    piVar2 = *(int **)(in_ECX + 0xdc);
    do {
      if (*piVar2 == param_1) {
        *(undefined4 *)(*(int *)(in_ECX + 0xdc) + iVar1 * 4) = 0;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0xe0));
  }
  *(undefined4 *)(*(int *)(in_ECX + 0xdc) + -4) = 0;
  return;
}



void FUN_00898a80(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x110)) {
    piVar2 = *(int **)(in_ECX + 0x10c);
    do {
      if (*piVar2 == param_1) {
        *(undefined4 *)(*(int *)(in_ECX + 0x10c) + iVar1 * 4) = 0;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x110));
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x10c) + -4) = 0;
  return;
}



void FUN_00898ad0(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x14c)) {
    piVar2 = *(int **)(in_ECX + 0x148);
    do {
      if (*piVar2 == param_1) {
        *(undefined4 *)(*(int *)(in_ECX + 0x148) + iVar1 * 4) = 0;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x14c));
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x148) + -4) = 0;
  return;
}



void FUN_00898b20(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0xf8)) {
    piVar2 = *(int **)(in_ECX + 0xf4);
    do {
      if (*piVar2 == param_1) {
        *(undefined4 *)(*(int *)(in_ECX + 0xf4) + iVar1 * 4) = 0;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0xf8));
  }
  *(undefined4 *)(*(int *)(in_ECX + 0xf4) + -4) = 0;
  return;
}



int FUN_00898b70(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int in_ECX;
  uint unaff_EDI;
  uint uVar8;
  int unaff_FS_OFFSET;
  
  uVar8 = MXCSR & 0x8000;
  MXCSR = MXCSR | 0x8000;
  iVar7 = (**(code **)(**(int **)(in_ECX + 8) + 8))();
  iVar5 = _tls_index;
  if (((iVar7 == 0) && (piVar1 = *(int **)(in_ECX + 0x60), piVar1 != (int *)0x0)) &&
     (piVar1[2] < *(int *)(DAT_00ba7d98 + 0x28) + *(int *)(DAT_00ba7d98 + 0x14))) {
    iVar2 = *(int *)(unaff_FS_OFFSET + 0x2c);
    iVar3 = *(int *)(iVar2 + _tls_index * 4);
    if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
      puVar4 = *(undefined4 **)(iVar3 + 0x1a4);
      *puVar4 = "TtWatchDog:FreeMem";
      uVar6 = rdtsc();
      puVar4[1] = (int)uVar6;
      *(undefined4 **)(*(int *)(iVar2 + iVar5 * 4) + 0x1a4) = puVar4 + 3;
      uVar8 = unaff_EDI;
    }
    (**(code **)(*piVar1 + 8))();
    iVar5 = *(int *)(iVar2 + iVar5 * 4);
    if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
      puVar4 = *(undefined4 **)(iVar5 + 0x1a4);
      *puVar4 = &DAT_00a9610c;
      uVar6 = rdtsc();
      puVar4[1] = (int)uVar6;
      *(undefined4 **)(iVar5 + 0x1a4) = puVar4 + 3;
    }
  }
  MXCSR = MXCSR & 0xffff7fff | uVar8;
  return iVar7;
}



int FUN_00898c90(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int in_ECX;
  uint unaff_EDI;
  uint uVar8;
  int unaff_FS_OFFSET;
  
  uVar8 = MXCSR & 0x8000;
  MXCSR = MXCSR | 0x8000;
  iVar7 = (**(code **)(**(int **)(in_ECX + 8) + 8))();
  iVar5 = _tls_index;
  if (((iVar7 == 0) && (piVar1 = *(int **)(in_ECX + 0x60), piVar1 != (int *)0x0)) &&
     (piVar1[2] < *(int *)(DAT_00ba7d98 + 0x28) + *(int *)(DAT_00ba7d98 + 0x14))) {
    iVar2 = *(int *)(unaff_FS_OFFSET + 0x2c);
    iVar3 = *(int *)(iVar2 + _tls_index * 4);
    if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
      puVar4 = *(undefined4 **)(iVar3 + 0x1a4);
      *puVar4 = "TtWatchDog:FreeMem";
      uVar6 = rdtsc();
      puVar4[1] = (int)uVar6;
      *(undefined4 **)(*(int *)(iVar2 + iVar5 * 4) + 0x1a4) = puVar4 + 3;
      uVar8 = unaff_EDI;
    }
    (**(code **)(*piVar1 + 8))();
    iVar5 = *(int *)(iVar2 + iVar5 * 4);
    if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
      puVar4 = *(undefined4 **)(iVar5 + 0x1a4);
      *puVar4 = &DAT_00a9610c;
      uVar6 = rdtsc();
      puVar4[1] = (int)uVar6;
      *(undefined4 **)(iVar5 + 0x1a4) = puVar4 + 3;
    }
  }
  MXCSR = MXCSR & 0xffff7fff | uVar8;
  return iVar7;
}



void FUN_00898db0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 uVar4;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x24);
  uVar2 = *(undefined4 *)(in_ECX + 0x28);
  uVar3 = *(undefined4 *)(in_ECX + 0x2c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x2a4);
  uVar1 = *(undefined4 *)(in_ECX + 0x284);
  uVar2 = *(undefined4 *)(in_ECX + 0x288);
  uVar3 = *(undefined4 *)(in_ECX + 0x28c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(in_ECX + 0x280);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  uVar1 = *(undefined4 *)(in_ECX + 0x294);
  uVar2 = *(undefined4 *)(in_ECX + 0x298);
  uVar3 = *(undefined4 *)(in_ECX + 0x29c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(in_ECX + 0x290);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(int *)(in_ECX + 0x74) + 8);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(in_ECX + 0x78);
  if (*(int *)(in_ECX + 0x154) == 0) {
    uVar4 = 3;
  }
  else {
    uVar4 = (undefined1)*(undefined4 *)(*(int *)(in_ECX + 0x154) + 0x2c);
  }
  *(undefined1 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(in_ECX + 0x7c) + 0x1c20);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(in_ECX + 0x7c) + 0x1c24);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(in_ECX + 0x2a0);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(in_ECX + 0x2ac);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(in_ECX + 0x1a0);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(in_ECX + 0x174);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(in_ECX + 0x178);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(in_ECX + 0x26c);
  *(undefined4 *)(param_1 + 0x7c) = **(undefined4 **)(*(int *)(in_ECX + 0x74) + 0x20);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x74) + 0x20) + 4);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(in_ECX + 0xa8);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(in_ECX + 0xac);
  *(undefined1 *)(param_1 + 0x8c) = *(undefined1 *)(in_ECX + 0xa6);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(in_ECX + 0xb0);
  *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(in_ECX + 0xa5);
  *(undefined1 *)(param_1 + 0x95) = *(undefined1 *)(in_ECX + 0xb4);
  *(undefined1 *)(param_1 + 0x96) = *(undefined1 *)(in_ECX + 0xa4);
  return;
}



void FUN_00898ed0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_008d95a0(*(undefined4 *)(in_ECX + 100),param_1,*(undefined4 *)(in_ECX + 0x78),0,param_2);
  return;
}



void FUN_00898f10(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((iVar1 != 0) && (iVar3 = 0, 0 < *(int *)(iVar1 + 0x38))) {
    do {
      if ((iVar3 != 0) || (*(int *)(**(int **)(iVar1 + 0x34) + 0x14) != 0)) {
        FUN_008da080(*(undefined4 *)(*(int *)(iVar1 + 0x34) + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 0x38));
  }
  piVar2 = *(int **)(param_1 + 0x38);
  if (piVar2 != piVar2 + *(int *)(param_1 + 0x3c)) {
    do {
      iVar1 = *piVar2;
      if (0 < *(int *)(iVar1 + 0x38)) {
        iVar3 = 0;
        do {
          FUN_008da080(*(undefined4 *)(*(int *)(iVar1 + 0x34) + iVar3 * 4));
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar1 + 0x38));
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c) * 4));
  }
  piVar2 = *(int **)(param_1 + 0x44);
  if (piVar2 != piVar2 + *(int *)(param_1 + 0x48)) {
    do {
      iVar1 = *piVar2;
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + 0x38)) {
        do {
          FUN_008da080(*(undefined4 *)(*(int *)(iVar1 + 0x34) + iVar3 * 4));
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar1 + 0x38));
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48) * 4));
  }
  return;
}



void FUN_00898fe0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x34) + iVar2 * 4);
      puVar3 = *(undefined4 **)(iVar4 + 0x68);
      iVar4 = *(int *)(iVar4 + 0x6c);
      if (-1 < iVar4 + -1) {
        do {
          iVar1 = (**(code **)(*(int *)puVar3[3] + 0xc))();
          if (iVar1 != 0xb) {
            FUN_008da100(*puVar3);
          }
          puVar3 = puVar3 + 7;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x38));
  }
  return;
}



void FUN_00899030(void)

{
  int unaff_ESI;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(unaff_ESI + 0x38);
  if (puVar1 != puVar1 + *(int *)(unaff_ESI + 0x3c)) {
    do {
      FUN_00898fe0(*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)(*(int *)(unaff_ESI + 0x38) + *(int *)(unaff_ESI + 0x3c) * 4));
  }
  puVar1 = *(undefined4 **)(unaff_ESI + 0x44);
  if (puVar1 != puVar1 + *(int *)(unaff_ESI + 0x48)) {
    do {
      FUN_00898fe0(*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)(*(int *)(unaff_ESI + 0x44) + *(int *)(unaff_ESI + 0x48) * 4));
  }
  return;
}



void FUN_00899090(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x38);
  if (piVar2 != piVar2 + *(int *)(param_1 + 0x3c)) {
    do {
      iVar1 = *piVar2;
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + 0x60)) {
        do {
          FUN_008da150(*(undefined4 *)(*(int *)(iVar1 + 0x5c) + iVar3 * 4));
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar1 + 0x60));
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c) * 4));
  }
  piVar2 = *(int **)(param_1 + 0x44);
  if (piVar2 != piVar2 + *(int *)(param_1 + 0x48)) {
    do {
      iVar1 = *piVar2;
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + 0x60)) {
        do {
          FUN_008da150(*(undefined4 *)(*(int *)(iVar1 + 0x5c) + iVar3 * 4));
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar1 + 0x60));
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48) * 4));
  }
  return;
}



void FUN_00899130(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar3 = *(int *)(unaff_EDI + 0x154);
  if (iVar3 == 0) {
    iVar3 = 0;
    if (0 < *(int *)(unaff_EDI + 0xbc)) {
      do {
        FUN_008da0c0(*(undefined4 *)(*(int *)(unaff_EDI + 0xb8) + iVar3 * 4));
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(unaff_EDI + 0xbc));
    }
  }
  else {
    iVar2 = 0;
    if (0 < *(int *)(unaff_EDI + 0xbc)) {
      do {
        iVar1 = *(int *)(*(int *)(unaff_EDI + 0xb8) + iVar2 * 4);
        if ((((iVar1 != *(int *)(iVar3 + 0x14)) && (iVar1 != *(int *)(iVar3 + 0x18))) &&
            (iVar1 != *(int *)(iVar3 + 0x1c))) &&
           (((iVar1 != *(int *)(iVar3 + 0x20) && (iVar1 != *(int *)(iVar3 + 0x24))) &&
            (iVar1 != *(int *)(iVar3 + 0x28))))) {
          FUN_008da0c0(iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(unaff_EDI + 0xbc));
      return;
    }
  }
  return;
}



undefined4 FUN_008991c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x40,0x2c);
  *(undefined2 *)(iVar1 + 4) = 0x40;
  uVar2 = FUN_008d9ec0();
  FUN_00898f10();
  FUN_00899130(uVar2);
  FUN_00899030();
  FUN_00899090();
  return uVar2;
}



void FUN_00899210(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int in_ECX;
  int unaff_FS_OFFSET;
  
  iVar5 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtPendingOps";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  *(undefined4 *)(in_ECX + 0x84) = 0;
  FUN_008d8bf0();
  iVar1 = *(int *)(iVar1 + iVar5 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_008992b0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(in_ECX + 0x3c);
  iVar1 = 0;
  if (-1 < iVar4 + -1) {
    piVar3 = (int *)(*(int *)(in_ECX + 0x38) + (iVar4 + -1) * 4);
    do {
      iVar2 = *piVar3;
      iVar2 = *(int *)(iVar2 + 0x14) + 0x9c + *(int *)(iVar2 + 0x18) * 4 + *(int *)(iVar2 + 0x10) +
              *(int *)(iVar2 + 0xc);
      if (iVar1 <= iVar2) {
        iVar1 = iVar2;
      }
      piVar3 = piVar3 + -1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



void FUN_00899300(byte param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = &PTR_LAB_00a45e5c;
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00899330(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = &PTR_LAB_00a95c60;
  in_ECX[3] = &PTR_LAB_00a95c3c;
  in_ECX[4] = &PTR_LAB_00a95c48;
  in_ECX[5] = &PTR_LAB_00a95c68;
  *in_ECX = &PTR_FUN_00a96b78;
  in_ECX[2] = &PTR_LAB_00a96b64;
  in_ECX[3] = &PTR_LAB_00a96b70;
  in_ECX[4] = &PTR_LAB_00a96b68;
  in_ECX[5] = &PTR_LAB_00a96b64;
  return;
}



void FUN_008993a0(byte param_1)

{
  FUN_008da1d0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008993f0(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xc,0x1f);
  *(undefined2 *)(iVar1 + 4) = 0xc;
  puVar2 = (undefined4 *)FUN_008dbb90(in_EAX);
  iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xc,0x1f);
  *(undefined2 *)(iVar1 + 4) = 0xc;
  puVar3 = (undefined4 *)FUN_008db4e0(in_EAX);
  puVar4 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x10,4);
  *(undefined2 *)(puVar4 + 1) = 0x10;
  *(undefined2 *)((int)puVar4 + 6) = 1;
  *puVar4 = &PTR_FUN_00a96b58;
  *(undefined2 *)((int)puVar4 + 0xe) = 1;
  puVar4[2] = &PTR_LAB_00a96ab4;
  FUN_008da3f0(puVar2,1);
  FUN_008da3f0(puVar3,2);
  FUN_008da3f0(puVar4,3);
  if ((*(short *)(puVar2 + 1) != 0) &&
     (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
     *(short *)((int)puVar2 + 6) == 0)) {
    (**(code **)*puVar2)(1);
  }
  if ((*(short *)(puVar3 + 1) != 0) &&
     (*(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1,
     *(short *)((int)puVar3 + 6) == 0)) {
    (**(code **)*puVar3)(1);
  }
  if ((*(short *)(puVar4 + 1) != 0) &&
     (*(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1,
     *(short *)((int)puVar4 + 6) == 0)) {
    (**(code **)*puVar4)(1);
  }
  return;
}



int * FUN_008994e0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int in_ECX;
  int unaff_FS_OFFSET;
  undefined1 local_c [4];
  int *local_8;
  undefined4 local_4;
  
  iVar3 = _tls_index;
  if (*(int *)(in_ECX + 0x88) != 0) {
    local_4 = param_2;
    local_c[0] = 1;
    local_8 = param_1;
    FUN_008d8830(local_c);
    return (int *)0x0;
  }
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar5 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar2 = "LtAddEntity";
    puVar2[3] = "Island";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar2 + 4;
  }
  if (param_1[7] == 0) {
    iVar5 = (**(code **)(*param_1 + 0xc))();
    param_1[7] = iVar5;
  }
  FUN_008dd0c0(0,0,param_1[0x14] + 0x10);
  *(undefined1 *)(in_ECX + 0x91) = 0;
  FUN_008bc720();
  FUN_008cb640();
  *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
  iVar5 = *(int *)(iVar1 + iVar3 * 4);
  *(undefined1 *)(in_ECX + 0x91) = 1;
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar2 = "StBroadphase";
    uVar4 = rdtsc();
    iVar5 = *(int *)(iVar1 + iVar3 * 4);
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar2 + 3;
  }
  FUN_008cc800();
  iVar5 = *(int *)(iVar1 + iVar3 * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar2 = "StCallbacks";
    uVar4 = rdtsc();
    iVar5 = *(int *)(iVar1 + iVar3 * 4);
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar2 + 3;
  }
  FUN_008dc380();
  FUN_008dbef0(param_1);
  iVar5 = *(int *)(in_ECX + 0x88) + -1;
  *(int *)(in_ECX + 0x88) = iVar5;
  if (((iVar5 == 0) && (*(int *)(in_ECX + 0x84) != 0)) && (*(char *)(in_ECX + 0x90) == '\0')) {
    FUN_00899210();
  }
  iVar3 = *(int *)(iVar1 + iVar3 * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar2 = &DAT_00a6a630;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar2 + 3;
  }
  return param_1;
}



void FUN_008996c0(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int in_ECX;
  int unaff_FS_OFFSET;
  undefined4 local_8;
  int *local_4;
  
  iVar3 = _tls_index;
  if (*(int *)(in_ECX + 0x88) != 0) {
    local_8 = CONCAT31(local_8._1_3_,2);
    local_4 = param_2;
    FUN_008d8830(&local_8);
    *param_1 = 0;
    return;
  }
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar5 = *(int *)(iVar1 + _tls_index * 4);
  *(undefined4 *)(in_ECX + 0x88) = 1;
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar2 = "LtRemEntity";
    puVar2[3] = "Broadphase";
    uVar4 = rdtsc();
    local_8 = (undefined4)uVar4;
    puVar2[1] = local_8;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar2 + 4;
  }
  FUN_008cca80();
  if (3 < *(int *)(in_ECX + 0xb4)) {
    FUN_008cc4e0(*(undefined4 *)(in_ECX + 8),param_2);
  }
  iVar5 = *(int *)(iVar1 + iVar3 * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar2 = "StCallbacks";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(*(int *)(iVar1 + iVar3 * 4) + 0x1a4) = puVar2 + 3;
  }
  FUN_008dc410();
  FUN_008dc1c0(param_2);
  iVar5 = *(int *)(iVar1 + iVar3 * 4);
  *(undefined1 *)(in_ECX + 0x91) = 0;
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar2 = "StIsland";
    uVar4 = rdtsc();
    iVar5 = *(int *)(iVar1 + iVar3 * 4);
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar2 + 3;
  }
  FUN_008cbe90();
  if ((short)param_2[1] == 0) {
    (**(code **)(*param_2 + 0x10))();
  }
  FUN_008bc730();
  iVar5 = *(int *)(in_ECX + 0x88) + -1;
  *(undefined1 *)(in_ECX + 0x91) = 1;
  *(int *)(in_ECX + 0x88) = iVar5;
  if (((iVar5 == 0) && (*(int *)(in_ECX + 0x84) != 0)) && (*(char *)(in_ECX + 0x90) == '\0')) {
    FUN_00899210();
  }
  iVar3 = *(int *)(iVar1 + iVar3 * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar2 = &DAT_00a6a630;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar2 + 3;
  }
  *param_1 = 1;
  return;
}



void FUN_008998a0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *piStack_1c;
  int local_14;
  int iStack_10;
  int local_c [3];
  
  if (*(int *)(in_ECX + 0x88) != 0) {
    piStack_1c = (int *)0x4;
    uVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x20);
    FUN_008b1890(uVar1,local_c[2],0x20);
    FUN_008d8830(&piStack_1c);
    return;
  }
  piStack_1c = local_c;
  local_c[0] = 0;
  local_c[1] = 0;
  local_c[2] = 0x80000000;
  (**(code **)(**(int **)(in_ECX + 100) + 0x28))(param_1);
  iVar3 = 0;
  if (0 < iStack_10) {
    do {
      iVar2 = *(int *)(local_14 + 4 + iVar3 * 8);
      iVar2 = *(char *)(iVar2 + 5) + iVar2;
      if ((*(char *)(iVar2 + 0x18) == '\x01') && (*(int *)(iVar2 + 0x10) + iVar2 != 0)) {
        FUN_008a6410();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_10);
  }
  if (-1 < local_c[0]) {
    FUN_008a75d0(local_14,local_c[0] << 3,0x14);
  }
  return;
}



void FUN_00899990(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)(param_2 + 0xb8);
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0xbc)) {
    piVar3 = (int *)*piVar1;
    do {
      if (*piVar3 == 0) {
        if (-1 < iVar2) {
          *(int *)(*piVar1 + iVar2 * 4) = param_1;
          goto LAB_008999e7;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_2 + 0xbc));
  }
  if (*(uint *)(param_2 + 0xbc) == (*(uint *)(param_2 + 0xc0) & 0x3fffffff)) {
    FUN_008a6ee0(piVar1,4);
  }
  *(int *)(*piVar1 + *(int *)(param_2 + 0xbc) * 4) = param_1;
  *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
LAB_008999e7:
  if ((*(short *)(*(int *)(param_1 + 0xc) + 0x20) == -1) && (*(char *)(param_2 + 0x91) == '\0')) {
    FUN_008ddc90(param_1);
    FUN_008de080(param_1);
    return;
  }
  if ((*(int *)(param_2 + 0x54) != *(int *)(param_1 + 0xc)) && (*(char *)(param_2 + 0x91) == '\0'))
  {
    FUN_008cd320();
  }
  return;
}



int * FUN_00899a50(int *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_8 [4];
  int *local_4;
  
  if (*(int *)(in_ECX + 0x8c) + *(int *)(in_ECX + 0x88) != 0) {
    local_8[0] = 0xd;
    local_4 = param_1;
    FUN_008d8830(local_8);
    return (int *)0x0;
  }
  *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
  if (param_1[7] == 0) {
    iVar2 = (**(code **)(*param_1 + 0xc))();
    param_1[7] = iVar2;
  }
  param_1[2] = in_ECX;
  FUN_008bc720();
  if (*(uint *)(in_ECX + 0xbc) == (*(uint *)(in_ECX + 0xc0) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0xb8),4);
  }
  *(int **)(*(int *)(in_ECX + 0xb8) + *(int *)(in_ECX + 0xbc) * 4) = param_1;
  *(int *)(in_ECX + 0xbc) = *(int *)(in_ECX + 0xbc) + 1;
  FUN_008cc950();
  FUN_008dc530();
  FUN_008de590();
  piVar1 = (int *)(in_ECX + 0x88);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (*(int *)(in_ECX + 0x84) != 0)) && (*(char *)(in_ECX + 0x90) == '\0')) {
    FUN_00899210();
  }
  return param_1;
}



void FUN_00899b30(int *param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  undefined1 local_8 [4];
  int *local_4;
  
  if (*(int *)(in_ECX + 0x8c) + *(int *)(in_ECX + 0x88) != 0) {
    local_8[0] = 0xe;
    local_4 = param_1;
    FUN_008d8830(local_8);
    return;
  }
  *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
  FUN_008dc5c0();
  FUN_008de520();
  FUN_008ccb90();
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0xbc)) {
    piVar3 = *(int **)(in_ECX + 0xb8);
    do {
      if ((int *)*piVar3 == param_1) goto LAB_00899bb2;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0xbc));
  }
  iVar1 = -1;
LAB_00899bb2:
  iVar2 = *(int *)(in_ECX + 0xbc) + -1;
  *(int *)(in_ECX + 0xbc) = iVar2;
  *(undefined4 *)(*(int *)(in_ECX + 0xb8) + iVar1 * 4) =
       *(undefined4 *)(*(int *)(in_ECX + 0xb8) + iVar2 * 4);
  param_1[2] = 0;
  if ((short)param_1[1] == 0) {
    (**(code **)(*param_1 + 0x2c))();
  }
  FUN_008bc730();
  iVar1 = *(int *)(in_ECX + 0x88) + -1;
  *(int *)(in_ECX + 0x88) = iVar1;
  if (((iVar1 == 0) && (*(int *)(in_ECX + 0x84) != 0)) && (*(char *)(in_ECX + 0x90) == '\0')) {
    FUN_00899210();
  }
  return;
}



void FUN_00899c20(undefined4 param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 200) == (*(uint *)(in_ECX + 0xcc) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0xc4),4);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0xc4) + *(int *)(in_ECX + 200) * 4) = param_1;
  *(int *)(in_ECX + 200) = *(int *)(in_ECX + 200) + 1;
  return;
}



void FUN_00899c60(undefined4 param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0xec) == (*(uint *)(in_ECX + 0xf0) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0xe8),4);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0xe8) + *(int *)(in_ECX + 0xec) * 4) = param_1;
  *(int *)(in_ECX + 0xec) = *(int *)(in_ECX + 0xec) + 1;
  return;
}



void FUN_00899ca0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0xd4) == (*(uint *)(in_ECX + 0xd8) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0xd0),4);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0xd0) + *(int *)(in_ECX + 0xd4) * 4) = param_1;
  *(int *)(in_ECX + 0xd4) = *(int *)(in_ECX + 0xd4) + 1;
  return;
}



void FUN_00899ce0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0xe0) == (*(uint *)(in_ECX + 0xe4) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0xdc),4);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0xdc) + *(int *)(in_ECX + 0xe0) * 4) = param_1;
  *(int *)(in_ECX + 0xe0) = *(int *)(in_ECX + 0xe0) + 1;
  return;
}



void FUN_00899d20(undefined4 param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0x110) == (*(uint *)(in_ECX + 0x114) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x10c),4);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x10c) + *(int *)(in_ECX + 0x110) * 4) = param_1;
  *(int *)(in_ECX + 0x110) = *(int *)(in_ECX + 0x110) + 1;
  return;
}



void FUN_00899d60(undefined4 param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0x14c) == (*(uint *)(in_ECX + 0x150) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x148),4);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x148) + *(int *)(in_ECX + 0x14c) * 4) = param_1;
  *(int *)(in_ECX + 0x14c) = *(int *)(in_ECX + 0x14c) + 1;
  return;
}



void FUN_00899da0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0xf8) == (*(uint *)(in_ECX + 0xfc) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0xf4),4);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0xf4) + *(int *)(in_ECX + 0xf8) * 4) = param_1;
  *(int *)(in_ECX + 0xf8) = *(int *)(in_ECX + 0xf8) + 1;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0089a230(int param_1,int param_2)

{
  float *pfVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST1;
  float10 fVar11;
  float fVar12;
  int *piVar13;
  undefined4 *puStack_340;
  char *pcStack_33c;
  undefined4 uStack_338;
  char *pcStack_334;
  char *pcStack_330;
  char *pcStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  int iStack_314;
  float fStack_30c;
  undefined1 auStack_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  *in_ECX = &PTR_FUN_00a96d6c;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0x80000000;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0x80000000;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0x80000000;
  *(undefined1 *)(in_ECX + 0x27) = 0xfd;
  *(undefined1 *)((int)in_ECX + 0x9d) = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0x80000000;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0x80000000;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0x80000000;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0x80000000;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0x80000000;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0x80000000;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0x80000000;
  in_ECX[0x43] = 0;
  in_ECX[0x44] = 0;
  in_ECX[0x45] = 0x80000000;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 0;
  in_ECX[0x48] = 0x80000000;
  in_ECX[0x49] = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0x80000000;
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0x80000000;
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0x80000000;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0x80000000;
  uStack_324 = 0x2c;
  uStack_328 = 0x28;
  pcStack_32c = (char *)0x89a38d;
  iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))();
  if (iVar5 == 0) {
    uVar6 = 0;
    uVar7 = extraout_ECX;
  }
  else {
    pcStack_330 = (char *)0x89a399;
    uVar6 = FUN_008d87a0();
    uVar7 = extraout_ECX_00;
  }
  in_ECX[0x20] = uVar6;
  in_ECX[0x25] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  *(undefined1 *)(in_ECX + 0x24) = 0;
  *(undefined1 *)((int)in_ECX + 0x91) = 1;
  in_ECX[0x26] = 1;
  in_ECX[0x28] = 0;
  if (param_2 != 0x7595) {
    pcStack_330 = (char *)0x200;
    pcStack_334 = auStack_220;
    pcStack_32c = (char *)CONCAT31((int3)((uint)uVar7 >> 8),1);
    uStack_338 = 0x89a3ff;
    FUN_008bbfb0();
    pcStack_32c = "]. **";
    pcStack_330 = (char *)param_2;
    pcStack_334 = "], used with code built with [";
    uStack_338 = 0x7595;
    pcStack_33c = "** Havok libs built with version [";
    puStack_340 = (undefined4 *)0x89a41d;
    FUN_008bbdb0();
    pcStack_33c = (char *)0x89a424;
    FUN_008bbe00();
    uStack_338 = 0x89a42b;
    FUN_008bbdb0();
    pcStack_334 = (char *)0x89a432;
    FUN_008bbe70();
    pcStack_330 = (char *)0x89a439;
    FUN_008bbdb0();
    pcStack_32c = (char *)0x859;
    pcStack_330 = ".\\world\\hkWorld.cpp";
    pcStack_334 = auStack_220;
    uStack_338 = 0x53c94b42;
    pcStack_33c = (char *)0x3;
    puStack_340 = (undefined4 *)0x89a45d;
    (**(code **)(*DAT_00ba7fb0 + 8))();
    pcStack_32c = (char *)0x89a466;
    FUN_008bc000();
  }
  in_ECX[0x2d] = 0;
  in_ECX[2] = 0;
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[9] = uVar7;
  in_ECX[10] = uVar6;
  in_ECX[0xb] = uVar4;
  *(undefined1 *)((int)in_ECX + 0xa6) = *(undefined1 *)(param_1 + 0x8c);
  in_ECX[0x2c] = *(undefined4 *)(param_1 + 0x90);
  in_ECX[0x2a] = *(undefined4 *)(param_1 + 0x84);
  in_ECX[0x2b] = *(undefined4 *)(param_1 + 0x88);
  in_ECX[0x5c] = 0x3f800000;
  in_ECX[0x5d] = *(undefined4 *)(param_1 + 0x6c);
  in_ECX[0x5e] = *(undefined4 *)(param_1 + 0x70);
  in_ECX[0x5f] = *(float *)(param_1 + 0x6c) * 0.5;
  in_ECX[0x68] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[0x9b] = *(undefined4 *)(param_1 + 0x74);
  in_ECX[0x9c] = 1.0 / (float)*(int *)(param_1 + 0x74);
  fVar12 = SQRT(*(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18) +
                *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) +
                *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10));
  fVar9 = (float10)fVar12;
  if (fVar12 == 0.0) {
    fVar9 = (float10)9.81;
  }
  fVar9 = (float10)0.1 * fVar9;
  iStack_314 = 0;
  do {
    switch(iStack_314) {
    case 0:
    case 1:
      fVar10 = (float10)1.1920929e-07;
      fStack_30c = 0.0;
      break;
    case 2:
      fVar10 = (float10)0.01;
      fStack_30c = 0.08;
      break;
    case 3:
      fVar10 = (float10)0.017;
      fStack_30c = 0.2;
      break;
    case 4:
      fVar10 = (float10)0.02;
      fStack_30c = 0.3;
      break;
    default:
      fVar10 = (float10)0.025;
      fStack_30c = 0.4;
    }
    pfVar1 = (float *)(in_ECX + iStack_314 * 8 + 0x69);
    pcStack_32c = (char *)0x89a5f9;
    fVar11 = fVar9;
    fVar12 = (float)FUN_009828f6();
    fVar9 = fVar10;
    pfVar1[4] = fVar12;
    fVar10 = (float10)1.0 / (extraout_ST1 * fVar11);
    pfVar1[2] = (float)((float10)1.0 -
                       (float10)fStack_30c * fVar10 * fVar11 * (float10)(float)in_ECX[0x9c] *
                       (float10)0.016);
    *pfVar1 = (float)fVar10;
    pfVar1[1] = (float)((float10)1.0 / (extraout_ST1 * fVar11 * fVar9));
    if (fStack_30c <= 0.0) {
      pfVar1[3] = 2.1267647e+37;
    }
    else {
      pfVar1[3] = ((float)in_ECX[0x9c] / fStack_30c) * 0.016;
    }
    iStack_314 = iStack_314 + 1;
  } while (iStack_314 < 6);
  iVar5 = *(int *)(param_1 + 0x60);
  in_ECX[0x18] = iVar5;
  if ((iVar5 != 0) && (*(short *)(iVar5 + 4) != 0)) {
    *(short *)(iVar5 + 6) = *(short *)(iVar5 + 6) + 1;
  }
  cVar2 = *(char *)(param_1 + 0x96);
  *(char *)(in_ECX + 0x29) = cVar2;
  cVar3 = *(char *)(param_1 + 0x94);
  *(char *)((int)in_ECX + 0xa5) = cVar3;
  if ((cVar2 == '\0') && (cVar3 != '\0')) {
    *(undefined1 *)((int)in_ECX + 0xa5) = 0;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  pcStack_334 = (char *)(in_ECX + 0xa0);
  *(undefined4 *)pcStack_334 = *(undefined4 *)(param_1 + 0x30);
  in_ECX[0xa1] = uVar7;
  in_ECX[0xa2] = uVar6;
  in_ECX[0xa3] = uVar4;
  uVar7 = *(undefined4 *)(param_1 + 0x44);
  uVar6 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  pcStack_330 = (char *)(in_ECX + 0xa4);
  *(undefined4 *)pcStack_330 = *(undefined4 *)(param_1 + 0x40);
  in_ECX[0xa5] = uVar7;
  in_ECX[0xa6] = uVar6;
  in_ECX[0xa7] = uVar4;
  in_ECX[0xa8] = *(undefined4 *)(param_1 + 100);
  pcStack_32c = *(char **)(param_1 + 100);
  uStack_338 = 0x89a6e4;
  uVar7 = (*(code *)PTR_FUN_00b2fc80)();
  in_ECX[0x19] = uVar7;
  iVar5 = *(int *)(param_1 + 0x20);
  in_ECX[0xa9] = iVar5;
  in_ECX[0xaa] = iVar5 / 2;
  pcStack_32c = (char *)0x24;
  pcStack_330 = (char *)0x104;
  pcStack_334 = (char *)0x89a710;
  iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))();
  if (iVar5 == 0) {
    uVar7 = 0;
  }
  else {
    pcStack_334 = (char *)0x89a71b;
    uVar7 = FUN_008d8450();
  }
  in_ECX[0x1a] = uVar7;
  pcStack_334 = (char *)0x1e;
  uStack_338 = 8;
  pcStack_33c = (char *)0x89a731;
  puVar8 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))();
  *(undefined2 *)(puVar8 + 1) = 8;
  *(undefined2 *)((int)puVar8 + 6) = 1;
  *puVar8 = &PTR_LAB_00a96aa4;
  in_ECX[0x1b] = puVar8;
  pcStack_33c = (char *)0x1e;
  puStack_340 = (undefined4 *)0xc;
  iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))();
  *(undefined2 *)(iVar5 + 4) = 0xc;
  uVar7 = FUN_008e0980(in_ECX);
  in_ECX[0x1c] = uVar7;
  *(undefined4 *)(in_ECX[0x1a] + 0x28) = in_ECX[0x1b];
  *(undefined4 *)(in_ECX[0x1a] + 0x44) = in_ECX[0x1b];
  *(undefined4 *)(in_ECX[0x1a] + 0x48) = in_ECX[0x1b];
  *(undefined4 *)(in_ECX[0x1a] + 0x24) = in_ECX[0x1c];
  piVar13 = (int *)0xc;
  iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xc,0x1f);
  *(undefined2 *)(iVar5 + 4) = 0xc;
  pcStack_334 = (char *)FUN_008dbb90(in_ECX);
  iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x1c28,0x24);
  *(undefined2 *)(iVar5 + 4) = 0x1c28;
  uVar7 = FUN_008dac20(FUN_008e0970,pcStack_33c);
  in_ECX[0x1f] = uVar7;
  if ((*(short *)((int)pcStack_33c + 4) != 0) &&
     (*(short *)((int)pcStack_33c + 6) = *(short *)((int)pcStack_33c + 6) + -1,
     *(short *)((int)pcStack_33c + 6) == 0)) {
    (*(code *)**(undefined4 **)pcStack_33c)(1);
  }
  iVar5 = *(int *)(param_1 + 0x54);
  if (iVar5 == 0) {
    puVar8 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x24);
    *(undefined2 *)(puVar8 + 1) = 0x18;
    *(undefined2 *)((int)puVar8 + 6) = 1;
    puVar8[2] = &PTR_LAB_00a95c60;
    puVar8[3] = &PTR_LAB_00a95c3c;
    puVar8[4] = &PTR_LAB_00a95c48;
    puVar8[5] = &PTR_LAB_00a95c68;
    *puVar8 = &PTR_FUN_00a96b78;
    puVar8[2] = &PTR_LAB_00a96b64;
    puVar8[3] = &PTR_LAB_00a96b70;
    puVar8[4] = &PTR_LAB_00a96b68;
    puVar8[5] = &PTR_LAB_00a96b64;
    in_ECX[0x1e] = puVar8;
  }
  else {
    in_ECX[0x1e] = iVar5;
    if (*(short *)(iVar5 + 4) != 0) {
      *(short *)(iVar5 + 6) = *(short *)(iVar5 + 6) + 1;
    }
  }
  puStack_340 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x2c,0x1c);
  in_ECX[0x1d] = puStack_340;
  *puStack_340 = in_ECX[0x1f];
  puStack_340[2] = *(undefined4 *)(param_1 + 0x50);
  if (in_ECX[0x1e] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = in_ECX[0x1e] + 0xc;
  }
  puStack_340[1] = iVar5;
  puVar8 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(8,0x1c);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    *puVar8 = 0x3c23d70a;
    puVar8[1] = 0x14;
  }
  piVar13[8] = (int)puVar8;
  *(undefined1 *)(in_ECX + 0xab) = *(undefined1 *)(param_1 + 0x68);
  *(undefined4 *)piVar13[8] = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(piVar13[8] + 4) = *(undefined4 *)(param_1 + 0x80);
  *(undefined1 *)(piVar13 + 3) = 0;
  piVar13[10] = *piVar13 + 0x1a50;
  FUN_008993f0(in_ECX[0x1f]);
  if (*(char *)(param_1 + 0x95) == (char)in_ECX[0x2d]) goto LAB_0089aac8;
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1);
  }
  cVar2 = *(char *)(param_1 + 0x95);
  in_ECX[0x2d] = (int)cVar2;
  switch((int)cVar2) {
  case 1:
    puVar8 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0xc,0x12);
    *(undefined2 *)(puVar8 + 1) = 0xc;
    *(undefined2 *)((int)puVar8 + 6) = 1;
    *puVar8 = &PTR_LAB_00a96af0;
    break;
  case 2:
    puVar8 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0xc,0x12);
    *(undefined2 *)(puVar8 + 1) = 0xc;
    *(undefined2 *)((int)puVar8 + 6) = 1;
    *puVar8 = &PTR_LAB_00a96b1c;
    break;
  case 3:
    iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x10,0x12);
    *(undefined2 *)(iVar5 + 4) = 0x10;
    puVar8 = (undefined4 *)FUN_008e0950();
    break;
  case 5:
    iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x28,0x12);
    uVar7 = 1;
    goto LAB_0089aab8;
  case 6:
    iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x28,0x12);
    uVar7 = 2;
LAB_0089aab8:
    *(undefined2 *)(iVar5 + 4) = 0x28;
    puVar8 = (undefined4 *)FUN_008d3330(uVar7);
    break;
  case 7:
    puVar8 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x2c,0x12);
    *(undefined2 *)(puVar8 + 1) = 0x2c;
    FUN_008d3330(1);
    *puVar8 = &PTR_FUN_00a96a74;
    puVar8[10] = 0;
    break;
  case 8:
    puVar8 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x2c,0x12);
    *(undefined2 *)(puVar8 + 1) = 0x2c;
    FUN_008d3330(1);
    *puVar8 = &PTR_FUN_00a96a74;
    puVar8[10] = 1;
    break;
  case 9:
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x12);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      lpCriticalSection = (LPCRITICAL_SECTION)0x0;
    }
    else {
      InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
    }
    in_ECX[0x28] = lpCriticalSection;
    iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x200,0x12);
    *(undefined2 *)(iVar5 + 4) = 0x200;
    puVar8 = (undefined4 *)FUN_008e0300(in_ECX);
    break;
  default:
    in_ECX[0x2d] = 4;
    *(undefined4 *)(param_1 + 0x95) = 4;
  case 4:
    iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x28,0x12);
    uVar7 = 0;
    goto LAB_0089aab8;
  }
  in_ECX[2] = puVar8;
LAB_0089aac8:
  uVar7 = uStack_328;
  puStack_340 = (undefined4 *)
                SQRT((float)in_ECX[10] * (float)in_ECX[10] +
                     (float)in_ECX[9] * (float)in_ECX[9] + (float)in_ECX[8] * (float)in_ECX[8]);
  if ((float)puStack_340 == 0.0) {
    puStack_340 = (undefined4 *)0x411cf5c3;
  }
  pcStack_33c = *(char **)(in_ECX[0x1d] + 8);
  pcStack_334 = *(char **)(param_1 + 0x58);
  uStack_338 = *(undefined4 *)(param_1 + 0x5c);
  uStack_328._3_1_ = SUB41(uVar7,3);
  uStack_328._0_3_ =
       CONCAT12('\0' < *(char *)(param_1 + 0x68),
                CONCAT11(*(char *)(param_1 + 0x68) == '\x02','\x03' < *(char *)(param_1 + 0x95)));
  pcStack_330 = (char *)0x20001;
  pcStack_32c = (char *)0x40003;
  FUN_008da870(&puStack_340);
  *(int *)(in_ECX[0x1d] + 0x28) = in_ECX[0x1f] + 0x1a50;
  iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x6c,0x2f);
  *(undefined2 *)(iVar5 + 4) = 0x6c;
  iVar5 = FUN_008de400(in_ECX);
  in_ECX[0xc] = iVar5;
  *(undefined2 *)(iVar5 + 0x20) = 0xffff;
  *(undefined1 *)(in_ECX[0xc] + 0x28) = 0;
  *(undefined1 *)(in_ECX[0xc] + 0x29) = 0;
  if (*(char *)(in_ECX + 0x29) == '\0') {
    iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x6c,0x2f);
    *(undefined2 *)(iVar5 + 4) = 0x6c;
    iVar5 = FUN_008de400(in_ECX);
    if (in_ECX[0xf] == (in_ECX[0x10] & 0x3fffffff)) {
      FUN_008a6ee0(in_ECX + 0xe,4);
    }
    *(int *)(in_ECX[0xe] + in_ECX[0xf] * 4) = iVar5;
    in_ECX[0xf] = in_ECX[0xf] + 1;
    *(undefined2 *)(iVar5 + 0x20) = 0;
  }
  FUN_008df420();
  (**(code **)(*DAT_00ba7fb0 + 0xc))(0x7cdcd39f,(uint)DAT_00ba7fb0 & 0xffffff00);
  iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xc4,0x2a);
  *(undefined2 *)(iVar5 + 4) = 0xc4;
  uVar7 = FUN_008a9f50(&uStack_338);
  in_ECX[0xd] = uVar7;
  (**(code **)(*DAT_00ba7fb0 + 0xc))(0x7cdcd39f,CONCAT31((int3)((uint)DAT_00ba7fb0 >> 8),1));
  FUN_008994e0(in_ECX[0xd],1);
  FUN_008bc730();
  in_ECX[0x5a] = 0;
  *(undefined4 **)(in_ECX[0x1d] + 0x24) = in_ECX + 0x58;
  if (*(char *)(param_1 + 0x28) == '\x03') {
    in_ECX[0x55] = 0;
  }
  else {
    iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x30,0xc);
    *(undefined2 *)(iVar5 + 4) = 0x30;
    uVar7 = FUN_008df080(in_ECX,(int)*(char *)(param_1 + 0x28));
    in_ECX[0x55] = uVar7;
  }
  iVar5 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x10,0x12);
  *(undefined2 *)(iVar5 + 4) = 0x10;
  piVar13 = (int *)FUN_008dec10();
  in_ECX[0x17] = piVar13;
  (**(code **)(*piVar13 + 8))();
  if (*(char *)(param_1 + 0x95) != '\t') {
    FUN_008debe0();
  }
  return;
}



void FUN_0089ad80(void)

{
  undefined4 *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  undefined4 *in_ECX;
  undefined1 uStack_1;
  
  puVar1 = (undefined4 *)in_ECX[0x17];
  *in_ECX = &PTR_FUN_00a96d6c;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)in_ECX[0x28];
  in_ECX[0x17] = 0;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    (**(code **)(*DAT_00ba7d98 + 0x14))(lpCriticalSection,0x18,0x12);
    in_ECX[0x28] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x18];
  if (puVar1 != (undefined4 *)0x0) {
    if ((*(short *)(puVar1 + 1) != 0) &&
       (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
       *(short *)((int)puVar1 + 6) == 0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x18] = 0;
  }
  iVar2 = in_ECX[0x2f];
  while (0 < iVar2) {
    FUN_00899b30(*(undefined4 *)in_ECX[0x2e]);
    iVar2 = in_ECX[0x2f];
  }
  iVar2 = in_ECX[0xf];
  while ((0 < iVar2 && (*(int *)(*(int *)in_ECX[0xe] + 0x38) != 0))) {
    FUN_008996c0(&uStack_1,**(undefined4 **)(*(int *)in_ECX[0xe] + 0x34));
    iVar2 = in_ECX[0xf];
  }
  iVar2 = in_ECX[0x12];
  while (0 < iVar2) {
    FUN_008996c0(&uStack_1,**(undefined4 **)(*(int *)in_ECX[0x11] + 0x34));
    iVar2 = in_ECX[0x12];
  }
  if (*(char *)(in_ECX + 0x29) == '\0') {
    FUN_008cb610();
    puVar1 = *(undefined4 **)(in_ECX[0xe] + -4 + in_ECX[0xf] * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xf] = in_ECX[0xf] + -1;
  }
  FUN_008996c0(&uStack_1,in_ECX[0xd]);
  in_ECX[0xd] = 0;
  iVar2 = *(int *)(in_ECX[0xc] + 0x38);
  while (0 < iVar2) {
    FUN_008996c0(&uStack_1,**(undefined4 **)(in_ECX[0xc] + 0x34));
    iVar2 = *(int *)(in_ECX[0xc] + 0x38);
  }
  FUN_008cb610();
  if ((undefined4 *)in_ECX[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xc])(1);
  }
  in_ECX[0xc] = 0;
  FUN_008dca40();
  puVar1 = (undefined4 *)in_ECX[0x19];
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x1f];
  in_ECX[0x19] = 0;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  iVar2 = in_ECX[0x1a];
  in_ECX[0x1f] = 0;
  if (iVar2 != 0) {
    FUN_008d8350();
    (**(code **)(*DAT_00ba7d98 + 0x14))(iVar2,0x104,0x24);
  }
  puVar1 = (undefined4 *)in_ECX[0x55];
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  if ((undefined4 *)in_ECX[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1b])(1);
  }
  if ((undefined4 *)in_ECX[0x1c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1c])(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x1e];
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  (**(code **)(*DAT_00ba7d98 + 0x14))(*(undefined4 *)(in_ECX[0x1d] + 0x20),8,0x1c);
  (**(code **)(*DAT_00ba7d98 + 0x14))(in_ECX[0x1d],0x2c,0x1c);
  puVar1 = (undefined4 *)in_ECX[2];
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  iVar2 = in_ECX[0x20];
  if (iVar2 != 0) {
    FUN_008d87e0();
    (**(code **)(*DAT_00ba7d98 + 0x14))(iVar2,0x28,0x2c);
  }
  if (-1 < (int)in_ECX[0x54]) {
    FUN_008a75d0(in_ECX[0x52],in_ECX[0x54] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x51]) {
    FUN_008a75d0(in_ECX[0x4f],in_ECX[0x51] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x4e]) {
    FUN_008a75d0(in_ECX[0x4c],in_ECX[0x4e] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x4b]) {
    FUN_008a75d0(in_ECX[0x49],in_ECX[0x4b] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x48]) {
    FUN_008a75d0(in_ECX[0x46],in_ECX[0x48] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x45]) {
    FUN_008a75d0(in_ECX[0x43],in_ECX[0x45] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x42]) {
    FUN_008a75d0(in_ECX[0x40],in_ECX[0x42] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x3f]) {
    FUN_008a75d0(in_ECX[0x3d],in_ECX[0x3f] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x3c]) {
    FUN_008a75d0(in_ECX[0x3a],in_ECX[0x3c] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x39]) {
    FUN_008a75d0(in_ECX[0x37],in_ECX[0x39] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x36]) {
    FUN_008a75d0(in_ECX[0x34],in_ECX[0x36] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x33]) {
    FUN_008a75d0(in_ECX[0x31],in_ECX[0x33] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x30]) {
    FUN_008a75d0(in_ECX[0x2e],in_ECX[0x30] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x16]) {
    FUN_008a75d0(in_ECX[0x14],in_ECX[0x16] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x13]) {
    FUN_008a75d0(in_ECX[0x11],in_ECX[0x13] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x10]) {
    FUN_008a75d0(in_ECX[0xe],in_ECX[0x10] << 2,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_0089b360(byte param_1)

{
  FUN_0089ad80();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0089b390(int param_1,undefined1 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int in_ECX;
  int *piVar5;
  uint uVar6;
  int unaff_EBX;
  int iVar7;
  int unaff_FS_OFFSET;
  int unaff_retaddr;
  int iVar8;
  int iVar9;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  uint local_8;
  int *local_4;
  
  iVar8 = _tls_index;
  if (*(int *)(in_ECX + 0x88) != 0) {
    local_14 = CONCAT31(local_14._1_3_,param_2);
    local_1c[0] = 0x13;
    local_18 = param_1;
    FUN_008d8830(local_1c);
    return;
  }
  iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar9 = *(int *)(iVar7 + _tls_index * 4);
  *(undefined4 *)(in_ECX + 0x88) = 1;
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar2 = "LtUpdateFilterOnPhantom";
    puVar2[3] = "broadphase";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar2 + 4;
  }
  piVar5 = *(int **)(*(int *)(iVar7 + iVar8 * 4) + 0x19c);
  uVar3 = *(uint *)(in_ECX + 0x2a4);
  local_10 = (int *)0x0;
  local_c = 0;
  local_8 = 0x80000000;
  if (piVar5 == (int *)0x0) {
    piVar5 = DAT_00ba7d9c;
  }
  local_4 = (int *)piVar5[8];
  uVar6 = uVar3 * 8 + 0x10 & 0xfffffff0;
  uVar1 = (int)local_4 + uVar6;
  if ((uint)piVar5[0xb] < uVar1) {
    local_4 = (int *)(**(code **)(*piVar5 + 0xc))(uVar6);
  }
  else {
    piVar5[8] = uVar1;
  }
  local_8 = uVar3 | 0x80000000;
  local_10 = local_4;
  (**(code **)(**(int **)(in_ECX + 100) + 0x2c))(param_1 + 0x28,&local_10);
  iVar8 = *(int *)(iVar7 + _tls_index * 4);
  if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
    puVar2 = *(undefined4 **)(unaff_EBX + 0x1a4);
    *puVar2 = "StUpdateOverlaps";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(unaff_EBX + 0x1a4) = puVar2 + 3;
  }
  iVar9 = 0;
  iVar8 = unaff_EBX;
  if (0 < local_14) {
    do {
      if (*(int *)(local_18 + 4 + iVar9 * 8) != param_1 + 0x28) {
        unaff_EBX = iVar8;
        FUN_00898760(*(undefined4 *)(in_ECX + 0x78));
        iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
        iVar8 = unaff_EBX;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_14);
  }
  if (unaff_retaddr != 0) {
    iVar8 = *(int *)(iVar7 + _tls_index * 4);
    if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
      puVar2 = *(undefined4 **)(unaff_EBX + 0x1a4);
      *puVar2 = "StcollectionFilter";
      uVar4 = rdtsc();
      puVar2[1] = (int)uVar4;
      *(undefined4 **)(unaff_EBX + 0x1a4) = puVar2 + 3;
    }
    (**(code **)(*local_4 + 0x28))();
  }
  piVar5 = (int *)(in_ECX + 0x88);
  *piVar5 = *piVar5 + -1;
  if (((*piVar5 == 0) && (*(int *)(in_ECX + 0x84) != 0)) && (*(char *)(in_ECX + 0x90) == '\0')) {
    FUN_00899210();
  }
  iVar8 = *(int *)(iVar7 + _tls_index * 4);
  if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
    puVar2 = *(undefined4 **)(unaff_EBX + 0x1a4);
    *puVar2 = &DAT_00a6a630;
    uVar4 = rdtsc();
    local_4 = (int *)uVar4;
    puVar2[1] = local_4;
    *(undefined4 **)(unaff_EBX + 0x1a4) = puVar2 + 3;
  }
  piVar5 = *(int **)(unaff_EBX + 0x19c);
  if (*(int **)(unaff_EBX + 0x19c) == (int *)0x0) {
    piVar5 = DAT_00ba7d9c;
  }
  piVar5[8] = local_c;
  if (local_c == piVar5[10]) {
    (**(code **)(*piVar5 + 0x10))(local_c);
  }
  if (-1 < (int)local_10) {
    FUN_008a75d0(local_18,(int)local_10 << 3,0x14);
  }
  return;
}



void FUN_0089b630(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  int iVar8;
  int unaff_FS_OFFSET;
  undefined1 uStack_829;
  undefined1 local_828 [4];
  int local_824;
  undefined1 local_820;
  undefined1 local_81f;
  undefined1 *local_818;
  int local_814;
  int local_810;
  undefined1 local_80c [1024];
  undefined1 *puStack_40c;
  uint uStack_408;
  uint uStack_404;
  undefined1 auStack_400 [1024];
  
  iVar6 = _tls_index;
  if (*(int *)(in_ECX + 0x88) != 0) {
    local_824 = param_1;
    local_820 = (undefined1)param_2;
    local_828[0] = 0x12;
    local_81f = (undefined1)param_3;
    FUN_008d8830(local_828);
    return;
  }
  iVar8 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar4 = *(int *)(iVar8 + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar2 = "LtUpdateFilterOnEntity";
    puVar2[3] = &DAT_00a96df4;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar2 + 4;
  }
  local_818 = local_80c;
  *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
  local_814 = 0;
  local_810 = -0x7fffff80;
  if (param_2 == 0) {
    iVar4 = *(int *)(iVar8 + iVar6 * 4);
    if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
      puVar2 = *(undefined4 **)(iVar4 + 0x1a4);
      *puVar2 = "Stbroadphase";
      uVar3 = rdtsc();
      puVar2[1] = (int)uVar3;
      *(undefined4 **)(iVar4 + 0x1a4) = puVar2 + 3;
    }
    (**(code **)(**(int **)(in_ECX + 100) + 0x2c))(param_1 + 0x28,&local_818);
    iVar6 = *(int *)(iVar8 + iVar6 * 4);
    if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
      puVar2 = *(undefined4 **)(iVar6 + 0x1a4);
      *puVar2 = "Stphantom";
      uVar3 = rdtsc();
      puVar2[1] = (int)uVar3;
      *(undefined4 **)(iVar6 + 0x1a4) = puVar2 + 3;
    }
    iVar6 = 0;
    if (0 < local_814) {
      do {
        iVar4 = (int)*(char *)(*(int *)(local_818 + iVar6 * 8 + 4) + 5) +
                *(int *)(local_818 + iVar6 * 8 + 4);
        if (*(char *)(iVar4 + 0x18) == '\x02') {
          piVar7 = (int *)(*(int *)(iVar4 + 0x10) + iVar4);
          if (piVar7 != (int *)0x0) {
            FUN_00898760(*(undefined4 *)(in_ECX + 0x78));
            if (param_3 != 0) {
              (**(code **)(*piVar7 + 0x28))();
            }
            local_814 = local_814 + -1;
            *(undefined4 *)(local_818 + iVar6 * 8) = *(undefined4 *)(local_818 + local_814 * 8);
            *(undefined4 *)(local_818 + iVar6 * 8 + 4) =
                 *(undefined4 *)(local_818 + local_814 * 8 + 4);
            iVar6 = iVar6 + -1;
          }
          iVar8 = *(int *)(unaff_FS_OFFSET + 0x2c);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_814);
    }
    puStack_40c = auStack_400;
    iVar6 = 0;
    uStack_408 = 0;
    uStack_404 = 0x80000080;
    if (0 < *(int *)(param_1 + 0x3c)) {
      do {
        if (uStack_408 == (uStack_404 & 0x3fffffff)) {
          FUN_008a6ee0(&puStack_40c,8);
        }
        iVar4 = uStack_408 * 8;
        uStack_408 = uStack_408 + 1;
        *(int *)(puStack_40c + iVar4) =
             *(int *)(*(int *)(*(int *)(param_1 + 0x38) + iVar6 * 8) + 0x14) + 0x14;
        *(int *)((int)(puStack_40c + iVar4) + 4) =
             *(int *)(*(int *)(*(int *)(param_1 + 0x38) + iVar6 * 8) + 0x18) + 0x14;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x3c));
    }
    FUN_008d84f0(&puStack_40c,&local_818);
    iVar6 = _tls_index;
    if (-1 < (int)uStack_404) {
      FUN_008a75d0(puStack_40c,uStack_404 << 3,0x14);
      iVar6 = _tls_index;
    }
  }
  iVar6 = *(int *)(iVar8 + iVar6 * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar2 = "StcheckAgts";
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar2 + 3;
  }
  uVar1 = *(ushort *)(param_1 + 0x2e);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x38) + iVar6 * 8);
      pcVar5 = (char *)(*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x78) + 8))
                                 (&uStack_829,param_1 + 0x14,puVar2[1]);
      if ((*pcVar5 == '\0') ||
         (*(char *)((uint)*(ushort *)(puVar2[1] + 0x1a) + (uint)uVar1 * 8 + 0x19d4 +
                   *(int *)(in_ECX + 0x7c)) == '\0')) {
        FUN_008e7920(*puVar2);
        iVar6 = iVar6 + -1;
        *(undefined1 *)(*(int *)(param_1 + 0x54) + 0x26) = 1;
      }
      else if (param_3 == 1) {
        FUN_008e6560(*puVar2,*(undefined4 *)(in_ECX + 0x74));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x3c));
    iVar8 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar6 = _tls_index;
  if (0 < local_814) {
    iVar4 = *(int *)(iVar8 + _tls_index * 4);
    if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
      puVar2 = *(undefined4 **)(iVar4 + 0x1a4);
      *puVar2 = "StaddAgts";
      uVar3 = rdtsc();
      puVar2[1] = (int)uVar3;
      *(undefined4 **)(iVar4 + 0x1a4) = puVar2 + 3;
    }
    if (*(int *)(in_ECX + 0x78) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(in_ECX + 0x78) + 8;
    }
    FUN_008d8370(local_818,local_814,iVar4);
  }
  piVar7 = (int *)(in_ECX + 0x88);
  *piVar7 = *piVar7 + -1;
  if (((*piVar7 == 0) && (*(int *)(in_ECX + 0x84) != 0)) && (*(char *)(in_ECX + 0x90) == '\0')) {
    FUN_00899210();
  }
  if (-1 < local_810) {
    FUN_008a75d0(local_818,local_810 << 3,0x14);
  }
  iVar6 = *(int *)(iVar8 + iVar6 * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar2 = &DAT_00a6a630;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar2 + 3;
  }
  return;
}



int * FUN_0089bae0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  int unaff_ESI;
  int iVar7;
  int *unaff_retaddr;
  undefined1 local_24;
  undefined3 uStack_23;
  int *local_20;
  undefined1 *local_1c;
  int local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  iVar7 = 0;
  if (*(int *)(in_ECX + 0x88) != 0) {
    _local_24 = CONCAT31((int3)((uint)in_ECX >> 8),10);
    local_20 = param_1;
    FUN_008d8830(&local_24);
    return (int *)0x0;
  }
  if ((short)param_1[1] != 0) {
    *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
  }
  *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
  local_1c = local_10;
  local_18 = 0;
  local_14 = 0x80000004;
  (**(code **)(*param_1 + 0xc))(&local_1c);
  iVar6 = 0;
  param_1[2] = in_ECX;
  if (0 < (int)local_1c) {
    do {
      iVar2 = *(int *)((int)local_20 + iVar7 * 4);
      iVar3 = *(int *)(iVar2 + 0x54);
      piVar1 = (int *)(iVar2 + 0xb8);
      iVar4 = 0;
      if (0 < *(int *)(iVar2 + 0xbc)) {
        piVar5 = (int *)*piVar1;
        do {
          if (*piVar5 == 0) {
            if (-1 < iVar4) {
              *(int **)(*piVar1 + iVar4 * 4) = unaff_retaddr;
              goto LAB_0089bbc6;
            }
            break;
          }
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar4 < *(int *)(iVar2 + 0xbc));
      }
      if (*(uint *)(iVar2 + 0xbc) == (*(uint *)(iVar2 + 0xc0) & 0x3fffffff)) {
        FUN_008a6ee0(piVar1,4);
      }
      *(int **)(*piVar1 + *(int *)(iVar2 + 0xbc) * 4) = unaff_retaddr;
      *(int *)(iVar2 + 0xbc) = *(int *)(iVar2 + 0xbc) + 1;
LAB_0089bbc6:
      if (*(short *)(iVar3 + 0x20) != -1) {
        if (iVar6 == 0) {
          iVar6 = *(int *)((int)local_20 + iVar7 * 4);
          FUN_008de080(unaff_retaddr);
        }
        else {
          iVar2 = *(int *)((int)local_20 + iVar7 * 4);
          if (*(int *)(iVar6 + 0x54) != *(int *)(iVar2 + 0x54)) {
            FUN_008cd320(unaff_ESI,iVar6,iVar2);
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)local_1c);
    param_1 = unaff_retaddr;
    in_ECX = unaff_ESI;
    if (iVar6 != 0) goto LAB_0089bc3c;
  }
  FUN_008de080(param_1);
  unaff_retaddr = param_1;
LAB_0089bc3c:
  piVar1 = (int *)(in_ECX + 0x88);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (*(int *)(in_ECX + 0x84) != 0)) && (*(char *)(in_ECX + 0x90) == '\0')) {
    FUN_00899210();
  }
  FUN_008dc260(in_ECX,unaff_retaddr);
  if (-1 < local_18) {
    FUN_008a75d0(local_20,local_18 << 2,0x14);
  }
  return unaff_retaddr;
}



void FUN_0089bcc0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  int unaff_EBX;
  int iVar5;
  undefined1 *local_1c;
  int local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  iVar5 = 0;
  if ((short)param_1[1] != 0) {
    *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
  }
  *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
  FUN_008dc2f0();
  local_1c = local_10;
  local_18 = 0;
  local_14 = 0x80000004;
  (**(code **)(*param_1 + 0xc))(&local_1c);
  if (0 < (int)local_1c) {
    do {
      iVar2 = *(int *)(unaff_EBX + iVar5 * 4);
      iVar3 = 0;
      if (0 < *(int *)(iVar2 + 0xbc)) {
        puVar4 = *(undefined4 **)(iVar2 + 0xb8);
        do {
          if ((int *)*puVar4 == param_1) goto LAB_0089bd4f;
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar3 < *(int *)(iVar2 + 0xbc));
      }
      iVar3 = -1;
LAB_0089bd4f:
      *(undefined4 *)(*(int *)(iVar2 + 0xb8) + iVar3 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)local_1c);
  }
  iVar5 = param_1[3];
  FUN_008ddc90(param_1);
  param_1[2] = 0;
  if (((short)param_1[1] != 0) &&
     (*(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + -1,
     *(short *)((int)param_1 + 6) == 0)) {
    (**(code **)*param_1)(1);
  }
  iVar2 = *(int *)(iVar5 + 0x1c);
  if (*(short *)(iVar5 + 0x22) == -1) {
    *(undefined2 *)(iVar5 + 0x22) = *(undefined2 *)(iVar2 + 0x54);
    if (*(uint *)(iVar2 + 0x54) == (*(uint *)(iVar2 + 0x58) & 0x3fffffff)) {
      FUN_008a6ee0((int *)(iVar2 + 0x50),4);
    }
    *(int *)(*(int *)(iVar2 + 0x50) + *(int *)(iVar2 + 0x54) * 4) = iVar5;
    *(int *)(iVar2 + 0x54) = *(int *)(iVar2 + 0x54) + 1;
  }
  if (-1 < local_18) {
    FUN_008a75d0(unaff_EBX,local_18 << 2,0x14);
  }
  piVar1 = (int *)(in_ECX + 0x88);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (*(int *)(in_ECX + 0x84) != 0)) && (*(char *)(in_ECX + 0x90) == '\0')) {
    FUN_00899210();
  }
  if (((short)param_1[1] != 0) &&
     (*(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + -1,
     *(short *)((int)param_1 + 6) == 0)) {
    (**(code **)*param_1)(1);
  }
  return;
}



void FUN_0089be60(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBX;
  int iVar4;
  undefined1 *local_1c;
  int local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  iVar4 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0xbc)) {
    piVar3 = *(int **)(param_2 + 0xb8);
    do {
      if ((int *)*piVar3 == param_1) goto LAB_0089be92;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_2 + 0xbc));
  }
  iVar2 = -1;
LAB_0089be92:
  *(undefined4 *)(*(int *)(param_2 + 0xb8) + iVar2 * 4) = 0;
  *(undefined1 *)(*(int *)(param_2 + 0x54) + 0x26) = 1;
  local_1c = local_10;
  local_18 = 0;
  local_14 = 0x80000004;
  (**(code **)(*param_1 + 0xc))(&local_1c);
  iVar2 = 0;
  if (0 < (int)local_1c) {
    do {
      iVar1 = *(int *)(unaff_EBX + iVar2 * 4);
      if ((iVar1 != param_2) && (iVar4 = *(int *)(iVar1 + 0x54), *(short *)(iVar4 + 0x20) != -1))
      break;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)local_1c);
  }
  if (iVar4 != param_1[3]) {
    FUN_008ddc90(param_1);
    FUN_008de080(param_1);
  }
  if (-1 < local_18) {
    FUN_008a75d0(unaff_EBX,local_18 << 2,0x14);
  }
  return;
}



void FUN_0089bf50(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int unaff_FS_OFFSET;
  int local_ac;
  undefined4 local_a8;
  int local_a0;
  undefined1 local_99;
  int *local_98;
  int local_94 [2];
  undefined1 *local_8c;
  uint local_88;
  uint local_84;
  undefined1 local_80 [128];
  
  if (*(int *)(in_ECX + 0x88) == 0) {
    iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    *(undefined1 *)(in_ECX + 0x90) = 1;
    if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
      puVar1 = *(undefined4 **)(iVar8 + 0x1a4);
      *puVar1 = "TtUpdateFilterOnWorld";
      uVar2 = rdtsc();
      local_a0 = (int)uVar2;
      puVar1[1] = local_a0;
      *(undefined4 **)(iVar8 + 0x1a4) = puVar1 + 3;
    }
    if (param_1 == 0) {
      local_ac = 0;
      if (0 < *(int *)(in_ECX + 0x3c)) {
        do {
          iVar8 = *(int *)(*(int *)(in_ECX + 0x38) + local_ac * 4);
          iVar10 = 0;
          if (0 < *(int *)(iVar8 + 0x38)) {
            do {
              FUN_0089b630(*(undefined4 *)(*(int *)(iVar8 + 0x34) + iVar10 * 4),0,param_2);
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(iVar8 + 0x38));
          }
          local_ac = local_ac + 1;
        } while (local_ac < *(int *)(in_ECX + 0x3c));
      }
      local_ac = 0;
      if (0 < *(int *)(in_ECX + 0x48)) {
        do {
          iVar8 = *(int *)(*(int *)(in_ECX + 0x44) + local_ac * 4);
          iVar10 = 0;
          if (0 < *(int *)(iVar8 + 0x38)) {
            do {
              FUN_0089b630(*(undefined4 *)(*(int *)(iVar8 + 0x34) + iVar10 * 4),0,param_2);
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(iVar8 + 0x38));
          }
          local_ac = local_ac + 1;
        } while (local_ac < *(int *)(in_ECX + 0x48));
      }
      iVar8 = 0;
      if (0 < *(int *)(in_ECX + 0xbc)) {
        do {
          FUN_0089b390(*(undefined4 *)(*(int *)(in_ECX + 0xb8) + iVar8 * 4),param_2);
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(in_ECX + 0xbc));
      }
    }
    else {
      *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
      local_94[0] = in_ECX + 0x38;
      local_94[1] = in_ECX + 0x44;
      local_a0 = 0;
      do {
        piVar9 = (int *)local_94[local_a0];
        local_8c = local_80;
        uVar6 = 0x80000020;
        local_88 = 0;
        local_84 = 0x80000020;
        local_ac = 0;
        local_98 = piVar9;
        if (0 < piVar9[1]) {
          do {
            iVar8 = *(int *)(*piVar9 + local_ac * 4);
            uVar4 = 0;
            local_88 = 0;
            iVar10 = *(int *)(iVar8 + 0x48);
            iVar5 = 0;
            if (0 < iVar10) {
              do {
                uVar6 = *(uint *)(*(int *)(iVar8 + 0x44) + iVar5 * 4);
                if (iVar5 + 1 == iVar10) {
                  uVar7 = *(uint *)(iVar8 + 0x54);
                }
                else {
                  uVar7 = (uint)*(ushort *)(iVar8 + 0x5a);
                }
                uVar7 = uVar7 + uVar6;
                iVar5 = iVar5 + 1;
                for (; local_a8 = iVar5, uVar6 < uVar7; uVar6 = uVar6 + *(byte *)(uVar6 + 3)) {
                  pcVar3 = (char *)(*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x78) + 8))
                                             (&local_99,*(undefined4 *)(uVar6 + 0x14),
                                              *(undefined4 *)(uVar6 + 0x18));
                  if ((*pcVar3 == '\0') ||
                     (*(char *)((uint)*(ushort *)(*(int *)(uVar6 + 0x18) + 0x1a) +
                                (uint)*(ushort *)(*(int *)(uVar6 + 0x14) + 0x1a) * 8 + 0x19d4 +
                               *(int *)(in_ECX + 0x7c)) == '\0')) {
                    if (local_88 == (local_84 & 0x3fffffff)) {
                      FUN_008a6ee0(&local_8c,4);
                    }
                    *(uint *)(local_8c + local_88 * 4) = uVar6;
                    local_88 = local_88 + 1;
                    *(undefined1 *)(iVar8 + 0x26) = 1;
                  }
                  else if (param_2 == 1) {
                    FUN_008e6560(uVar6,*(undefined4 *)(in_ECX + 0x74));
                  }
                  iVar5 = local_a8;
                  uVar4 = local_88;
                }
                iVar10 = *(int *)(iVar8 + 0x48);
                piVar9 = local_98;
                uVar6 = local_84;
              } while (iVar5 < iVar10);
              while (local_98 = piVar9, local_84 = uVar6, uVar4 != 0) {
                local_88 = uVar4 - 1;
                FUN_008e7920(*(undefined4 *)(local_8c + uVar4 * 4 + -4));
                piVar9 = local_98;
                uVar6 = local_84;
                uVar4 = local_88;
              }
            }
            local_ac = local_ac + 1;
          } while (local_ac < piVar9[1]);
        }
        iVar8 = local_a0;
        if (-1 < (int)uVar6) {
          FUN_008a75d0(local_8c,uVar6 << 2,0x14);
        }
        local_a0 = iVar8 + 1;
      } while (local_a0 < 2);
      *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + -1;
    }
    *(undefined1 *)(in_ECX + 0x90) = 0;
    if ((*(int *)(in_ECX + 0x88) == 0) && (*(int *)(in_ECX + 0x84) != 0)) {
      FUN_00899210();
    }
    iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
      puVar1 = *(undefined4 **)(iVar8 + 0x1a4);
      *puVar1 = &DAT_00a9610c;
      uVar2 = rdtsc();
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar8 + 0x1a4) = puVar1 + 3;
    }
    return;
  }
  local_a8 = CONCAT22(CONCAT11(local_a8._3_1_,(undefined1)param_2),
                      CONCAT11((undefined1)param_1,0x14));
  FUN_008d8830(&local_a8);
  return;
}



void FUN_0089c310(int param_1,uint param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int in_ECX;
  int *piVar11;
  int unaff_EBX;
  uint uVar12;
  int iVar13;
  int unaff_FS_OFFSET;
  undefined1 local_40 [4];
  int local_3c;
  undefined2 local_38;
  undefined1 local_36;
  int iStack_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int aiStack_10 [4];
  
  iVar13 = _tls_index;
  if (param_2 != 0) {
    if (*(int *)(in_ECX + 0x88) != 0) {
      local_38 = (undefined2)param_2;
      local_3c = param_1;
      local_40[0] = 6;
      local_36 = (undefined1)param_3;
      FUN_008d8830(local_40);
      return;
    }
    iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
    iVar9 = *(int *)(iVar7 + _tls_index * 4);
    if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
      puVar8 = *(undefined4 **)(iVar9 + 0x1a4);
      *puVar8 = "LtAddEntities";
      puVar8[3] = &DAT_00a96df4;
      uVar3 = rdtsc();
      puVar8[1] = (int)uVar3;
      *(undefined4 **)(iVar9 + 0x1a4) = puVar8 + 4;
    }
    iVar13 = *(int *)(iVar7 + iVar13 * 4);
    *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0x80000000;
    piVar11 = *(int **)(iVar13 + 0x19c);
    if (*(int **)(iVar13 + 0x19c) == (int *)0x0) {
      piVar11 = DAT_00ba7d9c;
    }
    local_24 = piVar11[8];
    uVar6 = param_2 * 4 + 0x10 & 0xfffffff0;
    uVar12 = local_24 + uVar6;
    if ((uint)piVar11[0xb] < uVar12) {
      local_24 = (**(code **)(*piVar11 + 0xc))(uVar6);
    }
    else {
      piVar11[8] = uVar12;
    }
    uVar12 = param_2 | 0x80000000;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0x80000000;
    piVar11 = *(int **)(iVar13 + 0x19c);
    if (*(int **)(iVar13 + 0x19c) == (int *)0x0) {
      piVar11 = DAT_00ba7d9c;
    }
    local_14 = piVar11[8];
    iVar7 = param_2 * 0x20 + 0x10;
    uVar6 = local_14 + iVar7;
    local_30 = local_24;
    local_28 = uVar12;
    if ((uint)piVar11[0xb] < uVar6) {
      local_14 = (**(code **)(*piVar11 + 0xc))(iVar7);
    }
    else {
      piVar11[8] = uVar6;
    }
    bVar4 = false;
    local_20 = local_14;
    local_18 = uVar12;
    if (*(char *)(in_ECX + 0xa4) == '\0') {
      puVar8 = (undefined4 *)**(int **)(in_ECX + 0x38);
      iVar7 = puVar8[0xe] + param_2;
      if ((int)(puVar8[0xf] & 0x3fffffff) < iVar7) {
        iVar9 = (puVar8[0xf] & 0x3fffffff) * 2;
        if (iVar7 < iVar9) {
          iVar7 = iVar9;
        }
        FUN_008a6e40(puVar8 + 0xd,iVar7,4);
      }
    }
    else {
      iVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x6c,0x2f);
      *(undefined2 *)(iVar7 + 4) = 0x6c;
      puVar8 = (undefined4 *)FUN_008de400(in_ECX);
      if (param_3 == 1) {
        *(undefined2 *)(puVar8 + 8) = *(undefined2 *)(in_ECX + 0x3c);
        *(undefined1 *)((int)puVar8 + 0x26) = 1;
        *(undefined1 *)((int)puVar8 + 0x29) = 1;
        *(undefined1 *)(puVar8 + 10) = 1;
      }
      else {
        *(undefined2 *)(puVar8 + 8) = *(undefined2 *)(in_ECX + 0x48);
        *(undefined1 *)((int)puVar8 + 0x26) = 1;
        *(undefined1 *)((int)puVar8 + 0x29) = 0;
        *(undefined1 *)(puVar8 + 10) = 0;
      }
    }
    fVar1 = *(float *)(*(int *)(in_ECX + 0x74) + 8);
    iVar7 = 0;
    if (0 < (int)param_2) {
      do {
        piVar11 = *(int **)(param_1 + iVar7 * 4);
        FUN_008bc720();
        if (piVar11[7] == 0) {
          iVar9 = (**(code **)(*piVar11 + 0xc))();
          piVar11[7] = iVar9;
        }
        FUN_008dd0c0(0,0,piVar11[0x14] + 0x10);
        piVar11[2] = in_ECX;
        if (*(char *)((int)piVar11 + 0x91) == '\0') {
          bVar4 = true;
        }
        FUN_008dde30(piVar11);
        if (piVar11[5] != 0) {
          iVar9 = local_1c * 0x20;
          local_1c = local_1c + 1;
          (**(code **)(*(int *)piVar11[5] + 0xc))(piVar11[7],fVar1 * 0.5,iVar9 + local_20);
          *(int **)(local_30 + local_2c * 4) = piVar11 + 10;
          local_2c = local_2c + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_2);
    }
    if (*(char *)(in_ECX + 0xa4) != '\0') {
      if (bVar4) {
        piVar11 = (int *)(in_ECX + 0x38);
        if (param_3 != 1) {
          piVar11 = (int *)(in_ECX + 0x44);
        }
        if (piVar11[1] == (piVar11[2] & 0x3fffffffU)) {
          FUN_008a6ee0(piVar11,4);
        }
        *(undefined4 **)(*piVar11 + piVar11[1] * 4) = puVar8;
        piVar11[1] = piVar11[1] + 1;
      }
      else {
        (**(code **)*puVar8)(1);
      }
    }
    uVar12 = *(uint *)(in_ECX + 0x2a4);
    aiStack_10[0] = 0;
    aiStack_10[1] = 0;
    aiStack_10[2] = 0x80000000;
    piVar11 = *(int **)(iVar13 + 0x19c);
    if (*(int **)(iVar13 + 0x19c) == (int *)0x0) {
      piVar11 = DAT_00ba7d9c;
    }
    aiStack_10[3] = piVar11[8];
    uVar10 = uVar12 * 8 + 0x10 & 0xfffffff0;
    uVar6 = aiStack_10[3] + uVar10;
    if ((uint)piVar11[0xb] < uVar6) {
      aiStack_10[3] = (**(code **)(*piVar11 + 0xc))(uVar10);
    }
    else {
      piVar11[8] = uVar6;
    }
    iVar5 = _tls_index;
    aiStack_10[2] = uVar12 | 0x80000000;
    iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
    iVar9 = *(int *)(iVar7 + _tls_index * 4);
    if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
      puVar8 = *(undefined4 **)(iVar13 + 0x1a4);
      *puVar8 = "StBroadphase";
      uVar3 = rdtsc();
      puVar8[1] = (int)uVar3;
      *(undefined4 **)(iVar13 + 0x1a4) = puVar8 + 3;
    }
    aiStack_10[0] = aiStack_10[3];
    (**(code **)(**(int **)(in_ECX + 100) + 0xc))(&local_30,&local_20,aiStack_10);
    iVar9 = *(int *)(iVar7 + iVar5 * 4);
    if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
      puVar8 = *(undefined4 **)(iVar13 + 0x1a4);
      *puVar8 = "StCreateAgents";
      uVar3 = rdtsc();
      puVar8[1] = (int)uVar3;
      *(undefined4 **)(iVar13 + 0x1a4) = puVar8 + 3;
    }
    if (*(int *)(in_ECX + 0x78) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(in_ECX + 0x78) + 8;
    }
    FUN_008d8370(local_1c,local_18,iVar9);
    iVar9 = aiStack_10[3];
    iVar7 = *(int *)(iVar7 + iVar5 * 4);
    if (*(uint *)(iVar7 + 0x1a4) < *(uint *)(iVar7 + 0x1a8)) {
      puVar8 = *(undefined4 **)(iVar13 + 0x1a4);
      *puVar8 = "StAddedCb";
      uVar3 = rdtsc();
      puVar8[1] = (int)uVar3;
      *(undefined4 **)(iVar13 + 0x1a4) = puVar8 + 3;
    }
    iVar13 = 0;
    if (0 < aiStack_10[3]) {
      do {
        uVar2 = *(undefined4 *)(aiStack_10[2] + iVar13 * 4);
        FUN_008dc380();
        FUN_008dbef0(uVar2);
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar9);
    }
    piVar11 = (int *)(in_ECX + 0x88);
    *piVar11 = *piVar11 + -1;
    if (((*piVar11 == 0) && (*(int *)(in_ECX + 0x84) != 0)) && (*(char *)(in_ECX + 0x90) == '\0')) {
      FUN_00899210();
    }
    iVar13 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar13 + 0x1a4) < *(uint *)(iVar13 + 0x1a8)) {
      puVar8 = *(undefined4 **)(unaff_EBX + 0x1a4);
      *puVar8 = &DAT_00a6a630;
      uVar3 = rdtsc();
      aiStack_10[3] = (int)uVar3;
      puVar8[1] = aiStack_10[3];
      *(undefined4 **)(unaff_EBX + 0x1a4) = puVar8 + 3;
    }
    piVar11 = *(int **)(unaff_EBX + 0x19c);
    if (*(int **)(unaff_EBX + 0x19c) == (int *)0x0) {
      piVar11 = DAT_00ba7d9c;
    }
    piVar11[8] = aiStack_10[0];
    if (aiStack_10[0] == piVar11[10]) {
      (**(code **)(*piVar11 + 0x10))(aiStack_10[0]);
    }
    if (-1 < local_14) {
      FUN_008a75d0(local_1c,local_14 << 3,0x14);
    }
    piVar11 = *(int **)(unaff_EBX + 0x19c);
    if (*(int **)(unaff_EBX + 0x19c) == (int *)0x0) {
      piVar11 = DAT_00ba7d9c;
    }
    piVar11[8] = local_20;
    if (local_20 == piVar11[10]) {
      (**(code **)(*piVar11 + 0x10))(local_20);
    }
    if (-1 < local_24) {
      FUN_008a75d0(local_2c,local_24 << 5,0x14);
    }
    piVar11 = *(int **)(unaff_EBX + 0x19c);
    if (*(int **)(unaff_EBX + 0x19c) == (int *)0x0) {
      piVar11 = DAT_00ba7d9c;
    }
    piVar11[8] = local_30;
    if (local_30 == piVar11[10]) {
      (**(code **)(*piVar11 + 0x10))(local_30);
    }
    if (-1 < iStack_34) {
      FUN_008a75d0(local_3c,iStack_34 << 2,0x14);
    }
  }
  return;
}



void FUN_0089c8e0(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int in_ECX;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int unaff_EDI;
  int unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  undefined4 local_28;
  int local_20;
  int *local_1c;
  uint local_18;
  int local_14;
  int *local_10;
  int local_c;
  uint local_8;
  int *local_4;
  
  iVar9 = _tls_index;
  if (0 < (int)param_2) {
    if (*(int *)(in_ECX + 0x88) != 0) {
      local_20 = CONCAT31(local_20._1_3_,7);
      local_1c = param_1;
      local_18 = CONCAT22(local_18._2_2_,(short)param_2);
      FUN_008d8830(&local_20);
      return;
    }
    iVar2 = *(int *)(unaff_FS_OFFSET + 0x2c);
    iVar3 = *(int *)(iVar2 + _tls_index * 4);
    *(undefined4 *)(in_ECX + 0x88) = 1;
    if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
      puVar4 = *(undefined4 **)(iVar3 + 0x1a4);
      *puVar4 = "LtRemEntities";
      puVar4[3] = "Init+CallBck";
      uVar5 = rdtsc();
      puVar4[1] = (int)uVar5;
      *(undefined4 **)(iVar3 + 0x1a4) = puVar4 + 4;
      iVar9 = _tls_index;
    }
    piVar11 = *(int **)(iVar2 + iVar9 * 4);
    local_10 = (int *)0x0;
    local_c = 0;
    local_8 = 0x80000000;
    piVar8 = (int *)piVar11[0x67];
    if ((int *)piVar11[0x67] == (int *)0x0) {
      piVar8 = DAT_00ba7d9c;
    }
    local_4 = (int *)piVar8[8];
    uVar6 = param_2 * 4 + 0x10 & 0xfffffff0;
    uVar1 = (int)local_4 + uVar6;
    if ((uint)piVar8[0xb] < uVar1) {
      local_4 = (int *)(**(code **)(*piVar8 + 0xc))(uVar6);
    }
    else {
      piVar8[8] = uVar1;
    }
    local_8 = param_2 | 0x80000000;
    piVar8 = param_1 + param_2;
    for (; param_1 != piVar8; param_1 = param_1 + 1) {
      if (*(int *)(*param_1 + 0x14) != 0) {
        local_4[local_c] = *param_1 + 0x28;
        local_c = local_c + 1;
      }
    }
    iVar9 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
      puVar4 = (undefined4 *)piVar11[0x69];
      *puVar4 = "StBroadPhase";
      uVar5 = rdtsc();
      local_28 = (undefined4)uVar5;
      puVar4[1] = local_28;
      piVar11[0x69] = (int)(puVar4 + 3);
    }
    uVar1 = *(uint *)(in_ECX + 0x2a4);
    local_20 = 0;
    local_1c = (int *)0x0;
    local_18 = 0x80000000;
    piVar10 = (int *)piVar11[0x67];
    if ((int *)piVar11[0x67] == (int *)0x0) {
      piVar10 = DAT_00ba7d9c;
    }
    local_14 = piVar10[8];
    uVar7 = uVar1 * 8 + 0x10 & 0xfffffff0;
    uVar6 = local_14 + uVar7;
    local_10 = local_4;
    if ((uint)piVar10[0xb] < uVar6) {
      local_14 = (**(code **)(*piVar10 + 0xc))(uVar7);
    }
    else {
      piVar10[8] = uVar6;
    }
    local_18 = uVar1 | 0x80000000;
    local_20 = local_14;
    (**(code **)(**(int **)(in_ECX + 100) + 0x14))(&local_10,&local_20);
    iVar3 = _tls_index;
    iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
    iVar2 = *(int *)(iVar9 + _tls_index * 4);
    if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
      puVar4 = *(undefined4 **)(unaff_EDI + 0x1a4);
      *puVar4 = "StDelAgents";
      uVar5 = rdtsc();
      puVar4[1] = (int)uVar5;
      *(undefined4 **)(unaff_EDI + 0x1a4) = puVar4 + 3;
    }
    FUN_008d83e0(local_28,piVar8);
    piVar8 = *(int **)(unaff_EDI + 0x19c);
    if (*(int **)(unaff_EDI + 0x19c) == (int *)0x0) {
      piVar8 = DAT_00ba7d9c;
    }
    piVar8[8] = (int)local_1c;
    if (local_1c == (int *)piVar8[10]) {
      (**(code **)(*piVar8 + 0x10))(local_1c);
    }
    if (-1 < local_20) {
      FUN_008a75d0(local_28,local_20 << 3,0x14);
    }
    if (3 < *(int *)(in_ECX + 0xb4)) {
      FUN_008d3690(local_4,unaff_retaddr);
    }
    iVar9 = *(int *)(iVar9 + iVar3 * 4);
    piVar8 = local_4;
    if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
      puVar4 = *(undefined4 **)(unaff_EDI + 0x1a4);
      *puVar4 = "StRemoveCb";
      uVar5 = rdtsc();
      puVar4[1] = (int)uVar5;
      *(undefined4 **)(unaff_EDI + 0x1a4) = puVar4 + 3;
    }
    for (; piVar8 != piVar11; piVar8 = piVar8 + 1) {
      FUN_008dc410();
      FUN_008dc1c0(*piVar8);
      FUN_008cbe90();
      if ((short)((int *)*piVar8)[1] == 0) {
        (**(code **)(*(int *)*piVar8 + 0x10))();
      }
      FUN_008bc730();
    }
    iVar9 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
      puVar4 = *(undefined4 **)(unaff_EDI + 0x1a4);
      *puVar4 = &DAT_00a6a630;
      uVar5 = rdtsc();
      local_4 = (int *)uVar5;
      puVar4[1] = local_4;
      *(undefined4 **)(unaff_EDI + 0x1a4) = puVar4 + 3;
    }
    piVar11 = (int *)(in_ECX + 0x88);
    *piVar11 = *piVar11 + -1;
    if (((*piVar11 == 0) && (*(int *)(in_ECX + 0x84) != 0)) && (*(char *)(in_ECX + 0x90) == '\0')) {
      FUN_00899210();
    }
    piVar11 = *(int **)(unaff_EDI + 0x19c);
    if (*(int **)(unaff_EDI + 0x19c) == (int *)0x0) {
      piVar11 = DAT_00ba7d9c;
    }
    piVar11[8] = local_c;
    if (local_c == piVar11[10]) {
      (**(code **)(*piVar11 + 0x10))(local_c);
    }
    if (-1 < (int)local_10) {
      FUN_008a75d0(local_18,(int)local_10 << 2,0x14);
    }
  }
  return;
}



void FUN_0089ccc0(undefined4 param_1)

{
  int in_ECX;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  if (*(int *)(in_ECX + 0x88) != 0) {
    local_8[0] = 0xb;
    local_4 = param_1;
    FUN_008d8830(local_8);
    return;
  }
  FUN_0089bcc0(param_1);
  return;
}



void FUN_0089cd00(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  int *piVar6;
  uint uVar7;
  int unaff_FS_OFFSET;
  int local_44;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  int iStack_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  int local_4;
  
  if (*(int *)(in_ECX + 0x8c) + *(int *)(in_ECX + 0x88) != 0) {
    local_3c = CONCAT31(local_3c._1_3_,0xf);
    local_38 = param_1;
    local_34 = CONCAT22(local_34._2_2_,(undefined2)param_2);
    FUN_008d8830(&local_3c);
    return;
  }
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  piVar6 = *(int **)(iVar1 + 0x19c);
  if (*(int **)(iVar1 + 0x19c) == (int *)0x0) {
    piVar6 = DAT_00ba7d9c;
  }
  local_4 = piVar6[8];
  uVar2 = param_2 * 4 + 0x10 & 0xfffffff0;
  uVar7 = local_4 + uVar2;
  if ((uint)piVar6[0xb] < uVar7) {
    local_4 = (**(code **)(*piVar6 + 0xc))(uVar2);
  }
  else {
    piVar6[8] = uVar7;
  }
  uVar7 = param_2 | 0x80000000;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x80000000;
  piVar6 = *(int **)(iVar1 + 0x19c);
  if (*(int **)(iVar1 + 0x19c) == (int *)0x0) {
    piVar6 = DAT_00ba7d9c;
  }
  local_14 = piVar6[8];
  iVar3 = param_2 * 0x20 + 0x10;
  uVar2 = local_14 + iVar3;
  local_10 = local_4;
  local_8 = uVar7;
  if ((uint)piVar6[0xb] < uVar2) {
    local_14 = (**(code **)(*piVar6 + 0xc))(iVar3);
  }
  else {
    piVar6[8] = uVar2;
  }
  iVar3 = 0;
  local_1c = param_2;
  local_c = param_2;
  local_20 = local_14;
  local_18 = uVar7;
  if (0 < (int)param_2) {
    local_44 = 0;
    do {
      piVar6 = *(int **)(param_1 + iVar3 * 4);
      if (piVar6[7] == 0) {
        iVar4 = (**(code **)(*piVar6 + 0xc))();
        piVar6[7] = iVar4;
      }
      piVar6[2] = in_ECX;
      *(int **)(local_10 + iVar3 * 4) = piVar6 + 10;
      (**(code **)(*piVar6 + 0x14))(local_44 + local_20);
      FUN_008bc720();
      if (*(uint *)(in_ECX + 0xbc) == (*(uint *)(in_ECX + 0xc0) & 0x3fffffff)) {
        FUN_008a6ee0((int *)(in_ECX + 0xb8),4);
      }
      *(int **)(*(int *)(in_ECX + 0xb8) + *(int *)(in_ECX + 0xbc) * 4) = piVar6;
      *(int *)(in_ECX + 0xbc) = *(int *)(in_ECX + 0xbc) + 1;
      FUN_008dc530();
      FUN_008de590();
      iVar3 = iVar3 + 1;
      local_44 = local_44 + 0x20;
    } while (iVar3 < (int)param_2);
  }
  uVar7 = *(uint *)(in_ECX + 0x2a4);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x80000000;
  piVar6 = *(int **)(iVar1 + 0x19c);
  if (*(int **)(iVar1 + 0x19c) == (int *)0x0) {
    piVar6 = DAT_00ba7d9c;
  }
  iStack_24 = piVar6[8];
  uVar5 = uVar7 * 8 + 0x10 & 0xfffffff0;
  uVar2 = iStack_24 + uVar5;
  if ((uint)piVar6[0xb] < uVar2) {
    iStack_24 = (**(code **)(*piVar6 + 0xc))(uVar5);
  }
  else {
    piVar6[8] = uVar2;
  }
  local_28 = uVar7 | 0x80000000;
  local_30 = iStack_24;
  (**(code **)(**(int **)(in_ECX + 100) + 0xc))(&local_10,&local_20,&local_30);
  if (*(int *)(in_ECX + 0x78) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(in_ECX + 0x78) + 8;
  }
  FUN_008d8370(local_3c,local_38,iVar3);
  piVar6 = (int *)(in_ECX + 0x88);
  *piVar6 = *piVar6 + -1;
  if (((*piVar6 == 0) && (*(int *)(in_ECX + 0x84) != 0)) && (*(char *)(in_ECX + 0x90) == '\0')) {
    FUN_00899210();
  }
  piVar6 = *(int **)(iVar1 + 0x19c);
  if (*(int **)(iVar1 + 0x19c) == (int *)0x0) {
    piVar6 = DAT_00ba7d9c;
  }
  piVar6[8] = local_30;
  if (local_30 == piVar6[10]) {
    (**(code **)(*piVar6 + 0x10))(local_30);
  }
  if (-1 < local_34) {
    FUN_008a75d0(local_3c,local_34 << 3,0x14);
  }
  piVar6 = *(int **)(iVar1 + 0x19c);
  if (*(int **)(iVar1 + 0x19c) == (int *)0x0) {
    piVar6 = DAT_00ba7d9c;
  }
  piVar6[8] = local_20;
  if (local_20 == piVar6[10]) {
    (**(code **)(*piVar6 + 0x10))(local_20);
  }
  if (-1 < iStack_24) {
    FUN_008a75d0(local_2c,iStack_24 << 5,0x14);
  }
  piVar6 = *(int **)(iVar1 + 0x19c);
  if (*(int **)(iVar1 + 0x19c) == (int *)0x0) {
    piVar6 = DAT_00ba7d9c;
  }
  piVar6[8] = local_10;
  if (local_10 == piVar6[10]) {
    (**(code **)(*piVar6 + 0x10))(local_10);
  }
  if (-1 < local_14) {
    FUN_008a75d0(local_1c,local_14 << 2,0x14);
  }
  return;
}



void FUN_0089d080(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int unaff_EBX;
  int iVar8;
  undefined4 unaff_ESI;
  int unaff_FS_OFFSET;
  int iVar9;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar9 = _tls_index;
  if (*(int *)(in_ECX + 0x8c) + *(int *)(in_ECX + 0x88) != 0) {
    local_20 = CONCAT31(local_20._1_3_,0x10);
    local_1c = param_1;
    local_18 = CONCAT22(local_18._2_2_,(undefined2)param_2);
    FUN_008d8830(&local_20);
    return;
  }
  *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
  iVar9 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + iVar9 * 4);
  iVar8 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  piVar3 = *(int **)(iVar9 + 0x19c);
  if (*(int **)(iVar9 + 0x19c) == (int *)0x0) {
    piVar3 = DAT_00ba7d9c;
  }
  local_4 = piVar3[8];
  uVar2 = param_2 * 4 + 0x10 & 0xfffffff0;
  uVar1 = local_4 + uVar2;
  if ((uint)piVar3[0xb] < uVar1) {
    local_4 = (**(code **)(*piVar3 + 0xc))(uVar2);
  }
  else {
    piVar3[8] = uVar1;
  }
  local_8 = param_2 | 0x80000000;
  local_10 = local_4;
  if (0 < (int)param_2) {
    do {
      *(int *)(local_10 + local_c * 4) = *(int *)(param_1 + iVar8 * 4) + 0x28;
      local_c = local_c + 1;
      FUN_008dc5c0();
      FUN_008de520();
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)param_2);
  }
  uVar1 = *(uint *)(in_ECX + 0x2a4);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x80000000;
  piVar3 = *(int **)(iVar9 + 0x19c);
  if (*(int **)(iVar9 + 0x19c) == (int *)0x0) {
    piVar3 = DAT_00ba7d9c;
  }
  local_14 = piVar3[8];
  uVar6 = uVar1 * 8 + 0x10 & 0xfffffff0;
  uVar2 = local_14 + uVar6;
  if ((uint)piVar3[0xb] < uVar2) {
    local_14 = (**(code **)(*piVar3 + 0xc))(uVar6);
  }
  else {
    piVar3[8] = uVar2;
  }
  local_18 = uVar1 | 0x80000000;
  local_20 = local_14;
  (**(code **)(**(int **)(in_ECX + 100) + 0x14))(&local_10,&local_20);
  FUN_008d83e0(unaff_ESI,iVar9);
  piVar3 = *(int **)(unaff_EBX + 0x19c);
  if (*(int **)(unaff_EBX + 0x19c) == (int *)0x0) {
    piVar3 = DAT_00ba7d9c;
  }
  piVar3[8] = local_1c;
  iVar9 = unaff_EBX;
  if (local_1c == piVar3[10]) {
    (**(code **)(*piVar3 + 0x10))(local_1c);
  }
  if (-1 < local_20) {
    FUN_008a75d0(unaff_ESI,local_20 << 3,0x14);
  }
  iVar8 = 0;
  if (0 < (int)param_2) {
    do {
      piVar3 = *(int **)(local_4 + iVar8 * 4);
      iVar4 = 0;
      piVar3[2] = 0;
      if (0 < *(int *)(in_ECX + 0xbc)) {
        piVar7 = *(int **)(in_ECX + 0xb8);
        do {
          if ((int *)*piVar7 == piVar3) goto LAB_0089d27f;
          iVar4 = iVar4 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar4 < *(int *)(in_ECX + 0xbc));
      }
      iVar4 = -1;
LAB_0089d27f:
      iVar5 = *(int *)(in_ECX + 0xbc) + -1;
      *(int *)(in_ECX + 0xbc) = iVar5;
      *(undefined4 *)(*(int *)(in_ECX + 0xb8) + iVar4 * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0xb8) + iVar5 * 4);
      unaff_EBX = iVar9;
      if ((short)piVar3[1] == 0) {
        (**(code **)(*piVar3 + 0x2c))();
        unaff_EBX = iVar9;
      }
      FUN_008bc730();
      iVar8 = iVar8 + 1;
      iVar9 = unaff_EBX;
    } while (iVar8 < (int)param_2);
  }
  piVar3 = (int *)(in_ECX + 0x88);
  *piVar3 = *piVar3 + -1;
  if (((*piVar3 == 0) && (*(int *)(in_ECX + 0x84) != 0)) && (*(char *)(in_ECX + 0x90) == '\0')) {
    FUN_00899210();
  }
  piVar3 = *(int **)(unaff_EBX + 0x19c);
  if (*(int **)(unaff_EBX + 0x19c) == (int *)0x0) {
    piVar3 = DAT_00ba7d9c;
  }
  piVar3[8] = local_c;
  if (local_c == piVar3[10]) {
    (**(code **)(*piVar3 + 0x10))(local_c);
  }
  if (-1 < local_10) {
    FUN_008a75d0(local_18,local_10 << 2,0x14);
  }
  return;
}



void FUN_0089d340(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  
  if (param_1 == 0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x24);
    *(undefined2 *)(iVar2 + 4) = 0x18;
    param_1 = FUN_00899330();
  }
  else if (*(short *)(param_1 + 4) != 0) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x78);
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *(int *)(in_ECX + 0x78) = param_1;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0xc;
  }
  *(int *)(*(int *)(in_ECX + 0x74) + 4) = param_1;
  if (param_2 != '\0') {
    FUN_0089bf50(param_3,param_4);
  }
  return;
}



void FUN_0089d3d0(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  *in_ECX = &PTR_FUN_00a96eb4;
  in_ECX[2] = 0;
  return;
}



void FUN_0089d400(int param_1)

{
  code *pcVar1;
  int *in_ECX;
  
  if (in_ECX[2] != param_1) {
    (**(code **)(*in_ECX + 0x50))(0);
    pcVar1 = *(code **)(*in_ECX + 0x50);
    in_ECX[2] = param_1;
    (*pcVar1)(1);
  }
  return;
}



void FUN_0089d430(char param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 8);
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == '\0') {
      if ((*(short *)(puVar1 + 1) != 0) &&
         (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
         *(short *)((int)puVar1 + 6) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0089d46e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar1)();
        return;
      }
    }
    else if (*(short *)(puVar1 + 1) != 0) {
      *(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + 1;
    }
  }
  return;
}



void FUN_0089d470(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cfdd8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a96eb4;
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = 0;
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1,uVar2);
  }
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0089d4f0(byte param_1)

{
  FUN_0089d470();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0089d510(int param_1)

{
  int in_ECX;
  uint uVar1;
  undefined4 local_28;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_28;
  FUN_007009a0(param_1);
  local_28 = FUN_0070f910(DAT_00ba7ba4);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_28);
  _sprintf(local_24,"0x%08X",*(undefined4 *)(in_ECX + 8));
  local_28 = FUN_0070fc30("hkObject",local_24);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_28);
  if (*(int *)(in_ECX + 8) != 0) {
    local_28 = FUN_0070faf0("hkRefcount",(int)*(short *)(*(int *)(in_ECX + 8) + 6));
    uVar1 = (uint)*(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 8) <= uVar1) {
      FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
    }
    FUN_0042bb90(uVar1,&local_28);
  }
  return;
}



void FUN_0089d610(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *in_ECX;
  
  FUN_00700770(param_1,param_2);
  uVar1 = (**(code **)(*in_ECX + 0x74))(&param_2);
  (**(code **)(*param_1 + 0x70))(uVar1);
  (**(code **)(*in_ECX + 100))(1);
  return;
}



void FUN_0089d650(undefined4 param_1)

{
  int *in_ECX;
  
  FUN_007008a0(param_1);
  (**(code **)(*in_ECX + 0x6c))(param_1);
  return;
}



undefined4 FUN_0089d670(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  int unaff_retaddr;
  undefined1 local_1;
  
  iVar1 = (**(code **)(*in_ECX + 0x74))(&local_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*in_ECX + 0x68))();
    (**(code **)(*(int *)(unaff_retaddr + 0x21c) + 4))
              (*(int *)(unaff_retaddr + 0x21c),iVar1,uVar2,0,0);
  }
  return uVar2;
}



void FUN_0089d6c0(undefined4 param_1)

{
  int *in_ECX;
  
  FUN_0068f970(param_1);
  if (in_ECX[3] != 0) {
    (**(code **)(*in_ECX + 0x70))(in_ECX[3]);
  }
  return;
}



uint thunk_FUN_00700670(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  uint in_EAX;
  byte *pbVar5;
  int *in_ECX;
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



void FUN_0089d700(void)

{
  int *in_ECX;
  
  if (in_ECX[2] != 0) {
    (**(code **)(*in_ECX + 0x4c))(0);
  }
  (**(code **)(*in_ECX + 100))(1);
  return;
}



void FUN_0089d720(void)

{
  int *in_ECX;
  undefined4 uStack00000004;
  
  uStack00000004 = 1;
                    /* WARNING: Could not recover jumptable at 0x0089d72d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 100))();
  return;
}



void FUN_0089d730(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_ECX[2];
  }
  if (param_1 != iVar1) {
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*in_ECX + 0x58))();
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2b0) != 0)) {
        (**(code **)(*in_ECX + 0x60))();
      }
    }
    FUN_0089d400(param_1);
  }
  return;
}



void FUN_0089d780(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3d38c;
  FUN_00401f20(in_ECX[3]);
  in_ECX[3] = 0;
  FUN_0089d470();
  return;
}



void FUN_0089d7b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 unaff_EBX;
  int unaff_retaddr;
  undefined1 local_4 [4];
  
  iVar1 = (**(code **)(*in_ECX + 0x74))(local_4);
  FUN_0068f970(unaff_retaddr);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*in_ECX + 0x68))();
    (**(code **)(*(int *)(unaff_retaddr + 0x220) + 8))
              (*(int *)(unaff_retaddr + 0x220),iVar1,uVar2,&stack0x00000000,1);
    (**(code **)(*in_ECX + 100))(unaff_EBX);
  }
  return;
}



void FUN_0089d820(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0089d510(param_1);
  param_1 = FUN_0070f910(DAT_00ba7c00);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0089d870(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d68e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3d414;
  local_4 = 0;
  FUN_0089d700(uVar1);
  DAT_00ba7d00 = DAT_00ba7d00 + -1;
  local_4 = 0xffffffff;
  FUN_0089d780();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0089d8e0(undefined4 *param_1)

{
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    *param_1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x10);
    return;
  }
  *param_1 = 0;
  return;
}



undefined4 FUN_0089d960(int param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  if (in_ECX == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = in_ECX[2];
  }
  if (iVar2 != 0) {
    if (param_1 == 0) {
      (**(code **)(*in_ECX + 0x60))();
    }
    else {
      iVar1 = (**(code **)(*in_ECX + 0x58))();
      if (iVar1 != *(int *)(param_1 + 8)) {
        (**(code **)(*in_ECX + 0x60))();
        FUN_0088c3d0(iVar2);
        return 1;
      }
    }
    return 0;
  }
  return 0;
}



undefined4 FUN_0089d9c0(void)

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
    uVar2 = FUN_0088b580(in_ECX[2]);
    return uVar2;
  }
  return 0;
}



void FUN_0089da00(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0089d820(param_1);
  param_1 = FUN_0070f910(DAT_00ba7d04);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



float10 FUN_0089da90(void)

{
  int in_ECX;
  
  if ((float10)*(float *)(in_ECX + 0xc0) == (float10)0.0) {
    return (float10)0.0;
  }
  return (float10)1.0 / (float10)*(float *)(in_ECX + 0xc0);
}



void FUN_0089db70(void)

{
  FUN_008e79e0();
  return;
}



void FUN_0089db80(undefined2 param_1)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0xbc) = param_1;
  return;
}



void FUN_0089dbd0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0xc0);
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *(float *)(in_ECX + 0xd0) = *(float *)(in_ECX + 0xd0) + fVar1 * *param_1;
  *(float *)(in_ECX + 0xd4) = *(float *)(in_ECX + 0xd4) + fVar1 * fVar2;
  *(float *)(in_ECX + 0xd8) = *(float *)(in_ECX + 0xd8) + fVar1 * fVar3;
  *(float *)(in_ECX + 0xdc) = *(float *)(in_ECX + 0xdc) + fVar1 * fVar4;
  return;
}



void FUN_0089dc10(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a96f78;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  FUN_008e7b20(param_1,param_2);
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  return;
}



void FUN_0089dc70(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  float fVar4;
  float local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 100);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(in_ECX + 0x68);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x6c);
  *(undefined4 *)(in_ECX + 0x5c) = *param_1;
  fVar1 = *(float *)(in_ECX + 0xd0);
  fVar2 = *(float *)(in_ECX + 0xd4);
  fVar3 = *(float *)(in_ECX + 0xd8);
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (*(float *)(in_ECX + 0xb4) * *(float *)(in_ECX + 0xb4) < fVar4) {
    fVar4 = *(float *)(in_ECX + 0xb4) / SQRT(fVar4);
    *(float *)(in_ECX + 0xd0) = fVar4 * fVar1;
    *(float *)(in_ECX + 0xd4) = fVar4 * fVar2;
    *(float *)(in_ECX + 0xd8) = fVar4 * fVar3;
    *(float *)(in_ECX + 0xdc) = fVar4 * *(float *)(in_ECX + 0xdc);
  }
  fVar1 = (float)param_1[2];
  *(float *)(in_ECX + 0x60) = *(float *)(in_ECX + 0x60) + fVar1 * *(float *)(in_ECX + 0xd0);
  *(float *)(in_ECX + 100) = *(float *)(in_ECX + 100) + fVar1 * *(float *)(in_ECX + 0xd4);
  *(float *)(in_ECX + 0x68) = *(float *)(in_ECX + 0x68) + fVar1 * *(float *)(in_ECX + 0xd8);
  *(float *)(in_ECX + 0x6c) = *(float *)(in_ECX + 0x6c) + fVar1 * *(float *)(in_ECX + 0xdc);
  *(undefined4 *)(in_ECX + 0x6c) = param_1[3];
  local_30 = *(undefined4 *)(in_ECX + 0x80);
  uStack_2c = *(undefined4 *)(in_ECX + 0x84);
  uStack_28 = *(undefined4 *)(in_ECX + 0x88);
  uStack_24 = *(undefined4 *)(in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0x70) = local_30;
  *(undefined4 *)(in_ECX + 0x74) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x78) = uStack_28;
  *(undefined4 *)(in_ECX + 0x7c) = uStack_24;
  fStack_18 = (float)param_1[2] * 0.5;
  local_20 = fStack_18 * *(float *)(in_ECX + 0xe0);
  fStack_1c = fStack_18 * *(float *)(in_ECX + 0xe4);
  fStack_18 = fStack_18 * *(float *)(in_ECX + 0xe8);
  local_3c = (fStack_18 * fStack_18 + fStack_1c * fStack_1c + local_20 * local_20) * 0.4052847;
  fVar1 = *(float *)(in_ECX + 0xb8) * (float)param_1[2];
  if (0.9 < fVar1) {
    fVar1 = 0.9;
  }
  fVar2 = fVar1 * fVar1;
  if (local_3c < fVar2 == (local_3c == fVar2)) {
    fVar1 = fVar1 / SQRT(local_3c);
    *(float *)(in_ECX + 0xe0) = fVar1 * *(float *)(in_ECX + 0xe0);
    *(float *)(in_ECX + 0xe4) = fVar1 * *(float *)(in_ECX + 0xe4);
    *(float *)(in_ECX + 0xe8) = fVar1 * *(float *)(in_ECX + 0xe8);
    *(float *)(in_ECX + 0xec) = fVar1 * *(float *)(in_ECX + 0xec);
    local_20 = fVar1 * local_20;
    fStack_1c = fVar1 * fStack_1c;
    fStack_18 = fVar1 * fStack_18;
    local_3c = fVar2;
  }
  fStack_14 = ((1.0 - local_3c * 0.822948) - local_3c * local_3c * 0.130529) -
              local_3c * local_3c * local_3c * 0.044408;
  FUN_00889470(&local_20,&local_30);
  FUN_004d6830();
  *(float *)(in_ECX + 0xa0) = local_20 + local_20;
  *(float *)(in_ECX + 0xa4) = fStack_1c + fStack_1c;
  *(float *)(in_ECX + 0xa8) = fStack_18 + fStack_18;
  *(float *)(in_ECX + 0xac) = fStack_14 + fStack_14;
  *(float *)(in_ECX + 0xac) = SQRT(local_3c) * 3.1415927;
  *(undefined4 *)(in_ECX + 0x80) = local_30;
  *(undefined4 *)(in_ECX + 0x84) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x88) = uStack_28;
  *(undefined4 *)(in_ECX + 0x8c) = uStack_24;
  FUN_008b1dd0(in_ECX + 0x80);
  fVar1 = *(float *)(in_ECX + 0x90);
  fVar2 = *(float *)(in_ECX + 0x94);
  fVar3 = *(float *)(in_ECX + 0x98);
  *(float *)(in_ECX + 0x40) =
       *(float *)(in_ECX + 0x60) -
       (*(float *)(in_ECX + 0x10) * fVar1 + *(float *)(in_ECX + 0x20) * fVar2 +
       *(float *)(in_ECX + 0x30) * fVar3);
  *(float *)(in_ECX + 0x44) =
       *(float *)(in_ECX + 100) -
       (*(float *)(in_ECX + 0x14) * fVar1 + *(float *)(in_ECX + 0x24) * fVar2 +
       *(float *)(in_ECX + 0x34) * fVar3);
  *(float *)(in_ECX + 0x48) =
       *(float *)(in_ECX + 0x68) -
       (*(float *)(in_ECX + 0x18) * fVar1 + *(float *)(in_ECX + 0x28) * fVar2 +
       *(float *)(in_ECX + 0x38) * fVar3);
  *(float *)(in_ECX + 0x4c) =
       *(float *)(in_ECX + 0x6c) -
       (*(float *)(in_ECX + 0x1c) * fVar1 + *(float *)(in_ECX + 0x2c) * fVar2 +
       *(float *)(in_ECX + 0x3c) * fVar3);
  return;
}



void FUN_0089df00(undefined4 *param_1)

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
  uVar1 = param_1[0x15];
  uVar2 = param_1[0x16];
  uVar3 = param_1[0x17];
  in_ECX[0x14] = param_1[0x14];
  in_ECX[0x15] = uVar1;
  in_ECX[0x16] = uVar2;
  in_ECX[0x17] = uVar3;
  uVar1 = param_1[0x19];
  uVar2 = param_1[0x1a];
  uVar3 = param_1[0x1b];
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = uVar1;
  in_ECX[0x1a] = uVar2;
  in_ECX[0x1b] = uVar3;
  uVar1 = param_1[0x1d];
  uVar2 = param_1[0x1e];
  uVar3 = param_1[0x1f];
  in_ECX[0x1c] = param_1[0x1c];
  in_ECX[0x1d] = uVar1;
  in_ECX[0x1e] = uVar2;
  in_ECX[0x1f] = uVar3;
  uVar1 = param_1[0x21];
  uVar2 = param_1[0x22];
  uVar3 = param_1[0x23];
  in_ECX[0x20] = param_1[0x20];
  in_ECX[0x21] = uVar1;
  in_ECX[0x22] = uVar2;
  in_ECX[0x23] = uVar3;
  uVar1 = param_1[0x25];
  uVar2 = param_1[0x26];
  uVar3 = param_1[0x27];
  in_ECX[0x24] = param_1[0x24];
  in_ECX[0x25] = uVar1;
  in_ECX[0x26] = uVar2;
  in_ECX[0x27] = uVar3;
  in_ECX[0x28] = param_1[0x28];
  in_ECX[0x29] = param_1[0x29];
  in_ECX[0x2a] = param_1[0x2a];
  *(undefined2 *)(in_ECX + 0x2b) = *(undefined2 *)(param_1 + 0x2b);
  *(undefined2 *)((int)in_ECX + 0xae) = *(undefined2 *)((int)param_1 + 0xae);
  return;
}



void FUN_0089dfb0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  FUN_0089df00(in_ECX + 0x10);
  uVar1 = *(undefined4 *)(in_ECX + 0xd4);
  uVar2 = *(undefined4 *)(in_ECX + 0xd8);
  uVar3 = *(undefined4 *)(in_ECX + 0xdc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(in_ECX + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  *(undefined4 *)(param_1 + 0xdc) = uVar3;
  uVar1 = *(undefined4 *)(in_ECX + 0xe4);
  uVar2 = *(undefined4 *)(in_ECX + 0xe8);
  uVar3 = *(undefined4 *)(in_ECX + 0xec);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(in_ECX + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0089dff0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d68b8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3d49c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7d0c = _DAT_00ba7d0c + -1;
  local_4 = 0xffffffff;
  FUN_0089d870();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0089e060(int param_1)

{
  int in_ECX;
  
  FUN_0089d8e0(param_1);
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x18);
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



void FUN_0089e090(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = param_1;
  FUN_00712a20();
  FUN_0089d650(uVar1);
  iVar2 = (**(code **)(*in_ECX + 0x74))(&param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  return;
}



void FUN_0089e110(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x18);
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
  (**(code **)(*param_1 + 0x2c))(uVar2);
  FUN_0089d7b0(param_1);
  return;
}



void FUN_0089e1a0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined4 unaff_retaddr;
  undefined1 local_1;
  
  iVar3 = (**(code **)(*in_ECX + 0x74))(&local_1);
  iVar1 = param_1;
  if (*(int *)(iVar3 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(iVar3 + 4) + 0xc);
  }
  *(undefined4 *)(iVar3 + 4) = 0;
  if (iVar4 != 0) {
    cVar2 = FUN_0055e000(iVar4,&param_1);
    if (cVar2 != '\0') {
      if (param_1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 8);
      }
      *(undefined4 *)(iVar3 + 4) = uVar5;
    }
  }
  FUN_0089d610(unaff_retaddr,iVar1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0089e210(int param_1)

{
  int in_ECX;
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_28;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_28;
  FUN_0089da00(param_1);
  local_28 = FUN_0070f910(DAT_00ba7d10);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_28);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x18);
  }
  _sprintf(local_24,"0x%08X",uVar2);
  local_28 = FUN_0070fc30("hkRigidBody",local_24);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_28);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0089e300(void)

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
  *in_ECX = &PTR_FUN_00a3d524;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7d18 = _DAT_00ba7d18 + -1;
  local_4 = 0xffffffff;
  FUN_0089dff0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0089e370(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_0089e060(param_1);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    param_1 = 0;
  }
  else {
    param_1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x40);
  }
  *(int *)(iVar2 + 0x30) = param_1;
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    param_1 = 0;
  }
  else {
    param_1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x44);
  }
  *(int *)(iVar2 + 0x34) = param_1;
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    param_1 = 0;
  }
  else {
    param_1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x4c);
  }
  *(int *)(iVar2 + 0x3c) = param_1;
  if ((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) {
    FUN_0047dcd0(iVar1 + 0x20);
    FUN_0047dcd0(iVar1 + 0x30);
    *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(iVar1 + 0x48);
    return;
  }
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0089e430(void)

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
    *puVar2 = &PTR_FUN_00a3d524;
    _DAT_00ba7d18 = _DAT_00ba7d18 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0089e4d0(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a3d524;
    _DAT_00ba7d18 = _DAT_00ba7d18 + 1;
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



undefined4 FUN_0089e5c0(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar1 = thunk_FUN_00401aa0(0x50,1);
    bVar3 = 0x10 - ((byte)iVar1 & 0xf);
    *(byte *)(iVar1 + (uint)bVar3 + -1) = bVar3;
    uVar2 = FUN_0047f9f0();
    *(undefined4 *)(in_ECX + 0xc) = uVar2;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_0089e370(uVar2);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0089e620(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uStack_64;
  undefined4 uStack_60;
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
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d680b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&uStack_64;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 != 0) {
    iStack_5c = (**(code **)(*DAT_00ba7d98 + 0x10))(0x50,0x26,uVar1);
    *(undefined2 *)(iStack_5c + 4) = 0x50;
    uStack_58 = *(undefined4 *)(param_1 + 0x20);
    uStack_54 = *(undefined4 *)(param_1 + 0x24);
    uStack_50 = *(undefined4 *)(param_1 + 0x28);
    uStack_4c = *(undefined4 *)(param_1 + 0x2c);
    local_1c = 0;
    uStack_48 = *(undefined4 *)(param_1 + 0x10);
    uStack_64 = *(undefined4 *)(param_1 + 0x14);
    uStack_60 = *(undefined4 *)(param_1 + 0x18);
    uStack_3c = *(undefined4 *)(param_1 + 0x1c);
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    puVar2 = (undefined4 *)
             FUN_008b89c0(&uStack_48,&uStack_58,*(undefined4 *)(param_1 + 0x30),
                          *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c),
                          *(undefined4 *)(param_1 + 4));
    local_1c = -1;
    FUN_008b8a80(*(undefined4 *)(param_1 + 0x38));
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



void FUN_0089e7a0(int param_1)

{
  uint uVar1;
  undefined4 local_54;
  undefined1 local_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_0089e210(param_1);
  local_54 = FUN_0070f910(DAT_00ba7d1c);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_54);
  FUN_0047f9f0();
  FUN_0089e370(local_50);
  local_54 = FUN_0070fb90("Damping",local_20);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_54);
  local_54 = FUN_0070fb90("Elasticity",local_1c);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_54);
  local_54 = FUN_0070fb90("Object Damping",local_14);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_54);
  local_54 = FUN_0070fb90("Max Force",local_18);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_54);
  return;
}



undefined4 FUN_0089e910(void)

{
  int in_ECX;
  
  if (((*(ushort *)(in_ECX + 0xc) & 0x20) != 0) && (((byte)*(ushort *)(in_ECX + 0xc) >> 6 & 1) == 0)
     ) {
    return 1;
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x008977bd) */
/* WARNING: Removing unreachable block (ram,0x008977c7) */
/* WARNING: Removing unreachable block (ram,0x008977e5) */
/* WARNING: Removing unreachable block (ram,0x008977ef) */

void thunk_FUN_008976d0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int iStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar2 = param_2;
  iVar6 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d6750;
  iStack_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&iStack_c;
  thunk_FUN_00700770(param_1,param_2);
  *(undefined2 *)(iVar6 + 0xc) = *(undefined2 *)(in_ECX + 0xc);
  piVar1 = *(int **)(in_ECX + 0x10);
  if (piVar1 != (int *)0x0) {
    InterlockedIncrement(piVar1 + 1);
    param_2 = (undefined4 *)0x0;
    uStack_4 = 1;
    cVar4 = FUN_0055e000(piVar1,&param_1);
    iVar6 = param_1;
    if (cVar4 == '\0') {
      iVar6 = (**(code **)(*piVar1 + 0x18))(uVar2,uVar5);
    }
    FUN_0075fa90(iVar6);
    puVar3 = param_2;
    FUN_00897670(param_2);
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if (LVar7 == 0) {
        (**(code **)*puVar3)(1);
      }
      param_2 = (undefined4 *)0x0;
    }
    LVar7 = InterlockedDecrement(piVar1 + 1);
    if (LVar7 == 0) {
      (**(code **)*piVar1)(1);
    }
  }
  *unaff_FS_OFFSET = iStack_c;
  return;
}



void thunk_FUN_00897b90(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00711c90(param_1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0xc,2,&param_1,1);
  FUN_00712a20();
  return;
}



bool thunk_FUN_00897880(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int in_ECX;
  
  cVar1 = FUN_00711d20(param_1);
  bVar3 = false;
  if (cVar1 != '\0') {
    if (*(int **)(in_ECX + 0x10) != (int *)0x0) {
      bVar2 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x2c))(*(undefined4 *)(param_1 + 0x10));
      return (bool)(bVar2 & *(short *)(param_1 + 0xc) == *(short *)(in_ECX + 0xc));
    }
    bVar3 = *(int *)(param_1 + 0x10) == 0 && *(short *)(param_1 + 0xc) == *(short *)(in_ECX + 0xc);
  }
  return bVar3;
}



undefined4 * FUN_0089e960(void)

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
    *puVar2 = &PTR_FUN_00a55fcc;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



undefined4 * FUN_0089e9f0(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a55fcc;
  }
  local_4 = 0xffffffff;
  FUN_008976d0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_0089ea70(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [36];
  undefined1 auStack_10 [16];
  
  if (((in_ECX[4] != 0) && (iVar1 = *(int *)(in_ECX[4] + 8), iVar1 != 0)) &&
     ((iVar2 = (**(code **)(**(int **)(iVar1 + 0x50) + 8))(), iVar2 != 7 ||
      (*(int *)(iVar1 + 8) == 0)))) {
    FUN_004d6950(auStack_44);
    FUN_0047c600(auStack_34);
    FUN_004d6900(auStack_10);
    (**(code **)(*in_ECX + 0x78))(auStack_34);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0089eae0(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_94 [12];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 auStack_74 [9];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [28];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_94;
  piVar1 = *(int **)(in_ECX + 0x10);
  if ((piVar1 != (int *)0x0) && (iVar4 = piVar1[2], iVar4 != 0)) {
    local_78 = in_ECX;
    iVar3 = (**(code **)(**(int **)(iVar4 + 0x50) + 8))();
    if ((iVar3 != 7) || (*(int *)(iVar4 + 8) == 0)) {
      iVar4 = piVar1[2];
      iVar3 = FUN_00452a60();
      if ((iVar4 != 0) && (iVar3 != 0)) {
        puVar5 = (undefined4 *)(iVar3 + 100);
        puVar6 = auStack_74;
        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        FUN_007150f0(auStack_74);
        if ((*(byte *)(local_78 + 0xc) >> 6 & 1) == 0) {
          cVar2 = FUN_0089e910();
          if (cVar2 != '\0') {
            FUN_008a3900(auStack_50,&uStack_88);
            return;
          }
          iVar4 = FUN_004b6d90();
          if (iVar4 < 6) {
            FUN_008a3900(auStack_50,&uStack_88);
            return;
          }
          FUN_004529e0(auStack_30,auStack_50);
          uStack_40 = uStack_84;
          uStack_3c = uStack_80;
          uStack_38 = uStack_7c;
          uStack_34 = uStack_88;
          FUN_004d6830();
          FUN_0043f2e0();
          (**(code **)(*piVar1 + 0xa0))(auStack_30,&uStack_40);
        }
        else {
          FUN_004529e0(auStack_30,auStack_50);
          uStack_40 = uStack_84;
          uStack_3c = uStack_80;
          uStack_38 = uStack_7c;
          uStack_34 = uStack_88;
          FUN_004d6830();
          FUN_0043f2e0();
          (**(code **)(*piVar1 + 0xa0))(auStack_30,&uStack_40);
        }
        FUN_0043f300();
      }
    }
  }
  return;
}



void FUN_0089ed20(int param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  
  if (param_2 != (int *)0x0) {
    for (puVar3 = (undefined4 *)(**(code **)(*param_2 + 4))(); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      if (puVar3 == &DAT_00ba7d84) {
        bVar1 = 1;
        goto LAB_0089ed50;
      }
    }
    bVar1 = 0;
LAB_0089ed50:
    param_2 = (int *)(-(uint)bVar1 & (uint)param_2);
    if (param_2 != (int *)0x0) goto LAB_0089ed65;
  }
  param_2 = *(int **)(in_ECX + 0x10);
  if (param_2 == (int *)0x0) {
    return;
  }
LAB_0089ed65:
  if (param_2[2] == 0) {
    iVar4 = 7;
  }
  else {
    iVar4 = (**(code **)(**(int **)(param_2[2] + 0x50) + 8))();
  }
  if ((iVar4 != param_1) && (cVar2 = (**(code **)(*param_2 + 0x9c))(param_1), cVar2 != '\0')) {
    if ((param_2[2] == 0) || (iVar4 = (**(code **)(**(int **)(param_2[2] + 0x50) + 8))(), 5 < iVar4)
       ) {
      *(ushort *)(in_ECX + 0xc) = *(ushort *)(in_ECX + 0xc) & 0xfff7;
    }
    else {
      *(ushort *)(in_ECX + 0xc) = *(ushort *)(in_ECX + 0xc) | 8;
    }
    if (((param_2[2] != 0) &&
        (iVar4 = (**(code **)(**(int **)(param_2[2] + 0x50) + 8))(), iVar4 < 6)) &&
       (param_2[2] != 0)) {
      FUN_0089f570();
      FUN_008a6410();
      FUN_0089f570();
    }
  }
  return;
}



void FUN_0089ee00(void)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float *pfVar5;
  uint uVar6;
  int in_ECX;
  int extraout_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    if (iVar2 == 0) {
      pfVar5 = &DAT_00ba7a40;
    }
    else {
      pfVar5 = (float *)(*(int *)(iVar2 + 0x50) + 0xd0);
    }
    auVar4._4_4_ = -(uint)(0.001 < ABS(pfVar5[1] - DAT_00ba7a44));
    auVar4._0_4_ = -(uint)(0.001 < ABS(*pfVar5 - DAT_00ba7a40));
    auVar4._8_4_ = -(uint)(0.001 < ABS(pfVar5[2] - DAT_00ba7a48));
    auVar4._12_4_ = -(uint)(0.001 < ABS(pfVar5[3] - fRam00ba7a4c));
    uVar6 = movmskps(pfVar5,auVar4);
    if (((uVar6 & 7) != 0) && (iVar2 != 0)) {
      FUN_0089f570();
      FUN_008a6410();
      (**(code **)(**(int **)(iVar2 + 0x50) + 0x54))(&DAT_00ba7a40);
      FUN_0089f570();
      in_ECX = extraout_ECX;
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      pfVar5 = &DAT_00ba7a40;
    }
    else {
      pfVar5 = (float *)(*(int *)(iVar1 + 0x50) + 0xe0);
    }
    auVar3._4_4_ = -(uint)(0.001 < ABS(pfVar5[1] - DAT_00ba7a44));
    auVar3._0_4_ = -(uint)(0.001 < ABS(*pfVar5 - DAT_00ba7a40));
    auVar3._8_4_ = -(uint)(0.001 < ABS(pfVar5[2] - DAT_00ba7a48));
    auVar3._12_4_ = -(uint)(0.001 < ABS(pfVar5[3] - fRam00ba7a4c));
    uVar6 = movmskps(in_ECX,auVar3);
    if (((uVar6 & 7) != 0) && (iVar1 != 0)) {
      FUN_0089f570();
      FUN_008a6410();
      (**(code **)(**(int **)(iVar1 + 0x50) + 0x58))(&DAT_00ba7a40);
      FUN_0089f570();
    }
  }
  return;
}



void FUN_0089eef0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  
  iVar1 = param_1;
  FUN_00898210(param_1);
  param_1 = FUN_0070f910(DAT_00ba7d24);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  if (((*(ushort *)(in_ECX + 0xc) & 0x20) == 0) || (((byte)*(ushort *)(in_ECX + 0xc) >> 6 & 1) != 0)
     ) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  param_1 = FUN_0070f950("bUseVel",uVar2);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  return;
}



void thunk_FUN_00897810(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00711cb0(param_1);
  iVar1 = FUN_00452a60();
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) & 0xffef | 6;
  }
  uVar2 = FUN_007124a0();
  FUN_00897670(uVar2);
  return;
}



void thunk_FUN_00897850(void)

{
  FUN_00897850();
  return;
}



void thunk_FUN_00897bd0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = param_1;
  FUN_00711d00(param_1);
  iVar1 = piVar2[0x88];
  param_1 = (int *)0x2;
  (**(code **)(iVar1 + 8))(iVar1,in_ECX + 0xc,2,&param_1,1);
  (**(code **)(*piVar2 + 0x2c))(*(undefined4 *)(in_ECX + 0x10));
  return;
}



undefined4 * FUN_0089efc0(void)

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
    *puVar2 = &PTR_FUN_00a65544;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



undefined4 * FUN_0089f020(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a65544;
  }
  local_4 = 0xffffffff;
  FUN_008976d0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0089f0a0(void)

{
  int iVar1;
  int *in_ECX;
  undefined1 auStack_78 [4];
  undefined1 local_74 [36];
  undefined1 local_50 [12];
  undefined4 local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_78;
  iVar1 = in_ECX[4];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    FUN_0070fd10();
    local_44 = 0x3f800000;
    if (*(int **)(iVar1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 8) + 0x14))(&local_40);
    }
    local_30 = (local_30 - local_40) * 0.5;
    fStack_2c = (fStack_2c - fStack_3c) * 0.5;
    fStack_28 = (fStack_28 - fStack_38) * 0.5;
    fStack_24 = (fStack_24 - fStack_34) * 0.5;
    local_40 = local_30 + local_40;
    fStack_3c = fStack_2c + fStack_3c;
    fStack_38 = fStack_28 + fStack_38;
    fStack_34 = fStack_24 + fStack_34;
    FUN_0043f3e0(local_50,&local_30);
    (**(code **)(*in_ECX + 0x78))(local_74);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0089f150(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_84 [9];
  float local_60;
  float local_5c;
  float fStack_58;
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
  
  local_14 = DAT_00b30aac ^ (uint)local_84;
  iVar1 = *(int *)(in_ECX + 0x10);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    iVar2 = FUN_00452a60();
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)(iVar2 + 100);
      puVar5 = local_84;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      if (*(int **)(iVar1 + 8) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 8) + 0x14))(&local_40);
      }
      local_50 = local_60 * 0.14287673;
      fStack_4c = local_5c * 0.14287673;
      local_30 = (local_30 - local_40) * 0.5;
      fStack_2c = (fStack_2c - fStack_3c) * 0.5;
      fStack_28 = (fStack_28 - fStack_38) * 0.5;
      fStack_24 = (fStack_24 - fStack_34) * 0.5;
      fStack_48 = fStack_58 * 0.14287673;
      local_40 = local_30 * -1.0 + local_50;
      fStack_3c = fStack_2c * -1.0 + fStack_4c;
      fStack_38 = fStack_28 * -1.0 + fStack_48;
      fStack_34 = fStack_24 * -1.0 + fStack_44;
      local_30 = local_50 + local_30;
      fStack_2c = fStack_4c + fStack_2c;
      fStack_28 = fStack_48 + fStack_28;
      fStack_24 = fStack_44 + fStack_24;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7b00);
      _DAT_00ba7b78 = GetCurrentThreadId();
      _DAT_00ba7b7c = _DAT_00ba7b7c + 1;
      if (*(int *)(iVar1 + 8) != 0) {
        FUN_0089f570();
        FUN_008cd9d0(&local_40);
        FUN_0089f570();
      }
      _DAT_00ba7b7c = _DAT_00ba7b7c + -1;
      if (_DAT_00ba7b7c == 0) {
        _DAT_00ba7b78 = 0;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7b00);
    }
  }
  return;
}



void FUN_0089f290(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00898210(param_1);
  param_1 = FUN_0070f910(DAT_00ba7d2c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0089f2e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d68e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a559cc;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7d34 = _DAT_00ba7d34 + -1;
  local_4 = 0xffffffff;
  FUN_0089d780();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0089f350(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = param_1;
  iVar2 = FUN_007124a0();
  iVar3 = (**(code **)(*in_ECX + 0x74))(&param_1);
  if ((iVar3 != 0) && (iVar2 != 0)) {
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar2 + 8);
  }
  FUN_0089d6c0(uVar1);
  return;
}



void FUN_0089f390(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  if ((((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) ||
      (piVar2 = (int *)(*(int *)(in_ECX + 8) + 0x14), piVar2 == (int *)0x0)) ||
     (iVar1 = *piVar2, iVar1 == 0)) {
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



void FUN_0089f3d0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  LONG LVar3;
  int *in_ECX;
  undefined4 *puVar4;
  
  if ((char)param_1 == '\0') {
    (**(code **)(*in_ECX + 0x60))();
    if (((in_ECX[2] == 0) || (piVar1 = (int *)(in_ECX[2] + 0x14), piVar1 == (int *)0x0)) ||
       (iVar2 = *piVar1, iVar2 == 0)) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = *(undefined4 **)(iVar2 + 8);
    }
    if ((puVar4 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar4 + 1), LVar3 == 0)) {
      (**(code **)*puVar4)(1);
    }
    piVar1 = (int *)0x0;
  }
  else {
    if (((in_ECX == (int *)0x0) || (in_ECX[2] == 0)) ||
       ((piVar1 = (int *)(in_ECX[2] + 0x14), piVar1 == (int *)0x0 || (iVar2 = *piVar1, iVar2 == 0)))
       ) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 8);
    }
    piVar1 = in_ECX;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  if ((in_ECX != (int *)0x0) && (in_ECX[2] != 0)) {
    *(int **)(in_ECX[2] + 0xc) = piVar1;
  }
  FUN_0089d430(param_1);
  return;
}



undefined4 FUN_0089f470(int param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  if (in_ECX == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = in_ECX[2];
  }
  if (iVar2 != 0) {
    if (param_1 == 0) {
      (**(code **)(*in_ECX + 0x60))();
    }
    else {
      iVar1 = (**(code **)(*in_ECX + 0x58))();
      if (iVar1 != *(int *)(param_1 + 8)) {
        (**(code **)(*in_ECX + 0x60))();
        FUN_0088c210(iVar2);
        return 1;
      }
    }
    return 0;
  }
  return 0;
}



void FUN_0089f4d0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  
  if (((in_ECX == (int *)0x0) || (iVar1 = in_ECX[2], iVar1 == 0)) || (iVar1 == -0x14)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x30);
  }
  if (((in_ECX != (int *)0x0) && (iVar1 = in_ECX[2], iVar1 != 0)) && (iVar1 != -0x14)) {
    *(uint *)(iVar1 + 0x30) = uVar2 & 0xffff | param_1 << 0x10;
  }
  (**(code **)(*in_ECX + 0x80))();
  return;
}



void FUN_0089f520(char param_1)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  
  if (((in_ECX == (int *)0x0) || (iVar1 = in_ECX[2], iVar1 == 0)) || (iVar1 == -0x14)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x30);
  }
  if (param_1 == '\0') {
    uVar2 = uVar2 | 0x4000;
  }
  else {
    uVar2 = uVar2 & 0xffffbfff;
  }
  if (((in_ECX != (int *)0x0) && (iVar1 = in_ECX[2], iVar1 != 0)) && (iVar1 != -0x14)) {
    *(uint *)(iVar1 + 0x30) = uVar2;
  }
  (**(code **)(*in_ECX + 0x80))();
  return;
}



void FUN_0089f570(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x0089f575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x58))();
  return;
}



void FUN_0089f580(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  
  if (((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) &&
     ((undefined4 *)(iVar1 + 0x14) != (undefined4 *)0x0)) {
    param_1[1] = *(undefined4 *)(iVar1 + 0x14);
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(iVar1 + 0x2c);
  }
  param_1[4] = 0;
  if (((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) && (iVar1 != -0x14)) {
    *param_1 = *(undefined4 *)(iVar1 + 0x30);
    return;
  }
  *param_1 = 0;
  return;
}



void FUN_0089f5d0(undefined4 param_1)

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
    *(undefined4 *)(iVar2 + 0x10) = 0;
    if (*(int *)(iVar2 + 4) == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)(*(int *)(iVar2 + 4) + 8);
    }
    if (piVar5 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar5 + 0x8c))(param_1);
      if (cVar1 == '\0') {
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
    *(undefined2 *)(iVar2 + 2) = 0;
  }
  FUN_0089d610(unaff_retaddr,param_1);
  return;
}



void FUN_0089f650(int param_1,undefined4 *param_2)

{
  char cVar1;
  int in_ECX;
  undefined1 local_8 [8];
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &DAT_00b3fa80;
  }
  cVar1 = FUN_00890a10(param_2);
  if (((cVar1 != '\0') && (in_ECX != 0)) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_008bc7b0(local_8,param_2);
  }
  if (((param_1 != 0) && (in_ECX != 0)) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_008bc750(param_2,param_1,0);
  }
  return;
}



undefined4 FUN_0089f6b0(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_8 [8];
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_00b3fa80;
  }
  cVar1 = FUN_00890a10(param_1);
  if (cVar1 != '\0') {
    if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
      puVar2 = (undefined4 *)FUN_0047f990(local_8,param_1);
      uVar3 = FUN_00560920(&DAT_00b3fa80,*puVar2);
      return uVar3;
    }
    uVar3 = FUN_00560920(&DAT_00b3fa80,0);
    return uVar3;
  }
  return 0;
}



int FUN_0089f730(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d6856;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) ||
      (piVar4 = (int *)(*(int *)(in_ECX + 8) + 0x14), piVar4 == (int *)0x0)) ||
     (iVar5 = *piVar4, iVar5 == 0)) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(iVar5 + 8);
  }
  if (piVar4 == (int *)0x0) {
    *unaff_FS_OFFSET = local_c;
    return param_1;
  }
  if (param_1 == 0) {
    iVar5 = FUN_00401f00(0xdc,uVar3);
    local_4 = param_1;
    if (iVar5 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = FUN_0070b780(0);
    }
  }
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 8) == 0) {
    FUN_006ff420("bhkWorldObject");
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if (((in_ECX == 0) || (iVar5 = *(int *)(in_ECX + 8), iVar5 == 0)) || (iVar5 == -0x14)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(iVar5 + 0x30);
  }
  FUN_008a8140(uVar6,&local_18);
  cVar2 = FUN_008aa390(&DAT_00b25ac4);
  if (cVar2 != '\0') {
    iVar5 = FUN_00401f00(0x5c,uVar3);
    local_4 = 1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_007095a0();
    }
    *(undefined4 *)(iVar5 + 0x1c) = DAT_00b25ac4;
    *(undefined4 *)(iVar5 + 0x20) = DAT_00b25ac8;
    uVar6 = DAT_00b25acc;
    *(int *)(iVar5 + 0x54) = *(int *)(iVar5 + 0x54) + 1;
    iVar1 = *(int *)(iVar5 + 0x54);
    *(undefined4 *)(iVar5 + 0x24) = uVar6;
    *(undefined4 *)(iVar5 + 0x28) = DAT_00b25ac4;
    *(undefined4 *)(iVar5 + 0x2c) = DAT_00b25ac8;
    uVar6 = DAT_00b25acc;
    *(int *)(iVar5 + 0x54) = iVar1 + 1;
    *(undefined4 *)(iVar5 + 0x30) = uVar6;
    *(undefined4 *)(iVar5 + 0x40) = local_18;
    *(undefined4 *)(iVar5 + 0x44) = local_14;
    *(int *)(iVar5 + 0x54) = iVar1 + 2;
    local_4 = 0xffffffff;
    *(int *)(iVar5 + 0x48) = local_10;
    FUN_00405680(iVar5);
  }
  (**(code **)(*piVar4 + 0x90))(param_1);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



void FUN_0089f8e0(int param_1)

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



void FUN_0089f9a0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 unaff_EDI;
  int *unaff_retaddr;
  undefined1 local_4 [4];
  
  iVar1 = (**(code **)(*in_ECX + 0x74))(local_4);
  if (-1 < *(int *)(iVar1 + 0x14)) {
    FUN_008a75d0(*(undefined4 *)(iVar1 + 0xc),*(int *)(iVar1 + 0x14) * 8,0x14);
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & 0xc0000000 | 0x80000000;
  if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 4) + 8);
  }
  (**(code **)(*unaff_retaddr + 0x2c))(uVar2);
  FUN_0089d7b0(unaff_retaddr);
  (**(code **)(*in_ECX + 100))(unaff_EDI);
  return;
}



char FUN_0089fa50(undefined4 param_1)

{
  char cVar1;
  int *unaff_FS_OFFSET;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined1 local_24 [12];
  undefined4 local_18;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d6888;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar1 = thunk_FUN_00700670(param_1);
  if (cVar1 != '\0') {
    local_30 = 0;
    local_2c = 0;
    local_28 = -0x80000000;
    local_3c = 0;
    local_38 = 0;
    local_34 = 1;
    local_4 = 0;
    local_18 = 0;
    local_10 = -0x80000000;
    FUN_0089f580(&local_3c);
    FUN_0089f580(local_24);
    if (-1 < local_10) {
      FUN_008a75d0(local_18,local_10 * 8,0x14);
    }
    local_4 = 0xffffffff;
    if (-1 < local_28) {
      FUN_008a75d0(local_30,local_28 * 8,0x14);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return cVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0089fb70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  int *piVar4;
  undefined4 local_8c;
  undefined4 local_88;
  char acStack_84 [128];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_8c;
  FUN_0089d820(param_1);
  local_8c = FUN_0070f910(DAT_00ba7d38);
  uVar3 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&local_8c);
  if (((in_ECX == 0) || (iVar1 = *(int *)(in_ECX + 8), iVar1 == 0)) || (iVar1 == -0x14)) {
    local_88 = 0;
  }
  else {
    local_88 = *(undefined4 *)(iVar1 + 0x30);
  }
  FUN_008a9100(param_1);
  if (((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) ||
     ((piVar4 = (int *)(*(int *)(in_ECX + 8) + 0x14), piVar4 == (int *)0x0 ||
      (iVar1 = *piVar4, iVar1 == 0)))) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(iVar1 + 8);
  }
  if (piVar4 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar4 + 4))();
    _sprintf(acStack_84,"%s: 0x%8X",*puVar2,piVar4);
    local_8c = FUN_0070fc30("Shape",acStack_84);
    uVar3 = (uint)*(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&local_8c);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0089fc90(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d68b8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a97094;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7d40 = _DAT_00ba7d40 + -1;
  local_4 = 0xffffffff;
  FUN_0089d870();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0089fd10(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_0089d8e0(param_1);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x18);
  }
  *(undefined4 *)(param_1 + 4) = uVar1;
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(in_ECX + 8) + 0x1c);
    return;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void FUN_0089fd60(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = param_1;
  FUN_00712a20();
  FUN_00712a20();
  FUN_0089d650(uVar1);
  iVar2 = (**(code **)(*in_ECX + 0x74))(&param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  return;
}



undefined4 FUN_0089fe90(char param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((param_1 == 'A') || (param_1 == 'a')) {
    if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
      iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x18);
      goto LAB_0089febe;
    }
  }
  else if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x1c);
    goto LAB_0089febe;
  }
  iVar1 = 0;
LAB_0089febe:
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined1 FUN_0089ff10(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  uVar1 = 0;
  iVar2 = (**(code **)(*in_ECX + 0x58))();
  if (iVar2 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(iVar2 + 0x2b0);
  }
  if (piVar4 != (int *)0x0) {
    uVar1 = FUN_0089d9c0();
    if (in_ECX[2] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX[2] + 0x1c);
    }
    iVar3 = (**(code **)(*piVar4 + 0x58))();
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x34);
    }
    if ((iVar2 == iVar3) && (in_ECX[2] != 0)) {
      FUN_008e7c20(0);
    }
  }
  return uVar1;
}



void FUN_0089ff80(byte param_1)

{
  FUN_0089fc90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0089ffa0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *piVar6;
  undefined4 unaff_retaddr;
  undefined1 local_5 [5];
  
  iVar3 = (**(code **)(*in_ECX + 0x74))(local_5);
  iVar1 = param_1;
  if (*(int *)(iVar3 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(iVar3 + 4) + 0xc);
  }
  if (*(int *)(iVar3 + 8) == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)(*(int *)(iVar3 + 8) + 0xc);
  }
  *(undefined4 *)(iVar3 + 4) = 0;
  *(undefined4 *)(iVar3 + 8) = 0;
  if (iVar4 != 0) {
    cVar2 = FUN_0055e000(iVar4,&param_1);
    if (cVar2 != '\0') {
      if (param_1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 8);
      }
      *(undefined4 *)(iVar3 + 4) = uVar5;
    }
    if (piVar6 != (int *)0x0) {
      cVar2 = FUN_0055e000(piVar6,&param_1);
      iVar4 = param_1;
      if (cVar2 == '\0') {
        iVar4 = (**(code **)(*piVar6 + 0x18))(iVar1);
      }
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar4 + 8);
      }
      *(undefined4 *)(iVar3 + 8) = uVar5;
    }
  }
  FUN_0089d610(unaff_retaddr,iVar1);
  return;
}


