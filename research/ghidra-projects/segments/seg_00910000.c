
void FUN_00910040(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_008e7b70(param_1,param_2,param_3);
  *in_ECX = &PTR_FUN_00a9cba0;
  in_ECX[0x10] = 0x3dcccccd;
  in_ECX[0x11] = 0x3c23d70a;
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



void FUN_00910090(int param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
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
  int unaff_FS_OFFSET;
  int local_48;
  int local_44;
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
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtDashpot";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *(int *)(in_ECX + 0x18);
  fVar6 = *(float *)(param_1 + 8) * 151.0;
  iVar4 = *(int *)(in_ECX + 0x1c);
  local_44 = iVar4;
  FUN_0088fcc0(*(int *)(iVar2 + 0x50) + 0x10,in_ECX + 0x20);
  local_48 = *(int *)(iVar2 + 0x50);
  FUN_0088fcc0(*(int *)(iVar4 + 0x50) + 0x10,in_ECX + 0x30);
  fVar7 = fVar6 * *(float *)(in_ECX + 0x40);
  iVar4 = *(int *)(iVar4 + 0x50);
  fVar9 = *(float *)(iVar4 + 0xd0);
  fVar10 = *(float *)(iVar4 + 0xd4);
  fVar11 = *(float *)(iVar4 + 0xd8);
  fVar12 = *(float *)(iVar4 + 0xdc);
  fVar13 = *(float *)(local_48 + 0xd0);
  fVar14 = *(float *)(local_48 + 0xd4);
  fVar15 = *(float *)(local_48 + 0xd8);
  fVar16 = *(float *)(local_48 + 0xdc);
  fVar8 = fVar6 * *(float *)(in_ECX + 0x44);
  *(float *)(in_ECX + 0x50) = fVar7 * (local_30 - local_40);
  *(float *)(in_ECX + 0x54) = fVar7 * (fStack_2c - fStack_3c);
  *(float *)(in_ECX + 0x58) = fVar7 * (fStack_28 - fStack_38);
  *(float *)(in_ECX + 0x5c) = fVar7 * (fStack_24 - fStack_34);
  pfVar1 = (float *)(in_ECX + 0x50);
  *pfVar1 = *pfVar1 + fVar8 * (fVar13 - fVar9);
  *(float *)(in_ECX + 0x54) = *(float *)(in_ECX + 0x54) + fVar8 * (fVar14 - fVar10);
  *(float *)(in_ECX + 0x58) = *(float *)(in_ECX + 0x58) + fVar8 * (fVar15 - fVar11);
  *(float *)(in_ECX + 0x5c) = *(float *)(in_ECX + 0x5c) + fVar8 * (fVar16 - fVar12);
  local_48 = -0x40800000;
  local_20 = *pfVar1 * -1.0;
  fStack_1c = *(float *)(in_ECX + 0x54) * -1.0;
  fStack_18 = *(float *)(in_ECX + 0x58) * -1.0;
  fStack_14 = *(float *)(in_ECX + 0x5c) * -1.0;
  FUN_008a6410();
  (**(code **)(**(int **)(iVar2 + 0x50) + 0x60))(&local_20,&local_30);
  FUN_008a6410();
  (**(code **)(**(int **)((int)fVar6 + 0x50) + 0x60))(pfVar1,&local_48);
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



void FUN_00910240(byte param_1)

{
  FUN_008e7c70();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00910330(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  float local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  undefined1 auStack_44 [4];
  undefined1 local_40 [60];
  
  if (*(char *)(in_ECX + 0x38) != '\0') {
    iVar2 = *(int *)(in_ECX + 0x18);
    iVar1 = *(int *)(iVar2 + 0x50) + 0x10;
    FUN_0088fd90(iVar1,*(int *)(iVar2 + 0x50) + 0xe0);
    local_64 = (*(float *)(in_ECX + 0x30) -
               (*(float *)(in_ECX + 0x28) * fStack_48 +
               *(float *)(in_ECX + 0x24) * fStack_4c + *(float *)(in_ECX + 0x20) * local_50)) *
               *(float *)(in_ECX + 0x34);
    local_60 = local_64 * *(float *)(in_ECX + 0x20);
    fStack_5c = local_64 * *(float *)(in_ECX + 0x24);
    fStack_58 = local_64 * *(float *)(in_ECX + 0x28);
    fStack_54 = local_64 * *(float *)(in_ECX + 0x2c);
    (**(code **)(**(int **)(iVar2 + 0x50) + 0x28))(local_40);
    FUN_0088fe00(auStack_44,&local_64);
    FUN_0088fe00(iVar1,&local_64);
    uVar3 = *(undefined4 *)(param_1 + 8);
    FUN_008a6410();
    (**(code **)(**(int **)(iVar2 + 0x50) + 0x70))(uVar3,&local_64);
  }
  return;
}



void FUN_009104b0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_008f0f70(param_1,param_2,0,0);
  FUN_008f0f20(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14),param_2);
  (**(code **)(**(int **)(in_ECX + 0xc) + 0x1c))(param_1,param_2);
  FUN_008f0f70(param_1,param_2,0,0);
  FUN_008f0f50(param_2);
  return;
}



void FUN_00910520(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[3];
  *in_ECX = &PTR_FUN_00a98750;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_009105c0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[3];
  *in_ECX = &PTR_FUN_00a98870;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_009105f0(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int unaff_EBX;
  undefined4 unaff_retaddr;
  undefined1 local_c [12];
  
  iVar2 = *(int *)(param_1 + 0x28);
  (**(code **)(**(int **)(in_ECX + 0xc) + 0x10))(1,local_c);
  if (*(char *)(in_ECX + 0x18) == '\0') {
    fVar3 = 0.0;
    iVar6 = 0;
    if (3 < unaff_EBX) {
      iVar5 = (unaff_EBX - 4U >> 2) + 1;
      iVar6 = iVar5 * 4;
      pfVar4 = (float *)(iVar2 + 0x10);
      do {
        iVar5 = iVar5 + -1;
        fVar3 = pfVar4[2] * pfVar4[2] +
                *pfVar4 * *pfVar4 + pfVar4[-2] * pfVar4[-2] + pfVar4[-4] * pfVar4[-4] + fVar3;
        pfVar4 = pfVar4 + 8;
      } while (iVar5 != 0);
    }
    for (; iVar6 < unaff_EBX; iVar6 = iVar6 + 1) {
      fVar1 = *(float *)(iVar2 + iVar6 * 8);
      fVar3 = fVar1 * fVar1 + fVar3;
    }
    if (*(float *)(in_ECX + 0x14) * *(float *)(in_ECX + 0x14) < fVar3) {
      *(undefined1 *)(in_ECX + 0x18) = 1;
      if (*(undefined4 **)(in_ECX + 0x1c) != (undefined4 *)0x0) {
        local_c[0] = *(undefined1 *)(in_ECX + 0x19);
        (**(code **)**(undefined4 **)(in_ECX + 0x1c))(&stack0xffffffec);
      }
    }
    if (*(char *)(in_ECX + 0x18) == '\0') {
      (**(code **)(**(int **)(in_ECX + 0xc) + 0x1c))(param_1,unaff_retaddr);
      goto LAB_0091070a;
    }
  }
  FUN_008f0f70(param_1,unaff_retaddr,0,8);
  if (*(char *)(in_ECX + 0x19) != '\0') {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x24) + 8) + 8))(*(int *)(param_1 + 0x24));
    *(undefined1 *)(in_ECX + 0x18) = *(undefined1 *)(in_ECX + 0x1a);
  }
LAB_0091070a:
  iVar6 = 0;
  if (0 < unaff_EBX) {
    do {
      *(undefined4 *)(iVar2 + iVar6 * 8) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < unaff_EBX);
  }
  return;
}



void FUN_009107c0(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a9cc30;
  in_ECX[0x24] = 0xbf000000;
  in_ECX[0x25] = 0x3f000000;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
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
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
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



void FUN_00910820(undefined1 *param_1)

{
  char *pcVar1;
  int in_ECX;
  undefined1 local_15;
  float local_14;
  
  if ((((ABS(ABS(*(float *)(in_ECX + 0x68) * *(float *)(in_ECX + 0x78) +
                 *(float *)(in_ECX + 100) * *(float *)(in_ECX + 0x74) +
                 *(float *)(in_ECX + 0x60) * *(float *)(in_ECX + 0x70))) < 1e-05) &&
       (ABS(ABS(*(float *)(in_ECX + 0x48) * *(float *)(in_ECX + 0x58) +
                *(float *)(in_ECX + 0x44) * *(float *)(in_ECX + 0x54) +
                *(float *)(in_ECX + 0x40) * *(float *)(in_ECX + 0x50))) < 1e-05)) &&
      (ABS((*(float *)(in_ECX + 0x78) * *(float *)(in_ECX + 0x78) +
           *(float *)(in_ECX + 0x74) * *(float *)(in_ECX + 0x74) +
           *(float *)(in_ECX + 0x70) * *(float *)(in_ECX + 0x70)) - 1.0) < 1e-05)) &&
     ((ABS((*(float *)(in_ECX + 0x48) * *(float *)(in_ECX + 0x48) +
           *(float *)(in_ECX + 0x44) * *(float *)(in_ECX + 0x44) +
           *(float *)(in_ECX + 0x40) * *(float *)(in_ECX + 0x40)) - 1.0) < 1e-05 &&
      (ABS((*(float *)(in_ECX + 0x68) * *(float *)(in_ECX + 0x68) +
           *(float *)(in_ECX + 100) * *(float *)(in_ECX + 100) +
           *(float *)(in_ECX + 0x60) * *(float *)(in_ECX + 0x60)) - 1.0) < 1e-05)))) {
    local_14 = *(float *)(in_ECX + 0x28) * *(float *)(in_ECX + 0x28) +
               *(float *)(in_ECX + 0x24) * *(float *)(in_ECX + 0x24) +
               *(float *)(in_ECX + 0x20) * *(float *)(in_ECX + 0x20);
    pcVar1 = (char *)FUN_008b1ee0(&local_15,local_14,0x3f800000,0x3727c5ac);
    if (*pcVar1 != '\0') {
      local_14 = *(float *)(in_ECX + 0x88) * *(float *)(in_ECX + 0x88) +
                 *(float *)(in_ECX + 0x84) * *(float *)(in_ECX + 0x84) +
                 *(float *)(in_ECX + 0x80) * *(float *)(in_ECX + 0x80);
      pcVar1 = (char *)FUN_008b1ee0(&local_15,local_14,0x3f800000,0x3727c5ac);
      if ((*pcVar1 != '\0') && (*(float *)(in_ECX + 0x90) <= *(float *)(in_ECX + 0x94))) {
        *param_1 = 1;
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}



void FUN_00910a40(int param_1,undefined4 param_2)

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
  float *pfVar15;
  int in_ECX;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_d4;
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
  undefined4 local_a0;
  undefined4 local_9c;
  float local_90 [7];
  float fStack_74;
  float local_70 [7];
  float fStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  FUN_008f0f70(param_1,param_2,*(undefined4 *)(param_1 + 0x28),8);
  pfVar2 = *(float **)(param_1 + 0x1c);
  fVar19 = *pfVar2;
  fVar17 = pfVar2[1];
  fVar18 = pfVar2[2];
  fVar3 = pfVar2[3];
  fVar4 = pfVar2[4];
  fVar5 = pfVar2[5];
  fVar6 = pfVar2[6];
  fVar7 = pfVar2[7];
  fVar8 = pfVar2[8];
  fVar9 = pfVar2[9];
  fVar10 = pfVar2[10];
  fVar11 = pfVar2[0xb];
  pfVar15 = (float *)(in_ECX + 0x10);
  iVar16 = (int)local_90 - (int)pfVar15;
  local_d4 = 2;
  do {
    fVar12 = *pfVar15;
    fVar13 = pfVar15[1];
    fVar14 = pfVar15[2];
    pfVar1 = (float *)(iVar16 + (int)pfVar15);
    *pfVar1 = fVar19 * fVar12 + fVar4 * fVar13 + fVar8 * fVar14;
    pfVar1[1] = fVar17 * fVar12 + fVar5 * fVar13 + fVar9 * fVar14;
    pfVar1[2] = fVar18 * fVar12 + fVar6 * fVar13 + fVar10 * fVar14;
    pfVar1[3] = fVar3 * fVar12 + fVar7 * fVar13 + fVar11 * fVar14;
    pfVar15 = pfVar15 + 4;
    local_d4 = local_d4 + -1;
  } while (local_d4 != 0);
  pfVar1 = *(float **)(param_1 + 0x20);
  fVar19 = pfVar1[4];
  fVar17 = pfVar1[5];
  fVar18 = pfVar1[6];
  fVar3 = pfVar1[7];
  fVar4 = pfVar1[8];
  fVar5 = pfVar1[9];
  fVar6 = pfVar1[10];
  fVar7 = pfVar1[0xb];
  pfVar15 = (float *)(in_ECX + 0x30);
  local_90[0] = local_90[0] + pfVar2[0xc];
  local_90[1] = local_90[1] + pfVar2[0xd];
  local_90[2] = local_90[2] + pfVar2[0xe];
  local_90[3] = local_90[3] + pfVar2[0xf];
  fVar8 = *pfVar1;
  fVar9 = pfVar1[1];
  fVar10 = pfVar1[2];
  fVar11 = pfVar1[3];
  iVar16 = (int)local_70 - (int)pfVar15;
  local_d4 = 6;
  do {
    fVar12 = *pfVar15;
    fVar13 = pfVar15[1];
    fVar14 = pfVar15[2];
    pfVar2 = (float *)(iVar16 + (int)pfVar15);
    *pfVar2 = fVar8 * fVar12 + fVar19 * fVar13 + fVar4 * fVar14;
    pfVar2[1] = fVar9 * fVar12 + fVar17 * fVar13 + fVar5 * fVar14;
    pfVar2[2] = fVar10 * fVar12 + fVar18 * fVar13 + fVar6 * fVar14;
    pfVar2[3] = fVar11 * fVar12 + fVar3 * fVar13 + fVar7 * fVar14;
    pfVar15 = pfVar15 + 4;
    local_d4 = local_d4 + -1;
  } while (local_d4 != 0);
  local_70[0] = local_70[0] + pfVar1[0xc];
  local_70[1] = local_70[1] + pfVar1[0xd];
  local_70[2] = local_70[2] + pfVar1[0xe];
  local_70[3] = local_70[3] + pfVar1[0xf];
  local_c0 = local_90[5] * local_70[6] - local_90[6] * local_70[5];
  fStack_bc = local_90[6] * local_70[4] - local_90[4] * local_70[6];
  fStack_b8 = local_90[4] * local_70[5] - local_90[5] * local_70[4];
  fStack_b4 = fStack_74 * fStack_54 - fStack_74 * fStack_54;
  local_d0 = local_90[4];
  fStack_cc = local_90[5];
  fStack_c8 = local_90[6];
  fStack_c4 = fStack_74;
  local_b0 = local_70[4];
  fStack_ac = local_70[5];
  fStack_a8 = local_70[6];
  fStack_a4 = fStack_54;
  FUN_008f1310(&local_d0,param_1,param_2);
  local_c0 = -local_70[4];
  fStack_bc = -local_70[5];
  fStack_b8 = -local_70[6];
  fStack_b4 = -fStack_54;
  local_d0 = local_90[4];
  fStack_cc = local_90[5];
  fStack_c8 = local_90[6];
  fStack_c4 = fStack_74;
  local_b0 = (float)local_50;
  fStack_ac = (float)uStack_4c;
  fStack_a8 = (float)uStack_48;
  fStack_a4 = (float)uStack_44;
  FUN_008f1310(&local_d0,param_1,param_2);
  fVar19 = (local_90[2] - local_70[2]) * fStack_38 +
           (local_90[1] - local_70[1]) * fStack_3c + (local_90[0] - local_70[0]) * local_40;
  local_d0 = local_90[0];
  fStack_cc = local_90[1];
  fStack_c8 = local_90[2];
  fStack_c4 = local_90[3];
  local_c0 = local_70[0] + fVar19 * local_40;
  fStack_bc = local_70[1] + fVar19 * fStack_3c;
  fStack_b8 = local_70[2] + fVar19 * fStack_38;
  fStack_b4 = local_70[3] + fVar19 * fStack_34;
  local_b0 = local_30;
  fStack_ac = fStack_2c;
  fStack_a8 = fStack_28;
  fStack_a4 = fStack_24;
  FUN_008f1790(&local_d0,param_1,param_2);
  fVar18 = fStack_3c * local_b0;
  fVar19 = fStack_38 * local_b0;
  fVar17 = local_40 * fStack_ac;
  local_b0 = fStack_3c * fStack_a8 - fStack_38 * fStack_ac;
  fStack_ac = fVar19 - local_40 * fStack_a8;
  fStack_a8 = fVar17 - fVar18;
  fStack_a4 = fStack_34 * fStack_a4 - fStack_34 * fStack_a4;
  FUN_008f1790(&local_d0,param_1,param_2);
  local_a0 = *(undefined4 *)(in_ECX + 0x90);
  local_9c = *(undefined4 *)(in_ECX + 0x94);
  local_d0 = local_90[0];
  fStack_cc = local_90[1];
  fStack_c8 = local_90[2];
  fStack_c4 = local_90[3];
  local_c0 = local_70[0];
  fStack_bc = local_70[1];
  fStack_b8 = local_70[2];
  fStack_b4 = local_70[3];
  local_b0 = local_40;
  fStack_ac = fStack_3c;
  fStack_a8 = fStack_38;
  fStack_a4 = fStack_34;
  FUN_008f1970(&local_d0,param_1,param_2);
  FUN_008f0f20(*(undefined4 *)(in_ECX + 0x98),*(undefined4 *)(in_ECX + 0x9c),param_2);
  local_d0 = local_90[0];
  fStack_cc = local_90[1];
  fStack_c8 = local_90[2];
  fStack_c4 = local_90[3];
  local_c0 = local_70[0];
  fStack_bc = local_70[1];
  fStack_b8 = local_70[2];
  fStack_b4 = local_70[3];
  local_b0 = local_40;
  fStack_ac = fStack_3c;
  fStack_a8 = fStack_38;
  fStack_a4 = fStack_34;
  FUN_008f1790(&local_d0,param_1,param_2);
  FUN_008f0f50(param_2);
  return;
}



void FUN_00910e00(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a9cc6c;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  return;
}



void FUN_00910e30(int param_1,undefined4 param_2)

{
  int in_ECX;
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float local_54;
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
  
  FUN_008f0f70(param_1,param_2,*(undefined4 *)(param_1 + 0x28),8);
  FUN_0088fcc0(*(undefined4 *)(param_1 + 0x1c),in_ECX + 0x10);
  FUN_0088fcc0(*(undefined4 *)(param_1 + 0x20),in_ECX + 0x20);
  local_40 = local_40 - local_30;
  fStack_3c = fStack_3c - fStack_2c;
  fStack_38 = fStack_38 - fStack_28;
  fVar1 = fStack_3c * fStack_3c;
  fVar2 = fStack_38 * fStack_38;
  auVar3._4_4_ = fVar1;
  auVar3._0_4_ = fVar1;
  auVar3._8_4_ = fVar1;
  auVar3._12_4_ = fVar1;
  auVar4._4_12_ = auVar3._4_12_;
  auVar4._0_4_ = fVar1 + local_40 * local_40;
  local_54 = fVar2 + auVar4._0_4_;
  auVar5._4_4_ = fVar2;
  auVar5._0_4_ = local_54;
  auVar5._8_4_ = fVar2;
  auVar5._12_4_ = fVar2;
  auVar5 = rsqrtss(auVar4,auVar5);
  fVar1 = auVar5._0_4_;
  fStack_14 = fVar1 * 0.5 * (3.0 - local_54 * fVar1 * fVar1);
  local_54 = local_54 * fStack_14;
  if (local_54 <= 0.0) {
    local_20 = DAT_00b2f090;
    fStack_1c = DAT_00b2f094;
    fStack_18 = DAT_00b2f098;
    fStack_14 = DAT_00b2f09c;
    local_54 = 0.0;
  }
  else {
    local_20 = fStack_14 * local_40;
    fStack_1c = fStack_14 * fStack_3c;
    fStack_18 = fStack_14 * fStack_38;
    fStack_14 = fStack_14 * (fStack_34 - fStack_24);
  }
  FUN_008f1790(&local_40,param_1,param_2);
  FUN_008f0ef0(*(float *)(in_ECX + 0xc) - local_54,param_1,param_2,1);
  return;
}



float10 FUN_00910fc0(float param_1)

{
  float10 fVar1;
  
  if (ABS(param_1) < 1.0) {
    fVar1 = (float10)FUN_00985870();
    return fVar1;
  }
  if (0.0 < param_1) {
    return (float10)1.5707964;
  }
  return (float10)-1.5707964;
}



void FUN_00911000(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a9ccb8;
  in_ECX[0x1c] = 0x3f800000;
  in_ECX[0x1d] = 0xbccccccd;
  in_ECX[0x1e] = 0x3ccccccd;
  in_ECX[0x1f] = 0xbf060aa6;
  in_ECX[0x20] = 0x3f060aa6;
  in_ECX[0x21] = 0;
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
  *(undefined1 *)(in_ECX + 3) = 1;
  return;
}



void FUN_00911060(float *param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5
                 )

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int in_ECX;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = *param_1;
  fVar8 = param_1[1];
  fVar9 = param_1[2];
  fVar12 = param_1[3];
  fVar11 = fVar8 * fVar5 - fVar9 * fVar4;
  fVar13 = fVar9 * fVar3 - fVar7 * fVar5;
  fVar14 = fVar7 * fVar4 - fVar8 * fVar3;
  fVar16 = *(float *)(in_ECX + 0x70);
  fVar15 = fVar14 * fVar14 + fVar13 * fVar13 + fVar11 * fVar11;
  if (1.1920929e-07 <= fVar15) {
    fVar15 = SQRT(fVar15);
    fVar10 = (float10)FUN_008ecbb0(fVar15,fVar9 * fVar5 + fVar8 * fVar4 + fVar7 * fVar3);
    fStack_24 = 1.0 / fVar15;
    local_1c = 0x42c80000;
    local_18 = (float)-fVar10;
    local_30 = fStack_24 * fVar11;
    fStack_2c = fStack_24 * fVar13;
    fStack_28 = fStack_24 * fVar14;
    fStack_24 = fStack_24 * (fVar12 * fVar6 - fVar12 * fVar6);
    local_20 = -fVar16;
    FUN_008f1b60(&local_30,param_4,param_5);
  }
  fVar15 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  fVar6 = *param_3;
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  uVar1 = *(undefined4 *)(in_ECX + 0x78);
  uVar2 = *(undefined4 *)(in_ECX + 0x74);
  fVar12 = fVar3 * fVar8 - fVar4 * fVar7;
  fVar11 = fVar4 * fVar6 - fVar15 * fVar8;
  fVar13 = fVar15 * fVar7 - fVar3 * fVar6;
  fVar16 = fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12;
  if (1.1920929e-07 <= fVar16) {
    fVar16 = SQRT(fVar16);
    fVar10 = (float10)FUN_008ecbb0(fVar4 * fVar8 + fVar3 * fVar7 + fVar15 * fVar6,fVar16);
    fStack_24 = 1.0 / fVar16;
    local_18 = (float)fVar10;
    local_30 = fStack_24 * fVar12;
    fStack_2c = fStack_24 * fVar11;
    fStack_28 = fStack_24 * fVar13;
    fStack_24 = fStack_24 * (fVar5 * fVar9 - fVar5 * fVar9);
    local_20 = (float)uVar2;
    local_1c = uVar1;
    FUN_008f1b60(&local_30,param_4,param_5);
  }
  return;
}



void FUN_00911280(undefined1 *param_1)

{
  int in_ECX;
  
  if ((((ABS((*(float *)(in_ECX + 0x28) * *(float *)(in_ECX + 0x28) +
             *(float *)(in_ECX + 0x24) * *(float *)(in_ECX + 0x24) +
             *(float *)(in_ECX + 0x20) * *(float *)(in_ECX + 0x20)) - 1.0) < 1e-05) &&
       (ABS((*(float *)(in_ECX + 0x58) * *(float *)(in_ECX + 0x58) +
            *(float *)(in_ECX + 0x54) * *(float *)(in_ECX + 0x54) +
            *(float *)(in_ECX + 0x50) * *(float *)(in_ECX + 0x50)) - 1.0) < 1e-05)) &&
      (ABS((*(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x38) +
           *(float *)(in_ECX + 0x34) * *(float *)(in_ECX + 0x34) +
           *(float *)(in_ECX + 0x30) * *(float *)(in_ECX + 0x30)) - 1.0) < 1e-05)) &&
     (((ABS((*(float *)(in_ECX + 0x68) * *(float *)(in_ECX + 0x68) +
            *(float *)(in_ECX + 100) * *(float *)(in_ECX + 100) +
            *(float *)(in_ECX + 0x60) * *(float *)(in_ECX + 0x60)) - 1.0) < 1e-05 &&
       (ABS(*(float *)(in_ECX + 0x70)) <= 1.0)) &&
      ((*(float *)(in_ECX + 0x74) <= *(float *)(in_ECX + 0x78) &&
       (*(float *)(in_ECX + 0x7c) <= *(float *)(in_ECX + 0x80))))))) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}



void FUN_009113d0(int param_1)

{
  undefined4 *in_ECX;
  float10 fVar1;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a9ccb8;
  if ((param_1 != 0) && (*(char *)(in_ECX + 3) == '\0')) {
    *(undefined1 *)(in_ECX + 3) = 1;
    fVar1 = (float10)FUN_008a2af0(in_ECX[0x1c]);
    in_ECX[0x1c] = (float)fVar1;
    fVar1 = (float10)FUN_00910fc0(in_ECX[0x1e]);
    in_ECX[0x1e] = (float)fVar1;
    fVar1 = (float10)FUN_00910fc0(in_ECX[0x1d]);
    in_ECX[0x1d] = (float)fVar1;
  }
  return;
}



void FUN_00911480(int param_1,undefined4 param_2)

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
  float *pfVar15;
  int in_ECX;
  int iVar16;
  int iVar17;
  float10 fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_70 [8];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40 [8];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if ((DAT_00ba8350 == '\0') && (DAT_00ba8350 = FUN_009246e0(1), DAT_00ba8350 == '\0')) {
    return;
  }
  FUN_008f0f70(param_1,param_2,*(undefined4 *)(param_1 + 0x28),8);
  pfVar2 = *(float **)(param_1 + 0x1c);
  fVar19 = *pfVar2;
  fVar20 = pfVar2[1];
  fVar21 = pfVar2[2];
  fVar3 = pfVar2[3];
  fVar4 = pfVar2[4];
  fVar5 = pfVar2[5];
  fVar6 = pfVar2[6];
  fVar7 = pfVar2[7];
  fVar8 = pfVar2[8];
  fVar9 = pfVar2[9];
  fVar10 = pfVar2[10];
  fVar11 = pfVar2[0xb];
  pfVar15 = (float *)(in_ECX + 0x10);
  iVar16 = (int)local_40 - (int)pfVar15;
  iVar17 = 3;
  do {
    fVar12 = *pfVar15;
    fVar13 = pfVar15[1];
    fVar14 = pfVar15[2];
    pfVar1 = (float *)(iVar16 + (int)pfVar15);
    *pfVar1 = fVar19 * fVar12 + fVar4 * fVar13 + fVar8 * fVar14;
    pfVar1[1] = fVar20 * fVar12 + fVar5 * fVar13 + fVar9 * fVar14;
    pfVar1[2] = fVar21 * fVar12 + fVar6 * fVar13 + fVar10 * fVar14;
    pfVar1[3] = fVar3 * fVar12 + fVar7 * fVar13 + fVar11 * fVar14;
    pfVar15 = pfVar15 + 4;
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  pfVar1 = *(float **)(param_1 + 0x20);
  local_40[0] = local_40[0] + pfVar2[0xc];
  local_40[1] = local_40[1] + pfVar2[0xd];
  local_40[2] = local_40[2] + pfVar2[0xe];
  local_40[3] = local_40[3] + pfVar2[0xf];
  fVar19 = *pfVar1;
  fVar20 = pfVar1[1];
  fVar21 = pfVar1[2];
  fVar3 = pfVar1[3];
  fVar4 = pfVar1[4];
  fVar5 = pfVar1[5];
  fVar6 = pfVar1[6];
  fVar7 = pfVar1[7];
  fVar8 = pfVar1[8];
  fVar9 = pfVar1[9];
  fVar10 = pfVar1[10];
  fVar11 = pfVar1[0xb];
  pfVar15 = (float *)(in_ECX + 0x40);
  iVar16 = (int)local_70 - (int)pfVar15;
  iVar17 = 3;
  do {
    fVar12 = *pfVar15;
    fVar13 = pfVar15[1];
    fVar14 = pfVar15[2];
    pfVar2 = (float *)(iVar16 + (int)pfVar15);
    *pfVar2 = fVar19 * fVar12 + fVar4 * fVar13 + fVar8 * fVar14;
    pfVar2[1] = fVar20 * fVar12 + fVar5 * fVar13 + fVar9 * fVar14;
    pfVar2[2] = fVar21 * fVar12 + fVar6 * fVar13 + fVar10 * fVar14;
    pfVar2[3] = fVar3 * fVar12 + fVar7 * fVar13 + fVar11 * fVar14;
    pfVar15 = pfVar15 + 4;
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  local_70[0] = local_70[0] + pfVar1[0xc];
  local_70[1] = local_70[1] + pfVar1[0xd];
  local_70[2] = local_70[2] + pfVar1[0xe];
  local_70[3] = local_70[3] + pfVar1[0xf];
  FUN_00911060(&local_20,&local_50,local_70 + 4,param_1,param_2);
  local_7c = *(undefined4 *)(in_ECX + 0x80);
  local_80 = *(undefined4 *)(in_ECX + 0x7c);
  local_90 = local_20;
  fStack_8c = fStack_1c;
  fStack_88 = fStack_18;
  fStack_84 = fStack_14;
  local_20 = local_50 + local_20;
  fStack_1c = fStack_4c + fStack_1c;
  fStack_18 = fStack_48 + fStack_18;
  fStack_a4 = SQRT(fStack_18 * fStack_18 + fStack_1c * fStack_1c + local_20 * local_20);
  if (fStack_a4 <= 1e-16) {
    fStack_a4 = fStack_44;
  }
  else {
    fStack_a4 = 1.0 / fStack_a4;
    local_50 = fStack_a4 * local_20;
    fStack_4c = fStack_a4 * fStack_1c;
    fStack_48 = fStack_a4 * fStack_18;
    fStack_a4 = fStack_a4 * (fStack_44 + fStack_14);
  }
  fVar19 = fStack_4c * local_70[6] - fStack_48 * local_70[5];
  fVar20 = fStack_48 * local_70[4] - local_50 * local_70[6];
  fVar21 = local_50 * local_70[5] - fStack_4c * local_70[4];
  local_94 = fVar21 * local_40[6] + fVar20 * local_40[5] + fVar19 * local_40[4];
  local_b0 = local_50;
  fStack_ac = fStack_4c;
  fStack_a8 = fStack_48;
  fVar18 = (float10)FUN_008ecbb0(local_94,(fVar19 * fStack_4c - fVar20 * local_50) * local_40[6] +
                                          (fVar21 * local_50 - fVar19 * fStack_48) * local_40[5] +
                                          (fVar20 * fStack_48 - fVar21 * fStack_4c) * local_40[4]);
  local_78 = (float)fVar18;
  local_90 = local_b0;
  fStack_8c = fStack_ac;
  fStack_88 = fStack_a8;
  fStack_84 = fStack_a4;
  FUN_008f1b60(&local_90,param_1,param_2);
  FUN_008f1cc0(local_40,local_70,param_1,param_2);
  if (0.0 < *(float *)(in_ECX + 0x84)) {
    fStack_a8 = *(float *)(in_ECX + 0x84);
    local_b0 = *(float *)(param_1 + 0x1c);
    fStack_ac = (float)(*(int *)(param_1 + 0x28) + 0x30);
    fStack_a4 = 4.2039e-45;
    FUN_008f1460(&local_b0,param_1,param_2);
  }
  return;
}



void FUN_00911790(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[3];
  *in_ECX = &PTR_FUN_00a9ccfc;
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



void FUN_009117e0(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9ccfc;
  in_ECX[0x24] = 0xff7fffff;
  in_ECX[0x25] = 0x7f7fffff;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x26] = 0;
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
  in_ECX[0xc] = 0x3f800000;
  in_ECX[0x11] = 0x3f800000;
  in_ECX[0x16] = 0x3f800000;
  in_ECX[0x27] = 0;
  in_ECX[3] = 0;
  return;
}



void FUN_00911880(undefined1 *param_1)

{
  int in_ECX;
  
  if ((((ABS(ABS(*(float *)(in_ECX + 0x78) * *(float *)(in_ECX + 0x88) +
                 *(float *)(in_ECX + 0x74) * *(float *)(in_ECX + 0x84) +
                 *(float *)(in_ECX + 0x70) * *(float *)(in_ECX + 0x80))) < 1e-05) &&
       (ABS((*(float *)(in_ECX + 0x88) * *(float *)(in_ECX + 0x88) +
            *(float *)(in_ECX + 0x84) * *(float *)(in_ECX + 0x84) +
            *(float *)(in_ECX + 0x80) * *(float *)(in_ECX + 0x80)) - 1.0) < 1e-05)) &&
      (ABS((*(float *)(in_ECX + 0x78) * *(float *)(in_ECX + 0x78) +
           *(float *)(in_ECX + 0x74) * *(float *)(in_ECX + 0x74) +
           *(float *)(in_ECX + 0x70) * *(float *)(in_ECX + 0x70)) - 1.0) < 1e-05)) &&
     (*(float *)(in_ECX + 0x90) <= *(float *)(in_ECX + 0x94))) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}



void FUN_009119a0(int param_1,undefined4 *param_2)

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
  float *pfVar15;
  int in_ECX;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_108;
  int local_104;
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
  undefined4 local_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  float local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90 [7];
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_008f0f70(param_1,param_2,*(undefined4 *)(param_1 + 0x28),8);
  pfVar2 = *(float **)(param_1 + 0x1c);
  fVar18 = *pfVar2;
  fVar19 = pfVar2[1];
  fVar20 = pfVar2[2];
  fVar3 = pfVar2[3];
  fVar4 = pfVar2[4];
  fVar5 = pfVar2[5];
  fVar6 = pfVar2[6];
  fVar7 = pfVar2[7];
  fVar8 = pfVar2[8];
  fVar9 = pfVar2[9];
  fVar10 = pfVar2[10];
  fVar11 = pfVar2[0xb];
  pfVar15 = (float *)(in_ECX + 0x10);
  iVar16 = (int)local_60 - (int)pfVar15;
  iVar17 = 5;
  do {
    fVar12 = *pfVar15;
    fVar13 = pfVar15[1];
    fVar14 = pfVar15[2];
    pfVar1 = (float *)(iVar16 + (int)pfVar15);
    *pfVar1 = fVar18 * fVar12 + fVar4 * fVar13 + fVar8 * fVar14;
    pfVar1[1] = fVar19 * fVar12 + fVar5 * fVar13 + fVar9 * fVar14;
    pfVar1[2] = fVar20 * fVar12 + fVar6 * fVar13 + fVar10 * fVar14;
    pfVar1[3] = fVar3 * fVar12 + fVar7 * fVar13 + fVar11 * fVar14;
    pfVar15 = pfVar15 + 4;
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  pfVar1 = *(float **)(param_1 + 0x20);
  local_60[0] = local_60[0] + pfVar2[0xc];
  local_60[1] = local_60[1] + pfVar2[0xd];
  local_60[2] = local_60[2] + pfVar2[0xe];
  local_60[3] = local_60[3] + pfVar2[0xf];
  fVar18 = *pfVar1;
  fVar19 = pfVar1[1];
  fVar20 = pfVar1[2];
  fVar3 = pfVar1[3];
  fVar4 = pfVar1[4];
  fVar5 = pfVar1[5];
  fVar6 = pfVar1[6];
  fVar7 = pfVar1[7];
  fVar8 = pfVar1[8];
  fVar9 = pfVar1[9];
  fVar10 = pfVar1[10];
  fVar11 = pfVar1[0xb];
  pfVar15 = (float *)(in_ECX + 0x60);
  iVar16 = (int)local_90 - (int)pfVar15;
  iVar17 = 3;
  do {
    fVar12 = *pfVar15;
    fVar13 = pfVar15[1];
    fVar14 = pfVar15[2];
    pfVar2 = (float *)(iVar16 + (int)pfVar15);
    *pfVar2 = fVar18 * fVar12 + fVar4 * fVar13 + fVar8 * fVar14;
    pfVar2[1] = fVar19 * fVar12 + fVar5 * fVar13 + fVar9 * fVar14;
    pfVar2[2] = fVar20 * fVar12 + fVar6 * fVar13 + fVar10 * fVar14;
    pfVar2[3] = fVar3 * fVar12 + fVar7 * fVar13 + fVar11 * fVar14;
    pfVar15 = pfVar15 + 4;
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  local_90[0] = local_90[0] + pfVar1[0xc];
  local_90[1] = local_90[1] + pfVar1[0xd];
  local_90[2] = local_90[2] + pfVar1[0xe];
  local_90[3] = local_90[3] + pfVar1[0xf];
  local_c0 = local_40;
  fStack_bc = (float)uStack_3c;
  uStack_b8 = uStack_38;
  iStack_b4 = uStack_34;
  local_a0 = pfVar1[4];
  fStack_9c = pfVar1[5];
  fStack_98 = pfVar1[6];
  fStack_94 = pfVar1[7];
  local_b0 = local_20;
  uStack_ac = uStack_1c;
  iStack_a8 = uStack_18;
  uStack_a4 = uStack_14;
  FUN_008f1310(&local_c0,param_1,param_2);
  local_100 = local_30;
  fStack_fc = (float)uStack_2c;
  fStack_f8 = (float)uStack_28;
  fStack_f4 = (float)uStack_24;
  local_e0 = pfVar1[8];
  fStack_dc = pfVar1[9];
  fStack_d8 = pfVar1[10];
  fStack_d4 = pfVar1[0xb];
  local_f0 = (float)local_c0;
  fStack_ec = fStack_bc;
  fStack_e8 = (float)uStack_b8;
  fStack_e4 = (float)iStack_b4;
  FUN_008f1310(&local_100,param_1,param_2);
  local_f0 = local_100;
  fStack_ec = fStack_fc;
  fStack_e8 = fStack_f8;
  fStack_e4 = fStack_f4;
  local_100 = local_b0;
  fStack_fc = (float)uStack_ac;
  fStack_f8 = (float)iStack_a8;
  fStack_f4 = (float)uStack_a4;
  local_e0 = *pfVar1;
  fStack_dc = pfVar1[1];
  fStack_d8 = pfVar1[2];
  fStack_d4 = pfVar1[3];
  FUN_008f1310(&local_100,param_1,param_2);
  local_100 = local_60[0];
  fStack_fc = local_60[1];
  fStack_f8 = local_60[2];
  fStack_f4 = local_60[3];
  local_108 = (local_60[2] - local_90[2]) * local_90[6] +
              (local_60[1] - local_90[1]) * local_90[5] + (local_60[0] - local_90[0]) * local_90[4];
  local_f0 = local_90[0] + local_108 * local_90[4];
  fStack_ec = local_90[1] + local_108 * local_90[5];
  fStack_e8 = local_90[2] + local_108 * local_90[6];
  fStack_e4 = local_90[3] + local_108 * fStack_74;
  local_e0 = local_70;
  fStack_dc = fStack_6c;
  fStack_d8 = fStack_68;
  fStack_d4 = fStack_64;
  FUN_008f1790(&local_100,param_1,param_2);
  fVar20 = local_90[5] * local_e0;
  fVar18 = local_90[6] * local_e0;
  fVar19 = local_90[4] * fStack_dc;
  local_e0 = local_90[5] * fStack_d8 - local_90[6] * fStack_dc;
  fStack_dc = fVar18 - local_90[4] * fStack_d8;
  fStack_d8 = fVar19 - fVar20;
  fStack_d4 = fStack_74 * fStack_d4 - fStack_74 * fStack_d4;
  FUN_008f1790(&local_100,param_1,param_2);
  local_d0 = *(undefined4 *)(in_ECX + 0x90);
  local_cc = *(undefined4 *)(in_ECX + 0x94);
  local_100 = local_60[0];
  fStack_fc = local_60[1];
  fStack_f8 = local_60[2];
  fStack_f4 = local_60[3];
  local_f0 = local_90[0];
  fStack_ec = local_90[1];
  fStack_e8 = local_90[2];
  fStack_e4 = local_90[3];
  local_e0 = local_90[4];
  fStack_dc = local_90[5];
  fStack_d8 = local_90[6];
  fStack_d4 = fStack_74;
  FUN_008f1970(&local_100,param_1,param_2);
  local_104 = *(int *)(param_1 + 0x28);
  if (*(int *)(in_ECX + 0xc) != 0) {
    local_b0 = 0.0;
    uStack_ac = 0;
    FUN_008f1190(local_90 + 4,local_60,param_1,*param_2,&local_c0);
    local_b0 = *(float *)(local_104 + 0x30);
    uStack_ac = *(undefined4 *)(local_104 + 0x34);
    uStack_b8 = *(undefined4 *)(in_ECX + 0x9c);
    iStack_a8 = local_104 + 0x38;
    iStack_b4 = param_1;
    fStack_bc = local_108;
    (**(code **)(**(int **)(in_ECX + 0xc) + 8))(&local_c0,&local_100);
    FUN_008f1010(&local_108,param_1,param_2);
    return;
  }
  if (0.0 < *(float *)(in_ECX + 0x98)) {
    local_e0 = *(float *)(in_ECX + 0x98);
    fStack_dc = (float)(local_104 + 0x30);
    local_100 = local_60[0];
    fStack_fc = local_60[1];
    fStack_f8 = local_60[2];
    fStack_f4 = local_60[3];
    local_f0 = local_90[4];
    fStack_ec = local_90[5];
    fStack_e8 = local_90[6];
    fStack_e4 = fStack_74;
    FUN_008f15f0(&local_100,param_1,param_2);
  }
  return;
}



void FUN_00911d50(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d74db;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x4c,0x29,uVar1);
    *(undefined2 *)(iVar2 + 4) = 0x4c;
    uStack_4 = 0;
    param_1 = FUN_00913180();
  }
  uStack_4 = 0xffffffff;
  FUN_008a07b0(param_1,param_2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void thunk_FUN_008a0c30(void)

{
  FUN_008a0c30();
  return;
}



void thunk_FUN_008a0c80(void)

{
  FUN_008a0c80();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911df0(void)

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
  *in_ECX = &PTR_FUN_00a98d24;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba8354 = _DAT_00ba8354 + -1;
  local_4 = 0xffffffff;
  FUN_008a0250();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00911e60(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a98d24;
    _DAT_00ba8354 = _DAT_00ba8354 + 1;
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



undefined4 FUN_00911f40(undefined1 *param_1)

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
    *puVar1 = &PTR_FUN_00a98e54;
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



int FUN_00912020(void)

{
  int in_ECX;
  
  return in_ECX + 0xc;
}



void FUN_00912030(void)

{
  undefined4 *in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
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
  
  local_40 = *in_stack_00000010;
  uStack_3c = in_stack_00000010[1];
  uStack_38 = in_stack_00000010[2];
  uStack_34 = in_stack_00000010[3];
  local_30 = in_stack_00000010[4];
  uStack_2c = in_stack_00000010[5];
  uStack_28 = in_stack_00000010[6];
  uStack_24 = in_stack_00000010[7];
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  local_20 = 0x3f800000;
  FUN_008f1790(&local_40,in_stack_00000014,in_stack_00000018);
  local_20 = 0;
  uStack_1c = 0x3f800000;
  FUN_008f1790(&local_40,in_stack_00000014,in_stack_00000018);
  uStack_1c = 0;
  uStack_18 = 0x3f800000;
  FUN_008f1790(&local_40,in_stack_00000014,in_stack_00000018);
  in_stack_00000010[0x2e] = in_stack_00000010[0x2e] + 3;
  return;
}



void FUN_009120d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
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
  
  iVar2 = *param_1;
  *param_1 = iVar2 + 4;
  puVar1 = param_4 + (*(int *)(iVar2 + 4) + 2) * 4;
  local_20 = *puVar1;
  uStack_1c = puVar1[1];
  uStack_18 = puVar1[2];
  uStack_14 = puVar1[3];
  local_40 = *param_4;
  uStack_3c = param_4[1];
  uStack_38 = param_4[2];
  uStack_34 = param_4[3];
  local_30 = param_4[4];
  uStack_2c = param_4[5];
  uStack_28 = param_4[6];
  uStack_24 = param_4[7];
  FUN_008f1790(&local_40,param_5,param_6);
  param_4[0x2e] = param_4[0x2e] + 1;
  return;
}



void FUN_00912140(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int in_ECX;
  int unaff_ESI;
  
  pfVar1 = (float *)((*(int *)(&DAT_00b2ff9c + unaff_ESI * 4) + 5) * 0x10 + in_ECX);
  pfVar2 = (float *)((*(int *)(&DAT_00b2ffa0 + unaff_ESI * 4) + 8) * 0x10 + in_ECX);
  pfVar3 = (float *)((*(int *)(&DAT_00b2ff9c + unaff_ESI * 4) + 8) * 0x10 + in_ECX);
  FUN_008ecbb0(pfVar2[2] * pfVar1[2] + pfVar2[1] * pfVar1[1] + *pfVar2 * *pfVar1,
               pfVar3[2] * pfVar1[2] + pfVar3[1] * pfVar1[1] + *pfVar3 * *pfVar1);
  return;
}



void FUN_009121d0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + 4;
  iVar3 = *(int *)(iVar3 + 4);
  puVar1 = (uint *)((*(int *)(&DAT_00b2ff9c + iVar3 * 4) + 5) * 0x10 + param_4);
  local_30 = *puVar1;
  uStack_2c = puVar1[1];
  uStack_28 = puVar1[2];
  uStack_24 = puVar1[3];
  puVar1 = (uint *)((*(int *)(&DAT_00b2ffa0 + iVar3 * 4) + 5) * 0x10 + param_4);
  local_40 = *puVar1;
  uStack_3c = puVar1[1];
  uStack_38 = puVar1[2];
  uStack_34 = puVar1[3];
  puVar2 = (undefined4 *)((iVar3 + 8) * 0x10 + param_4);
  local_20 = *puVar2;
  uStack_1c = puVar2[1];
  uStack_18 = puVar2[2];
  uStack_14 = puVar2[3];
  FUN_008f1310(&local_40,param_5,param_6);
  uVar4 = local_30 ^ 0x80000000;
  uVar5 = uStack_2c ^ 0x80000000;
  uVar6 = uStack_28 ^ 0x80000000;
  uVar7 = uStack_24 ^ 0x80000000;
  local_30 = local_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  local_40 = uVar4;
  uStack_3c = uVar5;
  uStack_38 = uVar6;
  uStack_34 = uVar7;
  FUN_008f1310(&local_40,param_5,param_6);
  *(int *)(param_4 + 0xb8) = *(int *)(param_4 + 0xb8) + 2;
  return;
}



void FUN_00912280(void)

{
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
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
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_40 = *(undefined4 *)(in_stack_00000010 + 0x50);
  uStack_3c = *(undefined4 *)(in_stack_00000010 + 0x54);
  uStack_38 = *(undefined4 *)(in_stack_00000010 + 0x58);
  uStack_34 = *(undefined4 *)(in_stack_00000010 + 0x5c);
  local_20 = *(undefined4 *)(in_stack_00000010 + 0x90);
  uStack_1c = *(undefined4 *)(in_stack_00000010 + 0x94);
  uStack_18 = *(undefined4 *)(in_stack_00000010 + 0x98);
  uStack_14 = *(undefined4 *)(in_stack_00000010 + 0x9c);
  local_30 = *(undefined4 *)(in_stack_00000010 + 0x70);
  uStack_2c = *(undefined4 *)(in_stack_00000010 + 0x74);
  uStack_28 = *(undefined4 *)(in_stack_00000010 + 0x78);
  uStack_24 = *(undefined4 *)(in_stack_00000010 + 0x7c);
  FUN_008f1310(&local_40,in_stack_00000014,in_stack_00000018);
  local_70 = *(undefined4 *)(in_stack_00000010 + 0x60);
  uStack_6c = *(undefined4 *)(in_stack_00000010 + 100);
  uStack_68 = *(undefined4 *)(in_stack_00000010 + 0x68);
  uStack_64 = *(undefined4 *)(in_stack_00000010 + 0x6c);
  local_50 = *(undefined4 *)(in_stack_00000010 + 0xa0);
  uStack_4c = *(undefined4 *)(in_stack_00000010 + 0xa4);
  uStack_48 = *(undefined4 *)(in_stack_00000010 + 0xa8);
  uStack_44 = *(undefined4 *)(in_stack_00000010 + 0xac);
  local_60 = local_40;
  uStack_5c = uStack_3c;
  uStack_58 = uStack_38;
  uStack_54 = uStack_34;
  FUN_008f1310(&local_70,in_stack_00000014,in_stack_00000018);
  local_50 = *(undefined4 *)(in_stack_00000010 + 0x80);
  uStack_4c = *(undefined4 *)(in_stack_00000010 + 0x84);
  uStack_48 = *(undefined4 *)(in_stack_00000010 + 0x88);
  uStack_44 = *(undefined4 *)(in_stack_00000010 + 0x8c);
  local_60 = local_70;
  uStack_5c = uStack_6c;
  uStack_58 = uStack_68;
  uStack_54 = uStack_64;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  FUN_008f1310(&local_70,in_stack_00000014,in_stack_00000018);
  *(int *)(in_stack_00000010 + 0xb8) = *(int *)(in_stack_00000010 + 0xb8) + 3;
  return;
}



void FUN_00912340(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
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
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + 4;
  puVar2 = param_4 + (*(int *)(iVar1 + 4) + 2) * 4;
  local_30 = *puVar2;
  uStack_2c = puVar2[1];
  uStack_28 = puVar2[2];
  uStack_24 = puVar2[3];
  puVar2 = (undefined4 *)*param_2;
  local_50 = *param_4;
  uStack_4c = param_4[1];
  uStack_48 = param_4[2];
  uStack_44 = param_4[3];
  local_40 = param_4[4];
  uStack_3c = param_4[5];
  uStack_38 = param_4[6];
  uStack_34 = param_4[7];
  *param_2 = (int)(puVar2 + 4);
  local_20 = *puVar2;
  local_1c = puVar2[1];
  FUN_008f1970(&local_50,param_5,param_6);
  param_4[0x2e] = param_4[0x2e] + 1;
  return;
}



void FUN_009123c0(int *param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + 4;
  puVar1 = (undefined4 *)((*(int *)(iVar2 + 4) + 5) * 0x10 + param_4);
  local_30 = *puVar1;
  uStack_2c = puVar1[1];
  uStack_28 = puVar1[2];
  uStack_24 = puVar1[3];
  fVar3 = (float10)FUN_00912140();
  local_18 = (float)fVar3;
  puVar1 = (undefined4 *)*param_2;
  *param_2 = (int)(puVar1 + 4);
  local_20 = *puVar1;
  local_1c = puVar1[1];
  if (((fVar3 < (float10)0.0) && (0.0 < (float)puVar1[2])) &&
     ((float10)3.1415927 < (float10)(float)puVar1[2] - fVar3)) {
    fVar3 = fVar3 + (float10)6.2831855;
    local_18 = (float)fVar3;
  }
  if ((((float10)0.0 < fVar3) && ((float)puVar1[2] < 0.0)) &&
     ((float10)3.1415927 < fVar3 - (float10)(float)puVar1[2])) {
    fVar3 = fVar3 - (float10)6.2831855;
    local_18 = (float)fVar3;
  }
  puVar1[2] = (float)fVar3;
  FUN_008f1b60(&local_30,param_5,param_6);
  *(int *)(param_4 + 0xb8) = *(int *)(param_4 + 0xb8) + 1;
  return;
}



void FUN_009124b0(int *param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [20];
  
  iVar1 = *param_1;
  piVar4 = (int *)(iVar1 + 4);
  *param_1 = (int)piVar4;
  iVar2 = *piVar4;
  piVar4 = (int *)(iVar1 + 8);
  *param_1 = (int)piVar4;
  iVar1 = *piVar4;
  FUN_00943230((iVar2 + 5) * 0x10 + param_4,(iVar2 + 8) * 0x10 + param_4,
               (iVar1 + 5) * 0x10 + param_4,(iVar1 + 8) * 0x10 + param_4,local_30,local_18);
  puVar3 = (undefined4 *)*param_2;
  *param_2 = (int)(puVar3 + 4);
  local_20 = *puVar3;
  local_1c = puVar3[1];
  FUN_008f1b60(local_30,param_5,param_6);
  *(int *)(param_4 + 0xb8) = *(int *)(param_4 + 0xb8) + 1;
  return;
}



void FUN_00912550(int *param_1,int *param_2,int param_3,float *param_4,int param_5,
                 undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_48 [4];
  float local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [40];
  
  iVar1 = *param_1;
  *param_1 = iVar1 + 4;
  iVar2 = *(int *)(param_5 + 0x28);
  iVar1 = *(int *)(iVar1 + 4);
  *param_2 = *param_2 + 0x10;
  iVar4 = FUN_009828f6();
  piVar3 = *(int **)(*(int *)(param_3 + 0x34) + iVar4 * 4);
  pfVar5 = param_4 + (iVar1 + 2) * 4;
  local_60 = *pfVar5;
  fStack_5c = pfVar5[1];
  fStack_58 = pfVar5[2];
  fStack_54 = pfVar5[3];
  local_44 = (param_4[2] - param_4[6]) * fStack_58 +
             (param_4[1] - param_4[5]) * fStack_5c + (*param_4 - param_4[4]) * local_60;
  if (piVar3 != (int *)0x0) {
    local_38 = 0;
    local_34 = 0;
    FUN_008f1190(&local_60,param_4 + 4,param_5,*param_6,local_48);
    local_38 = *(undefined4 *)(iVar2 + (int)param_4[0x2e] * 8);
    local_34 = *(undefined4 *)(iVar2 + 4 + (int)param_4[0x2e] * 8);
    local_30 = 0;
    local_40 = 0;
    local_3c = param_5;
    (**(code **)(*piVar3 + 8))(local_48,local_2c);
    FUN_008f1010(&local_34,param_5,param_6);
  }
  param_4[0x2e] = (float)((int)param_4[0x2e] + 1);
  return;
}



void FUN_00912690(int *param_1,int *param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *(int *)(param_5 + 0x28);
  iVar1 = *param_1;
  *param_1 = iVar1 + 4;
  local_10 = (*(int *)(iVar1 + 4) + 5) * 0x10 + param_4;
  puVar2 = (undefined4 *)*param_2;
  *param_2 = (int)(puVar2 + 4);
  local_8 = *puVar2;
  local_c = local_c + *(int *)(param_4 + 0xb8) * 8;
  local_4 = 1;
  FUN_008f1460(&local_10,param_5,param_6);
  *(int *)(param_4 + 0xb8) = *(int *)(param_4 + 0xb8) + 1;
  return;
}



void FUN_00912710(int *param_1,int *param_2,undefined4 param_3,float *param_4,int param_5,
                 undefined4 param_6)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
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
  
  local_1c = *(int *)(param_5 + 0x28);
  iVar2 = *param_1;
  *param_1 = iVar2 + 4;
  pfVar1 = param_4 + (*(int *)(iVar2 + 4) + 2) * 4;
  local_30 = *pfVar1;
  fStack_2c = pfVar1[1];
  fStack_28 = pfVar1[2];
  fStack_24 = pfVar1[3];
  puVar3 = (undefined4 *)*param_2;
  local_40 = *param_4 - param_4[4];
  fStack_3c = param_4[1] - param_4[5];
  fStack_38 = param_4[2] - param_4[6];
  fStack_34 = param_4[3] - param_4[7];
  *param_2 = (int)(puVar3 + 4);
  local_20 = *puVar3;
  local_1c = local_1c + (int)param_4[0x2e] * 8;
  FUN_008f15f0(&local_40,param_5,param_6);
  param_4[0x2e] = (float)((int)param_4[0x2e] + 1);
  return;
}



void FUN_009127a0(int *param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + 4;
  iVar1 = *(int *)(iVar1 + 4);
  pfVar11 = (float *)((iVar1 + 5) * 0x10 + param_4);
  fVar2 = *pfVar11;
  fVar3 = pfVar11[1];
  fVar4 = pfVar11[2];
  fVar5 = pfVar11[3];
  pfVar11 = (float *)((iVar1 + 8) * 0x10 + param_4);
  fVar6 = *pfVar11;
  fVar7 = pfVar11[1];
  fVar8 = pfVar11[2];
  fVar9 = pfVar11[3];
  local_30 = fVar3 * fVar8 - fVar4 * fVar7;
  fStack_2c = fVar4 * fVar6 - fVar2 * fVar8;
  fStack_28 = fVar2 * fVar7 - fVar3 * fVar6;
  fVar12 = fStack_2c * fStack_2c;
  fVar13 = fStack_28 * fStack_28;
  if (1.1920929e-07 <= fVar13 + fVar12 + local_30 * local_30) {
    puVar10 = (undefined4 *)*param_2;
    auVar14._4_4_ = fVar12;
    auVar14._0_4_ = fVar12;
    auVar14._8_4_ = fVar12;
    auVar14._12_4_ = fVar12;
    auVar15._4_12_ = auVar14._4_12_;
    auVar15._0_4_ = fVar12 + local_30 * local_30;
    auVar16._4_4_ = fVar13;
    auVar16._0_4_ = fVar13 + auVar15._0_4_;
    auVar16._8_4_ = fVar13;
    auVar16._12_4_ = fVar13;
    auVar16 = rsqrtss(auVar15,auVar16);
    fVar12 = auVar16._0_4_;
    fStack_24 = fVar12 * 0.5 * (3.0 - (fVar13 + auVar15._0_4_) * fVar12 * fVar12);
    local_18 = fVar2 * fVar6 + fVar3 * fVar7 + fVar4 * fVar8;
    *param_2 = (int)(puVar10 + 4);
    local_30 = fStack_24 * local_30;
    fStack_2c = fStack_24 * fStack_2c;
    fStack_28 = fStack_24 * fStack_28;
    fStack_24 = fStack_24 * (fVar5 * fVar9 - fVar5 * fVar9);
    local_20 = *puVar10;
    local_1c = puVar10[1];
    FUN_008f1b60(&local_30,param_5,param_6);
    *(int *)(param_4 + 0xb8) = *(int *)(param_4 + 0xb8) + 1;
  }
  return;
}



void FUN_00912940(int *param_1,int *param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float local_60;
  undefined1 local_48 [4];
  float local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34 [2];
  undefined1 local_2c [40];
  
  iVar4 = *param_1;
  *param_1 = iVar4 + 4;
  iVar5 = *(int *)(param_5 + 0x28);
  iVar4 = *(int *)(iVar4 + 4);
  iVar6 = *param_2;
  *param_2 = iVar6 + 0x10;
  local_60 = *(float *)(iVar6 + 8);
  fVar7 = *(float *)(iVar6 + 4);
  iVar9 = FUN_009828f6();
  piVar8 = *(int **)(*(int *)(param_3 + 0x34) + iVar9 * 4);
  pfVar1 = (float *)((*(int *)(&DAT_00b2ff9c + iVar4 * 4) + 5) * 0x10 + param_4);
  pfVar2 = (float *)((*(int *)(&DAT_00b2ffa0 + iVar4 * 4) + 8) * 0x10 + param_4);
  pfVar3 = (float *)((*(int *)(&DAT_00b2ff9c + iVar4 * 4) + 8) * 0x10 + param_4);
  fVar10 = (float10)FUN_008ecbb0(-(pfVar2[2] * pfVar1[2] + pfVar2[1] * pfVar1[1] + *pfVar2 * *pfVar1
                                  ),-(pfVar3[2] * pfVar1[2] +
                                     pfVar3[1] * pfVar1[1] + *pfVar3 * *pfVar1));
  fVar10 = fVar10 + (float10)3.1415927;
  fVar11 = fVar10 - (float10)fVar7;
  if ((float10)-3.1415927 <= fVar11) {
    if ((float10)3.1415927 < fVar11) {
      local_60 = local_60 - 1.0;
    }
  }
  else {
    local_60 = local_60 + 1.0;
  }
  *(float *)(iVar6 + 4) = (float)fVar10;
  *(float *)(iVar6 + 8) = local_60;
  *(undefined4 *)(iVar6 + 0xc) = 0;
  if (piVar8 != (int *)0x0) {
    local_38 = 0;
    local_34[0] = 0;
    FUN_008f1070((iVar4 + 5) * 0x10 + param_4,param_5,*param_6,local_48);
    local_3c = param_5;
    local_38 = *(undefined4 *)(iVar5 + *(int *)(param_4 + 0xb8) * 8);
    local_44 = local_60 * 6.2831855 + (float)fVar10;
    local_34[0] = *(undefined4 *)(iVar5 + 4 + *(int *)(param_4 + 0xb8) * 8);
    local_40 = 0;
    (**(code **)(*piVar8 + 8))(local_48,local_2c);
    FUN_008f0fb0(local_34,param_5,param_6);
  }
  *(int *)(param_4 + 0xb8) = *(int *)(param_4 + 0xb8) + 1;
  return;
}



void FUN_00912b30(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
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
  float *pfVar14;
  float10 fVar15;
  float *local_e4;
  undefined4 *local_e0;
  undefined4 *local_dc;
  float fStack_d4;
  undefined1 local_d0 [32];
  float afStack_b0 [12];
  float fStack_80;
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
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float *local_20;
  float *local_1c;
  undefined4 local_18;
  
  local_20 = *(float **)(param_2 + 0x1c);
  local_1c = *(float **)(param_2 + 0x20);
  local_e4 = *(float **)(param_1 + 0x10);
  local_dc = *(undefined4 **)(param_1 + 0x28);
  local_e0 = *(undefined4 **)(param_1 + 0x1c);
  local_18 = 0;
LAB_00912b7c:
  do {
    pfVar14 = local_e4;
    switch(*local_e0) {
    case 0:
      return;
    case 1:
      FUN_0088fcc0(local_20,local_e4);
      local_e4 = local_e4 + 4;
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 2:
      FUN_0088fcc0(local_1c,local_e4);
      local_e4 = local_e4 + 4;
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 3:
      fVar2 = *local_e4;
      fVar3 = local_e4[1];
      fVar4 = local_e4[2];
      fVar5 = local_20[9];
      fVar6 = local_20[10];
      fVar7 = local_20[0xb];
      fVar8 = local_20[5];
      fVar9 = local_20[6];
      fVar10 = local_20[7];
      iVar1 = local_e0[1];
      fVar11 = local_20[1];
      fVar12 = local_20[2];
      fVar13 = local_20[3];
      local_e4 = local_e4 + 4;
      afStack_b0[iVar1 * 4] = *local_20 * fVar2 + local_20[4] * fVar3 + local_20[8] * fVar4;
      afStack_b0[iVar1 * 4 + 1] = fVar11 * fVar2 + fVar8 * fVar3 + fVar5 * fVar4;
      afStack_b0[iVar1 * 4 + 2] = fVar12 * fVar2 + fVar9 * fVar3 + fVar6 * fVar4;
      afStack_b0[iVar1 * 4 + 3] = fVar13 * fVar2 + fVar10 * fVar3 + fVar7 * fVar4;
      local_e0 = local_e0 + 2;
      goto LAB_00912b7c;
    case 4:
      fVar2 = *local_e4;
      fVar3 = local_e4[1];
      fVar4 = local_e4[2];
      fVar5 = local_1c[9];
      fVar6 = local_1c[10];
      fVar7 = local_1c[0xb];
      fVar8 = local_1c[5];
      fVar9 = local_1c[6];
      fVar10 = local_1c[7];
      fVar11 = local_1c[1];
      fVar12 = local_1c[2];
      fVar13 = local_1c[3];
      iVar1 = local_e0[1];
      local_e4 = local_e4 + 4;
      afStack_b0[iVar1 * 4] = *local_1c * fVar2 + local_1c[4] * fVar3 + local_1c[8] * fVar4;
      afStack_b0[iVar1 * 4 + 1] = fVar11 * fVar2 + fVar8 * fVar3 + fVar5 * fVar4;
      afStack_b0[iVar1 * 4 + 2] = fVar12 * fVar2 + fVar9 * fVar3 + fVar6 * fVar4;
      afStack_b0[iVar1 * 4 + 3] = fVar13 * fVar2 + fVar10 * fVar3 + fVar7 * fVar4;
      local_e0 = local_e0 + 2;
      goto LAB_00912b7c;
    case 5:
      iVar1 = local_e0[1];
      fVar2 = *local_e4;
      fVar3 = local_e4[1];
      fVar4 = local_e4[2];
      fVar5 = local_e4[3];
      local_e4 = local_e4 + 4;
      afStack_b0[iVar1 * 4] = fVar2;
      afStack_b0[iVar1 * 4 + 1] = fVar3;
      afStack_b0[iVar1 * 4 + 2] = fVar4;
      afStack_b0[iVar1 * 4 + 3] = fVar5;
      local_e0 = local_e0 + 2;
      goto LAB_00912b7c;
    case 6:
      FUN_009120d0(&local_e0,&local_e4,param_1,local_d0,param_2,param_3);
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 7:
      FUN_00912030(&local_e0,&local_e4,param_1,local_d0,param_2,param_3);
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 8:
      local_e4 = local_e4 + 0xc;
      FUN_008d2ab0(local_20,pfVar14);
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 9:
      local_e4 = local_e4 + 0xc;
      FUN_008d2ab0(local_1c,pfVar14);
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 10:
      fStack_80 = *local_20;
      fStack_7c = local_20[1];
      fStack_78 = local_20[2];
      fStack_74 = local_20[3];
      fStack_70 = local_20[4];
      fStack_6c = local_20[5];
      fStack_68 = local_20[6];
      fStack_64 = local_20[7];
      fStack_60 = local_20[8];
      fStack_5c = local_20[9];
      fStack_58 = local_20[10];
      fStack_54 = local_20[0xb];
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 0xb:
      fStack_50 = *local_1c;
      fStack_4c = local_1c[1];
      fStack_48 = local_1c[2];
      fStack_44 = local_1c[3];
      fStack_40 = local_1c[4];
      fStack_3c = local_1c[5];
      fStack_38 = local_1c[6];
      fStack_34 = local_1c[7];
      fStack_30 = local_1c[8];
      fStack_2c = local_1c[9];
      fStack_28 = local_1c[10];
      fStack_24 = local_1c[0xb];
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 0xc:
      FUN_009121d0(&local_e0,&local_e4,param_1,local_d0,param_2,param_3);
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 0xd:
      FUN_00912280(&local_e0,&local_e4,param_1,local_d0,param_2,param_3);
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 0xe:
      FUN_00912940(&local_e0,&local_e4,param_1,local_d0,param_2,param_3);
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 0xf:
      FUN_00912550(&local_e0,&local_e4,param_1,local_d0,param_2,param_3);
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 0x10:
      FUN_00912340(&local_e0,&local_e4,param_1,local_d0,param_2,param_3);
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 0x11:
      FUN_009123c0(&local_e0,&local_e4,param_1,local_d0,param_2,param_3);
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 0x12:
      FUN_009127a0(&local_e0,&local_e4,param_1,local_d0,param_2,param_3);
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 0x13:
      FUN_009124b0(&local_e0,&local_e4,param_1,local_d0,param_2,param_3);
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 0x14:
      FUN_00912690(&local_e0,&local_e4,param_1,local_d0,param_2,param_3);
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 0x15:
      FUN_00912710(&local_e0,&local_e4,param_1,local_d0,param_2,param_3);
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 0x16:
      FUN_008f0f20(*local_e4,local_e4[1],param_3);
      local_e4 = local_e4 + 4;
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 0x17:
      FUN_008f0f50(param_3);
      local_e0 = local_e0 + 1;
      goto LAB_00912b7c;
    case 0x18:
      local_e0 = local_e0 + 1;
      (*(code *)**(undefined4 **)*local_dc)(local_d0,*local_e0);
      break;
    case 0x19:
      local_e0 = local_e0 + 1;
      fVar15 = (float10)(**(code **)(*(int *)*local_dc + 4))(local_d0,*local_e0);
      fStack_d4 = (float)fVar15;
      FUN_008f0ef0(fStack_d4,param_2,param_3,1);
      break;
    default:
      goto switchD_00912b8b_default;
    }
    local_dc = local_dc + 1;
switchD_00912b8b_default:
    local_e0 = local_e0 + 1;
  } while( true );
}



void FUN_009130b0(void)

{
  int in_ECX;
  
  if (-1 < *(int *)(in_ECX + 0x3c)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x34),*(int *)(in_ECX + 0x3c) << 2,0x14);
  }
  if (-1 < *(int *)(in_ECX + 0x30)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x28),*(int *)(in_ECX + 0x30) << 2,0x14);
  }
  if (-1 < *(int *)(in_ECX + 0x24)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x1c),*(int *)(in_ECX + 0x24) << 2,0x14);
  }
  if (-1 < *(int *)(in_ECX + 0x18)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0x10),*(int *)(in_ECX + 0x18) << 4,0x14);
  }
  return;
}



void FUN_00913180(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9cd6c;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0x80000000;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0x80000000;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0x80000000;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0x80000000;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[5] = 0x18;
  return;
}



void FUN_009131d0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  *in_ECX = &PTR_FUN_00a9cd6c;
  if (0 < (int)in_ECX[0x11]) {
    do {
      puVar1 = *(undefined4 **)(in_ECX[0x10] + iVar2 * 4);
      if ((*(short *)(puVar1 + 1) != 0) &&
         (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
         *(short *)((int)puVar1 + 6) == 0)) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)in_ECX[0x11]);
  }
  FUN_009130b0();
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00913220(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_008f0f70(param_1,param_2,*(undefined4 *)(param_1 + 0x28),8);
  FUN_00912b30(in_ECX + 0xc,param_1,param_2);
  return;
}



void FUN_00913250(byte param_1)

{
  FUN_009131d0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_009132a0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = FUN_00912020();
  in_ECX[1] = uVar1;
  *in_ECX = param_1;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  *(undefined1 *)((int)in_ECX + 0x11) = 0;
  *(undefined1 *)((int)in_ECX + 0x12) = 0;
  *(undefined1 *)((int)in_ECX + 0x13) = 0;
  *(undefined1 *)(in_ECX + 5) = 0;
  *(undefined1 *)((int)in_ECX + 0x15) = 0;
  *(undefined1 *)(in_ECX + 6) = 0;
  *(undefined1 *)((int)in_ECX + 0x19) = 0;
  *(undefined1 *)((int)in_ECX + 0x16) = 0;
  *(undefined1 *)((int)in_ECX + 0x17) = 0;
  return;
}



void FUN_009132e0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (*(uint *)(iVar1 + 0x20) == (*(uint *)(iVar1 + 0x24) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x1c),4);
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0x20) * 4) = 7;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  iVar1 = *(int *)(in_ECX + 4);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 4;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 0x30;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  iVar1 = *(int *)(in_ECX + 4);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 4;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 0x30;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  iVar1 = *(int *)(in_ECX + 4);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 4;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 0x30;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  return;
}



undefined4 FUN_00913370(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (*(uint *)(iVar1 + 0x20) == (*(uint *)(iVar1 + 0x24) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x1c),4);
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0x20) * 4) = 8;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  iVar1 = *(int *)(in_ECX + 4);
  uVar2 = *(undefined4 *)(iVar1 + 0x14);
  if (*(uint *)(iVar1 + 0x14) == (*(uint *)(iVar1 + 0x18) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x10),0x10);
  }
  puVar6 = (undefined4 *)(*(int *)(iVar1 + 0x14) * 0x10 + *(int *)(iVar1 + 0x10));
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  *puVar6 = *param_1;
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  iVar1 = *(int *)(in_ECX + 4);
  if (*(uint *)(iVar1 + 0x14) == (*(uint *)(iVar1 + 0x18) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x10),0x10);
  }
  puVar6 = (undefined4 *)(*(int *)(iVar1 + 0x14) * 0x10 + *(int *)(iVar1 + 0x10));
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  uVar3 = param_1[5];
  uVar4 = param_1[6];
  uVar5 = param_1[7];
  *puVar6 = param_1[4];
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  iVar1 = *(int *)(in_ECX + 4);
  if (*(uint *)(iVar1 + 0x14) == (*(uint *)(iVar1 + 0x18) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x10),0x10);
  }
  puVar6 = (undefined4 *)(*(int *)(iVar1 + 0x14) * 0x10 + *(int *)(iVar1 + 0x10));
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  uVar3 = param_1[9];
  uVar4 = param_1[10];
  uVar5 = param_1[0xb];
  *puVar6 = param_1[8];
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  *(undefined1 *)(in_ECX + 0x16) = 1;
  return uVar2;
}



undefined4 FUN_00913460(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (*(uint *)(iVar1 + 0x20) == (*(uint *)(iVar1 + 0x24) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x1c),4);
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0x20) * 4) = 9;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  iVar1 = *(int *)(in_ECX + 4);
  uVar2 = *(undefined4 *)(iVar1 + 0x14);
  if (*(uint *)(iVar1 + 0x14) == (*(uint *)(iVar1 + 0x18) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x10),0x10);
  }
  puVar6 = (undefined4 *)(*(int *)(iVar1 + 0x14) * 0x10 + *(int *)(iVar1 + 0x10));
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  *puVar6 = *param_1;
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  iVar1 = *(int *)(in_ECX + 4);
  if (*(uint *)(iVar1 + 0x14) == (*(uint *)(iVar1 + 0x18) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x10),0x10);
  }
  puVar6 = (undefined4 *)(*(int *)(iVar1 + 0x14) * 0x10 + *(int *)(iVar1 + 0x10));
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  uVar3 = param_1[5];
  uVar4 = param_1[6];
  uVar5 = param_1[7];
  *puVar6 = param_1[4];
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  iVar1 = *(int *)(in_ECX + 4);
  if (*(uint *)(iVar1 + 0x14) == (*(uint *)(iVar1 + 0x18) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x10),0x10);
  }
  puVar6 = (undefined4 *)(*(int *)(iVar1 + 0x14) * 0x10 + *(int *)(iVar1 + 0x10));
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  uVar3 = param_1[9];
  uVar4 = param_1[10];
  uVar5 = param_1[0xb];
  *puVar6 = param_1[8];
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  *(undefined1 *)(in_ECX + 0x17) = 1;
  return uVar2;
}



void FUN_00913550(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (*(uint *)(iVar1 + 0x20) == (*(uint *)(iVar1 + 0x24) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x1c),4);
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0x20) * 4) = 0xd;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  iVar1 = *(int *)(in_ECX + 4);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 4;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 0x20;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  iVar1 = *(int *)(in_ECX + 4);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 4;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 0x20;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  iVar1 = *(int *)(in_ECX + 4);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 4;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 0x20;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  return;
}



undefined4 FUN_009135e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (*(uint *)(iVar1 + 0x20) == (*(uint *)(iVar1 + 0x24) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x1c),4);
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0x20) * 4) = 1;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  iVar1 = *(int *)(in_ECX + 4);
  uVar2 = *(undefined4 *)(iVar1 + 0x14);
  if (*(uint *)(iVar1 + 0x14) == (*(uint *)(iVar1 + 0x18) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x10),0x10);
  }
  puVar6 = (undefined4 *)(*(int *)(iVar1 + 0x14) * 0x10 + *(int *)(iVar1 + 0x10));
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  *puVar6 = *param_1;
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  *(undefined1 *)(in_ECX + 0x18) = 1;
  return uVar2;
}



undefined4 FUN_00913660(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (*(uint *)(iVar1 + 0x20) == (*(uint *)(iVar1 + 0x24) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x1c),4);
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0x20) * 4) = 2;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  iVar1 = *(int *)(in_ECX + 4);
  uVar2 = *(undefined4 *)(iVar1 + 0x14);
  if (*(uint *)(iVar1 + 0x14) == (*(uint *)(iVar1 + 0x18) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x10),0x10);
  }
  puVar6 = (undefined4 *)(*(int *)(iVar1 + 0x14) * 0x10 + *(int *)(iVar1 + 0x10));
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  *puVar6 = *param_1;
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  *(undefined1 *)(in_ECX + 0x19) = 1;
  return uVar2;
}



undefined4 FUN_009136e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
  if (*(uint *)(iVar1 + 0x20) == (*(uint *)(iVar1 + 0x24) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x1c),4);
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0x20) * 4) = 0x16;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  iVar1 = *(int *)(in_ECX + 4);
  uVar2 = *(undefined4 *)(iVar1 + 0x14);
  if (*(uint *)(iVar1 + 0x14) == (*(uint *)(iVar1 + 0x18) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x10),0x10);
  }
  puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x14) * 0x10 + *(int *)(iVar1 + 0x10));
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  *puVar3 = param_1;
  puVar3[1] = param_2;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar1 = *(int *)(in_ECX + 4);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 0xc;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 0x30;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  return uVar2;
}



void FUN_009137b0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + -1;
  if (*(uint *)(iVar1 + 0x20) == (*(uint *)(iVar1 + 0x24) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x1c),4);
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0x20) * 4) = 0x17;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  iVar1 = *(int *)(in_ECX + 4);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 4;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 0x30;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  return;
}



void FUN_00913810(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (*(uint *)(iVar1 + 0x20) == (*(uint *)(iVar1 + 0x24) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar1 + 0x1c),4);
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0x20) * 4) = 0;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  return;
}



void FUN_009138d0(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a9cdac;
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
  return;
}



void FUN_00913900(undefined1 *param_1)

{
  int in_ECX;
  
  if ((((ABS(ABS(*(float *)(in_ECX + 0x28) * *(float *)(in_ECX + 0x38) +
                 *(float *)(in_ECX + 0x24) * *(float *)(in_ECX + 0x34) +
                 *(float *)(in_ECX + 0x20) * *(float *)(in_ECX + 0x30))) < 1e-05) &&
       (ABS((*(float *)(in_ECX + 0x28) * *(float *)(in_ECX + 0x28) +
            *(float *)(in_ECX + 0x24) * *(float *)(in_ECX + 0x24) +
            *(float *)(in_ECX + 0x20) * *(float *)(in_ECX + 0x20)) - 1.0) < 1e-05)) &&
      (ABS((*(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x38) +
           *(float *)(in_ECX + 0x34) * *(float *)(in_ECX + 0x34) +
           *(float *)(in_ECX + 0x30) * *(float *)(in_ECX + 0x30)) - 1.0) < 1e-05)) &&
     (ABS((*(float *)(in_ECX + 0x58) * *(float *)(in_ECX + 0x58) +
          *(float *)(in_ECX + 0x54) * *(float *)(in_ECX + 0x54) +
          *(float *)(in_ECX + 0x50) * *(float *)(in_ECX + 0x50)) - 1.0) < 1e-05)) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}



void FUN_00913a20(int param_1,undefined4 param_2)

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
  float local_90 [4];
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  float local_40 [7];
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
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
  pfVar18 = (float *)(in_ECX + 0x10);
  iVar19 = (int)local_40 - (int)pfVar18;
  iVar20 = 3;
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
  local_40[0] = local_40[0] + pfVar2[0xc];
  local_40[1] = local_40[1] + pfVar2[0xd];
  local_40[2] = local_40[2] + pfVar2[0xe];
  local_40[3] = local_40[3] + pfVar2[0xf];
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
  pfVar18 = (float *)(in_ECX + 0x40);
  iVar19 = (int)local_90 - (int)pfVar18;
  iVar20 = 2;
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
  local_90[0] = local_90[0] + pfVar1[0xc];
  local_90[1] = local_90[1] + pfVar1[0xd];
  local_90[2] = local_90[2] + pfVar1[0xe];
  local_90[3] = local_90[3] + pfVar1[0xf];
  local_60 = local_40[4];
  uStack_5c = local_40[5];
  uStack_58 = local_40[6];
  uStack_54 = uStack_24;
  local_70 = local_20;
  uStack_6c = uStack_1c;
  uStack_68 = uStack_18;
  uStack_64 = uStack_14;
  local_50 = local_80;
  uStack_4c = uStack_7c;
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  FUN_008f1310(&local_70,param_1,param_2);
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  local_70 = local_40[4];
  uStack_6c = local_40[5];
  uStack_68 = local_40[6];
  uStack_64 = uStack_24;
  local_50 = local_80 ^ 0x80000000;
  uStack_4c = uStack_7c ^ 0x80000000;
  uStack_48 = uStack_78 ^ 0x80000000;
  uStack_44 = uStack_74 ^ 0x80000000;
  FUN_008f1310(&local_70,param_1,param_2);
  FUN_008f1cc0(local_40,local_90,param_1,param_2);
  return;
}



void FUN_00913c30(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a9cde8;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  return;
}



void FUN_00913c50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(in_ECX + 0x10) = *param_1;
  *(undefined4 *)(in_ECX + 0x14) = uVar1;
  *(undefined4 *)(in_ECX + 0x18) = uVar2;
  *(undefined4 *)(in_ECX + 0x1c) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(in_ECX + 0x20) = *param_2;
  *(undefined4 *)(in_ECX + 0x24) = uVar1;
  *(undefined4 *)(in_ECX + 0x28) = uVar2;
  *(undefined4 *)(in_ECX + 0x2c) = uVar3;
  return;
}



void FUN_00913c70(int param_1,undefined4 param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar3 = *(float *)(in_ECX + 0x10);
  fVar4 = *(float *)(in_ECX + 0x14);
  fVar5 = *(float *)(in_ECX + 0x18);
  pfVar1 = *(float **)(param_1 + 0x1c);
  pfVar2 = *(float **)(param_1 + 0x20);
  local_20 = *pfVar1 * fVar3 + pfVar1[4] * fVar4 + pfVar1[8] * fVar5 + pfVar1[0xc];
  fStack_1c = pfVar1[1] * fVar3 + pfVar1[5] * fVar4 + pfVar1[9] * fVar5 + pfVar1[0xd];
  fStack_18 = pfVar1[2] * fVar3 + pfVar1[6] * fVar4 + pfVar1[10] * fVar5 + pfVar1[0xe];
  fStack_14 = pfVar1[3] * fVar3 + pfVar1[7] * fVar4 + pfVar1[0xb] * fVar5 + pfVar1[0xf];
  fVar3 = *(float *)(in_ECX + 0x20);
  fVar4 = *(float *)(in_ECX + 0x24);
  fVar5 = *(float *)(in_ECX + 0x28);
  local_30 = *pfVar2 * fVar3 + pfVar2[4] * fVar4 + pfVar2[8] * fVar5 + pfVar2[0xc];
  fStack_2c = pfVar2[1] * fVar3 + pfVar2[5] * fVar4 + pfVar2[9] * fVar5 + pfVar2[0xd];
  fStack_28 = pfVar2[2] * fVar3 + pfVar2[6] * fVar4 + pfVar2[10] * fVar5 + pfVar2[0xe];
  fStack_24 = pfVar2[3] * fVar3 + pfVar2[7] * fVar4 + pfVar2[0xb] * fVar5 + pfVar2[0xf];
  FUN_008f0f70(param_1,param_2,*(undefined4 *)(param_1 + 0x28),8);
  FUN_008f1cc0(&local_20,&local_30,param_1,param_2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00913d30(undefined4 *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba8380);
  _DAT_00ba83f8 = GetCurrentThreadId();
  _DAT_00ba83fc = _DAT_00ba83fc + 1;
  *param_2 = *(float *)(*(int *)(in_ECX + 0x10) + 0x1c);
  iVar2 = *(int *)(in_ECX + 0x10);
  uVar3 = *(undefined4 *)(iVar2 + 0x14);
  uVar4 = *(undefined4 *)(iVar2 + 0x18);
  uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  *param_1 = *(undefined4 *)(iVar2 + 0x10);
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  if (*(float *)(in_ECX + 0x14) != 1.0) {
    fVar1 = *(float *)(in_ECX + 0x14);
    iVar2 = *(int *)(in_ECX + 0x10);
    *(float *)(iVar2 + 0x10) = fVar1 * *(float *)(iVar2 + 0x10);
    *(float *)(iVar2 + 0x14) = fVar1 * *(float *)(iVar2 + 0x14);
    *(float *)(iVar2 + 0x18) = fVar1 * *(float *)(iVar2 + 0x18);
    *(float *)(iVar2 + 0x1c) = fVar1 * *(float *)(iVar2 + 0x1c);
    *(float *)(iVar2 + 0x1c) = *param_2 / *(float *)(in_ECX + 0x14);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00913db0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_34;
  FUN_00913d30(&local_30,&local_34);
  FUN_009143a0(param_1,param_2);
  if (*(float *)(in_ECX + 0x14) != 1.0) {
    iVar1 = *(int *)(in_ECX + 0x10);
    *(undefined4 *)(iVar1 + 0x10) = local_30;
    *(undefined4 *)(iVar1 + 0x14) = uStack_2c;
    *(undefined4 *)(iVar1 + 0x18) = uStack_28;
    *(undefined4 *)(iVar1 + 0x1c) = uStack_24;
    *(undefined4 *)(iVar1 + 0x1c) = local_34;
  }
  _DAT_00ba83fc = _DAT_00ba83fc + -1;
  if (_DAT_00ba83fc == 0) {
    _DAT_00ba83f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba8380);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00913e40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int in_ECX;
  undefined1 auStack_44 [12];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_44;
  local_34 = param_4;
  FUN_00913d30(&local_30,&local_38);
  FUN_009143d0(param_1,param_2,param_3,local_34);
  if (*(float *)(in_ECX + 0x14) != 1.0) {
    iVar1 = *(int *)(in_ECX + 0x10);
    *(undefined4 *)(iVar1 + 0x10) = local_30;
    *(undefined4 *)(iVar1 + 0x14) = uStack_2c;
    *(undefined4 *)(iVar1 + 0x18) = uStack_28;
    *(undefined4 *)(iVar1 + 0x1c) = uStack_24;
    *(undefined4 *)(iVar1 + 0x1c) = local_38;
  }
  _DAT_00ba83fc = _DAT_00ba83fc + -1;
  if (_DAT_00ba83fc == 0) {
    _DAT_00ba83f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba8380);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00913ee0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_34;
  FUN_00913d30(&local_30,&local_34);
  FUN_009146e0(param_1,param_2);
  if (*(float *)(in_ECX + 0x14) != 1.0) {
    iVar1 = *(int *)(in_ECX + 0x10);
    *(undefined4 *)(iVar1 + 0x10) = local_30;
    *(undefined4 *)(iVar1 + 0x14) = uStack_2c;
    *(undefined4 *)(iVar1 + 0x18) = uStack_28;
    *(undefined4 *)(iVar1 + 0x1c) = uStack_24;
    *(undefined4 *)(iVar1 + 0x1c) = local_34;
  }
  _DAT_00ba83fc = _DAT_00ba83fc + -1;
  if (_DAT_00ba83fc == 0) {
    _DAT_00ba83f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba8380);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00913f70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 local_34;
  undefined4 local_30 [7];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_34;
  FUN_00913d30(local_30,&local_34);
  FUN_0092b1f0(param_1,param_2,param_3);
  if (*(float *)(in_ECX + 0x14) != 1.0) {
    iVar1 = *(int *)(in_ECX + 0x10);
    *(undefined4 *)(iVar1 + 0x10) = unaff_ESI;
    *(undefined4 *)(iVar1 + 0x14) = unaff_EBX;
    *(undefined4 *)(iVar1 + 0x18) = local_34;
    *(undefined4 *)(iVar1 + 0x1c) = local_30[0];
    *(undefined4 *)(iVar1 + 0x1c) = unaff_EDI;
  }
  _DAT_00ba83fc = _DAT_00ba83fc + -1;
  if (_DAT_00ba83fc == 0) {
    _DAT_00ba83f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba8380);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00914010(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  undefined1 auStack_44 [11];
  undefined1 local_39;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_44;
  local_34 = param_1;
  FUN_00913d30(&local_30,&local_38);
  pcVar3 = (char *)FUN_009144c0(&local_39,param_2,param_3);
  cVar1 = *pcVar3;
  if (*(float *)(in_ECX + 0x14) != 1.0) {
    iVar2 = *(int *)(in_ECX + 0x10);
    *(undefined4 *)(iVar2 + 0x10) = local_30;
    *(undefined4 *)(iVar2 + 0x14) = uStack_2c;
    *(undefined4 *)(iVar2 + 0x18) = uStack_28;
    *(undefined4 *)(iVar2 + 0x1c) = uStack_24;
    *(undefined4 *)(iVar2 + 0x1c) = local_38;
  }
  _DAT_00ba83fc = _DAT_00ba83fc + -1;
  if (_DAT_00ba83fc == 0) {
    _DAT_00ba83f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba8380);
  *(bool *)local_34 = cVar1 != '\0';
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009140c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  undefined1 auStack_44 [12];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_44;
  local_34 = param_3;
  FUN_00913d30(&local_30,&local_38);
  FUN_009145a0(param_1,param_2,local_34);
  if (*(float *)(in_ECX + 0x14) != 1.0) {
    iVar1 = *(int *)(in_ECX + 0x10);
    *(undefined4 *)(iVar1 + 0x10) = local_30;
    *(undefined4 *)(iVar1 + 0x14) = uStack_2c;
    *(undefined4 *)(iVar1 + 0x18) = uStack_28;
    *(undefined4 *)(iVar1 + 0x1c) = uStack_24;
    *(undefined4 *)(iVar1 + 0x1c) = local_38;
  }
  _DAT_00ba83fc = _DAT_00ba83fc + -1;
  if (_DAT_00ba83fc == 0) {
    _DAT_00ba83f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba8380);
  return;
}



undefined4 FUN_00914160(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined1 auStack_88 [8];
  undefined1 local_80 [124];
  
  FUN_00943420(param_1);
  FUN_00943800(0);
  FUN_009438e0(0);
  local_d0 = 0x3f800000;
  if (*(char *)(param_2 + 0x2c) == '\0') {
    local_c0 = 0;
  }
  FUN_00943680(&local_d0);
  local_b0 = 0.5;
  local_ac = 0.2;
  local_a8 = 1.0;
  local_90 = 4;
  local_a0 = 0x3e4ccccd;
  uStack_9c = 0x3e4ccccd;
  uStack_98 = 0x3d4ccccd;
  uStack_94 = 0;
  fVar4 = (float10)FUN_00914320();
  local_b0 = (float)fVar4;
  fVar4 = (float10)FUN_00914330();
  local_ac = (float)fVar4;
  fVar4 = (float10)FUN_009142e0();
  local_a8 = (float)fVar4;
  puVar1 = (undefined4 *)FUN_009142f0(&local_d0);
  local_a0 = *puVar1;
  uStack_9c = puVar1[1];
  uStack_98 = puVar1[2];
  uStack_94 = puVar1[3];
  FUN_00943860(&local_b0);
  FUN_00943890(0);
  if (*(char *)(param_2 + 0x2d) == '\0') {
    local_cc = 0;
    local_c8 = 0;
  }
  else {
    local_c8 = 0x32;
  }
  local_c4 = 5;
  FUN_00943650(&local_d0);
  uVar2 = FUN_009436b0(local_80);
  uVar3 = (**(code **)*DAT_00ba7d98)(uVar2,0x25);
  uVar2 = FUN_009436d0(auStack_88,uVar3,uVar2);
  (**(code **)(*DAT_00ba7d98 + 4))(uVar3);
  FUN_0060d0a0();
  FUN_00943450();
  return uVar2;
}



float10 FUN_009142e0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x28);
}



void FUN_009142f0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x10);
  param_1[1] = *(undefined4 *)(in_ECX + 0x14);
  param_1[2] = *(undefined4 *)(in_ECX + 0x18);
  param_1[3] = *(undefined4 *)(in_ECX + 0x1c);
  return;
}



float10 FUN_00914320(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x20);
}



float10 FUN_00914330(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x24);
}



void FUN_00914340(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a9ce38;
  in_ECX[10] = 0x3e99999a;
  in_ECX[8] = 0x3ecccccd;
  in_ECX[9] = 0x3dcccccd;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[4] = 0x3d4ccccd;
  in_ECX[5] = 0x3d4ccccd;
  in_ECX[6] = 0x3d4ccccd;
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 0xb) = 1;
  *(undefined1 *)((int)in_ECX + 0x2d) = 1;
  return;
}



void FUN_009143a0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_00943f80(*(undefined4 *)(in_ECX + 0x10),param_1,param_2);
  return;
}



void FUN_009143d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  
  FUN_00944790(*(undefined4 *)(in_ECX + 0x10),param_1,param_2,param_3,param_4);
  return;
}



void FUN_00914420(int param_1,int param_2)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a9b120;
  in_ECX[3] = param_1;
  if (*(short *)(param_1 + 4) != 0) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  *in_ECX = &PTR_FUN_00a9ce84;
  in_ECX[4] = param_2;
  if (*(short *)(param_2 + 4) != 0) {
    *(short *)(param_2 + 6) = *(short *)(param_2 + 6) + 1;
  }
  return;
}



void FUN_00914470(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[4];
  *in_ECX = &PTR_FUN_00a9ce84;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[3];
  *in_ECX = &PTR_FUN_00a9b120;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_009144c0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int in_ECX;
  int unaff_FS_OFFSET;
  undefined1 local_89;
  undefined4 local_88;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar5 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtrcMopp";
    uVar4 = rdtsc();
    local_88 = (undefined4)uVar4;
    puVar3[1] = local_88;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  local_40 = 0;
  local_3c = 0;
  FUN_00945880(&local_89,*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x10),param_2,
               param_3);
  iVar1 = *(int *)(iVar1 + iVar5 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
    *param_1 = local_89;
    return;
  }
  *param_1 = local_89;
  return;
}



void FUN_009145a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
    *puVar3 = "TtrcMopp";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  FUN_00945960(*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x10),param_1,param_2,param_3)
  ;
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



void FUN_00914660(int *param_1)

{
  int in_ECX;
  
  (**(code **)*param_1)("MoppShape",1);
  (**(code **)(*param_1 + 8))(&DAT_00a9cec0,1,*(undefined4 *)(in_ECX + 0xc));
  (**(code **)(*param_1 + 4))
            (&DAT_00a9ceb8,1,*(int *)(in_ECX + 0x10),*(undefined4 *)(*(int *)(in_ECX + 0x10) + 0x24)
             ,0);
  (**(code **)(*param_1 + 0x14))();
  return;
}



void FUN_009146b0(byte param_1)

{
  FUN_00914470();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_009146e0(undefined1 (*param_1) [16],undefined4 param_2)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  int in_ECX;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  undefined1 local_70 [8];
  float fStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [16];
  float local_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  auVar3 = *(undefined1 (*) [12])(iVar1 + 0x10);
  fVar2 = 16777216.0 / *(float *)(iVar1 + 0x1c);
  local_70._0_4_ = auVar3._0_4_;
  uVar4 = local_70._0_4_;
  local_70._4_4_ = auVar3._4_4_;
  uVar5 = local_70._4_4_;
  fStack_68 = auVar3._8_4_;
  fVar6 = fStack_68;
  local_50[0] = (float)local_70._0_4_;
  local_50[1] = (float)local_70._4_4_;
  local_50[2] = fStack_68;
  local_50[3] = *(float *)(iVar1 + 0x1c);
  local_70._4_4_ = fVar2;
  local_70._0_4_ = fVar2;
  fStack_68 = fVar2;
  uStack_64 = 0;
  local_40 = (float)uVar4 + fVar2;
  fStack_3c = (float)uVar5 + fVar2;
  fStack_38 = fVar6 + fVar2;
  fStack_34 = *(float *)(iVar1 + 0x1c) + 0.0;
  pfVar8 = local_50;
  pfVar9 = (float *)local_70;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar9 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar9 = pfVar9 + 1;
  }
  _local_70 = maxps(_local_70,*param_1);
  local_60 = minps(local_60,param_1[1]);
  FUN_00944950(iVar1,local_70,param_2);
  return;
}



float10 FUN_00914790(float *param_1)

{
  int *in_ECX;
  float fStack_28;
  float fStack_24;
  float local_20 [7];
  
  (**(code **)(*in_ECX + 0x24))(param_1,local_20);
  return (float10)(local_20[0] * param_1[2] + fStack_24 * param_1[1] + fStack_28 * *param_1) +
         (float10)(float)in_ECX[3];
}



void FUN_009147f0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  float *pfVar1;
  char *pcVar2;
  int *in_ECX;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float local_30;
  undefined4 uStack_2c;
  undefined4 local_1c;
  
  local_1c = param_3[1];
  pcVar2 = (char *)(**(code **)(*in_ECX + 0x14))((int)&uStack_34 + 3,param_1,&local_30);
  if (*pcVar2 != '\0') {
    pfVar1 = *(float **)(param_2 + 8);
    uStack_2c = *(undefined4 *)(param_2 + 4);
    local_30 = pfVar1[0xb] * uStack_34;
    fVar6 = pfVar1[6] * fStack_38;
    fVar7 = pfVar1[7] * fStack_38;
    fVar3 = pfVar1[1] * fStack_3c;
    fVar4 = pfVar1[2] * fStack_3c;
    fVar5 = pfVar1[3] * fStack_3c;
    fStack_3c = *pfVar1 * fStack_3c + pfVar1[4] * fStack_38 + pfVar1[8] * uStack_34;
    fStack_38 = fVar3 + pfVar1[5] * fStack_38 + pfVar1[9] * uStack_34;
    uStack_34 = fVar4 + fVar6 + pfVar1[10] * uStack_34;
    local_30 = fVar5 + fVar7 + local_30;
    (**(code **)*param_3)(param_2,&fStack_3c);
  }
  return;
}



void FUN_009148a0(int *param_1)

{
  (**(code **)*param_1)("TriangleShp",1);
  (**(code **)(*param_1 + 0x14))();
  return;
}



void FUN_009148e0(undefined4 param_1,float param_2,float *param_3)

{
  int in_ECX;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  param_2 = param_2 + *(float *)(in_ECX + 0xc);
  FUN_0088fcc0(param_1,in_ECX + 0x10);
  FUN_0088fcc0(param_1,in_ECX + 0x20);
  FUN_0088fcc0(param_1,in_ECX + 0x30);
  auVar1 = minps(local_30,local_40);
  auVar1 = minps(auVar1,local_50);
  auVar2 = maxps(local_30,local_40);
  auVar2 = maxps(auVar2,local_50);
  *param_3 = auVar1._0_4_ - param_2;
  param_3[1] = auVar1._4_4_ - param_2;
  param_3[2] = auVar1._8_4_ - param_2;
  param_3[3] = auVar1._12_4_ - param_2;
  *(undefined1 (*) [16])(param_3 + 4) = auVar2;
  param_3[4] = param_3[4] + param_2;
  param_3[5] = param_3[5] + param_2;
  param_3[6] = param_3[6] + param_2;
  param_3[7] = param_3[7] + param_2;
  return;
}



void FUN_009149c0(undefined1 *param_1,float *param_2,float *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 *puVar5;
  int iVar6;
  int unaff_FS_OFFSET;
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
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  iVar3 = _tls_index;
  iVar6 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar1 = *(int *)(iVar6 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar5 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar5 = "TtrcTriangle";
    uVar2 = rdtsc();
    puVar5[1] = (int)uVar2;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar5 + 3;
  }
  fVar16 = *(float *)(in_ECX + 0x10);
  fVar20 = *(float *)(in_ECX + 0x14);
  fVar21 = *(float *)(in_ECX + 0x18);
  fVar12 = *(float *)(in_ECX + 0x30) - fVar16;
  fVar13 = *(float *)(in_ECX + 0x34) - fVar20;
  fVar14 = *(float *)(in_ECX + 0x38) - fVar21;
  fVar15 = *(float *)(in_ECX + 0x3c) - *(float *)(in_ECX + 0x1c);
  fVar7 = *(float *)(in_ECX + 0x20) - fVar16;
  fVar9 = *(float *)(in_ECX + 0x24) - fVar20;
  fVar10 = *(float *)(in_ECX + 0x28) - fVar21;
  fVar11 = *(float *)(in_ECX + 0x2c) - *(float *)(in_ECX + 0x1c);
  fVar8 = fVar9 * fVar14 - fVar10 * fVar13;
  fVar10 = fVar10 * fVar12 - fVar7 * fVar14;
  fVar12 = fVar7 * fVar13 - fVar9 * fVar12;
  fVar11 = fVar11 * fVar15 - fVar11 * fVar15;
  fVar9 = fVar21 * fVar12 + fVar20 * fVar10 + fVar16 * fVar8;
  fVar7 = (fVar12 * param_2[2] + fVar10 * param_2[1] + fVar8 * *param_2) - fVar9;
  fVar9 = (fVar12 * param_2[6] + fVar10 * param_2[5] + fVar8 * param_2[4]) - fVar9;
  if ((fVar9 * fVar7 < 0.0) || ((fVar7 == 0.0 && (fVar9 != 0.0)))) {
    fVar9 = fVar7 / (fVar7 - fVar9);
    if (fVar9 < param_3[5]) {
      fVar14 = (1.0 - fVar9) * *param_2 + fVar9 * param_2[4];
      fVar15 = (1.0 - fVar9) * param_2[1] + fVar9 * param_2[5];
      fVar25 = (1.0 - fVar9) * param_2[2] + fVar9 * param_2[6];
      fVar16 = fVar16 - fVar14;
      fVar20 = fVar20 - fVar15;
      fVar21 = fVar21 - fVar25;
      fVar22 = *(float *)(in_ECX + 0x20) - fVar14;
      fVar23 = *(float *)(in_ECX + 0x24) - fVar15;
      fVar24 = *(float *)(in_ECX + 0x28) - fVar25;
      fVar13 = (fVar12 * fVar12 + fVar10 * fVar10 + fVar8 * fVar8) * -0.0001;
      if (fVar13 <= (fVar16 * fVar23 - fVar20 * fVar22) * fVar12 +
                    (fVar21 * fVar22 - fVar16 * fVar24) * fVar10 +
                    (fVar20 * fVar24 - fVar21 * fVar23) * fVar8) {
        fVar14 = *(float *)(in_ECX + 0x30) - fVar14;
        fVar15 = *(float *)(in_ECX + 0x34) - fVar15;
        fVar25 = *(float *)(in_ECX + 0x38) - fVar25;
        if ((fVar13 <= (fVar22 * fVar15 - fVar23 * fVar14) * fVar12 +
                       (fVar24 * fVar14 - fVar22 * fVar25) * fVar10 +
                       (fVar23 * fVar25 - fVar24 * fVar15) * fVar8) &&
           (fVar13 <= (fVar14 * fVar20 - fVar15 * fVar16) * fVar12 +
                      (fVar25 * fVar16 - fVar14 * fVar21) * fVar10 +
                      (fVar15 * fVar21 - fVar25 * fVar20) * fVar8)) {
          param_3[5] = fVar9;
          if (fVar7 <= 0.0) {
            fVar8 = -fVar8;
            fVar10 = -fVar10;
            fVar12 = -fVar12;
            fVar11 = -fVar11;
          }
          *param_3 = fVar8;
          param_3[1] = fVar10;
          param_3[2] = fVar12;
          param_3[3] = fVar11;
          fVar7 = *param_3;
          fVar9 = param_3[1];
          fVar16 = param_3[2];
          iVar6 = *(int *)(iVar6 + iVar3 * 4);
          fVar20 = fVar9 * fVar9;
          fVar21 = fVar16 * fVar16;
          auVar17._4_4_ = fVar20;
          auVar17._0_4_ = fVar20;
          auVar17._8_4_ = fVar20;
          auVar17._12_4_ = fVar20;
          auVar18._4_12_ = auVar17._4_12_;
          auVar18._0_4_ = fVar20 + fVar7 * fVar7;
          auVar19._4_4_ = fVar21;
          auVar19._0_4_ = fVar21 + auVar18._0_4_;
          auVar19._8_4_ = fVar21;
          auVar19._12_4_ = fVar21;
          auVar19 = rsqrtss(auVar18,auVar19);
          fVar20 = auVar19._0_4_;
          fVar20 = fVar20 * 0.5 * (3.0 - (fVar21 + auVar18._0_4_) * fVar20 * fVar20);
          *param_3 = fVar20 * fVar7;
          param_3[1] = fVar20 * fVar9;
          param_3[2] = fVar20 * fVar16;
          param_3[3] = fVar20 * param_3[3];
          param_3[4] = -NAN;
          if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
            puVar5 = *(undefined4 **)(iVar6 + 0x1a4);
            *puVar5 = &DAT_00a9610c;
            uVar2 = rdtsc();
            puVar5[1] = (int)uVar2;
            *(undefined4 **)(iVar6 + 0x1a4) = puVar5 + 3;
          }
          *param_1 = 1;
          return;
        }
      }
    }
    iVar6 = *(int *)(iVar6 + iVar3 * 4);
    if (*(uint *)(iVar6 + 0x1a8) <= *(uint *)(iVar6 + 0x1a4)) goto LAB_00914de2;
    puVar5 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar5 = &DAT_00a9610c;
    uVar2 = rdtsc();
    uVar4 = (undefined4)uVar2;
  }
  else {
    iVar6 = *(int *)(iVar6 + iVar3 * 4);
    if (*(uint *)(iVar6 + 0x1a8) <= *(uint *)(iVar6 + 0x1a4)) goto LAB_00914de2;
    puVar5 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar5 = &DAT_00a9610c;
    uVar2 = rdtsc();
    uVar4 = (undefined4)uVar2;
  }
  puVar5[1] = uVar4;
  *(undefined4 **)(iVar6 + 0x1a4) = puVar5 + 3;
LAB_00914de2:
  *param_1 = 0;
  return;
}



void FUN_00914e00(float *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_ECX;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar9 = *(float *)(in_ECX + 0x20) * fVar2 + *(float *)(in_ECX + 0x24) * fVar3 +
          *(float *)(in_ECX + 0x28) * fVar4;
  fVar10 = *(float *)(in_ECX + 0x30) * fVar2 + *(float *)(in_ECX + 0x34) * fVar3 +
           *(float *)(in_ECX + 0x38) * fVar4;
  if (fVar10 <= fVar9) {
    uVar8 = 0x10;
  }
  else {
    uVar8 = 0x20;
    fVar9 = fVar10;
  }
  if (fVar9 < *(float *)(in_ECX + 0x10) * fVar2 + *(float *)(in_ECX + 0x14) * fVar3 +
              *(float *)(in_ECX + 0x18) * fVar4) {
    uVar8 = 0;
  }
  puVar1 = (undefined4 *)(uVar8 + 0x10 + in_ECX);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  param_2[3] = uVar8 | 0x3f000000;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00914ec0(void)

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
  *in_ECX = &PTR_FUN_00a9922c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba8400 = _DAT_00ba8400 + -1;
  local_4 = 0xffffffff;
  FUN_008a2550();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00914f30(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_008a2a50(param_1);
  param_1 = FUN_0070f910(DAT_00ba8404);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00914f90(int *param_1)

{
  (**(code **)*param_1)("PlaneShape",1);
  (**(code **)(*param_1 + 0x14))();
  return;
}



void FUN_00914fd0(float *param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a9cf48;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  in_ECX[4] = *param_1;
  in_ECX[5] = fVar1;
  in_ECX[6] = fVar2;
  in_ECX[7] = fVar3;
  in_ECX[7] = -(param_1[2] * param_2[2] + param_1[1] * param_2[1] + *param_1 * *param_2);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  in_ECX[8] = *param_2;
  in_ECX[9] = fVar1;
  in_ECX[10] = fVar2;
  in_ECX[0xb] = fVar3;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  in_ECX[0xc] = *param_3;
  in_ECX[0xd] = uVar4;
  in_ECX[0xe] = uVar5;
  in_ECX[0xf] = uVar6;
  return;
}



void FUN_00915050(undefined1 *param_1,float *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int in_ECX;
  int unaff_FS_OFFSET;
  float fVar10;
  float fVar11;
  undefined1 local_18 [20];
  
  iVar8 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtrcPlane";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(*(int *)(iVar1 + iVar8 * 4) + 0x1a4) = puVar3 + 3;
  }
  fVar10 = *(float *)(in_ECX + 0x14) * param_2[1] + *(float *)(in_ECX + 0x10) * *param_2 +
           *(float *)(in_ECX + 0x18) * param_2[2] + *(float *)(in_ECX + 0x1c);
  if (0.0 <= fVar10) {
    fVar11 = *(float *)(in_ECX + 0x14) * param_2[5] + *(float *)(in_ECX + 0x10) * param_2[4] +
             *(float *)(in_ECX + 0x18) * param_2[6] + *(float *)(in_ECX + 0x1c);
    if (fVar11 < 0.0) {
      fVar10 = fVar10 / (fVar10 - fVar11);
      auVar5._4_4_ = -(uint)(ABS(((1.0 - fVar10) * param_2[1] + fVar10 * param_2[5]) -
                                 *(float *)(in_ECX + 0x24)) <= *(float *)(in_ECX + 0x34));
      auVar5._0_4_ = -(uint)(ABS(((1.0 - fVar10) * *param_2 + fVar10 * param_2[4]) -
                                 *(float *)(in_ECX + 0x20)) <= *(float *)(in_ECX + 0x30));
      auVar5._8_4_ = -(uint)(ABS(((1.0 - fVar10) * param_2[2] + fVar10 * param_2[6]) -
                                 *(float *)(in_ECX + 0x28)) <= *(float *)(in_ECX + 0x38));
      auVar5._12_4_ =
           -(uint)(ABS(((1.0 - fVar10) * param_2[3] + fVar10 * param_2[7]) -
                       *(float *)(in_ECX + 0x2c)) <= *(float *)(in_ECX + 0x3c));
      uVar9 = movmskps(CONCAT22((short)((uint)local_18 >> 0x10),
                                (ushort)(fVar11 < 0.0) << 8 | (ushort)NAN(fVar11) << 10 |
                                (ushort)(fVar11 == 0.0) << 0xe),auVar5);
      if (((byte)uVar9 & 7) == 7) {
        param_3[5] = fVar10;
        uVar9 = *(undefined4 *)(in_ECX + 0x14);
        uVar6 = *(undefined4 *)(in_ECX + 0x18);
        uVar7 = *(undefined4 *)(in_ECX + 0x1c);
        *param_3 = *(undefined4 *)(in_ECX + 0x10);
        param_3[1] = uVar9;
        param_3[2] = uVar6;
        param_3[3] = uVar7;
        param_3[4] = 0xffffffff;
        iVar1 = *(int *)(iVar1 + iVar8 * 4);
        if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
          puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
          *puVar3 = &DAT_00a9610c;
          uVar4 = rdtsc();
          puVar3[1] = (int)uVar4;
          *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
        }
        *param_1 = 1;
        return;
      }
    }
  }
  iVar1 = *(int *)(iVar1 + iVar8 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  *param_1 = 0;
  return;
}



void FUN_00915230(undefined4 param_1,int param_2,undefined4 *param_3)

{
  char *pcVar1;
  int *in_ECX;
  undefined1 local_31;
  undefined1 local_30 [20];
  undefined4 local_1c;
  
  local_1c = param_3[1];
  pcVar1 = (char *)(**(code **)(*in_ECX + 0x14))(&local_31,param_1,local_30);
  if (*pcVar1 != '\0') {
    FUN_0088fe00(*(undefined4 *)(param_2 + 8),&stack0xffffffc4);
    (**(code **)*param_3)(param_2,&stack0xffffffc4);
  }
  return;
}



void FUN_00915290(float *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  float local_1c;
  
  local_1c = (*(float *)(in_ECX + 0x14) * param_1[1] + *(float *)(in_ECX + 0x10) * *param_1 +
             *(float *)(in_ECX + 0x18) * param_1[2] + *(float *)(in_ECX + 0x1c)) - param_1[0xc];
  fVar2 = (*(float *)(in_ECX + 0x14) * param_1[5] + *(float *)(in_ECX + 0x10) * param_1[4] +
          *(float *)(in_ECX + 0x18) * param_1[6] + *(float *)(in_ECX + 0x1c)) - param_1[0xc];
  if ((fVar2 < 0.0) && (fVar2 = local_1c - fVar2, param_1[0xd] <= fVar2)) {
    if (local_1c < 0.0 == (local_1c == 0.0)) {
      local_1c = local_1c / fVar2;
    }
    else {
      local_1c = 0.0;
    }
    auVar1._4_4_ = -(uint)(ABS(((1.0 - local_1c) * param_1[1] + local_1c * param_1[5]) -
                               *(float *)(in_ECX + 0x24)) <= *(float *)(in_ECX + 0x34));
    auVar1._0_4_ = -(uint)(ABS(((1.0 - local_1c) * *param_1 + local_1c * param_1[4]) -
                               *(float *)(in_ECX + 0x20)) <= *(float *)(in_ECX + 0x30));
    auVar1._8_4_ = -(uint)(ABS(((1.0 - local_1c) * param_1[2] + local_1c * param_1[6]) -
                               *(float *)(in_ECX + 0x28)) <= *(float *)(in_ECX + 0x38));
    auVar1._12_4_ =
         -(uint)(ABS(((1.0 - local_1c) * param_1[3] + local_1c * param_1[7]) -
                     *(float *)(in_ECX + 0x2c)) <= *(float *)(in_ECX + 0x3c));
    uVar3 = movmskps(param_1,auVar1);
    if (((byte)uVar3 & 7) == 7) {
      local_30 = *(undefined4 *)(in_ECX + 0x10);
      uStack_2c = *(undefined4 *)(in_ECX + 0x14);
      uStack_28 = *(undefined4 *)(in_ECX + 0x18);
      uStack_24 = *(undefined4 *)(in_ECX + 0x1c);
      local_20 = 0xffffffff;
      (**(code **)*param_3)(param_2,&local_30);
      return;
    }
  }
  return;
}



void FUN_009153f0(undefined4 *param_1,int param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float *pfVar4;
  int in_ECX;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  
  pfVar7 = (float *)*param_1;
  iVar8 = param_1[1];
  fVar5 = (float)(iVar8 - 1);
  if (-1 < (int)fVar5) {
    pfVar4 = (float *)(param_2 + 0xc);
    do {
      auVar1._4_4_ = -(uint)(ABS(pfVar7[1] - *(float *)(in_ECX + 0x24)) <= *(float *)(in_ECX + 0x34)
                            );
      auVar1._0_4_ = -(uint)(ABS(*pfVar7 - *(float *)(in_ECX + 0x20)) <= *(float *)(in_ECX + 0x30));
      auVar1._8_4_ = -(uint)(ABS(pfVar7[2] - *(float *)(in_ECX + 0x28)) <= *(float *)(in_ECX + 0x38)
                            );
      auVar1._12_4_ =
           -(uint)(ABS(pfVar7[3] - *(float *)(in_ECX + 0x2c)) <= *(float *)(in_ECX + 0x3c));
      uVar6 = movmskps(fVar5,auVar1);
      fVar5 = (float)(uVar6 & 7);
      if (SUB41(fVar5,0) == '\a') {
        fVar5 = *(float *)(in_ECX + 0x14);
        fVar2 = *(float *)(in_ECX + 0x18);
        fVar3 = *(float *)(in_ECX + 0x1c);
        pfVar4[-3] = *(float *)(in_ECX + 0x10);
        pfVar4[-2] = fVar5;
        pfVar4[-1] = fVar2;
        *pfVar4 = fVar3;
        fVar5 = *(float *)(in_ECX + 0x14) * pfVar7[1] + *(float *)(in_ECX + 0x10) * *pfVar7 +
                *(float *)(in_ECX + 0x18) * pfVar7[2] + *(float *)(in_ECX + 0x1c);
        *pfVar4 = fVar5;
      }
      else {
        *pfVar4 = 3.4028235e+38;
      }
      pfVar4 = pfVar4 + 4;
      pfVar7 = pfVar7 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}



undefined1 * FUN_009154e0(undefined1 *param_1,float *param_2,undefined4 param_3)

{
  char *pcVar1;
  int in_ECX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 local_21;
  float local_20;
  
  fVar4 = param_2[4] - *param_2;
  fVar5 = param_2[5] - param_2[1];
  fVar6 = param_2[6] - param_2[2];
  fVar3 = fVar6 * fVar6;
  fVar2 = fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
  auVar7._4_4_ = fVar3;
  auVar7._0_4_ = fVar2;
  auVar7._8_4_ = fVar3;
  auVar7._12_4_ = fVar3;
  auVar7 = rsqrtss(auVar7,auVar7);
  fVar3 = auVar7._0_4_;
  fVar2 = fVar3 * 0.5 * (3.0 - fVar2 * fVar3 * fVar3);
  local_20 = fVar2 * fVar6 * *(float *)(in_ECX + 0x48) +
             fVar2 * fVar5 * *(float *)(in_ECX + 0x44) + fVar2 * fVar4 * *(float *)(in_ECX + 0x40);
  if (0.0 <= local_20) {
    *param_1 = 0;
    return param_1;
  }
  pcVar1 = (char *)FUN_009149c0(&local_21,param_2,param_3);
  *param_1 = *pcVar1 != '\0';
  return param_1;
}



void FUN_009155c0(void)

{
  int in_ECX;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  fVar1 = *(float *)(in_ECX + 0x20) - *(float *)(in_ECX + 0x10);
  fVar2 = *(float *)(in_ECX + 0x24) - *(float *)(in_ECX + 0x14);
  fVar3 = *(float *)(in_ECX + 0x28) - *(float *)(in_ECX + 0x18);
  fVar4 = *(float *)(in_ECX + 0x2c) - *(float *)(in_ECX + 0x1c);
  fVar5 = *(float *)(in_ECX + 0x30) - *(float *)(in_ECX + 0x20);
  fVar6 = *(float *)(in_ECX + 0x34) - *(float *)(in_ECX + 0x24);
  fVar7 = *(float *)(in_ECX + 0x38) - *(float *)(in_ECX + 0x28);
  fVar8 = *(float *)(in_ECX + 0x3c) - *(float *)(in_ECX + 0x2c);
  *(float *)(in_ECX + 0x40) = fVar7 * fVar2 - fVar6 * fVar3;
  *(float *)(in_ECX + 0x44) = fVar5 * fVar3 - fVar7 * fVar1;
  *(float *)(in_ECX + 0x48) = fVar6 * fVar1 - fVar5 * fVar2;
  *(float *)(in_ECX + 0x4c) = fVar8 * fVar4 - fVar8 * fVar4;
  fVar1 = *(float *)(in_ECX + 0x40);
  fVar2 = *(float *)(in_ECX + 0x44);
  fVar3 = *(float *)(in_ECX + 0x48);
  fVar5 = fVar3 * fVar3;
  fVar4 = fVar5 + fVar2 * fVar2 + fVar1 * fVar1;
  auVar9._4_4_ = fVar5;
  auVar9._0_4_ = fVar4;
  auVar9._8_4_ = fVar5;
  auVar9._12_4_ = fVar5;
  auVar9 = rsqrtss(auVar9,auVar9);
  fVar5 = auVar9._0_4_;
  fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
  *(float *)(in_ECX + 0x40) = fVar4 * fVar1;
  *(float *)(in_ECX + 0x44) = fVar4 * fVar2;
  *(float *)(in_ECX + 0x48) = fVar4 * fVar3;
  *(float *)(in_ECX + 0x4c) = fVar4 * *(float *)(in_ECX + 0x4c);
  return;
}



int FUN_00915670(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = (**(code **)(*in_ECX + 0x20))(); iVar1 != -1;
      iVar1 = (**(code **)(*in_ECX + 0x24))(iVar1)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



void FUN_009156a0(int *param_1)

{
  (**(code **)*param_1)("Collection",1);
  (**(code **)(*param_1 + 0x14))();
  return;
}



void FUN_009156c0(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a9abf4;
  *(undefined1 *)(in_ECX + 3) = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_009156e0(undefined1 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int *in_ECX;
  int unaff_FS_OFFSET;
  undefined1 auStack_230 [3];
  undefined1 uStack_22d;
  uint local_22c;
  undefined1 auStack_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar1 = "TtrcShpCollect";
    uVar2 = rdtsc();
    local_22c = (uint)uVar2;
    puVar1[1] = local_22c;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar1 + 3;
  }
  local_22c = local_22c & 0xffffff00;
  if (*(int *)(param_2 + 0x24) == 0) {
    for (iVar3 = (**(code **)(*in_ECX + 0x20))(); iVar3 != -1;
        iVar3 = (**(code **)(*in_ECX + 0x24))(iVar3)) {
      piVar4 = (int *)(**(code **)(*in_ECX + 0x28))(iVar3,auStack_220);
      pcVar5 = (char *)(**(code **)(*piVar4 + 0x14))(&stack0xfffffdcb,param_2,param_3);
      if (*pcVar5 != '\0') {
        *(int *)(param_3 + 0x10) = iVar3;
      }
    }
  }
  else {
    for (iVar3 = (**(code **)(*in_ECX + 0x20))(); iVar3 != -1;
        iVar3 = (**(code **)(*in_ECX + 0x24))(iVar3)) {
      pcVar5 = (char *)(**(code **)**(undefined4 **)(param_2 + 0x24))(&uStack_22d,param_2);
      if (*pcVar5 != '\0') {
        piVar4 = (int *)(**(code **)(*in_ECX + 0x28))(iVar3,auStack_230);
        pcVar5 = (char *)(**(code **)(*piVar4 + 0x14))(&stack0xfffffdc3,param_2,param_3);
        if (*pcVar5 != '\0') {
          *(int *)(param_3 + 0x10) = iVar3;
        }
      }
    }
  }
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar1 + 3;
    *param_1 = (undefined1)local_22c;
    return;
  }
  *param_1 = (undefined1)local_22c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00915880(undefined4 param_1,undefined4 param_2,undefined1 (*param_3) [16])

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int *piVar5;
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int unaff_FS_OFFSET;
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  undefined4 local_244;
  undefined1 auStack_240 [12];
  undefined1 auStack_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar1 = "TthkShapeCollection::getAabb";
    uVar2 = rdtsc();
    local_244 = (undefined4)uVar2;
    puVar1[1] = local_244;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar1 + 3;
  }
  *(undefined4 *)*param_3 = 0;
  *(undefined4 *)(*param_3 + 4) = 0;
  *(undefined4 *)(*param_3 + 8) = 0;
  *(undefined4 *)(*param_3 + 0xc) = 0;
  *(undefined4 *)param_3[1] = 0;
  *(undefined4 *)(param_3[1] + 4) = 0;
  *(undefined4 *)(param_3[1] + 8) = 0;
  *(undefined4 *)(param_3[1] + 0xc) = 0;
  iVar4 = (**(code **)(*in_ECX + 0x20))();
  if (iVar4 != -1) {
    piVar5 = (int *)(**(code **)(*in_ECX + 0x28))(iVar4,auStack_220);
    (**(code **)(*piVar5 + 0xc))(param_1,param_2,param_3);
    do {
      puVar7 = auStack_220;
      piVar5 = (int *)(**(code **)(*in_ECX + 0x28))(iVar4);
      (**(code **)(*piVar5 + 0xc))(param_1,param_2,&stack0xfffffdb8);
      auVar6._4_4_ = unaff_EDI;
      auVar6._0_4_ = puVar7;
      auVar6._8_4_ = unaff_ESI;
      auVar6._12_4_ = unaff_EBX;
      auVar6 = minps(*param_3,auVar6);
      auVar3._4_12_ = auStack_240;
      auVar3._0_4_ = local_244;
      *param_3 = auVar6;
      auVar6 = maxps(param_3[1],auVar3);
      param_3[1] = auVar6;
      iVar4 = (**(code **)(*in_ECX + 0x24))(iVar4);
    } while (iVar4 != -1);
  }
  iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar1 + 3;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float10 FUN_009159d0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int unaff_FS_OFFSET;
  float10 fVar6;
  float fStack_234;
  undefined1 auStack_220 [524];
  undefined4 local_14;
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_14 = DAT_00b30aac;
  iVar4 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar2 = "TthkShapeCollection::getMaximumProjection";
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar2 + 3;
  }
  for (iVar4 = (**(code **)(*in_ECX + 0x20))(); iVar4 != -1;
      iVar4 = (**(code **)(*in_ECX + 0x24))(iVar4)) {
    piVar5 = (int *)(**(code **)(*in_ECX + 0x28))(iVar4,auStack_220);
    fVar6 = (float10)(**(code **)(*piVar5 + 0x10))(param_1);
    if ((float10)fStack_234 <= fVar6) {
      fStack_234 = (float)fVar6;
    }
  }
  iVar1 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return (float10)-3.4028235e+38;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00915ae0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *in_ECX;
  int unaff_FS_OFFSET;
  int *local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  int iStack_22c;
  undefined1 auStack_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar1 = "TtrcShpCollect";
    uVar2 = rdtsc();
    local_238 = (int *)uVar2;
    puVar1[1] = local_238;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar1 + 3;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    for (iVar3 = (**(code **)(*in_ECX + 0x20))(); iVar3 != -1;
        iVar3 = (**(code **)(*in_ECX + 0x24))(iVar3)) {
      local_238 = (int *)(**(code **)(*in_ECX + 0x28))(iVar3,auStack_220);
      uStack_230 = *(undefined4 *)(param_2 + 8);
      iStack_22c = param_2;
      uStack_234 = iVar3;
      (**(code **)(*local_238 + 0x18))(param_1,&local_238,param_3);
    }
  }
  else {
    for (iVar3 = (**(code **)(*in_ECX + 0x20))(); iVar3 != -1;
        iVar3 = (**(code **)(*in_ECX + 0x24))(iVar3)) {
      pcVar4 = (char *)(**(code **)**(undefined4 **)(param_1 + 0x24))((int)&uStack_234 + 3,param_1);
      if (*pcVar4 != '\0') {
        piVar5 = (int *)(**(code **)(*in_ECX + 0x28))(iVar3,&uStack_230);
        (**(code **)(*piVar5 + 0x18))(param_1,&stack0xfffffdb8,param_3);
      }
    }
  }
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar1 + 3;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_00915c60(uint param_1)

{
  int iVar1;
  int *in_ECX;
  undefined1 auStack_228 [8];
  undefined1 local_220 [524];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_228;
  while( true ) {
    param_1 = param_1 + 1;
    if ((uint)*(ushort *)(*(int *)(in_ECX[10] + (param_1 >> 0x14) * 8) + 0x40) <=
        (param_1 & 0xfffff)) {
      param_1 = ((param_1 >> 0x14) + 1) * 0x100000;
    }
    if (in_ECX[0xc] <= (int)(param_1 >> 0x14)) break;
    iVar1 = (**(code **)(*in_ECX + 0x28))(param_1,local_220);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return 0xffffffff;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_00915d00(uint param_1,undefined4 *param_2)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int in_ECX;
  ushort uVar13;
  int iVar14;
  float fVar15;
  undefined4 *local_64 [5];
  uint local_50;
  int local_4c;
  undefined4 *local_48;
  int local_44;
  ushort *local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)local_64;
  local_48 = param_2;
  iVar9 = *(int *)(*(int *)(in_ECX + 0x28) + (param_1 >> 0x14) * 8);
  local_44 = *(int *)(iVar9 + 0x48);
  uVar7 = *(ushort *)(iVar9 + 0x44);
  local_50 = (uint)uVar7;
  iVar14 = *(int *)(iVar9 + 0x4c);
  iVar10 = *(int *)(iVar9 + 0x1c);
  local_4c = *(int *)(iVar9 + 0x20);
  local_64[0] = (undefined4 *)(param_1 & 0xfffff);
  uVar13 = 0;
  if (uVar7 != 0) {
    do {
      local_34 = (ushort *)(local_44 + (uint)uVar13 * 2);
      if (local_64[0] < (undefined4 *)(*local_34 - 2)) break;
      local_64[0] = (undefined4 *)((int)local_64[0] + (2 - (uint)*local_34));
      uVar13 = uVar13 + 1;
      iVar14 = iVar14 + (uint)*local_34 * 2;
    } while (uVar13 < uVar7);
  }
  puVar1 = (ushort *)(iVar14 + (int)local_64[0] * 2);
  uVar7 = *puVar1;
  uVar13 = puVar1[1];
  uVar8 = puVar1[2];
  if (((uVar7 == uVar13) || (uVar7 == uVar8)) || (uVar13 == uVar8)) {
    return (undefined4 *)0x0;
  }
  iVar14 = (uint)uVar7 * 0xc;
  iVar9 = (uint)uVar13 * 0xc;
  iVar11 = (uint)uVar8 * 0xc;
  if (param_2 == (undefined4 *)0x0) {
    local_64[0] = (undefined4 *)0x0;
  }
  else {
    local_50 = *(uint *)(in_ECX + 0x20);
    *(undefined2 *)((int)param_2 + 6) = 1;
    param_2[2] = 0;
    param_2[3] = local_50;
    *param_2 = &PTR_FUN_00a99384;
    local_64[0] = param_2;
  }
  puVar12 = local_64[0];
  fVar4 = *(float *)(in_ECX + 0x14);
  fVar5 = *(float *)(in_ECX + 0x18);
  fVar2 = *(float *)(iVar14 + 4 + iVar10);
  fVar3 = *(float *)(iVar14 + 8 + iVar10);
  fVar15 = *(float *)(in_ECX + 0x1c) * fStack_24;
  local_64[0][4] = *(float *)(in_ECX + 0x10) * *(float *)(iVar14 + iVar10) * 0.14287673;
  local_64[0][5] = fVar4 * fVar2 * 0.14287673;
  local_64[0][6] = fVar5 * fVar3 * 0.14287673;
  local_64[0][7] = fVar15;
  fVar4 = *(float *)(in_ECX + 0x14);
  fVar5 = *(float *)(in_ECX + 0x18);
  fVar2 = *(float *)(iVar9 + 4 + iVar10);
  fVar3 = *(float *)(iVar9 + 8 + iVar10);
  fVar15 = *(float *)(in_ECX + 0x1c) * fVar15;
  local_64[0][8] = *(float *)(in_ECX + 0x10) * *(float *)(iVar9 + iVar10) * 0.14287673;
  local_64[0][9] = fVar4 * fVar2 * 0.14287673;
  local_64[0][10] = fVar5 * fVar3 * 0.14287673;
  local_64[0][0xb] = fVar15;
  local_30 = *(float *)(in_ECX + 0x10) * *(float *)(iVar11 + iVar10) * 0.14287673;
  fStack_2c = *(float *)(in_ECX + 0x14) * *(float *)(iVar11 + 4 + iVar10) * 0.14287673;
  fStack_28 = *(float *)(in_ECX + 0x18) * *(float *)(iVar11 + 8 + iVar10) * 0.14287673;
  fStack_24 = *(float *)(in_ECX + 0x1c) * fVar15;
  local_64[0][0xc] = local_30;
  local_64[0][0xd] = fStack_2c;
  local_64[0][0xe] = fStack_28;
  local_64[0][0xf] = fStack_24;
  if (local_4c != 0) {
    fVar2 = *(float *)(iVar9 + 4 + local_4c);
    fVar3 = *(float *)(iVar14 + 4 + local_4c);
    fVar4 = *(float *)(iVar9 + 8 + local_4c);
    fVar5 = *(float *)(iVar14 + 8 + local_4c);
    fVar15 = *(float *)(iVar11 + 4 + local_4c);
    fVar6 = *(float *)(iVar11 + 8 + local_4c);
    local_64[0][0x10] =
         (*(float *)(iVar11 + local_4c) +
         *(float *)(iVar9 + local_4c) + *(float *)(iVar14 + local_4c)) * 0.3333333;
    local_64[0][0x11] = (fVar15 + fVar2 + fVar3) * 0.3333333;
    local_64[0][0x12] = (fVar6 + fVar4 + fVar5) * 0.3333333;
    local_64[0][0x13] = fStack_24;
    return local_64[0];
  }
  FUN_009155c0();
  return puVar12;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00915fe0(undefined4 param_1,float param_2,undefined1 (*param_3) [16])

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_54 [8];
  undefined4 local_4c;
  uint local_48;
  int local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [16];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_54;
  *(undefined4 *)*param_3 = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 4) = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 8) = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 0xc) = 0;
  local_4c = param_1;
  local_44 = 0;
  *(undefined4 *)param_3[1] = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 4) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 8) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 0xc) = 0;
  *(undefined4 *)*param_3 = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 4) = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 8) = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 0xc) = 0;
  fStack_34 = 0.0;
  *(undefined4 *)param_3[1] = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 4) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 8) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 0xc) = 0;
  if (0 < *(int *)(in_ECX + 0x30)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x28) + local_44 * 8);
      local_48 = (uint)*(ushort *)(iVar1 + 8);
      if (local_48 != 0) {
        pfVar5 = (float *)(*(int *)(iVar1 + 0x1c) + 8);
        do {
          local_40 = *(float *)(in_ECX + 0x10) * pfVar5[-2] * 0.14287673;
          fStack_3c = *(float *)(in_ECX + 0x14) * pfVar5[-1] * 0.14287673;
          fStack_38 = *(float *)(in_ECX + 0x18) * *pfVar5 * 0.14287673;
          fStack_34 = *(float *)(in_ECX + 0x1c) * fStack_34;
          FUN_0088fcc0(local_4c,&local_40);
          auVar6 = minps(*param_3,local_30);
          *param_3 = auVar6;
          pfVar5 = pfVar5 + 3;
          local_48 = local_48 - 1;
          auVar6 = maxps(param_3[1],local_30);
          param_3[1] = auVar6;
        } while (local_48 != 0);
      }
      local_44 = local_44 + 1;
    } while (local_44 < *(int *)(in_ECX + 0x30));
  }
  fVar2 = *(float *)(*param_3 + 4);
  fVar3 = *(float *)(*param_3 + 8);
  fVar4 = *(float *)(*param_3 + 0xc);
  param_2 = *(float *)(in_ECX + 0x20) + param_2;
  *(float *)*param_3 = *(float *)*param_3 - param_2;
  *(float *)(*param_3 + 4) = fVar2 - param_2;
  *(float *)(*param_3 + 8) = fVar3 - param_2;
  *(float *)(*param_3 + 0xc) = fVar4 - param_2;
  fVar2 = *(float *)(param_3[1] + 4);
  fVar3 = *(float *)(param_3[1] + 8);
  fVar4 = *(float *)(param_3[1] + 0xc);
  *(float *)param_3[1] = *(float *)param_3[1] + param_2;
  *(float *)(param_3[1] + 4) = fVar2 + param_2;
  *(float *)(param_3[1] + 8) = fVar3 + param_2;
  *(float *)(param_3[1] + 0xc) = fVar4 + param_2;
  return;
}



void FUN_00916150(void)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7b58;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9d010;
  pvVar1 = (void *)in_ECX[10];
  local_4 = 0;
  in_ECX[9] = &PTR_FUN_00a995d0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,8,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4,uVar2);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_009161d0(int param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_54 [8];
  undefined4 *local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d7b93;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_54;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffa0;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_4c = in_ECX;
  FUN_009156c0(uVar1);
  *in_ECX = &PTR_FUN_00a9d010;
  in_ECX[9] = &PTR_FUN_00a995d0;
  in_ECX[0xb] = 0;
  in_ECX[0xe] = 1;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[10] = 0;
  in_ECX[8] = *(undefined4 *)(param_1 + 4);
  local_14 = 2;
  local_40 = *(undefined4 *)(param_1 + 0x20);
  uStack_3c = *(undefined4 *)(param_1 + 0x24);
  uStack_38 = *(undefined4 *)(param_1 + 0x28);
  uStack_34 = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[4] = local_40;
  in_ECX[5] = uStack_3c;
  in_ECX[6] = uStack_38;
  in_ECX[7] = uStack_34;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      local_44 = *(int *)(param_1 + 0xc) + iVar2 * 8;
      local_48 = in_ECX[0xc];
      if ((uint)in_ECX[0xb] <= local_48) {
        FUN_008c69c0(in_ECX[0xe] + local_48);
      }
      FUN_008c68d0(local_48,local_44);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  *unaff_FS_OFFSET = local_1c;
  return local_4c;
}



void FUN_009162e0(byte param_1)

{
  int in_ECX;
  
  FUN_00916150();
  if (((param_1 & 1) != 0) && (in_ECX != 0)) {
    FUN_00401e40(in_ECX - (uint)*(byte *)(in_ECX + -1));
  }
  return;
}



void FUN_00916310(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(in_ECX + 0x20);
  FUN_008c6be0();
  FUN_0047dcd0(in_ECX + 0x10);
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x30)) {
    do {
      iVar1 = *(int *)(in_ECX + 0x28);
      uVar2 = *(uint *)(param_1 + 0x14);
      if (*(uint *)(param_1 + 0x10) <= uVar2) {
        FUN_008c69c0(*(int *)(param_1 + 0x1c) + uVar2);
      }
      FUN_008c68d0(uVar2,iVar1 + iVar3 * 8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x30));
  }
  return;
}



void FUN_00916380(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 9;
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
  in_ECX[4] = 0x3f800000;
  in_ECX[9] = 0x3f800000;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x21] = param_4;
  in_ECX[0x22] = param_5;
  *in_ECX = &PTR_FUN_00a9d044;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  in_ECX[0x18] = *param_1;
  in_ECX[0x19] = uVar1;
  in_ECX[0x1a] = uVar2;
  in_ECX[0x1b] = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  in_ECX[0x1c] = *param_2;
  in_ECX[0x1d] = uVar1;
  in_ECX[0x1e] = uVar2;
  in_ECX[0x1f] = uVar3;
  in_ECX[0x20] = param_3;
  return;
}



void FUN_00916400(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [12];
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int in_ECX;
  int iVar15;
  int iVar16;
  float *pfVar17;
  int *piVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  int iStack_e4;
  int iStack_e0;
  int local_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  int iStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  int iStack_a4;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
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
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  fStack_64 = 1.0 / (float)*(int *)(in_ECX + 0x88);
  local_70 = fStack_64 * (*(float *)(in_ECX + 0x60) - *(float *)(in_ECX + 0x70));
  fStack_6c = fStack_64 * (*(float *)(in_ECX + 100) - *(float *)(in_ECX + 0x74));
  fStack_68 = fStack_64 * (*(float *)(in_ECX + 0x68) - *(float *)(in_ECX + 0x78));
  fStack_64 = fStack_64 * (*(float *)(in_ECX + 0x6c) - *(float *)(in_ECX + 0x7c));
  fVar19 = fStack_6c * fStack_6c;
  fVar20 = fStack_68 * fStack_68;
  auVar21._4_4_ = fVar19;
  auVar21._0_4_ = fVar19;
  auVar21._8_4_ = fVar19;
  auVar21._12_4_ = fVar19;
  auVar22._4_12_ = auVar21._4_12_;
  auVar22._0_4_ = fVar19 + local_70 * local_70;
  auVar23._4_4_ = fVar20;
  auVar23._0_4_ = fVar20 + auVar22._0_4_;
  auVar23._8_4_ = fVar20;
  auVar23._12_4_ = fVar20;
  auVar23 = rsqrtss(auVar22,auVar23);
  fVar19 = auVar23._0_4_;
  fStack_84 = fVar19 * 0.5 * (3.0 - (fVar20 + auVar22._0_4_) * fVar19 * fVar19);
  local_90 = fStack_84 * local_70;
  fStack_8c = fStack_84 * fStack_6c;
  fStack_88 = fStack_84 * fStack_68;
  fStack_84 = fStack_84 * fStack_64;
  if (ABS(local_90) <= 0.5) {
    if (ABS(fStack_8c) <= 0.5) {
      fVar19 = fStack_58;
      fVar20 = fStack_54;
      if (0.5 < ABS(fStack_88)) {
        local_60 = 1.0;
        fStack_5c = 0.0;
        fVar19 = 0.0;
        fVar20 = 0.0;
      }
    }
    else {
      local_60 = 0.0;
      fStack_5c = 0.0;
      fVar19 = 1.0;
      fVar20 = 0.0;
    }
  }
  else {
    local_60 = 0.0;
    fStack_5c = 1.0;
    fVar19 = 0.0;
    fVar20 = 0.0;
  }
  fVar24 = *(float *)(in_ECX + 0x80);
  local_50 = fVar24 * (fStack_8c * fVar19 - fStack_88 * fStack_5c);
  fStack_4c = fVar24 * (fStack_88 * local_60 - local_90 * fVar19);
  auStack_48._4_4_ = fVar24 * (fStack_84 * fVar20 - fStack_84 * fVar20);
  auStack_48._0_4_ = fVar24 * (local_90 * fStack_5c - fStack_8c * local_60);
  FUN_008b1b00(&local_90,6.2831855 / (float)*(int *)(in_ECX + 0x84));
  FUN_008b1b00(&local_90,0);
  piVar11 = (int *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x24);
  piVar18 = (int *)0x0;
  if (piVar11 != (int *)0x0) {
    *piVar11 = 0;
    piVar11[1] = 0;
    piVar11[2] = -0x80000000;
    piVar11[3] = 0;
    piVar11[4] = 0;
    piVar11[5] = -0x80000000;
    piVar18 = piVar11;
  }
  *(int **)(in_ECX + 0x50) = piVar18;
  iVar16 = piVar18[1];
  iVar1 = iVar16 + 1;
  if ((int)(piVar18[2] & 0x3fffffffU) < iVar1) {
    iVar15 = (piVar18[2] & 0x3fffffffU) * 2;
    if (iVar15 <= iVar1) {
      iVar15 = iVar1;
    }
    FUN_008a6e40(piVar18,iVar15,0x10);
  }
  piVar18[1] = iVar16 + 1;
  uVar7 = *(undefined4 *)(in_ECX + 0x74);
  uVar8 = *(undefined4 *)(in_ECX + 0x78);
  uVar9 = *(undefined4 *)(in_ECX + 0x7c);
  puVar2 = (undefined4 *)(iVar16 * 0x10 + *piVar18);
  *puVar2 = *(undefined4 *)(in_ECX + 0x70);
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  fVar19 = (float)*(int *)(in_ECX + 0x88);
  piVar18 = *(int **)(in_ECX + 0x50);
  iVar16 = piVar18[1];
  iVar1 = iVar16 + 1;
  fStack_88 = fVar19 * fStack_78 + *(float *)(in_ECX + 0x70);
  fStack_84 = fVar19 * fStack_74 + *(float *)(in_ECX + 0x74);
  fStack_80 = fVar19 * local_70 + *(float *)(in_ECX + 0x78);
  fStack_7c = fVar19 * fStack_6c + *(float *)(in_ECX + 0x7c);
  if ((int)(piVar18[2] & 0x3fffffffU) < iVar1) {
    iVar15 = (piVar18[2] & 0x3fffffffU) * 2;
    if (iVar15 <= iVar1) {
      iVar15 = iVar1;
    }
    FUN_008a6e40(piVar18,iVar15,0x10);
  }
  pfVar17 = (float *)(iVar16 * 0x10 + *piVar18);
  piVar18[1] = iVar16 + 1;
  *pfVar17 = fStack_88;
  pfVar17[1] = fStack_84;
  pfVar17[2] = fStack_80;
  pfVar17[3] = fStack_7c;
  iStack_bc = 0;
  if (0 < *(int *)(in_ECX + 0x84)) {
    auVar10._4_4_ = fStack_54;
    auVar10._0_4_ = fStack_58;
    auVar10._8_4_ = local_50;
    fStack_24 = fStack_58;
    fStack_20 = fStack_54;
    fStack_28 = local_50;
    fStack_40 = fStack_58;
    auStack_48 = (undefined1  [8])auVar10._4_8_;
    fStack_3c = fStack_4c;
    fStack_1c = fStack_4c;
    fVar19 = fStack_54;
    fVar20 = local_50;
    fVar24 = fStack_58;
    fVar25 = fStack_4c;
    while( true ) {
      fStack_88 = fStack_d8;
      fStack_84 = fStack_d4;
      fStack_80 = local_d0;
      fStack_7c = 0.0;
      fVar5 = (fStack_cc * fStack_cc + fStack_cc * fStack_cc) - 1.0;
      fVar26 = local_d0 * local_50 + fStack_d4 * fStack_54 + fStack_d8 * fStack_58;
      fVar26 = fVar26 + fVar26;
      fVar6 = fStack_cc + fStack_cc;
      fStack_b8 = *(float *)(in_ECX + 0x70) +
                  fVar5 * fStack_58 + fVar26 * fStack_d8 +
                  fVar6 * (fStack_d4 * fStack_28 - local_d0 * fVar19);
      fStack_b4 = *(float *)(in_ECX + 0x74) +
                  fVar5 * fStack_54 + fVar26 * fStack_d4 +
                  fVar6 * (local_d0 * fStack_24 - fStack_d8 * fVar20);
      local_b0 = *(float *)(in_ECX + 0x78) +
                 fVar5 * local_50 + fVar26 * local_d0 +
                 fVar6 * (fStack_d8 * fStack_20 - fStack_d4 * fVar24);
      fStack_ac = *(float *)(in_ECX + 0x7c) +
                  fVar5 * fStack_4c + fVar26 * 0.0 + fVar6 * (fStack_1c * 0.0 - fVar25 * 0.0);
      iStack_e0 = 0;
      if (0 < *(int *)(in_ECX + 0x88)) {
        do {
          piVar18 = *(int **)(in_ECX + 0x50);
          iVar16 = piVar18[1];
          iVar1 = iVar16 + 1;
          if ((int)(piVar18[2] & 0x3fffffffU) < iVar1) {
            iVar15 = (piVar18[2] & 0x3fffffffU) * 2;
            if (iVar15 <= iVar1) {
              iVar15 = iVar1;
            }
            FUN_008a6e40(piVar18,iVar15,0x10);
          }
          piVar18[1] = iVar16 + 1;
          pfVar17 = (float *)(iVar16 * 0x10 + *piVar18);
          *pfVar17 = fStack_b8;
          pfVar17[1] = fStack_b4;
          pfVar17[2] = local_b0;
          pfVar17[3] = fStack_ac;
          fStack_b8 = fStack_b8 + fStack_78;
          fStack_b4 = fStack_b4 + fStack_74;
          local_b0 = local_b0 + local_70;
          fStack_ac = fStack_ac + fStack_6c;
          iStack_e0 = iStack_e0 + 1;
        } while (iStack_e0 < *(int *)(in_ECX + 0x88));
      }
      piVar18 = *(int **)(in_ECX + 0x50);
      iVar16 = piVar18[1];
      iVar1 = iVar16 + 1;
      if ((int)(piVar18[2] & 0x3fffffffU) < iVar1) {
        iVar15 = (piVar18[2] & 0x3fffffffU) * 2;
        if (iVar15 <= iVar1) {
          iVar15 = iVar1;
        }
        FUN_008a6e40(piVar18,iVar15,0x10);
      }
      piVar18[1] = iVar16 + 1;
      pfVar17 = (float *)(iVar16 * 0x10 + *piVar18);
      *pfVar17 = fStack_b8;
      pfVar17[1] = fStack_b4;
      pfVar17[2] = local_b0;
      pfVar17[3] = fStack_ac;
      fStack_68 = fStack_d8;
      fStack_64 = fStack_d4;
      FUN_00889470(&fStack_68,auStack_38);
      iStack_bc = iStack_bc + 1;
      if (*(int *)(in_ECX + 0x84) <= iStack_bc) break;
      fVar19 = (float)auStack_48._0_4_;
      fVar20 = (float)auStack_48._4_4_;
      fVar24 = fStack_40;
      fVar25 = fStack_3c;
    }
  }
  iVar16 = *(int *)(in_ECX + 0x88);
  iVar1 = iVar16 + 1;
  fStack_d4 = (float)(iVar16 + 3);
  iVar15 = iVar1 * *(int *)(in_ECX + 0x84) + 2;
  fStack_cc = (float)(iVar16 + 4);
  fStack_d8 = 2.8026e-45;
  local_d0 = 4.2039e-45;
  local_dc = 0;
  if (0 < *(int *)(in_ECX + 0x84)) {
    do {
      iStack_e0 = 0;
      if (0 < iVar16) {
        do {
          iVar3 = *(int *)(in_ECX + 0x50);
          iVar4 = *(int *)(iVar3 + 0x10);
          iVar16 = iVar4 + 1;
          uVar12 = *(uint *)(iVar3 + 0x14) & 0x3fffffff;
          if ((int)uVar12 < iVar16) {
            iVar13 = uVar12 * 2;
            if (iVar13 <= iVar16) {
              iVar13 = iVar16;
            }
            FUN_008a6e40((int *)(iVar3 + 0xc),iVar13,0xc);
          }
          *(int *)(iVar3 + 0x10) = iVar4 + 1;
          piVar18 = (int *)(*(int *)(iVar3 + 0xc) + iVar4 * 0xc);
          *piVar18 = (int)fStack_d8;
          piVar18[1] = (int)fStack_d4;
          piVar18[2] = (int)local_d0;
          iVar3 = *(int *)(in_ECX + 0x50);
          iVar4 = *(int *)(iVar3 + 0x10);
          iVar16 = iVar4 + 1;
          uVar12 = *(uint *)(iVar3 + 0x14) & 0x3fffffff;
          if ((int)uVar12 < iVar16) {
            iVar13 = uVar12 * 2;
            if (iVar13 <= iVar16) {
              iVar13 = iVar16;
            }
            FUN_008a6e40((int *)(iVar3 + 0xc),iVar13,0xc);
          }
          *(int *)(iVar3 + 0x10) = iVar4 + 1;
          piVar18 = (int *)(*(int *)(iVar3 + 0xc) + iVar4 * 0xc);
          piVar18[1] = (int)fStack_d4;
          *piVar18 = (int)local_d0;
          piVar18[2] = (int)fStack_cc;
          fStack_d8 = (float)((int)fStack_d8 + 1);
          fStack_d4 = (float)((int)fStack_d4 + 1);
          local_d0 = (float)((int)local_d0 + 1);
          fStack_cc = (float)((int)fStack_cc + 1);
          iVar16 = *(int *)(in_ECX + 0x88);
          iStack_e0 = iStack_e0 + 1;
        } while (iStack_e0 < iVar16);
      }
      fStack_d8 = (float)((int)fStack_d8 + 1);
      fStack_d4 = (float)((int)fStack_d4 + 1);
      local_d0 = (float)((int)local_d0 + 1);
      fStack_cc = (float)((int)fStack_cc + 1);
      if (iVar15 <= (int)fStack_cc) {
        fStack_d4 = (float)((int)fStack_d4 + (2 - iVar15));
        fStack_cc = (float)((int)fStack_cc + (2 - iVar15));
      }
      local_dc = local_dc + 1;
    } while (local_dc < *(int *)(in_ECX + 0x84));
  }
  local_dc = 0;
  do {
    if (local_dc == 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = *(int *)(in_ECX + 0x88);
    }
    iStack_e4 = 0;
    iStack_a4 = iVar16 + 2;
    if (0 < *(int *)(in_ECX + 0x84)) {
      do {
        iVar16 = iStack_a4 + iVar1;
        if (iVar15 <= iVar16) {
          iVar16 = iVar16 + (2 - iVar15);
        }
        iVar4 = *(int *)(in_ECX + 0x50);
        piVar18 = (int *)(iVar4 + 0xc);
        uVar12 = *(uint *)(iVar4 + 0x14) & 0x3fffffff;
        iVar13 = *(int *)(iVar4 + 0x10);
        iVar3 = iVar13 + 1;
        if (local_dc == 0) {
          if ((int)uVar12 < iVar3) {
            iVar14 = uVar12 * 2;
            if ((int)(uVar12 * 2) <= iVar3) {
              iVar14 = iVar3;
            }
            FUN_008a6e40(piVar18,iVar14,0xc);
          }
          puVar2 = (undefined4 *)(*piVar18 + iVar13 * 0xc);
          *(int *)(iVar4 + 0x10) = iVar3;
          *puVar2 = 0;
          puVar2[1] = iVar16;
          puVar2[2] = iStack_a4;
        }
        else {
          if ((int)uVar12 < iVar3) {
            iVar14 = uVar12 * 2;
            if ((int)(uVar12 * 2) <= iVar3) {
              iVar14 = iVar3;
            }
            FUN_008a6e40(piVar18,iVar14,0xc);
          }
          piVar18 = (int *)(*piVar18 + iVar13 * 0xc);
          *(int *)(iVar4 + 0x10) = iVar3;
          *piVar18 = local_dc;
          piVar18[1] = iStack_a4;
          piVar18[2] = iVar16;
        }
        iStack_e4 = iStack_e4 + 1;
        iStack_a4 = iVar16;
      } while (iStack_e4 < *(int *)(in_ECX + 0x84));
    }
    local_dc = local_dc + 1;
  } while (local_dc < 2);
  return;
}



int FUN_00916bc0(void)

{
  int in_ECX;
  
  return in_ECX + 0x40;
}



void FUN_00916c00(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  int in_ECX;
  float fVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pfVar1 = *(float **)(in_ECX + 0x30);
  fVar16 = -3.4028235e+38;
  iVar11 = *(int *)(in_ECX + 0x34) * 4;
  uVar6 = 0;
  if (0 < iVar11) {
    fVar2 = *param_1;
    fVar3 = param_1[1];
    fVar4 = param_1[2];
    uVar9 = 3;
    fVar7 = fVar3;
    pfVar10 = pfVar1;
    fVar17 = fVar16;
    fVar18 = fVar16;
    fVar19 = fVar16;
    do {
      fVar12 = fVar2 * *pfVar10 + fVar3 * pfVar10[4] + fVar4 * pfVar10[8];
      fVar13 = fVar2 * pfVar10[1] + fVar3 * pfVar10[5] + fVar4 * pfVar10[9];
      fVar14 = fVar2 * pfVar10[2] + fVar3 * pfVar10[6] + fVar4 * pfVar10[10];
      fVar15 = fVar2 * pfVar10[3] + fVar3 * pfVar10[7] + fVar4 * pfVar10[0xb];
      auVar5._4_4_ = -(uint)(fVar17 < fVar13);
      auVar5._0_4_ = -(uint)(fVar16 < fVar12);
      auVar5._8_4_ = -(uint)(fVar18 < fVar14);
      auVar5._12_4_ = -(uint)(fVar19 < fVar15);
      iVar8 = movmskps(fVar7,auVar5);
      if (iVar8 != 0) {
        switch(iVar8) {
        case 1:
          goto switchD_00916cb9_caseD_1;
        case 2:
switchD_00916cb9_caseD_2:
          uVar6 = uVar9 - 2;
          fVar16 = fVar13;
          fVar17 = fVar13;
          fVar18 = fVar13;
          fVar19 = fVar13;
          goto LAB_00916d4c;
        case 4:
          goto switchD_00916cb9_caseD_4;
        case 8:
          goto switchD_00916cb9_caseD_8;
        case 0xd:
          goto switchD_00916cb9_caseD_d;
        case 0xe:
switchD_00916cb9_caseD_e:
          if (fVar14 < fVar13) {
            if (fVar13 <= fVar15) goto switchD_00916cb9_caseD_8;
            goto switchD_00916cb9_caseD_2;
          }
          goto LAB_00916d1d;
        }
        if (fVar12 <= fVar13) goto switchD_00916cb9_caseD_e;
switchD_00916cb9_caseD_d:
        if (fVar14 < fVar12) {
          if (fVar12 <= fVar15) goto switchD_00916cb9_caseD_8;
switchD_00916cb9_caseD_1:
          uVar6 = uVar9 - 3;
          fVar16 = fVar12;
          fVar17 = fVar12;
          fVar18 = fVar12;
          fVar19 = fVar12;
        }
        else {
LAB_00916d1d:
          if (fVar14 <= fVar15) {
switchD_00916cb9_caseD_8:
            uVar6 = uVar9;
            fVar16 = fVar15;
            fVar17 = fVar15;
            fVar18 = fVar15;
            fVar19 = fVar15;
          }
          else {
switchD_00916cb9_caseD_4:
            uVar6 = uVar9 - 1;
            fVar16 = fVar14;
            fVar17 = fVar14;
            fVar18 = fVar14;
            fVar19 = fVar14;
          }
        }
      }
LAB_00916d4c:
      fVar7 = (float)(uVar9 + 1);
      pfVar10 = pfVar10 + 0xc;
      uVar9 = uVar9 + 4;
    } while ((int)fVar7 < iVar11);
  }
  iVar11 = (int)uVar6 >> 2;
  uVar9 = uVar6 & 3;
  *param_2 = pfVar1[iVar11 * 0xc + uVar9];
  param_2[1] = pfVar1[iVar11 * 0xc + uVar9 + 4];
  param_2[2] = pfVar1[iVar11 * 0xc + uVar9 + 8];
  param_2[3] = (float)(uVar6 | 0x3f000000);
  return;
}



void FUN_00916f60(undefined1 *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int in_ECX;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int unaff_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_2c;
  float local_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = _tls_index;
  iVar6 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar4 = *(int *)(iVar6 + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar3 = "TtrcConvexVert";
    uVar1 = rdtsc();
    puVar3[1] = (int)uVar1;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar3 + 3;
  }
  local_24 = param_3[5];
  iVar4 = *(int *)(in_ECX + 0x44) + -1;
  local_2c = -1.0;
  if (-1 < iVar4) {
    pfVar5 = (float *)(iVar4 * 0x10 + *(int *)(in_ECX + 0x40));
    do {
      fVar8 = *pfVar5;
      fVar9 = pfVar5[1];
      fVar10 = pfVar5[2];
      fVar11 = pfVar5[3];
      fVar12 = fVar9 * param_2[1] + fVar8 * *param_2 + fVar10 * param_2[2] + fVar11;
      fVar7 = fVar9 * param_2[5] + fVar8 * param_2[4] + fVar10 * param_2[6] + fVar11;
      if (fVar12 < 0.0) {
        if (0.0 <= fVar7) {
          fVar7 = fVar12 / (fVar12 - fVar7);
          fVar8 = local_20;
          fVar9 = fStack_1c;
          fVar10 = fStack_18;
          fVar11 = fStack_14;
          fVar12 = local_2c;
          if (local_24 < fVar7) goto LAB_009170b4;
          goto LAB_009170b6;
        }
      }
      else {
        if (0.0 <= fVar7) {
          iVar6 = *(int *)(iVar6 + iVar2 * 4);
          if (*(uint *)(iVar6 + 0x1a8) <= *(uint *)(iVar6 + 0x1a4)) goto LAB_0091711f;
          puVar3 = *(undefined4 **)(iVar6 + 0x1a4);
          *puVar3 = &DAT_00a9610c;
          uVar1 = rdtsc();
          local_24 = (float)uVar1;
          goto LAB_0091710f;
        }
        fVar12 = fVar12 / (fVar12 - fVar7);
        fVar7 = local_24;
        if (local_2c < fVar12 == (local_2c == fVar12)) {
LAB_009170b4:
          fVar8 = local_20;
          fVar9 = fStack_1c;
          fVar10 = fStack_18;
          fVar11 = fStack_14;
          fVar12 = local_2c;
          fVar7 = local_24;
        }
LAB_009170b6:
        local_24 = fVar7;
        local_2c = fVar12;
        local_20 = fVar8;
        fStack_1c = fVar9;
        fStack_18 = fVar10;
        fStack_14 = fVar11;
        if (local_24 < local_2c) {
          iVar6 = *(int *)(iVar6 + iVar2 * 4);
          if (*(uint *)(iVar6 + 0x1a8) <= *(uint *)(iVar6 + 0x1a4)) goto LAB_0091711f;
          puVar3 = *(undefined4 **)(iVar6 + 0x1a4);
          *puVar3 = &DAT_00a9610c;
          uVar1 = rdtsc();
          local_24 = (float)uVar1;
          goto LAB_0091710f;
        }
      }
      iVar4 = iVar4 + -1;
      pfVar5 = pfVar5 + -4;
    } while (-1 < iVar4);
    if (0.0 <= local_2c) {
      *param_3 = local_20;
      param_3[1] = fStack_1c;
      param_3[2] = fStack_18;
      param_3[3] = fStack_14;
      param_3[5] = local_2c;
      param_3[4] = -NAN;
      iVar6 = *(int *)(iVar6 + iVar2 * 4);
      if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
        puVar3 = *(undefined4 **)(iVar6 + 0x1a4);
        *puVar3 = &DAT_00a9610c;
        uVar1 = rdtsc();
        puVar3[1] = (int)uVar1;
        *(undefined4 **)(iVar6 + 0x1a4) = puVar3 + 3;
      }
      *param_1 = 1;
      return;
    }
  }
  iVar6 = *(int *)(iVar6 + iVar2 * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar1 = rdtsc();
    local_24 = (float)uVar1;
LAB_0091710f:
    puVar3[1] = local_24;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar3 + 3;
  }
LAB_0091711f:
  *param_1 = 0;
  return;
}



void FUN_00917200(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(in_ECX + 0x3c);
  if ((int)(param_1[2] & 0x3fffffffU) < iVar7) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar7) {
      iVar4 = iVar7;
    }
    FUN_008a6e40(param_1,iVar4,0x10);
  }
  param_1[1] = iVar7;
  uVar6 = 0;
  if (0 < *(int *)(in_ECX + 0x3c)) {
    iVar7 = 0;
    do {
      iVar3 = *(int *)(in_ECX + 0x30);
      iVar4 = (uVar6 & 3) + ((int)(uVar6 + ((int)uVar6 >> 0x1f & 3U)) >> 2) * 0xc;
      uVar1 = *(undefined4 *)(iVar3 + 0x20 + iVar4 * 4);
      puVar5 = (undefined4 *)(*param_1 + iVar7);
      uVar2 = *(undefined4 *)(iVar3 + 0x10 + iVar4 * 4);
      *puVar5 = *(undefined4 *)(iVar3 + iVar4 * 4);
      puVar5[1] = uVar2;
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0x10;
      puVar5[2] = uVar1;
      puVar5[3] = 0;
    } while ((int)uVar6 < *(int *)(in_ECX + 0x3c));
  }
  return;
}



void FUN_00917290(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  uint local_3c;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar2 = param_3 + 3U & 0xfffffffc;
  piVar1 = (int *)(in_ECX + 0x30);
  *(int *)(in_ECX + 0x3c) = param_3;
  iVar7 = (int)(uVar2 + ((int)(param_3 + 3U) >> 0x1f & 3U)) >> 2;
  uVar3 = *(uint *)(in_ECX + 0x38) & 0x3fffffff;
  if ((int)uVar3 < iVar7) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar7) {
      iVar4 = iVar7;
    }
    FUN_008a6e40(piVar1,iVar4,0x30);
  }
  uVar3 = 0;
  *(int *)(in_ECX + 0x34) = iVar7;
  puVar5 = param_1;
  if (3 < param_3) {
    local_3c = 1;
    do {
      uVar6 = uVar3 >> 2;
      *(undefined4 *)(*piVar1 + uVar6 * 0x30) = *puVar5;
      *(undefined4 *)(*piVar1 + 0x10 + uVar6 * 0x30) = puVar5[1];
      *(undefined4 *)(*piVar1 + 0x20 + uVar6 * 0x30) = puVar5[2];
      iVar7 = (local_3c & 3) + (local_3c >> 2) * 0xc;
      *(undefined4 *)(*piVar1 + iVar7 * 4) = *(undefined4 *)((int)puVar5 + param_2);
      *(undefined4 *)(*piVar1 + 0x10 + iVar7 * 4) = *(undefined4 *)((int)puVar5 + param_2 + 4);
      *(undefined4 *)(*piVar1 + 0x20 + iVar7 * 4) = *(undefined4 *)((int)puVar5 + param_2 + 8);
      iVar7 = (local_3c + 1 & 3) + (local_3c + 1 >> 2) * 0xc;
      *(undefined4 *)(*piVar1 + iVar7 * 4) = *(undefined4 *)((int)puVar5 + param_2 * 2);
      *(undefined4 *)(*piVar1 + 0x10 + iVar7 * 4) = *(undefined4 *)((int)puVar5 + param_2 * 2 + 4);
      *(undefined4 *)(*piVar1 + 0x20 + iVar7 * 4) = *(undefined4 *)((int)puVar5 + param_2 * 2 + 8);
      iVar7 = (local_3c - 2 & 3) + (local_3c + 2 >> 2) * 0xc;
      *(undefined4 *)(*piVar1 + iVar7 * 4) = *(undefined4 *)((int)puVar5 + param_2 * 3);
      *(undefined4 *)(*piVar1 + 0x10 + iVar7 * 4) = *(undefined4 *)((int)puVar5 + param_2 * 3 + 4);
      *(undefined4 *)(*piVar1 + 0x20 + iVar7 * 4) = *(undefined4 *)((int)puVar5 + param_2 * 3 + 8);
      local_3c = local_3c + 4;
      uVar3 = uVar3 + 4;
      puVar5 = puVar5 + param_2;
    } while ((int)uVar3 < param_3 + -3);
  }
  for (; (int)uVar3 < param_3; uVar3 = uVar3 + 1) {
    iVar7 = (uVar3 & 3) + (uVar3 >> 2) * 0xc;
    *(undefined4 *)(*piVar1 + iVar7 * 4) = *puVar5;
    *(undefined4 *)(*piVar1 + 0x10 + iVar7 * 4) = puVar5[1];
    *(undefined4 *)(*piVar1 + 0x20 + iVar7 * 4) = puVar5[2];
    puVar5 = (undefined4 *)((int)puVar5 + param_2);
  }
  puVar5 = (undefined4 *)((int)puVar5 - param_2);
  for (; (int)uVar3 < (int)uVar2; uVar3 = uVar3 + 1) {
    iVar7 = (uVar3 & 3) + ((int)uVar3 >> 2) * 0xc;
    *(undefined4 *)(*piVar1 + iVar7 * 4) = *puVar5;
    *(undefined4 *)(*piVar1 + 0x10 + iVar7 * 4) = puVar5[1];
    *(undefined4 *)(*piVar1 + 0x20 + iVar7 * 4) = puVar5[2];
  }
  FUN_008b8800(param_1,param_3,param_2,&local_30);
  *(float *)(in_ECX + 0x20) = local_30 + local_20;
  *(float *)(in_ECX + 0x24) = fStack_2c + fStack_1c;
  *(float *)(in_ECX + 0x28) = fStack_28 + fStack_18;
  *(float *)(in_ECX + 0x2c) = fStack_24 + fStack_14;
  *(float *)(in_ECX + 0x20) = *(float *)(in_ECX + 0x20) * 0.5;
  *(float *)(in_ECX + 0x24) = *(float *)(in_ECX + 0x24) * 0.5;
  *(float *)(in_ECX + 0x28) = *(float *)(in_ECX + 0x28) * 0.5;
  *(float *)(in_ECX + 0x2c) = *(float *)(in_ECX + 0x2c) * 0.5;
  *(float *)(in_ECX + 0x10) = local_20 - local_30;
  *(float *)(in_ECX + 0x14) = fStack_1c - fStack_2c;
  *(float *)(in_ECX + 0x18) = fStack_18 - fStack_28;
  *(float *)(in_ECX + 0x1c) = fStack_14 - fStack_24;
  *(float *)(in_ECX + 0x10) = *(float *)(in_ECX + 0x10) * 0.5;
  *(float *)(in_ECX + 0x14) = *(float *)(in_ECX + 0x14) * 0.5;
  *(float *)(in_ECX + 0x18) = *(float *)(in_ECX + 0x18) * 0.5;
  *(float *)(in_ECX + 0x1c) = *(float *)(in_ECX + 0x1c) * 0.5;
  return;
}



undefined4 * FUN_009174d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar6 = *(undefined4 **)(in_ECX + 0x30);
  iVar5 = *(uint *)(in_ECX + 0x3c) - 1;
  puVar9 = param_1;
  if (2 < iVar5) {
    uVar7 = *(uint *)(in_ECX + 0x3c) >> 2;
    iVar5 = iVar5 + uVar7 * -4;
    puVar8 = param_1;
    do {
      uVar2 = puVar6[4];
      uVar3 = puVar6[8];
      uVar4 = *(undefined4 *)(in_ECX + 0xc);
      *puVar8 = *puVar6;
      puVar8[1] = uVar2;
      puVar8[2] = uVar3;
      puVar8[3] = uVar4;
      uVar2 = puVar6[5];
      uVar3 = puVar6[9];
      uVar4 = *(undefined4 *)(in_ECX + 0xc);
      puVar8[4] = puVar6[1];
      puVar8[5] = uVar2;
      puVar8[6] = uVar3;
      puVar8[7] = uVar4;
      uVar2 = puVar6[6];
      uVar3 = puVar6[10];
      uVar4 = *(undefined4 *)(in_ECX + 0xc);
      puVar8[8] = puVar6[2];
      puVar8[9] = uVar2;
      puVar8[10] = uVar3;
      puVar8[0xb] = uVar4;
      puVar1 = puVar6 + 3;
      uVar2 = puVar6[7];
      uVar3 = puVar6[0xb];
      uVar4 = *(undefined4 *)(in_ECX + 0xc);
      puVar9 = puVar8 + 0x10;
      puVar6 = puVar6 + 0xc;
      uVar7 = uVar7 - 1;
      puVar8[0xc] = *puVar1;
      puVar8[0xd] = uVar2;
      puVar8[0xe] = uVar3;
      puVar8[0xf] = uVar4;
      puVar8 = puVar9;
    } while (uVar7 != 0);
  }
  puVar8 = puVar9;
  if (-1 < iVar5) {
    uVar2 = puVar6[4];
    uVar3 = puVar6[8];
    uVar4 = *(undefined4 *)(in_ECX + 0xc);
    puVar8 = puVar9 + 4;
    *puVar9 = *puVar6;
    puVar9[1] = uVar2;
    puVar9[2] = uVar3;
    puVar9[3] = uVar4;
  }
  puVar9 = puVar8;
  if (0 < iVar5) {
    uVar2 = puVar6[5];
    uVar3 = puVar6[9];
    uVar4 = *(undefined4 *)(in_ECX + 0xc);
    puVar9 = puVar8 + 4;
    *puVar8 = puVar6[1];
    puVar8[1] = uVar2;
    puVar8[2] = uVar3;
    puVar8[3] = uVar4;
  }
  if (1 < iVar5) {
    uVar2 = puVar6[6];
    uVar3 = puVar6[10];
    uVar4 = *(undefined4 *)(in_ECX + 0xc);
    *puVar9 = puVar6[2];
    puVar9[1] = uVar2;
    puVar9[2] = uVar3;
    puVar9[3] = uVar4;
  }
  return param_1;
}



void FUN_009176f0(byte param_1)

{
  FUN_008d24e0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00917773) */
/* WARNING: Removing unreachable block (ram,0x00917787) */
/* WARNING: Removing unreachable block (ram,0x0091778d) */

void FUN_00917720(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int iVar6;
  int iVar7;
  
  in_ECX[3] = param_5;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a9d068;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0x80000000;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0x80000000;
  if (0 < param_4[1]) {
    uVar4 = FUN_008a7560(param_4[1] << 4,0x14);
    in_ECX[0x10] = uVar4;
    in_ECX[0x12] = in_ECX[0x12] & 0x40000000 | param_4[1];
  }
  iVar6 = param_4[1];
  puVar5 = (undefined4 *)in_ECX[0x10];
  in_ECX[0x11] = iVar6;
  if (0 < iVar6) {
    iVar7 = *param_4 - (int)puVar5;
    do {
      puVar1 = (undefined4 *)(iVar7 + (int)puVar5);
      uVar4 = puVar1[1];
      uVar2 = puVar1[2];
      uVar3 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar4;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5 = puVar5 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00917290(param_1,param_3,param_2);
  return;
}



void FUN_00917820(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 local_30;
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
  
  puStack_8 = &LAB_009d7bc8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&local_30;
  *unaff_FS_OFFSET = (int)&local_c;
  local_30 = *param_1;
  local_2c = param_1[1];
  local_28 = 0x10;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x80000000;
  local_4 = 0;
  FUN_008f2010(&local_30,&local_24,param_2,1,uVar4);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *param_3 = local_24;
  uVar3 = param_3[2];
  param_3[1] = local_20;
  param_3[2] = local_1c;
  local_4 = 0xffffffff;
  local_24 = uVar1;
  local_20 = uVar2;
  local_1c = uVar3;
  FUN_008b44c0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00917900(int *param_1)

{
  int in_ECX;
  
  (**(code **)*param_1)("CvxTransform",1);
  (**(code **)(*param_1 + 8))("Child",1,*(undefined4 *)(in_ECX + 0x10));
  (**(code **)(*param_1 + 0x14))();
  return;
}



void FUN_00917940(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[4];
  *in_ECX = &PTR_FUN_00a9d0e8;
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



void FUN_009179b0(int param_1,undefined4 *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = param_1;
  in_ECX[3] = uVar2;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a9d0e8;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  in_ECX[8] = *param_2;
  in_ECX[9] = uVar2;
  in_ECX[10] = uVar3;
  in_ECX[0xb] = uVar4;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  in_ECX[0xc] = param_2[4];
  in_ECX[0xd] = uVar2;
  in_ECX[0xe] = uVar3;
  in_ECX[0xf] = uVar4;
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  in_ECX[0x10] = param_2[8];
  in_ECX[0x11] = uVar2;
  in_ECX[0x12] = uVar3;
  in_ECX[0x13] = uVar4;
  uVar2 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar4 = param_2[0xf];
  in_ECX[0x14] = param_2[0xc];
  in_ECX[0x15] = uVar2;
  in_ECX[0x16] = uVar3;
  in_ECX[0x17] = uVar4;
  if (*(short *)(in_ECX[4] + 4) != 0) {
    psVar1 = (short *)(in_ECX[4] + 6);
    *psVar1 = *psVar1 + 1;
  }
  return;
}



void FUN_00917a10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  undefined1 local_50 [76];
  
  FUN_008b1f70(param_1,in_ECX + 0x20);
  (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(local_50,param_2,param_3);
  return;
}



float10 FUN_00917a50(float *param_1)

{
  float fVar1;
  int in_ECX;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar4 = *param_1;
  fVar3 = param_1[1];
  fVar1 = param_1[2];
  local_20 = *(float *)(in_ECX + 0x20) * fVar4 + *(float *)(in_ECX + 0x24) * fVar3 +
             *(float *)(in_ECX + 0x28) * fVar1;
  fStack_1c = *(float *)(in_ECX + 0x30) * fVar4 + *(float *)(in_ECX + 0x34) * fVar3 +
              *(float *)(in_ECX + 0x38) * fVar1;
  fStack_18 = *(float *)(in_ECX + 0x40) * fVar4 + *(float *)(in_ECX + 0x44) * fVar3 +
              *(float *)(in_ECX + 0x48) * fVar1;
  fStack_14 = *(float *)(in_ECX + 0x40) * fVar4 + *(float *)(in_ECX + 0x44) * fVar3 +
              *(float *)(in_ECX + 0x48) * fVar1;
  fVar2 = (float10)(**(code **)(**(int **)(in_ECX + 0x10) + 0x10))(&local_20);
  fVar4 = (float)fVar2;
  fVar3 = fVar4 * fStack_24;
  local_20 = fVar4 * local_20;
  fVar4 = fVar4 * fStack_1c;
  return (float10)((*(float *)(in_ECX + 0x28) * fVar3 + *(float *)(in_ECX + 0x38) * local_20 +
                   *(float *)(in_ECX + 0x48) * fVar4 + *(float *)(in_ECX + 0x58)) * param_1[2] +
                  (*(float *)(in_ECX + 0x24) * fVar3 + *(float *)(in_ECX + 0x34) * local_20 +
                  *(float *)(in_ECX + 0x44) * fVar4 + *(float *)(in_ECX + 0x54)) * param_1[1] +
                  (*(float *)(in_ECX + 0x20) * fVar3 + *(float *)(in_ECX + 0x30) * local_20 +
                  *(float *)(in_ECX + 0x40) * fVar4 + *(float *)(in_ECX + 0x50)) * *param_1);
}



void FUN_00917b50(char *param_1,float *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int in_ECX;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int unaff_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char cStack_64;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  float local_40 [4];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  iVar9 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar1 = "TtrcConvTransl";
    uVar2 = rdtsc();
    local_54 = (undefined4)uVar2;
    puVar1[1] = local_54;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar1 + 3;
  }
  fVar13 = *(float *)(in_ECX + 0x40);
  fVar15 = *(float *)(in_ECX + 0x44);
  fVar17 = *(float *)(in_ECX + 0x48);
  fVar3 = *(float *)(in_ECX + 0x20);
  fVar4 = *(float *)(in_ECX + 0x24);
  fVar5 = *(float *)(in_ECX + 0x28);
  fVar6 = *(float *)(in_ECX + 0x30);
  fVar7 = *(float *)(in_ECX + 0x34);
  fVar8 = *(float *)(in_ECX + 0x38);
  fVar12 = *param_2 - *(float *)(in_ECX + 0x50);
  fVar14 = param_2[1] - *(float *)(in_ECX + 0x54);
  fVar16 = param_2[2] - *(float *)(in_ECX + 0x58);
  pfVar10 = param_2;
  pfVar11 = local_40;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar11 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar11 = pfVar11 + 1;
  }
  local_40[0] = fVar3 * fVar12 + fVar4 * fVar14 + fVar5 * fVar16;
  local_40[1] = fVar6 * fVar12 + fVar7 * fVar14 + fVar8 * fVar16;
  local_40[2] = fVar13 * fVar12 + fVar15 * fVar14 + fVar17 * fVar16;
  local_40[3] = fVar13 * fVar12 + fVar15 * fVar14 + fVar17 * fVar16;
  fVar13 = param_2[4] - *(float *)(in_ECX + 0x50);
  fVar15 = param_2[5] - *(float *)(in_ECX + 0x54);
  fVar17 = param_2[6] - *(float *)(in_ECX + 0x58);
  local_30 = *(float *)(in_ECX + 0x20) * fVar13 + *(float *)(in_ECX + 0x24) * fVar15 +
             *(float *)(in_ECX + 0x28) * fVar17;
  fStack_2c = *(float *)(in_ECX + 0x30) * fVar13 + *(float *)(in_ECX + 0x34) * fVar15 +
              *(float *)(in_ECX + 0x38) * fVar17;
  fStack_28 = *(float *)(in_ECX + 0x40) * fVar13 + *(float *)(in_ECX + 0x44) * fVar15 +
              *(float *)(in_ECX + 0x48) * fVar17;
  fStack_24 = *(float *)(in_ECX + 0x40) * fVar13 + *(float *)(in_ECX + 0x44) * fVar15 +
              *(float *)(in_ECX + 0x48) * fVar17;
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x14))(&local_58,local_40,param_3);
  if (cStack_64 != '\0') {
    uStack_5c = *param_3;
    local_58 = param_3[1];
    local_54 = param_3[2];
    uStack_50 = param_3[3];
    FUN_0088fe00((float *)(in_ECX + 0x20),&uStack_5c);
  }
  iVar9 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar1 + 3;
    *param_1 = cStack_64;
    return;
  }
  *param_1 = cStack_64;
  return;
}



void FUN_00917d30(float *param_1,float *param_2)

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
  int in_ECX;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  local_20 = *(float *)(in_ECX + 0x20) * fVar1 + *(float *)(in_ECX + 0x24) * fVar2 +
             *(float *)(in_ECX + 0x28) * fVar3;
  fStack_1c = *(float *)(in_ECX + 0x30) * fVar1 + *(float *)(in_ECX + 0x34) * fVar2 +
              *(float *)(in_ECX + 0x38) * fVar3;
  fStack_18 = *(float *)(in_ECX + 0x40) * fVar1 + *(float *)(in_ECX + 0x44) * fVar2 +
              *(float *)(in_ECX + 0x48) * fVar3;
  fStack_14 = *(float *)(in_ECX + 0x40) * fVar1 + *(float *)(in_ECX + 0x44) * fVar2 +
              *(float *)(in_ECX + 0x48) * fVar3;
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x24))(&local_20,&local_30);
  fVar1 = *(float *)(in_ECX + 0x54);
  fVar2 = *(float *)(in_ECX + 0x58);
  fVar3 = *(float *)(in_ECX + 0x5c);
  fVar4 = *(float *)(in_ECX + 0x44);
  fVar5 = *(float *)(in_ECX + 0x48);
  fVar6 = *(float *)(in_ECX + 0x4c);
  fVar7 = *(float *)(in_ECX + 0x34);
  fVar8 = *(float *)(in_ECX + 0x38);
  fVar9 = *(float *)(in_ECX + 0x3c);
  fVar10 = *(float *)(in_ECX + 0x24);
  fVar11 = *(float *)(in_ECX + 0x28);
  fVar12 = *(float *)(in_ECX + 0x2c);
  *param_2 = *(float *)(in_ECX + 0x20) * fStack_38 + *(float *)(in_ECX + 0x30) * fStack_34 +
             *(float *)(in_ECX + 0x40) * local_30 + *(float *)(in_ECX + 0x50);
  param_2[1] = fVar10 * fStack_38 + fVar7 * fStack_34 + fVar4 * local_30 + fVar1;
  param_2[2] = fVar11 * fStack_38 + fVar8 * fStack_34 + fVar5 * local_30 + fVar2;
  param_2[3] = fVar12 * fStack_38 + fVar9 * fStack_34 + fVar6 * local_30 + fVar3;
  param_2[3] = fStack_2c;
  return;
}



void FUN_00917e10(undefined4 param_1,int param_2,float *param_3)

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
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x28))(param_1,param_2,param_3);
  fVar2 = *(float *)(in_ECX + 0x20);
  fVar3 = *(float *)(in_ECX + 0x24);
  fVar4 = *(float *)(in_ECX + 0x28);
  fVar5 = *(float *)(in_ECX + 0x2c);
  fVar6 = *(float *)(in_ECX + 0x30);
  fVar7 = *(float *)(in_ECX + 0x34);
  fVar8 = *(float *)(in_ECX + 0x38);
  fVar9 = *(float *)(in_ECX + 0x3c);
  fVar10 = *(float *)(in_ECX + 0x40);
  fVar11 = *(float *)(in_ECX + 0x44);
  fVar12 = *(float *)(in_ECX + 0x48);
  fVar13 = *(float *)(in_ECX + 0x4c);
  fVar14 = *(float *)(in_ECX + 0x50);
  fVar15 = *(float *)(in_ECX + 0x54);
  fVar16 = *(float *)(in_ECX + 0x58);
  fVar17 = *(float *)(in_ECX + 0x5c);
  do {
    fVar18 = *param_3;
    fVar19 = param_3[1];
    fVar20 = param_3[2];
    fVar1 = param_3[3];
    *param_3 = fVar2 * fVar18 + fVar6 * fVar19 + fVar10 * fVar20 + fVar14;
    param_3[1] = fVar3 * fVar18 + fVar7 * fVar19 + fVar11 * fVar20 + fVar15;
    param_3[2] = fVar4 * fVar18 + fVar8 * fVar19 + fVar12 * fVar20 + fVar16;
    param_3[3] = fVar5 * fVar18 + fVar9 * fVar19 + fVar13 * fVar20 + fVar17;
    param_3[3] = fVar1;
    param_3 = param_3 + 4;
    param_2 = param_2 + -1;
  } while (0 < param_2);
  return;
}



void FUN_00917ea0(float *param_1)

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
  int in_ECX;
  float fStack_24;
  float local_20;
  float fStack_1c;
  
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x2c))(&local_20);
  fVar1 = *(float *)(in_ECX + 0x54);
  fVar2 = *(float *)(in_ECX + 0x58);
  fVar3 = *(float *)(in_ECX + 0x5c);
  fVar4 = *(float *)(in_ECX + 0x44);
  fVar5 = *(float *)(in_ECX + 0x48);
  fVar6 = *(float *)(in_ECX + 0x4c);
  fVar7 = *(float *)(in_ECX + 0x34);
  fVar8 = *(float *)(in_ECX + 0x38);
  fVar9 = *(float *)(in_ECX + 0x3c);
  fVar10 = *(float *)(in_ECX + 0x24);
  fVar11 = *(float *)(in_ECX + 0x28);
  fVar12 = *(float *)(in_ECX + 0x2c);
  *param_1 = *(float *)(in_ECX + 0x20) * fStack_24 + *(float *)(in_ECX + 0x30) * local_20 +
             *(float *)(in_ECX + 0x40) * fStack_1c + *(float *)(in_ECX + 0x50);
  param_1[1] = fVar10 * fStack_24 + fVar7 * local_20 + fVar4 * fStack_1c + fVar1;
  param_1[2] = fVar11 * fStack_24 + fVar8 * local_20 + fVar5 * fStack_1c + fVar2;
  param_1[3] = fVar12 * fStack_24 + fVar9 * local_20 + fVar6 * fStack_1c + fVar3;
  return;
}



int FUN_00917f10(int param_1)

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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float *pfVar22;
  int in_ECX;
  int iVar23;
  int iStack_20;
  undefined1 auStack_1c [24];
  
  pfVar22 = (float *)(**(code **)(**(int **)(in_ECX + 0x10) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x1c))(auStack_1c);
  fVar3 = *(float *)(in_ECX + 0x20);
  fVar4 = *(float *)(in_ECX + 0x24);
  fVar5 = *(float *)(in_ECX + 0x28);
  fVar6 = *(float *)(in_ECX + 0x2c);
  fVar7 = *(float *)(in_ECX + 0x30);
  fVar8 = *(float *)(in_ECX + 0x34);
  fVar9 = *(float *)(in_ECX + 0x38);
  fVar10 = *(float *)(in_ECX + 0x3c);
  fVar11 = *(float *)(in_ECX + 0x40);
  fVar12 = *(float *)(in_ECX + 0x44);
  fVar13 = *(float *)(in_ECX + 0x48);
  fVar14 = *(float *)(in_ECX + 0x4c);
  fVar15 = *(float *)(in_ECX + 0x50);
  fVar16 = *(float *)(in_ECX + 0x54);
  fVar17 = *(float *)(in_ECX + 0x58);
  fVar18 = *(float *)(in_ECX + 0x5c);
  iVar23 = param_1 - (int)pfVar22;
  do {
    fVar19 = *pfVar22;
    fVar20 = pfVar22[1];
    fVar21 = pfVar22[2];
    fVar2 = pfVar22[3];
    pfVar1 = (float *)(iVar23 + (int)pfVar22);
    *pfVar1 = fVar3 * fVar19 + fVar7 * fVar20 + fVar11 * fVar21 + fVar15;
    pfVar1[1] = fVar4 * fVar19 + fVar8 * fVar20 + fVar12 * fVar21 + fVar16;
    pfVar1[2] = fVar5 * fVar19 + fVar9 * fVar20 + fVar13 * fVar21 + fVar17;
    pfVar1[3] = fVar6 * fVar19 + fVar10 * fVar20 + fVar14 * fVar21 + fVar18;
    *(float *)(iVar23 + 0xc + (int)pfVar22) = fVar2;
    pfVar22 = pfVar22 + 4;
    iStack_20 = iStack_20 + -1;
  } while (0 < iStack_20);
  return param_1;
}



float10 FUN_00917fb0(longlong param_1,longlong param_2)

{
  return (float10)param_1 / (float10)param_2;
}



void FUN_00917fc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00917fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_00ba94e8 + 8))();
  return;
}



void FUN_00917fd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00917fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_00ba94e8 + 0xc))();
  return;
}



void FUN_00917fe0(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x24,0x12);
  *(undefined2 *)(iVar1 + 4) = 0x24;
  FUN_00945f70(0xffffffff);
  return;
}



void FUN_00918000(void)

{
  return;
}



int FUN_00918010(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x10))(iVar2 + param_1,param_2 - iVar2);
      iVar2 = iVar2 + iVar1;
      if (iVar1 == 0) {
        return iVar2;
      }
    } while (iVar2 < param_2);
  }
  return param_2;
}



undefined4 FUN_00918060(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 8) + 8))(param_1);
  return param_1;
}



int FUN_00918080(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x14))(iVar2 + param_1,param_2 - iVar2);
      iVar2 = iVar2 + iVar1;
      if (iVar1 == 0) {
        return iVar2;
      }
    } while (iVar2 < param_2);
  }
  return param_2;
}



void FUN_00918100(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a9d190;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *(undefined2 *)((int)in_ECX + 0xe) = 1;
  in_ECX[2] = &PTR_LAB_00a9d144;
  in_ECX[4] = 0;
  *(undefined2 *)((int)in_ECX + 0x1a) = 1;
  in_ECX[5] = &PTR_LAB_00a9d170;
  in_ECX[7] = 0;
  in_ECX[4] = in_ECX;
  in_ECX[7] = in_ECX;
  return;
}



void FUN_00918180(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[2];
  *in_ECX = &PTR_FUN_00a9d1b8;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_009181b0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 8) + 0xc))(&stack0x00000004,1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_009181d0(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_204 [512];
  undefined4 local_4;
  
  local_4 = DAT_00b30aac;
  if (*(char *)(in_ECX + 0xc) == '\0') {
    (**(code **)(**(int **)(in_ECX + 8) + 0xc))(param_1,param_2 * param_3);
    return;
  }
  uVar5 = 0x200;
  iVar2 = (int)(0x200 / (longlong)param_2);
  uVar7 = param_2 * param_3;
  uVar4 = uVar7 & 0x800001ff;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffe00) + 1;
  }
  for (; 0 < (int)uVar7; uVar7 = uVar7 - uVar5) {
    if ((int)uVar7 < 0x200) {
      iVar2 = (int)uVar4 / param_2;
      uVar5 = uVar4;
    }
    FUN_008b1890(local_204,param_1,uVar5);
    if (param_2 == 2) {
      puVar3 = local_204;
      iVar6 = iVar2;
      if (0 < iVar2) {
        do {
          uVar1 = *puVar3;
          *puVar3 = puVar3[1];
          puVar3[1] = uVar1;
          puVar3 = puVar3 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else if (param_2 == 4) {
      if (0 < iVar2) {
        puVar3 = local_204 + 2;
        iVar6 = iVar2;
        do {
          uVar1 = puVar3[-2];
          puVar3[-2] = puVar3[1];
          puVar3[1] = uVar1;
          uVar1 = puVar3[-1];
          puVar3[-1] = *puVar3;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else if ((param_2 == 8) && (0 < iVar2)) {
      puVar3 = local_204 + 6;
      iVar6 = iVar2;
      do {
        uVar1 = puVar3[-6];
        puVar3[-6] = puVar3[1];
        puVar3[1] = uVar1;
        uVar1 = puVar3[-5];
        puVar3[-5] = *puVar3;
        *puVar3 = uVar1;
        uVar1 = puVar3[-4];
        puVar3[-4] = puVar3[-1];
        puVar3[-1] = uVar1;
        uVar1 = puVar3[-3];
        puVar3[-3] = puVar3[-2];
        puVar3[-2] = uVar1;
        puVar3 = puVar3 + 8;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    (**(code **)(**(int **)(in_ECX + 8) + 0xc))(local_204,uVar5);
    param_1 = param_1 + uVar5;
  }
  return;
}



void FUN_00918390(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x00918395. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 8) + 0xc))();
  return;
}



void FUN_009183a0(int param_1,undefined1 param_2)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9d1b8;
  in_ECX[2] = param_1;
  *(undefined1 *)(in_ECX + 3) = param_2;
  if (*(short *)(param_1 + 4) != 0) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  return;
}



void FUN_009183d0(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[2];
  *in_ECX = &PTR_FUN_00a9d1b8;
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



void FUN_00918420(void)

{
  FUN_009181d0(&stack0x00000004,2,1);
  return;
}



void FUN_00918440(void)

{
  FUN_009181d0(&stack0x00000004,4,1);
  return;
}



void FUN_00918460(void)

{
  FUN_009181d0(&stack0x00000004,8,1);
  return;
}



void FUN_00918480(undefined4 param_1,undefined4 param_2)

{
  FUN_009181d0(param_1,4,param_2);
  return;
}



void FUN_009184a0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined4 unaff_ESI;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9d1b8;
  *(undefined1 *)(in_ECX + 3) = param_2;
  iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x14,0x17);
  *(undefined2 *)(iVar1 + 4) = 0x14;
  uVar2 = FUN_008bc030(unaff_ESI,1);
  in_ECX[2] = uVar2;
  return;
}



void FUN_009184f0(void)

{
  FUN_009478f0();
  FUN_00947630();
  FUN_00946550();
  return;
}



undefined4 FUN_009185f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_008b1860(param_1);
  if (0xffff < iVar1) {
    iVar1 = 0xffff;
  }
  FUN_00918440(iVar1 + 7);
  FUN_009181b0(0xc0);
  FUN_00918440(param_2);
  FUN_00918420(iVar1);
  FUN_00918390(param_1,iVar1);
  return 0;
}



undefined4 FUN_00918660(undefined4 param_1)

{
  FUN_00918440(5);
  FUN_009181b0(0xc1);
  FUN_00918440(param_1);
  return 0;
}



void FUN_00918690(byte param_1)

{
  undefined4 *in_ECX;
  
  FUN_008b0e60();
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



int FUN_009186d0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar1 = *(int *)(in_ECX + 0x3c);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x38) + iVar3 * 4) + 4))();
      if (iVar2 == param_1) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return -1;
}



void FUN_00918760(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  
  uVar2 = param_1;
  iVar1 = *(int *)(in_ECX + 0x30);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2c) + iVar3 * 4) + 0x14))(uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_00947fa0(&param_1,*(undefined4 *)(in_ECX + 8));
  return;
}



void FUN_009187a0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int iVar4;
  int iVar5;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = &PTR_LAB_00a9d1d8;
  in_ECX[3] = &PTR_LAB_00a9d1c0;
  *(undefined1 *)(in_ECX + 4) = 0;
  *in_ECX = &PTR_FUN_00a9d230;
  in_ECX[2] = &PTR_LAB_00a9d214;
  in_ECX[3] = &PTR_LAB_00a9d1fc;
  *(undefined2 *)((int)in_ECX + 0x2a) = 1;
  in_ECX[9] = &PTR_FUN_00a9d1f4;
  FUN_008b0e10();
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0x80000000;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0x80000000;
  FUN_00947ee0(in_ECX + 3);
  uVar1 = in_ECX[0x13] & 0x3fffffff;
  if ((int)uVar1 < param_1[1]) {
    if ((in_ECX[0x13] & 0x80000000) == 0) {
      FUN_008a75d0(in_ECX[0x11],uVar1 * 4,0x14);
    }
    uVar2 = FUN_008a7560(param_1[1] << 2,0x14);
    in_ECX[0x11] = uVar2;
    in_ECX[0x13] = in_ECX[0x13] & 0x40000000 | param_1[1];
  }
  iVar4 = param_1[1];
  puVar3 = (undefined4 *)in_ECX[0x11];
  in_ECX[0x12] = iVar4;
  if (0 < iVar4) {
    iVar5 = *param_1 - (int)puVar3;
    do {
      *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    iVar4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x10,0x17);
    *(undefined2 *)(iVar4 + 4) = 0x10;
    uVar2 = FUN_00948c30(param_2);
  }
  in_ECX[5] = uVar2;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x10,0x17);
    *(undefined2 *)(iVar4 + 4) = 0x10;
    uVar2 = FUN_00948770(param_3);
  }
  in_ECX[6] = uVar2;
  iVar4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x10,0x32);
  *(undefined2 *)(iVar4 + 4) = 0x10;
  iVar4 = FUN_009484e0(in_ECX[6]);
  if (iVar4 != 0) {
    in_ECX[7] = iVar4 + 8;
    in_ECX[8] = in_ECX + 2;
    return;
  }
  in_ECX[7] = 0;
  in_ECX[8] = in_ECX + 2;
  return;
}



void FUN_009189a0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  *in_ECX = &PTR_FUN_00a9d230;
  in_ECX[2] = &PTR_LAB_00a9d214;
  in_ECX[3] = &PTR_LAB_00a9d1fc;
  if (0 < (int)in_ECX[0xf]) {
    do {
      puVar1 = *(undefined4 **)(in_ECX[0xe] + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)in_ECX[0xf]);
  }
  if ((undefined4 *)in_ECX[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[5])(1);
  }
  if ((undefined4 *)in_ECX[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[6])(1);
  }
  if ((undefined4 *)in_ECX[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[7])(1);
  }
  if (-1 < (int)in_ECX[0x13]) {
    FUN_008a75d0(in_ECX[0x11],in_ECX[0x13] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x10]) {
    FUN_008a75d0(in_ECX[0xe],in_ECX[0x10] << 2,0x14);
  }
  FUN_008b0e60();
  in_ECX[9] = &PTR_LAB_00a45e5c;
  in_ECX[3] = &PTR_LAB_00a9d1c0;
  in_ECX[2] = &PTR_LAB_00a9d1d8;
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



undefined4 FUN_00918aa0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  uint in_ECX;
  
  iVar1 = FUN_009186d0(param_1);
  if (-1 < iVar1) {
    return 0;
  }
  piVar2 = (int *)FUN_00947ac0(param_1,in_ECX + 0x3c);
  if (piVar2 != (int *)0x0) {
    piVar2[2] = *(int *)(in_ECX + 0xc);
    piVar2[3] = *(int *)(in_ECX + 0x10);
    piVar2[5] = -(uint)(in_ECX != 8) & in_ECX;
    piVar2[4] = *(int *)(in_ECX + 0x14);
    (**(code **)(*piVar2 + 0x10))();
    if (*(uint *)(in_ECX + 0x34) == (*(uint *)(in_ECX + 0x38) & 0x3fffffff)) {
      FUN_008a6ee0((int *)(in_ECX + 0x30),4);
    }
    *(int **)(*(int *)(in_ECX + 0x30) + *(int *)(in_ECX + 0x34) * 4) = piVar2;
    *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
    FUN_00947ee0(piVar2);
    return 0;
  }
  return 1;
}



undefined4 FUN_00918b40(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = DAT_00ba950c;
  piVar4 = (int *)(DAT_00ba950c + 0xc);
  iVar3 = 0;
  if (0 < *(int *)(DAT_00ba950c + 0x10)) {
    iVar2 = 0;
    do {
      (**(code **)(*(int *)(in_ECX + 8) + 4))(*(undefined4 *)(*piVar4 + iVar2),iVar3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *(int *)(iVar1 + 0x10));
  }
  return 0;
}



void FUN_00918b90(byte param_1)

{
  FUN_009189a0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



undefined4 FUN_00918bc0(void)

{
  uint uVar1;
  undefined4 unaff_ESI;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_4;
  
  local_2c = 0;
  local_28 = 0;
  local_24 = 0x80000000;
  FUN_00948750(&local_2c);
  FUN_009181b0(0x90);
  FUN_00918440(DAT_00b3005c);
  FUN_00918440(DAT_00b30058);
  uVar1 = FUN_008b1860(&DAT_00a9d238);
  if (0xffff < (int)uVar1) {
    uVar1 = 0xffff;
  }
  FUN_00918420(uVar1);
  FUN_00918390(&DAT_00a9d238);
  FUN_00948770(uStack_4);
  FUN_00918440(unaff_ESI);
  FUN_00918390(uVar1,unaff_ESI);
  FUN_00918180();
  FUN_00918180();
  if (-1 < (int)uVar1) {
    FUN_008a75d0(unaff_ESI,uVar1 & 0x3fffffff,0x14);
  }
  return 0;
}



void FUN_00918df0(void)

{
  DAT_00ba8410 = FUN_00947c50("WorldMemory",&LAB_00918d10);
  return;
}



void FUN_00918e10(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9d270;
  in_ECX[2] = &PTR_LAB_00a9d258;
  in_ECX[8] = &PTR_LAB_00a9d250;
  FUN_00948d90();
  FUN_00949180();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00918e90(undefined1 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  
  if ((param_2 & 3) == 3) {
    param_2 = param_2 & 0xfffffffc;
  }
  else if ((param_2 & 3) != 0) {
    *param_1 = 0;
    return;
  }
  if ((*(char *)(param_2 + 0x18) == '\x01') &&
     (iVar3 = *(int *)(param_2 + 0x10) + param_2, iVar3 != 0)) {
    iVar1 = *(int *)(iVar3 + 8);
    *(int *)(in_ECX + 0x28) = iVar1;
    if ((*(char *)(iVar3 + 0x91) == '\0') && (*(int *)(iVar3 + 8) == iVar1)) {
      FUN_0088fd10(*(int *)(iVar3 + 0x50) + 0x10,param_4);
      iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x50,0x26);
      *(undefined2 *)(iVar1 + 4) = 0x50;
      uVar2 = FUN_008b89c0(&stack0xffffffd8,param_4,0x3f000000,0x3e99999a,0x3f733333,iVar3);
      *(undefined4 *)(in_ECX + 0x2c) = uVar2;
      FUN_008b8a80(*(undefined4 *)(in_ECX + 0x30));
      FUN_0089bae0(*(undefined4 *)(in_ECX + 0x2c));
    }
  }
  *param_1 = 1;
  return;
}



void FUN_00918f80(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x2c);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_0089ccc0(iVar1);
      FUN_008a6410();
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x2c);
    if ((*(short *)(puVar2 + 1) != 0) &&
       (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
       *(short *)((int)puVar2 + 6) == 0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(in_ECX + 0x2c) = 0;
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  return;
}



void FUN_00919030(void)

{
  DAT_00ba8414 = FUN_00947c50("MousePicking",&LAB_00918fe0);
  return;
}



void FUN_00919070(char param_1)

{
  char *pcVar1;
  int in_ECX;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_20 [28];
  
  if (param_1 == -0x50) {
    FUN_00948c80(local_20);
    FUN_00947910(&local_30,8,1);
    pcVar1 = (char *)FUN_00918060(&local_32);
    if (*pcVar1 != '\0') {
      FUN_00918e90(&local_31,local_30,local_2c,local_20);
    }
  }
  else if (param_1 == -0x4f) {
    FUN_00948c80(&local_30);
    pcVar1 = (char *)FUN_00918060(&local_33);
    if ((*pcVar1 != '\0') && (*(int *)(in_ECX + 0x24) != 0)) {
      FUN_008b8a10(&local_30);
      return;
    }
  }
  else if (param_1 == -0x4e) {
    FUN_00918f80();
    return;
  }
  return;
}



void FUN_00919130(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9d2a0;
  in_ECX[2] = &PTR_LAB_00a9d288;
  in_ECX[8] = &PTR_LAB_00a9d280;
  FUN_00918f80();
  FUN_00949180();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_009191d0(undefined4 param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  FUN_009491f0(param_1);
  in_ECX[10] = &PTR_LAB_00a9d2b4;
  *in_ECX = &PTR_FUN_00a9d2ec;
  in_ECX[2] = &PTR_LAB_00a9d2d4;
  in_ECX[8] = &PTR_LAB_00a9d84c;
  in_ECX[10] = &PTR_LAB_00a9d2c8;
  *(undefined1 *)(in_ECX + 0xb) = 1;
  *(undefined1 *)((int)in_ECX + 0x2d) = 1;
  iVar1 = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0x80000000;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0x80000000;
  if ((in_ECX[9] != 0) && (0 < *(int *)(in_ECX[9] + 0x60))) {
    do {
      FUN_00899d20(in_ECX + 10);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX[9] + 0x60));
  }
  return;
}



void FUN_00919290(void)

{
  undefined4 *in_ECX;
  int iVar1;
  int iVar2;
  
  *in_ECX = &PTR_FUN_00a9d2ec;
  in_ECX[2] = &PTR_LAB_00a9d2d4;
  in_ECX[8] = &PTR_LAB_00a9d84c;
  in_ECX[10] = &PTR_LAB_00a9d2c8;
  if ((in_ECX[9] != 0) && (iVar1 = 0, 0 < *(int *)(in_ECX[9] + 0x60))) {
    do {
      FUN_00898a80(in_ECX + 10);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX[9] + 0x60));
  }
  iVar1 = in_ECX[0x10];
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      (*(code *)**(undefined4 **)(in_ECX[0xf] + iVar2))(0);
      iVar2 = iVar2 + 0x80;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (-1 < (int)in_ECX[0x11]) {
    FUN_008a75d0(in_ECX[0xf],in_ECX[0x11] << 7,0x14);
  }
  iVar1 = in_ECX[0xd];
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      (*(code *)**(undefined4 **)(in_ECX[0xc] + iVar2))(0);
      iVar2 = iVar2 + 0x80;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (-1 < (int)in_ECX[0xe]) {
    FUN_008a75d0(in_ECX[0xc],in_ECX[0xe] << 7,0x14);
  }
  in_ECX[10] = &PTR_LAB_00a9d2b4;
  FUN_00949180();
  return;
}



void FUN_009193a0(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a45e64;
  *(undefined2 *)(in_ECX + 1) = *(undefined2 *)(param_1 + 4);
  uVar1 = *(undefined2 *)(param_1 + 6);
  *in_ECX = &PTR_FUN_00a9b2f4;
  *(undefined2 *)((int)in_ECX + 6) = uVar1;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = uVar2;
  in_ECX[6] = uVar3;
  in_ECX[7] = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = uVar2;
  in_ECX[10] = uVar3;
  in_ECX[0xb] = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  in_ECX[0xc] = *(undefined4 *)(param_1 + 0x30);
  in_ECX[0xd] = uVar2;
  in_ECX[0xe] = uVar3;
  in_ECX[0xf] = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  in_ECX[0x10] = *(undefined4 *)(param_1 + 0x40);
  in_ECX[0x11] = uVar2;
  in_ECX[0x12] = uVar3;
  in_ECX[0x13] = uVar4;
  in_ECX[0x14] = *(undefined4 *)(param_1 + 0x50);
  in_ECX[0x15] = *(undefined4 *)(param_1 + 0x54);
  *in_ECX = &PTR_FUN_00a9d2f4;
  uVar2 = *(undefined4 *)(param_1 + 100);
  uVar3 = *(undefined4 *)(param_1 + 0x68);
  uVar4 = *(undefined4 *)(param_1 + 0x6c);
  in_ECX[0x18] = *(undefined4 *)(param_1 + 0x60);
  in_ECX[0x19] = uVar2;
  in_ECX[0x1a] = uVar3;
  in_ECX[0x1b] = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x74);
  uVar3 = *(undefined4 *)(param_1 + 0x78);
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  in_ECX[0x1c] = *(undefined4 *)(param_1 + 0x70);
  in_ECX[0x1d] = uVar2;
  in_ECX[0x1e] = uVar3;
  in_ECX[0x1f] = uVar4;
  return;
}



void FUN_00919440(void)

{
  DAT_00ba8418 = FUN_00947c50("Islands",&LAB_00919410);
  return;
}



void FUN_00919460(byte param_1)

{
  FUN_00919290();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00919490(int param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int in_ECX;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int unaff_FS_OFFSET;
  int local_a0;
  int local_98;
  int local_94;
  int local_8c;
  uint local_88;
  int local_84;
  undefined1 local_80 [16];
  int iStack_6c;
  uint uStack_68;
  int iStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  iVar9 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar11 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar11 = "TthkSimulationIslandViewer";
    uVar5 = rdtsc();
    puVar11[1] = (int)uVar5;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar11 + 3;
  }
  if (*(char *)(in_ECX + 4) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x3c);
    if (*(int *)(in_ECX + 0x18) < (int)uVar2) {
      local_94 = *(int *)(in_ECX + 0x18);
      piVar8 = (int *)(in_ECX + 0x14);
      if ((int)uVar2 < local_94) {
        iVar9 = uVar2 << 7;
        local_94 = local_94 - uVar2;
        do {
          (*(code *)**(undefined4 **)(*piVar8 + iVar9))(0);
          iVar9 = iVar9 + 0x80;
          local_94 = local_94 + -1;
        } while (local_94 != 0);
      }
      else {
        uVar3 = *(uint *)(in_ECX + 0x1c);
        if ((int)(uVar3 & 0x3fffffff) < (int)uVar2) {
          uVar6 = (uVar3 & 0x3fffffff) * 2;
          uVar7 = uVar2;
          if ((int)uVar2 < (int)uVar6) {
            uVar7 = uVar6;
          }
          local_80._0_4_ = *piVar8;
          *piVar8 = 0;
          *(undefined4 *)(in_ECX + 0x18) = 0;
          *(undefined4 *)(in_ECX + 0x1c) = 0x80000000;
          if (0 < (int)uVar7) {
            FUN_008a6e40(piVar8,uVar7 & ((int)uVar7 < 0) - 1,0x80);
          }
          iVar9 = *piVar8;
          if (0 < local_94) {
            iVar10 = local_80._0_4_ - iVar9;
            local_98 = local_94;
            do {
              if (iVar9 != 0) {
                FUN_009193a0(iVar10 + iVar9);
              }
              iVar9 = iVar9 + 0x80;
              local_98 = local_98 + -1;
            } while (local_98 != 0);
          }
          *(int *)(in_ECX + 0x18) = local_94;
          if (0 < local_94) {
            puVar11 = (undefined4 *)local_80._0_4_;
            local_98 = local_94;
            do {
              (**(code **)*puVar11)(0);
              puVar11 = puVar11 + 0x20;
              local_98 = local_98 + -1;
            } while (local_98 != 0);
          }
          if (-1 < (int)uVar3) {
            FUN_008a75d0(local_80._0_4_,uVar3 << 7,0x14);
          }
        }
        if (local_94 < (int)uVar2) {
          iVar9 = local_94 * 0x80 + *piVar8;
          local_94 = uVar2 - local_94;
          do {
            if (iVar9 != 0) {
              FUN_00949300();
            }
            iVar9 = iVar9 + 0x80;
            local_94 = local_94 + -1;
          } while (local_94 != 0);
        }
      }
      *(uint *)(in_ECX + 0x18) = uVar2;
    }
    uVar2 = *(uint *)(param_1 + 0x3c);
    local_8c = 0;
    local_88 = 0;
    local_84 = -0x80000000;
    if (0 < (int)uVar2) {
      FUN_008a6e40(&local_8c,((int)uVar2 < 0) - 1 & uVar2,4);
    }
    uVar3 = *(uint *)(param_1 + 0x3c);
    iStack_6c = 0;
    uStack_68 = 0;
    iStack_64 = -0x80000000;
    local_88 = uVar2;
    if (0 < (int)uVar3) {
      FUN_008a6e40(&iStack_6c,((int)uVar3 < 0) - 1 & uVar3,0x20);
    }
    iVar9 = 0;
    uStack_68 = uVar3;
    if (0 < *(int *)(param_1 + 0x3c)) {
      local_80._0_4_ = 0xff7fffff;
      auStack_40._8_4_ = 0x7f7fffff;
      auStack_40._0_8_ = 0x7f7fffff7f7fffff;
      auStack_40._12_4_ = 0x7f7fffff;
      auStack_50._8_4_ = 0xff7fffff;
      auStack_50._0_8_ = 0xff7fffffff7fffff;
      auStack_50._12_4_ = 0xff7fffff;
      local_a0 = 0;
      local_98 = 0;
      local_80._4_4_ = local_80._0_4_;
      local_80._8_4_ = local_80._0_4_;
      local_80._12_4_ = local_80._0_4_;
      while( true ) {
        iVar10 = *(int *)(*(int *)(param_1 + 0x38) + iVar9 * 4);
        puVar11 = (undefined4 *)(local_98 + 0x10 + iStack_6c);
        *puVar11 = local_80._0_4_;
        puVar11[1] = local_80._4_4_;
        puVar11[2] = local_80._8_4_;
        puVar11[3] = local_80._12_4_;
        *(undefined1 (*) [16])(local_98 + iStack_6c) = auStack_40;
        iVar12 = 0;
        auStack_60 = auStack_40;
        if (0 < *(int *)(iVar10 + 0x38)) {
          do {
            iVar4 = *(int *)(*(int *)(iVar10 + 0x34) + iVar12 * 4);
            if (*(int *)(iVar4 + 0x14) != 0) {
              (**(code **)(**(int **)(param_1 + 100) + 0x24))(iVar4 + 0x28,auStack_30);
              local_80 = maxps(local_80,auStack_20);
              auStack_60 = minps(auStack_60,auStack_30);
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(iVar10 + 0x38));
        }
        FUN_009492e0(auStack_60,local_80);
        local_98 = local_98 + 0x20;
        *(int *)(local_8c + iVar9 * 4) = *(int *)(in_ECX + 0x14) + local_a0;
        iVar9 = iVar9 + 1;
        local_a0 = local_a0 + 0x80;
        if (*(int *)(param_1 + 0x3c) <= iVar9) break;
        local_80._0_4_ = auStack_50._0_4_;
        local_80._4_4_ = auStack_50._4_4_;
        local_80._8_4_ = auStack_50._8_4_;
        local_80._12_4_ = auStack_50._12_4_;
      }
    }
    (**(code **)(**(int **)(in_ECX + -0x10) + 0x24))(&local_8c,0xff0000ff,DAT_00ba8418);
    if (-1 < iStack_64) {
      FUN_008a75d0(iStack_6c,iStack_64 << 5,0x14);
    }
    if (-1 < local_84) {
      FUN_008a75d0(local_8c,local_84 << 2,0x14);
    }
  }
  if (*(char *)(in_ECX + 5) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x48);
    if (*(int *)(in_ECX + 0xc) < (int)uVar2) {
      iVar9 = *(int *)(in_ECX + 0xc);
      piVar8 = (int *)(in_ECX + 8);
      if ((int)uVar2 < iVar9) {
        iVar10 = uVar2 << 7;
        iVar9 = iVar9 - uVar2;
        do {
          (*(code *)**(undefined4 **)(iVar10 + *piVar8))(0);
          iVar10 = iVar10 + 0x80;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      else {
        uVar3 = *(uint *)(in_ECX + 0x10);
        if ((int)(uVar3 & 0x3fffffff) < (int)uVar2) {
          uVar6 = (uVar3 & 0x3fffffff) * 2;
          uVar7 = uVar2;
          if ((int)uVar2 < (int)uVar6) {
            uVar7 = uVar6;
          }
          local_80._0_4_ = *piVar8;
          *piVar8 = 0;
          *(undefined4 *)(in_ECX + 0xc) = 0;
          *(undefined4 *)(in_ECX + 0x10) = 0x80000000;
          if (0 < (int)uVar7) {
            FUN_008a6e40(piVar8,uVar7 & ((int)uVar7 < 0) - 1,0x80);
          }
          iVar10 = *piVar8;
          if (0 < iVar9) {
            iVar12 = local_80._0_4_ - iVar10;
            local_a0 = iVar9;
            do {
              if (iVar10 != 0) {
                FUN_009193a0(iVar12 + iVar10);
              }
              iVar10 = iVar10 + 0x80;
              local_a0 = local_a0 + -1;
            } while (local_a0 != 0);
          }
          *(int *)(in_ECX + 0xc) = iVar9;
          if (0 < iVar9) {
            puVar11 = (undefined4 *)local_80._0_4_;
            local_a0 = iVar9;
            do {
              (**(code **)*puVar11)(0);
              puVar11 = puVar11 + 0x20;
              local_a0 = local_a0 + -1;
            } while (local_a0 != 0);
          }
          if (-1 < (int)uVar3) {
            FUN_008a75d0(local_80._0_4_,uVar3 << 7,0x14);
          }
        }
        if (iVar9 < (int)uVar2) {
          iVar10 = iVar9 * 0x80 + *piVar8;
          local_a0 = uVar2 - iVar9;
          do {
            if (iVar10 != 0) {
              FUN_00949300();
            }
            iVar10 = iVar10 + 0x80;
            local_a0 = local_a0 + -1;
          } while (local_a0 != 0);
        }
      }
      *(uint *)(in_ECX + 0xc) = uVar2;
    }
    uVar2 = *(uint *)(param_1 + 0x48);
    local_8c = 0;
    local_88 = 0;
    local_84 = -0x80000000;
    if (0 < (int)uVar2) {
      FUN_008a6e40(&local_8c,((int)uVar2 < 0) - 1 & uVar2,4);
    }
    local_a0 = 0;
    local_88 = uVar2;
    if (0 < *(int *)(param_1 + 0x48)) {
      auStack_60._0_4_ = 0xff7fffff;
      auStack_50._8_4_ = 0x7f7fffff;
      auStack_50._0_8_ = 0x7f7fffff7f7fffff;
      auStack_50._12_4_ = 0x7f7fffff;
      auStack_40._8_4_ = 0xff7fffff;
      auStack_40._0_8_ = 0xff7fffffff7fffff;
      auStack_40._12_4_ = 0xff7fffff;
      local_94 = 0;
      auStack_60._4_4_ = auStack_60._0_4_;
      auStack_60._8_4_ = auStack_60._0_4_;
      auStack_60._12_4_ = auStack_60._0_4_;
      while( true ) {
        iVar9 = *(int *)(*(int *)(param_1 + 0x44) + local_a0 * 4);
        fVar1 = *(float *)(*(int *)(param_1 + 0x74) + 8);
        iVar10 = 0;
        local_80 = auStack_50;
        if (0 < *(int *)(iVar9 + 0x38)) {
          do {
            iVar12 = *(int *)(*(int *)(iVar9 + 0x34) + iVar10 * 4);
            piVar8 = *(int **)(iVar12 + 0x14);
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0xc))(*(undefined4 *)(iVar12 + 0x1c),fVar1 * 0.5,auStack_30);
              auStack_60 = maxps(auStack_60,auStack_20);
              local_80 = minps(local_80,auStack_30);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(iVar9 + 0x38));
        }
        FUN_009492e0(local_80,auStack_60);
        *(int *)(local_8c + local_a0 * 4) = *(int *)(in_ECX + 8) + local_94;
        local_a0 = local_a0 + 1;
        local_94 = local_94 + 0x80;
        if (*(int *)(param_1 + 0x48) <= local_a0) break;
        auStack_60._0_4_ = auStack_40._0_4_;
        auStack_60._4_4_ = auStack_40._4_4_;
        auStack_60._8_4_ = auStack_40._8_4_;
        auStack_60._12_4_ = auStack_40._12_4_;
      }
    }
    (**(code **)(**(int **)(in_ECX + -0x10) + 0x24))(&local_8c,0xff008000,DAT_00ba8418);
    if (-1 < local_84) {
      FUN_008a75d0(local_8c,local_84 << 2,0x14);
    }
  }
  iVar9 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar11 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar11 = &DAT_00a9610c;
    uVar5 = rdtsc();
    puVar11[1] = (int)uVar5;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar11 + 3;
  }
  return;
}



void FUN_00919c40(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1;
  if (in_ECX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = in_ECX + 0x28;
  }
  FUN_008989e0(iVar3);
  if (in_ECX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = in_ECX + 0x2c;
  }
  FUN_00898a80(iVar3);
  piVar1 = (int *)(param_1 + 0x3c);
  param_1 = 0;
  if (0 < *piVar1) {
    do {
      iVar3 = *(int *)(*(int *)(iVar2 + 0x38) + param_1 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar3 + 0x38)) {
        do {
          (**(code **)(*(int *)(in_ECX + 0x28) + 8))
                    (*(undefined4 *)(*(int *)(iVar3 + 0x34) + iVar4 * 4));
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar3 + 0x38));
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar2 + 0x3c));
  }
  param_1 = 0;
  if (0 < *(int *)(iVar2 + 0x48)) {
    do {
      iVar3 = *(int *)(*(int *)(iVar2 + 0x44) + param_1 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar3 + 0x38)) {
        do {
          (**(code **)(*(int *)(in_ECX + 0x28) + 8))
                    (*(undefined4 *)(*(int *)(iVar3 + 0x34) + iVar4 * 4));
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar3 + 0x38));
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar2 + 0x48));
  }
  iVar2 = *(int *)(iVar2 + 0x30);
  if ((iVar2 != 0) && (iVar3 = 0, 0 < *(int *)(iVar2 + 0x38))) {
    do {
      (**(code **)(*(int *)(in_ECX + 0x28) + 8))
                (*(undefined4 *)(*(int *)(iVar2 + 0x34) + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 0x38));
  }
  return;
}



void FUN_00919d40(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  if (*(int *)(in_ECX + 0x1c) != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x60);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        FUN_0091c620(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0x5c) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return;
}



void FUN_00919d90(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_009491f0(param_1);
  in_ECX[10] = &PTR_LAB_00a46684;
  in_ECX[0xb] = &PTR_LAB_00a9d2b4;
  *in_ECX = &PTR_FUN_00a9d370;
  in_ECX[2] = &PTR_LAB_00a9d358;
  in_ECX[8] = &PTR_LAB_00a9d350;
  in_ECX[10] = &PTR_LAB_00a9d33c;
  in_ECX[0xb] = &PTR_LAB_00a9d330;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0x80000000;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0x80000000;
  return;
}



void FUN_00919e30(void)

{
  undefined4 *in_ECX;
  int iVar1;
  int iVar2;
  
  *in_ECX = &PTR_FUN_00a9d370;
  in_ECX[2] = &PTR_LAB_00a9d358;
  in_ECX[8] = &PTR_LAB_00a9d350;
  in_ECX[10] = &PTR_LAB_00a9d33c;
  in_ECX[0xb] = &PTR_LAB_00a9d330;
  if (in_ECX[9] != 0) {
    iVar1 = *(int *)(in_ECX[9] + 0x60);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        FUN_00919c40(*(undefined4 *)(*(int *)(in_ECX[9] + 0x5c) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  iVar1 = in_ECX[0x10];
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      (*(code *)**(undefined4 **)(in_ECX[0xf] + iVar2))(0);
      iVar2 = iVar2 + 0x70;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (-1 < (int)in_ECX[0x11]) {
    FUN_008a75d0(in_ECX[0xf],(in_ECX[0x11] & 0x3fffffff) * 0x70,0x14);
  }
  if (-1 < (int)in_ECX[0xe]) {
    FUN_008a75d0(in_ECX[0xc],in_ECX[0xe] << 2,0x14);
  }
  in_ECX[0xb] = &PTR_LAB_00a9d2b4;
  in_ECX[10] = &PTR_LAB_00a46684;
  FUN_00949180();
  return;
}



void FUN_00919f20(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a45e64;
  *(undefined2 *)(in_ECX + 1) = *(undefined2 *)(param_1 + 4);
  uVar1 = *(undefined2 *)(param_1 + 6);
  *in_ECX = &PTR_FUN_00a9b2f4;
  *(undefined2 *)((int)in_ECX + 6) = uVar1;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = uVar2;
  in_ECX[6] = uVar3;
  in_ECX[7] = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = uVar2;
  in_ECX[10] = uVar3;
  in_ECX[0xb] = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  in_ECX[0xc] = *(undefined4 *)(param_1 + 0x30);
  in_ECX[0xd] = uVar2;
  in_ECX[0xe] = uVar3;
  in_ECX[0xf] = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  in_ECX[0x10] = *(undefined4 *)(param_1 + 0x40);
  in_ECX[0x11] = uVar2;
  in_ECX[0x12] = uVar3;
  in_ECX[0x13] = uVar4;
  in_ECX[0x14] = *(undefined4 *)(param_1 + 0x50);
  in_ECX[0x15] = *(undefined4 *)(param_1 + 0x54);
  *in_ECX = &PTR_FUN_00a9d378;
  uVar2 = *(undefined4 *)(param_1 + 100);
  uVar3 = *(undefined4 *)(param_1 + 0x68);
  uVar4 = *(undefined4 *)(param_1 + 0x6c);
  in_ECX[0x18] = *(undefined4 *)(param_1 + 0x60);
  in_ECX[0x19] = uVar2;
  in_ECX[0x1a] = uVar3;
  in_ECX[0x1b] = uVar4;
  return;
}



void FUN_00919fb0(void)

{
  DAT_00ba841c = FUN_00947c50("Tensor",&LAB_00919f80);
  return;
}



void FUN_00919fd0(byte param_1)

{
  FUN_00919e30();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0091a000(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int in_ECX;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int unaff_FS_OFFSET;
  float10 fVar18;
  int local_d0;
  uint local_cc;
  int iStack_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  float local_b4;
  undefined4 *local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float afStack_90 [5];
  float fStack_7c;
  float fStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar10 = _tls_index;
  iVar15 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar17 = *(int *)(iVar15 + _tls_index * 4);
  if (*(uint *)(iVar17 + 0x1a4) < *(uint *)(iVar17 + 0x1a8)) {
    puVar14 = *(undefined4 **)(iVar17 + 0x1a4);
    *puVar14 = "TthkRigidBodyInertiaViewer";
    uVar5 = rdtsc();
    puVar14[1] = (int)uVar5;
    *(undefined4 **)(iVar17 + 0x1a4) = puVar14 + 3;
  }
  iVar15 = *(int *)(iVar15 + iVar10 * 4);
  if (*(uint *)(iVar15 + 0x1a4) < *(uint *)(iVar15 + 0x1a8)) {
    puVar14 = *(undefined4 **)(iVar15 + 0x1a4);
    *puVar14 = "TtgetProps";
    uVar5 = rdtsc();
    puVar14[1] = (int)uVar5;
    *(undefined4 **)(iVar15 + 0x1a4) = puVar14 + 3;
  }
  uVar4 = *(uint *)(in_ECX + 8);
  iVar15 = *(int *)(in_ECX + 0x14);
  piVar16 = (int *)(in_ECX + 0x10);
  if ((int)uVar4 < iVar15) {
    iVar17 = uVar4 * 0x70;
    iVar15 = iVar15 - uVar4;
    do {
      (*(code *)**(undefined4 **)(*piVar16 + iVar17))(0);
      iVar17 = iVar17 + 0x70;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  else {
    uVar12 = *(uint *)(in_ECX + 0x18);
    if ((int)(uVar12 & 0x3fffffff) < (int)uVar4) {
      uVar11 = (uVar12 & 0x3fffffff) * 2;
      if ((int)uVar11 <= (int)uVar4) {
        uVar11 = uVar4;
      }
      local_b0 = (undefined4 *)*piVar16;
      *piVar16 = 0;
      *(undefined4 *)(in_ECX + 0x14) = 0;
      *(undefined4 *)(in_ECX + 0x18) = 0x80000000;
      if (0 < (int)uVar11) {
        FUN_008a6e40(piVar16,uVar11 & ((int)uVar11 < 0) - 1,0x70);
      }
      iVar17 = *piVar16;
      if (0 < iVar15) {
        local_b4 = (float)((int)local_b0 - iVar17);
        local_d0 = iVar15;
        do {
          if (iVar17 != 0) {
            FUN_00919f20((int)local_b4 + iVar17);
          }
          iVar17 = iVar17 + 0x70;
          local_d0 = local_d0 + -1;
        } while (local_d0 != 0);
      }
      *(int *)(in_ECX + 0x14) = iVar15;
      puVar14 = local_b0;
      local_d0 = iVar15;
      if (0 < iVar15) {
        do {
          (**(code **)*puVar14)(0);
          local_d0 = local_d0 + -1;
          puVar14 = puVar14 + 0x1c;
        } while (local_d0 != 0);
      }
      if (-1 < (int)uVar12) {
        FUN_008a75d0(local_b0,(uVar12 & 0x3fffffff) * 0x70,0x14);
      }
    }
    if (iVar15 < (int)uVar4) {
      iVar17 = iVar15 * 0x70 + *piVar16;
      local_d0 = uVar4 - iVar15;
      do {
        if (iVar17 != 0) {
          FUN_00949d00();
        }
        iVar17 = iVar17 + 0x70;
        local_d0 = local_d0 + -1;
      } while (local_d0 != 0);
    }
  }
  *(uint *)(in_ECX + 0x14) = uVar4;
  iVar15 = 0;
  local_cc = 0;
  if (0 < *(int *)(in_ECX + 8)) {
    do {
      fVar18 = (float10)FUN_0089da90();
      if ((float)fVar18 != 0.0) {
        (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 4) + iVar15 * 4) + 0x50) + 0x28))
                  (afStack_90);
        fVar6 = 1.0 / (float)fVar18;
        local_b4 = ((afStack_90[0] - fStack_7c) + fStack_68) * fVar6 * 6.0;
        if (0.0 <= local_b4) {
          fStack_ac = SQRT(local_b4);
        }
        else {
          fStack_ac = 0.0;
        }
        fStack_a8 = afStack_90[0] * fVar6 * 12.0 - local_b4;
        if (0.0 <= fStack_a8) {
          fStack_a8 = SQRT(fStack_a8);
        }
        else {
          fStack_a8 = 0.0;
        }
        fVar6 = fStack_68 * fVar6 * 12.0 - local_b4;
        if (0.0 <= fVar6) {
          fVar6 = SQRT(fVar6);
        }
        else {
          fVar6 = 0.0;
        }
        local_b0 = (undefined4 *)(fVar6 * 0.505);
        uStack_a4 = 0;
        piVar1 = (int *)(*(int *)(in_ECX + 4) + iVar15 * 4);
        fStack_ac = fStack_ac * 0.505;
        fStack_a8 = fStack_a8 * 0.505;
        iVar17 = *(int *)(*piVar1 + 0x50);
        uStack_50 = *(undefined4 *)(iVar17 + 0x10);
        uStack_4c = *(undefined4 *)(iVar17 + 0x14);
        uStack_48 = *(undefined4 *)(iVar17 + 0x18);
        uStack_44 = *(undefined4 *)(iVar17 + 0x1c);
        uStack_40 = *(undefined4 *)(iVar17 + 0x20);
        uStack_3c = *(undefined4 *)(iVar17 + 0x24);
        uStack_38 = *(undefined4 *)(iVar17 + 0x28);
        uStack_34 = *(undefined4 *)(iVar17 + 0x2c);
        uStack_30 = *(undefined4 *)(iVar17 + 0x30);
        uStack_2c = *(undefined4 *)(iVar17 + 0x34);
        uStack_28 = *(undefined4 *)(iVar17 + 0x38);
        uStack_24 = *(undefined4 *)(iVar17 + 0x3c);
        fStack_20 = *(float *)(iVar17 + 0x40);
        fStack_1c = *(float *)(iVar17 + 0x44);
        fStack_18 = *(float *)(iVar17 + 0x48);
        fStack_14 = *(float *)(iVar17 + 0x4c);
        iVar17 = *(int *)(*piVar1 + 0x50);
        uStack_60 = *(undefined4 *)(iVar17 + 0x90);
        uStack_5c = *(undefined4 *)(iVar17 + 0x94);
        uStack_58 = *(undefined4 *)(iVar17 + 0x98);
        uStack_54 = *(undefined4 *)(iVar17 + 0x9c);
        FUN_0088fe00(&uStack_50,&uStack_60);
        local_cc = local_cc + 1;
        fStack_a0 = fStack_a0 + fStack_20;
        fStack_9c = fStack_9c + fStack_1c;
        fStack_98 = fStack_98 + fStack_18;
        fStack_94 = fStack_94 + fStack_14;
        fStack_20 = fStack_a0;
        fStack_1c = fStack_9c;
        fStack_18 = fStack_98;
        fStack_14 = fStack_94;
        FUN_00949d50(&local_b0,&uStack_50);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(in_ECX + 8));
  }
  iVar10 = _tls_index;
  iVar15 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar17 = *(int *)(iVar15 + _tls_index * 4);
  if (*(uint *)(iVar17 + 0x1a4) < *(uint *)(iVar17 + 0x1a8)) {
    puVar14 = *(undefined4 **)(iVar17 + 0x1a4);
    *puVar14 = &DAT_00a9610c;
    uVar5 = rdtsc();
    puVar14[1] = (int)uVar5;
    *(undefined4 **)(*(int *)(iVar15 + iVar10 * 4) + 0x1a4) = puVar14 + 3;
  }
  iVar15 = *(int *)(iVar15 + iVar10 * 4);
  if (*(uint *)(iVar15 + 0x1a4) < *(uint *)(iVar15 + 0x1a8)) {
    puVar14 = *(undefined4 **)(iVar15 + 0x1a4);
    *puVar14 = "TtsendProps";
    uVar5 = rdtsc();
    puVar14[1] = (int)uVar5;
    *(undefined4 **)(iVar15 + 0x1a4) = puVar14 + 3;
  }
  iVar15 = *(int *)(in_ECX + 0x14);
  if ((int)local_cc < iVar15) {
    iVar17 = local_cc * 0x70;
    iVar15 = iVar15 - local_cc;
    do {
      (*(code *)**(undefined4 **)(*piVar16 + iVar17))(0);
      iVar17 = iVar17 + 0x70;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  else {
    uVar4 = *(uint *)(in_ECX + 0x18);
    if ((int)(uVar4 & 0x3fffffff) < (int)local_cc) {
      uVar12 = (uVar4 & 0x3fffffff) * 2;
      if ((int)uVar12 <= (int)local_cc) {
        uVar12 = local_cc;
      }
      local_b0 = (undefined4 *)*piVar16;
      *piVar16 = 0;
      *(undefined4 *)(in_ECX + 0x14) = 0;
      *(undefined4 *)(in_ECX + 0x18) = 0x80000000;
      if (0 < (int)uVar12) {
        FUN_008a6e40(piVar16,uVar12 & ((int)uVar12 < 0) - 1,0x70);
      }
      iVar17 = *piVar16;
      if (0 < iVar15) {
        puVar14 = local_b0 + 0x10;
        puVar13 = (undefined4 *)(iVar17 + 0x20);
        local_d0 = iVar15;
        do {
          if (puVar13 != (undefined4 *)0x20) {
            puVar13[-8] = &PTR_LAB_00a45e64;
            *(undefined2 *)(puVar13 + -7) = *(undefined2 *)(puVar14 + -0xf);
            uVar3 = *(undefined2 *)((int)puVar14 + -0x3a);
            puVar13[-8] = &PTR_FUN_00a9b2f4;
            *(undefined2 *)((int)puVar13 + -0x1a) = uVar3;
            uVar7 = puVar14[-0xb];
            uVar8 = puVar14[-10];
            uVar9 = puVar14[-9];
            puVar13[-4] = puVar14[-0xc];
            puVar13[-3] = uVar7;
            puVar13[-2] = uVar8;
            puVar13[-1] = uVar9;
            puVar2 = (undefined4 *)(((int)local_b0 - iVar17) + (int)puVar13);
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            *puVar13 = *puVar2;
            puVar13[1] = uVar7;
            puVar13[2] = uVar8;
            puVar13[3] = uVar9;
            uVar7 = puVar14[-3];
            uVar8 = puVar14[-2];
            uVar9 = puVar14[-1];
            puVar13[4] = puVar14[-4];
            puVar13[5] = uVar7;
            puVar13[6] = uVar8;
            puVar13[7] = uVar9;
            uVar7 = puVar14[1];
            uVar8 = puVar14[2];
            uVar9 = puVar14[3];
            puVar13[8] = *puVar14;
            puVar13[9] = uVar7;
            puVar13[10] = uVar8;
            puVar13[0xb] = uVar9;
            puVar13[0xc] = puVar14[4];
            puVar13[0xd] = puVar14[5];
            puVar13[-8] = &PTR_FUN_00a9d378;
            uVar7 = puVar14[9];
            uVar8 = puVar14[10];
            uVar9 = puVar14[0xb];
            puVar13[0x10] = puVar14[8];
            puVar13[0x11] = uVar7;
            puVar13[0x12] = uVar8;
            puVar13[0x13] = uVar9;
          }
          puVar13 = puVar13 + 0x1c;
          puVar14 = puVar14 + 0x1c;
          local_d0 = local_d0 + -1;
        } while (local_d0 != 0);
      }
      *(int *)(in_ECX + 0x14) = iVar15;
      puVar14 = local_b0;
      local_d0 = iVar15;
      if (0 < iVar15) {
        do {
          (**(code **)*puVar14)(0);
          local_d0 = local_d0 + -1;
          puVar14 = puVar14 + 0x1c;
        } while (local_d0 != 0);
      }
      if (-1 < (int)uVar4) {
        FUN_008a75d0(local_b0,(uVar4 & 0x3fffffff) * 0x70,0x14);
      }
    }
    if (iVar15 < (int)local_cc) {
      iVar17 = iVar15 * 0x70 + *piVar16;
      local_d0 = local_cc - iVar15;
      do {
        if (iVar17 != 0) {
          FUN_00949d00();
        }
        iVar17 = iVar17 + 0x70;
        local_d0 = local_d0 + -1;
      } while (local_d0 != 0);
    }
  }
  *(uint *)(in_ECX + 0x14) = local_cc;
  uVar4 = *(uint *)(in_ECX + 0x14);
  iStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0x80000000;
  if (0 < (int)uVar4) {
    FUN_008a6e40(&iStack_c0,((int)uVar4 < 0) - 1 & uVar4,4);
  }
  iVar15 = *(int *)(in_ECX + 0x14) + -1;
  if (-1 < iVar15) {
    iVar17 = iVar15 * 0x70;
    do {
      *(int *)(iStack_c0 + iVar15 * 4) = *piVar16 + iVar17;
      iVar15 = iVar15 + -1;
      iVar17 = iVar17 + -0x70;
    } while (-1 < iVar15);
  }
  uStack_bc = uVar4;
  (**(code **)(**(int **)(in_ECX + -0x14) + 0x24))(&iStack_c0,0xffff00ff,DAT_00ba841c);
  iVar10 = _tls_index;
  iVar15 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar17 = *(int *)(iVar15 + _tls_index * 4);
  if (*(uint *)(iVar17 + 0x1a4) < *(uint *)(iVar17 + 0x1a8)) {
    puVar14 = *(undefined4 **)(iVar17 + 0x1a4);
    *puVar14 = &DAT_00a9610c;
    uVar5 = rdtsc();
    puVar14[1] = (int)uVar5;
    *(undefined4 **)(iVar17 + 0x1a4) = puVar14 + 3;
  }
  iVar15 = *(int *)(iVar15 + iVar10 * 4);
  if (*(uint *)(iVar15 + 0x1a4) < *(uint *)(iVar15 + 0x1a8)) {
    puVar14 = *(undefined4 **)(iVar15 + 0x1a4);
    *puVar14 = &DAT_00a9610c;
    uVar5 = rdtsc();
    puVar14[1] = (int)uVar5;
    *(undefined4 **)(iVar15 + 0x1a4) = puVar14 + 3;
  }
  if (-1 < in_ECX) {
    FUN_008a75d0(local_cc,in_ECX << 2,0x14);
  }
  return;
}



void FUN_0091a720(int param_1)

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
  int iVar9;
  int unaff_FS_OFFSET;
  int iStack_a4;
  int local_9c;
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
  float local_60;
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
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  iVar8 = _tls_index;
  iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar1 = *(int *)(iVar9 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TthkSweptTransformDisplayViewer";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  local_9c = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x38) + local_9c * 4);
      iVar8 = 0;
      if (0 < *(int *)(iVar1 + 0x38)) {
        do {
          iVar9 = *(int *)(*(int *)(iVar1 + 0x34) + iVar8 * 4);
          iVar3 = *(int *)(iVar9 + 0x50);
          FUN_008b1dd0(iVar3 + 0x70);
          fVar5 = *(float *)(iVar3 + 0x90);
          fVar6 = *(float *)(iVar3 + 0x94);
          fVar7 = *(float *)(iVar3 + 0x98);
          local_60 = *(float *)(iVar3 + 0x50) -
                     (local_90 * fVar5 + local_80 * fVar6 + local_70 * fVar7);
          fStack_5c = *(float *)(iVar3 + 0x54) -
                      (fStack_8c * fVar5 + fStack_7c * fVar6 + fStack_6c * fVar7);
          fStack_58 = *(float *)(iVar3 + 0x58) -
                      (fStack_88 * fVar5 + fStack_78 * fVar6 + fStack_68 * fVar7);
          fStack_54 = *(float *)(iVar3 + 0x5c) -
                      (fStack_84 * fVar5 + fStack_74 * fVar6 + fStack_64 * fVar7);
          (**(code **)(**(int **)(in_ECX + -0x14) + 0xc))(&local_90,iVar9 + 0x15,DAT_00ba8420);
          iVar3 = *(int *)(iVar9 + 0x50);
          FUN_008b1dd0(iVar3 + 0x80);
          fVar5 = *(float *)(iVar3 + 0x90);
          fVar6 = *(float *)(iVar3 + 0x94);
          fVar7 = *(float *)(iVar3 + 0x98);
          fStack_2c = *(float *)(iVar3 + 0x60) -
                      (fStack_5c * fVar5 + fStack_4c * fVar6 + fStack_3c * fVar7);
          fStack_28 = *(float *)(iVar3 + 100) -
                      (fStack_58 * fVar5 + fStack_48 * fVar6 + fStack_38 * fVar7);
          fStack_24 = *(float *)(iVar3 + 0x68) -
                      (fStack_54 * fVar5 + fStack_44 * fVar6 + fStack_34 * fVar7);
          fStack_20 = *(float *)(iVar3 + 0x6c) -
                      (fStack_50 * fVar5 + fStack_40 * fVar6 + fStack_30 * fVar7);
          (**(code **)(**(int **)(iStack_a4 + -0x14) + 0xc))(&fStack_5c,iVar9 + 0x16,DAT_00ba8420);
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(iVar1 + 0x38));
        iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
      }
      local_9c = local_9c + 1;
      iVar8 = _tls_index;
    } while (local_9c < *(int *)(param_1 + 0x3c));
  }
  iVar1 = *(int *)(iVar9 + iVar8 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_0091a910(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  float unaff_EBX;
  float unaff_ESI;
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
  
  iVar1 = *(int *)(param_1 + 0x50);
  FUN_008b1dd0(iVar1 + 0x70);
  fVar2 = *(float *)(iVar1 + 0x90);
  fVar3 = *(float *)(iVar1 + 0x94);
  fVar4 = *(float *)(iVar1 + 0x98);
  local_20 = *(float *)(iVar1 + 0x50) - (local_50 * fVar2 + local_40 * fVar3 + local_30 * fVar4);
  fStack_1c = *(float *)(iVar1 + 0x54) - (fStack_4c * fVar2 + fStack_3c * fVar3 + fStack_2c * fVar4)
  ;
  fStack_18 = *(float *)(iVar1 + 0x58) - (fStack_48 * fVar2 + fStack_38 * fVar3 + fStack_28 * fVar4)
  ;
  fStack_14 = *(float *)(iVar1 + 0x5c) - (fStack_44 * fVar2 + fStack_34 * fVar3 + fStack_24 * fVar4)
  ;
  (**(code **)(**(int **)(in_ECX + -0x14) + 0xc))(&local_50,param_1 + 0x15,DAT_00ba8420);
  iVar1 = *(int *)(param_1 + 0x50);
  FUN_008b1dd0(iVar1 + 0x80);
  fVar2 = *(float *)(iVar1 + 0x90);
  fVar3 = *(float *)(iVar1 + 0x94);
  fVar4 = *(float *)(iVar1 + 0x98);
  fStack_2c = *(float *)(iVar1 + 0x60) - (unaff_ESI * fVar2 + fStack_4c * fVar3 + fStack_3c * fVar4)
  ;
  fStack_28 = *(float *)(iVar1 + 100) - (unaff_EBX * fVar2 + fStack_48 * fVar3 + fStack_38 * fVar4);
  fStack_24 = *(float *)(iVar1 + 0x68) - (fStack_54 * fVar2 + fStack_44 * fVar3 + fStack_34 * fVar4)
  ;
  local_20 = *(float *)(iVar1 + 0x6c) - (local_50 * fVar2 + local_40 * fVar3 + local_30 * fVar4);
  (**(code **)(**(int **)(in_ECX + -0x14) + 0xc))(&stack0xffffffa4,param_1 + 0x16,DAT_00ba8420);
  return;
}



void FUN_0091aa10(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_009491f0(param_1);
  in_ECX[10] = &PTR_LAB_00a46684;
  in_ECX[0xb] = &PTR_LAB_00a9d2b4;
  *in_ECX = &PTR_FUN_00a9d438;
  in_ECX[2] = &PTR_LAB_00a9d420;
  in_ECX[8] = &PTR_LAB_00a9d418;
  in_ECX[10] = &PTR_LAB_00a9d404;
  in_ECX[0xb] = &PTR_LAB_00a9d3f8;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0x80000000;
  return;
}



void FUN_0091aab0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = 0;
    if (0 < *(int *)(in_ECX + 0xc)) {
      puVar4 = *(undefined4 **)(in_ECX + 8);
      while (*(int *)*puVar4 != *(int *)(param_1 + 8)) {
        iVar1 = iVar1 + 1;
        puVar4 = puVar4 + 1;
        if (*(int *)(in_ECX + 0xc) <= iVar1) {
          return;
        }
      }
      if (-1 < iVar1) {
        iVar1 = *(int *)(*(int *)(in_ECX + 8) + iVar1 * 4);
        (**(code **)(**(int **)(in_ECX + -0x10) + 0x10))(param_1 + 0x15,DAT_00ba8420);
        iVar2 = 0;
        if (0 < *(int *)(iVar1 + 8)) {
          piVar5 = *(int **)(iVar1 + 4);
          do {
            if (*piVar5 == param_1 + 0x15) {
              if (-1 < iVar2) {
                iVar3 = *(int *)(iVar1 + 8) + -1;
                *(int *)(iVar1 + 8) = iVar3;
                *(undefined4 *)(*(int *)(iVar1 + 4) + iVar2 * 4) =
                     *(undefined4 *)(*(int *)(iVar1 + 4) + iVar3 * 4);
              }
              break;
            }
            iVar2 = iVar2 + 1;
            piVar5 = piVar5 + 1;
          } while (iVar2 < *(int *)(iVar1 + 8));
        }
        (**(code **)(**(int **)(in_ECX + -0x10) + 0x10))(param_1 + 0x16,DAT_00ba8420);
        iVar2 = 0;
        if (0 < *(int *)(iVar1 + 8)) {
          piVar5 = *(int **)(iVar1 + 4);
          while (*piVar5 != param_1 + 0x16) {
            iVar2 = iVar2 + 1;
            piVar5 = piVar5 + 1;
            if (*(int *)(iVar1 + 8) <= iVar2) {
              return;
            }
          }
          if (-1 < iVar2) {
            iVar3 = *(int *)(iVar1 + 8) + -1;
            *(int *)(iVar1 + 8) = iVar3;
            *(undefined4 *)(*(int *)(iVar1 + 4) + iVar2 * 4) =
                 *(undefined4 *)(*(int *)(iVar1 + 4) + iVar3 * 4);
          }
        }
      }
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0091abea) */

void FUN_0091aba0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x30) + param_1 * 4);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      (**(code **)(**(int **)(in_ECX + 0x18) + 0x10))
                (*(undefined4 *)(*(int *)(iVar1 + 4) + iVar2 * 4),DAT_00ba8420);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 8));
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}



void FUN_0091ac40(void)

{
  DAT_00ba8420 = FUN_00947c50("SweptTransforms",&LAB_0091ac10);
  return;
}



void FUN_0091ac60(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int unaff_EBP;
  int *piVar3;
  int iVar4;
  int local_4;
  
  if (in_ECX == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_ECX + 0x28;
  }
  FUN_00899ca0(iVar1);
  if (in_ECX == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_ECX + 0x2c;
  }
  FUN_00899d20(iVar1);
  piVar2 = (int *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x10,0x32);
  piVar3 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = -0x80000000;
    piVar3 = piVar2;
  }
  *piVar3 = param_1;
  if (*(uint *)(in_ECX + 0x34) == (*(uint *)(in_ECX + 0x38) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x30),4);
  }
  *(int **)(*(int *)(in_ECX + 0x30) + *(int *)(in_ECX + 0x34) * 4) = piVar3;
  *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x38) + local_4 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x38)) {
        piVar3 = (int *)(in_ECX + 0x28);
        do {
          (**(code **)(*piVar3 + 4))(*(undefined4 *)(*(int *)(iVar1 + 0x34) + iVar4 * 4));
          iVar4 = iVar4 + 1;
          in_ECX = unaff_EBP;
        } while (iVar4 < *(int *)(iVar1 + 0x38));
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0x3c));
  }
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x44) + local_4 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x38)) {
        piVar3 = (int *)(in_ECX + 0x28);
        do {
          (**(code **)(*piVar3 + 4))(*(undefined4 *)(*(int *)(iVar1 + 0x34) + iVar4 * 4));
          iVar4 = iVar4 + 1;
          in_ECX = unaff_EBP;
        } while (iVar4 < *(int *)(iVar1 + 0x38));
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0x48));
  }
  iVar1 = *(int *)(param_1 + 0x30);
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 0x38)) {
    do {
      (**(code **)(*(int *)(in_ECX + 0x28) + 4))
                (*(undefined4 *)(*(int *)(iVar1 + 0x34) + iVar4 * 4));
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar1 + 0x38));
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0091adb0(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  undefined4 *puVar8;
  int *piVar9;
  int *piStack_2f8;
  int *local_2f4;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  undefined1 local_2bc [28];
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
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined1 local_218 [516];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar7 = 0;
    if (0 < *(int *)(in_ECX + 0xc)) {
      puVar8 = *(undefined4 **)(in_ECX + 8);
      while (*(int *)*puVar8 != *(int *)(param_1 + 8)) {
        iVar7 = iVar7 + 1;
        puVar8 = puVar8 + 1;
        if (*(int *)(in_ECX + 0xc) <= iVar7) {
          return;
        }
      }
      if (-1 < iVar7) {
        local_2cc = *(int *)(*(int *)(in_ECX + 8) + iVar7 * 4);
        local_2dc = 0;
        local_2d8 = 0;
        local_2d4 = -0x80000000;
        local_2f4 = (int *)0x91ae40;
        local_2d0 = in_ECX;
        FUN_0094a520();
        local_2f4 = (int *)local_2bc;
        piStack_2f8 = (int *)0x91ae4e;
        FUN_0094a530();
        piStack_2f8 = *(int **)(param_1 + 0x14);
        local_2f4 = &local_2dc;
        FUN_0094b7e0();
        iVar6 = local_2cc;
        iVar7 = local_2d8;
        while (iVar7 = iVar7 + -1, local_2cc = iVar6, -1 < iVar7) {
          iVar2 = *(int *)(local_2dc + iVar7 * 4);
          if ((*(int *)(iVar2 + 0x54) == 6) && (*(int *)(iVar2 + 0x50) == 0)) {
            piStack_2f8 = (int *)0x200;
            local_2f4 = (int *)0x1;
            FUN_008bbfb0(local_218);
            local_2f4 = (int *)0xa9d47c;
            piStack_2f8 = (int *)0x91aeb2;
            FUN_008bbdb0();
            local_2f4 = (int *)0xa8;
            piStack_2f8 = (int *)0xa9d440;
            (**(code **)(*DAT_00ba7fb0 + 8))(0,0xffffffff,local_218);
            local_2f4 = (int *)0x91aedc;
            FUN_008bc000();
            local_2d8 = local_2d8 + -1;
            *(undefined4 *)(local_2dc + iVar7 * 4) = *(undefined4 *)(local_2dc + local_2d8 * 4);
            iVar6 = local_2cc;
          }
        }
        if ((0 < local_2d8) && (*(char *)(param_1 + 0x91) == '\0')) {
          piVar9 = (int *)(iVar6 + 4);
          piVar1 = (int *)(param_1 + 0x15);
          if (*(uint *)(iVar6 + 8) == (*(uint *)(iVar6 + 0xc) & 0x3fffffff)) {
            local_2f4 = (int *)0x4;
            piStack_2f8 = piVar9;
            FUN_008a6ee0();
          }
          *(int **)(*piVar9 + *(int *)(iVar6 + 8) * 4) = piVar1;
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          iVar7 = *(int *)(param_1 + 0x50);
          local_2f4 = (int *)(iVar7 + 0x70);
          piStack_2f8 = (int *)0x91af4e;
          FUN_008b1dd0();
          fVar3 = *(float *)(iVar7 + 0x90);
          fVar4 = *(float *)(iVar7 + 0x94);
          fVar5 = *(float *)(iVar7 + 0x98);
          iVar2 = *(int *)(param_1 + 0x50);
          local_2f4 = (int *)(iVar2 + 0x80);
          fStack_270 = *(float *)(iVar7 + 0x50) -
                       (fStack_2a0 * fVar3 + fStack_290 * fVar4 + fStack_280 * fVar5);
          fStack_26c = *(float *)(iVar7 + 0x54) -
                       (fStack_29c * fVar3 + fStack_28c * fVar4 + fStack_27c * fVar5);
          fStack_268 = *(float *)(iVar7 + 0x58) -
                       (fStack_298 * fVar3 + fStack_288 * fVar4 + fStack_278 * fVar5);
          fStack_264 = *(float *)(iVar7 + 0x5c) -
                       (fStack_294 * fVar3 + fStack_284 * fVar4 + fStack_274 * fVar5);
          piStack_2f8 = (int *)0x91afac;
          FUN_008b1dd0();
          fVar3 = *(float *)(iVar2 + 0x90);
          fVar4 = *(float *)(iVar2 + 0x94);
          fVar5 = *(float *)(iVar2 + 0x98);
          local_2f4 = (int *)DAT_00ba8420;
          fStack_230 = *(float *)(iVar2 + 0x60) -
                       (fStack_260 * fVar3 + fStack_250 * fVar4 + fStack_240 * fVar5);
          fStack_22c = *(float *)(iVar2 + 100) -
                       (fStack_25c * fVar3 + fStack_24c * fVar4 + fStack_23c * fVar5);
          fStack_228 = *(float *)(iVar2 + 0x68) -
                       (fStack_258 * fVar3 + fStack_248 * fVar4 + fStack_238 * fVar5);
          fStack_224 = *(float *)(iVar2 + 0x6c) -
                       (fStack_254 * fVar3 + fStack_244 * fVar4 + fStack_234 * fVar5);
          piStack_2f8 = piVar1;
          (**(code **)(**(int **)(local_2d0 + -0x10) + 4))(&local_2dc,&fStack_2a0);
          (**(code **)(**(int **)(local_2d0 + -0x10) + 8))(DAT_00ba8428,piVar1,DAT_00ba8420);
          param_1 = param_1 + 0x16;
          if (*(uint *)(iVar6 + 8) == (*(uint *)(iVar6 + 0xc) & 0x3fffffff)) {
            FUN_008a6ee0(piVar9,4);
          }
          *(int *)(*piVar9 + *(int *)(iVar6 + 8) * 4) = param_1;
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          (**(code **)(**(int **)(local_2d0 + -0x10) + 4))
                    (&piStack_2f8,&fStack_27c,param_1,DAT_00ba8420);
          (**(code **)(**(int **)(local_2d0 + -0x10) + 8))(DAT_00ba8424,param_1,DAT_00ba8420);
        }
        iVar7 = 0;
        if (0 < local_2d8) {
          do {
            puVar8 = *(undefined4 **)(local_2dc + iVar7 * 4);
            if (puVar8 != (undefined4 *)0x0) {
              local_2f4 = (int *)0x1;
              piStack_2f8 = (int *)0x91b0b1;
              (**(code **)*puVar8)();
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_2d8);
        }
        if (-1 < local_2d4) {
          local_2f4 = (int *)0x14;
          piStack_2f8 = (int *)(local_2d4 << 2);
          FUN_008a75d0(local_2dc);
        }
      }
    }
  }
  return;
}



void FUN_0091b160(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_ECX + 0x28;
  }
  FUN_008989e0(iVar1);
  FUN_00898a80(in_ECX + 0x2c);
  FUN_0091aba0(param_1);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x30) + param_1 * 4);
  if (iVar1 != 0) {
    if (-1 < *(int *)(iVar1 + 0xc)) {
      FUN_008a75d0(*(undefined4 *)(iVar1 + 4),*(int *)(iVar1 + 0xc) << 2,0x14);
    }
    (**(code **)(*DAT_00ba7d98 + 0x14))(iVar1,0x10,0x32);
  }
  iVar1 = *(int *)(in_ECX + 0x34) + -1;
  *(int *)(in_ECX + 0x34) = iVar1;
  *(undefined4 *)(*(int *)(in_ECX + 0x30) + param_1 * 4) =
       *(undefined4 *)(*(int *)(in_ECX + 0x30) + iVar1 * 4);
  return;
}



void FUN_0091b210(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[0xd];
  *in_ECX = &PTR_FUN_00a9d438;
  in_ECX[2] = &PTR_LAB_00a9d420;
  in_ECX[8] = &PTR_LAB_00a9d418;
  in_ECX[10] = &PTR_LAB_00a9d404;
  in_ECX[0xb] = &PTR_LAB_00a9d3f8;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_0091b160(iVar1);
  }
  if (-1 < (int)in_ECX[0xe]) {
    FUN_008a75d0(in_ECX[0xc],in_ECX[0xe] << 2,0x14);
  }
  in_ECX[0xb] = &PTR_LAB_00a9d2b4;
  in_ECX[10] = &PTR_LAB_00a46684;
  FUN_00949180();
  return;
}



void FUN_0091b2e0(byte param_1)

{
  FUN_0091b210();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0091b340(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined8 uVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int unaff_FS_OFFSET;
  int local_60;
  int local_58;
  undefined1 auStack_50 [76];
  
  iVar6 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar1 = *(int *)(iVar6 + _tls_index * 4);
  iVar5 = _tls_index;
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TthkConvexRadiusViewer";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    iVar5 = _tls_index;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  fVar3 = *(float *)(param_1 + 0x10);
  local_58 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x38) + local_58 * 4);
      local_60 = 0;
      if (0 < *(int *)(iVar1 + 0x38)) {
        do {
          iVar6 = *(int *)(*(int *)(iVar1 + 0x34) + local_60 * 4);
          iVar5 = *(int *)(iVar6 + 0x50);
          iVar6 = iVar6 + 0x17;
          if (fVar3 == *(float *)(iVar5 + 0x5c)) {
            (**(code **)(**(int **)(in_ECX + -0x14) + 0xc))(iVar5 + 0x10,iVar6,DAT_00ba842c);
          }
          else {
            FUN_0089db70(fVar3,auStack_50);
            (**(code **)(**(int **)(in_ECX + -0x14) + 0xc))(auStack_50,iVar6,DAT_00ba842c);
          }
          local_60 = local_60 + 1;
        } while (local_60 < *(int *)(iVar1 + 0x38));
        iVar6 = *(int *)(unaff_FS_OFFSET + 0x2c);
      }
      local_58 = local_58 + 1;
      iVar5 = _tls_index;
    } while (local_58 < *(int *)(param_1 + 0x3c));
  }
  iVar1 = *(int *)(iVar6 + iVar5 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_0091b4b0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_009491f0(param_1);
  in_ECX[10] = &PTR_LAB_00a46684;
  in_ECX[0xb] = &PTR_LAB_00a9d2b4;
  *in_ECX = &PTR_FUN_00a9d528;
  in_ECX[2] = &PTR_LAB_00a9d510;
  in_ECX[8] = &PTR_LAB_00a9d508;
  in_ECX[10] = &PTR_LAB_00a9d4f4;
  in_ECX[0xb] = &PTR_LAB_00a9d4e8;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0x80000000;
  return;
}



void FUN_0091b550(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = 0;
    if (0 < *(int *)(in_ECX + 0xc)) {
      puVar5 = *(undefined4 **)(in_ECX + 8);
      while (*(int *)*puVar5 != *(int *)(param_1 + 8)) {
        iVar1 = iVar1 + 1;
        puVar5 = puVar5 + 1;
        if (*(int *)(in_ECX + 0xc) <= iVar1) {
          return;
        }
      }
      if (-1 < iVar1) {
        iVar1 = *(int *)(*(int *)(in_ECX + 8) + iVar1 * 4);
        (**(code **)(**(int **)(in_ECX + -0x10) + 0x10))(param_1 + 0x17,DAT_00ba842c);
        iVar2 = 0;
        if (0 < *(int *)(iVar1 + 8)) {
          piVar4 = *(int **)(iVar1 + 4);
          while (*piVar4 != param_1 + 0x17) {
            iVar2 = iVar2 + 1;
            piVar4 = piVar4 + 1;
            if (*(int *)(iVar1 + 8) <= iVar2) {
              return;
            }
          }
          if (-1 < iVar2) {
            iVar3 = *(int *)(iVar1 + 8) + -1;
            *(int *)(iVar1 + 8) = iVar3;
            *(undefined4 *)(*(int *)(iVar1 + 4) + iVar2 * 4) =
                 *(undefined4 *)(*(int *)(iVar1 + 4) + iVar3 * 4);
          }
        }
      }
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0091b62a) */

void FUN_0091b5e0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x30) + param_1 * 4);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      (**(code **)(**(int **)(in_ECX + 0x18) + 0x10))
                (*(undefined4 *)(*(int *)(iVar1 + 4) + iVar2 * 4),DAT_00ba842c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 8));
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}



void FUN_0091b680(void)

{
  DAT_00ba842c = FUN_00947c50("ConvexRadius",&LAB_0091b650);
  return;
}



void FUN_0091b8c0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_ECX + 0x28;
  }
  FUN_008989e0(iVar1);
  FUN_00898a80(in_ECX + 0x2c);
  FUN_0091b5e0(param_1);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x30) + param_1 * 4);
  if (iVar1 != 0) {
    if (-1 < *(int *)(iVar1 + 0xc)) {
      FUN_008a75d0(*(undefined4 *)(iVar1 + 4),*(int *)(iVar1 + 0xc) << 2,0x14);
    }
    (**(code **)(*DAT_00ba7d98 + 0x14))(iVar1,0x10,0x32);
  }
  iVar1 = *(int *)(in_ECX + 0x34) + -1;
  *(int *)(in_ECX + 0x34) = iVar1;
  *(undefined4 *)(*(int *)(in_ECX + 0x30) + param_1 * 4) =
       *(undefined4 *)(*(int *)(in_ECX + 0x30) + iVar1 * 4);
  return;
}



void FUN_0091b970(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[0xd];
  *in_ECX = &PTR_FUN_00a9d528;
  in_ECX[2] = &PTR_LAB_00a9d510;
  in_ECX[8] = &PTR_LAB_00a9d508;
  in_ECX[10] = &PTR_LAB_00a9d4f4;
  in_ECX[0xb] = &PTR_LAB_00a9d4e8;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_0091b8c0(iVar1);
  }
  if (-1 < (int)in_ECX[0xe]) {
    FUN_008a75d0(in_ECX[0xc],in_ECX[0xe] << 2,0x14);
  }
  in_ECX[0xb] = &PTR_LAB_00a9d2b4;
  in_ECX[10] = &PTR_LAB_00a46684;
  FUN_00949180();
  return;
}



void FUN_0091ba40(byte param_1)

{
  FUN_0091b970();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



int FUN_0091ba70(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_8 [8];
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    piVar2 = *(int **)(param_1 + 0x44);
    do {
      if (*piVar2 == 0x1134) {
        piVar2 = (int *)FUN_0047f990(local_8,0x1134);
        return *piVar2;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x48));
  }
  return param_1 + 0x14;
}



void FUN_0091bac0(int *param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  int local_64;
  uint local_60;
  int local_54;
  undefined1 local_50 [76];
  
  if (param_3 < 0.0) {
    param_3 = *(float *)(param_2 + 0x10);
  }
  local_54 = 0;
  if (0 < *(int *)(param_2 + 0x3c)) {
    do {
      iVar1 = *(int *)(*(int *)(param_2 + 0x38) + local_54 * 4);
      local_64 = 0;
      if (0 < *(int *)(iVar1 + 0x38)) {
LAB_0091bb20:
        iVar2 = *(int *)(*(int *)(iVar1 + 0x34) + local_64 * 4);
        iVar8 = *(int *)(iVar2 + 0x48);
        iVar5 = 0;
        if (0 < iVar8) {
          piVar3 = *(int **)(iVar2 + 0x44);
          piVar7 = piVar3;
          do {
            if (*piVar7 == 0x1134) {
              iVar5 = 0;
              piVar7 = piVar3;
              if (iVar8 < 1) goto LAB_0091bbf0;
              goto LAB_0091bbe0;
            }
            iVar5 = iVar5 + 1;
            piVar7 = piVar7 + 4;
          } while (iVar5 < iVar8);
        }
        iVar8 = iVar2 + 0x14;
        goto LAB_0091bb57;
      }
LAB_0091bc46:
      local_54 = local_54 + 1;
    } while (local_54 < *(int *)(param_2 + 0x3c));
  }
  return;
  while( true ) {
    iVar5 = iVar5 + 1;
    piVar7 = piVar7 + 4;
    if (iVar8 <= iVar5) break;
LAB_0091bbe0:
    if (*piVar7 == 0x1134) {
      iVar8 = piVar3[iVar5 * 4 + 2];
      goto LAB_0091bb57;
    }
  }
LAB_0091bbf0:
  iVar8 = 0;
LAB_0091bb57:
  iVar2 = *(int *)(iVar2 + 0x50);
  fVar4 = (param_3 - *(float *)(iVar2 + 0x5c)) * *(float *)(iVar2 + 0x6c);
  if ((ABS(fVar4 - 1.0) < 1e-05) || (local_60 = (uint)(10.0 < fVar4), ABS((float)local_60) != 0.0))
  {
    iVar5 = *param_1;
    puVar6 = (undefined1 *)(iVar2 + 0x10);
  }
  else {
    FUN_0089db70(param_3,local_50);
    iVar5 = *param_1;
    puVar6 = local_50;
  }
  (**(code **)(iVar5 + 0xc))(puVar6,iVar8,DAT_00ba8438);
  local_64 = local_64 + 1;
  if (*(int *)(iVar1 + 0x38) <= local_64) goto LAB_0091bc46;
  goto LAB_0091bb20;
}



void FUN_0091bd70(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  FUN_009491f0(param_1);
  in_ECX[10] = &PTR_LAB_00a46684;
  in_ECX[0xb] = &PTR_LAB_00a9d2b4;
  *in_ECX = &PTR_FUN_00a9d5e0;
  in_ECX[2] = &PTR_LAB_00a9d5c8;
  in_ECX[8] = &PTR_LAB_00a9d5c0;
  in_ECX[10] = &PTR_LAB_00a9d5ac;
  in_ECX[0xb] = &PTR_LAB_00a9d5a0;
  iVar4 = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0x80000000;
  *(undefined1 *)(in_ECX + 0xf) = 1;
  iVar1 = param_1[1];
  if (0 < iVar1) {
    while( true ) {
      uVar2 = (**(code **)(**(int **)(*param_1 + iVar4 * 4) + 4))();
      iVar3 = FUN_008b1770("ShapeDisplayViewerOptions",uVar2);
      if (iVar3 == 0) break;
      iVar4 = iVar4 + 1;
      if (iVar1 <= iVar4) {
        return;
      }
    }
    *(undefined1 *)(in_ECX + 0xf) = *(undefined1 *)(*(int *)(*param_1 + iVar4 * 4) + 0x40);
  }
  return;
}



void FUN_0091be50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = 0;
    if (0 < *(int *)(in_ECX + 0xc)) {
      puVar4 = *(undefined4 **)(in_ECX + 8);
      while (*(int *)*puVar4 != *(int *)(param_1 + 8)) {
        iVar1 = iVar1 + 1;
        puVar4 = puVar4 + 1;
        if (*(int *)(in_ECX + 0xc) <= iVar1) {
          return;
        }
      }
      if (-1 < iVar1) {
        iVar1 = *(int *)(*(int *)(in_ECX + 8) + iVar1 * 4);
        iVar2 = FUN_0091ba70(param_1);
        (**(code **)(**(int **)(in_ECX + -0x10) + 0x10))(iVar2,DAT_00ba8438);
        iVar3 = 0;
        if (0 < *(int *)(iVar1 + 8)) {
          piVar5 = *(int **)(iVar1 + 4);
          while (*piVar5 != iVar2) {
            iVar3 = iVar3 + 1;
            piVar5 = piVar5 + 1;
            if (*(int *)(iVar1 + 8) <= iVar3) {
              return;
            }
          }
          if (-1 < iVar3) {
            iVar2 = *(int *)(iVar1 + 8) + -1;
            *(int *)(iVar1 + 8) = iVar2;
            *(undefined4 *)(*(int *)(iVar1 + 4) + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(iVar1 + 4) + iVar2 * 4);
          }
        }
      }
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0091bf3a) */

void FUN_0091bef0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x30) + param_1 * 4);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      (**(code **)(**(int **)(in_ECX + 0x18) + 0x10))
                (*(undefined4 *)(*(int *)(iVar1 + 4) + iVar2 * 4),DAT_00ba8438);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 8));
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}



void FUN_0091bf90(void)

{
  DAT_00ba8438 = FUN_00947c50("Shapes",&LAB_0091bf60);
  return;
}



void FUN_0091bfb0(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int unaff_EBP;
  int *piVar3;
  int iVar4;
  int local_4;
  
  if (in_ECX == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_ECX + 0x28;
  }
  FUN_00899ca0(iVar1);
  if (in_ECX == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_ECX + 0x2c;
  }
  FUN_00899d20(iVar1);
  piVar2 = (int *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x10,0x32);
  piVar3 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = -0x80000000;
    piVar3 = piVar2;
  }
  *piVar3 = param_1;
  if (*(uint *)(in_ECX + 0x34) == (*(uint *)(in_ECX + 0x38) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x30),4);
  }
  *(int **)(*(int *)(in_ECX + 0x30) + *(int *)(in_ECX + 0x34) * 4) = piVar3;
  *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x38) + local_4 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x38)) {
        piVar3 = (int *)(in_ECX + 0x28);
        do {
          (**(code **)(*piVar3 + 4))(*(undefined4 *)(*(int *)(iVar1 + 0x34) + iVar4 * 4));
          iVar4 = iVar4 + 1;
          in_ECX = unaff_EBP;
        } while (iVar4 < *(int *)(iVar1 + 0x38));
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0x3c));
  }
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x44) + local_4 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x38)) {
        piVar3 = (int *)(in_ECX + 0x28);
        do {
          (**(code **)(*piVar3 + 4))(*(undefined4 *)(*(int *)(iVar1 + 0x34) + iVar4 * 4));
          iVar4 = iVar4 + 1;
          in_ECX = unaff_EBP;
        } while (iVar4 < *(int *)(iVar1 + 0x38));
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0x48));
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if ((iVar1 != 0) && (iVar4 = 0, 0 < *(int *)(iVar1 + 0x38))) {
    do {
      (**(code **)(*(int *)(in_ECX + 0x28) + 4))
                (*(undefined4 *)(*(int *)(iVar1 + 0x34) + iVar4 * 4));
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar1 + 0x38));
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0091c150(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined1 auStack_280 [8];
  undefined4 *local_278 [2];
  undefined1 local_270 [8];
  int local_268;
  undefined1 *local_264;
  int local_260;
  int local_25c;
  undefined1 local_258 [64];
  undefined1 local_218 [516];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  if ((*(int *)(param_1 + 0x14) != 0) &&
     (((local_268 = in_ECX, *(int *)(in_ECX + -0x18) != 0 || (*(int *)(in_ECX + -0x14) != 0)) ||
      (FUN_0047f990(local_278,0x1234), local_278[0] == (undefined4 *)0x0)))) {
    iVar2 = 0;
    if (0 < *(int *)(in_ECX + 0xc)) {
      local_278[0] = *(undefined4 **)(in_ECX + 8);
      while (*(int *)*local_278[0] != *(int *)(param_1 + 8)) {
        iVar2 = iVar2 + 1;
        local_278[0] = local_278[0] + 1;
        if (*(int *)(in_ECX + 0xc) <= iVar2) {
          return;
        }
      }
      if (-1 < iVar2) {
        local_278[0] = *(undefined4 **)(*(int *)(in_ECX + 8) + iVar2 * 4);
        local_264 = local_258;
        local_260 = 0;
        local_25c = -0x7ffffff8;
        piVar3 = (int *)FUN_0047f990(local_270,0x1131);
        iVar2 = *piVar3;
        if (iVar2 == 0) {
          FUN_0094a520();
          FUN_0094a530(local_270);
          FUN_0094b7e0(*(undefined4 *)(param_1 + 0x14),&local_264);
          iVar2 = local_260;
          while (iVar2 = iVar2 + -1, -1 < iVar2) {
            if ((*(int *)(*(int *)(local_264 + iVar2 * 4) + 0x54) == 6) &&
               (*(int *)(*(int *)(local_264 + iVar2 * 4) + 0x50) == 0)) {
              FUN_008bbfb0(local_218,0x200,1);
              FUN_008bbdb0("Unable to build display geometry from hkShape geometry data");
              (**(code **)(*DAT_00ba7fb0 + 8))
                        (0,0xffffffff,local_218,
                         ".\\visualdebugger\\viewer\\hkShapeDisplayViewer.cpp",0xc4);
              FUN_008bc000();
              local_260 = local_260 + -1;
              *(undefined4 *)(local_264 + iVar2 * 4) = *(undefined4 *)(local_264 + local_260 * 4);
            }
          }
        }
        else {
          FUN_008bc7b0(local_270,0x1131);
          iVar4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x60,8);
          *(undefined2 *)(iVar4 + 4) = 0x60;
          iVar2 = FUN_0094ccb0(iVar2);
          *(undefined4 *)(iVar2 + 0x10) = 0;
          *(undefined4 *)(iVar2 + 0x14) = 0;
          *(undefined4 *)(iVar2 + 0x18) = 0;
          *(undefined4 *)(iVar2 + 0x1c) = 0;
          *(undefined4 *)(iVar2 + 0x20) = 0;
          *(undefined4 *)(iVar2 + 0x24) = 0;
          *(undefined4 *)(iVar2 + 0x28) = 0;
          *(undefined4 *)(iVar2 + 0x2c) = 0;
          *(undefined4 *)(iVar2 + 0x30) = 0;
          *(undefined4 *)(iVar2 + 0x34) = 0;
          *(undefined4 *)(iVar2 + 0x38) = 0;
          *(undefined4 *)(iVar2 + 0x3c) = 0;
          *(undefined4 *)(iVar2 + 0x10) = 0x3f800000;
          *(undefined4 *)(iVar2 + 0x24) = 0x3f800000;
          *(undefined4 *)(iVar2 + 0x38) = 0x3f800000;
          *(undefined4 *)(iVar2 + 0x40) = 0;
          *(undefined4 *)(iVar2 + 0x44) = 0;
          *(undefined4 *)(iVar2 + 0x48) = 0;
          *(undefined4 *)(iVar2 + 0x4c) = 0;
          *(int *)(local_264 + local_260 * 4) = iVar2;
          local_260 = local_260 + 1;
        }
        if (0 < local_260) {
          uVar5 = FUN_0091ba70(param_1);
          puVar1 = local_278[0];
          piVar3 = local_278[0] + 1;
          if (local_278[0][2] == (local_278[0][3] & 0x3fffffff)) {
            FUN_008a6ee0(piVar3,4);
          }
          *(undefined4 *)(*piVar3 + puVar1[2] * 4) = uVar5;
          piVar3 = puVar1 + 2;
          *piVar3 = *piVar3 + 1;
          (**(code **)(**(int **)(local_268 + -0x10) + 4))
                    (&local_264,*(int *)(param_1 + 0x50) + 0x10,uVar5,DAT_00ba8438);
          piVar3 = (int *)FUN_0047f990(auStack_280,0x1130);
          iVar2 = *piVar3;
          if ((*piVar3 == 0) && (iVar2 = DAT_00ba843c, *(char *)(param_1 + 0x91) == '\0')) {
            iVar2 = DAT_00ba8440;
          }
          (**(code **)(**(int **)(local_268 + -0x10) + 8))(iVar2,uVar5,DAT_00ba8438);
        }
        iVar2 = 0;
        if (0 < local_260) {
          do {
            if (*(undefined4 **)(local_264 + iVar2 * 4) != (undefined4 *)0x0) {
              (**(code **)**(undefined4 **)(local_264 + iVar2 * 4))(1);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_260);
        }
        if (-1 < local_25c) {
          FUN_008a75d0(local_264,local_25c << 2,0x14);
        }
      }
    }
  }
  return;
}



void FUN_0091c470(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_ECX + 0x28;
  }
  FUN_008989e0(iVar1);
  FUN_00898a80(in_ECX + 0x2c);
  FUN_0091bef0(param_1);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x30) + param_1 * 4);
  if (iVar1 != 0) {
    if (-1 < *(int *)(iVar1 + 0xc)) {
      FUN_008a75d0(*(undefined4 *)(iVar1 + 4),*(int *)(iVar1 + 0xc) << 2,0x14);
    }
    (**(code **)(*DAT_00ba7d98 + 0x14))(iVar1,0x10,0x32);
  }
  iVar1 = *(int *)(in_ECX + 0x34) + -1;
  *(int *)(in_ECX + 0x34) = iVar1;
  *(undefined4 *)(*(int *)(in_ECX + 0x30) + param_1 * 4) =
       *(undefined4 *)(*(int *)(in_ECX + 0x30) + iVar1 * 4);
  return;
}



void FUN_0091c520(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[0xd];
  *in_ECX = &PTR_FUN_00a9d5e0;
  in_ECX[2] = &PTR_LAB_00a9d5c8;
  in_ECX[8] = &PTR_LAB_00a9d5c0;
  in_ECX[10] = &PTR_LAB_00a9d5ac;
  in_ECX[0xb] = &PTR_LAB_00a9d5a0;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_0091c470(iVar1);
  }
  if (-1 < (int)in_ECX[0xe]) {
    FUN_008a75d0(in_ECX[0xc],in_ECX[0xe] << 2,0x14);
  }
  in_ECX[0xb] = &PTR_LAB_00a9d2b4;
  in_ECX[10] = &PTR_LAB_00a46684;
  FUN_00949180();
  return;
}



void FUN_0091c5f0(byte param_1)

{
  FUN_0091c520();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0091c620(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1;
  if (in_ECX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = in_ECX + 0x28;
  }
  FUN_00899ca0(iVar3);
  if (in_ECX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = in_ECX + 0x2c;
  }
  FUN_00899d20(iVar3);
  piVar1 = (int *)(param_1 + 0x3c);
  param_1 = 0;
  if (0 < *piVar1) {
    do {
      iVar3 = *(int *)(*(int *)(iVar2 + 0x38) + param_1 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar3 + 0x38)) {
        do {
          (**(code **)(*(int *)(in_ECX + 0x28) + 4))
                    (*(undefined4 *)(*(int *)(iVar3 + 0x34) + iVar4 * 4));
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar3 + 0x38));
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar2 + 0x3c));
  }
  param_1 = 0;
  if (0 < *(int *)(iVar2 + 0x48)) {
    do {
      iVar3 = *(int *)(*(int *)(iVar2 + 0x44) + param_1 * 4);
      iVar4 = 0;
      if (0 < *(int *)(iVar3 + 0x38)) {
        do {
          (**(code **)(*(int *)(in_ECX + 0x28) + 4))
                    (*(undefined4 *)(*(int *)(iVar3 + 0x34) + iVar4 * 4));
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar3 + 0x38));
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar2 + 0x48));
  }
  iVar2 = *(int *)(iVar2 + 0x30);
  if ((iVar2 != 0) && (iVar3 = 0, 0 < *(int *)(iVar2 + 0x38))) {
    do {
      (**(code **)(*(int *)(in_ECX + 0x28) + 4))
                (*(undefined4 *)(*(int *)(iVar2 + 0x34) + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 0x38));
  }
  return;
}



void FUN_0091c760(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int in_ECX;
  int unaff_FS_OFFSET;
  float10 fVar8;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
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
  
  iVar7 = _tls_index;
  iVar2 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar3 = *(int *)(iVar2 + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar4 = "TthkRigidBodyCentreOfMassViewer";
    uVar6 = rdtsc();
    iVar3 = *(int *)(iVar2 + iVar7 * 4);
    puVar4[1] = (int)uVar6;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar4 + 3;
  }
  local_64 = 0;
  if (0 < *(int *)(in_ECX + 8)) {
    do {
      fVar8 = (float10)FUN_0089da90();
      if ((float10)0.0 != fVar8) {
        iVar3 = *(int *)(iVar2 + iVar7 * 4);
        if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
          puVar4 = *(undefined4 **)(iVar3 + 0x1a4);
          *puVar4 = "TtgetMassAndLines";
          uVar6 = rdtsc();
          local_60 = (undefined4)uVar6;
          iVar3 = *(int *)(iVar2 + iVar7 * 4);
          puVar4[1] = local_60;
          *(undefined4 **)(iVar3 + 0x1a4) = puVar4 + 3;
        }
        piVar1 = (int *)(*(int *)(in_ECX + 4) + local_64 * 4);
        iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 4) + local_64 * 4) + 0x50);
        local_50 = *(float *)(iVar3 + 0x60);
        fStack_4c = *(float *)(iVar3 + 100);
        fStack_48 = *(float *)(iVar3 + 0x68);
        fStack_44 = *(float *)(iVar3 + 0x6c);
        iVar3 = *(int *)(*piVar1 + 0x50);
        local_30 = local_50 + *(float *)(iVar3 + 0x10);
        fStack_2c = fStack_4c + *(float *)(iVar3 + 0x14);
        fStack_28 = fStack_48 + *(float *)(iVar3 + 0x18);
        fStack_24 = fStack_44 + *(float *)(iVar3 + 0x1c);
        iVar3 = *(int *)(*piVar1 + 0x50);
        local_20 = local_50 + *(float *)(iVar3 + 0x20);
        fStack_1c = fStack_4c + *(float *)(iVar3 + 0x24);
        fStack_18 = fStack_48 + *(float *)(iVar3 + 0x28);
        fStack_14 = fStack_44 + *(float *)(iVar3 + 0x2c);
        iVar3 = *(int *)(*piVar1 + 0x50);
        iVar5 = *(int *)(iVar2 + iVar7 * 4);
        local_40 = local_50 + *(float *)(iVar3 + 0x30);
        fStack_3c = fStack_4c + *(float *)(iVar3 + 0x34);
        fStack_38 = fStack_48 + *(float *)(iVar3 + 0x38);
        fStack_34 = fStack_44 + *(float *)(iVar3 + 0x3c);
        if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
          puVar4 = *(undefined4 **)(iVar5 + 0x1a4);
          *puVar4 = &DAT_00a9610c;
          uVar6 = rdtsc();
          local_5c = (undefined4)uVar6;
          iVar3 = *(int *)(iVar2 + iVar7 * 4);
          puVar4[1] = local_5c;
          *(undefined4 **)(iVar3 + 0x1a4) = puVar4 + 3;
        }
        iVar3 = *(int *)(iVar2 + iVar7 * 4);
        if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
          puVar4 = *(undefined4 **)(iVar3 + 0x1a4);
          *puVar4 = "Ttdisplay3lines";
          uVar6 = rdtsc();
          local_58 = (undefined4)uVar6;
          iVar3 = *(int *)(iVar2 + iVar7 * 4);
          puVar4[1] = local_58;
          *(undefined4 **)(iVar3 + 0x1a4) = puVar4 + 3;
        }
        (**(code **)(**(int **)(in_ECX + -0x14) + 0x1c))
                  (&local_50,&local_30,0xffff0000,DAT_00ba8444);
        (**(code **)(**(int **)(in_ECX + -0x14) + 0x1c))
                  (&local_60,&local_30,0xff008000,DAT_00ba8444);
        (**(code **)(**(int **)(in_ECX + -0x14) + 0x1c))
                  (&stack0xffffff90,&local_60,0xff0000ff,DAT_00ba8444);
        iVar3 = *(int *)(iVar2 + iVar7 * 4);
        if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
          puVar4 = *(undefined4 **)(iVar3 + 0x1a4);
          *puVar4 = &DAT_00a9610c;
          uVar6 = rdtsc();
          local_54 = (undefined4)uVar6;
          iVar3 = *(int *)(iVar2 + iVar7 * 4);
          puVar4[1] = local_54;
          *(undefined4 **)(iVar3 + 0x1a4) = puVar4 + 3;
        }
      }
      local_64 = local_64 + 1;
    } while (local_64 < *(int *)(in_ECX + 8));
  }
  iVar2 = *(int *)(iVar2 + iVar7 * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar4 = &DAT_00a9610c;
    uVar6 = rdtsc();
    puVar4[1] = (int)uVar6;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar4 + 3;
  }
  return;
}



void FUN_0091c9d0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_009491f0(param_1);
  in_ECX[10] = &PTR_LAB_00a46684;
  in_ECX[0xb] = &PTR_LAB_00a9d2b4;
  *in_ECX = &PTR_FUN_00a9d6b0;
  in_ECX[2] = &PTR_LAB_00a9d698;
  in_ECX[8] = &PTR_LAB_00a9d350;
  in_ECX[10] = &PTR_LAB_00a9d684;
  in_ECX[0xb] = &PTR_LAB_00a9d678;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0x80000000;
  return;
}



void FUN_0091cab0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  
  *in_ECX = &PTR_FUN_00a9d6b0;
  in_ECX[2] = &PTR_LAB_00a9d698;
  in_ECX[8] = &PTR_LAB_00a9d350;
  in_ECX[10] = &PTR_LAB_00a9d684;
  in_ECX[0xb] = &PTR_LAB_00a9d678;
  if ((in_ECX[9] != 0) && (iVar1 = 0, 0 < *(int *)(in_ECX[9] + 0x60))) {
    do {
      FUN_00919c40(*(undefined4 *)(*(int *)(in_ECX[9] + 0x5c) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX[9] + 0x60));
  }
  if (-1 < (int)in_ECX[0xe]) {
    FUN_008a75d0(in_ECX[0xc],in_ECX[0xe] << 2,0x14);
  }
  in_ECX[0xb] = &PTR_LAB_00a9d2b4;
  in_ECX[10] = &PTR_LAB_00a46684;
  FUN_00949180();
  return;
}



void FUN_0091cbe0(void)

{
  DAT_00ba8444 = FUN_00947c50("CentreOfMass",&LAB_0091cbb0);
  return;
}



void FUN_0091cc00(byte param_1)

{
  FUN_0091cab0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0091cc30(int param_1)

{
  int in_ECX;
  int iVar1;
  
  if (in_ECX == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_ECX + 0x28;
  }
  FUN_00898a30(iVar1);
  if (in_ECX == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_ECX + 0x2c;
  }
  FUN_00898a80(iVar1);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xbc)) {
    do {
      (**(code **)(*(int *)(in_ECX + 0x28) + 8))
                (*(undefined4 *)(*(int *)(param_1 + 0xb8) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xbc));
  }
  return;
}



void FUN_0091cca0(int param_1)

{
  int in_ECX;
  int iVar1;
  
  if (in_ECX == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_ECX + 0x28;
  }
  FUN_00899ce0(iVar1);
  if (in_ECX == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_ECX + 0x2c;
  }
  FUN_00899d20(iVar1);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xbc)) {
    do {
      (**(code **)(*(int *)(in_ECX + 0x28) + 4))
                (*(undefined4 *)(*(int *)(param_1 + 0xb8) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xbc));
  }
  return;
}



void FUN_0091cd70(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_009491f0(param_1);
  in_ECX[10] = &PTR_LAB_00a56320;
  in_ECX[0xb] = &PTR_LAB_00a9d2b4;
  *in_ECX = &PTR_FUN_00a9d708;
  in_ECX[2] = &PTR_LAB_00a9d6f0;
  in_ECX[8] = &PTR_LAB_00a9d6e8;
  in_ECX[10] = &PTR_LAB_00a9d6d4;
  in_ECX[0xb] = &PTR_LAB_00a9d6c8;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0x80000000;
  return;
}



void FUN_0091ce50(void)

{
  undefined4 *in_ECX;
  int iVar1;
  
  *in_ECX = &PTR_FUN_00a9d708;
  in_ECX[2] = &PTR_LAB_00a9d6f0;
  in_ECX[8] = &PTR_LAB_00a9d6e8;
  in_ECX[10] = &PTR_LAB_00a9d6d4;
  in_ECX[0xb] = &PTR_LAB_00a9d6c8;
  if ((in_ECX[9] != 0) && (iVar1 = 0, 0 < *(int *)(in_ECX[9] + 0x60))) {
    do {
      FUN_0091cc30(*(undefined4 *)(*(int *)(in_ECX[9] + 0x5c) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX[9] + 0x60));
  }
  if (-1 < (int)in_ECX[0xe]) {
    FUN_008a75d0(in_ECX[0xc],in_ECX[0xe] << 2,0x14);
  }
  in_ECX[0xb] = &PTR_LAB_00a9d2b4;
  in_ECX[10] = &PTR_LAB_00a56320;
  FUN_00949180();
  return;
}



void FUN_0091cf60(byte param_1)

{
  FUN_0091cf90();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0091cf90(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[4]) {
    FUN_008a75d0(in_ECX[2],in_ECX[4] << 2,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_0091d010(byte param_1)

{
  FUN_0091ce50();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0091d250(void)

{
  DAT_00ba8448 = FUN_00947c50("Phantoms",&LAB_0091cfe0);
  return;
}



void FUN_0091d270(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int in_ECX;
  int unaff_EBX;
  int iVar5;
  int iVar6;
  int unaff_FS_OFFSET;
  int iStack_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [28];
  
  iVar6 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar1 = "TthkPhantomDisplayViewer";
    uVar3 = rdtsc();
    local_50 = (int)uVar3;
    puVar1[1] = local_50;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar1 + 3;
  }
  iVar6 = *(int *)(param_1 + 0xbc);
  local_48 = 0;
  local_44 = 0;
  local_40 = -0x80000000;
  if (iVar6 < 0) {
    iVar5 = iVar6 << 7;
    do {
      (*(code *)**(undefined4 **)(local_48 + iVar5))(0);
      iVar5 = iVar5 + 0x80;
    } while (iVar5 < 0);
  }
  else {
    if (0 < iVar6) {
      local_48 = 0;
      local_44 = 0;
      local_40 = -0x80000000;
      if (0 < iVar6) {
        FUN_008a6e40(&local_48,iVar6,0x80);
      }
    }
    local_44 = 0;
    iVar5 = local_48;
    iVar4 = iVar6;
    if (0 < iVar6) {
      do {
        local_50 = iVar4;
        if (iVar5 != 0) {
          FUN_00949300();
        }
        iVar5 = iVar5 + 0x80;
        local_50 = local_50 + -1;
        iVar4 = local_50;
      } while (local_50 != 0);
    }
  }
  uVar2 = *(uint *)(param_1 + 0xbc);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0x80000000;
  local_44 = iVar6;
  if (0 < (int)uVar2) {
    FUN_008a6e40(&local_3c,((int)uVar2 < 0) - 1 & uVar2,4);
  }
  iVar6 = 0;
  local_38 = uVar2;
  if (0 < *(int *)(param_1 + 0xbc)) {
    iVar5 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xb8) + iVar6 * 4) + 0x14))(auStack_30);
      FUN_009492e0(auStack_30,auStack_20);
      *(int *)(local_3c + iVar6 * 4) = iVar5 + local_48;
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x80;
    } while (iVar6 < *(int *)(param_1 + 0xbc));
  }
  (**(code **)(**(int **)(in_ECX + -0x14) + 0x24))(&local_3c,DAT_00ba844c,DAT_00ba8448);
  iVar6 = *(int *)(unaff_FS_OFFSET + 0x2c);
  if (-1 < local_40) {
    FUN_008a75d0(local_48,local_40 << 2,0x14);
  }
  if (0 < local_50) {
    iVar5 = 0;
    do {
      (*(code *)**(undefined4 **)(iStack_54 + iVar5))(0);
      iVar5 = iVar5 + 0x80;
      local_50 = local_50 + -1;
    } while (local_50 != 0);
  }
  if (-1 < in_ECX) {
    FUN_008a75d0(iStack_54,in_ECX << 7,0x14);
  }
  iVar5 = 0;
  if (0 < *(int *)(unaff_EBX + 8)) {
    do {
      iVar6 = *(int *)(*(int *)(unaff_EBX + 4) + iVar5 * 4);
      (**(code **)(**(int **)(unaff_EBX + -0x14) + 0xc))
                (*(undefined4 *)(iVar6 + 0x1c),iVar6 + 0x14,DAT_00ba8448);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(unaff_EBX + 8));
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



void FUN_0091d530(float *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *in_ECX;
  int *unaff_ESI;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float **ppfStack_a0;
  float *pfStack_9c;
  uint *puStack_90;
  float *pfStack_8c;
  float *pfStack_80;
  float *pfStack_7c;
  uint local_70;
  uint local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50 [4];
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
  
  fVar13 = *in_ECX;
  fVar2 = in_ECX[1];
  fVar3 = in_ECX[2];
  fVar17 = in_ECX[3];
  if (1.1920929e-07 <= fVar3 * fVar3 + fVar2 * fVar2 + fVar13 * fVar13) {
    fVar4 = *param_1;
    fVar5 = param_1[1];
    fVar6 = param_1[2];
    fVar7 = param_1[3];
    local_68 = ABS(in_ECX[1]);
    local_60 = fVar4 + fVar13;
    fStack_5c = fVar5 + fVar2;
    fStack_58 = fVar6 + fVar3;
    fStack_54 = fVar7 + fVar17;
    bVar1 = ABS(*in_ECX) <= local_68;
    local_6c = 2;
    fVar9 = ABS(*in_ECX);
    if (!bVar1) {
      fVar9 = local_68;
    }
    local_70 = (uint)!bVar1;
    uVar8 = local_70;
    if (ABS(in_ECX[2]) < fVar9) {
      local_6c = local_70;
      uVar8 = 2;
    }
    local_50[uVar8] = 0.0;
    local_50[bVar1] = in_ECX[local_6c];
    local_50[local_6c] = -in_ECX[bVar1];
    fVar9 = local_50[1] * local_50[1];
    fVar11 = local_50[2] * local_50[2];
    auVar18._4_4_ = fVar9;
    auVar18._0_4_ = fVar9;
    auVar18._8_4_ = fVar9;
    auVar18._12_4_ = fVar9;
    auVar19._4_12_ = auVar18._4_12_;
    auVar19._0_4_ = fVar9 + local_50[0] * local_50[0];
    auVar20._4_4_ = fVar11;
    auVar20._0_4_ = fVar11 + auVar19._0_4_;
    auVar20._8_4_ = fVar11;
    auVar20._12_4_ = fVar11;
    auVar20 = rsqrtss(auVar19,auVar20);
    fVar9 = auVar20._0_4_;
    fVar9 = fVar9 * 0.5 * (3.0 - (fVar11 + auVar19._0_4_) * fVar9 * fVar9);
    fVar11 = fVar9 * local_50[0];
    fVar10 = fVar9 * local_50[1];
    fVar12 = fVar9 * local_50[2];
    fVar9 = fVar9 * 0.0;
    fVar14 = fVar2 * fVar12 - fVar3 * fVar10;
    fVar15 = fVar3 * fVar11 - fVar13 * fVar12;
    fVar16 = fVar13 * fVar10 - fVar2 * fVar11;
    fVar17 = fVar17 * fVar9 - fVar17 * fVar9;
    fVar13 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar13 * fVar13);
    local_20 = fVar4 * 0.14999998 + local_60 * 0.85;
    fStack_1c = fVar5 * 0.14999998 + fStack_5c * 0.85;
    fStack_18 = fVar6 * 0.14999998 + fStack_58 * 0.85;
    fStack_14 = fVar7 * 0.14999998 + fStack_54 * 0.85;
    local_50[0] = local_20 + fVar13 * fVar11 * 0.14999998;
    local_50[1] = fStack_1c + fVar13 * fVar10 * 0.14999998;
    local_50[2] = fStack_18 + fVar13 * fVar12 * 0.14999998;
    local_50[3] = fStack_14 + fVar13 * fVar9 * 0.14999998;
    local_64 = 0xbe199998;
    local_40 = local_20 + fVar13 * fVar11 * -0.14999998;
    fStack_3c = fStack_1c + fVar13 * fVar10 * -0.14999998;
    fStack_38 = fStack_18 + fVar13 * fVar12 * -0.14999998;
    fStack_34 = fStack_14 + fVar13 * fVar9 * -0.14999998;
    local_30 = local_20 + fVar14 * 0.14999998;
    fStack_2c = fStack_1c + fVar15 * 0.14999998;
    fStack_28 = fStack_18 + fVar16 * 0.14999998;
    fStack_24 = fStack_14 + fVar17 * 0.14999998;
    pfStack_7c = &local_60;
    pfStack_80 = param_1;
    local_20 = local_20 + fVar14 * -0.14999998;
    fStack_1c = fStack_1c + fVar15 * -0.14999998;
    fStack_18 = fStack_18 + fVar16 * -0.14999998;
    fStack_14 = fStack_14 + fVar17 * -0.14999998;
    (**(code **)(*unaff_ESI + 0x1c))();
    pfStack_8c = &local_60;
    puStack_90 = &local_70;
    (**(code **)(*unaff_ESI + 0x1c))();
    pfStack_9c = &local_60;
    ppfStack_a0 = &pfStack_80;
    (**(code **)(*unaff_ESI + 0x1c))();
    (**(code **)(*unaff_ESI + 0x1c))(&puStack_90,&local_60);
    (**(code **)(*unaff_ESI + 0x1c))(&ppfStack_a0,&local_60);
  }
  return;
}



void FUN_0091d7e0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  param_1 = ((*piVar1 - (int)piVar1) + -0x30) / 0x30;
  if (0 < param_1) {
    do {
      piVar1 = piVar1 + 0xc;
      FUN_0091d530(piVar1);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}



void FUN_0091d890(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  *in_ECX = &PTR_FUN_00a9d7c4;
  in_ECX[2] = &PTR_LAB_00a9d7ac;
  in_ECX[8] = &PTR_LAB_00a9d7fc;
  in_ECX[10] = &PTR_FUN_00a9d798;
  if ((in_ECX[9] != 0) && (iVar2 = 0, 0 < *(int *)(in_ECX[9] + 0x60))) {
    do {
      if (in_ECX == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = in_ECX + 10;
      }
      FUN_00898ad0(puVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX[9] + 0x60));
  }
  in_ECX[10] = &PTR_LAB_00a2fc50;
  FUN_00949180();
  return;
}



void FUN_0091d900(int *param_1)

{
  float *pfVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  int local_44;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pfVar1 = (float *)param_1[3];
  local_44 = 0;
  do {
    fVar3 = (float10)local_44;
    fVar4 = (float10)fsin(fVar3);
    fVar5 = (float10)fcos(fVar3);
    fVar3 = (float10)fsin(fVar3 * (float10)5.0);
    local_30 = *pfVar1 + (float)fVar4;
    fStack_2c = pfVar1[1] + (float)fVar5;
    fStack_28 = pfVar1[2] + (float)fVar3;
    fStack_24 = pfVar1[3] + 0.0;
    (**(code **)(**(int **)(in_ECX + -0x10) + 0x1c))(pfVar1,&local_30,0xff008000,DAT_00ba8454);
    local_44 = local_44 + 1;
  } while (local_44 < 0x14);
  iVar2 = *param_1;
  if ((*(char *)(iVar2 + 0x18) == '\x01') && (iVar2 = *(int *)(iVar2 + 0x10) + iVar2, iVar2 != 0)) {
    *(undefined2 *)(iVar2 + 0x8e) = 0;
  }
  pfVar1 = (float *)param_1[3];
  fStack_20 = *pfVar1 + pfVar1[4];
  fStack_1c = pfVar1[1] + pfVar1[5];
  fStack_18 = pfVar1[2] + pfVar1[6];
  fStack_14 = pfVar1[3] + pfVar1[7];
  (**(code **)(**(int **)(in_ECX + -0x10) + 0x1c))(param_1[3],&fStack_20,0xffff0000,DAT_00ba8454);
  return;
}



void FUN_0091d9d0(int *param_1)

{
  float *pfVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int local_44;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pfVar1 = (float *)param_1[4];
  local_44 = 0;
  do {
    fVar4 = (float10)local_44;
    fVar5 = (float10)fsin(fVar4);
    fVar6 = (float10)fcos(fVar4);
    fVar4 = (float10)fsin(fVar4 * (float10)5.0);
    local_30 = *pfVar1 + (float)fVar5;
    fStack_2c = pfVar1[1] + (float)fVar6;
    fStack_28 = pfVar1[2] + (float)fVar4;
    fStack_24 = pfVar1[3] + 0.0;
    (**(code **)(**(int **)(in_ECX + -0x10) + 0x1c))(pfVar1,&local_30,0xffff0000,DAT_00ba8454);
    local_44 = local_44 + 1;
  } while (local_44 < 0x14);
  iVar3 = *param_1;
  for (iVar2 = *(int *)(*param_1 + 0xc); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
    iVar3 = iVar2;
  }
  if ((*(char *)(iVar3 + 0x18) == '\x01') && (iVar3 = *(int *)(iVar3 + 0x10) + iVar3, iVar3 != 0)) {
    *(undefined2 *)(iVar3 + 0x8e) = 0;
  }
  pfVar1 = (float *)param_1[4];
  fStack_20 = *pfVar1 + pfVar1[4];
  fStack_1c = pfVar1[1] + pfVar1[5];
  fStack_18 = pfVar1[2] + pfVar1[6];
  fStack_14 = pfVar1[3] + pfVar1[7];
  (**(code **)(**(int **)(in_ECX + -0x10) + 0x1c))(param_1[4],&fStack_20,0xffff0000,DAT_00ba8454);
  return;
}



void FUN_0091db00(byte param_1)

{
  FUN_0091d890();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0091db30(void)

{
  DAT_00ba8454 = FUN_00947c50("ForcedContactPoints (See Docs For Usage)",&LAB_0091dab0);
  return;
}



void FUN_0091dbb0(int param_1)

{
  float *pfVar1;
  int in_ECX;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pfVar1 = *(float **)(param_1 + 0x10);
  local_20 = *pfVar1 + pfVar1[4];
  fStack_1c = pfVar1[1] + pfVar1[5];
  fStack_18 = pfVar1[2] + pfVar1[6];
  fStack_14 = pfVar1[3] + pfVar1[7];
  (**(code **)(**(int **)(in_ECX + -0x10) + 0x1c))
            (*(undefined4 *)(param_1 + 0x10),&local_20,0xffff0000,DAT_00ba8458);
  return;
}



void FUN_0091dc00(float *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *in_ECX;
  int *unaff_ESI;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float **ppfStack_a0;
  float *pfStack_9c;
  uint *puStack_90;
  float *pfStack_8c;
  float *pfStack_80;
  float *pfStack_7c;
  uint local_70;
  uint local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50 [4];
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
  
  fVar13 = *in_ECX;
  fVar2 = in_ECX[1];
  fVar3 = in_ECX[2];
  fVar17 = in_ECX[3];
  if (1.1920929e-07 <= fVar3 * fVar3 + fVar2 * fVar2 + fVar13 * fVar13) {
    fVar4 = *param_1;
    fVar5 = param_1[1];
    fVar6 = param_1[2];
    fVar7 = param_1[3];
    local_68 = ABS(in_ECX[1]);
    local_60 = fVar4 + fVar13;
    fStack_5c = fVar5 + fVar2;
    fStack_58 = fVar6 + fVar3;
    fStack_54 = fVar7 + fVar17;
    bVar1 = ABS(*in_ECX) <= local_68;
    local_6c = 2;
    fVar9 = ABS(*in_ECX);
    if (!bVar1) {
      fVar9 = local_68;
    }
    local_70 = (uint)!bVar1;
    uVar8 = local_70;
    if (ABS(in_ECX[2]) < fVar9) {
      local_6c = local_70;
      uVar8 = 2;
    }
    local_50[uVar8] = 0.0;
    local_50[bVar1] = in_ECX[local_6c];
    local_50[local_6c] = -in_ECX[bVar1];
    fVar9 = local_50[1] * local_50[1];
    fVar11 = local_50[2] * local_50[2];
    auVar18._4_4_ = fVar9;
    auVar18._0_4_ = fVar9;
    auVar18._8_4_ = fVar9;
    auVar18._12_4_ = fVar9;
    auVar19._4_12_ = auVar18._4_12_;
    auVar19._0_4_ = fVar9 + local_50[0] * local_50[0];
    auVar20._4_4_ = fVar11;
    auVar20._0_4_ = fVar11 + auVar19._0_4_;
    auVar20._8_4_ = fVar11;
    auVar20._12_4_ = fVar11;
    auVar20 = rsqrtss(auVar19,auVar20);
    fVar9 = auVar20._0_4_;
    fVar9 = fVar9 * 0.5 * (3.0 - (fVar11 + auVar19._0_4_) * fVar9 * fVar9);
    fVar11 = fVar9 * local_50[0];
    fVar10 = fVar9 * local_50[1];
    fVar12 = fVar9 * local_50[2];
    fVar9 = fVar9 * 0.0;
    fVar14 = fVar2 * fVar12 - fVar3 * fVar10;
    fVar15 = fVar3 * fVar11 - fVar13 * fVar12;
    fVar16 = fVar13 * fVar10 - fVar2 * fVar11;
    fVar17 = fVar17 * fVar9 - fVar17 * fVar9;
    fVar13 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar13 * fVar13);
    local_20 = fVar4 * 0.14999998 + local_60 * 0.85;
    fStack_1c = fVar5 * 0.14999998 + fStack_5c * 0.85;
    fStack_18 = fVar6 * 0.14999998 + fStack_58 * 0.85;
    fStack_14 = fVar7 * 0.14999998 + fStack_54 * 0.85;
    local_50[0] = local_20 + fVar13 * fVar11 * 0.14999998;
    local_50[1] = fStack_1c + fVar13 * fVar10 * 0.14999998;
    local_50[2] = fStack_18 + fVar13 * fVar12 * 0.14999998;
    local_50[3] = fStack_14 + fVar13 * fVar9 * 0.14999998;
    local_64 = 0xbe199998;
    local_40 = local_20 + fVar13 * fVar11 * -0.14999998;
    fStack_3c = fStack_1c + fVar13 * fVar10 * -0.14999998;
    fStack_38 = fStack_18 + fVar13 * fVar12 * -0.14999998;
    fStack_34 = fStack_14 + fVar13 * fVar9 * -0.14999998;
    local_30 = local_20 + fVar14 * 0.14999998;
    fStack_2c = fStack_1c + fVar15 * 0.14999998;
    fStack_28 = fStack_18 + fVar16 * 0.14999998;
    fStack_24 = fStack_14 + fVar17 * 0.14999998;
    pfStack_7c = &local_60;
    pfStack_80 = param_1;
    local_20 = local_20 + fVar14 * -0.14999998;
    fStack_1c = fStack_1c + fVar15 * -0.14999998;
    fStack_18 = fStack_18 + fVar16 * -0.14999998;
    fStack_14 = fStack_14 + fVar17 * -0.14999998;
    (**(code **)(*unaff_ESI + 0x1c))();
    pfStack_8c = &local_60;
    puStack_90 = &local_70;
    (**(code **)(*unaff_ESI + 0x1c))();
    pfStack_9c = &local_60;
    ppfStack_a0 = &pfStack_80;
    (**(code **)(*unaff_ESI + 0x1c))();
    (**(code **)(*unaff_ESI + 0x1c))(&puStack_90,&local_60);
    (**(code **)(*unaff_ESI + 0x1c))(&ppfStack_a0,&local_60);
  }
  return;
}



void FUN_0091deb0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  param_1 = ((*piVar1 - (int)piVar1) + -0x30) / 0x30;
  if (0 < param_1) {
    do {
      piVar1 = piVar1 + 0xc;
      FUN_0091dc00(piVar1);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}



void FUN_0091df60(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  if ((iVar1 != 0) && (iVar2 = 0, 0 < *(int *)(iVar1 + 0x60))) {
    do {
      (*(code *)**(undefined4 **)(in_ECX + 0x18))
                (*(undefined4 *)(*(int *)(iVar1 + 0x5c) + iVar2 * 4));
      iVar1 = *(int *)(in_ECX + 0x1c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 0x60));
  }
  return;
}



void FUN_0091dfa0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  *in_ECX = &PTR_FUN_00a9d81c;
  in_ECX[2] = &PTR_LAB_00a9d804;
  in_ECX[8] = &PTR_LAB_00a9d7fc;
  in_ECX[10] = &PTR_FUN_00a9d7e8;
  if ((in_ECX[9] != 0) && (iVar2 = 0, 0 < *(int *)(in_ECX[9] + 0x60))) {
    do {
      if (in_ECX == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = in_ECX + 10;
      }
      FUN_00898ad0(puVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX[9] + 0x60));
  }
  in_ECX[10] = &PTR_LAB_00a2fc50;
  FUN_00949180();
  return;
}



void FUN_0091e060(byte param_1)

{
  FUN_0091dfa0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0091e090(void)

{
  DAT_00ba8458 = FUN_00947c50("ContactPoints",&LAB_0091e010);
  return;
}



void FUN_0091e0b0(void)

{
  FUN_0094cef0();
  FUN_0094dae0();
  FUN_0094dae0();
  FUN_0094dae0();
  FUN_0094d790();
  return;
}



void FUN_0091e0f0(void)

{
  FUN_00933dd0();
  FUN_00933dd0();
  FUN_00933dd0();
  FUN_00933dd0();
  return;
}



void FUN_0091e120(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int unaff_FS_OFFSET;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_4c8 [1220];
  
  iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar1 = *(int *)(iVar7 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "Ttdraw";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  uVar5 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))();
  switch(uVar5) {
  case 0:
    FUN_0094cef0();
    FUN_0094f610(param_1,param_2,DAT_00ba845c);
    break;
  case 1:
    FUN_0094cef0();
    FUN_0094f4e0(param_1,param_2,DAT_00ba845c);
    break;
  case 2:
  case 4:
    FUN_0094cef0();
    FUN_0094d270();
    FUN_0094f1c0(param_1,param_2,DAT_00ba845c);
    FUN_00933dd0();
    break;
  case 3:
    FUN_0094cef0();
    FUN_0094e860(param_1,param_2,DAT_00ba845c);
    break;
  case 5:
  case 7:
    FUN_0091e0b0();
    FUN_0094e0a0(param_1,param_2,DAT_00ba845c);
    FUN_0091e0f0();
    break;
  case 6:
    FUN_0094cef0();
    FUN_0094eee0(param_1,param_2,DAT_00ba845c);
    break;
  case 8:
    FUN_0094cef0();
    FUN_0094ed70(param_1,param_2,DAT_00ba845c);
    break;
  case 9:
    FUN_0094cef0();
    FUN_0094ea10(param_1,param_2,DAT_00ba845c);
    break;
  case 0xc:
    FUN_008d99a0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                 *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc),1,1);
    FUN_0091e120(auStack_4c8,param_2);
    FUN_008d98e0();
    break;
  case 0xd:
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar9 = 1;
    uVar8 = 1;
    uVar6 = FUN_0088d370(1,1);
    FUN_008d99a0(uVar3,uVar5,uVar6,uVar8,uVar9);
    FUN_0091e120(auStack_4c8,param_2);
    FUN_008d98e0();
    iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
    break;
  case 0xe:
    FUN_0094cef0();
    FUN_0094e5c0(param_1,param_2,DAT_00ba845c);
  }
  iVar7 = *(int *)(iVar7 + _tls_index * 4);
  if (*(uint *)(iVar7 + 0x1a4) < *(uint *)(iVar7 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar7 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar7 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_0091e3f0(undefined4 param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  FUN_009491f0(param_1);
  in_ECX[10] = &PTR_LAB_00a9d2b4;
  *in_ECX = &PTR_FUN_00a9d86c;
  in_ECX[2] = &PTR_LAB_00a9d854;
  in_ECX[8] = &PTR_LAB_00a9d84c;
  in_ECX[10] = &PTR_LAB_00a9d840;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0x80000000;
  if ((in_ECX[9] != 0) && (0 < *(int *)(in_ECX[9] + 0x60))) {
    iVar1 = 0;
    do {
      FUN_00899d20(in_ECX + 10);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX[9] + 0x60));
  }
  return;
}



void FUN_0091e4a0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  puVar1 = in_ECX + 10;
  *in_ECX = &PTR_FUN_00a9d86c;
  in_ECX[2] = &PTR_LAB_00a9d854;
  in_ECX[8] = &PTR_LAB_00a9d84c;
  *puVar1 = &PTR_LAB_00a9d840;
  if ((in_ECX[9] != 0) && (iVar2 = 0, 0 < *(int *)(in_ECX[9] + 0x60))) {
    do {
      FUN_00898a80(puVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX[9] + 0x60));
  }
  if (-1 < (int)in_ECX[0xd]) {
    FUN_008a75d0(in_ECX[0xb],in_ECX[0xd] << 2,0x14);
  }
  *puVar1 = &PTR_LAB_00a9d2b4;
  FUN_00949180();
  return;
}



void FUN_0091e540(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int unaff_FS_OFFSET;
  int local_8;
  int local_4;
  
  iVar5 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar1 = *(int *)(iVar5 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TthkConstraintViewer";
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      piVar4 = (int *)(*(int *)(param_1 + 0x38) + local_4 * 4);
      local_8 = 0;
      if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x38) + local_4 * 4) + 0x38)) {
        do {
          iVar1 = *(int *)(*(int *)(*piVar4 + 0x34) + local_8 * 4);
          iVar5 = 0;
          if (0 < *(int *)(iVar1 + 0x6c)) {
            iVar6 = 0;
            do {
              FUN_0091e120(*(undefined4 *)(iVar6 + *(int *)(iVar1 + 0x68)),
                           *(undefined4 *)(in_ECX + -0x10));
              iVar5 = iVar5 + 1;
              iVar6 = iVar6 + 0x1c;
            } while (iVar5 < *(int *)(iVar1 + 0x6c));
          }
          piVar4 = (int *)(*(int *)(param_1 + 0x38) + local_4 * 4);
          local_8 = local_8 + 1;
        } while (local_8 < *(int *)(*(int *)(*(int *)(param_1 + 0x38) + local_4 * 4) + 0x38));
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0x3c));
    iVar5 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      piVar4 = (int *)(*(int *)(param_1 + 0x44) + local_8 * 4);
      local_4 = 0;
      if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x44) + local_8 * 4) + 0x38)) {
        do {
          iVar1 = *(int *)(*(int *)(*piVar4 + 0x34) + local_4 * 4);
          iVar5 = 0;
          if (0 < *(int *)(iVar1 + 0x6c)) {
            iVar6 = 0;
            do {
              FUN_0091e120(*(undefined4 *)(iVar6 + *(int *)(iVar1 + 0x68)),
                           *(undefined4 *)(in_ECX + -0x10));
              iVar5 = iVar5 + 1;
              iVar6 = iVar6 + 0x1c;
            } while (iVar5 < *(int *)(iVar1 + 0x6c));
          }
          piVar4 = (int *)(*(int *)(param_1 + 0x44) + local_8 * 4);
          local_4 = local_4 + 1;
        } while (local_4 < *(int *)(*(int *)(*(int *)(param_1 + 0x44) + local_8 * 4) + 0x38));
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x48));
    iVar5 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar1 = *(int *)(iVar5 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_0091e730(byte param_1)

{
  FUN_0091e4a0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0091e760(void)

{
  DAT_00ba845c = FUN_00947c50("Constraint",&LAB_0091e700);
  return;
}



void FUN_0091e7b0(undefined4 param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  FUN_009491f0(param_1);
  in_ECX[10] = &PTR_LAB_00a9d2b4;
  *in_ECX = &PTR_FUN_00a9d8b8;
  in_ECX[2] = &PTR_LAB_00a9d8a0;
  in_ECX[8] = &PTR_LAB_00a9d84c;
  in_ECX[10] = &PTR_LAB_00a9d894;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0x80000000;
  if ((in_ECX[9] != 0) && (0 < *(int *)(in_ECX[9] + 0x60))) {
    iVar1 = 0;
    do {
      FUN_00899d20(in_ECX + 10);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX[9] + 0x60));
  }
  return;
}



void FUN_0091e860(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  int iVar3;
  
  puVar1 = in_ECX + 10;
  *in_ECX = &PTR_FUN_00a9d8b8;
  in_ECX[2] = &PTR_LAB_00a9d8a0;
  in_ECX[8] = &PTR_LAB_00a9d84c;
  *puVar1 = &PTR_LAB_00a9d894;
  if ((in_ECX[9] != 0) && (iVar2 = 0, 0 < *(int *)(in_ECX[9] + 0x60))) {
    do {
      FUN_00898a80(puVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX[9] + 0x60));
  }
  iVar2 = in_ECX[0xc];
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      (*(code *)**(undefined4 **)(in_ECX[0xb] + iVar3))(0);
      iVar3 = iVar3 + 0x80;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (-1 < (int)in_ECX[0xd]) {
    FUN_008a75d0(in_ECX[0xb],in_ECX[0xd] << 7,0x14);
  }
  *puVar1 = &PTR_LAB_00a9d2b4;
  FUN_00949180();
  return;
}



void FUN_0091e950(byte param_1)

{
  FUN_0091e860();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0091e980(void)

{
  DAT_00ba8460 = FUN_00947c50("Broadphase",&LAB_0091e920);
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0091e9a0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int unaff_FS_OFFSET;
  int iStack_8054;
  undefined1 *puStack_804c;
  int iStack_8044;
  int local_8040;
  undefined1 *puStack_803c;
  undefined4 uStack_8038;
  int iStack_8034;
  undefined4 *puStack_8030;
  int iStack_8028;
  int iStack_8024;
  undefined1 *local_8020;
  undefined4 local_801c;
  undefined4 local_8018;
  undefined1 local_8010 [32764];
  undefined4 uStack_14;
  
  iVar6 = _tls_index;
  uStack_14 = 0x91e9b0;
  iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar4 = *(int *)(iVar9 + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar7 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar7 = "TthkBroadphaseViewer";
    uVar3 = rdtsc();
    puVar7[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar7 + 3;
  }
  local_8020 = local_8010;
  local_801c = 0;
  local_8018 = 0x80000400;
  (**(code **)(**(int **)(param_1 + 100) + 0x20))(&local_8020);
  puVar8 = local_8020;
  puVar5 = local_8020;
  if (*(int *)(iStack_8044 + 8) < (int)local_8020) {
    piVar1 = (int *)(iStack_8044 + 4);
    iVar4 = *(int *)(iStack_8044 + 8);
    puStack_804c = local_8020;
    if ((int)local_8020 < iVar4) {
      iVar9 = (int)local_8020 << 7;
      iVar4 = iVar4 - (int)local_8020;
      do {
        (*(code *)**(undefined4 **)(*piVar1 + iVar9))(0);
        iVar9 = iVar9 + 0x80;
        iVar4 = iVar4 + -1;
        puVar5 = local_8020;
      } while (iVar4 != 0);
    }
    else {
      uVar2 = *(uint *)(iStack_8044 + 0xc);
      if ((int)(uVar2 & 0x3fffffff) < (int)local_8020) {
        puVar5 = (undefined1 *)((uVar2 & 0x3fffffff) * 2);
        if ((int)puVar5 <= (int)local_8020) {
          puVar5 = local_8020;
        }
        puStack_8030 = (undefined4 *)*piVar1;
        *piVar1 = 0;
        *(undefined4 *)(iStack_8044 + 8) = 0;
        *(undefined4 *)(iStack_8044 + 0xc) = 0x80000000;
        if (0 < (int)puVar5) {
          FUN_008a6e40(piVar1,((int)puVar5 < 0) - 1 & (uint)puVar5,0x80);
        }
        iVar9 = *piVar1;
        puVar5 = local_8020;
        if (0 < iVar4) {
          iVar6 = (int)puStack_8030 - iVar9;
          iStack_8054 = iVar4;
          iStack_8034 = iVar6;
          do {
            if (iVar9 != 0) {
              FUN_009193a0(iVar6 + iVar9);
              iVar6 = iStack_8034;
              puVar5 = local_8020;
            }
            iVar9 = iVar9 + 0x80;
            iStack_8054 = iStack_8054 + -1;
          } while (iStack_8054 != 0);
        }
        *(int *)(iStack_8044 + 8) = iVar4;
        puVar7 = puStack_8030;
        iStack_8054 = iVar4;
        if (0 < iVar4) {
          do {
            (**(code **)*puVar7)(0);
            iStack_8054 = iStack_8054 + -1;
            puVar5 = local_8020;
            puVar7 = puVar7 + 0x20;
          } while (iStack_8054 != 0);
        }
        if (-1 < (int)uVar2) {
          FUN_008a75d0(puStack_8030,uVar2 << 7,0x14);
          puVar5 = local_8020;
        }
      }
      if (iVar4 < (int)puVar8) {
        iVar9 = iVar4 * 0x80 + *piVar1;
        iStack_8054 = (int)puVar8 - iVar4;
        do {
          if (iVar9 != 0) {
            FUN_00949300();
            puVar5 = local_8020;
          }
          iVar9 = iVar9 + 0x80;
          iStack_8054 = iStack_8054 + -1;
        } while (iStack_8054 != 0);
      }
    }
    iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
    *(undefined1 **)(iStack_8044 + 8) = puVar8;
    iVar6 = _tls_index;
  }
  local_8040 = 0;
  puStack_803c = (undefined1 *)0x0;
  uStack_8038 = 0x80000000;
  puVar8 = puVar5;
  if (0 < (int)puVar5) {
    FUN_008a6e40(&local_8040,((int)puVar5 < 0) - 1 & (uint)puVar5,4);
    puVar8 = local_8020;
  }
  puVar8 = puVar8 + -1;
  puStack_803c = puVar5;
  if (-1 < (int)puVar8) {
    iVar9 = (int)puVar8 * 0x80;
    iVar4 = (int)puVar8 * 0x20;
    do {
      FUN_009492e0(iVar4 + iStack_8024,iVar4 + iStack_8024 + 0x10);
      *(int *)(local_8040 + (int)puVar8 * 4) = *(int *)(iStack_8044 + 4) + iVar9;
      puVar8 = puVar8 + -1;
      iVar4 = iVar4 + -0x20;
      iVar9 = iVar9 + -0x80;
    } while (-1 < (int)puVar8);
    iVar9 = *(int *)(unaff_FS_OFFSET + 0x2c);
    iVar6 = _tls_index;
  }
  (**(code **)(**(int **)(iStack_8044 + -0x10) + 0x24))(&local_8040,0xffff0000,DAT_00ba8460);
  iVar4 = *(int *)(iVar9 + iVar6 * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar7 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar7 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar7[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar7 + 3;
  }
  if (-1 < iStack_8044) {
    FUN_008a75d0(puStack_804c,iStack_8044 << 2,0x14);
  }
  if (-1 < iStack_8028) {
    FUN_008a75d0(puStack_8030,iStack_8028 << 5,0x14);
  }
  return;
}



void FUN_0091ed30(undefined4 *param_1)

{
  void *_Src;
  ushort uVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined1 local_10 [8];
  int iStack_8;
  
  piVar5 = (int *)param_1[9];
  *(undefined1 *)(param_1[2] + 0x26) = 1;
  (**(code **)(*(int *)piVar5[3] + 0x20))(local_10);
  (**(code **)(*(int *)param_1[2] + 0x10))(param_1,&stack0xffffffec);
  param_1[2] = 0;
  uVar1 = *(ushort *)((int)piVar5 + 0x12);
  iVar2 = piVar5[2 - (uint)*(byte *)((int)piVar5 + 0x11)];
  iVar3 = *(int *)(*(int *)(iVar2 + 0x74) + -4 + *(int *)(iVar2 + 0x78) * 4);
  *(int *)(*(int *)(iVar2 + 0x74) + (uint)uVar1 * 4) = iVar3;
  *(int *)(iVar2 + 0x78) = *(int *)(iVar2 + 0x78) + -1;
  *(ushort *)(*(int *)(iVar3 + 0x24) + 0x12) = uVar1;
  iVar2 = piVar5[*(byte *)((int)piVar5 + 0x11) + 1];
  _Dst = (void *)piVar5[6];
  iStack_8 = 0;
  if (_Dst != (void *)0x0) {
    iStack_8 = -(uint)*(ushort *)(piVar5 + 5);
    _Src = (void *)((uint)*(ushort *)(piVar5 + 5) + (int)_Dst);
    _memmove(_Dst,_Src,(*(int *)(iVar2 + 0x84) - (int)_Src) + *(int *)(iVar2 + 0x80));
    *(uint *)(iVar2 + 0x84) = *(int *)(iVar2 + 0x84) - (uint)*(ushort *)(piVar5 + 5);
    piVar5[6] = 0;
  }
  param_1[9] = 0;
  iVar3 = *(int *)(iVar2 + 0x6c);
  iVar4 = *(int *)(iVar2 + 0x68);
  for (; piVar5 < (int *)(iVar3 * 0x1c + -0x1c + iVar4); piVar5 = piVar5 + 7) {
    piVar7 = piVar5 + 7;
    piVar8 = piVar5;
    for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    *(int **)(*piVar5 + 0x24) = piVar5;
    if (piVar5[6] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = piVar5[6] + iStack_8;
    }
    piVar5[6] = iVar6;
  }
  *(int *)(iVar2 + 0x6c) = *(int *)(iVar2 + 0x6c) + -1;
  if ((*(short *)(param_1 + 1) != 0) &&
     (*(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + -1,
     *(short *)((int)param_1 + 6) == 0)) {
    (**(code **)*param_1)(1);
  }
  return;
}



void FUN_0091ee60(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar7 = param_2[1];
  iVar1 = in_ECX[1] + iVar7;
  iVar2 = in_ECX[1] - param_1;
  if ((int)(in_ECX[2] & 0x3fffffffU) < iVar1) {
    FUN_008a6e40();
  }
  iVar6 = *in_ECX;
  iVar3 = (iVar7 + param_1) * 0x1c + iVar6;
  if (-1 < iVar2 + -1) {
    puVar4 = (undefined4 *)((iVar2 + -1) * 0x1c + iVar3);
    do {
      iVar2 = iVar2 + -1;
      puVar8 = (undefined4 *)(((iVar6 + param_1 * 0x1c) - iVar3) + (int)puVar4);
      puVar9 = puVar4;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar4 = puVar4 + -7;
    } while (iVar2 != 0);
  }
  iVar2 = *param_2;
  iVar6 = *in_ECX + param_1 * 0x1c;
  if (-1 < iVar7 + -1) {
    puVar4 = (undefined4 *)((iVar7 + -1) * 0x1c + iVar6);
    do {
      iVar7 = iVar7 + -1;
      puVar8 = (undefined4 *)((iVar2 - iVar6) + (int)puVar4);
      puVar9 = puVar4;
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar4 = puVar4 + -7;
    } while (iVar7 != 0);
    in_ECX[1] = iVar1;
    return;
  }
  in_ECX[1] = iVar1;
  return;
}



void FUN_0091ef50(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBX;
  int *piVar8;
  int unaff_EBP;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  void *_Src;
  int unaff_EDI;
  int *piVar13;
  bool bVar14;
  undefined1 *puStack_38;
  int local_34;
  undefined4 uStack_30;
  undefined1 local_2c [4];
  undefined1 auStack_28 [12];
  int local_1c;
  int local_18 [2];
  int *local_10;
  undefined4 local_c;
  
  if (*(short *)(param_2 + 4) != 0) {
    *(short *)(param_2 + 6) = *(short *)(param_2 + 6) + 1;
  }
  local_18[0] = *(int *)(param_2 + 0x10);
  local_18[1] = *(int *)(param_2 + 0x14);
  local_10 = *(int **)(param_2 + 0xc);
  local_1c = param_2;
  local_c = CONCAT31(local_c._1_3_,*(undefined1 *)(param_2 + 0x18));
  if (((*(char *)(local_18[0] + 0x91) == '\0') && (*(char *)(local_18[1] + 0x91) == '\0')) &&
     (*(int *)(local_18[0] + 0x54) != *(int *)(local_18[1] + 0x54))) {
    FUN_008cd320(*(undefined4 *)(local_18[0] + 8),local_18[0],local_18[1]);
  }
  if ((int)*(char *)(local_18[0] + 0x91) == (uint)(*(char *)(local_18[1] + 0x91) != '\0')) {
    iVar2 = *(int *)(local_18[0] + 0x6c);
    iVar12 = *(int *)(local_18[1] + 0x6c);
    if (iVar12 + iVar2 < 8) {
      bVar14 = iVar12 <= iVar2;
    }
    else {
      bVar14 = iVar2 <= iVar12;
    }
  }
  else {
    bVar14 = *(char *)(local_18[0] + 0x91) != '\0';
  }
  local_c._0_2_ = CONCAT11(bVar14,(undefined1)local_c);
  iVar2 = local_18[bVar14];
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar2 + 0x54);
  local_34 = iVar2;
  (**(code **)(*local_10 + 0x20))(local_2c);
  (**(code **)(**(int **)(param_2 + 8) + 0xc))(param_2,&uStack_30);
  iVar12 = *(int *)(iVar2 + 0x6c);
  piVar13 = (int *)(iVar2 + 0x68);
  uVar9 = 0;
  if (0 < iVar12) {
    pbVar11 = (byte *)(*piVar13 + 0x10);
    do {
      if ((byte)local_18[0] < *pbVar11) break;
      uVar9 = uVar9 + 1;
      pbVar11 = pbVar11 + 0x1c;
    } while ((int)uVar9 < iVar12);
  }
  puStack_38 = auStack_28;
  uVar7 = ((int)(*(uint *)(iVar2 + 0x70) & 0x3fffffff) <= iVar12) - 1 & uVar9;
  local_34 = 1;
  uStack_30 = 0x80000001;
  FUN_0091ee60(uVar9,&puStack_38);
  if ((int)uVar7 < *(int *)(iVar2 + 0x6c)) {
    iVar12 = uVar7 * 0x1c;
    do {
      *(int *)(*(int *)(*piVar13 + iVar12) + 0x24) = *piVar13 + iVar12;
      uVar7 = uVar7 + 1;
      iVar12 = iVar12 + 0x1c;
    } while ((int)uVar7 < *(int *)(iVar2 + 0x6c));
  }
  iVar12 = *(int *)(param_2 + 0x24);
  (**(code **)(**(int **)(iVar12 + 0xc) + 0x10))(*(undefined1 *)(param_2 + 0x19),&puStack_38);
  *(short *)(iVar12 + 0x14) = (short)unaff_EBX;
  if (unaff_EBX == 0) {
    *(undefined4 *)(iVar12 + 0x18) = 0;
    unaff_EDI = iVar12;
  }
  else {
    iVar3 = *(int *)(unaff_EBP + 0x80);
    iVar5 = *(int *)(unaff_EBP + 0x84);
    piVar8 = (int *)(unaff_EBP + 0x80);
    iVar12 = iVar5 + unaff_EBX;
    if ((int)(*(uint *)(unaff_EBP + 0x88) & 0x3fffffff) < iVar12) {
      FUN_008a6e40(piVar8,iVar12,1);
    }
    *(int *)(unaff_EBP + 0x84) = iVar5 + unaff_EBX;
    pvVar4 = (void *)*piVar8;
    _Src = pvVar4;
    uVar7 = 0;
    if (0 < (int)uVar9) {
      iVar12 = 0;
      uVar10 = uVar9;
      do {
        iVar5 = *piVar13 + iVar12;
        if (*(int *)(iVar5 + 0x18) != 0) {
          iVar6 = (int)pvVar4 + (*(int *)(iVar5 + 0x18) - iVar3);
          *(int *)(iVar5 + 0x18) = iVar6;
          _Src = (void *)((uint)*(ushort *)(iVar5 + 0x14) + iVar6);
        }
        iVar12 = iVar12 + 0x1c;
        uVar10 = uVar10 - 1;
        uVar7 = uVar9;
      } while (uVar10 != 0);
    }
    _memmove((void *)((uint)*(ushort *)(unaff_EDI + 0x14) + (int)_Src),_Src,
             ((*(int *)(unaff_EBP + 0x84) - (uint)*(ushort *)(unaff_EDI + 0x14)) - (int)_Src) +
             *piVar8);
    uVar1 = *(ushort *)(unaff_EDI + 0x14);
    *(void **)(unaff_EDI + 0x18) = _Src;
    iVar12 = uVar7 + 1;
    param_2 = local_c;
    if (iVar12 < *(int *)(iVar2 + 0x6c)) {
      iVar5 = iVar12 * 0x1c;
      do {
        iVar6 = *(int *)(*piVar13 + 0x18 + iVar5);
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)pvVar4 + iVar6 + ((uint)uVar1 - iVar3);
        }
        *(int *)(*piVar13 + iVar5 + 0x18) = iVar6;
        iVar12 = iVar12 + 1;
        iVar5 = iVar5 + 0x1c;
      } while (iVar12 < *(int *)(iVar2 + 0x6c));
    }
  }
  (**(code **)(**(int **)(unaff_EDI + 0xc) + 0x18))
            (param_2,*(undefined4 *)(unaff_EDI + 0x18),*(undefined2 *)(unaff_EDI + 0x14));
  iVar2 = *(int *)(unaff_EDI + (2 - (uint)*(byte *)(unaff_EDI + 0x11)) * 4);
  *(undefined2 *)(unaff_EDI + 0x12) = *(undefined2 *)(iVar2 + 0x78);
  if (*(uint *)(iVar2 + 0x78) == (*(uint *)(iVar2 + 0x7c) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(iVar2 + 0x74),4);
  }
  *(int *)(*(int *)(iVar2 + 0x74) + *(int *)(iVar2 + 0x78) * 4) = param_2;
  *(int *)(iVar2 + 0x78) = *(int *)(iVar2 + 0x78) + 1;
  return;
}



void FUN_0091f220(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  iVar3 = param_2;
  if (param_2 < param_1) {
    param_2 = param_1;
    param_1 = iVar3;
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = *(int *)(*piVar1 + param_1 * 4);
  iVar3 = iVar2;
  if (-1 < iVar2) {
    do {
      iVar4 = iVar3;
      iVar3 = *(int *)(*piVar1 + iVar4 * 4);
    } while (-1 < iVar3);
    while (-1 < iVar2) {
      piVar1 = (int *)(*piVar1 + param_1 * 4);
      param_1 = *piVar1;
      *piVar1 = iVar4;
      piVar1 = (int *)*in_ECX;
      iVar2 = *(int *)(*piVar1 + param_1 * 4);
    }
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = *(int *)(*piVar1 + param_2 * 4);
  iVar3 = iVar2;
  if (-1 < iVar2) {
    do {
      iVar4 = iVar3;
      iVar3 = *(int *)(*piVar1 + iVar4 * 4);
    } while (-1 < iVar3);
    while (-1 < iVar2) {
      piVar1 = (int *)(*piVar1 + param_2 * 4);
      param_2 = *piVar1;
      *piVar1 = iVar4;
      piVar1 = (int *)*in_ECX;
      iVar2 = *(int *)(*piVar1 + param_2 * 4);
    }
  }
  if (param_1 != param_2) {
    iVar3 = *(int *)*in_ECX;
    if (param_1 < param_2) {
      *(int *)(iVar3 + param_1 * 4) = *(int *)(iVar3 + param_1 * 4) + *(int *)(iVar3 + param_2 * 4);
      *(int *)(*(int *)*in_ECX + param_2 * 4) = param_1;
      return;
    }
    *(int *)(iVar3 + param_2 * 4) = *(int *)(iVar3 + param_2 * 4) + *(int *)(iVar3 + param_1 * 4);
    *(int *)(*(int *)*in_ECX + param_1 * 4) = param_2;
  }
  return;
}



void FUN_0091f300(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int *piVar4;
  
  piVar3 = *(int **)*in_ECX;
  piVar1 = piVar3 + ((int *)*in_ECX)[1];
  piVar4 = piVar3;
  for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    if (-1 < *piVar3) {
      iVar2 = piVar4[*piVar3];
      while (-1 < iVar2) {
        *piVar3 = piVar4[*piVar3];
        piVar4 = *(int **)*in_ECX;
        iVar2 = piVar4[*piVar3];
      }
    }
  }
  return;
}



void FUN_0091f340(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  
  *in_ECX = param_1;
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_008a6e40(param_1,iVar2,4);
  }
  iVar2 = 0;
  *(int *)(param_1 + 4) = param_2;
  if (0 < param_2) {
    do {
      *(undefined4 *)(*(int *)*in_ECX + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}



void FUN_0091f3a0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  int iVar3;
  int local_4;
  
  FUN_0091f300();
  piVar2 = (int *)*in_ECX;
  iVar3 = 0;
  local_4 = 0;
  if (0 < piVar2[1]) {
    do {
      iVar1 = *(int *)(*piVar2 + iVar3 * 4);
      if (iVar1 < 0) {
        if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_1,4);
        }
        *(int *)(*param_1 + param_1[1] * 4) = -iVar1;
        param_1[1] = param_1[1] + 1;
        *(int *)(*(int *)*in_ECX + iVar3 * 4) = local_4;
        local_4 = local_4 + 1;
      }
      else {
        *(undefined4 *)(*piVar2 + iVar3 * 4) = *(undefined4 *)(*piVar2 + iVar1 * 4);
      }
      piVar2 = (int *)*in_ECX;
      iVar3 = iVar3 + 1;
    } while (iVar3 < piVar2[1]);
  }
  return;
}



void FUN_0091f430(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
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
  
  fVar9 = param_1[5] * param_1[10] - param_1[6] * param_1[9];
  fVar12 = param_1[6] * param_1[8] - param_1[4] * param_1[10];
  fVar13 = param_1[4] * param_1[9] - param_1[5] * param_1[8];
  fVar3 = fVar12 * fVar12;
  fVar4 = fVar13 * fVar13;
  if (1.1920929e-07 <= fVar4 + fVar3 + fVar9 * fVar9) {
    auVar5._4_4_ = fVar3;
    auVar5._0_4_ = fVar3;
    auVar5._8_4_ = fVar3;
    auVar5._12_4_ = fVar3;
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = fVar3 + fVar9 * fVar9;
    auVar7._4_4_ = fVar4;
    auVar7._0_4_ = fVar4 + auVar6._0_4_;
    auVar7._8_4_ = fVar4;
    auVar7._12_4_ = fVar4;
    auVar7 = rsqrtss(auVar6,auVar7);
    fVar3 = auVar7._0_4_;
    local_60 = 3.0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    local_50 = 0.5;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    fVar3 = fVar3 * 0.5 * (3.0 - (fVar4 + auVar6._0_4_) * fVar3 * fVar3);
    fVar4 = fVar3 * (param_1[7] * param_1[0xb] - param_1[7] * param_1[0xb]);
    local_40 = fVar3 * fVar12 * param_1[0xe] - fVar3 * fVar13 * param_1[0xd];
    fStack_3c = fVar3 * fVar13 * param_1[0xc] - fVar3 * fVar9 * param_1[0xe];
    fStack_38 = fVar3 * fVar9 * param_1[0xd] - fVar3 * fVar12 * param_1[0xc];
    fStack_34 = fVar4 * param_1[0xf] - fVar4 * param_1[0xf];
    local_20 = param_1[0xc];
    fStack_1c = param_1[0xd];
    fStack_18 = param_1[0xe];
    fStack_14 = param_1[0xf];
    local_30 = fStack_3c * param_1[0xe] - fStack_38 * param_1[0xd];
    fStack_2c = fStack_38 * param_1[0xc] - local_40 * param_1[0xe];
    fStack_28 = local_40 * param_1[0xd] - fStack_3c * param_1[0xc];
    fStack_24 = fStack_34 * param_1[0xf] - fStack_34 * param_1[0xf];
    local_80 = param_1[0x10] - param_1[0x1c];
    fStack_7c = param_1[0x11] - param_1[0x1d];
    fStack_78 = param_1[0x12] - param_1[0x1e];
    fStack_74 = param_1[0x13] - param_1[0x1f];
    FUN_0088fd90(&local_40,&local_80);
    fVar9 = param_1[0x14] - local_80;
    fVar12 = param_1[0x15] - fStack_7c;
    fVar13 = param_1[0x16] - fStack_78;
    fVar8 = param_1[0x17] - fStack_74;
    fVar3 = fVar12 * fVar12;
    fVar4 = fVar13 * fVar13;
    if (param_1[0x18] * param_1[0x18] < (fVar4 + fVar3 + fVar9 * fVar9) * *param_1) {
      fVar2 = param_1[0x18] / *param_1;
      auVar10._4_4_ = fVar3;
      auVar10._0_4_ = fVar3;
      auVar10._8_4_ = fVar3;
      auVar10._12_4_ = fVar3;
      auVar11._4_12_ = auVar10._4_12_;
      auVar11._0_4_ = fVar3 + fVar9 * fVar9;
      auVar1._4_4_ = fVar4;
      auVar1._0_4_ = fVar4 + auVar11._0_4_;
      auVar1._8_4_ = fVar4;
      auVar1._12_4_ = fVar4;
      auVar7 = rsqrtss(auVar11,auVar1);
      local_70 = auVar7._0_4_;
      fVar3 = local_50 * local_70 * (local_60 - (fVar4 + auVar11._0_4_) * local_70 * local_70);
      fVar9 = fVar2 * fVar3 * fVar9;
      fVar12 = fVar2 * fVar3 * fVar12;
      fVar13 = fVar2 * fVar3 * fVar13;
      fVar8 = fVar2 * fVar3 * fVar8;
      fStack_6c = fVar4;
      fStack_68 = fVar4;
      fStack_64 = fVar4;
    }
    fVar3 = *param_1;
    local_80 = local_80 + fVar3 * fVar9;
    fStack_7c = fStack_7c + fVar3 * fVar12;
    fStack_78 = fStack_78 + fVar3 * fVar13;
    fStack_74 = fStack_74 + fVar3 * fVar8;
    FUN_0088fe00(&local_40,&local_80);
    fVar3 = param_1[0x1d];
    fVar4 = param_1[0x1e];
    fVar9 = param_1[0x1f];
    *param_2 = *param_2 + param_1[0x1c];
    param_2[1] = param_2[1] + fVar3;
    param_2[2] = param_2[2] + fVar4;
    param_2[3] = param_2[3] + fVar9;
  }
  return;
}



void FUN_0091f6f0(byte param_1)

{
  FUN_0091f720();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0091f720(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[6]) {
    FUN_008a75d0(in_ECX[4],in_ECX[6] << 5,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_0091f770(float *param_1,float param_2,undefined4 param_3,int *param_4,int *param_5,
                 float *param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  int iStack_2e8;
  int iStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  int iStack_2d8;
  int iStack_2d4;
  int iStack_2d0;
  int iStack_2cc;
  int iStack_2c8;
  int iStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float afStack_298 [4];
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float afStack_278 [4];
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined1 auStack_228 [4];
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  undefined1 auStack_214 [48];
  int iStack_1e4;
  undefined1 auStack_1d8 [8];
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined1 local_1c0 [48];
  int local_190;
  undefined1 auStack_188 [388];
  
  local_190 = param_4[0x30];
  fVar5 = (param_2 - (float)param_4[0x17]) * (float)param_4[0x1b];
  local_1d0 = *param_1 - ((1.0 - fVar5) * (float)param_4[0x14] + fVar5 * (float)param_4[0x18]);
  fStack_1cc = param_1[1] - ((1.0 - fVar5) * (float)param_4[0x15] + fVar5 * (float)param_4[0x19]);
  fStack_1c8 = param_1[2] - ((1.0 - fVar5) * (float)param_4[0x16] + fVar5 * (float)param_4[0x1a]);
  fStack_1c4 = param_1[3] - ((1.0 - fVar5) * (float)param_4[0x17] + fVar5 * (float)param_4[0x1b]);
  (**(code **)(*param_4 + 0x3c))(local_1c0);
  iStack_1e4 = param_5[0x30];
  fVar5 = (param_2 - (float)param_5[0x17]) * (float)param_5[0x1b];
  fStack_224 = *param_1 - ((1.0 - fVar5) * (float)param_5[0x14] + fVar5 * (float)param_5[0x18]);
  fStack_220 = param_1[1] - ((1.0 - fVar5) * (float)param_5[0x15] + fVar5 * (float)param_5[0x19]);
  fStack_21c = param_1[2] - ((1.0 - fVar5) * (float)param_5[0x16] + fVar5 * (float)param_5[0x1a]);
  fStack_218 = param_1[3] - ((1.0 - fVar5) * (float)param_5[0x17] + fVar5 * (float)param_5[0x1b]);
  (**(code **)(*param_5 + 0x3c))(auStack_214);
  iStack_2c8 = param_4[0x34];
  iStack_2c4 = param_4[0x35];
  iStack_2c0 = param_4[0x36];
  iStack_2bc = param_4[0x37];
  fStack_22c = (float)param_4[0x1b];
  fStack_24c = (float)param_5[0x1b];
  iStack_2b8 = param_4[0x38];
  iStack_2b4 = param_4[0x39];
  iStack_2b0 = param_4[0x3a];
  iStack_2ac = param_4[0x3b];
  iStack_2e8 = param_5[0x34];
  iStack_2e4 = param_5[0x35];
  iStack_2e0 = param_5[0x36];
  iStack_2dc = param_5[0x37];
  iStack_2d8 = param_5[0x38];
  iStack_2d4 = param_5[0x39];
  iStack_2d0 = param_5[0x3a];
  iStack_2cc = param_5[0x3b];
  fStack_248 = fStack_22c * ((float)param_4[0x18] - (float)param_4[0x14]);
  fStack_244 = fStack_22c * ((float)param_4[0x19] - (float)param_4[0x15]);
  fStack_240 = fStack_22c * ((float)param_4[0x1a] - (float)param_4[0x16]);
  fStack_23c = fStack_22c * ((float)param_4[0x1b] - (float)param_4[0x17]);
  fStack_238 = fStack_22c * (float)param_4[0x28];
  fStack_234 = fStack_22c * (float)param_4[0x29];
  fStack_230 = fStack_22c * (float)param_4[0x2a];
  fStack_22c = fStack_22c * (float)param_4[0x2b];
  bVar1 = ABS(param_1[4]) <= ABS(param_1[5]);
  fStack_268 = fStack_24c * ((float)param_5[0x18] - (float)param_5[0x14]);
  fStack_264 = fStack_24c * ((float)param_5[0x19] - (float)param_5[0x15]);
  fStack_260 = fStack_24c * ((float)param_5[0x1a] - (float)param_5[0x16]);
  fStack_25c = fStack_24c * ((float)param_5[0x1b] - (float)param_5[0x17]);
  fStack_2a8 = param_1[4];
  fStack_2a4 = param_1[5];
  fStack_2a0 = param_1[6];
  fStack_29c = param_1[7];
  fStack_258 = fStack_24c * (float)param_5[0x28];
  fStack_254 = fStack_24c * (float)param_5[0x29];
  fStack_250 = fStack_24c * (float)param_5[0x2a];
  fStack_24c = fStack_24c * (float)param_5[0x2b];
  fVar5 = ABS(param_1[4]);
  if (!bVar1) {
    fVar5 = ABS(param_1[5]);
  }
  uVar3 = (uint)!bVar1;
  if (fVar5 <= ABS(param_1[6])) {
    uVar2 = 2;
  }
  else {
    uVar2 = uVar3;
    uVar3 = 2;
  }
  afStack_298[uVar3] = 0.0;
  afStack_298[bVar1] = param_1[uVar2 + 4];
  afStack_298[uVar2] = -param_1[bVar1 + 4];
  fVar5 = afStack_298[1] * afStack_298[1];
  fStack_2f4 = afStack_298[2] * afStack_298[2];
  auVar6._4_4_ = fVar5;
  auVar6._0_4_ = fVar5;
  auVar6._8_4_ = fVar5;
  auVar6._12_4_ = fVar5;
  auVar7._4_12_ = auVar6._4_12_;
  auVar7._0_4_ = fVar5 + afStack_298[0] * afStack_298[0];
  auVar8._4_4_ = fStack_2f4;
  auVar8._0_4_ = fStack_2f4 + auVar7._0_4_;
  auVar8._8_4_ = fStack_2f4;
  auVar8._12_4_ = fStack_2f4;
  auVar8 = rsqrtss(auVar7,auVar8);
  fStack_2f8 = auVar8._0_4_;
  afStack_298[3] = fStack_2f8 * 0.5 * (3.0 - (fStack_2f4 + auVar7._0_4_) * fStack_2f8 * fStack_2f8);
  afStack_298[0] = afStack_298[3] * afStack_298[0];
  afStack_298[1] = afStack_298[3] * afStack_298[1];
  afStack_298[2] = afStack_298[3] * afStack_298[2];
  afStack_298[3] = afStack_298[3] * 0.0;
  fStack_288 = param_1[5] * afStack_298[2] - param_1[6] * afStack_298[1];
  fStack_284 = param_1[6] * afStack_298[0] - param_1[4] * afStack_298[2];
  fStack_280 = param_1[4] * afStack_298[1] - param_1[5] * afStack_298[0];
  fStack_27c = param_1[7] * afStack_298[3] - param_1[7] * afStack_298[3];
  fStack_2f0 = fStack_2f4;
  fStack_2ec = fStack_2f4;
  FUN_0094f6b0(auStack_1d8,auStack_228,&fStack_2a8,auStack_188);
  fVar4 = (float10)FUN_0094fc90(auStack_188,param_3,&iStack_2c8,&iStack_2e8);
  *param_6 = (float)fVar4;
  FUN_0094fb80(auStack_188,&fStack_248,&iStack_2e8,&fStack_2f8);
  FUN_0094fb80(auStack_188,&iStack_2c8,&fStack_268,afStack_278);
  param_6[1] = fStack_2f8;
  param_6[2] = afStack_278[0];
  (**(code **)(*param_4 + 0x54))(&iStack_2c8);
  (**(code **)(*param_4 + 0x58))(&iStack_2bc);
  (**(code **)(*param_5 + 0x54))(&fStack_2f0);
  (**(code **)(*param_5 + 0x58))(&iStack_2e4);
  return;
}



void FUN_0091fb20(float *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 float *param_7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  float10 fVar15;
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
  float fVar27;
  int local_2d4;
  float local_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float local_2c0 [4];
  float local_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float local_290 [11];
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
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
  undefined1 local_220 [48];
  undefined4 local_1f0 [8];
  undefined1 local_1d0 [80];
  undefined1 local_180 [380];
  
  pfVar11 = local_290 + 4;
  puVar13 = local_1f0;
  local_2d4 = 2;
  iVar12 = param_5;
  do {
    fVar16 = *(float *)(iVar12 + 0x40);
    fVar18 = *(float *)(iVar12 + 0x44);
    fVar20 = *(float *)(iVar12 + 0x48);
    fVar25 = *(float *)(iVar12 + 0x4c);
    fVar17 = *param_1;
    fVar19 = param_1[1];
    fVar21 = param_1[2];
    fVar26 = param_1[3];
    puVar13[4] = *(undefined4 *)(iVar12 + 0x3c);
    cVar1 = *(char *)(iVar12 + 0xc);
    fVar27 = *(float *)(iVar12 + 0x10);
    fVar5 = *(float *)(iVar12 + 0x14);
    fVar6 = *(float *)(iVar12 + 0x18);
    fVar7 = *(float *)(iVar12 + 0x1c);
    puVar13[-0xc] = fVar17 - fVar16;
    puVar13[-0xb] = fVar19 - fVar18;
    puVar13[-10] = fVar21 - fVar20;
    puVar13[-9] = fVar26 - fVar25;
    pfVar11[-4] = fVar27;
    pfVar11[-3] = fVar5;
    pfVar11[-2] = fVar6;
    pfVar11[-1] = fVar7;
    if (cVar1 == '\0') {
      fVar16 = *(float *)(iVar12 + 0x70);
      fVar18 = *(float *)(iVar12 + 0x74);
      fVar20 = *(float *)(iVar12 + 0x78);
      fVar25 = *(float *)(iVar12 + 0x20);
      fVar17 = *(float *)(iVar12 + 0x24);
      fVar19 = *(float *)(iVar12 + 0x28);
      fVar21 = *(float *)(iVar12 + 0x50);
      fVar26 = *(float *)(iVar12 + 0x54);
      fVar27 = *(float *)(iVar12 + 0x58);
      fVar5 = *(float *)(iVar12 + 0x5c);
      fVar6 = *(float *)(iVar12 + 0x60);
      fVar7 = *(float *)(iVar12 + 100);
      fVar8 = *(float *)(iVar12 + 0x68);
      fVar9 = *(float *)(iVar12 + 0x6c);
      *pfVar11 = fVar21 * fVar25 + fVar26 * fVar17 + fVar27 * fVar19;
      pfVar11[1] = fVar6 * fVar25 + fVar7 * fVar17 + fVar8 * fVar19;
      pfVar11[2] = fVar16 * fVar25 + fVar18 * fVar17 + fVar20 * fVar19;
      pfVar11[3] = fVar16 * fVar25 + fVar18 * fVar17 + fVar20 * fVar19;
      fStack_244 = *(float *)(iVar12 + 0x30);
      fStack_234 = *(float *)(iVar12 + 0x34);
      fStack_224 = *(float *)(iVar12 + 0x38);
      local_250 = fStack_244 * fVar21;
      fStack_24c = fStack_244 * fVar26;
      fStack_248 = fStack_244 * fVar27;
      fStack_244 = fStack_244 * fVar5;
      local_240 = fStack_234 * fVar6;
      fStack_23c = fStack_234 * fVar7;
      fStack_238 = fStack_234 * fVar8;
      fStack_234 = fStack_234 * fVar9;
      local_230 = fStack_224 * *(float *)(iVar12 + 0x70);
      fStack_22c = fStack_224 * *(float *)(iVar12 + 0x74);
      fStack_228 = fStack_224 * *(float *)(iVar12 + 0x78);
      fStack_224 = fStack_224 * *(float *)(iVar12 + 0x7c);
      FUN_008d2b10(&local_250,iVar12 + 0x50);
      FUN_008d2830();
    }
    else {
      fVar16 = *(float *)(iVar12 + 0x24);
      fVar18 = *(float *)(iVar12 + 0x28);
      fVar20 = *(float *)(iVar12 + 0x2c);
      uVar2 = *(undefined4 *)(iVar12 + 0x30);
      uVar3 = *(undefined4 *)(iVar12 + 0x34);
      *pfVar11 = *(float *)(iVar12 + 0x20);
      pfVar11[1] = fVar16;
      pfVar11[2] = fVar18;
      pfVar11[3] = fVar20;
      puVar13[-8] = 0;
      puVar13[-7] = 0;
      puVar13[-6] = 0;
      puVar13[-5] = 0;
      puVar13[-4] = 0;
      puVar13[-3] = 0;
      puVar13[-2] = 0;
      puVar13[-1] = 0;
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13[-8] = uVar2;
      uVar2 = *(undefined4 *)(iVar12 + 0x38);
      puVar13[-3] = uVar3;
      puVar13[2] = uVar2;
    }
    puVar13 = puVar13 + 0x14;
    pfVar11 = pfVar11 + 8;
    local_2d4 = local_2d4 + -1;
    iVar12 = param_6;
  } while (local_2d4 != 0);
  local_2d0 = param_1[4];
  fStack_2cc = param_1[5];
  fStack_2c8 = param_1[6];
  fStack_2c4 = param_1[7];
  bVar4 = ABS(param_1[4]) <= ABS(param_1[5]);
  fVar16 = ABS(param_1[4]);
  if (!bVar4) {
    fVar16 = ABS(param_1[5]);
  }
  uVar10 = (uint)!bVar4;
  uVar14 = 2;
  if (ABS(param_1[6]) < fVar16) {
    uVar10 = 2;
    uVar14 = (uint)!bVar4;
  }
  local_2c0[uVar10] = 0.0;
  local_2c0[bVar4] = param_1[uVar14 + 4];
  local_2c0[uVar14] = -param_1[bVar4 + 4];
  fVar16 = local_2c0[1] * local_2c0[1];
  fStack_29c = local_2c0[2] * local_2c0[2];
  auVar22._4_4_ = fVar16;
  auVar22._0_4_ = fVar16;
  auVar22._8_4_ = fVar16;
  auVar22._12_4_ = fVar16;
  auVar23._4_12_ = auVar22._4_12_;
  auVar23._0_4_ = fVar16 + local_2c0[0] * local_2c0[0];
  auVar24._4_4_ = fStack_29c;
  auVar24._0_4_ = fStack_29c + auVar23._0_4_;
  auVar24._8_4_ = fStack_29c;
  auVar24._12_4_ = fStack_29c;
  auVar24 = rsqrtss(auVar23,auVar24);
  local_2a0 = auVar24._0_4_;
  local_2c0[3] = local_2a0 * 0.5 * (3.0 - (fStack_29c + auVar23._0_4_) * local_2a0 * local_2a0);
  local_2c0[0] = local_2c0[3] * local_2c0[0];
  local_2c0[1] = local_2c0[3] * local_2c0[1];
  local_2c0[2] = local_2c0[3] * local_2c0[2];
  local_2c0[3] = local_2c0[3] * 0.0;
  local_2b0 = param_1[5] * local_2c0[2] - param_1[6] * local_2c0[1];
  fStack_2ac = param_1[6] * local_2c0[0] - param_1[4] * local_2c0[2];
  fStack_2a8 = param_1[4] * local_2c0[1] - param_1[5] * local_2c0[0];
  fStack_2a4 = param_1[7] * local_2c0[3] - param_1[7] * local_2c0[3];
  fStack_298 = fStack_29c;
  fStack_294 = fStack_29c;
  FUN_0094f6b0(local_220,local_1d0,&local_2d0,local_180);
  fVar15 = (float10)FUN_0094fc90(local_180,param_2,local_290,local_290 + 8);
  *param_7 = (float)fVar15;
  *(float *)(param_5 + 0x10) = local_290[0];
  *(float *)(param_5 + 0x14) = local_290[1];
  *(float *)(param_5 + 0x18) = local_290[2];
  *(float *)(param_5 + 0x1c) = local_290[3];
  iVar12 = *(int *)(param_3 + 0x50);
  *(float *)(iVar12 + 0xd0) = local_290[0];
  *(float *)(iVar12 + 0xd4) = local_290[1];
  *(float *)(iVar12 + 0xd8) = local_290[2];
  *(float *)(iVar12 + 0xdc) = local_290[3];
  iVar12 = *(int *)(param_3 + 0x50);
  *(float *)(iVar12 + 0xe0) = local_290[4];
  *(float *)(iVar12 + 0xe4) = local_290[5];
  *(float *)(iVar12 + 0xe8) = local_290[6];
  *(float *)(iVar12 + 0xec) = local_290[7];
  *(float *)(param_6 + 0x10) = local_290[8];
  *(float *)(param_6 + 0x14) = local_290[9];
  *(float *)(param_6 + 0x18) = local_290[10];
  *(undefined4 *)(param_6 + 0x1c) = uStack_264;
  iVar12 = *(int *)(param_4 + 0x50);
  *(float *)(iVar12 + 0xd0) = local_290[8];
  *(float *)(iVar12 + 0xd4) = local_290[9];
  *(float *)(iVar12 + 0xd8) = local_290[10];
  *(undefined4 *)(iVar12 + 0xdc) = uStack_264;
  iVar12 = *(int *)(param_4 + 0x50);
  *(undefined4 *)(iVar12 + 0xe0) = local_260;
  *(undefined4 *)(iVar12 + 0xe4) = uStack_25c;
  *(undefined4 *)(iVar12 + 0xe8) = uStack_258;
  *(undefined4 *)(iVar12 + 0xec) = uStack_254;
  pfVar11 = local_290 + 4;
  iVar12 = 2;
  do {
    fVar16 = *pfVar11;
    fVar18 = pfVar11[1];
    fVar20 = pfVar11[2];
    fVar25 = pfVar11[3];
    if (*(char *)(param_5 + 0xc) == '\0') {
      fVar25 = *(float *)(param_5 + 0x7c) * fVar20;
      fVar26 = *(float *)(param_5 + 0x68) * fVar18;
      fVar27 = *(float *)(param_5 + 0x6c) * fVar18;
      fVar17 = *(float *)(param_5 + 0x54) * fVar16;
      fVar19 = *(float *)(param_5 + 0x58) * fVar16;
      fVar21 = *(float *)(param_5 + 0x5c) * fVar16;
      fVar16 = *(float *)(param_5 + 0x50) * fVar16 + *(float *)(param_5 + 0x60) * fVar18 +
               *(float *)(param_5 + 0x70) * fVar20;
      fVar18 = fVar17 + *(float *)(param_5 + 100) * fVar18 + *(float *)(param_5 + 0x74) * fVar20;
      fVar20 = fVar19 + fVar26 + *(float *)(param_5 + 0x78) * fVar20;
      fVar25 = fVar21 + fVar27 + fVar25;
    }
    pfVar11 = pfVar11 + 8;
    iVar12 = iVar12 + -1;
    *(float *)(param_5 + 0x20) = fVar16;
    *(float *)(param_5 + 0x24) = fVar18;
    *(float *)(param_5 + 0x28) = fVar20;
    *(float *)(param_5 + 0x2c) = fVar25;
    param_5 = param_6;
  } while (iVar12 != 0);
  return;
}



void FUN_0091feb0(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a9dd6c;
  in_ECX[2] = 0x20000;
  return;
}



int FUN_0091ff70(undefined4 param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  char *pcVar5;
  float fVar6;
  int local_2c;
  int local_28;
  int local_24;
  
  pfVar4 = *(float **)(param_2 + 4);
  iVar1 = *(int *)(param_2 + 0xc);
  iVar2 = *(int *)(param_2 + 0x10);
  local_2c = 0;
  pcVar5 = (char *)(param_2 + 0x18);
  local_28 = 1;
  local_24 = 2;
switchD_0091ffab_default:
  iVar3 = (int)*pcVar5;
  switch(iVar3) {
  case 0:
  case 1:
  case 7:
  case 8:
    goto switchD_0091ffab_caseD_0;
  case 2:
    if (param_3 < local_28) {
      return local_2c;
    }
    local_2c = local_2c + 1;
    local_24 = local_24 + 1;
    local_28 = local_28 + 1;
    fVar6 = *(float *)(iVar1 + 0x28) * pfVar4[6] + *(float *)(iVar2 + 0x28) * pfVar4[10] +
            (*(float *)(iVar1 + 0x18) - *(float *)(iVar2 + 0x18)) * pfVar4[2] +
            *(float *)(iVar1 + 0x24) * pfVar4[5] + *(float *)(iVar2 + 0x24) * pfVar4[9] +
            (*(float *)(iVar1 + 0x14) - *(float *)(iVar2 + 0x14)) * pfVar4[1] +
            *(float *)(iVar1 + 0x20) * pfVar4[4] + *(float *)(iVar2 + 0x20) * pfVar4[8] +
            (*(float *)(iVar1 + 0x10) - *(float *)(iVar2 + 0x10)) * *pfVar4;
    if (0.0 < fVar6) {
      fVar6 = 0.0;
    }
    *param_4 = fVar6;
    param_4 = param_4 + 1;
    pfVar4 = pfVar4 + 0xc;
    pcVar5 = pcVar5 + (byte)pcVar5[1];
    goto switchD_0091ffab_default;
  case 3:
    if (param_3 < local_24) {
      return local_2c;
    }
    local_2c = local_2c + 2;
    local_24 = local_24 + 2;
    local_28 = local_28 + 2;
    fVar6 = *(float *)(iVar1 + 0x28) * pfVar4[6] + *(float *)(iVar2 + 0x28) * pfVar4[10] +
            (*(float *)(iVar1 + 0x18) - *(float *)(iVar2 + 0x18)) * pfVar4[2] +
            *(float *)(iVar1 + 0x24) * pfVar4[5] + *(float *)(iVar2 + 0x24) * pfVar4[9] +
            (*(float *)(iVar1 + 0x14) - *(float *)(iVar2 + 0x14)) * pfVar4[1] +
            *(float *)(iVar1 + 0x20) * pfVar4[4] + *(float *)(iVar2 + 0x20) * pfVar4[8] +
            (*(float *)(iVar1 + 0x10) - *(float *)(iVar2 + 0x10)) * *pfVar4;
    if (0.0 < fVar6) {
      fVar6 = 0.0;
    }
    *param_4 = fVar6;
    fVar6 = *(float *)(iVar1 + 0x28) * pfVar4[0x12] + *(float *)(iVar2 + 0x28) * pfVar4[0x16] +
            (*(float *)(iVar1 + 0x18) - *(float *)(iVar2 + 0x18)) * pfVar4[0xe] +
            *(float *)(iVar1 + 0x24) * pfVar4[0x11] + *(float *)(iVar2 + 0x24) * pfVar4[0x15] +
            (*(float *)(iVar1 + 0x14) - *(float *)(iVar2 + 0x14)) * pfVar4[0xd] +
            *(float *)(iVar1 + 0x20) * pfVar4[0x10] + *(float *)(iVar2 + 0x20) * pfVar4[0x14] +
            (*(float *)(iVar1 + 0x10) - *(float *)(iVar2 + 0x10)) * pfVar4[0xc];
    if (0.0 < fVar6) {
      fVar6 = 0.0;
    }
    param_4[1] = fVar6;
    param_4 = param_4 + 2;
    pfVar4 = pfVar4 + 0x18;
    pcVar5 = pcVar5 + (byte)pcVar5[1];
    goto switchD_0091ffab_default;
  case 4:
  case 9:
  case 10:
    do {
      pcVar5 = pcVar5 + (byte)pcVar5[1];
      pfVar4 = pfVar4 + 8;
    } while (*pcVar5 == iVar3);
    goto switchD_0091ffab_default;
  case 5:
  case 6:
  case 0xb:
    do {
      pcVar5 = pcVar5 + (byte)pcVar5[1];
      pfVar4 = pfVar4 + 0xc;
    } while (*pcVar5 == iVar3);
    goto switchD_0091ffab_default;
  case 0xc:
    pfVar4 = pfVar4 + 8;
    pcVar5 = pcVar5 + (byte)pcVar5[1];
    goto switchD_0091ffab_default;
  case 0xd:
    if (param_3 < local_28) {
      return local_2c;
    }
    local_2c = local_2c + 1;
    local_24 = local_24 + 1;
    local_28 = local_28 + 1;
    *param_4 = *(float *)(iVar1 + 0x28) * pfVar4[6] + *(float *)(iVar2 + 0x28) * pfVar4[10] +
               (*(float *)(iVar1 + 0x18) - *(float *)(iVar2 + 0x18)) * pfVar4[2] +
               *(float *)(iVar1 + 0x24) * pfVar4[5] + *(float *)(iVar2 + 0x24) * pfVar4[9] +
               (*(float *)(iVar1 + 0x14) - *(float *)(iVar2 + 0x14)) * pfVar4[1] +
               *(float *)(iVar1 + 0x20) * pfVar4[4] + *(float *)(iVar2 + 0x20) * pfVar4[8] +
               (*(float *)(iVar1 + 0x10) - *(float *)(iVar2 + 0x10)) * *pfVar4;
    param_4 = param_4 + 1;
    pfVar4 = pfVar4 + 0xc;
    break;
  default:
    goto switchD_0091ffab_default;
  }
  pcVar5 = pcVar5 + (byte)pcVar5[1];
  goto switchD_0091ffab_default;
switchD_0091ffab_caseD_0:
  return local_2c;
}


