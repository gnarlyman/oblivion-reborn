
void FUN_009600b0(void)

{
  float fVar1;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0x1c) - *(float *)(in_ECX + 0x38);
  *(float *)(in_ECX + 0x20) = *(float *)(in_ECX + 4) - fVar1 * *(float *)(in_ECX + 0x10);
  *(float *)(in_ECX + 0x24) = *(float *)(in_ECX + 8) - *(float *)(in_ECX + 0x14) * fVar1;
  *(float *)(in_ECX + 0x28) = *(float *)(in_ECX + 0xc) - fVar1 * *(float *)(in_ECX + 0x18);
  *(float *)(in_ECX + 0x2c) = fVar1 * *(float *)(in_ECX + 0x10) * 2.0;
  *(float *)(in_ECX + 0x30) = *(float *)(in_ECX + 0x14) * fVar1 * 2.0;
  *(float *)(in_ECX + 0x34) = fVar1 * *(float *)(in_ECX + 0x18) * 2.0;
  return;
}



void FUN_00960180(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  FUN_009600b0();
  return;
}



undefined4 FUN_009601c0(int *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (iVar2 == 2) {
    cVar1 = FUN_0096f0a0(in_ECX + 0x20);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



void FUN_00960200(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int in_ECX;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar3 = (float *)FUN_007101f0(&local_c,param_1 + 4);
  fVar1 = *(float *)(param_2 + 0x30);
  fVar2 = pfVar3[2];
  local_c = *(float *)(param_2 + 0x24) + fVar1 * *pfVar3;
  local_8 = *(float *)(param_2 + 0x28) + pfVar3[1] * fVar1;
  local_4 = *(float *)(param_2 + 0x2c);
  *(float *)(in_ECX + 4) = local_c;
  local_4 = local_4 + fVar1 * fVar2;
  *(float *)(in_ECX + 8) = local_8;
  *(float *)(in_ECX + 0xc) = local_4;
  puVar4 = (undefined4 *)FUN_007101f0(&local_c,param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x10) = *puVar4;
  *(undefined4 *)(in_ECX + 0x14) = puVar4[1];
  *(undefined4 *)(in_ECX + 0x18) = puVar4[2];
  *(float *)(in_ECX + 0x1c) = *(float *)(param_1 + 0x1c) * *(float *)(param_2 + 0x30);
  *(float *)(in_ECX + 0x38) = *(float *)(param_1 + 0x38) * *(float *)(param_2 + 0x30);
  FUN_009600b0();
  return;
}



void FUN_009604c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *in_ECX;
  
  in_ECX[7] = param_2;
  in_ECX[1] = param_3;
  in_ECX[0xe] = param_1;
  in_ECX[2] = param_4;
  in_ECX[4] = param_6;
  in_ECX[3] = param_5;
  in_ECX[5] = param_7;
  *in_ECX = &PTR_LAB_00aa3ac4;
  in_ECX[6] = param_8;
  FUN_009600b0();
  return;
}



undefined4 FUN_00960510(float param_1,int param_2,float *param_3,int param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar3 = param_4;
  iVar2 = param_2;
  if (((DAT_00b3f9a8 == *param_5 - *param_3) && (DAT_00b3f9ac == param_5[1] - param_3[1])) &&
     (DAT_00b3f9b0 == param_5[2] - param_3[2])) {
    fVar4 = (float10)FUN_0096fbb0(param_4 + 4,param_2 + 0x20,&param_2);
  }
  else {
    local_18 = *(undefined4 *)(param_4 + 4);
    local_14 = *(undefined4 *)(param_4 + 8);
    local_c = param_1 * (*param_5 - *param_3);
    local_10 = *(undefined4 *)(param_4 + 0xc);
    local_8 = (param_5[1] - param_3[1]) * param_1;
    local_4 = (param_5[2] - param_3[2]) * param_1;
    fVar4 = (float10)FUN_0096fcd0(&local_18,param_2 + 0x20,&param_2,&param_4);
  }
  fVar1 = *(float *)(iVar2 + 0x38) + *(float *)(iVar3 + 0x10);
  if ((float)fVar4 <= fVar1 * fVar1) {
    return 1;
  }
  return 0;
}



undefined4 FUN_00960650(float param_1,int param_2,float *param_3,int param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar3 = param_4;
  iVar2 = param_2;
  if (((DAT_00b3f9a8 == *param_5 - *param_3) && (DAT_00b3f9ac == param_5[1] - param_3[1])) &&
     (DAT_00b3f9b0 == param_5[2] - param_3[2])) {
    fVar4 = (float10)FUN_0096fcd0(param_2 + 0x20,param_4 + 0x20,&param_4,&param_2);
  }
  else {
    local_24 = *(undefined4 *)(param_4 + 0x20);
    local_20 = *(undefined4 *)(param_4 + 0x24);
    local_c = param_1 * (*param_5 - *param_3);
    local_1c = *(undefined4 *)(param_4 + 0x28);
    local_18 = *(undefined4 *)(param_4 + 0x2c);
    local_8 = (param_5[1] - param_3[1]) * param_1;
    local_14 = *(undefined4 *)(param_4 + 0x30);
    local_10 = *(undefined4 *)(param_4 + 0x34);
    local_4 = (param_5[2] - param_3[2]) * param_1;
    fVar4 = (float10)FUN_009708e0(param_2 + 0x20,&local_24,&param_4,&param_5,&param_2);
  }
  fVar1 = *(float *)(iVar2 + 0x38) + *(float *)(iVar3 + 0x38);
  if ((float)fVar4 <= fVar1 * fVar1) {
    return 1;
  }
  return 0;
}



void FUN_00961580(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00aa3b14;
  in_ECX[1] = *param_2;
  in_ECX[2] = param_2[1];
  in_ECX[3] = param_2[2];
  in_ECX[0xd] = *param_1;
  in_ECX[0xe] = param_1[1];
  in_ECX[0xf] = param_1[2];
  in_ECX[4] = *param_3;
  in_ECX[5] = param_3[1];
  in_ECX[6] = param_3[2];
  in_ECX[7] = *param_4;
  in_ECX[8] = param_4[1];
  in_ECX[9] = param_4[2];
  in_ECX[10] = *param_5;
  in_ECX[0xb] = param_5[1];
  in_ECX[0xc] = param_5[2];
  return;
}



void FUN_00961600(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  iVar1 = 0xf;
  while( true ) {
    in_ECX = in_ECX + 1;
    param_1 = param_1 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *in_ECX = *param_1;
  }
  return;
}



undefined4 FUN_00961620(int *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (iVar2 == 1) {
    cVar1 = FUN_0096ef70(in_ECX + 4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



void FUN_00961680(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int in_ECX;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar3 = (float *)FUN_007101f0(&local_c,param_1 + 4);
  fVar1 = *(float *)(param_2 + 0x30);
  fVar2 = pfVar3[2];
  local_c = *(float *)(param_2 + 0x24) + fVar1 * *pfVar3;
  local_8 = *(float *)(param_2 + 0x28) + pfVar3[1] * fVar1;
  local_4 = *(float *)(param_2 + 0x2c);
  *(float *)(in_ECX + 4) = local_c;
  local_4 = local_4 + fVar1 * fVar2;
  *(float *)(in_ECX + 8) = local_8;
  *(float *)(in_ECX + 0xc) = local_4;
  puVar4 = (undefined4 *)FUN_007101f0(&local_c,param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x10) = *puVar4;
  *(undefined4 *)(in_ECX + 0x14) = puVar4[1];
  *(undefined4 *)(in_ECX + 0x18) = puVar4[2];
  *(float *)(in_ECX + 0x34) = *(float *)(param_1 + 0x34) * *(float *)(param_2 + 0x30);
  puVar4 = (undefined4 *)FUN_007101f0(&local_c,param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x1c) = *puVar4;
  *(undefined4 *)(in_ECX + 0x20) = puVar4[1];
  *(undefined4 *)(in_ECX + 0x24) = puVar4[2];
  *(float *)(in_ECX + 0x38) = *(float *)(param_1 + 0x38) * *(float *)(param_2 + 0x30);
  puVar4 = (undefined4 *)FUN_007101f0(&local_c,param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x28) = *puVar4;
  *(undefined4 *)(in_ECX + 0x2c) = puVar4[1];
  *(undefined4 *)(in_ECX + 0x30) = puVar4[2];
  *(float *)(in_ECX + 0x3c) = *(float *)(param_1 + 0x3c) * *(float *)(param_2 + 0x30);
  return;
}



undefined4
FUN_00962cf0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 in_EAX;
  int iVar4;
  
  fVar1 = *(float *)(param_4 + 4) - *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_4 + 8) - *(float *)(param_2 + 8);
  fVar3 = *(float *)(param_4 + 0xc) - *(float *)(param_2 + 0xc);
  if ((ABS(fVar1 * *(float *)(param_2 + 0x10) + fVar2 * *(float *)(param_2 + 0x14) +
           fVar3 * *(float *)(param_2 + 0x18)) <= *(float *)(param_2 + 0x34)) &&
     (ABS(*(float *)(param_2 + 0x24) * fVar3 +
          *(float *)(param_2 + 0x1c) * fVar1 + *(float *)(param_2 + 0x20) * fVar2) <=
      *(float *)(param_2 + 0x38))) {
    fVar2 = ABS(fVar1 * *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x2c) * fVar2 +
                *(float *)(param_2 + 0x30) * fVar3);
    fVar1 = *(float *)(param_2 + 0x3c);
    if (fVar1 < fVar2 == 0) {
      return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),
                                      (ushort)(fVar1 < fVar2) << 8 |
                                      (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                                      (ushort)(fVar1 == fVar2) << 0xe) >> 8),1);
    }
  }
  FUN_00974250(param_2,param_4,param_1,0x3a83126f,0x38d1b717,0x20);
  FUN_0096f160(param_3,param_5);
  iVar4 = FUN_00438db0();
  if ((iVar4 != 3) && (iVar4 = FUN_00438db0(), iVar4 != 2)) {
    return 0;
  }
  return 1;
}



int FUN_00962e30(float param_1,int param_2,float *param_3,float *param_4,float *param_5,
                float *param_6,float *param_7)

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
  int iVar17;
  float *pfVar18;
  undefined2 uVar20;
  undefined8 *puVar19;
  ushort extraout_var;
  ushort uVar21;
  ushort uVar22;
  float10 fVar23;
  float local_118;
  undefined4 uStack_114;
  double local_108;
  float local_100;
  double local_f8;
  float local_f0;
  double local_e8;
  float local_e0;
  double local_d8;
  float local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  float local_98;
  double local_90;
  double local_88;
  float local_7c;
  float local_78;
  float local_74;
  double local_70;
  double local_68;
  double local_60;
  double local_58 [2];
  float local_44;
  double local_40 [2];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_7c = *param_7 - *param_3;
  local_78 = param_7[1] - param_3[1];
  local_74 = param_7[2] - param_3[2];
  local_14 = *param_4;
  local_2c = *param_5 - local_14;
  local_10 = param_4[1];
  local_28 = param_5[1] - local_10;
  local_d0 = param_4[2];
  local_e0 = param_5[2] - local_d0;
  local_20 = *param_6 - local_14;
  local_1c = param_6[1] - local_10;
  local_100 = param_6[2] - local_d0;
  fVar7 = local_28 * local_100 - local_e0 * local_1c;
  fVar6 = local_20 * local_e0 - local_2c * local_100;
  fVar8 = local_2c * local_1c - local_28 * local_20;
  local_14 = local_14 - *(float *)(param_2 + 4);
  pfVar18 = (float *)(param_2 + 0x1c);
  pfVar1 = (float *)(param_2 + 0x28);
  local_10 = local_10 - *(float *)(param_2 + 8);
  local_d0 = local_d0 - *(float *)(param_2 + 0xc);
  fVar2 = *(float *)(param_2 + 0x10);
  fVar12 = *(float *)(param_2 + 0x18) * fVar8 + fVar7 * fVar2 + *(float *)(param_2 + 0x14) * fVar6;
  fVar11 = *(float *)(param_2 + 0x24) * fVar8 +
           *pfVar18 * fVar7 + *(float *)(param_2 + 0x20) * fVar6;
  fVar10 = *(float *)(param_2 + 0x30) * fVar8 + *pfVar1 * fVar7 + *(float *)(param_2 + 0x2c) * fVar6
  ;
  fVar3 = *(float *)(param_2 + 0x38);
  local_68 = (double)fVar3;
  local_108 = (double)fVar11;
  fVar4 = *(float *)(param_2 + 0x34);
  local_60 = (double)fVar4;
  fVar5 = *(float *)(param_2 + 0x3c);
  local_a0 = (double)fVar5;
  local_e8 = (double)fVar10;
  fVar14 = ABS(fVar11 * fVar3) + ABS(fVar12 * fVar4) + ABS(fVar10 * fVar5);
  local_a8 = (double)local_10;
  local_b8 = (double)local_14;
  local_c0 = (double)local_d0;
  fVar9 = local_d0 * fVar8 + local_10 * fVar6 + local_14 * fVar7;
  uVar22 = (ushort)((uint)local_d0 >> 0x10);
  if (fVar9 <= fVar14) {
    fVar14 = -fVar14;
    uStack_114 = (undefined4)((ulonglong)(double)fVar14 >> 0x20);
    iVar17 = (uint)uVar22 << 0x10;
    if (fVar9 < fVar14) {
      fVar9 = (local_78 * fVar6 + local_7c * fVar7 + local_74 * fVar8) * param_1 + fVar9;
      iVar17 = CONCAT22(uVar22,(ushort)(fVar9 < fVar14) << 8 |
                               (ushort)(NAN(fVar9) || NAN(fVar14)) << 10 |
                               (ushort)(fVar9 == fVar14) << 0xe);
      if (fVar9 < fVar14) {
        return iVar17;
      }
    }
  }
  else {
    fVar9 = (local_78 * fVar6 + local_7c * fVar7 + local_74 * fVar8) * param_1 + fVar9;
    iVar17 = CONCAT22(uVar22,(ushort)(fVar9 < fVar14) << 8 |
                             (ushort)(NAN(fVar9) || NAN(fVar14)) << 10 |
                             (ushort)(fVar9 == fVar14) << 0xe);
    if (fVar9 >= fVar14 && (fVar9 == fVar14) == 0) {
      return iVar17;
    }
  }
  fVar6 = *(float *)(param_2 + 0x14);
  fVar7 = *(float *)(param_2 + 0x18);
  fVar14 = local_d0 * fVar7 + local_14 * fVar2 + local_10 * fVar6;
  fVar9 = local_e0 * fVar7 + local_2c * fVar2 + local_28 * fVar6;
  fVar8 = local_100 * fVar7 + local_20 * fVar2 + local_1c * fVar6;
  local_58[0] = (double)local_78;
  local_70 = (double)local_7c;
  local_d8 = (double)local_74;
  fVar6 = fVar6 * local_78 + local_7c * fVar2 + local_74 * fVar7;
  uVar22 = (ushort)((uint)iVar17 >> 0x10);
  if (fVar14 <= fVar4) {
    fVar4 = -*(float *)(param_2 + 0x34);
    iVar17 = (uint)uVar22 << 0x10;
    if (fVar14 < fVar4) {
      if (fVar9 < 0.0 == (fVar9 == 0.0)) {
        if (fVar8 < fVar9) {
          fVar14 = fVar9 + fVar14;
        }
        else {
          fVar14 = fVar8 + fVar14;
        }
      }
      else {
        if (fVar8 < 0.0) {
          fVar14 = param_1 * fVar6 + fVar14;
          iVar17 = CONCAT22(uVar22,(ushort)(fVar14 < fVar4) << 8 |
                                   (ushort)(NAN(fVar14) || NAN(fVar4)) << 10 |
                                   (ushort)(fVar14 == fVar4) << 0xe);
          if (fVar14 < fVar4) {
            return iVar17;
          }
          goto LAB_009633df;
        }
        fVar14 = fVar8 + fVar14;
      }
      iVar17 = (uint)uVar22 << 0x10;
      if (fVar14 < fVar4) {
        fVar14 = param_1 * fVar6 + fVar14;
        iVar17 = CONCAT22(uVar22,(ushort)(fVar14 < fVar4) << 8 |
                                 (ushort)(NAN(fVar14) || NAN(fVar4)) << 10 |
                                 (ushort)(fVar14 == fVar4) << 0xe);
        if (fVar14 < fVar4) {
          return iVar17;
        }
      }
    }
  }
  else {
    if (fVar9 <= 0.0) {
      if (fVar9 <= fVar8) {
        fVar14 = fVar9 + fVar14;
      }
      else {
        fVar14 = fVar8 + fVar14;
      }
    }
    else {
      if (0.0 <= fVar8) {
        fVar14 = param_1 * fVar6 + fVar14;
        iVar17 = CONCAT22(uVar22,(ushort)(fVar14 < fVar4) << 8 |
                                 (ushort)(NAN(fVar14) || NAN(fVar4)) << 10 |
                                 (ushort)(fVar14 == fVar4) << 0xe);
        if (fVar14 >= fVar4 && (fVar14 == fVar4) == 0) {
          return iVar17;
        }
        goto LAB_009633df;
      }
      fVar14 = fVar8 + fVar14;
    }
    iVar17 = (uint)uVar22 << 0x10;
    if (fVar4 < fVar14) {
      fVar14 = param_1 * fVar6 + fVar14;
      iVar17 = CONCAT22(uVar22,(ushort)(fVar14 < fVar4) << 8 |
                               (ushort)(NAN(fVar14) || NAN(fVar4)) << 10 |
                               (ushort)(fVar14 == fVar4) << 0xe);
      if (fVar14 >= fVar4 && (fVar14 == fVar4) == 0) {
        return iVar17;
      }
    }
  }
LAB_009633df:
  fVar6 = *(float *)(param_2 + 0x24) * local_d0 +
          *pfVar18 * local_14 + *(float *)(param_2 + 0x20) * local_10;
  fVar7 = *(float *)(param_2 + 0x24) * local_e0 +
          *pfVar18 * local_2c + *(float *)(param_2 + 0x20) * local_28;
  local_118 = *(float *)(param_2 + 0x24) * local_100 +
              *pfVar18 * local_20 + *(float *)(param_2 + 0x20) * local_1c;
  fVar4 = *(float *)(param_2 + 0x24) * local_74 +
          *pfVar18 * local_7c + *(float *)(param_2 + 0x20) * local_78;
  uVar22 = (ushort)((uint)iVar17 >> 0x10);
  if (fVar6 <= fVar3) {
    fVar14 = -*(float *)(param_2 + 0x38);
    iVar17 = (uint)uVar22 << 0x10;
    if (fVar6 < fVar14) {
      if (fVar7 <= 0.0) {
        if (local_118 <= 0.0) {
          fVar6 = fVar4 * param_1 + fVar6;
          goto LAB_009634e9;
        }
        fVar6 = local_118 + fVar6;
      }
      else if (local_118 < fVar7) {
        fVar6 = fVar7 + fVar6;
      }
      else {
        fVar6 = local_118 + fVar6;
      }
      iVar17 = (uint)uVar22 << 0x10;
      if (fVar6 < fVar14) {
        fVar6 = fVar4 * param_1 + fVar6;
        iVar17 = CONCAT22(uVar22,(ushort)(fVar6 < fVar14) << 8 |
                                 (ushort)(NAN(fVar6) || NAN(fVar14)) << 10 |
                                 (ushort)(fVar6 == fVar14) << 0xe);
        if (fVar6 < fVar14) {
          return iVar17;
        }
      }
    }
  }
  else {
    if (fVar7 <= 0.0) {
      if (local_118 < fVar7 == (local_118 == fVar7)) {
        fVar6 = fVar7 + fVar6;
      }
      else {
        fVar6 = local_118 + fVar6;
      }
    }
    else {
      if (!NAN(local_118) && 0.0 < local_118 != (local_118 == 0.0)) {
        fVar6 = fVar4 * param_1 + fVar6;
        iVar17 = CONCAT22(uVar22,(ushort)(fVar3 < fVar6) << 8 |
                                 (ushort)(NAN(fVar3) || NAN(fVar6)) << 10 |
                                 (ushort)(fVar3 == fVar6) << 0xe);
        if (fVar3 < fVar6) {
          return iVar17;
        }
        goto LAB_009635a2;
      }
      fVar6 = local_118 + fVar6;
    }
    iVar17 = (uint)uVar22 << 0x10;
    if (fVar3 < fVar6) {
      fVar14 = fVar4 * param_1 + fVar6;
      fVar6 = fVar3;
LAB_009634e9:
      iVar17 = CONCAT22(uVar22,(ushort)(fVar14 < fVar6) << 8 |
                               (ushort)(NAN(fVar14) || NAN(fVar6)) << 10 |
                               (ushort)(fVar14 == fVar6) << 0xe);
      if (fVar14 >= fVar6 && (fVar14 == fVar6) == 0) {
        return iVar17;
      }
    }
  }
LAB_009635a2:
  fVar6 = *(float *)(param_2 + 0x30) * local_d0 +
          *pfVar1 * local_14 + *(float *)(param_2 + 0x2c) * local_10;
  local_44 = *(float *)(param_2 + 0x30) * local_e0 +
             *pfVar1 * local_2c + *(float *)(param_2 + 0x2c) * local_28;
  fVar14 = *(float *)(param_2 + 0x30) * local_100 +
           *pfVar1 * local_20 + *(float *)(param_2 + 0x2c) * local_1c;
  fVar4 = *(float *)(param_2 + 0x30) * local_74 +
          *pfVar1 * local_7c + local_78 * *(float *)(param_2 + 0x2c);
  uVar22 = (ushort)((uint)iVar17 >> 0x10);
  if (fVar6 <= fVar5) {
    fVar16 = -*(float *)(param_2 + 0x3c);
    if (fVar6 < fVar16) {
      if (0.0 < local_44) {
        if (fVar14 < local_44) {
          fVar6 = local_44 + fVar6;
        }
        else {
          fVar6 = fVar14 + fVar6;
        }
LAB_0096371e:
        if (fVar6 < fVar16) {
          fVar6 = fVar4 * param_1 + fVar6;
          uVar21 = (ushort)(fVar6 < fVar16) << 8 | (ushort)(NAN(fVar6) || NAN(fVar16)) << 10 |
                   (ushort)(fVar6 == fVar16) << 0xe;
          goto LAB_00963676;
        }
        goto LAB_00963769;
      }
      if (0.0 < fVar14) {
        fVar6 = fVar14 + fVar6;
        goto LAB_0096371e;
      }
      fVar6 = fVar4 * param_1 + fVar6;
      uVar21 = (ushort)(fVar16 < fVar6) << 8 | (ushort)(NAN(fVar16) || NAN(fVar6)) << 10 |
               (ushort)(fVar16 == fVar6) << 0xe;
      goto LAB_009636b6;
    }
LAB_00963769:
    iVar17 = (uint)uVar22 << 0x10;
  }
  else {
    if (local_44 <= 0.0) {
      if (fVar14 < local_44 == (fVar14 == local_44)) {
        fVar6 = local_44 + fVar6;
      }
      else {
        fVar6 = fVar14 + fVar6;
      }
    }
    else {
      if (0.0 <= fVar14) {
        fVar6 = fVar4 * param_1 + fVar6;
        uVar21 = (ushort)(fVar5 < fVar6) << 8 | (ushort)(NAN(fVar5) || NAN(fVar6)) << 10 |
                 (ushort)(fVar5 == fVar6) << 0xe;
LAB_00963676:
        iVar17 = CONCAT22(uVar22,uVar21);
        if ((POPCOUNT((byte)(uVar21 >> 8) & 5) & 1U) != 0) {
          return iVar17;
        }
        goto LAB_0096376b;
      }
      fVar6 = fVar14 + fVar6;
    }
    iVar17 = (uint)uVar22 << 0x10;
    if (fVar5 < fVar6) {
      fVar6 = fVar4 * param_1 + fVar6;
      uVar21 = (ushort)(fVar6 < fVar5) << 8 | (ushort)(NAN(fVar6) || NAN(fVar5)) << 10 |
               (ushort)(fVar6 == fVar5) << 0xe;
LAB_009636b6:
      iVar17 = CONCAT22(uVar22,uVar21);
      if ((uVar21 & 0x4100) == 0) {
        return iVar17;
      }
    }
  }
