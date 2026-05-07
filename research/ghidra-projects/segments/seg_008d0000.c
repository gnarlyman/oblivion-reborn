
void FUN_008d0030(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a99ed8;
  *(undefined1 *)(in_ECX + 2) = 1;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008d0050(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  undefined1 auStack_d8 [8];
  int local_d0;
  float local_c0;
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
  int local_60;
  int iStack_5c;
  int iStack_58;
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
  if (((uint)param_1[0x7d] >> 8 & 1) == 0) {
    if (*(char *)(in_ECX + 8) != '\0') {
      param_1[0xba] = 0;
    }
    param_1[0xa8] = 2;
    FUN_00890720();
    piVar4 = (int *)FUN_008ba170(param_1[0x7b]);
    (**(code **)(*piVar4 + 0x18))(param_1);
    return;
  }
  local_90 = param_1[0xb0];
  iStack_8c = param_1[0xb1];
  iStack_88 = param_1[0xb2];
  iStack_84 = param_1[0xb3];
  local_a0[0] = 0x3f800000;
  local_80 = param_1[0xac];
  iStack_7c = param_1[0xad];
  iStack_78 = param_1[0xae];
  iStack_74 = param_1[0xaf];
  local_70 = param_1[0x8c];
  iStack_6c = param_1[0x8d];
  iStack_68 = param_1[0x8e];
  iStack_64 = param_1[0x8f];
  local_60 = param_1[0xb8];
  iStack_5c = param_1[0xb9];
  iStack_58 = param_1[0xba];
  iStack_54 = param_1[0xbb];
  pfVar1 = (float *)(param_1 + 0xb8);
  local_4c = param_1[0xa4];
  local_b0 = (float)param_1[0xa6];
  if (((uint)param_1[0x7d] >> 0xb & 1) == 0) {
    local_b0 = (float)param_1[0xa5];
    local_48 = 0.0;
    local_50 = local_b0;
  }
  else {
    local_4c = param_1[0xa4];
    local_c0 = (float)param_1[0xa5];
    local_50 = local_c0;
    local_48 = local_b0;
  }
  local_30 = param_1[0xa0];
  iStack_2c = param_1[0xa1];
  iStack_28 = param_1[0xa2];
  iStack_24 = param_1[0xa3];
  local_44 = 0;
  local_40 = 0x43fa0000;
  local_d0 = local_4c;
  FUN_0091f430(local_a0,pfVar1);
  if (((uint)param_1[0x7d] >> 0xb & 1) == 0) {
    param_1[0xba] = iStack_58;
    (**(code **)(*param_1 + 0x58))();
    iVar5 = (**(code **)(*param_1 + 0x58))();
    local_b0 = *(float *)(iVar5 + 0x20);
    fStack_ac = *(float *)(iVar5 + 0x24);
    fStack_a8 = *(float *)(iVar5 + 0x28);
    fStack_a4 = *(float *)(iVar5 + 0x2c);
    (**(code **)(*param_1 + 0x58))();
    fVar2 = (float)param_1[0xca];
    fVar3 = (float)param_1[0xb6];
    *pfVar1 = fVar2 * local_b0 * fVar3 + *pfVar1;
    param_1[0xb9] = (int)(fVar2 * fStack_ac * fVar3 + (float)param_1[0xb9]);
    param_1[0xba] = (int)(fVar2 * fStack_a8 * fVar3 + (float)param_1[0xba]);
    param_1[0xbb] = (int)(fVar2 * fStack_a4 * fVar3 + (float)param_1[0xbb]);
  }
  FUN_00890970();
  if ((param_1[0xa8] != 0xb) && ((param_1[0xa8] != 1 || (((uint)param_1[0x7d] >> 10 & 1) != 0)))) {
    FUN_00890720();
  }
  return;
}



void FUN_008d0290(float *param_1,float param_2,float *param_3,float param_4,float *param_5)

{
  bool bVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  uint local_7c;
  float local_78;
  float local_74;
  float local_50 [12];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = param_1[4];
  fStack_1c = param_1[5];
  fStack_18 = param_1[6];
  fStack_14 = param_1[7];
  fVar3 = *param_1;
  fVar22 = param_1[1];
  fVar24 = param_1[2];
  fVar32 = param_1[3];
  fVar35 = *param_3;
  fVar16 = param_3[1];
  fVar18 = param_3[2];
  fVar37 = param_3[3];
  local_50[0] = local_20 - fVar3;
  local_50[1] = fStack_1c - fVar22;
  local_50[2] = fStack_18 - fVar24;
  fVar9 = fStack_14 - fVar32;
  fVar10 = param_3[4] - fVar35;
  fVar11 = param_3[5] - fVar16;
  fVar12 = param_3[6] - fVar18;
  fVar13 = param_3[7] - fVar37;
  local_74 = local_50[2] * fVar12 + local_50[1] * fVar11 + local_50[0] * fVar10;
  fVar15 = fVar3;
  fVar17 = fVar22;
  fVar19 = fVar24;
  fVar20 = fVar32;
  if (local_74 < 0.0) {
    local_74 = -local_74;
    local_50[0] = -local_50[0];
    local_50[1] = -local_50[1];
    local_50[2] = -local_50[2];
    fVar9 = -fVar9;
    fVar15 = local_20;
    fVar17 = fStack_1c;
    fVar19 = fStack_18;
    fVar20 = fStack_14;
    local_20 = fVar3;
    fStack_1c = fVar22;
    fStack_18 = fVar24;
    fStack_14 = fVar32;
  }
  fVar36 = local_50[2] * (fVar18 - fVar19) +
           local_50[1] * (fVar16 - fVar17) + local_50[0] * (fVar35 - fVar15);
  fVar32 = fVar12 * (fVar18 - fVar19) + fVar11 * (fVar16 - fVar17) + fVar10 * (fVar35 - fVar15);
  fVar33 = local_50[2] * local_50[2] + local_50[1] * local_50[1] + local_50[0] * local_50[0];
  fVar34 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
  fVar3 = fVar34 * fVar33;
  fVar22 = ABS(fVar3 - local_74 * local_74);
  fVar24 = fVar34 * fVar36 - fVar32 * local_74;
  if (fVar22 * fVar22 < fVar24 * fVar22 == (fVar22 * fVar22 == fVar24 * fVar22)) {
    if (fVar24 < 0.0 == (fVar24 == 0.0)) {
      if (fVar22 <= (ABS(fVar3) + local_74 * local_74) * 9.536743e-07) goto LAB_008d045e;
      local_7c = 0;
      fVar24 = fVar24 / fVar22;
    }
    else {
      fVar24 = 0.0;
      local_7c = 2;
    }
  }
  else {
LAB_008d045e:
    fVar24 = 1.0;
    local_7c = 1;
  }
  local_78 = local_74 * fVar24 - fVar32;
  if (local_78 < fVar34) {
    if (local_78 < 0.0 == (local_78 == 0.0)) {
      local_78 = local_78 / fVar34;
      goto LAB_008d0522;
    }
    local_78 = 0.0;
    local_7c = 8;
  }
  else {
    local_78 = 1.0;
    local_7c = 4;
  }
  fVar24 = local_78 * local_74 + fVar36;
  if (fVar24 < 0.0 == (fVar24 == 0.0)) {
    if (fVar24 < fVar33) {
      fVar24 = fVar24 / fVar33;
    }
    else {
      fVar24 = 1.0;
      local_7c = local_7c | 1;
    }
  }
  else {
    fVar24 = 0.0;
    local_7c = local_7c | 2;
  }
LAB_008d0522:
  param_2 = param_2 + param_4;
  fVar21 = fVar15 + fVar24 * local_50[0];
  fVar23 = fVar17 + fVar24 * local_50[1];
  fVar25 = fVar19 + fVar24 * local_50[2];
  fVar26 = fVar20 + fVar24 * fVar9;
  fVar24 = param_5[7];
  fVar14 = fVar21 - (fVar35 + local_78 * fVar10);
  fVar16 = fVar23 - (fVar16 + local_78 * fVar11);
  fVar18 = fVar25 - (fVar18 + local_78 * fVar12);
  fVar35 = fVar18 * fVar18 + fVar16 * fVar16 + fVar14 * fVar14;
  param_5[4] = fVar14;
  param_5[5] = fVar16;
  param_5[6] = fVar18;
  param_5[7] = fVar26 - (fVar37 + local_78 * fVar13);
  fVar16 = 1.0 / SQRT(fVar35);
  if ((param_2 + fVar24) * (param_2 + fVar24) <= fVar35) {
    param_5[4] = fVar16 * param_5[4];
    param_5[5] = fVar16 * param_5[5];
    param_5[6] = fVar16 * param_5[6];
    param_5[7] = fVar16 * param_5[7];
    param_5[7] = fVar35 * fVar16 - param_2;
    return;
  }
  if (1.1920929e-07 <= fVar35) {
    fVar35 = fVar35 * fVar16;
    fVar24 = param_5[4];
    fVar18 = param_5[5];
    fVar37 = param_5[6];
    fVar14 = param_5[7];
  }
  else {
    bVar1 = ABS(local_50[0]) <= ABS(local_50[1]);
    fVar24 = ABS(local_50[0]);
    if (!bVar1) {
      fVar24 = ABS(local_50[1]);
    }
    fVar35 = 0.0;
    uVar5 = (uint)!bVar1;
    uVar7 = 2;
    if (ABS(local_50[2]) < fVar24) {
      uVar5 = 2;
      uVar7 = (uint)!bVar1;
    }
    fVar16 = local_50[uVar7];
    fVar24 = local_50[bVar1];
    param_5[uVar5 + 4] = 0.0;
    param_5[7] = 0.0;
    param_5[bVar1 + 4] = fVar16;
    param_5[uVar7 + 4] = -fVar24;
    fVar24 = param_5[4];
    fVar18 = param_5[5];
    fVar37 = param_5[6];
    fVar14 = param_5[7];
    fVar16 = fVar18 * fVar18;
    fVar8 = fVar37 * fVar37;
    auVar27._4_4_ = fVar16;
    auVar27._0_4_ = fVar16;
    auVar27._8_4_ = fVar16;
    auVar27._12_4_ = fVar16;
    auVar28._4_12_ = auVar27._4_12_;
    auVar28._0_4_ = fVar16 + fVar24 * fVar24;
    auVar29._4_4_ = fVar8;
    auVar29._0_4_ = fVar8 + auVar28._0_4_;
    auVar29._8_4_ = fVar8;
    auVar29._12_4_ = fVar8;
    auVar29 = rsqrtss(auVar28,auVar29);
    fVar16 = auVar29._0_4_;
    fVar16 = fVar16 * 0.5 * (3.0 - (fVar8 + auVar28._0_4_) * fVar16 * fVar16);
  }
  fVar8 = param_4 - fVar35;
  param_5[4] = fVar16 * fVar24;
  param_5[5] = fVar16 * fVar18;
  param_5[6] = fVar16 * fVar37;
  param_5[7] = fVar16 * fVar14;
  fVar24 = param_5[7];
  param_5[7] = fVar35 - param_2;
  *param_5 = fVar21 + fVar8 * param_5[4];
  param_5[1] = fVar23 + fVar8 * param_5[5];
  param_5[2] = fVar25 + fVar8 * param_5[6];
  param_5[3] = fVar26 + fVar8 * fVar24;
  if (fVar3 * 0.2 < fVar22) {
    return;
  }
  fVar22 = *param_3;
  fVar24 = param_3[1];
  fVar35 = param_3[2];
  fVar16 = param_3[3];
  iVar6 = 0;
  uVar5 = 10;
  fVar18 = fVar34 * (1.0 / fVar3);
  fVar3 = (1.0 / fVar3) * fVar33;
  fVar32 = -fVar32;
  pfVar4 = param_5;
  do {
    if ((local_7c & uVar5) == 0) {
      if (fVar32 <= 0.0) {
        if (0.0 < fVar36) {
          if (fVar33 < fVar36) goto LAB_008d098f;
LAB_008d086d:
          fVar37 = fVar18 * fVar36;
          fVar15 = fVar15 + fVar37 * local_50[0];
          fVar17 = fVar17 + fVar37 * local_50[1];
          fVar19 = fVar19 + fVar37 * local_50[2];
          fVar20 = fVar20 + fVar37 * fVar9;
        }
      }
      else {
        if (fVar34 < fVar32) goto LAB_008d098f;
        if (fVar36 <= 0.0) {
          fVar37 = fVar32 * fVar3;
          fVar22 = fVar22 + fVar37 * fVar10;
          fVar24 = fVar24 + fVar37 * fVar11;
          fVar35 = fVar35 + fVar37 * fVar12;
          fVar16 = fVar16 + fVar37 * fVar13;
        }
        else {
          if (fVar33 < fVar36) goto LAB_008d098f;
          if (fVar36 * fVar36 * fVar18 < fVar32 * fVar32 * fVar3) goto LAB_008d086d;
          fVar37 = fVar32 * fVar3;
          fVar22 = fVar22 + fVar37 * fVar10;
          fVar24 = fVar24 + fVar37 * fVar11;
          fVar35 = fVar35 + fVar37 * fVar12;
          fVar16 = fVar16 + fVar37 * fVar13;
        }
      }
      fVar22 = fVar15 - fVar22;
      fVar24 = fVar17 - fVar24;
      fVar35 = fVar19 - fVar35;
      fVar37 = fVar35 * fVar35 + fVar24 * fVar24 + fVar22 * fVar22;
      if (fVar37 < (param_2 + pfVar4[0xf]) * (param_2 + pfVar4[0xf])) {
        pfVar4[0xc] = fVar22;
        pfVar4[0xd] = fVar24;
        pfVar4[0xe] = fVar35;
        pfVar4[0xf] = fVar20 - fVar16;
        if (fVar37 <= 1.1920929e-07) {
          fVar22 = param_5[5];
          fVar24 = param_5[6];
          fVar35 = param_5[7];
          pfVar4[0xc] = param_5[4];
          pfVar4[0xd] = fVar22;
          pfVar4[0xe] = fVar24;
          pfVar4[0xf] = fVar35;
        }
        else {
          fVar22 = pfVar4[0xc];
          fVar24 = pfVar4[0xd];
          fVar35 = pfVar4[0xe];
          fVar16 = fVar24 * fVar24;
          fVar14 = fVar35 * fVar35;
          auVar30._4_4_ = fVar16;
          auVar30._0_4_ = fVar16;
          auVar30._8_4_ = fVar16;
          auVar30._12_4_ = fVar16;
          auVar31._4_12_ = auVar30._4_12_;
          auVar31._0_4_ = fVar16 + fVar22 * fVar22;
          auVar2._4_4_ = fVar14;
          auVar2._0_4_ = fVar14 + auVar31._0_4_;
          auVar2._8_4_ = fVar14;
          auVar2._12_4_ = fVar14;
          auVar29 = rsqrtss(auVar31,auVar2);
          fVar16 = auVar29._0_4_;
          fVar16 = fVar16 * 0.5 * (3.0 - (fVar14 + auVar31._0_4_) * fVar16 * fVar16);
          pfVar4[0xc] = fVar16 * fVar22;
          pfVar4[0xd] = fVar16 * fVar24;
          pfVar4[0xe] = fVar16 * fVar35;
          pfVar4[0xf] = fVar16 * pfVar4[0xf];
        }
        fVar24 = pfVar4[0xf];
        fVar22 = param_4 - SQRT(fVar37);
        pfVar4[0xf] = SQRT(fVar37) - param_2;
        pfVar4[8] = fVar15 + fVar22 * pfVar4[0xc];
        pfVar4[9] = fVar17 + fVar22 * pfVar4[0xd];
        pfVar4[10] = fVar19 + fVar22 * pfVar4[0xe];
        pfVar4[0xb] = fVar20 + fVar22 * fVar24;
      }
    }
LAB_008d098f:
    if (iVar6 == 1) {
      return;
    }
    fVar22 = param_3[4];
    fVar24 = param_3[5];
    fVar35 = param_3[6];
    fVar16 = param_3[7];
    local_50[0] = -local_50[0];
    local_50[1] = -local_50[1];
    local_50[2] = -local_50[2];
    fVar9 = -fVar9;
    fVar32 = (fVar34 - fVar32) - local_74;
    fVar10 = -fVar10;
    fVar11 = -fVar11;
    fVar12 = -fVar12;
    fVar13 = -fVar13;
    iVar6 = iVar6 + 1;
    uVar5 = 5;
    fVar36 = (fVar33 - fVar36) - local_74;
    fVar15 = local_20;
    fVar17 = fStack_1c;
    fVar19 = fStack_18;
    fVar20 = fStack_14;
    pfVar4 = pfVar4 + 8;
  } while( true );
}



undefined4
FUN_008d0a10(float *param_1,float param_2,float *param_3,float param_4,float param_5,float *param_6)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  
  local_60[0] = param_1[4] - *param_1;
  local_60[1] = param_1[5] - param_1[1];
  local_60[2] = param_1[6] - param_1[2];
  local_60[3] = param_1[7] - param_1[3];
  local_50 = param_3[4] - *param_3;
  fStack_4c = param_3[5] - param_3[1];
  fStack_48 = param_3[6] - param_3[2];
  fStack_44 = param_3[7] - param_3[3];
  iVar2 = FUN_008d1a30(param_1,local_60,param_3,&local_50,&local_40);
  param_5 = param_5 + param_2 + param_4;
  if (param_5 * param_5 < local_20) {
    return 1;
  }
  if (iVar2 == 0) {
    fVar7 = local_60[1] * fStack_48 - local_60[2] * fStack_4c;
    fVar8 = local_60[2] * local_50 - local_60[0] * fStack_48;
    fVar9 = local_60[0] * fStack_4c - local_60[1] * local_50;
    fVar10 = local_60[3] * fStack_44 - local_60[3] * fStack_44;
    if (1.1920929e-07 < fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7) {
      if (fVar9 * fStack_28 + fVar8 * fStack_2c + fVar7 * local_30 < 0.0) {
        fVar7 = -fVar7;
        fVar8 = -fVar8;
        fVar9 = -fVar9;
        fVar10 = -fVar10;
      }
      param_6[4] = fVar7;
      param_6[5] = fVar8;
      param_6[6] = fVar9;
      param_6[7] = fVar10;
      goto LAB_008d0bf3;
    }
  }
  else if (0.0 < local_20) {
    param_6[4] = local_30;
    param_6[5] = fStack_2c;
    param_6[6] = fStack_28;
    param_6[7] = fStack_24;
    goto LAB_008d0bf3;
  }
  bVar1 = ABS(local_60[0]) <= ABS(local_60[1]);
  fVar7 = ABS(local_60[0]);
  if (!bVar1) {
    fVar7 = ABS(local_60[1]);
  }
  uVar3 = (uint)!bVar1;
  uVar4 = 2;
  if (ABS(local_60[2]) < fVar7) {
    uVar3 = 2;
    uVar4 = (uint)!bVar1;
  }
  param_6[uVar3 + 4] = 0.0;
  fVar7 = local_60[uVar4];
  param_6[7] = 0.0;
  param_6[bVar1 + 4] = fVar7;
  param_6[uVar4 + 4] = -local_60[bVar1];
LAB_008d0bf3:
  fVar8 = param_6[4];
  fVar9 = param_6[5];
  fVar10 = param_6[6];
  fVar7 = param_4 - SQRT(local_20);
  fVar5 = fVar9 * fVar9;
  fVar6 = fVar10 * fVar10;
  auVar11._4_4_ = fVar5;
  auVar11._0_4_ = fVar5;
  auVar11._8_4_ = fVar5;
  auVar11._12_4_ = fVar5;
  auVar12._4_12_ = auVar11._4_12_;
  auVar12._0_4_ = fVar5 + fVar8 * fVar8;
  auVar13._4_4_ = fVar6;
  auVar13._0_4_ = fVar6 + auVar12._0_4_;
  auVar13._8_4_ = fVar6;
  auVar13._12_4_ = fVar6;
  auVar13 = rsqrtss(auVar12,auVar13);
  fVar5 = auVar13._0_4_;
  fVar5 = fVar5 * 0.5 * (3.0 - (fVar6 + auVar12._0_4_) * fVar5 * fVar5);
  param_6[4] = fVar5 * fVar8;
  param_6[5] = fVar5 * fVar9;
  param_6[6] = fVar5 * fVar10;
  param_6[7] = fVar5 * param_6[7];
  *param_6 = local_40 + fVar7 * param_6[4];
  param_6[1] = fStack_3c + fVar7 * param_6[5];
  param_6[2] = fStack_38 + fVar7 * param_6[6];
  param_6[3] = fStack_34 + fVar7 * param_6[7];
  param_6[7] = SQRT(local_20) - (param_2 + param_4);
  return 0;
}



void FUN_008d0ca0(float *param_1,float param_2,float *param_3,float param_4,float *param_5,
                 float param_6,int param_7,undefined1 (*param_8) [16])

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  bool bVar11;
  float *pfVar12;
  uint uVar13;
  float fVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 unaff_EBX;
  ushort uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  uint local_114;
  float local_110;
  float local_100 [6];
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0 [7];
  float fStack_b4;
  float local_b0 [4];
  float local_a0 [4];
  float local_90 [4];
  float local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
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
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar27 = param_5[3];
  fVar28 = *param_3 - param_3[8];
  fVar34 = param_3[1] - param_3[9];
  fVar35 = param_3[2] - param_3[10];
  fVar37 = param_3[3] - param_3[0xb];
  fVar20 = param_3[8] - param_3[4];
  fVar21 = param_3[9] - param_3[5];
  fVar22 = param_3[10] - param_3[6];
  fVar23 = param_3[0xb] - param_3[7];
  fVar2 = *param_5;
  fVar14 = param_5[1];
  fVar36 = param_5[2];
  fVar24 = fVar27 * (fVar21 * fVar35 - fVar22 * fVar34);
  fVar25 = fVar27 * (fVar22 * fVar28 - fVar20 * fVar35);
  fVar26 = fVar27 * (fVar20 * fVar34 - fVar21 * fVar28);
  fVar27 = fVar27 * (fVar23 * fVar37 - fVar23 * fVar37);
  fVar23 = fVar36 * (param_3[4] - *param_3);
  fVar37 = fVar36 * (param_3[5] - param_3[1]);
  fVar36 = fVar36 * (param_3[6] - param_3[2]);
  fVar43 = fVar2 * fVar22 * fVar24 - fVar2 * fVar20 * fVar26;
  fVar44 = fVar2 * fVar20 * fVar25 - fVar2 * fVar21 * fVar24;
  fVar42 = fVar14 * fVar35 * fVar24 - fVar14 * fVar28 * fVar26;
  fVar28 = fVar14 * fVar28 * fVar25 - fVar14 * fVar34 * fVar24;
  fVar20 = fVar36 * fVar24 - fVar23 * fVar26;
  fVar23 = fVar23 * fVar25 - fVar37 * fVar24;
  local_e0 = fVar24;
  fStack_dc = fVar25;
  fStack_d8 = fVar26;
  fStack_d4 = fVar27;
  local_b0[0] = fVar2 * fVar21 * fVar26 - fVar2 * fVar22 * fVar25;
  local_a0[1] = fVar42;
  local_90[2] = fVar23;
  local_b0[1] = fVar14 * fVar34 * fVar26 - fVar14 * fVar35 * fVar25;
  local_a0[0] = fVar43;
  local_b0[2] = fVar37 * fVar26 - fVar36 * fVar25;
  local_90[0] = fVar44;
  local_a0[2] = fVar20;
  fVar2 = param_5[4];
  local_90[1] = fVar28;
  fVar14 = *param_5;
  local_b0[3] = fVar24;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_80 = -(fVar2 * fVar14);
  local_a0[3] = fVar25;
  local_d0[0] = *param_1 - *param_3;
  local_d0[1] = param_1[1] - param_3[1];
  local_d0[2] = param_1[2] - param_3[2];
  local_d0[3] = param_1[3] - param_3[3];
  local_90[3] = fVar26;
  local_d0[4] = param_1[4] - *param_3;
  local_d0[5] = param_1[5] - param_3[1];
  local_d0[6] = param_1[6] - param_3[2];
  fStack_b4 = param_1[7] - param_3[3];
  pfVar12 = local_d0;
  iVar15 = 2;
  do {
    fVar36 = *pfVar12;
    fVar21 = pfVar12[1];
    fVar22 = pfVar12[2];
    fVar34 = local_b0[1] * fVar36;
    fVar37 = local_b0[2] * fVar36;
    fVar35 = local_b0[3] * fVar36;
    *pfVar12 = local_b0[0] * fVar36 + fVar43 * fVar21 + fVar44 * fVar22 + -(fVar2 * fVar14);
    pfVar12[1] = fVar34 + fVar42 * fVar21 + fVar28 * fVar22 + 0.0;
    pfVar12[2] = fVar37 + fVar20 * fVar21 + fVar23 * fVar22 + 0.0;
    pfVar12[3] = fVar35 + fVar25 * fVar21 + fVar26 * fVar22 + 0.0;
    pfVar12 = pfVar12 + 4;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  fVar2 = param_2 + param_4;
  auVar9._4_4_ = local_d0[5];
  auVar9._0_4_ = local_d0[4];
  auVar9._8_4_ = local_d0[6];
  auVar9._12_4_ = fStack_b4;
  *(undefined4 *)(param_8[1] + 0xc) = 0x7f7fffff;
  *(undefined4 *)(param_8[3] + 0xc) = 0x7f7fffff;
  fVar14 = fVar2 + param_6;
  *(undefined4 *)(param_8[5] + 0xc) = 0x7f7fffff;
  auVar38._4_4_ = -(uint)(fVar14 < local_d0[5]);
  auVar38._0_4_ = -(uint)(fVar14 < local_d0[4]);
  auVar38._8_4_ = -(uint)(fVar14 < local_d0[6]);
  auVar38._12_4_ = -(uint)(fVar14 < fStack_b4);
  uVar13 = movmskps(0x7f7fffff,auVar38);
  auVar8._4_4_ = local_d0[1];
  auVar8._0_4_ = local_d0[0];
  auVar8._8_4_ = local_d0[2];
  auVar8._12_4_ = local_d0[3];
  auVar41._4_4_ = -(uint)(fVar14 < local_d0[1]);
  auVar41._0_4_ = -(uint)(fVar14 < local_d0[0]);
  auVar41._8_4_ = -(uint)(fVar14 < local_d0[2]);
  auVar41._12_4_ = -(uint)(fVar14 < local_d0[3]);
  uVar16 = movmskps(0,auVar41);
  if ((uVar16 & uVar13) == 0) {
    fVar14 = -fVar14;
    uVar19 = (ushort)(local_d0[3] < fVar14) << 8 | (ushort)(NAN(local_d0[3]) || NAN(fVar14)) << 10 |
             (ushort)(local_d0[3] == fVar14) << 0xe;
    if ((local_d0[3] >= fVar14) ||
       (uVar19 = (ushort)(fStack_b4 < fVar14) << 8 | (ushort)(NAN(fStack_b4) || NAN(fVar14)) << 10 |
                 (ushort)(fStack_b4 == fVar14) << 0xe, fStack_b4 >= fVar14)) {
      uVar16 = movmskps(unaff_EBX,auVar9);
      fVar14 = (float)movmskps(CONCAT22((short)(uVar13 >> 0x10),uVar19),auVar8);
      local_100[0] = fVar14;
      local_100[1] = (float)uVar16;
      if (((uVar16 ^ (uint)fVar14) & 8) != 0) {
        fVar36 = local_d0[3] / (local_d0[3] - fStack_b4);
        auVar5._4_4_ = (1.0 - fVar36) * local_d0[1] + fVar36 * local_d0[5];
        auVar5._0_4_ = (1.0 - fVar36) * local_d0[0] + fVar36 * local_d0[4];
        auVar5._8_4_ = (1.0 - fVar36) * local_d0[2] + fVar36 * local_d0[6];
        auVar5._12_4_ = (1.0 - fVar36) * local_d0[3] + fVar36 * fStack_b4;
        uVar17 = movmskps(uVar16 ^ (uint)fVar14,auVar5);
        if (((byte)uVar17 & 7) == 7) {
          pfVar12 = local_d0 + 3;
          iVar18 = 0;
          iVar15 = (int)param_1 - (int)pfVar12;
          *(undefined4 *)(param_8[3] + 0xc) = 0xff7fffff;
          do {
            if (((SUB41(local_100[iVar18],0) & 7) == 7) &&
               (fVar14 = *pfVar12, *(float *)(param_8[3] + 0xc) < -ABS(fVar14) - fVar2)) {
              if (((uint)local_100[iVar18] & 8) == 0) {
                fVar36 = -param_4 - *pfVar12;
                *(float *)param_8[3] = -fVar24;
                *(float *)(param_8[3] + 4) = -fVar25;
                *(float *)(param_8[3] + 8) = -fVar26;
                *(float *)(param_8[3] + 0xc) = -fVar27;
              }
              else {
                fVar36 = param_4 - *pfVar12;
                *(float *)param_8[3] = fVar24;
                *(float *)(param_8[3] + 4) = fVar25;
                *(float *)(param_8[3] + 8) = fVar26;
                *(float *)(param_8[3] + 0xc) = fVar27;
              }
              pfVar1 = (float *)(iVar15 + (int)pfVar12);
              fVar20 = *pfVar1;
              fVar21 = pfVar1[1];
              fVar22 = pfVar1[2];
              fVar23 = pfVar1[3];
              *(float *)(param_8[3] + 0xc) = -ABS(fVar14) - fVar2;
              *(float *)param_8[2] = fVar20 + fVar36 * fVar24;
              *(float *)(param_8[2] + 4) = fVar21 + fVar36 * fVar25;
              *(float *)(param_8[2] + 8) = fVar22 + fVar36 * fVar26;
              *(float *)(param_8[2] + 0xc) = fVar23 + fVar36 * fVar27;
            }
            iVar18 = iVar18 + 1;
            pfVar12 = pfVar12 + 4;
          } while (iVar18 < 2);
          local_100[3] = fStack_b4 - local_d0[3];
          local_100[0] = local_d0[4] - local_d0[0];
          local_100[1] = local_d0[5] - local_d0[1];
          local_100[2] = local_d0[6] - local_d0[2];
          iVar15 = 0;
          do {
            local_110 = *(float *)((int)local_100 + iVar15);
            fVar14 = 1.0 / (local_110 * local_110 + local_100[3] * local_100[3]);
            fVar36 = local_d0[3] * local_110 - local_100[3] * *(float *)((int)local_d0 + iVar15);
            fVar36 = fVar36 * fVar36 * fVar14;
            fVar20 = fVar2 + *(float *)(param_8[3] + 0xc);
            if (((fVar36 < fVar20 * fVar20) &&
                (fVar14 = -((local_100[3] * local_d0[3] +
                            local_110 * *(float *)((int)local_d0 + iVar15)) * fVar14),
                -0.0001 < fVar14)) && (fVar14 < 1.0001)) {
              fStack_d4 = 0.0;
              local_e0 = *(float *)((int)local_b0 + iVar15);
              fStack_dc = *(float *)((int)local_a0 + iVar15);
              fVar20 = local_100[3];
              if (local_100[3] < 0.0) {
                fVar20 = -local_100[3];
                local_110 = -local_110;
              }
              local_110 = -local_110;
              local_e0 = fVar20 * *(float *)((int)local_b0 + iVar15);
              fStack_dc = fVar20 * *(float *)((int)local_a0 + iVar15);
              fStack_d8 = fVar20 * *(float *)((int)local_90 + iVar15);
              fStack_d4 = fVar20 * 0.0;
              *(float *)param_8[3] = local_e0 + local_110 * fVar24;
              *(float *)(param_8[3] + 4) = fStack_dc + local_110 * fVar25;
              *(float *)(param_8[3] + 8) = fStack_d8 + local_110 * fVar26;
              *(float *)(param_8[3] + 0xc) = fVar20 * 0.0 + local_110 * fVar27;
              fVar20 = *(float *)param_8[3];
              fVar21 = *(float *)(param_8[3] + 4);
              fVar22 = *(float *)(param_8[3] + 8);
              fVar23 = *(float *)(param_8[3] + 0xc);
              fVar28 = fVar21 * fVar21;
              fStack_6c = fVar22 * fVar22;
              auVar39._4_4_ = fVar28;
              auVar39._0_4_ = fVar28;
              auVar39._8_4_ = fVar28;
              auVar39._12_4_ = fVar28;
              auVar40._4_12_ = auVar39._4_12_;
              auVar40._0_4_ = fVar28 + fVar20 * fVar20;
              fStack_68 = fStack_6c;
              fStack_64 = fStack_6c;
              auVar3._4_4_ = fStack_6c;
              auVar3._0_4_ = fStack_6c + auVar40._0_4_;
              auVar3._8_4_ = fStack_6c;
              auVar3._12_4_ = fStack_6c;
              auVar41 = rsqrtss(auVar40,auVar3);
              local_70 = auVar41._0_4_;
              local_e8 = 0x40400000;
              local_e4 = 0.5;
              fVar28 = local_70 * 0.5 * (3.0 - (fStack_6c + auVar40._0_4_) * local_70 * local_70);
              *(float *)param_8[3] = fVar28 * fVar20;
              *(float *)(param_8[3] + 4) = fVar28 * fVar21;
              *(float *)(param_8[3] + 8) = fVar28 * fVar22;
              *(float *)(param_8[3] + 0xc) = fVar28 * fVar23;
              fVar21 = *(float *)param_8[3];
              fVar22 = *(float *)(param_8[3] + 4);
              fVar23 = *(float *)(param_8[3] + 8);
              fVar28 = *(float *)(param_8[3] + 0xc);
              fVar36 = -SQRT(fVar36);
              fVar20 = param_4 - fVar36;
              fVar34 = param_1[4];
              fVar37 = param_1[5];
              fVar35 = param_1[6];
              fVar42 = param_1[7];
              fVar43 = *param_1;
              fVar44 = param_1[1];
              fVar6 = param_1[2];
              fVar7 = param_1[3];
              *(float *)(param_8[3] + 0xc) = fVar36 - fVar2;
              *(float *)param_8[2] = (1.0 - fVar14) * fVar43 + fVar14 * fVar34 + fVar20 * fVar21;
              *(float *)(param_8[2] + 4) =
                   (1.0 - fVar14) * fVar44 + fVar14 * fVar37 + fVar20 * fVar22;
              *(float *)(param_8[2] + 8) =
                   (1.0 - fVar14) * fVar6 + fVar14 * fVar35 + fVar20 * fVar23;
              *(float *)(param_8[2] + 0xc) =
                   (1.0 - fVar14) * fVar7 + fVar14 * fVar42 + fVar20 * fVar28;
            }
            iVar15 = iVar15 + 4;
          } while (iVar15 < 0xc);
          return;
        }
      }
      local_110 = 0.0;
      local_70 = param_1[4] - *param_1;
      fStack_6c = param_1[5] - param_1[1];
      fStack_68 = param_1[6] - param_1[2];
      fStack_64 = param_1[7] - param_1[3];
      bVar11 = false;
      if (((byte)(uVar16 | (uint)fVar14) & 7) == 7) goto LAB_008d1345;
      if (param_7 != 0) {
        *(float *)(param_8[1] + 0xc) = param_6;
        *(float *)(param_8[3] + 0xc) = param_6;
        *(float *)(param_8[5] + 0xc) = param_6;
        local_114 = 1;
        iVar15 = 0;
        do {
          if ((local_114 & (uVar16 | (uint)fVar14)) == 0) {
            pfVar12 = param_3 + (char)(&DAT_00a99f0e)[iVar15] * 4;
            local_d0[0] = *pfVar12;
            local_d0[1] = pfVar12[1];
            local_d0[2] = pfVar12[2];
            local_d0[3] = pfVar12[3];
            pfVar12 = param_3 + (char)(&DAT_00a99f0c)[iVar15] * 4;
            local_d0[4] = *pfVar12;
            local_d0[5] = pfVar12[1];
            local_d0[6] = pfVar12[2];
            fStack_b4 = pfVar12[3];
            FUN_008d0290(param_1,param_2,local_d0,param_4,param_8);
          }
          local_114 = local_114 << 1;
          iVar15 = iVar15 + 1;
        } while (iVar15 < 3);
        return;
      }
      bVar11 = true;
      do {
        uVar13 = 1;
        iVar15 = 0;
        do {
          if (bVar11) {
            uVar16 = (uint)local_100[0] & uVar13 & (uint)local_100[1];
          }
          else {
            uVar16 = (uint)local_100[(int)local_110] & uVar13;
          }
          if (uVar16 == 0) {
            pfVar12 = param_3 + (char)(&DAT_00a99f0e)[iVar15] * 4;
            pfVar1 = param_3 + (char)(&DAT_00a99f0c)[iVar15] * 4;
            local_60 = *pfVar1 - *pfVar12;
            fStack_5c = pfVar1[1] - pfVar12[1];
            fStack_58 = pfVar1[2] - pfVar12[2];
            fStack_54 = pfVar1[3] - pfVar12[3];
            uVar16 = FUN_008d1a30(param_1,&local_70,param_3 + (char)(&DAT_00a99f0e)[iVar15] * 4,
                                  &local_60,&local_50);
            fVar14 = fVar2 + *(float *)(param_8[1] + 0xc);
            if (local_30 < fVar14 * fVar14) {
              if ((uVar16 & 1 << (SUB41(local_110,0) & 0x1f)) != 0) {
                if (!bVar11) goto LAB_008d16ca;
                local_110 = 1.4013e-45;
              }
              if (uVar16 == 0) {
                fVar14 = fStack_6c * fStack_58 - fStack_68 * fStack_5c;
                fVar27 = fStack_68 * local_60 - local_70 * fStack_58;
                fVar36 = local_70 * fStack_5c - fStack_6c * local_60;
                fVar20 = fStack_64 * fStack_54 - fStack_64 * fStack_54;
              }
              else {
                if (local_30 < 1.4210855e-14 != (local_30 == 1.4210855e-14)) {
                  local_40 = local_b0[iVar15];
                  fStack_3c = local_a0[iVar15];
                  fStack_38 = local_90[iVar15];
                  fVar14 = fStack_6c * fStack_58 - fStack_68 * fStack_5c;
                  fVar27 = fStack_68 * local_60 - local_70 * fStack_58;
                  fVar36 = local_70 * fStack_5c - fStack_6c * local_60;
                  local_e4 = fVar36 * fVar36 + fVar27 * fVar27 + fVar14 * fVar14;
                  fStack_34 = 0.0;
                  fVar20 = fStack_64 * fStack_54 - fStack_64 * fStack_54;
                  if (local_e4 < 1.4210855e-14 == (local_e4 == 1.4210855e-14)) goto LAB_008d15cf;
                }
                fVar14 = local_40;
                fVar27 = fStack_3c;
                fVar36 = fStack_38;
                fVar20 = fStack_34;
              }
LAB_008d15cf:
              fVar21 = fVar27 * fVar27;
              fStack_1c = fVar36 * fVar36;
              auVar31._4_4_ = fVar21;
              auVar31._0_4_ = fVar21;
              auVar31._8_4_ = fVar21;
              auVar31._12_4_ = fVar21;
              auVar32._4_12_ = auVar31._4_12_;
              auVar32._0_4_ = fVar21 + fVar14 * fVar14;
              fStack_18 = fStack_1c;
              fStack_14 = fStack_1c;
              auVar4._4_4_ = fStack_1c;
              auVar4._0_4_ = fStack_1c + auVar32._0_4_;
              auVar4._8_4_ = fStack_1c;
              auVar4._12_4_ = fStack_1c;
              auVar41 = rsqrtss(auVar32,auVar4);
              local_20 = auVar41._0_4_;
              local_e8 = 0x40400000;
              fVar21 = local_20 * 0.5 * (3.0 - (fStack_1c + auVar32._0_4_) * local_20 * local_20);
              auVar33._0_4_ = fVar21 * fVar14;
              auVar33._4_4_ = fVar21 * fVar27;
              auVar33._8_4_ = fVar21 * fVar36;
              auVar33._12_4_ = fVar21 * fVar20;
              fVar14 = auVar33._8_4_ * fStack_38 +
                       auVar33._4_4_ * fStack_3c + auVar33._0_4_ * local_40;
              if (fVar14 < 0.0) {
                uVar10 = CONCAT44(auVar33._4_4_,auVar33._0_4_);
                auVar33._0_8_ = uVar10 ^ 0x8000000080000000;
                auVar33._8_4_ = -auVar33._8_4_;
                auVar33._12_4_ = -auVar33._12_4_;
                fVar14 = -fVar14;
              }
              param_8[1] = auVar33;
              fVar27 = param_4 - fVar14;
              *(float *)*param_8 = local_50 + fVar27 * auVar33._0_4_;
              *(float *)(*param_8 + 4) = fStack_4c + fVar27 * auVar33._4_4_;
              *(float *)(*param_8 + 8) = fStack_48 + fVar27 * auVar33._8_4_;
              *(float *)(*param_8 + 0xc) = fStack_44 + fVar27 * auVar33._12_4_;
              *(float *)(param_8[1] + 0xc) = fVar14 - fVar2;
            }
          }
LAB_008d16ca:
          uVar13 = uVar13 << 1;
          iVar15 = iVar15 + 1;
        } while (iVar15 < 3);
        if (bVar11) {
          return;
        }
        local_110 = (float)((int)local_110 + 1);
        param_8 = param_8 + 2;
LAB_008d1345:
        while( true ) {
          if (1 < (int)local_110) {
            return;
          }
          if ((SUB41(local_100[(int)local_110],0) & 7) != 7) break;
          if (((uint)local_100[(int)local_110] & 8) == 0) {
            fVar27 = param_4 - local_d0[(int)local_110 * 4 + 3];
            pfVar12 = param_1 + (int)local_110 * 4;
            fVar14 = local_d0[(int)local_110 * 4 + 3];
            auVar30._0_4_ = *pfVar12 + fVar27 * local_e0;
            auVar30._4_4_ = pfVar12[1] + fVar27 * fStack_dc;
            auVar30._8_4_ = pfVar12[2] + fVar27 * fStack_d8;
            auVar30._12_4_ = pfVar12[3] + fVar27 * fStack_d4;
            *param_8 = auVar30;
            *(float *)param_8[1] = local_e0;
            *(float *)(param_8[1] + 4) = fStack_dc;
            *(float *)(param_8[1] + 8) = fStack_d8;
            *(float *)(param_8[1] + 0xc) = fStack_d4;
            *(float *)(param_8[1] + 0xc) = fVar14 - fVar2;
            local_110 = (float)((int)local_110 + 1);
            param_8 = param_8 + 2;
          }
          else {
            fVar27 = -param_4 - local_d0[(int)local_110 * 4 + 3];
            pfVar12 = param_1 + (int)local_110 * 4;
            fVar14 = local_d0[(int)local_110 * 4 + 3];
            auVar29._0_4_ = *pfVar12 + fVar27 * local_e0;
            auVar29._4_4_ = pfVar12[1] + fVar27 * fStack_dc;
            auVar29._8_4_ = pfVar12[2] + fVar27 * fStack_d8;
            auVar29._12_4_ = pfVar12[3] + fVar27 * fStack_d4;
            *param_8 = auVar29;
            *(float *)param_8[1] = -local_e0;
            *(float *)(param_8[1] + 4) = -fStack_dc;
            *(float *)(param_8[1] + 8) = -fStack_d8;
            *(float *)(param_8[1] + 0xc) = -fStack_d4;
            *(float *)(param_8[1] + 0xc) = -fVar14 - fVar2;
            local_110 = (float)((int)local_110 + 1);
            param_8 = param_8 + 2;
          }
        }
      } while( true );
    }
  }
  return;
}



void FUN_008d1700(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  
  fVar9 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar1 = *param_4;
  fVar12 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = *param_2 - fVar9;
  fVar6 = param_2[1] - fVar2;
  fVar7 = param_2[2] - fVar3;
  fVar15 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
  fVar8 = fVar1 - fVar9;
  fVar10 = fVar12 - fVar2;
  fVar11 = fVar4 - fVar3;
  fVar16 = fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8;
  fVar17 = fVar11 * fVar7 + fVar10 * fVar6 + fVar8 * fVar5;
  fVar18 = fVar16 * fVar15 - fVar17 * fVar17;
  if (0.0 < fVar18) {
    fVar1 = 1.0 / fVar18;
    fVar12 = (fVar3 - param_1[2]) * fVar7 +
             (fVar2 - param_1[1]) * fVar6 + (fVar9 - *param_1) * fVar5;
    fVar9 = (fVar3 - param_1[2]) * fVar11 +
            (fVar2 - param_1[1]) * fVar10 + (fVar9 - *param_1) * fVar8;
    fVar16 = fVar9 * fVar17 - fVar12 * fVar16;
    fVar15 = fVar17 * fVar12 - fVar9 * fVar15;
    *param_5 = fVar16 * fVar1;
    param_5[1] = ((fVar18 - fVar16) - fVar15) * fVar1;
    param_5[2] = fVar15 * fVar1;
    return;
  }
  fVar17 = *param_2 - fVar1;
  fVar13 = param_2[1] - fVar12;
  fVar14 = param_2[2] - fVar4;
  fVar18 = fVar14 * fVar14 + fVar13 * fVar13 + fVar17 * fVar17;
  if (fVar15 < fVar16) {
    if (fVar16 <= fVar18) {
      fVar18 = ((param_1[2] - fVar4) * fVar14 +
               (param_1[1] - fVar12) * fVar13 + (*param_1 - fVar1) * fVar17) / fVar18;
      param_5[1] = 0.0;
      *param_5 = fVar18;
      param_5[2] = 1.0 - fVar18;
      return;
    }
    fVar16 = ((param_1[2] - fVar3) * fVar11 +
             (param_1[1] - fVar2) * fVar10 + (*param_1 - fVar9) * fVar8) / fVar16;
    *param_5 = 0.0;
    param_5[2] = fVar16;
    param_5[1] = 1.0 - fVar16;
    return;
  }
  if (fVar18 < fVar15) {
    fVar15 = ((param_1[2] - fVar3) * fVar7 +
             (param_1[1] - fVar2) * fVar6 + (*param_1 - fVar9) * fVar5) / fVar15;
    param_5[2] = 0.0;
    *param_5 = fVar15;
    param_5[1] = 1.0 - fVar15;
    return;
  }
  param_5[1] = 0.0;
  if (0.0 < fVar18) {
    fVar18 = ((param_1[2] - param_4[2]) * fVar14 +
             (param_1[1] - param_4[1]) * fVar13 + (*param_1 - *param_4) * fVar17) / fVar18;
    *param_5 = fVar18;
    param_5[2] = 1.0 - fVar18;
    return;
  }
  *param_5 = 0.0;
  param_5[2] = 0.0;
  return;
}



uint FUN_008d1a30(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_34;
  
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar7 = *param_3 - *param_1;
  fVar8 = param_3[1] - param_1[1];
  fVar9 = param_3[2] - param_1[2];
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar10 = param_4[2];
  fVar11 = fVar5 * fVar10 + fVar4 * fVar2 + fVar3 * fVar1;
  fVar12 = fVar5 * fVar9 + fVar4 * fVar8 + fVar3 * fVar7;
  local_34 = fVar10 * fVar9 + fVar2 * fVar8 + fVar1 * fVar7;
  fVar7 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
  fVar10 = fVar10 * fVar10 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar1 = ABS(fVar10 * fVar7 - fVar11 * fVar11);
  fVar2 = fVar10 * fVar12 - local_34 * fVar11;
  if (fVar1 * fVar1 < fVar2 * fVar1 == (fVar1 * fVar1 == fVar2 * fVar1)) {
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      if (fVar1 <= (fVar11 * fVar11 + fVar10 * fVar7) * 9.536743e-07) goto LAB_008d1b9e;
      uVar6 = 0;
      fVar2 = fVar2 / fVar1;
    }
    else {
      fVar2 = 0.0;
      uVar6 = 2;
    }
  }
  else {
LAB_008d1b9e:
    fVar2 = 1.0;
    uVar6 = 1;
  }
  local_34 = fVar11 * fVar2 - local_34;
  if (local_34 < fVar10) {
    if (local_34 < 0.0 == (local_34 == 0.0)) {
      local_34 = local_34 / fVar10;
      goto LAB_008d1c49;
    }
    local_34 = 0.0;
    uVar6 = 8;
  }
  else {
    local_34 = 1.0;
    uVar6 = 4;
  }
  fVar2 = fVar11 * local_34 + fVar12;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    if (fVar2 < fVar7) {
      fVar2 = fVar2 / fVar7;
    }
    else {
      fVar2 = 1.0;
      uVar6 = uVar6 | 1;
    }
  }
  else {
    fVar2 = 0.0;
    uVar6 = uVar6 | 2;
  }
LAB_008d1c49:
  fVar7 = *param_1 + fVar2 * fVar3;
  fVar8 = param_1[1] + fVar2 * fVar4;
  fVar9 = param_1[2] + fVar2 * fVar5;
  fVar11 = param_1[3] + fVar2 * param_2[3];
  *param_5 = fVar7;
  param_5[1] = fVar8;
  param_5[2] = fVar9;
  param_5[3] = fVar11;
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  fVar3 = param_4[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar10 = param_3[3];
  param_5[4] = fVar7 - (*param_3 + local_34 * *param_4);
  param_5[5] = fVar8 - (fVar4 + local_34 * fVar1);
  param_5[6] = fVar9 - (fVar5 + local_34 * fVar2);
  param_5[7] = fVar11 - (fVar10 + local_34 * fVar3);
  param_5[8] = param_5[6] * param_5[6] + param_5[5] * param_5[5] + param_5[4] * param_5[4];
  return uVar6;
}



undefined4 FUN_008d1cd0(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_3[3];
  fVar6 = *param_3 - fVar1;
  fVar7 = param_3[1] - fVar2;
  fVar8 = param_3[2] - fVar3;
  fVar9 = fVar8 * (param_1[2] - fVar3) + fVar7 * (param_1[1] - fVar2) + fVar6 * (*param_1 - fVar1);
  fVar10 = fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6;
  if (fVar9 < 0.0 != (fVar9 == 0.0)) {
    *param_4 = fVar1;
    param_4[1] = fVar2;
    param_4[2] = fVar3;
    param_4[3] = fVar4;
    return 8;
  }
  if (fVar10 <= fVar9) {
    *param_4 = fVar1 + fVar6;
    param_4[1] = fVar2 + fVar7;
    param_4[2] = fVar3 + fVar8;
    param_4[3] = fVar4 + (fVar5 - fVar4);
    return 4;
  }
  fVar9 = fVar9 / fVar10;
  *param_4 = fVar1 + fVar9 * fVar6;
  param_4[1] = fVar2 + fVar9 * fVar7;
  param_4[2] = fVar3 + fVar9 * fVar8;
  param_4[3] = fVar4 + fVar9 * (fVar5 - fVar4);
  return 0;
}



void FUN_008d1db0(float *param_1,float *param_2)

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
  
  fVar2 = *param_1 - param_1[4];
  fVar4 = param_1[1] - param_1[5];
  fVar5 = param_1[2] - param_1[6];
  fVar6 = param_1[8] - param_1[4];
  fVar7 = param_1[9] - param_1[5];
  fVar8 = param_1[10] - param_1[6];
  fVar9 = fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2;
  fVar10 = fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6;
  fVar11 = fVar8 * fVar5 + fVar7 * fVar4 + fVar6 * fVar2;
  fVar1 = 1.0 / (fVar10 * fVar9 - fVar11 * fVar11);
  fVar3 = fVar4 * fVar8 - fVar5 * fVar7;
  fVar5 = fVar5 * fVar6 - fVar2 * fVar8;
  fVar2 = fVar2 * fVar7 - fVar4 * fVar6;
  *param_2 = fVar9 * fVar1;
  param_2[1] = fVar10 * fVar1;
  param_2[2] = fVar11 * fVar1;
  param_2[3] = 1.0 / SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar3 * fVar3);
  return;
}



void FUN_008d1ef0(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  fVar3 = param_1[8] - param_1[4];
  fVar4 = param_1[9] - param_1[5];
  fVar5 = param_1[10] - param_1[6];
  fVar9 = param_1[4] - *param_1;
  fVar10 = param_1[5] - param_1[1];
  fVar12 = param_1[6] - param_1[2];
  fVar6 = *param_1 - param_1[8];
  fVar7 = param_1[1] - param_1[9];
  fVar8 = param_1[2] - param_1[10];
  fVar11 = fVar4 * fVar4;
  fVar13 = fVar5 * fVar5;
  auVar14._4_4_ = fVar11;
  auVar14._0_4_ = fVar11;
  auVar14._8_4_ = fVar11;
  auVar14._12_4_ = fVar11;
  auVar15._4_12_ = auVar14._4_12_;
  auVar15._0_4_ = fVar11 + fVar3 * fVar3;
  auVar16._4_4_ = fVar13;
  auVar16._0_4_ = fVar13 + auVar15._0_4_;
  auVar16._8_4_ = fVar13;
  auVar16._12_4_ = fVar13;
  auVar16 = rsqrtss(auVar15,auVar16);
  fVar11 = auVar16._0_4_;
  *param_2 = fVar11 * 0.5 * (3.0 - (fVar13 + auVar15._0_4_) * fVar11 * fVar11);
  fVar11 = fVar7 * fVar7;
  fVar13 = fVar8 * fVar8;
  auVar17._4_4_ = fVar11;
  auVar17._0_4_ = fVar11;
  auVar17._8_4_ = fVar11;
  auVar17._12_4_ = fVar11;
  auVar18._4_12_ = auVar17._4_12_;
  auVar18._0_4_ = fVar11 + fVar6 * fVar6;
  auVar1._4_4_ = fVar13;
  auVar1._0_4_ = fVar13 + auVar18._0_4_;
  auVar1._8_4_ = fVar13;
  auVar1._12_4_ = fVar13;
  auVar16 = rsqrtss(auVar18,auVar1);
  fVar11 = auVar16._0_4_;
  fVar10 = fVar10 * fVar10;
  fVar12 = fVar12 * fVar12;
  auVar19._4_4_ = fVar10;
  auVar19._0_4_ = fVar10;
  auVar19._8_4_ = fVar10;
  auVar19._12_4_ = fVar10;
  auVar20._4_12_ = auVar19._4_12_;
  auVar20._0_4_ = fVar10 + fVar9 * fVar9;
  auVar2._4_4_ = fVar12;
  auVar2._0_4_ = fVar12 + auVar20._0_4_;
  auVar2._8_4_ = fVar12;
  auVar2._12_4_ = fVar12;
  auVar16 = rsqrtss(auVar20,auVar2);
  fVar10 = auVar16._0_4_;
  param_2[1] = fVar11 * 0.5 * (3.0 - (fVar13 + auVar18._0_4_) * fVar11 * fVar11);
  fVar9 = fVar4 * fVar8 - fVar5 * fVar7;
  fVar5 = fVar5 * fVar6 - fVar3 * fVar8;
  fVar3 = fVar3 * fVar7 - fVar4 * fVar6;
  fVar3 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar9 * fVar9);
  param_2[2] = fVar10 * 0.5 * (3.0 - (fVar12 + auVar20._0_4_) * fVar10 * fVar10);
  param_2[4] = fVar3;
  param_2[3] = 1.0 / fVar3;
  return;
}



undefined4 FUN_008d20c0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float local_38;
  float *local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar5 = *param_1;
  fVar7 = param_1[1];
  fVar9 = param_1[2];
  fVar11 = param_1[3];
  fVar12 = param_2[4];
  fVar16 = param_2[5];
  fVar17 = param_2[6];
  fVar4 = *param_2 - fVar12;
  fVar6 = param_2[1] - fVar16;
  fVar8 = param_2[2] - fVar17;
  fVar10 = param_2[3] - param_2[7];
  fVar20 = fVar12 - fVar5;
  fVar21 = fVar16 - fVar7;
  fVar22 = fVar17 - fVar9;
  local_34 = (float *)(fVar22 * fVar8 + fVar21 * fVar6 + fVar20 * fVar4);
  fVar12 = param_2[8] - fVar12;
  fVar16 = param_2[9] - fVar16;
  fVar17 = param_2[10] - fVar17;
  fVar18 = param_2[0xb] - param_2[7];
  local_38 = fVar22 * fVar17 + fVar21 * fVar16 + fVar20 * fVar12;
  fStack_24 = 0.001;
  fVar19 = local_38 * param_3[2] - (float)local_34 * param_3[1];
  fStack_28 = (float)local_34 * param_3[2] - local_38 * *param_3;
  local_30 = fVar19 + 0.001;
  fStack_2c = (1.001 - fVar19) - fStack_28;
  fStack_28 = fStack_28 + 0.001;
  auVar15._4_4_ = -(uint)(DAT_00ba7a44 < fStack_2c);
  auVar15._0_4_ = -(uint)(DAT_00ba7a40 < local_30);
  auVar15._8_4_ = -(uint)(DAT_00ba7a48 < fStack_28);
  auVar15._12_4_ = -(uint)(fRam00ba7a4c < 0.001);
  uVar2 = movmskps(&local_38,auVar15);
  if ((uVar2 & 7) == 7) {
    fVar5 = fVar6 * fVar17 - fVar8 * fVar16;
    fVar7 = fVar8 * fVar12 - fVar4 * fVar17;
    fVar9 = fVar4 * fVar16 - fVar6 * fVar12;
    fVar11 = fVar10 * fVar18 - fVar10 * fVar18;
    *param_4 = fVar5;
    param_4[1] = fVar7;
    param_4[2] = fVar9;
    param_4[3] = fVar11;
    fVar19 = param_3[3];
    fVar5 = fVar19 * fVar5;
    fVar7 = fVar19 * fVar7;
    fVar9 = fVar19 * fVar9;
    fVar19 = fVar19 * fVar11;
    fVar11 = fVar9 * fVar22 + fVar7 * fVar21 + fVar5 * fVar20;
    *param_4 = fVar5;
    param_4[1] = fVar7;
    param_4[2] = fVar9;
    param_4[3] = fVar19;
    param_4[4] = fVar11;
    if (0.0 < fVar11) {
      *param_4 = -fVar5;
      param_4[1] = -fVar7;
      param_4[2] = -fVar9;
      param_4[3] = -fVar19;
      return 0;
    }
    param_4[4] = -fVar11;
    return 0;
  }
  iVar3 = (int)(char)(&DAT_00a99f04)[uVar2 & 7];
  if (iVar3 < 0) {
    FUN_008d1cd0(param_1,param_2 + (char)(&DAT_00a99f16)[iVar3] * 4,
                 param_2 + (char)(&DAT_00a99f14)[iVar3] * 4,&local_30);
    fVar5 = fVar5 - local_30;
    fVar7 = fVar7 - fStack_2c;
    fVar9 = fVar9 - fStack_28;
    fVar19 = fVar7 * fVar7;
    fVar12 = fVar9 * fVar9;
    auVar13._4_4_ = fVar19;
    auVar13._0_4_ = fVar19;
    auVar13._8_4_ = fVar19;
    auVar13._12_4_ = fVar19;
    auVar14._4_12_ = auVar13._4_12_;
    auVar14._0_4_ = fVar19 + fVar5 * fVar5;
    fVar19 = fVar12 + auVar14._0_4_;
    auVar1._4_4_ = fVar12;
    auVar1._0_4_ = fVar19;
    auVar1._8_4_ = fVar12;
    auVar1._12_4_ = fVar12;
    auVar15 = rsqrtss(auVar14,auVar1);
    fVar12 = auVar15._0_4_;
    fVar12 = fVar12 * 0.5 * (3.0 - fVar19 * fVar12 * fVar12);
    *param_4 = fVar12 * fVar5;
    param_4[1] = fVar12 * fVar7;
    param_4[2] = fVar12 * fVar9;
    param_4[3] = fVar12 * (fVar11 - fStack_24);
    param_4[4] = fVar19 * fVar12;
    return 1;
  }
  local_34 = param_2 + iVar3 * 4;
  FUN_008d1cd0(param_1,local_34,param_2 + (char)(&DAT_00a99f0e)[iVar3] * 4,&local_30);
  FUN_008d1cd0(param_1,param_2 + (char)(&DAT_00a99f0c)[iVar3] * 4,local_34,&local_20);
  local_30 = fVar5 - local_30;
  fStack_2c = fVar7 - fStack_2c;
  fStack_28 = fVar9 - fStack_28;
  fVar5 = fVar5 - local_20;
  fVar7 = fVar7 - fStack_1c;
  fVar9 = fVar9 - fStack_18;
  fVar19 = fStack_28 * fStack_28 + fStack_2c * fStack_2c + local_30 * local_30;
  fVar12 = fVar9 * fVar9 + fVar7 * fVar7 + fVar5 * fVar5;
  if (fVar19 < fVar12) {
    fVar5 = 1.0 / SQRT(fVar19);
    param_4[4] = fVar19 * fVar5;
    *param_4 = fVar5 * local_30;
    param_4[1] = fVar5 * fStack_2c;
    param_4[2] = fVar5 * fStack_28;
    param_4[3] = fVar5 * (fVar11 - fStack_24);
    return 1;
  }
  fVar19 = 1.0 / SQRT(fVar12);
  param_4[4] = fVar12 * fVar19;
  *param_4 = fVar19 * fVar5;
  param_4[1] = fVar19 * fVar7;
  param_4[2] = fVar19 * fVar9;
  param_4[3] = fVar19 * (fVar11 - fStack_14);
  return 1;
}



void FUN_008d2450(int param_1,float param_2,float *param_3)

{
  int in_ECX;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *(float *)(param_1 + 0x30) + *(float *)(in_ECX + 0x20);
  fVar5 = *(float *)(param_1 + 0x34) + *(float *)(in_ECX + 0x24);
  fVar6 = *(float *)(param_1 + 0x38) + *(float *)(in_ECX + 0x28);
  fVar7 = *(float *)(param_1 + 0x3c) + *(float *)(in_ECX + 0x2c);
  fVar1 = param_2 + *(float *)(in_ECX + 0x10);
  fVar2 = param_2 + *(float *)(in_ECX + 0x14);
  fVar3 = param_2 + *(float *)(in_ECX + 0x18);
  param_2 = param_2 + *(float *)(in_ECX + 0x1c);
  *param_3 = fVar4 - fVar1;
  param_3[1] = fVar5 - fVar2;
  param_3[2] = fVar6 - fVar3;
  param_3[3] = fVar7 - param_2;
  param_3[4] = fVar1 + fVar4;
  param_3[5] = fVar2 + fVar5;
  param_3[6] = fVar3 + fVar6;
  param_3[7] = param_2 + fVar7;
  return;
}



void FUN_008d24e0(void)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009d7ad3;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  if (-1 < (int)in_ECX[0x12]) {
    FUN_008a75d0(in_ECX[0x10],in_ECX[0x12] << 4,0x14);
  }
  local_4 = local_4 & 0xffffff00;
  if (-1 < (int)in_ECX[0xe]) {
    FUN_008a75d0(in_ECX[0xc],(in_ECX[0xe] & 0x3fffffff) * 0x30,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008d25a0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *in_ECX;
  undefined4 unaff_EBP;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d796b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    puVar3 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x50,0x24,uVar2);
    *(undefined2 *)(puVar3 + 1) = 0x50;
    local_c = 0;
    puStack_4 = puVar3;
    FUN_00917720(unaff_EBP,uVar1,0x10,param_1 + 0x14,DAT_00b2ffe4);
    *puVar3 = &PTR_FUN_00a99f28;
    puVar3[3] = *(undefined4 *)(param_1 + 4);
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



void FUN_008d2690(byte param_1)

{
  FUN_008d24e0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008d26c0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7af8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0(uVar1);
  *in_ECX = &PTR_FUN_00a5591c;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  DAT_00ba7d70 = DAT_00ba7d70 + 1;
  *in_ECX = &PTR_FUN_00a55a5c;
  _DAT_00ba7f44 = _DAT_00ba7f44 + 1;
  *in_ECX = &PTR_FUN_00a55afc;
  _DAT_00ba7f50 = _DAT_00ba7f50 + 1;
  *in_ECX = &PTR_FUN_00a996dc;
  _DAT_00ba814c = _DAT_00ba814c + 1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a99f64;
  FUN_008d25a0(param_1);
  _DAT_00ba814c = _DAT_00ba814c + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008d2770(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7b33;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x80000000;
  local_28 = _DAT_00b2efc4;
  local_4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00917820(param_1,&local_18,&local_24,uVar1);
    iVar2 = FUN_00401f00(0x14);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (iVar2 != 0) {
      uVar3 = FUN_008d26c0(&local_2c);
    }
  }
  local_4 = 0xffffffff;
  FUN_008c8db0();
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_008d2830(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x10);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 4) = uVar1;
  uVar1 = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(in_ECX + 8) = uVar1;
  uVar1 = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(in_ECX + 0x18) = uVar1;
  return;
}



void FUN_008d2860(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[5] = param_1[5];
  in_ECX[10] = param_1[10];
  in_ECX[3] = 0;
  in_ECX[7] = 0;
  in_ECX[0xb] = 0;
  in_ECX[1] = param_1[4];
  in_ECX[4] = param_1[1];
  in_ECX[2] = param_1[8];
  in_ECX[8] = param_1[2];
  in_ECX[6] = param_1[9];
  in_ECX[9] = param_1[6];
  return;
}



undefined4 FUN_008d28b0(float param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_ECX;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  auVar1 = *(undefined1 (*) [16])(in_ECX + 4);
  fVar2 = *in_ECX;
  fVar3 = in_ECX[1];
  fVar4 = in_ECX[2];
  fVar5 = in_ECX[3];
  fVar6 = in_ECX[5] * in_ECX[10] - in_ECX[6] * in_ECX[9];
  fVar7 = in_ECX[6] * in_ECX[8] - in_ECX[4] * in_ECX[10];
  fVar8 = in_ECX[4] * in_ECX[9] - in_ECX[5] * in_ECX[8];
  fVar9 = in_ECX[2] * fVar8 + in_ECX[1] * fVar7 + *in_ECX * fVar6;
  if (param_1 * param_1 * param_1 < ABS(fVar9)) {
    fVar9 = 1.0 / fVar9;
    *in_ECX = fVar9 * fVar6;
    in_ECX[1] = fVar9 * fVar7;
    in_ECX[2] = fVar9 * fVar8;
    in_ECX[3] = fVar9 * (in_ECX[7] * in_ECX[0xb] - in_ECX[7] * in_ECX[0xb]);
    in_ECX[4] = fVar9 * (in_ECX[9] * fVar4 - in_ECX[10] * fVar3);
    in_ECX[5] = fVar9 * (in_ECX[10] * fVar2 - in_ECX[8] * fVar4);
    in_ECX[6] = fVar9 * (in_ECX[8] * fVar3 - in_ECX[9] * fVar2);
    in_ECX[7] = fVar9 * (in_ECX[0xb] * fVar5 - in_ECX[0xb] * fVar5);
    in_ECX[8] = fVar9 * (fVar3 * auVar1._8_4_ - fVar4 * auVar1._4_4_);
    in_ECX[9] = fVar9 * (fVar4 * auVar1._0_4_ - fVar2 * auVar1._8_4_);
    in_ECX[10] = fVar9 * (fVar2 * auVar1._4_4_ - fVar3 * auVar1._0_4_);
    in_ECX[0xb] = fVar9 * (fVar5 * auVar1._12_4_ - fVar5 * auVar1._12_4_);
    fVar2 = in_ECX[4];
    in_ECX[4] = in_ECX[1];
    in_ECX[1] = fVar2;
    fVar2 = in_ECX[8];
    in_ECX[8] = in_ECX[2];
    in_ECX[2] = fVar2;
    fVar2 = in_ECX[9];
    in_ECX[9] = in_ECX[6];
    in_ECX[6] = fVar2;
    return 0;
  }
  return 1;
}



void FUN_008d29e0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *in_ECX = *in_ECX + *param_1;
  in_ECX[1] = in_ECX[1] + fVar1;
  in_ECX[2] = in_ECX[2] + fVar2;
  in_ECX[3] = in_ECX[3] + fVar3;
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  in_ECX[4] = in_ECX[4] + param_1[4];
  in_ECX[5] = in_ECX[5] + fVar1;
  in_ECX[6] = in_ECX[6] + fVar2;
  in_ECX[7] = in_ECX[7] + fVar3;
  fVar1 = param_1[9];
  fVar2 = param_1[10];
  fVar3 = param_1[0xb];
  in_ECX[8] = in_ECX[8] + param_1[8];
  in_ECX[9] = in_ECX[9] + fVar1;
  in_ECX[10] = in_ECX[10] + fVar2;
  in_ECX[0xb] = in_ECX[0xb] + fVar3;
  return;
}



void FUN_008d2a20(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *in_ECX = *in_ECX - *param_1;
  in_ECX[1] = in_ECX[1] - fVar1;
  in_ECX[2] = in_ECX[2] - fVar2;
  in_ECX[3] = in_ECX[3] - fVar3;
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  in_ECX[4] = in_ECX[4] - param_1[4];
  in_ECX[5] = in_ECX[5] - fVar1;
  in_ECX[6] = in_ECX[6] - fVar2;
  in_ECX[7] = in_ECX[7] - fVar3;
  fVar1 = param_1[9];
  fVar2 = param_1[10];
  fVar3 = param_1[0xb];
  in_ECX[8] = in_ECX[8] - param_1[8];
  in_ECX[9] = in_ECX[9] - fVar1;
  in_ECX[10] = in_ECX[10] - fVar2;
  in_ECX[0xb] = in_ECX[0xb] - fVar3;
  return;
}



void FUN_008d2a60(float *param_1)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = *param_1;
  *in_ECX = fVar1 * *in_ECX;
  in_ECX[1] = fVar1 * in_ECX[1];
  in_ECX[2] = fVar1 * in_ECX[2];
  in_ECX[3] = fVar1 * in_ECX[3];
  fVar1 = *param_1;
  in_ECX[4] = fVar1 * in_ECX[4];
  in_ECX[5] = fVar1 * in_ECX[5];
  in_ECX[6] = fVar1 * in_ECX[6];
  in_ECX[7] = fVar1 * in_ECX[7];
  fVar1 = *param_1;
  in_ECX[8] = fVar1 * in_ECX[8];
  in_ECX[9] = fVar1 * in_ECX[9];
  in_ECX[10] = fVar1 * in_ECX[10];
  in_ECX[0xb] = fVar1 * in_ECX[0xb];
  return;
}



void FUN_008d2ab0(float *param_1,float *param_2)

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
  iVar18 = 3;
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
  return;
}



void FUN_008d2b10(float *param_1,float *param_2)

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
  float *pfVar17;
  int in_ECX;
  int iVar18;
  float local_40 [6];
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  pfVar17 = local_40;
  local_40[0] = *param_2;
  local_40[5] = param_2[5];
  local_18 = param_2[10];
  local_40[1] = param_2[4];
  local_40[4] = param_2[1];
  local_40[2] = param_2[8];
  local_20 = param_2[2];
  local_28 = param_2[9];
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
  local_1c = param_2[6];
  local_40[3] = 0.0;
  local_24 = 0;
  local_14 = 0;
  iVar18 = 3;
  do {
    fVar14 = *pfVar17;
    fVar15 = pfVar17[1];
    fVar16 = pfVar17[2];
    pfVar1 = (float *)((in_ECX - (int)local_40) + (int)pfVar17);
    *pfVar1 = fVar2 * fVar14 + fVar6 * fVar15 + fVar10 * fVar16;
    pfVar1[1] = fVar3 * fVar14 + fVar7 * fVar15 + fVar11 * fVar16;
    pfVar1[2] = fVar4 * fVar14 + fVar8 * fVar15 + fVar12 * fVar16;
    pfVar1[3] = fVar5 * fVar14 + fVar9 * fVar15 + fVar13 * fVar16;
    pfVar17 = pfVar17 + 4;
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  return;
}



void FUN_008d2bd0(float *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *in_ECX;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *in_ECX = 0;
  in_ECX[1] = fVar2;
  in_ECX[2] = -fVar1;
  in_ECX[3] = 0;
  fVar1 = *param_1;
  in_ECX[4] = -param_1[2];
  in_ECX[5] = 0;
  in_ECX[6] = fVar1;
  in_ECX[7] = 0;
  fVar1 = *param_1;
  in_ECX[8] = param_1[1];
  in_ECX[9] = -fVar1;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  return;
}



void FUN_008d2c20(undefined4 param_1)

{
  undefined4 *in_ECX;
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
  
  FUN_008d2ab0(in_ECX,param_1);
  *in_ECX = local_40;
  in_ECX[1] = uStack_3c;
  in_ECX[2] = uStack_38;
  in_ECX[3] = uStack_34;
  in_ECX[4] = local_30;
  in_ECX[5] = uStack_2c;
  in_ECX[6] = uStack_28;
  in_ECX[7] = uStack_24;
  in_ECX[8] = local_20;
  in_ECX[9] = uStack_1c;
  in_ECX[10] = uStack_18;
  in_ECX[0xb] = uStack_14;
  return;
}



void FUN_008d2c60(undefined4 param_1)

{
  undefined4 in_ECX;
  undefined1 local_40 [60];
  
  FUN_008d2b10(in_ECX,param_1);
  FUN_008d2ab0(param_1,local_40);
  return;
}



void FUN_008d2c90(float param_1,float param_2)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = param_2 - param_1;
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = fVar1;
  if (fVar1 == 0.0) {
    in_ECX[3] = 0.0;
    return;
  }
  in_ECX[3] = 1.0 / fVar1;
  return;
}



void FUN_008d2ce0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *in_ECX;
  int local_14;
  
  puVar4 = param_2;
  iVar3 = param_1;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  param_2 = param_2 + 1;
  local_14 = 2;
  do {
    param_1 = *param_2;
    iVar2 = *(int *)(param_1 + 0x50);
    if ((*(char *)(param_1 + 0x92) == '\0') && (*(float *)(iVar2 + 0x6c) != 0.0)) {
      FUN_008dd530(*puVar4,iVar2 + 0x10);
      *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar2 + 0x60);
      *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(iVar2 + 100);
      *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar2 + 0x68);
      *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar2 + 0x6c);
      *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(iVar2 + 0x80);
      *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(iVar2 + 0x84);
      *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(iVar2 + 0x88);
      *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(iVar2 + 0x8c);
      *(undefined4 *)(iVar2 + 0x5c) = *puVar4;
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      FUN_008e77c0(param_1,*(undefined4 *)(iVar3 + 0x74));
      if (in_ECX[10] == 1) {
        FUN_008cc4e0();
        FUN_008d4ad0(&param_1,1,*(undefined4 *)(iVar3 + 0x74));
      }
      else if (in_ECX[10] == 0) {
        iVar2 = *in_ECX;
        uVar5 = FUN_008d2c90(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x18));
        (**(code **)(iVar2 + 0x18))(&param_1,1,iVar3,uVar5);
      }
    }
    param_2 = param_2 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  piVar1 = (int *)(iVar3 + 0x88);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (*(int *)(iVar3 + 0x84) != 0)) && (*(char *)(iVar3 + 0x90) == '\0')) {
    FUN_00899210();
  }
  return;
}



void FUN_008d2e10(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
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
  in_ECX[0xc] = param_1[0xc];
  puVar5 = param_1 + 0xd;
  puVar6 = in_ECX + 0xd;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = param_1 + 0x15;
  puVar6 = in_ECX + 0x15;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = param_1 + 0x1d;
  puVar6 = in_ECX + 0x1d;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = param_1 + 0x25;
  puVar6 = in_ECX + 0x25;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = param_1 + 0x2d;
  puVar6 = in_ECX + 0x2d;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = param_1 + 0x35;
  puVar6 = in_ECX + 0x35;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  in_ECX[0x3d] = param_1[0x3d];
  in_ECX[0x3e] = param_1[0x3e];
  in_ECX[0x3f] = param_1[0x3f];
  in_ECX[0x40] = param_1[0x40];
  return;
}



void FUN_008d2f10(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_4c [4];
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_28 = param_2[3];
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  local_40 = param_2[0xc];
  uStack_3c = param_2[0xd];
  uStack_38 = param_2[0xe];
  uStack_34 = param_2[0xf];
  local_20 = *(undefined4 *)(param_1 + 0xb0);
  local_30 = (float)*(ushort *)(param_2 + 5) * 0.00390625;
  local_2c = (float)*(byte *)((int)param_2 + 0x16) * 0.0078125;
  local_24 = 0x3dcccccd;
  FUN_0091f770(param_2 + 8,*param_2,&local_40,*(undefined4 *)(iVar1 + 0x50),
               *(undefined4 *)(iVar2 + 0x50),local_4c);
  if (0.0 <= local_48) {
LAB_008d3018:
    if ((0.0 <= local_48) && (local_44 < 0.0)) {
      iVar4 = *param_3;
      iVar3 = param_3[1];
      if (*(char *)(iVar2 + 0x92) != '\0') {
        *(int *)(iVar4 + iVar3 * 4) = iVar1;
        param_3[1] = param_3[1] + 1;
        return;
      }
      goto LAB_008d3099;
    }
    if ((*(char *)(iVar1 + 0x92) == '\0') &&
       ((*(char *)(iVar2 + 0x92) != '\0' || (local_48 <= local_44)))) {
      *(int *)(*param_3 + param_3[1] * 4) = iVar1;
      param_3[1] = param_3[1] + 1;
      return;
    }
  }
  else {
    if (0.0 <= local_44) {
      if (0.0 <= local_44) {
        iVar4 = *param_3;
        iVar3 = param_3[1];
        if (*(char *)(iVar1 + 0x92) == '\0') {
          *(int *)(iVar4 + iVar3 * 4) = iVar1;
          param_3[1] = param_3[1] + 1;
          return;
        }
        goto LAB_008d3099;
      }
      goto LAB_008d3018;
    }
    if (*(char *)(iVar1 + 0x92) == '\0') {
      *(int *)(*param_3 + param_3[1] * 4) = iVar1;
      param_3[1] = param_3[1] + 1;
    }
    if (*(char *)(iVar2 + 0x92) != '\0') {
      return;
    }
  }
  iVar4 = *param_3;
  iVar3 = param_3[1];
LAB_008d3099:
  *(int *)(iVar4 + iVar3 * 4) = iVar2;
  param_3[1] = param_3[1] + 1;
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_008d30b0(int param_1,int *param_2)

{
  undefined1 *local_3060 [12];
  undefined1 local_3030 [12292];
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x8d30c0;
  local_3060[0] = local_3030;
  param_2[10] = *param_2 + 0x1b40;
  local_2c = 0x7f7fffff;
  local_20 = 0;
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(*(char *)(param_1 + 8) * 0x3c + 0x1a24 + *param_2);
  FUN_008e6d10(param_1,param_2,local_3060);
  if (local_3060[0] != local_3030) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))
              (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),param_2,local_3060);
  }
  return;
}



void FUN_008d3140(int *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  param_3 = param_1[1] - param_3;
  if (param_3 < param_1[1]) {
    iVar7 = param_3 * 0xc;
    do {
      iVar3 = *(int *)(*(int *)(*param_1 + iVar7) + 0x24);
      if ((*(char *)(*(int *)(iVar3 + 4) + 0x92) != '\0') ||
         (*(char *)(*(int *)(iVar3 + 8) + 0x92) != '\0')) {
        iVar3 = *param_2;
        *param_2 = iVar3 + 1;
        puVar1 = (undefined4 *)(iVar7 + *param_1);
        puVar2 = (undefined4 *)(*param_1 + iVar3 * 0xc);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
      }
      param_3 = param_3 + 1;
      iVar7 = iVar7 + 0xc;
    } while (param_3 < param_1[1]);
  }
  return;
}



void FUN_008d3200(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *param_2;
  if (iVar7 < param_1[1]) {
    iVar8 = iVar7 * 0xc;
    do {
      iVar3 = *(int *)(*(int *)(*param_1 + iVar8) + 0x24);
      if ((*(char *)(*param_3 + (uint)*(ushort *)(*(int *)(iVar3 + 4) + 0x8c)) == '\b') &&
         (*(char *)((uint)*(ushort *)(*(int *)(iVar3 + 8) + 0x8c) + *param_3) == '\b')) {
        iVar3 = *param_2;
        *param_2 = iVar3 + 1;
        puVar1 = (undefined4 *)(iVar8 + *param_1);
        puVar2 = (undefined4 *)(*param_1 + iVar3 * 0xc);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (iVar7 < param_1[1]);
  }
  return;
}



void FUN_008d32c0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_2[1]) {
    do {
      iVar1 = *(int *)(*(int *)(*param_2 + iVar6 * 4) + 0x50);
      uVar2 = *(undefined4 *)(iVar1 + 0xd4);
      uVar3 = *(undefined4 *)(iVar1 + 0xd8);
      uVar4 = *(undefined4 *)(iVar1 + 0xdc);
      iVar5 = *(int *)(iVar1 + 8) + *(int *)(param_1 + 0xc);
      *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar1 + 0xd0);
      *(undefined4 *)(iVar5 + 0x14) = uVar2;
      *(undefined4 *)(iVar5 + 0x18) = uVar3;
      *(undefined4 *)(iVar5 + 0x1c) = uVar4;
      if (*(char *)(iVar5 + 0xc) == '\0') {
        FUN_0088fe00(iVar5 + 0x50,iVar1 + 0xe0);
      }
      else {
        uVar2 = *(undefined4 *)(iVar1 + 0xe4);
        uVar3 = *(undefined4 *)(iVar1 + 0xe8);
        uVar4 = *(undefined4 *)(iVar1 + 0xec);
        *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar1 + 0xe0);
        *(undefined4 *)(iVar5 + 0x24) = uVar2;
        *(undefined4 *)(iVar5 + 0x28) = uVar3;
        *(undefined4 *)(iVar5 + 0x2c) = uVar4;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2[1]);
  }
  return;
}



void FUN_008d3330(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9a030;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0x80000000;
  in_ECX[4] = 0;
  in_ECX[3] = param_1;
  iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xc,0x12);
  *(undefined2 *)(iVar1 + 4) = 0xc;
  uVar2 = FUN_0091feb0();
  in_ECX[9] = 0;
  in_ECX[8] = uVar2;
  return;
}



void FUN_008d3390(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9a030;
  if ((undefined4 *)in_ECX[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[8])(1);
  }
  if (-1 < (int)in_ECX[7]) {
    FUN_008a75d0(in_ECX[5],in_ECX[7] << 6,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



undefined4 FUN_008d33e0(int param_1,float param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *in_ECX;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float *pfVar14;
  int local_7c;
  float local_6c;
  undefined2 auStack_68 [2];
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_54;
  float local_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_38;
  
  while( true ) {
    iVar9 = -1;
    iVar11 = 0;
    if (in_ECX[6] < 1) {
      return 0;
    }
    pfVar13 = (float *)in_ECX[5];
    fVar3 = param_2;
    do {
      if (*pfVar13 < fVar3) {
        fVar3 = *pfVar13;
        iVar9 = iVar11;
      }
      iVar11 = iVar11 + 1;
      pfVar13 = pfVar13 + 0x10;
    } while (iVar11 < in_ECX[6]);
    if (iVar9 < 0) break;
    iVar11 = in_ECX[6] + -1;
    pfVar13 = (float *)in_ECX[5] + iVar9 * 0x10;
    pfVar14 = &local_50;
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar14 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar14 = pfVar14 + 1;
    }
    in_ECX[6] = iVar11;
    puVar8 = (undefined4 *)(iVar11 * 0x40 + in_ECX[5]);
    puVar2 = (undefined4 *)(in_ECX[5] + iVar9 * 0x40);
    *puVar2 = *puVar8;
    local_7c = 2;
    puVar12 = puVar2;
    do {
      puVar12 = puVar12 + 1;
      *puVar12 = *(undefined4 *)(((int)puVar8 - (int)puVar2) + (int)puVar12);
      local_7c = local_7c + -1;
    } while (local_7c != 0);
    puVar2[3] = puVar8[3];
    puVar2[4] = puVar8[4];
    puVar2[5] = puVar8[5];
    puVar2[6] = puVar8[6];
    uVar5 = puVar8[9];
    uVar6 = puVar8[10];
    uVar7 = puVar8[0xb];
    puVar2[8] = puVar8[8];
    puVar2[9] = uVar5;
    puVar2[10] = uVar6;
    puVar2[0xb] = uVar7;
    uVar5 = puVar8[0xd];
    uVar6 = puVar8[0xe];
    uVar7 = puVar8[0xf];
    puVar2[0xc] = puVar8[0xc];
    puVar2[0xd] = uVar5;
    puVar2[0xe] = uVar6;
    puVar2[0xf] = uVar7;
    fVar3 = *(float *)(param_1 + 0x18);
    fVar4 = fVar3 - local_50;
    *(float *)(param_1 + 0xc) = local_50;
    if (fVar4 == 0.0) {
      local_6c = 0.0;
    }
    else {
      local_6c = 1.0 / fVar4;
    }
    *(float *)(param_1 + 0x160) = local_50;
    *(float *)(param_1 + 0x164) = fVar3;
    *(float *)(param_1 + 0x168) = fVar4;
    *(float *)(param_1 + 0x16c) = local_6c;
    iVar9 = *(int *)(param_1 + 0x74);
    *(float *)(iVar9 + 0x10) = local_50;
    *(float *)(iVar9 + 0x14) = fVar3;
    *(float *)(iVar9 + 0x18) = fVar4;
    *(float *)(iVar9 + 0x1c) = local_6c;
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    (**(code **)(*in_ECX + 0x2c))(param_1,&local_50,in_ECX[2]);
    iStack_5c = iStack_48;
    auStack_68[0] = 0xffff;
    uStack_64 = 0;
    iStack_60 = iStack_4c;
    uStack_54 = uStack_38;
    FUN_008dc920(*(undefined4 *)(iStack_4c + 8),auStack_68);
    if (*(int *)(iStack_4c + 0x98) != 0) {
      FUN_008dc0a0(iStack_4c,auStack_68);
    }
    if (*(int *)(iStack_48 + 0x98) != 0) {
      FUN_008dc0a0(iStack_48,auStack_68);
    }
    piVar1 = (int *)(param_1 + 0x88);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (*(int *)(param_1 + 0x84) != 0)) && (*(char *)(param_1 + 0x90) == '\0'))
    {
      FUN_00899210();
    }
    in_ECX[9] = in_ECX[9] + 1;
    if (*(int *)(DAT_00ba7d98 + 4) == 1) {
      return 2;
    }
  }
  return 0;
}



void FUN_008d3600(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0x18) == (*(uint *)(in_ECX + 0x1c) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x14),0x40);
  }
  puVar4 = (undefined4 *)(*(int *)(in_ECX + 0x18) * 0x40 + *(int *)(in_ECX + 0x14));
  *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
  *puVar4 = *(undefined4 *)(param_1 + 0x3034);
  puVar4[3] = *(undefined4 *)(param_1 + 0x3030);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  puVar4[8] = *(undefined4 *)(param_1 + 0x10);
  puVar4[9] = uVar1;
  puVar4[10] = uVar2;
  puVar4[0xb] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  puVar4[0xc] = *(undefined4 *)(param_1 + 0x20);
  puVar4[0xd] = uVar1;
  puVar4[0xe] = uVar2;
  puVar4[0xf] = uVar3;
  puVar4[1] = *(int *)(*(int *)(param_2 + 0x14) + 0x10) + *(int *)(param_2 + 0x14);
  puVar4[2] = *(int *)(*(int *)(param_2 + 0x18) + 0x10) + *(int *)(param_2 + 0x18);
  puVar4[4] = *(undefined4 *)(param_1 + 0x3038);
  puVar4[5] = *(undefined4 *)(param_1 + 0x303c);
  puVar4[6] = *(undefined4 *)(param_2 + 0x10);
  return;
}



void FUN_008d3690(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int in_ECX;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int local_30;
  int local_2c;
  undefined2 local_18 [2];
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
    FUN_008b0e10();
    iVar2 = param_2;
    FUN_008b15c0(param_2);
    iVar10 = param_1;
    iVar9 = 0;
    if (0 < iVar2) {
      do {
        FUN_008b0e80(*(undefined4 *)(iVar10 + iVar9 * 4),0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar2);
    }
    local_30 = 0;
    if (0 < *(int *)(in_ECX + 0x18)) {
      local_2c = 0;
      do {
        iVar10 = *(int *)(in_ECX + 0x14) + local_2c;
        uVar3 = FUN_008b0f00(*(undefined4 *)(*(int *)(in_ECX + 0x14) + 4 + local_2c));
        uVar4 = FUN_008b0f00(*(undefined4 *)(iVar10 + 8));
        pcVar5 = (char *)FUN_008b0d80(&param_2,uVar3);
        if ((*pcVar5 != '\0') || (pcVar5 = (char *)FUN_008b0d80(&param_1,uVar4), *pcVar5 != '\0')) {
          local_c = *(undefined4 *)(iVar10 + 8);
          local_10 = *(int *)(iVar10 + 4);
          local_4 = *(undefined4 *)(iVar10 + 0x18);
          local_18[0] = 0xffff;
          local_14 = 0;
          FUN_008dc920(*(undefined4 *)(local_10 + 8),local_18);
          if (*(int *)(*(int *)(iVar10 + 4) + 0x98) != 0) {
            FUN_008dc0a0(*(int *)(iVar10 + 4),local_18);
          }
          if (*(int *)(*(int *)(iVar10 + 8) + 0x98) != 0) {
            FUN_008dc0a0(*(int *)(iVar10 + 8),local_18);
          }
          iVar10 = *(int *)(in_ECX + 0x18) + -1;
          puVar7 = (undefined4 *)(iVar10 * 0x40 + *(int *)(in_ECX + 0x14));
          *(int *)(in_ECX + 0x18) = iVar10;
          puVar6 = (undefined4 *)(*(int *)(in_ECX + 0x14) + local_2c);
          *puVar6 = *puVar7;
          iVar10 = 2;
          puVar8 = puVar6;
          do {
            puVar8 = puVar8 + 1;
            *puVar8 = *(undefined4 *)(((int)puVar7 - (int)puVar6) + (int)puVar8);
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          puVar6[3] = puVar7[3];
          puVar6[4] = puVar7[4];
          puVar6[5] = puVar7[5];
          puVar6[6] = puVar7[6];
          uVar3 = puVar7[9];
          uVar4 = puVar7[10];
          uVar1 = puVar7[0xb];
          puVar6[8] = puVar7[8];
          puVar6[9] = uVar3;
          puVar6[10] = uVar4;
          puVar6[0xb] = uVar1;
          uVar3 = puVar7[0xd];
          uVar4 = puVar7[0xe];
          uVar1 = puVar7[0xf];
          local_30 = local_30 + -1;
          puVar6[0xc] = puVar7[0xc];
          puVar6[0xd] = uVar3;
          puVar6[0xe] = uVar4;
          puVar6[0xf] = uVar1;
          local_2c = local_2c + -0x40;
        }
        local_30 = local_30 + 1;
        local_2c = local_2c + 0x40;
      } while (local_30 < *(int *)(in_ECX + 0x18));
    }
    FUN_008b0e60();
  }
  return;
}



void FUN_008d3850(int param_1,int param_2,int param_3,float param_4,int *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  
  iVar8 = param_3;
  fVar7 = param_4 - *(float *)(param_3 + 0x10);
  puVar1 = (undefined4 *)(param_3 + 0x10);
  uVar3 = *puVar1;
  uVar4 = *(undefined4 *)(param_3 + 0x14);
  uVar5 = *(undefined4 *)(param_3 + 0x18);
  uVar6 = *(undefined4 *)(param_3 + 0x1c);
  *(float *)(param_3 + 0x18) = fVar7;
  *(float *)(param_3 + 0x14) = param_4;
  if (fVar7 <= 0.0) {
    *(undefined4 *)(param_3 + 0x1c) = 0;
  }
  else {
    *(float *)(param_3 + 0x1c) = 1.0 / fVar7;
  }
  param_3 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x38) + param_3 * 8);
      if (param_2 <= (int)(uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x38) + param_3 * 8) + 8)) {
        iVar9 = puVar2[1];
        iVar9 = *(int *)(iVar9 + 0x10) + iVar9;
        if (*(char *)(iVar9 + 0x91) == '\0') {
          if (*(char *)((uint)*(ushort *)(iVar9 + 0x8c) + *param_5) == '\b') goto LAB_008d393c;
          pcVar10 = (char *)((uint)*(ushort *)(iVar9 + 0x8c) + *param_5);
          if (*pcVar10 == '\0') {
            *pcVar10 = '\x01';
            FUN_008dd150(*(int *)(iVar9 + 0x50) + 0x50,param_4,*(int *)(iVar9 + 0x50) + 0x10);
          }
        }
        FUN_008d30b0(*puVar2,iVar8);
      }
LAB_008d393c:
      param_3 = param_3 + 1;
    } while (param_3 < *(int *)(param_1 + 0x3c));
  }
  *puVar1 = uVar3;
  *(undefined4 *)(iVar8 + 0x14) = uVar4;
  *(undefined4 *)(iVar8 + 0x18) = uVar5;
  *(undefined4 *)(iVar8 + 0x1c) = uVar6;
  return;
}



void FUN_008d3980(undefined1 *param_1,float param_2,int *param_3,int param_4,int param_5,
                 int *param_6)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_5) {
    do {
      if (*(float *)(*(char *)(*param_3 + 0x18) * 0x3c + 0x1a44 + *param_6) * (float)param_3[2] <
          ABS(*(float *)(param_4 + iVar1 * 4)) * param_2) {
        *param_1 = 0;
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_5);
  }
  *param_1 = 1;
  return;
}



void FUN_008d39e0(int *param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,int *param_6
                 ,int *param_7,int *param_8)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int unaff_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_434;
  char local_430 [4];
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  int local_414;
  undefined1 local_410 [1036];
  
  local_414 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  piVar1 = *(int **)(local_414 + 0x19c);
  puVar5 = (undefined4 *)piVar1[8];
  if ((undefined4 *)piVar1[0xb] < puVar5 + param_7[1] * 8 + 4) {
    puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0xc))(param_7[1] * 0x20 + 0x10);
  }
  else {
    piVar1[8] = (int)(puVar5 + param_7[1] * 8 + 4);
  }
  iVar11 = 0;
  puVar9 = puVar5;
  if (0 < param_7[1]) {
    do {
      iVar8 = *(int *)(*(int *)(*param_7 + iVar11 * 4) + 0x50);
      iVar6 = *(int *)(iVar8 + 8) + param_1[3];
      uVar7 = *(undefined4 *)(iVar6 + 0x14);
      uVar3 = *(undefined4 *)(iVar6 + 0x18);
      uVar4 = *(undefined4 *)(iVar6 + 0x1c);
      *puVar9 = *(undefined4 *)(iVar6 + 0x10);
      puVar9[1] = uVar7;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      uVar7 = *(undefined4 *)(iVar6 + 0x24);
      uVar3 = *(undefined4 *)(iVar6 + 0x28);
      uVar4 = *(undefined4 *)(iVar6 + 0x2c);
      puVar9[4] = *(undefined4 *)(iVar6 + 0x20);
      puVar9[5] = uVar7;
      puVar9[6] = uVar3;
      puVar9[7] = uVar4;
      fVar12 = *(float *)(iVar8 + 0x60) - *(float *)(iVar8 + 0x50);
      fVar13 = *(float *)(iVar8 + 100) - *(float *)(iVar8 + 0x54);
      fVar14 = *(float *)(iVar8 + 0x68) - *(float *)(iVar8 + 0x58);
      fVar15 = *(float *)(iVar8 + 0x6c) - *(float *)(iVar8 + 0x5c);
      *(float *)(iVar6 + 0x10) = fVar12;
      *(float *)(iVar6 + 0x14) = fVar13;
      *(float *)(iVar6 + 0x18) = fVar14;
      *(float *)(iVar6 + 0x1c) = fVar15;
      fVar2 = *(float *)(iVar8 + 0x6c);
      *(float *)(iVar6 + 0x10) = fVar2 * fVar12;
      *(float *)(iVar6 + 0x14) = fVar2 * fVar13;
      *(float *)(iVar6 + 0x18) = fVar2 * fVar14;
      *(float *)(iVar6 + 0x1c) = fVar2 * fVar15;
      fVar2 = *(float *)(iVar8 + 0x6c);
      fVar12 = *(float *)(iVar8 + 0xa4);
      fVar13 = *(float *)(iVar8 + 0xa8);
      fVar14 = *(float *)(iVar8 + 0xac);
      puVar9 = puVar9 + 8;
      *(float *)(iVar6 + 0x20) = fVar2 * *(float *)(iVar8 + 0xa0);
      *(float *)(iVar6 + 0x24) = fVar2 * fVar12;
      *(float *)(iVar6 + 0x28) = fVar2 * fVar13;
      *(float *)(iVar6 + 0x2c) = fVar2 * fVar14;
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_7[1]);
  }
  local_434 = *param_4;
  if (local_434 < param_3[1]) {
    iVar11 = local_434 * 0xc;
    do {
      iVar8 = *(int *)(*param_3 + iVar11);
      iVar6 = *param_3 + iVar11;
      if (param_5 <= (int)(uint)*(byte *)(iVar8 + 0x18)) {
        iVar8 = *(int *)(iVar8 + 0x24);
        iVar8 = *(int *)(iVar8 + 4 +
                        (uint)(*(char *)((uint)*(ushort *)(*(int *)(iVar8 + 4) + 0x8c) + *param_6)
                              == '\b') * 4);
        if (*(char *)((uint)*(ushort *)(iVar8 + 0x8c) + *param_6) == '\x04') {
          iVar8 = *param_4;
          *param_4 = iVar8 + 1;
          puVar9 = (undefined4 *)(iVar11 + *param_3);
          puVar10 = (undefined4 *)(*param_3 + iVar8 * 0xc);
          local_42c = *puVar10;
          local_428 = puVar10[1];
          local_424 = puVar10[2];
          *puVar10 = *puVar9;
          puVar10[1] = puVar9[1];
          puVar10[2] = puVar9[2];
          *puVar9 = local_42c;
          puVar9[1] = local_428;
          puVar9[2] = local_424;
        }
        else {
          uVar7 = FUN_0091ff70(param_1[1],*(undefined4 *)(iVar6 + 4),0x100,local_410);
          FUN_008d3980(local_430,*(undefined4 *)(*param_1 + 8),iVar6,local_410,uVar7,param_2);
          if (local_430[0] == '\0') {
            *(undefined1 *)((uint)*(ushort *)(iVar8 + 0x8c) + *param_6) = 4;
            if (param_8[1] == (param_8[2] & 0x3fffffffU)) {
              FUN_008a6ee0(param_8,4);
            }
            *(int *)(*param_8 + param_8[1] * 4) = iVar8;
            param_8[1] = param_8[1] + 1;
            iVar8 = *param_4;
            *param_4 = iVar8 + 1;
            puVar9 = (undefined4 *)(iVar11 + *param_3);
            puVar10 = (undefined4 *)(*param_3 + iVar8 * 0xc);
            local_420 = *puVar10;
            local_41c = puVar10[1];
            local_418 = puVar10[2];
            *puVar10 = *puVar9;
            puVar10[1] = puVar9[1];
            puVar10[2] = puVar9[2];
            *puVar9 = local_420;
            puVar9[1] = local_41c;
            puVar9[2] = local_418;
          }
        }
      }
      local_434 = local_434 + 1;
      iVar11 = iVar11 + 0xc;
    } while (local_434 < param_3[1]);
  }
  iVar11 = 0;
  puVar9 = puVar5;
  if (0 < param_7[1]) {
    do {
      uVar7 = puVar9[1];
      uVar3 = puVar9[2];
      uVar4 = puVar9[3];
      iVar8 = *(int *)(*(int *)(*(int *)(*param_7 + iVar11 * 4) + 0x50) + 8) + param_1[3];
      puVar10 = puVar9 + 4;
      *(undefined4 *)(iVar8 + 0x10) = *puVar9;
      *(undefined4 *)(iVar8 + 0x14) = uVar7;
      *(undefined4 *)(iVar8 + 0x18) = uVar3;
      *(undefined4 *)(iVar8 + 0x1c) = uVar4;
      uVar7 = puVar9[5];
      uVar3 = puVar9[6];
      uVar4 = puVar9[7];
      puVar9 = puVar9 + 8;
      *(undefined4 *)(iVar8 + 0x20) = *puVar10;
      *(undefined4 *)(iVar8 + 0x24) = uVar7;
      *(undefined4 *)(iVar8 + 0x28) = uVar3;
      *(undefined4 *)(iVar8 + 0x2c) = uVar4;
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_7[1]);
  }
  piVar1 = *(int **)(local_414 + 0x19c);
  piVar1[8] = (int)puVar5;
  if (puVar5 == (undefined4 *)piVar1[10]) {
    (**(code **)(*piVar1 + 0x10))(puVar5);
  }
  return;
}



void FUN_008d3cf0(undefined4 param_1,int param_2,undefined4 param_3,int *param_4,int *param_5,
                 int *param_6,int *param_7)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int local_c;
  int local_8;
  int local_4;
  
  local_4 = 0;
  if (0 < param_4[1]) {
    do {
      uVar2 = *(uint *)(*param_4 + local_4 * 4);
      if (*(char *)(*param_5 + (uint)*(ushort *)(uVar2 + 0x8c)) == '\0') {
        *(undefined1 *)(*param_5 + (uint)*(ushort *)(uVar2 + 0x8c)) = 1;
        FUN_008dd150(*(int *)(uVar2 + 0x50) + 0x50,param_3,*(int *)(uVar2 + 0x50) + 0x10);
      }
      *(undefined1 *)((uint)*(ushort *)(uVar2 + 0x8c) + *param_5) = 8;
      FUN_008d3850(uVar2,param_2,param_1,param_3,param_5);
      local_8 = 0;
      if (0 < *(int *)(uVar2 + 0x6c)) {
        local_c = 0;
        do {
          piVar3 = (int *)(*(int *)(uVar2 + 0x68) + local_c);
          if (param_2 <= (int)(uint)*(byte *)(*piVar3 + 0x18)) {
            uVar4 = piVar3[2] ^ piVar3[1] ^ uVar2;
            if (*(char *)(uVar4 + 0x91) == '\0') {
              if (*(char *)((uint)*(ushort *)(uVar4 + 0x8c) + *param_5) != '\b') {
                if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
                  FUN_008a6ee0(param_7,4);
                }
                *(int *)(*param_7 + param_7[1] * 4) = *piVar3;
                param_7[1] = param_7[1] + 1;
                if (*(byte *)((uint)*(ushort *)(uVar4 + 0x8c) + *param_5) < 2) {
                  if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
                    FUN_008a6ee0(param_6,4);
                  }
                  *(uint *)(*param_6 + param_6[1] * 4) = uVar4;
                  param_6[1] = param_6[1] + 1;
                  if (*(char *)(*param_5 + (uint)*(ushort *)(uVar4 + 0x8c)) == '\0') {
                    *(undefined1 *)(*param_5 + (uint)*(ushort *)(uVar4 + 0x8c)) = 1;
                    FUN_008dd150(*(int *)(uVar4 + 0x50) + 0x50,param_3,*(int *)(uVar4 + 0x50) + 0x10
                                );
                  }
                  *(undefined1 *)((uint)*(ushort *)(uVar4 + 0x8c) + *param_5) = 2;
                }
              }
            }
            else {
              if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
                FUN_008a6ee0(param_7,4);
              }
              *(int *)(*param_7 + param_7[1] * 4) = *piVar3;
              param_7[1] = param_7[1] + 1;
            }
          }
          local_8 = local_8 + 1;
          local_c = local_c + 0x1c;
        } while (local_8 < *(int *)(uVar2 + 0x6c));
      }
      local_8 = 0;
      if (0 < *(int *)(uVar2 + 0x78)) {
        do {
          piVar3 = *(int **)(*(int *)(*(int *)(uVar2 + 0x74) + local_8 * 4) + 0x24);
          if (param_2 <= (int)(uint)*(byte *)(*piVar3 + 0x18)) {
            uVar4 = piVar3[2] ^ piVar3[1] ^ uVar2;
            if (*(char *)(uVar4 + 0x91) == '\0') {
              if (*(char *)((uint)*(ushort *)(uVar4 + 0x8c) + *param_5) != '\b') {
                if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
                  FUN_008a6ee0(param_7,4);
                }
                *(int *)(*param_7 + param_7[1] * 4) = *piVar3;
                param_7[1] = param_7[1] + 1;
                if (*(byte *)((uint)*(ushort *)(uVar4 + 0x8c) + *param_5) < 2) {
                  if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
                    FUN_008a6ee0(param_6,4);
                  }
                  *(uint *)(*param_6 + param_6[1] * 4) = uVar4;
                  param_6[1] = param_6[1] + 1;
                  pcVar1 = (char *)((uint)*(ushort *)(uVar4 + 0x8c) + *param_5);
                  if (*pcVar1 == '\0') {
                    *pcVar1 = '\x01';
                    FUN_008dd150(*(int *)(uVar4 + 0x50) + 0x50,param_3,*(int *)(uVar4 + 0x50) + 0x10
                                );
                  }
                  *(undefined1 *)((uint)*(ushort *)(uVar4 + 0x8c) + *param_5) = 2;
                }
              }
            }
            else {
              if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
                FUN_008a6ee0(param_7,4);
              }
              *(int *)(*param_7 + param_7[1] * 4) = *piVar3;
              param_7[1] = param_7[1] + 1;
            }
          }
          local_8 = local_8 + 1;
        } while (local_8 < *(int *)(uVar2 + 0x78));
      }
      local_4 = local_4 + 1;
    } while (local_4 < param_4[1]);
  }
  return;
}



void FUN_008d4020(undefined1 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_408;
  char local_404 [4];
  undefined1 local_400 [1024];
  
  iVar2 = 0;
  local_408 = 0;
  if (0 < param_3[1]) {
    do {
      iVar3 = *param_3 + iVar2;
      if (*(char *)(*(int *)(*param_3 + iVar2) + 0x18) == '\x04') {
        uVar1 = FUN_0091ff70(param_2[1],*(undefined4 *)(iVar3 + 4),0x100,local_400);
        FUN_008d3980(local_404,*(undefined4 *)(*param_2 + 8),iVar3,local_400,uVar1,param_4);
        if (local_404[0] == '\0') {
          *param_1 = 0;
          return;
        }
      }
      local_408 = local_408 + 1;
      iVar2 = iVar2 + 0xc;
    } while (local_408 < param_3[1]);
  }
  *param_1 = 1;
  return;
}



void FUN_008d40e0(float param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 0x38)) {
    do {
      iVar1 = *(int *)(*(int *)(param_2 + 0x34) + iVar3 * 4);
      iVar2 = *(int *)(iVar1 + 0x50);
      FUN_008dd530(param_1,iVar2 + 0x10);
      if (*(char *)(iVar3 + *param_3) != '\b') {
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_4,4);
        }
        *(int *)(*param_4 + param_4[1] * 4) = iVar1;
        param_4[1] = param_4[1] + 1;
        *(undefined1 *)(iVar3 + *param_3) = 8;
      }
      *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar2 + 0x60);
      *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(iVar2 + 100);
      *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar2 + 0x68);
      *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar2 + 0x6c);
      *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(iVar2 + 0x80);
      *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(iVar2 + 0x84);
      *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(iVar2 + 0x88);
      *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(iVar2 + 0x8c);
      *(float *)(iVar2 + 0x5c) = param_1;
      iVar3 = iVar3 + 1;
      *(float *)(iVar2 + 0x6c) = 1.0 / (*(float *)(*(int *)(param_2 + 0x1c) + 0x18) - param_1);
    } while (iVar3 < *(int *)(param_2 + 0x38));
  }
  return;
}



void FUN_008d41a0(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      if ((*(char *)(iVar5 + *param_2) == '\x01') || (*(char *)(iVar5 + *param_2) == '\x02')) {
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x34) + iVar5 * 4) + 0x50);
        FUN_008b1dd0(iVar1 + 0x80);
        fVar2 = *(float *)(iVar1 + 0x90);
        fVar3 = *(float *)(iVar1 + 0x94);
        fVar4 = *(float *)(iVar1 + 0x98);
        *(float *)(iVar1 + 0x40) =
             *(float *)(iVar1 + 0x60) -
             (*(float *)(iVar1 + 0x10) * fVar2 + *(float *)(iVar1 + 0x20) * fVar3 +
             *(float *)(iVar1 + 0x30) * fVar4);
        *(float *)(iVar1 + 0x44) =
             *(float *)(iVar1 + 100) -
             (*(float *)(iVar1 + 0x14) * fVar2 + *(float *)(iVar1 + 0x24) * fVar3 +
             *(float *)(iVar1 + 0x34) * fVar4);
        *(float *)(iVar1 + 0x48) =
             *(float *)(iVar1 + 0x68) -
             (*(float *)(iVar1 + 0x18) * fVar2 + *(float *)(iVar1 + 0x28) * fVar3 +
             *(float *)(iVar1 + 0x38) * fVar4);
        *(float *)(iVar1 + 0x4c) =
             *(float *)(iVar1 + 0x6c) -
             (*(float *)(iVar1 + 0x1c) * fVar2 + *(float *)(iVar1 + 0x2c) * fVar3 +
             *(float *)(iVar1 + 0x3c) * fVar4);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x38));
  }
  return;
}



void FUN_008d4230(byte param_1)

{
  FUN_008d3390();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_008d4290(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int unaff_FS_OFFSET;
  undefined1 *local_3060 [12];
  undefined1 local_3030 [12292];
  float local_2c;
  undefined4 local_20;
  undefined4 uStack_14;
  
  iVar10 = _tls_index;
  uStack_14 = 0x8d42a0;
  iVar8 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar5 = *(int *)(iVar8 + _tls_index * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar1 = "TtNarrowPhase";
    uVar4 = rdtsc();
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar1 + 3;
  }
  iVar5 = *(int *)(param_1 + 0x48);
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      uVar9 = *(uint *)(*(int *)(param_1 + 0x44) + iVar7 * 4);
      iVar7 = iVar7 + 1;
      if (iVar7 == iVar5) {
        uVar6 = *(uint *)(param_1 + 0x54);
      }
      else {
        uVar6 = (uint)*(ushort *)(param_1 + 0x5a);
      }
      uVar6 = uVar6 + uVar9;
      if (uVar9 < uVar6) {
        do {
          uVar2 = *(undefined4 *)(uVar9 + 0x18);
          uVar3 = *(undefined4 *)(uVar9 + 0x14);
          iVar5 = *(char *)(uVar9 + 8) * 0x3c + 0x1a14 + *param_2;
          param_2[10] = iVar5;
          local_3060[0] = local_3030;
          *(undefined1 *)(param_2 + 3) = *(undefined1 *)(iVar5 + 0x10);
          local_2c = 3.4028235e+38;
          local_20 = 0;
          FUN_008e6d10(uVar9,param_2,local_3060);
          iVar5 = *(int *)(DAT_00ba7d98 + 0x28) + *(int *)(DAT_00ba7d98 + 0x14);
          if ((*(int *)(DAT_00ba7d98 + 8) <= iVar5) || (*(int *)(DAT_00ba7d98 + 8) == iVar5)) {
            *(undefined4 *)(DAT_00ba7d98 + 4) = 1;
          }
          if (*(int *)(DAT_00ba7d98 + 4) == 1) {
            iVar5 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
            if (*(uint *)(iVar5 + 0x1a8) <= *(uint *)(iVar5 + 0x1a4)) {
              return;
            }
            puVar1 = *(undefined4 **)(iVar5 + 0x1a4);
            *puVar1 = &DAT_00a9610c;
            uVar4 = rdtsc();
            puVar1[1] = (int)uVar4;
            *(undefined4 **)(iVar5 + 0x1a4) = puVar1 + 3;
            return;
          }
          if (local_3060[0] != local_3030) {
            (**(code **)(**(int **)(uVar9 + 0x10) + 0x14))(uVar3,uVar2,param_2,local_3060);
          }
          if (local_2c < 3.4028235e+38) {
            FUN_008d3600(local_3060,uVar9);
          }
          uVar9 = uVar9 + *(byte *)(uVar9 + 3);
        } while (uVar9 < uVar6);
        iVar8 = *(int *)(unaff_FS_OFFSET + 0x2c);
      }
      iVar5 = *(int *)(param_1 + 0x48);
      iVar10 = _tls_index;
    } while (iVar7 < iVar5);
  }
  iVar5 = *(int *)(iVar8 + iVar10 * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar1 + 3;
  }
  return;
}



void FUN_008d4590(int *param_1,int param_2,int param_3,LPCRITICAL_SECTION param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined1 (*pauVar14) [16];
  int iVar15;
  int unaff_FS_OFFSET;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int *piVar20;
  int local_60;
  int local_58;
  undefined1 (*local_54) [16];
  int local_50;
  float local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar12 = _tls_index;
  iVar15 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar3 = *(int *)(iVar15 + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar4 = "LtBroadPhase";
    puVar4[3] = "InitMem";
    uVar6 = rdtsc();
    local_54 = (undefined1 (*) [16])uVar6;
    puVar4[1] = local_54;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar4 + 4;
  }
  uVar11 = *(uint *)(param_3 + 0x2a8);
  iVar15 = *(int *)(iVar15 + iVar12 * 4);
  piVar20 = *(int **)(iVar15 + 0x19c);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0x80000000;
  local_34 = piVar20[8];
  uVar9 = uVar11 * 8 + 0x10 & 0xfffffff0;
  uVar13 = local_34 + uVar9;
  local_44 = iVar15;
  if ((uint)piVar20[0xb] < uVar13) {
    local_34 = (**(code **)(*piVar20 + 0xc))(uVar9);
  }
  else {
    piVar20[8] = uVar13;
  }
  piVar20 = *(int **)(iVar15 + 0x19c);
  local_38 = uVar11 | 0x80000000;
  uVar11 = *(uint *)(param_3 + 0x2a8);
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0x80000000;
  local_30[3] = piVar20[8];
  uVar9 = uVar11 * 8 + 0x10 & 0xfffffff0;
  uVar13 = local_30[3] + uVar9;
  local_40 = local_34;
  if ((uint)piVar20[0xb] < uVar13) {
    local_30[3] = (**(code **)(*piVar20 + 0xc))(uVar9);
  }
  else {
    piVar20[8] = uVar13;
  }
  piVar20 = *(int **)(iVar15 + 0x19c);
  local_30[2] = uVar11 | 0x80000000;
  pauVar10 = (undefined1 (*) [16])piVar20[8];
  local_30[0] = local_30[3];
  if ((undefined1 (*) [16])piVar20[0xb] < pauVar10 + param_2 * 2 + 1) {
    pauVar10 = (undefined1 (*) [16])(**(code **)(*piVar20 + 0xc))(param_2 * 0x20 + 0x10);
  }
  else {
    piVar20[8] = (int)(pauVar10 + param_2 * 2 + 1);
  }
  piVar20 = *(int **)(iVar15 + 0x19c);
  local_60 = piVar20[8];
  uVar11 = param_2 * 4 + 0x10U & 0xfffffff0;
  uVar13 = local_60 + uVar11;
  local_54 = pauVar10;
  if ((uint)piVar20[0xb] < uVar13) {
    local_60 = (**(code **)(*piVar20 + 0xc))(uVar11);
  }
  else {
    piVar20[8] = uVar13;
  }
  fVar7 = *(float *)(*(int *)(param_3 + 0x74) + 8) * 0.5;
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iVar15 + 0x1a4);
    *puVar4 = "StCalcAabbs";
    uVar6 = rdtsc();
    puVar4[1] = (int)uVar6;
    *(undefined4 **)(iVar15 + 0x1a4) = puVar4 + 3;
  }
  if (-1 < param_2 + -1) {
    local_50 = local_60 - (int)param_1;
    local_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    local_58 = param_2;
    pauVar14 = pauVar10;
    do {
      iVar15 = *param_1;
      iVar3 = *(int *)(iVar15 + 0x1c);
      fVar1 = *(float *)(iVar3 + 0x9c);
      fVar2 = *(float *)(iVar3 + 0xa0);
      *(int *)(local_50 + (int)param_1) = iVar15 + 0x28;
      local_48 = *(int **)(iVar15 + 0x14);
      local_4c = fVar1 * fVar2 + fVar7;
      (**(code **)(*local_48 + 0xc))(*(undefined4 *)(iVar15 + 0x1c),local_4c,pauVar14);
      local_48 = (int *)(fVar7 + *(float *)(iVar3 + 0xa0));
      auVar19._0_4_ = *(float *)(iVar3 + 0x50) - (float)local_48;
      auVar19._4_4_ = *(float *)(iVar3 + 0x54) - (float)local_48;
      auVar19._8_4_ = *(float *)(iVar3 + 0x58) - (float)local_48;
      auVar19._12_4_ = *(float *)(iVar3 + 0x5c) - (float)local_48;
      auVar18._0_4_ = *(float *)(iVar3 + 0x50) + (float)local_48;
      auVar18._4_4_ = *(float *)(iVar3 + 0x54) + (float)local_48;
      auVar18._8_4_ = *(float *)(iVar3 + 0x58) + (float)local_48;
      auVar18._12_4_ = *(float *)(iVar3 + 0x5c) + (float)local_48;
      auVar16 = maxps(*pauVar14,auVar19);
      *pauVar14 = auVar16;
      fVar1 = *(float *)(*pauVar14 + 4);
      fVar2 = *(float *)(*pauVar14 + 8);
      fVar8 = *(float *)(*pauVar14 + 0xc);
      auVar16 = minps(pauVar14[1],auVar18);
      pauVar14[1] = auVar16;
      auVar17._0_4_ = *(float *)(iVar3 + 0x40) - *(float *)(iVar3 + 0x50);
      auVar17._4_4_ = *(float *)(iVar3 + 0x44) - *(float *)(iVar3 + 0x54);
      auVar17._8_4_ = *(float *)(iVar3 + 0x48) - *(float *)(iVar3 + 0x58);
      auVar17._12_4_ = *(float *)(iVar3 + 0x4c) - *(float *)(iVar3 + 0x5c);
      auVar16._4_4_ = uStack_1c;
      auVar16._0_4_ = local_20;
      auVar16._8_4_ = uStack_18;
      auVar16._12_4_ = uStack_14;
      auVar19 = minps(auVar16,auVar17);
      *(float *)*pauVar14 = *(float *)*pauVar14 + auVar19._0_4_;
      *(float *)(*pauVar14 + 4) = fVar1 + auVar19._4_4_;
      *(float *)(*pauVar14 + 8) = fVar2 + auVar19._8_4_;
      *(float *)(*pauVar14 + 0xc) = fVar8 + auVar19._12_4_;
      auVar16 = maxps(auVar16,auVar17);
      fVar1 = *(float *)(pauVar14[1] + 4);
      fVar2 = *(float *)(pauVar14[1] + 8);
      fVar8 = *(float *)(pauVar14[1] + 0xc);
      *(float *)pauVar14[1] = *(float *)pauVar14[1] + auVar16._0_4_;
      *(float *)(pauVar14[1] + 4) = fVar1 + auVar16._4_4_;
      *(float *)(pauVar14[1] + 8) = fVar2 + auVar16._8_4_;
      *(float *)(pauVar14[1] + 0xc) = fVar8 + auVar16._12_4_;
      param_1 = param_1 + 1;
      local_58 = local_58 + -1;
      pauVar10 = local_54;
      pauVar14 = pauVar14 + 2;
      iVar15 = local_44;
    } while (local_58 != 0);
  }
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iVar15 + 0x1a4);
    *puVar4 = "St3AxisSweep";
    uVar6 = rdtsc();
    local_44 = (int)uVar6;
    puVar4[1] = local_44;
    *(undefined4 **)(iVar15 + 0x1a4) = puVar4 + 3;
  }
  if (param_4 != (LPCRITICAL_SECTION)0x0) {
    FUN_008a7720();
  }
  piVar20 = local_30;
  (**(code **)(**(int **)(param_3 + 100) + 0x18))(local_60,pauVar10,param_2,&local_40);
  piVar5 = *(int **)(iVar15 + 0x19c);
  piVar5[8] = (int)piVar20;
  if (piVar20 == (int *)piVar5[10]) {
    (**(code **)(*piVar5 + 0x10))(piVar20);
  }
  piVar20 = *(int **)(iVar15 + 0x19c);
  piVar20[8] = (int)pauVar10;
  if (pauVar10 == (undefined1 (*) [16])piVar20[10]) {
    (**(code **)(*piVar20 + 0x10))(pauVar10);
  }
  iVar3 = *(int *)(unaff_FS_OFFSET + 0x2c);
  if (0 < local_40 + local_50) {
    iVar12 = *(int *)(iVar3 + _tls_index * 4);
    if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
      puVar4 = *(undefined4 **)(iVar15 + 0x1a4);
      *puVar4 = "StRemoveDup";
      uVar6 = rdtsc();
      puVar4[1] = (int)uVar6;
      *(undefined4 **)(iVar15 + 0x1a4) = puVar4 + 3;
    }
    FUN_008d84f0(&local_54,&local_44);
    iVar12 = *(int *)(iVar3 + _tls_index * 4);
    if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
      puVar4 = *(undefined4 **)(iVar15 + 0x1a4);
      *puVar4 = "StRemoveAgt";
      uVar6 = rdtsc();
      puVar4[1] = (int)uVar6;
      *(undefined4 **)(iVar15 + 0x1a4) = puVar4 + 3;
    }
    FUN_008d83e0(local_44,local_40);
    iVar12 = *(int *)(DAT_00ba7d98 + 0x28) + *(int *)(DAT_00ba7d98 + 0x14);
    if (iVar12 < *(int *)(DAT_00ba7d98 + 8)) {
      uVar13 = *(int *)(DAT_00ba7d98 + 8) - iVar12;
    }
    else {
      uVar13 = 0;
    }
    if ((uint)(local_50 * 1000) < uVar13 || local_50 * 1000 - uVar13 == 0) {
      iVar12 = *(int *)(iVar3 + _tls_index * 4);
      if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
        puVar4 = *(undefined4 **)(iVar15 + 0x1a4);
        *puVar4 = "StAddAgt";
        uVar6 = rdtsc();
        puVar4[1] = (int)uVar6;
        *(undefined4 **)(iVar15 + 0x1a4) = puVar4 + 3;
      }
      if (*(int *)(param_3 + 0x78) == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(param_3 + 0x78) + 8;
      }
      FUN_008d8370(local_54,local_50,iVar12);
    }
    else {
      *(undefined4 *)(DAT_00ba7d98 + 4) = 1;
    }
  }
  if (param_4 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_4);
  }
  iVar3 = *(int *)(iVar3 + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iVar15 + 0x1a4);
    *puVar4 = &DAT_00a6a630;
    uVar6 = rdtsc();
    puVar4[1] = (int)uVar6;
    *(undefined4 **)(iVar15 + 0x1a4) = puVar4 + 3;
  }
  piVar20 = *(int **)(iVar15 + 0x19c);
  piVar20[8] = local_38;
  if (local_38 == piVar20[10]) {
    (**(code **)(*piVar20 + 0x10))(local_38);
  }
  if (-1 < local_3c) {
    FUN_008a75d0(local_44,local_3c << 3,0x14);
  }
  piVar20 = *(int **)(iVar15 + 0x19c);
  piVar20[8] = (int)local_48;
  if (local_48 == (int *)piVar20[10]) {
    (**(code **)(*piVar20 + 0x10))(local_48);
  }
  if (-1 < (int)local_4c) {
    FUN_008a75d0(local_54,(int)local_4c << 3,0x14);
  }
  return;
}



void FUN_008d4ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_008d72f0(param_1,param_2,param_3,&LAB_008d44d0);
  return;
}



void FUN_008d4af0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,
                 int param_5,int *param_6,int *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int unaff_FS_OFFSET;
  int local_698;
  int local_694;
  uint local_690;
  int local_68c;
  int local_688;
  int local_684;
  undefined1 local_67d;
  int local_67c;
  int *local_678;
  int local_674;
  undefined4 uStack_670;
  int local_66c;
  int local_668;
  char local_661;
  undefined1 local_65d;
  int local_65c;
  undefined4 local_658;
  undefined4 local_654;
  int local_650;
  int local_64c;
  int local_648;
  undefined4 *local_640;
  undefined4 *local_63c;
  undefined4 local_638;
  undefined4 local_634;
  undefined1 *local_630;
  int local_62c;
  int local_628;
  undefined1 local_624 [256];
  int *local_524;
  int local_520;
  int local_51c;
  int local_518 [64];
  undefined1 *local_418;
  int local_414;
  int local_410;
  undefined1 local_40c [256];
  undefined1 *local_30c;
  int local_308;
  uint local_304;
  undefined1 local_300 [768];
  
  local_64c = param_3[1] + 0x14;
  local_640 = param_3 + 8;
  local_648 = param_3[2] + 0x14;
  local_63c = param_3 + 4;
  local_638 = param_3[3];
  local_634 = 0;
  FUN_008dc890(param_5,&local_64c);
  if (*(int *)(param_3[1] + 0x98) != 0) {
    FUN_008dc010(param_3[1],&local_64c);
  }
  if (*(int *)(param_3[2] + 0x98) != 0) {
    FUN_008dc010(param_3[2],&local_64c);
  }
  iVar12 = param_3[1];
  local_674 = param_3[2];
  if (*(char *)(iVar12 + 0x91) == '\0') {
    local_668 = *(int *)(iVar12 + 0x54);
  }
  else {
    local_668 = *(int *)(local_674 + 0x54);
  }
  uVar2 = *(uint *)(local_668 + 0x38);
  local_698 = 0;
  local_694 = 0;
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  piVar4 = *(int **)(iVar3 + 0x19c);
  local_690 = 0x80000000;
  local_68c = piVar4[8];
  uVar9 = uVar2 * 4 + 0x10 & 0xfffffff0;
  uVar1 = local_68c + uVar9;
  if ((uint)piVar4[0xb] < uVar1) {
    local_68c = (**(code **)(*piVar4 + 0xc))(uVar9);
  }
  else {
    piVar4[8] = uVar1;
  }
  local_30c = local_300;
  local_308 = 0;
  local_66c = 0;
  iVar11 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  local_690 = uVar2 | 0x80000000;
  local_304 = 0x80000040;
  if (*(uint *)(iVar11 + 0x1a4) < *(uint *)(iVar11 + 0x1a8)) {
    puVar5 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar5 = "St2BodyCollide";
    uVar7 = rdtsc();
    local_67c = (int)uVar7;
    puVar5[1] = local_67c;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar5 + 3;
  }
  local_698 = local_68c;
  if (*(char *)(iVar12 + 0x91) == '\0') {
    *(int *)(local_68c + local_694 * 4) = iVar12;
    local_67c = *param_3;
    local_694 = local_694 + 1;
    pcVar10 = (char *)(*param_7 + (uint)*(ushort *)(iVar12 + 0x8c));
    if (*pcVar10 == '\0') {
      *pcVar10 = '\x01';
      FUN_008dd150(*(int *)(iVar12 + 0x50) + 0x50,local_67c,*(int *)(iVar12 + 0x50) + 0x10);
    }
    *(undefined1 *)((uint)*(ushort *)(iVar12 + 0x8c) + *param_7) = 2;
  }
  iVar12 = local_674;
  if (*(char *)(local_674 + 0x91) == '\0') {
    *(int *)(local_698 + local_694 * 4) = local_674;
    local_67c = *param_3;
    local_694 = local_694 + 1;
    pcVar10 = (char *)((uint)*(ushort *)(local_674 + 0x8c) + *param_7);
    if (*pcVar10 == '\0') {
      *pcVar10 = '\x01';
      FUN_008dd150(*(int *)(local_674 + 0x50) + 0x50,local_67c,*(int *)(local_674 + 0x50) + 0x10);
    }
    *(undefined1 *)((uint)*(ushort *)(iVar12 + 0x8c) + *param_7) = 2;
  }
  local_524 = local_518;
  local_520 = 0;
  local_51c = -0x7fffffc0;
  FUN_008d2f10(param_5,param_3,&local_524);
  local_688 = *local_524;
  if (local_520 < 2) {
    local_684 = 0;
  }
  else {
    local_684 = local_524[1];
  }
  FUN_0060d0a0();
  FUN_00923ce0(param_2,local_698,local_694);
  local_630 = local_624;
  local_418 = local_40c;
  local_67c = param_1[4];
  bVar8 = true;
  local_628 = -0x7fffffc0;
  local_410 = -0x7fffffc0;
  local_661 = '\x01';
  local_62c = 0;
  local_414 = 0;
  for (; 0 < local_67c; local_67c = local_67c + -1) {
    if (local_661 != '\0') {
      local_650 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
LAB_008d4e40:
      if (*(uint *)(local_650 + 0x1a4) < *(uint *)(local_650 + 0x1a8)) {
        puVar5 = *(undefined4 **)(iVar3 + 0x1a4);
        *puVar5 = "StExpandSystem";
        uVar7 = rdtsc();
        local_654 = (undefined4)uVar7;
        puVar5[1] = local_654;
        *(undefined4 **)(iVar3 + 0x1a4) = puVar5 + 3;
      }
      local_414 = 0;
      local_62c = 0;
      local_65c = local_66c;
      if (!bVar8) {
        if (local_308 <= local_66c) goto LAB_008d51f1;
        local_520 = 0;
        FUN_008d39e0(param_2,*(undefined4 *)(param_5 + 0x74),&local_30c,&local_65c,*param_1,param_7,
                     &local_698,&local_524);
        if (local_520 == 0) goto LAB_008d53a8;
      }
      FUN_008d3cf0(*(undefined4 *)(param_5 + 0x74),*param_1,*param_3,&local_524,param_7,&local_630,
                   &local_418);
      iVar12 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
        puVar5 = *(undefined4 **)(iVar3 + 0x1a4);
        *puVar5 = "StbuildAcc+Jac";
        uVar7 = rdtsc();
        local_658 = (undefined4)uVar7;
        puVar5[1] = local_658;
        *(undefined4 **)(iVar3 + 0x1a4) = puVar5 + 3;
      }
      pcVar10 = (char *)FUN_00923d70(&local_65d,param_2,local_630,local_62c);
      if ((((*pcVar10 == '\0') ||
           (pcVar10 = (char *)FUN_00923f40(&local_67d,param_2,local_418,local_414), *pcVar10 == '\0'
           )) || ((int)param_1[3] < local_414 + local_308)) ||
         (((int)param_1[1] < param_6[1] + local_62c + local_694 ||
          ((int)param_1[2] < param_6[1] + local_520)))) {
        iVar12 = 0;
        if (0 < local_520) {
          do {
            *(undefined1 *)((uint)*(ushort *)(local_524[iVar12] + 0x8c) + *param_7) = 2;
            iVar12 = iVar12 + 1;
          } while (iVar12 < local_520);
        }
        iVar12 = 0;
        if (0 < local_62c) {
          do {
            *(undefined1 *)((uint)*(ushort *)(*(int *)(local_630 + iVar12 * 4) + 0x8c) + *param_7) =
                 1;
            iVar12 = iVar12 + 1;
          } while (iVar12 < local_62c);
        }
        iVar12 = (**(code **)(*param_4 + 0x14))();
        if (iVar12 != 1) {
          if (iVar12 != 2) goto LAB_008d53a8;
          iVar12 = *(int *)(unaff_FS_OFFSET + 0x2c);
          iVar11 = *(int *)(iVar12 + _tls_index * 4);
          if (*(uint *)(iVar11 + 0x1a4) < *(uint *)(iVar11 + 0x1a8)) {
            puVar5 = *(undefined4 **)(iVar3 + 0x1a4);
            *puVar5 = "StBackstep";
            uVar7 = rdtsc();
            local_678 = (int *)uVar7;
            puVar5[1] = local_678;
            *(undefined4 **)(iVar3 + 0x1a4) = puVar5 + 3;
          }
          FUN_008d40e0(*param_3,local_668,param_7,param_6);
          iVar12 = *(int *)(iVar12 + _tls_index * 4);
          if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
            puVar5 = *(undefined4 **)(iVar3 + 0x1a4);
            *puVar5 = "StInvalidTIMs";
            uVar7 = rdtsc();
            local_678 = (int *)uVar7;
            puVar5[1] = local_678;
            *(undefined4 **)(iVar3 + 0x1a4) = puVar5 + 3;
          }
          iVar12 = 0;
          if (0 < param_6[1]) {
            do {
              FUN_008e77c0(*(undefined4 *)(*param_6 + iVar12 * 4),*(undefined4 *)(param_5 + 0x74));
              iVar12 = iVar12 + 1;
            } while (iVar12 < param_6[1]);
          }
          param_6[1] = 0;
          if (-1 < local_410) {
            FUN_008a75d0(local_418,local_410 << 2,0x14);
          }
          if (-1 < local_628) {
            FUN_008a75d0(local_630,local_628 << 2,0x14);
          }
          if (-1 < local_51c) {
            FUN_008a75d0(local_524,local_51c << 2,0x14);
          }
          if (-1 < (int)local_304) {
            FUN_008a75d0(local_30c,(local_304 & 0x3fffffff) * 0xc,0x14);
          }
          piVar4 = *(int **)(iVar3 + 0x19c);
          piVar4[8] = local_68c;
          if (local_68c == piVar4[10]) {
            (**(code **)(*piVar4 + 0x10))(local_68c);
          }
          goto joined_r0x008d5390;
        }
LAB_008d51f1:
        local_661 = '\0';
        goto LAB_008d53a8;
      }
      FUN_00923ce0(param_2,local_630,local_62c);
      FUN_00923dd0(param_2,local_418,local_414,&local_30c);
      iVar11 = 0;
      local_66c = local_65c;
      iVar12 = local_694;
      if (0 < local_694) {
        do {
          if (*(char *)((uint)*(ushort *)(*(int *)(local_698 + iVar11 * 4) + 0x8c) + *param_7) ==
              '\b') {
            iVar12 = iVar12 + -1;
            *(undefined4 *)(local_698 + iVar11 * 4) = *(undefined4 *)(local_698 + iVar12 * 4);
            iVar11 = iVar11 + -1;
            local_694 = iVar12;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar12);
      }
      FUN_008e6720(param_6[1],&local_524);
      iVar12 = local_62c + local_694;
      if ((int)(local_690 & 0x3fffffff) < iVar12) {
        iVar11 = (local_690 & 0x3fffffff) * 2;
        if (iVar11 <= iVar12) {
          iVar11 = iVar12;
        }
        FUN_008a6e40(&local_698,iVar11,4);
      }
      iVar12 = 0;
      if (0 < local_62c) {
        do {
          iVar11 = (**(code **)(**(int **)(*(int *)(local_630 + iVar12 * 4) + 0x50) + 8))();
          if (iVar11 != 6) {
            *(undefined4 *)(local_698 + local_694 * 4) = *(undefined4 *)(local_630 + iVar12 * 4);
            local_694 = local_694 + 1;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < local_62c);
      }
      FUN_008d3140(&local_30c,&local_66c,local_414);
      FUN_008d3200(&local_30c,&local_66c,param_7);
      FUN_00923c00(param_2,1);
      if ((local_414 != 0) || (local_62c != 0)) goto LAB_008d5165;
    }
LAB_008d53a8:
    iVar12 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    bVar8 = false;
    if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
      puVar5 = *(undefined4 **)(iVar3 + 0x1a4);
      *puVar5 = "StSolver";
      uVar7 = rdtsc();
      local_678 = (int *)uVar7;
      puVar5[1] = local_678;
      *(undefined4 **)(iVar3 + 0x1a4) = puVar5 + 3;
    }
    if (param_2[9] != param_2[0xb]) {
      FUN_009202a0(param_2[1],param_2[9],param_2[3],param_2[7]);
    }
    if (param_2[0xd] != param_2[0xf]) {
      FUN_009202a0(param_2[1],param_2[0xd],param_2[3],param_2[7]);
    }
  }
  iVar12 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
    puVar5 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar5 = "StForcedConstr";
    uVar7 = rdtsc();
    local_678 = (int *)uVar7;
    puVar5[1] = local_678;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar5 + 3;
  }
  if (param_2[0xd] != param_2[0xf]) {
    FUN_008d32c0(param_2,&local_698);
    pcVar10 = (char *)FUN_008d4020(&local_67d,param_2,&local_30c,*(undefined4 *)(param_5 + 0x74));
    if (*pcVar10 == '\0') {
      iVar12 = param_1[5];
LAB_008d54d0:
      if (iVar12 != 0) goto code_r0x008d54db;
      iVar11 = (**(code **)(*param_4 + 0x10))();
      iVar12 = _tls_index;
      if (iVar11 == 2) {
        iVar11 = *(int *)(unaff_FS_OFFSET + 0x2c);
        iVar6 = *(int *)(iVar11 + _tls_index * 4);
        if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
          puVar5 = *(undefined4 **)(iVar3 + 0x1a4);
          *puVar5 = "StBackstep";
          uVar7 = rdtsc();
          local_678 = (int *)uVar7;
          puVar5[1] = local_678;
          *(undefined4 **)(iVar3 + 0x1a4) = puVar5 + 3;
        }
        FUN_008d40e0(*param_3,local_668,param_7,param_6);
        iVar12 = *(int *)(iVar11 + iVar12 * 4);
        if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
          puVar5 = *(undefined4 **)(iVar3 + 0x1a4);
          *puVar5 = "StInvalidTIMs";
          uVar7 = rdtsc();
          local_678 = (int *)uVar7;
          puVar5[1] = local_678;
          *(undefined4 **)(iVar3 + 0x1a4) = puVar5 + 3;
        }
        iVar12 = 0;
        if (0 < param_6[1]) {
          do {
            FUN_008e77c0(*(undefined4 *)(*param_6 + iVar12 * 4),*(undefined4 *)(param_5 + 0x74));
            iVar12 = iVar12 + 1;
          } while (iVar12 < param_6[1]);
        }
        param_6[1] = 0;
        if (-1 < local_410) {
          FUN_008a75d0(local_418,local_410 << 2,0x14);
        }
        if (-1 < local_628) {
          FUN_008a75d0(local_630,local_628 << 2,0x14);
        }
        if (-1 < local_51c) {
          FUN_008a75d0(local_524,local_51c << 2,0x14);
        }
        if (-1 < (int)local_304) {
          FUN_008a75d0(local_30c,(local_304 & 0x3fffffff) * 0xc,0x14);
        }
        piVar4 = *(int **)(iVar3 + 0x19c);
        piVar4[8] = local_68c;
        if (local_68c == piVar4[10]) {
          (**(code **)(*piVar4 + 0x10))(local_68c);
        }
joined_r0x008d5390:
        if ((int)local_690 < 0) {
          return;
        }
        goto LAB_008d5948;
      }
    }
  }
LAB_008d5522:
  if (param_6[1] == 0) {
    local_678 = &local_688;
    local_674 = 1;
    uStack_670 = 0x80000001;
    FUN_008e6720(0,&local_678);
    *(undefined1 *)((uint)*(ushort *)(*(int *)*param_6 + 0x8c) + *param_7) = 8;
    if (local_684 != 0) {
      local_678 = &local_684;
      local_674 = 1;
      uStack_670 = 0x80000001;
      FUN_008e6720(1,&local_678);
      *(undefined1 *)((uint)*(ushort *)(*(int *)(*param_6 + 4) + 0x8c) + *param_7) = 8;
    }
  }
  iVar12 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
    puVar5 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar5 = "StIntegMotions";
    uVar7 = rdtsc();
    local_678 = (int *)uVar7;
    puVar5[1] = local_678;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar5 + 3;
  }
  iVar12 = 0;
  if (0 < param_6[1]) {
    do {
      FUN_008dd530(*param_3,*(int *)(*(int *)(*param_6 + iVar12 * 4) + 0x50) + 0x10);
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_6[1]);
  }
  FUN_00923c80(*param_2,*param_6,param_6[1],param_2[3]);
  FUN_008d41a0(local_668,param_7);
  iVar12 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
    puVar5 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar5 = "StInvalidTIMs";
    uVar7 = rdtsc();
    local_678 = (int *)uVar7;
    puVar5[1] = local_678;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar5 + 3;
  }
  iVar12 = 0;
  if (0 < param_6[1]) {
    do {
      FUN_008e77c0(*(undefined4 *)(*param_6 + iVar12 * 4),*(undefined4 *)(param_5 + 0x74));
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_6[1]);
  }
  if (-1 < local_410) {
    FUN_008a75d0(local_418,local_410 << 2,0x14);
  }
  if (-1 < local_628) {
    FUN_008a75d0(local_630,local_628 << 2,0x14);
  }
  if (-1 < local_51c) {
    FUN_008a75d0(local_524,local_51c << 2,0x14);
  }
  if (-1 < (int)local_304) {
    FUN_008a75d0(local_30c,(local_304 & 0x3fffffff) * 0xc,0x14);
  }
  piVar4 = *(int **)(iVar3 + 0x19c);
  piVar4[8] = local_68c;
  if (local_68c == piVar4[10]) {
    (**(code **)(*piVar4 + 0x10))(local_68c);
  }
  if (-1 < (int)local_690) {
LAB_008d5948:
    FUN_008a75d0(local_698,local_690 << 2,0x14);
  }
  return;
LAB_008d5165:
  bVar8 = false;
  goto LAB_008d4e40;
code_r0x008d54db:
  FUN_009202a0(param_2[1],param_2[0xd],param_2[3],param_2[7]);
  FUN_008d32c0(param_2,&local_698);
  pcVar10 = (char *)FUN_008d4020(&local_67d,param_2,&local_30c,*(undefined4 *)(param_5 + 0x74));
  iVar12 = iVar12 + -1;
  if (*pcVar10 != '\0') goto LAB_008d5522;
  goto LAB_008d54d0;
}



void FUN_008d5970(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_3 + 0x88) == 0) {
    iVar2 = *(int *)(param_3 + 0x74);
    local_c = *(float *)(param_3 + 0x18);
    local_10 = *(float *)(param_3 + 0xc);
    *(undefined4 *)(param_3 + 0x88) = 1;
    local_20 = *(float *)(iVar2 + 0x10);
    local_1c = *(undefined4 *)(iVar2 + 0x14);
    local_18 = *(undefined4 *)(iVar2 + 0x18);
    local_14 = *(undefined4 *)(iVar2 + 0x1c);
    local_8 = local_c - local_10;
    if (local_8 == 0.0) {
      local_4 = 0.0;
    }
    else {
      local_4 = 1.0 / local_8;
    }
    *(float *)(iVar2 + 0x10) = local_10;
    *(float *)(iVar2 + 0x14) = local_c;
    *(float *)(iVar2 + 0x18) = local_8;
    iVar1 = 0;
    *(float *)(iVar2 + 0x1c) = local_4;
    if (0 < param_2) {
      do {
        iVar2 = *(int *)(param_1 + iVar1 * 4);
        FUN_008dd530(*(undefined4 *)(param_3 + 0xc),*(int *)(iVar2 + 0x50) + 0x10);
        (**(code **)(**(int **)(iVar2 + 0x50) + 0xc))(&local_10);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_2);
    }
    FUN_008d4590(param_1,param_2,param_3,0);
    iVar2 = 0;
    if (0 < param_2) {
      do {
        FUN_008e77c0(*(undefined4 *)(param_1 + iVar2 * 4),*(undefined4 *)(param_3 + 0x74));
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
    FUN_008d72f0(param_1,param_2,*(undefined4 *)(param_3 + 0x74),&LAB_008d44d0);
    iVar2 = *(int *)(param_3 + 0x88) + -1;
    *(int *)(param_3 + 0x88) = iVar2;
    if (((iVar2 == 0) && (*(int *)(param_3 + 0x84) != 0)) && (*(char *)(param_3 + 0x90) == '\0')) {
      FUN_00899210();
    }
    iVar2 = *(int *)(param_3 + 0x74);
    *(float *)(iVar2 + 0x10) = local_20;
    *(int *)(iVar2 + 0x14) = local_1c;
    *(undefined4 *)(iVar2 + 0x18) = local_18;
    *(undefined4 *)(iVar2 + 0x1c) = local_14;
    return;
  }
  local_18 = CONCAT22(local_18._2_2_,(undefined2)param_2);
  local_20 = (float)CONCAT31(local_20._1_3_,0x16);
  local_1c = param_1;
  FUN_00898820(&local_20);
  return;
}



void FUN_008d5b20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int unaff_FS_OFFSET;
  
  iVar6 = param_1;
  iVar5 = _tls_index;
  iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar8 = *(int *)(iVar9 + _tls_index * 4);
  if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
    puVar7 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar7 = "TtCollide";
    uVar4 = rdtsc();
    puVar7[1] = (int)uVar4;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar7 + 3;
  }
  *(undefined4 *)(param_1 + 0x160) = *param_2;
  *(undefined4 *)(param_1 + 0x164) = param_2[1];
  *(undefined4 *)(param_1 + 0x168) = param_2[2];
  *(undefined4 *)(param_1 + 0x16c) = param_2[3];
  iVar8 = *(int *)(param_1 + 0x74);
  *(undefined4 *)(iVar8 + 0x10) = *param_2;
  *(undefined4 *)(iVar8 + 0x14) = param_2[1];
  *(undefined4 *)(iVar8 + 0x18) = param_2[2];
  *(undefined4 *)(iVar8 + 0x1c) = param_2[3];
  iVar8 = 0;
  *(float *)(param_1 + 0x264) = *(float *)(param_1 + 0x270) * (float)param_2[2];
  *(float *)(param_1 + 0x268) = (float)*(int *)(param_1 + 0x26c) * (float)param_2[3];
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x38) + iVar8 * 4);
      FUN_008d4590(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38),param_1,0);
      if (*(int *)(DAT_00ba7d98 + 4) == 1) {
        piVar1 = (int *)(param_1 + 0x88);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (*(int *)(param_1 + 0x84) != 0)) &&
           (*(char *)(param_1 + 0x90) == '\0')) {
          FUN_00899210();
        }
        iVar9 = *(int *)(iVar9 + iVar5 * 4);
        if (*(uint *)(iVar9 + 0x1a8) <= *(uint *)(iVar9 + 0x1a4)) {
          return;
        }
        puVar7 = *(undefined4 **)(iVar9 + 0x1a4);
        *puVar7 = &DAT_00a9610c;
        uVar4 = rdtsc();
        param_2 = (undefined4 *)uVar4;
        goto LAB_008d5df4;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x3c));
  }
  piVar1 = (int *)(param_1 + 0x88);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (*(int *)(param_1 + 0x84) != 0)) && (*(char *)(param_1 + 0x90) == '\0')) {
    FUN_00899210();
  }
  piVar1 = (int *)(param_1 + 0x3c);
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  param_1 = 0;
  if (0 < *piVar1) {
    do {
      uVar3 = *(undefined4 *)(*(int *)(iVar6 + 0x38) + param_1 * 4);
      FUN_008d4290(uVar3,*(undefined4 *)(iVar6 + 0x74));
      if (*(int *)(DAT_00ba7d98 + 4) == 1) {
        piVar1 = (int *)(iVar6 + 0x88);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (*(int *)(iVar6 + 0x84) != 0)) && (*(char *)(iVar6 + 0x90) == '\0'))
        {
          FUN_00899210();
        }
        iVar9 = *(int *)(iVar9 + iVar5 * 4);
        if (*(uint *)(iVar9 + 0x1a8) <= *(uint *)(iVar9 + 0x1a4)) {
          return;
        }
        puVar7 = *(undefined4 **)(iVar9 + 0x1a4);
        *puVar7 = &DAT_00a9610c;
        uVar4 = rdtsc();
        param_2 = (undefined4 *)uVar4;
        goto LAB_008d5df4;
      }
      if (*(int *)(iVar6 + 0x140) != 0) {
        iVar8 = *(int *)(iVar9 + iVar5 * 4);
        if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
          puVar7 = *(undefined4 **)(iVar8 + 0x1a4);
          *puVar7 = "TtIslandPostCollideCb";
          uVar4 = rdtsc();
          puVar7[1] = (int)uVar4;
          *(undefined4 **)(iVar8 + 0x1a4) = puVar7 + 3;
        }
        FUN_008dcfa0(iVar6,uVar3,param_2);
        iVar8 = *(int *)(iVar9 + iVar5 * 4);
        if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
          puVar7 = *(undefined4 **)(iVar8 + 0x1a4);
          *puVar7 = &DAT_00a9610c;
          uVar4 = rdtsc();
          puVar7[1] = (int)uVar4;
          *(undefined4 **)(iVar8 + 0x1a4) = puVar7 + 3;
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar6 + 0x3c));
  }
  piVar1 = (int *)(iVar6 + 0x88);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (*(int *)(iVar6 + 0x84) != 0)) && (*(char *)(iVar6 + 0x90) == '\0')) {
    FUN_00899210();
  }
  if (*(int *)(iVar6 + 0x128) != 0) {
    iVar8 = *(int *)(iVar9 + iVar5 * 4);
    if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
      puVar7 = *(undefined4 **)(iVar8 + 0x1a4);
      *puVar7 = "TtPostCollideCB";
      uVar4 = rdtsc();
      puVar7[1] = (int)uVar4;
      *(undefined4 **)(iVar8 + 0x1a4) = puVar7 + 3;
    }
    FUN_008dce80(iVar6,param_2);
    iVar8 = *(int *)(iVar9 + iVar5 * 4);
    if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
      puVar7 = *(undefined4 **)(iVar8 + 0x1a4);
      *puVar7 = &DAT_00a9610c;
      uVar4 = rdtsc();
      puVar7[1] = (int)uVar4;
      *(undefined4 **)(iVar8 + 0x1a4) = puVar7 + 3;
    }
  }
  iVar9 = *(int *)(iVar9 + iVar5 * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar7 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar7 = &DAT_00a9610c;
    uVar4 = rdtsc();
    param_2 = (undefined4 *)uVar4;
LAB_008d5df4:
    puVar7[1] = param_2;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar7 + 3;
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_008d5eb0(int param_1,float *param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int in_ECX;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  int unaff_FS_OFFSET;
  int iStack_337c;
  int iStack_3374;
  int iStack_3370;
  int iStack_336c;
  int *piStack_3368;
  float fStack_3360;
  int *local_335c;
  float fStack_3358;
  float fStack_3354;
  undefined1 auStack_3350 [12];
  undefined4 local_3344;
  undefined4 local_3340;
  undefined4 local_333c;
  undefined4 local_3338;
  undefined4 local_3334;
  int local_3330;
  undefined4 local_332c;
  undefined4 local_3328;
  undefined4 uStack_3324;
  undefined2 auStack_3320 [2];
  undefined4 uStack_331c;
  uint uStack_3318;
  undefined4 uStack_3314;
  undefined4 uStack_330c;
  float fStack_3308;
  float fStack_3304;
  float fStack_3300;
  float fStack_32fc;
  undefined4 uStack_32f8;
  undefined1 auStack_32dc [80];
  undefined1 auStack_328c [4];
  undefined4 uStack_3288;
  undefined4 uStack_3284;
  undefined4 uStack_3280;
  undefined4 uStack_327c;
  undefined4 uStack_3278;
  undefined4 uStack_3274;
  undefined4 uStack_3270;
  undefined4 uStack_326c;
  undefined4 uStack_3268;
  undefined4 uStack_3264;
  undefined4 uStack_3260;
  float fStack_3198;
  float fStack_3194;
  undefined4 uStack_3190;
  undefined4 uStack_318c;
  int *piStack_317c;
  int iStack_3178;
  int iStack_3174;
  int aiStack_3170 [65];
  undefined1 *apuStack_306c [12];
  undefined1 auStack_303c [12292];
  float fStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_14;
  
  uStack_14 = 0x8d5ec0;
  if ((DAT_00ba8180 != '\0') || (DAT_00ba8180 = FUN_009246e0(3), DAT_00ba8180 != '\0')) {
    local_3340 = 1000;
    local_333c = 1000;
    local_3338 = 1000;
    local_3334 = 4;
    local_3330 = 4;
    piVar21 = (int *)(in_ECX + 0x14);
    local_3344 = 2;
    local_332c = 0;
    local_3328 = 0;
    local_335c = piVar21;
    iVar11 = (**(code **)(**(int **)(in_ECX + 0x20) + 0xc))(param_2,piVar21,&local_3344);
    if (iVar11 != 1) {
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
      local_335c = *(int **)(param_1 + 0x18);
      fStack_3360 = *param_2;
      fStack_3358 = (float)local_335c - fStack_3360;
      fStack_3354 = 1.0 / fStack_3358;
      FUN_008d2e10(param_1 + 0x170);
      fStack_3304 = 1.0 / param_3;
      fStack_3198 = param_3;
      fStack_3308 = param_3;
      fStack_3300 = fStack_3358;
      fStack_32fc = fStack_3354;
      uStack_3190 = 1;
      uStack_318c = 0x3f800000;
      uStack_327c = 0;
      uStack_3278 = 0;
      uStack_3274 = 0;
      uStack_3270 = 0;
      uStack_326c = 0;
      uStack_3268 = 0;
      uStack_3264 = 0;
      uStack_3260 = 0;
      uStack_3284 = 0x3fb33333;
      uStack_3288 = 0x3f000000;
      uStack_3280 = 0;
      uStack_32f8 = 0x3f800000;
      fStack_3194 = fStack_3304;
      FUN_00923b10(&fStack_3360,auStack_328c,&fStack_3308,local_3338,local_3334,auStack_32dc);
      iVar11 = *(int *)(unaff_FS_OFFSET + 0x2c);
      iVar1 = *(int *)(iVar11 + _tls_index * 4);
      if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
        puVar19 = *(undefined4 **)(*(int *)(iVar11 + _tls_index * 4) + 0x1a4);
        *puVar19 = "LtTOI";
        puVar19[3] = "SolveToi";
        uVar6 = rdtsc();
        iVar1 = *(int *)(iVar11 + _tls_index * 4);
        puVar19[1] = (int)uVar6;
        *(undefined4 **)(iVar1 + 0x1a4) = puVar19 + 4;
      }
      fVar12 = param_2[1];
      if (*(char *)((int)fVar12 + 0x91) != '\0') {
        fVar12 = param_2[2];
      }
      iVar1 = *(int *)((int)fVar12 + 0x54);
      iVar22 = *(int *)(iVar1 + 0x38);
      iVar11 = *(int *)(iVar11 + _tls_index * 4);
      piVar2 = *(int **)(iVar11 + 0x19c);
      iVar14 = piVar2[8];
      uVar13 = iVar22 + 0x10U & 0xfffffff0;
      uVar18 = iVar14 + uVar13;
      if ((uint)piVar2[0xb] < uVar18) {
        iVar14 = (**(code **)(*piVar2 + 0xc))(uVar13);
      }
      else {
        piVar2[8] = uVar18;
      }
      local_3330 = iVar14;
      FUN_008b18c0(iVar14,0,iVar22);
      piStack_317c = aiStack_3170;
      iStack_3178 = 0;
      iStack_3174 = -0x7fffffc0;
      FUN_008d4af0(auStack_3350,auStack_32dc,param_2,*(undefined4 *)(iStack_3370 + 0x20),param_1,
                   &piStack_317c,&local_3330);
      FUN_00918000(auStack_32dc);
      iVar22 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar22 + 0x1a4) < *(uint *)(iVar22 + 0x1a8)) {
        puVar19 = *(undefined4 **)(iVar11 + 0x1a4);
        *puVar19 = "StEvtCleanup";
        uVar6 = rdtsc();
        puVar19[1] = (int)uVar6;
        *(undefined4 **)(iVar11 + 0x1a4) = puVar19 + 3;
      }
      iStack_3374 = *(int *)(in_ECX + 0x18);
      if (-1 < iStack_3374 + -1) {
        iVar22 = (iStack_3374 + -1) * 0x40;
        do {
          iVar3 = *(int *)(iVar22 + 4 + *piVar21);
          iVar23 = iVar22 + *piVar21;
          if (((*(int *)(iVar3 + 0x54) == iVar1) &&
              (*(char *)((uint)*(ushort *)(iVar3 + 0x8c) + iVar14) == '\b')) ||
             ((*(int *)(*(int *)(iVar23 + 8) + 0x54) == iVar1 &&
              (*(char *)((uint)*(ushort *)(*(int *)(iVar23 + 8) + 0x8c) + iVar14) == '\b')))) {
            uStack_3314 = *(undefined4 *)(iVar23 + 8);
            uStack_3318 = *(uint *)(iVar23 + 4);
            uStack_330c = *(undefined4 *)(iVar23 + 0x18);
            auStack_3320[0] = 0xffff;
            uStack_331c = 0;
            FUN_008dc920(*(undefined4 *)(uStack_3318 + 8),auStack_3320);
            if (*(int *)(*(int *)(iVar23 + 4) + 0x98) != 0) {
              FUN_008dc0a0(*(int *)(iVar23 + 4),auStack_3320);
            }
            if (*(int *)(*(int *)(iVar23 + 8) + 0x98) != 0) {
              FUN_008dc0a0(*(int *)(iVar23 + 8),auStack_3320);
            }
            puVar15 = (undefined4 *)((piVar21[1] + -1) * 0x40 + *piVar21);
            piVar21[1] = piVar21[1] + -1;
            puVar17 = (undefined4 *)(*piVar21 + iVar22);
            *puVar17 = *puVar15;
            iVar23 = 2;
            puVar19 = puVar17;
            do {
              puVar19 = puVar19 + 1;
              *puVar19 = *(undefined4 *)(((int)puVar15 - (int)puVar17) + (int)puVar19);
              iVar23 = iVar23 + -1;
            } while (iVar23 != 0);
            puVar17[3] = puVar15[3];
            puVar17[4] = puVar15[4];
            puVar17[5] = puVar15[5];
            puVar17[6] = puVar15[6];
            uVar7 = puVar15[9];
            uVar8 = puVar15[10];
            uVar9 = puVar15[0xb];
            puVar17[8] = puVar15[8];
            puVar17[9] = uVar7;
            puVar17[10] = uVar8;
            puVar17[0xb] = uVar9;
            uVar7 = puVar15[0xd];
            uVar8 = puVar15[0xe];
            uVar9 = puVar15[0xf];
            puVar17[0xc] = puVar15[0xc];
            puVar17[0xd] = uVar7;
            puVar17[0xe] = uVar8;
            puVar17[0xf] = uVar9;
            piVar21 = piStack_3368;
          }
          iVar22 = iVar22 + -0x40;
          iStack_3374 = iStack_3374 + -1;
        } while (iStack_3374 != 0);
      }
      iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
        puVar19 = *(undefined4 **)(iVar11 + 0x1a4);
        *puVar19 = "StCollide";
        uVar6 = rdtsc();
        puVar19[1] = (int)uVar6;
        *(undefined4 **)(iVar11 + 0x1a4) = puVar19 + 3;
      }
      FUN_008d2c90(*param_2,*(undefined4 *)(param_1 + 0x18));
      iVar22 = iStack_3178;
      piVar10 = piStack_317c;
      iVar1 = *(int *)(param_1 + 0x74);
      *(int *)(iVar1 + 0x10) = local_3330;
      *(undefined4 *)(iVar1 + 0x14) = local_332c;
      *(undefined4 *)(iVar1 + 0x18) = local_3328;
      *(undefined4 *)(iVar1 + 0x1c) = uStack_3324;
      piVar2 = *(int **)(param_1 + 0x74);
      if ((iStack_3178 != 0) &&
         (FUN_008d4590(piStack_317c,iStack_3178,param_1,0), *(int *)(DAT_00ba7d98 + 4) != 1)) {
        iVar1 = *(int *)(*piVar10 + 0x54);
        piVar4 = *(int **)(iVar11 + 0x19c);
        iVar23 = piVar4[8];
        uVar13 = *(uint *)(iVar1 + 0x38);
        uVar18 = uVar13 + 0x10 & 0xfffffff0;
        uVar20 = iVar23 + uVar18;
        if ((uint)piVar4[0xb] < uVar20) {
          iVar23 = (**(code **)(*piVar4 + 0xc))(uVar18);
        }
        else {
          piVar4[8] = uVar20;
        }
        uStack_3318 = uVar13 | 0x80000000;
        FUN_008b18c0(iVar23,0,uVar13);
        fStack_38 = 3.4028235e+38;
        iStack_336c = 0;
        if (0 < iVar22) {
          do {
            iVar3 = piVar10[iStack_336c];
            *(undefined1 *)((uint)*(ushort *)(iVar3 + 0x8c) + iVar23) = 1;
            iStack_337c = 0;
            if (0 < *(int *)(iVar3 + 0x3c)) {
              do {
                piVar21 = (int *)(*(int *)(iVar3 + 0x38) + iStack_337c * 8);
                iVar16 = piVar21[1];
                if ((*(int *)(*(int *)(iVar16 + 0x10) + 0x54 + iVar16) != iVar1) ||
                   (*(char *)((uint)*(ushort *)(*(int *)(iVar16 + 0x10) + iVar16 + 0x8c) + iVar23)
                    == '\0')) {
                  iVar5 = *piVar21;
                  apuStack_306c[0] = auStack_303c;
                  fStack_38 = 3.4028235e+38;
                  uStack_2c = 0;
                  iVar16 = *(char *)(iVar5 + 8) * 0x3c + 0x1a14 + *piVar2;
                  piVar2[10] = iVar16;
                  *(undefined1 *)(piVar2 + 3) = *(undefined1 *)(iVar16 + 0x10);
                  FUN_008e6d10(iVar5,piVar2,apuStack_306c);
                  iVar16 = *(int *)(DAT_00ba7d98 + 0x28) + *(int *)(DAT_00ba7d98 + 0x14);
                  if ((*(int *)(DAT_00ba7d98 + 8) <= iVar16) ||
                     (local_3330 = *(int *)(DAT_00ba7d98 + 8) - iVar16, local_3330 == 0)) {
                    *(undefined4 *)(DAT_00ba7d98 + 4) = 1;
                  }
                  if (*(int *)(DAT_00ba7d98 + 4) == 1) {
                    piVar21 = *(int **)(iVar11 + 0x19c);
                    piVar21[8] = iVar23;
                    if (iVar23 == piVar21[10]) {
                      (**(code **)(*piVar21 + 0x10))(iVar23);
                    }
                    piVar21 = piStack_3368;
                    if (-1 < (int)uStack_3318) {
                      FUN_008a75d0(iVar23,uStack_3318 & 0x3fffffff,0x14);
                    }
                    goto LAB_008d6620;
                  }
                  if (apuStack_306c[0] != auStack_303c) {
                    (**(code **)(**(int **)(iVar5 + 0x10) + 0x14))
                              (*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x18),piVar2,
                               apuStack_306c);
                  }
                  if (fStack_38 < 3.4028235e+38) {
                    FUN_008d3600(apuStack_306c,iVar5);
                  }
                }
                iStack_337c = iStack_337c + 1;
              } while (iStack_337c < *(int *)(iVar3 + 0x3c));
            }
            iStack_336c = iStack_336c + 1;
            piVar21 = piStack_3368;
          } while (iStack_336c < iVar22);
        }
        piVar2 = *(int **)(iVar11 + 0x19c);
        piVar2[8] = iVar23;
        if (iVar23 == piVar2[10]) {
          (**(code **)(*piVar2 + 0x10))(iVar23);
        }
        if (-1 < (int)uStack_3318) {
          FUN_008a75d0(iVar23,uStack_3318 & 0x3fffffff,0x14);
        }
      }
LAB_008d6620:
      if (-1 < iStack_3174) {
        FUN_008a75d0(piStack_317c,iStack_3174 << 2,0x14);
      }
      piVar2 = *(int **)(iVar11 + 0x19c);
      piVar2[8] = iVar14;
      if (iVar14 == piVar2[10]) {
        (**(code **)(*piVar2 + 0x10))(iVar14);
      }
      (**(code **)(**(int **)(iStack_3370 + 0x20) + 0x18))(param_2,piVar21,auStack_3350);
      piVar21 = (int *)(param_1 + 0x88);
      *piVar21 = *piVar21 + -1;
      if (((*piVar21 == 0) && (*(int *)(param_1 + 0x84) != 0)) &&
         (*(char *)(param_1 + 0x90) == '\0')) {
        FUN_00899210();
      }
      iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
        puVar19 = *(undefined4 **)(iVar11 + 0x1a4);
        *puVar19 = &DAT_00a6a630;
        uVar6 = rdtsc();
        puVar19[1] = (int)uVar6;
        *(undefined4 **)(iVar11 + 0x1a4) = puVar19 + 3;
      }
    }
  }
  return;
}



undefined4 FUN_008d66f0(float param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int unaff_FS_OFFSET;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar5 = (int)param_1;
  iVar4 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar6 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar2 = "TtSimulate";
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar2 + 3;
  }
  *(float *)(in_ECX + 8) = param_3;
  *(float *)((int)param_1 + 0x10) = param_2 + *(float *)((int)param_1 + 0x10);
  if (*(int *)(in_ECX + 0x10) == 1) goto LAB_008d68b2;
  do {
    if ((ABS(*(float *)(iVar5 + 0x10) - *(float *)(iVar5 + 0x18)) < param_3 * 0.01) &&
       (0.1 < param_2 / param_3)) {
      *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + 0x18);
    }
    if (*(int *)(in_ECX + 0x18) != 0) {
      param_1 = *(float *)(iVar5 + 0x10);
      if (*(float *)(iVar5 + 0x18) < param_1) {
        param_1 = *(float *)(iVar5 + 0x18);
      }
      iVar6 = FUN_008d33e0(iVar5,param_1);
      if (iVar6 != 0) {
        iVar1 = *(int *)(iVar1 + iVar4 * 4);
        if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
          puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
          *puVar2 = &DAT_00a9610c;
          uVar3 = rdtsc();
          puVar2[1] = (int)uVar3;
          *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
        }
        return 2;
      }
    }
    if (*(float *)(iVar5 + 0x10) <= *(float *)(iVar5 + 0x18)) {
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar5 + 0x10);
      break;
    }
    *(undefined4 *)(in_ECX + 0x24) = 0;
    (**(code **)(**(int **)(in_ECX + 0x20) + 8))();
    iVar7 = FUN_008992b0();
    iVar6 = *(int *)(*(int *)(iVar1 + iVar4 * 4) + 0x19c);
    if ((*(int *)(iVar6 + 0x2c) - *(int *)(iVar6 + 0x20)) + -0x10 < iVar7) {
      iVar6 = *(int *)(DAT_00ba7d98 + 0x28) + *(int *)(DAT_00ba7d98 + 0x14);
      if (iVar6 < *(int *)(DAT_00ba7d98 + 8)) {
        iVar6 = *(int *)(DAT_00ba7d98 + 8) - iVar6;
      }
      else {
        iVar6 = 0;
      }
      if (iVar6 < iVar7) {
        iVar1 = *(int *)(iVar1 + iVar4 * 4);
        *(undefined4 *)(DAT_00ba7d98 + 4) = 1;
        if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
          puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
          *puVar2 = &DAT_00a9610c;
          uVar3 = rdtsc();
          puVar2[1] = (int)uVar3;
          *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
        }
        return 1;
      }
    }
    fStack_c = param_3 + *(float *)(iVar5 + 0x18);
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar5 + 0x18);
    *(float *)(iVar5 + 0x18) = fStack_c;
    fStack_10 = *(float *)(iVar5 + 0x14);
    fStack_8 = fStack_c - fStack_10;
    if (fStack_8 == 0.0) {
      fStack_4 = 0.0;
    }
    else {
      fStack_4 = 1.0 / fStack_8;
    }
    (**(code **)(**(int **)(iVar5 + 0x5c) + 0xc))(iVar5,&fStack_10);
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar5 + 0x14);
    FUN_008d6e40(iVar5,&fStack_10);
    if (*(int *)(in_ECX + 0xc) != 0) {
      *(undefined4 *)(in_ECX + 0x10) = 1;
      break;
    }
LAB_008d68b2:
    local_1c = *(float *)(iVar5 + 0x18);
    local_20 = *(float *)(iVar5 + 0x14);
    local_18 = local_1c - local_20;
    if (local_18 == 0.0) {
      local_14 = 0.0;
    }
    else {
      local_14 = 1.0 / local_18;
    }
    FUN_008d5b20(iVar5,&local_20);
    if (*(int *)(DAT_00ba7d98 + 4) == 1) {
      iVar1 = *(int *)(iVar1 + iVar4 * 4);
      if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
        puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
        *puVar2 = &DAT_00a9610c;
        uVar3 = rdtsc();
        puVar2[1] = (int)uVar3;
        *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
      }
      return 2;
    }
    *(undefined4 *)(in_ECX + 0x10) = 0;
  } while (*(int *)(in_ECX + 0xc) != 2);
  if (*(int *)(iVar5 + 0x110) != 0) {
    iVar6 = *(int *)(iVar1 + iVar4 * 4);
    if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
      puVar2 = *(undefined4 **)(iVar6 + 0x1a4);
      *puVar2 = "TtPostSimulateCb";
      uVar3 = rdtsc();
      puVar2[1] = (int)uVar3;
      *(undefined4 **)(iVar6 + 0x1a4) = puVar2 + 3;
    }
    local_1c = *(float *)(iVar5 + 0x10);
    local_20 = *(float *)(iVar5 + 0x10) - param_2;
    local_18 = local_1c - local_20;
    if (local_18 == 0.0) {
      local_14 = 0.0;
    }
    else {
      local_14 = 1.0 / local_18;
    }
    FUN_008dcd60(iVar5,&local_20);
    iVar6 = *(int *)(iVar1 + iVar4 * 4);
    if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
      puVar2 = *(undefined4 **)(iVar6 + 0x1a4);
      *puVar2 = &DAT_00a9610c;
      uVar3 = rdtsc();
      puVar2[1] = (int)uVar3;
      *(undefined4 **)(iVar6 + 0x1a4) = puVar2 + 3;
    }
  }
  iVar1 = *(int *)(iVar1 + iVar4 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return 0;
}



void FUN_008d6d80(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  param_3[0xc0d] = 0x7f7fffff;
  param_3[0xc10] = 0;
  *param_3 = (int)(param_3 + 0xc);
  param_2[10] = *param_2 + 0x1a50;
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(*(char *)(param_1 + 8) * 0x3c + 0x1a24 + *param_2);
  FUN_008e6d10(param_1,param_2,param_3);
  iVar1 = *(int *)(DAT_00ba7d98 + 0x28) + *(int *)(DAT_00ba7d98 + 0x14);
  if ((*(int *)(DAT_00ba7d98 + 8) <= iVar1) || (*(int *)(DAT_00ba7d98 + 8) == iVar1)) {
    *(undefined4 *)(DAT_00ba7d98 + 4) = 1;
  }
  if ((*(int *)(DAT_00ba7d98 + 4) != 1) && ((int *)*param_3 != param_3 + 0xc)) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))
              (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),param_2,param_3);
  }
  return;
}



void FUN_008d6e40(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_FS_OFFSET;
  int local_50;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar8 = _tls_index;
  iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar6 = *(int *)(iVar7 + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar2 = "LtIntegrate";
    puVar2[3] = &DAT_00a9a21c;
    uVar5 = rdtsc();
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar2 + 4;
  }
  *(undefined4 *)(param_1 + 0x160) = *param_2;
  *(undefined4 *)(param_1 + 0x164) = param_2[1];
  *(undefined4 *)(param_1 + 0x168) = param_2[2];
  *(undefined4 *)(param_1 + 0x16c) = param_2[3];
  *(float *)(param_1 + 0x264) = *(float *)(param_1 + 0x270) * (float)param_2[2];
  fVar3 = *(float *)(param_1 + 0x264);
  *(float *)(param_1 + 0x268) = (float)*(int *)(param_1 + 0x26c) * (float)param_2[3];
  *(float *)(param_1 + 0x180) = fVar3 * *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x184) = fVar3 * *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x188) = fVar3 * *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x18c) = fVar3 * *(float *)(param_1 + 0x2c);
  fVar3 = (float)param_2[2];
  *(float *)(param_1 + 400) = fVar3 * *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x194) = fVar3 * *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x198) = fVar3 * *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x19c) = fVar3 * *(float *)(param_1 + 0x2c);
  FUN_0060d0a0();
  FUN_008cc3f0(param_1);
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -1;
  iVar6 = *(int *)(iVar7 + iVar8 * 4);
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar2 = "StActions";
    uVar5 = rdtsc();
    iVar6 = *(int *)(iVar7 + iVar8 * 4);
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar2 + 3;
  }
  local_50 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      iVar7 = *(int *)(*(int *)(param_1 + 0x38) + local_50 * 4);
      iVar6 = 0;
      if (0 < *(int *)(iVar7 + 0x60)) {
        do {
          (**(code **)(**(int **)(*(int *)(iVar7 + 0x5c) + iVar6 * 4) + 8))(param_1 + 0x160);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(iVar7 + 0x60));
      }
      local_50 = local_50 + 1;
    } while (local_50 < *(int *)(param_1 + 0x3c));
    iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
    iVar8 = _tls_index;
  }
  iVar6 = *(int *)(param_1 + 0x88) + -1;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  *(int *)(param_1 + 0x88) = iVar6;
  if (((iVar6 == 0) && (*(int *)(param_1 + 0x84) != 0)) && (*(char *)(param_1 + 0x90) == '\0')) {
    FUN_00899210();
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  uStack_3c = *(undefined4 *)(param_1 + 0x264);
  uStack_38 = *(undefined4 *)(param_1 + 0x268);
  uStack_34 = param_2[2];
  uStack_30 = param_2[3];
  uStack_2c = *(undefined4 *)(param_1 + 0x270);
  iVar6 = *(int *)(iVar7 + iVar8 * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar2 = "StIntegrate";
    uVar5 = rdtsc();
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(*(int *)(iVar7 + iVar8 * 4) + 0x1a4) = puVar2 + 3;
  }
  iVar6 = *(int *)(param_1 + 0x3c);
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x38) + iVar6 * 4);
    if (*(int *)(iVar4 + 0xc) == 0) {
      iVar8 = *(int *)(iVar7 + iVar8 * 4);
      if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
        puVar2 = *(undefined4 **)(iVar8 + 0x1a4);
        *puVar2 = "TtSingleObj";
        uVar5 = rdtsc();
        puVar2[1] = (int)uVar5;
        *(undefined4 **)(iVar8 + 0x1a4) = puVar2 + 3;
      }
      iVar8 = *(int *)(iVar4 + 0x38) + -1;
      if (-1 < iVar8) {
        do {
          (**(code **)(**(int **)(*(int *)(*(int *)(iVar4 + 0x34) + iVar8 * 4) + 0x50) + 0x10))
                    (param_1 + 0x160,param_1 + 400);
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
      iVar4 = *(int *)(iVar7 + _tls_index * 4);
      iVar8 = _tls_index;
      if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
        iVar8 = *(int *)(iVar7 + _tls_index * 4);
        puVar2 = *(undefined4 **)(iVar8 + 0x1a4);
        *puVar2 = &DAT_00a9610c;
        uVar5 = rdtsc();
        puVar2[1] = (int)uVar5;
        *(undefined4 **)(iVar8 + 0x1a4) = puVar2 + 3;
        iVar8 = _tls_index;
      }
    }
    else {
      FUN_00924000(param_1 + 0x160,param_1 + 0x170,&uStack_3c,iVar4,*(undefined4 *)(iVar4 + 0x34),
                   *(undefined4 *)(iVar4 + 0x38));
    }
    if (*(int *)(param_1 + 0x134) != 0) {
      iVar4 = *(int *)(iVar7 + iVar8 * 4);
      if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
        puVar2 = *(undefined4 **)(iVar4 + 0x1a4);
        *puVar2 = "StPostIntegrateCb";
        uVar5 = rdtsc();
        puVar2[1] = (int)uVar5;
        *(undefined4 **)(*(int *)(iVar7 + iVar8 * 4) + 0x1a4) = puVar2 + 3;
      }
      iVar4 = *(int *)(param_1 + 0x3c);
      while (iVar4 = iVar4 + -1, -1 < iVar4) {
        FUN_008dcf10(param_1,*(undefined4 *)(*(int *)(param_1 + 0x38) + iVar4 * 4),param_2);
      }
    }
  }
  piVar1 = (int *)(param_1 + 0x88);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (*(int *)(param_1 + 0x84) != 0)) && (*(char *)(param_1 + 0x90) == '\0')) {
    FUN_00899210();
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    iVar6 = *(int *)(iVar7 + iVar8 * 4);
    if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
      puVar2 = *(undefined4 **)(iVar6 + 0x1a4);
      *puVar2 = "TtPostIntegrateCb";
      uVar5 = rdtsc();
      iVar6 = *(int *)(iVar7 + iVar8 * 4);
      puVar2[1] = (int)uVar5;
      *(undefined4 **)(iVar6 + 0x1a4) = puVar2 + 3;
    }
    FUN_008dcdf0(param_1,param_2);
    iVar6 = *(int *)(iVar7 + iVar8 * 4);
    if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
      puVar2 = *(undefined4 **)(iVar6 + 0x1a4);
      *puVar2 = &DAT_00a9610c;
      uVar5 = rdtsc();
      puVar2[1] = (int)uVar5;
      *(undefined4 **)(iVar6 + 0x1a4) = puVar2 + 3;
    }
  }
  iVar7 = *(int *)(iVar7 + iVar8 * 4);
  if (*(uint *)(iVar7 + 0x1a4) < *(uint *)(iVar7 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar7 + 0x1a4);
    *puVar2 = &DAT_00a6a630;
    uVar5 = rdtsc();
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar7 + 0x1a4) = puVar2 + 3;
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008d72f0(int param_1,int param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined1 local_3085;
  int local_3084;
  undefined1 local_3070 [12340];
  undefined4 local_3c;
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  FUN_008b0e10();
  FUN_008b15c0(param_2);
  local_3c = 0x7f7fffff;
  local_3084 = 0;
  if (0 < param_2) {
    do {
      iVar5 = local_3084;
      iVar1 = *(int *)(param_1 + local_3084 * 4);
      FUN_008b0e80(iVar1 + 0x14,0);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x3c)) {
        do {
          iVar5 = *(int *)(iVar1 + 0x38);
          uVar2 = FUN_008b0f00(*(undefined4 *)(iVar5 + 4 + iVar4 * 8));
          pcVar3 = (char *)FUN_008b0d80(&local_3085,uVar2);
          if ((*pcVar3 == '\0') &&
             ((*param_4)(*(undefined4 *)(iVar5 + iVar4 * 8),param_3,local_3070),
             *(int *)(DAT_00ba7d98 + 4) == 1)) goto LAB_008d73be;
          iVar4 = iVar4 + 1;
          iVar5 = local_3084;
        } while (iVar4 < *(int *)(iVar1 + 0x3c));
      }
      local_3084 = iVar5 + 1;
    } while (local_3084 < param_2);
  }
LAB_008d73be:
  FUN_008b0e60();
  return;
}



void FUN_008d73e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_008d72f0(param_1,param_2,*(undefined4 *)(param_3 + 0x74),&LAB_008d6e20);
  return;
}



void FUN_008d7400(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int unaff_FS_OFFSET;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10 [4];
  
  iVar5 = _tls_index;
  iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar10 = *(int *)(iVar9 + _tls_index * 4);
  if (*(uint *)(iVar10 + 0x1a4) < *(uint *)(iVar10 + 0x1a8)) {
    puVar8 = *(undefined4 **)(iVar10 + 0x1a4);
    *puVar8 = "LtBroadPhase";
    puVar8[3] = "InitMem";
    uVar3 = rdtsc();
    local_2c = (int)uVar3;
    puVar8[1] = local_2c;
    *(undefined4 **)(iVar10 + 0x1a4) = puVar8 + 4;
  }
  iVar9 = *(int *)(iVar9 + iVar5 * 4);
  uVar1 = *(uint *)(param_3 + 0x2a8);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x80000000;
  piVar7 = *(int **)(iVar9 + 0x19c);
  if (*(int **)(iVar9 + 0x19c) == (int *)0x0) {
    piVar7 = DAT_00ba7d9c;
  }
  local_14 = piVar7[8];
  uVar4 = uVar1 * 8 + 0x10 & 0xfffffff0;
  uVar6 = local_14 + uVar4;
  local_30 = iVar9;
  if ((uint)piVar7[0xb] < uVar6) {
    local_14 = (**(code **)(*piVar7 + 0xc))(uVar4);
  }
  else {
    piVar7[8] = uVar6;
  }
  local_18 = uVar1 | 0x80000000;
  uVar1 = *(uint *)(param_3 + 0x2a8);
  local_10[0] = 0;
  local_10[1] = 0;
  local_10[2] = 0x80000000;
  piVar7 = *(int **)(iVar9 + 0x19c);
  if (*(int **)(iVar9 + 0x19c) == (int *)0x0) {
    piVar7 = DAT_00ba7d9c;
  }
  local_10[3] = piVar7[8];
  uVar4 = uVar1 * 8 + 0x10 & 0xfffffff0;
  uVar6 = local_10[3] + uVar4;
  local_20 = local_14;
  if ((uint)piVar7[0xb] < uVar6) {
    local_10[3] = (**(code **)(*piVar7 + 0xc))(uVar4);
  }
  else {
    piVar7[8] = uVar6;
  }
  local_10[2] = uVar1 | 0x80000000;
  piVar7 = *(int **)(iVar9 + 0x19c);
  if (*(int **)(iVar9 + 0x19c) == (int *)0x0) {
    piVar7 = DAT_00ba7d9c;
  }
  iVar10 = piVar7[8];
  iVar5 = param_2 * 0x20 + 0x10;
  uVar1 = iVar10 + iVar5;
  local_10[0] = local_10[3];
  if ((uint)piVar7[0xb] < uVar1) {
    iVar10 = (**(code **)(*piVar7 + 0xc))(iVar5);
  }
  else {
    piVar7[8] = uVar1;
  }
  piVar7 = *(int **)(iVar9 + 0x19c);
  if (*(int **)(iVar9 + 0x19c) == (int *)0x0) {
    piVar7 = DAT_00ba7d9c;
  }
  local_34 = piVar7[8];
  uVar6 = param_2 * 4 + 0x10U & 0xfffffff0;
  uVar1 = local_34 + uVar6;
  local_2c = iVar10;
  if ((uint)piVar7[0xb] < uVar1) {
    local_34 = (**(code **)(*piVar7 + 0xc))(uVar6);
  }
  else {
    piVar7[8] = uVar1;
  }
  local_24 = *(float *)(*(int *)(param_3 + 0x74) + 8) * 0.5;
  iVar5 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar8 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar8 = "StCalcAabbs";
    uVar3 = rdtsc();
    local_28 = (int)uVar3;
    puVar8[1] = local_28;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar8 + 3;
  }
  if (-1 < param_2 + -1) {
    iVar5 = local_34 - (int)param_1;
    iVar9 = param_2;
    do {
      iVar2 = *param_1;
      *(int *)(iVar5 + (int)param_1) = iVar2 + 0x28;
      (**(code **)(**(int **)(iVar2 + 0x14) + 0xc))(*(undefined4 *)(iVar2 + 0x1c),local_24,iVar10);
      iVar10 = iVar10 + 0x20;
      param_1 = param_1 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar2 = local_2c;
  iVar5 = local_30;
  iVar10 = local_34;
  iVar9 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar8 = *(undefined4 **)(local_30 + 0x1a4);
    *puVar8 = "St3AxisSweep";
    uVar3 = rdtsc();
    puVar8[1] = (int)uVar3;
    *(undefined4 **)(local_30 + 0x1a4) = puVar8 + 3;
  }
  (**(code **)(**(int **)(param_3 + 100) + 0x18))(local_34,local_2c,param_2,&local_20,local_10);
  piVar7 = *(int **)(iVar5 + 0x19c);
  if (*(int **)(iVar5 + 0x19c) == (int *)0x0) {
    piVar7 = DAT_00ba7d9c;
  }
  piVar7[8] = iVar10;
  if (iVar10 == piVar7[10]) {
    (**(code **)(*piVar7 + 0x10))(iVar10);
  }
  piVar7 = *(int **)(iVar5 + 0x19c);
  if (*(int **)(iVar5 + 0x19c) == (int *)0x0) {
    piVar7 = DAT_00ba7d9c;
  }
  piVar7[8] = iVar2;
  if (iVar2 == piVar7[10]) {
    (**(code **)(*piVar7 + 0x10))(iVar2);
  }
  if (local_20 + local_30 < 1) {
LAB_008d782f:
    iVar9 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar9 + 0x1a8) <= *(uint *)(iVar9 + 0x1a4)) goto LAB_008d786e;
    puVar8 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar8 = &DAT_00a6a630;
    uVar3 = rdtsc();
    local_10[2] = (int)uVar3;
    puVar8[1] = local_10[2];
  }
  else {
    iVar9 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
      puVar8 = *(undefined4 **)(iVar5 + 0x1a4);
      *puVar8 = "StRemoveDup";
      uVar3 = rdtsc();
      local_10[2] = (int)uVar3;
      puVar8[1] = local_10[2];
      *(undefined4 **)(iVar5 + 0x1a4) = puVar8 + 3;
    }
    FUN_008d84f0(&local_34,&local_24);
    iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
    iVar10 = *(int *)(iVar9 + _tls_index * 4);
    if (*(uint *)(iVar10 + 0x1a4) < *(uint *)(iVar10 + 0x1a8)) {
      puVar8 = *(undefined4 **)(iVar5 + 0x1a4);
      *puVar8 = "StRemoveAgt";
      uVar3 = rdtsc();
      local_10[2] = (int)uVar3;
      puVar8[1] = local_10[2];
      *(undefined4 **)(iVar5 + 0x1a4) = puVar8 + 3;
    }
    FUN_008d83e0(local_24,local_20);
    iVar10 = *(int *)(DAT_00ba7d98 + 0x28) + *(int *)(DAT_00ba7d98 + 0x14);
    if (iVar10 < *(int *)(DAT_00ba7d98 + 8)) {
      iVar10 = *(int *)(DAT_00ba7d98 + 8) - iVar10;
    }
    else {
      iVar10 = 0;
    }
    iVar9 = *(int *)(iVar9 + _tls_index * 4);
    if (local_30 * 0x280 <= iVar10) {
      if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
        puVar8 = *(undefined4 **)(iVar5 + 0x1a4);
        *puVar8 = "StAddAgt";
        uVar3 = rdtsc();
        local_10[2] = (int)uVar3;
        puVar8[1] = local_10[2];
        *(undefined4 **)(iVar5 + 0x1a4) = puVar8 + 3;
      }
      if (*(int *)(param_3 + 0x78) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(param_3 + 0x78) + 8;
      }
      FUN_008d8370(local_34,local_30,iVar9);
      goto LAB_008d782f;
    }
    *(undefined4 *)(DAT_00ba7d98 + 4) = 1;
    if (*(uint *)(iVar9 + 0x1a8) <= *(uint *)(iVar9 + 0x1a4)) goto LAB_008d786e;
    puVar8 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar8 = &DAT_00a6a630;
    uVar3 = rdtsc();
    local_10[2] = (int)uVar3;
    puVar8[1] = local_10[2];
  }
  *(undefined4 **)(iVar5 + 0x1a4) = puVar8 + 3;
LAB_008d786e:
  piVar7 = *(int **)(iVar5 + 0x19c);
  if (*(int **)(iVar5 + 0x19c) == (int *)0x0) {
    piVar7 = DAT_00ba7d9c;
  }
  piVar7[8] = local_18;
  if (local_18 == piVar7[10]) {
    (**(code **)(*piVar7 + 0x10))(local_18);
  }
  if (-1 < local_1c) {
    FUN_008a75d0(local_24,local_1c << 3,0x14);
  }
  piVar7 = *(int **)(iVar5 + 0x19c);
  if (*(int **)(iVar5 + 0x19c) == (int *)0x0) {
    piVar7 = DAT_00ba7d9c;
  }
  piVar7[8] = local_28;
  if (local_28 == piVar7[10]) {
    (**(code **)(*piVar7 + 0x10))(local_28);
  }
  if (-1 < local_2c) {
    FUN_008a75d0(local_34,local_2c << 3,0x14);
  }
  return;
}



void FUN_008d7920(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int unaff_FS_OFFSET;
  int local_18;
  
  iVar6 = _tls_index;
  iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar8 = *(int *)(iVar9 + _tls_index * 4);
  if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
    puVar7 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar7 = "LtSimulate";
    puVar7[3] = "Collide";
    uVar5 = rdtsc();
    puVar7[1] = (int)uVar5;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar7 + 4;
  }
  *(undefined4 *)(param_1 + 0x160) = *param_2;
  *(undefined4 *)(param_1 + 0x164) = param_2[1];
  *(undefined4 *)(param_1 + 0x168) = param_2[2];
  *(undefined4 *)(param_1 + 0x16c) = param_2[3];
  iVar8 = *(int *)(param_1 + 0x74);
  *(undefined4 *)(iVar8 + 0x10) = *param_2;
  *(undefined4 *)(iVar8 + 0x14) = param_2[1];
  *(undefined4 *)(iVar8 + 0x18) = param_2[2];
  *(undefined4 *)(iVar8 + 0x1c) = param_2[3];
  iVar8 = 0;
  *(float *)(param_1 + 0x264) = *(float *)(param_1 + 0x270) * (float)param_2[2];
  *(float *)(param_1 + 0x268) = (float)*(int *)(param_1 + 0x26c) * (float)param_2[3];
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x38) + iVar8 * 4);
      FUN_008d7400(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38),param_1);
      if (*(int *)(DAT_00ba7d98 + 4) == 1) {
        piVar1 = (int *)(param_1 + 0x88);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (*(int *)(param_1 + 0x84) != 0)) &&
           (*(char *)(param_1 + 0x90) == '\0')) {
          FUN_00899210();
        }
        iVar9 = *(int *)(iVar9 + iVar6 * 4);
        if (*(uint *)(iVar9 + 0x1a8) <= *(uint *)(iVar9 + 0x1a4)) {
          return;
        }
        puVar7 = *(undefined4 **)(iVar9 + 0x1a4);
        *puVar7 = &DAT_00a6a630;
        uVar5 = rdtsc();
        param_2 = (undefined4 *)uVar5;
        goto LAB_008d7c91;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x3c));
  }
  piVar1 = (int *)(param_1 + 0x88);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (*(int *)(param_1 + 0x84) != 0)) && (*(char *)(param_1 + 0x90) == '\0')) {
    FUN_00899210();
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      iVar8 = *(int *)(*(int *)(param_1 + 0x38) + local_18 * 4);
      piVar1 = *(int **)(param_1 + 0x74);
      if (((*(int *)(iVar8 + 0x60) != 0) &&
          (iVar2 = *(int *)(**(int **)(iVar8 + 0x5c) + 0x14), iVar2 != 0)) &&
         (iVar3 = *(int *)(iVar9 + iVar6 * 4), *(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)))
      {
        piVar4 = *(int **)(iVar3 + 0x1a4);
        *piVar4 = iVar2;
        piVar4[1] = 0x3f800000;
        *(int **)(iVar3 + 0x1a4) = piVar4 + 2;
      }
      iVar2 = *(int *)(iVar9 + iVar6 * 4);
      if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
        puVar7 = *(undefined4 **)(iVar2 + 0x1a4);
        *puVar7 = "TtNarrowPhase";
        uVar5 = rdtsc();
        puVar7[1] = (int)uVar5;
        *(undefined4 **)(*(int *)(iVar9 + iVar6 * 4) + 0x1a4) = puVar7 + 3;
      }
      piVar1[10] = *piVar1 + 0x1a50;
      *(undefined1 *)(piVar1 + 3) = 0;
      FUN_008e7180(iVar8 + 0x44,piVar1);
      iVar2 = *(int *)(iVar9 + iVar6 * 4);
      if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
        puVar7 = *(undefined4 **)(iVar2 + 0x1a4);
        *puVar7 = &DAT_00a9610c;
        uVar5 = rdtsc();
        puVar7[1] = (int)uVar5;
        *(undefined4 **)(iVar2 + 0x1a4) = puVar7 + 3;
      }
      if (*(int *)(DAT_00ba7d98 + 4) == 1) {
        piVar1 = (int *)(param_1 + 0x88);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (*(int *)(param_1 + 0x84) != 0)) &&
           (*(char *)(param_1 + 0x90) == '\0')) {
          FUN_00899210();
        }
        iVar9 = *(int *)(iVar9 + iVar6 * 4);
        if (*(uint *)(iVar9 + 0x1a8) <= *(uint *)(iVar9 + 0x1a4)) {
          return;
        }
        puVar7 = *(undefined4 **)(iVar9 + 0x1a4);
        *puVar7 = &DAT_00a6a630;
        uVar5 = rdtsc();
        param_2 = (undefined4 *)uVar5;
        goto LAB_008d7c91;
      }
      if (*(int *)(param_1 + 0x140) != 0) {
        iVar2 = *(int *)(iVar9 + iVar6 * 4);
        if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
          puVar7 = *(undefined4 **)(iVar2 + 0x1a4);
          *puVar7 = "TtIslandPostCollideCb";
          uVar5 = rdtsc();
          puVar7[1] = (int)uVar5;
          *(undefined4 **)(iVar2 + 0x1a4) = puVar7 + 3;
        }
        FUN_008dcfa0(param_1,iVar8,param_2);
        iVar8 = *(int *)(iVar9 + iVar6 * 4);
        if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
          puVar7 = *(undefined4 **)(iVar8 + 0x1a4);
          *puVar7 = &DAT_00a9610c;
          uVar5 = rdtsc();
          puVar7[1] = (int)uVar5;
          *(undefined4 **)(iVar8 + 0x1a4) = puVar7 + 3;
        }
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x3c));
  }
  piVar1 = (int *)(param_1 + 0x88);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (*(int *)(param_1 + 0x84) != 0)) && (*(char *)(param_1 + 0x90) == '\0')) {
    FUN_00899210();
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    iVar8 = *(int *)(iVar9 + iVar6 * 4);
    if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
      puVar7 = *(undefined4 **)(iVar8 + 0x1a4);
      *puVar7 = "StPostCollideCB";
      uVar5 = rdtsc();
      puVar7[1] = (int)uVar5;
      *(undefined4 **)(iVar8 + 0x1a4) = puVar7 + 3;
    }
    FUN_008dce80(param_1,param_2);
  }
  iVar9 = *(int *)(iVar9 + iVar6 * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar7 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar7 = &DAT_00a6a630;
    uVar5 = rdtsc();
    param_2 = (undefined4 *)uVar5;
LAB_008d7c91:
    puVar7[1] = param_2;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar7 + 3;
  }
  return;
}



void FUN_008d7d50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_1c [4];
  int local_18;
  undefined2 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_3 + 0x88) == 0) {
    local_c = *(float *)(param_3 + 0x18);
    *(undefined4 *)(param_3 + 0x88) = 1;
    local_10 = *(float *)(param_3 + 0xc);
    local_8 = local_c - local_10;
    if (local_8 == 0.0) {
      local_4 = 0.0;
    }
    else {
      local_4 = 1.0 / local_8;
    }
    iVar2 = *(int *)(param_3 + 0x74);
    *(float *)(iVar2 + 0x10) = local_10;
    *(float *)(iVar2 + 0x14) = local_c;
    *(float *)(iVar2 + 0x18) = local_8;
    iVar1 = 0;
    *(float *)(iVar2 + 0x1c) = local_4;
    if (0 < param_2) {
      do {
        iVar2 = *(int *)(param_1 + iVar1 * 4);
        FUN_008dd530(*(undefined4 *)(param_3 + 0xc),*(int *)(iVar2 + 0x50) + 0x10);
        (**(code **)(**(int **)(iVar2 + 0x50) + 0xc))(&local_10);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_2);
    }
    FUN_008d7400(param_1,param_2,param_3);
    iVar2 = 0;
    if (0 < param_2) {
      do {
        FUN_008e77c0(*(undefined4 *)(param_1 + iVar2 * 4),*(undefined4 *)(param_3 + 0x74));
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
    FUN_008d72f0(param_1,param_2,*(undefined4 *)(param_3 + 0x74),FUN_008d6d80);
    iVar2 = *(int *)(param_3 + 0x88) + -1;
    *(int *)(param_3 + 0x88) = iVar2;
    if (((iVar2 == 0) && (*(int *)(param_3 + 0x84) != 0)) && (*(char *)(param_3 + 0x90) == '\0')) {
      FUN_00899210();
    }
    return;
  }
  local_14 = (undefined2)param_2;
  local_1c[0] = 0x16;
  local_18 = param_1;
  FUN_00898820(local_1c);
  return;
}



void FUN_008d7eb0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  iVar6 = *(int *)(param_3 + 0x74);
  *(undefined4 *)(iVar6 + 0x10) = *param_4;
  *(undefined4 *)(iVar6 + 0x14) = param_4[1];
  *(undefined4 *)(iVar6 + 0x18) = param_4[2];
  *(undefined4 *)(iVar6 + 0x1c) = param_4[3];
  *(int *)(param_3 + 0x88) = *(int *)(param_3 + 0x88) + 1;
  FUN_008d7400(param_1,param_2,param_3);
  FUN_008d72f0(param_1,param_2,iVar6,FUN_008d6d80);
  piVar1 = (int *)(param_3 + 0x88);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (*(int *)(param_3 + 0x84) != 0)) && (*(char *)(param_3 + 0x90) == '\0')) {
    FUN_00899210();
  }
  *(undefined4 *)(iVar6 + 0x10) = uVar2;
  *(undefined4 *)(iVar6 + 0x14) = uVar3;
  *(undefined4 *)(iVar6 + 0x18) = uVar4;
  *(undefined4 *)(iVar6 + 0x1c) = uVar5;
  return;
}



longlong FUN_008d7f80(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  int unaff_FS_OFFSET;
  undefined1 local_18 [4];
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar5 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtSimulate";
    uVar4 = rdtsc();
    local_14 = (undefined4)uVar4;
    puVar3[1] = local_14;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  *(float *)(in_ECX + 8) = param_3;
  iVar6 = FUN_008992b0();
  iVar2 = *(int *)(iVar1 + iVar5 * 4);
  iVar7 = *(int *)(iVar2 + 0x19c);
  if (*(int *)(iVar2 + 0x19c) == 0) {
    iVar7 = DAT_00ba7d9c;
  }
  if ((*(int *)(iVar7 + 0x2c) - *(int *)(iVar7 + 0x20)) + -0x10 < iVar6) {
    iVar7 = *(int *)(DAT_00ba7d98 + 0x28) + *(int *)(DAT_00ba7d98 + 0x14);
    if (iVar7 < *(int *)(DAT_00ba7d98 + 8)) {
      iVar7 = *(int *)(DAT_00ba7d98 + 8) - iVar7;
    }
    else {
      iVar7 = 0;
    }
    if (iVar7 < iVar6) {
      iVar1 = *(int *)(iVar1 + iVar5 * 4);
      *(undefined4 *)(DAT_00ba7d98 + 4) = 1;
      if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
        puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
        *puVar3 = &DAT_00a9610c;
        uVar4 = rdtsc();
        iVar7 = (int)uVar4;
        puVar3[1] = iVar7;
        *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
      }
      return CONCAT44(iVar7,1);
    }
  }
  local_c = param_3 + *(float *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(float *)(param_1 + 0x18) = local_c;
  *(float *)(param_1 + 0x10) = local_c;
  local_10 = *(float *)(param_1 + 0x14);
  local_8 = local_c - local_10;
  if (local_8 == 0.0) {
    local_4 = 0.0;
  }
  else {
    local_4 = 1.0 / local_8;
  }
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))(param_1,&local_10);
  FUN_008d6e40(param_1,local_18);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  FUN_008d7920(param_1,local_18);
  if (*(int *)(DAT_00ba7d98 + 4) == 1) {
    iVar1 = *(int *)(iVar1 + iVar5 * 4);
    uVar8 = *(uint *)(iVar1 + 0x1a4);
    if (uVar8 < *(uint *)(iVar1 + 0x1a8)) {
      puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
      *puVar3 = &DAT_00a9610c;
      uVar4 = rdtsc();
      uVar8 = (uint)((ulonglong)uVar4 >> 0x20);
      puVar3[1] = (int)uVar4;
      *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
    }
    return CONCAT44(uVar8,2);
  }
  iVar7 = *(int *)(iVar1 + iVar5 * 4);
  if (*(uint *)(iVar7 + 0x1a4) < *(uint *)(iVar7 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtPostSimulateCb";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  FUN_008dcd60(param_1,local_18);
  iVar7 = *(int *)(iVar1 + iVar5 * 4);
  uVar8 = *(uint *)(iVar7 + 0x1a8);
  if (*(uint *)(iVar7 + 0x1a4) < uVar8) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    uVar8 = (uint)uVar4;
    puVar3[1] = uVar8;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar1 = *(int *)(iVar1 + iVar5 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    uVar8 = (uint)uVar4;
    puVar3[1] = uVar8;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  return (ulonglong)uVar8 << 0x20;
}



void FUN_008d8350(void)

{
  int in_ECX;
  
  if (*(undefined4 **)(in_ECX + 0x100) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x100))(1);
  }
  return;
}



void FUN_008d8370(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  int in_ECX;
  int iVar3;
  
  puVar1 = param_3;
  iVar3 = param_2;
  if (-1 < param_2 + -1) {
    do {
      pcVar2 = (char *)(**(code **)*puVar1)
                                 (&param_2,(int)*(char *)(*param_1 + 5) + *param_1,
                                  (int)*(char *)(param_1[1] + 5) + param_1[1]);
      if (*pcVar2 != '\0') {
        (**(code **)(**(int **)(in_ECX + ((int)*(char *)(param_1[1] + 4) +
                                         *(char *)(*param_1 + 4) * 8) * 4) + 8))(param_1);
      }
      param_1 = param_1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



void FUN_008d83e0(int *param_1,int param_2)

{
  int in_ECX;
  
  if (-1 < param_2 + -1) {
    do {
      (**(code **)(**(int **)(in_ECX + ((int)*(char *)(param_1[1] + 4) + *(char *)(*param_1 + 4) * 8
                                       ) * 4) + 0xc))(param_1);
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



void FUN_008d8450(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(8,0x1e);
  *(undefined2 *)(puVar1 + 1) = 8;
  *(undefined2 *)((int)puVar1 + 6) = 1;
  *puVar1 = &PTR_LAB_00a9a24c;
  *(undefined4 **)(in_ECX + 0x100) = puVar1;
  puVar1 = (undefined4 *)(in_ECX + 8);
  iVar2 = 8;
  do {
    puVar1[-2] = *(undefined4 *)(in_ECX + 0x100);
    puVar1[-1] = *(undefined4 *)(in_ECX + 0x100);
    *puVar1 = *(undefined4 *)(in_ECX + 0x100);
    puVar1[1] = *(undefined4 *)(in_ECX + 0x100);
    puVar1[2] = *(undefined4 *)(in_ECX + 0x100);
    puVar1[3] = *(undefined4 *)(in_ECX + 0x100);
    puVar1[4] = *(undefined4 *)(in_ECX + 0x100);
    puVar1[5] = *(undefined4 *)(in_ECX + 0x100);
    puVar1 = puVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void FUN_008d84f0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  
  piVar4 = param_2;
  piVar2 = param_1;
  iVar11 = param_2[1];
  iVar10 = param_1[1];
  if (iVar11 <= param_1[1]) {
    iVar10 = iVar11;
  }
  if (iVar10 < 0x20) {
    param_2 = (int *)0x0;
    if (0 < iVar11) {
      do {
        iVar11 = 0;
        if (0 < param_1[1]) {
          iVar1 = *(int *)(*piVar4 + (int)param_2 * 8);
          iVar10 = *piVar4 + (int)param_2 * 8;
          piVar2 = (int *)*param_1;
          piVar9 = piVar2;
          do {
            if (((*piVar9 == iVar1) && (piVar9[1] == *(int *)(iVar10 + 4))) ||
               ((piVar9[1] == iVar1 && (*piVar9 == *(int *)(iVar10 + 4))))) {
              iVar10 = param_1[1] + -1;
              param_1[1] = iVar10;
              piVar2[iVar11 * 2] = piVar2[iVar10 * 2];
              piVar2[iVar11 * 2 + 1] = piVar2[iVar10 * 2 + 1];
              iVar11 = *piVar4;
              iVar10 = piVar4[1] + -1;
              piVar4[1] = iVar10;
              *(undefined4 *)(iVar11 + (int)param_2 * 8) = *(undefined4 *)(iVar11 + iVar10 * 8);
              *(undefined4 *)(iVar11 + 4 + (int)param_2 * 8) =
                   *(undefined4 *)(iVar11 + 4 + iVar10 * 8);
              param_2 = (int *)((int)param_2 + -1);
              break;
            }
            iVar11 = iVar11 + 1;
            piVar9 = piVar9 + 2;
          } while (iVar11 < param_1[1]);
        }
        param_2 = (int *)((int)param_2 + 1);
        if (piVar4[1] <= (int)param_2) {
          return;
        }
      } while( true );
    }
  }
  else {
    FUN_008b1100();
    FUN_008b15e0(param_1[1]);
    piVar9 = param_1 + 1;
    param_1 = (int *)0x0;
    if (0 < *piVar9) {
      do {
        uVar12 = *(uint *)(*piVar2 + (int)param_1 * 8);
        uVar7 = *(uint *)(*piVar2 + 4 + (int)param_1 * 8);
        uVar8 = uVar7;
        if (uVar7 < uVar12) {
          uVar8 = uVar12;
          uVar12 = uVar7;
        }
        uVar5 = FUN_008b1250(uVar12,uVar8);
        pcVar6 = (char *)FUN_008b0d80(&param_2,uVar5);
        if (*pcVar6 == '\0') {
          uVar7 = (int)param_1 << 0x10 | 1;
          FUN_008b1170(uVar12,uVar8,uVar7,(int)uVar7 >> 0x1f);
        }
        else {
          lVar13 = FUN_008b0dd0(uVar5);
          FUN_008b0df0(uVar5,lVar13 + 1);
          *(undefined4 *)(*piVar2 + (int)param_1 * 8) = 0;
        }
        param_1 = (int *)((int)param_1 + 1);
      } while ((int)param_1 < piVar2[1]);
    }
    param_1 = (int *)0x0;
    if (0 < piVar4[1]) {
      do {
        uVar12 = *(uint *)(*piVar4 + (int)param_1 * 8);
        uVar7 = *(uint *)(*piVar4 + 4 + (int)param_1 * 8);
        uVar8 = uVar12;
        if (uVar7 < uVar12) {
          uVar8 = uVar7;
          uVar7 = uVar12;
        }
        uVar5 = FUN_008b1250(uVar8,uVar7);
        pcVar6 = (char *)FUN_008b0d80(&param_2,uVar5);
        if (*pcVar6 != '\0') {
          lVar13 = FUN_008b0dd0(uVar5);
          if (((uint)lVar13 & 0xffff) < 2) {
            FUN_008b12e0(uVar5);
            *(undefined4 *)(*piVar2 + ((int)(uint)lVar13 >> 0x10) * 8) = 0;
          }
          else {
            FUN_008b0df0(uVar5,lVar13 + -1);
          }
          iVar11 = *piVar4;
          iVar10 = piVar4[1] + -1;
          piVar4[1] = iVar10;
          *(undefined4 *)(iVar11 + (int)param_1 * 8) = *(undefined4 *)(iVar11 + iVar10 * 8);
          *(undefined4 *)(iVar11 + 4 + (int)param_1 * 8) = *(undefined4 *)(iVar11 + 4 + iVar10 * 8);
          param_1 = (int *)((int)param_1 + -1);
        }
        param_1 = (int *)((int)param_1 + 1);
      } while ((int)param_1 < piVar4[1]);
    }
    iVar10 = 0;
    iVar11 = 0;
    if (0 < piVar2[1]) {
      do {
        iVar1 = *piVar2;
        iVar3 = *(int *)(iVar1 + iVar11 * 8);
        if (iVar3 != 0) {
          *(int *)(iVar1 + iVar10 * 8) = iVar3;
          *(undefined4 *)(iVar1 + 4 + iVar10 * 8) = *(undefined4 *)(iVar1 + 4 + iVar11 * 8);
          iVar10 = iVar10 + 1;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < piVar2[1]);
    }
    if ((int)(piVar2[2] & 0x3fffffffU) < iVar10) {
      iVar11 = (piVar2[2] & 0x3fffffffU) * 2;
      if (iVar11 <= iVar10) {
        iVar11 = iVar10;
      }
      FUN_008a6e40(piVar2,iVar11,8);
    }
    piVar2[1] = iVar10;
    FUN_008b1150();
  }
  return;
}



void FUN_008d87a0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0x80000000;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(in_ECX + 4),4000);
  in_ECX[3] = param_1;
  return;
}



void FUN_008d87e0(void)

{
  undefined4 *in_ECX;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 4));
  if (-1 < (int)in_ECX[2]) {
    FUN_008a75d0(*in_ECX,(in_ECX[2] & 0x3fffffff) * 0x14,0x14);
  }
  return;
}



void FUN_008d8830(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  short *psVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int *in_ECX;
  int iVar9;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 4);
  FUN_008a7720();
  if (in_ECX[1] == (in_ECX[2] & 0x3fffffffU)) {
    FUN_008a6ee0();
  }
  iVar9 = in_ECX[1];
  iVar4 = *in_ECX;
  in_ECX[1] = iVar9 + 1;
  *(int *)(in_ECX[3] + 0x84) = *(int *)(in_ECX[3] + 0x84) + 1;
  puVar2 = (undefined1 *)(iVar4 + iVar9 * 0x14);
  FUN_008b1890(puVar2,param_1,0x14);
  switch(*puVar2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0x12:
  case 0x13:
  case 0x15:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x20:
  case 0x21:
  case 0x22:
    iVar9 = *(int *)(puVar2 + 4);
    goto LAB_008d8b44;
  case 5:
  case 0xc:
    if (*(short *)(*(int *)(puVar2 + 4) + 4) != 0) {
      psVar1 = (short *)(*(int *)(puVar2 + 4) + 6);
      *psVar1 = *psVar1 + 1;
    }
    iVar9 = *(int *)(puVar2 + 8);
LAB_008d8b44:
    if (*(short *)(iVar9 + 4) != 0) {
      *(short *)(iVar9 + 6) = *(short *)(iVar9 + 6) + 1;
    }
    break;
  case 6:
    uVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))((uint)*(ushort *)(puVar2 + 8) << 2,4);
    *(undefined4 *)(puVar2 + 4) = uVar7;
    FUN_008b1890(uVar7,*(undefined4 *)(param_1 + 4),(uint)*(ushort *)(param_1 + 8) << 2);
    piVar8 = *(int **)(puVar2 + 4);
    piVar3 = piVar8 + *(ushort *)(puVar2 + 8);
    if (piVar8 < piVar3) {
      do {
        if (*(short *)(*piVar8 + 4) != 0) {
          psVar1 = (short *)(*piVar8 + 6);
          *psVar1 = *psVar1 + 1;
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 < piVar3);
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    break;
  case 7:
    uVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))((uint)*(ushort *)(puVar2 + 8) << 2,4);
    *(undefined4 *)(puVar2 + 4) = uVar7;
    FUN_008b1890(uVar7,*(undefined4 *)(param_1 + 4),(uint)*(ushort *)(param_1 + 8) << 2);
    piVar8 = *(int **)(puVar2 + 4);
    piVar3 = piVar8 + *(ushort *)(puVar2 + 8);
    if (piVar8 < piVar3) {
      do {
        if (*(short *)(*piVar8 + 4) != 0) {
          psVar1 = (short *)(*piVar8 + 6);
          *psVar1 = *psVar1 + 1;
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 < piVar3);
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    break;
  case 0xf:
    uVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))((uint)*(ushort *)(puVar2 + 8) << 2,4);
    *(undefined4 *)(puVar2 + 4) = uVar7;
    FUN_008b1890(uVar7,*(undefined4 *)(param_1 + 4),(uint)*(ushort *)(param_1 + 8) << 2);
    piVar8 = *(int **)(puVar2 + 4);
    piVar3 = piVar8 + *(ushort *)(puVar2 + 8);
    if (piVar8 < piVar3) {
      do {
        if (*(short *)(*piVar8 + 4) != 0) {
          psVar1 = (short *)(*piVar8 + 6);
          *psVar1 = *psVar1 + 1;
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 < piVar3);
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    break;
  case 0x10:
    uVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))((uint)*(ushort *)(puVar2 + 8) << 2,4);
    *(undefined4 *)(puVar2 + 4) = uVar7;
    FUN_008b1890(uVar7,*(undefined4 *)(param_1 + 4),(uint)*(ushort *)(param_1 + 8) << 2);
    piVar8 = *(int **)(puVar2 + 4);
    piVar3 = piVar8 + *(ushort *)(puVar2 + 8);
    if (piVar8 < piVar3) {
      do {
        if (*(short *)(*piVar8 + 4) != 0) {
          psVar1 = (short *)(*piVar8 + 6);
          *psVar1 = *psVar1 + 1;
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 < piVar3);
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    break;
  case 0x11:
    if (*(short *)(*(int *)(puVar2 + 4) + 4) != 0) {
      psVar1 = (short *)(*(int *)(puVar2 + 4) + 6);
      *psVar1 = *psVar1 + 1;
    }
    puVar6 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x20,0x24);
    if (puVar6 != (undefined4 *)0x0) {
      puVar5 = *(undefined4 **)(param_1 + 8);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
      puVar6[3] = puVar5[3];
      puVar6[4] = puVar5[4];
      puVar6[5] = puVar5[5];
      puVar6[6] = puVar5[6];
      puVar6[7] = puVar5[7];
      *(undefined4 **)(puVar2 + 8) = puVar6;
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    *(undefined4 *)(puVar2 + 8) = 0;
    LeaveCriticalSection(lpCriticalSection);
    return;
  case 0x16:
    uVar7 = (**(code **)(*DAT_00ba7d98 + 0x10))((uint)*(ushort *)(puVar2 + 8) << 2,4);
    *(undefined4 *)(puVar2 + 4) = uVar7;
    FUN_008b1890(uVar7,*(undefined4 *)(param_1 + 4),(uint)*(ushort *)(param_1 + 8) << 2);
    piVar8 = *(int **)(puVar2 + 4);
    piVar3 = piVar8 + *(ushort *)(puVar2 + 8);
    if (piVar8 < piVar3) {
      do {
        if (*(short *)(*piVar8 + 4) != 0) {
          psVar1 = (short *)(*piVar8 + 6);
          *psVar1 = *psVar1 + 1;
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 < piVar3);
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    break;
  case 0x1d:
  case 0x1e:
    if (*(short *)(*(int *)(puVar2 + 4) + 4) != 0) {
      psVar1 = (short *)(*(int *)(puVar2 + 4) + 6);
      *psVar1 = *psVar1 + 1;
    }
    in_ECX[1] = in_ECX[1] + -1;
    *(int *)(in_ECX[3] + 0x84) = *(int *)(in_ECX[3] + 0x84) + -1;
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}



void FUN_008d8bf0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined1 uStack_1b6;
  undefined1 uStack_1b5;
  int local_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  int local_160;
  int local_15c;
  uint local_158;
  undefined1 local_154 [336];
  
  iVar5 = 0x10;
  puVar4 = local_154;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 0x14;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_160 = *in_ECX;
  local_15c = in_ECX[1];
  *in_ECX = (int)local_154;
  in_ECX[1] = 0;
  local_158 = in_ECX[2];
  in_ECX[2] = -0x7ffffff0;
  *(int *)(in_ECX[3] + 0x98) = *(int *)(in_ECX[3] + 0x98) + 1;
  local_1b4 = 0;
  if (0 < local_15c) {
    do {
      puVar4 = (undefined1 *)(local_160 + local_1b4 * 0x14);
      switch(*puVar4) {
      case 1:
        if (*(int *)(*(int *)(puVar4 + 4) + 8) == 0) {
          FUN_008994e0(*(int *)(puVar4 + 4),*(undefined4 *)(puVar4 + 8));
        }
        goto LAB_008d938c;
      case 2:
        if (*(int *)(*(int *)(puVar4 + 4) + 8) == in_ECX[3]) {
          FUN_008996c0(&uStack_1b5,*(int *)(puVar4 + 4));
        }
        goto LAB_008d938c;
      case 3:
        if (*(int *)(*(int *)(puVar4 + 4) + 8) == in_ECX[3]) {
          FUN_008cc570(in_ECX[3],*(int *)(puVar4 + 4));
        }
        FUN_008bc730();
        break;
      case 4:
        FUN_008a9ab0(puVar4[8],puVar4[9],puVar4[10]);
        goto LAB_008d942b;
      case 5:
        (**(code **)(**(int **)(puVar4 + 4) + 8))(*(undefined4 *)(puVar4 + 8));
        puVar6 = *(undefined4 **)(puVar4 + 4);
        if ((*(short *)(puVar6 + 1) != 0) &&
           (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
           *(short *)((int)puVar6 + 6) == 0)) {
          (**(code **)*puVar6)(1);
        }
        puVar6 = *(undefined4 **)(puVar4 + 8);
        goto LAB_008d942e;
      case 6:
        FUN_0089c310(*(undefined4 *)(puVar4 + 4),*(undefined2 *)(puVar4 + 8),puVar4[10]);
        piVar7 = *(int **)(puVar4 + 4);
        piVar1 = piVar7 + *(ushort *)(puVar4 + 8);
        for (; piVar7 < piVar1; piVar7 = piVar7 + 1) {
          puVar6 = (undefined4 *)*piVar7;
          if ((*(short *)(puVar6 + 1) != 0) &&
             (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
             *(short *)((int)puVar6 + 6) == 0)) {
            (**(code **)*puVar6)(1);
          }
        }
        (**(code **)(*DAT_00ba7d98 + 0x14))
                  (*(undefined4 *)(puVar4 + 4),(uint)*(ushort *)(puVar4 + 8) << 2,4);
        break;
      case 7:
        FUN_0089c8e0(*(undefined4 *)(puVar4 + 4),*(undefined2 *)(puVar4 + 8));
        piVar7 = *(int **)(puVar4 + 4);
        piVar1 = piVar7 + *(ushort *)(puVar4 + 8);
        for (; piVar7 < piVar1; piVar7 = piVar7 + 1) {
          puVar6 = (undefined4 *)*piVar7;
          if ((*(short *)(puVar6 + 1) != 0) &&
             (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
             *(short *)((int)puVar6 + 6) == 0)) {
            (**(code **)*puVar6)(1);
          }
        }
        goto LAB_008d9401;
      case 8:
        iVar5 = *(int *)(puVar4 + 4);
        if (((*(int *)(iVar5 + 8) == 0) && (*(int *)(*(int *)(iVar5 + 0x10) + 8) == in_ECX[3])) &&
           (*(int *)(*(int *)(iVar5 + 0x14) + 8) == in_ECX[3])) {
          FUN_008988a0(iVar5);
        }
        goto LAB_008d8e89;
      case 9:
        if (*(int *)(*(int *)(puVar4 + 4) + 8) != 0) {
          FUN_008988f0(&uStack_1b6,*(int *)(puVar4 + 4));
        }
        goto LAB_008d938c;
      case 10:
        if ((*(int **)(puVar4 + 4))[2] == 0) {
          iStack_1b0 = 0;
          iStack_1ac = 0;
          iStack_1a8 = -0x80000000;
          (**(code **)(**(int **)(puVar4 + 4) + 0xc))(&iStack_1b0);
          iVar5 = 0;
          if (0 < iStack_1ac) {
            do {
              if (*(int *)(*(int *)(iStack_1b0 + iVar5 * 4) + 8) != in_ECX[3]) goto LAB_008d8f38;
              iVar5 = iVar5 + 1;
            } while (iVar5 < iStack_1ac);
          }
          FUN_0089bae0(*(undefined4 *)(puVar4 + 4));
LAB_008d8f38:
          if (-1 < iStack_1a8) {
            FUN_008a75d0(iStack_1b0,iStack_1a8 << 2,0x14);
          }
        }
        goto LAB_008d938c;
      case 0xb:
        if (*(int *)(*(int *)(puVar4 + 4) + 0xc) != 0) {
          FUN_0089ccc0(*(int *)(puVar4 + 4));
        }
        goto LAB_008d8e89;
      case 0xc:
        iVar5 = *(int *)(puVar4 + 4);
        if ((((*(int *)(iVar5 + 8) == in_ECX[3]) &&
             (iVar3 = *(int *)(puVar4 + 8), *(int *)(iVar3 + 8) == in_ECX[3])) &&
            (*(char *)(iVar5 + 0x91) == '\0')) &&
           ((*(char *)(iVar3 + 0x91) == '\0' && (*(int *)(iVar5 + 0x54) != *(int *)(iVar3 + 0x54))))
           ) {
          FUN_008cd320(*(undefined4 *)(iVar5 + 8),iVar5,iVar3);
        }
        puVar6 = *(undefined4 **)(puVar4 + 4);
        if ((*(short *)(puVar6 + 1) != 0) &&
           (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
           *(short *)((int)puVar6 + 6) == 0)) {
          (**(code **)*puVar6)(1);
        }
        puVar6 = *(undefined4 **)(puVar4 + 8);
        goto LAB_008d8e8c;
      case 0xd:
        if (*(int *)(*(int *)(puVar4 + 4) + 8) == 0) {
          FUN_00899a50(*(int *)(puVar4 + 4));
        }
        goto LAB_008d938c;
      case 0xe:
        if (*(int *)(*(int *)(puVar4 + 4) + 8) == in_ECX[3]) {
          FUN_00899b30(*(int *)(puVar4 + 4));
        }
        goto LAB_008d8e89;
      case 0xf:
        FUN_0089cd00(*(undefined4 *)(puVar4 + 4),*(undefined2 *)(puVar4 + 8));
        piVar7 = *(int **)(puVar4 + 4);
        piVar1 = piVar7 + *(ushort *)(puVar4 + 8);
        for (; piVar7 < piVar1; piVar7 = piVar7 + 1) {
          puVar6 = (undefined4 *)*piVar7;
          if ((*(short *)(puVar6 + 1) != 0) &&
             (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
             *(short *)((int)puVar6 + 6) == 0)) {
            (**(code **)*puVar6)(1);
          }
        }
        goto LAB_008d9401;
      case 0x10:
        FUN_0089d080(*(undefined4 *)(puVar4 + 4),*(undefined2 *)(puVar4 + 8));
        piVar7 = *(int **)(puVar4 + 4);
        piVar1 = piVar7 + *(ushort *)(puVar4 + 8);
        for (; piVar7 < piVar1; piVar7 = piVar7 + 1) {
          puVar6 = (undefined4 *)*piVar7;
          if ((*(short *)(puVar6 + 1) != 0) &&
             (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
             *(short *)((int)puVar6 + 6) == 0)) {
            (**(code **)*puVar6)(1);
          }
        }
        goto LAB_008d9401;
      case 0x11:
        if (*(int *)(*(int *)(puVar4 + 4) + 8) == in_ECX[3]) {
          FUN_008de950(*(undefined4 *)(puVar4 + 8));
        }
        puVar6 = *(undefined4 **)(puVar4 + 4);
        if ((*(short *)(puVar6 + 1) != 0) &&
           (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
           *(short *)((int)puVar6 + 6) == 0)) {
          (**(code **)*puVar6)(1);
        }
        (**(code **)(*DAT_00ba7d98 + 0x14))(*(undefined4 *)(puVar4 + 8),0x20,0x24);
        break;
      case 0x12:
        if (*(int *)(*(int *)(puVar4 + 4) + 8) == in_ECX[3]) {
          FUN_0089b630(*(int *)(puVar4 + 4),puVar4[8],puVar4[9]);
        }
        goto LAB_008d8e89;
      case 0x13:
        if (*(int *)(*(int *)(puVar4 + 4) + 8) == in_ECX[3]) {
          FUN_0089b390(*(int *)(puVar4 + 4),puVar4[8]);
        }
LAB_008d8e89:
        puVar6 = *(undefined4 **)(puVar4 + 4);
LAB_008d8e8c:
        if ((*(short *)(puVar6 + 1) != 0) &&
           (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
           *(short *)((int)puVar6 + 6) == 0)) {
          (**(code **)*puVar6)(1);
        }
        break;
      case 0x14:
        FUN_0089bf50(puVar4[1],puVar4[2]);
        break;
      case 0x15:
        FUN_008a9d10(*(undefined4 *)(puVar4 + 4));
        goto LAB_008d9352;
      case 0x16:
        (**(code **)(**(int **)(in_ECX[3] + 8) + 0x14))
                  (*(undefined4 *)(puVar4 + 4),*(undefined2 *)(puVar4 + 8),in_ECX[3]);
        piVar7 = *(int **)(puVar4 + 4);
        piVar1 = piVar7 + *(ushort *)(puVar4 + 8);
        for (; piVar7 < piVar1; piVar7 = piVar7 + 1) {
          puVar6 = (undefined4 *)*piVar7;
          if ((*(short *)(puVar6 + 1) != 0) &&
             (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
             *(short *)((int)puVar6 + 6) == 0)) {
            (**(code **)*puVar6)(1);
          }
        }
LAB_008d9401:
        (**(code **)(*DAT_00ba7d98 + 0x14))
                  (*(undefined4 *)(puVar4 + 4),(uint)*(ushort *)(puVar4 + 8) << 2,4);
        break;
      case 0x17:
        FUN_008a9e20(*(int *)(puVar4 + 8),*(int *)(puVar4 + 8) + 0x10);
        (**(code **)(*DAT_00ba7d98 + 0x14))(*(undefined4 *)(puVar4 + 8),0x20,4);
        puVar6 = *(undefined4 **)(puVar4 + 4);
        if ((*(short *)(puVar6 + 1) != 0) &&
           (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
           *(short *)((int)puVar6 + 6) == 0)) {
          (**(code **)*puVar6)(1);
        }
        break;
      case 0x18:
        uStack_16c = *(undefined4 *)(puVar4 + 0xc);
        iVar5 = *(int *)(puVar4 + 4);
        uStack_170 = *(undefined4 *)(puVar4 + 8);
        uStack_168 = *(undefined4 *)(puVar4 + 0x10);
        uStack_164 = 0;
        FUN_008a6410();
        (**(code **)(**(int **)(iVar5 + 0x50) + 0x54))(&uStack_170);
        goto LAB_008d942b;
      case 0x19:
        uStack_1a0 = *(undefined4 *)(puVar4 + 8);
        iVar5 = *(int *)(puVar4 + 4);
        uStack_19c = *(undefined4 *)(puVar4 + 0xc);
        uStack_198 = *(undefined4 *)(puVar4 + 0x10);
        uStack_194 = 0;
        FUN_008a6410();
        (**(code **)(**(int **)(iVar5 + 0x50) + 0x58))(&uStack_1a0);
        goto LAB_008d9352;
      case 0x1a:
        uStack_18c = *(undefined4 *)(puVar4 + 0xc);
        iVar5 = *(int *)(puVar4 + 4);
        uStack_190 = *(undefined4 *)(puVar4 + 8);
        uStack_188 = *(undefined4 *)(puVar4 + 0x10);
        uStack_184 = 0;
        FUN_008a6410();
        (**(code **)(**(int **)(iVar5 + 0x50) + 0x5c))(&uStack_190);
        goto LAB_008d942b;
      case 0x1b:
        iVar5 = *(int *)(puVar4 + 8);
        iVar3 = *(int *)(puVar4 + 4);
        iStack_1a4 = iVar5 + 0x10;
        FUN_008a6410();
        (**(code **)(**(int **)(iVar3 + 0x50) + 0x60))(iStack_1a4,iVar5);
        (**(code **)(*DAT_00ba7d98 + 0x14))(*(undefined4 *)(puVar4 + 8),0x20,4);
        puVar6 = *(undefined4 **)(puVar4 + 4);
        if ((*(short *)(puVar6 + 1) != 0) &&
           (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
           *(short *)((int)puVar6 + 6) == 0)) {
          (**(code **)*puVar6)(1);
        }
        break;
      case 0x1c:
        uStack_17c = *(undefined4 *)(puVar4 + 0xc);
        iVar5 = *(int *)(puVar4 + 4);
        uStack_180 = *(undefined4 *)(puVar4 + 8);
        uStack_178 = *(undefined4 *)(puVar4 + 0x10);
        uStack_174 = 0;
        FUN_008a6410();
        (**(code **)(**(int **)(iVar5 + 0x50) + 100))(&uStack_180);
        goto LAB_008d942b;
      case 0x1f:
        FUN_008998a0(*(undefined4 *)(puVar4 + 4));
        (**(code **)(*DAT_00ba7d98 + 0x14))(*(undefined4 *)(puVar4 + 4),0x20,4);
        break;
      case 0x20:
        FUN_008a6410();
LAB_008d9352:
        puVar6 = *(undefined4 **)(puVar4 + 4);
        if ((*(short *)(puVar6 + 1) != 0) &&
           (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
           *(short *)((int)puVar6 + 6) == 0)) {
          (**(code **)*puVar6)(1);
        }
        break;
      case 0x21:
        if (*(int *)(*(int *)(puVar4 + 4) + 8) == in_ECX[3]) {
          FUN_008a6440();
        }
LAB_008d938c:
        puVar6 = *(undefined4 **)(puVar4 + 4);
        if ((*(short *)(puVar6 + 1) != 0) &&
           (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
           *(short *)((int)puVar6 + 6) == 0)) {
          (**(code **)*puVar6)(1);
        }
        break;
      case 0x22:
        (**(code **)(**(int **)(puVar4 + 4) + 8))(*(undefined4 *)(puVar4 + 8));
LAB_008d942b:
        puVar6 = *(undefined4 **)(puVar4 + 4);
LAB_008d942e:
        if ((*(short *)(puVar6 + 1) != 0) &&
           (*(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1,
           *(short *)((int)puVar6 + 6) == 0)) {
          (**(code **)*puVar6)(1);
        }
      }
      if (in_ECX[1] != 0) {
        FUN_008d8bf0();
      }
      local_1b4 = local_1b4 + 1;
    } while (local_1b4 < local_15c);
  }
  iVar5 = *in_ECX;
  local_15c = in_ECX[1];
  *in_ECX = local_160;
  uVar2 = in_ECX[2];
  in_ECX[2] = local_158;
  in_ECX[1] = 0;
  *(int *)(in_ECX[3] + 0x98) = *(int *)(in_ECX[3] + 0x98) + -1;
  if (-1 < (int)uVar2) {
    local_160 = iVar5;
    local_158 = uVar2;
    FUN_008a75d0(iVar5,(uVar2 & 0x3fffffff) * 0x14,0x14);
  }
  return;
}



void FUN_008d9540(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 4) == '\x02') {
    iVar1 = *(char *)(iVar1 + 5) + iVar1;
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x10) + iVar1) + 0x20))
              ((int)*(char *)(param_1[1] + 5) + param_1[1]);
  }
  iVar1 = param_1[1];
  if (*(char *)(iVar1 + 4) == '\x02') {
    iVar1 = *(char *)(iVar1 + 5) + iVar1;
                    /* WARNING: Could not recover jumptable at 0x008d958d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x10) + iVar1) + 0x20))();
    return;
  }
  return;
}



void FUN_008d95a0(int *param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5
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
    *puVar3 = "TtRayCstCchSim";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = _tls_index;
  *(undefined4 **)(in_ECX + 4) = param_2;
  *(undefined4 *)(in_ECX + 0xc) = param_5;
  if (param_3 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_3 + 0x14;
  }
  *(int *)(in_ECX + 8) = iVar5;
  if (*(char *)(param_2 + 8) == '\0') {
    *(undefined4 *)(in_ECX + 0x34) = 0;
  }
  else if (param_3 == 0) {
    *(undefined4 *)(in_ECX + 0x34) = 0;
  }
  else {
    *(int *)(in_ECX + 0x34) = param_3 + 0x10;
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



float10 FUN_008d96b0(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
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
  char *pcVar13;
  int in_ECX;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int *piStack_24;
  int iStack_20;
  undefined1 local_19;
  int local_18;
  int local_14;
  
  piVar14 = (int *)(*(char *)(param_1 + 5) + param_1);
  local_18 = *piVar14;
  if (local_18 != 0) {
    local_14 = param_2 * 0x30;
    pcVar13 = (char *)(**(code **)**(undefined4 **)(in_ECX + 8))
                                (&local_19,*(int *)(in_ECX + 4) + local_14,piVar14);
    if (*pcVar13 == '\0') {
      return (float10)*(float *)(*(int *)(in_ECX + 0xc) + 0x14);
    }
    pfVar3 = (float *)piVar14[2];
    fVar4 = pfVar3[8];
    fVar5 = pfVar3[9];
    fVar6 = pfVar3[10];
    pfVar1 = (float *)(*(int *)(in_ECX + 4) + iStack_20);
    fVar7 = pfVar3[4];
    fVar8 = pfVar3[5];
    fVar9 = pfVar3[6];
    fVar15 = *pfVar1 - pfVar3[0xc];
    fVar16 = pfVar1[1] - pfVar3[0xd];
    fVar17 = pfVar1[2] - pfVar3[0xe];
    iVar2 = *(int *)(in_ECX + 4) + iStack_20;
    *(float *)(in_ECX + 0x10) = *pfVar3 * fVar15 + pfVar3[1] * fVar16 + pfVar3[2] * fVar17;
    *(float *)(in_ECX + 0x14) = fVar7 * fVar15 + fVar8 * fVar16 + fVar9 * fVar17;
    *(float *)(in_ECX + 0x18) = fVar4 * fVar15 + fVar5 * fVar16 + fVar6 * fVar17;
    *(float *)(in_ECX + 0x1c) = fVar4 * fVar15 + fVar5 * fVar16 + fVar6 * fVar17;
    fVar4 = pfVar3[8];
    fVar5 = pfVar3[9];
    fVar6 = pfVar3[10];
    fVar7 = pfVar3[4];
    fVar8 = pfVar3[5];
    fVar9 = pfVar3[6];
    fVar15 = *(float *)(iVar2 + 0x10) - pfVar3[0xc];
    fVar16 = *(float *)(iVar2 + 0x14) - pfVar3[0xd];
    fVar17 = *(float *)(iVar2 + 0x18) - pfVar3[0xe];
    *(float *)(in_ECX + 0x20) = *pfVar3 * fVar15 + pfVar3[1] * fVar16 + pfVar3[2] * fVar17;
    *(float *)(in_ECX + 0x24) = fVar7 * fVar15 + fVar8 * fVar16 + fVar9 * fVar17;
    *(float *)(in_ECX + 0x28) = fVar4 * fVar15 + fVar5 * fVar16 + fVar6 * fVar17;
    *(float *)(in_ECX + 0x2c) = fVar4 * fVar15 + fVar5 * fVar16 + fVar6 * fVar17;
    *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(iVar2 + 0x24);
    pcVar13 = (char *)(**(code **)(*piStack_24 + 0x14))
                                (&stack0xffffffdb,in_ECX + 0x10,*(undefined4 *)(in_ECX + 0xc));
    if (*pcVar13 == '\0') {
      return (float10)*(float *)(*(int *)(in_ECX + 0xc) + 0x14);
    }
    *(int **)(*(int *)(in_ECX + 0xc) + 0x20) = piVar14;
    pfVar1 = *(float **)(in_ECX + 0xc);
    fVar4 = *pfVar1;
    fVar5 = pfVar1[1];
    fVar6 = pfVar1[2];
    fVar7 = pfVar3[9];
    fVar8 = pfVar3[10];
    fVar9 = pfVar3[0xb];
    fVar15 = pfVar3[5];
    fVar16 = pfVar3[6];
    fVar17 = pfVar3[7];
    fVar10 = pfVar3[1];
    fVar11 = pfVar3[2];
    fVar12 = pfVar3[3];
    *pfVar1 = *pfVar3 * fVar4 + pfVar3[4] * fVar5 + pfVar3[8] * fVar6;
    pfVar1[1] = fVar10 * fVar4 + fVar15 * fVar5 + fVar7 * fVar6;
    pfVar1[2] = fVar11 * fVar4 + fVar16 * fVar5 + fVar8 * fVar6;
    pfVar1[3] = fVar12 * fVar4 + fVar17 * fVar5 + fVar9 * fVar6;
  }
  return (float10)*(float *)(*(int *)(in_ECX + 0xc) + 0x14);
}



void FUN_008d9870(float *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *(float *)(in_ECX + 0x10) = *param_1;
  *(float *)(in_ECX + 0x14) = fVar1;
  *(float *)(in_ECX + 0x18) = fVar2;
  *(float *)(in_ECX + 0x1c) = fVar3;
  *(float *)(in_ECX + 0x24) =
       SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  *(undefined4 *)(in_ECX + 8) = param_2;
  return;
}



void FUN_008d98e0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9a274;
  if (in_ECX[4] != 0) {
    FUN_008bc730();
  }
  if (in_ECX[5] != 0) {
    FUN_008bc730();
  }
  puVar1 = (undefined4 *)in_ECX[3];
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008d9930(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9a274;
  if (in_ECX[4] != 0) {
    FUN_008bc730();
  }
  if (in_ECX[5] != 0) {
    FUN_008bc730();
  }
  puVar1 = (undefined4 *)in_ECX[3];
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



void FUN_008d99a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 int param_5)

{
  short *psVar1;
  undefined4 *in_ECX;
  
  in_ECX[3] = param_3;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9a274;
  in_ECX[2] = 0;
  *(undefined1 *)(in_ECX + 6) = param_4;
  *(undefined1 *)((int)in_ECX + 0x19) = 0;
  in_ECX[5] = param_2;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[4] = param_1;
  if (param_5 == 1) {
    FUN_008bc720();
    if (in_ECX[5] != 0) {
      FUN_008bc720();
    }
    if (*(short *)(in_ECX[3] + 4) != 0) {
      psVar1 = (short *)(in_ECX[3] + 6);
      *psVar1 = *psVar1 + 1;
    }
  }
  return;
}



void FUN_008d9a10(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x18) = param_1;
  if (*(int *)(in_ECX + 0x24) != 0) {
    *(undefined1 *)(*(int *)(in_ECX + 0x24) + 0x10) = param_1;
  }
  return;
}



void FUN_008d9a50(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  uint *puVar4;
  
  iVar3 = 2;
  puVar4 = (uint *)(in_ECX + 0x10);
  do {
    if (((*puVar4 == 0) && (uVar2 = *(uint *)(in_ECX + 0x14) ^ *(uint *)(in_ECX + 0x10), uVar2 != 0)
        ) && (iVar1 = *(int *)(uVar2 + 8), iVar1 != 0)) {
      *puVar4 = *(uint *)(iVar1 + 0x34);
      FUN_008bc720();
    }
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



longlong FUN_008d9b80(int param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  int iVar9;
  undefined4 extraout_EDX;
  uint uVar10;
  int unaff_FS_OFFSET;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtSimulate";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  *(float *)(in_ECX + 8) = param_3;
  fVar5 = param_2 + *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x10) = fVar5;
  if (*(float *)(param_1 + 0x18) < fVar5) {
    iVar2 = *(int *)(iVar1 + iVar6 * 4);
    do {
      if ((ABS(*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x18)) < param_3 * 0.01) &&
         (0.1 < param_2 / param_3)) {
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x18);
      }
      iVar7 = FUN_008992b0();
      iVar9 = *(int *)(iVar2 + 0x19c);
      if (*(int *)(iVar2 + 0x19c) == 0) {
        iVar9 = DAT_00ba7d9c;
      }
      if ((*(int *)(iVar9 + 0x2c) - *(int *)(iVar9 + 0x20)) + -0x10 < iVar7) {
        iVar9 = *(int *)(DAT_00ba7d98 + 0x28) + *(int *)(DAT_00ba7d98 + 0x14);
        if (iVar9 < *(int *)(DAT_00ba7d98 + 8)) {
          iVar9 = *(int *)(DAT_00ba7d98 + 8) - iVar9;
        }
        else {
          iVar9 = 0;
        }
        if (iVar9 < iVar7) {
          iVar1 = *(int *)(iVar1 + iVar6 * 4);
          *(undefined4 *)(DAT_00ba7d98 + 4) = 1;
          uVar10 = *(uint *)(iVar1 + 0x1a4);
          if (uVar10 < *(uint *)(iVar1 + 0x1a8)) {
            puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
            *puVar3 = &DAT_00a9610c;
            uVar4 = rdtsc();
            uVar10 = (uint)((ulonglong)uVar4 >> 0x20);
            puVar3[1] = (int)uVar4;
            *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
          }
          return CONCAT44(uVar10,1);
        }
      }
      local_c = param_3 + *(float *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
      *(float *)(param_1 + 0x18) = local_c;
      local_10 = *(float *)(param_1 + 0x14);
      local_8 = local_c - local_10;
      if (local_8 == 0.0) {
        local_4 = 0.0;
      }
      else {
        local_4 = 1.0 / local_8;
      }
      (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))(param_1,&local_10);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
      FUN_008d6e40(param_1,&local_10);
      FUN_008d7920(param_1,&local_10);
      if (*(int *)(DAT_00ba7d98 + 4) == 1) {
        iVar1 = *(int *)(iVar1 + iVar6 * 4);
        uVar8 = extraout_EDX;
        if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
          puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
          *puVar3 = &DAT_00a9610c;
          uVar4 = rdtsc();
          uVar8 = (undefined4)uVar4;
          puVar3[1] = uVar8;
          *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
        }
        return CONCAT44(uVar8,2);
      }
    } while (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  iVar2 = *(int *)(iVar1 + iVar6 * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtPostSimulateCb";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  FUN_008d2c90(*(float *)(param_1 + 0x10) - param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_008dcd60(param_1,&local_10);
  iVar2 = *(int *)(iVar1 + iVar6 * 4);
  uVar10 = *(uint *)(iVar2 + 0x1a4);
  if (uVar10 < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    uVar10 = (uint)((ulonglong)uVar4 >> 0x20);
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar1 = *(int *)(iVar1 + iVar6 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    uVar10 = (uint)uVar4;
    puVar3[1] = uVar10;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return (ulonglong)uVar10 << 0x20;
}



void FUN_008d9ec0(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9a2a0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0x80000000;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0x80000000;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0x80000000;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0x80000000;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  return;
}



void FUN_008d9f00(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  iVar1 = in_ECX[3];
  iVar3 = 0;
  *in_ECX = &PTR_FUN_00a9a2a0;
  if (0 < iVar1) {
    do {
      FUN_008bc730();
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar1 = in_ECX[0xc];
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      FUN_008bc730();
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar1 = in_ECX[6];
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[5] + iVar3 * 4);
      if ((*(short *)(puVar2 + 1) != 0) &&
         (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
         *(short *)((int)puVar2 + 6) == 0)) {
        (**(code **)*puVar2)(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar1 = in_ECX[9];
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[8] + iVar3 * 4);
      if (((puVar2 != (undefined4 *)0x0) && (*(short *)(puVar2 + 1) != 0)) &&
         (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
         *(short *)((int)puVar2 + 6) == 0)) {
        (**(code **)*puVar2)(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  if (-1 < (int)in_ECX[0xd]) {
    FUN_008a75d0(in_ECX[0xb],in_ECX[0xd] << 2,0x14);
  }
  if (-1 < (int)in_ECX[10]) {
    FUN_008a75d0(in_ECX[8],in_ECX[10] << 2,0x14);
  }
  if (-1 < (int)in_ECX[7]) {
    FUN_008a75d0(in_ECX[5],in_ECX[7] << 2,0x14);
  }
  if (-1 < (int)in_ECX[4]) {
    FUN_008a75d0(in_ECX[2],in_ECX[4] << 2,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008da080(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_008bc720();
    if (*(uint *)(in_ECX + 0xc) == (*(uint *)(in_ECX + 0x10) & 0x3fffffff)) {
      FUN_008a6ee0((int *)(in_ECX + 8),4);
    }
    *(int *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0xc) * 4) = param_1;
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
  }
  return;
}



void FUN_008da0c0(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_008bc720();
    if (*(uint *)(in_ECX + 0x30) == (*(uint *)(in_ECX + 0x34) & 0x3fffffff)) {
      FUN_008a6ee0((int *)(in_ECX + 0x2c),4);
    }
    *(int *)(*(int *)(in_ECX + 0x2c) + *(int *)(in_ECX + 0x30) * 4) = param_1;
    *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + 1;
  }
  return;
}



void FUN_008da100(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    if (*(short *)(param_1 + 4) != 0) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
    }
    if (*(uint *)(in_ECX + 0x18) == (*(uint *)(in_ECX + 0x1c) & 0x3fffffff)) {
      FUN_008a6ee0((int *)(in_ECX + 0x14),4);
    }
    *(int *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 0x18) * 4) = param_1;
    *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
  }
  return;
}



void FUN_008da150(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    if (*(short *)(param_1 + 4) != 0) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
    }
    if (*(uint *)(in_ECX + 0x24) == (*(uint *)(in_ECX + 0x28) & 0x3fffffff)) {
      FUN_008a6ee0((int *)(in_ECX + 0x20),4);
    }
    *(int *)(*(int *)(in_ECX + 0x20) + *(int *)(in_ECX + 0x24) * 4) = param_1;
    *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1;
  }
  return;
}



void FUN_008da1a0(byte param_1)

{
  FUN_008d9f00();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008da1d0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = &PTR_LAB_00a96b64;
  in_ECX[3] = &PTR_LAB_00a96b70;
  in_ECX[4] = &PTR_LAB_00a96b68;
  in_ECX[5] = &PTR_LAB_00a96b64;
  in_ECX[4] = &PTR_LAB_00a95c48;
  in_ECX[3] = &PTR_LAB_00a95c3c;
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008da280(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(in_ECX + 0x18c) = 1;
  *(undefined4 *)(in_ECX + 0xe90) = 1;
  iVar2 = 0;
  iVar3 = in_ECX + 0xe94;
  do {
    iVar1 = 0;
    do {
      if (*(int *)(in_ECX + 0x1c10) != 0) {
        *(undefined1 *)(iVar2 + 2 + *(int *)(in_ECX + 0x1c10)) = 100;
        *(undefined1 *)(*(int *)(in_ECX + 0x1c14) + 2 + iVar2) = 100;
        *(undefined1 *)(*(int *)(in_ECX + 0x1c18) + 2 + iVar2) = 100;
        *(undefined1 *)(*(int *)(in_ECX + 0x1c1c) + 2 + iVar2) = 100;
      }
      *(undefined1 *)(iVar3 + -0xd04 + iVar1) = 0;
      *(undefined1 *)(iVar3 + iVar1) = 0;
      *(undefined1 *)(iVar3 + -0x904 + iVar1) = 0;
      *(undefined1 *)(iVar3 + 0x400 + iVar1) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 3;
    } while (iVar1 < 0x20);
    iVar3 = iVar3 + 0x20;
  } while (iVar2 < 0xc00);
  *(code **)(in_ECX + 0x990) = FUN_008e0970;
  *(code **)(in_ECX + 0x994) = FUN_00918000;
  *(code **)(in_ECX + 0x998) = FUN_00918000;
  *(code **)(in_ECX + 0x99c) = FUN_00918000;
  *(undefined1 *)(in_ECX + 0x9a0) = 0;
  *(undefined1 *)(in_ECX + 0x9a1) = 1;
  *(undefined1 **)(in_ECX + 0x1694) = &LAB_008da260;
  *(code **)(in_ECX + 0x1698) = FUN_00918000;
  *(undefined4 *)(in_ECX + 0x169c) = 0;
  *(undefined4 *)(in_ECX + 0x16a0) = 0;
  *(undefined4 *)(in_ECX + 0x16a4) = 0;
  *(undefined4 *)(in_ECX + 0x16a8) = 0;
  *(undefined4 *)(in_ECX + 0x16ac) = 0;
  *(undefined4 *)(in_ECX + 0x16b8) = 0;
  *(undefined4 *)(in_ECX + 0x16b0) = 0;
  *(undefined4 *)(in_ECX + 0x16b4) = 0;
  *(undefined1 **)(in_ECX + 0x16bc) = &LAB_008da270;
  *(undefined4 *)(in_ECX + 0x16c4) = 0;
  FUN_00925690();
  *(undefined1 *)(in_ECX + 0x1bf4) = 0;
  if (*(int *)(in_ECX + 0x1c18) != 0) {
    iVar3 = 0;
    do {
      iVar2 = 0x20;
      do {
        *(undefined1 *)(iVar3 + 2 + *(int *)(in_ECX + 0x1c18)) = 100;
        *(undefined1 *)(iVar3 + 2 + *(int *)(in_ECX + 0x1c1c)) = 100;
        iVar3 = iVar3 + 3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    } while (iVar3 < 0xc00);
  }
  return;
}



void FUN_008da3e0(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x1c00) = param_1;
  return;
}



void FUN_008da3f0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_2 * 0x20 + 0xc + in_ECX);
  piVar2 = (int *)(in_ECX + 0xc + param_2 * 4);
  iVar3 = 8;
  do {
    if (*(short *)(param_1 + 4) != 0) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
    }
    puVar1 = (undefined4 *)*piVar2;
    if ((*(short *)(puVar1 + 1) != 0) &&
       (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
       *(short *)((int)puVar1 + 6) == 0)) {
      (**(code **)*puVar1)(1);
    }
    *piVar2 = param_1;
    if (*(short *)(param_1 + 4) != 0) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
    }
    puVar1 = (undefined4 *)*piVar4;
    if ((*(short *)(puVar1 + 1) != 0) &&
       (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
       *(short *)((int)puVar1 + 6) == 0)) {
      (**(code **)*puVar1)(1);
    }
    *piVar4 = param_1;
    piVar4 = piVar4 + 1;
    piVar2 = piVar2 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



void FUN_008da510(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c10) != 0) {
    (**(code **)(*DAT_00ba7d98 + 4))(*(int *)(in_ECX + 0x1c10));
    (**(code **)(*DAT_00ba7d98 + 4))(*(undefined4 *)(in_ECX + 0x1c14));
    (**(code **)(*DAT_00ba7d98 + 4))(*(undefined4 *)(in_ECX + 0x1c18));
    (**(code **)(*DAT_00ba7d98 + 4))(*(undefined4 *)(in_ECX + 0x1c1c));
    *(undefined4 *)(in_ECX + 0x1c10) = 0;
    *(undefined4 *)(in_ECX + 0x1c14) = 0;
    *(undefined4 *)(in_ECX + 0x1c18) = 0;
    *(undefined4 *)(in_ECX + 0x1c1c) = 0;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008da580(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,int param_8)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_424;
  char *local_420;
  int local_41c;
  int local_418;
  int local_410;
  int local_408;
  undefined1 local_404 [1024];
  undefined4 local_4;
  
  local_4 = DAT_00b30aac;
  *(undefined1 *)(in_ECX + 0x1bf4) = 1;
  iVar7 = 0;
  if (0 < *(int *)(in_ECX + 0x1c08)) {
    do {
      iVar9 = *(int *)(*(int *)(in_ECX + 0x1c04) + 4 + iVar7 * 8);
      piVar1 = (int *)(*(int *)(in_ECX + 0x1c04) + iVar7 * 8);
      if (iVar9 == param_3) {
LAB_008da5e6:
        iVar8 = *piVar1;
        iVar9 = param_4;
LAB_008da62f:
        FUN_008da580(param_1,param_2,iVar8,iVar9,param_5,param_6,param_7,param_8 + 1);
      }
      else if (iVar9 == param_4) {
        if (iVar9 == param_3) goto LAB_008da5e6;
        iVar9 = *piVar1;
        iVar8 = param_3;
        goto LAB_008da62f;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x1c08));
  }
  local_418 = param_4 + 1;
  local_410 = param_4;
  local_408 = param_3 + 1;
  iVar7 = param_3;
  if (param_3 == -1) {
    param_8 = param_8 + 1;
    iVar7 = 1;
    local_408 = 0x20;
  }
  local_424 = param_8;
  if (param_4 == -1) {
    local_424 = param_8 + 1;
    local_410 = 1;
    local_418 = 0x20;
  }
  if (iVar7 < local_408) {
    local_41c = iVar7 * 0x20 + param_1;
    pcVar6 = (char *)((iVar7 * 0x20 + local_410) * 3 + 1 + param_7);
    local_408 = local_408 - iVar7;
    iVar7 = local_410;
    local_420 = pcVar6;
    do {
      for (; iVar7 < local_418; iVar7 = iVar7 + 1) {
        *(undefined1 *)(local_41c + iVar7) = (undefined1)param_2;
        if (param_7 != 0) {
          if ((*(char *)(in_ECX + 0x1c00) != '\0') && (pcVar6[1] < local_424)) {
            uVar2 = FUN_0090ba40((int)pcVar6[-1]);
            uVar3 = FUN_0090ba40((int)*pcVar6);
            uVar4 = FUN_0090ba40(param_3);
            uVar5 = FUN_0090ba40(param_4);
            FUN_008b1730(local_404,1000,
                         "Agent handling types <%s-%s> would override more specialized agent <%s-%s>\nMaybe the order of registering your collision agent is wrong, make sure you register your alternate type agents first"
                         ,uVar4,uVar5,uVar2,uVar3);
          }
          pcVar6[-1] = (char)param_5;
          pcVar6[1] = (char)local_424;
          *pcVar6 = (char)param_6;
        }
        pcVar6 = pcVar6 + 3;
      }
      pcVar6 = local_420 + 0x60;
      local_41c = local_41c + 0x20;
      local_408 = local_408 + -1;
      iVar7 = local_410;
      local_420 = pcVar6;
    } while (local_408 != 0);
  }
  return;
}



void FUN_008da800(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  puVar1 = (uint *)(in_ECX + 0x10c + param_1 * 4);
  *puVar1 = *puVar1 | *(uint *)(in_ECX + 0x10c + param_2 * 4);
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x1c08)) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x1c04) + 4 + iVar3 * 8);
      if (iVar2 == param_1) {
        FUN_008da800(*(undefined4 *)(*(int *)(in_ECX + 0x1c04) + iVar3 * 8),iVar2,param_3 + 1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x1c08));
  }
  return;
}



void FUN_008da870(float *param_1)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  
  *(float *)(in_ECX + 0x1c24) = param_1[2];
  *(float *)(in_ECX + 0x1c20) = param_1[3];
  fVar1 = param_1[2];
  pfVar5 = (float *)(in_ECX + 0x1a50);
  fVar2 = *param_1;
  *pfVar5 = param_1[1];
  *(float *)(in_ECX + 0x1a54) = param_1[1];
  fVar1 = fVar1 * fVar1 * fVar2 * 0.5;
  *(float *)(in_ECX + 0x1a5c) = param_1[1];
  if (*(char *)((int)param_1 + 0x19) != '\0') {
    *(float *)(in_ECX + 0x1a5c) = fVar1 * -2.0;
  }
  *(float *)(in_ECX + 0x1a58) = param_1[1];
  if (*(char *)((int)param_1 + 0x1a) != '\0') {
    *(float *)(in_ECX + 0x1a58) = fVar1 * -1.0;
  }
  *(undefined4 *)(in_ECX + 0x1a80) = 0x7f7fffff;
  *(undefined1 *)(in_ECX + 0x1a60) = 0;
  *(undefined2 *)(in_ECX + 0x1a88) = *(undefined2 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 0x1a64) = 0xe02d78ec;
  *(undefined4 *)(in_ECX + 0x1a68) = 0xe02d78ec;
  *(undefined4 *)(in_ECX + 0x1a74) = 0xdf0ac723;
  *(undefined4 *)(in_ECX + 0x1a78) = 0xdf0ac723;
  *(undefined4 *)(in_ECX + 0x1a6c) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x1a70) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x1a84) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x1a7c) = 0x5e8ac723;
  pfVar4 = pfVar5;
  pfVar6 = (float *)(in_ECX + 0x1b40);
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar6 = pfVar6 + 1;
  }
  pfVar4 = pfVar5;
  pfVar6 = (float *)(in_ECX + 0x1a8c);
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar6 = pfVar6 + 1;
  }
  pfVar4 = pfVar5;
  pfVar6 = (float *)(in_ECX + 0x1ac8);
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar6 = pfVar6 + 1;
  }
  pfVar4 = (float *)(in_ECX + 0x1b04);
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar4 = pfVar4 + 1;
  }
  *(float *)(in_ECX + 0x1b4c) = param_1[1];
  *(float *)(in_ECX + 0x1b44) = param_1[1];
  *(float *)(in_ECX + 0x1b48) = param_1[1];
  if (*(char *)(param_1 + 6) != '\0') {
    *(undefined4 *)(in_ECX + 0x1aa0) = 0xbf19999a;
    *(undefined4 *)(in_ECX + 0x1aa4) = 0xbe4ccccc;
    *(undefined4 *)(in_ECX + 0x1ab0) = 0xbe99999a;
    *(undefined4 *)(in_ECX + 0x1ab4) = 0xbe0f5c28;
    *(undefined4 *)(in_ECX + 0x1ab8) = 0x3d2c0831;
    *(undefined4 *)(in_ECX + 0x1abc) = 0x3e4ccccc;
    *(float *)(in_ECX + 0x1aa8) = 5.0 / param_1[3];
    *(float *)(in_ECX + 0x1aac) = 0.005 / param_1[3];
    *(float *)(in_ECX + 0x1ac0) = (-0.19999999 / param_1[3]) * -2.0;
    *(undefined2 *)(in_ECX + 0x1ac4) = *(undefined2 *)((int)param_1 + 0x12);
    *(undefined1 *)(in_ECX + 0x1a9c) = 1;
    if (*(char *)(param_1 + 6) != '\0') {
      *(undefined4 *)(in_ECX + 0x1adc) = 0xbf000000;
      *(undefined4 *)(in_ECX + 0x1ae0) = 0xbe2aaaab;
      *(undefined4 *)(in_ECX + 0x1aec) = 0xbe800000;
      *(undefined4 *)(in_ECX + 0x1af0) = 0xbdeeeeef;
      *(undefined4 *)(in_ECX + 0x1af4) = 0x3d0f5c29;
      *(undefined4 *)(in_ECX + 0x1af8) = 0x3e2aaaab;
      *(float *)(in_ECX + 0x1ae4) = 5.0 / param_1[3];
      *(float *)(in_ECX + 0x1ae8) = 0.005 / param_1[3];
      *(float *)(in_ECX + 0x1afc) = (-0.16666667 / param_1[3]) * -1.0;
      *(undefined2 *)(in_ECX + 0x1b00) = *(undefined2 *)(param_1 + 5);
      *(undefined1 *)(in_ECX + 0x1ad8) = 1;
    }
  }
  *(float *)(in_ECX + 0x1b04) = param_1[1];
  if (*(char *)(param_1 + 6) != '\0') {
    *(undefined4 *)(in_ECX + 0x1b18) = 0xbecccccd;
    *(undefined4 *)(in_ECX + 0x1b1c) = 0xbd0158ed;
    *(undefined4 *)(in_ECX + 0x1b28) = 0xbe4ccccd;
    *(undefined4 *)(in_ECX + 0x1b2c) = 0xbcb51618;
    *(undefined4 *)(in_ECX + 0x1b30) = 0x3bd94db8;
    *(undefined4 *)(in_ECX + 0x1b34) = 0x3d0158ed;
    *(float *)(in_ECX + 0x1b20) = 5.0 / param_1[3];
    *(float *)(in_ECX + 0x1b24) = 0.005 / param_1[3];
    *(float *)(in_ECX + 0x1b38) = (-0.031578947 / param_1[3]) * -1.0;
    *(undefined2 *)(in_ECX + 0x1b3c) = *(undefined2 *)((int)param_1 + 0x16);
    *(undefined1 *)(in_ECX + 0x1b14) = 1;
  }
  puVar7 = (undefined4 *)(in_ECX + 0x19d4);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0x1010101;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)(in_ECX + 0x19df) = 1;
  *(undefined1 *)(in_ECX + 0x19e7) = 1;
  *(undefined1 *)(in_ECX + 0x19ed) = 1;
  *(undefined1 *)(in_ECX + 0x19ee) = 1;
  *(undefined1 *)(in_ECX + 0x19ef) = 1;
  *(undefined1 *)(in_ECX + 0x19f0) = 1;
  *(undefined1 *)(in_ECX + 0x19f1) = 1;
  *(undefined1 *)(in_ECX + 0x19f7) = 1;
  *(undefined1 *)(in_ECX + 0x19f8) = 1;
  *(undefined1 *)(in_ECX + 0x19ff) = 1;
  *(undefined1 *)(in_ECX + 0x19dd) = 0;
  *(undefined1 *)(in_ECX + 0x19de) = 0;
  *(undefined1 *)(in_ECX + 0x19e0) = 3;
  *(undefined1 *)(in_ECX + 0x19e1) = 4;
  *(undefined1 *)(in_ECX + 0x19e2) = 3;
  *(undefined1 *)(in_ECX + 0x19e5) = 0;
  *(undefined1 *)(in_ECX + 0x19e6) = 0;
  *(undefined1 *)(in_ECX + 0x19e8) = 2;
  *(undefined1 *)(in_ECX + 0x19e9) = 2;
  *(undefined1 *)(in_ECX + 0x19ea) = 2;
  *(undefined1 *)(in_ECX + 0x19f2) = 2;
  *(undefined1 *)(in_ECX + 0x19f5) = 3;
  *(undefined1 *)(in_ECX + 0x19f6) = 2;
  *(undefined1 *)(in_ECX + 0x19f9) = 2;
  *(undefined1 *)(in_ECX + 0x19fa) = 2;
  *(undefined1 *)(in_ECX + 0x19fd) = 4;
  *(undefined1 *)(in_ECX + 0x19fe) = 2;
  *(undefined1 *)(in_ECX + 0x1a00) = 2;
  *(undefined1 *)(in_ECX + 0x1a01) = 2;
  *(undefined1 *)(in_ECX + 0x1a02) = 2;
  *(undefined1 *)(in_ECX + 0x1a05) = 3;
  *(undefined1 *)(in_ECX + 0x1a06) = 2;
  *(undefined1 *)(in_ECX + 0x1a07) = 2;
  *(undefined1 *)(in_ECX + 0x1a08) = 2;
  *(undefined1 *)(in_ECX + 0x1a09) = 2;
  *(undefined1 *)(in_ECX + 0x1a0a) = 2;
  return;
}



void FUN_008dac20(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  byte bVar4;
  undefined4 *in_ECX;
  int iVar5;
  int iVar6;
  
  in_ECX[2] = param_1;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9a3b8;
  puVar1 = (undefined1 *)((int)in_ECX + 0x9a1);
  iVar5 = 0x40;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x14;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar2 = in_ECX + 0x5ac;
  iVar5 = 0x10;
  do {
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    *(undefined1 *)((int)puVar2 + 0x11) = 0;
    puVar2 = puVar2 + 0xd;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  in_ECX[0x701] = 0;
  in_ECX[0x702] = 0;
  in_ECX[0x703] = 0x80000000;
  in_ECX[0x704] = 0;
  in_ECX[0x705] = 0;
  in_ECX[0x706] = 0;
  in_ECX[0x707] = 0;
  *(undefined1 *)(in_ECX + 0x6fd) = 0;
  *(undefined1 *)(in_ECX + 0x700) = 1;
  in_ECX[0x3a4] = 0;
  piVar3 = in_ECX + 3;
  iVar5 = 8;
  do {
    iVar6 = 8;
    do {
      *piVar3 = param_2;
      if ((param_2 != 0) && (*(short *)(param_2 + 4) != 0)) {
        *(short *)(param_2 + 6) = *(short *)(param_2 + 6) + 1;
      }
      piVar3 = piVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 0;
  piVar3 = in_ECX + 0x43;
  do {
    bVar4 = (byte)iVar5;
    iVar5 = iVar5 + 1;
    *piVar3 = 1 << (bVar4 & 0x1f);
    piVar3 = piVar3 + 1;
  } while (iVar5 < 0x20);
  FUN_008da280();
  in_ECX[0x6ff] = 0x80;
  in_ECX[0x6fe] = 0x200;
  *(undefined1 *)((int)in_ECX + 0x1bf5) = 0;
  return;
}



void FUN_008dad30(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  *in_ECX = &PTR_FUN_00a9a3b8;
  FUN_008da510();
  piVar3 = in_ECX + 3;
  iVar2 = 8;
  do {
    iVar4 = 8;
    do {
      puVar1 = (undefined4 *)*piVar3;
      if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
         (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
         *(short *)((int)puVar1 + 6) == 0)) {
        (**(code **)*puVar1)(1);
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (-1 < (int)in_ECX[0x703]) {
    FUN_008a75d0(in_ECX[0x701],in_ECX[0x703] << 3,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008dadd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)(in_ECX + 0x990 + *(int *)(in_ECX + 0x18c) * 0x14);
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[3] = param_1[3];
  puVar1[4] = param_1[4];
  FUN_008da580(in_ECX + 0xe94,1,param_2,param_3,param_2,param_3,*(undefined4 *)(in_ECX + 0x1c18),0);
  FUN_008da580(in_ECX + 400,*(undefined4 *)(in_ECX + 0x18c),param_2,param_3,param_2,param_3,
               *(undefined4 *)(in_ECX + 0x1c10),0);
  if (*(char *)((int)param_1 + 0x11) != '\0') {
    FUN_008da580(in_ECX + 0x1294,1,param_2,param_3,param_2,param_3,*(undefined4 *)(in_ECX + 0x1c1c),
                 0);
    FUN_008da580(in_ECX + 0x590,*(undefined4 *)(in_ECX + 0x18c),param_2,param_3,param_2,param_3,
                 *(undefined4 *)(in_ECX + 0x1c14),0);
  }
  *(int *)(in_ECX + 0x18c) = *(int *)(in_ECX + 0x18c) + 1;
  return;
}



void FUN_008daeb0(undefined4 *param_1,int param_2,int param_3)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_34 [11];
  char local_8;
  undefined4 local_4;
  
  *(undefined1 *)(in_ECX + 0x1bf5) = 1;
  *(undefined4 *)(in_ECX + 0x1bfc) = 0x80;
  *(undefined4 *)(in_ECX + 0x1bf8) = 0x200;
  puVar2 = param_1;
  puVar3 = local_34;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_4 = 0;
  if ((param_2 != param_3) && (*(char *)((int)param_1 + 0x2d) == '\0')) {
    local_4 = 2;
    puVar2 = local_34;
    puVar3 = (undefined4 *)(*(int *)(in_ECX + 0xe90) * 0x34 + 0x1694 + in_ECX);
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_008da580(in_ECX + 0xe94,*(undefined4 *)(in_ECX + 0xe90),param_3,param_2,param_3,param_2,
                 *(undefined4 *)(in_ECX + 0x1c18),0);
    if (local_8 != '\0') {
      FUN_008da580(in_ECX + 0x1294,*(undefined4 *)(in_ECX + 0xe90),param_2,param_3,param_2,param_3,
                   *(undefined4 *)(in_ECX + 0x1c1c),0);
    }
    *(int *)(in_ECX + 0xe90) = *(int *)(in_ECX + 0xe90) + 1;
    local_4 = 1;
  }
  puVar2 = local_34;
  puVar3 = (undefined4 *)(*(int *)(in_ECX + 0xe90) * 0x34 + 0x1694 + in_ECX);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_008da580(in_ECX + 0xe94,*(undefined4 *)(in_ECX + 0xe90),param_2,param_3,param_2,param_3,
               *(undefined4 *)(in_ECX + 0x1c18),0);
  if (local_8 != '\0') {
    FUN_008da580(in_ECX + 0x1294,*(undefined4 *)(in_ECX + 0xe90),param_2,param_3,param_2,param_3,
                 *(undefined4 *)(in_ECX + 0x1c1c),0);
  }
  *(int *)(in_ECX + 0xe90) = *(int *)(in_ECX + 0xe90) + 1;
  return;
}



void FUN_008db020(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x1c08)) {
    do {
      if ((*(int *)(*(int *)(in_ECX + 0x1c04) + iVar5 * 8) == param_1) &&
         (*(int *)(*(int *)(in_ECX + 0x1c04) + iVar5 * 8 + 4) == param_2)) {
        iVar3 = *(int *)(in_ECX + 0x1c08) + -1;
        *(int *)(in_ECX + 0x1c08) = iVar3;
        iVar4 = iVar5;
        if (iVar5 < iVar3) {
          do {
            puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x1c04) + iVar4 * 8);
            *puVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x1c04) + 8 + iVar4 * 8);
            puVar1[1] = puVar1[3];
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(in_ECX + 0x1c08));
        }
        iVar5 = iVar5 + -1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x1c08));
  }
  FUN_008da800(param_1,param_2,0);
  if (*(uint *)(in_ECX + 0x1c08) == (*(uint *)(in_ECX + 0x1c0c) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x1c04),8);
  }
  piVar2 = (int *)(*(int *)(in_ECX + 0x1c04) + *(int *)(in_ECX + 0x1c08) * 8);
  *(int *)(in_ECX + 0x1c08) = *(int *)(in_ECX + 0x1c08) + 1;
  *piVar2 = param_1;
  piVar2[1] = param_2;
  return;
}



void FUN_008db0f0(byte param_1)

{
  FUN_008dad30();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



undefined4 FUN_008db130(undefined4 param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float *local_28;
  undefined4 local_24;
  float local_20;
  int local_1c;
  undefined2 local_14;
  undefined2 local_12;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  iVar2 = *(int *)(iVar1 + 0x50);
  iVar3 = *(int *)(in_ECX + 0xc);
  iVar4 = *(int *)(iVar3 + 0x50);
  fVar5 = *param_4 - *(float *)(iVar4 + 0x60);
  fVar6 = param_4[1] - *(float *)(iVar4 + 100);
  fVar7 = param_4[2] - *(float *)(iVar4 + 0x68);
  fVar8 = *param_4 - *(float *)(iVar2 + 0x60);
  fVar9 = param_4[1] - *(float *)(iVar2 + 100);
  fVar10 = param_4[2] - *(float *)(iVar2 + 0x68);
  local_20 = (((*(float *)(iVar2 + 0xe0) * fVar9 - *(float *)(iVar2 + 0xe4) * fVar8) +
              *(float *)(iVar2 + 0xd8)) -
             ((*(float *)(iVar4 + 0xe0) * fVar6 - *(float *)(iVar4 + 0xe4) * fVar5) +
             *(float *)(iVar4 + 0xd8))) * param_4[6] +
             (((*(float *)(iVar2 + 0xe8) * fVar8 - *(float *)(iVar2 + 0xe0) * fVar10) +
              *(float *)(iVar2 + 0xd4)) -
             ((*(float *)(iVar4 + 0xe8) * fVar5 - *(float *)(iVar4 + 0xe0) * fVar7) +
             *(float *)(iVar4 + 0xd4))) * param_4[5] +
             (((*(float *)(iVar2 + 0xe4) * fVar10 - *(float *)(iVar2 + 0xe8) * fVar9) +
              *(float *)(iVar2 + 0xd0)) -
             ((*(float *)(iVar4 + 0xe4) * fVar7 - *(float *)(iVar4 + 0xe8) * fVar6) +
             *(float *)(iVar4 + 0xd0))) * param_4[4];
  local_34 = param_2;
  local_28 = param_4;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_12 = 0;
  local_38 = param_1;
  local_30 = 1;
  FUN_008dc800(*(undefined4 *)(in_ECX + 8),&local_38);
  if (*(int *)(iVar3 + 0x98) != 0) {
    FUN_008dbf80(iVar3,&local_38);
  }
  if (*(int *)(iVar1 + 0x98) != 0) {
    FUN_008dbf80(iVar1,&local_38);
  }
  if (local_1c == 0) {
    *(undefined2 *)(in_ECX + 0x14) = local_12;
    return 0;
  }
  return 0xffff;
}



undefined4
FUN_008db2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  int in_ECX;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  local_28 = param_1;
  local_24 = param_2;
  local_18 = param_4;
  *(undefined2 *)(param_7 + 4) = 0;
  *(undefined1 *)(param_7 + 6) = 0;
  *(undefined1 *)(param_7 + 7) = 1;
  local_10 = param_6;
  local_14 = param_7;
  local_20 = 0;
  local_c = 0;
  local_4 = param_5;
  FUN_008dc800(*(undefined4 *)(in_ECX + 8),&local_28);
  if (*(int *)(*(int *)(in_ECX + 0xc) + 0x98) != 0) {
    FUN_008dbf80(*(int *)(in_ECX + 0xc),&local_28);
  }
  if (*(int *)(*(int *)(in_ECX + 0x10) + 0x98) != 0) {
    FUN_008dbf80(*(int *)(in_ECX + 0x10),&local_28);
  }
  return local_c;
}



void FUN_008db350(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  short local_18 [2];
  int local_14;
  int local_10;
  int local_c;
  
  local_18[0] = (short)param_1;
  iVar1 = in_ECX[4];
  iVar2 = in_ECX[3];
  local_14 = 0;
  local_10 = iVar2;
  local_c = iVar1;
  if (local_18[0] != -1) {
    local_14 = (**(code **)(*in_ECX + 0x20))(param_1);
    if (local_14 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = local_14 + 8;
    }
  }
  FUN_008dc920(in_ECX[2],local_18);
  if (*(int *)(iVar2 + 0x98) != 0) {
    FUN_008dc0a0(iVar2,local_18);
  }
  if (*(int *)(iVar1 + 0x98) != 0) {
    FUN_008dc0a0(iVar1,local_18);
  }
  return;
}



void FUN_008db4e0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a9a3c4;
  in_ECX[2] = param_1;
  return;
}



undefined4
FUN_008db5c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  local_24 = param_2;
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = param_1;
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar3 = iVar1;
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  iVar3 = *(int *)(iVar3 + 0x10) + iVar3;
  iVar2 = *(int *)(param_2 + 0xc);
  while (iVar1 = iVar2, iVar1 != 0) {
    param_2 = iVar1;
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  iVar2 = *(int *)(param_2 + 0x10) + param_2;
  param_2._0_2_ =
       (undefined2)
       (int)ROUND(SQRT(*(float *)(*(int *)(param_2 + 0x10) + 0x5c + param_2) *
                       *(float *)(iVar3 + 0x5c)) * 256.0);
  *(undefined2 *)(param_7 + 4) = (undefined2)param_2;
  param_2._0_1_ =
       (undefined1)(int)ROUND(SQRT(*(float *)(iVar2 + 0x60) * *(float *)(iVar3 + 0x60)) * 128.0);
  *(undefined1 *)(param_7 + 6) = (undefined1)param_2;
  local_14 = param_7;
  local_28 = param_1;
  local_18 = param_4;
  local_10 = param_6;
  local_20 = 0;
  local_c = 0;
  local_4 = param_5;
  FUN_008dc800(*(undefined4 *)(in_ECX + 8),&local_28);
  if (*(int *)(iVar3 + 0x98) != 0) {
    FUN_008dbf80(iVar3,&local_28);
  }
  if (*(int *)(iVar2 + 0x98) != 0) {
    FUN_008dbf80(iVar2,&local_28);
  }
  return local_c;
}



uint FUN_008db6d0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  undefined4 *local_78;
  uint local_74;
  undefined4 *local_70;
  float local_6c;
  float local_68;
  int *local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float local_50;
  float fStack_4c;
  float fStack_48;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 *local_28;
  undefined4 *local_24;
  float local_20;
  int local_1c;
  int *local_18;
  undefined2 local_14;
  undefined2 local_12;
  
  if ((int)((uint)*(ushort *)(in_ECX + 3) + in_ECX[0x13]) < 0xff) {
    iVar6 = *(int *)(param_1 + 0xc);
    iVar7 = param_1;
    while (iVar5 = iVar6, iVar5 != 0) {
      iVar7 = iVar5;
      iVar6 = *(int *)(iVar5 + 0xc);
    }
    iVar7 = *(int *)(iVar7 + 0x10) + iVar7;
    iVar5 = *(int *)(param_2 + 0xc);
    iVar6 = param_2;
    while (iVar4 = iVar5, iVar4 != 0) {
      iVar6 = iVar4;
      iVar5 = *(int *)(iVar4 + 0xc);
    }
    iVar6 = *(int *)(iVar6 + 0x10) + iVar6;
    local_64 = in_ECX;
    if (in_ECX[0x13] == 0) {
      if (*(int *)(in_ECX[2] + 0xa0) == 0) {
        FUN_008cb450(in_ECX[2],in_ECX + 0x1d,1);
      }
      else {
        FUN_008a7720();
        FUN_008cb450(in_ECX[2],in_ECX + 0x1d,1);
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)(in_ECX[2] + 0xa0));
      }
    }
    local_74 = FUN_00925ae0(&local_70,&local_78);
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *local_70 = *param_4;
    local_70[1] = uVar1;
    local_70[2] = uVar2;
    local_70[3] = uVar3;
    uVar1 = param_4[5];
    uVar2 = param_4[6];
    uVar3 = param_4[7];
    local_70[4] = param_4[4];
    local_70[5] = uVar1;
    local_70[6] = uVar2;
    local_70[7] = uVar3;
    FUN_008abce0(param_4,&local_50);
    FUN_008abce0(param_4,&local_60);
    local_68 = (fStack_48 - fStack_58) * (float)param_4[6] +
               (fStack_4c - fStack_5c) * (float)param_4[5] +
               (local_50 - local_60) * (float)param_4[4];
    local_6c._0_2_ =
         (undefined2)(int)ROUND(SQRT(*(float *)(iVar6 + 0x5c) * *(float *)(iVar7 + 0x5c)) * 256.0);
    *(undefined2 *)(local_78 + 3) = local_6c._0_2_;
    local_6c = SQRT(*(float *)(iVar6 + 0x60) * *(float *)(iVar7 + 0x60)) * 128.0;
    local_70 = (undefined4 *)(int)ROUND(local_6c);
    *(undefined1 *)((int)local_78 + 0xe) = local_70._0_1_;
    *local_78 = 0;
    local_38 = param_1;
    local_24 = local_78 + 2;
    local_34 = param_2;
    local_28 = param_4;
    local_30 = 1;
    local_18 = local_64;
    local_1c = 0;
    local_14 = (undefined2)local_74;
    local_12 = 0;
    local_20 = local_68;
    FUN_008dc800(local_64[2],&local_38);
    if (*(int *)(iVar7 + 0x98) != 0) {
      FUN_008dbf80(iVar7,&local_38);
    }
    if (*(int *)(iVar6 + 0x98) != 0) {
      FUN_008dbf80(iVar6,&local_38);
    }
    if (local_1c != 1) {
      *(undefined2 *)((int)local_64 + 0xe) = local_12;
      return local_74 & 0xffff;
    }
    (**(code **)(*local_64 + 0x10))(local_74);
  }
  return 0xffff;
}



void FUN_008db910(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  short local_18 [2];
  int local_14;
  int local_10;
  int local_c;
  
  iVar1 = in_ECX[0x21];
  iVar2 = in_ECX[0x22];
  local_18[0] = (short)param_1;
  local_14 = 0;
  local_10 = iVar1;
  local_c = iVar2;
  if (local_18[0] != -1) {
    local_14 = (**(code **)(*in_ECX + 0x20))(param_1);
    if (local_14 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = local_14 + 8;
    }
  }
  FUN_008dc920(in_ECX[2],local_18);
  if (*(int *)(iVar1 + 0x98) != 0) {
    FUN_008dc0a0(iVar1,local_18);
  }
  if (*(int *)(iVar2 + 0x98) != 0) {
    FUN_008dc0a0(iVar2,local_18);
  }
  FUN_00925c10(param_1);
  if (in_ECX[0x13] == 0) {
    if (*(int *)(in_ECX[2] + 0xa0) == 0) {
      FUN_008cb4e0(in_ECX[2],in_ECX + 0x1d,1);
      return;
    }
    FUN_008a7720();
    FUN_008cb4e0(in_ECX[2],in_ECX + 0x1d,1);
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(in_ECX[2] + 0xa0));
  }
  return;
}



void FUN_008dbb90(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a9a404;
  in_ECX[2] = param_1;
  return;
}



void FUN_008dbbe0(int *param_1)

{
  int *in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < in_ECX[1]) {
    do {
      if (*(char *)(iVar1 + *in_ECX) != -1) {
        if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_1,2);
        }
        *(short *)(*param_1 + param_1[1] * 2) = (short)iVar1;
        param_1[1] = param_1[1] + 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_ECX[1]);
  }
  return;
}



void FUN_008dbce0(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[0x10]) {
    FUN_008a75d0(in_ECX[0xe],(in_ECX[0x10] & 0x3fffffff) * 0x14,0x14);
  }
  if (-1 < (int)in_ECX[10]) {
    FUN_008a75d0(in_ECX[8],in_ECX[10] << 5,0x14);
  }
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],in_ECX[5] & 0x3fffffff,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008dbd90(int param_1,int param_2,int param_3)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9a430;
  FUN_00925da0(in_ECX + 0x1d);
  FUN_008d99a0(param_2,param_3,in_ECX + 4,1,0);
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  *(undefined2 *)(in_ECX + 0x1e) = 0;
  in_ECX[2] = param_1;
  FUN_008d9a10(*(undefined2 *)
                (*(char *)((uint)*(ushort *)(param_3 + 0x2e) + *(int *)(param_1 + 0x7c) + 0x19d4 +
                          (uint)*(ushort *)(param_2 + 0x2e) * 8) * 0x3c + 0x1a4c +
                *(int *)(param_1 + 0x7c)));
  return;
}



void FUN_008dbe10(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9a430;
  if (in_ECX[0x13] != 0) {
    FUN_008cb4e0(in_ECX[2],in_ECX + 0x1d,1);
  }
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x20] = 0;
  FUN_008d98e0();
  FUN_008dbce0();
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008dbec0(byte param_1)

{
  FUN_008dbe10();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008dbef0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xac) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(param_1);
    }
  }
  return;
}



void FUN_008dbf20(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xac) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(param_1);
    }
  }
  return;
}



void FUN_008dbf50(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xac) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(param_1);
    }
  }
  return;
}



void FUN_008dbf80(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  *(int *)(param_2 + 0xc) = param_1;
  iVar1 = *(int *)(param_1 + 0x98);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x94) + iVar1 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x98);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0x94) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0x98) + -1, *(int *)(param_1 + 0x98) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x94) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x94) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x98));
    }
  }
  return;
}



void FUN_008dc010(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  *(int *)(param_2 + 8) = param_1;
  iVar1 = *(int *)(param_1 + 0x98);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x94) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x98);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0x94) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0x98) + -1, *(int *)(param_1 + 0x98) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x94) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x94) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x98));
    }
  }
  return;
}



void FUN_008dc0a0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  *(int *)(param_2 + 0x10) = param_1;
  iVar1 = *(int *)(param_1 + 0x98);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x94) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x98);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0x94) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0x98) + -1, *(int *)(param_1 + 0x98) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x94) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x94) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x98));
    }
  }
  return;
}



void FUN_008dc130(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  *(int *)(param_2 + 8) = param_1;
  iVar1 = *(int *)(param_1 + 0x98);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x94) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x98);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0x94) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0x98) + -1, *(int *)(param_1 + 0x98) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x94) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x94) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x98));
    }
  }
  return;
}



void FUN_008dc1c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xb0);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    piVar1 = *(int **)(*(int *)(param_1 + 0xac) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(param_1);
    }
  }
  iVar2 = *(int *)(param_1 + 0x6c);
  while (iVar2 != 0) {
    (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x68) + 0xc))(param_1);
    iVar2 = *(int *)(param_1 + 0x6c);
  }
  iVar2 = *(int *)(param_1 + 0x78);
  while (iVar2 != 0) {
    (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x74) + 0xc))(param_1);
    iVar2 = *(int *)(param_1 + 0x78);
  }
  if (0 < *(int *)(param_1 + 0xbc)) {
    iVar2 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xb8) + iVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x14))(param_1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xbc));
  }
  return;
}



void FUN_008dc260(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 200);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xc4) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 200);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0xc4) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 200) + -1, *(int *)(param_1 + 200) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0xc4) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xc4) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 200));
    }
  }
  return;
}



void FUN_008dc2f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 200);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xc4) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 200);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0xc4) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 200) + -1, *(int *)(param_1 + 200) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0xc4) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xc4) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 200));
    }
  }
  return;
}



void FUN_008dc380(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xd4);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xd0) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0xd4);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0xd0) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0xd4) + -1, *(int *)(param_1 + 0xd4) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0xd0) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xd0) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0xd4));
    }
  }
  return;
}



void FUN_008dc410(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xd4);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xd0) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0xd4);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0xd0) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0xd4) + -1, *(int *)(param_1 + 0xd4) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0xd0) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xd0) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0xd4));
    }
  }
  return;
}



void FUN_008dc4a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xd4);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xd0) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0xd4);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0xd0) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0xd4) + -1, *(int *)(param_1 + 0xd4) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0xd0) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xd0) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0xd4));
    }
  }
  return;
}



void FUN_008dc530(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xdc) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0xe0);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0xdc) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0xe0) + -1, *(int *)(param_1 + 0xe0) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0xdc) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xdc) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0xe0));
    }
  }
  return;
}



void FUN_008dc5c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xdc) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0xe0);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0xdc) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0xe0) + -1, *(int *)(param_1 + 0xe0) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0xdc) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xdc) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0xe0));
    }
  }
  return;
}



void FUN_008dc650(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xdc) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0xe0);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0xdc) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0xe0) + -1, *(int *)(param_1 + 0xe0) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0xdc) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xdc) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0xe0));
    }
  }
  return;
}



void FUN_008dc6e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xec);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xe8) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0xec);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0xe8) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0xec) + -1, *(int *)(param_1 + 0xec) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0xe8) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xe8) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0xec));
    }
  }
  return;
}



void FUN_008dc770(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xec);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xe8) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0xec);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0xe8) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0xec) + -1, *(int *)(param_1 + 0xec) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0xe8) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xe8) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0xec));
    }
  }
  return;
}



void FUN_008dc800(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_2 + 0xc) = 0;
  iVar1 = *(int *)(param_1 + 0x14c);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x148) + iVar1 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x14c);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0x148) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0x14c) + -1, *(int *)(param_1 + 0x14c) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x148) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x148) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x14c));
    }
  }
  return;
}



void FUN_008dc890(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_2 + 8) = 0;
  iVar1 = *(int *)(param_1 + 0x14c);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x148) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x14c);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0x148) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0x14c) + -1, *(int *)(param_1 + 0x14c) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x148) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x148) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x14c));
    }
  }
  return;
}



void FUN_008dc920(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_2 + 0x10) = 0;
  iVar1 = *(int *)(param_1 + 0x14c);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x148) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x14c);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0x148) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0x14c) + -1, *(int *)(param_1 + 0x14c) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x148) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x148) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x14c));
    }
  }
  return;
}



void FUN_008dc9b0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_2 + 8) = 0;
  iVar1 = *(int *)(param_1 + 0x14c);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x148) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x14c);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0x148) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0x14c) + -1, *(int *)(param_1 + 0x14c) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x148) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x148) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x14c));
    }
  }
  return;
}



void FUN_008dca40(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xf4) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(param_1);
    }
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0xf4) + iVar1 * 4) == 0) &&
       (iVar3 = *(int *)(param_1 + 0xf8) + -1, *(int *)(param_1 + 0xf8) = iVar3, iVar4 = iVar1,
       iVar1 < iVar3)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0xf4) + iVar4 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xf4) + 4 + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0xf8));
    }
  }
  return;
}



void FUN_008dcac0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  iVar5 = *(int *)(param_1 + 0x104);
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    piVar6 = *(int **)(*(int *)(param_1 + 0x100) + iVar5 * 4);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(param_2);
    }
  }
  iVar5 = *(int *)(param_1 + 0x104);
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    if ((*(int *)(*(int *)(param_1 + 0x100) + iVar5 * 4) == 0) &&
       (iVar7 = *(int *)(param_1 + 0x104) + -1, *(int *)(param_1 + 0x104) = iVar7, iVar2 = iVar5,
       iVar5 < iVar7)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x100) + iVar2 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x100) + 4 + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x104));
    }
  }
  iVar5 = 0;
  if (0 < *(int *)(param_2 + 0x38)) {
    do {
      iVar2 = *(int *)(*(int *)(param_2 + 0x34) + iVar5 * 4);
      iVar7 = *(int *)(iVar2 + 0xa4);
      piVar6 = (int *)(iVar2 + 0xa0);
      while (iVar7 = iVar7 + -1, -1 < iVar7) {
        piVar1 = *(int **)(*piVar6 + iVar7 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(*(undefined4 *)(*(int *)(param_2 + 0x34) + iVar5 * 4));
        }
      }
      iVar7 = *(int *)(iVar2 + 0xa4);
      while (iVar7 = iVar7 + -1, -1 < iVar7) {
        if ((*(int *)(*piVar6 + iVar7 * 4) == 0) &&
           (iVar3 = *(int *)(iVar2 + 0xa4) + -1, *(int *)(iVar2 + 0xa4) = iVar3, iVar4 = iVar7,
           iVar7 < iVar3)) {
          do {
            *(undefined4 *)(*piVar6 + iVar4 * 4) = *(undefined4 *)(*piVar6 + 4 + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(iVar2 + 0xa4));
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_2 + 0x38));
  }
  iVar5 = *(int *)(param_1 + 0x88) + -1;
  *(int *)(param_1 + 0x88) = iVar5;
  if (((iVar5 == 0) && (*(int *)(param_1 + 0x84) != 0)) && (*(char *)(param_1 + 0x90) == '\0')) {
    FUN_00899210();
    return;
  }
  return;
}



void FUN_008dcc10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  iVar5 = *(int *)(param_1 + 0x104);
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    piVar6 = *(int **)(*(int *)(param_1 + 0x100) + iVar5 * 4);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(param_2);
    }
  }
  iVar5 = *(int *)(param_1 + 0x104);
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    if ((*(int *)(*(int *)(param_1 + 0x100) + iVar5 * 4) == 0) &&
       (iVar7 = *(int *)(param_1 + 0x104) + -1, *(int *)(param_1 + 0x104) = iVar7, iVar2 = iVar5,
       iVar5 < iVar7)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x100) + iVar2 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x100) + 4 + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x104));
    }
  }
  iVar5 = 0;
  if (0 < *(int *)(param_2 + 0x38)) {
    do {
      iVar2 = *(int *)(*(int *)(param_2 + 0x34) + iVar5 * 4);
      iVar7 = *(int *)(iVar2 + 0xa4);
      piVar6 = (int *)(iVar2 + 0xa0);
      while (iVar7 = iVar7 + -1, -1 < iVar7) {
        piVar1 = *(int **)(*piVar6 + iVar7 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))(*(undefined4 *)(*(int *)(param_2 + 0x34) + iVar5 * 4));
        }
      }
      iVar7 = *(int *)(iVar2 + 0xa4);
      while (iVar7 = iVar7 + -1, -1 < iVar7) {
        if ((*(int *)(*piVar6 + iVar7 * 4) == 0) &&
           (iVar3 = *(int *)(iVar2 + 0xa4) + -1, *(int *)(iVar2 + 0xa4) = iVar3, iVar4 = iVar7,
           iVar7 < iVar3)) {
          do {
            *(undefined4 *)(*piVar6 + iVar4 * 4) = *(undefined4 *)(*piVar6 + 4 + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(iVar2 + 0xa4));
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_2 + 0x38));
  }
  iVar5 = *(int *)(param_1 + 0x88) + -1;
  *(int *)(param_1 + 0x88) = iVar5;
  if (((iVar5 == 0) && (*(int *)(param_1 + 0x84) != 0)) && (*(char *)(param_1 + 0x90) == '\0')) {
    FUN_00899210();
    return;
  }
  return;
}



void FUN_008dcd60(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x110);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x10c) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(param_1,param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x110);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0x10c) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0x110) + -1, *(int *)(param_1 + 0x110) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x10c) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x10c) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x110));
    }
  }
  return;
}



void FUN_008dcdf0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x11c);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x118) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(param_1,param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x11c);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0x118) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0x11c) + -1, *(int *)(param_1 + 0x11c) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x118) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x118) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x11c));
    }
  }
  return;
}



void FUN_008dce80(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x128);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x124) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(param_1,param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x128);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0x124) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0x128) + -1, *(int *)(param_1 + 0x128) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x124) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x124) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x128));
    }
  }
  return;
}



void FUN_008dcf10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x134);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x130) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(param_2,param_3);
    }
  }
  iVar1 = *(int *)(param_1 + 0x134);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0x130) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0x134) + -1, *(int *)(param_1 + 0x134) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x130) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x130) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x134));
    }
  }
  return;
}



void FUN_008dcfa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x140);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x13c) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(param_2,param_3);
    }
  }
  iVar1 = *(int *)(param_1 + 0x140);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0x13c) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0x140) + -1, *(int *)(param_1 + 0x140) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x13c) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x13c) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x140));
    }
  }
  return;
}



void FUN_008dd030(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x110);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x10c) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(param_2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x110);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(param_1 + 0x10c) + iVar1 * 4) == 0) &&
       (iVar4 = *(int *)(param_1 + 0x110) + -1, *(int *)(param_1 + 0x110) = iVar4, iVar3 = iVar1,
       iVar1 < iVar4)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x10c) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x10c) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x110));
    }
  }
  return;
}



void FUN_008dd0c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_3 + 0x4c) = param_1;
  *(undefined4 *)(param_3 + 0x5c) = param_2;
  return;
}



void FUN_008dd0e0(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  local_30 = *param_1 - *(float *)(param_2 + 0x80);
  fStack_2c = fVar1 - *(float *)(param_2 + 0x84);
  fStack_28 = fVar2 - *(float *)(param_2 + 0x88);
  fStack_24 = fVar3 - *(float *)(param_2 + 0x8c);
  *(float *)(param_2 + 0x80) = *param_1;
  *(float *)(param_2 + 0x84) = fVar1;
  *(float *)(param_2 + 0x88) = fVar2;
  *(float *)(param_2 + 0x8c) = fVar3;
  FUN_0088fe00(param_2,&local_30);
  *(float *)(param_2 + 0x40) = *(float *)(param_2 + 0x40) + local_20;
  *(float *)(param_2 + 0x44) = *(float *)(param_2 + 0x44) + fStack_1c;
  *(float *)(param_2 + 0x48) = *(float *)(param_2 + 0x48) + fStack_18;
  *(float *)(param_2 + 0x4c) = *(float *)(param_2 + 0x4c) + 0.0;
  *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x50) + local_20;
  *(float *)(param_2 + 0x54) = *(float *)(param_2 + 0x54) + fStack_1c;
  *(float *)(param_2 + 0x58) = *(float *)(param_2 + 0x58) + fStack_18;
  *(float *)(param_2 + 0x5c) = *(float *)(param_2 + 0x5c) + 0.0;
  return;
}



void FUN_008dd150(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar3 = param_1[8] + param_1[0xc];
  fVar4 = param_1[9] + param_1[0xd];
  fVar5 = param_1[10] + param_1[0xe];
  fVar6 = param_1[0xb] + param_1[0xf];
  fVar2 = fVar5 * fVar5 + fVar3 * fVar3 + fVar6 * fVar6 + fVar4 * fVar4;
  fVar1 = (param_2 - param_1[3]) * param_1[7];
  fVar7 = 0.75 - fVar2 * 0.125;
  fVar7 = (1.5 - fVar2 * fVar7 * fVar7 * 0.5) * fVar7;
  fVar2 = fVar1 + fVar1;
  if (0.5 <= fVar1) {
    fVar2 = fVar2 - 1.0;
    fVar8 = fVar2 * param_1[0xc];
    fVar11 = fVar2 * param_1[0xd];
    fVar12 = fVar2 * param_1[0xe];
    fVar13 = fVar2 * param_1[0xf];
    local_20 = (1.0 - fVar2) * fVar7 * fVar3;
    fStack_1c = (1.0 - fVar2) * fVar7 * fVar4;
    fStack_18 = (1.0 - fVar2) * fVar7 * fVar5;
    fVar7 = (1.0 - fVar2) * fVar7 * fVar6;
  }
  else {
    fVar8 = fVar2 * fVar7 * fVar3;
    fVar11 = fVar2 * fVar7 * fVar4;
    fVar12 = fVar2 * fVar7 * fVar5;
    fVar13 = fVar2 * fVar7 * fVar6;
    local_20 = (1.0 - fVar2) * param_1[8];
    fStack_1c = (1.0 - fVar2) * param_1[9];
    fStack_18 = (1.0 - fVar2) * param_1[10];
    fVar7 = (1.0 - fVar2) * param_1[0xb];
  }
  local_20 = local_20 + fVar8;
  fStack_1c = fStack_1c + fVar11;
  fStack_18 = fStack_18 + fVar12;
  fVar7 = fVar7 + fVar13;
  fVar2 = fStack_18 * fStack_18 + local_20 * local_20;
  fVar3 = fVar7 * fVar7 + fStack_1c * fStack_1c;
  fVar4 = local_20 * local_20 + fStack_18 * fStack_18;
  fVar5 = fStack_1c * fStack_1c + fVar7 * fVar7;
  auVar9._4_4_ = fVar2;
  auVar9._0_4_ = fVar3;
  auVar9._8_4_ = fVar5;
  auVar9._12_4_ = fVar4;
  auVar10._4_4_ = fVar3 + fVar2;
  auVar10._0_4_ = fVar2 + fVar3;
  auVar10._8_4_ = fVar4 + fVar5;
  auVar10._12_4_ = fVar5 + fVar4;
  auVar10 = rsqrtss(auVar9,auVar10);
  fVar4 = auVar10._0_4_;
  fStack_14 = fVar4 * 0.5 * (3.0 - (fVar2 + fVar3) * fVar4 * fVar4);
  local_20 = fStack_14 * local_20;
  fStack_1c = fStack_14 * fStack_1c;
  fStack_18 = fStack_14 * fStack_18;
  fStack_14 = fStack_14 * fVar7;
  FUN_008b1dd0(&local_20);
  fVar7 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  param_3[0xc] = (1.0 - fVar1) * *param_1 + fVar1 * param_1[4];
  param_3[0xd] = (1.0 - fVar1) * fVar4 + fVar1 * fVar7;
  param_3[0xe] = (1.0 - fVar1) * fVar5 + fVar1 * fVar2;
  param_3[0xf] = (1.0 - fVar1) * fVar6 + fVar1 * fVar3;
  fVar1 = param_1[0x10];
  fVar7 = param_1[0x11];
  fVar2 = param_1[0x12];
  param_3[0xc] = param_3[0xc] - (*param_3 * fVar1 + param_3[4] * fVar7 + param_3[8] * fVar2);
  param_3[0xd] = param_3[0xd] - (param_3[1] * fVar1 + param_3[5] * fVar7 + param_3[9] * fVar2);
  param_3[0xe] = param_3[0xe] - (param_3[2] * fVar1 + param_3[6] * fVar7 + param_3[10] * fVar2);
  param_3[0xf] = param_3[0xf] - (param_3[3] * fVar1 + param_3[7] * fVar7 + param_3[0xb] * fVar2);
  return;
}



void FUN_008dd340(float *param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar3 = param_1[8] + param_1[0xc];
  fVar4 = param_1[9] + param_1[0xd];
  fVar5 = param_1[10] + param_1[0xe];
  fVar6 = param_1[0xb] + param_1[0xf];
  fVar2 = fVar5 * fVar5 + fVar3 * fVar3 + fVar6 * fVar6 + fVar4 * fVar4;
  fVar1 = ((param_2 - param_1[3]) + param_3) * param_1[7];
  fVar7 = 0.75 - fVar2 * 0.125;
  fVar7 = (1.5 - fVar2 * fVar7 * fVar7 * 0.5) * fVar7;
  fVar2 = fVar1 + fVar1;
  if (0.5 <= fVar1) {
    fVar2 = fVar2 - 1.0;
    fVar8 = fVar2 * param_1[0xc];
    fVar11 = fVar2 * param_1[0xd];
    fVar12 = fVar2 * param_1[0xe];
    fVar13 = fVar2 * param_1[0xf];
    local_20 = (1.0 - fVar2) * fVar7 * fVar3;
    fStack_1c = (1.0 - fVar2) * fVar7 * fVar4;
    fStack_18 = (1.0 - fVar2) * fVar7 * fVar5;
    fVar7 = (1.0 - fVar2) * fVar7 * fVar6;
  }
  else {
    fVar8 = fVar2 * fVar7 * fVar3;
    fVar11 = fVar2 * fVar7 * fVar4;
    fVar12 = fVar2 * fVar7 * fVar5;
    fVar13 = fVar2 * fVar7 * fVar6;
    local_20 = (1.0 - fVar2) * param_1[8];
    fStack_1c = (1.0 - fVar2) * param_1[9];
    fStack_18 = (1.0 - fVar2) * param_1[10];
    fVar7 = (1.0 - fVar2) * param_1[0xb];
  }
  local_20 = local_20 + fVar8;
  fStack_1c = fStack_1c + fVar11;
  fStack_18 = fStack_18 + fVar12;
  fVar7 = fVar7 + fVar13;
  fVar2 = fStack_18 * fStack_18 + local_20 * local_20;
  fVar3 = fVar7 * fVar7 + fStack_1c * fStack_1c;
  fVar4 = local_20 * local_20 + fStack_18 * fStack_18;
  fVar5 = fStack_1c * fStack_1c + fVar7 * fVar7;
  auVar9._4_4_ = fVar2;
  auVar9._0_4_ = fVar3;
  auVar9._8_4_ = fVar5;
  auVar9._12_4_ = fVar4;
  auVar10._4_4_ = fVar3 + fVar2;
  auVar10._0_4_ = fVar2 + fVar3;
  auVar10._8_4_ = fVar4 + fVar5;
  auVar10._12_4_ = fVar5 + fVar4;
  auVar10 = rsqrtss(auVar9,auVar10);
  fVar4 = auVar10._0_4_;
  fStack_14 = fVar4 * 0.5 * (3.0 - (fVar2 + fVar3) * fVar4 * fVar4);
  local_20 = fStack_14 * local_20;
  fStack_1c = fStack_14 * fStack_1c;
  fStack_18 = fStack_14 * fStack_18;
  fStack_14 = fStack_14 * fVar7;
  FUN_008b1dd0(&local_20);
  fVar7 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  param_4[0xc] = (1.0 - fVar1) * *param_1 + fVar1 * param_1[4];
  param_4[0xd] = (1.0 - fVar1) * fVar4 + fVar1 * fVar7;
  param_4[0xe] = (1.0 - fVar1) * fVar5 + fVar1 * fVar2;
  param_4[0xf] = (1.0 - fVar1) * fVar6 + fVar1 * fVar3;
  fVar1 = param_1[0x10];
  fVar7 = param_1[0x11];
  fVar2 = param_1[0x12];
  param_4[0xc] = param_4[0xc] - (*param_4 * fVar1 + param_4[4] * fVar7 + param_4[8] * fVar2);
  param_4[0xd] = param_4[0xd] - (param_4[1] * fVar1 + param_4[5] * fVar7 + param_4[9] * fVar2);
  param_4[0xe] = param_4[0xe] - (param_4[2] * fVar1 + param_4[6] * fVar7 + param_4[10] * fVar2);
  param_4[0xf] = param_4[0xf] - (param_4[3] * fVar1 + param_4[7] * fVar7 + param_4[0xb] * fVar2);
  return;
}



void FUN_008dd530(float param_1,float *param_2)

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
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  fVar2 = (param_1 - param_2[0x13]) * param_2[0x17];
  if (fVar2 <= 1.1920929e-07) {
    fVar2 = 1.1920929e-07;
  }
  fVar3 = param_2[0x1c];
  fVar4 = param_2[0x1d];
  fVar6 = param_2[0x1e];
  fVar7 = param_2[0x1f];
  pfVar1 = param_2 + 0x1c;
  fVar9 = param_2[0x18] + fVar3;
  fVar12 = param_2[0x19] + fVar4;
  fVar13 = param_2[0x1a] + fVar6;
  fVar14 = param_2[0x1b] + fVar7;
  fVar5 = fVar13 * fVar13 + fVar9 * fVar9 + fVar14 * fVar14 + fVar12 * fVar12;
  *pfVar1 = fVar9;
  param_2[0x1d] = fVar12;
  param_2[0x1e] = fVar13;
  param_2[0x1f] = fVar14;
  fVar8 = 0.75 - fVar5 * 0.125;
  fVar8 = (1.5 - fVar5 * fVar8 * fVar8 * 0.5) * fVar8;
  fVar9 = fVar8 * fVar9;
  fVar12 = fVar8 * fVar12;
  fVar13 = fVar8 * fVar13;
  fVar8 = fVar8 * fVar14;
  *pfVar1 = fVar9;
  param_2[0x1d] = fVar12;
  param_2[0x1e] = fVar13;
  param_2[0x1f] = fVar8;
  fVar5 = fVar2 + fVar2;
  if (0.5 <= fVar2) {
    fVar5 = fVar5 - 1.0;
    *pfVar1 = (1.0 - fVar5) * fVar9 + fVar5 * fVar3;
    param_2[0x1d] = (1.0 - fVar5) * fVar12 + fVar5 * fVar4;
    param_2[0x1e] = (1.0 - fVar5) * fVar13 + fVar5 * fVar6;
    param_2[0x1f] = (1.0 - fVar5) * fVar8 + fVar5 * fVar7;
  }
  else {
    *pfVar1 = (1.0 - fVar5) * param_2[0x18] + fVar5 * fVar9;
    param_2[0x1d] = (1.0 - fVar5) * param_2[0x19] + fVar5 * fVar12;
    param_2[0x1e] = (1.0 - fVar5) * param_2[0x1a] + fVar5 * fVar13;
    param_2[0x1f] = (1.0 - fVar5) * param_2[0x1b] + fVar5 * fVar8;
  }
  fVar5 = *pfVar1;
  fVar8 = param_2[0x1d];
  fVar3 = param_2[0x1e];
  fVar4 = param_2[0x1f];
  fVar6 = fVar3 * fVar3 + fVar5 * fVar5;
  fVar7 = fVar4 * fVar4 + fVar8 * fVar8;
  fVar9 = fVar5 * fVar5 + fVar3 * fVar3;
  fVar12 = fVar8 * fVar8 + fVar4 * fVar4;
  auVar10._4_4_ = fVar6;
  auVar10._0_4_ = fVar7;
  auVar10._8_4_ = fVar12;
  auVar10._12_4_ = fVar9;
  auVar11._4_4_ = fVar7 + fVar6;
  auVar11._0_4_ = fVar6 + fVar7;
  auVar11._8_4_ = fVar9 + fVar12;
  auVar11._12_4_ = fVar12 + fVar9;
  auVar11 = rsqrtss(auVar10,auVar11);
  fVar9 = auVar11._0_4_;
  fVar6 = fVar9 * 0.5 * (3.0 - (fVar6 + fVar7) * fVar9 * fVar9);
  *pfVar1 = fVar6 * fVar5;
  param_2[0x1d] = fVar6 * fVar8;
  param_2[0x1e] = fVar6 * fVar3;
  param_2[0x1f] = fVar6 * fVar4;
  fVar5 = param_2[0x17];
  param_2[0x14] = (1.0 - fVar2) * param_2[0x10] + fVar2 * param_2[0x14];
  param_2[0x15] = (1.0 - fVar2) * param_2[0x11] + fVar2 * param_2[0x15];
  param_2[0x16] = (1.0 - fVar2) * param_2[0x12] + fVar2 * param_2[0x16];
  param_2[0x17] = (1.0 - fVar2) * param_2[0x13] + fVar2 * param_2[0x17];
  param_2[0x17] = fVar5 / fVar2;
  param_2[0x24] = fVar2 * param_2[0x24];
  param_2[0x25] = fVar2 * param_2[0x25];
  param_2[0x26] = fVar2 * param_2[0x26];
  param_2[0x27] = fVar2 * param_2[0x27];
  FUN_008b1dd0(pfVar1);
  fVar2 = param_2[0x20];
  fVar5 = param_2[0x21];
  fVar8 = param_2[0x22];
  param_2[0xc] = param_2[0x14] - (*param_2 * fVar2 + param_2[4] * fVar5 + param_2[8] * fVar8);
  param_2[0xd] = param_2[0x15] - (param_2[1] * fVar2 + param_2[5] * fVar5 + param_2[9] * fVar8);
  param_2[0xe] = param_2[0x16] - (param_2[2] * fVar2 + param_2[6] * fVar5 + param_2[10] * fVar8);
  param_2[0xf] = param_2[0x17] - (param_2[3] * fVar2 + param_2[7] * fVar5 + param_2[0xb] * fVar8);
  return;
}



void FUN_008dd750(float param_1,float *param_2)

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
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_1 <= param_2[0x13]) {
    param_1 = param_2[0x13];
  }
  fVar6 = param_2[0x1c];
  fVar2 = param_2[0x1d];
  fVar4 = param_2[0x1e];
  fVar5 = param_2[0x1f];
  pfVar1 = param_2 + 0x1c;
  fVar9 = param_2[0x18] + fVar6;
  fVar12 = param_2[0x19] + fVar2;
  fVar13 = param_2[0x1a] + fVar4;
  fVar14 = param_2[0x1b] + fVar5;
  fVar3 = fVar13 * fVar13 + fVar9 * fVar9 + fVar14 * fVar14 + fVar12 * fVar12;
  fVar8 = (param_1 - param_2[0x13]) * param_2[0x17];
  *pfVar1 = fVar9;
  param_2[0x1d] = fVar12;
  param_2[0x1e] = fVar13;
  param_2[0x1f] = fVar14;
  fVar7 = 0.75 - fVar3 * 0.125;
  fVar7 = (1.5 - fVar3 * fVar7 * fVar7 * 0.5) * fVar7;
  fVar9 = fVar7 * fVar9;
  fVar12 = fVar7 * fVar12;
  fVar13 = fVar7 * fVar13;
  fVar7 = fVar7 * fVar14;
  *pfVar1 = fVar9;
  param_2[0x1d] = fVar12;
  param_2[0x1e] = fVar13;
  param_2[0x1f] = fVar7;
  fVar3 = fVar8 + fVar8;
  if (0.5 <= fVar8) {
    fVar3 = fVar3 - 1.0;
    *pfVar1 = (1.0 - fVar3) * fVar9 + fVar3 * fVar6;
    param_2[0x1d] = (1.0 - fVar3) * fVar12 + fVar3 * fVar2;
    param_2[0x1e] = (1.0 - fVar3) * fVar13 + fVar3 * fVar4;
    param_2[0x1f] = (1.0 - fVar3) * fVar7 + fVar3 * fVar5;
  }
  else {
    *pfVar1 = (1.0 - fVar3) * param_2[0x18] + fVar3 * fVar9;
    param_2[0x1d] = (1.0 - fVar3) * param_2[0x19] + fVar3 * fVar12;
    param_2[0x1e] = (1.0 - fVar3) * param_2[0x1a] + fVar3 * fVar13;
    param_2[0x1f] = (1.0 - fVar3) * param_2[0x1b] + fVar3 * fVar7;
  }
  fVar3 = *pfVar1;
  fVar7 = param_2[0x1d];
  fVar6 = param_2[0x1e];
  fVar2 = param_2[0x1f];
  fVar4 = fVar6 * fVar6 + fVar3 * fVar3;
  fVar5 = fVar2 * fVar2 + fVar7 * fVar7;
  fVar9 = fVar3 * fVar3 + fVar6 * fVar6;
  fVar12 = fVar7 * fVar7 + fVar2 * fVar2;
  auVar10._4_4_ = fVar4;
  auVar10._0_4_ = fVar5;
  auVar10._8_4_ = fVar12;
  auVar10._12_4_ = fVar9;
  auVar11._4_4_ = fVar5 + fVar4;
  auVar11._0_4_ = fVar4 + fVar5;
  auVar11._8_4_ = fVar9 + fVar12;
  auVar11._12_4_ = fVar12 + fVar9;
  auVar11 = rsqrtss(auVar10,auVar11);
  fVar9 = auVar11._0_4_;
  fVar4 = fVar9 * 0.5 * (3.0 - (fVar4 + fVar5) * fVar9 * fVar9);
  *pfVar1 = fVar4 * fVar3;
  param_2[0x1d] = fVar4 * fVar7;
  param_2[0x1e] = fVar4 * fVar6;
  param_2[0x1f] = fVar4 * fVar2;
  param_2[0x18] = *pfVar1;
  param_2[0x19] = param_2[0x1d];
  param_2[0x1a] = param_2[0x1e];
  param_2[0x1b] = param_2[0x1f];
  fVar3 = (1.0 - fVar8) * param_2[0x10] + fVar8 * param_2[0x14];
  fVar7 = (1.0 - fVar8) * param_2[0x11] + fVar8 * param_2[0x15];
  fVar6 = (1.0 - fVar8) * param_2[0x12] + fVar8 * param_2[0x16];
  fVar8 = (1.0 - fVar8) * param_2[0x13] + fVar8 * param_2[0x17];
  param_2[0x14] = fVar3;
  param_2[0x15] = fVar7;
  param_2[0x16] = fVar6;
  param_2[0x17] = fVar8;
  param_2[0x10] = fVar3;
  param_2[0x11] = fVar7;
  param_2[0x12] = fVar6;
  param_2[0x13] = fVar8;
  param_2[0x13] = param_1;
  param_2[0x17] = 0.0;
  FUN_008b1dd0(pfVar1);
  fVar8 = param_2[0x20];
  fVar3 = param_2[0x21];
  fVar7 = param_2[0x22];
  param_2[0xc] = param_2[0x14] - (*param_2 * fVar8 + param_2[4] * fVar3 + param_2[8] * fVar7);
  param_2[0xd] = param_2[0x15] - (param_2[1] * fVar8 + param_2[5] * fVar3 + param_2[9] * fVar7);
  param_2[0xe] = param_2[0x16] - (param_2[2] * fVar8 + param_2[6] * fVar3 + param_2[10] * fVar7);
  param_2[0xf] = param_2[0x17] - (param_2[3] * fVar8 + param_2[7] * fVar3 + param_2[0xb] * fVar7);
  return;
}



void FUN_008dd970(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_3[0x24] = 0.0;
  param_3[0x25] = 0.0;
  param_3[0x26] = 0.0;
  param_3[0x27] = 0.0;
  fVar1 = param_2[1];
  fVar7 = param_2[2];
  fVar2 = param_2[3];
  param_3[0x18] = *param_2;
  param_3[0x19] = fVar1;
  param_3[0x1a] = fVar7;
  param_3[0x1b] = fVar2;
  fVar1 = param_2[1];
  fVar7 = param_2[2];
  fVar2 = param_2[3];
  param_3[0x1c] = *param_2;
  param_3[0x1d] = fVar1;
  param_3[0x1e] = fVar7;
  param_3[0x1f] = fVar2;
  FUN_008b1dd0(param_2);
  fVar1 = param_1[1];
  fVar7 = param_1[2];
  fVar2 = param_1[3];
  param_3[0xc] = *param_1;
  param_3[0xd] = fVar1;
  param_3[0xe] = fVar7;
  param_3[0xf] = fVar2;
  fVar1 = param_3[0x13];
  fVar7 = param_3[0x20];
  fVar2 = param_3[0x21];
  fVar3 = param_3[0x22];
  fVar4 = *param_1 + *param_3 * fVar7 + param_3[4] * fVar2 + param_3[8] * fVar3;
  fVar5 = param_1[1] + param_3[1] * fVar7 + param_3[5] * fVar2 + param_3[9] * fVar3;
  fVar6 = param_1[2] + param_3[2] * fVar7 + param_3[6] * fVar2 + param_3[10] * fVar3;
  fVar7 = param_1[3] + param_3[3] * fVar7 + param_3[7] * fVar2 + param_3[0xb] * fVar3;
  param_3[0x10] = fVar4;
  param_3[0x11] = fVar5;
  param_3[0x12] = fVar6;
  param_3[0x13] = fVar7;
  param_3[0x14] = fVar4;
  param_3[0x15] = fVar5;
  param_3[0x16] = fVar6;
  param_3[0x17] = fVar7;
  param_3[0x13] = fVar1;
  param_3[0x17] = 0.0;
  return;
}



void FUN_008dda10(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  param_2[0x24] = 0.0;
  param_2[0x25] = 0.0;
  param_2[0x26] = 0.0;
  param_2[0x27] = 0.0;
  FUN_008b1b40(param_1);
  fVar1 = param_1[1];
  fVar7 = param_1[2];
  fVar2 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = fVar1;
  param_2[2] = fVar7;
  param_2[3] = fVar2;
  fVar1 = param_1[5];
  fVar7 = param_1[6];
  fVar2 = param_1[7];
  param_2[4] = param_1[4];
  param_2[5] = fVar1;
  param_2[6] = fVar7;
  param_2[7] = fVar2;
  fVar1 = param_1[9];
  fVar7 = param_1[10];
  fVar2 = param_1[0xb];
  param_2[8] = param_1[8];
  param_2[9] = fVar1;
  param_2[10] = fVar7;
  param_2[0xb] = fVar2;
  fVar1 = param_1[0xd];
  fVar7 = param_1[0xe];
  fVar2 = param_1[0xf];
  param_2[0xc] = param_1[0xc];
  param_2[0xd] = fVar1;
  param_2[0xe] = fVar7;
  param_2[0xf] = fVar2;
  param_2[0x18] = local_20;
  param_2[0x19] = fStack_1c;
  param_2[0x1a] = fStack_18;
  param_2[0x1b] = fStack_14;
  param_2[0x1c] = local_20;
  param_2[0x1d] = fStack_1c;
  param_2[0x1e] = fStack_18;
  param_2[0x1f] = fStack_14;
  fVar1 = param_2[0x13];
  fVar7 = param_2[0x20];
  fVar2 = param_2[0x21];
  fVar3 = param_2[0x22];
  fVar4 = param_1[0xc] + *param_1 * fVar7 + param_1[4] * fVar2 + param_1[8] * fVar3;
  fVar5 = param_1[0xd] + param_1[1] * fVar7 + param_1[5] * fVar2 + param_1[9] * fVar3;
  fVar6 = param_1[0xe] + param_1[2] * fVar7 + param_1[6] * fVar2 + param_1[10] * fVar3;
  fVar7 = param_1[0xf] + param_1[3] * fVar7 + param_1[7] * fVar2 + param_1[0xb] * fVar3;
  param_2[0x10] = fVar4;
  param_2[0x11] = fVar5;
  param_2[0x12] = fVar6;
  param_2[0x13] = fVar7;
  param_2[0x14] = fVar4;
  param_2[0x15] = fVar5;
  param_2[0x16] = fVar6;
  param_2[0x17] = fVar7;
  param_2[0x13] = fVar1;
  param_2[0x17] = 0.0;
  return;
}



void FUN_008ddac0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_2[0x24] = 0.0;
  param_2[0x25] = 0.0;
  param_2[0x26] = 0.0;
  param_2[0x27] = 0.0;
  fVar1 = param_1[1];
  fVar7 = param_1[2];
  fVar2 = param_1[3];
  param_2[0xc] = *param_1;
  param_2[0xd] = fVar1;
  param_2[0xe] = fVar7;
  param_2[0xf] = fVar2;
  fVar1 = param_2[0x13];
  fVar7 = param_2[0x20];
  fVar2 = param_2[0x21];
  fVar3 = param_2[0x22];
  fVar4 = *param_1 + *param_2 * fVar7 + param_2[4] * fVar2 + param_2[8] * fVar3;
  fVar5 = param_1[1] + param_2[1] * fVar7 + param_2[5] * fVar2 + param_2[9] * fVar3;
  fVar6 = param_1[2] + param_2[2] * fVar7 + param_2[6] * fVar2 + param_2[10] * fVar3;
  fVar7 = param_1[3] + param_2[3] * fVar7 + param_2[7] * fVar2 + param_2[0xb] * fVar3;
  param_2[0x10] = fVar4;
  param_2[0x11] = fVar5;
  param_2[0x12] = fVar6;
  param_2[0x13] = fVar7;
  param_2[0x13] = fVar1;
  param_2[0x14] = fVar4;
  param_2[0x15] = fVar5;
  param_2[0x16] = fVar6;
  param_2[0x17] = fVar7;
  param_2[0x18] = param_2[0x1c];
  param_2[0x19] = param_2[0x1d];
  param_2[0x1a] = param_2[0x1e];
  param_2[0x1b] = param_2[0x1f];
  param_2[0x17] = 0.0;
  return;
}



void FUN_008ddb40(undefined4 param_1,int param_2)

{
  FUN_008dd970(param_2 + 0x30,param_1,param_2);
  return;
}



void FUN_008ddc20(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  *(undefined4 *)(in_ECX[0xd] + (uint)*(ushort *)(param_1 + 0x8c) * 4) =
       *(undefined4 *)(in_ECX[0xd] + -4 + in_ECX[0xe] * 4);
  *(ushort *)(*(int *)(in_ECX[0xd] + (uint)*(ushort *)(param_1 + 0x8c) * 4) + 0x8c) =
       *(ushort *)(param_1 + 0x8c);
  in_ECX[0xe] = in_ECX[0xe] + -1;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x8c) = 0xffff;
  iVar1 = *in_ECX;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0x1c))();
  (**(code **)(iVar1 + 0x14))(-iVar2);
  *(undefined1 *)((int)in_ECX + 0x26) = 1;
  return;
}



void FUN_008ddc90(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x60)) {
    piVar2 = *(int **)(in_ECX + 0x5c);
    do {
      if (*piVar2 == param_1) goto LAB_008ddcb1;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x60));
  }
  iVar1 = -1;
LAB_008ddcb1:
  *(undefined4 *)(*(int *)(in_ECX + 0x5c) + iVar1 * 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(in_ECX + 0x26) = 1;
  *(undefined1 *)(in_ECX + 0x27) = 1;
  return;
}



void FUN_008ddcd0(undefined1 *param_1,float param_2)

{
  int *piVar1;
  bool bVar2;
  char *pcVar3;
  byte bVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(in_ECX + 0x1c);
  *(float *)(in_ECX + 0x2c) = *(float *)((int)param_2 + 8) + *(float *)(in_ECX + 0x2c);
  param_2 = *(float *)(in_ECX + 0x30) + *(float *)((int)param_2 + 8);
  *(float *)(in_ECX + 0x30) = param_2;
  if (*(float *)(in_ECX + 0x2c) <= *(float *)(iVar5 + 0xa8)) {
    if (*(float *)(iVar5 + 0xac) < param_2) {
      iVar6 = 0;
      bVar2 = true;
      *(float *)(in_ECX + 0x30) = param_2 - *(float *)(iVar5 + 0xac);
      if (0 < *(int *)(in_ECX + 0x38)) {
        do {
          iVar5 = *(int *)(*(int *)(in_ECX + 0x34) + iVar6 * 4);
          if ((*(int *)(iVar5 + 100) == 0) ||
             (pcVar3 = (char *)(**(code **)(**(int **)(iVar5 + 100) + 0xc))(&param_2,iVar5),
             *pcVar3 == '\0')) {
            bVar2 = false;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(in_ECX + 0x38));
        if (!bVar2) {
          *(undefined1 *)(in_ECX + 0x25) = 0;
          goto LAB_008dde16;
        }
      }
      bVar4 = *(char *)(in_ECX + 0x25) + 1;
      *(byte *)(in_ECX + 0x25) = bVar4;
      if (4 < bVar4) {
        *(undefined1 *)(in_ECX + 0x25) = 0;
        *param_1 = 1;
        return;
      }
    }
  }
  else {
    bVar2 = true;
    *(float *)(in_ECX + 0x2c) = *(float *)(in_ECX + 0x2c) - *(float *)(iVar5 + 0xa8);
    if (0 < *(int *)(in_ECX + 0x38)) {
      iVar5 = 0;
      do {
        iVar6 = *(int *)(*(int *)(in_ECX + 0x34) + iVar5 * 4);
        piVar1 = *(int **)(iVar6 + 100);
        if ((piVar1 == (int *)0x0) ||
           (pcVar3 = (char *)(**(code **)(*piVar1 + 8))(&param_2,iVar6), *pcVar3 == '\0')) {
          bVar2 = false;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(in_ECX + 0x38));
      if (!bVar2) {
        *(undefined1 *)(in_ECX + 0x24) = 0;
        *param_1 = 0;
        return;
      }
    }
    bVar4 = *(char *)(in_ECX + 0x24) + 1;
    *(byte *)(in_ECX + 0x24) = bVar4;
    if (4 < bVar4) {
      *(undefined1 *)(in_ECX + 0x24) = 0;
      *param_1 = 1;
      return;
    }
  }
LAB_008dde16:
  *param_1 = 0;
  return;
}



void FUN_008dde30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  *(int **)(param_1 + 0x54) = in_ECX;
  *(short *)(param_1 + 0x8c) = (short)in_ECX[0xe];
  if (in_ECX[0xe] == (in_ECX[0xf] & 0x3fffffffU)) {
    FUN_008a6ee0(in_ECX + 0xd,4);
  }
  *(int *)(in_ECX[0xd] + in_ECX[0xe] * 4) = param_1;
  in_ECX[0xe] = in_ECX[0xe] + 1;
  iVar1 = *in_ECX;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0x1c))();
  (**(code **)(iVar1 + 0x14))(uVar2);
  return;
}



void FUN_008de080(int param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0x60) == (*(uint *)(in_ECX + 100) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x5c),4);
  }
  *(int *)(*(int *)(in_ECX + 0x5c) + *(int *)(in_ECX + 0x60) * 4) = param_1;
  *(int *)(in_ECX + 0x60) = *(int *)(in_ECX + 0x60) + 1;
  *(int *)(param_1 + 0xc) = in_ECX;
  return;
}



undefined1 * FUN_008de0c0(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *local_34;
  int local_30;
  int local_2c;
  undefined1 local_28 [40];
  
  iVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x38)) {
    do {
      iVar6 = *(int *)(*(int *)(in_ECX + 0x34) + iVar5 * 4);
      iVar7 = 0;
      if (0 < *(int *)(iVar6 + 0x3c)) {
        do {
          iVar2 = *(int *)(*(int *)(iVar6 + 0x38) + 4 + iVar7 * 8);
          iVar2 = *(int *)(iVar2 + 0x10) + iVar2;
          if ((*(char *)(iVar2 + 0x91) == '\0') &&
             (FUN_0091f220(iVar5,*(undefined2 *)(iVar2 + 0x8c)),
             **(int **)*param_2 == -((undefined4 *)*param_2)[1])) goto LAB_008de2e8;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar6 + 0x3c));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x38));
  }
  iVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x38)) {
    do {
      iVar6 = *(int *)(*(int *)(in_ECX + 0x34) + iVar5 * 4);
      iVar7 = 0;
      if (0 < *(int *)(iVar6 + 0x6c)) {
        iVar2 = 0;
        do {
          iVar3 = *(int *)(*(int *)(iVar6 + 0x68) + 4 + iVar2);
          if (((*(char *)(iVar3 + 0x91) == '\0') &&
              (iVar1 = *(int *)(*(int *)(iVar6 + 0x68) + iVar2 + 8), *(char *)(iVar1 + 0x91) == '\0'
              )) && (FUN_0091f220(*(undefined2 *)(iVar3 + 0x8c),*(undefined2 *)(iVar1 + 0x8c)),
                    **(int **)*param_2 == -((undefined4 *)*param_2)[1])) {
LAB_008de2e8:
            *param_1 = 1;
            return param_1;
          }
          iVar7 = iVar7 + 1;
          iVar2 = iVar2 + 0x1c;
        } while (iVar7 < *(int *)(iVar6 + 0x6c));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x38));
  }
  iVar6 = 0;
  puVar4 = local_28;
  iVar5 = -0x7ffffff6;
  local_30 = 0;
  local_2c = -0x7ffffff6;
  local_34 = puVar4;
  if (0 < *(int *)(in_ECX + 0x60)) {
    do {
      if (*(int *)(*(int *)(in_ECX + 0x5c) + iVar6 * 4) != 0) {
        local_30 = 0;
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x5c) + iVar6 * 4) + 0xc))(&local_34);
        iVar2 = 0;
        iVar7 = -1;
        do {
          puVar4 = local_34;
          iVar5 = local_2c;
          if (local_30 <= iVar2) goto LAB_008de283;
          if (*(char *)(*(int *)(local_34 + iVar2 * 4) + 0x91) == '\0') {
            iVar7 = iVar2;
          }
          iVar2 = iVar2 + 1;
        } while (iVar7 == -1);
        iVar3 = local_30;
        if (iVar2 < local_30) {
          do {
            if ((*(char *)(*(int *)(puVar4 + iVar2 * 4) + 0x91) == '\0') &&
               (FUN_0091f220(*(undefined2 *)(*(int *)(puVar4 + iVar7 * 4) + 0x8c),
                             *(undefined2 *)(*(int *)(puVar4 + iVar2 * 4) + 0x8c)), iVar3 = local_30
               , puVar4 = local_34, **(int **)*param_2 == -((undefined4 *)*param_2)[1])) {
              *param_1 = 1;
              if (-1 < local_2c) {
                FUN_008a75d0(local_34,local_2c << 2,0x14);
              }
              return param_1;
            }
            iVar2 = iVar2 + 1;
            iVar5 = local_2c;
          } while (iVar2 < iVar3);
        }
      }
LAB_008de283:
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0x60));
  }
  if (-1 < iVar5) {
    FUN_008a75d0(puVar4,iVar5 << 2,0x14);
  }
  *param_1 = **(int **)*param_2 == -((undefined4 *)*param_2)[1];
  return param_1;
}



void FUN_008de350(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9a4e4;
  if (-1 < (int)in_ECX[0x19]) {
    FUN_008a75d0(in_ECX[0x17],in_ECX[0x19] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x13]) {
    FUN_008a75d0(in_ECX[0x11],in_ECX[0x13] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0xf]) {
    FUN_008a75d0(in_ECX[0xd],in_ECX[0xf] << 2,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008de400(int param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  
  in_ECX[7] = param_1;
  *in_ECX = &PTR_FUN_00a9a4e4;
  *(undefined2 *)((int)in_ECX + 0x22) = 0xffff;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  *(undefined1 *)((int)in_ECX + 0x25) = 0;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *(undefined1 *)((int)in_ECX + 0x26) = 0;
  *(undefined1 *)((int)in_ECX + 0x27) = 0;
  *(undefined1 *)(in_ECX + 10) = 1;
  *(undefined1 *)((int)in_ECX + 0x29) = 1;
  *(undefined1 *)((int)in_ECX + 0x2a) = 0xfd;
  *(undefined1 *)((int)in_ECX + 0x2b) = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0x80000001;
  in_ECX[0xd] = in_ECX + 0x10;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x7c) + 0x1bf8);
  *(short *)(in_ECX + 0x16) = (short)*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x1bfc);
  *(short *)((int)in_ECX + 0x5a) = (short)uVar1;
  in_ECX[0x11] = in_ECX + 0x14;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0x80000001;
  in_ECX[0x15] = uVar1 & 0xffff;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0x80000000;
  in_ECX[0x1a] = 0xc1200000;
  return;
}



void FUN_008de4b0(byte param_1)

{
  FUN_008de350();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008de4e0(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int iVar3;
  
  iVar1 = in_EAX[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*in_EAX + iVar1 * 4) == 0) &&
       (iVar2 = in_EAX[1], in_EAX[1] = iVar2 + -1, iVar3 = iVar1, iVar1 < iVar2 + -1)) {
      do {
        *(undefined4 *)(*in_EAX + iVar3 * 4) = *(undefined4 *)(*in_EAX + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < in_EAX[1]);
    }
  }
  return;
}



void FUN_008de520(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x60);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0x5c) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
  }
  iVar1 = *(int *)(in_ECX + 0x60);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(in_ECX + 0x5c) + iVar1 * 4) == 0) &&
       (iVar3 = *(int *)(in_ECX + 0x60) + -1, *(int *)(in_ECX + 0x60) = iVar3, iVar4 = iVar1,
       iVar1 < iVar3)) {
      do {
        *(undefined4 *)(*(int *)(in_ECX + 0x5c) + iVar4 * 4) =
             *(undefined4 *)(*(int *)(in_ECX + 0x5c) + 4 + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(in_ECX + 0x60));
    }
  }
  return;
}



void FUN_008de590(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x60);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0x5c) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  iVar1 = *(int *)(in_ECX + 0x60);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(in_ECX + 0x5c) + iVar1 * 4) == 0) &&
       (iVar3 = *(int *)(in_ECX + 0x60) + -1, *(int *)(in_ECX + 0x60) = iVar3, iVar4 = iVar1,
       iVar1 < iVar3)) {
      do {
        *(undefined4 *)(*(int *)(in_ECX + 0x5c) + iVar4 * 4) =
             *(undefined4 *)(*(int *)(in_ECX + 0x5c) + 4 + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(in_ECX + 0x60));
    }
  }
  return;
}



void FUN_008de600(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x60);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0x5c) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))();
    }
  }
  iVar1 = *(int *)(in_ECX + 0x60);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(in_ECX + 0x5c) + iVar1 * 4) == 0) &&
       (iVar3 = *(int *)(in_ECX + 0x60) + -1, *(int *)(in_ECX + 0x60) = iVar3, iVar4 = iVar1,
       iVar1 < iVar3)) {
      do {
        *(undefined4 *)(*(int *)(in_ECX + 0x5c) + iVar4 * 4) =
             *(undefined4 *)(*(int *)(in_ECX + 0x5c) + 4 + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(in_ECX + 0x60));
    }
  }
  return;
}



void FUN_008de670(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x60)) {
    piVar2 = *(int **)(in_ECX + 0x5c);
    do {
      if (*piVar2 == param_1) goto LAB_008de691;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x60));
  }
  iVar1 = -1;
LAB_008de691:
  iVar3 = *(int *)(in_ECX + 0x60) + -1;
  *(int *)(in_ECX + 0x60) = iVar3;
  if (iVar1 < iVar3) {
    do {
      *(undefined4 *)(*(int *)(in_ECX + 0x5c) + iVar1 * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0x5c) + 4 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x60));
  }
  return;
}



void FUN_008de6c0(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x54)) {
    piVar2 = *(int **)(in_ECX + 0x50);
    do {
      if (*piVar2 == param_1) goto LAB_008de6e1;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x54));
  }
  iVar1 = -1;
LAB_008de6e1:
  iVar3 = *(int *)(in_ECX + 0x54) + -1;
  *(int *)(in_ECX + 0x54) = iVar3;
  if (iVar1 < iVar3) {
    do {
      *(undefined4 *)(*(int *)(in_ECX + 0x50) + iVar1 * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0x50) + 4 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x54));
  }
  return;
}



void FUN_008de710(undefined4 param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0x60) == (*(uint *)(in_ECX + 100) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x5c),4);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x5c) + *(int *)(in_ECX + 0x60) * 4) = param_1;
  *(int *)(in_ECX + 0x60) = *(int *)(in_ECX + 0x60) + 1;
  return;
}



void FUN_008de750(undefined4 param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0x54) == (*(uint *)(in_ECX + 0x58) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x50),4);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x50) + *(int *)(in_ECX + 0x54) * 4) = param_1;
  *(int *)(in_ECX + 0x54) = *(int *)(in_ECX + 0x54) + 1;
  return;
}



void FUN_008de790(int *param_1)

{
  int in_ECX;
  
  FUN_008bc870(param_1);
  if (-1 < *(int *)(in_ECX + 0x58)) {
    (**(code **)(*param_1 + 4))
              ("OvrlapLisPtr",4,*(undefined4 *)(in_ECX + 0x50),*(int *)(in_ECX + 0x54) << 2,
               *(int *)(in_ECX + 0x58) << 2);
  }
  if (-1 < *(int *)(in_ECX + 100)) {
    (**(code **)(*param_1 + 4))
              ("PhantmLisPtr",4,*(undefined4 *)(in_ECX + 0x5c),*(int *)(in_ECX + 0x60) << 2,
               *(int *)(in_ECX + 100) << 2);
  }
  return;
}



void FUN_008de800(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x54) == 0) {
    if (-1 < *(int *)(in_ECX + 0x58)) {
      FUN_008a75d0(*(undefined4 *)(in_ECX + 0x50),*(int *)(in_ECX + 0x58) << 2,0x14);
    }
    *(undefined4 *)(in_ECX + 0x50) = 0;
    *(undefined4 *)(in_ECX + 0x54) = 0;
    *(uint *)(in_ECX + 0x58) = *(uint *)(in_ECX + 0x58) & 0xc0000000 | 0x80000000;
  }
  if (*(int *)(in_ECX + 0x60) == 0) {
    if (-1 < *(int *)(in_ECX + 100)) {
      FUN_008a75d0(*(undefined4 *)(in_ECX + 0x5c),*(int *)(in_ECX + 100) << 2,0x14);
    }
    *(undefined4 *)(in_ECX + 0x5c) = 0;
    *(undefined4 *)(in_ECX + 0x60) = 0;
    *(uint *)(in_ECX + 100) = *(uint *)(in_ECX + 100) & 0xc0000000 | 0x80000000;
  }
  return;
}



void FUN_008de8b0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[0x18];
  *in_ECX = &PTR_FUN_00a97b60;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(in_ECX[0x17] + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))();
    }
  }
  if (-1 < (int)in_ECX[0x19]) {
    FUN_008a75d0(in_ECX[0x17],in_ECX[0x19] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x16]) {
    FUN_008a75d0(in_ECX[0x14],in_ECX[0x16] << 2,0x14);
  }
  FUN_008a66a0();
  return;
}



void FUN_008de950(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  undefined4 unaff_ESI;
  int unaff_FS_OFFSET;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10 [4];
  
  iVar5 = _tls_index;
  iVar2 = *(int *)(in_ECX + 8);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x8c) + *(int *)(iVar2 + 0x88) != 0) {
      local_2c = CONCAT31(local_2c._1_3_,0x11);
      local_24 = param_1;
      FUN_00898820(&local_2c);
      return;
    }
    *(int *)(iVar2 + 0x88) = *(int *)(iVar2 + 0x88) + 1;
    uVar3 = *(uint *)(*(int *)(in_ECX + 8) + 0x2a8);
    iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + iVar5 * 4);
    local_10[0] = 0;
    local_10[1] = 0;
    local_10[2] = 0x80000000;
    piVar6 = *(int **)(iVar2 + 0x19c);
    if (*(int **)(iVar2 + 0x19c) == (int *)0x0) {
      piVar6 = DAT_00ba7d9c;
    }
    local_10[3] = piVar6[8];
    uVar4 = uVar3 * 8 + 0x10 & 0xfffffff0;
    uVar1 = local_10[3] + uVar4;
    if ((uint)piVar6[0xb] < uVar1) {
      local_10[3] = (**(code **)(*piVar6 + 0xc))(uVar4);
    }
    else {
      piVar6[8] = uVar1;
    }
    local_10[2] = uVar3 | 0x80000000;
    uVar3 = *(uint *)(*(int *)(in_ECX + 8) + 0x2a8);
    local_20 = 0;
    local_1c = 0;
    local_18 = 0x80000000;
    piVar6 = *(int **)(iVar2 + 0x19c);
    if (*(int **)(iVar2 + 0x19c) == (int *)0x0) {
      piVar6 = DAT_00ba7d9c;
    }
    local_14 = piVar6[8];
    uVar4 = uVar3 * 8 + 0x10 & 0xfffffff0;
    uVar1 = local_14 + uVar4;
    local_10[0] = local_10[3];
    if ((uint)piVar6[0xb] < uVar1) {
      local_14 = (**(code **)(*piVar6 + 0xc))(uVar4);
    }
    else {
      piVar6[8] = uVar1;
    }
    local_30 = in_ECX + 0x28;
    local_18 = uVar3 | 0x80000000;
    local_20 = local_14;
    (**(code **)(**(int **)(*(int *)(in_ECX + 8) + 8) + 0x24))();
    (**(code **)(**(int **)(*(int *)(in_ECX + 8) + 100) + 0x18))
              (&local_30,param_1,1,local_10,&local_20);
    if ((local_20 != 0) || (local_30 != 0)) {
      FUN_008d84f0(&local_24,&stack0xffffffcc);
      FUN_008d83e0(unaff_ESI,local_30);
      iVar5 = *(int *)(*(int *)(in_ECX + 8) + 0x78);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar5 + 8;
      }
      FUN_008d8370(local_24,local_20,iVar5);
      FUN_008de4e0();
    }
    (**(code **)(**(int **)(*(int *)(in_ECX + 8) + 8) + 0x28))();
    iVar5 = *(int *)(in_ECX + 8);
    piVar6 = (int *)(iVar5 + 0x88);
    *piVar6 = *piVar6 + -1;
    if (((*piVar6 == 0) && (*(int *)(iVar5 + 0x84) != 0)) && (*(char *)(iVar5 + 0x90) == '\0')) {
      FUN_00899210();
    }
    piVar6 = *(int **)(iVar2 + 0x19c);
    if (*(int **)(iVar2 + 0x19c) == (int *)0x0) {
      piVar6 = DAT_00ba7d9c;
    }
    piVar6[8] = local_28;
    if (local_28 == piVar6[10]) {
      (**(code **)(*piVar6 + 0x10))(local_28);
    }
    if (-1 < local_2c) {
      FUN_008a75d0(unaff_ESI,local_2c << 3,0x14);
    }
    piVar6 = *(int **)(iVar2 + 0x19c);
    if (*(int **)(iVar2 + 0x19c) == (int *)0x0) {
      piVar6 = DAT_00ba7d9c;
    }
    piVar6[8] = local_18;
    if (local_18 == piVar6[10]) {
      (**(code **)(*piVar6 + 0x10))(local_18);
    }
    if (-1 < local_1c) {
      FUN_008a75d0(local_24,local_1c << 3,0x14);
    }
  }
  return;
}



void FUN_008debe0(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0xfd;
  return;
}



void FUN_008dec10(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a9a524;
  in_ECX[2] = 0x42040000;
  in_ECX[3] = 0x427c0000;
  return;
}



void FUN_008dec30(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  
  fVar4 = param_2[1] - *param_2;
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(in_ECX + 8);
  pfVar1 = (float *)(param_1 + 0x160);
  iVar6 = 0;
  *(float *)(param_1 + 0x164) = fVar4 + *(float *)(in_ECX + 8);
  *(float *)(param_1 + 0x168) = fVar4;
  *(float *)(param_1 + 0x16c) = 1.0 / fVar4;
  fVar4 = *pfVar1 - *param_2;
  *(float *)(param_1 + 0xc) = fVar4 + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x10) = fVar4 + *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x14) = *pfVar1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x164);
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x38) + iVar6 * 4);
      iVar5 = 0;
      if (0 < *(int *)(iVar2 + 0x38)) {
        do {
          iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + 0x34) + iVar5 * 4) + 0x50);
          iVar5 = iVar5 + 1;
          *(float *)(iVar3 + 0x5c) = fVar4 + *(float *)(iVar3 + 0x5c);
        } while (iVar5 < *(int *)(iVar2 + 0x38));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x3c));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      FUN_008e77f0(*(undefined4 *)(*(int *)(param_1 + 0x38) + iVar6 * 4),param_2[1],
                   *(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x74));
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x3c));
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x20))(param_1,fVar4);
  *param_2 = *pfVar1;
  param_2[1] = *(float *)(param_1 + 0x164);
  param_2[2] = *(float *)(param_1 + 0x168);
  param_2[3] = *(float *)(param_1 + 0x16c);
  iVar6 = *(int *)(param_1 + 0x74);
  *(float *)(iVar6 + 0x10) = *pfVar1;
  *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_1 + 0x16c);
  return;
}



void FUN_008ded40(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  uVar4 = param_2;
  iVar3 = param_1;
  if (*(char *)(param_1 + 0xa5) != '\0') {
    iVar1 = *(int *)(param_1 + 0x3c);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x38) + iVar1 * 4);
      pcVar5 = (char *)FUN_008ddcd0(&param_1,uVar4);
      if (*pcVar5 != '\0') {
        FUN_008cbbb0(iVar3,uVar2);
      }
    }
  }
  return;
}



void FUN_008deed0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  int *piVar2;
  
  *in_ECX = &PTR_FUN_00a9a574;
  in_ECX[2] = &PTR_LAB_00a9a56c;
  in_ECX[3] = &PTR_LAB_00a9a560;
  piVar2 = in_ECX + 5;
  iVar1 = 6;
  do {
    if (*piVar2 != 0) {
      FUN_008bc730();
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  in_ECX[3] = &PTR_LAB_00a98220;
  in_ECX[2] = &PTR_LAB_00a99b50;
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008def60(void)

{
  uint in_ECX;
  
  FUN_00898b20(-(uint)(in_ECX != 8) & in_ECX);
  if ((*(short *)(in_ECX - 4) != 0) &&
     (*(short *)(in_ECX - 2) = *(short *)(in_ECX - 2) + -1, *(short *)(in_ECX - 2) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x008def95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(in_ECX - 8))();
    return;
  }
  return;
}



void FUN_008df020(byte param_1)

{
  FUN_008deed0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008df080(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
  
  puVar1 = in_ECX + 2;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *puVar1 = &PTR_LAB_00a99b50;
  in_ECX[3] = &PTR_LAB_00a98220;
  puVar2 = in_ECX + 3;
  *in_ECX = &PTR_FUN_00a9a574;
  *puVar1 = &PTR_LAB_00a9a56c;
  *puVar2 = &PTR_LAB_00a9a560;
  in_ECX[4] = param_1;
  in_ECX[0xb] = param_2;
  if (*(short *)(in_ECX + 1) != 0) {
    *(short *)((int)in_ECX + 6) = *(short *)((int)in_ECX + 6) + 1;
  }
  FUN_00899da0(puVar1);
  iVar3 = in_ECX[4];
  local_40 = *(undefined4 *)(iVar3 + 0x280);
  local_3c = *(undefined4 *)(iVar3 + 0x284);
  local_38 = *(undefined4 *)(iVar3 + 0x288);
  local_34 = *(undefined4 *)(iVar3 + 0x28c);
  local_50 = *(undefined4 *)(iVar3 + 0x290);
  local_4c = *(undefined4 *)(iVar3 + 0x294);
  local_48 = *(undefined4 *)(iVar3 + 0x298);
  local_44 = *(undefined4 *)(iVar3 + 0x29c);
  local_24 = 0;
  local_14 = 0;
  uVar9 = 0xa0;
  local_30 = local_50;
  local_2c = local_3c;
  local_28 = local_38;
  local_20 = local_50;
  local_1c = local_4c;
  local_18 = local_48;
  iVar3 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xa0,0x2e);
  *(undefined2 *)(iVar3 + 4) = 0xa0;
  uVar4 = FUN_008cdcb0(&local_38,0);
  FUN_008de750(puVar2);
  in_ECX[5] = uVar4;
  FUN_00899a50(uVar4);
  local_30 = local_40;
  local_34 = local_44;
  local_20 = local_50;
  local_38 = local_48;
  local_2c = 0;
  local_28 = local_48;
  local_1c = 0;
  uVar8 = 0xa0;
  iVar3 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xa0,0x2e);
  *(undefined2 *)(iVar3 + 4) = 0xa0;
  uVar5 = FUN_008cdcb0(&local_40,0);
  FUN_008de750(puVar2);
  in_ECX[6] = uVar5;
  FUN_00899a50(uVar5);
  local_38 = local_48;
  local_40 = local_50;
  local_34 = 0;
  local_24 = 0;
  uVar7 = 0xa0;
  local_3c = uVar4;
  local_2c = uVar4;
  iVar3 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xa0,0x2e);
  *(undefined2 *)(iVar3 + 4) = 0xa0;
  uVar5 = FUN_008cdcb0(&local_48,0);
  FUN_008de750(puVar2);
  in_ECX[7] = uVar5;
  FUN_00899a50(uVar5);
  local_40 = local_50;
  local_3c = 0;
  local_2c = 0;
  local_38 = uVar9;
  iVar3 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xa0,0x2e);
  *(undefined2 *)(iVar3 + 4) = 0xa0;
  uVar6 = FUN_008cdcb0(&local_50,0);
  FUN_008de750(puVar2);
  in_ECX[8] = uVar6;
  FUN_00899a50(uVar6);
  local_44 = 0;
  local_34 = 0;
  local_4c = uVar4;
  local_48 = uVar9;
  local_40 = uVar8;
  local_3c = uVar5;
  local_38 = uVar9;
  iVar3 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xa0,0x2e);
  *(undefined2 *)(iVar3 + 4) = 0xa0;
  uVar4 = FUN_008cdcb0(&stack0xffffffa8,0);
  FUN_008de750(puVar2);
  in_ECX[9] = uVar4;
  FUN_00899a50(uVar4);
  local_4c = 0;
  local_3c = 0;
  local_48 = uVar7;
  local_44 = uVar6;
  iVar3 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xa0,0x2e);
  *(undefined2 *)(iVar3 + 4) = 0xa0;
  uVar4 = FUN_008cdcb0(&stack0xffffffa0,0);
  FUN_008de750(puVar2);
  in_ECX[10] = uVar4;
  FUN_00899a50(uVar4);
  return;
}



void FUN_008df420(void)

{
  undefined4 *in_ECX;
  
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xb] = 0x3f800000;
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
  in_ECX[0x14] = 0x3f800000;
  in_ECX[0x19] = 0x3f800000;
  in_ECX[0x1e] = 0x3f800000;
  in_ECX[0x24] = 0x3f800000;
  in_ECX[0x29] = 0x43480000;
  in_ECX[0x2a] = 0x43480000;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0x3d4ccccd;
  in_ECX[0x27] = 0x3f000000;
  in_ECX[0x28] = 0x3ecccccd;
  in_ECX[0x2b] = 0xbf800000;
  *(undefined1 *)(in_ECX + 0x2c) = 1;
  *(undefined1 *)((int)in_ECX + 0xb1) = 2;
  *(undefined1 *)((int)in_ECX + 0xb2) = 2;
  *(undefined1 *)((int)in_ECX + 0xb3) = 0;
  *(undefined1 *)(in_ECX + 2) = 1;
  *(undefined2 *)((int)in_ECX + 10) = 0xffff;
  *in_ECX = 0;
  in_ECX[1] = 0;
  *(undefined1 *)(in_ECX + 0x2d) = 0;
  return;
}



int * FUN_008df540(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *piVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x48)) {
    piVar3 = *(int **)(in_ECX + 0x44);
    do {
      if (*piVar3 == 0x1140) {
        return *(int **)(in_ECX + 0x44) + iVar1 * 4 + 2;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar1 < *(int *)(in_ECX + 0x48));
  }
  if (*(uint *)(in_ECX + 0x48) == (*(uint *)(in_ECX + 0x4c) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x44),0x10);
  }
  puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x48) * 0x10 + *(int *)(in_ECX + 0x44));
  piVar3 = puVar2 + 2;
  *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + 1;
  *puVar2 = 0x1140;
  if (piVar3 != (int *)0x0) {
    *(undefined1 *)piVar3 = 0xfd;
    *(undefined1 *)((int)puVar2 + 9) = 0;
    return piVar3;
  }
  return (int *)0x0;
}



void FUN_008df5c0(int param_1,int *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  iVar3 = *(char *)(param_1 + 8) * 0x3c + 0x1a14 + *param_2;
  param_2[10] = iVar3;
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(iVar3 + 0x10);
  *param_3 = (int)(param_3 + 0xc);
  param_3[0xc0d] = 0x7f7fffff;
  param_3[0xc10] = 0;
  FUN_008e6d10(param_1,param_2,param_3);
  iVar3 = *(int *)(DAT_00ba7d98 + 0x28) + *(int *)(DAT_00ba7d98 + 0x14);
  if ((*(int *)(DAT_00ba7d98 + 8) <= iVar3) || (*(int *)(DAT_00ba7d98 + 8) == iVar3)) {
    *(undefined4 *)(DAT_00ba7d98 + 4) = 1;
  }
  if (*(int *)(DAT_00ba7d98 + 4) != 1) {
    if ((int *)*param_3 != param_3 + 0xc) {
      (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(uVar1,uVar2,param_2,param_3);
    }
    if ((float)param_3[0xc0d] < 3.4028235e+38) {
      FUN_008a7720();
      FUN_008d3600(param_3,param_1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 0x140));
    }
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_008df6b0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int unaff_FS_OFFSET;
  undefined1 local_3084 [2];
  ushort local_3082;
  int local_3080;
  int local_307c;
  int local_3078;
  undefined4 local_3074;
  undefined4 local_3070;
  undefined4 local_306c;
  undefined4 uStack_3068;
  int local_3064;
  undefined1 local_3060 [12340];
  undefined4 local_2c;
  undefined4 uStack_14;
  
  uStack_14 = 0x8df6c0;
  local_3078 = in_ECX + 0xc0;
  iVar4 = FUN_00926090(param_1[2],local_3084);
  do {
    if (iVar4 != 0) {
      FUN_00926050();
      return;
    }
switchD_008df6fa_caseD_1:
    iVar4 = _tls_index;
    switch(local_3084[0]) {
    case 0:
      iVar5 = *param_1;
      iVar6 = *(int *)(*(int *)(iVar5 + 0x38) + (uint)local_3082 * 4);
      iVar4 = iVar5 + 0x160;
      iVar8 = 0;
      if (0 < *(int *)(iVar6 + 0x60)) {
        do {
          piVar1 = *(int **)(*(int *)(iVar6 + 0x5c) + iVar8 * 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(iVar4);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(iVar6 + 0x60));
      }
      if (*(int *)(iVar6 + 0xc) == 0) {
        iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
          puVar2 = *(undefined4 **)(iVar8 + 0x1a4);
          *puVar2 = "TtSingleObj";
          uVar3 = rdtsc();
          local_306c = (undefined4)uVar3;
          puVar2[1] = local_306c;
          *(undefined4 **)(iVar8 + 0x1a4) = puVar2 + 3;
        }
        iVar8 = *(int *)(iVar6 + 0x38);
        while (iVar8 = iVar8 + -1, -1 < iVar8) {
          (**(code **)(**(int **)(*(int *)(*(int *)(iVar6 + 0x34) + iVar8 * 4) + 0x50) + 0x10))
                    (iVar4,iVar5 + 400);
        }
        iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
          puVar2 = *(undefined4 **)(iVar4 + 0x1a4);
          *puVar2 = &DAT_00a9610c;
          uVar3 = rdtsc();
          uStack_3068 = (undefined4)uVar3;
          puVar2[1] = uStack_3068;
          *(undefined4 **)(iVar4 + 0x1a4) = puVar2 + 3;
        }
      }
      else {
        FUN_00924000(iVar4,iVar5 + 0x170,param_1 + 0xe,iVar6,*(undefined4 *)(iVar6 + 0x34),
                     *(undefined4 *)(iVar6 + 0x38));
      }
      local_3084[0] = 4;
      FUN_00926510(0,param_1[2],local_3084);
    default:
      goto switchD_008df6fa_caseD_1;
    case 4:
      iVar4 = *(int *)(*(int *)(*param_1 + 0x38) + (uint)local_3082 * 4);
      FUN_008d4590(*(undefined4 *)(iVar4 + 0x34),*(undefined4 *)(iVar4 + 0x38),*param_1,
                   param_1[1] + 0x180);
      if (*(int *)(iVar4 + 0x48) < 1) {
        local_3084[0] = 5;
        FUN_00926510(1,param_1[2],local_3084);
      }
      else {
        local_3084[0] = 6;
        local_3080 = 0;
        local_307c = *(int *)(iVar4 + 0x48);
        FUN_00926510(1,param_1[2],local_3084);
      }
      goto switchD_008df6fa_caseD_1;
    case 5:
      goto switchD_008df6fa_caseD_5;
    case 6:
      iVar6 = *(int *)(*(int *)(*param_1 + 0x38) + (uint)local_3082 * 4);
      iVar5 = *(int *)(unaff_FS_OFFSET + 0x2c);
      iVar8 = *(int *)(iVar5 + _tls_index * 4);
      if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
        puVar2 = *(undefined4 **)(iVar8 + 0x1a4);
        *puVar2 = "TtNarrowPhase";
        uVar3 = rdtsc();
        local_3074 = (undefined4)uVar3;
        iVar5 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + iVar4 * 4);
        puVar2[1] = local_3074;
        *(undefined4 **)(iVar5 + 0x1a4) = puVar2 + 3;
        iVar5 = *(int *)(unaff_FS_OFFSET + 0x2c);
      }
      local_307c = local_307c + -1;
      local_2c = 0x7f7fffff;
      local_3064 = iVar6;
      if (-1 < local_307c) {
        do {
          uVar7 = *(uint *)(*(int *)(iVar6 + 0x44) + local_3080 * 4);
          if (local_3080 < *(int *)(iVar6 + 0x48) + -1) {
            uVar9 = (uint)*(ushort *)(iVar6 + 0x5a);
          }
          else {
            uVar9 = *(uint *)(iVar6 + 0x54);
          }
          uVar9 = uVar9 + uVar7;
          if (uVar7 < uVar9) {
            do {
              FUN_008df5c0(uVar7,param_1 + 3,local_3060,param_1[1]);
              uVar7 = uVar7 + *(byte *)(uVar7 + 3);
              iVar6 = local_3064;
            } while (uVar7 < uVar9);
          }
          local_3080 = local_3080 + 1;
          local_307c = local_307c + -1;
        } while (-1 < local_307c);
        iVar5 = *(int *)(unaff_FS_OFFSET + 0x2c);
        iVar4 = _tls_index;
      }
      iVar4 = *(int *)(iVar5 + iVar4 * 4);
      if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
        puVar2 = *(undefined4 **)(iVar4 + 0x1a4);
        *puVar2 = &DAT_00a9610c;
        uVar3 = rdtsc();
        local_3070 = (undefined4)uVar3;
        puVar2[1] = local_3070;
        *(undefined4 **)(iVar4 + 0x1a4) = puVar2 + 3;
      }
switchD_008df6fa_caseD_5:
      FUN_00926030();
      iVar4 = FUN_00926090(param_1[2],local_3084);
    }
  } while( true );
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_008dfb70(int param_1,undefined4 param_2,float param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  int in_ECX;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int unaff_FS_OFFSET;
  float fStack_30f0;
  float fStack_30ec;
  float fStack_30e8;
  float fStack_30e4;
  float fStack_30e0;
  int *piStack_30dc;
  int iStack_30d8;
  int iStack_30d4;
  int aiStack_30d0 [2];
  undefined4 uStack_30c8;
  undefined4 auStack_30c4 [11];
  undefined4 uStack_3098;
  undefined4 uStack_3094;
  undefined4 uStack_3090;
  undefined4 uStack_308c;
  undefined4 uStack_3088;
  undefined1 auStack_3068 [12340];
  undefined4 uStack_34;
  undefined4 uStack_14;
  
  uStack_14 = 0x8dfb80;
  *(float *)(in_ECX + 8) = param_3;
  *(undefined1 *)(in_ECX + 0x44) = 1;
  *(float *)(param_1 + 0x10) = param_3 + *(float *)(param_1 + 0x10);
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  (**(code **)(**(int **)(in_ECX + 0x20) + 8))();
  fStack_30e4 = param_3 + *(float *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(float *)(param_1 + 0x18) = fStack_30e4;
  fStack_30e8 = *(float *)(param_1 + 0x14);
  fStack_30e0 = fStack_30e4 - fStack_30e8;
  if (fStack_30e0 == 0.0) {
    piStack_30dc = (int *)0x0;
  }
  else {
    piStack_30dc = (int *)(1.0 / fStack_30e0);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
  *(float *)(param_1 + 0x160) = fStack_30e8;
  *(float *)(param_1 + 0x164) = fStack_30e4;
  *(float *)(param_1 + 0x168) = fStack_30e0;
  *(int **)(param_1 + 0x16c) = piStack_30dc;
  iVar10 = *(int *)(param_1 + 0x74);
  *(float *)(iVar10 + 0x10) = fStack_30e8;
  *(float *)(iVar10 + 0x14) = fStack_30e4;
  *(float *)(iVar10 + 0x18) = fStack_30e0;
  *(int **)(iVar10 + 0x1c) = piStack_30dc;
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))(param_1,&fStack_30e8);
  FUN_008cc3f0(param_1);
  FUN_0060d0a0();
  *(float *)(param_1 + 0x160) = fStack_30f0;
  *(float *)(param_1 + 0x164) = fStack_30ec;
  *(float *)(param_1 + 0x168) = fStack_30e8;
  *(float *)(param_1 + 0x16c) = fStack_30e4;
  fVar5 = fStack_30e8 * *(float *)(param_1 + 0x270);
  *(float *)(param_1 + 0x264) = fVar5;
  *(float *)(param_1 + 0x268) = (float)*(int *)(param_1 + 0x26c) * fStack_30e4;
  *(float *)(param_1 + 0x180) = fVar5 * *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x184) = fVar5 * *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x188) = fVar5 * *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x18c) = fVar5 * *(float *)(param_1 + 0x2c);
  fStack_30e0 = fStack_30e8;
  *(float *)(param_1 + 400) = fStack_30e8 * *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x194) = fStack_30e8 * *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x198) = fStack_30e8 * *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x19c) = fStack_30e8 * *(float *)(param_1 + 0x2c);
  if (0 < *(int *)(param_1 + 0x3c)) {
    piStack_30dc = (int *)(((uint)piStack_30dc >> 8 & 0xff) << 8);
    iStack_30d8 = *(int *)(param_1 + 0x3c);
    FUN_009264d0(&piStack_30dc,1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xc0));
  iVar10 = iStack_30d4;
  uStack_3098 = *(undefined4 *)(param_1 + 0x264);
  uStack_3094 = *(undefined4 *)(param_1 + 0x268);
  uStack_30c8 = 0;
  aiStack_30d0[0] = param_1;
  puVar7 = *(undefined4 **)(param_1 + 0x74);
  puVar9 = auStack_30c4;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  uStack_3088 = *(undefined4 *)(param_1 + 0x270);
  uStack_3090 = *(undefined4 *)(param_1 + 0x168);
  uStack_308c = *(undefined4 *)(param_1 + 0x16c);
  FUN_008df6b0(aiStack_30d0);
  FUN_008d84f0(iVar10 + 0x48,iVar10 + 0x6c);
  uStack_34 = 0x7f7fffff;
  fStack_30e0 = 0.0;
  if (0 < *(int *)(iVar10 + 0x4c)) {
    do {
      piVar1 = (int *)(*(int *)(iVar10 + 0x48) + (int)fStack_30e0 * 8);
      iVar6 = *piVar1;
      iVar8 = piVar1[1];
      iVar8 = *(char *)(iVar8 + 5) + iVar8;
      piStack_30dc = *(int **)(*(int *)(iVar10 + 0x28) + 0x74);
      iVar6 = *(char *)(iVar6 + 5) + iVar6;
      cVar2 = *(char *)((uint)*(ushort *)(iVar8 + 0x1a) + *piStack_30dc + 0x19d4 +
                       (uint)*(ushort *)(iVar6 + 0x1a) * 8);
      iVar10 = iStack_30d4;
      if (cVar2 != '\0') {
        *(undefined1 *)(piStack_30dc + 3) = *(undefined1 *)(cVar2 * 0x3c + 0x1a24 + *piStack_30dc);
        iVar6 = FUN_008e7850(iVar6,iVar8,piStack_30dc);
        iVar10 = iStack_30d4;
        if (iVar6 != 0) {
          FUN_008df5c0(iVar6,*(undefined4 *)(*(int *)(iStack_30d4 + 0x28) + 0x74),auStack_3068,
                       iStack_30d4);
        }
      }
      fStack_30e0 = (float)((int)fStack_30e0 + 1);
    } while ((int)fStack_30e0 < *(int *)(iVar10 + 0x4c));
  }
  iVar6 = 0;
  *(undefined4 *)(iVar10 + 0x4c) = 0;
  if (0 < *(int *)(iVar10 + 0x70)) {
    do {
      iVar8 = *(int *)(*(int *)(iVar10 + 0x6c) + iVar6 * 8);
      iVar3 = *(int *)(*(int *)(iVar10 + 0x6c) + iVar6 * 8 + 4);
      iVar8 = FUN_008e66d0(*(char *)(iVar8 + 5) + iVar8,*(char *)(iVar3 + 5) + iVar3);
      if (iVar8 != 0) {
        FUN_008e7920(iVar8);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar10 + 0x70));
  }
  *(undefined4 *)(iVar10 + 0x70) = 0;
  *(undefined1 *)(iVar10 + 0x44) = 0;
  piVar1 = (int *)(param_1 + 0x88);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (*(int *)(param_1 + 0x84) != 0)) && (*(char *)(param_1 + 0x90) == '\0')) {
    FUN_00899210();
  }
  if (*(int *)(iVar10 + 0x18) != 0) {
    FUN_008d33e0(param_1,*(undefined4 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
  iVar10 = _tls_index;
  if (*(int *)(param_1 + 0x110) != 0) {
    iVar6 = *(int *)(unaff_FS_OFFSET + 0x2c);
    iVar8 = *(int *)(iVar6 + _tls_index * 4);
    if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
      puVar7 = *(undefined4 **)(iVar8 + 0x1a4);
      *puVar7 = "TtPostSimulateCb";
      uVar4 = rdtsc();
      piStack_30dc = (int *)uVar4;
      iVar8 = *(int *)(iVar6 + iVar10 * 4);
      puVar7[1] = piStack_30dc;
      *(undefined4 **)(iVar8 + 0x1a4) = puVar7 + 3;
    }
    fStack_30ec = *(float *)(param_1 + 0x18);
    fStack_30f0 = *(float *)(param_1 + 0x14);
    fStack_30e8 = fStack_30ec - fStack_30f0;
    if (fStack_30e8 == 0.0) {
      fStack_30e4 = 0.0;
    }
    else {
      fStack_30e4 = 1.0 / fStack_30e8;
    }
    FUN_008dcd60(param_1,&fStack_30f0);
    iVar10 = *(int *)(iVar6 + iVar10 * 4);
    if (*(uint *)(iVar10 + 0x1a4) < *(uint *)(iVar10 + 0x1a8)) {
      puVar7 = *(undefined4 **)(iVar10 + 0x1a4);
      *puVar7 = &DAT_00a9610c;
      uVar4 = rdtsc();
      puVar7[1] = (int)uVar4;
      *(undefined4 **)(iVar10 + 0x1a4) = puVar7 + 3;
    }
  }
  return;
}



longlong FUN_008dffb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int unaff_FS_OFFSET;
  int local_64 [2];
  undefined4 local_5c;
  undefined4 local_58 [11];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar8 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar4 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar6 = "TtSimulate";
    uVar3 = rdtsc();
    puVar6[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar6 + 3;
  }
  FUN_008a7720();
  iVar4 = *(int *)(in_ECX + 0x90) + 1;
  *(int *)(in_ECX + 0x90) = iVar4;
  if (iVar4 == 1) {
    FUN_008dfb70(param_1,param_2,param_3);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xc0));
    uVar2 = *(undefined4 *)(param_1 + 0x268);
    local_64[0] = param_1;
    local_5c = 1;
    puVar6 = *(undefined4 **)(param_1 + 0x74);
    puVar7 = local_58;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    local_2c = *(undefined4 *)(param_1 + 0x264);
    local_1c = *(undefined4 *)(param_1 + 0x270);
    local_24 = *(undefined4 *)(param_1 + 0x168);
    local_20 = *(undefined4 *)(param_1 + 0x16c);
    local_28 = uVar2;
    FUN_008df6b0(local_64);
    iVar8 = _tls_index;
  }
  iVar1 = *(int *)(iVar1 + iVar8 * 4);
  uVar5 = *(uint *)(iVar1 + 0x1a4);
  if (uVar5 < *(uint *)(iVar1 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar6 = &DAT_00a9610c;
    uVar3 = rdtsc();
    uVar5 = (uint)((ulonglong)uVar3 >> 0x20);
    puVar6[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar6 + 3;
  }
  return (ulonglong)uVar5 << 0x20;
}


