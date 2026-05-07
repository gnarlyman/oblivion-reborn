
void FUN_009003c0(void)

{
  short sVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  if ((in_ECX[2] != 0) && (iVar2 = 0, 0 < (int)in_ECX[4])) {
    do {
      sVar1 = *(short *)(in_ECX[3] + iVar2 * 2);
      if (sVar1 != -1) {
        (**(code **)(*(int *)in_ECX[2] + 0x10))(sVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)in_ECX[4]);
  }
  (**(code **)*in_ECX)(1);
  return;
}



void FUN_00900420(undefined4 *param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int *piVar10;
  int *piVar11;
  float *pfVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int unaff_EBX;
  int unaff_FS_OFFSET;
  int iStack_80;
  int iStack_7c;
  int local_78;
  undefined1 local_64 [4];
  int iStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar17 = _tls_index;
  iVar4 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar18 = *(int *)(iVar4 + _tls_index * 4);
  if (*(uint *)(iVar18 + 0x1a4) < *(uint *)(iVar18 + 0x1a8)) {
    puVar5 = *(undefined4 **)(iVar18 + 0x1a4);
    *puVar5 = "LtHeightField";
    puVar5[3] = "GetSpheres";
    uVar6 = rdtsc();
    local_78 = (int)uVar6;
    puVar5[1] = local_78;
    *(undefined4 **)(iVar18 + 0x1a4) = puVar5 + 4;
  }
  piVar16 = (int *)*param_1;
  iVar18 = *param_2;
  FUN_008b1ff0(param_2[2],param_1[2]);
  (**(code **)(*piVar16 + 0x1c))(local_64);
  iVar4 = *(int *)(iVar4 + iVar17 * 4);
  piVar14 = *(int **)(iVar4 + 0x19c);
  if (*(int **)(iVar4 + 0x19c) == (int *)0x0) {
    piVar14 = DAT_00ba7d9c;
  }
  iStack_7c = piVar14[8];
  piVar10 = (int *)(iVar18 * 0x10);
  piVar11 = piVar10 + 4;
  uVar1 = iStack_7c + (int)piVar11;
  if ((uint)piVar14[0xb] < uVar1) {
    iStack_7c = (**(code **)(*piVar14 + 0xc))(piVar11);
  }
  else {
    piVar14[8] = uVar1;
  }
  iVar17 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar15 = *(int *)(iVar17 + _tls_index * 4);
  if (*(uint *)(iVar15 + 0x1a4) < *(uint *)(iVar15 + 0x1a8)) {
    puVar5 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar5 = "StgetSpheres";
    uVar6 = rdtsc();
    local_78 = (int)uVar6;
    puVar5[1] = local_78;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar5 + 3;
  }
  pfVar12 = (float *)(**(code **)(*piVar16 + 0x20))(iStack_7c);
  iVar17 = *(int *)(iVar17 + _tls_index * 4);
  if (*(uint *)(iVar17 + 0x1a4) < *(uint *)(iVar17 + 0x1a8)) {
    puVar5 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar5 = "Sttransform";
    uVar6 = rdtsc();
    puVar5[1] = (int)uVar6;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar5 + 3;
  }
  iVar15 = iStack_80 - (int)pfVar12;
  iVar17 = local_78;
  do {
    fVar7 = *pfVar12;
    fVar8 = pfVar12[1];
    fVar9 = pfVar12[2];
    fVar3 = pfVar12[3];
    pfVar2 = (float *)(iVar15 + (int)pfVar12);
    *pfVar2 = fStack_58 * fVar7 + fStack_48 * fVar8 + fStack_38 * fVar9 + fStack_28;
    pfVar2[1] = fStack_54 * fVar7 + fStack_44 * fVar8 + fStack_34 * fVar9 + fStack_24;
    pfVar2[2] = local_50 * fVar7 + fStack_40 * fVar8 + fStack_30 * fVar9 + fStack_20;
    pfVar2[3] = fStack_4c * fVar7 + fStack_3c * fVar8 + fStack_2c * fVar9 + fStack_1c;
    *(float *)(iVar15 + 0xc + (int)pfVar12) = fVar3;
    pfVar12 = pfVar12 + 4;
    iVar17 = iVar17 + -1;
  } while (0 < iVar17);
  iVar17 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar17 + 0x1a4) < *(uint *)(iVar17 + 0x1a8)) {
    puVar5 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar5 = "StCollide";
    uVar6 = rdtsc();
    puVar5[1] = (int)uVar6;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar5 + 3;
  }
  piVar16 = *(int **)(iVar4 + 0x19c);
  if (*(int **)(iVar4 + 0x19c) == (int *)0x0) {
    piVar16 = DAT_00ba7d9c;
  }
  iVar17 = piVar16[8];
  uVar13 = iVar18 + 0x10U & 0xfffffff0;
  uVar1 = iVar17 + uVar13;
  if ((uint)piVar16[0xb] < uVar1) {
    iVar17 = (**(code **)(*piVar16 + 0xc))(uVar13);
  }
  else {
    piVar16[8] = uVar1;
  }
  uStack_5c = *(undefined4 *)(param_3 + 8);
  iStack_60 = local_78;
  (**(code **)(*piVar10 + 0x1c))(local_64,iVar17);
  iVar18 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar18 + 0x1a4) < *(uint *)(iVar18 + 0x1a8)) {
    puVar5 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar5 = "StExamine";
    uVar6 = rdtsc();
    puVar5[1] = (int)uVar6;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar5 + 3;
  }
  iVar18 = local_78 + -1;
  if (-1 < iVar18) {
    pfVar12 = (float *)(iVar17 + 0xc);
    do {
      if (*pfVar12 < 0.0) {
        (**(code **)(*param_4 + 4))(param_1,param_2);
        break;
      }
      pfVar12 = pfVar12 + 4;
      iVar18 = iVar18 + -1;
    } while (-1 < iVar18);
  }
  piVar16 = *(int **)(iVar4 + 0x19c);
  if (*(int **)(iVar4 + 0x19c) == (int *)0x0) {
    piVar16 = DAT_00ba7d9c;
  }
  piVar16[8] = iVar17;
  if (iVar17 == piVar16[10]) {
    (**(code **)(*piVar16 + 0x10))(iVar17);
  }
  piVar16 = *(int **)(iVar4 + 0x19c);
  if (*(int **)(iVar4 + 0x19c) == (int *)0x0) {
    piVar16 = DAT_00ba7d9c;
  }
  piVar16[8] = unaff_EBX;
  if (unaff_EBX == piVar16[10]) {
    (**(code **)(*piVar16 + 0x10))(unaff_EBX);
  }
  iVar18 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar18 + 0x1a4) < *(uint *)(iVar18 + 0x1a8)) {
    puVar5 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar5 = &DAT_00a6a630;
    uVar6 = rdtsc();
    puVar5[1] = (int)uVar6;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar5 + 3;
  }
  return;
}



void FUN_00900770(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4)

{
  uint uVar1;
  float fVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int unaff_EBX;
  int iVar15;
  float *unaff_ESI;
  float *pfVar16;
  int iVar17;
  int unaff_FS_OFFSET;
  float fVar18;
  float fVar19;
  float fVar20;
  int iStack_b0;
  int iStack_a8;
  int *local_a4;
  int iStack_a0;
  int local_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  
  iVar14 = _tls_index;
  iVar15 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar17 = *(int *)(iVar15 + _tls_index * 4);
  if (*(uint *)(iVar17 + 0x1a4) < *(uint *)(iVar17 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar17 + 0x1a4);
    *puVar3 = "LtHeightField";
    puVar3[3] = &DAT_00a9badc;
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar17 + 0x1a4) = puVar3 + 4;
  }
  piVar13 = (int *)*param_1;
  local_9c = *param_2;
  FUN_008b1ff0(param_2[2],param_1[2]);
  (**(code **)(*piVar13 + 0x1c))(&local_a4);
  iVar15 = *(int *)(iVar15 + iVar14 * 4);
  piVar11 = *(int **)(iVar15 + 0x19c);
  if (*(int **)(iVar15 + 0x19c) == (int *)0x0) {
    piVar11 = DAT_00ba7d9c;
  }
  iVar17 = piVar11[8];
  iStack_98 = iStack_a8 * 0x10;
  uVar1 = iVar17 + iStack_98 + 0x10;
  iStack_94 = iVar15;
  if ((uint)piVar11[0xb] < uVar1) {
    iVar17 = (**(code **)(*piVar11 + 0xc))(iStack_98 + 0x10);
  }
  else {
    piVar11[8] = uVar1;
  }
  iVar14 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar14 + 0x1a4) < *(uint *)(iVar14 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar15 + 0x1a4);
    *puVar3 = "StgetSpheres";
    uVar5 = rdtsc();
    iStack_b0 = (int)uVar5;
    puVar3[1] = iStack_b0;
    *(undefined4 **)(iVar15 + 0x1a4) = puVar3 + 3;
  }
  local_9c = iVar17;
  pfVar9 = (float *)(**(code **)(*piVar13 + 0x20))(iVar17);
  iVar14 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar14 + 0x1a4) < *(uint *)(iVar14 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar15 + 0x1a4);
    *puVar3 = "Sttransform";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar15 + 0x1a4) = puVar3 + 3;
  }
  iVar12 = iVar17 - (int)pfVar9;
  iVar14 = iStack_b0;
  do {
    fVar6 = *pfVar9;
    fVar7 = pfVar9[1];
    fVar8 = pfVar9[2];
    fVar2 = pfVar9[3];
    pfVar16 = (float *)(iVar12 + (int)pfVar9);
    *pfVar16 = fStack_88 * fVar6 + fStack_78 * fVar7 + fStack_68 * fVar8 + fStack_58;
    pfVar16[1] = fStack_84 * fVar6 + fStack_74 * fVar7 + fStack_64 * fVar8 + fStack_54;
    pfVar16[2] = local_80 * fVar6 + fStack_70 * fVar7 + fStack_60 * fVar8 + fStack_50;
    pfVar16[3] = fStack_7c * fVar6 + fStack_6c * fVar7 + fStack_5c * fVar8 + fStack_4c;
    *(float *)((int)pfVar9 + iVar12 + 0xc) = fVar2;
    pfVar9 = pfVar9 + 4;
    iVar14 = iVar14 + -1;
  } while (0 < iVar14);
  iVar14 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar14 + 0x1a4) < *(uint *)(iVar14 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar15 + 0x1a4);
    *puVar3 = "Stcollide";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar15 + 0x1a4) = puVar3 + 3;
  }
  piVar13 = *(int **)(iVar15 + 0x19c);
  if (*(int **)(iVar15 + 0x19c) == (int *)0x0) {
    piVar13 = DAT_00ba7d9c;
  }
  pfVar9 = (float *)piVar13[8];
  uVar10 = local_9c + 0x10U & 0xfffffff0;
  uVar1 = (int)pfVar9 + uVar10;
  if ((uint)piVar13[0xb] < uVar1) {
    pfVar9 = (float *)(**(code **)(*piVar13 + 0xc))(uVar10);
  }
  else {
    piVar13[8] = uVar1;
  }
  uStack_8c = *(undefined4 *)(param_3 + 8);
  iStack_90 = iStack_b0;
  iStack_94 = iVar17;
  (**(code **)(*local_a4 + 0x1c))(&iStack_94,pfVar9);
  iVar17 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar17 + 0x1a4) < *(uint *)(iVar17 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar15 + 0x1a4);
    *puVar3 = "Stexamine";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar15 + 0x1a4) = puVar3 + 3;
  }
  fVar2 = *(float *)(param_3 + 8);
  pfVar16 = pfVar9;
  if (-1 < unaff_EBX + -1) {
    iVar17 = iStack_a8 - (int)pfVar9;
    do {
      if (pfVar9[3] < fVar2 != (pfVar9[3] == fVar2)) {
        fVar6 = *pfVar9;
        fVar7 = pfVar9[1];
        fVar8 = pfVar9[2];
        local_a4 = (int *)(-*(float *)(iVar17 + 0xc + (int)pfVar9) - pfVar9[3]);
        puStack_2c = param_2;
        pfVar4 = (float *)param_2[2];
        puStack_30 = param_1;
        pfVar16 = (float *)(iVar17 + (int)pfVar9);
        fVar18 = *pfVar16 + (float)local_a4 * fVar6;
        fVar19 = pfVar16[1] + (float)local_a4 * fVar7;
        fVar20 = pfVar16[2] + (float)local_a4 * fVar8;
        fStack_34 = pfVar9[3];
        fStack_50 = *pfVar4 * fVar18 + pfVar4[4] * fVar19 + pfVar4[8] * fVar20 + pfVar4[0xc];
        fStack_4c = pfVar4[1] * fVar18 + pfVar4[5] * fVar19 + pfVar4[9] * fVar20 + pfVar4[0xd];
        fStack_48 = pfVar4[2] * fVar18 + pfVar4[6] * fVar19 + pfVar4[10] * fVar20 + pfVar4[0xe];
        fStack_44 = pfVar4[3] * fVar18 + pfVar4[7] * fVar19 + pfVar4[0xb] * fVar20 + pfVar4[0xf];
        fStack_40 = *pfVar4 * fVar6 + pfVar4[4] * fVar7 + pfVar4[8] * fVar8;
        fStack_3c = pfVar4[1] * fVar6 + pfVar4[5] * fVar7 + pfVar4[9] * fVar8;
        fStack_38 = pfVar4[2] * fVar6 + pfVar4[6] * fVar7 + pfVar4[10] * fVar8;
        (**(code **)(*param_4 + 4))(&fStack_50);
      }
      pfVar9 = pfVar9 + 4;
      unaff_EBX = unaff_EBX + -1;
      iVar15 = iStack_a0;
      pfVar16 = unaff_ESI;
    } while (unaff_EBX != 0);
  }
  piVar13 = *(int **)(iVar15 + 0x19c);
  if (*(int **)(iVar15 + 0x19c) == (int *)0x0) {
    piVar13 = DAT_00ba7d9c;
  }
  piVar13[8] = (int)pfVar16;
  if (pfVar16 == (float *)piVar13[10]) {
    (**(code **)(*piVar13 + 0x10))(pfVar16);
  }
  piVar13 = *(int **)(iVar15 + 0x19c);
  if (*(int **)(iVar15 + 0x19c) == (int *)0x0) {
    piVar13 = DAT_00ba7d9c;
  }
  piVar13[8] = iStack_a8;
  if (iStack_a8 == piVar13[10]) {
    (**(code **)(*piVar13 + 0x10))(iStack_a8);
  }
  iVar17 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar17 + 0x1a4) < *(uint *)(iVar17 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar15 + 0x1a4);
    *puVar3 = &DAT_00a6a630;
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar15 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_00900bb0(int param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 local_20;
  int local_1c;
  
  fStack_24 = param_2[5];
  fVar1 = -*(float *)(in_ECX + 0x20);
  local_20 = *(undefined4 *)(in_ECX + 0x40);
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  local_1c = param_1;
  pfVar2 = *(float **)(param_1 + 8);
  local_30 = *pfVar2 * fVar3 + pfVar2[4] * fVar4 + pfVar2[8] * fVar5;
  fStack_2c = pfVar2[1] * fVar3 + pfVar2[5] * fVar4 + pfVar2[9] * fVar5;
  fStack_28 = pfVar2[2] * fVar3 + pfVar2[6] * fVar4 + pfVar2[10] * fVar5;
  local_40 = *(float *)(in_ECX + 0x10) + fStack_24 * *(float *)(in_ECX + 0x30) + fVar1 * local_30;
  fStack_3c = *(float *)(in_ECX + 0x14) + fStack_24 * *(float *)(in_ECX + 0x34) + fVar1 * fStack_2c;
  fStack_38 = *(float *)(in_ECX + 0x18) + fStack_24 * *(float *)(in_ECX + 0x38) + fVar1 * fStack_28;
  fStack_34 = *(float *)(in_ECX + 0x1c) + fStack_24 * *(float *)(in_ECX + 0x3c) +
              fVar1 * (pfVar2[3] * fVar3 + pfVar2[7] * fVar4 + pfVar2[0xb] * fVar5);
  (**(code **)(**(int **)(in_ECX + 0x44) + 4))(&local_40);
  fVar1 = *(float *)(*(int *)(in_ECX + 0x44) + 4);
  if (fVar1 < *(float *)(in_ECX + 4)) {
    *(float *)(in_ECX + 4) = fVar1;
    return;
  }
  *(float *)(in_ECX + 4) = *(float *)(in_ECX + 4);
  return;
}



void FUN_00900ca0(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  float *pfVar10;
  int *piVar11;
  int iVar12;
  int unaff_FS_OFFSET;
  int iStack_114;
  int iStack_110;
  float local_10c;
  int local_108;
  int *piStack_104;
  undefined4 uStack_100;
  int local_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
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
  undefined **ppuStack_b8;
  undefined4 uStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *puStack_78;
  undefined4 uStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  iVar12 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar12 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "LtHeightField";
    puVar3[3] = "ClosestPoints";
    uVar5 = rdtsc();
    local_10c = (float)uVar5;
    puVar3[1] = local_10c;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 4;
  }
  if (param_5 != 0) {
    FUN_00900770(param_1,param_2,param_3,param_5);
  }
  iVar12 = *(int *)(iVar12 + _tls_index * 4);
  if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar12 + 0x1a4);
    *puVar3 = "StGetSpheres";
    uVar5 = rdtsc();
    local_10c = (float)uVar5;
    puVar3[1] = local_10c;
    *(undefined4 **)(iVar12 + 0x1a4) = puVar3 + 3;
  }
  local_fc = *param_2;
  piVar11 = (int *)*param_1;
  FUN_008b1ff0(param_2[2],param_1[2]);
  (**(code **)(*piVar11 + 0x1c))(&local_108);
  piStack_104 = *(int **)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  fStack_f8 = local_10c;
  piVar9 = (int *)piStack_104[0x67];
  if ((int *)piStack_104[0x67] == (int *)0x0) {
    piVar9 = DAT_00ba7d9c;
  }
  iStack_110 = piVar9[8];
  iVar12 = ((int)local_10c + 1) * 0x10;
  uVar1 = iStack_110 + iVar12;
  if ((uint)piVar9[0xb] < uVar1) {
    iStack_110 = (**(code **)(*piVar9 + 0xc))(iVar12);
  }
  else {
    piVar9[8] = uVar1;
  }
  pfVar10 = (float *)param_2[2];
  fVar6 = *(float *)(param_3 + 0x10);
  fVar7 = *(float *)(param_3 + 0x14);
  fVar8 = *(float *)(param_3 + 0x18);
  fStack_24 = *pfVar10 * fVar6 + pfVar10[1] * fVar7 + pfVar10[2] * fVar8;
  fStack_20 = pfVar10[4] * fVar6 + pfVar10[5] * fVar7 + pfVar10[6] * fVar8;
  fStack_1c = pfVar10[8] * fVar6 + pfVar10[9] * fVar7 + pfVar10[10] * fVar8;
  fStack_18 = pfVar10[8] * fVar6 + pfVar10[9] * fVar7 + pfVar10[10] * fVar8;
  pfVar10 = (float *)(**(code **)(*piVar11 + 0x20))(iStack_110);
  iVar12 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
    puVar3 = *(undefined4 **)(local_108 + 0x1a4);
    *puVar3 = "StCastSpheres";
    uVar5 = rdtsc();
    uStack_100 = (undefined4)uVar5;
    puVar3[1] = uStack_100;
    *(undefined4 **)(local_108 + 0x1a4) = puVar3 + 3;
  }
  uStack_34 = *(undefined4 *)(param_3 + 0x20);
  uStack_88 = *(undefined4 *)(param_3 + 0x10);
  uStack_84 = *(undefined4 *)(param_3 + 0x14);
  uStack_80 = *(undefined4 *)(param_3 + 0x18);
  uStack_7c = *(undefined4 *)(param_3 + 0x1c);
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_b4 = 0x3f800000;
  ppuStack_b8 = &PTR_FUN_00a9ba78;
  puStack_78 = param_1;
  uStack_74 = param_4;
  iVar12 = local_fc;
  if (0 < local_fc) {
    do {
      fVar6 = *pfVar10;
      fVar7 = pfVar10[1];
      fVar8 = pfVar10[2];
      fStack_38 = pfVar10[3];
      fStack_98 = pfVar10[3];
      pfVar4 = (float *)param_1[2];
      fStack_68 = fStack_f8 * fVar6 + fStack_e8 * fVar7 + fStack_d8 * fVar8 + fStack_c8;
      fStack_64 = fStack_f4 * fVar6 + fStack_e4 * fVar7 + fStack_d4 * fVar8 + fStack_c4;
      fStack_60 = local_f0 * fVar6 + fStack_e0 * fVar7 + fStack_d0 * fVar8 + fStack_c0;
      fStack_5c = fStack_ec * fVar6 + fStack_dc * fVar7 + fStack_cc * fVar8 + fStack_bc;
      fStack_58 = fStack_68 + fStack_28;
      fStack_54 = fStack_64 + fStack_24;
      fStack_50 = fStack_60 + fStack_20;
      fStack_4c = fStack_5c + fStack_1c;
      fStack_a8 = *pfVar4 * fVar6 + pfVar4[4] * fVar7 + pfVar4[8] * fVar8 + pfVar4[0xc];
      fStack_a4 = pfVar4[1] * fVar6 + pfVar4[5] * fVar7 + pfVar4[9] * fVar8 + pfVar4[0xd];
      fStack_a0 = pfVar4[2] * fVar6 + pfVar4[6] * fVar7 + pfVar4[10] * fVar8 + pfVar4[0xe];
      fStack_9c = pfVar4[3] * fVar6 + pfVar4[7] * fVar7 + pfVar4[0xb] * fVar8 + pfVar4[0xf];
      (**(code **)(*piStack_104 + 0x20))(&fStack_68,param_2,&ppuStack_b8);
      pfVar10 = pfVar10 + 4;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  piVar11 = *(int **)(local_108 + 0x19c);
  if (*(int **)(local_108 + 0x19c) == (int *)0x0) {
    piVar11 = DAT_00ba7d9c;
  }
  piVar11[8] = iStack_114;
  if (iStack_114 == piVar11[10]) {
    (**(code **)(*piVar11 + 0x10))(iStack_114);
  }
  iVar12 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
    puVar3 = *(undefined4 **)(local_108 + 0x1a4);
    *puVar3 = &DAT_00a6a630;
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(local_108 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_00901060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_00900420(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_009010a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_00900770(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_009010e0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40 [4];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar6 = param_3;
  puVar7 = local_40;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_90 = param_3[4];
  local_8c = param_3[5];
  local_88 = param_3[6];
  local_84 = param_3[7];
  local_80 = param_4;
  local_30 = uVar1 ^ 0x80000000;
  uStack_2c = uVar2 ^ 0x80000000;
  uStack_28 = uVar3 ^ 0x80000000;
  uStack_24 = uVar4 ^ 0x80000000;
  local_9c = 0x7f7fffff;
  local_a0 = &PTR_LAB_00a9b4e8;
  if (param_5 != 0) {
    local_70 = &PTR_LAB_00a9b4e8;
    local_60 = param_3[4];
    local_5c = param_3[5];
    local_58 = param_3[6];
    local_54 = param_3[7];
    local_50 = param_5;
    local_6c = 0x7f7fffff;
    FUN_00900ca0(param_2,param_1,local_40,&local_a0,&local_70);
    return;
  }
  FUN_00900ca0(param_2,param_1,local_40,&local_a0,0);
  return;
}



void FUN_009011d0(undefined4 *param_1,int *param_2,int param_3,int *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 uVar7;
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
  int iVar20;
  short sVar21;
  int *piVar22;
  float *pfVar23;
  float *pfVar24;
  int in_ECX;
  int *piVar25;
  int *piVar26;
  int unaff_EBX;
  short *psVar27;
  int iVar28;
  int unaff_FS_OFFSET;
  float fVar29;
  float fVar30;
  float fVar31;
  int iStack_84;
  int iStack_80;
  int local_74;
  int local_68;
  int local_60;
  int *piStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  iVar20 = _tls_index;
  iVar3 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar28 = *(int *)(iVar3 + _tls_index * 4);
  if (*(uint *)(iVar28 + 0x1a4) < *(uint *)(iVar28 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iVar28 + 0x1a4);
    *puVar4 = "LtHeightField";
    puVar4[3] = &DAT_00a9badc;
    uVar7 = rdtsc();
    local_68 = (int)uVar7;
    puVar4[1] = local_68;
    *(undefined4 **)(iVar28 + 0x1a4) = puVar4 + 4;
  }
  piVar26 = (int *)*param_1;
  local_60 = *param_2;
  FUN_008b1ff0(param_2[2],param_1[2]);
  local_74 = *(int *)(iVar3 + iVar20 * 4);
  iVar28 = *(int *)(in_ECX + 0x10);
  piVar25 = *(int **)(local_74 + 0x19c);
  if (*(int **)(local_74 + 0x19c) == (int *)0x0) {
    piVar25 = DAT_00ba7d9c;
  }
  pfVar24 = (float *)piVar25[8];
  piVar22 = (int *)((iVar28 + 1) * 0x10);
  if ((float *)piVar25[0xb] < pfVar24 + (iVar28 + 1) * 4) {
    pfVar24 = (float *)(**(code **)(*piVar25 + 0xc))(piVar22);
  }
  else {
    piVar25[8] = (int)(pfVar24 + (iVar28 + 1) * 4);
  }
  iVar3 = *(int *)(iVar3 + _tls_index * 4);
  psVar27 = *(short **)(in_ECX + 0xc);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar4 = *(undefined4 **)(local_74 + 0x1a4);
    *puVar4 = "StgetSpheres";
    uVar7 = rdtsc();
    local_68 = (int)uVar7;
    puVar4[1] = local_68;
    *(undefined4 **)(local_74 + 0x1a4) = puVar4 + 3;
  }
  pfVar23 = (float *)(**(code **)(*piVar26 + 0x20))(pfVar24);
  do {
    fVar8 = *pfVar23;
    fVar9 = pfVar23[1];
    fVar10 = pfVar23[2];
    fVar2 = pfVar23[3];
    *pfVar24 = fStack_54 * fVar8 + fStack_44 * fVar9 + fStack_34 * fVar10 + fStack_24;
    pfVar24[1] = local_50 * fVar8 + fStack_40 * fVar9 + fStack_30 * fVar10 + fStack_20;
    pfVar24[2] = fStack_4c * fVar8 + fStack_3c * fVar9 + fStack_2c * fVar10 + fStack_1c;
    pfVar24[3] = fStack_48 * fVar8 + fStack_38 * fVar9 + fStack_28 * fVar10 + fStack_18;
    pfVar24[3] = fVar2;
    pfVar24 = pfVar24 + 4;
    pfVar23 = pfVar23 + 4;
    iVar28 = iVar28 + -1;
  } while (0 < iVar28);
  piVar25 = *(int **)(iStack_80 + 0x19c);
  if (*(int **)(iStack_80 + 0x19c) == (int *)0x0) {
    piVar25 = DAT_00ba7d9c;
  }
  pfVar24 = (float *)piVar25[8];
  if ((uint)piVar25[0xb] < (uint)((int)pfVar24 + local_68)) {
    pfVar24 = (float *)(**(code **)(*piVar25 + 0xc))(local_68);
  }
  else {
    piVar25[8] = (int)pfVar24 + local_68;
  }
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iStack_80 + 0x1a4);
    *puVar4 = "Stcollide";
    uVar7 = rdtsc();
    puVar4[1] = (int)uVar7;
    *(undefined4 **)(iStack_80 + 0x1a4) = puVar4 + 3;
  }
  uStack_58 = *(undefined4 *)(param_3 + 8);
  local_60 = local_74;
  piStack_5c = piVar26;
  (**(code **)(*piVar22 + 0x1c))(&local_60,pfVar24);
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar4 = *(undefined4 **)(unaff_EBX + 0x1a4);
    *puVar4 = "Stexamine";
    uVar7 = rdtsc();
    puVar4[1] = (int)uVar7;
    *(undefined4 **)(unaff_EBX + 0x1a4) = puVar4 + 3;
  }
  fVar2 = *(float *)(param_3 + 8);
  if (-1 < local_74 + -1) {
    pfVar23 = pfVar24;
    do {
      if (pfVar23[3] <= fVar2) {
        fVar8 = -*(float *)((iStack_84 - iStack_80) + 0xc + (int)pfVar23);
        pfVar5 = (float *)*param_4;
        pfVar1 = (float *)((iStack_84 - iStack_80) + (int)pfVar23);
        pfVar6 = (float *)param_2[2];
        fVar9 = pfVar6[9];
        fVar10 = pfVar6[10];
        fVar11 = pfVar6[0xb];
        fVar12 = pfVar6[0xd];
        fVar13 = pfVar6[0xe];
        fVar14 = pfVar6[0xf];
        fVar29 = *pfVar1 + fVar8 * *pfVar23;
        fVar30 = pfVar1[1] + fVar8 * pfVar23[1];
        fVar31 = pfVar1[2] + fVar8 * pfVar23[2];
        fVar8 = pfVar6[5];
        fVar15 = pfVar6[6];
        fVar16 = pfVar6[7];
        fVar17 = pfVar6[1];
        fVar18 = pfVar6[2];
        fVar19 = pfVar6[3];
        *pfVar5 = *pfVar6 * fVar29 + pfVar6[4] * fVar30 + pfVar6[8] * fVar31 + pfVar6[0xc];
        pfVar5[1] = fVar17 * fVar29 + fVar8 * fVar30 + fVar9 * fVar31 + fVar12;
        pfVar5[2] = fVar18 * fVar29 + fVar15 * fVar30 + fVar10 * fVar31 + fVar13;
        pfVar5[3] = fVar19 * fVar29 + fVar16 * fVar30 + fVar11 * fVar31 + fVar14;
        fVar8 = *pfVar23;
        fVar9 = pfVar23[1];
        fVar10 = pfVar23[2];
        pfVar1 = (float *)param_2[2];
        fVar11 = pfVar1[9];
        fVar12 = pfVar1[10];
        fVar13 = pfVar1[0xb];
        fVar14 = pfVar1[5];
        fVar15 = pfVar1[6];
        fVar16 = pfVar1[7];
        fVar17 = pfVar1[1];
        fVar18 = pfVar1[2];
        fVar19 = pfVar1[3];
        pfVar5[4] = *pfVar1 * fVar8 + pfVar1[4] * fVar9 + pfVar1[8] * fVar10;
        pfVar5[5] = fVar17 * fVar8 + fVar14 * fVar9 + fVar11 * fVar10;
        pfVar5[6] = fVar18 * fVar8 + fVar15 * fVar9 + fVar12 * fVar10;
        pfVar5[7] = fVar19 * fVar8 + fVar16 * fVar9 + fVar13 * fVar10;
        pfVar5[7] = pfVar23[3];
        if (*psVar27 == -1) {
          sVar21 = (**(code **)(*(int *)pfVar24[2] + 8))(param_1,param_2,param_3,pfVar5);
          *psVar27 = sVar21;
          if (sVar21 != -1) {
            *param_4 = *param_4 + 0x30;
          }
        }
        else {
          *param_4 = *param_4 + 0x30;
        }
        *(short *)(pfVar5 + 8) = *psVar27;
      }
      else if (*psVar27 != -1) {
        (**(code **)(*(int *)pfVar24[2] + 0x10))(*psVar27);
        *psVar27 = -1;
      }
      pfVar23 = pfVar23 + 4;
      psVar27 = psVar27 + 1;
      local_74 = local_74 + -1;
    } while (local_74 != 0);
  }
  piVar26 = *(int **)(unaff_EBX + 0x19c);
  if (*(int **)(unaff_EBX + 0x19c) == (int *)0x0) {
    piVar26 = DAT_00ba7d9c;
  }
  piVar26[8] = iStack_80;
  if (iStack_80 == piVar26[10]) {
    (**(code **)(*piVar26 + 0x10))(iStack_80);
  }
  piVar26 = *(int **)(unaff_EBX + 0x19c);
  if (*(int **)(unaff_EBX + 0x19c) == (int *)0x0) {
    piVar26 = DAT_00ba7d9c;
  }
  piVar26[8] = iStack_84;
  if (iStack_84 == piVar26[10]) {
    (**(code **)(*piVar26 + 0x10))(iStack_84);
  }
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar4 = *(undefined4 **)(unaff_EBX + 0x1a4);
    *puVar4 = &DAT_00a6a630;
    uVar7 = rdtsc();
    puVar4[1] = (int)uVar7;
    *(undefined4 **)(unaff_EBX + 0x1a4) = puVar4 + 3;
  }
  return;
}



void FUN_00901620(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9bb10;
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],(in_ECX[5] & 0x3fffffff) << 1,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00901690(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  int unaff_EBP;
  undefined1 local_8 [8];
  
  piVar1 = in_ECX + 3;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = param_4;
  *in_ECX = &PTR_FUN_00a9bb10;
  *piVar1 = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0x80000000;
  if (param_4 != 0) {
    (**(code **)(*(int *)*param_1 + 0x1c))(local_8);
    iVar4 = in_ECX[4];
    if (iVar4 < unaff_EBP) {
      if ((int)(in_ECX[5] & 0x3fffffff) < unaff_EBP) {
        iVar2 = (in_ECX[5] & 0x3fffffff) * 2;
        iVar3 = unaff_EBP;
        if (unaff_EBP < iVar2) {
          iVar3 = iVar2;
        }
        FUN_008a6e40(piVar1,iVar3,2);
      }
      for (; iVar4 < unaff_EBP; iVar4 = iVar4 + 1) {
        *(undefined2 *)(*piVar1 + iVar4 * 2) = 0xffff;
      }
    }
    in_ECX[4] = unaff_EBP;
  }
  return;
}



void FUN_009017b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9bb10;
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],(in_ECX[5] & 0x3fffffff) << 1,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00901800(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_20 [28];
  
  fVar1 = (float)param_4[0xc0d];
  pfVar4 = (float *)*param_4;
  FUN_009011d0(param_2,param_1,param_3,param_4);
  if (pfVar4 < (float *)*param_4) {
    do {
      pfVar3 = (float *)FUN_008f7000(local_20);
      fVar2 = *pfVar3;
      *pfVar4 = *pfVar4 + fVar2 * pfVar4[4];
      pfVar4[1] = pfVar4[1] + fVar2 * pfVar4[5];
      pfVar4[2] = pfVar4[2] + fVar2 * pfVar4[6];
      pfVar4[3] = pfVar4[3] + fVar2 * pfVar4[7];
      pfVar4[4] = -pfVar4[4];
      pfVar4[5] = -pfVar4[5];
      pfVar4[6] = -pfVar4[6];
      pfVar4[7] = pfVar4[7];
      pfVar4 = pfVar4 + 0xc;
    } while (pfVar4 < (float *)*param_4);
  }
  if (fVar1 != (float)param_4[0xc0d]) {
    param_4[8] = param_4[8] ^ 0x80000000;
    param_4[9] = param_4[9] ^ 0x80000000;
    param_4[10] = param_4[10] ^ 0x80000000;
    param_4[0xb] = param_4[0xb];
  }
  return;
}



void FUN_009018a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_00900420(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_009018e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_00900770(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_00901920(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40 [4];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar6 = param_3;
  puVar7 = local_40;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_90 = param_3[4];
  local_8c = param_3[5];
  local_88 = param_3[6];
  local_84 = param_3[7];
  local_80 = param_4;
  local_30 = uVar1 ^ 0x80000000;
  uStack_2c = uVar2 ^ 0x80000000;
  uStack_28 = uVar3 ^ 0x80000000;
  uStack_24 = uVar4 ^ 0x80000000;
  local_9c = 0x7f7fffff;
  local_a0 = &PTR_LAB_00a9b4e8;
  if (param_5 != 0) {
    local_70 = &PTR_LAB_00a9b4e8;
    local_60 = param_3[4];
    local_5c = param_3[5];
    local_58 = param_3[6];
    local_54 = param_3[7];
    local_50 = param_5;
    local_6c = 0x7f7fffff;
    FUN_00900ca0(param_2,param_1,local_40,&local_a0,&local_70);
    return;
  }
  FUN_00900ca0(param_2,param_1,local_40,&local_a0,0);
  return;
}



void FUN_00901a10(byte param_1)

{
  FUN_009017b0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00901a80(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = &LAB_00901a40;
  local_14 = FUN_00901060;
  local_10 = FUN_009010a0;
  local_c = FUN_009010e0;
  local_8 = 1;
  local_7 = 1;
  FUN_008dadd0(&local_18,0x12,0x15);
  local_18 = &LAB_00901730;
  local_14 = FUN_00900420;
  local_10 = FUN_00900770;
  local_c = FUN_00900ca0;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,0x15,0x12);
  return;
}



void FUN_00901c40(void)

{
  undefined4 *in_ECX;
  
  if (*(char *)(in_ECX + 0x21) != '\0') {
    FUN_00939b60(in_ECX + 0xc,in_ECX[2]);
    (**(code **)*in_ECX)(1);
    return;
  }
  FUN_00934100(in_ECX + 0xc,in_ECX[0x20],in_ECX[2]);
  (**(code **)*in_ECX)(1);
  return;
}



void FUN_00901c90(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  
  *in_ECX = *param_1;
  in_ECX[0x40c] = param_1[0xc0d];
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  in_ECX[0x404] = param_1[4];
  in_ECX[0x405] = uVar1;
  in_ECX[0x406] = uVar2;
  in_ECX[0x407] = uVar3;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  in_ECX[0x408] = param_1[8];
  in_ECX[0x409] = uVar1;
  in_ECX[0x40a] = uVar2;
  in_ECX[0x40b] = uVar3;
  in_ECX[0x40d] = param_1[0xc0c];
  if ((undefined4 *)param_1[0xc10] != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)param_1[0xc10];
    for (iVar4 = 0x402; in_ECX = in_ECX + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
      *in_ECX = *puVar5;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}



void FUN_00901d70(int *param_1)

{
  int in_ECX;
  int iVar1;
  int local_8 [2];
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x10) + iVar1 * 8) + 0x1c))(local_8);
      *param_1 = *param_1 + local_8[0];
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x14));
  }
  return;
}



void FUN_00901dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_00905630(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_00901e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_009050f0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_00901e40(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40 [4];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar6 = param_3;
  puVar7 = local_40;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_90 = param_3[4];
  local_8c = param_3[5];
  local_88 = param_3[6];
  local_84 = param_3[7];
  local_80 = param_4;
  local_30 = uVar1 ^ 0x80000000;
  uStack_2c = uVar2 ^ 0x80000000;
  uStack_28 = uVar3 ^ 0x80000000;
  uStack_24 = uVar4 ^ 0x80000000;
  local_9c = 0x7f7fffff;
  local_a0 = &PTR_LAB_00a9b4e8;
  if (param_5 != 0) {
    local_70 = &PTR_LAB_00a9b4e8;
    local_60 = param_3[4];
    local_5c = param_3[5];
    local_58 = param_3[6];
    local_54 = param_3[7];
    local_50 = param_5;
    local_6c = 0x7f7fffff;
    FUN_00905370(param_2,param_1,local_40,&local_a0,&local_70);
    return;
  }
  FUN_00905370(param_2,param_1,local_40,&local_a0,0);
  return;
}



void FUN_00901f30(float *param_1,float *param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  float fVar3;
  float local_28;
  int local_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = 0;
  local_28 = -3.4028235e+38;
  local_24 = 0;
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x10) + iVar2 * 8) + 0x24))(param_1,&local_20);
      fVar3 = fStack_18 * param_1[2] + fStack_1c * param_1[1] + local_20 * *param_1;
      if (local_28 < fVar3) {
        *param_2 = local_20;
        param_2[1] = fStack_1c;
        param_2[2] = fStack_18;
        param_2[3] = fStack_14;
        local_28 = fVar3;
        local_24 = iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar1 = local_24;
    } while (iVar2 < *(int *)(in_ECX + 0x14));
  }
  param_2[3] = (float)(((uint)param_2[3] & 0xc0ffffff) + iVar1 * 0x100 | 0x3f000000);
  return;
}



void FUN_00901ff0(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  undefined ***local_90;
  int local_8c;
  int local_88;
  int *local_84;
  undefined **local_80;
  undefined2 local_7a;
  undefined4 local_78;
  undefined4 local_74;
  int *local_70;
  undefined4 local_6c;
  undefined **local_68;
  undefined2 local_62;
  undefined4 local_60;
  undefined4 local_5c;
  int *local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  local_88 = param_2[2];
  local_84 = param_2;
  local_7a = 1;
  local_78 = 0;
  local_80 = &PTR_LAB_00a9bb94;
  local_70 = *(int **)(*param_2 + 0x10);
  local_74 = *(undefined4 *)(*local_70 + 0xc);
  local_8c = param_2[1];
  local_6c = *(undefined4 *)(*param_2 + 0x14);
  local_90 = &local_80;
  FUN_009393b0(param_1,&local_90,param_4);
  *in_ECX = &PTR_LAB_00a9bbc8;
  in_ECX[0x20] = *param_3;
  *(undefined1 *)(in_ECX + 0x21) = 1;
  local_58 = *(int **)(*param_2 + 0x10);
  local_5c = *(undefined4 *)(*local_58 + 0xc);
  local_54 = *(undefined4 *)(*param_2 + 0x14);
  uVar1 = *param_1;
  local_62 = 1;
  local_60 = 0;
  local_68 = &PTR_LAB_00a9bb94;
  FUN_008b1ff0(param_1[2],param_2[2]);
  FUN_0093ee40(uVar1,&local_68,local_50);
  in_ECX[0xb] = 0xbf800000;
  in_ECX[6] = 0xbf800000;
  return;
}



void FUN_00902160(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int unaff_FS_OFFSET;
  undefined **local_bc;
  char local_b8;
  undefined ***local_b4;
  int local_b0;
  int local_ac;
  int *local_a8;
  undefined **local_a4;
  undefined2 local_9e;
  undefined4 local_9c;
  undefined4 local_98;
  int *local_94;
  undefined4 local_90;
  undefined **local_8c;
  undefined4 local_88;
  int *local_84;
  undefined **local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  int local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  undefined4 local_20;
  int *local_1c;
  
  iVar5 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "LtCvxList";
    puVar3[3] = "checkHull";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 4;
  }
  local_ac = param_2[2];
  local_a8 = param_2;
  local_9e = 1;
  local_9c = 0;
  local_a4 = &PTR_LAB_00a9bb94;
  local_94 = *(int **)(*param_2 + 0x10);
  local_98 = *(undefined4 *)(*local_94 + 0xc);
  local_b0 = param_2[1];
  local_90 = *(undefined4 *)(*param_2 + 0x14);
  local_b4 = &local_a4;
  local_bc = &PTR_LAB_00a9bb84;
  local_b8 = '\0';
  FUN_0093f800(param_1,&local_b4,param_3,&local_bc);
  if (local_b8 == '\0') {
    local_80 = &PTR_LAB_00a967a8;
    local_50 = 0;
    fStack_54 = 3.4028235e+38;
    local_7c = 0x7f7fffff;
    FUN_0093f250(param_1,&local_b4,param_3,&local_80);
    if (local_50 != 0) {
      if (*(float *)(*param_2 + 0x1c) < fStack_54) {
        local_20 = param_1;
        local_40 = local_70;
        uStack_3c = uStack_6c;
        uStack_38 = uStack_68;
        uStack_34 = uStack_64;
        local_1c = param_2;
        local_30 = local_60;
        uStack_2c = uStack_5c;
        uStack_28 = uStack_58;
        fStack_24 = fStack_54;
        (**(code **)(*param_4 + 4))(&local_40);
      }
      else {
        iVar2 = *(int *)(iVar1 + iVar5 * 4);
        if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
          puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
          *puVar3 = "Stchildren";
          uVar4 = rdtsc();
          iVar2 = *(int *)(iVar1 + iVar5 * 4);
          puVar3[1] = (int)uVar4;
          *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
        }
        FUN_00901e00(param_1,param_2,param_3,param_4);
      }
    }
  }
  else {
    iVar2 = *(int *)(iVar1 + iVar5 * 4);
    if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
      puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
      *puVar3 = "Stchildren";
      uVar4 = rdtsc();
      iVar2 = *(int *)(iVar1 + iVar5 * 4);
      puVar3[1] = (int)uVar4;
      *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
    }
    local_84 = param_4;
    local_88 = 0x7f7fffff;
    local_8c = &PTR_LAB_00a9b4e0;
    FUN_009050f0(param_2,param_1,param_3,&local_8c);
  }
  iVar1 = *(int *)(iVar1 + iVar5 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a6a630;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_009023f0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int unaff_FS_OFFSET;
  undefined **local_3c;
  char local_38;
  undefined **local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined ***local_28;
  int local_24;
  int local_20;
  int *local_1c;
  undefined **local_18;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  undefined4 local_4;
  
  iVar5 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "LtCvxList";
    puVar3[3] = "checkHull";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 4;
  }
  local_20 = param_2[2];
  local_1c = param_2;
  local_12 = 1;
  local_10 = 0;
  local_18 = &PTR_LAB_00a9bb94;
  local_8 = *(int **)(*param_2 + 0x10);
  local_c = *(undefined4 *)(*local_8 + 0xc);
  local_24 = param_2[1];
  local_4 = *(undefined4 *)(*param_2 + 0x14);
  local_28 = &local_18;
  local_3c = &PTR_LAB_00a9bb84;
  local_38 = '\0';
  FUN_0093f800(param_1,&local_28,param_3,&local_3c);
  if (local_38 != '\0') {
    iVar2 = *(int *)(iVar1 + iVar5 * 4);
    if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
      puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
      *puVar3 = "Stchildren";
      uVar4 = rdtsc();
      puVar3[1] = (int)uVar4;
      *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
    }
    local_2c = param_4;
    local_30 = 0;
    local_34 = &PTR_LAB_00a9b4f0;
    FUN_00905630(param_2,param_1,param_3,&local_34);
  }
  iVar1 = *(int *)(iVar1 + iVar5 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a6a630;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_00902590(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int unaff_FS_OFFSET;
  undefined ***local_68;
  int local_64;
  int local_60;
  int *local_5c;
  undefined **local_58;
  undefined2 local_52;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_48;
  undefined4 local_44;
  undefined **local_40;
  undefined4 local_3c;
  char local_38;
  undefined4 local_14;
  
  iVar5 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "LtCvsListAgent";
    puVar3[3] = "checkHull";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 4;
  }
  local_60 = param_2[2];
  local_5c = param_2;
  local_52 = 1;
  local_50 = 0;
  local_58 = &PTR_LAB_00a9bb94;
  local_48 = *(int **)(*param_2 + 0x10);
  local_4c = *(undefined4 *)(*local_48 + 0xc);
  local_64 = param_2[1];
  local_44 = *(undefined4 *)(*param_2 + 0x14);
  local_68 = &local_58;
  local_40 = &PTR_LAB_00a9bb8c;
  local_38 = '\0';
  local_14 = 0x7f7fffff;
  local_3c = 0x7f7fffff;
  FUN_00935cc0(param_1,&local_68,param_3,&local_40,&local_40);
  if (local_38 != '\0') {
    iVar2 = *(int *)(iVar1 + iVar5 * 4);
    if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
      puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
      *puVar3 = "Stchild";
      uVar4 = rdtsc();
      puVar3[1] = (int)uVar4;
      *(undefined4 **)(*(int *)(iVar1 + iVar5 * 4) + 0x1a4) = puVar3 + 3;
    }
    FUN_00901e40(param_1,param_2,param_3,param_4,param_5);
  }
  iVar1 = *(int *)(iVar1 + iVar5 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a6a630;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_00902740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_009023f0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_00902780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_009023f0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_009027c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_00902160(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_00902800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_00902160(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_00902840(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40 [4];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar6 = param_3;
  puVar7 = local_40;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_90 = param_3[4];
  local_8c = param_3[5];
  local_88 = param_3[6];
  local_84 = param_3[7];
  local_80 = param_4;
  local_30 = uVar1 ^ 0x80000000;
  uStack_2c = uVar2 ^ 0x80000000;
  uStack_28 = uVar3 ^ 0x80000000;
  uStack_24 = uVar4 ^ 0x80000000;
  local_9c = 0x7f7fffff;
  local_a0 = &PTR_LAB_00a9b4e8;
  if (param_5 != 0) {
    local_70 = &PTR_LAB_00a9b4e8;
    local_60 = param_3[4];
    local_5c = param_3[5];
    local_58 = param_3[6];
    local_54 = param_3[7];
    local_50 = param_5;
    local_6c = 0x7f7fffff;
    FUN_00902590(param_2,param_1,local_40,&local_a0,&local_70);
    return;
  }
  FUN_00902590(param_2,param_1,local_40,&local_a0,0);
  return;
}



void FUN_009029a0(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = &LAB_00902930;
  local_14 = FUN_00902780;
  local_10 = FUN_00902800;
  local_c = FUN_00902840;
  local_8 = 1;
  local_7 = 1;
  FUN_008dadd0(&local_18,0xd,1);
  local_18 = &LAB_00902100;
  local_14 = FUN_009023f0;
  local_10 = FUN_00902160;
  local_c = FUN_00902590;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,1,0xd);
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00902a30(undefined4 *param_1,int *param_2,int param_3,undefined4 *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int in_ECX;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int unaff_FS_OFFSET;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined ***local_1164;
  int local_1160;
  int local_115c;
  int *local_1158;
  undefined **local_1154;
  undefined2 local_114e;
  undefined4 local_114c;
  undefined4 local_1148;
  int *local_1144;
  undefined4 local_1140;
  undefined **local_113c;
  undefined2 local_1136;
  undefined4 local_1134;
  undefined4 local_1130;
  undefined4 local_112c;
  undefined4 local_1128;
  undefined1 *local_1124;
  undefined4 local_1120;
  undefined4 local_111c;
  undefined ***local_1118;
  undefined4 local_1114;
  undefined4 *local_1110;
  int *local_110c;
  int local_1108;
  undefined4 local_1104;
  float local_10b0;
  float fStack_10ac;
  float fStack_10a8;
  float fStack_10a4;
  undefined1 local_10a0 [16];
  undefined1 local_1090 [64];
  undefined4 local_1050;
  undefined4 local_104c [1027];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  undefined4 local_1c;
  undefined4 uStack_14;
  
  uStack_14 = 0x902a40;
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar13 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar13 = "LtCvxLst";
    puVar13[3] = &DAT_00a9bc80;
    uVar4 = rdtsc();
    puVar13[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar13 + 4;
  }
  iVar2 = *param_2;
  iVar7 = param_2[2];
  iVar3 = param_1[2];
  fVar6 = *(float *)(param_3 + 0x18) * *(float *)(iVar3 + 0x5c);
  fVar5 = *(float *)(param_3 + 0x18) * *(float *)(iVar7 + 0x5c);
  fVar15 = fVar6 * (*(float *)(iVar3 + 0x40) - *(float *)(iVar3 + 0x50)) +
           fVar5 * (*(float *)(iVar7 + 0x50) - *(float *)(iVar7 + 0x40));
  fVar16 = fVar6 * (*(float *)(iVar3 + 0x44) - *(float *)(iVar3 + 0x54)) +
           fVar5 * (*(float *)(iVar7 + 0x54) - *(float *)(iVar7 + 0x44));
  fVar17 = fVar6 * (*(float *)(iVar3 + 0x48) - *(float *)(iVar3 + 0x58)) +
           fVar5 * (*(float *)(iVar7 + 0x58) - *(float *)(iVar7 + 0x48));
  fVar5 = *(float *)(iVar7 + 0xa0) * *(float *)(iVar7 + 0x9c) * fVar5 +
          *(float *)(iVar3 + 0xa0) * *(float *)(iVar3 + 0x9c) * fVar6;
  FUN_00901c90(param_4);
  if (*(char *)(in_ECX + 0x84) != '\0') goto LAB_00902cf3;
  do {
    iVar7 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar7 + 0x1a4) < *(uint *)(iVar7 + 0x1a8)) {
      iVar7 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      puVar13 = *(undefined4 **)(iVar7 + 0x1a4);
      *puVar13 = "StStream";
      uVar4 = rdtsc();
      puVar13[1] = (int)uVar4;
      *(undefined4 **)(iVar7 + 0x1a4) = puVar13 + 3;
    }
    sVar1 = *(short *)(in_ECX + 0x86);
    *(short *)(in_ECX + 0x86) = sVar1 + -1;
    if (-1 < sVar1) {
LAB_00902f80:
      local_1108 = param_3;
      *(float *)(in_ECX + 0x40) =
           *(float *)(in_ECX + 0x40) - SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15);
      local_1104 = *(undefined4 *)(in_ECX + 8);
      local_1110 = param_1;
      local_110c = param_2;
      local_10b0 = fVar15;
      fStack_10ac = fVar16;
      fStack_10a8 = fVar17;
      fStack_10a4 = fVar5;
      FUN_008b1ff0(param_1[2],param_2[2]);
      iVar7 = *(int *)(iVar2 + 0x14);
      iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      piVar10 = *(int **)(iVar3 + 0x19c);
      if (piVar10 == (int *)0x0) {
        piVar10 = DAT_00ba7d9c;
      }
      iVar8 = piVar10[8];
      uVar12 = iVar7 * 4 + 0x14U & 0xfffffff0;
      uVar11 = iVar8 + uVar12;
      if ((uint)piVar10[0xb] < uVar11) {
        iVar8 = (**(code **)(*piVar10 + 0xc))(uVar12);
      }
      else {
        piVar10[8] = uVar11;
      }
      iVar9 = 0;
      if (0 < iVar7) {
        do {
          *(int *)(iVar8 + iVar9 * 4) = iVar9;
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar7);
      }
      *(undefined4 *)(iVar8 + iVar7 * 4) = 0xffffffff;
      FUN_00934dc0(in_ECX + 0x30,&local_1110,iVar2,iVar8,iVar7,param_4);
      piVar10 = *(int **)(iVar3 + 0x19c);
      if (piVar10 == (int *)0x0) {
        piVar10 = DAT_00ba7d9c;
      }
      piVar10[8] = iVar8;
      if (iVar8 == piVar10[10]) {
        (**(code **)(*piVar10 + 0x10))(iVar8);
      }
LAB_009030c8:
      iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
        puVar13 = *(undefined4 **)(iVar2 + 0x1a4);
        *puVar13 = &DAT_00a6a630;
        uVar4 = rdtsc();
        puVar13[1] = (int)uVar4;
        *(undefined4 **)(iVar2 + 0x1a4) = puVar13 + 3;
      }
      return;
    }
    *(undefined2 *)(in_ECX + 0x86) = 0x19;
    local_112c = *(undefined4 *)(iVar2 + 0x10);
    local_1128 = *(undefined4 *)(iVar2 + 0x14);
    local_1136 = 1;
    local_1134 = 0;
    local_1130 = 0;
    local_113c = &PTR_LAB_00a9bb94;
    FUN_008b1ff0(param_1[2],param_2[2]);
    local_111c = *param_1;
    local_1118 = &local_113c;
    local_1120 = param_1[2];
    local_1124 = local_1090;
    local_1114 = *(undefined4 *)(param_3 + 8);
    iVar7 = FUN_0093d4a0(&local_1124,in_ECX + 0xc,in_ECX + 0x20,local_10a0);
    if (iVar7 == 0) {
      *(float *)(in_ECX + 0x40) = -*(float *)(in_ECX + 0x2c);
      goto LAB_00902f80;
    }
    FUN_00934100(in_ECX + 0x30,*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 0x30) = 0;
    *(undefined1 *)(in_ECX + 0x84) = 1;
    *param_4 = local_1050;
    param_4[0xc0d] = local_20;
    param_4[4] = local_40;
    param_4[5] = uStack_3c;
    param_4[6] = uStack_38;
    param_4[7] = uStack_34;
    param_4[8] = local_30;
    param_4[9] = uStack_2c;
    param_4[10] = uStack_28;
    param_4[0xb] = uStack_24;
    param_4[0xc0c] = local_1c;
    if ((undefined4 *)param_4[0xc10] != (undefined4 *)0x0) {
      puVar13 = local_104c;
      puVar14 = (undefined4 *)param_4[0xc10];
      for (iVar7 = 0x402; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    local_113c = &PTR_LAB_00a45e5c;
LAB_00902cf3:
    if ((*(float *)(param_3 + 8) < *(float *)(in_ECX + 0x2c)) &&
       (*(float *)(in_ECX + 0x2c) =
             *(float *)(in_ECX + 0x2c) -
             (fVar16 * *(float *)(in_ECX + 0x24) + fVar15 * *(float *)(in_ECX + 0x20) +
             fVar17 * *(float *)(in_ECX + 0x28) + fVar5),
       *(float *)(param_3 + 8) < *(float *)(in_ECX + 0x2c))) {
      if (*(char *)(in_ECX + 0x32) != '\0') {
        FUN_00939b60(in_ECX + 0x30,*(undefined4 *)(in_ECX + 8));
      }
      goto LAB_009030c8;
    }
    iVar7 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar7 + 0x1a4) < *(uint *)(iVar7 + 0x1a8)) {
      iVar7 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      puVar13 = *(undefined4 **)(iVar7 + 0x1a4);
      *puVar13 = "StGsk";
      uVar4 = rdtsc();
      puVar13[1] = (int)uVar4;
      *(undefined4 **)(iVar7 + 0x1a4) = puVar13 + 3;
    }
    local_115c = param_2[2];
    local_114e = 1;
    local_114c = 0;
    local_1154 = &PTR_LAB_00a9bb94;
    local_1144 = *(int **)(*param_2 + 0x10);
    local_1148 = *(undefined4 *)(*local_1144 + 0xc);
    local_1160 = param_2[1];
    local_1140 = *(undefined4 *)(*param_2 + 0x14);
    local_1164 = &local_1154;
    local_1158 = param_2;
    FUN_008ffc70(param_1,&local_1164,param_3,param_4);
    if ((float)param_4[0xc0d] == local_20) {
      if (*(char *)(in_ECX + 0x32) == '\0') goto LAB_009030c8;
      uVar11 = (uint)*(byte *)(in_ECX + 0x34);
      do {
        if ((int)((uint)*(byte *)(in_ECX + 0x35) + (uint)*(byte *)(in_ECX + 0x34)) <=
            (int)(uVar11 + 1)) goto LAB_009030c8;
        iVar7 = uVar11 + 0x39;
        uVar11 = uVar11 + 1;
      } while ((*(ushort *)
                 ((uint)(*(byte *)(*(byte *)(in_ECX + 0x34) + 0x38 + in_ECX) >> 3) + in_ECX + 0x30 +
                  4 + (uint)*(byte *)(in_ECX + 0x32) * 8) & 0xff00) ==
               (*(ushort *)
                 ((uint)(*(byte *)(iVar7 + in_ECX) >> 3) + in_ECX + 0x30 + 4 +
                 (uint)*(byte *)(in_ECX + 0x32) * 8) & 0xff00));
    }
    FUN_00939b60(in_ECX + 0x30,*(undefined4 *)(in_ECX + 8));
    piVar10 = (int *)(in_ECX + 0x30);
    *(undefined1 *)(in_ECX + 0x84) = 0;
    if (piVar10 != (int *)0x0) {
      *piVar10 = in_ECX + 0x3c;
      *(undefined4 *)(in_ECX + 0x34) = 0;
      *(undefined4 *)(in_ECX + 0x38) = 0x80000001;
    }
    FUN_00934270(piVar10);
    *(undefined2 *)(in_ECX + 0x86) = 0x19;
    *(undefined4 *)(in_ECX + 0x40) = 0;
    param_4[0xc0d] = local_20;
    *param_4 = local_1050;
    param_4[4] = local_40;
    param_4[5] = uStack_3c;
    param_4[6] = uStack_38;
    param_4[7] = uStack_34;
    param_4[8] = local_30;
    param_4[9] = uStack_2c;
    param_4[10] = uStack_28;
    param_4[0xb] = uStack_24;
    param_4[0xc0c] = local_1c;
    if ((undefined4 *)param_4[0xc10] != (undefined4 *)0x0) {
      puVar13 = local_104c;
      puVar14 = (undefined4 *)param_4[0xc10];
      for (iVar7 = 0x402; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    local_1154 = &PTR_LAB_00a45e5c;
  } while( true );
}



void FUN_00903120(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_20 [28];
  
  fVar1 = (float)param_4[0xc0d];
  pfVar4 = (float *)*param_4;
  FUN_00902a30(param_2,param_1,param_3,param_4);
  if (pfVar4 < (float *)*param_4) {
    do {
      pfVar3 = (float *)FUN_008f7000(local_20);
      fVar2 = *pfVar3;
      *pfVar4 = *pfVar4 + fVar2 * pfVar4[4];
      pfVar4[1] = pfVar4[1] + fVar2 * pfVar4[5];
      pfVar4[2] = pfVar4[2] + fVar2 * pfVar4[6];
      pfVar4[3] = pfVar4[3] + fVar2 * pfVar4[7];
      pfVar4[4] = -pfVar4[4];
      pfVar4[5] = -pfVar4[5];
      pfVar4[6] = -pfVar4[6];
      pfVar4[7] = pfVar4[7];
      pfVar4 = pfVar4 + 0xc;
    } while (pfVar4 < (float *)*param_4);
  }
  if (fVar1 != (float)param_4[0xc0d]) {
    param_4[8] = param_4[8] ^ 0x80000000;
    param_4[9] = param_4[9] ^ 0x80000000;
    param_4[10] = param_4[10] ^ 0x80000000;
    param_4[0xb] = param_4[0xb];
  }
  return;
}



void FUN_009031c0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)in_ECX[4]) {
    do {
      (**(code **)(**(int **)(in_ECX[3] + iVar1 * 4) + 0x18))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)in_ECX[4]);
  }
  (**(code **)*in_ECX)(1);
  return;
}



void FUN_009031f0(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x10)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xc) + iVar1 * 4) + 0x20))(param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x10));
  }
  return;
}



void FUN_00903220(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x10)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xc) + iVar1 * 4) + 0x24))(param_1,param_2,param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x10));
  }
  return;
}



void FUN_00903270(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int unaff_FS_OFFSET;
  undefined4 local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  iVar4 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar1 = *(int *)(iVar4 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar6 = "Ttlist";
    uVar3 = rdtsc();
    puVar6[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar6 + 3;
  }
  iVar1 = *(int *)(in_ECX + 0x10);
  local_8 = param_1[2];
  iVar2 = *param_1;
  puVar6 = *(undefined4 **)(in_ECX + 0xc);
  iVar5 = 0;
  local_4 = param_1;
  if (0 < iVar1) {
    do {
      local_10 = *(undefined4 *)(*(int *)(iVar2 + 0x10) + iVar5 * 8);
      local_c = iVar5;
      (**(code **)(*(int *)*puVar6 + 0x14))(&local_10,param_2,param_3,param_4);
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
    iVar4 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar4 = *(int *)(iVar4 + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar6 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar6[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar6 + 3;
  }
  return;
}



void FUN_00903360(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int unaff_FS_OFFSET;
  undefined4 local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  iVar4 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar1 = *(int *)(iVar4 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar6 = "TtListAgent";
    uVar3 = rdtsc();
    puVar6[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar6 + 3;
  }
  iVar1 = *(int *)(in_ECX + 0x10);
  local_8 = param_1[2];
  iVar2 = *param_1;
  puVar6 = *(undefined4 **)(in_ECX + 0xc);
  iVar5 = 0;
  local_4 = param_1;
  if (0 < iVar1) {
    do {
      local_10 = *(undefined4 *)(*(int *)(iVar2 + 0x10) + iVar5 * 8);
      local_c = iVar5;
      (**(code **)(*(int *)*puVar6 + 0xc))(&local_10,param_2,param_3,param_4);
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
    iVar4 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar4 = *(int *)(iVar4 + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar6 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar6[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar6 + 3;
  }
  return;
}



void FUN_00903450(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int unaff_FS_OFFSET;
  undefined4 local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  iVar4 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar1 = *(int *)(iVar4 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar6 = "TtListAgent";
    uVar3 = rdtsc();
    puVar6[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar6 + 3;
  }
  iVar1 = *(int *)(in_ECX + 0x10);
  local_8 = param_1[2];
  iVar2 = *param_1;
  puVar6 = *(undefined4 **)(in_ECX + 0xc);
  iVar5 = 0;
  local_4 = param_1;
  if (0 < iVar1) {
    do {
      local_10 = *(undefined4 *)(*(int *)(iVar2 + 0x10) + iVar5 * 8);
      local_c = iVar5;
      (**(code **)(*(int *)*puVar6 + 0x10))(&local_10,param_2,param_3,param_4,param_5);
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
    iVar4 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar4 = *(int *)(iVar4 + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar6 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar6[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar6 + 3;
  }
  return;
}



void FUN_00903550(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int unaff_FS_OFFSET;
  undefined4 local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  iVar5 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar1 = *(int *)(iVar5 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtListAgent";
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  local_8 = param_1[2];
  iVar1 = *param_1;
  local_4 = param_1;
  iVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x10)) {
    do {
      local_10 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + iVar4 * 8);
      local_c = iVar4;
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xc) + iVar4 * 4) + 8))
                (&local_10,param_2,param_3,param_4);
      if (*(char *)(param_4 + 4) != '\0') break;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x10));
    iVar5 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar5 = *(int *)(iVar5 + _tls_index * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_00903650(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int in_ECX;
  int iVar11;
  int local_1c;
  int *local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  piVar5 = param_3;
  iVar1 = *param_1;
  local_8 = param_1[2];
  local_4 = param_1;
  local_1c = 0;
  if (0 < *(int *)(in_ECX + 0x10)) {
    do {
      local_10 = *(int **)(*(int *)(iVar1 + 0x10) + local_1c * 8);
      local_c = local_1c;
      pcVar6 = (char *)(*(code *)**(undefined4 **)piVar5[1])
                                 (&param_3,piVar5,param_2,param_1,iVar1,local_1c);
      if (*pcVar6 == '\0') {
        piVar2 = *(int **)(*(int *)(in_ECX + 0xc) + local_1c * 4);
        piVar7 = (int *)FUN_008e0970();
        if (piVar2 != piVar7) {
          (**(code **)(*piVar2 + 0x18))();
          iVar11 = *(int *)(in_ECX + 0xc);
          uVar10 = FUN_008e0970();
          *(undefined4 *)(iVar11 + local_1c * 4) = uVar10;
        }
      }
      else {
        piVar2 = *(int **)(*(int *)(in_ECX + 0xc) + local_1c * 4);
        piVar7 = (int *)FUN_008e0970();
        if (piVar2 == piVar7) {
          uVar10 = *(undefined4 *)(in_ECX + 8);
          iVar3 = *piVar5;
          iVar8 = (**(code **)(*local_10 + 8))();
          iVar9 = (**(code **)(*(int *)*param_2 + 8))();
          iVar11 = iVar3 + 0x590;
          if ((char)piVar5[3] == '\0') {
            iVar11 = iVar3 + 400;
          }
          iVar4 = *(int *)(in_ECX + 0xc);
          uVar10 = (**(code **)(iVar3 + 0x990 +
                               (uint)*(byte *)(iVar8 * 0x20 + iVar11 + iVar9) * 0x14))
                             (&local_10,param_2,piVar5,uVar10);
          *(undefined4 *)(iVar4 + local_1c * 4) = uVar10;
        }
        else {
          (**(code **)(*piVar2 + 0x1c))(&local_10,param_2,piVar5);
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(in_ECX + 0x10));
  }
  return;
}



undefined4 * FUN_009037a0(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *in_ECX;
  int iVar11;
  int *piStack_10;
  int iStack_c;
  int local_8;
  int *local_4;
  
  in_ECX[2] = param_4;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9bca8;
  piVar1 = in_ECX + 3;
  *piVar1 = (int)(in_ECX + 6);
  in_ECX[4] = 0;
  in_ECX[5] = 0x80000004;
  local_8 = param_1[2];
  piVar2 = (int *)*param_1;
  local_4 = param_1;
  iVar5 = (**(code **)(*piVar2 + 0x1c))();
  if ((int)(in_ECX[5] & 0x3fffffff) < iVar5) {
    iVar6 = (in_ECX[5] & 0x3fffffff) * 2;
    if (iVar6 <= iVar5) {
      iVar6 = iVar5;
    }
    FUN_008a6e40(piVar1,iVar6,4);
  }
  piVar4 = param_3;
  in_ECX[4] = iVar5;
  iVar5 = 0;
  if ((int)in_ECX[4] < 1) {
    return in_ECX;
  }
  do {
    piStack_10 = *(int **)(piVar2[4] + iVar5 * 8);
    iStack_c = iVar5;
    pcVar7 = (char *)(*(code *)**(undefined4 **)piVar4[1])
                               (&param_3,piVar4,param_2,param_1,piVar2,iVar5);
    if (*pcVar7 == '\0') {
      iVar6 = *piVar1;
      uVar10 = FUN_008e0970();
      *(undefined4 *)(iVar6 + iVar5 * 4) = uVar10;
    }
    else {
      iVar6 = *piVar4;
      iVar8 = (**(code **)(*piStack_10 + 8))();
      iVar9 = (**(code **)(*(int *)*param_2 + 8))();
      if ((char)piVar4[3] == '\0') {
        iVar11 = iVar6 + 400;
      }
      else {
        iVar11 = iVar6 + 0x590;
      }
      iVar3 = *piVar1;
      uVar10 = (**(code **)(iVar6 + 0x990 + (uint)*(byte *)(iVar8 * 0x20 + iVar11 + iVar9) * 0x14))
                         (&piStack_10,param_2,piVar4,param_4);
      *(undefined4 *)(iVar3 + iVar5 * 4) = uVar10;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < (int)in_ECX[4]);
  return in_ECX;
}



void FUN_00903910(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],in_ECX[5] << 2,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00903960(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_00903550(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_009039a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_00903360(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_009039e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_20 [28];
  
  fVar1 = (float)param_4[0xc0d];
  pfVar4 = (float *)*param_4;
  FUN_00903270(param_2,param_1,param_3,param_4);
  if (pfVar4 < (float *)*param_4) {
    do {
      pfVar3 = (float *)FUN_008f7000(local_20);
      fVar2 = *pfVar3;
      *pfVar4 = *pfVar4 + fVar2 * pfVar4[4];
      pfVar4[1] = pfVar4[1] + fVar2 * pfVar4[5];
      pfVar4[2] = pfVar4[2] + fVar2 * pfVar4[6];
      pfVar4[3] = pfVar4[3] + fVar2 * pfVar4[7];
      pfVar4[4] = -pfVar4[4];
      pfVar4[5] = -pfVar4[5];
      pfVar4[6] = -pfVar4[6];
      pfVar4[7] = pfVar4[7];
      pfVar4 = pfVar4 + 0xc;
    } while (pfVar4 < (float *)*param_4);
  }
  if (fVar1 != (float)param_4[0xc0d]) {
    param_4[8] = param_4[8] ^ 0x80000000;
    param_4[9] = param_4[9] ^ 0x80000000;
    param_4[10] = param_4[10] ^ 0x80000000;
    param_4[0xb] = param_4[0xb];
  }
  return;
}



void FUN_00903ae0(byte param_1)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],in_ECX[5] << 2,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00903b50(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined ***pppuVar8;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40 [4];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar6 = param_3;
  puVar7 = local_40;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_90 = param_3[4];
  local_8c = param_3[5];
  local_88 = param_3[6];
  local_84 = param_3[7];
  local_80 = param_4;
  local_30 = uVar1 ^ 0x80000000;
  uStack_2c = uVar2 ^ 0x80000000;
  uStack_28 = uVar3 ^ 0x80000000;
  uStack_24 = uVar4 ^ 0x80000000;
  local_9c = 0x7f7fffff;
  local_a0 = &PTR_LAB_00a9b4e8;
  if (param_5 == 0) {
    pppuVar8 = (undefined ***)0x0;
  }
  else {
    local_70 = &PTR_LAB_00a9b4e8;
    local_60 = param_3[4];
    local_5c = param_3[5];
    local_58 = param_3[6];
    local_54 = param_3[7];
    local_50 = param_5;
    pppuVar8 = &local_70;
    local_6c = 0x7f7fffff;
  }
  FUN_00903450(param_2,param_1,local_40,&local_a0,pppuVar8);
  return;
}



void FUN_00903c20(byte param_1)

{
  FUN_00903910();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00903c90(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = &LAB_00903c50;
  local_14 = FUN_00901dc0;
  local_10 = FUN_00901e00;
  local_c = FUN_00901e40;
  local_8 = 1;
  local_7 = 1;
  FUN_008dadd0(&local_18,0xffffffff,0xc);
  local_18 = &LAB_00903aa0;
  local_14 = FUN_00905630;
  local_10 = FUN_009050f0;
  local_c = FUN_00905370;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,0xc,0xffffffff);
  return;
}



void FUN_00903d20(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[7] == 0x1a) {
    (**(code **)(*(int *)in_ECX[5] + 0x20))(in_ECX[3],in_ECX[4]);
  }
  if (in_ECX[8] == 0x1a) {
    (**(code **)(*(int *)in_ECX[6] + 0x20))(in_ECX[4],in_ECX[3]);
  }
  (**(code **)*in_ECX)(1);
  return;
}



void FUN_00903db0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  
  in_ECX[2] = param_3;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a9bd10;
  puVar3 = (undefined4 *)param_1[3];
  puVar2 = param_1;
  while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
    puVar3 = (undefined4 *)puVar1[3];
  }
  in_ECX[3] = puVar2;
  puVar3 = (undefined4 *)param_2[3];
  puVar2 = param_2;
  while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
    puVar3 = (undefined4 *)puVar1[3];
  }
  in_ECX[4] = puVar2;
  uVar4 = (**(code **)(*(int *)*param_1 + 8))();
  in_ECX[7] = uVar4;
  uVar4 = (**(code **)(*(int *)*param_2 + 8))();
  in_ECX[8] = uVar4;
  return;
}



void FUN_00903ee0(void)

{
  undefined1 *local_14;
  undefined1 *local_10;
  code *local_c;
  code *local_8;
  undefined1 local_4;
  undefined1 local_3;
  
  local_4 = 0;
  local_3 = 0;
  local_14 = &LAB_00903e20;
  local_10 = &LAB_00903d80;
  local_c = FUN_00918000;
  local_8 = FUN_00918000;
  FUN_008dadd0(&local_14,0x1a,0xffffffff);
  FUN_008dadd0(&local_14,0xffffffff,0x1a);
  return;
}



void FUN_00903f40(void)

{
  undefined4 *in_ECX;
  
  (**(code **)(*(int *)in_ECX[3] + 0x18))();
  (**(code **)*in_ECX)(1);
  return;
}



void FUN_00903fa0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
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
  puVar5 = param_1 + 0x10;
  puVar6 = in_ECX + 0x10;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  in_ECX[0x24] = param_1[0x24];
  in_ECX[0x25] = param_1[0x25];
  in_ECX[0x26] = param_1[0x26];
  in_ECX[0x27] = param_1[0x27];
  in_ECX[0x28] = param_1[0x28];
  in_ECX[0x29] = param_1[0x29];
  in_ECX[0x2a] = param_1[0x2a];
  *(undefined2 *)(in_ECX + 0x2b) = *(undefined2 *)(param_1 + 0x2b);
  *(undefined2 *)((int)in_ECX + 0xae) = *(undefined2 *)((int)param_1 + 0xae);
  return;
}



undefined4 * FUN_00904040(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  puVar3 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x10,0x1c);
  puVar3[2] = param_4;
  *(undefined2 *)(puVar3 + 1) = 0x10;
  *(undefined2 *)((int)puVar3 + 6) = 1;
  *puVar3 = &PTR_LAB_00a9bd4c;
  piVar1 = *(int **)(*param_1 + 0xc);
  FUN_00903fa0(param_1[2]);
  FUN_008b1f70(param_1[2],*param_1 + 0x20);
  iVar2 = *param_3;
  iVar4 = (**(code **)(*piVar1 + 8))();
  iVar5 = (**(code **)(*(int *)*param_2 + 8))();
  if ((char)param_3[3] == '\0') {
    iVar7 = iVar2 + 400;
  }
  else {
    iVar7 = iVar2 + 0x590;
  }
  uVar6 = (**(code **)(iVar2 + 0x990 + (uint)*(byte *)(iVar4 * 0x20 + iVar7 + iVar5) * 0x14))
                    (&stack0xffffff28,param_2,param_3,param_4);
  puVar3[3] = uVar6;
  return puVar3;
}



void FUN_00904130(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int in_ECX;
  int unaff_FS_OFFSET;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_d0;
  int local_cc;
  undefined1 *local_c8;
  int *local_c4;
  undefined1 local_c0 [64];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtTransform";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  iVar1 = *param_1;
  FUN_008b1f70(param_1[2],(float *)(iVar1 + 0x20));
  iVar3 = param_1[2];
  local_80 = *(undefined4 *)(iVar3 + 0x40);
  uStack_7c = *(undefined4 *)(iVar3 + 0x44);
  uStack_78 = *(undefined4 *)(iVar3 + 0x48);
  uStack_74 = *(undefined4 *)(iVar3 + 0x4c);
  local_70 = *(undefined4 *)(iVar3 + 0x50);
  uStack_6c = *(undefined4 *)(iVar3 + 0x54);
  uStack_68 = *(undefined4 *)(iVar3 + 0x58);
  uStack_64 = *(undefined4 *)(iVar3 + 0x5c);
  FUN_00889470(iVar3 + 0x60,iVar1 + 0x10);
  FUN_00889470(iVar3 + 0x70,iVar1 + 0x10);
  fVar5 = *(float *)(iVar3 + 0x80) - *(float *)(iVar1 + 0x50);
  fVar6 = *(float *)(iVar3 + 0x84) - *(float *)(iVar1 + 0x54);
  fVar7 = *(float *)(iVar3 + 0x88) - *(float *)(iVar1 + 0x58);
  local_40 = *(float *)(iVar1 + 0x20) * fVar5 + *(float *)(iVar1 + 0x24) * fVar6 +
             *(float *)(iVar1 + 0x28) * fVar7;
  fStack_3c = *(float *)(iVar1 + 0x30) * fVar5 + *(float *)(iVar1 + 0x34) * fVar6 +
              *(float *)(iVar1 + 0x38) * fVar7;
  fStack_38 = *(float *)(iVar1 + 0x40) * fVar5 + *(float *)(iVar1 + 0x44) * fVar6 +
              *(float *)(iVar1 + 0x48) * fVar7;
  fStack_34 = *(float *)(iVar1 + 0x40) * fVar5 + *(float *)(iVar1 + 0x44) * fVar6 +
              *(float *)(iVar1 + 0x48) * fVar7;
  local_30 = *(undefined4 *)(iVar3 + 0x90);
  uStack_2c = *(undefined4 *)(iVar3 + 0x94);
  uStack_28 = *(undefined4 *)(iVar3 + 0x98);
  uStack_24 = *(undefined4 *)(iVar3 + 0x9c);
  local_20 = *(undefined4 *)(iVar3 + 0xa0);
  local_c4 = param_1;
  local_c8 = local_c0;
  local_cc = param_1[1];
  local_d0 = *(undefined4 *)(iVar1 + 0xc);
  (**(code **)(**(int **)(in_ECX + 0xc) + 0x14))(&local_d0,param_2,param_3,param_4);
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_00904300(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int in_ECX;
  int unaff_FS_OFFSET;
  undefined4 local_60;
  int local_5c;
  undefined1 *local_58;
  int *local_54;
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtTransform";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_1;
  FUN_008b1f70(param_1[2],iVar2 + 0x20);
  local_54 = param_1;
  local_58 = local_50;
  local_5c = param_1[1];
  local_60 = *(undefined4 *)(iVar2 + 0xc);
  (**(code **)(**(int **)(in_ECX + 0xc) + 0x10))(&local_60,param_2,param_3,param_4,param_5);
  iVar1 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_009043f0(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int unaff_FS_OFFSET;
  int *local_60;
  int local_5c;
  undefined1 *local_58;
  int *local_54;
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar4 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar2 = "TtTransform";
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar2 + 3;
  }
  iVar4 = *param_1;
  FUN_008b1f70(param_1[2],iVar4 + 0x20);
  local_54 = param_1;
  local_58 = local_50;
  local_60 = *(int **)(iVar4 + 0xc);
  local_5c = param_1[1];
  iVar4 = (**(code **)(*local_60 + 8))();
  iVar5 = (**(code **)(*(int *)*param_2 + 8))();
  (**(code **)(*param_3 + (*(byte *)(iVar4 * 0x20 + *param_3 + 400 + iVar5) + 0x7b) * 0x14))
            (&local_60,param_2,param_3,param_4,param_5);
  iVar1 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_009044f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int in_ECX;
  int unaff_FS_OFFSET;
  undefined4 local_60;
  int local_5c;
  undefined1 *local_58;
  int *local_54;
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtTransform";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_1;
  FUN_008b1f70(param_1[2],iVar2 + 0x20);
  local_54 = param_1;
  local_58 = local_50;
  local_5c = param_1[1];
  local_60 = *(undefined4 *)(iVar2 + 0xc);
  (**(code **)(**(int **)(in_ECX + 0xc) + 0xc))(&local_60,param_2,param_3,param_4);
  iVar1 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_009045e0(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int unaff_FS_OFFSET;
  int *local_60;
  int local_5c;
  undefined1 *local_58;
  int *local_54;
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar4 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar2 = "TtTransform";
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar2 + 3;
  }
  iVar4 = *param_1;
  FUN_008b1f70(param_1[2],iVar4 + 0x20);
  local_54 = param_1;
  local_58 = local_50;
  local_60 = *(int **)(iVar4 + 0xc);
  local_5c = param_1[1];
  iVar4 = (**(code **)(*local_60 + 8))();
  iVar5 = (**(code **)(*(int *)*param_2 + 8))();
  (**(code **)(*param_3 + 0x998 + (uint)*(byte *)(iVar4 * 0x20 + *param_3 + 400 + iVar5) * 0x14))
            (&local_60,param_2,param_3,param_4);
  iVar1 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_009046e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int in_ECX;
  int unaff_FS_OFFSET;
  undefined4 local_60;
  int local_5c;
  undefined1 *local_58;
  int *local_54;
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtTransform";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_1;
  FUN_008b1f70(param_1[2],iVar2 + 0x20);
  local_58 = local_50;
  local_54 = param_1;
  local_5c = param_1[1];
  local_60 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  (**(code **)(**(int **)(in_ECX + 0xc) + 8))(&local_60,param_2,param_3,param_4);
  return;
}



void FUN_009047d0(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int unaff_FS_OFFSET;
  int *local_60;
  int local_5c;
  undefined1 *local_58;
  int *local_54;
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar4 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar2 = "TtTransform";
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar2 + 3;
  }
  iVar4 = *param_1;
  FUN_008b1f70(param_1[2],iVar4 + 0x20);
  local_54 = param_1;
  local_58 = local_50;
  local_60 = *(int **)(iVar4 + 0xc);
  local_5c = param_1[1];
  iVar4 = (**(code **)(*local_60 + 8))();
  iVar5 = (**(code **)(*(int *)*param_2 + 8))();
  (**(code **)(*param_3 + 0x994 + (uint)*(byte *)(iVar4 * 0x20 + *param_3 + 400 + iVar5) * 0x14))
            (&local_60,param_2,param_3,param_4);
  iVar1 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_009048d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  undefined4 local_60;
  int local_5c;
  undefined1 *local_58;
  int *local_54;
  undefined1 local_50 [76];
  
  iVar1 = *param_1;
  FUN_008b1f70(param_1[2],iVar1 + 0x20);
  local_54 = param_1;
  local_58 = local_50;
  local_5c = param_1[1];
  local_60 = *(undefined4 *)(iVar1 + 0xc);
  (**(code **)(**(int **)(in_ECX + 0xc) + 0x1c))(&local_60,param_2,param_3);
  return;
}



void FUN_00904930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_009047d0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_00904970(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_009045e0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_009049b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40 [4];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar6 = param_3;
  puVar7 = local_40;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_90 = param_3[4];
  local_8c = param_3[5];
  local_88 = param_3[6];
  local_84 = param_3[7];
  local_80 = param_4;
  local_30 = uVar1 ^ 0x80000000;
  uStack_2c = uVar2 ^ 0x80000000;
  uStack_28 = uVar3 ^ 0x80000000;
  uStack_24 = uVar4 ^ 0x80000000;
  local_9c = 0x7f7fffff;
  local_a0 = &PTR_LAB_00a9b4e8;
  if (param_5 != 0) {
    local_70 = &PTR_LAB_00a9b4e8;
    local_60 = param_3[4];
    local_5c = param_3[5];
    local_58 = param_3[6];
    local_54 = param_3[7];
    local_50 = param_5;
    local_6c = 0x7f7fffff;
    FUN_009043f0(param_2,param_1,local_40,&local_a0,&local_70);
    return;
  }
  FUN_009043f0(param_2,param_1,local_40,&local_a0,0);
  return;
}



void FUN_00904aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_009046e0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_00904ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_009044f0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_00904b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_20 [28];
  
  fVar1 = (float)param_4[0xc0d];
  pfVar4 = (float *)*param_4;
  FUN_00904130(param_2,param_1,param_3,param_4);
  if (pfVar4 < (float *)*param_4) {
    do {
      pfVar3 = (float *)FUN_008f7000(local_20);
      fVar2 = *pfVar3;
      *pfVar4 = *pfVar4 + fVar2 * pfVar4[4];
      pfVar4[1] = pfVar4[1] + fVar2 * pfVar4[5];
      pfVar4[2] = pfVar4[2] + fVar2 * pfVar4[6];
      pfVar4[3] = pfVar4[3] + fVar2 * pfVar4[7];
      pfVar4[4] = -pfVar4[4];
      pfVar4[5] = -pfVar4[5];
      pfVar4[6] = -pfVar4[6];
      pfVar4[7] = pfVar4[7];
      pfVar4 = pfVar4 + 0xc;
    } while (pfVar4 < (float *)*param_4);
  }
  if (fVar1 != (float)param_4[0xc0d]) {
    param_4[8] = param_4[8] ^ 0x80000000;
    param_4[9] = param_4[9] ^ 0x80000000;
    param_4[10] = param_4[10] ^ 0x80000000;
    param_4[0xb] = param_4[0xb];
  }
  return;
}



void FUN_00904be0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined ***pppuVar8;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40 [4];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar6 = param_3;
  puVar7 = local_40;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_90 = param_3[4];
  local_8c = param_3[5];
  local_88 = param_3[6];
  local_84 = param_3[7];
  local_80 = param_4;
  local_30 = uVar1 ^ 0x80000000;
  uStack_2c = uVar2 ^ 0x80000000;
  uStack_28 = uVar3 ^ 0x80000000;
  uStack_24 = uVar4 ^ 0x80000000;
  local_9c = 0x7f7fffff;
  local_a0 = &PTR_LAB_00a9b4e8;
  if (param_5 == 0) {
    pppuVar8 = (undefined ***)0x0;
  }
  else {
    local_70 = &PTR_LAB_00a9b4e8;
    local_60 = param_3[4];
    local_5c = param_3[5];
    local_58 = param_3[6];
    local_54 = param_3[7];
    local_50 = param_5;
    pppuVar8 = &local_70;
    local_6c = 0x7f7fffff;
  }
  FUN_00904300(param_2,param_1,local_40,&local_a0,pppuVar8);
  return;
}



undefined4 * FUN_00904cb0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  puVar3 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x10,0x1c);
  puVar3[2] = param_4;
  *(undefined2 *)(puVar3 + 1) = 0x10;
  *(undefined2 *)((int)puVar3 + 6) = 1;
  *puVar3 = &PTR_LAB_00a9bd4c;
  piVar1 = *(int **)(*param_2 + 0xc);
  FUN_00903fa0(param_2[2]);
  FUN_008b1f70(param_2[2],*param_2 + 0x20);
  iVar2 = *param_3;
  iVar4 = (**(code **)(*piVar1 + 8))();
  iVar5 = (**(code **)(*(int *)*param_1 + 8))();
  if ((char)param_3[3] == '\0') {
    iVar7 = iVar2 + 400;
  }
  else {
    iVar7 = iVar2 + 0x590;
  }
  uVar6 = (**(code **)(iVar2 + 0x990 + (uint)*(byte *)(iVar4 * 0x20 + iVar7 + iVar5) * 0x14))
                    (&stack0xffffff28,param_1,param_3,param_4);
  puVar3[3] = uVar6;
  *puVar3 = &PTR_LAB_00a9bd8c;
  return puVar3;
}



void FUN_00904da0(void)

{
  code *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = FUN_00904cb0;
  local_14 = FUN_00904930;
  local_10 = FUN_00904970;
  local_c = FUN_009049b0;
  local_8 = 1;
  local_7 = 1;
  FUN_008dadd0(&local_18,0xffffffff,0x19);
  local_18 = FUN_00904040;
  local_14 = FUN_009047d0;
  local_10 = FUN_009045e0;
  local_c = FUN_009043f0;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,0x19,0xffffffff);
  return;
}



void FUN_00904e30(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x10)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xc) + 4 + iVar1 * 8) + 0x20))(param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x10));
  }
  return;
}



void FUN_00904e60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x10)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xc) + 4 + iVar1 * 8) + 0x24))
                (param_1,param_2,param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x10));
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00904eb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  int iVar7;
  int unaff_FS_OFFSET;
  int local_238;
  int local_234;
  undefined4 local_228;
  undefined4 *local_224;
  undefined1 local_220 [524];
  undefined4 local_14;
  
  iVar5 = _tls_index;
  iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_14 = DAT_00b30aac;
  iVar1 = *(int *)(iVar7 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtShapeCollection";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  local_228 = param_1[2];
  piVar3 = (int *)*param_1;
  local_224 = param_1;
  piVar6 = *(int **)(in_ECX + 0xc);
  local_238 = *(int *)(in_ECX + 0x10);
  local_234 = in_ECX;
  if (-1 < local_238 + -1) {
    do {
      iVar7 = *piVar6;
      local_238 = (**(code **)(*piVar3 + 0x28))(iVar7,local_220);
      local_234 = iVar7;
      (**(code **)(*(int *)piVar6[1] + 0x14))(&local_238,param_2,param_3,param_4);
      piVar6 = piVar6 + 2;
      local_238 = local_238 + -1;
    } while (local_238 != 0);
    iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
    iVar5 = _tls_index;
  }
  iVar7 = *(int *)(iVar7 + iVar5 * 4);
  if (*(uint *)(iVar7 + 0x1a4) < *(uint *)(iVar7 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar7 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar7 + 0x1a4) = puVar2 + 3;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00904fd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  int iVar7;
  int unaff_FS_OFFSET;
  int local_238;
  int local_234;
  undefined4 local_228;
  undefined4 *local_224;
  undefined1 local_220 [524];
  undefined4 local_14;
  
  iVar5 = _tls_index;
  iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_14 = DAT_00b30aac;
  iVar1 = *(int *)(iVar7 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtShapeCollection";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  local_228 = param_1[2];
  piVar3 = (int *)*param_1;
  local_224 = param_1;
  piVar6 = *(int **)(in_ECX + 0xc);
  local_238 = *(int *)(in_ECX + 0x10);
  local_234 = in_ECX;
  if (-1 < local_238 + -1) {
    do {
      iVar7 = *piVar6;
      local_238 = (**(code **)(*piVar3 + 0x28))(iVar7,local_220);
      local_234 = iVar7;
      (**(code **)(*(int *)piVar6[1] + 0xc))(&local_238,param_2,param_3,param_4);
      piVar6 = piVar6 + 2;
      local_238 = local_238 + -1;
    } while (local_238 != 0);
    iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
    iVar5 = _tls_index;
  }
  iVar7 = *(int *)(iVar7 + iVar5 * 4);
  if (*(uint *)(iVar7 + 0x1a4) < *(uint *)(iVar7 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar7 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar7 + 0x1a4) = puVar2 + 3;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_009050f0(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int unaff_FS_OFFSET;
  int *piVar8;
  undefined4 local_238;
  undefined1 auStack_231 [9];
  undefined4 local_228;
  undefined4 *local_224;
  undefined4 local_14;
  
  iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_14 = DAT_00b30aac;
  iVar4 = *(int *)(iVar7 + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar1 = "TtShapeCollection";
    uVar3 = rdtsc();
    local_238 = (undefined4)uVar3;
    puVar1[1] = local_238;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar1 + 3;
  }
  local_228 = param_1[2];
  piVar2 = (int *)*param_1;
  local_224 = param_1;
  local_238 = (**(code **)(*(int *)*param_2 + 8))();
  iVar4 = (**(code **)(*piVar2 + 0x20))();
  if (iVar4 != -1) {
    do {
      piVar8 = piVar2;
      pcVar5 = (char *)(*(code *)**(undefined4 **)param_3[1])
                                 (auStack_231,param_3,param_2,param_1,piVar2,iVar4);
      if (*pcVar5 != '\0') {
        piVar6 = (int *)(**(code **)(*piVar2 + 0x28))(iVar4,&local_238);
        iVar7 = (**(code **)(*piVar6 + 8))();
        (**(code **)(*param_3 + 0x998 +
                    (uint)*(byte *)(iVar7 * 0x20 + *param_3 + 400 + (int)piVar8) * 0x14))
                  (&stack0xfffffdb0,param_2,param_3,param_4);
      }
      iVar4 = (**(code **)(*piVar2 + 0x24))(iVar4);
    } while (iVar4 != -1);
    iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar7 = *(int *)(iVar7 + _tls_index * 4);
  if (*(uint *)(iVar7 + 0x1a4) < *(uint *)(iVar7 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar7 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar7 + 0x1a4) = puVar1 + 3;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00905250(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  int iVar7;
  int unaff_FS_OFFSET;
  int local_238;
  int local_234;
  undefined4 local_228;
  undefined4 *local_224;
  undefined1 local_220 [524];
  undefined4 local_14;
  
  iVar5 = _tls_index;
  iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_14 = DAT_00b30aac;
  iVar1 = *(int *)(iVar7 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtShapeCollection";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  local_228 = param_1[2];
  piVar3 = (int *)*param_1;
  local_224 = param_1;
  piVar6 = *(int **)(in_ECX + 0xc);
  local_238 = *(int *)(in_ECX + 0x10);
  local_234 = in_ECX;
  if (-1 < local_238 + -1) {
    do {
      iVar7 = *piVar6;
      local_238 = (**(code **)(*piVar3 + 0x28))(iVar7,local_220);
      local_234 = iVar7;
      (**(code **)(*(int *)piVar6[1] + 0x10))(&local_238,param_2,param_3,param_4,param_5);
      piVar6 = piVar6 + 2;
      local_238 = local_238 + -1;
    } while (local_238 != 0);
    iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
    iVar5 = _tls_index;
  }
  iVar7 = *(int *)(iVar7 + iVar5 * 4);
  if (*(uint *)(iVar7 + 0x1a4) < *(uint *)(iVar7 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar7 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar7 + 0x1a4) = puVar2 + 3;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00905370(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int unaff_FS_OFFSET;
  int *piVar10;
  undefined4 local_238;
  undefined1 auStack_231 [9];
  undefined4 local_228;
  undefined4 *local_224;
  undefined4 local_14;
  
  iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_14 = DAT_00b30aac;
  iVar6 = *(int *)(iVar9 + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar1 = "TtShapeCollection";
    uVar3 = rdtsc();
    local_238 = (undefined4)uVar3;
    puVar1[1] = local_238;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar1 + 3;
  }
  local_228 = param_1[2];
  piVar2 = (int *)*param_1;
  local_224 = param_1;
  local_238 = (**(code **)(*(int *)*param_2 + 8))();
  iVar6 = (**(code **)(*piVar2 + 0x20))();
  if (iVar6 != -1) {
    do {
      piVar10 = piVar2;
      pcVar7 = (char *)(*(code *)**(undefined4 **)param_3[1])
                                 (auStack_231,param_3,param_2,param_1,piVar2,iVar6);
      if (*pcVar7 != '\0') {
        piVar8 = (int *)(**(code **)(*piVar2 + 0x28))(iVar6,&local_238);
        iVar9 = (**(code **)(*piVar8 + 8))();
        if (piVar10 == (int *)0x18) {
          puVar5 = (undefined4 *)param_2[3];
          puVar1 = param_2;
          while (puVar4 = puVar5, puVar4 != (undefined4 *)0x0) {
            puVar1 = puVar4;
            puVar5 = (undefined4 *)puVar4[3];
          }
          if ((puVar1[7] & 0x2000) != 0) {
            piVar10 = (int *)0x3;
          }
        }
        (**(code **)(*param_3 +
                    (*(byte *)(iVar9 * 0x20 + *param_3 + 400 + (int)piVar10) + 0x7b) * 0x14))
                  (&stack0xfffffdb0,param_2,param_3,param_4,param_5);
      }
      iVar6 = (**(code **)(*piVar2 + 0x24))(iVar6);
    } while (iVar6 != -1);
    iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar9 = *(int *)(iVar9 + _tls_index * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar1 + 3;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00905510(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  int unaff_FS_OFFSET;
  int local_238;
  int local_234;
  undefined4 local_228;
  undefined4 *local_224;
  undefined1 local_220 [524];
  undefined4 local_14;
  
  iVar5 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_14 = DAT_00b30aac;
  iVar1 = *(int *)(iVar5 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtShapeCollection";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  local_228 = param_1[2];
  piVar3 = (int *)*param_1;
  piVar6 = *(int **)(in_ECX + 0xc);
  local_224 = param_1;
  local_238 = *(int *)(in_ECX + 0x10) + -1;
  local_234 = in_ECX;
  if (-1 < local_238) {
    do {
      iVar5 = *piVar6;
      local_238 = (**(code **)(*piVar3 + 0x28))(iVar5,local_220);
      local_234 = iVar5;
      (**(code **)(*(int *)piVar6[1] + 8))(&local_238,param_2,param_3,param_4);
      if (*(char *)(param_4 + 4) != '\0') break;
      piVar6 = piVar6 + 2;
      local_238 = local_238 + -1;
    } while (-1 < local_238);
    iVar5 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar5 = *(int *)(iVar5 + _tls_index * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar2 + 3;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00905630(undefined4 *param_1,undefined4 *param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int unaff_FS_OFFSET;
  int iStack_240;
  int *local_238;
  undefined4 uStack_234;
  undefined4 local_228;
  undefined4 *local_224;
  undefined1 auStack_220 [524];
  undefined4 local_14;
  
  iVar6 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_14 = DAT_00b30aac;
  iVar4 = *(int *)(iVar6 + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar1 = "TtShapeCollection";
    uVar3 = rdtsc();
    local_238 = (int *)uVar3;
    puVar1[1] = local_238;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar1 + 3;
  }
  local_228 = param_1[2];
  piVar2 = (int *)*param_1;
  local_224 = param_1;
  local_238 = (int *)(**(code **)(*(int *)*param_2 + 8))();
  iVar4 = (**(code **)(*piVar2 + 0x20))();
  if (iVar4 != -1) {
    do {
      pcVar5 = (char *)(*(code *)**(undefined4 **)param_3[1])
                                 ((int)&uStack_234 + 3,param_3,param_2,param_1,piVar2,iVar4);
      if (*pcVar5 != '\0') {
        local_238 = (int *)(**(code **)(*piVar2 + 0x28))(iVar4,auStack_220);
        uStack_234 = iVar4;
        iVar6 = (**(code **)(*local_238 + 8))();
        (**(code **)(*param_3 + 0x994 +
                    (uint)*(byte *)(iVar6 * 0x20 + *param_3 + 400 + iStack_240) * 0x14))
                  (&local_238,param_2,param_3,param_4);
        if (*(char *)(param_4 + 4) != '\0') break;
      }
      iVar4 = (**(code **)(*piVar2 + 0x24))(iVar4);
    } while (iVar4 != -1);
    iVar6 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar6 = *(int *)(iVar6 + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar1 + 3;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_009057a0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  int unaff_EBX;
  int *unaff_EDI;
  int iVar7;
  int iStack_254;
  int *piStack_250;
  undefined4 uStack_24c;
  int iStack_248;
  undefined1 uStack_241;
  int *local_240;
  int local_238;
  int iStack_234;
  undefined4 local_228;
  undefined4 *local_224;
  undefined1 auStack_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  local_228 = param_1[2];
  piVar5 = (int *)*param_1;
  local_224 = param_1;
  local_240 = piVar5;
  local_238 = in_ECX;
  iVar1 = (**(code **)(*piVar5 + 0x1c))();
  iStack_248 = iVar1;
  uStack_24c = (**(code **)(*piVar5 + 0x20))();
  if (0 < iVar1) {
    do {
      iVar1 = iStack_254;
      local_238 = (**(code **)(*piVar5 + 0x28))(uStack_24c,auStack_220);
      iVar7 = 0;
      iStack_234 = iStack_254;
      if (0 < *(int *)(in_ECX + 0x10)) {
        piVar5 = *(int **)(in_ECX + 0xc);
        do {
          if (*piVar5 == iStack_254) goto LAB_0090583f;
          iVar7 = iVar7 + 1;
          piVar5 = piVar5 + 2;
        } while (iVar7 < *(int *)(in_ECX + 0x10));
      }
      iVar7 = -1;
LAB_0090583f:
      pcVar2 = (char *)(*(code *)**(undefined4 **)param_3[1])
                                 (&uStack_241,param_3,param_2,param_1,iStack_248);
      if (*pcVar2 == '\0') {
        if (iVar7 != -1) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0xc) + 4 + iVar7 * 8) + 0x18))();
          iVar4 = *(int *)(in_ECX + 0x10) + -1;
          *(int *)(in_ECX + 0x10) = iVar4;
          iVar3 = *(int *)(in_ECX + 0xc);
          *(undefined4 *)(iVar3 + iVar7 * 8) = *(undefined4 *)(iVar3 + iVar4 * 8);
          *(undefined4 *)(iVar3 + 4 + iVar7 * 8) = *(undefined4 *)(iVar3 + 4 + iVar4 * 8);
        }
      }
      else if (iVar7 == -1) {
        if (*(uint *)(in_ECX + 0x10) == (*(uint *)(in_ECX + 0x14) & 0x3fffffff)) {
          FUN_008a6ee0((int *)(in_ECX + 0xc),8);
        }
        piVar5 = (int *)(*(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 0x10) * 8);
        *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
        *piVar5 = iStack_254;
        iStack_254 = *(int *)(unaff_EBX + 8);
        iVar7 = *param_3;
        iVar3 = (**(code **)(*piStack_250 + 8))();
        iVar4 = (**(code **)(*(int *)*param_2 + 8))();
        if ((char)param_3[3] == '\0') {
          iVar6 = iVar7 + 400;
        }
        else {
          iVar6 = iVar7 + 0x590;
        }
        iVar7 = (**(code **)(iVar7 + 0x990 + (uint)*(byte *)(iVar3 * 0x20 + iVar6 + iVar4) * 0x14))
                          (&piStack_250,param_2,param_3,iStack_254);
        piVar5[1] = iVar7;
        in_ECX = unaff_EBX;
      }
      else {
        (**(code **)(**(int **)(*(int *)(in_ECX + 0xc) + 4 + iVar7 * 8) + 0x1c))
                  (&piStack_250,param_2,param_3);
      }
      uStack_24c = (**(code **)(*unaff_EDI + 0x24))(iVar1);
      iStack_248 = iStack_248 + -1;
      piVar5 = local_240;
    } while (iStack_248 != 0);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_00905990(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int *piStack_254;
  int *piStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  int iStack_240;
  undefined4 *local_238;
  int *local_234;
  undefined4 local_228;
  undefined4 *local_224;
  undefined1 auStack_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  in_ECX[2] = param_4;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9bdd8;
  piVar1 = in_ECX + 3;
  *piVar1 = (int)(in_ECX + 6);
  in_ECX[4] = 0;
  in_ECX[5] = 0x80000004;
  local_228 = param_1[2];
  piVar8 = (int *)*param_1;
  local_224 = param_1;
  local_238 = in_ECX;
  local_234 = piVar8;
  uStack_24c = (**(code **)(*piVar8 + 0x1c))();
  if ((int)(in_ECX[5] & 0x3fffffff) < uStack_24c) {
    iVar4 = (in_ECX[5] & 0x3fffffff) * 2;
    if (iVar4 <= uStack_24c) {
      iVar4 = uStack_24c;
    }
    FUN_008a6e40(piVar1,iVar4,8);
  }
  uStack_248 = (**(code **)(*piVar8 + 0x20))();
  if (0 < uStack_24c) {
    iStack_240 = uStack_24c;
    do {
      uVar10 = uStack_248;
      local_238 = (undefined4 *)(**(code **)(*piVar8 + 0x28))(uStack_248,auStack_220);
      local_234 = piStack_250;
      pcVar3 = (char *)(*(code *)**(undefined4 **)param_3[1])
                                 ((int)&uStack_24c + 3,param_3,param_2,param_1,piVar8,piStack_250);
      if (*pcVar3 != '\0') {
        iVar4 = in_ECX[4];
        in_ECX[4] = iVar4 + 1;
        iVar9 = *param_3;
        puVar2 = (undefined4 *)(*piVar1 + iVar4 * 8);
        iVar4 = (**(code **)(*piStack_250 + 8))();
        iVar5 = (**(code **)(*(int *)*param_2 + 8))();
        if ((char)param_3[3] == '\0') {
          iVar7 = iVar9 + 400;
        }
        else {
          iVar7 = iVar9 + 0x590;
        }
        uVar6 = (**(code **)(iVar9 + 0x990 + (uint)*(byte *)(iVar4 * 0x20 + iVar7 + iVar5) * 0x14))
                          (&piStack_250,param_2,param_3,param_4);
        puVar2[1] = uVar6;
        *puVar2 = uVar10;
        piVar8 = piStack_254;
      }
      uStack_248 = (**(code **)(*piVar8 + 0x24))(uVar10);
      iStack_240 = iStack_240 + -1;
    } while (iStack_240 != 0);
    return local_238;
  }
  return in_ECX;
}



void FUN_00905b50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_00905510(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_00905b90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_00904fd0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_00905bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_20 [28];
  
  fVar1 = (float)param_4[0xc0d];
  pfVar4 = (float *)*param_4;
  FUN_00904eb0(param_2,param_1,param_3,param_4);
  if (pfVar4 < (float *)*param_4) {
    do {
      pfVar3 = (float *)FUN_008f7000(local_20);
      fVar2 = *pfVar3;
      *pfVar4 = *pfVar4 + fVar2 * pfVar4[4];
      pfVar4[1] = pfVar4[1] + fVar2 * pfVar4[5];
      pfVar4[2] = pfVar4[2] + fVar2 * pfVar4[6];
      pfVar4[3] = pfVar4[3] + fVar2 * pfVar4[7];
      pfVar4[4] = -pfVar4[4];
      pfVar4[5] = -pfVar4[5];
      pfVar4[6] = -pfVar4[6];
      pfVar4[7] = pfVar4[7];
      pfVar4 = pfVar4 + 0xc;
    } while (pfVar4 < (float *)*param_4);
  }
  if (fVar1 != (float)param_4[0xc0d]) {
    param_4[8] = param_4[8] ^ 0x80000000;
    param_4[9] = param_4[9] ^ 0x80000000;
    param_4[10] = param_4[10] ^ 0x80000000;
    param_4[0xb] = param_4[0xb];
  }
  return;
}



void FUN_00905cd0(byte param_1)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],in_ECX[5] << 3,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00905d40(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined ***pppuVar8;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40 [4];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar6 = param_3;
  puVar7 = local_40;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_90 = param_3[4];
  local_8c = param_3[5];
  local_88 = param_3[6];
  local_84 = param_3[7];
  local_80 = param_4;
  local_30 = uVar1 ^ 0x80000000;
  uStack_2c = uVar2 ^ 0x80000000;
  uStack_28 = uVar3 ^ 0x80000000;
  uStack_24 = uVar4 ^ 0x80000000;
  local_9c = 0x7f7fffff;
  local_a0 = &PTR_LAB_00a9b4e8;
  if (param_5 == 0) {
    pppuVar8 = (undefined ***)0x0;
  }
  else {
    local_70 = &PTR_LAB_00a9b4e8;
    local_60 = param_3[4];
    local_5c = param_3[5];
    local_58 = param_3[6];
    local_54 = param_3[7];
    local_50 = param_5;
    pppuVar8 = &local_70;
    local_6c = 0x7f7fffff;
  }
  FUN_00905250(param_2,param_1,local_40,&local_a0,pppuVar8);
  return;
}



void FUN_00905e50(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = &LAB_00905e10;
  local_14 = FUN_00901dc0;
  local_10 = FUN_00901e00;
  local_c = FUN_00901e40;
  local_8 = 1;
  local_7 = 1;
  FUN_008dadd0(&local_18,0xffffffff,2);
  local_18 = &LAB_00905c90;
  local_14 = FUN_00905630;
  local_10 = FUN_009050f0;
  local_c = FUN_00905370;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,2,0xffffffff);
  return;
}



void FUN_00905ee0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40 [4];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar6 = param_3;
  puVar7 = local_40;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_90 = param_3[4];
  local_8c = param_3[5];
  local_88 = param_3[6];
  local_84 = param_3[7];
  local_80 = param_4;
  local_30 = uVar1 ^ 0x80000000;
  uStack_2c = uVar2 ^ 0x80000000;
  uStack_28 = uVar3 ^ 0x80000000;
  uStack_24 = uVar4 ^ 0x80000000;
  local_9c = 0x7f7fffff;
  local_a0 = &PTR_LAB_00a9b4e8;
  if (param_5 != 0) {
    local_70 = &PTR_LAB_00a9b4e8;
    local_60 = param_3[4];
    local_5c = param_3[5];
    local_58 = param_3[6];
    local_54 = param_3[7];
    local_50 = param_5;
    local_6c = 0x7f7fffff;
    FUN_00906090(param_2,param_1,local_40,&local_a0,&local_70);
    return;
  }
  FUN_00906090(param_2,param_1,local_40,&local_a0,0);
  return;
}



void FUN_00905fd0(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = &LAB_008f7140;
  local_14 = FUN_008f6410;
  local_10 = FUN_008f6450;
  local_c = FUN_00905ee0;
  local_8 = 1;
  local_7 = 1;
  FUN_008dadd0(&local_18,0x18,1);
  local_18 = &LAB_008f6780;
  local_14 = FUN_009091d0;
  local_10 = FUN_00908de0;
  local_c = FUN_00906090;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,1,0x18);
  local_18 = &LAB_00906390;
  local_14 = FUN_009091d0;
  local_10 = FUN_00908de0;
  local_c = FUN_00906090;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,0x18,0x18);
  return;
}



void FUN_00906090(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  float unaff_EBX;
  float unaff_ESI;
  int unaff_FS_OFFSET;
  float local_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
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
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  int iStack_9c;
  undefined4 *puStack_98;
  int iStack_94;
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtMopp";
    uVar3 = rdtsc();
    local_f4 = (float)uVar3;
    puVar2[1] = local_f4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  FUN_008b1ff0(*(undefined4 *)(param_2 + 8),param_1[2]);
  (**(code **)(*(int *)*param_1 + 0xc))(local_50,*(undefined4 *)(param_3 + 8),&local_e0);
  FUN_0088fd90(*(undefined4 *)(param_2 + 8),param_3 + 0x10);
  fStack_a0 = *(float *)(param_3 + 8);
  fStack_cc = fStack_ec * 0.5 + fStack_dc * 0.5;
  fStack_c8 = fStack_e8 * 0.5 + fStack_d8 * 0.5;
  fStack_c4 = fStack_e4 * 0.5 + fStack_d4 * 0.5;
  fStack_c0 = local_e0 * 0.5 + fStack_d0 * 0.5;
  fStack_bc = fStack_cc + unaff_ESI;
  fStack_b8 = fStack_c8 + unaff_EBX;
  fStack_b4 = fStack_c4 + local_f4;
  fStack_b0 = fStack_c0 + fStack_f0;
  fStack_ac = (fStack_dc - fStack_ec) * 0.5 + fStack_a0;
  fStack_a8 = (fStack_d8 - fStack_e8) * 0.5 + fStack_a0;
  fStack_a4 = (fStack_d4 - fStack_e4) * 0.5 + fStack_a0;
  fStack_a0 = (fStack_d0 - local_e0) * 0.5 + fStack_a0;
  puStack_98 = param_1;
  iStack_94 = param_2;
  iStack_9c = param_3;
  FUN_00940a30(&fStack_cc,param_4,param_5);
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_00906210(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9be50;
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],(in_ECX[5] & 0x3fffffff) * 0xc,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00906280(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_00909050(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_009062c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_20 [28];
  
  fVar1 = (float)param_4[0xc0d];
  pfVar4 = (float *)*param_4;
  FUN_00907b30(param_2,param_1,param_3,param_4);
  if (pfVar4 < (float *)*param_4) {
    do {
      pfVar3 = (float *)FUN_008f7000(local_20);
      fVar2 = *pfVar3;
      *pfVar4 = *pfVar4 + fVar2 * pfVar4[4];
      pfVar4[1] = pfVar4[1] + fVar2 * pfVar4[5];
      pfVar4[2] = pfVar4[2] + fVar2 * pfVar4[6];
      pfVar4[3] = pfVar4[3] + fVar2 * pfVar4[7];
      pfVar4[4] = -pfVar4[4];
      pfVar4[5] = -pfVar4[5];
      pfVar4[6] = -pfVar4[6];
      pfVar4[7] = pfVar4[7];
      pfVar4 = pfVar4 + 0xc;
    } while (pfVar4 < (float *)*param_4);
  }
  if (fVar1 != (float)param_4[0xc0d]) {
    param_4[8] = param_4[8] ^ 0x80000000;
    param_4[9] = param_4[9] ^ 0x80000000;
    param_4[10] = param_4[10] ^ 0x80000000;
    param_4[0xb] = param_4[0xb];
  }
  return;
}



void FUN_00906360(byte param_1)

{
  FUN_00906210();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00906400(void)

{
  code *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = FUN_009068e0;
  local_14 = FUN_008f6410;
  local_10 = FUN_008f6450;
  local_c = FUN_00905ee0;
  local_8 = 1;
  local_7 = 0;
  FUN_008dadd0(&local_18,0x18,0xffffffff);
  local_18 = FUN_00906780;
  local_14 = FUN_009091d0;
  local_10 = FUN_00908de0;
  local_c = FUN_00906090;
  local_8 = 0;
  local_7 = 0;
  FUN_008dadd0(&local_18,0xffffffff,0x18);
  local_18 = (code *)&LAB_00906390;
  local_14 = FUN_009091d0;
  local_10 = FUN_00908de0;
  local_c = FUN_00906090;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,0x18,0x18);
  return;
}



void FUN_009064c0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  iVar2 = in_ECX[3];
  iVar1 = iVar2 + in_ECX[4] * 0xc;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
    if (*(int **)(iVar2 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar2 + 8) + 0x18))();
    }
  }
  (**(code **)*in_ECX)(1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00906590(undefined4 *param_1,int *param_2,int *param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 local_244;
  int iStack_240;
  int *local_238;
  int local_234;
  int *piStack_230;
  int *piStack_22c;
  undefined1 local_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  local_238 = *(int **)(*param_2 + 0xc);
  local_234 = 0;
  if (0 < *(int *)(in_ECX + 0x10)) {
    local_244 = 0;
    do {
      iVar9 = local_244;
      local_238 = (int *)(**(code **)(*local_238 + 0x28))
                                   (*(undefined4 *)(local_244 + *(int *)(in_ECX + 0xc)),local_220);
      piStack_22c = param_2;
      piStack_230 = (int *)param_2[2];
      piVar7 = (int *)(*(int *)(in_ECX + 0xc) + iVar9);
      local_234 = *piVar7;
      pcVar1 = (char *)(*(code *)**(undefined4 **)param_3[1])
                                 ((int)&local_244 + 3,param_3,param_1,param_2,iStack_240,*piVar7);
      if (*pcVar1 == '\0') {
        piVar7 = *(int **)(iVar9 + 8 + *(int *)(in_ECX + 0xc));
        piVar2 = (int *)FUN_008e0970();
        if (piVar7 != piVar2) {
          (**(code **)(*piVar7 + 0x18))();
          iStack_240 = *(int *)(in_ECX + 0xc) + iVar9;
          uVar5 = FUN_008e0970();
          *(undefined4 *)(iStack_240 + 8) = uVar5;
        }
      }
      else {
        piVar7 = *(int **)(iVar9 + 8 + *(int *)(in_ECX + 0xc));
        piVar2 = (int *)FUN_008e0970();
        if (piVar7 == piVar2) {
          iStack_240 = *(int *)(in_ECX + 8);
          iVar9 = *param_3;
          iVar3 = (**(code **)(*(int *)*param_1 + 8))();
          iVar4 = (**(code **)(*piStack_230 + 8))();
          if ((char)param_3[3] == '\0') {
            iVar6 = iVar9 + 400;
          }
          else {
            iVar6 = iVar9 + 0x590;
          }
          iVar8 = *(int *)(in_ECX + 0xc) + local_244;
          uVar5 = (**(code **)(iVar9 + 0x990 + (uint)*(byte *)(iVar3 * 0x20 + iVar6 + iVar4) * 0x14)
                  )(param_1,&piStack_230,param_3,iStack_240);
          *(undefined4 *)(iVar8 + 8) = uVar5;
          iVar9 = local_244;
        }
        else {
          (**(code **)(*piVar7 + 0x1c))(param_1,&piStack_230,param_3);
        }
      }
      local_234 = local_234 + 1;
      local_244 = iVar9 + 0xc;
    } while (local_234 < *(int *)(in_ECX + 0x10));
  }
  return;
}



void FUN_00906730(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = param_1;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9be50;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0x80000000;
  in_ECX[0xc] = 0x7f7fffff;
  in_ECX[0xd] = 0x7f7fffff;
  in_ECX[0xe] = 0x7f7fffff;
  in_ECX[0xf] = 0x7f7fffff;
  in_ECX[8] = 0x7f7fffff;
  in_ECX[9] = 0x7f7fffff;
  in_ECX[10] = 0x7f7fffff;
  in_ECX[0xb] = 0x7f7fffff;
  return;
}



void FUN_00906780(void)

{
  undefined4 *puVar1;
  undefined4 in_stack_00000010;
  
  puVar1 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x40,0x1c);
  puVar1[2] = in_stack_00000010;
  *(undefined2 *)(puVar1 + 1) = 0x40;
  *(undefined2 *)((int)puVar1 + 6) = 1;
  *puVar1 = &PTR_FUN_00a9be50;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0x80000000;
  puVar1[0xc] = 0x7f7fffff;
  puVar1[0xd] = 0x7f7fffff;
  puVar1[0xe] = 0x7f7fffff;
  puVar1[0xf] = 0x7f7fffff;
  puVar1[8] = 0x7f7fffff;
  puVar1[9] = 0x7f7fffff;
  puVar1[10] = 0x7f7fffff;
  puVar1[0xb] = 0x7f7fffff;
  return;
}



void FUN_009067e0(undefined4 *param_1,int param_2,int param_3,float *param_4)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uStack_64;
  undefined1 local_50 [76];
  
  FUN_008b1ff0(*(undefined4 *)(param_2 + 8),param_1[2]);
  (**(code **)(*(int *)*param_1 + 0xc))(local_50,*(undefined4 *)(param_3 + 8),param_4);
  FUN_0088fd90(*(undefined4 *)(param_2 + 8),param_3 + 0x10);
  auVar2._4_4_ = unaff_EBX;
  auVar2._0_4_ = unaff_ESI;
  auVar2._8_8_ = uStack_64;
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  auVar3 = minps(ZEXT816(0),auVar2);
  *param_4 = *param_4 + auVar3._0_4_;
  param_4[1] = param_4[1] + auVar3._4_4_;
  param_4[2] = param_4[2] + auVar3._8_4_;
  param_4[3] = param_4[3] + auVar3._12_4_;
  auVar2 = maxps(auVar1,auVar2);
  param_4[4] = param_4[4] + auVar2._0_4_;
  param_4[5] = param_4[5] + auVar2._4_4_;
  param_4[6] = param_4[6] + auVar2._8_4_;
  param_4[7] = param_4[7] + auVar2._12_4_;
  return;
}



void FUN_00906860(int *param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  (**(code **)*param_1)("BvTreeAgt",8);
  if (-1 < (int)*(uint *)(in_ECX + 0x14)) {
    (**(code **)(*param_1 + 4))
              ("AgentPtrs",8,*(undefined4 *)(in_ECX + 0xc),*(int *)(in_ECX + 0x10) * 0xc,
               (*(uint *)(in_ECX + 0x14) & 0x3fffffff) * 0xc);
  }
  iVar2 = *(int *)(in_ECX + 0xc);
  iVar1 = iVar2 + *(int *)(in_ECX + 0x10) * 0xc;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
    if (*(int *)(iVar2 + 8) != 0) {
      (**(code **)(*param_1 + 8))("Agent",8,*(int *)(iVar2 + 8));
    }
  }
  return;
}



void FUN_009068e0(void)

{
  undefined4 *puVar1;
  undefined4 in_stack_00000010;
  
  puVar1 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x40,0x1c);
  puVar1[2] = in_stack_00000010;
  *(undefined2 *)(puVar1 + 1) = 0x40;
  *(undefined2 *)((int)puVar1 + 6) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0x80000000;
  puVar1[0xc] = 0x7f7fffff;
  puVar1[0xd] = 0x7f7fffff;
  puVar1[0xe] = 0x7f7fffff;
  puVar1[0xf] = 0x7f7fffff;
  puVar1[8] = 0x7f7fffff;
  puVar1[9] = 0x7f7fffff;
  puVar1[10] = 0x7f7fffff;
  puVar1[0xb] = 0x7f7fffff;
  *puVar1 = &PTR_FUN_00a9beac;
  return;
}



void FUN_00906940(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(float *)(*(int *)(param_1 + 8) + 0xa0) < *(float *)(*(int *)(param_2 + 8) + 0xa0)) {
    iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))();
    *(undefined2 *)(iVar1 + 4) = 0x40;
    FUN_00906730(param_4);
    return;
  }
  puVar2 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x40,0x1c);
  puVar2[2] = param_4;
  *(undefined2 *)(puVar2 + 1) = 0x40;
  *(undefined2 *)((int)puVar2 + 6) = 1;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0x80000000;
  puVar2[0xc] = 0x7f7fffff;
  puVar2[0xd] = 0x7f7fffff;
  puVar2[0xe] = 0x7f7fffff;
  puVar2[0xf] = 0x7f7fffff;
  puVar2[8] = 0x7f7fffff;
  puVar2[9] = 0x7f7fffff;
  puVar2[10] = 0x7f7fffff;
  puVar2[0xb] = 0x7f7fffff;
  *puVar2 = &PTR_FUN_00a9beac;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_009069e0(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  float in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined4 extraout_EDX;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  undefined4 *puVar21;
  int *piVar22;
  int unaff_FS_OFFSET;
  undefined4 *puVar23;
  int *piStack_4d4;
  uint uStack_4d0;
  uint uStack_4cc;
  int *piStack_4c8;
  uint uStack_4c4;
  int iStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float local_4b4;
  float local_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  int *piStack_49c;
  uint uStack_498;
  int iStack_494;
  int aiStack_490 [132];
  undefined1 local_280 [44];
  undefined4 uStack_254;
  undefined4 uStack_250;
  int *piStack_24c;
  int *apiStack_248 [2];
  int iStack_240;
  int *piStack_23c;
  undefined1 auStack_22c [536];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  local_4b4 = in_ECX;
  FUN_008b1ff0(param_2[2],param_1[2]);
  puVar23 = (undefined4 *)((float)param_3[2] * 0.5 + (float)param_3[2]);
  (**(code **)(*(int *)*param_1 + 0xc))(local_280,puVar23,&local_4b0);
  if (DAT_00b2fde0 != '\0') {
    auVar1._4_4_ = -(uint)(fStack_4a8 <= *(float *)((int)in_ECX + 0x34));
    auVar1._0_4_ = -(uint)(fStack_4ac <= *(float *)((int)in_ECX + 0x30));
    auVar1._8_4_ = -(uint)(fStack_4a4 <= *(float *)((int)in_ECX + 0x38));
    auVar1._12_4_ = -(uint)(fStack_4a0 <= *(float *)((int)in_ECX + 0x3c));
    uVar10 = movmskps(extraout_ECX,auVar1);
    auVar2._4_4_ = -(uint)(*(float *)((int)in_ECX + 0x24) <= fStack_4b8);
    auVar2._0_4_ = -(uint)(*(float *)((int)in_ECX + 0x20) <= fStack_4bc);
    auVar2._8_4_ = -(uint)(*(float *)((int)in_ECX + 0x28) <= local_4b4);
    auVar2._12_4_ = -(uint)(*(float *)((int)in_ECX + 0x2c) <= local_4b0);
    uVar15 = movmskps(extraout_EDX,auVar2);
    if (((byte)uVar10 & (byte)uVar15 & 7) == 7) {
      return;
    }
    *(float *)((int)in_ECX + 0x20) = fStack_4bc;
    *(float *)((int)in_ECX + 0x24) = fStack_4b8;
    *(float *)((int)in_ECX + 0x28) = local_4b4;
    *(float *)((int)in_ECX + 0x2c) = local_4b0;
    *(float *)((int)in_ECX + 0x30) = fStack_4ac;
    *(float *)((int)in_ECX + 0x34) = fStack_4a8;
    *(float *)((int)in_ECX + 0x38) = fStack_4a4;
    *(float *)((int)in_ECX + 0x3c) = fStack_4a0;
  }
  piVar14 = (int *)*param_2;
  piStack_49c = aiStack_490;
  uStack_498 = 0;
  iStack_494 = -0x7fffff80;
  (**(code **)(*piVar14 + 0x24))(&fStack_4bc,&piStack_49c);
  iVar16 = *(int *)(DAT_00ba7d98 + 0x28) + *(int *)(DAT_00ba7d98 + 0x14);
  if (iVar16 < *(int *)(DAT_00ba7d98 + 8)) {
    iVar16 = *(int *)(DAT_00ba7d98 + 8) - iVar16;
  }
  else {
    iVar16 = 0;
  }
  if (iVar16 < (int)((uStack_498 - *(int *)((int)in_ECX + 0x10)) * 0x80)) {
    *(undefined4 *)(DAT_00ba7d98 + 4) = 1;
    piVar14 = piStack_49c;
    goto joined_r0x00907270;
  }
  piStack_24c = (int *)piVar14[3];
  piStack_23c = param_2;
  iStack_240 = param_2[2];
  if (DAT_00ba81cd != '\0') {
    uStack_4c4 = *(uint *)((int)in_ECX + 8);
    piVar19 = *(int **)((int)in_ECX + 0xc);
    piVar18 = (int *)((int)in_ECX + 0xc);
    piVar14 = piVar19 + *(int *)((int)in_ECX + 0x10) * 3;
    piVar9 = piStack_49c + uStack_498;
    uVar5 = uStack_498;
    piVar17 = piStack_49c;
    piVar22 = piStack_49c;
    if (piVar19 != piVar14) {
      do {
        piVar3 = piVar17;
        if ((piVar22 == piVar9) || (*piVar19 != *piVar22)) {
          while (piVar22 = piVar3, piVar22 != piVar9) {
            if (*piVar19 == *piVar22) {
              piVar22 = piVar22 + 1;
              goto LAB_00906c34;
            }
            piVar3 = piVar22 + 1;
          }
          (**(code **)(*(int *)piVar19[2] + 0x18))();
          *(int *)((int)in_ECX + 0x10) = *(int *)((int)in_ECX + 0x10) + -1;
          iVar16 = ((int)piVar19 - *piVar18) / 0xc;
          if (iVar16 < *(int *)((int)in_ECX + 0x10)) {
            iVar4 = iVar16 * 0xc;
            do {
              puVar11 = (undefined4 *)(iVar4 + *piVar18);
              *puVar11 = puVar11[3];
              puVar11[1] = puVar11[4];
              puVar11[2] = puVar11[5];
              iVar16 = iVar16 + 1;
              iVar4 = iVar4 + 0xc;
            } while (iVar16 < *(int *)((int)in_ECX + 0x10));
          }
          piVar19 = piVar19 + -3;
          piVar14 = piVar14 + -3;
          uVar5 = uStack_498;
          piVar17 = piStack_49c;
        }
        else {
          piVar22 = piVar22 + 1;
        }
LAB_00906c34:
        piVar19 = piVar19 + 3;
      } while (piVar19 != piVar14);
    }
    uVar7 = *(uint *)((int)in_ECX + 0x10);
    piVar14 = piVar17;
    if (uVar5 != uVar7) {
      piVar22 = (int *)*piVar18;
      piVar19 = piVar22 + uVar7 * 3;
      piVar9 = piVar17 + uVar5;
      for (; piVar17 != piVar9; piVar17 = piVar17 + 1) {
        if ((piVar22 == piVar19) || (*piVar22 != *piVar17)) {
          iVar16 = uVar7 + 1;
          iVar20 = (int)piVar17 - (int)piVar14 >> 2;
          iVar4 = uVar7 - iVar20;
          uVar5 = *(uint *)((int)in_ECX + 0x14) & 0x3fffffff;
          if ((int)uVar5 < iVar16) {
            iVar12 = uVar5 * 2;
            if (iVar12 <= iVar16) {
              iVar12 = iVar16;
            }
            FUN_008a6e40(piVar18,iVar12,0xc);
          }
          iVar20 = iVar20 * 0xc;
          iVar8 = *piVar18 + iVar20;
          iVar12 = iVar8 + 0xc;
          if (-1 < iVar4 + -1) {
            puVar11 = (undefined4 *)(iVar12 + (iVar4 + -1) * 0xc);
            do {
              puVar21 = (undefined4 *)((iVar8 - iVar12) + (int)puVar11);
              *puVar11 = *puVar21;
              puVar11[1] = puVar21[1];
              puVar11[2] = puVar21[2];
              puVar11 = puVar11 + -3;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          *(int *)((int)in_ECX + 0x10) = iVar16;
          piVar14 = (int *)*piVar17;
          piVar22 = (int *)(*piVar18 + iVar20);
          uStack_250 = (**(code **)(*piStack_24c + 0x28))(piVar14,auStack_22c);
          piStack_24c = piVar14;
          pcVar6 = (char *)(*(code *)**(undefined4 **)param_3[1])
                                     (&stack0xfffffb13,param_3,param_1,&uStack_250,uStack_254,
                                      *puVar23);
          if (*pcVar6 == '\0') {
            iVar16 = FUN_008e0970();
          }
          else {
            iVar16 = *param_3;
            iVar4 = (**(code **)(*(int *)*param_1 + 8))();
            iVar20 = (**(code **)(*apiStack_248[0] + 8))();
            if ((char)param_3[3] == '\0') {
              iVar12 = iVar16 + 400;
            }
            else {
              iVar12 = iVar16 + 0x590;
            }
            iVar16 = (**(code **)(iVar16 + 0x990 +
                                 (uint)*(byte *)(iVar4 * 0x20 + iVar12 + iVar20) * 0x14))
                               (param_1,apiStack_248,param_3,uStack_4c4);
          }
          piVar22[2] = iVar16;
          *piVar22 = *piVar17;
          uVar7 = *(uint *)((int)in_ECX + 0x10);
          piVar19 = (int *)(*piVar18 + uVar7 * 0xc);
          piVar14 = piStack_49c;
        }
        piVar22 = piVar22 + 3;
      }
    }
    goto joined_r0x00907270;
  }
  uStack_4c4 = uStack_4c4 & 0xffffff00;
  if (1 < (int)uStack_498) {
    FUN_008f6580(piStack_49c,0,uStack_498 - 1,uStack_4c4);
  }
  uVar5 = uStack_498;
  piVar17 = piStack_49c;
  uVar10 = *(undefined4 *)((int)in_ECX + 8);
  piVar19 = *(int **)((int)in_ECX + 0xc);
  piVar14 = piVar19 + *(int *)((int)in_ECX + 0x10) * 3;
  piVar9 = piStack_49c + uStack_498;
  iVar16 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  piVar22 = *(int **)(iVar16 + 0x19c);
  piStack_4d4 = (int *)0x0;
  uStack_4d0 = 0;
  uStack_4cc = 0x80000000;
  if (piVar22 == (int *)0x0) {
    piVar22 = DAT_00ba7d9c;
  }
  piStack_4c8 = (int *)piVar22[8];
  uVar13 = uStack_498 * 0xc + 0x10 & 0xfffffff0;
  uVar7 = (int)piStack_4c8 + uVar13;
  if ((uint)piVar22[0xb] < uVar7) {
    piStack_4c8 = (int *)(**(code **)(*piVar22 + 0xc))(uVar13);
  }
  else {
    piVar22[8] = uVar7;
  }
  uVar7 = uStack_498;
  uStack_4cc = uVar5 | 0x80000000;
  uVar5 = uVar5 & 0x3fffffff;
  piVar22 = piStack_4c8;
  piStack_4d4 = piStack_4c8;
  if ((int)uVar5 < (int)uStack_498) {
    uVar5 = uVar5 * 2;
    uVar13 = uStack_498;
    if ((int)uStack_498 < (int)uVar5) {
      uVar13 = uVar5;
    }
    FUN_008a6e40(&piStack_4d4,uVar13,0xc);
    piVar22 = piStack_4d4;
  }
  while (uStack_4d0 = uVar7, iVar4 = iStack_4c0, piVar19 != piVar14) {
    if (piVar17 == piVar9) goto joined_r0x00907061;
    piVar18 = (int *)*piVar17;
    if (piVar18 == (int *)*piVar19) {
      *piVar22 = *piVar19;
      piVar22[1] = piVar19[1];
      piVar18 = piVar19 + 2;
      piVar19 = piVar19 + 3;
      piVar17 = piVar17 + 1;
      piVar22[2] = *piVar18;
      uVar7 = uStack_4d0;
      piVar22 = piVar22 + 3;
    }
    else if (piVar18 < (int *)*piVar19) {
      uStack_250 = (**(code **)(*piStack_24c + 0x28))(piVar18,auStack_22c);
      piStack_24c = piVar18;
      pcVar6 = (char *)(*(code *)**(undefined4 **)param_3[1])
                                 (&stack0xfffffb13,param_3,param_1,&uStack_250,uStack_254,*puVar23);
      if (*pcVar6 == '\0') {
        iVar4 = FUN_008e0970();
      }
      else {
        iVar4 = *param_3;
        iVar20 = (**(code **)(*(int *)*param_1 + 8))();
        iVar12 = (**(code **)(*apiStack_248[0] + 8))();
        if ((char)param_3[3] == '\0') {
          iVar8 = iVar4 + 400;
        }
        else {
          iVar8 = iVar4 + 0x590;
        }
        iVar4 = (**(code **)(iVar4 + 0x990 + (uint)*(byte *)(iVar20 * 0x20 + iVar8 + iVar12) * 0x14)
                )(param_1,apiStack_248,param_3,uVar10);
      }
      piVar22[2] = iVar4;
      *piVar22 = *piVar17;
      piVar22 = piVar22 + 3;
      piVar17 = piVar17 + 1;
      uVar7 = uStack_4d0;
    }
    else {
      if ((int *)piVar19[2] != (int *)0x0) {
        (**(code **)(*(int *)piVar19[2] + 0x18))();
      }
      piVar19 = piVar19 + 3;
      uVar7 = uStack_4d0;
    }
  }
joined_r0x00907084:
  for (; piVar17 != piVar9; piVar17 = piVar17 + 1) {
    piVar14 = (int *)*piVar17;
    iStack_4c0 = iVar4;
    uStack_250 = (**(code **)(*piStack_24c + 0x28))(piVar14,auStack_22c);
    piStack_24c = piVar14;
    pcVar6 = (char *)(*(code *)**(undefined4 **)param_3[1])
                               (&stack0xfffffb13,param_3,param_1,&uStack_250,uStack_254,*piVar17);
    if (*pcVar6 == '\0') {
      iVar4 = FUN_008e0970();
    }
    else {
      iVar20 = *param_3;
      iVar12 = (**(code **)(*(int *)*param_1 + 8))();
      iVar8 = (**(code **)(*apiStack_248[0] + 8))();
      iVar4 = iVar20 + 0x590;
      if ((char)param_3[3] == '\0') {
        iVar4 = iVar20 + 400;
      }
      iVar4 = (**(code **)(iVar20 + 0x990 + (uint)*(byte *)(iVar12 * 0x20 + iVar4 + iVar8) * 0x14))
                        (param_1,apiStack_248,param_3,uVar10);
    }
    piVar22[2] = iVar4;
    *piVar22 = *piVar17;
    piVar22 = piVar22 + 3;
    iVar4 = iStack_4c0;
  }
  uVar5 = *(uint *)(iVar4 + 0x14) & 0x3fffffff;
  if ((int)uVar5 < (int)uStack_4d0) {
    if (-1 < (int)*(uint *)(iVar4 + 0x14)) {
      FUN_008a75d0(*(undefined4 *)(iVar4 + 0xc),uVar5 * 0xc,0x14);
    }
    uVar10 = FUN_008a7560(uStack_4d0 * 0xc,0x14);
    *(undefined4 *)(iVar4 + 0xc) = uVar10;
    *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) & 0x40000000 | uStack_4d0;
  }
  *(uint *)(iVar4 + 0x10) = uStack_4d0;
  piVar14 = *(int **)(iVar4 + 0xc);
  piVar9 = piStack_4d4;
  uVar5 = uStack_4d0;
  if (0 < (int)uStack_4d0) {
    do {
      *piVar14 = *piVar9;
      piVar14[1] = piVar9[1];
      uVar5 = uVar5 - 1;
      piVar14[2] = piVar9[2];
      piVar9 = piVar9 + 3;
      piVar14 = piVar14 + 3;
    } while (uVar5 != 0);
  }
  piVar14 = *(int **)(iVar16 + 0x19c);
  if (piVar14 == (int *)0x0) {
    piVar14 = DAT_00ba7d9c;
  }
  piVar14[8] = (int)piStack_4c8;
  if (piStack_4c8 == (int *)piVar14[10]) {
    (**(code **)(*piVar14 + 0x10))(piStack_4c8);
  }
  piVar14 = piStack_49c;
  if (-1 < (int)uStack_4cc) {
    FUN_008a75d0(piStack_4d4,(uStack_4cc & 0x3fffffff) * 0xc,0x14);
    piVar14 = piStack_49c;
  }
joined_r0x00907270:
  if (-1 < iStack_494) {
    FUN_008a75d0(piVar14,iStack_494 << 2,0x14);
  }
  return;
joined_r0x00907061:
  for (; iVar4 = iStack_4c0, piVar19 != piVar14; piVar19 = piVar19 + 3) {
    if ((int *)piVar19[2] != (int *)0x0) {
      (**(code **)(*(int *)piVar19[2] + 0x18))();
    }
  }
  goto joined_r0x00907084;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_009072c0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int in_ECX;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  int *piVar18;
  int unaff_FS_OFFSET;
  undefined1 **ppuVar19;
  undefined4 uStack_4a4;
  int *piStack_4a0;
  uint uStack_498;
  int iStack_494;
  int *piStack_490;
  int *local_48c;
  int *piStack_488;
  uint uStack_484;
  uint uStack_480;
  int *piStack_47c;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 local_460;
  undefined4 uStack_45c;
  int *piStack_458;
  uint uStack_454;
  undefined1 *local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined1 local_444 [500];
  undefined4 uStack_250;
  undefined4 uStack_24c;
  int *piStack_248;
  int *apiStack_244 [2];
  int iStack_23c;
  int *piStack_238;
  undefined1 auStack_228 [532];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  FUN_009067e0(param_1,param_2,param_3,&local_470);
  *(undefined4 *)(in_ECX + 0x20) = local_470;
  *(undefined4 *)(in_ECX + 0x24) = uStack_46c;
  *(undefined4 *)(in_ECX + 0x28) = uStack_468;
  *(undefined4 *)(in_ECX + 0x2c) = uStack_464;
  local_450 = local_444;
  *(undefined4 *)(in_ECX + 0x30) = local_460;
  *(undefined4 *)(in_ECX + 0x34) = uStack_45c;
  *(int **)(in_ECX + 0x38) = piStack_458;
  *(uint *)(in_ECX + 0x3c) = uStack_454;
  piVar3 = (int *)*param_2;
  ppuVar19 = &local_450;
  local_44c = 0;
  local_448 = 0x80000080;
  (**(code **)(*piVar3 + 0x24))(&local_470);
  piStack_248 = (int *)piVar3[3];
  uStack_498 = uStack_498 & 0xffffff00;
  if (1 < (int)uStack_454) {
    FUN_008f6580(piStack_458,0,uStack_454 - 1,uStack_498);
  }
  iVar6 = iStack_494;
  piStack_238 = param_2;
  iStack_23c = param_2[2];
  if (DAT_00ba81cd == '\0') {
    uStack_498 = uStack_498 & 0xffffff00;
    if (1 < (int)uStack_454) {
      FUN_008f6580(piStack_458,0,uStack_454 - 1,uStack_498);
    }
    uVar2 = uStack_454;
    piVar8 = piStack_458;
    uStack_498 = *(uint *)(in_ECX + 8);
    piVar3 = *(int **)(in_ECX + 0xc);
    local_48c = piVar3 + *(int *)(in_ECX + 0x10) * 3;
    piStack_490 = piStack_458 + uStack_454;
    piStack_488 = (int *)0x0;
    uStack_484 = 0;
    piStack_4a0 = *(int **)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    uStack_480 = 0x80000000;
    uStack_4a4 = (int *)piStack_4a0[0x67];
    if ((int *)piStack_4a0[0x67] == (int *)0x0) {
      uStack_4a4 = DAT_00ba7d9c;
    }
    piStack_47c = (int *)uStack_4a4[8];
    uVar12 = uStack_454 * 0xc + 0x10 & 0xfffffff0;
    uVar10 = (int)piStack_47c + uVar12;
    if ((uint)uStack_4a4[0xb] < uVar10) {
      uStack_4a4 = (int *)*uStack_4a4;
      piStack_47c = (int *)(*(code *)uStack_4a4[3])(uVar12);
    }
    else {
      uStack_4a4[8] = uVar10;
      uStack_4a4 = piStack_47c;
    }
    uStack_480 = uVar2 | 0x80000000;
    uVar2 = uVar2 & 0x3fffffff;
    piStack_488 = piStack_47c;
    if ((int)uVar2 < (int)uStack_454) {
      uVar2 = uVar2 * 2;
      uVar10 = uStack_454;
      if ((int)uStack_454 < (int)uVar2) {
        uVar10 = uVar2;
      }
      FUN_008a6e40(&piStack_488,uVar10,0xc);
    }
    uStack_484 = uStack_454;
    piVar18 = piStack_488;
    if (piVar3 != local_48c) {
      do {
        if (piVar8 == piStack_490) {
          if (piVar3 != local_48c) {
            do {
              if ((int *)piVar3[2] != (int *)0x0) {
                (**(code **)(*(int *)piVar3[2] + 0x18))();
              }
              piVar3 = piVar3 + 3;
            } while (piVar3 != local_48c);
          }
          break;
        }
        piVar11 = (int *)*piVar8;
        if (piVar11 == (int *)*piVar3) {
          *piVar18 = *piVar3;
          piVar18[1] = piVar3[1];
          piVar11 = piVar3 + 2;
          piVar3 = piVar3 + 3;
          piVar8 = piVar8 + 1;
          piVar18[2] = *piVar11;
          piVar18 = piVar18 + 3;
        }
        else if (piVar11 < (int *)*piVar3) {
          uStack_24c = (**(code **)(*piStack_248 + 0x28))(piVar11,auStack_228);
          piStack_248 = piVar11;
          pcVar4 = (char *)(*(code *)**(undefined4 **)param_3[1])
                                     ((int)&uStack_4a4 + 3,param_3,param_1,&uStack_24c,uStack_250,
                                      *ppuVar19);
          if (*pcVar4 == '\0') {
            iVar6 = FUN_008e0970();
            piVar18[2] = iVar6;
          }
          else {
            uStack_4a4 = (int *)*param_3;
            iVar6 = (**(code **)(*(int *)*param_1 + 8))();
            iVar15 = (**(code **)(*apiStack_244[0] + 8))();
            if ((char)param_3[3] == '\0') {
              piVar11 = uStack_4a4 + 100;
            }
            else {
              piVar11 = uStack_4a4 + 0x164;
            }
            iVar6 = (*(code *)uStack_4a4
                              [(uint)*(byte *)((int)piVar11 + iVar15 + iVar6 * 0x20) * 5 + 0x264])
                              (param_1,apiStack_244,param_3,uStack_498);
            piVar18[2] = iVar6;
          }
          *piVar18 = *piVar8;
          piVar18 = piVar18 + 3;
          piVar8 = piVar8 + 1;
        }
        else {
          if ((int *)piVar3[2] != (int *)0x0) {
            (**(code **)(*(int *)piVar3[2] + 0x18))();
          }
          piVar3 = piVar3 + 3;
        }
      } while (piVar3 != local_48c);
    }
    if (piVar8 != piStack_490) {
      do {
        piVar3 = (int *)*piVar8;
        uStack_24c = (**(code **)(*piStack_248 + 0x28))(piVar3,auStack_228);
        piStack_248 = piVar3;
        pcVar4 = (char *)(*(code *)**(undefined4 **)param_3[1])
                                   ((int)&uStack_4a4 + 3,param_3,param_1,&uStack_24c,uStack_250,
                                    *piVar8);
        if (*pcVar4 == '\0') {
          iVar6 = FUN_008e0970();
          piVar18[2] = iVar6;
        }
        else {
          iVar15 = *param_3;
          iVar16 = (**(code **)(*(int *)*param_1 + 8))();
          iVar5 = (**(code **)(*apiStack_244[0] + 8))();
          iVar6 = iVar15 + 0x590;
          if ((char)param_3[3] == '\0') {
            iVar6 = iVar15 + 400;
          }
          iVar6 = (**(code **)(iVar15 + 0x990 +
                              (uint)*(byte *)(iVar16 * 0x20 + iVar6 + iVar5) * 0x14))
                            (param_1,apiStack_244,param_3,uStack_498);
          piVar18[2] = iVar6;
        }
        *piVar18 = *piVar8;
        piVar18 = piVar18 + 3;
        piVar8 = piVar8 + 1;
      } while (piVar8 != piStack_490);
    }
    iVar6 = iStack_494;
    uVar2 = *(uint *)(iStack_494 + 0x14) & 0x3fffffff;
    if ((int)uVar2 < (int)uStack_484) {
      if (-1 < (int)*(uint *)(iStack_494 + 0x14)) {
        FUN_008a75d0(*(undefined4 *)(iStack_494 + 0xc),uVar2 * 0xc,0x14);
      }
      uVar7 = FUN_008a7560(uStack_484 * 0xc,0x14);
      *(undefined4 *)(iVar6 + 0xc) = uVar7;
      *(uint *)(iVar6 + 0x14) = *(uint *)(iVar6 + 0x14) & 0x40000000 | uStack_484;
    }
    *(uint *)(iVar6 + 0x10) = uStack_484;
    piVar3 = *(int **)(iVar6 + 0xc);
    piVar8 = piStack_488;
    uVar2 = uStack_484;
    if (0 < (int)uStack_484) {
      do {
        *piVar3 = *piVar8;
        piVar3[1] = piVar8[1];
        uVar2 = uVar2 - 1;
        piVar3[2] = piVar8[2];
        piVar8 = piVar8 + 3;
        piVar3 = piVar3 + 3;
      } while (uVar2 != 0);
    }
    piVar3 = (int *)piStack_4a0[0x67];
    if ((int *)piStack_4a0[0x67] == (int *)0x0) {
      piVar3 = DAT_00ba7d9c;
    }
    piVar3[8] = (int)piStack_47c;
    if (piStack_47c == (int *)piVar3[10]) {
      (**(code **)(*piVar3 + 0x10))(piStack_47c);
    }
    piVar3 = piStack_458;
    if (-1 < (int)uStack_480) {
      FUN_008a75d0(piStack_488,(uStack_480 & 0x3fffffff) * 0xc,0x14);
      piVar3 = piStack_458;
    }
  }
  else {
    local_48c = *(int **)(iStack_494 + 8);
    piVar18 = *(int **)(iStack_494 + 0xc);
    piVar14 = (int *)(iStack_494 + 0xc);
    piVar3 = piVar18 + *(int *)(iStack_494 + 0x10) * 3;
    piVar8 = piStack_458 + uStack_454;
    piVar11 = piStack_458;
    uVar2 = uStack_454;
    piVar13 = piStack_458;
    if (piVar18 != piVar3) {
      do {
        piVar1 = piVar11;
        if ((piVar13 == piVar8) || (*piVar18 != *piVar13)) {
          for (; uStack_4a4 = piVar1, piVar1 != piVar8; piVar1 = piVar1 + 1) {
            if (*piVar18 == *piVar1) {
              piVar13 = piVar1 + 1;
              goto LAB_00907474;
            }
          }
          (**(code **)(*(int *)piVar18[2] + 0x18))();
          iVar15 = *piVar14;
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + -1;
          iVar15 = ((int)piVar18 - iVar15) / 0xc;
          piVar13 = piVar1;
          if (iVar15 < *(int *)(iVar6 + 0x10)) {
            piStack_4a0 = (int *)(iVar15 * 0xc);
            do {
              puVar9 = (undefined4 *)((int)piStack_4a0 + *piVar14);
              *puVar9 = puVar9[3];
              puVar9[1] = puVar9[4];
              puVar9[2] = puVar9[5];
              iVar15 = iVar15 + 1;
              piStack_4a0 = piStack_4a0 + 3;
              piVar13 = uStack_4a4;
            } while (iVar15 < *(int *)(iVar6 + 0x10));
          }
          piVar18 = piVar18 + -3;
          piVar3 = piVar3 + -3;
          piVar11 = piStack_458;
          uVar2 = uStack_454;
        }
        else {
          piVar13 = piVar13 + 1;
        }
LAB_00907474:
        piVar18 = piVar18 + 3;
      } while (piVar18 != piVar3);
    }
    uVar10 = *(uint *)(iVar6 + 0x10);
    piVar3 = piVar11;
    if (uVar2 != uVar10) {
      piVar18 = (int *)*piVar14;
      piStack_4a0 = piVar18 + uVar10 * 3;
      piVar8 = piVar11 + uVar2;
      for (; piVar11 != piVar8; piVar11 = piVar11 + 1) {
        if ((piVar18 == piStack_4a0) || (*piVar18 != *piVar11)) {
          piVar18 = (int *)(uVar10 + 1);
          iVar15 = (int)piVar11 - (int)piVar3 >> 2;
          iStack_494 = uVar10 - iVar15;
          uVar2 = *(uint *)(iVar6 + 0x14) & 0x3fffffff;
          piStack_490 = piVar18;
          if ((int)uVar2 < (int)piVar18) {
            piVar3 = (int *)(uVar2 * 2);
            if ((int)piVar3 <= (int)piVar18) {
              piVar3 = piVar18;
            }
            FUN_008a6e40(piVar14,piVar3,0xc);
          }
          iVar15 = iVar15 * 0xc;
          iVar16 = iVar15 + *piVar14;
          uStack_498 = iVar16 + 0xc;
          if (-1 < iStack_494 + -1) {
            puVar9 = (undefined4 *)(uStack_498 + (iStack_494 + -1) * 0xc);
            iVar16 = iVar16 - uStack_498;
            piStack_4a0 = (int *)iStack_494;
            do {
              puVar17 = (undefined4 *)(iVar16 + (int)puVar9);
              *puVar9 = *puVar17;
              puVar9[1] = puVar17[1];
              puVar9[2] = puVar17[2];
              puVar9 = puVar9 + -3;
              piStack_4a0 = (int *)((int)piStack_4a0 + -1);
            } while (piStack_4a0 != (int *)0x0);
            piStack_4a0 = (int *)0x0;
            piVar18 = piStack_490;
            iStack_494 = iVar16;
          }
          iVar16 = *piVar14;
          *(int **)(iVar6 + 0x10) = piVar18;
          piVar3 = (int *)*piVar11;
          piVar18 = (int *)(iVar16 + iVar15);
          uStack_24c = (**(code **)(*piStack_248 + 0x28))(piVar3,auStack_228);
          piStack_248 = piVar3;
          pcVar4 = (char *)(*(code *)**(undefined4 **)param_3[1])
                                     ((int)&uStack_4a4 + 3,param_3,param_1,&uStack_24c,uStack_250,
                                      *ppuVar19);
          if (*pcVar4 == '\0') {
            iVar15 = FUN_008e0970();
          }
          else {
            uStack_4a4 = (int *)*param_3;
            iVar15 = (**(code **)(*(int *)*param_1 + 8))();
            iVar16 = (**(code **)(*apiStack_244[0] + 8))();
            if ((char)param_3[3] == '\0') {
              piVar3 = uStack_4a4 + 100;
            }
            else {
              piVar3 = uStack_4a4 + 0x164;
            }
            iVar15 = (*(code *)uStack_4a4
                               [(uint)*(byte *)((int)piVar3 + iVar16 + iVar15 * 0x20) * 5 + 0x264])
                               (param_1,apiStack_244,param_3,local_48c);
          }
          piVar18[2] = iVar15;
          *piVar18 = *piVar11;
          uVar10 = *(uint *)(iVar6 + 0x10);
          piStack_4a0 = (int *)(*piVar14 + uVar10 * 0xc);
          piVar3 = piStack_458;
        }
        piVar18 = piVar18 + 3;
      }
    }
  }
  if (-1 < (int)local_450) {
    FUN_008a75d0(piVar3,(int)local_450 << 2,0x14);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00907b30(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  char *pcVar10;
  float *pfVar11;
  int iVar12;
  int *extraout_ECX;
  undefined4 uVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar17;
  uint uVar18;
  float *pfVar19;
  undefined4 *unaff_ESI;
  int *piVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  undefined4 *puVar24;
  float *pfVar25;
  int unaff_FS_OFFSET;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar32;
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  float *pfStack_704;
  undefined4 uStack_700;
  float *local_6fc;
  float *local_6f4;
  float *pfStack_6f0;
  undefined1 auStack_6ec [8];
  float local_6e4;
  float *local_6e0;
  float fStack_6dc;
  float fStack_6d8;
  float *pfStack_6d4;
  int iStack_6d0;
  int local_6c4;
  int *piStack_6c0;
  undefined1 auStack_6bc [8];
  float fStack_6b4;
  float local_6b0;
  undefined1 auStack_6ac [8];
  float fStack_6a4;
  float fStack_6a0;
  undefined1 local_690 [52];
  float *pfStack_65c;
  uint uStack_658;
  int iStack_654;
  undefined1 *local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined1 local_644 [496];
  undefined4 uStack_454;
  undefined4 uStack_450;
  int *piStack_44c;
  int *apiStack_448 [2];
  int iStack_440;
  int *piStack_43c;
  undefined1 auStack_42c [512];
  undefined1 auStack_22c [536];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  iVar12 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
    puVar14 = *(undefined4 **)(iVar12 + 0x1a4);
    *puVar14 = "LtBvTree";
    puVar14[3] = "QueryTree";
    uVar3 = rdtsc();
    local_6fc = (float *)uVar3;
    puVar14[1] = local_6fc;
    *(undefined4 **)(iVar12 + 0x1a4) = puVar14 + 4;
  }
  local_650 = local_644;
  local_64c = 0;
  local_648 = 0x80000080;
  FUN_008b1ff0(param_2[2],param_1[2]);
  iVar12 = param_1[2];
  pfVar9 = (float *)param_2[2];
  fVar36 = (float)param_3[6] * *(float *)(iVar12 + 0x5c);
  local_6fc = (float *)((float)param_3[6] * pfVar9[0x17]);
  fVar32 = fVar36 * (*(float *)(iVar12 + 0x40) - *(float *)(iVar12 + 0x50)) +
           (float)local_6fc * (pfVar9[0x14] - pfVar9[0x10]);
  fVar35 = fVar36 * (*(float *)(iVar12 + 0x44) - *(float *)(iVar12 + 0x54)) +
           (float)local_6fc * (pfVar9[0x15] - pfVar9[0x11]);
  fVar36 = fVar36 * (*(float *)(iVar12 + 0x48) - *(float *)(iVar12 + 0x58)) +
           (float)local_6fc * (pfVar9[0x16] - pfVar9[0x12]);
  if (DAT_00b2fde0 == '\0') {
    local_6e4 = 0.0;
  }
  else {
    local_6e4 = (float)(local_6c4 + 0x20);
  }
  fStack_6dc = pfVar9[4] * fVar32 + pfVar9[5] * fVar35 + pfVar9[6] * fVar36;
  fStack_6d8 = pfVar9[8] * fVar32 + pfVar9[9] * fVar35 + pfVar9[10] * fVar36;
  pfStack_6d4 = (float *)(pfVar9[8] * fVar32 + pfVar9[9] * fVar35 + pfVar9[10] * fVar36);
  local_6e0 = (float *)(*pfVar9 * fVar32 + pfVar9[1] * fVar35 + pfVar9[2] * fVar36);
  if (*(char *)(param_3[10] + 0x10) == '\0') {
    (**(code **)(*(int *)*param_1 + 0xc))(local_690,(float)param_3[2] * 0.5,auStack_6bc + 0xc);
    fVar41 = (float)auStack_6ac._0_4_ - (float)auStack_6bc._0_4_;
    fVar43 = (float)auStack_6ac._4_4_ - (float)auStack_6bc._4_4_;
    fVar44 = fStack_6a4 - fStack_6b4;
    fVar45 = fStack_6a0 - local_6b0;
    piVar20 = extraout_ECX;
    uVar17 = extraout_EDX_00;
    fVar36 = (float)auStack_6ac._0_4_;
    fVar32 = (float)auStack_6ac._4_4_;
    fVar35 = fStack_6a4;
    fVar28 = fStack_6a0;
    fVar29 = (float)auStack_6bc._0_4_;
    fVar30 = (float)auStack_6bc._4_4_;
    fVar31 = fStack_6b4;
    fVar40 = local_6b0;
  }
  else {
    local_6f4 = (float *)(pfVar9[0x28] * pfVar9[0x27] * pfVar9[0x27]);
    (**(code **)(*(int *)*param_1 + 0xc))
              (local_690,
               (float)param_3[2] * 0.5 +
               (*(float *)(iVar12 + 0x9c) + pfVar9[0x27]) * *(float *)(iVar12 + 0xa0) +
               (float)local_6f4,auStack_6bc + 0xc);
    pfVar25 = (float *)param_2[2];
    fVar36 = (float)param_3[2] * 0.5 + *(float *)(iVar12 + 0xa0) + (float)uStack_700;
    fVar32 = *(float *)(iVar12 + 0x50) - pfVar25[0xc];
    fVar28 = *(float *)(iVar12 + 0x54) - pfVar25[0xd];
    fVar30 = *(float *)(iVar12 + 0x58) - pfVar25[0xe];
    fVar35 = *pfVar25 * fVar32 + pfVar25[1] * fVar28 + pfVar25[2] * fVar30;
    fVar29 = pfVar25[4] * fVar32 + pfVar25[5] * fVar28 + pfVar25[6] * fVar30;
    fVar31 = pfVar25[8] * fVar32 + pfVar25[9] * fVar28 + pfVar25[10] * fVar30;
    fVar32 = pfVar25[8] * fVar32 + pfVar25[9] * fVar28 + pfVar25[10] * fVar30;
    auVar33._4_4_ = fVar29 - fVar36;
    auVar33._0_4_ = fVar35 - fVar36;
    auVar33._8_4_ = fVar31 - fVar36;
    auVar33._12_4_ = fVar32 - fVar36;
    auVar33 = maxps(_auStack_6bc,auVar33);
    auVar37._0_4_ = fVar35 + fVar36;
    auVar37._4_4_ = fVar29 + fVar36;
    auVar37._8_4_ = fVar31 + fVar36;
    auVar37._12_4_ = fVar32 + fVar36;
    auVar37 = minps(_auStack_6ac,auVar37);
    fVar41 = auVar37._0_4_ - auVar33._0_4_;
    fVar43 = auVar37._4_4_ - auVar33._4_4_;
    fVar44 = auVar37._8_4_ - auVar33._8_4_;
    fVar45 = auVar37._12_4_ - auVar33._12_4_;
    if (0.0 < pfVar9[0x27]) {
      fVar36 = pfVar9[0x17] * (float)param_3[6];
      auStack_6ec._0_4_ =
           (float)auStack_6ec._0_4_ +
           fVar36 * ((fVar29 - pfVar9[0x21]) * pfVar9[0x26] - (fVar31 - pfVar9[0x22]) * pfVar9[0x25]
                    );
      auStack_6ec._4_4_ =
           (float)auStack_6ec._4_4_ +
           fVar36 * ((fVar31 - pfVar9[0x22]) * pfVar9[0x24] - (fVar35 - pfVar9[0x20]) * pfVar9[0x26]
                    );
      local_6e4 = local_6e4 +
                  fVar36 * ((fVar35 - pfVar9[0x20]) * pfVar9[0x25] -
                           (fVar29 - pfVar9[0x21]) * pfVar9[0x24]);
      local_6e0 = (float *)((float)local_6e0 +
                           fVar36 * ((fVar32 - pfVar9[0x23]) * pfVar9[0x27] -
                                    (fVar32 - pfVar9[0x23]) * pfVar9[0x27]));
    }
    auVar26._0_12_ = ZEXT812(0);
    auVar26._12_4_ = 0;
    auVar39 = minps(ZEXT816(0),_auStack_6ec);
    auStack_6bc._0_4_ = auVar33._0_4_ + auVar39._0_4_;
    auStack_6bc._4_4_ = auVar33._4_4_ + auVar39._4_4_;
    fStack_6b4 = auVar33._8_4_ + auVar39._8_4_;
    local_6b0 = auVar33._12_4_ + auVar39._12_4_;
    auVar33 = maxps(auVar26,_auStack_6ec);
    auStack_6ac._0_4_ = auVar37._0_4_ + auVar33._0_4_;
    auStack_6ac._4_4_ = auVar37._4_4_ + auVar33._4_4_;
    fStack_6a4 = auVar37._8_4_ + auVar33._8_4_;
    fStack_6a0 = auVar37._12_4_ + auVar33._12_4_;
    piVar20 = param_2;
    uVar17 = extraout_EDX;
    fVar36 = (float)auStack_6ac._0_4_;
    fVar32 = (float)auStack_6ac._4_4_;
    fVar35 = fStack_6a4;
    fVar28 = fStack_6a0;
    fVar29 = (float)auStack_6bc._0_4_;
    fVar30 = (float)auStack_6bc._4_4_;
    fVar31 = fStack_6b4;
    fVar40 = local_6b0;
  }
  if (pfStack_6f0 != (float *)0x0) {
    auVar39._4_4_ = -(uint)(pfStack_6f0[1] <= fVar30);
    auVar39._0_4_ = -(uint)(*pfStack_6f0 <= fVar29);
    auVar39._8_4_ = -(uint)(pfStack_6f0[2] <= fVar31);
    auVar39._12_4_ = -(uint)(pfStack_6f0[3] <= fVar40);
    uVar13 = movmskps(piVar20,auVar39);
    auVar34._4_4_ = -(uint)(fVar32 <= pfStack_6f0[5]);
    auVar34._0_4_ = -(uint)(fVar36 <= pfStack_6f0[4]);
    auVar34._8_4_ = -(uint)(fVar35 <= pfStack_6f0[6]);
    auVar34._12_4_ = -(uint)(fVar28 <= pfStack_6f0[7]);
    uVar17 = movmskps(uVar17,auVar34);
    pfVar9 = pfStack_65c;
    if (((byte)uVar13 & (byte)uVar17 & 7) == 7) goto joined_r0x00908783;
    auVar27._0_12_ = ZEXT812(0);
    auVar27._12_4_ = 0;
    fVar5 = (float)param_3[2] * 0.5;
    auVar38._0_4_ = fVar41 * 0.4;
    auVar38._4_4_ = fVar43 * 0.4;
    auVar38._8_4_ = fVar44 * 0.4;
    auVar38._12_4_ = fVar45 * 0.4;
    auVar33 = minps(auVar27,_auStack_6ec);
    auVar37 = maxps(ZEXT816(0),_auStack_6ec);
    auVar46._0_4_ = auVar37._0_4_ * -2.0;
    auVar46._4_4_ = auVar37._4_4_ * -2.0;
    auVar46._8_4_ = auVar37._8_4_ * -2.0;
    auVar46._12_4_ = auVar37._12_4_ * -2.0;
    auVar42._0_4_ = auVar33._0_4_ * -2.0;
    auVar42._4_4_ = auVar33._4_4_ * -2.0;
    auVar42._8_4_ = auVar33._8_4_ * -2.0;
    auVar42._12_4_ = auVar33._12_4_ * -2.0;
    uVar6 = CONCAT44(auVar38._4_4_,auVar38._0_4_);
    auVar4._8_4_ = -auVar38._8_4_;
    auVar4._0_8_ = uVar6 ^ 0x8000000080000000;
    auVar4._12_4_ = -auVar38._12_4_;
    auVar33 = maxps(auVar46,auVar4);
    auStack_6bc._0_4_ = (fVar29 - fVar5) + auVar33._0_4_;
    auStack_6bc._4_4_ = (fVar30 - fVar5) + auVar33._4_4_;
    fStack_6b4 = (fVar31 - fVar5) + auVar33._8_4_;
    local_6b0 = (fVar40 - fVar5) + auVar33._12_4_;
    auVar33 = minps(auVar42,auVar38);
    auStack_6ac._0_4_ = fVar36 + fVar5 + auVar33._0_4_;
    auStack_6ac._4_4_ = fVar32 + fVar5 + auVar33._4_4_;
    fStack_6a4 = fVar35 + fVar5 + auVar33._8_4_;
    fStack_6a0 = fVar28 + fVar5 + auVar33._12_4_;
    *pfStack_6f0 = (float)auStack_6bc._0_4_;
    pfStack_6f0[1] = (float)auStack_6bc._4_4_;
    pfStack_6f0[2] = fStack_6b4;
    pfStack_6f0[3] = local_6b0;
    pfStack_6f0[4] = (float)auStack_6ac._0_4_;
    pfStack_6f0[5] = (float)auStack_6ac._4_4_;
    pfStack_6f0[6] = fStack_6a4;
    pfStack_6f0[7] = fStack_6a0;
  }
  (**(code **)(*(int *)*param_2 + 0x24))(auStack_6bc,&pfStack_65c);
  iVar12 = iStack_6d0;
  piStack_44c = *(int **)(*param_2 + 0xc);
  iStack_440 = param_2[2];
  piStack_43c = param_2;
  if (DAT_00ba81cd != '\0') {
    pfStack_6d4 = *(float **)(iStack_6d0 + 8);
    pfVar25 = *(float **)(iStack_6d0 + 0xc);
    piVar20 = (int *)(iStack_6d0 + 0xc);
    local_6f4 = pfVar25 + *(int *)(iStack_6d0 + 0x10) * 3;
    pfVar9 = pfStack_65c + uStack_658;
    pfVar11 = pfStack_65c;
    pfVar19 = pfStack_65c;
    if (pfVar25 != local_6f4) {
      do {
        if ((pfVar19 == pfVar9) || (*pfVar25 != *pfVar19)) {
          pfVar19 = pfVar11;
          if (pfVar11 != pfVar9) {
            do {
              if (*pfVar25 == *pfVar19) {
                pfVar19 = pfVar19 + 1;
                goto LAB_00908107;
              }
              pfVar19 = pfVar19 + 1;
            } while (pfVar19 != pfVar9);
          }
          (**(code **)(*(int *)pfVar25[2] + 0x18))();
          iVar7 = *piVar20;
          *(int *)(iVar12 + 0x10) = *(int *)(iVar12 + 0x10) + -1;
          iVar7 = ((int)pfVar25 - iVar7) / 0xc;
          if (iVar7 < *(int *)(iVar12 + 0x10)) {
            uStack_700 = (float *)(iVar7 * 0xc);
            do {
              puVar14 = (undefined4 *)((int)uStack_700 + *piVar20);
              *puVar14 = puVar14[3];
              puVar14[1] = puVar14[4];
              puVar14[2] = puVar14[5];
              iVar7 = iVar7 + 1;
              uStack_700 = uStack_700 + 3;
            } while (iVar7 < *(int *)(iVar12 + 0x10));
          }
          pfVar25 = pfVar25 + -3;
          local_6f4 = local_6f4 + -3;
          pfVar11 = pfStack_65c;
        }
        else {
          pfVar19 = pfVar19 + 1;
        }
LAB_00908107:
        pfVar25 = pfVar25 + 3;
      } while (pfVar25 != local_6f4);
    }
    uVar8 = *(uint *)(iVar12 + 0x10);
    pfVar9 = pfVar11;
    if (uStack_658 != uVar8) {
      pfVar25 = (float *)*piVar20;
      uStack_700 = pfVar25 + uVar8 * 3;
      local_6fc = pfVar11 + uStack_658;
      if (pfVar11 != local_6fc) {
        do {
          if ((pfVar25 == uStack_700) || (*pfVar25 != *pfVar11)) {
            pfVar25 = (float *)(uVar8 + 1);
            iVar22 = (int)pfVar11 - (int)pfVar9 >> 2;
            iVar7 = uVar8 - iVar22;
            uVar8 = *(uint *)(iVar12 + 0x14) & 0x3fffffff;
            pfStack_6f0 = pfVar25;
            if ((int)uVar8 < (int)pfVar25) {
              pfVar9 = (float *)(uVar8 * 2);
              if ((int)pfVar9 <= (int)pfVar25) {
                pfVar9 = pfVar25;
              }
              FUN_008a6e40(piVar20,pfVar9,0xc);
            }
            iVar22 = iVar22 * 0xc;
            iVar15 = iVar7 + -1;
            iVar23 = *piVar20 + iVar22;
            uStack_700 = (float *)(iVar23 + 0xc);
            if (-1 < iVar15) {
              puVar14 = (undefined4 *)((int)uStack_700 + iVar15 * 0xc);
              iVar23 = iVar23 - (int)uStack_700;
              uStack_700 = (float *)iVar7;
              do {
                puVar24 = (undefined4 *)(iVar23 + (int)puVar14);
                *puVar14 = *puVar24;
                puVar14[1] = puVar24[1];
                puVar14[2] = puVar24[2];
                puVar14 = puVar14 + -3;
                uStack_700 = (float *)((int)uStack_700 + -1);
              } while (uStack_700 != (float *)0x0);
              uStack_700 = (float *)0x0;
              pfVar25 = pfStack_6f0;
            }
            iVar7 = *piVar20;
            *(float **)(iVar12 + 0x10) = pfVar25;
            piVar21 = (int *)*pfVar11;
            pfVar25 = (float *)(iVar7 + iVar22);
            uStack_450 = (**(code **)(*piStack_44c + 0x28))(piVar21,auStack_42c);
            piStack_44c = piVar21;
            pcVar10 = (char *)(*(code *)**(undefined4 **)param_3[1])
                                        ((int)&uStack_700 + 3,param_3,param_1,&uStack_450,uStack_454
                                         ,*unaff_ESI);
            if (*pcVar10 == '\0') {
              fVar36 = (float)FUN_008e0970();
            }
            else {
              local_6f4 = (float *)*param_3;
              iVar7 = (**(code **)(*(int *)*param_1 + 8))();
              iVar22 = (**(code **)(*apiStack_448[0] + 8))();
              if ((char)param_3[3] == '\0') {
                pfVar9 = local_6f4 + 100;
              }
              else {
                pfVar9 = local_6f4 + 0x164;
              }
              fVar36 = (float)(*(code *)local_6f4[(uint)*(byte *)(iVar7 * 0x20 + iVar22 +
                                                                 (int)pfVar9) * 5 + 0x264])
                                        (param_1,apiStack_448,param_3,pfStack_6d4);
            }
            pfVar25[2] = fVar36;
            *pfVar25 = *pfVar11;
            uVar8 = *(uint *)(iVar12 + 0x10);
            uStack_700 = (float *)(*piVar20 + uVar8 * 0xc);
            pfVar9 = pfStack_65c;
          }
          pfVar11 = pfVar11 + 1;
          pfVar25 = pfVar25 + 3;
        } while (pfVar11 != local_6fc);
      }
    }
    goto joined_r0x00908783;
  }
  local_6fc = (float *)((uint)local_6fc & 0xffffff00);
  if (1 < (int)uStack_658) {
    FUN_008f6580(pfStack_65c,0,uStack_658 - 1,local_6fc);
  }
  uVar8 = uStack_658;
  pfVar25 = pfStack_65c;
  uVar17 = *(undefined4 *)(iStack_6d0 + 8);
  pfVar9 = *(float **)(iStack_6d0 + 0xc);
  pfStack_6d4 = pfVar9 + *(int *)(iStack_6d0 + 0x10) * 3;
  pfStack_6f0 = pfStack_65c + uStack_658;
  uStack_700 = *(float **)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  _auStack_6ec = ZEXT412(0x80000000) << 0x40;
  piVar20 = (int *)uStack_700[0x67];
  if ((int *)uStack_700[0x67] == (int *)0x0) {
    piVar20 = DAT_00ba7d9c;
  }
  pfVar11 = (float *)piVar20[8];
  uVar18 = uStack_658 * 0xc + 0x10 & 0xfffffff0;
  uVar16 = (int)pfVar11 + uVar18;
  if ((uint)piVar20[0xb] < uVar16) {
    local_6fc = (float *)*piVar20;
    pfVar11 = (float *)(*(code *)local_6fc[3])(uVar18);
  }
  else {
    piVar20[8] = uVar16;
    local_6fc = pfVar11;
  }
  auStack_6ec._0_4_ = pfVar11;
  local_6e4 = (float)(uVar8 | 0x80000000);
  local_6e0 = pfVar11;
  uVar8 = uVar8 & 0x3fffffff;
  if ((int)uVar8 < (int)uStack_658) {
    uVar8 = uVar8 * 2;
    uVar16 = uStack_658;
    if ((int)uStack_658 < (int)uVar8) {
      uVar16 = uVar8;
    }
    FUN_008a6e40(auStack_6ec,uVar16,0xc);
  }
  auStack_6ec._4_4_ = uStack_658;
  pfStack_704 = (float *)auStack_6ec._0_4_;
  if (pfVar9 != pfStack_6d4) {
    do {
      pfVar11 = pfStack_6d4;
      if (pfVar25 == pfStack_6f0) goto joined_r0x00908573;
      piVar20 = (int *)*pfVar25;
      if (piVar20 == (int *)*pfVar9) {
        *pfStack_704 = *pfVar9;
        pfStack_704[1] = pfVar9[1];
        pfVar11 = pfVar9 + 2;
        pfVar9 = pfVar9 + 3;
        pfStack_704[2] = *pfVar11;
        pfVar25 = pfVar25 + 1;
        pfStack_704 = pfStack_704 + 3;
      }
      else if (piVar20 < (int *)*pfVar9) {
        uStack_450 = (**(code **)(*piStack_44c + 0x28))(piVar20,auStack_42c);
        piStack_44c = piVar20;
        pcVar10 = (char *)(*(code *)**(undefined4 **)param_3[1])
                                    ((int)&uStack_700 + 3,param_3,param_1,&uStack_450,uStack_454,
                                     *pfVar25);
        if (*pcVar10 == '\0') {
          fVar36 = (float)FUN_008e0970();
          pfStack_704[2] = fVar36;
        }
        else {
          local_6f4 = (float *)*param_3;
          iVar12 = (**(code **)(*(int *)*param_1 + 8))();
          iVar7 = (**(code **)(*apiStack_448[0] + 8))();
          if ((char)param_3[3] == '\0') {
            pfVar11 = local_6f4 + 100;
          }
          else {
            pfVar11 = local_6f4 + 0x164;
          }
          fVar36 = (float)(*(code *)local_6f4[(uint)*(byte *)(iVar12 * 0x20 + iVar7 + (int)pfVar11)
                                              * 5 + 0x264])(param_1,apiStack_448,param_3,uVar17);
          pfStack_704[2] = fVar36;
        }
        *pfStack_704 = *pfVar25;
        pfStack_704 = pfStack_704 + 3;
        pfVar25 = pfVar25 + 1;
      }
      else {
        if ((int *)pfVar9[2] != (int *)0x0) {
          (**(code **)(*(int *)pfVar9[2] + 0x18))();
        }
        pfVar9 = pfVar9 + 3;
      }
    } while (pfVar9 != pfStack_6d4);
  }
LAB_0090858a:
  if (pfVar25 != pfStack_6f0) {
    do {
      piVar20 = (int *)*pfVar25;
      uStack_450 = (**(code **)(*piStack_44c + 0x28))(piVar20,auStack_42c);
      piStack_44c = piVar20;
      pcVar10 = (char *)(*(code *)**(undefined4 **)param_3[1])
                                  ((int)&uStack_700 + 3,param_3,param_1,&uStack_450,uStack_454,
                                   *pfVar25);
      if (*pcVar10 == '\0') {
        fVar36 = (float)FUN_008e0970();
        pfStack_704[2] = fVar36;
      }
      else {
        iVar7 = *param_3;
        iVar22 = (**(code **)(*(int *)*param_1 + 8))();
        iVar23 = (**(code **)(*apiStack_448[0] + 8))();
        iVar12 = iVar7 + 0x590;
        if ((char)param_3[3] == '\0') {
          iVar12 = iVar7 + 400;
        }
        fVar36 = (float)(**(code **)(iVar7 + 0x990 +
                                    (uint)*(byte *)(iVar22 * 0x20 + iVar23 + iVar12) * 0x14))
                                  (param_1,apiStack_448,param_3,uVar17);
        pfStack_704[2] = fVar36;
      }
      *pfStack_704 = *pfVar25;
      pfStack_704 = pfStack_704 + 3;
      pfVar25 = pfVar25 + 1;
    } while (pfVar25 != pfStack_6f0);
  }
  iVar12 = iStack_6d0;
  uVar16 = *(uint *)(iStack_6d0 + 0x14) & 0x3fffffff;
  uVar8 = auStack_6ec._4_4_;
  if ((int)uVar16 < (int)auStack_6ec._4_4_) {
    if (-1 < (int)*(uint *)(iStack_6d0 + 0x14)) {
      FUN_008a75d0(*(undefined4 *)(iStack_6d0 + 0xc),uVar16 * 0xc,0x14);
    }
    uVar17 = FUN_008a7560(auStack_6ec._4_4_ * 0xc,0x14);
    *(undefined4 *)(iVar12 + 0xc) = uVar17;
    *(uint *)(iVar12 + 0x14) = *(uint *)(iVar12 + 0x14) & 0x40000000 | auStack_6ec._4_4_;
    uVar8 = auStack_6ec._4_4_;
  }
  *(uint *)(iVar12 + 0x10) = uVar8;
  if (0 < (int)uVar8) {
    puVar14 = (undefined4 *)auStack_6ec._0_4_;
    puVar24 = *(undefined4 **)(iVar12 + 0xc);
    do {
      *puVar24 = *puVar14;
      puVar24[1] = puVar14[1];
      puVar1 = puVar14 + 2;
      puVar14 = puVar14 + 3;
      uVar8 = uVar8 - 1;
      puVar24[2] = *puVar1;
      puVar24 = puVar24 + 3;
    } while (uVar8 != 0);
  }
  piVar20 = (int *)uStack_700[0x67];
  if ((int *)uStack_700[0x67] == (int *)0x0) {
    piVar20 = DAT_00ba7d9c;
  }
  piVar20[8] = (int)local_6e0;
  if (local_6e0 == (float *)piVar20[10]) {
    (**(code **)(*piVar20 + 0x10))(local_6e0);
  }
  pfVar9 = pfStack_65c;
  if (-1 < (int)local_6e4) {
    FUN_008a75d0(auStack_6ec._0_4_,((uint)local_6e4 & 0x3fffffff) * 0xc,0x14);
    pfVar9 = pfStack_65c;
  }
joined_r0x00908783:
  if (-1 < iStack_654) {
    FUN_008a75d0(pfVar9,iStack_654 << 2,0x14);
  }
  piVar21 = *(int **)(iStack_6d0 + 0xc);
  piVar20 = piVar21 + *(int *)(iStack_6d0 + 0x10) * 3;
  local_6c4 = param_2[2];
  iVar12 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
    iVar12 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    puVar14 = *(undefined4 **)(iVar12 + 0x1a4);
    *puVar14 = "StNarrowPhase";
    uVar3 = rdtsc();
    local_6fc = (float *)uVar3;
    puVar14[1] = local_6fc;
    *(undefined4 **)(iVar12 + 0x1a4) = puVar14 + 3;
  }
  piVar2 = *(int **)(*param_2 + 0xc);
  piStack_6c0 = param_2;
  for (; piVar21 != piVar20; piVar21 = piVar21 + 3) {
    pfStack_6d4 = (float *)(**(code **)(*piVar2 + 0x28))(*piVar21,auStack_22c);
    iStack_6d0 = *piVar21;
    (**(code **)(*(int *)piVar21[2] + 0x14))(param_1,&pfStack_6d4,param_3,param_4);
  }
  iVar12 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
    puVar14 = *(undefined4 **)(iVar12 + 0x1a4);
    *puVar14 = &DAT_00a6a630;
    uVar3 = rdtsc();
    puVar14[1] = (int)uVar3;
    *(undefined4 **)(iVar12 + 0x1a4) = puVar14 + 3;
  }
  return;
joined_r0x00908573:
  for (; pfVar9 != pfVar11; pfVar9 = pfVar9 + 3) {
    if ((int *)pfVar9[2] != (int *)0x0) {
      (**(code **)(*(int *)pfVar9[2] + 0x18))();
    }
  }
  goto LAB_0090858a;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_009088d0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  int in_ECX;
  undefined4 *puVar6;
  int unaff_FS_OFFSET;
  undefined1 local_220 [524];
  undefined4 local_14;
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_14 = DAT_00b30aac;
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "LtBvTree";
    puVar3[3] = "QueryTree";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 4;
  }
  FUN_009072c0(param_1,param_2,param_3);
  iVar1 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = "StNarrowPhase";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  puVar6 = *(undefined4 **)(in_ECX + 0xc);
  puVar3 = puVar6 + *(int *)(in_ECX + 0x10) * 3;
  piVar4 = *(int **)(*param_2 + 0xc);
  for (; puVar6 != puVar3; puVar6 = puVar6 + 3) {
    (**(code **)(*piVar4 + 0x28))(*puVar6,local_220);
    (**(code **)(*(int *)puVar6[2] + 0x10))(param_1,&stack0xfffffdc8,param_3,param_4,param_5);
  }
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a6a630;
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00908a40(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  int iVar5;
  int unaff_ESI;
  undefined4 *puVar6;
  int unaff_FS_OFFSET;
  undefined4 uStack_470;
  undefined4 *local_46c;
  int iStack_460;
  int *piStack_45c;
  undefined1 local_450 [24];
  undefined4 *puStack_438;
  int iStack_434;
  undefined1 *local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined1 local_424 [508];
  undefined1 auStack_228 [532];
  undefined4 local_14;
  
  iVar5 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_14 = DAT_00b30aac;
  iVar1 = *(int *)(iVar5 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar6 = "LtBvTree";
    puVar6[3] = "QueryTree";
    uVar3 = rdtsc();
    local_46c = (undefined4 *)uVar3;
    puVar6[1] = local_46c;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar6 + 4;
  }
  FUN_009067e0(param_1,param_2,param_3,local_450);
  piVar2 = (int *)*param_2;
  local_430 = local_424;
  local_42c = 0;
  local_428 = 0x80000080;
  (**(code **)(*piVar2 + 0x24))(local_450,&local_430);
  iVar5 = *(int *)(iVar5 + _tls_index * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar6 = "StNarrowPhase";
    uVar3 = rdtsc();
    puVar6[1] = (int)uVar3;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar6 + 3;
  }
  (**(code **)(*(int *)*param_1 + 8))();
  piVar2 = (int *)piVar2[3];
  local_46c = puStack_438 + iStack_434;
  piStack_45c = param_2;
  iStack_460 = param_2[2];
  puVar6 = puStack_438;
  if (puStack_438 != local_46c) {
    do {
      pcVar4 = (char *)(*(code *)**(undefined4 **)param_3[1])
                                 ((int)&uStack_470 + 3,param_3,param_1,param_2,piVar2,*puVar6);
      if (*pcVar4 != '\0') {
        uStack_470 = (int *)(**(code **)(*piVar2 + 0x28))(*puVar6,auStack_228);
        local_46c = (undefined4 *)*puVar6;
        iVar5 = (**(code **)(*uStack_470 + 8))();
        (**(code **)(*param_3 + (*(byte *)(unaff_ESI * 0x20 + *param_3 + 400 + iVar5) + 0x7b) * 0x14
                    ))(param_1,&uStack_470,param_3,param_4,param_5);
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != local_46c);
  }
  iVar5 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar6 = &DAT_00a6a630;
    uVar3 = rdtsc();
    local_46c = (undefined4 *)uVar3;
    puVar6[1] = local_46c;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar6 + 3;
  }
  if (-1 < (int)local_430) {
    FUN_008a75d0(puStack_438,(int)local_430 << 2,0x14);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00908c70(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  int in_ECX;
  undefined4 *puVar6;
  int unaff_FS_OFFSET;
  undefined1 local_220 [524];
  undefined4 local_14;
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_14 = DAT_00b30aac;
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "LtBvTree";
    puVar3[3] = "QueryTree";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 4;
  }
  FUN_009069e0(param_1,param_2,param_3);
  iVar1 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = "StNarrowPhase";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  puVar6 = *(undefined4 **)(in_ECX + 0xc);
  puVar3 = puVar6 + *(int *)(in_ECX + 0x10) * 3;
  piVar4 = *(int **)(*param_2 + 0xc);
  for (; puVar6 != puVar3; puVar6 = puVar6 + 3) {
    (**(code **)(*piVar4 + 0x28))(*puVar6,local_220);
    (**(code **)(*(int *)puVar6[2] + 0xc))(param_1,&stack0xfffffdc8,param_3,param_4);
  }
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a6a630;
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00908de0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int unaff_FS_OFFSET;
  undefined1 *puVar8;
  undefined1 auStack_49c [12];
  undefined1 local_490 [32];
  undefined1 local_470 [44];
  undefined4 *puStack_444;
  int iStack_440;
  undefined1 *puStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined1 auStack_430 [508];
  undefined1 auStack_234 [544];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  iVar6 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar1 = "LtBvTree";
    puVar1[3] = "QueryTree";
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar1 + 4;
  }
  FUN_008b1ff0(param_2[2],param_1[2]);
  puVar8 = local_490;
  (**(code **)(*(int *)*param_1 + 0xc))(local_470,param_3[2]);
  piVar2 = (int *)*param_2;
  puStack_43c = auStack_430;
  uStack_438 = 0;
  uStack_434 = 0x80000080;
  (**(code **)(*piVar2 + 0x24))(auStack_49c,&puStack_43c);
  iVar6 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    iVar6 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    puVar1 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar1 = "StNarrowPhase";
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar1 + 3;
  }
  (**(code **)(*(int *)*param_1 + 8))();
  piVar2 = (int *)piVar2[3];
  puVar1 = puStack_444 + iStack_440;
  for (puVar7 = puStack_444; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    pcVar4 = (char *)(*(code *)**(undefined4 **)param_3[1])
                               (&stack0xfffffb4b,param_3,param_1,param_2,piVar2,*puVar7);
    if (*pcVar4 != '\0') {
      piVar5 = (int *)(**(code **)(*piVar2 + 0x28))(*puVar7,auStack_234);
      iVar6 = (**(code **)(*piVar5 + 8))();
      (**(code **)(*param_3 + 0x998 +
                  (uint)*(byte *)((int)puVar8 * 0x20 + *param_3 + 400 + iVar6) * 0x14))
                (param_1,&stack0xfffffb44,param_3,param_4);
    }
  }
  iVar6 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar1 = &DAT_00a6a630;
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar1 + 3;
  }
  if (-1 < (int)puStack_43c) {
    FUN_008a75d0(puStack_444,(int)puStack_43c << 2,0x14);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00909050(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int in_ECX;
  undefined4 *puVar6;
  int unaff_FS_OFFSET;
  undefined1 local_220 [524];
  undefined4 local_14;
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_14 = DAT_00b30aac;
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar6 = "LtBvTree";
    puVar6[3] = "QueryTree";
    uVar5 = rdtsc();
    puVar6[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar6 + 4;
  }
  FUN_009069e0(param_1,param_2,param_3);
  iVar1 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar6 = "StNarrowPhase";
    uVar5 = rdtsc();
    puVar6[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar6 + 3;
  }
  puVar6 = *(undefined4 **)(in_ECX + 0xc);
  piVar3 = *(int **)(*param_2 + 0xc);
  if (puVar6 != puVar6 + *(int *)(in_ECX + 0x10) * 3) {
    do {
      (**(code **)(*piVar3 + 0x28))(*puVar6,local_220);
      puVar4 = (undefined4 *)*puVar6;
      (**(code **)(*(int *)puVar6[2] + 8))(param_1,&stack0xfffffdc8,param_3,param_4);
      if (*(char *)(param_4 + 4) != '\0') break;
      puVar6 = puVar6 + 3;
    } while (puVar6 != puVar4);
  }
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar6 = &DAT_00a6a630;
    uVar5 = rdtsc();
    puVar6[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar6 + 3;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_009091d0(undefined4 *param_1,int *param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int unaff_FS_OFFSET;
  undefined1 *puVar8;
  undefined1 auStack_49c [12];
  undefined1 local_490 [32];
  undefined1 local_470 [44];
  undefined4 *puStack_444;
  int iStack_440;
  undefined1 *puStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined1 auStack_430 [508];
  undefined1 auStack_234 [544];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  iVar6 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar1 = "LtBvTree";
    puVar1[3] = "QueryTree";
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar1 + 4;
  }
  FUN_008b1ff0(param_2[2],param_1[2]);
  puVar8 = local_490;
  (**(code **)(*(int *)*param_1 + 0xc))(local_470,param_3[2]);
  piVar2 = (int *)*param_2;
  puStack_43c = auStack_430;
  uStack_438 = 0;
  uStack_434 = 0x80000080;
  (**(code **)(*piVar2 + 0x24))(auStack_49c,&puStack_43c);
  iVar6 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    iVar6 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    puVar1 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar1 = "StNarrowPhase";
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar1 + 3;
  }
  (**(code **)(*(int *)*param_1 + 8))();
  piVar2 = (int *)piVar2[3];
  puVar1 = puStack_444 + iStack_440;
  for (puVar7 = puStack_444; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    pcVar4 = (char *)(*(code *)**(undefined4 **)param_3[1])
                               (&stack0xfffffb4b,param_3,param_1,param_2,piVar2,*puVar7);
    if (*pcVar4 != '\0') {
      piVar5 = (int *)(**(code **)(*piVar2 + 0x28))(*puVar7,auStack_234);
      iVar6 = (**(code **)(*piVar5 + 8))();
      (**(code **)(*param_3 + 0x994 +
                  (uint)*(byte *)((int)puVar8 * 0x20 + *param_3 + 400 + iVar6) * 0x14))
                (param_1,&stack0xfffffb44,param_3,param_4);
      if (*(char *)(param_4 + 4) != '\0') break;
    }
  }
  iVar6 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar1 = &DAT_00a6a630;
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar1 + 3;
  }
  if (-1 < (int)puStack_43c) {
    FUN_008a75d0(puStack_444,(int)puStack_43c << 2,0x14);
  }
  return;
}



void FUN_00909450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_00908c70(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_00909490(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined ***pppuVar8;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40 [4];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar6 = param_3;
  puVar7 = local_40;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_90 = param_3[4];
  local_8c = param_3[5];
  local_88 = param_3[6];
  local_84 = param_3[7];
  local_80 = param_4;
  local_30 = uVar1 ^ 0x80000000;
  uStack_2c = uVar2 ^ 0x80000000;
  uStack_28 = uVar3 ^ 0x80000000;
  uStack_24 = uVar4 ^ 0x80000000;
  local_9c = 0x7f7fffff;
  local_a0 = &PTR_LAB_00a9b4e8;
  if (param_5 == 0) {
    pppuVar8 = (undefined ***)0x0;
  }
  else {
    local_70 = &PTR_LAB_00a9b4e8;
    local_60 = param_3[4];
    local_5c = param_3[5];
    local_58 = param_3[6];
    local_54 = param_3[7];
    local_50 = param_5;
    pppuVar8 = &local_70;
    local_6c = 0x7f7fffff;
  }
  FUN_009088d0(param_2,param_1,local_40,&local_a0,pppuVar8);
  return;
}



void FUN_00909560(void)

{
  code *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = FUN_009068e0;
  local_14 = FUN_008f6410;
  local_10 = FUN_008f6450;
  local_c = FUN_008f6490;
  local_8 = 1;
  local_7 = 1;
  FUN_008dadd0(&local_18,3,0xffffffff);
  local_18 = FUN_00906780;
  local_14 = FUN_009091d0;
  local_10 = FUN_00908de0;
  local_c = FUN_00908a40;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,0xffffffff,3);
  local_18 = FUN_00906940;
  local_14 = FUN_009091d0;
  local_10 = FUN_00908de0;
  local_c = FUN_00908a40;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,3,3);
  return;
}



void FUN_00909620(void)

{
  undefined4 *in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)in_ECX[4]) {
    do {
      (**(code **)(**(int **)(in_ECX[3] + 4 + iVar1 * 8) + 0x18))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)in_ECX[4]);
  }
  (**(code **)*in_ECX)(1);
  return;
}



void FUN_00909650(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int in_ECX;
  int *piVar11;
  int unaff_FS_OFFSET;
  undefined1 *local_e0;
  int local_dc;
  float *local_d8;
  int *local_d4;
  undefined1 local_d0 [12];
  undefined4 local_c4;
  float local_c0;
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
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtMultiSphere";
    uVar6 = rdtsc();
    puVar3[1] = (int)uVar6;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_1;
  FUN_00903fa0(param_1[2]);
  FUN_008ed410(0);
  piVar11 = *(int **)(in_ECX + 0xc);
  iVar4 = *(int *)(in_ECX + 0x10);
  local_d8 = &local_c0;
  local_d4 = param_1;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    iVar5 = param_1[2];
    iVar10 = (*piVar11 + 1) * 0x10;
    pfVar1 = (float *)(iVar10 + iVar2);
    fVar7 = *pfVar1;
    fVar8 = pfVar1[1];
    fVar9 = pfVar1[2];
    local_70 = local_c0 * fVar7 + local_b0 * fVar8 + local_a0 * fVar9;
    fStack_6c = fStack_bc * fVar7 + fStack_ac * fVar8 + fStack_9c * fVar9;
    fStack_68 = fStack_b8 * fVar7 + fStack_a8 * fVar8 + fStack_98 * fVar9;
    fStack_64 = fStack_b4 * fVar7 + fStack_a4 * fVar8 + fStack_94 * fVar9;
    local_90 = *(float *)(iVar5 + 0x30) + local_70;
    fStack_8c = *(float *)(iVar5 + 0x34) + fStack_6c;
    fStack_88 = *(float *)(iVar5 + 0x38) + fStack_68;
    fStack_84 = *(float *)(iVar5 + 0x3c) + fStack_64;
    local_80 = *(float *)(iVar5 + 0x40) + local_70;
    fStack_7c = *(float *)(iVar5 + 0x44) + fStack_6c;
    fStack_78 = *(float *)(iVar5 + 0x48) + fStack_68;
    fStack_74 = *(float *)(iVar5 + 0x4c) + fStack_64;
    local_70 = *(float *)(iVar5 + 0x50) + local_70;
    fStack_6c = *(float *)(iVar5 + 0x54) + fStack_6c;
    fStack_68 = *(float *)(iVar5 + 0x58) + fStack_68;
    fStack_64 = *(float *)(iVar5 + 0x5c) + fStack_64;
    local_c4 = *(undefined4 *)(iVar10 + iVar2 + 0xc);
    local_e0 = local_d0;
    local_dc = iVar4;
    (**(code **)(*(int *)piVar11[1] + 0x14))(&local_e0,param_2,param_3,param_4);
    piVar11 = piVar11 + 2;
  }
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar6 = rdtsc();
    puVar3[1] = (int)uVar6;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_009097d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int in_ECX;
  int *piVar11;
  int unaff_FS_OFFSET;
  undefined1 *local_e0;
  int local_dc;
  float *local_d8;
  int *local_d4;
  undefined1 local_d0 [12];
  undefined4 local_c4;
  float local_c0;
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
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtMultiSphere";
    uVar6 = rdtsc();
    puVar3[1] = (int)uVar6;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_1;
  FUN_00903fa0(param_1[2]);
  FUN_008ed410(0);
  piVar11 = *(int **)(in_ECX + 0xc);
  iVar4 = *(int *)(in_ECX + 0x10);
  local_d8 = &local_c0;
  local_d4 = param_1;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    iVar5 = param_1[2];
    iVar10 = (*piVar11 + 1) * 0x10;
    pfVar1 = (float *)(iVar10 + iVar2);
    fVar7 = *pfVar1;
    fVar8 = pfVar1[1];
    fVar9 = pfVar1[2];
    local_90 = *(float *)(iVar5 + 0x30) + local_c0 * fVar7 + local_b0 * fVar8 + local_a0 * fVar9;
    fStack_8c = *(float *)(iVar5 + 0x34) + fStack_bc * fVar7 + fStack_ac * fVar8 + fStack_9c * fVar9
    ;
    fStack_88 = *(float *)(iVar5 + 0x38) + fStack_b8 * fVar7 + fStack_a8 * fVar8 + fStack_98 * fVar9
    ;
    fStack_84 = *(float *)(iVar5 + 0x3c) + fStack_b4 * fVar7 + fStack_a4 * fVar8 + fStack_94 * fVar9
    ;
    local_c4 = *(undefined4 *)(iVar10 + iVar2 + 0xc);
    local_e0 = local_d0;
    local_dc = iVar4;
    (**(code **)(*(int *)piVar11[1] + 0xc))(&local_e0,param_2,param_3,param_4);
    piVar11 = piVar11 + 2;
  }
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar6 = rdtsc();
    puVar3[1] = (int)uVar6;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_00909940(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int unaff_FS_OFFSET;
  undefined1 *puStack_e0;
  int iStack_dc;
  float *local_d8;
  int *local_d4;
  undefined1 local_d0 [12];
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar8 = *(int *)(iVar9 + _tls_index * 4);
  if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar1 = "TtMultiSphere";
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar1 + 3;
  }
  pfVar2 = (float *)*param_1;
  FUN_00903fa0(param_1[2]);
  FUN_008ed410(0);
  local_d8 = &local_c0;
  local_d4 = param_1;
  iVar8 = (**(code **)(*(int *)*param_2 + 8))();
  iVar10 = 0;
  pfVar4 = pfVar2;
  if (0 < (int)pfVar2[3]) {
    do {
      fVar5 = pfVar4[4];
      fVar6 = pfVar4[5];
      fVar7 = pfVar4[6];
      iVar9 = param_1[2];
      fStack_90 = *(float *)(iVar9 + 0x30) +
                  local_c0 * fVar5 + fStack_b0 * fVar6 + fStack_a0 * fVar7;
      fStack_8c = *(float *)(iVar9 + 0x34) +
                  fStack_bc * fVar5 + fStack_ac * fVar6 + fStack_9c * fVar7;
      fStack_88 = *(float *)(iVar9 + 0x38) +
                  fStack_b8 * fVar5 + fStack_a8 * fVar6 + fStack_98 * fVar7;
      fStack_84 = *(float *)(iVar9 + 0x3c) +
                  fStack_b4 * fVar5 + fStack_a4 * fVar6 + fStack_94 * fVar7;
      fStack_c4 = pfVar4[7];
      puStack_e0 = local_d0;
      iStack_dc = iVar10;
      iVar9 = FUN_008eaac0();
      (**(code **)(*param_3 + 0x998 + (uint)*(byte *)(iVar9 * 0x20 + *param_3 + 400 + iVar8) * 0x14)
      )(&puStack_e0,param_2,param_3,param_4);
      iVar10 = iVar10 + 1;
      pfVar4 = pfVar4 + 4;
    } while (iVar10 < (int)pfVar2[3]);
    iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar9 = *(int *)(iVar9 + _tls_index * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar1 + 3;
  }
  return;
}



void FUN_00909ad0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int in_ECX;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int unaff_FS_OFFSET;
  undefined1 *local_e0;
  int local_dc;
  float *local_d8;
  int *local_d4;
  undefined1 local_d0 [12];
  float local_c4;
  float local_c0;
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
  
  iVar10 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar1 = *(int *)(iVar10 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtMultiSphere";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  iVar1 = *param_1;
  FUN_00903fa0(param_1[2]);
  FUN_008ed410(0);
  iVar3 = *(int *)(in_ECX + 0xc);
  iVar8 = *(int *)(in_ECX + 0x10) + -1;
  local_d8 = &local_c0;
  local_d4 = param_1;
  if (-1 < iVar8) {
    pfVar9 = (float *)(*(int *)(in_ECX + 0x10) * 0x10 + iVar1);
    do {
      fVar5 = *pfVar9;
      fVar6 = pfVar9[1];
      fVar7 = pfVar9[2];
      iVar10 = param_1[2];
      local_90 = *(float *)(iVar10 + 0x30) + local_c0 * fVar5 + local_b0 * fVar6 + local_a0 * fVar7;
      fStack_8c = *(float *)(iVar10 + 0x34) +
                  fStack_bc * fVar5 + fStack_ac * fVar6 + fStack_9c * fVar7;
      fStack_88 = *(float *)(iVar10 + 0x38) +
                  fStack_b8 * fVar5 + fStack_a8 * fVar6 + fStack_98 * fVar7;
      fStack_84 = *(float *)(iVar10 + 0x3c) +
                  fStack_b4 * fVar5 + fStack_a4 * fVar6 + fStack_94 * fVar7;
      local_c4 = pfVar9[3];
      local_e0 = local_d0;
      local_dc = iVar8;
      (**(code **)(**(int **)(iVar3 + 4) + 0x10))(&local_e0,param_2,param_3,param_4,param_5);
      iVar8 = iVar8 + -1;
      pfVar9 = pfVar9 + -4;
    } while (-1 < iVar8);
    iVar10 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar10 = *(int *)(iVar10 + _tls_index * 4);
  if (*(uint *)(iVar10 + 0x1a4) < *(uint *)(iVar10 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar10 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar10 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_00909c40(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int unaff_FS_OFFSET;
  undefined1 *puStack_e0;
  int iStack_dc;
  float *local_d8;
  int *local_d4;
  undefined1 local_d0 [12];
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar8 = *(int *)(iVar9 + _tls_index * 4);
  if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar1 = "TtMultiSphere";
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar1 + 3;
  }
  pfVar2 = (float *)*param_1;
  FUN_00903fa0(param_1[2]);
  FUN_008ed410(0);
  local_d8 = &local_c0;
  local_d4 = param_1;
  iVar8 = (**(code **)(*(int *)*param_2 + 8))();
  iVar10 = 0;
  pfVar4 = pfVar2;
  if (0 < (int)pfVar2[3]) {
    do {
      fVar5 = pfVar4[4];
      fVar6 = pfVar4[5];
      fVar7 = pfVar4[6];
      iVar9 = param_1[2];
      fStack_90 = *(float *)(iVar9 + 0x30) +
                  local_c0 * fVar5 + fStack_b0 * fVar6 + fStack_a0 * fVar7;
      fStack_8c = *(float *)(iVar9 + 0x34) +
                  fStack_bc * fVar5 + fStack_ac * fVar6 + fStack_9c * fVar7;
      fStack_88 = *(float *)(iVar9 + 0x38) +
                  fStack_b8 * fVar5 + fStack_a8 * fVar6 + fStack_98 * fVar7;
      fStack_84 = *(float *)(iVar9 + 0x3c) +
                  fStack_b4 * fVar5 + fStack_a4 * fVar6 + fStack_94 * fVar7;
      fStack_c4 = pfVar4[7];
      puStack_e0 = local_d0;
      iStack_dc = iVar10;
      iVar9 = FUN_008eaac0();
      (**(code **)(*param_3 + (*(byte *)(iVar9 * 0x20 + *param_3 + 400 + iVar8) + 0x7b) * 0x14))
                (&puStack_e0,param_2,param_3,param_4,param_5);
      iVar10 = iVar10 + 1;
      pfVar4 = pfVar4 + 4;
    } while (iVar10 < (int)pfVar2[3]);
    iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar9 = *(int *)(iVar9 + _tls_index * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar1 + 3;
  }
  return;
}



void FUN_00909de0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  int *piVar10;
  int iVar11;
  int unaff_FS_OFFSET;
  undefined1 *local_e0;
  int local_dc;
  float *local_d8;
  int *local_d4;
  undefined1 local_d0 [12];
  undefined4 local_c4;
  float local_c0;
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
  
  iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar9 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtMultiSphere";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_1;
  FUN_00903fa0(param_1[2]);
  FUN_008ed410(0);
  local_d4 = param_1;
  piVar10 = *(int **)(in_ECX + 0xc);
  iVar11 = *(int *)(in_ECX + 0x10) + -1;
  local_d8 = &local_c0;
  if (-1 < iVar11) {
    do {
      iVar8 = (*piVar10 + 1) * 0x10;
      pfVar1 = (float *)(iVar8 + iVar2);
      fVar5 = *pfVar1;
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      iVar9 = param_1[2];
      local_90 = *(float *)(iVar9 + 0x30) + local_c0 * fVar5 + local_b0 * fVar6 + local_a0 * fVar7;
      fStack_8c = *(float *)(iVar9 + 0x34) +
                  fStack_bc * fVar5 + fStack_ac * fVar6 + fStack_9c * fVar7;
      fStack_88 = *(float *)(iVar9 + 0x38) +
                  fStack_b8 * fVar5 + fStack_a8 * fVar6 + fStack_98 * fVar7;
      fStack_84 = *(float *)(iVar9 + 0x3c) +
                  fStack_b4 * fVar5 + fStack_a4 * fVar6 + fStack_94 * fVar7;
      local_c4 = *(undefined4 *)(iVar8 + iVar2 + 0xc);
      local_e0 = local_d0;
      local_dc = iVar11;
      (**(code **)(*(int *)piVar10[1] + 8))(&local_e0,param_2,param_3,param_4);
      if (*(char *)(param_4 + 4) != '\0') break;
      piVar10 = piVar10 + 2;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
    iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar9 = *(int *)(iVar9 + _tls_index * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_00909f50(int *param_1,undefined4 *param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int unaff_FS_OFFSET;
  undefined1 *puStack_e0;
  int iStack_dc;
  float *local_d8;
  int *local_d4;
  undefined1 local_d0 [12];
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar8 = *(int *)(iVar9 + _tls_index * 4);
  if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar1 = "TtMultiSphere";
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar1 + 3;
  }
  pfVar2 = (float *)*param_1;
  FUN_00903fa0(param_1[2]);
  FUN_008ed410(0);
  local_d8 = &local_c0;
  local_d4 = param_1;
  iVar8 = (**(code **)(*(int *)*param_2 + 8))();
  iVar10 = 0;
  pfVar4 = pfVar2;
  if (0 < (int)pfVar2[3]) {
    do {
      fVar5 = pfVar4[4];
      fVar6 = pfVar4[5];
      fVar7 = pfVar4[6];
      iVar9 = param_1[2];
      fStack_90 = *(float *)(iVar9 + 0x30) +
                  local_c0 * fVar5 + fStack_b0 * fVar6 + fStack_a0 * fVar7;
      fStack_8c = *(float *)(iVar9 + 0x34) +
                  fStack_bc * fVar5 + fStack_ac * fVar6 + fStack_9c * fVar7;
      fStack_88 = *(float *)(iVar9 + 0x38) +
                  fStack_b8 * fVar5 + fStack_a8 * fVar6 + fStack_98 * fVar7;
      fStack_84 = *(float *)(iVar9 + 0x3c) +
                  fStack_b4 * fVar5 + fStack_a4 * fVar6 + fStack_94 * fVar7;
      fStack_c4 = pfVar4[7];
      puStack_e0 = local_d0;
      iStack_dc = iVar10;
      iVar9 = FUN_008eaac0();
      (**(code **)(*param_3 + 0x994 + (uint)*(byte *)(iVar9 * 0x20 + *param_3 + 400 + iVar8) * 0x14)
      )(&puStack_e0,param_2,param_3,param_4);
      if (*(char *)(param_4 + 4) != '\0') break;
      iVar10 = iVar10 + 1;
      pfVar4 = pfVar4 + 4;
    } while (iVar10 < (int)pfVar2[3]);
    iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar9 = *(int *)(iVar9 + _tls_index * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar1 + 3;
  }
  return;
}



void FUN_0090a0f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_00909f50(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_0090a130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_00909940(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_0090a170(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40 [4];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar6 = param_3;
  puVar7 = local_40;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_90 = param_3[4];
  local_8c = param_3[5];
  local_88 = param_3[6];
  local_84 = param_3[7];
  local_80 = param_4;
  local_30 = uVar1 ^ 0x80000000;
  uStack_2c = uVar2 ^ 0x80000000;
  uStack_28 = uVar3 ^ 0x80000000;
  uStack_24 = uVar4 ^ 0x80000000;
  local_9c = 0x7f7fffff;
  local_a0 = &PTR_LAB_00a9b4e8;
  if (param_5 != 0) {
    local_70 = &PTR_LAB_00a9b4e8;
    local_60 = param_3[4];
    local_5c = param_3[5];
    local_58 = param_3[6];
    local_54 = param_3[7];
    local_50 = param_5;
    local_6c = 0x7f7fffff;
    FUN_00909c40(param_2,param_1,local_40,&local_a0,&local_70);
    return;
  }
  FUN_00909c40(param_2,param_1,local_40,&local_a0,0);
  return;
}



undefined4 * FUN_0090a260(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *in_ECX;
  int iVar11;
  int iVar12;
  int local_e0 [3];
  float local_d4;
  int *local_d0;
  int local_cc;
  float *local_c8;
  int *local_c4;
  float local_c0;
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
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  in_ECX[2] = param_4;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9bf10;
  piVar1 = in_ECX + 3;
  *piVar1 = (int)(in_ECX + 6);
  in_ECX[4] = 0;
  in_ECX[5] = 0x80000004;
  pfVar3 = (float *)*param_1;
  fVar4 = pfVar3[3];
  if ((int)(in_ECX[5] & 0x3fffffff) < (int)fVar4) {
    fVar7 = (float)((in_ECX[5] & 0x3fffffff) * 2);
    if ((int)fVar7 <= (int)fVar4) {
      fVar7 = fVar4;
    }
    FUN_008a6e40(piVar1,fVar7,8);
  }
  FUN_008ed410(0);
  FUN_00903fa0(param_1[2]);
  local_c8 = &local_c0;
  iVar12 = 0;
  local_c4 = param_1;
  if (0 < (int)fVar4) {
    do {
      fVar7 = pfVar3[4];
      fVar5 = pfVar3[5];
      fVar6 = pfVar3[6];
      iVar10 = param_1[2];
      local_70 = local_c0 * fVar7 + local_b0 * fVar5 + local_a0 * fVar6;
      fStack_6c = fStack_bc * fVar7 + fStack_ac * fVar5 + fStack_9c * fVar6;
      fStack_68 = fStack_b8 * fVar7 + fStack_a8 * fVar5 + fStack_98 * fVar6;
      fStack_64 = fStack_b4 * fVar7 + fStack_a4 * fVar5 + fStack_94 * fVar6;
      local_90 = *(float *)(iVar10 + 0x30) + local_70;
      fStack_8c = *(float *)(iVar10 + 0x34) + fStack_6c;
      fStack_88 = *(float *)(iVar10 + 0x38) + fStack_68;
      fStack_84 = *(float *)(iVar10 + 0x3c) + fStack_64;
      local_80 = *(float *)(iVar10 + 0x40) + local_70;
      fStack_7c = *(float *)(iVar10 + 0x44) + fStack_6c;
      fStack_78 = *(float *)(iVar10 + 0x48) + fStack_68;
      fStack_74 = *(float *)(iVar10 + 0x4c) + fStack_64;
      iVar8 = in_ECX[4];
      local_70 = *(float *)(iVar10 + 0x50) + local_70;
      fStack_6c = *(float *)(iVar10 + 0x54) + fStack_6c;
      fStack_68 = *(float *)(iVar10 + 0x58) + fStack_68;
      fStack_64 = *(float *)(iVar10 + 0x5c) + fStack_64;
      local_d4 = pfVar3[7];
      local_d0 = local_e0;
      in_ECX[4] = iVar8 + 1;
      piVar2 = (int *)(*piVar1 + iVar8 * 8);
      iVar10 = *param_3;
      local_cc = iVar12;
      iVar8 = (**(code **)(local_e0[0] + 8))();
      iVar9 = (**(code **)(*(int *)*param_2 + 8))();
      if ((char)param_3[3] == '\0') {
        iVar11 = iVar10 + 400;
      }
      else {
        iVar11 = iVar10 + 0x590;
      }
      iVar10 = (**(code **)(iVar10 + 0x990 + (uint)*(byte *)(iVar8 * 0x20 + iVar11 + iVar9) * 0x14))
                         (&local_d0,param_2,param_3,param_4);
      piVar2[1] = iVar10;
      *piVar2 = iVar12;
      iVar12 = iVar12 + 1;
      pfVar3 = pfVar3 + 4;
    } while (iVar12 < (int)fVar4);
  }
  return in_ECX;
}



void FUN_0090a430(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],in_ECX[5] << 3,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_0090a480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_00909de0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_0090a4c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_009097d0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_0090a500(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_20 [28];
  
  fVar1 = (float)param_4[0xc0d];
  pfVar4 = (float *)*param_4;
  FUN_00909650(param_2,param_1,param_3,param_4);
  if (pfVar4 < (float *)*param_4) {
    do {
      pfVar3 = (float *)FUN_008f7000(local_20);
      fVar2 = *pfVar3;
      *pfVar4 = *pfVar4 + fVar2 * pfVar4[4];
      pfVar4[1] = pfVar4[1] + fVar2 * pfVar4[5];
      pfVar4[2] = pfVar4[2] + fVar2 * pfVar4[6];
      pfVar4[3] = pfVar4[3] + fVar2 * pfVar4[7];
      pfVar4[4] = -pfVar4[4];
      pfVar4[5] = -pfVar4[5];
      pfVar4[6] = -pfVar4[6];
      pfVar4[7] = pfVar4[7];
      pfVar4 = pfVar4 + 0xc;
    } while (pfVar4 < (float *)*param_4);
  }
  if (fVar1 != (float)param_4[0xc0d]) {
    param_4[8] = param_4[8] ^ 0x80000000;
    param_4[9] = param_4[9] ^ 0x80000000;
    param_4[10] = param_4[10] ^ 0x80000000;
    param_4[0xb] = param_4[0xb];
  }
  return;
}



void FUN_0090a5e0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined ***pppuVar8;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40 [4];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar6 = param_3;
  puVar7 = local_40;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_90 = param_3[4];
  local_8c = param_3[5];
  local_88 = param_3[6];
  local_84 = param_3[7];
  local_80 = param_4;
  local_30 = uVar1 ^ 0x80000000;
  uStack_2c = uVar2 ^ 0x80000000;
  uStack_28 = uVar3 ^ 0x80000000;
  uStack_24 = uVar4 ^ 0x80000000;
  local_9c = 0x7f7fffff;
  local_a0 = &PTR_LAB_00a9b4e8;
  if (param_5 == 0) {
    pppuVar8 = (undefined ***)0x0;
  }
  else {
    local_70 = &PTR_LAB_00a9b4e8;
    local_60 = param_3[4];
    local_5c = param_3[5];
    local_58 = param_3[6];
    local_54 = param_3[7];
    local_50 = param_5;
    pppuVar8 = &local_70;
    local_6c = 0x7f7fffff;
  }
  FUN_00909ad0(param_2,param_1,local_40,&local_a0,pppuVar8);
  return;
}



void FUN_0090a6b0(byte param_1)

{
  FUN_0090a430();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0090a720(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = &LAB_0090a6e0;
  local_14 = FUN_0090a0f0;
  local_10 = FUN_0090a130;
  local_c = FUN_0090a170;
  local_8 = 1;
  local_7 = 1;
  FUN_008dadd0(&local_18,0xffffffff,0xb);
  local_18 = &LAB_0090a5a0;
  local_14 = FUN_00909f50;
  local_10 = FUN_00909940;
  local_c = FUN_00909c40;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,0xb,0xffffffff);
  return;
}



void FUN_0090a7b0(void)

{
  undefined4 *in_ECX;
  
  (**(code **)(*(int *)in_ECX[3] + 0x18))();
  if ((int *)in_ECX[4] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[4] + 0x18))();
    in_ECX[4] = 0;
  }
  (**(code **)*in_ECX)(1);
  return;
}



void FUN_0090a810(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0xc) + 0x24))(param_1,param_2,param_3);
  if (*(int **)(in_ECX + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x10) + 0x24))(param_1,param_2,param_3);
  }
  return;
}



void FUN_0090a8b0(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int iVar5;
  int *local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  in_ECX[2] = param_4;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a9bf7c;
  local_8 = param_1[2];
  iVar1 = *param_3;
  local_4 = param_1;
  local_10 = *(int **)(*param_1 + 0xc);
  local_c = param_1[1];
  iVar2 = (**(code **)(*local_10 + 8))();
  iVar3 = (**(code **)(*(int *)*param_2 + 8))();
  iVar5 = iVar1 + 0x590;
  if ((char)param_3[3] == '\0') {
    iVar5 = iVar1 + 400;
  }
  uVar4 = (**(code **)(iVar1 + 0x990 + (uint)*(byte *)(iVar2 * 0x20 + iVar5 + iVar3) * 0x14))
                    (&local_10,param_2,param_3,param_4);
  in_ECX[3] = uVar4;
  in_ECX[4] = 0;
  return;
}



void FUN_0090a9a0(int *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  char unaff_BP;
  int unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  undefined **local_18;
  uint local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar1 = "LthkBvAgent";
    puVar1[3] = "checkBvShape";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar1 + 4;
  }
  local_8 = param_1[2];
  iVar3 = *param_1;
  local_4 = param_1;
  local_c = param_1[1];
  local_10 = *(undefined4 *)(iVar3 + 0xc);
  local_18 = &PTR_LAB_00a9bb84;
  local_14 = local_14 & 0xffffff00;
  (**(code **)(**(int **)(in_ECX + 0xc) + 8))(&local_10,param_2,param_3,&local_18);
  if (unaff_BP == '\0') {
    if (*(int **)(in_ECX + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x10) + 0x18))();
      *(undefined4 *)(in_ECX + 0x10) = 0;
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
      local_4 = *(int **)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      puVar1 = (undefined4 *)local_4[0x69];
      *puVar1 = "Stchild";
      uVar2 = rdtsc();
      local_c = (int)uVar2;
      puVar1[1] = local_c;
      local_4[0x69] = (int)(puVar1 + 3);
    }
    if (*(int *)(in_ECX + 0x10) == 0) {
      local_4 = *(int **)(in_ECX + 8);
      local_c = *param_3;
      iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 8))();
      iVar4 = (**(code **)(*(int *)*param_2 + 8))();
      if ((char)param_3[3] == '\0') {
        iVar6 = local_c + 400;
      }
      else {
        iVar6 = local_c + 0x590;
      }
      uVar5 = (**(code **)(local_c + 0x990 + (uint)*(byte *)(iVar3 * 0x20 + iVar6 + iVar4) * 0x14))
                        (&stack0xffffffe0,param_2,param_3,local_4);
      *(undefined4 *)(in_ECX + 0x10) = uVar5;
    }
    (**(code **)(**(int **)(in_ECX + 0x10) + 0x14))(&stack0xffffffe0,param_2,param_3,unaff_retaddr);
  }
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar1 = &DAT_00a6a630;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar1 + 3;
  }
  return;
}



void FUN_0090ab90(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  int unaff_FS_OFFSET;
  int *piStack_64;
  undefined4 uStack_60;
  int local_58;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int *local_44;
  undefined **local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_14;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "LthkBvAgent";
    puVar2[3] = "checkBvShape";
    uVar3 = rdtsc();
    local_58 = (int)uVar3;
    puVar2[1] = local_58;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 4;
  }
  local_48 = param_1[2];
  iVar1 = *param_1;
  local_44 = param_1;
  local_4c = param_1[1];
  local_50 = *(undefined4 *)(iVar1 + 0xc);
  local_40 = &PTR_LAB_00a9bb8c;
  local_38 = 0;
  local_14 = 0x7f7fffff;
  local_3c = 0x7f7fffff;
  (**(code **)(**(int **)(in_ECX + 0xc) + 0x10))(&local_50,param_2,param_3,&local_40,&local_40);
  if ((char)local_4c == '\0') {
    if (*(int **)(in_ECX + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x10) + 0x18))();
      *(undefined4 *)(in_ECX + 0x10) = 0;
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
      iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      puVar2 = *(undefined4 **)(iVar4 + 0x1a4);
      *puVar2 = "Stchild";
      uVar3 = rdtsc();
      puVar2[1] = (int)uVar3;
      *(undefined4 **)(iVar4 + 0x1a4) = puVar2 + 3;
    }
    uStack_60 = *(undefined4 *)(local_58 + 4);
    piStack_64 = *(int **)(iVar1 + 0x10);
    if (*(int *)(in_ECX + 0x10) == 0) {
      uVar6 = *(undefined4 *)(in_ECX + 8);
      iVar1 = *param_3;
      iVar4 = (**(code **)(*piStack_64 + 8))();
      iVar5 = (**(code **)(*(int *)*param_2 + 8))();
      if ((char)param_3[3] == '\0') {
        iVar7 = iVar1 + 400;
      }
      else {
        iVar7 = iVar1 + 0x590;
      }
      uVar6 = (**(code **)(iVar1 + 0x990 + (uint)*(byte *)(iVar4 * 0x20 + iVar7 + iVar5) * 0x14))
                        (&piStack_64,param_2,param_3,uVar6);
      *(undefined4 *)(in_ECX + 0x10) = uVar6;
    }
    (**(code **)(**(int **)(in_ECX + 0x10) + 0x10))(&piStack_64,param_2,param_3,param_4,param_5);
  }
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a6a630;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_0090ada0(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_FS_OFFSET;
  int *local_50;
  int local_4c;
  int local_48;
  int *local_44;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  char cStack_38;
  undefined4 uStack_14;
  
  iVar5 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar1 = "LthkBvAgent";
    puVar1[3] = "checkBvShape";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar1 + 4;
  }
  local_48 = param_1[2];
  iVar5 = *param_1;
  local_44 = param_1;
  local_50 = *(int **)(iVar5 + 0xc);
  local_4c = param_1[1];
  iVar3 = (**(code **)(*local_50 + 8))();
  iVar4 = (**(code **)(*(int *)*param_2 + 8))();
  ppuStack_40 = &PTR_LAB_00a9bb8c;
  cStack_38 = '\0';
  uStack_14 = 0x7f7fffff;
  uStack_3c = 0x7f7fffff;
  (**(code **)(*param_3 + (*(byte *)(iVar3 * 0x20 + *param_3 + 400 + iVar4) + 0x7b) * 0x14))
            (&local_50,param_2,param_3,&ppuStack_40,&ppuStack_40);
  if (cStack_38 != '\0') {
    iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
      iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      puVar1 = *(undefined4 **)(iVar3 + 0x1a4);
      *puVar1 = "Stchild";
      uVar2 = rdtsc();
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar3 + 0x1a4) = puVar1 + 3;
    }
    local_50 = *(int **)(iVar5 + 0x10);
    local_4c = local_44[1];
    iVar5 = (**(code **)(*local_50 + 8))();
    (**(code **)(*param_3 + (*(byte *)(iVar5 * 0x20 + *param_3 + 400 + iVar4) + 0x7b) * 0x14))
              (&local_50,param_2,param_3,param_4,param_5);
  }
  iVar5 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar1 = &DAT_00a6a630;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar1 + 3;
  }
  return;
}



void FUN_0090af60(int *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  char unaff_SI;
  int unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  undefined **local_18;
  uint local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar1 = "LthkBvAgent";
    puVar1[3] = "checkBvShape";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar1 + 4;
  }
  local_8 = param_1[2];
  iVar3 = *param_1;
  local_4 = param_1;
  local_c = param_1[1];
  local_10 = *(undefined4 *)(iVar3 + 0xc);
  local_18 = &PTR_LAB_00a9bb84;
  local_14 = local_14 & 0xffffff00;
  (**(code **)(**(int **)(in_ECX + 0xc) + 8))(&local_10,param_2,param_3,&local_18);
  if (unaff_SI == '\0') {
    if (*(int **)(in_ECX + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x10) + 0x18))();
      *(undefined4 *)(in_ECX + 0x10) = 0;
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
      local_4 = *(int **)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      puVar1 = (undefined4 *)local_4[0x69];
      *puVar1 = "Stchild";
      uVar2 = rdtsc();
      local_c = (int)uVar2;
      puVar1[1] = local_c;
      local_4[0x69] = (int)(puVar1 + 3);
    }
    if (*(int *)(in_ECX + 0x10) == 0) {
      local_4 = *(int **)(in_ECX + 8);
      local_c = *param_3;
      iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 8))();
      iVar4 = (**(code **)(*(int *)*param_2 + 8))();
      if ((char)param_3[3] == '\0') {
        iVar6 = local_c + 400;
      }
      else {
        iVar6 = local_c + 0x590;
      }
      uVar5 = (**(code **)(local_c + 0x990 + (uint)*(byte *)(iVar3 * 0x20 + iVar6 + iVar4) * 0x14))
                        (&stack0xffffffe0,param_2,param_3,local_4);
      *(undefined4 *)(in_ECX + 0x10) = uVar5;
    }
    (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(&stack0xffffffe0,param_2,param_3,unaff_retaddr);
  }
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar1 = &DAT_00a6a630;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar1 + 3;
  }
  return;
}



void FUN_0090b150(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_FS_OFFSET;
  undefined **local_18;
  char cStack_14;
  int *local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  iVar6 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar1 = "LthkBvAgent";
    puVar1[3] = "checkBvShape";
    uVar3 = rdtsc();
    local_18 = (undefined **)uVar3;
    puVar1[1] = local_18;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar1 + 4;
  }
  local_8 = param_1[2];
  iVar6 = *param_1;
  local_4 = param_1;
  local_10 = *(int **)(iVar6 + 0xc);
  local_c = param_1[1];
  iVar4 = (**(code **)(*local_10 + 8))();
  iVar5 = (**(code **)(*(int *)*param_2 + 8))();
  local_18 = &PTR_LAB_00a9bb84;
  cStack_14 = '\0';
  (**(code **)(*param_3 + 0x994 + (uint)*(byte *)(iVar4 * 0x20 + *param_3 + 400 + iVar5) * 0x14))
            (&local_10,param_2,param_3,&local_18);
  iVar4 = *(int *)(unaff_FS_OFFSET + 0x2c);
  if (cStack_14 != '\0') {
    iVar2 = *(int *)(iVar4 + _tls_index * 4);
    if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
      puVar1 = *(undefined4 **)(iVar2 + 0x1a4);
      *puVar1 = "Stchild";
      uVar3 = rdtsc();
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar2 + 0x1a4) = puVar1 + 3;
      iVar4 = *(int *)(unaff_FS_OFFSET + 0x2c);
    }
    local_10 = *(int **)(iVar6 + 0x10);
    local_c = local_4[1];
    iVar6 = (**(code **)(*local_10 + 8))();
    (**(code **)(*param_3 + 0x998 + (uint)*(byte *)(iVar6 * 0x20 + *param_3 + 400 + iVar5) * 0x14))
              (&local_10,param_2,param_3,param_4);
  }
  iVar6 = *(int *)(iVar4 + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar1 = &DAT_00a6a630;
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar1 + 3;
  }
  return;
}



void FUN_0090b2f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int in_ECX;
  int unaff_FS_OFFSET;
  undefined4 local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  iVar5 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TthkBvAgent";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  local_8 = param_1[2];
  local_4 = param_1;
  local_c = param_1[1];
  local_10 = *(undefined4 *)(*param_1 + 0xc);
  (**(code **)(**(int **)(in_ECX + 0xc) + 8))(&local_10,param_2,param_3,param_4);
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



void FUN_0090b3c0(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_FS_OFFSET;
  int *local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  iVar4 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar5 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar2 = "TthkBvAgent";
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar2 + 3;
  }
  local_8 = param_1[2];
  local_4 = param_1;
  local_10 = *(int **)(*param_1 + 0xc);
  local_c = param_1[1];
  iVar5 = (**(code **)(*local_10 + 8))();
  iVar6 = (**(code **)(*(int *)*param_2 + 8))();
  (**(code **)(*param_3 + 0x994 + (uint)*(byte *)(iVar5 * 0x20 + *param_3 + 400 + iVar6) * 0x14))
            (&local_10,param_2,param_3,param_4);
  iVar1 = *(int *)(iVar1 + iVar4 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_0090b4b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  undefined4 local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  local_8 = param_1[2];
  local_4 = param_1;
  local_c = param_1[1];
  local_10 = *(undefined4 *)(*param_1 + 0xc);
  (**(code **)(**(int **)(in_ECX + 0xc) + 0x1c))(&local_10,param_2,param_3);
  if (*(int *)(in_ECX + 0x10) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x10) + 0x1c))(&stack0xffffffe4,param_2,param_3);
  }
  return;
}



void FUN_0090b530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_0090b3c0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_0090b570(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_0090b150(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_0090b5b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40 [4];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar6 = param_3;
  puVar7 = local_40;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_90 = param_3[4];
  local_8c = param_3[5];
  local_88 = param_3[6];
  local_84 = param_3[7];
  local_80 = param_4;
  local_30 = uVar1 ^ 0x80000000;
  uStack_2c = uVar2 ^ 0x80000000;
  uStack_28 = uVar3 ^ 0x80000000;
  uStack_24 = uVar4 ^ 0x80000000;
  local_9c = 0x7f7fffff;
  local_a0 = &PTR_LAB_00a9b4e8;
  if (param_5 != 0) {
    local_70 = &PTR_LAB_00a9b4e8;
    local_60 = param_3[4];
    local_5c = param_3[5];
    local_58 = param_3[6];
    local_54 = param_3[7];
    local_50 = param_5;
    local_6c = 0x7f7fffff;
    FUN_0090ada0(param_2,param_1,local_40,&local_a0,&local_70);
    return;
  }
  FUN_0090ada0(param_2,param_1,local_40,&local_a0,0);
  return;
}



void FUN_0090b6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_0090b2f0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_0090b6e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_0090af60(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_0090b720(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_20 [28];
  
  fVar1 = (float)param_4[0xc0d];
  pfVar4 = (float *)*param_4;
  FUN_0090a9a0(param_2,param_1,param_3,param_4);
  if (pfVar4 < (float *)*param_4) {
    do {
      pfVar3 = (float *)FUN_008f7000(local_20);
      fVar2 = *pfVar3;
      *pfVar4 = *pfVar4 + fVar2 * pfVar4[4];
      pfVar4[1] = pfVar4[1] + fVar2 * pfVar4[5];
      pfVar4[2] = pfVar4[2] + fVar2 * pfVar4[6];
      pfVar4[3] = pfVar4[3] + fVar2 * pfVar4[7];
      pfVar4[4] = -pfVar4[4];
      pfVar4[5] = -pfVar4[5];
      pfVar4[6] = -pfVar4[6];
      pfVar4[7] = pfVar4[7];
      pfVar4 = pfVar4 + 0xc;
    } while (pfVar4 < (float *)*param_4);
  }
  if (fVar1 != (float)param_4[0xc0d]) {
    param_4[8] = param_4[8] ^ 0x80000000;
    param_4[9] = param_4[9] ^ 0x80000000;
    param_4[10] = param_4[10] ^ 0x80000000;
    param_4[0xb] = param_4[0xb];
  }
  return;
}



void FUN_0090b7e0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined ***pppuVar8;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40 [4];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar6 = param_3;
  puVar7 = local_40;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_90 = param_3[4];
  local_8c = param_3[5];
  local_88 = param_3[6];
  local_84 = param_3[7];
  local_80 = param_4;
  local_30 = uVar1 ^ 0x80000000;
  uStack_2c = uVar2 ^ 0x80000000;
  uStack_28 = uVar3 ^ 0x80000000;
  uStack_24 = uVar4 ^ 0x80000000;
  local_9c = 0x7f7fffff;
  local_a0 = &PTR_LAB_00a9b4e8;
  if (param_5 == 0) {
    pppuVar8 = (undefined ***)0x0;
  }
  else {
    local_70 = &PTR_LAB_00a9b4e8;
    local_60 = param_3[4];
    local_5c = param_3[5];
    local_58 = param_3[6];
    local_54 = param_3[7];
    local_50 = param_5;
    pppuVar8 = &local_70;
    local_6c = 0x7f7fffff;
  }
  FUN_0090ab90(param_2,param_1,local_40,&local_a0,pppuVar8);
  return;
}



void FUN_0090b8f0(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = &LAB_0090b8b0;
  local_14 = FUN_0090b530;
  local_10 = FUN_0090b570;
  local_c = FUN_0090b5b0;
  local_8 = 1;
  local_7 = 0;
  FUN_008dadd0(&local_18,0xffffffff,0x16);
  local_18 = &LAB_0090a960;
  local_14 = FUN_0090b3c0;
  local_10 = FUN_0090b150;
  local_c = FUN_0090ada0;
  local_8 = 0;
  local_7 = 0;
  FUN_008dadd0(&local_18,0x16,0xffffffff);
  return;
}



void FUN_0090b980(void)

{
  FUN_008db020(4,1);
  FUN_008db020(6,1);
  FUN_008db020(7,1);
  FUN_008db020(8,1);
  FUN_008db020(5,1);
  FUN_008db020(9,1);
  FUN_008db020(0xe,1);
  FUN_008db020(0xf,1);
  FUN_008db020(10,1);
  FUN_008db020(0x10,2);
  FUN_008db020(0xc,2);
  FUN_008db020(0xd,0xc);
  FUN_008db020(0x18,3);
  FUN_008db020(1,0x15);
  FUN_008db020(0x17,0x12);
  FUN_008db020(0x13,0x12);
  return;
}



char * FUN_0090ba40(undefined4 param_1)

{
  switch(param_1) {
  default:
    return "unknown";
  case 1:
    return "HK_SHAPE_CONVEX";
  case 2:
    return "HK_SHAPE_COLLECTION";
  case 3:
    return "HK_SHAPE_BV_TREE";
  case 4:
    return "HK_SHAPE_SPHERE";
  case 5:
    return "HK_SHAPE_CYLINDER";
  case 6:
    return "HK_SHAPE_TRIANGLE";
  case 7:
    return "HK_SHAPE_BOX";
  case 8:
    return "HK_SHAPE_CAPSULE";
  case 9:
    return "HK_SHAPE_CONVEX_VERTICES";
  case 10:
    return "HK_SHAPE_CONVEX_PIECE";
  case 0xb:
    return "HK_SHAPE_MULTI_SPHERE";
  case 0xc:
    return "HK_SHAPE_LIST";
  case 0xd:
    return "HK_SHAPE_CONVEX_LIST";
  case 0xe:
    return "HK_SHAPE_CONVEX_TRANSLATE";
  case 0xf:
    return "HK_SHAPE_CONVEX_TRANSFORM";
  case 0x10:
    return "HK_SHAPE_TRIANGLE_COLLECTION";
  case 0x11:
    return "HK_SHAPE_MULTI_RAY";
  case 0x12:
    return "HK_SHAPE_HEIGHT_FIELD";
  case 0x13:
    return "HK_SHAPE_SAMPLED_HEIGHT_FIELD";
  case 0x14:
    return "HK_SHAPE_TRI_PATCH";
  case 0x15:
    return "HK_SHAPE_SPHERE_REP";
  case 0x16:
    return "HK_SHAPE_BV";
  case 0x17:
    return "HK_SHAPE_PLANE";
  case 0x18:
    return "HK_SHAPE_MOPP";
  case 0x19:
    return "HK_SHAPE_TRANSFORM";
  case 0x1a:
    return "HK_SHAPE_PHANTOM_CALLBACK";
  case 0x1b:
    return "HK_SHAPE_USER0";
  case 0x1c:
    return "HK_SHAPE_USER1";
  case 0x1d:
    return "HK_SHAPE_USER2";
  case 0xffffffff:
    return "HK_SHAPE_ALL";
  }
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090bb90(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = _DAT_00b2fde4;
  return;
}



void FUN_0090bba0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  return;
}



int FUN_0090bbb0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  do {
    switch(param_2) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x18:
      iVar2 = FUN_00940c50();
      return iVar2;
    case 0x13:
      param_2 = (uint)*(byte *)(param_1 + 0xd);
      break;
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x1a:
    case 0x1b:
    case 0x1c:
      return param_3;
    default:
      return -1;
    case 0x19:
      iVar2 = 1;
      FUN_0090d1f0();
      iVar3 = 0;
      iVar1 = FUN_0090d240();
      if (iVar1 < 1) {
        return 1;
      }
      do {
        iVar1 = FUN_0090d260(iVar3);
        iVar1 = FUN_0090bbb0(iVar1,*(undefined1 *)(iVar1 + 0xc),param_3);
        if (iVar2 < iVar1) {
          iVar2 = iVar1;
        }
        iVar3 = iVar3 + 1;
        iVar1 = FUN_0090d240();
      } while (iVar3 < iVar1);
      return iVar2;
    }
  } while( true );
}



int FUN_0090bc80(undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int unaff_FS_OFFSET;
  int local_224;
  int local_220;
  uint local_21c;
  int local_218;
  int local_214;
  int local_210;
  uint local_20c;
  int local_208;
  uint local_204;
  undefined1 local_200 [512];
  
  iVar8 = 0;
  switch(*param_3) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x18:
    iVar8 = FUN_00940b80();
    return iVar8;
  case 0x13:
    local_204 = (uint)*(byte *)(param_2 + 0xd);
    iVar8 = FUN_0090bc80(param_1,param_2,&local_204,param_4);
    return iVar8;
  case 0x14:
  case 0x15:
    iVar8 = FUN_00940b70();
    if (iVar8 == 0) {
      return param_4;
    }
    iVar8 = FUN_00940b70();
    return iVar8 * param_4;
  case 0x16:
    iVar8 = 4;
  case 0x1a:
    return iVar8 + 4 + param_4;
  case 0x17:
    break;
  case 0x19:
    uVar4 = FUN_0090d1f0();
    uVar5 = FUN_0090d240();
    iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    piVar3 = *(int **)(iVar2 + 0x19c);
    local_214 = 0;
    local_210 = 0;
    local_20c = 0x80000000;
    local_208 = piVar3[8];
    uVar6 = uVar5 * 4 + 0x10 & 0xfffffff0;
    uVar1 = local_208 + uVar6;
    if ((uint)piVar3[0xb] < uVar1) {
      local_208 = (**(code **)(*piVar3 + 0xc))(uVar6);
    }
    else {
      piVar3[8] = uVar1;
    }
    local_20c = uVar5 | 0x80000000;
    local_214 = local_208;
    iVar8 = FUN_0090d240();
    if ((int)(local_20c & 0x3fffffff) < iVar8) {
      iVar7 = (local_20c & 0x3fffffff) * 2;
      if (iVar7 <= iVar8) {
        iVar7 = iVar8;
      }
      FUN_008a6e40(&local_214,iVar7,4);
    }
    local_210 = iVar8;
    uVar5 = FUN_0090d200();
    piVar3 = *(int **)(iVar2 + 0x19c);
    local_224 = 0;
    local_220 = 0;
    local_21c = 0x80000000;
    local_218 = piVar3[8];
    uVar6 = uVar5 * 4 + 0x10 & 0xfffffff0;
    uVar1 = local_218 + uVar6;
    if ((uint)piVar3[0xb] < uVar1) {
      local_218 = (**(code **)(*piVar3 + 0xc))(uVar6);
    }
    else {
      piVar3[8] = uVar1;
    }
    local_21c = uVar5 | 0x80000000;
    local_224 = local_218;
    iVar8 = FUN_0090d200();
    if ((int)(local_21c & 0x3fffffff) < iVar8) {
      iVar7 = (local_21c & 0x3fffffff) * 2;
      if (iVar7 <= iVar8) {
        iVar7 = iVar8;
      }
      FUN_008a6e40(&local_224,iVar7,4);
    }
    local_220 = iVar8;
    iVar7 = FUN_0090c020(uVar4,local_214,local_224);
    iVar8 = FUN_00940b70();
    if (iVar8 == 0) {
      iVar8 = 1;
    }
    else {
      iVar8 = FUN_00940b70();
    }
    piVar3 = *(int **)(iVar2 + 0x19c);
    iVar8 = iVar8 * iVar7;
    piVar3[8] = local_218;
    if (local_218 == piVar3[10]) {
      (**(code **)(*piVar3 + 0x10))(local_218);
    }
    if (-1 < (int)local_21c) {
      FUN_008a75d0(local_224,local_21c << 2,0x14);
    }
    piVar3 = *(int **)(iVar2 + 0x19c);
    piVar3[8] = local_208;
    if (local_208 == piVar3[10]) {
      (**(code **)(*piVar3 + 0x10))(local_208);
    }
    if (-1 < (int)local_20c) {
      FUN_008a75d0(local_214,local_20c << 2,0x14);
      return iVar8;
    }
    break;
  case 0x1b:
    return param_4 * 2 + 4;
  case 0x1c:
    return param_4 * 2;
  default:
    FUN_008bbfb0(local_200,0x200,1);
    FUN_008bbdb0("Unknown class member type in structureLayout::getMemberSize().");
    (**(code **)(*DAT_00ba7fb0 + 8))(3,0x50a18b58,local_200,".\\util\\hkStructureLayout.cpp",0xb7);
    FUN_008bc000();
  }
  return iVar8;
}



/* WARNING: Removing unreachable block (ram,0x0090c0a8) */
/* WARNING: Removing unreachable block (ram,0x0090c0b0) */
/* WARNING: Removing unreachable block (ram,0x0090c0ca) */
/* WARNING: Removing unreachable block (ram,0x0090c0d0) */
/* WARNING: Removing unreachable block (ram,0x0090c0d9) */
/* WARNING: Removing unreachable block (ram,0x0090c0df) */
/* WARNING: Removing unreachable block (ram,0x0090c0e9) */
/* WARNING: Removing unreachable block (ram,0x0090c0ed) */
/* WARNING: Removing unreachable block (ram,0x0090c0fb) */
/* WARNING: Removing unreachable block (ram,0x0090c10e) */
/* WARNING: Removing unreachable block (ram,0x0090c110) */
/* WARNING: Removing unreachable block (ram,0x0090c120) */
/* WARNING: Removing unreachable block (ram,0x0090c128) */
/* WARNING: Removing unreachable block (ram,0x0090c12f) */
/* WARNING: Removing unreachable block (ram,0x0090c134) */
/* WARNING: Removing unreachable block (ram,0x0090c154) */
/* WARNING: Removing unreachable block (ram,0x0090c159) */
/* WARNING: Removing unreachable block (ram,0x0090c15e) */
/* WARNING: Removing unreachable block (ram,0x0090c163) */
/* WARNING: Removing unreachable block (ram,0x0090c168) */
/* WARNING: Removing unreachable block (ram,0x0090c16d) */
/* WARNING: Removing unreachable block (ram,0x0090c176) */
/* WARNING: Removing unreachable block (ram,0x0090c17b) */
/* WARNING: Removing unreachable block (ram,0x0090c180) */
/* WARNING: Removing unreachable block (ram,0x0090c185) */
/* WARNING: Removing unreachable block (ram,0x0090c18a) */
/* WARNING: Removing unreachable block (ram,0x0090c18e) */
/* WARNING: Removing unreachable block (ram,0x0090c194) */
/* WARNING: Removing unreachable block (ram,0x0090c198) */
/* WARNING: Removing unreachable block (ram,0x0090c1a1) */
/* WARNING: Removing unreachable block (ram,0x0090c1a5) */
/* WARNING: Removing unreachable block (ram,0x0090c1e2) */
/* WARNING: Removing unreachable block (ram,0x0090c1f1) */
/* WARNING: Removing unreachable block (ram,0x0090c1f7) */
/* WARNING: Removing unreachable block (ram,0x0090c1fd) */
/* WARNING: Removing unreachable block (ram,0x0090c202) */
/* WARNING: Removing unreachable block (ram,0x0090c216) */
/* WARNING: Removing unreachable block (ram,0x0090c218) */
/* WARNING: Removing unreachable block (ram,0x0090c22d) */
/* WARNING: Removing unreachable block (ram,0x0090c0aa) */
/* WARNING: Removing unreachable block (ram,0x0090c24f) */
/* WARNING: Removing unreachable block (ram,0x0090c23e) */

undefined4 FUN_0090c020(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 != 0) {
    local_c = &param_1;
    local_8 = 1;
    local_4 = 0x80000001;
    do {
      FUN_008e6720(0,&local_c);
      param_1 = FUN_0090d1f0();
    } while (param_1 != 0);
  }
  return 1;
}



void FUN_0090c290(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  uVar1 = FUN_0090d240();
  iVar5 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar2 = thunk_FUN_0090d260(iVar5);
      if ((*(char *)(iVar2 + 0xc) == '\x19') ||
         ((*(char *)(iVar2 + 0xc) != '\x14' && (*(char *)(iVar2 + 0xd) == '\x19')))) {
        uVar3 = FUN_0090d1f0();
        FUN_0090c290(uVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar1);
  }
  local_c = 0;
  local_8 = 0;
  local_4 = -0x80000000;
  if (0 < (int)uVar1) {
    FUN_008a6e40(&local_c,((int)uVar1 < 0) - 1 & uVar1,4);
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x80000000;
  local_8 = uVar1;
  iVar5 = FUN_0090d200();
  if ((int)(local_10 & 0x3fffffff) < iVar5) {
    iVar2 = (local_10 & 0x3fffffff) * 2;
    if (iVar2 <= iVar5) {
      iVar2 = iVar5;
    }
    FUN_008a6e40(&local_18,iVar2,4);
  }
  local_14 = iVar5;
  FUN_0090c020(param_1,local_c,local_18);
  iVar2 = 0;
  iVar5 = local_14;
  if (0 < (int)uVar1) {
    do {
      iVar4 = thunk_FUN_0090d260(iVar2);
      iVar5 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(undefined2 *)(iVar4 + 0x12) = *(undefined2 *)(local_c + iVar5);
      iVar5 = local_14;
    } while (iVar2 < (int)uVar1);
  }
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    FUN_0090d370(*(undefined4 *)(local_18 + iVar5 * 4));
    FUN_0090d1f0();
  }
  if (-1 < (int)local_10) {
    FUN_008a75d0(local_18,local_10 << 2,0x14);
  }
  if (-1 < local_4) {
    FUN_008a75d0(local_c,local_4 << 2,0x14);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0090c550(undefined4 *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float local_78;
  float local_74;
  float *local_6c;
  int local_68;
  
  local_6c = (float *)*param_1;
  local_68 = param_1[1];
  if (-1 < local_68 + -1) {
    do {
      *param_2 = 0.0;
      param_2[1] = 1.0;
      param_2[2] = 0.0;
      param_2[3] = 3.4028235e+38;
      fVar5 = local_6c[1];
      fVar6 = *(float *)(in_ECX + 0x34);
      uVar9 = (uint)((local_6c[2] + *(float *)(in_ECX + 0x48)) * *(float *)(in_ECX + 0x38) +
                    196608.0) >> 6 & 0xffff;
      iVar10 = *(int *)(in_ECX + 0xc);
      uVar7 = (uint)((*local_6c + *(float *)(in_ECX + 0x40)) * *(float *)(in_ECX + 0x30) + 196608.0)
              >> 6 & 0xffff;
      if (((int)uVar7 < iVar10 + -1) && ((int)uVar9 < *(int *)(in_ECX + 0x10) + -1)) {
        iVar3 = *(int *)(in_ECX + 0x60);
        fVar4 = *local_6c * *(float *)(in_ECX + 0x30) - (float)uVar7;
        fVar11 = local_6c[2] * *(float *)(in_ECX + 0x38) - (float)uVar9;
        if (*(char *)(in_ECX + 0x6c) == '\0') {
          iVar8 = iVar10 * uVar9 + uVar7;
          fVar13 = *(float *)(iVar3 + 4 + iVar8 * 4);
          iVar10 = (uVar9 + 1) * iVar10 + uVar7;
          fVar12 = *(float *)(iVar3 + iVar10 * 4);
          if (fVar11 + fVar4 <= 1.0) {
            fVar2 = *(float *)(iVar3 + iVar8 * 4);
            local_74 = fVar13 - fVar2;
            goto LAB_0090c70c;
          }
          local_78 = *(float *)(iVar3 + iVar10 * 4 + 4);
          local_74 = local_78 - fVar12;
          local_78 = local_78 - fVar13;
          fVar2 = local_78 * fVar11 + (fVar4 - 1.0) * local_74 + fVar13;
LAB_0090c722:
          *param_2 = -local_74;
        }
        else {
          iVar8 = iVar10 * uVar9 + uVar7;
          fVar2 = *(float *)(iVar3 + iVar8 * 4);
          pfVar1 = (float *)(iVar3 + ((uVar9 + 1) * iVar10 + uVar7) * 4);
          local_74 = pfVar1[1];
          if (fVar4 <= fVar11) {
            fVar12 = *pfVar1;
            local_74 = local_74 - fVar12;
LAB_0090c70c:
            local_78 = fVar12 - fVar2;
            fVar2 = local_74 * fVar4 + local_78 * fVar11 + fVar2;
            goto LAB_0090c722;
          }
          local_78 = *(float *)(iVar3 + iVar8 * 4 + 4);
          fVar12 = local_78 - fVar2;
          local_78 = local_74 - local_78;
          fVar2 = fVar12 * fVar4 + local_78 * fVar11 + fVar2;
          *param_2 = -fVar12;
        }
        param_2[2] = -local_78;
        fVar4 = *(float *)(in_ECX + 0x3c);
        fVar13 = *param_2 * *(float *)(in_ECX + 0x30);
        fVar14 = param_2[1] * *(float *)(in_ECX + 0x34);
        fVar15 = param_2[2] * *(float *)(in_ECX + 0x38);
        fVar11 = fVar14 * fVar14;
        fVar12 = fVar15 * fVar15;
        auVar16._4_4_ = fVar11;
        auVar16._0_4_ = fVar11;
        auVar16._8_4_ = fVar11;
        auVar16._12_4_ = fVar11;
        auVar17._4_12_ = auVar16._4_12_;
        auVar17._0_4_ = fVar11 + fVar13 * fVar13;
        auVar18._4_4_ = fVar12;
        auVar18._0_4_ = fVar12 + auVar17._0_4_;
        auVar18._8_4_ = fVar12;
        auVar18._12_4_ = fVar12;
        auVar18 = rsqrtss(auVar17,auVar18);
        fVar11 = auVar18._0_4_;
        fVar11 = fVar11 * 0.5 * (3.0 - (fVar12 + auVar17._0_4_) * fVar11 * fVar11);
        *param_2 = fVar11 * fVar13;
        param_2[1] = fVar11 * fVar14;
        param_2[2] = fVar11 * fVar15;
        param_2[3] = fVar11 * param_2[3] * fVar4;
        param_2[3] = (fVar5 * fVar6 - fVar2) * *(float *)(in_ECX + 0x24) - local_6c[3];
      }
      param_2 = param_2 + 4;
      local_6c = local_6c + 4;
      local_68 = local_68 + -1;
    } while (local_68 != 0);
  }
  return;
}



void FUN_0090c800(byte param_1)

{
  FUN_0090c830();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0090c830(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[0x1a]) {
    FUN_008a75d0(in_ECX[0x18],in_ECX[0x1a] << 2,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_0090c880(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[0xb]) {
    FUN_008a75d0(in_ECX[9],(in_ECX[0xb] & 0x3fffffff) * 0x30,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_0090c8d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_00929dd0(param_1);
  *in_ECX = &PTR_FUN_00a9c4d4;
  if ((param_1 != 0) && (iVar3 = 0, 0 < (int)in_ECX[10])) {
    iVar5 = 0;
    do {
      puVar1 = *(undefined4 **)(in_ECX[0x10] + iVar3 * 4);
      puVar2 = (undefined4 *)(in_ECX[9] + iVar5);
      *puVar2 = *puVar1;
      if (*(char *)(puVar2 + 4) == '\x01') {
        uVar4 = puVar1[3];
      }
      else {
        uVar4 = puVar1[6];
      }
      puVar2[3] = uVar4;
      if (*(char *)((int)puVar2 + 0x11) == '\x01') {
        uVar4 = puVar1[9];
      }
      else {
        uVar4 = puVar1[0xf];
      }
      puVar2[7] = uVar4;
      puVar2[9] = puVar1[0xc];
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x30;
    } while (iVar3 < (int)in_ECX[10]);
  }
  return;
}



void FUN_0090c940(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[0x11]) {
    FUN_008a75d0(in_ECX[0xf],(in_ECX[0x11] & 0x3fffffff) << 1,0x14);
  }
  if (-1 < (int)in_ECX[0xe]) {
    FUN_008a75d0(in_ECX[0xc],in_ECX[0xe] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0xb]) {
    FUN_008a75d0(in_ECX[9],in_ECX[0xb] & 0x3fffffff,0x14);
  }
  if (-1 < (int)in_ECX[8]) {
    FUN_008a75d0(in_ECX[6],in_ECX[8] << 2,0x14);
  }
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],(in_ECX[5] & 0x3fffffff) << 1,0x14);
  }
  if (-1 < (int)in_ECX[2]) {
    FUN_008a75d0(*in_ECX,in_ECX[2] << 2,0x14);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0090ca90(void)

{
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  
  FUN_0090c8d0(0);
  local_74 = CONCAT13(local_6d,CONCAT12(local_6e,CONCAT11(local_6f,local_70)));
  return local_74;
}



void FUN_0090cae0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  int in_ECX;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  int *unaff_EBX;
  int iVar12;
  int *piVar13;
  
  if (*(uint *)(in_ECX + 0x28) == (*(uint *)(in_ECX + 0x2c) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x24),0x30);
  }
  puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x28) * 0x30 + *(int *)(in_ECX + 0x24));
  *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + 1;
  puVar2 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x48,0x22);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0x80000000;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0x80000000;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0x80000000;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0x80000000;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0x80000000;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0x80000000;
  }
  piVar1 = (int *)(in_ECX + 0x40);
  if (*(uint *)(in_ECX + 0x44) == (*(uint *)(in_ECX + 0x48) & 0x3fffffff)) {
    FUN_008a6ee0(piVar1,4);
  }
  *(undefined4 **)(*piVar1 + *(int *)(in_ECX + 0x44) * 4) = puVar2;
  iVar10 = *(int *)(in_ECX + 0x44) + 1;
  *(int *)(in_ECX + 0x44) = iVar10;
  piVar1 = *(int **)(*piVar1 + -4 + iVar10 * 4);
  iVar10 = piVar1[1];
  iVar12 = iVar10 + puVar7[2] * 2 + puVar7[2];
  if ((int)(piVar1[2] & 0x3fffffffU) < iVar12) {
    iVar6 = (piVar1[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar12) {
      iVar6 = iVar12;
    }
    FUN_008a6e40(piVar1,iVar6,4);
  }
  piVar1[1] = iVar12;
  puVar3 = (undefined4 *)*puVar7;
  puVar2 = (undefined4 *)(*piVar1 + iVar10 * 4);
  iVar10 = 0;
  if (0 < (int)puVar7[2]) {
    do {
      *puVar2 = *puVar3;
      puVar2[1] = puVar3[1];
      puVar2[2] = puVar3[2];
      puVar3 = (undefined4 *)((int)puVar3 + puVar7[1]);
      puVar2 = puVar2 + 3;
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)puVar7[2]);
  }
  *unaff_EBX = *piVar1;
  unaff_EBX[1] = 0xc;
  unaff_EBX[2] = puVar7[2];
  if (*(char *)(puVar7 + 4) == '\x01') {
    uVar4 = (uint)puVar7[5] >> 1;
    uVar11 = uVar4;
    if (2 < uVar4) {
      uVar11 = 3;
    }
    unaff_EBX[5] = uVar11 * 2;
    iVar10 = puVar7[6];
    if (uVar4 == 1) {
      iVar10 = iVar10 + 2;
    }
    else if (uVar4 == 2) {
      iVar10 = iVar10 * 2 + 1;
    }
    else {
      iVar10 = iVar10 * 3;
    }
    iVar12 = piVar1[4];
    iVar10 = iVar10 + iVar12;
    if ((int)(piVar1[5] & 0x3fffffffU) < iVar10) {
      iVar6 = (piVar1[5] & 0x3fffffffU) * 2;
      if (iVar6 <= iVar10) {
        iVar6 = iVar10;
      }
      FUN_008a6e40(piVar1 + 3,iVar6,2);
    }
    piVar1[4] = iVar10;
    puVar2 = (undefined4 *)(piVar1[3] + iVar12 * 2);
    puVar5 = (undefined2 *)puVar7[3];
    iVar10 = 0;
    if (0 < (int)puVar7[6]) {
      puVar3 = puVar2;
      do {
        *(undefined2 *)puVar3 = *puVar5;
        *(undefined2 *)((int)puVar3 + 2) = puVar5[1];
        *(undefined2 *)(puVar3 + 1) = puVar5[2];
        puVar5 = (undefined2 *)((int)puVar5 + puVar7[5]);
        puVar3 = (undefined4 *)((int)puVar3 + uVar4 * 2);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)puVar7[6]);
    }
  }
  else {
    uVar4 = (uint)puVar7[5] >> 2;
    uVar11 = uVar4;
    if (2 < uVar4) {
      uVar11 = 3;
    }
    unaff_EBX[5] = uVar11 << 2;
    iVar10 = puVar7[6];
    if (uVar4 == 1) {
      iVar10 = iVar10 + 2;
    }
    else if (uVar4 == 2) {
      iVar10 = iVar10 * 2 + 1;
    }
    else {
      iVar10 = iVar10 * 3;
    }
    iVar12 = piVar1[7];
    iVar10 = iVar10 + iVar12;
    if ((int)(piVar1[8] & 0x3fffffffU) < iVar10) {
      iVar6 = (piVar1[8] & 0x3fffffffU) * 2;
      if (iVar6 <= iVar10) {
        iVar6 = iVar10;
      }
      FUN_008a6e40(piVar1 + 6,iVar6,4);
    }
    piVar1[7] = iVar10;
    puVar2 = (undefined4 *)(piVar1[6] + iVar12 * 4);
    puVar3 = (undefined4 *)puVar7[3];
    iVar10 = 0;
    puVar8 = puVar2;
    if (0 < (int)puVar7[6]) {
      do {
        *puVar8 = *puVar3;
        puVar8[1] = puVar3[1];
        puVar8[2] = puVar3[2];
        puVar3 = (undefined4 *)((int)puVar3 + puVar7[5]);
        iVar10 = iVar10 + 1;
        puVar8 = puVar8 + uVar4;
      } while (iVar10 < (int)puVar7[6]);
    }
  }
  *(undefined1 *)(unaff_EBX + 4) = *(undefined1 *)(puVar7 + 4);
  unaff_EBX[6] = puVar7[6];
  unaff_EBX[3] = (int)puVar2;
  *(undefined1 *)((int)unaff_EBX + 0x11) = *(undefined1 *)((int)puVar7 + 0x11);
  puVar5 = (undefined2 *)puVar7[7];
  if (puVar5 == (undefined2 *)0x0) {
    unaff_EBX[7] = 0;
    unaff_EBX[8] = 0;
  }
  else {
    if (*(char *)((int)puVar7 + 0x11) == '\x01') {
      if (puVar7[8] == 0) {
        piVar13 = piVar1 + 9;
        if (piVar1[10] == (piVar1[0xb] & 0x3fffffffU)) {
          FUN_008a6ee0(piVar13,1);
        }
        *(undefined1 *)(piVar1[10] + *piVar13) = *(undefined1 *)puVar5;
        iVar10 = piVar1[10];
        piVar1[10] = iVar10 + 1;
        unaff_EBX[7] = iVar10 + *piVar13;
      }
      else {
        iVar10 = piVar1[10];
        iVar12 = puVar7[6] + iVar10;
        if ((int)(piVar1[0xb] & 0x3fffffffU) < iVar12) {
          iVar6 = (piVar1[0xb] & 0x3fffffffU) * 2;
          if (iVar6 <= iVar12) {
            iVar6 = iVar12;
          }
          FUN_008a6e40(piVar1 + 9,iVar6,1);
        }
        piVar1[10] = iVar12;
        iVar10 = piVar1[9] + iVar10;
        unaff_EBX[7] = iVar10;
        puVar9 = (undefined1 *)puVar7[7];
        iVar12 = 0;
        if (0 < (int)puVar7[6]) {
          do {
            *(undefined1 *)(iVar12 + iVar10) = *puVar9;
            puVar9 = puVar9 + puVar7[8];
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)puVar7[6]);
        }
      }
    }
    else if (puVar7[8] == 0) {
      piVar13 = piVar1 + 0xf;
      if (piVar1[0x10] == (piVar1[0x11] & 0x3fffffffU)) {
        FUN_008a6ee0(piVar13,2);
      }
      *(undefined2 *)(*piVar13 + piVar1[0x10] * 2) = *puVar5;
      iVar10 = piVar1[0x10];
      piVar1[0x10] = iVar10 + 1;
      unaff_EBX[7] = *piVar13 + -2 + (iVar10 + 1) * 2;
    }
    else {
      iVar10 = piVar1[0x10];
      iVar12 = puVar7[6] + iVar10;
      if ((int)(piVar1[0x11] & 0x3fffffffU) < iVar12) {
        iVar6 = (piVar1[0x11] & 0x3fffffffU) * 2;
        if (iVar6 <= iVar12) {
          iVar6 = iVar12;
        }
        FUN_008a6e40(piVar1 + 0xf,iVar6,2);
      }
      piVar1[0x10] = iVar12;
      iVar10 = piVar1[0xf] + iVar10 * 2;
      unaff_EBX[7] = iVar10;
      puVar5 = (undefined2 *)puVar7[7];
      iVar12 = 0;
      if (0 < (int)puVar7[6]) {
        do {
          *(undefined2 *)(iVar10 + iVar12 * 2) = *puVar5;
          puVar5 = (undefined2 *)((int)puVar5 + puVar7[8]);
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)puVar7[6]);
      }
    }
    iVar10 = puVar7[8];
    unaff_EBX[8] = iVar10;
    if (iVar10 != 0) {
      if (*(char *)((int)unaff_EBX + 0x11) == '\x01') {
        unaff_EBX[8] = 1;
      }
      else if (*(char *)((int)unaff_EBX + 0x11) == '\x02') {
        unaff_EBX[8] = 2;
      }
    }
  }
  if (unaff_EBX[7] != 0) {
    piVar13 = piVar1 + 0xc;
    if (puVar7[10] == 0) {
      puVar2 = (undefined4 *)puVar7[9];
      if (piVar1[0xd] == (piVar1[0xe] & 0x3fffffffU)) {
        FUN_008a6ee0(piVar13,4);
      }
      *(undefined4 *)(*piVar13 + piVar1[0xd] * 4) = *puVar2;
      piVar1[0xd] = piVar1[0xd] + 1;
      unaff_EBX[10] = 0;
      unaff_EBX[0xb] = 1;
      unaff_EBX[9] = *piVar13;
      return;
    }
    iVar10 = piVar1[0xd];
    iVar12 = puVar7[0xb] + iVar10;
    if ((int)(piVar1[0xe] & 0x3fffffffU) < iVar12) {
      iVar6 = (piVar1[0xe] & 0x3fffffffU) * 2;
      if (iVar6 <= iVar12) {
        iVar6 = iVar12;
      }
      FUN_008a6e40(piVar13,iVar6,4);
    }
    iVar6 = *piVar13;
    piVar1[0xd] = iVar12;
    puVar2 = (undefined4 *)puVar7[9];
    iVar12 = 0;
    if (0 < (int)puVar7[0xb]) {
      do {
        *(undefined4 *)(iVar6 + iVar10 * 4 + iVar12 * 4) = *puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + puVar7[10]);
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)puVar7[0xb]);
    }
    unaff_EBX[10] = 4;
    unaff_EBX[0xb] = puVar7[0xb];
    unaff_EBX[9] = *piVar13;
    return;
  }
  unaff_EBX[10] = 0;
  unaff_EBX[0xb] = 1;
  unaff_EBX[9] = (int)&DAT_00ba7a40;
  unaff_EBX[7] = (int)&DAT_00ba7a40;
  return;
}



void FUN_0090d020(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  *in_ECX = &PTR_FUN_00a9c4d4;
  if (0 < (int)in_ECX[0x11]) {
    do {
      iVar1 = *(int *)(in_ECX[0x10] + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_0090c940();
        (**(code **)(*DAT_00ba7d98 + 0x14))(iVar1,0x48,0x22);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)in_ECX[0x11]);
  }
  if (-1 < (int)in_ECX[0x12]) {
    FUN_008a75d0(in_ECX[0x10],in_ECX[0x12] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0xb]) {
    FUN_008a75d0(in_ECX[9],(in_ECX[0xb] & 0x3fffffff) * 0x30,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_0090d0e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int iVar4;
  int iVar5;
  
  FUN_00929d70(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x20));
  *in_ECX = &PTR_FUN_00a9c4d4;
  in_ECX[0x12] = 0x80000000;
  iVar4 = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = uVar1;
  in_ECX[6] = uVar2;
  in_ECX[7] = uVar3;
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *(undefined1 *)(in_ECX + 3) = *(undefined1 *)(param_1 + 0xc);
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar5 = 0;
    do {
      FUN_0090cae0(*(int *)(param_1 + 0x24) + iVar5);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x30;
    } while (iVar4 < *(int *)(param_1 + 0x28));
  }
  return;
}



void FUN_0090d160(byte param_1)

{
  FUN_0090d020();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0090d190(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_5;
  in_ECX[4] = param_6;
  in_ECX[5] = param_7;
  in_ECX[6] = param_8;
  in_ECX[7] = param_9;
  in_ECX[8] = param_10;
  return;
}



undefined4 FUN_0090d1e0(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}



undefined4 FUN_0090d1f0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}



int FUN_0090d200(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = 0;
  for (; in_ECX != 0; in_ECX = *(int *)(in_ECX + 4)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



int FUN_0090d240(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x1c);
  for (iVar1 = *(int *)(in_ECX + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x1c);
  }
  return iVar2;
}



int FUN_0090d260(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 0x1c);
  for (iVar1 = *(int *)(in_ECX + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x1c);
  }
  param_1 = param_1 - iVar2;
  iVar1 = in_ECX;
  do {
    param_1 = param_1 + *(int *)(iVar1 + 0x1c);
    if (-1 < param_1) {
      return *(int *)(iVar1 + 0x18) + param_1 * 0x14;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return *(int *)(in_ECX + 0x18);
}



int thunk_FUN_0090d260(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 0x1c);
  for (iVar1 = *(int *)(in_ECX + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x1c);
  }
  param_1 = param_1 - iVar2;
  iVar1 = in_ECX;
  do {
    param_1 = param_1 + *(int *)(iVar1 + 0x1c);
    if (-1 < param_1) {
      return *(int *)(iVar1 + 0x18) + param_1 * 0x14;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return *(int *)(in_ECX + 0x18);
}



undefined4 FUN_0090d2c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x1c);
}



int FUN_0090d2d0(int param_1)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x18) + param_1 * 0x14;
}



undefined4 * FUN_0090d2e0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  do {
    iVar4 = *(int *)(in_ECX + 0x1c);
    iVar1 = *(int *)(in_ECX + 4);
    iVar2 = iVar4;
    for (iVar3 = iVar1; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      iVar2 = iVar2 + *(int *)(iVar3 + 0x1c);
    }
    if (iVar2 <= iVar5) {
      return (undefined4 *)0x0;
    }
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      iVar4 = iVar4 + *(int *)(iVar1 + 0x1c);
    }
    iVar4 = iVar5 - iVar4;
    iVar3 = in_ECX;
    do {
      iVar4 = iVar4 + *(int *)(iVar3 + 0x1c);
      if (-1 < iVar4) {
        puVar6 = (undefined4 *)(*(int *)(iVar3 + 0x18) + iVar4 * 0x14);
        goto LAB_0090d335;
      }
      iVar3 = *(int *)(iVar3 + 4);
    } while (iVar3 != 0);
    puVar6 = *(undefined4 **)(in_ECX + 0x18);
LAB_0090d335:
    iVar4 = FUN_008b1770(*puVar6,param_1);
    if (iVar4 == 0) {
      return puVar6;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



void FUN_0090d370(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = param_1;
  return;
}



void FUN_0090d380(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  while (iVar1 = iVar2, iVar1 != 0) {
    in_ECX = iVar1;
    iVar2 = *(int *)(iVar1 + 4);
  }
  *(bool *)param_1 = *(int *)(in_ECX + 0xc) != 0;
  return;
}



undefined4 FUN_0090d3b0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(in_ECX + 0x1c);
  for (iVar2 = *(int *)(in_ECX + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    iVar3 = iVar3 + *(int *)(iVar2 + 0x1c);
  }
  param_1 = param_1 - iVar3;
  iVar2 = in_ECX;
  while (param_1 = param_1 + *(int *)(iVar2 + 0x1c), param_1 < 0) {
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar2 == 0) {
      return 1;
    }
  }
  if (*(int **)(iVar2 + 0x20) == (int *)0x0) {
    return 1;
  }
  iVar2 = *(int *)(**(int **)(iVar2 + 0x20) + param_1 * 4);
  if (iVar2 < 0) {
    return 1;
  }
  iVar3 = *param_2;
  uVar1 = FUN_00940b80();
  (**(code **)(iVar3 + 0xc))(*(int *)(in_ECX + 0x20) + iVar2,uVar1);
  return 0;
}



void FUN_0090d430(void)

{
  undefined4 *in_ECX;
  
  FUN_00940d90();
  *in_ECX = &PTR_FUN_00a9c8b4;
  thunk_FUN_00940ef0(PTR_s___types___00b30594);
  return;
}



void FUN_0090d450(byte param_1)

{
  FUN_00940e30();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0090d480(void)

{
  undefined4 *in_ECX;
  
  FUN_008b0e60();
  if (-1 < (int)in_ECX[4]) {
    FUN_008a75d0(in_ECX[2],in_ECX[4] & 0x3fffffff,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_0090d7d0(void)

{
  undefined4 *in_ECX;
  
  FUN_00940d90();
  *in_ECX = &PTR_FUN_00a9c990;
  thunk_FUN_00940ef0(PTR_s___classnames___00b2ff04);
  thunk_FUN_00940ef0(PTR_s___classindex___00b2ff08);
  thunk_FUN_00940ef0(PTR_s___dataindex___00b2ff0c);
  return;
}



void FUN_0090d810(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9c990;
  FUN_00940e30();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



int FUN_0090d8e0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x1c))();
  return iVar1 - *(int *)(in_ECX + 0xc);
}



void FUN_0090d920(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  if (in_ECX[1] == (in_ECX[2] & 0x3fffffffU)) {
    FUN_008a6ee0();
  }
  iVar1 = in_ECX[1];
  iVar2 = *in_ECX;
  *(undefined4 *)(iVar2 + iVar1 * 8) = param_1;
  *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = param_2;
  in_ECX[1] = in_ECX[1] + 1;
  return;
}



void FUN_0090d960(int param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = -0x80000000;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = -0x80000000;
  FUN_00942d70(param_1 + 4);
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = -0x80000000;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = -0x80000000;
  *(bool *)(in_ECX + 0x12) = DAT_00b2fde5 != *(char *)(param_1 + 5);
  return;
}



void FUN_0090d9c0(int param_1)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)(param_1 + 4);
  iVar4 = *(int *)(in_ECX + 0x24);
  uVar1 = *(uint *)(param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar1 < iVar4) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    FUN_008a6e40(piVar2,iVar3,0x30);
  }
  *(int *)(param_1 + 8) = iVar4;
  FUN_008b18c0(*piVar2,0xffffffff,iVar4 * 0x30);
  iVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x24)) {
    iVar3 = 0;
    do {
      FUN_008b1840(*piVar2 + iVar3,*(undefined4 *)(*(int *)(in_ECX + 0x20) + iVar4 * 4),0x13);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x30;
    } while (iVar4 < *(int *)(in_ECX + 0x24));
  }
  return;
}



void FUN_0090da40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *unaff_ESI;
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
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined1 local_18 [24];
  
  FUN_008b18c0(&local_40,0xffffffff,0x40);
  local_40 = 0x57e0e057;
  local_3c = 0x10c0c010;
  local_38 = param_3;
  local_34 = 2;
  FUN_008b1890(local_30,param_2,4);
  local_2c = param_4;
  FUN_008b18c0(local_18,0xffffffff,0x18);
  local_6c = 0x80000000;
  local_60 = 0x80000000;
  local_54 = 0x80000000;
  local_48 = 0x80000000;
  local_74 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_44 = 0;
  (**(code **)(*unaff_ESI + 8))(param_1,&local_40,&DAT_00ba9474,&local_74);
  FUN_00941400();
  return;
}



void FUN_0090db10(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  undefined4 local_4;
  
  local_4 = *(int *)(in_ECX + 0x40);
  if (0 < local_4) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x3c) + 8 + iVar3);
      if (-1 < iVar1) {
        FUN_008a75d0(*(undefined4 *)(*(int *)(in_ECX + 0x3c) + iVar3),iVar1 << 3,0x14);
      }
      iVar3 = iVar3 + 0xc;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  if (-1 < (int)*(uint *)(in_ECX + 0x44)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x3c),(*(uint *)(in_ECX + 0x44) & 0x3fffffff) * 0xc,0x14);
  }
  local_4 = *(int *)(in_ECX + 0x34);
  if (0 < local_4) {
    iVar3 = 0;
    do {
      uVar2 = *(uint *)(*(int *)(in_ECX + 0x30) + 8 + iVar3);
      if (-1 < (int)uVar2) {
        FUN_008a75d0(*(undefined4 *)(*(int *)(in_ECX + 0x30) + iVar3),(uVar2 & 0x3fffffff) * 0xc,
                     0x14);
      }
      iVar3 = iVar3 + 0xc;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  if (-1 < (int)*(uint *)(in_ECX + 0x38)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x30),(*(uint *)(in_ECX + 0x38) & 0x3fffffff) * 0xc,0x14);
  }
  FUN_00942e10();
  if (-1 < *(int *)(in_ECX + 0x18)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x10),*(int *)(in_ECX + 0x18) << 3,0x14);
  }
  if (-1 < (int)*(uint *)(in_ECX + 0xc)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 4),(*(uint *)(in_ECX + 0xc) & 0x3fffffff) * 0x30,0x14);
  }
  return;
}



void FUN_0090dc60(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  int unaff_EDI;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_f0;
  int local_ec;
  uint uStack_e8;
  int iStack_e4;
  int local_e0;
  undefined1 **ppuStack_dc;
  undefined4 uStack_d8;
  uint *puStack_d4;
  undefined1 *puStack_d0;
  uint uStack_cc;
  uint auStack_c8 [2];
  undefined1 auStack_c0 [16];
  int iStack_b0;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined1 auStack_64 [24];
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined1 auStack_40 [64];
  
  iVar14 = param_1[1];
  local_ec = iVar14;
  uVar2 = (**(code **)(*(int *)param_1[7] + 0x1c))();
  *(undefined4 *)(iVar14 + 0x14) = uVar2;
  uVar2 = FUN_00942960();
  FUN_008b0d80((int)&uStack_f0 + 3,uVar2);
  while (uStack_f0._3_1_ != '\0') {
    iVar3 = (**(code **)(*(int *)param_1[7] + 0x1c))();
    FUN_00942980(uVar2,iVar3 - *(int *)(iVar14 + 0x14));
    ppuStack_dc = (undefined1 **)FUN_008b0d30(uVar2);
    iVar14 = *(int *)param_1[7];
    iVar3 = FUN_008b1860(ppuStack_dc);
    (**(code **)(iVar14 + 0xc))(ppuStack_dc,iVar3 + 1);
    uVar2 = FUN_009429a0(uVar2);
    FUN_008b0d80((int)&uStack_f0 + 3,uVar2);
    iVar14 = local_ec;
  }
  piVar10 = (int *)param_1[7];
  uVar4 = (**(code **)(*piVar10 + 0x1c))();
  uStack_cc = (uint)auStack_c0;
  auStack_c8[1] = 0x80000020;
  iVar3 = 0;
  do {
    *(undefined1 *)(uStack_cc + iVar3) = 0xff;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  auStack_c8[0] = 0x10;
  if ((uVar4 & 0xf) != 0) {
    (**(code **)(*piVar10 + 0xc))(uStack_cc,0x10 - (uVar4 & 0xf));
  }
  if (-1 < (int)auStack_c8[1]) {
    FUN_008a75d0(uStack_cc,auStack_c8[1] & 0x3fffffff,0x14);
  }
  iVar3 = (**(code **)(*(int *)param_1[7] + 0x1c))();
  iVar3 = iVar3 - *(int *)(iVar14 + 0x14);
  *(int *)(iVar14 + 0x18) = iVar3;
  *(int *)(iVar14 + 0x1c) = iVar3;
  *(int *)(iVar14 + 0x20) = iVar3;
  *(int *)(iVar14 + 0x24) = iVar3;
  *(int *)(iVar14 + 0x28) = iVar3;
  iVar14 = param_1[1];
  bVar17 = *(char *)(*param_1 + 8) == '\0';
  uVar2 = (**(code **)(*(int *)param_1[7] + 0x1c))();
  *(undefined4 *)(iVar14 + 0x44) = uVar2;
  if (bVar17) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_e0 + 0x50) << 3;
  }
  (**(code **)(*(int *)param_1[7] + 0x18))(iVar3,1);
  piVar10 = (int *)param_1[7];
  uVar4 = (**(code **)(*piVar10 + 0x1c))();
  puStack_d4 = auStack_c8;
  uStack_cc = 0x80000020;
  iVar11 = 0;
  do {
    *(undefined1 *)(iVar11 + (int)puStack_d4) = 0xff;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x10);
  puStack_d0 = (undefined1 *)0x10;
  if ((uVar4 & 0xf) != 0) {
    (**(code **)(*piVar10 + 0xc))(puStack_d4,0x10 - (uVar4 & 0xf));
  }
  if (-1 < (int)uStack_cc) {
    FUN_008a75d0(puStack_d4,uStack_cc & 0x3fffffff,0x14);
  }
  iVar11 = (**(code **)(*(int *)param_1[7] + 0x1c))();
  iVar11 = iVar11 - *(int *)(iVar14 + 0x44);
  *(int *)(iVar14 + 0x48) = iVar11;
  *(int *)(iVar14 + 0x4c) = iVar11;
  *(int *)(iVar14 + 0x50) = iVar11;
  *(int *)(iVar14 + 0x54) = iVar11;
  *(int *)(iVar14 + 0x58) = iVar11;
  iVar14 = param_1[1];
  uVar2 = (**(code **)(*(int *)param_1[7] + 0x1c))();
  *(undefined4 *)(iVar14 + 0x74) = uVar2;
  if (bVar17) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(uStack_e8 + 0x4c) * 0xc;
  }
  (**(code **)(*(int *)param_1[7] + 0x18))(iVar11,1);
  piVar10 = (int *)param_1[7];
  uVar4 = (**(code **)(*piVar10 + 0x1c))();
  ppuStack_dc = &puStack_d0;
  puStack_d4 = (uint *)0x80000020;
  iVar11 = 0;
  do {
    *(undefined1 *)(iVar11 + (int)ppuStack_dc) = 0xff;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x10);
  uStack_d8 = 0x10;
  if ((uVar4 & 0xf) != 0) {
    (**(code **)(*piVar10 + 0xc))(ppuStack_dc,0x10 - (uVar4 & 0xf));
  }
  if (-1 < (int)puStack_d4) {
    FUN_008a75d0(ppuStack_dc,(uint)puStack_d4 & 0x3fffffff,0x14);
  }
  iVar11 = (**(code **)(*(int *)param_1[7] + 0x1c))();
  iVar11 = iVar11 - *(int *)(iVar14 + 0x74);
  *(int *)(iVar14 + 0x78) = iVar11;
  *(int *)(iVar14 + 0x7c) = iVar11;
  *(int *)(iVar14 + 0x80) = iVar11;
  *(int *)(iVar14 + 0x84) = iVar11;
  *(int *)(iVar14 + 0x88) = iVar11;
  iVar14 = *(int *)(uStack_f0 + 0xc);
  if ((int)(param_1[6] & 0x3fffffffU) < iVar14) {
    iVar11 = (param_1[6] & 0x3fffffffU) * 2;
    if (iVar11 <= iVar14) {
      iVar11 = iVar14;
    }
    FUN_008a6e40(param_1 + 4,iVar11,8);
  }
  param_1[5] = iVar14;
  uVar4 = param_1[2];
  iVar14 = param_1[0xd];
  piVar10 = param_1 + 0xc;
  local_e0 = iVar14;
  if ((int)uVar4 < iVar14) {
    iVar11 = uVar4 * 0xc;
    iVar14 = iVar14 - uVar4;
    do {
      uVar1 = *(uint *)(*piVar10 + 8 + iVar11);
      if (-1 < (int)uVar1) {
        FUN_008a75d0(*(undefined4 *)(*piVar10 + iVar11),(uVar1 & 0x3fffffff) * 0xc,0x14);
      }
      iVar11 = iVar11 + 0xc;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  else {
    uStack_e8 = param_1[0xe];
    if ((int)(uStack_e8 & 0x3fffffff) < (int)uVar4) {
      uVar1 = (uStack_e8 & 0x3fffffff) * 2;
      uVar5 = uVar4;
      if ((int)uVar4 < (int)uVar1) {
        uVar5 = uVar1;
      }
      iStack_b0 = *piVar10;
      *piVar10 = 0;
      param_1[0xd] = 0;
      param_1[0xe] = -0x80000000;
      if (0 < (int)uVar5) {
        FUN_008a6e40(piVar10,((int)uVar5 < 0) - 1 & uVar5,0xc);
      }
      puVar15 = (undefined4 *)*piVar10;
      if (0 < iVar14) {
        piVar10 = (int *)(iStack_b0 + 4);
        iVar11 = iVar14;
        do {
          if (puVar15 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)FUN_008a7560(*piVar10 * 0xc,0x14);
            *puVar15 = puVar6;
            puVar15[1] = *piVar10;
            puVar15[2] = *piVar10;
            iVar7 = *piVar10;
            if (0 < iVar7) {
              local_ec = piVar10[-1] - (int)puVar6;
              do {
                puVar13 = (undefined4 *)(local_ec + (int)puVar6);
                *puVar6 = *puVar13;
                puVar6[1] = puVar13[1];
                puVar6[2] = puVar13[2];
                puVar6 = puVar6 + 3;
                iVar7 = iVar7 + -1;
                iVar14 = local_e0;
              } while (iVar7 != 0);
            }
          }
          puVar15 = puVar15 + 3;
          piVar10 = piVar10 + 3;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      param_1[0xd] = iVar14;
      if (0 < iVar14) {
        puVar16 = (uint *)(iStack_b0 + 8);
        iVar11 = iVar14;
        do {
          if (-1 < (int)*puVar16) {
            FUN_008a75d0(puVar16[-2],(*puVar16 & 0x3fffffff) * 0xc,0x14);
          }
          puVar16 = puVar16 + 3;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      if (-1 < (int)uStack_e8) {
        FUN_008a75d0(iStack_b0,(uStack_e8 & 0x3fffffff) * 0xc,0x14);
      }
    }
    if (iVar14 < (int)uVar4) {
      puVar15 = (undefined4 *)(param_1[0xc] + iVar14 * 0xc);
      iVar14 = uVar4 - iVar14;
      do {
        if (puVar15 != (undefined4 *)0x0) {
          *puVar15 = 0;
          puVar15[1] = 0;
          puVar15[2] = 0x80000000;
        }
        puVar15 = puVar15 + 3;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
  }
  param_1[0xd] = uVar4;
  uVar4 = param_1[2];
  iVar14 = param_1[0x10];
  piVar10 = param_1 + 0xf;
  local_ec = iVar14;
  if ((int)uVar4 < iVar14) {
    iVar11 = uVar4 * 0xc;
    iVar14 = iVar14 - uVar4;
    do {
      iVar7 = *(int *)(*piVar10 + 8 + iVar11);
      if (-1 < iVar7) {
        FUN_008a75d0(*(undefined4 *)(*piVar10 + iVar11),iVar7 << 3,0x14);
      }
      iVar11 = iVar11 + 0xc;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  else {
    uVar1 = param_1[0x11];
    if ((int)(uVar1 & 0x3fffffff) < (int)uVar4) {
      uVar5 = (uVar1 & 0x3fffffff) * 2;
      if ((int)uVar5 <= (int)uVar4) {
        uVar5 = uVar4;
      }
      iStack_b0 = *piVar10;
      *piVar10 = 0;
      param_1[0x10] = 0;
      param_1[0x11] = -0x80000000;
      if (0 < (int)uVar5) {
        FUN_008a6e40(piVar10,uVar5 & ((int)uVar5 < 0) - 1,0xc);
      }
      puVar15 = (undefined4 *)*piVar10;
      if (0 < iVar14) {
        piVar10 = (int *)(iStack_b0 + 4);
        iVar11 = iVar14;
        do {
          if (puVar15 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)FUN_008a7560(*piVar10 * 8,0x14);
            *puVar15 = puVar6;
            puVar15[1] = *piVar10;
            puVar15[2] = *piVar10;
            iVar7 = *piVar10;
            if (0 < iVar7) {
              iVar12 = piVar10[-1] - (int)puVar6;
              do {
                *puVar6 = *(undefined4 *)(iVar12 + (int)puVar6);
                puVar6[1] = *(undefined4 *)(iVar12 + 4 + (int)puVar6);
                puVar6 = puVar6 + 2;
                iVar7 = iVar7 + -1;
                iVar14 = local_ec;
              } while (iVar7 != 0);
            }
          }
          puVar15 = puVar15 + 3;
          piVar10 = piVar10 + 3;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      param_1[0x10] = iVar14;
      if (0 < iVar14) {
        piVar10 = (int *)(iStack_b0 + 8);
        iVar11 = iVar14;
        do {
          if (-1 < *piVar10) {
            FUN_008a75d0(piVar10[-2],*piVar10 << 3,0x14);
          }
          piVar10 = piVar10 + 3;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      if (-1 < (int)uVar1) {
        FUN_008a75d0(iStack_b0,(uVar1 & 0x3fffffff) * 0xc,0x14);
      }
    }
    if (iVar14 < (int)uVar4) {
      puVar15 = (undefined4 *)(param_1[0xf] + iVar14 * 0xc);
      iVar14 = uVar4 - iVar14;
      do {
        if (puVar15 != (undefined4 *)0x0) {
          *puVar15 = 0;
          puVar15[1] = 0;
          puVar15[2] = 0x80000000;
        }
        puVar15 = puVar15 + 3;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
  }
  param_1[0x10] = uVar4;
  local_e0 = FUN_00940ef0(PTR_s___types___00b30594);
  iStack_e4 = 3;
  if (3 < param_1[2]) {
    iVar14 = 0x90;
    do {
      iVar11 = param_1[1] + iVar14;
      uVar2 = (**(code **)(*(int *)param_1[7] + 0x1c))();
      *(undefined4 *)(iVar11 + 0x14) = uVar2;
      iStack_a0 = 0;
      iStack_9c = 0;
      iStack_98 = -0x80000000;
      iStack_94 = 0;
      iStack_90 = 0;
      iStack_8c = -0x80000000;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0x80000000;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0x80000000;
      puStack_70 = (undefined1 *)0x0;
      if ((*(char *)(*param_1 + 8) == '\0') && (iStack_e4 == local_e0)) {
        iVar7 = 0;
        if (0 < *(int *)(uStack_f0 + 0xc)) {
          iVar12 = 0;
          do {
            if (*(int *)(iVar12 + 0x10 + *(int *)(uStack_f0 + 8)) == local_e0) {
              *(undefined4 *)(param_1[4] + iVar7 * 8) = 0xffffffff;
              *(undefined4 *)(param_1[4] + 4 + iVar7 * 8) = 0xffffffff;
            }
            iVar7 = iVar7 + 1;
            iVar12 = iVar12 + 0x18;
          } while (iVar7 < *(int *)(uStack_f0 + 0xc));
        }
      }
      else {
        uStack_e8 = 0;
        if (0 < *(int *)(uStack_f0 + 0xc)) {
          iVar7 = 0;
          do {
            puVar15 = (undefined4 *)(*(int *)(uStack_f0 + 8) + iVar7);
            if (*(int *)(*(int *)(uStack_f0 + 8) + 0x10 + iVar7) == iStack_e4) {
              uStack_6c = *puVar15;
              local_ec = puVar15[1];
              iVar8 = uStack_e8 * 8;
              *(int *)(iVar8 + param_1[4]) = iStack_e4;
              iVar12 = param_1[4];
              iVar9 = (**(code **)(*(int *)param_1[7] + 0x1c))();
              *(int *)(iVar12 + iVar8 + 4) = iVar9 - *(int *)(iVar11 + 0x14);
              if (local_ec == 0) {
                (**(code **)(*(int *)param_1[7] + 0xc))(*puVar15,puVar15[5]);
              }
              else {
                (**(code **)(param_1[8] + 8))(param_1[7],uStack_6c,local_ec,&iStack_a0);
              }
            }
            uStack_e8 = uStack_e8 + 1;
            iVar7 = iVar7 + 0x18;
          } while ((int)uStack_e8 < *(int *)(uStack_f0 + 0xc));
        }
      }
      iVar7 = 0;
      if (0 < iStack_9c) {
        do {
          *(int *)(iStack_a0 + iVar7 * 8) =
               *(int *)(iStack_a0 + iVar7 * 8) - *(int *)(iVar11 + 0x14);
          *(int *)(iStack_a0 + 4 + iVar7 * 8) =
               *(int *)(iStack_a0 + 4 + iVar7 * 8) - *(int *)(iVar11 + 0x14);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iStack_9c);
      }
      iVar7 = (**(code **)(*(int *)param_1[7] + 0x1c))();
      *(int *)(iVar11 + 0x18) = iVar7 - *(int *)(iVar11 + 0x14);
      FUN_009183a0(param_1[7],(char)param_1[0x12]);
      FUN_009181d0(iStack_a0,4,iStack_9c * 2);
      FUN_00918180();
      piVar10 = (int *)param_1[7];
      uVar4 = (**(code **)(*piVar10 + 0x1c))();
      ppuStack_dc = &puStack_d0;
      puStack_d4 = (uint *)0x80000020;
      iVar7 = 0;
      do {
        *(undefined1 *)(iVar7 + (int)ppuStack_dc) = 0xff;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x10);
      uStack_d8 = 0x10;
      if ((uVar4 & 0xf) != 0) {
        (**(code **)(*piVar10 + 0xc))(ppuStack_dc,0x10 - (uVar4 & 0xf));
      }
      if (-1 < (int)puStack_d4) {
        FUN_008a75d0(ppuStack_dc,(uint)puStack_d4 & 0x3fffffff,0x14);
      }
      iVar7 = (**(code **)(*(int *)param_1[7] + 0x1c))();
      *(int *)(iVar11 + 0x1c) = iVar7 - *(int *)(iVar11 + 0x14);
      (**(code **)(*(int *)param_1[7] + 0x18))(iStack_90 * 0xc,1);
      piVar10 = (int *)(param_1[0xc] + unaff_EDI);
      iVar7 = *piVar10;
      *piVar10 = iStack_9c;
      iVar12 = piVar10[1];
      piVar10[1] = iStack_98;
      iVar8 = piVar10[2];
      piVar10[2] = iStack_94;
      piVar10 = (int *)param_1[7];
      iStack_9c = iVar7;
      iStack_98 = iVar12;
      iStack_94 = iVar8;
      uVar4 = (**(code **)(*piVar10 + 0x1c))();
      puStack_70 = auStack_64;
      uStack_68 = 0x80000020;
      iVar7 = 0;
      do {
        puStack_70[iVar7] = 0xff;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x10);
      uStack_6c = 0x10;
      if ((uVar4 & 0xf) != 0) {
        (**(code **)(*piVar10 + 0xc))(puStack_70,0x10 - (uVar4 & 0xf));
      }
      if (-1 < (int)uStack_68) {
        FUN_008a75d0(puStack_70,uStack_68 & 0x3fffffff,0x14);
      }
      iVar7 = (**(code **)(*(int *)param_1[7] + 0x1c))();
      *(int *)(iVar11 + 0x20) = iVar7 - *(int *)(iVar11 + 0x14);
      (**(code **)(*(int *)param_1[7] + 0x18))(iStack_8c * 0xc,1);
      piVar10 = (int *)(param_1[0xf] + iVar3);
      iVar7 = *piVar10;
      *piVar10 = iStack_98;
      iVar12 = piVar10[1];
      piVar10[1] = iStack_94;
      iVar8 = piVar10[2];
      piVar10[2] = iStack_90;
      piVar10 = (int *)param_1[7];
      iStack_98 = iVar7;
      iStack_94 = iVar12;
      iStack_90 = iVar8;
      uVar4 = (**(code **)(*piVar10 + 0x1c))();
      puStack_4c = auStack_40;
      uStack_44 = 0x80000020;
      iVar7 = 0;
      do {
        puStack_4c[iVar7] = 0xff;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x10);
      uStack_48 = 0x10;
      if ((uVar4 & 0xf) != 0) {
        (**(code **)(*piVar10 + 0xc))(puStack_4c,0x10 - (uVar4 & 0xf));
      }
      if (-1 < (int)uStack_44) {
        FUN_008a75d0(puStack_4c,uStack_44 & 0x3fffffff,0x14);
      }
      iVar7 = (**(code **)(*(int *)param_1[7] + 0x1c))();
      *(int *)(iVar11 + 0x28) = iVar7 - *(int *)(iVar11 + 0x14);
      FUN_00941400();
      iStack_e4 = iStack_e4 + 1;
      iVar14 = iVar14 + 0x30;
    } while (iStack_e4 < param_1[2]);
  }
  return;
}



void FUN_0090e860(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uStack_8c;
  int iStack_88;
  int local_84;
  int local_80;
  uint local_7c;
  int local_78;
  int iStack_74;
  int local_70;
  int *local_6c;
  uint *local_68;
  int iStack_64;
  undefined4 *puStack_60;
  uint auStack_5c [2];
  undefined4 auStack_54 [21];
  
  local_78 = in_ECX;
  FUN_009183a0(param_1[7],(char)param_1[0x12]);
  if (*(char *)(*param_1 + 8) != '\0') {
    iVar10 = 0;
    local_84 = 0;
    local_80 = 0;
    local_7c = 0x80000000;
    FUN_008b0e10();
    iVar2 = *(int *)(in_ECX + 0x50) * 2;
    if ((int)(local_7c & 0x3fffffff) < iVar2) {
      iVar7 = (local_7c & 0x3fffffff) * 2;
      if (iVar2 < iVar7) {
        iVar2 = iVar7;
      }
      FUN_008a6e40(&local_84,iVar2,4);
    }
    if (0 < *(int *)(in_ECX + 0xc)) {
      iVar2 = 0;
      do {
        if (*(undefined **)(*(int *)(in_ECX + 8) + 4 + iVar2) == &DAT_00ba8788) {
          FUN_008b0e80(*(undefined4 *)(*(int *)(in_ECX + 8) + iVar2),local_80 / 2);
          *(undefined4 *)(local_84 + local_80 * 4) = *(undefined4 *)(param_1[4] + iVar10 * 8);
          *(undefined4 *)(local_84 + (local_80 + 1) * 4) =
               *(undefined4 *)(param_1[4] + 4 + iVar10 * 8);
          local_80 = local_80 + 2;
        }
        iVar10 = iVar10 + 1;
        iVar2 = iVar2 + 0x18;
      } while (iVar10 < *(int *)(in_ECX + 0xc));
    }
    piVar3 = (int *)FUN_00953130();
    (**(code **)(*piVar3 + 0x18))(*(undefined4 *)(param_1[1] + 0x44),0);
    FUN_00918480(uStack_8c,iStack_88);
    piVar3 = (int *)FUN_00953130();
    uVar4 = (**(code **)(*piVar3 + 0x1c))();
    local_68 = auStack_5c;
    puStack_60 = (undefined4 *)0x80000020;
    iVar2 = 0;
    do {
      *(undefined1 *)(iVar2 + (int)local_68) = 0xff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    iStack_64 = 0x10;
    if ((uVar4 & 0xf) != 0) {
      (**(code **)(*piVar3 + 0xc))(local_68,0x10 - (uVar4 & 0xf));
    }
    if (-1 < (int)puStack_60) {
      FUN_008a75d0(local_68,(uint)puStack_60 & 0x3fffffff,0x14);
    }
    iVar10 = 0;
    uVar4 = *(int *)(in_ECX + 0x4c) * 3;
    iVar2 = 0;
    if (0 < (int)uVar4) {
      FUN_008a6e40(&stack0xffffff68,uVar4 & ((int)uVar4 < 0) - 1,4);
    }
    if (0 < *(int *)(in_ECX + 0xc)) {
      iVar7 = 0;
      do {
        iVar1 = local_80;
        if (*(undefined **)(*(int *)(local_80 + 8) + 4 + iVar7) != &DAT_00ba8788) {
          *(undefined4 *)(iVar2 * 4) = *(undefined4 *)(param_1[4] + iVar10 * 8);
          *(undefined4 *)((iVar2 + 1) * 4) = *(undefined4 *)(param_1[4] + 4 + iVar10 * 8);
          uVar5 = FUN_008b1550(*(undefined4 *)(*(int *)(local_80 + 8) + 4 + iVar7),0xffffffff);
          *(undefined4 *)((iVar2 + 2) * 4) = uVar5;
          iVar2 = iVar2 + 3;
        }
        iVar10 = iVar10 + 1;
        iVar7 = iVar7 + 0x18;
        in_ECX = local_80;
      } while (iVar10 < *(int *)(iVar1 + 0xc));
    }
    FUN_00918480(0,iVar2);
    piVar3 = (int *)FUN_00953130();
    uVar4 = (**(code **)(*piVar3 + 0x1c))();
    puStack_60 = auStack_54;
    auStack_5c[1] = 0x80000020;
    iVar2 = 0;
    do {
      *(undefined1 *)(iVar2 + (int)puStack_60) = 0xff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    auStack_5c[0] = 0x10;
    if ((uVar4 & 0xf) != 0) {
      (**(code **)(*piVar3 + 0xc))(puStack_60,0x10 - (uVar4 & 0xf));
    }
    if (-1 < (int)auStack_5c[1]) {
      FUN_008a75d0(puStack_60,auStack_5c[1] & 0x3fffffff,0x14);
    }
    if (-1 < iStack_88) {
      FUN_008a75d0(0x80000000,iStack_88 << 2,0x14);
    }
    FUN_008b0e60();
    if (-1 < (int)local_7c) {
      FUN_008a75d0(local_84,local_7c << 2,0x14);
    }
  }
  local_70 = 0;
  if (0 < param_1[2]) {
    local_68 = (uint *)0x0;
    local_6c = (int *)0x0;
    do {
      piVar3 = (int *)(param_1[0xc] + (int)local_68);
      local_84 = 0;
      local_80 = 0;
      local_7c = 0x80000000;
      iVar10 = param_1[1] + (int)local_6c;
      iVar2 = piVar3[1] * 3;
      iStack_74 = iVar10;
      if (0 < iVar2) {
        FUN_008a6e40(&local_84,iVar2,4);
        iVar7 = 0;
        do {
          *(undefined4 *)(local_84 + iVar7 * 4) = 0xffffffff;
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar2);
      }
      iVar7 = 0;
      iStack_64 = 0;
      local_80 = iVar2;
      if (0 < piVar3[1]) {
        iVar2 = 0;
        do {
          iVar10 = FUN_008b1550(*(undefined4 *)(*piVar3 + 4 + iVar2),0xfffffffe);
          if ((-1 < iVar10) && (-1 < *(int *)(param_1[4] + iVar10 * 8))) {
            *(int *)(iVar7 + local_84) = *(int *)(*piVar3 + iVar2) - *(int *)(iStack_74 + 0x14);
            *(undefined4 *)(iVar7 + 4 + local_84) = *(undefined4 *)(param_1[4] + iVar10 * 8);
            *(undefined4 *)(iVar7 + 8 + local_84) = *(undefined4 *)(param_1[4] + 4 + iVar10 * 8);
            iVar7 = iVar7 + 0xc;
          }
          iStack_64 = iStack_64 + 1;
          iVar2 = iVar2 + 0xc;
          iVar10 = iStack_74;
        } while (iStack_64 < piVar3[1]);
      }
      (**(code **)(*(int *)param_1[7] + 0x18))(*(int *)(iVar10 + 0x1c) + *(int *)(iVar10 + 0x14),0);
      FUN_00918480(uStack_8c,iStack_88);
      if (-1 < local_84) {
        FUN_008a75d0(uStack_8c,local_84 << 2,0x14);
      }
      uVar8 = param_1[1] + iStack_74;
      piVar3 = (int *)(param_1[0xf] + local_70);
      uVar4 = piVar3[1] * 3;
      local_7c = uVar8;
      if (0 < (int)uVar4) {
        FUN_008a6e40(&stack0xffffff68,((int)uVar4 < 0) - 1 & uVar4,4);
      }
      iVar2 = 0;
      if (0 < piVar3[1]) {
        piVar9 = (int *)0x0;
        do {
          *piVar9 = *(int *)(*piVar3 + iVar2 * 8) - *(int *)(local_7c + 0x14);
          piVar9[1] = 0;
          local_6c = piVar9 + 2;
          iVar10 = FUN_00942b40(*(undefined4 *)(*piVar3 + 4 + iVar2 * 8),0xffffffff);
          *local_6c = iVar10;
          iVar2 = iVar2 + 1;
          piVar9 = piVar9 + 3;
          uVar8 = local_7c;
        } while (iVar2 < piVar3[1]);
      }
      (**(code **)(*(int *)param_1[7] + 0x18))(*(int *)(uVar8 + 0x20) + *(int *)(uVar8 + 0x14),0);
      FUN_00918480(0x80000000,uStack_8c);
      if (-1 < iStack_88) {
        FUN_008a75d0(0x80000000,iStack_88 << 2,0x14);
      }
      local_70 = local_70 + 1;
      local_6c = local_6c + 0xc;
      local_68 = local_68 + 3;
      in_ECX = local_78;
    } while (local_70 < param_1[2]);
  }
  iVar2 = 0;
  (**(code **)(*(int *)param_1[7] + 0x18))(param_2,0);
  if (0 < param_1[2]) {
    iVar10 = 0;
    do {
      local_68 = (uint *)0x0;
      iStack_64 = 0;
      auStack_5c[0] = 0;
      auStack_5c[1] = 0;
      auStack_54[1] = 0;
      auStack_54[2] = 0;
      auStack_54[4] = 0;
      auStack_54[5] = 0;
      auStack_54[7] = 0;
      puStack_60 = (undefined4 *)0x80000000;
      auStack_54[0] = 0x80000000;
      auStack_54[3] = 0x80000000;
      auStack_54[6] = 0x80000000;
      (**(code **)(param_1[8] + 8))(param_1[7],param_1[1] + iVar10,&DAT_00ba9498,&local_68);
      FUN_00941400();
      iVar2 = iVar2 + 1;
      iVar10 = iVar10 + 0x30;
      in_ECX = local_80;
    } while (iVar2 < param_1[2]);
  }
  (**(code **)(*(int *)param_1[7] + 0x18))(0x18,0);
  puVar6 = (undefined4 *)FUN_00942ca0();
  local_80 = CONCAT31(local_80._1_3_,(char)((uint)*puVar6 >> 8) != DAT_00b2fde5);
  FUN_009183a0(param_1[7],local_80);
  FUN_00918440(*(undefined4 *)(param_1[4] + *(int *)(in_ECX + 0x44) * 8));
  FUN_00918440(*(undefined4 *)(param_1[4] + 4 + *(int *)(in_ECX + 0x44) * 8));
  FUN_00918440(*(undefined4 *)(param_1[4] + *(int *)(in_ECX + 0x48) * 8));
  FUN_00918440(*(undefined4 *)(param_1[4] + 4 + *(int *)(in_ECX + 0x48) * 8));
  FUN_00918180();
  FUN_00918180();
  return;
}



undefined4 FUN_0090ef80(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_ESI;
  undefined **local_5c;
  undefined2 local_56;
  int *local_54;
  undefined4 uStack_50;
  undefined1 local_4c [8];
  int iStack_44;
  undefined ***pppuStack_30;
  
  FUN_0090d960(param_2);
  local_56 = 1;
  local_5c = &PTR_LAB_00a9c9b0;
  local_54 = param_1;
  uStack_50 = (**(code **)(*param_1 + 0x1c))();
  pppuStack_30 = &local_5c;
  FUN_0090d9c0(local_4c);
  FUN_0090da40(pppuStack_30,param_2 + 1,*param_2,iStack_44);
  uVar1 = (*(code *)local_5c[7])();
  (*(code *)local_5c[6])(iStack_44 * 0x30,1);
  FUN_0090dc60(&local_54);
  uVar2 = (**(code **)(unaff_ESI + 0x1c))();
  FUN_0090e860(&local_54,uVar1);
  (**(code **)(unaff_ESI + 0x18))(uVar2,0);
  FUN_0090db10();
  return 0;
}



void FUN_0090f080(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9caa8;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0x80000000;
  in_ECX[2] = 0;
  return;
}



void FUN_0090f0b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) == 0) {
    iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xa0,0x12);
    *(undefined2 *)(iVar1 + 4) = 0xa0;
    uVar2 = FUN_008a9510();
    *(undefined4 *)(in_ECX + 8) = uVar2;
  }
  FUN_00898db0(*(undefined4 *)(in_ECX + 8));
  uVar2 = FUN_008991c0();
  if (*(uint *)(in_ECX + 0x10) == (*(uint *)(in_ECX + 0x14) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0xc),4);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 0x10) * 4) = uVar2;
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  return;
}



void FUN_0090f130(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  puVar1 = (undefined4 *)in_ECX[2];
  *in_ECX = &PTR_FUN_00a9caa8;
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  iVar2 = 0;
  if (0 < (int)in_ECX[4]) {
    do {
      puVar1 = *(undefined4 **)(in_ECX[3] + iVar2 * 4);
      if ((*(short *)(puVar1 + 1) != 0) &&
         (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
         *(short *)((int)puVar1 + 6) == 0)) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)in_ECX[4]);
  }
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],in_ECX[5] << 2,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_0090f1d0(byte param_1)

{
  FUN_0090f130();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0090f200(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  int in_ECX;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_2c;
  undefined4 uStack_24;
  
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *(float *)(in_ECX + 0xa0) = *param_1;
  *(float *)(in_ECX + 0xa4) = fVar4;
  *(float *)(in_ECX + 0xa8) = fVar5;
  *(float *)(in_ECX + 0xac) = fVar6;
  (**(code **)(**(int **)(in_ECX + 0x14) + 0xc))
            (in_ECX + 0x70,*(float *)(*(int *)(*(int *)(in_ECX + 8) + 0x74) + 8) * 0.5 + param_2[5],
             &local_60);
  auVar7._0_12_ = ZEXT812(0);
  auVar7._12_4_ = 0;
  auVar8._4_4_ = param_2[1] - param_1[1];
  auVar8._0_4_ = *param_2 - *param_1;
  auVar8._8_4_ = param_2[2] - param_1[2];
  auVar8._12_4_ = param_2[3] - param_1[3];
  auVar9 = minps(ZEXT816(0),auVar8);
  auVar3._4_4_ = param_2[1] - param_1[1];
  auVar3._0_4_ = *param_2 - *param_1;
  auVar3._8_4_ = param_2[2] - param_1[2];
  auVar3._12_4_ = param_2[3] - param_1[3];
  auVar8 = maxps(auVar7,auVar3);
  fStack_6c = fStack_6c + auVar9._0_4_;
  fStack_68 = fStack_68 + auVar9._4_4_;
  fStack_64 = fStack_64 + auVar9._8_4_;
  local_60 = local_60 + auVar9._12_4_;
  fStack_5c = fStack_5c + auVar8._0_4_;
  fStack_58 = fStack_58 + auVar8._4_4_;
  fStack_54 = fStack_54 + auVar8._8_4_;
  fStack_50 = fStack_50 + auVar8._12_4_;
  FUN_008de950(&fStack_6c);
  fStack_2c = 1.1920929e-07;
  puVar1 = *(undefined4 **)(*(int *)(in_ECX + 8) + 0x74);
  uStack_4c = *puVar1;
  uStack_48 = puVar1[1];
  uStack_44 = puVar1[2];
  uStack_40 = puVar1[3];
  uStack_24 = puVar1[8];
  FUN_008d9870(&stack0xffffff84,param_2[5]);
  fStack_2c = param_2[4];
  iVar2 = *(int *)(in_ECX + 0x124);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x120) + iVar2 * 8);
    (**(code **)(*(int *)*puVar1 + 0x10))(in_ECX + 0x14,puVar1[1],&uStack_4c,param_3,param_4);
  }
  return;
}



void FUN_0090f320(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = *(undefined4 **)(*(int *)(in_ECX + 8) + 0x74);
  local_10 = *puVar1;
  iVar2 = *(int *)(in_ECX + 0x124) + -1;
  local_c = puVar1[1];
  local_8 = puVar1[2];
  local_4 = puVar1[3];
  if (-1 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x120) + iVar2 * 8) + 0xc))
                (in_ECX + 0x14,*(undefined4 *)(*(int *)(in_ECX + 0x120) + iVar2 * 8 + 4),&local_10,
                 param_1);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return;
}



void FUN_0090f390(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = *(undefined4 **)(*(int *)(in_ECX + 8) + 0x74);
  local_10 = *puVar1;
  iVar2 = *(int *)(in_ECX + 0x124);
  local_c = puVar1[1];
  local_8 = puVar1[2];
  local_4 = puVar1[3];
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return;
    }
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x120) + iVar2 * 8) + 8))
              (in_ECX + 0x14,*(undefined4 *)(*(int *)(in_ECX + 0x120) + iVar2 * 8 + 4),&local_10,
               param_1);
  } while (*(char *)(param_1 + 4) == '\0');
  return;
}



void FUN_0090f460(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  undefined1 local_c [4];
  int *local_8;
  undefined1 local_4;
  
  if (*param_1 != 0) {
    iVar5 = *(int *)(in_ECX + 0x124) + -1;
    if (-1 < iVar5) {
      puVar3 = (undefined4 *)(*(int *)(in_ECX + 0x120) + 4 + iVar5 * 8);
      do {
        if ((int *)*puVar3 == param_1) {
          FUN_0088d7d0(param_1,1);
          piVar1 = *(int **)(*(int *)(in_ECX + 0x120) + iVar5 * 8);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0x18))();
          }
          iVar4 = *(int *)(in_ECX + 0x124) + -1;
          *(int *)(in_ECX + 0x124) = iVar4;
          iVar2 = *(int *)(in_ECX + 0x120);
          *(undefined4 *)(iVar2 + iVar5 * 8) = *(undefined4 *)(iVar2 + iVar4 * 8);
          *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
          return;
        }
        iVar5 = iVar5 + -1;
        puVar3 = puVar3 + -2;
      } while (-1 < iVar5);
    }
    iVar5 = *(int *)(in_ECX + 0x54);
    local_4 = 0;
    local_8 = param_1;
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x50) + iVar5 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(local_c);
      }
    }
  }
  return;
}



void FUN_0090f510(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = *(undefined4 **)(*(int *)(in_ECX + 8) + 0x74);
  local_10 = *puVar1;
  local_c = puVar1[1];
  local_8 = puVar1[2];
  local_4 = puVar1[3];
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x124)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x120) + iVar2 * 8) + 0x1c))
                (in_ECX + 0x14,*(undefined4 *)(*(int *)(in_ECX + 0x120) + iVar2 * 8 + 4),&local_10);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x124));
  }
  return;
}



void FUN_0090f580(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_008abc40(param_1,param_2);
  *in_ECX = &PTR_FUN_00a9cab8;
  in_ECX[0x48] = 0;
  in_ECX[0x49] = 0;
  in_ECX[0x4a] = 0x80000000;
  in_ECX[0xc] = param_3;
  return;
}



void FUN_0090f5c0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[0x49];
  *in_ECX = &PTR_FUN_00a9cab8;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    (**(code **)(**(int **)(in_ECX[0x48] + iVar1 * 8) + 0x18))();
  }
  in_ECX[0x49] = 0;
  if (-1 < (int)in_ECX[0x4a]) {
    FUN_008a75d0(in_ECX[0x48],in_ECX[0x4a] << 3,0x14);
  }
  FUN_008de8b0();
  return;
}



undefined4 * FUN_0090f640(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x130,0x2e);
  *(undefined2 *)(puVar1 + 1) = 0x130;
  uVar3 = *(undefined4 *)(in_ECX + 0x30);
  FUN_008abc40(*(undefined4 *)(in_ECX + 0x14),in_ECX + 0x70);
  *puVar1 = &PTR_FUN_00a9cab8;
  puVar1[0x48] = 0;
  puVar1[0x49] = 0;
  puVar1[0x4a] = 0x80000000;
  puVar1[0xc] = uVar3;
  uVar2 = puVar1[0x16] & 0x3fffffff;
  if ((int)uVar2 < *(int *)(in_ECX + 0x54)) {
    if (-1 < (int)puVar1[0x16]) {
      FUN_008a75d0(puVar1[0x14],uVar2 * 4,0x14);
    }
    uVar3 = FUN_008a7560(*(int *)(in_ECX + 0x54) << 2,0x14);
    puVar1[0x14] = uVar3;
    puVar1[0x16] = puVar1[0x16] & 0x40000000 | *(uint *)(in_ECX + 0x54);
  }
  iVar5 = *(int *)(in_ECX + 0x54);
  puVar4 = (undefined4 *)puVar1[0x14];
  puVar1[0x15] = iVar5;
  if (0 < iVar5) {
    iVar6 = *(int *)(in_ECX + 0x50) - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar2 = puVar1[0x19] & 0x3fffffff;
  if ((int)uVar2 < *(int *)(in_ECX + 0x60)) {
    if (-1 < (int)puVar1[0x19]) {
      FUN_008a75d0(puVar1[0x17],uVar2 * 4,0x14);
    }
    uVar3 = FUN_008a7560(*(int *)(in_ECX + 0x60) << 2,0x14);
    puVar1[0x17] = uVar3;
    puVar1[0x19] = puVar1[0x19] & 0x40000000 | *(uint *)(in_ECX + 0x60);
  }
  iVar5 = *(int *)(in_ECX + 0x60);
  puVar4 = (undefined4 *)puVar1[0x17];
  puVar1[0x18] = iVar5;
  if (0 < iVar5) {
    iVar6 = *(int *)(in_ECX + 0x5c) - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_008a9e50(in_ECX);
  return puVar1;
}



void FUN_0090f7e0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int *piVar6;
  int *piVar7;
  int local_2c [3];
  char local_20;
  int local_4;
  
  if (*param_1 != 0) {
    iVar2 = FUN_0088d780(param_1);
    if (iVar2 == 0) {
      if (*(uint *)(in_ECX + 0x124) == (*(uint *)(in_ECX + 0x128) & 0x3fffffff)) {
        FUN_008a6ee0((int *)(in_ECX + 0x120),8);
      }
      puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x120) + *(int *)(in_ECX + 0x124) * 8);
      *(int *)(in_ECX + 0x124) = *(int *)(in_ECX + 0x124) + 1;
      piVar6 = *(int **)(*(int *)(in_ECX + 8) + 0x74);
      piVar7 = local_2c;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      local_4 = local_2c[0] + 0x1a50;
      local_20 = '\0';
      iVar3 = (**(code **)(**(int **)(in_ECX + 0x14) + 8))();
      iVar4 = (**(code **)(*(int *)*param_1 + 8))();
      iVar2 = local_2c[0] + 0x590;
      if (local_20 == '\0') {
        iVar2 = local_2c[0] + 400;
      }
      uVar5 = (**(code **)(local_2c[0] + 0x990 +
                          (uint)*(byte *)(iVar3 * 0x20 + iVar2 + iVar4) * 0x14))
                        (in_ECX + 0x14,param_1,local_2c,0);
      *puVar1 = uVar5;
      puVar1[1] = param_1;
    }
  }
  return;
}



void FUN_0090f8c0(int *param_1)

{
  int in_ECX;
  int iVar1;
  
  (**(code **)*param_1)("CachngPhantm",2);
  FUN_008de790(param_1);
  if (-1 < *(int *)(in_ECX + 0x128)) {
    (**(code **)(*param_1 + 4))
              ("AgentPtr",8,*(undefined4 *)(in_ECX + 0x120),*(int *)(in_ECX + 0x124) << 3,
               *(int *)(in_ECX + 0x128) << 3);
  }
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x124)) {
    do {
      (**(code **)(*param_1 + 8))("Agent",8,*(undefined4 *)(*(int *)(in_ECX + 0x120) + iVar1 * 8));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x124));
  }
  (**(code **)(*param_1 + 0x14))();
  return;
}



void FUN_0090f950(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x124) == 0) {
    if (-1 < *(int *)(in_ECX + 0x128)) {
      FUN_008a75d0(*(undefined4 *)(in_ECX + 0x120),*(int *)(in_ECX + 0x128) << 3,0x14);
    }
    *(undefined4 *)(in_ECX + 0x120) = 0;
    *(undefined4 *)(in_ECX + 0x124) = 0;
    *(uint *)(in_ECX + 0x128) = *(uint *)(in_ECX + 0x128) & 0xc0000000 | 0x80000000;
  }
  thunk_FUN_008de800();
  return;
}



void FUN_0090f9d0(byte param_1)

{
  FUN_0090f5c0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0090fa70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_008e7b70(param_1,param_2,param_3);
  *in_ECX = &PTR_FUN_00a9cb30;
  in_ECX[0x14] = 0x3f800000;
  in_ECX[0x15] = 0x447a0000;
  in_ECX[0x16] = 0x3dcccccd;
  *(undefined1 *)(in_ECX + 0x17) = 1;
  *(undefined1 *)((int)in_ECX + 0x5d) = 1;
  return;
}



void FUN_0090fac0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  iVar1 = *(int *)(in_ECX + 0x1c);
  *(undefined4 *)(in_ECX + 0x30) = *param_1;
  *(undefined4 *)(in_ECX + 0x34) = uVar2;
  *(undefined4 *)(in_ECX + 0x38) = uVar3;
  *(undefined4 *)(in_ECX + 0x3c) = uVar4;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(in_ECX + 0x40) = *param_2;
  *(undefined4 *)(in_ECX + 0x44) = uVar2;
  *(undefined4 *)(in_ECX + 0x48) = uVar3;
  *(undefined4 *)(in_ECX + 0x4c) = uVar4;
  FUN_0088fcc0(*(int *)(*(int *)(in_ECX + 0x18) + 0x50) + 0x10,param_1);
  FUN_0088fcc0(*(int *)(iVar1 + 0x50) + 0x10,param_2);
  *(float *)(in_ECX + 0x50) =
       SQRT((fStack_18 - fStack_28) * (fStack_18 - fStack_28) +
            (fStack_1c - fStack_2c) * (fStack_1c - fStack_2c) +
            (local_20 - local_30) * (local_20 - local_30));
  return;
}



void FUN_0090fb60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  float *pfVar4;
  float fVar5;
  float fStack_74;
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
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  iVar2 = *(int *)(in_ECX + 0x18);
  FUN_0088fcc0(*(int *)(iVar2 + 0x50) + 0x10,in_ECX + 0x30);
  FUN_0088fcc0(*(int *)(iVar1 + 0x50) + 0x10,in_ECX + 0x40);
  local_60 = local_60 - local_50;
  fStack_5c = fStack_5c - fStack_4c;
  fStack_58 = fStack_58 - fStack_48;
  fVar5 = SQRT(fStack_58 * fStack_58 + fStack_5c * fStack_5c + local_60 * local_60);
  if (0.001 <= fVar5) {
    fStack_34 = 1.0 / fVar5;
    local_40 = fStack_34 * local_60;
    fStack_3c = fStack_34 * fStack_5c;
    fStack_38 = fStack_34 * fStack_58;
    fStack_34 = fStack_34 * (fStack_54 - fStack_44);
    if (((*(char *)(in_ECX + 0x5c) != '\0') || (*(float *)(in_ECX + 0x50) <= fVar5)) &&
       ((*(char *)(in_ECX + 0x5d) != '\0' || (fVar5 <= *(float *)(in_ECX + 0x50))))) {
      FUN_008abce0(&local_50,&local_30);
      FUN_008abce0(&local_60,&local_20);
      pfVar4 = (float *)(in_ECX + 0x20);
      fVar5 = -(((fStack_18 - fStack_28) * fStack_38 +
                (fStack_1c - fStack_2c) * fStack_3c + (local_20 - local_30) * local_40) *
                *(float *)(in_ECX + 0x58) +
               (fVar5 - *(float *)(in_ECX + 0x50)) * *(float *)(in_ECX + 0x54));
      *pfVar4 = fVar5 * local_40;
      *(float *)(in_ECX + 0x24) = fVar5 * fStack_3c;
      *(float *)(in_ECX + 0x28) = fVar5 * fStack_38;
      *(float *)(in_ECX + 0x2c) = fVar5 * fStack_34;
      uVar3 = *(undefined4 *)(param_1 + 8);
      FUN_008a6410();
      (**(code **)(**(int **)(iVar1 + 0x50) + 0x68))(uVar3,pfVar4,&local_60);
      *pfVar4 = fStack_74 * fStack_4c;
      *(float *)(in_ECX + 0x24) = fStack_74 * fStack_48;
      *(float *)(in_ECX + 0x28) = fStack_74 * fStack_44;
      *(float *)(in_ECX + 0x2c) = fStack_74 * local_40;
      uVar3 = *(undefined4 *)(param_1 + 8);
      FUN_008a6410();
      (**(code **)(**(int **)(iVar2 + 0x50) + 0x68))(uVar3,pfVar4,&fStack_5c);
    }
  }
  return;
}



void FUN_0090fdf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_008e7b70(param_1,param_2,param_3);
  *in_ECX = &PTR_FUN_00a9cb64;
  in_ECX[0xc] = 0x3dcccccd;
  in_ECX[0xd] = 0x3c23d70a;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xb] = 0x3f800000;
  return;
}



void FUN_0090fe40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int in_ECX;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_44;
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
  
  local_44 = *(float *)(param_1 + 8) * 200.0;
  iVar1 = *(int *)(in_ECX + 0x1c);
  iVar2 = *(int *)(in_ECX + 0x18);
  FUN_00889470(*(int *)(iVar1 + 0x50) + 0x80,in_ECX + 0x20);
  local_20 = -local_30;
  fStack_1c = -fStack_2c;
  fStack_18 = -fStack_28;
  fStack_14 = fStack_24;
  FUN_00889470(*(int *)(iVar2 + 0x50) + 0x80,&local_20);
  iVar3 = *(int *)(iVar1 + 0x50);
  iVar4 = *(int *)(iVar2 + 0x50);
  local_20 = *(float *)(iVar4 + 0xe0) - *(float *)(iVar3 + 0xe0);
  fStack_1c = *(float *)(iVar4 + 0xe4) - *(float *)(iVar3 + 0xe4);
  fStack_18 = *(float *)(iVar4 + 0xe8) - *(float *)(iVar3 + 0xe8);
  fStack_14 = *(float *)(iVar4 + 0xec) - *(float *)(iVar3 + 0xec);
  if (ABS(ABS(fStack_24)) < 1.0) {
    fVar6 = (float10)FUN_00986130();
  }
  else if (ABS(fStack_24) <= 0.0) {
    fVar6 = (float10)3.1415927;
  }
  else {
    fVar6 = (float10)0.0;
  }
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  if ((float10)0.001 < ABS(fVar6 + fVar6)) {
    fVar10 = (float)(fVar6 + fVar6);
    fVar7 = fVar10 * local_30;
    fVar8 = fVar10 * fStack_2c;
    fVar9 = fVar10 * fStack_28;
    fVar10 = fVar10 * fStack_24;
  }
  fVar5 = local_44 * *(float *)(in_ECX + 0x30);
  local_44 = local_44 * *(float *)(in_ECX + 0x34);
  local_40 = fVar5 * fVar7 + local_44 * local_20;
  fStack_3c = fVar5 * fVar8 + local_44 * fStack_1c;
  fStack_38 = fVar5 * fVar9 + local_44 * fStack_18;
  fStack_34 = fVar5 * fVar10 + local_44 * fStack_14;
  FUN_008a6410();
  (**(code **)(**(int **)(iVar1 + 0x50) + 100))(&local_40);
  local_44 = -local_44;
  local_40 = -local_40;
  fStack_3c = -fStack_3c;
  fStack_38 = -fStack_38;
  FUN_008a6410();
  (**(code **)(**(int **)(iVar2 + 0x50) + 100))(&local_44);
  return;
}