LAB_0096376b:
  fVar4 = local_e0 * *(float *)(param_2 + 0x14) - local_28 * *(float *)(param_2 + 0x18);
  fVar6 = local_2c * *(float *)(param_2 + 0x18) - local_e0 * fVar2;
  local_f0 = local_28 * fVar2 - local_2c * *(float *)(param_2 + 0x14);
  fVar16 = local_d0 * local_f0 + local_14 * fVar4 + local_10 * fVar6;
  fVar6 = local_f0 * local_74 + local_78 * fVar6 + local_7c * fVar4;
  local_f8 = (double)local_44;
  local_c8 = (double)fVar7;
  fVar4 = ABS(fVar3 * local_44) + ABS(fVar7 * fVar5);
  uVar22 = (ushort)((uint)iVar17 >> 0x10);
  if (fVar16 <= fVar4) {
    fVar13 = -fVar4;
    if (fVar16 < fVar13) {
      if (fVar12 <= 0.0) {
        fVar4 = fVar6 * param_1 + fVar16;
        goto LAB_009638bd;
      }
      if (fVar12 + fVar16 < fVar13) {
        fVar4 = fVar12 + fVar16 + fVar6 * param_1;
        goto LAB_0096387d;
      }
    }
LAB_0096392a:
    iVar17 = (uint)uVar22 << 0x10;
  }
  else if (NAN(fVar12) || 0.0 < fVar12 == (fVar12 == 0.0)) {
    if (fVar12 + fVar16 <= fVar4) goto LAB_0096392a;
    fVar13 = fVar12 + fVar16 + fVar6 * param_1;
LAB_009638bd:
    iVar17 = CONCAT22(uVar22,(ushort)(fVar4 < fVar13) << 8 |
                             (ushort)(NAN(fVar4) || NAN(fVar13)) << 10 |
                             (ushort)(fVar4 == fVar13) << 0xe);
    if (fVar4 < fVar13) {
      return iVar17;
    }
  }
  else {
    fVar13 = fVar6 * param_1 + fVar16;
LAB_0096387d:
    iVar17 = CONCAT22(uVar22,(ushort)(fVar13 < fVar4) << 8 |
                             (ushort)(NAN(fVar13) || NAN(fVar4)) << 10 |
                             (ushort)(fVar13 == fVar4) << 0xe);
    if (fVar13 >= fVar4 && (fVar13 == fVar4) == 0) {
      return iVar17;
    }
  }
  fVar4 = local_100 * *(float *)(param_2 + 0x14) - local_1c * *(float *)(param_2 + 0x18);
  fVar13 = local_20 * *(float *)(param_2 + 0x18) - local_100 * fVar2;
  fVar2 = local_1c * fVar2 - local_20 * *(float *)(param_2 + 0x14);
  fVar15 = local_d0 * fVar2 + local_14 * fVar4 + local_10 * fVar13;
  fVar4 = fVar2 * local_74 + local_78 * fVar13 + local_7c * fVar4;
  local_40[0] = (double)fVar14;
  local_88 = (double)local_118;
  fVar2 = ABS(fVar3 * fVar14) + ABS(local_118 * fVar5);
  uVar22 = (ushort)((uint)iVar17 >> 0x10);
  if (fVar15 <= fVar2) {
    fVar2 = -fVar2;
    uStack_114 = (undefined4)((ulonglong)(double)fVar2 >> 0x20);
    iVar17 = (uint)uVar22 << 0x10;
    if (fVar15 < fVar2) {
      fVar13 = -fVar12;
      if (fVar13 < 0.0 == (fVar13 == 0.0)) {
        iVar17 = (uint)uVar22 << 0x10;
        if (fVar13 + fVar15 < fVar2) {
          fVar13 = fVar4 * param_1 + fVar13 + fVar15;
          iVar17 = CONCAT22(uVar22,(ushort)(fVar13 < fVar2) << 8 |
                                   (ushort)(NAN(fVar13) || NAN(fVar2)) << 10 |
                                   (ushort)(fVar13 == fVar2) << 0xe);
          if (fVar13 < fVar2) {
            return iVar17;
          }
        }
      }
      else {
        fVar13 = fVar4 * param_1 + fVar15;
        iVar17 = CONCAT22(uVar22,(ushort)(fVar13 < fVar2) << 8 |
                                 (ushort)(NAN(fVar13) || NAN(fVar2)) << 10 |
                                 (ushort)(fVar13 == fVar2) << 0xe);
        if (fVar13 < fVar2) {
          return iVar17;
        }
      }
    }
    uVar20 = (undefined2)((uint)iVar17 >> 0x10);
  }
  else {
    if (-fVar12 < 0.0) {
      fVar13 = -fVar12 + fVar15;
      iVar17 = (uint)uVar22 << 0x10;
      if (fVar2 < fVar13) {
        fVar13 = fVar4 * param_1 + fVar13;
        goto LAB_00963a51;
      }
    }
    else {
      fVar13 = fVar4 * param_1 + fVar15;
LAB_00963a51:
      iVar17 = CONCAT22(uVar22,(ushort)(fVar13 < fVar2) << 8 |
                               (ushort)(NAN(fVar13) || NAN(fVar2)) << 10 |
                               (ushort)(fVar13 == fVar2) << 0xe);
      if (fVar13 >= fVar2 && (fVar13 == fVar2) == 0) {
        return iVar17;
      }
    }
    uVar20 = (undefined2)((uint)iVar17 >> 0x10);
  }
  local_118 = local_118 - fVar7;
  fVar15 = fVar15 - fVar16;
  fVar4 = fVar4 - fVar6;
  local_90 = (double)(fVar14 - local_44);
  local_b0 = (double)local_118;
  fVar2 = ABS(fVar3 * (fVar14 - local_44)) + ABS(fVar5 * local_118);
  if (fVar15 <= fVar2) {
    fVar2 = -fVar2;
    if (fVar15 < fVar2) {
      fVar12 = -fVar12;
      if (fVar12 < 0.0 == (fVar12 == 0.0)) {
        if (fVar12 + fVar15 < fVar2) {
          fVar3 = fVar4 * param_1 + fVar12 + fVar15;
          if (fVar3 < fVar2) {
            return CONCAT22(uVar20,(ushort)(fVar3 < fVar2) << 8 |
                                   (ushort)(NAN(fVar3) || NAN(fVar2)) << 10 |
                                   (ushort)(fVar3 == fVar2) << 0xe);
          }
        }
      }
      else {
        fVar15 = fVar4 * param_1 + fVar15;
        if (fVar2 >= fVar15 && (fVar2 == fVar15) == 0) {
          return CONCAT22(uVar20,(ushort)(fVar2 < fVar15) << 8 |
                                 (ushort)(NAN(fVar2) || NAN(fVar15)) << 10 |
                                 (ushort)(fVar2 == fVar15) << 0xe);
        }
      }
    }
  }
  else if (-fVar12 < 0.0) {
    fVar15 = -fVar12 + fVar15;
    if (fVar2 < fVar15) {
      fVar15 = fVar4 * param_1 + fVar15;
      if (fVar15 >= fVar2 && (fVar15 == fVar2) == 0) {
        return CONCAT22(uVar20,(ushort)(fVar15 < fVar2) << 8 |
                               (ushort)(NAN(fVar15) || NAN(fVar2)) << 10 |
                               (ushort)(fVar15 == fVar2) << 0xe);
      }
    }
  }
  else {
    fVar15 = fVar4 * param_1 + fVar15;
    if (fVar2 < fVar15) {
      return CONCAT22(uVar20,(ushort)(fVar2 < fVar15) << 8 |
                             (ushort)(NAN(fVar2) || NAN(fVar15)) << 10 |
                             (ushort)(fVar2 == fVar15) << 0xe);
    }
  }
  local_24 = local_e0;
  local_18 = local_100;
  local_c = local_d0;
  pfVar18 = (float *)FUN_00498fe0(&local_118,&local_2c);
  fVar2 = pfVar18[2];
  local_118 = (float)local_c0 * fVar2 + (float)local_a8 * pfVar18[1] + (float)local_b8 * *pfVar18;
  fVar3 = fVar2 * (float)local_d8 + (float)local_70 * *pfVar18 + (float)local_58[0] * pfVar18[1];
  fVar4 = ABS((float)((float10)local_60 * (float10)local_f8)) + ABS(fVar9 * (float)local_a0);
  local_f8 = (double)local_118;
  uVar20 = (undefined2)((uint)fVar2 >> 0x10);
  if (local_118 <= fVar4) {
    fVar4 = -fVar4;
    if (local_118 < fVar4) {
      if (0.0 < fVar11) {
        if ((float)local_108 + local_118 < fVar4) {
          fVar2 = (float)local_108 + local_118 + param_1 * fVar3;
          if (fVar2 < fVar4) {
            return CONCAT22(uVar20,(ushort)(fVar2 < fVar4) << 8 |
                                   (ushort)(NAN(fVar2) || NAN(fVar4)) << 10 |
                                   (ushort)(fVar2 == fVar4) << 0xe);
          }
        }
      }
      else {
        fVar2 = param_1 * fVar3 + local_118;
        if (fVar4 >= fVar2 && (fVar4 == fVar2) == 0) {
          return CONCAT22(uVar20,(ushort)(fVar4 < fVar2) << 8 |
                                 (ushort)(NAN(fVar4) || NAN(fVar2)) << 10 |
                                 (ushort)(fVar4 == fVar2) << 0xe);
        }
      }
    }
  }
  else if (NAN(fVar11) || 0.0 < fVar11 == (fVar11 == 0.0)) {
    if (fVar4 < (float)local_108 + local_118) {
      fVar2 = (float)local_108 + local_118 + param_1 * fVar3;
      if (fVar2 >= fVar4 && (fVar2 == fVar4) == 0) {
        return CONCAT22(uVar20,(ushort)(fVar2 < fVar4) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar4)) << 10 |
                               (ushort)(fVar2 == fVar4) << 0xe);
      }
    }
  }
  else {
    fVar2 = param_1 * fVar3 + local_118;
    if (fVar4 < fVar2) {
      return CONCAT22(uVar20,(ushort)(fVar4 < fVar2) << 8 | (ushort)(NAN(fVar4) || NAN(fVar2)) << 10
                             | (ushort)(fVar4 == fVar2) << 0xe);
    }
  }
  pfVar18 = (float *)FUN_00498fe0(&local_118,&local_20);
  local_100 = pfVar18[2];
  fVar4 = (float)local_c0 * local_100 + (float)local_a8 * pfVar18[1] + (float)local_b8 * *pfVar18;
  fVar2 = local_100 * (float)local_d8 + (float)local_70 * *pfVar18 + (float)local_58[0] * pfVar18[1]
  ;
  _local_118 = CONCAT44(uStack_114,fVar2);
  local_108 = (double)fVar8;
  fVar5 = ABS((float)((float10)local_60 * (float10)local_40[0])) + ABS(fVar8 * (float)local_a0);
  uVar22 = (ushort)((uint)local_100 >> 0x10);
  if (fVar4 <= fVar5) {
    fVar5 = -fVar5;
    if (fVar5 <= fVar4) {
LAB_0096404b:
      iVar17 = (uint)uVar22 << 0x10;
    }
    else {
      fVar6 = -fVar11;
      if (fVar6 < 0.0 == (fVar6 == 0.0)) {
        if (fVar5 <= fVar6 + fVar4) goto LAB_0096404b;
        fVar6 = param_1 * fVar2 + fVar6 + fVar4;
        iVar17 = CONCAT22(uVar22,(ushort)(fVar6 < fVar5) << 8 |
                                 (ushort)(NAN(fVar6) || NAN(fVar5)) << 10 |
                                 (ushort)(fVar6 == fVar5) << 0xe);
        if (fVar6 < fVar5) {
          return iVar17;
        }
      }
      else {
        fVar6 = param_1 * fVar2 + fVar4;
        iVar17 = CONCAT22(uVar22,(ushort)(fVar6 < fVar5) << 8 |
                                 (ushort)(NAN(fVar6) || NAN(fVar5)) << 10 |
                                 (ushort)(fVar6 == fVar5) << 0xe);
        if (fVar6 < fVar5) {
          return iVar17;
        }
      }
    }
  }
  else {
    if (-fVar11 < 0.0) {
      fVar6 = -fVar11 + fVar4;
      if (fVar6 <= fVar5) goto LAB_0096404b;
      fVar6 = param_1 * fVar2 + fVar6;
    }
    else {
      fVar6 = param_1 * fVar2 + fVar4;
    }
    iVar17 = CONCAT22(uVar22,(ushort)(fVar6 < fVar5) << 8 | (ushort)(NAN(fVar6) || NAN(fVar5)) << 10
                             | (ushort)(fVar6 == fVar5) << 0xe);
    if (fVar6 >= fVar5 && (fVar6 == fVar5) == 0) {
      return iVar17;
    }
  }
  fVar4 = fVar4 - (float)local_f8;
  fVar2 = fVar2 - fVar3;
  local_f8 = (double)(fVar8 - fVar9);
  fVar3 = ABS((float)((float10)local_60 * (float10)local_90)) +
          ABS((float)local_a0 * (fVar8 - fVar9));
  uVar20 = (undefined2)((uint)iVar17 >> 0x10);
  if (fVar4 <= fVar3) {
    fVar3 = -fVar3;
    if (fVar4 < fVar3) {
      fVar11 = -fVar11;
      if (fVar11 < 0.0 == (fVar11 == 0.0)) {
        if (fVar11 + fVar4 < fVar3) {
          fVar2 = fVar11 + fVar4 + fVar2 * param_1;
          if (fVar3 >= fVar2 && (fVar3 == fVar2) == 0) {
            return CONCAT22(uVar20,(ushort)(fVar3 < fVar2) << 8 |
                                   (ushort)(NAN(fVar3) || NAN(fVar2)) << 10 |
                                   (ushort)(fVar3 == fVar2) << 0xe);
          }
        }
      }
      else {
        fVar4 = fVar2 * param_1 + fVar4;
        if (fVar4 < fVar3) {
          return CONCAT22(uVar20,(ushort)(fVar4 < fVar3) << 8 |
                                 (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
                                 (ushort)(fVar4 == fVar3) << 0xe);
        }
      }
    }
  }
  else if (-fVar11 < 0.0) {
    fVar4 = -fVar11 + fVar4;
    if (fVar3 < fVar4) {
      fVar4 = fVar4 + fVar2 * param_1;
      if (fVar3 < fVar4) {
        return CONCAT22(uVar20,(ushort)(fVar3 < fVar4) << 8 |
                               (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                               (ushort)(fVar3 == fVar4) << 0xe);
      }
    }
  }
  else {
    fVar4 = fVar2 * param_1 + fVar4;
    if (fVar4 >= fVar3 && (fVar4 == fVar3) == 0) {
      return CONCAT22(uVar20,(ushort)(fVar4 < fVar3) << 8 | (ushort)(NAN(fVar4) || NAN(fVar3)) << 10
                             | (ushort)(fVar4 == fVar3) << 0xe);
    }
  }
  pfVar18 = (float *)FUN_00498fe0(local_40,&local_2c);
  local_a0 = *(double *)pfVar18;
  local_98 = pfVar18[2];
  fVar3 = (float)local_c0 * local_98 + (float)local_a8 * pfVar18[1] + (float)local_b8 * *pfVar18;
  fVar2 = local_98 * (float)local_d8 + (float)local_70 * *pfVar18 + (float)local_58[0] * pfVar18[1];
  fVar4 = ABS((float)((float10)local_c8 * (float10)local_60)) + ABS(fVar9 * (float)local_68);
  uVar20 = (undefined2)((uint)local_98 >> 0x10);
  if (fVar3 <= fVar4) {
    fVar4 = -fVar4;
    if (fVar3 < fVar4) {
      if (0.0 < fVar10) {
        if ((float)local_e8 + fVar3 < fVar4) {
          fVar5 = (float)local_e8 + fVar3 + param_1 * fVar2;
          if (fVar5 < fVar4) {
            return CONCAT22(uVar20,(ushort)(fVar5 < fVar4) << 8 |
                                   (ushort)(NAN(fVar5) || NAN(fVar4)) << 10 |
                                   (ushort)(fVar5 == fVar4) << 0xe);
          }
        }
      }
      else {
        fVar5 = param_1 * fVar2 + fVar3;
        if (fVar4 >= fVar5 && (fVar4 == fVar5) == 0) {
          return CONCAT22(uVar20,(ushort)(fVar4 < fVar5) << 8 |
                                 (ushort)(NAN(fVar4) || NAN(fVar5)) << 10 |
                                 (ushort)(fVar4 == fVar5) << 0xe);
        }
      }
    }
  }
  else if (NAN(fVar10) || 0.0 < fVar10 == (fVar10 == 0.0)) {
    if (fVar4 < (float)local_e8 + fVar3) {
      fVar5 = (float)local_e8 + fVar3 + param_1 * fVar2;
      if (fVar5 >= fVar4 && (fVar5 == fVar4) == 0) {
        return CONCAT22(uVar20,(ushort)(fVar5 < fVar4) << 8 |
                               (ushort)(NAN(fVar5) || NAN(fVar4)) << 10 |
                               (ushort)(fVar5 == fVar4) << 0xe);
      }
    }
  }
  else {
    fVar5 = param_1 * fVar2 + fVar3;
    if (fVar4 < fVar5) {
      return CONCAT22(uVar20,(ushort)(fVar4 < fVar5) << 8 | (ushort)(NAN(fVar4) || NAN(fVar5)) << 10
                             | (ushort)(fVar4 == fVar5) << 0xe);
    }
  }
  puVar19 = (undefined8 *)FUN_00498fe0(local_58,&local_20);
  local_e8 = (double)*puVar19;
  local_e0 = *(float *)(puVar19 + 1);
  fVar23 = (float10)FUN_0047d9e0(&local_14);
  fVar4 = (float)fVar23;
  fVar23 = (float10)FUN_0047d9e0(&local_7c);
  fVar5 = (float)fVar23;
  fVar6 = ABS((float)((float10)local_108 * (float10)local_68)) +
          ABS((float)((float10)local_88 * (float10)local_60));
  if (fVar4 <= fVar6) {
    fVar6 = -fVar6;
    if (fVar6 <= fVar4) {
LAB_0096453c:
      iVar17 = (uint)extraout_var << 0x10;
    }
    else {
      fVar7 = -fVar10;
      if (fVar7 < 0.0 == (fVar7 == 0.0)) {
        if (fVar6 <= fVar7 + fVar4) goto LAB_0096453c;
        fVar7 = param_1 * fVar5 + fVar7 + fVar4;
        iVar17 = CONCAT22(extraout_var,
                          (ushort)(fVar7 < fVar6) << 8 | (ushort)(NAN(fVar7) || NAN(fVar6)) << 10 |
                          (ushort)(fVar7 == fVar6) << 0xe);
        if (fVar7 < fVar6) {
          return iVar17;
        }
      }
      else {
        fVar7 = param_1 * fVar5 + fVar4;
        iVar17 = CONCAT22(extraout_var,
                          (ushort)(fVar7 < fVar6) << 8 | (ushort)(NAN(fVar7) || NAN(fVar6)) << 10 |
                          (ushort)(fVar7 == fVar6) << 0xe);
        if (fVar7 < fVar6) {
          return iVar17;
        }
      }
    }
  }
  else {
    if (-fVar10 < 0.0) {
      fVar7 = -fVar10 + fVar4;
      if (fVar7 <= fVar6) goto LAB_0096453c;
      fVar7 = param_1 * fVar5 + fVar7;
    }
    else {
      fVar7 = param_1 * fVar5 + fVar4;
    }
    iVar17 = CONCAT22(extraout_var,
                      (ushort)(fVar7 < fVar6) << 8 | (ushort)(NAN(fVar7) || NAN(fVar6)) << 10 |
                      (ushort)(fVar7 == fVar6) << 0xe);
    if (fVar7 >= fVar6 && (fVar7 == fVar6) == 0) {
      return iVar17;
    }
  }
  fVar4 = fVar4 - fVar3;
  fVar5 = fVar5 - fVar2;
  fVar2 = ABS((float)((float10)local_68 * (float10)local_f8)) +
          ABS((float)((float10)local_60 * (float10)local_b0));
  uVar20 = (undefined2)((uint)iVar17 >> 0x10);
  if (fVar4 <= fVar2) {
    fVar2 = -fVar2;
    if (fVar2 < fVar4 != 0 || (fVar2 == fVar4) != 0) {
      return CONCAT31((int3)(CONCAT22(uVar20,(ushort)(fVar2 < fVar4) << 8 |
                                             (ushort)(NAN(fVar2) || NAN(fVar4)) << 10 |
                                             (ushort)(fVar2 == fVar4) << 0xe) >> 8),1);
    }
    fVar10 = -fVar10;
    if (fVar10 < 0.0 != (fVar10 == 0.0)) {
      fVar4 = fVar5 * param_1 + fVar4;
      iVar17 = CONCAT22(uVar20,(ushort)(fVar4 < fVar2) << 8 |
                               (ushort)(NAN(fVar4) || NAN(fVar2)) << 10 |
                               (ushort)(fVar4 == fVar2) << 0xe);
      if (fVar4 < fVar2) {
        return iVar17;
      }
      goto LAB_009646a1;
    }
    fVar10 = fVar10 + fVar4;
    uVar22 = (ushort)(fVar10 < fVar2) << 8 | (ushort)(NAN(fVar10) || NAN(fVar2)) << 10 |
             (ushort)(fVar10 == fVar2) << 0xe;
    if (fVar10 < fVar2) {
      fVar10 = fVar10 + fVar5 * param_1;
      iVar17 = CONCAT22(uVar20,(ushort)(fVar2 < fVar10) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar10)) << 10 |
                               (ushort)(fVar2 == fVar10) << 0xe);
      if (fVar2 >= fVar10 && (fVar2 == fVar10) == 0) {
        return iVar17;
      }
      goto LAB_009646a1;
    }
  }
  else {
    if (0.0 <= -fVar10) {
      fVar4 = fVar5 * param_1 + fVar4;
      iVar17 = CONCAT22(uVar20,(ushort)(fVar4 < fVar2) << 8 |
                               (ushort)(NAN(fVar4) || NAN(fVar2)) << 10 |
                               (ushort)(fVar4 == fVar2) << 0xe);
      if (fVar4 >= fVar2 && (fVar4 == fVar2) == 0) {
        return iVar17;
      }
      goto LAB_009646a1;
    }
    fVar4 = -fVar10 + fVar4;
    uVar22 = (ushort)(fVar4 < fVar2) << 8 | (ushort)(NAN(fVar4) || NAN(fVar2)) << 10 |
             (ushort)(fVar4 == fVar2) << 0xe;
    if (fVar4 < fVar2 == 0 && (fVar4 == fVar2) == 0) {
      fVar4 = fVar4 + fVar5 * param_1;
      iVar17 = CONCAT22(uVar20,(ushort)(fVar2 < fVar4) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar4)) << 10 |
                               (ushort)(fVar2 == fVar4) << 0xe);
      if (fVar2 < fVar4) {
        return iVar17;
      }
      goto LAB_009646a1;
    }
  }
  iVar17 = CONCAT22(uVar20,uVar22);
LAB_009646a1:
  return CONCAT31((int3)((uint)iVar17 >> 8),1);
}



float * FUN_009647b0(float *param_1,int param_2,int param_3,int param_4,float param_5,float param_6,
                    float param_7)

{
  float fVar1;
  bool bVar2;
  int in_ECX;
  int iVar3;
  
  *param_1 = DAT_00b3f9a8;
  param_1[1] = DAT_00b3f9ac;
  param_1[2] = DAT_00b3f9b0;
  iVar3 = 0;
  if (((DAT_00b3f9a8 == param_5) && (DAT_00b3f9ac == param_6)) && (DAT_00b3f9b0 == param_7)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) ||
     (1.1920929e-07 <
      ABS(*(float *)(in_ECX + 0x18) * param_7 +
          *(float *)(in_ECX + 0x10) * param_5 + *(float *)(in_ECX + 0x14) * param_6))) {
    if (param_2 == 1) {
      *param_1 = *param_1 + *(float *)(in_ECX + 0x10);
      param_1[1] = *(float *)(in_ECX + 0x14) + param_1[1];
      fVar1 = *(float *)(in_ECX + 0x18) + param_1[2];
LAB_00964890:
      param_1[2] = fVar1;
      iVar3 = 1;
    }
    else if (param_2 == -1) {
      *param_1 = *param_1 - *(float *)(in_ECX + 0x10);
      param_1[1] = param_1[1] - *(float *)(in_ECX + 0x14);
      fVar1 = param_1[2] - *(float *)(in_ECX + 0x18);
      goto LAB_00964890;
    }
    if (!bVar2) goto LAB_0096489c;
LAB_009648ca:
    if (param_3 == 1) {
      *param_1 = *param_1 + *(float *)(in_ECX + 0x1c);
      param_1[1] = *(float *)(in_ECX + 0x20) + param_1[1];
      fVar1 = *(float *)(in_ECX + 0x24) + param_1[2];
LAB_00964906:
      param_1[2] = fVar1;
      iVar3 = iVar3 + 1;
    }
    else if (param_3 == -1) {
      *param_1 = *param_1 - *(float *)(in_ECX + 0x1c);
      param_1[1] = param_1[1] - *(float *)(in_ECX + 0x20);
      fVar1 = param_1[2] - *(float *)(in_ECX + 0x24);
      goto LAB_00964906;
    }
    if (!bVar2) goto LAB_00964910;
  }
  else {
LAB_0096489c:
    if (1.1920929e-07 <
        ABS(*(float *)(in_ECX + 0x24) * param_7 +
            param_5 * *(float *)(in_ECX + 0x1c) + *(float *)(in_ECX + 0x20) * param_6))
    goto LAB_009648ca;
LAB_00964910:
    if (ABS(*(float *)(in_ECX + 0x2c) * param_6 + *(float *)(in_ECX + 0x28) * param_5 +
            *(float *)(in_ECX + 0x30) * param_7) <= 1.1920929e-07) goto LAB_0096498c;
  }
  if (param_4 == 1) {
    *param_1 = *param_1 + *(float *)(in_ECX + 0x28);
    param_1[1] = *(float *)(in_ECX + 0x2c) + param_1[1];
    fVar1 = *(float *)(in_ECX + 0x30) + param_1[2];
  }
  else {
    if (param_4 != -1) goto LAB_0096498c;
    *param_1 = *param_1 - *(float *)(in_ECX + 0x28);
    param_1[1] = param_1[1] - *(float *)(in_ECX + 0x2c);
    fVar1 = param_1[2] - *(float *)(in_ECX + 0x30);
  }
  param_1[2] = fVar1;
  iVar3 = iVar3 + 1;
