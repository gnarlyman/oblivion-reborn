
void FUN_009202a0(int param_1,char *param_2,undefined4 param_3,float *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
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
  float *local_a8;
  float *local_a4;
  char *local_a0;
  undefined4 local_90;
  undefined4 local_88;
  
  local_88 = *(undefined4 *)(param_1 + 8);
  local_90 = *(undefined4 *)(param_1 + 4);
  local_a4 = param_4;
switchD_009202fc_caseD_1:
  iVar3 = *(int *)(param_2 + 0xc);
  iVar4 = *(int *)(param_2 + 0x10);
  pfVar7 = *(float **)(param_2 + 4);
  local_a0 = param_2 + 0x18;
LAB_009202e0:
  local_a8 = pfVar7 + 0x10;
  pfVar8 = param_4;
  pfVar9 = pfVar7;
  pcVar1 = local_a0;
LAB_009202f0:
  local_a0 = pcVar1;
  pfVar7 = pfVar9;
  param_4 = pfVar8;
  param_2 = local_a0;
  pfVar8 = param_4;
  pfVar9 = pfVar7;
  switch(*local_a0) {
  case '\0':
    return;
  case '\x01':
    goto switchD_009202fc_caseD_1;
  case '\x02':
    goto switchD_009202fc_caseD_2;
  case '\x03':
    goto switchD_009202fc_caseD_3;
  case '\x04':
    goto switchD_009202fc_caseD_4;
  case '\x05':
    goto switchD_009202fc_caseD_5;
  case '\x06':
    goto switchD_009202fc_caseD_6;
  case '\a':
    fVar17 = *(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10);
    fVar20 = *(float *)(iVar3 + 0x14) - *(float *)(iVar4 + 0x14);
    fVar23 = *(float *)(iVar3 + 0x18) - *(float *)(iVar4 + 0x18);
    fVar10 = *(float *)(param_1 + 0xc) * pfVar7[3] -
             (*(float *)(iVar3 + 0x28) * pfVar7[6] + *(float *)(iVar4 + 0x28) * pfVar7[10] +
              fVar23 * pfVar7[2] +
             *(float *)(iVar3 + 0x24) * pfVar7[5] + *(float *)(iVar4 + 0x24) * pfVar7[9] +
             fVar20 * pfVar7[1] +
             *(float *)(iVar3 + 0x20) * pfVar7[4] + *(float *)(iVar4 + 0x20) * pfVar7[8] +
             fVar17 * *pfVar7) * *(float *)(param_1 + 8);
    fVar17 = pfVar7[0xf] * *(float *)(param_1 + 0xc) -
             (*(float *)(iVar3 + 0x28) * pfVar7[0x12] + *(float *)(iVar4 + 0x28) * pfVar7[0x16] +
              fVar23 * pfVar7[0xe] +
             *(float *)(iVar3 + 0x24) * pfVar7[0x11] + *(float *)(iVar4 + 0x24) * pfVar7[0x15] +
             fVar20 * pfVar7[0xd] +
             *(float *)(iVar3 + 0x20) * pfVar7[0x10] + *(float *)(iVar4 + 0x20) * pfVar7[0x14] +
             fVar17 * pfVar7[0xc]) * *(float *)(param_1 + 8);
    fVar20 = *(float *)(local_a0 + 0xc) * *(float *)(local_a0 + 0xc);
    fVar23 = fVar17 * *(float *)(local_a0 + 8) + fVar10 * pfVar7[0xb];
    fVar10 = fVar10 * *(float *)(local_a0 + 8) + fVar17 * pfVar7[0x17];
    fVar17 = fVar10 * fVar10 + fVar23 * fVar23;
    if (fVar20 < fVar17) {
      fVar17 = SQRT(fVar20 / fVar17);
      fVar23 = fVar17 * fVar23;
      fVar10 = fVar17 * fVar10;
      pfVar7[3] = fVar17 * pfVar7[3];
      pfVar7[0xf] = fVar17 * pfVar7[0xf];
    }
    fVar17 = *(float *)(iVar3 + 0x30);
    fVar20 = *(float *)(iVar3 + 0x34);
    fVar11 = *(float *)(iVar3 + 0x38);
    param_2 = local_a0 + 0x14;
    fVar25 = fVar23 * *(float *)(iVar3 + 0x3c);
    fVar12 = *(float *)(iVar4 + 0x30);
    fVar15 = *(float *)(iVar4 + 0x34);
    fVar18 = *(float *)(iVar4 + 0x38);
    fVar16 = *pfVar7;
    fVar19 = pfVar7[1];
    fVar22 = pfVar7[2];
    fVar6 = pfVar7[3];
    fVar26 = fVar23 * *(float *)(iVar4 + 0x3c);
    *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar25 * fVar16;
    *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar25 * fVar19;
    *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar25 * fVar22;
    *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar25 * fVar6;
    *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar26 * fVar16;
    *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar26 * fVar19;
    *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar26 * fVar22;
    *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar26 * fVar6;
    fVar16 = pfVar7[8];
    fVar19 = pfVar7[9];
    fVar22 = pfVar7[10];
    fVar6 = pfVar7[0xb];
    fVar21 = pfVar7[5];
    fVar14 = pfVar7[6];
    fVar13 = pfVar7[7];
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar23 * fVar17 * pfVar7[4];
    *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar23 * fVar20 * fVar21;
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar23 * fVar11 * fVar14;
    *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar25 * fVar13;
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar23 * fVar12 * fVar16;
    *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar23 * fVar15 * fVar19;
    *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar23 * fVar18 * fVar22;
    *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar26 * fVar6;
    *param_4 = fVar23 + *param_4;
    fVar17 = *(float *)(iVar3 + 0x30);
    fVar20 = *(float *)(iVar3 + 0x34);
    fVar23 = *(float *)(iVar3 + 0x38);
    fVar13 = fVar10 * *(float *)(iVar3 + 0x3c);
    fVar11 = *(float *)(iVar4 + 0x30);
    fVar12 = *(float *)(iVar4 + 0x34);
    fVar15 = *(float *)(iVar4 + 0x38);
    fVar18 = pfVar7[0xc];
    fVar16 = pfVar7[0xd];
    fVar19 = pfVar7[0xe];
    fVar22 = pfVar7[0xf];
    fVar25 = fVar10 * *(float *)(iVar4 + 0x3c);
    *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar13 * fVar18;
    *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar13 * fVar16;
    *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar13 * fVar19;
    *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar13 * fVar22;
    *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar25 * fVar18;
    *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar25 * fVar16;
    *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar25 * fVar19;
    *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar25 * fVar22;
    fVar18 = pfVar7[0x14];
    fVar16 = pfVar7[0x15];
    fVar19 = pfVar7[0x16];
    fVar22 = pfVar7[0x17];
    fVar6 = pfVar7[0x11];
    fVar21 = pfVar7[0x12];
    fVar14 = pfVar7[0x13];
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar10 * fVar17 * pfVar7[0x10];
    *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar10 * fVar20 * fVar6;
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar10 * fVar23 * fVar21;
    *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar13 * fVar14;
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar10 * fVar11 * fVar18;
    *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar10 * fVar12 * fVar16;
    *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar10 * fVar15 * fVar19;
    *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar25 * fVar22;
    param_4[1] = fVar10 + param_4[1];
    cVar2 = *param_2;
    param_4 = param_4 + 2;
    pfVar7 = pfVar7 + 0x18;
    goto joined_r0x00920fec;
  case '\b':
    goto switchD_009202fc_caseD_8;
  case '\t':
    goto switchD_009202fc_caseD_9;
  case '\n':
    goto switchD_009202fc_caseD_a;
  case '\v':
    goto switchD_009202fc_caseD_b;
  case '\f':
    goto switchD_009202fc_caseD_c;
  case '\r':
    break;
  case '\x0e':
    (**(code **)(local_a0 + 4))(pfVar7,local_a0 + 8);
    local_a0 = local_a0 + (byte)local_a0[1];
    param_4 = local_a4;
    goto LAB_009202e0;
  case '\x0f':
    local_88 = *(undefined4 *)(param_1 + 8);
    local_90 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(local_a0 + 8);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(local_a0 + 4);
    local_a0 = local_a0 + 0xc;
    param_4 = local_a4;
    goto LAB_009202e0;
  case '\x10':
    *(undefined4 *)(param_1 + 4) = local_90;
    *(undefined4 *)(param_1 + 8) = local_88;
    local_a0 = local_a0 + 4;
    param_4 = local_a4;
    goto LAB_009202e0;
  default:
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  do {
    fVar17 = *pfVar9;
    fVar20 = pfVar9[1];
    fVar23 = pfVar9[2];
    fVar11 = pfVar9[3];
    fVar12 = *(float *)(iVar3 + 0x30);
    fVar15 = *(float *)(iVar3 + 0x34);
    fVar18 = *(float *)(iVar3 + 0x38);
    local_a0 = local_a0 + 4;
    pfVar7 = pfVar9 + 0xc;
    param_4 = pfVar8 + 1;
    fVar10 = (pfVar9[3] * *(float *)(param_1 + 4) -
             (*(float *)(iVar3 + 0x28) * pfVar9[6] + *(float *)(iVar4 + 0x28) * pfVar9[10] +
              (*(float *)(iVar3 + 0x18) - *(float *)(iVar4 + 0x18)) * fVar23 +
             *(float *)(iVar3 + 0x24) * pfVar9[5] + *(float *)(iVar4 + 0x24) * pfVar9[9] +
             (*(float *)(iVar3 + 0x14) - *(float *)(iVar4 + 0x14)) * fVar20 +
             *(float *)(iVar3 + 0x20) * pfVar9[4] + *(float *)(iVar4 + 0x20) * pfVar9[8] +
             (*(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10)) * fVar17) *
             *(float *)(param_1 + 8)) * pfVar9[7];
    fVar13 = fVar10 * *(float *)(iVar3 + 0x3c);
    fVar16 = *(float *)(iVar4 + 0x30);
    fVar19 = *(float *)(iVar4 + 0x34);
    fVar22 = *(float *)(iVar4 + 0x38);
    fVar25 = fVar10 * *(float *)(iVar4 + 0x3c);
    *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar13 * fVar17;
    *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar13 * fVar20;
    *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar13 * fVar23;
    *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar13 * fVar11;
    *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar25 * fVar17;
    *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar25 * fVar20;
    *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar25 * fVar23;
    *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar25 * fVar11;
    fVar17 = pfVar9[8];
    fVar20 = pfVar9[9];
    fVar23 = pfVar9[10];
    fVar11 = pfVar9[0xb];
    fVar6 = pfVar9[5];
    fVar21 = pfVar9[6];
    fVar14 = pfVar9[7];
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar10 * fVar12 * pfVar9[4];
    *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar10 * fVar15 * fVar6;
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar10 * fVar18 * fVar21;
    *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar13 * fVar14;
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar10 * fVar16 * fVar17;
    *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar10 * fVar19 * fVar20;
    *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar10 * fVar22 * fVar23;
    *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar25 * fVar11;
    *pfVar8 = fVar10 + *pfVar8;
    pfVar8 = param_4;
    pfVar9 = pfVar7;
    local_a4 = param_4;
  } while (*local_a0 == '\r');
  goto LAB_009202e0;
switchD_009202fc_caseD_c:
  do {
    fVar17 = pfVar9[4];
    fVar20 = pfVar9[5];
    fVar23 = pfVar9[6];
    fVar11 = pfVar9[7];
    fVar12 = pfVar9[1];
    fVar15 = pfVar9[2];
    fVar18 = pfVar9[3];
    fVar16 = *(float *)(iVar4 + 0x30);
    fVar19 = *(float *)(iVar4 + 0x34);
    fVar22 = *(float *)(iVar4 + 0x38);
    fVar6 = *(float *)(iVar4 + 0x3c);
    local_a0 = local_a0 + 4;
    pfVar7 = pfVar9 + 8;
    param_4 = pfVar8 + 1;
    fVar10 = (pfVar9[7] * *(float *)(param_1 + 4) -
             (*(float *)(iVar3 + 0x28) * fVar15 + *(float *)(iVar4 + 0x28) * fVar23 +
             *(float *)(iVar3 + 0x24) * fVar12 + *(float *)(iVar4 + 0x24) * fVar20 +
             *(float *)(iVar3 + 0x20) * *pfVar9 + *(float *)(iVar4 + 0x20) * fVar17) *
             *(float *)(param_1 + 8)) * pfVar9[3];
    *(float *)(iVar3 + 0x20) =
         *(float *)(iVar3 + 0x20) + fVar10 * *(float *)(iVar3 + 0x30) * *pfVar9;
    *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar10 * *(float *)(iVar3 + 0x34) * fVar12
    ;
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar10 * *(float *)(iVar3 + 0x38) * fVar15
    ;
    *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar10 * *(float *)(iVar3 + 0x3c) * fVar18
    ;
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar10 * fVar16 * fVar17;
    *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar10 * fVar19 * fVar20;
    *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar10 * fVar22 * fVar23;
    *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar10 * fVar6 * fVar11;
    *pfVar8 = fVar10 + *pfVar8;
    pfVar8 = param_4;
    pfVar9 = pfVar7;
    local_a4 = param_4;
  } while (*local_a0 == '\f');
  goto LAB_009202e0;
switchD_009202fc_caseD_b:
  do {
    fVar20 = *pfVar7;
    fVar23 = pfVar7[1];
    fVar11 = pfVar7[2];
    fVar12 = pfVar7[3];
    fVar10 = (*(float *)(iVar3 + 0x28) * pfVar7[6] + *(float *)(iVar4 + 0x28) * pfVar7[10] +
              (*(float *)(iVar3 + 0x18) - *(float *)(iVar4 + 0x18)) * fVar11 +
             *(float *)(iVar3 + 0x24) * pfVar7[5] + *(float *)(iVar4 + 0x24) * pfVar7[9] +
             (*(float *)(iVar3 + 0x14) - *(float *)(iVar4 + 0x14)) * fVar23 +
             *(float *)(iVar3 + 0x20) * pfVar7[4] + *(float *)(iVar4 + 0x20) * pfVar7[8] +
             (*(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10)) * fVar20) *
             *(float *)(param_1 + 8);
    fVar17 = (pfVar7[3] - *(float *)(local_a0 + 4)) * *(float *)(param_1 + 4) - fVar10;
    if (0.0 < fVar17) {
      fVar17 = fVar17 * pfVar7[7];
      fVar15 = *(float *)(iVar3 + 0x30);
      fVar18 = *(float *)(iVar3 + 0x34);
      fVar16 = *(float *)(iVar3 + 0x38);
      fVar25 = fVar17 * *(float *)(iVar3 + 0x3c);
      fVar19 = *(float *)(iVar4 + 0x30);
      fVar22 = *(float *)(iVar4 + 0x34);
      fVar6 = *(float *)(iVar4 + 0x38);
      fVar26 = fVar17 * *(float *)(iVar4 + 0x3c);
      *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar25 * fVar20;
      *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar25 * fVar23;
      *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar25 * fVar11;
      *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar25 * fVar12;
      *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar26 * fVar20;
      *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar26 * fVar23;
      *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar26 * fVar11;
      *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar26 * fVar12;
      fVar20 = pfVar7[8];
      fVar23 = pfVar7[9];
      fVar11 = pfVar7[10];
      fVar12 = pfVar7[0xb];
      fVar21 = pfVar7[5];
      fVar14 = pfVar7[6];
      fVar13 = pfVar7[7];
      *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar17 * fVar15 * pfVar7[4];
      *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar17 * fVar18 * fVar21;
      *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar17 * fVar16 * fVar14;
      *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar25 * fVar13;
      *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar17 * fVar19 * fVar20;
      *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar17 * fVar22 * fVar23;
      *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar17 * fVar6 * fVar11;
      *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar26 * fVar12;
      *local_a4 = fVar17 + *local_a4;
    }
    fVar10 = (pfVar7[3] - *(float *)(local_a0 + 8)) * *(float *)(param_1 + 4) - fVar10;
    if (fVar10 < 0.0) {
      fVar10 = fVar10 * pfVar7[7];
      fVar17 = *(float *)(iVar3 + 0x30);
      fVar20 = *(float *)(iVar3 + 0x34);
      fVar23 = *(float *)(iVar3 + 0x38);
      fVar13 = fVar10 * *(float *)(iVar3 + 0x3c);
      fVar11 = *(float *)(iVar4 + 0x30);
      fVar12 = *(float *)(iVar4 + 0x34);
      fVar15 = *(float *)(iVar4 + 0x38);
      fVar18 = *pfVar7;
      fVar16 = pfVar7[1];
      fVar19 = pfVar7[2];
      fVar22 = pfVar7[3];
      fVar25 = fVar10 * *(float *)(iVar4 + 0x3c);
      *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar13 * fVar18;
      *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar13 * fVar16;
      *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar13 * fVar19;
      *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar13 * fVar22;
      *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar25 * fVar18;
      *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar25 * fVar16;
      *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar25 * fVar19;
      *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar25 * fVar22;
      fVar18 = pfVar7[8];
      fVar16 = pfVar7[9];
      fVar19 = pfVar7[10];
      fVar22 = pfVar7[0xb];
      fVar6 = pfVar7[5];
      fVar21 = pfVar7[6];
      fVar14 = pfVar7[7];
      *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar10 * fVar17 * pfVar7[4];
      *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar10 * fVar20 * fVar6;
      *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar10 * fVar23 * fVar21;
      *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar13 * fVar14;
      *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar10 * fVar11 * fVar18;
      *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar10 * fVar12 * fVar16;
      *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar10 * fVar15 * fVar19;
      *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar25 * fVar22;
      *local_a4 = fVar10 + *local_a4;
    }
    pfVar7 = (float *)FUN_008f0ee0(1);
    param_4 = local_a4 + 1;
    pcVar1 = local_a0 + 0xc;
    local_a0 = local_a0 + 0xc;
    local_a4 = param_4;
  } while (*pcVar1 == '\v');
  goto LAB_009202e0;
switchD_009202fc_caseD_a:
  do {
    fVar20 = pfVar7[4];
    fVar23 = pfVar7[5];
    fVar11 = pfVar7[6];
    fVar12 = pfVar7[7];
    fVar15 = *pfVar7;
    fVar18 = pfVar7[1];
    fVar16 = pfVar7[2];
    fVar19 = pfVar7[3];
    fVar10 = (*(float *)(iVar3 + 0x28) * fVar16 + *(float *)(iVar4 + 0x28) * fVar11 +
             *(float *)(iVar3 + 0x24) * fVar18 + *(float *)(iVar4 + 0x24) * fVar23 +
             *(float *)(iVar3 + 0x20) * fVar15 + *(float *)(iVar4 + 0x20) * fVar20) *
             *(float *)(param_1 + 8);
    fVar17 = (pfVar7[7] - *(float *)(local_a0 + 4)) * *(float *)(local_a0 + 0xc) - fVar10;
    if (fVar17 <= 0.0) {
      fVar10 = (pfVar7[7] - *(float *)(local_a0 + 8)) * *(float *)(local_a0 + 0xc) - fVar10;
      if (fVar10 < 0.0) {
        fVar10 = fVar10 * pfVar7[3];
        fVar17 = *(float *)(iVar4 + 0x30);
        fVar22 = *(float *)(iVar4 + 0x34);
        fVar6 = *(float *)(iVar4 + 0x38);
        fVar21 = *(float *)(iVar4 + 0x3c);
        *(float *)(iVar3 + 0x20) =
             *(float *)(iVar3 + 0x20) + fVar10 * *(float *)(iVar3 + 0x30) * fVar15;
        *(float *)(iVar3 + 0x24) =
             *(float *)(iVar3 + 0x24) + fVar10 * *(float *)(iVar3 + 0x34) * fVar18;
        *(float *)(iVar3 + 0x28) =
             *(float *)(iVar3 + 0x28) + fVar10 * *(float *)(iVar3 + 0x38) * fVar16;
        *(float *)(iVar3 + 0x2c) =
             *(float *)(iVar3 + 0x2c) + fVar10 * *(float *)(iVar3 + 0x3c) * fVar19;
        *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar10 * fVar17 * fVar20;
        *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar10 * fVar22 * fVar23;
        *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar10 * fVar6 * fVar11;
        *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar10 * fVar21 * fVar12;
        *param_4 = fVar10 + *param_4;
      }
    }
    else {
      fVar10 = *(float *)(iVar4 + 0x30);
      fVar22 = *(float *)(iVar4 + 0x34);
      fVar6 = *(float *)(iVar4 + 0x38);
      fVar21 = *(float *)(iVar4 + 0x3c);
      fVar17 = fVar17 * pfVar7[3];
      *(float *)(iVar3 + 0x20) =
           *(float *)(iVar3 + 0x20) + fVar17 * *(float *)(iVar3 + 0x30) * fVar15;
      *(float *)(iVar3 + 0x24) =
           *(float *)(iVar3 + 0x24) + fVar17 * *(float *)(iVar3 + 0x34) * fVar18;
      *(float *)(iVar3 + 0x28) =
           *(float *)(iVar3 + 0x28) + fVar17 * *(float *)(iVar3 + 0x38) * fVar16;
      *(float *)(iVar3 + 0x2c) =
           *(float *)(iVar3 + 0x2c) + fVar17 * *(float *)(iVar3 + 0x3c) * fVar19;
      *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar17 * fVar10 * fVar20;
      *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar17 * fVar22 * fVar23;
      *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar17 * fVar6 * fVar11;
      *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar17 * fVar21 * fVar12;
      *param_4 = fVar17 + *param_4;
    }
    pcVar1 = local_a0 + 0x10;
    local_a0 = local_a0 + 0x10;
    pfVar7 = pfVar7 + 8;
    param_4 = param_4 + 1;
    local_a4 = param_4;
  } while (*pcVar1 == '\n');
  goto LAB_009202e0;
switchD_009202fc_caseD_9:
  do {
    fVar10 = (pfVar7[7] * *(float *)(param_1 + 0xc) -
             (*(float *)(iVar3 + 0x28) * pfVar7[2] + *(float *)(iVar4 + 0x28) * pfVar7[6] +
             *(float *)(iVar3 + 0x24) * pfVar7[1] + *(float *)(iVar4 + 0x24) * pfVar7[5] +
             *(float *)(iVar3 + 0x20) * *pfVar7 + *(float *)(iVar4 + 0x20) * pfVar7[4]) *
             *(float *)(param_1 + 8)) * pfVar7[3];
    if (*(float *)(local_a0 + 4) < ABS(fVar10)) {
      fVar17 = *(float *)(local_a0 + 4) / ABS(fVar10);
      fVar10 = fVar17 * fVar10;
      pfVar7[7] = fVar17 * pfVar7[7];
    }
    fVar17 = *(float *)(iVar4 + 0x30);
    fVar20 = *(float *)(iVar4 + 0x34);
    fVar23 = *(float *)(iVar4 + 0x38);
    fVar11 = *(float *)(iVar4 + 0x3c);
    fVar12 = pfVar7[4];
    fVar15 = pfVar7[5];
    fVar18 = pfVar7[6];
    fVar16 = pfVar7[7];
    fVar19 = pfVar7[1];
    fVar22 = pfVar7[2];
    fVar6 = pfVar7[3];
    *(float *)(iVar3 + 0x20) =
         *(float *)(iVar3 + 0x20) + fVar10 * *(float *)(iVar3 + 0x30) * *pfVar7;
    *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar10 * *(float *)(iVar3 + 0x34) * fVar19
    ;
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar10 * *(float *)(iVar3 + 0x38) * fVar22
    ;
    *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar10 * *(float *)(iVar3 + 0x3c) * fVar6;
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar10 * fVar17 * fVar12;
    *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar10 * fVar20 * fVar15;
    *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar10 * fVar23 * fVar18;
    *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar10 * fVar11 * fVar16;
    local_a0 = local_a0 + 8;
    pfVar7 = pfVar7 + 8;
    *param_4 = fVar10 + *param_4;
    param_4 = param_4 + 1;
    local_a4 = param_4;
  } while (*local_a0 == '\t');
  goto LAB_009202e0;
switchD_009202fc_caseD_6:
  do {
    fVar10 = (pfVar7[3] * *(float *)(param_1 + 4) -
             (*(float *)(iVar3 + 0x28) * pfVar7[6] + *(float *)(iVar4 + 0x28) * pfVar7[10] +
              (*(float *)(iVar3 + 0x18) - *(float *)(iVar4 + 0x18)) * pfVar7[2] +
             *(float *)(iVar3 + 0x24) * pfVar7[5] + *(float *)(iVar4 + 0x24) * pfVar7[9] +
             (*(float *)(iVar3 + 0x14) - *(float *)(iVar4 + 0x14)) * pfVar7[1] +
             *(float *)(iVar3 + 0x20) * pfVar7[4] + *(float *)(iVar4 + 0x20) * pfVar7[8] +
             (*(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10)) * *pfVar7) *
             *(float *)(param_1 + 8)) * pfVar7[7];
    if (*(float *)(local_a0 + 4) < ABS(fVar10)) {
      fVar17 = *(float *)(local_a0 + 4) / ABS(fVar10);
      fVar10 = fVar17 * fVar10;
      pfVar7[3] = fVar17 * pfVar7[3];
    }
    fVar17 = *(float *)(iVar3 + 0x30);
    fVar20 = *(float *)(iVar3 + 0x34);
    fVar23 = *(float *)(iVar3 + 0x38);
    fVar13 = fVar10 * *(float *)(iVar3 + 0x3c);
    fVar11 = *(float *)(iVar4 + 0x30);
    fVar12 = *(float *)(iVar4 + 0x34);
    fVar15 = *(float *)(iVar4 + 0x38);
    fVar18 = *pfVar7;
    fVar16 = pfVar7[1];
    fVar19 = pfVar7[2];
    fVar22 = pfVar7[3];
    fVar25 = fVar10 * *(float *)(iVar4 + 0x3c);
    *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar13 * fVar18;
    *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar13 * fVar16;
    *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar13 * fVar19;
    *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar13 * fVar22;
    *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar25 * fVar18;
    *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar25 * fVar16;
    *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar25 * fVar19;
    *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar25 * fVar22;
    fVar18 = pfVar7[8];
    fVar16 = pfVar7[9];
    fVar19 = pfVar7[10];
    fVar22 = pfVar7[0xb];
    fVar6 = pfVar7[5];
    fVar21 = pfVar7[6];
    fVar14 = pfVar7[7];
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar10 * fVar17 * pfVar7[4];
    *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar10 * fVar20 * fVar6;
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar10 * fVar23 * fVar21;
    *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar13 * fVar14;
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar10 * fVar11 * fVar18;
    *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar10 * fVar12 * fVar16;
    *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar10 * fVar15 * fVar19;
    *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar25 * fVar22;
    local_a0 = local_a0 + 8;
    pfVar7 = pfVar7 + 0xc;
    *param_4 = fVar10 + *param_4;
    param_4 = param_4 + 1;
    local_a4 = param_4;
  } while (*local_a0 == '\x06');
  goto LAB_009202e0;
switchD_009202fc_caseD_5:
  do {
    fVar10 = *(float *)(local_a0 + 0xc) + pfVar7[3];
    local_a8 = (float *)((fVar10 * *(float *)(local_a0 + 0x10) -
                         (*(float *)(iVar3 + 0x28) * pfVar7[6] +
                          *(float *)(iVar4 + 0x28) * pfVar7[10] +
                          (*(float *)(iVar3 + 0x18) - *(float *)(iVar4 + 0x18)) * pfVar7[2] +
                         *(float *)(iVar3 + 0x24) * pfVar7[5] + *(float *)(iVar4 + 0x24) * pfVar7[9]
                         + (*(float *)(iVar3 + 0x14) - *(float *)(iVar4 + 0x14)) * pfVar7[1] +
                         *(float *)(iVar3 + 0x20) * pfVar7[4] + *(float *)(iVar4 + 0x20) * pfVar7[8]
                         + (*(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10)) * *pfVar7) *
                         *(float *)(local_a0 + 0x14)) * pfVar7[7]);
    if ((float)local_a8 <= *(float *)(local_a0 + 4)) {
      if ((float)local_a8 < *(float *)(local_a0 + 8)) {
        if (*(int *)(local_a0 + 0x18) != 0) {
          fVar10 = (*(float *)(local_a0 + 8) / (float)local_a8) * fVar10;
        }
        local_a8 = *(float **)(local_a0 + 8);
      }
    }
    else {
      if (*(int *)(local_a0 + 0x18) != 0) {
        fVar10 = (*(float *)(local_a0 + 4) / (float)local_a8) * fVar10;
      }
      local_a8 = *(float **)(local_a0 + 4);
    }
    pfVar7[3] = fVar10;
    fVar10 = *(float *)(iVar3 + 0x30);
    fVar17 = *(float *)(iVar3 + 0x34);
    fVar20 = *(float *)(iVar3 + 0x38);
    fVar14 = (float)local_a8 * *(float *)(iVar3 + 0x3c);
    fVar23 = *(float *)(iVar4 + 0x30);
    fVar11 = *(float *)(iVar4 + 0x34);
    fVar12 = *(float *)(iVar4 + 0x38);
    fVar15 = *pfVar7;
    fVar18 = pfVar7[1];
    fVar16 = pfVar7[2];
    fVar19 = pfVar7[3];
    fVar13 = (float)local_a8 * *(float *)(iVar4 + 0x3c);
    *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar14 * fVar15;
    *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar14 * fVar18;
    *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar14 * fVar16;
    *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar14 * fVar19;
    *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar13 * fVar15;
    *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar13 * fVar18;
    *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar13 * fVar16;
    *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar13 * fVar19;
    fVar15 = pfVar7[8];
    fVar18 = pfVar7[9];
    fVar16 = pfVar7[10];
    fVar19 = pfVar7[0xb];
    fVar22 = pfVar7[5];
    fVar6 = pfVar7[6];
    fVar21 = pfVar7[7];
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + (float)local_a8 * fVar10 * pfVar7[4];
    *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + (float)local_a8 * fVar17 * fVar22;
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + (float)local_a8 * fVar20 * fVar6;
    *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar14 * fVar21;
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + (float)local_a8 * fVar23 * fVar15;
    *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + (float)local_a8 * fVar11 * fVar18;
    *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + (float)local_a8 * fVar12 * fVar16;
    *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar13 * fVar19;
    *local_a4 = (float)local_a8 + *local_a4;
    pfVar7 = (float *)FUN_008f0ee0(1);
    param_4 = local_a4 + 1;
    pcVar1 = local_a0 + 0x1c;
    local_a0 = local_a0 + 0x1c;
    local_a4 = param_4;
  } while (*pcVar1 == '\x05');
  goto LAB_009202e0;
switchD_009202fc_caseD_4:
  do {
    fVar10 = *(float *)(local_a0 + 0xc) + pfVar7[7];
    local_a8 = (float *)((fVar10 * *(float *)(local_a0 + 0x10) -
                         (*(float *)(iVar3 + 0x28) * pfVar7[2] +
                          *(float *)(iVar4 + 0x28) * pfVar7[6] +
                         *(float *)(iVar3 + 0x24) * pfVar7[1] + *(float *)(iVar4 + 0x24) * pfVar7[5]
                         + *(float *)(iVar3 + 0x20) * *pfVar7 + *(float *)(iVar4 + 0x20) * pfVar7[4]
                         ) * *(float *)(local_a0 + 0x14)) * pfVar7[3]);
    if ((float)local_a8 <= *(float *)(local_a0 + 4)) {
      if ((float)local_a8 < *(float *)(local_a0 + 8)) {
        if (*(int *)(local_a0 + 0x18) != 0) {
          fVar10 = (*(float *)(local_a0 + 8) / (float)local_a8) * fVar10;
        }
        local_a8 = *(float **)(local_a0 + 8);
      }
    }
    else {
      if (*(int *)(local_a0 + 0x18) != 0) {
        fVar10 = (*(float *)(local_a0 + 4) / (float)local_a8) * fVar10;
      }
      local_a8 = *(float **)(local_a0 + 4);
    }
    pfVar7[7] = fVar10;
    fVar10 = *(float *)(iVar4 + 0x30);
    fVar17 = *(float *)(iVar4 + 0x34);
    fVar20 = *(float *)(iVar4 + 0x38);
    fVar23 = *(float *)(iVar4 + 0x3c);
    fVar11 = pfVar7[4];
    fVar12 = pfVar7[5];
    fVar15 = pfVar7[6];
    fVar18 = pfVar7[7];
    fVar16 = pfVar7[1];
    fVar19 = pfVar7[2];
    fVar22 = pfVar7[3];
    *(float *)(iVar3 + 0x20) =
         *(float *)(iVar3 + 0x20) + (float)local_a8 * *(float *)(iVar3 + 0x30) * *pfVar7;
    *(float *)(iVar3 + 0x24) =
         *(float *)(iVar3 + 0x24) + (float)local_a8 * *(float *)(iVar3 + 0x34) * fVar16;
    *(float *)(iVar3 + 0x28) =
         *(float *)(iVar3 + 0x28) + (float)local_a8 * *(float *)(iVar3 + 0x38) * fVar19;
    *(float *)(iVar3 + 0x2c) =
         *(float *)(iVar3 + 0x2c) + (float)local_a8 * *(float *)(iVar3 + 0x3c) * fVar22;
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + (float)local_a8 * fVar10 * fVar11;
    *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + (float)local_a8 * fVar17 * fVar12;
    *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + (float)local_a8 * fVar20 * fVar15;
    *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + (float)local_a8 * fVar23 * fVar18;
    local_a0 = local_a0 + 0x1c;
    pfVar7 = pfVar7 + 8;
    *param_4 = (float)local_a8 + *param_4;
    param_4 = param_4 + 1;
    local_a4 = param_4;
  } while (*local_a0 == '\x04');
  goto LAB_009202e0;
switchD_009202fc_caseD_3:
  fVar11 = *pfVar7;
  fVar12 = pfVar7[1];
  fVar15 = pfVar7[2];
  fVar18 = pfVar7[3];
  fVar17 = *(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10);
  fVar20 = *(float *)(iVar3 + 0x14) - *(float *)(iVar4 + 0x14);
  fVar23 = *(float *)(iVar3 + 0x18) - *(float *)(iVar4 + 0x18);
  fVar16 = local_a8[-4];
  fVar19 = local_a8[-3];
  fVar22 = local_a8[-2];
  fVar6 = local_a8[-1];
  fVar10 = local_a8[-0xd] * *(float *)(param_1 + 4) -
           (*(float *)(iVar3 + 0x28) * local_a8[-10] + *(float *)(iVar4 + 0x28) * local_a8[-6] +
            fVar23 * fVar15 +
           *(float *)(iVar3 + 0x24) * local_a8[-0xb] + *(float *)(iVar4 + 0x24) * local_a8[-7] +
           fVar20 * fVar12 +
           *(float *)(iVar3 + 0x20) * local_a8[-0xc] + *(float *)(iVar4 + 0x20) * local_a8[-8] +
           fVar17 * fVar11) * *(float *)(param_1 + 8);
  fVar20 = local_a8[-1] * *(float *)(param_1 + 4) -
           (*(float *)(iVar3 + 0x28) * local_a8[2] + *(float *)(iVar4 + 0x28) * local_a8[6] +
            fVar23 * fVar22 +
           *(float *)(iVar3 + 0x24) * local_a8[1] + *(float *)(iVar4 + 0x24) * local_a8[5] +
           fVar20 * fVar19 +
           *(float *)(iVar3 + 0x20) * *local_a8 + *(float *)(iVar4 + 0x20) * local_a8[4] +
           fVar17 * fVar16) * *(float *)(param_1 + 8);
  fVar23 = fVar20 * *(float *)(local_a0 + 4) + fVar10 * local_a8[-5];
  fVar17 = fVar10 * *(float *)(local_a0 + 4) + fVar20 * local_a8[7];
  fVar10 = fVar10 * local_a8[-9];
  fVar20 = fVar20 * local_a8[3];
  if (fVar23 <= 0.0) {
    if (fVar20 < 0.0 != (fVar20 == 0.0)) goto LAB_0092052f;
    fVar10 = fVar20 * *(float *)(iVar3 + 0x30);
    fVar23 = fVar20 * *(float *)(iVar3 + 0x34);
    fVar11 = fVar20 * *(float *)(iVar3 + 0x38);
    fVar12 = fVar20 * *(float *)(iVar3 + 0x3c);
    fVar15 = fVar20 * *(float *)(iVar4 + 0x30);
    fVar18 = fVar20 * *(float *)(iVar4 + 0x34);
    fVar21 = fVar20 * *(float *)(iVar4 + 0x38);
    fVar14 = fVar20 * *(float *)(iVar4 + 0x3c);
    fVar13 = fVar14 * fVar16;
    fVar25 = fVar14 * fVar19;
    fVar26 = fVar14 * fVar22;
    fVar24 = fVar14 * fVar6;
    *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar12 * fVar16;
    *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar12 * fVar19;
    *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar12 * fVar22;
    *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar12 * fVar6;
LAB_0092062a:
    *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar13;
    *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar25;
    *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar26;
    *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar24;
    fVar17 = local_a8[4];
    fVar16 = local_a8[5];
    fVar19 = local_a8[6];
    fVar22 = local_a8[7];
    fVar6 = local_a8[1];
    fVar13 = local_a8[2];
    fVar25 = local_a8[3];
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar10 * *local_a8;
    *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar23 * fVar6;
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar11 * fVar13;
    *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar12 * fVar25;
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar15 * fVar17;
    *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar18 * fVar16;
    *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar21 * fVar19;
    *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar14 * fVar22;
    param_4[1] = fVar20 + param_4[1];
  }
  else {
    if (0.0 < fVar17) {
      fVar10 = *(float *)(iVar3 + 0x30);
      fVar20 = *(float *)(iVar3 + 0x34);
      fVar16 = *(float *)(iVar3 + 0x38);
      fVar25 = fVar23 * *(float *)(iVar3 + 0x3c);
      fVar19 = *(float *)(iVar4 + 0x30);
      fVar22 = *(float *)(iVar4 + 0x34);
      fVar6 = *(float *)(iVar4 + 0x38);
      fVar26 = fVar23 * *(float *)(iVar4 + 0x3c);
      *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar25 * fVar11;
      *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar25 * fVar12;
      *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar25 * fVar15;
      *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar25 * fVar18;
      *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar26 * fVar11;
      *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar26 * fVar12;
      *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar26 * fVar15;
      *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar26 * fVar18;
      fVar11 = local_a8[-8];
      fVar12 = local_a8[-7];
      fVar15 = local_a8[-6];
      fVar18 = local_a8[-5];
      fVar21 = local_a8[-0xb];
      fVar14 = local_a8[-10];
      fVar13 = local_a8[-9];
      *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar23 * fVar10 * local_a8[-0xc];
      *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar23 * fVar20 * fVar21;
      *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar23 * fVar16 * fVar14;
      *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar25 * fVar13;
      *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar23 * fVar19 * fVar11;
      *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar23 * fVar22 * fVar12;
      *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar23 * fVar6 * fVar15;
      *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar26 * fVar18;
      *param_4 = fVar23 + *param_4;
      fVar10 = fVar17 * *(float *)(iVar3 + 0x30);
      fVar23 = fVar17 * *(float *)(iVar3 + 0x34);
      fVar11 = fVar17 * *(float *)(iVar3 + 0x38);
      fVar12 = fVar17 * *(float *)(iVar3 + 0x3c);
      fVar20 = local_a8[-3];
      fVar16 = local_a8[-2];
      fVar19 = local_a8[-1];
      fVar15 = fVar17 * *(float *)(iVar4 + 0x30);
      fVar18 = fVar17 * *(float *)(iVar4 + 0x34);
      fVar21 = fVar17 * *(float *)(iVar4 + 0x38);
      fVar14 = fVar17 * *(float *)(iVar4 + 0x3c);
      fVar13 = fVar14 * local_a8[-4];
      fVar25 = fVar14 * fVar20;
      fVar26 = fVar14 * fVar16;
      fVar24 = fVar14 * fVar19;
      *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar12 * local_a8[-4];
      *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar12 * fVar20;
      *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar12 * fVar16;
      *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar12 * fVar19;
      fVar20 = fVar17;
      goto LAB_0092062a;
    }
LAB_0092052f:
    if (0.0 < fVar10) {
      fVar17 = *(float *)(iVar3 + 0x30);
      fVar20 = *(float *)(iVar3 + 0x34);
      fVar23 = *(float *)(iVar3 + 0x38);
      fVar13 = fVar10 * *(float *)(iVar3 + 0x3c);
      fVar16 = *(float *)(iVar4 + 0x30);
      fVar19 = *(float *)(iVar4 + 0x34);
      fVar22 = *(float *)(iVar4 + 0x38);
      fVar25 = fVar10 * *(float *)(iVar4 + 0x3c);
      *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar13 * fVar11;
      *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar13 * fVar12;
      *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar13 * fVar15;
      *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar13 * fVar18;
      *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar25 * fVar11;
      *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar25 * fVar12;
      *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar25 * fVar15;
      *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar25 * fVar18;
      fVar11 = local_a8[-8];
      fVar12 = local_a8[-7];
      fVar15 = local_a8[-6];
      fVar18 = local_a8[-5];
      fVar6 = local_a8[-0xb];
      fVar21 = local_a8[-10];
      fVar14 = local_a8[-9];
      *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar10 * fVar17 * local_a8[-0xc];
      *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar10 * fVar20 * fVar6;
      *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar10 * fVar23 * fVar21;
      *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar13 * fVar14;
      *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar10 * fVar16 * fVar11;
      *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar10 * fVar19 * fVar12;
      *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar10 * fVar22 * fVar15;
      *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar25 * fVar18;
      *param_4 = fVar10 + *param_4;
    }
  }
  local_a8 = local_a8 + 0x18;
  local_a4 = param_4 + 2;
  pfVar8 = local_a4;
  pfVar9 = pfVar7 + 0x18;
  pcVar1 = local_a0 + 8;
  if (local_a0[8] == '\x03') goto code_r0x00920684;
  goto LAB_009202f0;
code_r0x00920684:
  fVar11 = pfVar7[0x18];
  fVar12 = pfVar7[0x19];
  fVar15 = pfVar7[0x1a];
  fVar18 = pfVar7[0x1b];
  fVar17 = *(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10);
  fVar20 = *(float *)(iVar3 + 0x14) - *(float *)(iVar4 + 0x14);
  fVar23 = *(float *)(iVar3 + 0x18) - *(float *)(iVar4 + 0x18);
  fVar10 = pfVar7[0x1b] * *(float *)(param_1 + 4) -
           (*(float *)(iVar3 + 0x28) * pfVar7[0x1e] + *(float *)(iVar4 + 0x28) * pfVar7[0x22] +
            fVar23 * fVar15 +
           *(float *)(iVar3 + 0x24) * pfVar7[0x1d] + *(float *)(iVar4 + 0x24) * pfVar7[0x21] +
           fVar20 * fVar12 +
           *(float *)(iVar3 + 0x20) * pfVar7[0x1c] + *(float *)(iVar4 + 0x20) * pfVar7[0x20] +
           fVar17 * fVar11) * *(float *)(param_1 + 8);
  fVar20 = pfVar7[0x27] * *(float *)(param_1 + 4) -
           (*(float *)(iVar3 + 0x28) * pfVar7[0x2a] + *(float *)(iVar4 + 0x28) * pfVar7[0x2e] +
            fVar23 * pfVar7[0x26] +
           *(float *)(iVar3 + 0x24) * pfVar7[0x29] + *(float *)(iVar4 + 0x24) * pfVar7[0x2d] +
           fVar20 * pfVar7[0x25] +
           *(float *)(iVar3 + 0x20) * pfVar7[0x28] + *(float *)(iVar4 + 0x20) * pfVar7[0x2c] +
           fVar17 * pfVar7[0x24]) * *(float *)(param_1 + 8);
  fVar23 = fVar20 * *(float *)(local_a0 + 0xc) + fVar10 * pfVar7[0x23];
  fVar17 = fVar10 * *(float *)(local_a0 + 0xc) + fVar20 * pfVar7[0x2f];
  fVar10 = fVar10 * pfVar7[0x1f];
  fVar20 = fVar20 * pfVar7[0x2b];
  if (fVar23 <= 0.0) {
    if (fVar20 < 0.0 == (fVar20 == 0.0)) goto LAB_00920a0f;
  }
  else if (0.0 < fVar17) {
    fVar10 = *(float *)(iVar3 + 0x30);
    fVar20 = *(float *)(iVar3 + 0x34);
    fVar16 = *(float *)(iVar3 + 0x38);
    fVar25 = fVar23 * *(float *)(iVar3 + 0x3c);
    fVar19 = *(float *)(iVar4 + 0x30);
    fVar22 = *(float *)(iVar4 + 0x34);
    fVar6 = *(float *)(iVar4 + 0x38);
    fVar26 = fVar23 * *(float *)(iVar4 + 0x3c);
    *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar25 * fVar11;
    *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar25 * fVar12;
    *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar25 * fVar15;
    *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar25 * fVar18;
    *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar26 * fVar11;
    *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar26 * fVar12;
    *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar26 * fVar15;
    *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar26 * fVar18;
    fVar11 = pfVar7[0x20];
    fVar12 = pfVar7[0x21];
    fVar15 = pfVar7[0x22];
    fVar18 = pfVar7[0x23];
    fVar21 = pfVar7[0x1d];
    fVar14 = pfVar7[0x1e];
    fVar13 = pfVar7[0x1f];
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar23 * fVar10 * pfVar7[0x1c];
    *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar23 * fVar20 * fVar21;
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar23 * fVar16 * fVar14;
    *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar25 * fVar13;
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar23 * fVar19 * fVar11;
    *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar23 * fVar22 * fVar12;
    *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar23 * fVar6 * fVar15;
    *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar26 * fVar18;
    *local_a4 = fVar23 + *local_a4;
    fVar20 = fVar17;
LAB_00920a0f:
    fVar10 = *(float *)(iVar3 + 0x30);
    fVar17 = *(float *)(iVar3 + 0x34);
    fVar23 = *(float *)(iVar3 + 0x38);
    fVar13 = fVar20 * *(float *)(iVar3 + 0x3c);
    fVar11 = *(float *)(iVar4 + 0x30);
    fVar12 = *(float *)(iVar4 + 0x34);
    fVar15 = *(float *)(iVar4 + 0x38);
    fVar18 = pfVar7[0x24];
    fVar16 = pfVar7[0x25];
    fVar19 = pfVar7[0x26];
    fVar22 = pfVar7[0x27];
    fVar25 = fVar20 * *(float *)(iVar4 + 0x3c);
    *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar13 * fVar18;
    *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar13 * fVar16;
    *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar13 * fVar19;
    *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar13 * fVar22;
    *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar25 * fVar18;
    *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar25 * fVar16;
    *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar25 * fVar19;
    *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar25 * fVar22;
    fVar18 = pfVar7[0x2c];
    fVar16 = pfVar7[0x2d];
    fVar19 = pfVar7[0x2e];
    fVar22 = pfVar7[0x2f];
    fVar6 = pfVar7[0x29];
    fVar21 = pfVar7[0x2a];
    fVar14 = pfVar7[0x2b];
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar20 * fVar10 * pfVar7[0x28];
    *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar20 * fVar17 * fVar6;
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar20 * fVar23 * fVar21;
    *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar13 * fVar14;
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar20 * fVar11 * fVar18;
    *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar20 * fVar12 * fVar16;
    *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar20 * fVar15 * fVar19;
    *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar25 * fVar22;
    param_4[3] = fVar20 + param_4[3];
    goto LAB_00920a86;
  }
  if (0.0 < fVar10) {
    fVar17 = *(float *)(iVar3 + 0x30);
    fVar20 = *(float *)(iVar3 + 0x34);
    fVar23 = *(float *)(iVar3 + 0x38);
    fVar13 = fVar10 * *(float *)(iVar3 + 0x3c);
    fVar16 = *(float *)(iVar4 + 0x30);
    fVar19 = *(float *)(iVar4 + 0x34);
    fVar22 = *(float *)(iVar4 + 0x38);
    fVar25 = fVar10 * *(float *)(iVar4 + 0x3c);
    *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar13 * fVar11;
    *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar13 * fVar12;
    *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar13 * fVar15;
    *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar13 * fVar18;
    *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar25 * fVar11;
    *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar25 * fVar12;
    *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar25 * fVar15;
    *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar25 * fVar18;
    fVar11 = pfVar7[0x20];
    fVar12 = pfVar7[0x21];
    fVar15 = pfVar7[0x22];
    fVar18 = pfVar7[0x23];
    fVar6 = pfVar7[0x1d];
    fVar21 = pfVar7[0x1e];
    fVar14 = pfVar7[0x1f];
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar10 * fVar17 * pfVar7[0x1c];
    *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar10 * fVar20 * fVar6;
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar10 * fVar23 * fVar21;
    *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar13 * fVar14;
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar10 * fVar16 * fVar11;
    *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar10 * fVar19 * fVar12;
    *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar10 * fVar22 * fVar15;
    *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar25 * fVar18;
    *local_a4 = fVar10 + *local_a4;
  }
LAB_00920a86:
  pcVar1 = local_a0 + 0x10;
  local_a0 = local_a0 + 0x10;
  param_4 = param_4 + 4;
  pfVar7 = pfVar7 + 0x30;
  local_a4 = param_4;
  if (*pcVar1 != '\b') goto LAB_009202e0;
switchD_009202fc_caseD_8:
  fVar20 = *(float *)(iVar4 + 0x20);
  fVar23 = *(float *)(iVar4 + 0x24);
  fVar11 = *(float *)(iVar4 + 0x28);
  fVar12 = *(float *)(iVar3 + 0x20);
  fVar15 = *(float *)(iVar3 + 0x24);
  fVar18 = *(float *)(iVar3 + 0x28);
  fVar16 = *(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10);
  fVar19 = *(float *)(iVar3 + 0x14) - *(float *)(iVar4 + 0x14);
  fVar22 = *(float *)(iVar3 + 0x18) - *(float *)(iVar4 + 0x18);
  fVar10 = (pfVar7[0x1f] * *(float *)(param_1 + 0xc) -
           (fVar18 * pfVar7[0x1a] + fVar11 * pfVar7[0x1e] +
           fVar15 * pfVar7[0x19] + fVar23 * pfVar7[0x1d] +
           fVar12 * pfVar7[0x18] + fVar20 * pfVar7[0x1c]) * *(float *)(param_1 + 8)) * pfVar7[0x1b];
  fVar17 = *(float *)(param_1 + 0xc) * pfVar7[3] -
           (fVar18 * pfVar7[6] + fVar11 * pfVar7[10] + fVar22 * pfVar7[2] +
           fVar15 * pfVar7[5] + fVar23 * pfVar7[9] + fVar19 * pfVar7[1] +
           fVar12 * pfVar7[4] + fVar20 * pfVar7[8] + fVar16 * *pfVar7) * *(float *)(param_1 + 8);
  fVar20 = pfVar7[0xf] * *(float *)(param_1 + 0xc) -
           (fVar18 * pfVar7[0x12] + fVar11 * pfVar7[0x16] + fVar22 * pfVar7[0xe] +
           fVar15 * pfVar7[0x11] + fVar23 * pfVar7[0x15] + fVar19 * pfVar7[0xd] +
           fVar12 * pfVar7[0x10] + fVar20 * pfVar7[0x14] + fVar16 * pfVar7[0xc]) *
           *(float *)(param_1 + 8);
  fVar23 = fVar20 * *(float *)(local_a0 + 8) + fVar17 * pfVar7[0xb];
  fVar20 = fVar17 * *(float *)(local_a0 + 8) + fVar20 * pfVar7[0x17];
  fVar17 = fVar23 * fVar23 + fVar20 * fVar20 + fVar10 * fVar10;
  if (*(float *)(local_a0 + 0xc) * *(float *)(local_a0 + 0xc) < fVar17) {
    fVar17 = *(float *)(local_a0 + 0xc) / SQRT(fVar17);
    fVar23 = fVar17 * fVar23;
    fVar20 = fVar17 * fVar20;
    fVar10 = fVar10 * fVar17;
    pfVar7[3] = fVar17 * pfVar7[3];
    pfVar7[0xf] = fVar17 * pfVar7[0xf];
    pfVar7[0x1f] = fVar17 * pfVar7[0x1f];
  }
  fVar10 = fVar10 * *(float *)(local_a0 + 0x14);
  fVar17 = *(float *)(iVar3 + 0x30);
  fVar11 = *(float *)(iVar3 + 0x34);
  fVar12 = *(float *)(iVar3 + 0x38);
  fVar26 = fVar23 * *(float *)(iVar3 + 0x3c);
  fVar15 = *(float *)(iVar4 + 0x30);
  fVar18 = *(float *)(iVar4 + 0x34);
  fVar16 = *(float *)(iVar4 + 0x38);
  fVar19 = *pfVar7;
  fVar22 = pfVar7[1];
  fVar6 = pfVar7[2];
  fVar21 = pfVar7[3];
  fVar24 = fVar23 * *(float *)(iVar4 + 0x3c);
  *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar26 * fVar19;
  *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar26 * fVar22;
  *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar26 * fVar6;
  *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar26 * fVar21;
  *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar24 * fVar19;
  *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar24 * fVar22;
  *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar24 * fVar6;
  *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar24 * fVar21;
  fVar19 = pfVar7[8];
  fVar22 = pfVar7[9];
  fVar6 = pfVar7[10];
  fVar21 = pfVar7[0xb];
  fVar14 = pfVar7[5];
  fVar13 = pfVar7[6];
  fVar25 = pfVar7[7];
  *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar23 * fVar17 * pfVar7[4];
  *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar23 * fVar11 * fVar14;
  *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar23 * fVar12 * fVar13;
  *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar26 * fVar25;
  *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar23 * fVar15 * fVar19;
  *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar23 * fVar18 * fVar22;
  *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar23 * fVar16 * fVar6;
  *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar24 * fVar21;
  *param_4 = fVar23 + *param_4;
  fVar17 = *(float *)(iVar3 + 0x30);
  fVar23 = *(float *)(iVar3 + 0x34);
  fVar11 = *(float *)(iVar3 + 0x38);
  fVar25 = fVar20 * *(float *)(iVar3 + 0x3c);
  fVar12 = *(float *)(iVar4 + 0x30);
  fVar15 = *(float *)(iVar4 + 0x34);
  fVar18 = *(float *)(iVar4 + 0x38);
  fVar16 = pfVar7[0xc];
  fVar19 = pfVar7[0xd];
  fVar22 = pfVar7[0xe];
  fVar6 = pfVar7[0xf];
  fVar26 = fVar20 * *(float *)(iVar4 + 0x3c);
  *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar25 * fVar16;
  *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar25 * fVar19;
  *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar25 * fVar22;
  *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar25 * fVar6;
  *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar26 * fVar16;
  *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar26 * fVar19;
  *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar26 * fVar22;
  *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar26 * fVar6;
  fVar16 = pfVar7[0x14];
  fVar19 = pfVar7[0x15];
  fVar22 = pfVar7[0x16];
  fVar6 = pfVar7[0x17];
  fVar21 = pfVar7[0x11];
  fVar14 = pfVar7[0x12];
  fVar13 = pfVar7[0x13];
  *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar20 * fVar17 * pfVar7[0x10];
  *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar20 * fVar23 * fVar21;
  *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar20 * fVar11 * fVar14;
  *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar25 * fVar13;
  *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar20 * fVar12 * fVar16;
  *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar20 * fVar15 * fVar19;
  *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar20 * fVar18 * fVar22;
  *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar26 * fVar6;
  param_4[1] = fVar20 + param_4[1];
  fVar17 = pfVar7[0x1c];
  fVar20 = pfVar7[0x1d];
  fVar23 = pfVar7[0x1e];
  fVar11 = pfVar7[0x1f];
  fVar12 = *(float *)(iVar4 + 0x30);
  fVar15 = *(float *)(iVar4 + 0x34);
  fVar18 = *(float *)(iVar4 + 0x38);
  fVar16 = *(float *)(iVar4 + 0x3c);
  fVar19 = pfVar7[0x19];
  fVar22 = pfVar7[0x1a];
  fVar6 = pfVar7[0x1b];
  *(float *)(iVar3 + 0x20) =
       *(float *)(iVar3 + 0x20) + fVar10 * *(float *)(iVar3 + 0x30) * pfVar7[0x18];
  *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar10 * *(float *)(iVar3 + 0x34) * fVar19;
  *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar10 * *(float *)(iVar3 + 0x38) * fVar22;
  *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar10 * *(float *)(iVar3 + 0x3c) * fVar6;
  *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar10 * fVar12 * fVar17;
  *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar10 * fVar15 * fVar20;
  *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar10 * fVar18 * fVar23;
  *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar10 * fVar16 * fVar11;
  param_2 = local_a0 + 0x18;
  param_4[2] = fVar10 + param_4[2];
  cVar2 = *param_2;
  pfVar7 = pfVar7 + 0x20;
  param_4 = param_4 + 3;
joined_r0x00920fec:
  local_a4 = param_4;
  local_a0 = param_2;
  if (cVar2 == '\x01') goto switchD_009202fc_caseD_1;
  goto LAB_009202e0;
switchD_009202fc_caseD_2:
  do {
    fVar17 = *pfVar7;
    fVar20 = pfVar7[1];
    fVar23 = pfVar7[2];
    fVar11 = pfVar7[3];
    fVar10 = pfVar7[3] * *(float *)(param_1 + 4) -
             (*(float *)(iVar3 + 0x28) * pfVar7[6] + *(float *)(iVar4 + 0x28) * pfVar7[10] +
              (*(float *)(iVar3 + 0x18) - *(float *)(iVar4 + 0x18)) * fVar23 +
             *(float *)(iVar3 + 0x24) * pfVar7[5] + *(float *)(iVar4 + 0x24) * pfVar7[9] +
             (*(float *)(iVar3 + 0x14) - *(float *)(iVar4 + 0x14)) * fVar20 +
             *(float *)(iVar3 + 0x20) * pfVar7[4] + *(float *)(iVar4 + 0x20) * pfVar7[8] +
             (*(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10)) * fVar17) *
             *(float *)(param_1 + 8);
    if (0.0 < fVar10) {
      fVar10 = fVar10 * pfVar7[7];
      fVar12 = *(float *)(iVar3 + 0x30);
      fVar15 = *(float *)(iVar3 + 0x34);
      fVar18 = *(float *)(iVar3 + 0x38);
      fVar13 = fVar10 * *(float *)(iVar3 + 0x3c);
      fVar16 = *(float *)(iVar4 + 0x30);
      fVar19 = *(float *)(iVar4 + 0x34);
      fVar22 = *(float *)(iVar4 + 0x38);
      fVar25 = fVar10 * *(float *)(iVar4 + 0x3c);
      *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + fVar13 * fVar17;
      *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) + fVar13 * fVar20;
      *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + fVar13 * fVar23;
      *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + fVar13 * fVar11;
      *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - fVar25 * fVar17;
      *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - fVar25 * fVar20;
      *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) - fVar25 * fVar23;
      *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar25 * fVar11;
      fVar17 = pfVar7[8];
      fVar20 = pfVar7[9];
      fVar23 = pfVar7[10];
      fVar11 = pfVar7[0xb];
      fVar6 = pfVar7[5];
      fVar21 = pfVar7[6];
      fVar14 = pfVar7[7];
      *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar10 * fVar12 * pfVar7[4];
      *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fVar10 * fVar15 * fVar6;
      *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fVar10 * fVar18 * fVar21;
      *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar13 * fVar14;
      *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar10 * fVar16 * fVar17;
      *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar10 * fVar19 * fVar20;
      *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar10 * fVar22 * fVar23;
      *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar25 * fVar11;
      *param_4 = fVar10 + *param_4;
    }
    pcVar1 = local_a0 + 4;
    local_a0 = local_a0 + 4;
    pfVar7 = pfVar7 + 0xc;
    param_4 = param_4 + 1;
    local_a4 = param_4;
  } while (*pcVar1 == '\x02');
  goto LAB_009202e0;
}



undefined4 FUN_00921a40(float *param_1,char *param_2,char *param_3,float *param_4)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  char *pcVar19;
  int iVar20;
  char cVar21;
  uint uVar22;
  char *pcVar23;
  float *pfVar24;
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
  float fVar37;
  float fVar38;
  float fStack_108;
  float fStack_100;
  int local_f0;
  float local_e8;
  float local_e4;
  
  if (DAT_00ba84f8 == '\0') {
    DAT_00ba84f8 = FUN_009246e0(0);
    if (DAT_00ba84f8 == '\0') {
      return 0;
    }
  }
  local_f0 = 0;
  pcVar23 = param_3;
  if (0 < (int)param_1[0x3f]) {
LAB_00921a96:
    while( true ) {
      while (cVar21 = *pcVar23, cVar21 == '\0') {
        do {
          fVar33 = param_1[5];
          fVar3 = param_1[6];
          fVar34 = param_1[7];
          *(float *)(pcVar23 + 0x10) = *(float *)(pcVar23 + 0x10) + param_1[4];
          *(float *)(pcVar23 + 0x14) = *(float *)(pcVar23 + 0x14) + fVar33;
          *(float *)(pcVar23 + 0x18) = *(float *)(pcVar23 + 0x18) + fVar3;
          *(float *)(pcVar23 + 0x1c) = *(float *)(pcVar23 + 0x1c) + fVar34;
          pcVar19 = pcVar23 + 0x80;
          pcVar23 = pcVar23 + 0x80;
        } while (*pcVar19 == '\0');
      }
      if (cVar21 != '\x01') break;
      pcVar23 = pcVar23 + 0x80;
    }
    if (cVar21 != '\x02') {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return uVar12;
    }
    local_e8 = param_1[1];
    local_e4 = param_1[2];
    pcVar23 = param_2;
    pfVar24 = param_4;
switchD_00921b0f_caseD_1:
    iVar2 = *(int *)(pcVar23 + 0xc);
    iVar15 = *(int *)(pcVar23 + 0x10);
    pcVar19 = pcVar23 + 4;
    pcVar23 = pcVar23 + 0x18;
    pfVar14 = *(float **)pcVar19;
LAB_00921b00:
    do {
      pfVar17 = pfVar14 + 0x14;
      pcVar19 = pcVar23;
LAB_00921b03:
      pfVar13 = pfVar24;
      pfVar16 = pfVar14;
      pcVar23 = pcVar19;
      pfVar14 = pfVar16;
      pfVar24 = pfVar13;
      switch(*pcVar23) {
      case '\0':
        pcVar23 = param_3;
        pcVar19 = param_2;
        if (local_f0 == 0) goto LAB_00923223;
        goto LAB_00923390;
      case '\x01':
        goto switchD_00921b0f_caseD_1;
      case '\x02':
        pfVar17 = (float *)(iVar15 + 0x10);
        pfVar16 = (float *)(iVar15 + 0x20);
        do {
          fVar3 = *pfVar14;
          fVar34 = pfVar14[1];
          fVar26 = pfVar14[2];
          fVar28 = pfVar14[3];
          fVar33 = pfVar14[3] * param_1[1] -
                   (*(float *)(iVar2 + 0x28) * pfVar14[6] + *(float *)(iVar15 + 0x28) * pfVar14[10]
                    + (*(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18)) * fVar26 +
                   *(float *)(iVar2 + 0x24) * pfVar14[5] + *(float *)(iVar15 + 0x24) * pfVar14[9] +
                   (*(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14)) * fVar34 +
                   *(float *)(iVar2 + 0x20) * pfVar14[4] + *pfVar16 * pfVar14[8] +
                   (*(float *)(iVar2 + 0x10) - *pfVar17) * fVar3) * param_1[2];
          if (0.0 < fVar33) {
            fVar33 = fVar33 * pfVar14[7];
            fVar35 = *(float *)(iVar2 + 0x30);
            fVar25 = *(float *)(iVar2 + 0x34);
            fVar27 = *(float *)(iVar2 + 0x38);
            fVar31 = fVar33 * *(float *)(iVar2 + 0x3c);
            fVar29 = *(float *)(iVar15 + 0x30);
            fVar30 = *(float *)(iVar15 + 0x34);
            fVar9 = *(float *)(iVar15 + 0x38);
            fVar37 = fVar33 * *(float *)(iVar15 + 0x3c);
            *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar31 * fVar3;
            *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar31 * fVar34;
            *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar31 * fVar26;
            *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar31 * fVar28;
            *pfVar17 = *pfVar17 - fVar37 * fVar3;
            *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar37 * fVar34;
            *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar37 * fVar26;
            *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar37 * fVar28;
            fVar3 = pfVar14[5];
            fVar34 = pfVar14[6];
            fVar26 = pfVar14[7];
            fVar28 = pfVar14[8];
            fVar10 = pfVar14[9];
            fVar11 = pfVar14[10];
            fVar32 = pfVar14[0xb];
            *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fVar33 * fVar35 * pfVar14[4];
            *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar33 * fVar25 * fVar3;
            *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar33 * fVar27 * fVar34;
            *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar31 * fVar26;
            *pfVar16 = *pfVar16 + fVar33 * fVar29 * fVar28;
            *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar33 * fVar30 * fVar10;
            *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar33 * fVar9 * fVar11;
            *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar37 * fVar32;
            *pfVar24 = fVar33 + *pfVar24;
          }
          pcVar19 = pcVar23 + 4;
          pcVar23 = pcVar23 + 4;
          pfVar14 = pfVar14 + 0xc;
          pfVar24 = pfVar24 + 1;
        } while (*pcVar19 == '\x02');
        break;
      case '\x03':
        fVar28 = *pfVar16;
        fVar35 = pfVar16[1];
        fVar25 = pfVar16[2];
        fVar27 = pfVar16[3];
        fVar33 = pfVar17[-0x11] * param_1[1] -
                 (*(float *)(iVar2 + 0x28) * pfVar17[-0xe] +
                  *(float *)(iVar15 + 0x28) * pfVar17[-10] +
                  (*(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18)) * fVar25 +
                 *(float *)(iVar2 + 0x24) * pfVar17[-0xf] +
                 *(float *)(iVar15 + 0x24) * pfVar17[-0xb] +
                 (*(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14)) * fVar35 +
                 *(float *)(iVar2 + 0x20) * pfVar17[-0x10] +
                 *(float *)(iVar15 + 0x20) * pfVar17[-0xc] +
                 (*(float *)(iVar2 + 0x10) - *(float *)(iVar15 + 0x10)) * fVar28) * param_1[2];
        fVar34 = pfVar17[-5] * param_1[1] -
                 (*(float *)(iVar2 + 0x28) * pfVar17[-2] + *(float *)(iVar15 + 0x28) * pfVar17[2] +
                  (*(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18)) * pfVar17[-6] +
                 *(float *)(iVar2 + 0x24) * pfVar17[-3] + *(float *)(iVar15 + 0x24) * pfVar17[1] +
                 (*(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14)) * pfVar17[-7] +
                 *(float *)(iVar2 + 0x20) * pfVar17[-4] + *(float *)(iVar15 + 0x20) * *pfVar17 +
                 (*(float *)(iVar2 + 0x10) - *(float *)(iVar15 + 0x10)) * pfVar17[-8]) * param_1[2];
        fVar26 = pfVar17[-9] * fVar33 + fVar34 * *(float *)(pcVar23 + 4);
        fVar3 = fVar33 * *(float *)(pcVar23 + 4) + pfVar17[3] * fVar34;
        fVar33 = fVar33 * pfVar17[-0xd];
        fVar34 = fVar34 * pfVar17[-1];
        if (fVar26 <= 0.0) {
          if (fVar34 < 0.0 != (fVar34 == 0.0)) goto LAB_00921cf2;
LAB_00921dad:
          fVar33 = *(float *)(iVar2 + 0x30);
          fVar3 = *(float *)(iVar2 + 0x34);
          fVar26 = *(float *)(iVar2 + 0x38);
          fVar28 = pfVar17[-8];
          fVar35 = pfVar17[-7];
          fVar25 = pfVar17[-6];
          fVar27 = pfVar17[-5];
          fVar31 = fVar34 * *(float *)(iVar2 + 0x3c);
          fVar29 = *(float *)(iVar15 + 0x30);
          fVar30 = *(float *)(iVar15 + 0x34);
          fVar9 = *(float *)(iVar15 + 0x38);
          fVar37 = fVar34 * *(float *)(iVar15 + 0x3c);
          *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar31 * fVar28;
          *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar31 * fVar35;
          *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar31 * fVar25;
          *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar31 * fVar27;
          *(float *)(iVar15 + 0x10) = *(float *)(iVar15 + 0x10) - fVar37 * fVar28;
          *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar37 * fVar35;
          *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar37 * fVar25;
          *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar37 * fVar27;
          fVar28 = pfVar17[-3];
          fVar35 = pfVar17[-2];
          fVar25 = pfVar17[-1];
          fVar27 = *pfVar17;
          fVar10 = pfVar17[1];
          fVar11 = pfVar17[2];
          fVar32 = pfVar17[3];
          *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fVar34 * fVar33 * pfVar17[-4];
          *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar34 * fVar3 * fVar28;
          *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar34 * fVar26 * fVar35;
          *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar31 * fVar25;
          *(float *)(iVar15 + 0x20) = *(float *)(iVar15 + 0x20) + fVar34 * fVar29 * fVar27;
          *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar34 * fVar30 * fVar10;
          *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar34 * fVar9 * fVar11;
          *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar37 * fVar32;
          pfVar13[1] = fVar34 + pfVar13[1];
        }
        else {
          if (0.0 < fVar3) {
            fVar33 = *(float *)(iVar2 + 0x30);
            fVar34 = *(float *)(iVar2 + 0x34);
            fVar29 = *(float *)(iVar2 + 0x38);
            fVar37 = fVar26 * *(float *)(iVar2 + 0x3c);
            fVar30 = *(float *)(iVar15 + 0x30);
            fVar9 = *(float *)(iVar15 + 0x34);
            fVar10 = *(float *)(iVar15 + 0x38);
            fVar38 = fVar26 * *(float *)(iVar15 + 0x3c);
            *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar37 * fVar28;
            *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar37 * fVar35;
            *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar37 * fVar25;
            *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar37 * fVar27;
            *(float *)(iVar15 + 0x10) = *(float *)(iVar15 + 0x10) - fVar38 * fVar28;
            *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar38 * fVar35;
            *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar38 * fVar25;
            *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar38 * fVar27;
            fVar28 = pfVar17[-0xf];
            fVar35 = pfVar17[-0xe];
            fVar25 = pfVar17[-0xd];
            fVar27 = pfVar17[-0xc];
            fVar11 = pfVar17[-0xb];
            fVar32 = pfVar17[-10];
            fVar31 = pfVar17[-9];
            *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fVar26 * fVar33 * pfVar17[-0x10];
            *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar26 * fVar34 * fVar28;
            *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar26 * fVar29 * fVar35;
            *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar37 * fVar25;
            *(float *)(iVar15 + 0x20) = *(float *)(iVar15 + 0x20) + fVar26 * fVar30 * fVar27;
            *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar26 * fVar9 * fVar11;
            *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar26 * fVar10 * fVar32;
            *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar38 * fVar31;
            *pfVar13 = fVar26 + *pfVar13;
            fVar34 = fVar3;
            goto LAB_00921dad;
          }
LAB_00921cf2:
          if (0.0 < fVar33) {
            fVar3 = *(float *)(iVar2 + 0x30);
            fVar34 = *(float *)(iVar2 + 0x34);
            fVar26 = *(float *)(iVar2 + 0x38);
            fVar31 = fVar33 * *(float *)(iVar2 + 0x3c);
            fVar29 = *(float *)(iVar15 + 0x30);
            fVar30 = *(float *)(iVar15 + 0x34);
            fVar9 = *(float *)(iVar15 + 0x38);
            fVar37 = fVar33 * *(float *)(iVar15 + 0x3c);
            *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar31 * fVar28;
            *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar31 * fVar35;
            *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar31 * fVar25;
            *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar31 * fVar27;
            *(float *)(iVar15 + 0x10) = *(float *)(iVar15 + 0x10) - fVar37 * fVar28;
            *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar37 * fVar35;
            *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar37 * fVar25;
            *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar37 * fVar27;
            fVar28 = pfVar17[-0xf];
            fVar35 = pfVar17[-0xe];
            fVar25 = pfVar17[-0xd];
            fVar27 = pfVar17[-0xc];
            fVar10 = pfVar17[-0xb];
            fVar11 = pfVar17[-10];
            fVar32 = pfVar17[-9];
            *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fVar33 * fVar3 * pfVar17[-0x10];
            *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar33 * fVar34 * fVar28;
            *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar33 * fVar26 * fVar35;
            *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar31 * fVar25;
            *(float *)(iVar15 + 0x20) = *(float *)(iVar15 + 0x20) + fVar33 * fVar29 * fVar27;
            *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar33 * fVar30 * fVar10;
            *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar33 * fVar9 * fVar11;
            *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar37 * fVar32;
            *pfVar13 = fVar33 + *pfVar13;
          }
        }
        pfVar17 = pfVar17 + 0x18;
        pfVar24 = pfVar13 + 2;
        pcVar19 = pcVar23 + 8;
        pfVar14 = pfVar16 + 0x18;
        if (pcVar23[8] == '\x03') goto code_r0x00921e40;
        goto LAB_00921b03;
      case '\x04':
        pfVar17 = (float *)(iVar15 + 0x20);
        do {
          fVar33 = pfVar14[7] + *(float *)(pcVar23 + 0xc);
          fStack_100 = (fVar33 * *(float *)(pcVar23 + 0x10) -
                       (*(float *)(iVar2 + 0x28) * pfVar14[2] +
                        *(float *)(iVar15 + 0x28) * pfVar14[6] +
                       *(float *)(iVar2 + 0x24) * pfVar14[1] +
                       *(float *)(iVar15 + 0x24) * pfVar14[5] +
                       *(float *)(iVar2 + 0x20) * *pfVar14 + *pfVar17 * pfVar14[4]) *
                       *(float *)(pcVar23 + 0x14)) * pfVar14[3];
          if (fStack_100 <= *(float *)(pcVar23 + 4)) {
            if (fStack_100 < *(float *)(pcVar23 + 8)) {
              if (*(int *)(pcVar23 + 0x18) != 0) {
                fVar33 = (*(float *)(pcVar23 + 8) / fStack_100) * fVar33;
              }
              fStack_100 = *(float *)(pcVar23 + 8);
            }
          }
          else {
            if (*(int *)(pcVar23 + 0x18) != 0) {
              fVar33 = (*(float *)(pcVar23 + 4) / fStack_100) * fVar33;
            }
            fStack_100 = *(float *)(pcVar23 + 4);
          }
          pfVar14[7] = fVar33;
          fVar33 = *(float *)(iVar15 + 0x30);
          fVar3 = *(float *)(iVar15 + 0x34);
          fVar34 = *(float *)(iVar15 + 0x38);
          fVar26 = *(float *)(iVar15 + 0x3c);
          fVar28 = pfVar14[1];
          fVar35 = pfVar14[2];
          fVar25 = pfVar14[3];
          fVar27 = pfVar14[4];
          fVar29 = pfVar14[5];
          fVar30 = pfVar14[6];
          fVar9 = pfVar14[7];
          *(float *)(iVar2 + 0x20) =
               *(float *)(iVar2 + 0x20) + fStack_100 * *(float *)(iVar2 + 0x30) * *pfVar14;
          *(float *)(iVar2 + 0x24) =
               *(float *)(iVar2 + 0x24) + fStack_100 * *(float *)(iVar2 + 0x34) * fVar28;
          *(float *)(iVar2 + 0x28) =
               *(float *)(iVar2 + 0x28) + fStack_100 * *(float *)(iVar2 + 0x38) * fVar35;
          *(float *)(iVar2 + 0x2c) =
               *(float *)(iVar2 + 0x2c) + fStack_100 * *(float *)(iVar2 + 0x3c) * fVar25;
          *pfVar17 = *pfVar17 + fStack_100 * fVar33 * fVar27;
          *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fStack_100 * fVar3 * fVar29;
          *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fStack_100 * fVar34 * fVar30;
          *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fStack_100 * fVar26 * fVar9;
          pcVar23 = pcVar23 + 0x1c;
          pfVar14 = pfVar14 + 8;
          *pfVar24 = fStack_100 + *pfVar24;
          pfVar24 = pfVar24 + 1;
        } while (*pcVar23 == '\x04');
        break;
      case '\x05':
        goto switchD_00921b0f_caseD_5;
      case '\x06':
        pfVar17 = (float *)(iVar15 + 0x10);
        pfVar16 = (float *)(iVar15 + 0x20);
        do {
          fVar33 = (pfVar14[3] * param_1[1] -
                   (*(float *)(iVar2 + 0x28) * pfVar14[6] + *(float *)(iVar15 + 0x28) * pfVar14[10]
                    + (*(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18)) * pfVar14[2] +
                   *(float *)(iVar2 + 0x24) * pfVar14[5] + *(float *)(iVar15 + 0x24) * pfVar14[9] +
                   (*(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14)) * pfVar14[1] +
                   *(float *)(iVar2 + 0x20) * pfVar14[4] + *pfVar16 * pfVar14[8] +
                   (*(float *)(iVar2 + 0x10) - *pfVar17) * *pfVar14) * param_1[2]) * pfVar14[7];
          if (*(float *)(pcVar23 + 4) < ABS(fVar33)) {
            fVar3 = *(float *)(pcVar23 + 4) / ABS(fVar33);
            fVar33 = fVar33 * fVar3;
            pfVar14[3] = fVar3 * pfVar14[3];
          }
          fVar3 = *(float *)(iVar2 + 0x30);
          fVar34 = *(float *)(iVar2 + 0x34);
          fVar26 = *(float *)(iVar2 + 0x38);
          fVar28 = *pfVar14;
          fVar35 = pfVar14[1];
          fVar25 = pfVar14[2];
          fVar27 = pfVar14[3];
          fVar31 = fVar33 * *(float *)(iVar2 + 0x3c);
          fVar29 = *(float *)(iVar15 + 0x30);
          fVar30 = *(float *)(iVar15 + 0x34);
          fVar9 = *(float *)(iVar15 + 0x38);
          fVar37 = fVar33 * *(float *)(iVar15 + 0x3c);
          *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar31 * fVar28;
          *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar31 * fVar35;
          *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar31 * fVar25;
          *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar31 * fVar27;
          *pfVar17 = *pfVar17 - fVar37 * fVar28;
          *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar37 * fVar35;
          *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar37 * fVar25;
          *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar37 * fVar27;
          fVar28 = pfVar14[5];
          fVar35 = pfVar14[6];
          fVar25 = pfVar14[7];
          fVar27 = pfVar14[8];
          fVar10 = pfVar14[9];
          fVar11 = pfVar14[10];
          fVar32 = pfVar14[0xb];
          *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fVar33 * fVar3 * pfVar14[4];
          *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar33 * fVar34 * fVar28;
          *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar33 * fVar26 * fVar35;
          *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar31 * fVar25;
          *pfVar16 = *pfVar16 + fVar33 * fVar29 * fVar27;
          *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar33 * fVar30 * fVar10;
          *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar33 * fVar9 * fVar11;
          *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar37 * fVar32;
          pcVar23 = pcVar23 + 8;
          pfVar14 = pfVar14 + 0xc;
          *pfVar24 = fVar33 + *pfVar24;
          pfVar24 = pfVar24 + 1;
        } while (*pcVar23 == '\x06');
        break;
      case '\a':
        pfVar24 = (float *)(iVar15 + 0x10);
        pfVar17 = (float *)(iVar15 + 0x20);
        fVar33 = pfVar16[3] * param_1[3] -
                 (*(float *)(iVar2 + 0x28) * pfVar16[6] + *(float *)(iVar15 + 0x28) * pfVar16[10] +
                  (*(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18)) * pfVar16[2] +
                 *(float *)(iVar2 + 0x24) * pfVar16[5] + *(float *)(iVar15 + 0x24) * pfVar16[9] +
                 (*(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14)) * pfVar16[1] +
                 *(float *)(iVar2 + 0x20) * pfVar16[4] + *(float *)(iVar15 + 0x20) * pfVar16[8] +
                 (*(float *)(iVar2 + 0x10) - *(float *)(iVar15 + 0x10)) * *pfVar16) * param_1[2];
        fVar3 = pfVar16[0xf] * param_1[3] -
                (*(float *)(iVar2 + 0x28) * pfVar16[0x12] +
                 *(float *)(iVar15 + 0x28) * pfVar16[0x16] +
                 (*(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18)) * pfVar16[0xe] +
                *(float *)(iVar2 + 0x24) * pfVar16[0x11] + *(float *)(iVar15 + 0x24) * pfVar16[0x15]
                + (*(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14)) * pfVar16[0xd] +
                *(float *)(iVar2 + 0x20) * pfVar16[0x10] + *pfVar17 * pfVar16[0x14] +
                (*(float *)(iVar2 + 0x10) - *pfVar24) * pfVar16[0xc]) * param_1[2];
        fVar34 = *(float *)(pcVar23 + 0xc) * *(float *)(pcVar23 + 0xc);
        fVar26 = fVar3 * *(float *)(pcVar23 + 8) + pfVar16[0xb] * fVar33;
        fVar33 = pfVar16[0x17] * fVar3 + fVar33 * *(float *)(pcVar23 + 8);
        fVar3 = fVar33 * fVar33 + fVar26 * fVar26;
        if (fVar34 < fVar3) {
          fVar3 = SQRT(fVar34 / fVar3);
          fVar26 = fVar3 * fVar26;
          fVar33 = fVar3 * fVar33;
          pfVar16[3] = fVar3 * pfVar16[3];
          pfVar16[0xf] = fVar3 * pfVar16[0xf];
        }
        fVar3 = *(float *)(iVar2 + 0x30);
        fVar34 = *(float *)(iVar2 + 0x34);
        fVar28 = *(float *)(iVar2 + 0x38);
        fVar35 = *pfVar16;
        fVar25 = pfVar16[1];
        fVar27 = pfVar16[2];
        fVar29 = pfVar16[3];
        fVar37 = fVar26 * *(float *)(iVar2 + 0x3c);
        fVar30 = *(float *)(iVar15 + 0x30);
        fVar9 = *(float *)(iVar15 + 0x34);
        fVar10 = *(float *)(iVar15 + 0x38);
        fVar38 = fVar26 * *(float *)(iVar15 + 0x3c);
        *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar37 * fVar35;
        *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar37 * fVar25;
        *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar37 * fVar27;
        *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar37 * fVar29;
        *pfVar24 = *pfVar24 - fVar38 * fVar35;
        *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar38 * fVar25;
        *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar38 * fVar27;
        *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar38 * fVar29;
        fVar35 = pfVar16[5];
        fVar25 = pfVar16[6];
        fVar27 = pfVar16[7];
        fVar29 = pfVar16[8];
        fVar11 = pfVar16[9];
        fVar32 = pfVar16[10];
        fVar31 = pfVar16[0xb];
        *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fVar26 * fVar3 * pfVar16[4];
        *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar26 * fVar34 * fVar35;
        *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar26 * fVar28 * fVar25;
        *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar37 * fVar27;
        *pfVar17 = *pfVar17 + fVar26 * fVar30 * fVar29;
        *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar26 * fVar9 * fVar11;
        *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar26 * fVar10 * fVar32;
        *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar38 * fVar31;
        *pfVar13 = fVar26 + *pfVar13;
        fVar3 = *(float *)(iVar2 + 0x30);
        fVar34 = *(float *)(iVar2 + 0x34);
        fVar26 = *(float *)(iVar2 + 0x38);
        pfVar14 = pfVar16 + 0x18;
        fVar31 = fVar33 * *(float *)(iVar2 + 0x3c);
        fVar28 = *(float *)(iVar15 + 0x30);
        fVar35 = *(float *)(iVar15 + 0x34);
        fVar25 = *(float *)(iVar15 + 0x38);
        fVar27 = pfVar16[0xc];
        fVar29 = pfVar16[0xd];
        fVar30 = pfVar16[0xe];
        fVar9 = pfVar16[0xf];
        fVar37 = fVar33 * *(float *)(iVar15 + 0x3c);
        *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar31 * fVar27;
        *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar31 * fVar29;
        *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar31 * fVar30;
        *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar31 * fVar9;
        *pfVar24 = *pfVar24 - fVar37 * fVar27;
        *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar37 * fVar29;
        *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar37 * fVar30;
        *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar37 * fVar9;
        fVar27 = pfVar16[0x11];
        fVar29 = pfVar16[0x12];
        fVar30 = pfVar16[0x13];
        fVar9 = pfVar16[0x14];
        fVar10 = pfVar16[0x15];
        fVar11 = pfVar16[0x16];
        fVar32 = pfVar16[0x17];
        *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fVar33 * fVar3 * pfVar16[0x10];
        *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar33 * fVar34 * fVar27;
        *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar33 * fVar26 * fVar29;
        *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar31 * fVar30;
        *pfVar17 = *pfVar17 + fVar33 * fVar28 * fVar9;
        *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar33 * fVar35 * fVar10;
        *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar33 * fVar25 * fVar11;
        *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar37 * fVar32;
        pfVar24 = pfVar13 + 2;
        pfVar13[1] = fVar33 + pfVar13[1];
        pcVar19 = pcVar23 + 0x14;
        pcVar23 = pcVar23 + 0x14;
        if (*pcVar19 != '\x01') break;
        goto switchD_00921b0f_caseD_1;
      case '\b':
        goto switchD_00921b0f_caseD_8;
      case '\t':
        pfVar17 = (float *)(iVar15 + 0x20);
        do {
          fVar33 = (pfVar14[7] * param_1[3] -
                   (*(float *)(iVar2 + 0x28) * pfVar14[2] + *(float *)(iVar15 + 0x28) * pfVar14[6] +
                   *(float *)(iVar2 + 0x24) * pfVar14[1] + *(float *)(iVar15 + 0x24) * pfVar14[5] +
                   *(float *)(iVar2 + 0x20) * *pfVar14 + *pfVar17 * pfVar14[4]) * param_1[2]) *
                   pfVar14[3];
          if (*(float *)(pcVar23 + 4) < ABS(fVar33)) {
            fVar3 = *(float *)(pcVar23 + 4) / ABS(fVar33);
            fVar33 = fVar3 * fVar33;
            pfVar14[7] = fVar3 * pfVar14[7];
          }
          fVar3 = *(float *)(iVar15 + 0x30);
          fVar34 = *(float *)(iVar15 + 0x34);
          fVar26 = *(float *)(iVar15 + 0x38);
          fVar28 = *(float *)(iVar15 + 0x3c);
          fVar35 = pfVar14[1];
          fVar25 = pfVar14[2];
          fVar27 = pfVar14[3];
          fVar29 = pfVar14[4];
          fVar30 = pfVar14[5];
          fVar9 = pfVar14[6];
          fVar10 = pfVar14[7];
          *(float *)(iVar2 + 0x20) =
               *(float *)(iVar2 + 0x20) + fVar33 * *(float *)(iVar2 + 0x30) * *pfVar14;
          *(float *)(iVar2 + 0x24) =
               *(float *)(iVar2 + 0x24) + fVar33 * *(float *)(iVar2 + 0x34) * fVar35;
          *(float *)(iVar2 + 0x28) =
               *(float *)(iVar2 + 0x28) + fVar33 * *(float *)(iVar2 + 0x38) * fVar25;
          *(float *)(iVar2 + 0x2c) =
               *(float *)(iVar2 + 0x2c) + fVar33 * *(float *)(iVar2 + 0x3c) * fVar27;
          *pfVar17 = *pfVar17 + fVar33 * fVar3 * fVar29;
          *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar33 * fVar34 * fVar30;
          *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar33 * fVar26 * fVar9;
          *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar33 * fVar28 * fVar10;
          pcVar23 = pcVar23 + 8;
          pfVar14 = pfVar14 + 8;
          *pfVar24 = fVar33 + *pfVar24;
          pfVar24 = pfVar24 + 1;
        } while (*pcVar23 == '\t');
        break;
      case '\n':
        pfVar17 = (float *)(iVar15 + 0x20);
        goto LAB_00922946;
      case '\v':
        goto switchD_00921b0f_caseD_b;
      case '\f':
        pfVar17 = (float *)(iVar15 + 0x20);
        do {
          fVar3 = *pfVar14;
          fVar34 = pfVar14[1];
          fVar26 = pfVar14[2];
          fVar28 = pfVar14[3];
          pfVar16 = pfVar14 + 3;
          fVar35 = pfVar14[4];
          fVar25 = pfVar14[5];
          fVar27 = pfVar14[6];
          fVar29 = pfVar14[7];
          pfVar18 = pfVar14 + 7;
          pcVar23 = pcVar23 + 4;
          pfVar14 = pfVar14 + 8;
          pfVar24 = pfVar13 + 1;
          fVar33 = (*pfVar18 * param_1[1] -
                   (*(float *)(iVar2 + 0x28) * fVar26 + *(float *)(iVar15 + 0x28) * fVar27 +
                   *(float *)(iVar2 + 0x24) * fVar34 + *(float *)(iVar15 + 0x24) * fVar25 +
                   *(float *)(iVar2 + 0x20) * fVar3 + *pfVar17 * fVar35) * param_1[2]) * *pfVar16;
          fVar30 = *(float *)(iVar15 + 0x30);
          fVar9 = *(float *)(iVar15 + 0x34);
          fVar10 = *(float *)(iVar15 + 0x38);
          fVar11 = *(float *)(iVar15 + 0x3c);
          *(float *)(iVar2 + 0x20) =
               *(float *)(iVar2 + 0x20) + fVar33 * *(float *)(iVar2 + 0x30) * fVar3;
          *(float *)(iVar2 + 0x24) =
               *(float *)(iVar2 + 0x24) + fVar33 * *(float *)(iVar2 + 0x34) * fVar34;
          *(float *)(iVar2 + 0x28) =
               *(float *)(iVar2 + 0x28) + fVar33 * *(float *)(iVar2 + 0x38) * fVar26;
          *(float *)(iVar2 + 0x2c) =
               *(float *)(iVar2 + 0x2c) + fVar33 * *(float *)(iVar2 + 0x3c) * fVar28;
          *pfVar17 = *pfVar17 + fVar33 * fVar30 * fVar35;
          *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar33 * fVar9 * fVar25;
          *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar33 * fVar10 * fVar27;
          *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar33 * fVar11 * fVar29;
          *pfVar13 = fVar33 + *pfVar13;
          pfVar13 = pfVar24;
        } while (*pcVar23 == '\f');
        break;
      case '\r':
        pfVar17 = (float *)(iVar15 + 0x10);
        pfVar18 = (float *)(iVar15 + 0x20);
        do {
          fVar3 = *pfVar16;
          fVar34 = pfVar16[1];
          fVar26 = pfVar16[2];
          fVar28 = pfVar16[3];
          fVar35 = *(float *)(iVar2 + 0x30);
          fVar25 = *(float *)(iVar2 + 0x34);
          fVar27 = *(float *)(iVar2 + 0x38);
          pcVar23 = pcVar23 + 4;
          pfVar14 = pfVar16 + 0xc;
          pfVar24 = pfVar13 + 1;
          fVar33 = (pfVar16[3] * param_1[1] -
                   (*(float *)(iVar2 + 0x28) * pfVar16[6] + *(float *)(iVar15 + 0x28) * pfVar16[10]
                    + (*(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18)) * fVar26 +
                   *(float *)(iVar2 + 0x24) * pfVar16[5] + *(float *)(iVar15 + 0x24) * pfVar16[9] +
                   (*(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14)) * fVar34 +
                   *(float *)(iVar2 + 0x20) * pfVar16[4] + *pfVar18 * pfVar16[8] +
                   (*(float *)(iVar2 + 0x10) - *pfVar17) * fVar3) * param_1[2]) * pfVar16[7];
          fVar31 = fVar33 * *(float *)(iVar2 + 0x3c);
          fVar29 = *(float *)(iVar15 + 0x30);
          fVar30 = *(float *)(iVar15 + 0x34);
          fVar9 = *(float *)(iVar15 + 0x38);
          fVar37 = fVar33 * *(float *)(iVar15 + 0x3c);
          *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar31 * fVar3;
          *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar31 * fVar34;
          *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar31 * fVar26;
          *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar31 * fVar28;
          *pfVar17 = *pfVar17 - fVar37 * fVar3;
          *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar37 * fVar34;
          *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar37 * fVar26;
          *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar37 * fVar28;
          fVar3 = pfVar16[5];
          fVar34 = pfVar16[6];
          fVar26 = pfVar16[7];
          fVar28 = pfVar16[8];
          fVar10 = pfVar16[9];
          fVar11 = pfVar16[10];
          fVar32 = pfVar16[0xb];
          *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fVar33 * fVar35 * pfVar16[4];
          *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar33 * fVar25 * fVar3;
          *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar33 * fVar27 * fVar34;
          *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar31 * fVar26;
          *pfVar18 = *pfVar18 + fVar33 * fVar29 * fVar28;
          *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar33 * fVar30 * fVar10;
          *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar33 * fVar9 * fVar11;
          *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar37 * fVar32;
          *pfVar13 = fVar33 + *pfVar13;
          pfVar16 = pfVar14;
          pfVar13 = pfVar24;
        } while (*pcVar23 == '\r');
        break;
      case '\x0e':
        (**(code **)(pcVar23 + 4))(pfVar16,pcVar23 + 8);
        pcVar23 = pcVar23 + (byte)pcVar23[1];
        break;
      case '\x0f':
        local_e4 = param_1[2];
        local_e8 = param_1[1];
        param_1[2] = *(float *)(pcVar23 + 8);
        param_1[1] = *(float *)(pcVar23 + 4);
        pcVar23 = pcVar23 + 0xc;
        break;
      case '\x10':
        param_1[1] = local_e8;
        param_1[2] = local_e4;
        pcVar23 = pcVar23 + 4;
        break;
      default:
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return uVar12;
      }
    } while( true );
  }
switchD_009238d3_caseD_1:
  pfVar24 = *(float **)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0x14);
  iVar15 = *(int *)(param_2 + 4);
  param_2 = param_2 + 0x18;
  if (pfVar24 == (float *)0x0) {
    cVar21 = *param_2;
    while ('\x01' < cVar21) {
      cVar21 = param_2[2];
      pfVar14 = param_4;
      if ((('\x02' < cVar21) && (pfVar14 = param_4 + 1, '\x04' < cVar21)) &&
         (pfVar14 = param_4 + 2, cVar21 == '\x06')) {
        pfVar14 = param_4 + 3;
      }
      pcVar23 = param_2 + (byte)param_2[1];
      param_2 = param_2 + (byte)param_2[1];
      param_4 = pfVar14;
      cVar21 = *pcVar23;
    }
  }
  do {
    iVar20 = (int)*param_2;
    switch(iVar20) {
    case 0:
      return 1;
    case 1:
      goto switchD_009238d3_caseD_1;
    case 2:
    case 5:
    case 6:
    case 0xb:
    case 0xd:
      do {
        *pfVar24 = *param_4;
        pfVar24[1] = *(float *)(iVar15 + 0xc) * param_1[0x3d];
        pfVar24 = (float *)((int)pfVar24 + iVar2);
        iVar15 = FUN_008f0ee0(1);
        pcVar23 = param_2 + (byte)param_2[1];
        param_2 = param_2 + (byte)param_2[1];
        param_4 = param_4 + 1;
      } while (*pcVar23 == iVar20);
      break;
    case 3:
      *pfVar24 = *param_4;
      pfVar24[1] = *(float *)(iVar15 + 0xc) * param_1[0x3d];
      pfVar24 = (float *)((int)pfVar24 + iVar2);
      *pfVar24 = param_4[1];
      pfVar24[1] = *(float *)(iVar15 + 0x3c) * param_1[0x3d];
      pfVar24 = (float *)((int)pfVar24 + iVar2);
      iVar15 = FUN_008f0ee0(2);
      param_4 = param_4 + 2;
      param_2 = param_2 + 8;
      break;
    case 4:
    case 9:
    case 10:
    case 0xc:
      do {
        *pfVar24 = *param_4;
        pfVar24[1] = *(float *)(iVar15 + 0x1c) * param_1[0x3d];
        pfVar24 = (float *)((int)pfVar24 + iVar2);
        iVar15 = FUN_008f0ed0(1);
        pcVar23 = param_2 + (byte)param_2[1];
        param_2 = param_2 + (byte)param_2[1];
        param_4 = param_4 + 1;
      } while (*pcVar23 == iVar20);
      break;
    case 7:
      pfVar14 = *(float **)(param_2 + 4);
      *pfVar14 = *param_4;
      pfVar14[1] = *(float *)(iVar15 + 0xc) * param_1[0x3d];
      iVar20 = *(int *)(param_2 + 0x10);
      *(float *)((int)pfVar14 + iVar20) = param_4[1];
      ((float *)((int)pfVar14 + iVar20))[1] = *(float *)(iVar15 + 0x3c) * param_1[0x3d];
      iVar15 = FUN_008f0ee0(2);
      param_4 = param_4 + 2;
      param_2 = param_2 + 0x14;
      break;
    case 8:
      pfVar14 = *(float **)(param_2 + 4);
      *pfVar14 = *param_4;
      pfVar14[1] = *(float *)(iVar15 + 0xc) * param_1[0x3d];
      pfVar14 = (float *)((int)pfVar14 + *(int *)(param_2 + 0x10));
      *pfVar14 = param_4[1];
      pfVar14[1] = *(float *)(iVar15 + 0x3c) * param_1[0x3d];
      iVar20 = *(int *)(param_2 + 0x10);
      *(float *)((int)pfVar14 + iVar20) = param_4[2];
      ((float *)((int)pfVar14 + iVar20))[1] = *(float *)(iVar15 + 0x7c) * param_1[0x3d];
      iVar15 = FUN_008f0ed0(1);
      param_4 = param_4 + 3;
      param_2 = param_2 + 0x18;
      break;
    case 0xe:
    case 0xf:
    case 0x10:
      param_2 = param_2 + (byte)param_2[1];
    }
  } while( true );
switchD_00921b0f_caseD_b:
  do {
    fVar34 = *pfVar14;
    fVar26 = pfVar14[1];
    fVar28 = pfVar14[2];
    fVar35 = pfVar14[3];
    fVar33 = (*(float *)(iVar2 + 0x28) * pfVar14[6] + *(float *)(iVar15 + 0x28) * pfVar14[10] +
              (*(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18)) * fVar28 +
             *(float *)(iVar2 + 0x24) * pfVar14[5] + *(float *)(iVar15 + 0x24) * pfVar14[9] +
             (*(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14)) * fVar26 +
             *(float *)(iVar2 + 0x20) * pfVar14[4] + *(float *)(iVar15 + 0x20) * pfVar14[8] +
             (*(float *)(iVar2 + 0x10) - *(float *)(iVar15 + 0x10)) * fVar34) * param_1[2];
    fVar3 = (pfVar14[3] - *(float *)(pcVar23 + 4)) * param_1[1] - fVar33;
    if (0.0 < fVar3) {
      fVar3 = fVar3 * pfVar14[7];
      fVar25 = *(float *)(iVar2 + 0x30);
      fVar27 = *(float *)(iVar2 + 0x34);
      fVar29 = *(float *)(iVar2 + 0x38);
      fVar37 = fVar3 * *(float *)(iVar2 + 0x3c);
      fVar30 = *(float *)(iVar15 + 0x30);
      fVar9 = *(float *)(iVar15 + 0x34);
      fVar10 = *(float *)(iVar15 + 0x38);
      fVar38 = fVar3 * *(float *)(iVar15 + 0x3c);
      *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar37 * fVar34;
      *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar37 * fVar26;
      *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar37 * fVar28;
      *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar37 * fVar35;
      *(float *)(iVar15 + 0x10) = *(float *)(iVar15 + 0x10) - fVar38 * fVar34;
      *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar38 * fVar26;
      *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar38 * fVar28;
      *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar38 * fVar35;
      fVar34 = pfVar14[5];
      fVar26 = pfVar14[6];
      fVar28 = pfVar14[7];
      fVar35 = pfVar14[8];
      fVar11 = pfVar14[9];
      fVar32 = pfVar14[10];
      fVar31 = pfVar14[0xb];
      *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fVar3 * fVar25 * pfVar14[4];
      *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar3 * fVar27 * fVar34;
      *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar3 * fVar29 * fVar26;
      *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar37 * fVar28;
      *(float *)(iVar15 + 0x20) = *(float *)(iVar15 + 0x20) + fVar3 * fVar30 * fVar35;
      *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar3 * fVar9 * fVar11;
      *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar3 * fVar10 * fVar32;
      *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar38 * fVar31;
      *pfVar24 = fVar3 + *pfVar24;
    }
    fVar33 = (pfVar14[3] - *(float *)(pcVar23 + 8)) * param_1[1] - fVar33;
    if (fVar33 < 0.0) {
      fVar33 = fVar33 * pfVar14[7];
      fVar3 = *(float *)(iVar2 + 0x30);
      fVar34 = *(float *)(iVar2 + 0x34);
      fVar26 = *(float *)(iVar2 + 0x38);
      fVar28 = *pfVar14;
      fVar35 = pfVar14[1];
      fVar25 = pfVar14[2];
      fVar27 = pfVar14[3];
      fVar31 = fVar33 * *(float *)(iVar2 + 0x3c);
      fVar29 = *(float *)(iVar15 + 0x30);
      fVar30 = *(float *)(iVar15 + 0x34);
      fVar9 = *(float *)(iVar15 + 0x38);
      fVar37 = fVar33 * *(float *)(iVar15 + 0x3c);
      *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar31 * fVar28;
      *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar31 * fVar35;
      *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar31 * fVar25;
      *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar31 * fVar27;
      *(float *)(iVar15 + 0x10) = *(float *)(iVar15 + 0x10) - fVar37 * fVar28;
      *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar37 * fVar35;
      *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar37 * fVar25;
      *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar37 * fVar27;
      fVar28 = pfVar14[5];
      fVar35 = pfVar14[6];
      fVar25 = pfVar14[7];
      fVar27 = pfVar14[8];
      fVar10 = pfVar14[9];
      fVar11 = pfVar14[10];
      fVar32 = pfVar14[0xb];
      *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fVar33 * fVar3 * pfVar14[4];
      *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar33 * fVar34 * fVar28;
      *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar33 * fVar26 * fVar35;
      *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar31 * fVar25;
      *(float *)(iVar15 + 0x20) = *(float *)(iVar15 + 0x20) + fVar33 * fVar29 * fVar27;
      *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar33 * fVar30 * fVar10;
      *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar33 * fVar9 * fVar11;
      *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar37 * fVar32;
      *pfVar24 = fVar33 + *pfVar24;
    }
    pfVar14 = (float *)FUN_008f0ee0(1);
    pcVar23 = pcVar23 + 0xc;
    pfVar24 = pfVar24 + 1;
  } while (*pcVar23 == '\v');
  goto LAB_00921b00;
LAB_00922946:
  do {
    fVar34 = pfVar14[1];
    fVar26 = pfVar14[2];
    fVar28 = pfVar14[3];
    fVar35 = pfVar14[4];
    fVar25 = pfVar14[5];
    fVar27 = pfVar14[6];
    fVar29 = pfVar14[7];
    fVar33 = (*(float *)(iVar2 + 0x28) * fVar26 + *(float *)(iVar15 + 0x28) * fVar27 +
             *(float *)(iVar2 + 0x24) * fVar34 + *(float *)(iVar15 + 0x24) * fVar25 +
             *(float *)(iVar2 + 0x20) * *pfVar14 + *pfVar17 * fVar35) * param_1[2];
    fVar3 = (pfVar14[7] - *(float *)(pcVar23 + 4)) * *(float *)(pcVar23 + 0xc) - fVar33;
    if (fVar3 <= 0.0) {
      fVar33 = (pfVar14[7] - *(float *)(pcVar23 + 8)) * *(float *)(pcVar23 + 0xc) - fVar33;
      if (fVar33 < 0.0) {
        fVar33 = fVar33 * pfVar14[3];
        goto LAB_009229e1;
      }
    }
    else {
      fVar33 = fVar3 * pfVar14[3];
LAB_009229e1:
      fVar3 = *(float *)(iVar15 + 0x30);
      fVar30 = *(float *)(iVar15 + 0x34);
      fVar9 = *(float *)(iVar15 + 0x38);
      fVar10 = *(float *)(iVar15 + 0x3c);
      *(float *)(iVar2 + 0x20) =
           *(float *)(iVar2 + 0x20) + fVar33 * *(float *)(iVar2 + 0x30) * *pfVar14;
      *(float *)(iVar2 + 0x24) =
           *(float *)(iVar2 + 0x24) + fVar33 * *(float *)(iVar2 + 0x34) * fVar34;
      *(float *)(iVar2 + 0x28) =
           *(float *)(iVar2 + 0x28) + fVar33 * *(float *)(iVar2 + 0x38) * fVar26;
      *(float *)(iVar2 + 0x2c) =
           *(float *)(iVar2 + 0x2c) + fVar33 * *(float *)(iVar2 + 0x3c) * fVar28;
      *pfVar17 = *pfVar17 + fVar33 * fVar3 * fVar35;
      *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar33 * fVar30 * fVar25;
      *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar33 * fVar9 * fVar27;
      *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar33 * fVar10 * fVar29;
      *pfVar24 = fVar33 + *pfVar24;
    }
    pcVar19 = pcVar23 + 0x10;
    pcVar23 = pcVar23 + 0x10;
    pfVar14 = pfVar14 + 8;
    pfVar24 = pfVar24 + 1;
  } while (*pcVar19 == '\n');
  goto LAB_00921b00;
switchD_00921b0f_caseD_5:
  do {
    fVar33 = pfVar14[3] + *(float *)(pcVar23 + 0xc);
    fStack_108 = (fVar33 * *(float *)(pcVar23 + 0x10) -
                 (*(float *)(iVar2 + 0x28) * pfVar14[6] + *(float *)(iVar15 + 0x28) * pfVar14[10] +
                  (*(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18)) * pfVar14[2] +
                 *(float *)(iVar2 + 0x24) * pfVar14[5] + *(float *)(iVar15 + 0x24) * pfVar14[9] +
                 (*(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14)) * pfVar14[1] +
                 *(float *)(iVar2 + 0x20) * pfVar14[4] + *(float *)(iVar15 + 0x20) * pfVar14[8] +
                 (*(float *)(iVar2 + 0x10) - *(float *)(iVar15 + 0x10)) * *pfVar14) *
                 *(float *)(pcVar23 + 0x14)) * pfVar14[7];
    if (fStack_108 <= *(float *)(pcVar23 + 4)) {
      if (fStack_108 < *(float *)(pcVar23 + 8)) {
        if (*(int *)(pcVar23 + 0x18) != 0) {
          fVar33 = (*(float *)(pcVar23 + 8) / fStack_108) * fVar33;
        }
        fStack_108 = *(float *)(pcVar23 + 8);
      }
    }
    else {
      if (*(int *)(pcVar23 + 0x18) != 0) {
        fVar33 = (*(float *)(pcVar23 + 4) / fStack_108) * fVar33;
      }
      fStack_108 = *(float *)(pcVar23 + 4);
    }
    pfVar14[3] = fVar33;
    fVar33 = *(float *)(iVar2 + 0x30);
    fVar3 = *(float *)(iVar2 + 0x34);
    fVar34 = *(float *)(iVar2 + 0x38);
    fVar26 = *pfVar14;
    fVar28 = pfVar14[1];
    fVar35 = pfVar14[2];
    fVar25 = pfVar14[3];
    fVar32 = fStack_108 * *(float *)(iVar2 + 0x3c);
    fVar27 = *(float *)(iVar15 + 0x30);
    fVar29 = *(float *)(iVar15 + 0x34);
    fVar30 = *(float *)(iVar15 + 0x38);
    fVar31 = fStack_108 * *(float *)(iVar15 + 0x3c);
    *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar32 * fVar26;
    *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar32 * fVar28;
    *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar32 * fVar35;
    *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar32 * fVar25;
    *(float *)(iVar15 + 0x10) = *(float *)(iVar15 + 0x10) - fVar31 * fVar26;
    *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar31 * fVar28;
    *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar31 * fVar35;
    *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar31 * fVar25;
    fVar26 = pfVar14[5];
    fVar28 = pfVar14[6];
    fVar35 = pfVar14[7];
    fVar25 = pfVar14[8];
    fVar9 = pfVar14[9];
    fVar10 = pfVar14[10];
    fVar11 = pfVar14[0xb];
    *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fStack_108 * fVar33 * pfVar14[4];
    *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fStack_108 * fVar3 * fVar26;
    *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fStack_108 * fVar34 * fVar28;
    *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar32 * fVar35;
    *(float *)(iVar15 + 0x20) = *(float *)(iVar15 + 0x20) + fStack_108 * fVar27 * fVar25;
    *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fStack_108 * fVar29 * fVar9;
    *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fStack_108 * fVar30 * fVar10;
    *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar31 * fVar11;
    *pfVar24 = fStack_108 + *pfVar24;
    pfVar14 = (float *)FUN_008f0ee0(1);
    pcVar23 = pcVar23 + 0x1c;
    pfVar24 = pfVar24 + 1;
  } while (*pcVar23 == '\x05');
  goto LAB_00921b00;
code_r0x00921e40:
  fVar28 = pfVar16[0x18];
  fVar35 = pfVar16[0x19];
  fVar25 = pfVar16[0x1a];
  fVar27 = pfVar16[0x1b];
  pfVar14 = (float *)(iVar15 + 0x10);
  pfVar17 = (float *)(iVar15 + 0x20);
  fVar33 = pfVar16[0x1b] * param_1[1] -
           (*(float *)(iVar2 + 0x28) * pfVar16[0x1e] + *(float *)(iVar15 + 0x28) * pfVar16[0x22] +
            (*(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18)) * fVar25 +
           *(float *)(iVar2 + 0x24) * pfVar16[0x1d] + *(float *)(iVar15 + 0x24) * pfVar16[0x21] +
           (*(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14)) * fVar35 +
           *(float *)(iVar2 + 0x20) * pfVar16[0x1c] + *(float *)(iVar15 + 0x20) * pfVar16[0x20] +
           (*(float *)(iVar2 + 0x10) - *(float *)(iVar15 + 0x10)) * fVar28) * param_1[2];
  fVar34 = pfVar16[0x27] * param_1[1] -
           (*(float *)(iVar2 + 0x28) * pfVar16[0x2a] + *(float *)(iVar15 + 0x28) * pfVar16[0x2e] +
            (*(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18)) * pfVar16[0x26] +
           *(float *)(iVar2 + 0x24) * pfVar16[0x29] + *(float *)(iVar15 + 0x24) * pfVar16[0x2d] +
           (*(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14)) * pfVar16[0x25] +
           *(float *)(iVar2 + 0x20) * pfVar16[0x28] + *pfVar17 * pfVar16[0x2c] +
           (*(float *)(iVar2 + 0x10) - *pfVar14) * pfVar16[0x24]) * param_1[2];
  fVar26 = pfVar16[0x23] * fVar33 + fVar34 * *(float *)(pcVar23 + 0xc);
  fVar3 = pfVar16[0x2f] * fVar34 + fVar33 * *(float *)(pcVar23 + 0xc);
  fVar33 = fVar33 * pfVar16[0x1f];
  fVar34 = fVar34 * pfVar16[0x2b];
  if (fVar26 <= 0.0) {
    if (fVar34 < 0.0 != (fVar34 == 0.0)) goto LAB_00922164;
    fVar25 = fVar34 * *(float *)(iVar2 + 0x30);
    fVar27 = fVar34 * *(float *)(iVar2 + 0x34);
    fVar29 = fVar34 * *(float *)(iVar2 + 0x38);
    fVar30 = fVar34 * *(float *)(iVar2 + 0x3c);
    fVar33 = *(float *)(iVar15 + 0x30);
    fVar26 = *(float *)(iVar15 + 0x34);
    fVar28 = *(float *)(iVar15 + 0x38);
    fVar35 = *(float *)(iVar15 + 0x3c);
  }
  else {
    if (fVar3 <= 0.0) {
LAB_00922164:
      if (0.0 < fVar33) {
        fVar3 = *(float *)(iVar2 + 0x30);
        fVar34 = *(float *)(iVar2 + 0x34);
        fVar26 = *(float *)(iVar2 + 0x38);
        fVar31 = fVar33 * *(float *)(iVar2 + 0x3c);
        fVar29 = *(float *)(iVar15 + 0x30);
        fVar30 = *(float *)(iVar15 + 0x34);
        fVar9 = *(float *)(iVar15 + 0x38);
        fVar37 = fVar33 * *(float *)(iVar15 + 0x3c);
        *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar31 * fVar28;
        *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar31 * fVar35;
        *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar31 * fVar25;
        *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar31 * fVar27;
        *pfVar14 = *pfVar14 - fVar37 * fVar28;
        *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar37 * fVar35;
        *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar37 * fVar25;
        *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar37 * fVar27;
        fVar28 = pfVar16[0x1d];
        fVar35 = pfVar16[0x1e];
        fVar25 = pfVar16[0x1f];
        fVar27 = pfVar16[0x20];
        fVar10 = pfVar16[0x21];
        fVar11 = pfVar16[0x22];
        fVar32 = pfVar16[0x23];
        *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fVar33 * fVar3 * pfVar16[0x1c];
        *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar33 * fVar34 * fVar28;
        *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar33 * fVar26 * fVar35;
        *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar31 * fVar25;
        *pfVar17 = *pfVar17 + fVar33 * fVar29 * fVar27;
        *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar33 * fVar30 * fVar10;
        *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar33 * fVar9 * fVar11;
        *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar37 * fVar32;
        *pfVar24 = fVar33 + *pfVar24;
      }
      goto LAB_00922296;
    }
    fVar33 = *(float *)(iVar2 + 0x30);
    fVar34 = *(float *)(iVar2 + 0x34);
    fVar29 = *(float *)(iVar2 + 0x38);
    fVar37 = fVar26 * *(float *)(iVar2 + 0x3c);
    fVar30 = *(float *)(iVar15 + 0x30);
    fVar9 = *(float *)(iVar15 + 0x34);
    fVar10 = *(float *)(iVar15 + 0x38);
    fVar38 = fVar26 * *(float *)(iVar15 + 0x3c);
    *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar37 * fVar28;
    *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar37 * fVar35;
    *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar37 * fVar25;
    *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar37 * fVar27;
    *pfVar14 = *pfVar14 - fVar38 * fVar28;
    *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar38 * fVar35;
    *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar38 * fVar25;
    *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar38 * fVar27;
    fVar28 = pfVar16[0x1d];
    fVar35 = pfVar16[0x1e];
    fVar25 = pfVar16[0x1f];
    fVar27 = pfVar16[0x20];
    fVar11 = pfVar16[0x21];
    fVar32 = pfVar16[0x22];
    fVar31 = pfVar16[0x23];
    *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fVar26 * fVar33 * pfVar16[0x1c];
    *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar26 * fVar34 * fVar28;
    *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar26 * fVar29 * fVar35;
    *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar37 * fVar25;
    *pfVar17 = *pfVar17 + fVar26 * fVar30 * fVar27;
    *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar26 * fVar9 * fVar11;
    *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar26 * fVar10 * fVar32;
    *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar38 * fVar31;
    *pfVar24 = fVar26 + *pfVar24;
    fVar25 = fVar3 * *(float *)(iVar2 + 0x30);
    fVar27 = fVar3 * *(float *)(iVar2 + 0x34);
    fVar29 = fVar3 * *(float *)(iVar2 + 0x38);
    fVar30 = fVar3 * *(float *)(iVar2 + 0x3c);
    fVar33 = *(float *)(iVar15 + 0x30);
    fVar26 = *(float *)(iVar15 + 0x34);
    fVar28 = *(float *)(iVar15 + 0x38);
    fVar35 = *(float *)(iVar15 + 0x3c);
    fVar34 = fVar3;
  }
  fVar3 = pfVar16[0x24];
  fVar9 = pfVar16[0x25];
  fVar10 = pfVar16[0x26];
  fVar11 = pfVar16[0x27];
  fVar35 = fVar34 * fVar35;
  *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar30 * fVar3;
  *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar30 * fVar9;
  *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar30 * fVar10;
  *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar30 * fVar11;
  *pfVar14 = *pfVar14 - fVar35 * fVar3;
  *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar35 * fVar9;
  *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar35 * fVar10;
  *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar35 * fVar11;
  fVar3 = pfVar16[0x29];
  fVar9 = pfVar16[0x2a];
  fVar10 = pfVar16[0x2b];
  fVar11 = pfVar16[0x2c];
  fVar32 = pfVar16[0x2d];
  fVar31 = pfVar16[0x2e];
  fVar37 = pfVar16[0x2f];
  *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fVar25 * pfVar16[0x28];
  *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar27 * fVar3;
  *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar29 * fVar9;
  *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar30 * fVar10;
  *pfVar17 = *pfVar17 + fVar34 * fVar33 * fVar11;
  *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar34 * fVar26 * fVar32;
  *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar34 * fVar28 * fVar31;
  *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar35 * fVar37;
  pfVar13[3] = fVar34 + pfVar13[3];
LAB_00922296:
  pcVar19 = pcVar23 + 0x10;
  pcVar23 = pcVar23 + 0x10;
  pfVar14 = pfVar16 + 0x30;
  pfVar24 = pfVar13 + 4;
  if (*pcVar19 == '\b') {
switchD_00921b0f_caseD_8:
    pfVar17 = (float *)(iVar15 + 0x10);
    pfVar16 = (float *)(iVar15 + 0x20);
    fVar33 = (pfVar14[0x1f] * param_1[3] -
             (*(float *)(iVar2 + 0x28) * pfVar14[0x1a] + *(float *)(iVar15 + 0x28) * pfVar14[0x1e] +
             *(float *)(iVar2 + 0x24) * pfVar14[0x19] + *(float *)(iVar15 + 0x24) * pfVar14[0x1d] +
             *(float *)(iVar2 + 0x20) * pfVar14[0x18] + *pfVar16 * pfVar14[0x1c]) * param_1[2]) *
             pfVar14[0x1b];
    fVar3 = pfVar14[3] * param_1[3] -
            (*(float *)(iVar2 + 0x28) * pfVar14[6] + *(float *)(iVar15 + 0x28) * pfVar14[10] +
             (*(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18)) * pfVar14[2] +
            *(float *)(iVar2 + 0x24) * pfVar14[5] + *(float *)(iVar15 + 0x24) * pfVar14[9] +
            (*(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14)) * pfVar14[1] +
            *(float *)(iVar2 + 0x20) * pfVar14[4] + *(float *)(iVar15 + 0x20) * pfVar14[8] +
            (*(float *)(iVar2 + 0x10) - *(float *)(iVar15 + 0x10)) * *pfVar14) * param_1[2];
    fVar34 = pfVar14[0xf] * param_1[3] -
             (*(float *)(iVar2 + 0x28) * pfVar14[0x12] + *(float *)(iVar15 + 0x28) * pfVar14[0x16] +
              (*(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18)) * pfVar14[0xe] +
             *(float *)(iVar2 + 0x24) * pfVar14[0x11] + *(float *)(iVar15 + 0x24) * pfVar14[0x15] +
             (*(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14)) * pfVar14[0xd] +
             *(float *)(iVar2 + 0x20) * pfVar14[0x10] + *pfVar16 * pfVar14[0x14] +
             (*(float *)(iVar2 + 0x10) - *pfVar17) * pfVar14[0xc]) * param_1[2];
    fVar26 = fVar34 * *(float *)(pcVar23 + 8) + fVar3 * pfVar14[0xb];
    fVar34 = fVar3 * *(float *)(pcVar23 + 8) + fVar34 * pfVar14[0x17];
    fVar3 = fVar26 * fVar26 + fVar34 * fVar34 + fVar33 * fVar33;
    if (*(float *)(pcVar23 + 0xc) * *(float *)(pcVar23 + 0xc) < fVar3) {
      fVar3 = *(float *)(pcVar23 + 0xc) / SQRT(fVar3);
      fVar26 = fVar3 * fVar26;
      fVar34 = fVar3 * fVar34;
      fVar33 = fVar33 * fVar3;
      pfVar14[3] = fVar3 * pfVar14[3];
      pfVar14[0xf] = fVar3 * pfVar14[0xf];
      pfVar14[0x1f] = fVar3 * pfVar14[0x1f];
    }
    fVar33 = fVar33 * *(float *)(pcVar23 + 0x14);
    fVar3 = *(float *)(iVar2 + 0x30);
    fVar28 = *(float *)(iVar2 + 0x34);
    fVar35 = *(float *)(iVar2 + 0x38);
    fVar25 = *pfVar14;
    fVar27 = pfVar14[1];
    fVar29 = pfVar14[2];
    fVar30 = pfVar14[3];
    pfVar13 = (float *)(iVar15 + 0x30);
    fVar38 = fVar26 * *(float *)(iVar2 + 0x3c);
    fVar9 = *pfVar13;
    fVar10 = *(float *)(iVar15 + 0x34);
    fVar11 = *(float *)(iVar15 + 0x38);
    fVar36 = fVar26 * *(float *)(iVar15 + 0x3c);
    *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar38 * fVar25;
    *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar38 * fVar27;
    *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar38 * fVar29;
    *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar38 * fVar30;
    *pfVar17 = *pfVar17 - fVar36 * fVar25;
    *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar36 * fVar27;
    *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar36 * fVar29;
    *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar36 * fVar30;
    fVar25 = pfVar14[5];
    fVar27 = pfVar14[6];
    fVar29 = pfVar14[7];
    fVar30 = pfVar14[8];
    fVar32 = pfVar14[9];
    fVar31 = pfVar14[10];
    fVar37 = pfVar14[0xb];
    *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fVar26 * fVar3 * pfVar14[4];
    *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar26 * fVar28 * fVar25;
    *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar26 * fVar35 * fVar27;
    *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar38 * fVar29;
    *pfVar16 = *pfVar16 + fVar26 * fVar9 * fVar30;
    *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar26 * fVar10 * fVar32;
    *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar26 * fVar11 * fVar31;
    *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar36 * fVar37;
    *pfVar24 = fVar26 + *pfVar24;
    fVar3 = *(float *)(iVar2 + 0x30);
    fVar26 = *(float *)(iVar2 + 0x34);
    fVar28 = *(float *)(iVar2 + 0x38);
    fVar37 = fVar34 * *(float *)(iVar2 + 0x3c);
    fVar35 = *pfVar13;
    fVar25 = *(float *)(iVar15 + 0x34);
    fVar27 = *(float *)(iVar15 + 0x38);
    fVar29 = pfVar14[0xc];
    fVar30 = pfVar14[0xd];
    fVar9 = pfVar14[0xe];
    fVar10 = pfVar14[0xf];
    fVar38 = fVar34 * *(float *)(iVar15 + 0x3c);
    *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + fVar37 * fVar29;
    *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + fVar37 * fVar30;
    *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) + fVar37 * fVar9;
    *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) + fVar37 * fVar10;
    *pfVar17 = *pfVar17 - fVar38 * fVar29;
    *(float *)(iVar15 + 0x14) = *(float *)(iVar15 + 0x14) - fVar38 * fVar30;
    *(float *)(iVar15 + 0x18) = *(float *)(iVar15 + 0x18) - fVar38 * fVar9;
    *(float *)(iVar15 + 0x1c) = *(float *)(iVar15 + 0x1c) - fVar38 * fVar10;
    fVar29 = pfVar14[0x11];
    fVar30 = pfVar14[0x12];
    fVar9 = pfVar14[0x13];
    fVar10 = pfVar14[0x14];
    fVar11 = pfVar14[0x15];
    fVar32 = pfVar14[0x16];
    fVar31 = pfVar14[0x17];
    *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + fVar34 * fVar3 * pfVar14[0x10];
    *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar34 * fVar26 * fVar29;
    *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar34 * fVar28 * fVar30;
    *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar37 * fVar9;
    *pfVar16 = *pfVar16 + fVar34 * fVar35 * fVar10;
    *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar34 * fVar25 * fVar11;
    *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar34 * fVar27 * fVar32;
    *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar38 * fVar31;
    pfVar24[1] = fVar34 + pfVar24[1];
    fVar3 = *pfVar13;
    fVar34 = *(float *)(iVar15 + 0x34);
    fVar26 = *(float *)(iVar15 + 0x38);
    fVar28 = *(float *)(iVar15 + 0x3c);
    fVar35 = pfVar14[0x19];
    fVar25 = pfVar14[0x1a];
    fVar27 = pfVar14[0x1b];
    fVar29 = pfVar14[0x1c];
    fVar30 = pfVar14[0x1d];
    fVar9 = pfVar14[0x1e];
    fVar10 = pfVar14[0x1f];
    *(float *)(iVar2 + 0x20) =
         *(float *)(iVar2 + 0x20) + fVar33 * *(float *)(iVar2 + 0x30) * pfVar14[0x18];
    *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + fVar33 * *(float *)(iVar2 + 0x34) * fVar35
    ;
    *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + fVar33 * *(float *)(iVar2 + 0x38) * fVar25
    ;
    *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x2c) + fVar33 * *(float *)(iVar2 + 0x3c) * fVar27
    ;
    *pfVar16 = *pfVar16 + fVar33 * fVar3 * fVar29;
    *(float *)(iVar15 + 0x24) = *(float *)(iVar15 + 0x24) + fVar33 * fVar34 * fVar30;
    *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + fVar33 * fVar26 * fVar9;
    *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + fVar33 * fVar28 * fVar10;
    pcVar23 = pcVar23 + 0x18;
    pfVar14 = pfVar14 + 0x20;
    pfVar24[2] = fVar33 + pfVar24[2];
    pfVar24 = pfVar24 + 3;
    if (*pcVar23 == '\x01') goto switchD_00921b0f_caseD_1;
  }
  goto LAB_00921b00;
  while (cVar21 != '\x02') {
LAB_00923390:
    cVar21 = *pcVar23;
    if (cVar21 == '\0') {
      do {
        pfVar24 = param_1 + *(int *)(pcVar23 + 8) * 8 + 0xd;
        fVar33 = *pfVar24;
        fVar3 = pfVar24[1];
        fVar34 = *param_1;
        fVar26 = fVar33 * ABS(*(float *)(pcVar23 + 0x10)) + fVar3 * ABS(*(float *)(pcVar23 + 0x20));
        fVar28 = fVar33 * ABS(*(float *)(pcVar23 + 0x14)) + fVar3 * ABS(*(float *)(pcVar23 + 0x24));
        fVar35 = fVar33 * ABS(*(float *)(pcVar23 + 0x18)) + fVar3 * ABS(*(float *)(pcVar23 + 0x28));
        fVar33 = fVar33 * ABS(*(float *)(pcVar23 + 0x1c)) + fVar3 * ABS(*(float *)(pcVar23 + 0x2c));
        auVar7._4_4_ = -(uint)(fVar34 < fVar28);
        auVar7._0_4_ = -(uint)(fVar34 < fVar26);
        auVar7._8_4_ = -(uint)(fVar34 < fVar35);
        auVar7._12_4_ = -(uint)(fVar34 < fVar33);
        uVar22 = movmskps(fVar34,auVar7);
        if ((uVar22 & 7) == 0) {
          fVar3 = pfVar24[3];
          auVar8._4_4_ = -(uint)(fVar3 < fVar28);
          auVar8._0_4_ = -(uint)(fVar3 < fVar26);
          auVar8._8_4_ = -(uint)(fVar3 < fVar35);
          auVar8._12_4_ = -(uint)(fVar3 < fVar33);
          uVar22 = movmskps(fVar3,auVar8);
          if ((uVar22 & 7) != 0) {
            fVar33 = pfVar24[2];
            *(float *)(pcVar23 + 0x20) = fVar33 * *(float *)(pcVar23 + 0x20);
            *(float *)(pcVar23 + 0x24) = fVar33 * *(float *)(pcVar23 + 0x24);
            *(float *)(pcVar23 + 0x28) = fVar33 * *(float *)(pcVar23 + 0x28);
            *(float *)(pcVar23 + 0x2c) = fVar33 * *(float *)(pcVar23 + 0x2c);
            fVar33 = pfVar24[2];
            *(float *)(pcVar23 + 0x10) = fVar33 * *(float *)(pcVar23 + 0x10);
            *(float *)(pcVar23 + 0x14) = fVar33 * *(float *)(pcVar23 + 0x14);
            *(float *)(pcVar23 + 0x18) = fVar33 * *(float *)(pcVar23 + 0x18);
            *(float *)(pcVar23 + 0x1c) = fVar33 * *(float *)(pcVar23 + 0x1c);
            goto LAB_009234ae;
          }
          if (*(int *)(pcVar23 + 4) != 0) {
            *(int *)(pcVar23 + 4) = *(int *)(pcVar23 + 4) + -1;
          }
          pcVar23[0x20] = '\0';
          pcVar23[0x21] = '\0';
          pcVar23[0x22] = '\0';
          pcVar23[0x23] = '\0';
          pcVar23[0x24] = '\0';
          pcVar23[0x25] = '\0';
          pcVar23[0x26] = '\0';
          pcVar23[0x27] = '\0';
          pcVar23[0x28] = '\0';
          pcVar23[0x29] = '\0';
          pcVar23[0x2a] = '\0';
          pcVar23[0x2b] = '\0';
          pcVar23[0x2c] = '\0';
          pcVar23[0x2d] = '\0';
          pcVar23[0x2e] = '\0';
          pcVar23[0x2f] = '\0';
          pcVar23[0x10] = '\0';
          pcVar23[0x11] = '\0';
          pcVar23[0x12] = '\0';
          pcVar23[0x13] = '\0';
          pcVar23[0x14] = '\0';
          pcVar23[0x15] = '\0';
          pcVar23[0x16] = '\0';
          pcVar23[0x17] = '\0';
          pcVar23[0x18] = '\0';
          pcVar23[0x19] = '\0';
          pcVar23[0x1a] = '\0';
          pcVar23[0x1b] = '\0';
          pcVar23[0x1c] = '\0';
          pcVar23[0x1d] = '\0';
          pcVar23[0x1e] = '\0';
          pcVar23[0x1f] = '\0';
        }
        else {
LAB_009234ae:
          *(float *)(pcVar23 + 4) = pfVar24[4];
          *(float *)(pcVar23 + 0x50) = *(float *)(pcVar23 + 0x50) + *(float *)(pcVar23 + 0x20);
          *(float *)(pcVar23 + 0x54) = *(float *)(pcVar23 + 0x54) + *(float *)(pcVar23 + 0x24);
          *(float *)(pcVar23 + 0x58) = *(float *)(pcVar23 + 0x58) + *(float *)(pcVar23 + 0x28);
          *(float *)(pcVar23 + 0x5c) = *(float *)(pcVar23 + 0x5c) + *(float *)(pcVar23 + 0x2c);
          *(float *)(pcVar23 + 0x40) = *(float *)(pcVar23 + 0x40) + *(float *)(pcVar23 + 0x10);
          *(float *)(pcVar23 + 0x44) = *(float *)(pcVar23 + 0x44) + *(float *)(pcVar23 + 0x14);
          *(float *)(pcVar23 + 0x48) = *(float *)(pcVar23 + 0x48) + *(float *)(pcVar23 + 0x18);
          *(float *)(pcVar23 + 0x4c) = *(float *)(pcVar23 + 0x4c) + *(float *)(pcVar23 + 0x1c);
        }
        pcVar1 = pcVar23 + 0x80;
        pcVar23 = pcVar23 + 0x80;
      } while (*pcVar1 == '\0');
      goto LAB_00923390;
    }
    if (cVar21 == '\x01') {
      pcVar23 = pcVar23 + 0x80;
      goto LAB_00923390;
    }
  }
  goto switchD_0092324f_caseD_1;
  while (cVar21 != '\x02') {
LAB_00923223:
    cVar21 = *pcVar23;
    if (cVar21 == '\0') {
      do {
        pcVar23[0x50] = '\0';
        pcVar23[0x51] = '\0';
        pcVar23[0x52] = '\0';
        pcVar23[0x53] = '\0';
        pcVar23[0x54] = '\0';
        pcVar23[0x55] = '\0';
        pcVar23[0x56] = '\0';
        pcVar23[0x57] = '\0';
        pcVar23[0x58] = '\0';
        pcVar23[0x59] = '\0';
        pcVar23[0x5a] = '\0';
        pcVar23[0x5b] = '\0';
        pcVar23[0x5c] = '\0';
        pcVar23[0x5d] = '\0';
        pcVar23[0x5e] = '\0';
        pcVar23[0x5f] = '\0';
        pcVar23[0x40] = '\0';
        pcVar23[0x41] = '\0';
        pcVar23[0x42] = '\0';
        pcVar23[0x43] = '\0';
        pcVar23[0x44] = '\0';
        pcVar23[0x45] = '\0';
        pcVar23[0x46] = '\0';
        pcVar23[0x47] = '\0';
        pcVar23[0x48] = '\0';
        pcVar23[0x49] = '\0';
        pcVar23[0x4a] = '\0';
        pcVar23[0x4b] = '\0';
        pcVar23[0x4c] = '\0';
        pcVar23[0x4d] = '\0';
        pcVar23[0x4e] = '\0';
        pcVar23[0x4f] = '\0';
        iVar2 = *(int *)(pcVar23 + 8);
        fVar33 = param_1[iVar2 * 8 + 0xd];
        fVar3 = param_1[iVar2 * 8 + 0xe];
        fVar34 = *param_1;
        fVar26 = fVar33 * ABS(*(float *)(pcVar23 + 0x10)) + fVar3 * ABS(*(float *)(pcVar23 + 0x20));
        fVar28 = fVar33 * ABS(*(float *)(pcVar23 + 0x14)) + fVar3 * ABS(*(float *)(pcVar23 + 0x24));
        fVar35 = fVar33 * ABS(*(float *)(pcVar23 + 0x18)) + fVar3 * ABS(*(float *)(pcVar23 + 0x28));
        fVar33 = fVar33 * ABS(*(float *)(pcVar23 + 0x1c)) + fVar3 * ABS(*(float *)(pcVar23 + 0x2c));
        auVar5._4_4_ = -(uint)(fVar34 < fVar28);
        auVar5._0_4_ = -(uint)(fVar34 < fVar26);
        auVar5._8_4_ = -(uint)(fVar34 < fVar35);
        auVar5._12_4_ = -(uint)(fVar34 < fVar33);
        uVar22 = movmskps(fVar34,auVar5);
        if ((uVar22 & 7) == 0) {
          fVar3 = param_1[iVar2 * 8 + 0x10];
          auVar6._4_4_ = -(uint)(fVar3 < fVar28);
          auVar6._0_4_ = -(uint)(fVar3 < fVar26);
          auVar6._8_4_ = -(uint)(fVar3 < fVar35);
          auVar6._12_4_ = -(uint)(fVar3 < fVar33);
          uVar22 = movmskps(fVar3,auVar6);
          if ((uVar22 & 7) != 0) {
            fVar33 = param_1[iVar2 * 8 + 0xf];
            *(float *)(pcVar23 + 0x20) = fVar33 * *(float *)(pcVar23 + 0x20);
            *(float *)(pcVar23 + 0x24) = fVar33 * *(float *)(pcVar23 + 0x24);
            *(float *)(pcVar23 + 0x28) = fVar33 * *(float *)(pcVar23 + 0x28);
            *(float *)(pcVar23 + 0x2c) = fVar33 * *(float *)(pcVar23 + 0x2c);
            fVar33 = param_1[iVar2 * 8 + 0xf];
            *(float *)(pcVar23 + 0x10) = fVar33 * *(float *)(pcVar23 + 0x10);
            *(float *)(pcVar23 + 0x14) = fVar33 * *(float *)(pcVar23 + 0x14);
            *(float *)(pcVar23 + 0x18) = fVar33 * *(float *)(pcVar23 + 0x18);
            *(float *)(pcVar23 + 0x1c) = fVar33 * *(float *)(pcVar23 + 0x1c);
            goto LAB_00923353;
          }
          if (*(int *)(pcVar23 + 4) != 0) {
            *(int *)(pcVar23 + 4) = *(int *)(pcVar23 + 4) + -1;
          }
          pcVar23[0x20] = '\0';
          pcVar23[0x21] = '\0';
          pcVar23[0x22] = '\0';
          pcVar23[0x23] = '\0';
          pcVar23[0x24] = '\0';
          pcVar23[0x25] = '\0';
          pcVar23[0x26] = '\0';
          pcVar23[0x27] = '\0';
          pcVar23[0x28] = '\0';
          pcVar23[0x29] = '\0';
          pcVar23[0x2a] = '\0';
          pcVar23[0x2b] = '\0';
          pcVar23[0x2c] = '\0';
          pcVar23[0x2d] = '\0';
          pcVar23[0x2e] = '\0';
          pcVar23[0x2f] = '\0';
          pcVar23[0x10] = '\0';
          pcVar23[0x11] = '\0';
          pcVar23[0x12] = '\0';
          pcVar23[0x13] = '\0';
          pcVar23[0x14] = '\0';
          pcVar23[0x15] = '\0';
          pcVar23[0x16] = '\0';
          pcVar23[0x17] = '\0';
          pcVar23[0x18] = '\0';
          pcVar23[0x19] = '\0';
          pcVar23[0x1a] = '\0';
          pcVar23[0x1b] = '\0';
          pcVar23[0x1c] = '\0';
          pcVar23[0x1d] = '\0';
          pcVar23[0x1e] = '\0';
          pcVar23[0x1f] = '\0';
        }
        else {
LAB_00923353:
          *(float *)(pcVar23 + 4) = param_1[iVar2 * 8 + 0x11];
          *(float *)(pcVar23 + 0x50) = *(float *)(pcVar23 + 0x50) + *(float *)(pcVar23 + 0x20);
          *(float *)(pcVar23 + 0x54) = *(float *)(pcVar23 + 0x54) + *(float *)(pcVar23 + 0x24);
          *(float *)(pcVar23 + 0x58) = *(float *)(pcVar23 + 0x58) + *(float *)(pcVar23 + 0x28);
          *(float *)(pcVar23 + 0x5c) = *(float *)(pcVar23 + 0x5c) + *(float *)(pcVar23 + 0x2c);
          *(float *)(pcVar23 + 0x40) = *(float *)(pcVar23 + 0x40) + *(float *)(pcVar23 + 0x10);
          *(float *)(pcVar23 + 0x44) = *(float *)(pcVar23 + 0x44) + *(float *)(pcVar23 + 0x14);
          *(float *)(pcVar23 + 0x48) = *(float *)(pcVar23 + 0x48) + *(float *)(pcVar23 + 0x18);
          *(float *)(pcVar23 + 0x4c) = *(float *)(pcVar23 + 0x4c) + *(float *)(pcVar23 + 0x1c);
        }
        pcVar1 = pcVar23 + 0x80;
        pcVar23 = pcVar23 + 0x80;
      } while (*pcVar1 == '\0');
      goto LAB_00923223;
    }
    if (cVar21 == '\x01') {
      pcVar23 = pcVar23 + 0x80;
      goto LAB_00923223;
    }
  }
switchD_0092324f_caseD_1:
  iVar2 = *(int *)(pcVar19 + 0xc);
  iVar15 = *(int *)(pcVar19 + 0x10);
  pcVar23 = pcVar19 + 4;
  pcVar19 = pcVar19 + 0x18;
  pfVar24 = *(float **)pcVar23;
LAB_00923240:
  cVar21 = pcVar19[2];
  pfVar14 = pfVar24;
LAB_00923243:
  pfVar24 = pfVar14;
  pfVar14 = pfVar24;
  switch(cVar21) {
  case '\0':
    local_f0 = local_f0 + 1;
    pcVar23 = param_3;
    if ((int)param_1[0x3f] <= local_f0) goto switchD_009238d3_caseD_1;
    goto LAB_00921a96;
  case '\x01':
    goto switchD_0092324f_caseD_1;
  case '\x02':
    pcVar19 = pcVar19 + (byte)pcVar19[1];
    goto LAB_00923240;
  case '\x03':
    goto switchD_0092324f_caseD_3;
  case '\x04':
    goto switchD_0092324f_caseD_4;
  case '\x05':
    break;
  case '\x06':
    goto switchD_0092324f_caseD_6;
  default:
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return uVar12;
  }
  fVar33 = *(float *)(iVar2 + 0x20);
  fVar3 = *(float *)(iVar2 + 0x24);
  fVar34 = *(float *)(iVar2 + 0x28);
  fVar25 = *(float *)(iVar2 + 0x10) - *(float *)(iVar15 + 0x10);
  fVar27 = *(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14);
  fVar29 = *(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18);
  fVar26 = *(float *)(iVar15 + 0x20);
  fVar28 = *(float *)(iVar15 + 0x24);
  fVar35 = *(float *)(iVar15 + 0x28);
  pfVar24[3] = pfVar24[3] -
               (fVar34 * pfVar24[6] + fVar35 * pfVar24[10] + fVar29 * pfVar24[2] +
               fVar3 * pfVar24[5] + fVar28 * pfVar24[9] + fVar27 * pfVar24[1] +
               fVar33 * pfVar24[4] + fVar26 * pfVar24[8] + fVar25 * *pfVar24);
  pfVar24[0xf] = pfVar24[0xf] -
                 (fVar34 * pfVar24[0x12] + fVar35 * pfVar24[0x16] + fVar29 * pfVar24[0xe] +
                 fVar3 * pfVar24[0x11] + fVar28 * pfVar24[0x15] + fVar27 * pfVar24[0xd] +
                 fVar33 * pfVar24[0x10] + fVar26 * pfVar24[0x14] + fVar25 * pfVar24[0xc]);
  pcVar19 = pcVar19 + (byte)pcVar19[1];
  cVar21 = pcVar19[2];
  pfVar14 = pfVar24 + 0x18;
  if (cVar21 == '\x05') goto code_r0x009235af;
  goto LAB_00923243;
code_r0x009235af:
  fVar33 = *(float *)(iVar2 + 0x20);
  fVar3 = *(float *)(iVar2 + 0x24);
  fVar34 = *(float *)(iVar2 + 0x28);
  fVar25 = *(float *)(iVar2 + 0x10) - *(float *)(iVar15 + 0x10);
  fVar27 = *(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14);
  fVar29 = *(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18);
  fVar26 = *(float *)(iVar15 + 0x20);
  fVar28 = *(float *)(iVar15 + 0x24);
  fVar35 = *(float *)(iVar15 + 0x28);
  pfVar14 = pfVar24 + 0x30;
  pfVar24[0x1b] =
       pfVar24[0x1b] -
       (fVar34 * pfVar24[0x1e] + fVar35 * pfVar24[0x22] + fVar29 * pfVar24[0x1a] +
       fVar3 * pfVar24[0x1d] + fVar28 * pfVar24[0x21] + fVar27 * pfVar24[0x19] +
       fVar33 * pfVar24[0x1c] + fVar26 * pfVar24[0x20] + fVar25 * pfVar24[0x18]);
  pfVar24[0x27] =
       pfVar24[0x27] -
       (fVar34 * pfVar24[0x2a] + fVar35 * pfVar24[0x2e] + fVar29 * pfVar24[0x26] +
       fVar3 * pfVar24[0x29] + fVar28 * pfVar24[0x2d] + fVar27 * pfVar24[0x25] +
       fVar33 * pfVar24[0x28] + fVar26 * pfVar24[0x2c] + fVar25 * pfVar24[0x24]);
  pcVar19 = pcVar19 + (byte)pcVar19[1];
  pfVar24 = pfVar14;
  if (pcVar19[2] != '\x06') goto LAB_00923240;
switchD_0092324f_caseD_6:
  fVar33 = *(float *)(iVar2 + 0x20);
  fVar3 = *(float *)(iVar2 + 0x24);
  fVar34 = *(float *)(iVar2 + 0x28);
  fVar25 = *(float *)(iVar2 + 0x10) - *(float *)(iVar15 + 0x10);
  fVar27 = *(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14);
  fVar29 = *(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18);
  fVar26 = *(float *)(iVar15 + 0x20);
  fVar28 = *(float *)(iVar15 + 0x24);
  fVar35 = *(float *)(iVar15 + 0x28);
  pfVar14[3] = pfVar14[3] -
               (fVar34 * pfVar14[6] + fVar35 * pfVar14[10] + fVar29 * pfVar14[2] +
               fVar3 * pfVar14[5] + fVar28 * pfVar14[9] + fVar27 * pfVar14[1] +
               fVar33 * pfVar14[4] + fVar26 * pfVar14[8] + fVar25 * *pfVar14);
  pfVar14[0xf] = pfVar14[0xf] -
                 (fVar34 * pfVar14[0x12] + fVar35 * pfVar14[0x16] + fVar29 * pfVar14[0xe] +
                 fVar3 * pfVar14[0x11] + fVar28 * pfVar14[0x15] + fVar27 * pfVar14[0xd] +
                 fVar33 * pfVar14[0x10] + fVar26 * pfVar14[0x14] + fVar25 * pfVar14[0xc]);
  pfVar14[0x1f] =
       pfVar14[0x1f] -
       (*(float *)(iVar2 + 0x28) * pfVar14[0x1a] + *(float *)(iVar15 + 0x28) * pfVar14[0x1e] +
       *(float *)(iVar2 + 0x24) * pfVar14[0x19] + *(float *)(iVar15 + 0x24) * pfVar14[0x1d] +
       *(float *)(iVar2 + 0x20) * pfVar14[0x18] + *(float *)(iVar15 + 0x20) * pfVar14[0x1c]);
  pcVar19 = pcVar19 + (byte)pcVar19[1];
  pfVar24 = pfVar14 + 0x20;
  if (*pcVar19 == '\x01') goto switchD_0092324f_caseD_1;
  goto LAB_00923240;
switchD_0092324f_caseD_4:
  do {
    pfVar24 = pfVar14 + 8;
    pfVar14[7] = pfVar14[7] -
                 (*(float *)(iVar2 + 0x28) * pfVar14[2] + *(float *)(iVar15 + 0x28) * pfVar14[6] +
                 *(float *)(iVar2 + 0x24) * pfVar14[1] + *(float *)(iVar15 + 0x24) * pfVar14[5] +
                 *(float *)(iVar2 + 0x20) * *pfVar14 + *(float *)(iVar15 + 0x20) * pfVar14[4]);
    pcVar19 = pcVar19 + (byte)pcVar19[1];
    pfVar14 = pfVar24;
  } while (pcVar19[2] == '\x04');
  goto LAB_00923240;
switchD_0092324f_caseD_3:
  do {
    pfVar24 = pfVar14 + 0xc;
    pfVar14[3] = pfVar14[3] -
                 (*(float *)(iVar2 + 0x28) * pfVar14[6] + *(float *)(iVar15 + 0x28) * pfVar14[10] +
                  (*(float *)(iVar2 + 0x18) - *(float *)(iVar15 + 0x18)) * pfVar14[2] +
                 *(float *)(iVar2 + 0x24) * pfVar14[5] + *(float *)(iVar15 + 0x24) * pfVar14[9] +
                 (*(float *)(iVar2 + 0x14) - *(float *)(iVar15 + 0x14)) * pfVar14[1] +
                 *(float *)(iVar2 + 0x20) * pfVar14[4] + *(float *)(iVar15 + 0x20) * pfVar14[8] +
                 (*(float *)(iVar2 + 0x10) - *(float *)(iVar15 + 0x10)) * *pfVar14);
    pcVar19 = pcVar19 + (byte)pcVar19[1];
    pfVar14 = pfVar24;
  } while (pcVar19[2] == '\x03');
  goto LAB_00923240;
}



void FUN_00923b10(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                 undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  *param_6 = param_1;
  uVar1 = param_5 & 0x8000000f;
  param_6[1] = param_2;
  param_6[2] = param_3;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
  }
  iVar3 = param_5 - uVar1;
  iVar2 = (iVar3 * 10) / 0x3c;
  uVar1 = param_4 + 0xfU & 0xfffffff0;
  param_6[3] = uVar1;
  uVar4 = iVar2 + 0xf + uVar1 & 0xfffffff0;
  uVar1 = (iVar3 * 0x1e) / 0x3c + 0xf + uVar4 & 0xfffffff0;
  param_6[4] = uVar4;
  param_6[5] = uVar4;
  uVar4 = iVar2 + 0xf + uVar1 & 0xfffffff0;
  param_6[6] = uVar1;
  param_6[7] = uVar1;
  param_6[8] = uVar4;
  param_6[9] = uVar4;
  iVar2 = FUN_009828f6();
  uVar1 = (uVar4 - iVar2) + 0xf & 0xfffffff0;
  param_6[0xe] = param_4 + iVar3;
  param_6[0x12] = param_6[5];
  param_6[10] = uVar1;
  param_6[0xd] = uVar1;
  param_6[0xf] = uVar1;
  param_6[0x10] = uVar1;
  param_6[0x11] = param_6[3];
  param_6[0x13] = param_6[7];
  param_6[0xb] = param_6[9];
  param_6[0xc] = param_6[9];
  return;
}



void FUN_00923c00(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar1 < *(undefined4 **)(param_1 + 0x4c)) {
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (puVar1 < *(undefined4 **)(param_1 + 0x4c));
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x34);
  }
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x2c)) {
    FUN_009202a0(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x30),
                 *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x3c)) {
    FUN_009202a0(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
  return;
}



void FUN_00923c80(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  piVar1 = param_2 + param_3;
  for (; param_2 < piVar1; param_2 = param_2 + 1) {
    piVar3 = *(int **)(*param_2 + 0x50);
    iVar7 = piVar3[2];
    puVar2 = (undefined4 *)(iVar7 + 0x10 + param_4);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    iVar7 = iVar7 + param_4;
    *(undefined4 *)(iVar7 + 0x40) = *puVar2;
    *(undefined4 *)(iVar7 + 0x44) = uVar4;
    *(undefined4 *)(iVar7 + 0x48) = uVar5;
    *(undefined4 *)(iVar7 + 0x4c) = uVar6;
    *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(iVar7 + 0x20);
    *(undefined4 *)(iVar7 + 0x54) = *(undefined4 *)(iVar7 + 0x24);
    *(undefined4 *)(iVar7 + 0x58) = *(undefined4 *)(iVar7 + 0x28);
    *(undefined4 *)(iVar7 + 0x5c) = *(undefined4 *)(iVar7 + 0x2c);
    (**(code **)(*piVar3 + 0x18))(param_1,0x3f800000,iVar7);
  }
  return;
}



void FUN_00923ce0(undefined4 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)param_1[0x11];
  piVar1 = param_2 + param_3;
  if (puVar4 == (undefined1 *)param_1[3]) {
    *puVar4 = 1;
    *(undefined4 *)(puVar4 + 0x30) = 0;
    *(undefined4 *)(puVar4 + 0x34) = 0;
    *(undefined4 *)(puVar4 + 0x38) = 0;
    *(undefined4 *)(puVar4 + 0x3c) = 0;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    *(undefined4 *)(puVar4 + 0x14) = 0;
    *(undefined4 *)(puVar4 + 0x18) = 0;
    *(undefined4 *)(puVar4 + 0x1c) = 0;
    *(undefined4 *)(puVar4 + 0x20) = 0;
    *(undefined4 *)(puVar4 + 0x24) = 0;
    *(undefined4 *)(puVar4 + 0x28) = 0;
    *(undefined4 *)(puVar4 + 0x2c) = 0;
    *(undefined4 *)(puVar4 + 0x40) = 0;
    *(undefined4 *)(puVar4 + 0x44) = 0;
    *(undefined4 *)(puVar4 + 0x48) = 0;
    *(undefined4 *)(puVar4 + 0x4c) = 0;
    *(undefined4 *)(puVar4 + 0x50) = 0;
    *(undefined4 *)(puVar4 + 0x54) = 0;
    *(undefined4 *)(puVar4 + 0x58) = 0;
    *(undefined4 *)(puVar4 + 0x5c) = 0;
    *(undefined4 *)(puVar4 + 0x60) = 0;
    *(undefined4 *)(puVar4 + 100) = 0;
    *(undefined4 *)(puVar4 + 0x68) = 0;
    *(undefined4 *)(puVar4 + 0x6c) = 0;
    *(undefined4 *)(puVar4 + 0x70) = 0;
    *(undefined4 *)(puVar4 + 0x74) = 0;
    *(undefined4 *)(puVar4 + 0x78) = 0;
    *(undefined4 *)(puVar4 + 0x7c) = 0;
    puVar4 = puVar4 + 0x80;
    param_1[0x11] = puVar4;
  }
  for (; param_2 < piVar1; param_2 = param_2 + 1) {
    piVar2 = *(int **)(*param_2 + 0x50);
    uVar3 = *param_1;
    if (piVar2[2] != (int)puVar4 - param_1[3]) {
      piVar2[2] = (int)puVar4 - param_1[3];
    }
    puVar4 = (undefined1 *)(**(code **)(*piVar2 + 0x14))(uVar3,puVar4);
    param_1[0x11] = puVar4;
  }
  *puVar4 = 2;
  return;
}



void FUN_00923d70(undefined1 *param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_2 + 0x44);
  piVar1 = param_3 + param_4;
  if (uVar4 == *(uint *)(param_2 + 0xc)) {
    uVar4 = uVar4 + 0x80;
  }
  iVar2 = *(int *)(param_2 + 0x10);
  while( true ) {
    if (piVar1 <= param_3) {
      *param_1 = 1;
      return;
    }
    iVar3 = (**(code **)(**(int **)(*param_3 + 0x50) + 0x1c))();
    uVar4 = uVar4 + iVar3;
    if (iVar2 - 0x10U < uVar4) break;
    param_3 = param_3 + 1;
  }
  *param_1 = 0;
  return;
}



void FUN_00923dd0(int param_1,int *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *unaff_retaddr;
  undefined4 local_18;
  int local_14;
  int iStack_4;
  
  local_18 = *(undefined4 *)(param_1 + 0x48);
  piVar1 = param_2 + param_3;
  iVar6 = *(int *)(param_1 + 8);
  for (; param_2 < piVar1; param_2 = param_2 + 1) {
    cVar5 = *(char *)(*param_2 + 0x18);
    iVar7 = *(int *)(*param_2 + 0x24);
    iVar8 = *(int *)(*(int *)(iVar7 + 4) + 0x50);
    iVar9 = *(int *)(*(int *)(iVar7 + 8) + 0x50);
    *(int *)(iVar6 + 0x14) = *(int *)(iVar8 + 8) + *(int *)(param_1 + 0xc);
    iVar10 = *(int *)(iVar9 + 8);
    iVar11 = *(int *)(param_1 + 0xc);
    *(int *)(iVar6 + 0x1c) = iVar8 + 0x10;
    *(int *)(iVar6 + 0x20) = iVar9 + 0x10;
    *(int *)(iVar6 + 0x18) = iVar10 + iVar11;
    *(int *)(iVar6 + 0x24) = *param_2;
    *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(*(int *)(*param_2 + 0x24) + 0x18);
    if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_4,0xc);
    }
    piVar2 = (int *)(*param_4 + param_4[1] * 0xc);
    param_4[1] = param_4[1] + 1;
    *piVar2 = *param_2;
    piVar3 = (int *)((uint)(cVar5 == '\x04') * 0x10 + 0x2c + param_1);
    piVar2[1] = *piVar3;
    fVar4 = *(float *)(*(int *)(iVar7 + 4) + 0x34);
    fVar12 = *(float *)(*(int *)(iVar7 + 8) + 0x34);
    if (fVar12 <= fVar4) {
      fVar4 = fVar12;
    }
    piVar2[2] = (int)fVar4;
    local_14 = *piVar3;
    (**(code **)(**(int **)(*param_2 + 0xc) + 0x1c))(iVar6,&local_18);
    *(undefined4 *)(param_1 + 0x48) = unaff_ESI;
    *unaff_retaddr = unaff_EBX;
    (**(code **)(**(int **)(*param_2 + 0xc) + 0x20))(&local_18);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iStack_4 * 4;
  }
  **(undefined4 **)(param_1 + 0x2c) = 0x400;
  **(undefined4 **)(param_1 + 0x3c) = 0x400;
  return;
}



void FUN_00923f40(undefined1 *param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int local_18 [2];
  undefined1 local_10 [4];
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_18[0] = *(int *)(param_2 + 0x2c);
  local_18[1] = *(int *)(param_2 + 0x3c);
  uVar2 = *(uint *)(param_2 + 0x4c);
  piVar1 = param_3 + param_4;
  uVar3 = *(uint *)(param_2 + 0x48);
  for (; param_3 < piVar1; param_3 = param_3 + 1) {
    (**(code **)(**(int **)(*param_3 + 0xc) + 0x20))(local_10);
    uVar3 = uVar3 + iStack_c;
    uVar2 = uVar2 + iStack_4 * 4;
    bVar4 = 3 < *(byte *)(*param_3 + 0x18);
    local_18[bVar4] = local_18[bVar4] + iStack_8;
  }
  if ((((uVar3 <= *(uint *)(param_2 + 0x18)) && (uVar2 <= *(uint *)(param_2 + 0x20))) &&
      (local_18[0] + 4U <= *(uint *)(param_2 + 0x28))) &&
     (local_18[1] + 4U <= *(uint *)(param_2 + 0x38))) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}



void FUN_00924000(undefined4 param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined4 *puVar18;
  int unaff_FS_OFFSET;
  int local_450;
  undefined1 *local_448;
  undefined1 *local_438;
  undefined1 *local_434;
  undefined1 *puStack_430;
  undefined4 *puStack_42c;
  undefined1 *local_428;
  undefined1 *local_424;
  undefined1 *puStack_420;
  uint uStack_41c;
  uint uStack_418;
  undefined1 auStack_414 [1040];
  
  iVar11 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar11 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar8 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar8 = "Ltsolver";
    puVar8[3] = "memory";
    uVar6 = rdtsc();
    puVar8[1] = (int)uVar6;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar8 + 4;
  }
  iVar2 = *(int *)(iVar11 + _tls_index * 4);
  piVar14 = *(int **)(iVar2 + 0x19c);
  iVar11 = *(int *)(param_4 + 0x18) * 4 + 8;
  local_434 = (undefined1 *)0x0;
  local_428 = (undefined1 *)0x0;
  piVar13 = piVar14;
  if (piVar14 == (int *)0x0) {
    piVar13 = DAT_00ba7d9c;
  }
  iVar9 = piVar13[0xb];
  iVar3 = piVar13[8];
  piVar13 = DAT_00ba7d9c;
  if (piVar14 != (int *)0x0) {
    piVar13 = piVar14;
  }
  local_438 = (undefined1 *)piVar13[8];
  uVar7 = iVar9 - iVar3 & 0xfffffff0;
  if ((undefined1 *)piVar13[0xb] < local_438 + uVar7) {
    local_438 = (undefined1 *)(**(code **)(*piVar13 + 0xc))(uVar7);
  }
  else {
    piVar13[8] = (int)(local_438 + uVar7);
  }
  puVar17 = local_438 + ((iVar9 - iVar3) - 0x10);
  puVar10 = local_438;
  do {
    puVar1 = puVar10 + *(int *)(param_4 + 0x14) + 0x90;
    local_448 = puVar1 + *(int *)(param_4 + 0xc);
    local_424 = local_448;
    while( true ) {
      iVar9 = *(int *)(param_4 + 0x10);
      puVar8 = (undefined4 *)(local_424 + iVar11);
      puVar16 = (undefined1 *)((int)puVar8 + iVar9 + 4);
      if (puVar16 <= puVar17) {
        iVar11 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        if (*(uint *)(iVar11 + 0x1a4) < *(uint *)(iVar11 + 0x1a8)) {
          puVar18 = *(undefined4 **)(iVar2 + 0x1a4);
          *puVar18 = "Stmake accum";
          uVar6 = rdtsc();
          puVar18[1] = (int)uVar6;
          *(undefined4 **)(iVar2 + 0x1a4) = puVar18 + 3;
        }
        *puVar10 = 1;
        *(undefined4 *)(puVar10 + 0x30) = 0;
        *(undefined4 *)(puVar10 + 0x34) = 0;
        *(undefined4 *)(puVar10 + 0x38) = 0;
        *(undefined4 *)(puVar10 + 0x3c) = 0;
        *(undefined4 *)(puVar10 + 0x10) = 0;
        *(undefined4 *)(puVar10 + 0x14) = 0;
        *(undefined4 *)(puVar10 + 0x18) = 0;
        *(undefined4 *)(puVar10 + 0x1c) = 0;
        *(undefined4 *)(puVar10 + 0x20) = 0;
        *(undefined4 *)(puVar10 + 0x24) = 0;
        *(undefined4 *)(puVar10 + 0x28) = 0;
        *(undefined4 *)(puVar10 + 0x2c) = 0;
        *(undefined4 *)(puVar10 + 0x40) = 0;
        *(undefined4 *)(puVar10 + 0x44) = 0;
        *(undefined4 *)(puVar10 + 0x48) = 0;
        *(undefined4 *)(puVar10 + 0x4c) = 0;
        *(undefined4 *)(puVar10 + 0x50) = 0;
        *(undefined4 *)(puVar10 + 0x54) = 0;
        *(undefined4 *)(puVar10 + 0x58) = 0;
        *(undefined4 *)(puVar10 + 0x5c) = 0;
        *(undefined4 *)(puVar10 + 0x60) = 0;
        *(undefined4 *)(puVar10 + 100) = 0;
        *(undefined4 *)(puVar10 + 0x68) = 0;
        *(undefined4 *)(puVar10 + 0x6c) = 0;
        piVar14 = param_5 + param_6;
        *(undefined4 *)(puVar10 + 0x70) = 0;
        *(undefined4 *)(puVar10 + 0x74) = 0;
        *(undefined4 *)(puVar10 + 0x78) = 0;
        *(undefined4 *)(puVar10 + 0x7c) = 0;
        puVar17 = puVar10 + 0x80;
        for (piVar13 = param_5; piVar13 < piVar14; piVar13 = piVar13 + 1) {
          piVar4 = *(int **)(*piVar13 + 0x50);
          if (piVar4[2] != (int)puVar17 - (int)puVar10) {
            piVar4[2] = (int)puVar17 - (int)puVar10;
          }
          puVar17 = (undefined1 *)(**(code **)(*piVar4 + 0x14))(param_1,puVar17);
        }
        *puVar17 = 2;
        iVar11 = 0;
        if (0 < *(int *)(param_4 + 0x18)) {
          do {
            *(undefined4 *)(local_424 + iVar11 * 4) = 0;
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(param_4 + 0x18));
        }
        iVar11 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        if (*(uint *)(iVar11 + 0x1a4) < *(uint *)(iVar11 + 0x1a8)) {
          puVar18 = *(undefined4 **)(iVar2 + 0x1a4);
          *puVar18 = "Stmake jac";
          uVar6 = rdtsc();
          puVar18[1] = (int)uVar6;
          *(undefined4 **)(iVar2 + 0x1a4) = puVar18 + 3;
        }
        puStack_420 = auStack_414;
        uVar7 = 0x80000100;
        uStack_41c = 0;
        uStack_418 = 0x80000100;
        puStack_430 = puVar1;
        puStack_42c = puVar8;
        for (piVar13 = param_5; piVar13 < piVar14; piVar13 = piVar13 + 1) {
          puVar18 = *(undefined4 **)(*piVar13 + 0x68);
          puVar15 = puVar18 + *(int *)(*piVar13 + 0x6c) * 7;
          for (; puVar18 < puVar15; puVar18 = puVar18 + 7) {
            if (*(byte *)(puVar18 + 4) < 3) {
              iVar11 = *(int *)(puVar18[2] + 0x50);
              iVar9 = *(int *)(puVar18[1] + 0x50);
              *(undefined1 **)(param_3 + 0x14) = puVar10 + *(int *)(iVar9 + 8);
              iVar3 = *(int *)(iVar11 + 8);
              *(int *)(param_3 + 0x1c) = iVar9 + 0x10;
              *(int *)(param_3 + 0x20) = iVar11 + 0x10;
              *(undefined1 **)(param_3 + 0x18) = puVar10 + iVar3;
              *(undefined4 *)(param_3 + 0x24) = *puVar18;
              *(undefined4 *)(param_3 + 0x28) = puVar18[6];
              if (local_448 <= puStack_430) {
                local_448 = (undefined1 *)0xffffffff;
                puStack_430 = local_428;
              }
              (**(code **)(*(int *)puVar18[3] + 0x1c))(param_3,&puStack_430);
            }
            else {
              if (uStack_41c == (uVar7 & 0x3fffffff)) {
                FUN_008a6ee0(&puStack_420,4);
              }
              *(undefined4 **)(puStack_420 + uStack_41c * 4) = puVar18;
              uStack_41c = uStack_41c + 1;
            }
            uVar7 = uStack_418;
          }
        }
        local_450 = 0;
        if (0 < (int)uStack_41c) {
          do {
            puVar18 = *(undefined4 **)(puStack_420 + local_450 * 4);
            iVar11 = *(int *)(puVar18[1] + 0x50);
            iVar9 = *(int *)(puVar18[2] + 0x50);
            *(undefined1 **)(param_3 + 0x14) = puVar10 + *(int *)(iVar11 + 8);
            iVar3 = *(int *)(iVar9 + 8);
            *(int *)(param_3 + 0x1c) = iVar11 + 0x10;
            *(int *)(param_3 + 0x20) = iVar9 + 0x10;
            *(undefined1 **)(param_3 + 0x18) = puVar10 + iVar3;
            *(undefined4 *)(param_3 + 0x24) = *puVar18;
            *(undefined4 *)(param_3 + 0x28) = puVar18[6];
            if (local_448 <= puStack_430) {
              puStack_430 = local_428;
              local_448 = (undefined1 *)0xffffffff;
            }
            (**(code **)(*(int *)puVar18[3] + 0x1c))(param_3,&puStack_430);
            local_450 = local_450 + 1;
          } while (local_450 < (int)uStack_41c);
        }
        *puStack_42c = 0x400;
        if (-1 < (int)uStack_418) {
          FUN_008a75d0(puStack_420,uStack_418 << 2,0x14);
        }
        iVar3 = _tls_index;
        iVar11 = *(int *)(unaff_FS_OFFSET + 0x2c);
        iVar9 = *(int *)(iVar11 + _tls_index * 4);
        if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
          puVar18 = *(undefined4 **)(iVar2 + 0x1a4);
          *puVar18 = "Stsolve";
          uVar6 = rdtsc();
          puVar18[1] = (int)uVar6;
          *(undefined4 **)(iVar2 + 0x1a4) = puVar18 + 3;
        }
        iVar12 = FUN_00921a40(param_2,puVar8,puVar10,local_424);
        iVar9 = *(int *)(iVar11 + iVar3 * 4);
        if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
          puVar8 = *(undefined4 **)(iVar9 + 0x1a4);
          *puVar8 = "MiNumJacobians";
          puVar8[1] = (float)*(int *)(param_4 + 0x18);
          *(undefined4 **)(iVar9 + 0x1a4) = puVar8 + 2;
        }
        iVar9 = *(int *)(iVar11 + iVar3 * 4);
        if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
          puVar8 = *(undefined4 **)(iVar2 + 0x1a4);
          *puVar8 = "Stintegrate";
          uVar6 = rdtsc();
          puVar8[1] = (int)uVar6;
          *(undefined4 **)(iVar2 + 0x1a4) = puVar8 + 3;
        }
        if (iVar12 == 1) {
          uVar5 = *(undefined4 *)(param_2 + 0x100);
          for (; param_5 < piVar14; param_5 = param_5 + 1) {
            (**(code **)(**(int **)(*param_5 + 0x50) + 0x18))
                      (param_1,uVar5,puVar10 + (*(int **)(*param_5 + 0x50))[2]);
          }
        }
        iVar11 = *(int *)(iVar11 + _tls_index * 4);
        if (*(uint *)(iVar11 + 0x1a4) < *(uint *)(iVar11 + 0x1a8)) {
          puVar8 = *(undefined4 **)(iVar2 + 0x1a4);
          *puVar8 = &DAT_00a6a630;
          uVar6 = rdtsc();
          puVar8[1] = (int)uVar6;
          *(undefined4 **)(iVar2 + 0x1a4) = puVar8 + 3;
        }
        if (local_434 != (undefined1 *)0x0) {
          piVar14 = *(int **)(iVar2 + 0x19c);
          if (*(int **)(iVar2 + 0x19c) == (int *)0x0) {
            piVar14 = DAT_00ba7d9c;
          }
          piVar14[8] = (int)local_434;
          if (local_434 == (undefined1 *)piVar14[10]) {
            (**(code **)(*piVar14 + 0x10))(local_434);
          }
        }
        piVar14 = *(int **)(iVar2 + 0x19c);
        if (*(int **)(iVar2 + 0x19c) == (int *)0x0) {
          piVar14 = DAT_00ba7d9c;
        }
        piVar14[8] = (int)local_438;
        if (local_438 == (undefined1 *)piVar14[10]) {
          (**(code **)(*piVar14 + 0x10))(local_438);
        }
        return;
      }
      if (puVar17 <= puVar1) break;
      if (local_448 < puVar17) {
        iVar9 = iVar9 + 4 + iVar11;
        piVar14 = *(int **)(iVar2 + 0x19c);
        if (*(int **)(iVar2 + 0x19c) == (int *)0x0) {
          piVar14 = DAT_00ba7d9c;
        }
        local_434 = (undefined1 *)piVar14[8];
        uVar7 = iVar9 + 0x10U & 0xfffffff0;
        if ((undefined1 *)piVar14[0xb] < local_434 + uVar7) {
          local_424 = (undefined1 *)(**(code **)(*piVar14 + 0xc))(uVar7);
          puVar17 = local_424 + iVar9;
          local_434 = local_424;
        }
        else {
          piVar14[8] = (int)(local_434 + uVar7);
          puVar17 = local_434 + iVar9;
          local_424 = local_434;
        }
      }
      else {
        puVar16 = puVar1 + *(int *)(param_4 + 0xc) + (*(int *)(param_4 + 8) * 2 - (int)puVar17);
        piVar14 = *(int **)(iVar2 + 0x19c);
        if (*(int **)(iVar2 + 0x19c) == (int *)0x0) {
          piVar14 = DAT_00ba7d9c;
        }
        local_434 = (undefined1 *)piVar14[8];
        uVar7 = (uint)(puVar16 + iVar11 + iVar9 + 4 + 0x10) & 0xfffffff0;
        if ((undefined1 *)piVar14[0xb] < local_434 + uVar7) {
          local_434 = (undefined1 *)(**(code **)(*piVar14 + 0xc))(uVar7);
        }
        else {
          piVar14[8] = (int)(local_434 + uVar7);
        }
        local_448 = puVar17 + -*(int *)(param_4 + 8);
        puVar17 = local_434 + (int)(puVar16 + iVar11 + iVar9 + 4);
        local_424 = local_434 + (int)puVar16;
        local_428 = local_434;
      }
    }
    iVar9 = (int)puVar16 - (int)local_438;
    piVar14 = *(int **)(iVar2 + 0x19c);
    if (*(int **)(iVar2 + 0x19c) == (int *)0x0) {
      piVar14 = DAT_00ba7d9c;
    }
    puVar10 = (undefined1 *)piVar14[8];
    uVar7 = iVar9 + 0x10U & 0xfffffff0;
    if ((undefined1 *)piVar14[0xb] < puVar10 + uVar7) {
      puVar10 = (undefined1 *)(**(code **)(*piVar14 + 0xc))(uVar7);
      puVar17 = puVar10 + iVar9;
      local_434 = puVar10;
    }
    else {
      piVar14[8] = (int)(puVar10 + uVar7);
      puVar17 = puVar10 + iVar9;
      local_434 = puVar10;
    }
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x00924861) */
/* WARNING: Removing unreachable block (ram,0x00924878) */

undefined4 FUN_009246e0(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  int local_104;
  char local_100 [256];
  
  local_104 = 0;
  do {
    uVar2 = (&DAT_00a9de44)[local_104];
    cVar1 = *PTR_s_CLIENT_Ph_Bethesda_Oblivion_00b2e2d0;
    pcVar6 = PTR_s_CLIENT_Ph_Bethesda_Oblivion_00b2e2d0;
    while (cVar1 != '.') {
      if (cVar1 == '\0') goto LAB_009248e8;
      pcVar3 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar3;
    }
    pcVar3 = _strstr(pcVar6,"Prime");
    if ((pcVar3 != (char *)0x0) && (param_1 != 0)) {
      local_100[0] = '\0';
      pcVar3 = "The following component is not enabled in Havok Prime:\n\n\t\t";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      pcVar3 = local_100;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 + -0xa9df54 < (char *)(0xfe - ((int)pcVar3 - (int)(local_100 + 1)))) {
        pcVar4 = "The following component is not enabled in Havok Prime:\n\n\t\t";
        do {
          pcVar3 = pcVar4;
          pcVar4 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        pcVar3 = pcVar3 + -0xa9df54;
      }
      else {
        pcVar3 = local_100;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        pcVar3 = (char *)(0xfe - ((int)pcVar3 - (int)(local_100 + 1)));
      }
      _strncat(local_100,"The following component is not enabled in Havok Prime:\n\n\t\t",
               (size_t)pcVar3);
      pcVar3 = "The following component is not enabled in Havok Prime:\n\n\t\t";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      pcVar3 = local_100;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 + -0xa9df54 < (char *)(0xfe - ((int)pcVar3 - (int)(local_100 + 1)))) {
        pcVar4 = "The following component is not enabled in Havok Prime:\n\n\t\t";
        do {
          pcVar3 = pcVar4;
          pcVar4 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        pcVar3 = pcVar3 + -0xa9df54;
      }
      else {
        pcVar3 = local_100;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        pcVar3 = (char *)(0xfe - ((int)pcVar3 - (int)(local_100 + 1)));
      }
      _strncat(local_100,(&PTR_s_Constraint_Solver_00b30124)[param_1],(size_t)pcVar3);
      FUN_008b16a0(local_100);
    }
    cVar1 = pcVar6[1];
    while (cVar1 != '.') {
      if (cVar1 == '\0') goto LAB_009248e8;
      cVar1 = pcVar6[2];
      pcVar6 = pcVar6 + 1;
    }
    pcVar6 = pcVar6 + 2;
    cVar1 = *pcVar6;
    uVar5 = 0;
    while (cVar1 != '\0') {
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
      uVar5 = uVar5 * 0x17 + (int)cVar1;
    }
    if (((uVar5 ^ uVar2) & 0x7fffffff) == 0x5b217b92) {
      if ((param_1 != 0) && (local_104 == 2)) {
        FUN_008b16a0(
                    "Product mismatch: Prime keyvalue detected in non prime keycode.\nPlease check your keycode or contact your Havok Account Manager."
                    );
        return 0;
      }
      return 1;
    }
    local_104 = local_104 + 1;
  } while (local_104 < 3);
LAB_009248e8:
  FUN_008b16a0(
              "Havok Physics evaluation key has expired or is invalid.\nPlease contact Havok.com for an extension.\nNo simulation possible."
              );
  return 0;
}



void FUN_00924930(void)

{
  undefined4 *in_ECX;
  
  FUN_008b2390();
  *in_ECX = &PTR_FUN_00a9dfa0;
  *(undefined1 *)(in_ECX + 0x24) = 1;
  *(undefined1 *)((int)in_ECX + 0x91) = 1;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  return;
}



void FUN_00924960(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if ((param_1 != 0) && (*(short *)(param_1 + 4) != 0)) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x98);
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *(int *)(in_ECX + 0x98) = param_1;
  return;
}



void FUN_009249d0(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[0x26];
  *in_ECX = &PTR_FUN_00a9dfa0;
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



void FUN_00924a60(int param_1,undefined4 *param_2)

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
  float *local_f4;
  float local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  uint uStack_84;
  float local_80 [7];
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float local_50;
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
  FUN_008f1cc0(local_80,local_40,param_1,param_2);
  local_c0 = *(undefined4 *)(in_ECX + 0xc);
  local_d0 = local_80[4];
  uStack_cc = local_80[5];
  uStack_c8 = local_80[6];
  uStack_c4 = uStack_64;
  local_bc = *(undefined4 *)(in_ECX + 0x10);
  iVar19 = *(int *)(param_1 + 0x28);
  local_d8 = fStack_18 * fStack_58 + fStack_1c * fStack_5c + local_20 * local_60;
  local_d4 = (local_20 * local_40[5] - fStack_1c * local_40[4]) * fStack_58 +
             (fStack_18 * local_40[4] - local_20 * local_40[6]) * fStack_5c +
             (fStack_1c * local_40[6] - fStack_18 * local_40[5]) * local_60;
  fVar21 = (float10)FUN_008ecbb0(-local_d8,-local_d4);
  local_b8 = (float)(fVar21 + (float10)3.1415927);
  fVar21 = (fVar21 + (float10)3.1415927) - (float10)*(float *)(iVar19 + 0x38);
  if ((float10)-3.1415927 <= fVar21) {
    if (fVar21 <= (float10)3.1415927) goto LAB_00924cf2;
    fVar3 = *(float *)(iVar19 + 0x3c) - 1.0;
  }
  else {
    fVar3 = *(float *)(iVar19 + 0x3c) + 1.0;
  }
  *(float *)(iVar19 + 0x3c) = fVar3;
LAB_00924cf2:
  *(float *)(iVar19 + 0x38) = local_b8;
  local_b8 = *(float *)(iVar19 + 0x3c) * 6.2831855 + local_b8;
  if ((*(int *)(in_ECX + 0x98) == 0) || (*(char *)(in_ECX + 0x90) == '\0')) {
    if (*(float *)(in_ECX + 0x14) != 0.0) {
      local_ec = *(undefined4 *)(in_ECX + 0x14);
      local_f4 = local_80 + 4;
      local_f0 = (float)(iVar19 + 0x28);
      local_e8 = 1;
      FUN_008f1460(&local_f4,param_1,param_2);
    }
  }
  else {
    local_e4 = 0;
    local_e0 = 0;
    FUN_008f1070(local_80 + 4,param_1,*param_2,&local_f4);
    local_e4 = *(undefined4 *)(iVar19 + 0x28);
    local_e0 = *(undefined4 *)(iVar19 + 0x2c);
    local_ec = *(undefined4 *)(in_ECX + 0x94);
    local_dc = iVar19 + 0x40;
    local_e8 = param_1;
    local_f0 = local_b8;
    (**(code **)(**(int **)(in_ECX + 0x98) + 8))(&local_f4,&local_b0);
    FUN_008f0fb0(&local_b0,param_1,param_2);
  }
  if (*(char *)(in_ECX + 0x91) == '\0') {
    FUN_008f1b60(&local_d0,param_1,param_2);
  }
  return;
}



void FUN_00924e40(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[0x34];
  *in_ECX = &PTR_FUN_00a9dfe8;
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x35];
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x36];
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00924ef0(byte param_1)

{
  FUN_00924e40();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00924f20(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_009113d0(1);
    *param_1 = &PTR_FUN_00a9dfe8;
  }
  return;
}



void FUN_00924f40(int param_1,undefined4 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
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
  int iVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined4 uStack_110;
  undefined1 local_10c [4];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  float local_f0 [7];
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0 [7];
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [8];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 auStack_20 [28];
  
  if ((DAT_00ba8508 == '\0') && (DAT_00ba8508 = FUN_009246e0(1), DAT_00ba8508 == '\0')) {
    return;
  }
  FUN_008f0f70(param_1,param_2,*(undefined4 *)(param_1 + 0x28),8);
  pfVar2 = *(float **)(param_1 + 0x1c);
  fVar20 = *pfVar2;
  fVar21 = pfVar2[1];
  fVar4 = pfVar2[2];
  fVar5 = pfVar2[3];
  fVar6 = pfVar2[4];
  fVar7 = pfVar2[5];
  fVar8 = pfVar2[6];
  fVar9 = pfVar2[7];
  fVar10 = pfVar2[8];
  fVar11 = pfVar2[9];
  fVar12 = pfVar2[10];
  fVar13 = pfVar2[0xb];
  pfVar17 = (float *)(in_ECX + 0x10);
  iVar18 = (int)local_c0 - (int)pfVar17;
  iVar19 = 3;
  do {
    fVar14 = *pfVar17;
    fVar15 = pfVar17[1];
    fVar16 = pfVar17[2];
    pfVar1 = (float *)(iVar18 + (int)pfVar17);
    *pfVar1 = fVar20 * fVar14 + fVar6 * fVar15 + fVar10 * fVar16;
    pfVar1[1] = fVar21 * fVar14 + fVar7 * fVar15 + fVar11 * fVar16;
    pfVar1[2] = fVar4 * fVar14 + fVar8 * fVar15 + fVar12 * fVar16;
    pfVar1[3] = fVar5 * fVar14 + fVar9 * fVar15 + fVar13 * fVar16;
    pfVar17 = pfVar17 + 4;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  pfVar1 = *(float **)(param_1 + 0x20);
  local_c0[0] = local_c0[0] + pfVar2[0xc];
  local_c0[1] = local_c0[1] + pfVar2[0xd];
  local_c0[2] = local_c0[2] + pfVar2[0xe];
  local_c0[3] = local_c0[3] + pfVar2[0xf];
  fVar20 = *pfVar1;
  fVar21 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  fVar6 = pfVar1[4];
  fVar7 = pfVar1[5];
  fVar8 = pfVar1[6];
  fVar9 = pfVar1[7];
  fVar10 = pfVar1[8];
  fVar11 = pfVar1[9];
  fVar12 = pfVar1[10];
  fVar13 = pfVar1[0xb];
  pfVar17 = (float *)(in_ECX + 0x40);
  iVar18 = (int)local_f0 - (int)pfVar17;
  iVar19 = 3;
  do {
    fVar14 = *pfVar17;
    fVar15 = pfVar17[1];
    fVar16 = pfVar17[2];
    pfVar2 = (float *)(iVar18 + (int)pfVar17);
    *pfVar2 = fVar20 * fVar14 + fVar6 * fVar15 + fVar10 * fVar16;
    pfVar2[1] = fVar21 * fVar14 + fVar7 * fVar15 + fVar11 * fVar16;
    pfVar2[2] = fVar4 * fVar14 + fVar8 * fVar15 + fVar12 * fVar16;
    pfVar2[3] = fVar5 * fVar14 + fVar9 * fVar15 + fVar13 * fVar16;
    pfVar17 = pfVar17 + 4;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  local_f0[0] = local_f0[0] + pfVar1[0xc];
  local_f0[1] = local_f0[1] + pfVar1[0xd];
  local_f0[2] = local_f0[2] + pfVar1[0xe];
  local_f0[3] = local_f0[3] + pfVar1[0xf];
  FUN_00911060(&local_a0,&local_d0,local_f0 + 4,param_1,param_2);
  local_80 = *(undefined4 *)(in_ECX + 0x7c);
  local_7c = *(undefined4 *)(in_ECX + 0x80);
  local_90 = local_a0;
  fStack_8c = fStack_9c;
  fStack_88 = fStack_98;
  fStack_84 = fStack_94;
  FUN_00943230(&local_a0,&local_d0,local_c0 + 4,local_f0 + 4,&local_90,local_78);
  FUN_008f1b60(&local_90,param_1,param_2);
  FUN_008f1cc0(local_c0,local_f0,param_1,param_2);
  if (*(char *)(in_ECX + 0x90) == '\0') {
    if (0.0 < *(float *)(in_ECX + 0x84)) {
      local_118 = *(float *)(in_ECX + 0x84);
      local_120 = *(float *)(param_1 + 0x1c);
      local_11c = (float)(*(int *)(param_1 + 0x28) + 0x30);
      local_114 = 4.2039e-45;
      FUN_008f1460(&local_120,param_1,param_2);
    }
  }
  else {
    FUN_008d2ab0(*(undefined4 *)(param_1 + 0x20),in_ECX + 0xa0);
    iVar18 = *(int *)(param_1 + 0x28);
    local_fc = 0;
    local_f8 = 0;
    local_100 = param_1;
    if (*(int *)(in_ECX + 0xd0) != 0) {
      FUN_00943230(&local_a0,&local_d0,local_c0 + 4,local_f0 + 4,&local_120,local_108);
      FUN_00943230(local_40,&local_d0,local_30,local_f0 + 4,&local_120,local_104);
      FUN_008f1070(&local_120,param_1,*param_2,local_10c);
      local_fc = *(undefined4 *)(iVar18 + 0x30);
      local_f8 = *(undefined4 *)(iVar18 + 0x34);
      local_f4 = iVar18 + 0x48;
      (**(code **)(**(int **)(in_ECX + 0xd0) + 8))(local_10c,&local_70);
      FUN_008f0fb0(&local_70,param_1,param_2);
    }
    if (*(int *)(in_ECX + 0xd8) != 0) {
      FUN_00943230(local_c0 + 4,local_f0 + 4,&local_a0,&local_d0,&local_120,local_108);
      FUN_00943230(local_30,local_f0 + 4,local_40,&local_d0,&local_120,local_104);
      local_fc = *(undefined4 *)(iVar18 + 0x38);
      local_f8 = *(undefined4 *)(iVar18 + 0x3c);
      local_f4 = iVar18 + 0x4c;
      FUN_008f1070(&local_120,param_1,*param_2,local_10c);
      (**(code **)(**(int **)(in_ECX + 0xd8) + 8))(local_10c,&local_70);
      FUN_008f0fb0(&local_70,param_1,param_2);
    }
    if (*(int *)(in_ECX + 0xd4) != 0) {
      local_70 = fStack_9c * local_c0[6] - fStack_98 * local_c0[5];
      fStack_6c = fStack_98 * local_c0[4] - local_a0 * local_c0[6];
      fStack_68 = local_a0 * local_c0[5] - fStack_9c * local_c0[4];
      fVar20 = fStack_6c * fStack_6c;
      fVar21 = fStack_68 * fStack_68;
      auVar22._4_4_ = fVar20;
      auVar22._0_4_ = fVar20;
      auVar22._8_4_ = fVar20;
      auVar22._12_4_ = fVar20;
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = fVar20 + local_70 * local_70;
      auVar24._4_4_ = fVar21;
      auVar24._0_4_ = fVar21 + auVar23._0_4_;
      auVar24._8_4_ = fVar21;
      auVar24._12_4_ = fVar21;
      auVar24 = rsqrtss(auVar23,auVar24);
      fVar20 = auVar24._0_4_;
      uStack_110 = 0x3f000000;
      fStack_64 = fVar20 * 0.5 * (3.0 - (fVar21 + auVar23._0_4_) * fVar20 * fVar20);
      local_70 = fStack_64 * local_70;
      fStack_6c = fStack_64 * fStack_6c;
      fStack_68 = fStack_64 * fStack_68;
      fStack_64 = fStack_64 * (fStack_94 * fStack_a4 - fStack_94 * fStack_a4);
      local_120 = fStack_cc * local_f0[6] - fStack_c8 * local_f0[5];
      local_11c = fStack_c8 * local_f0[4] - local_d0 * local_f0[6];
      local_118 = local_d0 * local_f0[5] - fStack_cc * local_f0[4];
      fVar20 = local_11c * local_11c;
      fVar21 = local_118 * local_118;
      auVar25._4_4_ = fVar20;
      auVar25._0_4_ = fVar20;
      auVar25._8_4_ = fVar20;
      auVar25._12_4_ = fVar20;
      auVar26._4_12_ = auVar25._4_12_;
      auVar26._0_4_ = fVar20 + local_120 * local_120;
      auVar3._4_4_ = fVar21;
      auVar3._0_4_ = fVar21 + auVar26._0_4_;
      auVar3._8_4_ = fVar21;
      auVar3._12_4_ = fVar21;
      auVar24 = rsqrtss(auVar26,auVar3);
      fVar20 = auVar24._0_4_;
      local_114 = fVar20 * 0.5 * (3.0 - (fVar21 + auVar26._0_4_) * fVar20 * fVar20);
      local_120 = local_114 * local_120;
      local_11c = local_114 * local_11c;
      local_118 = local_114 * local_118;
      local_114 = local_114 * (fStack_c4 * fStack_d4 - fStack_c4 * fStack_d4);
      FUN_00943230(&local_70,&local_120,&local_a0,&local_d0,auStack_50,local_108);
      FUN_00943230(auStack_20,&local_120,local_40,&local_d0,auStack_50,local_104);
      FUN_008f1070(auStack_50,param_1,*param_2,local_10c);
      local_fc = *(undefined4 *)(iVar18 + 0x40);
      local_f8 = *(undefined4 *)(iVar18 + 0x44);
      local_f4 = iVar18 + 0x50;
      (**(code **)(**(int **)(in_ECX + 0xd4) + 8))(local_10c,&local_90);
      FUN_008f0fb0(&fStack_98,param_1,param_2);
      return;
    }
  }
  return;
}



undefined4 FUN_00925610(undefined4 *param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  uVar7 = param_1[3];
  puVar1 = (undefined4 *)param_1[1];
  puVar2 = (undefined4 *)*param_1;
  piVar3 = (int *)param_1[2];
  iVar4 = *piVar3;
  iVar5 = (**(code **)(*(int *)*puVar2 + 8))();
  iVar6 = (**(code **)(*(int *)*puVar1 + 8))();
  if ((char)piVar3[3] == '\0') {
    iVar8 = iVar4 + 400;
  }
  else {
    iVar8 = iVar4 + 0x590;
  }
  uVar7 = (**(code **)(iVar4 + 0x990 + (uint)*(byte *)(iVar5 * 0x20 + iVar8 + iVar6) * 0x14))
                    (puVar2,puVar1,piVar3,uVar7);
  *(undefined4 *)(param_2 + 4) = uVar7;
  *param_2 = 6;
  return param_3;
}



void FUN_00925690(void)

{
  code *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  undefined1 local_4;
  undefined1 local_3;
  
  local_3 = 0;
  local_c = 0;
  local_28 = 0;
  local_20 = &LAB_009255d0;
  local_1c = &LAB_009255f0;
  local_24 = &LAB_009255b0;
  local_30 = FUN_00925610;
  local_8 = &LAB_00925510;
  local_2c = &LAB_00925540;
  local_18 = &LAB_00925550;
  local_14 = &LAB_00925570;
  local_10 = &LAB_00925590;
  local_4 = 1;
  FUN_008daeb0(&local_30,0xffffffff,0xffffffff);
  return;
}



void FUN_00925790(float *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_70;
  undefined1 local_60 [4];
  int local_5c;
  int local_58;
  float *local_50;
  float *local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  if ((*(byte *)(in_ECX + 0x44) & 2) != 0) {
    pfVar6 = *(float **)(in_ECX + 0x38);
    pfVar7 = *(float **)(in_ECX + 0x20);
    local_70 = iVar1;
    if (-1 < iVar1 + -1) {
      do {
        if ((*(byte *)((int)pfVar6 + 0xf) & 1) != 0) {
          iVar2 = *(int *)((int)param_1[9] + 0x10);
          iVar3 = *(int *)((int)param_1[9] + 0x14);
          fVar10 = param_1[5];
          fVar13 = param_1[6];
          iVar4 = *(int *)(iVar2 + 0x50);
          fVar8 = *pfVar7 - *(float *)((int)fVar10 + 0x40);
          fVar9 = pfVar7[1] - *(float *)((int)fVar10 + 0x44);
          fVar10 = pfVar7[2] - *(float *)((int)fVar10 + 0x48);
          iVar5 = *(int *)(iVar3 + 0x50);
          fVar11 = *pfVar7 - *(float *)((int)fVar13 + 0x40);
          fVar12 = pfVar7[1] - *(float *)((int)fVar13 + 0x44);
          fVar13 = pfVar7[2] - *(float *)((int)fVar13 + 0x48);
          local_58 = iVar3 + 0x14;
          fVar10 = (((*(float *)(iVar4 + 0xe0) * fVar9 - *(float *)(iVar4 + 0xe4) * fVar8) +
                    *(float *)(iVar4 + 0xd8)) -
                   ((*(float *)(iVar5 + 0xe0) * fVar12 - *(float *)(iVar5 + 0xe4) * fVar11) +
                   *(float *)(iVar5 + 0xd8))) * pfVar7[6] +
                   (((*(float *)(iVar4 + 0xe8) * fVar8 - *(float *)(iVar4 + 0xe0) * fVar10) +
                    *(float *)(iVar4 + 0xd4)) -
                   ((*(float *)(iVar5 + 0xe8) * fVar11 - *(float *)(iVar5 + 0xe0) * fVar13) +
                   *(float *)(iVar5 + 0xd4))) * pfVar7[5] +
                   (((*(float *)(iVar4 + 0xe4) * fVar10 - *(float *)(iVar4 + 0xe8) * fVar9) +
                    *(float *)(iVar4 + 0xd0)) -
                   ((*(float *)(iVar5 + 0xe4) * fVar13 - *(float *)(iVar5 + 0xe8) * fVar12) +
                   *(float *)(iVar5 + 0xd0))) * pfVar7[4];
          local_5c = iVar2 + 0x14;
          local_4c = pfVar6 + 2;
          local_44 = 1;
          iVar4 = *(int *)(iVar2 + 8);
          local_50 = pfVar7;
          local_48 = fVar10;
          FUN_008dc890(iVar4,&local_5c);
          if (*(int *)(iVar2 + 0x98) != 0) {
            FUN_008dc010(iVar2,&local_5c);
          }
          if (*(int *)(iVar3 + 0x98) != 0) {
            FUN_008dc010(iVar3,&local_5c);
          }
          fVar13 = (float)*(byte *)((int)pfVar6 + 0xe) * 0.0078125;
          if ((-*(float *)(*(int *)(*(int *)(iVar4 + 0x74) + 0x24) + 0x40) <= local_48) ||
             (fVar13 <= 0.3)) {
            *pfVar6 = (fVar13 + 1.0) *
                      (1.0 / (*(float *)(*(int *)(iVar2 + 0x50) + 0xc0) +
                              *(float *)(*(int *)(iVar3 + 0x50) + 0xc0) + 1e-10)) * fVar10 * -0.2;
            fVar10 = (float)*(byte *)((int)pfVar6 + 0xe) * *param_1 * fVar10 * 0.0078125 * -1.3;
            pfVar6[1] = fVar10;
            pfVar6[4] = fVar10 + pfVar7[7];
          }
          else {
            local_40 = pfVar7[4];
            fStack_3c = pfVar7[5];
            fStack_38 = pfVar7[6];
            fStack_34 = pfVar7[7];
            local_28 = local_48;
            local_30 = (float)*(ushort *)(pfVar6 + 3) * 0.00390625;
            local_24 = 0;
            local_20 = 0;
            local_2c = fVar13;
            FUN_0091fb20(pfVar7,&local_40,iVar2,iVar3,param_1[5],param_1[6],local_60);
            *pfVar6 = 0.0;
            pfVar6[4] = pfVar7[7];
          }
          *(byte *)((int)pfVar6 + 0xf) = *(byte *)((int)pfVar6 + 0xf) & 0xfe;
        }
        pfVar7 = pfVar7 + 8;
        pfVar6 = pfVar6 + 5;
        local_70 = local_70 + -1;
      } while (local_70 != 0);
    }
    *(byte *)(in_ECX + 0x44) = *(byte *)(in_ECX + 0x44) & 0xfd;
  }
  FUN_0094fef0(*(undefined4 *)(in_ECX + 0x20),iVar1,*(undefined4 *)(in_ECX + 0x38),in_ECX + 0x44,
               param_1,param_2);
  return;
}



int FUN_00925a80(undefined1 param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = in_ECX[1] - 1;
  if (-1 < iVar1) {
    do {
      if (*(char *)(*in_ECX + iVar1) == -1) {
        *(undefined1 *)(*in_ECX + iVar1) = param_1;
        return iVar1;
      }
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  if (in_ECX[1] == (in_ECX[2] & 0x3fffffffU)) {
    FUN_008a6ee0();
  }
  *(undefined1 *)(*in_ECX + in_ECX[1]) = param_1;
  iVar1 = in_ECX[1];
  in_ECX[1] = iVar1 + 1;
  return iVar1;
}



void FUN_00925ae0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar4;
  int iVar5;
  int in_ECX;
  undefined4 *unaff_retaddr;
  int local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  iVar2 = *(int *)(in_ECX + 0x3c);
  local_10 = iVar2 * 0x30 + 0xb0;
  local_c = 0;
  local_8 = 0;
  if (iVar2 == 1) {
    local_8 = 4;
    local_c = 0x20;
  }
  local_8 = local_8 + 4;
  local_c = local_c + 0x30;
  local_4 = (int *)((iVar2 == 1) + 1);
  piVar3 = *(int **)(*(int *)(in_ECX + 0x34) + 8);
  lpCriticalSection = *(LPCRITICAL_SECTION *)(piVar3[7] + 0xa0);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    (**(code **)(*piVar3 + 0xc))(*(int *)(in_ECX + 0x34),&local_10);
  }
  else {
    FUN_008a7720();
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x34) + 8) + 0xc))(*(int *)(in_ECX + 0x34),&local_10);
    LeaveCriticalSection(lpCriticalSection);
  }
  *(byte *)(in_ECX + 0x44) = *(byte *)(in_ECX + 0x44) | 6;
  iVar2 = *(int *)(in_ECX + 0x24);
  if (*(uint *)(in_ECX + 0x24) == (*(uint *)(in_ECX + 0x28) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x20),0x20);
  }
  iVar4 = *(int *)(in_ECX + 0x24);
  iVar5 = *(int *)(in_ECX + 0x20);
  *(int *)(in_ECX + 0x24) = iVar4 + 1;
  if (*(uint *)(in_ECX + 0x3c) == (*(uint *)(in_ECX + 0x40) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x38),0x14);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x3c) * 0x14);
  *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)((int)puVar1 + 0xf) = 1;
  if ((0 < iVar2) && ((*(byte *)((int)puVar1 + -5) & 2) == 0)) {
    *(undefined1 *)((int)puVar1 + 0xf) = 3;
  }
  *local_4 = iVar4 * 0x20 + iVar5;
  *unaff_retaddr = puVar1;
  FUN_00925a80(iVar2);
  return;
}



void FUN_00925c10(ushort param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  byte *pbVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  pbVar2 = (byte *)((uint)param_1 + *(int *)(in_ECX + 0xc));
  uVar5 = (uint)*pbVar2;
  *pbVar2 = 0xff;
  bVar7 = *(int *)(in_ECX + 0x3c) == 2;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if (bVar7) {
    local_8 = 4;
    local_c = 0x20;
  }
  local_4 = (uint)bVar7;
  piVar1 = (int *)(in_ECX + 0x38);
  iVar4 = *(int *)(in_ECX + 0x3c) + -1;
  *(int *)(in_ECX + 0x3c) = iVar4;
  if ((int)uVar5 < iVar4) {
    iVar4 = uVar5 * 0x14;
    uVar6 = uVar5;
    do {
      puVar3 = (undefined4 *)(*piVar1 + iVar4);
      *puVar3 = puVar3[5];
      puVar3[1] = puVar3[6];
      puVar3[2] = puVar3[7];
      puVar3[3] = puVar3[8];
      puVar3[4] = puVar3[9];
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 0x14;
    } while ((int)uVar6 < *(int *)(in_ECX + 0x3c));
  }
  pbVar2 = (byte *)(*piVar1 + 0xf + uVar5 * 0x14);
  *pbVar2 = *pbVar2 & 0xfd;
  *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + -1;
  if (*(int *)(in_ECX + 0x3c) * 2 + 2 <= (int)(*(uint *)(in_ECX + 0x40) & 0x3fffffff)) {
    FUN_008a6f90(piVar1,0x14,0,0);
  }
  if (*(int *)(in_ECX + 0x24) * 2 + 2 <= (int)(*(uint *)(in_ECX + 0x28) & 0x3fffffff)) {
    FUN_008a6f90(in_ECX + 0x20,0x20,0,0);
  }
  iVar4 = *(int *)(in_ECX + 0x10);
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    pbVar2 = (byte *)(*(int *)(in_ECX + 0xc) + iVar4);
    if ((*pbVar2 != 0xff) && (uVar5 < *pbVar2)) {
      *pbVar2 = *pbVar2 - 1;
    }
  }
  local_8 = local_8 + 4;
  local_c = local_c + 0x30;
  local_4 = local_4 + 1;
  piVar1 = *(int **)(*(int *)(in_ECX + 0x34) + 8);
  lpCriticalSection = *(LPCRITICAL_SECTION *)(piVar1[7] + 0xa0);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    FUN_008a7720();
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x34) + 8) + 0x10))(*(int *)(in_ECX + 0x34),&local_10)
    ;
    LeaveCriticalSection(lpCriticalSection);
    *(byte *)(in_ECX + 0x44) = *(byte *)(in_ECX + 0x44) | 5;
    return;
  }
  (**(code **)(*piVar1 + 0x10))(*(int *)(in_ECX + 0x34),&local_10);
  *(byte *)(in_ECX + 0x44) = *(byte *)(in_ECX + 0x44) | 5;
  return;
}



void FUN_00925da0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9e038;
  in_ECX[5] = 0x80000008;
  in_ECX[3] = in_ECX + 6;
  in_ECX[4] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0x80000000;
  in_ECX[0x10] = 0x80000000;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  *(undefined2 *)(in_ECX + 0x11) = 0;
  *(undefined2 *)((int)in_ECX + 0x46) = 3;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0xd] = param_1;
  return;
}



void FUN_00925e00(byte param_1)

{
  FUN_008dbce0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00925e30(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  do {
    piVar1 = *(int **)(iVar3 + *param_1);
    iVar2 = *piVar1;
    piVar4 = piVar1 + 4;
    (**(code **)(*param_2 + 4))("Sector",8,piVar1,iVar2 + 0x10,0x200);
    iVar3 = iVar3 + 4;
    do {
      switch((char)*piVar4) {
      case '\0':
      case '\x02':
      case '\x03':
      case '\x04':
      case '\x05':
        piVar4 = (int *)((int)piVar4 + (uint)*(byte *)((int)piVar4 + 3));
        break;
      case '\x01':
        return;
      case '\x06':
        (**(code **)(*param_2 + 8))("Agent",8,piVar4[1]);
        piVar4 = (int *)((int)piVar4 + (uint)*(byte *)((int)piVar4 + 3));
      }
    } while (piVar4 < (int *)(iVar2 + 0x10 + (int)piVar1));
  } while( true );
}



void FUN_00925ed0(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 0;
  if (param_1[1] != 1 && -1 < param_1[1] + -1) {
    do {
      (**(code **)(*param_2 + 4))
                ("Sector",8,*(undefined4 *)(*param_1 + iVar5 * 4),
                 *(undefined2 *)((int)param_1 + 0x16),*(undefined2 *)((int)param_1 + 0x16));
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[1] + -1);
  }
  if (iVar5 < param_1[1]) {
    (**(code **)(*param_2 + 4))
              ("Sector",8,*(undefined4 *)(*param_1 + iVar5 * 4),param_1[4],
               *(undefined2 *)((int)param_1 + 0x16));
  }
  iVar5 = param_1[1];
  iVar2 = 0;
  if (0 < iVar5) {
    do {
      pcVar6 = *(char **)(*param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
      if (iVar2 == iVar5) {
        uVar3 = param_1[4];
      }
      else {
        uVar3 = (uint)*(ushort *)((int)param_1 + 0x16);
      }
      pcVar4 = pcVar6 + uVar3;
      for (; pcVar6 < pcVar4; pcVar6 = pcVar6 + (byte)pcVar6[3]) {
        cVar1 = *pcVar6;
        if ((cVar1 == '\x02') || (cVar1 == '\x04')) {
LAB_00925f75:
          (**(code **)(*param_2 + 8))("ContactMgr",8,*(undefined4 *)(pcVar6 + 0x10));
        }
        else if (cVar1 == '\x06') {
          (**(code **)(*param_2 + 8))("Agent",8,*(undefined4 *)(pcVar6 + 4));
          goto LAB_00925f75;
        }
      }
      iVar5 = param_1[1];
    } while (iVar2 < iVar5);
  }
  return;
}



void FUN_00925fb0(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  iVar2 = param_1[1];
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      pcVar4 = *(char **)(*param_1 + iVar3 * 4);
      iVar3 = iVar3 + 1;
      if (iVar3 == iVar2) {
        uVar5 = param_1[4];
      }
      else {
        uVar5 = (uint)*(ushort *)((int)param_1 + 0x16);
      }
      pcVar6 = pcVar4 + uVar5;
      for (; pcVar4 < pcVar6; pcVar4 = pcVar4 + (byte)pcVar4[3]) {
        cVar1 = *pcVar4;
        if (((cVar1 == '\x02') || (cVar1 == '\x04')) || (cVar1 == '\x06')) {
          (**(code **)(*param_2 + 8))("ContactMgr",8,*(undefined4 *)(pcVar4 + 0x10));
        }
      }
      iVar2 = param_1[1];
    } while (iVar3 < iVar2);
  }
  return;
}



void FUN_00926030(void)

{
  LPCRITICAL_SECTION in_ECX;
  
  FUN_008a7720();
  in_ECX[4].RecursionCount = in_ECX[4].RecursionCount + -1;
  LeaveCriticalSection(in_ECX);
  return;
}



void FUN_00926050(void)

{
  LPCRITICAL_SECTION in_ECX;
  HANDLE pvVar1;
  
  FUN_008a7720();
  pvVar1 = in_ECX[4].OwningThread;
  in_ECX[4].OwningThread = (HANDLE)0x0;
  if (0 < (int)pvVar1) {
    do {
      FUN_008f58b0(1);
      pvVar1 = (HANDLE)((int)pvVar1 + -1);
    } while (pvVar1 != (HANDLE)0x0);
  }
  LeaveCriticalSection(in_ECX);
  return;
}



undefined4 FUN_00926090(uint param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  HANDLE pvVar4;
  undefined8 uVar5;
  HANDLE *ppvVar6;
  LPCRITICAL_SECTION in_ECX;
  int iVar7;
  int iVar8;
  int unaff_FS_OFFSET;
  
  iVar8 = _tls_index;
  iVar2 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar7 = *(int *)(iVar2 + _tls_index * 4);
  if (*(uint *)(iVar7 + 0x1a4) < *(uint *)(iVar7 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar7 + 0x1a4);
    *puVar3 = "TtGetNextJob";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar7 + 0x1a4) = puVar3 + 3;
  }
LAB_009260f0:
  FUN_008a7720();
  iVar7 = 0;
  ppvVar6 = &in_ECX[2].LockSemaphore + param_1 * 5;
  do {
    if (ppvVar6[2] != (HANDLE)0x0) {
      pcVar1 = (char *)((int)ppvVar6[3] + (int)*ppvVar6 * 0xc);
      if (*pcVar1 == '\0') {
        *param_2 = *(undefined4 *)pcVar1;
        param_2[1] = *(undefined4 *)(pcVar1 + 4);
        if (1 < *(int *)(pcVar1 + 4)) {
          *(short *)(pcVar1 + 2) = *(short *)(pcVar1 + 2) + 1;
          *(int *)(pcVar1 + 4) = *(int *)(pcVar1 + 4) + -1;
          param_2[1] = 1;
LAB_0092623c:
          if (in_ECX[4].OwningThread != (HANDLE)0x0) {
            in_ECX[4].OwningThread = (HANDLE)((int)in_ECX[4].OwningThread + -1);
            FUN_008f58b0(1);
          }
          goto LAB_00926251;
        }
      }
      else if (*pcVar1 == '\x06') {
        *param_2 = *(undefined4 *)pcVar1;
        param_2[1] = *(undefined4 *)(pcVar1 + 4);
        iVar8 = _tls_index;
        param_2[2] = *(undefined4 *)(pcVar1 + 8);
        if (4 < *(int *)(pcVar1 + 8)) {
          *(int *)(pcVar1 + 4) = *(int *)(pcVar1 + 4) + 4;
          *(int *)(pcVar1 + 8) = *(int *)(pcVar1 + 8) + -4;
          param_2[2] = 4;
          goto LAB_0092623c;
        }
      }
      else {
        *param_2 = *(undefined4 *)pcVar1;
        param_2[1] = *(undefined4 *)(pcVar1 + 4);
        param_2[2] = *(undefined4 *)(pcVar1 + 8);
      }
      pvVar4 = *ppvVar6;
      *ppvVar6 = (HANDLE)((int)pvVar4 + 1);
      if ((HANDLE)((int)pvVar4 + 1) == ppvVar6[4]) {
        *ppvVar6 = (HANDLE)0x0;
      }
      ppvVar6[2] = (HANDLE)((int)ppvVar6[2] + -1);
LAB_00926251:
      in_ECX[4].RecursionCount = in_ECX[4].RecursionCount + 1;
      LeaveCriticalSection(in_ECX);
      iVar2 = *(int *)(iVar2 + iVar8 * 4);
      if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
        puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
        *puVar3 = &DAT_00a9610c;
        uVar5 = rdtsc();
        puVar3[1] = (int)uVar5;
        *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
      }
      return 0;
    }
    if (iVar7 == 1) break;
    ppvVar6 = &in_ECX[2].LockSemaphore + (param_1 ^ 1) * 5;
    iVar7 = iVar7 + 1;
  } while( true );
  if (in_ECX[4].RecursionCount == 0) {
    LeaveCriticalSection(in_ECX);
    iVar2 = *(int *)(iVar2 + iVar8 * 4);
    if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
      puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
      *puVar3 = &DAT_00a9610c;
      uVar5 = rdtsc();
      puVar3[1] = (int)uVar5;
      *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
    }
    return 1;
  }
  in_ECX[4].OwningThread = (HANDLE)((int)in_ECX[4].OwningThread + 1);
  LeaveCriticalSection(in_ECX);
  iVar7 = *(int *)(iVar2 + iVar8 * 4);
  if (*(uint *)(iVar7 + 0x1a4) < *(uint *)(iVar7 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar7 + 0x1a4);
    *puVar3 = "TtWaitForSignal";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar7 + 0x1a4) = puVar3 + 3;
  }
  FUN_008f58a0();
  iVar7 = *(int *)(iVar2 + iVar8 * 4);
  if (*(uint *)(iVar7 + 0x1a4) < *(uint *)(iVar7 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar7 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar7 + 0x1a4) = puVar3 + 3;
  }
  goto LAB_009260f0;
}



void FUN_00926320(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x10) < param_1) {
    uVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(param_1 * 0xc,0x14);
    if (*(int *)(in_ECX + 0xc) != 0) {
      FUN_008b1890(uVar1,*(int *)(in_ECX + 0xc),*(int *)(in_ECX + 0x10) * 0xc);
    }
    if (*(int *)(in_ECX + 0x10) != 0) {
      (**(code **)(*DAT_00ba7d98 + 0x14))
                (*(undefined4 *)(in_ECX + 0xc),*(int *)(in_ECX + 0x10) * 0xc,0x14);
    }
    *(undefined4 *)(in_ECX + 0xc) = uVar1;
    *(int *)(in_ECX + 0x10) = param_1;
  }
  return;
}



void FUN_00926390(void)

{
  LPCRITICAL_SECTION in_ECX;
  
  InitializeCriticalSectionAndSpinCount(in_ECX,8000);
  in_ECX[2].LockSemaphore = (HANDLE)0x0;
  in_ECX[2].SpinCount = 0;
  in_ECX[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  in_ECX[3].LockCount = 0;
  in_ECX[3].RecursionCount = 0;
  in_ECX[3].OwningThread = (HANDLE)0x0;
  in_ECX[3].LockSemaphore = (HANDLE)0x0;
  in_ECX[3].SpinCount = 0;
  in_ECX[4].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  in_ECX[4].LockCount = 0;
  FUN_008f5870(0,1000);
  in_ECX[4].OwningThread = (HANDLE)0x0;
  in_ECX[4].RecursionCount = 0;
  return;
}



void FUN_009263e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint local_8;
  
  uVar2 = in_ECX[4];
  if (in_ECX[2] == uVar2) {
    uVar5 = (in_ECX[1] != *in_ECX) - 1 & in_ECX[1];
    if (uVar2 == 0) {
      uVar8 = 8;
    }
    else {
      uVar3 = (uVar5 + uVar2 * 2) * 0xc;
      uVar8 = 1;
      if (1 < uVar3) {
        do {
          uVar8 = uVar8 * 2;
        } while (uVar8 < uVar3);
      }
      uVar8 = uVar8 / 0xc;
    }
    FUN_00926320(uVar8);
    uVar3 = 0;
    if ((uVar5 != 0) && (0 < (int)uVar5)) {
      iVar7 = 0;
      iVar4 = uVar2 * 0xc;
      local_8 = uVar5;
      do {
        puVar1 = (undefined4 *)(iVar7 + in_ECX[3]);
        puVar6 = (undefined4 *)(in_ECX[3] + iVar4);
        *puVar6 = *puVar1;
        puVar6[1] = puVar1[1];
        puVar6[2] = puVar1[2];
        iVar7 = iVar7 + 0xc;
        iVar4 = iVar4 + 0xc;
        local_8 = local_8 - 1;
        uVar3 = uVar5;
      } while (local_8 != 0);
    }
    in_ECX[1] = uVar3 + uVar2;
  }
  else if (in_ECX[1] == uVar2) {
    in_ECX[1] = 0;
  }
  puVar1 = (undefined4 *)(in_ECX[3] + in_ECX[1] * 0xc);
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  in_ECX[1] = in_ECX[1] + 1;
  in_ECX[2] = in_ECX[2] + 1;
  return;
}



void FUN_009264d0(undefined4 param_1)

{
  LPCRITICAL_SECTION in_ECX;
  
  FUN_008a7720();
  FUN_009263e0(param_1);
  if (in_ECX[4].OwningThread != (HANDLE)0x0) {
    in_ECX[4].OwningThread = (HANDLE)((int)in_ECX[4].OwningThread + -1);
    FUN_008f58b0(1);
  }
  LeaveCriticalSection(in_ECX);
  return;
}



void FUN_00926510(int param_1,int param_2,undefined4 *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  HANDLE pvVar4;
  undefined8 uVar5;
  LPCRITICAL_SECTION in_ECX;
  HANDLE *ppvVar6;
  int unaff_FS_OFFSET;
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtGetNextJob";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  FUN_008a7720();
  ppvVar6 = &in_ECX[2].LockSemaphore + param_1 * 5;
  FUN_009263e0(param_3);
  if ((param_1 != param_2) &&
     ((&in_ECX[3].DebugInfo)[param_2 * 5] != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    ppvVar6 = &in_ECX[2].LockSemaphore + param_2 * 5;
  }
  pcVar1 = (char *)((int)ppvVar6[3] + (int)*ppvVar6 * 0xc);
  if (*pcVar1 == '\0') {
    *param_3 = *(undefined4 *)pcVar1;
    param_3[1] = *(undefined4 *)(pcVar1 + 4);
    if (1 < *(int *)(pcVar1 + 4)) {
      *(short *)(pcVar1 + 2) = *(short *)(pcVar1 + 2) + 1;
      *(int *)(pcVar1 + 4) = *(int *)(pcVar1 + 4) + -1;
      param_3[1] = 1;
LAB_00926609:
      if (in_ECX[4].OwningThread != (HANDLE)0x0) {
        in_ECX[4].OwningThread = (HANDLE)((int)in_ECX[4].OwningThread + -1);
        FUN_008f58b0(1);
      }
      goto LAB_0092661e;
    }
  }
  else if (*pcVar1 == '\x06') {
    *param_3 = *(undefined4 *)pcVar1;
    param_3[1] = *(undefined4 *)(pcVar1 + 4);
    param_3[2] = *(undefined4 *)(pcVar1 + 8);
    if (4 < *(int *)(pcVar1 + 8)) {
      *(int *)(pcVar1 + 8) = *(int *)(pcVar1 + 8) + -4;
      *(int *)(pcVar1 + 4) = *(int *)(pcVar1 + 4) + 4;
      param_3[2] = 4;
      goto LAB_00926609;
    }
  }
  else {
    *param_3 = *(undefined4 *)pcVar1;
    param_3[1] = *(undefined4 *)(pcVar1 + 4);
    param_3[2] = *(undefined4 *)(pcVar1 + 8);
  }
  pvVar4 = *ppvVar6;
  *ppvVar6 = (HANDLE)((int)pvVar4 + 1);
  if ((HANDLE)((int)pvVar4 + 1) == ppvVar6[4]) {
    *ppvVar6 = (HANDLE)0x0;
  }
  ppvVar6[2] = (HANDLE)((int)ppvVar6[2] + -1);
LAB_0092661e:
  LeaveCriticalSection(in_ECX);
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  return;
}



undefined4 FUN_009266b0(void)

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
    uVar3 = FUN_009285e0();
    *(undefined4 *)(in_ECX + 4) = uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0xa0;
}



void FUN_00926720(int param_1,int param_2)

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
    param_1 = FUN_009285e0();
  }
  uStack_14 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(iVar2 + 0x14);
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
  uVar3 = *(undefined4 *)(iVar2 + 0x94);
  uVar4 = *(undefined4 *)(iVar2 + 0x98);
  uVar5 = *(undefined4 *)(iVar2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  fVar1 = *(float *)(param_2 + 0x10);
  if (fVar1 != 1.0) {
    *(float *)(param_1 + 0x50) = fVar1 * *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) = fVar1 * *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) = fVar1 * *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) = fVar1 * *(float *)(param_1 + 0x5c);
    *(float *)(param_1 + 0x90) = fVar1 * *(float *)(param_1 + 0x90);
    *(float *)(param_1 + 0x94) = fVar1 * *(float *)(param_1 + 0x94);
    *(float *)(param_1 + 0x98) = fVar1 * *(float *)(param_1 + 0x98);
    *(float *)(param_1 + 0x9c) = fVar1 * *(float *)(param_1 + 0x9c);
  }
  FUN_008a07b0(param_1,param_2);
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_00926860(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_008a0c30(param_1);
  iVar1 = *(int *)(in_ECX + 4);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0x10,4,&param_1,1);
  param_1 = 1;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0x14,1,&param_1,1);
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0x20,0x40,0,0);
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),iVar1 + 0x60,0x40,0,0);
  return;
}



void FUN_009268f0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_008a0c80(param_1);
  iVar1 = *(int *)(in_ECX + 4);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x10,4,&param_1,1);
  param_1 = 1;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x14,1,&param_1,1);
  param_1 = 0x40;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x20,0x40,&param_1,1);
  param_1 = 0x40;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1 + 0x60,0x40,&param_1,1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00926990(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 auStack_c4 [4];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_c4;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &local_c0;
    (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),param_2,0xa0,0,0);
  }
  FUN_008a01f0(param_1,param_2);
  iVar1 = *(int *)(in_ECX + 4);
  *(undefined4 *)(iVar1 + 0x10) = param_2[5];
  *(undefined1 *)(iVar1 + 0x14) = *(undefined1 *)(param_2 + 3);
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *(undefined4 *)(iVar1 + 0x20) = param_2[8];
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *(undefined4 *)(iVar1 + 0x28) = uVar3;
  *(undefined4 *)(iVar1 + 0x2c) = uVar4;
  uVar2 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar4 = param_2[0xf];
  *(undefined4 *)(iVar1 + 0x30) = param_2[0xc];
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(iVar1 + 0x38) = uVar3;
  *(undefined4 *)(iVar1 + 0x3c) = uVar4;
  uVar2 = param_2[0x11];
  uVar3 = param_2[0x12];
  uVar4 = param_2[0x13];
  *(undefined4 *)(iVar1 + 0x40) = param_2[0x10];
  *(undefined4 *)(iVar1 + 0x44) = uVar2;
  *(undefined4 *)(iVar1 + 0x48) = uVar3;
  *(undefined4 *)(iVar1 + 0x4c) = uVar4;
  uVar2 = param_2[0x15];
  uVar3 = param_2[0x16];
  uVar4 = param_2[0x17];
  *(undefined4 *)(iVar1 + 0x50) = param_2[0x14];
  *(undefined4 *)(iVar1 + 0x54) = uVar2;
  *(undefined4 *)(iVar1 + 0x58) = uVar3;
  *(undefined4 *)(iVar1 + 0x5c) = uVar4;
  uVar2 = param_2[0x19];
  uVar3 = param_2[0x1a];
  uVar4 = param_2[0x1b];
  *(undefined4 *)(iVar1 + 0x60) = param_2[0x18];
  *(undefined4 *)(iVar1 + 100) = uVar2;
  *(undefined4 *)(iVar1 + 0x68) = uVar3;
  *(undefined4 *)(iVar1 + 0x6c) = uVar4;
  uVar2 = param_2[0x1d];
  uVar3 = param_2[0x1e];
  uVar4 = param_2[0x1f];
  *(undefined4 *)(iVar1 + 0x70) = param_2[0x1c];
  *(undefined4 *)(iVar1 + 0x74) = uVar2;
  *(undefined4 *)(iVar1 + 0x78) = uVar3;
  *(undefined4 *)(iVar1 + 0x7c) = uVar4;
  uVar2 = param_2[0x21];
  uVar3 = param_2[0x22];
  uVar4 = param_2[0x23];
  *(undefined4 *)(iVar1 + 0x80) = param_2[0x20];
  *(undefined4 *)(iVar1 + 0x84) = uVar2;
  *(undefined4 *)(iVar1 + 0x88) = uVar3;
  *(undefined4 *)(iVar1 + 0x8c) = uVar4;
  uVar2 = param_2[0x25];
  uVar3 = param_2[0x26];
  uVar4 = param_2[0x27];
  *(undefined4 *)(iVar1 + 0x90) = param_2[0x24];
  *(undefined4 *)(iVar1 + 0x94) = uVar2;
  *(undefined4 *)(iVar1 + 0x98) = uVar3;
  *(undefined4 *)(iVar1 + 0x9c) = uVar4;
  return;
}



void FUN_00926a60(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d7bfb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = *(int *)(in_ECX + 4);
  if (param_1 == 0) {
    iVar3 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xa0,0x29,uVar2);
    *(undefined2 *)(iVar3 + 4) = 0xa0;
    iStack_4 = param_1;
    param_1 = FUN_00924930();
  }
  iStack_4 = 0xffffffff;
  FUN_00924960(*(undefined4 *)(iVar1 + 0x98));
  *(undefined1 *)(param_1 + 0x91) = *(undefined1 *)(iVar1 + 0x91);
  FUN_008b2dd0(param_1,param_2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00926b00(void)

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
    uVar3 = FUN_00924930();
    *(undefined4 *)(in_ECX + 4) = uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0xa0;
}



void FUN_00926ca0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  
  iVar1 = in_ECX[3];
  *in_ECX = &PTR_FUN_00aa1828;
  if (0 < iVar1) {
    do {
      FUN_008bc730();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (-1 < (int)in_ECX[4]) {
    FUN_008a75d0(in_ECX[2],(in_ECX[4] & 0x3fffffff) * 0x50,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00926d10(byte param_1)

{
  FUN_00926ca0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00926d60(byte param_1)

{
  FUN_00926d90();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00926d90(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  *in_ECX = &PTR_FUN_00aa1838;
  if (0 < (int)in_ECX[3]) {
    do {
      puVar1 = *(undefined4 **)(in_ECX[2] + iVar2 * 4);
      if ((*(short *)(puVar1 + 1) != 0) &&
         (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
         *(short *)((int)puVar1 + 6) == 0)) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)in_ECX[3]);
  }
  if (-1 < (int)in_ECX[4]) {
    FUN_008a75d0(in_ECX[2],in_ECX[4] << 2,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00926e80(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  
  FUN_008f5750(param_1,0);
  *in_ECX = &PTR_FUN_00aa1858;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  in_ECX[8] = *param_2;
  in_ECX[9] = uVar1;
  in_ECX[10] = uVar2;
  in_ECX[0xb] = uVar3;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  in_ECX[0x10] = param_4;
  in_ECX[0xc] = uVar1;
  in_ECX[0xd] = uVar2;
  in_ECX[0xe] = uVar3;
  in_ECX[0xf] = uVar4;
  in_ECX[0x11] = param_5;
  return;
}



void FUN_00926ec0(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int in_ECX;
  float *extraout_ECX;
  float *pfVar13;
  uint uVar14;
  float *extraout_EDX;
  float *pfVar15;
  uint uVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30 [4];
  float local_20 [7];
  
  iVar1 = *(int *)(in_ECX + 0x18);
  local_40 = *(float *)(in_ECX + 0x30);
  fStack_3c = *(float *)(in_ECX + 0x34);
  fStack_38 = *(float *)(in_ECX + 0x38);
  fVar3 = *(float *)(in_ECX + 0x3c);
  iVar2 = *(int *)(iVar1 + 0x50);
  fVar18 = *(float *)(iVar2 + 0x8c);
  fVar8 = *(float *)(iVar2 + 0x80);
  fVar9 = *(float *)(iVar2 + 0x84);
  fVar10 = *(float *)(iVar2 + 0x88);
  fVar19 = (fVar18 * fVar18 + fVar18 * fVar18) - 1.0;
  fVar23 = fVar10 * fStack_38 + fVar9 * fStack_3c + fVar8 * local_40;
  fVar23 = fVar23 + fVar23;
  fVar18 = fVar18 + fVar18;
  fVar4 = *(float *)(in_ECX + 0x20);
  fVar5 = *(float *)(in_ECX + 0x24);
  fVar6 = *(float *)(in_ECX + 0x28);
  fVar7 = *(float *)(in_ECX + 0x2c);
  local_20[0] = fVar19 * local_40 + fVar23 * fVar8 +
                fVar18 * (fVar9 * fStack_38 - fVar10 * fStack_3c);
  local_20[1] = fVar19 * fStack_3c + fVar23 * fVar9 +
                fVar18 * (fVar10 * local_40 - fVar8 * fStack_38);
  local_20[2] = fVar19 * fStack_38 + fVar23 * fVar10 +
                fVar18 * (fVar8 * fStack_3c - fVar9 * local_40);
  local_20[3] = fVar19 * fVar3 + fVar23 * 0.0 + fVar18 * (fVar3 * 0.0 - fVar3 * 0.0);
  fVar18 = *(float *)(iVar2 + 0x8c);
  fVar8 = *(float *)(iVar2 + 0x80);
  fVar9 = *(float *)(iVar2 + 0x84);
  fVar10 = *(float *)(iVar2 + 0x88);
  fVar19 = (fVar18 * fVar18 + fVar18 * fVar18) - 1.0;
  pfVar13 = &local_44;
  fVar23 = fVar10 * fVar6 + fVar9 * fVar5 + fVar8 * fVar4;
  fVar23 = fVar23 + fVar23;
  fVar18 = fVar18 + fVar18;
  pfVar15 = &local_44;
  local_30[0] = fVar19 * fVar4 + fVar23 * fVar8 + fVar18 * (fVar9 * fVar6 - fVar10 * fVar5);
  local_30[1] = fVar19 * fVar5 + fVar23 * fVar9 + fVar18 * (fVar10 * fVar4 - fVar8 * fVar6);
  local_30[2] = fVar19 * fVar6 + fVar23 * fVar10 + fVar18 * (fVar8 * fVar5 - fVar9 * fVar4);
  local_30[3] = fVar19 * fVar7 + fVar23 * 0.0 + fVar18 * (fVar7 * 0.0 - fVar7 * 0.0);
  fVar18 = -(fStack_38 * local_30[2] + fStack_3c * local_30[1] + local_40 * local_30[0]);
  local_40 = local_40 + fVar18 * local_30[0];
  fStack_3c = fStack_3c + fVar18 * local_30[1];
  fStack_38 = fStack_38 + fVar18 * local_30[2];
  fVar19 = fStack_3c * fStack_3c;
  fVar23 = fStack_38 * fStack_38;
  auVar20._4_4_ = fVar19;
  auVar20._0_4_ = fVar19;
  auVar20._8_4_ = fVar19;
  auVar20._12_4_ = fVar19;
  auVar21._4_12_ = auVar20._4_12_;
  auVar21._0_4_ = fVar19 + local_40 * local_40;
  auVar22._4_4_ = fVar23;
  auVar22._0_4_ = fVar23 + auVar21._0_4_;
  auVar22._8_4_ = fVar23;
  auVar22._12_4_ = fVar23;
  auVar22 = rsqrtss(auVar21,auVar22);
  fVar19 = auVar22._0_4_;
  fStack_34 = fVar19 * 0.5 * (3.0 - (fVar23 + auVar21._0_4_) * fVar19 * fVar19);
  local_40 = fStack_34 * local_40;
  fStack_3c = fStack_34 * fStack_3c;
  fStack_38 = fStack_34 * fStack_38;
  fStack_34 = fStack_34 * (fVar3 + fVar18 * local_30[3]);
  local_44 = local_20[2] * fStack_38 + local_20[1] * fStack_3c + local_20[0] * local_40;
  if (ABS(local_44) < 1.0) {
    fVar17 = (float10)FUN_00986130();
    pfVar13 = extraout_ECX;
    pfVar15 = extraout_EDX;
  }
  else if (local_44 <= 0.0) {
    fVar17 = (float10)3.1415927;
  }
  else {
    fVar17 = (float10)0.0;
  }
  fVar18 = local_20[1] * fStack_38 - local_20[2] * fStack_3c;
  fVar19 = local_20[2] * local_40 - local_20[0] * fStack_38;
  local_20[2] = local_20[0] * fStack_3c - local_20[1] * local_40;
  local_20[0] = fVar18;
  local_20[1] = fVar19;
  fVar18 = ABS(fVar18);
  fVar19 = ABS(fVar19);
  local_20[2] = ABS(local_20[2]);
  if (fVar19 <= fVar18) {
    if (local_20[2] <= fVar18) {
      iVar11 = 0;
    }
    else {
      iVar11 = 2;
    }
  }
  else if (local_20[2] <= fVar19) {
    iVar11 = 1;
  }
  else {
    iVar11 = 2;
  }
  local_40 = ABS(local_30[0]);
  fStack_3c = ABS(local_30[1]);
  fStack_38 = ABS(local_30[2]);
  fStack_34 = ABS(local_30[3]);
  if (fStack_3c <= local_40) {
    if (fStack_38 <= local_40) {
      iVar12 = 0;
    }
    else {
      iVar12 = 2;
    }
  }
  else if (fStack_38 <= fStack_3c) {
    iVar12 = 1;
  }
  else {
    iVar12 = 2;
  }
  uVar14 = movmskps(pfVar13,ZEXT416((uint)local_30[iVar12]));
  uVar16 = movmskps(pfVar15,ZEXT416((uint)local_20[iVar11]));
  if (((uVar14 ^ uVar16) & 1) != 0) {
    fVar17 = -fVar17;
  }
  fVar18 = *(float *)(in_ECX + 0x44) * *(float *)(param_1 + 0xc);
  local_44 = (float)((float10)*(float *)(in_ECX + 0x40) * (float10)*(float *)(param_1 + 0xc) *
                    fVar17);
  local_20[0] = local_44 * local_30[0] - fVar18 * *(float *)(iVar2 + 0xe0);
  local_20[1] = local_44 * local_30[1] - fVar18 * *(float *)(iVar2 + 0xe4);
  local_20[2] = local_44 * local_30[2] - fVar18 * *(float *)(iVar2 + 0xe8);
  local_20[3] = local_44 * local_30[3] - fVar18 * *(float *)(iVar2 + 0xec);
  FUN_008a6410();
  (**(code **)(**(int **)(iVar1 + 0x50) + 100))(local_20);
  return;
}



void FUN_00927430(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = &PTR_LAB_00a95c60;
  in_ECX[3] = &PTR_LAB_00a95c3c;
  in_ECX[4] = &PTR_LAB_00a95c48;
  in_ECX[5] = &PTR_LAB_00a95c68;
  in_ECX[6] = &PTR_LAB_00a46684;
  *in_ECX = &PTR_FUN_00aa18a4;
  in_ECX[2] = &PTR_LAB_00aa18a0;
  in_ECX[3] = &PTR_LAB_00aa1898;
  in_ECX[4] = &PTR_LAB_00aa1890;
  in_ECX[5] = &PTR_LAB_00a96b64;
  in_ECX[6] = &PTR_LAB_00aa187c;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0x80000000;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_009274f0(void)

{
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  
  FUN_00927430(0);
  local_54 = CONCAT13(local_4d,CONCAT12(local_4e,CONCAT11(local_4f,local_50)));
  return local_54;
}



void FUN_00927540(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  int iVar5;
  int *piVar6;
  
  puVar1 = in_ECX + 6;
  iVar5 = 0;
  *in_ECX = &PTR_FUN_00aa18a4;
  in_ECX[2] = &PTR_LAB_00aa18a0;
  in_ECX[3] = &PTR_LAB_00aa1898;
  in_ECX[4] = &PTR_LAB_00aa1890;
  in_ECX[5] = &PTR_LAB_00a96b64;
  *puVar1 = &PTR_LAB_00aa187c;
  if (0 < (int)in_ECX[8]) {
    do {
      iVar2 = *(int *)(in_ECX[7] + iVar5 * 8);
      iVar3 = *(int *)(iVar2 + 0xb0);
      iVar4 = 0;
      if (0 < iVar3) {
        piVar6 = *(int **)(iVar2 + 0xac);
        do {
          if ((undefined4 *)*piVar6 == puVar1) {
            if (-1 < iVar4) {
              FUN_008a6300(puVar1);
            }
            break;
          }
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar4 < iVar3);
      }
      iVar2 = *(int *)(in_ECX[7] + 4 + iVar5 * 8);
      iVar3 = *(int *)(iVar2 + 0xb0);
      iVar4 = 0;
      if (0 < iVar3) {
        piVar6 = *(int **)(iVar2 + 0xac);
        do {
          if ((undefined4 *)*piVar6 == puVar1) {
            if (-1 < iVar4) {
              FUN_008a6300(puVar1);
            }
            break;
          }
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar4 < iVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)in_ECX[8]);
  }
  if (-1 < (int)in_ECX[9]) {
    FUN_008a75d0(in_ECX[7],in_ECX[9] << 3,0x14);
  }
  *puVar1 = &PTR_LAB_00a46684;
  in_ECX[4] = &PTR_LAB_00a95c48;
  in_ECX[3] = &PTR_LAB_00a95c3c;
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00927650(byte param_1)

{
  FUN_00927540();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00927680(undefined1 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int in_ECX;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    *param_1 = *(undefined1 *)(in_ECX + 0x18);
    return;
  }
  uVar1 = 0;
  if ((char)param_2 != '\0') {
    if ((param_2 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(in_ECX + 0x1c);
    }
    if ((param_2 & 2) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(in_ECX + 0x20);
    }
    if ((param_2 & 4) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(in_ECX + 0x24);
    }
    if ((param_2 & 8) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(in_ECX + 0x28);
    }
    if ((param_2 & 0x10) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(in_ECX + 0x2c);
    }
    if ((param_2 & 0x20) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(in_ECX + 0x30);
    }
    if ((param_2 & 0x40) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)(in_ECX + 0x34);
    }
    if ((char)param_2 < '\0') {
      uVar1 = *(uint *)(in_ECX + 0x38);
    }
    else {
      uVar1 = 0;
    }
    uVar1 = uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar1;
  }
  cVar2 = (char)(param_2 >> 8);
  if (cVar2 != '\0') {
    if ((param_2 & 0x100) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(in_ECX + 0x3c);
    }
    if ((param_2 & 0x200) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(in_ECX + 0x40);
    }
    if ((param_2 & 0x400) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(in_ECX + 0x44);
    }
    if ((param_2 & 0x800) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(in_ECX + 0x48);
    }
    if ((param_2 & 0x1000) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(in_ECX + 0x4c);
    }
    if ((param_2 & 0x2000) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(in_ECX + 0x50);
    }
    if ((param_2 & 0x4000) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)(in_ECX + 0x54);
    }
    if (cVar2 < '\0') {
      uVar3 = *(uint *)(in_ECX + 0x58);
    }
    else {
      uVar3 = 0;
    }
    uVar1 = uVar1 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar3;
  }
  if ((param_2 & 0xff0000) != 0) {
    if ((param_2 & 0x10000) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(in_ECX + 0x5c);
    }
    if ((param_2 & 0x20000) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(in_ECX + 0x60);
    }
    if ((param_2 & 0x40000) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(in_ECX + 100);
    }
    if ((param_2 & 0x80000) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(in_ECX + 0x68);
    }
    if ((param_2 & 0x100000) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(in_ECX + 0x6c);
    }
    if ((param_2 & 0x200000) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(in_ECX + 0x70);
    }
    if ((param_2 & 0x400000) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)(in_ECX + 0x74);
    }
    if ((param_2 & 0x800000) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(in_ECX + 0x78);
    }
    uVar1 = uVar1 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar3;
  }
  if ((param_2 & 0xff000000) != 0) {
    if ((param_2 & 0x1000000) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(in_ECX + 0x7c);
    }
    if ((param_2 & 0x2000000) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(in_ECX + 0x80);
    }
    if ((param_2 & 0x4000000) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(in_ECX + 0x84);
    }
    if ((param_2 & 0x8000000) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(in_ECX + 0x88);
    }
    if ((param_2 & 0x10000000) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(in_ECX + 0x8c);
    }
    if ((param_2 & 0x20000000) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(in_ECX + 0x90);
    }
    if ((param_2 & 0x40000000) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)(in_ECX + 0x94);
    }
    uVar1 = uVar1 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10;
    if ((int)param_2 < 0) {
      *param_1 = (param_3 & (uVar1 | *(uint *)(in_ECX + 0x98))) != 0;
      return;
    }
  }
  *param_1 = (param_3 & uVar1) != 0;
  return;
}



void FUN_009279f0(byte param_1)

{
  FUN_008895c0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00927ad0(undefined1 *param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  if (param_2 == 0) {
    *param_1 = 0;
    return;
  }
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x20)) {
    piVar2 = *(int **)(in_ECX + 0x1c);
    do {
      if (*piVar2 == param_2) {
        iVar3 = *(int *)(in_ECX + 0x20) + -1;
        *(int *)(in_ECX + 0x20) = iVar3;
        *(undefined4 *)(*(int *)(in_ECX + 0x1c) + iVar1 * 4) =
             *(undefined4 *)(*(int *)(in_ECX + 0x1c) + iVar3 * 4);
        *param_1 = 1;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x20));
  }
  *param_1 = 0;
  return;
}



void FUN_00927b60(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = &PTR_LAB_00a95c60;
  in_ECX[3] = &PTR_LAB_00a95c3c;
  in_ECX[4] = &PTR_LAB_00a95c48;
  in_ECX[5] = &PTR_LAB_00a95c68;
  in_ECX[6] = &PTR_LAB_00a46684;
  *in_ECX = &PTR_FUN_00aa1908;
  in_ECX[2] = &PTR_LAB_00aa1904;
  in_ECX[3] = &PTR_LAB_00aa18fc;
  in_ECX[4] = &PTR_LAB_00aa18f4;
  in_ECX[5] = &PTR_LAB_00a96b64;
  in_ECX[6] = &PTR_LAB_00aa18e0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0x80000000;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00927c20(void)

{
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  
  FUN_00927b60(0);
  local_54 = CONCAT13(local_4d,CONCAT12(local_4e,CONCAT11(local_4f,local_50)));
  return local_54;
}



void FUN_00927c70(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  int iVar5;
  int *piVar6;
  
  puVar1 = in_ECX + 6;
  iVar5 = 0;
  *in_ECX = &PTR_FUN_00aa1908;
  in_ECX[2] = &PTR_LAB_00aa1904;
  in_ECX[3] = &PTR_LAB_00aa18fc;
  in_ECX[4] = &PTR_LAB_00aa18f4;
  in_ECX[5] = &PTR_LAB_00a96b64;
  *puVar1 = &PTR_LAB_00aa18e0;
  if (0 < (int)in_ECX[8]) {
    do {
      iVar2 = *(int *)(in_ECX[7] + iVar5 * 4);
      iVar3 = *(int *)(iVar2 + 0xb0);
      iVar4 = 0;
      if (0 < iVar3) {
        piVar6 = *(int **)(iVar2 + 0xac);
        do {
          if ((undefined4 *)*piVar6 == puVar1) {
            if (-1 < iVar4) {
              FUN_008a6300(puVar1);
            }
            break;
          }
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar4 < iVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)in_ECX[8]);
  }
  if (-1 < (int)in_ECX[9]) {
    FUN_008a75d0(in_ECX[7],in_ECX[9] << 2,0x14);
  }
  *puVar1 = &PTR_LAB_00a46684;
  in_ECX[4] = &PTR_LAB_00a95c48;
  in_ECX[3] = &PTR_LAB_00a95c3c;
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00927d50(byte param_1)

{
  FUN_00927c70();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00927d80(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[6];
  *in_ECX = &PTR_FUN_00aa1930;
  in_ECX[2] = &PTR_LAB_00aa192c;
  in_ECX[3] = &PTR_LAB_00aa1924;
  in_ECX[4] = &PTR_LAB_00aa191c;
  in_ECX[5] = &PTR_LAB_00aa1918;
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  in_ECX[4] = &PTR_LAB_00a95c48;
  in_ECX[3] = &PTR_LAB_00a95c3c;
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00927ed0(byte param_1)

{
  FUN_00927d80();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_009280c0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x29);
  *(undefined2 *)(puVar1 + 1) = 0x18;
  *(undefined2 *)((int)puVar1 + 6) = 1;
  *puVar1 = &PTR_LAB_00aa1938;
  puVar1[3] = 0x3f800000;
  puVar1[4] = 0x49742400;
  puVar1[5] = 0xc9742400;
  puVar1[2] = 0x3f4ccccd;
  *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(in_ECX + 4);
  *(undefined2 *)((int)puVar1 + 6) = *(undefined2 *)(in_ECX + 6);
  puVar1[2] = *(undefined4 *)(in_ECX + 8);
  puVar1[3] = *(undefined4 *)(in_ECX + 0xc);
  puVar1[4] = *(undefined4 *)(in_ECX + 0x10);
  puVar1[5] = *(undefined4 *)(in_ECX + 0x14);
  return;
}



void FUN_00928230(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x29);
  *(undefined2 *)(puVar1 + 1) = 0x18;
  *(undefined2 *)((int)puVar1 + 6) = 1;
  *puVar1 = &PTR_LAB_00aa1948;
  puVar1[4] = 0x49742400;
  puVar1[5] = 0xc9742400;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(in_ECX + 4);
  *(undefined2 *)((int)puVar1 + 6) = *(undefined2 *)(in_ECX + 6);
  puVar1[2] = *(undefined4 *)(in_ECX + 8);
  puVar1[3] = *(undefined4 *)(in_ECX + 0xc);
  puVar1[4] = *(undefined4 *)(in_ECX + 0x10);
  puVar1[5] = *(undefined4 *)(in_ECX + 0x14);
  return;
}



void FUN_009283b0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x1c,0x29);
  *(undefined2 *)(puVar1 + 1) = 0x1c;
  *(undefined2 *)((int)puVar1 + 6) = 1;
  *puVar1 = &PTR_LAB_00aa1958;
  puVar1[2] = 0x49742400;
  puVar1[3] = 0x3f4ccccd;
  puVar1[5] = 0x40000000;
  puVar1[4] = 0x3f800000;
  puVar1[6] = 0x3f800000;
  *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(in_ECX + 4);
  *(undefined2 *)((int)puVar1 + 6) = *(undefined2 *)(in_ECX + 6);
  puVar1[2] = *(undefined4 *)(in_ECX + 8);
  puVar1[3] = *(undefined4 *)(in_ECX + 0xc);
  puVar1[4] = *(undefined4 *)(in_ECX + 0x10);
  puVar1[5] = *(undefined4 *)(in_ECX + 0x14);
  puVar1[6] = *(undefined4 *)(in_ECX + 0x18);
  return;
}



undefined4 FUN_00928430(undefined4 param_1)

{
  FUN_0088fc30(param_1,0x38d1b717);
  return param_1;
}



void FUN_00928480(int param_1,undefined4 param_2)

{
  int in_ECX;
  undefined1 local_40 [60];
  
  FUN_008f0f70(param_1,param_2,*(undefined4 *)(param_1 + 0x28),8);
  FUN_0088fcc0(*(undefined4 *)(param_1 + 0x1c),in_ECX + 0x10);
  FUN_0088fcc0(*(undefined4 *)(param_1 + 0x20),in_ECX + 0x20);
  FUN_0088fe00(*(undefined4 *)(param_1 + 0x1c),in_ECX + 0x30);
  FUN_008f1790(local_40,param_1,param_2);
  return;
}



void FUN_00928520(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[3];
  *in_ECX = &PTR_FUN_00aa1990;
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



void FUN_00928570(undefined4 param_1)

{
  int in_ECX;
  
  FUN_0088fcc0(param_1,in_ECX + 0x50);
  return;
}



void FUN_009285e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00aa1990;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *(undefined1 *)(in_ECX + 5) = 1;
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
  in_ECX[8] = 0x3f800000;
  in_ECX[0xd] = 0x3f800000;
  in_ECX[0x12] = 0x3f800000;
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
  in_ECX[0x18] = 0x3f800000;
  in_ECX[0x1d] = 0x3f800000;
  in_ECX[0x22] = 0x3f800000;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_00928640(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  char *pcVar5;
  int in_ECX;
  uint uVar6;
  uint unaff_EBX;
  float10 fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float afStack_174 [4];
  float afStack_164 [4];
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined1 auStack_144 [8];
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  float fStack_e4;
  float local_e0;
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
  float local_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  FUN_008f0f70(param_1,param_2,*(undefined4 *)(param_1 + 0x28),8);
  FUN_008b1f70(*(undefined4 *)(param_1 + 0x20),in_ECX + 0x60);
  FUN_008b1f70(*(undefined4 *)(param_1 + 0x1c),in_ECX + 0x20);
  fVar1 = *(float *)(param_1 + 0x28);
  FUN_0088fd10(local_50,&local_b0);
  fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0xc) + 0xc))
                             (*(undefined4 *)((int)fVar1 + 0x38),afStack_164 + 1,afStack_164 + 1);
  *(float *)((int)fVar1 + 0x38) = (float)fVar7;
  FUN_0088fcc0(auStack_5c,afStack_174 + 2);
  (**(code **)(**(int **)(in_ECX + 0xc) + 0x10))(*(undefined4 *)((int)fVar1 + 0x38),&fStack_14c);
  FUN_0088fe00(auStack_64,&fStack_154);
  fStack_138 = ABS(afStack_164[1]);
  fStack_13c = ABS(afStack_164[2]);
  bVar3 = ABS(afStack_164[0]) <= fStack_138;
  fVar8 = ABS(afStack_164[0]);
  if (!bVar3) {
    fVar8 = fStack_138;
  }
  uVar6 = (uint)!bVar3;
  if (fVar8 <= fStack_13c) {
    uVar4 = 2;
  }
  else {
    uVar4 = uVar6;
    uVar6 = 2;
  }
  fVar8 = afStack_164[bVar3];
  afStack_174[uVar6] = 0.0;
  afStack_174[bVar3] = afStack_164[uVar4];
  afStack_174[uVar4] = -fVar8;
  fVar8 = afStack_174[1] * afStack_174[1];
  fVar9 = afStack_174[2] * afStack_174[2];
  auVar10._4_4_ = fVar8;
  auVar10._0_4_ = fVar8;
  auVar10._8_4_ = fVar8;
  auVar10._12_4_ = fVar8;
  auVar11._4_12_ = auVar10._4_12_;
  auVar11._0_4_ = fVar8 + afStack_174[0] * afStack_174[0];
  auVar12._4_4_ = fVar9;
  auVar12._0_4_ = fVar9 + auVar11._0_4_;
  auVar12._8_4_ = fVar9;
  auVar12._12_4_ = fVar9;
  auVar12 = rsqrtss(auVar11,auVar12);
  fVar8 = auVar12._0_4_;
  afStack_174[3] = fVar8 * 0.5 * (3.0 - (fVar9 + auVar11._0_4_) * fVar8 * fVar8);
  afStack_174[0] = afStack_174[3] * afStack_174[0];
  afStack_174[1] = afStack_174[3] * afStack_174[1];
  afStack_174[2] = afStack_174[3] * afStack_174[2];
  afStack_174[3] = afStack_174[3] * 0.0;
  fStack_154 = afStack_164[1] * afStack_174[2] - afStack_164[2] * afStack_174[1];
  fStack_150 = afStack_164[2] * afStack_174[0] - afStack_164[0] * afStack_174[2];
  fStack_14c = afStack_164[0] * afStack_174[1] - afStack_164[1] * afStack_174[0];
  fStack_148 = afStack_164[3] * afStack_174[3] - afStack_164[3] * afStack_174[3];
  fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0xc) + 0x1c))
                             (*(undefined4 *)((int)fVar1 + 0x38));
  fVar8 = (float)-fVar7;
  fStack_b8 = fStack_c8 + fVar8 * afStack_174[3];
  fStack_b4 = fStack_c4 + fVar8 * afStack_164[0];
  local_b0 = fStack_c0 + fVar8 * afStack_164[1];
  fStack_ac = fStack_bc + fVar8 * afStack_164[2];
  if (0.0 < *(float *)(in_ECX + 0x10)) {
    fStack_118 = *(float *)(in_ECX + 0x10);
    fStack_128 = afStack_174[3];
    fStack_124 = afStack_164[0];
    fStack_120 = afStack_164[1];
    fStack_11c = afStack_164[2];
    fStack_138 = fStack_b8;
    fStack_134 = fStack_b4;
    fStack_130 = local_b0;
    fStack_12c = fStack_ac;
    fStack_114 = fVar1;
    FUN_008f15f0(&fStack_138,param_1,param_2);
  }
  fStack_98 = fStack_c8;
  fStack_94 = fStack_c4;
  fStack_90 = fStack_c0;
  fStack_8c = fStack_bc;
  uStack_88 = uStack_a8;
  uStack_84 = uStack_a4;
  uStack_80 = uStack_a0;
  uStack_7c = uStack_9c;
  fStack_74 = afStack_174[0];
  fStack_70 = afStack_174[1];
  fStack_6c = afStack_174[2];
  FUN_008f1790(&fStack_98,param_1,param_2);
  fStack_78 = afStack_164[3];
  fStack_74 = fStack_154;
  fStack_70 = fStack_150;
  fStack_6c = fStack_14c;
  FUN_008f1790(&fStack_98,param_1,param_2);
  if ('\0' < *(char *)(in_ECX + 0x14)) {
    fStack_138 = afStack_174[3];
    fStack_134 = afStack_164[0];
    fStack_130 = afStack_164[1];
    fStack_12c = afStack_164[2];
    fStack_118 = fStack_d8;
    fStack_114 = fStack_d4;
    fStack_110 = fStack_d0;
    fStack_10c = fStack_cc;
    fStack_128 = (float)uStack_e8;
    fStack_124 = fStack_e4;
    fStack_120 = local_e0;
    fStack_11c = fStack_dc;
    FUN_008f1310(&fStack_138,param_1,param_2);
    fStack_118 = (float)uStack_e8;
    fStack_114 = fStack_e4;
    fStack_110 = local_e0;
    fStack_10c = fStack_dc;
    fStack_128 = -fStack_d8;
    fStack_124 = -fStack_d4;
    fStack_120 = -fStack_d0;
    fStack_11c = -fStack_cc;
    FUN_008f1310(&fStack_138,param_1,param_2);
    if (*(char *)(in_ECX + 0x14) == '\x03') {
      (**(code **)(**(int **)(in_ECX + 0xc) + 0x20))
                (*(undefined4 *)((int)fVar1 + 0x38),afStack_164 + 3);
      FUN_0088fe00(auStack_68,afStack_164 + 3);
      fStack_138 = fStack_d8;
      fStack_134 = fStack_d4;
      fStack_130 = fStack_d0;
      fStack_12c = fStack_cc;
      fStack_118 = (float)(unaff_EBX ^ 0x80000000);
      fStack_114 = -afStack_174[0];
      fStack_110 = -afStack_174[1];
      fStack_10c = -afStack_174[2];
      fStack_128 = fStack_f8;
      fStack_124 = fStack_f4;
      fStack_120 = fStack_f0;
      fStack_11c = fStack_ec;
      FUN_008f1310(&fStack_138,param_1,param_2);
    }
  }
  pcVar5 = (char *)(**(code **)(**(int **)(in_ECX + 0xc) + 0x24))(&stack0xfffffe87);
  if (*pcVar5 == '\0') {
    fStack_13c = fStack_cc;
    fStack_138 = fStack_c8;
    fStack_134 = fStack_c4;
    fStack_130 = fStack_c0;
    fStack_12c = fStack_bc;
    fStack_128 = fStack_b8;
    fStack_124 = fStack_b4;
    fStack_120 = local_b0;
    iVar2 = **(int **)(in_ECX + 0xc);
    fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0xc) + 0x14))();
    fVar7 = (float10)(**(code **)(iVar2 + 0x1c))((float)fVar7);
    fStack_110 = (float)fVar7;
    iVar2 = **(int **)(in_ECX + 0xc);
    fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0xc) + 0x18))();
    fVar7 = (float10)(**(code **)(iVar2 + 0x1c))((float)fVar7);
    fStack_110 = (float)fVar7;
    fStack_124 = afStack_174[0];
    fStack_120 = afStack_174[1];
    fStack_11c = afStack_174[2];
    fStack_118 = afStack_174[3];
    FUN_008f1970(auStack_144,param_1,param_2);
  }
  return;
}



int FUN_00928aa0(float param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int in_ECX;
  
  if (0.0 <= param_1) {
    iVar10 = FUN_008ecb30(param_1);
  }
  else {
    iVar10 = 0;
  }
  if (iVar10 + 1 < *(int *)(in_ECX + 0x24)) {
    param_1 = param_1 - (float)iVar10;
    pfVar1 = (float *)((iVar10 + 1) * 0x10 + *(int *)(in_ECX + 0x20));
    fVar4 = pfVar1[1];
    fVar5 = pfVar1[2];
    fVar6 = pfVar1[3];
    pfVar2 = (float *)(iVar10 * 0x10 + *(int *)(in_ECX + 0x20));
    fVar7 = pfVar2[1];
    fVar8 = pfVar2[2];
    fVar9 = pfVar2[3];
    *param_2 = (1.0 - param_1) * *pfVar2 + param_1 * *pfVar1;
    param_2[1] = (1.0 - param_1) * fVar7 + param_1 * fVar4;
    param_2[2] = (1.0 - param_1) * fVar8 + param_1 * fVar5;
    param_2[3] = (1.0 - param_1) * fVar9 + param_1 * fVar6;
    return iVar10 * 0x10;
  }
  iVar3 = *(int *)(in_ECX + 0x20);
  pfVar1 = (float *)(iVar10 * 0x10 + iVar3);
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar6 = pfVar1[3];
  *param_2 = *pfVar1;
  param_2[1] = fVar4;
  param_2[2] = fVar5;
  param_2[3] = fVar6;
  return iVar10 * 0x10 + iVar3;
}



float10 FUN_00928b40(float param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int *in_ECX;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float10 fVar11;
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float *local_54;
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  iVar6 = FUN_008ecb30(param_1);
  iVar3 = in_ECX[9];
  iVar8 = iVar6 + 1;
  if (iVar3 <= iVar8) {
    iVar8 = iVar3 + -1;
    iVar6 = iVar3 + -2;
  }
  iVar4 = in_ECX[8];
  local_54 = (float *)(iVar4 + iVar6 * 0x10);
  iVar7 = iVar8 << 4;
  iVar9 = iVar8 + 1;
  pfVar10 = (float *)(iVar4 + iVar6 * 0x10);
  while( true ) {
    while( true ) {
      pfVar1 = (float *)(iVar7 + iVar4);
      fVar18 = *pfVar1 - *pfVar10;
      fVar19 = pfVar1[1] - pfVar10[1];
      fVar20 = pfVar1[2] - pfVar10[2];
      fVar26 = (fVar20 * (param_2[2] - local_54[2]) +
               fVar19 * (param_2[1] - local_54[1]) + fVar18 * (*param_2 - *local_54)) /
               (fVar20 * fVar20 + fVar19 * fVar19 + fVar18 * fVar18);
      if (0.0 <= fVar26) break;
      if (iVar6 == 0) goto LAB_00928e4e;
      local_54 = local_54 + -4;
      iVar6 = iVar6 + -1;
      pfVar10 = pfVar10 + -4;
      iVar8 = iVar8 + -1;
      iVar9 = iVar9 + -1;
      iVar7 = iVar7 + -0x10;
    }
    pfVar1 = (float *)(iVar7 + iVar4);
    fVar15 = *param_2 - *pfVar1;
    fVar16 = param_2[1] - pfVar1[1];
    fVar17 = param_2[2] - pfVar1[2];
    fVar25 = fVar20 * fVar17 + fVar19 * fVar16 + fVar18 * fVar15;
    if ((fVar25 < 0.0 != (fVar25 == 0.0)) || (iVar3 <= iVar9)) goto LAB_00928e4e;
    pfVar1 = (float *)(iVar7 + in_ECX[8]);
    pfVar2 = (float *)(iVar7 + 0x10 + in_ECX[8]);
    fVar26 = *pfVar2 - *pfVar1;
    fVar25 = pfVar2[1] - pfVar1[1];
    fVar29 = pfVar2[2] - pfVar1[2];
    if (fVar29 * fVar17 + fVar25 * fVar16 + fVar26 * fVar15 <= 0.0) break;
    local_54 = local_54 + 4;
    iVar6 = iVar6 + 1;
    pfVar10 = pfVar10 + 4;
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 1;
    iVar7 = iVar7 + 0x10;
  }
  fVar12 = fVar19 * fVar19;
  fVar13 = fVar20 * fVar20;
  auVar22._4_4_ = fVar12;
  auVar22._0_4_ = fVar12;
  auVar22._8_4_ = fVar12;
  auVar22._12_4_ = fVar12;
  auVar23._4_12_ = auVar22._4_12_;
  auVar23._0_4_ = fVar12 + fVar18 * fVar18;
  auVar24._4_4_ = fVar13;
  auVar24._0_4_ = fVar13 + auVar23._0_4_;
  auVar24._8_4_ = fVar13;
  auVar24._12_4_ = fVar13;
  auVar24 = rsqrtss(auVar23,auVar24);
  fVar21 = auVar24._0_4_;
  fVar12 = fVar25 * fVar25;
  fVar14 = fVar29 * fVar29;
  auVar27._4_4_ = fVar12;
  auVar27._0_4_ = fVar12;
  auVar27._8_4_ = fVar12;
  auVar27._12_4_ = fVar12;
  auVar28._4_12_ = auVar27._4_12_;
  auVar28._0_4_ = fVar12 + fVar26 * fVar26;
  fVar13 = fVar21 * 0.5 * (3.0 - (fVar13 + auVar23._0_4_) * fVar21 * fVar21);
  auVar5._4_4_ = fVar14;
  auVar5._0_4_ = fVar14 + auVar28._0_4_;
  auVar5._8_4_ = fVar14;
  auVar5._12_4_ = fVar14;
  auVar24 = rsqrtss(auVar28,auVar5);
  fVar12 = auVar24._0_4_;
  fVar12 = fVar12 * 0.5 * (3.0 - (fVar14 + auVar28._0_4_) * fVar12 * fVar12);
  if (-(fVar17 * fVar12 * fVar29 + fVar16 * fVar12 * fVar25 + fVar15 * fVar12 * fVar26) <=
      fVar17 * fVar13 * fVar20 + fVar16 * fVar13 * fVar19 + fVar15 * fVar13 * fVar18) {
    fVar26 = 0.01;
    iVar6 = iVar6 + 1;
    iVar8 = iVar8 + 1;
  }
  else {
    fVar26 = 0.99;
  }
LAB_00928e4e:
  fVar18 = (float)iVar6 + fVar26;
  pfVar10 = (float *)(iVar8 * 0x10 + in_ECX[8]);
  fVar19 = pfVar10[1];
  fVar20 = pfVar10[2];
  fVar15 = pfVar10[3];
  pfVar1 = (float *)(iVar6 * 0x10 + in_ECX[8]);
  fVar16 = pfVar1[1];
  fVar17 = pfVar1[2];
  fVar25 = pfVar1[3];
  *param_3 = (1.0 - fVar26) * *pfVar1 + fVar26 * *pfVar10;
  param_3[1] = (1.0 - fVar26) * fVar16 + fVar26 * fVar19;
  param_3[2] = (1.0 - fVar26) * fVar17 + fVar26 * fVar20;
  param_3[3] = (1.0 - fVar26) * fVar25 + fVar26 * fVar15;
  if ((char)in_ECX[3] != '\0') {
    fVar26 = (float)(in_ECX[9] + -1);
    if (fVar18 < 0.25) {
      fVar11 = (float10)(**(code **)(*in_ECX + 0xc))(fVar26 - (1.0 - fVar18),param_2,param_3);
      return fVar11;
    }
    if (fVar26 - 0.25 < fVar18) {
      fVar11 = (float10)(**(code **)(*in_ECX + 0xc))(1.0 - (fVar26 - fVar18),param_2,param_3);
      return fVar11;
    }
  }
  return (float10)fVar18;
}



void FUN_00928f30(float param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  int iVar9;
  int in_ECX;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int local_2c;
  
  fVar3 = *(float *)(in_ECX + 8);
  iVar9 = FUN_008ecb30(param_1);
  iVar10 = *(int *)(in_ECX + 0x24);
  local_2c = iVar9 + 1;
  if (local_2c < iVar10) {
    if (iVar9 < 0) {
      iVar9 = 0;
      local_2c = 1;
    }
  }
  else {
    local_2c = iVar10 + -1;
    iVar9 = iVar10 + -2;
  }
  iVar11 = iVar9 * 0x10;
  pfVar1 = (float *)(iVar11 + *(int *)(in_ECX + 0x20));
  fVar13 = pfVar1[3];
  iVar10 = local_2c * 0x10;
  pfVar2 = (float *)(iVar10 + *(int *)(in_ECX + 0x20));
  fVar8 = pfVar2[3];
  fVar18 = *pfVar2 - *pfVar1;
  fVar19 = pfVar2[1] - pfVar1[1];
  fVar21 = pfVar2[2] - pfVar1[2];
  fVar12 = fVar19 * fVar19;
  fVar14 = fVar21 * fVar21;
  auVar15._4_4_ = fVar12;
  auVar15._0_4_ = fVar12;
  auVar15._8_4_ = fVar12;
  auVar15._12_4_ = fVar12;
  auVar16._4_12_ = auVar15._4_12_;
  auVar16._0_4_ = fVar12 + fVar18 * fVar18;
  auVar17._4_4_ = fVar14;
  auVar17._0_4_ = fVar14 + auVar16._0_4_;
  auVar17._8_4_ = fVar14;
  auVar17._12_4_ = fVar14;
  auVar17 = rsqrtss(auVar16,auVar17);
  fVar12 = auVar17._0_4_;
  fVar12 = fVar12 * 0.5 * (3.0 - (fVar14 + auVar16._0_4_) * fVar12 * fVar12);
  *param_2 = fVar12 * fVar18;
  param_2[1] = fVar12 * fVar19;
  param_2[2] = fVar12 * fVar21;
  param_2[3] = fVar12 * (fVar8 - fVar13);
  if ((param_1 - (float)iVar9 < fVar3) && (0 < iVar9)) {
    local_2c = local_2c + -1;
    iVar11 = (iVar9 + -1) * 0x10;
    pfVar1 = (float *)(*(int *)(in_ECX + 0x20) + iVar11);
    fVar8 = pfVar1[3];
    iVar10 = local_2c * 0x10;
    pfVar2 = (float *)(*(int *)(in_ECX + 0x20) + iVar10);
    fVar12 = pfVar2[3];
    fVar18 = *pfVar2 - *pfVar1;
    fVar19 = pfVar2[1] - pfVar1[1];
    fVar22 = pfVar2[2] - pfVar1[2];
    fVar13 = fVar19 * fVar19;
    fVar14 = fVar22 * fVar22;
    auVar23._4_4_ = fVar13;
    auVar23._0_4_ = fVar13;
    auVar23._8_4_ = fVar13;
    auVar23._12_4_ = fVar13;
    auVar24._4_12_ = auVar23._4_12_;
    auVar24._0_4_ = fVar13 + fVar18 * fVar18;
    auVar4._4_4_ = fVar14;
    auVar4._0_4_ = fVar14 + auVar24._0_4_;
    auVar4._8_4_ = fVar14;
    auVar4._12_4_ = fVar14;
    auVar17 = rsqrtss(auVar24,auVar4);
    fVar21 = auVar17._0_4_;
    fVar13 = (fVar3 - (param_1 - (float)iVar9)) * (1.0 / fVar3) * 0.5;
    fVar14 = fVar21 * 0.5 * (3.0 - (fVar14 + auVar24._0_4_) * fVar21 * fVar21);
    fVar21 = (1.0 - fVar13) * *param_2 + fVar13 * fVar14 * fVar18;
    fVar20 = (1.0 - fVar13) * param_2[1] + fVar13 * fVar14 * fVar19;
    fVar22 = (1.0 - fVar13) * param_2[2] + fVar13 * fVar14 * fVar22;
    fVar18 = fVar20 * fVar20;
    fVar19 = fVar22 * fVar22;
    auVar25._4_4_ = fVar18;
    auVar25._0_4_ = fVar18;
    auVar25._8_4_ = fVar18;
    auVar25._12_4_ = fVar18;
    auVar26._4_12_ = auVar25._4_12_;
    auVar26._0_4_ = fVar18 + fVar21 * fVar21;
    auVar5._4_4_ = fVar19;
    auVar5._0_4_ = fVar19 + auVar26._0_4_;
    auVar5._8_4_ = fVar19;
    auVar5._12_4_ = fVar19;
    auVar17 = rsqrtss(auVar26,auVar5);
    fVar18 = auVar17._0_4_;
    fVar18 = fVar18 * 0.5 * (3.0 - (fVar19 + auVar26._0_4_) * fVar18 * fVar18);
    *param_2 = fVar18 * fVar21;
    param_2[1] = fVar18 * fVar20;
    param_2[2] = fVar18 * fVar22;
    param_2[3] = fVar18 * ((1.0 - fVar13) * param_2[3] + fVar13 * fVar14 * (fVar12 - fVar8));
  }
  if (((float)local_2c - param_1 < fVar3) && (local_2c < *(int *)(in_ECX + 0x24) + -1)) {
    pfVar1 = (float *)(*(int *)(in_ECX + 0x20) + 0x10 + iVar11);
    fVar13 = pfVar1[3];
    pfVar2 = (float *)(*(int *)(in_ECX + 0x20) + 0x10 + iVar10);
    fVar8 = pfVar2[3];
    fVar18 = *pfVar2 - *pfVar1;
    fVar21 = pfVar2[1] - pfVar1[1];
    fVar20 = pfVar2[2] - pfVar1[2];
    fVar12 = fVar21 * fVar21;
    fVar14 = fVar20 * fVar20;
    auVar27._4_4_ = fVar12;
    auVar27._0_4_ = fVar12;
    auVar27._8_4_ = fVar12;
    auVar27._12_4_ = fVar12;
    auVar28._4_12_ = auVar27._4_12_;
    auVar28._0_4_ = fVar12 + fVar18 * fVar18;
    auVar6._4_4_ = fVar14;
    auVar6._0_4_ = fVar14 + auVar28._0_4_;
    auVar6._8_4_ = fVar14;
    auVar6._12_4_ = fVar14;
    auVar17 = rsqrtss(auVar28,auVar6);
    fVar12 = auVar17._0_4_;
    fVar3 = (fVar3 - ((float)local_2c - param_1)) * (1.0 / fVar3) * 0.5;
    fVar12 = fVar12 * 0.5 * (3.0 - (fVar14 + auVar28._0_4_) * fVar12 * fVar12);
    fVar19 = (1.0 - fVar3) * *param_2 + fVar3 * fVar12 * fVar18;
    fVar21 = (1.0 - fVar3) * param_2[1] + fVar3 * fVar12 * fVar21;
    fVar20 = (1.0 - fVar3) * param_2[2] + fVar3 * fVar12 * fVar20;
    fVar14 = fVar21 * fVar21;
    fVar18 = fVar20 * fVar20;
    auVar29._4_4_ = fVar14;
    auVar29._0_4_ = fVar14;
    auVar29._8_4_ = fVar14;
    auVar29._12_4_ = fVar14;
    auVar30._4_12_ = auVar29._4_12_;
    auVar30._0_4_ = fVar14 + fVar19 * fVar19;
    auVar7._4_4_ = fVar18;
    auVar7._0_4_ = fVar18 + auVar30._0_4_;
    auVar7._8_4_ = fVar18;
    auVar7._12_4_ = fVar18;
    auVar17 = rsqrtss(auVar30,auVar7);
    fVar14 = auVar17._0_4_;
    fVar14 = fVar14 * 0.5 * (3.0 - (fVar18 + auVar30._0_4_) * fVar14 * fVar14);
    *param_2 = fVar14 * fVar19;
    param_2[1] = fVar14 * fVar21;
    param_2[2] = fVar14 * fVar20;
    param_2[3] = fVar14 * ((1.0 - fVar3) * param_2[3] + fVar3 * fVar12 * (fVar8 - fVar13));
  }
  return;
}



float10 FUN_00929290(float param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 local_4;
  
  local_4 = FUN_008ecb30(param_1);
  iVar2 = *(int *)(in_ECX + 0x24) + -1;
  if (iVar2 <= local_4) {
    iVar1 = iVar2 * 4;
    return ((float10)param_1 - (float10)iVar2) *
           ((float10)*(float *)(*(int *)(in_ECX + 0x2c) + iVar1) -
           (float10)*(float *)(*(int *)(in_ECX + 0x2c) + iVar1 + -4)) +
           (float10)*(float *)(*(int *)(in_ECX + 0x2c) + iVar1);
  }
  if (local_4 < 0) {
    local_4 = 0;
  }
  iVar2 = *(int *)(in_ECX + 0x2c);
  iVar1 = local_4 * 4;
  return ((float10)param_1 - (float10)local_4) *
         ((float10)*(float *)(iVar2 + 4 + iVar1) - (float10)*(float *)(iVar2 + iVar1)) +
         (float10)*(float *)(iVar2 + iVar1);
}



void FUN_00929310(undefined4 param_1,float *param_2)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float afStack_28 [9];
  
  (**(code **)(*in_ECX + 0x10))(param_1,afStack_28 + 2);
  if (0.98 <= afStack_28[2] * DAT_00b2f0a8 +
              afStack_28[1] * DAT_00b2f0a4 + afStack_28[0] * DAT_00b2f0a0) {
    bVar2 = ABS(afStack_28[0]) <= ABS(afStack_28[1]);
    fVar1 = ABS(afStack_28[0]);
    if (!bVar2) {
      fVar1 = ABS(afStack_28[1]);
    }
    uVar5 = (uint)!bVar2;
    uVar6 = 2;
    if (ABS(afStack_28[2]) < fVar1) {
      uVar5 = 2;
      uVar6 = (uint)!bVar2;
    }
    param_2[uVar5] = 0.0;
    fVar1 = afStack_28[uVar6];
    param_2[3] = 0.0;
    param_2[bVar2] = fVar1;
    param_2[uVar6] = -afStack_28[bVar2];
  }
  else {
    fVar1 = (float)in_ECX[4];
    fVar3 = (float)in_ECX[5];
    fVar4 = (float)in_ECX[6];
    fVar7 = (float)in_ECX[7];
    *param_2 = afStack_28[1] * fVar4 - afStack_28[2] * fVar3;
    param_2[1] = afStack_28[2] * fVar1 - afStack_28[0] * fVar4;
    param_2[2] = afStack_28[0] * fVar3 - afStack_28[1] * fVar1;
    param_2[3] = afStack_28[3] * fVar7 - afStack_28[3] * fVar7;
  }
  fVar1 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar7 = fVar3 * fVar3;
  fVar8 = fVar4 * fVar4;
  auVar9._4_4_ = fVar7;
  auVar9._0_4_ = fVar7;
  auVar9._8_4_ = fVar7;
  auVar9._12_4_ = fVar7;
  auVar10._4_12_ = auVar9._4_12_;
  auVar10._0_4_ = fVar7 + fVar1 * fVar1;
  auVar11._4_4_ = fVar8;
  auVar11._0_4_ = fVar8 + auVar10._0_4_;
  auVar11._8_4_ = fVar8;
  auVar11._12_4_ = fVar8;
  auVar11 = rsqrtss(auVar10,auVar11);
  fVar7 = auVar11._0_4_;
  fVar7 = fVar7 * 0.5 * (3.0 - (fVar8 + auVar10._0_4_) * fVar7 * fVar7);
  *param_2 = fVar7 * fVar1;
  param_2[1] = fVar7 * fVar3;
  param_2[2] = fVar7 * fVar4;
  param_2[3] = fVar7 * param_2[3];
  return;
}



void FUN_009294b0(byte param_1)

{
  FUN_009294e0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_009294e0(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[0xd]) {
    FUN_008a75d0(in_ECX[0xb],in_ECX[0xd] << 2,0x14);
  }
  if (-1 < (int)in_ECX[10]) {
    FUN_008a75d0(in_ECX[8],in_ECX[10] << 4,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00929560(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  int iVar8;
  
  uVar5 = param_1[2] & 0x3fffffff;
  if ((int)uVar5 < *(int *)(in_ECX + 0x24)) {
    if (-1 < param_1[2]) {
      FUN_008a75d0(*param_1,uVar5 << 4,0x14);
    }
    iVar6 = FUN_008a7560(*(int *)(in_ECX + 0x24) << 4,0x14);
    *param_1 = iVar6;
    param_1[2] = param_1[2] & 0x40000000U | *(uint *)(in_ECX + 0x24);
  }
  iVar6 = *(int *)(in_ECX + 0x24);
  puVar7 = (undefined4 *)*param_1;
  param_1[1] = iVar6;
  if (0 < iVar6) {
    iVar8 = *(int *)(in_ECX + 0x20) - (int)puVar7;
    do {
      puVar1 = (undefined4 *)(iVar8 + (int)puVar7);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7 = puVar7 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



void FUN_009296c0(undefined4 param_1,float param_2,undefined1 (*param_3) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  int iVar4;
  undefined1 auVar5 [16];
  int local_24;
  undefined1 local_20 [16];
  
  *(undefined4 *)*param_3 = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 4) = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 8) = 0x7f7fffff;
  iVar4 = 0;
  *(undefined4 *)(*param_3 + 0xc) = 0;
  *(undefined4 *)param_3[1] = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 4) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 8) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 0xc) = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    local_24 = 0;
    do {
      FUN_0088fcc0(param_1,*(int *)(in_ECX + 0x10) + local_24);
      auVar5 = minps(*param_3,local_20);
      *param_3 = auVar5;
      auVar5 = maxps(param_3[1],local_20);
      param_3[1] = auVar5;
      iVar4 = iVar4 + 1;
      local_24 = local_24 + 0x10;
    } while (iVar4 < *(int *)(in_ECX + 0x14));
  }
  fVar1 = *(float *)(*param_3 + 4);
  fVar2 = *(float *)(*param_3 + 8);
  fVar3 = *(float *)(*param_3 + 0xc);
  param_2 = param_2 + *(float *)(in_ECX + 0x34);
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



void FUN_00929840(byte param_1)

{
  FUN_00929870();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00929870(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[0xc]) {
    FUN_008a75d0(in_ECX[10],in_ECX[0xc] & 0x3fffffff,0x14);
  }
  if (-1 < (int)in_ECX[9]) {
    FUN_008a75d0(in_ECX[7],(in_ECX[9] & 0x3fffffff) * 0xc,0x14);
  }
  if (-1 < (int)in_ECX[6]) {
    FUN_008a75d0(in_ECX[4],in_ECX[6] << 4,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_009299b0(byte param_1)

{
  FUN_009299e0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_009299e0(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],in_ECX[5] << 5,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00929a30(float *param_1,undefined4 param_2,undefined1 (*param_3) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
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
  int iVar23;
  undefined1 (*pauVar24) [16];
  int in_ECX;
  float *pfVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 (*local_220) [16];
  int local_21c;
  int local_218;
  undefined1 local_210 [524];
  
  iVar3 = *(int *)(in_ECX + 0x10);
  local_220 = (undefined1 (*) [16])local_210;
  local_21c = 0;
  local_218 = -0x7ffffff0;
  if (0x10 < iVar3) {
    iVar23 = 0x20;
    if (0x1f < iVar3) {
      iVar23 = iVar3;
    }
    FUN_008a6e40(&local_220,iVar23,0x20);
  }
  pfVar25 = *(float **)(in_ECX + 0xc);
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = param_1[3];
  fVar8 = param_1[4];
  fVar9 = param_1[5];
  fVar10 = param_1[6];
  fVar11 = param_1[7];
  fVar12 = param_1[8];
  fVar13 = param_1[9];
  fVar14 = param_1[10];
  fVar15 = param_1[0xb];
  fVar16 = param_1[0xc];
  fVar17 = param_1[0xd];
  fVar18 = param_1[0xe];
  fVar19 = param_1[0xf];
  iVar23 = *(int *)(in_ECX + 0x10) << 1;
  pauVar24 = local_220;
  do {
    fVar20 = *pfVar25;
    fVar21 = pfVar25[1];
    fVar22 = pfVar25[2];
    *(float *)*pauVar24 = fVar4 * fVar20 + fVar8 * fVar21 + fVar12 * fVar22 + fVar16;
    *(float *)(*pauVar24 + 4) = fVar5 * fVar20 + fVar9 * fVar21 + fVar13 * fVar22 + fVar17;
    *(float *)(*pauVar24 + 8) = fVar6 * fVar20 + fVar10 * fVar21 + fVar14 * fVar22 + fVar18;
    *(float *)(*pauVar24 + 0xc) = fVar7 * fVar20 + fVar11 * fVar21 + fVar15 * fVar22 + fVar19;
    pauVar24 = pauVar24 + 1;
    pfVar25 = pfVar25 + 4;
    iVar23 = iVar23 + -1;
  } while (0 < iVar23);
  auVar26._8_4_ = 0x7f7fffff;
  auVar26._0_8_ = 0x7f7fffff7f7fffff;
  auVar26._12_4_ = 0x7f7fffff;
  auVar27._8_4_ = 0xff7fffff;
  auVar27._0_8_ = 0xff7fffffff7fffff;
  auVar27._12_4_ = 0xff7fffff;
  pauVar24 = local_220;
  iVar23 = iVar3;
  if (0 < iVar3) {
    do {
      auVar2 = *pauVar24;
      pauVar1 = pauVar24 + 1;
      pauVar24 = pauVar24 + 2;
      iVar23 = iVar23 + -1;
      auVar26 = minps(auVar26,*pauVar1);
      auVar27 = maxps(auVar27,*pauVar1);
      auVar26 = minps(auVar26,auVar2);
      auVar27 = maxps(auVar27,auVar2);
    } while (iVar23 != 0);
  }
  *param_3 = auVar26;
  param_3[1] = auVar27;
  if (-1 < local_218) {
    local_21c = iVar3;
    FUN_008a75d0(local_220,local_218 << 5,0x14);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00929b90(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined1 auStack_229 [9];
  undefined1 local_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  iVar1 = (**(code **)(*in_ECX + 0x28))(0,local_220);
  pcVar2 = (char *)FUN_00950b10(auStack_229,iVar1 + 0x10,iVar1 + 0x20,iVar1 + 0x30,DAT_00b3060c);
  if (*pcVar2 == '\x01') {
    return 0;
  }
  uVar3 = (**(code **)(*in_ECX + 0x24))(0);
  return uVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_00929c10(uint param_1)

{
  int iVar1;
  char *pcVar2;
  int *in_ECX;
  uint uVar3;
  uint uVar4;
  uint local_22c;
  undefined1 uStack_225;
  int local_224;
  undefined1 local_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  uVar3 = param_1 >> (0x20 - (byte)in_ECX[8] & 0x1f);
  local_22c = 0xffffffffU >> ((byte)in_ECX[8] & 0x1f) & param_1;
  local_224 = uVar3 * 0x30;
  do {
    local_22c = local_22c + 1;
    if (*(int *)(in_ECX[9] + 0x18 + local_224) <= (int)local_22c) {
      uVar3 = uVar3 + 1;
      local_224 = local_224 + 0x30;
      if ((uint)in_ECX[10] <= uVar3) {
        return 0xffffffff;
      }
      local_22c = 0;
    }
    uVar4 = uVar3 << (0x20U - (char)in_ECX[8] & 0x1f) | local_22c;
    iVar1 = (**(code **)(*in_ECX + 0x28))(uVar4,local_220);
    pcVar2 = (char *)FUN_00950b10(&uStack_225,iVar1 + 0x10,iVar1 + 0x20,iVar1 + 0x30,DAT_00b3060c);
  } while (*pcVar2 != '\x01');
  return uVar4;
}



void FUN_00929d70(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_009156c0();
  *in_ECX = &PTR_FUN_00aa1a84;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0x80000000;
  in_ECX[0xc] = param_1;
  in_ECX[4] = 0x3f800000;
  in_ECX[5] = 0x3f800000;
  in_ECX[6] = 0x3f800000;
  in_ECX[7] = 0x3f800000;
  in_ECX[8] = param_2;
  return;
}



void FUN_00929dd0(int param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  int iVar2;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00aa1a84;
  if ((param_1 != 0) && (iVar2 = 0, 0 < (int)in_ECX[10])) {
    iVar1 = 0;
    do {
      if (*(char *)(iVar1 + 0x11 + in_ECX[9]) == '\0') {
        *(undefined1 *)(iVar1 + 0x11 + in_ECX[9]) = 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x30;
    } while (iVar2 < (int)in_ECX[10]);
  }
  return;
}



void FUN_00929e20(uint param_1,undefined4 *param_2)

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
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  byte bVar24;
  int in_ECX;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint *puVar28;
  uint uVar29;
  float *pfVar30;
  
  bVar24 = (byte)*(undefined4 *)(in_ECX + 0x20);
  iVar26 = *(int *)(in_ECX + 0x24);
  iVar22 = (param_1 >> (0x20 - bVar24 & 0x1f)) * 0x30;
  piVar23 = (int *)(iVar22 + iVar26);
  puVar28 = (uint *)(piVar23[5] * (0xffffffffU >> (bVar24 & 0x1f) & param_1) +
                    *(int *)(iVar22 + 0xc + iVar26));
  iVar20 = piVar23[1];
  iVar21 = *piVar23;
  if (*(char *)(iVar22 + 0x10 + iVar26) == '\x01') {
    uVar25 = (uint)(ushort)*puVar28;
    uVar27 = (uint)*(ushort *)((int)puVar28 + 2);
    uVar29 = (uint)(ushort)puVar28[1];
  }
  else {
    uVar25 = *puVar28;
    uVar27 = puVar28[1];
    uVar29 = puVar28[2];
  }
  iVar26 = uVar25 * iVar20;
  iVar22 = uVar27 * iVar20;
  fVar1 = *(float *)(iVar26 + iVar21);
  fVar2 = *(float *)(in_ECX + 0x10);
  fVar3 = *(float *)(iVar26 + 4 + iVar21);
  fVar4 = *(float *)(in_ECX + 0x14);
  fVar5 = *(float *)(iVar26 + 8 + iVar21);
  fVar6 = *(float *)(in_ECX + 0x18);
  fVar7 = *(float *)(in_ECX + 0x10);
  fVar8 = *(float *)(iVar22 + iVar21);
  fVar9 = *(float *)(iVar22 + 4 + iVar21);
  fVar10 = *(float *)(in_ECX + 0x14);
  fVar11 = *(float *)(iVar22 + 8 + iVar21);
  fVar12 = *(float *)(in_ECX + 0x18);
  pfVar30 = (float *)(uVar29 * iVar20 + iVar21);
  fVar13 = *(float *)(in_ECX + 0x10);
  fVar14 = *pfVar30;
  fVar15 = pfVar30[1];
  fVar16 = *(float *)(in_ECX + 0x14);
  fVar17 = pfVar30[2];
  fVar18 = *(float *)(in_ECX + 0x18);
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    uVar19 = *(undefined4 *)(in_ECX + 0x30);
    *(undefined2 *)((int)param_2 + 6) = 1;
    param_2[3] = uVar19;
    param_2[2] = 0;
    *param_2 = &PTR_FUN_00a99144;
  }
  param_2[4] = fVar1 * fVar2;
  param_2[5] = fVar3 * fVar4;
  param_2[6] = fVar5 * fVar6;
  param_2[7] = 0;
  param_2[8] = fVar7 * fVar8;
  param_2[9] = fVar9 * fVar10;
  param_2[10] = fVar11 * fVar12;
  param_2[0xb] = 0;
  param_2[0xc] = fVar13 * fVar14;
  param_2[0xd] = fVar15 * fVar16;
  param_2[0xe] = fVar17 * fVar18;
  param_2[0xf] = 0;
  return;
}



void FUN_00929f50(undefined4 param_1,float param_2,undefined1 (*param_3) [16])

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  uint uVar7;
  float *pfVar8;
  int in_ECX;
  uint *puVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  undefined1 auVar14 [16];
  int local_80;
  int local_7c;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  *(undefined4 *)*param_3 = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 4) = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 8) = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 0xc) = 0;
  *(undefined4 *)param_3[1] = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 4) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 8) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 0xc) = 0;
  local_74 = 0;
  if (0 < *(int *)(in_ECX + 0x28)) {
    local_7c = 0;
    do {
      piVar6 = (int *)(*(int *)(in_ECX + 0x24) + local_7c);
      local_80 = 0;
      if (0 < *(int *)(*(int *)(in_ECX + 0x24) + 0x18 + local_7c)) {
        do {
          puVar9 = (uint *)(piVar6[5] * local_80 + piVar6[3]);
          iVar1 = *piVar6;
          iVar2 = piVar6[1];
          if ((char)piVar6[4] == '\x01') {
            uVar7 = (uint)(ushort)*puVar9;
            uVar10 = (uint)*(ushort *)((int)puVar9 + 2);
            uVar12 = (uint)(ushort)puVar9[1];
          }
          else {
            uVar7 = *puVar9;
            uVar10 = puVar9[1];
            uVar12 = puVar9[2];
          }
          pfVar11 = (float *)(uVar10 * iVar2 + iVar1);
          pfVar8 = (float *)(uVar7 * iVar2 + iVar1);
          pfVar13 = (float *)(uVar12 * iVar2 + iVar1);
          local_64 = 0;
          local_70 = *pfVar8 * *(float *)(in_ECX + 0x10);
          local_6c = *(float *)(in_ECX + 0x14) * pfVar8[1];
          local_68 = *(float *)(in_ECX + 0x18) * pfVar8[2];
          FUN_0088fcc0(param_1,&local_70);
          auVar14 = minps(*param_3,local_40);
          *param_3 = auVar14;
          auVar14 = maxps(param_3[1],local_40);
          param_3[1] = auVar14;
          local_60 = *pfVar11 * *(float *)(in_ECX + 0x10);
          local_54 = 0;
          local_5c = *(float *)(in_ECX + 0x14) * pfVar11[1];
          local_58 = *(float *)(in_ECX + 0x18) * pfVar11[2];
          FUN_0088fcc0(param_1,&local_60);
          auVar14 = minps(*param_3,local_30);
          *param_3 = auVar14;
          auVar14 = maxps(param_3[1],local_30);
          param_3[1] = auVar14;
          local_50 = *pfVar13 * *(float *)(in_ECX + 0x10);
          local_44 = 0;
          local_4c = pfVar13[1] * *(float *)(in_ECX + 0x14);
          local_48 = pfVar13[2] * *(float *)(in_ECX + 0x18);
          FUN_0088fcc0(param_1,&local_50);
          auVar14 = minps(*param_3,local_20);
          *param_3 = auVar14;
          auVar14 = maxps(param_3[1],local_20);
          param_3[1] = auVar14;
          local_80 = local_80 + 1;
        } while (local_80 < piVar6[6]);
      }
      local_74 = local_74 + 1;
      local_7c = local_7c + 0x30;
    } while (local_74 < *(int *)(in_ECX + 0x28));
  }
  fVar3 = *(float *)(*param_3 + 4);
  fVar4 = *(float *)(*param_3 + 8);
  fVar5 = *(float *)(*param_3 + 0xc);
  param_2 = param_2 + *(float *)(in_ECX + 0x30);
  *(float *)*param_3 = *(float *)*param_3 - param_2;
  *(float *)(*param_3 + 4) = fVar3 - param_2;
  *(float *)(*param_3 + 8) = fVar4 - param_2;
  *(float *)(*param_3 + 0xc) = fVar5 - param_2;
  fVar3 = *(float *)(param_3[1] + 4);
  fVar4 = *(float *)(param_3[1] + 8);
  fVar5 = *(float *)(param_3[1] + 0xc);
  *(float *)param_3[1] = *(float *)param_3[1] + param_2;
  *(float *)(param_3[1] + 4) = fVar3 + param_2;
  *(float *)(param_3[1] + 8) = fVar4 + param_2;
  *(float *)(param_3[1] + 0xc) = fVar5 + param_2;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0092a260(void)

{
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  
  FUN_00929dd0(0);
  local_64 = CONCAT13(local_5d,CONCAT12(local_5e,CONCAT11(local_5f,local_60)));
  return local_64;
}



void FUN_0092a2b0(byte param_1)

{
  FUN_0090c880();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0092a2e0(undefined1 *param_1,uint param_2,uint param_3)

{
  int in_ECX;
  
  if ((((param_2 ^ param_3) & 0xffff0000) != 0) || ((param_2 & 0xffff0000) == 0)) {
    *param_1 = (*(uint *)(in_ECX + 0x1c + (param_2 & 0x1f) * 4) & 1 << ((byte)param_3 & 0x1f)) != 0;
    return;
  }
  if ((((param_3 >> 5 ^ param_2) & 0x3e0) != 0) && (((param_2 >> 5 ^ param_3) & 0x3e0) != 0)) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}



void FUN_0092a590(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ushort *puVar11;
  int in_ECX;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  
  piVar2 = *(int **)(in_ECX + 0x24);
  iVar3 = *piVar2;
  puVar11 = (ushort *)(piVar2[5] * param_1 + piVar2[3]);
  iVar4 = piVar2[1];
  pfVar12 = (float *)((uint)*puVar11 * iVar4 + iVar3);
  pfVar13 = (float *)((uint)*(ushort *)(piVar2[5] * param_1 + 2 + piVar2[3]) * iVar4 + iVar3);
  pfVar14 = (float *)((uint)puVar11[2] * iVar4 + iVar3);
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(in_ECX + 0x30);
    *(undefined2 *)((int)param_2 + 6) = 1;
    param_2[3] = uVar1;
    param_2[2] = 0;
    *param_2 = &PTR_FUN_00a99144;
  }
  fVar5 = *(float *)(in_ECX + 0x14);
  fVar6 = *(float *)(in_ECX + 0x18);
  fVar7 = *(float *)(in_ECX + 0x1c);
  fVar8 = pfVar12[1];
  fVar9 = pfVar12[2];
  fVar10 = pfVar12[3];
  param_2[4] = *pfVar12 * *(float *)(in_ECX + 0x10);
  param_2[5] = fVar8 * fVar5;
  param_2[6] = fVar9 * fVar6;
  param_2[7] = fVar10 * fVar7;
  fVar5 = *(float *)(in_ECX + 0x14);
  fVar6 = *(float *)(in_ECX + 0x18);
  fVar7 = *(float *)(in_ECX + 0x1c);
  fVar8 = pfVar13[1];
  fVar9 = pfVar13[2];
  fVar10 = pfVar13[3];
  param_2[8] = *pfVar13 * *(float *)(in_ECX + 0x10);
  param_2[9] = fVar8 * fVar5;
  param_2[10] = fVar9 * fVar6;
  param_2[0xb] = fVar10 * fVar7;
  fVar5 = pfVar14[1];
  fVar6 = pfVar14[2];
  fVar7 = pfVar14[3];
  fVar8 = *(float *)(in_ECX + 0x14);
  fVar9 = *(float *)(in_ECX + 0x18);
  fVar10 = *(float *)(in_ECX + 0x1c);
  param_2[0xc] = *pfVar14 * *(float *)(in_ECX + 0x10);
  param_2[0xd] = fVar5 * fVar8;
  param_2[0xe] = fVar6 * fVar9;
  param_2[0xf] = fVar7 * fVar10;
  return;
}



void FUN_0092a630(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_00929dd0(1);
    *param_1 = &PTR_FUN_00aa1af4;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined ** FUN_0092a650(void)

{
  FUN_00929dd0(0);
  return &PTR_FUN_00aa1af4;
}



void FUN_0092a6d0(int *param_1)

{
  int in_ECX;
  
  (**(code **)*param_1)("CvxTranslate",1);
  (**(code **)(*param_1 + 8))("Child",1,*(undefined4 *)(in_ECX + 0x10));
  (**(code **)(*param_1 + 0x14))();
  return;
}



float10 FUN_0092a730(float *param_1)

{
  int in_ECX;
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(**(int **)(in_ECX + 0x10) + 0x10))(param_1);
  return fVar1 + (float10)(param_1[2] * *(float *)(in_ECX + 0x28) +
                          param_1[1] * *(float *)(in_ECX + 0x24) +
                          *param_1 * *(float *)(in_ECX + 0x20));
}



void FUN_0092a780(undefined1 *param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int in_ECX;
  int iVar4;
  undefined4 unaff_EBX;
  float *pfVar5;
  float *pfVar6;
  int unaff_FS_OFFSET;
  undefined1 uVar7;
  undefined1 local_49;
  undefined4 local_48;
  float local_40 [4];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar4 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar2 = "TtrcConvTransl";
    uVar3 = rdtsc();
    local_48 = (undefined4)uVar3;
    puVar2[1] = local_48;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar2 + 3;
  }
  local_40[0] = *param_2;
  local_40[1] = param_2[1];
  local_40[2] = param_2[2];
  local_40[3] = param_2[3];
  pfVar5 = param_2;
  pfVar6 = local_40;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 1;
  }
  local_40[0] = local_40[0] - *(float *)(in_ECX + 0x20);
  local_40[1] = local_40[1] - *(float *)(in_ECX + 0x24);
  local_40[2] = local_40[2] - *(float *)(in_ECX + 0x28);
  local_40[3] = local_40[3] - *(float *)(in_ECX + 0x2c);
  local_30 = param_2[4] - *(float *)(in_ECX + 0x20);
  fStack_2c = param_2[5] - *(float *)(in_ECX + 0x24);
  fStack_28 = param_2[6] - *(float *)(in_ECX + 0x28);
  fStack_24 = param_2[7] - *(float *)(in_ECX + 0x2c);
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x14))(&local_49,local_40,param_3);
  iVar1 = *(int *)(iVar1 + _tls_index * 4);
  uVar7 = (undefined1)((uint)unaff_EBX >> 0x18);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
    *param_1 = uVar7;
    return;
  }
  *param_1 = uVar7;
  return;
}



void FUN_0092a880(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x24))(param_1,param_2);
  fVar1 = *(float *)(in_ECX + 0x24);
  fVar2 = *(float *)(in_ECX + 0x28);
  fVar3 = *(float *)(in_ECX + 0x2c);
  *param_2 = *param_2 + *(float *)(in_ECX + 0x20);
  param_2[1] = param_2[1] + fVar1;
  param_2[2] = param_2[2] + fVar2;
  param_2[3] = param_2[3] + fVar3;
  return;
}



void FUN_0092a8c0(undefined4 param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x28))(param_1,param_2,param_3);
  if (0 < param_2) {
    do {
      fVar1 = *(float *)(in_ECX + 0x24);
      fVar2 = *(float *)(in_ECX + 0x28);
      fVar3 = *(float *)(in_ECX + 0x2c);
      *param_3 = *param_3 + *(float *)(in_ECX + 0x20);
      param_3[1] = param_3[1] + fVar1;
      param_3[2] = param_3[2] + fVar2;
      param_3[3] = param_3[3] + fVar3;
      param_3 = param_3 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



void FUN_0092a910(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x2c))(param_1);
  fVar1 = *(float *)(in_ECX + 0x24);
  fVar2 = *(float *)(in_ECX + 0x28);
  fVar3 = *(float *)(in_ECX + 0x2c);
  *param_1 = *param_1 + *(float *)(in_ECX + 0x20);
  param_1[1] = param_1[1] + fVar1;
  param_1[2] = param_1[2] + fVar2;
  param_1[3] = param_1[3] + fVar3;
  return;
}



float * FUN_0092a940(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int in_ECX;
  float *pfVar8;
  int iStack_20;
  undefined1 auStack_1c [24];
  
  pfVar7 = (float *)(**(code **)(**(int **)(in_ECX + 0x10) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x1c))(auStack_1c);
  pfVar8 = param_1;
  if (0 < iStack_20) {
    do {
      fVar1 = pfVar7[1];
      fVar2 = pfVar7[2];
      fVar3 = pfVar7[3];
      fVar4 = *(float *)(in_ECX + 0x24);
      fVar5 = *(float *)(in_ECX + 0x28);
      fVar6 = *(float *)(in_ECX + 0x2c);
      *pfVar8 = *pfVar7 + *(float *)(in_ECX + 0x20);
      pfVar8[1] = fVar1 + fVar4;
      pfVar8[2] = fVar2 + fVar5;
      pfVar8[3] = fVar3 + fVar6;
      pfVar7 = pfVar7 + 4;
      pfVar8 = pfVar8 + 4;
      iStack_20 = iStack_20 + -1;
    } while (iStack_20 != 0);
  }
  return param_1;
}



void FUN_0092a9a0(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[4];
  *in_ECX = &PTR_FUN_00aa1b38;
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



void FUN_0092a9f0(float *param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(param_1,param_2,param_3);
  fVar6 = *(float *)(in_ECX + 0x20);
  fVar1 = *(float *)(in_ECX + 0x24);
  fVar2 = *(float *)(in_ECX + 0x28);
  fVar3 = *param_1 * fVar6 + param_1[4] * fVar1 + param_1[8] * fVar2;
  fVar4 = param_1[1] * fVar6 + param_1[5] * fVar1 + param_1[9] * fVar2;
  fVar5 = param_1[2] * fVar6 + param_1[6] * fVar1 + param_1[10] * fVar2;
  fVar6 = param_1[3] * fVar6 + param_1[7] * fVar1 + param_1[0xb] * fVar2;
  *param_3 = *param_3 + fVar3;
  param_3[1] = param_3[1] + fVar4;
  param_3[2] = param_3[2] + fVar5;
  param_3[3] = param_3[3] + fVar6;
  param_3[4] = param_3[4] + fVar3;
  param_3[5] = param_3[5] + fVar4;
  param_3[6] = param_3[6] + fVar5;
  param_3[7] = param_3[7] + fVar6;
  return;
}



void FUN_0092aa70(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_009156c0();
    *param_1 = &PTR_FUN_00aa1b70;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined ** FUN_0092aa90(void)

{
  FUN_009156c0();
  return &PTR_FUN_00aa1b70;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0092ab00(uint param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int in_ECX;
  undefined4 *puVar10;
  uint local_234;
  undefined4 *local_230;
  int local_228;
  undefined1 local_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_00950c30(*(undefined4 *)(in_ECX + 0x18));
  }
  *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(in_ECX + 0x14);
  iVar9 = *(int *)(in_ECX + 0x10);
  if (param_1 < *(uint *)(iVar9 + 0x18)) {
    iVar3 = *(int *)(*(int *)(iVar9 + 0x14) + param_1 * 4);
    iVar4 = *(int *)(*(int *)(iVar9 + 8) + iVar3 * 4);
    piVar1 = (int *)(*(int *)(iVar9 + 8) + iVar3 * 4);
    *(int **)(iVar8 + 0x1c) = piVar1 + 1;
    local_230 = (undefined4 *)(param_2 + 0x33U & 0xfffffff0);
    *(undefined4 **)(iVar8 + 0x10) = local_230;
    *(int *)(iVar8 + 0x20) = iVar4;
    *(undefined4 *)(iVar8 + 0x14) = 0;
    local_228 = 0;
    if (0 < iVar4) {
      local_234 = 2;
      do {
        iVar9 = (**(code **)(**(int **)(in_ECX + 0x14) + 0x28))
                          (*(undefined4 *)(*(int *)(iVar8 + 0x1c) + local_228 * 4),local_220);
        if ((piVar1[*piVar1 + (local_234 - 2) / 0x1f + 1] &
            1 << (sbyte)((ulonglong)(local_234 - 2) % 0x1f)) != 0) {
          uVar5 = *(undefined4 *)(iVar9 + 0x14);
          uVar6 = *(undefined4 *)(iVar9 + 0x18);
          uVar7 = *(undefined4 *)(iVar9 + 0x1c);
          *local_230 = *(undefined4 *)(iVar9 + 0x10);
          local_230[1] = uVar5;
          local_230[2] = uVar6;
          local_230[3] = uVar7;
          local_230 = local_230 + 4;
          *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + 1;
        }
        if ((piVar1[*piVar1 + (local_234 - 1) / 0x1f + 1] &
            1 << (sbyte)((ulonglong)(local_234 - 1) % 0x1f)) != 0) {
          uVar5 = *(undefined4 *)(iVar9 + 0x24);
          uVar6 = *(undefined4 *)(iVar9 + 0x28);
          uVar7 = *(undefined4 *)(iVar9 + 0x2c);
          *local_230 = *(undefined4 *)(iVar9 + 0x20);
          local_230[1] = uVar5;
          local_230[2] = uVar6;
          local_230[3] = uVar7;
          local_230 = local_230 + 4;
          *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + 1;
        }
        if ((piVar1[*piVar1 + local_234 / 0x1f + 1] & 1 << (sbyte)((ulonglong)local_234 % 0x1f)) !=
            0) {
          uVar5 = *(undefined4 *)(iVar9 + 0x34);
          uVar6 = *(undefined4 *)(iVar9 + 0x38);
          uVar7 = *(undefined4 *)(iVar9 + 0x3c);
          *local_230 = *(undefined4 *)(iVar9 + 0x30);
          local_230[1] = uVar5;
          local_230[2] = uVar6;
          local_230[3] = uVar7;
          local_230 = local_230 + 4;
          *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + 1;
        }
        local_228 = local_228 + 1;
        local_234 = local_234 + 3;
      } while (local_228 < *(int *)(iVar8 + 0x20));
      return iVar8;
    }
  }
  else {
    *(undefined4 *)(iVar8 + 0x20) = 1;
    puVar2 = (undefined4 *)
             (*(int *)(*(int *)(in_ECX + 0x10) + 0x20) +
             (param_1 - *(int *)(*(int *)(in_ECX + 0x10) + 0x18)) * 4);
    *(undefined4 **)(iVar8 + 0x1c) = puVar2;
    puVar10 = (undefined4 *)(param_2 + 0x33U & 0xfffffff0);
    *(undefined4 **)(iVar8 + 0x10) = puVar10;
    *(undefined4 *)(iVar8 + 0x14) = 3;
    iVar9 = (**(code **)(**(int **)(in_ECX + 0x14) + 0x28))(*puVar2,local_220);
    uVar5 = *(undefined4 *)(iVar9 + 0x14);
    uVar6 = *(undefined4 *)(iVar9 + 0x18);
    uVar7 = *(undefined4 *)(iVar9 + 0x1c);
    *puVar10 = *(undefined4 *)(iVar9 + 0x10);
    puVar10[1] = uVar5;
    puVar10[2] = uVar6;
    puVar10[3] = uVar7;
    uVar5 = *(undefined4 *)(iVar9 + 0x24);
    uVar6 = *(undefined4 *)(iVar9 + 0x28);
    uVar7 = *(undefined4 *)(iVar9 + 0x2c);
    puVar10[4] = *(undefined4 *)(iVar9 + 0x20);
    puVar10[5] = uVar5;
    puVar10[6] = uVar6;
    puVar10[7] = uVar7;
    uVar5 = *(undefined4 *)(iVar9 + 0x34);
    uVar6 = *(undefined4 *)(iVar9 + 0x38);
    uVar7 = *(undefined4 *)(iVar9 + 0x3c);
    puVar10[8] = *(undefined4 *)(iVar9 + 0x30);
    puVar10[9] = uVar5;
    puVar10[10] = uVar6;
    puVar10[0xb] = uVar7;
  }
  return iVar8;
}



void FUN_0092ad50(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[5];
  *in_ECX = &PTR_FUN_00aa1b70;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[4];
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

void FUN_0092adc0(undefined4 param_1,undefined4 param_2,undefined1 (*param_3) [16])

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined1 auVar3 [16];
  undefined1 auStack_244 [16];
  undefined1 auStack_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  *(undefined4 *)*param_3 = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 4) = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 8) = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 0xc) = 0;
  *(undefined4 *)param_3[1] = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 4) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 8) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 0xc) = 0;
  for (iVar1 = (**(code **)(*in_ECX + 0x20))(); iVar1 != -1;
      iVar1 = (**(code **)(*in_ECX + 0x24))(iVar1)) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x28))(iVar1);
    (**(code **)(*piVar2 + 0xc))(param_1,param_2,&stack0xfffffdb8);
    auVar3._4_4_ = unaff_EDI;
    auVar3._0_4_ = auStack_220;
    auVar3._8_4_ = unaff_ESI;
    auVar3._12_4_ = unaff_EBX;
    auVar3 = minps(*param_3,auVar3);
    *param_3 = auVar3;
    auVar3 = maxps(param_3[1],auStack_244);
    param_3[1] = auVar3;
  }
  return;
}



void FUN_0092ae80(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  (**(code **)*param_1)("CvxPieceMesh",1);
  iVar1 = *(int *)(in_ECX + 0x10);
  if (-1 < *(int *)(iVar1 + 0x1c)) {
    (**(code **)(*param_1 + 4))
              ("Stream",1,*(undefined4 *)(iVar1 + 0x14),*(int *)(iVar1 + 0x18) << 2,
               *(int *)(iVar1 + 0x1c) << 2);
  }
  iVar1 = *(int *)(in_ECX + 0x10);
  if (-1 < *(int *)(iVar1 + 0x28)) {
    (**(code **)(*param_1 + 4))
              ("Stream",1,*(undefined4 *)(iVar1 + 0x20),*(int *)(iVar1 + 0x24) << 2,
               *(int *)(iVar1 + 0x28) << 2);
  }
  iVar1 = *(int *)(in_ECX + 0x10);
  if (-1 < *(int *)(iVar1 + 0x10)) {
    (**(code **)(*param_1 + 4))
              ("Stream",1,*(undefined4 *)(iVar1 + 8),*(int *)(iVar1 + 0xc) << 2,
               *(int *)(iVar1 + 0x10) << 2);
  }
  (**(code **)(*param_1 + 8))("DisplayMesh",1,*(undefined4 *)(in_ECX + 0x14));
  (**(code **)(*param_1 + 0x14))();
  return;
}



void FUN_0092af40(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int in_ECX;
  
  uVar2 = param_3;
  iVar1 = *(int *)(in_ECX + 0x14);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      *param_1 = 1;
      return;
    }
    pcVar3 = (char *)(*(code *)**(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x10) + iVar1 * 4) + 8))
                               (&param_3,param_2,uVar2);
  } while (*pcVar3 != '\0');
  *param_1 = 0;
  return;
}



void FUN_0092af90(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int in_ECX;
  
  uVar2 = param_6;
  iVar1 = *(int *)(in_ECX + 0x10);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      *param_1 = 1;
      return;
    }
    pcVar3 = (char *)(*(code *)**(undefined4 **)(*(int *)(*(int *)(in_ECX + 0xc) + iVar1 * 4) + 0xc)
                     )(&param_6,param_2,param_3,param_4,param_5,uVar2);
  } while (*pcVar3 != '\0');
  *param_1 = 0;
  return;
}



void FUN_0092aff0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int in_ECX;
  
  uVar2 = param_4;
  iVar1 = *(int *)(in_ECX + 0xc);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      *param_1 = 1;
      return;
    }
    pcVar3 = (char *)(*(code *)**(undefined4 **)(*(int *)(*(int *)(in_ECX + 8) + iVar1 * 4) + 0x10))
                               (&param_4,param_2,param_3,uVar2);
  } while (*pcVar3 != '\0');
  *param_1 = 0;
  return;
}



void FUN_0092b050(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int in_ECX;
  
  uVar2 = param_3;
  iVar1 = *(int *)(in_ECX + 8);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      *param_1 = 1;
      return;
    }
    pcVar3 = (char *)(*(code *)**(undefined4 **)(*(int *)(*(int *)(in_ECX + 4) + iVar1 * 4) + 0x14))
                               (&param_3,param_2,uVar2);
  } while (*pcVar3 != '\0');
  *param_1 = 0;
  return;
}



void FUN_0092b110(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  *in_ECX = &PTR_FUN_00aa1bdc;
  in_ECX[2] = &PTR_FUN_00aa1bd8;
  in_ECX[3] = &PTR_FUN_00aa1bd0;
  in_ECX[4] = &PTR_FUN_00aa1bc8;
  in_ECX[5] = &PTR_FUN_00aa1bc4;
  if (0 < (int)in_ECX[7]) {
    do {
      puVar1 = *(undefined4 **)(in_ECX[6] + iVar2 * 4);
      if ((*(short *)(puVar1 + 1) != 0) &&
         (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
         *(short *)((int)puVar1 + 6) == 0)) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)in_ECX[7]);
  }
  if (-1 < (int)in_ECX[8]) {
    FUN_008a75d0(in_ECX[6],in_ECX[8] << 2,0x14);
  }
  in_ECX[4] = &PTR_LAB_00a95c48;
  in_ECX[3] = &PTR_LAB_00a95c3c;
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_0092b1c0(byte param_1)

{
  FUN_0092b110();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0092b1f0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x0092b1f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0xc) + 0xc))();
  return;
}



void FUN_0092b210(int *param_1)

{
  int in_ECX;
  
  (**(code **)*param_1)("BvShape",1);
  (**(code **)(*param_1 + 8))("Child",1,*(undefined4 *)(in_ECX + 0x10));
  (**(code **)(*param_1 + 0x14))();
  return;
}



void FUN_0092b270(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int in_ECX;
  undefined4 unaff_EDI;
  int unaff_FS_OFFSET;
  undefined1 uVar6;
  undefined4 uStack_8;
  undefined4 local_4;
  
  iVar5 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtrcBvShape";
    uVar4 = rdtsc();
    local_4 = (undefined4)uVar4;
    puVar3[1] = local_4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x14))((int)&uStack_8 + 3,param_2,param_3);
  iVar1 = *(int *)(iVar1 + iVar5 * 4);
  uVar6 = (undefined1)((uint)unaff_EDI >> 0x18);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
    *uStack_8 = uVar6;
    return;
  }
  *uStack_8 = uVar6;
  return;
}



void FUN_0092b330(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int in_ECX;
  int unaff_FS_OFFSET;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  iVar5 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtrcBvShape";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  local_8 = *(undefined4 *)(param_2 + 8);
  local_10 = *(int **)(in_ECX + 0x10);
  local_4 = param_2;
  local_c = *(undefined4 *)(param_2 + 4);
  (**(code **)(*local_10 + 0x18))(param_1,&local_10,param_3);
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



void FUN_0092b3f0(byte param_1)

{
  FUN_0092b420();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0092b420(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[4];
  *in_ECX = &PTR_FUN_00aa1bec;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[3];
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float10 FUN_0092b470(void)

{
  float fVar1;
  int iVar2;
  float local_3c;
  float local_34;
  
  local_3c = 10.0;
  local_34 = 11.0;
  iVar2 = 0x17;
  do {
    fVar1 = (local_34 + local_3c) * 0.5;
    if ((ushort)((uint)((fVar1 + DAT_00ba7a40) * 1.0 + 196608.0) >> 6) < 0xb) {
      local_3c = fVar1;
      fVar1 = local_34;
    }
    local_34 = fVar1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return ((float10)local_34 + (float10)local_3c) * (float10)0.5 - (float10)11.0;
}



void FUN_0092b540(int *param_1)

{
  int in_ECX;
  
  (**(code **)*param_1)("BvTreeShape",1);
  (**(code **)(*param_1 + 8))("Collection",1,*(undefined4 *)(in_ECX + 0xc));
  (**(code **)(*param_1 + 0x14))();
  return;
}



void FUN_0092b580(int *param_1,int param_2,int param_3,int param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pfVar1 = (float *)(param_3 * 0x10 + *param_1);
  pfVar2 = (float *)(param_2 * 0x10 + *param_1);
  fVar3 = pfVar2[1] * pfVar1[2] - pfVar2[2] * pfVar1[1];
  fVar4 = pfVar2[2] * *pfVar1 - *pfVar2 * pfVar1[2];
  fVar5 = *pfVar2 * pfVar1[1] - pfVar2[1] * *pfVar1;
  fVar6 = pfVar2[3] * pfVar1[3] - pfVar2[3] * pfVar1[3];
  *param_5 = fVar3;
  param_5[1] = fVar4;
  param_5[2] = fVar5;
  param_5[3] = fVar6;
  pfVar1 = (float *)(param_4 * 0x10 + *param_1);
  if (0.0 < fVar4 * pfVar1[1] + fVar3 * *pfVar1 + fVar5 * pfVar1[2] + fVar6) {
    *param_5 = -fVar3;
    param_5[1] = -fVar4;
    param_5[2] = -fVar5;
    param_5[3] = -fVar6;
  }
  return;
}



void FUN_0092b640(int param_1,int param_2,int param_3,code *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined1 local_2a;
  undefined1 uStack_29;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  do {
    local_28 = param_2;
    puVar1 = (undefined4 *)((param_2 + param_3 >> 1) * 0x10 + param_1);
    local_20 = *puVar1;
    uStack_1c = puVar1[1];
    uStack_18 = puVar1[2];
    uStack_14 = puVar1[3];
    iVar13 = param_3;
    do {
      local_24 = local_28 * 0x10 + param_1;
      pcVar11 = (char *)(*param_4)(&local_2a,local_24,&local_20);
      cVar3 = *pcVar11;
      iVar14 = local_24;
      while (cVar3 != '\0') {
        local_28 = local_28 + 1;
        iVar14 = iVar14 + 0x10;
        pcVar11 = (char *)(*param_4)(&local_2a,iVar14,&local_20);
        cVar3 = *pcVar11;
      }
      local_24 = iVar13 * 0x10 + param_1;
      pcVar11 = (char *)(*param_4)(&uStack_29,&local_20,local_24);
      cVar3 = *pcVar11;
      iVar14 = local_24;
      while (cVar3 != '\0') {
        iVar14 = iVar14 + -0x10;
        iVar13 = iVar13 + -1;
        pcVar11 = (char *)(*param_4)(&uStack_29,&local_20,iVar14);
        cVar3 = *pcVar11;
      }
      if (iVar13 < local_28) break;
      if (iVar13 != local_28) {
        puVar1 = (undefined4 *)(iVar13 * 0x10 + param_1);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar1 = (undefined4 *)(iVar13 * 0x10 + param_1);
        puVar2 = (undefined4 *)(local_28 * 0x10 + param_1);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar12 = (undefined4 *)(local_28 * 0x10 + param_1);
        *puVar1 = *puVar2;
        puVar1[1] = uVar8;
        puVar1[2] = uVar9;
        puVar1[3] = uVar10;
        *puVar12 = uVar4;
        puVar12[1] = uVar5;
        puVar12[2] = uVar6;
        puVar12[3] = uVar7;
      }
      iVar13 = iVar13 + -1;
      local_28 = local_28 + 1;
    } while (local_28 <= iVar13);
    if (param_2 < iVar13) {
      FUN_0092b640(param_1,param_2,iVar13,param_4);
    }
    param_2 = local_28;
    if (param_3 <= local_28) {
      return;
    }
  } while( true );
}



undefined4 FUN_0092b760(int *param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
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
  float *pfVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  iVar5 = *param_1;
  pfVar26 = (float *)((int)param_4 * 0x10 + iVar5);
  fVar8 = pfVar26[3];
  pfVar1 = (float *)((int)param_4 * 0x10 + iVar5);
  pfVar2 = (float *)((int)param_3 * 0x10 + iVar5);
  fVar9 = pfVar2[3];
  pfVar3 = (float *)((int)param_3 * 0x10 + iVar5);
  fVar10 = *pfVar1;
  fVar11 = pfVar1[1];
  fVar12 = pfVar1[2];
  fVar13 = pfVar1[3];
  fVar27 = pfVar2[1] * pfVar26[2] - pfVar2[2] * pfVar26[1];
  fVar28 = pfVar2[2] * *pfVar26 - *pfVar2 * pfVar26[2];
  fVar29 = *pfVar2 * pfVar26[1] - pfVar2[1] * *pfVar26;
  pfVar26 = (float *)((int)param_2 * 0x10 + iVar5);
  fVar14 = *pfVar26;
  fVar15 = pfVar26[1];
  fVar16 = pfVar26[2];
  fVar17 = pfVar26[3];
  pfVar26 = (float *)((int)param_2 * 0x10 + iVar5);
  fVar18 = *pfVar26;
  fVar19 = pfVar26[1];
  fVar20 = pfVar26[2];
  fVar21 = pfVar26[3];
  fVar22 = *pfVar3;
  fVar23 = pfVar3[1];
  fVar24 = pfVar3[2];
  fVar25 = pfVar3[3];
  fVar30 = fVar29 * pfVar26[2] + fVar28 * pfVar26[1] + fVar27 * *pfVar26;
  if (ABS(fVar30) < 1.1920929e-07) {
    return 1;
  }
  fVar6 = -pfVar26[3];
  fVar7 = -pfVar3[3];
  fVar4 = pfVar1[3];
  param_5[4] = param_2;
  fVar4 = -fVar4;
  param_5[5] = param_3;
  fVar30 = 1.0 / fVar30;
  param_5[6] = param_4;
  *param_5 = fVar30 * (fVar27 * fVar6 + (fVar11 * fVar16 - fVar12 * fVar15) * fVar7 +
                      (fVar19 * fVar24 - fVar20 * fVar23) * fVar4);
  param_5[1] = fVar30 * (fVar28 * fVar6 + (fVar12 * fVar14 - fVar10 * fVar16) * fVar7 +
                        (fVar20 * fVar22 - fVar18 * fVar24) * fVar4);
  param_5[2] = fVar30 * (fVar29 * fVar6 + (fVar10 * fVar15 - fVar11 * fVar14) * fVar7 +
                        (fVar18 * fVar23 - fVar19 * fVar22) * fVar4);
  param_5[3] = fVar30 * ((fVar9 * fVar8 - fVar9 * fVar8) * fVar6 +
                         (fVar13 * fVar17 - fVar13 * fVar17) * fVar7 +
                        (fVar21 * fVar25 - fVar21 * fVar25) * fVar4);
  if ((int)param_3 < (int)param_2) {
    param_5[4] = param_3;
    param_5[5] = param_2;
  }
  return 0;
}



undefined4
FUN_0092b900(float *param_1,int *param_2,int param_3,int param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int local_44;
  int local_40;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  
  param_5[4] = -NAN;
  param_5[5] = -NAN;
  param_5[6] = -NAN;
  param_6[4] = -NAN;
  param_6[5] = -NAN;
  param_6[6] = -NAN;
  bVar2 = false;
  local_44 = 0;
  if (0 < param_2[1]) {
    local_40 = 0;
    do {
      if (((local_44 != param_3) && (local_44 != param_4)) &&
         (iVar3 = FUN_0092b760(param_2,param_3,param_4,local_44,&local_30), iVar3 == 0)) {
        if (!bVar2) {
          fVar4 = local_30 + *param_1 * -100000.0;
          fVar5 = fStack_2c + param_1[1] * -100000.0;
          fVar6 = fStack_28 + param_1[2] * -100000.0;
          fVar7 = fStack_24 + param_1[3] * -100000.0;
          *param_6 = fVar4;
          param_6[1] = fVar5;
          param_6[2] = fVar6;
          param_6[3] = fVar7;
          *param_5 = -fVar4;
          param_5[1] = -fVar5;
          param_5[2] = -fVar6;
          param_5[3] = -fVar7;
          bVar2 = true;
        }
        pfVar1 = (float *)(*param_2 + local_40);
        if (-1.1920929e-07 <
            pfVar1[2] * (param_6[2] - fStack_28) +
            pfVar1[1] * (param_6[1] - fStack_2c) + *pfVar1 * (*param_6 - local_30)) {
          param_6[4] = local_20;
          *param_6 = local_30;
          param_6[1] = fStack_2c;
          param_6[2] = fStack_28;
          param_6[3] = fStack_24;
          param_6[5] = local_1c;
          param_6[6] = local_18;
        }
        pfVar1 = (float *)(*param_2 + local_40);
        if (-1.1920929e-07 <
            pfVar1[2] * (param_5[2] - fStack_28) +
            pfVar1[1] * (param_5[1] - fStack_2c) + *pfVar1 * (*param_5 - local_30)) {
          *param_5 = local_30;
          param_5[1] = fStack_2c;
          param_5[2] = fStack_28;
          param_5[3] = fStack_24;
          param_5[4] = local_20;
          param_5[5] = local_1c;
          param_5[6] = local_18;
        }
      }
      local_40 = local_40 + 0x10;
      local_44 = local_44 + 1;
    } while (local_44 < param_2[1]);
  }
  if (param_5[4] == -NAN) {
    if (param_6[4] == -NAN) {
      return 1;
    }
    param_5[4] = param_6[4];
    param_5[5] = param_6[5];
    param_5[6] = param_6[6];
  }
  if (param_6[4] == -NAN) {
    if (param_5[4] == -NAN) {
      return 1;
    }
    param_6[4] = param_5[4];
    param_6[5] = param_5[5];
    param_6[6] = param_5[6];
  }
  return 0;
}



void FUN_0092bae0(undefined1 *param_1,float *param_2,int *param_3,int param_4,int param_5,
                 float *param_6,int *param_7)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  int iVar5;
  float fVar6;
  undefined1 local_45;
  int local_44;
  float local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar5 = 0;
  local_45 = 0;
  local_40 = 3.4028235e+38;
  uVar4 = 0;
  if (0 < param_3[1]) {
    local_44 = 0;
    do {
      if ((iVar5 != param_4) && (iVar5 != param_5)) {
        pfVar1 = (float *)(local_44 + *param_3);
        fVar6 = pfVar1[2] * param_2[2] + pfVar1[1] * param_2[1] + *pfVar1 * *param_2;
        if (1e-08 < fVar6) {
          param_6[3] = 1.0;
          pfVar1 = (float *)(*param_3 + local_44);
          fVar6 = -(pfVar1[2] * param_6[2] + *pfVar1 * *param_6 +
                   pfVar1[3] * param_6[3] + pfVar1[1] * param_6[1]) / ABS(fVar6);
          if ((fVar6 < local_40 + 0.0001) &&
             (iVar2 = FUN_0092b760(param_3,param_4,param_5,iVar5,&local_30), iVar2 == 0)) {
            local_45 = 1;
            if (0.0001 <= ABS(fVar6 - local_40)) {
              param_7[1] = 0;
              if ((param_7[2] & 0x3fffffffU) == 0) {
                FUN_008a6ee0(param_7,0x20);
              }
              puVar3 = (undefined4 *)(param_7[1] * 0x20 + *param_7);
              param_7[1] = param_7[1] + 1;
              puVar3[4] = local_20;
              *puVar3 = local_30;
              puVar3[1] = uStack_2c;
              puVar3[2] = uStack_28;
              puVar3[3] = uStack_24;
              puVar3[5] = local_1c;
              puVar3[6] = local_18;
              local_40 = fVar6;
            }
            else {
              if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
                FUN_008a6ee0(param_7,0x20);
              }
              puVar3 = (undefined4 *)(param_7[1] * 0x20 + *param_7);
              param_7[1] = param_7[1] + 1;
              puVar3[4] = local_20;
              *puVar3 = local_30;
              puVar3[1] = uStack_2c;
              puVar3[2] = uStack_28;
              puVar3[3] = uStack_24;
              puVar3[5] = local_1c;
              puVar3[6] = local_18;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
      local_44 = local_44 + 0x10;
      uVar4 = local_45;
    } while (iVar5 < param_3[1]);
  }
  *param_1 = uVar4;
  return;
}



undefined4 FUN_0092bd20(int *param_1,int *param_2,int *param_3,float *param_4,float *param_5)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_150;
  int local_14c;
  int local_144;
  int local_140;
  float local_13c;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined1 *local_120;
  uint local_11c;
  uint local_118;
  undefined1 local_114 [272];
  
  local_120 = local_114;
  local_11c = 0;
  local_118 = 0x80000020;
  while( true ) {
    local_144 = -1;
    local_140 = -1;
    iVar4 = param_1[1];
    local_13c = -3.4028235e+38;
    if (iVar4 < 1) break;
    local_150 = 0;
    iVar6 = 0;
    do {
      iVar1 = iVar6 + 1;
      iVar5 = iVar1;
      local_14c = local_150;
      if (iVar1 < iVar4) {
        do {
          local_14c = local_14c + 0x10;
          pfVar2 = (float *)(local_14c + *param_1);
          pfVar3 = (float *)(local_150 + *param_1);
          fVar7 = pfVar3[2] * pfVar2[2] + pfVar3[1] * pfVar2[1] + *pfVar3 * *pfVar2;
          if ((local_13c < fVar7) && (fVar7 < 0.9)) {
            iVar4 = 0;
            if (0 < (int)local_11c) {
              do {
                if ((*(int *)(local_120 + iVar4 * 8) == iVar6) &&
                   (*(int *)(local_120 + iVar4 * 8 + 4) == iVar5)) {
                  if (iVar4 != -1) goto LAB_0092be37;
                  break;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < (int)local_11c);
            }
            *param_2 = iVar6;
            *param_3 = iVar5;
            local_144 = iVar6;
            local_140 = iVar5;
            local_13c = fVar7;
          }
LAB_0092be37:
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_1[1]);
      }
      local_150 = local_150 + 0x10;
      iVar4 = param_1[1];
      iVar6 = iVar1;
    } while (iVar1 < iVar4);
    if (local_144 == -1) break;
    if (local_11c == (local_118 & 0x3fffffff)) {
      FUN_008a6ee0(&local_120,8);
    }
    *(int *)(local_120 + local_11c * 8) = local_144;
    *(int *)(local_120 + local_11c * 8 + 4) = local_140;
    local_11c = local_11c + 1;
    pfVar2 = (float *)(*param_3 * 0x10 + *param_1);
    pfVar3 = (float *)(*param_2 * 0x10 + *param_1);
    fVar7 = pfVar3[1] * pfVar2[2] - pfVar3[2] * pfVar2[1];
    fVar8 = pfVar3[2] * *pfVar2 - *pfVar3 * pfVar2[2];
    fVar9 = *pfVar3 * pfVar2[1] - pfVar3[1] * *pfVar2;
    fStack_124 = pfVar3[3] * pfVar2[3] - pfVar3[3] * pfVar2[3];
    local_130 = fVar7;
    fStack_12c = fVar8;
    fStack_128 = fVar9;
    iVar4 = FUN_0092b900(&local_130,param_1,*param_2,*param_3,param_5,param_4);
    if (iVar4 == 1) {
      if (-1 < (int)local_118) {
        FUN_008a75d0(local_120,local_118 << 3,0x14);
      }
      return 1;
    }
    if (-1.1920929e-07 <
        fVar9 * (param_5[2] - param_4[2]) +
        fVar8 * (param_5[1] - param_4[1]) + fVar7 * (*param_5 - *param_4)) {
      if (-1 < (int)local_118) {
        FUN_008a75d0(local_120,local_118 << 3,0x14);
      }
      return 0;
    }
  }
  if (-1 < (int)local_118) {
    FUN_008a75d0(local_120,local_118 << 3,0x14);
  }
  return 1;
}



void FUN_0092c020(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 local_65;
  int local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined1 local_20 [28];
  
  iVar8 = 0;
  if (0 < param_3[1]) {
    iVar9 = *param_1;
    piVar5 = (int *)*param_3;
    do {
      if (((*piVar5 == iVar9) && (piVar5[1] == param_1[1])) ||
         ((iVar9 = *param_1, piVar5[1] == iVar9 && (*piVar5 == param_1[1])))) {
        if (iVar8 != -1) {
          return;
        }
        break;
      }
      iVar8 = iVar8 + 1;
      piVar5 = piVar5 + 8;
    } while (iVar8 < param_3[1]);
  }
  if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
    FUN_008a6ee0(param_3,0x20);
  }
  piVar5 = (int *)(param_3[1] * 0x20 + *param_3);
  param_3[1] = param_3[1] + 1;
  *piVar5 = *param_1;
  piVar5[1] = param_1[1];
  piVar5[2] = param_1[2];
  iVar8 = param_1[5];
  iVar9 = param_1[6];
  iVar1 = param_1[7];
  piVar5[4] = param_1[4];
  piVar5[5] = iVar8;
  piVar5[6] = iVar9;
  piVar5[7] = iVar1;
  local_5c = (undefined4 *)0x0;
  local_58 = 0;
  local_54 = -0x80000000;
  pcVar6 = (char *)FUN_0092bae0(&local_65,param_1 + 4,param_2,*param_1,param_1[1],param_1[2],
                                &local_5c);
  if (*pcVar6 != '\0') {
    local_60 = local_5c;
    if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_4,0x10);
    }
    puVar7 = (undefined4 *)(param_4[1] * 0x10 + *param_4);
    param_4[1] = param_4[1] + 1;
    uVar2 = local_60[1];
    uVar3 = local_60[2];
    uVar4 = local_60[3];
    *puVar7 = *local_60;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
    local_60 = (undefined4 *)0x0;
    if (0 < local_58) {
      local_64 = 0;
      do {
        local_50 = *(undefined4 *)(local_64 + 0x10 + (int)local_5c);
        local_48 = local_64 + (int)local_5c;
        local_4c = *(undefined4 *)(local_48 + 0x18);
        FUN_0092b580(param_2,*(undefined4 *)(local_48 + 0x10),*(undefined4 *)(local_48 + 0x18),
                     *(undefined4 *)(local_48 + 0x14),local_40);
        FUN_0092c020(&local_50,param_2,param_3,param_4);
        local_28 = local_64 + (int)local_5c;
        local_30 = *(undefined4 *)(local_28 + 0x14);
        local_2c = *(undefined4 *)(local_28 + 0x18);
        FUN_0092b580(param_2,*(undefined4 *)(local_28 + 0x14),*(undefined4 *)(local_28 + 0x18),
                     *(undefined4 *)(local_28 + 0x10),local_20);
        FUN_0092c020(&local_30,param_2,param_3,param_4);
        local_60 = (undefined4 *)((int)local_60 + 1);
        local_64 = local_64 + 0x20;
      } while ((int)local_60 < local_58);
    }
  }
  if (-1 < local_54) {
    FUN_008a75d0(local_5c,local_54 << 5,0x14);
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_0092c240(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  int unaff_FS_OFFSET;
  float *local_10a0;
  int local_109c;
  uint local_1098;
  float *local_1094;
  int local_1090;
  int local_108c;
  float local_1088;
  undefined1 local_1084 [4];
  undefined4 local_1080;
  undefined4 local_107c;
  undefined4 *local_1078;
  undefined4 local_1070;
  undefined4 uStack_106c;
  undefined4 uStack_1068;
  undefined4 uStack_1064;
  undefined4 local_1060;
  undefined4 uStack_105c;
  undefined4 uStack_1058;
  undefined4 uStack_1054;
  undefined4 local_1050;
  undefined4 local_104c;
  undefined4 local_1048;
  undefined4 local_1040;
  undefined4 uStack_103c;
  undefined4 uStack_1038;
  undefined4 uStack_1034;
  undefined4 local_1030;
  undefined4 local_102c;
  undefined4 local_1028;
  undefined1 *local_1020;
  int local_101c;
  int local_1018;
  undefined1 local_1010 [4092];
  undefined4 uStack_14;
  
  iVar11 = _tls_index;
  uStack_14 = 0x92c250;
  iVar14 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar12 = *(int *)(iVar14 + _tls_index * 4);
  if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
    puVar13 = *(undefined4 **)(iVar12 + 0x1a4);
    *puVar13 = "TtplanesToVerts";
    uVar4 = rdtsc();
    local_1090 = (int)uVar4;
    puVar13[1] = local_1090;
    *(undefined4 **)(iVar12 + 0x1a4) = puVar13 + 3;
  }
  uVar2 = param_1[1];
  local_10a0 = (float *)0x0;
  local_109c = 0;
  local_108c = *(int *)(iVar14 + iVar11 * 4);
  piVar3 = *(int **)(local_108c + 0x19c);
  iVar14 = uVar2 + 1;
  local_1098 = 0x80000000;
  local_1094 = (float *)piVar3[8];
  if ((float *)piVar3[0xb] < local_1094 + iVar14 * 4) {
    local_1094 = (float *)(**(code **)(*piVar3 + 0xc))(iVar14 * 0x10);
  }
  else {
    piVar3[8] = (int)(local_1094 + iVar14 * 4);
  }
  local_109c = param_1[1];
  local_1098 = uVar2 | 0x80000000;
  iVar14 = 0;
  if (0 < local_109c) {
    iVar12 = 0;
    do {
      puVar13 = (undefined4 *)(*param_1 + iVar12);
      uVar5 = puVar13[1];
      uVar6 = puVar13[2];
      uVar7 = puVar13[3];
      puVar1 = (undefined4 *)(iVar12 + (int)local_1094);
      *puVar1 = *puVar13;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 0x10;
    } while (iVar14 < local_109c);
  }
  local_10a0 = local_1094;
  if (1 < local_109c) {
    FUN_0092b640(local_1094,0,local_109c + -1,&LAB_0092c9b0);
  }
  iVar14 = FUN_0092bd20(&local_10a0,&local_1088,local_1084,&local_1040,&local_1060);
  if (iVar14 == 1) {
    iVar14 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar14 + 0x1a4) < *(uint *)(iVar14 + 0x1a8)) {
      puVar13 = *(undefined4 **)(local_108c + 0x1a4);
      *puVar13 = &DAT_00a9610c;
      uVar4 = rdtsc();
      local_1090 = (int)uVar4;
      puVar13[1] = local_1090;
      *(undefined4 **)(local_108c + 0x1a4) = puVar13 + 3;
    }
    piVar3 = *(int **)(local_108c + 0x19c);
    piVar3[8] = (int)local_1094;
    if (local_1094 == (float *)piVar3[10]) {
      (**(code **)(*piVar3 + 0x10))(local_1094);
    }
    if (-1 < (int)local_1098) {
      FUN_008a75d0(local_10a0,local_1098 << 4,0x14);
    }
    return 1;
  }
  local_1020 = local_1010;
  local_101c = 0;
  local_1018 = -0x7fffff80;
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    FUN_008a6ee0(param_2,0x10);
  }
  puVar13 = (undefined4 *)(param_2[1] * 0x10 + *param_2);
  param_2[1] = param_2[1] + 1;
  *puVar13 = local_1060;
  puVar13[1] = uStack_105c;
  puVar13[2] = uStack_1058;
  puVar13[3] = uStack_1054;
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    FUN_008a6ee0(param_2,0x10);
  }
  puVar13 = (undefined4 *)(param_2[1] * 0x10 + *param_2);
  param_2[1] = param_2[1] + 1;
  *puVar13 = local_1040;
  puVar13[1] = uStack_103c;
  puVar13[2] = uStack_1038;
  puVar13[3] = uStack_1034;
  puVar13 = (undefined4 *)(local_1020 + local_101c * 0x20);
  local_101c = local_101c + 1;
  *puVar13 = local_1050;
  puVar13[1] = local_104c;
  puVar13[2] = local_1078;
  puVar13[4] = local_1070;
  puVar13[5] = uStack_106c;
  puVar13[6] = uStack_1068;
  puVar13[7] = uStack_1064;
  local_1080 = local_1030;
  local_107c = local_1028;
  local_1078 = &local_1040;
  FUN_0092b580(&local_10a0,local_1030,local_1028,local_102c,&local_1070);
  FUN_0092c020(&local_1080,&local_10a0,&local_1020,param_2);
  local_1078 = &local_1040;
  local_1080 = local_102c;
  local_107c = local_1028;
  FUN_0092b580(&local_10a0,local_102c,local_1028,local_1030,&local_1070);
  FUN_0092c020(&local_1080,&local_10a0,&local_1020,param_2);
  local_1078 = &local_1060;
  local_1080 = local_1050;
  local_107c = local_1048;
  FUN_0092b580(&local_10a0,local_1050,local_1048,local_104c,&local_1070);
  FUN_0092c020(&local_1080,&local_10a0,&local_1020,param_2);
  local_1078 = &local_1060;
  local_1080 = local_104c;
  local_107c = local_1048;
  FUN_0092b580(&local_10a0,local_104c,local_1048,local_1050,&local_1070);
  FUN_0092c020(&local_1080,&local_10a0,&local_1020,param_2);
  if (-1 < local_1018) {
    FUN_008a75d0(local_1020,local_1018 << 5,0x14);
  }
  pfVar16 = (float *)*param_2;
  pfVar15 = pfVar16;
  pfVar17 = pfVar16;
  iVar14 = param_2[1];
  if (-1 < param_2[1] + -1) {
    do {
      local_1090 = iVar14;
      iVar14 = 0;
      if (0 < local_109c) {
        pfVar18 = local_10a0;
        do {
          local_1088 = pfVar18[1] * pfVar17[1] + *pfVar18 * *pfVar17 +
                       pfVar18[2] * pfVar17[2] + pfVar18[3];
          pfVar16 = pfVar15;
          if (1e-05 < local_1088) goto LAB_0092c69d;
          iVar14 = iVar14 + 1;
          pfVar18 = pfVar18 + 4;
        } while (iVar14 < local_109c);
      }
      fVar8 = pfVar17[1];
      fVar9 = pfVar17[2];
      fVar10 = pfVar17[3];
      pfVar16 = pfVar15 + 4;
      *pfVar15 = *pfVar17;
      pfVar15[1] = fVar8;
      pfVar15[2] = fVar9;
      pfVar15[3] = fVar10;
LAB_0092c69d:
      local_1090 = local_1090 + -1;
      pfVar15 = pfVar16;
      pfVar17 = pfVar17 + 4;
      iVar14 = local_1090;
    } while (local_1090 != 0);
  }
  iVar14 = (int)pfVar16 - *param_2 >> 4;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar14) {
    iVar12 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar12 <= iVar14) {
      iVar12 = iVar14;
    }
    FUN_008a6e40(param_2,iVar12,0x10);
  }
  param_2[1] = iVar14;
  if (1 < iVar14) {
    FUN_0092b640(*param_2,0,iVar14 + -1,&LAB_0092c9b0);
  }
  FUN_0092dca0(0x37a7c5ac,param_2,&local_1088);
  iVar14 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar14 + 0x1a4) < *(uint *)(iVar14 + 0x1a8)) {
    puVar13 = *(undefined4 **)(local_108c + 0x1a4);
    *puVar13 = &DAT_00a9610c;
    uVar4 = rdtsc();
    local_1088 = (float)uVar4;
    puVar13[1] = local_1088;
    *(undefined4 **)(local_108c + 0x1a4) = puVar13 + 3;
  }
  piVar3 = *(int **)(local_108c + 0x19c);
  piVar3[8] = (int)local_1094;
  if (local_1094 == (float *)piVar3[10]) {
    (**(code **)(*piVar3 + 0x10))(local_1094);
  }
  if (-1 < (int)local_1098) {
    FUN_008a75d0(local_10a0,local_1098 << 4,0x14);
  }
  return 0;
}



void FUN_0092c790(undefined1 *param_1,int param_2,short *param_3,short *param_4,short *param_5,
                 short *param_6)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  
  if (((param_3 == param_4) || (*param_3 != *param_4)) ||
     (bVar3 = true,
     *(short *)(param_2 + (uint)(ushort)param_3[1] * 8) ==
     *(short *)(param_2 + (uint)(ushort)param_4[1] * 8))) {
    bVar3 = false;
  }
  if (((param_5 == param_6) || (*param_5 != *param_6)) ||
     (bVar4 = true,
     *(short *)(param_2 + (uint)(ushort)param_5[1] * 8) ==
     *(short *)(param_2 + (uint)(ushort)param_6[1] * 8))) {
    bVar4 = false;
  }
  if ((bVar3) && (bVar4)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    *param_1 = 0;
    return;
  }
  if ((((param_3 == param_6) || (*param_3 != *param_6)) ||
      (*(short *)(param_2 + (uint)(ushort)param_3[1] * 8) !=
       *(short *)(param_2 + (uint)(ushort)param_6[1] * 8))) &&
     ((param_5 != param_6 && (sVar2 = *param_6, *param_5 == sVar2)))) {
    if (*(short *)(param_2 + (uint)(ushort)param_5[1] * 8) !=
        *(short *)(param_2 + (uint)(ushort)param_6[1] * 8)) goto LAB_0092c86d;
LAB_0092c8a5:
    if ((*(short *)(param_2 + (uint)(ushort)param_5[1] * 8) != sVar2) ||
       (*(short *)(param_2 + (uint)(ushort)param_6[1] * 8) != *param_5)) goto LAB_0092c8d4;
    bVar3 = (short *)(param_2 + (uint)(ushort)param_5[1] * 8) == param_6;
  }
  else {
LAB_0092c86d:
    sVar2 = *param_6;
    if (((*(short *)(param_2 + (uint)(ushort)param_3[1] * 8) != sVar2) ||
        (*(short *)(param_2 + (uint)(ushort)param_6[1] * 8) != *param_3)) ||
       ((short *)(param_2 + (uint)(ushort)param_3[1] * 8) == param_6)) goto LAB_0092c8a5;
LAB_0092c8d4:
    bVar3 = true;
  }
  if ((((param_3 == param_4) || (*param_3 != *param_4)) ||
      (*(short *)(param_2 + (uint)(ushort)param_3[1] * 8) !=
       *(short *)(param_2 + (uint)(ushort)param_4[1] * 8))) &&
     (((param_5 != param_4 && (sVar2 = *param_4, *param_5 == sVar2)) &&
      (*(short *)(param_2 + (uint)(ushort)param_5[1] * 8) ==
       *(short *)(param_2 + (uint)(ushort)param_4[1] * 8))))) {
LAB_0092c954:
    if ((*(short *)(param_2 + (uint)(ushort)param_5[1] * 8) == sVar2) &&
       (*(short *)(param_2 + (uint)(ushort)param_4[1] * 8) == *param_5)) {
      bVar4 = (short *)(param_2 + (uint)(ushort)param_5[1] * 8) == param_4;
      goto LAB_0092c97c;
    }
  }
  else {
    psVar1 = (short *)(param_2 + (uint)(ushort)param_3[1] * 8);
    sVar2 = *param_4;
    if (((*psVar1 != sVar2) || (*(short *)(param_2 + (uint)(ushort)param_4[1] * 8) != *param_3)) ||
       (psVar1 == param_4)) goto LAB_0092c954;
  }
  bVar4 = true;
LAB_0092c97c:
  if ((bVar3) && (bVar4)) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}



void FUN_0092ca20(float *param_1)

{
  float *in_EAX;
  float *in_ECX;
  
  *in_EAX = *param_1 - *in_ECX;
  in_EAX[1] = param_1[1] - in_ECX[1];
  in_EAX[2] = param_1[2] - in_ECX[2];
  in_EAX[3] = param_1[3] - in_ECX[3];
  return;
}



void FUN_0092cab0(int param_1,int param_2,int param_3,code *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined1 local_56;
  undefined1 uStack_55;
  int local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  do {
    puVar1 = (undefined4 *)(param_1 + (param_2 + param_3 >> 1) * 0x14);
    local_30 = *puVar1;
    local_2c = puVar1[1];
    local_28 = puVar1[2];
    local_24 = puVar1[3];
    local_20 = puVar1[4];
    iVar5 = param_3;
    iVar6 = param_2;
    do {
      local_54 = param_1 + iVar6 * 0x14;
      pcVar4 = (char *)(*param_4)(&local_56,local_54,&local_30);
      cVar3 = *pcVar4;
      while (cVar3 != '\0') {
        local_54 = local_54 + 0x14;
        iVar6 = iVar6 + 1;
        pcVar4 = (char *)(*param_4)(&local_56,local_54,&local_30);
        cVar3 = *pcVar4;
      }
      local_54 = param_1 + iVar5 * 0x14;
      pcVar4 = (char *)(*param_4)(&uStack_55,&local_30,local_54);
      cVar3 = *pcVar4;
      while (cVar3 != '\0') {
        local_54 = local_54 + -0x14;
        iVar5 = iVar5 + -1;
        pcVar4 = (char *)(*param_4)(&uStack_55,&local_30,local_54);
        cVar3 = *pcVar4;
      }
      if (iVar5 < iVar6) break;
      if (iVar5 != iVar6) {
        puVar1 = (undefined4 *)(param_1 + iVar5 * 0x14);
        uStack_50 = *puVar1;
        uStack_4c = puVar1[1];
        uStack_48 = puVar1[2];
        uStack_44 = puVar1[3];
        uStack_40 = puVar1[4];
        puVar2 = (undefined4 *)(param_1 + iVar6 * 0x14);
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        puVar1[3] = puVar2[3];
        puVar1[4] = puVar2[4];
        *puVar2 = uStack_50;
        puVar2[1] = uStack_4c;
        puVar2[2] = uStack_48;
        puVar2[3] = uStack_44;
        puVar2[4] = uStack_40;
      }
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar5);
    if (param_2 < iVar5) {
      FUN_0092cab0(param_1,param_2,iVar5,param_4);
    }
    param_2 = iVar6;
    if (param_3 <= iVar6) {
      return;
    }
  } while( true );
}



void FUN_0092cc50(int param_1,int param_2,int param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined1 local_26;
  undefined1 uStack_25;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  do {
    iVar3 = param_2 + param_3 >> 1;
    local_20 = *(undefined4 *)(param_1 + iVar3 * 8);
    local_1c = *(undefined4 *)(param_1 + 4 + iVar3 * 8);
    iVar3 = param_2;
    iVar5 = param_3;
    do {
      pcVar4 = (char *)(*param_4)(&local_26,param_1 + iVar3 * 8,&local_20);
      if (*pcVar4 != '\0') {
        iStack_24 = param_1 + iVar3 * 8;
        do {
          iStack_24 = iStack_24 + 8;
          iVar3 = iVar3 + 1;
          pcVar4 = (char *)(*param_4)(&local_26,iStack_24,&local_20);
        } while (*pcVar4 != '\0');
      }
      pcVar4 = (char *)(*param_4)(&uStack_25,&local_20,param_1 + iVar5 * 8);
      if (*pcVar4 != '\0') {
        iStack_24 = param_1 + iVar5 * 8;
        do {
          iStack_24 = iStack_24 + -8;
          iVar5 = iVar5 + -1;
          pcVar4 = (char *)(*param_4)(&uStack_25,&local_20,iStack_24);
        } while (*pcVar4 != '\0');
      }
      if (iVar5 < iVar3) break;
      if (iVar5 != iVar3) {
        uVar1 = *(undefined4 *)(param_1 + iVar5 * 8);
        uVar2 = *(undefined4 *)(param_1 + 4 + iVar5 * 8);
        *(undefined4 *)(param_1 + iVar5 * 8) = *(undefined4 *)(param_1 + iVar3 * 8);
        *(undefined4 *)(param_1 + 4 + iVar5 * 8) = *(undefined4 *)(param_1 + 4 + iVar3 * 8);
        *(undefined4 *)(param_1 + iVar3 * 8) = uVar1;
        *(undefined4 *)(param_1 + 4 + iVar3 * 8) = uVar2;
      }
      iVar5 = iVar5 + -1;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar5);
    if (param_2 < iVar5) {
      FUN_0092cc50(param_1,param_2,iVar5,param_4);
    }
    param_2 = iVar3;
    if (param_3 <= iVar3) {
      return;
    }
  } while( true );
}



void FUN_0092cd60(int *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  
  if (0 < param_1[1]) {
    pfVar2 = (float *)*param_1;
    fVar1 = pfVar2[1];
    fVar3 = pfVar2[2];
    fVar4 = pfVar2[3];
    *param_2 = *pfVar2;
    param_2[1] = fVar1;
    param_2[2] = fVar3;
    param_2[3] = fVar4;
    pfVar2 = (float *)*param_1;
    fVar1 = pfVar2[1];
    fVar3 = pfVar2[2];
    fVar4 = pfVar2[3];
    param_2[4] = *pfVar2;
    param_2[5] = fVar1;
    param_2[6] = fVar3;
    param_2[7] = fVar4;
    iVar6 = 0;
    if (0 < param_1[1]) {
      iVar5 = 0;
      do {
        fVar1 = *(float *)(iVar5 + *param_1);
        if (*param_2 < *(float *)(iVar5 + *param_1)) {
          fVar1 = *param_2;
        }
        *param_2 = fVar1;
        fVar1 = *(float *)(iVar5 + *param_1);
        if (*(float *)(iVar5 + *param_1) < param_2[4]) {
          fVar1 = param_2[4];
        }
        param_2[4] = fVar1;
        fVar1 = *(float *)(iVar5 + 4 + *param_1);
        if (param_2[1] < fVar1) {
          fVar1 = param_2[1];
        }
        param_2[1] = fVar1;
        fVar1 = *(float *)(iVar5 + 4 + *param_1);
        if (fVar1 < param_2[5]) {
          fVar1 = param_2[5];
        }
        param_2[5] = fVar1;
        fVar1 = *(float *)(iVar5 + 8 + *param_1);
        if (param_2[2] < fVar1) {
          fVar1 = param_2[2];
        }
        param_2[2] = fVar1;
        fVar1 = *(float *)(iVar5 + 8 + *param_1);
        if (fVar1 < param_2[6]) {
          fVar1 = param_2[6];
        }
        param_2[6] = fVar1;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x10;
      } while (iVar6 < param_1[1]);
    }
  }
  return;
}



void FUN_0092ce60(undefined1 *param_1,float param_2,int *param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  ushort *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint local_70;
  uint local_6c;
  float local_64;
  int local_5c;
  
  iVar3 = *param_3;
  if ((param_3[2] < 3) && (*(int *)(param_4 + 8) < 3)) {
    local_6c = 0;
    local_5c = 3;
    if (param_3[2] == 2) {
      puVar4 = (ushort *)param_3[1];
      uVar21 = (uint)*puVar4;
      uVar19 = (uint)puVar4[(uint)puVar4[1] * 4];
      uVar20 = uVar19;
      if (uVar19 < uVar21) {
        uVar20 = uVar21;
        uVar21 = uVar19;
      }
      uVar19 = (uint)**(ushort **)(param_4 + 4);
      local_70 = uVar19;
      if (*(int *)(param_4 + 8) == 2) {
        local_6c = (uint)*(ushort *)
                          (*(int *)(param_4 + 4) + (uint)*(ushort *)(*(int *)(param_4 + 4) + 2) * 8)
        ;
        if (local_6c < uVar19) {
          local_70 = local_6c;
          local_6c = uVar19;
        }
        local_5c = 4;
      }
    }
    else {
      if (*(int *)(param_4 + 8) != 2) {
        FUN_00933870(*(undefined2 *)param_3[1],**(undefined2 **)(param_4 + 4));
        goto LAB_0092d3e1;
      }
      puVar4 = *(ushort **)(param_4 + 4);
      uVar21 = (uint)*(ushort *)param_3[1];
      uVar19 = (uint)puVar4[(uint)puVar4[1] * 4];
      local_70 = (uint)*puVar4;
      uVar20 = uVar19;
      if (uVar19 < uVar21) {
        uVar20 = uVar21;
        uVar21 = uVar19;
      }
    }
    pfVar1 = (float *)(uVar21 * 0x10 + iVar3);
    pfVar2 = (float *)(uVar20 * 0x10 + iVar3);
    fVar8 = *(float *)(uVar20 * 0x10 + iVar3) - *pfVar1;
    fVar9 = pfVar2[1] - pfVar1[1];
    fVar10 = pfVar2[2] - pfVar1[2];
    fVar23 = fVar9 * fVar9;
    fVar24 = fVar10 * fVar10;
    fVar29 = fVar24 + fVar23 + fVar8 * fVar8;
    pfVar17 = (float *)(local_70 * 0x10 + iVar3);
    fVar11 = *(float *)(local_70 * 0x10 + iVar3) - *pfVar2;
    fVar12 = pfVar17[1] - pfVar2[1];
    fVar13 = pfVar17[2] - pfVar2[2];
    auVar25._0_4_ = fVar11 * fVar11;
    auVar25._4_4_ = fVar12 * fVar12;
    auVar25._8_4_ = fVar13 * fVar13;
    auVar25._12_4_ = (pfVar17[3] - pfVar2[3]) * (pfVar17[3] - pfVar2[3]);
    fVar14 = *pfVar1 - *pfVar17;
    fVar15 = pfVar1[1] - pfVar17[1];
    fVar32 = auVar25._8_4_ + auVar25._4_4_ + auVar25._0_4_;
    fVar16 = pfVar1[2] - pfVar17[2];
    fVar30 = fVar15 * fVar15;
    fVar31 = fVar16 * fVar16;
    local_64 = fVar31 + fVar30 + fVar14 * fVar14;
    auVar33._4_4_ = fVar23;
    auVar33._0_4_ = fVar23;
    auVar33._8_4_ = fVar23;
    auVar33._12_4_ = fVar23;
    auVar34._4_12_ = auVar33._4_12_;
    auVar34._0_4_ = fVar23 + fVar8 * fVar8;
    auVar35._4_4_ = fVar24;
    auVar35._0_4_ = fVar24 + auVar34._0_4_;
    auVar35._8_4_ = fVar24;
    auVar35._12_4_ = fVar24;
    auVar35 = rsqrtss(auVar34,auVar35);
    fVar23 = auVar35._0_4_;
    fVar23 = fVar23 * 0.5 * (3.0 - (fVar24 + auVar34._0_4_) * fVar23 * fVar23);
    fVar24 = auVar25._8_4_ + auVar25._4_4_ + auVar25._0_4_;
    auVar5._4_4_ = auVar25._8_4_;
    auVar5._0_4_ = fVar24;
    auVar5._8_4_ = auVar25._8_4_;
    auVar5._12_4_ = auVar25._8_4_;
    auVar35 = rsqrtss(auVar25,auVar5);
    fVar22 = auVar35._0_4_;
    fVar24 = fVar22 * 0.5 * (3.0 - fVar24 * fVar22 * fVar22);
    fVar8 = fVar24 * fVar11 - fVar23 * fVar8;
    fVar22 = fVar30 + fVar14 * fVar14;
    auVar26._4_4_ = fVar30;
    auVar26._0_4_ = fVar22;
    auVar26._8_4_ = fVar30;
    auVar26._12_4_ = fVar30;
    fVar22 = fVar31 + fVar22;
    auVar6._4_4_ = fVar31;
    auVar6._0_4_ = fVar22;
    auVar6._8_4_ = fVar31;
    auVar6._12_4_ = fVar31;
    auVar35 = rsqrtss(auVar26,auVar6);
    fVar30 = auVar35._0_4_;
    fVar9 = fVar24 * fVar12 - fVar23 * fVar9;
    fVar10 = fVar24 * fVar13 - fVar23 * fVar10;
    fVar23 = fVar30 * 0.5 * (3.0 - fVar22 * fVar30 * fVar30);
    if (fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8 < param_2) {
      if (local_5c == 4) {
        iVar18 = local_6c * 0x10 + iVar3;
        fVar8 = *(float *)(local_6c * 0x10 + iVar3) - *pfVar2;
        fVar9 = *(float *)(iVar18 + 4) - pfVar2[1];
        fVar10 = *(float *)(iVar18 + 8) - pfVar2[2];
        fVar22 = fVar9 * fVar9;
        fVar30 = fVar10 * fVar10;
        auVar27._4_4_ = fVar22;
        auVar27._0_4_ = fVar22;
        auVar27._8_4_ = fVar22;
        auVar27._12_4_ = fVar22;
        auVar28._4_12_ = auVar27._4_12_;
        auVar28._0_4_ = fVar22 + fVar8 * fVar8;
        auVar7._4_4_ = fVar30;
        auVar7._0_4_ = fVar30 + auVar28._0_4_;
        auVar7._8_4_ = fVar30;
        auVar7._12_4_ = fVar30;
        auVar35 = rsqrtss(auVar28,auVar7);
        fVar31 = auVar35._0_4_;
        fVar31 = fVar31 * 0.5 * (3.0 - (fVar30 + auVar28._0_4_) * fVar31 * fVar31);
        fVar11 = fVar24 * fVar11 - fVar31 * fVar8;
        fVar9 = fVar24 * fVar12 - fVar31 * fVar9;
        fVar10 = fVar24 * fVar13 - fVar31 * fVar10;
        if (param_2 <= fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11) goto LAB_0092d3ee;
        if (fVar32 < fVar30 + fVar22 + fVar8 * fVar8) {
          local_70 = local_6c;
          FUN_0092ca20(pfVar1);
          local_64 = fVar23 * fVar16 * fVar23 * fVar16 +
                     fVar23 * fVar15 * fVar23 * fVar15 + fVar23 * fVar14 * fVar23 * fVar14;
        }
      }
      fVar8 = local_64;
      if (local_64 < fVar32) {
        fVar8 = fVar32;
      }
      if (fVar8 < fVar29) {
        fVar8 = fVar29;
      }
      if (fVar29 == fVar8) {
        FUN_00933870(uVar21,uVar20);
        *param_1 = 1;
        return;
      }
      if (fVar32 == fVar8) {
        FUN_00933870(uVar20,local_70);
        *param_1 = 1;
        return;
      }
      if (local_64 == fVar8) {
        FUN_00933870(local_70,uVar21);
        *param_1 = 1;
        return;
      }
LAB_0092d3e1:
      *param_1 = 1;
      return;
    }
  }
LAB_0092d3ee:
  *param_1 = 0;
  return;
}



void FUN_0092d400(float *param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  fVar4 = *param_1 - *param_2;
  fVar5 = param_1[1] - param_2[1];
  fVar10 = param_1[2] - param_2[2];
  fVar3 = param_1[3] - param_2[3];
  if ((ABS(fVar4) < 1e-06) && (ABS(fVar5) < 1e-06)) {
    fVar7 = fVar5 * 0.0 - fVar10 * 0.0;
    fVar10 = fVar10 * 1.0 - fVar4 * 0.0;
    fVar11 = fVar4 * 0.0 - fVar5 * 1.0;
    fVar4 = fVar10 * fVar10;
    fVar5 = fVar11 * fVar11;
    auVar12._4_4_ = fVar4;
    auVar12._0_4_ = fVar4;
    auVar12._8_4_ = fVar4;
    auVar12._12_4_ = fVar4;
    auVar13._4_12_ = auVar12._4_12_;
    auVar13._0_4_ = fVar4 + fVar7 * fVar7;
    auVar1._4_4_ = fVar5;
    auVar1._0_4_ = fVar5 + auVar13._0_4_;
    auVar1._8_4_ = fVar5;
    auVar1._12_4_ = fVar5;
    auVar14 = rsqrtss(auVar13,auVar1);
    fVar4 = auVar14._0_4_;
    fVar4 = fVar4 * 0.5 * (3.0 - (fVar5 + auVar13._0_4_) * fVar4 * fVar4);
    *param_3 = fVar4 * fVar7;
    param_3[1] = fVar4 * fVar10;
    param_3[2] = fVar4 * fVar11;
    param_3[3] = fVar4 * (fVar3 * 0.0 - fVar3 * 0.0);
    return;
  }
  fVar7 = fVar5 * fVar5;
  fVar11 = fVar10 * fVar10;
  auVar8._4_4_ = fVar7;
  auVar8._0_4_ = fVar7;
  auVar8._8_4_ = fVar7;
  auVar8._12_4_ = fVar7;
  auVar9._4_12_ = auVar8._4_12_;
  auVar9._0_4_ = fVar7 + fVar4 * fVar4;
  auVar14._4_4_ = fVar11;
  auVar14._0_4_ = fVar11 + auVar9._0_4_;
  auVar14._8_4_ = fVar11;
  auVar14._12_4_ = fVar11;
  auVar14 = rsqrtss(auVar9,auVar14);
  fVar7 = auVar14._0_4_;
  fVar7 = fVar7 * 0.5 * (3.0 - (fVar11 + auVar9._0_4_) * fVar7 * fVar7);
  fVar4 = fVar7 * fVar4;
  fVar5 = fVar7 * fVar5;
  fVar10 = fVar7 * fVar10;
  fVar7 = fVar7 * fVar3;
  fVar3 = fVar5 * 0.0 - fVar10 * 1.0;
  fVar11 = fVar10 * 0.0 - fVar4 * 0.0;
  fVar6 = fVar4 * 1.0 - fVar5 * 0.0;
  *param_3 = fVar3;
  param_3[1] = fVar11;
  param_3[2] = fVar6;
  param_3[3] = fVar7 * 0.0 - fVar7 * 0.0;
  if (fVar6 * fVar6 + fVar11 * fVar11 + fVar3 * fVar3 < 1.1920929e-07) {
    *param_3 = fVar5 * 1.0 - fVar10 * 0.0;
    param_3[1] = fVar10 * 0.0 - fVar4 * 1.0;
    param_3[2] = fVar4 * 0.0 - fVar5 * 0.0;
    param_3[3] = fVar7 * 0.0 - fVar7 * 0.0;
  }
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar10 = param_3[2];
  fVar3 = fVar5 * fVar5;
  fVar7 = fVar10 * fVar10;
  auVar15._4_4_ = fVar3;
  auVar15._0_4_ = fVar3;
  auVar15._8_4_ = fVar3;
  auVar15._12_4_ = fVar3;
  auVar16._4_12_ = auVar15._4_12_;
  auVar16._0_4_ = fVar3 + fVar4 * fVar4;
  auVar2._4_4_ = fVar7;
  auVar2._0_4_ = fVar7 + auVar16._0_4_;
  auVar2._8_4_ = fVar7;
  auVar2._12_4_ = fVar7;
  auVar14 = rsqrtss(auVar16,auVar2);
  fVar3 = auVar14._0_4_;
  fVar3 = fVar3 * 0.5 * (3.0 - (fVar7 + auVar16._0_4_) * fVar3 * fVar3);
  *param_3 = fVar3 * fVar4;
  param_3[1] = fVar3 * fVar5;
  param_3[2] = fVar3 * fVar10;
  param_3[3] = fVar3 * param_3[3];
  return;
}



void FUN_0092d6d0(int *param_1,int param_2,int *param_3,float *param_4)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int local_40;
  
  iVar2 = *param_1;
  *param_3 = param_1[1];
  param_3[1] = *(int *)(param_2 + 4);
  param_3[2] = 0;
  param_3[4] = 0;
  param_3[3] = -1;
  pfVar7 = (float *)((uint)*(ushort *)param_3[1] * 0x10 + iVar2);
  pfVar8 = (float *)((uint)*(ushort *)*param_3 * 0x10 + iVar2);
  FUN_0092d400(pfVar8,pfVar7,param_4);
  iVar5 = (param_1[2] + *(int *)(param_2 + 8)) * 2;
  local_40 = 0;
  if (0 < iVar5) {
    do {
      iVar3 = param_1[2];
      bVar4 = false;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        pfVar6 = (float *)((uint)*(ushort *)(param_1[1] + iVar3 * 8) * 0x10 + iVar2);
        if (1e-07 < param_4[2] * (pfVar6[2] - pfVar8[2]) +
                    param_4[1] * (pfVar6[1] - pfVar8[1]) + *param_4 * (*pfVar6 - *pfVar8)) {
          *param_3 = param_1[1] + iVar3 * 8;
          FUN_0092d400(pfVar6,pfVar7,param_4);
          bVar4 = true;
          pfVar8 = pfVar6;
        }
      }
      iVar3 = *(int *)(param_2 + 8);
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        puVar1 = (ushort *)(*(int *)(param_2 + 4) + iVar3 * 8);
        pfVar6 = (float *)((uint)*puVar1 * 0x10 + iVar2);
        if (1e-07 < param_4[2] * (pfVar6[2] - pfVar7[2]) +
                    param_4[1] * (pfVar6[1] - pfVar7[1]) + *param_4 * (*pfVar6 - *pfVar7)) {
          param_3[1] = (int)puVar1;
          FUN_0092d400(pfVar8,pfVar6,param_4);
          bVar4 = true;
          pfVar7 = pfVar6;
        }
      }
      if (!bVar4) {
        return;
      }
      FUN_0092d400(pfVar8,pfVar7,param_4);
      local_40 = local_40 + 1;
    } while (local_40 < iVar5);
  }
  return;
}



float10 FUN_0092d8f0(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar14;
  float fVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  fVar16 = *param_2 - *param_4;
  fVar2 = param_2[1] - param_4[1];
  fVar3 = param_2[2] - param_4[2];
  fVar7 = fVar2 * fVar2;
  fVar8 = fVar3 * fVar3;
  if (fVar8 + fVar7 + fVar16 * fVar16 < *(float *)(param_1 + 8)) {
    return (float10)0.0;
  }
  auVar11._4_4_ = fVar7;
  auVar11._0_4_ = fVar7;
  auVar11._8_4_ = fVar7;
  auVar11._12_4_ = fVar7;
  auVar12._4_12_ = auVar11._4_12_;
  auVar12._0_4_ = fVar7 + fVar16 * fVar16;
  auVar13._4_4_ = fVar8;
  auVar13._0_4_ = fVar8 + auVar12._0_4_;
  auVar13._8_4_ = fVar8;
  auVar13._12_4_ = fVar8;
  auVar13 = rsqrtss(auVar12,auVar13);
  fVar7 = auVar13._0_4_;
  fVar6 = fVar7 * 0.5 * (3.0 - (fVar8 + auVar12._0_4_) * fVar7 * fVar7);
  fVar8 = *param_3;
  fVar9 = param_3[1];
  fVar14 = param_3[2];
  fVar7 = -(fVar14 * fVar6 * fVar3 + fVar9 * fVar6 * fVar2 + fVar8 * fVar6 * fVar16);
  fVar10 = (param_4[1] - param_5[1]) * fVar14 - (param_4[2] - param_5[2]) * fVar9;
  fVar14 = (param_4[2] - param_5[2]) * fVar8 - (*param_4 - *param_5) * fVar14;
  fVar15 = (*param_4 - *param_5) * fVar9 - (param_4[1] - param_5[1]) * fVar8;
  fVar8 = fVar14 * fVar14;
  fVar9 = fVar15 * fVar15;
  auVar17._4_4_ = fVar8;
  auVar17._0_4_ = fVar8;
  auVar17._8_4_ = fVar8;
  auVar17._12_4_ = fVar8;
  auVar18._4_12_ = auVar17._4_12_;
  auVar18._0_4_ = fVar8 + fVar10 * fVar10;
  auVar1._4_4_ = fVar9;
  auVar1._0_4_ = fVar9 + auVar18._0_4_;
  auVar1._8_4_ = fVar9;
  auVar1._12_4_ = fVar9;
  auVar13 = rsqrtss(auVar18,auVar1);
  fVar8 = auVar13._0_4_;
  fVar8 = fVar8 * 0.5 * (3.0 - (fVar9 + auVar18._0_4_) * fVar8 * fVar8);
  fVar16 = fVar8 * fVar15 * fVar6 * fVar3 +
           fVar8 * fVar14 * fVar6 * fVar2 + fVar8 * fVar10 * fVar6 * fVar16;
  if (fVar7 * fVar7 + fVar16 * fVar16 < *(float *)(param_1 + 8)) {
    return (float10)1.7014117e+38;
  }
  fVar2 = ABS(fVar7);
  if ((1e-06 <= fVar2) || (1e-07 <= ABS(fVar16))) {
    if (fVar2 <= ABS(fVar16)) {
      if ((-0.999999 <= fVar16) || (1e-06 <= fVar2)) {
        if (-1e-06 <= fVar16) {
          fVar5 = (float10)0.0;
        }
        else {
          fVar5 = (float10)4.0;
        }
        fVar5 = fVar5 + (float10)fVar7 / (float10)fVar16;
      }
      else {
        fVar5 = (float10)4.0;
      }
      if (ABS(fVar5) < (float10)*(float *)(param_1 + 0x30)) goto LAB_0092dbe7;
      if ((fVar16 <= 1e-06) || (1e-07 <= fVar2)) goto LAB_0092dc18;
      fVar4 = (float10)8.0;
    }
    else {
      fVar5 = (float10)2.0 - (float10)fVar16 / (float10)fVar7;
      if (-1e-06 <= fVar7) {
LAB_0092dc18:
        fVar4 = (float10)0.0;
      }
      else {
        fVar4 = (float10)4.0;
      }
    }
    fVar4 = fVar4 + fVar5;
  }
  else {
    if (fVar16 < 0.0) {
      fVar4 = (float10)4.0;
      goto LAB_0092dc20;
    }
LAB_0092dbe7:
    fVar4 = (float10)0.0;
  }
LAB_0092dc20:
  if (fVar4 < -(float10)*(float *)(param_1 + 0x30)) {
    fVar4 = fVar4 + (float10)8.0;
  }
  if ((float10)8.0 < fVar4) {
    fVar4 = (float10)0.0;
  }
  return fVar4;
}



void FUN_0092dc50(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (**(ushort **)(in_ECX + 0x14) < **(ushort **)(in_ECX + 0x10)) {
    uVar1 = *(undefined4 *)(in_ECX + 0x10);
    *(ushort **)(in_ECX + 0x10) = *(ushort **)(in_ECX + 0x14);
    *(undefined4 *)(in_ECX + 0x14) = uVar1;
  }
  if (**(ushort **)(in_ECX + 0x18) < **(ushort **)(in_ECX + 0x14)) {
    uVar1 = *(undefined4 *)(in_ECX + 0x14);
    *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0x18);
    *(undefined4 *)(in_ECX + 0x18) = uVar1;
  }
  if (**(ushort **)(in_ECX + 0x14) < **(ushort **)(in_ECX + 0x10)) {
    uVar1 = *(undefined4 *)(in_ECX + 0x10);
    *(ushort **)(in_ECX + 0x10) = *(ushort **)(in_ECX + 0x14);
    *(undefined4 *)(in_ECX + 0x14) = uVar1;
  }
  return;
}



void FUN_0092dca0(float param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  float *local_44;
  float *local_40;
  
  pfVar6 = (float *)*param_2;
  iVar7 = param_2[1] - 1;
  local_40 = pfVar6;
  if (iVar7 < 0) {
LAB_0092ddf5:
    uVar9 = (int)((int)local_40 - *param_2) >> 4;
    *param_3 = uVar9;
    if ((int)(param_2[2] & 0x3fffffff) < (int)uVar9) {
      uVar4 = (param_2[2] & 0x3fffffff) * 2;
      if ((int)uVar4 <= (int)uVar9) {
        uVar4 = uVar9;
      }
      FUN_008a6e40(param_2,uVar4,0x10);
    }
    param_2[1] = uVar9;
    return;
  }
  local_44 = pfVar6 + -4;
LAB_0092dcd0:
  if ((float *)*param_2 <= local_44) {
    pfVar5 = local_44;
    do {
      if (*pfVar5 < *pfVar6 - 0.01) break;
      if ((pfVar5[2] - pfVar6[2]) * (pfVar5[2] - pfVar6[2]) +
          (pfVar5[1] - pfVar6[1]) * (pfVar5[1] - pfVar6[1]) +
          (*pfVar5 - *pfVar6) * (*pfVar5 - *pfVar6) < param_1) {
        iVar10 = iVar7 + -1;
        if (iVar10 < 0) goto LAB_0092dde7;
        pfVar8 = pfVar6 + 6;
        goto LAB_0092dd80;
      }
      pfVar5 = pfVar5 + -4;
    } while ((float *)*param_2 <= pfVar5);
  }
  fVar1 = pfVar6[1];
  fVar2 = pfVar6[2];
  fVar3 = pfVar6[3];
  local_44 = local_44 + 4;
  *local_40 = *pfVar6;
  local_40[1] = fVar1;
  local_40[2] = fVar2;
  local_40[3] = fVar3;
  local_40 = local_40 + 4;
  goto LAB_0092dde7;
  while( true ) {
    pfVar6 = pfVar6 + 4;
    pfVar8 = pfVar8 + 4;
    iVar7 = iVar7 + -1;
    iVar10 = iVar10 + -1;
    if (iVar10 < 0) break;
LAB_0092dd80:
    if (param_1 <=
        (pfVar5[2] - *pfVar8) * (pfVar5[2] - *pfVar8) +
        (pfVar5[1] - pfVar8[-1]) * (pfVar5[1] - pfVar8[-1]) +
        (*pfVar5 - pfVar8[-2]) * (*pfVar5 - pfVar8[-2])) break;
  }
LAB_0092dde7:
  pfVar6 = pfVar6 + 4;
  iVar7 = iVar7 + -1;
  if (iVar7 < 0) goto LAB_0092ddf5;
  goto LAB_0092dcd0;
}



void FUN_0092de30(int *param_1,float param_2,int param_3,char *param_4,undefined1 *param_5)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  ushort *puVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float *local_b0;
  uint local_ac;
  uint local_a8;
  float *local_a4;
  float local_a0;
  float local_9c;
  ushort *local_98;
  float local_94;
  float *local_90;
  float local_8c;
  ushort *local_88;
  ushort *local_84;
  float local_80;
  int local_7c;
  ushort *local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  int local_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  *param_5 = 0;
  if (*param_4 != '\0') {
    iVar4 = param_1[1];
    iVar11 = *param_1;
    iVar3 = 0;
    if (0 < param_1[2]) {
      do {
        *(undefined2 *)(param_1[1] + 6 + iVar3 * 8) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[2]);
    }
    local_9c = 0.0;
    local_7c = iVar4;
    local_54 = iVar11;
    if (0 < param_1[2]) {
      do {
        puVar10 = (ushort *)(param_1[1] + (int)local_9c * 8);
        if (puVar10[3] != 1) {
          uVar1 = puVar10[1];
          puVar10[3] = 1;
          *(undefined2 *)(iVar4 + 6 + (uint)uVar1 * 8) = 1;
          local_a4 = (float *)(uint)*puVar10;
          local_a0 = (float)(uint)*(ushort *)(iVar4 + (uint)uVar1 * 8);
          pfVar5 = (float *)((int)local_a0 * 0x10 + iVar11);
          pfVar9 = (float *)((int)local_a4 * 0x10 + iVar11);
          fVar14 = *pfVar5 - *pfVar9;
          uVar7 = 0;
          local_84 = (ushort *)0x358637bd;
          fVar16 = pfVar5[1] - pfVar9[1];
          fVar19 = pfVar5[2] - pfVar9[2];
          fStack_64 = pfVar5[3] - pfVar9[3];
          local_b0 = (float *)0x0;
          local_a8 = 0x80000000;
          local_ac = 0;
          local_88 = (ushort *)(fVar19 * fVar19 + fVar16 * fVar16 + fVar14 * fVar14);
          local_8c = local_a0;
          local_80 = (float)local_a4;
          local_78 = local_88;
          local_70 = fVar14;
          fStack_6c = fVar16;
          fStack_68 = fVar19;
          if (((((float *)local_a0 != local_a4) && (pfVar9[3] == 0.0)) && (pfVar5[3] == 0.0)) &&
             (local_94 = param_2, (int)param_2 < param_3 + 1)) {
            local_90 = (float *)((int)param_2 * 0x10 + 0xc + iVar11);
            do {
              if (((local_80 != local_94) && (local_8c != local_94)) && (*local_90 == 0.0)) {
                local_50 = local_90[-3] - *pfVar9;
                fStack_4c = local_90[-2] - pfVar9[1];
                fStack_48 = local_90[-1] - pfVar9[2];
                fStack_44 = *local_90 - pfVar9[3];
                local_98 = (ushort *)(fVar19 * fStack_48 + fVar16 * fStack_4c + fVar14 * local_50);
                fVar12 = fVar16 * fStack_48 - fVar19 * fStack_4c;
                fVar13 = fVar19 * local_50 - fVar14 * fStack_48;
                fVar15 = fVar14 * fStack_4c - fVar16 * local_50;
                local_74 = fVar15 * fVar15 + fVar13 * fVar13 + fVar12 * fVar12;
                if (local_74 < *(float *)(param_4 + 8)) {
                  if ((float)local_84 <= (float)local_98) {
                    if ((float)local_98 <= (float)local_88) {
                      if (uVar7 == (local_a8 & 0x3fffffff)) {
                        FUN_008a6ee0(&local_b0,4);
                        uVar7 = local_ac;
                        fVar14 = local_70;
                        fVar16 = fStack_6c;
                        fVar19 = fStack_68;
                      }
                      local_b0[uVar7] = local_94;
                    }
                    else {
                      if (uVar7 == (local_a8 & 0x3fffffff)) {
                        FUN_008a6ee0(&local_b0,4);
                        uVar7 = local_ac;
                        fVar14 = local_70;
                        fVar16 = fStack_6c;
                        fVar19 = fStack_68;
                      }
                      local_b0[uVar7] = local_a0;
                      local_a0 = local_94;
                      local_88 = local_98;
                    }
                  }
                  else {
                    if (uVar7 == (local_a8 & 0x3fffffff)) {
                      FUN_008a6ee0(&local_b0,4);
                      uVar7 = local_ac;
                      fVar14 = local_70;
                      fVar16 = fStack_6c;
                      fVar19 = fStack_68;
                    }
                    local_b0[uVar7] = (float)local_a4;
                    local_a4 = (float *)local_94;
                    local_84 = local_98;
                  }
                  uVar7 = local_ac + 1;
                  local_ac = uVar7;
                }
              }
              local_90 = local_90 + 4;
              local_94 = (float)((int)local_94 + 1);
            } while ((int)local_94 < param_3 + 1);
          }
          iVar3 = 0;
          if (0 < (int)uVar7) {
            do {
              fVar14 = local_b0[iVar3];
              if (((float *)fVar14 != local_a4) && (fVar14 != local_a0)) {
                *(undefined4 *)((int)fVar14 * 0x10 + 0xc + iVar11) = 0x3f800000;
                *param_5 = 1;
                uVar7 = local_ac;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < (int)uVar7);
          }
          if (-1 < (int)local_a8) {
            FUN_008a75d0(local_b0,local_a8 << 2,0x14);
          }
        }
        local_9c = (float)((int)local_9c + 1);
      } while ((int)local_9c < param_1[2]);
    }
    iVar3 = 0;
    if (0 < param_1[2]) {
      do {
        *(undefined2 *)(param_1[1] + 6 + iVar3 * 8) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[2]);
    }
    if ((2 < param_3 - (int)param_2) && (2 < param_1[2])) {
      local_98 = (ushort *)(param_3 + 1);
      local_a0 = param_2;
      if ((int)param_2 < (int)local_98) {
        local_a4 = (float *)((int)param_2 * 0x10 + 0xc + iVar11);
        do {
          if (*local_a4 == 0.0) {
            uVar7 = 0x80000000;
            local_b0 = (float *)0x0;
            local_ac = 0;
            local_a8 = 0x80000000;
            local_9c = 0.0;
            if (0 < param_1[2]) {
              do {
                if ((*(short *)(param_1[1] + 6 + (int)local_9c * 8) != 1) &&
                   ((float)(uint)*(ushort *)(param_1[1] + (int)local_9c * 8) == local_a0)) {
                  *(undefined2 *)(param_1[1] + 6 + (int)local_9c * 8) = 1;
                  local_74 = 3.0;
                  puVar10 = (ushort *)
                            (iVar4 + (uint)*(ushort *)(param_1[1] + 2 + (int)local_9c * 8) * 8);
                  local_30 = 3.0;
                  uStack_2c = 0;
                  uStack_28 = 0;
                  uStack_24 = 0;
                  local_78 = (ushort *)0x3f000000;
                  local_20 = 0.5;
                  uStack_1c = 0;
                  uStack_18 = 0;
                  uStack_14 = 0;
                  local_88 = puVar10;
                  do {
                    uVar7 = local_ac;
                    *(undefined2 *)(iVar4 + 6 + (uint)puVar10[2] * 8) = 1;
                    pfVar9 = (float *)((uint)*puVar10 * 0x10 + iVar11);
                    pfVar5 = (float *)((uint)*(ushort *)(iVar4 + (uint)puVar10[2] * 8) * 0x10 +
                                      iVar11);
                    pfVar8 = (float *)((uint)*(ushort *)
                                              (iVar4 + (uint)*(ushort *)
                                                              (iVar4 + (uint)puVar10[2] * 8 + 4) * 8
                                              ) * 0x10 + iVar11);
                    local_70 = *pfVar9 - *pfVar5;
                    iVar3 = local_ac + 1;
                    fStack_6c = pfVar9[1] - pfVar5[1];
                    fStack_68 = pfVar9[2] - pfVar5[2];
                    fStack_64 = pfVar9[3] - pfVar5[3];
                    local_50 = *pfVar8 - *pfVar5;
                    fStack_4c = pfVar8[1] - pfVar5[1];
                    fStack_48 = pfVar8[2] - pfVar5[2];
                    fStack_44 = pfVar8[3] - pfVar5[3];
                    if ((int)(local_a8 & 0x3fffffff) < iVar3) {
                      iVar4 = (local_a8 & 0x3fffffff) * 2;
                      if (iVar4 <= iVar3) {
                        iVar4 = iVar3;
                      }
                      FUN_008a6e40(&local_b0,iVar4,0x10);
                    }
                    fVar16 = fStack_6c * fStack_48 - fStack_68 * fStack_4c;
                    fVar19 = fStack_68 * local_50 - local_70 * fStack_48;
                    fVar12 = local_70 * fStack_4c - fStack_6c * local_50;
                    fVar14 = fVar19 * fVar19;
                    fStack_3c = fVar12 * fVar12;
                    auVar20._4_4_ = fVar14;
                    auVar20._0_4_ = fVar14;
                    auVar20._8_4_ = fVar14;
                    auVar20._12_4_ = fVar14;
                    auVar21._4_12_ = auVar20._4_12_;
                    auVar21._0_4_ = fVar14 + fVar16 * fVar16;
                    auVar22._4_4_ = fStack_3c;
                    auVar22._0_4_ = fStack_3c + auVar21._0_4_;
                    auVar22._8_4_ = fStack_3c;
                    auVar22._12_4_ = fStack_3c;
                    auVar22 = rsqrtss(auVar21,auVar22);
                    local_40 = auVar22._0_4_;
                    pfVar5 = local_b0 + uVar7 * 4;
                    fVar14 = local_20 * local_40 *
                             (local_30 - (fStack_3c + auVar21._0_4_) * local_40 * local_40);
                    *pfVar5 = fVar14 * fVar16;
                    pfVar5[1] = fVar14 * fVar19;
                    pfVar5[2] = fVar14 * fVar12;
                    pfVar5[3] = fVar14 * (fStack_64 * fStack_44 - fStack_64 * fStack_44);
                    puVar10 = (ushort *)
                              (local_7c + (uint)*(ushort *)(local_7c + 2 + (uint)puVar10[2] * 8) * 8
                              );
                    uVar7 = local_a8;
                    iVar4 = local_7c;
                    iVar11 = local_54;
                    local_ac = iVar3;
                    fStack_38 = fStack_3c;
                    fStack_34 = fStack_3c;
                  } while (puVar10 != local_88);
                }
                local_9c = (float)((int)local_9c + 1);
              } while ((int)local_9c < param_1[2]);
              if (0 < (int)local_ac) {
                fVar14 = 0.0;
                fVar16 = 0.0;
                fVar19 = 0.0;
                pfVar5 = local_b0;
                uVar6 = local_ac;
                do {
                  fVar12 = *pfVar5;
                  pfVar9 = pfVar5 + 1;
                  pfVar8 = pfVar5 + 2;
                  pfVar5 = pfVar5 + 4;
                  uVar6 = uVar6 + -1;
                  fVar14 = fVar14 + fVar12;
                  fVar16 = fVar16 + *pfVar9;
                  fVar19 = fVar19 + *pfVar8;
                } while (uVar6 != 0);
                fVar12 = fVar16 * fVar16;
                fVar13 = fVar19 * fVar19;
                local_84 = (ushort *)(fVar13 + fVar12 + fVar14 * fVar14);
                if (*(float *)(param_4 + 0xc) < (float)local_84) {
                  auVar17._4_4_ = fVar12;
                  auVar17._0_4_ = fVar12;
                  auVar17._8_4_ = fVar12;
                  auVar17._12_4_ = fVar12;
                  auVar18._4_12_ = auVar17._4_12_;
                  auVar18._0_4_ = fVar12 + fVar14 * fVar14;
                  auVar2._4_4_ = fVar13;
                  auVar2._0_4_ = fVar13 + auVar18._0_4_;
                  auVar2._8_4_ = fVar13;
                  auVar2._12_4_ = fVar13;
                  auVar22 = rsqrtss(auVar18,auVar2);
                  local_40 = auVar22._0_4_;
                  local_80 = 3.0;
                  local_90 = (float *)0x3f000000;
                  fVar12 = local_40 * 0.5 * (3.0 - (fVar13 + auVar18._0_4_) * local_40 * local_40);
                  iVar3 = 0;
                  fStack_3c = fVar13;
                  fStack_38 = fVar13;
                  fStack_34 = fVar13;
                  if (0 < (int)local_ac) {
                    local_9c = 1.0 - *(float *)(param_4 + 0xc);
                    pfVar5 = local_b0;
                    do {
                      local_8c = pfVar5[2] * fVar12 * fVar19 +
                                 pfVar5[1] * fVar12 * fVar16 + *pfVar5 * fVar12 * fVar14;
                      uVar7 = local_a8;
                      if (local_8c < local_9c) goto LAB_0092e5e9;
                      iVar3 = iVar3 + 1;
                      pfVar5 = pfVar5 + 4;
                    } while (iVar3 < (int)local_ac);
                  }
                  *local_a4 = 1.0;
                  *param_5 = 1;
                }
              }
            }
LAB_0092e5e9:
            if (-1 < (int)uVar7) {
              FUN_008a75d0(local_b0,uVar7 << 4,0x14);
            }
          }
          local_a0 = (float)((int)local_a0 + 1);
          local_a4 = local_a4 + 4;
        } while ((int)local_a0 < (int)local_98);
      }
    }
  }
  return;
}



void FUN_0092e640(float *param_1,float *param_2,float *param_3,float *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  iVar2 = param_5[1];
  iVar4 = iVar2 + 1;
  if ((int)(param_5[2] & 0x3fffffffU) < iVar4) {
    iVar1 = (param_5[2] & 0x3fffffffU) * 2;
    if (iVar1 <= iVar4) {
      iVar1 = iVar4;
    }
    FUN_008a6e40(param_5,iVar1,0x10);
  }
  param_5[1] = iVar4;
  pfVar3 = (float *)(iVar2 * 0x10 + *param_5);
  fVar5 = param_1[1] * (param_2[2] - param_3[2]) - param_1[2] * (param_2[1] - param_3[1]);
  fVar10 = param_1[2] * (*param_2 - *param_3) - *param_1 * (param_2[2] - param_3[2]);
  fVar11 = *param_1 * (param_2[1] - param_3[1]) - param_1[1] * (*param_2 - *param_3);
  fVar12 = param_1[3] * (param_2[3] - param_3[3]) - param_1[3] * (param_2[3] - param_3[3]);
  *pfVar3 = fVar5;
  pfVar3[1] = fVar10;
  pfVar3[2] = fVar11;
  pfVar3[3] = fVar12;
  if (1e-06 < fVar11 * (param_4[2] - param_3[2]) +
              fVar10 * (param_4[1] - param_3[1]) + fVar5 * (*param_4 - *param_3)) {
    *pfVar3 = -fVar5;
    pfVar3[1] = -fVar10;
    pfVar3[2] = -fVar11;
    pfVar3[3] = -fVar12;
  }
  fVar5 = *pfVar3 * *pfVar3;
  fVar10 = pfVar3[1] * pfVar3[1];
  fVar11 = pfVar3[2] * pfVar3[2];
  if (0.0001 < fVar11 + fVar10 + fVar5) {
    auVar7._4_4_ = fVar10;
    auVar7._0_4_ = fVar10;
    auVar7._8_4_ = fVar10;
    auVar7._12_4_ = fVar10;
    auVar8._4_12_ = auVar7._4_12_;
    auVar8._0_4_ = fVar10 + fVar5;
    auVar9._4_4_ = fVar11;
    auVar9._0_4_ = fVar11 + auVar8._0_4_;
    auVar9._8_4_ = fVar11;
    auVar9._12_4_ = fVar11;
    auVar9 = rsqrtss(auVar8,auVar9);
    fVar6 = auVar9._0_4_;
    fVar5 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar12 = pfVar3[2];
    fVar11 = fVar6 * 0.5 * (3.0 - (fVar11 + auVar8._0_4_) * fVar6 * fVar6);
    *pfVar3 = fVar11 * fVar5;
    pfVar3[1] = fVar11 * fVar10;
    pfVar3[2] = fVar11 * fVar12;
    pfVar3[3] = fVar11 * pfVar3[3];
    pfVar3[3] = -(fVar11 * fVar12 * param_2[2] +
                 fVar11 * fVar10 * param_2[1] + fVar11 * fVar5 * *param_2);
    return;
  }
  iVar4 = param_5[1] + -1;
  if ((int)(param_5[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_5[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_008a6e40(param_5,iVar2,0x10);
  }
  param_5[1] = iVar4;
  return;
}



void FUN_0092e860(int *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40 [6];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  FUN_0092cd60(param_1,&local_90);
  *param_3 = local_90 + local_80;
  param_3[1] = local_8c + local_7c;
  param_3[2] = local_88 + local_78;
  param_3[3] = local_84 + local_74;
  *param_3 = *param_3 * 0.5;
  param_3[1] = param_3[1] * 0.5;
  param_3[2] = param_3[2] * 0.5;
  param_3[3] = param_3[3] * 0.5;
  *param_2 = local_80 - local_90;
  param_2[1] = local_7c - local_8c;
  param_2[2] = local_78 - local_88;
  param_2[3] = local_74 - local_84;
  fStack_18 = 1.0;
  if (1.1920929e-07 < param_2[2]) {
    fStack_18 = 1.0 / param_2[2];
  }
  local_40[5] = 1.0;
  if (1.1920929e-07 < param_2[1]) {
    local_40[5] = 1.0 / param_2[1];
  }
  local_40[0] = 1.0;
  if (1.1920929e-07 < *param_2) {
    local_40[0] = 1.0 / *param_2;
  }
  local_40[1] = 0.0;
  local_40[2] = 0.0;
  local_40[3] = 0.0;
  local_40[4] = 0.0;
  uStack_28 = 0;
  uStack_24 = 0;
  iVar3 = 0;
  local_20 = 0;
  uStack_1c = 0;
  uStack_14 = 0;
  local_94 = 0;
  if (0 < param_1[1]) {
    do {
      local_70 = *(float *)(*param_1 + iVar3) - *param_3;
      iVar1 = *param_1 + iVar3;
      local_60 = *(float *)(iVar1 + 4) - param_3[1];
      local_88 = *(float *)(iVar1 + 8) - param_3[2];
      local_6c = DAT_00ba7a40;
      local_68 = DAT_00ba7a40;
      local_5c = DAT_00ba7a44;
      local_58 = DAT_00ba7a44;
      local_48 = DAT_00ba7a48;
      local_64 = 0;
      local_54 = 0;
      local_4c = DAT_00ba7a48;
      local_44 = 0;
      local_50 = local_88;
      FUN_008d2c20(local_40);
      pfVar2 = (float *)(*param_1 + iVar3);
      *pfVar2 = local_70;
      pfVar2[1] = local_60;
      iVar3 = iVar3 + 0x10;
      pfVar2[2] = local_50;
      pfVar2[3] = 0.0;
      local_94 = local_94 + 1;
    } while (local_94 < param_1[1]);
  }
  return;
}



void FUN_0092ea40(int *param_1,undefined4 *param_2,float *param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  undefined4 *puVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
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
  
  local_40 = *param_2;
  uStack_2c = param_2[1];
  uStack_18 = param_2[2];
  local_20 = 0;
  uStack_1c = 0;
  uStack_14 = 0;
  iVar14 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  if (0 < param_1[1]) {
    iVar15 = 0;
    do {
      uVar2 = *(undefined4 *)(*param_1 + iVar15);
      iVar11 = *param_1 + iVar15;
      uVar3 = *(undefined4 *)(iVar11 + 4);
      uVar4 = *(undefined4 *)(iVar11 + 8);
      FUN_008d2c20(&local_40);
      puVar12 = (undefined4 *)(*param_1 + iVar15);
      *puVar12 = uVar2;
      puVar12[1] = uVar3;
      puVar12[2] = uVar4;
      puVar12[3] = 0;
      pfVar1 = (float *)(*param_1 + iVar15);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      fVar8 = param_3[1];
      fVar9 = param_3[2];
      fVar10 = param_3[3];
      pfVar13 = (float *)(*param_1 + iVar15);
      *pfVar13 = *pfVar1 + *param_3;
      pfVar13[1] = fVar5 + fVar8;
      pfVar13[2] = fVar6 + fVar9;
      pfVar13[3] = fVar7 + fVar10;
      iVar14 = iVar14 + 1;
      iVar15 = iVar15 + 0x10;
    } while (iVar14 < param_1[1]);
  }
  return;
}



void FUN_0092eb50(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  uVar4 = param_1[1];
  puVar6 = (undefined4 *)*param_1;
  iVar9 = uVar4 - 1;
  puVar8 = puVar6;
  if (3 < (int)uVar4) {
    uVar4 = uVar4 >> 2;
    iVar9 = iVar9 + uVar4 * -4;
    do {
      puVar7 = puVar8;
      if ((float)puVar6[3] == 0.0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        puVar7 = puVar8 + 4;
        *puVar8 = *puVar6;
        puVar8[1] = uVar1;
        puVar8[2] = uVar2;
        puVar8[3] = uVar3;
      }
      puVar8 = puVar7;
      if ((float)puVar6[7] == 0.0) {
        uVar1 = puVar6[5];
        uVar2 = puVar6[6];
        uVar3 = puVar6[7];
        puVar8 = puVar7 + 4;
        *puVar7 = puVar6[4];
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
      }
      puVar7 = puVar8;
      if ((float)puVar6[0xb] == 0.0) {
        uVar1 = puVar6[9];
        uVar2 = puVar6[10];
        uVar3 = puVar6[0xb];
        puVar7 = puVar8 + 4;
        *puVar8 = puVar6[8];
        puVar8[1] = uVar1;
        puVar8[2] = uVar2;
        puVar8[3] = uVar3;
      }
      puVar8 = puVar7;
      if ((float)puVar6[0xf] == 0.0) {
        uVar1 = puVar6[0xd];
        uVar2 = puVar6[0xe];
        uVar3 = puVar6[0xf];
        puVar8 = puVar7 + 4;
        *puVar7 = puVar6[0xc];
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
      }
      puVar6 = puVar6 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (-1 < iVar9) {
    iVar9 = iVar9 + 1;
    puVar7 = puVar8;
    do {
      puVar8 = puVar7;
      if ((float)puVar6[3] == 0.0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        puVar8 = puVar7 + 4;
        *puVar7 = *puVar6;
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
      }
      puVar6 = puVar6 + 4;
      iVar9 = iVar9 + -1;
      puVar7 = puVar8;
    } while (iVar9 != 0);
  }
  iVar9 = (int)puVar8 - *param_1 >> 4;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar9) {
    iVar5 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar9) {
      iVar5 = iVar9;
    }
    FUN_008a6e40(param_1,iVar5,0x10);
  }
  param_1[1] = iVar9;
  return;
}



void FUN_0092ec70(int param_1,int param_2,float param_3,float *param_4,ushort *param_5,
                 float *param_6,float *param_7,int *param_8)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  
  fVar10 = *(float *)(param_2 + 0xc);
  pfVar7 = (float *)((uint)*param_5 * 0x10 + param_1);
  local_40 = *param_4;
  fStack_3c = param_4[1];
  fStack_38 = param_4[2];
  fStack_34 = param_4[3];
  fVar3 = *param_6 - *param_7;
  fVar4 = param_6[1] - param_7[1];
  fVar5 = param_6[2] - param_7[2];
  fVar6 = param_6[3] - param_7[3];
  if ((param_3 < fVar10) || (8.0 - fVar10 < param_3)) {
    fVar12 = fStack_3c * fVar5 - fStack_38 * fVar4;
    fVar13 = fStack_38 * fVar3 - local_40 * fVar5;
    fStack_38 = local_40 * fVar4 - fStack_3c * fVar3;
    fVar14 = fStack_34 * fVar6 - fStack_34 * fVar6;
    fVar10 = fVar13 * fVar13;
    fVar11 = fStack_38 * fStack_38;
    auVar19._4_4_ = fVar10;
    auVar19._0_4_ = fVar10;
    auVar19._8_4_ = fVar10;
    auVar19._12_4_ = fVar10;
    auVar20._4_12_ = auVar19._4_12_;
    auVar20._0_4_ = fVar10 + fVar12 * fVar12;
    auVar18._4_4_ = fVar11;
    auVar18._0_4_ = fVar11 + auVar20._0_4_;
    auVar18._8_4_ = fVar11;
    auVar18._12_4_ = fVar11;
    auVar18 = rsqrtss(auVar20,auVar18);
    fVar15 = auVar18._0_4_;
    fVar10 = (fVar11 + auVar20._0_4_) * fVar15 * fVar15;
  }
  else {
    if (fVar10 <= ABS(param_3 - 4.0)) goto LAB_0092ee5b;
    fVar12 = fVar4 * fStack_38 - fVar5 * fStack_3c;
    fVar13 = fVar5 * local_40 - fVar3 * fStack_38;
    fStack_38 = fVar3 * fStack_3c - fVar4 * local_40;
    fVar14 = fVar6 * fStack_34 - fVar6 * fStack_34;
    fVar10 = fVar13 * fVar13;
    fVar11 = fStack_38 * fStack_38;
    auVar16._4_4_ = fVar10;
    auVar16._0_4_ = fVar10;
    auVar16._8_4_ = fVar10;
    auVar16._12_4_ = fVar10;
    auVar17._4_12_ = auVar16._4_12_;
    auVar17._0_4_ = fVar10 + fVar12 * fVar12;
    auVar2._4_4_ = fVar11;
    auVar2._0_4_ = fVar11 + auVar17._0_4_;
    auVar2._8_4_ = fVar11;
    auVar2._12_4_ = fVar11;
    auVar18 = rsqrtss(auVar17,auVar2);
    fVar15 = auVar18._0_4_;
    fVar10 = (fVar11 + auVar17._0_4_) * fVar15 * fVar15;
  }
  fStack_34 = fVar15 * 0.5 * (3.0 - fVar10);
  local_40 = fStack_34 * fVar12;
  fStack_3c = fStack_34 * fVar13;
  fStack_38 = fStack_34 * fStack_38;
  fStack_34 = fStack_34 * fVar14;
LAB_0092ee5b:
  fVar10 = *pfVar7;
  fVar11 = pfVar7[1];
  fVar12 = pfVar7[2];
  fVar13 = pfVar7[3];
  local_20 = (fStack_3c * fVar5 - fStack_38 * fVar4) + fVar10;
  fStack_1c = (fStack_38 * fVar3 - local_40 * fVar5) + fVar11;
  fStack_18 = (local_40 * fVar4 - fStack_3c * fVar3) + fVar12;
  fStack_14 = (fStack_34 * fVar6 - fStack_34 * fVar6) + fVar13;
  local_30 = fVar10;
  fStack_2c = fVar11;
  fStack_28 = fVar12;
  fStack_24 = fVar13;
  if (pfVar7 != param_6) {
    local_30 = local_20;
    fStack_2c = fStack_1c;
    fStack_28 = fStack_18;
    fStack_24 = fStack_14;
    local_20 = fVar10;
    fStack_1c = fVar11;
    fStack_18 = fVar12;
    fStack_14 = fVar13;
  }
  iVar8 = 0;
  if (0 < param_8[1]) {
    do {
      puVar1 = (undefined4 *)(*param_8 + iVar8 * 8);
      fVar9 = (float10)FUN_0092d8f0(param_2,(uint)*(ushort *)*puVar1 * 0x10 + param_1,&local_40,
                                    &local_20,&local_30);
      puVar1[1] = (float)fVar9;
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_8[1]);
  }
  if (1 < param_8[1]) {
    FUN_0092cc50(*param_8,0,param_8[1] + -1,&LAB_0092ca50);
  }
  return;
}



void FUN_0092ef10(float *param_1,undefined4 *param_2,int *param_3,int *param_4,int *param_5)

{
  short *psVar1;
  short *psVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  float local_1c;
  int local_18;
  
  puVar4 = param_2;
  if (param_3[1] == 0) {
    local_1c = *(float *)(*param_4 + 4);
  }
  else if (param_4[1] == 0) {
    local_1c = *(float *)(*param_3 + 4);
  }
  else {
    local_1c = *(float *)(*param_4 + 4);
    if (*(float *)(*param_3 + 4) < local_1c) {
      local_1c = *(float *)(*param_3 + 4);
    }
  }
  psVar1 = (short *)param_2[1];
  local_18 = 0;
  if (0 < param_3[1]) {
    do {
      fVar3 = *(float *)(*param_3 + 4 + local_18 * 8) - local_1c;
      if (*param_1 < fVar3) break;
      psVar2 = *(short **)(*param_3 + local_18 * 8);
      fVar3 = fVar3 + (float)param_2[4];
      uVar7 = (uint)*(ushort *)*param_2;
      if (0 < param_5[1]) {
        puVar5 = (undefined4 *)*param_5;
        iVar6 = 0;
        do {
          if (((*(short *)*puVar5 == *psVar2) && (*(short *)puVar5[1] == *psVar1)) &&
             (puVar5[3] == uVar7)) {
            puVar5 = (undefined4 *)(*param_5 + iVar6 * 0x14);
            if (*(float *)(*param_5 + 0x10 + iVar6 * 0x14) < fVar3) {
              *puVar5 = psVar2;
              puVar5[1] = psVar1;
              puVar5[2] = param_2;
              puVar5[3] = uVar7;
              puVar5[4] = fVar3;
            }
            goto LAB_0092f045;
          }
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 5;
        } while (iVar6 < param_5[1]);
      }
      if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
        FUN_008a6ee0(param_5,0x14);
      }
      puVar5 = (undefined4 *)(*param_5 + param_5[1] * 0x14);
      *puVar5 = psVar2;
      puVar5[1] = psVar1;
      puVar5[2] = param_2;
      puVar5[3] = uVar7;
      puVar5[4] = fVar3;
      param_5[1] = param_5[1] + 1;
LAB_0092f045:
      local_18 = local_18 + 1;
    } while (local_18 < param_3[1]);
  }
  psVar1 = (short *)*param_2;
  param_2 = (undefined4 *)0x0;
  if (0 < param_4[1]) {
    while( true ) {
      fVar3 = *(float *)(*param_4 + 4 + (int)param_2 * 8) - local_1c;
      if (*param_1 < fVar3) break;
      fVar3 = fVar3 + (float)puVar4[4];
      psVar2 = *(short **)(*param_4 + (int)param_2 * 8);
      uVar7 = (uint)*(ushort *)puVar4[1];
      iVar6 = 0;
      if (0 < param_5[1]) {
        puVar5 = (undefined4 *)*param_5;
        do {
          if (((*(short *)*puVar5 == *psVar1) && (*(short *)puVar5[1] == *psVar2)) &&
             (puVar5[3] == uVar7)) {
            puVar5 = (undefined4 *)(*param_5 + iVar6 * 0x14);
            if (*(float *)(*param_5 + 0x10 + iVar6 * 0x14) < fVar3) {
              *puVar5 = psVar1;
              puVar5[1] = psVar2;
              puVar5[2] = puVar4;
              puVar5[3] = uVar7;
              puVar5[4] = fVar3;
            }
            goto LAB_0092f134;
          }
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 5;
        } while (iVar6 < param_5[1]);
      }
      if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
        FUN_008a6ee0(param_5,0x14);
      }
      puVar5 = (undefined4 *)(*param_5 + param_5[1] * 0x14);
      *puVar5 = psVar1;
      puVar5[1] = psVar2;
      puVar5[2] = puVar4;
      puVar5[3] = uVar7;
      puVar5[4] = fVar3;
      param_5[1] = param_5[1] + 1;
LAB_0092f134:
      param_2 = (undefined4 *)((int)param_2 + 1);
      if (param_4[1] <= (int)param_2) {
        return;
      }
    }
  }
  return;
}



void FUN_0092f1d0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int iVar4;
  
  uVar1 = in_ECX[2] & 0x3fffffff;
  if ((int)uVar1 < param_1[1]) {
    if (-1 < in_ECX[2]) {
      FUN_008a75d0(*in_ECX,uVar1 << 3,0x14);
    }
    iVar2 = FUN_008a7560(param_1[1] << 3,0x14);
    *in_ECX = iVar2;
    in_ECX[2] = in_ECX[2] & 0x40000000U | param_1[1];
  }
  iVar2 = param_1[1];
  puVar3 = (undefined4 *)*in_ECX;
  in_ECX[1] = iVar2;
  if (0 < iVar2) {
    iVar4 = *param_1 - (int)puVar3;
    do {
      *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
      puVar3[1] = *(undefined4 *)(iVar4 + 4 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



void FUN_0092f270(float *param_1,float *param_2,uint param_3,int *param_4,int *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float *pfVar4;
  undefined4 *puVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float local_b8;
  int local_b4;
  float *local_b0;
  int local_a4;
  float local_80;
  int local_7c;
  
  param_5[1] = 0;
  fVar16 = *param_1;
  fVar18 = param_1[1];
  fVar14 = param_1[2];
  fVar13 = param_1[3];
  if ((param_5[2] & 0x3fffffffU) == 0) {
    FUN_008a6ee0(param_5,0x10);
  }
  pfVar4 = (float *)(param_5[1] * 0x10 + *param_5);
  param_5[1] = param_5[1] + 1;
  fVar35 = param_1[1];
  fVar36 = param_1[2];
  fVar15 = param_1[3];
  *pfVar4 = *param_1;
  pfVar4[1] = fVar35;
  pfVar4[2] = fVar36;
  pfVar4[3] = fVar15;
  if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
    FUN_008a6ee0(param_5,0x10);
  }
  pfVar4 = (float *)(param_5[1] * 0x10 + *param_5);
  param_5[1] = param_5[1] + 1;
  *pfVar4 = -fVar16;
  pfVar4[1] = -fVar18;
  pfVar4[2] = -fVar14;
  pfVar4[3] = -fVar13;
  puVar5 = (undefined4 *)FUN_008a7560(param_3,0x14);
  if (0 < (int)param_3) {
    puVar12 = puVar5;
    for (uVar7 = param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    for (uVar7 = param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar12 = 0;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
  }
  fVar16 = *param_1;
  fVar18 = param_1[1];
  fVar14 = param_1[2];
  iVar10 = -1;
  local_a4 = -1;
  if (1e-06 <= ABS(1.0 - ABS(param_1[2]))) {
    fVar13 = fVar18 * 1.0 - fVar14 * 0.0;
    fVar14 = fVar14 * 0.0 - fVar16 * 1.0;
    fVar16 = fVar16 * 0.0 - fVar18 * 0.0;
  }
  else {
    fVar13 = fVar14 * 0.0 - fVar18 * 0.0;
    fVar14 = fVar16 * 0.0 - fVar14 * 1.0;
    fVar16 = fVar18 * 1.0 - fVar16 * 0.0;
  }
  fVar18 = -3.4028235e+38;
  iVar8 = 0;
  pfVar4 = param_2;
  if (0 < (int)param_3) {
    do {
      fVar35 = pfVar4[2] * fVar16 + pfVar4[1] * fVar14 + *pfVar4 * fVar13;
      if (fVar18 < fVar35) {
        iVar10 = iVar8;
        fVar18 = fVar35;
        local_a4 = iVar8;
      }
      iVar8 = iVar8 + 1;
      pfVar4 = pfVar4 + 4;
    } while (iVar8 < (int)param_3);
  }
  *(undefined1 *)(iVar10 + (int)puVar5) = 1;
  if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
    FUN_008a6ee0(param_4,0x10);
    iVar10 = local_a4;
  }
  pfVar6 = (float *)(param_4[1] * 0x10 + *param_4);
  param_4[1] = param_4[1] + 1;
  pfVar4 = param_2 + iVar10 * 4;
  fVar18 = pfVar4[1];
  fVar35 = pfVar4[2];
  fVar36 = pfVar4[3];
  *pfVar6 = *pfVar4;
  pfVar6[1] = fVar18;
  pfVar6[2] = fVar35;
  pfVar6[3] = fVar36;
  iVar8 = -1;
  fVar18 = (fVar14 * param_1[2] - fVar16 * param_1[1]) + fVar13;
  fVar35 = (fVar16 * *param_1 - fVar13 * param_1[2]) + fVar14;
  fVar16 = (fVar13 * param_1[1] - fVar14 * *param_1) + fVar16;
  local_7c = -1;
  local_b4 = iVar10;
  do {
    iVar11 = iVar10;
    fVar14 = fVar35 * fVar35;
    fVar13 = fVar16 * fVar16;
    auVar26._4_4_ = fVar14;
    auVar26._0_4_ = fVar14;
    auVar26._8_4_ = fVar14;
    auVar26._12_4_ = fVar14;
    auVar27._4_12_ = auVar26._4_12_;
    auVar27._0_4_ = fVar14 + fVar18 * fVar18;
    auVar28._4_4_ = fVar13;
    auVar28._0_4_ = fVar13 + auVar27._0_4_;
    auVar28._8_4_ = fVar13;
    auVar28._12_4_ = fVar13;
    auVar28 = rsqrtss(auVar27,auVar28);
    fVar14 = auVar28._0_4_;
    fVar14 = fVar14 * 0.5 * (3.0 - (fVar13 + auVar27._0_4_) * fVar14 * fVar14);
    iVar10 = 0;
    fVar13 = fVar14 * fVar18;
    fVar36 = fVar14 * fVar35;
    fVar14 = fVar14 * fVar16;
    local_b8 = -2.0;
    local_80 = 3.4028235e+38;
    if (0 < (int)param_3) {
      local_b0 = param_2;
      do {
        if (iVar10 != iVar11) {
          pfVar4 = param_2 + iVar11 * 4;
          fVar35 = *local_b0 - *pfVar4;
          fVar15 = local_b0[1] - pfVar4[1];
          fVar17 = local_b0[2] - pfVar4[2];
          fVar19 = fVar36 * fVar17 - fVar14 * fVar15;
          fVar21 = fVar14 * fVar35 - fVar13 * fVar17;
          fVar23 = fVar13 * fVar15 - fVar36 * fVar35;
          fVar16 = 1.0 / SQRT(fVar17 * fVar17 + fVar15 * fVar15 + fVar35 * fVar35);
          fVar18 = fVar16 * SQRT(fVar23 * fVar23 + fVar21 * fVar21 + fVar19 * fVar19);
          if (0.0 < fVar23 * param_1[2] + fVar21 * param_1[1] + fVar19 * *param_1) {
            fVar18 = fVar18 * -1.0;
          }
          if (0.0 <= fVar16 * (fVar14 * fVar17 + fVar36 * fVar15 + fVar13 * fVar35)) {
            fVar16 = fVar18;
            if (fVar18 <= 0.0) {
              fVar16 = 4.0;
              goto LAB_0092f705;
            }
          }
          else {
            fVar16 = 2.0;
LAB_0092f705:
            fVar16 = fVar16 - fVar18;
          }
          if (fVar16 < local_80) {
            iVar8 = iVar10;
            local_b8 = fVar18;
            local_80 = fVar16;
          }
        }
        local_b0 = local_b0 + 4;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)param_3);
    }
    iVar10 = iVar8;
    if (iVar11 != local_a4) {
      pfVar4 = param_2 + iVar11 * 4;
      pfVar6 = param_2 + iVar11 * 4;
      pfVar9 = param_2 + local_b4 * 4;
      fVar16 = *pfVar4 - *pfVar9;
      fVar18 = pfVar4[1] - pfVar9[1];
      fVar35 = pfVar4[2] - pfVar9[2];
      fVar15 = pfVar4[3] - pfVar9[3];
      pfVar9 = param_2 + iVar8 * 4;
      fVar17 = *pfVar4 - *pfVar9;
      fVar19 = pfVar4[1] - pfVar9[1];
      fVar21 = pfVar4[2] - pfVar9[2];
      fVar23 = pfVar4[3] - pfVar9[3];
      if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
        FUN_008a6ee0(param_5,0x10);
      }
      pfVar4 = (float *)(param_5[1] * 0x10 + *param_5);
      param_5[1] = param_5[1] + 1;
      if (local_b4 == iVar8) {
        fVar20 = *param_1;
        fVar22 = param_1[1];
        fVar24 = param_1[2];
        fVar23 = param_1[3];
      }
      else {
        fVar20 = fVar18 * fVar21 - fVar35 * fVar19;
        fVar22 = fVar35 * fVar17 - fVar16 * fVar21;
        fVar24 = fVar16 * fVar19 - fVar18 * fVar17;
        fVar23 = fVar15 * fVar23 - fVar15 * fVar23;
      }
      fVar25 = fVar18 * fVar24 - fVar35 * fVar22;
      fVar35 = fVar35 * fVar20 - fVar16 * fVar24;
      fVar16 = fVar16 * fVar22 - fVar18 * fVar20;
      fVar18 = fVar15 * fVar23 - fVar15 * fVar23;
      *pfVar4 = fVar25;
      pfVar4[1] = fVar35;
      pfVar4[2] = fVar16;
      pfVar4[3] = fVar18;
      if (1e-06 <= fVar16 * fVar21 + fVar35 * fVar19 + fVar25 * fVar17) {
        fVar15 = 1.0;
      }
      else {
        fVar15 = -1.0;
      }
      fVar25 = fVar15 * fVar25;
      fVar35 = fVar15 * fVar35;
      fVar16 = fVar15 * fVar16;
      fVar15 = fVar15 * fVar18;
      fVar18 = fVar35 * fVar35;
      fVar17 = fVar16 * fVar16;
      auVar29._4_4_ = fVar18;
      auVar29._0_4_ = fVar18;
      auVar29._8_4_ = fVar18;
      auVar29._12_4_ = fVar18;
      auVar30._4_12_ = auVar29._4_12_;
      auVar30._0_4_ = fVar18 + fVar25 * fVar25;
      auVar1._4_4_ = fVar17;
      auVar1._0_4_ = fVar17 + auVar30._0_4_;
      auVar1._8_4_ = fVar17;
      auVar1._12_4_ = fVar17;
      auVar28 = rsqrtss(auVar30,auVar1);
      fVar18 = auVar28._0_4_;
      fVar18 = fVar18 * 0.5 * (3.0 - (fVar17 + auVar30._0_4_) * fVar18 * fVar18);
      *pfVar4 = fVar25;
      pfVar4[1] = fVar35;
      pfVar4[2] = fVar16;
      pfVar4[3] = fVar15;
      *pfVar4 = fVar18 * fVar25;
      pfVar4[1] = fVar18 * fVar35;
      pfVar4[2] = fVar18 * fVar16;
      pfVar4[3] = fVar18 * fVar15;
      pfVar4[3] = -(fVar18 * fVar16 * pfVar6[2] +
                   fVar18 * fVar35 * pfVar6[1] + fVar18 * fVar25 * *pfVar6);
      iVar10 = local_7c;
    }
    local_7c = iVar10;
    if (*(char *)(iVar8 + (int)puVar5) != '\0') {
      pfVar4 = param_2 + iVar8 * 4;
      fVar16 = *pfVar4;
      fVar18 = pfVar4[1];
      fVar14 = pfVar4[2];
      fVar13 = pfVar4[3];
      pfVar6 = param_2 + iVar8 * 4;
      pfVar4 = param_2 + iVar11 * 4;
      fVar35 = pfVar4[3];
      fVar19 = fVar16 - *pfVar4;
      fVar21 = fVar18 - pfVar4[1];
      fVar23 = fVar14 - pfVar4[2];
      param_2 = param_2 + local_7c * 4;
      fVar36 = *param_2;
      fVar15 = param_2[1];
      fVar17 = param_2[2];
      if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
        FUN_008a6ee0(param_5,0x10);
      }
      pfVar4 = (float *)*param_5;
      pfVar9 = pfVar4 + param_5[1] * 4;
      param_5[1] = param_5[1] + 1;
      fVar20 = fVar21 * pfVar4[2] - fVar23 * pfVar4[1];
      fVar23 = fVar23 * *pfVar4 - fVar19 * pfVar4[2];
      fVar19 = fVar19 * pfVar4[1] - fVar21 * *pfVar4;
      fVar13 = (fVar13 - fVar35) * pfVar4[3] - (fVar13 - fVar35) * pfVar4[3];
      *pfVar9 = fVar20;
      pfVar9[1] = fVar23;
      pfVar9[2] = fVar19;
      pfVar9[3] = fVar13;
      if (1e-06 <= fVar19 * (fVar14 - fVar17) +
                   fVar23 * (fVar18 - fVar15) + fVar20 * (fVar16 - fVar36)) {
        fVar16 = 1.0;
      }
      else {
        fVar16 = -1.0;
      }
      fVar20 = fVar16 * fVar20;
      fVar23 = fVar16 * fVar23;
      fVar19 = fVar16 * fVar19;
      fVar16 = fVar16 * fVar13;
      fVar18 = fVar23 * fVar23;
      fVar14 = fVar19 * fVar19;
      auVar33._4_4_ = fVar18;
      auVar33._0_4_ = fVar18;
      auVar33._8_4_ = fVar18;
      auVar33._12_4_ = fVar18;
      auVar34._4_12_ = auVar33._4_12_;
      auVar34._0_4_ = fVar18 + fVar20 * fVar20;
      auVar3._4_4_ = fVar14;
      auVar3._0_4_ = fVar14 + auVar34._0_4_;
      auVar3._8_4_ = fVar14;
      auVar3._12_4_ = fVar14;
      auVar28 = rsqrtss(auVar34,auVar3);
      fVar18 = auVar28._0_4_;
      *pfVar9 = fVar20;
      pfVar9[1] = fVar23;
      pfVar9[2] = fVar19;
      pfVar9[3] = fVar16;
      fVar18 = fVar18 * 0.5 * (3.0 - (fVar14 + auVar34._0_4_) * fVar18 * fVar18);
      *pfVar9 = fVar18 * fVar20;
      pfVar9[1] = fVar18 * fVar23;
      pfVar9[2] = fVar18 * fVar19;
      pfVar9[3] = fVar18 * fVar16;
      pfVar9[3] = -(fVar18 * fVar19 * pfVar6[2] +
                   fVar18 * fVar23 * pfVar6[1] + fVar18 * fVar20 * *pfVar6);
      if (-1 < (int)param_3) {
        FUN_008a75d0(puVar5,param_3 & 0x3fffffff,0x14);
      }
      return;
    }
    *(undefined1 *)(iVar8 + (int)puVar5) = 1;
    if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_4,0x10);
    }
    pfVar6 = (float *)(param_4[1] * 0x10 + *param_4);
    param_4[1] = param_4[1] + 1;
    pfVar4 = param_2 + iVar8 * 4;
    fVar16 = pfVar4[1];
    fVar18 = pfVar4[2];
    fVar35 = pfVar4[3];
    *pfVar6 = *pfVar4;
    pfVar6[1] = fVar16;
    pfVar6[2] = fVar18;
    pfVar6[3] = fVar35;
    pfVar4 = param_2 + iVar8 * 4;
    pfVar6 = param_2 + iVar11 * 4;
    fVar18 = *pfVar4 - *pfVar6;
    fVar35 = pfVar4[1] - pfVar6[1];
    fVar17 = pfVar4[2] - pfVar6[2];
    fVar16 = fVar35 * fVar35;
    fVar15 = fVar17 * fVar17;
    auVar31._4_4_ = fVar16;
    auVar31._0_4_ = fVar16;
    auVar31._8_4_ = fVar16;
    auVar31._12_4_ = fVar16;
    auVar32._4_12_ = auVar31._4_12_;
    auVar32._0_4_ = fVar16 + fVar18 * fVar18;
    auVar2._4_4_ = fVar15;
    auVar2._0_4_ = fVar15 + auVar32._0_4_;
    auVar2._8_4_ = fVar15;
    auVar2._12_4_ = fVar15;
    auVar28 = rsqrtss(auVar32,auVar2);
    fVar16 = auVar28._0_4_;
    fVar16 = fVar16 * 0.5 * (3.0 - (fVar15 + auVar32._0_4_) * fVar16 * fVar16);
    fVar18 = fVar16 * fVar18;
    fVar35 = fVar16 * fVar35;
    fVar16 = fVar16 * fVar17;
    iVar10 = iVar8;
    local_b4 = iVar11;
    if (0.0001 <= local_b8) {
      fVar18 = fVar18 + fVar13;
      fVar35 = fVar35 + fVar36;
      fVar16 = fVar16 + fVar14;
    }
  } while( true );
}



void FUN_0092fbd0(int *param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
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
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int local_88;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  
  iVar9 = 0;
  if (0 < param_1[1]) {
    iVar10 = 0;
    do {
      *(undefined4 *)(iVar10 + 0xc + *param_1) = 0;
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x10;
    } while (iVar9 < param_1[1]);
  }
  iVar9 = param_1[1];
  if (0 < iVar9) {
    local_74 = 0;
    local_78 = 1;
    do {
      local_80 = local_78;
      iVar10 = local_78;
      iVar8 = local_74;
      if (local_78 < iVar9) {
        do {
          local_88 = iVar8 + 0x10;
          iVar10 = iVar10 + 1;
          iVar7 = local_88;
          local_84 = iVar10;
          if (iVar10 < iVar9) {
            do {
              iVar9 = *param_1;
              if (((*(int *)(iVar9 + 0xc + local_74) != 0x3f800000) &&
                  (*(int *)(iVar8 + 0x1c + iVar9) != 0x3f800000)) &&
                 (*(int *)(iVar7 + 0x1c + iVar9) != 0x3f800000)) {
                pfVar1 = (float *)(local_88 + iVar9);
                pfVar2 = (float *)(iVar9 + local_74);
                fVar13 = *pfVar2 - *pfVar1;
                fVar14 = pfVar2[1] - pfVar1[1];
                fVar16 = pfVar2[2] - pfVar1[2];
                fVar11 = fVar14 * fVar14;
                fVar12 = fVar16 * fVar16;
                auVar25._4_4_ = fVar11;
                auVar25._0_4_ = fVar11;
                auVar25._8_4_ = fVar11;
                auVar25._12_4_ = fVar11;
                auVar26._4_12_ = auVar25._4_12_;
                auVar26._0_4_ = fVar11 + fVar13 * fVar13;
                auVar27._4_4_ = fVar12;
                auVar27._0_4_ = fVar12 + auVar26._0_4_;
                auVar27._8_4_ = fVar12;
                auVar27._12_4_ = fVar12;
                auVar27 = rsqrtss(auVar26,auVar27);
                fVar11 = auVar27._0_4_;
                fVar11 = fVar11 * 0.5 * (3.0 - (fVar12 + auVar26._0_4_) * fVar11 * fVar11);
                pfVar3 = (float *)(iVar7 + 0x10 + iVar9);
                fVar13 = fVar11 * fVar13;
                fVar14 = fVar11 * fVar14;
                fVar11 = fVar11 * fVar16;
                fVar19 = *pfVar2 - *pfVar3;
                fVar20 = pfVar2[1] - pfVar3[1];
                fVar22 = pfVar2[2] - pfVar3[2];
                fVar32 = *pfVar3 - *pfVar1;
                fVar33 = pfVar3[1] - pfVar1[1];
                fVar34 = pfVar3[2] - pfVar1[2];
                fVar12 = -fVar13;
                fVar15 = -fVar14;
                fVar17 = -fVar11;
                fVar16 = fVar20 * fVar20;
                fVar18 = fVar22 * fVar22;
                auVar35._4_4_ = fVar16;
                auVar35._0_4_ = fVar16;
                auVar35._8_4_ = fVar16;
                auVar35._12_4_ = fVar16;
                auVar36._4_12_ = auVar35._4_12_;
                auVar36._0_4_ = fVar16 + fVar19 * fVar19;
                auVar5._4_4_ = fVar18;
                auVar5._0_4_ = fVar18 + auVar36._0_4_;
                auVar5._8_4_ = fVar18;
                auVar5._12_4_ = fVar18;
                auVar27 = rsqrtss(auVar36,auVar5);
                fVar16 = auVar27._0_4_;
                fVar16 = fVar16 * 0.5 * (3.0 - (fVar18 + auVar36._0_4_) * fVar16 * fVar16);
                fVar19 = fVar16 * fVar19;
                fVar20 = fVar16 * fVar20;
                fVar16 = fVar16 * fVar22;
                fVar18 = -fVar19;
                fVar21 = -fVar20;
                fVar23 = -fVar16;
                fVar22 = fVar33 * fVar33;
                fVar24 = fVar34 * fVar34;
                auVar37._4_4_ = fVar22;
                auVar37._0_4_ = fVar22;
                auVar37._8_4_ = fVar22;
                auVar37._12_4_ = fVar22;
                auVar38._4_12_ = auVar37._4_12_;
                auVar38._0_4_ = fVar22 + fVar32 * fVar32;
                auVar6._4_4_ = fVar24;
                auVar6._0_4_ = fVar24 + auVar38._0_4_;
                auVar6._8_4_ = fVar24;
                auVar6._12_4_ = fVar24;
                auVar27 = rsqrtss(auVar38,auVar6);
                fVar22 = auVar27._0_4_;
                fVar28 = fVar22 * 0.5 * (3.0 - (fVar24 + auVar38._0_4_) * fVar22 * fVar22);
                fVar32 = fVar28 * fVar32;
                fVar33 = fVar28 * fVar33;
                fVar28 = fVar28 * fVar34;
                fVar22 = fVar14 * fVar16 - fVar11 * fVar20;
                fVar24 = fVar11 * fVar19 - fVar13 * fVar16;
                fVar34 = fVar13 * fVar20 - fVar14 * fVar19;
                fVar29 = -fVar32;
                fVar30 = -fVar33;
                fVar31 = -fVar28;
                if ((param_2 <= fVar34 * fVar34 + fVar24 * fVar24 + fVar22 * fVar22) ||
                   (0.0 <= fVar11 * fVar16 + fVar14 * fVar20 + fVar13 * fVar19)) {
                  fVar11 = fVar33 * fVar23 - fVar28 * fVar21;
                  fVar13 = fVar28 * fVar18 - fVar32 * fVar23;
                  fVar14 = fVar32 * fVar21 - fVar33 * fVar18;
                  if ((param_2 <= fVar14 * fVar14 + fVar13 * fVar13 + fVar11 * fVar11) ||
                     (0.0 <= fVar28 * fVar23 + fVar33 * fVar21 + fVar32 * fVar18)) {
                    fVar11 = fVar15 * fVar31 - fVar17 * fVar30;
                    fVar13 = fVar17 * fVar29 - fVar12 * fVar31;
                    fVar14 = fVar12 * fVar30 - fVar15 * fVar29;
                    if ((fVar14 * fVar14 + fVar13 * fVar13 + fVar11 * fVar11 < param_2) &&
                       (fVar17 * fVar31 + fVar15 * fVar30 + fVar12 * fVar29 < 0.0)) {
                      *(undefined4 *)(iVar8 + 0x1c + iVar9) = 0x3f800000;
                    }
                  }
                  else {
                    *(undefined4 *)(iVar7 + 0x1c + iVar9) = 0x3f800000;
                  }
                }
                else {
                  *(undefined4 *)(iVar9 + 0xc + local_74) = 0x3f800000;
                }
              }
              local_84 = local_84 + 1;
              iVar7 = iVar7 + 0x10;
            } while (local_84 < param_1[1]);
          }
          local_80 = local_80 + 1;
          iVar9 = param_1[1];
          iVar8 = local_88;
        } while (local_80 < iVar9);
      }
      iVar9 = param_1[1];
      local_74 = local_74 + 0x10;
      bVar4 = local_78 < iVar9;
      local_78 = local_78 + 1;
    } while (bVar4);
  }
  FUN_0092eb50(param_1);
  return;
}