LAB_0096498c:
  if (iVar3 != 1) {
    FUN_0043f350();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2
FUN_00964ab0(float param_1,int param_2,float *param_3,float *param_4,float *param_5,float *param_6,
            float *param_7,float *param_8,float *param_9,char param_10,float *param_11,
            float *param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  double *pdVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  float *pfVar17;
  int iVar18;
  float *pfVar19;
  int iVar20;
  int iVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float *pfVar25;
  int local_230;
  int local_220;
  undefined8 local_218;
  float local_210;
  float local_204 [3];
  double local_1f8;
  double local_1f0;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float *local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  undefined8 local_1b0;
  float local_1a8;
  double local_1a0;
  undefined4 local_198;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  double local_150;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float fStack_134;
  float local_130;
  double local_128;
  double local_120;
  double local_118;
  float local_110;
  float local_108;
  float fStack_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  double local_e0 [2];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  double local_18 [2];
  
  local_144 = *param_7 - *param_3;
  pfVar17 = (float *)(param_2 + 0x34);
  pfVar25 = (float *)(param_2 + 0x10);
  local_140 = param_7[1] - param_3[1];
  local_13c = param_7[2] - param_3[2];
  local_15c = *param_4;
  local_18c = *param_5 - local_15c;
  local_158 = param_4[1];
  local_188 = param_5[1] - local_158;
  local_154 = param_4[2];
  local_184 = param_5[2] - local_154;
  local_180 = *param_6 - local_15c;
  local_17c = param_6[1] - local_158;
  local_178 = param_6[2] - local_154;
  local_a8[0] = (double)local_178;
  local_68[0] = (double)local_188;
  local_128 = (double)local_17c;
  local_78[0] = (double)local_184;
  local_f8 = local_188 * local_178 - local_184 * local_17c;
  local_150 = (double)local_180;
  local_120 = (double)local_18c;
  local_f4 = local_180 * local_184 - local_18c * local_178;
  pfVar12 = (float *)(param_2 + 4);
  local_f0 = local_18c * local_17c - local_188 * local_180;
  local_15c = local_15c - *pfVar12;
  iVar21 = 0;
  local_220 = 0;
  local_158 = local_158 - *(float *)(param_2 + 8);
  local_154 = local_154 - *(float *)(param_2 + 0xc);
  iVar18 = 0;
  *param_8 = 0.0;
  local_1e4 = *(float *)(param_2 + 0x18) * local_f0 +
              *(float *)(param_2 + 0x14) * local_f4 + *pfVar25 * local_f8;
  local_1e0 = *(float *)(param_2 + 0x24) * local_f0 +
              *(float *)(param_2 + 0x1c) * local_f8 + *(float *)(param_2 + 0x20) * local_f4;
  local_1dc = *(float *)(param_2 + 0x30) * local_f0 +
              *(float *)(param_2 + 0x28) * local_f8 + *(float *)(param_2 + 0x2c) * local_f4;
  local_e0[0] = (double)local_1dc;
  fVar2 = ABS(local_1dc) * *(float *)(param_2 + 0x3c) +
          ABS(local_1e4) * *pfVar17 + ABS(local_1e0) * *(float *)(param_2 + 0x38);
  local_38[0] = (double)local_158;
  local_58[0] = (double)local_15c;
  local_28[0] = (double)local_154;
  fVar1 = local_154 * local_f0 + local_158 * local_f4 + local_15c * local_f8;
  if (fVar1 <= fVar2) {
    if (fVar1 < -fVar2) {
      fVar3 = local_140 * local_f4 + local_144 * local_f8 + local_13c * local_f0;
      if (param_1 * fVar3 + fVar1 < -fVar2) {
        return 0;
      }
      fVar1 = -((fVar2 + fVar1) / fVar3);
      if (0.0 < fVar1) {
        *param_8 = fVar1;
        iVar18 = 1;
        iVar21 = -1;
      }
    }
  }
  else {
    fVar3 = local_140 * local_f4 + local_144 * local_f8 + local_13c * local_f0;
    if (fVar2 < param_1 * fVar3 + fVar1) {
      return 0;
    }
    fVar3 = (fVar2 - fVar1) / fVar3;
    if (0.0 < fVar3) {
      iVar18 = 1;
      *param_8 = fVar3;
      iVar21 = 1;
    }
  }
  local_98[0] = (double)local_140;
  pfVar13 = (float *)(param_2 + 0x18);
  local_48[0] = (double)local_144;
  local_88[0] = (double)local_13c;
  local_230 = 2;
  pfVar19 = pfVar17;
  local_1f0._0_4_ = &local_1d0;
  do {
    fVar1 = pfVar13[-1];
    fVar2 = pfVar13[-2];
    fVar3 = *pfVar13;
    fVar5 = local_154 * fVar3 + local_158 * fVar1 + local_15c * fVar2;
    *(float *)(((int)local_204 - (int)pfVar17) + (int)pfVar19) = fVar5;
    fVar6 = local_184 * fVar3 + local_188 * fVar1 + local_18c * fVar2;
    local_1f0._0_4_[-1] = fVar6;
    fVar10 = local_178 * fVar3 + local_17c * fVar1 + local_180 * fVar2;
    *local_1f0._0_4_ = fVar10;
    fVar2 = local_144 * fVar2 + local_140 * fVar1 + local_13c * fVar3;
    fVar1 = *pfVar19;
    if (fVar5 <= fVar1) {
      fVar3 = -*pfVar19;
      if (fVar5 < fVar3) {
        if (0.0 < fVar6) {
          if (fVar10 < fVar6) {
            fVar6 = fVar6 + fVar5;
            if (fVar6 < fVar3) {
              if (param_1 * fVar2 + fVar6 < fVar3) {
                return 0;
              }
              fVar1 = -((fVar6 + fVar1) / fVar2);
              if (*param_8 < fVar1) {
                *param_8 = fVar1;
                local_220 = 1;
                iVar21 = -1;
                iVar18 = local_230;
              }
            }
          }
          else if (fVar10 + fVar5 < fVar3) {
            if (param_1 * fVar2 + fVar10 + fVar5 < fVar3) {
              return 0;
            }
            goto LAB_009651e0;
          }
        }
        else if (0.0 < fVar10) {
          if (fVar10 + fVar5 < fVar3) {
            if (param_1 * fVar2 + fVar10 + fVar5 < fVar3) {
              return 0;
            }
LAB_009651e0:
            fVar1 = -((fVar10 + fVar5 + fVar1) / fVar2);
            if (*param_8 < fVar1) {
              *param_8 = fVar1;
              local_220 = 2;
              iVar21 = -1;
              iVar18 = local_230;
            }
          }
        }
        else {
          if (param_1 * fVar2 + fVar5 < fVar3) {
            return 0;
          }
          fVar1 = -((fVar5 + fVar1) / fVar2);
          if (*param_8 < fVar1) {
            *param_8 = fVar1;
            local_220 = 0;
            iVar21 = -1;
            iVar18 = local_230;
          }
        }
      }
    }
    else if (fVar6 <= 0.0) {
      if (fVar10 < fVar6 != (fVar10 == fVar6)) goto LAB_00965024;
      fVar5 = fVar5 + fVar6;
      if (fVar1 < fVar5) {
        if (fVar1 < param_1 * fVar2 + fVar5) {
          return 0;
        }
        fVar2 = (fVar1 - fVar5) / fVar2;
        if (*param_8 < fVar2) {
          *param_8 = fVar2;
          iVar21 = 1;
          local_220 = 1;
          iVar18 = local_230;
        }
      }
    }
    else if (NAN(fVar10) || 0.0 < fVar10 == (fVar10 == 0.0)) {
LAB_00965024:
      fVar5 = fVar5 + fVar10;
      if (fVar1 < fVar5) {
        if (fVar1 < param_1 * fVar2 + fVar5) {
          return 0;
        }
        fVar2 = (fVar1 - fVar5) / fVar2;
        if (*param_8 < fVar2) {
          *param_8 = fVar2;
          local_220 = 2;
          iVar21 = 1;
          iVar18 = local_230;
        }
      }
    }
    else {
      if (fVar1 < param_1 * fVar2 + fVar5) {
        return 0;
      }
      fVar2 = (fVar1 - fVar5) / fVar2;
      if (*param_8 < fVar2) {
        *param_8 = fVar2;
        local_220 = 0;
        iVar21 = 1;
        iVar18 = local_230;
      }
    }
    local_1f0._0_4_ = local_1f0._0_4_ + 3;
    pfVar19 = pfVar19 + 1;
    pfVar13 = pfVar13 + 3;
    iVar20 = local_230 + -1;
    local_230 = local_230 + 1;
  } while (iVar20 < 3);
  local_d0 = local_184 * *(float *)(param_2 + 0x14) - local_188 * *(float *)(param_2 + 0x18);
  local_cc = local_18c * *(float *)(param_2 + 0x18) - *pfVar25 * local_184;
  local_c8 = local_188 * *pfVar25 - local_18c * *(float *)(param_2 + 0x14);
  fVar2 = local_154 * local_c8 + local_158 * local_cc + local_15c * local_d0;
  fVar1 = local_c8 * local_13c + local_144 * local_d0 + local_140 * local_cc;
  fVar3 = ABS(local_1bc) * *(float *)(param_2 + 0x38) + *(float *)(param_2 + 0x3c) * ABS(local_1c8);
  local_230 = iVar21;
  if (fVar2 <= fVar3) {
    fVar5 = -fVar3;
    if (fVar2 < fVar5) {
      if (0.0 < local_1e4) {
        fVar6 = local_1e4 + fVar2;
        if (fVar6 < fVar5) {
          if (param_1 * fVar1 + fVar6 < fVar5) {
            return 0;
          }
          fVar3 = -((fVar6 + fVar3) / fVar1);
          if (*param_8 < fVar3) {
            *param_8 = fVar3;
            iVar18 = 5;
            local_220 = 1;
            local_230 = -1;
          }
        }
      }
      else {
        if (param_1 * fVar1 + fVar2 < fVar5) {
          return 0;
        }
        fVar3 = -((fVar3 + fVar2) / fVar1);
        if (*param_8 < fVar3) {
          *param_8 = fVar3;
          iVar18 = 5;
          local_220 = 0;
          local_230 = -1;
        }
      }
    }
  }
  else if (NAN(local_1e4) || 0.0 < local_1e4 == (local_1e4 == 0.0)) {
    fVar5 = local_1e4 + fVar2;
    if (fVar3 < fVar5) {
      if (fVar3 < param_1 * fVar1 + fVar5) {
        return 0;
      }
      fVar3 = (fVar3 - fVar5) / fVar1;
      if (*param_8 < fVar3) {
        *param_8 = fVar3;
        iVar18 = 5;
        local_220 = 1;
        local_230 = 1;
      }
    }
  }
  else {
    if (fVar3 < param_1 * fVar1 + fVar2) {
      return 0;
    }
    fVar3 = (fVar3 - fVar2) / fVar1;
    if (*param_8 < fVar3) {
      *param_8 = fVar3;
      iVar18 = 5;
      local_220 = 0;
      local_230 = 1;
    }
  }
  local_168 = local_178 * *(float *)(param_2 + 0x14) - local_17c * *(float *)(param_2 + 0x18);
  local_164 = local_180 * *(float *)(param_2 + 0x18) - *pfVar25 * local_178;
  local_160 = *pfVar25 * local_17c - local_180 * *(float *)(param_2 + 0x14);
  fVar5 = local_154 * local_160 + local_158 * local_164 + local_15c * local_168;
  fVar3 = local_160 * local_13c + local_144 * local_168 + local_140 * local_164;
  fVar6 = ABS(local_1c4);
  dVar4 = (double)fVar6;
  fVar10 = ABS(local_1b8) * *(float *)(param_2 + 0x38) + *(float *)(param_2 + 0x3c) * fVar6;
  if (fVar5 <= fVar10) {
    fVar9 = -fVar10;
    if (fVar5 < fVar9) {
      fVar7 = -local_1e4;
      if (fVar7 < 0.0 == (fVar7 == 0.0)) {
        fVar7 = fVar7 + fVar5;
        if (fVar7 < fVar9) {
          if (param_1 * fVar3 + fVar7 < fVar9) {
            return 0;
          }
          fVar10 = -((fVar10 + fVar7) / fVar3);
          if (*param_8 < fVar10) {
            *param_8 = fVar10;
            iVar18 = 6;
            local_220 = 1;
            local_230 = -1;
          }
        }
      }
      else {
        if (param_1 * fVar3 + fVar5 < fVar9) {
          return 0;
        }
        fVar10 = -((fVar10 + fVar5) / fVar3);
        if (*param_8 < fVar10) {
          *param_8 = fVar10;
          iVar18 = 6;
          local_220 = 0;
          local_230 = -1;
        }
      }
    }
  }
  else if (-local_1e4 < 0.0) {
    fVar9 = -local_1e4 + fVar5;
    if (fVar10 < fVar9) {
      if (fVar10 < param_1 * fVar3 + fVar9) {
        return 0;
      }
      fVar10 = (fVar10 - fVar9) / fVar3;
      if (*param_8 < fVar10) {
        *param_8 = fVar10;
        iVar18 = 6;
        local_220 = 1;
        local_230 = 1;
      }
    }
  }
  else {
    if (fVar10 < param_1 * fVar3 + fVar5) {
      return 0;
    }
    fVar10 = (fVar10 - fVar5) / fVar3;
    if (*param_8 < fVar10) {
      *param_8 = fVar10;
      iVar18 = 6;
      local_220 = 0;
      local_230 = 1;
    }
  }
  local_1c0 = local_1c4 - local_1c8;
  local_1b4 = local_1b8 - local_1bc;
  fVar5 = fVar5 - fVar2;
  fVar3 = fVar3 - fVar1;
  fVar2 = ABS(local_1c0);
  local_1a0 = (double)fVar2;
  fVar1 = fVar2 * *(float *)(param_2 + 0x3c) + *(float *)(param_2 + 0x38) * ABS(local_1b4);
  if (fVar5 <= fVar1) {
    fVar10 = -fVar1;
    if (fVar5 < fVar10) {
      fVar9 = -local_1e4;
      if (fVar9 < 0.0 == (fVar9 == 0.0)) {
        fVar9 = fVar9 + fVar5;
        if (fVar9 < fVar10) {
          if (param_1 * fVar3 + fVar9 < fVar10) {
            return 0;
          }
          fVar1 = -((fVar9 + fVar1) / fVar3);
          if (*param_8 < fVar1) {
            *param_8 = fVar1;
            iVar18 = 7;
            local_220 = 1;
            local_230 = -1;
          }
        }
      }
      else {
        if (param_1 * fVar3 + fVar5 < fVar10) {
          return 0;
        }
        fVar1 = -((fVar1 + fVar5) / fVar3);
        if (*param_8 < fVar1) {
          *param_8 = fVar1;
          iVar18 = 7;
          local_220 = 0;
          local_230 = -1;
        }
      }
    }
  }
  else if (-local_1e4 < 0.0) {
    fVar5 = -local_1e4 + fVar5;
    if (fVar1 < fVar5) {
      if (fVar1 < param_1 * fVar3 + fVar5) {
        return 0;
      }
      fVar3 = (fVar1 - fVar5) / fVar3;
      if (*param_8 < fVar3) {
        *param_8 = fVar3;
        iVar18 = 7;
        local_220 = 1;
        local_230 = 1;
      }
    }
  }
  else {
    if (fVar1 < param_1 * fVar3 + fVar5) {
      return 0;
    }
    fVar3 = (fVar1 - fVar5) / fVar3;
    if (*param_8 < fVar3) {
      *param_8 = fVar3;
      iVar18 = 7;
      local_220 = 0;
      local_230 = 1;
    }
  }
  local_ec = local_184 * *(float *)(param_2 + 0x20) - local_188 * *(float *)(param_2 + 0x24);
  local_e8 = local_18c * *(float *)(param_2 + 0x24) - local_184 * *(float *)(param_2 + 0x1c);
  local_e4 = local_188 * *(float *)(param_2 + 0x1c) - local_18c * *(float *)(param_2 + 0x20);
  fVar3 = local_154 * local_e4 + local_158 * local_e8 + local_15c * local_ec;
  fVar1 = local_e4 * local_13c + local_144 * local_ec + local_140 * local_e8;
  fVar5 = *pfVar17 * ABS(local_1bc) + ABS(local_1d4) * *(float *)(param_2 + 0x3c);
  if (fVar3 <= fVar5) {
    fVar10 = -fVar5;
    if (fVar3 < fVar10) {
      if (0.0 < local_1e0) {
        fVar9 = local_1e0 + fVar3;
        if (fVar9 < fVar10) {
          if (param_1 * fVar1 + fVar9 < fVar10) {
            return 0;
          }
          fVar5 = -((fVar9 + fVar5) / fVar1);
          if (*param_8 < fVar5) {
            *param_8 = fVar5;
            iVar18 = 8;
            local_220 = 1;
            local_230 = -1;
          }
        }
      }
      else {
        if (param_1 * fVar1 + fVar3 < fVar10) {
          return 0;
        }
        fVar5 = -((fVar5 + fVar3) / fVar1);
        if (*param_8 < fVar5) {
          *param_8 = fVar5;
          iVar18 = 8;
          local_220 = 0;
          local_230 = -1;
        }
      }
    }
  }
  else if (NAN(local_1e0) || 0.0 < local_1e0 == (local_1e0 == 0.0)) {
    fVar10 = local_1e0 + fVar3;
    if (fVar5 < fVar10) {
      if (fVar5 < param_1 * fVar1 + fVar10) {
        return 0;
      }
      fVar5 = (fVar5 - fVar10) / fVar1;
      if (*param_8 < fVar5) {
        *param_8 = fVar5;
        iVar18 = 8;
        local_220 = 1;
        local_230 = 1;
      }
    }
  }
  else {
    if (fVar5 < param_1 * fVar1 + fVar3) {
      return 0;
    }
    fVar5 = (fVar5 - fVar3) / fVar1;
    if (*param_8 < fVar5) {
      *param_8 = fVar5;
      iVar18 = 8;
      local_220 = 0;
      local_230 = 1;
    }
  }
  local_204[0] = local_178 * *(float *)(param_2 + 0x20) - local_17c * *(float *)(param_2 + 0x24);
  local_204[1] = local_180 * *(float *)(param_2 + 0x24) - local_178 * *(float *)(param_2 + 0x1c);
  local_110 = *(float *)(param_2 + 0x1c) * local_17c - local_180 * *(float *)(param_2 + 0x20);
  fVar10 = local_154 * local_110 + local_158 * local_204[1] + local_15c * local_204[0];
  fVar5 = local_110 * local_13c + local_144 * local_204[0] + local_140 * local_204[1];
  fVar9 = ABS(local_1d0);
  local_118 = (double)fVar9;
  fVar7 = *pfVar17 * ABS(local_1b8) + fVar9 * *(float *)(param_2 + 0x3c);
  if (fVar10 <= fVar7) {
    fVar8 = -fVar7;
    if (fVar10 < fVar8) {
      fVar11 = -local_1e0;
      if (fVar11 < 0.0 == (fVar11 == 0.0)) {
        fVar11 = fVar11 + fVar10;
        if (fVar11 < fVar8) {
          if (param_1 * fVar5 + fVar11 < fVar8) {
            return 0;
          }
          fVar7 = -((fVar7 + fVar11) / fVar5);
          if (*param_8 < fVar7) {
            *param_8 = fVar7;
            iVar18 = 9;
            local_220 = 1;
            local_230 = -1;
          }
        }
      }
      else {
        if (param_1 * fVar5 + fVar10 < fVar8) {
          return 0;
        }
        fVar7 = -((fVar7 + fVar10) / fVar5);
        if (*param_8 < fVar7) {
          *param_8 = fVar7;
          iVar18 = 9;
          local_220 = 0;
          local_230 = -1;
        }
      }
    }
  }
  else if (-local_1e0 < 0.0) {
    fVar8 = -local_1e0 + fVar10;
    if (fVar7 < fVar8) {
      if (fVar7 < param_1 * fVar5 + fVar8) {
        return 0;
      }
      fVar7 = (fVar7 - fVar8) / fVar5;
      if (*param_8 < fVar7) {
        *param_8 = fVar7;
        iVar18 = 9;
        local_220 = 1;
        local_230 = 1;
      }
    }
  }
  else {
    if (fVar7 < param_1 * fVar5 + fVar10) {
      return 0;
    }
    fVar7 = (fVar7 - fVar10) / fVar5;
    if (*param_8 < fVar7) {
      *param_8 = fVar7;
      iVar18 = 9;
      local_220 = 0;
      local_230 = 1;
    }
  }
  local_1cc = local_1d0 - local_1d4;
  fVar10 = fVar10 - fVar3;
  fVar5 = fVar5 - fVar1;
  fVar1 = ABS(local_1cc);
  local_18[0] = (double)fVar1;
  fVar3 = *pfVar17 * ABS(local_1b4) + *(float *)(param_2 + 0x3c) * fVar1;
  if (fVar10 <= fVar3) {
    fVar7 = -fVar3;
    if (fVar10 < fVar7) {
      fVar8 = -local_1e0;
      if (fVar8 < 0.0 == (fVar8 == 0.0)) {
        fVar8 = fVar8 + fVar10;
        if (fVar8 < fVar7) {
          if (param_1 * fVar5 + fVar8 < fVar7) {
            return 0;
          }
          fVar3 = -((fVar8 + fVar3) / fVar5);
          if (*param_8 < fVar3) {
            *param_8 = fVar3;
            iVar18 = 10;
            local_220 = 1;
            local_230 = -1;
          }
        }
      }
      else {
        if (param_1 * fVar5 + fVar10 < fVar7) {
          return 0;
        }
        fVar3 = -((fVar3 + fVar10) / fVar5);
        if (*param_8 < fVar3) {
          *param_8 = fVar3;
          iVar18 = 10;
          local_220 = 0;
          local_230 = -1;
        }
      }
    }
  }
  else if (-local_1e0 < 0.0) {
    fVar10 = -local_1e0 + fVar10;
    if (fVar3 < fVar10) {
      if (fVar3 < param_1 * fVar5 + fVar10) {
        return 0;
      }
      fVar5 = (fVar3 - fVar10) / fVar5;
      if (*param_8 < fVar5) {
        *param_8 = fVar5;
        iVar18 = 10;
        local_220 = 1;
        local_230 = 1;
      }
    }
  }
  else {
    if (fVar3 < param_1 * fVar5 + fVar10) {
      return 0;
    }
    fVar5 = (fVar3 - fVar10) / fVar5;
    if (*param_8 < fVar5) {
      *param_8 = fVar5;
      iVar18 = 10;
      local_220 = 0;
      local_230 = 1;
    }
  }
  fVar5 = local_184 * *(float *)(param_2 + 0x2c) - local_188 * *(float *)(param_2 + 0x30);
  fVar3 = local_18c * *(float *)(param_2 + 0x30) - local_184 * *(float *)(param_2 + 0x28);
  _local_138 = CONCAT44(fVar3,fVar5);
  _local_108 = CONCAT44(fVar3,fVar5);
  local_130 = local_188 * *(float *)(param_2 + 0x28) - local_18c * *(float *)(param_2 + 0x2c);
  fVar10 = local_154 * local_130 + local_158 * fVar3 + local_15c * fVar5;
  fVar3 = local_130 * local_13c + local_144 * fVar5 + local_140 * fVar3;
  local_1f8 = (double)CONCAT44(local_1f8._4_4_,fVar3);
  fVar5 = *pfVar17 * ABS(local_1c8) + *(float *)(param_2 + 0x38) * ABS(local_1d4);
  if (fVar10 <= fVar5) {
    fVar7 = -fVar5;
    if (fVar10 < fVar7) {
      if (0.0 < local_1dc) {
        fVar8 = local_1dc + fVar10;
        if (fVar8 < fVar7) {
          if (param_1 * fVar3 + fVar8 < fVar7) {
            return 0;
          }
          fVar5 = -((fVar8 + fVar5) / fVar3);
          if (*param_8 < fVar5) {
            *param_8 = fVar5;
            iVar18 = 0xb;
            local_220 = 1;
            local_230 = -1;
          }
        }
      }
      else {
        if (param_1 * fVar3 + fVar10 < fVar7) {
          return 0;
        }
        fVar5 = -((fVar5 + fVar10) / fVar3);
        if (*param_8 < fVar5) {
          *param_8 = fVar5;
          iVar18 = 0xb;
          local_220 = 0;
          local_230 = -1;
        }
      }
    }
  }
  else if (NAN(local_1dc) || 0.0 < local_1dc == (local_1dc == 0.0)) {
    fVar7 = local_1dc + fVar10;
    if (fVar5 < fVar7) {
      if (fVar5 < param_1 * fVar3 + fVar7) {
        return 0;
      }
      fVar5 = (fVar5 - fVar7) / fVar3;
      if (*param_8 < fVar5) {
        *param_8 = fVar5;
        iVar18 = 0xb;
        local_220 = 1;
        local_230 = 1;
      }
    }
  }
  else {
    if (fVar5 < param_1 * fVar3 + fVar10) {
      return 0;
    }
    fVar5 = (fVar5 - fVar10) / fVar3;
    if (*param_8 < fVar5) {
      *param_8 = fVar5;
      iVar18 = 0xb;
      local_220 = 0;
      local_230 = 1;
    }
  }
  fVar8 = local_178 * *(float *)(param_2 + 0x2c) - local_17c * *(float *)(param_2 + 0x30);
  fVar5 = local_180 * *(float *)(param_2 + 0x30) - local_178 * *(float *)(param_2 + 0x28);
  _local_b8 = CONCAT44(fVar5,fVar8);
  local_1b0 = CONCAT44(fVar5,fVar8);
  local_1a8 = *(float *)(param_2 + 0x28) * local_17c - local_180 * *(float *)(param_2 + 0x2c);
  fVar7 = local_154 * local_1a8 + local_158 * fVar5 + local_15c * fVar8;
  fVar5 = local_1a8 * local_13c + local_144 * fVar8 + local_140 * fVar5;
  local_1f0 = (double)CONCAT44(local_1f0._4_4_,fVar5);
  fVar6 = *pfVar17 * fVar6 + *(float *)(param_2 + 0x38) * fVar9;
  if (fVar7 <= fVar6) {
    fVar9 = -fVar6;
    if (fVar7 < fVar9) {
      fVar8 = -local_1dc;
      if (fVar8 < 0.0 == (fVar8 == 0.0)) {
        fVar8 = fVar8 + fVar7;
        if (fVar8 < fVar9) {
          if (param_1 * fVar5 + fVar8 < fVar9) {
            return 0;
          }
          fVar6 = -((fVar6 + fVar8) / fVar5);
          if (*param_8 < fVar6) {
            *param_8 = fVar6;
            iVar18 = 0xc;
            local_220 = 1;
            local_230 = -1;
          }
        }
      }
      else {
        if (param_1 * fVar5 + fVar7 < fVar9) {
          return 0;
        }
        fVar6 = -((fVar6 + fVar7) / fVar5);
        if (*param_8 < fVar6) {
          *param_8 = fVar6;
          iVar18 = 0xc;
          local_220 = 0;
          local_230 = -1;
        }
      }
    }
  }
  else if (-local_1dc < 0.0) {
    fVar9 = -local_1dc + fVar7;
    if (fVar6 < fVar9) {
      if (fVar6 < param_1 * fVar5 + fVar9) {
        return 0;
      }
      fVar6 = (fVar6 - fVar9) / fVar5;
      if (*param_8 < fVar6) {
        *param_8 = fVar6;
        iVar18 = 0xc;
        local_220 = 1;
        local_230 = 1;
      }
    }
  }
  else {
    if (fVar6 < param_1 * fVar5 + fVar7) {
      return 0;
    }
    fVar6 = (fVar6 - fVar7) / fVar5;
    if (*param_8 < fVar6) {
      *param_8 = fVar6;
      iVar18 = 0xc;
      local_220 = 0;
      local_230 = 1;
    }
  }
  fVar7 = fVar7 - fVar10;
  fVar5 = fVar5 - fVar3;
  fVar1 = *pfVar17 * fVar2 + *(float *)(param_2 + 0x38) * fVar1;
  if (fVar7 <= fVar1) {
    fVar2 = -fVar1;
    if (fVar7 < fVar2) {
      fVar3 = -local_1dc;
      if (fVar3 < 0.0 == (fVar3 == 0.0)) {
        fVar3 = fVar3 + fVar7;
        if (fVar3 < fVar2) {
          if (param_1 * fVar5 + fVar3 < fVar2) {
            return 0;
          }
          fVar1 = -((fVar1 + fVar3) / fVar5);
          if (*param_8 < fVar1) {
            *param_8 = fVar1;
            iVar18 = 0xd;
            local_220 = 1;
            local_230 = -1;
          }
        }
      }
      else {
        if (param_1 * fVar5 + fVar7 < fVar2) {
          return 0;
        }
        fVar1 = -((fVar1 + fVar7) / fVar5);
        if (*param_8 < fVar1) {
          *param_8 = fVar1;
          iVar18 = 0xd;
          local_220 = 0;
          local_230 = -1;
        }
      }
    }
  }
  else if (-local_1dc < 0.0) {
    fVar7 = -local_1dc + fVar7;
    if (fVar1 < fVar7) {
      if (fVar1 < param_1 * fVar5 + fVar7) {
        return 0;
      }
      fVar5 = (fVar1 - fVar7) / fVar5;
      if (*param_8 < fVar5) {
        *param_8 = fVar5;
        iVar18 = 0xd;
        local_220 = 1;
        local_230 = 1;
      }
    }
  }
  else {
    if (fVar1 < param_1 * fVar5 + fVar7) {
      return 0;
    }
    fVar5 = (fVar1 - fVar7) / fVar5;
    if (*param_8 < fVar5) {
      *param_8 = fVar5;
      iVar18 = 0xd;
      local_220 = 0;
      local_230 = 1;
    }
  }
  fVar1 = 0.0;
  local_218._0_4_ = SUB84(dVar4,0);
  local_218._4_4_ = (float)((ulonglong)dVar4 >> 0x20);
  local_204[2] = local_110;
  local_1d8 = pfVar12;
  local_100 = local_130;
  local_c4 = local_f8;
  local_c0 = local_f4;
  local_bc = local_f0;
  local_b0 = local_1a8;
  local_218 = dVar4;
  switch(iVar18) {
  case 0:
    pfVar17 = local_204;
    pfVar25 = &local_168;
    FUN_0047d9b0(&local_ec,param_5);
    uVar16 = FUN_0047d9b0(pfVar25,param_6);
    FUN_0047da10(&local_d0,_DAT_00b307f0,uVar16,pfVar17,pfVar12);
    uVar16 = FUN_0047d9b0(pfVar17,pfVar12);
    pfVar17 = (float *)FUN_0047da10(&local_f8,0x3f000000,uVar16);
    goto LAB_00966be0;
  case 1:
    if (local_1e4 <= 0.0) {
      if (0.0 <= local_1e4) {
        fVar1 = 0.0;
      }
      else {
        fVar1 = (float)-local_230 * *pfVar17;
      }
    }
    else {
      fVar1 = (float)local_230 * *pfVar17;
    }
    if (local_1e0 <= 0.0) {
      if (0.0 <= local_1e0) {
        local_218 = (double)(ulonglong)(uint)fVar1;
      }
      else {
        local_218 = (double)CONCAT44((float)-local_230 * *(float *)(param_2 + 0x38),fVar1);
      }
    }
    else {
      local_218 = (double)CONCAT44((float)local_230 * *(float *)(param_2 + 0x38),fVar1);
    }
    local_210 = 0.0;
    if (local_1dc <= 0.0) {
      if (local_1dc < 0.0) {
        local_230 = -local_230;
        goto LAB_00966cae;
      }
    }
    else {
LAB_00966cae:
      local_210 = (float)local_230 * *(float *)(param_2 + 0x3c);
    }
    *param_9 = *(float *)(param_2 + 0x28) * local_210 +
               *(float *)(param_2 + 0x1c) * local_218._4_4_ +
               *pfVar25 * (float)local_218 + *param_8 * *param_3 + *pfVar12;
    param_9[1] = *(float *)(param_2 + 0x2c) * local_210 +
                 *(float *)(param_2 + 0x20) * local_218._4_4_ +
                 *(float *)(param_2 + 0x14) * (float)local_218 +
                 *param_8 * param_3[1] + *(float *)(param_2 + 8);
    param_9[2] = *param_8 * param_3[2] + *(float *)(param_2 + 0xc) +
                 *(float *)(param_2 + 0x18) * (float)local_218 +
                 *(float *)(param_2 + 0x24) * local_218._4_4_ +
                 *(float *)(param_2 + 0x30) * local_210;
    dVar4 = local_218;
    goto switchD_00966b67_default;
  case 2:
  case 3:
  case 4:
    fVar1 = *param_8;
    if (local_220 == 0) {
      uVar16 = FUN_0047da10(&local_144,fVar1,param_7);
      pfVar17 = (float *)FUN_0047d9b0(&local_1e4,uVar16);
    }
    else {
      if (local_220 == 1) {
        uVar16 = FUN_0047da10(&local_1a0,fVar1,param_7);
        pfVar17 = (float *)FUN_0047d9b0(&local_218,uVar16);
        local_204[0] = *pfVar17 + (float)local_120;
        local_204[1] = pfVar17[1] + (float)local_68[0];
        fVar1 = pfVar17[2];
        *param_9 = local_204[0];
        param_9[1] = local_204[1];
        param_9[2] = fVar1 + (float)local_78[0];
        dVar4 = local_218;
        local_204[2] = fVar1 + (float)local_78[0];
        goto switchD_00966b67_default;
      }
      pfVar17 = &local_180;
      puVar15 = &local_1b0;
      uVar16 = FUN_0047da10(&local_b8,fVar1,param_7,puVar15,pfVar17);
      FUN_0047d9b0(&local_108,uVar16);
      pfVar17 = (float *)FUN_0047d9b0(puVar15,pfVar17);
    }
LAB_00966be0:
    *param_9 = *pfVar17;
    param_9[1] = pfVar17[1];
    param_9[2] = pfVar17[2];
    dVar4 = local_218;
    goto switchD_00966b67_default;
  case 5:
    if (local_1bc <= 0.0) {
      if (0.0 <= local_1bc) {
        local_218 = (double)((ulonglong)dVar4 & 0xffffffff);
      }
      else {
        local_218 = (double)CONCAT44((float)local_230 * *(float *)(param_2 + 0x38),(float)local_218)
        ;
      }
    }
    else {
      local_218 = (double)CONCAT44((float)-local_230 * *(float *)(param_2 + 0x38),(float)local_218);
    }
    if (local_1c8 <= 0.0) {
      if (local_1c8 < 0.0) {
        local_230 = -local_230;
        goto LAB_00966e90;
      }
    }
    else {
LAB_00966e90:
      fVar1 = (float)local_230 * *(float *)(param_2 + 0x3c);
    }
    local_210 = fVar1;
    uVar16 = FUN_0047da10(&local_118,*param_8,&local_144);
    FUN_004121d0(uVar16);
    pfVar17 = (float *)FUN_00498fe0(local_e0,&local_18c);
    local_18c = *pfVar17;
    local_188 = pfVar17[1];
    local_184 = pfVar17[2];
    fVar22 = (float10)FUN_0047d9e0(&local_d0);
    local_1d4 = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(&local_ec);
    local_1c8 = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(&local_108);
    fVar2 = local_210;
    local_1bc = (float)fVar22;
    local_1f0 = (double)local_218._4_4_;
    fVar23 = (float10)FUN_0047d9e0(&local_18c);
    fVar24 = (float10)local_1f0;
    fVar22 = (float10)fVar2;
    fVar1 = (float)((fVar23 - (float10)local_1c8 * fVar24) - (float10)local_1bc * fVar22);
    if (local_220 == 0) {
      local_218 = (double)CONCAT44(local_218._4_4_,fVar1 / local_1d4);
    }
    else {
      local_1a0 = (double)fVar1;
      fVar22 = (float10)FUN_0047d9e0(&local_f8);
      fVar22 = ((float10)local_1a0 - fVar22) / (float10)local_1d4;
LAB_00966fc9:
      local_218 = (double)CONCAT44(local_218._4_4_,(float)fVar22);
      fVar24 = (float10)local_1f0;
      fVar22 = (float10)fVar2;
    }
    break;
  case 6:
    if (local_1b8 <= 0.0) {
      if (0.0 <= local_1b8) {
        local_218 = (double)((ulonglong)dVar4 & 0xffffffff);
      }
      else {
        local_218 = (double)CONCAT44((float)local_230 * *(float *)(param_2 + 0x38),(float)local_218)
        ;
      }
    }
    else {
      local_218 = (double)CONCAT44((float)-local_230 * *(float *)(param_2 + 0x38),(float)local_218);
    }
    if (local_1c4 <= 0.0) {
      if (local_1c4 < 0.0) {
        local_230 = -local_230;
        goto LAB_009670b5;
      }
    }
    else {
LAB_009670b5:
      fVar1 = (float)local_230 * *(float *)(param_2 + 0x3c);
    }
    local_210 = fVar1;
    uVar16 = FUN_0047da10(local_18,*param_8,&local_144);
    FUN_004121d0(uVar16);
    pfVar17 = (float *)FUN_00498fe0(local_e0,&local_180);
    local_180 = *pfVar17;
    local_17c = pfVar17[1];
    local_178 = pfVar17[2];
    fVar22 = (float10)FUN_0047d9e0(&local_168);
    local_1d0 = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(local_204);
    local_1c4 = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(&local_1b0);
    fVar2 = local_210;
    local_1b8 = (float)fVar22;
    local_1f0 = (double)local_218._4_4_;
    fVar23 = (float10)FUN_0047d9e0(&local_180);
    fVar24 = (float10)local_1f0;
    fVar22 = (float10)fVar2;
    fVar1 = (float)((fVar23 - (float10)local_1c4 * fVar24) - (float10)local_1b8 * fVar22);
    if (local_220 != 0) {
      fVar22 = (float10)FUN_0047d9e0(&local_f8);
      fVar22 = (fVar22 + (float10)fVar1) / (float10)local_1d0;
      goto LAB_00966fc9;
    }
    local_218 = (double)CONCAT44(local_218._4_4_,fVar1 / local_1d0);
    break;
  case 7:
    local_204[0] = local_180 - local_18c;
    local_204[1] = local_17c - local_188;
    local_204[2] = local_178 - local_184;
    local_174 = local_204[0];
    local_170 = local_204[1];
    local_16c = local_204[2];
    pfVar17 = (float *)FUN_00498fe0(local_e0,&local_174);
    local_1e4 = *pfVar17;
    local_1e0 = pfVar17[1];
    local_1dc = pfVar17[2];
    pdVar14 = (double *)FUN_00498fe0(&local_138,&local_174);
    local_1a0 = *pdVar14;
    local_198 = *(undefined4 *)(pdVar14 + 1);
    puVar15 = (undefined8 *)FUN_00498fe0(local_a8,&local_174);
    local_210 = 0.0;
    local_1b0 = *puVar15;
    local_1a8 = *(float *)(puVar15 + 1);
    if (local_1b4 <= 0.0) {
      if (0.0 <= local_1b4) {
        local_218 = (double)((ulonglong)local_218 & 0xffffffff);
      }
      else {
        local_218 = (double)CONCAT44((float)local_230 * *(float *)(param_2 + 0x38),(float)local_218)
        ;
      }
    }
    else {
      local_218 = (double)CONCAT44((float)-local_230 * *(float *)(param_2 + 0x38),(float)local_218);
    }
    if (local_1c0 <= 0.0) {
      if (local_1c0 < 0.0) {
        local_210 = (float)-local_230 * *(float *)(param_2 + 0x3c);
      }
    }
    else {
      local_210 = (float)local_230 * *(float *)(param_2 + 0x3c);
    }
    uVar16 = FUN_0047da10(local_88,*param_8,&local_144);
    FUN_004121d0(uVar16);
    pfVar17 = (float *)FUN_00498fe0(local_98,&local_174);
    local_174 = *pfVar17;
    local_170 = pfVar17[1];
    local_16c = pfVar17[2];
    fVar22 = (float10)FUN_0047d9e0(&local_1e4);
    local_1cc = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(&local_1a0);
    local_1c0 = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(&local_1b0);
    fVar2 = local_210;
    local_1b4 = (float)fVar22;
    local_1f0 = (double)local_218._4_4_;
    fVar23 = (float10)FUN_0047d9e0(&local_174);
    fVar24 = (float10)local_1f0;
    fVar22 = (float10)fVar2;
    fVar1 = (float)((fVar23 - (float10)local_1c0 * fVar24) - (float10)local_1b4 * fVar22);
    if (local_220 != 0) {
      fVar22 = (float10)FUN_0047d9e0(&local_f8);
      fVar22 = (fVar22 + (float10)fVar1) / (float10)local_1cc;
      goto LAB_00966fc9;
    }
    local_218 = (double)CONCAT44(local_218._4_4_,fVar1 / local_1cc);
    break;
  case 8:
    if (local_1bc <= 0.0) {
      if (0.0 <= local_1bc) {
        local_218 = (double)((ulonglong)(uint)local_218._4_4_ << 0x20);
      }
      else {
        local_218 = (double)CONCAT44(local_218._4_4_,(float)-local_230 * *pfVar17);
      }
    }
    else {
      local_218 = (double)CONCAT44(local_218._4_4_,(float)local_230 * *pfVar17);
    }
    if (local_1d4 <= 0.0) {
      if (local_1d4 < 0.0) goto LAB_009674f7;
    }
    else {
      local_230 = -local_230;
LAB_009674f7:
      fVar1 = (float)local_230 * *(float *)(param_2 + 0x3c);
    }
    local_210 = fVar1;
    uVar16 = FUN_0047da10(local_48,*param_8,&local_144);
    FUN_004121d0(uVar16);
    pfVar17 = (float *)FUN_00498fe0(local_e0,&local_18c);
    local_18c = *pfVar17;
    local_188 = pfVar17[1];
    local_184 = pfVar17[2];
    fVar22 = (float10)FUN_0047d9e0(&local_d0);
    local_1d4 = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(&local_ec);
    local_1c8 = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(&local_108);
    fVar2 = local_210;
    local_1bc = (float)fVar22;
    local_1f8 = (double)(float)local_218;
    fVar23 = (float10)FUN_0047d9e0(&local_18c);
    fVar24 = (float10)local_1f8;
    fVar22 = (float10)fVar2;
    fVar1 = (float)((fVar23 - (float10)local_1d4 * fVar24) - (float10)local_1bc * fVar22);
    if (local_220 == 0) {
      local_218 = (double)CONCAT44(fVar1 / local_1c8,(float)local_218);
    }
    else {
      local_1a0 = (double)fVar1;
      fVar22 = (float10)FUN_0047d9e0(&local_f8);
      fVar22 = ((float10)local_1a0 - fVar22) / (float10)local_1c8;
LAB_00967630:
      local_218 = (double)CONCAT44((float)fVar22,(float)local_218);
      fVar24 = (float10)local_1f8;
      fVar22 = (float10)fVar2;
    }
    goto LAB_0096763c;
  case 9:
    if (local_1b8 <= 0.0) {
      if (0.0 <= local_1b8) {
        local_218 = (double)((ulonglong)(uint)local_218._4_4_ << 0x20);
      }
      else {
        local_218 = (double)CONCAT44(local_218._4_4_,(float)-local_230 * *pfVar17);
      }
    }
    else {
      local_218 = (double)CONCAT44(local_218._4_4_,(float)local_230 * *pfVar17);
    }
    if (local_1d0 <= 0.0) {
      if (local_1d0 < 0.0) goto LAB_00967718;
    }
    else {
      local_230 = -local_230;
LAB_00967718:
      fVar1 = (float)local_230 * *(float *)(param_2 + 0x3c);
    }
    local_210 = fVar1;
    uVar16 = FUN_0047da10(local_28,*param_8,&local_144);
    FUN_004121d0(uVar16);
    pfVar17 = (float *)FUN_00498fe0(local_e0,&local_180);
    local_180 = *pfVar17;
    local_17c = pfVar17[1];
    local_178 = pfVar17[2];
    fVar22 = (float10)FUN_0047d9e0(&local_168);
    local_1d0 = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(local_204);
    local_1c4 = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(&local_1b0);
    fVar2 = local_210;
    local_1b8 = (float)fVar22;
    local_1f8 = (double)(float)local_218;
    fVar23 = (float10)FUN_0047d9e0(&local_180);
    fVar24 = (float10)local_1f8;
    fVar22 = (float10)fVar2;
    fVar1 = (float)((fVar23 - (float10)local_1d0 * fVar24) - (float10)local_1b8 * fVar22);
    if (local_220 != 0) {
      fVar22 = (float10)FUN_0047d9e0(&local_f8);
      fVar22 = (fVar22 + (float10)fVar1) / (float10)local_1c4;
      goto LAB_00967630;
    }
    local_218 = (double)CONCAT44(fVar1 / local_1c4,(float)local_218);
    goto LAB_0096763c;
  case 10:
    local_204[0] = local_180 - local_18c;
    local_204[1] = local_17c - local_188;
    local_204[2] = local_178 - local_184;
    local_174 = local_204[0];
    local_170 = local_204[1];
    local_16c = local_204[2];
    pfVar12 = (float *)FUN_00498fe0(local_e0,&local_174);
    local_1e4 = *pfVar12;
    local_1e0 = pfVar12[1];
    local_1dc = pfVar12[2];
    pdVar14 = (double *)FUN_00498fe0(&local_138,&local_174);
    local_1a0 = *pdVar14;
    local_198 = *(undefined4 *)(pdVar14 + 1);
    puVar15 = (undefined8 *)FUN_00498fe0(local_a8,&local_174);
    local_210 = 0.0;
    local_1b0 = *puVar15;
    local_1a8 = *(float *)(puVar15 + 1);
    if (local_1b4 <= 0.0) {
      if (0.0 <= local_1b4) {
        local_218 = (double)((ulonglong)(uint)local_218._4_4_ << 0x20);
      }
      else {
        local_218 = (double)CONCAT44(local_218._4_4_,(float)-local_230 * *pfVar17);
      }
    }
    else {
      local_218 = (double)CONCAT44(local_218._4_4_,(float)local_230 * *pfVar17);
    }
    if (local_1cc <= 0.0) {
      if (local_1cc < 0.0) {
        local_210 = (float)local_230 * *(float *)(param_2 + 0x3c);
      }
    }
    else {
      local_210 = (float)-local_230 * *(float *)(param_2 + 0x3c);
    }
    uVar16 = FUN_0047da10(local_38,*param_8,&local_144);
    FUN_004121d0(uVar16);
    pfVar17 = (float *)FUN_00498fe0(local_98,&local_174);
    local_174 = *pfVar17;
    local_170 = pfVar17[1];
    local_16c = pfVar17[2];
    fVar22 = (float10)FUN_0047d9e0(&local_1e4);
    local_1cc = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(&local_1a0);
    local_1c0 = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(&local_1b0);
    fVar2 = local_210;
    local_1b4 = (float)fVar22;
    local_1f8 = (double)(float)local_218;
    fVar23 = (float10)FUN_0047d9e0(&local_174);
    fVar24 = (float10)local_1f8;
    fVar22 = (float10)fVar2;
    fVar1 = (float)((fVar23 - (float10)local_1cc * fVar24) - (float10)local_1b4 * fVar22);
    if (local_220 != 0) {
      fVar22 = (float10)FUN_0047d9e0(&local_f8);
      fVar22 = (fVar22 + (float10)fVar1) / (float10)local_1c0;
      goto LAB_00967630;
    }
    local_218 = (double)CONCAT44(fVar1 / local_1c0,(float)local_218);
LAB_0096763c:
    fVar23 = (float10)local_218._4_4_;
    *param_9 = (float)((float10)*(float *)(param_2 + 0x28) * fVar22 +
                      (float10)*(float *)(param_2 + 0x1c) * fVar23 +
                      (float10)*pfVar25 * fVar24 +
                      (float10)*param_8 * (float10)*param_3 + (float10)*local_1d8);
    param_9[1] = (float)((float10)*(float *)(param_2 + 0x2c) * fVar22 +
                        (float10)*(float *)(param_2 + 0x20) * fVar23 +
                        (float10)*(float *)(param_2 + 0x14) * fVar24 +
                        (float10)*param_8 * (float10)param_3[1] + (float10)local_1d8[1]);
    param_9[2] = (float)(fVar22 * (float10)*(float *)(param_2 + 0x30) +
                        fVar23 * (float10)*(float *)(param_2 + 0x24) +
                        (float10)*param_8 * (float10)param_3[2] + (float10)local_1d8[2] +
                        (float10)*(float *)(param_2 + 0x18) * fVar24);
    dVar4 = local_218;
    goto switchD_00966b67_default;
  case 0xb:
    if (local_1c8 <= 0.0) {
      if (0.0 <= local_1c8) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = (float)local_230 * *pfVar17;
      }
    }
    else {
      fVar2 = (float)-local_230 * *pfVar17;
    }
    if (local_1d4 <= 0.0) {
      if (local_1d4 < 0.0) {
        local_230 = -local_230;
        goto LAB_00967b57;
      }
    }
    else {
LAB_00967b57:
      fVar1 = (float)local_230 * *(float *)(param_2 + 0x38);
    }
    local_218 = (double)CONCAT44(fVar1,fVar2);
    uVar16 = FUN_0047da10(local_58,*param_8,&local_144);
    FUN_004121d0(uVar16);
    pfVar17 = (float *)FUN_00498fe0(local_e0,&local_18c);
    local_18c = *pfVar17;
    local_188 = pfVar17[1];
    local_184 = pfVar17[2];
    fVar22 = (float10)FUN_0047d9e0(&local_d0);
    local_1d4 = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(&local_ec);
    local_1c8 = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(&local_108);
    local_1bc = (float)fVar22;
    local_1f8 = (double)(float)local_218;
    local_1f0 = (double)local_218._4_4_;
    fVar23 = (float10)FUN_0047d9e0(&local_18c);
    fVar24 = (float10)local_1f8;
    fVar22 = (float10)local_1f0;
    local_210 = (float)((fVar23 - (float10)local_1d4 * fVar24) - (float10)local_1c8 * fVar22);
    if (local_220 == 0) {
      local_210 = local_210 / local_1bc;
    }
    else {
      local_1a0 = (double)local_210;
      fVar22 = (float10)FUN_0047d9e0(&local_f8);
      fVar22 = ((float10)local_1a0 - fVar22) / (float10)local_1bc;
LAB_00967c95:
      local_210 = (float)fVar22;
      fVar24 = (float10)local_1f8;
      fVar22 = (float10)local_1f0;
    }
    goto LAB_00967ca1;
  case 0xc:
    if (local_1c4 <= 0.0) {
      if (0.0 <= local_1c4) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = (float)local_230 * *pfVar17;
      }
    }
    else {
      fVar2 = (float)-local_230 * *pfVar17;
    }
    if (local_1d0 <= 0.0) {
      if (local_1d0 < 0.0) {
        local_230 = -local_230;
        goto LAB_00967d80;
      }
    }
    else {
LAB_00967d80:
      fVar1 = (float)local_230 * *(float *)(param_2 + 0x38);
    }
    local_218 = (double)CONCAT44(fVar1,fVar2);
    uVar16 = FUN_0047da10(local_68,*param_8,&local_144);
    FUN_004121d0(uVar16);
    pfVar17 = (float *)FUN_00498fe0(local_e0,&local_180);
    local_180 = *pfVar17;
    local_17c = pfVar17[1];
    local_178 = pfVar17[2];
    fVar22 = (float10)FUN_0047d9e0(&local_168);
    local_1d0 = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(local_204);
    local_1c4 = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(&local_1b0);
    local_1b8 = (float)fVar22;
    local_1f8 = (double)(float)local_218;
    local_1f0 = (double)local_218._4_4_;
    fVar23 = (float10)FUN_0047d9e0(&local_180);
    fVar24 = (float10)local_1f8;
    fVar22 = (float10)local_1f0;
    local_210 = (float)((fVar23 - (float10)local_1d0 * fVar24) - (float10)local_1c4 * fVar22);
    if (local_220 != 0) {
      fVar22 = (float10)FUN_0047d9e0(&local_f8);
      fVar22 = (fVar22 + (float10)local_210) / (float10)local_1b8;
      goto LAB_00967c95;
    }
    local_210 = local_210 / local_1b8;
    goto LAB_00967ca1;
  case 0xd:
    local_204[0] = local_180 - local_18c;
    local_204[1] = local_17c - local_188;
    local_204[2] = local_178 - local_184;
    local_174 = local_204[0];
    local_170 = local_204[1];
    local_16c = local_204[2];
    pfVar12 = (float *)FUN_00498fe0(local_e0,&local_174);
    local_1e4 = *pfVar12;
    local_1e0 = pfVar12[1];
    local_1dc = pfVar12[2];
    pdVar14 = (double *)FUN_00498fe0(&local_138,&local_174);
    local_1a0 = *pdVar14;
    local_198 = *(undefined4 *)(pdVar14 + 1);
    puVar15 = (undefined8 *)FUN_00498fe0(local_a8,&local_174);
    fVar1 = 0.0;
    local_1b0 = *puVar15;
    local_1a8 = *(float *)(puVar15 + 1);
    if (local_1c0 <= 0.0) {
      if (0.0 <= local_1c0) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = (float)local_230 * *pfVar17;
      }
    }
    else {
      fVar2 = (float)-local_230 * *pfVar17;
    }
    if (local_1cc <= 0.0) {
      if (local_1cc < 0.0) {
        fVar1 = (float)-local_230 * *(float *)(param_2 + 0x38);
      }
    }
    else {
      fVar1 = (float)local_230 * *(float *)(param_2 + 0x38);
    }
    local_218 = (double)CONCAT44(fVar1,fVar2);
    uVar16 = FUN_0047da10(local_78,*param_8,&local_144);
    FUN_004121d0(uVar16);
    pfVar17 = (float *)FUN_00498fe0(local_98,&local_174);
    local_174 = *pfVar17;
    local_170 = pfVar17[1];
    local_16c = pfVar17[2];
    fVar22 = (float10)FUN_0047d9e0(&local_1e4);
    local_1cc = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(&local_1a0);
    local_1c0 = (float)fVar22;
    fVar22 = (float10)FUN_0047d9e0(&local_1b0);
    local_1b4 = (float)fVar22;
    local_1f8 = (double)(float)local_218;
    local_1f0 = (double)local_218._4_4_;
    fVar23 = (float10)FUN_0047d9e0(&local_174);
    fVar24 = (float10)local_1f8;
    fVar22 = (float10)local_1f0;
    local_210 = (float)((fVar23 - (float10)local_1cc * fVar24) - (float10)local_1c0 * fVar22);
    if (local_220 != 0) {
      fVar22 = (float10)FUN_0047d9e0(&local_f8);
      fVar22 = (fVar22 + (float10)local_210) / (float10)local_1b4;
      goto LAB_00967c95;
    }
    local_210 = local_210 / local_1b4;
LAB_00967ca1:
    fVar23 = (float10)local_210;
    *param_9 = (float)((float10)*(float *)(param_2 + 0x28) * fVar23 +
                      (float10)*(float *)(param_2 + 0x1c) * fVar22 +
                      (float10)*pfVar25 * fVar24 +
                      (float10)*param_8 * (float10)*param_3 + (float10)*local_1d8);
    param_9[1] = (float)((float10)*(float *)(param_2 + 0x2c) * fVar23 +
                        (float10)*(float *)(param_2 + 0x20) * fVar22 +
                        (float10)*(float *)(param_2 + 0x14) * fVar24 +
                        (float10)*param_8 * (float10)param_3[1] + (float10)local_1d8[1]);
    param_9[2] = (float)((float10)*param_8 * (float10)param_3[2] + (float10)local_1d8[2] +
                         (float10)*(float *)(param_2 + 0x18) * fVar24 +
                         (float10)*(float *)(param_2 + 0x24) * fVar22 +
                        (float10)*(float *)(param_2 + 0x30) * fVar23);
    dVar4 = local_218;
  default:
    goto switchD_00966b67_default;
  }
  fVar23 = (float10)(float)local_218;
  *param_9 = (float)((float10)*(float *)(param_2 + 0x28) * fVar22 +
                    (float10)*(float *)(param_2 + 0x1c) * fVar24 +
                    (float10)*pfVar25 * fVar23 +
                    (float10)*param_8 * (float10)*param_3 + (float10)*local_1d8);
  param_9[1] = (float)((float10)*(float *)(param_2 + 0x2c) * fVar22 +
                      (float10)*(float *)(param_2 + 0x20) * fVar24 +
                      (float10)*(float *)(param_2 + 0x14) * fVar23 +
                      (float10)*param_8 * (float10)param_3[1] + (float10)local_1d8[1]);
  param_9[2] = (float)(fVar22 * (float10)*(float *)(param_2 + 0x30) +
                      (float10)*param_8 * (float10)param_3[2] + (float10)local_1d8[2] +
                      (float10)*(float *)(param_2 + 0x18) * fVar23 +
                      (float10)*(float *)(param_2 + 0x24) * fVar24);
  dVar4 = local_218;
switchD_00966b67_default:
  local_218 = dVar4;
  if (param_10 != '\0') {
    *param_12 = local_c4;
    param_12[1] = local_c0;
    param_12[2] = local_bc;
    FUN_0043f350();
    fVar1 = param_12[1];
    fVar2 = param_12[2];
    *param_11 = -*param_12;
    param_11[1] = -fVar1;
    param_11[2] = -fVar2;
  }
  return 1;
}



undefined4 FUN_009682f0(float param_1,float param_2,float *param_3,int param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 in_EAX;
  float10 fVar7;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = param_4;
  fVar2 = *(float *)(param_4 + 4) - *(float *)((int)param_2 + 4);
  iVar1 = (int)param_2 + 4;
  fVar3 = *(float *)(param_4 + 8) - *(float *)((int)param_2 + 8);
  fVar4 = *(float *)(param_4 + 0xc) - *(float *)((int)param_2 + 0xc);
  fVar5 = ABS(fVar3 * *(float *)((int)param_2 + 0x14) + fVar2 * *(float *)((int)param_2 + 0x10) +
              fVar4 * *(float *)((int)param_2 + 0x18));
  if ((fVar5 <= *(float *)((int)param_2 + 0x34)) &&
     (fVar5 = ABS(*(float *)((int)param_2 + 0x24) * fVar4 +
                  *(float *)((int)param_2 + 0x1c) * fVar2 + *(float *)((int)param_2 + 0x20) * fVar3)
     , fVar5 <= *(float *)((int)param_2 + 0x38))) {
    fVar5 = ABS(fVar4 * *(float *)((int)param_2 + 0x30) +
                *(float *)((int)param_2 + 0x2c) * fVar3 + *(float *)((int)param_2 + 0x28) * fVar2);
    fVar2 = *(float *)((int)param_2 + 0x3c);
    if (fVar2 < fVar5 == 0) {
      return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),
                                      (ushort)(fVar2 < fVar5) << 8 |
                                      (ushort)(NAN(fVar2) || NAN(fVar5)) << 10 |
                                      (ushort)(fVar2 == fVar5) << 0xe) >> 8),1);
    }
  }
  param_2 = fVar5;
  local_24 = *param_5 - *param_3;
  local_20 = param_5[1] - param_3[1];
  local_1c = param_5[2] - param_3[2];
  if (((DAT_00b3f9a8 == local_24) && (DAT_00b3f9ac == local_20)) && (DAT_00b3f9b0 == local_1c)) {
    fVar7 = (float10)FUN_00974c80((undefined4 *)(param_4 + 4),iVar1,local_2c,&param_4,&param_2);
  }
  else {
    local_18 = *(undefined4 *)(param_4 + 4);
    local_14 = *(undefined4 *)(param_4 + 8);
    local_10 = *(undefined4 *)(param_4 + 0xc);
    local_24 = param_1 * local_24;
    local_20 = local_20 * param_1;
    local_1c = local_1c * param_1;
    local_c = local_24;
    local_8 = local_20;
    local_4 = local_1c;
    fVar7 = (float10)FUN_00975aa0(&local_18,iVar1,local_28,local_2c,&param_4,&param_2);
  }
  fVar2 = *(float *)(iVar6 + 0x10) * *(float *)(iVar6 + 0x10);
  if ((float)fVar7 < fVar2 == ((float)fVar7 == fVar2)) {
    return 0;
  }
  return 1;
}



void FUN_009684f0(undefined4 param_1,int param_2,float *param_3,int param_4,float *param_5,
                 float *param_6,float *param_7)

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
  char cVar13;
  undefined1 local_14 [4];
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  FUN_0096c420(0x3f800000,&DAT_00b3f9a8);
  local_4 = 0x3c23d70a;
  local_10 = *param_7;
  local_c = param_7[1];
  local_8 = param_7[2];
  cVar13 = FUN_009682f0(param_1,param_2,param_3,local_14,&DAT_00b3f9a8);
  if (cVar13 == '\0') {
    fVar1 = *param_6;
    fVar8 = fVar1 * *param_3 + *(float *)(param_2 + 4);
    fVar9 = *(float *)(param_2 + 8) + param_3[1] * fVar1;
    fVar1 = *(float *)(param_2 + 0xc) + fVar1 * param_3[2];
    fVar10 = *param_7 - fVar8;
    fVar2 = param_7[1] - fVar9;
    fVar3 = param_7[2] - fVar1;
    fVar11 = fVar2 * *(float *)(param_2 + 0x14) + fVar10 * *(float *)(param_2 + 0x10) +
             fVar3 * *(float *)(param_2 + 0x18);
    fVar12 = *(float *)(param_2 + 0x24) * fVar3 +
             fVar10 * *(float *)(param_2 + 0x1c) + *(float *)(param_2 + 0x20) * fVar2;
    fVar10 = fVar3 * *(float *)(param_2 + 0x30) +
             *(float *)(param_2 + 0x2c) * fVar2 + *(float *)(param_2 + 0x28) * fVar10;
    if (fVar11 <= *(float *)(param_2 + 0x34) * 0.99) {
      if (fVar11 < -*(float *)(param_2 + 0x34) * 0.99) {
        fVar11 = -*(float *)(param_2 + 0x34);
      }
    }
    else {
      fVar11 = *(float *)(param_2 + 0x34);
    }
    if (fVar12 <= *(float *)(param_2 + 0x38) * 0.99) {
      if (fVar12 < -*(float *)(param_2 + 0x38) * 0.99) {
        fVar12 = -*(float *)(param_2 + 0x38);
      }
    }
    else {
      fVar12 = *(float *)(param_2 + 0x38);
    }
    if (fVar10 <= *(float *)(param_2 + 0x3c) * 0.99) {
      if (fVar10 < -*(float *)(param_2 + 0x3c) * 0.99) {
        fVar10 = -*(float *)(param_2 + 0x3c);
      }
    }
    else {
      fVar10 = *(float *)(param_2 + 0x3c);
    }
    fVar2 = *(float *)(param_2 + 0x2c);
    fVar3 = *(float *)(param_2 + 0x30);
    fVar4 = *(float *)(param_2 + 0x20);
    fVar5 = *(float *)(param_2 + 0x24);
    fVar6 = *(float *)(param_2 + 0x14);
    fVar7 = *(float *)(param_2 + 0x18);
    *param_7 = fVar8 + *(float *)(param_2 + 0x10) * fVar11 + *(float *)(param_2 + 0x1c) * fVar12 +
               *(float *)(param_2 + 0x28) * fVar10;
    param_7[1] = fVar6 * fVar11 + fVar9 + fVar4 * fVar12 + fVar2 * fVar10;
    param_7[2] = fVar7 * fVar11 + fVar1 + fVar5 * fVar12 + fVar10 * fVar3;
  }
  cVar13 = FUN_009682f0(param_1,param_4,param_5,local_14,&DAT_00b3f9a8);
  if (cVar13 == '\0') {
    fVar1 = *param_6;
    fVar8 = fVar1 * *param_5 + *(float *)(param_4 + 4);
    fVar9 = *(float *)(param_4 + 8) + param_5[1] * fVar1;
    fVar1 = *(float *)(param_4 + 0xc) + fVar1 * param_5[2];
    fVar10 = *param_7 - fVar8;
    fVar2 = param_7[1] - fVar9;
    fVar3 = param_7[2] - fVar1;
    fVar11 = fVar10 * *(float *)(param_4 + 0x10) + fVar2 * *(float *)(param_4 + 0x14) +
             fVar3 * *(float *)(param_4 + 0x18);
    fVar12 = *(float *)(param_4 + 0x24) * fVar3 +
             *(float *)(param_4 + 0x1c) * fVar10 + *(float *)(param_4 + 0x20) * fVar2;
    fVar10 = fVar10 * *(float *)(param_4 + 0x28) + *(float *)(param_4 + 0x2c) * fVar2 +
             *(float *)(param_4 + 0x30) * fVar3;
    if (fVar11 <= *(float *)(param_4 + 0x34) * 0.99) {
      if (fVar11 < -*(float *)(param_4 + 0x34) * 0.99) {
        fVar11 = -*(float *)(param_4 + 0x34);
      }
    }
    else {
      fVar11 = *(float *)(param_4 + 0x34);
    }
    if (fVar12 <= *(float *)(param_4 + 0x38) * 0.99) {
      if (fVar12 < -*(float *)(param_4 + 0x38) * 0.99) {
        fVar12 = -*(float *)(param_4 + 0x38);
      }
    }
    else {
      fVar12 = *(float *)(param_4 + 0x38);
    }
    if (fVar10 <= *(float *)(param_4 + 0x3c) * 0.99) {
      if (fVar10 < -*(float *)(param_4 + 0x3c) * 0.99) {
        fVar10 = -*(float *)(param_4 + 0x3c);
      }
    }
    else {
      fVar10 = *(float *)(param_4 + 0x3c);
    }
    fVar2 = *(float *)(param_4 + 0x2c);
    fVar3 = *(float *)(param_4 + 0x30);
    fVar4 = *(float *)(param_4 + 0x20);
    fVar5 = *(float *)(param_4 + 0x24);
    fVar6 = *(float *)(param_4 + 0x14);
    fVar7 = *(float *)(param_4 + 0x18);
    *param_7 = fVar8 + *(float *)(param_4 + 0x10) * fVar11 + *(float *)(param_4 + 0x1c) * fVar12 +
               fVar10 * *(float *)(param_4 + 0x28);
    param_7[1] = fVar6 * fVar11 + fVar9 + fVar4 * fVar12 + fVar2 * fVar10;
    param_7[2] = fVar11 * fVar7 + fVar1 + fVar5 * fVar12 + fVar10 * fVar3;
  }
  return;
}



undefined4
FUN_00968b00(float param_1,int param_2,float *param_3,int param_4,float *param_5,float *param_6,
            undefined4 param_7,char param_8,float *param_9,float *param_10)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float *pfVar37;
  undefined4 uVar38;
  float10 fVar39;
  uint local_228;
  
  pfVar1 = (float *)(param_4 + 0x10);
  fVar7 = *(float *)(param_4 + 4) - *(float *)(param_2 + 4);
  fVar8 = *(float *)(param_4 + 8) - *(float *)(param_2 + 8);
  fVar9 = *(float *)(param_4 + 0xc) - *(float *)(param_2 + 0xc);
  local_228 = 0;
  fVar26 = (*param_5 - *param_3) * param_1 + fVar7;
  fVar25 = (param_5[1] - param_3[1]) * param_1 + fVar8;
  fVar36 = param_1 * (param_5[2] - param_3[2]) + fVar9;
  *param_6 = 0.0;
  fVar4 = *(float *)(param_2 + 0x14);
  fVar5 = *(float *)(param_2 + 0x10);
  fVar6 = *(float *)(param_2 + 0x18);
  fVar35 = *(float *)(param_4 + 0x18) * fVar6 + *pfVar1 * fVar5 + *(float *)(param_4 + 0x14) * fVar4
  ;
  pfVar2 = (float *)(param_4 + 0x1c);
  pfVar3 = (float *)(param_4 + 0x28);
  fVar34 = *(float *)(param_4 + 0x24) * fVar6 + *pfVar2 * fVar5 + *(float *)(param_4 + 0x20) * fVar4
  ;
  fVar33 = *(float *)(param_4 + 0x30) * fVar6 + *pfVar3 * fVar5 + *(float *)(param_4 + 0x2c) * fVar4
  ;
  fVar24 = fVar6 * fVar9 + fVar5 * fVar7 + fVar4 * fVar8;
  fVar23 = fVar6 * fVar36 + fVar4 * fVar25 + fVar5 * fVar26;
  fVar4 = ABS(fVar35);
  fVar5 = ABS(fVar34);
  fVar6 = ABS(fVar33);
  fVar10 = fVar6 * *(float *)(param_4 + 0x3c) +
           *(float *)(param_4 + 0x38) * fVar5 + *(float *)(param_4 + 0x34) * fVar4 +
           *(float *)(param_2 + 0x34);
  if (fVar24 <= fVar10) {
    if (fVar24 < -fVar10) {
      if (fVar23 < -fVar10) {
        return 0;
      }
      fVar10 = (-param_1 * (fVar10 + fVar24)) / (fVar23 - fVar24);
      if (0.0 < fVar10) {
        *param_6 = fVar10;
        local_228 = 1;
      }
    }
  }
  else {
    if (fVar10 < fVar23) {
      return 0;
    }
    fVar10 = ((fVar10 - fVar24) * param_1) / (fVar23 - fVar24);
    if (0.0 < fVar10) {
      *param_6 = fVar10;
      local_228 = 1;
    }
  }
  pfVar37 = (float *)(param_2 + 0x1c);
  fVar10 = *(float *)(param_2 + 0x24) * *(float *)(param_4 + 0x18) +
           *pfVar1 * *pfVar37 + *(float *)(param_2 + 0x20) * *(float *)(param_4 + 0x14);
  fVar11 = *(float *)(param_4 + 0x24) * *(float *)(param_2 + 0x24) +
           *pfVar2 * *pfVar37 + *(float *)(param_4 + 0x20) * *(float *)(param_2 + 0x20);
  fVar12 = *(float *)(param_4 + 0x30) * *(float *)(param_2 + 0x24) +
           *pfVar3 * *pfVar37 + *(float *)(param_4 + 0x2c) * *(float *)(param_2 + 0x20);
  fVar32 = *(float *)(param_2 + 0x24) * fVar9 +
           *pfVar37 * fVar7 + *(float *)(param_2 + 0x20) * fVar8;
  fVar30 = *(float *)(param_2 + 0x24) * fVar36 +
           *pfVar37 * fVar26 + *(float *)(param_2 + 0x20) * fVar25;
  fVar13 = ABS(fVar10);
  fVar14 = ABS(fVar11);
  fVar15 = ABS(fVar12);
  fVar16 = fVar15 * *(float *)(param_4 + 0x3c) +
           *(float *)(param_4 + 0x38) * fVar14 + *(float *)(param_4 + 0x34) * fVar13 +
           *(float *)(param_2 + 0x38);
  if (fVar32 <= fVar16) {
    if (fVar32 < -fVar16) {
      if (fVar30 < -fVar16) {
        return 0;
      }
      fVar16 = (-param_1 * (fVar32 + fVar16)) / (fVar30 - fVar32);
      if (*param_6 < fVar16) {
        *param_6 = fVar16;
        local_228 = 2;
      }
    }
  }
  else {
    if (fVar16 < fVar30) {
      return 0;
    }
    fVar16 = ((fVar16 - fVar32) * param_1) / (fVar30 - fVar32);
    if (*param_6 < fVar16) {
      *param_6 = fVar16;
      local_228 = 2;
    }
  }
  pfVar37 = (float *)(param_2 + 0x28);
  fVar16 = *(float *)(param_2 + 0x30) * *(float *)(param_4 + 0x18) +
           *pfVar37 * *pfVar1 + *(float *)(param_2 + 0x2c) * *(float *)(param_4 + 0x14);
  fVar17 = *(float *)(param_4 + 0x24) * *(float *)(param_2 + 0x30) +
           *pfVar2 * *pfVar37 + *(float *)(param_4 + 0x20) * *(float *)(param_2 + 0x2c);
  fVar18 = *(float *)(param_4 + 0x30) * *(float *)(param_2 + 0x30) +
           *pfVar3 * *pfVar37 + *(float *)(param_4 + 0x2c) * *(float *)(param_2 + 0x2c);
  fVar31 = *(float *)(param_2 + 0x30) * fVar9 +
           *pfVar37 * fVar7 + *(float *)(param_2 + 0x2c) * fVar8;
  fVar29 = *(float *)(param_2 + 0x30) * fVar36 +
           *pfVar37 * fVar26 + *(float *)(param_2 + 0x2c) * fVar25;
  fVar19 = ABS(fVar16);
  fVar20 = ABS(fVar17);
  fVar21 = ABS(fVar18);
  fVar22 = fVar21 * *(float *)(param_4 + 0x3c) +
           *(float *)(param_4 + 0x38) * fVar20 + *(float *)(param_4 + 0x34) * fVar19 +
           *(float *)(param_2 + 0x3c);
  if (fVar31 <= fVar22) {
    if (fVar31 < -fVar22) {
      if (fVar29 < -fVar22) {
        return 0;
      }
      fVar22 = (-param_1 * (fVar22 + fVar31)) / (fVar29 - fVar31);
      if (*param_6 < fVar22) {
        *param_6 = fVar22;
        local_228 = 3;
      }
    }
  }
  else {
    if (fVar22 < fVar29) {
      return 0;
    }
    fVar22 = ((fVar22 - fVar31) * param_1) / (fVar29 - fVar31);
    if (*param_6 < fVar22) {
      *param_6 = fVar22;
      local_228 = 3;
    }
  }
  fVar27 = fVar9 * *(float *)(param_4 + 0x18) + fVar8 * *(float *)(param_4 + 0x14) + *pfVar1 * fVar7
  ;
  fVar28 = *(float *)(param_4 + 0x18) * fVar36 +
           *pfVar1 * fVar26 + fVar25 * *(float *)(param_4 + 0x14);
  fVar22 = *(float *)(param_2 + 0x3c) * fVar19 +
           *(float *)(param_2 + 0x38) * fVar13 + *(float *)(param_2 + 0x34) * fVar4 +
           *(float *)(param_4 + 0x34);
  if (fVar27 <= fVar22) {
    if (fVar27 < -fVar22) {
      if (fVar28 < -fVar22) {
        return 0;
      }
      fVar22 = (-param_1 * (fVar22 + fVar27)) / (fVar28 - fVar27);
      if (*param_6 < fVar22) {
        *param_6 = fVar22;
        local_228 = 4;
      }
    }
  }
  else {
    if (fVar22 < fVar28) {
      return 0;
    }
    fVar22 = ((fVar22 - fVar27) * param_1) / (fVar28 - fVar27);
    if (*param_6 < fVar22) {
      *param_6 = fVar22;
      local_228 = 4;
    }
  }
  fVar27 = *(float *)(param_4 + 0x24) * fVar9 + *pfVar2 * fVar7 + *(float *)(param_4 + 0x20) * fVar8
  ;
  fVar28 = *(float *)(param_4 + 0x24) * fVar36 +
           *pfVar2 * fVar26 + *(float *)(param_4 + 0x20) * fVar25;
  fVar22 = fVar20 * *(float *)(param_2 + 0x3c) +
           *(float *)(param_2 + 0x34) * fVar5 + *(float *)(param_2 + 0x38) * fVar14 +
           *(float *)(param_4 + 0x38);
  if (fVar27 <= fVar22) {
    if (fVar27 < -fVar22) {
      if (fVar28 < -fVar22) {
        return 0;
      }
      fVar22 = (-param_1 * (fVar22 + fVar27)) / (fVar28 - fVar27);
      if (*param_6 < fVar22) {
        *param_6 = fVar22;
        local_228 = 5;
      }
    }
  }
  else {
    if (fVar22 < fVar28) {
      return 0;
    }
    fVar22 = ((fVar22 - fVar27) * param_1) / (fVar28 - fVar27);
    if (*param_6 < fVar22) {
      *param_6 = fVar22;
      local_228 = 5;
    }
  }
  fVar8 = fVar9 * *(float *)(param_4 + 0x30) + *(float *)(param_4 + 0x2c) * fVar8 + *pfVar3 * fVar7;
  fVar9 = *(float *)(param_4 + 0x30) * fVar36 +
          *pfVar3 * fVar26 + fVar25 * *(float *)(param_4 + 0x2c);
  fVar7 = *(float *)(param_2 + 0x3c) * fVar21 +
          *(float *)(param_2 + 0x38) * fVar15 + *(float *)(param_2 + 0x34) * fVar6 +
          *(float *)(param_4 + 0x3c);
  if (fVar8 <= fVar7) {
    if (fVar8 < -fVar7) {
      if (fVar9 < -fVar7) {
        return 0;
      }
      fVar7 = (-param_1 * (fVar7 + fVar8)) / (fVar9 - fVar8);
      if (*param_6 < fVar7) {
        *param_6 = fVar7;
        local_228 = 6;
      }
    }
  }
  else {
    if (fVar7 < fVar9) {
      return 0;
    }
    fVar7 = ((fVar7 - fVar8) * param_1) / (fVar9 - fVar8);
    if (*param_6 < fVar7) {
      *param_6 = fVar7;
      local_228 = 6;
    }
  }
  fVar8 = fVar10 * fVar31 - fVar32 * fVar16;
  fVar7 = *(float *)(param_4 + 0x3c) * fVar5 + *(float *)(param_4 + 0x38) * fVar6 +
          *(float *)(param_2 + 0x38) * fVar19 + *(float *)(param_2 + 0x3c) * fVar13;
  if (fVar8 <= fVar7) {
    if (fVar8 < -fVar7) {
      fVar9 = fVar10 * fVar29 - fVar30 * fVar16;
      if (fVar9 < -fVar7) {
        return 0;
      }
      fVar7 = (-param_1 * (fVar7 + fVar8)) / (fVar9 - fVar8);
      if (*param_6 < fVar7) {
        *param_6 = fVar7;
        local_228 = 7;
      }
    }
  }
  else {
    fVar9 = fVar10 * fVar29 - fVar30 * fVar16;
    if (fVar7 < fVar9) {
      return 0;
    }
    fVar7 = ((fVar7 - fVar8) * param_1) / (fVar9 - fVar8);
    if (*param_6 < fVar7) {
      *param_6 = fVar7;
      local_228 = 7;
    }
  }
  fVar8 = fVar11 * fVar31 - fVar32 * fVar17;
  fVar7 = *(float *)(param_4 + 0x3c) * fVar4 + *(float *)(param_4 + 0x34) * fVar6 +
          *(float *)(param_2 + 0x38) * fVar20 + *(float *)(param_2 + 0x3c) * fVar14;
  if (fVar8 <= fVar7) {
    if (fVar8 < -fVar7) {
      fVar9 = fVar29 * fVar11 - fVar30 * fVar17;
      if (fVar9 < -fVar7) {
        return 0;
      }
      fVar7 = (-param_1 * (fVar7 + fVar8)) / (fVar9 - fVar8);
      if (*param_6 < fVar7) {
        *param_6 = fVar7;
        local_228 = 8;
      }
    }
  }
  else {
    fVar9 = fVar29 * fVar11 - fVar30 * fVar17;
    if (fVar7 < fVar9) {
      return 0;
    }
    fVar7 = ((fVar7 - fVar8) * param_1) / (fVar9 - fVar8);
    if (*param_6 < fVar7) {
      *param_6 = fVar7;
      local_228 = 8;
    }
  }
  fVar8 = fVar12 * fVar31 - fVar32 * fVar18;
  fVar7 = *(float *)(param_4 + 0x38) * fVar4 + *(float *)(param_4 + 0x34) * fVar5 +
          *(float *)(param_2 + 0x38) * fVar21 + *(float *)(param_2 + 0x3c) * fVar15;
  if (fVar8 <= fVar7) {
    if (fVar8 < -fVar7) {
      fVar9 = fVar29 * fVar12 - fVar30 * fVar18;
      if (fVar9 < -fVar7) {
        return 0;
      }
      fVar7 = (-param_1 * (fVar7 + fVar8)) / (fVar9 - fVar8);
      if (*param_6 < fVar7) {
        *param_6 = fVar7;
        local_228 = 9;
      }
    }
  }
  else {
    fVar9 = fVar29 * fVar12 - fVar30 * fVar18;
    if (fVar7 < fVar9) {
      return 0;
    }
    fVar7 = ((fVar7 - fVar8) * param_1) / (fVar9 - fVar8);
    if (*param_6 < fVar7) {
      *param_6 = fVar7;
      local_228 = 9;
    }
  }
  fVar8 = fVar24 * fVar16 - fVar35 * fVar31;
  fVar7 = *(float *)(param_2 + 0x34) * fVar19 + *(float *)(param_2 + 0x3c) * fVar4 +
          *(float *)(param_4 + 0x38) * fVar15 + *(float *)(param_4 + 0x3c) * fVar14;
  if (fVar8 <= fVar7) {
    if (fVar8 < -fVar7) {
      fVar9 = fVar23 * fVar16 - fVar29 * fVar35;
      if (fVar9 < -fVar7) {
        return 0;
      }
      fVar7 = (-param_1 * (fVar7 + fVar8)) / (fVar9 - fVar8);
      if (*param_6 < fVar7) {
        *param_6 = fVar7;
        local_228 = 10;
      }
    }
  }
  else {
    fVar9 = fVar23 * fVar16 - fVar29 * fVar35;
    if (fVar7 < fVar9) {
      return 0;
    }
    fVar7 = ((fVar7 - fVar8) * param_1) / (fVar9 - fVar8);
    if (*param_6 < fVar7) {
      *param_6 = fVar7;
      local_228 = 10;
    }
  }
  fVar8 = fVar24 * fVar17 - fVar34 * fVar31;
  fVar7 = *(float *)(param_2 + 0x34) * fVar20 + *(float *)(param_2 + 0x3c) * fVar5 +
          *(float *)(param_4 + 0x3c) * fVar13 + *(float *)(param_4 + 0x34) * fVar15;
  if (fVar8 <= fVar7) {
    if (fVar8 < -fVar7) {
      fVar9 = fVar23 * fVar17 - fVar29 * fVar34;
      if (fVar9 < -fVar7) {
        return 0;
      }
      fVar7 = (-param_1 * (fVar7 + fVar8)) / (fVar9 - fVar8);
      if (*param_6 < fVar7) {
        *param_6 = fVar7;
        local_228 = 0xb;
      }
    }
  }
  else {
    fVar9 = fVar23 * fVar17 - fVar29 * fVar34;
    if (fVar7 < fVar9) {
      return 0;
    }
    fVar7 = ((fVar7 - fVar8) * param_1) / (fVar9 - fVar8);
    if (*param_6 < fVar7) {
      *param_6 = fVar7;
      local_228 = 0xb;
    }
  }
  fVar8 = fVar24 * fVar18 - fVar33 * fVar31;
  fVar7 = *(float *)(param_2 + 0x34) * fVar21 + *(float *)(param_2 + 0x3c) * fVar6 +
          *(float *)(param_4 + 0x38) * fVar13 + *(float *)(param_4 + 0x34) * fVar14;
  if (fVar8 <= fVar7) {
    if (fVar8 < -fVar7) {
      fVar9 = fVar23 * fVar18 - fVar29 * fVar33;
      if (fVar9 < -fVar7) {
        return 0;
      }
      fVar7 = (-param_1 * (fVar7 + fVar8)) / (fVar9 - fVar8);
      if (*param_6 < fVar7) {
        *param_6 = fVar7;
        local_228 = 0xc;
      }
    }
  }
  else {
    fVar9 = fVar23 * fVar18 - fVar29 * fVar33;
    if (fVar7 < fVar9) {
      return 0;
    }
    fVar7 = ((fVar7 - fVar8) * param_1) / (fVar9 - fVar8);
    if (*param_6 < fVar7) {
      *param_6 = fVar7;
      local_228 = 0xc;
    }
  }
  fVar7 = fVar32 * fVar35 - fVar24 * fVar10;
  fVar4 = *(float *)(param_2 + 0x38) * fVar4 + *(float *)(param_2 + 0x34) * fVar13 +
          *(float *)(param_4 + 0x3c) * fVar20 + *(float *)(param_4 + 0x38) * fVar21;
  if (fVar7 <= fVar4) {
    if (fVar7 < -fVar4) {
      fVar8 = fVar30 * fVar35 - fVar23 * fVar10;
      if (fVar8 < -fVar4) {
        return 0;
      }
      fVar4 = (-param_1 * (fVar4 + fVar7)) / (fVar8 - fVar7);
      if (*param_6 < fVar4) {
        *param_6 = fVar4;
        local_228 = 0xd;
      }
    }
  }
  else {
    fVar8 = fVar30 * fVar35 - fVar23 * fVar10;
    if (fVar4 < fVar8) {
      return 0;
    }
    fVar4 = ((fVar4 - fVar7) * param_1) / (fVar8 - fVar7);
    if (*param_6 < fVar4) {
      *param_6 = fVar4;
      local_228 = 0xd;
    }
  }
  fVar7 = fVar32 * fVar34 - fVar24 * fVar11;
  fVar4 = *(float *)(param_2 + 0x34) * fVar14 + *(float *)(param_2 + 0x38) * fVar5 +
          *(float *)(param_4 + 0x3c) * fVar19 + *(float *)(param_4 + 0x34) * fVar21;
  if (fVar7 <= fVar4) {
    if (fVar7 < -fVar4) {
      fVar5 = fVar30 * fVar34 - fVar23 * fVar11;
      if (fVar5 < -fVar4) {
        return 0;
      }
      fVar4 = (-param_1 * (fVar4 + fVar7)) / (fVar5 - fVar7);
      if (*param_6 < fVar4) {
        *param_6 = fVar4;
        local_228 = 0xe;
      }
    }
  }
  else {
    fVar5 = fVar30 * fVar34 - fVar23 * fVar11;
    if (fVar4 < fVar5) {
      return 0;
    }
    fVar4 = ((fVar4 - fVar7) * param_1) / (fVar5 - fVar7);
    if (*param_6 < fVar4) {
      *param_6 = fVar4;
      local_228 = 0xe;
    }
  }
  fVar5 = fVar32 * fVar33 - fVar24 * fVar12;
  fVar4 = *(float *)(param_2 + 0x38) * fVar6 + *(float *)(param_2 + 0x34) * fVar15 +
          *(float *)(param_4 + 0x34) * fVar20 + *(float *)(param_4 + 0x38) * fVar19;
  if (fVar5 <= fVar4) {
    if (fVar5 < -fVar4) {
      fVar6 = fVar30 * fVar33 - fVar23 * fVar12;
      if (fVar6 < -fVar4) {
        return 0;
      }
      fVar4 = (-param_1 * (fVar4 + fVar5)) / (fVar6 - fVar5);
      if (*param_6 < fVar4) {
        *param_6 = fVar4;
        local_228 = 0xf;
        goto LAB_0096a367;
      }
    }
  }
  else {
    fVar6 = fVar30 * fVar33 - fVar23 * fVar12;
    if (fVar4 < fVar6) {
      return 0;
    }
    fVar4 = ((fVar4 - fVar5) * param_1) / (fVar6 - fVar5);
    if (*param_6 < fVar4) {
      *param_6 = fVar4;
      local_228 = 0xf;
      goto LAB_0096a367;
    }
  }
  if (0xf < local_228) {
    if (param_8 != '\0') {
      fVar39 = (float10)FUN_0047da40();
      if (1.1920929e-07 < ABS((float)fVar39 - 1.0)) {
        if (1.1920929e-07 < (float)fVar39) {
          FUN_0043f350();
        }
        else {
          *param_9 = DAT_00b258d0;
          param_9[1] = DAT_00b258d4;
          param_9[2] = DAT_00b258d8;
        }
      }
      fVar4 = param_9[1];
      fVar5 = param_9[2];
      *param_10 = -*param_9;
      param_10[1] = -fVar4;
      param_10[2] = -fVar5;
    }
    return 1;
  }
LAB_0096a367:
                    /* WARNING: Could not recover jumptable at 0x0096a36b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar38 = (*(code *)(&PTR_LAB_0096c370)[local_228])();
  return uVar38;
}



void FUN_0096c420(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00aa3b58;
  in_ECX[1] = *param_2;
  in_ECX[2] = param_2[1];
  uVar1 = param_2[2];
  in_ECX[4] = param_1;
  in_ECX[3] = uVar1;
  return;
}



undefined4 FUN_0096c480(int *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (iVar2 == 0) {
    cVar1 = FUN_0073b770(in_ECX + 4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



void FUN_0096c4c0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int in_ECX;
  undefined1 local_c [12];
  
  pfVar6 = (float *)FUN_007101f0(local_c,param_1 + 4);
  fVar1 = *(float *)(param_2 + 0x30);
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  fVar4 = *(float *)(param_2 + 0x28);
  fVar5 = *(float *)(param_2 + 0x2c);
  *(float *)(in_ECX + 4) = *(float *)(param_2 + 0x24) + fVar1 * *pfVar6;
  *(float *)(in_ECX + 8) = fVar4 + fVar2 * fVar1;
  *(float *)(in_ECX + 0xc) = fVar5 + fVar1 * fVar3;
  *(float *)(in_ECX + 0x10) = *(float *)(param_1 + 0x10) * *(float *)(param_2 + 0x30);
  return;
}



undefined4 FUN_0096c550(float param_1,int param_2,float *param_3,int param_4,float *param_5)

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
  
  fVar1 = *param_5 - *param_3;
  fVar2 = param_5[1] - param_3[1];
  fVar3 = param_5[2] - param_3[2];
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar6 = *(float *)(param_4 + 4) - *(float *)(param_2 + 4);
  fVar7 = *(float *)(param_4 + 8) - *(float *)(param_2 + 8);
  fVar8 = *(float *)(param_4 + 0xc) - *(float *)(param_2 + 0xc);
  fVar5 = fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7;
  fVar9 = *(float *)(param_2 + 0x10) + *(float *)(param_4 + 0x10);
  fVar9 = fVar9 * fVar9;
  if ((0.0 < fVar4) &&
     (fVar1 = fVar7 * fVar2 + fVar6 * fVar1 + fVar8 * fVar3, fVar1 < 0.0 != (fVar1 == 0.0))) {
    if (-param_1 * fVar4 < fVar1 == (-param_1 * fVar4 == fVar1)) {
      fVar5 = (fVar1 + fVar1 + param_1 * fVar4) * param_1 + fVar5;
    }
    else {
      fVar5 = fVar5 * fVar4 - fVar1 * fVar1;
      fVar9 = fVar4 * fVar9;
    }
  }
  if (fVar9 < fVar5) {
    return 0;
  }
  return 1;
}



undefined4
FUN_0096cdd0(float param_1,int param_2,float *param_3,float *param_4,float *param_5,float *param_6,
            float *param_7)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = param_2;
  local_24 = *param_4;
  local_20 = param_4[1];
  local_1c = param_4[2];
  local_18 = *param_5 - *param_4;
  local_14 = param_5[1] - param_4[1];
  local_10 = param_5[2] - param_4[2];
  local_c = *param_6 - *param_4;
  local_8 = param_6[1] - param_4[1];
  local_4 = param_6[2] - param_4[2];
  if (((DAT_00b3f9a8 == *param_3 - *param_7) && (DAT_00b3f9ac == param_3[1] - param_7[1])) &&
     (DAT_00b3f9b0 == param_3[2] - param_7[2])) {
    fVar3 = (float10)FUN_00975df0(param_2 + 4,&local_24,&param_4,&param_2);
  }
  else {
    local_3c = *(undefined4 *)(param_2 + 4);
    local_38 = *(undefined4 *)(param_2 + 8);
    local_30 = param_1 * (*param_3 - *param_7);
    local_34 = *(undefined4 *)(param_2 + 0xc);
    local_2c = (param_3[1] - param_7[1]) * param_1;
    local_28 = (param_3[2] - param_7[2]) * param_1;
    fVar3 = (float10)FUN_009726e0(&local_3c,&local_24,&param_5,&param_4,&param_2);
  }
  fVar1 = *(float *)(iVar2 + 0x10) * *(float *)(iVar2 + 0x10);
  if ((float)fVar3 < fVar1 != ((float)fVar3 == fVar1)) {
    return 1;
  }
  return 0;
}



undefined4 FUN_0096d640(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [36];
  
  FUN_00709430(param_1);
  FUN_00709430(param_1);
  FUN_00709430(param_1);
  FUN_006be9d0(param_1,local_2c);
  FUN_006be9d0(param_1,local_28);
  FUN_006be9d0(param_1,&local_30);
  iVar1 = FUN_00401f00(0x14);
  if (iVar1 != 0) {
    uVar2 = FUN_0096c420(local_30,local_24);
    return uVar2;
  }
  return 0;
}



void FUN_0096d6c0(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  float10 extraout_ST0;
  
  pcVar6 = param_1;
  pcVar1 = param_1 + 1;
  pcVar5 = param_1;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  param_1 = (char *)FUN_00401f00();
  FUN_006c5d40(param_1,pcVar5 + (0xd - (int)pcVar1),"%s = SPHERE_BV",pcVar6);
  iVar4 = param_2;
  uVar3 = *(ushort *)(param_2 + 10);
  if (*(ushort *)(param_2 + 8) <= uVar3) {
    FUN_004e4a10();
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = (char *)FUN_00707280();
  uVar3 = *(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar3) {
    FUN_004e4a10();
  }
  FUN_0042bb90(uVar3,&param_1);
  pcVar1 = pcVar6 + 1;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar7 = FUN_00401f00();
  param_1 = (char *)uVar7;
  param_2 = FUN_009828c0();
  FUN_006c5d40(uVar7,pcVar6 + (0x1e - (int)pcVar1),"     radius = %g",
               (double)((float10)param_2 / extraout_ST0));
  uVar3 = *(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar3) {
    FUN_004e4a10();
  }
  FUN_0042bb90(uVar3,&param_1);
  return;
}



void FUN_0096d7f0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  FUN_00711d90(0);
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  *(undefined1 *)(in_ECX + 0x12) = 0;
  *(undefined1 *)((int)in_ECX + 0x49) = 0;
  *in_ECX = &PTR_FUN_00aa3bbc;
  in_ECX[3] = DAT_00b3f9a8;
  in_ECX[4] = DAT_00b3f9ac;
  in_ECX[5] = DAT_00b3f9b0;
  in_ECX[6] = DAT_00b3f9a8;
  in_ECX[7] = DAT_00b3f9ac;
  uVar1 = DAT_00b3f9b0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  *(undefined2 *)(in_ECX + 0x13) = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  *(undefined1 *)((int)in_ECX + 0x4e) = 0;
  in_ECX[8] = uVar1;
  in_ECX[9] = 2;
  in_ECX[10] = 3;
  return;
}



void FUN_0096d870(void)

{
  int in_ECX;
  
  if (*(undefined4 **)(in_ECX + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x34))(1);
  }
  *(undefined4 *)(in_ECX + 0x34) = 0;
  return;
}



void FUN_0096d890(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x2c) + 8))(1);
  }
  if (*(int **)(in_ECX + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x30) + 8))(1);
  }
  *(int **)(in_ECX + 0x2c) = param_1;
  if (param_1 == (int *)0x0) {
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  else {
    piVar1 = (int *)(**(code **)(*param_1 + 0x18))();
    *(int **)(in_ECX + 0x30) = piVar1;
    if (*(int *)(in_ECX + 8) != 0) {
      (**(code **)(*piVar1 + 0x14))(*(undefined4 *)(in_ECX + 0x2c),*(int *)(in_ECX + 8) + 100);
      return;
    }
  }
  return;
}



undefined4 FUN_0096d930(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0x11 - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  switch(param_2) {
  case 0:
    FUN_006c5d40(uVar3,pcVar2,"%s = USE_OBB",param_1);
    return uVar3;
  case 1:
    FUN_006c5d40(uVar3,pcVar2,"%s = USE_TRI",param_1);
    return uVar3;
  case 2:
    FUN_006c5d40(uVar3,pcVar2,"%s = USE_ABV",param_1);
    return uVar3;
  case 3:
    FUN_006c5d40(uVar3,pcVar2,"%s = NOTEST",param_1);
    return uVar3;
  case 4:
    FUN_006c5d40(uVar3,pcVar2,"%s = USE_NIBOUND",param_1);
    return uVar3;
  default:
    FUN_006c5d40(uVar3,pcVar2,"%s = UNKNOWN!!!",param_1);
    return uVar3;
  }
}



undefined4 FUN_0096da10(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0x20 - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  switch(param_2) {
  case 0:
    FUN_006c5d40(uVar3,pcVar2,"%s = PROPAGATE_ON_SUCCESS",param_1);
    return uVar3;
  case 1:
    FUN_006c5d40(uVar3,pcVar2,"%s = PROPAGATE_ON_FAILURE",param_1);
    return uVar3;
  case 2:
    FUN_006c5d40(uVar3,pcVar2,"%s = PROPAGATE_ALWAYS",param_1);
    return uVar3;
  case 3:
    FUN_006c5d40(uVar3,pcVar2,"%s = PROPAGATE_NEVER",param_1);
    return uVar3;
  default:
    FUN_006c5d40(uVar3,pcVar2,"%s = UNKNOWN!!!",param_1);
    return uVar3;
  }
}



void FUN_0096db20(int param_1,int *param_2)

{
  undefined4 local_4;
  
  local_4 = 4;
  (**(code **)(param_1 + 4))(param_1,&param_1,4,&local_4,1);
  *param_2 = param_1;
  return;
}



void FUN_0096db50(int param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = 4;
  (**(code **)(param_1 + 8))(param_1,param_2,4,&local_4,1);
  return;
}



void FUN_0096db80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00aa3bbc;
  FUN_00401f20(in_ECX[0x10]);
  FUN_00401f20(in_ECX[0x11]);
  if ((int *)in_ECX[0xb] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0xb] + 8))(1);
  }
  if ((int *)in_ECX[0xc] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0xc] + 8))(1);
  }
  FUN_0096d870();
  FUN_00711c80();
  return;
}



int FUN_0096dbd0(int param_1)

{
  if (param_1 == 0) {
LAB_0096dbea:
    param_1 = 0;
  }
  else {
    do {
      param_1 = *(int *)(param_1 + 0x1c);
      if (param_1 == 0) goto LAB_0096dbea;
    } while (*(int *)(param_1 + 0xa8) == 0);
  }
  return param_1;
}



void FUN_0096dcd0(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if ((((*(int **)(in_ECX + 8) != (int *)0x0) &&
       (iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x10))(), iVar2 != 0)) &&
      (*(int *)(in_ECX + 0x40) == 0)) &&
     (uVar1 = *(ushort *)(*(int *)(iVar2 + 0xb4) + 8), uVar1 != 0)) {
    *(ushort *)(in_ECX + 0x4a) = uVar1;
    uVar3 = FUN_00401f00((uint)uVar1 * 0xc);
    *(undefined4 *)(in_ECX + 0x40) = uVar3;
    *(undefined1 *)(in_ECX + 0x48) = 1;
    *(undefined2 *)(in_ECX + 0x4c) = *(undefined2 *)(*(int *)(iVar2 + 0xb4) + 0x40);
  }
  return;
}



void FUN_0096dd40(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int in_ECX;
  
  if ((((*(int **)(in_ECX + 8) != (int *)0x0) &&
       (iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0xc))(), iVar3 != 0)) &&
      (*(int *)(in_ECX + 0x40) != 0)) && (*(char *)(in_ECX + 0x48) != '\0')) {
    iVar1 = (*(int **)(iVar3 + 0xb4))[7];
    uVar2 = (**(code **)(**(int **)(iVar3 + 0xb4) + 0x50))();
    (*(code *)PTR_FUN_00b27168)(uVar2,iVar1,*(undefined4 *)(in_ECX + 0x40),iVar3 + 100);
    *(undefined1 *)(in_ECX + 0x48) = 0;
  }
  return;
}



undefined4 FUN_0096dda0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  
  cVar3 = FUN_00711d20(param_1);
  if ((cVar3 != '\0') && (param_1 != (int *)0x0)) {
    for (puVar4 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00ba9ac8) {
        if (param_1[10] != *(int *)(in_ECX + 0x28)) {
          return 0;
        }
        if (param_1[9] == *(int *)(in_ECX + 0x24)) {
          piVar1 = (int *)param_1[0xb];
          if ((piVar1 == (int *)0x0) || (piVar2 = *(int **)(in_ECX + 0x2c), piVar2 == (int *)0x0)) {
            if (piVar1 != *(int **)(in_ECX + 0x2c)) {
              return 0;
            }
          }
          else {
            iVar5 = (**(code **)(*piVar1 + 0xc))();
            iVar6 = (**(code **)(*piVar2 + 0xc))();
            if (iVar5 != iVar6) {
              return 0;
            }
          }
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}



void FUN_0096de20(int *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0xc))();
    if (((iVar2 != 0) && (param_1[0x2d] != 0)) && ((param_2 == 0 || (param_2 == 1)))) {
      pbVar1 = (byte *)(param_1[0x2d] + 0x30);
      *pbVar1 = *pbVar1 | 0x33;
    }
  }
  return;
}



void FUN_0096de60(void)

{
  FUN_0096db20();
  return;
}



void FUN_0096de80(void)

{
  FUN_0096db50();
  return;
}



void FUN_0096dea0(byte param_1)

{
  FUN_0096db80();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0096def0(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  int iStack_14;
  
  uVar8 = 0;
  if (*(int **)(in_ECX + 8) != (int *)0x0) {
    for (puVar4 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 8) + 4))();
        puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00b3fcd4) {
        if (*(int *)(in_ECX + 0x34) != 0) {
          return;
        }
        if (*(int *)(in_ECX + 0x40) == 0) {
          FUN_0096dcd0();
          FUN_0096dd40();
        }
        iVar3 = *(int *)(in_ECX + 8);
        iVar5 = FUN_00401f00(0x54);
        if (iVar5 == 0) {
          *(undefined4 *)(in_ECX + 0x34) = 0;
          return;
        }
        iVar3 = *(int *)(iVar3 + 0xb4);
        uVar7 = FUN_009768b0(*(undefined2 *)(iVar3 + 0x40),*(undefined4 *)(iVar3 + 0x48),
                             *(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(in_ECX + 0x40),param_1);
        *(undefined4 *)(in_ECX + 0x34) = uVar7;
        return;
      }
    }
  }
  if ((*(int **)(in_ECX + 8) != (int *)0x0) &&
     (puVar4 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 8) + 4))(),
     puVar4 != (undefined4 *)0x0)) {
    while (puVar4 != &DAT_00b3fd04) {
      puVar4 = (undefined4 *)puVar4[1];
      if (puVar4 == (undefined4 *)0x0) {
        return;
      }
    }
    if (*(int *)(in_ECX + 0x34) == 0) {
      if (*(int *)(in_ECX + 0x40) == 0) {
        FUN_0096dcd0();
        FUN_0096dd40();
      }
      iVar3 = *(int *)(in_ECX + 8);
      uVar9 = (uint)*(ushort *)(*(int *)(iVar3 + 0xb4) + 0x40);
      iStack_14 = 0;
      iVar5 = FUN_00401f00(uVar9 * 6);
      if (uVar9 != 0) {
        psVar10 = (short *)(iVar5 + 2);
        do {
          (**(code **)(**(int **)(iVar3 + 0xb4) + 0x60))(uVar8,psVar10 + -1,psVar10,psVar10 + 1);
          sVar1 = psVar10[-1];
          if (((sVar1 != *psVar10) && (sVar2 = psVar10[1], sVar1 != sVar2)) && (*psVar10 != sVar2))
          {
            psVar10 = psVar10 + 3;
            iStack_14 = iStack_14 + 1;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      iVar6 = FUN_00401f00(0x54);
      if (iVar6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_009768b0(iStack_14,iVar5,*(undefined4 *)(*(int *)(iVar3 + 0xb4) + 0x1c),
                             *(undefined4 *)(in_ECX + 0x40),param_1);
      }
      *(undefined4 *)(in_ECX + 0x34) = uVar7;
      FUN_00401f20(iVar5);
    }
  }
  return;
}



void FUN_0096e140(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  thunk_FUN_00700770(param_1,param_2);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  if (*(int *)(in_ECX + 0x2c) != 0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x1c))();
    FUN_0096d890(uVar1);
  }
  if (*(int *)(in_ECX + 0x34) != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      FUN_0096dcd0();
      FUN_0096dd40();
    }
    FUN_0096def0(1);
  }
  return;
}



uint FUN_0096e4c0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_2 - *(float *)(param_1 + 0x20);
  fVar2 = param_2[1] - *(float *)(param_1 + 0x24);
  fVar3 = param_2[2] - *(float *)(param_1 + 0x28);
  fVar4 = (fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) -
          *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c);
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    return CONCAT31((uint3)(byte)(fVar4 < 0.0 | (byte)((ushort)((ushort)NAN(fVar4) << 10) >> 8) |
                                 (byte)((ushort)((ushort)(fVar4 == 0.0) << 0xe) >> 8)),1);
  }
  fVar1 = param_3[1] * fVar2 + *param_3 * fVar1 + param_3[2] * fVar3;
  if (fVar1 >= 0.0) {
    return (uint)(ushort)((ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == 0.0) << 0xe);
  }
  fVar4 = fVar4 * (param_3[1] * param_3[1] + *param_3 * *param_3 + param_3[2] * param_3[2]);
  if (fVar4 < fVar1 * fVar1 != (fVar4 == fVar1 * fVar1)) {
    return 1;
  }
  return 0;
}



uint FUN_0096e5e0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 char param_6,undefined4 *param_7,float *param_8,float *param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  ushort uVar11;
  float10 fVar12;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  local_30 = *param_4 - *param_3;
  local_2c = param_4[1] - param_3[1];
  local_28 = param_4[2] - param_3[2];
  local_24 = *param_5 - *param_3;
  local_20 = param_5[1] - param_3[1];
  local_1c = param_5[2] - param_3[2];
  fVar1 = local_1c * param_2[1] - local_20 * param_2[2];
  fVar3 = local_24 * param_2[2] - *param_2 * local_1c;
  fVar2 = *param_2 * local_20 - local_24 * param_2[1];
  fVar4 = fVar2 * local_28 + local_2c * fVar3 + local_30 * fVar1;
  uVar11 = (ushort)(fVar4 < 1e-05) << 8 | (ushort)NAN(fVar4) << 10 | (ushort)(fVar4 == 1e-05) << 0xe
  ;
  if (fVar4 < 1e-05) {
    if ((param_6 == '\0') &&
       (uVar11 = (ushort)(-1e-05 < fVar4) << 8 | (ushort)NAN(fVar4) << 10 |
                 (ushort)(fVar4 == -1e-05) << 0xe, -1e-05 >= fVar4)) {
      local_18 = *param_1 - *param_3;
      local_14 = param_1[1] - param_3[1];
      local_10 = param_1[2] - param_3[2];
      fVar1 = fVar1 * local_18 + local_14 * fVar3 + local_10 * fVar2;
      *param_9 = fVar1;
      uVar11 = (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.0) << 0xe
      ;
      if (0.0 >= fVar1) {
        if (fVar1 < fVar4) {
          return (uint)(ushort)((ushort)(fVar1 < fVar4) << 8 |
                                (ushort)(NAN(fVar1) || NAN(fVar4)) << 10 |
                               (ushort)(fVar1 == fVar4) << 0xe);
        }
        FUN_00498fe0(local_c,&local_30);
        fVar12 = (float10)FUN_0047d9e0(local_c);
        fVar1 = (float)fVar12;
        *param_10 = fVar1;
        if (0.0 < fVar1) {
          return (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                               (ushort)(fVar1 == 0.0) << 0xe);
        }
        fVar1 = fVar1 + *param_9;
        if (fVar4 >= fVar1 && (fVar4 == fVar1) == 0) {
          return (uint)(ushort)((ushort)(fVar4 < fVar1) << 8 |
                                (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                               (ushort)(fVar4 == fVar1) << 0xe);
        }
        fVar12 = (float10)FUN_0047d9e0(local_c);
        fVar1 = (float)fVar12;
        *param_8 = fVar1;
        if (0.0 < fVar1) {
          return (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                               (ushort)(fVar1 == 0.0) << 0xe);
        }
        goto LAB_0096e901;
      }
    }
    uVar8 = (uint)uVar11;
  }
  else {
    fVar5 = *param_1 - *param_3;
    fVar6 = param_1[1] - param_3[1];
    fVar7 = param_1[2] - param_3[2];
    fVar1 = fVar6 * fVar3 + fVar5 * fVar1 + fVar7 * fVar2;
    *param_9 = fVar1;
    if (0.0 >= fVar1 && (fVar1 == 0.0) == 0) {
      return (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe);
    }
    if (fVar4 < fVar1) {
      return (uint)(ushort)((ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10
                           | (ushort)(fVar4 == fVar1) << 0xe);
    }
    local_18 = fVar6 * local_28 - fVar7 * local_2c;
    local_14 = local_30 * fVar7 - fVar5 * local_28;
    local_10 = fVar5 * local_2c - fVar6 * local_30;
    fVar1 = param_2[2] * local_10 + local_18 * *param_2 + param_2[1] * local_14;
    *param_10 = fVar1;
    uVar8 = (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                          (ushort)(fVar1 == 0.0) << 0xe);
    if (0.0 < fVar1 || (fVar1 == 0.0) != 0) {
      fVar1 = fVar1 + *param_9;
      uVar8 = (uint)(ushort)((ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10
                            | (ushort)(fVar4 == fVar1) << 0xe);
      if (fVar4 >= fVar1) {
        fVar12 = (float10)FUN_0047d9e0(&local_18);
        fVar1 = (float)fVar12;
        *param_8 = fVar1;
        if (0.0 >= fVar1 && (fVar1 == 0.0) == 0) {
          return (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                               (ushort)(fVar1 == 0.0) << 0xe);
        }
LAB_0096e901:
        fVar4 = 1.0 / fVar4;
        *param_9 = fVar4 * *param_9;
        *param_10 = *param_10 * fVar4;
        fVar1 = *param_8;
        *param_8 = fVar4 * fVar1;
        uVar9 = FUN_0047da10(local_c,fVar4 * fVar1,param_2);
        puVar10 = (undefined4 *)FUN_0047d9b0(&local_18,uVar9);
        *param_7 = *puVar10;
        param_7[1] = puVar10[1];
        uVar9 = puVar10[2];
        param_7[2] = uVar9;
        return CONCAT31((int3)((uint)uVar9 >> 8),1);
      }
    }
  }
  return uVar8;
}



void FUN_0096e980(ushort param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_ECX;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined1 local_30 [12];
  float local_24 [4];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar9 = param_2;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *in_ECX = *param_2;
  in_ECX[1] = param_2[1];
  in_ECX[2] = param_2[2];
  fVar4 = fVar2;
  local_60 = fVar3;
  local_58 = fVar1;
  if (1 < param_1) {
    pfVar6 = param_2 + 5;
    uVar8 = (uint)(ushort)(param_1 - 1);
    param_2 = (float *)fVar2;
    do {
      *in_ECX = pfVar6[-2] + *in_ECX;
      in_ECX[1] = in_ECX[1] + pfVar6[-1];
      in_ECX[2] = *pfVar6 + in_ECX[2];
      if (local_58 <= pfVar6[-2]) {
        if (fVar1 < pfVar6[-2]) {
          fVar1 = pfVar6[-2];
        }
      }
      else {
        local_58 = pfVar6[-2];
      }
      if ((float)param_2 <= pfVar6[-1]) {
        if (fVar2 < pfVar6[-1]) {
          fVar2 = pfVar6[-1];
        }
      }
      else {
        param_2 = (float *)pfVar6[-1];
      }
      if (local_60 <= *pfVar6) {
        if (fVar3 < *pfVar6) {
          fVar3 = *pfVar6;
        }
      }
      else {
        local_60 = *pfVar6;
      }
      pfVar6 = pfVar6 + 3;
      uVar8 = uVar8 - 1;
      fVar4 = (float)param_2;
    } while (uVar8 != 0);
  }
  param_2 = (float *)fVar4;
  uVar8 = (uint)param_1;
  fVar4 = 1.0 / (float)uVar8;
  *in_ECX = fVar4 * *in_ECX;
  in_ECX[1] = in_ECX[1] * fVar4;
  in_ECX[2] = fVar4 * in_ECX[2];
  if (((fVar1 != local_58) && (fVar2 != (float)param_2)) && (fVar3 != local_60)) {
    pfVar6 = (float *)&DAT_00b3fadc;
    pfVar10 = local_24;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar10 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar10 = pfVar10 + 1;
    }
    if (param_1 != 0) {
      fVar1 = *in_ECX;
      fVar2 = in_ECX[1];
      fVar3 = in_ECX[2];
      do {
        uVar8 = uVar8 - 1;
        local_24[0] = local_24[0] + fVar1 * fVar1;
        local_24[1] = local_24[1] + fVar2 * fVar1;
        local_24[2] = local_24[2] + fVar3 * fVar1;
        local_14 = local_14 + fVar2 * fVar2;
        local_10 = local_10 + fVar3 * fVar2;
        local_4 = local_4 + fVar3 * fVar3;
      } while (uVar8 != 0);
    }
    pfVar6 = in_ECX + 3;
    local_24[3] = local_24[1];
    local_c = local_24[2];
    local_8 = local_10;
    FUN_00711ae0(local_30,pfVar6);
    local_54 = *pfVar9 - *in_ECX;
    local_50 = pfVar9[1] - in_ECX[1];
    local_4c = pfVar9[2] - in_ECX[2];
    local_48 = local_54;
    local_44 = local_50;
    local_40 = local_4c;
    if (1 < param_1) {
      pfVar9 = pfVar9 + 5;
      uVar8 = (uint)(ushort)(param_1 - 1);
      do {
        fVar1 = pfVar9[-2] - *in_ECX;
        fVar2 = pfVar9[-1] - in_ECX[1];
        fVar3 = *pfVar9 - in_ECX[2];
        fVar4 = fVar1 * *pfVar6 + fVar2 * in_ECX[4] + fVar3 * in_ECX[5];
        fVar5 = fVar4;
        if ((local_54 <= fVar4) && (fVar5 = local_54, local_48 < fVar4)) {
          local_48 = fVar4;
        }
        local_54 = fVar5;
        fVar4 = in_ECX[8] * fVar3 + fVar2 * in_ECX[7] + in_ECX[6] * fVar1;
        fVar5 = fVar4;
        if ((local_50 <= fVar4) && (fVar5 = local_50, local_44 < fVar4)) {
          local_44 = fVar4;
        }
        local_50 = fVar5;
        fVar1 = in_ECX[9] * fVar1 + in_ECX[10] * fVar2 + in_ECX[0xb] * fVar3;
        fVar2 = fVar1;
        if ((local_4c <= fVar1) && (fVar2 = local_4c, local_40 < fVar1)) {
          local_40 = fVar1;
        }
        local_4c = fVar2;
        pfVar9 = pfVar9 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    fVar1 = (local_48 + local_54) * 0.5;
    fVar2 = fVar1 * *pfVar6 + *in_ECX;
    *in_ECX = fVar2;
    fVar3 = in_ECX[1] + in_ECX[4] * fVar1;
    in_ECX[1] = fVar3;
    fVar4 = fVar1 * in_ECX[5] + in_ECX[2];
    in_ECX[2] = fVar4;
    fVar1 = (local_44 + local_50) * 0.5;
    fVar2 = fVar1 * in_ECX[6] + fVar2;
    *in_ECX = fVar2;
    fVar3 = in_ECX[7] * fVar1 + fVar3;
    in_ECX[1] = fVar3;
    fVar4 = fVar1 * in_ECX[8] + fVar4;
    in_ECX[2] = fVar4;
    fVar1 = (local_4c + local_40) * 0.5;
    *in_ECX = fVar1 * in_ECX[9] + fVar2;
    in_ECX[1] = in_ECX[10] * fVar1 + fVar3;
    in_ECX[2] = fVar1 * in_ECX[0xb] + fVar4;
    in_ECX[0xc] = (local_48 - local_54) * 0.5;
    in_ECX[0xd] = (local_44 - local_50) * 0.5;
    in_ECX[0xe] = (local_40 - local_4c) * 0.5;
    return;
  }
  in_ECX[3] = 1.0;
  in_ECX[4] = 0.0;
  in_ECX[5] = 0.0;
  in_ECX[6] = 0.0;
  in_ECX[9] = 0.0;
  in_ECX[7] = 1.0;
  in_ECX[8] = 0.0;
  in_ECX[10] = 0.0;
  _param_1 = (fVar1 - local_58) * 0.5;
  in_ECX[0xb] = 1.0;
  param_2 = (float *)((fVar2 - (float)param_2) * 0.5);
  local_58 = (fVar3 - local_60) * 0.5;
  if (_param_1 <= 0.0) {
    _param_1 = 0.1;
  }
  if ((float)param_2 <= 0.0) {
    param_2 = (float *)0x3dcccccd;
  }
  if (local_58 <= 0.0) {
    local_58 = 0.1;
  }
  in_ECX[0xc] = _param_1;
  in_ECX[0xd] = (float)param_2;
  in_ECX[0xe] = local_58;
  return;
}



ushort FUN_0096ef70(float *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *in_ECX;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  ushort uVar7;
  
  fVar1 = *in_ECX;
  fVar2 = *param_1;
  uVar7 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
          (ushort)(fVar2 == fVar1) << 0xe;
  if (fVar2 == fVar1) {
    fVar1 = in_ECX[1];
    fVar2 = param_1[1];
    uVar7 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 == fVar1) {
      fVar1 = in_ECX[2];
      fVar2 = param_1[2];
      uVar7 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
              (ushort)(fVar2 == fVar1) << 0xe;
      if (fVar2 == fVar1) {
        iVar6 = 0;
        pfVar5 = param_1 + 0xc;
        pfVar4 = param_1 + 4;
        pfVar3 = in_ECX;
        while( true ) {
          fVar1 = pfVar3[3];
          fVar2 = pfVar4[-1];
          if (fVar2 != fVar1) {
            return (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                   (ushort)(fVar2 == fVar1) << 0xe;
          }
          fVar1 = *(float *)(((int)in_ECX - (int)param_1) + (int)pfVar4);
          fVar2 = *pfVar4;
          if (fVar2 != fVar1) {
            return (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                   (ushort)(fVar2 == fVar1) << 0xe;
          }
          fVar1 = pfVar3[5];
          fVar2 = pfVar4[1];
          if (fVar2 != fVar1) {
            return (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                   (ushort)(fVar2 == fVar1) << 0xe;
          }
          fVar1 = *(float *)(((int)in_ECX - (int)param_1) + (int)pfVar5);
          fVar2 = *pfVar5;
          uVar7 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                  (ushort)(fVar2 == fVar1) << 0xe;
          if (fVar2 != fVar1) break;
          iVar6 = iVar6 + 1;
          pfVar5 = pfVar5 + 1;
          pfVar4 = pfVar4 + 3;
          pfVar3 = pfVar3 + 3;
          if (2 < iVar6) {
            return CONCAT11((char)(uVar7 >> 8),1);
          }
        }
        return uVar7;
      }
    }
  }
  return uVar7;
}



ushort FUN_0096efa6(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *in_ECX;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int unaff_EDI;
  ushort uVar7;
  
  iVar6 = 0;
  pfVar5 = (float *)(unaff_EDI + 0x30);
  pfVar4 = (float *)(unaff_EDI + 0x10);
  pfVar3 = in_ECX;
  while( true ) {
    fVar1 = pfVar3[3];
    fVar2 = pfVar4[-1];
    if (fVar2 != fVar1) {
      return (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
             (ushort)(fVar2 == fVar1) << 0xe;
    }
    fVar1 = *(float *)(((int)in_ECX - unaff_EDI) + (int)pfVar4);
    fVar2 = *pfVar4;
    if (fVar2 != fVar1) {
      return (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
             (ushort)(fVar2 == fVar1) << 0xe;
    }
    fVar1 = pfVar3[5];
    fVar2 = pfVar4[1];
    if (fVar2 != fVar1) {
      return (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
             (ushort)(fVar2 == fVar1) << 0xe;
    }
    fVar1 = *(float *)(((int)in_ECX - unaff_EDI) + (int)pfVar5);
    fVar2 = *pfVar5;
    uVar7 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 != fVar1) break;
    iVar6 = iVar6 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar4 = pfVar4 + 3;
    pfVar3 = pfVar3 + 3;
    if (2 < iVar6) {
      return CONCAT11((char)(uVar7 >> 8),1);
    }
  }
  return uVar7;
}



void FUN_0096f020(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  
  FUN_00709430(param_1);
  iVar1 = 3;
  do {
    FUN_00709430(param_1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_006de270(param_1,in_ECX + 0x30,3);
  return;
}



void FUN_0096f060(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  
  FUN_007094a0(param_1);
  iVar1 = 3;
  do {
    FUN_007094a0(param_1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_006de2b0(param_1,in_ECX + 0x30,3);
  return;
}



undefined4 FUN_0096f0a0(int param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00976aa0(param_1);
  if ((cVar1 != '\0') && (*(float *)(param_1 + 0x18) == *(float *)(in_ECX + 0x18))) {
    return 1;
  }
  return 0;
}



void FUN_0096f0e0(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00aa3d54;
  in_ECX[8] = 0x7f7fffff;
  in_ECX[9] = 0x7f7fffff;
  in_ECX[10] = 0x7f7fffff;
  in_ECX[0xb] = 0x7f7fffff;
  in_ECX[0xc] = 0x7f7fffff;
  in_ECX[0xd] = 0x7f7fffff;
  in_ECX[5] = param_4;
  in_ECX[6] = 0;
  in_ECX[1] = param_1;
  in_ECX[2] = param_2;
  in_ECX[3] = 1.0 / param_2;
  in_ECX[4] = param_3;
  in_ECX[7] = 0x7f7fffff;
  return;
}



void FUN_0096f160(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x0096f165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 4))();
  return;
}



void FUN_0096f170(float param_1,float param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  float unaff_EBX;
  int iVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = (float10)(**(code **)(*in_ECX + 8))(param_1,param_2);
  fVar8 = (float)fVar5;
  if (fVar8 <= -(float)in_ECX[4]) {
    pcVar1 = *(code **)(*in_ECX + 0xc);
    in_ECX[7] = 0;
    in_ECX[6] = 3;
    (*pcVar1)(param_1);
    return;
  }
  if (fVar8 < 1.1920929e-07 != (fVar8 == 1.1920929e-07)) {
    pcVar1 = *(code **)(*in_ECX + 0xc);
    in_ECX[7] = 0;
    in_ECX[6] = 2;
    (*pcVar1)(param_1);
    return;
  }
  cVar2 = FUN_008aa350(param_2);
  if (cVar2 == '\0') {
    fVar6 = param_1;
    fVar7 = param_2;
    fVar5 = (float10)(**(code **)(*in_ECX + 8))(param_1,param_2,0.0 - (float)in_ECX[2]);
    fVar8 = (unaff_EBX - (float)fVar5) * (float)in_ECX[3];
    if (NAN(fVar8) || 0.0 < fVar8 == (fVar8 == 0.0)) {
      fVar5 = (float10)(**(code **)(*in_ECX + 8))(param_1,param_2,in_ECX[1]);
      fVar8 = (float)fVar5;
      if ((fVar8 <= 0.0) ||
         (fVar5 = (float10)(**(code **)(*in_ECX + 8))
                                     (param_1,param_2,(float)in_ECX[1] - (float)in_ECX[2]),
         0.0 <= (fVar8 - (float)fVar5) * (float)in_ECX[3])) {
        iVar4 = 1;
        if (0 < in_ECX[5]) {
          fVar8 = 0.0;
          do {
            fVar6 = fVar6 - fVar8 / fVar7;
            if ((float)in_ECX[1] < fVar6) {
LAB_0096f396:
              in_ECX[6] = 1;
              in_ECX[7] = 0x7f7fffff;
              return;
            }
            fVar5 = (float10)(**(code **)(*in_ECX + 8))(param_1,param_2,fVar6);
            fVar8 = (float)fVar5;
            iVar3 = *in_ECX;
            if (fVar8 <= (float)in_ECX[4]) goto LAB_0096f373;
            fVar5 = (float10)(**(code **)(iVar3 + 8))(param_1,param_2,fVar6 - (float)in_ECX[2]);
            fVar7 = (fVar8 - (float)fVar5) * (float)in_ECX[3];
            if (0.0 <= fVar7) goto LAB_0096f396;
            iVar4 = iVar4 + 1;
          } while (iVar4 <= in_ECX[5]);
        }
        iVar3 = *in_ECX;
LAB_0096f373:
        pcVar1 = *(code **)(iVar3 + 0xc);
        in_ECX[7] = (int)fVar6;
        in_ECX[6] = 2;
        (*pcVar1)(param_1,param_2);
        return;
      }
    }
  }
  in_ECX[6] = 1;
  in_ECX[7] = 0x7f7fffff;
  return;
}



void FUN_0096f3c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  float fVar1;
  undefined4 *in_ECX;
  
  FUN_0096f0e0(param_3,param_4,param_5,param_6);
  in_ECX[0xe] = param_1;
  *in_ECX = &PTR_FUN_00aa3d68;
  in_ECX[0xf] = param_2;
  fVar1 = *(float *)(param_1 + 0x38) + *(float *)(param_2 + 0x10);
  in_ECX[0x10] = 1.0 / (fVar1 * fVar1);
  in_ECX[0x11] = 0x7f7fffff;
  return;
}



float10 FUN_0096f430(float *param_1,float *param_2,float param_3)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(in_ECX + 0x38);
  local_c = *(undefined4 *)(iVar1 + 0x2c);
  local_8 = *(undefined4 *)(iVar1 + 0x30);
  local_4 = *(undefined4 *)(iVar1 + 0x34);
  local_18 = param_3 * *param_1 + *(float *)(iVar1 + 0x20);
  local_14 = *(float *)(iVar1 + 0x24) + param_1[1] * param_3;
  local_10 = *(float *)(iVar1 + 0x28) + param_1[2] * param_3;
  iVar1 = *(int *)(in_ECX + 0x3c);
  local_20 = *(float *)(iVar1 + 8) + param_2[1] * param_3;
  local_1c = *(float *)(iVar1 + 0xc) + param_3 * param_2[2];
  local_24 = *(float *)(iVar1 + 4) + *param_2 * param_3;
  fVar2 = (float10)FUN_0096fbb0(&local_24,&local_18,in_ECX + 0x44);
  return (float10)(float)(fVar2 * (float10)*(float *)(in_ECX + 0x40) - (float10)1.0);
}



void FUN_0096f530(float *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00976a50(&local_30,*(undefined4 *)(in_ECX + 0x44));
  iVar2 = *(int *)(in_ECX + 0x3c);
  local_24 = *(float *)(iVar2 + 4);
  local_20 = *(float *)(iVar2 + 8);
  local_1c = *(float *)(iVar2 + 0xc);
  if (*(int *)(in_ECX + 0x18) == 2) {
    fVar1 = *(float *)(in_ECX + 0x1c);
    local_30 = fVar1 * *param_1 + local_30;
    local_2c = local_2c + param_1[1] * fVar1;
    local_28 = local_28 + fVar1 * param_1[2];
    fVar1 = *(float *)(in_ECX + 0x1c);
    local_24 = fVar1 * *param_2 + local_24;
    local_20 = local_20 + param_2[1] * fVar1;
    local_1c = local_1c + fVar1 * param_2[2];
    local_18 = local_24 - local_30;
    *(float *)(in_ECX + 0x2c) = local_18;
    local_14 = local_20 - local_2c;
    *(float *)(in_ECX + 0x30) = local_14;
    local_10 = local_1c - local_28;
    *(float *)(in_ECX + 0x34) = local_10;
    FUN_0043f350();
    fVar1 = *(float *)(*(int *)(in_ECX + 0x38) + 0x38);
    *(float *)(in_ECX + 0x20) = fVar1 * *(float *)(in_ECX + 0x2c) + local_30;
    *(float *)(in_ECX + 0x24) = *(float *)(in_ECX + 0x30) * fVar1 + local_2c;
    *(float *)(in_ECX + 0x28) = fVar1 * *(float *)(in_ECX + 0x34) + local_28;
    return;
  }
  local_18 = local_24 + local_30;
  local_14 = local_20 + local_2c;
  local_10 = local_1c + local_28;
  local_c = local_18 * 0.5;
  *(float *)(in_ECX + 0x20) = local_c;
  local_8 = local_14 * 0.5;
  *(float *)(in_ECX + 0x24) = local_8;
  local_4 = local_10 * 0.5;
  *(float *)(in_ECX + 0x28) = local_4;
  cVar3 = FUN_008aa390(&local_24);
  if (cVar3 != '\0') {
    local_c = local_24 - local_30;
    *(float *)(in_ECX + 0x2c) = local_c;
    local_8 = local_20 - local_2c;
    *(float *)(in_ECX + 0x30) = local_8;
    local_4 = local_1c - local_28;
    *(float *)(in_ECX + 0x34) = local_4;
    FUN_0043f350();
    return;
  }
  *(undefined4 *)(in_ECX + 0x2c) = DAT_00b258e8;
  *(undefined4 *)(in_ECX + 0x30) = DAT_00b258ec;
  *(undefined4 *)(in_ECX + 0x34) = DAT_00b258f0;
  return;
}



void FUN_0096f7a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  float fVar1;
  undefined4 *in_ECX;
  
  FUN_0096f0e0(param_3,param_4,param_5,param_6);
  in_ECX[0xe] = param_1;
  *in_ECX = &PTR_FUN_00aa3d7c;
  in_ECX[0xf] = param_2;
  fVar1 = *(float *)(param_1 + 0x38) + *(float *)(param_2 + 0x38);
  in_ECX[0x10] = 1.0 / (fVar1 * fVar1);
  in_ECX[0x11] = 0x7f7fffff;
  in_ECX[0x12] = 0x7f7fffff;
  return;
}



float10 FUN_0096f810(float *param_1,float *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(in_ECX + 0x38);
  local_c = *(undefined4 *)(iVar1 + 0x2c);
  local_8 = *(undefined4 *)(iVar1 + 0x30);
  local_4 = *(undefined4 *)(iVar1 + 0x34);
  iVar2 = *(int *)(in_ECX + 0x3c);
  local_24 = *(undefined4 *)(iVar2 + 0x2c);
  local_20 = *(undefined4 *)(iVar2 + 0x30);
  local_1c = *(undefined4 *)(iVar2 + 0x34);
  local_18 = param_3 * *param_1 + *(float *)(iVar1 + 0x20);
  local_14 = *(float *)(iVar1 + 0x24) + param_1[1] * param_3;
  local_10 = *(float *)(iVar1 + 0x28) + param_1[2] * param_3;
  local_30 = *param_2 * param_3 + *(float *)(iVar2 + 0x20);
  local_2c = *(float *)(iVar2 + 0x24) + param_2[1] * param_3;
  local_28 = *(float *)(iVar2 + 0x28) + param_3 * param_2[2];
  fVar3 = (float10)FUN_0096fcd0(&local_18,&local_30,in_ECX + 0x44,in_ECX + 0x48);
  return (float10)(float)(fVar3 * (float10)*(float *)(in_ECX + 0x40) - (float10)1.0);
}



void FUN_0096f940(float *param_1,float *param_2)

{
  float fVar1;
  char cVar2;
  int in_ECX;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00976a50(&local_30,*(undefined4 *)(in_ECX + 0x44));
  FUN_00976a50(&local_24,*(undefined4 *)(in_ECX + 0x48));
  if (*(int *)(in_ECX + 0x18) == 2) {
    fVar1 = *(float *)(in_ECX + 0x1c);
    local_30 = fVar1 * *param_1 + local_30;
    local_2c = local_2c + param_1[1] * fVar1;
    local_28 = local_28 + fVar1 * param_1[2];
    fVar1 = *(float *)(in_ECX + 0x1c);
    local_24 = fVar1 * *param_2 + local_24;
    local_20 = local_20 + param_2[1] * fVar1;
    local_1c = local_1c + fVar1 * param_2[2];
    local_18 = local_24 - local_30;
    *(float *)(in_ECX + 0x2c) = local_18;
    local_14 = local_20 - local_2c;
    *(float *)(in_ECX + 0x30) = local_14;
    local_10 = local_1c - local_28;
    *(float *)(in_ECX + 0x34) = local_10;
    FUN_0043f350();
    fVar1 = *(float *)(*(int *)(in_ECX + 0x38) + 0x38);
    *(float *)(in_ECX + 0x20) = fVar1 * *(float *)(in_ECX + 0x2c) + local_30;
    *(float *)(in_ECX + 0x24) = *(float *)(in_ECX + 0x30) * fVar1 + local_2c;
    *(float *)(in_ECX + 0x28) = fVar1 * *(float *)(in_ECX + 0x34) + local_28;
    return;
  }
  local_18 = local_24 + local_30;
  local_14 = local_20 + local_2c;
  local_10 = local_1c + local_28;
  local_c = local_18 * 0.5;
  *(float *)(in_ECX + 0x20) = local_c;
  local_8 = local_14 * 0.5;
  *(float *)(in_ECX + 0x24) = local_8;
  local_4 = local_10 * 0.5;
  *(float *)(in_ECX + 0x28) = local_4;
  cVar2 = FUN_008aa390(&local_30);
  if (cVar2 != '\0') {
    local_c = local_24 - local_30;
    *(float *)(in_ECX + 0x2c) = local_c;
    local_8 = local_20 - local_2c;
    *(float *)(in_ECX + 0x30) = local_8;
    local_4 = local_1c - local_28;
    *(float *)(in_ECX + 0x34) = local_4;
    FUN_0043f350();
    return;
  }
  *(undefined4 *)(in_ECX + 0x2c) = DAT_00b258e8;
  *(undefined4 *)(in_ECX + 0x30) = DAT_00b258ec;
  *(undefined4 *)(in_ECX + 0x34) = DAT_00b258f0;
  return;
}



float10 FUN_0096fbb0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_18;
  float local_14;
  
  local_18 = *param_1 - *param_2;
  local_14 = param_1[1] - param_2[1];
  fVar4 = param_1[2] - param_2[2];
  fVar3 = local_18 * param_2[3] + local_14 * param_2[4] + fVar4 * param_2[5];
  *param_3 = fVar3;
  if (0.0 < fVar3) {
    fVar1 = param_2[5] * param_2[5] + param_2[3] * param_2[3] + param_2[4] * param_2[4];
    if (fVar1 < fVar3 == (fVar1 == fVar3)) {
      fVar3 = fVar3 / fVar1;
      *param_3 = fVar3;
      fVar1 = fVar3 * param_2[3];
      fVar2 = param_2[4] * fVar3;
      fVar3 = fVar3 * param_2[5];
    }
    else {
      *param_3 = 1.0;
      fVar1 = param_2[3];
      fVar2 = param_2[4];
      fVar3 = param_2[5];
    }
    local_14 = local_14 - fVar2;
    local_18 = local_18 - fVar1;
    fVar4 = fVar4 - fVar3;
  }
  else {
    *param_3 = 0.0;
  }
  return (float10)(local_18 * local_18 + local_14 * local_14 + fVar4 * fVar4);
}



float10 FUN_0096fcd0(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar2 = *param_1 - *param_2;
  fVar3 = param_1[1] - param_2[1];
  fVar1 = param_1[2] - param_2[2];
  fVar4 = param_1[5] * param_1[5] + param_1[3] * param_1[3] + param_1[4] * param_1[4];
  fVar5 = -(param_2[5] * param_1[5] + param_2[3] * param_1[3] + param_2[4] * param_1[4]);
  fVar6 = param_2[5] * param_2[5] + param_2[3] * param_2[3] + param_2[4] * param_2[4];
  fVar7 = fVar3 * param_1[4] + fVar2 * param_1[3] + fVar1 * param_1[5];
  fVar8 = -(param_2[5] * fVar1 + param_2[3] * fVar2 + param_2[4] * fVar3);
  fVar2 = fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;
  fVar3 = ABS(fVar4 * fVar6 - fVar5 * fVar5);
  fVar1 = param_1[4] * param_2[5] - param_1[5] * param_2[4];
  fVar9 = param_2[3] * param_1[5] - param_1[3] * param_2[5];
  fVar10 = param_1[3] * param_2[4] - param_2[3] * param_1[4];
  if (fVar10 * fVar10 + fVar1 * fVar1 + fVar9 * fVar9 <= 1e-06) {
    if (fVar5 <= 0.0) {
      fVar3 = -fVar7;
      if (fVar4 <= fVar3) {
        *param_3 = 1.0;
        *param_4 = 0.0;
        return (float10)ABS(fVar7 + fVar7 + fVar4 + fVar2);
      }
      if (fVar7 < 0.0 != (fVar7 == 0.0)) {
        *param_3 = fVar3 / fVar4;
        *param_4 = 0.0;
        return (float10)ABS(fVar7 * *param_3 + fVar2);
      }
      *param_3 = 0.0;
      if (-fVar5 < fVar7 != (-fVar5 == fVar7)) {
        *param_4 = 1.0;
        return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar2);
      }
      fVar3 = fVar3 / fVar5;
      *param_4 = fVar3;
      return (float10)ABS(fVar3 * (fVar8 + fVar8 + fVar3 * fVar6) + fVar2);
    }
    if (0.0 <= fVar7) {
      *param_3 = 0.0;
      *param_4 = 0.0;
      return (float10)ABS(fVar2);
    }
    fVar3 = -fVar7;
    if (fVar3 < fVar4 != (fVar3 == fVar4)) {
      *param_3 = fVar3 / fVar4;
      *param_4 = 0.0;
      return (float10)ABS(fVar7 * *param_3 + fVar2);
    }
    *param_3 = 1.0;
    if (fVar5 <= -(fVar7 + fVar4)) {
      *param_4 = 1.0;
      fVar8 = fVar8 + fVar7 + fVar5;
      return (float10)ABS(fVar6 + fVar4 + fVar2 + fVar8 + fVar8);
    }
    fVar3 = -(fVar7 + fVar4) / fVar5;
    *param_4 = fVar3;
    return (float10)ABS(fVar7 * 2.0 + fVar4 + fVar2 +
                        fVar3 * ((fVar8 + fVar5) * 2.0 + fVar3 * fVar6));
  }
  *param_3 = fVar8 * fVar5 - fVar7 * fVar6;
  fVar9 = fVar7 * fVar5 - fVar8 * fVar4;
  *param_4 = fVar9;
  fVar1 = *param_3;
  if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
    if (NAN(fVar9) || 0.0 < fVar9 == (fVar9 == 0.0)) {
      if (fVar7 < 0.0) {
        *param_4 = 0.0;
        if (fVar4 <= -fVar7) {
          *param_3 = 1.0;
          return (float10)ABS(fVar7 + fVar7 + fVar4 + fVar2);
        }
        fVar4 = -fVar7 / fVar4;
        *param_3 = fVar4;
        return (float10)ABS(fVar4 * fVar7 + fVar2);
      }
      *param_3 = 0.0;
      if (!NAN(fVar8) && 0.0 < fVar8 != (fVar8 == 0.0)) {
        *param_4 = 0.0;
        return (float10)ABS(fVar2);
      }
      if (fVar6 <= -fVar8) {
        *param_4 = 1.0;
        return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar2);
      }
      fVar6 = -fVar8 / fVar6;
      *param_4 = fVar6;
      return (float10)ABS(fVar6 * fVar8 + fVar2);
    }
    if (fVar9 <= fVar3) {
      *param_3 = 0.0;
      if (!NAN(fVar8) && 0.0 < fVar8 != (fVar8 == 0.0)) {
        *param_4 = 0.0;
        return (float10)ABS(fVar2);
      }
      if (fVar6 <= -fVar8) {
        *param_4 = 1.0;
        return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar2);
      }
      fVar6 = -fVar8 / fVar6;
      *param_4 = fVar6;
      return (float10)ABS(fVar6 * fVar8 + fVar2);
    }
    fVar7 = fVar7 + fVar5;
    if (fVar7 < 0.0) {
      *param_4 = 1.0;
      if (fVar4 <= -fVar7) {
        *param_3 = 1.0;
        return (float10)ABS(fVar8 + fVar7 + fVar8 + fVar7 + fVar2 + fVar6 + fVar4);
      }
      fVar4 = -fVar7 / fVar4;
      *param_3 = fVar4;
      return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar4 * fVar7 + fVar2);
    }
    *param_3 = 0.0;
    if (fVar8 + fVar6 < 0.0 != (fVar8 + fVar6 == 0.0)) {
      *param_4 = 1.0;
      return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar2);
    }
    if (!NAN(fVar8) && 0.0 < fVar8 != (fVar8 == 0.0)) {
      *param_4 = 0.0;
      return (float10)ABS(fVar2);
    }
    *param_4 = -fVar8 / fVar6;
    return (float10)ABS((-fVar8 / fVar6) * fVar8 + fVar2);
  }
  if (fVar3 < *param_3) {
    if (fVar9 < 0.0) {
      if (-fVar7 < fVar4) {
        *param_4 = 0.0;
        if (!NAN(fVar7) && 0.0 < fVar7 != (fVar7 == 0.0)) {
          *param_3 = 0.0;
          return (float10)ABS(fVar2);
        }
        fVar4 = -fVar7 / fVar4;
        *param_3 = fVar4;
        return (float10)ABS(fVar4 * fVar7 + fVar2);
      }
      *param_3 = 1.0;
      fVar8 = fVar8 + fVar5;
      if (0.0 <= fVar8) {
        *param_4 = 0.0;
        return (float10)ABS(fVar7 + fVar7 + fVar4 + fVar2);
      }
      if (fVar6 <= -fVar8) {
        *param_4 = 1.0;
        return (float10)ABS(fVar7 + fVar8 + fVar7 + fVar8 + fVar2 + fVar6 + fVar4);
      }
      fVar6 = -fVar8 / fVar6;
      *param_4 = fVar6;
      return (float10)ABS(fVar7 + fVar7 + fVar6 * fVar8 + fVar4 + fVar2);
    }
    if (fVar9 <= fVar3) {
      *param_3 = 1.0;
      fVar8 = fVar8 + fVar5;
      if (0.0 <= fVar8) {
        *param_4 = 0.0;
        return (float10)ABS(fVar7 + fVar7 + fVar4 + fVar2);
      }
      if (fVar6 <= -fVar8) {
        *param_4 = 1.0;
        return (float10)ABS(fVar7 + fVar8 + fVar7 + fVar8 + fVar2 + fVar6 + fVar4);
      }
      fVar6 = -fVar8 / fVar6;
      *param_4 = fVar6;
      return (float10)ABS(fVar7 + fVar7 + fVar6 * fVar8 + fVar4 + fVar2);
    }
    fVar3 = fVar7 + fVar5;
    fVar1 = -fVar3;
    if (fVar1 < fVar4 != (fVar1 == fVar4)) {
      *param_4 = 1.0;
      if (0.0 <= fVar3) {
        *param_3 = 0.0;
        return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar2);
      }
      *param_3 = fVar1 / fVar4;
      return (float10)ABS(fVar8 + fVar8 + fVar6 + (fVar1 / fVar4) * fVar3 + fVar2);
    }
    *param_3 = 1.0;
    fVar8 = fVar8 + fVar5;
    if (fVar6 <= -fVar8) {
      *param_4 = 1.0;
      return (float10)ABS(fVar7 + fVar8 + fVar7 + fVar8 + fVar2 + fVar6 + fVar4);
    }
    if (0.0 < fVar8) {
      *param_4 = 0.0;
      return (float10)ABS(fVar7 + fVar7 + fVar4 + fVar2);
    }
    fVar6 = -fVar8 / fVar6;
    *param_4 = fVar6;
    return (float10)ABS(fVar7 + fVar7 + fVar6 * fVar8 + fVar4 + fVar2);
  }
  if (fVar9 < 0.0) {
    *param_4 = 0.0;
    if (!NAN(fVar7) && 0.0 < fVar7 != (fVar7 == 0.0)) {
      *param_3 = 0.0;
      return (float10)ABS(fVar2);
    }
    if (fVar4 <= -fVar7) {
      *param_3 = 1.0;
      return (float10)ABS(fVar7 + fVar7 + fVar4 + fVar2);
    }
    fVar4 = -fVar7 / fVar4;
    *param_3 = fVar4;
    return (float10)ABS(fVar4 * fVar7 + fVar2);
  }
  if (fVar9 <= fVar3) {
    *param_3 = (1.0 / fVar3) * *param_3;
    fVar3 = (1.0 / fVar3) * *param_4;
    *param_4 = fVar3;
    return (float10)ABS(fVar3 * (*param_3 * fVar5 + fVar3 * fVar6 + fVar8 * 2.0) +
                        *param_3 * (fVar7 * 2.0 + *param_3 * fVar4 + *param_4 * fVar5) + fVar2);
  }
  *param_4 = 1.0;
  fVar7 = fVar7 + fVar5;
  if (0.0 <= fVar7) {
    *param_3 = 0.0;
    return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar2);
  }
  if (fVar4 <= -fVar7) {
    *param_3 = 1.0;
    return (float10)ABS(fVar8 + fVar7 + fVar8 + fVar7 + fVar2 + fVar6 + fVar4);
  }
  fVar4 = -fVar7 / fVar4;
  *param_3 = fVar4;
  return (float10)ABS(fVar8 + fVar8 + fVar6 + fVar4 * fVar7 + fVar2);
}


